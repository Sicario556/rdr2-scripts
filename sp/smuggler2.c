void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_2116 = -1679307491;
	vLocal_2136 = { 987.621f, -6742.848f, 62.154f };
	vLocal_2139 = { 270f, 0f, -166f };
	iLocal_2143 = -1;
	iLocal_2146 = -1141160886;
	vLocal_2147 = { 1000.635f, -6740.55f, 58.142f };
	vLocal_2150 = { -90f, 0f, -219f };
	iLocal_2154 = 907844324;
	vLocal_2155 = { 987.678f, -6773.369f, 48.896f };
	vLocal_2158 = { -90f, 0f, -161f };
	iLocal_2162 = -1;
	vLocal_2163 = { 969.4f, -6789.1f, 42.3f };
	iLocal_2260 = -1;
	iLocal_2283 = -1;
	iLocal_2301 = 63;
	iLocal_2303 = -1;
	iLocal_2306 = -1;
	vLocal_2314 = { 986.58f, -6747.51f, 62.1432f };
	vLocal_2317 = { 87.2195f, 164.362f, -18.6157f };
	iLocal_2324 = 72;
	iLocal_2325 = 23;
	iLocal_2326 = 22;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_2378, 1073741824);
		func_2(&uLocal_2378, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_2378);
	func_5(&uLocal_2378);
	while (!func_6(&uLocal_2378, -2147483648))
	{
		func_7(&uLocal_2378);
		wait(0);
	}
	while (!func_2(&uLocal_2378, 0))
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
	iLocal_127 = func_125(uParam0);
	iLocal_127 = iLocal_127;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(uParam0)) };
			if (func_33(uParam0) != 0)
			{
				Var2 = { func_126(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(uParam0, 1048576);
			}
			func_107(uParam0, 0);
			if (func_128(uParam0, 3) || func_129())
			{
				func_130(uParam0, func_126(uParam0->f_607), 0);
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
			func_107(uParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[uParam0->f_607]->f_8), 0, func_132(func_33(uParam0)), func_105());
	}
	func_133(uParam0);
	func_134(uParam0, 0);
	func_135(uParam0, 0);
	if (!func_136(uParam0, func_33(uParam0)))
	{
		func_107(uParam0, 0);
	}
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	func_103(uParam0, 2097152);
	func_140(uParam0, func_33(uParam0), 134217728);
	if (func_82(32768))
	{
		func_1(uParam0, 4);
	}
	func_141(uParam0);
	func_142(uParam0, func_33(uParam0));
	func_143(func_61(uParam0));
	if (!func_120(uParam0, 65536))
	{
		func_144(func_61(uParam0));
	}
	func_145(uParam0, player_ped_id(), "ARTHUR", 0);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0);
	func_149(uParam0, 30f);
	func_150(uParam0, 40f);
	func_151(uParam0, Global_35, 0, 0, 0, 0, 0);
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
		func_152();
	}
	if (!func_8(uParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(uParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(uParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(uParam0, 64);
			}
			func_156(uParam0, 0);
			func_157(uParam0);
			if (func_158(uParam0))
			{
				if (!is_entity_dead(func_159(uParam0)) && func_128(uParam0, 3))
				{
					freeze_entity_position(func_159(uParam0), false);
				}
				func_160(uParam0, 1);
			}
			if (func_6(uParam0, -2147483648))
			{
				func_160(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 2);
			}
			func_156(uParam0, func_162(uParam0, func_33(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(uParam0) < 2)
	{
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	if (func_22(uParam0) == 0)
	{
		_disable_first_person_cam_this_frame_2();
	}
	clear_bit(&(Global_1956580->f_1), 6);
	_0x6035e8fbca32ac5e();
	_0xbc90bdf4e5228ea1();
	func_163();
	func_165(uParam0, func_164(6), 1);
	func_166(0);
	func_167(uParam0, func_164(6));
	func_168(uParam0, func_164(6));
	func_169();
	func_170(uParam0, 1);
	func_171(0, 11);
	func_172();
	func_173();
	func_174();
	func_175();
	func_93();
	pause_clock(false, 0);
	func_176(25);
	set_roads_back_to_original(455.4888f, -7358.837f, -170.5122f, 1558.742f, -6413.559f, 117.7062f, 0, 1);
	func_177(1);
	_display_hud_component(iVar2113);
	clear_bit(&(Global_1956580->f_1), 4);
	if (func_164(126) && !iVar2303 == -1)
	{
		if (is_stream_playing(iVar2303))
		{
			stop_stream(iVar2303);
		}
		iLocal_2306 = -1;
	}
	if (func_164(68))
	{
		set_ped_config_flag(Global_35, 308, false);
		func_178(68);
	}
	if (func_164(1))
	{
		func_179();
		func_178(1);
	}
	if (!func_164(6))
	{
		clear_area(func_126(42), 500f, 1065787);
	}
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	func_180(func_164(127));
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
	iVar0 = func_181(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_182(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_184(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_185(iParam0) && !func_186(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_187(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_185(iParam0))
	{
		iParam2 = -1;
	}
	if (func_188(iParam0) == 3 || (func_188(iParam0) == 1 && _0x01f4d242765c6b24(func_187(iParam0))))
	{
		func_190(func_189(iParam0), func_187(iParam0), iParam2);
		if ((!func_184(Global_1572864->f_8) && !func_191(0, 1, 0)) && !func_192(&Global_1935630, 32768))
		{
			iVar0 = func_193(iParam0);
			if (iVar0 != -1)
			{
				func_194(0);
			}
			else if (func_189(iParam0) == 8)
			{
				iVar0 = func_195();
				if (iVar0 != -1)
				{
					func_194(0);
				}
			}
		}
	}
	func_196(iParam0, 0);
	if (func_197(0) == iParam0)
	{
		func_40(1);
		func_198(0);
		func_199(1);
	}
	func_200(iParam0, 1);
	func_201(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_202(0);
	func_203(0);
	func_64(0);
	func_65(0);
	func_204(0);
	func_205(1f);
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
		func_206();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_207())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_208())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_187(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_209(0);
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
		func_210(iVar0, iParam0);
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
		if (func_211((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_212((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_212((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_212((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_213(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_214(uParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_215(&(uParam0->f_13118)) >= 4000)
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
	func_216(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_184(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	func_218(&Var0, func_217(1, 0, iParam0));
	return Var0;
}

int func_35(var uParam0)
{
	return func_219(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_202(0);
	func_220(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_211((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_221((*uParam0)[iVar0]);
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
			func_222(iVar0, 4096);
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
		func_223(Global_1935630, 4194304);
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
	func_224();
	func_225();
	func_226();
	func_227();
}

void func_43()
{
	if (func_228())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_229(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_230();
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
	func_231(1, iParam0, iParam1);
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
	return (func_232() || func_54());
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
	func_233(uParam0);
	func_234(uParam0, 0);
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
		func_235(iVar0);
		iVar0++;
	}
	func_236();
	func_237();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_238())
	{
		if (func_239(255))
		{
			if (!func_240(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_241(Global_1894899->f_2) && func_242(Global_1894899->f_2))
		{
			func_243(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_244(16);
			}
		}
		else if (func_241(Global_1894899->f_2) && !func_245(Global_1894899->f_2, 2))
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
		func_246(16);
		func_247();
		if (bVar0)
		{
			func_246(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_248(uParam0->f_5423[iVar0]))
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
	if (func_249(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_250(uParam0->f_5421))
		{
			iVar1 = func_251(uParam0->f_5421, iVar0);
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
		if (func_252(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_253(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_254(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_255(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_256(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_257(7);
		}
		else
		{
			func_258(iVar0, 0);
		}
		func_259(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_261(iParam0, 32);
	func_262();
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
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_264(iParam0) };
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
		func_204(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_204(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_265(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_211((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_212((*uParam1)[iVar0], 1);
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
	iVar0 = func_189(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_266(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_267(iVar1))
			{
				if (func_268(iVar1, 4))
				{
					func_269(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_270(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_266(iParam0);
		if (iVar3 == 59)
		{
			func_270(1);
		}
		else if (iVar3 == 61)
		{
			func_270(0);
		}
		else if (iVar3 == 83)
		{
			func_270(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_267(iVar0))
		{
			if (func_268(iVar0, 4))
			{
				if (func_268(iVar0, 16))
				{
					func_271(iVar0, 1);
				}
				if (func_268(iVar0, 8))
				{
					func_272(iVar0, 1);
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
	iVar1 = func_162(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_273(uParam0) == 0 && iVar0 == 0)
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
		func_274(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_275(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_276(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_277(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_241(iParam0))
	{
		return;
	}
	bVar0 = func_245(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_278(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_280(iParam0, func_279());
			func_281(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_282(iParam0, 67108864);
		func_280(iParam0, -15);
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
	if (!func_184(iParam0))
	{
		return;
	}
	if (func_290(iParam0) == 4)
	{
		func_291(iParam0, func_279());
		if (!func_188(iParam0) == 5 && !func_188(iParam0) == 6)
		{
			if (bParam3)
			{
				func_196(iParam0, 6);
			}
			else
			{
				func_196(iParam0, 5);
			}
			func_201(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_189(iParam0);
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
		func_198(0);
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
				if (bParam1 && func_188(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_266(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_266(iParam0)]->f_8), true);
						}
					}
					else if ((func_266(iParam0) != 95 && func_266(iParam0) != 82) && !func_295((*Global_1347702)[func_266(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_266(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_266(iParam0)]->f_8), true);
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
		func_297(func_266(iParam0), iVar6, func_296());
	}
	else if (iVar0 == 8)
	{
		func_299(func_266(iParam0), iVar6, func_296(), func_298());
	}
	if (!func_188(iParam0) == 5 && !func_188(iParam0) == 6)
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
				iVar10 = func_302(func_266(iParam0), &iVar11);
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
				iVar10 = func_306(func_266(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_303((iVar10 - 20), 0, iVar10);
					iVar11 = func_303((iVar11 - 10), 0, iVar11);
				}
				func_305(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_307(func_266(iParam0)))
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
	func_200(iParam0, 1);
	func_291(iParam0, func_279());
	func_201(iParam0);
	if ((!func_188(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_193(iParam0);
		if (iVar12 != -1)
		{
			func_194(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_195();
			if (iVar12 != -1)
			{
				func_194(0);
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
				switch (func_266(iParam0))
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
				if (func_267(func_266(iParam0)) && func_295((*Global_1347702)[func_266(iParam0)]->f_12, 4))
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
				if (func_266(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_266(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_188(iParam0) == 5 && !func_188(iParam0) == 6)
	{
		if (bParam3)
		{
			func_196(iParam0, 6);
		}
		else
		{
			func_196(iParam0, 5);
		}
		func_201(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_266(iParam0))
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
							iVar15 = func_279();
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
								iVar16 = func_279();
								func_328(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_329(1937177603, iVar16, 1);
							}
						}
						if (func_340(4))
						{
							if (!func_341(684296857, 1, 0))
							{
								iVar17 = func_279();
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
				switch (func_266(iParam0))
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
				switch (func_266(iParam0))
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
				switch (func_266(iParam0))
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
				if (func_295((*Global_1347702)[func_266(iParam0)]->f_12, 536870912))
				{
					func_356(11, 1);
				}
				switch (func_266(iParam0))
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
			if (!func_188(iParam0) == 0)
			{
				if (func_187(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_187(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_190(func_189(iParam0), func_187(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_266(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_360(func_359(Global_1879514->f_1));
						if (iVar0 == 8 && func_266(iParam0) == 58)
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
						if (func_267(func_266(iParam0)) && func_295((*Global_1347702)[func_266(iParam0)]->f_12, 1))
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
	func_199(1);
	if ((bVar13 || func_129()) && (func_189(iParam0) == 1 || func_189(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_187(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_190(func_189(iParam0), func_187(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_189(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_357(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_362();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_186(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_185(iParam0))
	{
		if (!func_188(iParam0) == 5 && !func_188(iParam0) == 6)
		{
			if (bParam1)
			{
				func_196(iParam0, 6);
			}
			else
			{
				func_196(iParam0, 5);
			}
			func_201(iParam0);
		}
	}
	switch (func_189(iParam0))
	{
		case 1:
			switch (func_266(iParam0))
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
			switch (func_266(iParam0))
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
	if (!func_184(iParam0))
	{
		return;
	}
	if (iParam0 != func_197(0))
	{
		return;
	}
	if (func_187(iParam0) == 0)
	{
	}
	iVar0 = func_189(iParam0);
	if (func_188(iParam0) == 3)
	{
		if (func_187(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_187(iParam0)))
		{
			if (func_189(iParam0) != 1 && func_189(iParam0) != 8)
			{
				func_190(func_189(iParam0), func_187(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_201(iParam0);
	func_40(1);
	func_198(0);
	func_196(iParam0, 0);
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
	func_199(1);
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
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
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
		func_205(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_223(Global_1935630, 2048);
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
	if (func_192(&Global_1935630, 524288))
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
	uParam0->f_634[0] = 62131;
	uParam0->f_634[1] = 62131;
	uParam0->f_637 = 0;
	func_379(uParam0, *uParam1);
	func_380(uParam0);
}

void func_109(var uParam0)
{
	func_381();
	func_382();
	func_383();
	if (!func_384(uParam0) == 0)
	{
		func_385(2, 1);
	}
}

char[] func_110(int iParam0)
{
	if (!func_183(iParam0))
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
			func_386(iVar0, iVar1);
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
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 33554432);
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
	return func_387(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_388(&(uParam0->f_7375));
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

int func_125(var uParam0)
{
	return uParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_389(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_390(Param0, Param0.f_3);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_391())
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

void func_130(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_120(uParam0, 33554432))
	{
		return;
	}
	if (func_120(uParam0, 4096))
	{
		return;
	}
	if (func_392(vParam1))
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
	func_214(&(uParam0->f_603));
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
		return func_393();
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

void func_133(var uParam0)
{
	if (_uilog_is_entry_registered(2, func_85(uParam0)))
	{
		_uilog_remove_entry(2, func_85(uParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(uParam0)))
	{
		func_394(uParam0->f_607);
	}
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	func_27(&(uParam0->f_600), 1);
}

bool func_136(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(var uParam0)
{
	func_395(&(uParam0->f_638));
	func_396(&(uParam0->f_819));
	func_397(&(uParam0->f_1020));
	func_398(&(uParam0->f_1081));
	func_399(&(uParam0->f_1126));
	func_400(&(uParam0->f_5147));
	func_401(&(uParam0->f_1124));
	func_402(&(uParam0->f_5188));
	func_403(&(uParam0->f_5239));
	func_404(&(uParam0->f_5249));
	func_405(&(uParam0->f_5265));
	func_406(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_407(uParam0, -1816535547, 512);
	func_407(uParam0, 225514697, 262144);
	func_407(uParam0, 1944593012, 262144);
	func_407(uParam0, -566878875, 262144);
	func_407(uParam0, 2070393450, 262144);
	func_407(uParam0, 1276534479, 262144);
	func_407(uParam0, -229065721, 262144);
	func_407(uParam0, 217912393, 262144);
	func_407(uParam0, 749266870, 262144);
	func_407(uParam0, -1613317544, 262144);
	func_407(uParam0, -1816535547, 512);
}

void func_139(var uParam0)
{
	vLocal_243[0]->f_2 = 67108863;
	vLocal_243[1]->f_2 = 67108863;
	vLocal_243[2]->f_2 = 67108863;
	vLocal_243[3]->f_2 = 67108863;
	vLocal_243[4]->f_2 = 67108863;
	vLocal_243[7]->f_2 = 67108863;
	vLocal_243[6]->f_2 = 524320;
	vLocal_243[8]->f_2 = 67108863;
	vLocal_243[9]->f_2 = 67108863;
	vLocal_243[10]->f_2 = 67108863;
	vLocal_243[11]->f_2 = 1;
	vLocal_243[12]->f_2 = 1;
	vLocal_243[14]->f_2 = 4;
	vLocal_243[13]->f_2 = 67108863;
	vLocal_243[15]->f_2 = 67108863;
	vLocal_243[21]->f_2 = 67108863;
	vLocal_243[22]->f_2 = 1;
	vLocal_243[23]->f_2 = 67108863;
	vLocal_243[24]->f_2 = 4;
	vLocal_243[27]->f_2 = 0;
	vLocal_243[28]->f_2 = 0;
	vLocal_243[29]->f_2 = 0;
	vLocal_243[30]->f_2 = 0;
	vLocal_243[31]->f_2 = 0;
	vLocal_243[32]->f_2 = 0;
	vLocal_243[33]->f_2 = 67108863;
	vLocal_243[35]->f_2 = 67108863;
	vLocal_243[44]->f_2 = 4;
	vLocal_243[45]->f_2 = 0;
	vLocal_243[46]->f_2 = 0;
	vLocal_243[47]->f_2 = 0;
	vLocal_243[48]->f_2 = 16;
	vLocal_243[49]->f_2 = 16;
	vLocal_243[52]->f_2 = 0;
	vLocal_243[53]->f_2 = 0;
	vLocal_243[54]->f_2 = 32;
	vLocal_243[55]->f_2 = 32;
	vLocal_243[56]->f_2 = 32;
	vLocal_243[57]->f_2 = 32;
	vLocal_243[54]->f_2 = 32;
	vLocal_243[58]->f_2 = 32;
	vLocal_243[59]->f_2 = 32;
	func_408(uParam0, 67108863);
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_409(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 2);
	func_103(uParam0, 1);
	func_223(Global_1935630, 262144);
}

void func_142(var uParam0, int iParam1)
{
	func_410(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_264(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_411(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_249(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_412() };
	}
}

void func_147(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(uParam0->f_603), 1);
	}
}

void func_148(var uParam0)
{
}

void func_149(var uParam0, float fParam1)
{
	func_413(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_414(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_415(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_373(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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

int func_154(var uParam0)
{
	return *uParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_183(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(var uParam0, bool bParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 134217728))
	{
		func_139(uParam0);
		func_140(uParam0, func_33(uParam0), 134217728);
	}
	if (bParam1 && !func_121(uParam0, func_35(uParam0), 536870912))
	{
		if (func_416(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_417(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_416(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

void func_157(var uParam0)
{
	_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
}

bool func_158(var uParam0)
{
	if (func_418(uParam0) < 1)
	{
		func_419(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_420(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(uParam0, 4) && !func_105()) && !func_128(uParam0, 3))
	{
		if (!func_120(uParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(uParam0, 32);
			}
			else
			{
				func_421(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_422(uParam0);
		}
	}
	switch (func_418(uParam0))
	{
		case -1:
		case 0:
			func_423(uParam0, 1);
			break;
		case 1:
			if (func_424(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_423(uParam0, 2);
				}
				else
				{
					func_423(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_425(uParam0))
			{
				func_423(uParam0, 3);
			}
			break;
		case 3:
			if (func_426(uParam0))
			{
				func_423(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_159(var uParam0)
{
	return uParam0->f_5408;
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_161(var uParam0)
{
	if (func_33(uParam0) == 26)
	{
		func_427(uParam0, 0);
		return true;
	}
	if (func_428(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_427(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_428(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163()
{
	if (does_pickup_exist(iVar2133))
	{
		remove_pickup(iVar2133);
	}
	if (does_pickup_exist(iVar2143))
	{
		remove_pickup(iVar2143);
	}
	if (does_pickup_exist(iVar2151))
	{
		remove_pickup(iVar2151);
	}
	if (does_pickup_exist(iVar2318))
	{
		remove_pickup(iVar2318);
	}
}

bool func_164(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return func_430(&(uLocal_225[iVar1]), func_429(iVar0));
}

void func_165(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_431(uParam0, &(iLocal_1233[iVar0]));
		func_432(&(uParam0->f_7375), &(iLocal_1233[iVar0]), 0);
	}
	iVar0 = 0;
	while (iVar0 < iVar1228)
	{
		if ((does_entity_exist(&(iLocal_1233[iVar0])) && is_entity_a_mission_entity(&(iLocal_1233[iVar0]))) && does_entity_belong_to_this_script(&(iLocal_1233[iVar0]), false))
		{
			delete_object(iLocal_1233[iVar0]);
		}
		iVar0++;
	}
}

void func_166(bool bParam0)
{
	iVar0 = 2;
	while (iVar0 <= 6)
	{
		if (!does_entity_exist(&(Local_424[iVar0])) || is_entity_dead(&(Local_424[iVar0])))
		{
		}
		else if (func_433(iVar0) == -1)
		{
			set_entity_invincible(&(Local_424[iVar0]), bParam0);
		}
		else
		{
			func_434(func_433(iVar0), bParam0, 0, 1);
		}
		iVar0++;
	}
}

void func_167(var uParam0, bool bParam1)
{
	func_435(uParam0, 1, 100);
	if (!bParam1)
	{
		_0x9851de7aec10b4e1(func_126(42), 500f, 1, 0);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
}

void func_169()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_385(iVar0, 0);
		iVar0++;
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (!func_164(6))
	{
		if ((does_entity_exist(Local_1700.f_1) && is_entity_a_mission_entity(Local_1700.f_1)) && does_entity_belong_to_this_script(Local_1700.f_1, false))
		{
			if (bParam1)
			{
				func_431(uParam0, Local_1700.f_1);
				func_432(&(uParam0->f_7375), Local_1700.f_1, 0);
			}
			delete_vehicle(&(Local_1700.f_1));
		}
	}
	func_436(9);
	iVar0 = 0;
	while (iVar0 < Local_1700.f_3)
	{
		if (does_entity_exist(Local_1700.f_3[iVar0]->f_13.f_9))
		{
			delete_object(&(Local_1700.f_3[iVar0]->f_13.f_9));
		}
		iVar0++;
	}
	if ((does_entity_exist(iVar2100) && is_entity_a_mission_entity(iVar2100)) && does_entity_belong_to_this_script(iVar2100, false))
	{
		if (bParam1)
		{
			func_431(uParam0, iVar2100);
			func_432(&(uParam0->f_7375), iVar2100, 0);
		}
		if (!is_entity_dead(Global_35) && !is_entity_dead(iVar2100))
		{
			if (is_ped_in_vehicle(Global_35, iVar2100, false))
			{
				_0xe0b61ed8bb37712f(Global_35);
			}
		}
		delete_vehicle(&vLocal_2104);
		remove_vehicle_asset(749266870);
		func_436(8);
	}
}

void func_171(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (_0xc276fe69dda22bad(&(iLocal_230[iVar0])))
		{
			remove_cover_point(&(iLocal_230[iVar0]));
		}
		iVar0++;
	}
}

void func_172()
{
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		func_436(iVar0);
		iVar0++;
	}
}

void func_173()
{
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		iVar1 = iVar0;
		switch (&vLocal_243[iVar1])
		{
			case 0:
				break;
			case 1:
				if (vLocal_243[iVar1]->f_1 == 1)
				{
					request_model(func_437(iVar1), false);
				}
				else if (vLocal_243[iVar1]->f_1 == 2)
				{
					request_waypoint_recording(func_438(iVar1));
				}
				else if (vLocal_243[iVar1]->f_1 == 3)
				{
					_0x72d4cb5db927009c(func_439(iVar1), -1, 0);
				}
				else if (vLocal_243[iVar1]->f_1 == 4)
				{
					request_anim_dict(func_440(iVar1, 1));
				}
				vLocal_243[iVar1] = 2;
				break;
			case 2:
				if ((((vLocal_243[iVar1]->f_1 == 1 && has_model_loaded(func_437(iVar1))) || (vLocal_243[iVar1]->f_1 == 2 && get_is_waypoint_recording_loaded(func_438(iVar1)))) || (vLocal_243[iVar1]->f_1 == 3 && _0xff07cf465f48b830(func_439(iVar1)))) || (vLocal_243[iVar1]->f_1 == 4 && has_anim_dict_loaded(func_440(iVar1, 1))))
				{
					vLocal_243[iVar1] = 3;
				}
				break;
			case 3:
				break;
			case 4:
				if (vLocal_243[iVar1]->f_1 == 1)
				{
					set_model_as_no_longer_needed(func_437(iVar1));
				}
				else if (vLocal_243[iVar1]->f_1 == 2)
				{
					remove_waypoint_recording(func_438(iVar1));
				}
				else if (vLocal_243[iVar1]->f_1 == 3)
				{
					_0xc3896d03e2852236(func_439(iVar1));
				}
				else if (vLocal_243[iVar1]->f_1 == 4)
				{
					remove_anim_dict(func_440(iVar1, 1));
				}
				vLocal_243[iVar1] = 0;
				break;
		}
		iVar0++;
	}
}

void func_174()
{
	iVar0 = 0;
	while (iVar0 < iVar1492)
	{
		if (does_cam_exist(&(iLocal_1494[iVar0])))
		{
			func_441(iVar0);
		}
		iVar0++;
	}
}

void func_175()
{
	_delete_volume(Local_128);
	_delete_volume(Local_128.f_1);
	_delete_volume(Local_128.f_2);
	_delete_volume(Local_128.f_3);
	_delete_volume(Local_128.f_4);
	_delete_volume(Local_128.f_5);
	_delete_volume(Local_128.f_6);
	_delete_volume(Local_128.f_7);
	_delete_volume(Local_128.f_8);
	_delete_volume(Local_128.f_9);
	_delete_volume(Local_128.f_10);
	_delete_volume(Local_128.f_11);
	_delete_volume(Local_128.f_12);
	_delete_volume(Local_128.f_13);
	_delete_volume(Local_128.f_14);
	_delete_volume(Local_128.f_15);
	_delete_volume(Local_128.f_16);
	_delete_volume(Local_128.f_17);
	_delete_volume(Local_128.f_18);
	_delete_volume(Local_128.f_19);
	_delete_volume(Local_128.f_20);
	_delete_volume(Local_128.f_21);
	_delete_volume(Local_128.f_22);
	_delete_volume(Local_128.f_23);
	_delete_volume(Local_128.f_24);
	_delete_volume(Local_128.f_25);
	_delete_volume(Local_128.f_26);
	_delete_volume(Local_128.f_27);
	_delete_volume(Local_128.f_28);
	_delete_volume(Local_128.f_29);
	_delete_volume(Local_128.f_30);
	_delete_volume(Local_128.f_31);
	_delete_volume(Local_128.f_32);
	_delete_volume(Local_128.f_33);
	_delete_volume(Local_128.f_34);
	_delete_volume(Local_128.f_35);
	_delete_volume(Local_128.f_36);
	_delete_volume(Local_128.f_37);
	_delete_volume(Local_128.f_38);
	_delete_volume(Local_128.f_39);
	_delete_volume(Local_128.f_40);
	_delete_volume(Local_128.f_41);
	_delete_volume(Local_128.f_42);
	_delete_volume(Local_128.f_43);
	_delete_volume(Local_128.f_44);
	_delete_volume(Local_128.f_45);
	_delete_volume(Local_128.f_46);
	_delete_volume(Local_128.f_47);
	_delete_volume(Local_128.f_48);
	_delete_volume(Local_128.f_49);
	_delete_volume(Local_128.f_50);
	_delete_volume(Local_128.f_51);
	_delete_volume(Local_128.f_52);
	_delete_volume(Local_128.f_53);
	_delete_volume(Local_128.f_54);
	_delete_volume(Local_128.f_55);
	_delete_volume(Local_128.f_56);
	_delete_volume(Local_128.f_57);
	_delete_volume(Local_128.f_58);
	_delete_volume(Local_128.f_59);
	_delete_volume(Local_128.f_60);
	_delete_volume(Local_128.f_61);
	_delete_volume(Local_128.f_62);
	_delete_volume(Local_128.f_63);
	_delete_volume(Local_128.f_64);
	_delete_volume(Local_128.f_65);
	_delete_volume(Local_128.f_66);
	_delete_volume(Local_128.f_67);
	_delete_volume(Local_128.f_68);
	_delete_volume(Local_128.f_69);
	_delete_volume(Local_128.f_70);
	_delete_volume(Local_128.f_71);
	_delete_volume(Local_128.f_72);
	_delete_volume(Local_128.f_73);
	_delete_volume(Local_128.f_74);
	_delete_volume(Local_128.f_75);
	_delete_volume(Local_128.f_76);
	_delete_volume(Local_128.f_77);
	_delete_volume(Local_128.f_78);
	_delete_volume(Local_128.f_79);
	_delete_volume(Local_128.f_80);
	_delete_volume(Local_128.f_81);
	_delete_volume(Local_128.f_82);
	_delete_volume(Local_128.f_83);
	_delete_volume(Local_128.f_84);
	_delete_volume(Local_128.f_85);
	_delete_volume(Local_128.f_86);
	_delete_volume(Local_128.f_87);
	_delete_volume(Local_128.f_88);
	_delete_volume(Local_128.f_89);
	_delete_volume(Local_128.f_90);
	_delete_volume(Local_128.f_91);
	_delete_volume(Local_128.f_92);
	_delete_volume(Local_128.f_93);
	_delete_volume(Local_128.f_94);
	_delete_volume(Local_128.f_95);
	_delete_volume(Local_128.f_96);
}

void func_176(int iParam0)
{
	if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
	{
		_request_imap(1694736240);
		_remove_imap(-313831898);
		if (_0x5ac0944c156e5f44("CIN_NAV_DOOR_BROKEN"))
		{
			_0x527b97c203bb8606("CIN_NAV_DOOR_BROKEN");
		}
		if (!_0x5ac0944c156e5f44("CIN_NAV_DOOR_INTACT"))
		{
			_0x7c334ff4d9215912("CIN_NAV_DOOR_INTACT");
		}
	}
	else if (iParam0 == 5 || iParam0 == 25)
	{
		_remove_imap(1694736240);
		_request_imap(-313831898);
		if (_0x5ac0944c156e5f44("CIN_NAV_DOOR_INTACT"))
		{
			_0x527b97c203bb8606("CIN_NAV_DOOR_INTACT");
		}
	}
}

void func_177(int iParam0)
{
	_0xa3716a77dcf17424(Global_35, &(iLocal_1452[0]), iParam0);
}

void func_178(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_442(uLocal_225[iVar1], func_429(iVar0));
}

void func_179()
{
	Global_1934765->f_273 = 0;
}

void func_180(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2325)
	{
		if (bParam0 && iVar0 == 7)
		{
		}
		else
		{
			func_443(iVar0);
		}
		iVar0++;
	}
}

int func_181(int iParam0)
{
	return iParam0;
}

void func_182(int iParam0)
{
	if (!func_444(iParam0))
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

bool func_183(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_184(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_185(int iParam0)
{
	iVar0 = func_290(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_186(int iParam0)
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
		iVar0 = func_188(iParam0);
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

int func_187(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_188(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_445(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_189(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	return func_447(func_446(iParam0));
}

void func_190(int iParam0, int iParam1, int iParam2)
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

bool func_191(int iParam0, bool bParam1, bool bParam2)
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
		if (func_448())
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
		iVar0 = func_266(&(Global_1898164->f_1[0]));
		if (func_267(iVar0) && func_295((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_184(&(Global_1898164->f_1[0])))
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

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_193(int iParam0)
{
	switch (func_189(iParam0))
	{
		case 1:
			iVar0 = func_266(iParam0);
			return func_449(iVar0);
		case 8:
			iVar1 = func_266(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_450(iVar1);
			}
			break;
	}
	return -1;
}

void func_194(bool bParam0)
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
		func_451(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_452();
		Global_1898077->f_9 = func_453(Global_1894899->f_2);
		func_454(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_195()
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

void func_196(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	func_455(iParam0, iParam1);
}

int func_197(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_198(bool bParam0)
{
	if (!bParam0 && func_456(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_199(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_200(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_197(0) != iParam0)
	{
		return;
	}
	if (func_457(iParam0))
	{
		if (bParam1)
		{
			func_458(-525676072);
		}
		else
		{
			func_459(-525676072);
		}
	}
}

int func_201(int iParam0)
{
	return func_461(func_460(iParam0));
}

void func_202(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_203(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_204(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_205(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_206()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_207()
{
	return func_462(_0xc17f69e1418cd11f(3));
}

bool func_208()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_209(int iParam0)
{
	iParam0 = func_260(iParam0);
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

int func_210(int iParam0, int iParam1)
{
	if (!func_463(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_464(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_211(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_212(char* sParam0, bool bParam1)
{
	if (func_211(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_465(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_465(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_465(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_465(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_465(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_465(sParam0, 1);
		return true;
	}
	func_465(sParam0, 1);
	return false;
}

bool func_213(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_214(var uParam0)
{
	func_466(uParam0, 0f);
}

int func_215(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_467(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_468() - round((uParam0->f_1 * 1000f)));
}

void func_216(bool bParam0, bool bParam1)
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
		func_469(0);
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

struct<4> func_217(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 0);
					case 1:
						return func_470(1, 0);
					case 2:
						return func_470(2, 0);
					case 3:
						return func_470(3, 0);
					case 4:
						return func_470(4, 0);
					case 5:
						return func_470(5, 0);
					case 25:
						return func_470(6, 0);
					case 26:
						return func_470(6, 0);
				}
			}
			else if (iParam1 == 5)
			{
				Var0 = { 0.536f, -1.28f, 0.548f };
				return Var0;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 1);
					case 1:
						return func_470(1, 1);
					case 2:
						return func_470(2, 1);
					case 3:
						return func_470(3, 1);
					case 4:
						return func_470(4, 1);
					case 5:
						return func_470(5, 1);
					case 25:
						return func_470(6, 1);
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 1)
				{
					Var0 = { -0.152f, 0.2f, -0.312f };
					return Var0;
				}
			}
			else if (iParam1 == 4)
			{
				if (iParam2 == 1)
				{
					Var0 = { 64.8f, 148.32f, -144f };
					return Var0;
				}
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 2);
					case 1:
						return func_470(1, 2);
					case 2:
						return func_470(2, 2);
					case 3:
						return func_470(3, 2);
					case 4:
						return func_470(4, 2);
					case 5:
						return func_470(5, 2);
					case 25:
						return func_470(6, 2);
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 1:
						return func_471(5, 0);
				}
			}
			else if (iParam1 == 2)
			{
				if (iParam2 == 1)
				{
					Var0 = { 986.8386f, -6747.514f, 66.5186f };
					Var0.f_3 = 0.75f;
					return Var0;
				}
				else
				{
					Jump @1490; //curOff = 728
					if (iParam1 == 0)
					{
						switch (iParam2)
						{
							case 0:
								return func_470(0, 3);
							case 1:
								return func_470(1, 3);
							case 2:
								return func_470(2, 3);
							case 3:
								return func_470(3, 3);
							case 4:
								return func_470(4, 3);
							case 5:
								return func_470(5, 3);
							case 25:
								return func_470(6, 3);
						}
					}
					else if (iParam1 == 2)
					{
						if (iParam2 == 1)
						{
							Var0 = { 987.1789f, -6749.318f, 66.2502f };
							Var0.f_3 = 0.75f;
							return Var0;
						}
						else
						{
							Jump @1490; //curOff = 924
							if (iParam1 == 0)
							{
								switch (iParam2)
								{
									case 0:
										return func_470(0, 4);
									case 1:
										return func_470(1, 4);
									case 2:
										return func_470(2, 4);
									case 3:
										return func_470(3, 4);
									case 4:
										return func_470(4, 4);
									case 5:
										return func_470(5, 4);
									case 25:
										return func_470(6, 4);
								}
							}
							else if (iParam1 == 1)
							{
								if (iParam2 == 4)
								{
									Var0 = { 983.0035f, -6752.285f, 58.2287f };
									Var0.f_3 = 160f;
									return Var0;
								}
							}
							Jump @1490; //curOff = 1117
							if (iParam1 == 0)
							{
								switch (iParam2)
								{
									case 0:
										return func_470(0, 5);
									case 1:
										return func_470(1, 5);
									case 2:
										return func_470(2, 5);
									case 3:
										return func_470(3, 5);
									case 4:
										return func_470(4, 5);
									case 5:
										return func_470(5, 5);
									case 25:
										return func_470(6, 5);
								}
							}
							else if (iParam1 == 1)
							{
								switch (iParam2)
								{
									case 1:
										return func_471(5, 1);
								}
							}
							Jump @1490; //curOff = 1295
							if (iParam1 == 0)
							{
								Var0 = { 997.4346f, -6753.405f, 63.098f };
								Var0.f_3 = 0f;
								return Var0;
							}
							else if (iParam1 == 1)
							{
								Var0 = { 991.7f, -6784.3f, 41.1f };
								Var0.f_3 = 0f;
								return Var0;
							}
							Jump @1490; //curOff = 1375
							if (iParam1 == 0)
							{
								Var0 = { 997.5873f, -6753.46f, 63.097f };
								Var0.f_3 = 0f;
								return Var0;
							}
							else if (iParam1 == 1)
							{
								Var0 = { 991.3f, -6784.3f, 41.1f };
								Var0.f_3 = 0f;
								return Var0;
							}
							Jump @1490; //curOff = 1455
							Var0 = { 973.4623f, -6762.983f, 42.8681f };
							return Var0;
						}
						if (iParam1 == 0)
						{
							switch (iParam0)
							{
								case 12:
									return func_470(7, 0);
								case 13:
								case 14:
								case 15:
								case 19:
								case 20:
								case 21:
									Var0 = { 964.6f, -6845.1f, 48.7f };
									Var0.f_3 = 8f;
									return Var0;
								case 16:
								case 17:
								case 18:
								case 22:
								case 23:
								case 24:
								case 25:
								case 26:
									Var0 = { 929.6f, -6835.8f, 42.1f };
									Var0.f_3 = -8.4f;
									return Var0;
								case 27:
									if (iParam2 == 4)
									{
										Var0 = { 988.4f, -6725f, 53.8f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 0);
									}
									break;
								case 28:
									if (iParam2 == 4)
									{
										Var0 = { 995.7f, -6719.8f, 57.4f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 1);
									}
									break;
								case 29:
									if (iParam2 == 4)
									{
										Var0 = { 997.8f, -6721.5f, 58.2f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 2);
									}
									break;
								case 30:
									if (iParam2 == 4)
									{
										Var0 = { 994.6f, -6726.7f, 57.6f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 3);
									}
									break;
								case 31:
									return func_471(1, 4);
								case 32:
									return func_471(1, 5);
								case 33:
									return func_471(1, 6);
								case 34:
									return func_471(1, 7);
								case 35:
									return func_471(1, 8);
								case 36:
									return func_471(1, 9);
								case 37:
									return func_471(1, 10);
								case 38:
									return func_471(1, 11);
								case 39:
									Var0 = { 979.8356f, -6800.87f, 49.0452f };
									Var0.f_3 = 1f;
									return Var0;
								case 40:
									Var0 = { 975.1305f, -6797.565f, 49.0234f };
									Var0.f_3 = 1f;
									return Var0;
								case 41:
									Var0 = { 979.5542f, -6804.867f, 49.1594f };
									Var0.f_3 = 1f;
									return Var0;
								case 42:
									return func_471(2, 0);
								case 43:
									return func_471(2, 1);
								case 44:
									return func_471(2, 2);
								case 45:
									return func_471(2, 3);
								case 46:
									return func_471(2, 4);
								case 47:
									return func_471(2, 5);
								case 48:
									return func_471(2, 6);
								case 49:
									return func_471(2, 7);
								case 50:
									return func_471(2, 8);
								case 51:
									return func_471(2, 9);
								case 52:
									return func_471(2, 10);
								case 53:
									return func_471(2, 11);
								case 54:
									return func_471(2, 12);
								case 55:
									return func_471(2, 13);
								case 56:
									return func_471(2, 14);
								case 63:
									Var0 = { 964.6403f, -6817.615f, 49.6181f };
									Var0.f_3 = 340f;
									return Var0;
								case 64:
									Var0 = { 931.0511f, -6830.742f, 41.3929f };
									Var0.f_3 = 322f;
									return Var0;
								case 65:
									Var0 = { 929.4081f, -6835.325f, 40.6164f };
									Var0.f_3 = 322f;
									return Var0;
								case 66:
									Var0 = { 986.6166f, -6794.934f, 42.4165f };
									Var0.f_3 = 8.5f;
									return Var0;
								case 67:
									Var0 = { 964.6956f, -6847.298f, 46.623f };
									Var0.f_3 = 358.8f;
									return Var0;
								case 68:
									Var0 = { 931.9405f, -6794.167f, 39.9855f };
									Var0.f_3 = 242.5f;
									return Var0;
								case 69:
									Var0 = { 964.5f, -6845.1f, 48.9f };
									Var0.f_3 = -2.2f;
									return Var0;
								case 70:
									Var0 = { 982f, -6806f, 50.1f };
									Var0.f_3 = 65.1f;
									return Var0;
								case 71:
									Var0 = { 967.9f, -6783.2f, 42.1f };
									Var0.f_3 = -8.2f;
									return Var0;
								case 72:
									Var0 = { 2.9f, 11.125f, 4.125f };
									Var0.f_3 = -101.52f;
									return Var0;
								case 73:
									Var0 = { 1.65f, 11.125f, 4.15f };
									Var0.f_3 = -101.52f;
									return Var0;
								case 74:
									Var0 = { 2.65f, 8.55f, 4.15f };
									Var0.f_3 = 91.44f;
									return Var0;
								case 75:
									Var0 = { 3.325f, 10.525f, 1.725f };
									Var0.f_3 = -5.04f;
									return Var0;
								case 76:
									Var0 = { 4.175f, 11.075f, 2.825f };
									Var0.f_3 = 85.68f;
									return Var0;
								case 77:
									Var0 = { 0.725f, -15.7f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 78:
									Var0 = { -0.1f, -4.025f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 79:
									Var0 = { 0.425f, 3.45f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 80:
									Var0 = { 0.425f, 7.85f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 81:
									Var0 = { 3.7f, -27.775f, 1.475f };
									Var0.f_3 = -76.32f;
									return Var0;
								case 82:
									Var0 = { 1.075f, -37f, 1.475f };
									Var0.f_3 = -51.12f;
									return Var0;
								case 83:
									Var0 = { 3.8f, -4.4f, 5.5f };
									Var0.f_3 = -44.28f;
									return Var0;
								case 84:
									Var0 = { 2.425f, 24.85f, 7.425f };
									Var0.f_3 = -63.72f;
									return Var0;
								case 85:
									Var0 = { 0.65f, 19.975f, 7.025f };
									Var0.f_3 = -70.56f;
									return Var0;
								case 86:
									Var0 = { -0.925f, 16.225f, 7.025f };
									Var0.f_3 = -49.68f;
									return Var0;
								case 87:
									Var0 = { 1.225f, 31.675f, 2.45f };
									Var0.f_3 = -79.2f;
									return Var0;
								case 88:
								case 89:
								case 90:
								case 91:
								case 92:
								case 93:
								case 94:
								case 95:
								case 96:
								case 97:
								case 98:
								case 99:
								case 100:
									Var0 = { func_472(7, 4) };
									return Var0;
								case 60:
									Var0 = { 974.6616f, -6786.675f, 42.3786f };
									Var0.f_3 = 302f;
									return Var0;
								case 61:
									Var0 = { 976.4645f, -6784.712f, 42.2079f };
									Var0.f_3 = 254f;
									return Var0;
								case 62:
									Var0 = { 981.3385f, -6774.654f, 43.4416f };
									Var0.f_3 = 182f;
									return Var0;
								case 57:
								case 58:
								case 59:
									return func_470(9, 8);
							}
						}
						else if (iParam1 == 1)
						{
							switch (iParam0)
							{
								case 27:
									Var0 = { 999.3292f, -6723.043f, 57.3195f };
									Var0.f_3 = 124f;
									return Var0;
								case 28:
									Var0 = { 996.3114f, -6720.552f, 57.0979f };
									Var0.f_3 = 124f;
									return Var0;
								case 29:
									Var0 = { 995.7366f, -6721.829f, 56.3041f };
									Var0.f_3 = 124f;
									return Var0;
								case 30:
									Var0 = { 994.1955f, -6721.881f, 55.4527f };
									Var0.f_3 = 124f;
									return Var0;
								case 31:
									Var0 = { 993.3441f, -6724.098f, 55.0104f };
									Var0.f_3 = 224f;
									return Var0;
								case 32:
									Var0 = { 992.5523f, -6723f, 55.2f };
									Var0.f_3 = 294.5f;
									return Var0;
								case 33:
									Var0 = { 992f, -6724.5f, 55.1f };
									Var0.f_3 = 294.5f;
									return Var0;
								case 34:
									Var0 = { 988.5f, -6761.3f, 53.7f };
									Var0.f_3 = 15.1f;
									return Var0;
								case 35:
									Var0 = { 989f, -6762.8f, 52.8f };
									Var0.f_3 = 15.1f;
									return Var0;
								case 36:
									Var0 = { 975.5f, -6797.8f, 49.8f };
									Var0.f_3 = 1f;
									return Var0;
								case 37:
									Var0 = { 980.1f, -6801.3f, 49.7f };
									Var0.f_3 = 1f;
									return Var0;
								case 38:
									Var0 = { 978.5f, -6804.8f, 49.9f };
									Var0.f_3 = 1f;
									return Var0;
								case 39:
								case 40:
								case 41:
									return func_217(iParam0, 0, iParam2);
								case 63:
									Var0 = { 960f, -6813.2f, 49.1f };
									Var0.f_3 = 5f;
									return Var0;
								case 64:
									Var0 = { 960.4f, -6796.4f, 41.7f };
									Var0.f_3 = 5f;
									return Var0;
								case 65:
									Var0 = { 952.4f, -6799.9f, 41.8f };
									Var0.f_3 = 5f;
									return Var0;
								case 66:
									Var0 = { 971.4f, -6786f, 42.5f };
									Var0.f_3 = 2f;
									return Var0;
								case 67:
									Var0 = { 971.6f, -6801.7f, 49.9f };
									Var0.f_3 = 5f;
									return Var0;
								case 68:
									Var0 = { 957.6f, -6785.7f, 42.1f };
									Var0.f_3 = 5f;
									return Var0;
								case 69:
									Var0 = { 976.5f, -6797.094f, 48.998f };
									Var0.f_3 = 5f;
									return Var0;
								case 70:
									Var0 = { 979.3f, -6800.582f, 49.0485f };
									Var0.f_3 = 5f;
									return Var0;
								case 71:
									Var0 = { 969.202f, -6766.499f, 42.83f };
									Var0.f_3 = -8.2f;
									return Var0;
								case 60:
									Var0 = { 980.5952f, -6780.62f, 42.1988f };
									Var0.f_3 = 2f;
									return Var0;
								case 61:
									Var0 = { 979.6703f, -6783.491f, 42.141f };
									Var0.f_3 = 1f;
									return Var0;
								case 62:
									Var0 = { 979.1167f, -6786.359f, 42.5014f };
									Var0.f_3 = 2f;
									return Var0;
							}
						}
						else if (iParam1 == 2)
						{
							switch (iParam0)
							{
								case 34:
									Var0 = { 985.7f, -6756.5f, 55.4f };
									Var0.f_3 = 0.75f;
									return Var0;
								case 35:
									Var0 = { 987.4f, -6755f, 55.4f };
									Var0.f_3 = 0.75f;
									return Var0;
								case 36:
									Var0 = { 984.1f, -6777.4f, 49.6f };
									Var0.f_3 = 1f;
									return Var0;
								case 37:
									Var0 = { 984.4f, -6785.3f, 49.9f };
									Var0.f_3 = 1f;
									return Var0;
								case 38:
									Var0 = { 980.8f, -6789.3f, 49.6f };
									Var0.f_3 = 1f;
									return Var0;
								case 39:
									Var0 = { 986f, -6779.7f, 49.4f };
									return Var0;
								case 40:
									Var0 = { 983.8f, -6778.2f, 49.4f };
									return Var0;
								case 41:
									Var0 = { 985.2f, -6777.8f, 49.4f };
									return Var0;
							}
						}
						return func_470(0, 0);
					}
				}
			}
			default:
				break;
	}
}

void func_218(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_219(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_220(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_189(iParam0) == 1)
	{
		cVar0 = func_110(func_473(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_189(iParam0) == 8)
	{
		cVar0 = func_475(func_474(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_476(1, 1);
	func_477(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_205(1f);
}

void func_221(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_465(sParam0, 2);
}

void func_222(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_224()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_225()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_226()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_227()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_228()
{
	return func_479(get_id_of_this_thread());
}

void func_229(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_480(bParam0);
}

void func_230()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_232()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_233(var uParam0)
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

void func_234(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_235(int iParam0)
{
	if (!func_481(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_236()
{
	func_482(64);
}

void func_237()
{
	Global_1310750->f_16072 = 0;
}

bool func_238()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_239(int iParam0)
{
	return func_240(23, iParam0);
}

bool func_240(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_483(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_484())
	{
		return func_483(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_483(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_241(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_242(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 8);
}

void func_243(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_244(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_245(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_246(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_247()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_245(iVar1, 1))
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
			else if (func_245(iVar1, 2))
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

bool func_248(var uParam0)
{
	if (func_485(uParam0, 1) || func_485(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_250(struct<2> Param0)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_251(struct<2> Param0, int iParam2)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_252(int iParam0)
{
	if (!func_486(iParam0))
	{
		return false;
	}
	if (!func_487(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_253(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_486(iParam1))
	{
		return;
	}
	if (!func_252(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(uParam0) != 0 && func_154(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_488(uParam0, iParam2);
		func_489(iParam2);
	}
	func_490(iParam1);
	func_491(iParam1, 0);
	func_492(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_254(var uParam0)
{
	return uParam0->f_5411;
}

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_257(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_493(iParam0);
	if (func_494(iParam0))
	{
		if (func_256(iParam0) != iVar0)
		{
			return;
		}
	}
	func_495(iParam0);
	func_496(iParam0);
	iVar1 = func_209(iParam0);
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
			if (!func_497(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_498(iParam0);
	}
}

void func_258(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_499(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_493(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_256(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_494(iVar0))
		{
			return;
		}
	}
	func_500(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_259(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_260(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_261(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

void func_262()
{
	if (func_501(0))
	{
		func_502(0);
	}
	if (func_501(1))
	{
		func_502(1);
	}
	if (func_501(5))
	{
		func_502(5);
	}
	if (func_501(6))
	{
		func_495(6);
	}
}

struct<2> func_263(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_264(int iParam0)
{
	Var0 = { func_263(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_265(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_266(int iParam0)
{
	if (!func_184(iParam0))
	{
		return -1;
	}
	return func_503(func_446(iParam0));
}

bool func_267(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_268(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_269(int iParam0, bool bParam1)
{
	iVar0 = func_504(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_505(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_505(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_505(iParam0)))
			{
				_uilog_remove_entry(2, func_505(iParam0));
			}
		}
	}
	func_506(iParam0, 4);
	func_506(iParam0, 8);
	func_506(iParam0, 16);
}

void func_270(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_267(iVar0))
		{
			if (func_268(iVar0, 4))
			{
				func_271(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_268(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_504(iParam0), func_505(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 2, "");
		func_507(iParam0, 16);
	}
	else
	{
		if (func_268(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 0, "");
		}
		func_506(iParam0, 16);
	}
}

void func_272(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_268(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_504(iParam0), func_505(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_268(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 1, "");
		}
		func_507(iParam0, 8);
	}
	else
	{
		if (func_268(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_504(iParam0), func_505(iParam0), 0, "");
		}
		func_506(iParam0, 8);
	}
}

int func_273(var uParam0)
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
	if (func_128(uParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_274(int iParam0, int iParam1)
{
	if (func_501(0))
	{
		if (func_508(0))
		{
			func_509(0);
		}
	}
	if (func_501(1))
	{
		if (func_508(1))
		{
			func_509(1);
		}
	}
}

void func_275(var uParam0)
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
		if (func_420(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_276(var uParam0)
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

void func_277(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_510(iParam0, sParam4, iParam5);
	}
	func_511(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_278(int iParam0)
{
	if (!func_241(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_279()
{
	return &Global_1899515;
}

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_281(int iParam0, int iParam1)
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
	if (!func_241(iParam0))
	{
		return;
	}
	if (func_512(iParam0))
	{
		func_513(iParam0);
	}
	else
	{
		func_514(iParam0);
	}
}

int func_284(int iParam0)
{
	if (func_515(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)
{
	if (func_516(&(Global_1109400->f_4), iParam0, 5))
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
		if (func_517(Global_1310750[iVar0], iParam0))
		{
			if (!func_518(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_519(iVar0) < func_520(iParam1))
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
	fVar0 = func_521();
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
	func_522(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_290(int iParam0)
{
	if (!func_184(iParam0))
	{
		return -1;
	}
	return func_188(iParam0);
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
	if (!bParam0 && func_456(373691918))
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
	func_198(bParam0);
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
		if (func_486(iVar17))
		{
			iVar18 = func_523(iVar17);
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
	func_524(&(Global_1359489->f_55));
	if (func_525(1777191912, 1))
	{
		func_526(1777191912, 1, 0);
	}
}

void func_294(int iParam0)
{
	if (!func_184(iParam0))
	{
		return;
	}
	func_528(iParam0, (func_527(iParam0) + shift_left(1, 16)));
}

bool func_295(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_296()
{
	return func_529() > 0;
}

void func_297(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_530(-1032423150, iParam1);
			break;
		case 18:
			func_530(294066959, iParam1);
			func_530(-1925639563, iParam1);
			func_530(-378582304, iParam1);
			func_530(-338306437, iParam1);
			break;
		case 20:
			func_530(437270255, iParam1);
			break;
		case 2:
			func_530(-304000413, iParam1);
			func_530(-533612796, iParam1);
			func_530(48036954, iParam1);
			break;
		case 23:
			func_530(193108691, iParam1);
			func_530(491732588, iParam1);
			func_530(671962088, iParam1);
			func_531(1);
			break;
		case 16:
			func_530(-1836056650, iParam1);
			func_530(-754657922, iParam1);
			func_530(-1752355838, iParam1);
			func_530(-1375324510, iParam1);
			break;
		case 59:
			func_530(-514392105, iParam1);
			func_530(-822060246, iParam1);
			if (func_532(146))
			{
				func_530(1372748575, iParam1);
			}
			func_531(1);
			break;
		case 76:
			func_530(1991352213, iParam1);
			if (func_533() == 0)
			{
				func_530(1852488616, iParam1);
			}
			else
			{
				func_530(-9866350, iParam1);
			}
			break;
		case 44:
			func_530(863852599, iParam1);
			func_530(1228374935, iParam1);
			func_530(1517889050, iParam1);
			func_530(830657578, iParam1);
			func_530(1901354958, iParam1);
			break;
		case 46:
			func_530(-582805654, iParam1);
			func_530(250378940, iParam1);
			func_530(-2143265426, iParam1);
			break;
		case 17:
			func_530(-941494139, iParam1);
			func_530(1641489521, iParam1);
			break;
		case 19:
			func_530(-1829423531, iParam1);
			func_530(-1590504752, iParam1);
			func_530(1357221321, iParam1);
			break;
		case 21:
			func_530(-1037992610, iParam1);
			func_530(-1286414399, iParam1);
			func_531(0);
			break;
		case 15:
			func_530(-1014460309, iParam1);
			func_530(-1030502825, iParam1);
			break;
		case 33:
			func_530(479388090, iParam1);
			func_530(-1396342239, iParam1);
			func_530(-619618632, iParam1);
			break;
		case 34:
			func_530(1193561641, iParam1);
			break;
		case 64:
			func_530(1363960851, iParam1);
			break;
		case 60:
			func_530(-1232453926, iParam1);
			func_530(-882833584, iParam1);
			break;
		case 73:
			func_530(2023205767, iParam1);
			break;
		case 74:
			func_530(-2135286513, iParam1);
			if (func_533() == 0)
			{
				func_530(33799444, iParam1);
			}
			else
			{
				func_530(-161343203, iParam1);
			}
			break;
		case 8:
			func_530(841639693, iParam1);
			func_530(358952323, iParam1);
			break;
		case 36:
			func_530(852538149, iParam1);
			func_530(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_530(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(1116039310, iParam1);
			}
			break;
		case 27:
			func_530(107633428, iParam1);
			func_530(335902282, iParam1);
			func_530(575673055, iParam1);
			func_530(-425944207, iParam1);
			break;
		case 28:
			func_530(-1941530250, iParam1);
			func_530(1399269304, iParam1);
			func_530(1839684664, iParam1);
			func_530(923168503, iParam1);
			func_530(-1485078322, iParam1);
			break;
		case 29:
			func_530(574995900, iParam1);
			func_530(-1691275407, iParam1);
			func_530(-1725307861, iParam1);
			break;
		case 31:
			func_530(-2108383238, iParam1);
			func_530(-1321828931, iParam1);
			func_530(-1632118592, iParam1);
			func_530(334938948, iParam1);
			break;
		case 4:
			func_530(115823701, iParam1);
			func_530(-1896939736, iParam1);
			func_530(-1830746356, iParam1);
			func_530(-1235169781, iParam1);
			func_531(0);
			break;
		case 6:
			func_530(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-384176140, iParam1);
			}
			break;
		case 25:
			func_530(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_530(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-1374849484, iParam1);
			}
			break;
		case 48:
			func_530(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(217772674, iParam1);
			}
			else
			{
				func_530(2071798160, iParam1);
			}
			if (func_534(51))
			{
				func_530(-792802286, iParam1);
			}
			break;
		case 49:
			func_530(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_530(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_530(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_530(1402120602, iParam1);
			}
			break;
		case 58:
			func_530(-1661934591, iParam1);
			break;
		case 50:
			func_530(-1713759426, iParam1);
			break;
		case 52:
			func_530(-314799932, iParam1);
			func_530(-462260432, iParam1);
			func_530(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_530(345256028, iParam1);
				func_530(-1635084094, iParam1);
			}
			else
			{
				func_530(114267347, iParam1);
			}
			break;
		case 32:
			func_530(615304157, iParam1);
			break;
		case 47:
			func_530(415434835, iParam1);
			break;
		case 69:
			func_530(1373465877, iParam1);
			if (func_321((*Global_1347702)[9]->f_15, 1))
			{
				func_530(-2058273527, iParam1);
			}
			break;
		case 70:
			func_530(451334985, iParam1);
			if (func_533() == 0)
			{
				func_530(-224150200, iParam1);
			}
			else
			{
				func_530(289012628, iParam1);
			}
			break;
		case 71:
			if (func_533() == 0)
			{
				func_530(-41692120, iParam1);
			}
			else
			{
				func_530(1537840678, iParam1);
			}
			break;
		case 37:
			func_530(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_530(1842132550, iParam1);
			}
			else
			{
				func_530(-785735240, iParam1);
			}
			func_530(-1605690566, iParam1);
			break;
		case 13:
			func_530(-731367459, iParam1);
			func_530(224176585, iParam1);
			func_530(-14545580, iParam1);
			break;
		case 53:
			func_530(1095274522, iParam1);
			break;
		case 54:
			func_530(-572027988, iParam1);
			break;
		case 56:
			func_530(1339307101, iParam1);
			func_530(2102267732, iParam1);
			break;
		case 57:
			func_530(710102686, iParam1);
			break;
		case 22:
			func_530(-1754368482, iParam1);
			func_530(-2071408557, iParam1);
			break;
		case 12:
			func_530(-181334543, iParam1);
			break;
		case 0:
			func_530(-2134669864, iParam1);
			func_530(-548289709, iParam1);
			func_530(-911271922, iParam1);
			func_530(-604455775, iParam1);
			break;
		case 1:
			func_531(1);
			break;
		case 3:
			if (func_332())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_530(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_530(-1478534115, iParam1);
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
			func_530(-145926707, iParam1);
			func_530(-604922090, iParam1);
			func_530(-848690769, iParam1);
			break;
		case 1:
			func_530(-1477631591, iParam1);
			break;
		case 2:
			func_530(76112544, iParam1);
			break;
		case 9:
			func_530(1396404308, iParam1);
			func_530(-1357381228, iParam1);
			if (func_321((*Global_1835011)[69]->f_1, 1))
			{
				func_530(1902679064, iParam1);
			}
			else
			{
				func_530(-2146422425, iParam1);
			}
			break;
		case 22:
			func_530(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_530(-1934184559, iParam1);
				func_530(1281755988, iParam1);
			}
			else
			{
				func_530(-1745220872, iParam1);
				func_530(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_530(-1641504538, iParam1);
				func_530(-988014485, iParam1);
			}
			else if (func_532(26))
			{
				func_530(-343043950, iParam1);
				func_530(-640062214, iParam1);
			}
			else
			{
				func_530(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_530(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_530(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_530(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_530(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_530(1301690984, iParam1);
				}
			}
			else
			{
				func_530(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_530(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_530(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_530(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_530(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_530(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_530(-754570528, iParam1);
			}
			else
			{
				func_530(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_530(-2072125821, iParam1);
			}
			else
			{
				func_530(270040030, iParam1);
			}
			break;
		case 37:
			func_530(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_530(-505314737, iParam1);
				func_530(-1853052860, iParam1);
			}
			else
			{
				func_530(-1975624994, iParam1);
				func_530(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_530(1690231002, iParam1);
			}
			else
			{
				func_530(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_530(1225386280, iParam1);
			}
			else if (func_532(54))
			{
				func_530(-283235773, iParam1);
			}
			else
			{
				func_530(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_530(1355398007, iParam1);
			}
			else
			{
				func_530(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_530(574636806, iParam1);
			}
			else
			{
				func_530(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_530(821118338, iParam1);
			}
			else if (func_532(39))
			{
				func_530(846829260, iParam1);
			}
			else
			{
				func_530(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_355((*Global_1835011)[33]->f_1) == 1)
				{
					func_530(1422779093, iParam1);
				}
				else
				{
					func_530(-1769536986, iParam1);
				}
			}
			else
			{
				func_530(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_530(352134789, iParam1);
			}
			else if (func_532(43))
			{
				func_530(260723113, iParam1);
			}
			else
			{
				func_530(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_530(-457958799, iParam1);
			}
			else
			{
				func_530(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_532(41))
			{
				func_530(-546824600, iParam1);
			}
			else
			{
				func_530(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_530(1297261593, iParam1);
			}
			else
			{
				func_530(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_530(2068484886, iParam1);
			}
			else if (func_532(49))
			{
				func_530(-1489080639, iParam1);
				func_530(-2102244050, iParam1);
			}
			else
			{
				func_530(-1863040467, iParam1);
			}
			break;
		case 51:
			func_530(-2055943209, iParam1);
			break;
		case 58:
			if (func_321((*Global_1347702)[23]->f_15, 1))
			{
				func_530(1650066845, iParam1);
			}
			else
			{
				func_530(151370023, iParam1);
			}
			func_530(1426057961, iParam1);
			func_530(476379584, iParam1);
			break;
		case 59:
			func_530(-1638117866, iParam1);
			break;
		case 62:
			func_530(199541730, iParam1);
			break;
		case 63:
			func_530(1703485804, iParam1);
			func_530(-800449045, iParam1);
			break;
		case 65:
			func_530(-1678210868, iParam1);
			func_530(-1448238026, iParam1);
			func_530(-1200864845, iParam1);
			func_530(1473511536, iParam1);
			break;
		case 66:
			func_530(-1774490051, iParam1);
			func_530(-34645921, iParam1);
			func_530(174027075, iParam1);
			func_530(-1155999, iParam1);
			func_531(1);
			break;
		case 67:
			func_530(701612593, iParam1);
			func_530(-1069631343, iParam1);
			func_530(1673428882, iParam1);
			break;
		case 68:
			func_530(-739133286, iParam1);
			func_530(-2130089358, iParam1);
			func_530(2056190391, iParam1);
			func_530(1941753817, iParam1);
			func_531(0);
			break;
		case 70:
			func_530(-1217555753, iParam1);
			break;
		case 71:
			func_530(697048821, iParam1);
			break;
		case 73:
			func_530(-553148661, iParam1);
			break;
		case 75:
			func_530(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_530(1414263863, iParam1);
			}
			else
			{
				func_530(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_530(1835465936, iParam1);
				func_530(523715611, iParam1);
			}
			else if (func_532(78))
			{
				func_530(1420338873, iParam1);
			}
			else
			{
				func_530(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_530(10180941, iParam1);
			}
			else if (func_532(79))
			{
				func_530(768420635, iParam1);
			}
			else
			{
				func_530(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_530(-383601523, iParam1);
			}
			else
			{
				func_530(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_530(1606472408, iParam1);
			}
			else
			{
				func_530(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_530(-203571927, iParam1);
			}
			else
			{
				func_530(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_530(729886222, iParam1);
			}
			else
			{
				func_530(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_530(-714816362, iParam1);
			}
			else
			{
				func_530(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_530(-932932179, iParam1);
				func_530(-1458537240, iParam1);
			}
			else
			{
				func_530(-1764383885, iParam1);
				func_530(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_530(1741466706, iParam1);
			}
			else
			{
				func_530(1405815775, iParam1);
			}
			break;
		case 94:
			func_530(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_530(1905280979, iParam1);
			}
			else
			{
				func_530(-1966245299, iParam1);
			}
			func_530(721468880, iParam1);
			break;
		case 99:
			func_530(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_530(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_530(-1117781095, iParam1);
				}
				else
				{
					func_530(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_530(141494548, iParam1);
			}
			else
			{
				func_530(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_530(-369525697, iParam1);
			}
			else if (func_532(101))
			{
				func_530(1595015219, iParam1);
			}
			else
			{
				func_530(-321486961, iParam1);
			}
			break;
		case 103:
			func_530(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_530(793460477, iParam1);
				func_530(-1610242176, iParam1);
			}
			else if (func_532(103))
			{
				func_530(1830897187, iParam1);
			}
			else
			{
				func_530(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_530(1528309077, iParam1);
			}
			else if (func_532(104))
			{
				func_530(1864966105, iParam1);
			}
			else
			{
				func_530(-103336013, iParam1);
			}
			break;
		case 108:
			func_530(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_530(-1123227713, iParam1);
				func_530(-889574341, iParam1);
			}
			else
			{
				func_530(2065385917, iParam1);
				func_530(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_530(-887421691, iParam1);
			}
			else if (func_532(109))
			{
				func_530(-1318117949, iParam1);
			}
			else
			{
				func_530(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_530(284822762, iParam1);
				}
				else
				{
					func_530(-1425017554, iParam1);
				}
			}
			else if (func_532(110))
			{
				if (&Global_1357515 == 0)
				{
					func_530(553087292, iParam1);
				}
				else
				{
					func_530(-1766870331, iParam1);
					func_530(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_530(-1980598735, iParam1);
			}
			else
			{
				func_530(-442732098, iParam1);
				func_530(1955756409, iParam1);
			}
			break;
		case 115:
			func_530(394303528, iParam1);
			func_530(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_530(1182403394, iParam1);
			}
			else
			{
				func_530(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_530(924445424, iParam1);
			}
			else
			{
				func_530(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_530(430755273, iParam1);
				func_530(-1473879802, iParam1);
			}
			else
			{
				func_530(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_530(73885747, iParam1);
			}
			else if (func_532(117))
			{
				func_530(1559707913, iParam1);
			}
			else
			{
				func_530(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_530(-2103887972, iParam1);
			}
			else if (func_532(118))
			{
				func_530(-435828462, iParam1);
			}
			else
			{
				func_530(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_530(2054486196, iParam1);
			}
			else
			{
				func_530(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_530(-570086056, iParam1);
			}
			else if (func_532(121))
			{
				func_530(32337856, iParam1);
			}
			else
			{
				func_530(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_530(813493663, iParam1);
			}
			else if (func_532(122))
			{
				func_530(-2132763590, iParam1);
			}
			else
			{
				func_530(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_530(-66240572, iParam1);
				func_530(1563075046, iParam1);
			}
			else
			{
				func_530(-787011772, iParam1);
				func_530(-1523377438, iParam1);
			}
			break;
		case 127:
			func_530(61020800, iParam1);
			break;
		case 129:
			func_530(428985222, iParam1);
			break;
		case 131:
			func_530(-1393851036, iParam1);
			break;
		case 133:
			func_530(1559531342, iParam1);
			break;
		case 134:
			func_530(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_530(-1374407408, iParam1);
				}
				else
				{
					func_530(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_530(-472672138, iParam1);
				}
				else
				{
					func_530(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_530(-1678710489, iParam1);
			}
			else
			{
				func_530(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_530(1717582460, iParam1);
			}
			else
			{
				func_530(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_530(1568112362, iParam1);
				func_530(1388317526, iParam1);
			}
			else if (func_532(136))
			{
				func_530(-1597534828, iParam1);
				func_530(-1207918353, iParam1);
			}
			else
			{
				func_530(-1940891082, iParam1);
				func_530(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_530(448334530, iParam1);
				func_530(2145375502, iParam1);
			}
			else
			{
				func_530(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_530(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_530(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_530(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_530(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_530(-66616327, iParam1);
			}
			else
			{
				func_530(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_530(1862916706, iParam1);
			}
			else if (func_532(147))
			{
				func_530(675105199, iParam1);
			}
			else
			{
				func_530(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_530(174409701, iParam1);
			}
			else if (func_532(148))
			{
				func_530(-1730895475, iParam1);
			}
			else
			{
				func_530(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_530(1295237052, iParam1);
			}
			else if (func_532(149))
			{
				func_530(-788577684, iParam1);
			}
			else
			{
				func_530(1527015024, iParam1);
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
	iVar0 = func_189(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_473(iParam0);
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
			iVar2 = func_266(iParam0);
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
			iVar3 = func_266(iParam0);
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
	iVar2 = func_535(iParam0);
	iVar3 = func_536(iParam0);
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
				iVar1 = func_279();
				func_328(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_537(iParam0, 1);
			if (func_538(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_539(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_540(1, iParam0);
				}
				else
				{
					func_541(1, iParam0);
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
		func_542(iParam0, iParam1, bParam2);
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
	if ((Global_36616 && func_543(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_544(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_545(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_546(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_545(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_309(int iParam0)
{
	if (!func_184(iParam0))
	{
		return -1;
	}
	return func_547(func_446(iParam0));
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
		iVar0 = func_548(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (!func_550(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_551(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_552(iParam0, bParam2);
	iVar2 = 0;
	if (func_553(iParam0, 0, 0) == 0)
	{
		if (func_554(iParam0))
		{
			iVar5 = func_555(iParam0);
			iVar6 = func_556(iVar5);
			iVar7 = func_557(iVar6) + 1;
			func_558(iVar5);
			if (func_559(38))
			{
				func_319(483, 0);
			}
			else
			{
				func_319(482, 0);
			}
			if (iVar7 == func_560(iVar6))
			{
				func_312(func_561(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_391() && func_562(4))
				{
					if (func_391() && (func_563(38) || func_559(38)))
					{
						func_565(38, func_561(iVar6), 0, 0, func_564(), 0, -1, 0);
						func_566(2);
					}
					else
					{
						func_565(38, func_561(iVar6), 0, 0, func_564(), 0, -1, 0);
						func_566(1);
					}
				}
			}
			else if (func_391() && func_562(4))
			{
				if (func_391() && (func_563(38) || func_559(38)))
				{
					func_565(38, 0, 0, 0, func_564(), 0, -1, 0);
					func_566(2);
				}
				else
				{
					func_565(38, 0, 0, 0, func_564(), 0, -1, 0);
					func_566(1);
				}
			}
			if (func_391() && func_562(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_391() && (func_563(38) || func_559(38)))
					{
						func_567(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_567(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_568(iParam0) == -1037537535)
	{
		if ((!func_569(iParam0, 866047851) && !func_569(iParam0, -1979000645)) && !func_569(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_570(iParam0, 8388608) && !func_571(28))
	{
		func_572(28);
	}
	if (!bVar3)
	{
		if (func_569(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_573(iParam0) == -1447088266)
			{
				iVar1 = func_575(func_574(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_576(iVar1);
					}
					if (func_577(0) && func_578(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_579(iParam0, iVar0, iParam5);
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
						func_576(iParam0);
					}
					if (func_577(0) && func_578(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_579(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_568(iParam0) == -427144552)
		{
			if (!func_580(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_568(iParam0) == 307971639 && func_581(iParam0))
		{
			if (!func_582(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_569(iParam0, 866047851))
		{
			func_583(iParam0);
		}
		else if (func_569(iParam0, 2000026003))
		{
			func_584(iParam0);
		}
		else if (func_569(iParam0, -103750053))
		{
			func_95(func_585(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_586(-717883113, 2091222383), iVar0);
		}
		else if (func_569(iParam0, -121341956) && !func_569(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_319(498, 0);
				}
			}
			if (func_569(iParam0, -2017733358) || func_569(iParam0, -1369131378))
			{
				func_587(iParam0);
			}
		}
		else if (func_569(iParam0, -136654233))
		{
			if (func_569(iParam0, -1021472396))
			{
			}
		}
		else if (func_569(iParam0, -1466706512) && func_569(iParam0, 1147021565))
		{
			func_319(484, 0);
		}
		else if (func_569(iParam0, 1147021565) && func_569(iParam0, -524514947))
		{
		}
		else if (func_569(iParam0, 554195525))
		{
		}
		else if (func_569(iParam0, 589988438))
		{
			if (func_588())
			{
				func_589(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_569(iParam0, 787083290) && func_569(iParam0, 949916894))
		{
			func_590(iParam0);
		}
		else if (func_569(iParam0, -1718133314))
		{
			func_591(iParam0);
		}
		else if (func_569(iParam0, -1738650224))
		{
			func_592(iParam0);
		}
		else if (func_569(iParam0, -1112814642) && func_569(iParam0, 949916894))
		{
			func_593(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_569(iParam0, 1841149704))
		{
			func_594();
		}
		else if (func_569(iParam0, 606799272))
		{
			func_595(iParam0, iParam1);
			func_596(iParam0);
		}
		else if (func_569(iParam0, -1112814642) && func_569(iParam0, -1697809989))
		{
			func_597(iParam0, 0, 0, 0);
		}
		else if (func_569(iParam0, -2017733358) || func_569(iParam0, -1369131378))
		{
			func_587(iParam0);
		}
		else if (func_569(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_598(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_569(iParam0, 1192444843))
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
		else if (func_569(iParam0, -839724752) && func_570(iParam0, 4))
		{
			if (!func_559(42))
			{
				func_599(iParam0);
			}
		}
		else if (func_569(iParam0, 1399091007))
		{
			func_600(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_569(iParam0, 1248798204))
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
				func_572(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_601(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_602(&iVar9, 0))
				{
					func_578(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_601(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_319(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_603();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_604();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_605();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_606();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_607();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_608(499813453, 854119837, 0);
				func_609(499813453, 0);
				func_610(1);
				break;
			case 2127812557:
				func_608(499813453, -1292544588, 0);
				func_609(499813453, 0);
				func_610(2);
				break;
			case 808991383:
				func_608(499813453, -1003325394, 0);
				func_609(499813453, 0);
				func_610(4);
				break;
			case 1134518629:
				func_608(666607663, -335460405, 0);
				func_609(666607663, 0);
				func_611(1);
				break;
			case 902940106:
				func_608(666607663, 903797617, 0);
				func_609(666607663, 0);
				func_611(2);
				break;
			case -418174898:
				func_608(666607663, 669728650, 0);
				func_609(666607663, 0);
				func_611(4);
				break;
			case -648114971:
				func_608(-220219788, 1214120047, 0);
				func_609(-220219788, 0);
				func_612(1);
				break;
			case 211153747:
				func_608(-220219788, 655769340, 0);
				func_609(-220219788, 0);
				func_612(2);
				break;
			case -32876996:
				func_608(-220219788, 885316185, 0);
				func_609(-220219788, 0);
				func_612(4);
				break;
			case 1191437462:
				func_608(218622660, -1491419385, 0);
				func_609(218622660, 0);
				func_613(1);
				break;
			case 1119149048:
				func_608(218622660, 1809565830, 0);
				func_609(218622660, 0);
				func_613(2);
				break;
			case 506073827:
				func_608(390004462, -628873767, 0);
				func_609(390004462, 0);
				func_614(1);
				break;
			case -1876986168:
				func_608(390004462, -405421956, 0);
				func_609(390004462, 0);
				func_614(2);
				break;
			case 2142623221:
				func_608(390004462, -1108972386, 0);
				func_609(390004462, 0);
				func_614(4);
				break;
			case 1508215381:
				func_608(6410548, 1053716392, 0);
				func_609(6410548, 0);
				func_615(1);
				break;
			case -888935280:
				func_608(6410548, 806507056, 0);
				func_609(6410548, 0);
				func_615(2);
				break;
			case -1252474566:
				func_608(6410548, 1571925350, 0);
				func_609(6410548, 0);
				func_615(4);
				break;
			case -1465702449:
				func_608(6410548, 1330352282, 0);
				func_609(6410548, 0);
				func_615(8);
				break;
			case -21093309:
				func_617(242, func_616(-21093309), 0);
				break;
			case 204375141:
				func_617(240, func_616(204375141), 0);
				break;
			case -417963070:
				func_617(241, func_616(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(594, 1934060482, 1, 1);
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
					func_618(594, 1110018439, 1, 1);
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
					func_618(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(594, -1228016946, 1, 1);
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
					func_618(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_618(595, -1531530025, 1, 1);
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
					func_312(func_619(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_312(func_620(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_571(1))
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
		func_621(&iVar10);
		if (!func_622(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_577(0))
		{
			return true;
		}
		if (func_568(iParam0) == -1037537535)
		{
			func_623(iParam0);
		}
		if (func_569(iParam0, -1979000645))
		{
			func_624(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_577(0))
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
			func_625(iVar2, 0);
		}
	}
	Var35 = { func_626(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_627(iParam0);
	if (fParam6 > 0f)
	{
		if (func_569(iParam0, -839724752))
		{
			func_628(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_629(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_313(int iParam0)
{
	if (func_569(iParam0, 1989861793))
	{
		iVar0 = func_630(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_631(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_632(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_633(iVar14, iVar1);
					if (iVar15 != iParam0 && func_549(iVar15, 0))
					{
						if (func_634(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_635(iVar1);
				if (bVar13)
				{
					func_636(iParam0);
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
	func_637();
	func_638();
	func_639();
	func_640();
	func_641();
	func_642();
	func_643();
}

void func_315(int iParam0)
{
	func_644(iParam0, 1, 1, -142743235, 1);
	if (func_645(iParam0))
	{
		func_646(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_648(func_647(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_649(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_650() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_651(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_651(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_652(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_652(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_652(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_652(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_652(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_652(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_652(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_652(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_652(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_653(iVar8, iVar0))
				{
					func_654(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_653(iVar8, iVar0))
		{
			func_654(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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
		iVar1 = func_653(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_650() == -2125499975 || func_650() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_654(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_654(&vVar2, iVar5, iVar0);
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
		iVar0 = func_548(14);
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
			if ((func_321((*Global_1835011)[59]->f_1, 1) || func_321((*Global_1347702)[1]->f_15, 1)) || func_185((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_525(403634348, 1))
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
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_657(iVar0, iVar1);
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_648(iParam0, 1);
	func_658(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_658(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_659(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_658(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_658(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
		iVar0 = func_548(17);
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
		iVar0 = func_548(18);
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
		Var0 = { func_660(iParam1, 1, 0) };
		iParam3 = func_661(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_662(iParam3);
	return func_601(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_325()
{
	return _unlock_is_unlocked(99890643);
}

void func_326(int iParam0)
{
	if (!func_663(iParam0))
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
	if (!func_664(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_665(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_666(Global_40.f_9910[iParam1], 4);
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_667(*iParam0);
	iVar1 = func_668(*iParam0);
	iVar2 = func_669(*iParam0);
	iVar3 = func_670(*iParam0);
	iVar4 = func_671(*iParam0);
	iVar5 = func_672(*iParam0);
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
	iVar6 = func_673(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_673(iVar1, iVar0);
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
	func_674(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!func_664(iParam0))
	{
		return;
	}
	if (!func_675(iParam1))
	{
		return;
	}
	if (func_676(iParam1, 1))
	{
		return;
	}
	iVar0 = func_665(iParam0);
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
		func_677(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_191(0, 0, 1))
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
		iVar0 = func_548(19);
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
		iVar0 = func_548(20);
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
		iVar0 = func_548(21);
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
		iVar0 = func_548(22);
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
		iVar0 = func_548(24);
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
		iVar0 = func_548(25);
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
		iVar0 = func_548(27);
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
		iVar0 = func_548(28);
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
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_568(iParam0);
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
		if (!func_678(iParam0, 1))
		{
			return false;
		}
	}
	return func_553(iParam0, 0, bParam2) >= iParam1;
}

void func_342(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_679(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_679(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_548(29);
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
		iVar0 = func_548(26);
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
		iVar0 = func_548(23);
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
		iVar0 = func_548(15);
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
		iVar0 = func_548(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_348()
{
	if (func_680() > 1)
	{
		func_681();
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
	return func_682(iParam0, 4, 1);
}

void func_350(int iParam0)
{
	func_683(iParam0, 4, 1);
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
	if (!func_184(iParam0))
	{
		return;
	}
	func_223(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_189(iParam0))
	{
		case 1:
			func_95(func_586(909007663, -587839005), 1);
			iVar0 = func_266(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_449(iVar0))
			{
				case 0:
					func_95(func_586(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_586(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_586(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_586(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_586(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_586(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_586(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_586(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_586(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_586(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_586(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_266(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_586(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_586(909007663, -2049243343), 1);
				}
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_450(iVar1))
				{
					case 0:
						func_95(func_586(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_586(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_586(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_586(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_586(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_586(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_586(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_586(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_586(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_586(909007663, 532323983), 1);
				}
			}
			else if (func_295((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_295((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_586(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_586(909007663, -406093146), 1);
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
	else if (func_192(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_191(0, 0, 1) || func_684()) || func_129())
	{
		return;
	}
	iVar0 = func_195();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_685(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_686(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_687(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_361(0, -1);
	}
	if (iVar2 > 0)
	{
		func_688("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_689(1, 0);
	Global_1956575->f_4 = 1;
}

void func_354(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_277(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_690(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_355(int iParam0)
{
	if (!func_184(iParam0))
	{
		return -1;
	}
	return func_691(iParam0);
}

int func_356(int iParam0, int iParam1)
{
	if (!func_692(iParam0))
	{
		return 0;
	}
	if (!func_391())
	{
		return 0;
	}
	if (!func_693(iParam0, &iVar0, &iVar1))
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
	if (iVar2 >= func_694())
	{
		iVar2 = func_694();
	}
	iVar5 = func_695(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_446(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_446(iVar6) == 0)
			{
				return func_696(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_446(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_446(iVar6) == 0)
			{
				return func_696(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_696(iVar3, iVar4, iParam2, iVar0, 0);
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
			return func_697(1330954593, 0, -1);
		case 1:
			return func_697(1330954593, 0, -1);
		case 2:
			return func_697(1330954593, 0, -1) * 2;
		case 4:
			return func_697(1330954593, 0, -1);
		case 5:
			return func_697(1330954593, 0, -1);
		case 6:
			return func_697(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_697(1330954593, 0, -1) * 3;
		case 9:
			return func_697(1330954593, 0, -1) * 3;
		case 10:
			return func_697(1330954593, 0, -1) * 3;
		case 11:
			return func_697(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_359(int iParam0)
{
	if (!func_184(iParam0))
	{
		return cVar0;
	}
	switch (func_189(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_473(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_266(iParam0)]->f_3;
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
			if (func_189(Global_1879514->f_1) == 1)
			{
				func_356(5, 1);
			}
			else if (func_189(Global_1879514->f_1) == 8 && (func_295((*Global_1347702)[func_266(Global_1879514->f_1)]->f_12, 1) || func_295((*Global_1347702)[func_266(Global_1879514->f_1)]->f_12, 33554432)))
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
		func_698(&Global_0, 8);
	}
	if (!func_391() || func_20() != -1)
	{
		return;
	}
	func_698(&Global_0, 1);
}

int func_362()
{
	iVar0 = func_699(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_700(iVar0))
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
	vVar0 = { func_701(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_392(vVar0))
	{
		vVar0 = { func_701(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
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
	if (func_241(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_702(vParam0, iParam3);
}

void func_367()
{
	func_703();
	func_704();
	func_705();
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
	if (!func_706(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_707(&(Param0.f_10)))
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
			func_708(iParam16);
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
	if (func_462(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_709();
	Var1.f_3.f_3 = iVar0;
	if ((!func_710(Global_1347343->f_2) && !func_369(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_711();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_369(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_712();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_369(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_713();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_714(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_715(&Var1, "REPLAY_T_DEAD", 0, 1);
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
	func_716(uParam0);
	iVar0 = func_717(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_718(iParam1);
		}
		iVar0 = func_719(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_720(uParam0);
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
		iVar0 = func_720(uParam0);
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
	func_721(uParam0, 2);
}

void func_374(var uParam0, int iParam1)
{
	func_722(&(uParam0->f_7375), iParam1);
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
	return func_473(func_723());
}

void func_377(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_393())
	{
		func_724(uParam0, iVar0);
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
	func_730(uParam0, 0, 1, 115111, 115183, 115220, 115517, 116357, "SMG2_INT", 4162, 9);
	func_730(uParam0, 1, 2, 116600, 116982, 117088, 117293, 118322, "", 65, 22);
	func_730(uParam0, 2, 3, 118734, 118854, 118991, 119372, 120133, "SMG2_MCS2", 67, 22);
	func_730(uParam0, 3, 4, 120258, 120706, 121501, 121627, 123673, "", 1048641, 33);
	func_730(uParam0, 4, 5, 123863, 124029, 124124, 124306, 125643, "SMG2_MCS3", 4163, 14);
	func_730(uParam0, 5, 25, 125725, 125787, 125991, 126302, 127771, "SMG2_MCS4", 4163, 36);
	func_730(uParam0, 25, 26, 127857, 128066, 128106, 128147, 128171, "SMG2_EXT", 6210, 36);
}

void func_381()
{
	Local_128 = _create_volume_cylinder(986.8812f, -6747.955f, 63.088f, 0f, 0f, 0f, 6f, 6f, 1f);
	Local_128.f_1 = _create_volume_box(1010.312f, -6743.349f, 61.092f, 0f, 0f, 0f, 70f, 70f, 1f);
	Local_128.f_2 = _create_volume_box(1005.621f, -6747.078f, 61.092f, 0f, 0f, 0f, 14f, 14f, 2f);
	Local_128.f_3 = _create_volume_box(998.1667f, -6741.533f, 58.806f, 0f, 0f, 24f, 8f, 1f, 3f);
	Local_128.f_4 = _create_volume_cylinder(1003.999f, -6745.454f, 65.666f, 0f, 0f, 0f, 30f, 30f, 4f);
	Local_128.f_5 = _create_volume_cylinder(1003.999f, -6745.454f, 48.515f, 0f, 0f, 0f, 30f, 30f, 24.5f);
	Local_128.f_6 = _create_volume_cylinder(995.0401f, -6744.83f, 63.252f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_128.f_7 = _create_volume_box(995.5923f, -6734.085f, 58.353f, 0f, 0f, 28.00001f, 2f, 1f, 2f);
	Local_128.f_8 = _create_volume_cylinder(970.6483f, -6762.404f, 44.62514f, 0f, 0f, 0f, 10f, 10f, 4f);
	Local_128.f_9 = _create_volume_box(995.0776f, -6734.198f, 58.338f, 0f, 0f, 26.5f, 6f, 4f, 2f);
	Local_128.f_10 = _create_volume_box(987.7475f, -6772.153f, 50.90979f, 0f, 0f, -20f, 175.75f, 1f, 26f);
	Local_128.f_11 = _create_volume_box(978.6783f, -6737.511f, 49.96436f, 0f, 0f, 0f, 5f, 2f, 2f);
	Local_128.f_12 = _create_volume_box(995.0936f, -6725.802f, 58.37745f, 0f, 0f, -53f, 4f, 2f, 2f);
	Local_128.f_13 = _create_volume_box(982.2286f, -6747.604f, 55.88655f, 0f, 0f, 17f, 4f, 2f, 2f);
	Local_128.f_14 = _create_volume_box(1005.221f, -6758.105f, 63.006f, 0f, 0f, 27f, 7f, 2f, 2f);
	Local_128.f_15 = _create_volume_box(997.0908f, -6725.229f, 59.3432f, 0f, 0f, -55.00005f, 5f, 4f, 4f);
	Local_128.f_16 = _create_volume_box(997.559f, -6724.488f, 58.66211f, 0f, 0f, -53.00008f, 5f, 4f, 2f);
	Local_128.f_17 = _create_volume_box(953.977f, -6803.308f, 44.564f, 0f, 0f, -14f, 134.5f, 75f, 15f);
	Local_128.f_18 = _create_volume_box(953.977f, -6803.308f, 44.564f, 0f, 0f, -14f, 134.5f, 79.5f, 15f);
	Local_128.f_19 = _create_volume_box(987.8828f, -6747.916f, 63.094f, 0f, 0f, 26f, 2f, 10f, 2f);
	Local_128.f_20 = _create_volume_box(988.9905f, -6747.474f, 62.967f, 0f, 0f, -7.499989f, 4f, 2.5f, 2f);
	Local_128.f_21 = _create_volume_box(989.6013f, -6743.229f, 62.967f, 0f, 0f, -7.499989f, 4f, 2.5f, 2f);
	Local_128.f_22 = _create_volume_box(993.3568f, -6745.939f, 62.967f, 0f, 0f, -7.499989f, 4f, 7.5f, 1f);
	Local_128.f_23 = _create_volume_box(1004.574f, -6743.108f, 58.861f, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
	Local_128.f_24 = _create_volume_cylinder(977.0435f, -6796.52f, 52.85955f, 0f, 0f, 0f, 8f, 8f, 4f);
	Local_128.f_25 = _create_volume_cylinder(988.6901f, -6751.754f, 66.86861f, 0f, 0f, 0f, 2f, 2f, 2f);
	Local_128.f_26 = _create_volume_cylinder(988.6901f, -6751.754f, 66.86861f, 0f, 0f, 0f, 4f, 4f, 2f);
	Local_128.f_27 = _create_volume_box(995.8846f, -6745.344f, 63.275f, 0f, 0f, 27.50001f, 23f, 21.75f, 2f);
	Local_128.f_28 = _create_volume_box(984.6072f, -6809.112f, 50.629f, 0f, 0f, -20f, 50f, 50f, 4f);
	Local_128.f_29 = _create_volume_box(946.6935f, -6804.974f, 40.5917f, 0f, 0f, -20f, 50f, 50f, 10f);
	Local_128.f_30 = _create_volume_box(991.4042f, -6762.391f, 50.62873f, 0f, 0f, -20f, 16f, 45f, 4f);
	Local_128.f_31 = _create_volume_box(956.6206f, -6768.686f, 40.5917f, 0f, 0f, -20f, 50f, 25f, 10f);
	Local_128.f_32 = _create_volume_box(958.5898f, -6731.294f, 42.67224f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_128.f_33 = _create_volume_box(928.7875f, -6780.352f, 42.67224f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_128.f_34 = _create_volume_box(990.6649f, -6745.383f, 63.03f, 0f, 0f, 0f, 14f, 2f, 2f);
	Local_128.f_35 = _create_volume_cylinder(995.494f, -6733.289f, 58.816f, 0f, 0f, 0f, 3f, 3f, 2f);
	Local_128.f_36 = _create_volume_cylinder(984.5244f, -6752.03f, 56.74602f, 0f, 0f, 0f, 3f, 3f, 2f);
	Local_128.f_37 = _create_volume_box(995.7336f, -6747.45f, 63.116f, 0f, 0f, 26f, 14.5f, 25.25f, 2f);
	Local_128.f_38 = _create_volume_box(986.647f, -6748.595f, 63.169f, 0f, 0f, 25f, 5f, 10f, 2f);
	Local_128.f_39 = _create_volume_box(988.8219f, -6751.059f, 63.082f, 0f, 0f, 114.25f, 1.75f, 2f, 2f);
	Local_128.f_40 = _create_volume_box(994.0447f, -6750.739f, 63.082f, 0f, 0f, 65.24999f, 2f, 3f, 2f);
	Local_128.f_41 = _create_volume_box(987.0921f, -6747.217f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_42 = _create_volume_box(970.7692f, -6762.384f, 43.55224f, 0f, 0f, 46.75002f, 4f, 7.25f, 1.5f);
	Local_128.f_43 = _create_volume_box(957.0116f, -6741.078f, 38.28756f, 0f, 0f, -35.5f, 111f, 220f, 5f);
	Local_128.f_44 = _create_volume_box(869.7146f, -6702.047f, 49.07345f, 5E-06f, 90f, -35.5f, 111f, 220f, 5f);
	Local_128.f_45 = _create_volume_box(984.9738f, -6740.556f, 56.41362f, 0f, 0f, -28.00001f, 4.25f, 1f, 3f);
	Local_128.f_46 = _create_volume_cylinder(977.0435f, -6795.712f, 52.85955f, 0f, 0f, 0f, 6f, 6f, 4f);
	Local_128.f_47 = _create_volume_box(988.6495f, -6750.676f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_48 = _create_volume_box(987.3775f, -6747.852f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_49 = _create_volume_box(983.5524f, -6750.572f, 55.73298f, 0f, 0f, 25.49999f, 9.25f, 1f, 4f);
	Local_128.f_50 = _create_volume_box(984.3046f, -6801.109f, 49.63131f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_51 = _create_volume_box(983.4421f, -6806.827f, 49.63131f, 0f, 0f, -21f, 3f, 2f, 2f);
	Local_128.f_52 = _create_volume_box(964.8551f, -6799.691f, 51.21522f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_53 = _create_volume_box(972.8647f, -6797.473f, 51.21522f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_54 = _create_volume_box(989.2771f, -6799.855f, 44.66362f, 0f, 0f, -21f, 17.75f, 1f, 10f);
	Local_128.f_55 = _create_volume_box(968.2204f, -6793.197f, 41.24944f, 0f, 0f, 0f, 80f, 80f, 4f);
	Local_128.f_56 = _create_volume_box(999.7899f, -6723.339f, 59.3432f, 0f, 0f, -55.00005f, 5f, 4f, 4f);
	Local_128.f_57 = _create_volume_box(995.594f, -6726.319f, 58.7739f, 0f, 0f, 35.75f, 2f, 5.75f, 3f);
	Local_128.f_58 = _create_volume_box(990.9879f, -6746.572f, 63.35064f, 0f, 0f, 25f, 7f, 13.75f, 2f);
	Local_128.f_59 = _create_volume_box(998.923f, -6722.519f, 57.61636f, 0f, 0f, 35f, 2f, 2.5f, 2f);
	Local_128.f_60 = _create_volume_box(1000.719f, -6721.626f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_61 = _create_volume_box(1002.365f, -6720.474f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_62 = _create_volume_box(1001.765f, -6718.512f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_63 = _create_volume_box(999.7093f, -6719.952f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_64 = _create_volume_box(998.4943f, -6717.555f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_65 = _create_volume_box(980.5853f, -6794.063f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_66 = _create_volume_box(986.0196f, -6779.313f, 49.42836f, 0f, 0f, -19.99999f, 2f, 2f, 2f);
	Local_128.f_67 = _create_volume_box(983.0923f, -6787.347f, 49.42836f, 0f, 0f, -19.99999f, 2f, 2f, 2f);
	Local_128.f_68 = _create_volume_box(987.3464f, -6775.799f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_69 = _create_volume_box(982.0007f, -6783.822f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_70 = _create_volume_box(991.1345f, -6769.915f, 50.70554f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_71 = _create_volume_box(957.3954f, -6789.382f, 41.36537f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_72 = _create_volume_box(972.5629f, -6774.739f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_73 = _create_volume_box(970.187f, -6785.585f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_74 = _create_volume_box(972.2425f, -6764.342f, 43.31744f, 0f, 0f, -19.99999f, 4f, 4f, 2f);
	Local_128.f_75 = _create_volume_box(959.3632f, -6777.973f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_76 = _create_volume_box(965.9501f, -6766.709f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 4f);
	Local_128.f_77 = _create_volume_box(993.1594f, -6784.04f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_78 = _create_volume_box(985.8779f, -6788.389f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_79 = _create_volume_box(987.8315f, -6783.186f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_80 = _create_volume_box(989.6481f, -6790.066f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_81 = _create_volume_box(967.4157f, -6781.643f, 42.67744f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_82 = _create_volume_box(968.7173f, -6766.482f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_83 = _create_volume_box(970.8581f, -6762.545f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_84 = _create_volume_box(972.1317f, -6768.456f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_85 = _create_volume_box(998.0346f, -6752.573f, 63.00247f, 0f, 0f, 66.74998f, 2f, 3f, 2f);
	Local_128.f_86 = _create_volume_box(990.487f, -6750.782f, 63.082f, 0f, 0f, 114.25f, 1.75f, 2f, 2f);
	Local_128.f_87 = _create_volume_box(987.1265f, -6747.957f, 63.082f, 0f, 0f, 25.74999f, 2f, 3f, 2f);
	Local_128.f_88 = _create_volume_box(997.8356f, -6752.792f, 63.082f, 0f, 0f, 65.49998f, 2f, 3f, 2f);
	Local_128.f_89 = _create_volume_box(982.9453f, -6781.433f, 49.88049f, 0f, 0f, -19.25f, 2f, 4f, 2f);
	Local_128.f_90 = _create_volume_box(987.1163f, -6776.57f, 49.88049f, 0f, 0f, -19.25f, 2f, 4f, 2f);
	Local_128.f_91 = _create_volume_box(985.471f, -6780.917f, 49.88049f, 0f, 0f, -20f, 2.2f, 5f, 2f);
	Local_128.f_92 = _create_volume_box(984.604f, -6777.458f, 49.88049f, 0f, 0f, -19.25f, 2.5f, 4f, 2f);
	Local_128.f_93 = _create_volume_box(978.9535f, -6795.317f, 49.90951f, 0f, 0f, -46.50001f, 5f, 1f, 2f);
	Local_128.f_94 = _create_volume_box(965.3969f, -6774.836f, 42.29731f, 0f, 0f, -18.75f, 21.25f, 21f, 4f);
	Local_128.f_95 = _create_volume_box(992.2004f, -6747.912f, 63.14833f, 0f, 0f, 0f, 7.75f, 1f, 2f);
	Local_128.f_96 = _create_volume_box(992.0494f, -6785.894f, 42.29731f, 0f, 0f, -18.75f, 8.5f, 9f, 4f);
}

void func_382()
{
	Local_2262.f_5 = { 995.3375f, -6733.4f, 61.592f };
	Local_424[1] = Global_35;
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		vLocal_243[iVar0]->f_1 = 1;
		iVar0++;
	}
	iVar0 = 22;
	while (iVar0 <= 32)
	{
		vLocal_243[iVar0]->f_1 = 2;
		iVar0++;
	}
	iVar0 = 40;
	while (iVar0 <= 59)
	{
		vLocal_243[iVar0]->f_1 = 4;
		iVar0++;
	}
	iVar0 = 33;
	while (iVar0 <= 39)
	{
		vLocal_243[iVar0]->f_1 = 3;
		iVar0++;
	}
	Local_1700.f_3[0]->f_5 = { 6.32f, 17.16f, 3.88f };
	Local_1700.f_3[0]->f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[1]->f_5 = { 6.32f, 11.24f, 3.88f };
	Local_1700.f_3[1]->f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[2]->f_5 = { 6.32f, 5.74f, 3.88f };
	Local_1700.f_3[2]->f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[3]->f_5 = { -6.32f, 17.16f, 3.88f };
	Local_1700.f_3[3]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[4]->f_5 = { -6.32f, 11.24f, 3.88f };
	Local_1700.f_3[4]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[5]->f_5 = { -6.32f, 5.56f, 3.88f };
	Local_1700.f_3[5]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[6]->f_5 = { -6.32f, -0.04f, 3.88f };
	Local_1700.f_3[6]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[7]->f_5 = { -6.32f, -5.56f, 3.88f };
	Local_1700.f_3[7]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[8]->f_5 = { -6.32f, -5.76f, 3.88f };
	Local_1700.f_3[8]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[9]->f_5 = { -6.32f, -11.36f, 3.88f };
	Local_1700.f_3[9]->f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[10]->f_5 = { -6.32f, -16.92f, 3.88f };
	Local_1700.f_3[10]->f_8 = { 0f, 0f, 270f };
	Local_1498[0]->f_1 = 0.05f;
	Local_1498[1]->f_1 = 0.05f;
	Local_1498[2]->f_1 = 0.05f;
	Local_1498[2]->f_7 = 1f;
	Local_1465[0] = 14;
	Local_1465[0]->f_6 = 35;
	Local_1465[1] = 15;
	Local_1465[1]->f_6 = 8;
	Local_1465[3] = 16;
	Local_1465[3]->f_6 = 4;
	Local_1265[0] = 4;
	Local_1265[0]->f_5 = 0f;
	Local_1265[0]->f_11 = 18;
	Local_1265[0]->f_12 = 35;
	Local_1265[1] = 5;
	Local_1265[1]->f_5 = 30f;
	Local_1265[1]->f_8 = { func_761(1, 0, 1) };
	Local_1265[1]->f_6 = 30f;
	Local_1265[1]->f_11 = 20;
	Local_1265[1]->f_12 = 1;
	Local_1265[2] = 4;
	Local_1265[2]->f_5 = 30f;
	Local_1265[2]->f_11 = 37;
	Local_1265[2]->f_12 = 2;
	Local_1265[3] = 6;
	Local_1265[3]->f_5 = 0f;
	Local_1265[3]->f_6 = 20f;
	Local_1265[3]->f_11 = 38;
	Local_1265[3]->f_12 = 2;
	Local_1265[4] = 2;
	Local_1265[4]->f_6 = 20f;
	Local_1265[4]->f_11 = 55;
	Local_1265[4]->f_12 = 4;
	Local_1265[5] = 4;
	Local_1265[5]->f_5 = 20f;
	Local_1265[5]->f_11 = 57;
	Local_1265[5]->f_12 = 4;
	Local_1265[6] = 4;
	Local_1265[6]->f_5 = 60f;
	Local_1265[6]->f_11 = 74;
	Local_1265[6]->f_12 = 8;
	Local_1265[7] = 4;
	Local_1265[7]->f_5 = 0f;
	Local_1265[7]->f_11 = 75;
	Local_1265[7]->f_12 = 8;
	Local_1265[8] = 4;
	Local_1265[8]->f_5 = 0f;
	Local_1265[8]->f_11 = 76;
	Local_1265[8]->f_12 = 8;
	Local_1265[10] = 4;
	Local_1265[10]->f_5 = 0f;
	Local_1265[10]->f_11 = 91;
	Local_1265[10]->f_12 = 8;
	Local_1265[9] = 4;
	Local_1265[9]->f_5 = 0f;
	Local_1265[9]->f_11 = 92;
	Local_1265[9]->f_12 = 8;
	Local_1265[11] = 2;
	Local_1265[11]->f_6 = 20f;
	Local_1265[11]->f_11 = 105;
	Local_1265[11]->f_12 = 16;
	Local_1265[12] = 4;
	Local_1265[12]->f_6 = 0f;
	Local_1265[12]->f_11 = 106;
	Local_1265[12]->f_12 = 16;
	Local_1265[13] = 4;
	Local_1265[13]->f_5 = 0f;
	Local_1265[13]->f_11 = 122;
	Local_1265[13]->f_12 = 32;
}

void func_383()
{
	Local_2328[2]->f_2 = 1;
	Local_2328[3]->f_2 = 1;
}

int func_384(var uParam0)
{
	if (func_8(uParam0, 8) && !func_120(uParam0, 4))
	{
		return 0;
	}
	if (((func_33(uParam0) == 0 && !func_120(uParam0, 4)) && !func_128(uParam0, 1)) && !func_128(uParam0, 2))
	{
		return 0;
	}
	if (func_120(uParam0, 4) && !func_128(uParam0, 2))
	{
		return 1;
	}
	return 2;
}

void func_385(int iParam0, bool bParam1)
{
	if ((bParam1 && func_430(uVar1695, func_429(iParam0))) || (!bParam1 && !func_430(uVar1695, func_429(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { 1000.131f, -6745.501f, 65.8722f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -1393961424, true);
				create_model_hide(985.2634f, -6751.113f, 54.809f, 1f, 570671881, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -1393961424, 0);
				remove_model_hide(985.2634f, -6751.113f, 54.809f, 1f, 570671881, 0);
			}
			Var0 = { 999.7872f, -6744.081f, 57.3144f };
			Var0.f_3 = 0.2f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -1025740342, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -1025740342, 1);
			}
			break;
		case 1:
			Var0 = { 1000.359f, -6740.462f, 58.1143f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -1008034454, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -1008034454, 0);
			}
			break;
		case 2:
			Var0 = { 999.8f, -6745.6f, 62.5f };
			Var0.f_3 = 5f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, func_437(11), true);
				create_model_hide(Var0, Var0.f_3, func_437(12), true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, func_437(11), 1);
				remove_model_hide(Var0, Var0.f_3, func_437(12), 1);
			}
			break;
	}
	if (bParam1)
	{
		func_762(&uLocal_1699, func_429(iParam0));
	}
	else
	{
		func_442(&uLocal_1699, func_429(iParam0));
	}
}

void func_386(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_387(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_388(var uParam0)
{
	if (!func_763(uParam0, 4))
	{
		if (func_764(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_765(uParam0) };
		if (!func_764(uParam0->f_860, 524288))
		{
			func_766(&(uParam0->f_872));
		}
		func_767(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_768(uParam0, 0f, 0f, 0f);
		func_769(uParam0);
		func_770(uParam0);
		func_771(uParam0, 0f, 0f, 0f, 0, 0);
		func_772(uParam0);
		func_722(uParam0, 4);
		func_773(uParam0, 0);
		func_774(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_389(int iParam0)
{
	if (func_775(iParam0))
	{
		return func_776(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_390(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_476(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_777(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_778(0, 0);
		if (func_663(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_779(1, 0);
		}
	}
	else
	{
		func_779(1, 0);
	}
	func_203(0);
	func_477(0, vParam0, uParam3);
	return 1;
}

bool func_391()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_392(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_393()
{
	return 26;
}

void func_394(int iParam0)
{
	if (!func_183(iParam0))
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

void func_395(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_780((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_781((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_782((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_783((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_784((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_785((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_786((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_787((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_788((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_789((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_790((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_791(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_792(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_408(var uParam0, int iParam1)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	uParam0->f_1124.f_1 = (uParam0->f_1124.f_1 || iParam1);
}

void func_409(int iParam0, int iParam1)
{
	func_762(iParam0, iParam1);
}

void func_410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_793((*uParam0)[iVar0]))
		{
			if (func_794((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_795((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_796((*uParam1)[iVar0]))
		{
			if (func_794((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_797((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_798((*uParam2)[iVar0]))
		{
			if (func_794((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_799((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_800((*uParam3)[iVar0]))
		{
			if (func_794((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_801((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_794(uParam4->f_1, iParam12))
	{
		func_802(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_803((*uParam5)[iVar0]))
		{
			if (func_794((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_804((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_803((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_805((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_794((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_806((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_807((*uParam6)[iVar0]))
		{
			if (func_794((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_808((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_809((*uParam7)[iVar0]))
		{
			if (func_794((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_810((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_811((*uParam8)[iVar0]))
		{
			if (func_794((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_812((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_813((*uParam9)[iVar0]))
		{
			if (func_794((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_814((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_815((*uParam10)[iVar0]))
		{
			if (func_794((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_816((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_817((*uParam11)[iVar0]))
		{
			if (func_794((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_818((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_411(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_819(uParam0, iParam1, sParam2))
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

struct<2> func_412()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_413(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_414(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_415(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_820(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_373(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_416(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_821(uParam0->f_607)}, 3);
			if (func_822(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_823(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_824(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_417(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_803((*uParam0)[iVar0]))
		{
			if (func_794((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_825((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_826((*uParam0)[iVar0]))
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

int func_418(var uParam0)
{
	return uParam0->f_596;
}

bool func_419(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_827(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_828(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_420(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_829(uParam0))
			{
				func_103(uParam0, 16777216);
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
				iVar12 = func_830(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_831(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_832(iVar12))
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
	vVar14 = { func_126(uParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(uParam0), false);
		if (!has_model_loaded(func_125(uParam0)))
		{
			return false;
		}
		if (func_833(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_830(&iVar29, &Var18);
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
		func_834(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_832(iVar13) || func_835(Global_35, iVar13, 1, 1) > 200f) && !func_392(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_836(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_421(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_837(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_838(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_422(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_839(uParam0);
			if (func_840(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_841(uParam0, 2097152);
				func_259(uParam0, 16384);
				func_103(uParam0, 128);
			}
			return;
		}
		if (func_128(uParam0, 1))
		{
			return;
		}
		if (func_120(uParam0, 64))
		{
			func_839(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_842(uParam0, Var0))
			{
				if (func_418(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_418(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_423(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_424(var uParam0)
{
	iVar0 = 1;
	if (!func_843(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_419(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_420(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_821(uParam0->f_607)}, 3);
		if (func_844(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(uParam0, 1))
	{
		if (!func_26(&(uParam0->f_13115)))
		{
			func_27(&(uParam0->f_13115), 0);
		}
		if (func_845(&(uParam0->f_13115)) < 30f)
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

bool func_425(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_845(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_846()) && func_845(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_259(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_847(0, 0);
		func_259(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_426(var uParam0)
{
	if (func_164(0))
	{
		func_178(0);
	}
	if (!func_164(1))
	{
		if (!func_846())
		{
			func_848();
			func_849(1);
		}
		else
		{
			return false;
		}
	}
	if (!func_164(4))
	{
		func_850();
		func_849(4);
	}
	if (!func_164(3))
	{
		if (func_851(func_33(uParam0)))
		{
			func_849(3);
		}
		else
		{
			return false;
		}
	}
	if (!func_852(uParam0))
	{
		return false;
	}
	if (func_33(uParam0) == 0 && !Local_2328[0]->f_1 == 8)
	{
		func_853(0);
		if (!Local_2328[0]->f_1 == 8)
		{
			return false;
		}
	}
	func_854(uParam0);
	if (func_855(uParam0) && func_856(uParam0, 12, 12, 3))
	{
		if (!is_entity_dead(&(Local_424[12])) && !is_entity_dead(Local_1700.f_1))
		{
			if (!is_ped_in_vehicle(&(Local_424[12]), Local_1700.f_1, false))
			{
				set_ped_into_vehicle(&(Local_424[12]), Local_1700.f_1, -1);
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_857(uParam0))
	{
		return false;
	}
	func_385(0, 1);
	set_roads_in_area(455.4888f, -7358.837f, -170.5122f, 1558.742f, -6413.559f, 117.7062f, 0, 0, 0);
	func_166(1);
	request_ptfx_asset();
	func_176(func_33(uParam0));
	_0x55123d5a7d9d3c42(0f);
	_0xf06c5b66de20b2b8(0f);
	func_858(0, 0);
	func_858(1, 0);
	func_858(2, 0);
	func_858(3, 0);
	func_860(uParam0, 144110);
	func_862(uParam0, 144317);
	func_863(3);
	if (!func_33(uParam0) == 0)
	{
		func_864(uParam0);
	}
	if (func_384(uParam0) == 1)
	{
		func_847(0, 0);
	}
	if (func_82(32768))
	{
		func_866(Global_35, func_865(6291456, 1056964608, 1065353216), -1, 0, 0, 1056964608, 1065353216, 0);
	}
	func_312(230530039, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
	func_312(-486559882, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
	return true;
}

void func_427(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_428(var uParam0)
{
	func_867(uParam0);
	func_868(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_840(uParam0);
		}
	}
	func_869(uParam0);
	func_870(uParam0);
	func_871(uParam0);
	func_872(uParam0);
	func_873(uParam0);
	func_874(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_875(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_273(uParam0) == 0)
	{
		func_422(uParam0);
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
			if (func_876(uParam0, iVar0, 0))
			{
				if (func_877(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_877(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_877(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_374(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_878(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_879(uParam0);
					func_880(uParam0, iVar0, 1);
				}
				else
				{
					func_880(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_843(uParam0))
			{
				if (func_881(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_841(uParam0, 4);
					}
					func_880(uParam0, iVar0, 2);
				}
			}
			else if (func_882(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_841(uParam0, 4);
				}
				func_880(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_876(uParam0, iVar0, 2))
			{
				if (!func_883(uParam0))
				{
					func_880(uParam0, iVar0, 4);
					if (func_884(uParam0, iVar0, iVar1))
					{
						func_880(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_885(uParam0);
					func_880(uParam0, iVar0, 3);
					if (func_886(uParam0, iVar0))
					{
						func_880(uParam0, iVar0, 4);
						if (func_884(uParam0, iVar0, iVar1))
						{
							func_880(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_887(uParam0))
			{
				func_886(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_886(uParam0, iVar0))
			{
				func_880(uParam0, iVar0, 4);
				if (func_884(uParam0, iVar0, iVar1))
				{
					func_880(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_884(uParam0, iVar0, iVar1))
			{
				func_880(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_888(uParam0);
				func_889(uParam0, iVar0);
				func_890(uParam0);
				func_891(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_892(uParam0, iVar1))
					{
						func_893(uParam0, iVar1);
					}
				}
			}
			if (func_876(uParam0, iVar0, 5))
			{
				if (func_876(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_894(uParam0, func_33(uParam0));
					}
					func_895(uParam0, iVar1);
					func_868(uParam0);
					return true;
				}
				else
				{
					func_880(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_896(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_897(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_898("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_899(uParam0))
					{
						func_880(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_841(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_259(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_888(uParam0);
				func_889(uParam0, iVar0);
				func_890(uParam0);
				func_891(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_892(uParam0, func_35(uParam0)))
					{
						func_893(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_897(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_876(uParam0, iVar0, 5))
				{
					if (func_900(uParam0))
					{
						func_880(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_900(uParam0);
					func_880(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_876(uParam0, iVar0, 5);
				func_901(uParam0);
			}
			break;
		case 7:
			if (func_876(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_894(uParam0, func_33(uParam0));
				}
				func_895(uParam0, iVar1);
				func_868(uParam0);
				return true;
			}
			break;
		default:
			func_880(uParam0, iVar0, 7);
			break;
	}
	return false;
}

int func_429(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

bool func_430(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_431(var uParam0, int iParam1)
{
	func_902(&(uParam0->f_7375), iParam1);
	func_903(&(uParam0->f_10792), iParam1);
}

void func_432(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!func_904(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_905(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_804, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_804, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_804, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_804, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_804, sParam2, iParam1);
		}
	}
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 4:
			return 6;
		case 5:
			return 3;
	}
	return -1;
}

void func_434(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_906(iParam0, bParam3);
	}
	else
	{
		func_907(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_908(iParam0, bParam3);
	}
	else
	{
		func_909(iParam0, bParam3);
	}
}

void func_435(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_910(uParam0, iVar0, 0);
		iVar0++;
	}
}

void func_436(int iParam0)
{
	if (!&vLocal_243[iParam0] == 3)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	vLocal_243[iParam0] = 4;
}

int func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1944593012;
		case 1:
			return -566878875;
		case 2:
			return 2070393450;
		case 3:
			return 1276534479;
		case 4:
			return -229065721;
		case 5:
			return -1910795227;
		case 6:
			return 438589899;
		case 7:
			return -384354290;
		case 8:
			return 749266870;
		case 9:
			return 217912393;
		case 10:
			return -1613317544;
		case 11:
			return -2021274799;
		case 12:
			return -1025740342;
		case 13:
			return -624459085;
		case 14:
			return 1845515537;
		case 15:
			return 1510410963;
		case 16:
			return -723630795;
		case 18:
			return 1011414920;
		case 19:
			return 237310259;
		case 20:
			return 507119910;
		case 17:
			return -1605464766;
		case 21:
			return -1816535547;
	}
	return 0;
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return "smg2_s1_asstline";
		case 23:
			return "smg2_fussars_ship";
		case 24:
			return "smg2_s3_through_fort";
		case 25:
			return "smg2_cme3";
		case 26:
			return "smg2_s4_down_stairs";
		case 27:
			return "smg2_s3_wave2_rowboat0";
		case 28:
			return "smg2_s3_wave2_rowboat1";
		case 29:
			return "smg2_s3_wave2_rowboat2";
		case 30:
			return "smg2_s3_wave2_rowboat3";
		case 31:
			return "smg2_s3_wave2_rowboat4";
		case 32:
			return "smg2_s5_up_fort";
	}
	return "";
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return &(iLocal_1452[0]);
		case 35:
			return &(iLocal_1452[1]);
		case 34:
			return &(iLocal_1452[2]);
		case 36:
			return &(iLocal_1452[5]);
		case 37:
			return &(iLocal_1452[6]);
		case 38:
			return &(iLocal_1452[3]);
		case 39:
			return &(iLocal_1452[4]);
	}
	return 0;
}

char* func_440(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 40:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@BILL@OVERTHERE@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 41:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@OVERTHERE@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 42:
			if (bParam1)
			{
				return "ai_combat@gestures@military@generic@overthere@2h";
			}
			else
			{
				return "0";
			}
			break;
		case 43:
			if (bParam1)
			{
				return "AI_COMBAT@REPOSITION@COWBOY@GENERIC@HIGH_INTENSITY@RELOAD@STATIC@2H";
			}
			else
			{
				return "static_01";
			}
			break;
		case 44:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@BECKON@2H";
			}
			else
			{
				return "-180";
			}
			break;
		case 45:
			if (bParam1)
			{
				return "ai_gestures@gen_male@standing@SPEAKER";
			}
			else
			{
				return "neutral_get_attention_r_003";
			}
			break;
		case 46:
			if (bParam1)
			{
				return "AI_COMBAT@AIM_SWEEPS@COWBOY@GENERIC@BASE@DUAL";
			}
			else
			{
				return "aim_med_0";
			}
			break;
		case 47:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@BECKON@DUAL";
			}
			else
			{
				return "180";
			}
			break;
		case 48:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@AMBIENT@GENERIC@BECKON@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "ai_combat@gestures@military_crouched@beckon@2h";
			}
			else
			{
				return "0";
			}
			break;
		case 50:
			if (bParam1)
			{
				return "ai_combat@gestures@military_crouched@generic@overthere@2h";
			}
			else
			{
				return "-180";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "ai_combat@gestures@military@overthere@2h";
			}
			else
			{
				return "-180";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "ai_react@breakouts@gen_male@stand@feet_together@generic@quick";
			}
			else
			{
				return "breakout_quick_left";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "ai_react@male_stand@BIG_INTRO@FORWARD";
			}
			else
			{
				return "reaction_forward_big_intro_a";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "AI_COMBAT@AIM_SWEEPS_UNDER_FIRE@AMBIENT@GENERIC@BASE@2H";
			}
			else
			{
				return "aim_med_0";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "frontleft1";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "frontright1";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "overhead1";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "AI_DAMAGE@DEAD@BASE";
			}
			else
			{
				return "dead_a";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "AI_DAMAGE@DEAD@BASE";
			}
			else
			{
				return "dead_d";
			}
			break;
	}
	return "";
}

void func_441(int iParam0)
{
	if (!does_cam_exist(&(iLocal_1494[iParam0])))
	{
		return;
	}
	if (is_cam_active(&(iLocal_1494[iParam0])))
	{
		set_cam_active(&(iLocal_1494[iParam0]), false);
	}
	if (is_cam_shaking(&(iLocal_1494[iParam0])))
	{
		stop_cam_shaking(&(iLocal_1494[iParam0]), true);
	}
	destroy_cam(&(iLocal_1494[iParam0]), false);
}

void func_442(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_443(int iParam0)
{
	if (_does_anim_scene_exist(&(Local_2328[iParam0])) && check_ownership_of_anim_scene(&(Local_2328[iParam0])))
	{
		_delete_anim_scene(&(Local_2328[iParam0]));
	}
	Local_2328[iParam0]->f_1 = 0;
}

bool func_444(int iParam0)
{
	return func_911(iParam0, 2);
}

int func_445(int iParam0)
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

int func_446(int iParam0)
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

int func_447(int iParam0)
{
	return iParam0 & 31;
}

bool func_448()
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

int func_449(int iParam0)
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

int func_450(int iParam0)
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

void func_451(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_452()
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

int func_453(int iParam0)
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

void func_454(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_455(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_912(iParam0);
	}
	else
	{
		func_913(iParam0, iParam1);
	}
	func_914();
}

bool func_456(int iParam0)
{
	iVar0 = func_915(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_457(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	switch (func_189(iParam0))
	{
		case 1:
			switch (func_266(iParam0))
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
			switch (func_266(iParam0))
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

void func_458(int iParam0)
{
	iVar2 = func_916(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_918(func_917(iParam0), 6);
}

void func_459(int iParam0)
{
	iVar2 = func_916(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_919(func_917(iParam0), 6);
}

int func_460(int iParam0)
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

int func_461(int iParam0)
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
	func_920(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_462(int iParam0)
{
	return iParam0 != 0;
}

bool func_463(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_464(int iParam0, var uParam1)
{
	if (!func_463(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_921(iParam0, *uParam1, 0);
	func_922(uParam1);
	Global_1935183->f_24 = 1;
}

void func_465(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_466(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_521() - fParam1);
	func_923(uParam0, 1);
	func_924(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_467(var uParam0)
{
	return func_213(*uParam0, 2);
}

int func_468()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_469(bool bParam0)
{
	if (func_925())
	{
		Global_1357509 = 1;
	}
	if (func_926(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_470(int iParam0, int iParam1)
{
	return func_927(iParam0, iParam1);
}

struct<4> func_471(int iParam0, int iParam1)
{
	return func_928(iParam0, iParam1);
}

Vector3 func_472(int iParam0, int iParam1)
{
	return func_929(iParam0, iParam1);
}

int func_473(int iParam0)
{
	if (func_189(iParam0) == 1)
	{
		return func_266(iParam0);
	}
	return -1;
}

int func_474(int iParam0)
{
	if (func_189(iParam0) == 8)
	{
		return func_266(iParam0);
	}
	return -1;
}

char[] func_475(int iParam0)
{
	if (!func_267(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_476(int iParam0, bool bParam1)
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
		func_930(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_279();
	}
}

void func_477(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_366(vParam1, 1);
}

bool func_478(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_479(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_480(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_481(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_482(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_483(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_484()
{
	return Global_1109400->f_245;
}

bool func_485(var uParam0, int iParam1)
{
	return func_387(uParam0->f_64, iParam1);
}

bool func_486(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_487(int iParam0)
{
	return func_682(iParam0, 16, 1);
}

void func_488(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_931(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_932(uParam0, get_object_index_from_entity_index(iParam1)))
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

void func_489(int iParam0)
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

void func_490(int iParam0)
{
	func_933(iParam0, 8, 0);
}

void func_491(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_935(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_933(iParam0, 1, 0);
		}
	}
	func_933(iParam0, 16, bParam1);
}

void func_492(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (func_487(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_936(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_491(iParam0, 0);
	func_933(iParam0, 4, 0);
	func_490(iParam0);
	func_937(iParam0);
	func_938(iParam0, 37, 1);
	bVar0 = func_939(Global_1360165[iParam0], 0);
	iVar1 = func_940(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_941(iParam0, 64, 1))
	{
		func_938(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_938(iParam0, 33, 1);
		func_938(iParam0, 34, 1);
		func_942(iParam0, 1056964608, -1, 1061158912);
		func_943(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_936(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_936(iParam0, 35, 1);
			if (bParam8)
			{
				func_936(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_944(iParam0, 0);
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
		func_938(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_936(iParam0, 33, 1);
		func_943(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_524(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_936(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_945(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_941(iParam0, 45, 1))
	{
		func_938(iParam0, 45, 1);
	}
	func_946(iParam0, 16, 1);
	func_938(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_939(func_947(iParam0), 0))
		{
			func_948(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_493(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_500(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_500(iParam0);
	}
}

bool func_494(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_495(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_496(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_497(int iParam0)
{
	if (!func_949(iParam0))
	{
		return false;
	}
	if (!func_325())
	{
		return true;
	}
	return false;
}

void func_498(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_209(iParam0);
	func_950(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_497(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_951(iParam0, 0);
	func_500(iParam0);
}

bool func_499(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_500(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_501(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_502(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_209(iParam0);
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
	if (func_952(iParam0, 64))
	{
		func_495(iParam0);
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
	bVar3 = func_571(42);
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
				func_953(&((*Global_1900383)[iParam0]->f_27));
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
		func_495(iParam0);
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
		if (func_954(1) < 1)
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
		func_955(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_952(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_956(iParam0);
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
	fVar15 = func_957(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_958(iParam0))
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
		func_959((*Global_1900383)[iParam0]->f_26);
		func_960((*Global_1900383)[iParam0]->f_26);
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
	if (func_832(iVar0) && !bVar9)
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
	iVar21 = func_954(iParam0);
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

int func_503(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_504(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_505(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_506(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_507(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_508(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_501(iParam0))
	{
		return false;
	}
	iVar0 = func_209(iParam0);
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

void func_509(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_209(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_510(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_511(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_961())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_679(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_962(iVar0);
			func_963(iVar0, 0, 0);
		}
		func_679(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_512(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 67108864);
}

void func_513(int iParam0)
{
	StringCopy(&cVar0, func_964(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_965(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_514(int iParam0)
{
	StringCopy(&cVar0, func_964(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_965(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_515(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_516(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_518(int iParam0)
{
	if (!func_481(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_519(int iParam0)
{
	if (func_481(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_520(int iParam0)
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

float func_521()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_522(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_966(iParam0) == 1 && bParam7)
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

int func_523(int iParam0)
{
	if (!func_934(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_524(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_525(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_967(iParam0);
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

int func_526(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_539(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_527(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_528(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_529()
{
	return Global_40.f_11095.f_35;
}

void func_530(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_968(iParam0, 0);
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
		func_531(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_531(int iParam0)
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
			func_968(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_969(1);
	}
}

bool func_532(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_533()
{
	iVar0 = func_970((*Global_1347702)[9]->f_15);
	iVar1 = func_970((*Global_1835011)[69]->f_1);
	if (func_971(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_534(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

int func_535(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_972(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_973(iVar6);
	}
	return iVar5;
}

int func_536(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_974(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_537(int iParam0, bool bParam1)
{
	func_975(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_538(int iParam0)
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

void func_539(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_537(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_540(2, *uParam0);
		}
		else
		{
			func_541(2, *uParam0);
		}
	}
	func_976(uParam0);
}

void func_540(int iParam0, int iParam1)
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

void func_541(int iParam0, int iParam1)
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

void func_542(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_977(iParam0, iParam1, bParam2);
}

int func_543(int iParam0)
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

int func_544(int iParam0)
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

void func_545(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_978();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_979(iParam0);
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
	if (func_571(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_980())
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
	iVar1 = func_978();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_981(iVar1);
		func_983(func_982(), 0, 4000);
		func_984(Global_40.f_11095.f_35);
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
		func_985(0);
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
				if (iParam0 > func_544(14))
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
					sParam4 = func_986(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_544(4))
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
					sParam4 = func_986(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_679(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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

void func_546(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_547(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_548(int iParam0)
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

bool func_549(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_550(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_987(iParam0) && func_988(iParam0))
		{
			func_989(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_551(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_990(iParam0, iParam1);
	Var0 = { func_660(iParam0, 0, 1) };
	iVar5 = func_991(iParam0, &Var0, 0, 0);
	iVar6 = func_992(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_569(iParam0, -2051813666))
		{
			func_319(583, 1);
		}
		else
		{
			func_319(582, 0);
		}
	}
	if (func_993(iParam0, &Var0, *iParam1, 0, 0))
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

void func_552(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_630(iParam0, -949239683))
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

int func_553(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_568(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_994(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_995(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_916(bParam2), iParam0, 0);
	return iVar2;
}

bool func_554(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_555(iParam0) != 0;
}

int func_555(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_996())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_997(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_556(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_557(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_996())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_556(iVar0))
		{
			if (func_341(func_997(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_558(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_998(48);
	func_361(0, -1);
}

bool func_559(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

int func_560(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_561(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_562(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_563(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_267(iParam0))
	{
		return false;
	}
	return func_185((*Global_1347702)[iParam0]->f_15);
}

int func_564()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_341(func_999(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_565(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_391() && (func_563(38) || func_559(38)))
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
			if (func_391() && (func_563(39) || func_559(39)))
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
			iVar9 = func_1000(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_391() && (func_563(41) || func_559(41)))
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
			if (func_391() && (func_563(49) || func_559(49)))
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
			iVar9 = func_1000(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1001(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1002(iParam0, iVar13, iVar14))
	{
	}
	if (func_1003(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1004(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1005(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1006(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1007(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_566(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_567(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_391() && (func_563(38) || func_559(38)))
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
			if (func_391() && (func_563(39) || func_559(39)))
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
			if (func_391() && (func_563(49) || func_559(49)))
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
		if (func_391() && (func_563(38) || func_559(38)))
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
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_686(_create_var_string(2, sVar0), _create_var_string(2, func_1009(func_561(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_391() && (func_563(39) || func_559(39)))
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
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_391() && (func_563(49) || func_559(49)))
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
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1008(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_568(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_569(int iParam0, int iParam1)
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

bool func_570(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_571(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return false;
	}
	return func_1011(iParam0);
}

void func_572(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return;
	}
	func_1012(iParam0);
	func_1013(iParam0);
}

int func_573(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_574(int iParam0, bool bParam1)
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
	if (func_549(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1014(iVar0) || func_122(iVar0))
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

int func_575(int iParam0, bool bParam1)
{
	if (!func_549(iParam0, 0))
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

void func_576(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_663(iParam0))
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

bool func_577(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_916(bParam0));
}

bool func_578(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_660(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1015((386 + iVar28), 1);
			if (func_1016(iParam0, &Var0, iVar5, 0))
			{
				if (func_1017(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1018(iParam0, Var0, iVar5, 0) };
					func_1019(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_577(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_579(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1020(iParam0, iParam1);
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

bool func_579(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_581(iParam0))
	{
		return false;
	}
	if (!func_577(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_575(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_576(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1021(iVar0);
			}
		}
		if (!func_993(iParam0, &uVar1, 1, 0, 0))
		{
			func_989(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1022(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_578(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_578(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_578(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_980())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1023(iVar0))
				{
					func_578(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_578(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1024(Global_35, 2, 0, 1);
				if ((((func_663(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_571(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_663(iVar7) && func_571(24))
				{
					if (!func_578(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_578(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_578(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_581(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_582(int iParam0, int iParam1, int iParam2)
{
	if (!func_581(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_663(iVar4))
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
		func_617(func_1025(iParam0), func_616(iParam0), 1);
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
	if (func_577(0))
	{
		if (func_579(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_622(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_583(int iParam0)
{
	if ((iParam0 == -615217896 && !func_332()) || iParam0 != -615217896)
	{
		if (func_1026(Global_35, iParam0, &uVar0))
		{
			func_601(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_607();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_607();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_607();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_605();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_603();
			break;
	}
}

void func_584(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_603();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_604();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_605();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_606();
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
			func_607();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1027();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1028();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_585(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_586(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_587(int iParam0)
{
	bVar0 = func_569(iParam0, -2017733358);
	if (func_1029() < 3)
	{
		if (bVar0)
		{
			if (func_1031(func_1030(iParam0), iParam0))
			{
				func_617(79, func_616(func_1030(iParam0)), 1);
			}
			else
			{
				func_617(78, func_616(func_1030(iParam0)), 1);
			}
		}
		else
		{
			func_617(80, func_616(func_1032(iParam0)), 1);
		}
	}
}

bool func_588()
{
	if (((((func_1033(839908568, 400) || func_1033(-1134030454, 400)) || func_1033(623353496, 400)) || func_1033(-344413337, 400)) || func_1033(-1664948962, 400)) || func_1033(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_589(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_697(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_510(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_511(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_590(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_565(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_567(51, 0, 0, 0, 0, -1, 0);
			func_1034(8192);
			break;
		case 581047644:
			func_565(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_567(51, 0, 0, 0, 0, -1, 0);
			func_1034(524288);
			break;
		case -644199619:
			func_565(39, 0, 0, 0, 0, 0, 1, 0);
			func_567(39, 0, 0, 0, 0, -1, 0);
			func_1035(16);
			break;
		case 684296857:
			func_565(41, 0, 0, 0, 0, 0, 1, 0);
			func_567(41, 0, 0, 0, 0, -1, 0);
			func_1036(8);
			break;
		case 466137807:
			func_565(49, 0, 0, 0, 0, 0, 1, 0);
			func_567(49, 0, 0, 0, 0, -1, 0);
			func_1037(16);
			break;
		case -1087522507:
			func_565(43, 0, 0, -1791518714, func_1038(1), 0, -1, 0);
			func_1039(1);
			break;
		case -405829000:
			func_565(43, 0, 0, -2087881550, func_1038(2), 0, -1, 0);
			func_1039(2);
			break;
		case 378660860:
			func_565(43, 0, 0, 1908068621, func_1038(4), 0, -1, 0);
			func_1039(4);
			break;
		case 1566111097:
			func_565(43, 0, 0, 1611247019, func_1038(8), 0, -1, 0);
			func_1039(8);
			break;
		case 1276007140:
			func_565(43, 0, 0, 1319635688, func_1038(16), 0, -1, 0);
			func_1039(16);
			break;
	}
}

void func_591(int iParam0)
{
	if (func_1040() == 1)
	{
		if (func_559(39))
		{
			func_319(342, 0);
		}
		else
		{
			func_319(343, 0);
			func_1035(1);
		}
	}
	if (func_1040() >= 30)
	{
		func_319(344, 0);
	}
	func_565(39, 0, 0, 0, 0, 0, -1, 0);
	func_567(39, 0, 0, func_1040(), 30, 1, 0);
}

void func_592(int iParam0)
{
	if (func_1041() == 1)
	{
		if (func_559(49))
		{
			func_319(409, 0);
		}
		else
		{
			func_319(410, 0);
			func_1037(1);
		}
	}
	if (func_1041() >= 10)
	{
		func_319(411, 0);
	}
	func_565(49, 0, 0, 0, 0, 0, -1, 0);
	func_567(49, 0, 0, func_1041(), 10, 1, 0);
}

void func_593(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_319(437, 0);
			func_319(440, 0);
			func_1042(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1000(-949689219, 20), 1, 0);
			func_1034(1);
			func_1043(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1042(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1000(-1248968496, 20), 1, 0);
			func_1034(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1042(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1000(1706369307, 20), 1, 0);
			func_1034(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1042(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1000(1520110311, 20), 1, 0);
			func_1034(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_319(438, 0);
			func_1042(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_565(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_567(51, 0, 0, sVar0, func_1000(-1992824800, 20), 1, 0);
			func_1034(32768);
			break;
		default:
			func_319(439, 0);
			break;
	}
}

void func_594()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_595(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_559(43))
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
		else if (func_569(iParam0, 412399755))
		{
			func_1044(-1791518714);
			if (func_1045() == 0)
			{
				func_361(0, 10);
				iVar1 = func_1046(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_559(44))
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
		else if (func_569(iParam0, 709057512))
		{
			func_1044(-2087881550);
			if (func_1045() == 1)
			{
				func_361(0, 10);
				iVar1 = func_1046(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_559(45))
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
		else if (func_569(iParam0, -1478961327))
		{
			func_1044(1908068621);
			if (func_1045() == 2)
			{
				func_361(0, 10);
				iVar1 = func_1046(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1049(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1050(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_998(48);
					}
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_559(46))
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
		else if (func_569(iParam0, -1238404098))
		{
			func_1044(1611247019);
			if (func_1045() == 3)
			{
				func_361(0, 10);
				iVar1 = func_1046(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_559(47))
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
		else if (func_569(iParam0, 1160548794))
		{
			func_1044(1319635688);
			if (func_1045() == 4)
			{
				func_361(0, 10);
				iVar1 = func_1046(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1047(iParam0) < func_1048(iParam0))
					{
						func_565(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_567(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_596(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1049(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1050(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_998(48);
		}
	}
}

void func_597(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_341(func_1051(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1052(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1053(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_598(int iParam0, int iParam1, int iParam2)
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
				func_589(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_589(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_589(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_589(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_589(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_589(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_589(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_589(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_589(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_589(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_589(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_589(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_589(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1054())
			{
				func_589(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_589(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_589(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_589(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_589(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_589(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_589(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_589(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_589(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_589(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_589(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_589(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_589(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_599(int iParam0)
{
	if (func_559(41))
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
			func_1055(-1865241121);
			func_1056(-642026005);
			func_1057(-642026005);
			func_361(0, 10);
			break;
		case -2108314374:
			func_1055(2117142684);
			func_1056(-940584364);
			func_1057(-940584364);
			func_361(0, 10);
			break;
		case -1193798153:
			func_1055(-1409326024);
			func_1056(1972645282);
			func_1057(1972645282);
			func_361(0, 10);
			break;
		case -787702678:
			func_1055(-641744968);
			func_1056(1667205433);
			func_1057(1667205433);
			func_361(0, 10);
			break;
		case -804542901:
			func_1055(-946988203);
			func_1056(1362715885);
			func_1057(1362715885);
			func_361(0, 10);
			break;
		case -1696275132:
			func_1055(-646136018);
			func_1056(1053540370);
			func_1057(1053540370);
			func_361(0, 10);
			break;
		case -161595323:
			func_1055(-955835837);
			func_1056(-1100103852);
			func_1057(-1100103852);
			func_361(0, 10);
			break;
		case -1114363619:
			func_1055(-179276075);
			func_1056(-1409869209);
			func_1057(-1409869209);
			func_361(0, 10);
			break;
		case -368407134:
			func_1055(-492711560);
			func_1056(-1760235357);
			func_1057(-1760235357);
			func_361(0, 10);
			break;
		case 1997759228:
			func_1055(1764383959);
			func_1056(-138366827);
			func_1057(-138366827);
			func_361(0, 10);
			break;
		case 1265573293:
			func_1055(317501533);
			func_1056(-1261163843);
			func_1057(-1261163843);
			func_361(0, 10);
			break;
		case -1030441283:
			func_1055(817753087);
			func_1056(-963523016);
			func_1057(-963523016);
			func_361(0, 10);
			break;
		case -1490884871:
			func_1055(576606016);
			func_1056(560825326);
			func_1057(560825326);
			func_361(0, 10);
			break;
		case -395458616:
			func_1055(814934957);
			func_1056(858269539);
			func_1057(858269539);
			break;
	}
}

void func_600(int iParam0, int iParam1)
{
	func_1058(iParam0, iParam1, &uVar0);
}

int func_601(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_660(iParam1, 1, 0) };
		iParam3 = func_661(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1059(iParam1, iParam2, func_648(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1060(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_648(iParam3, 1)])
			{
				func_659(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1061(32768) && iParam1 != &Global_1946804->f_57[func_648(iParam3, 1)])
			{
				func_1062();
				func_659(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_659(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1063(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_659(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1064(0);
			func_1065(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_659(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_602(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1024(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1024(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1066("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1067(&Var3, iVar2, iVar0, iVar1))
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
						func_1068(iVar0);
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

void func_603()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_604()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_605()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_606()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_607()
{
	func_1069();
	func_1070();
	func_1071();
}

void func_608(int iParam0, int iParam1, bool bParam2)
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

void func_609(int iParam0, bool bParam1)
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
	func_1008(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_610(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_611(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_612(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_613(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_614(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_615(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_616(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_617(int iParam0, int iParam1, bool bParam2)
{
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1072(iParam0, 1024))
	{
		return;
	}
	func_657(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_655(iParam0, &iVar0, &iVar1);
	if (!func_656(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1072(iParam0, 1024))
	{
		return;
	}
	func_657(iVar0, iVar1);
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

int func_619()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_996())
	{
		return func_620();
	}
	iVar4 = (func_996() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_996())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1073(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_997(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_620()
{
	iVar0 = get_random_int_in_range(0, func_996());
	return func_997(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_621(int iParam0)
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

bool func_622(int iParam0, int iParam1, int iParam2)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_660(iParam0, 0, 1) };
	Var5 = { func_1018(iParam0, Var0, Var0.f_4, 0) };
	return func_1074(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_623(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_573(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1075(81053684, 0) <= 0)
			{
				func_659(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_659(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1076(iParam0);
			if (func_1077(iVar0))
			{
				func_1078(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_659(30, iParam0, 0, 0, 0);
			}
			if (func_650() == -2125499975 || func_650() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_659(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_650() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_659(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1079(-525676072, 0))
			{
				if (func_1080(-525676072, &iVar1))
				{
					func_659(33, iVar1, 0, 0, 0);
				}
			}
			func_659(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1081(99217379))
		{
			func_601(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_572(24);
		if (func_602(&iVar2, 0))
		{
			func_578(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_624(int iParam0)
{
	if (func_569(iParam0, 943695443))
	{
		func_1082(0, iParam0);
	}
	else if (func_569(iParam0, -2096528786))
	{
		func_1082(1, iParam0);
	}
	else if (func_569(iParam0, -1094167013))
	{
		func_1082(2, iParam0);
	}
	else if (func_569(iParam0, 1936654645))
	{
		func_1082(3, iParam0);
	}
	else if (func_569(iParam0, 1306489306))
	{
		func_1082(4, iParam0);
	}
	else if (func_569(iParam0, 435762317))
	{
		func_1082(5, iParam0);
	}
	else if (func_569(iParam0, 1259363210))
	{
		func_1082(6, iParam0);
	}
	else if (func_569(iParam0, 881398259))
	{
		func_1082(7, iParam0);
	}
	else if (func_569(iParam0, -541549214))
	{
		func_1082(8, iParam0);
	}
	else if (func_569(iParam0, 130796156))
	{
		func_1082(-1, iParam0);
	}
}

int func_625(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1083(&Var4, 1356624740);
	return func_1084(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_626(int iParam0)
{
	if (!func_549(iParam0, 0))
	{
		return Var0;
	}
	if (func_569(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_569(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_569(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_569(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_627(int iParam0)
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

void func_628(int iParam0, char* sParam1)
{
	sVar0 = func_1086(func_1085(0));
	func_679(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1087(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_629(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_549(iParam0, 0))
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
	if (!func_1088())
	{
		func_1089(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1090(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1090(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_570(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_568(iParam0);
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
	else if (!func_1091(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1092(_create_var_string(10, &cVar2, _create_var_string(0, func_616(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_569(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_616(iParam0));
	}
	func_679(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_630(int iParam0, int iParam1)
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

struct<10> func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_632(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, int iParam1)
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

bool func_634(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1093(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1093(iParam0, Var2, 1))
				{
					if (func_1094(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1094(iParam0, iParam1))
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
		if (!func_191(0, 0, 1))
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

int func_635(int iParam0)
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

void func_636(int iParam0)
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

void func_637()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1095(0);
			_unlock_set_unlocked(-121456797, false);
			func_1096();
		}
		return;
	}
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1097();
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
	func_1095(1);
}

void func_638()
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

void func_639()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1098(0);
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
	func_1098(1);
}

void func_640()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1099(15000, 0, 0, 0, 1);
			func_1098(0);
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
	func_277(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1098(1);
}

void func_641()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_341(1191437462, 1, 0) && !func_185((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1100(1))
			{
				func_613(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_341(1119149048, 1, 0) && !func_185((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1100(2))
			{
				func_613(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1100(4))
		{
			func_613(4);
		}
		if (func_1100(0))
		{
			func_1101(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_341(1191437462, 1, 0))
			{
				func_644(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_341(1119149048, 1, 0))
			{
				func_644(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1100(1))
		{
			func_1101(1);
		}
		if (func_1100(2))
		{
			func_1101(2);
		}
		if (func_1100(4))
		{
			func_1101(4);
		}
		if (!func_1100(0))
		{
			func_613(0);
		}
	}
}

void func_642()
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
	Var1 = { func_1102() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_576(127400949);
		if (func_578(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1102() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1103(-2055673461, Var1, 1423542233);
		func_1103(-202131179, Var1, -1264898804);
		func_1103(2013836545, Var1, 1592019450);
		func_1103(1497476650, Var1, 1117400455);
		func_1103(1063571467, Var1, 1150213537);
		func_1103(2107224237, Var1, 1598825281);
		func_1103(1747981656, Var1, -712527121);
		func_1103(-1371140647, Var1, 454332195);
		func_1103(-19142973, Var1, 256105670);
		func_1103(-2074737817, Var1, -1328061889);
		func_1103(-1114256243, Var1, -782241404);
		func_1103(-1653277288, Var1, 1669853467);
		func_1103(1869398132, Var1, -1559225678);
		func_1103(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_663(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_571(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_571(24) && func_663(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_663(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_571(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_643()
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

int func_644(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_994(iParam0, 1);
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
			func_629(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_341(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_626(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_553(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_553(iParam0, 0, 0) - iParam1) < 0)
		{
			func_644(iParam0, func_553(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_568(iParam0) == -427144552)
	{
		if (!func_1104(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1105(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_629(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1106(iParam0, iParam1);
	return 1;
}

bool func_645(int iParam0)
{
	switch (func_573(iParam0))
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

void func_646(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_573(iParam0))
	{
		case -2061583405:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1107(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1108();
	}
	if (bParam1)
	{
		func_1109(0, 0);
	}
}

int func_647(int iParam0)
{
	Var0 = { func_660(iParam0, 1, 0) };
	return func_661(Var0.f_4);
}

int func_648(int iParam0, int iParam1)
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

void func_649(int iParam0)
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
		iVar0 = func_648(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1110(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_650()
{
	return Global_1946804->f_1;
}

bool func_651(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1111(iParam6);
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
		func_1113(uParam0, func_1112(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_648(iVar3, 1);
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
							if (func_1114(iVar3) && func_1115(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1116(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_652(int iParam0, int iParam1)
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

int func_653(int iParam0, int iParam1)
{
	vVar0 = { func_652(iParam0, iParam1) };
	return vVar0.x;
}

void func_654(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_656(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1117(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1118(iParam0))
	{
		return false;
	}
	if (func_1119(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1072(iParam0, 1)) || func_82(32768))
	{
		if (!func_1072(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1120())
	{
		return false;
	}
	return true;
}

void func_657(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_658(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_659(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1121(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1122(Var0);
}

struct<5> func_660(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1123(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_568(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1018(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1124(bParam1) };
			if (bParam2 && func_1125(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1016(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1016(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1017(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1126(bParam1) };
			switch (func_573(iParam0))
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
			if (func_1127(iParam0, -1823706425))
			{
				Var0 = { func_1018(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1127(iParam0, -1483207246))
			{
				Var0 = { func_1018(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1128(Var0, &Var27, bParam1, 0))
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

int func_661(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1129(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_662(int iParam0)
{
	func_1110(Global_1946804->f_1497.f_1[func_648(iParam0, 1)], 2, 6);
	func_1110(Global_1946804->f_1378.f_1[func_648(iParam0, 1)], 2, 6);
}

bool func_663(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_664(int iParam0)
{
	return iParam0 != 0;
}

int func_665(int iParam0)
{
	iVar0 = -1;
	if (!func_664(iParam0))
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

bool func_666(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_667(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1130(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_668(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_669(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_670(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_671(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_672(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_673(int iParam0, int iParam1)
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

void func_674(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1131(iParam0, iParam6);
	func_1132(iParam0, iParam5);
	func_1133(iParam0, iParam4);
	func_1134(iParam0, iParam3);
	func_1135(iParam0, iParam2);
	func_1136(iParam0, iParam1);
}

bool func_675(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_672(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_671(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_670(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_667(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_668(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_669(iParam0);
	if (iVar5 < 1 || iVar5 > func_673(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_676(int iParam0, bool bParam1)
{
	return func_971(func_279(), iParam0, bParam1);
}

void func_677(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_678(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_994(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1066("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1067(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_663(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1068(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1068(iVar1);
	}
	return false;
}

var func_679(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1137(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_680()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_429(iVar1);
		if (!_unlock_is_visible(func_1138(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_681()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_429(iVar0);
		if (!_unlock_is_visible(func_1138(iVar1)))
		{
			_unlock_set_visible(func_1138(iVar1), true);
		}
		iVar0++;
	}
}

bool func_682(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_683(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_486(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_684()
{
	return (func_192(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_685(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_549(iVar0, 0))
	{
		return 0;
	}
	if (!func_1139(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1140(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_569(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_660(iVar0, 0, 1) };
	iVar10 = func_1141(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1142(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1143(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_312(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1099(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_686(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_687(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_688(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_689(bool bParam0, bool bParam1)
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

void func_690(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_961())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_961())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_187(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_266(iParam0);
	if (func_189(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_189(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1144(1, iVar1);
					func_1144(8, iVar1);
					func_1144(7, iVar1);
					break;
				case 12:
					func_1144(6, iVar1);
					break;
				case 53:
					func_1144(3, iVar1);
					func_1144(7, iVar1);
					func_1144(4, iVar1);
					break;
				case 20:
					func_1144(8, iVar1);
					break;
				case 19:
					func_1144(1, iVar1);
					func_1144(2, iVar1);
					break;
				case 24:
					func_1144(3, iVar1);
					func_1144(9, iVar1);
					func_1144(20, iVar1);
					break;
				case 28:
					func_1144(1, iVar1);
					break;
				case 34:
					func_1144(23, iVar1);
					func_1144(2, iVar1);
					func_1144(18, iVar1);
					break;
				case 29:
					func_1144(0, iVar1);
					func_1144(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1144(0, iVar1);
					func_1144(3, iVar1);
					func_1144(2, iVar1);
					func_1144(11, iVar1);
					func_1144(6, iVar1);
					func_1144(25, iVar1);
					func_1144(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1144(5, iVar1);
					break;
				case 63:
					func_1144(1, iVar1);
					func_1144(3, iVar1);
					break;
				case 37:
					func_1144(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_357(0, 10, 11, 2116153146))
			{
				func_1144(7, iVar1);
				func_1144(4, iVar1);
			}
			else if (iParam0 == func_357(0, 7, 11, -379687487))
			{
				func_1144(8, iVar1);
				func_1144(15, iVar1);
			}
			else if (iParam0 == func_357(0, 8, 11, -1386089015))
			{
				func_1144(3, iVar1);
			}
			else if (iParam0 == func_357(0, 11, 11, -1952009645))
			{
				func_1144(6, iVar1);
				func_1144(3, iVar1);
			}
			else if (iParam0 == func_357(0, 12, 11, 2065895756))
			{
				func_1144(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1145()));
	if (!func_1146(629))
	{
		func_319(629, 0);
	}
}

int func_691(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_692(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_693(int iParam0, int iParam1, int iParam2)
{
	if (!func_692(iParam0))
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

int func_694()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_695(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_696(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1147(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_694())
	{
		return -1;
	}
	iVar0 = func_695(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_455(iVar1, 0);
	func_528(iVar1, 0);
	func_1148(iVar1, 0);
	func_1149(iVar1, 0);
	func_1150(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1151(iVar1, iParam4);
	}
	return iVar1;
}

int func_697(int iParam0, bool bParam1, int iParam2)
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
			if (func_549(iVar25, 0) && func_569(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_698(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_699(int iParam0)
{
	if (!func_184(iParam0))
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

bool func_700(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_701(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1152(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1153() == 0 && !func_1154(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1155(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1156();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1157(Global_1310720->f_21))
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
			vVar7 = { func_1158(iVar0, iVar1) };
			bVar11 = func_1159(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_392(vVar7)) && func_1160(iVar0, bParam8, iParam12)) && !func_1161(iVar0)) || bVar11)
			{
				if (func_1162(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_702(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1163(vParam0);
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

void func_703()
{
	disable_script_brain_set(1);
}

void func_704()
{
}

void func_705()
{
	disable_script_brain_set(2);
}

bool func_706(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_707(char* sParam0)
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

void func_708(int iParam0)
{
	if (func_706(iParam0, 1))
	{
		func_1164(1);
	}
}

int func_709()
{
	return -1904156936;
}

bool func_710(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	switch (func_189(iParam0))
	{
		case 1:
			iVar0 = func_266(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_266(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_711()
{
	return 166188472;
}

int func_712()
{
	return 2015838421;
}

int func_713()
{
	return 207908017;
}

var func_714(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_715(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_716(var uParam0)
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

int func_717(var uParam0, int iParam1)
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

char* func_718(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1165(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1166(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1167(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_719(var uParam0, char* sParam1)
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

int func_720(var uParam0)
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

void func_721(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_722(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_723()
{
	return Global_1572864->f_8;
}

void func_724(var uParam0, int iParam1)
{
	func_1168(uParam0, iParam1);
	func_1169(uParam0, iParam1, 26);
}

int func_725(var uParam0)
{
	if (func_384(uParam0) == 2)
	{
		func_1170(uParam0, "MultiStart");
		if (!&iLocal_2369[0] == 2)
		{
			if (!func_1171(uParam0))
			{
				return 0;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return 1;
}

int func_726(var uParam0)
{
	func_1172(uParam0, 131072);
	func_864(uParam0);
	set_entity_lod_dist(Local_1700.f_1, 900);
	return 1;
}

int func_727(var uParam0)
{
	func_178(5);
	func_1173(uParam0, 131072);
	use_waypoint_recording_as_assisted_movement_route(func_438(22), 1, 0.75f, 0.5f, 1);
	_0xa46e98bdc407e23d(Local_128.f_25, 0.5f, 0.5f, 2f);
	func_1174(&(Local_128.f_25), 665633627);
	_0x7c00cfc48a782dc0(Local_128.f_25, &(Local_424[5]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
	func_849(21);
	func_1175(1, 0);
	func_177(0);
	func_1174(&(Local_128.f_38), -1612834106);
	Var0 = { func_470(7, 0) };
	get_water_height(Var0, &(Var0.f_2));
	_set_entity_coords_and_heading(Local_1700.f_1, Var0, Var0.f_3, true, false, true);
	freeze_entity_position(Local_1700.f_1, false);
	set_entity_collision(Local_1700.f_1, true, false);
	set_entity_visible(Local_1700.f_1, true);
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	Var4 = { func_1176(9) };
	iLocal_1233[9] = _create_weapon_object(1999408598, 1, Var4, true, 1f);
	set_entity_rotation(&(iLocal_1233[9]), Var4.f_3, 2, true);
	set_entity_collision(&(iLocal_1233[9]), false, false);
	freeze_entity_position(&(iLocal_1233[9]), true);
	return 1;
}

int func_728(var uParam0)
{
	func_1177(uParam0);
	func_1178(uParam0);
	func_1179();
	if (func_1180(15, 46))
	{
		if (func_164(21))
		{
			if (func_1181(Global_35, _0xf70f00013a62f866(Local_128.f_4), 1) >= 25f)
			{
				func_1182(uParam0, 0);
				func_178(21);
			}
		}
		else if (func_1181(Global_35, _0xf70f00013a62f866(Local_128.f_4), 1) >= 40f)
		{
			Local_1465[0]->f_5 = 4;
		}
		else if (func_1181(Global_35, _0xf70f00013a62f866(Local_128.f_4), 1) < 15f)
		{
			func_1182(uParam0, 1);
			func_849(21);
		}
	}
	switch (func_1183(uParam0))
	{
		case 0:
			_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
			if (_0x005e6f28dd7ed58d(&(Local_2328[0]), "ARTHUR"))
			{
				func_1184(19);
				func_1182(uParam0, 1);
				func_1185(0);
				simulate_player_input_gait(player_id(), 1f, 1000, 0f, true, true);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			func_856(uParam0, 7, 8, 3);
			func_853(1);
			if (!func_164(17))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_37, true, 0))
				{
					if (!is_entity_dead(&(Local_424[7])))
					{
						vVar0 = { func_217(7, 1, 0) };
						task_fly_to_coord(&(Local_424[7]), 2f, vVar0, 1, 0);
					}
					if (!is_entity_dead(&(Local_424[8])))
					{
						vVar0 = { func_217(8, 1, 0) };
						task_fly_to_coord(&(Local_424[8]), 2f, vVar0, 1, 0);
					}
					func_135(uParam0, 1);
					func_27(vLocal_1569[4], 0);
					func_1175(0, 0);
					func_1186();
					Local_1700 = 2;
					set_gameplay_coord_hint(595.5224f, -7030.593f, 42.7124f, 2000, 2000, 2000, 0);
					func_849(17);
				}
				else if (!func_26(vLocal_1569[0]))
				{
					if (_0x8d81e7824b7753f7(&(Local_2328[0]), "s_loop", 1))
					{
						func_1187(vLocal_1569[0], 10f, 0);
					}
				}
				else if (func_845(vLocal_1569[0]) >= 10f)
				{
					if ((iVar2110 == 0 && !func_1188(1)) && !func_1189(1))
					{
						func_1184(21);
						func_214(vLocal_1569[0]);
					}
				}
			}
			else if (!func_164(19))
			{
				func_1184(22);
				func_849(19);
			}
			else if (!func_164(20))
			{
				if ((!func_1191(func_1190(22)) && !func_1192(func_1190(22))) && !iVar2110 == 22)
				{
					func_27(vLocal_1569[0], 1);
					func_849(20);
				}
			}
			else if (func_845(vLocal_1569[0]) >= 10f)
			{
				if (!is_entity_in_volume(Global_35, Local_128.f_58, true, 0))
				{
					if (iVar2110 == 0)
					{
						func_1184(23);
					}
					func_214(vLocal_1569[0]);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_2328[0]), "s_loop", 1))
			{
				if (!func_164(18))
				{
					if (is_entity_in_volume(Global_35, Local_128, true, 0))
					{
						func_849(18);
					}
				}
				else if (!func_1188(1) && !func_1189(1))
				{
					func_910(uParam0, 7, 0);
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			func_910(uParam0, 8, 0);
			return 1;
	}
	return 0;
}

int func_729(var uParam0)
{
	_0x19c975b81be53c28(Local_128.f_25, &(Local_424[5]));
	_delete_volume(Local_128.f_25);
	func_1193(0);
	use_waypoint_recording_as_assisted_movement_route(func_438(22), 0, 0.75f, 0.5f, 1);
	func_436(22);
	set_object_as_no_longer_needed(iLocal_1233[4]);
	set_object_as_no_longer_needed(iLocal_1233[5]);
	set_object_as_no_longer_needed(iLocal_1233[6]);
	set_object_as_no_longer_needed(iLocal_1233[7]);
	set_object_as_no_longer_needed(iLocal_1233[8]);
	return 1;
}

void func_730(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1194(uParam0, iParam1);
	func_1169(uParam0, iParam1, iParam2);
	func_1195(uParam0, &iParam3, iParam1, 0);
	func_1195(uParam0, &iParam4, iParam1, 2);
	func_1195(uParam0, &iParam5, iParam1, 4);
	func_1195(uParam0, &iParam6, iParam1, 5);
	func_1195(uParam0, &iParam7, iParam1, 7);
	func_880(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1196(uParam0, iParam1, cVar0);
	func_1197(uParam0, iParam1, iParam10);
}

int func_731(var uParam0)
{
	func_853(1);
	if (!Local_2328[1]->f_1 == 8)
	{
		return 0;
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	_set_entity_coords_and_heading(&(Local_424[2]), 987.566f, -6749.43f, 63.1221f, 141.687f, true, false, true);
	_0x9587913b9e772d29(&(Local_424[2]), 0);
	_set_entity_coords_and_heading(&(Local_424[4]), 988.453f, -6750.72f, 63.1241f, 115.21f, true, false, true);
	_0x9587913b9e772d29(&(Local_424[4]), 0);
	_set_entity_coords_and_heading(&(Local_424[5]), 988.813f, -6751.99f, 63.1265f, 66.097f, true, false, true);
	_0x9587913b9e772d29(&(Local_424[5]), 0);
	_set_entity_coords_and_heading(&(Local_424[3]), 987.14f, -6748.61f, 63.128f, 114.45f, true, false, true);
	_0x9587913b9e772d29(&(Local_424[3]), 0);
	_set_entity_coords_and_heading(&(Local_424[6]), 986.525f, -6747.68f, 63.1429f, 172.6f, true, false, true);
	_0x9587913b9e772d29(&(Local_424[6]), 0);
	func_177(0);
	Local_1700 = 2;
	func_1174(&(Local_128.f_38), -1612834106);
	func_1186();
	Var0 = { func_1176(9) };
	iLocal_1233[9] = _create_weapon_object(1999408598, 1, Var0, true, 1f);
	set_entity_rotation(&(iLocal_1233[9]), Var0.f_3, 2, true);
	set_entity_collision(&(iLocal_1233[9]), false, false);
	freeze_entity_position(&(iLocal_1233[9]), true);
	return 1;
}

int func_732(var uParam0)
{
	func_1198(34);
	func_1198(36);
	func_1198(37);
	func_1198(38);
	func_1198(39);
	if (Local_2328[1]->f_1 == 8)
	{
		func_1199(1, 1);
		if (func_384(uParam0) == 0)
		{
			func_443(0);
		}
	}
	else
	{
		return 0;
	}
	func_1200(942.4749f, -6787.859f, 52.3272f, 26f);
	return 1;
}

int func_733(var uParam0)
{
	func_178(5);
	func_1201(&(uParam0->f_7375), "MultiStart", 0);
	func_1202(&(uParam0->f_7375), "MultiStart");
	func_1203(2, 6, 1);
	func_1204(0);
	func_1204(1);
	func_1204(2);
	func_1204(5);
	func_1174(&(Local_128.f_19), -1612834106);
	func_1174(&(Local_128.f_95), -1612834106);
	func_1200(1010.4f, -6758.4f, 68.1f, 18f);
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[1] = 1;
	vLocal_2104.f_2.f_1 = 0.2f;
	vLocal_2104.f_2.f_2 = 0.2f;
	task_look_at_entity(Global_35, &(Local_424[2]), floor((_get_anim_scene_duration(&(Local_2328[1])) * 1000f)), 48, 51, 1);
	func_135(uParam0, 2);
	return 1;
}

int func_734(var uParam0)
{
	if (func_164(10))
	{
		func_469(1);
		func_1205();
	}
	func_1206();
	func_1177(uParam0);
	func_1207(uParam0);
	func_1178(uParam0);
	func_1208();
	func_1209();
	func_1210();
	func_1211();
	func_1212(uParam0);
	if (vLocal_2104.z == 1)
	{
		func_1213(uParam0, 2);
	}
	else
	{
		func_1213(uParam0, 3);
	}
	if (func_164(38))
	{
		func_1214();
	}
	if (func_1180(30, 46))
	{
		if (func_1181(Global_35, _0xf70f00013a62f866(Local_128.f_4), 1) >= 40f)
		{
			Local_1465[0]->f_5 = 4;
		}
	}
	func_853(1);
	func_853(2);
	if (func_26(vLocal_1569[9]))
	{
		if (is_ped_shooting(Global_35))
		{
			func_214(vLocal_1569[9]);
		}
		if (func_845(vLocal_1569[9]) >= 15f)
		{
			if ((iVar2110 == 0 && !func_1215()) && !func_1216())
			{
				func_1184(func_1218(func_1217(), 25, 26));
				func_214(vLocal_1569[9]);
			}
		}
	}
	switch (func_1183(uParam0))
	{
		case 0:
			if (_0x8d81e7824b7753f7(&(Local_2328[1]), "s_action_p2", 1))
			{
				if (does_entity_exist(&(iLocal_1233[9])))
				{
					delete_object(iLocal_1233[9]);
				}
				func_1182(uParam0, 2);
				_delete_volume(Local_128.f_38);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (!func_856(uParam0, 13, 18, 9))
			{
				func_27(vLocal_1569[12], 1);
				return 0;
			}
			else
			{
				func_135(uParam0, 3);
				func_27(vLocal_1569[9], 0);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			func_1219(uParam0, 0, 1114636288);
			if (func_1220(13, 18, 18) <= 2)
			{
				func_1219(uParam0, 1, 30f);
				func_134(uParam0, 3);
			}
			break;
		case 3:
			if (func_856(uParam0, 19, 24, 9))
			{
				func_135(uParam0, 4);
				func_1221(5, 8);
				func_1221(4, 8);
				func_27(vLocal_1569[12], 1);
				func_1184(30);
				func_134(uParam0, 4);
			}
			break;
		case 4:
			func_1219(uParam0, 0, 1114636288);
			if (func_26(vLocal_1569[12]))
			{
				if (func_845(vLocal_1569[12]) >= 20f)
				{
					iVar0 = 19;
					while (iVar0 <= 24)
					{
						if (Local_424[iVar0]->f_2 == 9)
						{
							func_1221(iVar0, 10);
						}
						iVar0++;
					}
					func_1184(31);
					func_524(vLocal_1569[12]);
				}
			}
			if (func_1220(13, 24, 18) <= 2)
			{
				if (func_856(uParam0, 25, 26, 1))
				{
					func_135(uParam0, 5);
					func_1219(uParam0, 1, 1114636288);
					func_849(37);
					func_524(vLocal_1569[9]);
					func_524(vLocal_1569[12]);
					func_524(vLocal_1569[0]);
					func_134(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_1220(13, 26, 18) <= 2)
			{
				func_27(vLocal_1569[0], 0);
				if (!func_164(27))
				{
					_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Hercule_Callover", true);
					func_849(27);
				}
				if (func_845(vLocal_1569[0]) >= 2.5f)
				{
					func_1222(3, iVar2101);
					func_1182(uParam0, 3);
					func_1223(2);
					func_134(uParam0, 6);
				}
			}
			break;
		case 6:
			if (vLocal_2104.z == 8)
			{
				func_134(uParam0, 7);
			}
			break;
		case 7:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			Var1.f_6 = 1108082688;
			Var1.f_14 = 1108082688;
			Var1 = { func_1224(1) };
			if (!&iLocal_2369[1] == 2)
			{
				func_1225(uParam0);
			}
			else if (func_845(vLocal_1569[0]) >= (Var1.f_7 + 1f) && !func_1192(func_1190(36)))
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			return 1;
	}
	return 0;
}

int func_735(var uParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_436(40);
	func_436(41);
	func_436(42);
	func_436(43);
	set_ped_combat_attributes(&(Local_424[2]), 30, false);
	set_ped_combat_attributes(&(Local_424[4]), 54, true);
	if (has_ped_got_weapon(&(Local_424[4]), &(iLocal_1452[2]), 0, false))
	{
		remove_weapon_from_ped(&(Local_424[4]), &(iLocal_1452[2]), true, -142743235);
	}
	func_436(32);
	if (!&iLocal_2369[1] == 2)
	{
		if (!func_1225(uParam0))
		{
			return 0;
		}
	}
	clear_bit(&(Global_1956580->f_1), 4);
	func_171(0, 5);
	_0x2c87c3e1c7b96ee2(Local_128.f_34);
	_delete_volume(Local_128.f_34);
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1226(uParam0->f_7375.f_13[iVar0], 8);
		iVar0++;
	}
	func_1227(2, 6, 0);
	func_1227(3, 3, 1);
	_0x9851de7aec10b4e1(func_472(4, 0), 200f, 0, 0);
	func_443(2);
	func_177(1);
	func_178(10);
	_0x6a564540fac12211(func_916(0), -1016714371);
	_delete_volume(Local_128.f_65);
	_delete_volume(Local_128.f_67);
	_delete_volume(Local_128.f_69);
	_delete_volume(Local_128.f_66);
	_delete_volume(Local_128.f_68);
	_delete_volume(Local_128.f_70);
	_delete_volume(Local_128.f_71);
	_delete_volume(Local_128.f_73);
	_delete_volume(Local_128.f_75);
	_delete_volume(Local_128.f_72);
	_delete_volume(Local_128.f_74);
	_delete_volume(Local_128.f_76);
	func_1228(Local_128.f_25);
	func_524(vLocal_1569[15]);
	freeze_entity_position(&(Local_1523[0]), false);
	freeze_entity_position(&(Local_1523[1]), false);
	return 1;
}

int func_736(var uParam0)
{
	if (!func_856(uParam0, 27, 41, 121))
	{
		return 0;
	}
	func_1229(uParam0, "NormalStart");
	func_1170(uParam0, "NormalStart");
	if (func_384(uParam0) == 2)
	{
		func_374(uParam0, 8388608);
		if (!&iLocal_2369[1] == 2)
		{
			if (!func_1225(uParam0))
			{
				return 0;
			}
		}
	}
	Local_1700 = 2;
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	func_847(0, 0);
	return 1;
}

int func_737(var uParam0)
{
	func_1198(24);
	func_1198(44);
	func_1198(24);
	func_1198(14);
	func_1230(1);
	set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), false, 0, false, false);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1231(uParam0, &(Local_424[5]), 128);
	func_1231(uParam0, &(Local_424[4]), 128);
	func_1232(uParam0, &(Local_424[5]), 0);
	func_1232(uParam0, &(Local_424[4]), 0);
	func_1232(uParam0, &(Local_424[6]), 0);
	return 1;
}

int func_738(var uParam0)
{
	bVar0 = true;
	if (!func_1233(24) || !func_1233(func_1234(10)))
	{
		bVar0 = false;
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_178(5);
	use_waypoint_recording_as_assisted_movement_route(func_438(24), 1, 0.75f, 0.5f, 1);
	func_385(1, 1);
	func_1235();
	func_858(10, 8);
	_0xebdc12861d079aba(&(iLocal_1233[10]), 1);
	set_entity_invincible(&(iLocal_1233[10]), true);
	set_entity_collision(&(iLocal_1233[10]), false, false);
	freeze_entity_position(&(iLocal_1233[10]), true);
	func_858(11, 8);
	_0xebdc12861d079aba(&(iLocal_1233[11]), 1);
	set_entity_invincible(&(iLocal_1233[11]), true);
	func_1227(27, 41, 1);
	func_1221(4, 1);
	func_1221(5, 1);
	func_1221(6, 1);
	func_1203(27, 41, 1);
	func_1204(6);
	func_1204(7);
	func_1236(3);
	func_166(1);
	func_1227(2, 6, 1);
	if (does_entity_exist(&(iLocal_1233[12])))
	{
		delete_object(iLocal_1233[12]);
	}
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[1] = 1;
	func_27(vLocal_1569[3], 1);
	set_current_ped_weapon(&(Local_424[2]), &(iLocal_1452[5]), true, 0, false, false);
	set_current_ped_weapon(&(Local_424[2]), &(iLocal_1452[6]), true, 1, false, false);
	func_135(uParam0, 8);
	func_176(func_33(uParam0));
	func_1174(&(Local_128.f_93), -1612834106);
	_0x94b261f1f35293e1(0);
	return 1;
}

int func_739(var uParam0)
{
	func_1177(uParam0);
	func_1178(uParam0);
	func_1237(uParam0);
	if (func_26(vLocal_1569[18]))
	{
		if (func_845(vLocal_1569[18]) >= 1.5f)
		{
			func_47(0, 0);
			iLocal_2113 = 0;
			func_1184(54);
			func_524(vLocal_1569[18]);
		}
	}
	if (Local_2328[4]->f_1 < 9)
	{
		if (is_entity_in_volume(Global_35, Local_128.f_4, true, 0))
		{
			if (func_845(vLocal_1569[3]) >= 15f)
			{
				if (!_0x8d81e7824b7753f7(&(Local_2328[3]), "s_Get_This_Working_Properly_RIGHT", 1) && !_0x8d81e7824b7753f7(&(Local_2328[3]), "s_Get_This_Working_Properly_LEFT", 1))
				{
					func_1184(46);
					task_look_at_entity(&(Local_424[5]), Global_35, 3000, 48, 51, 0);
					func_214(vLocal_1569[3]);
				}
			}
		}
	}
	if (!func_164(55))
	{
		if (has_ped_got_weapon(Global_35, &(iLocal_1452[9]), 0, true))
		{
			if (does_blip_exist(&(iLocal_1448[1])))
			{
				remove_blip(iLocal_1448[1]);
			}
			func_849(55);
		}
		if (func_164(54))
		{
			func_849(55);
		}
	}
	func_1238(uParam0);
	func_1239();
	func_1240();
	func_1241(uParam0);
	func_1242(uParam0);
	if (func_164(52))
	{
		if (iVar2374 == 0)
		{
			iLocal_2377 = 1;
		}
		else if (!iVar2374 == 5)
		{
			func_1243(uParam0);
		}
	}
	switch (func_1183(uParam0))
	{
		case 0:
			func_1222(4, &(Local_424[3]));
			func_1182(uParam0, 4);
			if (func_164(15))
			{
				Local_1265[4]->f_1 = 4;
			}
			iVar0 = 27;
			while (iVar0 <= 41)
			{
				func_1244(iVar0, 0);
				iVar0++;
			}
			func_27(vLocal_1569[0], 1);
			func_134(uParam0, 1);
			break;
		case 1:
			if (!func_164(46))
			{
				if (func_845(vLocal_1569[0]) >= 1f)
				{
					func_1247(0, func_1245(6, 1), func_1246(6, 1));
					func_849(46);
				}
			}
			if (!func_164(47))
			{
				if (func_845(vLocal_1569[0]) >= 1.5f)
				{
					func_1247(0, func_1245(6, 2), func_1246(6, 2));
					func_849(47);
					func_524(vLocal_1569[0]);
					func_1248(917663984, 0, 1f, 1, 0, 0f, 1, 0);
					func_1248(600328988, 0, -1f, 1, 0, 0f, 1, 0);
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_164(54))
			{
				func_1249();
				if (is_entity_in_volume(Global_35, Local_128.f_3, true, 0))
				{
					use_waypoint_recording_as_assisted_movement_route(func_438(24), 0, 1f, 0.5f, 1);
					func_436(24);
					func_1250(4);
					func_849(54);
					func_134(uParam0, 3);
				}
			}
			break;
		case 3:
			func_1219(uParam0, 0, 30f);
			func_1249();
			if (func_164(53))
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			func_1219(uParam0, 1, 1114636288);
			return 1;
	}
	return 0;
}

int func_740(var uParam0)
{
	func_1251(10, 0);
	func_1251(11, 0);
	func_171(6, 7);
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0]->f_2 == 18)
		{
			if (func_835(Global_35, &(Local_424[iVar0]), 1, 1) >= 20f)
			{
				if (!is_sphere_visible(get_entity_coords(&(Local_424[iVar0]), true, false), 1f))
				{
					func_910(uParam0, iVar0, 0);
				}
			}
		}
		iVar0++;
	}
	func_436(25);
	return 1;
}

int func_741(var uParam0)
{
	bVar0 = true;
	func_1198(14);
	_0x140b3cb1d424a945(&(Local_424[3]), 1999408598);
	if (!func_856(uParam0, 42, 56, 81))
	{
		bVar0 = false;
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!func_1233(14))
	{
		bVar0 = false;
	}
	if (!_0x8cbe916cfc64ad5c(&(Local_424[3])))
	{
		bVar0 = false;
	}
	if (_0x290b2e6ccde532e1(&(Local_424[2])) && !_0x0eef7a81c17679db(&(Local_424[2])))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1252(uParam0, 6, 0);
	func_1253(1, 1, 0);
	set_gameplay_cam_relative_pitch(-20f, 1f);
	Local_1700 = 2;
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	if (func_384(uParam0) == 2)
	{
		if (func_122(1999408598))
		{
			func_1254(Global_35, 1999408598, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else if (func_122(1676963302))
		{
			func_1254(Global_35, 1676963302, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
	}
	func_1204(8);
	func_1204(9);
	_set_entity_coords_and_heading(&(Local_424[2]), func_472(3, 1), func_1255(3, 1), true, false, true);
	_0x9587913b9e772d29(&(Local_424[2]), 0);
	_0x2208438012482a1a(&(Local_424[2]), false, false);
	Var1 = { func_1256(9) };
	func_836(&(Local_424[3]), Var1, Var1.f_3, 2, 1073741824);
	task_put_ped_directly_into_cover(&(Local_424[3]), Var1, -1, 0, 0f, Var1.f_8, Var1.f_9, &(iLocal_230[9]), 0, 1, 0);
	_0x2208438012482a1a(&(Local_424[3]), false, false);
	func_1257(0, 1);
	func_1174(&(Local_128.f_93), -1612834106);
	return 1;
}

int func_742(var uParam0)
{
	func_1198(26);
	func_1198(14);
	func_853(6);
	Var4.f_6 = -1;
	iVar1 = 3;
	while (iVar1 <= 8)
	{
		if (!does_entity_exist(&(Local_1523[iVar1])))
		{
			if (func_164(0))
			{
				return 0;
			}
			if (iVar1 == 3)
			{
				iVar0 = 3;
				Local_1523[iVar1]->f_2 = 42;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 19;
				iVar3 = 20;
			}
			else if (iVar1 == 4)
			{
				iVar0 = 4;
				Local_1523[iVar1]->f_2 = 45;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 21;
				iVar3 = 22;
			}
			else if (iVar1 == 5)
			{
				iVar0 = 5;
				Local_1523[iVar1]->f_2 = 48;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 23;
				iVar3 = 24;
			}
			else if (iVar1 == 6)
			{
				iVar0 = 6;
				Local_1523[iVar1]->f_2 = 51;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 25;
				iVar3 = 26;
			}
			else if (iVar1 == 7)
			{
				iVar0 = 7;
				Local_1523[iVar1]->f_2 = 54;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 27;
				iVar3 = 28;
			}
			else if (iVar1 == 8)
			{
				iVar0 = 8;
				Local_1523[iVar1]->f_2 = 57;
				Local_1523[iVar1]->f_3 = Local_1523[iVar1]->f_2;
				iVar2 = 29;
				iVar3 = 30;
			}
			Local_1523[iVar1] = create_vehicle(func_437(10), func_472(9, iVar0), func_1255(9, iVar0), true, true, false, false);
			_0x7a49d40de437bc8d(&(Local_1523[iVar1]), 0);
			set_vehicle_is_considered_by_player(&(Local_1523[iVar1]), false);
			set_entity_invincible(&(Local_1523[iVar1]), true);
			set_boat_anchor(&(Local_1523[iVar1]), false);
			freeze_entity_position(&(Local_1523[iVar1]), false);
			func_858(iVar2, 2);
			Var4 = { func_1176(iVar2) };
			attach_entity_to_entity(&(iLocal_1233[iVar2]), &(Local_1523[iVar1]), 0, Var4, Var4.f_3, false, false, false, false, 2, true, false, false);
			_0xebdc12861d079aba(&(iLocal_1233[iVar2]), 1);
			_set_lights_intensity_for_entity(&(iLocal_1233[iVar2]), 30000f);
			func_858(iVar3, 2);
			Var4 = { func_1176(iVar3) };
			attach_entity_to_entity(&(iLocal_1233[iVar3]), &(Local_1523[iVar1]), 0, Var4, Var4.f_3, false, false, false, false, 2, true, false, false);
			_0xebdc12861d079aba(&(iLocal_1233[iVar3]), 1);
			_set_lights_intensity_for_entity(&(iLocal_1233[iVar3]), 30000f);
			func_849(0);
		}
		iVar1++;
	}
	bVar11 = true;
	if (!func_856(uParam0, 42, 56, 65))
	{
		bVar11 = false;
	}
	if (!func_856(uParam0, 57, 59, 1))
	{
		bVar11 = false;
	}
	if (!func_1233(14))
	{
		bVar11 = false;
	}
	if (!bVar11)
	{
		return 0;
	}
	func_1203(2, 6, 1);
	iVar12 = 27;
	while (iVar12 <= 41)
	{
		if (!Local_424[iVar12]->f_2 == 0)
		{
			func_1221(iVar12, 1);
		}
		iVar12++;
	}
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[2] = 1;
	func_1232(uParam0, &(Local_424[5]), 0);
	func_1232(uParam0, &(Local_424[4]), 0);
	return 1;
}

int func_743(var uParam0)
{
	func_853(6);
	func_178(5);
	func_849(81);
	_0xa769d753922b031b(&(Local_424[2]), 999f, 999f);
	_0xa769d753922b031b(&(Local_424[3]), 999f, 999f);
	func_149(uParam0, 80f);
	func_150(uParam0, 100f);
	if (!func_8(uParam0, 8))
	{
		_0x1a7a802b2301edc0(&(Local_424[3]));
	}
	func_1187(vLocal_1569[22], 999.9f, 0);
	return 1;
}

int func_744(var uParam0)
{
	func_1258(uParam0);
	func_1259(uParam0);
	func_1177(uParam0);
	func_1178(uParam0);
	func_1260();
	func_1261(uParam0);
	func_1262();
	func_1241(uParam0);
	func_1263(uParam0);
	func_1264();
	func_853(6);
	if (!func_164(60))
	{
		func_1265(uParam0);
	}
	if (!func_164(88))
	{
		if (func_1180(30, 5))
		{
			if (func_1181(Global_35, vLocal_2163, 1) >= 55f)
			{
				iLocal_2115 = func_1266();
				if (iVar2112 == 10)
				{
					func_1182(uParam0, 9);
				}
				else
				{
					func_1182(uParam0, 7);
				}
				func_849(88);
			}
		}
	}
	else if (func_1180(30, 11))
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		if (func_1181(Global_35, vLocal_2163, 1) <= 45f)
		{
			if (func_1267())
			{
				iLocal_2115 = 10;
			}
			func_1182(uParam0, iVar2112);
			func_178(88);
		}
		else if (get_distance_between_coords(vVar0, vLocal_2163, true) >= 80f || vVar0.z > 63.2f)
		{
			if (iVar2112 == 10)
			{
				func_1268(uParam0, func_1190(17), "", 1, 0);
			}
			else
			{
				Local_1465[1]->f_5 = 4;
			}
		}
	}
	iVar3 = 51;
	iVar4 = 56;
	iVar5 = 42;
	iVar6 = 50;
	switch (func_1183(uParam0))
	{
		case 0:
			if (Local_2328[6]->f_1 == 8)
			{
				if (func_1199(6, 1))
				{
					func_134(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_164(61))
			{
				if ((iVar2110 == 0 && !func_1191(func_1190(84))) && !func_1192(func_1190(84)))
				{
					func_898(func_1190(61), 7500, 1, 1, 0, 0, -1, -1, 0);
					func_178(61);
				}
			}
			if (!func_164(96))
			{
				if (is_entity_in_area(Global_35, 980.528f, -6788.214f, 41.125f, 985.658f, -6783.269f, 44.423f, false, true, 0))
				{
					func_1200(981.6f, -6781.4f, 43.4f, -1082130432);
					func_1200(1015.6f, -6798.7f, 40.8f, -1082130432);
					func_849(96);
				}
			}
			func_1219(uParam0, 0, 60f);
			if (!func_164(89))
			{
				if (func_1180(2, 0))
				{
					if (func_1220(48, 56, 18) == 1)
					{
						iVar7 = 48;
						while (iVar7 <= 56)
						{
							if (!Local_424[iVar7]->f_2 == 18)
							{
								if (!is_entity_dead(&(Local_424[iVar7])))
								{
									set_entity_only_damaged_by_player(&(Local_424[iVar7]), true);
									func_1269(iVar7, 1);
								}
								else
								{
									iVar7++;
								}
								func_849(89);
								if (!func_164(90))
								{
									if (func_1180(2, 1))
									{
										if (func_1220(42, 47, 18) == 1)
										{
											iVar7 = 42;
											while (iVar7 <= 47)
											{
												if (!Local_424[iVar7]->f_2 == 18)
												{
													if (!is_entity_dead(&(Local_424[iVar7])))
													{
														set_entity_only_damaged_by_player(&(Local_424[iVar7]), true);
														func_1269(iVar7, 1);
													}
													else
													{
														iVar7++;
													}
													func_849(90);
													if (!func_164(77))
													{
														if (func_1270())
														{
															func_1184(81);
															func_135(uParam0, 18);
															func_1182(uParam0, 8);
															if (func_1271())
															{
																func_1221(2, 54);
																func_1221(3, 54);
															}
															else
															{
																func_1221(2, 58);
																func_1221(3, 58);
															}
															func_849(77);
														}
													}
													else if (!func_164(78))
													{
														if ((!func_1188(1) && !func_1189(1)) && iVar2110 == 0)
														{
															func_1184(77);
															func_849(78);
														}
													}
													if (!func_164(84))
													{
														if (func_1180(5, 70))
														{
															func_849(84);
															iVar7 = iVar5;
															while (iVar7 <= iVar6)
															{
																if (!Local_424[iVar7]->f_2 == 18)
																{
																	func_178(84);
																}
																else
																{
																	iVar7++;
																}
															}
														}
													}
													if (!func_164(83))
													{
														if (func_1180(5, 81))
														{
															func_849(83);
															iVar7 = iVar3;
															while (iVar7 <= iVar4)
															{
																if (!Local_424[iVar7]->f_2 == 18)
																{
																	func_178(83);
																}
																else
																{
																	iVar7++;
																}
															}
														}
													}
													if (!func_164(62))
													{
														iVar7 = 42;
														while (iVar7 <= 62)
														{
															if (does_entity_exist(&(Local_424[iVar7])) && !is_entity_dead(&(Local_424[iVar7])))
															{
																iVar8++;
															}
															iVar7++;
														}
														if (iVar8 == 1)
														{
															func_1184(82);
															func_849(62);
														}
													}
													if (func_1267())
													{
														if ((iVar2258 == 0 || iVar2258 == 1) || iVar2258 == 2)
														{
															iLocal_2261 = 4;
														}
														func_1221(2, 16);
														func_1221(3, 16);
														if (func_1272(2, 32))
														{
															set_ped_seeing_range(&(Local_424[2]), 60f);
														}
														if (func_1272(3, 32))
														{
															set_ped_seeing_range(&(Local_424[3]), 60f);
														}
														iLocal_2113 = 0;
														if (func_1216())
														{
															func_47(0, 0);
														}
														func_1184(83);
														iLocal_1448[2] = func_1273(408396114, 973.7072f, -6762.934f, 42.8675f, 1);
														func_135(uParam0, 19);
														func_27(vLocal_1569[20], 1);
														func_27(vLocal_1569[23], 0);
														func_1219(uParam0, 1, 1114636288);
														func_134(uParam0, 2);
													}
													Jump @2042; //curOff = 1396
													if (Local_1265[10]->f_1 == 0)
													{
														if ((iVar2110 == 0 && !func_1191(func_1190(83))) && !func_1192(func_1190(83)))
														{
															func_1182(uParam0, 10);
														}
													}
													if (func_26(vLocal_1569[20]))
													{
														if (func_845(vLocal_1569[20]) >= 15f)
														{
															if (!func_164(91))
															{
																func_1184(93);
																func_849(91);
																func_214(vLocal_1569[20]);
															}
															else if (!func_164(92))
															{
																func_1184(94);
																func_849(92);
																func_214(vLocal_1569[20]);
															}
															else if (!func_164(93))
															{
																func_1184(95);
																func_849(93);
																func_524(vLocal_1569[20]);
															}
														}
													}
													if (func_26(vLocal_1569[23]) && get_distance_between_coords(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_128.f_8), true) < (func_1274(Local_128.f_8) * 2f))
													{
														func_1275(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
														func_524(vLocal_1569[23]);
													}
													if (!&iLocal_2369[2] == 2)
													{
														func_1276(uParam0);
													}
													else if (is_entity_in_volume(Global_35, Local_128.f_8, true, 0))
													{
														func_1250(10);
														_0xdd1232b332cbb9e7(3, 1, 0);
														func_1221(2, 12);
														func_1221(3, 12);
														simulate_player_input_gait(player_id(), 2f, 2000, func_1277(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_128.f_8)), false, false);
														if (!is_entity_dead(&(Local_424[2])))
														{
															task_follow_nav_mesh_to_coord(&(Local_424[2]), 969f, -6761.2f, 43.1f, 3f, 20000, 0.25f, 0, 40000f);
														}
														func_27(vLocal_1569[0], 1);
														_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
														func_134(uParam0, 3);
													}
													Jump @2042; //curOff = 1869
													_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
													if (!func_164(97))
													{
														if (func_845(vLocal_1569[0]) >= 0.1f)
														{
															func_1247(-1, 965.8f, -6760.5f, 45.5f, 1.5f);
															func_849(97);
														}
													}
													if (!func_164(98))
													{
														if (func_845(vLocal_1569[0]) >= 0.5f)
														{
															func_1247(-1, 968.6f, -6757.1f, 46f, 1f);
															func_849(98);
														}
													}
													if (func_845(vLocal_1569[0]) >= 0.75f)
													{
														func_134(uParam0, 29);
														return 1;
													}
													Jump @2042; //curOff = 2032
													return 1;
													return 0;
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
			default:
				break;
	}
}

int func_745(var uParam0)
{
	iVar1 = 3;
	while (iVar1 <= 8)
	{
		if (Local_1523[iVar1]->f_4 == 1)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 <= 1)
	{
		func_1278(uParam0, -1361620500);
	}
	func_171(8, 10);
	func_436(26);
	func_436(27);
	func_436(28);
	func_436(29);
	func_436(30);
	func_436(31);
	_delete_volume(Local_128.f_77);
	_delete_volume(Local_128.f_78);
	_delete_volume(Local_128.f_81);
	_delete_volume(Local_128.f_82);
	_delete_volume(Local_128.f_79);
	_delete_volume(Local_128.f_80);
	_delete_volume(Local_128.f_83);
	_delete_volume(Local_128.f_84);
	func_435(uParam0, 42, 62);
	remove_blip(iLocal_1448[2]);
	return 1;
}

int func_746(var uParam0)
{
	bVar0 = true;
	if (func_384(uParam0) == 2)
	{
		if (!&iLocal_2369[2] == 2)
		{
			if (!func_1276(uParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1232(uParam0, &(Local_424[5]), 0);
	func_1232(uParam0, &(Local_424[4]), 0);
	func_1252(uParam0, 6, 0);
	Local_1700 = 0;
	if (func_384(uParam0) == 1)
	{
		iLocal_2287 = 100;
		func_861(uParam0);
		_set_entity_coords_and_heading(&(Local_424[2]), func_472(4, 1), func_1255(4, 1), true, false, true);
		_0x9587913b9e772d29(&(Local_424[2]), 0);
	}
	return 1;
}

int func_747(var uParam0)
{
	Local_1700 = 0;
	_0xe296208c273bd7f0(1000, -1, 0, 17, 1, 0);
	func_1198(32);
	if (!func_1233(32))
	{
		return 0;
	}
	func_166(1);
	func_1203(2, 6, 1);
	func_1198(48);
	func_1198(49);
	func_1198(50);
	func_1198(51);
	_0x67e21acc5c0c970c(&(Local_424[3]), 10, false);
	return 1;
}

int func_748(var uParam0)
{
	func_1221(3, 1);
	func_178(5);
	func_1203(2, 6, 1);
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[1] = 1;
	Local_1700.f_3[2] = 1;
	func_849(112);
	func_1198(57);
	func_1198(56);
	func_1198(55);
	func_135(uParam0, 21);
	func_1228(Local_128.f_25);
	Local_128.f_25 = _create_volume_cylinder(100f, 100f, 100f, 0f, 0f, 0f, 0.5f, 0.5f, 2f);
	func_1174(&(Local_128.f_25), 665633627);
	_0x7c00cfc48a782dc0(Local_128.f_25, &(Local_424[3]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	if (func_384(uParam0) == 1)
	{
		func_847(0, 0);
	}
	return 1;
}

int func_749(var uParam0)
{
	if (!iVar2302 == -1)
	{
		func_1279(uParam0);
	}
	fLocal_2286 = func_1280();
	iLocal_2284 = func_1281(1);
	iLocal_2285 = func_1281(3);
	func_1282(uParam0);
	func_1283();
	func_1177(uParam0);
	func_1178(uParam0);
	func_1284(uParam0);
	func_1285(uParam0);
	func_1286(uParam0);
	func_853(6);
	func_1287(uParam0);
	func_1288(uParam0);
	if (!func_164(109))
	{
		func_1289(uParam0);
	}
	if (func_1180(30, 0))
	{
		if (func_1233(32))
		{
			if (!is_entity_dead(Global_35) && !is_entity_dead(&(Local_424[3])))
			{
				if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(Global_35, true, false), &iVar0) && waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(&(Local_424[3]), true, false), &iVar1))
				{
					fVar2 = get_waypoint_distance_along_route(func_438(32), iVar0);
					fVar3 = get_waypoint_distance_along_route(func_438(32), iVar1);
					fVar4 = absf((fVar2 - fVar3));
					if (fVar4 < 7f && fVar4 > 4f)
					{
						func_849(105);
						func_178(106);
					}
					else if (fVar4 <= 4f)
					{
						func_178(105);
						func_849(106);
					}
					else
					{
						func_178(105);
						func_178(106);
					}
					if (iVar0 >= 54 && !Local_424[71]->f_2 == 18)
					{
						if (!func_164(108))
						{
							func_849(108);
						}
					}
				}
			}
		}
	}
	if (func_164(105))
	{
		if (!is_entity_dead(Global_35))
		{
			set_ped_max_move_blend_ratio(Global_35, 2f);
			func_1290(&(Local_424[3]), 3f);
		}
	}
	else if (func_164(106))
	{
		if (!is_entity_dead(Global_35))
		{
			func_1290(&(Local_424[3]), 3f);
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
		}
	}
	if (func_164(108))
	{
	}
	if (Local_2328[6]->f_1 == 8)
	{
		func_1199(6, 1);
	}
	if (!func_164(103))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_14, true, 0))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
			_hide_ped_weapons(Global_35, 2, true);
			func_849(103);
			func_178(112);
		}
	}
	if (!func_164(117))
	{
		if (func_1180(30, 24))
		{
			if (func_835(Global_35, &(Local_424[3]), 1, 1) >= 40f)
			{
				func_1182(uParam0, 12);
				func_849(117);
			}
		}
	}
	else if (func_1180(30, 30))
	{
		if (func_835(Global_35, &(Local_424[3]), 1, 1) <= 20f)
		{
			func_1182(uParam0, 11);
			func_178(117);
		}
		else if (func_835(Global_35, &(Local_424[3]), 1, 1) >= 60f)
		{
			func_1268(uParam0, func_1190(15), "", 1, 0);
		}
	}
	switch (func_1183(uParam0))
	{
		case 0:
			func_1222(11, &(Local_424[3]));
			func_1182(uParam0, 11);
			func_1252(uParam0, 3, 1);
			_blip_set_modifier(Local_424[3]->f_1, -401963276);
			_blip_set_modifier(Local_424[3]->f_1, 231194138);
			func_134(uParam0, 1);
			break;
		case 1:
			if (!func_164(114))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_10, true, 0))
				{
					func_1200(976.9f, -6794f, 50f, -1082130432);
					func_1200(982.5f, -6791.3f, 50f, -1082130432);
					func_1200(983.1f, -6776.9f, 49.8f, -1082130432);
					func_849(114);
				}
			}
			if (iVar2281 >= 151)
			{
				if (!func_164(115))
				{
					if (is_ped_climbing(Global_35))
					{
						set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
						set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
						_hide_ped_weapons(Global_35, 2, false);
						func_1200(1006.4f, -6752.6f, 65.4f, -1082130432);
						_set_blip_flash_style(Local_424[3]->f_1, -546708623);
						vLocal_2104.f_1 = func_1291(408396114, iVar2101, 1);
						set_blip_name_from_text_file(vLocal_2104.y, func_1190(1));
						func_849(115);
					}
				}
			}
			if (func_164(103) && iVar2281 >= (iVar2282 - 1))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_14, true, 0))
				{
					_set_anim_scene_playback_list_bool(&(Local_2328[6]), "pl_leadin_after_nowait", true);
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
					_hide_ped_weapons(Global_35, 2, true);
					Local_424[3]->f_2 = 88;
				}
			}
			if (Local_424[3]->f_2 == 88)
			{
				func_134(uParam0, 29);
			}
			if (func_164(112))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_27, true, 0))
				{
					if (!is_entity_dead(iVar2101))
					{
						set_vehicle_is_considered_by_player(iVar2101, true);
						task_enter_vehicle(Global_35, iVar2101, 20000, -1, 3f, 1, 0);
					}
					func_849(121);
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_835(Global_35, iVar2101, 1, 1) <= 5f)
			{
				if (does_blip_exist(vLocal_2104.y))
				{
					remove_blip(&(vLocal_2104.f_1));
				}
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_750(var uParam0)
{
	func_910(uParam0, 27, 0);
	func_910(uParam0, 28, 0);
	func_910(uParam0, 29, 0);
	func_910(uParam0, 30, 0);
	func_1292();
	if (func_164(110) && !iVar2280 == -1)
	{
		stop_stream(iVar2280);
	}
	func_436(32);
	return 1;
}

int func_751(var uParam0)
{
	if (func_384(uParam0) == 2)
	{
		if (!&iLocal_2369[3] == 2)
		{
			if (!func_1287(uParam0))
			{
				return 0;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return 1;
}

int func_752(var uParam0)
{
	iVar0 = 1;
	_disable_first_person_cam_this_frame();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	request_vehicle_asset(749266870, 47);
	if (!has_vehicle_asset_loaded(749266870))
	{
		iVar0 = 0;
		return 0;
	}
	if (!func_164(121))
	{
		if (func_384(uParam0) == 0)
		{
			if ((_does_anim_scene_exist(&(Local_2328[6])) && !_is_anim_scene_active(&(Local_2328[6]))) && !_0xf94692eb9dc15d74(&(Local_2328[6]), 0))
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	set_current_ped_weapon(&(Local_424[3]), -1569615261, true, 0, false, false);
	func_435(uParam0, 63, 71);
	Local_1700 = 0;
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	func_1198(func_1293(11));
	func_178(5);
	return 1;
}

int func_753(var uParam0)
{
	_disable_first_person_cam_this_frame();
	func_178(5);
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[1] = 1;
	Local_1700.f_3[2] = 1;
	Local_1700 = 0;
	Local_1700.f_2 = _blip_add_for_entity(831283580, Local_1700.f_1);
	_blip_set_modifier(Local_1700.f_2, -948075745);
	set_blip_name_from_text_file(Local_1700.f_2, func_1190(4));
	func_99(uParam0, 4194304);
	func_1170(uParam0, "MultiStart");
	Local_1700.f_3[0] = 1;
	Local_1700.f_3[0]->f_4 = 1f;
	Local_1700.f_3[1] = 1;
	Local_1700.f_3[1]->f_4 = 3f;
	Local_1700.f_3[2] = 1;
	Local_1700.f_3[2]->f_4 = 8f;
	set_entity_max_health(Local_1700.f_1, 1000000);
	_set_entity_health(Local_1700.f_1, 1000000, 0);
	set_entity_invincible(Local_1700.f_1, true);
	set_boat_sinks_when_wrecked(Local_1700.f_1, true);
	set_disable_vehicle_petrol_tank_damage(Local_1700.f_1, true);
	set_disable_vehicle_engine_fires(Local_1700.f_1, true);
	set_disable_vehicle_petrol_tank_fires(Local_1700.f_1, true);
	_0x8a779706da5ca3dd(uVar2101, 0, -1);
	func_27(vLocal_1569[35], 0);
	func_135(uParam0, 26);
	func_849(127);
	func_1187(vLocal_1569[41], 6f, 0);
	func_443(6);
	return 1;
}

int func_754(var uParam0)
{
	func_178(122);
	func_178(123);
	if (!func_164(126))
	{
		if (load_stream(func_1294(14), func_1294(9)))
		{
			func_849(126);
		}
	}
	else if (iVar2303 == -1)
	{
		iLocal_2306 = _0x0556c784fa056628(func_1294(14), func_1294(9));
	}
	if (!func_26(vLocal_1569[42]))
	{
		if (is_explosion_in_sphere(iVar2323, get_entity_coords(Local_1700.f_1, true, false), 75f))
		{
			func_27(vLocal_1569[42], 0);
			func_849(122);
		}
		else if (is_explosion_in_sphere(iVar2322, get_entity_coords(Local_1700.f_1, true, false), 75f))
		{
			uLocal_2311 = iVar2308 + 1;
			func_27(vLocal_1569[42], 0);
			func_849(123);
		}
	}
	else if (func_845(vLocal_1569[42]) >= 0.25f)
	{
		func_524(vLocal_1569[42]);
	}
	func_853(7);
	_disable_first_person_cam_this_frame();
	func_1295();
	if (!func_164(125))
	{
		if (func_856(uParam0, 88, 100, 11))
		{
			iVar0 = 88;
			while (iVar0 <= 100)
			{
				set_entity_visible(&(Local_424[iVar0]), false);
				attach_entity_to_entity(&(Local_424[iVar0]), Local_1700.f_1, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				iVar0++;
			}
			func_849(125);
		}
	}
	func_1296(uParam0);
	func_1297(uParam0);
	func_1298();
	func_1178(uParam0);
	func_1299();
	bVar1 = true;
	switch (func_1183(uParam0))
	{
		case 0:
			bVar1 = true;
			if (func_384(uParam0) == 0)
			{
				func_910(uParam0, iVar2298, 0);
				iLocal_2301 = iVar2298 + 1;
				if (!iVar2298 > 71)
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				func_1182(uParam0, 13);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (func_164(122))
			{
				uLocal_2310 = iVar2307 + 1;
				func_1300();
				if (!Local_1700.f_403 == 8)
				{
					func_1301(uParam0, Local_1700.f_403 + 1);
					switch (Local_1700.f_403)
					{
						case 1:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 7.16f, 10.1f, -1f), 0f, 0f, 0f, 1.5f, false, false, false);
							break;
						case 3:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 7.16f, 2.8f, -1f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 4:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 4.37f, 19.04f, 3.46f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 5:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 3.55f, 10.525f, 3.325f), 0f, 0f, 0f, 4f, false, false, false);
							break;
						case 6:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 3.56f, 0.2f, 2.88f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 7:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 3.56f, 0.2f, 2.88f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 8:
							start_particle_fx_non_looped_at_coord(func_1294(7), get_offset_from_entity_in_world_coords(Local_1700.f_1, 1.61f, 9.18f, 9.76f), 0f, 0f, 0f, 3f, false, false, false);
							break;
					}
				}
			}
			if (is_ped_shooting(Global_35))
			{
				func_214(vLocal_1569[34]);
			}
			if (func_164(124))
			{
				if (func_845(vLocal_1569[34]) >= 30f)
				{
					func_178(124);
					func_134(uParam0, 9);
				}
				else
				{
					if (iVar2307 >= 7)
					{
						func_1184(114);
						func_435(uParam0, 72, 87);
						func_436(58);
						func_436(59);
						func_135(uParam0, 29);
						func_27(vLocal_1569[33], 0);
						func_1302();
						func_849(127);
						func_1303();
						func_1304(2, 0, 0f);
						func_1305(2, 1, 1, 1.9f);
						shake_cam(&(iLocal_1494[2]), func_1294(15), 0.3f);
						_0xdd1232b332cbb9e7(1, 1, 0);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_849(118);
						func_1306();
						task_stand_still(0, -1);
						func_1307(&(Local_424[4]), 0f);
						func_1306();
						task_stand_still(0, -1);
						func_1307(&(Local_424[5]), 1f);
						func_1306();
						task_stand_still(0, -1);
						func_1307(&(Local_424[6]), 1.5f);
						func_910(uParam0, 12, 0);
						set_boat_anchor(Local_1700.f_1, false);
						task_leave_vehicle(Global_35, iVar2101, 0, 0);
						set_vehicle_is_considered_by_player(iVar2101, false);
						set_player_control(player_id(), false, 0, false);
						func_134(uParam0, 2);
					}
					Jump @1465; //curOff = 1197
					if (!is_cam_shaking(&(iLocal_1494[2])))
					{
						shake_cam(&(iLocal_1494[2]), func_1294(16), 0.26f);
					}
					func_1303();
					func_1308();
					bVar1 = true;
					if (!func_856(uParam0, 9, 11, 7))
					{
						bVar1 = false;
					}
					if (!bVar1)
					{
					}
					else
					{
						if (!&iLocal_2369[4] == 2)
						{
							func_1309(uParam0);
							bVar1 = false;
						}
						else
						{
							if (func_8(uParam0, 4194304))
							{
								func_841(uParam0, 4194304);
							}
							func_99(uParam0, 33554432);
							if (!func_1310(uParam0, "SMG2_EXT"))
							{
								bVar1 = false;
							}
						}
						if ((!func_845(vLocal_1569[33]) >= 6f || func_1188(1)) || func_1189(1))
						{
							if (!iVar2321 == 0)
							{
								func_910(uParam0, iVar2321, 0);
								iLocal_2324 = iVar2321 + 1;
								if (iVar2321 > 87)
								{
									iLocal_2324 = 0;
								}
							}
							bVar1 = false;
						}
						if (bVar1)
						{
							func_134(uParam0, 29);
						}
						Jump @1465; //curOff = 1442
						func_1303();
						return 1;
						Jump @1465; //curOff = 1453
						func_1311(uParam0);
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_755(var uParam0)
{
	if (does_blip_exist(Local_1700.f_2))
	{
		remove_blip(&(Local_1700.f_2));
	}
	func_1303();
	_display_hud_component(iVar2113);
	if (does_pickup_exist(iVar2317))
	{
		remove_pickup(iVar2317);
	}
	if (iVar2308 == 0)
	{
		func_1278(uParam0, 923852672);
	}
	freeze_entity_position(Local_1700.f_1, false);
	return 1;
}

bool func_756(var uParam0)
{
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	func_1170(uParam0, "MultiStart");
	bVar0 = true;
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	if (!func_1233(func_1293(9)) || !func_1233(func_1293(10)))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (!func_856(uParam0, 9, 10, 23))
	{
		bVar0 = false;
	}
	func_853(7);
	if (!Local_2328[7]->f_1 == 8)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (func_384(uParam0) == 2)
	{
		if (!&iLocal_2369[4] == 2)
		{
			if (!func_1309(uParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return bVar0;
}

int func_757(var uParam0)
{
	func_223(Global_1935630, 1048576);
	func_1312(uParam0, &(Local_2328[7]), 0);
	func_849(127);
	return 1;
}

int func_758(var uParam0)
{
	func_178(5);
	func_174();
	_0xe296208c273bd7f0(0, 2147483647, 0, 17, 1, 0);
	set_clock_time(19, 20, 0);
	return 1;
}

int func_759(var uParam0)
{
	_0xe296208c273bd7f0(0, 2147483647, 0, 17, 1, 0);
	return 1;
}

int func_760(var uParam0)
{
	func_849(6);
	_0xe296208c273bd7f0(0, 2147483647, 0, 17, 1, 0);
	return 1;
}

Vector3 func_761(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_217(iParam0, iParam1, iParam2) };
	return vVar0;
}

void func_762(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_763(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_764(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_765(var uParam0)
{
	return uParam0->f_862;
}

void func_766(var uParam0)
{
	if (func_1313(&iVar0))
	{
		if (func_549(iVar0, 0))
		{
			if (func_573(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_601(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_549(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1314(-1);
	}
	func_1315(1);
	set_entity_invincible(Global_35, true);
	if (!func_764(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_764(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_764(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_764(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_764(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_764(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_764(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_764(*iParam0, 4) && !func_764(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_764(*iParam0, 2048))
	{
		func_779(0, 0);
	}
	if (func_764(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_764(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_764(*iParam0, 8192))
	{
		func_1316();
	}
	if (!func_764(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_764(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_764(*iParam0, 1024))
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
		if (!func_764(*iParam0, 16))
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
						if (func_1317() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_392(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1318(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1319(2);
						func_1320(-1);
						func_1321(vVar3);
						func_1323(func_1322());
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
	if (!func_764(*iParam0, 4096))
	{
		func_1324(Global_35);
	}
	if (!func_764(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_764(*iParam0, 2097152))
	{
		if (func_1325() || _0x50f124e6ef188b22(Global_35))
		{
			func_1326(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_768(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_769(var uParam0)
{
	if (func_763(uParam0, 2048) && !func_392(func_1327(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_763(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_836(iVar1, func_1327(uParam0), func_1328(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_763(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_836(iVar3, func_1327(uParam0), func_1328(uParam0), 2, 1073741824);
		}
	}
}

void func_770(var uParam0)
{
	if ((func_763(uParam0, 268435456) && !func_392(func_1327(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1327(uParam0) };
			func_836(iVar0, vVar1, func_1329(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_771(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_392(vParam1))
	{
		func_1330(uParam0, 2048, 1);
	}
	else
	{
		func_722(uParam0, 2048);
		if (bParam5)
		{
			func_722(uParam0, -2147483648);
		}
	}
}

void func_772(var uParam0)
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
					if (!func_1331(uParam0->f_13[iVar0], 8))
					{
						if (func_663(func_1024(iVar1, 0, 1, 0)))
						{
							if (!func_904(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_663(func_1024(iVar1, 1, 1, 0)))
						{
							if (!func_904(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_773(var uParam0, bool bParam1)
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

void func_774(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1121(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1332(iParam1, 29, bVar4, 1, 0);
			func_1332(iParam1, 31, bVar4, 1, 0);
			func_1332(iParam1, 30, bVar4, 1, 0);
			func_1332(iParam1, 22, bVar4, 1, 0);
			func_1332(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1061(32768) && func_1333(1108822547, 8)) && func_1334(10, iParam3))
	{
		func_1335(iParam1, 0, 1);
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
			iVar3 = func_1129(iVar1, 1);
			if (func_1333(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1334(iVar1, iParam3))
				{
				}
				else if ((func_1333(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1333(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1332(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1336(iVar3, 1, 6);
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
								func_1332(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1333(iVar3, 1))
							{
								func_1337(iVar3, 1, 6);
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

bool func_775(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1338((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_776(int iParam0)
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

int func_777(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_778(int iParam0, int iParam1)
{
	return func_1339(&uVar0, iParam0, iParam1);
}

void func_779(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_663(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1340(1);
	}
}

void func_780(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_781(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_782(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_783(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_784(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_785(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_786(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_787(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_788(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_789(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_790(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_791(var uParam0, int iParam1)
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

int func_792(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_793((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_793(var uParam0)
{
	return *uParam0 != 0;
}

bool func_794(var uParam0, int iParam1)
{
	iVar0 = func_1341(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_795(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_796(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_797(var uParam0)
{
	if (!func_825(uParam0->f_3, 1))
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
		func_1342(&(uParam0->f_3), 1);
	}
}

bool func_798(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_799(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_800(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_801(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_1343(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_802(var uParam0)
{
	if (func_825(*uParam0, 2))
	{
		return true;
	}
	if (!func_825(*uParam0, 1))
	{
		func_1344(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_1342(uParam0, 2);
		return true;
	}
	return false;
}

bool func_803(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_804(var uParam0)
{
	if (!func_825(uParam0->f_2, 1))
	{
		if (func_1345(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1346(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_298())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_980())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_1342(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_805(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_806(var uParam0, int iParam1)
{
	if (!func_825(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_807(var uParam0)
{
	return *uParam0 != 0;
}

void func_808(var uParam0)
{
	if (!func_825(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_1342(&(uParam0->f_2), 1);
	}
}

bool func_809(var uParam0)
{
	return *uParam0 != 0;
}

void func_810(var uParam0)
{
	if (!func_825(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_1342(&(uParam0->f_3), 1);
	}
}

bool func_811(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_812(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_813(var uParam0)
{
	return func_1347(*uParam0);
}

void func_814(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_815(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_816(var uParam0)
{
	if (!func_825(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_1342(&(uParam0->f_2), 1);
	}
}

bool func_817(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_818(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

bool func_819(var uParam0, int iParam1, char* sParam2)
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

void func_820(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_718(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1348(uParam0, iParam1);
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
		iVar1 = func_1349(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_902(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1350(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1226(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1351(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_821(int iParam0)
{
	if (!func_183(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_822(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_844(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1352(uParam0, 0))
			{
				if (func_1353(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1354(uParam0, 1, &iVar0))
					{
					}
					if (func_1355(uParam0, 3, &cVar2))
					{
					}
					if (func_1354(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1354(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1354(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1354(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1354(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1356(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_465((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_465(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_465(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_211(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1356(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_465(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1352(uParam0, 12))
			{
				if (func_1354(uParam0, 13, &iVar0))
				{
				}
				if (func_1354(uParam0, 14, &iVar1))
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

void func_823(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_211((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_211((*uParam0)[iVar0], 1))
		{
			func_1357((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_824(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_793((*uParam0)[iVar1]))
		{
			if (func_794((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1358((*uParam0)[iVar1]))
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
		if (func_796((*uParam1)[iVar1]))
		{
			if (func_794((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1359((*uParam1)[iVar1]))
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
		if (func_798((*uParam2)[iVar1]))
		{
			if (func_794((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1360((*uParam2)[iVar1]))
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
		if (func_800((*uParam3)[iVar1]))
		{
			if (func_794((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_801((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_794(uParam4->f_1, iParam12))
	{
		if (!func_802(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_803((*uParam5)[iVar1]))
		{
			if (func_794((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1345((*uParam5)[iVar1]))
				{
					if (!func_826((*uParam5)[iVar1]))
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
		if (func_803((*uParam5)[iVar1]))
		{
			if (func_794((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1345((*uParam5)[iVar1]))
				{
					if (func_826((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_805((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1361((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_807((*uParam6)[iVar1]))
		{
			if (func_794((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1362((*uParam6)[iVar1]))
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
		if (func_809((*uParam7)[iVar1]))
		{
			if (func_794((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1363((*uParam7)[iVar1]))
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
		if (func_811((*uParam8)[iVar1]))
		{
			if (func_794((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1364((*uParam8)[iVar1]))
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
		if (func_813((*uParam9)[iVar1]))
		{
			if (func_794((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1365((*uParam9)[iVar1]))
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
		if (func_815((*uParam10)[iVar1]))
		{
			if (func_794((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1366((*uParam10)[iVar1]))
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
		if (func_817((*uParam11)[iVar1]))
		{
			if (func_794((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1367((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_825(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_826(var uParam0)
{
	if (func_825(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_2, 1))
	{
		func_804(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_1342(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_827(int iParam0)
{
	if (!func_183(iParam0))
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

bool func_828(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_486(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_252(iParam1)) && func_1368(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1369(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1370(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1371(iParam1);
		return true;
	}
	return false;
}

bool func_829(var uParam0)
{
	if (!func_392(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1372(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1372(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1372(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1372(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1372(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1372(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1372(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1372(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1372(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1372(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1372(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1372(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1372(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1372(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1372(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1372(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1372(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1372(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1372(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1372(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1372(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1372(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1372(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1372(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1372(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1372(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1372(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1372(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1372(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1372(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1372(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1372(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1372(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_392(uParam0->f_5417);
}

int func_830(int iParam0, var uParam1)
{
	uParam1->f_10 = func_260(uParam1->f_10);
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
		if (func_392(uParam1->f_6))
		{
		}
	}
	bVar0 = func_391();
	if (*uParam1)
	{
		if (bVar0 && !func_321((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1373(5))
			{
				func_498(5);
				func_1374(5);
				func_1320(0);
				func_1319(0);
			}
		}
	}
	if (func_1375(Global_36) == 8)
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
	iVar2 = func_209(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_501(iVar1))
	{
		bVar3 = true;
		if (func_1376(iVar1))
		{
			bVar4 = true;
		}
		if (func_508(iVar1))
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
				func_509(uParam1->f_10);
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
			if (!func_1373(0) && func_1373(1))
			{
				func_1377(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1378())
			{
				func_1379();
			}
			func_1320(0);
			func_1319(0);
			func_1321(uParam1->f_6);
		}
	}
	if (!func_501(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1380(uParam1->f_10) == 0 || func_1381(uParam1->f_10) == 0) || func_1382(uParam1->f_10) == 0)
			{
				func_1383(uParam1->f_10);
			}
			func_1384(uParam1->f_10);
			func_1385(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_209(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_501(iVar1))
	{
		bVar3 = true;
		if (func_1376(iVar1))
		{
			bVar4 = true;
		}
		if (func_508(iVar1))
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
			if (!func_392(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1386(uParam1->f_10))
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
			Var8 = { func_1387(uParam1->f_10) };
			Var10 = { func_1388() };
			func_1389(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_494(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1390(uParam1->f_10);
		if (uParam1->f_2 && !func_392(uParam1->f_6))
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
	func_493(uParam1->f_10);
	if (func_494(uParam1->f_10))
	{
		iVar16 = func_256(uParam1->f_10);
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

bool func_831(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_832(int iParam0)
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

bool func_833(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1391(iParam1))
	{
		return false;
	}
	iVar0 = func_1392(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_834(var uParam0, bool bParam1)
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

float func_835(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_836(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1393(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1394(iParam0))
	{
		if (func_832(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_387(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_836(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_836(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_387(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_387(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_387(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_387(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_387(iParam5, 129))
	{
		if (func_387(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_387(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_387(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_387(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1394(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_387(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_387(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_837(int iParam0, int iParam1, int iParam2)
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

bool func_838(var uParam0, int iParam1)
{
	switch (func_1395(uParam0))
	{
		case 0:
			if (!func_1396(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1397(uParam0, 1);
			break;
		case 1:
			func_1398(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_767(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1397(uParam0, 2);
			break;
		case 2:
			if (func_1399(uParam0))
			{
				func_1400(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1397(uParam0, 3);
			}
			break;
		case 3:
			if (func_845(&(uParam0->f_3)) >= 1f)
			{
				func_1397(uParam0, 4);
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
			func_1401(&iVar1, 0);
			release_script_audio_bank();
			func_1397(uParam0, 0);
			return true;
	}
	return false;
}

void func_839(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1402(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_840(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1403(uParam0, iVar0) };
	if (func_1405(&(uParam0->f_10792), Var1, func_1404(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1406(&(uParam0->f_10792), 524288))
		{
			func_374(uParam0, 67108864);
			func_1407(&(uParam0->f_10792), 524288);
		}
		func_1408(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_842(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1409(uParam0);
		func_1410(uParam0);
		return true;
	}
	if (func_1411(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_868(uParam0);
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
			func_1412(uParam0);
			func_841(uParam0, 524288);
			func_1413(uParam0);
			func_149(uParam0, 30f);
			func_150(uParam0, 40f);
			func_99(uParam0, 262144);
		}
		if (!func_8(uParam0, 524288) && _0xef324e9550a394d5(uParam0->f_7375.f_804))
		{
			func_99(uParam0, 524288);
		}
	}
	return false;
}

bool func_843(var uParam0)
{
	iVar0 = 1;
	if (!func_1414(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1415(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1416(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_416(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_821(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_844(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_844(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1417(uParam0);
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

float func_845(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_467(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_521() - uParam0->f_1);
}

bool func_846()
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

void func_847(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_848()
{
	Global_1934765->f_273 = 1;
}

void func_849(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_762(uLocal_225[iVar1], func_429(iVar0));
}

void func_850()
{
	iLocal_1452[5] = 379542007;
	iLocal_1452[6] = -598316488;
	iLocal_1452[3] = 127400949;
	iLocal_1452[4] = 1210039241;
	iLocal_1452[2] = 1999408598;
	iLocal_1452[9] = 1845102363;
	iLocal_1452[10] = 379542007;
	iLocal_1452[11] = -598316488;
	if (func_122(-506285289) && has_ped_got_weapon(Global_35, -506285289, 0, true))
	{
		iLocal_1452[0] = -506285289;
	}
	else if (func_122(1402226560) && has_ped_got_weapon(Global_35, 1402226560, 0, true))
	{
		iLocal_1452[0] = 1402226560;
	}
	else if (func_122(-506285289))
	{
		iLocal_1452[0] = -506285289;
	}
	else if (func_122(1402226560))
	{
		iLocal_1452[0] = 1402226560;
	}
	else
	{
		iLocal_1452[0] = -506285289;
	}
	if (func_122(1999408598))
	{
		iLocal_1452[1] = 1999408598;
	}
	else if (func_122(1676963302))
	{
		iLocal_1452[1] = 1676963302;
	}
	else
	{
		iLocal_1452[1] = 1999408598;
	}
	iLocal_1452[7] = &iLocal_1452[1];
	iLocal_1452[8] = &iLocal_1452[1];
}

bool func_851(int iParam0)
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		iVar1 = iVar0;
		if (func_794(vLocal_243[iVar1]->f_2, iParam0))
		{
			if (&vLocal_243[iVar1] == 0)
			{
				func_1198(iVar1);
				bVar2 = false;
			}
			else if (&vLocal_243[iVar1] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	func_173();
	if (bVar2)
	{
		func_849(3);
	}
	return bVar2;
}

bool func_852(var uParam0)
{
	if (func_164(7))
	{
		return true;
	}
	func_259(uParam0, 2);
	iVar0 = func_33(uParam0);
	iVar1 = func_384(uParam0);
	bVar2 = (iVar0 == 0 && iVar1 == 0);
	iVar3 = 1;
	iVar4 = 2;
	while (iVar4 <= 6)
	{
		if (!Local_424[iVar4]->f_3 == 7)
		{
			if (iVar4 == 2)
			{
				vVar5 = { func_761(iVar4, 0, iVar0) };
			}
			if (!func_1418(uParam0, iVar4, bVar2, !func_433(iVar4) == -1, 1, func_217(iVar4, 0, iVar0)))
			{
				iVar3 = 0;
			}
		}
		iVar4++;
	}
	if (does_entity_exist(&(Local_424[2])))
	{
		vVar8 = { get_entity_coords(&(Local_424[2]), true, false) };
	}
	if (iVar3 == 0)
	{
		return false;
	}
	Local_424[1] = Global_35;
	func_145(uParam0, &(Local_424[2]), "DUTCH", 0);
	func_145(uParam0, &(Local_424[4]), "MICAH_BELL", 0);
	func_145(uParam0, &(Local_424[5]), "BILL", 0);
	func_145(uParam0, &(Local_424[3]), "HERCULE", 0);
	func_145(uParam0, &(Local_424[6]), "SMG2_MAN", 0);
	if (!is_entity_dead(&(Local_424[3])))
	{
		set_ped_relationship_group_hash(&(Local_424[3]), 1030835986);
	}
	if (!is_entity_dead(&(Local_424[6])))
	{
		set_ped_relationship_group_hash(&(Local_424[6]), 1030835986);
	}
	func_103(uParam0, 2);
	func_849(7);
	return true;
}

void func_853(int iParam0)
{
	switch (Local_2328[iParam0]->f_1)
	{
		case 0:
			Local_2328[iParam0]->f_1 = 1;
		case 1:
			func_1419(iParam0);
			break;
		case 2:
			func_1419(iParam0);
			break;
		case 3:
			func_1419(iParam0);
			break;
		case 4:
			Local_2328[iParam0] = _create_anim_scene(func_1420(iParam0, 0), 0, func_1420(iParam0, 1), false, true);
			Local_2328[iParam0]->f_1 = 5;
			break;
		case 5:
			if (_is_anim_scene_loaded(&(Local_2328[iParam0]), true, false))
			{
				iVar0 = 2;
				while (iVar0 <= 16)
				{
					sVar1 = func_1420(iParam0, iVar0);
					if (!is_string_null_or_empty(sVar1))
					{
						_0xdf7b5144e25cd3fe(&(Local_2328[iParam0]), sVar1);
					}
					iVar0++;
				}
				Local_2328[iParam0]->f_1 = 6;
			}
			else if (!_is_anim_scene_loading(&(Local_2328[iParam0]), true))
			{
				load_anim_scene(&(Local_2328[iParam0]));
			}
			break;
		case 6:
			if (_is_anim_scene_loaded(&(Local_2328[iParam0]), true, false))
			{
				iVar2 = 2;
				while (iVar2 <= 16)
				{
					sVar3 = func_1420(iParam0, iVar2);
					if (!is_string_null_or_empty(sVar3))
					{
						if (!_0x23e33cb9f4a3f547(&(Local_2328[iParam0]), sVar3))
						{
						}
						else
						{
							iVar2++;
							Local_2328[iParam0]->f_1 = 7;
							Jump @754; //curOff = 379
							func_1419(iParam0);
							Local_2328[iParam0]->f_1 = 8;
							Jump @754; //curOff = 399
							Jump @754; //curOff = 402
							if (!_does_anim_scene_exist(&(Local_2328[iParam0])))
							{
							}
							if (!_is_anim_scene_loaded(&(Local_2328[iParam0]), true, false))
							{
							}
							if (!_is_anim_scene_started(&(Local_2328[iParam0]), false))
							{
								func_1419(iParam0);
								start_anim_scene(&(Local_2328[iParam0]));
							}
							else
							{
								Local_2328[iParam0]->f_1 = 10;
							}
							Jump @754; //curOff = 484
							if (Local_2328[iParam0]->f_2)
							{
								iVar4 = 1;
								while (iVar4 <= 16)
								{
									sVar5 = func_1420(iParam0, iVar4);
									if (!is_string_null_or_empty(sVar5))
									{
										if (!_0x23e33cb9f4a3f547(&(Local_2328[iParam0]), sVar5))
										{
											if (!_0x0df57f86fe71dbe5(&(Local_2328[iParam0]), sVar5))
											{
												_0xdf7b5144e25cd3fe(&(Local_2328[iParam0]), sVar5);
											}
										}
									}
									iVar4++;
								}
							}
							if (_is_anim_scene_active(&(Local_2328[iParam0])) || _0xf94692eb9dc15d74(&(Local_2328[iParam0]), 0))
							{
								Local_2328[iParam0]->f_1 = 11;
							}
							Jump @754; //curOff = 632
							if (_is_anim_scene_finished(&(Local_2328[iParam0]), false))
							{
								Local_2328[iParam0]->f_1 = 12;
							}
							Jump @754; //curOff = 661
							if (Local_2328[iParam0]->f_4)
							{
								reset_anim_scene(&(Local_2328[iParam0]), 0);
								Local_2328[iParam0]->f_1 = 0;
							}
							else
							{
								Local_2328[iParam0]->f_1 = 13;
							}
							Jump @754; //curOff = 712
							if (_does_anim_scene_exist(&(Local_2328[iParam0])))
							{
								_delete_anim_scene(&(Local_2328[iParam0]));
							}
							Local_2328[iParam0]->f_1 = 14;
						}
					}
				}
			}
			default:
				break;
	}
}

void func_854(var uParam0)
{
	iVar0 = func_33(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 24:
			func_1421(-1, 1);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			iVar1 = 0;
			while (iVar1 < Local_14.f_91)
			{
				if ((does_entity_exist(&(Local_14.f_91[iVar1])) && is_entity_a_mission_entity(&(Local_14.f_91[iVar1]))) && does_entity_belong_to_this_script(&(Local_14.f_91[iVar1]), false))
				{
					delete_object(Local_14.f_91[iVar1]);
				}
				_0x20a4bf0e09bee146(Local_14.f_90);
				destroy_itemset(Local_14.f_90);
				iVar1++;
			}
			func_1422(-1, 1);
			break;
	}
}

bool func_855(var uParam0)
{
	if (!is_entity_dead(Local_1700.f_1))
	{
		return true;
	}
	func_1198(9);
	if (!func_1233(9))
	{
		return false;
	}
	switch (func_33(uParam0))
	{
		case 0:
			Var0 = { 322.343f, -7287.216f, 46.497f };
			Var0.f_3 = -15.846f;
			break;
		case 1:
			Var0 = { func_470(7, 0) };
			break;
		case 2:
			Var0 = { func_470(7, 1) };
			break;
		case 3:
			Var0 = { func_470(7, 2) };
			break;
		case 4:
			Var0 = { func_470(7, 3) };
			break;
		case 5:
			Var0 = { func_470(7, 4) };
			break;
		case 25:
			Var0 = { func_470(7, 4) };
			break;
	}
	Local_1700.f_1 = create_vehicle(func_437(9), Var0, Var0.f_3, true, true, false, false);
	func_1301(uParam0, 0);
	_0x7a49d40de437bc8d(Local_1700.f_1, 0);
	Local_1700.f_367 = get_distance_between_coords(func_1423(0), func_1423(5), true);
	if (func_33(uParam0) == 0)
	{
		set_entity_visible(Local_1700.f_1, false);
	}
	return true;
}

bool func_856(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_164(0))
	{
		return false;
	}
	iVar0 = func_1424(iParam1, iParam2);
	iVar1 = func_1425(iParam1, iParam2);
	if (iParam3 & 16 != 0)
	{
		iVar2 = func_1424(iParam1, iParam2);
	}
	else
	{
		iVar2 = 1;
	}
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		iVar0 = func_1424(iParam1, iParam2);
		iVar1 = func_1425(iParam1, iParam2);
		iVar5 = (iParam1 + iVar1);
		iVar6 = iVar5;
		if (iVar1 == iVar0)
		{
			if (iParam3 & 4 != 0)
			{
				iVar7 = iParam1;
				while (iVar7 <= iParam2)
				{
					if (!is_entity_dead(&(Local_424[iVar7])))
					{
						if (!_0xa0bc8faed8cfeb3c(&(Local_424[iVar7])))
						{
							return false;
						}
						else if (func_1426(iVar7, &iVar3) && !func_1272(iVar7, 64))
						{
							_set_ped_body_component(&(Local_424[iVar7]), iVar3);
							_update_ped_variation(&(Local_424[iVar7]), false, true, true, true, false);
							func_1269(iVar7, 64);
						}
					}
					iVar7++;
				}
			}
			return true;
		}
		func_1198(func_1293(iVar6));
		if (!func_1233(func_1293(iVar6)))
		{
			return false;
		}
		Var8 = { func_217(iVar6, 0, func_33(uParam0)) };
		Local_424[iVar6] = func_1428(func_437(func_1293(iVar6)), Var8, Var8.f_3, 1, 1, func_1427(iVar6), 1, 1, !func_1426(iVar6, &iVar3), iParam3 & 8 == 0, func_1426(iVar6, &iVar3), 0, 0);
		func_849(0);
		if (iParam3 & 256 != 0)
		{
			set_entity_visible(&(Local_424[iVar6]), false);
		}
		if (iParam3 & 256 != 512)
		{
			_0x9587913b9e772d29(&(Local_424[iVar6]), 0);
		}
		if (iParam3 & 128 != 0)
		{
			func_1244(iVar6, 0);
		}
		if (iParam3 & 1 != 0)
		{
			set_blocking_of_non_temporary_events(&(Local_424[iVar6]), true);
		}
		if (iParam3 & 2 != 0)
		{
			set_entity_invincible(&(Local_424[iVar6]), true);
		}
		if (iParam3 & 32 != 0)
		{
			func_1429(&(Local_424[iVar6]), 0);
		}
		if (iParam3 & 64 != 0)
		{
			_0x18ff3110cf47115d(&(Local_424[iVar6]), 2, 0);
			_0x18ff3110cf47115d(&(Local_424[iVar6]), 3, 0);
			_0x18ff3110cf47115d(&(Local_424[iVar6]), 7, 0);
		}
		func_1221(iVar6, 1);
		iVar4++;
	}
	return false;
}

bool func_857(var uParam0)
{
	if (!is_entity_dead(iVar2101))
	{
		return true;
	}
	func_1198(8);
	if (!func_1233(8))
	{
		return false;
	}
	switch (func_33(uParam0))
	{
		case 0:
		case 1:
			Var0 = { func_470(8, 0) };
			break;
		case 2:
		case 3:
			Var0 = { func_470(8, 1) };
			break;
		case 4:
		case 5:
		case 25:
			Var0 = { func_470(8, 2) };
			break;
	}
	vLocal_2104.x = create_vehicle(func_437(8), Var0, Var0.f_3, true, true, false, false);
	set_entity_invincible(iVar2101, true);
	set_vehicle_is_considered_by_player(iVar2101, false);
	return true;
}

int func_858(int iParam0, int iParam1)
{
	if (does_entity_exist(&(iLocal_1233[iParam0])))
	{
		return 1;
	}
	vVar0 = { func_1176(iParam0) };
	if (vVar0.f_6 == -1)
	{
		return 0;
	}
	func_1198(vVar0.f_6);
	if (!func_1233(vVar0.f_6))
	{
		return 0;
	}
	iLocal_1233[iParam0] = create_object(func_437(vVar0.f_6), vVar0, true, true, false, false, true);
	if (!func_392(vVar0.f_3))
	{
		set_entity_rotation(&(iLocal_1233[iParam0]), vVar0.f_3, 2, true);
	}
	if (iParam1 & 2 != 0)
	{
		set_entity_invincible(&(iLocal_1233[iParam0]), true);
	}
	if (iParam1 & 4 != 0)
	{
		freeze_entity_position(&(iLocal_1233[iParam0]), true);
	}
	if (iParam1 & 8 != 0)
	{
		set_entity_coords(&(iLocal_1233[iParam0]), vVar0, true, false, true, true);
	}
	return 1;
}

int func_859(var uParam0)
{
	iVar0 = func_33(uParam0);
	if ((((iVar0 == 0 || iVar0 == 2) || iVar0 == 4) || iVar0 == 5) || iVar0 == 25)
	{
		if (!func_164(5))
		{
			func_1430(uParam0);
			func_849(5);
		}
	}
	switch (iVar0)
	{
		case 0:
			return func_1431(uParam0);
		case 2:
			return func_1432(uParam0);
		case 4:
			return func_1433(uParam0);
		case 5:
			return func_1434(uParam0);
		case 25:
			return func_1435(uParam0);
	}
	return 1;
}

void func_860(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_861(var uParam0)
{
	func_849(15);
	switch (func_33(uParam0))
	{
		case 0:
			Local_1265[1]->f_5 = 0f;
			break;
		case 2:
			func_431(uParam0, Global_35);
			func_432(&(uParam0->f_7375), Global_35, "ARTHUR");
			if (_does_anim_scene_exist(uParam0->f_7375.f_804))
			{
				remove_anim_scene_entity(uParam0->f_7375.f_804, "ARTHUR", Global_35);
			}
			_set_entity_coords_and_heading(Global_35, func_472(2, 0), func_1255(2, 0), true, false, true);
			_0x9587913b9e772d29(Global_35, 0);
			_set_entity_coords_and_heading(&(Local_424[3]), func_472(2, 4), func_1255(2, 4), true, false, true);
			_0x9587913b9e772d29(&(Local_424[3]), 0);
			_set_entity_coords_and_heading(&(Local_424[2]), func_472(2, 1), func_1255(2, 1), true, false, true);
			_0x9587913b9e772d29(&(Local_424[2]), 0);
			_set_entity_coords_and_heading(&(Local_424[4]), func_472(2, 2), func_1255(2, 2), true, false, true);
			_0x9587913b9e772d29(&(Local_424[4]), 0);
			_set_entity_coords_and_heading(&(Local_424[5]), func_472(2, 3), func_1255(2, 3), true, false, true);
			_0x9587913b9e772d29(&(Local_424[5]), 0);
			Local_1265[4]->f_5 = 0f;
			break;
		case 4:
			_set_entity_coords_and_heading(Global_35, func_472(4, 0), func_1255(4, 0), true, false, true);
			_0x9587913b9e772d29(Global_35, 0);
			Local_1265[11]->f_5 = 0f;
			break;
		case 5:
			set_ped_into_vehicle(Global_35, iVar2101, -1);
			Local_1265[13]->f_5 = 0f;
			break;
	}
	return 1;
}

void func_862(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_863(int iParam0)
{
	iVar1 = _0x0139637a3bff8b6d(&(Local_424[iParam0]), &iVar0);
	if (!_0x0772f87d7b07719a(player_id(), iVar0, iVar1))
	{
		_0x946d46cd6dfb9742(player_id(), iVar0, iVar1);
	}
}

void func_864(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			iVar0 = 16;
			break;
		case 1:
			iVar0 = 16;
			iVar1 = 30;
			break;
		case 2:
			iVar0 = 17;
			break;
		case 3:
			iVar0 = 17;
			iVar1 = 30;
			break;
		case 4:
			iVar0 = 18;
			break;
		case 5:
		case 25:
			iVar0 = 19;
			break;
	}
	set_clock_time(iVar0, iVar1, 0);
	_0x3373779baf7caf48("fog", "FOG_guama");
	_set_weather_type(-702816767, true, true, false, 0f, false);
}

int func_865(int iParam0, int iParam1, int iParam2)
{
	if (((func_1436(iParam0, 8388608) && func_1436(iParam0, 1048576)) && func_1436(iParam0, 2097152)) && func_1436(iParam0, 4194304))
	{
		return -183018591;
	}
	iVar0 = _0xf8204ef17410bf43(-594562071, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(970310034, iParam1, iParam2, 0);
	iVar2 = _0xf8204ef17410bf43(-1212426201, iParam1, iParam2, 0);
	iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
	while (func_1437(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = 1845102363;
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_122(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_1436(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_1436(iParam0, 1048576))
	{
		if (!func_663(iVar5) || _0xf2f585411e748b9c(iVar1, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_1436(iParam0, 2097152))
	{
		if (!func_663(iVar5) || _0xf2f585411e748b9c(iVar3, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_1436(iParam0, 4194304))
	{
		if (!func_663(iVar5) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_663(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

int func_866(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1438(iParam3, 1);
	bVar1 = func_1438(iParam3, 2);
	bVar2 = !func_1438(iParam3, 4);
	bVar3 = func_1438(iParam3, 8);
	bVar4 = !func_1438(iParam3, 16);
	bVar5 = func_1438(iParam3, 32);
	bVar6 = func_1438(iParam3, 64);
	return func_1254(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_867(var uParam0)
{
	if (!func_26(vLocal_1569[2]) || func_845(vLocal_1569[2]) >= 30f)
	{
		func_27(vLocal_1569[2], 1);
		func_1439(0.9f);
	}
	func_1440();
	if (func_164(0))
	{
		func_178(0);
	}
	if (!func_164(16))
	{
		_0xc6dcc2a3a8825c85(1);
		func_849(16);
	}
	_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	_0xcf213a5fc3abfc08(968f, -6782.1f, 200f);
	func_173();
	func_1441(uParam0);
	func_178(0);
	func_178(11);
	func_1442(uParam0);
	func_1241(uParam0);
}

void func_868(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1443(uParam0);
}

void func_869(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_207())
			{
				if (func_845(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_214(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_870(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1444(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1445();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1446(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_871(var uParam0)
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
		if (func_232() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_232() && !func_54())
	{
		func_841(uParam0, 1048576);
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
			func_841(uParam0, 134217728);
		}
	}
}

void func_872(var uParam0)
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

void func_873(var uParam0)
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

void func_874(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_875(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_248(uParam0->f_5423[iVar0]))
		{
			func_1447(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_876(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1448(iVar0))
	{
		return false;
	}
	iVar1 = func_1449(iParam2);
	if (!func_1450(iVar1))
	{
		return false;
	}
	if (!func_1451(uParam0, iParam1, iParam2))
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

int func_877(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_878(var uParam0, int iParam1)
{
	return 1;
}

void func_879(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_214(&(uParam0->f_603));
	}
}

void func_880(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_881(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_845(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_249(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_250(uParam0->f_5421))
		{
			iVar2 = func_251(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1452(uParam0->f_5421, iVar1);
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
	while (iVar1 < get_itemset_size(Local_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, Local_14);
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

float func_882(var uParam0)
{
	return func_845(&(uParam0->f_603));
}

bool func_883(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_884(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_876(uParam0, iParam1, 4))
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
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1453(uParam0);
		if (func_1454(uParam0))
		{
			func_1455(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_841(uParam0, 524288);
		func_1456(&(uParam0->f_7375), 4);
		if (func_1444(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1445();
		}
		return true;
	}
	return false;
}

void func_885(var uParam0)
{
	func_1457(uParam0);
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

bool func_886(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_840(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_841(uParam0, 2097152);
			func_259(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_878(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1403(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_840(uParam0))
			{
				func_841(uParam0, 2097152);
				func_842(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_842(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_840(uParam0))
		{
			func_841(uParam0, 2097152);
			func_1410(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_842(uParam0, Var0);
	}
	return true;
}

bool func_887(var uParam0)
{
	return func_1458(&(uParam0->f_7375));
}

void func_888(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1459(uParam0))
		{
			func_427(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1460(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_889(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_248(uParam0->f_5423[iVar1]))
		{
			if (func_1461(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1462(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_890(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1463(uParam0))
		{
			func_427(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1460(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_891(var uParam0)
{
	switch (func_1464(&iVar0))
	{
		case 1:
			func_1465(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_184(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_892(var uParam0, int iParam1)
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

int func_893(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1409(uParam0);
		func_841(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1403(uParam0, iParam1) };
	if (func_1310(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_894(var uParam0, int iParam1)
{
	func_1466(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_219(uParam0, iParam1));
}

void func_895(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_880(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_841(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_841(uParam0, 4);
		func_841(uParam0, 8192);
		func_841(uParam0, 536870912);
		func_259(uParam0, 4);
		func_65(0);
		func_64(0);
		func_841(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1467(uParam0);
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
				func_1468(1, 1);
			}
		}
	}
}

void func_896(bool bParam0)
{
	if (!func_191(0, 0, 1) || bParam0)
	{
		iVar0 = func_978();
		iVar1 = func_981(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1469(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1469(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_897(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1470(bParam1, bParam2, bParam3);
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

var func_898(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1471(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1472(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1471(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_899(var uParam0)
{
	return true;
}

bool func_900(var uParam0)
{
	return true;
}

int func_901(var uParam0)
{
	return 1;
}

void func_902(var uParam0, int iParam1)
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

void func_903(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_717(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = -1569615261;
	*uParam0->f_3[iVar0] = { Var1 };
}

bool func_904(var uParam0, int iParam1)
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

char* func_905(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return func_1473(uParam0->f_13[iVar0]->f_1);
		}
		iVar0++;
	}
	return "";
}

void func_906(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	func_1474(iVar0);
	func_936(iParam0, 60, 1);
	if (bParam1)
	{
		func_1475(iParam0);
	}
}

void func_907(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	func_1476(iVar0);
	func_938(iParam0, 60, 1);
	if (bParam1)
	{
		func_1477(iParam0);
	}
}

void func_908(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	func_1478(iVar0);
	if (iParam0 == 14)
	{
		func_1479(iVar0);
	}
	func_936(iParam0, 61, 1);
	if (bParam1)
	{
		func_1480(iParam0);
	}
}

void func_909(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	func_1481(iVar0);
	func_938(iParam0, 61, 1);
	if (bParam1)
	{
		func_1482(iParam0);
	}
}

void func_910(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 == 1)
	{
		return;
	}
	if (does_entity_exist(&(Local_424[iParam1])))
	{
		if (is_entity_a_mission_entity(&(Local_424[iParam1])))
		{
			if (does_entity_belong_to_this_script(&(Local_424[iParam1]), false))
			{
				if (!is_entity_dead(&(Local_424[iParam1])))
				{
					set_ped_config_flag(&(Local_424[iParam1]), 77, false);
				}
				func_431(uParam0, &(Local_424[iParam1]));
				func_432(&(uParam0->f_7375), &(Local_424[iParam1]), 0);
				if (_does_anim_scene_exist(uParam0->f_7375.f_804))
				{
					if (!is_string_null_or_empty(sParam2))
					{
						if (_0x6f1f0b17109309da(uParam0->f_7375.f_804, sParam2))
						{
							remove_anim_scene_entity(uParam0->f_7375.f_804, sParam2, &(Local_424[iParam1]));
						}
					}
				}
				if (func_433(iParam1) == -1)
				{
					delete_ped(Local_424[iParam1]);
				}
				else
				{
					if (func_1272(iParam1, 32))
					{
						set_ped_seeing_range(&(Local_424[iParam1]), 60f);
						func_1483(iParam1, 32);
					}
					if (iParam1 == 2)
					{
						set_ped_accuracy(&(Local_424[iParam1]), 99);
					}
					else if (iParam1 == 4)
					{
						set_ped_combat_attributes(&(Local_424[4]), 54, true);
						if (has_ped_got_weapon(&(Local_424[4]), &(iLocal_1452[2]), 0, false))
						{
							remove_weapon_from_ped(&(Local_424[4]), &(iLocal_1452[2]), true, -142743235);
						}
					}
					func_253(uParam0, func_433(iParam1), &(Local_424[iParam1]), 0, 1, 1, 0);
				}
			}
		}
	}
	func_1221(iParam1, 0);
}

bool func_911(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_912(int iParam0)
{
	iVar0 = func_445(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1484(iVar0);
}

int func_913(int iParam0, int iParam1)
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
			func_1485(iVar2);
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

void func_914()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_915(int iParam0, int iParam1)
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

int func_916(bool bParam0)
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

int func_917(int iParam0)
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

void func_918(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_919(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_920(int iParam0, int iParam1)
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
			func_1486((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1486(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_184(&(Global_1898164->f_1[0])))
	{
		func_196(&(Global_1898164->f_1[0]), 3);
	}
}

void func_921(int iParam0, int iParam1, bool bParam2)
{
	if (!func_463(iParam0))
	{
		return;
	}
	func_1487(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_922(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_923(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_924(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_925()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_926(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1488(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_927(int iParam0, int iParam1)
{
	Var0 = { func_929(iParam0, iParam1) };
	Var0.f_3 = func_1489(iParam0, iParam1);
	return Var0;
}

struct<4> func_928(int iParam0, int iParam1)
{
	Var0 = { func_1490(iParam0, iParam1) };
	Var0.f_3 = func_1491(iParam0, iParam1);
	return Var0;
}

Vector3 func_929(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 999.871f, -6743.7f, 58.3177f;
				case 1:
					return 998.168f, -6745.41f, 58.3149f;
				case 2:
					return 999.273f, -6744.66f, 58.4902f;
				case 3:
					return 999.59f, -6747f, 58.3149f;
				case 4:
					return 998.064f, -6744.26f, 58.3149f;
				case 5:
					return 1002.54f, -6741.31f, 58.3151f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 988.0571f, -6745.314f, 63.1256f;
				case 1:
					return 986.8673f, -6747.034f, 63.1254f;
				case 2:
					return 989.9901f, -6751.226f, 63.1256f;
				case 3:
					return 988.3527f, -6750.646f, 63.1256f;
				case 4:
					return 987.6984f, -6749.496f, 63.1256f;
				case 5:
					return 987.1736f, -6748.573f, 63.1254f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 988.4625f, -6744.667f, 63.1256f;
				case 1:
					return 1000.754f, -6748.746f, 63.1236f;
				case 2:
					return 988.707f, -6751.3f, 62.639f;
				case 3:
					return 987.472f, -6748.64f, 62.6728f;
				case 4:
					return 993.7016f, -6746.649f, 63.1256f;
				case 5:
					return 992.0757f, -6737.284f, 63.1304f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 979.799f, -6791.117f, 49.9541f;
				case 1:
					return 978.6192f, -6794.664f, 49.9591f;
				case 2:
					return 987.3079f, -6748.836f, 63.1255f;
				case 3:
					return 988.5287f, -6751.548f, 63.1256f;
				case 4:
					return 980.4997f, -6794.222f, 49.971f;
				case 5:
					return 992.1332f, -6736.974f, 63.1285f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 972.592f, -6762.62f, 43.7952f;
				case 1:
					return 969.378f, -6762.99f, 43.8877f;
				case 2:
					return 987.3424f, -6748.801f, 66.8674f;
				case 3:
					return 988.798f, -6751.403f, 66.8677f;
				case 4:
					return 976.4438f, -6758.357f, 45.5177f;
				case 5:
					return 991.9814f, -6737.028f, 66.8717f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 988.4233f, -6746.622f, 63.1256f;
				case 1:
					return 969.0587f, -6762.982f, 43.8756f;
				case 2:
					return 987.3687f, -6748.817f, 63.1255f;
				case 3:
					return 988.6848f, -6751.418f, 63.1256f;
				case 4:
					return 987.81f, -6747.4f, 63.1256f;
				case 5:
					return 992.1605f, -6736.916f, 63.1281f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 968.7292f, -6762.623f, 43.8779f;
				case 1:
					return 970.9854f, -6764.909f, 43.9193f;
				case 2:
					return 973.0638f, -6765.11f, 43.8143f;
				case 3:
					return 974.5992f, -6764.864f, 43.9399f;
				case 4:
					return 970.048f, -6761.37f, 43.8845f;
				case 5:
					return 974.511f, -6763.205f, 43.8699f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 625.3817f, -7018.664f, 40.5366f;
				case 1:
					return 676.0899f, -6919.074f, 40.5366f;
				case 2:
					return 726.7546f, -6846.882f, 40.5366f;
				case 3:
					return 847.7308f, -6739.971f, 40.5366f;
				case 4:
					return 887.1172f, -6703.393f, 40.5366f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 997.3595f, -6745.451f, 62.7142f;
				case 1:
					return 985.9912f, -6744.869f, 62.715f;
				case 2:
					return 986.5625f, -6744.296f, 62.7164f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 954.5724f, -6777.002f, 40.6879f;
				case 1:
					return 954.3553f, -6772.725f, 40.5835f;
				case 2:
					return 945.8754f, -6764.131f, 40.8204f;
				case 3:
					return 966.3506f, -6703.276f, 40.4444f;
				case 4:
					return 981.6458f, -6710.837f, 40.5734f;
				case 5:
					return 888.4033f, -6779.275f, 40.4485f;
				case 6:
					return 1080.364f, -6769.396f, 40.4499f;
				case 7:
					return 999.421f, -6876.28f, 40.482f;
				case 8:
					return 1078.488f, -6802.413f, 40.5208f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_930(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1492();
	}
	else
	{
		return;
	}
	func_1493();
	Global_40.f_9.f_14 = func_279();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1494())
		{
			func_365(Global_1310720->f_1);
		}
		else if (func_1495() == func_366(Global_36, 1) && func_1496() != 2)
		{
			func_365(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_365(Global_36);
		}
		func_1497(Global_36, &vVar0, &uVar4);
		if (!func_1494())
		{
			if (func_1498(vVar0, Global_36) < func_1498(Global_40.f_9.f_7, Global_36))
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
		func_1497(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_223(Global_1935630, 8192);
	}
	func_1499();
}

bool func_931(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_248(uParam0->f_5423[iVar0]))
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

bool func_932(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_248(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_933(int iParam0, int iParam1, bool bParam2)
{
	if (!func_934(iParam0))
	{
		return;
	}
	func_1500(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_934(int iParam0)
{
	return iParam0 > -1;
}

bool func_935(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_936(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return;
		}
	}
	func_1501(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_937(int iParam0)
{
	func_936(iParam0, 36, 1);
}

void func_938(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return;
		}
	}
	func_1501(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_939(int iParam0, int iParam1)
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
	if (func_387(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_387(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_387(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_387(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_387(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_387(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_387(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_387(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_940(int iParam0, bool bParam1)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1502(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_941(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return false;
		}
	}
	func_1501(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_942(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_486(iParam0))
	{
		iVar1 = func_523(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1503(iParam0);
		}
	}
	if (func_941(iParam0, 5, 1))
	{
		set_ped_config_flag(func_523(iParam0), 137, true);
	}
}

void func_943(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_938(iParam0, 50, 1);
		func_938(iParam0, 48, 1);
		func_938(iParam0, 49, 1);
		func_938(iParam0, 51, 1);
		func_938(iParam0, 52, 1);
		func_938(iParam0, 54, 1);
		func_938(iParam0, 55, 1);
	}
	else
	{
		func_936(iParam0, 50, 1);
		func_936(iParam0, 48, 1);
		func_936(iParam0, 49, 1);
		func_936(iParam0, 51, 1);
		if (bParam3)
		{
			func_936(iParam0, 54, 1);
		}
		else
		{
			func_938(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_936(iParam0, 52, 1);
			if (bParam3)
			{
				func_936(iParam0, 55, 1);
			}
		}
		else
		{
			func_938(iParam0, 52, 1);
			if (!bParam3)
			{
				func_938(iParam0, 55, 1);
			}
		}
	}
}

void func_944(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_523(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_523(iParam0), 204, false);
	}
}

void func_945(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (func_487(iParam0))
	{
		if (!func_252(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_941(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_940(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_523(iParam0);
	if (((does_entity_exist(iVar1) && func_1504(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_936(iParam0, 2, 1);
	}
	else
	{
		func_1505(iParam0);
		func_936(iParam0, 1, 1);
	}
}

void func_946(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_486(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_947(int iParam0)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_948(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_934(iParam1))
	{
		return;
	}
	iVar0 = func_947(iParam1);
	if (func_1506(iParam1))
	{
		if (!func_1507(iParam1))
		{
			return;
		}
	}
	func_938(iParam1, 39, 1);
	func_1508(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1508(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1508(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_936(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1509(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_949(int iParam0)
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

void func_950(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_209(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1510(iVar6);
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

void func_951(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

bool func_952(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

void func_953(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1512(func_1511(255), 109029619));
	}
	else if (func_298())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_980();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_954(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_955(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1512(func_1511(255), 109029619));
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
		else if (func_980())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_956(int iParam0)
{
	iParam0 = func_260(iParam0);
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

float func_957(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_958(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1380(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_954(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_954(iParam0) + 1;
	fVar6 = func_1513(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1514(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_959(int iParam0)
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

void func_960(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_961()
{
	if (func_332())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_962(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1515((Global_40.f_4283.f_325 + iParam0));
}

void func_963(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_961())
	{
		func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_679(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_964(int iParam0)
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

char* func_965(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_966(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_967(int iParam0)
{
	func_975(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_968(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_969(1);
	}
}

void func_969(bool bParam0)
{
	if (bParam0)
	{
		func_1516(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1517(&(Global_40.f_12019.f_42), 1);
	}
}

int func_970(int iParam0)
{
	if (!func_184(iParam0))
	{
		return -15;
	}
	return func_1518(iParam0);
}

bool func_971(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_675(iParam1) || !func_675(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_972(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_973(int iParam0)
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

bool func_974(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_975(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1519(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_976(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_977(int iParam0, int iParam1, bool bParam2)
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

int func_978()
{
	iVar0 = func_529();
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

int func_979(int iParam0)
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
	fVar1 = func_1469(absf(fVar1) < 1f, func_1469(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_980()
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

int func_981(int iParam0)
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

int func_982()
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

void func_983(int iParam0, bool bParam1, int iParam2)
{
	func_1520((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1521(iParam0);
}

void func_984(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1522(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_985(bool bParam0)
{
	bVar3 = false;
	if (func_1523(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1524(iVar5, &iVar2, &iVar0))
			{
				if (!func_549(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1525(iVar2);
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
							if (func_568(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_978() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_978() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1526();
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

char* func_986(int iParam0)
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

bool func_987(int iParam0)
{
	return func_568(iParam0) == -427144552;
}

bool func_988(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_570(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_993(iParam0, &uVar0, 1, 0, 0);
	}
	return func_341(iParam0, 1, 0);
}

void func_989(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_568(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_575(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_576(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_553(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_629(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_990(int iParam0, int iParam1)
{
	if (func_569(iParam0, 58855631))
	{
		func_1140(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_991(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_916(bParam3), iParam0);
}

int func_992(int iParam0, bool bParam1)
{
	if (func_581(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_916(bParam1), iParam0, 0);
}

bool func_993(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1527(&iParam0);
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (!func_577(0))
	{
		bParam3 = true;
	}
	if (func_987(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1124(0) };
			Var4.f_9 = -1591664384;
			if (!func_1016(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1017(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1125(iParam0, 1))
			{
				if (!func_1016(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1017(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1528(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_991(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1529(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_916(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_994(int iParam0, int iParam1)
{
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_568(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_569(iParam0, 1399091007))
	{
		func_1058(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_995(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1530(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1531(&Var0, func_1124(0));
	}
	if (!func_1532(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1068(iVar14);
	return uVar15;
}

int func_996()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_997(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_998(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1533(iParam0);
	fVar1 = func_1534(iParam0);
	if ((Global_1347477->f_117 || !func_571(31)) || !func_1535(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1536(iVar0) >= 7)
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
	func_1537(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_679(_create_var_string(6, func_1538(iParam0), fVar1), "itemtype_textures", func_1539(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_999(int iParam0)
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

int func_1000(int iParam0, int iParam1)
{
	if (!func_1155(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1001(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_564() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1540(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1541(), 12);
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
			else if (func_1040() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1542(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1040(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1543(), 13);
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
			else if (func_1041() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1544(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1041(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1000(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1002(int iParam0, int iParam1, int iParam2)
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

bool func_1003(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1004(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1005(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1545(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_341(iVar2, 1, 0) || func_1547(func_1546(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1009(func_1545(iVar0))), func_1009(func_1545(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1040() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1548(iVar0)), func_1548(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1542() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1548(iVar0)), func_1548(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1548(iVar0)), func_1548(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1051(iParam3, func_1549(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1047(iVar2) - iParam7) >= func_1000(iParam3, func_1550(iVar0));
				}
				else
				{
					bVar1 = func_1047(iVar2) >= func_1000(iParam3, func_1550(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1047(iVar2) + iParam7) >= func_1000(iParam3, func_1550(iVar0));
			}
			else
			{
				bVar1 = func_1047(iVar2) >= func_1000(iParam3, func_1550(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1551(iVar2)), func_1551(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1552(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1553(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1553(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1041() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1554(iVar0)), func_1554(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1544() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1554(iVar0)), func_1554(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1554(iVar0)), func_1554(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1051(iParam3, func_1549(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1047(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1555(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1555(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1556(iVar2)), func_1556(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1006(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1543() >= 13)
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

bool func_1007(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_184(func_197(0)) && ((func_1557(0) == 1 || func_1557(0) == 8) || func_1557(0) == 6))
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

var func_1008(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1009(int iParam0)
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

bool func_1010(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1011(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1012(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1013(int iParam0)
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
			func_1558(1);
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
			func_1559(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1559(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1559(3);
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
			func_1560(1);
			break;
		case 34:
			func_1561(1);
			break;
		case 35:
			func_1562(1);
			break;
		case 36:
			break;
		case 37:
			func_1563(0);
			break;
		case 38:
			func_1564(0);
			break;
		case 39:
			func_1565(0);
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
			if ((!&Global_1879534 && func_391()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_319(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_391()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_319(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_391()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_319(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_391()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_686("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				if (!func_1081(99217379) || func_1566(99217379) == 2110595215)
				{
					if (func_980())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_341(iVar0, 1, 0))
					{
						func_622(iVar0, 1, 752097756);
					}
					func_601(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_622(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_622(1013902307, 1, 752097756);
				}
				if (!func_341(142640135, 1, 0))
				{
					func_622(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_622(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_622(786809402, 1, 752097756);
				}
				if (!func_341(-518019409, 1, 0))
				{
					func_622(-518019409, 1, 752097756);
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
			func_1567();
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

bool func_1014(int iParam0)
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

int func_1015(int iParam0, int iParam1)
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

bool func_1016(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1529(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1017(int iParam0, var uParam1, int iParam2)
{
	if (func_1568(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1018(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_549(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_916(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1019(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1569(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1128(*uParam1, &Var0, bParam6, 0))
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
	if (!func_577(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_916(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1020(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1570(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1021(int iParam0)
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
	iVar2 = func_279();
	func_328(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1022(int iParam0)
{
	if (func_1571(iParam0))
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

bool func_1023(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1024(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1025(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_571(50))
			{
				if (!func_571(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_571(51))
			{
				if (!func_571(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1026(int iParam0, int iParam1, var uParam2)
{
	if (!func_549(iParam1, 0))
	{
		return false;
	}
	if (func_568(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_573(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_647(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_569(iParam1, 866047851))
	{
		iVar5 = func_648(iVar4, 1);
		if (func_1572(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_573(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_569(iParam1, -1638171711))
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
			if (func_1573(1868067663, &uVar0))
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
				iVar10 = func_1574(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1574(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_573(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_569(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1575(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1027()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1028()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1029()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_341(func_1576(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1030(int iParam0)
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

bool func_1031(int iParam0, int iParam1)
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

int func_1032(int iParam0)
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

bool func_1033(int iParam0, int iParam1)
{
	iVar0 = func_1577(iParam0);
	if (iVar0 != -15)
	{
		func_328(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_676(iVar0, 1);
	}
	return false;
}

void func_1034(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1035(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1036(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1037(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1038(int iParam0)
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
	iVar1 = func_1047(iVar9);
	iVar2 = func_1047(iVar10);
	iVar3 = func_1047(iVar11);
	iVar5 = func_1048(iVar9);
	iVar6 = func_1048(iVar10);
	iVar7 = func_1048(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1047(iVar12);
		iVar8 = func_1048(iVar12);
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

void func_1039(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1040()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1578(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1041()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1042(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1555(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1555(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1555(iVar0))
		{
			*sParam2++;
		}
		if (func_1555(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1555(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1555(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1555(iVar0))
		{
			*sParam2++;
		}
		if (func_1555(iVar1))
		{
			*sParam2++;
		}
		if (func_1555(iVar0) && func_1555(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1555(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1555(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1555(iVar0))
		{
			*sParam2++;
		}
		if (func_1555(iVar1))
		{
			*sParam2++;
		}
		if (func_1555(iVar2))
		{
			*sParam2++;
		}
		if ((func_1555(iVar0) && func_1555(iVar1)) && func_1555(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1555(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1555(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1555(iVar0))
		{
			*sParam2++;
		}
		if (func_1555(iVar1))
		{
			*sParam2++;
		}
		if (func_1555(iVar2))
		{
			*sParam2++;
		}
		if (func_1555(iVar3))
		{
			*sParam2++;
		}
		if (((func_1555(iVar0) && func_1555(iVar1)) && func_1555(iVar2)) && func_1555(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1043(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1579(1497516462);
			func_1580(2016141805);
			func_1580(1010885152);
			func_1580(-502324015);
			break;
		case 2016141805:
			func_1580(1497516462);
			func_1579(2016141805);
			func_1580(1010885152);
			func_1580(-502324015);
			break;
		case 1010885152:
			func_1580(1497516462);
			func_1580(2016141805);
			func_1579(1010885152);
			func_1580(-502324015);
			break;
		case -502324015:
			func_1580(1497516462);
			func_1580(2016141805);
			func_1580(1010885152);
			func_1579(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1580(-538889627);
			func_1580(-538880323);
			func_1580(-1056767524);
			func_1579(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1581();
			func_1579(iParam0);
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
			func_1582();
			func_1579(iParam0);
			break;
		case 2019386373:
			func_1580(-664252410);
			func_1580(2109952320);
			func_1579(2019386373);
			break;
		case -664252410:
			func_1580(2019386373);
			func_1580(2109952320);
			func_1579(-664252410);
			break;
		case 2109952320:
			func_1580(2019386373);
			func_1580(-664252410);
			func_1579(2109952320);
			break;
		case -1674179981:
			func_1580(-1835851517);
			func_1580(-1838352012);
			func_1579(-1674179981);
			break;
		case -1835851517:
			func_1580(-1674179981);
			func_1580(-1838352012);
			func_1579(-1835851517);
			break;
		case -1838352012:
			func_1580(-1674179981);
			func_1580(-1835851517);
			func_1579(-1838352012);
			break;
		case -1717960576:
			func_1580(210001842);
			func_1579(-1717960576);
			break;
		case 210001842:
			func_1580(-1717960576);
			func_1579(210001842);
			break;
		case -150493654:
			func_1580(-1271608261);
			func_1580(1846061697);
			func_1580(-1145519186);
			func_1579(-150493654);
			break;
		case -1271608261:
			func_1580(-150493654);
			func_1580(1846061697);
			func_1580(-1145519186);
			func_1579(-1271608261);
			break;
		case 1846061697:
			func_1580(-150493654);
			func_1580(-1271608261);
			func_1580(-1145519186);
			func_1579(1846061697);
			break;
		case -1145519186:
			func_1580(-150493654);
			func_1580(-1271608261);
			func_1580(1846061697);
			func_1579(-1145519186);
			break;
		case 1766284049:
			func_1580(280705402);
			func_1580(1926308480);
			func_1579(1766284049);
			break;
		case 280705402:
			func_1580(1766284049);
			func_1580(1926308480);
			func_1579(280705402);
			break;
		case 1926308480:
			func_1580(1766284049);
			func_1580(280705402);
			func_1579(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1580(439465264);
				func_1579(1609506757);
			}
			else
			{
				func_1580(1609506757);
				func_1580(439465264);
			}
			break;
		case 439465264:
			if (func_456(1609506757))
			{
				if (bParam1)
				{
					func_1579(439465264);
				}
				else
				{
					func_1580(439465264);
				}
			}
			break;
		case 1822001510:
			func_1580(-1612662716);
			func_1579(1822001510);
			break;
		case -1612662716:
			func_1580(1822001510);
			func_1579(-1612662716);
			break;
		case 1306158345:
			func_1580(1952610440);
			func_1580(-223469678);
			func_1580(-404698347);
			func_1580(1517904467);
			func_1579(1306158345);
			break;
		case 1952610440:
			func_1580(1306158345);
			func_1580(-223469678);
			func_1580(-404698347);
			func_1580(1517904467);
			func_1579(1952610440);
			break;
		case -223469678:
			func_1580(1306158345);
			func_1580(1952610440);
			func_1580(-404698347);
			func_1580(1517904467);
			func_1579(-223469678);
			break;
		case -404698347:
			func_1580(1306158345);
			func_1580(1952610440);
			func_1580(-223469678);
			func_1580(1517904467);
			func_1579(-404698347);
			break;
		case 1517904467:
			func_1580(1306158345);
			func_1580(1952610440);
			func_1580(-223469678);
			func_1580(-404698347);
			func_1579(1517904467);
			break;
		case 1376646519:
			func_1580(931649776);
			func_1580(-434590080);
			func_1580(1743048395);
			func_1580(449774763);
			func_1579(1376646519);
			break;
		case 931649776:
			func_1580(1376646519);
			func_1580(-434590080);
			func_1580(1743048395);
			func_1580(449774763);
			func_1579(931649776);
			break;
		case -434590080:
			func_1580(1376646519);
			func_1580(931649776);
			func_1580(1743048395);
			func_1580(449774763);
			func_1579(-434590080);
			break;
		case 1743048395:
			func_1580(1376646519);
			func_1580(931649776);
			func_1580(-434590080);
			func_1580(449774763);
			func_1579(1743048395);
			break;
		case 449774763:
			func_1580(1376646519);
			func_1580(931649776);
			func_1580(-434590080);
			func_1580(1743048395);
			func_1579(449774763);
			break;
		case -1414537028:
			func_1580(38162571);
			func_1580(1350391819);
			func_1580(54073871);
			func_1579(-1414537028);
			break;
		case 38162571:
			func_1580(-1414537028);
			func_1580(1350391819);
			func_1580(54073871);
			func_1579(38162571);
			break;
		case 1350391819:
			func_1580(-1414537028);
			func_1580(38162571);
			func_1580(54073871);
			func_1579(1350391819);
			break;
		case 54073871:
			func_1580(-1414537028);
			func_1580(38162571);
			func_1580(1350391819);
			func_1579(54073871);
			break;
		case 198200492:
			func_1579(198200492);
			func_1580(-1124061431);
			func_1580(52706132);
			func_1580(-259123672);
			break;
		case -1124061431:
			func_1580(198200492);
			func_1579(-1124061431);
			func_1580(52706132);
			func_1580(-259123672);
			break;
		case 52706132:
			func_1580(198200492);
			func_1580(-1124061431);
			func_1579(52706132);
			func_1580(-259123672);
			break;
		case -259123672:
			func_1580(198200492);
			func_1580(-1124061431);
			func_1580(52706132);
			func_1579(-259123672);
			break;
		case -919512195:
			func_1579(-919512195);
			func_1580(-1925798111);
			func_1580(420709909);
			func_1580(1703426636);
			break;
		case -1925798111:
			func_1579(-1925798111);
			func_1580(-919512195);
			func_1580(420709909);
			func_1580(1703426636);
			break;
		case 420709909:
			func_1579(420709909);
			func_1580(-919512195);
			func_1580(-1925798111);
			func_1580(1703426636);
			break;
		case 1703426636:
			func_1579(1703426636);
			func_1580(-919512195);
			func_1580(-1925798111);
			func_1580(420709909);
			break;
		case -1223121209:
			func_1579(-1223121209);
			func_1580(630808005);
			break;
		case 630808005:
			func_1579(630808005);
			func_1580(-1223121209);
			break;
		case 1453909576:
			func_1579(1453909576);
			func_1580(1643531967);
			break;
		case 1643531967:
			func_1579(1643531967);
			func_1580(1453909576);
			break;
		case 0:
			func_1579(0);
			func_1580(473295046);
			func_1580(-1738165526);
			break;
		case 473295046:
			func_1579(473295046);
			func_1580(0);
			func_1580(-1738165526);
			break;
		case -1738165526:
			func_1579(-1738165526);
			func_1580(0);
			func_1580(473295046);
			break;
		case 932909855:
			func_1579(932909855);
			func_1580(2051822093);
			break;
		case 2051822093:
			func_1579(2051822093);
			func_1580(932909855);
			break;
		case 405586984:
			func_1579(405586984);
			func_1580(1509509592);
			func_1580(-959357075);
			func_1580(-1311865656);
			break;
		case 1509509592:
			func_1579(1509509592);
			func_1580(405586984);
			func_1580(-959357075);
			func_1580(-1311865656);
			break;
		case -959357075:
			func_1579(-959357075);
			func_1580(1509509592);
			func_1580(405586984);
			func_1580(-1311865656);
			break;
		case -1311865656:
			func_1579(-1311865656);
			func_1580(1509509592);
			func_1580(-959357075);
			func_1580(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1579(-524145696);
			}
			else
			{
				func_1580(-524145696);
			}
			func_1580(1626481264);
			func_1580(282809459);
			break;
		case 282809459:
			func_1579(282809459);
			func_1580(1626481264);
			func_1580(-524145696);
			break;
		case 1626481264:
			func_1579(1626481264);
			func_1580(-524145696);
			func_1580(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1579(885203519);
			}
			else
			{
				func_1580(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1579(-1080627546);
			}
			else
			{
				func_1580(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_456(iParam0))
				{
					func_1579(iParam0);
				}
			}
			else if (func_456(iParam0))
			{
				func_1580(iParam0);
			}
			break;
	}
}

void func_1044(int iParam0)
{
	if (!func_1583(iParam0))
	{
		func_1585(func_1584(iParam0));
	}
}

int func_1045()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1583(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1046(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1047(iVar9);
	iVar2 = func_1047(iVar10);
	iVar3 = func_1047(iVar11);
	iVar5 = func_1048(iVar9);
	iVar6 = func_1048(iVar10);
	iVar7 = func_1048(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1047(iVar12);
		iVar8 = func_1048(iVar12);
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

int func_1047(int iParam0)
{
	if (func_341(iParam0, 1, 0))
	{
		iVar0 = func_553(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1048(int iParam0)
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

int func_1049(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1050(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1051(int iParam0, int iParam1)
{
	if (!func_1155(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1052(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1051(iParam1, 5) || iParam0 == func_1051(iParam1, 6)) || iParam0 == func_1051(iParam1, 7)) || iParam0 == func_1051(iParam1, 8)) || iParam0 == func_1051(iParam1, 9))
	{
		func_1042(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_565(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_567(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1053(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1051(iParam1, 5) || iParam0 == func_1051(iParam1, 6)) || iParam0 == func_1051(iParam1, 7)) || iParam0 == func_1051(iParam1, 8)) || iParam0 == func_1051(iParam1, 9))
	{
		if (func_1042(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_565(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_567(51, 0, 0, iVar0, func_1000(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_565(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_567(51, 0, 0, iVar0, func_1000(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1054()
{
	if (func_185((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1055(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1056(int iParam0)
{
	if (!func_1586(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1057(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1058(int iParam0, int iParam1, var uParam2)
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

bool func_1059(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1587();
	if (iParam2 == 39)
	{
		Var0 = { func_660(iParam0, 1, 0) };
		iParam2 = func_648(func_661(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_569(iParam0, 866047851) && func_1572(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1061(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1588(func_1129(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1589(iParam2);
	func_1590(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1110(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1110(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1116(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1591(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1592(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1592(&(Global_1946804->f_1378), 1, 0);
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
				func_1337(func_1129(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1060(bool bParam0, bool bParam1, bool bParam2)
{
	func_1593(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1061(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1062()
{
	func_1594(&(Global_1946804->f_2776));
	func_1595(32768);
	func_1337(1108822547, 8, 6);
}

int func_1063(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_648(iParam0, 1);
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

void func_1064(int iParam0)
{
	if (func_1596(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1597(Var0);
}

void func_1065(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1597(Var0);
}

bool func_1066(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_916(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1067(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1068(int iParam0)
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

float func_1069()
{
	if (func_1598())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1599(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1599(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1600();
	fVar2 = func_1601();
	fVar3 = func_1602();
	fVar4 = func_1603();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1604()));
	fVar7 = (func_1599(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1605(3, round((to_float(iVar8) * fVar10)), 0);
	func_1606(3, fVar9, fVar9 > 100f);
	return func_1607(fVar7, -100f, 100f);
}

float func_1070()
{
	if (func_1598())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1599(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1599(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1600();
	fVar2 = func_1601();
	fVar3 = func_1602();
	fVar4 = func_1603();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1604()));
	fVar7 = (func_1599(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1605(2, round((to_float(iVar8) * fVar10)), 0);
	func_1606(2, fVar9, fVar9 > 100f);
	return func_1607(fVar7, -100f, 100f);
}

float func_1071()
{
	if (func_1598())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1599(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1608())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1609())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1599(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1600();
	fVar2 = func_1601();
	fVar3 = func_1602();
	fVar4 = func_1603();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1604()));
	fVar7 = (func_1599(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1605(1, round((to_float(iVar8) * fVar10)), 0);
	func_1606(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1599(0);
	}
	return func_1607(fVar7, -100f, 100f);
}

bool func_1072(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1073(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1074(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_549(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_993(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_577(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_916(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1075(int iParam0, bool bParam1)
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
				return func_1610();
			}
			break;
	}
	return 0;
}

int func_1076(int iParam0)
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

bool func_1077(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1078(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1077(iParam0))
	{
		return;
	}
	if (func_1611(iParam0))
	{
		return;
	}
	if (!func_1612(iParam0))
	{
		func_1613(iParam0, 1, 0);
	}
	iVar0 = func_1614(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1615(iParam0, 512))
		{
			func_659(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_208() && !bParam1) && !func_191(0, 0, 1))
	{
		func_688(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1616(iParam0, 6);
	if (bParam2)
	{
		if (!func_191(0, 0, 1))
		{
			func_361(1, 4);
		}
	}
}

bool func_1079(int iParam0, bool bParam1)
{
	return func_1075(iParam0, 0) < func_1617(iParam0, bParam1);
}

bool func_1080(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_573(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1081(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_648(iParam0, 1)] != &Global_1946804->f_57[func_648(iParam0, 1)];
}

void func_1082(int iParam0, int iParam1)
{
	if (func_569(iParam1, 130796156))
	{
		func_1618(iParam1, 0);
	}
	else if (func_569(iParam1, 930141731))
	{
		func_1618(iParam1, 1);
		func_1619(iParam0);
	}
}

void func_1083(var uParam0, int iParam1)
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

int func_1084(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1620(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1621(uParam2, iParam0, Var1);
	return 1;
}

int func_1085(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1086(int iParam0)
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

int func_1087(int iParam0)
{
	if (!func_1622(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1088()
{
	return !&Global_1911774;
}

void func_1089(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1090(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1091(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1092(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1093(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1623(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1094(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1623(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1095(bool bParam0)
{
	if (bParam0)
	{
		func_312(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1096();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1624(2032023096);
		func_315(-615217896);
		func_644(655868243, 1, 1, -142743235, 1);
		func_1626(146323340, func_1625());
		Var0 = { func_1388() };
		if (func_1627(&Var0) == -1387633835)
		{
			func_1628(&Var0);
			func_1629(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1630(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1381(iVar6) == 2010625508)
			{
				func_1631(iVar6, iVar7);
				func_1632(iVar6, iVar8);
				func_1633(iVar6, iVar9);
				func_1634(iVar6, 0);
				if (func_1635(iVar6))
				{
					func_1636(iVar6);
				}
				iVar10 = func_1637(iVar8);
				func_1638(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1096()
{
	if (!func_1639(-1898635967, func_1625(), 1))
	{
		return 0;
	}
	if (func_332())
	{
		if (!func_1639(146323340, func_1625(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1097()
{
	func_326(34411519);
	func_326(834124286);
	func_326(-570967010);
}

void func_1098(bool bParam0)
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
		func_644(-1080874779, 3, 1, -142743235, 1);
		func_644(-223790555, 3, 1, -142743235, 1);
		func_644(1566032147, 3, 1, -142743235, 1);
		func_644(891311852, 5, 1, -142743235, 1);
		func_644(-1353737667, 5, 1, -142743235, 1);
		func_644(-330313895, 5, 1, -142743235, 1);
		func_644(-2051332199, 5, 1, -142743235, 1);
		func_644(1237770824, 5, 1, -142743235, 1);
		func_644(-1795542128, 3, 1, -142743235, 1);
		func_644(-1757588258, 3, 1, -142743235, 1);
		func_644(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1630(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1381(iVar0) == 153881023)
			{
				func_1631(iVar0, iVar1);
				func_1632(iVar0, iVar2);
				func_1633(iVar0, iVar3);
				func_1634(iVar0, 0);
				if (func_1635(iVar0))
				{
					func_1636(iVar0);
				}
				iVar4 = func_1637(iVar2);
				func_1638(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1096();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1099(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1640(iParam0);
	if (bParam3)
	{
		func_687(iParam0, sParam1, iParam2);
	}
}

bool func_1100(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1101(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1102()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1066("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1067(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1017(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1068(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1068(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1103(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1641(Param1, iParam5, &Var5, 0))
	{
		func_1019(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1074(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1642(Var19, 1);
}

bool func_1104(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1530(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1531(&Var0, func_1124(0));
	}
	if (!func_1532(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1067(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1019(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1068(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1105(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_549(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_660(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1643(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1018(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1019(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1106(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_569(iParam0, 606799272))
		{
			func_1644(iParam0, iParam1);
		}
		if (func_569(iParam0, -1112814642) && func_569(iParam0, -1697809989))
		{
			func_597(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1107(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1645(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_573(iParam0) != -999503751)
		{
			func_1646(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_573(iParam0) != -999503751)
	{
		func_1646(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1647(iParam0, 1);
	return 1;
}

void func_1108()
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

void func_1109(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1648(0);
	}
	if (bParam0)
	{
		func_1121(8);
		func_1121(512);
	}
	else
	{
		func_1121(8);
		func_1121(16);
	}
}

void func_1110(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1111(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_650();
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

int func_1112(int iParam0)
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

void func_1113(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1649(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1129(iVar0, 1);
			if (func_1334(iVar0, iParam1))
			{
				vVar4 = { func_652(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1333(iVar7, 4))
				{
					func_1337(iVar7, 4, 6);
				}
			}
			else
			{
				func_1336(iVar7, 4, 6);
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

bool func_1114(int iParam0)
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
	func_1650(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1115(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1116(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_573(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1334(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1590(iVar1, iVar3);
		}
	}
	if (func_1081(-1586649372) && func_1334(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1590(iVar1, iVar3);
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
						func_1590(iVar1, iVar3);
					}
				}
			}
			func_1651(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1651(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1590(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1651(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1590(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1590(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1651(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1651(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1590(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1651(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1590(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1590(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1590(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1575(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1590(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_569(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1590(iVar1, iVar3);
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
						func_1590(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1575(&(Global_1946804->f_1497.f_1[iVar1])) || func_569(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1590(iVar1, iVar3);
					}
				}
			}
			switch (func_573(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_573(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1590(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_573(&(uParam0->f_1[iVar1])) || func_569(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1590(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1117(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1118(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1072(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1072(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1119(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1072(iParam0, 65536) && !func_1072(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1072(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1072(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1120()
{
	return Global_1905944->f_5694;
}

void func_1121(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1122(struct<4> Param0)
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
			if (func_1652(Param0))
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
			func_1653(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1121(8);
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
			if (func_1652(Param0))
			{
				return;
			}
			func_1653(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1121(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1065(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1123(bool bParam0)
{
	return func_1018(1328661203, func_1654(), -1591664384, bParam0);
}

struct<4> func_1124(bool bParam0)
{
	iVar0 = func_916(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1018(923904168, func_1123(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1018(923904168, func_1123(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1018(923904168, func_1123(bParam0), -740156546, 0);
}

bool func_1125(int iParam0, bool bParam1)
{
	if (func_573(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_571(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1126(bool bParam0)
{
	iVar0 = func_916(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1018(271701509, func_1123(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1018(271701509, func_1123(bParam0), 12999093, 0);
}

bool func_1127(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_573(iParam0);
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

bool func_1128(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_916(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1129(int iParam0, int iParam1)
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

int func_1130(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1131(int iParam0, int iParam1)
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

void func_1132(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1133(int iParam0, int iParam1)
{
	iVar0 = func_668(*iParam0);
	iVar1 = func_667(*iParam0);
	if (iParam1 < 1 || iParam1 > func_673(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1134(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1135(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1136(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1137(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1138(int iParam0)
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

bool func_1139(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_987(iParam0))
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

int func_1140(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_549(iParam0, 0))
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

int func_1141(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1527(&iParam0);
	if (!func_549(iParam0, 0))
	{
		return 0;
	}
	if (!func_577(0))
	{
		bParam2 = true;
	}
	iVar0 = func_991(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1529(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_916(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1142(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_569(iParam0, -5284486))
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
		if (func_1655(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_630(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_633(iVar62, iVar61);
					if (func_549(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1142(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1142(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1655(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1143(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1656(1);
}

void func_1144(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1657(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1657(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1145()
{
	return Global_40.f_4283.f_325;
}

bool func_1146(int iParam0)
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

bool func_1147(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1148(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1149(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1150(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1151(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1152(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_391();
	bVar1 = false;
	if (bVar0 && !func_1658(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1658(37)) && !func_1658(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1658(43)) && !func_1658(44))
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
		if (func_1382(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1382(1) == 1)
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

int func_1153()
{
	return Global_40.f_1095.f_3054;
}

bool func_1154(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_1155(int iParam0, var uParam1)
{
	if (!func_1659(iParam0))
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

int func_1156()
{
	if (func_391())
	{
		if (!func_1658(3))
		{
			return func_1660(43);
		}
		if (func_1658(38) && !func_1658(43))
		{
			return func_1661(8);
		}
	}
	return 0;
}

bool func_1157(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1662(iParam0));
}

Vector3 func_1158(int iParam0, int iParam1)
{
	func_1155(15, &Var0);
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

int func_1159(int iParam0, int iParam1)
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
	iVar0 = func_1663(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1155(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1664(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1160(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1665(iParam0);
	if (func_456(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1161(int iParam0)
{
	if (!func_1155(15, &Var0))
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

bool func_1162(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1666(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1667(5))
	{
		if (func_1668(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1375(vParam0);
	if (bParam6)
	{
		iVar1 = func_366(vParam0, 1);
		if (func_116(iVar1) || func_1669(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1670(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1671())
	{
		if (func_1672(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1673(iVar0))
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
	if (!func_1674(iParam3, iParam4))
	{
		return false;
	}
	if (func_1675(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1676(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_391())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1677(vParam0, bParam10) || func_1678(vParam0, bParam10))
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

int func_1163(vector3 vParam0)
{
	iVar0 = func_1679(vParam0, 0f, 0f, 0, 2);
	return func_1679(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1164(int iParam0)
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

char* func_1165(int iParam0)
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
	return func_1346(iVar0);
}

char* func_1166(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1680(iVar0);
}

char* func_1167(int iParam0)
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

void func_1168(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1448(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 62131;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1169(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1448(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1170(var uParam0, char[4] cParam1)
{
	func_1202(&(uParam0->f_7375), cParam1);
	func_374(uParam0, 33554432);
}

bool func_1171(var uParam0)
{
	switch (&iLocal_2369[0])
	{
		case 0:
			if (!func_384(uParam0) == 0)
			{
				func_858(4, 0);
				func_858(5, 0);
				func_858(6, 0);
				func_858(7, 0);
				func_858(8, 0);
			}
			iLocal_2369[0] = 1;
			break;
		case 1:
			func_1681(&(uParam0->f_7375));
			func_415(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[2]), "Dutch", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[4]), "MicahBell", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[5]), "BillWilliamson", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[3]), "Hercule", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[6]), "Leon", 0, 0, 0, 0);
			if (func_384(uParam0) == 2)
			{
				func_415(uParam0, &(iLocal_1233[4]), "p_barstool01x", 0, 0, 0, 0);
				func_415(uParam0, &(iLocal_1233[5]), "p_chair02x", 0, 0, 0, 0);
				func_415(uParam0, &(iLocal_1233[6]), "p_chair02x^1", 0, 0, 0, 0);
				func_415(uParam0, &(iLocal_1233[7]), "p_chair02x^2", 0, 0, 0, 0);
				func_415(uParam0, &(iLocal_1233[8]), "p_chair02x^3", 0, 0, 0, 0);
			}
			iLocal_2369[0] = 2;
			return true;
	}
	return false;
}

void func_1172(var uParam0, int iParam1)
{
	func_722(&(uParam0->f_7375), iParam1);
}

void func_1173(var uParam0, int iParam1)
{
	func_1330(&(uParam0->f_7375), iParam1, 1);
}

void func_1174(var uParam0, int iParam1)
{
	vVar0 = { _0xf70f00013a62f866(*uParam0) };
	vVar3 = { _0x18675bc914891122(*uParam0) };
	vVar6 = { _0x3e2a25b2416dd67e(*uParam0) };
	_delete_volume(*uParam0);
	*uParam0 = _0x0eb78c2b156635b1(iParam1, vVar0, vVar3, vVar6);
}

void func_1175(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_1248(600328988, 1, 0f, 0, 0, 0, 0, 0);
		func_1248(917663984, 1, 0f, 0, 0, 0, 0, 0);
	}
	else if (bParam1)
	{
		func_1248(600328988, 0, -1f, 0, 0, 0, 0, 0);
		func_1248(917663984, 0, 1f, 0, 0, 0, 0, 0);
	}
	else
	{
		func_1248(600328988, 0, 0f, 0, 0, 0, 0, 0);
		func_1248(917663984, 0, 0f, 0, 0, 0, 0, 0);
	}
}

struct<7> func_1176(int iParam0)
{
	Var0.f_6 = -1;
	switch (iParam0)
	{
		case 0:
			Var0 = { 987.09f, -6742.96f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, 12f };
			Var0.f_6 = 13;
			break;
		case 1:
			Var0 = { 987.32f, -6742.9f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, 160f };
			Var0.f_6 = 13;
			break;
		case 2:
			Var0 = { 987.61f, -6742.79f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, -120f };
			Var0.f_6 = 13;
			break;
		case 3:
			Var0 = { 987.61f, -6742.71f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, -160f };
			Var0.f_6 = 13;
			break;
		case 4:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 11;
			break;
		case 5:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 6:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 7:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 8:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 9:
			Var0 = { 988.202f, -6751.43f, 62.45f };
			Var0.f_3 = { -3.81206f, -103.293f, 53.6641f };
			break;
		case 11:
			Var0 = { 994.3016f, -6736.557f, 58.3216f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 14;
			break;
		case 10:
			Var0 = { 1000.47f, -6740.11f, 58.113f };
			Var0.f_3 = { 0f, 0f, 90f };
			Var0.f_6 = 14;
			break;
		case 13:
			Var0 = { 926f, -6794.8f, 55.6f };
			Var0.f_3 = { 982.1f, -6792.7f, 50f };
			Var0.f_6 = 15;
			break;
		case 14:
			Var0 = { 988.0254f, -6775.195f, 48.95f };
			Var0.f_3 = { 0f, 0f, -23f };
			Var0.f_6 = 19;
			break;
		case 15:
			Var0 = { 988.9224f, -6773.737f, 48.96f };
			Var0.f_3 = { 0f, 0f, -37f };
			Var0.f_6 = 16;
			break;
		case 16:
			Var0 = { 988.7167f, -6773.537f, 48.861f };
			Var0.f_3 = { 0f, 0f, -73f };
			Var0.f_6 = 17;
			break;
		case 17:
			Var0 = { 988.5262f, -6773.706f, 48.901f };
			Var0.f_3 = { -90f, 0f, -136f };
			Var0.f_6 = 18;
			break;
		case 18:
			Var0 = { 988.5623f, -6773.542f, 48.875f };
			Var0.f_3 = { -36f, 0f, -71f };
			Var0.f_6 = 18;
			break;
		case 19:
		case 21:
		case 23:
		case 25:
		case 27:
		case 29:
			Var0 = { 0f, 2.675f, 0.425f };
			Var0.f_3 = { 0f, 0f, 54.72f };
			Var0.f_6 = 14;
			break;
		case 20:
		case 22:
		case 24:
		case 26:
		case 28:
		case 30:
			Var0 = { -0.475f, -2.75f, 0.125f };
			Var0.f_3 = { 0f, 0f, 54.72f };
			Var0.f_6 = 14;
			break;
	}
	return Var0;
}

void func_1177(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_164(12))
			{
				if (get_clock_hours() == 18)
				{
					pause_clock(true, 0);
					func_849(12);
				}
			}
			break;
		case 4:
			if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(Global_35, true, false), &iVar0))
			{
				if (waypoint_recording_get_num_points(func_438(32), &iVar3))
				{
					fVar1 = get_waypoint_distance_along_route(func_438(32), (iVar3 - 1));
					fVar2 = get_waypoint_distance_along_route(func_438(32), iVar0);
				}
				fLocal_2300 = func_1607((fVar2 / fVar1), 0f, 1f);
				func_1682(19, 0, fVar2297, &uLocal_2288);
			}
			break;
		case 5:
			break;
	}
}

void func_1178(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1262)
	{
		if ((Local_1265[iVar0]->f_12 && func_1341(func_33(uParam0))) != 0)
		{
			switch (Local_1265[iVar0]->f_1)
			{
				case 1:
					if (func_1683(uParam0))
					{
						func_524(&(Local_1265[iVar0]->f_2));
						Local_1265[iVar0]->f_1 = 3;
					}
					else
					{
						if (Local_1265[iVar0] & 2 != 0)
						{
							if (!does_entity_exist(Local_1265[iVar0]->f_7))
							{
								return;
							}
						}
						if (Local_1265[iVar0] & 4 != 0)
						{
							if (!func_26(&(Local_1265[iVar0]->f_2)))
							{
								func_27(&(Local_1265[iVar0]->f_2), 0);
							}
							if (func_845(&(Local_1265[iVar0]->f_2)) >= Local_1265[iVar0]->f_5)
							{
								func_524(&(Local_1265[iVar0]->f_2));
								Local_1265[iVar0]->f_1 = 4;
							}
						}
						if (Local_1265[iVar0] & 1 != 0)
						{
							if (func_1181(Global_35, Local_1265[iVar0]->f_8, 1) >= Local_1265[iVar0]->f_6)
							{
								Local_1265[iVar0]->f_1 = 4;
							}
						}
						if (Local_1265[iVar0] & 2 != 0)
						{
							if (func_835(Global_35, Local_1265[iVar0]->f_7, 1, 1) >= Local_1265[iVar0]->f_6)
							{
								Local_1265[iVar0]->f_1 = 4;
							}
						}
						Jump @385; //curOff = 337
						if (iVar2108 == 0)
						{
							func_524(&(Local_1265[iVar0]->f_2));
							iLocal_2111 = Local_1265[iVar0]->f_11;
							Local_1265[iVar0]->f_1 = 5;
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1179()
{
	if (func_26(vLocal_1569[4]))
	{
		switch (iVar2140)
		{
			case 0:
				func_1200(1021.8f, -6743.7f, 68.2f, 36f);
				_0x09e378c52b1433b5(Global_35, 1000.3f, -6749.5f, 62.9f, 10f);
				uLocal_2142 = iVar2140 + 1;
				break;
			case 1:
				if (func_845(vLocal_1569[4]) >= 0.2f)
				{
					func_1200(1003.1f, -6745.4f, 66.8f, 36f);
					uLocal_2142 = iVar2140 + 1;
				}
				break;
			case 2:
				if (func_845(vLocal_1569[4]) >= 0.6f)
				{
					func_1200(1001.1f, -6725f, 65.3f, 36f);
					uLocal_2142 = iVar2140 + 1;
				}
				break;
			case 3:
				if (func_845(vLocal_1569[4]) >= 1.2f)
				{
					func_1200(994.9f, -6755.5f, 56.1f, 42f);
					uLocal_2142 = iVar2140 + 1;
				}
				break;
		}
	}
}

bool func_1180(int iParam0, int iParam1)
{
	return ((get_frame_count() + iParam1) % iParam0) == 0;
}

float func_1181(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_1182(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar1261)
	{
		Local_1265[iVar0]->f_1 = 0;
		func_524(&(Local_1265[iVar0]->f_2));
		iVar0++;
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_1684(uParam0, func_1190(Local_1265[iParam1]->f_11), -1082130432, 0, 0, -1, -1, 0);
	func_524(&(Local_1265[iParam1]->f_2));
	Local_1265[iParam1]->f_1 = 1;
}

int func_1183(var uParam0)
{
	return uParam0->f_598;
}

void func_1184(int iParam0)
{
	iLocal_2113 = iParam0;
}

void func_1185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_1448[iParam0] = func_1273(408396114, 988.9269f, -6747.51f, 65.8677f, 1);
			set_blip_name_from_text_file(&(iLocal_1448[iParam0]), func_1190(6));
			break;
		default:
			break;
	}
}

void func_1186()
{
	if (does_pickup_exist(iVar2133))
	{
		remove_pickup(iVar2133);
	}
	if (&iLocal_1452[0] == -506285289)
	{
		iVar0 = -1973091726;
	}
	else if (&iLocal_1452[0] == 1402226560)
	{
		iVar0 = 1875878693;
	}
	iLocal_2135 = create_pickup_rotate(iVar0, vLocal_2136, vLocal_2139, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
}

void func_1187(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_26(uParam0))
	{
		func_466(uParam0, fParam1);
	}
}

bool func_1188(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_1189(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

char* func_1190(int iParam0)
{
	Var0 = { func_1685(iParam0) };
	return Var0;
}

bool func_1191(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

bool func_1192(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_1193(int iParam0)
{
	remove_blip(iLocal_1448[iParam0]);
}

void func_1194(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1195(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1448(iVar0))
	{
		return;
	}
	iVar1 = func_1449(iParam3);
	if (!func_1450(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1196(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1197(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1198(int iParam0)
{
	if (!&vLocal_243[iParam0] == 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	vLocal_243[iParam0] = 1;
}

bool func_1199(int iParam0, bool bParam1)
{
	if (!Local_2328[iParam0]->f_1 == 8)
	{
		if (bParam1)
		{
		}
		return false;
	}
	if (!_does_anim_scene_exist(&(Local_2328[iParam0])))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(&(Local_2328[iParam0]), true, false))
	{
		return false;
	}
	Local_2328[iParam0]->f_1 = 9;
	func_853(iParam0);
	return true;
}

int func_1200(vector3 vParam0, float fParam3)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		if (Local_1700.f_3[iVar1]->f_11 == 0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (does_entity_exist(Local_1700.f_3[iVar0]->f_13.f_9))
	{
		delete_object(&(Local_1700.f_3[iVar0]->f_13.f_9));
		Local_1700.f_3[iVar0]->f_12 = 0;
	}
	Local_1700.f_3[iVar0]->f_13.f_19 = fParam3;
	Local_1700.f_3[iVar0]->f_13.f_10 = { vParam0 };
	Local_1700.f_3[iVar0]->f_11 = 2;
	return iVar0;
}

void func_1201(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_1686(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_822[iVar0]))
		{
			if (!func_1687(uParam0, sParam1) || func_763(uParam0, 8388608))
			{
				StringCopy(uParam0->f_822[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_loaded(uParam0->f_804, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_804, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_804, sParam1);
						}
					}
					else
					{
						func_722(uParam0, 4194304);
					}
				}
				else
				{
					func_722(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_1202(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

void func_1203(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0]->f_2 == 0 && !Local_424[iVar0]->f_2 == 18)
		{
			func_1221(iVar0, iParam2);
		}
		iVar0++;
	}
}

void func_1204(int iParam0)
{
	if (_0xc276fe69dda22bad(&(iLocal_230[iParam0])))
	{
		return;
	}
	Var0 = { func_1256(iParam0) };
	iLocal_230[iParam0] = add_cover_point(Var0, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7);
}

void func_1205()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_1206()
{
	switch (iVar2374)
	{
		case 0:
			if (func_26(vLocal_1569[13]))
			{
				iLocal_2376 = 1;
			}
			break;
		case 1:
			if (func_845(vLocal_1569[13]) >= 40f)
			{
				iLocal_2376 = 2;
			}
			break;
		case 2:
			iLocal_2143 = func_1200(get_entity_coords(&(Local_424[5]), true, false), -1082130432);
			func_434(func_433(5), 1, 1, 1);
			iLocal_2376 = 3;
			break;
		case 3:
			if (Local_1700.f_3[iVar2141]->f_11 == 4)
			{
				start_entity_fire(&(Local_424[5]), 100f, 0, 4);
				set_entity_dynamic(&(Local_424[5]), true);
				activate_physics(&(Local_424[5]));
				set_ped_to_ragdoll_with_fall(&(Local_424[5]), 5000, 10000, 1, func_1688(1f, 1f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { func_1689(get_entity_coords(&(Local_424[5]), true, false), get_entity_coords(Global_35, true, false), 1f) };
				vVar0.x = (vVar0.x * 10f);
				vVar0.f_1 = (vVar0.y * 10f);
				vVar0.f_2 = (vVar0.z * 10f);
				vVar0.f_2 = (vVar0.z + 5f);
				apply_force_to_entity(&(Local_424[5]), 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				_set_entity_health(&(Local_424[5]), 0, 0);
				iLocal_2376 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_1207(var uParam0)
{
	iVar0 = 13;
	while (iVar0 <= 26)
	{
		if (Local_424[iVar0]->f_2 == 0 || Local_424[iVar0]->f_2 == 18)
		{
		}
		else if (is_entity_dead(&(Local_424[iVar0])))
		{
			Local_1700.f_386++;
			func_1250(2);
			func_1221(iVar0, 18);
		}
		else if (func_1180(60, iVar0))
		{
			if (get_distance_between_coords(get_entity_coords(&(Local_424[iVar0]), true, false), get_entity_coords(iVar2101, true, false), true) >= 190f)
			{
				_set_entity_health(&(Local_424[iVar0]), 0, 0);
			}
			else
			{
				switch (Local_424[iVar0]->f_2)
				{
					case 1:
						func_1690(&(Local_424[iVar0]), 0);
						if (((((iVar0 == 13 || iVar0 == 17) || iVar0 == 18) || iVar0 == 19) || iVar0 == 20) || iVar0 == 22)
						{
							set_ped_config_flag(&(Local_424[iVar0]), 138, true);
						}
						if (iVar0 == 25 || iVar0 == 26)
						{
							func_1691(5, iVar0);
							func_1691(4, iVar0);
						}
						set_entity_lod_dist(&(Local_424[iVar0]), 500);
						set_entity_load_collision_flag(&(Local_424[iVar0]), 1);
						_0x9587913b9e772d29(&(Local_424[iVar0]), 0);
						set_ped_combat_range(&(Local_424[iVar0]), 3);
						set_ped_seeing_range(&(Local_424[iVar0]), 140f);
						set_ped_combat_attributes(&(Local_424[iVar0]), 111, true);
						set_ped_combat_attributes(&(Local_424[iVar0]), 30, true);
						func_1221(iVar0, 2);
						break;
					case 2:
						if (func_164(0))
						{
						}
						else
						{
							remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
							func_849(0);
							func_1221(iVar0, 3);
							Jump @1174; //curOff = 490
							if (func_164(0))
							{
							}
							else
							{
								func_866(&(Local_424[iVar0]), &(iLocal_1452[1]), -1, 3, 0, 1056964608, 1065353216, 0);
								func_849(0);
								func_1221(iVar0, 8);
								Jump @1174; //curOff = 549
								func_1252(uParam0, iVar0, 1);
								switch (iVar0)
								{
									case 13:
									case 19:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_65, 0, 0, 0);
										break;
									case 14:
									case 20:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_67, 0, 0, 0);
										break;
									case 15:
									case 21:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_69, 0, 0, 0);
										break;
									case 16:
									case 22:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_71, 0, 0, 0);
										break;
									case 17:
									case 23:
									case 25:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_73, 0, 0, 0);
										break;
									case 18:
									case 24:
									case 26:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_75, 0, 0, 0);
										break;
									default:
										break;
								}
								_0x9238a3d970bbb0a9(&(Local_424[iVar0]), 1963457635);
								set_ped_combat_attributes(&(Local_424[iVar0]), 46, true);
								func_1306();
								_task_combat_ped_3(0, _0xf70f00013a62f866(Local_128), 0, 0);
								func_1307(&(Local_424[iVar0]), 0);
								func_1221(iVar0, 9);
								Jump @1174; //curOff = 849
								switch (iVar0)
								{
									case 13:
									case 19:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_66, 0, 0, 0);
										break;
									case 14:
									case 20:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_68, 0, 0, 0);
										break;
									case 15:
									case 21:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_70, 0, 0, 0);
										break;
									case 16:
									case 22:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_72, 0, 0, 0);
										break;
									case 17:
									case 23:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_74, 0, 0, 0);
										break;
									case 18:
									case 24:
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_76, 0, 0, 0);
										break;
									default:
										break;
								}
								func_1306();
								_task_combat_ped_3(0, _0xf70f00013a62f866(Local_128), 0, 0);
								func_1307(&(Local_424[iVar0]), 0);
								func_1221(iVar0, 11);
								Jump @1174; //curOff = 1098
								if (func_164(9))
								{
									func_1221(iVar0, 16);
								}
								Jump @1174; //curOff = 1118
								task_combat_ped(&(Local_424[iVar0]), Global_35, 16777216, 16);
								func_1221(iVar0, 17);
								Jump @1174; //curOff = 1150
								if (!func_164(9))
								{
									func_1221(iVar0, 8);
								}
							}
						}
						iVar0++;
						default:
							break;
				}
			}
		}
	}
}

void func_1208()
{
	switch (Local_424[2]->f_2)
	{
		case 1:
			func_1221(2, 13);
		case 13:
			if (_0x005e6f28dd7ed58d(&(Local_2328[1]), "Dutch") || _0xf94692eb9dc15d74(&(Local_2328[1]), 0))
			{
				vVar0 = { func_1256(0) };
				set_ped_combat_attributes(&(Local_424[2]), 30, true);
				set_ped_sphere_defensive_area(&(Local_424[2]), vVar0, 1f, 0, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, vVar0, 3000, 0, 1f, 1, 0, &(iLocal_230[0]), 0, 0, 0);
				task_combat_ped_timed(0, &(Local_424[12]), 10000, 117440512);
				func_1307(&(Local_424[2]), 0);
				_0x2208438012482a1a(&(Local_424[2]), true, false);
				func_1221(2, 17);
			}
			break;
		case 17:
			if (!func_1692(&(Local_424[2])))
			{
				func_1184(32);
				remove_cover_point(&(iLocal_230[0]));
				_0x19c7567d2f2287d6(Local_128.f_34, 7);
				func_1221(2, 8);
			}
			break;
		case 8:
			_0xfc3db99c8144cd81(&(Local_424[2]), Local_128.f_85, 1, 0, 0);
			_0xfc3db99c8144cd81(&(Local_424[2]), Local_128.f_88, 1, 1, 0);
			_0x4ec4ea2f72b36358(&(Local_424[2]), 1);
			set_ped_combat_attributes(&(Local_424[2]), 30, true);
			task_combat_hated_targets_in_area(&(Local_424[2]), vLocal_2163, 150f, 100663296, 84);
			func_27(vLocal_1569[25], 1);
			func_1221(2, 9);
			break;
		case 9:
			if (!func_1693(&(Local_424[2]), 1120685857))
			{
				func_1221(2, 8);
			}
			break;
	}
}

void func_1209()
{
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		if (is_entity_dead(&(Local_424[iVar0])))
		{
		}
		else
		{
			switch (Local_424[iVar0]->f_2)
			{
				case 1:
					set_ped_seeing_range(&(Local_424[iVar0]), 140f);
					func_1221(iVar0, 13);
				case 13:
					if ((iVar0 == 5 && _0x005e6f28dd7ed58d(&(Local_2328[1]), "BillWilliamson")) || (iVar0 == 4 && _0x005e6f28dd7ed58d(&(Local_2328[1]), "MicahBell")))
					{
						if (iVar0 == 5)
						{
							func_1184(29);
							iVar12 = 1;
						}
						else if (iVar0 == 4)
						{
							iVar12 = 2;
						}
						vVar2 = { func_1256(iVar12) };
						task_put_ped_directly_into_cover(&(Local_424[iVar0]), vVar2, 20000, 0, 0f, 1, 0, &(iLocal_230[iVar12]), 0, 0, 0);
						_0x2208438012482a1a(&(Local_424[iVar0]), true, false);
						if (iVar0 == 5)
						{
							func_27(vLocal_1569[7], 0);
						}
						else if (iVar0 == 4)
						{
							func_27(vLocal_1569[8], 0);
						}
						func_1221(iVar0, 8);
					}
					break;
				case 8:
					if (iVar0 == 5)
					{
						if (func_26(vLocal_1569[7]) && !func_845(vLocal_1569[7]) >= 2.5f)
						{
						}
						else
						{
							Jump @387; //curOff = 342
							if (iVar0 == 4)
							{
								if (func_26(vLocal_1569[8]) && !func_845(vLocal_1569[8]) >= 4f)
								{
								}
								else
								{
									if (iVar0 == 5)
									{
										func_27(vLocal_1569[3], 0);
										if (_0xc276fe69dda22bad(&(iLocal_230[1])))
										{
											remove_cover_point(&(iLocal_230[1]));
										}
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_39, 1, 0, 0);
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_86, 1, 1, 0);
										_0x4ec4ea2f72b36358(&(Local_424[iVar0]), 1);
										vVar2 = { func_1256(1) };
									}
									else if (iVar0 == 4)
									{
										if (_0xc276fe69dda22bad(&(iLocal_230[2])))
										{
											remove_cover_point(&(iLocal_230[2]));
										}
										if (!func_26(vLocal_1569[27]))
										{
											func_27(vLocal_1569[27], 0);
										}
										vVar2 = { func_1256(2) };
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_40, 1, 0, 0);
										_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_87, 1, 1, 0);
										_0x4ec4ea2f72b36358(&(Local_424[iVar0]), 1);
									}
									set_ped_combat_movement(&(Local_424[iVar0]), 1);
									iVar1 = 13;
									while (iVar1 <= 26)
									{
										func_1691(iVar0, iVar1);
										iVar1++;
									}
									task_combat_hated_targets_in_area(&(Local_424[iVar0]), vLocal_2163, 150f, 100663296, 84);
									func_1221(iVar0, 9);
									Jump @1516; //curOff = 674
									if (iVar0 == 5)
									{
										if (func_1694())
										{
											if (func_845(vLocal_1569[3]) >= 12f)
											{
												if (iVar2111 == 0)
												{
													iVar1 = 13;
													while (iVar1 <= 26)
													{
														if (Local_424[iVar1]->f_2 == 9 || Local_424[iVar1]->f_2 == 11)
														{
															if (((!is_entity_dead(&(Local_424[iVar1])) && !func_1215()) && !func_1216()) && iVar2111 == 0)
															{
																if (is_entity_in_volume(&(Local_424[iVar1]), Local_128.f_28, true, 0))
																{
																	func_1184(39);
																	Jump @939; //curOff = 831
																}
																else if (is_entity_in_volume(&(Local_424[iVar1]), Local_128.f_29, true, 0))
																{
																	func_1184(40);
																	Jump @939; //curOff = 863
																}
																else if (is_entity_in_volume(&(Local_424[iVar1]), Local_128.f_30, true, 0))
																{
																	func_1184(41);
																	Jump @939; //curOff = 895
																}
																else if (is_entity_in_volume(&(Local_424[iVar1]), Local_128.f_31, true, 0))
																{
																	func_1184(42);
																}
																else
																{
																	iVar1++;
																}
																func_214(vLocal_1569[3]);
																if (func_1220(13, 24, 18) == 0)
																{
																	func_1221(5, 6);
																	func_1221(4, 6);
																}
																if (!func_1693(&(Local_424[5]), 1120685857))
																{
																	func_1221(5, 8);
																}
																Jump @1516; //curOff = 999
																if (iVar0 == 5)
																{
																	iVar12 = 1;
																}
																else if (iVar0 == 4)
																{
																	iVar12 = 3;
																}
																if (!_0xc276fe69dda22bad(&(iLocal_230[iVar12])))
																{
																	func_1204(iVar12);
																}
																vVar2 = { func_1256(iVar12) };
																func_1306();
																task_aim_at_entity(0, Local_1700.f_1, get_random_int_in_range(4000, 8000), 1, 0);
																task_go_to_coord_while_aiming_at_coord(0, vVar2, get_entity_coords(Local_1700.f_1, true, false), 1.5f, 0, 1f, 1082130432, 1, 0, 0, -687903391, 0);
																task_put_ped_directly_into_cover(0, vVar2, get_random_int_in_range(5000, 12000), 0, 0f, 1, 0, &(iLocal_230[iVar12]), 0, 0, 0);
																set_sequence_to_repeat(iVar2112, true);
																func_1307(&(Local_424[iVar0]), func_1469(iVar0 == 5, 0f, 0.3f));
																func_1221(iVar0, 7);
																Jump @1516; //curOff = 1193
																if (iVar0 == 5)
																{
																	if (vLocal_2104.z >= 4)
																	{
																		func_1221(5, 10);
																		func_1221(4, 10);
																	}
																	else
																	{
																		Jump @1516; //curOff = 1228
																		if (func_164(38))
																		{
																			if (iVar0 == 5)
																			{
																				_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_41, 1, 0, 0);
																			}
																			else if (iVar0 == 4)
																			{
																				_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_39, 1, 0, 0);
																			}
																			func_1691(iVar0, 36);
																			if (iVar0 == 4)
																			{
																				if (iVar0 == 4)
																				{
																					set_current_ped_weapon(&(Local_424[iVar0]), &(iLocal_1452[3]), false, 0, false, false);
																					set_current_ped_weapon(&(Local_424[iVar0]), &(iLocal_1452[4]), false, 1, false, false);
																					task_swap_weapon(&(Local_424[iVar0]), 1, 1, 0, 0);
																					set_ped_combat_attributes(&(Local_424[iVar0]), 54, false);
																				}
																			}
																			func_1306();
																			task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 950.5f, -6768.7f, 41.2f, 1.5f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
																			if (!is_entity_dead(&(Local_424[36])))
																			{
																				task_combat_ped(0, &(Local_424[36]), 0, 0);
																			}
																			if (iVar0 == 4)
																			{
																				func_1307(&(Local_424[iVar0]), 2f);
																			}
																			else
																			{
																				func_1307(&(Local_424[iVar0]), 0);
																			}
																			func_1221(iVar0, 11);
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

void func_1210()
{
	switch (Local_424[3]->f_2)
	{
		case 1:
			func_1221(3, 13);
		case 13:
			if (!func_164(31))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_95, true, 0))
				{
					if (_get_anim_scene_time(&(Local_2328[1])) >= 14.5f)
					{
						task_follow_nav_mesh_to_coord(Global_35, 989.9581f, -6744.795f, 63.1255f, 1f, 20000, 0.25f, 0, 109f);
						func_849(31);
					}
				}
			}
			if (_0x005e6f28dd7ed58d(&(Local_2328[1]), "Hercule"))
			{
				_delete_volume(Local_128.f_19);
				_delete_volume(Local_128.f_95);
				task_enter_anim_scene(&(Local_424[3]), &(Local_2328[2]), "HERCULE", "pbl_hercule_push_intro", 3f, 1, 3, 20000, -1082130432);
				_0x2208438012482a1a(&(Local_424[3]), true, false);
				force_ped_motion_state(&(Local_424[3]), -1115154469, false, 0, false);
				func_27(vLocal_1569[6], 0);
				func_1221(3, 14);
			}
			break;
		case 14:
			if (_is_anim_scene_started(&(Local_2328[2]), false))
			{
				func_1221(3, 5);
			}
			break;
		case 5:
			if (func_845(vLocal_1569[6]) >= 10f)
			{
				if ((iVar2111 == 0 && !func_1188(1)) && !func_1189(1))
				{
					func_1184(24);
					func_849(28);
					func_524(vLocal_1569[6]);
					func_1221(3, 15);
				}
			}
			break;
		case 15:
			break;
		case 16:
			break;
	}
}

void func_1211()
{
	switch (Local_424[6]->f_2)
	{
		case 1:
			func_1198(40);
			func_1198(41);
			func_1198(42);
			func_1198(43);
			func_1221(6, 13);
		case 13:
			if (_0x005e6f28dd7ed58d(&(Local_2328[1]), "Frenchman"))
			{
				vVar0 = { func_1256(5) };
				func_866(&(Local_424[6]), &(iLocal_1452[2]), -1, 0, 0, 1056964608, 1065353216, 0);
				func_849(0);
				if (!_0xff07cf465f48b830(&(iLocal_1452[2])))
				{
				}
				set_ped_sphere_defensive_area(&(Local_424[6]), vVar0, 1.5f, 1, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, vVar0, -1, 1, 0f, 1, 1, &(iLocal_230[5]), 0, 0, 0);
				func_1307(&(Local_424[6]), 0);
				_0x2208438012482a1a(&(Local_424[6]), true, false);
				func_27(vLocal_1569[15], 0);
				func_1221(6, 9);
			}
			break;
		case 9:
			if (func_845(vLocal_1569[15]) >= 3f)
			{
				set_current_ped_weapon(&(Local_424[6]), &(iLocal_1452[8]), true, 0, false, false);
				func_1228(Local_128.f_25);
				Local_128.f_25 = _create_volume_cylinder(get_entity_coords(&(Local_424[6]), true, false), 0f, 0f, 0f, 0.75f, 0.75f, 2f);
				func_1174(&(Local_128.f_25), 665633627);
				_0x7c00cfc48a782dc0(Local_128.f_25, &(Local_424[6]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				func_1221(6, 6);
			}
			break;
		case 6:
			iVar10 = get_random_int_in_range(0, 3);
			func_1306();
			task_shoot_at_entity(0, Local_1700.f_1, get_random_int_in_range(3000, 12000), -687903391, 0);
			if (iVar10 == 0)
			{
				if (func_1233(40))
				{
					func_1695(0, 40, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			else if (iVar10 == 1)
			{
				if (func_1233(41))
				{
					func_1695(0, 41, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			else if (iVar10 == 2)
			{
				if (func_1233(42))
				{
					func_1695(0, 42, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			func_1307(&(Local_424[6]), 0);
			func_27(vLocal_1569[15], 1);
			func_1221(6, 7);
			break;
		case 7:
			if (!func_1692(&(Local_424[6])))
			{
				func_1221(6, 6);
			}
			break;
	}
}

int func_1212(var uParam0)
{
	if (func_164(35))
	{
		func_1696();
	}
	if (vLocal_2104.z == 1 || vLocal_2104.z == 2)
	{
		func_27(vLocal_1569[10], 0);
		if (vLocal_2104.z == 2)
		{
			func_27(vLocal_1569[11], 0);
		}
		if (func_164(11))
		{
			if (_0x8d81e7824b7753f7(&(Local_2328[2]), "s_Base_Push", 1))
			{
				if (_0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Flinch_Left") && _0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Flinch_Right"))
				{
					if (func_1217())
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Flinch_Left", true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Flinch_Right", true);
					}
				}
				else if (_0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Flinch_Left"))
				{
					_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Flinch_Left", true);
				}
				else if (_0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Flinch_Right"))
				{
					_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Flinch_Right", true);
				}
			}
		}
		if (func_845(vLocal_1569[10]) >= 30f)
		{
			if (_0x8d81e7824b7753f7(&(Local_2328[2]), "s_base_push", 1))
			{
				if (vLocal_2104.z == 2)
				{
					if (_0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_hercule_callover"))
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_hercule_callover", true);
						func_214(vLocal_1569[10]);
					}
				}
				else
				{
					iVar0 = get_random_int_in_range(0, 4);
					if (iVar0 == 0 && _0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Push_idle_v01"))
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Push_idle_v01", true);
					}
					else if (iVar0 == 1 && _0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Push_idle_v02"))
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Push_idle_v02", true);
					}
					else if (iVar0 == 2 && _0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Push_idle_v03"))
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Push_idle_v03", true);
					}
					else if (iVar0 == 3 && _0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Push_idle_v04"))
					{
						_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Push_idle_v04", true);
					}
					func_214(vLocal_1569[10]);
				}
			}
		}
	}
	if (vLocal_2104.z >= 3)
	{
		_0xc9caeaeec1256e54(iVar2113);
		if (!is_bit_set(Global_1956580->f_1, 4))
		{
			set_bit(&(Global_1956580->f_1), 4);
		}
	}
	switch (vLocal_2104.z)
	{
		case 0:
			if (vLocal_2104.f_2.f_4 == -1)
			{
				vLocal_2104.f_2.f_4 = get_sound_id();
			}
			else if (!is_entity_dead(iVar2101) && _0x4ad019591e94c064("CANNON_PUSH", iVar2101, "SMG2_Sounds", vLocal_2104.f_2.f_4))
			{
				func_1223(1);
			}
			break;
		case 1:
			break;
		case 2:
			func_849(10);
			if (func_845(vLocal_1569[11]) >= 10f)
			{
				if (is_entity_in_volume(Global_35, Local_128.f_4, true, 0))
				{
					func_1184(35);
					func_214(vLocal_1569[11]);
				}
			}
			fVar1 = func_1181(Global_35, _0xf70f00013a62f866(Local_128.f_6), 1);
			if (fVar1 < 4f && fVar1 > 2f)
			{
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
			}
			else if (fVar1 <= 2f)
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
			}
			if (!does_blip_exist(vLocal_2104.y))
			{
				if (vLocal_2104.z == 2)
				{
					vLocal_2104.f_1 = func_1273(408396114, get_offset_from_entity_in_world_coords(iVar2101, func_761(1, 5, 1)), 1);
					set_blip_name_from_text_file(vLocal_2104.y, func_1190(1));
				}
			}
			_0x541b8576615c33de(Local_128.f_6, get_offset_from_entity_in_world_coords(iVar2101, func_761(1, 5, 1)));
			if (does_blip_exist(vLocal_2104.y))
			{
				set_blip_coords(vLocal_2104.y, _0xf70f00013a62f866(Local_128.f_6));
			}
			if (is_entity_in_volume(Global_35, Local_128.f_6, true, 0) && !is_entity_dead(iVar2101))
			{
				remove_blip(&(vLocal_2104.f_1));
				func_435(uParam0, 13, 26);
				func_1250(3);
				func_1198(32);
				_hide_ped_weapons(Global_35, 2, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				func_1697();
				task_enter_anim_scene(Global_35, &(Local_2328[2]), "ARTHUR", "pbl_Both_Push_Cannon", 1.48f, 0, 164, 20000, -1082130432);
				_0x2208438012482a1a(Global_35, true, false);
				func_910(uParam0, 25, 0);
				func_910(uParam0, 26, 0);
				func_1223(3);
			}
			if (!func_164(22))
			{
				if (is_sphere_visible(func_1245(6, 0), 1f))
				{
					func_1247(0, func_1245(6, 0), 0.75f);
					func_849(22);
				}
			}
			break;
		case 3:
			func_1698();
			if (_0x337f1cc8ee895601(&(Local_2328[2]), "ARTHUR"))
			{
				if (_0x23e33cb9f4a3f547(&(Local_2328[2]), "pbl_Both_Push_Cannon"))
				{
					func_135(uParam0, 6);
					_set_anim_scene_playback_list_bool(&(Local_2328[2]), "pbl_Both_Push_Cannon", true);
					func_1223(4);
				}
				else if (!_0x0df57f86fe71dbe5(&(Local_2328[2]), "pbl_Both_Push_Cannon"))
				{
					_0xdf7b5144e25cd3fe(&(Local_2328[2]), "pbl_Both_Push_Cannon");
				}
			}
			break;
		case 4:
			func_1698();
			if (_0x8d81e7824b7753f7(&(Local_2328[2]), "s_Both_Push_Cannon", 1) && _get_anim_scene_progress(&(Local_2328[2])) >= 0.10366f)
			{
				func_1223(5);
			}
			break;
		case 5:
			func_1698();
			if (!is_entity_dead(iVar2101))
			{
				_0xf1c5310feaa36b48(vLocal_2104.f_2.f_4, "CANNON_PUSH", iVar2101, "SMG2_Sounds", 0, 0);
			}
			func_849(35);
			func_27(vLocal_1569[13], 0);
			func_27(vLocal_1569[14], 0);
			func_1223(6);
			break;
		case 6:
			func_1698();
			if (!func_164(33))
			{
				if (iVar2110 == 0)
				{
					func_1184(44);
					func_849(33);
				}
			}
			else if (!func_164(34))
			{
				func_1184(43);
				func_849(34);
			}
			if (!func_10(iVar2114))
			{
				iLocal_2117 = func_1700(func_1190(7), func_1699(0), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1701(iVar2114, 14, 1, 1);
				func_1701(iVar2114, 10, 1, 1);
			}
			else
			{
				enable_control_action(0, func_1699(0), true);
				func_1701(iVar2114, 0, 1, 1);
			}
			if (func_1702(iVar2114, 1))
			{
				if (!func_10(iVar2115))
				{
					iLocal_2118 = func_1700(func_1190(8), func_1699(1), 13, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1701(iVar2115, 14, 1, 1);
					func_1701(iVar2115, 10, 1, 1);
				}
				else
				{
					enable_control_action(0, func_1699(1), true);
					func_1701(iVar2115, 0, 1, 1);
				}
			}
			else if (func_10(iVar2115))
			{
				func_11(&iLocal_2118, 1, 1);
			}
			if (func_10(iVar2115))
			{
				if (func_1703(iVar2115, 1))
				{
					func_1704(iVar2115, 1);
				}
			}
			if (!func_164(23))
			{
				if (_get_anim_scene_time(&(Local_2328[2])) >= 4.82f)
				{
					func_1200(979.9f, -6750.4f, 69.8f, -1082130432);
					func_849(23);
				}
			}
			if (!func_164(24))
			{
				if (_get_anim_scene_time(&(Local_2328[2])) >= 8.15f)
				{
					func_1200(984.6f, -6744.9f, 66.2f, -1082130432);
					func_849(24);
				}
			}
			if (!func_164(25))
			{
				if (_get_anim_scene_time(&(Local_2328[2])) >= 10.15f)
				{
					func_1200(998.7f, -6736.5f, 68.9f, -1082130432);
					func_849(25);
				}
			}
			if (!func_164(26))
			{
				if (_get_anim_scene_time(&(Local_2328[2])) >= 11f)
				{
					func_1184(36);
					func_849(26);
				}
			}
			vLocal_2104.f_2.f_1 = 0.2f;
			vLocal_2104.f_2.f_1 = (vLocal_2104.f_2.f_1 + func_1514(0f, 0.4f, get_control_normal(0, func_1699(0))));
			if (func_10(iVar2115) && func_1705(iVar2115, 1))
			{
				bVar2 = true;
				vLocal_2104.f_2.f_1 = (vLocal_2104.f_2.f_1 + 1.4f);
			}
			if (bVar2)
			{
				func_214(vLocal_1569[14]);
				func_214(vLocal_1569[13]);
			}
			if (func_845(vLocal_1569[14]) >= 10f)
			{
				func_1184(45);
				func_214(vLocal_1569[14]);
			}
			vLocal_2104.f_2.f_2 = func_1706(2, vLocal_2104.f_2.f_1);
			if (!func_164(38))
			{
				if (is_entity_dead(&(Local_1523[0])))
				{
					Local_1523[0] = create_vehicle(func_437(10), func_472(9, 0), func_1255(9, 0), true, true, false, false);
					freeze_entity_position(&(Local_1523[0]), true);
				}
				if (is_entity_dead(&(Local_1523[1])))
				{
					Local_1523[1] = create_vehicle(func_437(10), func_472(9, 1), func_1255(9, 1), true, true, false, false);
					freeze_entity_position(&(Local_1523[1]), true);
				}
				if (is_entity_dead(&(Local_1523[2])))
				{
					Local_1523[2] = create_vehicle(func_437(10), func_472(9, 2), func_1255(9, 2), true, true, false, false);
				}
				if (func_856(uParam0, 27, 41, 107))
				{
					set_ped_into_vehicle(&(Local_424[33]), &(Local_1523[0]), -1);
					set_ped_into_vehicle(&(Local_424[34]), &(Local_1523[1]), -1);
					set_ped_into_vehicle(&(Local_424[35]), &(Local_1523[1]), -2);
					set_ped_into_vehicle(&(Local_424[36]), &(Local_1523[1]), -2);
					set_ped_into_vehicle(&(Local_424[37]), &(Local_1523[2]), -1);
					set_ped_into_vehicle(&(Local_424[38]), &(Local_1523[2]), -2);
					func_849(38);
				}
			}
			vLocal_2104.f_2.f_3 = func_1707();
			if (func_164(35))
			{
				if (vLocal_2104.f_2.f_3 > 1f)
				{
					if (!func_164(36))
					{
						vLocal_2104.f_2.f_3 = 1f;
						func_1223(7);
						func_135(uParam0, 7);
						if (func_10(iVar2114))
						{
							func_11(&iLocal_2117, 1, 1);
						}
						if (func_10(iVar2115))
						{
							func_11(&iLocal_2118, 1, 1);
						}
						func_849(36);
					}
				}
			}
			fVar4 = func_1708(vLocal_2104.f_2.f_2, 0.2f, 0.5f);
			if (fVar4 > 0f)
			{
				iVar3 = floor(func_1514(32f, 96f, fVar4));
				set_pad_shake(0, floor((get_frame_time() * 1000f)), iVar3);
			}
			set_anim_scene_rate(&(Local_2328[2]), vLocal_2104.f_2.f_2);
			break;
		case 7:
			func_1698();
			if (!func_164(38))
			{
			}
			else
			{
				func_27(vLocal_1569[0], 1);
				func_178(35);
				func_1709(1, 0, 0f);
				Local_1700.f_3[0] = 0;
				Local_1700.f_3[1] = 0;
				func_1203(27, 41, 10);
				_0x3210bcb36af7621b(vLocal_2104.f_2.f_4);
				release_sound_id(vLocal_2104.f_2.f_4);
				vLocal_2104.f_2.f_4 = -1;
				func_113(1);
				set_anim_scene_rate(&(Local_2328[2]), 1f);
				func_1223(8);
				Jump @2773; //curOff = 2763
				return 1;
			}
			return 0;
			default:
				break;
	}
}

void func_1213(var uParam0, int iParam1)
{
	if (!is_entity_in_volume(Global_35, Local_128.f_4, true, 0))
	{
		if (!func_164(9))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			task_clear_look_at(Global_35);
			func_1182(uParam0, 0);
			if (func_33(uParam0) == 1)
			{
				func_1184(27);
			}
			func_849(9);
		}
	}
	else if (func_164(9))
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
		iVar0 = Local_1265[iParam1]->f_1;
		func_1182(uParam0, iParam1);
		if (func_33(uParam0) == 1)
		{
			if (!func_164(32))
			{
				func_1184(28);
				func_849(32);
			}
		}
		if (iVar0 == 3 || iVar0 == 2)
		{
			Local_1265[iParam1]->f_1 = iVar0;
		}
		func_178(9);
	}
}

void func_1214()
{
	iVar0 = 27;
	while (iVar0 <= 38)
	{
		if (is_entity_dead(&(Local_424[iVar0])))
		{
			func_1221(iVar0, 18);
		}
		else
		{
			switch (Local_424[iVar0]->f_2)
			{
				case 1:
					func_1221(iVar0, 2);
				case 2:
					if (func_164(0))
					{
					}
					else
					{
						remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
						func_849(0);
						func_1221(iVar0, 3);
						Jump @866; //curOff = 129
						if (func_164(0))
						{
						}
						else
						{
							func_866(&(Local_424[iVar0]), &(iLocal_1452[1]), -1, 3, 0, 1056964608, 1065353216, 0);
							func_849(0);
							func_1221(iVar0, 8);
							Jump @866; //curOff = 188
							if (!is_ped_in_any_vehicle(&(Local_424[iVar0]), false))
							{
								task_shoot_at_coord(&(Local_424[iVar0]), func_1710(func_472(8, 1), 5f), -1, -687903391, 0);
							}
							func_1221(iVar0, 9);
							Jump @866; //curOff = 245
							if (!waypoint_recording_get_coord(func_438(32), 0, &uVar1))
							{
								return;
							}
							fVar5 = 0f;
							switch (iVar0)
							{
								case 29:
									fVar6 = 0.2f;
									break;
								case 31:
									fVar6 = 0.7f;
									break;
								case 34:
									fVar6 = 0.3f;
									break;
							}
							fVar4 = (fVar5 + fVar6);
							fVar7 = -1f;
							if ((iVar0 == 27 || iVar0 == 28) || iVar0 == 29)
							{
								fVar7 = 1f;
							}
							else if ((iVar0 == 30 || iVar0 == 31) || iVar0 == 32)
							{
								fVar7 = 1.5f;
							}
							func_1691(iVar0, 1);
							if (!fVar7 == -1f)
							{
								func_1306();
								task_go_to_coord_while_aiming_at_coord(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), fVar7, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
								func_1307(&(Local_424[iVar0]), fVar4);
							}
							else if (iVar0 == 33)
							{
								func_1306();
								_task_disembark_vehicle(0, &(Local_1523[0]), 20000, 0, 1073741824, 1);
								task_go_to_coord_while_aiming_at_coord(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), 3f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
								func_1307(&(Local_424[iVar0]), fVar4);
							}
							else if ((iVar0 == 34 || iVar0 == 35) || iVar0 == 36)
							{
								func_1306();
								_task_disembark_vehicle(0, &(Local_1523[1]), 20000, 0, 1073741824, 1);
								task_follow_waypoint_recording(0, func_438(32), 0, 2, -1, 0, 1, -1);
								func_1307(&(Local_424[iVar0]), fVar4);
							}
							else if (iVar0 == 37)
							{
								func_1306();
								_task_vehicle_drive_to_destination(0, &(Local_1523[2]), 952.113f, -6766.375f, 40.588f, 3f, 0, 3, 2f, 1f, 0);
								_task_disembark_vehicle(0, &(Local_1523[0]), 20000, 0, 1073741824, 1);
								task_go_to_coord_while_aiming_at_coord(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), 3f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
								func_1307(&(Local_424[iVar0]), fVar4);
							}
							else if (iVar0 == 38)
							{
							}
							func_1221(iVar0, 11);
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

bool func_1215()
{
	return func_1188(1);
}

bool func_1216()
{
	return func_1189(1);
}

bool func_1217()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_1218(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1219(var uParam0, bool bParam1, float fParam2)
{
	if (func_164(14))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			if (func_433(iVar0) == -1)
			{
				set_entity_invincible(&(Local_424[iVar0]), true);
			}
			else
			{
				func_434(func_433(iVar0), 1, 1, 1);
			}
			func_1711(uParam0, &(Local_424[iVar0]), 1, 1);
			iVar0++;
		}
		func_178(13);
		func_524(vLocal_1569[1]);
		return;
	}
	if (!func_164(13))
	{
		if (func_1712(vLocal_1569[1], fParam2))
		{
			iVar0 = 2;
			while (iVar0 <= 6)
			{
				if (func_433(iVar0) == -1)
				{
					set_entity_invincible(&(Local_424[iVar0]), false);
				}
				else
				{
					func_434(func_433(iVar0), 0, 1, 1);
				}
				func_1711(uParam0, &(Local_424[iVar0]), 1, 1);
				iVar0++;
			}
			func_849(13);
		}
	}
	else if (!func_1712(vLocal_1569[1], fParam2))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			if (func_433(iVar0) == -1)
			{
				set_entity_invincible(&(Local_424[iVar0]), true);
			}
			else
			{
				func_434(func_433(iVar0), 1, 1, 1);
			}
			func_1711(uParam0, &(Local_424[iVar0]), 1, 1);
			func_1711(uParam0, &(Local_424[iVar0]), 0, 1);
			iVar0++;
		}
		func_178(13);
	}
}

int func_1220(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0]->f_2 == iParam2)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1221(int iParam0, int iParam1)
{
	Local_424[iParam0]->f_2 = iParam1;
}

void func_1222(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!Local_1265[iParam0] & 2 != 0)
	{
		return;
	}
	Local_1265[iParam0]->f_7 = iParam1;
}

void func_1223(int iParam0)
{
	vLocal_2104.f_2 = iParam0;
}

struct<15> func_1224(int iParam0)
{
	Var0.f_6 = 1108082688;
	Var0.f_14 = 1108082688;
	switch (iParam0)
	{
		case 0:
			Var0 = { 998.1f, -6744.4f, 63.858f };
			Var0.f_3 = { -3.3f, 0f, 115.6f };
			Var0.f_6 = 30f;
			Var0.f_8 = { 990.2f, -6743.6f, 63.858f };
			Var0.f_11 = { -4.791f, -0.115f, 117.755f };
			break;
		case 1:
			if (!does_cam_exist(&(iLocal_1494[0])))
			{
			}
			Var0 = { get_cam_coord(&(iLocal_1494[0])) };
			Var0.f_3 = { get_cam_rot(&(iLocal_1494[0]), 2) };
			Var0.f_6 = get_cam_fov(&(iLocal_1494[0]));
			Var0.f_7 = 3.5f;
			Var0.f_8 = { 984.9001f, -6741.919f, 67.9128f };
			Var0.f_11 = { -35.1563f, 0.0226f, 139.0511f };
			break;
		case 2:
			Var0 = { 990.3372f, -6744.721f, 64.3725f };
			Var0.f_3 = { -10.861f, 0.0558f, 77.2379f };
			Var0.f_6 = 31.1f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_1225(var uParam0)
{
	switch (&iLocal_2369[1])
	{
		case 0:
			iLocal_2369[1] = 1;
			break;
		case 1:
			iLocal_1233[12] = _create_weapon_object(1999408598, 1, 972.6f, 6735.2f, 45.1f, true, 1f);
			func_1681(&(uParam0->f_7375));
			func_415(uParam0, &(iLocal_1233[12]), "w_rifle_boltAction01^14", 0, 0, 0, 0);
			func_415(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[2]), "Dutch", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[5]), "BillWilliamson", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[4]), "MicahBell", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[3]), "Hercule", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[6]), "GenStoryMale", 0, 0, 0, 0);
			func_415(uParam0, iVar2101, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[27]), "S_M_M_FussarHenchman_01", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[28]), "S_M_M_FussarHenchman_01^1", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[29]), "S_M_M_FussarHenchman_01^2", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[30]), "S_M_M_FussarHenchman_01^3", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[31]), "S_M_M_FussarHenchman_01^4", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[32]), "S_M_M_FussarHenchman_01^5", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[33]), "S_M_M_FussarHenchman_01^6", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[34]), "S_M_M_FussarHenchman_01^7", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[35]), "S_M_M_FussarHenchman_01^8", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[36]), "S_M_M_FussarHenchman_01^9", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[37]), "S_M_M_FussarHenchman_01^10", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[38]), "S_M_M_FussarHenchman_01^11", 0, 0, 0, 0);
			func_1227(27, 41, 0);
			iLocal_2369[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

void func_1226(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1227(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (does_entity_exist(&(Local_424[iVar0])) && !is_entity_dead(&(Local_424[iVar0])))
		{
			_0x67e21acc5c0c970c(&(Local_424[iVar0]), 0, bParam2);
			_0x67e21acc5c0c970c(&(Local_424[iVar0]), 1, bParam2);
		}
		iVar0++;
	}
}

void func_1228(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_1229(var uParam0, char[4] cParam1)
{
	func_1201(&(uParam0->f_7375), cParam1, func_162(uParam0, func_33(uParam0)) != 5);
}

bool func_1230(bool bParam0)
{
	if (does_pickup_exist(iVar2150))
	{
		return true;
	}
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		func_1198(func_1234(iVar0));
		iVar0++;
	}
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		if (!func_1233(func_1234(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam0)
	{
		return true;
	}
	Var1.f_6 = -1;
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		if (!does_entity_exist(&(iLocal_1233[iVar0])))
		{
			func_858(iVar0, 0);
			set_entity_proofs(&(iLocal_1233[iVar0]), 4, false);
			Var1 = { func_1176(iVar0) };
			set_entity_coords(&(iLocal_1233[iVar0]), Var1, true, false, true, true);
			set_entity_rotation(&(iLocal_1233[iVar0]), Var1.f_3, 2, true);
		}
		iVar0++;
	}
	if (func_122(1999408598))
	{
		iLocal_2154 = 522446563;
	}
	else if (func_122(1676963302))
	{
		iLocal_2154 = 907844324;
	}
	iLocal_2153 = create_pickup_rotate(iVar2151, vLocal_2155, vLocal_2158, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
	return true;
}

void func_1231(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_931(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1713(uParam0->f_5423[iVar0], iParam2);
}

void func_1232(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1714(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1715(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_490(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1716(uParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1717(iParam1);
		}
	}
	if (func_1716(uParam0, iParam1))
	{
		func_1231(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1718(uParam0, iParam1, 128);
		}
		else
		{
			func_1231(uParam0, iParam1, 128);
		}
		if (func_931(uParam0, iParam1, &iVar3))
		{
			func_1447(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1719(iVar1);
	}
}

bool func_1233(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	return &vLocal_243[iParam0] == 3;
}

int func_1234(int iParam0)
{
	Var0 = { func_1176(iParam0) };
	return Var0.f_6;
}

void func_1235()
{
	if (does_pickup_exist(iVar2143))
	{
		remove_pickup(iVar2143);
	}
	iLocal_2145 = create_pickup_rotate(iVar2144, vLocal_2147, vLocal_2150, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
}

void func_1236(int iParam0)
{
	if (Local_1465[iParam0]->f_5 == 0)
	{
		Local_1465[iParam0]->f_5 = 1;
	}
}

void func_1237(var uParam0)
{
	fVar0 = func_835(Global_35, &(Local_424[3]), 1, 1);
	if (func_164(43))
	{
		if (fVar0 < 25f)
		{
			func_898(func_1190(iVar2158), 7500, 0, 1, 0, 0, -1, -1, 0);
			func_178(43);
			if (iVar2158 == 57)
			{
				func_1232(uParam0, &(Local_424[2]), 1);
				_set_blip_flash_style(Local_424[3]->f_1, -401963276);
			}
			else if (iVar2158 == 55)
			{
				_blip_set_modifier(Local_424[3]->f_1, -401963276);
				func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
			}
		}
		else if (fVar0 >= 45f)
		{
			func_1465(uParam0, func_1721(17), 1, 0);
		}
	}
	else if (fVar0 >= 30f)
	{
		func_898(func_1190(56), 7500, 0, 1, 0, 0, -1, -1, 0);
		_blip_set_modifier(Local_424[3]->f_1, -401963276);
		func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
		func_849(43);
	}
}

void func_1238(var uParam0)
{
	if (!func_164(57))
	{
		if (!func_164(59))
		{
			if (!func_164(55))
			{
				if (is_entity_in_volume(Global_35, Local_128.f_23, true, 0))
				{
					iLocal_1448[1] = _blip_add_for_coord(1664425300, get_pickup_coords(iVar2142));
					func_1184(47);
					if (is_ped_in_cover(&(Local_424[2]), 0, 0) && is_ped_in_cover(&(Local_424[3]), 0, 0))
					{
						func_849(40);
					}
					func_849(57);
				}
			}
		}
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (is_entity_dead(&(Local_424[iVar0])))
		{
			return;
		}
		set_ped_reset_flag(&(Local_424[iVar0]), 201, true);
		switch (Local_424[iVar0]->f_2)
		{
			case 1:
			case 26:
				if (iVar0 == 2)
				{
					disable_control_action(0, -640622144, false);
					func_853(4);
				}
				if ((is_waypoint_playback_going_on_for_ped(&(Local_424[iVar0]), func_438(24)) && get_ped_waypoint_progress(&(Local_424[iVar0])) >= 12) || !is_waypoint_playback_going_on_for_ped(&(Local_424[iVar0]), func_438(24)))
				{
					set_ped_path_avoid_fire(&(Local_424[iVar0]), false);
					set_entity_proofs(&(Local_424[iVar0]), 2, false);
					if (iVar0 == 2)
					{
						func_436(44);
						vVar3 = { func_1256(6) };
						func_1306();
						task_put_ped_directly_into_cover(0, vVar3, -1, 0, 0f, 1, 0, &(iLocal_230[6]), 1, 0, 0);
						func_1307(&(Local_424[iVar0]), 0);
					}
					else if (iVar0 == 3)
					{
						vVar3 = { func_1256(7) };
						task_put_ped_directly_into_cover(&(Local_424[iVar0]), vVar3, -1, 0, 0f, 1, 0, &(iLocal_230[7]), 1, 0, 0);
					}
					iVar13 = 27;
					while (iVar13 <= 41)
					{
						func_1722(iVar0, iVar13);
						iVar13++;
					}
					func_1244(27, 1);
					func_1221(iVar0, 27);
				}
				break;
			case 27:
				func_1723();
				if (iVar0 == 2)
				{
					func_853(4);
					if (is_entity_in_volume(Global_35, Local_128.f_3, true, 0))
					{
						if (func_1199(4, 1))
						{
							if (func_164(40))
							{
								vVar14 = { func_1724(48) };
							}
							else
							{
								vVar14 = { func_1724(49) };
							}
							func_1725(&(uParam0->f_5310), vVar14, 0, -1, 0, 0);
							if (is_sphere_visible(get_entity_coords(&(Local_424[2]), true, false), 1f))
							{
								set_gameplay_entity_hint(&(Local_424[2]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
							}
							func_135(uParam0, 9);
							iVar17 = 27;
							while (iVar17 <= 41)
							{
								func_1244(iVar17, 1);
								iVar17++;
							}
							iVar18 = 0;
							while (iVar18 <= 2)
							{
								if (does_entity_exist(&(Local_1523[iVar18])))
								{
									delete_vehicle(Local_1523[iVar18]);
								}
								iVar18++;
							}
							set_bit(&(Global_1956580->f_1), 6);
							func_1174(&(Local_128.f_9), -1612834106);
							func_1221(2, 28);
							func_1221(3, 28);
						}
					}
				}
				break;
			case 28:
				if (iVar0 == 2)
				{
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_1723();
					set_ped_max_move_blend_ratio(Global_35, 1f);
					disable_control_action(0, -620139643, false);
					disable_control_action(0, -1722177808, false);
					disable_control_action(0, 1287709438, false);
					disable_control_action(0, -2131587435, false);
					disable_control_action(0, -824104112, false);
					disable_control_action(0, 516589524, false);
					disable_control_action(0, 1390807691, false);
					disable_control_action(0, 1663574939, false);
					disable_control_action(0, -209515122, false);
					disable_control_action(0, 1934388793, false);
					disable_control_action(0, -1404316431, false);
					disable_control_action(0, -620139643, false);
					disable_control_action(0, -128997553, false);
					disable_control_action(0, 130948705, false);
					disable_control_action(0, 42190210, false);
					if (!is_ped_in_cover(Global_35, 0, 0))
					{
						disable_control_action(0, -562475458, false);
					}
					_set_ped_crouch_movement(Global_35, false, 0, false);
					if (!func_164(56))
					{
						if (_get_anim_scene_time(&(Local_2328[4])) >= 6.5f)
						{
							func_1252(uParam0, 27, 1);
							func_849(56);
						}
					}
					if (_0x005e6f28dd7ed58d(&(Local_2328[4]), "Dutch"))
					{
						remove_anim_scene_entity(&(Local_2328[4]), "Shooter", &(Local_424[27]));
						_set_entity_health(&(Local_424[27]), 0, &(Local_424[2]));
						func_1221(28, 8);
						func_1221(29, 8);
						func_1200(988.8073f, -6729.377f, 61.8652f, -1082130432);
						set_ped_sphere_defensive_area(&(Local_424[2]), 990.5f, -6733.3f, 57.9f, 1.5f, 1, 0, 0);
						func_1691(iVar0, 28);
						func_1691(iVar0, 29);
						func_1691(iVar0, 30);
						func_1691(iVar0, 31);
						func_1691(iVar0, 32);
						func_1691(iVar0, 33);
						_0xd05ad61f242c626b(&(Local_424[2]), 0.1f);
						func_27(vLocal_1569[25], 1);
						func_1306();
						task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[2]), false), 994.8f, -6723.9f, 58.2f, 2f, 1, 1f, 1082130432, 1, 2048, 1, -687903391, 0);
						task_combat_hated_targets(0, -1f);
						func_1307(&(Local_424[iVar0]), 0);
						_0x2208438012482a1a(&(Local_424[iVar0]), true, false);
						force_ped_motion_state(&(Local_424[2]), -530524, false, 0, false);
						_delete_volume(Local_128.f_9);
						if (!is_entity_dead(&(Local_424[27])))
						{
							_set_entity_health(&(Local_424[27]), 0, 0);
						}
						clear_bit(&(Global_1956580->f_1), 6);
						func_1726(3);
						func_135(uParam0, 10);
						func_1182(uParam0, 5);
						_set_blip_flash_style(Local_424[3]->f_1, -401963276);
						func_1232(uParam0, &(Local_424[2]), 1);
						if (does_blip_exist(&(iLocal_1448[1])))
						{
							remove_blip(iLocal_1448[1]);
						}
						func_1221(2, 32);
						func_1221(3, 30);
					}
					else
					{
						Jump @4613; //curOff = 1523
						if (!func_1727(Global_35, 995.7f, -6734.5f, 59.2f, 2.5f, 1, 1) && !is_valid_interior(get_interior_from_entity(Global_35)))
						{
							func_1221(3, 31);
						}
						Jump @4613; //curOff = 1586
						set_ped_sphere_defensive_area(&(Local_424[3]), 992.7f, -6733.2f, 58.1f, 1.5f, 1, 0, 0);
						set_ped_config_flag(&(Local_424[iVar0]), 252, false);
						func_1728(1);
						func_1691(iVar0, 28);
						func_1691(iVar0, 29);
						func_1691(iVar0, 30);
						func_1691(iVar0, 31);
						func_1691(iVar0, 32);
						func_1691(iVar0, 33);
						_0xd05ad61f242c626b(&(Local_424[iVar0]), 0.1f);
						func_1306();
						task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 1000.1f, -6720.2f, 58.1f, 2f, 1, 1f, 1082130432, 1, 2048, 0, -687903391, 0);
						task_combat_hated_targets(0, -1f);
						func_1307(&(Local_424[iVar0]), 0);
						func_1221(iVar0, 32);
						Jump @4613; //curOff = 1790
						if (iVar0 == 2)
						{
							if (!func_164(41))
							{
								if (is_entity_dead(&(Local_424[28])) || is_entity_dead(&(Local_424[29])))
								{
									if (Local_424[30]->f_2 == 7)
									{
										func_1221(30, 8);
									}
									if (Local_424[31]->f_2 == 7)
									{
										func_1221(31, 8);
									}
									func_849(41);
								}
							}
							else if (!func_164(42))
							{
								iVar1 = 28;
								while (iVar1 <= 31)
								{
									if (is_entity_dead(&(Local_424[iVar1])))
									{
										iVar2++;
									}
									iVar1++;
								}
								if (iVar2 >= 2)
								{
									if (Local_424[32]->f_2 == 7)
									{
										func_1221(32, 8);
									}
									if (Local_424[33]->f_2 == 7)
									{
										func_1221(33, 8);
									}
									func_849(42);
								}
							}
							else if (!is_entity_dead(&(Local_424[33])))
							{
								if (func_835(&(Local_424[33]), Global_35, 1, 1) <= 1f)
								{
									set_entity_only_damaged_by_player(&(Local_424[33]), false);
									func_1729(&(Local_424[3]), get_ped_bone_coords(&(Local_424[33]), 21030, 0f, 0f, 0f), Global_35, 0, 0, 1, 1);
									_0xe3639db78b3b5400(&(Local_424[33]));
									_0x986f7a51ee3e1f92(&(Local_424[33]), 1);
									set_entity_dynamic(&(Local_424[33]), true);
									activate_physics(&(Local_424[33]));
									set_ped_to_ragdoll_with_fall(&(Local_424[33]), 5000, 10000, 1, func_1688(1f, 1f, 1f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
									_set_entity_health(&(Local_424[33]), 0, Global_35);
									apply_force_to_entity(&(Local_424[33]), 1, func_1689(get_entity_coords(&(Local_424[2]), true, false), get_entity_coords(&(Local_424[33]), true, false), 15f), 0f, 0f, 0f, 0, false, false, true, true, true);
									_set_entity_health(&(Local_424[33]), 0, 0);
								}
							}
							if (func_26(vLocal_1569[25]))
							{
								if (func_845(vLocal_1569[25]) >= 20f)
								{
									func_1728(0);
									func_524(vLocal_1569[25]);
								}
							}
							func_1730(uParam0);
							if (((((is_entity_dead(&(Local_424[28])) && is_entity_dead(&(Local_424[29]))) && is_entity_dead(&(Local_424[30]))) && is_entity_dead(&(Local_424[31]))) && is_entity_dead(&(Local_424[32]))) && is_entity_dead(&(Local_424[33])))
							{
								_0xd05ad61f242c626b(&(Local_424[iVar0]), 1f);
								if (func_1731())
								{
									func_1184(52);
								}
								func_135(uParam0, 11);
								func_1221(2, 33);
								func_1221(3, 33);
							}
							else
							{
								Jump @4613; //curOff = 2439
								if (iVar0 == 2)
								{
									set_ped_sphere_defensive_area(&(Local_424[2]), 981.1f, -6745f, 55.3f, 1f, 0, 0, 0);
									set_ped_sphere_defensive_area(&(Local_424[3]), 982.5f, -6744f, 55.2f, 1f, 0, 0, 0);
									if (!is_entity_dead(&(Local_424[34])))
									{
										set_entity_only_damaged_by_player(&(Local_424[34]), true);
									}
									if (!is_entity_dead(&(Local_424[35])))
									{
										set_entity_only_damaged_by_player(&(Local_424[35]), true);
									}
									func_1221(34, 8);
									func_1200(983.7f, -6743.8f, 58.3f, -1082130432);
									func_1250(5);
									func_1182(uParam0, 4);
									Local_1265[4]->f_1 = 2;
									iLocal_2161 = 55;
									if (func_1731())
									{
										func_1184(50);
									}
									func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
									_blip_set_modifier(Local_424[3]->f_1, -401963276);
								}
								func_1691(iVar0, 34);
								func_1691(iVar0, 35);
								func_1306();
								task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 986.4f, -6754.8f, 55.7f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
								task_combat_hated_targets(0, -1f);
								func_1307(&(Local_424[iVar0]), 0);
								func_1221(iVar0, 34);
								Jump @4613; //curOff = 2777
								if (iVar0 == 2)
								{
									func_1730(uParam0);
									if (func_164(50))
									{
										func_1221(35, 8);
										func_898(func_1190(57), 7500, 1, 1, 0, 0, -1, -1, 0);
										iLocal_2161 = 57;
										func_1232(uParam0, &(Local_424[2]), 1);
										_set_blip_flash_style(Local_424[3]->f_1, -401963276);
										if (!is_entity_dead(&(Local_424[34])))
										{
											set_entity_only_damaged_by_player(&(Local_424[34]), false);
										}
										if (!is_entity_dead(&(Local_424[35])))
										{
											set_entity_only_damaged_by_player(&(Local_424[35]), false);
										}
										func_1221(2, 35);
										func_1221(3, 35);
									}
									else
									{
										Jump @4613; //curOff = 2936
										if (iVar0 == 2)
										{
											set_ped_sphere_defensive_area(&(Local_424[2]), 983.6692f, -6751.28f, 54.8169f, 0.75f, 1, 0, 0);
											set_ped_sphere_defensive_area(&(Local_424[3]), 983.4894f, -6747.397f, 54.8171f, 0.75f, 1, 0, 0);
										}
										func_1691(iVar0, 34);
										func_1691(iVar0, 35);
										func_1728(1);
										func_27(vLocal_1569[25], 1);
										func_1306();
										task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 987f, -6756.1f, 55.6f, 2f, 1, 4f, 1082130432, 1, 2048, 0, -687903391, 0);
										task_combat_hated_targets(0, -1f);
										func_1307(&(Local_424[iVar0]), func_1469(iVar0 == 2, 0f, 2.5f));
										func_1198(25);
										func_1221(iVar0, 36);
										Jump @4613; //curOff = 3148
										if (iVar0 == 2)
										{
											if (func_26(vLocal_1569[25]))
											{
												if (func_845(vLocal_1569[25]) >= 4f)
												{
													func_1728(2);
													func_524(vLocal_1569[25]);
												}
											}
											if (is_entity_dead(&(Local_424[34])) && is_entity_dead(&(Local_424[35])))
											{
												if (func_1731())
												{
													func_1184(53);
												}
												func_135(uParam0, 12);
												func_1221(2, 37);
												func_1221(3, 37);
											}
											else
											{
												func_1730(uParam0);
												Jump @4613; //curOff = 3277
												if (iVar0 == 2)
												{
													func_1221(36, 8);
													func_1221(37, 8);
													func_1221(38, 8);
													set_ped_sphere_defensive_area(&(Local_424[2]), 985.7438f, -6757.455f, 54.8167f, 1f, 1, 0, 0);
													set_ped_sphere_defensive_area(&(Local_424[3]), 989.0342f, -6756.615f, 54.8173f, 1f, 1, 0, 0);
													func_1200(974.1275f, -6737.229f, 48.7166f, -1082130432);
													if (!is_entity_dead(&(Local_424[36])))
													{
														set_entity_invincible(&(Local_424[36]), true);
													}
													if (!is_entity_dead(&(Local_424[37])))
													{
														set_entity_invincible(&(Local_424[37]), true);
													}
													if (!is_entity_dead(&(Local_424[38])))
													{
														set_entity_invincible(&(Local_424[38]), true);
													}
													func_1306();
													task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 989.5f, -6766.8f, 51.6f, 2f, 1, 4f, 1082130432, 1, 2048, 0, -687903391, 0);
													task_combat_hated_targets(0, -1f);
													func_1307(&(Local_424[iVar0]), func_1469(iVar0 == 2, 0f, 0.4f));
												}
												func_1691(iVar0, 36);
												func_1691(iVar0, 37);
												func_1691(iVar0, 38);
												func_1691(iVar0, 39);
												func_1691(iVar0, 40);
												func_1691(iVar0, 41);
												func_1221(iVar0, 38);
												Jump @4613; //curOff = 3617
												if (iVar0 == 2)
												{
													func_1730(uParam0);
													if (func_164(51))
													{
														func_1221(2, 39);
														func_1221(3, 39);
													}
													else
													{
														Jump @4613; //curOff = 3658
														if (iVar0 == 2)
														{
															if (!is_entity_dead(&(Local_424[36])))
															{
																set_entity_invincible(&(Local_424[36]), false);
															}
															if (!is_entity_dead(&(Local_424[37])))
															{
																set_entity_invincible(&(Local_424[37]), false);
															}
															if (!is_entity_dead(&(Local_424[38])))
															{
																set_entity_invincible(&(Local_424[38]), false);
															}
															func_1728(1);
															func_27(vLocal_1569[25], 1);
															func_50(&(Local_424[2]));
															_0xfc3db99c8144cd81(&(Local_424[2]), Local_128.f_91, 1, 0, 0);
															func_50(&(Local_424[3]));
															_0xfc3db99c8144cd81(&(Local_424[3]), Local_128.f_89, 1, 0, 0);
														}
														set_ped_combat_attributes(&(Local_424[iVar0]), 0, true);
														func_1306();
														task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), 982.9f, -6785.2f, 49.4f, 2f, 1, 1f, 1082130432, 1, 2048, 0, -687903391, 0);
														task_combat_hated_targets(0, -1f);
														func_1307(&(Local_424[iVar0]), func_1469(iVar0 == 2, 0f, 0.5f));
														func_1221(iVar0, 40);
														Jump @4613; //curOff = 3930
														if (iVar0 == 2)
														{
															if (!is_entity_dead(&(Local_424[36])))
															{
																if (is_entity_in_volume(&(Local_424[2]), Local_128.f_10, true, 0))
																{
																	func_1729(&(Local_424[2]), get_ped_bone_coords(&(Local_424[36]), 21030, 0f, 0f, 0f), 0, 0, 0, 0, 1);
																	set_ped_to_ragdoll_with_fall(&(Local_424[36]), 5000, 10000, 1, func_1688(-5f, -15f, 5f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
																	apply_force_to_entity(&(Local_424[36]), 1, -5f, -15f, 5f, 0f, 0f, 0f, 0, false, false, true, true, true);
																	_set_entity_health(&(Local_424[36]), 0, &(Local_424[2]));
																}
															}
															if (func_26(vLocal_1569[25]))
															{
																if (func_845(vLocal_1569[25]) >= 20f)
																{
																	func_1728(0);
																	func_524(vLocal_1569[25]);
																}
															}
															func_1730(uParam0);
															if (((((is_entity_dead(&(Local_424[36])) && is_entity_dead(&(Local_424[37]))) && is_entity_dead(&(Local_424[38]))) && is_entity_dead(&(Local_424[39]))) && is_entity_dead(&(Local_424[40]))) && is_entity_dead(&(Local_424[41])))
															{
																func_1221(2, 41);
																func_1221(3, 41);
															}
															else
															{
																Jump @4613; //curOff = 4264
																if (iVar0 == 2)
																{
																	func_1200(974.4f, -6794.4f, 49.9f, -1082130432);
																	func_1182(uParam0, 4);
																	iLocal_2161 = 55;
																	func_1684(uParam0, func_1190(55), -1082130432, 0, 0, -1, -1, 0);
																	func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
																	_blip_set_modifier(Local_424[3]->f_1, -401963276);
																	func_1257(0, 1);
																}
																func_1306();
																task_follow_waypoint_recording(0, func_438(25), 0, 0, -1, 0, 0, -1);
																func_1307(&(Local_424[iVar0]), func_1469(iVar0 == 2, 0f, 0.8f));
																func_1221(iVar0, 42);
																Jump @4613; //curOff = 4435
																if (func_1692(&(Local_424[iVar0])))
																{
																	if (is_waypoint_playback_going_on_for_ped(&(Local_424[iVar0]), func_438(25)))
																	{
																		waypoint_playback_override_speed(&(Local_424[iVar0]), 2f, 1, 0.4f, 0);
																		if (!get_ped_waypoint_progress(&(Local_424[iVar0])) < 23)
																		{
																			Jump @4613; //curOff = 4509
																		}
																	}
																else
																{
																	}
																	else
																	{
																		if (iVar0 == 2)
																		{
																			iVar19 = 8;
																		}
																		else if (iVar0 == 3)
																		{
																			iVar19 = 9;
																		}
																		Var20 = { func_1256(iVar19) };
																		func_1204(iVar19);
																		task_put_ped_directly_into_cover(&(Local_424[iVar0]), Var20, -1, 0, 0f, Var20.f_8, Var20.f_9, &(iLocal_230[iVar19]), 1, 0, 0);
																		func_1221(iVar0, 43);
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

void func_1239()
{
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		if (is_entity_dead(&(Local_424[iVar0])))
		{
		}
		else
		{
			switch (Local_424[iVar0]->f_2)
			{
				case 1:
					iVar1 = 27;
					while (iVar1 <= 41)
					{
						func_1722(iVar0, iVar1);
						iVar1++;
					}
					func_1221(iVar0, 8);
					break;
				case 8:
					if (iVar0 == 5)
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_48, 1, 0, 0);
					}
					else if (iVar0 == 4)
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_47, 1, 0, 0);
					}
					if (!is_entity_dead(&(Local_424[12])))
					{
						func_1306();
						task_combat_ped(0, &(Local_424[12]), 16777216, 0);
						func_1307(&(Local_424[iVar0]), 0);
					}
					func_1221(iVar0, 9);
					break;
				case 9:
					if (func_1180(30, (52 + iVar0)))
					{
						if (!func_1692(&(Local_424[iVar0])))
						{
							func_1221(iVar0, 8);
						}
						vVar2 = { get_entity_coords(&(Local_424[iVar0]), true, false) };
						if (vVar2.z < 61.6f)
						{
							if (iVar0 == 5)
							{
								_set_entity_coords_and_heading(&(Local_424[iVar0]), func_472(2, 3), func_1255(2, 3), true, false, true);
							}
							else if (iVar0 == 4)
							{
								_set_entity_coords_and_heading(&(Local_424[iVar0]), func_472(2, 2), func_1255(2, 2), true, false, true);
							}
							_0x9587913b9e772d29(&(Local_424[iVar0]), 0);
							func_1221(iVar0, 8);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1240()
{
	if (is_entity_dead(&(Local_424[6])))
	{
		return;
	}
	func_853(3);
	switch (Local_424[6]->f_2)
	{
		case 1:
			if (Local_2328[3]->f_1 == 8)
			{
				task_follow_nav_mesh_to_coord(&(Local_424[6]), 987.5f, -6744.7f, 62.9f, 2f, 20000, 2f, 0, 40000f);
				set_ped_can_ragdoll_from_player_impact(&(Local_424[6]), false);
				func_1221(6, 17);
			}
			break;
		case 17:
			if (!func_1693(&(Local_424[6]), 713668775))
			{
				func_1199(3, 1);
				func_1221(6, 12);
			}
			break;
		case 12:
			if (!_is_anim_scene_started(&(Local_2328[3]), false))
			{
			}
			else
			{
				if (!func_26(vLocal_1569[15]))
				{
					func_27(vLocal_1569[15], 0);
					fLocal_2144 = get_random_float_in_range(10f, 15f);
				}
				if (func_164(11) && _0x8d81e7824b7753f7(&(Local_2328[3]), "s_base", 1))
				{
					_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Flinch_01", true);
					func_1221(6, 13);
				}
				if (_0x8d81e7824b7753f7(&(Local_2328[3]), "s_base", 1))
				{
					if (!func_164(45))
					{
						if (!func_1215() && !func_1216())
						{
							if (is_entity_in_volume(Global_35, Local_128.f_20, true, 0))
							{
								_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Get_This_Working_Properly_LEFT", true);
								func_849(45);
								func_1221(6, 13);
								Jump @581; //curOff = 373
							}
							else if (is_entity_in_volume(Global_35, Local_128.f_21, true, 0))
							{
								_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Get_This_Working_Properly_RIGHT", true);
								func_849(45);
								func_1221(6, 13);
							}
							else
							{
								if (is_entity_in_volume(Global_35, Local_128.f_22, true, 0))
								{
									_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Idle_v02", true);
									func_1221(6, 13);
								}
								else if (func_845(vLocal_1569[15]) >= fVar2142)
								{
									if (func_1217())
									{
										_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Idle_v01", true);
										func_1221(6, 13);
									}
									else
									{
										_set_anim_scene_playback_list_bool(&(Local_2328[3]), "pbl_Idle_v03", true);
										func_1221(6, 13);
									}
								}
								Jump @581; //curOff = 539
								if (_0x8d81e7824b7753f7(&(Local_2328[3]), "s_BASE", 1))
								{
									func_524(vLocal_1569[15]);
									func_1221(6, 12);
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

void func_1241(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1462)
	{
		if (!func_794(Local_1465[iVar0]->f_6, func_33(uParam0)))
		{
		}
		else
		{
			switch (Local_1465[iVar0]->f_5)
			{
				case 1:
					if (iVar0 == 3)
					{
						if (!is_entity_dead(Global_35))
						{
							if (is_entity_in_volume(Global_35, Local_128.f_1, true, 0) && !is_entity_in_volume(Global_35, Local_128.f_2, true, 0))
							{
								Local_1465[iVar0]->f_5 = 2;
							}
						}
					}
					else if (iVar0 == 0)
					{
						if (func_164(9) && !is_entity_in_volume(Global_35, Local_128.f_5, true, 0))
						{
							Local_1465[iVar0]->f_5 = 2;
						}
					}
					break;
				case 2:
					if (Local_1465[iVar0]->f_1 > 0f)
					{
						func_27(&(Local_1465[iVar0]->f_2), 1);
						Local_1465[iVar0]->f_5 = 3;
					}
					else
					{
						Local_1465[iVar0]->f_5 = 4;
					}
					break;
				case 3:
					if (func_845(&(Local_1465[iVar0]->f_2)) >= Local_1465[iVar0]->f_1)
					{
						Local_1465[iVar0]->f_5 = 4;
					}
					break;
				case 4:
					func_1268(uParam0, func_1190(&(Local_1465[iVar0])), "", 1, 0);
					Local_1465[iVar0]->f_5 = 5;
					break;
			}
		}
		iVar0++;
	}
}

void func_1242(var uParam0)
{
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0]->f_2 == 18)
		{
		}
		else if (is_entity_dead(&(Local_424[iVar0])))
		{
			Local_1700.f_387++;
			if (Local_1265[5]->f_1 == 1)
			{
				func_1250(5);
			}
			func_1221(iVar0, 18);
		}
		else
		{
			if (!Local_424[iVar0]->f_2 == 8 && !Local_424[iVar0]->f_2 == 9)
			{
				if (func_1732(iVar0))
				{
					func_1221(iVar0, 8);
				}
			}
			switch (Local_424[iVar0]->f_2)
			{
				case 1:
					if (!iVar0 == 27)
					{
						func_1252(uParam0, iVar0, 1);
						_blip_set_modifier(Local_424[iVar0]->f_1, -1186550032);
					}
					if (iVar0 == 37 || iVar0 == 38)
					{
						_0x6569f31a01b4c097(&(Local_424[iVar0]), 0, 0);
						_0x6569f31a01b4c097(&(Local_424[iVar0]), 1, 0);
						_0x18ff3110cf47115d(&(Local_424[iVar0]), 2, 0);
						_0x18ff3110cf47115d(&(Local_424[iVar0]), 7, 0);
					}
					switch (iVar0)
					{
						case 28:
						case 29:
						case 30:
						case 31:
						case 34:
						case 35:
							set_ped_config_flag(&(Local_424[iVar0]), 138, true);
							break;
					}
					set_ped_config_flag(&(Local_424[iVar0]), 301, true);
					func_1690(&(Local_424[iVar0]), 0);
					set_entity_invincible(&(Local_424[iVar0]), false);
					func_1221(iVar0, 2);
					break;
				case 2:
					if (func_164(0))
					{
					}
					else
					{
						remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
						func_849(0);
						func_1221(iVar0, 3);
						Jump @1565; //curOff = 457
						if (func_164(0))
						{
						}
						else
						{
							func_866(&(Local_424[iVar0]), func_1733(iVar0, 0), -1, 2, 0, 1056964608, 1065353216, 0);
							func_849(0);
							if (!func_1733(iVar0, 1) == 0)
							{
								func_1221(iVar0, 4);
							}
							else
							{
								func_1221(iVar0, 6);
							}
							Jump @1565; //curOff = 539
							if (func_164(0))
							{
							}
							else
							{
								func_866(&(Local_424[iVar0]), func_1733(iVar0, 1), -1, 2, 0, 1056964608, 1065353216, 0);
								func_849(0);
								func_1221(iVar0, 6);
								Jump @1565; //curOff = 598
								set_current_ped_weapon(&(Local_424[iVar0]), func_1733(iVar0, 0), true, 0, false, false);
								if (!func_1733(iVar0, 1) == 0)
								{
									set_current_ped_weapon(&(Local_424[iVar0]), func_1733(iVar0, 1), true, 1, false, false);
								}
								set_ped_using_action_mode(&(Local_424[iVar0]), true, -1, 0);
								task_aim_at_coord(&(Local_424[iVar0]), _0xf70f00013a62f866(Local_128.f_7), -1, 0, 0);
								func_1221(iVar0, 7);
								Jump @1565; //curOff = 701
								Jump @1565; //curOff = 704
								set_ped_combat_attributes(&(Local_424[iVar0]), 46, true);
								_set_blip_flash_style(Local_424[iVar0]->f_1, -1186550032);
								register_target(&(Local_424[iVar0]), Global_35, 1);
								func_1691(iVar0, 2);
								func_1691(iVar0, 3);
								if (((((iVar0 == 28 || iVar0 == 29) || iVar0 == 30) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33)
								{
									switch (iVar0)
									{
										case 28:
											fVar5 = 0f;
											_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_59, 0, 0, 0);
											break;
										case 29:
											fVar5 = 0.4f;
											_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_60, 0, 0, 0);
											break;
										case 30:
											fVar5 = 0f;
											_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_61, 0, 0, 0);
											break;
										case 31:
											fVar5 = 0.6f;
											_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_62, 0, 0, 0);
											break;
										case 32:
											fVar5 = 0f;
											_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_63, 0, 0, 0);
											break;
									}
									if (iVar0 == 33)
									{
										remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
										set_ped_combat_attributes(&(Local_424[iVar0]), 93, true);
										set_ped_combat_movement(&(Local_424[iVar0]), 2);
										_0x815c0074a1bc0d93(&(Local_424[iVar0]), 2);
										func_866(&(Local_424[iVar0]), -618550132, -1, 1, 0, 1056964608, 1065353216, 0);
										func_1306();
										task_follow_nav_mesh_to_coord(0, 998.3f, -6719.9f, 57.7f, 3f, 20000, (0.25f * 4f), 1, 40000f);
										task_combat_ped(0, Global_35, 16777216, 4112);
										func_1307(&(Local_424[iVar0]), 0);
										set_entity_only_damaged_by_player(&(Local_424[iVar0]), true);
									}
									else
									{
										func_1306();
										task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), &(Local_424[2]), 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
										task_combat_hated_targets(0, -1f);
										func_1307(&(Local_424[iVar0]), fVar5);
									}
								}
								else if (iVar0 == 34 || iVar0 == 35)
								{
									if (iVar0 == 35)
									{
										fVar5 = 1f;
									}
									func_1722(iVar0, 5);
									func_1722(iVar0, 4);
									func_1722(iVar0, 6);
									Var1 = { func_217(iVar0, 2, 2) };
									set_ped_sphere_defensive_area(&(Local_424[iVar0]), Var1, Var1.f_3, 1, 0, 0);
									func_1306();
									task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), Global_35, 2f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
									task_combat_hated_targets(0, -1f);
									func_1307(&(Local_424[iVar0]), fVar5);
								}
								else if ((iVar0 == 36 || iVar0 == 37) || iVar0 == 38)
								{
									Var1 = { func_217(iVar0, 2, 2) };
									set_ped_sphere_defensive_area(&(Local_424[iVar0]), Var1, 1f, 1, 0, 0);
									task_combat_hated_targets(&(Local_424[iVar0]), -1f);
								}
								else
								{
									Var1 = { func_217(iVar0, 1, 2) };
									set_ped_sphere_defensive_area(&(Local_424[iVar0]), Var1, Var1.f_3, 1, 0, 0);
									task_combat_hated_targets(&(Local_424[iVar0]), -1f);
								}
								func_1221(iVar0, 9);
								Jump @1565; //curOff = 1540
								if (iVar0 == 33)
								{
									set_ped_min_move_blend_ratio(&(Local_424[iVar0]), 2f);
								}
							}
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1243(var uParam0)
{
	vVar0.f_6 = -1;
	iVar8 = 39;
	iVar9 = 41;
	switch (iVar2374)
	{
		case 0:
			break;
		case 1:
			iLocal_2162 = get_sound_id();
			iVar7 = iVar8;
			while (iVar7 <= iVar9)
			{
				vVar10 = { func_217(iVar7, 2, 2) };
				func_1306();
				task_go_to_coord_while_aiming_at_entity(0, vVar10, Global_35, 3f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				task_combat_hated_targets(0, -1f);
				func_1307(&(Local_424[iVar7]), 0);
				force_ped_motion_state(&(Local_424[iVar7]), -1115154469, false, 0, false);
				iVar7++;
			}
			func_135(uParam0, 13);
			iLocal_2377 = 2;
			break;
		case 2:
			func_858(13, 0);
			iLocal_2120 = start_particle_fx_looped_at_coord(func_1294(6), get_entity_coords(&(iLocal_1233[13]), true, false), 0f, 0f, 0f, 6f, false, false, false, false);
			if (!iVar2159 == -1)
			{
				_0xf1c5310feaa36b48(iVar2159, func_1294(10), &(iLocal_1233[13]), func_1294(9), 0, 0);
			}
			set_entity_lod_dist(&(iLocal_1233[13]), 200);
			set_entity_collision(&(iLocal_1233[13]), false, false);
			func_1200(977.5f, -6792f, 49.9f, -1082130432);
			func_27(vLocal_1569[16], 1);
			func_1734(0);
			iLocal_2377 = 3;
			break;
		case 3:
			vVar0 = { func_1176(13) };
			fVar14 = (func_845(vLocal_1569[16]) / 2f);
			if (fVar14 > 1f)
			{
				fVar14 = 1f;
			}
			set_entity_coords(&(iLocal_1233[13]), func_1735(vVar0, vVar0.f_3, fVar14), true, false, true, true);
			set_particle_fx_looped_offsets(iVar2117, get_entity_coords(&(iLocal_1233[13]), true, false), 0f, 0f, 0f);
			if (fVar14 == 1f)
			{
				func_27(vLocal_1569[18], 0);
				iLocal_2377 = 4;
			}
			break;
		case 4:
			vVar0 = { func_1176(13) };
			func_1247(0, vVar0.f_3, 3f);
			_play_sound_from_position(func_1294(12), 980f, -6792.5f, 49.6f, func_1294(9), false, 0, true, 0);
			iVar7 = 27;
			while (iVar7 <= 41)
			{
				if (!is_entity_dead(&(Local_424[iVar7])))
				{
					if (iVar7 < 36)
					{
						_set_entity_health(&(Local_424[iVar7]), 0, 0);
					}
					else
					{
						start_entity_fire(&(Local_424[iVar7]), 100f, 0, 4);
						set_entity_dynamic(&(Local_424[iVar7]), true);
						activate_physics(&(Local_424[iVar7]));
						set_ped_to_ragdoll_with_fall(&(Local_424[iVar7]), 5000, 10000, 1, func_1688(func_1689(get_entity_coords(&(Local_424[iVar7]), true, false), vVar0, 1065353216)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
						vVar15 = { (-5f + get_random_float_in_range(-1f, 1f)), (18f + get_random_float_in_range(-2f, 2f)), (10f + get_random_float_in_range(-1f, 1f)) };
						apply_force_to_entity(&(Local_424[iVar7]), 1, vVar15, 0f, 0f, 0f, 0, false, false, true, true, true);
						_set_entity_health(&(Local_424[iVar7]), 0, 0);
					}
				}
				iVar7++;
			}
			func_1736(&(Local_424[39]));
			_0x3210bcb36af7621b(iVar2159);
			release_sound_id(iVar2159);
			iLocal_2162 = -1;
			func_135(uParam0, 14);
			remove_particle_fx(iVar2117, false);
			delete_object(iLocal_1233[13]);
			iLocal_2377 = 5;
			break;
	}
}

void func_1244(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1483(iParam0, 128);
	}
	else
	{
		func_1269(iParam0, 128);
	}
	set_entity_visible(&(Local_424[iParam0]), bParam1);
	set_entity_invincible(&(Local_424[iParam0]), !bParam1);
	freeze_entity_position(&(Local_424[iParam0]), !bParam1);
	if (bParam1)
	{
		set_entity_proofs(&(Local_424[iParam0]), 0, false);
	}
	else
	{
		set_entity_proofs(&(Local_424[iParam0]), 5, false);
	}
}

Vector3 func_1245(int iParam0, int iParam1)
{
	return func_1490(iParam0, iParam1);
}

float func_1246(int iParam0, int iParam1)
{
	return func_1491(iParam0, iParam1);
}

void func_1247(int iParam0, vector3 vParam1, float fParam4)
{
	func_849(11);
	if (iParam0 == -1)
	{
		start_particle_fx_non_looped_at_coord(func_1294(5), vParam1, 0f, 0f, 0f, fParam4, false, false, false);
	}
	else
	{
		start_particle_fx_non_looped_at_coord(func_1294(5), vParam1, func_1737(func_1689(Local_1700.f_3[iParam0]->f_13.f_13, vParam1, 1f)), fParam4, false, false, false);
	}
	add_explosion(vParam1, 25, 0.1f, true, true, 0f);
	if (does_cam_exist(&(iLocal_1494[0])))
	{
		shake_cam(&(iLocal_1494[0]), func_1294(15), func_1738(vParam1));
	}
	else
	{
		shake_gameplay_cam(func_1294(15), func_1738(vParam1));
	}
	_0x09e378c52b1433b5(Global_35, vParam1, fParam4);
	_0x09e378c52b1433b5(&(Local_424[2]), vParam1, fParam4);
	_0x09e378c52b1433b5(&(Local_424[3]), vParam1, fParam4);
}

void func_1248(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1739(iParam0, 0, 0);
	if (func_1740(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1741(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1742(iParam0, 1);
			}
			else
			{
				func_1743(iParam0, 1);
			}
		}
		else
		{
			func_1744(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1745())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1249()
{
	if (!func_164(49))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_7, true, 0))
		{
			func_849(49);
		}
	}
	if (!func_164(50))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_45, true, 0))
		{
			func_849(50);
		}
	}
	if (!func_164(51))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_49, true, 0))
		{
			func_849(51);
		}
	}
	if (!func_164(52))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_10, true, 0))
		{
			func_849(52);
		}
	}
	if (!func_164(53))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_46, true, 0))
		{
			func_849(53);
		}
	}
}

void func_1250(int iParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (Local_1265[iParam0]->f_1 == 1)
	{
		func_524(&(Local_1265[iParam0]->f_2));
		Local_1265[iParam0]->f_1 = 2;
	}
	if (iVar2108 == Local_1265[iParam0]->f_11)
	{
		iLocal_2111 = 0;
	}
}

void func_1251(int iParam0, int iParam1)
{
	if (!does_entity_exist(&(iLocal_1233[iParam0])))
	{
		return;
	}
	delete_object(iLocal_1233[iParam0]);
}

void func_1252(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 3 || iParam1 == 6)
	{
		if (bParam2)
		{
			if (!does_blip_exist(Local_424[iParam1]->f_1))
			{
				Local_424[iParam1]->f_1 = _blip_add_for_entity(422991367, &(Local_424[iParam1]));
			}
			if (iParam1 == 3)
			{
				set_blip_name_from_text_file(Local_424[iParam1]->f_1, func_1190(2));
			}
			else if (iParam1 == 6)
			{
				set_blip_name_from_text_file(Local_424[iParam1]->f_1, func_1190(3));
			}
		}
		else if (does_blip_exist(Local_424[iParam1]->f_1))
		{
			remove_blip(&(Local_424[iParam1]->f_1));
		}
		return;
	}
	if (iParam1 >= 12 && iParam1 <= 100)
	{
		if (bParam2)
		{
			if (!does_blip_exist(Local_424[iParam1]->f_1))
			{
				Local_424[iParam1]->f_1 = _blip_add_for_entity(831283580, &(Local_424[iParam1]));
			}
			if (iParam1 == 71 || iParam1 == 27)
			{
				_blip_set_modifier(Local_424[iParam1]->f_1, -948075745);
			}
			if ((!iParam1 >= 13 && !iParam1 <= 26) && !iParam1 == 27)
			{
				_blip_set_modifier(Local_424[iParam1]->f_1, -1034486097);
			}
		}
		else
		{
			remove_blip(&(Local_424[iParam1]->f_1));
		}
		return;
	}
}

void func_1253(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!is_entity_dead(Global_35))
		{
			set_current_ped_weapon(Global_35, get_best_ped_weapon(Global_35, false, false), bParam0, 0, false, false);
		}
	}
	if (!is_entity_dead(&(Local_424[2])))
	{
		set_current_ped_weapon(&(Local_424[2]), &(iLocal_1452[5]), bParam0, 0, false, false);
		set_current_ped_weapon(&(Local_424[2]), &(iLocal_1452[6]), bParam0, 1, false, false);
	}
	if (!is_entity_dead(&(Local_424[5])))
	{
		set_current_ped_weapon(&(Local_424[5]), &(iLocal_1452[2]), bParam0, 0, false, false);
	}
	if (!is_entity_dead(&(Local_424[4])))
	{
		set_current_ped_weapon(&(Local_424[4]), &(iLocal_1452[3]), bParam0, 0, false, false);
		set_current_ped_weapon(&(Local_424[4]), &(iLocal_1452[4]), bParam0, 1, false, false);
	}
	if (!bParam2)
	{
		if (!is_entity_dead(&(Local_424[3])))
		{
			set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), bParam0, 0, false, false);
		}
	}
	if (!is_entity_dead(&(Local_424[6])))
	{
		set_current_ped_weapon(&(Local_424[6]), &(iLocal_1452[8]), bParam0, 0, false, false);
	}
}

int func_1254(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_663(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_663(iVar4) && iVar4 != iVar0)
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
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
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
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_663(iVar0))
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
	if (iParam0 == Global_35)
	{
		func_578(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1746(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1023(iVar0))
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

float func_1255(int iParam0, int iParam1)
{
	return func_1489(iParam0, iParam1);
}

struct<10> func_1256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 986.5427f, -6747.713f, 62.1253f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 1:
			Var0 = { 988.301f, -6751.28f, 63.1315f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 2:
			Var0 = { 992.035f, -6750.471f, 63.12f };
			Var0.f_3 = 210.0082f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 3:
			Var0 = { 991.19f, -6750.875f, 62.126f };
			Var0.f_3 = 160f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 4:
			Var0 = { 987.6437f, -6750.386f, 62.4674f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 5:
			Var0 = { 990.7047f, -6740.652f, 62.1373f };
			Var0.f_3 = 100f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 6:
			Var0 = { 994.8373f, -6735.514f, 57.3151f };
			Var0.f_3 = 20f;
			Var0.f_4 = 0;
			Var0.f_5 = 2;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 7:
			Var0 = { 996.1276f, -6739.941f, 57.3149f };
			Var0.f_3 = 20f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 8:
			Var0 = { 978.73f, -6794.318f, 49.498f };
			Var0.f_3 = 110f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_8 = 1;
			Var0.f_9 = 1;
			break;
		case 9:
			Var0 = { 980.246f, -6796.583f, 48.916f };
			Var0.f_3 = 253.5987f;
			Var0.f_4 = 2;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_8 = 1;
			Var0.f_9 = 0;
			break;
		case 10:
			Var0 = { 966.985f, -6761.077f, 43.839f };
			Var0.f_3 = 40f;
			Var0.f_4 = 1;
			Var0.f_5 = 2;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 11:
			Var0 = { 968.785f, -6762.936f, 43.879f };
			Var0.f_3 = 135f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1257(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_178(14);
	}
	else
	{
		func_849(14);
	}
	if (bParam1)
	{
		func_524(vLocal_1569[1]);
	}
}

void func_1258(var uParam0)
{
	if (does_blip_exist(Local_1523[8]->f_1))
	{
		if (is_entity_dead(&(Local_1523[8])) || ((is_entity_dead(&(Local_424[57])) && is_entity_dead(&(Local_424[58]))) && is_entity_dead(&(Local_424[59]))))
		{
			remove_blip(&(Local_1523[8]->f_1));
		}
	}
	iVar0 = 57;
	while (iVar0 <= 59)
	{
		if (Local_424[iVar0]->f_2 == 18)
		{
		}
		else
		{
			if (is_entity_dead(&(Local_1523[8])))
			{
				_set_entity_health(&(Local_424[iVar0]), 0, 0);
			}
			if (is_entity_dead(&(Local_424[iVar0])))
			{
				Local_1700.f_388++;
				func_1221(iVar0, 18);
			}
			else
			{
				switch (Local_424[iVar0]->f_2)
				{
					case 1:
						if (iVar0 == 57)
						{
							set_ped_into_vehicle(&(Local_424[iVar0]), &(Local_1523[8]), -1);
						}
						else
						{
							set_ped_into_vehicle(&(Local_424[iVar0]), &(Local_1523[8]), -2);
						}
						set_ped_combat_attributes(&(Local_424[iVar0]), 3, false);
						func_1722(iVar0, 5);
						func_1722(iVar0, 3);
						func_1722(iVar0, 6);
						func_1691(iVar0, 1);
						func_1691(iVar0, 2);
						func_1691(iVar0, 3);
						set_entity_invincible(&(Local_424[iVar0]), true);
						func_1722(2, iVar0);
						func_1722(3, iVar0);
						func_1221(iVar0, 5);
						break;
					case 5:
						func_27(vLocal_1569[24], 0);
						if (func_845(vLocal_1569[24]) >= 20f)
						{
							func_1221(iVar0, 21);
						}
						break;
					case 21:
						set_ped_seeing_range(&(Local_424[iVar0]), 180f);
						if (iVar0 == 57)
						{
							_task_vehicle_drive_to_destination_2(&(Local_1523[8]), 1018.4f, -6808.2f, 40.6f, 3f, 0, 3, 1f, 1f);
							func_1747(8);
							func_27(vLocal_1569[21], 0);
						}
						else
						{
							func_1691(iVar0, 1);
							func_1691(iVar0, 2);
							func_1691(iVar0, 3);
							task_combat_hated_targets_in_area(&(Local_424[iVar0]), _0xf70f00013a62f866(Local_128.f_8), 200f, 0, 1);
						}
						func_1221(iVar0, 22);
						break;
					case 22:
						if (!bVar4)
						{
							bVar4 = true;
							if (iVar0 == 57)
							{
								if ((func_845(vLocal_1569[21]) >= 10f && !is_entity_occluded(&(Local_1523[8]))) && ((func_1748(&(Local_424[57]), 1, 1, 1, 0, 1) || func_1748(&(Local_424[58]), 1, 1, 1, 0, 1)) || func_1748(&(Local_424[59]), 1, 1, 1, 0, 1)))
								{
									iLocal_2260 = func_1200(get_entity_coords(&(Local_1523[8]), true, false), 30f);
									if (!iVar2257 == -1)
									{
										set_entity_invincible(&(Local_424[57]), false);
										set_entity_invincible(&(Local_424[58]), false);
										set_entity_invincible(&(Local_424[59]), false);
										func_1221(57, 16);
										func_1221(58, 16);
										func_1221(59, 16);
									}
									else
									{
										Jump @1175; //curOff = 765
										if (Local_1700.f_3[iVar2257]->f_11 == 3)
										{
											if (!bVar4)
											{
												Local_1700.f_3[iVar2257]->f_13.f_10 = { get_entity_coords(&(Local_1523[8]), true, false) };
												bVar4 = true;
											}
										}
										else if (Local_1700.f_3[iVar2257]->f_11 == 0)
										{
											set_entity_invincible(&(Local_424[iVar0]), false);
											vVar1 = { get_entity_coords(&(Local_424[iVar0]), true, true) };
											_0xe0b61ed8bb37712f(&(Local_424[iVar0]));
											set_entity_coords(&(Local_424[iVar0]), vVar1, true, false, true, true);
											start_entity_fire(&(Local_424[iVar0]), 100f, 0, 4);
											set_entity_dynamic(&(Local_424[iVar0]), true);
											activate_physics(&(Local_424[iVar0]));
											set_ped_to_ragdoll_with_fall(&(Local_424[iVar0]), 5000, 10000, 1, func_1688(1f, 1f, 1f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
											_set_entity_health(&(Local_424[iVar0]), 0, 0);
											apply_force_to_entity(&(Local_424[iVar0]), 1, (-20f + get_random_float_in_range(-3f, 3f)), (1f + get_random_float_in_range(-3f, 3f)), (20f + get_random_float_in_range(-3f, 3f)), 0f, 0f, 0f, 0, false, false, true, true, true);
											if (iVar0 == 59)
											{
												set_boat_sinks_when_wrecked(&(Local_1523[8]), true);
												func_1247(iVar2257, get_entity_coords(&(Local_1523[8]), true, false), 4f);
												set_entity_collision(&(Local_1523[8]), false, false);
												activate_physics(&(Local_1523[8]));
												set_entity_dynamic(&(Local_1523[8]), true);
												add_explosion(get_entity_coords(&(Local_1523[8]), true, false), 22, 4f, true, false, 4f);
												_set_entity_health(&(Local_1523[8]), 0, 0);
											}
											func_1221(iVar0, 17);
										}
										iVar0++;
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

void func_1259(var uParam0)
{
	bVar1 = true;
	switch (iVar2258)
	{
		case 0:
			if (is_entity_in_volume(Global_35, Local_128.f_55, true, 0))
			{
				func_1749(4);
			}
			else if (is_entity_in_volume(Global_35, Local_128.f_54, true, 0))
			{
				func_1749(1);
			}
			break;
		case 1:
			if (func_856(uParam0, 60, 62, 517))
			{
				iVar0 = 60;
				while (iVar0 <= 62)
				{
					func_1722(iVar0, 5);
					func_1722(iVar0, 4);
					func_1722(iVar0, 6);
					func_1691(iVar0, 2);
					func_1691(iVar0, 3);
					func_1691(iVar0, 1);
					Var2 = { func_217(iVar0, 1, 3) };
					set_ped_sphere_defensive_area(&(Local_424[iVar0]), Var2, Var2.f_3, 1, 0, 0);
					set_ped_combat_movement(&(Local_424[iVar0]), 1);
					if (iVar0 == 61)
					{
						set_ped_combat_attributes(&(Local_424[iVar0]), 0, false);
					}
					set_ped_config_flag(&(Local_424[iVar0]), 138, true);
					set_ped_accuracy(&(Local_424[iVar0]), 10);
					func_1306();
					task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), Global_35, 2f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					task_combat_ped(0, Global_35, 16777216, 16);
					func_1307(&(Local_424[iVar0]), 0);
					Local_424[iVar0]->f_1 = _blip_add_for_entity(831283580, &(Local_424[iVar0]));
					_blip_set_modifier(Local_424[iVar0]->f_1, -1034486097);
					iVar0++;
				}
				func_1749(2);
			}
			break;
		case 2:
			iVar0 = 60;
			while (iVar0 <= 62)
			{
				if (!is_entity_dead(&(Local_424[iVar0])))
				{
					bVar1 = false;
					Jump @462; //curOff = 409
				}
				else if (!Local_424[iVar0]->f_2 == 18)
				{
					Local_1700.f_388++;
					func_1221(iVar0, 18);
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_1749(3);
			}
			break;
	}
}

void func_1260()
{
	if (!func_164(53))
	{
		if (is_entity_in_volume(Global_35, Local_128.f_46, true, 0))
		{
			func_849(53);
		}
	}
}

void func_1261(var uParam0)
{
	if (!func_164(75))
	{
		if (Local_424[3]->f_2 == 62 || Local_424[3]->f_2 == 50)
		{
			if (is_waypoint_playback_going_on_for_vehicle(&(Local_1523[7]), func_438(func_1750(7))))
			{
				if (get_vehicle_waypoint_progress(&(Local_1523[7])) >= 1)
				{
					func_1184(78);
					func_849(75);
				}
			}
		}
	}
	if (!func_164(74))
	{
		iVar0 = 0;
		if (Local_424[3]->f_2 == 44)
		{
			if (!func_164(94) && !func_164(95))
			{
				task_look_at_entity(Global_35, &(Local_424[3]), -1, 48, 51, 1);
				func_849(94);
			}
			iVar0 = 3;
		}
		else if (Local_424[2]->f_2 == 44)
		{
			if (func_164(94))
			{
				func_178(94);
			}
			if (!func_164(95))
			{
				task_look_at_entity(Global_35, &(Local_424[2]), -1, 48, 51, 1);
				func_849(95);
			}
			iVar0 = 2;
		}
		if (!iVar0 == 0)
		{
		}
		else if (func_164(95) || func_164(94))
		{
			func_178(95);
			func_178(94);
			task_clear_look_at(Global_35);
		}
	}
	iVar13 = 0;
	iVar14 = 0;
	if (Local_424[2]->f_2 == 44 || Local_424[3]->f_2 == 44)
	{
		func_1751(&iVar13, &iVar14);
	}
	if (Local_424[2]->f_2 > 44)
	{
		if (!func_164(64))
		{
			if (!iVar2255 == 0)
			{
				if ((iVar2110 == 0 && !func_1215()) && !func_1216())
				{
					func_1184(iVar2255);
					func_849(64);
				}
			}
		}
	}
	if (Local_424[3]->f_2 > 44)
	{
		if (!func_164(65))
		{
			if (!iVar2256 == 0)
			{
				if ((iVar2110 == 0 && !func_1215()) && !func_1216())
				{
					func_1184(iVar2256);
					func_849(65);
				}
			}
		}
	}
	iVar12 = 2;
	while (iVar12 <= 3)
	{
		if (is_entity_dead(&(Local_424[iVar12])))
		{
			func_1221(iVar12, 18);
		}
		else
		{
			switch (Local_424[iVar12]->f_2)
			{
				case 1:
					func_1221(iVar12, 42);
				case 42:
					if (iVar12 == 2)
					{
						iVar11 = 8;
					}
					else if (iVar12 == 3)
					{
						iVar11 = 9;
					}
					if (!_0xc276fe69dda22bad(&(iLocal_230[iVar11])))
					{
						func_1204(iVar11);
					}
					Var1 = { func_1256(iVar11) };
					set_ped_sphere_defensive_area(&(Local_424[iVar12]), Var1, 1f, 1, 0, 0);
					if (func_384(uParam0) == 0)
					{
						if (!func_1752(&(Local_424[iVar12]), &(iLocal_230[iVar11]), 0, 1077936128))
						{
							func_1306();
							task_put_ped_directly_into_cover(0, Var1, -1, 0, 0f, Var1.f_8, Var1.f_9, &(iLocal_230[iVar11]), 1, 0, 0);
							func_1307(&(Local_424[iVar12]), func_1469(iVar12 == 2, 0f, 1.2f));
							_0x2208438012482a1a(&(Local_424[iVar12]), true, false);
						}
					}
					func_1221(iVar12, 43);
					break;
				case 43:
					if (func_164(53))
					{
						func_135(uParam0, 15);
						task_look_at_entity(&(Local_424[iVar12]), Global_35, -1, 48, 41, 0);
						if (iVar12 == 2)
						{
							func_1753(90);
							iLocal_2113 = 0;
							func_47(0, 0);
							func_1184(84);
							func_849(61);
							func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
							func_27(vLocal_1569[19], 1);
						}
						else
						{
							_blip_set_modifier(Local_424[3]->f_1, -401963276);
						}
						func_1221(iVar12, 44);
					}
					break;
				case 44:
					if (iVar12 == 2)
					{
						if (!func_164(79))
						{
							if (func_845(vLocal_1569[19]) >= 20f)
							{
								func_1184(85);
								func_849(79);
							}
						}
					}
					if (!is_entity_in_volume(Global_35, Local_128.f_24, true, 0) || func_845(vLocal_1569[19]) >= 35f)
					{
						if (iVar12 == 2)
						{
							func_1221(iVar12, 47);
							bVar15 = true;
						}
						else if (iVar12 == 3)
						{
							func_1221(iVar12, 47);
							bVar16 = true;
						}
						func_1269(iVar12, 16);
					}
					if (iVar14 == 2 || iVar14 == 3)
					{
						if (iVar13 == 2)
						{
							bVar15 = true;
						}
						else if (iVar13 == 3)
						{
							bVar16 = true;
						}
						if (iVar13 == iVar12)
						{
							bVar17 = true;
						}
					}
					if (bVar17)
					{
						if (func_1754(func_1190(84)))
						{
							func_1755(func_1190(84), 0, 0);
						}
						func_1756(&(Local_424[iVar12]), 0, 1, 0);
						task_clear_look_at(&(Local_424[iVar12]));
						if (iVar14 == 2)
						{
							func_1269(iVar12, 2);
							func_1221(iVar12, 45);
						}
						else if (iVar14 == 3)
						{
							func_1221(iVar12, 46);
							func_1269(iVar12, 8);
						}
						set_ped_seeing_range(&(Local_424[iVar12]), 180f);
						func_1269(iVar12, 32);
						set_ped_accuracy(&(Local_424[iVar12]), 100);
					}
					if (bVar15 && iVar12 == 2)
					{
						func_1232(uParam0, &(Local_424[iVar12]), 1);
					}
					else if (bVar16 && iVar12 == 3)
					{
						_set_blip_flash_style(Local_424[iVar12]->f_1, -401963276);
					}
					if ((bVar15 && !Local_424[3]->f_2 == 44) || (bVar16 && !Local_424[2]->f_2 == 44))
					{
						bVar18 = true;
					}
					if (bVar18)
					{
						func_1446(uParam0, func_33(uParam0), 1048576);
						func_135(uParam0, 16);
						task_clear_look_at(Global_35);
						func_849(74);
						func_178(81);
						_0x6035e8fbca32ac5e();
						func_1257(1, 1);
						func_1182(uParam0, 6);
						_delete_volume(Local_128.f_93);
					}
					bVar17 = false;
					bVar15 = false;
					bVar16 = false;
					break;
				case 45:
				case 46:
				case 47:
					iVar25 = 0;
					if (Local_424[iVar12]->f_2 == 47)
					{
						if (func_1272(func_1757(iVar12 == 2, 3, 2), 16))
						{
							if (!func_164(63))
							{
								iVar25 = 58;
								func_849(63);
							}
						}
						else
						{
							iVar25 = func_1218(iVar12 == 2, 59, 60);
						}
					}
					else
					{
						iVar25 = func_1758(iVar12);
					}
					if (iVar12 == 2)
					{
						iLocal_2258 = iVar25;
						if (iVar2255 == 0)
						{
							func_849(64);
						}
					}
					else if (iVar12 == 3)
					{
						iLocal_2259 = iVar25;
						if (iVar2256 == 0)
						{
							func_849(65);
						}
					}
					if (Local_424[iVar12]->f_2 == 45)
					{
						func_1221(iVar12, 48);
					}
					else if (Local_424[iVar12]->f_2 == 47)
					{
						if (iVar12 == 2)
						{
							func_1221(iVar12, 48);
						}
						else if (iVar12 == 3)
						{
							func_1221(iVar12, 51);
						}
					}
					else if (Local_424[iVar12]->f_2 == 46)
					{
						func_1221(iVar12, 51);
					}
					break;
				case 48:
					if (iVar12 == 2)
					{
						iVar20 = 3;
						func_27(vLocal_1569[25], 1);
					}
					else if (iVar12 == 3)
					{
						iVar20 = 2;
						func_27(vLocal_1569[26], 1);
					}
					if (!func_1272(iVar20, 512))
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar12]), Local_128.f_50, 0, 0, 0);
						func_1269(iVar12, 512);
					}
					else
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar12]), Local_128.f_51, 0, 0, 0);
						func_1269(iVar12, 1024);
					}
					iVar19 = 51;
					while (iVar19 <= 56)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					func_1306();
					task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 1054.4f, -6796.9f, 41.7f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
					task_combat_hated_targets_around_ped(0, 200f, 0, 23);
					func_1307(&(Local_424[iVar12]), 1.5f);
					func_1221(iVar12, 50);
					break;
				case 49:
					iVar19 = 51;
					while (iVar19 <= 56)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					if (iVar12 == 3)
					{
						func_214(vLocal_1569[26]);
					}
					else if (iVar12 == 2)
					{
						func_214(vLocal_1569[25]);
					}
					task_combat_hated_targets_around_ped(&(Local_424[iVar12]), 200f, 0, 23);
					func_1221(iVar12, 50);
					break;
				case 50:
					if (func_1759(iVar12))
					{
						func_1221(iVar12, 49);
					}
					if (func_164(83))
					{
						if (!func_164(84))
						{
							if (!iVar2110 == 81)
							{
								if (iVar12 == 2)
								{
									func_1184(86);
								}
								else if (iVar12 == 3)
								{
									func_1184(87);
								}
							}
						}
						func_1221(iVar12, 51);
					}
					break;
				case 51:
					if (iVar12 == 2)
					{
						iVar20 = 3;
						func_27(vLocal_1569[25], 1);
					}
					else if (iVar12 == 3)
					{
						iVar20 = 2;
						func_27(vLocal_1569[26], 1);
					}
					if (!func_1272(iVar20, 2048))
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar12]), Local_128.f_53, 0, 0, 0);
						func_1269(iVar12, 2048);
					}
					else
					{
						_0xfc3db99c8144cd81(&(Local_424[iVar12]), Local_128.f_52, 0, 0, 0);
						func_1269(iVar12, 4096);
					}
					iVar19 = 42;
					while (iVar19 <= 50)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					func_1306();
					task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 928.9f, -6745.1f, 41.7f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
					task_combat_hated_targets_around_ped(0, 200f, 0, 23);
					func_1307(&(Local_424[iVar12]), 1.5f);
					func_1221(iVar12, 53);
					break;
				case 52:
					iVar19 = 42;
					while (iVar19 <= 50)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					if (iVar12 == 3)
					{
						func_214(vLocal_1569[26]);
					}
					else if (iVar12 == 2)
					{
						func_214(vLocal_1569[25]);
					}
					task_combat_hated_targets_around_ped(&(Local_424[iVar12]), 200f, 0, 23);
					func_1221(iVar12, 53);
					break;
				case 53:
					if (func_1759(iVar12))
					{
						func_1221(iVar12, 52);
					}
					if (func_164(84))
					{
						if (!func_164(83))
						{
							if (Local_424[2]->f_2 == 53 && Local_424[2]->f_2 == 53)
							{
								if (func_1217())
								{
									func_1184(88);
								}
								else
								{
									func_1184(89);
								}
							}
							else if (iVar12 == 2)
							{
								func_1184(88);
							}
							else if (iVar12 == 3)
							{
								func_1184(89);
							}
						}
						func_1221(iVar12, 48);
					}
					break;
				case 54:
					if (iVar12 == 2)
					{
						func_849(86);
						func_1182(uParam0, 4);
						func_898(func_1190(55), 7500, 0, 1, 0, 0, -1, -1, 0);
						func_1720(uParam0, &(Local_424[2]), 1105014447, 422991367, 1, 1);
						_blip_set_modifier(Local_424[3]->f_1, -401963276);
						func_1306();
						task_go_to_coord_while_aiming_at_coord(0, 980.093f, -6802.242f, 50.1905f, 985.4f, -6791.1f, 45.5f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
						task_aim_at_coord(0, 985.4f, -6791.1f, 45.5f, -1, 0, 0);
						func_1307(&(Local_424[2]), 0);
					}
					else if (iVar12 == 3)
					{
						func_1306();
						task_go_to_coord_while_aiming_at_coord(0, 981.0486f, -6799.366f, 50.0743f, 984.1f, -6796.8f, 48.8f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
						task_aim_at_coord(0, 984.1f, -6796.8f, 48.8f, -1, 0, 0);
						func_1307(&(Local_424[3]), 0);
					}
					func_1221(iVar12, 55);
					break;
				case 55:
					if (iVar12 == 2)
					{
						if (!func_1271())
						{
							bVar26 = true;
						}
						if (func_1760())
						{
							bVar26 = true;
						}
						if (!bVar26)
						{
							if (func_1727(Global_35, 980.4f, -6801.1f, 49.5f, 70f, 1, 1))
							{
								if (!is_entity_occluded(&(Local_424[2])) || !is_entity_occluded(&(Local_424[3])))
								{
									bVar26 = true;
								}
							}
						}
						if (bVar26)
						{
							if (func_164(83))
							{
								func_1221(2, 58);
								func_1221(3, 58);
							}
							else
							{
								func_1221(2, 56);
								func_1221(3, 56);
							}
						}
						else
						{
							Jump @5256; //curOff = 3115
							if (iVar12 == 2)
							{
								vVar21 = { 983.9597f, -6794.029f, 46.44f };
							}
							else if (iVar12 == 3)
							{
								vVar21 = { 983.6724f, -6790.941f, 45.3747f };
							}
							set_ped_sphere_defensive_area(&(Local_424[iVar12]), vVar21, 0.75f, 1, 0, 0);
							func_1306();
							task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 995.5f, -6787.4f, 40.9f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 4);
							func_1307(&(Local_424[iVar12]), 0);
							iVar19 = 51;
							while (iVar19 <= 56)
							{
								func_1761(&(Local_424[iVar19]), 1);
								iVar19++;
							}
							func_1221(iVar12, 57);
							Jump @5256; //curOff = 3315
							if (func_164(83))
							{
								func_1221(2, 58);
								func_1221(3, 58);
							}
							Jump @5256; //curOff = 3341
							if (iVar12 == 2)
							{
								set_ped_sphere_defensive_area(&(Local_424[iVar12]), 986.6882f, -6783.608f, 42.0208f, 2f, 0, 0, 0);
								set_ped_sphere_defensive_area(&(Local_424[iVar12]), 990.5f, -6785.9f, 41.5f, 2f, 0, 1, 0);
								_0x4ec4ea2f72b36358(&(Local_424[iVar12]), 1);
							}
							else if (iVar12 == 3)
							{
								set_ped_sphere_defensive_area(&(Local_424[iVar12]), 984.3762f, -6788.539f, 42.5049f, 2f, 0, 0, 0);
								set_ped_sphere_defensive_area(&(Local_424[iVar12]), 988.1f, -6788.8f, 41.5f, 2f, 0, 1, 0);
								_0x4ec4ea2f72b36358(&(Local_424[iVar12]), 1);
							}
							func_1306();
							func_1762();
							task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 965.4f, -6776.7f, 43f, 2f, 1, 4f, 1082130432, 1, 0, 0, -687903391, 0);
							task_combat_hated_targets_around_ped(0, 100f, 0, 23);
							func_1307(&(Local_424[iVar12]), 0);
							func_1221(iVar12, 59);
							Jump @5256; //curOff = 3593
							if (iVar12 == 2)
							{
								if (!Local_424[3]->f_2 == 66 && !Local_424[3]->f_2 == 67)
								{
									if (get_sequence_progress(&(Local_424[3])) == 1 || get_sequence_progress(&(Local_424[3])) == 2)
									{
										if (func_1760())
										{
											func_1221(3, 66);
										}
									}
								}
								if (iVar2258 == 3 || iVar2258 == 4)
								{
									bVar27 = true;
									if (func_164(83))
									{
										func_1221(2, 63);
										if (Local_424[3]->f_2 == 59)
										{
											func_1221(3, 63);
										}
									}
									else if (func_164(84))
									{
										func_1221(2, 60);
										if (Local_424[3]->f_2 == 59)
										{
											func_1221(3, 60);
										}
									}
									else
									{
										func_1221(2, 60);
										if (Local_424[3]->f_2 == 59)
										{
											func_1221(3, 63);
										}
									}
								}
								if (func_164(86) && !func_164(87))
								{
									if (func_1692(&(Local_424[2])))
									{
										if (get_sequence_progress(&(Local_424[2])) == 1)
										{
											bVar27 = true;
										}
									}
									else
									{
										bVar27 = true;
									}
									if (bVar27)
									{
										func_1232(uParam0, &(Local_424[2]), 1);
										_set_blip_flash_style(Local_424[3]->f_1, -401963276);
										_0xdd1232b332cbb9e7(3, 1, 0);
										func_1182(uParam0, 8);
										func_849(87);
									}
								}
							}
							Jump @5256; //curOff = 3922
							if (iVar12 == 2)
							{
								func_27(vLocal_1569[25], 1);
							}
							else if (iVar12 == 3)
							{
								func_27(vLocal_1569[26], 1);
							}
							func_1763(iVar12, 1);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							func_1306();
							task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 928f, -6780.4f, 42.4f, 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391, 0);
							task_combat_hated_targets_around_ped(0, 200f, 0, 23);
							func_1307(&(Local_424[iVar12]), 0);
							func_1221(iVar12, 62);
							Jump @5256; //curOff = 4085
							if (iVar12 == 2)
							{
								func_27(vLocal_1569[25], 1);
							}
							else if (iVar12 == 3)
							{
								func_27(vLocal_1569[26], 1);
							}
							func_1763(iVar12, 1);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							task_combat_hated_targets_around_ped(&(Local_424[iVar12]), 200f, 0, 23);
							func_1221(iVar12, 62);
							Jump @5256; //curOff = 4189
							if (func_1760())
							{
								func_1221(3, 66);
							}
							if (func_1764(iVar12))
							{
								func_1221(iVar12, 61);
							}
							if (func_164(83) && !func_164(84))
							{
								if (iVar12 == 2)
								{
									func_1184(86);
								}
								else if (iVar12 == 3)
								{
									func_1184(87);
								}
								func_135(uParam0, 17);
								func_1221(iVar12, 63);
							}
							Jump @5256; //curOff = 4287
							if (iVar12 == 2)
							{
								func_27(vLocal_1569[25], 1);
							}
							else if (iVar12 == 3)
							{
								func_27(vLocal_1569[26], 1);
							}
							func_1763(iVar12, 0);
							iVar19 = 42;
							while (iVar19 <= 47)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							func_1306();
							task_go_to_coord_while_aiming_at_coord(0, get_ped_defensive_area_position(&(Local_424[iVar12]), false), 928f, -6780.4f, 42.4f, 2f, 1, 2f, 1082130432, 1, 0, 0, -687903391, 0);
							task_combat_hated_targets_around_ped(0, 200f, 0, 23);
							func_1307(&(Local_424[iVar12]), 0);
							func_1221(iVar12, 65);
							Jump @5256; //curOff = 4450
							if (iVar12 == 2)
							{
								func_27(vLocal_1569[25], 1);
							}
							else if (iVar12 == 3)
							{
								func_27(vLocal_1569[26], 1);
							}
							func_1763(iVar12, 0);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							task_combat_hated_targets_around_ped(&(Local_424[iVar12]), 200f, 0, 23);
							func_1221(iVar12, 65);
							Jump @5256; //curOff = 4554
							if (func_1760())
							{
								func_1221(3, 66);
							}
							if (func_1764(iVar12))
							{
								func_1221(iVar12, 64);
							}
							if (func_164(84) && !func_164(83))
							{
								if (iVar12 == 2)
								{
									func_1184(88);
								}
								else if (iVar12 == 3)
								{
									func_1184(89);
								}
								func_135(uParam0, 17);
								func_1221(iVar12, 60);
							}
							Jump @5256; //curOff = 4652
							if (is_ped_in_group(&(Local_424[iVar12])))
							{
								remove_ped_from_group(&(Local_424[iVar12]));
							}
							_0xfc3db99c8144cd81(&(Local_424[iVar12]), Local_128.f_42, 1, 0, 0);
							iVar28 = func_1765(42, 62);
							func_1306();
							if (!is_entity_in_volume(&(Local_424[3]), Local_128.f_55, true, 0))
							{
								func_1762();
							}
							if (iVar28 == 0)
							{
								task_go_to_coord_while_aiming_at_coord(0, _0xf70f00013a62f866(Local_128.f_42), 943.5f, -6764.3f, 41.5f, 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 0);
							}
							else
							{
								task_go_to_coord_while_aiming_at_entity(0, _0xf70f00013a62f866(Local_128.f_42), &(Local_424[iVar28]), 2f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							}
							task_combat_hated_targets(0, -1f);
							func_1307(&(Local_424[iVar12]), 0);
							func_1221(iVar12, 67);
							Jump @5256; //curOff = 4867
							Jump @5256; //curOff = 4870
							if (is_ped_in_group(&(Local_424[iVar12])))
							{
								if (!func_433(iVar12) == -1)
								{
									func_1766(func_433(iVar12), 0, 1, 1, 1, 0);
								}
								if (is_ped_in_group(&(Local_424[iVar12])))
								{
									remove_ped_from_group(&(Local_424[iVar12]));
								}
							}
							if (iVar12 == 2)
							{
								func_1198(47);
								func_1198(46);
								if (!func_1233(47) || !func_1233(46))
								{
								}
								else
								{
									func_1306();
									task_follow_nav_mesh_to_coord(0, 973.8617f, -6765.986f, 42.637f, 2f, 20000, 0.25f, 512, 45f);
									func_1695(0, 46, 1090519040, -1056964608, -1, 1, 0);
									func_1307(&(Local_424[iVar12]), 0);
									func_27(vLocal_1569[0], 1);
									Jump @5152; //curOff = 5067
									if (iVar12 == 3)
									{
										func_1204(10);
										vVar29 = { func_1256(10) };
										func_1306();
										task_follow_nav_mesh_to_coord(0, vVar29, 2f, 20000, 2f, 0, 40000f);
										task_put_ped_directly_into_cover(0, vVar29, -1, 0, 0f, 1, 0, &(iLocal_230[10]), 1, 0, 0);
										func_1307(&(Local_424[iVar12]), 0);
									}
									func_1221(iVar12, 17);
									Jump @5256; //curOff = 5160
									if (iVar12 == 2)
									{
										if (func_845(vLocal_1569[0]) >= 10f)
										{
											func_1306();
											func_1695(0, 47, 1090519040, -1056964608, -1, 0, 0);
											func_1695(0, 46, 1090519040, -1056964608, -1, 1, 0);
											func_1307(&(Local_424[2]), 0);
											func_214(vLocal_1569[0]);
										}
									}
								}
								iVar12++;
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_1262()
{
	switch (Local_424[4]->f_2)
	{
		case 1:
			iVar0 = 4;
			while (iVar0 <= 6)
			{
				iVar1 = 42;
				while (iVar1 <= 62)
				{
					func_1722(iVar0, iVar1);
					iVar1++;
				}
				func_1221(4, 8);
				iVar0++;
			}
		case 8:
			break;
	}
}

void func_1263(var uParam0)
{
	iVar0 = 42;
	while (iVar0 <= 56)
	{
		if (Local_424[iVar0]->f_2 == 18)
		{
		}
		else if (does_entity_exist(&(Local_424[iVar0])))
		{
			vVar1 = { get_entity_coords(&(Local_424[iVar0]), true, false) };
			if (vVar1.z >= 48f)
			{
				func_1729(&(Local_424[5]), get_ped_bone_coords(&(Local_424[iVar0]), 21030, 0f, 0f, 0f), 0, 0, 0, 0, 0);
				_set_entity_health(&(Local_424[iVar0]), 0, &(Local_424[5]));
			}
			if (is_entity_dead(&(Local_424[iVar0])))
			{
				Local_1700.f_388++;
				if (has_entity_been_damaged_by_entity(&(Local_424[iVar0]), Global_35, 1, 1))
				{
					if (Local_1265[6]->f_1 == 1)
					{
						Local_1265[6]->f_1 = 2;
					}
				}
				iLocal_2166[func_1767(42, iVar0)] = 0;
				func_1221(iVar0, 18);
			}
			else
			{
				if (func_1180(10, iVar0))
				{
					if (!func_26(&(Local_424[iVar0]->f_5)))
					{
						if (is_entity_in_water(&(Local_424[iVar0])) && get_entity_submerged_level(&(Local_424[iVar0])) >= 0.5f)
						{
							func_27(&(Local_424[iVar0]->f_5), 0);
						}
					}
					else if (!is_entity_in_water(&(Local_424[iVar0])) || get_entity_submerged_level(&(Local_424[iVar0])) < 0.4f)
					{
						func_524(&(Local_424[iVar0]->f_5));
					}
					else if (func_845(&(Local_424[iVar0]->f_5)) >= 10f)
					{
						func_1729(&(Local_424[2]), get_ped_bone_coords(&(Local_424[iVar0]), 21030, 0f, 0f, 0f), Global_35, 0, 0, 0, 0);
						_set_entity_health(&(Local_424[iVar0]), 0, 0);
					}
				}
				switch (Local_424[iVar0]->f_2)
				{
					case 1:
						set_ped_seeing_range(&(Local_424[iVar0]), 180f);
						func_1690(&(Local_424[iVar0]), 0);
						set_ped_config_flag(&(Local_424[iVar0]), 301, true);
						set_entity_only_damaged_by_player(&(Local_424[iVar0]), true);
						if (func_1768(iVar0))
						{
							iVar4 = -1;
						}
						else
						{
							iVar4 = -2;
						}
						if (!is_entity_dead(&(Local_1523[func_1769(iVar0)])))
						{
							if (!is_ped_in_vehicle(&(Local_424[iVar0]), &(Local_1523[func_1769(iVar0)]), false))
							{
								set_ped_into_vehicle(&(Local_424[iVar0]), &(Local_1523[func_1769(iVar0)]), iVar4);
							}
						}
						set_ped_combat_attributes(&(Local_424[iVar0]), 3, false);
						remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
						func_1221(iVar0, 3);
						break;
					case 3:
						if (func_164(0))
						{
						}
						else
						{
							func_866(&(Local_424[iVar0]), func_1733(iVar0, 0), -1, 3, 0, 1056964608, 1065353216, 0);
							func_849(0);
							func_1221(iVar0, 4);
							Jump @2485; //curOff = 738
							if (func_164(0))
							{
							}
							else
							{
								if (!func_1733(iVar0, 1) == 0)
								{
									func_866(&(Local_424[iVar0]), func_1733(iVar0, 1), -1, 3, 0, 1056964608, 1065353216, 0);
									func_849(0);
								}
								func_1221(iVar0, 21);
								Jump @2485; //curOff = 811
								if (is_entity_dead(&(Local_1523[func_1769(iVar0)])))
								{
								}
								else
								{
									func_1198(func_1750(func_1769(iVar0)));
									if (!func_1233(func_1750(func_1769(iVar0))))
									{
									}
									else
									{
										func_1747(func_1769(iVar0));
										func_1722(iVar0, 5);
										func_1722(iVar0, 4);
										func_1722(iVar0, 6);
										if (func_1768(iVar0))
										{
											set_entity_only_damaged_by_player(&(Local_424[iVar0]), true);
											func_1306();
											if (!Local_1523[func_1769(iVar0)]->f_2 == Local_1523[func_1769(iVar0)]->f_3)
											{
												task_shuffle_to_next_vehicle_seat(0, &(Local_1523[func_1769(iVar0)]));
											}
											task_vehicle_follow_waypoint_recording(0, &(Local_1523[func_1769(iVar0)]), func_438(func_1750(func_1769(iVar0))), 0, 0, 0, -1, -1082130432, 0, 1073741824, 0);
											func_1307(&(Local_424[iVar0]), 0);
										}
										else
										{
											if (!func_1272(iVar0, 1))
											{
												set_entity_only_damaged_by_player(&(Local_424[iVar0]), false);
											}
											register_target(&(Local_424[iVar0]), Global_35, 1);
											func_1691(iVar0, 2);
											func_1691(iVar0, 3);
											task_combat_hated_targets_in_area(&(Local_424[iVar0]), _0xf70f00013a62f866(Local_128.f_8), 200f, 0, 1);
										}
										func_1221(iVar0, 22);
										Jump @2485; //curOff = 1120
										if (func_1768(iVar0))
										{
											fVar5 = func_1770(iVar0);
											if (!func_1692(&(Local_424[iVar0])) || (fVar5 < 3f && !fVar5 == -1f))
											{
												iVar6 = 42;
												while (iVar6 <= 56)
												{
													if (func_1769(iVar6) == func_1769(iVar0))
													{
														func_1221(iVar6, 8);
													}
													iVar6++;
												}
												func_436(func_1750(func_1769(iVar0)));
												if (!Local_1523[func_1769(iVar0)]->f_4)
												{
													Local_1523[func_1769(iVar0)]->f_4 = 1;
												}
												func_1221(iVar0, 8);
											}
											else if (func_164(81))
											{
												if (!is_entity_dead(&(Local_1523[func_1769(iVar0)])))
												{
													vehicle_waypoint_playback_override_speed(&(Local_1523[func_1769(iVar0)]), 0f);
													func_849(82);
												}
											}
											else if (!is_entity_dead(&(Local_1523[func_1769(iVar0)])))
											{
												if (func_1769(iVar0) == 6 || func_1769(iVar0) == 7)
												{
													vehicle_waypoint_playback_override_speed(&(Local_1523[func_1769(iVar0)]), 1.8f);
												}
												else
												{
													vehicle_waypoint_playback_use_default_speed(&(Local_1523[func_1769(iVar0)]));
												}
												func_178(82);
											}
										}
										if (func_1180(30, iVar0))
										{
											if (func_835(Global_35, &(Local_1523[func_1769(iVar0)]), 1, 1) <= 5f)
											{
												func_1306();
												task_leave_any_vehicle(0, 0, 67108864);
												task_combat_ped(0, Global_35, 0, 0);
												func_1307(&(Local_424[iVar0]), 0);
												func_1221(iVar0, 9);
											}
											else if (!func_1771(iVar0) && !func_1768(iVar0))
											{
												if (Local_424[Local_1523[func_1769(iVar0)]->f_3]->f_2 == 18)
												{
													if (func_1772(iVar0))
													{
														if (does_blip_exist(Local_424[iVar0]->f_1))
														{
															remove_blip(&(Local_424[iVar0]->f_1));
														}
														if (does_blip_exist(Local_1523[func_1769(iVar0)]->f_1))
														{
															remove_blip(&(Local_1523[func_1769(iVar0)]->f_1));
														}
														func_1221(iVar0, 19);
														Jump @2485; //curOff = 1629
													}
													else
													{
														Local_1523[func_1769(iVar0)]->f_3 = iVar0;
														func_1221(iVar0, 21);
													}
													else
													{
														if (func_1180(10, iVar0))
														{
															if (func_1768(iVar0))
															{
																fVar7 = func_1770(iVar0);
																if (fVar7 > 99940f)
																{
																	if (func_1773(iVar0))
																	{
																		func_1221(iVar0, 19);
																	}
																}
															}
														}
														Jump @2485; //curOff = 1717
														register_target(&(Local_424[iVar0]), Global_35, 1);
														func_1691(iVar0, 2);
														func_1691(iVar0, 3);
														if (does_blip_exist(Local_424[iVar0]->f_1))
														{
															remove_blip(&(Local_424[iVar0]->f_1));
														}
														func_1252(uParam0, iVar0, 1);
														if (!func_1272(iVar0, 1))
														{
															set_entity_only_damaged_by_player(&(Local_424[iVar0]), false);
														}
														if ((iVar2110 == 0 && !func_1188(1)) && !func_1189(1))
														{
															if (!func_164(76))
															{
																iVar8 = func_1769(iVar0);
																if ((iVar8 == 3 || iVar8 == 4) || iVar8 == 5)
																{
																	if (func_845(vLocal_1569[22]) >= 5f)
																	{
																		func_1184(79);
																		func_849(76);
																		func_214(vLocal_1569[22]);
																	}
																}
															}
														}
														if (iVar2110 == 0)
														{
															if (func_845(vLocal_1569[22]) >= 8f)
															{
																func_1184(80);
																func_214(vLocal_1569[22]);
															}
														}
														func_1722(iVar0, 5);
														func_1722(iVar0, 4);
														func_1722(iVar0, 6);
														set_current_ped_weapon(&(Local_424[iVar0]), get_best_ped_weapon(&(Local_424[iVar0]), false, false), false, 0, false, false);
														task_swap_weapon(&(Local_424[iVar0]), 1, 1, 0, 1);
														func_1306();
														task_leave_any_vehicle(0, 0, 32);
														task_combat_hated_targets_around_ped(0, 100f, 0, 69);
														func_1307(&(Local_424[iVar0]), 0);
														set_ped_accuracy(&(Local_424[iVar0]), 15);
														if (iVar0 >= 51 && iVar0 <= 56)
														{
															_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_96, 0, 0, 0);
														}
														else
														{
															_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_94, 0, 0, 0);
														}
														func_1221(iVar0, 9);
														Jump @2485; //curOff = 2147
														if (!func_1692(&(Local_424[iVar0])))
														{
															func_1221(iVar0, 10);
														}
														Jump @2485; //curOff = 2173
														func_1722(iVar0, 5);
														func_1722(iVar0, 4);
														func_1722(iVar0, 6);
														func_1691(iVar0, 2);
														func_1691(iVar0, 3);
														func_1691(iVar0, 1);
														if (iVar0 >= 51 && iVar0 <= 56)
														{
															_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_96, 0, 0, 0);
														}
														else
														{
															_0xfc3db99c8144cd81(&(Local_424[iVar0]), Local_128.f_94, 0, 0, 0);
														}
														func_1306();
														task_combat_hated_targets_around_ped(0, 100f, 0, 69);
														func_1307(&(Local_424[iVar0]), 0);
														func_1221(iVar0, 11);
														Jump @2485; //curOff = 2312
														Jump @2485; //curOff = 2315
														set_ped_config_flag(&(Local_424[iVar0]), 230, true);
														set_ped_keep_task(&(Local_424[iVar0]), true);
														set_ped_config_flag(&(Local_424[iVar0]), 266, true);
														if (does_blip_exist(Local_424[iVar0]->f_1))
														{
															remove_blip(&(Local_424[iVar0]->f_1));
														}
														func_1306();
														task_leave_vehicle(0, get_vehicle_ped_is_in(&(Local_424[iVar0]), false), 0, 0);
														task_smart_flee_ped(0, Global_35, -1f, -1, 0, 1077936128, 0);
														_task_flee_from_ped(0, Global_35, 1291f, -6847.7f, 42.8f, -1f, -1, 1024, 1077936128, 0);
														func_1307(&(Local_424[iVar0]), 0);
														func_1221(iVar0, 20);
													}
													iVar0++;
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
		}
	}
}

void func_1264()
{
	iVar4 = 0;
	while (iVar4 < iVar1521)
	{
		if (iVar4 == 8)
		{
		}
		else if (!does_blip_exist(Local_1523[iVar4]->f_1))
		{
		}
		else
		{
			switch (iVar4)
			{
				case 3:
					iVar1 = 42;
					iVar2 = 44;
					break;
				case 4:
					iVar1 = 45;
					iVar2 = 47;
					break;
				case 5:
					iVar1 = 48;
					iVar2 = 50;
					break;
				case 6:
					iVar1 = 51;
					iVar2 = 53;
					break;
				case 7:
					iVar1 = 54;
					iVar2 = 56;
					break;
			}
			bVar3 = true;
			iVar0 = iVar1;
			while (iVar0 <= iVar2)
			{
				if (((!Local_424[iVar0]->f_2 == 18 && does_entity_exist(&(Local_424[iVar0]))) && !is_entity_dead(&(Local_424[iVar0]))) && is_ped_in_vehicle(&(Local_424[iVar0]), &(Local_1523[func_1769(iVar0)]), false))
				{
					bVar3 = false;
				}
				iVar0++;
			}
			if (bVar3)
			{
				remove_blip(&(Local_1523[iVar4]->f_1));
			}
		}
		iVar4++;
	}
}

void func_1265(var uParam0)
{
	if (func_1774(27, 41, 18) == func_1424(27, 41))
	{
		func_849(60);
		return;
	}
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0]->f_2 == 18 || Local_424[iVar0]->f_2 == 0)
		{
		}
		else if (is_entity_dead(&(Local_424[iVar0])))
		{
			func_1221(iVar0, 18);
		}
		else
		{
			switch (Local_424[iVar0]->f_2)
			{
				case 1:
					func_1221(iVar0, 8);
				case 8:
					register_target(&(Local_424[iVar0]), Global_35, 1);
					register_target(&(Local_424[iVar0]), &(Local_424[2]), 1);
					register_target(&(Local_424[iVar0]), &(Local_424[3]), 1);
					task_combat_hated_targets(&(Local_424[iVar0]), -1f);
					func_1221(iVar0, 9);
					break;
			}
		}
		iVar0++;
	}
}

int func_1266()
{
	iVar0 = 0;
	while (iVar0 < iVar1263)
	{
		if (!Local_1265[iVar0]->f_1 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1267()
{
	iVar1 = 42;
	while (iVar1 <= 62)
	{
		if (does_entity_exist(&(Local_424[iVar1])))
		{
			if (!is_entity_dead(&(Local_424[iVar1])) && !Local_424[iVar1]->f_2 == 20)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1268(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_427(uParam0, 2);
	}
	else
	{
		func_427(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1460(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

void func_1269(int iParam0, int iParam1)
{
	func_1516(&(Local_424[iParam0]->f_4), iParam1);
}

bool func_1270()
{
	iVar1 = 42;
	while (iVar1 <= 62)
	{
		if (does_entity_exist(&(Local_424[iVar1])))
		{
			if (!is_entity_dead(&(Local_424[iVar1])))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 <= 8)
	{
		return true;
	}
	return false;
}

bool func_1271()
{
	vVar0 = { get_entity_coords(Global_35, true, false) };
	return vVar0.z >= 49f;
}

bool func_1272(int iParam0, int iParam1)
{
	return func_1775(Local_424[iParam0]->f_4, iParam1);
}

int func_1273(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

float func_1274(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return -1f;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	if (absf((vVar0.x - vVar0.y)) > 0.01f)
	{
		return vVar0.x;
	}
	return vVar0.x;
}

bool func_1275(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_1276(var uParam0)
{
	switch (&iLocal_2369[2])
	{
		case 0:
			iLocal_2369[2] = 1;
		case 1:
			func_1681(&(uParam0->f_7375));
			func_415(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[2]), "Dutch", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[3]), "Hercule", 0, 0, 0, 0);
			func_415(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 0, 0, 0);
			iLocal_2369[2] = 2;
			return true;
	}
	return false;
}

float func_1277(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_1278(var uParam0, int iParam1)
{
	iVar0 = func_699(func_12(uParam0->f_607));
	if (func_700(iVar0))
	{
		func_1777(iVar0, iParam1);
	}
}

void func_1279(var uParam0)
{
	switch (iVar2302)
	{
		case 0:
			func_1253(1, 0, 1);
			iLocal_2305 = iVar2302 + 1;
			break;
		case 1:
			if (_0x5ac0944c156e5f44("CIN_NAV_DOOR_INTACT"))
			{
				_0x527b97c203bb8606("CIN_NAV_DOOR_INTACT");
			}
			iLocal_2305 = iVar2302 + 1;
			break;
		case 2:
			func_1175(1, 0);
			iLocal_2305 = iVar2302 + 1;
			break;
		case 3:
			func_1232(uParam0, &(Local_424[2]), 0);
			iLocal_2305 = -1;
			break;
	}
}

float func_1280()
{
	if (is_entity_dead(&(Local_424[3])))
	{
		return 0f;
	}
	if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(Global_35, true, false), &iVar0))
	{
		if (is_waypoint_playback_going_on_for_ped(&(Local_424[3]), func_438(32)))
		{
			iVar1 = get_ped_waypoint_progress(&(Local_424[3]));
			return absf((get_waypoint_distance_along_route(func_438(32), iVar0) - get_waypoint_distance_along_route(func_438(32), iVar1)));
		}
		else if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(&(Local_424[3]), true, false), &iVar1))
		{
			return absf((get_waypoint_distance_along_route(func_438(32), iVar0) - get_waypoint_distance_along_route(func_438(32), iVar1)));
		}
	}
	return 0f;
}

int func_1281(int iParam0)
{
	if (iParam0 == 1)
	{
		iVar0 = Global_35;
	}
	else
	{
		iVar0 = &Local_424[iParam0];
	}
	iVar1 = -1;
	if (!is_entity_dead(iVar0))
	{
		if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(iVar0, true, false), &iVar1))
		{
			return iVar1;
		}
	}
	return iVar1;
}

void func_1282(var uParam0)
{
	if (iVar2301 == 3)
	{
		return;
	}
	switch (iVar2301)
	{
		case 0:
			func_1198(59);
			func_1198(58);
			func_1198(7);
			if ((func_1233(59) && func_1233(58)) && func_1233(7))
			{
				func_1778(1);
			}
			break;
		case 1:
			if (func_856(uParam0, 27, 30, 256))
			{
				iVar0 = 27;
				while (iVar0 <= 30)
				{
					stop_ped_speaking(&(Local_424[iVar0]), true);
					remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
					_set_entity_health(&(Local_424[iVar0]), 0, 0);
					set_entity_visible(&(Local_424[iVar0]), true);
					_add_blood_pool(get_entity_coords(&(Local_424[iVar0]), false, false), true);
					_add_blood_pool(get_entity_coords(&(Local_424[iVar0]), false, false) + Vector(0f, 0f, 1f), true);
					_add_blood_pool(get_entity_coords(&(Local_424[iVar0]), false, false) + Vector(0f, 1f, 0f), true);
					_add_blood_pool(get_entity_coords(&(Local_424[iVar0]), false, false) + Vector(0f, -0.5f, -0.5f), true);
					set_entity_no_collision_entity(&(Local_424[iVar0]), Global_35, false);
					set_entity_no_collision_entity(&(Local_424[iVar0]), &(Local_424[3]), false);
					iVar0++;
				}
				func_1778(2);
			}
			break;
		case 2:
			func_1778(3);
			break;
	}
}

void func_1283()
{
	switch (iVar2300)
	{
		case 0:
			if (fVar2284 >= 20f)
			{
				func_27(vLocal_1569[31], 0);
				func_1779(1);
			}
			break;
		case 1:
			if (fVar2284 < 20f)
			{
				func_524(vLocal_1569[31]);
				func_1779(0);
			}
			else if (func_845(vLocal_1569[31]) >= 20f)
			{
				func_1779(2);
			}
			break;
		case 2:
			iLocal_2303 = func_1200(get_entity_coords(&(Local_424[3]), true, false), -1082130432);
			func_1200(get_entity_coords(iVar2102, true, false), -1082130432);
			func_1779(3);
			break;
		case 3:
			if (Local_1700.f_3[iVar2301]->f_11 == 0)
			{
				set_ped_to_ragdoll_with_fall(&(Local_424[3]), 5000, 10000, 1, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				apply_force_to_entity(&(Local_424[3]), 1, 15f, -15f, 15f, 0f, 0f, 0f, 0, false, false, true, true, true);
				_set_entity_health(&(Local_424[3]), 0, 0);
				func_1779(4);
			}
			break;
	}
}

void func_1284(var uParam0)
{
	if (Local_2262.f_3 == 5)
	{
		func_849(102);
		return;
	}
	if (!func_164(110))
	{
		if (load_stream(func_1294(11), func_1294(9)))
		{
			iLocal_2283 = _0x0556c784fa056628(func_1294(11), func_1294(9));
			func_849(110);
		}
	}
	if (bVar2259)
	{
		Local_2262.f_11 = (func_845(&(Local_2262.f_13)) / Local_2262.f_12);
		if (Local_2262.f_11 > 1f)
		{
			Local_2262.f_11 = 1f;
		}
		set_entity_coords(Local_2262.f_4, func_1735(Local_2262.f_8, Local_2262.f_5, Local_2262.f_11), true, false, true, true);
		set_particle_fx_looped_offsets(iVar2117, get_entity_coords(Local_2262.f_4, true, false), 0f, 0f, 0f);
	}
	if (Local_2262.f_11 == 1f && bVar2259)
	{
		shake_gameplay_cam("LARGE_EXPLOSION_SHAKE", 0.5f);
		func_27(vLocal_1569[28], 0);
		if (get_state_of_rayfire_map_object(iVar2279) == 5)
		{
			if (func_164(110))
			{
				play_stream_from_position(995.1714f, -6732.951f, 59.7461f, uVar2280);
			}
			set_state_of_rayfire_map_object(iVar2279, 6);
		}
		remove_particle_fx(iVar2117, false);
		delete_object(&(Local_2262.f_4));
		func_1247(0, Local_2262.f_5, 1065353216);
		Local_2262.f_1 = 1;
		Local_2262 = 0;
		set_player_control(player_id(), true, 0, false);
		Local_2262.f_3 = 5;
	}
	switch (Local_2262.f_3)
	{
		case 0:
			Local_2262.f_3 = 1;
			break;
		case 1:
			if (!does_rayfire_map_object_exist(iVar2279))
			{
				iLocal_2282 = get_rayfire_map_object(995.5924f, -6734.043f, 62.5f, 20f, "des_smg2_fortwall");
			}
			else
			{
				set_state_of_rayfire_map_object(iVar2279, 4);
				Local_2262.f_3 = 2;
			}
			break;
		case 2:
			if (is_entity_in_volume(Global_35, Local_128.f_15, true, 0))
			{
				bVar0 = true;
			}
			else if (is_entity_in_volume(Global_35, Local_128.f_56, true, 0) && is_sphere_visible(get_entity_coords(&(Local_424[3]), true, false), 1f))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1174(&(Local_128.f_57), -1612834106);
				func_135(uParam0, 22);
				func_27(&(Local_2262.f_16), 0);
				Local_2262.f_3 = 3;
			}
			break;
		case 3:
			func_1184(100);
			Local_2262.f_8 = { 952.1f, -6721.5f, 54f };
			func_1734(0);
			Local_2262.f_4 = create_object(func_437(15), Local_2262.f_8, true, true, false, false, true);
			iLocal_2120 = start_particle_fx_looped_at_coord(func_1294(6), get_entity_coords(Local_2262.f_4, true, false), 0f, 0f, 0f, 6f, false, false, false, false);
			func_27(&(Local_2262.f_13), 0);
			Local_2262 = 1;
			Local_2262.f_3 = 4;
			break;
	}
}

void func_1285(var uParam0)
{
	if (is_entity_dead(&(Local_424[3])))
	{
		return;
	}
	if (func_26(vLocal_1569[28]))
	{
		if (func_845(vLocal_1569[28]) >= 1f)
		{
			if (iVar2110 == 0)
			{
				func_1184(101);
				func_524(vLocal_1569[28]);
			}
		}
	}
	switch (Local_424[3]->f_2)
	{
		case 1:
			func_1198(44);
			func_1198(45);
			func_1198(52);
			func_1198(53);
			_0x098caa6dbe7d8d82(&(Local_424[3]), 1);
			func_1221(3, 68);
		case 68:
			func_1184(98);
			func_1221(3, 69);
		case 69:
			if (is_entity_in_volume(&(Local_424[3]), Local_128.f_11, true, 0))
			{
				if (func_835(&(Local_424[3]), Global_35, 1, 1) > 10f)
				{
					func_1221(3, 70);
				}
				else
				{
					func_1184(99);
					func_1221(3, 73);
				}
			}
			break;
		case 70:
			if ((iVar2110 == 0 && !func_1188(1)) && !func_1189(1))
			{
				func_1184(97);
			}
			func_849(99);
			func_1306();
			task_look_at_entity(0, Global_35, -1, 48, 41, 0);
			func_1695(0, 45, 1090519040, -1056964608, -1, 25, 0);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_1307(&(Local_424[3]), 0);
			func_1221(3, 71);
			break;
		case 71:
			if (func_835(&(Local_424[3]), Global_35, 1, 1) <= 8f)
			{
				func_1184(99);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1221(3, 72);
			}
			break;
		case 72:
			func_1306();
			if (func_164(99))
			{
				func_1780();
			}
			task_follow_waypoint_recording(0, func_438(32), 0, 9, -1, 0, 0, -1);
			func_1307(&(Local_424[3]), 0);
			func_27(vLocal_1569[30], 0);
			func_1221(3, 73);
			break;
		case 73:
			func_853(5);
			if (is_entity_in_volume(&(Local_424[3]), Local_128.f_12, true, 0))
			{
				set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), true, 0, false, false);
				func_1221(3, 74);
			}
			break;
		case 74:
			func_853(5);
			if (func_1199(5, 1))
			{
				func_1174(&(Local_128.f_35), 665633627);
				func_1174(&(Local_128.f_36), 665633627);
				func_1221(3, 75);
			}
			break;
		case 75:
			if (Local_2262.f_11 >= 0.3f)
			{
				_set_anim_scene_playback_list_bool(&(Local_2328[5]), func_1420(5, 2), true);
				func_1221(3, 76);
			}
			break;
		case 76:
			if (_0x005e6f28dd7ed58d(&(Local_2328[5]), "CS_Hercule") || _0xf94692eb9dc15d74(&(Local_2328[5]), 0))
			{
				if (_does_volume_exist(Local_128.f_57))
				{
					_delete_volume(Local_128.f_57);
				}
				func_1306();
				task_follow_waypoint_recording(0, func_438(32), 0, 9, -1, 0, 0, -1);
				func_1307(&(Local_424[3]), 0);
				func_27(vLocal_1569[30], 0);
				func_1221(3, 77);
			}
			break;
		case 77:
			if (!func_164(100))
			{
				if (!func_856(uParam0, 71, 71, 15))
				{
				}
				else if (func_164(0))
				{
				}
				else
				{
					if (!is_entity_dead(&(Local_424[71])))
					{
						func_866(&(Local_424[71]), func_1733(71, 0), -1, 3, 0, 1056964608, 1065353216, 0);
						func_849(0);
						set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), true, 0, false, false);
						func_1690(&(Local_424[71]), 0);
						set_ped_config_flag(&(Local_424[71]), 277, true);
						set_ped_combat_attributes(&(Local_424[71]), 46, true);
						set_ped_config_flag(&(Local_424[71]), 168, false);
						set_ped_config_flag(&(Local_424[71]), 113, true);
						set_entity_invincible(&(Local_424[71]), false);
						set_ped_drops_weapons_when_dead(&(Local_424[71]), false);
						if (!is_entity_dead(&(Local_424[2])))
						{
							task_aim_at_entity(&(Local_424[71]), &(Local_424[2]), -1, 1, 0);
						}
					}
					func_849(100);
					if (iVar2282 >= 104)
					{
						func_443(5);
						func_1306();
						task_go_to_coord_while_aiming_at_entity(0, 983.1f, -6750.3f, 56.2f, &(Local_424[71]), 2f, 0, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						task_aim_at_entity(0, &(Local_424[71]), -1, 1, 1);
						func_1307(&(Local_424[3]), 0);
						func_1184(102);
						func_135(uParam0, 23);
						func_1221(3, 78);
					}
					Jump @2661; //curOff = 1197
					if (is_entity_dead(&(Local_424[71])))
					{
						func_1221(3, 79);
					}
					else if (((func_1692(&(Local_424[3])) && get_sequence_progress(&(Local_424[3])) == 1) && func_835(Global_35, &(Local_424[3]), 1, 1) <= 5f) || !func_1692(&(Local_424[3])))
					{
						func_1252(uParam0, 71, 1);
						if (!is_entity_dead(&(Local_424[2])))
						{
							func_1306();
							task_go_to_coord_while_aiming_at_entity(0, func_761(71, 1, 4), &(Local_424[2]), 1.5f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							task_aim_at_entity(0, &(Local_424[2]), -1, 1, 0);
							func_1307(&(Local_424[71]), 0);
							set_ped_combat_attributes(&(Local_424[3]), 30, true);
							set_ped_combat_attributes(&(Local_424[3]), 111, true);
							set_ped_seeing_range(&(Local_424[3]), (func_835(&(Local_424[3]), &(Local_424[71]), 1, 1) * 1.5f));
							task_shoot_at_entity(&(Local_424[3]), &(Local_424[71]), -1, -957453492, 0);
						}
						func_27(vLocal_1569[32], 0);
						func_1221(3, 79);
					}
					Jump @2661; //curOff = 1497
					if (is_ped_shooting(&(Local_424[3])))
					{
						bVar0 = true;
					}
					if (func_845(vLocal_1569[32]) > 2f)
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						if (!is_entity_dead(&(Local_424[71])))
						{
							Var1.f_8 = -1082130432;
							Var1.f_13 = 1;
							Var1.f_12 = 1;
							Var1.f_7 = 999.9f;
							Var1 = { func_1781(get_current_ped_weapon_entity_index(&(Local_424[3]), 0)) };
							Var1.f_3 = { get_ped_bone_coords(&(Local_424[71]), 21030, 0f, 0f, 0f) };
							Var1.f_6 = &iLocal_1452[7];
							_fire_single_bullet_ignore_entity_new(&Var1);
							set_ped_to_ragdoll_with_fall(&(Local_424[71]), 5000, 10000, 1, func_1688(func_1689(func_761(71, 0, 4), get_entity_coords(&(Local_424[3]), true, false), 1065353216)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							apply_force_to_entity(&(Local_424[71]), 1, -3f, -10f, 0f, 0f, 0f, 0f, 0, false, false, true, true, true);
							_set_entity_health(&(Local_424[71]), 0, &(Local_424[3]));
							func_1184(103);
						}
						func_135(uParam0, 24);
						if (func_164(108))
						{
							func_178(108);
						}
						set_ped_combat_attributes(&(Local_424[3]), 30, false);
						set_ped_combat_attributes(&(Local_424[3]), 111, false);
						func_1221(3, 80);
					}
					Jump @2661; //curOff = 1816
					func_1782(0);
					task_follow_waypoint_recording(&(Local_424[3]), func_438(32), 0, 9, -1, 0, 0, -1);
					func_27(vLocal_1569[30], 0);
					_delete_volume(Local_128.f_36);
					func_1221(3, 81);
					Jump @2661; //curOff = 1874
					if (iVar2282 >= 128)
					{
						if (fVar2283 > 10f)
						{
							func_1221(3, 82);
						}
						else
						{
							func_1221(3, 85);
						}
					}
					Jump @2661; //curOff = 1914
					if ((iVar2110 == 0 && !func_1188(1)) && !func_1189(1))
					{
						func_1184(97);
					}
					func_849(113);
					func_1306();
					task_look_at_entity(0, Global_35, -1, 48, 41, 0);
					func_1695(0, 45, 1.5f, -1.5f, -1, 25, 0);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1307(&(Local_424[3]), 0);
					func_1221(3, 83);
					Jump @2661; //curOff = 2039
					if (fVar2283 < 7f || iVar2281 >= 125)
					{
						func_1221(3, 84);
					}
					Jump @2661; //curOff = 2069
					func_1306();
					if (func_164(113))
					{
						func_1780();
					}
					task_follow_waypoint_recording(0, func_438(32), 0, 9, -1, 0, 0, -1);
					func_1307(&(Local_424[3]), 0);
					func_27(vLocal_1569[30], 0);
					func_1221(3, 85);
					Jump @2661; //curOff = 2137
					if (!func_164(107))
					{
						if (is_ped_climbing(&(Local_424[3])))
						{
							func_1184(104);
							func_849(107);
						}
					}
					vVar21 = { get_entity_coords(&(Local_424[3]), true, false) };
					if (vVar21.z >= 62.8f)
					{
						func_1228(Local_128.f_25);
					}
					if (is_entity_in_volume(&(Local_424[3]), Local_128.f_14, true, 0))
					{
						if (!func_164(103) && fVar2283 >= 5f)
						{
							func_849(104);
						}
						else
						{
							func_178(104);
						}
						func_1782(1);
						func_1306();
						task_go_straight_to_coord(0, 999.3069f, -6753.54f, 66.1674f, 2f, 20000, func_1277(get_entity_coords(&(Local_424[3]), true, false), get_entity_coords(Global_35, true, false)), 1056964608, 0);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_1307(&(Local_424[3]), 0);
						func_1221(3, 86);
					}
					Jump @2661; //curOff = 2372
					if (func_164(104))
					{
						if (func_1692(&(Local_424[3])) && get_sequence_progress(&(Local_424[3])) == 1)
						{
							set_anim_scene_entity(&(Local_2328[6]), "Hercule", &(Local_424[3]), 0);
							_set_anim_scene_playback_list_bool(&(Local_2328[6]), "pl_leadin_Wait", true);
							func_1221(3, 87);
						}
					}
					else
					{
						func_1221(3, 87);
					}
					Jump @2661; //curOff = 2467
					if (func_164(103))
					{
						func_135(uParam0, 25);
						set_anim_scene_entity(&(Local_2328[6]), "Hercule", &(Local_424[3]), 0);
						if (func_164(104))
						{
							set_anim_scene_bool(&(Local_2328[6]), "Loop_HerculeWaits", true, false);
							_set_anim_scene_playback_list_bool(&(Local_2328[6]), "pl_leadin_after_nowait", true);
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
							_hide_ped_weapons(Global_35, 2, true);
						}
						else
						{
							_set_anim_scene_playback_list_bool(&(Local_2328[6]), "pl_leadin_NoWait", true);
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
							_hide_ped_weapons(Global_35, 2, true);
						}
						func_1221(3, 88);
					}
				}
			}
			default:
				break;
	}
}

void func_1286(var uParam0)
{
	if (is_entity_dead(&(Local_424[2])))
	{
		return;
	}
	switch (Local_424[2]->f_2)
	{
		case 1:
			func_1221(2, 8);
		case 8:
			func_1204(11);
			vVar0 = { func_1256(11) };
			set_ped_sphere_defensive_area(&(Local_424[2]), vVar0, 1.5f, 0, 0, 0);
			set_ped_config_flag(&(Local_424[2]), 268, false);
			set_ped_combat_attributes(&(Local_424[2]), 30, false);
			_0x8b1e8e35a6e814ea(&(Local_424[2]), 1547831283, -1082130432);
			_0x8b1e8e35a6e814ea(&(Local_424[2]), -698498204, -1082130432);
			set_blocking_of_non_temporary_events(&(Local_424[2]), false);
			set_ped_combat_movement(&(Local_424[2]), 1);
			func_1306();
			task_put_ped_directly_into_cover(0, vVar0, 6000, 1, 0f, 0, 0, &(iLocal_230[11]), 1, 0, 0);
			task_combat_hated_targets_around_ped(0, 100f, 0, 19);
			func_1307(&(Local_424[2]), 0);
			func_27(vLocal_1569[0], 1);
			func_1221(2, 9);
			break;
		case 9:
			if (func_1180(15, 83))
			{
				if (func_845(vLocal_1569[0]) >= 10f)
				{
					if (func_835(Global_35, &(Local_424[2]), 1, 1) <= 10f)
					{
						func_1184(96);
						func_214(vLocal_1569[0]);
					}
				}
			}
			break;
	}
}

bool func_1287(var uParam0)
{
	switch (&iLocal_2369[3])
	{
		case 0:
			iLocal_2369[3] = 1;
		case 1:
			func_1681(&(uParam0->f_7375));
			func_415(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[2]), "Dutch", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[4]), "MicahBell", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[5]), "BillWilliamson", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[3]), "Hercule", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[6]), "CS_Frenchman", 0, 0, 0, 0);
			func_415(uParam0, &(Local_14.f_101[0]), "p_crateconf01x", 0, 0, 0, 0);
			func_415(uParam0, iVar2101, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			iLocal_2369[3] = 2;
			return true;
	}
	return false;
}

void func_1288(var uParam0)
{
	iVar0 = 63;
	while (iVar0 <= 70)
	{
		if (is_entity_dead(&(Local_424[iVar0])))
		{
			func_1221(iVar0, 0);
		}
		switch (Local_424[iVar0]->f_2)
		{
			case 0:
				if (func_1180(10, (64 + iVar0)))
				{
					vVar1 = { func_217(iVar0, 0, 4) };
					if (would_entity_be_occluded(func_437(func_1293(iVar0)), vVar1, true))
					{
						if (func_856(uParam0, iVar0, iVar0, 5))
						{
							func_1221(iVar0, 1);
						}
					}
				}
				break;
			case 1:
				set_ped_config_flag(&(Local_424[iVar0]), 277, true);
				set_entity_max_health(&(Local_424[iVar0]), get_entity_max_health(&(Local_424[iVar0]), false) * 2);
				_set_entity_health(&(Local_424[iVar0]), get_entity_max_health(&(Local_424[iVar0]), false), 0);
				func_1221(iVar0, 2);
			case 2:
				if (func_164(0))
				{
				}
				else
				{
					remove_all_ped_weapons(&(Local_424[iVar0]), true, true);
					func_849(0);
					func_1221(iVar0, 3);
					Jump @762; //curOff = 284
					if (func_164(0))
					{
					}
					else
					{
						func_866(&(Local_424[iVar0]), func_1733(iVar0, 0), -1, 3, 0, 1056964608, 1065353216, 0);
						func_849(0);
						if (!func_1733(iVar0, 1) == 0)
						{
							func_1221(iVar0, 4);
						}
						else
						{
							func_1221(iVar0, 8);
						}
						Jump @762; //curOff = 367
						if (func_164(0))
						{
						}
						else
						{
							func_866(&(Local_424[iVar0]), func_1733(iVar0, 1), -1, 3, 1, 1056964608, 1065353216, 0);
							func_849(0);
							func_1221(iVar0, 8);
							Jump @762; //curOff = 427
							_0x4707e9c23d8ca3fe(&(Local_424[iVar0]), Global_35);
							func_1691(iVar0, 2);
							Var6 = { func_217(iVar0, 1, 4) };
							set_ped_sphere_defensive_area(&(Local_424[iVar0]), Var6, Var6.f_3, 1, 0, 0);
							set_ped_accuracy(&(Local_424[iVar0]), 0);
							set_ped_combat_ability(&(Local_424[iVar0]), 0);
							set_ped_combat_movement(&(Local_424[iVar0]), 1);
							func_1306();
							task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_424[iVar0]), false), &(Local_424[2]), 2f, 1, 4f, 1082130432, 1, 0, 0, -687903391, 40000, 0);
							task_combat_ped(0, &(Local_424[2]), 0, 0);
							func_1307(&(Local_424[iVar0]), 0);
							func_1221(iVar0, 9);
							Jump @762; //curOff = 602
							if (!bVar5)
							{
								bVar5 = true;
								if (is_entity_in_volume(Global_35, Local_128.f_17, true, 0))
								{
									func_1203(63, 70, 16);
								}
								else
								{
									Jump @762; //curOff = 641
									func_1722(iVar0, 2);
									register_target(&(Local_424[iVar0]), Global_35, 1);
									set_ped_accuracy(&(Local_424[iVar0]), 100);
									set_ped_combat_ability(&(Local_424[iVar0]), 2);
									task_combat_ped(&(Local_424[iVar0]), Global_35, 16777216, 0);
									func_1221(iVar0, 17);
									Jump @762; //curOff = 719
									if (!bVar5)
									{
										bVar5 = true;
										if (!is_entity_in_volume(Global_35, Local_128.f_18, true, 0))
										{
											func_1203(63, 70, 8);
										}
										else
										{
											iVar0++;
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
}

void func_1289(var uParam0)
{
	Var0.f_8 = -1082130432;
	if (func_162(uParam0, 4) == 3)
	{
		Var0 = { 963f, -6765.7f, 45f };
	}
	else if (func_162(uParam0, 4) == 5)
	{
		Var0 = { 958.317f, -6798.35f, 44.0076f };
	}
	Var0.f_6 = &iLocal_1452[1];
	Var0.f_7 = 0f;
	Var0.f_12 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 1;
	if (iVar2284 < 100 && !_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		iLocal_2287 = 100;
	}
	switch (iVar2284)
	{
		case 0:
			func_1200(979.7f, -6786.6f, 45.4f, -1082130432);
			iLocal_2287 = iVar2284 + 1;
			break;
		case 1:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 0.2f)
			{
				func_1200(971.1f, -6797.8f, 47.3f, -1082130432);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 2:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 1f)
			{
				func_1200(979.2f, -6760.6f, 46.3f, -1082130432);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 3:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 6.988f)
			{
				Var0.f_3 = { 971.5f, 6760.3f, 44.2f };
				_fire_single_bullet_ignore_entity_new(&Var0);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 4:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 7.516f)
			{
				Var0.f_3 = { 972f, -6760.7f, 44.8f };
				_fire_single_bullet_ignore_entity_new(&Var0);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 5:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 8.241f)
			{
				Var0.f_3 = { 968.5f, -6763.7f, 43.8f };
				_fire_single_bullet_ignore_entity_new(&Var0);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 6:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) >= 8.4f)
			{
				Var0.f_3 = { 971.9f, -6760.6f, 43.9f };
				_fire_single_bullet_ignore_entity_new(&Var0);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 100:
			func_27(vLocal_1569[29], 0);
			if (func_845(vLocal_1569[29]) >= 0.2f)
			{
				Var0.f_3 = { 980.7891f, -6755.223f, 46.9797f };
				func_1200(978.692f, -6745.334f, 51.021f, -1082130432);
				_fire_single_bullet_ignore_entity_new(&Var0);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 101:
			if (func_845(vLocal_1569[29]) >= 0.2f)
			{
				Var0.f_3 = { 980.7891f, -6755.223f, 47.2797f };
				func_1200(981.9523f, -6738.218f, 53.1919f, -1082130432);
				_fire_single_bullet_ignore_entity_new(&Var0);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 102:
			if (func_845(vLocal_1569[29]) >= 0.25f)
			{
				Var0.f_3 = { 980.7891f, -6754.223f, 46.9797f };
				func_1200(977.902f, -6750.199f, 48.724f, -1082130432);
				_fire_single_bullet_ignore_entity_new(&Var0);
				func_214(vLocal_1569[29]);
				func_1247(0, 978.022f, -6750.848f, 49.338f, 1065353216);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 103:
			if (iVar2281 >= 6)
			{
				func_1200(983.658f, -6725.155f, 54.091f, -1082130432);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 104:
			if (iVar2281 >= 10)
			{
				func_1200(984.405f, -6724.326f, 58.027f, -1082130432);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 105:
			if (iVar2281 >= 18)
			{
				func_1200(990.141f, -6726.701f, 58.075f, -1082130432);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 106:
			if (iVar2281 >= 63)
			{
				func_1200(997.488f, -6728.616f, 65.1241f, -1082130432);
				func_214(vLocal_1569[29]);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 107:
			if (iVar2281 >= 112)
			{
				func_1200(989.3f, -6773f, 50.7f, -1082130432);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 108:
			if (iVar2281 >= 118)
			{
				func_1200(986.4f, -6780.7f, 50f, -1082130432);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
		case 109:
			if (iVar2281 >= 133)
			{
				func_1200(1001.513f, -6760.079f, 60.674f, -1082130432);
				iLocal_2287 = iVar2284 + 1;
			}
			break;
	}
}

void func_1290(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			waypoint_playback_override_speed(iParam0, fParam1, 0, -1f, 0);
		}
	}
}

int func_1291(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1292()
{
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		func_1251(iVar0, 1);
		func_436(func_1234(iVar0));
		iVar0++;
	}
	if (does_pickup_exist(iVar2151))
	{
		remove_pickup(iVar2151);
	}
}

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 4:
			return 1;
		case 5:
			return 2;
		case 3:
			return 3;
		case 6:
			return 4;
		case 7:
			return 5;
		case 8:
			return 5;
		case 9:
			return 6;
		case 10:
			return 6;
		case 11:
			return 6;
	}
	if (iParam0 >= 12 && iParam0 <= 100)
	{
		return 7;
	}
	return -1;
}

char* func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "muz_cannon_warship";
		case 1:
			return "scr_smg2_fort_exp";
		case 2:
			return "scr_smg2_fort_exp_debris";
		case 3:
			return "ent_amb_falling_debris";
		case 4:
			return "exp_grd_smoke_post_small";
		case 5:
			return "scr_smg2_fort_exp_cannon";
		case 6:
			return "proj_cannon_trail";
		case 7:
			return "scr_smg2_boat_impact";
		case 8:
			return "scr_smg2_boat_exp";
		case 9:
			return "smg2_sounds";
		case 10:
			return "Cannon_Ball";
		case 11:
			return "SMG2_Des";
		case 12:
			return "explosion_falling_debris";
		case 13:
			return "WarShip_Cannon";
		case 14:
			return "Boat_Explosion";
		case 15:
			return "SMALL_EXPLOSION_SHAKE";
		case 16:
			return "HAND_SHAKE";
		case 17:
			return "SCREAM_TERROR";
	}
	return "";
}

void func_1295()
{
	disable_control_action(0, -17122892, false);
	disable_control_action(0, 1934388793, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, 1618006066, false);
	disable_control_action(0, -1046962283, false);
	disable_control_action(0, 613911080, false);
	disable_control_action(0, -1722177808, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 516589524, false);
	disable_control_action(0, 1390807691, false);
	disable_control_action(0, 1663574939, false);
}

void func_1296(var uParam0)
{
	switch (iVar2310)
	{
		case 0:
			func_1198(54);
			func_1198(58);
			func_1198(59);
			iLocal_2313 = 1;
			break;
		case 1:
			if ((func_1233(54) && func_1233(58)) && func_1233(59))
			{
				iLocal_2313 = 2;
			}
			break;
		case 2:
			if (func_856(uParam0, 72, 87, 11))
			{
				iLocal_2313 = 3;
			}
			break;
		case 3:
			if (!func_164(0))
			{
				iVar0 = 77;
				while (iVar0 <= 80)
				{
					if (!has_ped_got_weapon(&(Local_424[iVar0]), &(iLocal_1452[1]), 0, false))
					{
						func_866(&(Local_424[iVar0]), &(iLocal_1452[1]), -1, 3, 0, 1056964608, 1065353216, 0);
						func_849(0);
						if (iVar0 == 80)
						{
							func_27(vLocal_1569[39], 0);
							iLocal_2313 = 4;
						}
					}
					iVar0++;
				}
			}
			break;
		case 4:
			iVar0 = 72;
			while (iVar0 <= 87)
			{
				vVar1 = { func_217(iVar0, 0, 5) };
				attach_entity_to_entity(&(Local_424[iVar0]), Local_1700.f_1, 0, vVar1, func_1469(iVar0 == 76, -28.8f, 0f), 0f, (func_1277(get_entity_coords(&(Local_424[iVar0]), true, false), get_entity_coords(Global_35, true, false)) + 90f), false, false, false, false, 2, true, false, false);
				iVar0++;
			}
			func_1695(&(Local_424[74]), 58, 1000f, -1000f, -1, 5, 0);
			func_1695(&(Local_424[75]), 58, 1000f, -1000f, -1, 5, 0);
			func_1695(&(Local_424[76]), 59, 1000f, -1000f, -1, 5, 0);
			func_1695(&(Local_424[73]), 58, 1000f, -1000f, -1, 5, 0);
			iLocal_2313 = 5;
			break;
		case 5:
			iVar0 = 77;
			while (iVar0 <= 87)
			{
				iVar5 = get_random_int_in_range(0, 3);
				func_1306();
				if (iVar5 == 0)
				{
					func_1695(0, 55, 4f, -4f, -1, 0, 0);
				}
				else if (iVar5 == 1)
				{
					func_1695(0, 56, 4f, -4f, -1, 0, 0);
				}
				else if (iVar5 == 2)
				{
					func_1695(0, 57, 4f, -4f, -1, 0, 0);
				}
				func_1695(0, 54, 4f, -4f, -1, 1, get_random_float_in_range(0f, 1f));
				func_1307(&(Local_424[iVar0]), get_random_float_in_range(0f, 5f));
				iVar0++;
			}
			func_27(vLocal_1569[38], 1);
			iLocal_2313 = 6;
			break;
		case 6:
			if (func_845(vLocal_1569[38]) >= 10f)
			{
				iLocal_2313 = 5;
			}
			if (func_845(vLocal_1569[39]) >= fVar2319)
			{
				iVar6 = func_1783(77, 87);
				if (!iVar6 == 0)
				{
					func_1729(&(Local_424[iVar6]), get_entity_coords(Global_35, true, false) + Vector(get_random_float_in_range(-2f, 2f), get_random_float_in_range(-2f, 2f), get_random_float_in_range(-2f, 2f)), Global_35, 0, 0, 0, 1);
				}
				fLocal_2322 = get_random_float_in_range(0.5f, 4f);
				func_214(vLocal_1569[39]);
			}
			break;
	}
}

void func_1297(var uParam0)
{
	if (is_ped_shooting(Global_35))
	{
		func_214(vLocal_1569[35]);
	}
	iVar0 = 0;
	if (func_845(vLocal_1569[35]) >= 10f)
	{
		if (iVar2307 == 0)
		{
			iVar0 = 107;
		}
		else if (iVar2307 > 0 && iVar2307 <= 2)
		{
			iVar0 = 108;
		}
		else if (iVar2307 > 2 && iVar2307 <= 4)
		{
			iVar0 = 109;
		}
		else if (iVar2307 > 5 && iVar2307 < 7)
		{
			iVar0 = 110;
		}
		if (!iVar0 == 0)
		{
			func_1184(iVar0);
		}
		func_214(vLocal_1569[35]);
	}
	else if (func_164(122))
	{
		if (iVar2307 > 0 && iVar2307 <= 3)
		{
			iVar0 = 111;
		}
		else if (iVar2307 > 3 && iVar2307 <= 7)
		{
			iVar0 = 112;
		}
		else if (iVar2307 >= 8 && iVar2307 < 10)
		{
			iVar0 = 113;
		}
		if (!iVar0 == 0)
		{
			if (func_845(vLocal_1569[41]) >= 6f && !iVar2307 == 6)
			{
				bVar1 = true;
			}
			if (iVar2307 == 7)
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (!func_1188(1) && !func_1189(1))
				{
					func_214(vLocal_1569[41]);
					func_1725(&(uParam0->f_5310), func_1724(iVar0), 0, -1, 0, 0);
				}
			}
		}
	}
	else if (func_164(123))
	{
		if (!func_1188(1) && !func_1189(1))
		{
			if (iVar2307 >= 0 && iVar2307 <= 2)
			{
				func_1725(&(uParam0->f_5310), func_1724(115), 0, -1, 0, 0);
			}
			else if (iVar2307 >= 3 && iVar2307 <= 6)
			{
				func_1725(&(uParam0->f_5310), func_1724(116), 0, -1, 0, 0);
			}
			else if (iVar2307 >= 7 && iVar2307 <= 9)
			{
				func_1725(&(uParam0->f_5310), func_1724(117), 0, -1, 0, 0);
			}
			else
			{
				func_1725(&(uParam0->f_5310), func_1724(118), 0, -1, 0, 0);
			}
		}
	}
}

void func_1298()
{
	switch (Local_424[3]->f_2)
	{
		case 1:
			func_1221(3, 8);
		case 8:
			set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[10]), false, 0, false, false);
			task_swap_weapon(&(Local_424[3]), 1, 1, 0, 0);
			_set_ped_crouch_movement(&(Local_424[3]), true, 0, false);
			force_ped_motion_state(&(Local_424[3]), 1140525470, false, 0, false);
			set_ped_sphere_defensive_area(&(Local_424[3]), func_472(5, 4), 0.75f, 1, 0, 0);
			func_1306();
			task_go_to_coord_while_aiming_at_entity(0, func_472(5, 4), Local_1700.f_1, 1.5f, 1, 0.5f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			task_shoot_at_entity(0, Local_1700.f_1, -1, -687903391, 0);
			func_1307(&(Local_424[3]), 0);
			func_1221(3, 9);
			break;
		case 9:
			if (is_ped_reloading(Global_35))
			{
				if (!func_164(119))
				{
					func_849(119);
					func_849(120);
				}
				else
				{
					func_178(120);
				}
			}
			else
			{
				func_178(119);
				func_178(120);
			}
			if (func_164(120))
			{
				if (iVar2310 == 0 || iVar2310 > 2)
				{
					func_1184(119);
				}
				else if (iVar2310 == 1)
				{
					func_1184(120);
				}
				else if (iVar2310 == 2)
				{
					func_1184(121);
				}
				uLocal_2312 = iVar2310 + 1;
			}
			break;
	}
}

void func_1299()
{
	switch (iVar2306)
	{
		case 0:
			func_27(vLocal_1569[34], 0);
			func_849(124);
			iLocal_2308 = 1;
			break;
		case 1:
			Local_1700.f_3[0] = 1;
			set_boat_anchor(Local_1700.f_1, true);
			iLocal_2308 = 2;
			break;
		case 2:
			break;
		case 5:
			Local_1700.f_3[0] = 1;
			Local_1700.f_3[1] = 1;
			Local_1700.f_3[2] = 1;
			Local_1700.f_3[0]->f_13.f_10 = { get_entity_coords(Global_35, true, false) };
			Local_1700.f_3[1]->f_13.f_10 = { get_offset_from_entity_in_world_coords(Global_35, func_1784(2f)) };
			Local_1700.f_3[2]->f_13.f_10 = { get_offset_from_entity_in_world_coords(Global_35, func_1784(3f)) };
			Local_1700.f_3[0]->f_11 = 2;
			Local_1700.f_3[1]->f_11 = 2;
			Local_1700.f_3[2]->f_11 = 2;
			func_27(vLocal_1569[36], 0);
			set_entity_invincible(Global_35, false);
			set_entity_proofs(Global_35, 0, false);
			iLocal_2308 = 6;
			break;
		case 6:
			if ((Local_1700.f_3[0]->f_11 == 4 || Local_1700.f_3[1]->f_11 == 4) || Local_1700.f_3[2]->f_11 == 4)
			{
				add_explosion(get_entity_coords(Global_35, true, false), 26, 0.5f, true, false, 1f);
				_set_entity_health(Global_35, 0, Local_1700.f_1);
			}
			break;
	}
}

void func_1300()
{
	if (iVar2319 == 0)
	{
		iVar0 = 77;
	}
	else
	{
		iVar0 = iVar2319 + 1;
	}
	if (iVar0 < 77 || iVar0 > 87)
	{
		return;
	}
	if (does_entity_exist(&(Local_424[iVar0])) && !is_entity_dead(&(Local_424[iVar0])))
	{
		detach_entity(&(Local_424[iVar0]), false, false);
		set_entity_dynamic(&(Local_424[iVar0]), true);
		activate_physics(&(Local_424[iVar0]));
		set_ped_to_ragdoll_with_fall(&(Local_424[iVar0]), 5000, 10000, 1, func_1688(func_1689(get_entity_coords(&(Local_424[iVar0]), true, false), get_entity_coords(Global_35, true, false), 1065353216)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
		_set_entity_health(&(Local_424[iVar0]), 0, 0);
		vVar1 = { get_random_float_in_range(-8f, 8f), get_random_float_in_range(-8f, 8f), get_random_float_in_range(10f, 15f) };
		apply_force_to_entity(&(Local_424[iVar0]), 1, vVar1, 0f, 0f, 0f, 0, false, false, true, true, true);
	}
	iLocal_2321 = iVar0;
}

void func_1301(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		func_135(uParam0, 27);
	}
	else if (iParam1 == 6)
	{
		func_135(uParam0, 28);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			iVar1 = 7;
			iVar2 = iVar0;
			while (iVar2 <= iVar1)
			{
				func_1785(iVar2, 0);
				iVar2++;
			}
			break;
		case 1:
			func_1785(0, 1);
			break;
		case 2:
			func_1785(1, 1);
			break;
		case 3:
			func_1785(2, 1);
			break;
		case 4:
			func_1785(3, 1);
			break;
		case 5:
			func_1785(4, 1);
			break;
		case 6:
			func_1785(5, 1);
			break;
		case 7:
			func_1785(6, 1);
			break;
		case 8:
			func_1785(7, 1);
			break;
		default:
			break;
	}
	Local_1700.f_403 = iParam1;
}

void func_1302()
{
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (does_particle_fx_looped_exist(Local_1700.f_3[iVar0]->f_13.f_17))
		{
			stop_particle_fx_looped(Local_1700.f_3[iVar0]->f_13.f_17, false);
		}
		if (does_entity_exist(Local_1700.f_3[iVar0]->f_13.f_9))
		{
			delete_object(&(Local_1700.f_3[iVar0]->f_13.f_9));
		}
		Local_1700.f_3[iVar0] = 0;
		Local_1700.f_3[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_1303()
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -197984200, false);
	disable_control_action(0, -238861894, false);
	disable_control_action(0, -485697785, false);
}

void func_1304(int iParam0, bool bParam1, float fParam2)
{
	Var0 = { func_1224(iParam0) };
	iLocal_1494[iParam0] = create_camera_with_params(26379945, Var0, Var0.f_3, Var0.f_6, false, 2);
	if (fParam2 > 0f)
	{
		shake_cam(&(iLocal_1494[iParam0]), "HAND_SHAKE", fParam2);
	}
	if (bParam1)
	{
		func_1305(iParam0, 1, 0, 0);
	}
}

void func_1305(int iParam0, bool bParam1, bool bParam2, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < iVar1488)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (does_cam_exist(&(iLocal_1494[iVar0])) && is_cam_active(&(iLocal_1494[iVar0])))
		{
			set_cam_active(&(iLocal_1494[iVar0]), false);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (does_cam_exist(&(iLocal_1494[iParam0])))
		{
			set_cam_active(&(iLocal_1494[iParam0]), true);
			render_script_cams(true, bParam2, floor((fParam3 * 1000f)), true, false, 0);
		}
	}
	else if (!bParam1)
	{
		render_script_cams(false, bParam2, floor((fParam3 * 1000f)), true, false, 0);
		set_cam_active(&(iLocal_1494[iParam0]), false);
	}
}

void func_1306()
{
	if (func_164(8))
	{
		close_sequence_task(iVar2112);
		func_178(8);
	}
	clear_sequence_task(&uLocal_2114);
	open_sequence_task(&uLocal_2114);
	func_849(8);
}

void func_1307(int iParam0, float fParam1)
{
	if (!func_164(8))
	{
		return;
	}
	close_sequence_task(iVar2110);
	if (func_939(iParam0, 0))
	{
		if (fParam1 == 0f)
		{
			task_perform_sequence(iParam0, iVar2110);
		}
		else
		{
			_task_perform_sequence_2(iParam0, iVar2110, fParam1, fParam1);
		}
	}
	func_178(8);
}

void func_1308()
{
	fVar0 = (to_float((_get_system_time() - iVar2305)) / 1000f);
	switch (iVar2307)
	{
		case 0:
			if (func_164(126) && !iVar2304 == -1)
			{
				play_stream_frontend(iVar2304);
			}
			func_1786(7.32f, -20f, 1.04f, 1f);
			iLocal_2307 = _get_system_time();
			uLocal_2309 = iVar2307 + 1;
			break;
		case 1:
			if (fVar0 > 0.4f)
			{
				func_1786(1.58f, -12.68f, 4.6f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 2:
			if (fVar0 > 0.6f)
			{
				func_1786(5.37f, 0.13f, -0.45f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 3:
			if (fVar0 > 0.7f)
			{
				func_1786(3.82f, -4.36f, 5.24f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 4:
			if (fVar0 > 1.2f)
			{
				func_1786(3.82f, -4.36f, 5.24f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 5:
			if (fVar0 > 1.4f)
			{
				func_1786(3.82f, 10.17f, 3.18f, 2f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 6:
			if (fVar0 > 2.4f)
			{
				func_1786(3.82f, 10.17f, 3.18f, 2f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 7:
			if (fVar0 > 2.8f)
			{
				func_1786(3.82f, 14.84f, 3.18f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 8:
			if (fVar0 > 3f)
			{
				func_1786(0.42f, 18.3f, 5.41f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 9:
			if (fVar0 > 3.5f)
			{
				func_1786(0.42f, 4.61f, 5.41f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 10:
			if (fVar0 > 3.7f)
			{
				func_1786(-2.32f, 9.77f, 9.45f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 11:
			if (fVar0 > 3.9f)
			{
				func_1786(0.17f, 5.91f, 13.8f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 12:
			if (fVar0 > 4.4f)
			{
				func_1786(7.14f, -5.61f, 0f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 13:
			if (fVar0 > 4.8f)
			{
				func_1786(-2.41f, 1.35f, 4.91f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 14:
			if (fVar0 > 5.2f)
			{
				func_1786(-2.41f, 20f, 4.91f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 15:
			if (fVar0 > 5.3f)
			{
				func_1786(7.21f, 20f, -0.67f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 16:
			if (fVar0 > 5.6f)
			{
				func_1786(2.59f, -10f, 5.68f, 1f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 17:
			if (fVar0 > 5.7f)
			{
				func_1786(2.59f, 5.92f, 5.68f, 3f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 18:
			if (fVar0 > 5.8f)
			{
				func_1786(2.47f, 10.39f, 10.23f, 3f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
		case 19:
			if (fVar0 > 5.85f)
			{
				func_1786(2.47f, 7.96f, 12.7f, 3f);
				uLocal_2309 = iVar2307 + 1;
			}
			break;
	}
}

bool func_1309(var uParam0)
{
	switch (&iLocal_2369[4])
	{
		case 0:
			iLocal_2369[4] = 1;
		case 1:
			func_1681(&(uParam0->f_7375));
			func_415(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[2]), "Dutch", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[4]), "MicahBell", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[5]), "BillWilliamson", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[3]), "Hercule", 0, 0, 0, 0);
			func_415(uParam0, &(Local_424[6]), "CS_Frenchman", 0, 0, 0, 0);
			func_820(&(uParam0->f_7375), &(Local_424[9]), "MSP_SMUGGLER2_MALES_01", 0, 0, 0);
			func_820(&(uParam0->f_7375), &(Local_424[10]), "MSP_SMUGGLER2_MALES_01^1", 0, 0, 0);
			func_820(&(uParam0->f_7375), &(Local_424[11]), "MSP_SMUGGLER2_MALES_01^2", 0, 0, 0);
			func_415(uParam0, iVar2101, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			func_415(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 0, 0, 0);
			iLocal_2369[4] = 2;
			return true;
	}
	return false;
}

bool func_1310(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_1787(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1406(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1788(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_1789(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1311(var uParam0)
{
	switch (iVar2324)
	{
		case 0:
			iLocal_2327 = 1;
		case 1:
			func_434(func_433(2), 1, 0, 1);
			func_434(func_433(5), 1, 0, 1);
			func_434(func_433(4), 1, 0, 1);
			set_entity_invincible(&(Local_424[3]), true);
			set_entity_invincible(&(Local_424[6]), true);
			iLocal_2327 = 2;
		case 2:
			func_1200(986.8f, -6743.1f, 62.4f, -1082130432);
			func_27(vLocal_1569[40], 1);
			iLocal_2327 = 3;
			break;
		case 3:
			if (func_845(vLocal_1569[40]) >= 0.1f)
			{
				func_1200(986f, -6745.3f, 62.6f, -1082130432);
				iLocal_2327 = 4;
			}
			break;
		case 4:
			if (func_845(vLocal_1569[40]) >= 0.3f)
			{
				func_1200(986f, -6747.3f, 62.7f, -1082130432);
				iLocal_2327 = 5;
			}
			break;
		case 5:
			if (func_845(vLocal_1569[40]) >= 0.35f)
			{
				func_1200(987.1f, -6742.8f, 63f, -1082130432);
				iLocal_2327 = 6;
			}
			break;
		case 6:
			if (func_845(vLocal_1569[40]) >= (get_distance_between_coords(get_entity_coords(Local_1700.f_1, true, false), get_entity_coords(iVar2101, true, false), true) / 80f))
			{
				start_entity_fire(&(Local_424[3]), 100f, 0, 4);
				set_entity_dynamic(&(Local_424[3]), true);
				activate_physics(&(Local_424[3]));
				set_ped_to_ragdoll_with_fall(&(Local_424[3]), 5000, 10000, 1, func_1688(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { -5f, 10f, 10f };
				apply_force_to_entity(&(Local_424[3]), 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				func_27(vLocal_1569[40], 0);
				iLocal_2327 = 7;
			}
			break;
		case 7:
			if (func_845(vLocal_1569[40]) >= 0.3f)
			{
				start_entity_fire(&(Local_424[5]), 100f, 0, 4);
				set_entity_dynamic(&(Local_424[5]), true);
				activate_physics(&(Local_424[5]));
				set_ped_to_ragdoll_with_fall(&(Local_424[5]), 5000, 10000, 1, func_1688(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { 5f, 10f, 10f };
				apply_force_to_entity(&(Local_424[5]), 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				func_27(vLocal_1569[40], 0);
				iLocal_2327 = 8;
			}
			break;
		case 8:
			if (func_845(vLocal_1569[40]) >= 0.5f)
			{
				start_entity_fire(&(Local_424[5]), 100f, 0, 4);
				set_entity_dynamic(&(Local_424[5]), true);
				activate_physics(&(Local_424[5]));
				set_ped_to_ragdoll_with_fall(&(Local_424[5]), 5000, 10000, 1, func_1688(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { 5f, 10f, 10f };
				apply_force_to_entity(&(Local_424[5]), 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				func_27(vLocal_1569[40], 0);
				iLocal_2327 = 9;
			}
			break;
		case 9:
			_set_entity_health(Global_35, 0, 0);
			func_434(func_433(2), 0, 0, 1);
			func_434(func_433(5), 0, 0, 1);
			func_434(func_433(4), 0, 0, 1);
			set_entity_invincible(&(Local_424[3]), false);
			set_entity_invincible(&(Local_424[6]), false);
			iLocal_2327 = 10;
			break;
		case 10:
			break;
	}
}

void func_1312(var uParam0, var uParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1790(&((*Global_1835011)[uParam0->f_607]->f_22), uParam1, iParam2);
}

bool func_1313(int iParam0)
{
	if (-1829635046 == func_1791(81053684))
	{
		if (func_1792(iParam0))
		{
			return true;
		}
	}
	else if (func_1573(-525676072, iParam0))
	{
		if (func_1792(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1314(int iParam0)
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

void func_1315(int iParam0)
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

void func_1316()
{
	iVar0 = func_1024(Global_35, 9, 1, 0);
	if (func_663(iVar0))
	{
		return;
	}
	iVar0 = func_1024(Global_35, 7, 1, 0);
	if (func_663(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1024(Global_35, 0, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1024(Global_35, 1, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1024(Global_35, 18, 1, 0);
	if (func_663(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1793();
	if (func_663(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1254(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1794(6291456, 0);
	if (func_663(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1254(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1317()
{
	return Global_1900383->f_393;
}

int func_1318(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1795(*uParam0, 0f, 0f, 0f))
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

void func_1319(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1320(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1321(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1322()
{
	return &Global_1899515;
}

void func_1323(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1324(int iParam0)
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

bool func_1325()
{
	return (func_1796() || func_1797());
}

void func_1326(bool bParam0)
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
	func_1798(0f);
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
		func_1799();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1327(var uParam0)
{
	return uParam0->f_865;
}

float func_1328(var uParam0)
{
	return uParam0->f_868;
}

float func_1329(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1330(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1331(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1332(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1129(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1800(iParam4);
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

bool func_1333(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1334(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1335(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1333(1108822547, 6))
	{
		if (bParam2)
		{
			func_1332(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1336(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1337(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1336(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_648(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 || iParam1);
}

void func_1337(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_648(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_648(iParam0, 1)])->f_10 && iParam1));
}

bool func_1338(var uParam0)
{
	if (func_1801(&(uParam0->f_29), 62))
	{
		switch (func_1802())
		{
			case 1:
				if (!func_1801(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1801(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1801(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1801(&(uParam0->f_29), 32))
				{
					if (func_1801(&(uParam0->f_29), 2))
					{
						if (func_670(func_279()) < 5)
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

int func_1339(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1436(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1066("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1067(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_663(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1436(iParam1, 512) && func_1568(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1436(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1436(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1436(iParam1, 33554432)))
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
		func_1068(iVar1);
	}
	if (func_663(iVar0))
	{
	}
	else if (!func_1436(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1339(uParam0, iParam1, iParam2);
	}
	else if (func_1436(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1340(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1341(int iParam0)
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

void func_1342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1343(var uParam0)
{
	if (!func_825(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_1342(&(uParam0->f_1), 1);
	}
}

void func_1344(var uParam0)
{
	if (!func_825(*uParam0, 1))
	{
		request_ptfx_asset();
		func_1342(uParam0, 1);
	}
}

bool func_1345(var uParam0)
{
	if (func_825(uParam0->f_2, 1))
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

char* func_1346(int iParam0)
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

bool func_1347(int iParam0)
{
	return iParam0 != 0;
}

int func_1348(var uParam0, int iParam1)
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

int func_1349(var uParam0, char* sParam1)
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

int func_1350(var uParam0)
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

void func_1351(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1352(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1353(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1354(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1354(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1354(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1354(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1354(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1354(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1354(uParam0, 5, iParam4))
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
			if (func_1354(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1354(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1354(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1355(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1356(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_211((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1357(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_465(sParam0, 1);
}

bool func_1358(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_795(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1359(var uParam0)
{
	if (func_825(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_3, 1))
	{
		func_797(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_1342(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_1342(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1360(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_799(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1361(var uParam0, int iParam1)
{
	if (func_825(uParam0->f_1, 2))
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
	if (!func_825(uParam0->f_1, 1))
	{
		func_806(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1362(var uParam0)
{
	if (func_825(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_2, 1))
	{
		func_808(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_1342(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1363(var uParam0)
{
	if (func_825(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_3, 1))
	{
		func_810(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_1342(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1364(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_812(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1365(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_814(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1366(var uParam0)
{
	if (func_825(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_2, 1))
	{
		func_816(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_1342(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1367(var uParam0)
{
	if (func_825(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_825(uParam0->f_1, 1))
	{
		func_818(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_1342(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1368(int iParam0)
{
	if (func_486(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1369(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_486(iParam0))
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
			if (func_941(iParam0, 2, 1))
			{
				func_938(iParam0, 2, 1);
			}
			if (func_682(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_936(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_492(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_939(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_939(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1803(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_936(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1804(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_936(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1804(iParam0, 1);
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
			if (!func_941(iParam0, 44, 0))
			{
				func_936(iParam0, 44, 0);
			}
			if (func_1805(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1804(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_938(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_943(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_434(iParam0, 0, 0, 1);
			}
			func_938(iParam0, 33, 1);
			func_938(iParam0, 34, 1);
			func_938(iParam0, 29, 1);
			if (!func_392(vVar0) && bParam7)
			{
				func_1804(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1804(iParam0, 4);
			}
			else
			{
				func_1804(iParam0, 5);
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
						func_1803(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_836(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1804(iParam0, 4);
			}
			else
			{
				func_1804(iParam0, 5);
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
				if (func_1806(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1807(iParam0, iParam13, 0);
						func_1808(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_941(iParam0, 25, 0))
						{
							func_938(iParam0, 25, 0);
						}
						func_936(iParam0, 66, 0);
						func_1804(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1804(iParam0, 5);
				}
				func_936(iParam0, 28, 1);
			}
			else
			{
				func_1804(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1804(iParam0, 6);
			}
			break;
		case 6:
			if (func_939(Global_1360165[iParam0], 0))
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
					func_1809(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1810(Global_1360165[iParam0], 1);
				}
			}
			func_1804(iParam0, 7);
		case 7:
			func_943(iParam0, bParam9, bParam15, 0);
			func_933(iParam0, 4, bParam11);
			func_937(iParam0);
			if (bParam20)
			{
				if (func_1811(Global_1360165[iParam0]))
				{
				}
			}
			func_1812(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1804(iParam0, 0);
			func_683(iParam0, 16, 1);
			func_938(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1370(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1813(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1814(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1815(uParam0, iParam1, iParam2, func_318(iParam2, 0));
	func_1718(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1718(uParam0, iParam1, 128);
	}
	else
	{
		func_1231(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1371(int iParam0)
{
	if (!func_486(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1372(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1373(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1382(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1374(int iParam0)
{
	iParam0 = func_260(iParam0);
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
	func_1816(&Var0);
	func_1817(iParam0, Var0);
	func_1818(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1819(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1820(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1821(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1822(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1823(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1824(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1825(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1826(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1375(vector3 vParam0)
{
	return func_1827(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1376(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_501(iParam0))
	{
		return false;
	}
	iVar0 = func_209(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1377(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_495(iParam0);
	func_495(iParam0);
	func_1828(iParam0, iParam1);
	func_1829(iParam0, iParam1);
	func_1830(iParam0, iParam1);
	iVar1 = func_209(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1831(iVar1);
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
	iVar3 = func_209(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1831(iVar3);
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
	func_262();
}

bool func_1378()
{
	iVar0 = func_1317();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1379()
{
	iVar0 = func_1317();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1832(0);
}

int func_1380(int iParam0)
{
	iParam0 = func_260(iParam0);
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

int func_1381(int iParam0)
{
	iParam0 = func_260(iParam0);
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

int func_1382(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_1383(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1630(&iVar0, &iVar1, &iVar2);
	func_1631(iParam0, iVar0);
	func_1632(iParam0, iVar1);
	func_1633(iParam0, iVar2);
	func_1833(iParam0, 1);
	func_1834(iParam0, 1);
}

void func_1384(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1835(iParam0, 1);
}

void func_1385(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_260(iParam0);
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

bool func_1386(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_952(iParam0, 1);
}

struct<2> func_1387(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1836(iParam0, &uVar2))
	{
	}
	if (!func_1837(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1388()
{
	if (func_1838(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1838(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1838(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1838(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1838(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1838(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1389(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1839(iParam0);
	func_1840(iParam0, uParam1);
	func_1841(iParam0);
	func_1842(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1843(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1390(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_1391(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1392(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1393(var uParam0)
{
	return uParam0;
}

bool func_1394(int iParam0)
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

int func_1395(var uParam0)
{
	return *uParam0;
}

bool func_1396(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1844(iParam0) };
	if (func_1795(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_837(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1845(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1397(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1398(var uParam0)
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

bool func_1399(var uParam0)
{
	switch (func_1846(uParam0))
	{
		case 0:
			uParam0->f_24 = func_279();
			iVar4 = func_279();
			func_1134(&iVar4, uParam0->f_6);
			func_1135(&iVar4, 0);
			func_1136(&iVar4, 0);
			if (func_971(uParam0->f_24, iVar4, 1))
			{
				func_328(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1847(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1848(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1849(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1848(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1849(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_328(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_670(iVar4), func_671(iVar4), func_672(iVar4));
				func_1850(get_clock_hours());
				func_1851(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1400(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1401(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1852(2000);
	Global_16 = 0;
	func_1853();
	set_entity_invincible(Global_35, func_1854(*iParam0, 8));
	if (!func_1854(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1854(*iParam0, 2) || func_1854(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1854(*iParam0, 16))
	{
		func_229(1);
	}
	if (func_1854(*iParam0, 32))
	{
		func_601(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1855(-1623728698, 0);
	}
	func_774(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1402(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1403(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1404(var uParam0)
{
	return *uParam0;
}

bool func_1405(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1406(uParam0, 32768))
	{
		return true;
	}
	if (func_1856(uParam0) >= 3)
	{
		uParam0->f_2286 = func_897(get_player_index(), 0, 0, 1);
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
		func_1857(uParam0);
	}
	if (func_1856(uParam0) < 10)
	{
		if (func_1856(uParam0) == 3)
		{
			func_1858(uParam0, iParam5, bParam6);
		}
		else if (func_1856(uParam0) > 3)
		{
			if (func_1404(uParam0) == 0)
			{
				if (!func_1406(uParam0, 524288))
				{
					func_1859(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1860(uParam0, 4);
					func_1861(uParam0, 10);
					func_1862(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1406(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1863(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1864(0);
			func_1865();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1863(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1866(uParam0, uParam0->f_2074))
				{
					if (func_1867(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1868(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1868(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1869(uParam0);
			}
		}
	}
	bVar0 = func_1870(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1406(uParam0, 268435456) && bVar1) && !func_1406(uParam0, 262144))
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
				func_721(uParam0, 131072);
				func_721(uParam0, 268435456);
			}
		}
		if (func_1871(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1863(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1404(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1856(uParam0) == 3 || func_1406(uParam0, 131072))
	{
		func_1872(uParam0);
		if (!func_1406(uParam0, 262144))
		{
			if ((bVar0 && func_1406(uParam0, 65536)) || func_1406(uParam0, 131072))
			{
				func_721(uParam0, 32768);
				func_1860(uParam0, 4);
				func_1861(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1862(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1856(uParam0) >= 3)
	{
		func_1873(uParam0, iParam5);
		func_1874(uParam0);
		if (!func_1875(uParam0, 1))
		{
			func_1876(uParam0);
		}
		func_1877(uParam0);
	}
	switch (func_1856(uParam0))
	{
		case 0:
			func_1878(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1879(uParam0);
			break;
		case 2:
			func_1880(uParam0);
			break;
		case 3:
			if (func_1881(uParam0))
			{
				func_1882(2);
				func_1868(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_214(&(uParam0->f_2262));
				func_1860(uParam0, 1);
				func_1883();
				func_1861(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1406(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1856(uParam0) == 5)
			{
				if (func_1884(uParam0))
				{
					func_1860(uParam0, 2);
					func_1861(uParam0, 6);
				}
			}
			if (func_1856(uParam0) == 6)
			{
				if (func_1885(uParam0))
				{
					func_1860(uParam0, 3);
					func_1861(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1886(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1887(uParam0, iParam5))
				{
					if (func_1888(uParam0))
					{
						uParam0->f_2075 = func_1889(uParam0);
						func_214(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1860(uParam0, 6);
						func_1861(uParam0, 9);
					}
					else
					{
						func_1860(uParam0, 4);
						func_1861(uParam0, 10);
						func_1862(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1887(uParam0, iParam5))
			{
				func_1862(uParam0, iParam5);
				func_1861(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1406(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1407(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1408(var uParam0, var uParam1)
{
	if (func_1406(uParam1, 32768))
	{
		Var0 = { func_1890(uParam0) };
		func_1891(uParam0, &Var0);
		if (func_1406(uParam1, 131072))
		{
			func_722(uParam0, 268435456);
			if (func_392(uParam0->f_865))
			{
				uParam0->f_865 = { func_1892(uParam1, uParam1->f_2074) };
			}
			if (func_392(uParam0->f_862))
			{
				uParam0->f_862 = { func_1892(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1406(uParam1, 268435456))
		{
			func_1893(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1406(uParam1, 524288))
	{
		func_722(uParam0, 67108864);
		func_1407(uParam1, 524288);
	}
	if (func_1871(uParam1, 128))
	{
		func_722(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1863(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1893(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1409(var uParam0)
{
	if (func_763(&(uParam0->f_7375), 128) || func_763(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_1894(&(uParam0->f_7375));
		func_1330(&(uParam0->f_7375), 128, 1);
		func_1330(&(uParam0->f_7375), 256, 1);
		func_1330(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1410(var uParam0)
{
	func_1895(&(uParam0->f_7375));
}

bool func_1411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_1896(uParam4, &uParam0);
	if (func_763(uParam4, 2) && !func_763(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1897(uParam4) != 1)
	{
		func_1898(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1897(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1899(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1900(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1901(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1902(uParam5);
				}
				func_1900(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_763(uParam4, 2097152))
					{
						func_1903(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_763(uParam4, 134217728)))
				{
				}
				else
				{
					func_1904(uParam4);
				}
				func_214(&(uParam4->f_1));
				func_1900(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1905(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_845(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1900(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1789(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1900(uParam4, 4);
					}
					else if (!func_392(func_1906(uParam4)) && !func_1727(Global_35, func_1906(uParam4), 100f, 1, 1))
					{
						func_1315(1);
						start_player_teleport(get_player_index(), func_1906(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_845(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1900(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_273(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1899(uParam4, &uParam0, uParam5);
						func_1900(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_845(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1900(uParam4, 4);
			}
			break;
		case 3:
			func_388(uParam4);
			if (func_1901(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1902(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_763(uParam4, 512)))
			{
				if (!func_763(uParam4, 1024) && func_1907(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_763(uParam4, 512))
				{
					func_214(&(uParam4->f_1));
					func_722(uParam4, 512);
					func_1900(uParam4, 4);
				}
				else if (func_763(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1898(uParam4);
			}
			if (func_763(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1908(uParam4) - func_1909(uParam4)))) <= 2f)
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
				if (func_1910(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1909(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1911(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1912(uParam4);
				return true;
			}
			else
			{
				if (func_763(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_214(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_722(uParam4, 512);
						func_1330(uParam4, 67108864, 1);
						func_1900(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_763(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1909(uParam4) <= 5000) && func_1909(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_763(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1401(&(uParam4->f_861), 0);
					func_722(uParam4, 536870912);
				}
				if (func_1909(uParam4) >= 5000 && func_1909(uParam4) <= (func_1908(uParam4) - 5000))
				{
					func_1913();
				}
			}
			break;
		case 6:
			if (func_1911(uParam4))
			{
				func_1912(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_763(uParam4, 524288))
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
						func_722(uParam4, 1073741824);
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
				if (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3)
				{
					if (func_1914(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1900(uParam4, 3);
					}
					else if (func_845(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1900(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1901(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1900(uParam4, 3);
					}
					else if (func_845(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1900(uParam4, 3);
					}
				}
				if (func_1897(uParam4) == 3)
				{
					if (func_763(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1900(uParam4, 4);
			break;
	}
	return false;
}

void func_1412(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1915()))
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

void func_1413(var uParam0)
{
	func_1903(&(uParam0->f_7375));
}

bool func_1414(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_263(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1916(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_264(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1917(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1415(int iParam0)
{
	MemCopy(&cVar0, {func_263(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1416(int iParam0)
{
	Var0 = { func_1415(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1918(iVar0));
		iVar0++;
	}
}

bool func_1418(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, struct<4> Param5)
{
	switch (Local_424[iParam1]->f_3)
	{
		case 0:
			if (bParam2)
			{
				Local_424[iParam1]->f_3 = 1;
			}
			else if (bParam3)
			{
				Local_424[iParam1]->f_3 = 3;
			}
			else if (bParam4)
			{
				Local_424[iParam1]->f_3 = 5;
			}
			else
			{
				Local_424[iParam1]->f_3 = 8;
			}
			break;
		case 1:
			iVar0 = func_1919(uParam0, func_437(func_1293(iParam1)), 1);
			if (does_entity_exist(iVar0))
			{
				Local_424[iParam1] = get_ped_index_from_entity_index(iVar0);
			}
			if (does_entity_exist(&(Local_424[iParam1])))
			{
				if (!func_433(iParam1) == -1)
				{
					Local_424[iParam1]->f_3 = 2;
				}
				else
				{
					Local_424[iParam1]->f_3 = 6;
				}
			}
			else if (bParam3)
			{
				Local_424[iParam1]->f_3 = 3;
			}
			else if (bParam4)
			{
				Local_424[iParam1]->f_3 = 5;
			}
			else
			{
				Local_424[iParam1]->f_3 = 8;
			}
			break;
		case 2:
			if (func_828(uParam0, func_433(iParam1), Local_424[iParam1], 0, 0, 0, 0, 0, 0, 1593315648, 1, 0, 1, 0))
			{
				Local_424[iParam1]->f_3 = 6;
			}
			break;
		case 3:
			if (func_433(iParam1) == -1)
			{
				if (bParam4)
				{
					Local_424[iParam1]->f_3 = 5;
				}
				else
				{
					Local_424[iParam1]->f_3 = 8;
				}
				return false;
			}
			if (func_828(uParam0, func_433(iParam1), Local_424[iParam1], 0, Param5, Param5.f_1, Param5.f_2, Param5.f_3, 1, 1593315648, 1, 0, 1, 0))
			{
				Local_424[iParam1]->f_3 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (func_164(0))
			{
				return false;
			}
			if (func_392(Param5))
			{
				Var1 = { get_entity_coords(Global_35, true, false) };
				Var1.f_3 = get_entity_heading(Global_35);
			}
			else
			{
				Var1 = { Param5 };
			}
			Local_424[iParam1] = func_1428(func_437(func_1293(iParam1)), Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			func_849(0);
			Local_424[iParam1]->f_3 = 6;
			break;
		case 6:
			if (!is_entity_dead(&(Local_424[iParam1])))
			{
				if (!_0xa0bc8faed8cfeb3c(&(Local_424[iParam1])))
				{
					return false;
				}
				remove_all_ped_weapons(&(Local_424[iParam1]), true, true);
				if (iParam1 == 2)
				{
					iLocal_1452[5] = func_866(&(Local_424[iParam1]), &(iLocal_1452[5]), -1, 2, 0, 1056964608, 1065353216, 0);
					iLocal_1452[6] = func_866(&(Local_424[iParam1]), &(iLocal_1452[6]), -1, 2, 0, 1056964608, 1065353216, 0);
					iLocal_2121 = get_ped_accuracy(&(Local_424[iParam1]));
					if (func_33(uParam0) == 0)
					{
						if (_does_anim_scene_exist(uParam0->f_7375.f_804))
						{
							set_anim_scene_entity(uParam0->f_7375.f_804, "Dutch", &(Local_424[iParam1]), 0);
						}
					}
				}
				else if (iParam1 == 4)
				{
					iLocal_1452[3] = func_866(&(Local_424[iParam1]), &(iLocal_1452[3]), -1, 2, 0, 1056964608, 1065353216, 0);
					iLocal_1452[4] = func_866(&(Local_424[iParam1]), &(iLocal_1452[4]), -1, 2, 0, 1056964608, 1065353216, 0);
					if (func_33(uParam0) == 0)
					{
						if (_does_anim_scene_exist(uParam0->f_7375.f_804))
						{
							set_anim_scene_entity(uParam0->f_7375.f_804, "MicahBell", &(Local_424[iParam1]), 0);
						}
					}
				}
				else if (iParam1 == 5)
				{
					if (!func_33(uParam0) == 0 && !func_33(uParam0) == 1)
					{
						iLocal_1452[2] = func_866(&(Local_424[iParam1]), &(iLocal_1452[2]), -1, 2, 0, 1056964608, 1065353216, 0);
					}
					if (func_33(uParam0) == 0)
					{
						if (_does_anim_scene_exist(uParam0->f_7375.f_804))
						{
							set_anim_scene_entity(uParam0->f_7375.f_804, "BillWilliamson", &(Local_424[iParam1]), 0);
						}
					}
				}
				else if (iParam1 == 3)
				{
					iLocal_1452[7] = func_866(&(Local_424[iParam1]), &(iLocal_1452[7]), -1, 2, 0, 1056964608, 1065353216, 0);
					iLocal_2122 = get_ped_accuracy(&(Local_424[iParam1]));
					_set_ped_body_component(&(Local_424[iParam1]), 41788943);
					_update_ped_variation(&(Local_424[iParam1]), false, true, true, true, false);
					func_1690(&(Local_424[iParam1]), 0);
					func_1921(uParam0, &(Local_424[iParam1]), 374347, 0, "ALLY_HERCULE", 67108863, 1, 3, 28);
				}
				else if (iParam1 == 6)
				{
					iLocal_1452[8] = func_866(&(Local_424[iParam1]), &(iLocal_1452[8]), -1, 2, 0, 1056964608, 1065353216, 0);
					_set_ped_body_component(&(Local_424[iParam1]), 41788943);
					_update_ped_variation(&(Local_424[iParam1]), false, true, true, true, false);
					func_1690(&(Local_424[iParam1]), 0);
					set_entity_invincible(&(Local_424[iParam1]), true);
				}
				set_ped_config_flag(&(Local_424[iParam1]), 229, true);
				set_blocking_of_non_temporary_events(&(Local_424[iParam1]), true);
				if (iParam1 == 3 || iParam1 == 6)
				{
					func_1252(uParam0, iParam1, 1);
				}
				if (func_931(uParam0, &(Local_424[iParam1]), &iVar5))
				{
					func_1922(uParam0->f_5423[iVar5], 256);
				}
				func_1221(iParam1, 1);
				Local_424[iParam1]->f_3 = 7;
			}
			break;
		case 7:
			return true;
		case 8:
			return false;
	}
	return false;
}

void func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1923(iParam0);
			break;
		case 1:
			func_1924(iParam0);
			break;
		case 2:
			func_1925(iParam0);
			break;
		case 3:
			func_1926(iParam0);
			break;
		case 4:
			func_1927(iParam0);
			break;
		case 5:
			func_1928(iParam0);
			break;
		case 6:
			func_1929(iParam0);
			break;
		case 7:
			func_1930(iParam0);
			break;
			break;
		default:
			break;
	}
}

char* func_1420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@LEADOUT@INT@leadout";
			}
			else if (iParam1 == 1)
			{
				return "pl_leadout";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@IG@IG2_Bill_Sees_Incoming_Men@IG2_Bill_Sees_Incoming_Men";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Bill_Sees_Incoming_Men";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig3_cannon@ig3_cannon_p1_hercule";
			}
			else if (iParam1 == 1)
			{
				return "pbl_hercule_push_intro";
			}
			else if (iParam1 == 2)
			{
				return "pbl_Both_Push_Cannon";
			}
			else if (iParam1 == 3)
			{
				return "pbl_flinch_left";
			}
			else if (iParam1 == 4)
			{
				return "pbl_flinch_right";
			}
			else if (iParam1 == 5)
			{
				return "pbl_hercule_callover";
			}
			else if (iParam1 == 6)
			{
				return "pbl_push_idle_v01";
			}
			else if (iParam1 == 7)
			{
				return "pbl_push_idle_v02";
			}
			else if (iParam1 == 8)
			{
				return "pbl_push_idle_v03";
			}
			else if (iParam1 == 9)
			{
				return "pbl_push_idle_v04";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig3_cannon@ig3_cannon_p2_frenchman";
			}
			else if (iParam1 == 1)
			{
				return "pbl_idle_v01";
			}
			else if (iParam1 == 2)
			{
				return "pbl_idle_v02";
			}
			else if (iParam1 == 3)
			{
				return "pbl_idle_v03";
			}
			else if (iParam1 == 4)
			{
				return "pbl_Get_This_Working_Properly_LEFT";
			}
			else if (iParam1 == 5)
			{
				return "pbl_Get_This_Working_Properly_RIGHT";
			}
			else if (iParam1 == 6)
			{
				return "pbl_Flinch_01";
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig4_dutch_holds_off_at_door@ig4_dutch_holds_off_at_door";
			}
			else if (iParam1 == 1)
			{
				return "pbl_dutch_holds_off_at_door";
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig_hercule_react_to_destruction@ig_hercule_react_to_destruction";
			}
			else if (iParam1 == 1)
			{
				return "pbl_loopWait";
			}
			else if (iParam1 == 2)
			{
				return "pbl_react";
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return "script@story@smg2@leadin@mcs_4@leadin_playlist";
			}
			else if (iParam1 == 1)
			{
				return "pl_gangAtWall";
			}
			else if (iParam1 == 2)
			{
				return "pl_leadin_Wait";
			}
			else if (iParam1 == 3)
			{
				return "pl_leadin_NoWait";
			}
			else if (iParam1 == 4)
			{
				return "pl_leadin_after_nowait";
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
	}
	return "";
}

void func_1421(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_90))
	{
		Local_14.f_90 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_91[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_91[0] = create_object(-1816535547, 1003.448f, -6750.794f, 62.108f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[0]), 0f, 0f, 3.224f, 2, true);
		freeze_entity_position(&(Local_14.f_91[0]), bParam1);
	}
	func_1931(&(Local_14.f_91[0]), Local_14);
	func_1931(&(Local_14.f_91[0]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_91[1] = create_object(-1816535547, 1003.812f, -6752.185f, 62.1264f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[1]), 0f, 0f, 36.724f, 2, true);
		freeze_entity_position(&(Local_14.f_91[1]), bParam1);
	}
	func_1931(&(Local_14.f_91[1]), Local_14);
	func_1931(&(Local_14.f_91[1]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_91[2] = create_object(-1816535547, 1004.617f, -6753.162f, 62.1264f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[2]), 0f, 0f, 13.724f, 2, true);
		freeze_entity_position(&(Local_14.f_91[2]), bParam1);
	}
	func_1931(&(Local_14.f_91[2]), Local_14);
	func_1931(&(Local_14.f_91[2]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_91[3] = create_object(-1816535547, 1002.309f, -6747.31f, 62.1264f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[3]), 0f, 0f, 36.2246f, 2, true);
		freeze_entity_position(&(Local_14.f_91[3]), bParam1);
	}
	func_1931(&(Local_14.f_91[3]), Local_14);
	func_1931(&(Local_14.f_91[3]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_91[4] = create_object(-1816535547, 1004.622f, -6757.693f, 62.1065f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[4]), 0f, 0f, -98.7563f, 2, true);
		freeze_entity_position(&(Local_14.f_91[4]), bParam1);
	}
	func_1931(&(Local_14.f_91[4]), Local_14);
	func_1931(&(Local_14.f_91[4]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_91[5] = create_object(-1816535547, 1007.181f, -6746.436f, 60.3264f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[5]), 0f, 0f, 25.2243f, 2, true);
		freeze_entity_position(&(Local_14.f_91[5]), bParam1);
	}
	func_1931(&(Local_14.f_91[5]), Local_14);
	func_1931(&(Local_14.f_91[5]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_91[6] = create_object(-1816535547, 1002.735f, -6740.326f, 57.3157f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[6]), 0f, 0f, 117.224f, 2, true);
		freeze_entity_position(&(Local_14.f_91[6]), bParam1);
	}
	func_1931(&(Local_14.f_91[6]), Local_14);
	func_1931(&(Local_14.f_91[6]), Local_14.f_90);
	if (!does_entity_exist(&(Local_14.f_91[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_91[7] = create_object(-1816535547, 1005.908f, -6754.802f, 62.0777f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[7]), 0f, 0f, -18.7755f, 2, true);
		freeze_entity_position(&(Local_14.f_91[7]), bParam1);
	}
	func_1931(&(Local_14.f_91[7]), Local_14);
	func_1931(&(Local_14.f_91[7]), Local_14.f_90);
}

void func_1422(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_100))
	{
		Local_14.f_100 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_101[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_101[0] = create_object(-1816535547, 992.2631f, -6740.058f, 62.1353f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[0]), 0f, 0f, -35.7954f, 2, true);
		freeze_entity_position(&(Local_14.f_101[0]), bParam1);
	}
	func_1931(&(Local_14.f_101[0]), Local_14);
	func_1931(&(Local_14.f_101[0]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_101[1] = create_object(-1816535547, 991.5002f, -6740.151f, 62.1378f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[1]), 0f, 0f, 140.2235f, 2, true);
		freeze_entity_position(&(Local_14.f_101[1]), bParam1);
	}
	func_1931(&(Local_14.f_101[1]), Local_14);
	func_1931(&(Local_14.f_101[1]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_101[2] = create_object(-1816535547, 988.436f, -6742.339f, 62.1348f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[2]), 0f, 0f, 125.2238f, 2, true);
		freeze_entity_position(&(Local_14.f_101[2]), bParam1);
	}
	func_1931(&(Local_14.f_101[2]), Local_14);
	func_1931(&(Local_14.f_101[2]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_101[3] = create_object(-1816535547, 989.223f, -6741.794f, 62.1374f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[3]), 0f, 0f, 129.2239f, 2, true);
		freeze_entity_position(&(Local_14.f_101[3]), bParam1);
	}
	func_1931(&(Local_14.f_101[3]), Local_14);
	func_1931(&(Local_14.f_101[3]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_101[4] = create_object(-1816535547, 992.7148f, -6739.218f, 62.1411f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[4]), 0f, 0f, 163.2036f, 2, true);
		freeze_entity_position(&(Local_14.f_101[4]), bParam1);
	}
	func_1931(&(Local_14.f_101[4]), Local_14);
	func_1931(&(Local_14.f_101[4]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_101[5] = create_object(-1816535547, 991.9713f, -6739.394f, 62.1362f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[5]), 0f, 0f, 158.4994f, 2, true);
		freeze_entity_position(&(Local_14.f_101[5]), bParam1);
	}
	func_1931(&(Local_14.f_101[5]), Local_14);
	func_1931(&(Local_14.f_101[5]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_101[6] = create_object(-1816535547, 992.0002f, -6739.835f, 62.3361f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[6]), 0f, 0f, 133.2234f, 2, true);
		freeze_entity_position(&(Local_14.f_101[6]), bParam1);
	}
	func_1931(&(Local_14.f_101[6]), Local_14);
	func_1931(&(Local_14.f_101[6]), Local_14.f_100);
	if (!does_entity_exist(&(Local_14.f_101[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_101[7] = create_object(-1816535547, 988.8374f, -6742.037f, 62.3379f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_101[7]), 0f, 0f, 117.2235f, 2, true);
		freeze_entity_position(&(Local_14.f_101[7]), bParam1);
	}
	func_1931(&(Local_14.f_101[7]), Local_14);
	func_1931(&(Local_14.f_101[7]), Local_14.f_100);
}

Vector3 func_1423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return *Local_1700.f_370[0];
		case 2:
			return *Local_1700.f_370[1];
		case 3:
			return *Local_1700.f_370[2];
		case 4:
			return *Local_1700.f_370[3];
		case 5:
		case 25:
			return *Local_1700.f_370[4];
	}
	return 0f, 0f, 0f;
}

int func_1424(int iParam0, int iParam1)
{
	return (iParam1 - iParam0) + 1;
}

int func_1425(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0]->f_2 == 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1426(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			*iParam1 = 603720014;
			break;
		case 11:
			*iParam1 = 1255364348;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1427(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return true;
		case 8:
			return 2;
	}
	return false;
}

int func_1428(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1932(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1429(int iParam0, int iParam1)
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

void func_1430(var uParam0)
{
	func_178(15);
	switch (func_33(uParam0))
	{
		case 0:
			set_entity_visible(&(Local_424[6]), true);
			set_entity_collision(&(Local_424[6]), true, false);
			freeze_entity_position(&(Local_424[6]), false);
			stop_ped_speaking(&(Local_424[6]), false);
			break;
		case 2:
			if (func_384(uParam0) == 0)
			{
				func_1933();
			}
			func_1934(0, 1);
			func_174();
			func_854(uParam0);
			clear_ped_tasks(&(Local_424[2]), 1, 0);
			clear_ped_secondary_task(&(Local_424[2]));
			func_1935(iVar2101, func_470(8, 1), 2, 1073741824);
			break;
		case 4:
			set_clock_time(18, 0, 0);
			func_435(uParam0, 27, 41);
			func_435(uParam0, 42, 62);
			vVar1 = { func_472(7, 3) };
			if (get_water_height(vVar1, &uVar0))
			{
				vVar1.f_2 = uVar0;
			}
			_set_entity_coords_and_heading(Local_1700.f_1, vVar1, func_1255(7, 3), true, false, true);
			_0x9851de7aec10b4e1(func_472(4, 0), 200f, 0, 0);
			break;
		case 5:
			set_clock_time(19, 0, 0);
			pause_clock(true, 0);
			func_849(12);
			remove_all_ped_weapons(&(Local_424[3]), true, true);
			if (does_blip_exist(vLocal_2104.y))
			{
				remove_blip(&(vLocal_2104.f_1));
			}
			func_1302();
			vVar4 = { 887.6f, -6720.7f, 40.9f };
			get_water_height(get_entity_coords(Local_1700.f_1, true, false), &(vVar4.f_2));
			_set_entity_coords_and_heading(Local_1700.f_1, vVar4, -21.5f, true, false, true);
			freeze_entity_position(Local_1700.f_1, true);
			break;
		case 25:
			if (does_cam_exist(&(iLocal_1494[2])))
			{
				func_441(2);
			}
			set_clock_time(19, 0, 0);
			pause_clock(true, 0);
			func_849(12);
			if (is_ped_in_any_vehicle(Global_35, false))
			{
				_0xe0b61ed8bb37712f(Global_35);
			}
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
			_hide_ped_weapons(Global_35, 2, true);
			break;
		default:
			break;
	}
}

int func_1431(var uParam0)
{
	iVar0 = 4;
	while (iVar0 <= 8)
	{
		if (!does_entity_exist(&(iLocal_1233[iVar0])))
		{
			if (!func_1937(uParam0, func_1936(iVar0, 0), iLocal_1233[iVar0]))
			{
				func_858(4, 0);
			}
		}
		iVar0++;
	}
	if (func_1938(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		if (Local_2328[0]->f_1 == 8)
		{
			set_anim_scene_entity(&(Local_2328[0]), "p_barstool01x", &(iLocal_1233[4]), 0);
			set_anim_scene_entity(&(Local_2328[0]), "p_chair02x", &(iLocal_1233[5]), 0);
			set_anim_scene_entity(&(Local_2328[0]), "p_chair02x^1", &(iLocal_1233[6]), 0);
			set_anim_scene_entity(&(Local_2328[0]), "p_chair02x^2", &(iLocal_1233[7]), 0);
			set_anim_scene_entity(&(Local_2328[0]), "p_chair02x^3", &(iLocal_1233[8]), 0);
		}
		if (func_384(uParam0) == 1)
		{
			_set_entity_coords_and_heading(Global_35, func_472(0, 0), func_1255(0, 0), true, false, true);
			_0x9587913b9e772d29(Global_35, 0);
		}
		func_1199(0, 1);
	}
	if (func_1938(uParam0, &(iLocal_1233[4]), "p_barstool01x", 0, 1, 1))
	{
		set_object_as_no_longer_needed(iLocal_1233[4]);
		func_436(func_1234(4));
	}
	if (func_1938(uParam0, &(iLocal_1233[5]), "p_chair02x", 0, 1, 1))
	{
		set_object_as_no_longer_needed(iLocal_1233[5]);
		func_436(func_1234(5));
	}
	if (func_1938(uParam0, &(iLocal_1233[6]), "p_chair02x^1", 0, 1, 1))
	{
		set_object_as_no_longer_needed(iLocal_1233[6]);
		func_436(func_1234(6));
	}
	if (func_1938(uParam0, &(iLocal_1233[7]), "p_chair02x^2", 0, 1, 1))
	{
		set_object_as_no_longer_needed(iLocal_1233[7]);
		func_436(func_1234(7));
	}
	if (func_1938(uParam0, &(iLocal_1233[8]), "p_chair02x^3", 0, 1, 1))
	{
		set_object_as_no_longer_needed(iLocal_1233[8]);
		func_436(func_1234(8));
	}
	bVar1 = false;
	if (bVar1)
	{
		func_853(0);
	}
	return 1;
}

int func_1432(var uParam0)
{
	if (!func_164(39))
	{
		if (func_1909(&(uParam0->f_7375)) >= 10113)
		{
			func_1200(986.9f, -6752.3f, 62.1f, -1082130432);
			func_849(39);
		}
	}
	if (!func_164(44))
	{
		if (func_1938(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			simulate_player_input_gait(player_id(), 2f, 2000, -100f, false, false);
			func_1720(uParam0, &(Local_424[2]), -2045797884, 422991367, 1, 1);
			_blip_set_modifier(Local_424[3]->f_1, -401963276);
			func_849(44);
		}
	}
	if (func_1938(uParam0, &(Local_424[2]), "Dutch", 0, 1, 1))
	{
		task_follow_waypoint_recording(&(Local_424[2]), func_438(24), 0, 4194336, -1, 0, 0, -1);
		_0x2208438012482a1a(&(Local_424[2]), true, false);
		force_ped_motion_state(&(Local_424[2]), -530524, false, 0, false);
		func_1221(2, 26);
	}
	if (func_1938(uParam0, &(Local_424[3]), "Hercule", 0, 1, 1))
	{
		set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), true, 0, false, false);
		func_1695(&(Local_424[3]), 44, 1090519040, -1056964608, -1, 24, 0);
		task_follow_waypoint_recording(&(Local_424[3]), func_438(24), 0, 0, -1, 0, 0, -1);
		_0x2208438012482a1a(&(Local_424[3]), true, false);
		force_ped_motion_state(&(Local_424[3]), -530524, false, 0, false);
		func_1221(3, 26);
	}
	if (func_1938(uParam0, &(Local_424[27]), "S_M_M_FussarHenchman_01", 0, 1, 1))
	{
		iVar0 = 27;
		while (iVar0 <= 41)
		{
			func_1935(&(Local_424[iVar0]), func_217(iVar0, 1, 2), 2, 1073741824);
			iVar0++;
		}
	}
	return 1;
}

int func_1433(var uParam0)
{
	func_1289(uParam0);
	if (func_1938(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		simulate_player_input_gait(player_id(), 2f, 1500, 0f, true, false);
	}
	if (func_1938(uParam0, &(Local_424[3]), "Hercule", 0, 1, 1))
	{
		_0x67e21acc5c0c970c(&(Local_424[3]), 10, true);
		set_current_ped_weapon(&(Local_424[3]), &(iLocal_1452[7]), true, 0, false, false);
		task_follow_waypoint_recording(&(Local_424[3]), func_438(32), 0, 0, -1, 0, 0, -1);
	}
	if (func_1938(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 1, 1))
	{
		_set_entity_coords_and_heading(Local_1700.f_1, func_472(7, 3), func_1255(7, 3), true, false, true);
	}
	return 1;
}

int func_1434(var uParam0)
{
	_disable_first_person_cam_this_frame();
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1296(uParam0);
	if (func_1938(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		if (!is_entity_dead(iVar2101))
		{
			set_vehicle_is_considered_by_player(iVar2101, true);
			if (!is_ped_in_vehicle(Global_35, iVar2101, false))
			{
				set_ped_into_vehicle(Global_35, iVar2101, -1);
			}
			set_current_ped_vehicle_weapon(Global_35, -1829236809);
		}
	}
	if (func_1938(uParam0, &(Local_424[5]), "BillWilliamson", 0, 1, 1))
	{
		func_1939(5);
		func_1221(5, 9);
	}
	if (func_1938(uParam0, &(Local_424[6]), "CS_Frenchman", 0, 1, 1))
	{
		func_1939(6);
		func_1221(6, 9);
	}
	if (func_1938(uParam0, &(Local_424[3]), "Hercule", 0, 1, 1))
	{
		func_1939(3);
		func_1221(3, 9);
		func_1940();
	}
	if (func_1938(uParam0, &(Local_424[4]), "MicahBell", 0, 1, 1))
	{
		func_1939(4);
		func_1221(4, 9);
	}
	if (func_1907(&(uParam0->f_7375), 1))
	{
		func_1941(get_entity_coords(Local_1700.f_1, true, false));
	}
	if (!get_entity_collision_disabled(&(Local_14.f_101[0])))
	{
		if (func_1938(uParam0, &(Local_14.f_101[0]), "p_crateconf01x", 0, 1, 1))
		{
			if (_does_anim_scene_exist(uParam0->f_7375.f_804))
			{
				if (_0x6f1f0b17109309da(uParam0->f_7375.f_804, "p_crateconf01x"))
				{
					remove_anim_scene_entity(uParam0->f_7375.f_804, "p_crateconf01x", &(Local_14.f_101[0]));
				}
			}
			delete_object(Local_14.f_101[0]);
		}
	}
	return 1;
}

int func_1435(var uParam0)
{
	_disable_first_person_cam_this_frame_2();
	func_853(7);
	if (func_1938(uParam0, Global_35, 0, 0, 1, 1))
	{
		set_anim_scene_entity(&(Local_2328[7]), "Warship", Local_1700.f_1, 0);
		func_1199(7, 1);
	}
	return 1;
}

bool func_1436(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1437(int iParam0)
{
	switch (iParam0)
	{
		case -1098045850:
		case 392538360:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1438(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1439(float fParam0)
{
	func_1942(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1440()
{
	Global_1357516 = 0;
}

void func_1441(var uParam0)
{
	if ((iVar2108 == 0 && iVar2110 == 0) && iVar2109 == 0)
	{
		return;
	}
	if (iVar2108 != 0)
	{
		Var0 = { func_1685(iVar2108) };
		if (func_1943(uParam0, Var0, Var0.f_1, 0, 0))
		{
			iLocal_2111 = 0;
		}
	}
	if (iVar2110 != 0)
	{
		Var2 = { func_1685(iVar2110) };
		if (func_1943(uParam0, Var2, Var2.f_1, 0, 0))
		{
			iLocal_2113 = 0;
		}
	}
	if (iVar2109 != 0)
	{
		Var4 = { func_1685(iVar2109) };
		if (func_1943(uParam0, Var4, Var4.f_1, 0, 0))
		{
			iLocal_2112 = 0;
		}
	}
}

void func_1442(var uParam0)
{
	if (func_164(118))
	{
		return;
	}
	if (func_33(uParam0) == 25)
	{
		return;
	}
	if (is_entity_dead(Local_1700.f_1) || is_entity_dead(&(Local_424[12])))
	{
		return;
	}
	if (!func_164(2))
	{
		if ((((waypoint_recording_get_coord(func_438(23), 0, Local_1700.f_370[0]) && waypoint_recording_get_coord(func_438(23), 1, Local_1700.f_370[1])) && waypoint_recording_get_coord(func_438(23), 2, Local_1700.f_370[2])) && waypoint_recording_get_coord(func_438(23), 3, Local_1700.f_370[3])) && waypoint_recording_get_coord(func_438(23), 4, Local_1700.f_370[4]))
		{
			Local_1700.f_367 = (get_waypoint_distance_along_route(func_438(23), 4) - get_waypoint_distance_along_route(func_438(23), 0));
			func_849(2);
		}
		else
		{
			return;
		}
	}
	Local_1700.f_367.f_1 = func_1181(Local_1700.f_1, func_1423(5), 1);
	Local_1700.f_402 = (Local_1700.f_367 - Local_1700.f_367.f_1);
	Local_1700.f_367.f_2 = ((Local_1700.f_402 / Local_1700.f_367) * 100f);
	switch (func_33(uParam0))
	{
		case 0:
			Local_1700.f_399 = Local_1700.f_393;
			break;
		case 1:
			iVar0 = func_1424(13, 26);
			iVar1 = Local_1700.f_386;
			Local_1700.f_389 = ((to_float(iVar1) / to_float(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_393 + ((Local_1700.f_394 - Local_1700.f_393) * (Local_1700.f_389 / 100f)));
			break;
		case 2:
			iVar0 = func_1424(27, 41);
			iVar1 = Local_1700.f_387;
			Local_1700.f_390 = ((to_float(iVar1) / to_float(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_394 + ((Local_1700.f_395 - Local_1700.f_394) * (Local_1700.f_390 / 100f)));
			break;
		case 3:
			iVar0 = func_1424(42, 62);
			iVar1 = func_1774(42, 62, 18);
			Local_1700.f_391 = ((to_float(iVar1) / to_float(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_395 + ((Local_1700.f_396 - Local_1700.f_395) * (Local_1700.f_391 / 100f)));
			break;
		case 4:
			if (!is_entity_dead(Global_35) && func_1233(32))
			{
				if (waypoint_recording_get_closest_waypoint(func_438(32), get_entity_coords(Global_35, true, false), &iVar2) && waypoint_recording_get_num_points(func_438(32), &iVar3))
				{
					Local_1700.f_392 = ((to_float(iVar2) / to_float(iVar3)) * 100f);
					if (func_1180(30, 0))
					{
					}
				}
			}
			break;
	}
	Local_1700.f_398 = ((Local_1700.f_399 - Local_1700.f_367.f_2) * -1f);
	Local_1700.f_401 = ((Local_1700.f_398 * -1f) / 2f);
	Local_1700.f_401 = func_1607(Local_1700.f_401, 0.25f, 5f);
	if (Local_1700.f_398 > 5f)
	{
		Local_1700.f_401 = 0f;
	}
	Local_1700.f_400 = (1f * Local_1700.f_401);
	switch (iVar1697)
	{
		case 2:
			if (!is_ped_in_vehicle(&(Local_424[12]), Local_1700.f_1, false))
			{
				set_ped_into_vehicle(&(Local_424[12]), Local_1700.f_1, -1);
			}
			set_boat_anchor(Local_1700.f_1, false);
			set_ped_config_flag(&(Local_424[12]), 168, false);
			set_ped_config_flag(&(Local_424[12]), 113, true);
			task_vehicle_follow_waypoint_recording(&(Local_424[12]), Local_1700.f_1, func_438(23), 0, 0, 6680, -1, -1082130432, 0, 1073741824, 0);
			Local_1700 = 3;
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_vehicle(Local_1700.f_1, 0))
			{
				vehicle_waypoint_playback_override_speed(Local_1700.f_1, Local_1700.f_400);
				set_drive_task_cruise_speed(&(Local_424[12]), Local_1700.f_400);
			}
			break;
		case 0:
			if (!is_ped_in_vehicle(&(Local_424[12]), Local_1700.f_1, false))
			{
				set_ped_into_vehicle(&(Local_424[12]), Local_1700.f_1, -1);
			}
			if (is_waypoint_playback_going_on_for_vehicle(Local_1700.f_1, 0))
			{
				vehicle_waypoint_playback_pause(Local_1700.f_1);
			}
			set_entity_load_collision_flag(Local_1700.f_1, 1);
			set_entity_lod_dist(Local_1700.f_1, 500);
			set_boat_anchor(Local_1700.f_1, true);
			Local_1700 = 1;
			break;
		case 1:
			break;
	}
	iVar4 = 0;
	while (iVar4 < Local_1700.f_3)
	{
		func_1944(iVar4, uParam0);
		iVar4++;
	}
}

void func_1443(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_211(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_1945(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1357(uParam0->f_8269[iVar19]);
				}
				else if (func_1946(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_221(uParam0->f_8269[iVar19]);
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
			if (func_211(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1947(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1948(uParam0->f_8269.f_641[iVar19]);
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
			if (func_211(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1947(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_212(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_211(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1949(&(uParam0->f_8269));
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
			if (func_211(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1945(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1950(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_465(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1946(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1950(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_465(uParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1444(var uParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1951(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1445()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1864(0);
	func_1952();
}

void func_1446(var uParam0, int iParam1, int iParam2)
{
	func_1953(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1447(var uParam0)
{
	if (func_485(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_485(uParam0, 1024);
	if (func_485(uParam0, 128) || bVar0)
	{
		if (func_485(uParam0, 4096))
		{
			if (!func_485(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1922(uParam0, 2048);
				return;
			}
		}
		else if (func_485(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1713(uParam0, 2048);
		}
		if (func_485(uParam0, 512))
		{
			if (func_486(uParam0->f_10))
			{
				if (func_831(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1954(uParam0->f_10))
					{
						func_491(uParam0->f_10, 1);
						func_1955(uParam0->f_10, 0);
					}
				}
				else if ((func_1954(uParam0->f_10) && !bVar0) && !func_485(uParam0, 16384))
				{
					func_491(uParam0->f_10, 0);
					func_1955(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_831(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_831(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_485(uParam0, 512))
	{
		if (func_486(uParam0->f_10))
		{
			if (func_1954(uParam0->f_10))
			{
				func_491(uParam0->f_10, 0);
				func_1955(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1448(int iParam0)
{
	return (iParam0 < func_393() && iParam0 >= 0);
}

int func_1449(int iParam0)
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

bool func_1450(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1451(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1448(iVar0))
	{
		return false;
	}
	iVar1 = func_1449(iParam2);
	if (!func_1450(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1452(struct<2> Param0, int iParam2)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1453(var uParam0)
{
	func_1956(uParam0);
	if (func_273(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_273(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_839(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_1957(uParam0);
	func_1173(uParam0, 67108864);
	func_1173(uParam0, 8192);
	func_841(uParam0, 4);
	func_841(uParam0, 512);
	func_841(uParam0, 65536);
	func_841(uParam0, 1024);
	func_841(uParam0, 262144);
	func_841(uParam0, 16777216);
	func_841(uParam0, 64);
	func_259(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_1958(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_259(uParam0, 4194304);
	func_259(uParam0, 8388608);
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
	func_524(&(uParam0->f_13106));
	func_214(&(uParam0->f_13112));
	func_1959(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_229(1);
	}
	if (func_877(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_877(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_877(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1960(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_223(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_1961(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_1962(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_1963(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1454(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1455(var uParam0)
{
	func_1902(uParam0);
}

void func_1456(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1351(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1457(var uParam0)
{
	func_1964(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1458(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1459(var uParam0)
{
	return true;
}

void func_1460(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1461(var uParam0, int iParam1)
{
	iVar0 = func_1965(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1462(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_1966(uParam0, uParam1))
	{
		return 0;
	}
	if (func_486(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1447(uParam1);
	func_1967(uParam1);
	if (!bParam2)
	{
		func_1968(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_1969(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_1970(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_1971(uParam0, uParam1);
	func_1972(uParam1);
	return 0;
}

bool func_1463(var uParam0)
{
	return true;
}

int func_1464(int iParam0)
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
						*iParam0 = func_1973(vVar0.z);
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

void func_1465(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	func_1268(uParam0, &uParam1, "", bParam9, bParam10);
}

void func_1466(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_794((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_1976((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_794((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_1974(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_1975(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_1977((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_794((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_1978((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_794((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_1979((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_794(uParam4->f_1, iParam12))
	{
		func_1974(&(uParam4->f_1), iParam12);
		if (func_1975(&(uParam4->f_1), iParam13))
		{
			func_1980(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_794((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_1974(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_1975(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_1981((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_794((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_1974(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_1975(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_1982((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_794((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_1974(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_1975(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_1983((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_794((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_1984((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_794((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_1985((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_794((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_1974(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_1975(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_1986((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_794((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_1974(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_1975(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_1987((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1467(var uParam0)
{
	iVar0 = func_1988(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1468(bool bParam0, bool bParam1)
{
	if (func_1989(255) == 4)
	{
		return;
	}
	if (func_392(get_entity_coords(get_player_ped(player_id()), false, false)))
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
			func_1990(0, 0, 0, 1);
		}
		func_285(0);
		func_1991(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_1992(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_1993(Global_1109400->f_389, 42);
	func_1994(Global_1109400->f_428, 42);
}

bool func_1469(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1470(bool bParam0, bool bParam1, bool bParam2)
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

var func_1471(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1472(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1995(sParam1));
}

var func_1473(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1474(int iParam0)
{
	if (func_1996(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_1475(int iParam0)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (func_1997(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_947(iParam0);
	func_1474(iVar0);
	func_1508(iParam0, 8192, 1);
}

void func_1476(int iParam0)
{
	if (func_1996(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_1477(int iParam0)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (func_1997(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_947(iParam0);
	func_1476(iVar0);
	func_1508(iParam0, 8192, 0);
}

void func_1478(int iParam0)
{
	if (func_1996(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_1479(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_487(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_1480(int iParam0)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (func_1997(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_947(iParam0);
	func_1478(iVar0);
	func_1508(iParam0, 16384, 1);
}

void func_1481(int iParam0)
{
	if (func_1996(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_1482(int iParam0)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (func_1997(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_947(iParam0);
	func_1481(iVar0);
	func_1508(iParam0, 16384, 0);
}

void func_1483(int iParam0, int iParam1)
{
	func_1517(&(Local_424[iParam0]->f_4), iParam1);
}

int func_1484(int iParam0)
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

int func_1485(int iParam0)
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

void func_1486(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1487(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1998(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1488(int iParam0)
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

float func_1489(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 82.9502f;
				case 1:
					return 359.6805f;
				case 2:
					return 293.4573f;
				case 3:
					return 61.234f;
				case 4:
					return 336.998f;
				case 5:
					return 136.516f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 124f;
				case 1:
					return 119.6804f;
				case 2:
					return 129.4574f;
				case 3:
					return 119.2339f;
				case 4:
					return 114.9979f;
				case 5:
					return 122.516f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 254.6873f;
				case 1:
					return 265.6806f;
				case 2:
					return 105.4573f;
				case 3:
					return 87.234f;
				case 4:
					return 248.9981f;
				case 5:
					return 104.5159f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 172.6863f;
				case 1:
					return 161.6801f;
				case 2:
					return 111.4573f;
				case 3:
					return 111.2339f;
				case 4:
					return 162.9975f;
				case 5:
					return 78.5159f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 319.5178f;
				case 1:
					return 110.3637f;
				case 2:
					return 109.4573f;
				case 3:
					return 101.234f;
				case 4:
					return 314.8305f;
				case 5:
					return 78.5159f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 54.6872f;
				case 1:
					return 139.6803f;
				case 2:
					return 113.4573f;
				case 3:
					return 115.2339f;
				case 4:
					return 50.2205f;
				case 5:
					return 86.5159f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 142.6873f;
				case 1:
					return 325.6805f;
				case 2:
					return 13.4574f;
				case 3:
					return 45.234f;
				case 4:
					return 218.9983f;
				case 5:
					return 98.5159f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 334.1541f;
				case 1:
					return 330.1022f;
				case 2:
					return 318.0379f;
				case 3:
					return 305.9057f;
				case 4:
					return 322.0194f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 88.3755f;
				case 1:
					return 82.1039f;
				case 2:
					return 77.0304f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 251.3266f;
				case 1:
					return 279.2639f;
				case 2:
					return 244.6508f;
				case 3:
					return 124.0942f;
				case 4:
					return 103.5374f;
				case 5:
					return 279.8314f;
				case 6:
					return 164.5602f;
				case 7:
					return 331.5936f;
				case 8:
					return 141.1564f;
			}
			break;
	}
	return 0f;
}

Vector3 func_1490(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 979.9342f, -6797.02f, 49.2271f;
				case 1:
					return 978.0778f, -6794.162f, 49.2271f;
				case 2:
					return 979.1184f, -6798.959f, 49.2271f;
				case 3:
					return 977.6172f, -6795.315f, 49.2271f;
				case 4:
					return 978.3862f, -6801.007f, 49.2271f;
				case 5:
					return 980.8785f, -6795.274f, 49.2271f;
				case 6:
					return 953.9827f, -6795.396f, 40.96f;
				case 7:
					return 965.7714f, -6793.176f, 41.71f;
				case 8:
					return 958.0261f, -6788.554f, 41.21f;
				case 9:
					return 959.0781f, -6784.94f, 41.21f;
				case 10:
					return 962.9297f, -6791.29f, 41.46f;
				case 11:
					return 960.134f, -6794.783f, 41.21f;
				case 12:
					return 990.1394f, -6771.525f, 49.8f;
				case 13:
					return 987.1892f, -6768.902f, 50.05f;
				case 14:
					return 987.6424f, -6776.18f, 49.55f;
				case 15:
					return 982.8115f, -6781.656f, 49.3f;
				case 16:
					return 986.1832f, -6780.537f, 49.8f;
				case 17:
					return 984.7793f, -6780.304f, 49.8f;
				case 18:
					return 967.0449f, -6765.259f, 42.4f;
				case 19:
					return 972.6996f, -6771.863f, 41.9f;
				case 20:
					return 960.6893f, -6767.938f, 41.4f;
				case 21:
					return 960.5604f, -6774.538f, 41.15f;
				case 22:
					return 963.3939f, -6770.552f, 41.4f;
				case 23:
					return 971.4908f, -6776.846f, 41.65f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 968.3439f, -6767.657f, 42.6124f;
				case 1:
					return 968.1219f, -6770.484f, 42.1124f;
				case 2:
					return 966.7755f, -6770.073f, 41.8624f;
				case 3:
					return 962.8395f, -6771.678f, 41.3624f;
				case 4:
					return 961.2583f, -6774.834f, 41.3624f;
				case 5:
					return 957.0259f, -6775.328f, 41.1124f;
				case 6:
					return 952.4851f, -6776.123f, 41.6124f;
				case 7:
					return 954.2078f, -6772.358f, 41.3624f;
				case 8:
					return 953.0194f, -6771.213f, 41.1124f;
				case 9:
					return 951.3905f, -6770.249f, 41.1124f;
				case 10:
					return 943.9454f, -6763.614f, 40.6124f;
				case 11:
					return 942.2866f, -6762.99f, 40.6124f;
				case 12:
					return 1000.033f, -6721.517f, 57.3624f;
				case 13:
					return 997.9953f, -6717.712f, 57.3624f;
				case 14:
					return 1000.033f, -6721.517f, 57.3624f;
				case 15:
					return 992.138f, -6721.535f, 54.3624f;
				case 16:
					return 989.3882f, -6726.119f, 54.1124f;
				case 17:
					return 987.9489f, -6722.666f, 54.3624f;
				case 18:
					return 978.8874f, -6733.195f, 49.3624f;
				case 19:
					return 980.4993f, -6735.761f, 49.1124f;
				case 20:
					return 977.7455f, -6747.26f, 46.3624f;
				case 21:
					return 977.4634f, -6747.317f, 46.1124f;
				case 22:
					return 977.4072f, -6756.425f, 45.6124f;
				case 23:
					return 979.8043f, -6755.226f, 45.6124f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 930.6068f, -6834.091f, 41.3624f;
				case 1:
					return 928.4884f, -6838.558f, 41.3624f;
				case 2:
					return 942.1075f, -6917.005f, 41.3624f;
				case 3:
					return 957.0643f, -6904.512f, 42.8624f;
				case 4:
					return 957.0643f, -6904.512f, 42.8624f;
				case 5:
					return 957.0643f, -6904.512f, 42.8624f;
				case 6:
					return 957.0643f, -6904.512f, 42.8624f;
				case 7:
					return 957.0643f, -6904.512f, 42.8624f;
				case 8:
					return 957.0643f, -6904.512f, 42.8624f;
				case 9:
					return 957.0643f, -6904.512f, 42.8624f;
				case 10:
					return 957.0643f, -6904.512f, 42.8624f;
				case 11:
					return 957.0643f, -6904.512f, 42.8624f;
				case 12:
					return 957.0643f, -6904.512f, 42.8624f;
				case 13:
					return 957.0643f, -6904.512f, 42.8624f;
				case 14:
					return 957.0643f, -6904.512f, 42.8624f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 961.8215f, -6761.292f, 41.1124f;
				case 1:
					return 959.7289f, -6763.207f, 41.1124f;
				case 2:
					return 961.3148f, -6774.035f, 41.1124f;
				case 3:
					return 960.0334f, -6775.755f, 41.1124f;
				case 4:
					return 958.1709f, -6779.125f, 41.1124f;
				case 5:
					return 957.0889f, -6781.806f, 40.8624f;
				case 6:
					return 965.538f, -6806.653f, 41.3624f;
				case 7:
					return 971.5276f, -6807.861f, 41.1124f;
				case 8:
					return 969.7952f, -6805.122f, 41.1124f;
				case 9:
					return 974.2216f, -6801.227f, 41.1124f;
				case 10:
					return 976.3091f, -6801.104f, 40.8624f;
				case 11:
					return 983.4248f, -6794.812f, 41.6124f;
				case 12:
					return 984.7457f, -6793.303f, 41.3624f;
				case 13:
					return 990.048f, -6787.197f, 41.1124f;
				case 14:
					return 991.009f, -6785.365f, 40.8624f;
				case 15:
					return 989.7423f, -6781.651f, 40.8624f;
				case 16:
					return 977.8362f, -6795.236f, 41.3624f;
				case 17:
					return 982.6619f, -6800.549f, 40.8624f;
				case 18:
					return 959.316f, -6798.509f, 41.1124f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 930.6068f, -6834.091f, 41.3624f;
				case 1:
					return 928.4884f, -6838.558f, 41.3624f;
				case 2:
					return 942.1075f, -6917.005f, 49.1124f;
				case 3:
					return 957.0643f, -6904.512f, 42.8624f;
				case 4:
					return 957.0643f, -6904.512f, 42.8624f;
				case 5:
					return 957.0643f, -6904.512f, 42.8624f;
				case 6:
					return 957.0643f, -6904.512f, 42.8624f;
				case 7:
					return 957.0643f, -6904.512f, 42.8624f;
				case 8:
					return 958.0806f, -6798.446f, 41.1124f;
				case 9:
					return 969.0887f, -6785.112f, 41.6124f;
				case 10:
					return 952.7899f, -6826.181f, 41.8624f;
				case 11:
					return 968.6645f, -6809.079f, 41.3624f;
				case 12:
					return 968.6645f, -6809.079f, 41.3624f;
				case 13:
					return 968.6645f, -6809.079f, 41.3624f;
				case 14:
					return 968.6645f, -6809.079f, 41.3624f;
				case 15:
					return 968.6645f, -6809.079f, 41.3624f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 995.367f, -6752.046f, 66.1124f;
				case 1:
					return 991.9081f, -6737.273f, 66.1124f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1003.656f, -6748.544f, 66.6124f;
				case 1:
					return 1002.62f, -6744.626f, 65.1124f;
				case 2:
					return 1005.715f, -6751.4f, 66.3624f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 981.1745f, -6742.346f, 55.6565f;
				case 1:
					return 984.9858f, -6743.176f, 61.3271f;
				case 2:
					return 984.7648f, -6724.485f, 58.5271f;
				case 3:
					return 1009.639f, -6759.126f, 69.9771f;
				case 4:
					return 987.625f, -6741.455f, 62.4771f;
				case 5:
					return 996.8562f, -6730.639f, 66.7271f;
				case 6:
					return 1003.543f, -6746.453f, 67.0271f;
				case 7:
					return 998.1399f, -6748.148f, 66.7271f;
				case 8:
					return 996.58f, -6759.724f, 71.2271f;
				case 9:
					return 997.4036f, -6762.875f, 66.7271f;
				case 10:
					return 998.3972f, -6741.904f, 68.7271f;
				case 11:
					return 976.0752f, -6733.741f, 49.5771f;
				case 12:
					return 986.0823f, -6769.837f, 59.4771f;
				case 13:
					return 984.0613f, -6744.946f, 61.7271f;
				case 14:
					return 984.9922f, -6748.718f, 57.9771f;
				case 15:
					return 986.9342f, -6741.808f, 61.7271f;
				case 16:
					return 1002.17f, -6742.437f, 66.0271f;
				case 17:
					return 990.7627f, -6736.177f, 61.2271f;
				case 18:
					return 997.0049f, -6732.445f, 65.7271f;
				case 19:
					return 986.9201f, -6735.861f, 55.9771f;
				case 20:
					return 983.5436f, -6744.352f, 57.7271f;
				case 21:
					return 1000.657f, -6725.629f, 68.7271f;
				case 22:
					return 989.8856f, -6758.161f, 66.7271f;
				case 23:
					return 1006.435f, -6754.318f, 72.2271f;
				case 24:
					return 1002.856f, -6767.867f, 70.9771f;
				case 25:
					return 1001.087f, -6752.032f, 72.7271f;
				case 26:
					return 996.6595f, -6756.058f, 70.4771f;
				case 27:
					return 1004.881f, -6753.726f, 70.2271f;
				case 28:
					return 986.0368f, -6765.239f, 62.2271f;
				case 29:
					return 996.0692f, -6764.859f, 73.7271f;
				case 30:
					return 996.9907f, -6754.632f, 69.2271f;
				case 31:
					return 998.3292f, -6754.251f, 68.2271f;
				case 32:
					return 994.1089f, -6762.476f, 70.2271f;
				case 33:
					return 990.4796f, -6745.347f, 64.7271f;
				case 34:
					return 986.9807f, -6750.979f, 64.9065f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 988.741f, -6727.572f, 54.2271f;
				case 1:
					return 987.5684f, -6729.061f, 53.1565f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1005.023f, -6749.637f, 66.5565f;
				case 1:
					return 1002.633f, -6744.56f, 66.4771f;
				case 2:
					return 1009.205f, -6760.542f, 69.6771f;
				case 3:
				case 4:
				case 5:
			}