void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_91 = 1;
	iLocal_92 = 2;
	iLocal_93 = 3;
	iLocal_94 = 4;
	iLocal_95 = 5;
	iLocal_96 = 6;
	iLocal_97 = 7;
	iLocal_98 = 25;
	iLocal_100 = 1;
	iLocal_223 = 3;
	iLocal_229 = 10;
	iLocal_230 = 15;
	fLocal_727 = 0f;
	iLocal_7303 = -581069256;
	iLocal_7304 = -488847186;
	iLocal_7305 = 144663315;
	fLocal_7397 = 2f;
	fLocal_7398 = 2f;
	fLocal_7399 = 12f;
	fLocal_7400 = 0f;
	fLocal_7401 = 3f;
	fLocal_7412 = 0.2f;
	fLocal_7413 = 0.01f;
	vLocal_7442 = { -0.08f, -1.37f, 0.35f };
	vLocal_7445 = { 0f, 0f, 5f };
	iLocal_7476 = 4000;
	iLocal_7480 = -1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_7495, 1073741824);
		func_2(&uLocal_7495, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_7495);
	func_5(&uLocal_7495);
	while (!func_6(&uLocal_7495, -2147483648))
	{
		func_7(&uLocal_7495);
		wait(0);
	}
	while (!func_2(&uLocal_7495, 0))
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
		_0xaac0ee3b4999abb5(Global_35, false);
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
	iLocal_89 = func_125(uParam0);
	iLocal_89 = iLocal_89;
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
	pause_clock(false, 0);
	_0x292ad61a33a7a485();
	_0x55f37f5f3f2475e1();
	_0x4b0501a468b749f8();
	if (func_163(bVar7266, 0))
	{
		set_entity_only_damaged_by_player(bVar7266, false);
		if (!func_164(iVar796, 16777216))
		{
			delete_ped(&iLocal_7269);
		}
	}
	if (func_163(bVar7267, 0))
	{
		set_entity_only_damaged_by_player(bVar7267, false);
		if (!func_164(iVar796, 16777216))
		{
			delete_ped(&iLocal_7270);
		}
	}
	clear_weather_type_persist();
	if (!is_entity_dead(Global_35))
	{
		remove_weapon_from_ped(Global_35, -1361787316, true, -142743235);
		_remove_ammo_from_ped(Global_35, -1361787316, -1, -142743235);
	}
	_0x3a50753042b6891b(Global_35, "LOCO_WEAPON_MOONSHINEJUG");
	if (does_entity_exist(&(Local_14.f_19[0])))
	{
		func_165(Local_14.f_19[0]);
		if (_0x083d497d57b7400f(&(Local_14.f_19[0])))
		{
			freeze_entity_position(&(Local_14.f_19[0]), false);
		}
		set_vehicle_doors_locked(&(Local_14.f_19[0]), 1);
		delete_vehicle(Local_14.f_19[0]);
	}
	freeze_entity_position(Global_35, false);
	set_entity_collision(Global_35, true, false);
	set_player_control(player_id(), true, 0, false);
	_0x0f2a2175734926d8("BELL_ALARM", 0);
	func_40(1);
	set_gps_active(true);
	if (_does_propset_exist(iVar7303))
	{
		_set_propset_as_no_longer_needed(iVar7303);
		_delete_propset(iVar7303, true, true);
	}
	_0xe98d55c5983f2509(bVar782);
	_0xc67a4910425f11f1(get_player_index(), 0);
	func_166(95);
	func_167(0);
	_0x58f7db5bd8fa2288(Global_35);
	_0x49dadfc4cd808b0a(bVar782, 0, -1);
	func_168();
	func_169(&iLocal_779);
	func_170(&iLocal_770);
	func_171(uParam0, bVar782, 1);
	func_11(&iLocal_809, 1, 1);
	func_11(&iLocal_7486, 1, 1);
	func_11(&iLocal_7487, 1, 1);
	remove_cover_point(&(iLocal_7272[0]));
	remove_cover_point(&(iLocal_7272[1]));
	remove_cover_point(&(iLocal_7272[2]));
	remove_cover_point(&(iLocal_7272[3]));
	remove_cover_point(&(iLocal_7272[4]));
	remove_cover_point(&(iLocal_7272[5]));
	_0x6a564540fac12211(func_172(0), 2055893578);
	remove_weapon_from_ped(Global_35, -1361787316, true, -142743235);
	func_173(-1361787316);
	func_174(uParam0);
	if (func_175(8))
	{
		func_176(8, 16384, 1);
	}
	if (func_163(bVar782, 0))
	{
		set_ped_combat_attributes(bVar782, 27, false);
		func_171(uParam0, bVar782, 1);
		if (func_177(8, 0))
		{
			func_178(8);
		}
		func_179(uParam0, 0, 0, 1);
	}
	_0xa2f8b3b5fedfc100(bVar782, -1625272662);
	_update_ped_variation(bVar782, false, false, true, true, false);
	if (func_180(256))
	{
		clear_ambient_zone_state("AZ_BRAITHWAIT_FIELD_LARGE", false);
	}
	if (_0x91a5f9cbebb9d936(uVar852))
	{
		remove_scenario_blocking_area(uVar852, false);
	}
	func_181();
	display_radar(true);
	iVar0 = -1485059491;
	iVar1 = 2091447480;
	iVar2 = 515619039;
	func_182(iVar0, 0, 0f, 0, 1, 0, 1, 0);
	func_182(iVar1, 0, 0f, 0, 1, 0, 1, 0);
	func_182(iVar2, 0, 0f, 0, 1, 0, 1, 0);
	if (does_entity_exist(iVar783))
	{
		delete_object(&iLocal_786);
	}
	func_183(0);
	if (bVar795)
	{
		remove_group(iVar794);
		_0x12e09e278c6c29b7(player_id());
	}
	_0x660a8f876df1d4f8(8);
	_0x660a8f876df1d4f8(22);
	_0x660a8f876df1d4f8(21);
	set_ped_config_flag(Global_35, 308, false);
	func_184(16);
	func_185();
	func_166(95);
	func_186();
	func_187();
	func_188(0, 0, 1103626240);
	_0xe2c2fbb7825ffc66();
	Global_1347477->f_179 = 0;
	if (func_10(iVar730))
	{
		func_11(&iLocal_733, 1, 1);
	}
	_0x0751d461f06e41ce(player_id(), 10, 0, 0);
	_0x0751d461f06e41ce(player_id(), 5, 0, 0);
	_0x0751d461f06e41ce(player_id(), 27, 0, 0);
	_0x0751d461f06e41ce(player_id(), 44, 0, 0);
	if (func_189())
	{
		_0x43037abfe214a851();
	}
	_0x0a5a4f1979abb40e(&Local_7280);
	_0x798be43c9393632b(&Local_7280);
	end_srl();
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
	iVar0 = func_190(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_191(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_192(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_193(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_194(iParam0) && !func_195(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_196(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_194(iParam0))
	{
		iParam2 = -1;
	}
	if (func_197(iParam0) == 3 || (func_197(iParam0) == 1 && _0x01f4d242765c6b24(func_196(iParam0))))
	{
		func_199(func_198(iParam0), func_196(iParam0), iParam2);
		if ((!func_193(Global_1572864->f_8) && !func_200(0, 1, 0)) && !func_201(&Global_1935630, 32768))
		{
			iVar0 = func_202(iParam0);
			if (iVar0 != -1)
			{
				func_203(0);
			}
			else if (func_198(iParam0) == 8)
			{
				iVar0 = func_204();
				if (iVar0 != -1)
				{
					func_203(0);
				}
			}
		}
	}
	func_205(iParam0, 0);
	if (func_206(0) == iParam0)
	{
		func_40(1);
		func_207(0);
		func_208(1);
	}
	func_209(iParam0, 1);
	func_210(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_211(0);
	func_212(0);
	func_64(0);
	func_65(0);
	func_213(0);
	func_214(1f);
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
		func_215();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_216())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_217())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_196(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_218(0);
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
		func_219(iVar0, iParam0);
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
		if (func_220((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_221((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_221((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_221((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_222(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_223(uParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_224(&(uParam0->f_13118)) >= 4000)
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
	func_225(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_193(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_227(&Var0, func_226(2, 0));
			break;
		case 1:
			func_227(&Var0, func_226(2, 3));
			break;
		case 2:
			func_227(&Var0, func_226(1, 1));
			break;
		case 3:
			func_227(&Var0, func_226(1, 5));
			break;
		case 4:
			func_227(&Var0, func_226(4, 0));
			break;
		case 5:
			func_227(&Var0, func_226(4, 3));
			break;
		case 6:
			func_227(&Var0, func_226(7, 0));
			break;
		case 7:
			func_227(&Var0, func_226(5, 0));
			break;
		case 25:
			func_227(&Var0, func_226(6, 1));
			break;
		default:
			Var0 = { Global_36 };
			break;
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_228(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_211(0);
	func_229(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_220((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_230((*uParam0)[iVar0]);
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
			func_231(iVar0, 4096);
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
		func_232(Global_1935630, 4194304);
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
	func_233();
	func_234();
	func_235();
	func_236();
}

void func_43()
{
	if (func_237())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_238(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_239();
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
	func_240(1, iParam0, iParam1);
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
	return (func_241() || func_54());
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
	func_242(uParam0);
	func_243(uParam0, 0);
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
		func_244(iVar0);
		iVar0++;
	}
	func_245();
	func_246();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_247())
	{
		if (func_248(255))
		{
			if (!func_249(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_250(Global_1894899->f_2) && func_251(Global_1894899->f_2))
		{
			func_252(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_253(16);
			}
		}
		else if (func_250(Global_1894899->f_2) && !func_254(Global_1894899->f_2, 2))
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
		func_255(16);
		func_256();
		if (bVar0)
		{
			func_255(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_257(uParam0->f_5423[iVar0]))
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
	if (func_258(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_259(uParam0->f_5421))
		{
			iVar1 = func_260(uParam0->f_5421, iVar0);
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
		if (func_261(iVar1))
		{
			bVar2 = Global_1360165[iVar0];
			func_262(uParam0, iVar1, bVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_263(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_264(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_265(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_266(7);
		}
		else
		{
			func_267(iVar0, 0);
		}
		func_268(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_270(iParam0, 32);
	func_271();
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
	Var0 = { func_272(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_273(iParam0) };
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
		func_213(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_213(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_274(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_220((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_221((*uParam1)[iVar0], 1);
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
	iVar0 = func_198(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_275(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_276(iVar1))
			{
				if (func_277(iVar1, 4))
				{
					func_278(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_279(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_275(iParam0);
		if (iVar3 == 59)
		{
			func_279(1);
		}
		else if (iVar3 == 61)
		{
			func_279(0);
		}
		else if (iVar3 == 83)
		{
			func_279(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_276(iVar0))
		{
			if (func_277(iVar0, 4))
			{
				if (func_277(iVar0, 16))
				{
					func_280(iVar0, 1);
				}
				if (func_277(iVar0, 8))
				{
					func_281(iVar0, 1);
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
		if (func_282(uParam0) == 0 && iVar0 == 0)
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
		func_283(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_284(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_285(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_286(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_250(iParam0))
	{
		return;
	}
	bVar0 = func_254(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_287(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_289(iParam0, func_288());
			func_290(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_291(iParam0, 67108864);
		func_289(iParam0, -15);
	}
	func_292(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_293(11);
	}
	else
	{
		func_294(11);
	}
}

void func_80(int iParam0)
{
	if (func_295(iParam0, 0))
	{
		func_296(262144, 5, 0, 1);
		func_297(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_298(101, 7, 1f, 0, 1);
			func_298(89, 7, 1f, 0, 1);
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
	if (!func_193(iParam0))
	{
		return;
	}
	if (func_299(iParam0) == 4)
	{
		func_300(iParam0, func_288());
		if (!func_197(iParam0) == 5 && !func_197(iParam0) == 6)
		{
			if (bParam3)
			{
				func_205(iParam0, 6);
			}
			else
			{
				func_205(iParam0, 5);
			}
			func_210(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_198(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_301(0, 2);
		if (!bVar1 && bParam1)
		{
			func_302();
		}
	}
	else
	{
		func_207(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_303(iParam0);
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
				if (bParam1 && func_197(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_275(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_275(iParam0)]->f_8), true);
						}
					}
					else if ((func_275(iParam0) != 95 && func_275(iParam0) != 82) && !func_304((*Global_1347702)[func_275(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_275(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_275(iParam0)]->f_8), true);
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
		func_306(func_275(iParam0), iVar6, func_305());
	}
	else if (iVar0 == 8)
	{
		func_308(func_275(iParam0), iVar6, func_305(), func_307());
	}
	if (!func_197(iParam0) == 5 && !func_197(iParam0) == 6)
	{
		iVar9 = func_309(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_310(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_311(func_275(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_312((iVar10 - 20), 0, iVar10);
					iVar11 = func_312((iVar11 - 10), 0, iVar11);
				}
				func_313(1);
				func_314(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_314(45, 0, 1);
				break;
			case 8:
				iVar10 = func_315(func_275(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_312((iVar10 - 20), 0, iVar10);
					iVar11 = func_312((iVar11 - 10), 0, iVar11);
				}
				func_314(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_316(func_275(iParam0)))
				{
					func_317(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_314(120, 0, 1);
				break;
			case 2:
				func_314(120, 0, 1);
				break;
			case 6:
				func_314(func_319(func_318(iParam0)), 0, 1);
				break;
			case 5:
				func_314(120, 0, 1);
				break;
		}
	}
	func_209(iParam0, 1);
	func_300(iParam0, func_288());
	func_210(iParam0);
	if ((!func_197(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_202(iParam0);
		if (iVar12 != -1)
		{
			func_203(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_204();
			if (iVar12 != -1)
			{
				func_203(0);
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
				switch (func_275(iParam0))
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
				if (func_276(func_275(iParam0)) && func_304((*Global_1347702)[func_275(iParam0)]->f_12, 4))
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
				if (func_275(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_275(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_197(iParam0) == 5 && !func_197(iParam0) == 6)
	{
		if (bParam3)
		{
			func_205(iParam0, 6);
		}
		else
		{
			func_205(iParam0, 5);
		}
		func_210(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_275(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_320();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_321(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1267972061);
						func_321(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1619534881);
						func_321(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-755457379);
						func_321(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1015404643);
						func_321(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1724192342);
						func_321(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1310680212);
						func_321(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-566881549);
						func_321(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1753730528);
						func_321(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(147796381);
						func_321(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-378547623);
						func_321(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(829545206);
						func_321(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(891318243);
						func_321(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323();
						func_324(967523420);
						func_325();
						func_326();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_327(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_321(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_328(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_328(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_329(304805134, 1, 1);
						if (!func_330((*Global_1347702)[21]->f_15, 1))
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
						func_331();
						break;
					case 26:
						func_332();
						break;
					case 17:
						func_333(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_334())
						{
							func_335(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_336(-514575035, -1))
						{
							iVar15 = func_288();
							func_337(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_338(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_334())
						{
							func_335(1529685685);
						}
						break;
					case 34:
						if (func_334())
						{
							func_335(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_339();
						break;
					case 37:
						func_340();
						if (func_341())
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
						func_342();
						break;
					case 43:
						func_343();
						break;
					case 44:
						if (!func_330((*Global_1347702)[82]->f_15, 1))
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
						if (!func_330((*Global_1347702)[83]->f_15, 1))
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
						func_344();
						break;
					case 59:
						func_345();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_346();
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
						func_347();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_328(451, 0);
						}
						if (!func_348(-1992824800))
						{
							if (func_348(1520110311))
							{
								iVar16 = func_288();
								func_337(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_338(1937177603, iVar16, 1);
							}
						}
						if (func_349(4))
						{
							if (!func_350(684296857, 1, 0))
							{
								iVar17 = func_288();
								func_337(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_338(-1439688706, iVar17, 1);
							}
						}
						func_321(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_351(89200);
						func_351(2300);
						func_351(2300);
						break;
					case 68:
						func_352();
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
						func_353();
						func_351(-139100);
						break;
					case 69:
						if (func_330((*Global_1347702)[9]->f_15, 1))
						{
							func_351(-6000);
						}
						break;
					case 70:
						func_351(23400);
						func_351(1900);
						func_351(-15000);
						break;
					case 71:
						func_351(-5500);
						break;
				}
				break;
			case 8:
				switch (func_275(iParam0))
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
						func_354();
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
						func_355();
						break;
					case 66:
						func_356();
						func_357();
						break;
					case 67:
						if (!func_358(6))
						{
							func_359(6);
						}
						if (!func_358(3))
						{
							func_359(3);
						}
						if (func_334())
						{
							func_335(1534638301);
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
						if (func_330((*Global_1835011)[69]->f_1, 1))
						{
							func_360(0);
							func_351(40500);
						}
						else
						{
							func_360(0);
							func_351(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_275(iParam0))
				{
					case 0:
						switch (func_318(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_361(iParam0);
		func_362();
		switch (iVar0)
		{
			case 1:
				switch (func_275(iParam0))
				{
					case 4:
						func_363(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_363(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_363(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_363(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_363(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_363(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_363(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_364(iParam0);
						func_363(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_363(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_363(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_350(-2046502963, 1, 0))
						{
							func_321(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_363(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_363(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_363(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_364(iParam0) == 0)
						{
							func_363(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_363(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_304((*Global_1347702)[func_275(iParam0)]->f_12, 536870912))
				{
					func_365(11, 1);
				}
				switch (func_275(iParam0))
				{
					case 109:
						func_363(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_365(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_363(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_363(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_363(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_363(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_366(0, 10, 11, 2116153146))
				{
					func_363(iParam0, func_364(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 7, 11, -379687487))
				{
					func_363(iParam0, func_367(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 8, 11, -1386089015))
				{
					func_363(iParam0, func_367(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 11, 11, -1952009645))
				{
					func_363(iParam0, func_367(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 12, 11, 2065895756))
				{
					func_363(iParam0, func_367(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_197(iParam0) == 0)
			{
				if (func_196(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_196(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_199(func_198(iParam0), func_196(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_275(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_369(func_368(Global_1879514->f_1));
						if (iVar0 == 8 && func_275(iParam0) == 58)
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
						if (func_276(func_275(iParam0)) && func_304((*Global_1347702)[func_275(iParam0)]->f_12, 1))
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
			func_370(bParam2, iVar20);
		}
	}
	func_208(1);
	if ((bVar13 || func_129()) && (func_198(iParam0) == 1 || func_198(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_196(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_199(func_198(iParam0), func_196(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_198(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_366(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_371();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_195(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_194(iParam0))
	{
		if (!func_197(iParam0) == 5 && !func_197(iParam0) == 6)
		{
			if (bParam1)
			{
				func_205(iParam0, 6);
			}
			else
			{
				func_205(iParam0, 5);
			}
			func_210(iParam0);
		}
	}
	switch (func_198(iParam0))
	{
		case 1:
			switch (func_275(iParam0))
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
			switch (func_275(iParam0))
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
	vVar2 = { func_372((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_373(vVar2, uVar1, uVar0, 0);
	func_374(vVar2);
	Global_40.f_9.f_15 = func_375(vVar2, 0);
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
	func_376();
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
	func_377(Var10, 0);
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
	if (!func_193(iParam0))
	{
		return;
	}
	if (iParam0 != func_206(0))
	{
		return;
	}
	if (func_196(iParam0) == 0)
	{
	}
	iVar0 = func_198(iParam0);
	if (func_197(iParam0) == 3)
	{
		if (func_196(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_196(iParam0)))
		{
			if (func_198(iParam0) != 1 && func_198(iParam0) != 8)
			{
				func_199(func_198(iParam0), func_196(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_210(iParam0);
	func_40(1);
	func_207(0);
	func_205(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_313(1);
			func_314(15, 0, 1);
			break;
		case 4:
			func_314(10, 0, 1);
			break;
		case 8:
			func_314(10, 0, 1);
			break;
		case 9:
			func_314(10, 0, 1);
			break;
		case 2:
			func_314(10, 0, 1);
			break;
		case 6:
			func_314(10, 0, 1);
			break;
		case 5:
			func_314(10, 0, 1);
			break;
	}
	func_208(1);
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

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_378(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_379(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_379(&(Global_1347343->f_11), 16384);
	}
	if (func_380() >= 2)
	{
		if (!func_378(Global_1347343->f_11, 16384))
		{
			func_379(&(Global_1347343->f_11), 8);
		}
		func_214(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_232(Global_1935630, 2048);
	func_381(bParam5);
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
			func_382(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_201(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_383(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_384(&(uParam0->f_7375));
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
	return func_385() != -1;
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
	func_386(uParam0);
	uParam0->f_634[0] = 58760;
	uParam0->f_634[1] = 58760;
	uParam0->f_637 = 0;
	func_388(uParam0, *uParam1);
	func_389(uParam0);
}

void func_109(var uParam0)
{
	func_390();
	func_392(uParam0, func_391(6, 0));
	if (func_82(32768))
	{
		func_393(1149195254);
		func_393(58066174);
	}
}

char[] func_110(int iParam0)
{
	if (!func_192(iParam0))
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
			func_394(iVar0, iVar1);
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
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 33554432);
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
	return func_164(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_395(&(uParam0->f_7375));
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
	return func_396(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_397(Param0, Param0.f_3);
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
	if (!func_398())
	{
		return false;
	}
	if (!func_330((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[2]->f_1, 1) && func_330((*Global_1347702)[120]->f_15, 1)) && !func_330((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[37]->f_1, 1) && !func_330((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[57]->f_1, 1) && !func_330((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[26]->f_1, 1) && !func_330((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[62]->f_1, 1) && func_330((*Global_1835011)[63]->f_1, 1)) && !func_330((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[75]->f_1, 1) && !func_330((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[76]->f_1, 1) && !func_330((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[40]->f_1, 1) && func_330((*Global_1835011)[41]->f_1, 1)) && !func_330((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[62]->f_1, 1) && func_330((*Global_1835011)[63]->f_1, 1)) && !func_330((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[65]->f_1, 1) && func_330((*Global_1835011)[66]->f_1, 1)) && !func_330((*Global_1835011)[67]->f_1, 1))
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
	if (func_399(vParam1))
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
	func_223(&(uParam0->f_603));
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
		return func_400();
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
		func_401(uParam0->f_607);
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
	func_402(&(uParam0->f_638));
	func_403(&(uParam0->f_819));
	func_404(&(uParam0->f_1020));
	func_405(&(uParam0->f_1081));
	func_406(&(uParam0->f_1126));
	func_407(&(uParam0->f_5147));
	func_408(&(uParam0->f_1124));
	func_409(&(uParam0->f_5188));
	func_410(&(uParam0->f_5239));
	func_411(&(uParam0->f_5249));
	func_412(&(uParam0->f_5265));
	func_413(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_414(uParam0, iLocal_89, 67108863);
	func_414(uParam0, 367739382, 67108863);
	func_414(uParam0, -1758092337, 67108863);
	func_414(uParam0, 1382164045, 1);
	func_414(uParam0, -77509825, 1);
	func_414(uParam0, -538512200, 1);
	func_414(uParam0, -283162583, 67108863);
	func_414(uParam0, 128034147, 67108863);
}

int func_139(var uParam0)
{
	func_415(uParam0, 67108863);
	func_416(uParam0, "lightrig@mission@braithwaites2_field_fire", uLocal_7226[0], 524512, 0, 0, 0, 1);
	func_416(uParam0, "lightrig@mission@braithwaites2_field_fire_nofade", uLocal_7226[1], 524416, 0, 0, 0, 1);
	func_417(uParam0, -1361787316, 16, -1, 0);
	func_417(uParam0, 1845102363, 15, -1, 0);
	func_416(uParam0, "script@story@BRT2@leadin@int@livingRoom", &uLocal_7229, 1, 0, 0, 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_1_hide_in_wagon@ig_1_hide_in_wagon", &uLocal_7230, 4, 0, "pbl_climbing_into_back", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_1_hide_in_wagon@ig_1_hide_in_wagon_p2", &uLocal_7231, 4, 0, "pbl_climbing_into_back", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_1_hide_in_wagon@ig_1_hide_in_wagon_wcamera", &uLocal_7232, 4, 0, "pbl_climbing_into_back", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_1_hide_in_wagon@ig_1_hide_in_wagon_arthuridles", &uLocal_7233, 12, 0, "pbl_idle", 0, 1);
	func_418(uParam0, iVar7230, "pl_trans_front_to_left", 12);
	func_418(uParam0, iVar7230, "pl_trans_front_to_right", 12);
	func_418(uParam0, iVar7230, "pl_trans_left_to_right", 12);
	func_418(uParam0, iVar7230, "pl_trans_left_to_front", 12);
	func_418(uParam0, iVar7230, "pl_trans_right_to_left", 12);
	func_418(uParam0, iVar7230, "pl_trans_right_to_front", 12);
	func_416(uParam0, "script@story@brt2@ig@ig_2_pickupguard@ig_2_pickupguard", &uLocal_724, 12, 0, "pl_Standing_Guard_Rifle", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_2_pickupguard@ig_2_pickupguard", &uLocal_725, 4, 2, "pl_Props", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig_2_pickupguard@ig_2_wagon_driveoff", &uLocal_7225, 4, 0, 0, 0, 1);
	func_416(uParam0, "script@story@BRT2@IG@ig_3@ig_3_killguard", &uLocal_7234, 8, 0, "pbl_get_off_wagon", 0, 1);
	func_416(uParam0, "script@story@BRT2@IG@ig_3@ig_3_killguard_arthurexit", &uLocal_7235, 8, 0, "pbl_FrontExit_Stealth", 0, 1);
	func_416(uParam0, "script@story@BRT2@IG@ig_3@ig_3_killguard_arthurexit", &uLocal_7236, 8, 0, "pbl_FrontExit", 0, 1);
	func_416(uParam0, "script@story@BRT2@leadin@mcs1@sean_reaction", &uLocal_7237, 8, 0, "pl_idle", 0, 1);
	func_416(uParam0, "script@story@BRT2@leadin@mcs1@sean_reaction", &uLocal_7238, 8, 0, "pl_leadin", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig9_sean_douse", &uLocal_7239, 32, 0, "pbl_Action", 0, 1);
	func_419(uParam0, "script_story@brt2@ig@ig_7_rideandtalk", 524416);
	func_416(uParam0, "script@story@brt2@ig@ig12_lootingwagon@ig12_lootingwagon", &uLocal_7240, 128, 0, "pl_Investigation_to_BranchJump", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig12_lootingwagon@ig12_lootingwagon", &uLocal_7241, 128, 0, "pl_Branch_RightJump", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig12_lootingwagon@ig12_lootingwagon_horsejump", &uLocal_7242, 128, 0, "pl_Branch_RightJump", 0, 1);
	func_416(uParam0, "script@story@brt2@ig@ig12_lootingwagon@ig12_lootingwagon_horsejump", &uLocal_7243, 128, 0, "pl_CutFree", 0, 1);
	func_418(uParam0, iVar7237, "pl_EXIT_STANDING", 128);
	func_418(uParam0, iVar7238, "pl_Branch_LeftJump", 128);
	func_418(uParam0, iVar7239, "pl_Branch_LeftJump", 128);
	func_416(uParam0, "script@story@brt2@ig@ig_barnfire@ig_barnfire", &uLocal_7244, 224, 0, "start", 0, 1);
	func_418(uParam0, iVar7241, "Loop", 224);
	func_414(uParam0, -1811911736, 1);
	func_414(uParam0, 2055697445, 15);
	func_414(uParam0, -2047924463, 255);
	func_414(uParam0, 1754553459, 15);
	func_414(uParam0, 1953815821, 12);
	func_414(uParam0, -890087611, 32);
	func_414(uParam0, -2359651, 16);
	func_414(uParam0, -2040421904, 48);
	func_414(uParam0, -1281909308, 48);
	func_414(uParam0, -2015460503, 48);
	func_414(uParam0, 128034147, 192);
	func_414(uParam0, 1066034872, 524528);
	func_414(uParam0, 36009259, 524528);
	func_420(uParam0, "Braithwaites_02", 64);
	func_421(uParam0, "brt2_SeanOutMansion", 1, 2, -1);
	func_421(uParam0, "brt2_GoToCaligaHall_gps_route", 1, 2, -1);
	func_421(uParam0, "brt2_ToWagonParkInt2", 4, 2, -1);
	func_421(uParam0, "brt2_WagonToGuard", 4, 2, -1);
	func_421(uParam0, "braithwaites2_guardWagon_fromLeft", 16, 2, -1);
	func_421(uParam0, "braithwaites2_guardWagon", 16, 2, -1);
	func_421(uParam0, "braithwaites2_horse_flee", 64, 2, -1);
	func_421(uParam0, "braithwaites2_sean_fire_fields", 64, 2, -1);
	func_421(uParam0, "braithwaites2_sean_horse_escape", 128, 2, -1);
	func_421(uParam0, "brt2_outroRideToCamp", 524416, 2, -1);
	func_421(uParam0, "brt2_outroCME", 524288, 2, -1);
	return 1;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_422(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	if (func_33(uParam0) != 25)
	{
		func_103(uParam0, 1);
	}
}

void func_142(var uParam0, int iParam1)
{
	func_423(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_272(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_273(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	func_424(&(uParam0->f_5310), bParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_258(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_425() };
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
	func_426(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_427(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_428(uParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_382(&(uParam0->f_10792), bParam1, sParam2, bParam6);
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
	if (!func_192(iParam0))
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
		if (func_429(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_430(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_429(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

int func_157(var uParam0)
{
	return 1;
}

bool func_158(var uParam0)
{
	if (func_431(uParam0) < 1)
	{
		func_432(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_433(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_434(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_435(uParam0);
		}
	}
	switch (func_431(uParam0))
	{
		case -1:
		case 0:
			func_436(uParam0, 1);
			break;
		case 1:
			if (func_437(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_436(uParam0, 2);
				}
				else
				{
					func_436(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_438(uParam0))
			{
				func_436(uParam0, 3);
			}
			break;
		case 3:
			if (func_439(uParam0))
			{
				func_436(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_159(var uParam0)
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
		func_440(uParam0, 0);
		return true;
	}
	if (func_441(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_440(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_441(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(bool bParam0, int iParam1)
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
	if (func_164(iVar0, 1))
	{
		if (is_ped_fatally_injured(bParam0))
		{
			return false;
		}
	}
	if (func_164(iVar0, 2))
	{
		if (_is_ped_hogtied(bParam0))
		{
			return false;
		}
	}
	if (func_164(iVar0, 8))
	{
		if (get_ped_config_flag(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_164(iVar0, 16))
	{
		if (!is_ped_on_mount(bParam0) && !is_ped_in_any_vehicle(bParam0, false))
		{
			return false;
		}
	}
	if (func_164(iVar0, 32))
	{
		if (is_entity_in_water(bParam0))
		{
			return false;
		}
	}
	if (func_164(iVar0, 64))
	{
		if (_0xb655db7582aec805(bParam0))
		{
			return false;
		}
	}
	if (func_164(iVar0, 128))
	{
		if (is_ped_ragdoll(bParam0))
		{
			return false;
		}
	}
	if (func_164(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_164(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_165(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*uParam0, false, false))
		{
			if (!is_vehicle_seat_free(*uParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*uParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_442(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*uParam0, 3f, 3f, 0f), get_entity_heading(*uParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

int func_166(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (!func_443(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_444((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_167(bool bParam0)
{
	if (bParam0)
	{
		if (does_entity_exist(bVar782))
		{
			_0x437c08db4febe2bd(bVar782, "stealth", 1f, -1);
		}
		if (does_entity_exist(Global_35))
		{
			_0x437c08db4febe2bd(Global_35, "stealth", 1f, -1);
		}
	}
	else
	{
		if (does_entity_exist(bVar782))
		{
			_0x437c08db4febe2bd(bVar782, "stealth", 0f, -1);
		}
		if (does_entity_exist(Global_35))
		{
			_0x437c08db4febe2bd(Global_35, "stealth", 0f, -1);
		}
	}
}

void func_168()
{
	if (does_entity_exist(iVar7266))
	{
		delete_ped(&iLocal_7268);
	}
}

void func_169(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_170(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_169((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_171(var uParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(bParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(bParam1) && func_445(get_ped_index_from_entity_index(bParam1)));
	if (bVar0)
	{
		iVar1 = func_446(get_ped_index_from_entity_index(bParam1));
	}
	if (is_entity_a_ped(bParam1))
	{
		iVar2 = get_ped_index_from_entity_index(bParam1);
		if (bVar0)
		{
			func_447(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_448(uParam0, bParam1) && does_blip_exist(get_blip_from_entity(bParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(bParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(bParam1), 231194138);
		}
		else
		{
			func_449(bParam1);
		}
	}
	if (func_448(uParam0, bParam1))
	{
		func_450(uParam0, bParam1, 1024);
		if (bParam2)
		{
			func_451(uParam0, bParam1, 128);
		}
		else
		{
			func_450(uParam0, bParam1, 128);
		}
		if (func_452(uParam0, bParam1, &iVar3))
		{
			func_453(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_454(iVar1);
	}
}

int func_172(bool bParam0)
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

void func_173(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_398())
	{
		return;
	}
	if (!is_weapon_valid(iParam0) || iParam0 == -1569615261)
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, false);
}

void func_174(var uParam0)
{
	if (func_163(bVar781, 0))
	{
		func_262(uParam0, 5, bVar781, 0, 1, 1, 0);
	}
	if (func_163(&(Local_14.f_27[0]), 0))
	{
		set_ped_as_no_longer_needed(Local_14.f_27[0]);
	}
	if (func_163(&(Local_14.f_27[1]), 0))
	{
		set_ped_as_no_longer_needed(Local_14.f_27[1]);
	}
	if (func_163(&(Local_14.f_27[2]), 0))
	{
		set_ped_as_no_longer_needed(Local_14.f_27[2]);
	}
}

bool func_175(int iParam0)
{
	if (does_entity_exist(Global_1360165[iParam0]) && decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		return true;
	}
	if ((((((((((((((((func_455(iParam0, 1) || func_455(iParam0, 128)) || func_455(iParam0, 256)) || func_455(iParam0, 512)) || func_455(iParam0, 1024)) || func_455(iParam0, 2048)) || func_455(iParam0, 4096)) || func_455(iParam0, 65536)) || func_455(iParam0, 16384)) || func_455(iParam0, 262144)) || func_455(iParam0, 524288)) || func_455(iParam0, 1048576)) || func_455(iParam0, 2097152)) || func_455(iParam0, 32768)) || func_455(iParam0, 131072)) || func_455(iParam0, 134217728)) || func_455(iParam0, 1073741824))
	{
		return true;
	}
	return false;
}

void func_176(int iParam0, int iParam1, bool bParam2)
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
				func_456(iParam0);
				func_457(iParam0, 0);
				break;
		}
		func_458(iParam0, iParam1);
		if (func_459(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_460(Global_1360165[iParam0], iVar0))
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
				func_456(iParam0);
				func_457(iParam0, 1);
				break;
		}
		func_461(iParam0, iParam1);
		func_462(iParam0, Global_1360165[iParam0], 1);
	}
}

bool func_177(int iParam0, bool bParam1)
{
	bVar0 = func_463(iParam0);
	if (bParam1)
	{
		if (!func_163(bVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(bVar0, func_464(), 1);
}

void func_178(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (!func_177(iParam0, 0))
	{
	}
	func_466(iParam0);
	Global_1359489->f_15 = func_467(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_468();
	func_469(iParam0, 32, 1);
	if (func_163(Global_1360165[iParam0], 0))
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

void func_179(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_470(func_61(uParam0));
	if (!func_261(iVar0))
	{
		return;
	}
	func_262(uParam0, iVar0, func_159(uParam0), iParam1, bParam2, bParam3, 0);
	uParam0->f_5408 = 0;
}

bool func_180(int iParam0)
{
	return func_164(iVar796, iParam0);
}

void func_181()
{
	_0x74c2b3dc0b294102(iVar829);
	_0xa1cfb35069d23c23(iVar829);
	_0x74c2b3dc0b294102(iVar808);
	_0xa1cfb35069d23c23(iVar808);
	if (_does_volume_exist(iVar831))
	{
		_0xd17672447692478e(iVar831, 0);
	}
	func_471(iVar4901);
	func_471(iVar813);
	func_471(iVar812);
	func_471(iVar815);
	func_471(iVar814);
	func_471(iVar808);
	func_471(iVar829);
	func_471(iVar831);
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (func_472(Local_856[iVar0]))
		{
			func_473(Local_856[iVar0]);
		}
		iVar0++;
	}
	func_471(&(uLocal_828[0]));
	func_471(&(uLocal_828[1]));
	func_471(&(uLocal_4889[0]));
	func_471(&(uLocal_4889[6]));
	func_471(&(uLocal_4889[1]));
	func_471(&(uLocal_4889[2]));
	func_471(&(uLocal_4889[5]));
	func_471(&(uLocal_4889[3]));
	func_471(&(uLocal_4889[4]));
	func_471(&(uLocal_840[0]));
	func_471(&(uLocal_840[1]));
	func_471(&(uLocal_840[2]));
	func_471(&(uLocal_4889[7]));
	func_471(iVar816);
	func_471(iVar822);
	func_471(iVar830);
}

void func_182(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_474(iParam0, 0, 0);
	if (func_475(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_476(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_477(iParam0, 1);
			}
			else
			{
				func_478(iParam0, 1);
			}
		}
		else
		{
			func_479(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_480())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_183(bool bParam0)
{
	if (bParam0)
	{
		if (!is_entity_dead(iVar782))
		{
			_0x1e017404784aa6a3(iVar782, 50725576);
		}
		_0x0d7fd6a55fd63aef(19, 3, 1);
		_0x0d7fd6a55fd63aef(21, 3, 1);
		_0x0d7fd6a55fd63aef(24, 3, 1);
		_0x87e6302fc61208cc("PLAYER_STILL_OFF_WAGON_BRT2");
	}
	else
	{
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(26);
		if (!is_entity_dead(iVar782))
		{
			_0x2b4ce170de09f346(iVar782, 50725576);
		}
		_0x6378a235374b852f("PLAYER_STILL_OFF_WAGON_BRT2", 3);
	}
}

void func_184(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_185()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_218(iVar0);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			func_481(iVar0);
		}
		iVar0++;
	}
}

void func_186()
{
	func_444(915);
	func_444(916);
	func_444(917);
}

void func_187()
{
	if (does_particle_fx_looped_exist(iVar7218))
	{
		stop_particle_fx_looped(iVar7218, false);
		iLocal_7220 = 0;
	}
}

void func_188(int iParam0, bool bParam1, float fParam2)
{
	func_482(iParam0, bParam1, fParam2);
}

bool func_189()
{
	return &Global_1956584;
}

int func_190(int iParam0)
{
	return iParam0;
}

void func_191(int iParam0)
{
	if (!func_483(iParam0))
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

bool func_192(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_193(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_194(int iParam0)
{
	iVar0 = func_299(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_195(int iParam0)
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
		iVar0 = func_197(iParam0);
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

int func_196(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_197(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_484(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_198(int iParam0)
{
	if (!func_193(iParam0))
	{
		return 0;
	}
	return func_486(func_485(iParam0));
}

void func_199(int iParam0, int iParam1, int iParam2)
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

bool func_200(int iParam0, bool bParam1, bool bParam2)
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
		if (func_487())
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
		iVar0 = func_275(&(Global_1898164->f_1[0]));
		if (func_276(iVar0) && func_304((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_193(&(Global_1898164->f_1[0])))
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

bool func_201(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_202(int iParam0)
{
	switch (func_198(iParam0))
	{
		case 1:
			iVar0 = func_275(iParam0);
			return func_488(iVar0);
		case 8:
			iVar1 = func_275(iParam0);
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_489(iVar1);
			}
			break;
	}
	return -1;
}

void func_203(bool bParam0)
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
		func_490(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_491();
		Global_1898077->f_9 = func_492(Global_1894899->f_2);
		func_493(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_204()
{
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_330((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_330((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_330((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_330((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_330((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_330((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_205(int iParam0, int iParam1)
{
	if (!func_193(iParam0))
	{
		return;
	}
	func_494(iParam0, iParam1);
}

int func_206(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_207(bool bParam0)
{
	if (!bParam0 && func_495(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_208(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_209(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_206(0) != iParam0)
	{
		return;
	}
	if (func_496(iParam0))
	{
		if (bParam1)
		{
			func_497(-525676072);
		}
		else
		{
			func_498(-525676072);
		}
	}
}

int func_210(int iParam0)
{
	return func_500(func_499(iParam0));
}

void func_211(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_212(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_213(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_214(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_215()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_216()
{
	return func_501(_0xc17f69e1418cd11f(3));
}

bool func_217()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_218(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_219(int iParam0, int iParam1)
{
	if (!func_502(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_503(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_220(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_221(char* sParam0, bool bParam1)
{
	if (func_220(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_504(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_504(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_504(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_504(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_504(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_504(sParam0, 1);
		return true;
	}
	func_504(sParam0, 1);
	return false;
}

bool func_222(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_223(var uParam0)
{
	func_505(uParam0, 0f);
}

int func_224(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_506(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_507() - round((uParam0->f_1 * 1000f)));
}

void func_225(bool bParam0, bool bParam1)
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
		func_508(0);
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

struct<4> func_226(int iParam0, int iParam1)
{
	return func_509(iParam0, iParam1);
}

void func_227(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_228(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_229(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_198(iParam0) == 1)
	{
		cVar0 = func_110(func_510(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_198(iParam0) == 8)
	{
		cVar0 = func_512(func_511(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_513(1, 1);
	func_514(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_214(1f);
}

void func_230(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_504(sParam0, 2);
}

void func_231(int iParam0, int iParam1)
{
	if (!func_515(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_233()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_234()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_235()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_236()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_237()
{
	return func_516(get_id_of_this_thread());
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_517(bParam0);
}

void func_239()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_241()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_242(var uParam0)
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

void func_243(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_244(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_245()
{
	func_519(64);
}

void func_246()
{
	Global_1310750->f_16072 = 0;
}

bool func_247()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_248(int iParam0)
{
	return func_249(23, iParam0);
}

bool func_249(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_520(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_521())
	{
		return func_520(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_520(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_250(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_251(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 8);
}

void func_252(int iParam0, int iParam1)
{
	if (!func_250(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_253(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_254(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_255(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_256()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_254(iVar1, 1))
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
			else if (func_254(iVar1, 2))
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
				func_291(iVar1, 11);
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

bool func_257(var uParam0)
{
	if (func_522(uParam0, 1) || func_522(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_258(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_259(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_260(struct<2> Param0, int iParam2)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_261(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	if (!func_523(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_262(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_465(iParam1))
	{
		return;
	}
	if (!func_261(iParam1))
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
	if (does_entity_exist(bParam2))
	{
		func_524(uParam0, bParam2);
		func_525(bParam2);
	}
	func_447(iParam1);
	func_526(iParam1, 0);
	func_527(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_263(var uParam0)
{
	return uParam0->f_5411;
}

int func_264(int iParam0)
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

int func_265(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_266(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_528(iParam0);
	if (func_529(iParam0))
	{
		if (func_265(iParam0) != iVar0)
		{
			return;
		}
	}
	func_530(iParam0);
	func_531(iParam0);
	bVar1 = func_218(iParam0);
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
			if (!func_532(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_533(iParam0);
	}
}

void func_267(bool bParam0, bool bParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (!func_534(bParam0))
	{
		return;
	}
	iVar0 = func_264(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_528(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_265(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_529(iVar0))
		{
			return;
		}
	}
	func_535(iVar0);
	set_ped_keep_task(bParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(bParam0))
		{
			set_entity_as_mission_entity(bParam0, true, true);
		}
	}
}

void func_268(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_269(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_270(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_271()
{
	if (func_536(0))
	{
		func_537(0);
	}
	if (func_536(1))
	{
		func_537(1);
	}
	if (func_536(5))
	{
		func_537(5);
	}
	if (func_536(6))
	{
		func_530(6);
	}
}

struct<2> func_272(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_273(int iParam0)
{
	Var0 = { func_272(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_274(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_275(int iParam0)
{
	if (!func_193(iParam0))
	{
		return -1;
	}
	return func_538(func_485(iParam0));
}

bool func_276(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_277(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_278(int iParam0, bool bParam1)
{
	iVar0 = func_539(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_540(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_540(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_540(iParam0)))
			{
				_uilog_remove_entry(2, func_540(iParam0));
			}
		}
	}
	func_541(iParam0, 4);
	func_541(iParam0, 8);
	func_541(iParam0, 16);
}

void func_279(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_276(iVar0))
		{
			if (func_277(iVar0, 4))
			{
				func_280(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_280(int iParam0, bool bParam1)
{
	if (!func_277(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_539(iParam0), func_540(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_539(iParam0), func_540(iParam0), 2, "");
		func_542(iParam0, 16);
	}
	else
	{
		if (func_277(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_539(iParam0), func_540(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_539(iParam0), func_540(iParam0), 0, "");
		}
		func_541(iParam0, 16);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_277(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_539(iParam0), func_540(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_277(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_539(iParam0), func_540(iParam0), 1, "");
		}
		func_542(iParam0, 8);
	}
	else
	{
		if (func_277(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_539(iParam0), func_540(iParam0), 0, "");
		}
		func_541(iParam0, 8);
	}
}

int func_282(var uParam0)
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

void func_283(int iParam0, int iParam1)
{
	if (func_536(0))
	{
		if (func_543(0))
		{
			func_544(0);
		}
	}
	if (func_536(1))
	{
		if (func_543(1))
		{
			func_544(1);
		}
	}
}

void func_284(var uParam0)
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
		if (func_433(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_285(var uParam0)
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

void func_286(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_545(iParam0, sParam4, iParam5);
	}
	func_546(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_287(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_288()
{
	return &Global_1899515;
}

void func_289(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_290(int iParam0, int iParam1)
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

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_292(int iParam0)
{
	if (!func_250(iParam0))
	{
		return;
	}
	if (func_547(iParam0))
	{
		func_548(iParam0);
	}
	else
	{
		func_549(iParam0);
	}
}

int func_293(int iParam0)
{
	if (func_550(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (func_551(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_295(int iParam0, int iParam1)
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

void func_296(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_552(Global_1310750[iVar0], iParam0))
		{
			if (!func_553(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_554(iVar0) < func_555(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_298(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_297(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_556();
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

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
			Jump @393; //curOff = 304
			fVar3 = 12f;
			Jump @393; //curOff = 314
			fVar3 = 15f;
			Jump @393; //curOff = 324
			fVar3 = 18f;
			Jump @393; //curOff = 334
			fVar3 = 20f;
			Jump @393; //curOff = 344
			fVar3 = 25f;
			Jump @393; //curOff = 354
			fVar2 = -1f;
			Jump @393; //curOff = 360
			fVar3 = -5f;
			Jump @393; //curOff = 370
			fVar3 = -7f;
			Jump @393; //curOff = 380
			fVar3 = -8f;
			func_557(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
		}

int func_299(int iParam0)
{
	if (!func_193(iParam0))
	{
		return -1;
	}
	return func_197(iParam0);
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_301(bool bParam0, int iParam1)
{
	if (!bParam0 && func_495(373691918))
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
	func_207(bParam0);
	return 1;
}

void func_302()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_465(iVar17))
		{
			bVar18 = func_463(iVar17);
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
	func_558(&(Global_1359489->f_55));
	if (func_559(1777191912, 1))
	{
		func_560(1777191912, 1, 0);
	}
}

void func_303(int iParam0)
{
	if (!func_193(iParam0))
	{
		return;
	}
	func_562(iParam0, (func_561(iParam0) + shift_left(1, 16)));
}

bool func_304(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_305()
{
	return func_563() > 0;
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_564(-1032423150, iParam1);
			break;
		case 18:
			func_564(294066959, iParam1);
			func_564(-1925639563, iParam1);
			func_564(-378582304, iParam1);
			func_564(-338306437, iParam1);
			break;
		case 20:
			func_564(437270255, iParam1);
			break;
		case 2:
			func_564(-304000413, iParam1);
			func_564(-533612796, iParam1);
			func_564(48036954, iParam1);
			break;
		case 23:
			func_564(193108691, iParam1);
			func_564(491732588, iParam1);
			func_564(671962088, iParam1);
			func_565(1);
			break;
		case 16:
			func_564(-1836056650, iParam1);
			func_564(-754657922, iParam1);
			func_564(-1752355838, iParam1);
			func_564(-1375324510, iParam1);
			break;
		case 59:
			func_564(-514392105, iParam1);
			func_564(-822060246, iParam1);
			if (func_566(146))
			{
				func_564(1372748575, iParam1);
			}
			func_565(1);
			break;
		case 76:
			func_564(1991352213, iParam1);
			if (func_567() == 0)
			{
				func_564(1852488616, iParam1);
			}
			else
			{
				func_564(-9866350, iParam1);
			}
			break;
		case 44:
			func_564(863852599, iParam1);
			func_564(1228374935, iParam1);
			func_564(1517889050, iParam1);
			func_564(830657578, iParam1);
			func_564(1901354958, iParam1);
			break;
		case 46:
			func_564(-582805654, iParam1);
			func_564(250378940, iParam1);
			func_564(-2143265426, iParam1);
			break;
		case 17:
			func_564(-941494139, iParam1);
			func_564(1641489521, iParam1);
			break;
		case 19:
			func_564(-1829423531, iParam1);
			func_564(-1590504752, iParam1);
			func_564(1357221321, iParam1);
			break;
		case 21:
			func_564(-1037992610, iParam1);
			func_564(-1286414399, iParam1);
			func_565(0);
			break;
		case 15:
			func_564(-1014460309, iParam1);
			func_564(-1030502825, iParam1);
			break;
		case 33:
			func_564(479388090, iParam1);
			func_564(-1396342239, iParam1);
			func_564(-619618632, iParam1);
			break;
		case 34:
			func_564(1193561641, iParam1);
			break;
		case 64:
			func_564(1363960851, iParam1);
			break;
		case 60:
			func_564(-1232453926, iParam1);
			func_564(-882833584, iParam1);
			break;
		case 73:
			func_564(2023205767, iParam1);
			break;
		case 74:
			func_564(-2135286513, iParam1);
			if (func_567() == 0)
			{
				func_564(33799444, iParam1);
			}
			else
			{
				func_564(-161343203, iParam1);
			}
			break;
		case 8:
			func_564(841639693, iParam1);
			func_564(358952323, iParam1);
			break;
		case 36:
			func_564(852538149, iParam1);
			func_564(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_564(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(1116039310, iParam1);
			}
			break;
		case 27:
			func_564(107633428, iParam1);
			func_564(335902282, iParam1);
			func_564(575673055, iParam1);
			func_564(-425944207, iParam1);
			break;
		case 28:
			func_564(-1941530250, iParam1);
			func_564(1399269304, iParam1);
			func_564(1839684664, iParam1);
			func_564(923168503, iParam1);
			func_564(-1485078322, iParam1);
			break;
		case 29:
			func_564(574995900, iParam1);
			func_564(-1691275407, iParam1);
			func_564(-1725307861, iParam1);
			break;
		case 31:
			func_564(-2108383238, iParam1);
			func_564(-1321828931, iParam1);
			func_564(-1632118592, iParam1);
			func_564(334938948, iParam1);
			break;
		case 4:
			func_564(115823701, iParam1);
			func_564(-1896939736, iParam1);
			func_564(-1830746356, iParam1);
			func_564(-1235169781, iParam1);
			func_565(0);
			break;
		case 6:
			func_564(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-384176140, iParam1);
			}
			break;
		case 25:
			func_564(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_564(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-1374849484, iParam1);
			}
			break;
		case 48:
			func_564(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(217772674, iParam1);
			}
			else
			{
				func_564(2071798160, iParam1);
			}
			if (func_568(51))
			{
				func_564(-792802286, iParam1);
			}
			break;
		case 49:
			func_564(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_564(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_564(1402120602, iParam1);
			}
			break;
		case 58:
			func_564(-1661934591, iParam1);
			break;
		case 50:
			func_564(-1713759426, iParam1);
			break;
		case 52:
			func_564(-314799932, iParam1);
			func_564(-462260432, iParam1);
			func_564(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_564(345256028, iParam1);
				func_564(-1635084094, iParam1);
			}
			else
			{
				func_564(114267347, iParam1);
			}
			break;
		case 32:
			func_564(615304157, iParam1);
			break;
		case 47:
			func_564(415434835, iParam1);
			break;
		case 69:
			func_564(1373465877, iParam1);
			if (func_330((*Global_1347702)[9]->f_15, 1))
			{
				func_564(-2058273527, iParam1);
			}
			break;
		case 70:
			func_564(451334985, iParam1);
			if (func_567() == 0)
			{
				func_564(-224150200, iParam1);
			}
			else
			{
				func_564(289012628, iParam1);
			}
			break;
		case 71:
			if (func_567() == 0)
			{
				func_564(-41692120, iParam1);
			}
			else
			{
				func_564(1537840678, iParam1);
			}
			break;
		case 37:
			func_564(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_564(1842132550, iParam1);
			}
			else
			{
				func_564(-785735240, iParam1);
			}
			func_564(-1605690566, iParam1);
			break;
		case 13:
			func_564(-731367459, iParam1);
			func_564(224176585, iParam1);
			func_564(-14545580, iParam1);
			break;
		case 53:
			func_564(1095274522, iParam1);
			break;
		case 54:
			func_564(-572027988, iParam1);
			break;
		case 56:
			func_564(1339307101, iParam1);
			func_564(2102267732, iParam1);
			break;
		case 57:
			func_564(710102686, iParam1);
			break;
		case 22:
			func_564(-1754368482, iParam1);
			func_564(-2071408557, iParam1);
			break;
		case 12:
			func_564(-181334543, iParam1);
			break;
		case 0:
			func_564(-2134669864, iParam1);
			func_564(-548289709, iParam1);
			func_564(-911271922, iParam1);
			func_564(-604455775, iParam1);
			break;
		case 1:
			func_565(1);
			break;
		case 3:
			if (func_341())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_564(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_564(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_307()
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

void func_308(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_564(-145926707, iParam1);
			func_564(-604922090, iParam1);
			func_564(-848690769, iParam1);
			break;
		case 1:
			func_564(-1477631591, iParam1);
			break;
		case 2:
			func_564(76112544, iParam1);
			break;
		case 9:
			func_564(1396404308, iParam1);
			func_564(-1357381228, iParam1);
			if (func_330((*Global_1835011)[69]->f_1, 1))
			{
				func_564(1902679064, iParam1);
			}
			else
			{
				func_564(-2146422425, iParam1);
			}
			break;
		case 22:
			func_564(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_564(-1934184559, iParam1);
				func_564(1281755988, iParam1);
			}
			else
			{
				func_564(-1745220872, iParam1);
				func_564(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_564(-1641504538, iParam1);
				func_564(-988014485, iParam1);
			}
			else if (func_566(26))
			{
				func_564(-343043950, iParam1);
				func_564(-640062214, iParam1);
			}
			else
			{
				func_564(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_564(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_564(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_564(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_564(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_564(1301690984, iParam1);
				}
			}
			else
			{
				func_564(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_564(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_564(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_564(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_564(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_564(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_564(-754570528, iParam1);
			}
			else
			{
				func_564(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_564(-2072125821, iParam1);
			}
			else
			{
				func_564(270040030, iParam1);
			}
			break;
		case 37:
			func_564(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_564(-505314737, iParam1);
				func_564(-1853052860, iParam1);
			}
			else
			{
				func_564(-1975624994, iParam1);
				func_564(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_564(1690231002, iParam1);
			}
			else
			{
				func_564(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_564(1225386280, iParam1);
			}
			else if (func_566(54))
			{
				func_564(-283235773, iParam1);
			}
			else
			{
				func_564(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_564(1355398007, iParam1);
			}
			else
			{
				func_564(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_564(574636806, iParam1);
			}
			else
			{
				func_564(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_564(821118338, iParam1);
			}
			else if (func_566(39))
			{
				func_564(846829260, iParam1);
			}
			else
			{
				func_564(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_364((*Global_1835011)[33]->f_1) == 1)
				{
					func_564(1422779093, iParam1);
				}
				else
				{
					func_564(-1769536986, iParam1);
				}
			}
			else
			{
				func_564(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_564(352134789, iParam1);
			}
			else if (func_566(43))
			{
				func_564(260723113, iParam1);
			}
			else
			{
				func_564(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_564(-457958799, iParam1);
			}
			else
			{
				func_564(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_566(41))
			{
				func_564(-546824600, iParam1);
			}
			else
			{
				func_564(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_564(1297261593, iParam1);
			}
			else
			{
				func_564(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_564(2068484886, iParam1);
			}
			else if (func_566(49))
			{
				func_564(-1489080639, iParam1);
				func_564(-2102244050, iParam1);
			}
			else
			{
				func_564(-1863040467, iParam1);
			}
			break;
		case 51:
			func_564(-2055943209, iParam1);
			break;
		case 58:
			if (func_330((*Global_1347702)[23]->f_15, 1))
			{
				func_564(1650066845, iParam1);
			}
			else
			{
				func_564(151370023, iParam1);
			}
			func_564(1426057961, iParam1);
			func_564(476379584, iParam1);
			break;
		case 59:
			func_564(-1638117866, iParam1);
			break;
		case 62:
			func_564(199541730, iParam1);
			break;
		case 63:
			func_564(1703485804, iParam1);
			func_564(-800449045, iParam1);
			break;
		case 65:
			func_564(-1678210868, iParam1);
			func_564(-1448238026, iParam1);
			func_564(-1200864845, iParam1);
			func_564(1473511536, iParam1);
			break;
		case 66:
			func_564(-1774490051, iParam1);
			func_564(-34645921, iParam1);
			func_564(174027075, iParam1);
			func_564(-1155999, iParam1);
			func_565(1);
			break;
		case 67:
			func_564(701612593, iParam1);
			func_564(-1069631343, iParam1);
			func_564(1673428882, iParam1);
			break;
		case 68:
			func_564(-739133286, iParam1);
			func_564(-2130089358, iParam1);
			func_564(2056190391, iParam1);
			func_564(1941753817, iParam1);
			func_565(0);
			break;
		case 70:
			func_564(-1217555753, iParam1);
			break;
		case 71:
			func_564(697048821, iParam1);
			break;
		case 73:
			func_564(-553148661, iParam1);
			break;
		case 75:
			func_564(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_564(1414263863, iParam1);
			}
			else
			{
				func_564(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_564(1835465936, iParam1);
				func_564(523715611, iParam1);
			}
			else if (func_566(78))
			{
				func_564(1420338873, iParam1);
			}
			else
			{
				func_564(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_564(10180941, iParam1);
			}
			else if (func_566(79))
			{
				func_564(768420635, iParam1);
			}
			else
			{
				func_564(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_564(-383601523, iParam1);
			}
			else
			{
				func_564(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_564(1606472408, iParam1);
			}
			else
			{
				func_564(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_564(-203571927, iParam1);
			}
			else
			{
				func_564(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_564(729886222, iParam1);
			}
			else
			{
				func_564(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_564(-714816362, iParam1);
			}
			else
			{
				func_564(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_564(-932932179, iParam1);
				func_564(-1458537240, iParam1);
			}
			else
			{
				func_564(-1764383885, iParam1);
				func_564(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_564(1741466706, iParam1);
			}
			else
			{
				func_564(1405815775, iParam1);
			}
			break;
		case 94:
			func_564(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(1905280979, iParam1);
			}
			else
			{
				func_564(-1966245299, iParam1);
			}
			func_564(721468880, iParam1);
			break;
		case 99:
			func_564(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_564(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_564(-1117781095, iParam1);
				}
				else
				{
					func_564(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_564(141494548, iParam1);
			}
			else
			{
				func_564(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_564(-369525697, iParam1);
			}
			else if (func_566(101))
			{
				func_564(1595015219, iParam1);
			}
			else
			{
				func_564(-321486961, iParam1);
			}
			break;
		case 103:
			func_564(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_564(793460477, iParam1);
				func_564(-1610242176, iParam1);
			}
			else if (func_566(103))
			{
				func_564(1830897187, iParam1);
			}
			else
			{
				func_564(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_564(1528309077, iParam1);
			}
			else if (func_566(104))
			{
				func_564(1864966105, iParam1);
			}
			else
			{
				func_564(-103336013, iParam1);
			}
			break;
		case 108:
			func_564(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_564(-1123227713, iParam1);
				func_564(-889574341, iParam1);
			}
			else
			{
				func_564(2065385917, iParam1);
				func_564(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_564(-887421691, iParam1);
			}
			else if (func_566(109))
			{
				func_564(-1318117949, iParam1);
			}
			else
			{
				func_564(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_564(284822762, iParam1);
				}
				else
				{
					func_564(-1425017554, iParam1);
				}
			}
			else if (func_566(110))
			{
				if (&Global_1357515 == 0)
				{
					func_564(553087292, iParam1);
				}
				else
				{
					func_564(-1766870331, iParam1);
					func_564(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-1980598735, iParam1);
			}
			else
			{
				func_564(-442732098, iParam1);
				func_564(1955756409, iParam1);
			}
			break;
		case 115:
			func_564(394303528, iParam1);
			func_564(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_564(1182403394, iParam1);
			}
			else
			{
				func_564(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_564(924445424, iParam1);
			}
			else
			{
				func_564(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_564(430755273, iParam1);
				func_564(-1473879802, iParam1);
			}
			else
			{
				func_564(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_564(73885747, iParam1);
			}
			else if (func_566(117))
			{
				func_564(1559707913, iParam1);
			}
			else
			{
				func_564(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_564(-2103887972, iParam1);
			}
			else if (func_566(118))
			{
				func_564(-435828462, iParam1);
			}
			else
			{
				func_564(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_564(2054486196, iParam1);
			}
			else
			{
				func_564(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_564(-570086056, iParam1);
			}
			else if (func_566(121))
			{
				func_564(32337856, iParam1);
			}
			else
			{
				func_564(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_564(813493663, iParam1);
			}
			else if (func_566(122))
			{
				func_564(-2132763590, iParam1);
			}
			else
			{
				func_564(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_564(-66240572, iParam1);
				func_564(1563075046, iParam1);
			}
			else
			{
				func_564(-787011772, iParam1);
				func_564(-1523377438, iParam1);
			}
			break;
		case 127:
			func_564(61020800, iParam1);
			break;
		case 129:
			func_564(428985222, iParam1);
			break;
		case 131:
			func_564(-1393851036, iParam1);
			break;
		case 133:
			func_564(1559531342, iParam1);
			break;
		case 134:
			func_564(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_564(-1374407408, iParam1);
				}
				else
				{
					func_564(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_564(-472672138, iParam1);
				}
				else
				{
					func_564(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_564(-1678710489, iParam1);
			}
			else
			{
				func_564(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_564(1717582460, iParam1);
			}
			else
			{
				func_564(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_564(1568112362, iParam1);
				func_564(1388317526, iParam1);
			}
			else if (func_566(136))
			{
				func_564(-1597534828, iParam1);
				func_564(-1207918353, iParam1);
			}
			else
			{
				func_564(-1940891082, iParam1);
				func_564(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_564(448334530, iParam1);
				func_564(2145375502, iParam1);
			}
			else
			{
				func_564(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_564(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_564(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_564(-66616327, iParam1);
			}
			else
			{
				func_564(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_564(1862916706, iParam1);
			}
			else if (func_566(147))
			{
				func_564(675105199, iParam1);
			}
			else
			{
				func_564(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_564(174409701, iParam1);
			}
			else if (func_566(148))
			{
				func_564(-1730895475, iParam1);
			}
			else
			{
				func_564(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_564(1295237052, iParam1);
			}
			else if (func_566(149))
			{
				func_564(-788577684, iParam1);
			}
			else
			{
				func_564(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_309(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_198(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_510(iParam0);
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
					if (func_364((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_275(iParam0);
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
			iVar3 = func_275(iParam0);
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

int func_310(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_569(iParam0);
	iVar3 = func_570(iParam0);
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
				iVar1 = func_288();
				func_337(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_571(iParam0, 1);
			if (func_572(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_573(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_574(1, iParam0);
				}
				else
				{
					func_575(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0, int iParam1)
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

int func_312(int iParam0, int iParam1, int iParam2)
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

void func_313(bool bParam0)
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

void func_314(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_576(iParam0, iParam1, bParam2);
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

int func_315(int iParam0, int iParam1)
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

bool func_316(int iParam0)
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

void func_317(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_577(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_578(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_579(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_580(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_579(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_318(int iParam0)
{
	if (!func_193(iParam0))
	{
		return -1;
	}
	return func_581(func_485(iParam0));
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_320()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_582(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_321(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (!func_584(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_585(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_586(iParam0, bParam2);
	iVar2 = 0;
	if (func_587(iParam0, 0, 0) == 0)
	{
		if (func_588(iParam0))
		{
			iVar5 = func_589(iParam0);
			iVar6 = func_590(iVar5);
			iVar7 = func_591(iVar6) + 1;
			func_592(iVar5);
			if (func_593(38))
			{
				func_328(483, 0);
			}
			else
			{
				func_328(482, 0);
			}
			if (iVar7 == func_594(iVar6))
			{
				func_321(func_595(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_398() && func_596(4))
				{
					if (func_398() && (func_597(38) || func_593(38)))
					{
						func_599(38, func_595(iVar6), 0, 0, func_598(), 0, -1, 0);
						func_600(2);
					}
					else
					{
						func_599(38, func_595(iVar6), 0, 0, func_598(), 0, -1, 0);
						func_600(1);
					}
				}
			}
			else if (func_398() && func_596(4))
			{
				if (func_398() && (func_597(38) || func_593(38)))
				{
					func_599(38, 0, 0, 0, func_598(), 0, -1, 0);
					func_600(2);
				}
				else
				{
					func_599(38, 0, 0, 0, func_598(), 0, -1, 0);
					func_600(1);
				}
			}
			if (func_398() && func_596(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_398() && (func_597(38) || func_593(38)))
					{
						func_601(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_601(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_602(iParam0) == -1037537535)
	{
		if ((!func_603(iParam0, 866047851) && !func_603(iParam0, -1979000645)) && !func_603(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_604(iParam0, 8388608) && !func_605(28))
	{
		func_606(28);
	}
	if (!bVar3)
	{
		if (func_603(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_607(iParam0) == -1447088266)
			{
				iVar1 = func_609(func_608(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_610(iVar1);
					}
					if (func_611(0) && func_612(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iParam0, iVar0, iParam5);
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
						func_610(iParam0);
					}
					if (func_611(0) && func_612(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_602(iParam0) == -427144552)
		{
			if (!func_614(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_602(iParam0) == 307971639 && func_615(iParam0))
		{
			if (!func_616(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_603(iParam0, 866047851))
		{
			func_617(iParam0);
		}
		else if (func_603(iParam0, 2000026003))
		{
			func_618(iParam0);
		}
		else if (func_603(iParam0, -103750053))
		{
			func_95(func_619(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_620(-717883113, 2091222383), iVar0);
		}
		else if (func_603(iParam0, -121341956) && !func_603(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_330((*Global_1835011)[4]->f_1, 1))
				{
					func_328(498, 0);
				}
			}
			if (func_603(iParam0, -2017733358) || func_603(iParam0, -1369131378))
			{
				func_621(iParam0);
			}
		}
		else if (func_603(iParam0, -136654233))
		{
			if (func_603(iParam0, -1021472396))
			{
			}
		}
		else if (func_603(iParam0, -1466706512) && func_603(iParam0, 1147021565))
		{
			func_328(484, 0);
		}
		else if (func_603(iParam0, 1147021565) && func_603(iParam0, -524514947))
		{
		}
		else if (func_603(iParam0, 554195525))
		{
		}
		else if (func_603(iParam0, 589988438))
		{
			if (func_622())
			{
				func_623(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_603(iParam0, 787083290) && func_603(iParam0, 949916894))
		{
			func_624(iParam0);
		}
		else if (func_603(iParam0, -1718133314))
		{
			func_625(iParam0);
		}
		else if (func_603(iParam0, -1738650224))
		{
			func_626(iParam0);
		}
		else if (func_603(iParam0, -1112814642) && func_603(iParam0, 949916894))
		{
			func_627(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_603(iParam0, 1841149704))
		{
			func_628();
		}
		else if (func_603(iParam0, 606799272))
		{
			func_629(iParam0, iParam1);
			func_630(iParam0);
		}
		else if (func_603(iParam0, -1112814642) && func_603(iParam0, -1697809989))
		{
			func_631(iParam0, 0, 0, 0);
		}
		else if (func_603(iParam0, -2017733358) || func_603(iParam0, -1369131378))
		{
			func_621(iParam0);
		}
		else if (func_603(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_632(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_603(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_350(215778062, 1, 0))
					{
						func_321(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_350(670273567, 1, 0))
					{
						func_321(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_350(-967317137, 1, 0))
					{
						func_321(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_350(526074061, 1, 0))
					{
						func_321(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_350(-1045488665, 1, 0))
					{
						func_321(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_350(471514780, 1, 0))
					{
						func_321(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_603(iParam0, -839724752) && func_604(iParam0, 4))
		{
			if (!func_593(42))
			{
				func_633(iParam0);
			}
		}
		else if (func_603(iParam0, 1399091007))
		{
			func_634(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_603(iParam0, 1248798204))
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
				func_321(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_606(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_635(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_636(&iVar9, 0))
				{
					func_612(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_635(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_328(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_637();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_638();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_639();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_640();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_641();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_642(499813453, 854119837, 0);
				func_643(499813453, 0);
				func_644(1);
				break;
			case 2127812557:
				func_642(499813453, -1292544588, 0);
				func_643(499813453, 0);
				func_644(2);
				break;
			case 808991383:
				func_642(499813453, -1003325394, 0);
				func_643(499813453, 0);
				func_644(4);
				break;
			case 1134518629:
				func_642(666607663, -335460405, 0);
				func_643(666607663, 0);
				func_645(1);
				break;
			case 902940106:
				func_642(666607663, 903797617, 0);
				func_643(666607663, 0);
				func_645(2);
				break;
			case -418174898:
				func_642(666607663, 669728650, 0);
				func_643(666607663, 0);
				func_645(4);
				break;
			case -648114971:
				func_642(-220219788, 1214120047, 0);
				func_643(-220219788, 0);
				func_646(1);
				break;
			case 211153747:
				func_642(-220219788, 655769340, 0);
				func_643(-220219788, 0);
				func_646(2);
				break;
			case -32876996:
				func_642(-220219788, 885316185, 0);
				func_643(-220219788, 0);
				func_646(4);
				break;
			case 1191437462:
				func_642(218622660, -1491419385, 0);
				func_643(218622660, 0);
				func_647(1);
				break;
			case 1119149048:
				func_642(218622660, 1809565830, 0);
				func_643(218622660, 0);
				func_647(2);
				break;
			case 506073827:
				func_642(390004462, -628873767, 0);
				func_643(390004462, 0);
				func_648(1);
				break;
			case -1876986168:
				func_642(390004462, -405421956, 0);
				func_643(390004462, 0);
				func_648(2);
				break;
			case 2142623221:
				func_642(390004462, -1108972386, 0);
				func_643(390004462, 0);
				func_648(4);
				break;
			case 1508215381:
				func_642(6410548, 1053716392, 0);
				func_643(6410548, 0);
				func_649(1);
				break;
			case -888935280:
				func_642(6410548, 806507056, 0);
				func_643(6410548, 0);
				func_649(2);
				break;
			case -1252474566:
				func_642(6410548, 1571925350, 0);
				func_643(6410548, 0);
				func_649(4);
				break;
			case -1465702449:
				func_642(6410548, 1330352282, 0);
				func_643(6410548, 0);
				func_649(8);
				break;
			case -21093309:
				func_651(242, func_650(-21093309), 0);
				break;
			case 204375141:
				func_651(240, func_650(204375141), 0);
				break;
			case -417963070:
				func_651(241, func_650(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_652(594, 1934060482, 1, 1);
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
					func_652(594, 1110018439, 1, 1);
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
					func_652(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_652(594, -1228016946, 1, 1);
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
					func_652(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_652(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_328(488, 0);
				break;
			case 1613651027:
				func_328(491, 0);
				break;
			case -885810591:
				func_328(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_321(func_653(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_321(func_654(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_605(1))
				{
					func_328(487, 0);
				}
				break;
			case -898386032:
				func_328(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_328(496, 0);
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
		func_655(&iVar10);
		if (!func_656(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_611(0))
		{
			return true;
		}
		if (func_602(iParam0) == -1037537535)
		{
			func_657(iParam0);
		}
		if (func_603(iParam0, -1979000645))
		{
			func_658(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_611(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_321(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_659(iVar2, 0);
		}
	}
	Var35 = { func_660(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_661(iParam0);
	if (fParam6 > 0f)
	{
		if (func_603(iParam0, -839724752))
		{
			func_662(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_663(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_322(int iParam0)
{
	if (func_603(iParam0, 1989861793))
	{
		iVar0 = func_664(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_665(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_666(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_667(iVar14, iVar1);
					if (iVar15 != iParam0 && func_583(iVar15, 0))
					{
						if (func_668(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_669(iVar1);
				if (bVar13)
				{
					func_670(iParam0);
				}
				else
				{
					func_328(306, 0);
				}
			}
		}
	}
}

void func_323()
{
	if (func_20() != -1)
	{
		return;
	}
	func_671();
	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
	func_677();
}

void func_324(int iParam0)
{
	func_678(iParam0, 1, 1, -142743235, 1);
	if (func_679(iParam0))
	{
		func_680(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_682(func_681(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_683(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_684() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_685(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_685(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_686(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_686(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_686(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_686(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_686(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_686(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_686(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_686(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_686(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_687(iVar8, iVar0))
				{
					func_688(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_687(iVar8, iVar0))
		{
			func_688(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_325()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_687(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_684() == -2125499975 || func_684() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_688(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_688(&vVar2, iVar5, iVar0);
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

void func_326()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_582(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_327(int iParam0, bool bParam1)
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
			if ((func_330((*Global_1835011)[59]->f_1, 1) || func_330((*Global_1347702)[1]->f_15, 1)) || func_194((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_559(403634348, 1))
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

void func_328(int iParam0, bool bParam1)
{
	func_689(iParam0, &iVar0, &iVar1);
	if (!func_690(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_691(iVar0, iVar1);
}

void func_329(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_682(iParam0, 1);
	func_692(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_692(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_693(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_692(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_692(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_330(int iParam0, bool bParam1)
{
	switch (func_299(iParam0))
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

void func_331()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_582(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_332()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_582(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_694(iParam1, 1, 0) };
		iParam3 = func_695(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_696(iParam3);
	return func_635(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_334()
{
	return _unlock_is_unlocked(99890643);
}

void func_335(int iParam0)
{
	if (!func_697(iParam0))
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

bool func_336(int iParam0, int iParam1)
{
	if (!func_698(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_699(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_700(Global_40.f_9910[iParam1], 4);
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_701(*iParam0);
	iVar1 = func_702(*iParam0);
	iVar2 = func_703(*iParam0);
	iVar3 = func_704(*iParam0);
	iVar4 = func_705(*iParam0);
	iVar5 = func_706(*iParam0);
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
	iVar6 = func_707(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_707(iVar1, iVar0);
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
	func_708(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_338(int iParam0, int iParam1, bool bParam2)
{
	if (!func_698(iParam0))
	{
		return;
	}
	if (!func_709(iParam1))
	{
		return;
	}
	if (func_710(iParam1, 1))
	{
		return;
	}
	iVar0 = func_699(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_336(iParam0, -1))
	{
		return;
	}
	else
	{
		func_711(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_200(0, 0, 1))
		{
			func_370(0, 17);
		}
	}
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_582(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_582(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_341()
{
	return _unlock_is_unlocked(-121456797);
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_582(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_582(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_582(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_582(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_582(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_582(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_348(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_349(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_350(int iParam0, int iParam1, bool bParam2)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_602(iParam0);
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
		if (!func_712(iParam0, 1))
		{
			return false;
		}
	}
	return func_587(iParam0, 0, bParam2) >= iParam1;
}

void func_351(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_713(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_713(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_582(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_582(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_354()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_582(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_355()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_582(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_582(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_357()
{
	if (func_714() > 1)
	{
		func_715();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_328(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_328(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_328(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_328(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_328(452, 1);
		}
	}
}

bool func_358(int iParam0)
{
	return func_716(iParam0, 4, 1);
}

void func_359(int iParam0)
{
	func_717(iParam0, 4, 1);
}

void func_360(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_361(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_193(iParam0))
	{
		return;
	}
	func_232(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_198(iParam0))
	{
		case 1:
			func_95(func_620(909007663, -587839005), 1);
			iVar0 = func_275(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_488(iVar0))
			{
				case 0:
					func_95(func_620(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_620(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_620(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_620(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_620(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_620(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_620(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_620(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_620(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_620(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_620(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_275(iParam0);
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_304((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_304((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_620(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_620(909007663, -2049243343), 1);
				}
			}
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_489(iVar1))
				{
					case 0:
						func_95(func_620(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_620(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_620(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_620(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_620(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_620(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_620(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_620(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_620(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_620(909007663, 532323983), 1);
				}
			}
			else if (func_304((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_304((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_304((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_620(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_620(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_362()
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
	else if (func_201(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_200(0, 0, 1) || func_718()) || func_129())
	{
		return;
	}
	iVar0 = func_204();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_719(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_720(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_720(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_721(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_370(0, -1);
	}
	if (iVar2 > 0)
	{
		func_722("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_723(1, 0);
	Global_1956575->f_4 = 1;
}

void func_363(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_286(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_724(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_364(int iParam0)
{
	if (!func_193(iParam0))
	{
		return -1;
	}
	return func_725(iParam0);
}

int func_365(int iParam0, int iParam1)
{
	if (!func_726(iParam0))
	{
		return 0;
	}
	if (!func_398())
	{
		return 0;
	}
	if (!func_727(iParam0, &iVar0, &iVar1))
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

int func_366(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_728())
	{
		iVar2 = func_728();
	}
	iVar5 = func_729(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_485(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_485(iVar6) == 0)
			{
				return func_730(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_485(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_485(iVar6) == 0)
			{
				return func_730(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_730(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_731(1330954593, 0, -1);
		case 1:
			return func_731(1330954593, 0, -1);
		case 2:
			return func_731(1330954593, 0, -1) * 2;
		case 4:
			return func_731(1330954593, 0, -1);
		case 5:
			return func_731(1330954593, 0, -1);
		case 6:
			return func_731(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_731(1330954593, 0, -1) * 3;
		case 9:
			return func_731(1330954593, 0, -1) * 3;
		case 10:
			return func_731(1330954593, 0, -1) * 3;
		case 11:
			return func_731(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_368(int iParam0)
{
	if (!func_193(iParam0))
	{
		return cVar0;
	}
	switch (func_198(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_510(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_275(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_366(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_369(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_371();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_198(Global_1879514->f_1) == 1)
			{
				func_365(5, 1);
			}
			else if (func_198(Global_1879514->f_1) == 8 && (func_304((*Global_1347702)[func_275(Global_1879514->f_1)]->f_12, 1) || func_304((*Global_1347702)[func_275(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_365(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_370(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_732(&Global_0, 8);
	}
	if (!func_398() || func_20() != -1)
	{
		return;
	}
	func_732(&Global_0, 1);
}

int func_371()
{
	iVar0 = func_733(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_734(iVar0))
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

Vector3 func_372(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_735(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_399(vVar0))
	{
		vVar0 = { func_735(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_373(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_374(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_375(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_250(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_736(vParam0, iParam3);
}

void func_376()
{
	func_737();
	func_738();
	func_739();
	_0x11b0a0b282fa9b10(0);
}

void func_377(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_740(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_741(&(Param0.f_10)))
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
			func_742(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_378(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_379(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_380()
{
	return Global_1572864->f_12;
}

void func_381(bool bParam0)
{
	if (func_501(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_743();
	Var1.f_3.f_3 = iVar0;
	if ((!func_744(Global_1347343->f_2) && !func_378(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_745();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_378(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_746();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_378(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_747();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_748(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_749(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_379(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_379(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_382(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	func_750(uParam0);
	iVar0 = func_751(uParam0, bParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_752(bParam1);
		}
		iVar0 = func_753(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_754(uParam0);
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
		iVar0 = func_754(uParam0);
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
	func_755(uParam0, 2);
}

void func_383(var uParam0, int iParam1)
{
	func_756(&(uParam0->f_7375), iParam1);
}

int func_384(var uParam0)
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

int func_385()
{
	return func_510(func_757());
}

void func_386(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_400())
	{
		func_758(uParam0, iVar0);
		iVar0++;
	}
}

int func_387(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_388(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_389(var uParam0)
{
	func_764(uParam0, iLocal_90, iLocal_91, 112666, 112847, 112925, 113338, 115171, "BRT2_INT", 66, -1);
	func_764(uParam0, iLocal_91, iLocal_92, 115365, 115401, 115582, 115854, 116693, "", 64, -1);
	func_764(uParam0, iLocal_92, iLocal_93, 116741, 116853, 116874, 116990, 118095, "", 64, -1);
	func_764(uParam0, iLocal_93, iLocal_94, 118174, 118401, 118748, 118963, 119586, "", 64, -1);
	func_764(uParam0, iLocal_94, iLocal_95, 119700, 119860, 120244, 120594, 122095, "BRT2_MCS1", 4198, -1);
	func_764(uParam0, iLocal_95, iLocal_96, 122174, 122506, 122515, 122567, 124417, "", 4164, -1);
	func_764(uParam0, iLocal_96, iLocal_97, 124482, 124725, 124852, 124942, 125275, "", 64, 30);
	func_764(uParam0, iLocal_97, iLocal_98, 125344, 125538, 125586, 125886, 126879, "", 64, 30);
	func_764(uParam0, iLocal_98, 26, 126989, 127300, 127480, 127599, 131193, "", 0, -1);
}

void func_390()
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (!does_entity_exist(iVar1))
		{
		}
		else
		{
			switch (get_entity_type(iVar1))
			{
				case 2:
					if (func_805(iVar1))
					{
					}
					break;
				case 1:
					iVar2 = 0;
					while (iVar2 <= 3)
					{
						if (func_806(iVar1))
						{
						}
						else
						{
							iVar2++;
						}
					}
					break;
				case 3:
					if (func_807(iVar1))
					{
					}
					break;
			}
			decor_remove(iVar1, func_808());
		}
		iVar0 = (iVar0 + -1);
	}
	_0x20a4bf0e09bee146(Global_43616);
}

Vector3 func_391(int iParam0, int iParam1)
{
	return func_809(iParam0, iParam1);
}

void func_392(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

void func_393(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_394(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_395(var uParam0)
{
	if (!func_810(uParam0, 4))
	{
		if (func_811(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_812(uParam0) };
		if (!func_811(uParam0->f_860, 524288))
		{
			func_813(&(uParam0->f_872));
		}
		func_814(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_815(uParam0, 0f, 0f, 0f);
		func_816(uParam0);
		func_817(uParam0);
		func_818(uParam0, 0f, 0f, 0f, 0, 0);
		func_819(uParam0);
		func_756(uParam0, 4);
		func_820(uParam0, 0);
		func_821(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_396(int iParam0)
{
	if (func_822(iParam0))
	{
		return func_823(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_397(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_513(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_824(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_825(0, 0);
		if (func_697(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_826(1, 0);
		}
	}
	else
	{
		func_826(1, 0);
	}
	func_212(0);
	func_514(0, vParam0, uParam3);
	return 1;
}

bool func_398()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_399(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_400()
{
	return 26;
}

void func_401(int iParam0)
{
	if (!func_192(iParam0))
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

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_827((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_828((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_829((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_830((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_831((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_832((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_833((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_834((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_835((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_836((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_837((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_838(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_839(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_415(var uParam0, int iParam1)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	uParam0->f_1124.f_1 = (uParam0->f_1124.f_1 || iParam1);
}

void func_416(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_840(iParam3, func_33(uParam0)) && !func_840(iParam3, func_35(uParam0)))
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
	iVar0 = func_841(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_842(&(uParam0->f_1126));
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
	uParam0->f_1126[iVar0]->f_65 = iParam6;
	uParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_843(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_417(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_844(&(uParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_845(&(uParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5188[iVar0] = iParam1;
	uParam0->f_5188[iVar0]->f_1 = iParam3;
	uParam0->f_5188[iVar0]->f_2 = iParam4;
	uParam0->f_5188[iVar0]->f_4 = (uParam0->f_5188[iVar0]->f_4 || iParam2);
}

void func_418(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_840(iParam3, func_33(uParam0)) && !func_840(iParam3, func_35(uParam0)))
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
	iVar0 = func_846(&(uParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_string_null_or_empty(&(uParam0->f_1126[iVar0]->f_4[iVar1])) && are_strings_equal(&(uParam0->f_1126[iVar0]->f_4[iVar1]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (is_string_null_or_empty(&(uParam0->f_1126[iVar0]->f_4[iVar1])))
		{
			uParam0->f_1126[iVar0]->f_4[iVar1] = sParam2;
			uParam0->f_1126[iVar0]->f_4[iVar1]->f_2 = (uParam0->f_1126[iVar0]->f_4[iVar1]->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_419(var uParam0, char[4] cParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_847(&(uParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_848(&(uParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1020[iVar0] = cParam1;
	uParam0->f_1020[iVar0]->f_2 = (uParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_420(var uParam0, char[4] cParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_849(&(uParam0->f_5239), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_850(&(uParam0->f_5239));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5239[iVar0] = cParam1;
	uParam0->f_5239[iVar0]->f_2 = (uParam0->f_5239[iVar0]->f_2 || iParam2);
}

void func_421(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_851(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_852(&(uParam0->f_819));
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

void func_422(int iParam0, int iParam1)
{
	func_853(iParam0, iParam1);
}

void func_423(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_854((*uParam0)[iVar0]))
		{
			if (func_840((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_855((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_856((*uParam1)[iVar0]))
		{
			if (func_840((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_857((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_858((*uParam2)[iVar0]))
		{
			if (func_840((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_859((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_860((*uParam3)[iVar0]))
		{
			if (func_840((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_861((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		func_862(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_863((*uParam5)[iVar0]))
		{
			if (func_840((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_864((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_863((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_865((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_840((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_866((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_867((*uParam6)[iVar0]))
		{
			if (func_840((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_868((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_869((*uParam7)[iVar0]))
		{
			if (func_840((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_870((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_871((*uParam8)[iVar0]))
		{
			if (func_840((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_872((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_873((*uParam9)[iVar0]))
		{
			if (func_840((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_874((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_875((*uParam10)[iVar0]))
		{
			if (func_840((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_876((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_877((*uParam11)[iVar0]))
		{
			if (func_840((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_878((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_424(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (is_entity_dead(bParam1))
	{
		return;
	}
	if (func_879(uParam0, bParam1, sParam2))
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

struct<2> func_425()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_426(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_427(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_428(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_880(&(uParam0->f_7375), bParam1, sParam2, iParam3, iParam4, bParam5);
	func_382(&(uParam0->f_10792), bParam1, sParam2, bParam6);
}

bool func_429(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_881(uParam0->f_607)}, 3);
			if (func_882(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_883(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_884(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_430(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_863((*uParam0)[iVar0]))
		{
			if (func_840((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_885((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_886((*uParam0)[iVar0]))
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

int func_431(var uParam0)
{
	return uParam0->f_596;
}

bool func_432(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_470(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_887(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_433(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_888(uParam0))
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
				bVar12 = func_889(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(bVar12))
					{
						if (bVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_890(bVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_891(bVar12))
							{
								_0x0348469daa17576c(bVar12);
							}
							clear_ped_tasks_immediately(bVar12, false, true);
							_set_entity_coords_and_heading(bVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
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
		if (func_892(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			bVar13 = net_to_ped(iVar17);
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
		bVar13 = func_889(&iVar29, &Var18);
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
	if (does_entity_exist(bVar13))
	{
		uParam0->f_5411 = bVar13;
		uParam0->f_5412 = bVar13;
		func_893(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_891(bVar13) || func_894(Global_35, bVar13, 1, 1) > 200f) && !func_399(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(bVar13, false);
						func_442(bVar13, vVar14, fParam5, 2, 1073741824);
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

void func_434(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_895(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_896(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_435(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_897(uParam0);
			if (func_898(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_899(uParam0, 2097152);
				func_268(uParam0, 16384);
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
			func_897(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_900(uParam0, Var0))
			{
				if (func_431(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_431(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_436(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_437(var uParam0)
{
	iVar0 = 1;
	if (!func_901(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_432(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_433(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_881(uParam0->f_607)}, 3);
		if (func_902(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_903(&(uParam0->f_13115)) < 30f)
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

bool func_438(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_903(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_904()) && func_903(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_268(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_905(0, 0);
		func_268(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_439(var uParam0)
{
	if (!func_906())
	{
		return false;
	}
	if (!func_907(uParam0))
	{
		return false;
	}
	if (!func_908(uParam0))
	{
		return false;
	}
	if (!func_909(uParam0))
	{
		return false;
	}
	func_910();
	func_911();
	_set_weather_type(821931868, true, true, true, 30f, false);
	func_912(-1015925347, 0, 0, 1103626240);
	func_914(uParam0, 149443);
	func_916(uParam0, 150173);
	func_183(1);
	if (func_33(uParam0) != 0)
	{
		func_917();
		func_918();
	}
	func_919(16);
	if (func_82(32768) && func_33(uParam0) == 0)
	{
		func_131(1912.383f, -1259.649f, 40.8064f, 90f, 1, 0, 0, 0, 0);
	}
	return true;
}

void func_440(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_441(var uParam0)
{
	func_920(uParam0);
	func_921(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_898(uParam0);
		}
	}
	func_922(uParam0);
	func_923(uParam0);
	func_924(uParam0);
	func_925(uParam0);
	func_926(uParam0);
	func_927(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_928(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_282(uParam0) == 0)
	{
		func_435(uParam0);
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
			if (func_929(uParam0, iVar0, 0))
			{
				if (func_930(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_930(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_930(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_383(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_931(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_932(uParam0);
					func_933(uParam0, iVar0, 1);
				}
				else
				{
					func_933(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_901(uParam0))
			{
				if (func_934(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_899(uParam0, 4);
					}
					func_933(uParam0, iVar0, 2);
				}
			}
			else if (func_935(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_899(uParam0, 4);
				}
				func_933(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_929(uParam0, iVar0, 2))
			{
				if (!func_936(uParam0))
				{
					func_933(uParam0, iVar0, 4);
					if (func_937(uParam0, iVar0, iVar1))
					{
						func_933(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_938(uParam0);
					func_933(uParam0, iVar0, 3);
					if (func_939(uParam0, iVar0))
					{
						func_933(uParam0, iVar0, 4);
						if (func_937(uParam0, iVar0, iVar1))
						{
							func_933(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_940(uParam0))
			{
				func_939(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_939(uParam0, iVar0))
			{
				func_933(uParam0, iVar0, 4);
				if (func_937(uParam0, iVar0, iVar1))
				{
					func_933(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_937(uParam0, iVar0, iVar1))
			{
				func_933(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_941(uParam0);
				func_942(uParam0, iVar0);
				func_943(uParam0);
				func_944(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_945(uParam0, iVar1))
					{
						func_946(uParam0, iVar1);
					}
				}
			}
			if (func_929(uParam0, iVar0, 5))
			{
				if (func_929(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_947(uParam0, func_33(uParam0));
					}
					func_948(uParam0, iVar1);
					func_921(uParam0);
					return true;
				}
				else
				{
					func_933(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_949(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_950(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_951("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_952(uParam0))
					{
						func_933(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_899(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_268(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_941(uParam0);
				func_942(uParam0, iVar0);
				func_943(uParam0);
				func_944(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_945(uParam0, func_35(uParam0)))
					{
						func_946(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_950(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_929(uParam0, iVar0, 5))
				{
					if (func_953(uParam0))
					{
						func_933(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_953(uParam0);
					func_933(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_929(uParam0, iVar0, 5);
				func_954(uParam0);
			}
			break;
		case 7:
			if (func_929(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_947(uParam0, func_33(uParam0));
				}
				func_948(uParam0, iVar1);
				func_921(uParam0);
				return true;
			}
			break;
		default:
			func_933(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_442(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (bParam0 == func_955(Global_35) && is_player_teleport_active())
	{
	}
	if (func_956(bParam0))
	{
		if (func_891(get_ped_index_from_entity_index(bParam0)))
		{
			_0x0348469daa17576c(bParam0);
		}
	}
	if (func_164(iParam5, 4) && is_entity_a_ped(bParam0))
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			bVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_442(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			bVar2 = get_mount(iVar1);
			if (does_entity_exist(bVar2) && !is_entity_dead(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_442(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_164(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(bParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(bParam0), false, true);
		}
	}
	if (func_164(iParam5, 2))
	{
		if (is_entity_a_vehicle(bParam0))
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_164(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_164(iParam5, 32), true);
			_0x9587913b9e772d29(bParam0, 0);
		}
	}
	else if (func_164(iParam5, 129))
	{
		if (func_164(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(bParam0, vParam1, func_164(iParam5, 32), true, true);
		set_entity_heading(bParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_164(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_164(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(bParam0), bVar3, 0, false);
		}
		if (func_956(bParam0))
		{
			bVar6 = get_ped_index_from_entity_index(bParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_164(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(bParam0), 1);
		if (get_ped_index_from_entity_index(bParam0) == Global_35 && !func_164(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_443(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_444(int iParam0)
{
	if (!func_957(iParam0))
	{
		return false;
	}
	if (!func_959(func_958(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_960(iParam0)))
	{
		return false;
	}
	_0x4f81ead1de8fa19b(func_960(iParam0));
	return true;
}

bool func_445(int iParam0)
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

int func_446(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_445(iParam0))
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

void func_447(int iParam0)
{
	func_961(iParam0, 8, 0);
}

bool func_448(var uParam0, bool bParam1)
{
	return func_452(uParam0, bParam1, &uVar0);
}

void func_449(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(bParam0);
	func_169(&iVar0);
}

void func_450(var uParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_452(uParam0, bParam1, &iVar0))
	{
		return;
	}
	func_962(uParam0->f_5423[iVar0], iParam2);
}

void func_451(var uParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_452(uParam0, bParam1, &iVar0))
	{
		return;
	}
	func_963(uParam0->f_5423[iVar0], iParam2);
}

bool func_452(var uParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_257(uParam0->f_5423[iVar0]))
		{
			if (&uParam0->f_5423[iVar0] == bParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_453(var uParam0)
{
	if (func_522(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_522(uParam0, 1024);
	if (func_522(uParam0, 128) || bVar0)
	{
		if (func_522(uParam0, 4096))
		{
			if (!func_522(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_963(uParam0, 2048);
				return;
			}
		}
		else if (func_522(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_962(uParam0, 2048);
		}
		if (func_522(uParam0, 512))
		{
			if (func_465(uParam0->f_10))
			{
				if (func_890(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_964(uParam0->f_10))
					{
						func_526(uParam0->f_10, 1);
						func_965(uParam0->f_10, 0);
					}
				}
				else if ((func_964(uParam0->f_10) && !bVar0) && !func_522(uParam0, 16384))
				{
					func_526(uParam0->f_10, 0);
					func_965(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_890(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_890(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_522(uParam0, 512))
	{
		if (func_465(uParam0->f_10))
		{
			if (func_964(uParam0->f_10))
			{
				func_526(uParam0->f_10, 0);
				func_965(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_454(int iParam0)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_967(iParam0, 36, 1))
	{
		func_469(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_968(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_455(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0]->f_5 && iParam1) > 0;
}

void func_456(int iParam0)
{
	func_458(iParam0, 1);
	func_458(iParam0, 128);
	func_458(iParam0, 256);
	func_458(iParam0, 512);
	func_458(iParam0, 1024);
	func_458(iParam0, 2048);
	func_458(iParam0, 4096);
	func_458(iParam0, 65536);
	func_458(iParam0, 16384);
	func_458(iParam0, 262144);
	func_458(iParam0, 524288);
	func_458(iParam0, 1048576);
	func_458(iParam0, 2097152);
	func_458(iParam0, 32768);
	func_458(iParam0, 131072);
	func_458(iParam0, 134217728);
	func_458(iParam0, 1073741824);
}

void func_457(int iParam0, bool bParam1)
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

void func_458(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_459(int iParam0, int iParam1)
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

bool func_460(int iParam0, int iParam1)
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

void func_461(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_462(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_460(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_460(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_460(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_460(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_460(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_460(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_460(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_460(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_460(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_460(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_460(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_460(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_460(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_460(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_460(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_460(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_460(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_460(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_460(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_460(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_460(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_460(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_460(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_460(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_460(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_460(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

bool func_463(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_464()
{
	return get_player_group(get_player_index());
}

bool func_465(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_466(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_465(iParam0))
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
		_0xd747979c053efa7a(func_464());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_969(iParam0, 0, 0);
}

int func_467(bool bParam0)
{
	if (bParam0)
	{
		return func_970(Global_1359489->f_4);
	}
	get_group_size(func_464(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_464(), iVar3);
		if (func_445(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_468()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_971(iVar0);
		iVar2 = func_971(iVar0 + 1);
		if (!func_465(iVar1))
		{
			if (func_465(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_469(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
		{
			return;
		}
	}
	func_972(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_470(int iParam0)
{
	if (!func_192(iParam0))
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

void func_471(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_472(var uParam0)
{
	return uParam0->f_503 > 0;
}

void func_473(var uParam0)
{
	if (uParam0->f_503 <= 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0->f_503)
	{
		if (does_blip_exist(&(uParam0->f_2[iVar0])))
		{
			func_169(uParam0->f_2[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_503 = 0;
}

int func_474(int iParam0, bool bParam1, bool bParam2)
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

bool func_475(int iParam0)
{
	if (func_973(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_476(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_475(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_477(int iParam0, bool bParam1)
{
	if (func_475(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_478(int iParam0, bool bParam1)
{
	if (func_475(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_479(int iParam0, bool bParam1)
{
	if (func_475(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_480()
{
	return true;
}

void func_481(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_270(iParam0, 64);
	func_271();
}

void func_482(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_974(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_975(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_976();
		}
		else
		{
			func_977(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_978();
	}
}

bool func_483(int iParam0)
{
	return func_979(iParam0, 2);
}

int func_484(int iParam0)
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

int func_485(int iParam0)
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

int func_486(int iParam0)
{
	return iParam0 & 31;
}

bool func_487()
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

int func_488(int iParam0)
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

int func_489(int iParam0)
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

void func_490(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_491()
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

int func_492(int iParam0)
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

void func_493(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_494(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_980(iParam0);
	}
	else
	{
		func_981(iParam0, iParam1);
	}
	func_982();
}

bool func_495(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_496(int iParam0)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	switch (func_198(iParam0))
	{
		case 1:
			switch (func_275(iParam0))
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
			switch (func_275(iParam0))
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

void func_497(int iParam0)
{
	iVar2 = func_172(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_985(func_984(iParam0), 6);
}

void func_498(int iParam0)
{
	iVar2 = func_172(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_986(func_984(iParam0), 6);
}

int func_499(int iParam0)
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

int func_500(int iParam0)
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
	func_987(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_501(int iParam0)
{
	return iParam0 != 0;
}

bool func_502(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_503(int iParam0, var uParam1)
{
	if (!func_502(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_988(iParam0, *uParam1, 0);
	func_989(uParam1);
	Global_1935183->f_24 = 1;
}

void func_504(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_505(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_556() - fParam1);
	func_990(uParam0, 1);
	func_991(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_506(var uParam0)
{
	return func_222(*uParam0, 2);
}

int func_507()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_508(bool bParam0)
{
	if (func_992())
	{
		Global_1357509 = 1;
	}
	if (func_993(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_509(int iParam0, int iParam1)
{
	Var0 = { func_809(iParam0, iParam1) };
	Var0.f_3 = func_994(iParam0, iParam1);
	return Var0;
}

int func_510(int iParam0)
{
	if (func_198(iParam0) == 1)
	{
		return func_275(iParam0);
	}
	return -1;
}

int func_511(int iParam0)
{
	if (func_198(iParam0) == 8)
	{
		return func_275(iParam0);
	}
	return -1;
}

char[] func_512(int iParam0)
{
	if (!func_276(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_513(int iParam0, bool bParam1)
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
		func_995(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_288();
	}
}

void func_514(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_375(vParam1, 1);
}

bool func_515(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_516(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_517(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_518(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_519(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_520(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_521()
{
	return Global_1109400->f_245;
}

bool func_522(var uParam0, int iParam1)
{
	return func_164(uParam0->f_64, iParam1);
}

bool func_523(int iParam0)
{
	return func_716(iParam0, 16, 1);
}

void func_524(var uParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_452(uParam0, bParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(bParam1) && func_996(uParam0, get_object_index_from_entity_index(bParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(bParam1));
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

void func_525(bool bParam0)
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

void func_526(int iParam0, bool bParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_997(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_961(iParam0, 1, 0);
		}
	}
	func_961(iParam0, 16, bParam1);
}

void func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_523(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_998(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_526(iParam0, 0);
	func_961(iParam0, 4, 0);
	func_447(iParam0);
	func_999(iParam0);
	func_469(iParam0, 37, 1);
	bVar0 = func_163(Global_1360165[iParam0], 0);
	iVar1 = func_1000(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_967(iParam0, 64, 1))
	{
		func_469(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_469(iParam0, 33, 1);
		func_469(iParam0, 34, 1);
		func_1001(iParam0, 1056964608, -1, 1061158912);
		func_1002(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_998(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_998(iParam0, 35, 1);
			if (bParam8)
			{
				func_998(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1003(iParam0, 0);
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
		func_469(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_998(iParam0, 33, 1);
		func_1002(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_558(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_998(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1004(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_967(iParam0, 45, 1))
	{
		func_469(iParam0, 45, 1);
	}
	func_1005(iParam0, 16, 1);
	func_469(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_163(func_1006(iParam0), 0))
		{
			func_1007(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_528(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_535(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_535(iParam0);
	}
}

bool func_529(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_530(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_531(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_532(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return false;
	}
	if (!func_334())
	{
		return true;
	}
	return false;
}

void func_533(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_536(iParam0))
	{
		return;
	}
	bVar0 = func_218(iParam0);
	func_1009(iParam0);
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	iVar1 = get_entity_model(bVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_532(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&bVar0);
	func_1010(iParam0, 0);
	func_535(iParam0);
}

bool func_534(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_264(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_535(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_536(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_537(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	bVar0 = func_218(iParam0);
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
	if (func_1011(iParam0, 64))
	{
		func_530(iParam0);
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
	bVar3 = func_605(42);
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
				func_1012(&((*Global_1900383)[iParam0]->f_27));
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
		func_530(iParam0);
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
		if (func_1013(1) < 1)
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
		func_1014(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1011(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(bVar0);
	bVar10 = false;
	iVar11 = func_1015(iParam0);
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
	fVar15 = func_1016(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1017(iParam0))
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
		func_1018((*Global_1900383)[iParam0]->f_26);
		func_1019((*Global_1900383)[iParam0]->f_26);
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
	if (func_891(bVar0) && !bVar9)
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
	iVar21 = func_1013(iParam0);
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

int func_538(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_539(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_540(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_541(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_542(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_543(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_536(iParam0))
	{
		return false;
	}
	iVar0 = func_218(iParam0);
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

void func_544(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_536(iParam0))
	{
		return;
	}
	iVar0 = func_218(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_545(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_713(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_546(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1020())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_713(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1021(iVar0);
			func_1022(iVar0, 0, 0);
		}
		func_713(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_547(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 67108864);
}

void func_548(int iParam0)
{
	StringCopy(&cVar0, func_1023(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1024(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_549(int iParam0)
{
	StringCopy(&cVar0, func_1023(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1024(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_550(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_551(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_552(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_553(int iParam0)
{
	if (!func_518(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_554(int iParam0)
{
	if (func_518(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_555(int iParam0)
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

float func_556()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_557(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1025(iParam0) == 1 && bParam7)
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

void func_558(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_559(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1026(iParam0);
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

int func_560(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_573(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_561(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_562(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_563()
{
	return Global_40.f_11095.f_35;
}

void func_564(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1027(iParam0, 0);
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
		func_565(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_565(int iParam0)
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
			func_1027(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1028(1);
	}
}

bool func_566(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_567()
{
	iVar0 = func_1029((*Global_1347702)[9]->f_15);
	iVar1 = func_1029((*Global_1835011)[69]->f_1);
	if (func_1030(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_568(int iParam0)
{
	if (!func_192(iParam0))
	{
		return false;
	}
	return func_330((*Global_1835011)[iParam0]->f_1, 1);
}

int func_569(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1031(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1032(iVar6);
	}
	return iVar5;
}

int func_570(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1033(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_571(int iParam0, bool bParam1)
{
	func_1034(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_572(int iParam0)
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

void func_573(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_571(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_574(2, *uParam0);
		}
		else
		{
			func_575(2, *uParam0);
		}
	}
	func_1035(uParam0);
}

void func_574(int iParam0, int iParam1)
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

void func_575(int iParam0, int iParam1)
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

void func_576(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1036(iParam0, iParam1, bParam2);
}

int func_577(int iParam0)
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

int func_578(int iParam0)
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

void func_579(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1037();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1038(iParam0);
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
	if (func_605(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1039())
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
	Global_40.f_11095.f_35 = func_312(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1037();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1040(iVar1);
		func_1042(func_1041(), 0, 4000);
		func_1043(Global_40.f_11095.f_35);
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
		func_1044(0);
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
				if (iParam0 > func_578(14))
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
					sParam4 = func_1045(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_713(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_713(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_578(4))
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
					sParam4 = func_1045(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_713(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_713(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_365(10, 1);
	}
}

void func_580(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_581(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_582(int iParam0)
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

bool func_583(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_584(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1046(iParam0) && func_1047(iParam0))
		{
			func_1048(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_585(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1049(iParam0, iParam1);
	Var0 = { func_694(iParam0, 0, 1) };
	iVar5 = func_1050(iParam0, &Var0, 0, 0);
	iVar6 = func_1051(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_603(iParam0, -2051813666))
		{
			func_328(583, 1);
		}
		else
		{
			func_328(582, 0);
		}
	}
	if (func_1052(iParam0, &Var0, *iParam1, 0, 0))
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

void func_586(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_664(iParam0, -949239683))
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

int func_587(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1053(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1054(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_172(bParam2), iParam0, 0);
	return iVar2;
}

bool func_588(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_589(iParam0) != 0;
}

int func_589(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1055())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1056(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_590(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_591(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1055())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_590(iVar0))
		{
			if (func_350(func_1056(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_592(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1057(48);
	func_370(0, -1);
}

bool func_593(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_330((*Global_1347702)[iParam0]->f_15, 1);
}

int func_594(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_595(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_330((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_597(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_276(iParam0))
	{
		return false;
	}
	return func_194((*Global_1347702)[iParam0]->f_15);
}

int func_598()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_350(func_1058(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_599(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_398() && (func_597(38) || func_593(38)))
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
			if (func_398() && (func_597(39) || func_593(39)))
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
			iVar9 = func_1059(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_398() && (func_597(41) || func_593(41)))
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
			if (func_398() && (func_597(49) || func_593(49)))
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
			iVar9 = func_1059(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1060(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1061(iParam0, iVar13, iVar14))
	{
	}
	if (func_1062(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1063(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1064(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1065(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1066(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_600(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_601(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_398() && (func_597(38) || func_593(38)))
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
			if (func_398() && (func_597(39) || func_593(39)))
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
			if (func_398() && (func_597(49) || func_593(49)))
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
		if (func_398() && (func_597(38) || func_593(38)))
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
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_720(_create_var_string(2, sVar0), _create_var_string(2, func_1068(func_595(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_398() && (func_597(39) || func_593(39)))
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
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_398() && (func_597(49) || func_593(49)))
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
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1067(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_602(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_603(int iParam0, int iParam1)
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

bool func_604(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_605(int iParam0)
{
	if (!func_1069(iParam0))
	{
		return false;
	}
	return func_1070(iParam0);
}

void func_606(int iParam0)
{
	if (!func_1069(iParam0))
	{
		return;
	}
	func_1071(iParam0);
	func_1072(iParam0);
}

int func_607(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_608(int iParam0, bool bParam1)
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
	if (func_583(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1073(iVar0) || func_122(iVar0))
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

int func_609(int iParam0, bool bParam1)
{
	if (!func_583(iParam0, 0))
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

void func_610(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_697(iParam0))
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

bool func_611(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_172(bParam0));
}

bool func_612(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_694(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1074((386 + iVar28), 1);
			if (func_1075(iParam0, &Var0, iVar5, 0))
			{
				if (func_1076(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1077(iParam0, Var0, iVar5, 0) };
					func_1078(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_611(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_613(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1079(iParam0, iParam1);
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

bool func_613(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_615(iParam0))
	{
		return false;
	}
	if (!func_611(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_614(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_609(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_610(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1080(iVar0);
			}
		}
		if (!func_1052(iParam0, &uVar1, 1, 0, 0))
		{
			func_1048(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1081(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_612(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_612(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_612(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1039())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1082(iVar0))
				{
					func_612(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_612(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1083(Global_35, 2, 0, 1);
				if ((((func_697(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_605(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_697(iVar7) && func_605(24))
				{
					if (!func_612(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_612(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_612(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_328(480, 1);
	}
	return true;
}

bool func_615(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_616(int iParam0, int iParam1, int iParam2)
{
	if (!func_615(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_697(iVar4))
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
	if (func_350(611073244, 1, 0) && iParam2 == -897553835)
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
		func_651(func_1084(iParam0), func_650(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_330((*Global_1835011)[14]->f_1, 1))
			{
				func_328(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_611(0))
	{
		if (func_613(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_656(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_617(int iParam0)
{
	if ((iParam0 == -615217896 && !func_341()) || iParam0 != -615217896)
	{
		if (func_1085(Global_35, iParam0, &uVar0))
		{
			func_635(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_641();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_641();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_641();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_639();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_637();
			break;
	}
}

void func_618(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_637();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_638();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_639();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_640();
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
			func_641();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1086();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1087();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_619(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_620(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_621(int iParam0)
{
	bVar0 = func_603(iParam0, -2017733358);
	if (func_1088() < 3)
	{
		if (bVar0)
		{
			if (func_1090(func_1089(iParam0), iParam0))
			{
				func_651(79, func_650(func_1089(iParam0)), 1);
			}
			else
			{
				func_651(78, func_650(func_1089(iParam0)), 1);
			}
		}
		else
		{
			func_651(80, func_650(func_1091(iParam0)), 1);
		}
	}
}

bool func_622()
{
	if (((((func_1092(839908568, 400) || func_1092(-1134030454, 400)) || func_1092(623353496, 400)) || func_1092(-344413337, 400)) || func_1092(-1664948962, 400)) || func_1092(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_623(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_731(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_545(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_546(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_624(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_599(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_601(51, 0, 0, 0, 0, -1, 0);
			func_1093(8192);
			break;
		case 581047644:
			func_599(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_601(51, 0, 0, 0, 0, -1, 0);
			func_1093(524288);
			break;
		case -644199619:
			func_599(39, 0, 0, 0, 0, 0, 1, 0);
			func_601(39, 0, 0, 0, 0, -1, 0);
			func_1094(16);
			break;
		case 684296857:
			func_599(41, 0, 0, 0, 0, 0, 1, 0);
			func_601(41, 0, 0, 0, 0, -1, 0);
			func_1095(8);
			break;
		case 466137807:
			func_599(49, 0, 0, 0, 0, 0, 1, 0);
			func_601(49, 0, 0, 0, 0, -1, 0);
			func_1096(16);
			break;
		case -1087522507:
			func_599(43, 0, 0, -1791518714, func_1097(1), 0, -1, 0);
			func_1098(1);
			break;
		case -405829000:
			func_599(43, 0, 0, -2087881550, func_1097(2), 0, -1, 0);
			func_1098(2);
			break;
		case 378660860:
			func_599(43, 0, 0, 1908068621, func_1097(4), 0, -1, 0);
			func_1098(4);
			break;
		case 1566111097:
			func_599(43, 0, 0, 1611247019, func_1097(8), 0, -1, 0);
			func_1098(8);
			break;
		case 1276007140:
			func_599(43, 0, 0, 1319635688, func_1097(16), 0, -1, 0);
			func_1098(16);
			break;
	}
}

void func_625(int iParam0)
{
	if (func_1099() == 1)
	{
		if (func_593(39))
		{
			func_328(342, 0);
		}
		else
		{
			func_328(343, 0);
			func_1094(1);
		}
	}
	if (func_1099() >= 30)
	{
		func_328(344, 0);
	}
	func_599(39, 0, 0, 0, 0, 0, -1, 0);
	func_601(39, 0, 0, func_1099(), 30, 1, 0);
}

void func_626(int iParam0)
{
	if (func_1100() == 1)
	{
		if (func_593(49))
		{
			func_328(409, 0);
		}
		else
		{
			func_328(410, 0);
			func_1096(1);
		}
	}
	if (func_1100() >= 10)
	{
		func_328(411, 0);
	}
	func_599(49, 0, 0, 0, 0, 0, -1, 0);
	func_601(49, 0, 0, func_1100(), 10, 1, 0);
}

void func_627(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_328(437, 0);
			func_328(440, 0);
			func_1101(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1059(-949689219, 20), 1, 0);
			func_1093(1);
			func_1102(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1101(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1059(-1248968496, 20), 1, 0);
			func_1093(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1101(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1059(1706369307, 20), 1, 0);
			func_1093(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1101(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1059(1520110311, 20), 1, 0);
			func_1093(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_328(438, 0);
			func_1101(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1059(-1992824800, 20), 1, 0);
			func_1093(32768);
			break;
		default:
			func_328(439, 0);
			break;
	}
}

void func_628()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_629(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_593(43))
		{
			if (iParam0 == 281887510)
			{
				func_328(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_328(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_328(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_328(400, 0);
			}
		}
		else if (func_603(iParam0, 412399755))
		{
			func_1103(-1791518714);
			if (func_1104() == 0)
			{
				func_370(0, 10);
				iVar1 = func_1105(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_593(44))
		{
			if (iParam0 == -222563712)
			{
				func_328(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_328(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_328(401, 0);
			}
		}
		else if (func_603(iParam0, 709057512))
		{
			func_1103(-2087881550);
			if (func_1104() == 1)
			{
				func_370(0, 10);
				iVar1 = func_1105(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_593(45))
		{
			if (iParam0 == 2116770557)
			{
				func_328(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_328(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_328(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_328(398, 0);
			}
		}
		else if (func_603(iParam0, -1478961327))
		{
			func_1103(1908068621);
			if (func_1104() == 2)
			{
				func_370(0, 10);
				iVar1 = func_1105(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1108(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1109(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1057(48);
					}
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_593(46))
		{
			if (iParam0 == 2085530337)
			{
				func_328(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_328(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_328(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_328(406, 0);
			}
		}
		else if (func_603(iParam0, -1238404098))
		{
			func_1103(1611247019);
			if (func_1104() == 3)
			{
				func_370(0, 10);
				iVar1 = func_1105(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_593(47))
		{
			if (iParam0 == -1521783510)
			{
				func_328(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_328(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_328(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_328(403, 0);
			}
		}
		else if (func_603(iParam0, 1160548794))
		{
			func_1103(1319635688);
			if (func_1104() == 4)
			{
				func_370(0, 10);
				iVar1 = func_1105(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1106(iParam0) < func_1107(iParam0))
					{
						func_599(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_630(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1108(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1109(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1057(48);
		}
	}
}

void func_631(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_350(func_1110(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1111(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1112(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_632(int iParam0, int iParam1, int iParam2)
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
				func_623(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_623(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_623(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_623(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_623(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_623(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_623(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_623(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_623(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_623(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_623(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_623(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_623(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1113())
			{
				func_623(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_623(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_623(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_623(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_623(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_623(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_623(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_623(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_623(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_623(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_623(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_623(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_623(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_633(int iParam0)
{
	if (func_593(41))
	{
		func_328(363, 0);
	}
	else
	{
		func_328(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1114(-1865241121);
			func_1115(-642026005);
			func_1116(-642026005);
			func_370(0, 10);
			break;
		case -2108314374:
			func_1114(2117142684);
			func_1115(-940584364);
			func_1116(-940584364);
			func_370(0, 10);
			break;
		case -1193798153:
			func_1114(-1409326024);
			func_1115(1972645282);
			func_1116(1972645282);
			func_370(0, 10);
			break;
		case -787702678:
			func_1114(-641744968);
			func_1115(1667205433);
			func_1116(1667205433);
			func_370(0, 10);
			break;
		case -804542901:
			func_1114(-946988203);
			func_1115(1362715885);
			func_1116(1362715885);
			func_370(0, 10);
			break;
		case -1696275132:
			func_1114(-646136018);
			func_1115(1053540370);
			func_1116(1053540370);
			func_370(0, 10);
			break;
		case -161595323:
			func_1114(-955835837);
			func_1115(-1100103852);
			func_1116(-1100103852);
			func_370(0, 10);
			break;
		case -1114363619:
			func_1114(-179276075);
			func_1115(-1409869209);
			func_1116(-1409869209);
			func_370(0, 10);
			break;
		case -368407134:
			func_1114(-492711560);
			func_1115(-1760235357);
			func_1116(-1760235357);
			func_370(0, 10);
			break;
		case 1997759228:
			func_1114(1764383959);
			func_1115(-138366827);
			func_1116(-138366827);
			func_370(0, 10);
			break;
		case 1265573293:
			func_1114(317501533);
			func_1115(-1261163843);
			func_1116(-1261163843);
			func_370(0, 10);
			break;
		case -1030441283:
			func_1114(817753087);
			func_1115(-963523016);
			func_1116(-963523016);
			func_370(0, 10);
			break;
		case -1490884871:
			func_1114(576606016);
			func_1115(560825326);
			func_1116(560825326);
			func_370(0, 10);
			break;
		case -395458616:
			func_1114(814934957);
			func_1115(858269539);
			func_1116(858269539);
			break;
	}
}

void func_634(int iParam0, int iParam1)
{
	func_1117(iParam0, iParam1, &uVar0);
}

int func_635(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_694(iParam1, 1, 0) };
		iParam3 = func_695(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1118(iParam1, iParam2, func_682(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1119(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_682(iParam3, 1)])
			{
				func_693(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1120(32768) && iParam1 != &Global_1946804->f_57[func_682(iParam3, 1)])
			{
				func_1121();
				func_693(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_693(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1122(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_693(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1123(0);
			func_1124(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_693(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_636(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1083(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1083(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1125("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1126(&Var3, iVar2, iVar0, iVar1))
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
						func_1127(iVar0);
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

void func_637()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_638()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_639()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_640()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_641()
{
	func_1128();
	func_1129();
	func_1130();
}

void func_642(int iParam0, int iParam1, bool bParam2)
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

void func_643(int iParam0, bool bParam1)
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
	func_1067(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_644(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_645(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_646(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_647(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_648(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_649(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_650(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_651(int iParam0, int iParam1, bool bParam2)
{
	func_689(iParam0, &iVar0, &iVar1);
	if (!func_690(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1131(iParam0, 1024))
	{
		return;
	}
	func_691(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_652(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_689(iParam0, &iVar0, &iVar1);
	if (!func_690(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1131(iParam0, 1024))
	{
		return;
	}
	func_691(iVar0, iVar1);
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

int func_653()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1055())
	{
		return func_654();
	}
	iVar4 = (func_1055() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1055())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1132(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1056(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_654()
{
	iVar0 = get_random_int_in_range(0, func_1055());
	return func_1056(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_655(int iParam0)
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

bool func_656(int iParam0, int iParam1, int iParam2)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_694(iParam0, 0, 1) };
	Var5 = { func_1077(iParam0, Var0, Var0.f_4, 0) };
	return func_1133(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_657(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_607(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1134(81053684, 0) <= 0)
			{
				func_693(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_693(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1135(iParam0);
			if (func_1136(iVar0))
			{
				func_1137(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_693(30, iParam0, 0, 0, 0);
			}
			if (func_684() == -2125499975 || func_684() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_693(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_684() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_693(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1138(-525676072, 0))
			{
				if (func_1139(-525676072, &iVar1))
				{
					func_693(33, iVar1, 0, 0, 0);
				}
			}
			func_693(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1140(99217379))
		{
			func_635(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_606(24);
		if (func_636(&iVar2, 0))
		{
			func_612(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_658(int iParam0)
{
	if (func_603(iParam0, 943695443))
	{
		func_1141(0, iParam0);
	}
	else if (func_603(iParam0, -2096528786))
	{
		func_1141(1, iParam0);
	}
	else if (func_603(iParam0, -1094167013))
	{
		func_1141(2, iParam0);
	}
	else if (func_603(iParam0, 1936654645))
	{
		func_1141(3, iParam0);
	}
	else if (func_603(iParam0, 1306489306))
	{
		func_1141(4, iParam0);
	}
	else if (func_603(iParam0, 435762317))
	{
		func_1141(5, iParam0);
	}
	else if (func_603(iParam0, 1259363210))
	{
		func_1141(6, iParam0);
	}
	else if (func_603(iParam0, 881398259))
	{
		func_1141(7, iParam0);
	}
	else if (func_603(iParam0, -541549214))
	{
		func_1141(8, iParam0);
	}
	else if (func_603(iParam0, 130796156))
	{
		func_1141(-1, iParam0);
	}
}

int func_659(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1142(&Var4, 1356624740);
	return func_1143(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_660(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return Var0;
	}
	if (func_603(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_603(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_603(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_603(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_661(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_330((*Global_1835011)[4]->f_1, 1))
				{
					func_328(109, 1);
				}
			}
			break;
	}
}

void func_662(int iParam0, char* sParam1)
{
	sVar0 = func_1145(func_1144(0));
	func_713(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1146(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_663(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_583(iParam0, 0))
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
	if (!func_1147())
	{
		func_1148(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1149(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1149(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_604(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_602(iParam0);
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
	else if (!func_1150(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1151(_create_var_string(10, &cVar2, _create_var_string(0, func_650(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_603(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_650(iParam0));
	}
	func_713(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_664(int iParam0, int iParam1)
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

struct<10> func_665(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_666(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_667(int iParam0, int iParam1)
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

bool func_668(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1152(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1152(iParam0, Var2, 1))
				{
					if (func_1153(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1153(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_328(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_200(0, 0, 1))
		{
			func_370(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_669(int iParam0)
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

void func_670(int iParam0)
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
		func_328(iVar0, 0);
	}
}

void func_671()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1154(0);
			_unlock_set_unlocked(-121456797, false);
			func_1155();
		}
		return;
	}
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1156();
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
	func_1154(1);
}

void func_672()
{
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_321(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_673()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1157(0);
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
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1157(1);
}

void func_674()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1158(15000, 0, 0, 0, 1);
			func_1157(0);
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
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_286(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1157(1);
}

void func_675()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_350(1191437462, 1, 0) && !func_194((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_321(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1159(1))
			{
				func_647(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_350(1119149048, 1, 0) && !func_194((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_321(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1159(2))
			{
				func_647(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1159(4))
		{
			func_647(4);
		}
		if (func_1159(0))
		{
			func_1160(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_350(1191437462, 1, 0))
			{
				func_678(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_350(1119149048, 1, 0))
			{
				func_678(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1159(1))
		{
			func_1160(1);
		}
		if (func_1159(2))
		{
			func_1160(2);
		}
		if (func_1159(4))
		{
			func_1160(4);
		}
		if (!func_1159(0))
		{
			func_647(0);
		}
	}
}

void func_676()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1161() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_610(127400949);
		if (func_612(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1161() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1162(-2055673461, Var1, 1423542233);
		func_1162(-202131179, Var1, -1264898804);
		func_1162(2013836545, Var1, 1592019450);
		func_1162(1497476650, Var1, 1117400455);
		func_1162(1063571467, Var1, 1150213537);
		func_1162(2107224237, Var1, 1598825281);
		func_1162(1747981656, Var1, -712527121);
		func_1162(-1371140647, Var1, 454332195);
		func_1162(-19142973, Var1, 256105670);
		func_1162(-2074737817, Var1, -1328061889);
		func_1162(-1114256243, Var1, -782241404);
		func_1162(-1653277288, Var1, 1669853467);
		func_1162(1869398132, Var1, -1559225678);
		func_1162(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_697(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_605(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_605(24) && func_697(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_697(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_605(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_677()
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

int func_678(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1053(iParam0, 1);
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
			func_663(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_350(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_660(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_587(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_587(iParam0, 0, 0) - iParam1) < 0)
		{
			func_678(iParam0, func_587(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_602(iParam0) == -427144552)
	{
		if (!func_1163(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1164(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_611(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_663(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1165(iParam0, iParam1);
	return 1;
}

bool func_679(int iParam0)
{
	switch (func_607(iParam0))
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

void func_680(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_607(iParam0))
	{
		case -2061583405:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1167();
	}
	if (bParam1)
	{
		func_1168(0, 0);
	}
}

int func_681(int iParam0)
{
	Var0 = { func_694(iParam0, 1, 0) };
	return func_695(Var0.f_4);
}

int func_682(int iParam0, int iParam1)
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

void func_683(int iParam0)
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
		iVar0 = func_682(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1169(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_684()
{
	return Global_1946804->f_1;
}

bool func_685(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1170(iParam6);
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
		func_1172(uParam0, func_1171(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_682(iVar3, 1);
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
							if (func_1173(iVar3) && func_1174(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1175(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_686(int iParam0, int iParam1)
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

int func_687(int iParam0, int iParam1)
{
	vVar0 = { func_686(iParam0, iParam1) };
	return vVar0.x;
}

void func_688(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_689(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_690(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1176(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1177(iParam0))
	{
		return false;
	}
	if (func_1178(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1131(iParam0, 1)) || func_82(32768))
	{
		if (!func_1131(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1179())
	{
		return false;
	}
	return true;
}

void func_691(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_692(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_693(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1180(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1181(Var0);
}

struct<5> func_694(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1182(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_602(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1077(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1183(bParam1) };
			if (bParam2 && func_1184(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1075(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1075(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1076(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1185(bParam1) };
			switch (func_607(iParam0))
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
			if (func_1186(iParam0, -1823706425))
			{
				Var0 = { func_1077(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1186(iParam0, -1483207246))
			{
				Var0 = { func_1077(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1187(Var0, &Var27, bParam1, 0))
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

int func_695(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1188(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_696(int iParam0)
{
	func_1169(Global_1946804->f_1497.f_1[func_682(iParam0, 1)], 2, 6);
	func_1169(Global_1946804->f_1378.f_1[func_682(iParam0, 1)], 2, 6);
}

bool func_697(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_698(int iParam0)
{
	return iParam0 != 0;
}

int func_699(int iParam0)
{
	iVar0 = -1;
	if (!func_698(iParam0))
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

bool func_700(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_701(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1189(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_702(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_703(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_704(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_705(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_706(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_707(int iParam0, int iParam1)
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

void func_708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1190(iParam0, iParam6);
	func_1191(iParam0, iParam5);
	func_1192(iParam0, iParam4);
	func_1193(iParam0, iParam3);
	func_1194(iParam0, iParam2);
	func_1195(iParam0, iParam1);
}

bool func_709(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_706(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_705(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_704(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_701(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_702(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_703(iParam0);
	if (iVar5 < 1 || iVar5 > func_707(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_710(int iParam0, bool bParam1)
{
	return func_1030(func_288(), iParam0, bParam1);
}

void func_711(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_712(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1053(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1125("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1126(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_697(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1127(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1127(iVar1);
	}
	return false;
}

var func_713(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1196(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_714()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1197(iVar1);
		if (!_unlock_is_visible(func_1198(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_715()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1197(iVar0);
		if (!_unlock_is_visible(func_1198(iVar1)))
		{
			_unlock_set_visible(func_1198(iVar1), true);
		}
		iVar0++;
	}
}

bool func_716(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_717(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_465(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_718()
{
	return (func_201(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_719(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_583(iVar0, 0))
	{
		return 0;
	}
	if (!func_1199(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1200(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_603(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_694(iVar0, 0, 1) };
	iVar10 = func_1201(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1202(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1203(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_321(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1158(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_720(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_721(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_713(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_722(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_723(bool bParam0, bool bParam1)
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

void func_724(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1020())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1020())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_196(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_275(iParam0);
	if (func_198(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_198(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1204(1, iVar1);
					func_1204(8, iVar1);
					func_1204(7, iVar1);
					break;
				case 12:
					func_1204(6, iVar1);
					break;
				case 53:
					func_1204(3, iVar1);
					func_1204(7, iVar1);
					func_1204(4, iVar1);
					break;
				case 20:
					func_1204(8, iVar1);
					break;
				case 19:
					func_1204(1, iVar1);
					func_1204(2, iVar1);
					break;
				case 24:
					func_1204(3, iVar1);
					func_1204(9, iVar1);
					func_1204(20, iVar1);
					break;
				case 28:
					func_1204(1, iVar1);
					break;
				case 34:
					func_1204(23, iVar1);
					func_1204(2, iVar1);
					func_1204(18, iVar1);
					break;
				case 29:
					func_1204(0, iVar1);
					func_1204(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1204(0, iVar1);
					func_1204(3, iVar1);
					func_1204(2, iVar1);
					func_1204(11, iVar1);
					func_1204(6, iVar1);
					func_1204(25, iVar1);
					func_1204(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1204(5, iVar1);
					break;
				case 63:
					func_1204(1, iVar1);
					func_1204(3, iVar1);
					break;
				case 37:
					func_1204(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_366(0, 10, 11, 2116153146))
			{
				func_1204(7, iVar1);
				func_1204(4, iVar1);
			}
			else if (iParam0 == func_366(0, 7, 11, -379687487))
			{
				func_1204(8, iVar1);
				func_1204(15, iVar1);
			}
			else if (iParam0 == func_366(0, 8, 11, -1386089015))
			{
				func_1204(3, iVar1);
			}
			else if (iParam0 == func_366(0, 11, 11, -1952009645))
			{
				func_1204(6, iVar1);
				func_1204(3, iVar1);
			}
			else if (iParam0 == func_366(0, 12, 11, 2065895756))
			{
				func_1204(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1205()));
	if (!func_1206(629))
	{
		func_328(629, 0);
	}
}

int func_725(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_726(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_727(int iParam0, int iParam1, int iParam2)
{
	if (!func_726(iParam0))
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

int func_728()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_729(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_730(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1207(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_728())
	{
		return -1;
	}
	iVar0 = func_729(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_494(iVar1, 0);
	func_562(iVar1, 0);
	func_1208(iVar1, 0);
	func_1209(iVar1, 0);
	func_1210(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1211(iVar1, iParam4);
	}
	return iVar1;
}

int func_731(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_350(1811977508, 1, 0))
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
			if (func_583(iVar25, 0) && func_603(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_732(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_733(int iParam0)
{
	if (!func_193(iParam0))
	{
		return 0;
	}
	cVar0 = func_368(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_734(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_735(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1212(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1213() == 0 && !func_1214(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1215(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1216();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1217(Global_1310720->f_21))
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
			vVar7 = { func_1218(iVar0, iVar1) };
			bVar11 = func_1219(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_399(vVar7)) && func_1220(iVar0, bParam8, iParam12)) && !func_1221(iVar0)) || bVar11)
			{
				if (func_1222(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_736(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1223(vParam0);
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

void func_737()
{
	disable_script_brain_set(1);
}

void func_738()
{
}

void func_739()
{
	disable_script_brain_set(2);
}

bool func_740(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_741(char* sParam0)
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

void func_742(int iParam0)
{
	if (func_740(iParam0, 1))
	{
		func_1224(1);
	}
}

int func_743()
{
	return -1904156936;
}

bool func_744(int iParam0)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	switch (func_198(iParam0))
	{
		case 1:
			iVar0 = func_275(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_275(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_745()
{
	return 166188472;
}

int func_746()
{
	return 2015838421;
}

int func_747()
{
	return 207908017;
}

var func_748(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_749(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_750(var uParam0)
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

int func_751(var uParam0, bool bParam1)
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

char* func_752(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return "";
	}
	if (is_entity_a_ped(bParam0))
	{
		return func_1225(get_ped_index_from_entity_index(bParam0));
	}
	else if (is_entity_an_object(bParam0))
	{
		return func_1226(get_object_index_from_entity_index(bParam0));
	}
	else if (is_entity_a_vehicle(bParam0))
	{
		return func_1227(get_vehicle_index_from_entity_index(bParam0));
	}
	return "";
}

int func_753(var uParam0, char* sParam1)
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

int func_754(var uParam0)
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

void func_755(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_756(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_757()
{
	return Global_1572864->f_8;
}

void func_758(var uParam0, int iParam1)
{
	func_1228(uParam0, iParam1);
	func_1229(uParam0, iParam1, 26);
}

int func_759(var uParam0)
{
	func_1102(-1925798111, 1, 0);
	func_1230();
	func_1231();
	func_1232(uLocal_840[0], 1515.066f, -1830.636f, 60.84277f, 0f, 0f, -170.408f, 400.003f, 400f, 47.69775f, "m_volToCaligaHall1");
	func_1232(uLocal_840[1], 1454.821f, -1431.523f, 60.84277f, 0f, 0f, -170.408f, 400.003f, 400f, 47.69775f, "m_volToCaligaHall2");
	func_1232(uLocal_840[2], 1283.669f, -1165.121f, 60.84277f, 0f, 0f, -170.408f, 400.003f, 400f, 47.69775f, "m_volToCaligaHall3");
	return 1;
}

int func_760(var uParam0)
{
	if (!func_120(uParam0, 4))
	{
		if (_is_metaped_using_component(iVar782, -1725579161))
		{
			_set_ped_component_disabled(iVar782, -1725579161, 1);
			_update_ped_variation(iVar782, false, true, true, true, false);
		}
		func_1233(iVar781, 0, 1);
	}
	func_1234(0.8f);
	return 1;
}

int func_761(var uParam0)
{
	if (!func_1235())
	{
		return 0;
	}
	func_1236();
	if (get_players_last_vehicle() != 0 && get_players_last_vehicle() != &Local_14.f_19[0])
	{
		iVar0 = get_players_last_vehicle();
		set_entity_as_mission_entity(get_players_last_vehicle(), true, true);
		delete_vehicle(&iVar0);
	}
	_0x4ba972d0e5ad8122(&(Local_14.f_19[0]), 0);
	_0x838c216c2b05a009(Global_35, &(Local_14.f_19[0]));
	_0xb7079f4c72896756(Global_35, &(Local_14.f_19[0]), 0, 16, 0);
	set_ped_config_flag(iVar782, 65, true);
	_0x0d7fd6a55fd63aef(8, 3, 1);
	_set_weather_type(821931868, true, true, true, 30f, false);
	func_1237(&uLocal_222, 0);
	func_135(uParam0, 1);
	func_182(-215861784, 0, 1f, 0, 1, 0, 1, 0);
	func_182(-543954117, 0, -1f, 0, 1, 0, 1, 0);
	func_182(1595076728, 0, -1f, 0, 0, 0, 0, 0);
	func_182(1439227364, 0, 1f, 0, 0, 0, 0, 0);
	func_182(-54440625, 1, 0f, 0, 0, 0, 1, 0);
	func_182(1202250529, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1328000354, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-328808006, 1, 0f, 0, 0, 0, 1, 0);
	func_182(248030525, 1, 0f, 0, 0, 0, 1, 0);
	func_182(606588923, 1, 0f, 0, 0, 0, 1, 0);
	func_182(825059846, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-964389706, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1508394076, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1947039910, 1, 0f, 0, 0, 0, 1, 0);
	func_1238("brt2_GoToCaligaHall_gps_route", 0, 76603059);
	set_gps_custom_route_render(false, 3, 30);
	return 1;
}

int func_762(var uParam0)
{
	func_1239(uParam0);
	func_1240(uParam0);
	func_1241(uParam0);
	func_1242(2.5f, uParam0);
	func_1243();
	if (func_1244(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAGON", "", 1, 0);
	}
	else if (func_1246())
	{
		func_1245(uParam0, "BRT2_FAIL_FIRE", "", 1, 0);
	}
	else if (func_1247(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAG", "", 1, 0);
	}
	else if (func_1248())
	{
		func_1245(uParam0, "BRT2_FAIL_BRT", "", 1, 0);
	}
	else if (func_1249())
	{
		func_1245(uParam0, "BRT2_FAIL_BRT_MNR", "", 1, 0);
	}
	else if (func_1250())
	{
		func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
	}
	else if (func_1251(Local_14.f_19[0]))
	{
		func_1245(uParam0, "BRT2_FAIL_WAG", "", 1, 0);
	}
	else if (func_1252())
	{
		func_1245(uParam0, "BRT2_FAIL_CAMP", "", 1, 0);
	}
	else if (func_1253(2))
	{
		func_1245(uParam0, "LAW_FAIL", "", 1, 0);
	}
	func_1255(uParam0, func_1254(uParam0), 75f, 100f, 0, 0, 1, 422991367);
	switch (func_1256(uParam0))
	{
		case 1:
			if (is_screen_faded_in())
			{
				if (func_1257())
				{
					func_1258(uParam0, "BRT2_brtm_ALT", 0);
				}
				else
				{
					func_1258(uParam0, "BRT2_brtm_2_ALT", 0);
				}
				func_1259(uParam0, 1);
				bLocal_269 = func_894(Global_35, &(Local_14.f_19[0]), 1, 1);
				iLocal_770[0] = func_1260(408396114, &(Local_14.f_19[0]), 1);
				_blip_set_modifier(&(iLocal_770[0]), -1878373110);
				set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_WGN");
				func_223(&uLocal_239);
				func_223(&uLocal_7449);
				func_135(uParam0, 2);
			}
			break;
		case 2:
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				_set_blip_flash_style(&(iLocal_770[0]), -1878373110);
				func_169(iLocal_770[0]);
				func_1261(&uLocal_7449);
				func_223(&uLocal_239);
				if (is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
				{
					iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
					_blip_set_modifier(&(iLocal_770[0]), -1878373110);
					set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
					func_1238("brt2_GoToCaligaHall_gps_route", 0, 76603059);
					func_1259(uParam0, 3);
					func_135(uParam0, 4);
				}
				else
				{
					set_gps_custom_route_render(false, 3, 30);
					func_1263(8);
					func_1259(uParam0, 2);
					func_135(uParam0, 3);
				}
			}
			else if (is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
			{
				func_223(&uLocal_7449);
				func_135(uParam0, 7);
			}
			break;
		case 7:
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				func_169(iLocal_770[0]);
				func_1261(&uLocal_7449);
				if (is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
				{
					iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
					_blip_set_modifier(&(iLocal_770[0]), -1878373110);
					set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
					func_1238("brt2_GoToCaligaHall_gps_route", 0, 76603059);
					func_1259(uParam0, 3);
					func_223(&uLocal_239);
					func_135(uParam0, 4);
				}
				else
				{
					if (func_1264(Global_35, &(Local_14.f_19[0]), 0))
					{
						task_enter_vehicle(iVar782, &(Local_14.f_19[0]), -1, -1, 1.5f, 1, 0);
					}
					else
					{
						task_enter_vehicle(iVar782, &(Local_14.f_19[0]), -1, 0, 1.5f, 1, 0);
					}
					set_gps_custom_route_render(false, 3, 30);
					func_1259(uParam0, 2);
					func_223(&uLocal_239);
					func_135(uParam0, 3);
				}
			}
			else if (func_903(&uLocal_7449) > 5f)
			{
				func_1258(uParam0, "BRT2_SWAITWAG", 0);
				func_223(&uLocal_7449);
			}
			break;
		case 3:
			func_1261(&uLocal_7449);
			func_169(iLocal_770[0]);
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				if (is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
				{
					func_447(8);
					iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
					_blip_set_modifier(&(iLocal_770[0]), -1878373110);
					set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
					func_1238("brt2_GoToCaligaHall_gps_route", 0, 76603059);
					func_1259(uParam0, 3);
					func_1265(uParam0);
					func_223(&uLocal_239);
					func_135(uParam0, 4);
				}
			}
			else
			{
				func_447(8);
				iLocal_770[0] = func_1260(408396114, &(Local_14.f_19[0]), 1);
				set_gps_custom_route_render(false, 3, 30);
				set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_WGN");
				func_1259(uParam0, 1);
				func_223(&uLocal_239);
				func_223(&uLocal_7449);
				func_135(uParam0, 2);
			}
			break;
		case 4:
			if (!func_164(iVar796, 131072))
			{
				if (!func_1266())
				{
					if (func_1258(uParam0, "BRT2_BRTM2", 0))
					{
						func_422(&uLocal_799, 131072);
					}
				}
			}
			else if (func_1268(&(Local_14.f_19[0]), func_1267(2, 0), 1) > 5f && !func_1266())
			{
				if (func_1258(uParam0, "BRT2_intro1", 0))
				{
					func_223(&uLocal_239);
					func_135(uParam0, 5);
				}
			}
			break;
		case 5:
			if (!func_1266())
			{
				if (func_330((*Global_1835011)[19]->f_1, 1))
				{
					func_1258(uParam0, "BRT2_intro1_B", 0);
					func_223(&uLocal_239);
				}
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (!func_1266())
			{
				func_1258(uParam0, "BRT2_intro2", 0);
				func_223(&uLocal_239);
				func_135(uParam0, 8);
			}
			break;
		case 8:
			if (!func_1266())
			{
				func_223(&uLocal_239);
				func_135(uParam0, 51);
			}
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			func_1270();
			if (_0x619e63980bfc0096(Global_35, &(Local_14.f_19[0]), 0) || is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				if (!bVar7445)
				{
					iLocal_7448 = 1;
					_0xba8818212633500a(&(Local_14.f_19[0]), 7, 1);
				}
				else if (!func_180(64))
				{
					set_ped_desired_move_blend_ratio(iVar782, 3f);
				}
				if (func_1264(iVar782, &(Local_14.f_19[0]), -1))
				{
					func_134(uParam0, 1);
				}
			}
			break;
		case 1:
			func_1270();
			if (func_1271(Global_35, &(uLocal_840[0]), 1, 0))
			{
				func_1273(func_1272(20), 1);
				func_134(uParam0, 2);
			}
			else if (func_1271(Global_35, &(uLocal_840[1]), 1, 0))
			{
				func_1273(func_1272(20), 2);
				func_134(uParam0, 2);
			}
			else if (func_1271(Global_35, &(uLocal_840[2]), 1, 0))
			{
				func_1273(func_1272(20), 3);
				func_134(uParam0, 2);
			}
			if (func_1271(Global_35, iVar812, 1, 0) && !func_1271(Global_35, iVar811, 1, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (func_1256(uParam0) > 9)
			{
				return 1;
			}
			if (func_1271(Global_35, iVar812, 1, 0) && !func_1271(Global_35, iVar811, 1, 0))
			{
				return 1;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

int func_763(var uParam0)
{
	func_16(1, 0);
	func_169(iLocal_770[0]);
	func_174(uParam0);
	func_1234(1f);
	func_471(&(uLocal_840[0]));
	func_471(&(uLocal_840[1]));
	func_471(&(uLocal_840[2]));
	return 1;
}

void func_764(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1274(uParam0, iParam1);
	func_1229(uParam0, iParam1, iParam2);
	func_1275(uParam0, &iParam3, iParam1, 0);
	func_1275(uParam0, &iParam4, iParam1, 2);
	func_1275(uParam0, &iParam5, iParam1, 4);
	func_1275(uParam0, &iParam6, iParam1, 5);
	func_1275(uParam0, &iParam7, iParam1, 7);
	func_933(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1276(uParam0, iParam1, cVar0);
	func_1277(uParam0, iParam1, iParam10);
}

int func_765(var uParam0)
{
	if (!func_1278())
	{
		return 0;
	}
	func_1102(-1925798111, 1, 0);
	func_1230();
	return 1;
}

int func_766(var uParam0)
{
	if (!_0xcf45df50c7775f2a() && func_364(func_1272(20)) != 0)
	{
		switch (func_364(func_1272(20)))
		{
			case 1:
				_0x513f8aa5bf2f17cf(1472.72f, -1697.433f, 62.3298f, 30f, 0);
				break;
			case 2:
				_0x513f8aa5bf2f17cf(1234.814f, -1593.21f, 60.2795f, 30f, 0);
				break;
			case 3:
				_0x513f8aa5bf2f17cf(1172.531f, -1182.401f, 72.9122f, 30f, 0);
				break;
		}
	}
	if (_0xcf45df50c7775f2a())
	{
		if (!_0x0909f71b5c070797())
		{
			return 0;
		}
		else
		{
			_0x5a8b01199c3e79c3();
		}
	}
	return 1;
}

int func_767(var uParam0)
{
	func_1237(&uLocal_222, 0);
	func_135(uParam0, 1);
	if (func_120(uParam0, 4))
	{
		simulate_player_input_gait(get_player_index(), 3f, 3000, 0f, true, false);
	}
	func_182(-215861784, 0, 1f, 0, 1, 0, 1, 0);
	func_182(-543954117, 0, -1f, 0, 1, 0, 1, 0);
	func_182(1595076728, 0, 1f, 1, 0, 0, 1, 0);
	func_182(1439227364, 0, -1f, 1, 0, 0, 1, 0);
	func_182(-54440625, 1, 0f, 0, 0, 0, 1, 0);
	func_182(1202250529, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1328000354, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-328808006, 1, 0f, 0, 0, 0, 1, 0);
	func_182(248030525, 1, 0f, 0, 0, 0, 1, 0);
	func_182(606588923, 1, 0f, 0, 0, 0, 1, 0);
	func_182(825059846, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-964389706, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1508394076, 1, 0f, 0, 0, 0, 1, 0);
	func_182(-1947039910, 1, 0f, 0, 0, 0, 1, 0);
	return 1;
}

int func_768(var uParam0)
{
	func_1239(uParam0);
	func_1240(uParam0);
	func_1241(uParam0);
	func_1242(2.5f, uParam0);
	if (func_1244(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAGON", "", 1, 0);
	}
	else if (func_1246())
	{
		func_1245(uParam0, "BRT2_FAIL_FIRE", "", 1, 0);
	}
	else if (func_1247(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAG", "", 1, 0);
	}
	else if (func_1248())
	{
		func_1245(uParam0, "BRT2_FAIL_BRT", "", 1, 0);
	}
	else if (func_1249())
	{
		func_1245(uParam0, "BRT2_FAIL_BRT_MNR", "", 1, 0);
	}
	else if (func_1250())
	{
		func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
	}
	else if (func_1251(Local_14.f_19[0]))
	{
		func_1245(uParam0, "BRT2_FAIL_WAG", "", 1, 0);
	}
	else if (func_1252())
	{
		func_1245(uParam0, "BRT2_FAIL_CAMP", "", 1, 0);
	}
	else if (func_1253(2))
	{
		func_1245(uParam0, "LAW_FAIL", "", 1, 0);
	}
	func_1255(uParam0, func_1254(uParam0), 75f, 100f, 0, 0, 1, 422991367);
	switch (func_1256(uParam0))
	{
		case 1:
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				func_169(iLocal_770[0]);
				func_223(&uLocal_239);
				iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
				_blip_set_modifier(&(iLocal_770[0]), -1878373110);
				set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
				func_1259(uParam0, 3);
				func_135(uParam0, 3);
			}
			else if (is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
			{
				func_135(uParam0, 2);
			}
			break;
		case 2:
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				func_169(iLocal_770[0]);
				iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
				_blip_set_modifier(&(iLocal_770[0]), -1878373110);
				set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
				func_1259(uParam0, 3);
				func_223(&uLocal_239);
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (!is_ped_in_vehicle(iVar782, &(Local_14.f_19[0]), false))
			{
				task_enter_vehicle(iVar782, &(Local_14.f_19[0]), 20000, -2, 1.5f, 1, 0);
				func_1259(uParam0, 2);
				func_223(&uLocal_239);
				func_135(uParam0, 1);
			}
			if (!is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				func_169(iLocal_770[0]);
				iLocal_770[0] = func_1260(408396114, &(Local_14.f_19[0]), 1);
				set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_WGN");
				func_1259(uParam0, 1);
				func_223(&uLocal_239);
				func_223(&uLocal_7449);
				func_135(uParam0, 2);
			}
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
			{
				if (func_1264(iVar782, &(Local_14.f_19[0]), -1))
				{
					func_134(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1271(Global_35, iVar812, 1, 0) && !func_1271(Global_35, iVar811, 1, 0))
			{
				return 1;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

int func_769(var uParam0)
{
	func_16(1, 0);
	func_174(uParam0);
	func_1279();
	if (_does_anim_scene_exist(iVar7226))
	{
		_delete_anim_scene(iVar7226);
	}
	_0x660a8f876df1d4f8(8);
	return 1;
}

int func_770(var uParam0)
{
	if (!func_1278())
	{
		return 0;
	}
	func_905(0, 0);
	func_1238("brt2_GoToCaligaHall_gps_route", 0, 76603059);
	iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
	_blip_set_modifier(&(iLocal_770[0]), -1878373110);
	set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
	iLocal_7441 = 0;
	func_1102(-1925798111, 1, 0);
	func_1230();
	return 1;
}

int func_771(var uParam0)
{
	func_1280(0);
	func_1259(uParam0, 4);
	return 1;
}

int func_772(var uParam0)
{
	if (!func_1281(uParam0, 0))
	{
		return 0;
	}
	if (func_120(uParam0, 4))
	{
		simulate_player_input_gait(get_player_index(), 2f, 2000, 0f, true, false);
	}
	func_135(uParam0, 1);
	func_134(uParam0, 0);
	func_182(-215861784, 0, 1f, 0, 1, 0, 1, 0);
	func_182(-543954117, 0, -1f, 0, 1, 0, 1, 0);
	func_182(2091447480, 0, -1f, 0, 1, 0, 1, 0);
	func_183(0);
	return 1;
}

int func_773(var uParam0)
{
	func_1241(uParam0);
	func_1282();
	func_1283(uParam0);
	func_1284();
	func_1242(2.5f, uParam0);
	func_1285();
	if (func_1244(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAGON", "", 1, 0);
	}
	else if (func_1246())
	{
		func_1245(uParam0, "BRT2_FAIL_FIRE", "", 1, 0);
	}
	else if (func_1247(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_WAG", "", 1, 0);
	}
	switch (func_1256(uParam0))
	{
		case 1:
			func_135(uParam0, 5);
			break;
		case 5:
			if (_0xb89fcff19dafff28(iVar7229, "sean") || !((_is_anim_scene_started(iVar7227, false) || _is_anim_scene_started(iVar7228, false)) || _is_anim_scene_started(iVar7229, false)))
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (func_1286() >= 1)
			{
				if (func_1286() < 6)
				{
					func_1258(uParam0, "BRT2_HIDE1", 0);
				}
				func_135(uParam0, 7);
			}
			break;
		case 7:
			if (func_1286() >= 6)
			{
				func_145(uParam0, &(Local_14.f_23[0]), "BRT2_Guard_1", 0);
				func_1258(uParam0, "BRT2_GUARD1", 0);
				func_135(uParam0, 2);
			}
			break;
		case 2:
			if (_does_anim_scene_exist(iVar721) && _is_anim_scene_finished(iVar721, false))
			{
				if (func_1287("BRT2_IG2_C"))
				{
					func_223(&uLocal_239);
					func_135(uParam0, 8);
				}
			}
			break;
		case 8:
			if (!func_1288("BRT2_IG2_C"))
			{
				func_1258(uParam0, "BRT2_GUARD2GO", 0);
				func_135(uParam0, 9);
			}
			break;
		case 9:
			if (!func_1266())
			{
				func_1258(uParam0, "BRT2_GUARD_CHAT", 0);
				func_135(uParam0, 3);
			}
			break;
		case 3:
			if (func_1289())
			{
				if (!func_1266() && func_1286() >= 16)
				{
					if (func_1286() < 28)
					{
						func_1258(uParam0, "BRT2_guard3", 0);
					}
					func_223(&uLocal_239);
					func_135(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_1289())
			{
				if (func_1286() >= 28)
				{
					func_1258(uParam0, "BRT2_guard3A", 0);
					func_223(&uLocal_239);
					func_135(uParam0, 10);
				}
			}
			break;
		case 10:
			if (func_1286() >= 34)
			{
				_0xdd1232b332cbb9e7(1, 1, 0);
				func_135(uParam0, 11);
			}
			break;
		case 11:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			func_1290();
			if (func_1291())
			{
				func_1292(8388608);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			func_1290();
			if (func_1293())
			{
				func_169(iLocal_770[0]);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			func_1294(uParam0);
			if (_does_anim_scene_exist(iVar721))
			{
				if (_0x005e6f28dd7ed58d(iVar721, "player_zero"))
				{
					func_1295();
				}
				if (_is_anim_scene_active(iVar721) || _0xf94692eb9dc15d74(iVar721, 0))
				{
					func_1296();
					iLocal_770[0] = func_1262(408396114, func_391(1, 4), 1);
					set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_CLHL");
					func_134(uParam0, 3);
				}
			}
			break;
		case 3:
			if (_0xb89fcff19dafff28(iVar7222, "cs_sean"))
			{
				if (get_active_vehicle_mission_type(&(Local_14.f_19[0])) != 24)
				{
					if (is_playback_going_on_for_vehicle(&(Local_14.f_19[0])))
					{
						stop_playback_recorded_vehicle(&(Local_14.f_19[0]));
					}
					_task_vehicle_follow_waypoint_recording_2(&(Local_14.f_19[0]), "brt2_ToWagonParkInt2", 0, 0, 8, -1, -1082130432, 0, 1073741824, 0);
				}
			}
			if (!is_ped_injured(&(Local_14.f_23[0])) && !is_entity_dead(&(Local_14.f_19[0])))
			{
				if (is_ped_in_vehicle(&(Local_14.f_23[0]), &(Local_14.f_19[0]), false))
				{
					if (func_1268(&(Local_14.f_19[0]), 1881.49f, -1348.37f, 41.56f, 0) < 6f)
					{
						func_134(uParam0, 4);
					}
				}
				else
				{
					set_ped_into_vehicle(&(Local_14.f_23[0]), &(Local_14.f_19[0]), -1);
				}
			}
			break;
		case 4:
			if (func_1297(uParam0))
			{
				func_169(iLocal_770[0]);
				return 1;
			}
			break;
	}
	return 0;
}

int func_774(var uParam0)
{
	_0x49dadfc4cd808b0a(bVar782, 0, -1);
	func_183(1);
	func_1283(uParam0);
	func_471(&(uLocal_834[0]));
	func_471(&(uLocal_834[1]));
	func_471(&(uLocal_834[2]));
	func_471(&(uLocal_834[3]));
	func_471(&(uLocal_834[4]));
	return 1;
}

int func_775(var uParam0)
{
	if (!func_1278())
	{
		return 0;
	}
	func_1280(1);
	display_radar(false);
	func_905(180f, 0);
	if (!does_entity_exist(&(Local_14.f_23[0])))
	{
		func_1281(uParam0, 1);
		if (func_163(&(Local_14.f_23[0]), 0) && !is_entity_dead(&(Local_14.f_19[0])))
		{
			set_ped_into_vehicle(&(Local_14.f_23[0]), &(Local_14.f_19[0]), 0);
			attach_entity_to_entity(iVar7244, &(Local_14.f_23[0]), get_ped_bone_index(&(Local_14.f_23[0]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
	}
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		set_gameplay_cam_relative_heading(59.3f, 1f);
		set_gameplay_cam_relative_pitch(1.05f, 1f);
	}
	func_1102(-1925798111, 1, 0);
	func_1230();
	func_182(2091447480, 0, -1f, 0, 1, 0, 1, 0);
	return 1;
}

int func_776(var uParam0)
{
	func_1284();
	func_558(&uLocal_242);
	func_1283(uParam0);
	if (!func_8(uParam0, 8))
	{
		if (!is_ped_injured(&(Local_14.f_23[0])))
		{
			remove_all_ped_weapons(&(Local_14.f_23[0]), true, true);
			_0x8886d83a430537fd(&(Local_14.f_23[0]), 96);
			_0x18ff3110cf47115d(&(Local_14.f_23[0]), 7, 0);
			set_ped_config_flag(&(Local_14.f_23[0]), 297, true);
		}
		if (!is_entity_dead(&(Local_14.f_19[0])))
		{
			_0xbdda142759307528(&(Local_14.f_19[0]));
		}
		if (!is_ped_injured(iVar782))
		{
			_0x8886d83a430537fd(iVar782, 96);
			set_ped_combat_attributes(iVar782, 46, true);
		}
		freeze_entity_position(&(Local_14.f_19[0]), true);
		set_anim_scene_entity(iVar7231, "SEAN", iVar782, 0);
		set_anim_scene_entity(iVar7231, "S_M_M_CghWorker", &(Local_14.f_23[0]), 0);
		set_anim_scene_entity(iVar7231, "p_bottle03x", iVar7244, 0);
		set_anim_scene_entity(iVar7231, "BottleCrate03", iVar7246, 0);
		set_entity_collision(iVar7246, false, false);
		set_anim_scene_entity(iVar7231, "WAGON05", &(Local_14.f_19[0]), 0);
		_set_anim_scene_playback_list_bool(iVar7231, "pbl_get_off_wagon", true);
		start_anim_scene(iVar7231);
		func_1295();
		_0x2208438012482a1a(&(Local_14.f_23[0]), true, false);
		force_entity_ai_and_animation_update(&(Local_14.f_19[0]), true);
		_0x2208438012482a1a(iVar782, true, false);
		force_entity_ai_and_animation_update(iVar7244, true);
		force_entity_ai_and_animation_update(iVar7246, true);
		freeze_entity_position(iVar7246, true);
	}
	return 1;
}

int func_777(var uParam0)
{
	func_135(uParam0, 1);
	func_134(uParam0, 0);
	func_1298();
	func_1284();
	func_1283(uParam0);
	_0x437c08db4febe2bd(Global_35, "stealth", 1f, -1);
	func_1299(bVar782, 0);
	set_blocking_of_non_temporary_events(&(Local_14.f_23[0]), true);
	set_ped_relationship_group_hash(&(Local_14.f_23[0]), 1269650476);
	set_ped_config_flag(&(Local_14.f_23[0]), 21, true);
	set_ped_config_flag(&(Local_14.f_23[0]), 137, false);
	func_1300(&(Local_14.f_23[0]), 1);
	_0xae6004120c18df97(&(Local_14.f_23[0]), 0, 0);
	_0x766315a564594401(func_172(0), 2055893578, 0);
	func_426(&(uParam0->f_7375), 75f);
	func_427(&(uParam0->f_7375), 100f);
	func_1301(uParam0, "MultiStart");
	func_1259(uParam0, 5);
	func_1302(&(Local_14.f_23[0]), "BRT2_HAMISH", 1);
	return 1;
}

int func_778(var uParam0)
{
	func_1303(uParam0);
	func_1241(uParam0);
	func_1304();
	func_1305(uParam0);
	func_1284();
	func_1282();
	func_1283(uParam0);
	_0x9f9a829c6751f3c7(player_id(), 47, 1);
	if (func_1306(uParam0))
	{
		func_1245(uParam0, "BRT2_FAIL_LEVE", "", 1, 0);
	}
	switch (func_1256(uParam0))
	{
		case 1:
			if (func_163(&(Local_14.f_23[0]), 0))
			{
				if (_does_anim_scene_exist(iVar7232) && (_is_anim_scene_finished(iVar7232, false) || _get_anim_scene_progress(iVar7232) > 0.9f))
				{
					func_223(&uLocal_239);
					func_135(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_903(&uLocal_239) > 4f)
			{
				func_135(uParam0, 51);
			}
			break;
		case 3:
			if (!func_180(128))
			{
				if (!func_1266() && !_is_anim_scene_started(iVar7231, false))
				{
					func_169(iLocal_770[0]);
					if (!func_1307())
					{
						func_1258(uParam0, "BRT2_wait2", 0);
					}
					func_223(&uLocal_239);
					func_135(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_903(&uLocal_239) > 1f)
			{
				func_135(uParam0, 51);
			}
			break;
		case 5:
			if (!func_1308(&(Local_14.f_23[0]), 0) && is_ped_injured(&(Local_14.f_23[0])))
			{
				if (func_1258(uParam0, "BRT2_IG3_DA", 0))
				{
					func_135(uParam0, 51);
				}
			}
			else if (func_1308(&(Local_14.f_23[0]), 0) && is_ped_injured(&(Local_14.f_23[0])))
			{
				if (func_1258(uParam0, "BRT2_IG3_SHOOT", 0))
				{
					func_135(uParam0, 51);
				}
			}
			else if (func_1257())
			{
				if (func_1258(uParam0, "BRT2_IG3_GUNNOI", 0))
				{
					func_135(uParam0, 51);
				}
			}
			else if (func_1258(uParam0, "BRT2_IG3_GENNOI", 0))
			{
				func_135(uParam0, 51);
			}
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			if (iLocal_102 >= 3)
			{
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (!func_163(&(Local_14.f_23[0]), 0))
			{
				func_135(uParam0, 3);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			func_508(1);
			if (((func_1256(uParam0) == 51 && !func_1309()) && !func_1266()) && !_is_anim_scene_started(iVar7231, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_779(var uParam0)
{
	if (does_entity_exist(&(Local_14.f_19[0])) && _0x083d497d57b7400f(&(Local_14.f_19[0])))
	{
		freeze_entity_position(&(Local_14.f_19[0]), false);
	}
	if (!is_entity_dead(Global_35))
	{
		set_entity_collision(Global_35, true, false);
		freeze_entity_position(Global_35, false);
		set_ped_current_weapon_visible(Global_35, false, false, true, false);
	}
	func_169(iLocal_770[0]);
	_0x6a564540fac12211(func_172(0), 2055893578);
	return 1;
}

int func_780(var uParam0)
{
	if (!func_1310(uParam0, 0, !func_120(uParam0, 4)))
	{
		return 0;
	}
	func_905(0, 0);
	_set_entity_coords_and_heading_no_offset(&(Local_14.f_23[0]), 1881f, -1347f, 42.5f, 113.135f, false, true);
	func_1311(&(Local_14.f_23[0]), 1, 1);
	set_current_ped_weapon(iVar782, -1569615261, true, 0, false, false);
	remove_weapon_from_ped(Global_35, -1361787316, true, -142743235);
	_remove_ammo_from_ped(Global_35, -1361787316, -1, -142743235);
	func_1102(-1925798111, 1, 0);
	func_1230();
	func_1280(1);
	_0xe2c2fbb7825ffc66();
	return 1;
}

int func_781(var uParam0)
{
	if (func_163(Global_35, 0))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
		clear_ped_secondary_task(Global_35);
	}
	func_151(uParam0, &(Local_14.f_23[0]), "S_M_M_CGHWORKER_01", 0, 0, 1, 0);
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_7375.f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_7375.f_13[iVar0])))
		{
			if (get_ped_index_from_entity_index(&(uParam0->f_7375.f_13[iVar0])) == &Local_14.f_23[0])
			{
				func_1312(uParam0->f_7375.f_13[iVar0], 16);
			}
		}
		iVar0++;
	}
	if (does_cam_exist(iVar7218))
	{
		destroy_cam(iVar7218, false);
	}
	Var1 = { func_226(1, 4) };
	func_1313(&(Local_14.f_19[0]), Var1, 2, 1073741824);
	force_entity_ai_and_animation_update(&(Local_14.f_19[0]), true);
	set_current_ped_weapon(iVar782, -1569615261, true, 0, false, false);
	_set_ped_crouch_movement(Global_35, true, 0, true);
	func_610(1885857703);
	set_ped_ammo(Global_35, 1885857703, get_ped_ammo_by_type(Global_35, 1446246869) + 10);
	func_1314();
	func_1232(uLocal_828[0], 1898.298f, -1331.892f, 36.82766f, 0f, 0f, -126.0285f, 4.01078f, 5.5457f, 17.34386f, "Crates 1");
	func_1232(uLocal_828[1], 1893.496f, -1323.82f, 35.35685f, 0f, 0f, 133.9715f, 6.01078f, 7.5457f, 17.34386f, "Crates 2");
	return 1;
}

int func_782(var uParam0)
{
	func_135(uParam0, 1);
	func_1237(&uLocal_222, 0);
	set_ped_config_flag(Global_35, 80, true);
	if (!is_entity_dead(&(Local_14.f_19[0])))
	{
		set_vehicle_is_considered_by_player(&(Local_14.f_19[0]), false);
	}
	if (func_163(bVar782, 0))
	{
		set_blocking_of_non_temporary_events(bVar782, true);
	}
	func_168();
	func_1280(1);
	set_relationship_between_groups(6, iVar784, 1030835986);
	set_relationship_between_groups(6, 1030835986, iVar784);
	if (func_163(&(Local_14.f_8[3]), 0))
	{
		task_start_scenario_at_position(&(Local_14.f_8[3]), -22664287, 1908.083f, -1316.326f, 41.9003f, get_entity_heading(&(Local_14.f_8[3])), 0, false, true, 0, -1f, false);
	}
	func_40(0);
	if (!func_1315(-1, 0))
	{
		return 0;
	}
	if (!func_1316())
	{
		return 0;
	}
	func_1313(&(Local_14.f_38[0]), func_226(3, 0), 2, 1073741824);
	set_vehicle_is_considered_by_player(&(Local_14.f_38[0]), false);
	func_1317();
	func_558(&uLocal_242);
	func_145(uParam0, &(Local_14.f_8[3]), "BRT2_Guard_4", 0);
	set_vehicle_doors_locked(&(Local_14.f_19[0]), 1);
	func_1318();
	func_167(1);
	func_182(515619039, 0, -0.05f, 0, 1, 0, 1, 0);
	func_182(-1178046730, 0, -0.75f, 0, 1, 0, 1, 0);
	func_1259(uParam0, 9);
	func_1263(8);
	return 1;
}

bool func_783(var uParam0)
{
	func_1319(2);
	func_1320(uParam0);
	func_1321(uParam0);
	func_1322(uParam0);
	func_1323(uParam0);
	func_1324();
	func_1314();
	func_1241(uParam0);
	func_1325(uParam0);
	func_1326(uParam0);
	func_1327();
	func_1328(uParam0);
	if (func_1256(uParam0) < 8)
	{
		Var0 = { func_1329(8) };
		Var8 = { func_1330(8) };
		bLocal_221 = func_1331(uParam0, func_463(8), &Var0, &Var8, 40f, 75f, 0, 0, 1, 422991367, 0);
	}
	else
	{
		bLocal_221 = func_1332(uParam0, bVar808, bVar809, "BRT2_WARN_FIEL", "BRT2_FAIL_LEVE", 0, 0, 1, 408396114);
	}
	switch (func_1256(uParam0))
	{
		case 1:
			render_script_cams(false, true, 3000, true, false, 0);
			func_170(&iLocal_770);
			func_1265(uParam0);
			func_223(&uLocal_239);
			func_135(uParam0, 2);
			break;
		case 2:
			if ((!func_1266() && !is_entity_in_volume(Global_35, iVar819, true, 0)) && is_screen_faded_in())
			{
				func_145(uParam0, Global_35, "ARTHUR", 0);
				func_145(uParam0, bVar782, "SEAN", 0);
				func_145(uParam0, &(Local_14.f_8[6]), "BRT2_DRIVER", 0);
				func_145(uParam0, &(Local_14.f_8[3]), "BRT2_Guard_4", 0);
				if (func_1258(uParam0, "BRT2_GUARDS_P1", 0))
				{
					func_135(uParam0, 3);
				}
			}
			break;
		case 3:
			if ((iLocal_101 == 5 && func_1258(uParam0, "BRT2_GUARDS_P2", 0)) && func_1288("BRT2_GUARDS_P2"))
			{
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (!func_1288("BRT2_GUARDS_P2"))
			{
				func_223(&uLocal_239);
				func_135(uParam0, 5);
			}
			break;
		case 5:
			if ((func_903(&uLocal_239) > 1f && !func_180(1)) && (func_894(Global_35, bVar782, 1, 1) > 30f || func_1258(uParam0, "BR2_SEANKILL", 0)))
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (!func_163(&(Local_14.f_8[3]), 0) || iLocal_218 > 5)
			{
				func_135(uParam0, 7);
			}
			break;
		case 7:
			if (iVar7393 == 0)
			{
				if (func_824(Global_35, 1, 0, 0) == -1361787316)
				{
					if (is_entity_in_volume(Global_35, iVar824, true, 0) || func_1333(1))
					{
						iLocal_733 = func_1334("BRT2_MSHELP", 130948705, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1335(iVar730, 14, 1, 1);
						func_1335(iVar730, 7, 1, 1);
						func_1336(iVar730, 130948705);
						func_1337(iVar730, Global_35, 0, 1, -1);
						func_223(&uLocal_239);
						iLocal_7396 = 1;
					}
				}
			}
			else
			{
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(Global_35), "BRT2_MNSH", 1, 0, 0, 0);
				if (func_824(Global_35, 1, 0, 0) != -1361787316)
				{
					func_11(&iLocal_733, 1, 1);
					iLocal_7396 = 0;
				}
			}
			if (iLocal_218 > 5)
			{
				if (!func_120(uParam0, 4))
				{
					if (func_894(Global_35, bVar782, 1, 1) > 30f || func_1258(uParam0, "BR2_DOUSEFIELDS", 0))
					{
						func_447(8);
						func_1265(uParam0);
						func_223(&uLocal_239);
						func_135(uParam0, 8);
					}
				}
				else if (func_894(Global_35, bVar782, 1, 1) > 30f || func_1258(uParam0, "BR2_DOUSEFIELD2", 0))
				{
					func_447(8);
					func_1265(uParam0);
					func_223(&uLocal_239);
					func_135(uParam0, 8);
				}
			}
			break;
		case 8:
			if (iLocal_231 == 1)
			{
				if (!func_1266())
				{
					if (func_1258(uParam0, "BRT2_DOUDON", 0))
					{
						iLocal_231 = 0;
					}
				}
			}
			else if (iLocal_232 == 0 && !func_1266())
			{
				iLocal_232 = 1;
				func_1265(uParam0);
			}
			if (iVar7393 == 0)
			{
				if (func_824(Global_35, 1, 0, 0) == -1361787316)
				{
					if (is_entity_in_volume(Global_35, iVar824, true, 0) || func_1333(1))
					{
						iLocal_733 = func_1334("BRT2_MSHELP", 130948705, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1335(iVar730, 14, 1, 1);
						func_1335(iVar730, 7, 1, 1);
						func_1336(iVar730, 130948705);
						func_1337(iVar730, Global_35, 0, 1, -1);
						func_223(&uLocal_239);
						iLocal_7396 = 1;
					}
				}
			}
			else
			{
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(Global_35), "BRT2_MNSH", 1, 0, 0, 0);
				if (func_824(Global_35, 1, 0, 0) != -1361787316)
				{
					func_11(&iLocal_733, 1, 1);
					iLocal_7396 = 0;
				}
			}
			if (iVar7392 == 0)
			{
				if (func_1333(0) && func_903(&uLocal_239) > 5f)
				{
					uLocal_7296[1] = func_722("BRT2_CONEHELP", 10000, 0, 0, 0, 1);
					iLocal_7395 = 1;
				}
			}
			if ((is_entity_at_entity(player_ped_id(), bVar782, 10f, 10f, 10f, false, true, 0) && func_903(&uLocal_239) > 10f) && !is_ped_heading_towards_position(Global_35, 1914.89f, -1302.965f, 41.786f, 60f))
			{
				if (!func_1266())
				{
					if (func_1258(uParam0, "BRT2_away1", 0))
					{
						func_223(&uLocal_239);
					}
				}
			}
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_1338())
			{
				func_134(uParam0, 29);
			}
			break;
	}
	if (func_180(1))
	{
		if (iLocal_224 == 0)
		{
			iLocal_224 = get_game_timer();
		}
		else if ((((get_game_timer() - iLocal_224) > 2500 && !func_1266()) && !func_1339()) || (get_game_timer() - iLocal_224) > 5000)
		{
			func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
		}
	}
	return func_1269(uParam0) == 29;
}

bool func_784(var uParam0)
{
	func_170(&iLocal_770);
	_0xe2c2fbb7825ffc66();
	func_11(&iLocal_733, 1, 1);
	func_471(&(uLocal_850[0]));
	func_471(&(uLocal_850[1]));
	func_471(&(uLocal_850[2]));
	func_471(&(uLocal_850[3]));
	return uParam0->f_607 == uParam0->f_607;
}

int func_785(var uParam0)
{
	if (!func_1315(-1, 0))
	{
		return 0;
	}
	if (!func_1316())
	{
		return 0;
	}
	if (!func_1310(uParam0, 0, 0))
	{
		return 0;
	}
	func_1340();
	if (func_163(bVar782, 0))
	{
		set_blocking_of_non_temporary_events(bVar782, true);
		_set_ped_crouch_movement(bVar782, true, 0, false);
	}
	iLocal_218 = 6;
	set_ped_config_flag(Global_35, 80, true);
	func_40(0);
	func_1317();
	func_610(1885857703);
	_remove_ammo_from_ped(Global_35, 1885857703, -1, -142743235);
	if (has_ped_got_weapon(Global_35, 1885857703, 0, false))
	{
		_add_ammo_to_ped(Global_35, 1885857703, 10, 752097756);
	}
	else
	{
		func_1341(Global_35, 1885857703, 10, 0, 0, 1056964608, 1065353216, 0);
	}
	if (!is_entity_dead(&(Local_14.f_19[0])))
	{
		set_vehicle_is_considered_by_player(&(Local_14.f_19[0]), false);
	}
	set_relationship_between_groups(6, iVar784, 1030835986);
	set_relationship_between_groups(6, 1030835986, iVar784);
	if (!func_1342(&uVar0))
	{
		func_1343(-1623728698, 0);
	}
	if (!func_175(8))
	{
		func_176(8, 16384, 1);
	}
	func_905(0, 0);
	func_1280(1);
	func_167(1);
	set_clock_time(1, 0, 0);
	func_1102(-1925798111, 1, 0);
	func_1230();
	return 1;
}

int func_786(var uParam0)
{
	return 1;
}

int func_787(var uParam0)
{
	bLocal_269 = func_1268(Global_35, _0xf70f00013a62f866(&(uLocal_4889[7])), 1);
	func_1344();
	func_135(uParam0, 0);
	func_134(uParam0, 0);
	func_1318();
	return 1;
}

bool func_788(var uParam0)
{
	func_1332(uParam0, bVar808, bVar809, "BRT2_WARN_FIEL", "BRT2_FAIL_LEVE", 0, 0, 1, 408396114);
	func_1345(uParam0);
	func_1319(2);
	func_1346(uParam0);
	func_1241(uParam0);
	func_1314();
	func_1347(uParam0, 0, 0, 0);
	func_1328(uParam0);
	func_1324();
	if (iVar7408 == 13)
	{
		if (func_824(Global_35, 1, 0, 0) == -1361787316 && func_1333(0))
		{
			func_1285();
		}
		else if (func_824(Global_35, 1, 0, 0) == -1361787316 && !func_1333(0))
		{
			_0xcef4c65de502d367(Global_35, 0, 0, 0, 0);
		}
	}
	else if (iVar7408 == 15 || iVar7408 == 16)
	{
		func_1348(Global_35, &uLocal_732, &uLocal_734, 1885857703, 1, 1);
		if (func_10(iVar729))
		{
			disable_control_action(0, -432665970, false);
		}
		if (iVar7408 == 16)
		{
			func_1349(uParam0);
		}
	}
	switch (func_1256(uParam0))
	{
		case 0:
			if (!func_163(&(Local_14.f_8[4]), 11))
			{
				func_1259(uParam0, 14);
				func_135(uParam0, 1);
			}
			break;
		case 1:
			if (_get_anim_scene_time(iVar7236) <= 10.25f && func_1350())
			{
				if (func_163(&(Local_14.f_8[4]), 11))
				{
					_set_entity_health(&(Local_14.f_8[4]), 5, 0);
					_task_smart_flee_style_coord(&(Local_14.f_8[4]), get_entity_coords(&(Local_14.f_8[4]), true, false), 3, 0, -1082130432, -1, 0);
					func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
				}
				else
				{
					func_1245(uParam0, "BRT2_FAIL_BARN_FIRE", "", 1, 0);
				}
			}
			if (iLocal_218 >= 8)
			{
				if ((_is_anim_scene_started(iVar7236, false) && _get_anim_scene_time(iVar7236) > 10.5f) || _is_anim_scene_finished(iVar7236, false))
				{
					if (!func_1266())
					{
						func_223(&uLocal_239);
						func_1259(uParam0, 15);
						func_1265(uParam0);
						func_1351();
						func_135(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (func_1266())
			{
				func_223(&uLocal_239);
			}
			if (func_1352())
			{
				bLocal_227 = true;
				start_anim_scene(iVar7241);
			}
			if (bLocal_227 == 1 && !_is_anim_scene_started(iVar7236, false))
			{
				func_170(&iLocal_770);
				if (!func_1266())
				{
					func_1258(uParam0, "BR2_LOOKATTHAT", 0);
				}
				else
				{
					func_1353("BR2_YOUFIRST", 1, 0);
					func_1353("BR2_THROWIT", 1, 0);
				}
				func_167(0);
				iLocal_218 = 9;
				if (&iLocal_4904[7] == 0)
				{
					iLocal_4904[7] = get_sound_id();
				}
				else
				{
					iLocal_4904[7] = _0xc369e2234e34a0ca("MAIN_LOOP", "VEGETATION_FIRE_SOUNDSET");
				}
				_0xdcf5ba95bbf0faba(&(iLocal_4904[7]), "MAIN_LOOP", _0xf70f00013a62f866(&(uLocal_4889[7])), "STRUCTURE_FIRE_LARGE_SOUNDSET", 0, 0, 0);
				func_135(uParam0, 3);
			}
			else if (bLocal_227 == 1 && _is_anim_scene_started(iVar7236, false))
			{
				func_1353("BRT2_IG9", 1, 0);
			}
			else if (func_903(&uLocal_239) > IntToFloat(iLocal_229) && func_1271(Global_35, iVar817, 1, 0))
			{
				switch (iLocal_228)
				{
					case 0:
						get_current_ped_weapon(player_ped_id(), &iVar0, true, 0, false);
						if (iVar0 != 1885857703)
						{
							if (!func_1266())
							{
								func_1258(uParam0, "BR2_EQUIPBOTTLE", 0);
								func_223(&uLocal_239);
							}
						}
						else
						{
							iLocal_229 = 0;
							iLocal_228 = 1;
						}
						break;
					case 1:
						if (!func_1266() && func_1258(uParam0, "BR2_YOUFIRST", 0))
						{
							iLocal_228 = 2;
							iLocal_229 = 3;
							func_223(&uLocal_239);
						}
						break;
					case 2:
						if (!func_1266() && func_1258(uParam0, "BR2_THROWIT", 0))
						{
							func_223(&uLocal_239);
							iLocal_228 = 3;
							iLocal_229 = 2;
						}
						break;
					case 3:
						if (!func_1266() && func_1258(uParam0, "BR2_BURNBARN", 0))
						{
							func_223(&uLocal_239);
							iLocal_228 = 4;
							iLocal_229 = 2;
						}
						break;
					case 4:
						iLocal_218 = 9;
						break;
				}
			}
			break;
		case 3:
			if (!func_1266())
			{
				func_1258(uParam0, "BR2_BURNFIELDS", 0);
				func_1259(uParam0, 16);
				func_1354();
				func_223(&uLocal_239);
				func_135(uParam0, 4);
			}
			break;
		case 4:
			if (iLocal_218 == 12)
			{
				if (!func_1266())
				{
					func_1258(uParam0, "BRT2_KGA", 0);
					func_135(uParam0, 5);
					func_505(&uLocal_239, 5f);
				}
			}
			else if (iLocal_218 == 13)
			{
				func_135(uParam0, 5);
			}
			break;
		case 5:
			if (!func_1266() && func_903(&uLocal_239) > 15f)
			{
				func_1258(uParam0, "BR2_THROWFIELDS", 0);
				func_223(&uLocal_239);
			}
			break;
	}
	switch (func_1269(uParam0))
	{
		case 0:
			func_1325(uParam0);
			func_1327();
			if ((iVar7408 != 13 && iVar7408 != 14) && iVar7408 != 15)
			{
				func_1259(uParam0, 13);
				if (!func_120(uParam0, 4))
				{
					func_1265(uParam0);
				}
			}
			if (bLocal_227)
			{
				func_1355();
				func_182(515619039, 0, -1f, 0, 1, 0, 1, 0);
				func_182(-1178046730, 0, 1f, 0, 1, 0, 1, 0);
				_0x0d7fd6a55fd63aef(19, 3, 0);
				func_134(uParam0, 1);
			}
			if (func_1356())
			{
				func_1357();
				func_1358();
			}
			break;
		case 1:
			if ((!func_180(2048) && !func_163(&(Local_14.f_8[1]), 3)) && !func_163(&(Local_14.f_8[2]), 3))
			{
				_play_sound_from_position("BELL_ALARM", 1800.987f, -1318.473f, 55.67563f, "BRT2_Sounds", false, 0, true, 0);
				func_1292(2048);
			}
			if (func_1356())
			{
				if ((get_game_timer() - iVar798) > 500)
				{
					switch (iLocal_226)
					{
						case 0:
							func_1359(0.2f, 0);
							func_1360(0.01f);
							func_223(&uLocal_239);
							break;
						case 1:
							func_1359(0.25f, 0);
							func_1360(0.015f);
							start_anim_scene(&(uLocal_7226[0]));
							if (!func_180(2048))
							{
								_play_sound_from_position("BELL_ALARM", 1800.987f, -1318.473f, 55.67563f, "BRT2_Sounds", false, 0, true, 0);
								func_1292(2048);
							}
							if (!func_1266())
							{
								func_1361(uParam0, "BRT2_MOREBOTTLE", 1, 0, 0);
							}
							func_223(&uLocal_239);
							break;
						case 2:
							func_1359(0.3f, 0);
							func_1360(0.02f);
							break;
					}
					iLocal_226++;
					iLocal_801 = get_game_timer();
				}
			}
			if (iLocal_226 > 2)
			{
				func_134(uParam0, 2);
				func_135(uParam0, 51);
				func_223(&uLocal_236);
			}
			break;
		case 2:
			if (!func_163(&(Local_14.f_8[2]), 0) && !func_163(&(Local_14.f_8[1]), 0))
			{
				func_134(uParam0, 29);
			}
			else if (get_ped_config_flag(&(Local_14.f_8[2]), 138, true) == 0)
			{
				if (func_903(&uLocal_236) > 1f)
				{
					set_ped_combat_attributes(iVar782, 27, true);
					set_ped_config_flag(&(Local_14.f_8[2]), 138, true);
				}
			}
			break;
	}
	if (func_180(1))
	{
		if (func_1269(uParam0) == 0)
		{
			if (iLocal_224 == 0)
			{
				iLocal_224 = get_game_timer();
			}
			else if ((get_game_timer() - iLocal_224) > 2500)
			{
				func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
			}
		}
	}
	return func_1269(uParam0) == 29;
}

bool func_789(var uParam0)
{
	set_ped_combat_attributes(bVar782, 27, false);
	func_170(&iLocal_770);
	if (func_163(bVar782, 0))
	{
		clear_ped_tasks(bVar782, 1, 0);
	}
	func_11(&uLocal_732, 1, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_790(var uParam0)
{
	set_clock_time(2, 0, 0);
	if (!func_1315(-1, 0))
	{
		return false;
	}
	if (!func_1316())
	{
		return false;
	}
	func_1362(-1, 0);
	func_1363(0);
	func_1363(1);
	func_1317();
	if (!func_1342(&uVar0))
	{
		func_1343(-1623728698, 0);
	}
	if (!func_175(8))
	{
		func_176(8, 16384, 1);
	}
	_play_sound_from_position("BELL_ALARM", 1800.987f, -1318.473f, 55.67563f, "BRT2_Sounds", false, 0, true, 0);
	func_1280(1);
	func_1347(uParam0, 1, 0, 0);
	set_current_ped_weapon(Global_35, get_best_ped_weapon(Global_35, false, false), false, 0, false, false);
	start_anim_scene(&(uLocal_7226[0]));
	func_1102(420709909, 1, 0);
	func_1230();
	func_182(515619039, 0, -1f, 0, 1, 0, 1, 0);
	func_182(-1178046730, 0, 1f, 0, 1, 0, 1, 0);
	_0x0d7fd6a55fd63aef(19, 3, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_791(var uParam0)
{
	if (func_904())
	{
		return false;
	}
	func_1364(95);
	func_1365(1);
	func_1313(&(Local_14.f_38[0]), func_1366(6, 0), 2, 1073741824);
	if (func_120(uParam0, 4) || func_120(uParam0, 4194304))
	{
		task_put_ped_directly_into_cover(Global_35, 1841.705f, -1283.688f, 41.829f, -1, 0, 0f, 1, 0, &(iLocal_7272[4]), 0, 0, 0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_792(var uParam0)
{
	set_ped_stealth_movement(bVar782, false, 0, 0);
	set_current_ped_weapon(bVar782, get_best_ped_weapon(bVar782, false, false), true, 0, false, false);
	task_swap_weapon(bVar782, 1, 0, 0, 0);
	set_blocking_of_non_temporary_events(bVar782, true);
	func_1367(1);
	func_1318();
	func_134(uParam0, 0);
	func_223(&uLocal_251);
	return uParam0->f_607 == uParam0->f_607;
}

int func_793(var uParam0)
{
	func_1319(3);
	func_1368(uParam0);
	func_1241(uParam0);
	func_1369(uParam0);
	func_1347(uParam0, 0, 0, 1);
	func_1370(uParam0);
	func_1371();
	func_1372();
	func_1373(uParam0);
	func_1345(uParam0);
	func_1255(uParam0, func_1254(uParam0), 75f, 100f, 0, 0, 1, 422991367);
	if (func_1374(&uLocal_263, 40f))
	{
		func_1375(uParam0, bVar782, 1, 1);
	}
	else
	{
		func_1375(uParam0, bVar782, 0, 1);
	}
	switch (func_1269(uParam0))
	{
		case 0:
			func_1376();
			if (func_1256(uParam0) >= 6)
			{
				func_1359(0.6f, 1);
				func_1367(5);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (&iLocal_7326[4] >= 4 && func_1377())
			{
				func_1359(1f, 0);
				func_1360(0.025f);
				func_1367(7);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (func_894(Global_35, &(Local_14.f_38[0]), 1, 1) < 20f && func_894(bVar782, &(Local_14.f_38[0]), 1, 1) < 20f)
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_794(var uParam0)
{
	remove_cover_point(&(iLocal_7272[0]));
	remove_cover_point(&(iLocal_7272[1]));
	remove_cover_point(&(iLocal_7272[2]));
	remove_cover_point(&(iLocal_7272[3]));
	remove_cover_point(&(iLocal_7272[5]));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_795(var uParam0)
{
	func_1378();
	if (!func_1315(-1, 0))
	{
		return false;
	}
	if (!func_1316())
	{
		return false;
	}
	func_1317();
	set_clock_time(3, 0, 0);
	if (!func_175(8))
	{
		func_176(8, 16384, 1);
	}
	if (!func_1342(&uVar0))
	{
		func_1343(-1623728698, 0);
	}
	func_1347(uParam0, 1, 1, 0);
	_play_sound_from_position("BELL_ALARM", 1800.987f, -1318.473f, 55.67563f, "BRT2_Sounds", false, 0, true, 0);
	start_anim_scene(&(uLocal_7226[1]));
	if (func_120(uParam0, 4))
	{
		iLocal_7478 = 1;
	}
	func_1102(420709909, 1, 0);
	func_1230();
	func_1318();
	_0x0d7fd6a55fd63aef(19, 3, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_796(var uParam0)
{
	if (!func_1379())
	{
		return false;
	}
	_0x0d7fd6a55fd63aef(21, 3, 0);
	func_1234(0.85f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_797(var uParam0)
{
	if (func_163(&(Local_14.f_33[0]), 0))
	{
		delete_ped(Local_14.f_33[0]);
	}
	if (func_163(&(Local_14.f_33[1]), 0))
	{
		delete_ped(Local_14.f_33[1]);
	}
	iVar1 = 2;
	if (!_0xa19447d83294e29f(&(Local_14.f_38[0]), &iVar1, &uVar0))
	{
		return false;
	}
	func_1380();
	func_134(uParam0, 0);
	func_135(uParam0, 1);
	func_1259(uParam0, 19);
	func_1265(uParam0);
	func_447(8);
	iLocal_770[0] = func_1260(203020899, iVar7266, 1);
	iLocal_770[1] = func_1260(203020899, iVar7267, 1);
	func_182(-215861784, 0, 1f, 0, 1, 0, 0, 0);
	func_182(-543954117, 0, -1f, 0, 1, 0, 0, 0);
	set_roads_in_area(1624.73f, -1553.41f, 57.78f, 1468.08f, -1398.04f, 77.19f, 0, 1, 0);
	clear_area(1583.72f, -1500.483f, 61.8614f, 20f, 1064968);
	_request_metaped_outfit(1066034872, -1777566710);
	_request_metaped_outfit(36009259, -1777566710);
	return uParam0->f_607 == uParam0->f_607;
}

int func_798(var uParam0)
{
	func_1381(uParam0);
	func_1345(uParam0);
	func_1382(uParam0);
	func_1319(4);
	func_1241(uParam0);
	func_1347(uParam0, 0, 0, 0);
	func_1383(uParam0);
	func_1384();
	func_1372();
	func_1385(uParam0);
	func_1386(uParam0);
	switch (func_1269(uParam0))
	{
		case 0:
			if (func_1387(uParam0) && iVar7221 == 6)
			{
				func_1388();
				iLocal_7494 = 3;
				func_134(uParam0, 1);
			}
			break;
		case 1:
			if (func_1389())
			{
				func_1390(&(Local_7346[0]->f_7), 0, 0, 0);
				func_1390(&(Local_7346[1]->f_7), 0, 0, 0);
				func_1390(&(Local_7346[2]->f_7), 0, 0, 0);
				func_1390(&(Local_7374[0]->f_7), 0, 0, 0);
				func_1390(&(Local_7374[1]->f_7), 0, 0, 0);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
				func_40(0);
				_0x062b4a4a3396351d(player_id());
				func_1259(uParam0, 0);
				func_171(uParam0, bVar782, 1);
				if (!is_ped_on_mount(Global_35))
				{
					func_47(0, 0);
					clear_ped_tasks(bVar7476, 1, 0);
					set_player_control(player_id(), false, 0, false);
					task_mount_animal(Global_35, bVar7476, 20000, -1, 1073741824, 1, 0, 0);
				}
				_0x3946fc742ac305cd(player_id(), bVar782, "BRT2_Blocker", 0f, 0f, 0f, bVar782, 0);
				func_223(&uLocal_7488);
				func_1261(&uLocal_7488);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				disable_control_action(0, -874806616, false);
				disable_control_action(0, -1453452184, false);
				if (func_1258(uParam0, "BRT2_IG7", 1))
				{
					func_1391(uParam0);
					if (func_175(8))
					{
						func_176(8, 16384, 0);
						_set_ped_body_component(bVar782, -1625272662);
						_update_ped_variation(bVar782, false, false, true, true, false);
					}
					if (!func_1342(&uVar0))
					{
						func_1343(-1623728698, 1);
					}
					_0x0d7fd6a55fd63aef(22, 3, 1);
					_0x380a2e353ad30917(bVar782, 10f, 7f);
					func_134(uParam0, 3);
					func_135(uParam0, 7);
				}
			}
			else if (get_script_task_status(Global_35, 1868526510, true) != 0 && get_script_task_status(Global_35, 1868526510, true) != 1)
			{
				clear_ped_tasks(bVar7476, 1, 0);
				set_player_control(player_id(), false, 0, false);
				task_mount_animal(Global_35, bVar7476, 20000, -1, 1073741824, 1, 0, 0);
			}
			break;
		case 3:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			func_1392(Global_35, bVar782, 1, 1, 1, 0, 0, 1, 0, 1, 1);
			func_1393(bVar782, Global_35, 1, 1, 1, 0, 0, 1, 0, 1, 1);
			func_1394(&uLocal_7310, bVar782);
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				if (!is_player_control_on(player_id()))
				{
					set_player_control(player_id(), true, 0, false);
				}
			}
			else if (get_script_task_status(Global_35, 1868526510, true) != 0 && get_script_task_status(Global_35, 1868526510, true) != 1)
			{
				if (func_1395(bVar7476, 1435919172))
				{
					clear_ped_tasks(bVar7476, 1, 0);
				}
				set_entity_invincible(bVar7476, true);
				set_player_control(player_id(), false, 0, false);
				task_mount_animal(Global_35, bVar7476, 20000, -1, 1073741824, 1, 0, 0);
			}
			break;
		case 4:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			if (func_1256(uParam0) == 51)
			{
				func_1396(Global_35, 1);
				func_1397(bVar782, 1);
				func_1398(&uLocal_7310);
				func_134(uParam0, 29);
				return 1;
			}
			break;
	}
	func_1399(player_ped_id(), 1515.099f, -1589.158f, 71.2f, 0, 40f, 20f, 10f, 0f, 1, 1, 1, 0);
	func_1399(bVar782, 1515.099f, -1589.158f, 71.2f, 0, 40f, 20f, 10f, 1084227584, 1, 1, 1, 0);
	return 0;
}

bool func_799(var uParam0)
{
	disable_control_action(0, -874806616, false);
	disable_control_action(0, -1453452184, false);
	func_422(&uLocal_799, 16777216);
	func_171(uParam0, bVar782, 1);
	_0x660a8f876df1d4f8(21);
	set_roads_back_to_original(1393.283f, -1421.064f, 62.6939f, 1593.524f, -1458.783f, 31.70834f, 1, 1);
	func_1234(1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_800(var uParam0)
{
	func_1273((*Global_1835011)[20]->f_1, 1);
	func_422(&uLocal_799, 16777216);
	func_359(8);
	func_1317();
	func_1400();
	func_1347(uParam0, 1, 1, 1);
	func_1102(420709909, 1, 0);
	func_1230();
	start_anim_scene(&(uLocal_7226[1]));
	if (!does_entity_exist(bVar7266))
	{
		iLocal_7269 = func_1401(36009259, func_391(6, 0), 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
		return false;
	}
	if (!does_entity_exist(bVar7267))
	{
		iLocal_7270 = func_1401(1066034872, func_391(6, 1), 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
		return false;
	}
	if (func_163(bVar7266, 0))
	{
		func_442(bVar7266, 1508.507f, -1579.605f, 71.3265f, -170.29f, 2, 0f);
		func_1402(Global_35, bVar7266, 0, -1, 1);
	}
	else
	{
		return false;
	}
	if (func_163(bVar7267, 0))
	{
		func_442(bVar7267, 1510.386f, -1576.5f, 72.37f, -170.29f, 2, 0f);
		func_1402(iVar782, bVar7267, 0, -1, 1);
	}
	else
	{
		return false;
	}
	set_clock_time(3, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_801(var uParam0)
{
	disable_control_action(0, -874806616, false);
	disable_control_action(0, -1453452184, false);
	if (!func_1379())
	{
		return false;
	}
	func_1403();
	set_current_ped_weapon(iVar782, -1569615261, true, 0, false, false);
	if (func_175(8))
	{
		func_176(8, 16384, 0);
		_set_ped_body_component(iVar782, -1625272662);
		_update_ped_variation(iVar782, false, false, true, true, false);
	}
	if (!func_1342(&uVar0))
	{
		func_1404(-1623728698, 0);
	}
	StringCopy(&Local_7280, "camera_treatments", 64);
	StringCopy(&(Local_7280.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_7280);
	_0x0d7fd6a55fd63aef(21, 3, 0);
	_0x0d7fd6a55fd63aef(22, 3, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_802(var uParam0)
{
	disable_control_action(0, -874806616, false);
	disable_control_action(0, -1453452184, false);
	if (!func_8(uParam0, 8))
	{
		if (func_1258(uParam0, "BRT2_IG7", 1))
		{
			func_1391(uParam0);
			_0x0d7fd6a55fd63aef(22, 3, 1);
			_0x380a2e353ad30917(bVar782, 10f, 7f);
			func_135(uParam0, 20);
		}
		func_1261(&uLocal_7488);
	}
	else
	{
		func_135(uParam0, 1);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_803(var uParam0)
{
	func_1399(player_ped_id(), 1515.099f, -1589.158f, 71.2f, 0, 40f, 20f, 10f, 0f, 1, 1, 1, 0);
	func_1399(bVar782, 1515.099f, -1589.158f, 71.2f, 0, 40f, 20f, 10f, 1084227584, 1, 1, 1, 0);
	if (func_1256(uParam0) > 8)
	{
		if (func_1405(22))
		{
			func_1406(22, 1, 0);
		}
	}
	switch (func_1256(uParam0))
	{
		case 20:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			func_1392(Global_35, bVar782, 1, 1, 1, 0, 0, 1, 0, 1, 1);
			func_1393(bVar782, Global_35, 1, 1, 1, 0, 0, 1, 0, 1, 1);
			func_1394(&uLocal_7310, bVar782);
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				if (!is_player_control_on(player_id()))
				{
					set_player_control(player_id(), true, 0, false);
				}
			}
			else if (get_script_task_status(Global_35, 1868526510, true) != 0 && get_script_task_status(Global_35, 1868526510, true) != 1)
			{
				if (func_1395(bVar7266, 1435919172))
				{
					clear_ped_tasks(bVar7266, 1, 0);
				}
				set_entity_invincible(bVar7266, true);
				set_player_control(player_id(), false, 0, false);
				task_mount_animal(Global_35, bVar7266, 20000, -1, 1073741824, 1, 0, 0);
			}
			if (!func_1407("BRT2_IG7"))
			{
				if (!func_164(iVar796, 67108864))
				{
					func_422(&uLocal_799, 67108864);
					set_gameplay_ped_hint(bVar782, 0f, 0f, 0f, true, 8000, 1000, 2000);
					_0x870708a6e147a9ad(bVar782, "", 10f, 0, 0, 0, 0, 0, 0, -1);
				}
				if (func_506(&uLocal_7488))
				{
					func_223(&uLocal_7488);
				}
				set_ped_config_flag(bVar782, 297, true);
				set_ped_config_flag(bVar782, 130, true);
				set_ped_config_flag(bVar782, 315, true);
				set_ped_config_flag(bVar782, 317, true);
				set_ped_config_flag(bVar782, 301, false);
				set_ped_config_flag(bVar782, 178, true);
				set_ped_config_flag(bVar782, 359, true);
				set_ped_config_flag(Global_35, 308, true);
				bLocal_7271 = func_955(bVar782);
				if (_0x3ee1f7a8c32f24e1(get_player_index(), &bLocal_7271, 0, 0))
				{
					if (!func_10(iVar7483))
					{
						iLocal_7486 = func_1334("BRT2_OUT_Y", -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						iLocal_7487 = func_1334("BRT2_OUT_N", 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1408(&iLocal_7486, bVar782);
						func_1408(&iLocal_7487, bVar782);
						func_1335(iVar7483, 14, 1, 1);
						func_1335(iVar7484, 14, 1, 1);
					}
				}
				else if (func_10(iVar7483))
				{
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
				}
				if (func_1409(iVar7483, 1))
				{
					func_1273((*Global_1835011)[20]->f_1, 1);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 21);
				}
				else if (func_1409(iVar7484, 1))
				{
					func_1273((*Global_1835011)[20]->f_1, 0);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 22);
				}
				else if (func_903(&uLocal_7488) > 8f)
				{
					func_1273((*Global_1835011)[20]->f_1, 2);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 23);
				}
			}
			break;
		case 21:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			if (func_1258(uParam0, "BRT2_IG7_YES", 0))
			{
				func_135(uParam0, 24);
			}
			break;
		case 22:
			if (func_1258(uParam0, "BRT2_IG7_NO", 0))
			{
				func_135(uParam0, 25);
			}
			break;
		case 23:
			if (func_1258(uParam0, "BRT2_IG7_LATER", 0))
			{
				func_135(uParam0, 51);
			}
			break;
		case 24:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			if (!func_1407("BRT2_IG7"))
			{
				set_ped_config_flag(bVar782, 297, false);
				set_ped_config_flag(bVar782, 130, true);
				set_ped_config_flag(bVar782, 315, true);
				set_ped_config_flag(bVar782, 317, false);
				set_ped_config_flag(bVar782, 301, false);
				set_ped_config_flag(bVar782, 359, false);
				set_ped_config_flag(Global_35, 308, false);
				set_ped_config_flag(bVar782, 178, false);
				func_135(uParam0, 27);
			}
			break;
		case 25:
			if (func_1411(uParam0))
			{
				func_1396(Global_35, 1);
				func_1397(bVar782, 1);
				func_1398(&uLocal_7310);
				func_135(uParam0, 51);
			}
			break;
		case 26:
			if (func_1258(uParam0, "BRT2_SEANLEAVE", 0))
			{
				func_1396(Global_35, 1);
				func_1397(bVar782, 1);
				func_1398(&uLocal_7310);
				func_135(uParam0, 51);
			}
			break;
		case 27:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			func_1396(Global_35, 1);
			func_1397(bVar782, 1);
			func_1398(&uLocal_7310);
			func_135(uParam0, 1);
			break;
		case 1:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			if (func_1289())
			{
				func_223(&uLocal_239);
				func_135(uParam0, 2);
			}
			break;
		case 2:
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			if (func_364((*Global_1835011)[20]->f_1) == 1)
			{
				func_1263(8);
				func_223(&uLocal_266);
				func_1412();
				func_135(uParam0, 3);
			}
			else if (func_364((*Global_1835011)[20]->f_1) == 0)
			{
				func_1263(8);
				func_135(uParam0, 51);
			}
			else
			{
				func_135(uParam0, 51);
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1412();
			disable_control_action(0, -874806616, false);
			disable_control_action(0, -1453452184, false);
			set_player_control(player_id(), false, 0, false);
			prefetch_srl("script@tripskip@brt2_srl");
			_0xae00387e53b1e9fc();
			_0xef1a8a484118735e();
			_0x1b3c2d961f5fc0e1("script@Cinematics@TripSkip@Clemens_Point");
			open_sequence_task(&iVar0);
			task_swap_weapon(false, 0, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, 1512.23f, -1613.28f, 67.89f, 1.5f, -1, 0.25f, 8192, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(bVar782, iVar0);
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			task_swap_weapon(false, 0, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, 1498.37f, -1628.81f, 63.65f, 1.5f, -1, 0.25f, 8192, 40000f);
			close_sequence_task(iVar0);
			_task_perform_sequence_2(Global_35, iVar0, 0.25f, 0.25f);
			clear_sequence_task(&iVar0);
			if (_0xdd0b7c5ae58f721d(&Local_7280))
			{
				_0xb8b207c34285e978(&Local_7280);
			}
			func_223(&uLocal_266);
			func_135(uParam0, 4);
			break;
		case 4:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1412();
			if ((func_903(&uLocal_266) > 3f && _0xaa235e2f2c09e952("script@Cinematics@TripSkip@Clemens_Point")) && is_srl_loaded())
			{
				clear_ped_tasks_immediately(bVar782, false, true);
				clear_ped_tasks_immediately(get_mount(bVar782), false, true);
				clear_ped_tasks_immediately(Global_35, false, true);
				clear_ped_tasks_immediately(get_mount(Global_35), false, true);
				func_442(get_mount(Global_35), 1182.4f, -1556f, 53.4f, 19.7f, 1, 1073741824);
				func_442(get_mount(bVar782), 1180.3f, -1561f, 53.7f, 19.7f, 1, 1073741824);
				force_ped_motion_state(get_mount(bVar782), -1115154469, false, 0, false);
				simulate_player_input_gait(player_id(), 1.75f, 2000, 0f, true, false);
				task_follow_waypoint_recording_at_offset(bVar782, "brt2_outroCME", -1.5f, 5, 4196384, -1, 0);
				task_follow_waypoint_recording_at_offset(Global_35, "brt2_outroCME", 1f, 5, 11264, -1, 0);
				_0x5e3ccf03995388b5(-1723251484, 1192.2f, -1557f, 55.4f);
				func_60(1);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				end_srl();
				prefetch_srl("script@tripskip@brt2_burning_srl");
				_0xae00387e53b1e9fc();
				_0xef1a8a484118735e();
				_0x1b3c2d961f5fc0e1("script@Cinematics@TripSkip@Clemens_Point");
				func_223(&uLocal_266);
				func_135(uParam0, 5);
			}
			break;
		case 5:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1412();
			func_1413(2, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
			set_ped_desired_move_blend_ratio(bVar782, 2.5f);
			set_ped_desired_move_blend_ratio(Global_35, 2.5f);
			func_1414(bVar782, 2.5f);
			func_1414(Global_35, 2.5f);
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5) - func_224(&uLocal_266)), -1485537194, 1919.4f, -1341.3f, 49.1f, 1, 2147483647))
			{
				_play_sound_from_position("MAIN_LOOP", 1916.311f, -1299.35f, 42f, "VEGETATION_FIRE_SOUNDSET", false, 0, true, 0);
				clear_ped_tasks_immediately(bVar782, false, true);
				clear_ped_tasks_immediately(Global_35, false, true);
				func_442(get_mount(bVar782), 1906.244f, -1335.909f, 41.9041f, 144.3f, 2, 1073741824);
				func_442(get_mount(Global_35), 1908.244f, -1335.909f, 41.9041f, 144.3f, 2, 1073741824);
				freeze_entity_position(get_mount(bVar782), true);
				freeze_entity_position(get_mount(Global_35), true);
				func_1413(0, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
				func_1413(1, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				func_1406(53, 1, 0);
				func_1415(134, 0, 0, 0, 0);
				func_1415(138, 0, 0, 0, 0);
				func_223(&uLocal_266);
				func_135(uParam0, 6);
			}
			break;
		case 6:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1412();
			func_1413(2, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
			begin_srl();
			iLocal_806 = get_frame_count();
			func_135(uParam0, 7);
			break;
		case 7:
			func_1412();
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1413(2, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
			if ((get_frame_count() - iVar803) > 5)
			{
				end_srl();
				prefetch_srl("script@tripskip@clemens_cove_srl");
				_0xae00387e53b1e9fc();
				_0xef1a8a484118735e();
				func_135(uParam0, 8);
			}
			break;
		case 8:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1412();
			func_1413(2, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
			if (func_903(&uLocal_266) >= 9f && !is_screen_faded_out())
			{
				do_screen_fade_out(3000);
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5) - func_224(&uLocal_266)), 1506582591, 749.7f, -1202.1f, 46f, 1, 2147483647) && is_screen_faded_out())
			{
				freeze_entity_position(get_mount(bVar782), false);
				freeze_entity_position(get_mount(Global_35), false);
				func_442(get_mount(bVar782), 756.4f, -1186.3f, 45f, 144.3f, 6, 1073741824);
				func_442(get_mount(Global_35), 761.5f, -1179.3f, 44.9f, 144.3f, 6, 1073741824);
				task_follow_waypoint_recording_at_offset(bVar782, "brt2_outroCME", -1.5f, 444, 9216, -1, 0);
				task_follow_waypoint_recording_at_offset(Global_35, "brt2_outroCME", 1f, 439, 9216, -1, 0);
				force_ped_motion_state(get_mount(bVar782), -1415276238, false, 0, false);
				force_ped_motion_state(get_mount(Global_35), -1415276238, false, 0, false);
				_0xa2f8b3b5fedfc100(bVar782, -1625272662);
				_update_ped_variation(bVar782, false, false, true, true, false);
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				_0xbc016635d6a73b31("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				_0x0f2a2175734926d8("MAIN_LOOP", "VEGETATION_FIRE_SOUNDSET");
				func_223(&uLocal_266);
				end_srl();
				do_screen_fade_in(1000);
				func_135(uParam0, 9);
			}
			break;
		case 9:
			func_1412();
			func_1413(2, Global_35, 0, get_mount(Global_35), 0, 1092616192, 1103626240);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1414(Global_35, 1.25f);
			func_1414(bVar782, 1.25f);
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5) - func_224(&uLocal_266)), 0, 749.7f, -1202.1f, 46f, 1, 2147483647))
			{
				_0xa54d643d0773eb65("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				func_60(0);
				_0x43037abfe214a851();
				_0x0a5a4f1979abb40e(&Local_7280);
				_0x798be43c9393632b(&Local_7280);
				clear_ped_tasks(Global_35, 1, 0);
				simulate_player_input_gait(player_id(), 1.501f, 3000, 0f, true, false);
				set_player_control(player_id(), true, 0, false);
				func_135(uParam0, 10);
			}
			else
			{
				_0x702b75dc9d3ede56(true);
				if (func_903(&uLocal_266) > 6f && !func_1416(1))
				{
					func_1258(uParam0, "BRT2_AFTER_CME", 0);
				}
			}
			break;
		case 10:
			func_1414(bVar782, 1.501f);
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, 663.47f, -1230.6f, 43.4f, 1.75f, -1, 3f, 8192, 40000f);
			task_dismount_animal(0, 0, 0, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, 668.77f, -1233.93f, 44.16f, 1f, -1, 0.25f, 8192, 40000f);
			close_sequence_task(iVar0);
			task_perform_sequence(bVar782, iVar0);
			clear_sequence_task(&iVar0);
			func_135(uParam0, 51);
			switch (func_1269(uParam0))
			{
				case 0:
					if (func_1256(uParam0) == 51)
					{
						return 1;
					}
					break;
			}
			return 0;
		}

bool func_804(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_805(int iParam0)
{
	iVar0 = 0;
	if (!decor_exist_on(iParam0, func_808()))
	{
		return iVar0;
	}
	if (decor_get_int(iParam0, func_808()) == 0)
	{
		Local_14.f_19[0] = get_vehicle_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(&(Local_14.f_19[0]), true, true);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			bVar2 = _get_ped_in_draft_seat(&(Local_14.f_19[0]), iVar1);
			if (func_163(bVar2, 0))
			{
				set_entity_as_mission_entity(bVar2, true, true);
			}
			iVar1++;
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_806(int iParam0)
{
	iVar0 = 0;
	if (!decor_exist_on(iParam0, func_808()))
	{
		return iVar0;
	}
	iVar1 = decor_get_int(iParam0, func_808());
	if (iVar1 == 0)
	{
		Local_14.f_27[1] = get_ped_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(&(Local_14.f_27[1]), true, true);
		iVar0 = 1;
	}
	if (iVar1 == 1)
	{
		Local_14.f_27[0] = get_ped_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(&(Local_14.f_27[0]), true, true);
		iVar0 = 1;
	}
	if (iVar1 == 2)
	{
		Local_14.f_27[2] = get_ped_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(&(Local_14.f_27[2]), true, true);
		iVar0 = 1;
	}
	return iVar0;
}

bool func_807(int iParam0)
{
	iVar0 = 0;
	iLocal_7264 = get_object_index_from_entity_index(iParam0);
	set_entity_as_mission_entity(iVar7261, true, true);
	if (does_entity_exist(iVar7261))
	{
		iVar0 = 1;
	}
	return iVar0;
}

char* func_808()
{
	return "genericMissionInt";
}

Vector3 func_809(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1944.945f, -1254.98f, 41.2866f;
				case 1:
					return 1941.572f, -1267.66f, 40.5366f;
				case 2:
					return 1919.303f, -1263.709f, 41.2866f;
				case 3:
					return 1915.102f, -1251.708f, 41.2866f;
				case 4:
					return 1916.217f, -1230.093f, 41.2866f;
				case 5:
					return 1901.661f, -1258.034f, 40.7866f;
				case 6:
					return 1884.212f, -1252.073f, 41.2866f;
				case 7:
					return 1893.649f, -1297.88f, 42.0366f;
				case 8:
					return 1902.504f, -1282.826f, 41.5366f;
				case 9:
					return 1907.366f, -1271.074f, 41.2866f;
				case 10:
					return 1878.365f, -1227.303f, 42.0129f;
				case 11:
					return 1871.204f, -1247.891f, 41.7553f;
				case 12:
					return 1861.701f, -1251.656f, 42.0056f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1700.274f, -1387.681f, 43.0199f;
				case 1:
					return 1697.665f, -1392.531f, 43.3325f;
				case 2:
					return 1697.203f, -1391.54f, 43.5723f;
				case 3:
					return 1705.267f, -1382.408f, 43.0723f;
				case 4:
					return 1886.064f, -1346.394f, 42.3763f;
				case 5:
					return 1886.069f, -1346.701f, 43.758f;
				case 6:
					return 1887.293f, -1346.134f, 43.96f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1011.016f, -1759.57f, 46.8355f;
				case 1:
					return 1010.972f, -1757.397f, 45.8354f;
				case 2:
					return 1019.049f, -1767.714f, 47.5942f;
				case 3:
					return 1160.18f, -1507.684f, 53.5812f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1856.747f, -1280.483f, 42.2745f;
				case 1:
					return 1954.761f, -1227.797f, 40.9169f;
				case 2:
					return 1956.637f, -1228.89f, 40.915f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1895.244f, -1342.203f, 42.021f;
				case 1:
					return 1896.059f, -1340.671f, 41.9672f;
				case 2:
					return 1850.773f, -1294.307f, 41.88f;
				case 3:
					return 1886.531f, -1269.443f, 41.88f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1947.352f, -1220.535f, 40.9009f;
				case 1:
					return 1951.768f, -1222.495f, 41.2327f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1492.381f, -1122.193f, 55.3053f;
				case 1:
					return 1491.848f, -1125.273f, 55.6892f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1841.936f, -1283.766f, 41.9154f;
				case 1:
					return 1845.706f, -1279.884f, 42.1654f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_810(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_811(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_812(var uParam0)
{
	return uParam0->f_862;
}

void func_813(var uParam0)
{
	if (func_1342(&iVar0))
	{
		if (func_583(iVar0, 0))
		{
			if (func_607(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_635(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_583(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_814(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1417(-1);
	}
	func_1418(1);
	set_entity_invincible(Global_35, true);
	if (!func_811(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_811(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_811(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_811(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_811(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_811(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_811(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_811(*iParam0, 4) && !func_811(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_811(*iParam0, 2048))
	{
		func_826(0, 0);
	}
	if (func_811(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_811(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_811(*iParam0, 8192))
	{
		func_1419();
	}
	if (!func_811(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_811(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_811(*iParam0, 1024))
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
		if (!func_811(*iParam0, 16))
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
						if (func_1420() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_399(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1421(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1422(2);
						func_1423(-1);
						func_1424(vVar3);
						func_1426(func_1425());
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
	if (!func_811(*iParam0, 4096))
	{
		func_1427(Global_35);
	}
	if (!func_811(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_811(*iParam0, 2097152))
	{
		if (func_1428() || _0x50f124e6ef188b22(Global_35))
		{
			func_1429(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_815(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_816(var uParam0)
{
	if (func_810(uParam0, 2048) && !func_399(func_1430(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		bVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(bVar1) && ((bVar0 && is_entity_in_volume(bVar1, uParam0->f_4, true, 0)) || func_810(uParam0, -2147483648))) && get_mount(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(bVar1))
			{
				iVar2 |= 32;
			}
			func_442(bVar1, func_1430(uParam0), func_1431(uParam0), iVar2, 1073741824);
		}
		bVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(bVar3) && ((bVar0 && is_entity_in_volume(bVar3, uParam0->f_4, true, 0)) || func_810(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, bVar3, true))
		{
			func_442(bVar3, func_1430(uParam0), func_1431(uParam0), 2, 1073741824);
		}
	}
}

void func_817(var uParam0)
{
	if ((func_810(uParam0, 268435456) && !func_399(func_1430(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		bVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(bVar0))
		{
			vVar1 = { func_1430(uParam0) };
			func_442(bVar0, vVar1, func_1432(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(bVar0, 0f);
			set_entity_velocity(bVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(bVar0, 0f);
		}
	}
}

void func_818(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_399(vParam1))
	{
		func_1433(uParam0, 2048, 1);
	}
	else
	{
		func_756(uParam0, 2048);
		if (bParam5)
		{
			func_756(uParam0, -2147483648);
		}
	}
}

void func_819(var uParam0)
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
					if (!func_1434(uParam0->f_13[iVar0], 8))
					{
						if (func_697(func_1083(iVar1, 0, 1, 0)))
						{
							if (!func_1435(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_697(func_1083(iVar1, 1, 1, 0)))
						{
							if (!func_1435(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_820(var uParam0, bool bParam1)
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

void func_821(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1180(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1436(iParam1, 29, bVar4, 1, 0);
			func_1436(iParam1, 31, bVar4, 1, 0);
			func_1436(iParam1, 30, bVar4, 1, 0);
			func_1436(iParam1, 22, bVar4, 1, 0);
			func_1436(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1120(32768) && func_1437(1108822547, 8)) && func_1438(10, iParam3))
	{
		func_1439(iParam1, 0, 1);
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
			iVar3 = func_1188(iVar1, 1);
			if (func_1437(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1438(iVar1, iParam3))
				{
				}
				else if ((func_1437(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1437(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1436(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1440(iVar3, 1, 6);
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
								func_1436(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1437(iVar3, 1))
							{
								func_1441(iVar3, 1, 6);
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

bool func_822(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1442((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_823(int iParam0)
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

int func_824(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_825(int iParam0, int iParam1)
{
	return func_1443(&uVar0, iParam0, iParam1);
}

void func_826(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_697(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1365(1);
	}
}

void func_827(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_828(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_829(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_830(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_831(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_832(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_833(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_834(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_835(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_836(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_837(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_838(var uParam0, int iParam1)
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

int func_839(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_854((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_840(int iParam0, int iParam1)
{
	iVar0 = func_1444(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_841(var uParam0, char* sParam1, int iParam2)
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

int func_842(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_863((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_843(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_844(var uParam0, int iParam1)
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

int func_845(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_869((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_846(var uParam0, int iParam1)
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

int func_847(var uParam0, char* sParam1)
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

int func_848(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_858((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_849(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
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

int func_850(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_871((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_851(var uParam0, char* sParam1)
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

int func_852(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_856((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_853(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_854(var uParam0)
{
	return *uParam0 != 0;
}

void func_855(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_856(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_857(var uParam0)
{
	if (!func_885(uParam0->f_3, 1))
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
		func_843(&(uParam0->f_3), 1);
	}
}

bool func_858(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_859(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_860(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_861(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_1445(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_862(var uParam0)
{
	if (func_885(*uParam0, 2))
	{
		return true;
	}
	if (!func_885(*uParam0, 1))
	{
		func_1446(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_843(uParam0, 2);
		return true;
	}
	return false;
}

bool func_863(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_864(var uParam0)
{
	if (!func_885(uParam0->f_2, 1))
	{
		if (func_1447(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1448(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_307())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1039())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_843(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_865(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_866(var uParam0, int iParam1)
{
	if (!func_885(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_867(var uParam0)
{
	return *uParam0 != 0;
}

void func_868(var uParam0)
{
	if (!func_885(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_843(&(uParam0->f_2), 1);
	}
}

bool func_869(var uParam0)
{
	return *uParam0 != 0;
}

void func_870(var uParam0)
{
	if (!func_885(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_843(&(uParam0->f_3), 1);
	}
}

bool func_871(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_872(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_873(var uParam0)
{
	return func_1449(*uParam0);
}

void func_874(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_875(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_876(var uParam0)
{
	if (!func_885(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_843(&(uParam0->f_2), 1);
	}
}

bool func_877(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_879(var uParam0, bool bParam1, char* sParam2)
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

void func_880(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_752(bParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(bParam1))
		{
		}
		return;
	}
	iVar0 = func_1450(uParam0, bParam1);
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
		bVar1 = func_1451(uParam0, sParam2);
		if (does_entity_exist(bVar1) && bVar1 != bParam1)
		{
			func_1452(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1453(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = bParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1312(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1454(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_881(int iParam0)
{
	if (!func_192(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_882(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_902(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1455(uParam0, 0))
			{
				if (func_1456(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1457(uParam0, 1, &iVar0))
					{
					}
					if (func_1458(uParam0, 3, &cVar2))
					{
					}
					if (func_1457(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1457(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1457(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1457(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1457(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1459(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_504((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_504(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_504(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_220(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1459(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_504(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1455(uParam0, 12))
			{
				if (func_1457(uParam0, 13, &iVar0))
				{
				}
				if (func_1457(uParam0, 14, &iVar1))
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

void func_883(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_220((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_220((*uParam0)[iVar0], 1))
		{
			func_1460((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_884(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_854((*uParam0)[iVar1]))
		{
			if (func_840((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1461((*uParam0)[iVar1]))
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
		if (func_856((*uParam1)[iVar1]))
		{
			if (func_840((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1462((*uParam1)[iVar1]))
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
		if (func_858((*uParam2)[iVar1]))
		{
			if (func_840((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1463((*uParam2)[iVar1]))
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
		if (func_860((*uParam3)[iVar1]))
		{
			if (func_840((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_861((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		if (!func_862(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_863((*uParam5)[iVar1]))
		{
			if (func_840((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1447((*uParam5)[iVar1]))
				{
					if (!func_886((*uParam5)[iVar1]))
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
		if (func_863((*uParam5)[iVar1]))
		{
			if (func_840((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1447((*uParam5)[iVar1]))
				{
					if (func_886((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_865((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1464((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_867((*uParam6)[iVar1]))
		{
			if (func_840((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1465((*uParam6)[iVar1]))
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
		if (func_869((*uParam7)[iVar1]))
		{
			if (func_840((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1466((*uParam7)[iVar1]))
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
		if (func_871((*uParam8)[iVar1]))
		{
			if (func_840((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1467((*uParam8)[iVar1]))
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
		if (func_873((*uParam9)[iVar1]))
		{
			if (func_840((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1468((*uParam9)[iVar1]))
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
		if (func_875((*uParam10)[iVar1]))
		{
			if (func_840((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1469((*uParam10)[iVar1]))
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
		if (func_877((*uParam11)[iVar1]))
		{
			if (func_840((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1470((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_885(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_886(var uParam0)
{
	if (func_885(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_2, 1))
	{
		func_864(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_887(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_465(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_261(iParam1)) && func_1471(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1472(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1473(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1474(iParam1);
		return true;
	}
	return false;
}

bool func_888(var uParam0)
{
	if (!func_399(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1475(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1475(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1475(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1475(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1475(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1475(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1475(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1475(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1475(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1475(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1475(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1475(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1475(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1475(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1475(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1475(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1475(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1475(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1475(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1475(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1475(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1475(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1475(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1475(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1475(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1475(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1475(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1475(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1475(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1475(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1475(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1475(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1475(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_399(uParam0->f_5417);
}

bool func_889(int iParam0, var uParam1)
{
	uParam1->f_10 = func_269(uParam1->f_10);
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
		if (func_399(uParam1->f_6))
		{
		}
	}
	bVar0 = func_398();
	if (*uParam1)
	{
		if (bVar0 && !func_330((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1476(5))
			{
				func_533(5);
				func_1477(5);
				func_1423(0);
				func_1422(0);
			}
		}
	}
	if (func_1478(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_330((*Global_1835011)[37]->f_1, 1)) && !func_330((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_330((*Global_1835011)[43]->f_1, 1)) && !func_330((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_218(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_536(iVar1))
	{
		bVar3 = true;
		if (func_1479(iVar1))
		{
			bVar4 = true;
		}
		if (func_543(iVar1))
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
				func_544(uParam1->f_10);
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
			if (!func_1476(0) && func_1476(1))
			{
				func_1480(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1481())
			{
				func_1482();
			}
			func_1423(0);
			func_1422(0);
			func_1424(uParam1->f_6);
		}
	}
	if (!func_536(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1483(uParam1->f_10) == 0 || func_1484(uParam1->f_10) == 0) || func_1485(uParam1->f_10) == 0)
			{
				func_1486(uParam1->f_10);
			}
			func_1487(uParam1->f_10);
			func_1488(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_218(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_536(iVar1))
	{
		bVar3 = true;
		if (func_1479(iVar1))
		{
			bVar4 = true;
		}
		if (func_543(iVar1))
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
			if (!func_399(uParam1->f_6))
			{
				set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(bVar2, uParam1->f_9);
				_0x9587913b9e772d29(bVar2, 0);
			}
		}
	}
	if (func_1489(uParam1->f_10))
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
			Var8 = { func_1490(uParam1->f_10) };
			Var10 = { func_1491() };
			func_1492(bVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, bVar2);
			set_ped_config_flag(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_529(uParam1->f_10))
	{
		set_entity_as_mission_entity(bVar2, true, true);
		func_1493(uParam1->f_10);
		if (uParam1->f_2 && !func_399(uParam1->f_6))
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
	func_528(uParam1->f_10);
	if (func_529(uParam1->f_10))
	{
		iVar16 = func_265(uParam1->f_10);
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

bool func_890(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_891(bool bParam0)
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

bool func_892(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1494(iParam1))
	{
		return false;
	}
	iVar0 = func_1495(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_893(var uParam0, bool bParam1)
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

float func_894(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_895(int iParam0, int iParam1, int iParam2)
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

bool func_896(var uParam0, int iParam1)
{
	switch (func_1496(uParam0))
	{
		case 0:
			if (!func_1497(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1498(uParam0, 1);
			break;
		case 1:
			func_1499(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_814(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1498(uParam0, 2);
			break;
		case 2:
			if (func_1500(uParam0))
			{
				func_1501(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1498(uParam0, 3);
			}
			break;
		case 3:
			if (func_903(&(uParam0->f_3)) >= 1f)
			{
				func_1498(uParam0, 4);
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
			func_1502(&iVar1, 0);
			release_script_audio_bank();
			func_1498(uParam0, 0);
			return true;
	}
	return false;
}

void func_897(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1503(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_898(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1504(uParam0, iVar0) };
	if (func_1506(&(uParam0->f_10792), Var1, func_1505(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1507(&(uParam0->f_10792), 524288))
		{
			func_383(uParam0, 67108864);
			func_1508(&(uParam0->f_10792), 524288);
		}
		func_1509(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_899(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_900(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1510(uParam0);
		func_1511(uParam0);
		return true;
	}
	if (func_1512(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_921(uParam0);
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
			func_1513(uParam0);
			func_899(uParam0, 524288);
			func_1514(uParam0);
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

bool func_901(var uParam0)
{
	iVar0 = 1;
	if (!func_1515(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1516(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1517(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_429(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_881(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_902(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_902(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1518(uParam0);
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

float func_903(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_506(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_556() - uParam0->f_1);
}

bool func_904()
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

void func_905(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_906()
{
	if (!func_164(iVar797, 32))
	{
		_request_propset(iVar7301);
		_request_propset(iVar7302);
		func_422(&uLocal_799, 32);
	}
	if (_has_propset_loaded(iVar7301) && _has_propset_loaded(iVar7302))
	{
		return true;
	}
	return false;
}

bool func_907(var uParam0)
{
	if (func_33(uParam0) != iLocal_90)
	{
		return true;
	}
	if (!does_entity_exist(iVar781))
	{
		if (func_887(uParam0, 5, &uLocal_784, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0))
		{
			func_151(uParam0, iVar781, 0, 0, 0, 0, 0);
			set_blocking_of_non_temporary_events(iVar781, true);
			if (!func_940(uParam0))
			{
				func_1313(iVar781, func_226(2, 2), 2, 1073741824);
			}
		}
		else
		{
			return false;
		}
	}
	if (!does_entity_exist(iVar7261))
	{
		iLocal_7264 = create_object(-1811911736, 1013.47f, -1764.25f, 47.61f, true, true, false, false, true);
		if (does_entity_exist(iVar7261))
		{
			set_entity_rotation(iVar7261, 85.85f, 5.67f, -36.89f, 2, true);
			freeze_entity_position(iVar7261, true);
			func_428(uParam0, iVar7261, "P_CS_SEANHAT01X01", 0, 0, 0, 0);
		}
		else
		{
			return false;
		}
	}
	func_1519(-1, 0);
	func_151(uParam0, &(Local_14.f_27[0]), 0, 0, 0, 0, 0);
	func_151(uParam0, &(Local_14.f_27[1]), 0, 0, 0, 0, 0);
	func_151(uParam0, &(Local_14.f_27[2]), "S_M_M_BwmWorker_01", 0, 0, 0, 0);
	if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_27[2])))
	{
		return false;
	}
	_set_ped_body_component(&(Local_14.f_27[2]), 41788943);
	_update_ped_variation(&(Local_14.f_27[2]), false, true, true, true, false);
	return true;
}

bool func_908(var uParam0)
{
	if (!func_164(iVar796, 16))
	{
		switch (func_33(uParam0))
		{
			case 0:
				Var0 = { func_226(2, 0) };
				Var4 = { func_226(2, 1) };
				bVar8 = true;
				bVar9 = false;
				break;
			case 1:
				Var0 = { func_226(2, 0) };
				Var4 = { func_226(2, 1) };
				bVar8 = true;
				bVar9 = false;
				break;
			case 2:
				Var0 = { func_226(1, 1) };
				Var4 = { func_226(1, 2) };
				bVar8 = true;
				bVar9 = false;
				break;
			case 3:
				Var0 = { func_226(1, 5) };
				Var4 = { func_226(1, 6) };
				bVar8 = true;
				bVar9 = false;
				break;
			case 4:
				Var0 = { func_226(4, 0) };
				Var4 = { func_226(4, 1) };
				bVar8 = false;
				bVar9 = true;
				break;
			case 5:
				Var0 = { func_226(4, 3) };
				Var4 = { func_226(4, 2) };
				bVar8 = false;
				bVar9 = true;
				break;
			case 6:
				Var0 = { func_226(7, 0) };
				Var4 = { func_226(7, 1) };
				bVar8 = false;
				bVar9 = true;
				break;
			case 7:
				Var0 = { func_226(5, 0) };
				Var4 = { func_226(5, 1) };
				bVar8 = false;
				bVar9 = true;
				break;
			case 25:
				Var0 = { func_226(6, 0) };
				Var4 = { func_226(6, 1) };
				bVar8 = false;
				bVar9 = true;
				break;
			default:
				break;
		}
		if (!func_940(uParam0))
		{
			func_1313(Global_35, Var0, 2, 1073741824);
		}
		func_1520(uParam0, Var4, bVar9);
		func_151(uParam0, Global_35, 0, 0, 0, 0, 0);
		func_151(uParam0, func_159(uParam0), 0, 0, 0, 0, 0);
		if (bVar8)
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			set_current_ped_weapon(iVar782, -1569615261, true, 0, false, false);
		}
		if (bVar9)
		{
			func_1404(-1623728698, 1);
		}
		func_145(uParam0, Global_35, "ARTHUR", 0);
		func_905(0, 0);
		func_1292(16);
	}
	return true;
}

bool func_909(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			Var0 = { func_1366(2, 0) };
			bVar4 = false;
			bVar5 = true;
			break;
		case 1:
			if (func_364(func_1272(20)) != 0)
			{
				switch (func_364(func_1272(20)))
				{
					case 1:
						Var0 = { 1472.72f, -1697.433f, 62.3298f };
						Var0.f_3 = 264.3709f;
						break;
					case 2:
						Var0 = { 1234.814f, -1593.21f, 60.2795f };
						Var0.f_3 = 277.3356f;
						break;
					case 3:
						Var0 = { 1172.531f, -1182.401f, 72.9122f };
						Var0.f_3 = 204.6579f;
						break;
				}
			}
			else
			{
				Var0 = { 1165.116f, -1517.708f, 52.7595f };
				Var0.f_3 = 203.2888f;
			}
			bVar4 = true;
			bVar5 = true;
			break;
		case 2:
			Var0 = { 1481.46f, -1432.79f, 70.88f };
			Var0.f_3 = 277.3935f;
			bVar4 = true;
			bVar5 = true;
			break;
		case 3:
			Var0 = { func_226(1, 4) };
			bVar4 = true;
			bVar5 = true;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 25:
			Var0 = { func_226(1, 4) };
			bVar4 = false;
			bVar5 = false;
			break;
		default:
			break;
	}
	func_1521(-1, 0);
	_0xe1a83d4a3b5d7938(&(Local_14.f_19[0]));
	_0x8268b098f6fca4e2(&(Local_14.f_19[0]), 0);
	set_vehicle_extra(&(Local_14.f_19[0]), 5, true);
	func_1313(&(Local_14.f_19[0]), Var0, 2, 1073741824);
	force_entity_ai_and_animation_update(&(Local_14.f_19[0]), true);
	if (does_entity_exist(&(Local_14.f_19[0])))
	{
		func_428(uParam0, &(Local_14.f_19[0]), "WAGON05X", 0, 0, 0, 0);
		if (bVar5 && !does_entity_exist(iVar7246))
		{
			vVar6 = { get_offset_from_entity_in_world_coords(&(Local_14.f_19[0]), vLocal_7442) };
			iLocal_7249 = create_object(1754553459, vVar6, true, true, false, false, true);
			func_1522(iVar7246, &(Local_14.f_19[0]), vLocal_7442, vLocal_7445, 0, 0, 0);
		}
		if (!_0x53784cea0159439b(&(Local_14.f_19[0])))
		{
			_0xd80faf919a2e56ea(&(Local_14.f_19[0]), uVar7300);
			uLocal_7306 = _0xce2acd6f602803e5(&(Local_14.f_19[0]));
			uLocal_7306 = uVar7303;
		}
		else
		{
			uLocal_7306 = _0xce2acd6f602803e5(&(Local_14.f_19[0]));
			uLocal_7306 = uVar7303;
		}
		_play_sound_from_entity("BOTTLES", &(Local_14.f_19[0]), "BRT2_Sounds", false, 0, 0);
		set_vehicle_extra(&(Local_14.f_19[0]), 2, false);
		set_vehicle_can_break(&(Local_14.f_19[0]), false);
		if (bVar4)
		{
			_0x4ba972d0e5ad8122(&(Local_14.f_19[0]), 0);
			_0xb7079f4c72896756(Global_35, &(Local_14.f_19[0]), 0, 16, 0);
			if (func_163(bVar782, 0))
			{
				freeze_entity_position(bVar782, false);
				set_ped_into_vehicle(bVar782, &(Local_14.f_19[0]), -1);
			}
			if (func_33(uParam0) == 1)
			{
				if (func_163(Global_35, 0))
				{
					set_ped_into_vehicle(Global_35, &(Local_14.f_19[0]), 0);
				}
			}
			else if (func_33(uParam0) == 2)
			{
				if (func_163(Global_35, 0))
				{
					freeze_entity_position(Global_35, false);
					set_ped_into_vehicle(Global_35, &(Local_14.f_19[0]), 0);
				}
			}
		}
	}
	return true;
}

void func_910()
{
	_0x9851de7aec10b4e1(1868.902f, -1282.125f, 41.39775f, 250f, 1, 0);
	stop_fire_in_range(1868.902f, -1282.125f, 41.39775f, 250f);
	remove_particle_fx_in_range(1868.902f, -1282.125f, 41.39775f, 250f);
	func_1232(&uLocal_811, 1892.9f, -1258.77f, 47.69553f, 0f, 0f, -47.02063f, 163.9165f, 148.4077f, 15.15555f, "m_volFieldsWarnWarn");
	func_1232(&uLocal_812, 1892.9f, -1258.77f, 47.69553f, 0f, 0f, -47.02063f, 228.9165f, 208.4077f, 15.15555f, "m_volFieldsWarnFail");
	func_1523(&uLocal_810, 1868.902f, -1282.125f, 41.39775f, 0f, 0f, -128.9065f, 342.0871f, 226.3694f, 71.95222f, "m_volPedRestriction");
	func_1232(&uLocal_831, 1884.718f, -1341.641f, 42.55037f, 0f, 0f, 24.98439f, 40.39189f, 48.68389f, 16.35847f, "m_volBarnRestriction");
	func_1232(&uLocal_833, 1595.167f, -1440.619f, 67.79736f, 0f, 0f, -74.62599f, 95.19067f, 275.1074f, 52.37812f, "m_volTrafficRestriction");
	func_1232(uLocal_834[0], 1551.808f, -1362.62f, 67.79736f, 0f, 0f, -101.626f, 101f, 45f, 45f, "m_volWrongWay");
	func_1232(uLocal_834[1], 1860.096f, -1492.277f, 58.00374f, 0f, 0f, -140.626f, 398f, 401f, 40f, "m_volWrongWay 2");
	func_1232(uLocal_834[2], 1580.899f, -1495.434f, 67.79736f, 0f, 0f, -64.62601f, 100f, 21f, 20f, "m_volWrongWay 3");
	func_1232(uLocal_834[3], 1378.849f, -1487.488f, 67.79736f, 0f, 0f, -64.62601f, 469f, 277f, 42f, "m_volWrongWay 4");
	func_1232(uLocal_834[4], 1507.657f, -1419.388f, 67.79736f, 0f, 0f, -75.626f, 32f, 100f, 20f, "m_volWrongWay 5");
	func_1232(&uLocal_4903, 1883.499f, -1272.559f, 43.61886f, 0f, 0f, -32.9141f, 33.06687f, 22.84397f, 5.547239f, "m_volBurnArea");
	func_1524(uVar829, 0);
	if (_does_volume_exist(iVar831))
	{
		_0xc1799fafd2fdf52b(iVar831, 0, 0, 0);
		_0x2fcd528a397e5c88(iVar831, 16392);
	}
	func_1525(&uLocal_815, 1731.61f, -1446.48f, 44.81f, 0f, 0f, 0f, 250f, 250f, 50f, "m_volInWagonCutscene");
	_0x18262cafebb5fbe1(uVar813, 8192, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uVar813, 8192, 0, 0, -1, -1, 0);
	func_1232(&uLocal_814, 1587.235f, -1649.602f, 60.84277f, 0f, 0f, -120.4084f, 128.0034f, 462.3704f, 47.69775f, "m_volWrongSideOfTracks");
	func_1525(&uLocal_816, 1863.082f, -1253.38f, 44.72437f, 0f, 0f, -27.47968f, 24.10646f, 34.39951f, 4.65646f, "m_volTriggerPreFieldWave");
	func_1232(&uLocal_817, 1892.884f, -1255.183f, 43.03178f, 0f, 0f, -18.35468f, 74.33106f, 24.85984f, 5.85701f, "m_volTriggerFieldWave");
	func_1232(uLocal_4889[0], 1928.315f, -1282.615f, 36.38f, 0f, 0f, -113f, 15.86701f, 38.37178f, 19.34386f, "FIELD_1A");
	func_1232(uLocal_4889[6], 1881.4f, -1275.801f, 36.38f, 0f, 0f, -124.801f, 13.473f, 33.162f, 19.34386f, "FIELD_4B");
	func_1232(uLocal_4889[1], 1913.99f, -1292.542f, 36.38f, 0f, 0f, -116.0285f, 14.01078f, 20.5457f, 19.34386f, "FIELD_1B");
	func_1232(uLocal_4889[2], 1937.497f, -1241.413f, 36.38f, 0f, 0f, -96.9f, 29.996f, 33.426f, 19.34386f, "FIELD_2A");
	func_1232(uLocal_4889[5], 1886.942f, -1268.332f, 36.38f, 0f, 0f, -114.7514f, 10.725f, 31.068f, 19.34386f, "FIELD_4A");
	func_1232(uLocal_4889[3], 1895.837f, -1238.765f, 36.38f, 0f, 0f, -19.609f, 28.635f, 11f, 19.34386f, "FIELD_3A");
	func_1232(uLocal_4889[4], 1897.1f, -1229.763f, 36.38f, 0f, 0f, -13.609f, 28.49134f, 10f, 19.34386f, "FIELD_3B");
	func_1232(uLocal_4889[7], 1833.631f, -1275.883f, 43.90195f, 0f, 0f, -39.66997f, 8.354395f, 10.24365f, 3.516214f, "TFA_ZONE_BARN");
	func_1232(&uLocal_813, 1912.058f, -1258.147f, 43.03178f, 0f, 0f, -24.35468f, 89.33106f, 82.85984f, 5.85701f, "Hot area");
	func_1232(&uLocal_821, 1930.43f, -1277.8f, 36.38f, 0f, 0f, -111.006f, 7.86701f, 38.37178f, 19.34386f, "m_volFirstGuardTrigger");
	func_1232(uLocal_4898[0], 1925.001f, -1288.4f, 36.38f, 0f, 0f, -113.0285f, 26.01078f, 34f, 19.34386f, "Secure Zone Field 1");
	func_1232(uLocal_4898[1], 1936.99f, -1241.419f, 36.38f, 0f, 0f, -97.0285f, 25.01078f, 29.546f, 19.34386f, "Secure Zone Field 2");
	func_1232(uLocal_4898[2], 1896.52f, -1233.922f, 36.38f, 0f, 0f, -105.0285f, 15.01078f, 24.546f, 19.34386f, "Secure Zone Field 3");
	func_1232(uLocal_4898[3], 1883.067f, -1272.198f, 36.38f, 0f, 0f, -123.0285f, 18.01078f, 29.546f, 19.34386f, "Secure Zone Field 4");
	func_1232(&uLocal_818, 1834.265f, -1276.274f, 44.59398f, 0f, 0f, 48.46641f, 10.20074f, 8.095702f, 6.260718f, "Drying Hut");
	func_1232(&uLocal_819, 1837.282f, -1280.205f, 43.90195f, 0f, 0f, -39.66997f, 4.354395f, 3.24365f, 3.516214f, "Drying Hut Dont throw molotov");
	func_1232(&uLocal_820, 1842.792f, -1284.048f, 43.90195f, 0f, 0f, -39.66996f, 15.35439f, 19.24365f, 5.516214f, "Drying Hut dialogue range");
	func_1232(&uLocal_824, 1885.395f, -1342.95f, 45.27574f, 0f, 0f, -65.16142f, 23.5622f, 11.90458f, 8.681982f, "m_volBarnGroundArea");
	func_1232(&uLocal_825, 1885.148f, -1343.065f, 45.27574f, 0f, 0f, -65.16142f, 45.38474f, 36.42666f, 8.681982f, "m_volBarnFailArea");
	func_1232(&uLocal_827, 1904.612f, -1288.23f, 36.38f, 0f, 0f, -116.0285f, 39.01078f, 80.546f, 19.34386f, "m_volMoonshineHelp");
	func_1232(&uLocal_826, 1887.218f, -1346.89f, 41.85445f, 0f, 0f, -65.16142f, 3.5622f, 5.90458f, 5.681982f, "m_volStorageSafeArea");
	func_1232(&uLocal_832, 1859.661f, -1274.859f, 43.61886f, 0f, 0f, -54.9141f, 3.06687f, 7.84397f, 5.547239f, "m_volPlayerInFrontOfMolotov");
	func_1232(&uLocal_822, 1887.188f, -1343.668f, 45.27574f, 0f, 0f, -35.161f, 13.5f, 15.5f, 8.5f, "m_volDeliveryWagonTrigger");
	func_1525(&uLocal_823, 1956.963f, -1226.175f, 41.82729f, 0f, 0f, -8.479679f, 3.5f, 3.4f, 3.65646f, "m_volCutHorses");
	func_1232(uLocal_844[0], 1011.055f, -1770.778f, 46.92896f, 0f, 0f, 0f, 34f, 26f, 40f, "m_volManor");
	func_1232(uLocal_844[1], 1011.055f, -1712.86f, 46.92896f, 0f, 0f, 0f, 98f, 90f, 40f, "m_volManorExterior");
	func_1232(uLocal_844[2], 1011.079f, -1663.629f, 46.1011f, 0f, 0f, 0f, 23f, 12f, 6f, "m_volGuards");
	func_1232(uLocal_844[3], 1011.079f, -1504.045f, 48.62943f, 0f, 0f, 0f, 43f, 419f, 32f, "m_volManorExterior2");
	func_1525(uLocal_844[4], 1002.303f, -1945.232f, 44.81f, 0f, 0f, 0f, 250f, 457f, 50f, "m_volManorNoShooting");
	func_1232(uLocal_850[0], 1917.266f, -1258.698f, 36.38f, 0f, 0f, -41.60899f, 2.9f, 2f, 12.34386f, "m_volCarts1");
	func_1232(uLocal_850[1], 1916.099f, -1253.894f, 36.38f, 0f, 0f, -98.60898f, 2.635f, 2.2f, 12.34386f, "m_volCarts2");
	func_1232(uLocal_850[2], 1897.364f, -1299.04f, 36.38f, 0f, 0f, -122.609f, 2.635f, 2f, 14.34386f, "m_volCarts3");
	func_1232(uLocal_850[3], 1889.59f, -1252.203f, 36.38f, 0f, 0f, -111.609f, 2f, 2.45f, 12.34386f, "m_volCarts4");
}

void func_911()
{
	iLocal_7272[0] = add_cover_point(1842.44f, -1284.575f, 41.728f, 75.5196f, 3, 0, 1, true);
	iLocal_7272[1] = add_cover_point(1853.672f, -1292.738f, 41.7143f, 235.1118f, 3, 0, 1, true);
	iLocal_7272[2] = add_cover_point(1849.3f, -1292.242f, 41.7245f, 132.3801f, 3, 0, 1, true);
	iLocal_7272[3] = add_cover_point(1844.161f, -1296.628f, 41.7461f, 120.001f, 3, 0, 1, true);
	iLocal_7272[4] = add_cover_point(1841.705f, -1283.688f, 41.829f, 172.0346f, 1, 0, 1, true);
	iLocal_7272[5] = add_cover_point(1857.145f, -1245.865f, 42.1706f, 251.9842f, 3, 0, 1, true);
}

void func_912(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1526(iParam0, iParam1, bParam2, fParam3);
}

int func_913(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (func_1527(uParam0, Global_35, 0, 0, 1, 1))
			{
				clear_ped_tasks(Global_35, 1, 0);
				func_117(0, 0, 1);
				func_1528(-668482597, 5000, 0, 1, 0, 0, 1, 0);
				use_waypoint_recording_as_assisted_movement_route("brt2_SeanOutMansion", 1, 1065353216, 1056964608, 1);
			}
			else
			{
				func_1529(Global_35, 622113465);
			}
			if (!func_180(1024) && _0x8d81e7824b7753f7(uParam0->f_7375.f_804, "BRT2_INT_P2A1_T03_Shot_1", 1))
			{
				func_918();
				func_917();
				func_1292(1024);
			}
			if (func_1527(uParam0, iVar782, 0, 0, 1, 1))
			{
				force_ped_motion_state(iVar782, -668482597, false, 1, false);
				if (is_vehicle_driveable(&(Local_14.f_19[0]), false, false))
				{
					func_1530(0, -1);
				}
			}
			if (_is_metaped_using_component(iVar782, -1725579161) && _0x8d81e7824b7753f7(uParam0->f_7375.f_804, "BRT2_INT_P2A1_T03_Shot_1", 1))
			{
				func_1531(&iLocal_7264);
			}
			if (func_1527(uParam0, iVar781, 0, 0, 1, 1))
			{
			}
			if (func_1527(uParam0, &(Local_14.f_27[1]), 0, 0, 1, 1))
			{
			}
			if (func_1527(uParam0, &(Local_14.f_27[0]), 0, 0, 1, 1))
			{
			}
			if (func_1532(uParam0))
			{
			}
			break;
		case 4:
			func_1310(uParam0, 1, 1);
			if (!func_180(134217728))
			{
				if (_0x8d81e7824b7753f7(uParam0->f_7375.f_804, "BRT2_MCS1_P2A1_T08_Shot_1", 1))
				{
					func_1292(134217728);
					if (!func_1342(&uVar0))
					{
						func_1343(-1623728698, 0);
					}
					if (!func_175(8))
					{
						func_176(8, 16384, 1);
					}
					_0x604e1010e3162e86(Global_35, "LOCO_WEAPON_MOONSHINEJUG", "LOCO_WEAPON_MOONSHINEJUG");
				}
			}
			if (func_1527(uParam0, Global_35, 0, 0, 1, 1))
			{
				_0x3a50753042b6891b(Global_35, "LOCO_WEAPON_MOONSHINEJUG");
				remove_weapon_from_ped(Global_35, 1885857703, true, -142743235);
				func_321(1885857703, 10, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_610(-1361787316);
				remove_weapon_from_ped(Global_35, -1361787316, true, -142743235);
				func_321(-1361787316, 100, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (has_ped_got_weapon(Global_35, -1361787316, 0, false))
				{
					_add_ammo_to_ped(Global_35, -1361787316, 100, -897553835);
				}
				else
				{
					func_1341(Global_35, -1361787316, 100, 1, 0, 1056964608, 1065353216, 0);
				}
				set_current_ped_weapon(Global_35, -1361787316, true, 0, false, false);
				func_1528(147004056, 1000, 0, 1, 1, 0, 0, 0);
			}
			if (func_1527(uParam0, iVar782, 0, 0, 1, 1))
			{
				force_ped_motion_state(iVar782, 147004056, false, 1, false);
				func_1533();
			}
			if (func_1532(uParam0))
			{
			}
			break;
	}
	return 1;
}

void func_914(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_915(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (!_is_metaped_using_component(iVar782, -1725579161))
			{
				_set_ped_body_component(iVar782, 622113465);
				_update_ped_variation(iVar782, false, true, true, true, false);
				func_1531(&iLocal_7264);
			}
			if (!func_180(1024))
			{
				func_918();
				func_917();
				func_1292(1024);
			}
			break;
	}
	return 1;
}

void func_916(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_917()
{
	func_1534(915, 0);
	func_1534(916, 0);
	func_1534(917, 0);
}

void func_918()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_218(iVar0);
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, true);
			set_blocking_of_non_temporary_events(iVar1, true);
			func_1535(iVar0);
			func_1536(iVar1, iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

void func_919(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_920(var uParam0)
{
	if (func_33(uParam0) < 25)
	{
	}
	if (func_33(uParam0) > 2 && func_33(uParam0) < 6)
	{
		set_ped_reset_flag(Global_35, 134, true);
	}
	_disable_guard_zone("CALIGA_HALL");
	if (!func_180(262144) && ((func_1271(Global_35, &(uLocal_844[0]), 1, 0) || func_1271(Global_35, &(uLocal_844[1]), 1, 0)) || func_1271(Global_35, &(uLocal_844[3]), 1, 0)))
	{
		_disable_guard_zone("BRAITHWAITE_MANOR");
	}
}

void func_921(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1537(uParam0);
}

void func_922(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_216())
			{
				if (func_903(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_223(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_923(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1538(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1539();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1540(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_924(var uParam0)
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
		if (func_241() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_241() && !func_54())
	{
		func_899(uParam0, 1048576);
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
			func_899(uParam0, 134217728);
		}
	}
}

void func_925(var uParam0)
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

void func_926(var uParam0)
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

void func_927(var uParam0)
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

int func_928(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_257(uParam0->f_5423[iVar0]))
		{
			func_453(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_929(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1541(iVar0))
	{
		return false;
	}
	iVar1 = func_1542(iParam2);
	if (!func_1543(iVar1))
	{
		return false;
	}
	if (!func_1544(uParam0, iParam1, iParam2))
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

int func_930(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_931(var uParam0, int iParam1)
{
	return 1;
}

void func_932(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_223(&(uParam0->f_603));
	}
}

void func_933(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_934(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_903(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_258(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_259(uParam0->f_5421))
		{
			iVar2 = func_260(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = func_1545(uParam0->f_5421, iVar1);
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

float func_935(var uParam0)
{
	return func_903(&(uParam0->f_603));
}

bool func_936(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_937(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_929(uParam0, iParam1, 4))
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
		func_1546(uParam0);
		if (func_1547(uParam0))
		{
			func_1548(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_899(uParam0, 524288);
		func_1549(&(uParam0->f_7375), 4);
		if (func_1538(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1539();
		}
		return true;
	}
	return false;
}

void func_938(var uParam0)
{
	func_1550(uParam0);
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

bool func_939(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_898(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_899(uParam0, 2097152);
			func_268(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_931(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1504(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_898(uParam0))
			{
				func_899(uParam0, 2097152);
				func_900(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_900(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_898(uParam0))
		{
			func_899(uParam0, 2097152);
			func_1511(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_900(uParam0, Var0);
	}
	return true;
}

bool func_940(var uParam0)
{
	return func_1551(&(uParam0->f_7375));
}

void func_941(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1552(uParam0))
		{
			func_440(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1553(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_942(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_257(uParam0->f_5423[iVar1]))
		{
			if (func_1554(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1555(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_943(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1556(uParam0))
		{
			func_440(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1553(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_944(var uParam0)
{
	switch (func_1557(&iVar0))
	{
		case 1:
			func_1558(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_193(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_945(var uParam0, int iParam1)
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

int func_946(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1510(uParam0);
		func_899(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1504(uParam0, iParam1) };
	if (func_1559(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_947(var uParam0, int iParam1)
{
	func_1560(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_228(uParam0, iParam1));
}

void func_948(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_933(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_899(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_899(uParam0, 4);
		func_899(uParam0, 8192);
		func_899(uParam0, 536870912);
		func_268(uParam0, 4);
		func_65(0);
		func_64(0);
		func_899(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1561(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_383(uParam0, 524288);
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
				func_1562(1, 1);
			}
		}
	}
}

void func_949(bool bParam0)
{
	if (!func_200(0, 0, 1) || bParam0)
	{
		iVar0 = func_1037();
		iVar1 = func_1040(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1563(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1563(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_950(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1564(bParam1, bParam2, bParam3);
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

var func_951(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1565(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1566(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1565(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_952(var uParam0)
{
	return true;
}

bool func_953(var uParam0)
{
	return true;
}

int func_954(var uParam0)
{
	return 1;
}

bool func_955(bool bParam0)
{
	return bParam0;
}

bool func_956(bool bParam0)
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

bool func_957(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_958(int iParam0)
{
	if (!func_957(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_959(int iParam0)
{
	return iParam0 != 0;
}

int func_960(int iParam0)
{
	if (!func_957(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_961(int iParam0, int iParam1, bool bParam2)
{
	if (!func_966(iParam0))
	{
		return;
	}
	func_1567(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_962(var uParam0, int iParam1)
{
	func_1568(&(uParam0->f_64), iParam1);
}

void func_963(var uParam0, int iParam1)
{
	func_422(&(uParam0->f_64), iParam1);
}

bool func_964(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_965(int iParam0, bool bParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_997(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_961(iParam0, 16, 0);
		}
	}
	func_961(iParam0, 1, bParam1);
}

bool func_966(int iParam0)
{
	return iParam0 > -1;
}

bool func_967(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
		{
			return false;
		}
	}
	func_972(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_968(int iParam0, var uParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_997(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1569(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_997(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_997(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_997(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_997(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1570(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_463(iParam0));
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
		if (bVar2 && !func_200(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_997(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_997(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_997(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_327(iParam0, 0));
		}
	}
}

void func_969(int iParam0, bool bParam1, int iParam2)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (!func_1571(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_463(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_1572(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_1573())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

int func_970(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_1574(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_971(int iParam0)
{
	if (!func_966(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_467(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_972(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_973(int iParam0)
{
	return iParam0 != 0;
}

int func_974(int iParam0)
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

void func_975(int iParam0)
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

void func_976()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_977(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_978();
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
	if (func_1575(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_978()
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
		iVar3 = func_1576(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_979(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_980(int iParam0)
{
	iVar0 = func_484(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1577(iVar0);
}

int func_981(int iParam0, int iParam1)
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
			func_1578(iVar2);
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

void func_982()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_983(int iParam0, int iParam1)
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

int func_984(int iParam0)
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

void func_985(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_986(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_987(int iParam0, int iParam1)
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
			func_1579((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1579(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_193(&(Global_1898164->f_1[0])))
	{
		func_205(&(Global_1898164->f_1[0]), 3);
	}
}

void func_988(int iParam0, int iParam1, bool bParam2)
{
	if (!func_502(iParam0))
	{
		return;
	}
	func_1580(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_989(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_990(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_991(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_992()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_993(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1581(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_994(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 187.7837f;
				case 1:
					return 233.7837f;
				case 2:
					return 81.7837f;
				case 3:
					return 47.7837f;
				case 4:
					return -0.2163f;
				case 5:
					return -106.2163f;
				case 6:
					return 75.7837f;
				case 7:
					return 83.7837f;
				case 8:
					return 103.7837f;
				case 9:
					return 125.7837f;
				case 10:
					return 253.4956f;
				case 11:
					return 158.7829f;
				case 12:
					return 166.6525f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -78.1086f;
				case 1:
					return 286.6954f;
				case 2:
					return 295.1828f;
				case 3:
					return 107.1828f;
				case 4:
					return -64.1794f;
				case 5:
					return -57.3754f;
				case 6:
					return -56.8101f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 361.0112f;
				case 1:
					return 375.0112f;
				case 2:
					return 361.5854f;
				case 3:
					return 215.1252f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 242.8858f;
				case 1:
					return 213.115f;
				case 2:
					return 86.6547f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 302.2182f;
				case 1:
					return 307.4457f;
				case 2:
					return 38.0902f;
				case 3:
					return 114.0902f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 247.1394f;
				case 1:
					return 252.9621f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 379.7894f;
				case 1:
					return 387.7894f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 151.4169f;
				case 1:
					return 291.333f;
			}
			break;
	}
	return 0f;
}

void func_995(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1582();
	}
	else
	{
		return;
	}
	func_1583();
	Global_40.f_9.f_14 = func_288();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1584())
		{
			func_374(Global_1310720->f_1);
		}
		else if (func_1585() == func_375(Global_36, 1) && func_1586() != 2)
		{
			func_374(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_374(Global_36);
		}
		func_1587(Global_36, &vVar0, &uVar4);
		if (!func_1584())
		{
			if (func_1588(vVar0, Global_36) < func_1588(Global_40.f_9.f_7, Global_36))
			{
				func_374(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_375(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1587(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_232(Global_1935630, 8192);
	}
	func_1589();
}

bool func_996(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_257(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_997(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_998(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
		{
			return;
		}
	}
	func_972(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_999(int iParam0)
{
	func_998(iParam0, 36, 1);
}

int func_1000(int iParam0, bool bParam1)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1590(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1001(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_465(iParam0))
	{
		iVar1 = func_463(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1591(iParam0);
		}
	}
	if (func_967(iParam0, 5, 1))
	{
		set_ped_config_flag(func_463(iParam0), 137, true);
	}
}

void func_1002(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_469(iParam0, 50, 1);
		func_469(iParam0, 48, 1);
		func_469(iParam0, 49, 1);
		func_469(iParam0, 51, 1);
		func_469(iParam0, 52, 1);
		func_469(iParam0, 54, 1);
		func_469(iParam0, 55, 1);
	}
	else
	{
		func_998(iParam0, 50, 1);
		func_998(iParam0, 48, 1);
		func_998(iParam0, 49, 1);
		func_998(iParam0, 51, 1);
		if (bParam3)
		{
			func_998(iParam0, 54, 1);
		}
		else
		{
			func_469(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_998(iParam0, 52, 1);
			if (bParam3)
			{
				func_998(iParam0, 55, 1);
			}
		}
		else
		{
			func_469(iParam0, 52, 1);
			if (!bParam3)
			{
				func_469(iParam0, 55, 1);
			}
		}
	}
}

void func_1003(int iParam0, bool bParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_463(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_463(iParam0), 204, false);
	}
}

void func_1004(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_523(iParam0))
	{
		if (!func_261(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_967(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1000(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_463(iParam0);
	if (((does_entity_exist(iVar1) && func_1592(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_998(iParam0, 2, 1);
	}
	else
	{
		func_1593(iParam0);
		func_998(iParam0, 1, 1);
	}
}

void func_1005(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_465(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1006(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1007(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_966(iParam1))
	{
		return;
	}
	bVar0 = func_1006(iParam1);
	if (func_1594(iParam1))
	{
		if (!func_1595(iParam1))
		{
			return;
		}
	}
	func_469(iParam1, 39, 1);
	func_1596(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1596(iParam1, 8, 0);
	if (does_entity_exist(bVar0))
	{
		if (!bParam2)
		{
			func_1596(iParam1, 512, 1);
			set_ped_keep_task(bVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(bVar0, false);
			func_998(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1597(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1008(int iParam0)
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

void func_1009(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_218(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1598(iVar6);
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

void func_1010(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

bool func_1011(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_1012(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1600(func_1599(255), 109029619));
	}
	else if (func_307())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1039();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1013(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_1014(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1600(func_1599(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_307())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1039())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1015(int iParam0)
{
	iParam0 = func_269(iParam0);
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

float func_1016(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1017(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1483(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1013(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1013(iParam0) + 1;
	fVar6 = func_1601(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1602(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1018(int iParam0)
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

void func_1019(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1020()
{
	if (func_341())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1021(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1603((Global_40.f_4283.f_325 + iParam0));
}

void func_1022(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1020())
	{
		func_713(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_713(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1023(int iParam0)
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

char* func_1024(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1025(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1026(int iParam0)
{
	func_1034(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1027(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1028(1);
	}
}

void func_1028(bool bParam0)
{
	if (bParam0)
	{
		func_1604(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1605(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1029(int iParam0)
{
	if (!func_193(iParam0))
	{
		return -15;
	}
	return func_1606(iParam0);
}

bool func_1030(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_709(iParam1) || !func_709(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1031(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1032(int iParam0)
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

bool func_1033(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1034(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1607(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1035(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1036(int iParam0, int iParam1, bool bParam2)
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

int func_1037()
{
	iVar0 = func_563();
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

int func_1038(int iParam0)
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
	fVar1 = func_1563(absf(fVar1) < 1f, func_1563(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1039()
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

int func_1040(int iParam0)
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

int func_1041()
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

void func_1042(int iParam0, bool bParam1, int iParam2)
{
	func_1608((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1609(iParam0);
}

void func_1043(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1610(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1044(bool bParam0)
{
	bVar3 = false;
	if (func_1611(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1612(iVar5, &iVar2, &iVar0))
			{
				if (!func_583(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1613(iVar2);
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
							if (func_602(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1037() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1037() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1614();
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

char* func_1045(int iParam0)
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

bool func_1046(int iParam0)
{
	return func_602(iParam0) == -427144552;
}

bool func_1047(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_604(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1052(iParam0, &uVar0, 1, 0, 0);
	}
	return func_350(iParam0, 1, 0);
}

void func_1048(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_602(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_609(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_610(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_587(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_663(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1049(int iParam0, int iParam1)
{
	if (func_603(iParam0, 58855631))
	{
		func_1200(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1050(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!func_611(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_172(bParam3), iParam0);
}

int func_1051(int iParam0, bool bParam1)
{
	if (func_615(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_172(bParam1), iParam0, 0);
}

bool func_1052(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1615(&iParam0);
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (!func_611(0))
	{
		bParam3 = true;
	}
	if (func_1046(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1183(0) };
			Var4.f_9 = -1591664384;
			if (!func_1075(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1076(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1184(iParam0, 1))
			{
				if (!func_1075(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1076(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1616(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1050(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1617(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_172(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1053(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_603(iParam0, 1399091007))
	{
		func_1117(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1054(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1618(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1619(&Var0, func_1183(0));
	}
	if (!func_1620(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1127(iVar14);
	return uVar15;
}

int func_1055()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1056(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1057(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1621(iParam0);
	fVar1 = func_1622(iParam0);
	if ((Global_1347477->f_117 || !func_605(31)) || !func_1623(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1624(iVar0) >= 7)
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
	func_1625(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_713(_create_var_string(6, func_1626(iParam0), fVar1), "itemtype_textures", func_1627(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1058(int iParam0)
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

int func_1059(int iParam0, int iParam1)
{
	if (!func_1215(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1060(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_598() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1628(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1629(), 12);
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
			else if (func_1099() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1630(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1099(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1631(), 13);
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
			else if (func_1100() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1632(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1100(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1059(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1061(int iParam0, int iParam1, int iParam2)
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

bool func_1062(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1063(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1064(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1633(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_350(iVar2, 1, 0) || func_1635(func_1634(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1068(func_1633(iVar0))), func_1068(func_1633(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1099() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1636(iVar0)), func_1636(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1630() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1636(iVar0)), func_1636(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1636(iVar0)), func_1636(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1110(iParam3, func_1637(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1106(iVar2) - iParam7) >= func_1059(iParam3, func_1638(iVar0));
				}
				else
				{
					bVar1 = func_1106(iVar2) >= func_1059(iParam3, func_1638(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1106(iVar2) + iParam7) >= func_1059(iParam3, func_1638(iVar0));
			}
			else
			{
				bVar1 = func_1106(iVar2) >= func_1059(iParam3, func_1638(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1639(iVar2)), func_1639(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1640(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1641(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1641(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1100() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1632() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1110(iParam3, func_1637(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1106(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1643(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1643(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1644(iVar2)), func_1644(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1065(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1631() >= 13)
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

bool func_1066(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_193(func_206(0)) && ((func_1645(0) == 1 || func_1645(0) == 8) || func_1645(0) == 6))
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

var func_1067(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1068(int iParam0)
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

bool func_1069(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1070(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1071(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1072(int iParam0)
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
			func_1646(1);
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
			func_1647(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1647(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1647(3);
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
			func_1648(1);
			break;
		case 34:
			func_1649(1);
			break;
		case 35:
			func_1650(1);
			break;
		case 36:
			break;
		case 37:
			func_1651(0);
			break;
		case 38:
			func_1652(0);
			break;
		case 39:
			func_1653(0);
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
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_720("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_328(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_720("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_328(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_720("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_328(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_720("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_328(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1140(99217379) || func_1654(99217379) == 2110595215)
				{
					if (func_1039())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_350(iVar0, 1, 0))
					{
						func_656(iVar0, 1, 752097756);
					}
					func_635(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_350(1013902307, 1, 0))
				{
					func_656(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_350(1013902307, 1, 0))
				{
					func_656(1013902307, 1, 752097756);
				}
				if (!func_350(142640135, 1, 0))
				{
					func_656(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_350(786809402, 1, 0))
				{
					func_656(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_350(786809402, 1, 0))
				{
					func_656(786809402, 1, 752097756);
				}
				if (!func_350(-518019409, 1, 0))
				{
					func_656(-518019409, 1, 752097756);
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
			func_1655();
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

bool func_1073(int iParam0)
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

int func_1074(int iParam0, int iParam1)
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

bool func_1075(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1617(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1076(int iParam0, var uParam1, int iParam2)
{
	if (func_1656(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1077(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_583(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_172(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1078(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1657(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1187(*uParam1, &Var0, bParam6, 0))
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
	if (!func_611(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_172(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1079(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1658(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1080(int iParam0)
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
	iVar2 = func_288();
	func_337(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1081(int iParam0)
{
	if (func_1659(iParam0))
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

bool func_1082(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1083(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1084(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_605(50))
			{
				if (!func_605(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_605(51))
			{
				if (!func_605(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1085(int iParam0, int iParam1, var uParam2)
{
	if (!func_583(iParam1, 0))
	{
		return false;
	}
	if (func_602(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_607(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_681(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_603(iParam1, 866047851))
	{
		iVar5 = func_682(iVar4, 1);
		if (func_1660(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_607(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_603(iParam1, -1638171711))
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
			if (func_1661(1868067663, &uVar0))
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
				iVar10 = func_1662(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1662(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_607(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_603(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1663(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1086()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1087()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1088()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_350(func_1664(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1089(int iParam0)
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

bool func_1090(int iParam0, int iParam1)
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
	if (func_350(iVar0, 1, 0) && func_350(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1091(int iParam0)
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

bool func_1092(int iParam0, int iParam1)
{
	iVar0 = func_1665(iParam0);
	if (iVar0 != -15)
	{
		func_337(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_710(iVar0, 1);
	}
	return false;
}

void func_1093(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1094(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1095(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1096(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1097(int iParam0)
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
	iVar1 = func_1106(iVar9);
	iVar2 = func_1106(iVar10);
	iVar3 = func_1106(iVar11);
	iVar5 = func_1107(iVar9);
	iVar6 = func_1107(iVar10);
	iVar7 = func_1107(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1106(iVar12);
		iVar8 = func_1107(iVar12);
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

void func_1098(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1099()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1666(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1100()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1101(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1643(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1643(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1643(iVar0))
		{
			*sParam2++;
		}
		if (func_1643(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1643(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1643(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1643(iVar0))
		{
			*sParam2++;
		}
		if (func_1643(iVar1))
		{
			*sParam2++;
		}
		if (func_1643(iVar0) && func_1643(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1643(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1643(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1643(iVar0))
		{
			*sParam2++;
		}
		if (func_1643(iVar1))
		{
			*sParam2++;
		}
		if (func_1643(iVar2))
		{
			*sParam2++;
		}
		if ((func_1643(iVar0) && func_1643(iVar1)) && func_1643(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1643(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1643(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1643(iVar0))
		{
			*sParam2++;
		}
		if (func_1643(iVar1))
		{
			*sParam2++;
		}
		if (func_1643(iVar2))
		{
			*sParam2++;
		}
		if (func_1643(iVar3))
		{
			*sParam2++;
		}
		if (((func_1643(iVar0) && func_1643(iVar1)) && func_1643(iVar2)) && func_1643(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1102(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1667(1497516462);
			func_1668(2016141805);
			func_1668(1010885152);
			func_1668(-502324015);
			break;
		case 2016141805:
			func_1668(1497516462);
			func_1667(2016141805);
			func_1668(1010885152);
			func_1668(-502324015);
			break;
		case 1010885152:
			func_1668(1497516462);
			func_1668(2016141805);
			func_1667(1010885152);
			func_1668(-502324015);
			break;
		case -502324015:
			func_1668(1497516462);
			func_1668(2016141805);
			func_1668(1010885152);
			func_1667(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1668(-538889627);
			func_1668(-538880323);
			func_1668(-1056767524);
			func_1667(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1669();
			func_1667(iParam0);
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
			func_1670();
			func_1667(iParam0);
			break;
		case 2019386373:
			func_1668(-664252410);
			func_1668(2109952320);
			func_1667(2019386373);
			break;
		case -664252410:
			func_1668(2019386373);
			func_1668(2109952320);
			func_1667(-664252410);
			break;
		case 2109952320:
			func_1668(2019386373);
			func_1668(-664252410);
			func_1667(2109952320);
			break;
		case -1674179981:
			func_1668(-1835851517);
			func_1668(-1838352012);
			func_1667(-1674179981);
			break;
		case -1835851517:
			func_1668(-1674179981);
			func_1668(-1838352012);
			func_1667(-1835851517);
			break;
		case -1838352012:
			func_1668(-1674179981);
			func_1668(-1835851517);
			func_1667(-1838352012);
			break;
		case -1717960576:
			func_1668(210001842);
			func_1667(-1717960576);
			break;
		case 210001842:
			func_1668(-1717960576);
			func_1667(210001842);
			break;
		case -150493654:
			func_1668(-1271608261);
			func_1668(1846061697);
			func_1668(-1145519186);
			func_1667(-150493654);
			break;
		case -1271608261:
			func_1668(-150493654);
			func_1668(1846061697);
			func_1668(-1145519186);
			func_1667(-1271608261);
			break;
		case 1846061697:
			func_1668(-150493654);
			func_1668(-1271608261);
			func_1668(-1145519186);
			func_1667(1846061697);
			break;
		case -1145519186:
			func_1668(-150493654);
			func_1668(-1271608261);
			func_1668(1846061697);
			func_1667(-1145519186);
			break;
		case 1766284049:
			func_1668(280705402);
			func_1668(1926308480);
			func_1667(1766284049);
			break;
		case 280705402:
			func_1668(1766284049);
			func_1668(1926308480);
			func_1667(280705402);
			break;
		case 1926308480:
			func_1668(1766284049);
			func_1668(280705402);
			func_1667(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1668(439465264);
				func_1667(1609506757);
			}
			else
			{
				func_1668(1609506757);
				func_1668(439465264);
			}
			break;
		case 439465264:
			if (func_495(1609506757))
			{
				if (bParam1)
				{
					func_1667(439465264);
				}
				else
				{
					func_1668(439465264);
				}
			}
			break;
		case 1822001510:
			func_1668(-1612662716);
			func_1667(1822001510);
			break;
		case -1612662716:
			func_1668(1822001510);
			func_1667(-1612662716);
			break;
		case 1306158345:
			func_1668(1952610440);
			func_1668(-223469678);
			func_1668(-404698347);
			func_1668(1517904467);
			func_1667(1306158345);
			break;
		case 1952610440:
			func_1668(1306158345);
			func_1668(-223469678);
			func_1668(-404698347);
			func_1668(1517904467);
			func_1667(1952610440);
			break;
		case -223469678:
			func_1668(1306158345);
			func_1668(1952610440);
			func_1668(-404698347);
			func_1668(1517904467);
			func_1667(-223469678);
			break;
		case -404698347:
			func_1668(1306158345);
			func_1668(1952610440);
			func_1668(-223469678);
			func_1668(1517904467);
			func_1667(-404698347);
			break;
		case 1517904467:
			func_1668(1306158345);
			func_1668(1952610440);
			func_1668(-223469678);
			func_1668(-404698347);
			func_1667(1517904467);
			break;
		case 1376646519:
			func_1668(931649776);
			func_1668(-434590080);
			func_1668(1743048395);
			func_1668(449774763);
			func_1667(1376646519);
			break;
		case 931649776:
			func_1668(1376646519);
			func_1668(-434590080);
			func_1668(1743048395);
			func_1668(449774763);
			func_1667(931649776);
			break;
		case -434590080:
			func_1668(1376646519);
			func_1668(931649776);
			func_1668(1743048395);
			func_1668(449774763);
			func_1667(-434590080);
			break;
		case 1743048395:
			func_1668(1376646519);
			func_1668(931649776);
			func_1668(-434590080);
			func_1668(449774763);
			func_1667(1743048395);
			break;
		case 449774763:
			func_1668(1376646519);
			func_1668(931649776);
			func_1668(-434590080);
			func_1668(1743048395);
			func_1667(449774763);
			break;
		case -1414537028:
			func_1668(38162571);
			func_1668(1350391819);
			func_1668(54073871);
			func_1667(-1414537028);
			break;
		case 38162571:
			func_1668(-1414537028);
			func_1668(1350391819);
			func_1668(54073871);
			func_1667(38162571);
			break;
		case 1350391819:
			func_1668(-1414537028);
			func_1668(38162571);
			func_1668(54073871);
			func_1667(1350391819);
			break;
		case 54073871:
			func_1668(-1414537028);
			func_1668(38162571);
			func_1668(1350391819);
			func_1667(54073871);
			break;
		case 198200492:
			func_1667(198200492);
			func_1668(-1124061431);
			func_1668(52706132);
			func_1668(-259123672);
			break;
		case -1124061431:
			func_1668(198200492);
			func_1667(-1124061431);
			func_1668(52706132);
			func_1668(-259123672);
			break;
		case 52706132:
			func_1668(198200492);
			func_1668(-1124061431);
			func_1667(52706132);
			func_1668(-259123672);
			break;
		case -259123672:
			func_1668(198200492);
			func_1668(-1124061431);
			func_1668(52706132);
			func_1667(-259123672);
			break;
		case -919512195:
			func_1667(-919512195);
			func_1668(-1925798111);
			func_1668(420709909);
			func_1668(1703426636);
			break;
		case -1925798111:
			func_1667(-1925798111);
			func_1668(-919512195);
			func_1668(420709909);
			func_1668(1703426636);
			break;
		case 420709909:
			func_1667(420709909);
			func_1668(-919512195);
			func_1668(-1925798111);
			func_1668(1703426636);
			break;
		case 1703426636:
			func_1667(1703426636);
			func_1668(-919512195);
			func_1668(-1925798111);
			func_1668(420709909);
			break;
		case -1223121209:
			func_1667(-1223121209);
			func_1668(630808005);
			break;
		case 630808005:
			func_1667(630808005);
			func_1668(-1223121209);
			break;
		case 1453909576:
			func_1667(1453909576);
			func_1668(1643531967);
			break;
		case 1643531967:
			func_1667(1643531967);
			func_1668(1453909576);
			break;
		case 0:
			func_1667(0);
			func_1668(473295046);
			func_1668(-1738165526);
			break;
		case 473295046:
			func_1667(473295046);
			func_1668(0);
			func_1668(-1738165526);
			break;
		case -1738165526:
			func_1667(-1738165526);
			func_1668(0);
			func_1668(473295046);
			break;
		case 932909855:
			func_1667(932909855);
			func_1668(2051822093);
			break;
		case 2051822093:
			func_1667(2051822093);
			func_1668(932909855);
			break;
		case 405586984:
			func_1667(405586984);
			func_1668(1509509592);
			func_1668(-959357075);
			func_1668(-1311865656);
			break;
		case 1509509592:
			func_1667(1509509592);
			func_1668(405586984);
			func_1668(-959357075);
			func_1668(-1311865656);
			break;
		case -959357075:
			func_1667(-959357075);
			func_1668(1509509592);
			func_1668(405586984);
			func_1668(-1311865656);
			break;
		case -1311865656:
			func_1667(-1311865656);
			func_1668(1509509592);
			func_1668(-959357075);
			func_1668(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1667(-524145696);
			}
			else
			{
				func_1668(-524145696);
			}
			func_1668(1626481264);
			func_1668(282809459);
			break;
		case 282809459:
			func_1667(282809459);
			func_1668(1626481264);
			func_1668(-524145696);
			break;
		case 1626481264:
			func_1667(1626481264);
			func_1668(-524145696);
			func_1668(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1667(885203519);
			}
			else
			{
				func_1668(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1667(-1080627546);
			}
			else
			{
				func_1668(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_495(iParam0))
				{
					func_1667(iParam0);
				}
			}
			else if (func_495(iParam0))
			{
				func_1668(iParam0);
			}
			break;
	}
}

void func_1103(int iParam0)
{
	if (!func_1671(iParam0))
	{
		func_1673(func_1672(iParam0));
	}
}

int func_1104()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1671(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1105(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1106(iVar9);
	iVar2 = func_1106(iVar10);
	iVar3 = func_1106(iVar11);
	iVar5 = func_1107(iVar9);
	iVar6 = func_1107(iVar10);
	iVar7 = func_1107(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1106(iVar12);
		iVar8 = func_1107(iVar12);
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

int func_1106(int iParam0)
{
	if (func_350(iParam0, 1, 0))
	{
		iVar0 = func_587(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1107(int iParam0)
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

int func_1108(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1109(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1110(int iParam0, int iParam1)
{
	if (!func_1215(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1111(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1110(iParam1, 5) || iParam0 == func_1110(iParam1, 6)) || iParam0 == func_1110(iParam1, 7)) || iParam0 == func_1110(iParam1, 8)) || iParam0 == func_1110(iParam1, 9))
	{
		func_1101(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_599(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_601(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1112(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1110(iParam1, 5) || iParam0 == func_1110(iParam1, 6)) || iParam0 == func_1110(iParam1, 7)) || iParam0 == func_1110(iParam1, 8)) || iParam0 == func_1110(iParam1, 9))
	{
		if (func_1101(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_599(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_601(51, 0, 0, iVar0, func_1059(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_599(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_601(51, 0, 0, iVar0, func_1059(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1113()
{
	if (func_194((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1114(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1115(int iParam0)
{
	if (!func_1674(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1116(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1117(int iParam0, int iParam1, var uParam2)
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

bool func_1118(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1675();
	if (iParam2 == 39)
	{
		Var0 = { func_694(iParam0, 1, 0) };
		iParam2 = func_682(func_695(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_603(iParam0, 866047851) && func_1660(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1120(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1676(func_1188(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1677(iParam2);
	func_1678(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1169(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1169(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1175(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1679(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1680(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1680(&(Global_1946804->f_1378), 1, 0);
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
				func_1441(func_1188(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1119(bool bParam0, bool bParam1, bool bParam2)
{
	func_1681(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1120(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1121()
{
	func_1682(&(Global_1946804->f_2776));
	func_1683(32768);
	func_1441(1108822547, 8, 6);
}

int func_1122(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_682(iParam0, 1);
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

void func_1123(int iParam0)
{
	if (func_1684(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1685(Var0);
}

void func_1124(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1685(Var0);
}

bool func_1125(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_172(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1126(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1127(int iParam0)
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

float func_1128()
{
	if (func_1686())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1687(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1687(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1688();
	fVar2 = func_1689();
	fVar3 = func_1690();
	fVar4 = func_1691();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1692()));
	fVar7 = (func_1687(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1693(3, round((to_float(iVar8) * fVar10)), 0);
	func_1694(3, fVar9, fVar9 > 100f);
	return func_1695(fVar7, -100f, 100f);
}

float func_1129()
{
	if (func_1686())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1687(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1687(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1688();
	fVar2 = func_1689();
	fVar3 = func_1690();
	fVar4 = func_1691();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1692()));
	fVar7 = (func_1687(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1693(2, round((to_float(iVar8) * fVar10)), 0);
	func_1694(2, fVar9, fVar9 > 100f);
	return func_1695(fVar7, -100f, 100f);
}

float func_1130()
{
	if (func_1686())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1687(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1696())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1697())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1687(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1688();
	fVar2 = func_1689();
	fVar3 = func_1690();
	fVar4 = func_1691();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1692()));
	fVar7 = (func_1687(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1693(1, round((to_float(iVar8) * fVar10)), 0);
	func_1694(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1687(0);
	}
	return func_1695(fVar7, -100f, 100f);
}

bool func_1131(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1132(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1133(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_583(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1052(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_611(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_172(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1134(int iParam0, bool bParam1)
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
				return func_1698();
			}
			break;
	}
	return 0;
}

int func_1135(int iParam0)
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

bool func_1136(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1137(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1136(iParam0))
	{
		return;
	}
	if (func_1699(iParam0))
	{
		return;
	}
	if (!func_1700(iParam0))
	{
		func_1701(iParam0, 1, 0);
	}
	iVar0 = func_1702(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1703(iParam0, 512))
		{
			func_693(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_217() && !bParam1) && !func_200(0, 0, 1))
	{
		func_722(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1704(iParam0, 6);
	if (bParam2)
	{
		if (!func_200(0, 0, 1))
		{
			func_370(1, 4);
		}
	}
}

bool func_1138(int iParam0, bool bParam1)
{
	return func_1134(iParam0, 0) < func_1705(iParam0, bParam1);
}

bool func_1139(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1140(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_682(iParam0, 1)] != &Global_1946804->f_57[func_682(iParam0, 1)];
}

void func_1141(int iParam0, int iParam1)
{
	if (func_603(iParam1, 130796156))
	{
		func_1706(iParam1, 0);
	}
	else if (func_603(iParam1, 930141731))
	{
		func_1706(iParam1, 1);
		func_1707(iParam0);
	}
}

void func_1142(var uParam0, int iParam1)
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

int func_1143(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1708(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1709(uParam2, iParam0, Var1);
	return 1;
}

int func_1144(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1145(int iParam0)
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

int func_1146(int iParam0)
{
	if (!func_1710(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1147()
{
	return !&Global_1911774;
}

void func_1148(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1149(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1150(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1151(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1152(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1711(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1153(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1711(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1154(bool bParam0)
{
	if (bParam0)
	{
		func_321(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1155();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1712(2032023096);
		func_324(-615217896);
		func_678(655868243, 1, 1, -142743235, 1);
		func_1714(146323340, func_1713());
		Var0 = { func_1491() };
		if (func_1715(&Var0) == -1387633835)
		{
			func_1716(&Var0);
			func_1717(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1718(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1484(iVar6) == 2010625508)
			{
				func_1719(iVar6, iVar7);
				func_1720(iVar6, iVar8);
				func_1721(iVar6, iVar9);
				func_1722(iVar6, 0);
				if (func_1723(iVar6))
				{
					func_1724(iVar6);
				}
				iVar10 = func_1725(iVar8);
				func_1726(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1155()
{
	if (!func_1727(-1898635967, func_1713(), 1))
	{
		return 0;
	}
	if (func_341())
	{
		if (!func_1727(146323340, func_1713(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1156()
{
	func_335(34411519);
	func_335(834124286);
	func_335(-570967010);
}

void func_1157(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_321(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_678(-1080874779, 3, 1, -142743235, 1);
		func_678(-223790555, 3, 1, -142743235, 1);
		func_678(1566032147, 3, 1, -142743235, 1);
		func_678(891311852, 5, 1, -142743235, 1);
		func_678(-1353737667, 5, 1, -142743235, 1);
		func_678(-330313895, 5, 1, -142743235, 1);
		func_678(-2051332199, 5, 1, -142743235, 1);
		func_678(1237770824, 5, 1, -142743235, 1);
		func_678(-1795542128, 3, 1, -142743235, 1);
		func_678(-1757588258, 3, 1, -142743235, 1);
		func_678(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1718(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1484(iVar0) == 153881023)
			{
				func_1719(iVar0, iVar1);
				func_1720(iVar0, iVar2);
				func_1721(iVar0, iVar3);
				func_1722(iVar0, 0);
				if (func_1723(iVar0))
				{
					func_1724(iVar0);
				}
				iVar4 = func_1725(iVar2);
				func_1726(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1155();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1158(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1728(iParam0);
	if (bParam3)
	{
		func_721(iParam0, sParam1, iParam2);
	}
}

bool func_1159(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1160(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1161()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1125("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1126(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1076(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1127(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1127(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1162(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1729(Param1, iParam5, &Var5, 0))
	{
		func_1078(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1133(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1730(Var19, 1);
}

bool func_1163(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1618(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1619(&Var0, func_1183(0));
	}
	if (!func_1620(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1126(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1078(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1127(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1164(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_694(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1731(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1077(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1078(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1165(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_603(iParam0, 606799272))
		{
			func_1732(iParam0, iParam1);
		}
		if (func_603(iParam0, -1112814642) && func_603(iParam0, -1697809989))
		{
			func_631(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1166(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1733(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_607(iParam0) != -999503751)
		{
			func_1734(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_607(iParam0) != -999503751)
	{
		func_1734(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1735(iParam0, 1);
	return 1;
}

void func_1167()
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

void func_1168(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1736(0);
	}
	if (bParam0)
	{
		func_1180(8);
		func_1180(512);
	}
	else
	{
		func_1180(8);
		func_1180(16);
	}
}

void func_1169(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1170(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_684();
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

int func_1171(int iParam0)
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

void func_1172(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1737(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1188(iVar0, 1);
			if (func_1438(iVar0, iParam1))
			{
				vVar4 = { func_686(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1437(iVar7, 4))
				{
					func_1441(iVar7, 4, 6);
				}
			}
			else
			{
				func_1440(iVar7, 4, 6);
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

bool func_1173(int iParam0)
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
	func_1738(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1174(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1175(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_607(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1438(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1678(iVar1, iVar3);
		}
	}
	if (func_1140(-1586649372) && func_1438(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1678(iVar1, iVar3);
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
						func_1678(iVar1, iVar3);
					}
				}
			}
			func_1739(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1739(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1678(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1739(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1678(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1678(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1739(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1739(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1678(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1739(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1678(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1678(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1678(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1663(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1678(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_603(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1678(iVar1, iVar3);
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
						func_1678(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1663(&(Global_1946804->f_1497.f_1[iVar1])) || func_603(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1678(iVar1, iVar3);
					}
				}
			}
			switch (func_607(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1678(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_607(&(uParam0->f_1[iVar1])) || func_603(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1678(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1176(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1177(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1131(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1131(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1178(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1131(iParam0, 65536) && !func_1131(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1131(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1131(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1179()
{
	return Global_1905944->f_5694;
}

void func_1180(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1181(struct<4> Param0)
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
			if (func_1740(Param0))
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
			func_1741(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1180(8);
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
			if (func_1740(Param0))
			{
				return;
			}
			func_1741(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1180(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1124(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1182(bool bParam0)
{
	return func_1077(1328661203, func_1742(), -1591664384, bParam0);
}

struct<4> func_1183(bool bParam0)
{
	iVar0 = func_172(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1077(923904168, func_1182(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1077(923904168, func_1182(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1077(923904168, func_1182(bParam0), -740156546, 0);
}

bool func_1184(int iParam0, bool bParam1)
{
	if (func_607(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_605(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1185(bool bParam0)
{
	iVar0 = func_172(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1077(271701509, func_1182(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1077(271701509, func_1182(bParam0), 12999093, 0);
}

bool func_1186(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_607(iParam0);
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

bool func_1187(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_172(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1188(int iParam0, int iParam1)
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

int func_1189(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1190(int iParam0, int iParam1)
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

void func_1191(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1192(int iParam0, int iParam1)
{
	iVar0 = func_702(*iParam0);
	iVar1 = func_701(*iParam0);
	if (iParam1 < 1 || iParam1 > func_707(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1193(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1194(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1195(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1196(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1197(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1198(int iParam0)
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

bool func_1199(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1046(iParam0))
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

int func_1200(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_583(iParam0, 0))
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

int func_1201(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1615(&iParam0);
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!func_611(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1050(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1617(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_172(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1202(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_603(iParam0, -5284486))
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
		if (func_1743(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_664(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_667(iVar62, iVar61);
					if (func_583(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1202(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1202(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1743(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1203(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1744(1);
}

void func_1204(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1745(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_327(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1745(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_327(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1205()
{
	return Global_40.f_4283.f_325;
}

bool func_1206(int iParam0)
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

bool func_1207(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1208(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1209(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1210(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1211(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1212(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_398();
	bVar1 = false;
	if (bVar0 && !func_1746(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1746(37)) && !func_1746(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1746(43)) && !func_1746(44))
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
		if (func_1485(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1485(1) == 1)
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

int func_1213()
{
	return Global_40.f_1095.f_3054;
}

bool func_1214(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_1215(int iParam0, var uParam1)
{
	if (!func_1747(iParam0))
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

int func_1216()
{
	if (func_398())
	{
		if (!func_1746(3))
		{
			return func_1748(43);
		}
		if (func_1746(38) && !func_1746(43))
		{
			return func_1749(8);
		}
	}
	return 0;
}

bool func_1217(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1750(iParam0));
}

Vector3 func_1218(int iParam0, int iParam1)
{
	func_1215(15, &Var0);
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

int func_1219(int iParam0, int iParam1)
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
	iVar0 = func_1751(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1215(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1752(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1220(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1753(iParam0);
	if (func_495(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1221(int iParam0)
{
	if (!func_1215(15, &Var0))
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

bool func_1222(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1754(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1755(5))
	{
		if (func_1756(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1478(vParam0);
	if (bParam6)
	{
		iVar1 = func_375(vParam0, 1);
		if (func_116(iVar1) || func_1757(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1758(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1759())
	{
		if (func_1760(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1761(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_375(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1762(iParam3, iParam4))
	{
		return false;
	}
	if (func_1763(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1764(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_398())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1765(vParam0, bParam10) || func_1766(vParam0, bParam10))
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

int func_1223(vector3 vParam0)
{
	iVar0 = func_1767(vParam0, 0f, 0f, 0, 2);
	return func_1767(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1224(int iParam0)
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

char* func_1225(bool bParam0)
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
	return func_1448(iVar0);
}

char* func_1226(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1768(iVar0);
}

char* func_1227(int iParam0)
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

void func_1228(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1541(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 58760;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1229(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1541(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1230()
{
	if (func_495(-919512195))
	{
		func_1769(419559004);
		func_1769(1786931635);
		func_1769(557212279);
		func_1769(1426715569);
		func_1769(2097480406);
		func_1770("cal_nav_tabacco_burnt");
		func_1770("cal_nav_tabacco_burning");
		func_1770("cal_nav_tabacco_mission");
		func_393(702350293);
		func_393(-677977650);
		func_393(26815048);
		func_393(-1229109520);
		func_1771("cal_nav_tabacco_clean");
	}
	else if (func_495(-1925798111))
	{
		func_1769(419559004);
		func_1769(1786931635);
		func_1769(557212279);
		func_1770("cal_nav_tabacco_burnt");
		func_1770("cal_nav_tabacco_burning");
		func_1770("cal_nav_tabacco_clean");
		func_393(702350293);
		func_393(-677977650);
		func_393(26815048);
		func_393(-1229109520);
		func_393(1426715569);
		func_393(2097480406);
		func_1771("cal_nav_tabacco_mission");
	}
	else if (func_495(420709909))
	{
		func_1769(419559004);
		func_1769(26815048);
		func_1769(-1229109520);
		func_1770("cal_nav_tabacco_burnt");
		func_1770("cal_nav_tabacco_clean");
		func_1770("cal_nav_tabacco_mission");
		func_393(702350293);
		func_393(-677977650);
		func_393(1786931635);
		func_393(557212279);
		func_393(1426715569);
		func_393(2097480406);
		func_1771("cal_nav_tabacco_burning");
	}
	else if (func_495(1703426636))
	{
		func_1769(702350293);
		func_1769(-677977650);
		func_1769(26815048);
		func_1769(-1229109520);
		func_1769(1426715569);
		func_1769(2097480406);
		func_1770("cal_nav_tabacco_clean");
		func_1770("cal_nav_tabacco_mission");
		func_1770("cal_nav_tabacco_burning");
		func_393(419559004);
		func_393(1786931635);
		func_393(557212279);
		func_1771("cal_nav_tabacco_burnt");
	}
}

void func_1231()
{
	request_model(-1600328361, false);
	request_model(1695133799, false);
	request_model(108854062, false);
	request_model(-1368683894, false);
	request_model(2114379160, false);
	request_model(-1811911736, false);
}

void func_1232(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1233(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1234(float fParam0)
{
	func_1772(ceil((to_float(300) - (to_float(300) * fParam0))));
}

bool func_1235()
{
	if (!has_model_loaded(-1600328361))
	{
		return false;
	}
	if (!has_model_loaded(1695133799))
	{
		return false;
	}
	if (!has_model_loaded(108854062))
	{
		return false;
	}
	if (!has_model_loaded(-1368683894))
	{
		return false;
	}
	if (!has_model_loaded(2114379160))
	{
		return false;
	}
	return true;
}

void func_1236()
{
	set_anim_scene_entity(iVar7227, func_1225(iVar782), iVar782, 0);
	set_anim_scene_entity(iVar7227, func_1225(&(Local_14.f_27[0])), &(Local_14.f_27[0]), 0);
	set_anim_scene_entity(iVar7227, func_1225(&(Local_14.f_27[1])), &(Local_14.f_27[1]), 0);
	iLocal_7250 = create_object(1695133799, 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	iLocal_7251 = create_object(-1600328361, 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	iLocal_7252[0] = create_object(108854062, 1017.18f, -1768f, 46.2f, true, true, false, false, true);
	iLocal_7252[1] = create_object(108854062, 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	iLocal_7252[2] = create_object(108854062, 1017.48f, -1768f, 46.2f, true, true, false, false, true);
	iLocal_7256[0] = create_object(2114379160, 1017.18f, -1768f, 48.2f, true, true, false, false, true);
	iLocal_7256[1] = create_object(2114379160, 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	iLocal_7256[2] = create_object(2114379160, 1017.18f, -1768f, 46.2f, true, true, false, false, true);
	iLocal_7260[0] = create_object(-1368683894, 1017.18f, -1768f, 48.2f, true, true, false, false, true);
	iLocal_7260[1] = create_object(-1368683894, 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	iLocal_7260[2] = create_object(-1368683894, 1017.18f, -1768f, 46.2f, true, true, false, false, true);
	set_anim_scene_entity(iVar7227, "P_CRIBBAGE01X", iVar7248, 0);
	set_anim_scene_entity(iVar7227, "P_CARDS02X", iVar7249, 0);
	set_anim_scene_entity(iVar7227, "P_CRD_2_C01X", &(iLocal_7252[0]), 0);
	set_anim_scene_entity(iVar7227, "P_CRD_2_C01X^1", &(iLocal_7252[1]), 0);
	set_anim_scene_entity(iVar7227, "P_CRD_2_C01X^2", &(iLocal_7252[2]), 0);
	set_anim_scene_entity(iVar7227, "P_TEACUP01X", &(iLocal_7256[0]), 0);
	set_anim_scene_entity(iVar7227, "P_TEACUP01X^1", &(iLocal_7256[1]), 0);
	set_anim_scene_entity(iVar7227, "P_TEACUP01X^3", &(iLocal_7256[2]), 0);
	set_anim_scene_entity(iVar7227, "P_SAUCER01X", &(iLocal_7260[0]), 0);
	set_anim_scene_entity(iVar7227, "P_SAUCER01X^1", &(iLocal_7260[1]), 0);
	set_anim_scene_entity(iVar7227, "P_SAUCER01X^3", &(iLocal_7260[2]), 0);
	set_entity_visible(&(iLocal_7260[0]), false);
	set_entity_visible(&(iLocal_7256[1]), false);
	set_anim_scene_bool(iVar7227, "bLoopCribbage", false, false);
	start_anim_scene(iVar7227);
}

void func_1237(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1238(char* sParam0, bool bParam1, int iParam2)
{
	if (get_is_waypoint_recording_loaded(sParam0))
	{
		waypoint_recording_get_num_points(sParam0, &iVar0);
		waypoint_recording_get_closest_waypoint(sParam0, Global_36, &iVar1);
		if (bParam1)
		{
			_start_gps_custom_route_from_waypoint_recording_route(sParam0, iVar1, iVar0, iParam2, true, false);
		}
		else
		{
			_start_gps_custom_route_from_waypoint_recording_route(sParam0, iVar1, iVar0, iParam2, false, true);
		}
		set_gps_custom_route_render(true, 3, 30);
	}
}

void func_1239(var uParam0)
{
	if (!func_1773(uParam0))
	{
		switch (iVar7408)
		{
			case 0:
				break;
			case 1:
				fVar0 = func_894(Global_35, &(Local_14.f_19[0]), 1, 1);
				if (!is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), true) && (fVar0 + 0.01f) >= fVar266)
				{
					if (func_506(&uLocal_245))
					{
						func_1774(&uLocal_245);
					}
					if (func_903(&uLocal_245) > 10f)
					{
						func_1265(uParam0);
					}
				}
				else if (!func_506(&uLocal_245))
				{
					func_1261(&uLocal_245);
				}
				bLocal_269 = fVar0;
				break;
			case 3:
				if (func_903(&uLocal_245) > 20f)
				{
					if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false) && func_1268(&(Local_14.f_19[0]), func_1267(2, 0), 1) < 5f)
					{
						func_1265(uParam0);
					}
				}
				break;
		}
	}
}

void func_1240(var uParam0)
{
	if (iVar7408 == 3)
	{
		if (!func_1264(Global_35, &(Local_14.f_19[0]), 0))
		{
			func_169(iLocal_770[0]);
			iLocal_770[0] = func_1260(408396114, &(Local_14.f_19[0]), 1);
			set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_WGN");
			func_1259(uParam0, 1);
		}
	}
	else if (iVar7408 == 1)
	{
		if (func_1264(Global_35, &(Local_14.f_19[0]), 0))
		{
			func_169(iLocal_770[0]);
			iLocal_770[0] = func_1262(408396114, func_391(1, 0), 1);
			_blip_set_modifier(&(iLocal_770[0]), -1878373110);
			func_1259(uParam0, 3);
		}
	}
}

void func_1241(var uParam0)
{
	if (!func_180(32768))
	{
		if (func_251(95))
		{
			func_1775(95);
			func_1776(iVar812, 0, 0);
			func_1292(32768);
		}
	}
	else if (!func_251(95))
	{
		func_1777(32768);
	}
	else
	{
		_0xf45e46deecf7df6e(8192, 0, 0, -1, -1);
		_0xf45e46deecf7df6e(2048, 0, 0, -1, -1);
		_0xf45e46deecf7df6e(1048576, 0, 0, -1, -1);
		set_ambient_ped_range_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
		_0xba0980b5c0a11924(0f);
	}
}

void func_1242(float fParam0, var uParam1)
{
	if (func_1778(Global_35, &(Local_14.f_19[0]), 0))
	{
		_0x0c3f0f7f92ca847c(&(Local_14.f_19[0]), (fParam0 * 3.34f));
	}
	if (is_waypoint_playback_going_on_for_vehicle(&(Local_14.f_19[0]), 0) && func_1256(uParam1) < 4)
	{
		vehicle_waypoint_playback_override_speed(&(Local_14.f_19[0]), 4f);
	}
}

void func_1243()
{
	if ((is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false) && is_ped_in_vehicle(iVar783, &(Local_14.f_19[0]), false)) && is_entity_in_volume(&(Local_14.f_19[0]), &(uLocal_844[2]), true, 0))
	{
		if (func_1779(&uLocal_263) > 5f && !func_180(262144))
		{
			_0xb56d41a694e42e86(&(uLocal_844[2]), 8192, 0, 0, -1, -1, 0);
			func_1292(262144);
		}
		else if (!func_26(&uLocal_263))
		{
			func_223(&uLocal_263);
		}
	}
	else if (!is_entity_in_volume(&(Local_14.f_19[0]), &(uLocal_844[2]), true, 0) && func_180(262144))
	{
		_0x74c2b3dc0b294102(&(uLocal_844[2]));
		func_1777(262144);
		func_558(&uLocal_263);
		_0xe2c2fbb7825ffc66();
	}
	set_ped_reset_flag(Global_35, 189, true);
}

bool func_1244(var uParam0)
{
	if (func_33(uParam0) <= iLocal_92)
	{
		if (func_33(uParam0) <= iLocal_92)
		{
			if (does_entity_exist(&(Local_14.f_19[0])) && !_0x139efb0a71dd9011())
			{
				_0xa19447d83294e29f(&(Local_14.f_19[0]), &uVar1, &iVar0);
				if (!is_vehicle_driveable(&(Local_14.f_19[0]), false, false) && iVar0 < 1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_1245(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_440(uParam0, 2);
	}
	else
	{
		func_440(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1553(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

bool func_1246()
{
	if ((does_entity_exist(&(Local_14.f_19[0])) && is_entity_on_fire(&(Local_14.f_19[0]))) && !_0x139efb0a71dd9011())
	{
		return true;
	}
	return false;
}

bool func_1247(var uParam0)
{
	if (func_33(uParam0) <= iLocal_92)
	{
		if (does_entity_exist(&(Local_14.f_19[0])) && !_0x139efb0a71dd9011())
		{
			if (!is_vehicle_driveable(&(Local_14.f_19[0]), false, false))
			{
				return true;
			}
			if (_0x18714953cced17d3(&(Local_14.f_19[0])))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1248()
{
	if (does_entity_exist(&(Local_14.f_27[0])))
	{
		if (!func_163(&(Local_14.f_27[0]), 0) || func_1780(&(Local_14.f_27[0]), Global_35))
		{
			return true;
		}
	}
	if (does_entity_exist(&(Local_14.f_27[1])))
	{
		if (!func_163(&(Local_14.f_27[1]), 0) || func_1780(&(Local_14.f_27[1]), Global_35))
		{
			return true;
		}
	}
	if (does_entity_exist(&(Local_14.f_27[2])))
	{
		if (!func_163(&(Local_14.f_27[2]), 0) || func_1780(&(Local_14.f_27[2]), Global_35))
		{
			return true;
		}
	}
	if (_0x72ad59f7b7fb6e24(player_id(), 60))
	{
		_0x1a6e84f13c952094(player_id(), 60, &uLocal_7308);
		if (get_ped_relationship_group_hash(&(uLocal_7308[0])) == -1998572072)
		{
			return true;
		}
	}
	return false;
}

bool func_1249()
{
	if (_is_explosion_in_volume(-1, &(uLocal_844[0])) || has_bullet_impacted_in_box(1028.05f, -1757.48f, 45.67f, 994.75f, -1783.93f, 56.18f, true, true))
	{
		return true;
	}
	return false;
}

bool func_1250()
{
	if ((func_1781(Global_35, &(uLocal_844[4]), 0, 1) && !func_1781(Global_35, &(uLocal_844[0]), 0, 1)) && (is_ped_shooting(Global_35) || is_ped_in_combat(Global_35, 0)))
	{
		return true;
	}
	return false;
}

bool func_1251(var uParam0)
{
	if (is_vehicle_driveable(*uParam0, false, false))
	{
		if (((is_vehicle_stuck_timer_up(*uParam0, 0, 7000) || is_vehicle_stuck_timer_up(*uParam0, 3, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 2, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

bool func_1252()
{
	if ((func_1782(32768) && is_ped_in_any_vehicle(Global_35, false)) || (does_entity_exist(func_463(14)) && has_entity_been_damaged_by_entity(func_463(14), Global_35, 1, 1)))
	{
		return true;
	}
	return false;
}

bool func_1253(int iParam0)
{
	if (!func_1783())
	{
		return false;
	}
	iVar0 = func_77();
	return iVar0 == func_1784(iParam0);
}

int func_1254(var uParam0)
{
	return func_470(uParam0->f_607);
}

bool func_1255(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	Var0 = { func_1329(iParam1) };
	Var8 = { func_1330(iParam1) };
	return func_1331(uParam0, func_463(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

int func_1256(var uParam0)
{
	return uParam0->f_599;
}

bool func_1257()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_1258(var uParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1785(&(uParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

void func_1259(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (iVar0 != iParam1 && iVar0 != 0)
		{
			if (func_1787(func_1786(iVar0), 1))
			{
				func_1788(func_1786(iVar0), 1);
			}
		}
		iVar0++;
	}
	iLocal_7411 = iParam1;
	if (iParam1 == 0)
	{
		func_45();
	}
	else
	{
		func_1789(uParam0, func_1786(iParam1), -1082130432, 0, 0, -1, -1, 0);
	}
	func_223(&uLocal_245);
}

int func_1260(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1261(var uParam0)
{
	if (!func_26(uParam0))
	{
	}
	if (!func_506(uParam0))
	{
		uParam0->f_2 = (func_556() - uParam0->f_1);
		func_990(uParam0, 2);
	}
}

int func_1262(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1263(int iParam0)
{
	func_961(iParam0, 8, 1);
}

bool func_1264(int iParam0, int iParam1, int iParam2)
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

void func_1265(var uParam0)
{
	func_1790(uParam0, func_1786(iVar7408), 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
}

bool func_1266()
{
	return func_1416(1);
}

Vector3 func_1267(int iParam0, int iParam1)
{
	return func_1791(iParam0, iParam1);
}

bool func_1268(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(bParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), vParam1, bParam4);
}

int func_1269(var uParam0)
{
	return uParam0->f_598;
}

void func_1270()
{
	if (func_163(bVar783, 0) && !is_ped_in_vehicle(bVar783, &(Local_14.f_19[0]), false))
	{
		if (func_1271(Global_35, &(uLocal_844[1]), 1, 0) && is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false))
		{
			if ((get_script_task_status(bVar783, 242628503, true) == 1 || get_script_task_status(bVar783, 242628503, true) == 0) && func_180(64))
			{
				func_1777(64);
				clear_ped_tasks(bVar783, 1, 0);
			}
			if (is_vehicle_seat_free(&(Local_14.f_19[0]), -1))
			{
				if (get_script_task_status(bVar783, 242628503, true) != 1 && get_script_task_status(bVar783, 242628503, true) != 0)
				{
					func_1530(bVar7446, -1);
				}
			}
			else if (is_vehicle_seat_free(&(Local_14.f_19[0]), 0))
			{
				if (get_script_task_status(bVar783, 242628503, true) != 1 && get_script_task_status(bVar783, 242628503, true) != 0)
				{
					func_1530(bVar7446, -1);
				}
			}
		}
		else if (is_ped_in_vehicle(Global_35, &(Local_14.f_19[0]), false) && !func_180(64))
		{
			func_1792();
		}
	}
}

bool func_1271(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

int func_1272(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_1;
}

void func_1273(int iParam0, int iParam1)
{
	if (!func_193(iParam0))
	{
		return;
	}
	func_1208(iParam0, iParam1);
}

void func_1274(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1275(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1541(iVar0))
	{
		return;
	}
	iVar1 = func_1542(iParam3);
	if (!func_1543(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1276(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1277(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1278()
{
	if (_0xa0bc8faed8cfeb3c(func_1793(&(Local_14.f_19[0]), 0)) && _0xa0bc8faed8cfeb3c(func_1793(&(Local_14.f_19[0]), 1)))
	{
		return true;
	}
	return false;
}

void func_1279()
{
	if (does_entity_exist(iVar7248) && does_entity_belong_to_this_script(iVar7248, true))
	{
		delete_object(&iLocal_7250);
	}
	if (does_entity_exist(iVar7249) && does_entity_belong_to_this_script(iVar7249, true))
	{
		delete_object(&iLocal_7251);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (does_entity_exist(&(iLocal_7252[iVar0])) && does_entity_belong_to_this_script(&(iLocal_7252[iVar0]), true))
		{
			delete_object(iLocal_7252[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(iLocal_7256[iVar0])) && does_entity_belong_to_this_script(&(iLocal_7256[iVar0]), true))
		{
			delete_object(iLocal_7256[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(iLocal_7260[iVar0])) && does_entity_belong_to_this_script(&(iLocal_7260[iVar0]), true))
		{
			delete_object(iLocal_7260[iVar0]);
		}
		iVar0++;
	}
}

void func_1280(bool bParam0)
{
	_0x18262cafebb5fbe1(uVar812, 8192, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(uVar812, 8192, 0, 0, -1, -1, 0);
	if (bParam0)
	{
		func_1775(95);
		if (!_0x91a5f9cbebb9d936(uVar852))
		{
			uLocal_855 = _0x4c39c95ae5db1329(uVar812, 0, 15);
		}
		_0x2161278c6322f740(106496, 0, 0, -1, -1, 0);
	}
}

bool func_1281(var uParam0, int iParam1)
{
	if (!func_1794(-1, 0))
	{
		return false;
	}
	remove_all_ped_weapons(&(Local_14.f_23[0]), true, true);
	func_1795();
	if ((!does_entity_exist(iVar7241) || !does_entity_exist(iVar7242)) || !does_entity_exist(iVar7243))
	{
		return false;
	}
	func_1796(&(Local_14.f_23[0]), 0);
	if (func_1307())
	{
		func_1280(0);
	}
	if (!_is_anim_scene_loaded(iVar720, true, false))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		if (!_is_anim_scene_started(iVar720, false))
		{
			set_anim_scene_entity(iVar720, "p_bottle03x", iVar7243, 0);
			set_anim_scene_entity(iVar720, "S_M_M_CGHWORKER_01", &(Local_14.f_23[0]), 0);
			set_anim_scene_entity(iVar720, "WAGON05X", &(Local_14.f_19[0]), 0);
			set_anim_scene_entity(iVar720, "CS_Sean", iVar781, 0);
			set_anim_scene_entity(iVar720, "player_zero", player_ped_id(), 0);
			set_anim_scene_entity(iVar720, "s_wagon05xbr2cover", func_1797(), 0);
			set_anim_scene_entity(iVar720, "p_lantern05X", iVar7242, 0);
			set_anim_scene_entity(iVar720, "p_whiskeycrate02x", iVar7241, 0);
			set_anim_scene_entity(iVar720, "w_shotgun_doublebarrel01", iVar7244, 0);
			start_anim_scene(iVar720);
		}
	}
	if (!_is_anim_scene_started(iVar720, false))
	{
		return false;
	}
	set_ped_relationship_group_hash(&(Local_14.f_23[0]), -1538724068);
	_0x49dadfc4cd808b0a(&(Local_14.f_23[0]), 1, -1);
	func_145(uParam0, &(Local_14.f_23[0]), "BRT2_GUARD_1", 0);
	return true;
}

void func_1282()
{
	if (_is_anim_scene_loaded(iVar7231, true, false))
	{
		if (_is_anim_scene_started(iVar7231, false) && !_0x3ab6c7b0bb0df4b1(Global_35, iVar7231))
		{
			reset_anim_scene(iVar7231, 0);
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pbl_idle")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pbl_idle")) && !_0x23e33cb9f4a3f547(iVar7231, "pbl_idle")) && !_0x0df57f86fe71dbe5(iVar7231, "pbl_idle"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pbl_idle");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_front_to_left")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_front_to_left")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_front_to_left")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_front_to_left"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_front_to_left");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_front_to_right")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_front_to_right")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_front_to_right")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_front_to_right"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_front_to_right");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pbl_idle_left")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pbl_idle_left")) && !_0x23e33cb9f4a3f547(iVar7231, "pbl_idle_left")) && !_0x0df57f86fe71dbe5(iVar7231, "pbl_idle_left"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pbl_idle_left");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_left_to_right")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_left_to_right")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_left_to_right")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_left_to_right"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_left_to_right");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_left_to_front")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_left_to_front")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_left_to_front")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_left_to_front"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_left_to_front");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pbl_idle_right")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pbl_idle_right")) && !_0x23e33cb9f4a3f547(iVar7231, "pbl_idle_right")) && !_0x0df57f86fe71dbe5(iVar7231, "pbl_idle_right"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pbl_idle_right");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_right_to_left")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_right_to_left")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_right_to_left")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_right_to_left"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_right_to_left");
		}
		if (((((_is_anim_scene_metadata_loaded(iVar7231, false) && _0xa9016536015de29d(iVar7231, "pl_trans_right_to_front")) && !_is_anim_scene_finished(iVar7231, false)) && !_0x1f0e401031e20146(iVar7231, "pl_trans_right_to_front")) && !_0x23e33cb9f4a3f547(iVar7231, "pl_trans_right_to_front")) && !_0x0df57f86fe71dbe5(iVar7231, "pl_trans_right_to_front"))
		{
			_0xdf7b5144e25cd3fe(iVar7231, "pl_trans_right_to_front");
		}
	}
	else if (!_is_anim_scene_loading(iVar7231, true))
	{
		load_anim_scene(iVar7231);
	}
}

void func_1283(var uParam0)
{
	if (((func_180(8388608) && !_0xa24c1d341c6e0d53(1, 0, 0)) && is_control_just_released(0, 2139949496)) && !_0x5060fa977cea4455())
	{
		func_558(&uLocal_263);
		func_1292(8);
	}
	else if (((func_180(8388608) && _0xa24c1d341c6e0d53(1, 0, 0)) && is_control_just_released(0, 2139949496)) && !_0x5060fa977cea4455())
	{
		func_558(&uLocal_263);
		func_1777(8);
	}
	if (func_180(8))
	{
		_0x90da5ba5c2635416();
	}
	if (func_180(8388608) && _0xa24c1d341c6e0d53(1, 0, 0))
	{
		if ((func_1798(3) || _is_anim_scene_started(iVar7232, false)) || _is_anim_scene_started(iVar7233, false))
		{
			_0xdd1232b332cbb9e7(1, 1, 0);
			func_558(&uLocal_263);
		}
		if (((!func_1798(2) && (!func_26(&uLocal_263) || func_1779(&uLocal_263) > 30f)) && !_is_anim_scene_started(iVar7232, false)) && !_is_anim_scene_started(iVar7233, false))
		{
			uLocal_7296[2] = func_722("BRT2_POVWAGON", 10000, 0, 0, 0, 1);
			func_223(&uLocal_263);
		}
		fLocal_727 = get_control_normal(0, -1450761377);
		if ((_0x8d81e7824b7753f7(iVar7230, "s_idle", 1) && (get_gameplay_cam_relative_heading() > -10f && get_gameplay_cam_relative_heading() < 10f)) && !is_player_control_on(player_id()))
		{
			set_player_control(player_id(), true, 0, false);
		}
		switch (iLocal_100)
		{
			case 0:
				if (fVar724 > 0.937f && (_0x1f0e401031e20146(iVar7230, "pbl_idle_left") || _0x8d81e7824b7753f7(iVar7230, "s_idle_left", 1)))
				{
					_set_anim_scene_playback_list_bool(iVar7230, "pl_trans_left_to_front", true);
					set_player_control(player_id(), true, 0, true);
					iLocal_100 = 1;
				}
				break;
			case 1:
				if ((get_gameplay_cam_relative_heading() > 38f && fVar724 < -0.95f) && (_0x1f0e401031e20146(iVar7230, "pbl_idle") || _0x8d81e7824b7753f7(iVar7230, "s_idle", 1)))
				{
					_set_anim_scene_playback_list_bool(iVar7230, "pl_trans_front_to_left", true);
					iLocal_100 = 0;
				}
				else if ((get_gameplay_cam_relative_heading() < -38f && fVar724 > 0.937f) && (_0x1f0e401031e20146(iVar7230, "pbl_idle") || _0x8d81e7824b7753f7(iVar7230, "s_idle", 1)))
				{
					_set_anim_scene_playback_list_bool(iVar7230, "pl_trans_front_to_right", true);
					iLocal_100 = 2;
				}
				break;
			case 2:
				if (fVar724 < -0.95f && (_0x1f0e401031e20146(iVar7230, "pbl_idle_right") || _0x8d81e7824b7753f7(iVar7230, "s_idle_right", 1)))
				{
					_set_anim_scene_playback_list_bool(iVar7230, "pl_trans_right_to_front", true);
					set_player_control(player_id(), true, 0, true);
					iLocal_100 = 1;
				}
				break;
		}
	}
	else
	{
		if ((func_1798(2) || _is_anim_scene_started(iVar7232, false)) || _is_anim_scene_started(iVar7233, false))
		{
			_0xdd1232b332cbb9e7(1, 1, 0);
			func_558(&uLocal_263);
		}
		if (((((func_180(8388608) && !func_1798(3)) && (!func_26(&uLocal_263) || func_1779(&uLocal_263) > 30f)) && !_is_anim_scene_started(iVar7232, false)) && !_is_anim_scene_started(iVar7233, false)) && !_0x5060fa977cea4455())
		{
			uLocal_7296[3] = func_722("BRT2_POV", 10000, 0, 0, 0, 1);
			func_223(&uLocal_263);
		}
	}
}

void func_1284()
{
	if (((!_0xa24c1d341c6e0d53(1, 0, 0) && (_0x3ab6c7b0bb0df4b1(Global_35, -1) || _is_anim_scene_started(iVar722, false))) && !(_0x3ab6c7b0bb0df4b1(Global_35, iVar7233) && _get_anim_scene_progress(iVar7233) > 0.9f)) && !(_0x3ab6c7b0bb0df4b1(Global_35, iVar7234) && _get_anim_scene_progress(iVar7234) > 0.9f))
	{
		_0xfa1d5e8d1c3ccd67(&(Local_14.f_19[0]), 1);
	}
	_0x259acc5b52a2b2d9(&(Local_14.f_19[0]), 1);
}

void func_1285()
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1934388793, false);
	disable_control_action(0, -491432029, false);
	disable_control_action(0, -399233038, false);
}

int func_1286()
{
	iVar0 = 0;
	if (is_vehicle_driveable(&(Local_14.f_19[0]), false, false))
	{
		if (is_waypoint_playback_going_on_for_vehicle(&(Local_14.f_19[0]), 0))
		{
			iVar0 = get_vehicle_waypoint_target_point(&(Local_14.f_19[0]));
		}
	}
	return iVar0;
}

bool func_1287(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && is_scripted_conversation_loaded(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_1288(char* sParam0)
{
	return func_1799(sParam0);
}

bool func_1289()
{
	if ((((!_0xa2cac9def0195e6f(0) && !func_216()) && is_screen_faded_in()) && !is_screen_fading_in()) && !func_1800())
	{
		return true;
	}
	return false;
}

void func_1290()
{
	iVar0 = get_clock_hours();
	if (_is_anim_scene_started(iVar722, false))
	{
		switch (iVar7438)
		{
			case 0:
				if (iVar0 >= 21 || iVar0 < 3)
				{
					_0xdf7b5144e25cd3fe(iVar722, "pl_Rifle_To_Lantern");
					if (_0x23e33cb9f4a3f547(iVar722, "pl_Rifle_To_Lantern"))
					{
						_set_anim_scene_playback_list_bool(iVar722, "pl_Rifle_To_Lantern", true);
						iLocal_7440 = 1;
					}
				}
				break;
			case 1:
				_0xdf7b5144e25cd3fe(iVar722, "pl_Standing_Guard_Lantern");
				if (_0x23e33cb9f4a3f547(iVar722, "pl_Standing_Guard_Lantern") && func_1801(iVar722, 100))
				{
					_set_anim_scene_playback_list_bool(iVar722, "pl_Standing_Guard_Lantern", true);
					iLocal_7440 = 2;
				}
				break;
			case 2:
				if (iVar0 >= 4 && iVar0 < 21)
				{
					_0xdf7b5144e25cd3fe(iVar722, "pl_Lantern_To_Rifle");
					if (_0x23e33cb9f4a3f547(iVar722, "pl_Lantern_To_Rifle"))
					{
						_set_anim_scene_playback_list_bool(iVar722, "pl_Lantern_To_Rifle", true);
						iLocal_7440 = 3;
					}
				}
				break;
			case 3:
				_0xdf7b5144e25cd3fe(iVar722, "pl_Standing_Guard_Rifle");
				if (_0x23e33cb9f4a3f547(iVar722, "pl_Standing_Guard_Rifle") && func_1801(iVar722, 100))
				{
					_set_anim_scene_playback_list_bool(iVar722, "pl_Standing_Guard_Rifle", true);
					iLocal_7440 = 0;
				}
				break;
		}
	}
}

bool func_1291()
{
	disable_control_action(0, -17122892, false);
	if (!is_entity_dead(&(Local_14.f_19[0])))
	{
		switch (iVar7439)
		{
			case 0:
				if (_is_anim_scene_loaded(iVar7228, true, false) && _is_anim_scene_loaded(iVar7230, true, false))
				{
					set_anim_scene_entity(iVar7228, "ARTHUR", player_ped_id(), 0);
					set_anim_scene_entity(iVar7228, "Cloth_Cover", func_1797(), 0);
					set_anim_scene_entity(iVar7228, "sean", bVar783, 0);
					set_anim_scene_entity(iVar7228, "Wagon", &(Local_14.f_19[0]), 0);
					attach_anim_scene_to_entity(iVar7228, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "seat_front"));
					set_anim_scene_entity(iVar7230, "ARTHUR", player_ped_id(), 0);
					set_anim_scene_entity(iVar7230, "Cloth_Cover", func_1797(), 0);
					set_anim_scene_entity(iVar7230, "sean", bVar783, 0);
					set_anim_scene_entity(iVar7230, "Wagon", &(Local_14.f_19[0]), 0);
					attach_anim_scene_to_entity(iVar7230, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "bodyshell"));
					set_anim_scene_entity(iVar7229, "ARTHUR", player_ped_id(), 0);
					set_anim_scene_entity(iVar7229, "Cloth_Cover", func_1797(), 0);
					set_anim_scene_entity(iVar7229, "Wagon", &(Local_14.f_19[0]), 0);
					attach_anim_scene_to_entity(iVar7229, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "bodyshell"));
					start_anim_scene(iVar7228);
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					iLocal_7441 = 1;
				}
				break;
			case 1:
				if (((_is_anim_scene_started(iVar7228, false) && _get_anim_scene_time(iVar7228) > 10.6f) && !func_180(4)) && !func_10(iVar729))
				{
					func_1802();
				}
				else if (func_10(iVar729) && func_1803(iVar729, 1))
				{
					func_1292(4);
					func_11(&iLocal_731, 1, 1);
				}
				if (_is_anim_scene_started(iVar7228, false) && _get_anim_scene_time(iVar7228) > 14.1f)
				{
					vVar3 = { get_entity_coords(&(Local_14.f_19[0]), true, false) };
					get_closest_vehicle_node(vVar3, &vVar0, 1, 3f, 0f);
					display_radar(false);
					_0xba8818212633500a(&(Local_14.f_19[0]), 7, 0);
					_0x4ba972d0e5ad8122(&(Local_14.f_19[0]), 0);
					if ((((((((get_distance_between_coords(vVar3, vVar0, true) < 7.5f && !func_1781(&(Local_14.f_19[0]), &(uLocal_834[0]), 0, 1)) && !func_1781(&(Local_14.f_19[0]), &(uLocal_834[1]), 0, 1)) && !func_1781(&(Local_14.f_19[0]), &(uLocal_834[3]), 0, 1)) && !func_1781(&(Local_14.f_19[0]), &(uLocal_834[4]), 0, 1)) && !(func_1781(&(Local_14.f_19[0]), iVar831, 0, 1) && is_ped_heading_towards_position(bVar783, 1433.15f, -1444.46f, 78.47f, 120f))) && !is_vehicle_stuck_timer_up(&(Local_14.f_19[0]), 1, 2000)) && !is_vehicle_stuck_timer_up(&(Local_14.f_19[0]), 3, 2000)) && !(func_1781(&(Local_14.f_19[0]), &(uLocal_834[2]), 0, 1) && is_ped_heading_towards_position(bVar783, 1607.008f, -1540.645f, 60.8594f, 30f)))
					{
						iLocal_7441 = 2;
						_0xe01f55b2896f6b37(&(Local_14.f_19[0]), 1);
					}
					else
					{
						iLocal_7441 = 3;
						abort_anim_scene(iVar7228, false);
						_0xe01f55b2896f6b37(&(Local_14.f_19[0]), 1);
						set_vehicle_forward_speed(&(Local_14.f_19[0]), 3.5f);
						set_entity_motion_blur(&(Local_14.f_19[0]), false);
						set_entity_motion_blur(Global_35, false);
						set_entity_motion_blur(bVar783, false);
						_0x2fcd528a397e5c88(iVar831, 40);
						_0x226c6a4e3346d288(&(Local_14.f_19[0]), 0);
						display_radar(false);
						start_anim_scene(iVar7230);
					}
				}
				break;
			case 2:
				vVar9 = { get_entity_coords(&(Local_14.f_19[0]), true, false) };
				get_closest_vehicle_node(vVar9, &vVar6, 1, 3f, 0f);
				if (((((get_distance_between_coords(vVar9, vVar6, true) >= 10.5f || func_1781(&(Local_14.f_19[0]), &(uLocal_834[0]), 0, 1)) || (func_1781(&(Local_14.f_19[0]), &(uLocal_834[1]), 0, 1) && !func_1781(&(Local_14.f_19[0]), iVar808, 0, 1))) || func_1781(&(Local_14.f_19[0]), &(uLocal_834[3]), 0, 1)) || is_vehicle_stuck_timer_up(&(Local_14.f_19[0]), 3, 4000)) || (func_1781(&(Local_14.f_19[0]), &(uLocal_834[2]), 0, 1) && is_ped_heading_towards_position(bVar783, 1607.008f, -1540.645f, 60.8594f, 30f)))
				{
					iLocal_7441 = 3;
					abort_anim_scene(iVar7228, false);
					_0xba8818212633500a(&(Local_14.f_19[0]), 7, 0);
					_0x4ba972d0e5ad8122(&(Local_14.f_19[0]), 0);
					_0x8886d83a430537fd(Global_35, 1048576);
					set_vehicle_forward_speed(&(Local_14.f_19[0]), 3.5f);
					_0x2fcd528a397e5c88(iVar831, 40);
					_0x226c6a4e3346d288(&(Local_14.f_19[0]), 0);
					display_radar(false);
					set_entity_collision(Global_35, false, false);
					start_anim_scene(iVar7230);
				}
				if (((_is_anim_scene_started(iVar7228, false) && _get_anim_scene_time(iVar7228) > 16f) && !func_180(4)) && func_10(iVar729))
				{
					func_11(&iLocal_731, 1, 1);
				}
				if (_0x005e6f28dd7ed58d(iVar7228, "ARTHUR"))
				{
					clear_gps_custom_route();
					set_gps_custom_route_render(false, 3, 30);
					start_anim_scene(iVar7229);
					set_entity_collision(Global_35, false, false);
					set_ped_can_ragdoll(Global_35, true);
					_task_vehicle_drive_to_coord_2(&(Local_14.f_19[0]), func_391(1, 0), 3.5f, 0, 67108864, 3f, 3f);
					iLocal_7441 = 5;
				}
				if (get_active_vehicle_mission_type(&(Local_14.f_19[0])) != 4)
				{
					_task_vehicle_drive_to_coord_2(&(Local_14.f_19[0]), func_391(1, 0), 3.5f, 0, 67108864, 3f, 3f);
				}
				break;
			case 3:
				if (!func_180(16384))
				{
					vVar12 = { 1516.426f, -1416.001f, 65.9499f };
					vVar15 = { 1632.77f, -1573.434f, 56.3601f };
					vVar18 = { 1565.22f, -1434.49f, 60.15f };
					if (func_1805(func_1804(&(Local_14.f_19[0]), vVar12, vVar15), vVar12))
					{
						if (func_1805(func_1804(&(Local_14.f_19[0]), vVar12, vVar18), vVar12))
						{
							func_442(&(Local_14.f_19[0]), vVar12, 277.1325f, 38, 1073741824);
						}
						else
						{
							func_442(&(Local_14.f_19[0]), vVar18, 280.1287f, 38, 1073741824);
						}
					}
					else
					{
						func_442(&(Local_14.f_19[0]), vVar15, 46.0513f, 38, 1073741824);
					}
					_task_vehicle_drive_to_coord_2(&(Local_14.f_19[0]), func_391(1, 0), 3.5f, 0, 69206016, 3f, 3f);
					set_entity_motion_blur(&(Local_14.f_19[0]), true);
					set_entity_motion_blur(Global_35, true);
					set_entity_motion_blur(bVar783, true);
					func_1292(16384);
				}
				if (!func_180(4) && func_10(iVar729))
				{
					func_11(&iLocal_731, 1, 1);
				}
				if (_0xb89fcff19dafff28(iVar7230, "sean"))
				{
					clear_gps_custom_route();
					set_gps_custom_route_render(false, 3, 30);
					_0x31160ec47e7c9549(&(Local_14.f_19[0]), 1);
					_task_vehicle_follow_waypoint_recording_2(&(Local_14.f_19[0]), "brt2_WagonToGuard", 0, 0, 10, -1, -1082130432, 0, 1073741824, 0);
					iLocal_7441 = 5;
				}
				else if (_get_anim_scene_time(iVar7230) < 1f)
				{
					set_vehicle_forward_speed(&(Local_14.f_19[0]), 3.5f);
				}
				if (get_active_vehicle_mission_type(&(Local_14.f_19[0])) != 4)
				{
					_task_vehicle_drive_to_coord_2(&(Local_14.f_19[0]), func_391(1, 0), 3.5f, 0, 67108864, 3f, 3f);
				}
				break;
			case 5:
				if (((((_0x005e6f28dd7ed58d(iVar7229, "ARTHUR") || _0xb89fcff19dafff28(iVar7229, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7229, "s_idle", 1)) || _0x005e6f28dd7ed58d(iVar7230, "ARTHUR")) || _0xb89fcff19dafff28(iVar7230, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7230, "s_idle", 1))
				{
					display_radar(true);
					func_1295();
				}
				if (func_1268(&(Local_14.f_19[0]), 1655.04f, -1403.27f, 44.28f, 0) < 5f || func_1268(&(Local_14.f_19[0]), func_391(1, 0), 0) < 30f)
				{
					_task_vehicle_follow_waypoint_recording_2(&(Local_14.f_19[0]), "brt2_WagonToGuard", 69206016, 0, 10, -1, -1082130432, 0, 1073741824, 0);
					iLocal_7441 = 7;
				}
				else if (get_active_vehicle_mission_type(&(Local_14.f_19[0])) != 4)
				{
					_task_vehicle_drive_to_destination_2(&(Local_14.f_19[0]), func_391(1, 0), 3.5f, 69206016, 3, 3f, 3f);
				}
				break;
			case 6:
				if (((((_0x005e6f28dd7ed58d(iVar7229, "ARTHUR") || _0xb89fcff19dafff28(iVar7229, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7229, "s_idle", 1)) || _0x005e6f28dd7ed58d(iVar7230, "ARTHUR")) || _0xb89fcff19dafff28(iVar7230, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7230, "s_idle", 1))
				{
					func_1295();
				}
				if (func_1268(&(Local_14.f_19[0]), 1701.57f, -1387.89f, 43.83f, 1) < 20f)
				{
					task_look_at_entity(bVar783, &(Local_14.f_8[0]), -1, 0, 51, 0);
					return true;
				}
				break;
			case 7:
				if (((((_0x005e6f28dd7ed58d(iVar7229, "ARTHUR") || _0xb89fcff19dafff28(iVar7229, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7229, "s_idle", 1)) || _0x005e6f28dd7ed58d(iVar7230, "ARTHUR")) || _0xb89fcff19dafff28(iVar7230, "ARTHUR")) || _0x8d81e7824b7753f7(iVar7230, "s_idle", 1))
				{
					func_1295();
				}
				if (func_1268(&(Local_14.f_19[0]), 1701.57f, -1387.89f, 43.83f, 1) < 10f)
				{
					task_look_at_entity(bVar783, &(Local_14.f_8[0]), 2500, 0, 51, 0);
					return true;
				}
				break;
		}
	}
	return false;
}

void func_1292(int iParam0)
{
	if (!func_164(iVar796, iParam0))
	{
		func_422(&uLocal_799, iParam0);
	}
}

bool func_1293()
{
	switch (iVar724)
	{
		case 0:
			iLocal_807 = create_camera(26379945, false);
			iLocal_808 = create_camera(26379945, false);
			set_cam_params(iVar805, 1704.155f, -1380.357f, 44.4533f, -5.0112f, -0.0008f, 146.2349f, 45f, 0, 1, 1, 2, 1, 0);
			set_cam_params(iVar806, 1707.09f, -1382.038f, 44.2823f, -3.2557f, -0.0008f, 131.518f, 45f, 0, 1, 1, 2, 1, 0);
			set_cam_active_with_interp(iVar806, iVar805, 4000, 1, 1);
			iLocal_804 = get_game_timer();
			shake_cam(iVar806, "HAND_SHAKE", 0.2f);
			render_script_cams(true, false, 3000, true, false, 0);
			uLocal_726 = iVar724 + 1;
			_0x36559148b78853b3(1, 1, 0);
			task_look_at_entity(bVar783, &(Local_14.f_23[0]), -1, 1024, 51, 1);
			bring_vehicle_to_halt(&(Local_14.f_19[0]), 8f, 3, false);
			break;
		case 1:
			if ((get_game_timer() - iVar802) > 3000)
			{
				iLocal_804 = get_game_timer();
				task_clear_look_at(bVar783);
				uLocal_726 = iVar724 + 1;
				return true;
			}
			break;
	}
	return false;
}

void func_1294(var uParam0)
{
	if (!bVar720)
	{
		if (func_1806(uParam0))
		{
			func_905(0, 0);
			_set_entity_coords_and_heading_no_offset(&(Local_14.f_19[0]), 1701.58f, -1387.89f, 43.71f, 288.86f, false, true);
			render_script_cams(false, false, 3000, true, false, 0);
			iLocal_723 = 1;
		}
	}
	else if (_is_anim_scene_started(iVar721, false))
	{
		if (((_is_anim_scene_metadata_loaded(iVar721, false) && _0x6f1f0b17109309da(iVar721, "CAMERA")) && _0x4822a65d5af64e69(iVar721) > 0) && !_0xa24c1d341c6e0d53(1, 0, 0))
		{
			func_1807();
			_0x1ad896bf43619551();
		}
		else if (iVar719 == 1)
		{
			iLocal_722 = 0;
			_uiprompt_delete(iVar7449);
		}
	}
}

void func_1295()
{
	if (!func_180(8388608))
	{
		func_1292(8388608);
	}
	if (!_is_anim_scene_started(iVar7231, false) && _is_anim_scene_loaded(iVar7231, true, false))
	{
		_0x8886d83a430537fd(Global_35, 1048576);
		set_entity_collision(Global_35, false, false);
		set_anim_scene_entity(iVar7231, "ARTHUR", Global_35, 0);
		set_anim_scene_entity(iVar7231, "Cloth_Cover", func_1797(), 0);
		_set_anim_scene_playback_list_bool(iVar7231, "pbl_idle", true);
		start_anim_scene(iVar7231);
		iLocal_100 = 1;
		attach_anim_scene_to_entity(iVar7231, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "bodyshell"));
	}
}

void func_1296()
{
	if (iVar720 == 1)
	{
		iLocal_722 = 0;
		_uiprompt_delete(iVar7450);
	}
	if (!is_ped_injured(&(Local_14.f_23[0])))
	{
		remove_all_ped_weapons(&(Local_14.f_23[0]), true, true);
		set_blocking_of_non_temporary_events(&(Local_14.f_23[0]), true);
	}
	if (!is_entity_dead(&(Local_14.f_19[0])))
	{
		if (_0x083d497d57b7400f(&(Local_14.f_19[0])))
		{
			freeze_entity_position(&(Local_14.f_19[0]), false);
		}
		_0xe0b61ed8bb37712f(bVar783);
		set_ped_into_vehicle(bVar783, &(Local_14.f_19[0]), 0);
		_0xe0b61ed8bb37712f(&(Local_14.f_23[0]));
		set_ped_into_vehicle(&(Local_14.f_23[0]), &(Local_14.f_19[0]), -1);
		if (!is_ped_injured(&(Local_14.f_23[0])))
		{
			set_ped_into_vehicle(&(Local_14.f_23[0]), &(Local_14.f_19[0]), -1);
			attach_entity_to_entity(iVar7245, &(Local_14.f_23[0]), get_ped_bone_index(&(Local_14.f_23[0]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		_0x31160ec47e7c9549(&(Local_14.f_19[0]), 1);
		_task_vehicle_drive_to_coord_2(&(Local_14.f_19[0]), 1827.3f, -1394.47f, 42.63f, 4f, 0, 67108864, 3f, 3f);
	}
	set_anim_scene_entity(iVar7223, "s_m_m_cghworker_01", &(Local_14.f_23[0]), 0);
	set_anim_scene_entity(iVar7223, "p_bottle03x", iVar7245, 0);
	set_anim_scene_entity(iVar7223, "cs_sean", bVar783, 0);
	set_anim_scene_entity(iVar7223, "wagon", &(Local_14.f_19[0]), 0);
	set_anim_scene_origin(iVar7223, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	attach_anim_scene_to_entity(iVar7223, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "seat_front"));
	start_anim_scene(iVar7223);
	set_anim_scene_entity(iVar723, "w_shotgun_doublebarrel01", iVar7246, 0);
	set_anim_scene_entity(iVar723, "p_lantern05X", iVar7244, 0);
	set_anim_scene_entity(iVar723, "p_whiskeycrate02x", iVar7243, 0);
	start_anim_scene(iVar723);
	_0x49dadfc4cd808b0a(bVar783, 1, -1);
	if (!is_ped_injured(&(Local_14.f_23[0])))
	{
		_0x2208438012482a1a(&(Local_14.f_23[0]), false, false);
	}
	_0x2208438012482a1a(bVar783, false, false);
}

bool func_1297(var uParam0)
{
	switch (iVar802)
	{
		case 0:
			_0xc9caeaeec1256e54(-1679307491);
			iLocal_807 = create_camera(26379945, false);
			iLocal_808 = create_camera(26379945, false);
			set_cam_params(iVar804, 1889.612f, -1340.684f, 47.726f, -15.1221f, 0f, 151.3482f, 45f, 0, 1, 1, 2, 1, 0);
			set_cam_params(iVar805, 1889.91f, -1340.139f, 45.4302f, -15.1221f, 0f, 151.3482f, 45f, 0, 1, 1, 2, 1, 0);
			set_cam_active_with_interp(iVar805, iVar804, 4000, 1, 1);
			_set_entity_coords_and_heading(&(Local_14.f_19[0]), 1876.56f, -1350.05f, 42.29f, 281.13f, true, true, true);
			_0x141bc64c8d7c5529(&(Local_14.f_19[0]));
			_0xeba2081e0a5f4d17(&(Local_14.f_19[0]));
			_task_vehicle_follow_waypoint_recording_2(&(Local_14.f_19[0]), "brt2_ToWagonParkInt2", 524419, 0, 8, -1, 1.75f, 0, 1073741824, 0);
			iLocal_804 = get_game_timer();
			shake_cam(iVar805, "HAND_SHAKE", 0.2f);
			render_script_cams(true, false, 3000, true, false, 0);
			_0xdd1232b332cbb9e7(1, 1, 0);
			func_558(&uLocal_263);
			func_1777(8);
			func_1777(8388608);
			uLocal_805 = iVar802 + 1;
			break;
		case 1:
			_0xc9caeaeec1256e54(-1679307491);
			if ((get_game_timer() - iVar801) > 9000)
			{
				if (!is_ped_injured(&(Local_14.f_23[0])))
				{
					remove_all_ped_weapons(&(Local_14.f_23[0]), true, true);
					_0x8886d83a430537fd(&(Local_14.f_23[0]), 96);
					_0x18ff3110cf47115d(&(Local_14.f_23[0]), 7, 0);
					set_ped_config_flag(&(Local_14.f_23[0]), 297, true);
				}
				if (!is_entity_dead(&(Local_14.f_19[0])))
				{
					_0xbdda142759307528(&(Local_14.f_19[0]));
				}
				if (!is_ped_injured(iVar782))
				{
					_0x8886d83a430537fd(iVar782, 96);
					set_ped_combat_attributes(iVar782, 46, true);
				}
				freeze_entity_position(&(Local_14.f_19[0]), true);
				set_anim_scene_entity(iVar7231, "SEAN", iVar782, 0);
				set_anim_scene_entity(iVar7231, "S_M_M_CghWorker", &(Local_14.f_23[0]), 0);
				set_anim_scene_entity(iVar7231, "p_bottle03x", iVar7244, 0);
				set_anim_scene_entity(iVar7231, "BottleCrate03", iVar7246, 0);
				set_entity_collision(iVar7246, false, false);
				set_anim_scene_entity(iVar7231, "Cloth", func_1797(), 0);
				set_anim_scene_entity(iVar7231, "WAGON05", &(Local_14.f_19[0]), 0);
				_set_anim_scene_playback_list_bool(iVar7231, "pbl_get_off_wagon", true);
				start_anim_scene(iVar7231);
				func_1295();
				_0x2208438012482a1a(&(Local_14.f_23[0]), true, false);
				force_entity_ai_and_animation_update(&(Local_14.f_19[0]), true);
				_0x2208438012482a1a(iVar782, true, false);
				force_entity_ai_and_animation_update(iVar7244, true);
				force_entity_ai_and_animation_update(iVar7246, true);
				freeze_entity_position(iVar7246, true);
				destroy_cam(iVar804, false);
				destroy_cam(iVar805, false);
				func_905(0, 0);
				iLocal_807 = create_camera_with_params(26379945, 1879.741f, -1349.669f, 44.1436f, -5.0333f, 0f, -63.7178f, 51.282f, true, 2);
				render_script_cams(false, false, 3000, true, false, 0);
				iLocal_804 = get_game_timer();
				func_1292(8388608);
				if (_0xa24c1d341c6e0d53(0, 0, 0))
				{
					func_1292(8);
				}
				func_1283(uParam0);
				uLocal_805 = iVar802 + 1;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_1298()
{
	if (!is_entity_dead(&(Local_14.f_23[0])))
	{
		if (!does_entity_exist(iVar7245))
		{
			iLocal_7247 = create_object(1953815821, get_entity_coords(&(Local_14.f_23[0]), true, false), true, true, false, false, true);
			attach_entity_to_entity(iVar7245, &(Local_14.f_23[0]), get_ped_bone_index(&(Local_14.f_23[0]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
	}
	if (!does_entity_exist(iVar7247))
	{
		iLocal_7249 = create_object(1754553459, 1881.454f, -1345.906f, 41.521f, true, true, false, false, true);
	}
}

void func_1299(bool bParam0, int iParam1)
{
	if (!is_ped_injured(bParam0))
	{
		if (iParam1 == 1)
		{
			set_ped_config_flag(bParam0, 130, false);
			set_ped_config_flag(bParam0, 315, false);
			set_ped_config_flag(bParam0, 301, false);
		}
		else
		{
			set_ped_config_flag(bParam0, 130, true);
			set_ped_config_flag(bParam0, 315, true);
			set_ped_config_flag(bParam0, 301, true);
		}
	}
}

void func_1300(bool bParam0, bool bParam1)
{
	if (!is_entity_dead(bParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(bParam0, 263, !bParam1);
		}
		set_ped_config_flag(bParam0, 138, bParam1);
		set_ped_config_flag(bParam0, 488, bParam1);
	}
}

void func_1301(var uParam0, char[4] cParam1)
{
	func_1808(&(uParam0->f_7375), cParam1);
	func_383(uParam0, 33554432);
}

void func_1302(int iParam0, char* sParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (bParam2)
			{
				_0xfca8fb9e15fa80d3(get_ped_index_from_entity_index(iParam0), get_hash_key(sParam1));
			}
			else
			{
				_set_ped_prompt_name(get_ped_index_from_entity_index(iParam0), sParam1);
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			if (bParam2)
			{
				_0xd503d6f0986d58bc(get_object_index_from_entity_index(iParam0), get_hash_key(sParam1));
			}
		}
	}
}

void func_1303(var uParam0)
{
	iVar0 = iLocal_99;
	if (((func_1809(&Global_35) && !_0x5809dbca0a37c82b(func_1083(Global_35, 0, 1, 0))) && func_1083(Global_35, 0, 1, 0) != -1569615261) || is_explosion_in_sphere(-1, 1880.11f, -1343.72f, 42.69f, 4f))
	{
		func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
	}
	else if (((iLocal_102 >= 2 && iLocal_99 != 5) && iLocal_99 != 3) && iLocal_99 != 4)
	{
		if (is_ped_performing_melee_action(Global_35, 16384, 0))
		{
			func_1810(&(Local_14.f_23[0]), "GUARD_CALL_FOR_SUPPORT_FAR", -69597692, Global_35, 1, 0, 0, 1);
			_delete_anim_scene(iVar7231);
			clear_ped_tasks(bVar782, 1, 0);
			func_1811(iVar7244, 1, 1);
			set_anim_scene_entity(iVar7235, "sean", bVar782, 0);
			start_anim_scene(iVar7235);
			func_135(uParam0, 5);
			func_223(&uLocal_242);
			iLocal_99 = 5;
		}
		else if ((func_1809(&Global_35) || (((is_ped_performing_melee_action(Global_35, 32768, 0) && !is_ped_performing_melee_action(Global_35, 8, 0)) && !is_ped_performing_melee_action(Global_35, 1024, 0)) && !is_ped_performing_melee_action(Global_35, 16, 0))) || func_1812(Global_35))
		{
			func_1810(&(Local_14.f_23[0]), "GUARD_CALL_FOR_SUPPORT_FAR", -69597692, Global_35, 1, 0, 0, 1);
			_delete_anim_scene(iVar7231);
			clear_ped_tasks(bVar782, 1, 0);
			func_1811(iVar7244, 1, 1);
			set_anim_scene_entity(iVar7235, "sean", bVar782, 0);
			start_anim_scene(iVar7235);
			func_1813(0);
			func_135(uParam0, 5);
			func_223(&uLocal_242);
			iLocal_99 = 5;
		}
		else if ((!_0x3ab6c7b0bb0df4b1(Global_35, -1) && (is_ped_facing_ped(&(Local_14.f_23[0]), Global_35, 60f) || func_1814(Global_35, 1880.69f, -1346.26f, 41.57f, 1.5f, 1, 0))) && _get_anim_scene_time(iVar7231) < 42f)
		{
			remove_anim_scene_entity(iVar7231, "S_M_M_CghWorker", &(Local_14.f_23[0]));
			func_1811(iVar7244, 1, 1);
			func_1813(0);
			func_135(uParam0, 5);
			func_505(&uLocal_242, 3f);
			iLocal_99 = 5;
		}
		else if ((!_0x3ab6c7b0bb0df4b1(Global_35, -1) && (is_ped_facing_ped(&(Local_14.f_23[0]), Global_35, 60f) || func_1814(Global_35, 1880.69f, -1346.26f, 41.57f, 1.5f, 1, 0))) && _get_anim_scene_time(iVar7231) < 44.5f)
		{
			_delete_anim_scene(iVar7231);
			_0x2208438012482a1a(bVar782, false, false);
			task_melee(bVar782, &(Local_14.f_23[0]), 1483729867, 0, 1, 2f, 0, -1082130432);
			remove_anim_scene_entity(iVar7231, "S_M_M_CghWorker", &(Local_14.f_23[0]));
			func_1811(iVar7244, 1, 1);
			func_1813(1);
			func_1259(uParam0, 7);
			if (!func_180(128))
			{
				iLocal_770[0] = _blip_add_for_entity(408396114, &(Local_14.f_23[0]));
			}
			iLocal_99 = 3;
		}
	}
	if (func_163(bVar782, 0))
	{
		switch (iLocal_99)
		{
			case 0:
				if (_is_anim_scene_started(iVar7231, false))
				{
					func_223(&uLocal_236);
					iLocal_99 = 2;
				}
				break;
			case 2:
				if (((((is_ped_being_stealth_killed(&(Local_14.f_23[0])) || _0x3bdfcf25b58b0415(&(Local_14.f_23[0]))) || func_1815(1)) || get_melee_target_for_ped(Global_35) == &Local_14.f_23[0]) || is_ped_injured(&(Local_14.f_23[0]))) || is_ped_in_combat(&(Local_14.f_23[0]), 0))
				{
					_delete_anim_scene(iVar7231);
					func_1811(iVar7244, 1, 1);
					clear_ped_tasks(bVar782, 1, 0);
					set_anim_scene_entity(iVar7235, "sean", bVar782, 0);
					start_anim_scene(iVar7235);
					iLocal_99 = 5;
				}
				if (_get_anim_scene_time(iVar7231) > 45.75f)
				{
					if (!is_ped_injured(&(Local_14.f_23[0])))
					{
						func_1311(&(Local_14.f_23[0]), 1, 0);
						func_1811(iVar7244, 1, 1);
						func_1259(uParam0, 7);
						if (!func_180(128))
						{
							iLocal_770[0] = _blip_add_for_entity(408396114, &(Local_14.f_23[0]));
						}
					}
					iLocal_99 = 3;
				}
				break;
			case 5:
				if (func_163(&(Local_14.f_23[0]), 0) || is_ped_injured(&(Local_14.f_23[0])))
				{
					if (((((func_903(&uLocal_242) > 4f && !is_ped_being_stealth_killed(&(Local_14.f_23[0]))) && !_0x3bdfcf25b58b0415(&(Local_14.f_23[0]))) && !is_ped_dead_or_dying(&(Local_14.f_23[0]), true)) && !is_ped_injured(&(Local_14.f_23[0]))) || (func_903(&uLocal_242) > 4f && is_ped_performing_melee_action(Global_35, 16384, 0)))
					{
						if (_is_anim_scene_started(iVar7231, false))
						{
							_delete_anim_scene(iVar7231);
							clear_ped_tasks(bVar782, 1, 0);
							set_anim_scene_entity(iVar7235, "sean", bVar782, 0);
							start_anim_scene(iVar7235);
						}
						func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
					}
				}
				else
				{
					iLocal_99 = 3;
				}
				break;
			case 3:
				if (_does_anim_scene_exist(iVar7231) && _get_anim_scene_progress(iVar7231) > 0.99f)
				{
					set_current_ped_weapon(bVar782, -1569615261, true, 0, false, false);
					func_1816();
					iLocal_99 = 4;
				}
				break;
			case 4:
				break;
		}
	}
	if (iVar0 != iLocal_99)
	{
	}
}

void func_1304()
{
	disable_control_action(0, -171675621, false);
}

void func_1305(var uParam0)
{
	switch (iLocal_102)
	{
		case 0:
			func_1285();
			if (_0x23e33cb9f4a3f547(iVar7232, "pbl_FrontExit_Stealth") && _0x23e33cb9f4a3f547(iVar7233, "pbl_FrontExit"))
			{
				iLocal_102 = 1;
			}
			break;
		case 1:
			func_1285();
			if (_get_anim_scene_time(iVar7231) > 18f || _is_anim_scene_finished(iVar7231, false))
			{
				if (!func_10(iVar806))
				{
					iLocal_809 = func_1334("BRT2_UC_EXIT", -822242784, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1337(iVar806, &(Local_14.f_19[0]), 0, 1, -1);
					_0xdd1232b332cbb9e7(3, 1, 1);
					func_1259(uParam0, 6);
					func_1265(uParam0);
					iLocal_770[0] = _blip_add_for_entity(831283580, &(Local_14.f_23[0]));
					set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_GRD");
					display_radar(true);
				}
				else if (func_1409(iVar806, 1) || (_does_anim_scene_exist(iVar7231) && _get_anim_scene_progress(iVar7231) > 0.92f))
				{
					func_1777(8388608);
					func_1777(8);
					func_1811(Global_35, 1, 1);
					func_1817(iVar7230);
					set_entity_no_collision_entity(Global_35, &(Local_14.f_19[0]), true);
					if (does_entity_exist(&(Local_14.f_19[0])) && is_vehicle_driveable(&(Local_14.f_19[0]), false, false))
					{
						set_vehicle_is_considered_by_player(&(Local_14.f_19[0]), false);
					}
					if (!is_ped_injured(&(Local_14.f_23[0])))
					{
						set_anim_scene_origin(iVar7232, 0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_anim_scene_to_entity(iVar7232, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "chassis_dummy"));
						set_anim_scene_entity(iVar7232, "ARTHUR", Global_35, 0);
						set_anim_scene_entity(iVar7232, "Cloth", func_1797(), 0);
						_set_anim_scene_playback_list_bool(iVar7232, "pbl_FrontExit_Stealth", true);
						start_anim_scene(iVar7232);
					}
					else
					{
						set_anim_scene_origin(iVar7233, 0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_anim_scene_to_entity(iVar7233, &(Local_14.f_19[0]), get_entity_bone_index_by_name(&(Local_14.f_19[0]), "chassis_dummy"));
						set_anim_scene_entity(iVar7233, "ARTHUR", Global_35, 0);
						set_anim_scene_entity(iVar7233, "Cloth", func_1797(), 0);
						_set_anim_scene_playback_list_bool(iVar7233, "pbl_FrontExit", true);
						start_anim_scene(iVar7233);
					}
					destroy_all_cams(false);
					iLocal_808 = create_camera(26379945, false);
					set_cam_params(iVar805, 1889.386f, -1346.507f, 44.8504f, -19.4905f, -0.2347f, 101.2655f, 45f, 0, 1, 1, 2, 1, 0);
					set_cam_active(iVar805, true);
					shake_cam(iVar805, "HAND_SHAKE", 0.2f);
					render_script_cams(true, true, 3000, true, false, 0);
					func_11(&iLocal_809, 1, 1);
					set_bit(&(Global_1956580->f_1), 4);
					iLocal_102 = 2;
				}
				else
				{
					_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_14.f_19[0])), "BRT2_B_WGN", 1, 0, 0, 0);
				}
			}
			break;
		case 2:
			func_1285();
			if (_get_anim_scene_progress(iVar7232) > 0.9f || _get_anim_scene_progress(iVar7233) > 0.9f)
			{
				freeze_entity_position(iVar7246, false);
				set_entity_collision(Global_35, true, false);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
				clear_bit(&(Global_1956580->f_1), 4);
				freeze_entity_position(Global_35, false);
				iLocal_102 = 3;
			}
			else if (is_cam_active(iVar805))
			{
				if (_get_anim_scene_progress(iVar7232) > 0.5f || _get_anim_scene_progress(iVar7233) > 0.5f)
				{
					render_script_cams(false, true, 3000, true, false, 0);
					set_cam_active(iVar805, false);
				}
			}
			break;
	}
}

bool func_1306(var uParam0)
{
	if (!func_180(128))
	{
		if (!func_1271(Global_35, iVar821, 1, 0) && !func_1818())
		{
			func_1259(uParam0, 8);
			func_1265(uParam0);
			func_169(iLocal_770[0]);
			iLocal_770[0] = func_1819(_0xf70f00013a62f866(iVar821), 0);
			set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_WST");
			func_1292(128);
		}
	}
	else if (func_1271(Global_35, iVar821, 1, 0))
	{
		func_1777(128);
		func_169(iLocal_770[0]);
		if (func_1787(func_1786(8), 1))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
		}
		if (func_163(&(Local_14.f_23[0]), 0))
		{
			func_1259(uParam0, 6);
			iLocal_770[0] = _blip_add_for_entity(831283580, &(Local_14.f_23[0]));
			set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_GRD");
		}
		else
		{
			func_1259(uParam0, 7);
			func_169(iLocal_770[0]);
			iLocal_770[0] = _blip_add_for_entity(408396114, &(Local_14.f_23[0]));
			set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_GRD");
		}
	}
	if (!func_1271(Global_35, iVar822, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_1307()
{
	iVar0 = func_1425();
	func_895(20, &iVar1, &iVar2);
	if (func_704(iVar0) >= iVar1 || func_704(iVar0) < iVar2)
	{
		return true;
	}
	return false;
}

bool func_1308(bool bParam0, bool bParam1)
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

bool func_1309()
{
	return func_1820(1);
}

bool func_1310(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_180(4096))
	{
		if (((bParam2 && func_1821()) || !bParam2) && func_1822(-1, bParam1))
		{
			func_1292(4096);
		}
		if (func_180(4096))
		{
			func_1823();
			if (!is_entity_dead(&(Local_14.f_8[0])))
			{
				func_1824(0);
				func_1825(&(Local_14.f_8[0]), -183018591, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[0]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[0]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[0]), 250, true);
				func_1300(&(Local_14.f_8[0]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[0]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[1])))
			{
				func_1824(1);
				func_1825(&(Local_14.f_8[0]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[1]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[1]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[1]), 250, true);
				func_1300(&(Local_14.f_8[1]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[1]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[2])))
			{
				func_1824(2);
				func_1825(&(Local_14.f_8[2]), -183018591, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[2]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[2]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[2]), 250, true);
				func_1300(&(Local_14.f_8[2]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[2]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[3])))
			{
				func_1824(3);
				func_1825(&(Local_14.f_8[3]), -183018591, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[3]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[3]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[3]), 250, true);
				func_1300(&(Local_14.f_8[3]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[3]), "SpBraithwaites2Stealth", 0);
				func_1300(&(Local_14.f_8[3]), 1);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[4])))
			{
				func_1824(4);
				func_1825(&(Local_14.f_8[4]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[4]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[4]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[4]), 250, true);
				func_1300(&(Local_14.f_8[4]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[4]), "SpBraithwaites2Stealth", 0);
				func_1300(&(Local_14.f_8[4]), 1);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[5])))
			{
				func_1824(5);
				func_1825(&(Local_14.f_8[5]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[5]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[5]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[5]), 250, true);
				func_1300(&(Local_14.f_8[5]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[5]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[6])))
			{
				func_1824(6);
				func_1825(&(Local_14.f_8[6]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[6]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[6]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[6]), 250, true);
				func_1300(&(Local_14.f_8[6]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[6]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			if (!is_entity_dead(&(Local_14.f_8[7])))
			{
				func_1824(7);
				func_1825(&(Local_14.f_8[7]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_14.f_8[7]), -164645981, 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_current_ped_weapon(&(Local_14.f_8[7]), -164645981, true, 0, false, false);
				set_ped_config_flag(&(Local_14.f_8[7]), 250, true);
				func_1300(&(Local_14.f_8[7]), 1);
				_0xbb1e41dd3d3c6250(&(Local_14.f_8[7]), "SpBraithwaites2Stealth", 0);
				stop_ped_speaking(&(Local_14.f_8[0]), true);
			}
			return true;
		}
	}
	return false;
}

void func_1311(int iParam0, bool bParam1, bool bParam2)
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

void func_1312(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1313(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_442(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1314()
{
	if (!does_entity_exist(&(Local_14.f_3[0])))
	{
		func_1362(0, 1);
		func_1363(0);
	}
	else if (!does_entity_exist(&(Local_14.f_3[1])))
	{
		func_1362(1, 1);
		func_1363(1);
	}
}

bool func_1315(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_36))
	{
		Local_14.f_36 = { func_425() };
	}
	if (func_1826(&(Local_14.f_36), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_38[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_38[0] = create_vehicle(-283162583, 1960.567f, -1226.448f, 41.9882f, 81.8026f, true, true, false, false);
		func_1827(Local_14.f_36, &(Local_14.f_38[0]));
		func_1828(&(Local_14.f_38[0]), Local_14);
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
	func_1829(&(Local_14.f_36), 1);
	return true;
}

bool func_1316()
{
	switch (iLocal_225)
	{
		case 0:
			if (func_1830(Local_14.f_38[0]))
			{
				iLocal_225++;
			}
			break;
		case 1:
			if (does_entity_exist(func_1793(&(Local_14.f_38[0]), 0)))
			{
				bVar0 = func_1793(&(Local_14.f_38[0]), 0);
				func_1831(&bVar0, 0);
			}
			else if (does_entity_exist(func_1793(&(Local_14.f_38[0]), 1)))
			{
				bVar1 = func_1793(&(Local_14.f_38[0]), 1);
				func_1831(&bVar1, 0);
			}
			else
			{
				iLocal_225++;
			}
			break;
		case 2:
			if (func_1832() && func_1278())
			{
				iLocal_225++;
			}
			break;
		case 3:
			set_vehicle_is_considered_by_player(&(Local_14.f_38[0]), false);
			if (!_0x53784cea0159439b(&(Local_14.f_38[0])))
			{
				_0xd80faf919a2e56ea(&(Local_14.f_38[0]), uVar7302);
				uLocal_7307 = _0xce2acd6f602803e5(&(Local_14.f_38[0]));
				uLocal_7307 = uVar7305;
			}
			if (!_0xc9b4b3a36f81fd75(&(Local_14.f_38[0])))
			{
				_0xc0f0417a90402742(&(Local_14.f_38[0]), uVar7303);
			}
			set_vehicle_extra(&(Local_14.f_38[0]), 1, true);
			set_vehicle_extra(&(Local_14.f_38[0]), 2, true);
			set_vehicle_extra(&(Local_14.f_38[0]), 3, false);
			set_vehicle_extra(&(Local_14.f_38[0]), 4, true);
			set_vehicle_extra(&(Local_14.f_38[0]), 5, true);
			set_vehicle_extra(&(Local_14.f_38[0]), 6, true);
			return true;
	}
	return false;
}

void func_1317()
{
	(*Local_4913[0])[0]->f_1 = { (*Local_4913[0])[0]->f_1 };
	(*Local_4913[6])[0] = "ent_amb_generic_fire_field";
	(*Local_4913[6])[0]->f_1 = { 1867.722f, -1269.971f, 41.75f };
	(*Local_4913[6])[1] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[6])[1]->f_1 = { 1874.872f, -1268.89f, 42f };
	(*Local_4913[6])[2] = "ent_amb_generic_fire_field";
	(*Local_4913[6])[2]->f_1 = { 1872.931f, -1277.735f, 42f };
	(*Local_4913[6])[3] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[6])[3]->f_1 = { 1877.412f, -1277.697f, 42f };
	(*Local_4913[6])[4] = "ent_amb_generic_fire_field_smoke";
	(*Local_4913[6])[4]->f_1 = { 1881.375f, -1278.052f, 42f };
	(*Local_4913[6])[5] = "ent_amb_generic_fire_field";
	(*Local_4913[6])[5]->f_1 = { 1881.468f, -1273.121f, 42f };
	(*Local_4913[6])[6] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[6])[6]->f_1 = { 1884.448f, -1284.069f, 42f };
	(*Local_4913[6])[7] = "ent_amb_generic_fire_field";
	(*Local_4913[6])[7]->f_1 = { 1891.398f, -1280.363f, 42f };
	iLocal_7210[6] = 8;
	(*Local_4913[5])[0] = "ent_amb_generic_fire_field";
	(*Local_4913[5])[0]->f_1 = { 1872.865f, -1264.383f, 41.25f };
	(*Local_4913[5])[1] = "ent_amb_generic_fire_field";
	(*Local_4913[5])[1]->f_1 = { 1875.69f, -1259.6f, 41.25f };
	(*Local_4913[5])[2] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[5])[2]->f_1 = { 1876.942f, -1264.856f, 41.25f };
	(*Local_4913[5])[3] = "ent_amb_generic_fire_field_smoke";
	(*Local_4913[5])[3]->f_1 = { 1877.321f, -1263.243f, 41.25f };
	(*Local_4913[5])[4] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[5])[4]->f_1 = { 1883.229f, -1267.838f, 41.25f };
	(*Local_4913[5])[5] = "ent_amb_generic_fire_field";
	(*Local_4913[5])[5]->f_1 = { 1886.58f, -1263.57f, 41.25f };
	(*Local_4913[5])[6] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[5])[6]->f_1 = { 1887.436f, -1273.811f, 41.25f };
	(*Local_4913[5])[7] = "ent_amb_generic_fire_field";
	(*Local_4913[5])[7]->f_1 = { 1895.106f, -1270.913f, 41.25f };
	iLocal_7210[5] = 8;
	(*Local_4913[1])[0] = "ent_amb_generic_fire_field";
	(*Local_4913[1])[0]->f_1 = { 1916.311f, -1299.35f, 42f };
	(*Local_4913[1])[1] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[1])[1]->f_1 = { 1929.981f, -1294.95f, 42f };
	(*Local_4913[1])[2] = "ent_amb_generic_fire_field_smoke";
	(*Local_4913[1])[2]->f_1 = { 1929.423f, -1297.452f, 40.94f };
	(*Local_4913[1])[3] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[1])[3]->f_1 = { 1929.332f, -1299.335f, 42f };
	(*Local_4913[1])[4] = "ent_amb_generic_fire_field";
	(*Local_4913[1])[4]->f_1 = { 1926.691f, -1304.741f, 42f };
	iLocal_7210[1] = 5;
	(*Local_4913[0])[0] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[0])[0]->f_1 = { 1924.386f, -1287.569f, 41.25f };
	(*Local_4913[0])[1] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[0])[1]->f_1 = { 1934.887f, -1282.643f, 41.25f };
	(*Local_4913[0])[2] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[0])[2]->f_1 = { 1934.175f, -1288.681f, 41.25f };
	(*Local_4913[0])[3] = "ent_amb_generic_fire_field";
	(*Local_4913[0])[3]->f_1 = { 1943.7f, -1290.295f, 41.25f };
	iLocal_7210[0] = 4;
	(*Local_4913[2])[0] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[0]->f_1 = { 1883.25f, -1240.5f, 41.25f };
	(*Local_4913[2])[1] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[1]->f_1 = { 1884.1f, -1239.539f, 41.25f };
	(*Local_4913[2])[2] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[2]->f_1 = { 1889.946f, -1225.296f, 41.25f };
	(*Local_4913[2])[3] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[3]->f_1 = { 1899.524f, -1227.511f, 41.25f };
	(*Local_4913[2])[4] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[4]->f_1 = { 1896.586f, -1233.633f, 41.25f };
	(*Local_4913[2])[5] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[5]->f_1 = { 1894.156f, -1244.739f, 41.25f };
	(*Local_4913[2])[6] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[6]->f_1 = { 1890.77f, -1242.07f, 41.25f };
	(*Local_4913[2])[7] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[7]->f_1 = { 1902.875f, -1244.947f, 41.25f };
	(*Local_4913[2])[8] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[8]->f_1 = { 1904.97f, -1246.24f, 41.25f };
	(*Local_4913[2])[9] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[9]->f_1 = { 1879.71f, -1212.97f, 42.04f };
	(*Local_4913[2])[10] = "ent_amb_generic_fire_field";
	(*Local_4913[2])[10]->f_1 = { 1872.41f, -1212.49f, 42.06f };
	(*Local_4913[2])[11] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[2])[11]->f_1 = { 1880.6f, -1223.4f, 42.21f };
	iLocal_7210[2] = 12;
	(*Local_4913[3])[0] = "ent_amb_generic_fire_field";
	(*Local_4913[3])[0]->f_1 = { 1929.277f, -1257.978f, 41.25f };
	(*Local_4913[3])[1] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[3])[1]->f_1 = { 1931.329f, -1252.778f, 41.25f };
	(*Local_4913[3])[2] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[3])[2]->f_1 = { 1922.45f, -1247.88f, 41.19f };
	(*Local_4913[3])[3] = "ent_amb_generic_fire_field";
	(*Local_4913[3])[3]->f_1 = { 1937.175f, -1238.535f, 41.25f };
	(*Local_4913[3])[4] = "ent_amb_generic_fire_field";
	(*Local_4913[3])[4]->f_1 = { 1940.458f, -1246.872f, 41.25f };
	(*Local_4913[3])[5] = "ent_amb_generic_fire_field_smoke";
	(*Local_4913[3])[5]->f_1 = { 1934.825f, -1233.654f, 40.8048f };
	(*Local_4913[3])[6] = "ent_amb_generic_fire_field";
	(*Local_4913[3])[6]->f_1 = { 1928.609f, -1230.984f, 40.8149f };
	(*Local_4913[3])[7] = "ent_amb_generic_fire_field";
	(*Local_4913[3])[7]->f_1 = { 1926.991f, -1227.241f, 40.9096f };
	(*Local_4913[3])[8] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[3])[8]->f_1 = { 1920.667f, -1238.667f, 40.891f };
	(*Local_4913[3])[9] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[3])[9]->f_1 = { 1908.395f, -1239.765f, 41.1811f };
	(*Local_4913[3])[10] = "ent_amb_generic_fire_field_nosmoke";
	(*Local_4913[3])[10]->f_1 = { 1910.051f, -1232.456f, 41.2506f };
	(*Local_4913[3])[11] = "scr_brt2_firesmoke_field";
	(*Local_4913[3])[11]->f_1 = { 1909.43f, -1261.56f, 44f };
	iLocal_7210[3] = 12;
}

void func_1318()
{
	if (does_entity_exist(&(Local_14.f_3[0])))
	{
		set_ped_can_be_targetted(&(Local_14.f_3[0]), false);
		func_1833(&(Local_14.f_3[0]), 0);
	}
	if (does_entity_exist(&(Local_14.f_3[1])))
	{
		set_ped_can_be_targetted(&(Local_14.f_3[1]), false);
		func_1833(&(Local_14.f_3[1]), 0);
	}
}

void func_1319(int iParam0)
{
	if (get_clock_hours() < 7)
	{
		if (!func_164(iVar796, 524288))
		{
			if (get_clock_hours() >= iParam0)
			{
				pause_clock(true, 0);
				func_422(&uLocal_799, 524288);
			}
		}
		else if (get_clock_hours() < iParam0)
		{
			pause_clock(false, 0);
			func_1568(&uLocal_799, 524288);
		}
	}
}

void func_1320(var uParam0)
{
	if (!func_1773(uParam0) && func_1289())
	{
		switch (iVar7408)
		{
			case 0:
				break;
			case 11:
				if (!func_163(&(Local_14.f_8[3]), 0))
				{
					if (func_903(&uLocal_245) > 30f)
					{
						if (func_1834())
						{
							func_1265(uParam0);
						}
					}
				}
				else
				{
					func_223(&uLocal_245);
				}
				break;
			case 12:
				if (does_entity_exist(iVar783))
				{
					if (func_1268(Global_35, get_entity_coords(iVar783, true, false), 1) > 20f || func_903(&uLocal_245) > 20f)
					{
						func_1265(uParam0);
					}
				}
				break;
		}
	}
}

void func_1321(var uParam0)
{
	if (!func_1835() && func_824(Global_35, 1, 0, 0) == -1361787316)
	{
		if ((is_ped_shooting(Global_35) && (((((((func_1271(Global_35, &(uLocal_4889[0]), 1, 0) && &iLocal_788[0] == 0) || (func_1271(Global_35, &(uLocal_4889[1]), 1, 0) && &iLocal_788[1] == 0)) || (func_1271(Global_35, &(uLocal_4889[2]), 1, 0) && &iLocal_788[2] == 0)) || (func_1271(Global_35, &(uLocal_4889[3]), 1, 0) && &iLocal_788[3] == 0)) || (func_1271(Global_35, &(uLocal_4889[4]), 1, 0) && &iLocal_788[4] == 0)) || (func_1271(Global_35, &(uLocal_4889[5]), 1, 0) && &iLocal_788[5] == 0)) || (func_1271(Global_35, &(uLocal_4889[6]), 1, 0) && &iLocal_788[6] == 0))) && (iVar718 == 0 || func_1268(Global_35, *(vLocal_270[(iVar718 - 1)]), 0) > 0.5f))
		{
			if (iVar718 < (iVar267 - 1))
			{
				*vLocal_270[iVar718] = { get_entity_coords(player_ped_id(), true, false) };
			}
			else
			{
				iLocal_721 = 0;
				func_1245(uParam0, "BRT2_FAIL_NOSHNE", "", 1, 0);
			}
			iLocal_721 = iVar718 + 1;
		}
	}
	if (is_ped_shooting(Global_35) && func_824(Global_35, 1, 0, 0) == -1361787316)
	{
		fLocal_7400 = func_1602(fVar7397, fVar7396, (get_frame_time() * fVar7398));
	}
	else
	{
		fLocal_7400 = fVar7395;
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (&iLocal_788[iVar0] == 0)
		{
			if (func_1835())
			{
				if (func_472(Local_856[iVar0]))
				{
					func_1836(fVar7397, Local_856[iVar0]);
					if (fVar7397 > 0f)
					{
						func_1837(Global_35, Local_856[iVar0]);
					}
					if (func_1838(iVar0))
					{
						iLocal_788[iVar0] = 1;
						iLocal_231 = 1;
						func_223(&uLocal_239);
						func_473(Local_856[iVar0]);
					}
				}
			}
			else if (func_1839(iVar0) > iLocal_230)
			{
				func_169(iLocal_770[iVar0]);
				iLocal_788[iVar0] = 1;
				iLocal_231 = 1;
				func_223(&uLocal_239);
			}
		}
		iVar0++;
	}
}

void func_1322(var uParam0)
{
	if (func_1256(uParam0) > 7)
	{
		if (!has_ped_got_weapon(Global_35, -1361787316, 0, true) && !bLocal_221)
		{
			if (!does_blip_exist(iVar776))
			{
				if (!does_entity_exist(iVar783))
				{
					func_1604(&uVar0, 16384);
					func_1604(&uVar0, 8);
					func_1604(&uVar0, 2);
					iLocal_786 = get_closest_object_of_type(Global_36, 2f, -2359651, true, false, true);
					if (does_entity_exist(iVar783))
					{
						iLocal_779 = _blip_add_for_entity(408396114, iVar783);
						set_blip_name_from_text_file(iVar776, "BRT2_MNSH");
						func_170(&iLocal_770);
						func_1259(uParam0, 12);
					}
				}
				else
				{
					iLocal_779 = _blip_add_for_entity(408396114, iVar783);
					set_blip_name_from_text_file(iVar776, "BRT2_MNSH");
					func_170(&iLocal_770);
					func_1259(uParam0, 12);
				}
			}
		}
		else if (has_ped_got_weapon(Global_35, -1361787316, 0, true))
		{
			if (bLocal_221)
			{
				if (does_blip_exist(iVar776))
				{
					remove_blip(&iLocal_779);
				}
			}
			else if (iVar7408 == 12 || iVar7408 == 9)
			{
				if (does_blip_exist(iVar776))
				{
					remove_blip(&iLocal_779);
				}
				iLocal_786 = 0;
				func_1840();
				func_1259(uParam0, 11);
				func_1265(uParam0);
			}
		}
	}
	else if (func_1256(uParam0) <= 7)
	{
		if (!has_ped_got_weapon(Global_35, -1361787316, 0, true))
		{
			if (!does_entity_exist(iVar783))
			{
				func_1604(&uVar1, 16384);
				func_1604(&uVar1, 8);
				func_1604(&uVar1, 2);
				iLocal_786 = get_closest_object_of_type(Global_36, 2f, -2359651, true, false, true);
			}
		}
		else
		{
			iLocal_786 = 0;
		}
	}
	if (does_entity_exist(iVar783) && (((func_1781(iVar783, &(uLocal_850[0]), 0, 1) || func_1781(iVar783, &(uLocal_850[1]), 0, 1)) || func_1781(iVar783, &(uLocal_850[2]), 0, 1)) || func_1781(iVar783, &(uLocal_850[3]), 0, 1)))
	{
		apply_force_to_entity(iVar783, 1, func_1841(iVar783, Global_35, 1065353216) * Vector(0.5f, 0.5f, 0.5f), 0f, 0f, 0f, 0, false, false, true, false, true);
	}
}

void func_1323(var uParam0)
{
	if (!func_1338())
	{
		if (func_824(Global_35, 1, 0, 0) == -1361787316 && get_ammo_in_ped_weapon(Global_35, -1) == 0)
		{
			func_1245(uParam0, "BRT2_FAIL_NOSHNE", "", 1, 0);
		}
	}
}

void func_1324()
{
	if (func_824(Global_35, 1, 0, 0) == -1361787316)
	{
		disable_control_action(0, -562475458, false);
		disable_control_action(0, -349518703, false);
	}
}

void func_1325(var uParam0)
{
	func_1842(&(Local_14.f_8), &iLocal_737);
	func_1843();
	func_1844();
	func_1845();
	func_1846();
	func_1847();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1848(uParam0, Local_14.f_8[iVar0], Local_103[iVar0], iVar0);
		iVar0++;
	}
}

void func_1326(var uParam0)
{
	if (does_entity_exist(&(Local_14.f_38[0])) && is_vehicle_driveable(&(Local_14.f_38[0]), false, false))
	{
		switch (iLocal_101)
		{
			case 0:
				set_ped_into_vehicle(&(Local_14.f_8[6]), &(Local_14.f_38[0]), -1);
				set_ped_into_vehicle(&(Local_14.f_8[7]), &(Local_14.f_38[0]), 0);
				iLocal_101 = 1;
				break;
			case 1:
				if (is_ped_in_vehicle(&(Local_14.f_8[6]), &(Local_14.f_38[0]), false) && is_ped_in_vehicle(&(Local_14.f_8[7]), &(Local_14.f_38[0]), false))
				{
					if (iLocal_218 == 2)
					{
						func_1849();
						iLocal_101 = 2;
					}
				}
				break;
			case 2:
				if (func_1814(&(Local_14.f_8[6]), 1908.083f, -1316.326f, 41.9003f, 10f, 1, 1) && !func_180(1))
				{
					if (!func_163(&(Local_14.f_8[3]), 0))
					{
						func_1850();
						func_223(&uLocal_245);
						iLocal_101 = 3;
					}
					else if (&Local_103[3] != 1)
					{
						func_1851();
						func_223(&uLocal_245);
						iLocal_101 = 4;
					}
					else
					{
						iLocal_101 = 5;
					}
				}
				else if (!func_163(&(Local_14.f_8[6]), 0) || !func_163(&(Local_14.f_8[7]), 0))
				{
					func_223(&uLocal_245);
					func_1852();
					iLocal_101 = 3;
				}
				break;
			case 4:
				if ((func_1779(&uLocal_245) > 5f || func_894(&(Local_14.f_8[6]), bVar782, 1, 1) < 7.5f) || func_894(&(Local_14.f_8[7]), bVar782, 1, 1) < 7.5f)
				{
					func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
				}
				break;
			case 3:
				if (func_1779(&uLocal_245) > 3f)
				{
					func_1245(uParam0, "BRT2_FAIL_LOUD", "", 1, 0);
				}
				break;
			case 5:
				if (func_1407("BRT2_GUARDS_P2"))
				{
					iLocal_101 = 6;
				}
				break;
			case 6:
				if (func_1288("BRT2_GUARDS_P2") && get_current_scripted_conversation_line("BRT2_GUARDS_P2") > 5)
				{
					if (func_894(Global_35, bVar782, 1, 1) > 30f)
					{
						stop_scripted_conversation("BRT2_GUARDS_P2", true, false);
					}
					func_1853();
					iLocal_101 = 7;
				}
				if (!func_163(&(Local_14.f_8[3]), 0))
				{
					func_1850();
					func_223(&uLocal_245);
					iLocal_101 = 3;
				}
				break;
			case 7:
				if (!is_ped_in_vehicle(&(Local_14.f_8[6]), &(Local_14.f_38[0]), false))
				{
					task_leave_vehicle(&(Local_14.f_8[7]), &(Local_14.f_38[0]), 0, 0);
					func_1852();
					iLocal_101 = 8;
				}
				break;
			case 8:
				break;
		}
	}
}

void func_1327()
{
	fVar3 = 0f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_163(&(Local_14.f_8[iVar0]), 0))
		{
			fVar2 = func_894(Global_35, &(Local_14.f_8[iVar0]), 1, 1);
			if (fVar2 < fVar3 || fVar3 == 0f)
			{
				fVar3 = fVar2;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar3 > 0f && fVar3 < 25f)
	{
		if (iLocal_233 != iVar1 || bLocal_235 == 0)
		{
			iLocal_233 = iVar1;
			bLocal_235 = true;
			task_look_at_entity(Global_35, &(Local_14.f_8[iLocal_233]), -1, 34866, 41, 0);
		}
	}
	else if (bLocal_235)
	{
		task_clear_look_at(Global_35);
		bLocal_235 = false;
	}
}

void func_1328(var uParam0)
{
	iVar1 = iLocal_218;
	if (func_163(bVar782, 0))
	{
		switch (iLocal_218)
		{
			case 0:
				_set_ped_crouch_movement(bVar782, true, 0, false);
				set_ped_path_can_use_ladders(bVar782, false);
				set_blocking_of_non_temporary_events(bVar782, true);
				remove_ped_defensive_area(bVar782, false);
				iLocal_219 = get_game_timer();
				iLocal_218 = 1;
				break;
			case 1:
				if (!is_entity_in_volume(Global_35, iVar819, true, 0))
				{
					func_1854();
					iLocal_218 = 2;
				}
				break;
			case 2:
				if (func_1288("BRT2_GUARDS_P2") && get_current_scripted_conversation_line("BRT2_GUARDS_P2") > 2)
				{
					func_1855();
					iLocal_218 = 3;
				}
				break;
			case 3:
				if (!func_180(1) && ((func_894(Global_35, bVar782, 1, 1) > 30f && !func_1288("BRT2_GUARDS_P2")) || func_1407("BR2_SEANKILL")))
				{
					func_1856();
					iLocal_218 = 4;
				}
				break;
			case 4:
				if (!func_163(&(Local_14.f_8[3]), 0))
				{
					clear_ped_tasks(bVar782, 1, 0);
					iLocal_219 = get_game_timer();
					iLocal_218 = 5;
				}
				else if (is_entity_at_entity(&(Local_14.f_8[3]), bVar782, 6f, 6f, 6f, false, true, 0))
				{
					if (((is_entity_at_entity(player_ped_id(), bVar782, 6f, 6f, 4f, false, true, 0) || (is_entity_on_screen(bVar782) && func_894(Global_35, bVar782, 1, 1) < 20f)) || (get_game_timer() - iLocal_219) > 10000) || func_1333(0))
					{
						if (get_script_task_status(bVar782, 242628503, true) != 1)
						{
							clear_ped_tasks(bVar782, 1, 0);
							func_1857();
							iLocal_219 = get_game_timer();
							iLocal_218 = 5;
						}
						else
						{
							func_1858();
							iLocal_218 = 5;
							iLocal_219 = get_game_timer();
						}
					}
					else if (get_script_task_status(bVar782, 242628503, true) == 1)
					{
						task_turn_ped_to_face_entity(bVar782, &(Local_14.f_8[3]), 0, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_219 = get_game_timer();
				}
				break;
			case 5:
				if ((_0x3bdfcf25b58b0415(&(Local_14.f_8[3])) || is_ped_being_stealth_killed(&(Local_14.f_8[3]))) && func_1395(bVar782, 242628503))
				{
					clear_ped_tasks(bVar782, 1, 0);
				}
				if (!func_163(&(Local_14.f_8[3]), 0))
				{
					if (get_script_task_status(bVar782, 242628503, true) != 0 && get_script_task_status(bVar782, 242628503, true) != 1)
					{
						if ((is_entity_at_entity(player_ped_id(), bVar782, 6f, 6f, 4f, false, true, 0) || (is_entity_on_screen(bVar782) && func_894(Global_35, bVar782, 1, 1) < 20f)) || func_1333(0))
						{
							func_1859();
							iLocal_219 = get_game_timer();
							iLocal_218 = 6;
						}
					}
				}
				break;
			case 6:
				if ((func_1338() || func_33(uParam0) == 5) && (is_entity_in_angled_area(player_ped_id(), 1881.515f, -1311.046f, 40.90336f, 1840.994f, -1275.594f, 47.63989f, 39.5f, false, true, 0) || iLocal_220 == 1))
				{
					iLocal_220 = 1;
					if (is_sphere_visible(1860.891f, -1297.573f, 42.0833f, 1f) || (get_game_timer() - iLocal_219) > 5000)
					{
						func_1860();
						iLocal_218 = 7;
					}
				}
				else if ((func_1338() || func_33(uParam0) == iLocal_95) && !func_163(&(Local_14.f_8[4]), 0))
				{
					func_1861();
				}
				break;
			case 7:
				if (func_33(uParam0) == iLocal_95)
				{
					if (((((!func_163(&(Local_14.f_8[4]), 11) && get_script_task_status(bVar782, 242628503, true) != 0) && get_script_task_status(bVar782, 242628503, true) != 1) && get_script_task_status(bVar782, 713668775, true) != 0) && get_script_task_status(bVar782, 713668775, true) != 1) && func_894(Global_35, bVar782, 1, 1) < 20f)
					{
						set_current_ped_weapon(bVar782, -1569615261, true, 0, false, false);
						if (does_entity_exist(iVar7244))
						{
							delete_object(&iLocal_7247);
						}
						iLocal_7247 = create_object(-890087611, 1835.7f, -1279.9f, 42.5f, true, true, false, false, true);
						set_entity_invincible(iVar7244, true);
						set_entity_visible(iVar7244, false);
						set_anim_scene_entity(iVar7236, "P_BOTTLE_03X", iVar7244, 0);
						set_anim_scene_entity(iVar7236, "CS_Sean", bVar782, 0);
						if (!func_1266())
						{
							func_1258(uParam0, "BRT2_IG9_POUR", 0);
						}
						task_enter_anim_scene(bVar782, iVar7236, "CS_Sean", "pbl_Action", 2.7f, 1, 0, 20000, -1082130432);
						iLocal_218 = 8;
					}
					else if ((((!func_163(&(Local_14.f_8[4]), 11) || _0x3bdfcf25b58b0415(&(Local_14.f_8[4]))) || is_ped_being_stealth_killed(&(Local_14.f_8[4]))) || is_ped_fatally_injured(&(Local_14.f_8[4]))) && (get_script_task_status(bVar782, 242628503, true) == 0 || get_script_task_status(bVar782, 242628503, true) == 1))
					{
						clear_ped_tasks(bVar782, 0, 0);
					}
				}
				break;
			case 8:
				if (_get_anim_scene_time(iVar7236) > 0.3f && !is_entity_visible(iVar7244))
				{
					set_entity_visible(iVar7244, true);
				}
				if ((_is_anim_scene_finished(iVar7236, false) && get_script_task_status(bVar782, 242628503, true) != 0) && get_script_task_status(bVar782, 242628503, true) != 1)
				{
					set_entity_invincible(iVar7244, false);
					_set_ped_crouch_movement(bVar782, false, 0, false);
					if (does_entity_exist(iVar7244))
					{
						delete_object(&iLocal_7247);
					}
					func_1825(bVar782, 1885857703, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					open_sequence_task(&iVar0);
					task_swap_weapon(false, 1, 0, 0, 0);
					task_turn_ped_to_face_coord(0, 1840.874f, -1278.534f, 43.1783f, 1000);
					task_look_at_entity(false, Global_35, 2000, 0, 51, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(bVar782, iVar0);
					clear_sequence_task(&iVar0);
				}
				break;
			case 9:
				if (!func_1271(Global_35, iVar815, 1, 0) && !func_1271(Global_35, iVar816, 1, 0))
				{
					clear_ped_tasks(bVar782, 1, 0);
					open_sequence_task(&iVar0);
					task_throw_projectile(0, 1833.404f, -1274.887f, 43.5795f);
					task_pause(0, 300);
					close_sequence_task(iVar0);
					task_perform_sequence(bVar782, iVar0);
					clear_sequence_task(&iVar0);
					iLocal_218 = 10;
					bLocal_227 = true;
				}
				break;
			case 10:
				if ((func_1256(uParam0) >= 4 && get_script_task_status(bVar782, 242628503, true) != 1) && get_script_task_status(bVar782, 242628503, true) != 0)
				{
					func_1357();
					func_1358();
					func_1292(1048576);
					_add_ammo_to_ped(bVar782, 1885857703, 10, 752097756);
					set_current_ped_weapon(bVar782, 1885857703, false, 0, false, false);
					set_ped_accuracy(bVar782, 100);
					set_ped_sphere_defensive_area(bVar782, 1852.884f, -1274.718f, 41.8435f, 3f, 0, 0, 0);
					_0x8acc0506743a8a5c(bVar782, -26381796, 1, -1082130432);
					func_223(&uLocal_239);
					task_swap_weapon(bVar782, 1, 1, 0, 1);
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, 1854.054f, -1277.022f, 41.7797f, 2f, -1, 0.25f, 8193, 40000f);
					task_throw_projectile(0, 1877.28f, -1262.2f, 42.7f);
					close_sequence_task(iVar0);
					task_perform_sequence(bVar782, iVar0);
					clear_sequence_task(&iVar0);
					iLocal_219 = get_game_timer();
					iLocal_218 = 11;
				}
				else if (is_entity_in_volume(Global_35, iVar816, true, 0))
				{
					clear_ped_tasks(bVar782, 1, 0);
				}
				break;
			case 11:
				if (!func_180(1048576))
				{
					if (func_163(&(Local_14.f_8[2]), 0))
					{
						if (is_ped_shooting(bVar782) || is_bullet_in_area(get_entity_coords(&(Local_14.f_8[2]), true, false), 3f, true))
						{
							func_1357();
							func_1358();
							func_1292(1048576);
						}
					}
				}
				if (get_script_task_status(bVar782, 242628503, true) != 1 && get_script_task_status(bVar782, 242628503, true) != 0)
				{
					if (func_163(&(Local_14.f_8[2]), 0) || func_163(&(Local_14.f_8[1]), 0))
					{
						if (!func_180(1048576))
						{
							func_1357();
							func_1358();
							func_1292(1048576);
						}
						func_223(&uLocal_236);
						set_current_ped_weapon(bVar782, get_best_ped_weapon(bVar782, false, false), false, 0, false, false);
						set_blocking_of_non_temporary_events(bVar782, true);
						open_sequence_task(&iVar0);
						task_go_to_coord_while_aiming_at_entity(0, 1855.907f, -1273.923f, 41.9283f, &(Local_14.f_8[1]), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						task_shoot_at_entity(0, &(Local_14.f_8[1]), 2000, 0, 1);
						task_combat_ped(0, &(Local_14.f_8[2]), 0, 0);
						if (func_1268(bVar782, 1858.87f, -1275.58f, 42.03f, 1) > 5f)
						{
							task_follow_nav_mesh_to_coord(0, 1858.87f, -1275.58f, 42.03f, 2f, 20000, 0.25f, 0, 40000f);
						}
						task_set_crouch_movement(0, true, 0, false);
						close_sequence_task(iVar0);
						task_perform_sequence(bVar782, iVar0);
						clear_sequence_task(&iVar0);
						iLocal_218 = 12;
					}
					else
					{
						set_ped_accuracy(bVar782, 30);
						iLocal_218 = 13;
					}
				}
				else if ((get_sequence_progress(bVar782) <= 1 && is_entity_in_volume(Global_35, iVar829, true, 0)) && !func_164(iVar796, 33554432))
				{
					func_422(&uLocal_799, 33554432);
					clear_ped_tasks(bVar782, 1, 0);
					open_sequence_task(&iVar0);
					task_swap_weapon(false, 1, 0, 0, 0);
					task_follow_nav_mesh_to_coord(0, 1859.713f, -1279.702f, 42.1517f, 2f, -1, 0.25f, 8193, 40000f);
					task_throw_projectile(0, 1875.25f, -1260.25f, 41.92f);
					close_sequence_task(iVar0);
					task_perform_sequence(bVar782, iVar0);
					clear_sequence_task(&iVar0);
				}
				break;
			case 12:
				if (!func_163(&(Local_14.f_8[2]), 0) && !func_163(&(Local_14.f_8[1]), 0))
				{
					_0x78815fc52832b690(bVar782, 1);
					iLocal_218 = 13;
				}
				else if (get_ped_config_flag(&(Local_14.f_8[2]), 138, true) == 0)
				{
					if (func_903(&uLocal_236) > 7f)
					{
						set_ped_combat_attributes(bVar782, 27, true);
						set_ped_config_flag(&(Local_14.f_8[2]), 138, true);
					}
				}
				break;
			case 13:
				if (get_script_task_status(bVar782, 242628503, true) != 1 && get_script_task_status(bVar782, 242628503, true) != 0)
				{
					if (iLocal_226 <= 2)
					{
						if (iLocal_226 == 0)
						{
							vVar2 = { 1876.251f, -1270.293f, 41.82272f };
						}
						else if (iLocal_226 == 1)
						{
							vVar2 = { 1881.423f, -1266.055f, 41.90521f };
						}
						else
						{
							vVar2 = { 1876.251f, -1270.293f, 41.82272f };
						}
						_add_ammo_to_ped(bVar782, 1885857703, 10, 752097756);
						set_current_ped_weapon(bVar782, 1885857703, false, 0, false, false);
						open_sequence_task(&iVar0);
						if (func_1268(bVar782, 1858.87f, -1275.58f, 42.03f, 1) > 3f)
						{
							task_follow_nav_mesh_to_coord(0, 1858.87f, -1275.58f, 42.03f, 2f, 20000, 0.25f, 0, -90f);
							task_put_ped_directly_into_cover(0, 1858.86f, -1273.48f, 42.03f, 8500, 0, 0, 0, 0, 0, 1, 0, 0);
						}
						if (get_ammo_in_ped_weapon(Global_35, 1885857703) >= 1)
						{
							task_pause(0, 15000);
						}
						task_go_to_coord_while_aiming_at_coord(0, 1857.61f, -1275.442f, 42.0137f, vVar2, 1.5f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 0);
						task_turn_ped_to_face_coord(0, vVar2, 0);
						task_swap_weapon(false, 1, 0, 0, 0);
						task_throw_projectile(0, vVar2);
						task_set_crouch_movement(0, true, 0, false);
						close_sequence_task(iVar0);
						task_perform_sequence(bVar782, iVar0);
						clear_sequence_task(&iVar0);
					}
				}
				break;
		}
	}
	if (iVar1 != iLocal_218)
	{
	}
}

struct<8> func_1329(int iParam0)
{
	if (!func_465(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_1572(iParam0), 64);
	StringConCat(&Var0, "_RETURN", 64);
	return Var0;
}

struct<8> func_1330(int iParam0)
{
	if (!func_465(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_1572(iParam0), 64);
	StringConCat(&Var0, "_ABANDON", 64);
	return Var0;
}

bool func_1331(var uParam0, bool bParam1, var uParam2, var uParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
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
	bVar0 = func_1862(uParam0, get_entity_coords(bParam1, true, false), uParam2, uParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (func_22(uParam0) != 1 && func_8(uParam0, 64))
	{
		if (bParam10)
		{
			func_1863(uParam0, bParam1, iParam9, bVar0, iParam6);
		}
		func_899(uParam0, 64);
	}
	return bVar0;
}

int func_1332(var uParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!_does_volume_exist(bParam1))
	{
		return 0;
	}
	if (!_does_volume_exist(bParam2))
	{
		return 0;
	}
	if (!_0xf256a75210c5c0eb(bParam2, Global_36))
	{
		func_1245(uParam0, sParam4, "", 1, 0);
		return 1;
	}
	else if (!_0xf256a75210c5c0eb(bParam1, Global_36))
	{
		if (!func_1864(uParam0, 16))
		{
			func_1865(uParam0, sParam3, bParam6);
			if (does_blip_exist(uParam0->f_5303))
			{
				remove_blip(&(uParam0->f_5303));
			}
			uParam0->f_5303 = _0xa6ef0c54a3443e70(iParam8, bParam1);
			if (is_itemset_valid(iParam5))
			{
				func_1866(&iParam5, 0);
			}
			func_1867(uParam0, 16);
			func_1868(uParam0, 0, 0);
		}
		return 1;
	}
	else if (func_1864(uParam0, 16))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
			if (is_itemset_valid(iParam5))
			{
				func_1866(&iParam5, 1);
			}
			func_1868(uParam0, 1, 0);
		}
		func_1869(uParam0, 16);
		if (!func_1870(uParam0))
		{
			if (bParam7)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1871(uParam0);
			}
		}
		else
		{
			func_1872(uParam0);
		}
	}
	return 0;
}

bool func_1333(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_entity_in_volume(player_ped_id(), &(uLocal_4889[iVar0]), true, 0))
		{
			if (iParam0 == 0)
			{
				return true;
			}
			if (&iLocal_788[iVar0] == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1334(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	while (iVar0 < 48)
	{
		if (func_979(iVar0, 2))
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
		func_1873(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1335(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_190(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1336(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = func_190(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_1337(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_10(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_190(iParam0);
	func_1335(iParam0, 18, 0, 1);
	func_1335(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1338()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (7 - 1))
	{
		if (&iLocal_788[iVar1] == 0)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1339()
{
	if (((is_any_speech_playing(&(Local_14.f_8[0])) || is_any_speech_playing(&(Local_14.f_8[5]))) || is_any_speech_playing(&(Local_14.f_8[1]))) || is_any_speech_playing(&(Local_14.f_8[2])))
	{
		return true;
	}
	return false;
}

void func_1340()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_163(&(Local_14.f_8[iVar0]), 0) && iVar0 != 4)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { func_226(0, 0) };
					break;
				case 5:
					Var1 = { func_226(0, 4) };
					break;
				case 1:
					Var1 = { func_226(0, 9) };
					break;
				case 2:
					Var1 = { func_226(0, 10) };
					break;
				case 4:
					Var1 = { func_1366(1, 4) };
					break;
				case 6:
					Var1 = { func_226(3, 1) };
					break;
				case 7:
					Var1 = { func_226(3, 2) };
					break;
				case 3:
					Var1 = { func_1366(1, 3) };
					break;
			}
			func_1313(&(Local_14.f_8[iVar0]), Var1, 2, 1073741824);
			if (iVar0 == 3)
			{
				func_1311(&(Local_14.f_8[iVar0]), 1, 0);
			}
			Local_103[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

int func_1341(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1874(iParam3, 1);
	bVar1 = func_1874(iParam3, 2);
	bVar2 = !func_1874(iParam3, 4);
	bVar3 = func_1874(iParam3, 8);
	bVar4 = !func_1874(iParam3, 16);
	bVar5 = func_1874(iParam3, 32);
	bVar6 = func_1874(iParam3, 64);
	return func_1825(bParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_1342(int iParam0)
{
	if (-1829635046 == func_1875(81053684))
	{
		if (func_1876(iParam0))
		{
			return true;
		}
	}
	else if (func_1661(-525676072, iParam0))
	{
		if (func_1876(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_1343(int iParam0, bool bParam1)
{
	if (!func_1877())
	{
		return 0;
	}
	if (!func_1878(iParam0))
	{
		return 0;
	}
	if (func_1879(iParam0))
	{
		iVar0 = 0;
		if (func_607(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_422(&iVar0, 2);
			}
		}
		return func_1880(iParam0, iVar0);
	}
	return 0;
}

void func_1344()
{
	iLocal_770[7] = func_1881(1259054292, &(uLocal_4889[7]), 1);
	set_blip_name_from_text_file(&(iLocal_770[7]), "BRT2_B_SHD");
}

void func_1345(var uParam0)
{
	if (does_entity_exist(bVar7266) && does_entity_exist(bVar7267))
	{
		if (!func_163(bVar7266, 0) || !func_163(bVar7267, 0))
		{
			func_1245(uParam0, "BRT2_FAIL_ESCHR", "", 1, 0);
		}
	}
	else
	{
		iLocal_7269 = _get_ped_in_draft_seat(&(Local_14.f_38[0]), 0);
		iLocal_7270 = _get_ped_in_draft_seat(&(Local_14.f_38[0]), 1);
	}
}

void func_1346(var uParam0)
{
	if (!func_1773(uParam0) && func_1289())
	{
		switch (iVar7408)
		{
			case 0:
				break;
			case 13:
				if (func_1268(Global_35, _0xf70f00013a62f866(&(uLocal_4889[7])), 1) > 20f && iLocal_218 < 8)
				{
					if (func_1268(Global_35, _0xf70f00013a62f866(&(uLocal_4889[7])), 1) >= (fVar266 - 0.25f))
					{
						if (func_903(&uLocal_245) > 10f)
						{
							func_1265(uParam0);
						}
					}
					else
					{
						bLocal_269 = func_1268(Global_35, _0xf70f00013a62f866(&(uLocal_4889[7])), 1);
						func_223(&uLocal_245);
					}
				}
				break;
			case 15:
				if (func_903(&uLocal_245) > 20f)
				{
					func_1265(uParam0);
				}
				break;
			case 16:
				break;
		}
	}
}

void func_1347(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if ((_is_anim_scene_started(iVar7238, false) && _0x1f0e401031e20146(iVar7238, "start")) && _get_anim_scene_time(iVar7238) > 39.9f)
	{
		_set_anim_scene_playback_list_bool(iVar7238, "Loop", true);
	}
	if (bParam1 && iVar7433 == 0)
	{
		if (bParam2)
		{
			if (!_is_anim_scene_started(iVar7238, false))
			{
				_set_anim_scene_playback_list_bool(iVar7238, "Loop", true);
				start_anim_scene(iVar7238);
			}
			func_1882(3, 11);
			*Local_7414[iVar7433] = { (*Local_4913[3])[11]->f_1 };
			Local_7414[iVar7433]->f_6 = 80f;
			func_505(&(Local_7414[iVar7433]->f_3), 1f);
			uLocal_7439 = iVar7433 + 1;
			func_1359(1f, 0);
			func_1360(0.5f);
		}
		else
		{
			func_1882(6, 5);
			*Local_7414[iVar7433] = { (*Local_4913[6])[5]->f_1 };
			Local_7414[iVar7433]->f_6 = 10f;
			func_505(&(Local_7414[iVar7433]->f_3), 1f);
			uLocal_7439 = iVar7433 + 1;
			if (!_is_anim_scene_started(iVar7238, false))
			{
				_set_anim_scene_playback_list_bool(iVar7238, "Loop", true);
				start_anim_scene(iVar7238);
			}
			func_1359(0.3f, 0);
			func_1360(0.02f);
		}
	}
	if ((bParam3 && fVar7406 < 1f) && func_1779(&uLocal_251) > 2f)
	{
		func_1359((fVar7406 + 0.05f), 0);
		func_223(&uLocal_251);
	}
	if (!func_180(256) && iVar794 > 0)
	{
		set_ambient_zone_state("AZ_BRAITHWAIT_FIELD_LARGE", true, false);
		func_1292(256);
	}
	func_1883();
	func_1884(uParam0);
}

void func_1348(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_1885(bParam0, iParam3, bParam4) && !func_1886(&bParam0, iParam3))
	{
		if (!func_10(*iParam1))
		{
			if (!func_26(uParam2))
			{
				func_223(uParam2);
			}
			else if (func_903(uParam2) > 3f)
			{
				*iParam1 = func_1334("BRT2_UC_EQPBOT", 1618006066, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_508(0);
				func_558(uParam2);
				if (!func_164(iVar791, 2097152))
				{
					uLocal_7296[5] = func_722("BRT2_H_FIRE", 10000, 0, 0, 0, 1);
					func_422(&uLocal_799, 2097152);
				}
			}
		}
		else if (func_1887(*iParam1, 1))
		{
			func_11(iParam1, 1, 1);
			func_113(1);
			if (bParam5 && func_1083(Global_35, 0, 1, 0) == -1361787316)
			{
				_0xcef4c65de502d367(bParam0, 0, 0, 1, 0);
			}
			set_current_ped_weapon(bParam0, iParam3, false, 0, false, false);
			task_swap_weapon(bParam0, 1, 0, 0, 0);
		}
		else
		{
			_0x2804658eb7d8a50b(5, 970849028);
			func_1888();
		}
	}
	else if (func_1886(&bParam0, iParam3))
	{
		if (func_10(*iParam1))
		{
			func_11(iParam1, 1, 1);
		}
		if (func_26(uParam2))
		{
			func_558(uParam2);
		}
	}
}

void func_1349(var uParam0)
{
	if (func_163(&(Local_14.f_8[2]), 0))
	{
		if (!func_26(&uLocal_7453))
		{
			func_145(uParam0, &(Local_14.f_8[2]), "BRT2_GoonA", 0);
			func_505(&uLocal_7453, 5f);
		}
		if (func_903(&uLocal_7453) > 5f && !func_1266())
		{
			if (func_1361(uParam0, "BRT2_GOONGUN_A", 1, 0, 0))
			{
				func_223(&uLocal_7453);
			}
		}
	}
	else if (func_163(&(Local_14.f_8[1]), 0))
	{
		if (!func_26(&uLocal_7453))
		{
			func_145(uParam0, &(Local_14.f_8[1]), "BRT2_GoonD", 0);
			func_505(&uLocal_7453, 5f);
		}
		if (func_903(&uLocal_7453) > 5f && !func_1266())
		{
			if (func_1361(uParam0, "BRT2_GOONGUN_D", 1, 0, 0))
			{
				func_223(&uLocal_7453);
			}
		}
	}
}

bool func_1350()
{
	if (_is_anim_scene_started(iVar7242, false))
	{
		return true;
	}
	return false;
}

void func_1351()
{
	func_170(&iLocal_770);
	iLocal_770[0] = func_1881(1259054292, &(uLocal_4889[7]), 1);
	set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_SHD");
}

bool func_1352()
{
	vVar0 = { 0f, 0f, 0f };
	fVar3 = 0f;
	get_closest_fire_pos(&vVar0, 1834.4f, -1275.44f, 42.35f);
	fVar3 = get_distance_between_coords(vVar0, 1834.4f, -1275.44f, 42.35f, false);
	if (fVar3 < 7.5f)
	{
		return true;
	}
	if (_is_explosion_in_volume(2, &(uLocal_4889[7])) || _is_explosion_in_volume(25, &(uLocal_4889[7])))
	{
		return true;
	}
	return false;
}

void func_1353(char* sParam0, bool bParam1, bool bParam2)
{
	func_1889(sParam0, bParam1, bParam2);
}

void func_1354()
{
	func_170(&iLocal_770);
	iLocal_770[0] = func_1881(1259054292, uVar4901, 1);
	set_blip_name_from_text_file(&(iLocal_770[0]), "BRT2_B_FLD");
}

void func_1355()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((iVar0 != 2 && iVar0 != 1) && iVar0 != 4)
		{
			func_1831(Local_14.f_8[iVar0], 0);
		}
		else if (func_163(&(Local_14.f_8[iVar0]), 0))
		{
			if (func_824(&(Local_14.f_8[iVar0]), 1, 0, 0) == -164645981)
			{
				_0xcef4c65de502d367(&(Local_14.f_8[iVar0]), 0, 0, 1, 0);
			}
			else if (func_824(&(Local_14.f_8[iVar0]), 1, 1, 0) == -164645981)
			{
				_0xcef4c65de502d367(&(Local_14.f_8[iVar0]), 0, 1, 1, 0);
			}
			_set_blip_flash_style(&(iLocal_737[iVar0]), -128070310);
			_set_blip_flash_style(&(iLocal_737[iVar0]), -662251075);
			_blip_set_modifier(&(iLocal_737[iVar0]), -1034486097);
		}
		iVar0++;
	}
}

bool func_1356()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 7)
		{
			if (_is_explosion_in_volume(2, &(uLocal_4889[iVar0])) || _is_explosion_in_volume(25, &(uLocal_4889[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (_is_explosion_in_volume(2, iVar4901) || _is_explosion_in_volume(25, iVar4901))
	{
		return true;
	}
	return false;
}

void func_1357()
{
	if (func_163(&(Local_14.f_8[2]), 0))
	{
		func_1890(&(Local_14.f_8[2]), 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
		set_ped_target_loss_response(&(Local_14.f_8[2]), 1);
		set_ped_sphere_defensive_area(&(Local_14.f_8[2]), func_391(0, 12), 3f, 0, 0, 0);
		set_ped_combat_attributes(&(Local_14.f_8[2]), 0, false);
		register_target(&(Local_14.f_8[2]), iVar783, 1);
		set_ped_accuracy(&(Local_14.f_8[2]), 20);
		func_1300(&(Local_14.f_8[2]), 1);
		func_169(iLocal_737[2]);
		iLocal_737[2] = _blip_add_for_entity(831283580, &(Local_14.f_8[2]));
		_blip_set_modifier(&(iLocal_737[2]), -1034486097);
		set_current_ped_weapon(&(Local_14.f_8[2]), get_best_ped_weapon(&(Local_14.f_8[2]), false, false), false, 0, false, false);
		open_sequence_task(&iVar0);
		task_clear_look_at(0);
		task_pause(0, 1000);
		task_look_at_coord(0, 1840.05f, -1274.52f, 44.23f, 1000, 0, 51, 0);
		task_shoot_at_entity(0, iVar783, 2000, 0, 0);
		task_combat_ped(0, iVar783, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_8[2]), iVar0);
		clear_sequence_task(&iVar0);
	}
}

void func_1358()
{
	if (func_163(&(Local_14.f_8[1]), 0))
	{
		func_442(&(Local_14.f_8[1]), 1892.764f, -1234.215f, 41.4396f, 0f, 2, 1073741824);
		func_1890(&(Local_14.f_8[1]), 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
		set_ped_target_loss_response(&(Local_14.f_8[1]), 1);
		set_ped_combat_attributes(&(Local_14.f_8[1]), 0, false);
		set_ped_accuracy(&(Local_14.f_8[1]), 20);
		func_1300(&(Local_14.f_8[1]), 1);
		register_target(&(Local_14.f_8[1]), iVar783, 1);
		func_169(iLocal_737[1]);
		iLocal_737[1] = _blip_add_for_entity(831283580, &(Local_14.f_8[1]));
		_blip_set_modifier(&(iLocal_737[1]), -1034486097);
		set_current_ped_weapon(&(Local_14.f_8[1]), get_best_ped_weapon(&(Local_14.f_8[1]), false, false), false, 0, false, false);
		func_1300(&(Local_14.f_8[1]), 1);
		open_sequence_task(&iVar0);
		task_pause(0, 2000);
		task_swap_weapon(false, 1, 0, 0, 0);
		task_follow_nav_mesh_to_coord(0, 1868.409f, -1250.513f, 41.6368f, 3f, 20000, 0.25f, 8193, 40000f);
		task_combat_ped(0, iVar783, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_8[1]), iVar0);
		clear_sequence_task(&iVar0);
	}
}

void func_1359(float fParam0, bool bParam1)
{
	if (bParam1 == 0 || (bParam1 && fVar7408 < fParam0))
	{
		fLocal_7412 = fParam0;
	}
}

void func_1360(float fParam0)
{
	fLocal_7413 = fParam0;
}

bool func_1361(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1266() || func_216())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_217())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1891(sParam1))
	{
		func_558(&(uParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(uParam0->f_13106), 0);
	}
	if ((func_1892(&(uParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1258(uParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1258(uParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_558(&(uParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1258(uParam0, sParam1, 0);
						}
						else if (!func_1258(uParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(uParam0->f_13106)) && func_1258(uParam0, sParam1, 0))
						{
							func_27(&(uParam0->f_13106), 0);
							return false;
						}
						if (func_26(&(uParam0->f_13106)))
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
					func_1258(uParam0, sParam1, 0);
				}
				else if (!func_1258(uParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1790(uParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1790(uParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_722(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_722(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1893(sParam1, 0, 0, 1);
				break;
		}
		func_558(&(uParam0->f_13106));
		return true;
	}
	return false;
}

int func_1362(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_1))
	{
		Local_14.f_1 = { func_425() };
	}
	if (func_1826(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = func_1401(iLocal_89, 1862.098f, -1301.098f, 42.8321f, 303.6609f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[0]), "Horse1");
		func_1827(Local_14.f_1, &(Local_14.f_3[0]));
		func_1828(&(Local_14.f_3[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[0]), true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = func_1401(iLocal_89, 1860.384f, -1297.949f, 43.0017f, 278.6545f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[1]), "Horse2");
		func_1827(Local_14.f_1, &(Local_14.f_3[1]));
		func_1828(&(Local_14.f_3[1]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[1]), true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1829(&(Local_14.f_1), 1);
	return 1;
}

void func_1363(int iParam0)
{
	if (func_163(&(Local_14.f_3[iParam0]), 0))
	{
		set_animal_tuning_bool_param(&(Local_14.f_3[iParam0]), 48, true);
		_0x9587913b9e772d29(&(Local_14.f_3[iParam0]), 0);
		_0x06aade17334f7a40(&(Local_14.f_3[iParam0]), get_offset_from_entity_in_world_coords(&(Local_14.f_3[iParam0]), 0f, 2.5f, 0f));
		set_entity_only_damaged_by_player(&(Local_14.f_3[iParam0]), true);
		set_ped_config_flag(&(Local_14.f_3[iParam0]), 136, true);
		set_ped_config_flag(&(Local_14.f_3[iParam0]), 277, true);
		_0xd05ad61f242c626b(&(Local_14.f_3[iParam0]), 0f);
	}
}

int func_1364(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (!func_443(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_1894((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_1365(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

struct<4> func_1366(int iParam0, int iParam1)
{
	return func_1895(iParam0, iParam1);
}

void func_1367(int iParam0)
{
	iLocal_216 = iParam0;
	iLocal_217 = get_game_timer();
}

void func_1368(var uParam0)
{
	if (!func_1773(uParam0) && func_1289())
	{
		switch (iVar7408)
		{
			case 0:
				break;
			case 17:
				break;
			case 18:
				if (func_894(bVar782, Global_35, 1, 1) > 20f && func_903(&uLocal_245) > 10f)
				{
					func_1265(uParam0);
				}
				break;
		}
	}
}

void func_1369(var uParam0)
{
	if (func_163(bVar782, 0))
	{
		switch (iLocal_216)
		{
			case 0:
				break;
			case 1:
				if ((get_game_timer() - iLocal_217) > 2000)
				{
					func_1896(1842.218f, -1295.227f, 41.6039f, 1807.612f, -1315.908f, 43.7298f, 0);
					func_1367(2);
				}
				break;
			case 2:
				break;
			case 3:
				if (_0x078076ab50fb117f(bVar782, get_entity_coords(bVar782, true, false), 8f, 1))
				{
					func_1896(1853.938f, -1292.712f, 41.696f, 1887.007f, -1253.547f, 42.038f, 1);
				}
				else
				{
					func_1897(1853.938f, -1292.712f, 41.696f, 1887.007f, -1253.547f, 42.038f, 1);
				}
				_0x437c08db4febe2bd(bVar782, "Searching", 1f, -1);
				func_1367(4);
				break;
			case 4:
				break;
			case 5:
				clear_ped_tasks(bVar782, 1, 0);
				func_1896(1853.294f, -1274.448f, 41.8391f, 1862.133f, -1251.999f, 43.3392f, 0);
				if (func_163(&(Local_14.f_33[0]), 3))
				{
					_0xfd6943b6df77e449(&(Local_14.f_33[0]), false);
				}
				if (func_163(&(Local_14.f_33[1]), 3))
				{
					_0xfd6943b6df77e449(&(Local_14.f_33[1]), false);
				}
				func_1367(6);
				break;
			case 6:
				break;
			case 7:
				if (func_1898(uParam0))
				{
					if ((is_entity_on_screen(bVar782) || (get_game_timer() - iLocal_217) > 1000) || func_1268(Global_35, 1866.192f, -1249.586f, 41.7923f, 1) < func_1268(bVar782, 1866.192f, -1249.586f, 41.7923f, 1))
					{
						func_1896(1866.192f, -1249.586f, 41.7923f, 1892.115f, -1255.52f, 42.6714f, 0);
						func_223(&uLocal_7456);
						func_1367(8);
					}
				}
				break;
			case 8:
				if ((!func_1271(Global_35, iVar814, 1, 0) && func_903(&uLocal_7456) > 6f) && !func_1266())
				{
					if (func_894(Global_35, bVar782, 1, 1) >= 15f)
					{
						func_1361(uParam0, "BR2_STANDLEAVEA", 1, 0, 0);
					}
					func_223(&uLocal_7456);
				}
				if (((&iLocal_7326[5] >= 2 && !func_163(&(Local_14.f_59[0]), 3)) && !func_163(&(Local_14.f_59[1]), 3)) && (func_1268(Global_35, 1887.865f, -1251.905f, 41.0865f, 1) < (func_1268(bVar782, 1887.865f, -1251.905f, 41.0865f, 1) - 2f) || (!func_1266() && func_1361(uParam0, "BRT2_THISWAY1", 1, 0.1f, 0))))
				{
					func_223(&uLocal_7456);
					func_1899();
					func_1896(1887.865f, -1251.905f, 41.0865f, 1906.723f, -1260.061f, 42.081f, 1);
					func_1367(9);
				}
				break;
			case 9:
				if ((!func_1271(Global_35, iVar814, 1, 0) && func_903(&uLocal_7456) > 6f) && !func_1266())
				{
					if (func_894(Global_35, bVar782, 1, 1) < 15f)
					{
						func_1361(uParam0, "BRT2_SN_GO", 1, 0, 0);
					}
					else
					{
						func_1361(uParam0, "BR2_STANDLEAVEB", 1, 0, 0);
					}
					func_223(&uLocal_7456);
				}
				if (&iLocal_7326[5] >= 4)
				{
					if (!func_1266() && func_903(&uLocal_7456) > 4f)
					{
						func_1361(uParam0, "BRT2_THISWAY2", 1, 0, 0);
					}
					func_223(&uLocal_7456);
					func_1899();
					func_1896(1904.069f, -1258.027f, 40.7142f, 1919.155f, -1260.654f, 42.413f, 1);
					func_1367(12);
				}
				break;
			case 12:
				if ((!func_1271(Global_35, iVar814, 1, 0) && func_903(&uLocal_7456) > 6f) && !func_1266())
				{
					if (func_894(Global_35, bVar782, 1, 1) < 15f)
					{
						func_1361(uParam0, "BRT2_SN_GO", 1, 0, 0);
					}
					else
					{
						func_1361(uParam0, "BR2_STANDLEAVEA", 1, 0, 0);
					}
					func_223(&uLocal_7456);
				}
				if (&iLocal_7326[6] >= 4)
				{
					if (func_1268(Global_35, 1909.775f, -1258.484f, 40.7106f, 1) < (func_1268(bVar782, 1909.775f, -1258.484f, 40.7106f, 1) - 2f) || (!func_1266() && func_1779(&uLocal_7456) > 3f))
					{
						func_1361(uParam0, "BRT2_THISWAY1", 1, 1f, 0);
					}
					func_223(&uLocal_7456);
					func_1899();
					func_1896(1909.775f, -1258.484f, 40.7106f, 1915.045f, -1226.35f, 42.1016f, 0);
					func_1367(13);
				}
				break;
			case 13:
				if ((func_1271(Global_35, iVar814, 1, 0) && func_903(&uLocal_7456) > 6f) && !func_1266())
				{
					if (func_894(Global_35, bVar782, 1, 1) < 10f)
					{
						func_1361(uParam0, "BRT2_SN_GO", 1, 0, 0);
					}
					else
					{
						func_1361(uParam0, "BR2_STANDLEAVEB", 1, 0, 0);
					}
					func_223(&uLocal_7456);
				}
				if (&iLocal_7326[7] >= 4)
				{
					if (func_1271(Global_35, iVar814, 1, 0) || func_1900(Global_35, 1946.143f, -1221.82f, 40.8913f, 1) < func_1900(bVar782, 1946.143f, -1221.82f, 40.8913f, 1))
					{
						if (!func_1266() && func_1779(&uLocal_7456) > 4f)
						{
							func_1361(uParam0, "BRT2_THISWAY2", 1, 1f, 0);
						}
						_0x437c08db4febe2bd(bVar782, "Searching", 0f, -1);
						func_223(&uLocal_7456);
						func_1899();
						func_1901();
						func_1367(15);
					}
					else if ((&iLocal_7326[7] >= 4 && get_script_task_status(bVar782, 242628503, true) != 0) && get_script_task_status(bVar782, 242628503, true) != 1)
					{
						open_sequence_task(&iVar0);
						task_put_ped_directly_into_cover(0, 1909.345f, -1258.34f, 40.7033f, -1, 1, 0, 0, 0, 0, 1, 0, 0);
						close_sequence_task(iVar0);
						task_perform_sequence(bVar782, iVar0);
						clear_sequence_task(&iVar0);
					}
				}
				break;
			case 15:
				set_ped_desired_move_blend_ratio(bVar782, 2f);
				break;
		}
	}
}

void func_1370(var uParam0)
{
	func_1368(uParam0);
	switch (func_1256(uParam0))
	{
		case 0:
			func_223(&uLocal_257);
			func_135(uParam0, 1);
			break;
		case 1:
			if (!func_120(uParam0, 4))
			{
				if (func_1258(uParam0, "BRT2_escape2B", 0))
				{
					func_135(uParam0, 2);
				}
			}
			else if (func_1258(uParam0, "BRT2_ESCAPE2B_2", 0))
			{
				func_135(uParam0, 2);
			}
			break;
		case 2:
			func_1259(uParam0, 17);
			if (!func_120(uParam0, 4))
			{
				func_1265(uParam0);
			}
			func_135(uParam0, 3);
			func_223(&uLocal_239);
			func_223(&uLocal_257);
			break;
		case 3:
			if (&iLocal_7326[0] >= 4)
			{
				if ((func_903(&uLocal_239) > 1f && func_903(&uLocal_7460) > 1f) && !func_1266())
				{
					if (func_1258(uParam0, "BR2_MOREMEN", 0))
					{
						func_223(&uLocal_7460);
						func_1367(3);
						func_135(uParam0, 4);
					}
				}
			}
			else
			{
				func_223(&uLocal_239);
			}
			break;
		case 4:
			if (iVar7474 >= 3 && !func_180(4194304))
			{
				if (!func_120(uParam0, 4))
				{
					if (!func_1266() && func_1258(uParam0, "BRT2_HORSEFLEEA", 0))
					{
						func_1292(4194304);
					}
				}
				else if (!func_1266() && func_1258(uParam0, "BRT2_HORSEFLEEB", 0))
				{
					func_1292(4194304);
				}
			}
			if (&iLocal_7326[2] >= 4 && &iLocal_7326[3] >= 4)
			{
				func_223(&uLocal_7460);
				if (!func_120(uParam0, 4))
				{
					if (!func_1266() && func_1258(uParam0, "BRT2_HorseGoneA", 0))
					{
						func_135(uParam0, 5);
					}
				}
				else if (!func_1266() && func_1258(uParam0, "BRT2_HorseGoneB", 0))
				{
					func_135(uParam0, 5);
				}
			}
			break;
		case 5:
			if ((func_1288("BRT2_HorseGoneA") || func_1288("BRT2_HorseGoneB")) || func_1779(&uLocal_7460) > 0.5f)
			{
				func_1259(uParam0, 18);
				func_1902(uParam0, bVar782, 1105014447, 422991367, 1, 1);
				func_135(uParam0, 10);
			}
			break;
		case 10:
			if (&iLocal_7326[4] >= 2)
			{
				if (!func_1266())
				{
					if (func_1258(uParam0, "BRT2_SN_MORE", 0))
					{
						func_223(&uLocal_7460);
						func_135(uParam0, 11);
					}
				}
			}
			else
			{
				func_223(&uLocal_239);
			}
			break;
		case 11:
			if (&iLocal_7326[4] >= 4)
			{
				if ((func_903(&uLocal_239) > 1f && func_903(&uLocal_7460) > 1f) && !func_1266())
				{
					if (func_1258(uParam0, "BRT2_SN_MORE", 0))
					{
						func_223(&uLocal_7460);
						func_135(uParam0, 6);
					}
				}
			}
			else
			{
				func_223(&uLocal_239);
			}
			break;
		case 6:
			if (is_entity_at_entity(bVar782, &(Local_14.f_38[0]), 40f, 40f, 15f, false, true, 0))
			{
				if (func_1258(uParam0, "BRT2_escape2A", 0))
				{
					func_135(uParam0, 7);
				}
			}
			break;
		case 7:
			if (is_entity_at_entity(Global_35, &(Local_14.f_38[0]), 40f, 40f, 15f, false, true, 0))
			{
				func_135(uParam0, 51);
			}
			break;
	}
	func_1903(uParam0);
	func_1904(uParam0);
}

void func_1371()
{
	iVar2 = iVar7475;
	switch (iVar7475)
	{
		case 0:
			if ((get_game_timer() - iVar7473) > iVar7474)
			{
				_0xbae08f00021bffb2(&(Local_14.f_3[get_random_int_in_range(0, 2)]), 0);
				iLocal_7476 = get_random_int_in_range(1000, 7000);
				iLocal_7475 = get_game_timer();
			}
			if (((func_1906(func_1905(2), 3) + func_1906(func_1905(3), 3)) < 2 && &iLocal_7326[2] >= 2) && &iLocal_7326[3] >= 2)
			{
				_0x0348469daa17576c(&(Local_14.f_3[1]));
				open_sequence_task(&iVar0);
				task_follow_waypoint_recording(0, "braithwaites2_horse_flee", 0, 0, -1, 0, 0, -1);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(&(Local_14.f_3[1]), iVar0, 2f, 2f);
				clear_sequence_task(&iVar0);
				iLocal_7475 = get_game_timer();
				iLocal_7477 = 1;
			}
			else if ((is_entity_at_coord(Global_35, 1860.702f, -1298.589f, 41.9196f, 8f, 8f, 8f, false, true, 0) || has_entity_been_damaged_by_entity(&(Local_14.f_3[0]), Global_35, 1, 1)) || has_entity_been_damaged_by_entity(&(Local_14.f_3[1]), Global_35, 1, 1))
			{
				remove_ped_defensive_area(bVar783, false);
				set_ped_sphere_defensive_area(bVar783, 1842.218f, -1295.227f, 41.6039f, 8f, 1, 0, 0);
				set_blocking_of_non_temporary_events(bVar783, true);
				_0x0348469daa17576c(&(Local_14.f_3[1]));
				_0x0348469daa17576c(&(Local_14.f_3[0]));
				clear_ped_tasks(bVar783, 1, 0);
				open_sequence_task(&iVar0);
				task_shoot_at_coord(0, 1809.154f, -1320.418f, 43.9928f, 2000, 0, 1);
				task_follow_nav_mesh_to_coord(0, 1842.218f, -1295.227f, 41.6039f, 2f, 40000, 5f, 1, 40000f);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, 1842.218f, -1295.227f, 41.6039f, 1842.218f, -1295.227f, 41.6039f, 2f, true, 0.5f, 3f, true, 0, 0, -687903391);
				task_combat_hated_targets_in_area(0, 1842.218f, -1295.227f, 41.6039f, 100f, 0, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(bVar783, iVar0);
				clear_sequence_task(&iVar0);
				open_sequence_task(&iVar0);
				task_follow_waypoint_recording(0, "braithwaites2_horse_flee", 0, 0, -1, 0, 0, -1);
				close_sequence_task(iVar0);
				task_perform_sequence(&(Local_14.f_3[1]), iVar0);
				clear_sequence_task(&iVar0);
				open_sequence_task(&iVar1);
				task_follow_waypoint_recording(0, "braithwaites2_horse_flee", 0, 0, -1, 0, 0, -1);
				close_sequence_task(iVar1);
				task_perform_sequence(&(Local_14.f_3[0]), iVar1);
				clear_sequence_task(&iVar1);
				if (is_waypoint_playback_going_on_for_ped(&(Local_14.f_3[1]), 0))
				{
					func_1414(&(Local_14.f_3[1]), 1.75f);
				}
				iLocal_7475 = get_game_timer();
				iLocal_7477 = 3;
			}
			else if (is_entity_dead(&(Local_14.f_3[1])) && is_entity_dead(&(Local_14.f_3[0])))
			{
				func_1896(1842.218f, -1295.227f, 41.6039f, 1866.8f, -1330.06f, 42.7815f, 0);
				iLocal_7477 = 3;
			}
			break;
		case 1:
			if (is_waypoint_playback_going_on_for_ped(&(Local_14.f_3[1]), 0))
			{
				func_1414(&(Local_14.f_3[1]), 1.75f);
			}
			_0x0348469daa17576c(&(Local_14.f_3[0]));
			if (!is_entity_dead(&(Local_14.f_3[0])))
			{
				open_sequence_task(&iVar0);
				task_follow_waypoint_recording(0, "braithwaites2_horse_flee", 0, 0, -1, 0, 0, -1);
				close_sequence_task(iVar0);
				task_perform_sequence(&(Local_14.f_3[0]), iVar0);
				clear_sequence_task(&iVar0);
			}
			iLocal_7475 = get_game_timer();
			iLocal_7477 = 3;
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(&(Local_14.f_3[0]), 0))
			{
				func_1414(&(Local_14.f_3[0]), 1.75f);
			}
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_ped(&(Local_14.f_3[0]), 0))
			{
				func_1414(&(Local_14.f_3[0]), 1.75f);
			}
			break;
	}
	if (iVar2 != iVar7475)
	{
	}
}

void func_1372()
{
	if (!Global_1347477->f_179 && func_1271(Global_35, iVar811, 1, 0))
	{
		Global_1347477->f_179 = 1;
	}
	else if (Global_1347477->f_179 && !func_1271(Global_35, iVar811, 1, 0))
	{
		Global_1347477->f_179 = 0;
	}
}

void func_1373(var uParam0)
{
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar3 = &iLocal_7326[iVar2];
		Var0 = { func_1905(iVar2) };
		switch (&iLocal_7326[iVar2])
		{
			case 0:
				if (func_1907(uParam0, iVar2))
				{
					if (func_1908(iVar2))
					{
						iLocal_7326[iVar2] = 1;
					}
				}
				break;
			case 1:
				if (func_1909(uParam0, iVar2))
				{
					func_1910(uParam0, iVar2);
					func_223(&uLocal_254);
					iLocal_7326[iVar2] = 2;
				}
				break;
			case 2:
				func_1911(iVar2);
				if (func_258(Var0) && func_1906(Var0, 3) == 0)
				{
					iLocal_7326[iVar2] = 4;
				}
				else if (func_1779(&uLocal_254) > &fLocal_7402[iVar2])
				{
					func_1912(Var0, 0);
					iLocal_7326[iVar2] = 3;
				}
				break;
			case 3:
				if (func_258(Var0) && func_1906(Var0, 3) == 0)
				{
					iLocal_7326[iVar2] = 4;
				}
				break;
			case 4:
				break;
		}
		if (iVar3 != &iLocal_7326[iVar2])
		{
		}
		iVar2++;
	}
}

bool func_1374(var uParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(uParam0))
		{
			func_223(uParam0);
		}
		else if (func_1779(uParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && func_1913(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_1914(Global_35)))) && func_1779(uParam0) < (fParam1 - 15f))
		{
			func_505(uParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(uParam0))
	{
		func_558(uParam0);
	}
	return false;
}

void func_1375(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(bParam1) || is_entity_dead(bParam1))
	{
		return;
	}
	func_1915(bParam1, bParam2);
	if (bParam3 && func_452(uParam0, bParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_1916(uParam0, bParam1, 32))
			{
				func_451(uParam0, bParam1, 32);
			}
		}
		else if (func_1916(uParam0, bParam1, 32))
		{
			func_450(uParam0, bParam1, 32);
		}
	}
}

void func_1376()
{
	switch (iVar800)
	{
		case 0:
			if (!func_1917(1798.41f, -1321.33f, 43.99f, 0f, 1f, 0, 1061158912))
			{
				if (func_1779(&uLocal_257) > 1f)
				{
					Var0.f_8 = -1082130432;
					Var0 = { 1798.41f, -1321.33f, 43.99f };
					Var0.f_3 = { Global_36 + Vector(IntToFloat(func_1918(-2, 2, 0)), 0f, 0f) };
					Var0.f_6 = -183018591;
					Var0.f_11 = uVar783;
					Var0.f_12 = 1;
					Var0.f_13 = 1;
					Var0.f_16 = 1;
					Var0.f_15 = 0;
					Var0.f_7 = 10f;
					_fire_single_bullet_ignore_entity_new(&Var0);
					func_223(&uLocal_257);
				}
			}
			else if (func_1779(&uLocal_257) > 2f)
			{
				Var20.f_8 = -1082130432;
				if (func_163(&(Local_14.f_42[2]), 0))
				{
					Var20 = { get_entity_coords(get_current_ped_weapon_entity_index(&(Local_14.f_42[2]), 0), true, false) };
					Var20.f_9 = &Local_14.f_42[2];
					Var20.f_3 = { 1850.783f, -1286.522f, 41.7129f };
					Var20.f_6 = func_824(&(Local_14.f_42[2]), 1, 0, 0);
					Var20.f_11 = uVar783;
					Var20.f_12 = 0;
					Var20.f_13 = 1;
					Var20.f_16 = 1;
					Var20.f_15 = 0;
					Var20.f_7 = 10f;
					_fire_single_bullet_ignore_entity_new(&Var20);
					uLocal_802 = iVar800 + 1;
				}
				else if (func_163(&(Local_14.f_42[0]), 0))
				{
					Var20 = { get_entity_coords(get_current_ped_weapon_entity_index(&(Local_14.f_42[0]), 0), true, false) };
					Var20.f_9 = &Local_14.f_42[0];
					Var20.f_3 = { 1850.783f, -1286.522f, 41.7129f };
					Var20.f_6 = func_824(&(Local_14.f_42[0]), 1, 0, 0);
					Var20.f_11 = uVar783;
					Var20.f_12 = 0;
					Var20.f_13 = 1;
					Var20.f_16 = 1;
					Var20.f_15 = 0;
					Var20.f_7 = 10f;
					_fire_single_bullet_ignore_entity_new(&Var20);
					uLocal_802 = iVar800 + 1;
				}
				func_223(&uLocal_257);
			}
			break;
		case 1:
			if (func_1779(&uLocal_257) > 2f)
			{
				Var40.f_8 = -1082130432;
				if (func_163(&(Local_14.f_42[2]), 0))
				{
					Var40 = { get_entity_coords(get_current_ped_weapon_entity_index(&(Local_14.f_42[2]), 0), true, false) };
					Var40.f_9 = &Local_14.f_42[2];
					Var40.f_3 = { 1840.212f, -1287.567f, 41.6733f };
					Var40.f_6 = func_824(&(Local_14.f_42[2]), 1, 0, 0);
					Var40.f_11 = uVar783;
					Var40.f_12 = 0;
					Var40.f_13 = 1;
					Var40.f_16 = 1;
					Var40.f_15 = 1;
					Var40.f_7 = 10f;
					_fire_single_bullet_ignore_entity_new(&Var40);
				}
				else if (func_163(&(Local_14.f_42[1]), 0))
				{
					Var40 = { get_entity_coords(get_current_ped_weapon_entity_index(&(Local_14.f_42[1]), 0), true, false) };
					Var40.f_9 = &Local_14.f_42[1];
					Var40.f_3 = { 1840.212f, -1287.567f, 41.6733f };
					Var40.f_6 = func_824(&(Local_14.f_42[1]), 1, 0, 0);
					Var40.f_11 = uVar783;
					Var40.f_12 = 0;
					Var40.f_13 = 1;
					Var40.f_16 = 1;
					Var40.f_15 = 1;
					Var40.f_7 = 10f;
					_fire_single_bullet_ignore_entity_new(&Var40);
				}
				uLocal_802 = iVar800 + 1;
			}
			break;
	}
}

bool func_1377()
{
	if (!does_entity_exist(bVar7266))
	{
		iLocal_7268 = func_1401(367739382, 1941.904f, -1215.865f, 41.0452f, 86.1271f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_sphere_defensive_area(bVar7266, 1941.904f, -1215.865f, 41.0452f, 1f, 1, 0, 0);
		set_blocking_of_non_temporary_events(bVar7266, true);
		set_ped_relationship_group_hash(bVar7266, 1269650476);
		register_target(bVar7266, Global_35, 1);
		register_target(bVar7266, iVar783, 1);
		open_sequence_task(&iVar0);
		task_combat_hated_targets_around_ped(0, 35f, 0, 18);
		close_sequence_task(iVar0);
		task_perform_sequence(bVar7266, iVar0);
		clear_sequence_task(&iVar0);
		func_1825(bVar7266, -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_ped_name_debug(bVar7266, "GUARD WAGON");
		return false;
	}
	return true;
}

void func_1378()
{
	if (!bVar796 && func_163(bVar783, 0))
	{
		iLocal_797 = create_group(2);
		set_group_formation(iVar795, 10);
		set_ped_config_flag(bVar783, 279, true);
		set_ped_as_group_leader(bVar783, iVar795, false);
		_0xac22aa6df4d1c1de(get_player_index(), bVar783, -1082130432, -1082130432, 2, 2, 0);
		iLocal_798 = 1;
	}
}

bool func_1379()
{
	if (!does_particle_fx_looped_exist(iVar7218))
	{
		iLocal_7220 = start_particle_fx_looped_at_coord("ent_amb_generic_fire_field_glow", 1888.38f, -1298.95f, 41.96f, 0f, 0f, 0f, 1f, false, false, false, false);
	}
	else
	{
		set_particle_fx_looped_evolution(iVar7218, "strength", fVar7410, false);
		return true;
	}
	return false;
}

void func_1380()
{
	iLocal_7269 = 0;
	iLocal_7270 = 0;
	_0x0751d461f06e41ce(player_id(), 10, 0, 0);
	_0x0751d461f06e41ce(player_id(), 5, 0, 1);
	_0x0751d461f06e41ce(player_id(), 27, 0, 1);
	_0x0751d461f06e41ce(player_id(), 44, 0, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(&(Local_14.f_38[0]), iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (!does_entity_exist(bVar7267))
				{
					iLocal_7269 = iVar1;
					set_ped_name_debug(bVar7267, "DRAFT_HORSE_1");
					if (!is_entity_a_mission_entity(bVar7267))
					{
						set_entity_as_mission_entity(bVar7267, true, false);
					}
					set_blocking_of_non_temporary_events(bVar7267, true);
					set_ped_can_be_targetted(bVar7267, true);
					set_entity_only_damaged_by_player(bVar7267, true);
					_0x06d26a96ca1bca75(bVar7267, 3, 0.25f, 0);
					func_1833(bVar7267, 0);
					set_ped_config_flag(bVar7267, 317, true);
					set_ped_config_flag(bVar7267, 359, true);
					set_ped_config_flag(bVar7267, 315, false);
					set_ped_config_flag(bVar7267, 308, true);
				}
				else
				{
					iLocal_7270 = iVar1;
					set_ped_name_debug(bVar7268, "DRAFT_HORSE_2");
					if (!is_entity_a_mission_entity(bVar7268))
					{
						set_entity_as_mission_entity(bVar7268, true, false);
					}
					set_blocking_of_non_temporary_events(bVar7268, true);
					set_ped_can_be_targetted(bVar7268, true);
					set_entity_only_damaged_by_player(bVar7268, true);
					_0x06d26a96ca1bca75(bVar7268, 3, 0.25f, 0);
					func_1833(bVar7268, 0);
					set_ped_config_flag(bVar7268, 301, false);
					set_ped_config_flag(bVar7268, 317, true);
					set_ped_config_flag(bVar7267, 359, true);
					set_ped_config_flag(bVar7268, 315, false);
					set_ped_config_flag(bVar7268, 297, true);
					set_ped_config_flag(bVar7268, 308, true);
				}
			}
		}
		iVar0++;
	}
}

void func_1381(var uParam0)
{
	func_1919(uParam0);
	waypoint_recording_get_closest_waypoint("braithwaites2_sean_horse_escape", get_entity_coords(bVar782, true, false), &iVar0);
	switch (func_1256(uParam0))
	{
		case 1:
			if (func_1920(uParam0))
			{
				func_1902(uParam0, bVar782, 1105014447, 422991367, 1, 1);
				if (!(is_ped_on_mount(bVar782) && iVar7221 == 6))
				{
					func_1259(uParam0, 23);
					func_1263(8);
					func_1265(uParam0);
				}
				func_135(uParam0, 2);
			}
			else if (iVar7221 == 6 && !func_1309())
			{
				if ((is_ped_on_mount(bVar782) && !is_ped_on_mount(Global_35)) && iVar7482 <= 3)
				{
					func_1921(uParam0);
				}
			}
			else
			{
				func_223(&uLocal_7491);
			}
			break;
		case 2:
			if (!func_1309())
			{
				if ((is_ped_on_mount(Global_35) && is_ped_on_mount(bVar782)) && iVar7221 == 6)
				{
					if (func_1922(uParam0))
					{
						if (get_mount(bVar782) == iVar7266)
						{
							iLocal_7479 = iVar7267;
						}
						else
						{
							iLocal_7479 = iVar7266;
						}
						func_1902(uParam0, bVar782, 1105014447, 422991367, 1, 1);
						if (func_894(Global_35, bVar782, 1, 1) < 35f)
						{
							func_1259(uParam0, 24);
						}
						func_135(uParam0, 3);
					}
				}
				else if (is_ped_on_mount(bVar782) && !is_ped_on_mount(Global_35))
				{
					if (iVar7482 > 3)
					{
						func_1902(uParam0, bVar782, 1105014447, 422991367, 1, 1);
						func_135(uParam0, 3);
					}
					else
					{
						if (func_894(Global_35, bVar782, 1, 1) < 35f && iVar7408 != 24)
						{
							func_1259(uParam0, 24);
							func_1265(uParam0);
						}
						func_1921(uParam0);
					}
				}
			}
			else
			{
				func_223(&uLocal_7491);
			}
			break;
		case 3:
			if (iVar0 > 50 && !func_1266())
			{
				if (func_1258(uParam0, "BR2_MOREMEN", 0))
				{
					func_135(uParam0, 4);
				}
			}
			break;
		case 4:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			if (iVar0 > 130)
			{
				if (func_1258(uParam0, "BR2_GATE", 0))
				{
					func_135(uParam0, 5);
				}
			}
			break;
		case 5:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			if (iVar0 > 165)
			{
				func_1299(bVar782, 1);
				func_135(uParam0, 6);
			}
			break;
		case 6:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			if (iVar0 > 210)
			{
				if (func_1258(uParam0, "BRT2_ESCCHAT", 0))
				{
					func_135(uParam0, -1);
				}
			}
			break;
		case 7:
			set_force_object_this_frame(1569.78f, -1433.09f, 59.95f, 1f);
			if (!func_1407("BRT2_IG7"))
			{
				if (!func_164(iVar796, 67108864))
				{
					func_422(&uLocal_799, 67108864);
					set_gameplay_ped_hint(bVar782, 0f, 0f, 0f, true, 8000, 1000, 2000);
					_0x870708a6e147a9ad(bVar782, "", 10f, 0, 0, 0, 0, 0, 0, -1);
				}
				if (func_506(&uLocal_7488))
				{
					func_134(uParam0, 4);
					func_223(&uLocal_7488);
				}
				set_ped_config_flag(bVar782, 297, true);
				set_ped_config_flag(bVar782, 130, true);
				set_ped_config_flag(bVar782, 315, true);
				set_ped_config_flag(bVar782, 317, true);
				set_ped_config_flag(bVar782, 301, false);
				set_ped_config_flag(bVar782, 359, true);
				set_ped_config_flag(bVar782, 178, true);
				set_ped_config_flag(Global_35, 308, true);
				bLocal_7271 = func_955(bVar782);
				if (_0x3ee1f7a8c32f24e1(get_player_index(), &bLocal_7271, 0, 0))
				{
					if (!func_10(iVar7483))
					{
						iLocal_7486 = func_1334("BRT2_OUT_Y", -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						iLocal_7487 = func_1334("BRT2_OUT_N", 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						func_1408(&iLocal_7486, bVar782);
						func_1408(&iLocal_7487, bVar782);
						func_1335(iVar7483, 14, 1, 1);
						func_1335(iVar7484, 14, 1, 1);
					}
				}
				else if (func_10(iVar7483))
				{
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
				}
				if (func_1409(iVar7483, 1))
				{
					func_1273((*Global_1835011)[20]->f_1, 1);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 8);
				}
				else if (func_1409(iVar7484, 1))
				{
					func_1273((*Global_1835011)[20]->f_1, 0);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 9);
				}
				else if (func_903(&uLocal_7488) > 8f)
				{
					func_1273((*Global_1835011)[20]->f_1, 2);
					func_11(&iLocal_7486, 1, 1);
					func_11(&iLocal_7487, 1, 1);
					func_1410();
					_0xe98d55c5983f2509(bVar782);
					func_135(uParam0, 10);
				}
			}
			break;
		case 8:
			if (func_1258(uParam0, "BRT2_IG7_YES", 0))
			{
				func_135(uParam0, 11);
			}
			break;
		case 9:
			if (func_1258(uParam0, "BRT2_IG7_NO", 0))
			{
				func_135(uParam0, 12);
			}
			break;
		case 10:
			if (func_1258(uParam0, "BRT2_IG7_LATER", 0))
			{
				func_135(uParam0, 51);
			}
			break;
		case 11:
			if (!func_1407("BRT2_IG7"))
			{
				set_ped_config_flag(bVar782, 297, false);
				set_ped_config_flag(bVar782, 130, true);
				set_ped_config_flag(bVar782, 315, true);
				set_ped_config_flag(bVar782, 317, false);
				set_ped_config_flag(bVar782, 301, false);
				set_ped_config_flag(bVar782, 359, false);
				set_ped_config_flag(Global_35, 308, false);
				set_ped_config_flag(bVar782, 178, false);
				func_135(uParam0, 51);
			}
			break;
		case 12:
			if (func_1411(uParam0))
			{
				func_135(uParam0, 51);
			}
			break;
		case 13:
			if (func_1258(uParam0, "BRT2_SEANLEAVE", 0))
			{
				func_135(uParam0, 51);
			}
			break;
	}
}

void func_1382(var uParam0)
{
	if (iVar7408 == 24)
	{
		func_1255(uParam0, func_1254(uParam0), 150f, 175f, 0, 0, 1, 422991367);
	}
	else if (func_1255(uParam0, func_1254(uParam0), 35f, 100f, 0, 0, 1, 422991367))
	{
		if (iVar7220 < 4)
		{
			func_1923();
			func_169(iLocal_770[0]);
			func_169(iLocal_770[1]);
		}
	}
	else if (func_1924() == 0 && iVar7220 < 4)
	{
		if (iVar7220 > 0)
		{
			func_1925(3);
		}
		if (!does_blip_exist(&(iLocal_770[0])) && !func_180(536870912))
		{
			iLocal_770[0] = func_1260(203020899, iVar7266, 1);
		}
		if (!does_blip_exist(&(iLocal_770[1])) && !func_180(268435456))
		{
			iLocal_770[1] = func_1260(203020899, iVar7267, 1);
		}
		switch (iVar7220)
		{
			case 1:
				func_1926(0);
				break;
			case 2:
				func_1926(1);
				break;
			case 3:
				func_1926(2);
				break;
		}
	}
	else if (func_1256(uParam0) > 2 && is_ped_on_mount(iVar782))
	{
		func_1259(uParam0, 24);
		func_1265(uParam0);
	}
}

void func_1383(var uParam0)
{
	iVar0 = iVar7477;
	if (iVar7390 == 0)
	{
		if (is_entity_in_angled_area(player_ped_id(), 1882.864f, -1288.997f, 41.73188f, 1911.056f, -1305.759f, 43.5443f, 147.75f, false, true, 0))
		{
			if (func_1927())
			{
				iLocal_7393 = 1;
				iLocal_7480 = 1;
			}
		}
	}
	if (iVar7391 == 0)
	{
		if (is_entity_in_angled_area(player_ped_id(), 1824.094f, -1333.467f, 45.64007f, 1824.361f, -1292.469f, 40.3577f, 97f, false, true, 0))
		{
			if (func_1928())
			{
				set_ped_config_flag(Local_7346[2]->f_7, 138, true);
				iLocal_7394 = 1;
			}
		}
	}
	switch (iVar7477)
	{
		case 0:
			if (func_1269(uParam0) == 1)
			{
				waypoint_recording_get_closest_waypoint("braithwaites2_sean_horse_escape", get_entity_coords(iVar782, true, false), &iVar1);
				if (iVar1 < 110)
				{
					if (func_1779(&uLocal_7481) >= 3f)
					{
						func_223(&uLocal_7481);
						iLocal_7480 = 1;
					}
				}
				else
				{
					waypoint_playback_stop_aiming_or_shooting(iVar782);
					iLocal_7480 = -1;
				}
			}
			break;
		case 1:
			waypoint_recording_get_closest_waypoint("braithwaites2_sean_horse_escape", get_entity_coords(iVar782, true, false), &iVar1);
			if (!func_163(bVar7481, 0))
			{
				iLocal_7484 = func_1929(iVar1);
			}
			else
			{
				waypoint_playback_start_shooting_at_entity(iVar782, bVar7481, 0, -687903391, -1082130432);
				if (bVar7481 == Local_7346[0]->f_7 || bVar7481 == Local_7346[1]->f_7)
				{
					set_entity_only_damaged_by_player(bVar7481, false);
				}
				func_223(&uLocal_7481);
				iLocal_7480 = 2;
			}
			break;
		case 2:
			if (iVar1 > 118)
			{
				waypoint_playback_stop_aiming_or_shooting(iVar782);
				iLocal_7484 = 0;
				func_223(&uLocal_7481);
				iLocal_7480 = -1;
			}
			else
			{
				waypoint_recording_get_closest_waypoint("braithwaites2_sean_horse_escape", get_entity_coords(iVar782, true, false), &iVar1);
				func_1930(iVar1);
				if (!func_163(bVar7481, 0) || (func_1779(&uLocal_7481) >= 3f && func_1929(iVar1) != bVar7481))
				{
					waypoint_playback_stop_aiming_or_shooting(iVar782);
					iLocal_7484 = 0;
					func_223(&uLocal_7481);
					iLocal_7480 = 1;
				}
			}
			break;
	}
	if (iVar0 != iVar7477)
	{
	}
}

void func_1384()
{
	if (func_163(bVar783, 0))
	{
		if (is_waypoint_playback_going_on_for_ped(bVar783, 0))
		{
			iVar0 = get_ped_waypoint_progress(bVar783);
			waypoint_recording_get_closest_waypoint("braithwaites2_sean_horse_escape", get_entity_coords(Global_35, true, false), &iVar1);
			fVar2 = func_894(Global_35, bVar783, 1, 1);
			if (iVar0 > iVar1 && fVar2 > 10f)
			{
				if (fVar2 < 25f || !is_ped_on_mount(Global_35))
				{
					waypoint_playback_override_speed(bVar783, 1.75f, 0, 0.4f, 0);
				}
				else
				{
					waypoint_playback_override_speed(bVar783, 1.501f, 0, 0.4f, 0);
				}
			}
			else
			{
				waypoint_playback_override_speed(bVar783, 3f, 0, 0.4f, 0);
			}
		}
	}
}

void func_1385(var uParam0)
{
	if (((((does_entity_exist(bVar7476) && !is_ped_on_mount(Global_35)) && (get_script_task_status(bVar7476, 1056466932, true) != 0 && get_script_task_status(bVar7476, 1056466932, true) != 1)) && (get_script_task_status(Global_35, 1868526510, true) != 0 && get_script_task_status(Global_35, 1868526510, true) != 1)) && (func_1256(uParam0) > 3 || func_1256(uParam0) == -1)) && func_894(Global_35, bVar7476, 1, 1) > 3f)
	{
		task_follow_to_offset_of_entity(bVar7476, Global_35, 0f, -3f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
	}
	else if ((does_entity_exist(bVar7476) && func_894(Global_35, bVar7476, 1, 1) <= 3f) && func_1395(bVar7476, 1056466932))
	{
		clear_ped_tasks(bVar7476, 1, 0);
	}
	if (func_1931(Global_35) && func_1932(Global_35))
	{
		if (_0x42688e94e96fd9b4(bVar7476, 3, 0) < 0.8f)
		{
			_0x06d26a96ca1bca75(bVar7476, 3, 1f, 0);
		}
	}
}

void func_1386(var uParam0)
{
	if (!func_180(268435456) && !func_180(536870912))
	{
		if (iVar7221 < 5)
		{
			disable_control_action(0, -822242784, false);
			if (_get_ped_in_draft_seat(&(Local_14.f_38[0]), 0) != bVar7266 && get_mount(iVar782) != bVar7266)
			{
				func_1292(268435456);
				func_169(iLocal_770[1]);
				_0x0751d461f06e41ce(player_id(), 10, 0, 1);
				_0x0751d461f06e41ce(player_id(), 5, 0, 0);
				_0x0751d461f06e41ce(player_id(), 27, 0, 0);
				_0x0751d461f06e41ce(player_id(), 44, 0, 0);
				if (func_1793(&(Local_14.f_38[0]), 0) == bVar7267 || func_1793(&(Local_14.f_38[0]), 1) == bVar7267)
				{
					_0xb36d3ec70963be60(&(Local_14.f_38[0]), bVar7267);
				}
				_set_ped_body_component(bVar7267, -1777566710);
				_update_ped_variation(bVar7267, false, true, true, true, false);
				task_stand_still(bVar7267, -1);
				set_ped_config_flag(bVar7267, 136, true);
				set_blocking_of_non_temporary_events(bVar7267, true);
			}
			else if (_get_ped_in_draft_seat(&(Local_14.f_38[0]), 1) != bVar7267 && get_mount(iVar782) != bVar7267)
			{
				func_1292(536870912);
				func_169(iLocal_770[0]);
				_0x0751d461f06e41ce(player_id(), 10, 0, 1);
				_0x0751d461f06e41ce(player_id(), 5, 0, 0);
				_0x0751d461f06e41ce(player_id(), 27, 0, 0);
				_0x0751d461f06e41ce(player_id(), 44, 0, 0);
				if (func_1793(&(Local_14.f_38[0]), 0) == bVar7266 || func_1793(&(Local_14.f_38[0]), 1) == bVar7266)
				{
					_0xb36d3ec70963be60(&(Local_14.f_38[0]), bVar7266);
				}
				_set_ped_body_component(bVar7266, -1777566710);
				_update_ped_variation(bVar7266, false, true, true, true, false);
				task_stand_still(bVar7266, -1);
				set_ped_config_flag(bVar7266, 136, true);
				set_blocking_of_non_temporary_events(bVar7266, true);
			}
		}
		else if (_get_ped_in_draft_seat(&(Local_14.f_38[0]), 0) != bVar7266 && _get_ped_in_draft_seat(&(Local_14.f_38[0]), 1) != bVar7267)
		{
			if (get_mount(iVar782) != bVar7266)
			{
				func_1292(268435456);
				func_169(iLocal_770[1]);
				_0x0751d461f06e41ce(player_id(), 10, 0, 1);
				_0x0751d461f06e41ce(player_id(), 5, 0, 0);
				_0x0751d461f06e41ce(player_id(), 27, 0, 0);
				_0x0751d461f06e41ce(player_id(), 44, 0, 0);
				if (func_1793(&(Local_14.f_38[0]), 0) == bVar7267 || func_1793(&(Local_14.f_38[0]), 1) == bVar7267)
				{
					_0xb36d3ec70963be60(&(Local_14.f_38[0]), bVar7267);
				}
				_set_ped_body_component(bVar7267, -1777566710);
				_update_ped_variation(bVar7267, false, true, true, true, false);
				task_stand_still(bVar7267, -1);
				set_ped_config_flag(bVar7267, 136, true);
				set_blocking_of_non_temporary_events(bVar7267, true);
			}
			else if (get_mount(iVar782) != bVar7267)
			{
				func_1292(536870912);
				func_169(iLocal_770[0]);
				_0x0751d461f06e41ce(player_id(), 10, 0, 1);
				_0x0751d461f06e41ce(player_id(), 5, 0, 0);
				_0x0751d461f06e41ce(player_id(), 27, 0, 0);
				_0x0751d461f06e41ce(player_id(), 44, 0, 0);
				if (func_1793(&(Local_14.f_38[0]), 0) == bVar7266 || func_1793(&(Local_14.f_38[0]), 1) == bVar7266)
				{
					_0xb36d3ec70963be60(&(Local_14.f_38[0]), bVar7266);
				}
				_set_ped_body_component(bVar7266, -1777566710);
				_update_ped_variation(bVar7266, false, true, true, true, false);
				set_ped_config_flag(bVar7266, 136, true);
				set_blocking_of_non_temporary_events(bVar7266, true);
				task_stand_still(bVar7266, -1);
			}
		}
	}
	else if (func_180(268435456) && !is_ped_on_mount(iVar782))
	{
		set_ped_reset_flag(bVar7267, 12, true);
		set_ped_reset_flag(bVar7267, 317, true);
		set_ped_reset_flag(bVar7267, 308, false);
		set_ped_reset_flag(bVar7267, 310, false);
	}
	else if (func_180(536870912) && !is_ped_on_mount(iVar782))
	{
		set_ped_reset_flag(bVar7266, 12, true);
		set_ped_reset_flag(bVar7266, 317, true);
		set_ped_reset_flag(bVar7266, 308, false);
		set_ped_reset_flag(bVar7266, 310, false);
	}
}

bool func_1387(var uParam0)
{
	switch (iVar7491)
	{
		case 0:
			if (func_1933(uParam0))
			{
				iLocal_7494 = 2;
			}
			break;
		case 1:
			if (get_script_task_status(iVar782, 242628503, true) != 1 && get_script_task_status(iVar782, 242628503, true) != 0)
			{
				func_1934();
				iLocal_7494 = 2;
			}
			else if (is_ped_on_mount(iVar782))
			{
				iLocal_7494 = 2;
			}
			break;
		case 2:
			if (is_ped_on_mount(player_ped_id()) && is_ped_on_mount(iVar782))
			{
				return true;
			}
			else if (!is_ped_on_mount(iVar782))
			{
				if (get_script_task_status(iVar782, 1868526510, true) != 1 && get_script_task_status(iVar782, 1868526510, true) != 0)
				{
					func_1934();
				}
			}
			else if (iVar7482 > 3)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1388()
{
	set_ped_config_flag(iVar783, 252, false);
	open_sequence_task(&iVar0);
	task_clear_look_at(0);
	if (func_1935(iVar783, iVar7268, 0))
	{
		task_go_straight_to_coord(0, 1952.53f, -1224.39f, 40.69f, 2f, 20000, 40000f, 1f, 1);
	}
	else
	{
		task_go_straight_to_coord(0, 1952.43f, -1226.78f, 40.67f, 2f, 20000, 40000f, 1f, 1);
	}
	task_follow_waypoint_recording(0, "braithwaites2_sean_horse_escape", 0, 17416, 347, 0, 1, -1);
	close_sequence_task(iVar0);
	task_perform_sequence(iVar783, iVar0);
	clear_sequence_task(&iVar0);
}

bool func_1389()
{
	switch (iVar7492)
	{
		case 3:
			if ((get_script_task_status(bVar783, 242628503, true) != 0 && get_script_task_status(bVar783, 242628503, true) != 1) || func_1814(bVar783, 1511.314f, -1579.26f, 71.0888f, 10f, 1, 1))
			{
				if (_does_volume_exist(iVar808) && !func_1271(bVar783, iVar808, 1, 0))
				{
					set_current_ped_weapon(bVar783, -1569615261, false, 0, false, false);
					task_swap_weapon(bVar783, 0, 0, 0, 0);
					iLocal_7494 = 5;
				}
				else
				{
					func_1936();
				}
			}
			if (!is_ped_on_mount(bVar783))
			{
				func_1934();
				iLocal_7494 = 6;
			}
			break;
		case 4:
			if (func_1937(bVar783, Global_35, 1) <= 225f)
			{
				func_1936();
				set_ped_min_move_blend_ratio(bVar783, 2f);
				iLocal_7494 = 3;
			}
			break;
		case 5:
			if ((get_script_task_status(bVar783, 716706914, true) != 0 && get_script_task_status(bVar783, 716706914, true) != 1) && func_1268(bVar783, 1511.314f, -1579.26f, 71.0888f, 1) < 15f)
			{
				if ((is_ped_on_mount(Global_35) && func_894(bVar783, Global_35, 1, 1) < 20f) || ((!is_ped_on_mount(Global_35) && func_894(bVar7477, Global_35, 1, 1) < 10f) && func_894(bVar783, Global_35, 1, 1) < 10f))
				{
					return true;
				}
			}
			break;
		case 6:
			if (get_script_task_status(bVar783, 716706914, true) != 0 && get_script_task_status(bVar783, 716706914, true) != 1)
			{
				func_1934();
			}
			if (is_ped_on_mount(bVar783))
			{
				func_1936();
				iLocal_7494 = 3;
			}
			break;
	}
	return false;
}

void func_1390(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_1391(var uParam0)
{
	start_preloaded_conversation("BRT2_IG7");
	if (!is_entity_dead(bVar782))
	{
		set_blocking_of_non_temporary_events(bVar782, true);
		Var0.f_4 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_9 = 1065353216;
		Var0.f_10 = 1065353216;
		Var0.f_14 = 1065353216;
		Var0.f_15 = 1065353216;
		Var0.f_17 = 1040187392;
		Var0.f_18 = 1040187392;
		Var0.f_19 = -1;
		Var0.f_26 = -1082130432;
		func_1938(&Var0);
		Var0.f_1 = "script_story@brt2@ig@ig_7_rideandtalk";
		Var0.f_2 = "horseback_convo_sean";
		Var0.f_23 = 0;
		Var0.f_24 = "BRT2_IG7";
		task_scripted_animation(bVar782, &Var0);
		func_1939(bVar782, Global_35, &Var0, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
		func_1940(&uLocal_7310);
	}
	if (!is_entity_dead(Global_35))
	{
		Var38.f_4 = 1065353216;
		Var38.f_5 = 1065353216;
		Var38.f_9 = 1065353216;
		Var38.f_10 = 1065353216;
		Var38.f_14 = 1065353216;
		Var38.f_15 = 1065353216;
		Var38.f_17 = 1040187392;
		Var38.f_18 = 1040187392;
		Var38.f_19 = -1;
		Var38.f_26 = -1082130432;
		func_1938(&Var38);
		Var38.f_1 = "script_story@brt2@ig@ig_7_rideandtalk";
		Var38.f_2 = "horseback_convo_arthur";
		Var38.f_24 = "BRT2_IG7";
		task_scripted_animation(Global_35, &Var38);
		func_1941(Global_35, bVar782, &Var38, -1082130432, 0, 0, 2.5f, 3f, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	}
	func_1902(uParam0, bVar782, 1105014447, 422991367, 1, 1);
}

void func_1392(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(bParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_1942(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_1393(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(bParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(bParam0, 229, true);
	}
	if (is_ped_a_player(bParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(bParam0))
		{
			_set_ped_crouch_movement(bParam0, false, 0, false);
		}
		func_1942(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(bParam0, 188, true);
		}
	}
}

void func_1394(char* sParam0, bool bParam1)
{
	if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
	{
		_0xb8b207c34285e978(sParam0);
		bVar0[0] = bParam1;
		_0xfeb8646818294c75(sParam0, &bVar0);
	}
}

bool func_1395(bool bParam0, int iParam1)
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

void func_1396(bool bParam0, bool bParam1)
{
	if (is_entity_dead(bParam0))
	{
	}
	_0xaac0ee3b4999abb5(bParam0, false);
	if (is_ped_a_player(bParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(bParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(bParam0, -1);
	if (is_ped_a_player(bParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(bParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(bParam0);
	}
}

void func_1397(bool bParam0, bool bParam1)
{
	if (is_entity_dead(bParam0))
	{
	}
	_0xaac0ee3b4999abb5(bParam0, false);
	_0x9e66708b2b41f14a(bParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(bParam0);
	}
	if (is_ped_a_player(bParam0))
	{
		set_ped_config_flag(bParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(bParam0, player_id(), 6);
	}
}

void func_1398(char* sParam0)
{
	if (_0x927b810e43e99932(sParam0))
	{
		_0x0a5a4f1979abb40e(sParam0);
	}
	_0x798be43c9393632b(sParam0);
}

void func_1399(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_1805(vParam1, 0f, 0f, 0f))
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
	bVar0 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(bParam0, false);
	}
	bVar3 = func_1268(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
		{
			set_ped_max_move_blend_ratio(bVar0, 1.75f);
		}
		if ((func_1943() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(bVar2))
				{
					set_ped_max_move_blend_ratio(bVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(bVar2, 1.75f));
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
		if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
		{
			set_ped_max_move_blend_ratio(bVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(bVar2))
				{
					set_ped_max_move_blend_ratio(bVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(bVar2, 1.25f));
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
		if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
		{
			set_ped_max_move_blend_ratio(bVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(bVar0, 3))
				{
					_0x06d26a96ca1bca75(bVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(bVar2))
				{
					set_ped_max_move_blend_ratio(bVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
						{
							if (_0x33fa048675821da7(bVar0, 3))
							{
								_0x06d26a96ca1bca75(bVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(bVar2, 1f));
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
			if (!is_entity_dead(bVar0) && !func_1944(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1944(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

void func_1400()
{
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (&iLocal_7210[iVar0] - 1))
		{
			if (!does_particle_fx_looped_exist((*Local_4913[iVar0])[iVar1]->f_10))
			{
				(*Local_4913[iVar0])[iVar1]->f_10 = start_particle_fx_looped_at_coord(Local_4913[iVar0][iVar1], (*Local_4913[iVar0])[iVar1]->f_1, (*Local_4913[iVar0])[iVar1]->f_4, (*Local_4913[iVar0])[iVar1]->f_7, false, false, false, false);
				if (are_strings_equal(Local_4913[iVar0][iVar1], "ent_amb_generic_fire_field") || are_strings_equal(Local_4913[iVar0][iVar1], "ent_amb_generic_fire_field_nosmoke"))
				{
					(*Local_4913[iVar0])[iVar1]->f_9 = 1f;
					set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "spread", (*Local_4913[iVar0])[iVar1]->f_9, false);
				}
				set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "strength", 1f, false);
				set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "script", 1f, false);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_1401(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1945(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1402(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(bParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != bParam1)
	{
		_set_ped_on_mount(iParam0, bParam1, iParam3, bParam4);
		set_ped_can_be_targetted(bParam1, bParam2);
	}
	return 1;
}

void func_1403()
{
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (&iLocal_7210[iVar0] - 1))
		{
			if (are_strings_equal(Local_4913[iVar0][iVar1], "ent_amb_generic_fire_field") || are_strings_equal(Local_4913[iVar0][iVar1], "ent_amb_generic_fire_field_nosmoke"))
			{
				(*Local_4913[iVar0])[iVar1]->f_9 = 1f;
				set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "spread", (*Local_4913[iVar0])[iVar1]->f_9, false);
			}
			set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "strength", 1f, false);
			set_particle_fx_looped_evolution((*Local_4913[iVar0])[iVar1]->f_10, "script", 1f, false);
			iVar1++;
		}
		iVar0++;
	}
}

int func_1404(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1879(iParam0))
	{
		return 0;
	}
	if (func_1946(iParam0))
	{
		if (func_1342(&uVar0))
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
	func_1947(iParam0, iVar1);
	func_693(26, 0, 0, 0, 0);
	return 1;
}

bool func_1405(int iParam0)
{
	if (!func_192(iParam0))
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

int func_1406(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_192(iParam0))
	{
		return 1;
	}
	if (func_82(32768))
	{
		return 1;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return 1;
	}
	iVar0 = func_1948(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 1;
	}
	if (!func_195(func_12(iParam0)))
	{
		func_1949(iParam0, 0, 0, -1);
	}
	if (func_1950(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_1951(iVar0, 256);
			}
			if (bParam2)
			{
				func_1951(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_1407(char* sParam0)
{
	return func_1952(sParam0);
}

int func_1408(int iParam0, bool bParam1)
{
	iVar0 = func_190(*iParam0);
	if (does_entity_exist(bParam1))
	{
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(bParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_1409(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_190(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1410()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_1411(var uParam0)
{
	switch (iVar800)
	{
		case 0:
			if (!func_1288("BRT2_IG7_LATER"))
			{
				iLocal_807 = create_camera(26379945, false);
				if (func_1953(Global_35, bVar782, 0.85f) == 3)
				{
					vVar0 = { get_entity_coords(Global_35, true, false) + get_entity_forward_vector(Global_35) * Vector(1.5f, 1.5f, 1.5f) + _0x935a30aa88fb1014(Global_35) + Vector(1f, 0f, 0f) };
				}
				else
				{
					vVar0 = { get_entity_coords(Global_35, true, false) + get_entity_forward_vector(Global_35) * Vector(1.5f, 1.5f, 1.5f) - _0x935a30aa88fb1014(Global_35) + Vector(1f, 0f, 0f) };
				}
				set_cam_params(iVar804, vVar0, 0.4065f, 0f, 21.094f, 41f, 0, 1, 1, 2, 1, 0);
				point_cam_at_entity(iVar804, Global_35, 0f, 0f, 1f, true);
				shake_cam(iVar804, "HAND_SHAKE", 0.2f);
				set_cam_active(iVar804, true);
				render_script_cams(true, false, 3000, true, false, 0);
				set_player_control(player_id(), false, 0, false);
			}
			func_223(&uLocal_239);
			uLocal_803 = iVar800 + 1;
			break;
		case 1:
			if (((!func_1288("BRT2_IG7_NO") && !func_1288("BRT2_IG7_LATER")) && func_903(&uLocal_239) > 3f) && func_1258(uParam0, "BRT2_NO_SEAN", 0))
			{
				iLocal_808 = create_camera(26379945, false);
				set_cam_params(iVar805, 1507.172f, -1586.578f, 73.332f, 0.4065f, 0f, 21.094f, 41f, 0, 1, 1, 2, 1, 0);
				render_script_cams(true, false, 3000, true, false, 0);
				set_player_control(player_id(), false, 0, false);
				set_cam_active(iVar804, false);
				set_cam_active(iVar805, true);
				shake_cam(iVar805, "HAND_SHAKE", 0.2f);
				func_442(bVar782, 1511.199f, -1580.577f, 71.0186f, 97.8866f, 6, 1073741824);
				task_follow_waypoint_recording_at_offset(bVar782, "brt2_outroRideToCamp", -1.5f, 0, 9226, -1, 0);
				func_223(&uLocal_239);
				uLocal_803 = iVar800 + 1;
			}
			break;
		case 2:
			func_1414(bVar782, 3f);
			if (func_894(Global_35, bVar782, 1, 1) > 20f)
			{
				set_cam_active(iVar805, false);
				render_script_cams(false, false, 3000, true, false, 0);
				set_player_control(player_id(), true, 0, false);
				func_223(&uLocal_239);
				return true;
			}
			break;
	}
	return false;
}

void func_1412()
{
	if (func_1405(24))
	{
		func_1406(24, 1, 0);
	}
}

void func_1413(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_1954(iParam2, 1))
			{
				set_entity_invincible(iParam1, true);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, true);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, true);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 1);
			break;
		case 1:
			if (!func_1954(iParam2, 4))
			{
				iVar0 = _create_volume_box(_get_object_offset_from_coords(get_entity_coords(iParam1, true, false), get_entity_heading(iParam1), 0f, (fParam6 * 0.5f), 0f), 0f, 0f, get_entity_heading(iParam1), iParam5, fParam6, 10f);
				_0x2fcd528a397e5c88(iVar0, 1064968);
				_delete_volume(iVar0);
			}
			break;
		case 2:
			if (!func_1954(iParam2, 8))
			{
				if (!is_entity_dead(iParam3))
				{
					if (!func_1935(iParam1, iParam3, 1))
					{
						_set_ped_on_mount(iParam1, iParam3, -1, true);
					}
				}
				else if (!is_entity_dead(iParam4))
				{
					if (!is_ped_on_specific_vehicle(iParam1, iParam4))
					{
						set_ped_into_vehicle(iParam1, iParam4, -1);
					}
				}
			}
			if (!func_1954(iParam2, 16))
			{
				if (is_ped_on_mount(iParam1))
				{
					disable_control_action(0, -874806616, false);
				}
				else if (is_ped_in_any_vehicle(iParam1, false))
				{
					disable_control_action(0, -17122892, false);
				}
			}
			break;
		case 3:
			if (!func_1954(iParam2, 2))
			{
				set_entity_invincible(iParam1, false);
				if (!is_entity_dead(iParam3))
				{
					set_entity_invincible(iParam3, false);
				}
				if (!is_entity_dead(iParam4))
				{
					set_entity_invincible(iParam4, false);
				}
			}
			set_ped_can_be_knocked_off_vehicle(iParam1, 0);
			break;
	}
}

void func_1414(bool bParam0, float fParam1)
{
	if (!is_entity_dead(bParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(bParam0, 0))
		{
			waypoint_playback_override_speed(bParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

int func_1415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_276(iParam0))
	{
		return 1;
	}
	if (!func_1955(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		func_1956(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_1957((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_1958(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_1957((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_1958(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_1957((*Global_1347702)[iParam0]->f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!func_1959(iParam0))
	{
		func_1960((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_1961((*Global_1347702)[iParam0]->f_15))
	{
		func_1962((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_1957((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_1958(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return 0;
}

bool func_1416(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_1417(int iParam0)
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

void func_1418(int iParam0)
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

void func_1419()
{
	iVar0 = func_1083(Global_35, 9, 1, 0);
	if (func_697(iVar0))
	{
		return;
	}
	iVar0 = func_1083(Global_35, 7, 1, 0);
	if (func_697(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1083(Global_35, 0, 1, 0);
	if (func_697(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1083(Global_35, 1, 1, 0);
	if (func_697(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1083(Global_35, 18, 1, 0);
	if (func_697(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1963();
	if (func_697(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1825(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1964(6291456, 0);
	if (func_697(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1825(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1420()
{
	return Global_1900383->f_393;
}

int func_1421(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1805(*uParam0, 0f, 0f, 0f))
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

void func_1422(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1423(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1424(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1425()
{
	return &Global_1899515;
}

void func_1426(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1427(int iParam0)
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

bool func_1428()
{
	return (func_1965() || func_1966());
}

void func_1429(bool bParam0)
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
	func_1967(0f);
	Global_1935436->f_11 = 1;
	if (func_307())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1968();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1430(var uParam0)
{
	return uParam0->f_865;
}

float func_1431(var uParam0)
{
	return uParam0->f_868;
}

float func_1432(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1433(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1434(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1435(var uParam0, int iParam1)
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

void func_1436(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1188(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1969(iParam4);
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

bool func_1437(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_682(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1438(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1439(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1437(1108822547, 6))
	{
		if (bParam2)
		{
			func_1436(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1440(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1441(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1440(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_682(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_682(iParam0, 1)])->f_10 || iParam1);
}

void func_1441(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_682(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_682(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_682(iParam0, 1)])->f_10 && iParam1));
}

bool func_1442(var uParam0)
{
	if (func_1970(&(uParam0->f_29), 62))
	{
		switch (func_1971())
		{
			case 1:
				if (!func_1970(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1970(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1970(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1970(&(uParam0->f_29), 32))
				{
					if (func_1970(&(uParam0->f_29), 2))
					{
						if (func_704(func_288()) < 5)
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

int func_1443(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1972(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1125("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1126(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_697(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1972(iParam1, 512) && func_1656(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1972(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1972(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1972(iParam1, 33554432)))
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
		func_1127(iVar1);
	}
	if (func_697(iVar0))
	{
	}
	else if (!func_1972(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1443(uParam0, iParam1, iParam2);
	}
	else if (func_1972(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_1444(int iParam0)
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

void func_1445(var uParam0)
{
	if (!func_885(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

void func_1446(var uParam0)
{
	if (!func_885(*uParam0, 1))
	{
		request_ptfx_asset();
		func_843(uParam0, 1);
	}
}

bool func_1447(var uParam0)
{
	if (func_885(uParam0->f_2, 1))
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

char* func_1448(int iParam0)
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

bool func_1449(int iParam0)
{
	return iParam0 != 0;
}

int func_1450(var uParam0, bool bParam1)
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

int func_1451(var uParam0, char* sParam1)
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

void func_1452(var uParam0, bool bParam1)
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

int func_1453(var uParam0)
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

void func_1454(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1455(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1456(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1457(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1457(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1457(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1457(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1457(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1457(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1457(uParam0, 5, iParam4))
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
			if (func_1457(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1457(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1457(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1458(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1459(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_220((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1460(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_504(sParam0, 1);
}

bool func_1461(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_855(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1462(var uParam0)
{
	if (func_885(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_3, 1))
	{
		func_857(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_843(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_843(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1463(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_859(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1464(var uParam0, int iParam1)
{
	if (func_885(uParam0->f_1, 2))
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
	if (!func_885(uParam0->f_1, 1))
	{
		func_866(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1465(var uParam0)
{
	if (func_885(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_2, 1))
	{
		func_868(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1466(var uParam0)
{
	if (func_885(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_3, 1))
	{
		func_870(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_843(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1467(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_872(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1468(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_874(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1469(var uParam0)
{
	if (func_885(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_2, 1))
	{
		func_876(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1470(var uParam0)
{
	if (func_885(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_885(uParam0->f_1, 1))
	{
		func_878(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1471(int iParam0)
{
	if (func_465(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1472(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_465(iParam0))
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
			if (func_967(iParam0, 2, 1))
			{
				func_469(iParam0, 2, 1);
			}
			if (func_716(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_998(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_527(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_163(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_163(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1973(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_998(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1974(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_998(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1974(iParam0, 1);
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
			if (!func_967(iParam0, 44, 0))
			{
				func_998(iParam0, 44, 0);
			}
			if (func_1975(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1974(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_469(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1002(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1976(iParam0, 0, 0, 1);
			}
			func_469(iParam0, 33, 1);
			func_469(iParam0, 34, 1);
			func_469(iParam0, 29, 1);
			if (!func_399(vVar0) && bParam7)
			{
				func_1974(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1974(iParam0, 4);
			}
			else
			{
				func_1974(iParam0, 5);
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
						func_1973(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_442(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1974(iParam0, 4);
			}
			else
			{
				func_1974(iParam0, 5);
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
				if (func_1977(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1978(iParam0, iParam13, 0);
						func_1979(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_967(iParam0, 25, 0))
						{
							func_469(iParam0, 25, 0);
						}
						func_998(iParam0, 66, 0);
						func_1974(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1974(iParam0, 5);
				}
				func_998(iParam0, 28, 1);
			}
			else
			{
				func_1974(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1974(iParam0, 6);
			}
			break;
		case 6:
			if (func_163(Global_1360165[iParam0], 0))
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
					func_1980(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1981(Global_1360165[iParam0], 1);
				}
			}
			func_1974(iParam0, 7);
		case 7:
			func_1002(iParam0, bParam9, bParam15, 0);
			func_961(iParam0, 4, bParam11);
			func_999(iParam0);
			if (bParam20)
			{
				if (func_1982(Global_1360165[iParam0]))
				{
				}
			}
			func_1983(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1974(iParam0, 0);
			func_717(iParam0, 16, 1);
			func_469(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1473(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1984(bParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1985(bParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1986(uParam0, bParam1, iParam2, func_327(iParam2, 0));
	func_451(uParam0, bParam1, 512);
	if (bParam5)
	{
		func_451(uParam0, bParam1, 128);
	}
	else
	{
		func_450(uParam0, bParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1474(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	iVar0 = func_463(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1475(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1476(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1485(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1477(int iParam0)
{
	iParam0 = func_269(iParam0);
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
	func_1987(&Var0);
	func_1988(iParam0, Var0);
	func_1989(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1990(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1991(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1992(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1993(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1994(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1995(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1996(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1997(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1478(vector3 vParam0)
{
	return func_1998(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1479(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_536(iParam0))
	{
		return false;
	}
	iVar0 = func_218(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1480(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_530(iParam0);
	func_530(iParam0);
	func_1999(iParam0, iParam1);
	func_2000(iParam0, iParam1);
	func_2001(iParam0, iParam1);
	iVar1 = func_218(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2002(iVar1);
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
	iVar3 = func_218(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2002(iVar3);
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
	func_271();
}

bool func_1481()
{
	iVar0 = func_1420();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1482()
{
	bVar0 = func_1420();
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	delete_object(&bVar0);
	func_2003(0);
}

int func_1483(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_1484(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_1485(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_1486(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1718(&iVar0, &iVar1, &iVar2);
	func_1719(iParam0, iVar0);
	func_1720(iParam0, iVar1);
	func_1721(iParam0, iVar2);
	func_2004(iParam0, 1);
	func_2005(iParam0, 1);
}

void func_1487(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_2006(iParam0, 1);
}

void func_1488(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_269(iParam0);
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

bool func_1489(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1011(iParam0, 1);
}

struct<2> func_1490(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2007(iParam0, &uVar2))
	{
	}
	if (!func_2008(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1491()
{
	if (func_2009(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2009(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2009(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2009(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2009(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2009(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1492(bool bParam0, var uParam1, var uParam2, int iParam3)
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
	func_2010(bParam0);
	func_2011(bParam0, uParam1);
	func_2012(bParam0);
	func_2013(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2014(bParam0, iParam3, 0);
	}
	_update_ped_variation(bParam0, false, true, true, true, true);
}

void func_1493(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_1494(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1495(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1496(var uParam0)
{
	return *uParam0;
}

bool func_1497(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2015(iParam0) };
	if (func_1805(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_895(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2016(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1498(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1499(var uParam0)
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

bool func_1500(var uParam0)
{
	switch (func_2017(uParam0))
	{
		case 0:
			uParam0->f_24 = func_288();
			iVar4 = func_288();
			func_1193(&iVar4, uParam0->f_6);
			func_1194(&iVar4, 0);
			func_1195(&iVar4, 0);
			if (func_1030(uParam0->f_24, iVar4, 1))
			{
				func_337(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2018(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2019(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2020(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2019(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2020(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_337(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_704(iVar4), func_705(iVar4), func_706(iVar4));
				func_2021(get_clock_hours());
				func_2022(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1501(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1502(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2023(2000);
	Global_16 = 0;
	func_2024();
	set_entity_invincible(Global_35, func_2025(*iParam0, 8));
	if (!func_2025(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2025(*iParam0, 2) || func_2025(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2025(*iParam0, 16))
	{
		func_238(1);
	}
	if (func_2025(*iParam0, 32))
	{
		func_635(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2026(-1623728698, 0);
	}
	func_821(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1503(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1504(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1505(var uParam0)
{
	return *uParam0;
}

bool func_1506(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1507(uParam0, 32768))
	{
		return true;
	}
	if (func_2027(uParam0) >= 3)
	{
		uParam0->f_2286 = func_950(get_player_index(), 0, 0, 1);
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
		func_2028(uParam0);
	}
	if (func_2027(uParam0) < 10)
	{
		if (func_2027(uParam0) == 3)
		{
			func_2029(uParam0, iParam5, bParam6);
		}
		else if (func_2027(uParam0) > 3)
		{
			if (func_1505(uParam0) == 0)
			{
				if (!func_1507(uParam0, 524288))
				{
					func_2030(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2031(uParam0, 4);
					func_2032(uParam0, 10);
					func_2033(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1507(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2034(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_2035(0);
			func_2036();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2034(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2037(uParam0, uParam0->f_2074))
				{
					if (func_2038(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2039(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2039(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2040(uParam0);
			}
		}
	}
	bVar0 = func_2041(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1507(uParam0, 268435456) && bVar1) && !func_1507(uParam0, 262144))
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
				func_755(uParam0, 131072);
				func_755(uParam0, 268435456);
			}
		}
		if (func_2042(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2034(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1505(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2027(uParam0) == 3 || func_1507(uParam0, 131072))
	{
		func_2043(uParam0);
		if (!func_1507(uParam0, 262144))
		{
			if ((bVar0 && func_1507(uParam0, 65536)) || func_1507(uParam0, 131072))
			{
				func_755(uParam0, 32768);
				func_2031(uParam0, 4);
				func_2032(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2033(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2027(uParam0) >= 3)
	{
		func_2044(uParam0, iParam5);
		func_2045(uParam0);
		if (!func_2046(uParam0, 1))
		{
			func_2047(uParam0);
		}
		func_2048(uParam0);
	}
	switch (func_2027(uParam0))
	{
		case 0:
			func_2049(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2050(uParam0);
			break;
		case 2:
			func_2051(uParam0);
			break;
		case 3:
			if (func_2052(uParam0))
			{
				func_2053(2);
				func_2039(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_223(&(uParam0->f_2262));
				func_2031(uParam0, 1);
				func_2054();
				func_2032(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1507(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2027(uParam0) == 5)
			{
				if (func_2055(uParam0))
				{
					func_2031(uParam0, 2);
					func_2032(uParam0, 6);
				}
			}
			if (func_2027(uParam0) == 6)
			{
				if (func_2056(uParam0))
				{
					func_2031(uParam0, 3);
					func_2032(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1779(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2057(uParam0, iParam5))
				{
					if (func_2058(uParam0))
					{
						uParam0->f_2075 = func_2059(uParam0);
						func_223(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2031(uParam0, 6);
						func_2032(uParam0, 9);
					}
					else
					{
						func_2031(uParam0, 4);
						func_2032(uParam0, 10);
						func_2033(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2057(uParam0, iParam5))
			{
				func_2033(uParam0, iParam5);
				func_2032(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1507(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1508(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1509(var uParam0, var uParam1)
{
	if (func_1507(uParam1, 32768))
	{
		Var0 = { func_2060(uParam0) };
		func_2061(uParam0, &Var0);
		if (func_1507(uParam1, 131072))
		{
			func_756(uParam0, 268435456);
			if (func_399(uParam0->f_865))
			{
				uParam0->f_865 = { func_2062(uParam1, uParam1->f_2074) };
			}
			if (func_399(uParam0->f_862))
			{
				uParam0->f_862 = { func_2062(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1507(uParam1, 268435456))
		{
			func_2063(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1507(uParam1, 524288))
	{
		func_756(uParam0, 67108864);
		func_1508(uParam1, 524288);
	}
	if (func_2042(uParam1, 128))
	{
		func_756(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2034(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2063(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1510(var uParam0)
{
	if (func_810(&(uParam0->f_7375), 128) || func_810(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_2064(&(uParam0->f_7375));
		func_1433(&(uParam0->f_7375), 128, 1);
		func_1433(&(uParam0->f_7375), 256, 1);
		func_1433(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1511(var uParam0)
{
	func_2065(&(uParam0->f_7375));
}

bool func_1512(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_2066(uParam4, &uParam0);
	if (func_810(uParam4, 2) && !func_810(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2067(uParam4) != 1)
	{
		func_2068(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2067(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2069(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2070(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2071(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2072(uParam5);
				}
				func_2070(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_810(uParam4, 2097152))
					{
						func_2073(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_810(uParam4, 134217728)))
				{
				}
				else
				{
					func_2074(uParam4);
				}
				func_223(&(uParam4->f_1));
				func_2070(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2075(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_903(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2070(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2076(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2070(uParam4, 4);
					}
					else if (!func_399(func_2077(uParam4)) && !func_1814(Global_35, func_2077(uParam4), 100f, 1, 1))
					{
						func_1418(1);
						start_player_teleport(get_player_index(), func_2077(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_903(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2070(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_282(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2069(uParam4, &uParam0, uParam5);
						func_2070(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_903(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2070(uParam4, 4);
			}
			break;
		case 3:
			func_395(uParam4);
			if (func_2071(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2072(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_810(uParam4, 512)))
			{
				if (!func_810(uParam4, 1024) && func_2078(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_810(uParam4, 512))
				{
					func_223(&(uParam4->f_1));
					func_756(uParam4, 512);
					func_2070(uParam4, 4);
				}
				else if (func_810(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2068(uParam4);
			}
			if (func_810(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2079(uParam4) - func_2080(uParam4)))) <= 2f)
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
				if (func_2081(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2080(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2082(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2083(uParam4);
				return true;
			}
			else
			{
				if (func_810(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_223(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_756(uParam4, 512);
						func_1433(uParam4, 67108864, 1);
						func_2070(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_810(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2080(uParam4) <= 5000) && func_2080(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_810(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1502(&(uParam4->f_861), 0);
					func_756(uParam4, 536870912);
				}
				if (func_2080(uParam4) >= 5000 && func_2080(uParam4) <= (func_2079(uParam4) - 5000))
				{
					func_2084();
				}
			}
			break;
		case 6:
			if (func_2082(uParam4))
			{
				func_2083(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_810(uParam4, 524288))
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
						func_756(uParam4, 1073741824);
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
					if (func_2085(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2070(uParam4, 3);
					}
					else if (func_903(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2070(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2071(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2070(uParam4, 3);
					}
					else if (func_903(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2070(uParam4, 3);
					}
				}
				if (func_2067(uParam4) == 3)
				{
					if (func_810(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2070(uParam4, 4);
			break;
	}
	return false;
}

void func_1513(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2086()))
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

void func_1514(var uParam0)
{
	func_2073(&(uParam0->f_7375));
}

bool func_1515(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_272(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2087(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_273(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2088(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1516(int iParam0)
{
	MemCopy(&cVar0, {func_272(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1517(int iParam0)
{
	Var0 = { func_1516(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1518(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2089(iVar0));
		iVar0++;
	}
}

int func_1519(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_25))
	{
		Local_14.f_25 = { func_425() };
	}
	if (func_1826(&(Local_14.f_25), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_27[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_27[0] = func_1401(1382164045, 1019.585f, -1766.755f, 47.5808f, 97.5851f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_27[0]), "CatherineBraithwaite");
		func_1827(Local_14.f_25, &(Local_14.f_27[0]));
		func_1828(&(Local_14.f_27[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_27[0]), true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_27[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_27[1] = func_1401(-77509825, 1019.838f, -1765.636f, 47.5808f, 135.5852f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_27[1]), "BartBraithwaite");
		func_1827(Local_14.f_25, &(Local_14.f_27[1]));
		func_1828(&(Local_14.f_27[1]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_27[1]), true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_27[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_27[2] = func_1401(-538512200, 1009.807f, -1768.607f, 47.5833f, 337.6353f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_27[2]), "ButlerBraithwaite");
		func_1827(Local_14.f_25, &(Local_14.f_27[2]));
		func_1828(&(Local_14.f_27[2]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_27[2]), true);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1829(&(Local_14.f_25), 1);
	return 1;
}

int func_1520(var uParam0, struct<4> Param1, bool bParam5)
{
	if (!does_entity_exist(bVar777))
	{
		func_887(uParam0, 8, &uLocal_785, 0, 0, 0, 0, 0, 1, 837028314, 1, 0, 1, 0);
	}
	if (bParam5)
	{
		_set_ped_body_component(bVar777, -1100875244);
		_update_ped_variation(bVar777, false, true, true, true, false);
	}
	if (!is_entity_dead(bVar777))
	{
		if (!func_940(uParam0) && func_33(uParam0) >= 2)
		{
			func_1313(bVar777, Param1, 2, 1073741824);
		}
		else if ((func_33(uParam0) == 0 && !func_120(uParam0, 4)) && (func_128(uParam0, 1) || func_128(uParam0, 2)))
		{
			func_442(bVar777, 1017.781f, -1769.096f, 46.594f, 8.7684f, 32, 1073741824);
		}
		set_blocking_of_non_temporary_events(bVar777, true);
		set_ped_config_flag(bVar777, 24, false);
	}
	else
	{
		return 0;
	}
	func_145(uParam0, bVar777, "SEAN", 0);
	func_2090(uParam0, bVar777, 535);
	func_1237(&uLocal_222, 0);
	func_526(8, 1);
	set_ped_path_can_use_climbovers(bVar777, true);
	set_entity_proofs(bVar777, 0, false);
	return 1;
}

int func_1521(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_17))
	{
		Local_14.f_17 = { func_425() };
	}
	if (func_1826(&(Local_14.f_17), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_19[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_19[0] = create_vehicle(-1758092337, 1002.94f, -1734.831f, 46.3831f, 2.4687f, true, true, false, false);
		func_1827(Local_14.f_17, &(Local_14.f_19[0]));
		func_1828(&(Local_14.f_19[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1829(&(Local_14.f_17), 1);
	return 1;
}

void func_1522(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (is_entity_a_ped(iParam0))
			{
				if (is_ped_on_mount(get_ped_index_from_entity_index(iParam0)))
				{
					_remove_ped_from_mount(get_ped_index_from_entity_index(iParam0), true, false);
				}
			}
			if (!is_entity_attached(iParam0))
			{
				attach_entity_to_entity(iParam0, iParam1, 0, vParam2, vParam5, bParam8, bParam10, false, false, 2, true, bParam9, false);
			}
		}
	}
}

void func_1523(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1524(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1525(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1526(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_974(iParam1);
	if (iVar0 == -1)
	{
		func_2091(iParam0, iParam1, fParam3);
		func_977(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_975(iVar0);
		func_2091(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_977(bParam2, fParam3);
		return;
	}
}

int func_1527(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_2092(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1528(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

int func_1529(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!func_460(iParam0, iParam1))
	{
		return 1;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") && decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
		if (iVar0 == iParam1)
		{
			return 1;
		}
		else
		{
			func_2093(iParam0);
		}
	}
	iVar1 = _request_metaped_outfit(get_entity_model(iParam0), iParam1);
	decor_set_int(iParam0, "metaped_outfit_request", iVar1);
	decor_set_int(iParam0, "metaped_outfit_request_name", iParam1);
	return 1;
}

void func_1530(bool bParam0, int iParam1)
{
	open_sequence_task(&iVar0);
	if (bParam0)
	{
		Var1.f_5 = -1;
		Var1.f_6 = 20000;
		Var1.f_7 = 1073741824;
		Var1.f_8 = 1;
		Var1.f_6 = 40000;
		Var1.f_3 = 0;
		Var1.f_7 = 3f;
		Var1.f_4 = &Local_14.f_19[0];
		Var1.f_5 = iParam1;
		Var1.f_8 = 1048576;
		task_enter_transport(&Var1);
	}
	else
	{
		Var10.f_5 = -1;
		Var10.f_6 = 20000;
		Var10.f_7 = 1073741824;
		Var10.f_8 = 1;
		Var10.f_6 = 40000;
		Var10.f_3 = 0;
		Var10.f_7 = 1.5f;
		Var10.f_4 = &Local_14.f_19[0];
		Var10.f_5 = iParam1;
		Var10.f_8 = 1048576;
		task_enter_transport(&Var10);
	}
	close_sequence_task(iVar0);
	task_perform_sequence(iVar781, iVar0);
	clear_sequence_task(&iVar0);
}

void func_1531(int* iParam0)
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

bool func_1532(var uParam0)
{
	return func_2078(&(uParam0->f_7375), 1);
}

void func_1533()
{
	set_current_ped_weapon(iVar783, 1683046969, true, 0, false, false);
	open_sequence_task(&iVar0);
	task_set_crouch_movement(0, true, 0, false);
	task_go_straight_to_coord(0, 1898.174f, -1331.085f, 41.6172f, 1.5f, 20000, 40000f, 1056964608, 0);
	task_turn_ped_to_face_entity(false, Global_35, 0, -1082130432, -1082130432, -1082130432);
	close_sequence_task(iVar0);
	task_perform_sequence(iVar783, iVar0);
	clear_sequence_task(&iVar0);
}

int func_1534(int iParam0, bool bParam1)
{
	if (!func_957(iParam0))
	{
		return 0;
	}
	if (!func_2094(iParam0, 2))
	{
		return 0;
	}
	if (func_958(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_960(iParam0)))
	{
		return 1;
	}
	if (func_2094(iParam0, 1) && !bParam1)
	{
		func_2095(iParam0, 128);
		return 1;
	}
	func_2096(iParam0, 129);
	func_2097(iParam0);
	_0x7b204f88f6c3d287(func_960(iParam0));
	_0xfc77c5b44d5ff7c0(func_960(iParam0));
	func_2098(iParam0, 0);
	return 1;
}

void func_1535(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_2006(iParam0, 64);
	func_271();
}

void func_1536(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_442(bParam0, 705.1581f, -1223.224f, 44.2445f, 175.262f, 2, 1073741824);
			iVar0 = _find_closest_active_scenario_point_of_type(705.1581f, -1223.224f, 44.2445f, -1805387726, 2f, 0, false);
			break;
		case 1:
			func_442(bParam0, 701.9168f, -1227.866f, 44.1117f, 175.262f, 2, 1073741824);
			iVar0 = _find_closest_active_scenario_point_of_type(701.9168f, -1227.866f, 44.1117f, -1805387726, 2f, 0, false);
			break;
		case 2:
			func_442(bParam0, 702.842f, -1230.349f, 44.1923f, 175.262f, 2, 1073741824);
			iVar0 = _find_closest_active_scenario_point_of_type(702.842f, -1230.349f, 44.1923f, -1805387726, 2f, 0, false);
			break;
		case 3:
			func_442(bParam0, 705.7546f, -1229.556f, 44.2317f, 101.7037f, 2, 1073741824);
			iVar0 = _find_closest_active_scenario_point_of_type(705.7546f, -1229.556f, 44.2317f, -1805387726, 2f, 0, false);
			break;
		case 4:
			func_442(bParam0, 707.9492f, -1226.096f, 44.2383f, 101.7037f, 2, 1073741824);
			iVar0 = _find_closest_active_scenario_point_of_type(707.9492f, -1226.096f, 44.2383f, -1805387726, 2f, 0, false);
			break;
	}
	if (_does_scenario_point_exist(iVar0))
	{
		_task_use_scenario_point(bParam0, iVar0, "", -1, false, true, 0, false, -1f, false);
	}
	else
	{
		task_stand_still(bParam0, -1);
	}
}

void func_1537(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_220(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_2099(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1460(uParam0->f_8269[iVar19]);
				}
				else if (func_2100(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_230(uParam0->f_8269[iVar19]);
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
			if (func_220(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2101(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2102(uParam0->f_8269.f_641[iVar19]);
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
			if (func_220(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2101(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_221(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_220(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2103(&(uParam0->f_8269));
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
			if (func_220(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2099(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2104(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_504(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2100(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2104(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_504(uParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1538(var uParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1944(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1539()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_2035(0);
	func_2105();
}

void func_1540(var uParam0, int iParam1, int iParam2)
{
	func_1568(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1541(int iParam0)
{
	return (iParam0 < func_400() && iParam0 >= 0);
}

int func_1542(int iParam0)
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

bool func_1543(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1544(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1541(iVar0))
	{
		return false;
	}
	iVar1 = func_1542(iParam2);
	if (!func_1543(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1545(struct<2> Param0, int iParam2)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1546(var uParam0)
{
	func_2106(uParam0);
	if (func_282(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_282(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_897(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_2107(uParam0);
	func_2108(uParam0, 67108864);
	func_2108(uParam0, 8192);
	func_899(uParam0, 4);
	func_899(uParam0, 512);
	func_899(uParam0, 65536);
	func_899(uParam0, 1024);
	func_899(uParam0, 262144);
	func_899(uParam0, 16777216);
	func_899(uParam0, 64);
	func_268(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_2109(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_268(uParam0, 4194304);
	func_268(uParam0, 8388608);
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
	func_558(&(uParam0->f_13106));
	func_223(&(uParam0->f_13112));
	func_2110(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_238(1);
	}
	if (func_930(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_930(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_930(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2111(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_232(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2112(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_2113(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_2114(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1547(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1548(var uParam0)
{
	func_2072(uParam0);
}

void func_1549(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1454(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1550(var uParam0)
{
	func_2115(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1551(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1552(var uParam0)
{
	return true;
}

void func_1553(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1554(var uParam0, int iParam1)
{
	iVar0 = func_2116(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1555(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2117(uParam0, uParam1))
	{
		return 0;
	}
	if (func_465(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_453(uParam1);
	func_2118(uParam1);
	if (!bParam2)
	{
		func_2119(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2120(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2121(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2122(uParam0, uParam1);
	func_2123(uParam1);
	return 0;
}

bool func_1556(var uParam0)
{
	return true;
}

int func_1557(int iParam0)
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
						*iParam0 = func_2124(vVar0.z);
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

void func_1558(var uParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1245(uParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1559(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_2125(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1507(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2126(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_2076(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1560(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_840((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2129((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_840((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2127(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2128(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2130((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_840((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2131((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_840((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2132((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		func_2127(&(uParam4->f_1), iParam12);
		if (func_2128(&(uParam4->f_1), iParam13))
		{
			func_2133(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_840((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2127(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2128(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2134((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_840((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2127(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2128(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2135((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_840((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2127(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2128(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2136((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_840((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2137((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_840((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2138((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_840((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2127(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2128(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2139((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_840((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2127(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2128(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2140((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1561(var uParam0)
{
	iVar0 = func_2141(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1562(bool bParam0, bool bParam1)
{
	if (func_2142(255) == 4)
	{
		return;
	}
	if (func_399(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_293(0);
	}
	else
	{
		if (bParam1)
		{
			func_2143(0, 0, 0, 1);
		}
		func_294(0);
		func_2144(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2145(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2146(Global_1109400->f_389, 42);
	func_2147(Global_1109400->f_428, 42);
}

bool func_1563(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1564(bool bParam0, bool bParam1, bool bParam2)
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

var func_1565(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1566(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2148(sParam1));
}

void func_1567(var uParam0, int iParam1, bool bParam2)
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

void func_1568(int iParam0, int iParam1)
{
	func_1574(iParam0, iParam1);
}

void func_1569(int iParam0)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_964(iParam0))
	{
		iVar0 = func_2149(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
	}
}

int func_1570(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

bool func_1571(int iParam0)
{
	if (func_465(iParam0))
	{
		if (func_163(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_1572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_1573()
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_467(1) > 0;
}

void func_1574(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_1575(int iParam0, bool bParam1, float fParam2)
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
	iVar0 = func_2150(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_2151(iVar1, 1);
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
	return func_2152(iParam0, bParam1, fParam2);
}

int func_1576(int iParam0)
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

int func_1577(int iParam0)
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

int func_1578(int iParam0)
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

void func_1579(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1580(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2153(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1581(int iParam0)
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

void func_1582()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_398())
	{
		return;
	}
	func_2154(&(Global_40.f_40));
}

void func_1583()
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

bool func_1584()
{
	return !func_399(Global_1310720->f_1);
}

int func_1585()
{
	return Global_40.f_4283.f_1;
}

int func_1586()
{
	return Global_40.f_4283.f_4;
}

void func_1587(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2155())
	{
		fVar0 = func_1016(vParam0, Global_40.f_6);
	}
	if (func_2156(33554432))
	{
		if (!func_2157(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1016(vParam0, Global_40.f_2);
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

float func_1588(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1589()
{
	if (!func_201(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2158(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2158(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2158(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2158(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2158(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2158(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2158(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2158(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2158(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2159(10f, to_float(func_2158(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2159(5f, to_float(func_2158(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2159(25f, to_float(func_2160(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2159(1f, to_float(func_2160(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2159(6f, to_float(func_2160(64058978)))));
	fVar0 = (fVar0 + (3f * func_2159(1f, to_float(func_2160(795577402)))));
	iVar1 = func_2161();
	fVar0 = (fVar0 + (0.1111111f * func_2159(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2159(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2159(to_float(20), to_float(func_2163()))));
	if (func_2164(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2164(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2164(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2164(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2164(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2162(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2159(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2159(5f, to_float(func_2160(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2159(5f, to_float(func_2158(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1658(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2165(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2159((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2159(1f, to_float(func_2166(-2116919750)))));
	fVar5 = to_float(func_2167());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2159(5f, to_float(func_2160(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2159(1f, to_float(func_2160(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2159(1f, to_float(func_2160(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2159(1f, to_float(func_2160(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2159(1f, to_float(func_2158(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2159(1f, to_float(func_2158(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2168(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_193(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_193(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_197(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2169(Global_1898330[iVar61]);
				}
				else
				{
					func_2170(iVar61, 0);
					if (func_198(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_196(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_196((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_196(&Global_1898437), &iVar9);
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

void func_1590(int iParam0)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2171(iParam0);
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

void func_1591(int iParam0)
{
	if (func_465(iParam0))
	{
		if (does_entity_exist(func_463(iParam0)))
		{
			func_717(iParam0, 67108864, 1);
			func_469(iParam0, 19, 1);
		}
	}
}

float func_1592(int iParam0)
{
	if (!func_966(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1593(int iParam0)
{
	bVar0 = func_463(iParam0);
	iVar1 = func_1000(iParam0, 0);
	func_2172(iParam0, bVar0);
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

bool func_1594(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1595(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1596(int iParam0, int iParam1, bool bParam2)
{
	if (!func_966(iParam0))
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

int func_1597(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_966(iParam0))
	{
		return 0;
	}
	bVar0 = func_1006(iParam0);
	if (func_163(bVar0, 0))
	{
		if (func_163(_get_rider_of_mount(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1594(iParam0)) || func_1595(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(bVar0) && func_1937(player_ped_id(), bVar0, 1) < 10000f))
			{
				iVar1 = func_2173(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(bVar0))
					{
						set_entity_as_mission_entity(bVar0, true, true);
					}
					func_2174(iParam0);
					_0x7b204f88f6c3d287(func_2175(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2175(iParam0, 0));
					func_2176(iParam0);
				}
			}
			else
			{
				if (func_716(iParam0, 32768, 1))
				{
					iVar2 = func_2175(iParam0, 0);
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
		if (func_163((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_716(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2174(iParam0);
				_0x7b204f88f6c3d287(func_2175(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2175(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2174(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2177(iParam0, 0);
	return 1;
}

int func_1598(int iParam0)
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

char* func_1599(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_249(37, iParam0))
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
	if (func_249(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1600(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1151(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1601(int iParam0)
{
	iParam0 = func_269(iParam0);
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

float func_1602(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1603(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1604(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1605(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1606(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1607(int iParam0, int iParam1)
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
		default: