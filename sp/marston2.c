void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
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
	iLocal_27 = 25;
	iLocal_28 = 1;
	iLocal_29 = 2;
	iLocal_30 = 4;
	iLocal_31 = 8;
	iLocal_32 = 16;
	iLocal_33 = 32;
	iLocal_34 = 64;
	iLocal_35 = 128;
	iLocal_36 = 256;
	iLocal_37 = 512;
	iLocal_38 = 1024;
	iLocal_39 = 524288;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1437, 1073741824);
		func_2(&uLocal_1437, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1437);
	func_5(&uLocal_1437);
	while (!func_6(&uLocal_1437, -2147483648))
	{
		func_7(&uLocal_1437);
		wait(0);
	}
	while (!func_2(&uLocal_1437, 0))
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
	if (is_vehicle_driveable(iLocal_72, false, false))
	{
		set_vehicle_is_considered_by_player(iLocal_72, false);
	}
	func_163(&(uLocal_46[0]), 1, 1);
	clear_weather_type_persist();
	func_164(0);
	stop_ped_speaking(&(uLocal_46[0]), false);
	if (func_165())
	{
		func_47(0, 0);
	}
	if (func_22(cParam0) == 0)
	{
		func_166(100f);
	}
	if (!is_entity_dead(Global_35))
	{
		if (func_22(cParam0) == 0)
		{
		}
		else
		{
			_0xc67a4910425f11f1(get_player_index(), "MAR2_POSSE");
			reset_player_input_gait(get_player_index());
		}
		_0x78030c7867d8b9b6(Global_35, 1);
		func_167();
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	func_168();
	func_169(1);
	func_170(883);
	func_170(884);
	func_170(943);
	func_170(485);
	func_170(477);
	func_170(943);
	func_171(883, 32);
	func_171(884, 32);
	func_171(943, 32);
	func_171(485, 32);
	func_171(477, 32);
	func_171(943, 32);
	if (_does_volume_exist(&(iLocal_93[0])))
	{
		_0xa1cfb35069d23c23(&(iLocal_93[0]));
	}
	if (_does_volume_exist(&(iLocal_93[0])))
	{
		_0x74c2b3dc0b294102(&(iLocal_93[0]));
	}
	if (_does_volume_exist(&(iLocal_93[19])))
	{
		func_172(&(iLocal_93[19]));
	}
	func_173(0);
	if (_does_volume_exist(&(iLocal_93[5])))
	{
		_0xd17672447692478e(&(iLocal_93[5]), 0);
	}
	func_174(1);
	func_175(1);
	clear_gps_custom_route();
	set_gps_custom_route_render(false, 0, 0);
	func_176(cParam0);
	func_177();
	func_178();
	func_179();
	func_180();
	func_181(cParam0);
	func_182(cParam0);
	func_183(cParam0);
	func_184();
	func_185();
	func_186(65, 1);
	func_187(65, 0);
	func_186(64, 1);
	func_187(64, 0);
	func_188(64, 22, 0, 1);
	remove_model_hide(-1773.528f, -393.6541f, 155.5415f, 0.5f, 1152089151, 0);
	_0x15abd5004cad2d99(-1);
	_0x710448d44a64c213(1);
	_0x9cf1836c03fb67a2(&uLocal_337, 1);
	func_189(Global_35, 0);
	func_190();
	set_player_forced_aim(player_id(), false, 0, -1, false);
	set_ped_config_flag(Global_35, 446, false);
	set_ped_config_flag(Global_35, 445, false);
	_set_weather_type_frozen(false);
	_0x18ff3110cf47115d(Global_35, 9, 1);
	func_191(0, 1103626240);
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
	iVar0 = func_192(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_193(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_194(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_195(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_196(iParam0) && !func_197(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_198(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_196(iParam0))
	{
		iParam2 = -1;
	}
	if (func_199(iParam0) == 3 || (func_199(iParam0) == 1 && _0x01f4d242765c6b24(func_198(iParam0))))
	{
		func_201(func_200(iParam0), func_198(iParam0), iParam2);
		if ((!func_195(Global_1572864->f_8) && !func_202(0, 1, 0)) && !func_203(&Global_1935630, 32768))
		{
			iVar0 = func_204(iParam0);
			if (iVar0 != -1)
			{
				func_205(0);
			}
			else if (func_200(iParam0) == 8)
			{
				iVar0 = func_206();
				if (iVar0 != -1)
				{
					func_205(0);
				}
			}
		}
	}
	func_207(iParam0, 0);
	if (func_208(0) == iParam0)
	{
		func_40(1);
		func_209(0);
		func_210(1);
	}
	func_211(iParam0, 1);
	func_212(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_213(0);
	func_214(0);
	func_64(0);
	func_65(0);
	func_215(0);
	func_216(1f);
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
		func_217();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_218())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_219())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_198(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_220(0);
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
		func_221(iVar0, iParam0);
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
		if (func_222((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_223((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_223((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_223((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_224(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_225(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_226(&(cParam0->f_13118)) >= 4000)
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
	func_227(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_195(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		func_229(&Var0, func_228(0, 0));
	}
	else if (iParam0 == 1)
	{
		if (func_230(1))
		{
			func_229(&Var0, func_228(1, 1));
		}
		else
		{
			func_229(&Var0, func_228(1, 0));
		}
	}
	else if (iParam0 == 2)
	{
		if (func_230(2))
		{
			func_229(&Var0, func_228(2, 3));
		}
		else if (func_230(4))
		{
			func_229(&Var0, func_228(2, 6));
		}
		else
		{
			func_229(&Var0, func_228(2, 0));
		}
	}
	else if (iParam0 == 3)
	{
		func_229(&Var0, func_228(3, 0));
	}
	else if (iParam0 == 4)
	{
		func_229(&Var0, func_228(4, 0));
	}
	else if (iParam0 == 5)
	{
		if (func_230(1))
		{
			func_229(&Var0, func_228(5, 1));
		}
		else
		{
			func_229(&Var0, func_228(5, 0));
		}
	}
	else if (iParam0 == 6)
	{
		func_229(&Var0, func_228(6, 0));
	}
	else if (iParam0 == 7)
	{
		func_229(&Var0, func_228(7, 0));
	}
	else if (iParam0 == 8)
	{
		func_229(&Var0, func_228(8, 0));
	}
	else if (iParam0 == 9)
	{
		func_229(&Var0, func_228(9, 0));
	}
	else if (iParam0 == 10)
	{
		func_229(&Var0, func_228(10, 0));
	}
	else if (iParam0 == 25)
	{
		func_229(&Var0, func_228(11, 0));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_231(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_213(0);
	func_232(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_222((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_233((*uParam0)[iVar0]);
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
			func_234(iVar0, 4096);
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
		func_235(Global_1935630, 4194304);
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
	func_236();
	func_237();
	func_238();
	func_239();
}

void func_43()
{
	if (func_240())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_241(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_242();
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
	func_243(1, iParam0, iParam1);
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
	return (func_244() || func_54());
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
	func_245(uParam0);
	func_246(uParam0, 0);
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
		func_247(iVar0);
		iVar0++;
	}
	func_248();
	func_249();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_250())
	{
		if (func_251(255))
		{
			if (!func_252(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_253(Global_1894899->f_2) && func_254(Global_1894899->f_2))
		{
			func_255(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_256(16);
			}
		}
		else if (func_253(Global_1894899->f_2) && !func_257(Global_1894899->f_2, 2))
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
		func_258(16);
		func_259();
		if (bVar0)
		{
			func_258(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
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
	if (func_261(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_262(cParam0->f_5421))
		{
			iVar1 = func_263(cParam0->f_5421, iVar0);
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
		if (func_264(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_265(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_266(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_267(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_268(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_269(7);
		}
		else
		{
			func_270(iVar0, 0);
		}
		func_271(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_273(iParam0, 32);
	func_274();
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
	Var0 = { func_275(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_276(iParam0) };
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
		func_215(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_215(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_277(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_222((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_223((*uParam1)[iVar0], 1);
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
	iVar0 = func_200(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_278(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_279(iVar1))
			{
				if (func_280(iVar1, 4))
				{
					func_281(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_282(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_278(iParam0);
		if (iVar3 == 59)
		{
			func_282(1);
		}
		else if (iVar3 == 61)
		{
			func_282(0);
		}
		else if (iVar3 == 83)
		{
			func_282(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_279(iVar0))
		{
			if (func_280(iVar0, 4))
			{
				if (func_280(iVar0, 16))
				{
					func_283(iVar0, 1);
				}
				if (func_280(iVar0, 8))
				{
					func_284(iVar0, 1);
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
		if (func_285(cParam0) == 0 && iVar0 == 0)
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
		func_286(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_287(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_288(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_289(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_253(iParam0))
	{
		return;
	}
	bVar0 = func_257(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_290(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_292(iParam0, func_291());
			func_293(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_294(iParam0, 67108864);
		func_292(iParam0, -15);
	}
	func_295(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_296(11);
	}
	else
	{
		func_297(11);
	}
}

void func_80(int iParam0)
{
	if (func_298(iParam0, 0))
	{
		func_299(262144, 5, 0, 1);
		func_300(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_301(101, 7, 1f, 0, 1);
			func_301(89, 7, 1f, 0, 1);
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
	if (!func_195(iParam0))
	{
		return;
	}
	if (func_302(iParam0) == 4)
	{
		func_303(iParam0, func_291());
		if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
		{
			if (bParam3)
			{
				func_207(iParam0, 6);
			}
			else
			{
				func_207(iParam0, 5);
			}
			func_212(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_200(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_304(0, 2);
		if (!bVar1 && bParam1)
		{
			func_305();
		}
	}
	else
	{
		func_209(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_306(iParam0);
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
				if (bParam1 && func_199(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_278(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_278(iParam0)]->f_8), true);
						}
					}
					else if ((func_278(iParam0) != 95 && func_278(iParam0) != 82) && !func_307((*Global_1347702)[func_278(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_278(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_278(iParam0)]->f_8), true);
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
		func_309(func_278(iParam0), iVar6, func_308());
	}
	else if (iVar0 == 8)
	{
		func_311(func_278(iParam0), iVar6, func_308(), func_310());
	}
	if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
	{
		iVar9 = func_312(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_313(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_314(func_278(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_315((iVar10 - 20), 0, iVar10);
					iVar11 = func_315((iVar11 - 10), 0, iVar11);
				}
				func_316(1);
				func_317(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_317(45, 0, 1);
				break;
			case 8:
				iVar10 = func_318(func_278(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_315((iVar10 - 20), 0, iVar10);
					iVar11 = func_315((iVar11 - 10), 0, iVar11);
				}
				func_317(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_319(func_278(iParam0)))
				{
					func_320(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_317(120, 0, 1);
				break;
			case 2:
				func_317(120, 0, 1);
				break;
			case 6:
				func_317(func_322(func_321(iParam0)), 0, 1);
				break;
			case 5:
				func_317(120, 0, 1);
				break;
		}
	}
	func_211(iParam0, 1);
	func_303(iParam0, func_291());
	func_212(iParam0);
	if ((!func_199(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_204(iParam0);
		if (iVar12 != -1)
		{
			func_205(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_206();
			if (iVar12 != -1)
			{
				func_205(0);
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
				switch (func_278(iParam0))
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
				if (func_279(func_278(iParam0)) && func_307((*Global_1347702)[func_278(iParam0)]->f_12, 4))
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
				if (func_278(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_278(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
	{
		if (bParam3)
		{
			func_207(iParam0, 6);
		}
		else
		{
			func_207(iParam0, 5);
		}
		func_212(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_278(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_323();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_324(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1267972061);
						func_324(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1619534881);
						func_324(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-755457379);
						func_324(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1015404643);
						func_324(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1724192342);
						func_324(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(1310680212);
						func_324(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-566881549);
						func_324(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-1753730528);
						func_324(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(147796381);
						func_324(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(-378547623);
						func_324(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(829545206);
						func_324(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_325(891318243);
						func_324(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_326();
						func_327(967523420);
						func_328();
						func_329();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_330(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_324(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_331(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_331(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_332(304805134, 1, 1);
						if (!func_333((*Global_1347702)[21]->f_15, 1))
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
						func_334();
						break;
					case 26:
						func_335();
						break;
					case 17:
						func_336(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_337())
						{
							func_338(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_339(-514575035, -1))
						{
							iVar15 = func_291();
							func_340(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_341(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_337())
						{
							func_338(1529685685);
						}
						break;
					case 34:
						if (func_337())
						{
							func_338(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_342();
						break;
					case 37:
						func_343();
						if (func_344())
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
						func_345();
						break;
					case 43:
						func_346();
						break;
					case 44:
						if (!func_333((*Global_1347702)[82]->f_15, 1))
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
						if (!func_333((*Global_1347702)[83]->f_15, 1))
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
						func_347();
						break;
					case 59:
						func_348();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_349();
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
						func_350();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_331(451, 0);
						}
						if (!func_351(-1992824800))
						{
							if (func_351(1520110311))
							{
								iVar16 = func_291();
								func_340(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_341(1937177603, iVar16, 1);
							}
						}
						if (func_352(4))
						{
							if (!func_353(684296857, 1, 0))
							{
								iVar17 = func_291();
								func_340(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_341(-1439688706, iVar17, 1);
							}
						}
						func_324(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_354(89200);
						func_354(2300);
						func_354(2300);
						break;
					case 68:
						func_355();
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
						func_356();
						func_354(-139100);
						break;
					case 69:
						if (func_333((*Global_1347702)[9]->f_15, 1))
						{
							func_354(-6000);
						}
						break;
					case 70:
						func_354(23400);
						func_354(1900);
						func_354(-15000);
						break;
					case 71:
						func_354(-5500);
						break;
				}
				break;
			case 8:
				switch (func_278(iParam0))
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
						func_357();
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
						func_358();
						break;
					case 66:
						func_359();
						func_360();
						break;
					case 67:
						if (!func_361(6))
						{
							func_362(6);
						}
						if (!func_361(3))
						{
							func_362(3);
						}
						if (func_337())
						{
							func_338(1534638301);
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
						if (func_333((*Global_1835011)[69]->f_1, 1))
						{
							func_363(0);
							func_354(40500);
						}
						else
						{
							func_363(0);
							func_354(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_278(iParam0))
				{
					case 0:
						switch (func_321(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_364(iParam0);
		func_365();
		switch (iVar0)
		{
			case 1:
				switch (func_278(iParam0))
				{
					case 4:
						func_366(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_366(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_366(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_366(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_366(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_366(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_366(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_367(iParam0);
						func_366(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_366(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_366(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_353(-2046502963, 1, 0))
						{
							func_324(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_366(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_366(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_366(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_367(iParam0) == 0)
						{
							func_366(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_366(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_307((*Global_1347702)[func_278(iParam0)]->f_12, 536870912))
				{
					func_368(11, 1);
				}
				switch (func_278(iParam0))
				{
					case 109:
						func_366(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_368(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_366(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_366(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_366(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_366(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_369(0, 10, 11, 2116153146))
				{
					func_366(iParam0, func_367(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 7, 11, -379687487))
				{
					func_366(iParam0, func_370(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 8, 11, -1386089015))
				{
					func_366(iParam0, func_370(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 11, 11, -1952009645))
				{
					func_366(iParam0, func_370(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_369(0, 12, 11, 2065895756))
				{
					func_366(iParam0, func_370(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_199(iParam0) == 0)
			{
				if (func_198(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_198(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_201(func_200(iParam0), func_198(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_278(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_372(func_371(Global_1879514->f_1));
						if (iVar0 == 8 && func_278(iParam0) == 58)
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
						if (func_279(func_278(iParam0)) && func_307((*Global_1347702)[func_278(iParam0)]->f_12, 1))
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
			func_373(bParam2, iVar20);
		}
	}
	func_210(1);
	if ((bVar13 || func_129()) && (func_200(iParam0) == 1 || func_200(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_198(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_201(func_200(iParam0), func_198(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_200(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_369(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_374();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_197(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_196(iParam0))
	{
		if (!func_199(iParam0) == 5 && !func_199(iParam0) == 6)
		{
			if (bParam1)
			{
				func_207(iParam0, 6);
			}
			else
			{
				func_207(iParam0, 5);
			}
			func_212(iParam0);
		}
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (func_278(iParam0))
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
			switch (func_278(iParam0))
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
	vVar2 = { func_375((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_376(vVar2, uVar1, uVar0, 0);
	func_377(vVar2);
	Global_40.f_9.f_15 = func_378(vVar2, 0);
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
	func_379();
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
	func_380(Var10, 0);
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
	if (!func_195(iParam0))
	{
		return;
	}
	if (iParam0 != func_208(0))
	{
		return;
	}
	if (func_198(iParam0) == 0)
	{
	}
	iVar0 = func_200(iParam0);
	if (func_199(iParam0) == 3)
	{
		if (func_198(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_198(iParam0)))
		{
			if (func_200(iParam0) != 1 && func_200(iParam0) != 8)
			{
				func_201(func_200(iParam0), func_198(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_212(iParam0);
	func_40(1);
	func_209(0);
	func_207(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_316(1);
			func_317(15, 0, 1);
			break;
		case 4:
			func_317(10, 0, 1);
			break;
		case 8:
			func_317(10, 0, 1);
			break;
		case 9:
			func_317(10, 0, 1);
			break;
		case 2:
			func_317(10, 0, 1);
			break;
		case 6:
			func_317(10, 0, 1);
			break;
		case 5:
			func_317(10, 0, 1);
			break;
	}
	func_210(1);
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
	if (func_381(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_382(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_382(&(Global_1347343->f_11), 16384);
	}
	if (func_383() >= 2)
	{
		if (!func_381(Global_1347343->f_11, 16384))
		{
			func_382(&(Global_1347343->f_11), 8);
		}
		func_216(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_235(Global_1935630, 2048);
	func_384(bParam5);
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
			func_385(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_203(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_386(cParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_387(&(uParam0->f_7375));
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
	return func_388() != -1;
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
	func_389(cParam0);
	cParam0->f_634[0] = 57841;
	cParam0->f_634[1] = 57841;
	cParam0->f_637 = 0;
	func_391(cParam0, *uParam1);
	func_392(cParam0);
}

void func_109(char[4] cParam0)
{
	func_393(cParam0, 6418928);
	func_394(cParam0, 18);
	func_103(cParam0, 1);
	if (!func_105() && !func_128(cParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (17 - 1))
		{
			if (iVar0 == 0)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, -1537933036, 0));
			}
			else if (iVar0 == 1)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, 624070311, 0));
			}
			else if (iVar0 == 4)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, 2003418568, 0));
			}
			else if (iVar0 == 6)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, 2064348393, 0));
			}
			else if (iVar0 == 2)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, -82199229, 0));
			}
			else if (iVar0 == 3)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, -624124479, 0));
			}
			else if (iVar0 == 5)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, 1467658477, 0));
			}
			else if (iVar0 == 7)
			{
				iLocal_75[iVar0] = get_object_index_from_entity_index(func_395(cParam0, 305182125, 0));
			}
			if (!is_entity_dead(&(iLocal_75[iVar0])))
			{
				func_397(cParam0, &(iLocal_75[iVar0]), func_396(&(iLocal_75[iVar0])), 0, 0, 0, 0);
			}
			iVar0++;
		}
		if (!does_entity_exist(iLocal_72))
		{
			iLocal_72 = get_vehicle_index_from_entity_index(func_395(cParam0, 822759307, 0));
			if (!is_entity_dead(iLocal_72))
			{
				func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
				set_vehicle_is_considered_by_player(iLocal_72, true);
				iLocal_49 = func_398();
				if (does_entity_exist(iLocal_49))
				{
					func_399();
				}
			}
		}
	}
}

char[] func_110(int iParam0)
{
	if (!func_194(iParam0))
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
			func_400(iVar0, iVar1);
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
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 33554432);
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
	return func_401(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_402(&(cParam0->f_7375));
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
	return func_403(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_404(Param0, Param0.f_3);
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
	if (!func_405())
	{
		return false;
	}
	if (!func_333((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_333((*Global_1835011)[2]->f_1, 1) && func_333((*Global_1347702)[120]->f_15, 1)) && !func_333((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_333((*Global_1835011)[37]->f_1, 1) && !func_333((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_333((*Global_1835011)[57]->f_1, 1) && !func_333((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_333((*Global_1835011)[26]->f_1, 1) && !func_333((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_333((*Global_1835011)[62]->f_1, 1) && func_333((*Global_1835011)[63]->f_1, 1)) && !func_333((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_333((*Global_1835011)[75]->f_1, 1) && !func_333((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_333((*Global_1835011)[76]->f_1, 1) && !func_333((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_333((*Global_1835011)[40]->f_1, 1) && func_333((*Global_1835011)[41]->f_1, 1)) && !func_333((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_333((*Global_1835011)[62]->f_1, 1) && func_333((*Global_1835011)[63]->f_1, 1)) && !func_333((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_333((*Global_1835011)[65]->f_1, 1) && func_333((*Global_1835011)[66]->f_1, 1)) && !func_333((*Global_1835011)[67]->f_1, 1))
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
	if (func_406(vParam1))
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
	func_225(&(cParam0->f_603));
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
		return func_407();
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
		func_408(cParam0->f_607);
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
	func_409(&(cParam0->f_638));
	func_410(&(cParam0->f_819));
	func_411(&(cParam0->f_1020));
	func_412(&(cParam0->f_1081));
	func_413(&(cParam0->f_1126));
	func_414(&(cParam0->f_5147));
	func_415(&(cParam0->f_1124));
	func_416(&(cParam0->f_5188));
	func_417(&(cParam0->f_5239));
	func_418(&(cParam0->f_5249));
	func_419(&(cParam0->f_5265));
	func_420(&(cParam0->f_5286));
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
	func_421(cParam0, -1038436471, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(cParam0, 2030804811, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(cParam0, 96930969, ((iLocal_33 || iLocal_34) || iLocal_35));
	func_421(cParam0, 822759307, 67108863);
	func_421(cParam0, -1693870200, 67108863);
	func_421(cParam0, 2064348393, iLocal_28);
	func_421(cParam0, -1537933036, iLocal_28);
	func_421(cParam0, 624070311, iLocal_28);
	func_421(cParam0, -82199229, iLocal_28);
	func_421(cParam0, -624124479, iLocal_28);
	func_421(cParam0, 2003418568, iLocal_28);
	func_421(cParam0, 1467658477, iLocal_28);
	func_421(cParam0, 305182125, iLocal_28);
	func_421(cParam0, -1726458124, ((((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_34) || iLocal_35));
	func_421(cParam0, -969349845, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, -1698780291, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, -1643891339, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, -459043872, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, 1610236838, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, 1561132816, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, 1825744405, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, -1473388640, ((iLocal_30 || iLocal_31) || iLocal_32));
	func_421(cParam0, 292812873, (((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_33));
	func_421(cParam0, 1343564320, (iLocal_33 || iLocal_34));
	func_421(cParam0, -1090280091, iLocal_30);
	func_421(cParam0, -51068900, iLocal_30);
	func_421(cParam0, 626176009, iLocal_33);
	func_421(cParam0, 1596452133, iLocal_30);
	func_421(cParam0, 1255849914, iLocal_30);
	func_422(cParam0, -973836254, (((((((iLocal_32 || iLocal_33) || iLocal_34) || iLocal_35) || iLocal_36) || iLocal_37) || iLocal_38) || iLocal_39));
	func_423(cParam0, "mar2_drive_out_ranch", iLocal_28, 2, -1);
	func_423(cParam0, "mar2_ride_ambush", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	func_423(cParam0, "mar2_ride_ambush2", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	func_423(cParam0, "mar2_drive_in_ranch", iLocal_38, 2, -1);
	func_423(cParam0, "mar2_ride_after_ambush", iLocal_37, 2, -1);
	func_423(cParam0, "mar2_dog", iLocal_33, 2, -1);
	func_424(cParam0, "script_respawn@horse@mounted_unarmed", (iLocal_33 || iLocal_34));
	func_425(cParam0, "script@story@MAR2@leadout@int@leadout", uLocal_202[0], iLocal_28, 0, "pl_leadout", 0, 1);
	func_425(cParam0, "script@story@MAR2@IG@IG_2_GiveJackReins@IG_2_GiveJackReins", uLocal_202[1], iLocal_29, 0, 0, 0, 1);
	func_425(cParam0, "script@story@MAR2@IG@IG_3_JohnExitWagon@IG_3_JohnExitWagon", uLocal_202[2], iLocal_31, 0, 0, 0, 1);
	func_425(cParam0, "script@story@MAR2@IG@IG_5_JackDrivesWagon@IG_5_JackDrivesWagon", uLocal_202[4], iLocal_32, 0, 0, 0, 1);
	func_425(cParam0, "script@story@MAR2@IG@IG_6_JackTurnsLeft@IG_6_JackTurnsLeft", uLocal_202[5], iLocal_34, 0, "pbl_jack_fakes_turns", 0, 1);
	func_425(cParam0, "script@story@MAR2@IG@IG_7_JackHidesinForest@base", uLocal_202[6], (iLocal_35 || iLocal_36), 0, "pbl_base", 0, 1);
	func_425(cParam0, func_426(), uLocal_202[7], iLocal_35, 0, "pl_ig9_posse_enter", 0, 1);
	func_425(cParam0, "script@story@mar2@leadout@ext@base", uLocal_202[8], iLocal_39, 0, 0, 0, 1);
	func_425(cParam0, "script@story@mar2@leadin@mcs_2@leadin_ilo", uLocal_202[9], (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	func_425(cParam0, "script@story@mar2@leadin@mcs_2@base_criminalped", uLocal_202[10], (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	func_425(cParam0, "script@proc@roamingthugs@laramie@action", uLocal_202[11], iLocal_30, 0, 0, 0, 1);
	func_427(cParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FL@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	func_427(cParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	func_429(cParam0, &(uLocal_202[7]), func_428(0), iLocal_35);
	func_429(cParam0, &(uLocal_202[7]), func_428(1), iLocal_35);
	func_429(cParam0, &(uLocal_202[7]), func_428(2), iLocal_35);
	func_429(cParam0, &(uLocal_202[9]), "pl_leadin", (iLocal_30 || iLocal_31));
	func_429(cParam0, &(uLocal_202[10]), "pl_loop", (iLocal_30 || iLocal_31));
	func_429(cParam0, &(uLocal_202[11]), "PL_ACTION", iLocal_30);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_430(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
}

void func_142(char[4] cParam0, int iParam1)
{
	func_431(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_275(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_276(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_432(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_261(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_433() };
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
	func_434(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_435(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_397(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_385(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_194(iParam0))
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
		if (func_436(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_437(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_436(cParam0, func_33(cParam0), 1))
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
	if (func_438(cParam0) < 1)
	{
		func_439(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_441(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_442(cParam0);
		}
	}
	switch (func_438(cParam0))
	{
		case -1:
		case 0:
			func_443(cParam0, 1);
			break;
		case 1:
			if (func_444(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_443(cParam0, 2);
				}
				else
				{
					func_443(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_445(cParam0))
			{
				func_443(cParam0, 3);
			}
			break;
		case 3:
			if (func_446(cParam0))
			{
				func_443(cParam0, 4);
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
		func_447(cParam0, 0);
		return true;
	}
	if (func_448(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_447(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_448(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!_is_metaped_using_component(iParam0, -1725579161))
		{
			_set_ped_body_component(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (_is_metaped_using_component(iParam0, -1725579161))
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			_update_ped_variation(iParam0, false, true, true, true, false);
		}
	}
}

void func_164(int iParam0)
{
	if (!does_entity_exist(&(uLocal_46[0])))
	{
		return;
	}
	if (_0x7c8aa850617651d9(&(uLocal_46[0]), -459229789))
	{
		_0x2b4ce170de09f346(&(uLocal_46[0]), -459229789);
	}
	if (_0x7c8aa850617651d9(&(uLocal_46[0]), -1308635034))
	{
		_0x2b4ce170de09f346(&(uLocal_46[0]), -1308635034);
	}
	_0x660a8f876df1d4f8(8);
	_0x660a8f876df1d4f8(24);
	_0x660a8f876df1d4f8(13);
	_0x660a8f876df1d4f8(12);
	_0x660a8f876df1d4f8(10);
	_0x660a8f876df1d4f8(21);
	_0x660a8f876df1d4f8(3);
	_0x660a8f876df1d4f8(5);
	_0x660a8f876df1d4f8(14);
	if (iParam0 == 0)
	{
	}
	else if (iParam0 == 1)
	{
		_0x1e017404784aa6a3(&(uLocal_46[0]), -459229789);
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		_0x1e017404784aa6a3(&(uLocal_46[0]), -1308635034);
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		_0x0d7fd6a55fd63aef(8, 3, 1);
		_0x0d7fd6a55fd63aef(24, 3, 1);
		_0x0d7fd6a55fd63aef(13, 3, 1);
		_0x0d7fd6a55fd63aef(12, 3, 1);
		_0x0d7fd6a55fd63aef(10, 3, iParam0 != 3);
		_0x0d7fd6a55fd63aef(21, 3, 1);
		_0x0d7fd6a55fd63aef(3, 3, 1);
		_0x0d7fd6a55fd63aef(5, 3, 1);
		_0x0d7fd6a55fd63aef(14, 3, 1);
	}
}

bool func_165()
{
	return func_449(1);
}

void func_166(float fParam0)
{
	if (func_450(1) < fParam0)
	{
		func_451(1, fParam0, 0);
	}
	if (func_450(2) < fParam0)
	{
		func_451(2, fParam0, 0);
	}
	if (func_450(0) < fParam0)
	{
		func_451(0, fParam0, 0);
	}
}

void func_167()
{
	if (!is_entity_dead(Global_35))
	{
		if (has_ped_got_weapon(Global_35, 1999408598, 0, false))
		{
			func_452(1999408598);
		}
		if (has_ped_got_weapon(Global_35, 1845102363, 0, false))
		{
			func_452(1845102363);
		}
		if (has_ped_got_weapon(Global_35, -183018591, 0, false))
		{
			func_452(-183018591);
		}
		if (has_ped_got_weapon(Global_35, -1783478894, 0, false))
		{
			func_452(-1783478894);
		}
	}
}

void func_168()
{
	if (!is_entity_dead(Global_35))
	{
		_0x0eabf182fbb63d72(Global_35, 6, 0);
	}
	if (!is_entity_dead(&(iLocal_50[1])))
	{
		_0x0eabf182fbb63d72(&(iLocal_50[1]), 6, 0);
	}
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_453(7);
		func_453(0);
		func_453(1);
	}
	else
	{
		func_454();
		func_455(7);
		func_455(0);
		func_455(1);
	}
}

int func_170(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_458(func_457(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_459(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_459(iParam0));
	return 1;
}

void func_171(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_456(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_172(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_173(bool bParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (_does_volume_exist(&(iLocal_93[iVar0])))
		{
			if (bParam0)
			{
				func_460(&(iLocal_93[iVar0]), 0, 0, 0);
			}
			else
			{
				func_172(&(iLocal_93[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_174(int iParam0)
{
	iVar0 = 22;
	while (iVar0 <= 24)
	{
		if (_does_volume_exist(&(iLocal_93[iVar0])))
		{
			_0xf2a2177ac848b3a8(&(iLocal_93[iVar0]), iParam0, 1);
		}
		iVar0++;
	}
}

void func_175(int iParam0)
{
	if (_does_volume_exist(&(iLocal_93[14])))
	{
		_0xf2a2177ac848b3a8(&(iLocal_93[14]), iParam0, 1);
	}
}

void func_176(char[4] cParam0)
{
	func_461(cParam0, &(uLocal_46[0]), 1);
	func_462(&iLocal_41);
	func_463(&uLocal_42);
}

void func_177()
{
	func_464(&uLocal_215);
	func_464(&uLocal_218);
	func_464(&uLocal_249);
	func_464(&uLocal_221);
	func_465(&vLocal_224);
	func_465(&vLocal_239);
	func_465(&vLocal_231);
	func_465(&uLocal_235);
}

void func_178()
{
	if (!func_466(18))
	{
		return;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (_does_volume_exist(&(iLocal_93[&iVar0[iVar5]])))
		{
			func_172(&(iLocal_93[&iVar0[iVar5]]));
			_0xe5ef9de716ff737e(&(iLocal_93[&iVar0[iVar5]]), 1, 0);
		}
		iVar5++;
	}
	func_467(18, 0);
}

void func_179()
{
	if (_0x91a5f9cbebb9d936(uVar332))
	{
		remove_scenario_blocking_area(uVar332, false);
	}
	if (_0x91a5f9cbebb9d936(uVar333))
	{
		remove_scenario_blocking_area(uVar333, false);
	}
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (_does_volume_exist(&(iLocal_93[iVar0])))
		{
			_delete_volume(&(iLocal_93[iVar0]));
		}
		iVar0++;
	}
}

void func_180()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_181(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
	}
	if (_does_propset_exist(iLocal_166))
	{
		_delete_propset(iLocal_166, true, true);
	}
	func_469();
}

void func_182(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
		func_470(&iLocal_72, 0);
	}
	else
	{
		func_470(&iLocal_72, 0);
	}
}

void func_183(char[4] cParam0)
{
	if (func_22(cParam0) == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (func_264(13))
				{
					func_265(cParam0, 13, &(uLocal_46[iVar0]), 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(1);
		func_472(&iLocal_49, 1);
		func_473(&iLocal_50, 1);
		func_473(&iLocal_54, 1);
		func_474();
		func_472(&iLocal_66, 0);
		func_472(&iLocal_67, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (func_264(13))
				{
					func_265(cParam0, 13, &(uLocal_46[iVar0]), 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(0);
		func_472(&iLocal_49, 0);
		func_473(&iLocal_50, 0);
		func_473(&iLocal_54, 0);
		func_474();
		func_472(&iLocal_66, 0);
		func_472(&iLocal_67, 0);
	}
}

void func_184()
{
	if (_does_scenario_point_exist(iLocal_165))
	{
		_delete_scenario_point(iLocal_165);
	}
}

void func_185()
{
	if (func_10(iVar279))
	{
		func_475(iVar279, 0, 1);
		func_476(iVar279, 0, 1);
		func_11(&uLocal_281, 1, 1);
	}
	if (func_10(iVar280))
	{
		func_475(iVar280, 0, 1);
		func_476(iVar280, 0, 1);
		func_11(&uLocal_282, 1, 1);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 1);
	}
	else
	{
		func_479(iParam0, 1);
	}
	func_481(func_480(iParam0), bParam1);
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_482(iParam0))
		{
			func_479(iParam0, 67108864);
		}
	}
	else if (func_482(iParam0))
	{
		func_478(iParam0, 67108864);
	}
}

void func_188(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_483(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_484(iParam0, 4))
		{
			func_485(iParam0, 4);
		}
	}
	else
	{
		func_486(iParam0, 4);
	}
	func_487(iParam0);
}

void func_189(int iParam0, bool bParam1)
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

void func_190()
{
	if (_0x7409669c5ed50144(-1392528840))
	{
		_0x50b72a754ee64a71(-1392528840);
	}
}

void func_191(bool bParam0, float fParam1)
{
	clear_bit(&(Global_1934765->f_301), 1);
	func_488(bParam0, fParam1);
}

int func_192(int iParam0)
{
	return iParam0;
}

void func_193(int iParam0)
{
	if (!func_489(iParam0))
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

bool func_194(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_196(int iParam0)
{
	iVar0 = func_302(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_197(int iParam0)
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
		iVar0 = func_199(iParam0);
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

int func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_199(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_490(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_200(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	return func_492(func_491(iParam0));
}

void func_201(int iParam0, int iParam1, int iParam2)
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

bool func_202(int iParam0, bool bParam1, bool bParam2)
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
		if (func_493())
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
		iVar0 = func_278(&(Global_1898164->f_1[0]));
		if (func_279(iVar0) && func_307((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_195(&(Global_1898164->f_1[0])))
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

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_204(int iParam0)
{
	switch (func_200(iParam0))
	{
		case 1:
			iVar0 = func_278(iParam0);
			return func_494(iVar0);
		case 8:
			iVar1 = func_278(iParam0);
			if (func_307((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_495(iVar1);
			}
			break;
	}
	return -1;
}

void func_205(bool bParam0)
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
		func_496(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_497();
		Global_1898077->f_9 = func_498(Global_1894899->f_2);
		func_499(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_206()
{
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_333((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_333((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_333((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_333((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_333((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_333((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_207(int iParam0, int iParam1)
{
	if (!func_195(iParam0))
	{
		return;
	}
	func_500(iParam0, iParam1);
}

int func_208(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_209(bool bParam0)
{
	if (!bParam0 && func_501(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_210(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_211(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_208(0) != iParam0)
	{
		return;
	}
	if (func_502(iParam0))
	{
		if (bParam1)
		{
			func_503(-525676072);
		}
		else
		{
			func_504(-525676072);
		}
	}
}

int func_212(int iParam0)
{
	return func_506(func_505(iParam0));
}

void func_213(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_214(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_215(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_216(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_217()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_218()
{
	return func_507(_0xc17f69e1418cd11f(3));
}

bool func_219()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_220(int iParam0)
{
	iParam0 = func_272(iParam0);
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

int func_221(int iParam0, int iParam1)
{
	if (!func_508(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_509(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_222(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_223(char* sParam0, bool bParam1)
{
	if (func_222(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_510(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_510(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_510(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_510(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_510(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_510(sParam0, 1);
		return true;
	}
	func_510(sParam0, 1);
	return false;
}

bool func_224(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_225(var uParam0)
{
	func_511(uParam0, 0f);
}

int func_226(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_512(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_513() - round((uParam0->f_1 * 1000f)));
}

void func_227(bool bParam0, bool bParam1)
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
		func_514(0);
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

struct<4> func_228(int iParam0, int iParam1)
{
	return func_515(iParam0, iParam1);
}

void func_229(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

bool func_230(int iParam0)
{
	return (Global_40.f_9.f_21 && iParam0) != 0;
}

int func_231(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_232(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_200(iParam0) == 1)
	{
		cVar0 = func_110(func_516(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_200(iParam0) == 8)
	{
		cVar0 = func_518(func_517(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_519(1, 1);
	func_520(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_216(1f);
}

void func_233(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_510(sParam0, 2);
}

void func_234(int iParam0, int iParam1)
{
	if (!func_521(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_236()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_237()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_238()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_239()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_240()
{
	return func_522(get_id_of_this_thread());
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_523(bParam0);
}

void func_242()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_244()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_245(var uParam0)
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

void func_246(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_247(int iParam0)
{
	if (!func_524(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_248()
{
	func_525(64);
}

void func_249()
{
	Global_1310750->f_16072 = 0;
}

bool func_250()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_251(int iParam0)
{
	return func_252(23, iParam0);
}

bool func_252(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_526(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_527())
	{
		return func_526(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_526(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_253(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_254(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 8);
}

void func_255(int iParam0, int iParam1)
{
	if (!func_253(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_256(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_257(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_258(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_259()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_257(iVar1, 1))
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
			else if (func_257(iVar1, 2))
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
				func_294(iVar1, 11);
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

bool func_260(var uParam0)
{
	if (func_528(uParam0, 1) || func_528(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_262(struct<2> Param0)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_263(struct<2> Param0, int iParam2)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_264(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	if (!func_530(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_265(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_529(iParam1))
	{
		return;
	}
	if (!func_264(iParam1))
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
		func_531(cParam0, iParam2);
		func_532(iParam2);
	}
	func_533(iParam1);
	func_534(iParam1, 0);
	func_535(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_266(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_269(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_536(iParam0);
	if (func_537(iParam0))
	{
		if (func_268(iParam0) != iVar0)
		{
			return;
		}
	}
	func_538(iParam0);
	func_539(iParam0);
	iVar1 = func_220(iParam0);
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
			if (!func_540(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_541(iParam0);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_542(iParam0))
	{
		return;
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_536(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_268(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_537(iVar0))
		{
			return;
		}
	}
	func_543(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_271(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_272(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_273(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

void func_274()
{
	if (func_544(0))
	{
		func_545(0);
	}
	if (func_544(1))
	{
		func_545(1);
	}
	if (func_544(5))
	{
		func_545(5);
	}
	if (func_544(6))
	{
		func_538(6);
	}
}

struct<2> func_275(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_276(int iParam0)
{
	Var0 = { func_275(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_277(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_278(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_546(func_491(iParam0));
}

bool func_279(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_280(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_281(int iParam0, bool bParam1)
{
	iVar0 = func_547(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_548(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_548(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_548(iParam0)))
			{
				_uilog_remove_entry(2, func_548(iParam0));
			}
		}
	}
	func_549(iParam0, 4);
	func_549(iParam0, 8);
	func_549(iParam0, 16);
}

void func_282(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_279(iVar0))
		{
			if (func_280(iVar0, 4))
			{
				func_283(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_283(int iParam0, bool bParam1)
{
	if (!func_280(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_547(iParam0), func_548(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_547(iParam0), func_548(iParam0), 2, "");
		func_550(iParam0, 16);
	}
	else
	{
		if (func_280(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_547(iParam0), func_548(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_547(iParam0), func_548(iParam0), 0, "");
		}
		func_549(iParam0, 16);
	}
}

void func_284(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_280(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_547(iParam0), func_548(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_280(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_547(iParam0), func_548(iParam0), 1, "");
		}
		func_550(iParam0, 8);
	}
	else
	{
		if (func_280(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_547(iParam0), func_548(iParam0), 0, "");
		}
		func_549(iParam0, 8);
	}
}

int func_285(char[4] cParam0)
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

void func_286(int iParam0, int iParam1)
{
	if (func_544(0))
	{
		if (func_551(0))
		{
			func_552(0);
		}
	}
	if (func_544(1))
	{
		if (func_551(1))
		{
			func_552(1);
		}
	}
}

void func_287(char[4] cParam0)
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
		if (func_440(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_288(char[4] cParam0)
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

void func_289(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_553(iParam0, sParam4, iParam5);
	}
	func_554(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_290(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_291()
{
	return &Global_1899515;
}

void func_292(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_293(int iParam0, int iParam1)
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

void func_294(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_295(int iParam0)
{
	if (!func_253(iParam0))
	{
		return;
	}
	if (func_555(iParam0))
	{
		func_556(iParam0);
	}
	else
	{
		func_557(iParam0);
	}
}

int func_296(int iParam0)
{
	if (func_558(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (func_559(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_298(int iParam0, int iParam1)
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

void func_299(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_560(Global_1310750[iVar0], iParam0))
		{
			if (!func_561(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_562(iVar0) < func_563(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_301(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_300(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_564();
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

void func_301(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_565(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_302(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_199(iParam0);
}

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_304(bool bParam0, int iParam1)
{
	if (!bParam0 && func_501(373691918))
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
	func_209(bParam0);
	return 1;
}

void func_305()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_529(iVar17))
		{
			iVar18 = func_566(iVar17);
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
	func_464(&(Global_1359489->f_55));
	if (func_567(1777191912, 1))
	{
		func_568(1777191912, 1, 0);
	}
}

void func_306(int iParam0)
{
	if (!func_195(iParam0))
	{
		return;
	}
	func_570(iParam0, (func_569(iParam0) + shift_left(1, 16)));
}

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_308()
{
	return func_571() > 0;
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_572(-1032423150, iParam1);
			break;
		case 18:
			func_572(294066959, iParam1);
			func_572(-1925639563, iParam1);
			func_572(-378582304, iParam1);
			func_572(-338306437, iParam1);
			break;
		case 20:
			func_572(437270255, iParam1);
			break;
		case 2:
			func_572(-304000413, iParam1);
			func_572(-533612796, iParam1);
			func_572(48036954, iParam1);
			break;
		case 23:
			func_572(193108691, iParam1);
			func_572(491732588, iParam1);
			func_572(671962088, iParam1);
			func_573(1);
			break;
		case 16:
			func_572(-1836056650, iParam1);
			func_572(-754657922, iParam1);
			func_572(-1752355838, iParam1);
			func_572(-1375324510, iParam1);
			break;
		case 59:
			func_572(-514392105, iParam1);
			func_572(-822060246, iParam1);
			if (func_574(146))
			{
				func_572(1372748575, iParam1);
			}
			func_573(1);
			break;
		case 76:
			func_572(1991352213, iParam1);
			if (func_575() == 0)
			{
				func_572(1852488616, iParam1);
			}
			else
			{
				func_572(-9866350, iParam1);
			}
			break;
		case 44:
			func_572(863852599, iParam1);
			func_572(1228374935, iParam1);
			func_572(1517889050, iParam1);
			func_572(830657578, iParam1);
			func_572(1901354958, iParam1);
			break;
		case 46:
			func_572(-582805654, iParam1);
			func_572(250378940, iParam1);
			func_572(-2143265426, iParam1);
			break;
		case 17:
			func_572(-941494139, iParam1);
			func_572(1641489521, iParam1);
			break;
		case 19:
			func_572(-1829423531, iParam1);
			func_572(-1590504752, iParam1);
			func_572(1357221321, iParam1);
			break;
		case 21:
			func_572(-1037992610, iParam1);
			func_572(-1286414399, iParam1);
			func_573(0);
			break;
		case 15:
			func_572(-1014460309, iParam1);
			func_572(-1030502825, iParam1);
			break;
		case 33:
			func_572(479388090, iParam1);
			func_572(-1396342239, iParam1);
			func_572(-619618632, iParam1);
			break;
		case 34:
			func_572(1193561641, iParam1);
			break;
		case 64:
			func_572(1363960851, iParam1);
			break;
		case 60:
			func_572(-1232453926, iParam1);
			func_572(-882833584, iParam1);
			break;
		case 73:
			func_572(2023205767, iParam1);
			break;
		case 74:
			func_572(-2135286513, iParam1);
			if (func_575() == 0)
			{
				func_572(33799444, iParam1);
			}
			else
			{
				func_572(-161343203, iParam1);
			}
			break;
		case 8:
			func_572(841639693, iParam1);
			func_572(358952323, iParam1);
			break;
		case 36:
			func_572(852538149, iParam1);
			func_572(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_572(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(1116039310, iParam1);
			}
			break;
		case 27:
			func_572(107633428, iParam1);
			func_572(335902282, iParam1);
			func_572(575673055, iParam1);
			func_572(-425944207, iParam1);
			break;
		case 28:
			func_572(-1941530250, iParam1);
			func_572(1399269304, iParam1);
			func_572(1839684664, iParam1);
			func_572(923168503, iParam1);
			func_572(-1485078322, iParam1);
			break;
		case 29:
			func_572(574995900, iParam1);
			func_572(-1691275407, iParam1);
			func_572(-1725307861, iParam1);
			break;
		case 31:
			func_572(-2108383238, iParam1);
			func_572(-1321828931, iParam1);
			func_572(-1632118592, iParam1);
			func_572(334938948, iParam1);
			break;
		case 4:
			func_572(115823701, iParam1);
			func_572(-1896939736, iParam1);
			func_572(-1830746356, iParam1);
			func_572(-1235169781, iParam1);
			func_573(0);
			break;
		case 6:
			func_572(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-384176140, iParam1);
			}
			break;
		case 25:
			func_572(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_572(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-1374849484, iParam1);
			}
			break;
		case 48:
			func_572(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(217772674, iParam1);
			}
			else
			{
				func_572(2071798160, iParam1);
			}
			if (func_576(51))
			{
				func_572(-792802286, iParam1);
			}
			break;
		case 49:
			func_572(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_572(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_572(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_572(1402120602, iParam1);
			}
			break;
		case 58:
			func_572(-1661934591, iParam1);
			break;
		case 50:
			func_572(-1713759426, iParam1);
			break;
		case 52:
			func_572(-314799932, iParam1);
			func_572(-462260432, iParam1);
			func_572(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_572(345256028, iParam1);
				func_572(-1635084094, iParam1);
			}
			else
			{
				func_572(114267347, iParam1);
			}
			break;
		case 32:
			func_572(615304157, iParam1);
			break;
		case 47:
			func_572(415434835, iParam1);
			break;
		case 69:
			func_572(1373465877, iParam1);
			if (func_333((*Global_1347702)[9]->f_15, 1))
			{
				func_572(-2058273527, iParam1);
			}
			break;
		case 70:
			func_572(451334985, iParam1);
			if (func_575() == 0)
			{
				func_572(-224150200, iParam1);
			}
			else
			{
				func_572(289012628, iParam1);
			}
			break;
		case 71:
			if (func_575() == 0)
			{
				func_572(-41692120, iParam1);
			}
			else
			{
				func_572(1537840678, iParam1);
			}
			break;
		case 37:
			func_572(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_572(1842132550, iParam1);
			}
			else
			{
				func_572(-785735240, iParam1);
			}
			func_572(-1605690566, iParam1);
			break;
		case 13:
			func_572(-731367459, iParam1);
			func_572(224176585, iParam1);
			func_572(-14545580, iParam1);
			break;
		case 53:
			func_572(1095274522, iParam1);
			break;
		case 54:
			func_572(-572027988, iParam1);
			break;
		case 56:
			func_572(1339307101, iParam1);
			func_572(2102267732, iParam1);
			break;
		case 57:
			func_572(710102686, iParam1);
			break;
		case 22:
			func_572(-1754368482, iParam1);
			func_572(-2071408557, iParam1);
			break;
		case 12:
			func_572(-181334543, iParam1);
			break;
		case 0:
			func_572(-2134669864, iParam1);
			func_572(-548289709, iParam1);
			func_572(-911271922, iParam1);
			func_572(-604455775, iParam1);
			break;
		case 1:
			func_573(1);
			break;
		case 3:
			if (func_344())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_572(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_572(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_310()
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

void func_311(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_572(-145926707, iParam1);
			func_572(-604922090, iParam1);
			func_572(-848690769, iParam1);
			break;
		case 1:
			func_572(-1477631591, iParam1);
			break;
		case 2:
			func_572(76112544, iParam1);
			break;
		case 9:
			func_572(1396404308, iParam1);
			func_572(-1357381228, iParam1);
			if (func_333((*Global_1835011)[69]->f_1, 1))
			{
				func_572(1902679064, iParam1);
			}
			else
			{
				func_572(-2146422425, iParam1);
			}
			break;
		case 22:
			func_572(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_572(-1934184559, iParam1);
				func_572(1281755988, iParam1);
			}
			else
			{
				func_572(-1745220872, iParam1);
				func_572(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_572(-1641504538, iParam1);
				func_572(-988014485, iParam1);
			}
			else if (func_574(26))
			{
				func_572(-343043950, iParam1);
				func_572(-640062214, iParam1);
			}
			else
			{
				func_572(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_572(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_572(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_572(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_572(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_572(1301690984, iParam1);
				}
			}
			else
			{
				func_572(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_572(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_572(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_572(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_572(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_572(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_572(-754570528, iParam1);
			}
			else
			{
				func_572(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_572(-2072125821, iParam1);
			}
			else
			{
				func_572(270040030, iParam1);
			}
			break;
		case 37:
			func_572(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_572(-505314737, iParam1);
				func_572(-1853052860, iParam1);
			}
			else
			{
				func_572(-1975624994, iParam1);
				func_572(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_572(1690231002, iParam1);
			}
			else
			{
				func_572(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_572(1225386280, iParam1);
			}
			else if (func_574(54))
			{
				func_572(-283235773, iParam1);
			}
			else
			{
				func_572(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_572(1355398007, iParam1);
			}
			else
			{
				func_572(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_572(574636806, iParam1);
			}
			else
			{
				func_572(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_572(821118338, iParam1);
			}
			else if (func_574(39))
			{
				func_572(846829260, iParam1);
			}
			else
			{
				func_572(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_367((*Global_1835011)[33]->f_1) == 1)
				{
					func_572(1422779093, iParam1);
				}
				else
				{
					func_572(-1769536986, iParam1);
				}
			}
			else
			{
				func_572(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_572(352134789, iParam1);
			}
			else if (func_574(43))
			{
				func_572(260723113, iParam1);
			}
			else
			{
				func_572(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_572(-457958799, iParam1);
			}
			else
			{
				func_572(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_574(41))
			{
				func_572(-546824600, iParam1);
			}
			else
			{
				func_572(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_572(1297261593, iParam1);
			}
			else
			{
				func_572(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_572(2068484886, iParam1);
			}
			else if (func_574(49))
			{
				func_572(-1489080639, iParam1);
				func_572(-2102244050, iParam1);
			}
			else
			{
				func_572(-1863040467, iParam1);
			}
			break;
		case 51:
			func_572(-2055943209, iParam1);
			break;
		case 58:
			if (func_333((*Global_1347702)[23]->f_15, 1))
			{
				func_572(1650066845, iParam1);
			}
			else
			{
				func_572(151370023, iParam1);
			}
			func_572(1426057961, iParam1);
			func_572(476379584, iParam1);
			break;
		case 59:
			func_572(-1638117866, iParam1);
			break;
		case 62:
			func_572(199541730, iParam1);
			break;
		case 63:
			func_572(1703485804, iParam1);
			func_572(-800449045, iParam1);
			break;
		case 65:
			func_572(-1678210868, iParam1);
			func_572(-1448238026, iParam1);
			func_572(-1200864845, iParam1);
			func_572(1473511536, iParam1);
			break;
		case 66:
			func_572(-1774490051, iParam1);
			func_572(-34645921, iParam1);
			func_572(174027075, iParam1);
			func_572(-1155999, iParam1);
			func_573(1);
			break;
		case 67:
			func_572(701612593, iParam1);
			func_572(-1069631343, iParam1);
			func_572(1673428882, iParam1);
			break;
		case 68:
			func_572(-739133286, iParam1);
			func_572(-2130089358, iParam1);
			func_572(2056190391, iParam1);
			func_572(1941753817, iParam1);
			func_573(0);
			break;
		case 70:
			func_572(-1217555753, iParam1);
			break;
		case 71:
			func_572(697048821, iParam1);
			break;
		case 73:
			func_572(-553148661, iParam1);
			break;
		case 75:
			func_572(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_572(1414263863, iParam1);
			}
			else
			{
				func_572(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_572(1835465936, iParam1);
				func_572(523715611, iParam1);
			}
			else if (func_574(78))
			{
				func_572(1420338873, iParam1);
			}
			else
			{
				func_572(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_572(10180941, iParam1);
			}
			else if (func_574(79))
			{
				func_572(768420635, iParam1);
			}
			else
			{
				func_572(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_572(-383601523, iParam1);
			}
			else
			{
				func_572(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_572(1606472408, iParam1);
			}
			else
			{
				func_572(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_572(-203571927, iParam1);
			}
			else
			{
				func_572(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_572(729886222, iParam1);
			}
			else
			{
				func_572(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_572(-714816362, iParam1);
			}
			else
			{
				func_572(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_572(-932932179, iParam1);
				func_572(-1458537240, iParam1);
			}
			else
			{
				func_572(-1764383885, iParam1);
				func_572(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_572(1741466706, iParam1);
			}
			else
			{
				func_572(1405815775, iParam1);
			}
			break;
		case 94:
			func_572(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_572(1905280979, iParam1);
			}
			else
			{
				func_572(-1966245299, iParam1);
			}
			func_572(721468880, iParam1);
			break;
		case 99:
			func_572(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_572(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_572(-1117781095, iParam1);
				}
				else
				{
					func_572(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_572(141494548, iParam1);
			}
			else
			{
				func_572(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_572(-369525697, iParam1);
			}
			else if (func_574(101))
			{
				func_572(1595015219, iParam1);
			}
			else
			{
				func_572(-321486961, iParam1);
			}
			break;
		case 103:
			func_572(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_572(793460477, iParam1);
				func_572(-1610242176, iParam1);
			}
			else if (func_574(103))
			{
				func_572(1830897187, iParam1);
			}
			else
			{
				func_572(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_572(1528309077, iParam1);
			}
			else if (func_574(104))
			{
				func_572(1864966105, iParam1);
			}
			else
			{
				func_572(-103336013, iParam1);
			}
			break;
		case 108:
			func_572(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_572(-1123227713, iParam1);
				func_572(-889574341, iParam1);
			}
			else
			{
				func_572(2065385917, iParam1);
				func_572(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_572(-887421691, iParam1);
			}
			else if (func_574(109))
			{
				func_572(-1318117949, iParam1);
			}
			else
			{
				func_572(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_572(284822762, iParam1);
				}
				else
				{
					func_572(-1425017554, iParam1);
				}
			}
			else if (func_574(110))
			{
				if (&Global_1357515 == 0)
				{
					func_572(553087292, iParam1);
				}
				else
				{
					func_572(-1766870331, iParam1);
					func_572(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_572(-1980598735, iParam1);
			}
			else
			{
				func_572(-442732098, iParam1);
				func_572(1955756409, iParam1);
			}
			break;
		case 115:
			func_572(394303528, iParam1);
			func_572(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_572(1182403394, iParam1);
			}
			else
			{
				func_572(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_572(924445424, iParam1);
			}
			else
			{
				func_572(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_572(430755273, iParam1);
				func_572(-1473879802, iParam1);
			}
			else
			{
				func_572(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_572(73885747, iParam1);
			}
			else if (func_574(117))
			{
				func_572(1559707913, iParam1);
			}
			else
			{
				func_572(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_572(-2103887972, iParam1);
			}
			else if (func_574(118))
			{
				func_572(-435828462, iParam1);
			}
			else
			{
				func_572(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_572(2054486196, iParam1);
			}
			else
			{
				func_572(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_572(-570086056, iParam1);
			}
			else if (func_574(121))
			{
				func_572(32337856, iParam1);
			}
			else
			{
				func_572(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_572(813493663, iParam1);
			}
			else if (func_574(122))
			{
				func_572(-2132763590, iParam1);
			}
			else
			{
				func_572(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_572(-66240572, iParam1);
				func_572(1563075046, iParam1);
			}
			else
			{
				func_572(-787011772, iParam1);
				func_572(-1523377438, iParam1);
			}
			break;
		case 127:
			func_572(61020800, iParam1);
			break;
		case 129:
			func_572(428985222, iParam1);
			break;
		case 131:
			func_572(-1393851036, iParam1);
			break;
		case 133:
			func_572(1559531342, iParam1);
			break;
		case 134:
			func_572(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_572(-1374407408, iParam1);
				}
				else
				{
					func_572(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_572(-472672138, iParam1);
				}
				else
				{
					func_572(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_572(-1678710489, iParam1);
			}
			else
			{
				func_572(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_572(1717582460, iParam1);
			}
			else
			{
				func_572(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_572(1568112362, iParam1);
				func_572(1388317526, iParam1);
			}
			else if (func_574(136))
			{
				func_572(-1597534828, iParam1);
				func_572(-1207918353, iParam1);
			}
			else
			{
				func_572(-1940891082, iParam1);
				func_572(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_572(448334530, iParam1);
				func_572(2145375502, iParam1);
			}
			else
			{
				func_572(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_572(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_572(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_572(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_572(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_572(-66616327, iParam1);
			}
			else
			{
				func_572(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_572(1862916706, iParam1);
			}
			else if (func_574(147))
			{
				func_572(675105199, iParam1);
			}
			else
			{
				func_572(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_572(174409701, iParam1);
			}
			else if (func_574(148))
			{
				func_572(-1730895475, iParam1);
			}
			else
			{
				func_572(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_572(1295237052, iParam1);
			}
			else if (func_574(149))
			{
				func_572(-788577684, iParam1);
			}
			else
			{
				func_572(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_312(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_200(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_516(iParam0);
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
					if (func_367((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_278(iParam0);
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
			iVar3 = func_278(iParam0);
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

int func_313(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_577(iParam0);
	iVar3 = func_578(iParam0);
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
				iVar1 = func_291();
				func_340(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_579(iParam0, 1);
			if (func_580(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_581(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_582(1, iParam0);
				}
				else
				{
					func_583(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
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

int func_315(int iParam0, int iParam1, int iParam2)
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

void func_316(bool bParam0)
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

void func_317(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_584(iParam0, iParam1, bParam2);
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

int func_318(int iParam0, int iParam1)
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

bool func_319(int iParam0)
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

void func_320(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_585(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_587(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_588(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_587(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_321(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_589(func_491(iParam0));
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_323()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_590(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (!func_592(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_593(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_594(iParam0, bParam2);
	iVar2 = 0;
	if (func_595(iParam0, 0, 0) == 0)
	{
		if (func_596(iParam0))
		{
			iVar5 = func_597(iParam0);
			iVar6 = func_598(iVar5);
			iVar7 = func_599(iVar6) + 1;
			func_600(iVar5);
			if (func_601(38))
			{
				func_331(483, 0);
			}
			else
			{
				func_331(482, 0);
			}
			if (iVar7 == func_602(iVar6))
			{
				func_324(func_603(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_405() && func_604(4))
				{
					if (func_405() && (func_605(38) || func_601(38)))
					{
						func_607(38, func_603(iVar6), 0, 0, func_606(), 0, -1, 0);
						func_608(2);
					}
					else
					{
						func_607(38, func_603(iVar6), 0, 0, func_606(), 0, -1, 0);
						func_608(1);
					}
				}
			}
			else if (func_405() && func_604(4))
			{
				if (func_405() && (func_605(38) || func_601(38)))
				{
					func_607(38, 0, 0, 0, func_606(), 0, -1, 0);
					func_608(2);
				}
				else
				{
					func_607(38, 0, 0, 0, func_606(), 0, -1, 0);
					func_608(1);
				}
			}
			if (func_405() && func_604(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_405() && (func_605(38) || func_601(38)))
					{
						func_609(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_609(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_610(iParam0) == -1037537535)
	{
		if ((!func_611(iParam0, 866047851) && !func_611(iParam0, -1979000645)) && !func_611(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_612(iParam0, 8388608) && !func_613(28))
	{
		func_614(28);
	}
	if (!bVar3)
	{
		if (func_611(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_615(iParam0) == -1447088266)
			{
				iVar1 = func_617(func_616(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_618(iVar1);
					}
					if (func_619(0) && func_620(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_621(iParam0, iVar0, iParam5);
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
						func_618(iParam0);
					}
					if (func_619(0) && func_620(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_621(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_610(iParam0) == -427144552)
		{
			if (!func_622(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_610(iParam0) == 307971639 && func_623(iParam0))
		{
			if (!func_624(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_611(iParam0, 866047851))
		{
			func_625(iParam0);
		}
		else if (func_611(iParam0, 2000026003))
		{
			func_626(iParam0);
		}
		else if (func_611(iParam0, -103750053))
		{
			func_95(func_627(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_628(-717883113, 2091222383), iVar0);
		}
		else if (func_611(iParam0, -121341956) && !func_611(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_333((*Global_1835011)[4]->f_1, 1))
				{
					func_331(498, 0);
				}
			}
			if (func_611(iParam0, -2017733358) || func_611(iParam0, -1369131378))
			{
				func_629(iParam0);
			}
		}
		else if (func_611(iParam0, -136654233))
		{
			if (func_611(iParam0, -1021472396))
			{
			}
		}
		else if (func_611(iParam0, -1466706512) && func_611(iParam0, 1147021565))
		{
			func_331(484, 0);
		}
		else if (func_611(iParam0, 1147021565) && func_611(iParam0, -524514947))
		{
		}
		else if (func_611(iParam0, 554195525))
		{
		}
		else if (func_611(iParam0, 589988438))
		{
			if (func_630())
			{
				func_631(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_611(iParam0, 787083290) && func_611(iParam0, 949916894))
		{
			func_632(iParam0);
		}
		else if (func_611(iParam0, -1718133314))
		{
			func_633(iParam0);
		}
		else if (func_611(iParam0, -1738650224))
		{
			func_634(iParam0);
		}
		else if (func_611(iParam0, -1112814642) && func_611(iParam0, 949916894))
		{
			func_635(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_611(iParam0, 1841149704))
		{
			func_636();
		}
		else if (func_611(iParam0, 606799272))
		{
			func_637(iParam0, iParam1);
			func_638(iParam0);
		}
		else if (func_611(iParam0, -1112814642) && func_611(iParam0, -1697809989))
		{
			func_639(iParam0, 0, 0, 0);
		}
		else if (func_611(iParam0, -2017733358) || func_611(iParam0, -1369131378))
		{
			func_629(iParam0);
		}
		else if (func_611(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_640(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_611(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_353(215778062, 1, 0))
					{
						func_324(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_353(670273567, 1, 0))
					{
						func_324(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_353(-967317137, 1, 0))
					{
						func_324(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_353(526074061, 1, 0))
					{
						func_324(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_353(-1045488665, 1, 0))
					{
						func_324(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_353(471514780, 1, 0))
					{
						func_324(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_611(iParam0, -839724752) && func_612(iParam0, 4))
		{
			if (!func_601(42))
			{
				func_641(iParam0);
			}
		}
		else if (func_611(iParam0, 1399091007))
		{
			func_642(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_611(iParam0, 1248798204))
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
				func_324(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_614(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_643(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_644(&iVar9, 0))
				{
					func_620(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_643(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_331(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_645();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_646();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_647();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_648();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_649();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_650(499813453, 854119837, 0);
				func_651(499813453, 0);
				func_652(1);
				break;
			case 2127812557:
				func_650(499813453, -1292544588, 0);
				func_651(499813453, 0);
				func_652(2);
				break;
			case 808991383:
				func_650(499813453, -1003325394, 0);
				func_651(499813453, 0);
				func_652(4);
				break;
			case 1134518629:
				func_650(666607663, -335460405, 0);
				func_651(666607663, 0);
				func_653(1);
				break;
			case 902940106:
				func_650(666607663, 903797617, 0);
				func_651(666607663, 0);
				func_653(2);
				break;
			case -418174898:
				func_650(666607663, 669728650, 0);
				func_651(666607663, 0);
				func_653(4);
				break;
			case -648114971:
				func_650(-220219788, 1214120047, 0);
				func_651(-220219788, 0);
				func_654(1);
				break;
			case 211153747:
				func_650(-220219788, 655769340, 0);
				func_651(-220219788, 0);
				func_654(2);
				break;
			case -32876996:
				func_650(-220219788, 885316185, 0);
				func_651(-220219788, 0);
				func_654(4);
				break;
			case 1191437462:
				func_650(218622660, -1491419385, 0);
				func_651(218622660, 0);
				func_655(1);
				break;
			case 1119149048:
				func_650(218622660, 1809565830, 0);
				func_651(218622660, 0);
				func_655(2);
				break;
			case 506073827:
				func_650(390004462, -628873767, 0);
				func_651(390004462, 0);
				func_656(1);
				break;
			case -1876986168:
				func_650(390004462, -405421956, 0);
				func_651(390004462, 0);
				func_656(2);
				break;
			case 2142623221:
				func_650(390004462, -1108972386, 0);
				func_651(390004462, 0);
				func_656(4);
				break;
			case 1508215381:
				func_650(6410548, 1053716392, 0);
				func_651(6410548, 0);
				func_657(1);
				break;
			case -888935280:
				func_650(6410548, 806507056, 0);
				func_651(6410548, 0);
				func_657(2);
				break;
			case -1252474566:
				func_650(6410548, 1571925350, 0);
				func_651(6410548, 0);
				func_657(4);
				break;
			case -1465702449:
				func_650(6410548, 1330352282, 0);
				func_651(6410548, 0);
				func_657(8);
				break;
			case -21093309:
				func_659(242, func_658(-21093309), 0);
				break;
			case 204375141:
				func_659(240, func_658(204375141), 0);
				break;
			case -417963070:
				func_659(241, func_658(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, 1934060482, 1, 1);
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
					func_660(594, 1110018439, 1, 1);
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
					func_660(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(594, -1228016946, 1, 1);
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
					func_660(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_660(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_331(488, 0);
				break;
			case 1613651027:
				func_331(491, 0);
				break;
			case -885810591:
				func_331(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_324(func_661(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_324(func_662(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_613(1))
				{
					func_331(487, 0);
				}
				break;
			case -898386032:
				func_331(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_331(496, 0);
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
		func_663(&iVar10);
		if (!func_664(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_619(0))
		{
			return true;
		}
		if (func_610(iParam0) == -1037537535)
		{
			func_665(iParam0);
		}
		if (func_611(iParam0, -1979000645))
		{
			func_666(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_619(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_324(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_667(iVar2, 0);
		}
	}
	Var35 = { func_668(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_669(iParam0);
	if (fParam6 > 0f)
	{
		if (func_611(iParam0, -839724752))
		{
			func_670(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_671(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_325(int iParam0)
{
	if (func_611(iParam0, 1989861793))
	{
		iVar0 = func_672(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_673(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_674(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_675(iVar14, iVar1);
					if (iVar15 != iParam0 && func_591(iVar15, 0))
					{
						if (func_676(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_677(iVar1);
				if (bVar13)
				{
					func_678(iParam0);
				}
				else
				{
					func_331(306, 0);
				}
			}
		}
	}
}

void func_326()
{
	if (func_20() != -1)
	{
		return;
	}
	func_679();
	func_680();
	func_681();
	func_682();
	func_683();
	func_684();
	func_685();
}

void func_327(int iParam0)
{
	func_686(iParam0, 1, 1, -142743235, 1);
	if (func_687(iParam0))
	{
		func_688(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_690(func_689(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_691(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_692() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_693(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_693(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_694(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_694(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_694(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_694(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_694(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_694(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_694(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_694(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_694(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_695(iVar8, iVar0))
				{
					func_696(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_695(iVar8, iVar0))
		{
			func_696(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_328()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_695(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_692() == -2125499975 || func_692() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_696(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_696(&vVar2, iVar5, iVar0);
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

void func_329()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_590(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_330(int iParam0, bool bParam1)
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
			if ((func_333((*Global_1835011)[59]->f_1, 1) || func_333((*Global_1347702)[1]->f_15, 1)) || func_196((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_567(403634348, 1))
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

void func_331(int iParam0, bool bParam1)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_699(iVar0, iVar1);
}

void func_332(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_690(iParam0, 1);
	func_700(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_700(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_701(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_700(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_700(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_333(int iParam0, bool bParam1)
{
	switch (func_302(iParam0))
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

void func_334()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_590(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_590(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_336(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_702(iParam1, 1, 0) };
		iParam3 = func_703(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_704(iParam3);
	return func_643(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_337()
{
	return _unlock_is_unlocked(99890643);
}

void func_338(int iParam0)
{
	if (!func_705(iParam0))
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

bool func_339(int iParam0, int iParam1)
{
	if (!func_706(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_707(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_708(Global_40.f_9910[iParam1], 4);
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_709(*iParam0);
	iVar1 = func_710(*iParam0);
	iVar2 = func_711(*iParam0);
	iVar3 = func_712(*iParam0);
	iVar4 = func_713(*iParam0);
	iVar5 = func_714(*iParam0);
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
	iVar6 = func_715(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_715(iVar1, iVar0);
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
	func_716(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_341(int iParam0, int iParam1, bool bParam2)
{
	if (!func_706(iParam0))
	{
		return;
	}
	if (!func_717(iParam1))
	{
		return;
	}
	if (func_718(iParam1, 1))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_339(iParam0, -1))
	{
		return;
	}
	else
	{
		func_719(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_202(0, 0, 1))
		{
			func_373(0, 17);
		}
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_590(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_590(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_344()
{
	return _unlock_is_unlocked(-121456797);
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_590(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_590(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_590(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_590(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_590(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_590(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_351(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_352(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_353(int iParam0, int iParam1, bool bParam2)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
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
		if (!func_720(iParam0, 1))
		{
			return false;
		}
	}
	return func_595(iParam0, 0, bParam2) >= iParam1;
}

void func_354(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_721(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_721(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_355()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_590(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_590(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_357()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_590(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_590(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_359()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_590(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_360()
{
	if (func_722() > 1)
	{
		func_723();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_331(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_331(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_331(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_331(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_331(452, 1);
		}
	}
}

bool func_361(int iParam0)
{
	return func_724(iParam0, 4, 1);
}

void func_362(int iParam0)
{
	func_725(iParam0, 4, 1);
}

void func_363(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_364(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_195(iParam0))
	{
		return;
	}
	func_235(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_200(iParam0))
	{
		case 1:
			func_95(func_628(909007663, -587839005), 1);
			iVar0 = func_278(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_494(iVar0))
			{
				case 0:
					func_95(func_628(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_628(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_628(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_628(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_628(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_628(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_628(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_628(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_628(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_628(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_628(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_278(iParam0);
			if (func_307((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_307((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_307((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_628(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_628(909007663, -2049243343), 1);
				}
			}
			if (func_307((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_495(iVar1))
				{
					case 0:
						func_95(func_628(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_628(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_628(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_628(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_628(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_628(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_628(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_628(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_628(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_628(909007663, 532323983), 1);
				}
			}
			else if (func_307((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_307((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_307((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_628(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_628(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_365()
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
	else if (func_203(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_202(0, 0, 1) || func_726()) || func_129())
	{
		return;
	}
	iVar0 = func_206();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_727(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_728(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_728(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_729(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_373(0, -1);
	}
	if (iVar2 > 0)
	{
		func_730("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_731(1, 0);
	Global_1956575->f_4 = 1;
}

void func_366(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_289(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_732(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_367(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_733(iParam0);
}

int func_368(int iParam0, int iParam1)
{
	if (!func_734(iParam0))
	{
		return 0;
	}
	if (!func_405())
	{
		return 0;
	}
	if (!func_735(iParam0, &iVar0, &iVar1))
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

int func_369(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_736())
	{
		iVar2 = func_736();
	}
	iVar5 = func_737(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_491(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_491(iVar6) == 0)
			{
				return func_738(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_491(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_491(iVar6) == 0)
			{
				return func_738(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_738(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_739(1330954593, 0, -1);
		case 1:
			return func_739(1330954593, 0, -1);
		case 2:
			return func_739(1330954593, 0, -1) * 2;
		case 4:
			return func_739(1330954593, 0, -1);
		case 5:
			return func_739(1330954593, 0, -1);
		case 6:
			return func_739(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_739(1330954593, 0, -1) * 3;
		case 9:
			return func_739(1330954593, 0, -1) * 3;
		case 10:
			return func_739(1330954593, 0, -1) * 3;
		case 11:
			return func_739(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_371(int iParam0)
{
	if (!func_195(iParam0))
	{
		return cVar0;
	}
	switch (func_200(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_516(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_278(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_369(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_372(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_374();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_200(Global_1879514->f_1) == 1)
			{
				func_368(5, 1);
			}
			else if (func_200(Global_1879514->f_1) == 8 && (func_307((*Global_1347702)[func_278(Global_1879514->f_1)]->f_12, 1) || func_307((*Global_1347702)[func_278(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_368(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_373(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_740(&Global_0, 8);
	}
	if (!func_405() || func_20() != -1)
	{
		return;
	}
	func_740(&Global_0, 1);
}

int func_374()
{
	iVar0 = func_741(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_742(iVar0))
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

Vector3 func_375(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_743(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_406(vVar0))
	{
		vVar0 = { func_743(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_376(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_377(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_378(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_253(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_744(vParam0, iParam3);
}

void func_379()
{
	func_745();
	func_746();
	func_747();
	_0x11b0a0b282fa9b10(0);
}

void func_380(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_748(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_749(&(Param0.f_10)))
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
			func_750(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_381(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_382(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_383()
{
	return Global_1572864->f_12;
}

void func_384(bool bParam0)
{
	if (func_507(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_751();
	Var1.f_3.f_3 = iVar0;
	if ((!func_752(Global_1347343->f_2) && !func_381(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_753();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_381(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_754();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_381(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_755();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_756(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_757(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_382(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_382(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_385(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_758(uParam0);
	iVar0 = func_759(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_396(iParam1);
		}
		iVar0 = func_760(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_761(uParam0);
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
		iVar0 = func_761(uParam0);
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
	func_762(uParam0, 2);
}

void func_386(char[4] cParam0, int iParam1)
{
	func_763(&(cParam0->f_7375), iParam1);
}

int func_387(var uParam0)
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

int func_388()
{
	return func_516(func_764());
}

void func_389(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_407())
	{
		func_765(cParam0, iVar0);
		iVar0++;
	}
}

int func_390(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_391(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_392(char[4] cParam0)
{
	func_771(cParam0, iLocal_16, iLocal_17, 109015, 109060, 109165, 109375, 110096, "MAR2_INT", 4098, -1);
	func_771(cParam0, iLocal_17, iLocal_18, 110346, 110371, 110576, 110696, 111073, "", 4096, -1);
	func_771(cParam0, iLocal_18, iLocal_19, 111193, 111207, 111425, 111505, 111989, "", 4096, -1);
	func_771(cParam0, iLocal_19, iLocal_20, 112034, 112059, 112277, 112559, 112867, "", 4352, -1);
	func_771(cParam0, iLocal_20, iLocal_21, 112933, 112953, 113194, 113310, 113843, "MAR2_MCS2", 4098, -1);
	func_771(cParam0, iLocal_21, iLocal_22, 113888, 113913, 114169, 114258, 114556, "", 4096, -1);
	func_771(cParam0, iLocal_22, iLocal_23, 114583, 114608, 115079, 115320, 115733, "", 4096, -1);
	func_771(cParam0, iLocal_23, iLocal_24, 115752, 115848, 116260, 116469, 116711, "MAR2_MCS3", 4162, -1);
	func_771(cParam0, iLocal_24, iLocal_25, 116790, 116831, 116901, 117130, 117379, "", 4608, -1);
	func_771(cParam0, iLocal_25, iLocal_26, 117437, 117515, 117689, 117833, 118284, "MAR2_MCS4", 4610, -1);
	func_771(cParam0, iLocal_26, iLocal_27, 118311, 118374, 118559, 118690, 119458, "", 4608, -1);
	func_771(cParam0, iLocal_27, 26, 119490, 119510, 119671, 119744, 119778, "MAR2_EXT", 4610, -1);
}

void func_393(char[4] cParam0, int iParam1)
{
	cParam0->f_5410 = iParam1;
}

void func_394(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

int func_395(char[4] cParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_827()) && get_entity_model(iVar1) == iParam1)
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

char[] func_396(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_828(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_829(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_830(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

void func_397(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_831(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_385(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

int func_398()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iLocal_72, iVar0);
		if (does_entity_exist(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

void func_399()
{
	if (!func_832(iLocal_49, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(iLocal_49, true);
	if (_0x33fa048675821da7(iLocal_49, 3))
	{
		_0x06d26a96ca1bca75(iLocal_49, 3, 0f, 0);
	}
	set_ped_can_be_targetted(iLocal_49, false);
	set_entity_only_damaged_by_player(iLocal_49, true);
	set_ped_config_flag(iLocal_49, 301, true);
	_set_ped_body_component(iLocal_49, -937613161);
	_update_ped_variation(iLocal_49, false, true, true, true, false);
}

void func_400(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_401(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_402(var uParam0)
{
	if (!func_833(uParam0, 4))
	{
		if (func_834(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_835(uParam0) };
		if (!func_834(uParam0->f_860, 524288))
		{
			func_836(&(uParam0->f_872));
		}
		func_837(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_838(uParam0, 0f, 0f, 0f);
		func_839(uParam0);
		func_840(uParam0);
		func_841(uParam0, 0f, 0f, 0f, 0, 0);
		func_842(uParam0);
		func_763(uParam0, 4);
		func_843(uParam0, 0);
		func_844(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_403(int iParam0)
{
	if (func_845(iParam0))
	{
		return func_846(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_404(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_519(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_847(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_848(0, 0);
		if (func_705(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_849(1, 0);
		}
	}
	else
	{
		func_849(1, 0);
	}
	func_214(0);
	func_520(0, vParam0, uParam3);
	return 1;
}

bool func_405()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_406(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_407()
{
	return 26;
}

void func_408(int iParam0)
{
	if (!func_194(iParam0))
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

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_850((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_851((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_852((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_853((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_854((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_855((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_415(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_416(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_856((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_857((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_418(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_858((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_419(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_859((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_860((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_421(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_861(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_862(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_422(char[4] cParam0, int iParam1, var uParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_863(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_864(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0] = iParam1;
	cParam0->f_5147[iVar0]->f_3 = (cParam0->f_5147[iVar0]->f_3 || uParam2);
}

void func_423(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_865(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_866(&(cParam0->f_819));
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

void func_424(char[4] cParam0, char[4] cParam1, var uParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_867(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_868(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || uParam2);
}

void func_425(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_869(iParam3, func_33(cParam0)) && !func_869(iParam3, func_35(cParam0)))
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
	iVar0 = func_870(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_871(&(cParam0->f_1126));
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
		func_872(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

char* func_426()
{
	return "script@story@MAR2@IG@IG_9_Posse_Confrontation@IG_9_Posse_Enter_Interact_Attack";
}

void func_427(char[4] cParam0, char[4] cParam1, var uParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_873(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_874(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0] = cParam1;
	cParam0->f_1081[iVar0]->f_2 = (cParam0->f_1081[iVar0]->f_2 || uParam2);
}

var func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_IG9_POSSE_ENTER";
		case 1:
			return "pl_IG9_JOHN_DONT_KNOW";
		case 2:
			return "pl_IG9_JOHN_WHAT_OF_IT";
		case 3:
			return "pl_IG9_POSSE_KILL_A_FELLA";
		case 4:
			return "pl_IG9_JOHN_WASNT_ME";
		case 5:
			return "pl_IG9_JOHN_SURE_HE_HAD_IT_COMING";
		case 6:
			return "pl_IG9_POSSE_LEADER_DONT_MEAN_NO";
		case 7:
			return "pl_IG9_JOHN_IM_JUST_FARMER";
		case 8:
			return "pl_IG9_JOHN_I_KILLED_JOHN_MAR";
		case 9:
			return "pl_IG9_POSSE_WAS_MY_BRO";
		case 10:
			return "pl_IG9_JOHN_ROB_ME";
		case 11:
			return "pl_IG9_JOHN_I_SEE_THE_RESEMBLENCE";
		case 12:
			return "pl_IG9_POSSE_KILL_HIM_FARMER";
		case 13:
			return "pl_IG9_POSSE_KILL_HIM_KILLED_MARSTON";
		case 14:
			return "pl_IG9_POSSE_KILL_HIM";
		default:
			break;
	}
	return func_875();
}

void func_429(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_869(iParam3, func_33(cParam0)) && !func_869(iParam3, func_35(cParam0)))
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
	iVar0 = func_876(&(cParam0->f_1126), iParam1);
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

void func_430(int iParam0, int iParam1)
{
	func_877(iParam0, iParam1);
}

void func_431(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_878((*uParam0)[iVar0]))
		{
			if (func_869((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_879((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_880((*uParam1)[iVar0]))
		{
			if (func_869((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_881((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_882((*uParam2)[iVar0]))
		{
			if (func_869((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_883((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_884((*uParam3)[iVar0]))
		{
			if (func_869((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_885((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_869(uParam4->f_1, iParam12))
	{
		func_886(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_887((*uParam5)[iVar0]))
		{
			if (func_869((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_888((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_887((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_889((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_869((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_890((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_891((*uParam6)[iVar0]))
		{
			if (func_869((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_892((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_893((*uParam7)[iVar0]))
		{
			if (func_869((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_894((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_895((*uParam8)[iVar0]))
		{
			if (func_869((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_896((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_897((*uParam9)[iVar0]))
		{
			if (func_869((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_898((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_899((*uParam10)[iVar0]))
		{
			if (func_869((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_900((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_901((*uParam11)[iVar0]))
		{
			if (func_869((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_902((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_432(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_903(uParam0, iParam1, sParam2))
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

struct<2> func_433()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_434(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_435(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

bool func_436(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_904(cParam0->f_607)}, 3);
			if (func_905(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_906(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_907(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_437(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_887((*uParam0)[iVar0]))
		{
			if (func_869((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_908((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_909((*uParam0)[iVar0]))
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

int func_438(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_439(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_910(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_911(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_440(char[4] cParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_912(cParam0))
			{
				func_103(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = fParam2;
				Var0.f_6.f_1 = fParam3;
				Var0.f_6.f_2 = fParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_913(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_914(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_915(iVar12))
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
		if (func_916(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		Var18.f_6 = fParam2;
		Var18.f_6.f_1 = fParam3;
		Var18.f_6.f_2 = fParam4;
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
		iVar13 = func_913(&iVar29, &Var18);
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
		func_917(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = fParam2;
				vVar14.f_1 = fParam3;
				vVar14.f_2 = fParam4;
				if ((!func_915(iVar13) || func_918(Global_35, iVar13, 1, 1) > 200f) && !func_406(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_919(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_441(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_920(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_921(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_442(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_922(cParam0);
			if (func_923(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_924(cParam0, 2097152);
				func_271(cParam0, 16384);
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
			func_922(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_925(cParam0, Var0))
			{
				if (func_438(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_438(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_443(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_444(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_926(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_439(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_904(cParam0->f_607)}, 3);
		if (func_927(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_928(&(cParam0->f_13115)) < 30f)
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

bool func_445(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_928(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_929()) && func_928(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_271(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_930(0, 0);
		func_271(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_446(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (func_128(cParam0, 2) || func_82(32768))
	{
		if (!func_931())
		{
			return false;
		}
	}
	if (!func_932(cParam0))
	{
		return false;
	}
	if (!func_933(cParam0))
	{
		return false;
	}
	if (!func_934(cParam0))
	{
		return false;
	}
	if (func_33(cParam0) == iLocal_24 && !bLocal_188)
	{
		if (!func_935(&uLocal_368, "MAR2_MCS4", 1, 1))
		{
			return false;
		}
		else
		{
			bLocal_188 = true;
		}
	}
	func_936();
	func_937();
	func_938(cParam0);
	func_939(cParam0);
	func_940(cParam0);
	func_941(&uLocal_261, 0);
	func_942(&uLocal_280, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_944(&uLocal_276, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_948(883);
	func_948(884);
	func_948(943);
	func_948(485);
	func_948(477);
	func_948(943);
	func_949(883, 32);
	func_949(884, 32);
	func_949(943, 32);
	func_949(485, 32);
	func_949(477, 32);
	func_949(943, 32);
	if (_does_volume_exist(&(iLocal_93[0])))
	{
		_0x18262cafebb5fbe1(&(iLocal_93[0]), 4096, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(&(iLocal_93[0])))
	{
		_0xb56d41a694e42e86(&(iLocal_93[0]), 4096, 0, 0, -1, -1, 0);
	}
	if (_does_volume_exist(&(iLocal_93[50])))
	{
		_0x18262cafebb5fbe1(&(iLocal_93[50]), 1024, 0, 0, -1, -1, 0);
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		_0xab0d553fe20a6e25(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
		_0xf45e46deecf7df6e(10240, 0, 0, -1, -1);
		if (_does_volume_exist(&(iLocal_93[4])))
		{
			func_950(&(iLocal_93[4]), 0);
		}
	}
	if (iVar0 >= iLocal_16 && iVar0 <= iLocal_24)
	{
		if (_does_volume_exist(&(iLocal_93[5])))
		{
			_0xc1799fafd2fdf52b(&(iLocal_93[5]), 0, 0, 0);
		}
	}
	else if (iVar0 >= iLocal_25 && iVar0 <= iLocal_27)
	{
		if (_does_volume_exist(&(iLocal_93[5])))
		{
			_0xc1799fafd2fdf52b(&(iLocal_93[5]), 0, 0, 1);
			_0xc1799fafd2fdf52b(&(iLocal_93[68]), 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_20)
	{
		if (_does_volume_exist(&(iLocal_93[19])))
		{
			func_460(&(iLocal_93[19]), 0, 0, 0);
		}
	}
	if (!bLocal_187)
	{
		bLocal_187 = true;
		if (_does_volume_exist(&(iLocal_93[5])))
		{
			func_951(&(iLocal_93[5]), 0, 0, 0, 0, 0);
		}
	}
	func_174(0);
	func_952(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_953(cParam0);
	}
	func_954(cParam0);
	func_956(cParam0, 136556);
	func_958(cParam0, 136656);
	func_960(cParam0, 136807);
	func_186(64, 0);
	func_187(64, 1);
	func_188(64, 22, 1, 1);
	create_model_hide(-1773.528f, -393.6541f, 155.5415f, 0.5f, 1152089151, true);
	func_961(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_169(0);
	}
	if (func_832(func_220(7), 0))
	{
		_set_entity_coords_and_heading(func_220(7), -2590.037f, 465.5254f, 145.1149f, 79.8012f, true, false, true);
		task_stand_still(func_220(7), -1);
	}
	if (func_832(func_220(1), 0))
	{
		_set_entity_coords_and_heading(func_220(1), -2589.972f, 467.1571f, 145.0408f, 83.5558f, true, false, true);
		task_stand_still(func_220(1), -1);
	}
	func_962(func_220(7));
	func_962(func_220(1));
	iLocal_338 = 0;
	func_963(26, 0, 350);
	return true;
}

void func_447(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_448(char[4] cParam0)
{
	func_964(cParam0);
	func_965(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_923(cParam0);
		}
	}
	func_966(cParam0);
	func_967(cParam0);
	func_968(cParam0);
	func_969(cParam0);
	func_970(cParam0);
	func_971(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_972(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_285(cParam0) == 0)
	{
		func_442(cParam0);
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
			if (func_973(cParam0, iVar0, 0))
			{
				if (func_974(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_974(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_974(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_386(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_975(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_976(cParam0);
					func_977(cParam0, iVar0, 1);
				}
				else
				{
					func_977(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_926(cParam0))
			{
				if (func_978(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_924(cParam0, 4);
					}
					func_977(cParam0, iVar0, 2);
				}
			}
			else if (func_979(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_924(cParam0, 4);
				}
				func_977(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_973(cParam0, iVar0, 2))
			{
				if (!func_980(cParam0))
				{
					func_977(cParam0, iVar0, 4);
					if (func_981(cParam0, iVar0, iVar1))
					{
						func_977(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_982(cParam0);
					func_977(cParam0, iVar0, 3);
					if (func_983(cParam0, iVar0))
					{
						func_977(cParam0, iVar0, 4);
						if (func_981(cParam0, iVar0, iVar1))
						{
							func_977(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_984(cParam0))
			{
				func_983(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_983(cParam0, iVar0))
			{
				func_977(cParam0, iVar0, 4);
				if (func_981(cParam0, iVar0, iVar1))
				{
					func_977(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_981(cParam0, iVar0, iVar1))
			{
				func_977(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_985(cParam0);
				func_986(cParam0, iVar0);
				func_987(cParam0);
				func_988(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_989(cParam0, iVar1))
					{
						func_990(cParam0, iVar1);
					}
				}
			}
			if (func_973(cParam0, iVar0, 5))
			{
				if (func_973(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_991(cParam0, func_33(cParam0));
					}
					func_992(cParam0, iVar1);
					func_965(cParam0);
					return true;
				}
				else
				{
					func_977(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_993(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_994(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_995("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_996(cParam0))
					{
						func_977(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_924(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_271(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_985(cParam0);
				func_986(cParam0, iVar0);
				func_987(cParam0);
				func_988(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_989(cParam0, func_35(cParam0)))
					{
						func_990(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_994(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_973(cParam0, iVar0, 5))
				{
					if (func_997(cParam0))
					{
						func_977(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_997(cParam0);
					func_977(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_973(cParam0, iVar0, 5);
				func_998(cParam0);
			}
			break;
		case 7:
			if (func_973(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_991(cParam0, func_33(cParam0));
				}
				func_992(cParam0, iVar1);
				func_965(cParam0);
				return true;
			}
			break;
		default:
			func_977(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_449(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

float func_450(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_451(int iParam0, float fParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_613(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_999(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1000(iParam0), iVar0);
	func_1002(func_1001(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1003(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_331(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_331(func_1004(iParam0), 1);
	}
	sVar1 = func_1005(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_452(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	_0xe9bd19f8121ade3e(Global_35, iParam0);
}

void func_453(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_273(iParam0, 64);
	func_274();
}

void func_454()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_538(iVar0);
		func_539(iVar0);
		iVar0++;
	}
}

void func_455(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1006(iParam0, 64);
	func_274();
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_457(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_458(int iParam0)
{
	return iParam0 != 0;
}

int func_459(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_460(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_950(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_461(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1007(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1008(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_533(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1009(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1010(iParam1);
		}
	}
	if (func_1009(cParam0, iParam1))
	{
		func_1011(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1012(cParam0, iParam1, 128);
		}
		else
		{
			func_1011(cParam0, iParam1, 128);
		}
		if (func_1013(cParam0, iParam1, &iVar3))
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

void func_462(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_463(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_462((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_464(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_465(var uParam0)
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

bool func_466(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	return (uLocal_345[iVar0] && iVar2) == iVar2;
}

void func_467(int iParam0, bool bParam1)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	bVar3 = (uLocal_345[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_345[iVar0] = (uLocal_345[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_345[iVar0] = (uLocal_345[iVar0] && iVar4);
	}
}

void func_468(int iParam0)
{
	if (_does_anim_scene_exist(&(uLocal_202[iParam0])))
	{
		_delete_anim_scene(&(uLocal_202[iParam0]));
	}
}

void func_469()
{
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		func_1016(iVar0);
		iVar0++;
	}
}

void func_470(int* iParam0, bool bParam1)
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
		func_1017(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_471(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (does_entity_exist(&(iLocal_60[iVar0])))
		{
			if (bParam0)
			{
				if (iVar0 == 0)
				{
					if (func_1018(710, 0))
					{
						func_1019(710, 0, 1, 0, 0);
					}
				}
			}
			else if (func_1018(710, 0))
			{
				func_1019(710, 1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_472(int* iParam0, bool bParam1)
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

void func_473(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_472((*iParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_474()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_472(iLocal_62[iVar0], 0);
		iVar0++;
	}
}

void func_475(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	if (bParam1)
	{
		func_1020(iParam0, 4);
		func_1021(iVar0, 1);
		func_1022(iVar0, 1);
	}
	else
	{
		func_1023(iParam0, 4);
		func_1022(iVar0, 0);
	}
}

void func_476(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_10(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	func_1021(iVar0, bParam1);
}

bool func_477(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_478(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_479(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_480(int iParam0)
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

void func_481(int iParam0, bool bParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1025(iParam0, 512)) || (!bParam1 && !func_1025(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1026(iParam0, 512);
	}
	else
	{
		func_1027(iParam0, 512);
	}
	if (func_1028(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_482(int iParam0)
{
	return func_1029(iParam0, 67108864);
}

bool func_483(int iParam0)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_480(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_485(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_486(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (&Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_487(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_488(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1030();
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
	if (func_1031(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

bool func_489(int iParam0)
{
	return func_1032(iParam0, 2);
}

int func_490(int iParam0)
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

int func_491(int iParam0)
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

int func_492(int iParam0)
{
	return iParam0 & 31;
}

bool func_493()
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

int func_494(int iParam0)
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

int func_495(int iParam0)
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

void func_496(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_497()
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

int func_498(int iParam0)
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

void func_499(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_500(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1033(iParam0);
	}
	else
	{
		func_1034(iParam0, iParam1);
	}
	func_1035();
}

bool func_501(int iParam0)
{
	iVar0 = func_1036(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_502(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (func_278(iParam0))
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
			switch (func_278(iParam0))
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

void func_503(int iParam0)
{
	iVar2 = func_1037(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1039(func_1038(iParam0), 6);
}

void func_504(int iParam0)
{
	iVar2 = func_1037(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1040(func_1038(iParam0), 6);
}

int func_505(int iParam0)
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

int func_506(int iParam0)
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
	func_1041(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_507(int iParam0)
{
	return iParam0 != 0;
}

bool func_508(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_509(int iParam0, var uParam1)
{
	if (!func_508(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1042(iParam0, *uParam1, 0);
	func_1043(uParam1);
	Global_1935183->f_24 = 1;
}

void func_510(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_511(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_564() - fParam1);
	func_1044(uParam0, 1);
	func_1045(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_512(var uParam0)
{
	return func_224(*uParam0, 2);
}

int func_513()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_514(bool bParam0)
{
	if (func_1046())
	{
		Global_1357509 = 1;
	}
	if (func_1047(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_515(int iParam0, int iParam1)
{
	Var0 = { func_1048(iParam0, iParam1) };
	Var0.f_3 = func_1049(iParam0, iParam1);
	return Var0;
}

int func_516(int iParam0)
{
	if (func_200(iParam0) == 1)
	{
		return func_278(iParam0);
	}
	return -1;
}

int func_517(int iParam0)
{
	if (func_200(iParam0) == 8)
	{
		return func_278(iParam0);
	}
	return -1;
}

char[] func_518(int iParam0)
{
	if (!func_279(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_519(int iParam0, bool bParam1)
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
		func_1050(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_291();
	}
}

void func_520(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_378(vParam1, 1);
}

bool func_521(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_522(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_523(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_524(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_525(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_526(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_527()
{
	return Global_1109400->f_245;
}

bool func_528(var uParam0, int iParam1)
{
	return func_401(uParam0->f_64, iParam1);
}

bool func_529(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_530(int iParam0)
{
	return func_724(iParam0, 16, 1);
}

void func_531(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1013(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1051(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_532(int iParam0)
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

void func_533(int iParam0)
{
	func_1052(iParam0, 8, 0);
}

void func_534(int iParam0, bool bParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1054(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1052(iParam0, 1, 0);
		}
	}
	func_1052(iParam0, 16, bParam1);
}

void func_535(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (func_530(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1055(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_534(iParam0, 0);
	func_1052(iParam0, 4, 0);
	func_533(iParam0);
	func_1056(iParam0);
	func_1057(iParam0, 37, 1);
	bVar0 = func_832(Global_1360165[iParam0], 0);
	iVar1 = func_1058(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1059(iParam0, 64, 1))
	{
		func_1057(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1057(iParam0, 33, 1);
		func_1057(iParam0, 34, 1);
		func_1060(iParam0, 1056964608, -1, 1061158912);
		func_1061(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1055(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1055(iParam0, 35, 1);
			if (bParam8)
			{
				func_1055(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1062(iParam0, 0);
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
		func_1057(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1055(iParam0, 33, 1);
		func_1061(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_464(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1055(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1063(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1059(iParam0, 45, 1))
	{
		func_1057(iParam0, 45, 1);
	}
	func_1064(iParam0, 16, 1);
	func_1057(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_832(func_1065(iParam0), 0))
		{
			func_1066(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_536(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_543(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_543(iParam0);
	}
}

bool func_537(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_538(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_539(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_540(int iParam0)
{
	if (!func_1067(iParam0))
	{
		return false;
	}
	if (!func_337())
	{
		return true;
	}
	return false;
}

void func_541(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	func_1068(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_540(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1069(iParam0, 0);
	func_543(iParam0);
}

bool func_542(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_543(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_544(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_545(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_220(iParam0);
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
	if (func_1070(iParam0, 64))
	{
		func_538(iParam0);
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
	bVar3 = func_613(42);
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
				func_1071(&((*Global_1900383)[iParam0]->f_27));
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
		func_538(iParam0);
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
		if (func_1072(1) < 1)
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
		func_1073(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1070(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1074(iParam0);
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
	fVar15 = func_1075(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1076(iParam0))
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
		func_1077((*Global_1900383)[iParam0]->f_26);
		func_1078((*Global_1900383)[iParam0]->f_26);
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
	if (func_915(iVar0) && !bVar9)
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
	iVar21 = func_1072(iParam0);
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

int func_546(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_547(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_548(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_549(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_550(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_551(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_544(iParam0))
	{
		return false;
	}
	iVar0 = func_220(iParam0);
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

void func_552(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_553(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_721(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_554(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1079())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_721(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1080(iVar0);
			func_1081(iVar0, 0, 0);
		}
		func_721(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_555(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 67108864);
}

void func_556(int iParam0)
{
	StringCopy(&cVar0, func_1082(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1083(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_557(int iParam0)
{
	StringCopy(&cVar0, func_1082(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1083(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_558(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_559(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_560(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_561(int iParam0)
{
	if (!func_524(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_562(int iParam0)
{
	if (func_524(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_563(int iParam0)
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

float func_564()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_565(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1084(iParam0) == 1 && bParam7)
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

int func_566(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_567(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1085(iParam0);
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

int func_568(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_581(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_569(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_570(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_571()
{
	return Global_40.f_11095.f_35;
}

void func_572(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1086(iParam0, 0);
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
		func_573(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_573(int iParam0)
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
			func_1086(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1087(1);
	}
}

bool func_574(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_575()
{
	iVar0 = func_1088((*Global_1347702)[9]->f_15);
	iVar1 = func_1088((*Global_1835011)[69]->f_1);
	if (func_1089(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_576(int iParam0)
{
	if (!func_194(iParam0))
	{
		return false;
	}
	return func_333((*Global_1835011)[iParam0]->f_1, 1);
}

int func_577(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1090(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1091(iVar6);
	}
	return iVar5;
}

int func_578(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1092(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_579(int iParam0, bool bParam1)
{
	func_1093(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_580(int iParam0)
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

void func_581(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_579(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_582(2, *uParam0);
		}
		else
		{
			func_583(2, *uParam0);
		}
	}
	func_1094(uParam0);
}

void func_582(int iParam0, int iParam1)
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

void func_583(int iParam0, int iParam1)
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

void func_584(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1095(iParam0, iParam1, bParam2);
}

int func_585(int iParam0)
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

int func_586(int iParam0)
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

void func_587(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1096();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1097(iParam0);
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
	if (func_613(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1098())
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
	Global_40.f_11095.f_35 = func_315(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1096();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1099(iVar1);
		func_1101(func_1100(), 0, 4000);
		func_1102(Global_40.f_11095.f_35);
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
		func_1103(0);
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
				if (iParam0 > func_586(14))
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
					sParam4 = func_1104(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_721(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_721(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_586(4))
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
					sParam4 = func_1104(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_721(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_721(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_368(10, 1);
	}
}

void func_588(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_589(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_590(int iParam0)
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

bool func_591(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_592(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1105(iParam0) && func_1106(iParam0))
		{
			func_1107(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_593(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1108(iParam0, iParam1);
	Var0 = { func_702(iParam0, 0, 1) };
	iVar5 = func_1109(iParam0, &Var0, 0, 0);
	iVar6 = func_1110(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_611(iParam0, -2051813666))
		{
			func_331(583, 1);
		}
		else
		{
			func_331(582, 0);
		}
	}
	if (func_1111(iParam0, &Var0, *iParam1, 0, 0))
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

void func_594(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_672(iParam0, -949239683))
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

int func_595(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1112(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1113(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1037(bParam2), iParam0, 0);
	return iVar2;
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_597(iParam0) != 0;
}

int func_597(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1114())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1115(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_598(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_599(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1114())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_598(iVar0))
		{
			if (func_353(func_1115(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_600(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1116(48);
	func_373(0, -1);
}

bool func_601(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_333((*Global_1347702)[iParam0]->f_15, 1);
}

int func_602(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_603(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_604(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_333((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_605(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_279(iParam0))
	{
		return false;
	}
	return func_196((*Global_1347702)[iParam0]->f_15);
}

int func_606()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_353(func_1117(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_607(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_405() && (func_605(38) || func_601(38)))
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
			if (func_405() && (func_605(39) || func_601(39)))
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
			iVar9 = func_1118(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_405() && (func_605(41) || func_601(41)))
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
			if (func_405() && (func_605(49) || func_601(49)))
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
			iVar9 = func_1118(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1119(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1120(iParam0, iVar13, iVar14))
	{
	}
	if (func_1121(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1122(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1123(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1124(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1125(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_608(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_609(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_405() && (func_605(38) || func_601(38)))
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
			if (func_405() && (func_605(39) || func_601(39)))
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
			if (func_405() && (func_605(49) || func_601(49)))
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
		if (func_405() && (func_605(38) || func_601(38)))
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
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_728(_create_var_string(2, sVar0), _create_var_string(2, func_1127(func_603(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_405() && (func_605(39) || func_601(39)))
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
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_405() && (func_605(49) || func_601(49)))
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
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1126(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_610(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_611(int iParam0, int iParam1)
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

bool func_612(int iParam0, int iParam1)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_613(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return false;
	}
	return func_1129(iParam0);
}

void func_614(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	func_1130(iParam0);
	func_1131(iParam0);
}

int func_615(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_616(int iParam0, bool bParam1)
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
	if (func_591(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1132(iVar0) || func_122(iVar0))
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

int func_617(int iParam0, bool bParam1)
{
	if (!func_591(iParam0, 0))
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

void func_618(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_705(iParam0))
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

bool func_619(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1037(bParam0));
}

bool func_620(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_702(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1133((386 + iVar28), 1);
			if (func_1134(iParam0, &Var0, iVar5, 0))
			{
				if (func_1135(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1136(iParam0, Var0, iVar5, 0) };
					func_1137(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_619(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_621(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1138(iParam0, iParam1);
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

bool func_621(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_623(iParam0))
	{
		return false;
	}
	if (!func_619(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_622(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_617(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_618(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1139(iVar0);
			}
		}
		if (!func_1111(iParam0, &uVar1, 1, 0, 0))
		{
			func_1107(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1140(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_620(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_620(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_620(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1098())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1141(iVar0))
				{
					func_620(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_620(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1142(Global_35, 2, 0, 1);
				if ((((func_705(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_613(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_705(iVar7) && func_613(24))
				{
					if (!func_620(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_620(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_620(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_331(480, 1);
	}
	return true;
}

bool func_623(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_624(int iParam0, int iParam1, int iParam2)
{
	if (!func_623(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_705(iVar4))
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
	if (func_353(611073244, 1, 0) && iParam2 == -897553835)
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
		func_659(func_1143(iParam0), func_658(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_333((*Global_1835011)[14]->f_1, 1))
			{
				func_331(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_619(0))
	{
		if (func_621(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_664(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_625(int iParam0)
{
	if ((iParam0 == -615217896 && !func_344()) || iParam0 != -615217896)
	{
		if (func_1144(Global_35, iParam0, &uVar0))
		{
			func_643(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_649();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_649();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_649();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_647();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_645();
			break;
	}
}

void func_626(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_645();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_646();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_647();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_648();
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
			func_649();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1145();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1146();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_627(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_628(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_629(int iParam0)
{
	bVar0 = func_611(iParam0, -2017733358);
	if (func_1147() < 3)
	{
		if (bVar0)
		{
			if (func_1149(func_1148(iParam0), iParam0))
			{
				func_659(79, func_658(func_1148(iParam0)), 1);
			}
			else
			{
				func_659(78, func_658(func_1148(iParam0)), 1);
			}
		}
		else
		{
			func_659(80, func_658(func_1150(iParam0)), 1);
		}
	}
}

bool func_630()
{
	if (((((func_1151(839908568, 400) || func_1151(-1134030454, 400)) || func_1151(623353496, 400)) || func_1151(-344413337, 400)) || func_1151(-1664948962, 400)) || func_1151(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_631(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_739(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_553(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_554(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_632(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_607(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_609(51, 0, 0, 0, 0, -1, 0);
			func_1152(8192);
			break;
		case 581047644:
			func_607(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_609(51, 0, 0, 0, 0, -1, 0);
			func_1152(524288);
			break;
		case -644199619:
			func_607(39, 0, 0, 0, 0, 0, 1, 0);
			func_609(39, 0, 0, 0, 0, -1, 0);
			func_1153(16);
			break;
		case 684296857:
			func_607(41, 0, 0, 0, 0, 0, 1, 0);
			func_609(41, 0, 0, 0, 0, -1, 0);
			func_1154(8);
			break;
		case 466137807:
			func_607(49, 0, 0, 0, 0, 0, 1, 0);
			func_609(49, 0, 0, 0, 0, -1, 0);
			func_1155(16);
			break;
		case -1087522507:
			func_607(43, 0, 0, -1791518714, func_1156(1), 0, -1, 0);
			func_1157(1);
			break;
		case -405829000:
			func_607(43, 0, 0, -2087881550, func_1156(2), 0, -1, 0);
			func_1157(2);
			break;
		case 378660860:
			func_607(43, 0, 0, 1908068621, func_1156(4), 0, -1, 0);
			func_1157(4);
			break;
		case 1566111097:
			func_607(43, 0, 0, 1611247019, func_1156(8), 0, -1, 0);
			func_1157(8);
			break;
		case 1276007140:
			func_607(43, 0, 0, 1319635688, func_1156(16), 0, -1, 0);
			func_1157(16);
			break;
	}
}

void func_633(int iParam0)
{
	if (func_1158() == 1)
	{
		if (func_601(39))
		{
			func_331(342, 0);
		}
		else
		{
			func_331(343, 0);
			func_1153(1);
		}
	}
	if (func_1158() >= 30)
	{
		func_331(344, 0);
	}
	func_607(39, 0, 0, 0, 0, 0, -1, 0);
	func_609(39, 0, 0, func_1158(), 30, 1, 0);
}

void func_634(int iParam0)
{
	if (func_1159() == 1)
	{
		if (func_601(49))
		{
			func_331(409, 0);
		}
		else
		{
			func_331(410, 0);
			func_1155(1);
		}
	}
	if (func_1159() >= 10)
	{
		func_331(411, 0);
	}
	func_607(49, 0, 0, 0, 0, 0, -1, 0);
	func_609(49, 0, 0, func_1159(), 10, 1, 0);
}

void func_635(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_331(437, 0);
			func_331(440, 0);
			func_1160(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_607(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_609(51, 0, 0, sVar0, func_1118(-949689219, 20), 1, 0);
			func_1152(1);
			func_1161(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1160(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_607(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_609(51, 0, 0, sVar0, func_1118(-1248968496, 20), 1, 0);
			func_1152(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1160(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_607(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_609(51, 0, 0, sVar0, func_1118(1706369307, 20), 1, 0);
			func_1152(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1160(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_607(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_609(51, 0, 0, sVar0, func_1118(1520110311, 20), 1, 0);
			func_1152(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_331(438, 0);
			func_1160(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_607(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_609(51, 0, 0, sVar0, func_1118(-1992824800, 20), 1, 0);
			func_1152(32768);
			break;
		default:
			func_331(439, 0);
			break;
	}
}

void func_636()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_637(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_601(43))
		{
			if (iParam0 == 281887510)
			{
				func_331(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_331(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_331(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_331(400, 0);
			}
		}
		else if (func_611(iParam0, 412399755))
		{
			func_1162(-1791518714);
			if (func_1163() == 0)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_601(44))
		{
			if (iParam0 == -222563712)
			{
				func_331(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_331(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_331(401, 0);
			}
		}
		else if (func_611(iParam0, 709057512))
		{
			func_1162(-2087881550);
			if (func_1163() == 1)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_601(45))
		{
			if (iParam0 == 2116770557)
			{
				func_331(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_331(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_331(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_331(398, 0);
			}
		}
		else if (func_611(iParam0, -1478961327))
		{
			func_1162(1908068621);
			if (func_1163() == 2)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1167(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1168(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1116(48);
					}
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_601(46))
		{
			if (iParam0 == 2085530337)
			{
				func_331(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_331(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_331(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_331(406, 0);
			}
		}
		else if (func_611(iParam0, -1238404098))
		{
			func_1162(1611247019);
			if (func_1163() == 3)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_601(47))
		{
			if (iParam0 == -1521783510)
			{
				func_331(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_331(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_331(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_331(403, 0);
			}
		}
		else if (func_611(iParam0, 1160548794))
		{
			func_1162(1319635688);
			if (func_1163() == 4)
			{
				func_373(0, 10);
				iVar1 = func_1164(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1165(iParam0) < func_1166(iParam0))
					{
						func_607(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_609(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_638(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1167(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1168(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1116(48);
		}
	}
}

void func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_353(func_1169(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1170(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1171(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_640(int iParam0, int iParam1, int iParam2)
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
				func_631(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_631(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_631(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_631(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_631(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_631(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_631(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_631(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_631(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_631(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_631(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_631(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_631(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1172())
			{
				func_631(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_631(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_631(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_631(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_631(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_631(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_631(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_631(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_631(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_631(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_631(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_631(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_631(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_641(int iParam0)
{
	if (func_601(41))
	{
		func_331(363, 0);
	}
	else
	{
		func_331(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1173(-1865241121);
			func_1174(-642026005);
			func_1175(-642026005);
			func_373(0, 10);
			break;
		case -2108314374:
			func_1173(2117142684);
			func_1174(-940584364);
			func_1175(-940584364);
			func_373(0, 10);
			break;
		case -1193798153:
			func_1173(-1409326024);
			func_1174(1972645282);
			func_1175(1972645282);
			func_373(0, 10);
			break;
		case -787702678:
			func_1173(-641744968);
			func_1174(1667205433);
			func_1175(1667205433);
			func_373(0, 10);
			break;
		case -804542901:
			func_1173(-946988203);
			func_1174(1362715885);
			func_1175(1362715885);
			func_373(0, 10);
			break;
		case -1696275132:
			func_1173(-646136018);
			func_1174(1053540370);
			func_1175(1053540370);
			func_373(0, 10);
			break;
		case -161595323:
			func_1173(-955835837);
			func_1174(-1100103852);
			func_1175(-1100103852);
			func_373(0, 10);
			break;
		case -1114363619:
			func_1173(-179276075);
			func_1174(-1409869209);
			func_1175(-1409869209);
			func_373(0, 10);
			break;
		case -368407134:
			func_1173(-492711560);
			func_1174(-1760235357);
			func_1175(-1760235357);
			func_373(0, 10);
			break;
		case 1997759228:
			func_1173(1764383959);
			func_1174(-138366827);
			func_1175(-138366827);
			func_373(0, 10);
			break;
		case 1265573293:
			func_1173(317501533);
			func_1174(-1261163843);
			func_1175(-1261163843);
			func_373(0, 10);
			break;
		case -1030441283:
			func_1173(817753087);
			func_1174(-963523016);
			func_1175(-963523016);
			func_373(0, 10);
			break;
		case -1490884871:
			func_1173(576606016);
			func_1174(560825326);
			func_1175(560825326);
			func_373(0, 10);
			break;
		case -395458616:
			func_1173(814934957);
			func_1174(858269539);
			func_1175(858269539);
			break;
	}
}

void func_642(int iParam0, int iParam1)
{
	func_1176(iParam0, iParam1, &uVar0);
}

int func_643(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_702(iParam1, 1, 0) };
		iParam3 = func_703(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1177(iParam1, iParam2, func_690(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1178(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_690(iParam3, 1)])
			{
				func_701(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1179(32768) && iParam1 != &Global_1946804->f_57[func_690(iParam3, 1)])
			{
				func_1180();
				func_701(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_701(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1181(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_701(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1182(0);
			func_1183(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_701(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_644(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1142(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1142(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1184("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1185(&Var3, iVar2, iVar0, iVar1))
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
						func_1186(iVar0);
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

void func_645()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_646()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_647()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_648()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_649()
{
	func_1187();
	func_1188();
	func_1189();
}

void func_650(int iParam0, int iParam1, bool bParam2)
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

void func_651(int iParam0, bool bParam1)
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
	func_1126(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_652(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_653(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_654(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_655(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_656(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_657(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_658(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_659(int iParam0, int iParam1, bool bParam2)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1190(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_660(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1190(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
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

int func_661()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1114())
	{
		return func_662();
	}
	iVar4 = (func_1114() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1114())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1191(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1115(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_662()
{
	iVar0 = get_random_int_in_range(0, func_1114());
	return func_1115(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_663(int iParam0)
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

bool func_664(int iParam0, int iParam1, int iParam2)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_702(iParam0, 0, 1) };
	Var5 = { func_1136(iParam0, Var0, Var0.f_4, 0) };
	return func_1192(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_665(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_615(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1193(81053684, 0) <= 0)
			{
				func_701(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_701(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1194(iParam0);
			if (func_1195(iVar0))
			{
				func_1196(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_701(30, iParam0, 0, 0, 0);
			}
			if (func_692() == -2125499975 || func_692() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_701(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_692() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_701(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1197(-525676072, 0))
			{
				if (func_1198(-525676072, &iVar1))
				{
					func_701(33, iVar1, 0, 0, 0);
				}
			}
			func_701(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1199(99217379))
		{
			func_643(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_614(24);
		if (func_644(&iVar2, 0))
		{
			func_620(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_666(int iParam0)
{
	if (func_611(iParam0, 943695443))
	{
		func_1200(0, iParam0);
	}
	else if (func_611(iParam0, -2096528786))
	{
		func_1200(1, iParam0);
	}
	else if (func_611(iParam0, -1094167013))
	{
		func_1200(2, iParam0);
	}
	else if (func_611(iParam0, 1936654645))
	{
		func_1200(3, iParam0);
	}
	else if (func_611(iParam0, 1306489306))
	{
		func_1200(4, iParam0);
	}
	else if (func_611(iParam0, 435762317))
	{
		func_1200(5, iParam0);
	}
	else if (func_611(iParam0, 1259363210))
	{
		func_1200(6, iParam0);
	}
	else if (func_611(iParam0, 881398259))
	{
		func_1200(7, iParam0);
	}
	else if (func_611(iParam0, -541549214))
	{
		func_1200(8, iParam0);
	}
	else if (func_611(iParam0, 130796156))
	{
		func_1200(-1, iParam0);
	}
}

int func_667(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1201(&Var4, 1356624740);
	return func_1202(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_668(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return Var0;
	}
	if (func_611(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_611(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_611(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_611(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_669(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_333((*Global_1835011)[4]->f_1, 1))
				{
					func_331(109, 1);
				}
			}
			break;
	}
}

void func_670(int iParam0, char* sParam1)
{
	sVar0 = func_1204(func_1203(0));
	func_721(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1205(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_671(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_591(iParam0, 0))
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
	if (!func_1206())
	{
		func_1207(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1208(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1208(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_612(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_610(iParam0);
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
	else if (!func_1209(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1210(_create_var_string(10, &cVar2, _create_var_string(0, func_658(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_611(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_658(iParam0));
	}
	func_721(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_672(int iParam0, int iParam1)
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

struct<10> func_673(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_674(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_675(int iParam0, int iParam1)
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

bool func_676(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1211(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1211(iParam0, Var2, 1))
				{
					if (func_1212(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1212(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_331(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_202(0, 0, 1))
		{
			func_373(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_677(int iParam0)
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

void func_678(int iParam0)
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
		func_331(iVar0, 0);
	}
}

void func_679()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1213(0);
			_unlock_set_unlocked(-121456797, false);
			func_1214();
		}
		return;
	}
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1215();
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
	func_1213(1);
}

void func_680()
{
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_324(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_681()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1216(0);
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
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1216(1);
}

void func_682()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1217(15000, 0, 0, 0, 1);
			func_1216(0);
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
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_289(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1216(1);
}

void func_683()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_353(1191437462, 1, 0) && !func_196((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_324(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1218(1))
			{
				func_655(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_353(1119149048, 1, 0) && !func_196((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_324(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1218(2))
			{
				func_655(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1218(4))
		{
			func_655(4);
		}
		if (func_1218(0))
		{
			func_1219(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_353(1191437462, 1, 0))
			{
				func_686(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_353(1119149048, 1, 0))
			{
				func_686(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1218(1))
		{
			func_1219(1);
		}
		if (func_1218(2))
		{
			func_1219(2);
		}
		if (func_1218(4))
		{
			func_1219(4);
		}
		if (!func_1218(0))
		{
			func_655(0);
		}
	}
}

void func_684()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_333((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1220() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_618(127400949);
		if (func_620(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1220() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1221(-2055673461, Var1, 1423542233);
		func_1221(-202131179, Var1, -1264898804);
		func_1221(2013836545, Var1, 1592019450);
		func_1221(1497476650, Var1, 1117400455);
		func_1221(1063571467, Var1, 1150213537);
		func_1221(2107224237, Var1, 1598825281);
		func_1221(1747981656, Var1, -712527121);
		func_1221(-1371140647, Var1, 454332195);
		func_1221(-19142973, Var1, 256105670);
		func_1221(-2074737817, Var1, -1328061889);
		func_1221(-1114256243, Var1, -782241404);
		func_1221(-1653277288, Var1, 1669853467);
		func_1221(1869398132, Var1, -1559225678);
		func_1221(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_705(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_613(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_613(24) && func_705(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_705(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_613(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_685()
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

int func_686(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1112(iParam0, 1);
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
			func_671(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_353(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_668(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_595(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_595(iParam0, 0, 0) - iParam1) < 0)
		{
			func_686(iParam0, func_595(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_610(iParam0) == -427144552)
	{
		if (!func_1222(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1223(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_619(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_671(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1224(iParam0, iParam1);
	return 1;
}

bool func_687(int iParam0)
{
	switch (func_615(iParam0))
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

void func_688(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_615(iParam0))
	{
		case -2061583405:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1225(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1226();
	}
	if (bParam1)
	{
		func_1227(0, 0);
	}
}

int func_689(int iParam0)
{
	Var0 = { func_702(iParam0, 1, 0) };
	return func_703(Var0.f_4);
}

int func_690(int iParam0, int iParam1)
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

void func_691(int iParam0)
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
		iVar0 = func_690(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1228(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_692()
{
	return Global_1946804->f_1;
}

bool func_693(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1229(iParam6);
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
		func_1231(uParam0, func_1230(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_690(iVar3, 1);
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
							if (func_1232(iVar3) && func_1233(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1234(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_694(int iParam0, int iParam1)
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

int func_695(int iParam0, int iParam1)
{
	vVar0 = { func_694(iParam0, iParam1) };
	return vVar0.x;
}

void func_696(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1235(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1236(iParam0))
	{
		return false;
	}
	if (func_1237(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1190(iParam0, 1)) || func_82(32768))
	{
		if (!func_1190(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1238())
	{
		return false;
	}
	return true;
}

void func_699(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1239(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1240(Var0);
}

struct<5> func_702(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1241(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_610(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1136(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1242(bParam1) };
			if (bParam2 && func_1243(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1134(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1134(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1135(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1244(bParam1) };
			switch (func_615(iParam0))
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
			if (func_1245(iParam0, -1823706425))
			{
				Var0 = { func_1136(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1245(iParam0, -1483207246))
			{
				Var0 = { func_1136(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1246(Var0, &Var27, bParam1, 0))
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

int func_703(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1247(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_704(int iParam0)
{
	func_1228(Global_1946804->f_1497.f_1[func_690(iParam0, 1)], 2, 6);
	func_1228(Global_1946804->f_1378.f_1[func_690(iParam0, 1)], 2, 6);
}

bool func_705(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_706(int iParam0)
{
	return iParam0 != 0;
}

int func_707(int iParam0)
{
	iVar0 = -1;
	if (!func_706(iParam0))
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

bool func_708(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_709(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1248(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_710(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_711(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_712(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_713(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_714(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_715(int iParam0, int iParam1)
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

void func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1249(iParam0, iParam6);
	func_1250(iParam0, iParam5);
	func_1251(iParam0, iParam4);
	func_1252(iParam0, iParam3);
	func_1253(iParam0, iParam2);
	func_1254(iParam0, iParam1);
}

bool func_717(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_714(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_713(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_712(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_709(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_710(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_711(iParam0);
	if (iVar5 < 1 || iVar5 > func_715(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_718(int iParam0, bool bParam1)
{
	return func_1089(func_291(), iParam0, bParam1);
}

void func_719(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_720(int iParam0, int iParam1)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1112(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1184("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1185(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_705(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1186(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1186(iVar1);
	}
	return false;
}

var func_721(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1255(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_722()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1256(iVar1);
		if (!_unlock_is_visible(func_1257(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_723()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1256(iVar0);
		if (!_unlock_is_visible(func_1257(iVar1)))
		{
			_unlock_set_visible(func_1257(iVar1), true);
		}
		iVar0++;
	}
}

bool func_724(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_725(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_726()
{
	return (func_203(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_727(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_591(iVar0, 0))
	{
		return 0;
	}
	if (!func_1258(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1259(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_611(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_702(iVar0, 0, 1) };
	iVar10 = func_1260(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1261(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1262(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_324(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1217(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_728(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_729(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_721(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_730(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_731(bool bParam0, bool bParam1)
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

void func_732(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1079())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1079())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_198(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_278(iParam0);
	if (func_200(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1263(1, iVar1);
					func_1263(8, iVar1);
					func_1263(7, iVar1);
					break;
				case 12:
					func_1263(6, iVar1);
					break;
				case 53:
					func_1263(3, iVar1);
					func_1263(7, iVar1);
					func_1263(4, iVar1);
					break;
				case 20:
					func_1263(8, iVar1);
					break;
				case 19:
					func_1263(1, iVar1);
					func_1263(2, iVar1);
					break;
				case 24:
					func_1263(3, iVar1);
					func_1263(9, iVar1);
					func_1263(20, iVar1);
					break;
				case 28:
					func_1263(1, iVar1);
					break;
				case 34:
					func_1263(23, iVar1);
					func_1263(2, iVar1);
					func_1263(18, iVar1);
					break;
				case 29:
					func_1263(0, iVar1);
					func_1263(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1263(0, iVar1);
					func_1263(3, iVar1);
					func_1263(2, iVar1);
					func_1263(11, iVar1);
					func_1263(6, iVar1);
					func_1263(25, iVar1);
					func_1263(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1263(5, iVar1);
					break;
				case 63:
					func_1263(1, iVar1);
					func_1263(3, iVar1);
					break;
				case 37:
					func_1263(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_369(0, 10, 11, 2116153146))
			{
				func_1263(7, iVar1);
				func_1263(4, iVar1);
			}
			else if (iParam0 == func_369(0, 7, 11, -379687487))
			{
				func_1263(8, iVar1);
				func_1263(15, iVar1);
			}
			else if (iParam0 == func_369(0, 8, 11, -1386089015))
			{
				func_1263(3, iVar1);
			}
			else if (iParam0 == func_369(0, 11, 11, -1952009645))
			{
				func_1263(6, iVar1);
				func_1263(3, iVar1);
			}
			else if (iParam0 == func_369(0, 12, 11, 2065895756))
			{
				func_1263(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1264()));
	if (!func_1265(629))
	{
		func_331(629, 0);
	}
}

int func_733(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_734(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_735(int iParam0, int iParam1, int iParam2)
{
	if (!func_734(iParam0))
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

int func_736()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_737(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_738(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1266(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_736())
	{
		return -1;
	}
	iVar0 = func_737(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_500(iVar1, 0);
	func_570(iVar1, 0);
	func_1267(iVar1, 0);
	func_1268(iVar1, 0);
	func_1269(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1270(iVar1, iParam4);
	}
	return iVar1;
}

int func_739(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_353(1811977508, 1, 0))
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
			if (func_591(iVar25, 0) && func_611(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_740(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_741(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	cVar0 = func_371(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_742(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_743(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1271(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1272() == 0 && !func_1273(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1274(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1275();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1276(Global_1310720->f_21))
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
			vVar7 = { func_1277(iVar0, iVar1) };
			bVar11 = func_1278(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_406(vVar7)) && func_1279(iVar0, bParam8, iParam12)) && !func_1280(iVar0)) || bVar11)
			{
				if (func_1281(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_744(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1282(vParam0);
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

void func_745()
{
	disable_script_brain_set(1);
}

void func_746()
{
}

void func_747()
{
	disable_script_brain_set(2);
}

bool func_748(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_749(char* sParam0)
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

void func_750(int iParam0)
{
	if (func_748(iParam0, 1))
	{
		func_1283(1);
	}
}

int func_751()
{
	return -1904156936;
}

bool func_752(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	switch (func_200(iParam0))
	{
		case 1:
			iVar0 = func_278(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_278(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_753()
{
	return 166188472;
}

int func_754()
{
	return 2015838421;
}

int func_755()
{
	return 207908017;
}

var func_756(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_757(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_758(var uParam0)
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

int func_759(var uParam0, int iParam1)
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

int func_760(var uParam0, char* sParam1)
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

int func_761(var uParam0)
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

void func_762(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_763(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_764()
{
	return Global_1572864->f_8;
}

void func_765(char[4] cParam0, int iParam1)
{
	func_1284(cParam0, iParam1);
	func_1285(cParam0, iParam1, 26);
}

int func_766(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	return 1;
}

int func_767(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	func_1286();
	create_model_hide_excluding_script_objects(-2594.61f, 456.53f, 147.05f, 0.5f, 305182125, false);
	func_163(&(uLocal_46[0]), 0, 1);
	func_1287(Global_35);
	_0x12e09e278c6c29b7(player_id());
	return 1;
}

int func_768(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_128(cParam0, 2)) || func_128(cParam0, 1))
	{
	}
	if (!is_entity_dead(iLocal_72))
	{
		if (!is_ped_in_vehicle(Global_35, iLocal_72, false))
		{
			set_ped_into_vehicle(Global_35, iLocal_72, -1);
		}
	}
	func_930(0f, 0f);
	func_169(0);
	func_1288(0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_942(&uLocal_280, 0);
	func_941(&uLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_163(&(uLocal_46[0]), 1, 1);
	func_164(1);
	_0x660a8f876df1d4f8(8);
	_0x660a8f876df1d4f8(24);
	return 1;
}

bool func_769(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (is_entity_dead(&(uLocal_46[iVar0])))
			{
				return false;
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		if (is_entity_dead(iLocal_49))
		{
			return false;
		}
		func_1291(cParam0);
		func_1292(cParam0);
		func_1293(cParam0);
		func_1294(cParam0);
		func_1295();
		func_1296(cParam0);
		if (!_does_anim_scene_exist(&(uLocal_202[0])) || !_is_anim_scene_started(&(uLocal_202[0]), false))
		{
			func_934(cParam0);
		}
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
				_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 1);
				func_225(&uLocal_215);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35 && !_0x660639bc60157048(Global_35, iLocal_72))
			{
				if (!is_entity_in_volume(iLocal_72, &(iLocal_93[6]), true, 0) && !is_entity_in_volume(iLocal_72, &(iLocal_93[12]), true, 0))
				{
					if (bVar1258)
					{
						disable_control_action(0, -17122892, false);
						if (func_218())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						if (is_entity_in_volume(iLocal_72, &(iLocal_93[8]), true, 0))
						{
							if (!func_230(1))
							{
								func_1297(1);
								func_467(3, 1);
							}
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(cParam0, 29);
					}
					else if (is_entity_in_volume(iLocal_72, &(iLocal_93[7]), true, 0))
					{
						disable_control_action(0, -17122892, false);
						if (func_218())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(cParam0, 29);
					}
					else if ((is_entity_in_volume(iLocal_72, &(iLocal_93[9]), true, 0) || is_entity_in_volume(iLocal_72, &(iLocal_93[10]), true, 0)) || is_entity_in_volume(iLocal_72, &(iLocal_93[11]), true, 0))
					{
						if (is_entity_in_volume(iLocal_72, &(iLocal_93[9]), true, 0))
						{
						}
						else if (is_entity_in_volume(iLocal_72, &(iLocal_93[10]), true, 0))
						{
						}
						else if (is_entity_in_volume(iLocal_72, &(iLocal_93[11]), true, 0))
						{
						}
						disable_control_action(0, -17122892, false);
						if (func_218())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						if (!func_230(1))
						{
							func_1297(1);
							func_467(3, 1);
						}
						func_943(&uLocal_262, 20);
						func_225(&uLocal_218);
						func_225(&uLocal_215);
						func_134(cParam0, 29);
					}
					iLocal_1262 = 1;
				}
				else
				{
					iLocal_1262 = 0;
				}
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_770(char[4] cParam0)
{
	disable_control_action(0, -17122892, false);
	iLocal_182[1] = 0;
	if (func_264(13))
	{
		func_265(cParam0, 13, &(uLocal_46[1]), 0, 0, 1, 0);
	}
	func_462(&iLocal_41);
	clear_gps_custom_route();
	if (!does_blip_exist(iLocal_41))
	{
		iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
	}
	func_184();
	func_177();
	return 1;
}

void func_771(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1300(cParam0, iParam1);
	func_1285(cParam0, iParam1, iParam2);
	func_1301(cParam0, &iParam3, iParam1, 0);
	func_1301(cParam0, &iParam4, iParam1, 2);
	func_1301(cParam0, &iParam5, iParam1, 4);
	func_1301(cParam0, &iParam6, iParam1, 5);
	func_1301(cParam0, &iParam7, iParam1, 7);
	func_977(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1302(cParam0, iParam1, cVar0);
	func_1303(cParam0, iParam1, iParam10);
}

int func_772(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_773(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_entity_dead(Global_35))
				{
					set_ped_into_vehicle(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(&(uLocal_46[iVar0])))
						{
							set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
							_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
							_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 1);
						}
					}
					iVar0++;
				}
				set_vehicle_forward_speed(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_774(char[4] cParam0)
{
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_942(&uLocal_280, 0);
	func_941(&uLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_215);
	if (func_230(2))
	{
		func_1304(2);
		func_467(1, 0);
	}
	if (func_230(4))
	{
		func_1304(4);
		func_467(2, 0);
	}
	return 1;
}

bool func_775(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		if (is_entity_dead(iLocal_49))
		{
			return false;
		}
		func_1305(cParam0);
		func_1306();
		func_1307();
		func_1308(cParam0);
		func_1296(cParam0);
	}
	disable_control_action(0, -17122892, false);
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_1309(1))
			{
				func_225(&uLocal_215);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				if (func_1310(cParam0) == 51 && func_1309(0))
				{
					if (is_entity_in_volume(iLocal_72, &(iLocal_93[16]), true, 0))
					{
						if (!func_230(2))
						{
							func_1297(2);
							func_467(1, 1);
						}
					}
					else if (is_entity_in_volume(iLocal_72, &(iLocal_93[17]), true, 0))
					{
						if (!func_230(4))
						{
							func_1297(4);
							func_467(2, 1);
						}
					}
					if (func_218())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_215);
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_776(var uParam0)
{
	if (func_466(8))
	{
		func_467(8, 0);
		if (!is_entity_dead(Global_35))
		{
			clear_ped_tasks(Global_35, 1, 0);
			set_player_control(get_player_index(), true, 0, false);
		}
	}
	if (_0xdd0b7c5ae58f721d(func_1311()))
	{
		_0x2412216fcc7b4e3e(func_1311());
	}
	_0x0a5a4f1979abb40e(&Local_1268);
	if (_0xdd0b7c5ae58f721d(&Local_1268))
	{
		_0x798be43c9393632b(&Local_1268);
	}
	if (is_srl_loaded())
	{
		end_srl();
	}
	func_462(&iLocal_41);
	func_177();
	return 1;
}

int func_777(var uParam0)
{
	func_164(1);
	return 1;
}

int func_778(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(iLocal_72))
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_into_vehicle(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				iVar1 = iVar0;
				if (!is_entity_dead(&(uLocal_46[iVar0])))
				{
					if (iVar1 == 0)
					{
						set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
						_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
						_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 1);
					}
				}
				iVar0++;
			}
			set_vehicle_forward_speed(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		func_930(0f, 0f);
	}
	else
	{
		func_1312(cParam0);
		if (_does_volume_exist(&(iLocal_93[19])))
		{
			func_460(&(iLocal_93[19]), 0, 0, 0);
		}
	}
	if (func_230(1))
	{
		func_1304(1);
		func_467(3, 0);
	}
	return 1;
}

int func_779(char[4] cParam0)
{
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_276, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_780(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		if (is_entity_dead(iLocal_49))
		{
			return false;
		}
		func_1313(cParam0);
		func_1314(cParam0);
		func_1315(cParam0);
		func_1316();
		func_1296(cParam0);
		func_1317();
		func_1318();
		func_1319();
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(4, 2), 100f, 1109393408, 1092616192, 1086324736, 3.5f, 1077936128);
				if (is_entity_in_volume(iLocal_72, &(iLocal_93[19]), true, 0))
				{
					if (func_1322(iLocal_72, func_1321(4, 2), 45f) || func_1322(iLocal_72, func_1321(4, 3), 45f))
					{
						if (func_218())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_462(&iLocal_41);
						disable_all_control_actions(0);
						enable_control_action(0, -1450761377, true);
						enable_control_action(0, -771458680, true);
						enable_control_action(0, -813019446, true);
						enable_control_action(0, -668070958, true);
						enable_control_action(0, 1250966545, true);
						if (!is_entity_dead(iLocal_49))
						{
							clear_ped_tasks(iLocal_49, 1, 0);
							task_stand_still(iLocal_49, -1);
						}
						bring_vehicle_to_halt(iLocal_72, 1f, 5, false);
						func_943(&uLocal_262, 20);
						if (!func_1322(iLocal_72, func_1321(4, 2), 1119092736))
						{
							if (!func_230(1))
							{
								func_1297(1);
								func_467(3, 1);
							}
						}
						return true;
					}
				}
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_781(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	func_1323();
	if (is_vehicle_driveable(iLocal_72, false, false))
	{
		_0x0c3f0f7f92ca847c(iLocal_72, 13.5f);
	}
	return 1;
}

int func_782(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_783(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_ped_in_vehicle(Global_35, iLocal_72, false))
				{
					set_ped_into_vehicle(Global_35, iLocal_72, -1);
				}
			}
		}
		else
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(uLocal_46[iVar0])))
		{
			if (iVar0 == 0)
			{
				set_current_ped_weapon(&(uLocal_46[iVar0]), -1569615261, true, 0, false, false);
				if (!is_entity_dead(iLocal_72))
				{
					if (!is_ped_in_vehicle(&(uLocal_46[iVar0]), iLocal_72, false))
					{
						set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
					}
					_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
					_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 1);
				}
				set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
			}
			else if (iVar0 == 1)
			{
			}
		}
		iVar0++;
	}
	return 1;
}

int func_784(char[4] cParam0)
{
	disable_all_control_actions(0);
	enable_control_action(0, -1450761377, true);
	enable_control_action(0, -771458680, true);
	enable_control_action(0, -813019446, true);
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	if (!func_934(cParam0))
	{
		return 0;
	}
	func_434(&(cParam0->f_7375), 100f);
	func_435(&(cParam0->f_7375), 175f);
	func_1324(cParam0);
	if (func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		}
		func_1325(cParam0, 1);
	}
	func_1288(2);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_941(&uLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	func_942(&uLocal_280, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_464(&uLocal_215);
	_0x660a8f876df1d4f8(21);
	_0x660a8f876df1d4f8(8);
	_0x660a8f876df1d4f8(24);
	set_vehicle_is_considered_by_player(iLocal_72, false);
	set_ped_config_flag(Global_35, 445, true);
	return 1;
}

bool func_785(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = iVar0;
			if (does_entity_exist(&(uLocal_46[iVar1])) && is_ped_dead_or_dying(&(uLocal_46[iVar1]), true))
			{
				return false;
			}
			iVar0++;
		}
		func_1326(cParam0);
		func_1327(cParam0);
		func_1328(cParam0);
		func_1329(cParam0);
		func_1330(cParam0);
		func_1331(cParam0);
		func_1296(cParam0);
		func_1332();
		if (is_entity_in_volume(Global_35, &(iLocal_93[18]), false, 0))
		{
			_0x18ff3110cf47115d(Global_35, 9, 0);
		}
		else
		{
			_0x18ff3110cf47115d(Global_35, 9, 1);
		}
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_1333(cParam0))
			{
				func_467(8, 1);
				set_player_control(get_player_index(), false, 256, false);
				if (func_218())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_176(cParam0);
				func_1334(cParam0);
				func_225(&uLocal_218);
				func_225(&uLocal_215);
				func_135(cParam0, 51);
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_786(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	set_vehicle_is_considered_by_player(iLocal_72, true);
	set_ped_config_flag(Global_35, 446, false);
	set_ped_config_flag(Global_35, 445, false);
	func_1335();
	func_1336();
	_0x18ff3110cf47115d(Global_35, 9, 1);
	return 1;
}

int func_787(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_788(char[4] cParam0)
{
	if (func_230(1))
	{
		func_467(3, 1);
	}
	else
	{
		func_467(3, 0);
	}
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(Global_35))
		{
			set_ped_into_vehicle(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!is_entity_dead(&(uLocal_46[iVar0])))
			{
				if (iVar0 == 0)
				{
					set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
					set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
					task_stand_still(&(uLocal_46[iVar0]), -1);
				}
			}
			iVar0++;
		}
	}
	func_173(1);
	_0x2fcd528a397e5c88(&(iLocal_93[19]), 2179080);
	if (!is_entity_dead(&(uLocal_46[0])))
	{
		if (!is_entity_dead(iLocal_72))
		{
			set_vehicle_is_considered_by_player(iLocal_72, true);
			_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
			_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 1);
		}
	}
	return 1;
}

int func_789(char[4] cParam0)
{
	if (!func_934(cParam0))
	{
		return 0;
	}
	if (func_120(cParam0, 4))
	{
		func_930(0f, 0f);
	}
	func_1288(4);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_1337();
	func_164(1);
	return 1;
}

bool func_790(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		func_1338(cParam0);
		func_1339();
		func_1340(cParam0);
		func_1296(cParam0);
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_928(&uLocal_215) >= 30f)
			{
				func_225(&uLocal_215);
				func_134(cParam0, 1);
			}
			disable_all_control_actions(0);
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(0, -813019446, true);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, 1250966545, true);
			if (_does_anim_scene_exist(&(uLocal_202[4])))
			{
				if (_is_anim_scene_loaded(&(uLocal_202[4]), true, false))
				{
					if (_is_anim_scene_finished(&(uLocal_202[4]), false))
					{
						func_468(4);
						func_225(&uLocal_215);
						func_134(cParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35 && is_ped_in_vehicle(Global_35, iLocal_72, false))
			{
				func_225(&uLocal_215);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35 && is_ped_in_vehicle(Global_35, iLocal_72, false))
			{
				if (is_entity_in_volume(iLocal_72, &(iLocal_93[20]), true, 0))
				{
					if (func_218())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(cParam0, 29);
				}
				else if (is_entity_in_volume(iLocal_72, &(iLocal_93[21]), true, 0))
				{
					if (func_218())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_791(var uParam0)
{
	func_173(0);
	if (_does_volume_exist(&(iLocal_93[19])))
	{
		func_172(&(iLocal_93[19]));
	}
	func_469();
	func_177();
	return 1;
}

int func_792(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_793(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_entity_dead(Global_35))
				{
					set_ped_into_vehicle(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!is_entity_dead(&(uLocal_46[iVar0])))
					{
						if (iVar0 == 0)
						{
							set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
							_0xe01f55b2896f6b37(iLocal_72, 1);
							_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 0);
							_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 1);
							set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
							_task_vehicle_drive_to_destination(&(uLocal_46[iVar0]), iLocal_72, func_1298(12, 4), 4.5f, 69468168, 3, 5f, 5f, 0);
						}
					}
					iVar0++;
				}
				set_vehicle_forward_speed(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_794(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		func_467(4, 0);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_795(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(Global_35, false))
		{
			set_ped_reset_flag(Global_35, 173, true);
		}
		func_1341(cParam0);
		func_1342(cParam0);
		func_1343(cParam0);
		func_1344();
		func_1345();
		func_1346();
		func_1296(cParam0);
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if ((func_1347() && !_0x660639bc60157048(Global_35, iLocal_72)) && is_entity_in_volume(iLocal_72, &(iLocal_93[30]), true, 0))
			{
				func_225(&uLocal_218);
				func_135(cParam0, 51);
				func_225(&uLocal_215);
				func_134(cParam0, 29);
			}
			if (is_entity_in_volume(Global_35, &(iLocal_93[43]), true, 0))
			{
				func_1348(iLocal_65);
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_796(char[4] cParam0)
{
	func_185();
	func_176(cParam0);
	func_177();
	func_1349();
	return 1;
}

int func_797(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_798(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_entity_dead(Global_35))
				{
					set_ped_into_vehicle(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!is_entity_dead(&(uLocal_46[iVar0])))
					{
						if (iVar0 == 0)
						{
							set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
							_0xe01f55b2896f6b37(iLocal_72, 1);
							_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 0);
							_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 1);
							set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
							open_sequence_task(&iLocal_40);
							_task_vehicle_drive_to_destination(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
							close_sequence_task(iLocal_40);
							task_perform_sequence(&(uLocal_46[iVar0]), iLocal_40);
							clear_sequence_task(&iLocal_40);
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (3 - 1))
				{
					if (!is_entity_dead(&(iLocal_50[iVar0])))
					{
						set_ped_reset_flag(&(iLocal_50[iVar0]), 3, true);
						if (iVar0 == 0)
						{
							if (!is_entity_dead(&(iLocal_54[iVar0])))
							{
								func_1350(&(iLocal_50[iVar0]), &(iLocal_54[iVar0]));
							}
						}
						set_ped_config_flag(&(iLocal_50[iVar0]), 167, true);
						set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
						open_sequence_task(&iLocal_40);
						if (iVar0 == 0)
						{
							task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush", 0f, -60f, 0, 1544, -1, 0);
						}
						else if (iVar0 == 1)
						{
						}
						else if (iVar0 == 2)
						{
						}
						task_stand_still(0, -1);
						close_sequence_task(iLocal_40);
						task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
						clear_sequence_task(&iLocal_40);
					}
					iVar0++;
				}
				set_vehicle_forward_speed(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			func_930(0f, 0f);
			func_225(&uLocal_215);
		}
		if (func_928(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_799(char[4] cParam0)
{
	func_434(&(cParam0->f_7375), 250f);
	func_435(&(cParam0->f_7375), 350f);
	func_1351(cParam0);
	if (func_8(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!is_entity_dead(&(uLocal_46[iVar0])))
				{
					set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
					open_sequence_task(&iLocal_40);
					_task_vehicle_drive_to_destination(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
					close_sequence_task(iLocal_40);
					task_perform_sequence(&(uLocal_46[iVar0]), iLocal_40);
					clear_sequence_task(&iLocal_40);
				}
			}
			iVar0++;
		}
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	uLocal_337 = _0xbd3324281e8b9933(&(iLocal_93[47]), 2, 4, 0);
	return 1;
}

bool func_800(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_72))
		{
			return false;
		}
		if (is_ped_in_any_vehicle(Global_35, false))
		{
			set_ped_reset_flag(Global_35, 173, true);
		}
		func_1352(cParam0);
		func_1353(cParam0);
		func_1354(cParam0);
		func_1296(cParam0);
	}
	if (is_entity_in_volume(iLocal_72, &(iLocal_93[32]), true, 0))
	{
		if (_does_anim_scene_exist(&(uLocal_202[5])))
		{
			if (!_is_anim_scene_started(&(uLocal_202[5]), false) && !_is_anim_scene_finished(&(uLocal_202[5]), false))
			{
				func_1288(5);
			}
		}
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (!func_466(9))
			{
				if (is_entity_in_volume(iLocal_72, &(iLocal_93[31]), true, 0))
				{
					func_467(9, 1);
					func_1325(cParam0, 2);
				}
			}
			if (is_entity_in_volume(iLocal_72, &(iLocal_93[33]), true, 0))
			{
				func_225(&uLocal_215);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!is_entity_dead(iLocal_72))
			{
				_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
				_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 1);
				_0xe01f55b2896f6b37(iLocal_72, 1);
			}
			if (func_218())
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
			}
			func_943(&uLocal_262, 20);
			func_225(&uLocal_218);
			func_134(cParam0, 29);
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_801(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	return 1;
}

int func_802(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!does_entity_exist(&(iLocal_50[iVar0])) || !_0xa0bc8faed8cfeb3c(&(iLocal_50[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	uLocal_337 = _0xbd3324281e8b9933(&(iLocal_93[47]), 2, 4, 0);
	if (func_8(cParam0, 8))
	{
		func_467(34, 1);
	}
	return 1;
}

int func_803(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (!is_entity_dead(&(iLocal_50[iVar1])))
			{
				set_ped_config_flag(&(iLocal_50[iVar1]), 167, false);
				if (!is_entity_dead(&(iLocal_54[iVar1])))
				{
					if (!is_ped_on_mount(&(iLocal_50[iVar1])))
					{
						_set_ped_on_mount(&(iLocal_50[iVar1]), &(iLocal_54[iVar1]), -1, true);
					}
				}
				set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
				set_ped_reset_flag(&(iLocal_50[iVar1]), 3, true);
				clear_sequence_task(&iLocal_40);
				open_sequence_task(&iLocal_40);
				switch (iVar1)
				{
					case 0:
						task_follow_nav_mesh_to_coord(0, func_1298(7, 12), 1.25f, 90000, 8f, 0, 40000f);
						break;
					case 1:
						task_follow_nav_mesh_to_coord(0, func_1298(7, 13), 1.25f, 90000, 8f, 0, 40000f);
						break;
					case 2:
						task_follow_nav_mesh_to_coord(0, func_1298(7, 14), 1.001f, 90000, 8f, 0, 40000f);
						break;
				}
				task_stand_still(0, -1);
				close_sequence_task(iLocal_40);
				task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
			}
			switch (iVar1)
			{
				case 0:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 6), 2, 1073741824);
					break;
				case 1:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 7), 2, 1073741824);
					break;
				case 2:
					func_1355(&(iLocal_54[iVar1]), func_228(7, 8), 2, 1073741824);
					break;
			}
			iVar0++;
		}
	}
	_0x710448d44a64c213(0);
	return 1;
}

int func_804(char[4] cParam0)
{
	func_1356(cParam0);
	if (!func_1357() && !func_1358())
	{
		return 0;
	}
	func_467(34, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_941(&uLocal_261, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_1359(1);
	stop_ped_speaking(&(uLocal_46[0]), true);
	set_current_ped_weapon(Global_35, 1999408598, true, 1, false, false);
	iVar0 = _get_ammo_type_for_weapon(1999408598);
	iVar1 = get_ped_ammo_by_type(Global_35, iVar0);
	if (iVar1 < 20)
	{
		set_ped_ammo_by_type(Global_35, iVar0, 20);
	}
	func_164(0);
	if (is_vehicle_driveable(iLocal_72, false, false))
	{
		set_vehicle_is_considered_by_player(iLocal_72, false);
	}
	return 1;
}

bool func_805(char[4] cParam0)
{
	if (!bLocal_188 && func_935(&uLocal_368, "MAR2_MCS4", 1, 1))
	{
		bLocal_188 = true;
	}
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1356(cParam0);
		func_1360(cParam0);
		func_1361();
		func_1296(cParam0);
	}
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_1362())
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1363())
			{
				if (func_218())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_225(&uLocal_215);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_806(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_player_forced_aim(player_id(), false, 0, -1, false);
	}
	remove_cover_point(iVar1348);
	remove_cover_point(iVar1349);
	func_462(&iLocal_41);
	func_1359(0);
	func_177();
	stop_ped_speaking(&(uLocal_46[0]), false);
	func_189(Global_35, 0);
	return 1;
}

int func_807(char[4] cParam0)
{
	uLocal_337 = _0xbd3324281e8b9933(&(iLocal_93[47]), 2, 4, 0);
	if (func_8(cParam0, 8))
	{
	}
	_0x710448d44a64c213(0);
	return 1;
}

int func_808(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			if (_0xb655db7582aec805(&(uLocal_46[0])))
			{
				_0xf6262491c7704a63(&(uLocal_46[0]), 0);
			}
		}
	}
	if (bLocal_188)
	{
		func_99(cParam0, 4194304);
	}
	return 1;
}

int func_809(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!is_entity_dead(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(Global_35))
		{
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!is_entity_dead(&(uLocal_46[iVar0])))
			{
				if (iVar0 == 0)
				{
					_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
					_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 1);
				}
			}
			iVar0++;
		}
		func_1288(6);
		set_gameplay_cam_relative_heading(0f, 1f);
		set_gameplay_cam_relative_pitch(-10f, 1f);
	}
	else
	{
		func_1325(cParam0, 3);
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	func_164(2);
	return 1;
}

bool func_810(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1364(cParam0);
		func_1365(cParam0);
		func_1366();
		func_1296(cParam0);
	}
	func_1367();
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_1368(cParam0, 0))
			{
				func_467(8, 1);
				set_player_control(get_player_index(), false, 0, false);
				if (func_218())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_176(cParam0);
				func_943(&uLocal_262, 20);
				func_225(&uLocal_218);
				func_225(&uLocal_215);
				func_134(cParam0, 29);
				func_1369();
				func_1370(cParam0, 0);
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_811(char[4] cParam0)
{
	func_176(cParam0);
	if (func_1371("MISSION_CREATE_CONVERSATION"))
	{
		func_1372("MISSION_CREATE_CONVERSATION", 0, 0);
	}
	func_177();
	if (is_vehicle_driveable(iLocal_72, false, false))
	{
		set_vehicle_is_considered_by_player(iLocal_72, true);
	}
	return 1;
}

int func_812(var uParam0)
{
	uLocal_337 = _0xbd3324281e8b9933(&(iLocal_93[47]), 2, 4, 0);
	func_164(2);
	if (is_vehicle_driveable(iLocal_72, false, false))
	{
		_set_entity_coords_and_heading(iLocal_72, -1745.369f, 312.5629f, 109.5282f, -38.69f, false, false, true);
		set_vehicle_on_ground_properly(iLocal_72, 0f);
	}
	return 1;
}

int func_813(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (_does_volume_exist(&(iLocal_93[5])))
		{
			_0xd17672447692478e(&(iLocal_93[5]), 0);
			_0xc1799fafd2fdf52b(&(iLocal_93[5]), 0, 0, 1);
			_0xc1799fafd2fdf52b(&(iLocal_93[68]), 0, 0, 0);
		}
	}
	else if (!is_entity_dead(iLocal_72))
	{
		if (!is_entity_dead(Global_35))
		{
			set_ped_into_vehicle(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!is_entity_dead(&(uLocal_46[iVar0])))
				{
					set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_814(char[4] cParam0)
{
	func_467(4, 0);
	if (!is_entity_dead(iLocal_72))
	{
		_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
		_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 1);
	}
	func_467(8, 0);
	set_player_control(get_player_index(), true, 0, false);
	func_930(0f, 0f);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_464(&uLocal_1433);
	func_1373();
	_0x710448d44a64c213(1);
	return 1;
}

bool func_815(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1374(cParam0);
		func_1375(cParam0);
		func_1296(cParam0);
		func_1376(cParam0);
	}
	func_440(cParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1);
	switch (func_1289(cParam0))
	{
		case 0:
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!bVar1421)
			{
				if (func_466(4))
				{
					if (!func_1347())
					{
						func_1377();
					}
					func_1378(func_1347());
					if (func_1379())
					{
						if (func_1380())
						{
							iLocal_1423 = 1;
						}
						else if (func_1381())
						{
							iLocal_1423 = 0;
						}
						iLocal_1424 = 1;
						func_467(4, 0);
						func_1377();
						func_225(&uLocal_218);
					}
					if ((func_1382(&uLocal_1433, 12f) && !bVar1421) && func_1347())
					{
						if (func_308())
						{
							iLocal_1423 = 1;
						}
						else
						{
							iLocal_1423 = 0;
						}
						iLocal_1424 = 1;
						func_467(4, 0);
						func_1377();
						func_225(&uLocal_218);
					}
				}
			}
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				if (is_entity_in_volume(iLocal_72, &(iLocal_93[6]), true, 0))
				{
					if (func_218())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_943(&uLocal_262, 20);
					func_225(&uLocal_218);
					func_135(cParam0, 51);
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_816(char[4] cParam0)
{
	func_185();
	func_1377();
	func_176(cParam0);
	func_177();
	return 1;
}

int func_817(char[4] cParam0)
{
	if (!func_440(cParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1))
	{
		return 0;
	}
	uLocal_337 = _0xbd3324281e8b9933(&(iLocal_93[47]), 2, 4, 0);
	return 1;
}

int func_818(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (func_1383(cParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!is_entity_dead(iLocal_72))
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_into_vehicle(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= (2 - 1))
			{
				if (iVar0 == 0)
				{
					if (!is_entity_dead(&(uLocal_46[iVar0])))
					{
						set_ped_into_vehicle(&(uLocal_46[iVar0]), iLocal_72, 0);
						_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
						_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[iVar0]), 1);
					}
				}
				iVar0++;
			}
			set_vehicle_forward_speed(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		func_930(0f, 0f);
	}
	func_164(3);
	return 1;
}

int func_819(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		func_1325(cParam0, 4);
	}
	func_434(&(cParam0->f_7375), 100f);
	func_435(&(cParam0->f_7375), 175f);
	func_175(0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_943(&uLocal_262, 0);
	func_944(&uLocal_278, 0);
	func_945(&uLocal_265, 0);
	iLocal_201 = 0;
	func_946(&iLocal_167);
	func_946(&uLocal_172);
	func_947(&uLocal_190);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	return 1;
}

bool func_820(char[4] cParam0)
{
	if (func_1289(cParam0) > -1 && func_1289(cParam0) < 29)
	{
		func_1290(cParam0);
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_46[iVar0])))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1384(cParam0);
		func_1385(cParam0);
		func_1296(cParam0);
	}
	func_934(cParam0);
	switch (func_1289(cParam0))
	{
		case 0:
			if (func_1386(Global_35, -2586.254f, 455.4355f, 145.1662f, 0) < 12f)
			{
				disable_control_action(0, -17122892, false);
			}
			if (get_ped_in_vehicle_seat(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(12, 5), 40f, 20f, 1092616192, 1086324736, 1082130432, 1077936128);
				if (is_entity_in_volume(iLocal_72, &(iLocal_93[13]), true, 0))
				{
					if (func_218())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					func_462(&iLocal_41);
					clear_gps_custom_route();
					func_467(8, 1);
					set_player_control(get_player_index(), false, 256, false);
					bring_vehicle_to_halt(iLocal_72, 1f, 5, false);
					func_225(&uLocal_218);
					func_225(&uLocal_215);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!is_entity_dead(iLocal_49))
			{
				clear_ped_tasks(iLocal_49, 1, 0);
				task_stand_still(iLocal_49, -1);
			}
			if (func_1387(Global_35, &iLocal_201, 1, 0, 0, 1084227584, 100, 0, 0) || func_928(&uLocal_215) >= 5f)
			{
				func_467(7, 1);
				bring_vehicle_to_halt(iLocal_72, 1f, 5, false);
				func_164(0);
				if (!is_entity_dead(Global_35))
				{
					set_blocking_of_non_temporary_events(Global_35, true);
					task_vehicle_temp_action(Global_35, iLocal_72, 24, 5000);
				}
				func_225(&uLocal_215);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (!bVar1433)
			{
				if (!is_entity_dead(iLocal_49))
				{
					iLocal_1436 = 1;
					clear_ped_tasks(iLocal_49, 1, 0);
					task_stand_still(iLocal_49, -1);
				}
			}
			if (func_928(&uLocal_215) >= 1.5f)
			{
				if (!is_entity_dead(Global_35))
				{
					set_blocking_of_non_temporary_events(Global_35, true);
					open_sequence_task(&iLocal_40);
					task_leave_vehicle(0, iLocal_72, 0, 0);
					task_follow_nav_mesh_to_coord(0, func_1298(11, 0), 1f, 20000, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, &(uLocal_46[1]), -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_40);
					task_perform_sequence(Global_35, iLocal_40);
					clear_sequence_task(&iLocal_40);
				}
				func_225(&uLocal_215);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (func_928(&uLocal_215) > 1f)
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (func_928(&uLocal_215) >= 2.5f)
			{
				if (func_218())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_943(&uLocal_262, 20);
				func_225(&uLocal_218);
				func_135(cParam0, 51);
				func_225(&uLocal_215);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1289(cParam0) == 29;
}

int func_821(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	func_1388();
	func_117(1, 16384, 1);
	return 1;
}

int func_822(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
	}
	return 1;
}

int func_823(char[4] cParam0)
{
	if (func_8(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			if (!is_entity_dead(iLocal_72))
			{
				if (is_ped_in_vehicle(Global_35, iLocal_72, false))
				{
					_0xe0b61ed8bb37712f(Global_35);
				}
			}
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			if (!is_entity_dead(iLocal_72))
			{
				if (is_ped_in_vehicle(&(uLocal_46[0]), iLocal_72, false))
				{
					_0xe0b61ed8bb37712f(&(uLocal_46[0]));
				}
			}
		}
	}
	func_167();
	_set_entity_coords_and_heading(iLocal_72, -2582.62f, 457.23f, 145.88f, 160.81f, false, false, true);
	func_386(cParam0, 524288);
	return 1;
}

int func_824(char[4] cParam0)
{
	if (!func_934(cParam0))
	{
		return 0;
	}
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_225(&uLocal_218);
	func_225(&uLocal_215);
	if (func_1389(66))
	{
	}
	func_1390(cParam0, -1, 0);
	func_1(cParam0, 4);
	return 1;
}

int func_825(char[4] cParam0)
{
	switch (func_1289(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_826(var uParam0)
{
	return 1;
}

char* func_827()
{
	return "cutDeleteMe";
}

char* func_828(int iParam0)
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
	return func_1391(iVar0);
}

char* func_829(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1392(iVar0);
}

char* func_830(int iParam0)
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

void func_831(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_396(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1393(uParam0, iParam1);
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
		iVar1 = func_1394(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1395(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1396(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1397(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1398(uParam0->f_13[iVar0], 2);
		}
	}
}

bool func_832(int iParam0, int iParam1)
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
	if (func_401(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_401(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_401(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_401(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_401(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_401(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_401(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_401(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_833(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_834(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_835(var uParam0)
{
	return uParam0->f_862;
}

void func_836(var uParam0)
{
	if (func_1399(&iVar0))
	{
		if (func_591(iVar0, 0))
		{
			if (func_615(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_643(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_591(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1400(-1);
	}
	func_1401(1);
	set_entity_invincible(Global_35, true);
	if (!func_834(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_834(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_834(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_834(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_834(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_834(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_834(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_834(*iParam0, 4) && !func_834(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_834(*iParam0, 2048))
	{
		func_849(0, 0);
	}
	if (func_834(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_834(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_834(*iParam0, 8192))
	{
		func_1402();
	}
	if (!func_834(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_834(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_834(*iParam0, 1024))
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
		if (!func_834(*iParam0, 16))
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
						if (func_1403() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_406(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1404(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1405(2);
						func_1406(-1);
						func_1407(vVar3);
						func_1409(func_1408());
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
	if (!func_834(*iParam0, 4096))
	{
		func_1410(Global_35);
	}
	if (!func_834(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_834(*iParam0, 2097152))
	{
		if (func_1411() || _0x50f124e6ef188b22(Global_35))
		{
			func_1412(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_838(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_839(var uParam0)
{
	if (func_833(uParam0, 2048) && !func_406(func_1413(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_833(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_919(iVar1, func_1413(uParam0), func_1414(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_833(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_919(iVar3, func_1413(uParam0), func_1414(uParam0), 2, 1073741824);
		}
	}
}

void func_840(var uParam0)
{
	if ((func_833(uParam0, 268435456) && !func_406(func_1413(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1413(uParam0) };
			func_919(iVar0, vVar1, func_1415(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_841(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_406(vParam1))
	{
		func_1416(uParam0, 2048, 1);
	}
	else
	{
		func_763(uParam0, 2048);
		if (bParam5)
		{
			func_763(uParam0, -2147483648);
		}
	}
}

void func_842(var uParam0)
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
					if (!func_1417(uParam0->f_13[iVar0], 8))
					{
						if (func_705(func_1142(iVar1, 0, 1, 0)))
						{
							if (!func_1418(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_705(func_1142(iVar1, 1, 1, 0)))
						{
							if (!func_1418(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_843(var uParam0, bool bParam1)
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

void func_844(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1239(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1419(iParam1, 29, bVar4, 1, 0);
			func_1419(iParam1, 31, bVar4, 1, 0);
			func_1419(iParam1, 30, bVar4, 1, 0);
			func_1419(iParam1, 22, bVar4, 1, 0);
			func_1419(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1179(32768) && func_1420(1108822547, 8)) && func_1421(10, iParam3))
	{
		func_1422(iParam1, 0, 1);
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
			iVar3 = func_1247(iVar1, 1);
			if (func_1420(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1421(iVar1, iParam3))
				{
				}
				else if ((func_1420(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1420(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1419(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1423(iVar3, 1, 6);
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
								func_1419(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1420(iVar3, 1))
							{
								func_1424(iVar3, 1, 6);
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

bool func_845(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1425((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_846(int iParam0)
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

int func_847(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_848(int iParam0, int iParam1)
{
	return func_1426(&uVar0, iParam0, iParam1);
}

void func_849(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_705(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1427(1);
	}
}

void func_850(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_851(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_852(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_853(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_854(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_855(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_856(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_857(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
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
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_860(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_861(var uParam0, int iParam1)
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

int func_862(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_878((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_863(var uParam0, int iParam1)
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

int func_864(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_891((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_865(var uParam0, char* sParam1)
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

int func_866(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_880((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_867(var uParam0, char* sParam1)
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

int func_868(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_882((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_869(int iParam0, int iParam1)
{
	iVar0 = func_1428(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_870(var uParam0, char* sParam1, int iParam2)
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

int func_871(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_887((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_872(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_873(var uParam0, char* sParam1)
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

int func_874(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_884((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_875()
{
	return uVar0;
}

int func_876(var uParam0, int iParam1)
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

void func_877(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_878(var uParam0)
{
	return *uParam0 != 0;
}

void func_879(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_880(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_881(var uParam0)
{
	if (!func_908(uParam0->f_3, 1))
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
		func_872(&(uParam0->f_3), 1);
	}
}

bool func_882(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_883(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_884(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_885(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_1429(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_886(var uParam0)
{
	if (func_908(*uParam0, 2))
	{
		return true;
	}
	if (!func_908(*uParam0, 1))
	{
		func_1430(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_872(uParam0, 2);
		return true;
	}
	return false;
}

bool func_887(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_908(uParam0->f_2, 1))
	{
		if (func_1431(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1391(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_310())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1098())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_872(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_889(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_890(var uParam0, int iParam1)
{
	if (!func_908(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_891(var uParam0)
{
	return *uParam0 != 0;
}

void func_892(var uParam0)
{
	if (!func_908(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_872(&(uParam0->f_2), 1);
	}
}

bool func_893(var uParam0)
{
	return *uParam0 != 0;
}

void func_894(var uParam0)
{
	if (!func_908(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_872(&(uParam0->f_3), 1);
	}
}

bool func_895(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_896(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_897(var uParam0)
{
	return func_1432(*uParam0);
}

void func_898(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_899(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_900(var uParam0)
{
	if (!func_908(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_872(&(uParam0->f_2), 1);
	}
}

bool func_901(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_902(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

bool func_903(var uParam0, int iParam1, char* sParam2)
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

struct<4> func_904(int iParam0)
{
	if (!func_194(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_905(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_927(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1433(uParam0, 0))
			{
				if (func_1434(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1435(uParam0, 1, &iVar0))
					{
					}
					if (func_1436(uParam0, 3, &cVar2))
					{
					}
					if (func_1435(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1435(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1435(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1435(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1435(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1437(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_510((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_510(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_510(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_222(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1437(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_510(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1433(uParam0, 12))
			{
				if (func_1435(uParam0, 13, &iVar0))
				{
				}
				if (func_1435(uParam0, 14, &iVar1))
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

void func_906(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_222((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_222((*uParam0)[iVar0], 1))
		{
			func_1438((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_907(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_878((*uParam0)[iVar1]))
		{
			if (func_869((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1439((*uParam0)[iVar1]))
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
		if (func_880((*uParam1)[iVar1]))
		{
			if (func_869((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1440((*uParam1)[iVar1]))
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
		if (func_882((*uParam2)[iVar1]))
		{
			if (func_869((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1441((*uParam2)[iVar1]))
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
		if (func_884((*uParam3)[iVar1]))
		{
			if (func_869((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_885((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_869(uParam4->f_1, iParam12))
	{
		if (!func_886(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_887((*uParam5)[iVar1]))
		{
			if (func_869((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1431((*uParam5)[iVar1]))
				{
					if (!func_909((*uParam5)[iVar1]))
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
		if (func_887((*uParam5)[iVar1]))
		{
			if (func_869((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1431((*uParam5)[iVar1]))
				{
					if (func_909((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_889((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1442((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_891((*uParam6)[iVar1]))
		{
			if (func_869((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1443((*uParam6)[iVar1]))
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
		if (func_893((*uParam7)[iVar1]))
		{
			if (func_869((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1444((*uParam7)[iVar1]))
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
		if (func_895((*uParam8)[iVar1]))
		{
			if (func_869((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1445((*uParam8)[iVar1]))
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
		if (func_897((*uParam9)[iVar1]))
		{
			if (func_869((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1446((*uParam9)[iVar1]))
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
		if (func_899((*uParam10)[iVar1]))
		{
			if (func_869((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1447((*uParam10)[iVar1]))
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
		if (func_901((*uParam11)[iVar1]))
		{
			if (func_869((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1448((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_908(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_909(var uParam0)
{
	if (func_908(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_2, 1))
	{
		func_888(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_872(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_910(int iParam0)
{
	if (!func_194(iParam0))
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

bool func_911(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_529(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_264(iParam1)) && func_1449(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1450(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1451(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1452(iParam1);
		return true;
	}
	return false;
}

bool func_912(char[4] cParam0)
{
	if (!func_406(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1453(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1453(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1453(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1453(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1453(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1453(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1453(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1453(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1453(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1453(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1453(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1453(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1453(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1453(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1453(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1453(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1453(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1453(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1453(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1453(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1453(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1453(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1453(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1453(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1453(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1453(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1453(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1453(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1453(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1453(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1453(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1453(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1453(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_406(cParam0->f_5417);
}

int func_913(int iParam0, var uParam1)
{
	uParam1->f_10 = func_272(uParam1->f_10);
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
		if (func_406(uParam1->f_6))
		{
		}
	}
	bVar0 = func_405();
	if (*uParam1)
	{
		if (bVar0 && !func_333((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1454(5))
			{
				func_541(5);
				func_1455(5);
				func_1406(0);
				func_1405(0);
			}
		}
	}
	if (func_1456(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_333((*Global_1835011)[37]->f_1, 1)) && !func_333((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_333((*Global_1835011)[43]->f_1, 1)) && !func_333((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_220(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_544(iVar1))
	{
		bVar3 = true;
		if (func_1457(iVar1))
		{
			bVar4 = true;
		}
		if (func_551(iVar1))
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
				func_552(uParam1->f_10);
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
			if (!func_1454(0) && func_1454(1))
			{
				func_1458(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1459())
			{
				func_1460();
			}
			func_1406(0);
			func_1405(0);
			func_1407(uParam1->f_6);
		}
	}
	if (!func_544(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1461(uParam1->f_10) == 0 || func_1462(uParam1->f_10) == 0) || func_1463(uParam1->f_10) == 0)
			{
				func_1464(uParam1->f_10);
			}
			func_1465(uParam1->f_10);
			func_1466(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_220(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_544(iVar1))
	{
		bVar3 = true;
		if (func_1457(iVar1))
		{
			bVar4 = true;
		}
		if (func_551(iVar1))
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
			if (!func_406(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1467(uParam1->f_10))
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
			Var8 = { func_1468(uParam1->f_10) };
			Var10 = { func_1469() };
			func_1470(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_537(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1471(uParam1->f_10);
		if (uParam1->f_2 && !func_406(uParam1->f_6))
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
	func_536(uParam1->f_10);
	if (func_537(uParam1->f_10))
	{
		iVar16 = func_268(uParam1->f_10);
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

bool func_914(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_915(int iParam0)
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

bool func_916(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1472(iParam1))
	{
		return false;
	}
	iVar0 = func_1473(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_917(char[4] cParam0, bool bParam1)
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

float func_918(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_919(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1474(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1475(iParam0))
	{
		if (func_915(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_401(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_919(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_919(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_401(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_401(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_401(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_401(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_401(iParam5, 129))
	{
		if (func_401(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_401(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_401(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_401(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1475(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_401(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_401(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_920(int iParam0, int iParam1, int iParam2)
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

bool func_921(var uParam0, int iParam1)
{
	switch (func_1476(uParam0))
	{
		case 0:
			if (!func_1477(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1478(uParam0, 1);
			break;
		case 1:
			func_1479(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_837(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1478(uParam0, 2);
			break;
		case 2:
			if (func_1480(uParam0))
			{
				func_1481(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1478(uParam0, 3);
			}
			break;
		case 3:
			if (func_928(&(uParam0->f_3)) >= 1f)
			{
				func_1478(uParam0, 4);
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
			func_1482(&iVar1, 0);
			release_script_audio_bank();
			func_1478(uParam0, 0);
			return true;
	}
	return false;
}

void func_922(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1483(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_923(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1484(cParam0, iVar0) };
	if (func_1486(&(cParam0->f_10792), Var1, func_1485(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1487(&(cParam0->f_10792), 524288))
		{
			func_386(cParam0, 67108864);
			func_1488(&(cParam0->f_10792), 524288);
		}
		func_1489(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_924(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_925(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1490(cParam0);
		func_1491(cParam0);
		return true;
	}
	if (func_1492(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_965(cParam0);
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
			func_1493(cParam0);
			func_924(cParam0, 524288);
			func_1324(cParam0);
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

bool func_926(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1494(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1495(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1496(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_436(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_904(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_927(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_927(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1497(uParam0);
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

float func_928(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_512(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_564() - uParam0->f_1);
}

bool func_929()
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

void func_930(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_931()
{
	switch (iVar365)
	{
		case 0:
			func_1498(Global_35, 61, 1, 1, 0);
			func_1499(1);
			break;
		case 1:
			if (!func_1500())
			{
				func_1499(2);
			}
			break;
		case 2:
			break;
	}
	return iVar365 == 2;
}

bool func_932(char[4] cParam0)
{
	return func_1501(cParam0);
}

bool func_933(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (!&iLocal_180[0])
		{
			iLocal_180[0] = 1;
			func_1502(cParam0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_1383(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_33(cParam0) == 0)
	{
		if (func_1503(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_33(cParam0) >= 3 && func_33(cParam0) <= 4)
	{
		if (func_1504(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
		func_1505(cParam0, 0);
	}
	if (func_33(cParam0) >= 6 && func_33(cParam0) <= 7)
	{
		func_1506(cParam0, 1);
		func_1507(cParam0, 1);
	}
	return !bVar0;
}

bool func_934(char[4] cParam0)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 && func_1508(cParam0, iVar1));
		iVar1++;
	}
	return iVar0;
}

bool func_935(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (func_833(uParam0, 256) && !func_833(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_1509(uParam0, sParam1);
	if (!func_833(uParam0, 64))
	{
		if (!func_406(func_1510(uParam0)))
		{
			func_763(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1511(uParam0) };
			if (!func_406(vVar0))
			{
				func_1512(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_1386(Global_35, func_1510(uParam0), 1);
	if (func_833(uParam0, 128) || func_833(uParam0, 256))
	{
		if ((fVar3 >= func_1513(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				func_1514();
				uParam0->f_889 = 0;
			}
			func_1515(uParam0);
			if (_does_anim_scene_exist(uParam0->f_804))
			{
				_delete_anim_scene(uParam0->f_804);
			}
			func_1516(uParam0);
			func_1416(uParam0, 128, 1);
			func_1416(uParam0, 256, 1);
			func_1416(uParam0, 4096, 1);
			func_1416(uParam0, 32768, 1);
			func_1416(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1517(uParam0) || bParam2)
	{
		if (!func_833(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_804))
			{
				if (func_1517(uParam0) >= func_1513(uParam0))
				{
				}
				Var4 = { func_1518(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_1519(uParam0);
				}
				Var4 = { func_1518(uParam0) };
				iVar12 = 256;
				if (!func_833(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = _create_anim_scene(&(uParam0->f_800), iVar12, &Var4, false, true);
				func_1520(uParam0, 0, 0, 0, 0);
				func_763(uParam0, 128);
			}
		}
	}
	if (func_833(uParam0, 128))
	{
		if (func_833(uParam0, 256) && !func_833(uParam0, 4194304))
		{
			return true;
		}
		func_1521(uParam0);
		if (!uParam0->f_889)
		{
			if (func_1522())
			{
				func_1182(4096);
				uParam0->f_889 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_804, true, false))
		{
			bVar13 = true;
			Var15 = { func_1523(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_822[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_822[iVar14], &Var15))
					{
						if (!uParam0->f_822[iVar14]->f_8)
						{
							uParam0->f_822[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_804, uParam0->f_822[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_804, uParam0->f_822[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_833(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_804, &Var15))
				{
					if (!func_833(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_804, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_804, &Var15)) && !_0x1f0e401031e20146(uParam0->f_804, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_804, &Var15);
						}
						func_763(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_804, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_763(uParam0, 256);
			func_1416(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_936()
{
	iVar0 = 0;
	while (iVar0 < 71)
	{
		iVar1 = iVar0;
		func_1524(iVar1);
		iVar0++;
	}
	if (_does_volume_exist(&(iLocal_93[37])))
	{
		uLocal_334 = _0x4c39c95ae5db1329(&(iLocal_93[37]), false, 15);
	}
	if (_does_volume_exist(&(iLocal_93[41])))
	{
		uLocal_335 = _0x4c39c95ae5db1329(&(iLocal_93[41]), false, 15);
	}
	_0x19c7567d2f2287d6(&(iLocal_93[41]), 7);
}

int func_937()
{
	if (func_466(18))
	{
		return 1;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (!_does_volume_exist(&(iLocal_93[&iVar0[iVar5]])))
		{
			return 0;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		func_1525(&(iLocal_93[&iVar0[iVar5]]), 0, 0, 0);
		_0xe5ef9de716ff737e(&(iLocal_93[&iVar0[iVar5]]), 0, 0);
		iVar5++;
	}
	func_467(18, 1);
	return 1;
}

void func_938(char[4] cParam0)
{
	func_1312(cParam0);
	if (func_33(cParam0) >= 5)
	{
		func_1337();
	}
}

void func_939(char[4] cParam0)
{
	func_1526(cParam0, &(uLocal_46[0]), 14, 0);
	func_1526(cParam0, &(uLocal_46[1]), 13, 0);
}

void func_940(char[4] cParam0)
{
	func_145(cParam0, Global_35, "JOHN", 0);
	func_145(cParam0, &(uLocal_46[0]), "TEEN_JACK", 0);
	func_145(cParam0, &(uLocal_46[1]), "ABIGAIL", 0);
}

void func_941(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_942(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_943(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_944(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_945(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_946(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_947(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_948(int iParam0)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_458(func_457(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_459(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_459(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_459(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_459(iParam0));
	return 1;
}

void func_949(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_456(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_950(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_951(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_952(char[4] cParam0)
{
	if (func_33(cParam0) == 0)
	{
		if (!_does_scenario_point_exist(iLocal_165))
		{
			iLocal_165 = _find_closest_active_scenario_point_of_type(func_1298(0, 16), -439112356, 1f, 0, false);
		}
	}
}

void func_953(char[4] cParam0)
{
	iVar2 = func_33(cParam0);
	if (iVar2 == iLocal_16)
	{
		iVar0 = 14;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_17)
	{
		iVar0 = 14;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_18)
	{
		iVar0 = 15;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_19)
	{
		iVar0 = 15;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_20)
	{
		iVar0 = 16;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_21)
	{
		iVar0 = 16;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_22)
	{
		iVar0 = 17;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_23)
	{
		iVar0 = 17;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_24)
	{
		iVar0 = 18;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_25)
	{
		iVar0 = 18;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_26)
	{
		iVar0 = 19;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_27)
	{
		iVar0 = 20;
		iVar1 = 0;
	}
	set_clock_time(iVar0, iVar1, 0);
}

void func_954(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_16)
	{
		func_1325(cParam0, 0);
	}
	else if (func_33(cParam0) == iLocal_19 || func_33(cParam0) == iLocal_20)
	{
		func_1325(cParam0, 1);
	}
	else if (func_33(cParam0) == iLocal_22 || func_33(cParam0) == iLocal_23)
	{
		func_1325(cParam0, 2);
	}
	else if (func_33(cParam0) == iLocal_24 || func_33(cParam0) == iLocal_25)
	{
		func_1325(cParam0, 3);
	}
	else if (func_33(cParam0) == iLocal_26 || func_33(cParam0) == iLocal_27)
	{
		func_1325(cParam0, 4);
	}
}

int func_955(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_16)
	{
	}
	else if (func_33(cParam0) == iLocal_20)
	{
	}
	else if (func_33(cParam0) == iLocal_23)
	{
	}
	else if (func_33(cParam0) == iLocal_25)
	{
	}
	else if (func_33(cParam0) == iLocal_27)
	{
	}
	return 0;
}

void func_956(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_957(char[4] cParam0)
{
	func_961(cParam0);
	if (func_33(cParam0) == iLocal_16)
	{
		return func_1527(cParam0);
	}
	else if (func_33(cParam0) == iLocal_20)
	{
		return func_1528(cParam0);
	}
	else if (func_33(cParam0) == iLocal_23)
	{
		return func_1529(cParam0);
	}
	else if (func_33(cParam0) == iLocal_25)
	{
		return func_1530(cParam0);
	}
	else if (func_33(cParam0) == iLocal_27)
	{
		return func_1531(cParam0);
	}
	return 1;
}

void func_958(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_959(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_16)
	{
		return func_1532(cParam0);
	}
	else if (func_33(cParam0) == iLocal_20)
	{
		return func_1533(cParam0);
	}
	else if (func_33(cParam0) == iLocal_23)
	{
		return func_1534(cParam0);
	}
	else if (func_33(cParam0) == iLocal_25)
	{
		return func_1535(cParam0);
	}
	else if (func_33(cParam0) == iLocal_27)
	{
	}
	return 1;
}

void func_960(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_961(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	switch (iVar353)
	{
		case 0:
			clear_weather_type_persist();
			func_1536();
			if (iVar0 == iLocal_16)
			{
				func_1537(1);
			}
			else if ((iVar0 == iLocal_17 || iVar0 == iLocal_18) || iVar0 == iLocal_19)
			{
				_set_weather_type(821931868, true, true, false, 0f, false);
				func_1537(4);
			}
			else if (iVar0 == iLocal_20)
			{
				_set_weather_type(433385945, true, true, false, 0f, false);
				func_1537(5);
			}
			else if ((((iVar0 == iLocal_21 || iVar0 == iLocal_22) || iVar0 == iLocal_23) || iVar0 == iLocal_24) || iVar0 == iLocal_25)
			{
				_set_weather_type(1420204096, true, true, false, 0f, false);
				func_1537(6);
			}
			else if (iVar0 == iLocal_26)
			{
				_set_weather_type(-416908843, true, true, false, 0f, false);
				func_511(&uLocal_258, 30f);
				func_1537(7);
			}
			else if (iVar0 == iLocal_27)
			{
				_set_weather_type_transition(-416908843, -1233681761, 0.7f, 1);
				func_1537(8);
			}
			break;
		case 1:
			if (func_984(cParam0))
			{
				clear_weather_type_persist();
				_set_weather_type(1632247697, false, true, true, 30f, false);
				func_1537(2);
			}
			break;
		case 2:
			if (iVar0 == iLocal_16 && func_162(cParam0, iVar0) == 5)
			{
				clear_weather_type_persist();
				_set_weather_type(821931868, false, true, true, 60f, false);
				func_1537(3);
			}
			break;
		case 3:
			if (iVar277 >= 8)
			{
				clear_weather_type_persist();
				_set_weather_type(821931868, true, true, false, 0f, false);
				func_1537(4);
			}
			break;
		case 4:
			if (func_984(cParam0))
			{
				clear_weather_type_persist();
				_set_weather_type(433385945, false, true, true, 60f, false);
				func_1537(5);
			}
			break;
		case 5:
			if (iVar0 == iLocal_20 && func_162(cParam0, iVar0) == 5)
			{
				clear_weather_type_persist();
				_set_weather_type(1420204096, false, true, true, 105f, false);
				func_1537(6);
			}
			break;
		case 6:
			if (iVar0 == iLocal_25 && func_162(cParam0, iVar0) == 5)
			{
				clear_weather_type_persist();
				_set_weather_type(-416908843, false, true, true, 30f, false);
				func_225(&uLocal_258);
				func_1537(7);
			}
			break;
		case 7:
			fVar1 = func_928(&uLocal_258);
			if (fVar1 >= 30f)
			{
				fVar2 = func_1538(((fVar1 - 30f) / 35f), 0f, 1f);
				fVar3 = func_1539(0f, 0.7f, fVar2);
				_set_weather_type_transition(-416908843, -1233681761, fVar3, 1);
				if (fVar2 == 1f)
				{
					func_1537(8);
				}
			}
			break;
		case 8:
			break;
	}
}

void func_962(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		_0xfd6943b6df77e449(iParam0, false);
		set_blocking_of_non_temporary_events(iParam0, false);
		task_stand_still(iParam0, -1);
	}
}

void func_963(int iParam0, bool bParam1, int iParam2)
{
	if (!func_253(iParam0))
	{
		return;
	}
	if (func_1540(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_1541(iParam0);
	}
	bVar1 = func_257(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1542(iParam0);
		if (iParam2 > iVar2 || !func_717(func_1543(iParam0)))
		{
			func_1544(iParam0, func_291());
			func_1545(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_293(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 38)
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
		func_294(iParam0, 33554432);
		func_1544(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_1546(iParam0);
}

void func_964(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	func_1547(cParam0);
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		_0xab0d553fe20a6e25(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
		_0xf45e46deecf7df6e(10240, 0, 0, -1, -1);
	}
	if (!bLocal_187)
	{
		bLocal_187 = true;
		if (_does_volume_exist(&(iLocal_93[5])))
		{
			func_951(&(iLocal_93[5]), 0, 0, 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_23)
	{
		if (&iLocal_185[0])
		{
			if (get_vehicle_ped_is_entering(Global_35) == iLocal_72 || is_ped_in_vehicle(Global_35, iLocal_72, true))
			{
				disable_control_action(0, -17122892, false);
			}
		}
	}
	func_1548(cParam0);
	func_1549(1);
	func_961(cParam0);
	func_1550(cParam0);
	_0x785177e4d57d7389(player_id(), 1171995096, 1, 0, -1);
	func_1551(cParam0);
	if (iVar0 == iLocal_24 || iVar0 == iLocal_25)
	{
		func_1552(cParam0);
	}
	if ((iVar0 == iLocal_16 || iVar0 == iLocal_17) || iVar0 == iLocal_26)
	{
		if (func_1553())
		{
			func_1554(cParam0, "MAR2_FKIRA", "", 1, 0);
		}
	}
}

void func_965(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1555(cParam0);
}

void func_966(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_218())
			{
				if (func_928(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_225(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_967(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1556(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1557();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1558(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_968(char[4] cParam0)
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
		if (func_244() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_244() && !func_54())
	{
		func_924(cParam0, 1048576);
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
			func_924(cParam0, 134217728);
		}
	}
}

void func_969(char[4] cParam0)
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

void func_970(char[4] cParam0)
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

void func_971(char[4] cParam0)
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

int func_972(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
		{
			func_1014(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_973(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1559(iVar0))
	{
		return false;
	}
	iVar1 = func_1560(iParam2);
	if (!func_1561(iVar1))
	{
		return false;
	}
	if (!func_1562(cParam0, iParam1, iParam2))
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

int func_974(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_975(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_976(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_225(&(cParam0->f_603));
	}
}

void func_977(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_978(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_928(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_261(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_262(cParam0->f_5421))
		{
			iVar2 = func_263(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1563(cParam0->f_5421, iVar1);
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

float func_979(char[4] cParam0)
{
	return func_928(&(cParam0->f_603));
}

bool func_980(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_981(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_973(cParam0, iParam1, 4))
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
		func_1564(cParam0);
		if (func_1565(cParam0))
		{
			func_1566(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_924(cParam0, 524288);
		func_1567(&(cParam0->f_7375), 4);
		if (func_1556(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1557();
		}
		return true;
	}
	return false;
}

void func_982(char[4] cParam0)
{
	func_1568(cParam0);
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

bool func_983(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_923(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_924(cParam0, 2097152);
			func_271(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_975(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1484(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_923(cParam0))
			{
				func_924(cParam0, 2097152);
				func_925(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_925(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_923(cParam0))
		{
			func_924(cParam0, 2097152);
			func_1491(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_925(cParam0, Var0);
	}
	return true;
}

bool func_984(char[4] cParam0)
{
	return func_1569(&(cParam0->f_7375));
}

void func_985(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1570(cParam0))
		{
			func_447(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1571(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_986(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar1]))
		{
			if (func_1572(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1573(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_987(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1574(cParam0))
		{
			func_447(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1571(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_988(char[4] cParam0)
{
	switch (func_1575(&iVar0))
	{
		case 1:
			func_1576(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_195(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_989(char[4] cParam0, int iParam1)
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

int func_990(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1490(cParam0);
		func_924(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1484(cParam0, iParam1) };
	if (func_1577(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_991(char[4] cParam0, int iParam1)
{
	func_1578(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_231(cParam0, iParam1));
}

void func_992(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_977(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_924(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_924(cParam0, 4);
		func_924(cParam0, 8192);
		func_924(cParam0, 536870912);
		func_271(cParam0, 4);
		func_65(0);
		func_64(0);
		func_924(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1579(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_386(cParam0, 524288);
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
				func_1580(1, 1);
			}
		}
	}
}

void func_993(bool bParam0)
{
	if (!func_202(0, 0, 1) || bParam0)
	{
		iVar0 = func_1096();
		iVar1 = func_1099(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1581(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1581(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_994(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1582(bParam1, bParam2, bParam3);
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

var func_995(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1583(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1584(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1583(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_996(char[4] cParam0)
{
	return true;
}

bool func_997(char[4] cParam0)
{
	return true;
}

int func_998(char[4] cParam0)
{
	return 1;
}

int func_999(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_1000(int iParam0)
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

int func_1001(int iParam0)
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

void func_1002(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1585(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_1003(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1004(int iParam0)
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

char* func_1005(int iParam0)
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

void func_1006(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

bool func_1009(char[4] cParam0, int iParam1)
{
	return func_1013(cParam0, iParam1, &uVar0);
}

void func_1010(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_462(&iVar0);
}

void func_1011(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1013(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1586(cParam0->f_5423[iVar0], iParam2);
}

void func_1012(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1013(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1587(cParam0->f_5423[iVar0], iParam2);
}

bool func_1013(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
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

void func_1014(var uParam0)
{
	if (func_528(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_528(uParam0, 1024);
	if (func_528(uParam0, 128) || bVar0)
	{
		if (func_528(uParam0, 4096))
		{
			if (!func_528(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1587(uParam0, 2048);
				return;
			}
		}
		else if (func_528(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1586(uParam0, 2048);
		}
		if (func_528(uParam0, 512))
		{
			if (func_529(uParam0->f_10))
			{
				if (func_914(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1588(uParam0->f_10))
					{
						func_534(uParam0->f_10, 1);
						func_1589(uParam0->f_10, 0);
					}
				}
				else if ((func_1588(uParam0->f_10) && !bVar0) && !func_528(uParam0, 16384))
				{
					func_534(uParam0->f_10, 0);
					func_1589(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_914(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_914(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_528(uParam0, 512))
	{
		if (func_529(uParam0->f_10))
		{
			if (func_1588(uParam0->f_10))
			{
				func_534(uParam0->f_10, 0);
				func_1589(uParam0->f_10, 1);
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
	if (!func_1053(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1059(iParam0, 36, 1))
	{
		func_1057(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1590(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

void func_1016(int iParam0)
{
	if (does_entity_exist(&(iLocal_75[iParam0])))
	{
		delete_object(iLocal_75[iParam0]);
	}
}

void func_1017(int* iParam0)
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
					func_919(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

bool func_1018(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_456(iParam0))
	{
		return false;
	}
	if (!func_1591(iParam0) && bParam1)
	{
		return false;
	}
	return func_1592(iParam0, 1);
}

void func_1019(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_456(iParam0))
	{
		return;
	}
	if (!func_1592(iParam0, 1))
	{
		return;
	}
	if (!func_1592(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1591(iParam0)) && func_1593(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_1594(iParam0);
	if (func_458(func_457(iParam0)))
	{
		iVar0 = func_459(iParam0);
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
		func_171(iParam0, 16);
	}
	if (func_1592(iParam0, 128) && !bParam3)
	{
		func_1595(iParam0, 0);
	}
}

void func_1020(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1021(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1032(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1022(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1023(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_1024(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_1025(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1026(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_1027(int iParam0, int iParam1)
{
	if (!func_1024(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_1028(int iParam0)
{
	if (func_1596())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_1029(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_1030()
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
		iVar3 = func_1597(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1031(int iParam0, bool bParam1, float fParam2)
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
	iVar0 = func_1598(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1599(iVar1, 1);
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
	return func_1600(iParam0, bParam1, fParam2);
}

bool func_1032(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1033(int iParam0)
{
	iVar0 = func_490(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1601(iVar0);
}

int func_1034(int iParam0, int iParam1)
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
			func_1602(iVar2);
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

void func_1035()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1036(int iParam0, int iParam1)
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

int func_1037(bool bParam0)
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

int func_1038(int iParam0)
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

void func_1039(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1040(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1041(int iParam0, int iParam1)
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
			func_1603((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1603(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_195(&(Global_1898164->f_1[0])))
	{
		func_207(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1042(int iParam0, int iParam1, bool bParam2)
{
	if (!func_508(iParam0))
	{
		return;
	}
	func_1604(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1043(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1044(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1045(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1046()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1047(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1605(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1048(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2586.746f, 455.989f, 145.1865f;
				case 1:
					return -2588.783f, 455.7817f, 145.3602f;
				case 2:
					return -2589.046f, 456.7274f, 145.3536f;
				case 3:
					return -2590.393f, 457.2662f, 146.9661f;
				case 4:
					return -2590.188f, 465.3483f, 145.1389f;
				case 5:
					return -2584.782f, 458.5872f, 145.9429f;
				case 6:
					return -2595.036f, 458.8084f, 146.8021f;
				case 7:
					return -2595.052f, 458.498f, 146.856f;
				case 8:
					return -2594.097f, 461.8778f, 147.1982f;
				case 9:
					return -2594.515f, 456.2865f, 146.7582f;
				case 10:
					return -2595.036f, 458.7538f, 146.7694f;
				case 11:
					return -2594.247f, 456.5854f, 146.7954f;
				case 12:
					return -2596.503f, 455.4873f, 146.5358f;
				case 13:
					return -2594.388f, 456.6125f, 146.7351f;
				case 14:
					return -2590.954f, 457.4777f, 146.0147f;
				case 15:
					return -2585.316f, 453.7336f, 146.1715f;
				case 16:
					return -2593.741f, 460.9864f, 146.0973f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2647.668f, 299.2318f, 145.2499f;
				case 1:
					return -2604.679f, 552.1307f, 142.1814f;
				case 2:
					return -2647.013f, 300.843f, 145.2535f;
				case 3:
					return -2605.465f, 550.9451f, 142.1916f;
				case 4:
					return -2592.134f, 459.7199f, 145.9973f;
				case 5:
					return -2644.872f, 300.0393f, 144.9326f;
				case 6:
					return -2607.054f, 552.817f, 142.1526f;
				case 7:
					return -2309.915f, -321.1098f, 155.2797f;
				case 8:
					return -2388.951f, 532.7006f, 123.1557f;
				case 9:
					return -2289.114f, -383.5995f, 155.6583f;
				case 10:
					return -2188.866f, 489.7421f, 117.6383f;
				case 11:
					return -1919.906f, -344.1326f, 185.7074f;
				case 12:
					return -1787.491f, -247.7803f, 178.5887f;
				case 13:
					return -1892.819f, -389.917f, 175.0166f;
				case 14:
					return -1723.412f, -420.7011f, 151.708f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1902.554f, -371.5399f, 179.6923f;
				case 1:
					return -1901.859f, -369.9359f, 179.7262f;
				case 2:
					return -1897.032f, -369.5795f, 179.1797f;
				case 3:
					return -1808.469f, -302.4285f, 169.2919f;
				case 4:
					return -1809.183f, -301.217f, 169.5941f;
				case 5:
					return -1810.922f, -302.8901f, 169.4813f;
				case 6:
					return -1723.384f, -422.6013f, 151.6136f;
				case 7:
					return -1722.192f, -423.3843f, 151.3282f;
				case 8:
					return -1720.812f, -421.3965f, 151.4349f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1772.359f, -390.8267f, 155.8394f;
				case 1:
					return -1773.077f, -384.4674f, 156.1619f;
				case 2:
					return -1765.179f, -380.6753f, 156.7404f;
				case 3:
					return -1765.397f, -383.6883f, 156.7404f;
				case 4:
					return -1766.233f, -380.8104f, 157.8358f;
				case 5:
					return -1766.54f, -380.5857f, 157.8381f;
				case 6:
					return -1763.391f, -380.4604f, 158.1181f;
				case 7:
					return -1764.437f, -384.5692f, 158.1416f;
				case 8:
					return -1763.43f, -380.2439f, 157.0715f;
				case 9:
					return -1761.347f, -381.8299f, 157.5802f;
				case 10:
					return -1766.61f, -380.5329f, 157.8568f;
				case 11:
					return -1763.767f, -382.906f, 156.744f;
				case 12:
					return -1763.377f, -382.4361f, 156.7087f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1772.729f, -385.5931f, 156.202f;
				case 1:
					return -1773.117f, -384.7082f, 156.2646f;
				case 2:
					return -1769.702f, -390.9376f, 155.7195f;
				case 3:
					return -1769.702f, -390.9376f, 155.7195f;
				case 4:
					return -1778.406f, -433.606f, 154.1022f;
				case 5:
					return -1777.946f, -437.416f, 154.1129f;
				case 6:
					return -1775.025f, -437.8545f, 154.0295f;
				case 7:
					return -1776.067f, -440.774f, 153.9408f;
				case 8:
					return -1776.855f, -443.4073f, 153.9866f;
				case 9:
					return -1776.759f, -445.002f, 153.9408f;
				case 10:
					return -1761.259f, -241.1607f, 181.7539f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1797.824f, -330.1971f, 165.6205f;
				case 1:
					return -1732.542f, -417.1653f, 153.0966f;
				case 2:
					return -1797.402f, -332.1769f, 165.2754f;
				case 3:
					return -1734.663f, -415.9405f, 153.5341f;
				case 4:
					return -1799.45f, -332.9374f, 165.0418f;
				case 5:
					return -1730.493f, -414.8712f, 153.3663f;
				case 6:
					return -1660.14f, -218f, 165.08f;
				case 7:
					return -1764.039f, 154.5435f, 150.8086f;
				case 8:
					return -1765.176f, 154.1076f, 150.7286f;
				case 9:
					return -1660.729f, -217.0848f, 164.2941f;
				case 10:
					return -1765.922f, 151.8433f, 150.572f;
				case 11:
					return -1767.667f, 153.5475f, 150.6169f;
				case 12:
					return -1731.229f, -85.7608f, 180.5966f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1719.385f, 6.2737f, 159.9617f;
				case 1:
					return -1719.16f, 7.4723f, 159.8044f;
				case 2:
					return -1721.93f, 5.1201f, 159.8568f;
				case 3:
					return -1728.253f, -49.7882f, 174.0451f;
				case 4:
					return -1764.087f, 154.5057f, 150.8037f;
				case 5:
					return -1765.212f, 154.0348f, 150.7225f;
				case 6:
					return -1724.693f, -37.8461f, 171.2594f;
				case 7:
					return -1766.017f, 151.7574f, 150.5643f;
				case 8:
					return -1767.667f, 153.5475f, 150.6169f;
				case 9:
					return -1707.51f, -88.6062f, 178.52f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1750.46f, 313.08f, 110.22f;
				case 1:
					return -1747.839f, 310.8168f, 110.9212f;
				case 2:
					return -1749.151f, 310.3823f, 110.1554f;
				case 3:
					return -1763.767f, 248.5189f, 122.2664f;
				case 4:
					return -1762.556f, 246.6229f, 122.5323f;
				case 5:
					return -1762.649f, 243.953f, 123.068f;
				case 6:
					return -1763.279f, 272.532f, 117.7904f;
				case 7:
					return -1761.276f, 260.238f, 120.3268f;
				case 8:
					return -1762.893f, 253.0325f, 121.4577f;
				case 9:
					return -1758.699f, 307.7193f, 112.2589f;
				case 10:
					return -1757.394f, 306.3994f, 112.3088f;
				case 11:
					return -1760.43f, 307.0315f, 112.3984f;
				case 12:
					return -1758.63f, 307.5981f, 111.7563f;
				case 13:
					return -1757.467f, 306.2219f, 111.7616f;
				case 14:
					return -1760.48f, 306.8952f, 111.8295f;
				case 15:
					return -1748.718f, 316.371f, 109.8117f;
				case 16:
					return -1747.922f, 319.106f, 109.0645f;
				case 17:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1752.642f, 314.2381f, 109.5252f;
				case 1:
					return -1747.29f, 319.0689f, 108.8794f;
				case 2:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1750.776f, 319.6809f, 110.1063f;
				case 1:
					return -1747.404f, 319.0871f, 109.0105f;
				case 2:
					return -1750.457f, 313.0556f, 110.22f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2555.292f, 609.3011f, 137.2927f;
				case 1:
					return -2557.781f, 614.58f, 137.2892f;
				case 2:
					return -2592.286f, 459.7406f, 145.9973f;
				case 3:
					return -2438.281f, 564.7357f, 126.4823f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2582.657f, 455.2193f, 145.958f;
				case 1:
					return -2584.2f, 455.5765f, 145.7735f;
				case 2:
					return -2591.894f, 456.6479f, 146.8756f;
				case 3:
					return -2587.813f, 453.6208f, 146.4031f;
				case 4:
					return -2587.483f, 456.9401f, 146.2099f;
				case 5:
					return -2592.815f, 453.6928f, 146.604f;
				case 6:
					return -2593.222f, 453.6687f, 146.6618f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1769.775f, -392.4876f, 155.5262f;
				case 1:
					return -1768.753f, -383.8689f, 156.7198f;
				case 2:
					return -1818.745f, -283.5671f, 174.1316f;
				case 3:
					return -1705.884f, -421.5991f, 153.0098f;
				case 4:
					return -1757.637f, 312.1573f, 109.9134f;
				case 5:
					return -2583.078f, 458.8982f, 144.815f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1746.445f, 302.0625f, 109.5717f;
				case 1:
					return -1754.848f, 304.1891f, 111.1282f;
				case 2:
					return -1760.421f, 303.4391f, 111.1307f;
				case 3:
					return -1753.785f, 293.9836f, 112.7393f;
				case 4:
					return -1756.532f, 293.0149f, 112.753f;
				case 5:
					return -1754.972f, 306.609f, 110.8856f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 88f;
				case 1:
					return -76f;
				case 2:
					return -115.5f;
				case 3:
					return -153.93f;
				case 4:
					return 75f;
				case 5:
					return -17.73f;
				case 6:
					return -75.12f;
				case 7:
					return 143.89f;
				case 8:
					return -8.88f;
				case 9:
					return -83.75f;
				case 10:
					return -75.12f;
				case 11:
					return 136.95f;
				case 12:
					return -112.49f;
				case 13:
					return -112.03f;
				case 14:
					return -100.1f;
				case 15:
					return -80.2f;
				case 16:
					return -12.1f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -202f;
				case 1:
					return -400f;
				case 2:
					return -200f;
				case 3:
					return -34f;
				case 4:
					return -100f;
				case 5:
					return 158f;
				case 6:
					return -44f;
				case 7:
					return 256.0074f;
				case 8:
					return 245.3069f;
				case 9:
					return 174.8596f;
				case 10:
					return 251.1407f;
				case 11:
					return 262.5069f;
				case 12:
					return 89.7518f;
				case 13:
					return -166f;
				case 14:
					return 48f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 202f;
				case 1:
					return 192f;
				case 2:
					return -168f;
				case 3:
					return 212f;
				case 4:
					return 210.5f;
				case 5:
					return -144f;
				case 6:
					return 62f;
				case 7:
					return 58f;
				case 8:
					return -302.5f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -435f;
				case 1:
					return 146f;
				case 2:
					return 136f;
				case 3:
					return 52f;
				case 4:
					return 143.48f;
				case 5:
					return 147.66f;
				case 6:
					return -123.47f;
				case 7:
					return 142.09f;
				case 8:
					return 155.34f;
				case 9:
					return 132.34f;
				case 10:
					return 13f;
				case 11:
					return -36.38f;
				case 12:
					return -94.52f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 184f;
				case 1:
					return 54f;
				case 2:
					return 56f;
				case 3:
					return 236f;
				case 4:
					return -160f;
				case 5:
					return 34f;
				case 6:
					return 24f;
				case 7:
					return 74f;
				case 8:
					return 82f;
				case 9:
					return 70f;
				case 10:
					return -5.76f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 18f;
				case 1:
					return -124f;
				case 2:
					return 14f;
				case 3:
					return -124f;
				case 4:
					return 12f;
				case 5:
					return -121f;
				case 6:
					return 6.4f;
				case 7:
					return 170f;
				case 8:
					return 170f;
				case 9:
					return -97.5f;
				case 10:
					return 168f;
				case 11:
					return 174f;
				case 12:
					return 184.32f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 18.5f;
				case 1:
					return 20f;
				case 2:
					return 19f;
				case 3:
					return -15f;
				case 4:
					return -187f;
				case 5:
					return -189f;
				case 6:
					return 5f;
				case 7:
					return -191f;
				case 8:
					return 175.5f;
				case 9:
					return 163.44f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return -65.96f;
				case 2:
					return -55.21f;
				case 3:
					return 10f;
				case 4:
					return 12f;
				case 5:
					return 12f;
				case 6:
					return -10f;
				case 7:
					return 6f;
				case 8:
					return 8f;
				case 9:
					return -36.12f;
				case 10:
					return -37.29f;
				case 11:
					return 2.66f;
				case 12:
					return -17f;
				case 13:
					return -37.48f;
				case 14:
					return -12f;
				case 15:
					return 138f;
				case 16:
					return -108.62f;
				case 17:
					return -62.64f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -36f;
				case 1:
					return -82.69f;
				case 2:
					return -62.64f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -109.33f;
				case 1:
					return -103.391f;
				case 2:
					return 0f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 108f;
				case 1:
					return 104f;
				case 2:
					return -99.5f;
				case 3:
					return 58.32f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 70.26f;
				case 1:
					return 74.21f;
				case 2:
					return -82.05f;
				case 3:
					return 160.88f;
				case 4:
					return -98.33f;
				case 5:
					return -16.41f;
				case 6:
					return -13.2f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 74f;
				case 1:
					return -34f;
				case 2:
					return 22f;
				case 3:
					return -64f;
				case 4:
					return -14f;
				case 5:
					return 80f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 16f;
				case 1:
					return -12.5f;
				case 2:
					return -15f;
				case 3:
					return -18f;
				case 4:
					return -16f;
				case 5:
					return -5f;
			}
			break;
	}
	return 0f;
}

void func_1050(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1606();
	}
	else
	{
		return;
	}
	func_1607();
	Global_40.f_9.f_14 = func_291();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1608())
		{
			func_377(Global_1310720->f_1);
		}
		else if (func_1609() == func_378(Global_36, 1) && func_1610() != 2)
		{
			func_377(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_377(Global_36);
		}
		func_1611(Global_36, &vVar0, &uVar4);
		if (!func_1608())
		{
			if (func_1612(vVar0, Global_36) < func_1612(Global_40.f_9.f_7, Global_36))
			{
				func_377(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_378(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1611(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_235(Global_1935630, 8192);
	}
	func_1613();
}

bool func_1051(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_260(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1052(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	func_1614(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1053(int iParam0)
{
	return iParam0 > -1;
}

bool func_1054(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1055(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1056(int iParam0)
{
	func_1055(iParam0, 36, 1);
}

void func_1057(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1058(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1616(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1059(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1053(iParam0))
		{
			return false;
		}
	}
	func_1615(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1060(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_529(iParam0))
	{
		iVar1 = func_566(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1617(iParam0);
		}
	}
	if (func_1059(iParam0, 5, 1))
	{
		set_ped_config_flag(func_566(iParam0), 137, true);
	}
}

void func_1061(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1057(iParam0, 50, 1);
		func_1057(iParam0, 48, 1);
		func_1057(iParam0, 49, 1);
		func_1057(iParam0, 51, 1);
		func_1057(iParam0, 52, 1);
		func_1057(iParam0, 54, 1);
		func_1057(iParam0, 55, 1);
	}
	else
	{
		func_1055(iParam0, 50, 1);
		func_1055(iParam0, 48, 1);
		func_1055(iParam0, 49, 1);
		func_1055(iParam0, 51, 1);
		if (bParam3)
		{
			func_1055(iParam0, 54, 1);
		}
		else
		{
			func_1057(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1055(iParam0, 52, 1);
			if (bParam3)
			{
				func_1055(iParam0, 55, 1);
			}
		}
		else
		{
			func_1057(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1057(iParam0, 55, 1);
			}
		}
	}
}

void func_1062(int iParam0, bool bParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_566(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_566(iParam0), 204, false);
	}
}

void func_1063(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (func_530(iParam0))
	{
		if (!func_264(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1059(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1058(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_566(iParam0);
	if (((does_entity_exist(iVar1) && func_1618(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1055(iParam0, 2, 1);
	}
	else
	{
		func_1619(iParam0);
		func_1055(iParam0, 1, 1);
	}
}

void func_1064(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1065(int iParam0)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1066(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1053(iParam1))
	{
		return;
	}
	iVar0 = func_1065(iParam1);
	if (func_1620(iParam1))
	{
		if (!func_1621(iParam1))
		{
			return;
		}
	}
	func_1057(iParam1, 39, 1);
	func_1622(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1622(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1622(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1055(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1623(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1067(int iParam0)
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

void func_1068(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1624(iVar6);
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

void func_1069(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

bool func_1070(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

void func_1071(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1626(func_1625(255), 109029619));
	}
	else if (func_310())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1098();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1072(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_1073(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1626(func_1625(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_310())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1098())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1074(int iParam0)
{
	iParam0 = func_272(iParam0);
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

float func_1075(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1076(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1461(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1072(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1072(iParam0) + 1;
	fVar6 = func_1627(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1539(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1077(int iParam0)
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

void func_1078(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1079()
{
	if (func_344())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1080(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1628((Global_40.f_4283.f_325 + iParam0));
}

void func_1081(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1079())
	{
		func_721(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_721(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1082(int iParam0)
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

char* func_1083(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1084(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1085(int iParam0)
{
	func_1093(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1086(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1087(1);
	}
}

void func_1087(bool bParam0)
{
	if (bParam0)
	{
		func_1629(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1630(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1088(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -15;
	}
	return func_1631(iParam0);
}

bool func_1089(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_717(iParam1) || !func_717(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1090(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1091(int iParam0)
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

bool func_1092(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1093(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1632(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1094(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1095(int iParam0, int iParam1, bool bParam2)
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

int func_1096()
{
	iVar0 = func_571();
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

int func_1097(int iParam0)
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
	fVar1 = func_1581(absf(fVar1) < 1f, func_1581(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1098()
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

int func_1099(int iParam0)
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

int func_1100()
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

void func_1101(int iParam0, bool bParam1, int iParam2)
{
	func_1633((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1634(iParam0);
}

void func_1102(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1635(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1103(bool bParam0)
{
	bVar3 = false;
	if (func_1636(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1637(iVar5, &iVar2, &iVar0))
			{
				if (!func_591(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1638(iVar2);
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
							if (func_610(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1096() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1096() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1639();
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

char* func_1104(int iParam0)
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

bool func_1105(int iParam0)
{
	return func_610(iParam0) == -427144552;
}

bool func_1106(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_612(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1111(iParam0, &uVar0, 1, 0, 0);
	}
	return func_353(iParam0, 1, 0);
}

void func_1107(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_610(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_617(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_618(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_595(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_671(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1108(int iParam0, int iParam1)
{
	if (func_611(iParam0, 58855631))
	{
		func_1259(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1109(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!func_619(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1037(bParam3), iParam0);
}

int func_1110(int iParam0, bool bParam1)
{
	if (func_623(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1037(bParam1), iParam0, 0);
}

bool func_1111(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1640(&iParam0);
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (!func_619(0))
	{
		bParam3 = true;
	}
	if (func_1105(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1242(0) };
			Var4.f_9 = -1591664384;
			if (!func_1134(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1135(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1243(iParam0, 1))
			{
				if (!func_1134(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1135(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1641(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1109(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1642(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1037(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1112(int iParam0, int iParam1)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_611(iParam0, 1399091007))
	{
		func_1176(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1113(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1643(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1644(&Var0, func_1242(0));
	}
	if (!func_1645(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1186(iVar14);
	return uVar15;
}

int func_1114()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1115(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1116(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1646(iParam0);
	fVar1 = func_1647(iParam0);
	if ((Global_1347477->f_117 || !func_613(31)) || !func_1648(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1649(iVar0) >= 7)
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
	func_1650(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_721(_create_var_string(6, func_1651(iParam0), fVar1), "itemtype_textures", func_1652(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1117(int iParam0)
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

int func_1118(int iParam0, int iParam1)
{
	if (!func_1274(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1119(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_606() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1653(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1654(), 12);
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
			else if (func_1158() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1655(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1158(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1656(), 13);
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
			else if (func_1159() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1657(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1159(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1118(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1120(int iParam0, int iParam1, int iParam2)
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

bool func_1121(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1122(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1658(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_353(iVar2, 1, 0) || func_1660(func_1659(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1127(func_1658(iVar0))), func_1127(func_1658(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1158() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1661(iVar0)), func_1661(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1655() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1661(iVar0)), func_1661(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1661(iVar0)), func_1661(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1169(iParam3, func_1662(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1165(iVar2) - iParam7) >= func_1118(iParam3, func_1663(iVar0));
				}
				else
				{
					bVar1 = func_1165(iVar2) >= func_1118(iParam3, func_1663(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1165(iVar2) + iParam7) >= func_1118(iParam3, func_1663(iVar0));
			}
			else
			{
				bVar1 = func_1165(iVar2) >= func_1118(iParam3, func_1663(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1664(iVar2)), func_1664(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1665(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1666(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1666(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1159() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1667(iVar0)), func_1667(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1657() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1667(iVar0)), func_1667(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1667(iVar0)), func_1667(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1169(iParam3, func_1662(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1165(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1668(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1668(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1669(iVar2)), func_1669(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1124(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1656() >= 13)
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

bool func_1125(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_195(func_208(0)) && ((func_1670(0) == 1 || func_1670(0) == 8) || func_1670(0) == 6))
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

var func_1126(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1127(int iParam0)
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

bool func_1128(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1129(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1130(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1131(int iParam0)
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
			func_1671(1);
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
			func_1672(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1672(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1672(3);
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
			func_1673(1);
			break;
		case 34:
			func_1674(1);
			break;
		case 35:
			func_1675(1);
			break;
		case 36:
			break;
		case 37:
			func_1676(0);
			break;
		case 38:
			func_1677(0);
			break;
		case 39:
			func_1678(0);
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
			if ((!&Global_1879534 && func_405()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_331(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_405()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_331(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_405()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_331(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_405()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_728("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_331(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1199(99217379) || func_1679(99217379) == 2110595215)
				{
					if (func_1098())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_353(iVar0, 1, 0))
					{
						func_664(iVar0, 1, 752097756);
					}
					func_643(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_353(1013902307, 1, 0))
				{
					func_664(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_353(1013902307, 1, 0))
				{
					func_664(1013902307, 1, 752097756);
				}
				if (!func_353(142640135, 1, 0))
				{
					func_664(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_353(786809402, 1, 0))
				{
					func_664(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_353(786809402, 1, 0))
				{
					func_664(786809402, 1, 752097756);
				}
				if (!func_353(-518019409, 1, 0))
				{
					func_664(-518019409, 1, 752097756);
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
			func_1680();
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

bool func_1132(int iParam0)
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

int func_1133(int iParam0, int iParam1)
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

bool func_1134(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1642(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1135(int iParam0, var uParam1, int iParam2)
{
	if (func_1681(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1136(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_591(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1037(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1137(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1682(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1246(*uParam1, &Var0, bParam6, 0))
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
	if (!func_619(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1037(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1138(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1683(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1139(int iParam0)
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
	iVar2 = func_291();
	func_340(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1140(int iParam0)
{
	if (func_1684(iParam0))
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

bool func_1141(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1142(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1143(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_613(50))
			{
				if (!func_613(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_613(51))
			{
				if (!func_613(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1144(int iParam0, int iParam1, var uParam2)
{
	if (!func_591(iParam1, 0))
	{
		return false;
	}
	if (func_610(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_615(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_689(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_611(iParam1, 866047851))
	{
		iVar5 = func_690(iVar4, 1);
		if (func_1685(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_615(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_611(iParam1, -1638171711))
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
			if (func_1686(1868067663, &uVar0))
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
				iVar10 = func_1687(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1687(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_615(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_611(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1688(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1145()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1146()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1147()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_353(func_1689(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1148(int iParam0)
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

bool func_1149(int iParam0, int iParam1)
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
	if (func_353(iVar0, 1, 0) && func_353(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1150(int iParam0)
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

bool func_1151(int iParam0, int iParam1)
{
	iVar0 = func_1690(iParam0);
	if (iVar0 != -15)
	{
		func_340(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_718(iVar0, 1);
	}
	return false;
}

void func_1152(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1153(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1154(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1155(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1156(int iParam0)
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
	iVar1 = func_1165(iVar9);
	iVar2 = func_1165(iVar10);
	iVar3 = func_1165(iVar11);
	iVar5 = func_1166(iVar9);
	iVar6 = func_1166(iVar10);
	iVar7 = func_1166(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1165(iVar12);
		iVar8 = func_1166(iVar12);
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

void func_1157(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1158()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1691(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1159()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1160(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1668(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*sParam2++;
		}
		if (func_1668(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*sParam2++;
		}
		if (func_1668(iVar1))
		{
			*sParam2++;
		}
		if (func_1668(iVar0) && func_1668(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*sParam2++;
		}
		if (func_1668(iVar1))
		{
			*sParam2++;
		}
		if (func_1668(iVar2))
		{
			*sParam2++;
		}
		if ((func_1668(iVar0) && func_1668(iVar1)) && func_1668(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1668(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1668(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1668(iVar0))
		{
			*sParam2++;
		}
		if (func_1668(iVar1))
		{
			*sParam2++;
		}
		if (func_1668(iVar2))
		{
			*sParam2++;
		}
		if (func_1668(iVar3))
		{
			*sParam2++;
		}
		if (((func_1668(iVar0) && func_1668(iVar1)) && func_1668(iVar2)) && func_1668(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1161(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1692(1497516462);
			func_1693(2016141805);
			func_1693(1010885152);
			func_1693(-502324015);
			break;
		case 2016141805:
			func_1693(1497516462);
			func_1692(2016141805);
			func_1693(1010885152);
			func_1693(-502324015);
			break;
		case 1010885152:
			func_1693(1497516462);
			func_1693(2016141805);
			func_1692(1010885152);
			func_1693(-502324015);
			break;
		case -502324015:
			func_1693(1497516462);
			func_1693(2016141805);
			func_1693(1010885152);
			func_1692(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1693(-538889627);
			func_1693(-538880323);
			func_1693(-1056767524);
			func_1692(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1694();
			func_1692(iParam0);
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
			func_1695();
			func_1692(iParam0);
			break;
		case 2019386373:
			func_1693(-664252410);
			func_1693(2109952320);
			func_1692(2019386373);
			break;
		case -664252410:
			func_1693(2019386373);
			func_1693(2109952320);
			func_1692(-664252410);
			break;
		case 2109952320:
			func_1693(2019386373);
			func_1693(-664252410);
			func_1692(2109952320);
			break;
		case -1674179981:
			func_1693(-1835851517);
			func_1693(-1838352012);
			func_1692(-1674179981);
			break;
		case -1835851517:
			func_1693(-1674179981);
			func_1693(-1838352012);
			func_1692(-1835851517);
			break;
		case -1838352012:
			func_1693(-1674179981);
			func_1693(-1835851517);
			func_1692(-1838352012);
			break;
		case -1717960576:
			func_1693(210001842);
			func_1692(-1717960576);
			break;
		case 210001842:
			func_1693(-1717960576);
			func_1692(210001842);
			break;
		case -150493654:
			func_1693(-1271608261);
			func_1693(1846061697);
			func_1693(-1145519186);
			func_1692(-150493654);
			break;
		case -1271608261:
			func_1693(-150493654);
			func_1693(1846061697);
			func_1693(-1145519186);
			func_1692(-1271608261);
			break;
		case 1846061697:
			func_1693(-150493654);
			func_1693(-1271608261);
			func_1693(-1145519186);
			func_1692(1846061697);
			break;
		case -1145519186:
			func_1693(-150493654);
			func_1693(-1271608261);
			func_1693(1846061697);
			func_1692(-1145519186);
			break;
		case 1766284049:
			func_1693(280705402);
			func_1693(1926308480);
			func_1692(1766284049);
			break;
		case 280705402:
			func_1693(1766284049);
			func_1693(1926308480);
			func_1692(280705402);
			break;
		case 1926308480:
			func_1693(1766284049);
			func_1693(280705402);
			func_1692(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1693(439465264);
				func_1692(1609506757);
			}
			else
			{
				func_1693(1609506757);
				func_1693(439465264);
			}
			break;
		case 439465264:
			if (func_501(1609506757))
			{
				if (bParam1)
				{
					func_1692(439465264);
				}
				else
				{
					func_1693(439465264);
				}
			}
			break;
		case 1822001510:
			func_1693(-1612662716);
			func_1692(1822001510);
			break;
		case -1612662716:
			func_1693(1822001510);
			func_1692(-1612662716);
			break;
		case 1306158345:
			func_1693(1952610440);
			func_1693(-223469678);
			func_1693(-404698347);
			func_1693(1517904467);
			func_1692(1306158345);
			break;
		case 1952610440:
			func_1693(1306158345);
			func_1693(-223469678);
			func_1693(-404698347);
			func_1693(1517904467);
			func_1692(1952610440);
			break;
		case -223469678:
			func_1693(1306158345);
			func_1693(1952610440);
			func_1693(-404698347);
			func_1693(1517904467);
			func_1692(-223469678);
			break;
		case -404698347:
			func_1693(1306158345);
			func_1693(1952610440);
			func_1693(-223469678);
			func_1693(1517904467);
			func_1692(-404698347);
			break;
		case 1517904467:
			func_1693(1306158345);
			func_1693(1952610440);
			func_1693(-223469678);
			func_1693(-404698347);
			func_1692(1517904467);
			break;
		case 1376646519:
			func_1693(931649776);
			func_1693(-434590080);
			func_1693(1743048395);
			func_1693(449774763);
			func_1692(1376646519);
			break;
		case 931649776:
			func_1693(1376646519);
			func_1693(-434590080);
			func_1693(1743048395);
			func_1693(449774763);
			func_1692(931649776);
			break;
		case -434590080:
			func_1693(1376646519);
			func_1693(931649776);
			func_1693(1743048395);
			func_1693(449774763);
			func_1692(-434590080);
			break;
		case 1743048395:
			func_1693(1376646519);
			func_1693(931649776);
			func_1693(-434590080);
			func_1693(449774763);
			func_1692(1743048395);
			break;
		case 449774763:
			func_1693(1376646519);
			func_1693(931649776);
			func_1693(-434590080);
			func_1693(1743048395);
			func_1692(449774763);
			break;
		case -1414537028:
			func_1693(38162571);
			func_1693(1350391819);
			func_1693(54073871);
			func_1692(-1414537028);
			break;
		case 38162571:
			func_1693(-1414537028);
			func_1693(1350391819);
			func_1693(54073871);
			func_1692(38162571);
			break;
		case 1350391819:
			func_1693(-1414537028);
			func_1693(38162571);
			func_1693(54073871);
			func_1692(1350391819);
			break;
		case 54073871:
			func_1693(-1414537028);
			func_1693(38162571);
			func_1693(1350391819);
			func_1692(54073871);
			break;
		case 198200492:
			func_1692(198200492);
			func_1693(-1124061431);
			func_1693(52706132);
			func_1693(-259123672);
			break;
		case -1124061431:
			func_1693(198200492);
			func_1692(-1124061431);
			func_1693(52706132);
			func_1693(-259123672);
			break;
		case 52706132:
			func_1693(198200492);
			func_1693(-1124061431);
			func_1692(52706132);
			func_1693(-259123672);
			break;
		case -259123672:
			func_1693(198200492);
			func_1693(-1124061431);
			func_1693(52706132);
			func_1692(-259123672);
			break;
		case -919512195:
			func_1692(-919512195);
			func_1693(-1925798111);
			func_1693(420709909);
			func_1693(1703426636);
			break;
		case -1925798111:
			func_1692(-1925798111);
			func_1693(-919512195);
			func_1693(420709909);
			func_1693(1703426636);
			break;
		case 420709909:
			func_1692(420709909);
			func_1693(-919512195);
			func_1693(-1925798111);
			func_1693(1703426636);
			break;
		case 1703426636:
			func_1692(1703426636);
			func_1693(-919512195);
			func_1693(-1925798111);
			func_1693(420709909);
			break;
		case -1223121209:
			func_1692(-1223121209);
			func_1693(630808005);
			break;
		case 630808005:
			func_1692(630808005);
			func_1693(-1223121209);
			break;
		case 1453909576:
			func_1692(1453909576);
			func_1693(1643531967);
			break;
		case 1643531967:
			func_1692(1643531967);
			func_1693(1453909576);
			break;
		case 0:
			func_1692(0);
			func_1693(473295046);
			func_1693(-1738165526);
			break;
		case 473295046:
			func_1692(473295046);
			func_1693(0);
			func_1693(-1738165526);
			break;
		case -1738165526:
			func_1692(-1738165526);
			func_1693(0);
			func_1693(473295046);
			break;
		case 932909855:
			func_1692(932909855);
			func_1693(2051822093);
			break;
		case 2051822093:
			func_1692(2051822093);
			func_1693(932909855);
			break;
		case 405586984:
			func_1692(405586984);
			func_1693(1509509592);
			func_1693(-959357075);
			func_1693(-1311865656);
			break;
		case 1509509592:
			func_1692(1509509592);
			func_1693(405586984);
			func_1693(-959357075);
			func_1693(-1311865656);
			break;
		case -959357075:
			func_1692(-959357075);
			func_1693(1509509592);
			func_1693(405586984);
			func_1693(-1311865656);
			break;
		case -1311865656:
			func_1692(-1311865656);
			func_1693(1509509592);
			func_1693(-959357075);
			func_1693(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1692(-524145696);
			}
			else
			{
				func_1693(-524145696);
			}
			func_1693(1626481264);
			func_1693(282809459);
			break;
		case 282809459:
			func_1692(282809459);
			func_1693(1626481264);
			func_1693(-524145696);
			break;
		case 1626481264:
			func_1692(1626481264);
			func_1693(-524145696);
			func_1693(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1692(885203519);
			}
			else
			{
				func_1693(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1692(-1080627546);
			}
			else
			{
				func_1693(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_501(iParam0))
				{
					func_1692(iParam0);
				}
			}
			else if (func_501(iParam0))
			{
				func_1693(iParam0);
			}
			break;
	}
}

void func_1162(int iParam0)
{
	if (!func_1696(iParam0))
	{
		func_1698(func_1697(iParam0));
	}
}

int func_1163()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1696(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1164(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1165(iVar9);
	iVar2 = func_1165(iVar10);
	iVar3 = func_1165(iVar11);
	iVar5 = func_1166(iVar9);
	iVar6 = func_1166(iVar10);
	iVar7 = func_1166(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1165(iVar12);
		iVar8 = func_1166(iVar12);
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

int func_1165(int iParam0)
{
	if (func_353(iParam0, 1, 0))
	{
		iVar0 = func_595(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1166(int iParam0)
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

int func_1167(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1168(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1169(int iParam0, int iParam1)
{
	if (!func_1274(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1170(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1169(iParam1, 5) || iParam0 == func_1169(iParam1, 6)) || iParam0 == func_1169(iParam1, 7)) || iParam0 == func_1169(iParam1, 8)) || iParam0 == func_1169(iParam1, 9))
	{
		func_1160(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_607(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_609(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1171(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1169(iParam1, 5) || iParam0 == func_1169(iParam1, 6)) || iParam0 == func_1169(iParam1, 7)) || iParam0 == func_1169(iParam1, 8)) || iParam0 == func_1169(iParam1, 9))
	{
		if (func_1160(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_607(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_609(51, 0, 0, iVar0, func_1118(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_607(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_609(51, 0, 0, iVar0, func_1118(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1172()
{
	if (func_196((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1173(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1174(int iParam0)
{
	if (!func_1699(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1175(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1176(int iParam0, int iParam1, var uParam2)
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

bool func_1177(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1700();
	if (iParam2 == 39)
	{
		Var0 = { func_702(iParam0, 1, 0) };
		iParam2 = func_690(func_703(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_611(iParam0, 866047851) && func_1685(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1179(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1701(func_1247(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1702(iParam2);
	func_1703(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1228(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1228(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1234(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1704(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1705(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1705(&(Global_1946804->f_1378), 1, 0);
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
				func_1424(func_1247(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1178(bool bParam0, bool bParam1, bool bParam2)
{
	func_1706(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1179(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1180()
{
	func_1707(&(Global_1946804->f_2776));
	func_1708(32768);
	func_1424(1108822547, 8, 6);
}

int func_1181(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_690(iParam0, 1);
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

void func_1182(int iParam0)
{
	if (func_1709(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1710(Var0);
}

void func_1183(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1710(Var0);
}

bool func_1184(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1037(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1185(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1186(int iParam0)
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

float func_1187()
{
	if (func_1711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_450(2);
	}
	if (Global_1347477->f_119)
	{
		return func_450(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1712();
	fVar2 = func_1713();
	fVar3 = func_1714();
	fVar4 = func_1715();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1716()));
	fVar7 = (func_450(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1717(3, round((to_float(iVar8) * fVar10)), 0);
	func_1718(3, fVar9, fVar9 > 100f);
	return func_1719(fVar7, -100f, 100f);
}

float func_1188()
{
	if (func_1711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_450(1);
	}
	if (Global_1347477->f_119)
	{
		return func_450(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1712();
	fVar2 = func_1713();
	fVar3 = func_1714();
	fVar4 = func_1715();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1716()));
	fVar7 = (func_450(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1717(2, round((to_float(iVar8) * fVar10)), 0);
	func_1718(2, fVar9, fVar9 > 100f);
	return func_1719(fVar7, -100f, 100f);
}

float func_1189()
{
	if (func_1711())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_450(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1720())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1721())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_450(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1712();
	fVar2 = func_1713();
	fVar3 = func_1714();
	fVar4 = func_1715();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1716()));
	fVar7 = (func_450(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1717(1, round((to_float(iVar8) * fVar10)), 0);
	func_1718(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_450(0);
	}
	return func_1719(fVar7, -100f, 100f);
}

bool func_1190(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1191(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1192(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_591(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1111(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_619(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1037(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1193(int iParam0, bool bParam1)
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
				return func_1722();
			}
			break;
	}
	return 0;
}

int func_1194(int iParam0)
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

bool func_1195(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1196(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1195(iParam0))
	{
		return;
	}
	if (func_1723(iParam0))
	{
		return;
	}
	if (!func_1724(iParam0))
	{
		func_1725(iParam0, 1, 0);
	}
	iVar0 = func_1726(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1727(iParam0, 512))
		{
			func_701(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_219() && !bParam1) && !func_202(0, 0, 1))
	{
		func_730(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1728(iParam0, 6);
	if (bParam2)
	{
		if (!func_202(0, 0, 1))
		{
			func_373(1, 4);
		}
	}
}

bool func_1197(int iParam0, bool bParam1)
{
	return func_1193(iParam0, 0) < func_1729(iParam0, bParam1);
}

bool func_1198(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1199(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_690(iParam0, 1)] != &Global_1946804->f_57[func_690(iParam0, 1)];
}

void func_1200(int iParam0, int iParam1)
{
	if (func_611(iParam1, 130796156))
	{
		func_1730(iParam1, 0);
	}
	else if (func_611(iParam1, 930141731))
	{
		func_1730(iParam1, 1);
		func_1731(iParam0);
	}
}

void func_1201(var uParam0, int iParam1)
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

int func_1202(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1732(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1733(uParam2, iParam0, Var1);
	return 1;
}

int func_1203(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1204(int iParam0)
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

int func_1205(int iParam0)
{
	if (!func_1734(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1206()
{
	return !&Global_1911774;
}

void func_1207(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1208(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1209(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1210(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1211(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1735(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1212(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1735(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1213(bool bParam0)
{
	if (bParam0)
	{
		func_324(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1214();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1736(2032023096);
		func_327(-615217896);
		func_686(655868243, 1, 1, -142743235, 1);
		func_1738(146323340, func_1737());
		Var0 = { func_1469() };
		if (func_1739(&Var0) == -1387633835)
		{
			func_1740(&Var0);
			func_1741(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1742(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1462(iVar6) == 2010625508)
			{
				func_1743(iVar6, iVar7);
				func_1744(iVar6, iVar8);
				func_1745(iVar6, iVar9);
				func_1746(iVar6, 0);
				if (func_1747(iVar6))
				{
					func_1748(iVar6);
				}
				iVar10 = func_1749(iVar8);
				func_1750(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1214()
{
	if (!func_1751(-1898635967, func_1737(), 1))
	{
		return 0;
	}
	if (func_344())
	{
		if (!func_1751(146323340, func_1737(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1215()
{
	func_338(34411519);
	func_338(834124286);
	func_338(-570967010);
}

void func_1216(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_324(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_686(-1080874779, 3, 1, -142743235, 1);
		func_686(-223790555, 3, 1, -142743235, 1);
		func_686(1566032147, 3, 1, -142743235, 1);
		func_686(891311852, 5, 1, -142743235, 1);
		func_686(-1353737667, 5, 1, -142743235, 1);
		func_686(-330313895, 5, 1, -142743235, 1);
		func_686(-2051332199, 5, 1, -142743235, 1);
		func_686(1237770824, 5, 1, -142743235, 1);
		func_686(-1795542128, 3, 1, -142743235, 1);
		func_686(-1757588258, 3, 1, -142743235, 1);
		func_686(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1742(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1462(iVar0) == 153881023)
			{
				func_1743(iVar0, iVar1);
				func_1744(iVar0, iVar2);
				func_1745(iVar0, iVar3);
				func_1746(iVar0, 0);
				if (func_1747(iVar0))
				{
					func_1748(iVar0);
				}
				iVar4 = func_1749(iVar2);
				func_1750(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1214();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1217(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1752(iParam0);
	if (bParam3)
	{
		func_729(iParam0, sParam1, iParam2);
	}
}

bool func_1218(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1219(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1220()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1184("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1185(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1135(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1186(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1186(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1221(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1753(Param1, iParam5, &Var5, 0))
	{
		func_1137(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1192(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1754(Var19, 1);
}

bool func_1222(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1643(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1644(&Var0, func_1242(0));
	}
	if (!func_1645(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1185(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1137(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1186(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1223(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_702(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1755(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1136(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1137(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1224(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_611(iParam0, 606799272))
		{
			func_1756(iParam0, iParam1);
		}
		if (func_611(iParam0, -1112814642) && func_611(iParam0, -1697809989))
		{
			func_639(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1225(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1757(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_615(iParam0) != -999503751)
		{
			func_1758(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_615(iParam0) != -999503751)
	{
		func_1758(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1759(iParam0, 1);
	return 1;
}

void func_1226()
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

void func_1227(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1760(0);
	}
	if (bParam0)
	{
		func_1239(8);
		func_1239(512);
	}
	else
	{
		func_1239(8);
		func_1239(16);
	}
}

void func_1228(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1229(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_692();
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

int func_1230(int iParam0)
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

void func_1231(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1761(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1247(iVar0, 1);
			if (func_1421(iVar0, iParam1))
			{
				vVar4 = { func_694(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1420(iVar7, 4))
				{
					func_1424(iVar7, 4, 6);
				}
			}
			else
			{
				func_1423(iVar7, 4, 6);
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

bool func_1232(int iParam0)
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
	func_1762(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1233(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1234(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_615(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1421(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1703(iVar1, iVar3);
		}
	}
	if (func_1199(-1586649372) && func_1421(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1703(iVar1, iVar3);
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
						func_1703(iVar1, iVar3);
					}
				}
			}
			func_1763(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1763(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1703(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1763(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1703(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1703(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1763(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1763(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1703(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1763(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1703(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1703(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_615(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1703(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1688(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_615(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1703(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_611(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1703(iVar1, iVar3);
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
						func_1703(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1688(&(Global_1946804->f_1497.f_1[iVar1])) || func_611(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1703(iVar1, iVar3);
					}
				}
			}
			switch (func_615(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_615(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1703(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_615(&(uParam0->f_1[iVar1])) || func_611(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1703(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1235(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1236(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1190(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1190(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1237(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1190(iParam0, 65536) && !func_1190(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1190(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1190(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1238()
{
	return Global_1905944->f_5694;
}

void func_1239(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1240(struct<4> Param0)
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
			if (func_1764(Param0))
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
			func_1765(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1239(8);
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
			if (func_1764(Param0))
			{
				return;
			}
			func_1765(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1239(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1183(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1241(bool bParam0)
{
	return func_1136(1328661203, func_1766(), -1591664384, bParam0);
}

struct<4> func_1242(bool bParam0)
{
	iVar0 = func_1037(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1136(923904168, func_1241(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1136(923904168, func_1241(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1136(923904168, func_1241(bParam0), -740156546, 0);
}

bool func_1243(int iParam0, bool bParam1)
{
	if (func_615(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_613(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1244(bool bParam0)
{
	iVar0 = func_1037(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1136(271701509, func_1241(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1136(271701509, func_1241(bParam0), 12999093, 0);
}

bool func_1245(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_615(iParam0);
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

bool func_1246(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1037(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1247(int iParam0, int iParam1)
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

int func_1248(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1249(int iParam0, int iParam1)
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

void func_1250(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1251(int iParam0, int iParam1)
{
	iVar0 = func_710(*iParam0);
	iVar1 = func_709(*iParam0);
	if (iParam1 < 1 || iParam1 > func_715(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1252(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1254(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1255(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1256(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1257(int iParam0)
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

bool func_1258(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1105(iParam0))
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

int func_1259(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_591(iParam0, 0))
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

int func_1260(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1640(&iParam0);
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	if (!func_619(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1109(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1642(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1037(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_611(iParam0, -5284486))
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
		if (func_1767(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_672(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_675(iVar62, iVar61);
					if (func_591(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1767(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1262(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1768(1);
}

void func_1263(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1769(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_330(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1769(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_330(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1264()
{
	return Global_40.f_4283.f_325;
}

bool func_1265(int iParam0)
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

bool func_1266(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1267(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1268(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1269(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1270(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1271(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_405();
	bVar1 = false;
	if (bVar0 && !func_1389(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1389(37)) && !func_1389(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1389(43)) && !func_1389(44))
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
		if (func_1463(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1463(1) == 1)
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

int func_1272()
{
	return Global_40.f_1095.f_3054;
}

bool func_1273(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_1274(int iParam0, var uParam1)
{
	if (!func_1770(iParam0))
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

int func_1275()
{
	if (func_405())
	{
		if (!func_1389(3))
		{
			return func_1541(43);
		}
		if (func_1389(38) && !func_1389(43))
		{
			return func_1771(8);
		}
	}
	return 0;
}

bool func_1276(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1772(iParam0));
}

Vector3 func_1277(int iParam0, int iParam1)
{
	func_1274(15, &Var0);
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

int func_1278(int iParam0, int iParam1)
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
	iVar0 = func_1773(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1274(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1774(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1279(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1775(iParam0);
	if (func_501(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1280(int iParam0)
{
	if (!func_1274(15, &Var0))
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

bool func_1281(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1776(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1777(5))
	{
		if (func_1778(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1456(vParam0);
	if (bParam6)
	{
		iVar1 = func_378(vParam0, 1);
		if (func_116(iVar1) || func_1779(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1780(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1781())
	{
		if (func_1782(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1783(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_378(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1784(iParam3, iParam4))
	{
		return false;
	}
	if (func_1785(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1786(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_405())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1787(vParam0, bParam10) || func_1788(vParam0, bParam10))
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

int func_1282(vector3 vParam0)
{
	iVar0 = func_1789(vParam0, 0f, 0f, 0, 2);
	return func_1789(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1283(int iParam0)
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

void func_1284(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1559(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 57841;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1285(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1559(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1286()
{
	if (func_230(1))
	{
		func_1304(1);
		func_467(3, 0);
	}
	if (func_230(2))
	{
		func_1304(2);
		func_467(1, 0);
	}
	if (func_230(4))
	{
		func_1304(4);
		func_467(2, 0);
	}
}

void func_1287(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1288(int iParam0)
{
	if (_does_anim_scene_exist(&(uLocal_202[iParam0])))
	{
		if (_is_anim_scene_loaded(&(uLocal_202[iParam0]), true, false))
		{
			func_1790(iParam0);
			start_anim_scene(&(uLocal_202[iParam0]));
		}
	}
}

int func_1289(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1290(char[4] cParam0)
{
	if (func_33(cParam0) != iLocal_23)
	{
		if (((func_33(cParam0) == iLocal_16 || func_33(cParam0) == iLocal_18) || func_33(cParam0) == iLocal_19) || func_33(cParam0) == iLocal_26)
		{
			if (func_994(player_id(), 1, 0, 1))
			{
				func_1554(cParam0, "LAW_FAIL", "", 1, 0);
			}
		}
		else if (func_994(player_id(), 0, 0, 0))
		{
			func_1554(cParam0, "LAW_FAIL", "", 1, 0);
		}
	}
	if (func_33(cParam0) == iLocal_22)
	{
		if (!func_466(6))
		{
			func_1791(cParam0);
		}
	}
	else
	{
		func_1791(cParam0);
	}
}

void func_1291(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1794(cParam0);
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		if (func_466(30))
		{
			set_gps_custom_route_render(false, 0, 0);
			clear_gps_custom_route();
			func_467(30, 0);
		}
		func_462(&iLocal_41);
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
		func_1799(cParam0, "MAR2_OBJ01", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			if (func_832(&(uLocal_46[1]), 0))
			{
				func_1589(13, 1);
				func_1011(cParam0, &(uLocal_46[1]), 128);
			}
			if (!does_blip_exist(iLocal_41))
			{
				iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
				func_1801("mar2_drive_out_ranch", 0, 76603059);
				func_467(30, 1);
			}
			func_1802(cParam0, "MAR2_OBJ01", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_449(1) && !func_1803())
			{
				func_1799(cParam0, "MAR2_OBJ01", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_225(&uLocal_218);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (((func_928(&uLocal_218) > 8f && func_1386(Global_35, -2584.787f, 458.5872f, 144.9319f, 1) > 15f) && is_ped_in_vehicle(Global_35, iLocal_72, false)) && func_1804(cParam0, "MAR2_LEPR", 0))
			{
				_0x0d7fd6a55fd63aef(8, 3, 1);
				_0x0d7fd6a55fd63aef(24, 3, 1);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1371("MAR2_LEPR") && is_ped_in_vehicle(Global_35, iLocal_72, false))
			{
				if (func_1389(66))
				{
					if (func_1804(cParam0, "MAR2_Y_MAR4", 0))
					{
						func_135(cParam0, 51);
					}
				}
				else if (func_1804(cParam0, "MAR2_N_MAR4", 0))
				{
					func_135(cParam0, 51);
				}
			}
			break;
		case 51:
			break;
	}
	if (func_466(30))
	{
		if (is_point_on_road(get_entity_coords(iLocal_72, true, false), iLocal_72))
		{
			set_gps_custom_route_render(false, 0, 0);
			clear_gps_custom_route();
			func_462(&iLocal_41);
			iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
			_blip_set_modifier(iLocal_41, -1878373110);
			set_gps_flags(512, 0f);
			func_467(30, 0);
		}
	}
}

void func_1292(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_72))
	{
		switch (iVar277)
		{
			case 0:
				func_225(&uLocal_249);
				func_942(&uLocal_280, 1);
				break;
			case 1:
				if (bVar1259)
				{
					if (func_928(&uLocal_249) >= 1f)
					{
						if (is_point_on_road(get_entity_coords(iLocal_72, true, false), iLocal_72))
						{
							iLocal_1261 = 1;
						}
						else
						{
							iLocal_1261 = 0;
						}
						func_225(&uLocal_249);
					}
				}
				break;
			case 15:
				break;
		}
	}
}

void func_1293(char[4] cParam0)
{
	switch (iVar258)
	{
		case 0:
			func_225(&uLocal_221);
			func_941(&uLocal_261, 1);
			break;
		case 1:
			break;
		case 21:
			break;
	}
}

void func_1294(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 1);
					break;
				case 1:
					if (iVar0 == 1)
					{
						if (func_928(vLocal_224[iVar0]) >= 15f)
						{
							set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), false);
							if (_does_scenario_point_exist(iLocal_165))
							{
								_task_use_scenario_point(&(uLocal_46[iVar0]), iLocal_165, "WORLD_HUMAN_INSPECT_FEMALE_D", -1, true, false, -439112356, false, -1f, false);
							}
							else
							{
								func_1806(&(uLocal_46[iVar0]), -439112356, -1, 0, -1040556109, -1082130432);
							}
							func_225(vLocal_224[iVar0]);
							func_1805(uLocal_262[iVar0], 20);
						}
						else if (_does_anim_scene_exist(&(uLocal_202[0])))
						{
							if (_is_anim_scene_loaded(&(uLocal_202[0]), true, false))
							{
								if (_0xb89fcff19dafff28(&(uLocal_202[0]), "AbigailRoberts"))
								{
									set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), false);
									if (_does_scenario_point_exist(iLocal_165))
									{
										_task_use_scenario_point(&(uLocal_46[iVar0]), iLocal_165, "WORLD_HUMAN_INSPECT_FEMALE_D", -1, true, false, -439112356, false, -1f, false);
									}
									else
									{
										func_1806(&(uLocal_46[iVar0]), -439112356, -1, 0, -1040556109, -1082130432);
									}
									func_225(vLocal_224[iVar0]);
									func_1805(uLocal_262[iVar0], 20);
								}
							}
						}
					}
					else if (iVar0 == 0)
					{
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 20);
					}
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

void func_1295()
{
	switch (iVar1265)
	{
		case 0:
			func_1807(1);
			break;
		case 1:
			disable_all_control_actions(0);
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(0, -813019446, true);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, 1250966545, true);
			if ((_does_anim_scene_exist(&(uLocal_202[0])) && _is_anim_scene_started(&(uLocal_202[0]), false)) && has_anim_event_fired(Global_35, -1030571581))
			{
				task_vehicle_goto_navmesh(Global_35, iLocal_72, -2572.146f, 498.4782f, 143.6947f, 4.5f, 0, 5f);
				func_225(&uLocal_1264);
				func_1807(2);
			}
			break;
		case 2:
			disable_all_control_actions(0);
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(0, -813019446, true);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, 1250966545, true);
			if (func_928(&uLocal_1264) > 3f || (func_928(&uLocal_1264) > 1f && is_disabled_control_pressed(0, 1537201378)))
			{
				clear_ped_tasks(Global_35, 1, 0);
				func_1807(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1296(char[4] cParam0)
{
}

void func_1297(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 || iParam0);
}

Vector3 func_1298(int iParam0, int iParam1)
{
	return func_1048(iParam0, iParam1);
}

int func_1299(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1300(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1301(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1559(iVar0))
	{
		return;
	}
	iVar1 = func_1560(iParam3);
	if (!func_1561(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1302(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1303(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1304(int iParam0)
{
	Global_40.f_9.f_21 = (Global_40.f_9.f_21 - (Global_40.f_9.f_21 && iParam0));
}

void func_1305(char[4] cParam0)
{
	func_1794(cParam0);
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_462(&iLocal_41);
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
		func_1799(cParam0, "MAR2_OBJ01", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_41))
			{
				iLocal_41 = func_1299(408396114, func_1298(12, 0), 1);
				_blip_set_modifier(iLocal_41, -1878373110);
				set_gps_flags(512, 0f);
			}
			func_1802(cParam0, "MAR2_OBJ01", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1309(1) && func_1804(cParam0, "MAR2_REINSBACK", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1371("MAR2_REINSBACK"))
			{
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1306()
{
	if (is_entity_dead(iLocal_72))
	{
		return;
	}
	if (!func_832(&(uLocal_46[0]), 0))
	{
		return;
	}
	switch (iVar278)
	{
		case 0:
			_0x1b3c2d961f5fc0e1(func_1311());
			StringCopy(&Local_1268, "camera_treatments", 64);
			StringCopy(&(Local_1268.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
			_0x6a4d224fc7643941(&Local_1268);
			func_464(&uLocal_249);
			func_942(&uLocal_280, 4);
			break;
		case 4:
			if (func_1808())
			{
				if (func_466(3))
				{
					func_1809(3);
				}
				else
				{
					func_1809(0);
				}
				prefetch_srl(func_1810(iVar1282));
				_0xae00387e53b1e9fc();
				_0xef1a8a484118735e();
				_0x798be43c9393632b(&Local_1268);
				func_467(36, 1);
				func_942(&uLocal_280, 6);
			}
			else if (func_1811() && _0xdd0b7c5ae58f721d(&Local_1268))
			{
				_0xb8b207c34285e978(&Local_1268);
				task_vehicle_drive_wander(&(uLocal_46[0]), iLocal_72, get_entity_speed(iLocal_72), 524419);
				if (func_466(3))
				{
					func_1809(3);
				}
				else
				{
					func_1809(0);
				}
				prefetch_srl(func_1810(iVar1282));
				_0xae00387e53b1e9fc();
				_0xef1a8a484118735e();
				func_225(&uLocal_249);
				func_942(&uLocal_280, 5);
			}
			break;
		case 5:
			if (is_srl_loaded() && _0xaa235e2f2c09e952(func_1311()))
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				if (_0xa2b1c7ef759a63ce() == 1f)
				{
					func_942(&uLocal_280, 7);
				}
			}
			break;
		case 6:
			if (is_srl_loaded() && _0xaa235e2f2c09e952(func_1311()))
			{
				func_942(&uLocal_280, 7);
			}
			break;
		case 7:
			func_467(8, 1);
			_0x5e3ccf03995388b5(func_1812(iVar1282), func_1813(iVar1282));
			_0xbc016635d6a73b31(func_1311(), func_1814(iVar1282), 5);
			func_1355(iLocal_72, func_1815(iVar1282), 2, 1073741824);
			set_vehicle_on_ground_properly(iLocal_72, 1.401298E-45f);
			if (iVar1282 == 3)
			{
				fVar0 = 4.5f;
			}
			else
			{
				fVar0 = 3f;
			}
			set_vehicle_forward_speed(iLocal_72, fVar0);
			_task_vehicle_drive_to_destination(&(uLocal_46[0]), iLocal_72, func_1298(12, 0), fVar0, 69468672, 3, 5f, 5f, 0);
			_0x0a5a4f1979abb40e(&Local_1268);
			_0x798be43c9393632b(&Local_1268);
			StringCopy(&Local_1268, "camera_treatments", 64);
			StringCopy(&(Local_1268.f_8), "GENERIC_CME_PUSH_IN_TREATMENT_REQUEST", 64);
			_0x6a4d224fc7643941(&Local_1268);
			end_srl();
			prefetch_srl(func_1810(iVar1283));
			_0xae00387e53b1e9fc();
			_0xef1a8a484118735e();
			func_225(&uLocal_249);
			func_942(&uLocal_280, 8);
			break;
		case 8:
			if (func_1816(iVar1282, iVar1283))
			{
				func_1809(iVar1283);
				_0xbc016635d6a73b31(func_1311(), func_1814(iVar1282), 5);
				func_1355(iLocal_72, func_1815(iVar1282), 2, 1073741824);
				set_vehicle_on_ground_properly(iLocal_72, 1.401298E-45f);
				set_vehicle_forward_speed(iLocal_72, 4.5f);
				_task_vehicle_drive_to_destination(&(uLocal_46[0]), iLocal_72, func_1298(12, 0), 4.5f, 69468672, 3, 5f, 5f, 0);
				end_srl();
				prefetch_srl(func_1810(iVar1283));
				_0xae00387e53b1e9fc();
				_0xef1a8a484118735e();
				func_225(&uLocal_249);
				func_942(&uLocal_280, 9);
			}
			break;
		case 9:
			if (func_1816(iVar1282, iVar1283) && _0xdd0b7c5ae58f721d(&Local_1268))
			{
				func_1809(iVar1283);
				_0xbc016635d6a73b31(func_1311(), func_1814(iVar1282), 5);
				_0xb8b207c34285e978(&Local_1268);
				func_1355(iLocal_72, func_1815(iVar1282), 2, 1073741824);
				set_vehicle_on_ground_properly(iLocal_72, 1.401298E-45f);
				set_vehicle_forward_speed(iLocal_72, 4.5f);
				_0x4d15e49764cb328a(iLocal_72, 0.1f);
				_task_vehicle_drive_to_destination(&(uLocal_46[0]), iLocal_72, func_1298(12, 0), 4.5f, 69468672, 3, 5f, 5f, 0);
				func_225(&uLocal_249);
				func_942(&uLocal_280, 10);
			}
			break;
		case 10:
			end_srl();
			func_942(&uLocal_280, 11);
			break;
		case 11:
			if (func_1816(iVar1282, iVar1283))
			{
				_0x43037abfe214a851();
				func_942(&uLocal_280, 13);
			}
			break;
		case 13:
			_0xa54d643d0773eb65(func_1311(), func_1814(iVar1282), 5);
			_0x0a5a4f1979abb40e(&Local_1268);
			_0x798be43c9393632b(&Local_1268);
			func_225(&uLocal_249);
			func_942(&uLocal_280, 14);
			break;
		case 14:
			if (func_928(&uLocal_249) > 2f)
			{
				func_942(&uLocal_280, 15);
			}
			break;
		case 15:
			break;
	}
	if (iVar278 > 7 && iVar278 < 13)
	{
		_0x702b75dc9d3ede56(true);
	}
	if (iVar278 >= 7 && iVar278 <= 13)
	{
		if (func_466(36) && iVar278 == 7)
		{
			_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
		}
		else
		{
			_0xe296208c273bd7f0(-1, 1000, 0, 17, 1, 0);
		}
	}
}

void func_1307()
{
	switch (iVar1284)
	{
		case 0:
			if (!func_1803())
			{
				func_1288(1);
				func_1817(1);
			}
			break;
		case 1:
			if ((_does_anim_scene_exist(&(uLocal_202[1])) && _is_anim_scene_started(&(uLocal_202[1]), false)) && has_anim_event_fired(Global_35, -289094987))
			{
				func_467(8, 1);
				set_player_control(player_id(), false, 256, false);
				_0xe01f55b2896f6b37(iLocal_72, 1);
				_task_vehicle_drive_to_destination(&(uLocal_46[0]), iLocal_72, func_1298(12, 0), 3f, 69470720, 3, 5f, 5f, 0);
				func_225(&uLocal_221);
				func_1817(2);
			}
			break;
		case 2:
			if ((_does_anim_scene_exist(&(uLocal_202[1])) && _is_anim_scene_started(&(uLocal_202[1]), false)) && has_anim_event_fired(Global_35, 1178611789))
			{
				func_1817(3);
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(uLocal_202[1])) && func_1818(1))
			{
				func_468(1);
			}
			if (func_1819())
			{
				clear_ped_tasks(&(uLocal_46[0]), 1, 0);
				_0xe01f55b2896f6b37(iLocal_72, 0);
				func_225(&uLocal_249);
				func_1817(4);
			}
			break;
		case 4:
			if (func_928(&uLocal_249) < 2.5f)
			{
				set_vehicle_forward_speed(iLocal_72, 4.5f);
			}
			else if (!get_ped_config_flag(Global_35, 175, true) && !get_ped_config_flag(&(uLocal_46[0]), 175, true))
			{
				func_467(8, 0);
				set_player_control(player_id(), true, 0, false);
				func_467(4, 1);
				func_1817(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1308(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (iVar1 == 0 && !is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					if (!func_8(cParam0, 8))
					{
					}
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 20);
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

bool func_1309(bool bParam0)
{
	if (bParam0)
	{
		return iVar1283 >= 4;
	}
	return iVar1283 >= 5;
}

int func_1310(char[4] cParam0)
{
	return cParam0->f_599;
}

char* func_1311()
{
	return "script@story@MAR2@WagonDriveToStrawberry";
}

void func_1312(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		if (func_33(cParam0) == 0)
		{
			if (((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7)
			{
				func_1820(cParam0, iVar0);
			}
		}
		else if (func_33(cParam0) >= 2 && func_33(cParam0) <= 4)
		{
			if ((((((((iVar0 == 8 || iVar0 == 9) || iVar0 == 10) || iVar0 == 11) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16)
			{
				func_1820(cParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_1313(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_462(&iLocal_41);
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		iLocal_41 = func_1821(408396114, &(iLocal_93[19]), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
		func_1799(cParam0, "MAR2_OBJ02", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			iLocal_41 = func_1821(408396114, &(iLocal_93[19]), 1);
			_blip_set_modifier(iLocal_41, -1878373110);
			set_gps_flags(512, 0f);
			func_1799(cParam0, "MAR2_OBJ02", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1804(cParam0, "MAR2_OBJ02", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1371("MAR2_OBJ02") && func_1804(cParam0, "MAR2_OBJ02CONT", 0))
			{
				func_464(&uLocal_218);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1314(char[4] cParam0)
{
	if (&uLocal_273[1] != 2)
	{
		if (func_1822(Global_35, func_1298(3, 2), 50f, 1, 1))
		{
			func_1504(cParam0, 0);
		}
	}
}

void func_1315(char[4] cParam0)
{
	if (!&iLocal_185[0])
	{
		if (func_1822(Global_35, func_1298(3, 2), 50f, 1, 1))
		{
			if (&uLocal_273[1] == 2)
			{
				iLocal_185[0] = 1;
			}
		}
	}
	if (&iLocal_185[0])
	{
		if (!does_entity_exist(&(iLocal_50[0])))
		{
			func_1505(cParam0, 0);
		}
	}
}

void func_1316()
{
	switch (iVar1285)
	{
		case 0:
			if (func_1823())
			{
				func_1824(1);
			}
			break;
		case 1:
			if (_is_anim_scene_loaded(&(uLocal_202[11]), true, false) && _0x23e33cb9f4a3f547(&(uLocal_202[11]), "PL_ACTION"))
			{
				set_anim_scene_entity(&(uLocal_202[11]), "Thug_A", &(iLocal_62[0]), 0);
				set_anim_scene_entity(&(uLocal_202[11]), "man", &(iLocal_62[1]), 0);
				_set_anim_scene_playback_list_bool(&(uLocal_202[11]), "PL_ACTION", true);
				set_anim_scene_origin(&(uLocal_202[11]), -1778.096f, -441.288f, 154.084f, 0f, 0f, -103.016f, 2);
				start_anim_scene(&(uLocal_202[11]));
				func_1824(2);
			}
			break;
		case 2:
			if (is_entity_in_volume(Global_35, &(iLocal_93[45]), false, 0))
			{
				set_anim_scene_bool(&(uLocal_202[11]), "ARGUE_BOOL", true, false);
				func_1824(3);
			}
			break;
		case 3:
			if (_0x8d81e7824b7753f7(&(uLocal_202[11]), "S_ARGUE_IDLE", 1))
			{
				set_anim_scene_rate(&(uLocal_202[11]), 1.5f);
			}
			else
			{
				set_anim_scene_rate(&(uLocal_202[11]), 1f);
			}
			if (func_1825())
			{
				_delete_anim_scene(&(uLocal_202[11]));
				_task_smart_flee_style_ped(&(iLocal_62[0]), Global_35, 3, 0, -1082130432, -1, 0);
				_task_smart_flee_style_ped(&(iLocal_62[1]), Global_35, 3, 0, -1082130432, -1, 0);
				func_1824(5);
			}
			if (!func_466(16))
			{
				if (_0x8d81e7824b7753f7(&(uLocal_202[11]), "S_LAW_ON_OUR_SIDE", 1))
				{
					_delete_anim_scene(&(uLocal_202[11]));
					_task_start_scenario_in_place(&(iLocal_62[0]), 871322766, 0, true, 0, -1f, false);
					func_467(16, 1);
				}
			}
			if (!func_466(17))
			{
				if (_0x005e6f28dd7ed58d(&(uLocal_202[11]), "man"))
				{
					task_wander_standard(&(iLocal_62[1]), 131.9644f, 0);
					func_467(17, 1);
				}
			}
			if (func_466(16) && func_466(17))
			{
				func_1824(4);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

int func_1317()
{
	if (does_entity_exist(iLocal_73) && does_entity_exist(iLocal_74))
	{
		return 1;
	}
	if (!does_entity_exist(iLocal_73))
	{
		iLocal_73 = create_vehicle(1596452133, -1753.21f, -400.2859f, 154.6396f, 78.4985f, true, true, false, false);
	}
	else
	{
		iLocal_74 = func_1826(iLocal_73, 1255849914, -1, 1, 1, 1, 1, 0, 0, 0);
		if (does_entity_exist(iLocal_74))
		{
			set_blocking_of_non_temporary_events(iLocal_74, true);
			return 1;
		}
	}
	return 0;
}

void func_1318()
{
	if (!is_vehicle_driveable(iLocal_73, false, false))
	{
		return;
	}
	if (!func_832(iLocal_74, 0))
	{
		return;
	}
	switch (iVar337)
	{
		case 0:
			if (func_918(Global_35, iLocal_74, 0, 0) < 110f)
			{
				_task_vehicle_drive_to_destination(iLocal_74, iLocal_73, -1782.503f, -424.5869f, 155.5148f, 5.5f, 69734919, 6, 1f, 1f, 0);
				func_1827(1);
			}
			break;
		case 1:
			if (is_entity_in_volume(iLocal_73, &(iLocal_93[37]), false, 0))
			{
				func_1827(2);
			}
			break;
		case 2:
			if (!is_entity_in_volume(iLocal_73, &(iLocal_93[37]), false, 0) || func_918(Global_35, iLocal_73, 1, 1) < 35f)
			{
				if (!is_entity_in_volume(Global_35, &(iLocal_93[38]), false, 0))
				{
					_task_vehicle_drive_to_destination(iLocal_74, iLocal_73, -1873.058f, -422.1875f, 163.3487f, 5.5f, 69734919, 6, 1f, 1f, 0);
					func_1827(3);
				}
				else
				{
					_task_vehicle_drive_to_destination(iLocal_74, iLocal_73, -1799.624f, -455.4232f, 159.4353f, 5.5f, 69734919, 6, 1f, 1f, 0);
					func_1827(5);
				}
			}
			break;
		case 3:
			if (is_entity_in_volume(iLocal_73, &(iLocal_93[40]), false, 0) && is_entity_in_volume(iLocal_72, &(iLocal_93[39]), false, 0))
			{
				_task_vehicle_drive_to_destination(iLocal_74, iLocal_73, -1832.248f, -429.2808f, 159.7773f, 3f, 69734919, 1, 1f, 1f, 0);
				func_1827(4);
			}
			break;
		case 4:
			if (!is_entity_in_volume(iLocal_72, &(iLocal_93[39]), false, 0))
			{
				_task_vehicle_drive_to_destination(iLocal_74, iLocal_73, -1873.058f, -422.1875f, 163.3487f, 5.5f, 69734919, 6, 1f, 1f, 0);
				func_1827(3);
			}
			break;
		case 5:
			break;
	}
}

bool func_1319()
{
	return (func_1828(9) && func_1828(10));
}

void func_1320(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8)
{
	if (!is_vehicle_driveable(iLocal_72, false, false))
	{
		return;
	}
	fVar0 = 12f;
	if (func_1822(iLocal_72, vParam0, fParam3, 1, 1))
	{
		fVar0 = fParam6;
		if (func_1822(iLocal_72, vParam0, fParam4, 1, 1))
		{
			set_ped_reset_flag(Global_35, 246, true);
			fVar0 = fParam7;
			if (func_1822(iLocal_72, vParam0, fParam5, 1, 1))
			{
				fVar0 = fParam8;
			}
		}
	}
	if (_0xc6d7ddc843176701(iLocal_72) != fVar0)
	{
		_0x0c3f0f7f92ca847c(iLocal_72, fVar0);
	}
}

float func_1321(int iParam0, int iParam1)
{
	return func_1049(iParam0, iParam1);
}

bool func_1322(int iParam0, float fParam1, float fParam2)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	fVar0 = get_entity_heading(iParam0);
	if (fVar0 <= (fParam1 + fParam2) && fVar0 >= (fParam1 - fParam2))
	{
		return true;
	}
	return false;
}

void func_1323()
{
	func_472(&iLocal_74, 0);
	func_470(&iLocal_73, 0);
}

void func_1324(char[4] cParam0)
{
	func_1519(&(cParam0->f_7375));
}

void func_1325(char[4] cParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_151(cParam0, Global_35, func_396(Global_35), 0, 0, 0, 0);
		if (!is_entity_dead(&(uLocal_46[1])))
		{
			func_151(cParam0, &(uLocal_46[1]), "AbigailRoberts", 0, 0, 0, 0);
		}
		if (!is_entity_dead(iLocal_72))
		{
			func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			func_151(cParam0, &(uLocal_46[0]), "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_60[0])))
		{
			func_151(cParam0, &(iLocal_60[0]), "TomDickens", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[6])))
		{
			func_397(cParam0, &(iLocal_75[6]), "p_cs_bookHardCv08x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[0])))
		{
			func_397(cParam0, &(iLocal_75[0]), "p_cs_potatoSlice01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[1])))
		{
			func_397(cParam0, &(iLocal_75[1]), "p_knife01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[2])))
		{
			func_397(cParam0, &(iLocal_75[2]), "p_mugCoffee01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[3])))
		{
			func_397(cParam0, &(iLocal_75[3]), "p_pan01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[4])))
		{
			func_397(cParam0, &(iLocal_75[4]), "p_plate01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[5])))
		{
			func_397(cParam0, &(iLocal_75[5]), "p_spoonmid01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[7])))
		{
			func_397(cParam0, &(iLocal_75[7]), "p_boiler01x", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 1)
	{
		func_151(cParam0, Global_35, func_396(Global_35), 0, 0, 0, 0);
		if (!is_entity_dead(&(iLocal_50[0])))
		{
			func_151(cParam0, &(iLocal_50[0]), "G_M_M_UNICRIMINALS_01", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_58[0])))
		{
			func_151(cParam0, &(iLocal_58[0]), "U_M_M_STRFREIGHTSTATIONOWNER_01", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			func_151(cParam0, &(uLocal_46[0]), "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!is_entity_dead(iLocal_72))
		{
			func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[8])))
		{
			func_397(cParam0, &(iLocal_75[8]), "p_amb_clipboard_01", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[9])))
		{
			func_397(cParam0, &(iLocal_75[9]), "p_cs_ledger01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[10])))
		{
			func_397(cParam0, &(iLocal_75[10]), "p_letterBundle_01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[11])))
		{
			func_397(cParam0, &(iLocal_75[11]), "p_letterenvelope_cs01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[12])))
		{
			func_397(cParam0, &(iLocal_75[12]), "p_package08x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[13])))
		{
			func_397(cParam0, &(iLocal_75[13]), "p_package08x^1", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[14])))
		{
			func_397(cParam0, &(iLocal_75[14]), "p_pen01x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[15])))
		{
			func_397(cParam0, &(iLocal_75[15]), "p_crate03x", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(iLocal_75[16])))
		{
			func_397(cParam0, &(iLocal_75[16]), "p_cs_sacklarge01x", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 2)
	{
		func_151(cParam0, Global_35, func_396(Global_35), 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_72))
		{
			func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			func_151(cParam0, &(uLocal_46[0]), "JackMarston_Teen", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 3)
	{
		if (!bLocal_189 && bLocal_188)
		{
			_copy_memory(&(cParam0->f_7375), &uLocal_368, 890);
			bLocal_189 = true;
		}
		func_151(cParam0, Global_35, func_396(Global_35), 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_72))
		{
			func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			func_151(cParam0, &(uLocal_46[0]), "JackMarston_Teen", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_1389(66))
		{
			func_1829(cParam0, "2-MAR4_DONE");
		}
		else
		{
			func_1829(cParam0, "1-MAR4_NOT_DONE");
		}
		func_386(cParam0, 8388608);
		func_151(cParam0, Global_35, func_396(Global_35), 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_72))
		{
			func_397(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[0])))
		{
			func_151(cParam0, &(uLocal_46[0]), "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!is_entity_dead(&(uLocal_46[1])))
		{
			func_151(cParam0, &(uLocal_46[1]), func_396(&(uLocal_46[1])), 0, 0, 0, 0);
		}
	}
}

void func_1326(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		if (!does_blip_exist(iLocal_41))
		{
			iLocal_41 = _blip_add_for_coord(-89429847, func_1298(12, 1));
			_blip_set_modifier(iLocal_41, -981020806);
		}
	}
	switch (func_1310(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_41) && does_entity_exist(&(iLocal_58[0])))
			{
				iLocal_41 = func_1830(-89429847, &(iLocal_58[0]), 1);
				_blip_set_modifier(iLocal_41, -981020806);
				set_blip_name_from_text_file(iLocal_41, "MAR2_B_PO");
			}
			func_1799(cParam0, "MAR2_OBJ03", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if ((!_does_anim_scene_exist(&(uLocal_202[2])) || !_is_anim_scene_started(&(uLocal_202[2]), false)) || _is_anim_scene_finished(&(uLocal_202[2]), false))
			{
				func_225(&uLocal_218);
				func_464(&uLocal_215);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!is_ped_stopped(Global_35))
			{
				func_225(&uLocal_218);
			}
			else if (func_918(Global_35, &(uLocal_46[0]), 0, 1) < 10f && !is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
			{
				if (!func_26(&uLocal_215))
				{
					func_225(&uLocal_215);
				}
				if ((func_928(&uLocal_215) > 10f && is_ped_stopped(Global_35)) || func_928(&uLocal_215) > 20f)
				{
					if (func_1804(cParam0, "MAR2_STID", 0))
					{
						func_225(&uLocal_215);
					}
				}
			}
			else
			{
				func_225(&uLocal_215);
			}
			break;
		case 51:
			break;
	}
}

void func_1327(char[4] cParam0)
{
	if (iVar258 <= 1 && !func_466(38))
	{
		disable_all_control_actions(0);
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
		enable_control_action(0, -813019446, true);
		enable_control_action(0, -668070958, true);
		enable_control_action(0, 1250966545, true);
	}
	switch (iVar258)
	{
		case 0:
			set_ped_config_flag(Global_35, 446, true);
			func_225(&uLocal_221);
			func_941(&uLocal_261, 1);
			break;
		case 1:
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (_does_anim_scene_exist(&(uLocal_202[2])) && _is_anim_scene_started(&(uLocal_202[2]), false))
			{
				if (func_1831())
				{
					abort_anim_scene(&(uLocal_202[2]), false);
					func_225(&uLocal_221);
					func_941(&uLocal_261, 3);
				}
				else if (_is_anim_scene_finished(&(uLocal_202[2]), false) || _0xb89fcff19dafff28(&(uLocal_202[2]), func_396(Global_35)))
				{
					func_468(2);
					func_225(&uLocal_221);
					func_941(&uLocal_261, 3);
				}
				else if ((_is_anim_scene_started(&(uLocal_202[2]), false) && _get_anim_scene_time(&(uLocal_202[2])) >= 10.187f) && !func_466(38))
				{
					func_467(38, 1);
				}
			}
			if (func_928(&uLocal_221) >= 30f)
			{
				func_468(2);
				func_225(&uLocal_221);
				func_941(&uLocal_261, 3);
			}
			Jump @433; //curOff = 376
			if (func_1832(&uLocal_221) > 7.5f && !_is_ped_opening_a_door(Global_35))
			{
				set_ped_config_flag(Global_35, 446, false);
				func_941(&uLocal_261, 21);
			}
		}

void func_1328(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_46[iVar0])))
			{
				switch (&uLocal_262[iVar0])
				{
					case 0:
						if (!func_8(cParam0, 8))
						{
						}
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 1);
						break;
					case 1:
						if (!func_1347())
						{
							func_225(vLocal_224[iVar0]);
							func_1805(uLocal_262[iVar0], 8);
						}
						break;
					case 8:
						func_1288(3);
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 9);
						break;
					case 9:
						break;
					case 20:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1329(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(iLocal_50[iVar0])))
		{
			switch (&uLocal_265[iVar0])
			{
				case 0:
					func_225(vLocal_239[iVar0]);
					func_1833(uLocal_265[iVar0], 1);
					break;
				case 1:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1330(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!is_entity_dead(&(iLocal_58[iVar0])))
		{
			switch (&uLocal_276[iVar0])
			{
				case 0:
					func_225(vLocal_231[iVar0]);
					func_1834(uLocal_276[iVar0], 1);
					break;
				case 1:
					break;
				case 4:
					break;
			}
		}
		iVar0++;
	}
}

void func_1331(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_72))
	{
		switch (iVar277)
		{
			case 0:
				func_225(&uLocal_249);
				func_942(&uLocal_280, 1);
				break;
			case 1:
				if (!func_1347())
				{
					set_vehicle_is_considered_by_player(iLocal_72, false);
					func_225(&uLocal_249);
					func_942(&uLocal_280, 15);
				}
				break;
			case 15:
				break;
		}
	}
}

void func_1332()
{
	if (!func_466(37))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
		{
			func_514(1);
			func_1367();
			func_467(37, 1);
		}
	}
	else
	{
		func_1367();
		if (!is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
		{
			func_467(37, 0);
		}
	}
}

bool func_1333(char[4] cParam0)
{
	if (is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
	{
		disable_control_action(0, 130948705, false);
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		disable_control_action(0, -1377110900, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -640622144, false);
	}
	if (is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
	{
		set_all_random_peds_flee_this_frame(player_id());
	}
	switch (iVar1285)
	{
		case 0:
			if (func_1319())
			{
				func_1835(1);
			}
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_93[41]), false, 0))
			{
				set_anim_scene_bool(&(uLocal_202[9]), "b_breakout", true, false);
				func_1835(2);
			}
			break;
		case 2:
			if (_0x8d81e7824b7753f7(&(uLocal_202[9]), "s_look_up", 1))
			{
				set_anim_scene_bool(&(uLocal_202[9]), "b_breakout", false, false);
				func_1835(3);
			}
			break;
		case 3:
			func_1836(cParam0);
			if (func_1837())
			{
				set_anim_scene_bool(&(uLocal_202[9]), "b_breakout", true, false);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1835(4);
			}
			break;
		case 4:
			if ((!_does_anim_scene_exist(&(uLocal_202[9])) || !_is_anim_scene_started(&(uLocal_202[9]), false)) || _is_anim_scene_active(&(uLocal_202[9])))
			{
				_delete_anim_scene(&(uLocal_202[9]));
				_delete_anim_scene(&(uLocal_202[10]));
				func_1835(5);
			}
			break;
		case 5:
			break;
	}
	return iVar1285 == 5;
}

void func_1334(char[4] cParam0)
{
	Var0 = { func_1484(cParam0, func_35(cParam0)) };
	func_1838(cParam0, &Var0);
}

void func_1335()
{
	iLocal_348 = 0;
	func_467(28, 0);
	func_467(29, 0);
}

void func_1336()
{
	iLocal_349 = 0;
	func_464(&uLocal_350);
	func_464(&uLocal_353);
}

void func_1337()
{
	func_467(5, 1);
	if (!is_entity_dead(&(iLocal_75[10])))
	{
		if (is_entity_attached(&(iLocal_75[10])))
		{
			detach_entity(&(iLocal_75[10]), true, true);
		}
		delete_object(iLocal_75[10]);
	}
	if (!is_entity_dead(&(iLocal_75[12])))
	{
		if (is_entity_attached(&(iLocal_75[12])))
		{
			detach_entity(&(iLocal_75[12]), true, true);
		}
		delete_object(iLocal_75[12]);
	}
	if (!is_entity_dead(&(iLocal_75[13])))
	{
		if (is_entity_attached(&(iLocal_75[13])))
		{
			detach_entity(&(iLocal_75[13]), true, true);
		}
		delete_object(iLocal_75[13]);
	}
	if (!is_entity_dead(&(iLocal_75[15])))
	{
		if (is_entity_attached(&(iLocal_75[15])))
		{
			detach_entity(&(iLocal_75[15]), true, true);
		}
		delete_object(iLocal_75[15]);
	}
	if (!is_entity_dead(&(iLocal_75[16])))
	{
		if (is_entity_attached(&(iLocal_75[16])))
		{
			detach_entity(&(iLocal_75[16]), true, true);
		}
		delete_object(iLocal_75[16]);
	}
	func_1839(1);
}

void func_1338(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		func_1799(cParam0, "MAR2_OBJ05", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			func_1802(cParam0, "MAR2_OBJ05", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!_does_anim_scene_exist(&(uLocal_202[4])) || _is_anim_scene_finished(&(uLocal_202[4]), false))
			{
				if (func_1804(cParam0, "MAR2_OBJ08", 0))
				{
					func_225(&uLocal_218);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_928(&uLocal_218) >= 1f)
			{
				if (!func_1840(cParam0))
				{
					func_1799(cParam0, "MAR2_OBJ05", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1339()
{
	if (!func_832(&(uLocal_46[0]), 0))
	{
		return;
	}
	switch (&uLocal_262[0])
	{
		case 0:
			func_225(vLocal_224[0]);
			func_1805(uLocal_262[0], 8);
			break;
		case 8:
			_0xcf9da72002fc16bf(Global_35, iLocal_72, 35);
			_0xcf9da72002fc16bf(&(uLocal_46[0]), iLocal_72, 35);
			if (((!_does_anim_scene_exist(&(uLocal_202[4])) || !_is_anim_scene_started(&(uLocal_202[4]), false)) || _is_anim_scene_finished(&(uLocal_202[4]), false)) || has_anim_event_fired(&(uLocal_46[0]), -582892169))
			{
				if (has_vehicle_asset_loaded(822759307))
				{
					_0xe01f55b2896f6b37(iLocal_72, 1);
					_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 0);
					_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 1);
					set_blocking_of_non_temporary_events(&(uLocal_46[0]), true);
					open_sequence_task(&iLocal_40);
					_task_vehicle_drive_to_destination(0, iLocal_72, func_1298(12, 2), 3f, 69468672, 3, 5f, 5f, 0);
					close_sequence_task(iLocal_40);
					task_perform_sequence(&(uLocal_46[0]), iLocal_40);
					clear_sequence_task(&iLocal_40);
					func_225(vLocal_224[0]);
					func_1805(uLocal_262[0], 7);
				}
			}
			break;
		case 6:
			set_blocking_of_non_temporary_events(&(uLocal_46[0]), true);
			open_sequence_task(&iLocal_40);
			_task_vehicle_drive_to_destination(0, iLocal_72, func_1298(12, 2), 3f, 69468672, 3, 5f, 5f, 0);
			close_sequence_task(iLocal_40);
			task_perform_sequence(&(uLocal_46[0]), iLocal_40);
			clear_sequence_task(&iLocal_40);
			func_225(vLocal_224[0]);
			func_1805(uLocal_262[0], 7);
			break;
		case 7:
			if (!func_1347())
			{
				func_225(vLocal_224[0]);
				func_1805(uLocal_262[0], 18);
			}
			break;
		case 18:
			if (func_928(vLocal_224[0]) >= 0.5f)
			{
				if (get_ped_in_vehicle_seat(iLocal_72, 0) == &uLocal_46[0])
				{
					set_blocking_of_non_temporary_events(&(uLocal_46[0]), true);
					task_vehicle_temp_action(&(uLocal_46[0]), iLocal_72, 24, 5000);
				}
				func_225(vLocal_224[0]);
				func_1805(uLocal_262[0], 19);
			}
			break;
		case 19:
			if (func_1347())
			{
				func_225(vLocal_224[0]);
				func_1805(uLocal_262[0], 6);
			}
			break;
		case 20:
			break;
	}
}

void func_1340(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(iLocal_50[iVar0])))
		{
			switch (&uLocal_265[iVar0])
			{
				case 0:
					func_225(vLocal_239[iVar0]);
					func_1833(uLocal_265[iVar0], 4);
					break;
				case 4:
					set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
					open_sequence_task(&iLocal_40);
					if (!is_entity_dead(&(iLocal_54[iVar0])))
					{
						task_mount_animal(0, &(iLocal_54[iVar0]), 20000, -1, 1073741824, 1, 0, 0);
					}
					task_stand_still(0, -1);
					close_sequence_task(iLocal_40);
					task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
					clear_sequence_task(&iLocal_40);
					func_225(vLocal_239[iVar0]);
					func_1833(uLocal_265[iVar0], 5);
					break;
				case 5:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1341(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	if (func_1310(cParam0) >= 3)
	{
		func_1841(cParam0);
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		func_1799(cParam0, "MAR2_OBJ05", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			func_1802(cParam0, "MAR2_OBJ05", -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (((!func_1371("MAR2_OBJ08") && iVar266 >= 2) && func_1347()) && func_1804(cParam0, "MAR2_SPEED", 0))
			{
				func_467(4, 1);
				func_225(&uLocal_218);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1371("MAR2_SPEED"))
			{
				func_467(20, 1);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (is_entity_in_volume(Global_35, &(iLocal_93[27]), true, 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if ((!func_165() && !func_1803()) && func_1804(cParam0, "MAR2_GRAYAR", 0))
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			break;
	}
	if (iVar1331 == 2)
	{
		func_1348(iLocal_66);
	}
	else if (func_466(10))
	{
		func_1842(cParam0);
	}
}

void func_1342(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					if (!func_8(cParam0, 8))
					{
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 7);
					}
					else
					{
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 6);
					}
					break;
				case 6:
					set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
					_task_vehicle_drive_to_destination(&(uLocal_46[iVar0]), iLocal_72, func_1298(12, 4), 4.5f, 69468168, 3, 5f, 5f, 0);
					func_1843(1);
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 7);
					break;
				case 7:
					if (!func_1347())
					{
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 18);
					}
					break;
				case 18:
					if (func_928(vLocal_224[iVar0]) >= 0.5f)
					{
						if (get_ped_in_vehicle_seat(iLocal_72, 0) == &uLocal_46[iVar0])
						{
							set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
							task_vehicle_temp_action(&(uLocal_46[iVar0]), iLocal_72, 24, 5000);
						}
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 19);
					}
					break;
				case 19:
					if (func_1347())
					{
						func_225(vLocal_224[iVar0]);
						func_1805(uLocal_262[iVar0], 6);
					}
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1343(char[4] cParam0)
{
	if (!&iLocal_185[0])
	{
		if (is_entity_in_volume(iLocal_72, &(iLocal_93[26]), true, 0))
		{
			iLocal_185[0] = 1;
		}
	}
	else
	{
		if (!&uLocal_270[0] == 2)
		{
			func_1506(cParam0, 0);
		}
		else if (!&uLocal_270[1] == 2)
		{
			func_1507(cParam0, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!is_entity_dead(&(iLocal_50[iVar0])))
			{
				iVar1 = iVar0;
				switch (&uLocal_265[iVar0])
				{
					case 0:
						if (iVar1 == 0)
						{
							_0x9587913b9e772d29(&(iLocal_50[iVar0]), 0);
							_task_start_scenario_in_place(&(iLocal_50[iVar0]), 1626779076, 0, false, 0, -1f, false);
							set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), false);
						}
						else
						{
							set_ped_config_flag(&(iLocal_50[iVar0]), 167, true);
							set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
						}
						if (!is_entity_dead(&(iLocal_54[iVar0])))
						{
							set_blocking_of_non_temporary_events(&(iLocal_54[iVar0]), false);
							clear_ped_tasks(&(iLocal_54[iVar0]), 1, 0);
						}
						func_1833(uLocal_265[iVar0], 1);
						break;
					case 1:
						if (iVar1 == 0)
						{
							if (is_entity_in_volume(Global_35, &(iLocal_93[27]), true, 0))
							{
								func_1844();
								func_467(10, 1);
								clear_ped_tasks(&(iLocal_50[iVar0]), 1, 0);
								func_225(vLocal_239[iVar0]);
								func_1833(uLocal_265[iVar0], 6);
							}
						}
						break;
					case 6:
						if (iVar1 == 0)
						{
							if (func_1832(vLocal_239[iVar0]) > 4f)
							{
								set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
								open_sequence_task(&iLocal_40);
								task_mount_animal(0, &(iLocal_54[iVar0]), 20000, -1, 1073741824, 1, 0, 0);
								task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush", 0f, -30f, 0, 1544, -1, 0);
								task_stand_still(0, -1);
								close_sequence_task(iLocal_40);
								task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
								clear_sequence_task(&iLocal_40);
								func_225(vLocal_239[iVar0]);
								func_1833(uLocal_265[iVar0], 5);
							}
						}
						else
						{
							clear_ped_tasks(&(iLocal_50[iVar0]), 1, 0);
							set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
							open_sequence_task(&iLocal_40);
							if (iVar1 == 1)
							{
								task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush2", 0.5f, -30f, 0, 1544, -1, 0);
							}
							else if (iVar1 == 2)
							{
								task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush2", -0.5f, -30f, 0, 1544, -1, 0);
							}
							task_stand_still(0, -1);
							close_sequence_task(iLocal_40);
							task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
							clear_sequence_task(&iLocal_40);
							func_225(vLocal_239[iVar0]);
							func_1833(uLocal_265[iVar0], 5);
						}
						break;
					case 5:
						func_1845();
						if (func_928(vLocal_239[iVar0]) > 2f)
						{
							func_225(vLocal_239[iVar0]);
							func_168();
							func_1833(uLocal_265[iVar0], 7);
						}
						break;
					case 7:
						set_ped_reset_flag(&(iLocal_50[iVar0]), 3, true);
						if (iVar1 == 0 && is_ped_on_mount(&(iLocal_50[iVar0])))
						{
							func_1846(&(iLocal_50[iVar0]), 1.75f);
						}
						if (func_928(vLocal_239[iVar0]) >= 10f)
						{
							if (iVar1 == 0)
							{
								set_ped_waypoint_route_offset(&(iLocal_50[iVar0]), 0f, -50f, 0f);
							}
							func_225(vLocal_239[iVar0]);
							func_1833(uLocal_265[iVar0], 9);
						}
						break;
					case 9:
						if (iVar1 == 0 && is_ped_on_mount(&(iLocal_50[iVar0])))
						{
							func_1846(&(iLocal_50[iVar0]), 1.75f);
						}
						set_ped_reset_flag(&(iLocal_50[iVar0]), 3, true);
						break;
					case 22:
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_1344()
{
	if (is_entity_dead(iLocal_65) && iVar267 > 0)
	{
		return;
	}
	switch (iVar267)
	{
		case 0:
			if (func_1847())
			{
				func_1806(iLocal_65, 1802462470, 0, 0, 0, -1082130432);
				func_1848(1);
			}
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_93[43]), true, 0))
			{
				_0xf1c03a5352243a30(iLocal_65);
				func_1848(2);
			}
			break;
		case 2:
			if (!func_1347() && func_918(Global_35, iLocal_65, 1, 1) < 5f)
			{
				func_225(&uLocal_1343);
				func_1848(3);
			}
			else if (func_1347() && !is_entity_in_volume(Global_35, &(iLocal_93[43]), true, 0))
			{
				func_1806(iLocal_65, 1802462470, 0, 1, 0, -1082130432);
				task_clear_look_at(iLocal_65);
				func_1848(5);
			}
			else if (!func_1849(iLocal_65, -875674219) && !func_1850(iLocal_65, Global_35, 60f))
			{
				task_turn_ped_to_face_entity(iLocal_65, Global_35, 0, -1082130432, -1082130432, -1082130432);
				task_look_at_entity(iLocal_65, Global_35, -1, 0, 51, 0);
			}
			break;
		case 3:
			if (!func_1849(iLocal_65, -875674219) && !func_1850(iLocal_65, Global_35, 60f))
			{
				task_turn_ped_to_face_entity(iLocal_65, Global_35, 0, -1082130432, -1082130432, -1082130432);
				task_look_at_entity(iLocal_65, Global_35, -1, 0, 51, 0);
			}
			if (func_918(Global_35, iLocal_65, 1, 1) > 5f)
			{
				func_1848(2);
			}
			else if (func_928(&uLocal_1343) > 8f)
			{
				task_combat_ped(iLocal_65, Global_35, 0, 0);
				func_467(33, 1);
				func_1848(4);
			}
			break;
		case 4:
			break;
		case 5:
			if (!func_1347() && func_918(Global_35, iLocal_65, 1, 1) < 10f)
			{
				func_1848(2);
			}
			break;
	}
}

void func_1345()
{
	switch (iVar1332)
	{
		case 0:
			if (func_1851())
			{
				_task_start_scenario_in_place(iLocal_66, 1802462470, 0, false, 0, -1f, false);
				func_1852(1);
			}
			break;
		case 1:
			if (!func_1347() && func_918(Global_35, iLocal_66, 1, 1) < 6f)
			{
				func_225(&uLocal_1346);
				func_1852(3);
			}
			else if (is_entity_in_volume(Global_35, &(iLocal_93[44]), true, 0))
			{
				func_1852(2);
			}
			break;
		case 2:
			if (!func_1347() && func_918(Global_35, iLocal_66, 1, 1) < 6f)
			{
				func_225(&uLocal_1346);
				func_1852(3);
			}
			else if (!is_entity_in_volume(Global_35, &(iLocal_93[44]), true, 0))
			{
				func_1852(5);
			}
			break;
		case 3:
			if (!func_1849(iLocal_66, -875674219) && !func_1850(iLocal_66, Global_35, 60f))
			{
				task_turn_ped_to_face_entity(iLocal_66, Global_35, 0, -1082130432, -1082130432, -1082130432);
				task_look_at_entity(iLocal_66, Global_35, -1, 0, 51, 0);
			}
			if (func_1347() || func_918(Global_35, iLocal_66, 1, 1) > 10f)
			{
				_task_start_scenario_in_place(iLocal_66, 1802462470, 0, false, 0, -1f, false);
				task_clear_look_at(iLocal_66);
				func_1852(1);
			}
			else if (func_928(&uLocal_1346) > 8f)
			{
				task_combat_ped(iLocal_66, Global_35, 0, 0);
				func_467(33, 1);
				func_1852(4);
			}
			break;
		case 4:
			break;
		case 5:
			if (!func_1347() && func_918(Global_35, iLocal_66, 1, 1) < 6f)
			{
				func_225(&uLocal_1346);
				func_1852(3);
			}
			break;
	}
}

void func_1346()
{
	switch (iVar1333)
	{
		case 0:
			if (func_1853())
			{
				func_1854(1);
			}
			break;
		case 1:
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (func_918(Global_35, iLocal_67, 1, 1) < 6f && !is_ped_in_any_vehicle(Global_35, false))
			{
				func_1854(5);
			}
			else if (is_entity_in_volume(Global_35, &(iLocal_93[44]), false, 0))
			{
				task_follow_waypoint_recording(iLocal_67, "mar2_dog", 0, 0, -1, 0, 0, -1);
				func_1854(2);
			}
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(iLocal_67, 0) && is_entity_in_volume(Global_35, &(iLocal_93[46]), false, 0))
			{
				waypoint_playback_override_speed(iLocal_67, 1.75f, 0, -1082130432, 0);
			}
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (func_918(Global_35, iLocal_67, 1, 1) < 6f && !is_ped_in_any_vehicle(Global_35, false))
			{
				func_1854(5);
			}
			else if (func_1386(iLocal_67, -1721.053f, -73.9059f, 177.2001f, 0) < 2f)
			{
				task_bark(iLocal_67, Global_35, 137506481);
				func_1854(3);
			}
			break;
		case 3:
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (func_918(Global_35, iLocal_67, 1, 1) < 6f && !is_ped_in_any_vehicle(Global_35, false))
			{
				func_1854(5);
			}
			else if (func_918(Global_35, iLocal_67, 1, 1) > 25f)
			{
				task_start_scenario_at_position(iLocal_67, 825624686, -1721.213f, -90.95f, 180.178f, 222.7613f, 0, true, false, 0, -1f, false);
				func_1854(4);
			}
			break;
		case 4:
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (func_918(Global_35, iLocal_67, 1, 1) < 6f && !is_ped_in_any_vehicle(Global_35, false))
			{
				func_1854(5);
			}
			break;
		case 5:
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			else
			{
				task_combat_ped(iLocal_67, Global_35, 0, 0);
				func_467(33, 1);
				func_1854(6);
			}
			break;
		case 6:
			if (!func_832(iLocal_67, 0))
			{
				func_1854(7);
			}
			break;
		case 7:
			break;
	}
}

bool func_1347()
{
	return iVar346 == 1;
}

void func_1348(int iParam0)
{
	if (iLocal_68 == iParam0)
	{
		return;
	}
	if (!does_entity_exist(iLocal_68))
	{
		return;
	}
	task_look_at_entity(Global_35, iParam0, -1, 0, 51, 0);
	iLocal_68 = iParam0;
	vLocal_69 = { func_1855() };
}

void func_1349()
{
	func_1856(0);
	func_11(&iLocal_1338, 1, 1);
	func_11(&iLocal_1339, 1, 1);
	func_1857(&(uLocal_46[0]), 0, 1, 0);
}

void func_1350(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0))
			{
				_set_ped_on_mount(iParam0, iParam1, -1, true);
			}
		}
	}
}

void func_1351(char[4] cParam0)
{
	func_1858(&(cParam0->f_7375));
}

void func_1352(char[4] cParam0)
{
	switch (func_1310(cParam0))
	{
		case 0:
			func_1802(cParam0, "MAR2_OBJ05", -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_165() && !func_1803())
			{
				if (func_1804(cParam0, "MAR2_TENS", 0))
				{
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1386(Global_35, -1742.192f, 67.0588f, 155.6108f, 0) < 5f)
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if ((!func_165() && !func_1803()) && func_1804(cParam0, "MAR2_TEBR", 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_1386(Global_35, -1768.633f, 114.4927f, 157.4738f, 0) < 5f)
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if ((!func_165() && !func_1803()) && func_1804(cParam0, "MAR2_MEN", 0))
			{
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if ((!func_1371("MAR2_MEN") && _is_anim_scene_finished(&(uLocal_202[5]), false)) && func_1804(cParam0, "MAR2_INSTRUCT", 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if ((!func_1371("MAR2_INSTRUCT") && func_1386(Global_35, -1758.078f, 303.6625f, 111.0051f, 0) < 10f) && func_1804(cParam0, "MAR2_MEN_STOP", 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
	if (!func_466(11))
	{
		func_1842(cParam0);
	}
	else
	{
		func_1859();
	}
}

void func_1353(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					func_467(6, 1);
					func_467(8, 1);
					set_player_control(get_player_index(), false, 256, false);
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 9);
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1354(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(iLocal_50[iVar0])))
		{
			iVar1 = iVar0;
			switch (&uLocal_265[iVar0])
			{
				case 0:
					if (iVar1 == 1)
					{
						if (has_anim_dict_loaded("script_respawn@horse@mounted_unarmed"))
						{
							set_ped_current_weapon_visible(&(iLocal_50[iVar0]), false, false, true, false);
							task_play_anim(&(iLocal_50[iVar0]), "script_respawn@horse@mounted_unarmed", "arthur_saddle_lean_fwd_looking_idle", 1000f, -1.2f, -1, 5, 0f, false, 0, false, 0, false);
							func_225(vLocal_239[iVar0]);
							func_1833(uLocal_265[iVar0], 1);
						}
					}
					else if (iVar1 == 2)
					{
						func_225(vLocal_239[iVar0]);
						func_1833(uLocal_265[iVar0], 1);
					}
					break;
				case 1:
					if (iVar1 == 0)
					{
						func_225(vLocal_239[iVar0]);
						func_1833(uLocal_265[iVar0], 9);
					}
					else if (is_entity_in_volume(Global_35, &(iLocal_93[29]), true, 0))
					{
						func_467(11, 1);
						func_225(vLocal_239[iVar0]);
						func_1833(uLocal_265[iVar0], 6);
					}
					break;
				case 6:
					if (func_928(vLocal_239[iVar0]) > 1f)
					{
						if (!is_entity_dead(&(iLocal_54[iVar0])))
						{
							set_blocking_of_non_temporary_events(&(iLocal_54[iVar0]), false);
							clear_ped_tasks(&(iLocal_54[iVar0]), 1, 0);
						}
						clear_ped_tasks(&(iLocal_50[iVar0]), 1, 0);
						set_blocking_of_non_temporary_events(&(iLocal_50[iVar0]), true);
						open_sequence_task(&iLocal_40);
						if (iVar1 == 0)
						{
							task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush", 0f, -40f, 0, 1544, -1, 0);
						}
						else if (iVar1 == 1)
						{
							task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush2", 0.25f, -22f, 0, 1544, -1, 0);
						}
						else if (iVar1 == 2)
						{
							task_follow_entity_along_waypoint_recording_at_offset(0, iLocal_72, "mar2_ride_ambush2", -0.25f, -22f, 0, 1544, -1, 0);
						}
						task_stand_still(0, -1);
						close_sequence_task(iLocal_40);
						task_perform_sequence(&(iLocal_50[iVar0]), iLocal_40);
						clear_sequence_task(&iLocal_40);
						task_look_at_entity(&(iLocal_50[iVar0]), Global_35, -1, 0, 51, 0);
						func_225(vLocal_239[iVar0]);
						func_1833(uLocal_265[iVar0], 7);
					}
					break;
				case 7:
					if (func_928(vLocal_239[iVar0]) >= 5f)
					{
						if (iVar1 == 0)
						{
							set_ped_waypoint_route_offset(&(iLocal_50[iVar0]), 0f, -40f, 0f);
						}
						else if (iVar1 == 1)
						{
							set_ped_waypoint_route_offset(&(iLocal_50[iVar0]), 0.25f, -25f, 0f);
						}
						else if (iVar1 == 2)
						{
							set_ped_waypoint_route_offset(&(iLocal_50[iVar0]), -0.25f, -29f, 0f);
						}
						if (iVar1 == 1)
						{
							set_ped_current_weapon_visible(&(iLocal_50[iVar0]), true, true, true, false);
						}
						func_225(vLocal_239[iVar0]);
						func_1833(uLocal_265[iVar0], 9);
					}
					break;
				case 9:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1355(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_919(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1356(char[4] cParam0)
{
	iVar0 = iVar1346;
	func_1860();
	switch (iVar1346)
	{
		case 0:
			if (!_is_anim_scene_loading(&(uLocal_202[7]), true) && !_is_anim_scene_loaded(&(uLocal_202[7]), true, false))
			{
				load_anim_scene(&(uLocal_202[7]));
			}
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(0));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(1));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(2));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(3));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(4));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(5));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(6));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(7));
			_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(8));
			func_1861(1);
			break;
		case 1:
			if (((((((((_is_anim_scene_loaded(&(uLocal_202[7]), true, false) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(0))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(1))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(2))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(3))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(4))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(5))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(6))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(7))) && _0x23e33cb9f4a3f547(&(uLocal_202[7]), func_428(8)))
			{
				func_1861(2);
			}
			break;
		case 2:
			if (!func_466(34))
			{
				if (!func_984(cParam0) || _is_anim_scene_active(cParam0->f_7375.f_804))
				{
					set_anim_scene_entity(&(uLocal_202[7]), "JOHN", Global_35, 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Posse1", &(iLocal_50[1]), 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Posse2", &(iLocal_50[2]), 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Posse_Leader", &(iLocal_50[0]), 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Horse_01", &(iLocal_54[0]), 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Horse_02", &(iLocal_54[1]), 0);
					set_anim_scene_entity(&(uLocal_202[7]), "Horse_03", &(iLocal_54[2]), 0);
					disable_all_control_actions(0);
					enable_control_action(0, -668070958, true);
					enable_control_action(0, 1250966545, true);
					func_145(cParam0, &(iLocal_50[0]), "MAR2_POSSE_LEADER", 0);
					func_1861(3);
				}
			}
			break;
		case 3:
			if (!func_466(35))
			{
				disable_all_control_actions(0);
				enable_control_action(0, -668070958, true);
				enable_control_action(0, 1250966545, true);
				if (has_anim_event_fired(Global_35, -130327132))
				{
					func_1862(1);
					func_467(35, 1);
				}
			}
			else if (func_1863())
			{
				func_1862(0);
				func_467(39, 1);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_467(40, 1);
			}
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(0)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1862(1);
				func_1861(4);
			}
			break;
		case 4:
			if (func_1863() || func_466(39))
			{
				func_1862(0);
				func_467(39, 0);
				func_1861(5);
			}
			else if (func_1864() || func_466(40))
			{
				func_1862(0);
				func_467(40, 0);
				func_1861(6);
			}
			break;
		case 5:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(1)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1861(7);
			}
			break;
		case 6:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(2)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1861(11);
			}
			break;
		case 7:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(3)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1862(1);
				func_1861(8);
			}
			break;
		case 8:
			if (func_1863())
			{
				func_1862(0);
				func_1861(9);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(10);
			}
			break;
		case 9:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(4)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1861(15);
			}
			break;
		case 10:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(5)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1861(15);
			}
			break;
		case 11:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(6)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1862(1);
				func_1861(12);
			}
			break;
		case 12:
			if (func_1863())
			{
				func_1862(0);
				func_1861(13);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(14);
			}
			break;
		case 13:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(7)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_JUST_A_FARMER_LOOP", 1))
			{
				func_1861(19);
			}
			break;
		case 14:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(8)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_I_KILLED_MARSTON_LOOP", 1))
			{
				func_1861(20);
			}
			break;
		case 15:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(9)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1862(1);
				func_1861(16);
			}
			break;
		case 16:
			if (func_1863())
			{
				func_1862(0);
				func_1861(17);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(18);
			}
			break;
		case 17:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(10)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1861(21);
			}
			break;
		case 18:
			if (_0x1f0e401031e20146(&(uLocal_202[7]), func_428(11)) && _0x8d81e7824b7753f7(&(uLocal_202[7]), "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1861(21);
			}
			break;
		case 19:
		case 20:
		case 21:
			if (!_is_anim_scene_started(&(uLocal_202[7]), false))
			{
				_delete_anim_scene(&(uLocal_202[7]));
				func_1865(&Local_1381, 1, 1, 1, 0);
				func_1861(22);
			}
			break;
		case 22:
			break;
	}
	if (iVar0 != iVar1346)
	{
		switch (iVar1346)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(0), true);
				start_anim_scene(&(uLocal_202[7]));
				break;
			case 4:
				break;
			case 5:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(1), true);
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(6));
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(7));
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(8));
				break;
			case 6:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(2), true);
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(3));
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(4));
				_0xae6ada8fe7e84acc(&(uLocal_202[7]), func_428(5));
				break;
			case 7:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(3), true);
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(9));
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(10));
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(11));
				break;
			case 8:
				break;
			case 9:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(4), true);
				break;
			case 10:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(5), true);
				break;
			case 11:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(6), true);
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(12));
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(13));
				break;
			case 12:
				break;
			case 13:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(7), true);
				break;
			case 14:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(8), true);
				break;
			case 15:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(9), true);
				_0xdf7b5144e25cd3fe(&(uLocal_202[7]), func_428(14));
				break;
			case 16:
				break;
			case 17:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(10), true);
				break;
			case 18:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(11), true);
				break;
			case 19:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(12), true);
				break;
			case 20:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(13), true);
				break;
			case 21:
				_set_anim_scene_playback_list_bool(&(uLocal_202[7]), func_428(14), true);
				break;
			case 22:
				break;
		}
	}
}

bool func_1357()
{
	return iVar1347 > 2;
}

bool func_1358()
{
	return iVar1347 == 2;
}

void func_1359(bool bParam0)
{
	func_467(15, bParam0);
}

void func_1360(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 35f, 60f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		if (!func_1866())
		{
			func_1867();
		}
	}
	switch (func_1310(cParam0))
	{
		case 0:
			func_1867();
			func_1802(cParam0, "MAR2_OBJ06a", -1082130432, 0, 0, -1, -1, 0);
			func_464(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1362())
			{
				func_462(&iLocal_41);
				func_1802(cParam0, "MAR2_OBJ06b", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_918(Global_35, &(uLocal_46[0]), 0, 1) < 4f)
			{
				if (!func_26(&uLocal_218) || (func_928(&uLocal_218) > 6f && func_1804(cParam0, "MAR2_JACK_FIGHT", 0)))
				{
					func_225(&uLocal_218);
				}
			}
			else
			{
				func_464(&uLocal_218);
			}
			break;
		case 51:
			break;
	}
}

void func_1361()
{
	iVar0 = iVar1348;
	func_1868();
	switch (iVar1348)
	{
		case 0:
			if (iVar1347 > 2)
			{
				iLocal_1351 = add_cover_point(-1752.99f, 307.9f, 110.43f, 353.6933f, 1, 2, 5, false);
				iLocal_1352 = add_cover_point(-1761.8f, 311.57f, 110.6f, 345.601f, 0, 2, 4, false);
				func_1869(1);
			}
			break;
		case 1:
			if (iVar1347 >= 4 && func_1870())
			{
				func_1869(2);
			}
			else if (func_1871() && !is_ped_still(Global_35))
			{
				func_1869(2);
			}
			else if (iVar1347 >= 4 && func_1872())
			{
				func_1869(2);
			}
			else if (func_1873())
			{
				func_1869(2);
			}
			else if (func_1874())
			{
				func_1869(3);
			}
			break;
		case 2:
			func_1865(&Local_1381, 1, 1, 1, 0);
			func_467(13, 1);
			func_1861(22);
			func_1869(4);
			break;
		case 3:
			set_current_ped_weapon(Global_35, -183018591, false, 0, false, false);
			set_player_forced_aim(player_id(), true, 0, -1, false);
			func_467(12, 1);
			func_225(&uLocal_1353);
			func_1861(22);
			func_1869(4);
			break;
		case 4:
			if (func_466(12) && func_226(&uLocal_1353) > 1000)
			{
				set_player_forced_aim(player_id(), false, 0, -1, false);
				func_467(12, 0);
			}
			if (func_1875())
			{
				func_1869(5);
			}
			break;
		case 5:
			break;
	}
	if (iVar0 == iVar1348)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar2 = iVar1;
			if (!func_832(&(iLocal_50[iVar2]), 0) || _is_ped_hogtied(&(iLocal_50[iVar2])))
			{
				if (does_blip_exist(&(uLocal_42[iVar2])))
				{
					remove_blip(uLocal_42[iVar2]);
				}
			}
			else
			{
				switch (&uLocal_265[iVar2])
				{
					case 0:
						set_blocking_of_non_temporary_events(&(iLocal_54[iVar2]), false);
						set_ped_relationship_group_hash(&(iLocal_50[iVar2]), 1269650476);
						_0x140b3cb1d424a945(&(iLocal_50[iVar2]), -1);
						if (!is_entity_dead(&(iLocal_54[iVar2])))
						{
							if (!get_ped_config_flag(&(iLocal_54[iVar2]), 145, true))
							{
								set_ped_config_flag(&(iLocal_54[iVar2]), 145, true);
							}
						}
						if (iVar2 == 0)
						{
							set_current_ped_weapon(&(iLocal_50[iVar2]), 379542007, true, 0, false, false);
						}
						func_1833(uLocal_265[iVar2], 1);
						break;
					case 1:
						if (iVar1348 == 4)
						{
							if (func_466(13))
							{
								if (iVar2 == 0)
								{
									func_1876(&(iLocal_50[iVar2]), "CALLOUT_JUST_KILL_EM_MALE", -69597692, 0, 1, 0, 0, 1);
								}
								func_225(vLocal_239[iVar1]);
								func_1833(uLocal_265[iVar2], 21);
							}
							else
							{
								if (iVar2 == 0)
								{
									force_ped_motion_state(&(iLocal_50[iVar2]), 1063765679, false, 0, false);
									_0x4c57f27d1554e6b0(&(iLocal_50[iVar2]), get_entity_coords(Global_35, true, false) + Vector(0f, 0.7f, 0.5f), 1, -1082130432, 0, -1082130432);
								}
								func_1833(uLocal_265[iVar2], 14);
							}
						}
						break;
					case 21:
						if (iVar2 == 0 && func_928(vLocal_239[iVar1]) > 0.5f)
						{
							func_1833(uLocal_265[iVar2], 14);
						}
						else if (iVar2 == 1 && func_928(vLocal_239[iVar1]) > 1.7f)
						{
							func_1833(uLocal_265[iVar2], 14);
						}
						else if (iVar2 == 2 && func_928(vLocal_239[iVar1]) > 1f)
						{
							func_1833(uLocal_265[iVar2], 14);
						}
						break;
					case 14:
						func_1877(&(iLocal_50[iVar2]), uLocal_42[iVar2], 1);
						if (iVar2 == 1)
						{
							if (_does_anim_scene_exist(&(uLocal_202[7])))
							{
								abort_anim_scene(&(uLocal_202[7]), false);
							}
						}
						clear_ped_tasks(&(iLocal_50[iVar2]), 1, 0);
						set_blocking_of_non_temporary_events(&(iLocal_50[iVar2]), false);
						switch (iVar2)
						{
							case 0:
								set_ped_sphere_defensive_area(&(iLocal_50[iVar2]), -1763.055f, 307.9278f, 110.8571f, 1f, 1, 0, 0);
								set_ped_combat_attributes(&(iLocal_50[iVar2]), 11, true);
								break;
							case 1:
								task_put_ped_directly_into_cover(&(iLocal_50[iVar2]), get_entity_coords(&(iLocal_50[iVar2]), true, false), -1, 0, 0.7f, 0, 0, 0, 0, 0, 0);
								_0x2208438012482a1a(&(iLocal_50[iVar2]), false, false);
								set_ped_sphere_defensive_area(&(iLocal_50[iVar2]), -1753.113f, 307.9674f, 110.4421f, 1f, 0, 0, 0);
								break;
							case 2:
								task_put_ped_directly_into_cover(&(iLocal_50[iVar2]), get_entity_coords(&(iLocal_50[iVar2]), true, false), -1, 0, 0.7f, 1, 0, 0, 0, 0, 0);
								_0x2208438012482a1a(&(iLocal_50[iVar2]), false, false);
								set_ped_sphere_defensive_area(&(iLocal_50[iVar2]), -1762.106f, 311.7783f, 110.649f, 1f, 0, 0, 0);
								break;
						}
						task_combat_hated_targets_in_area(&(iLocal_50[iVar2]), func_1298(13, 0), 110f, 0, 0);
						_0x1a7a802b2301edc0(&(iLocal_50[iVar2]));
						func_225(vLocal_239[iVar1]);
						func_1833(uLocal_265[iVar2], 15);
						break;
					case 15:
						if (func_928(vLocal_239[iVar1]) > 2f)
						{
							if (iVar2 == 1)
							{
								set_ped_sphere_defensive_area(&(iLocal_50[iVar2]), -1746.459f, 301.7033f, 109.6825f, 1f, 1, 0, 0);
							}
							func_225(vLocal_239[iVar1]);
							func_1833(uLocal_265[iVar2], 17);
						}
						break;
					case 17:
						if (func_928(vLocal_239[iVar1]) > 15f)
						{
							set_ped_combat_attributes(&(iLocal_50[iVar2]), 50, true);
							set_ped_combat_attributes(&(iLocal_50[iVar2]), 71, true);
							func_1833(uLocal_265[iVar2], 22);
						}
						break;
					case 22:
						break;
				}
			}
			iVar1++;
		}
	}
	else
	{
		func_1361();
	}
}

bool func_1362()
{
	return iVar1347 == 22;
}

bool func_1363()
{
	return iVar1348 == 5;
}

void func_1364(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 35f, 60f, 0, 0, 0, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
	}
	switch (func_1310(cParam0))
	{
		case 0:
			func_1878(cParam0, &(uLocal_46[0]), 1105014447, 422991367, 1, 1);
			func_1802(cParam0, "MAR2_OBJ04", -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_928(&uLocal_218) >= 1f)
			{
				if (!func_1840(cParam0))
				{
					func_1799(cParam0, "MAR2_OBJ04", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_914(Global_35, &(uLocal_46[0]), 45f, 1) && !func_914(Global_35, &(uLocal_46[0]), 3f, 1))
			{
				func_1879();
			}
			func_225(&uLocal_218);
			func_135(cParam0, 3);
			break;
		case 3:
			if (func_1880())
			{
				func_225(&uLocal_218);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_928(&uLocal_218) >= 1f)
			{
				func_1799(cParam0, "MAR2_OBJ04", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_225(&uLocal_218);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_218())
			{
				func_225(&uLocal_218);
				func_135(cParam0, 51);
			}
			break;
		case 10:
			if (!func_218())
			{
				if (!func_1803())
				{
					if (func_914(Global_35, &(uLocal_46[0]), 45f, 1))
					{
						func_1804(cParam0, "MAR2_OBJ07b", 0);
					}
					func_225(&uLocal_218);
					func_135(cParam0, 11);
				}
			}
			break;
		case 11:
			if (!func_1803())
			{
				func_225(&uLocal_218);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1365(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					if (!func_8(cParam0, 8))
					{
					}
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 9);
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1366()
{
	if (!func_26(&uLocal_1420))
	{
		func_225(&uLocal_1420);
	}
	else if (func_928(&uLocal_1420) > 2f && func_1142(Global_35, 0, 1, 0) != -1569615261)
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
		task_swap_weapon(Global_35, 0, 1, 0, 0);
		func_225(&uLocal_1420);
	}
}

void func_1367()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

bool func_1368(char[4] cParam0, bool bParam1)
{
	func_923(cParam0);
	if (((bParam1 && func_1881(&(cParam0->f_10792)) != 11) && !func_1487(&(cParam0->f_10792), 131072)) && !func_1487(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1882(&(cParam0->f_10792));
}

void func_1369()
{
	func_467(43, 1);
}

void func_1370(char[4] cParam0, int iParam1)
{
	Var0 = { func_1523(&(cParam0->f_7375)) };
	if ((((func_1487(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1883(cParam0, &Var0);
		func_1334(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_120(cParam0, 16384))
		{
			func_1884(&(cParam0->f_10792), Global_43805);
			func_762(&(cParam0->f_10792), 8);
		}
		func_246(&(cParam0->f_10792), iParam1);
		func_923(cParam0);
		func_99(cParam0, 2097152);
	}
}

bool func_1371(char* sParam0)
{
	return func_1885(sParam0);
}

void func_1372(char* sParam0, bool bParam1, bool bParam2)
{
	func_1886(sParam0, bParam1, bParam2);
}

void func_1373()
{
	_0x7d654266025e921b(-1392528840);
}

void func_1374(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_462(&iLocal_41);
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		iLocal_41 = func_1299(408396114, func_1298(12, 5), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
		func_1799(cParam0, "MAR2_OBJ08", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_41))
			{
				iLocal_41 = func_1299(408396114, func_1298(12, 5), 1);
				_blip_set_modifier(iLocal_41, -1878373110);
				set_gps_flags(512, 0f);
				func_1801("mar2_ride_after_ambush", 0, 76603059);
			}
			func_1799(cParam0, "MAR2_OBJ08", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_225(&uLocal_218);
			func_135(cParam0, 1);
			break;
		case 1:
			if (((func_914(Global_35, &(uLocal_46[0]), 45f, 1) && func_1347()) && (is_point_on_road(get_entity_coords(iLocal_72, true, false), iLocal_72) || func_1832(&uLocal_218) > 8f)) && func_1804(cParam0, "MAR2_HERA", 0))
			{
				func_225(&uLocal_218);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1371("MAR2_HERA"))
			{
				func_467(4, 1);
				func_464(&uLocal_218);
				func_1887();
				func_135(cParam0, 3);
			}
			else if (func_1888("MAR2_HERA"))
			{
				if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 3:
			if (bVar1421 && func_1347())
			{
				func_135(cParam0, 4);
			}
			if ((func_1310(cParam0) == 3 && func_1889()) && func_1804(cParam0, "MAR2_CRY", 0))
			{
				func_1887();
			}
			break;
		case 4:
			if (!func_1371("MAR2_CRY") && func_1347())
			{
				if (bVar1420 && func_1804(cParam0, "MAR2_JACK_P", 0))
				{
					func_135(cParam0, 5);
				}
				else if (!bVar1420 && func_1804(cParam0, "MAR2_JACK_N", 0))
				{
					func_135(cParam0, 5);
				}
			}
			break;
		case 5:
			if (!func_1371("MAR2_JACK_P") && !func_1371("MAR2_JACK_N"))
			{
				if (((func_1347() && func_1382(&uLocal_218, 2f)) && func_1386(Global_35, -2583.164f, 455.9866f, 144.9381f, 0) < 630f) && func_1804(cParam0, "MAR2_HERA2", 0))
				{
					func_135(cParam0, 6);
				}
				else if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			else if (func_1888("MAR2_JACK_P") || func_1888("MAR2_JACK_N"))
			{
				if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 6:
			if (!func_1371("MAR2_HERA2"))
			{
				func_1887();
				func_135(cParam0, 51);
			}
			else if (func_1888("MAR2_HERA2"))
			{
				if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 51:
			if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
			{
				func_1887();
			}
			break;
	}
}

void func_1375(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					if (!func_8(cParam0, 8))
					{
					}
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 1);
					break;
				case 1:
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 20);
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1376(char[4] cParam0)
{
	switch (iVar1425)
	{
		case 0:
			if (func_984(cParam0))
			{
				set_player_control(player_id(), false, 256, false);
				func_1890(1);
			}
			break;
		case 1:
			if (((!_does_anim_scene_exist(cParam0->f_7375.f_804) || !_is_anim_scene_started(cParam0->f_7375.f_804, false)) || _is_anim_scene_active(cParam0->f_7375.f_804)) || _0x005e6f28dd7ed58d(cParam0->f_7375.f_804, "JOHN"))
			{
				task_vehicle_goto_navmesh(Global_35, iLocal_72, -1745.096f, 328.5099f, 110.404f, 7.5f, 0, 5f);
				func_225(&uLocal_1425);
				func_1890(2);
			}
			break;
		case 2:
			if (func_928(&uLocal_1425) > 6f || (func_928(&uLocal_1425) > 3f && is_disabled_control_pressed(0, 1537201378)))
			{
				clear_ped_tasks(Global_35, 1, 0);
				set_player_control(player_id(), true, 0, false);
				func_1890(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1377()
{
	func_1891(0);
	func_11(&iLocal_1429, 1, 1);
	func_11(&iLocal_1430, 1, 1);
	func_1857(&(uLocal_46[0]), 0, 1, 0);
}

void func_1378(bool bParam0)
{
	iLocal_1432 = 0;
	if (!func_832(&(uLocal_46[0]), 0))
	{
		return;
	}
	switch (iVar1428)
	{
		case 0:
			if (bParam0)
			{
				if (!_0x4b101dbcc9482f2d(&(uLocal_46[0])))
				{
					func_1892(&(uLocal_46[0]), "", 500f, 0, 500f, 324);
				}
				func_1891(1);
			}
			break;
		case 1:
			if (func_1893(player_id(), &(uLocal_46[0])))
			{
				func_1891(2);
			}
			break;
		case 2:
			if (!func_10(iVar1426))
			{
				iLocal_1429 = func_1894("INTERACT_ENCOURAGE", -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1895(&iLocal_1429, &(uLocal_46[0]));
			}
			if (!func_10(iVar1427))
			{
				iLocal_1430 = func_1894("INTERACT_REPRIMAND", 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1895(&iLocal_1430, &(uLocal_46[0]));
			}
			if (!func_1893(player_id(), &(uLocal_46[0])))
			{
				func_11(&iLocal_1429, 1, 1);
				func_11(&iLocal_1430, 1, 1);
				func_1891(1);
			}
			else if (func_1896(iVar1426, 1))
			{
				iLocal_1432 = 1;
			}
			else if (func_1896(iVar1427, 1))
			{
				iLocal_1432 = 2;
			}
			break;
	}
}

bool func_1379()
{
	return iVar1430 != 0;
}

bool func_1380()
{
	return iVar1430 == 1;
}

bool func_1381()
{
	return iVar1430 == 2;
}

bool func_1382(var uParam0, float fParam1)
{
	if (!func_26(uParam0))
	{
		func_27(uParam0, 0);
		return false;
	}
	if (func_928(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_1383(char[4] cParam0)
{
	iVar1 = 0;
	while (iVar1 <= (2 - 1))
	{
		switch (func_33(cParam0))
		{
			case 0:
				if (iVar1 == 0)
				{
					Var2 = { func_228(0, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(0, 2) };
				}
				break;
			case 1:
				if (iVar1 == 0)
				{
					if (func_230(1))
					{
						Var2 = { func_228(1, 3) };
					}
					else
					{
						Var2 = { func_228(1, 2) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 2:
				if (iVar1 == 0)
				{
					if (func_230(2))
					{
						Var2 = { func_228(2, 4) };
					}
					else if (func_230(4))
					{
						Var2 = { func_228(2, 7) };
					}
					else
					{
						Var2 = { func_228(2, 1) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 3:
				if (iVar1 == 0)
				{
					Var2 = { func_228(3, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 4:
				if (iVar1 == 0)
				{
					Var2 = { func_228(4, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 5:
				if (iVar1 == 0)
				{
					if (func_230(1))
					{
						Var2 = { func_228(5, 3) };
					}
					else
					{
						Var2 = { func_228(5, 2) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 6:
				if (iVar1 == 0)
				{
					Var2 = { func_228(6, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 7:
				if (iVar1 == 0)
				{
					Var2 = { func_228(7, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 8:
				if (iVar1 == 0)
				{
					Var2 = { func_228(8, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 9:
				if (iVar1 == 0)
				{
					Var2 = { func_228(9, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 10:
				if (iVar1 == 0)
				{
					Var2 = { func_228(10, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 25:
				if (iVar1 == 0)
				{
					Var2 = { func_228(11, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(11, 2) };
				}
				break;
			default:
				break;
		}
		if (iVar1 == 0)
		{
			if (!&iLocal_182[iVar1])
			{
				uLocal_46[iVar1] = func_159(cParam0);
				if (!is_entity_dead(&(uLocal_46[iVar1])))
				{
					iLocal_182[iVar1] = 1;
					if (!func_984(cParam0))
					{
						func_1355(&(uLocal_46[0]), Var2, 2, 1073741824);
					}
					func_1897(cParam0, 0);
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			if (func_33(cParam0) == 0 || (func_33(cParam0) >= 10 && func_33(cParam0) <= 25))
			{
				if (!&iLocal_182[iVar1])
				{
					if (func_911(cParam0, 13, uLocal_46[1], 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
					{
						if (!is_entity_dead(&(uLocal_46[iVar1])))
						{
							iLocal_182[iVar1] = 1;
							if (!func_984(cParam0))
							{
								func_1355(&(uLocal_46[1]), Var2, 2, 1073741824);
							}
							func_1897(cParam0, 1);
						}
					}
					else
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_1384(char[4] cParam0)
{
	if (func_1792(cParam0, 14, 75f, 150f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_167[0])
		{
			iLocal_167[0] = 1;
			func_462(&iLocal_41);
		}
	}
	else if (&iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_462(&iLocal_41);
		func_1793();
		func_1799(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		func_462(&iLocal_41);
		iLocal_41 = func_1299(408396114, func_1298(12, 5), 1);
		_blip_set_modifier(iLocal_41, -1878373110);
		set_gps_flags(512, 0f);
		func_1801("mar2_drive_in_ranch", 0, 76603059);
		func_1799(cParam0, "MAR2_OBJ09", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
	}
	switch (func_1310(cParam0))
	{
		case 0:
			if (!does_blip_exist(iLocal_41))
			{
				iLocal_41 = func_1299(408396114, func_1298(12, 5), 1);
				_blip_set_modifier(iLocal_41, -1878373110);
				set_gps_flags(512, 0f);
				func_1801("mar2_drive_in_ranch", 0, 76603059);
			}
			func_1802(cParam0, "MAR2_OBJ09", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (((!func_1371("MAR2_HERA2") && func_1347()) && func_1386(Global_35, -2583.164f, 455.9866f, 144.9381f, 0) < 90f) && func_1804(cParam0, "MAR2_OBJ09a", 0))
			{
				func_135(cParam0, 2);
			}
			else if (func_1888("MAR2_HERA2"))
			{
				if (func_1889() && func_1804(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 2:
			if (!func_1371("MAR2_OBJ09a"))
			{
				func_225(&uLocal_218);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_928(&uLocal_218) >= 1f)
			{
				func_1799(cParam0, "MAR2_OBJ09", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_225(&uLocal_218);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_466(7) && func_1804(cParam0, "MAR2_OBJ09b", 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1385(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!is_entity_dead(&(uLocal_46[iVar0])))
		{
			switch (&uLocal_262[iVar0])
			{
				case 0:
					if (!func_8(cParam0, 8))
					{
					}
					if (iVar0 == 1)
					{
						task_start_scenario_at_position(&(uLocal_46[iVar0]), -439112356, func_1298(0, 16), func_1321(0, 16), -1, false, true, "WORLD_HUMAN_INSPECT_FEMALE_D", -1f, false);
					}
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 1);
					break;
				case 1:
					if (iVar0 == 0)
					{
						if (func_466(7))
						{
							func_225(vLocal_224[iVar0]);
							func_1805(uLocal_262[iVar0], 2);
						}
					}
					else if (iVar0 == 1)
					{
						if (func_914(&(uLocal_46[iVar0]), iLocal_72, 30f, 1))
						{
							func_225(vLocal_224[iVar0]);
							func_1805(uLocal_262[iVar0], 2);
						}
					}
					break;
				case 2:
					if (iVar0 == 0)
					{
						set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
						open_sequence_task(&iLocal_40);
						task_stand_still(0, 1000);
						task_leave_vehicle(0, iLocal_72, 0, 0);
						task_follow_nav_mesh_to_coord(0, func_1298(11, 1), 1f, 20000, 0.25f, 0, 40000f);
						task_turn_ped_to_face_entity(0, &(uLocal_46[1]), -1, -1082130432, -1082130432, -1082130432);
						close_sequence_task(iLocal_40);
						task_perform_sequence(&(uLocal_46[iVar0]), iLocal_40);
						clear_sequence_task(&iLocal_40);
					}
					else if (iVar0 == 1)
					{
						set_blocking_of_non_temporary_events(&(uLocal_46[iVar0]), true);
						open_sequence_task(&iLocal_40);
						task_follow_nav_mesh_to_coord(0, func_1298(11, 2), 1f, 20000, 0.25f, 0, 40000f);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						close_sequence_task(iLocal_40);
						task_perform_sequence(&(uLocal_46[iVar0]), iLocal_40);
						clear_sequence_task(&iLocal_40);
					}
					func_225(vLocal_224[iVar0]);
					func_1805(uLocal_262[iVar0], 3);
					break;
				case 3:
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

float func_1386(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_1387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	bVar3 = is_ped_on_mount(iParam0);
	if (bVar3)
	{
		iVar2 = get_mount(iParam0);
		if (!does_entity_exist(iVar2) || is_entity_dead(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = is_ped_in_any_vehicle(iParam0, true);
		if (bVar4)
		{
			iVar1 = get_vehicle_ped_is_in(iParam0, true);
			if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_401(*iParam1, 128))
	{
		if (!func_1849(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_401(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1898(iVar2))
			{
				return false;
			}
			if (!func_1849(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1899(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_401(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_1900(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_430(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_401(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return false;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_401(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1898(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_1900(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_1900(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_1900(iParam2, 8192))
				{
					_display_hud_component(724769646);
				}
			}
		}
	}
	disable_control_action(0, -1879280170, false);
	if (bVar3)
	{
		if (is_entity_in_air(iVar2, 0))
		{
			return false;
		}
		if (func_401(*iParam1, 2336))
		{
			if (!func_1898(iVar2))
			{
			}
			if (func_1901(iVar2, *iParam1))
			{
				func_1902(iParam1, 32);
				func_1902(iParam1, 256);
				func_1902(iParam1, 2048);
				func_430(iParam1, 512);
				func_430(iParam1, 1024);
				func_430(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_401(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_1898(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_1902(iParam1, 64);
			}
		}
		if (func_1900(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_1900(iParam2, 1024))) || func_1900(iParam2, 8)) && !func_401(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_430(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_1900(iParam2, 4096)) && !func_401(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_430(iParam1, 2048);
			func_430(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_1900(iParam2, 32)) && !func_401(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_430(iParam1, 256);
			func_430(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_430(iParam1, 64);
		}
		else if (!func_1900(iParam2, 1))
		{
			if (!func_1900(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_1899(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_401(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_430(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_430(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_1900(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_430(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_1900(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_430(iParam1, 8);
	}
	return false;
}

void func_1388()
{
	_0x50b72a754ee64a71(-1392528840);
}

bool func_1389(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_333((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_1390(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1903(&((*Global_1835011)[cParam0->f_607]->f_22), iParam1, iParam2);
}

char* func_1391(int iParam0)
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

char* func_1392(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

int func_1393(var uParam0, int iParam1)
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

int func_1394(var uParam0, char* sParam1)
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

void func_1395(var uParam0, int iParam1)
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

int func_1396(var uParam0)
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

void func_1397(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1398(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1399(int iParam0)
{
	if (-1829635046 == func_1904(81053684))
	{
		if (func_1905(iParam0))
		{
			return true;
		}
	}
	else if (func_1686(-525676072, iParam0))
	{
		if (func_1905(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1400(int iParam0)
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

void func_1401(int iParam0)
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

void func_1402()
{
	iVar0 = func_1142(Global_35, 9, 1, 0);
	if (func_705(iVar0))
	{
		return;
	}
	iVar0 = func_1142(Global_35, 7, 1, 0);
	if (func_705(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1142(Global_35, 0, 1, 0);
	if (func_705(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1142(Global_35, 1, 1, 0);
	if (func_705(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1142(Global_35, 18, 1, 0);
	if (func_705(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1906();
	if (func_705(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1907(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1908(6291456, 0);
	if (func_705(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1907(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1403()
{
	return Global_1900383->f_393;
}

int func_1404(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1909(*uParam0, 0f, 0f, 0f))
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

void func_1405(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1406(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1407(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1408()
{
	return &Global_1899515;
}

void func_1409(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1410(int iParam0)
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

bool func_1411()
{
	return (func_1910() || func_1911());
}

void func_1412(bool bParam0)
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
	func_1912(0f);
	Global_1935436->f_11 = 1;
	if (func_310())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1913();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1413(var uParam0)
{
	return uParam0->f_865;
}

float func_1414(var uParam0)
{
	return uParam0->f_868;
}

float func_1415(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1416(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1417(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1418(var uParam0, int iParam1)
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

void func_1419(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1247(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1914(iParam4);
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

bool func_1420(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_690(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1421(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1422(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1420(1108822547, 6))
	{
		if (bParam2)
		{
			func_1419(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1423(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1424(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1423(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_690(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_690(iParam0, 1)])->f_10 || iParam1);
}

void func_1424(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_690(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_690(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_690(iParam0, 1)])->f_10 && iParam1));
}

bool func_1425(var uParam0)
{
	if (func_1915(&(uParam0->f_29), 62))
	{
		switch (func_1916())
		{
			case 1:
				if (!func_1915(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1915(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1915(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1915(&(uParam0->f_29), 32))
				{
					if (func_1915(&(uParam0->f_29), 2))
					{
						if (func_712(func_291()) < 5)
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

int func_1426(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1917(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1184("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1185(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_705(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1917(iParam1, 512) && func_1681(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1917(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1917(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1917(iParam1, 33554432)))
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
		func_1186(iVar1);
	}
	if (func_705(iVar0))
	{
	}
	else if (!func_1917(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1426(uParam0, iParam1, iParam2);
	}
	else if (func_1917(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1427(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1428(int iParam0)
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

void func_1429(var uParam0)
{
	if (!func_908(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_872(&(uParam0->f_1), 1);
	}
}

void func_1430(var uParam0)
{
	if (!func_908(*uParam0, 1))
	{
		request_ptfx_asset();
		func_872(uParam0, 1);
	}
}

bool func_1431(var uParam0)
{
	if (func_908(uParam0->f_2, 1))
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

bool func_1432(int iParam0)
{
	return iParam0 != 0;
}

bool func_1433(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1434(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1435(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1435(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1435(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1435(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1435(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1435(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1435(uParam0, 5, iParam4))
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
			if (func_1435(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1435(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1435(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1436(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1437(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_222((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1438(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_510(sParam0, 1);
}

bool func_1439(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_879(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1440(var uParam0)
{
	if (func_908(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_3, 1))
	{
		func_881(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_872(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_872(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1441(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_883(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1442(var uParam0, int iParam1)
{
	if (func_908(uParam0->f_1, 2))
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
	if (!func_908(uParam0->f_1, 1))
	{
		func_890(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1443(var uParam0)
{
	if (func_908(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_2, 1))
	{
		func_892(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_872(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1444(var uParam0)
{
	if (func_908(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_3, 1))
	{
		func_894(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_872(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1445(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_896(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1446(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_898(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1447(var uParam0)
{
	if (func_908(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_2, 1))
	{
		func_900(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_872(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1448(var uParam0)
{
	if (func_908(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_908(uParam0->f_1, 1))
	{
		func_902(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_872(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1449(int iParam0)
{
	if (func_529(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1450(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_529(iParam0))
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
			if (func_1059(iParam0, 2, 1))
			{
				func_1057(iParam0, 2, 1);
			}
			if (func_724(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1055(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_535(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_832(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_832(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1918(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1055(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1919(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1055(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1919(iParam0, 1);
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
			if (!func_1059(iParam0, 44, 0))
			{
				func_1055(iParam0, 44, 0);
			}
			if (func_1920(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1919(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1057(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1061(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1921(iParam0, 0, 0, 1);
			}
			func_1057(iParam0, 33, 1);
			func_1057(iParam0, 34, 1);
			func_1057(iParam0, 29, 1);
			if (!func_406(vVar0) && bParam7)
			{
				func_1919(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1919(iParam0, 4);
			}
			else
			{
				func_1919(iParam0, 5);
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
						func_1918(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_919(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1919(iParam0, 4);
			}
			else
			{
				func_1919(iParam0, 5);
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
				if (func_1922(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1923(iParam0, iParam13, 0);
						func_1924(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1059(iParam0, 25, 0))
						{
							func_1057(iParam0, 25, 0);
						}
						func_1055(iParam0, 66, 0);
						func_1919(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1919(iParam0, 5);
				}
				func_1055(iParam0, 28, 1);
			}
			else
			{
				func_1919(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1919(iParam0, 6);
			}
			break;
		case 6:
			if (func_832(Global_1360165[iParam0], 0))
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
					func_1925(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1926(Global_1360165[iParam0], 1);
				}
			}
			func_1919(iParam0, 7);
		case 7:
			func_1061(iParam0, bParam9, bParam15, 0);
			func_1052(iParam0, 4, bParam11);
			func_1056(iParam0);
			if (bParam20)
			{
				if (func_1927(Global_1360165[iParam0]))
				{
				}
			}
			func_1928(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1919(iParam0, 0);
			func_725(iParam0, 16, 1);
			func_1057(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1451(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1929(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1930(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1526(cParam0, iParam1, iParam2, func_330(iParam2, 0));
	func_1012(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1012(cParam0, iParam1, 128);
	}
	else
	{
		func_1011(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1452(int iParam0)
{
	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_566(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1453(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1454(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1463(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1455(int iParam0)
{
	iParam0 = func_272(iParam0);
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
	func_1931(&Var0);
	func_1932(iParam0, Var0);
	func_1933(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1934(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1935(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1936(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1937(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1938(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1939(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1940(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1941(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1456(vector3 vParam0)
{
	return func_1942(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1457(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_544(iParam0))
	{
		return false;
	}
	iVar0 = func_220(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1458(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_538(iParam0);
	func_538(iParam0);
	func_1943(iParam0, iParam1);
	func_1944(iParam0, iParam1);
	func_1945(iParam0, iParam1);
	iVar1 = func_220(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1946(iVar1);
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
	iVar3 = func_220(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1946(iVar3);
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
	func_274();
}

bool func_1459()
{
	iVar0 = func_1403();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1460()
{
	iVar0 = func_1403();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1947(0);
}

int func_1461(int iParam0)
{
	iParam0 = func_272(iParam0);
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

int func_1462(int iParam0)
{
	iParam0 = func_272(iParam0);
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

int func_1463(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_1464(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1742(&iVar0, &iVar1, &iVar2);
	func_1743(iParam0, iVar0);
	func_1744(iParam0, iVar1);
	func_1745(iParam0, iVar2);
	func_1948(iParam0, 1);
	func_1949(iParam0, 1);
}

void func_1465(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1006(iParam0, 1);
}

void func_1466(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_272(iParam0);
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

bool func_1467(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1070(iParam0, 1);
}

struct<2> func_1468(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1950(iParam0, &uVar2))
	{
	}
	if (!func_1951(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1469()
{
	if (func_1952(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1952(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1952(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1952(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1952(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1952(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1470(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1953(iParam0);
	func_1954(iParam0, uParam1);
	func_1955(iParam0);
	func_1956(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1957(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1471(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_1472(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1473(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1474(var uParam0)
{
	return uParam0;
}

bool func_1475(int iParam0)
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

int func_1476(var uParam0)
{
	return *uParam0;
}

bool func_1477(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1958(iParam0) };
	if (func_1909(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_920(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1959(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1478(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1479(var uParam0)
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

bool func_1480(var uParam0)
{
	switch (func_1960(uParam0))
	{
		case 0:
			uParam0->f_24 = func_291();
			iVar4 = func_291();
			func_1252(&iVar4, uParam0->f_6);
			func_1253(&iVar4, 0);
			func_1254(&iVar4, 0);
			if (func_1089(uParam0->f_24, iVar4, 1))
			{
				func_340(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1961(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1962(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1963(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1962(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1963(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_340(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_712(iVar4), func_713(iVar4), func_714(iVar4));
				func_1964(get_clock_hours());
				func_1965(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1481(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1482(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1966(2000);
	Global_16 = 0;
	func_1967();
	set_entity_invincible(Global_35, func_1968(*iParam0, 8));
	if (!func_1968(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1968(*iParam0, 2) || func_1968(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1968(*iParam0, 16))
	{
		func_241(1);
	}
	if (func_1968(*iParam0, 32))
	{
		func_643(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1969(-1623728698, 0);
	}
	func_844(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1483(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1484(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1485(var uParam0)
{
	return *uParam0;
}

bool func_1486(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1487(uParam0, 32768))
	{
		return true;
	}
	if (func_1970(uParam0) >= 3)
	{
		uParam0->f_2286 = func_994(get_player_index(), 0, 0, 1);
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
		func_1971(uParam0);
	}
	if (func_1970(uParam0) < 10)
	{
		if (func_1970(uParam0) == 3)
		{
			func_1972(uParam0, iParam5, bParam6);
		}
		else if (func_1970(uParam0) > 3)
		{
			if (func_1485(uParam0) == 0)
			{
				if (!func_1487(uParam0, 524288))
				{
					func_1973(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1974(uParam0, 4);
					func_1975(uParam0, 10);
					func_1976(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1487(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1977(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1549(0);
			func_1978();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1977(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1979(uParam0, uParam0->f_2074))
				{
					if (func_1881(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1980(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1980(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1981(uParam0);
			}
		}
	}
	bVar0 = func_1982(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1487(uParam0, 268435456) && bVar1) && !func_1487(uParam0, 262144))
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
				func_762(uParam0, 131072);
				func_762(uParam0, 268435456);
			}
		}
		if (func_1983(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1977(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1485(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1970(uParam0) == 3 || func_1487(uParam0, 131072))
	{
		func_1984(uParam0);
		if (!func_1487(uParam0, 262144))
		{
			if ((bVar0 && func_1487(uParam0, 65536)) || func_1487(uParam0, 131072))
			{
				func_762(uParam0, 32768);
				func_1974(uParam0, 4);
				func_1975(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1976(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1970(uParam0) >= 3)
	{
		func_1985(uParam0, iParam5);
		func_1986(uParam0);
		if (!func_1987(uParam0, 1))
		{
			func_1988(uParam0);
		}
		func_1989(uParam0);
	}
	switch (func_1970(uParam0))
	{
		case 0:
			func_1990(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1991(uParam0);
			break;
		case 2:
			func_1992(uParam0);
			break;
		case 3:
			if (func_1882(uParam0))
			{
				func_1993(2);
				func_1980(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_225(&(uParam0->f_2262));
				func_1974(uParam0, 1);
				func_1994();
				func_1975(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1487(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1970(uParam0) == 5)
			{
				if (func_1995(uParam0))
				{
					func_1974(uParam0, 2);
					func_1975(uParam0, 6);
				}
			}
			if (func_1970(uParam0) == 6)
			{
				if (func_1996(uParam0))
				{
					func_1974(uParam0, 3);
					func_1975(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1832(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1997(uParam0, iParam5))
				{
					if (func_1998(uParam0))
					{
						uParam0->f_2075 = func_1999(uParam0);
						func_225(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1974(uParam0, 6);
						func_1975(uParam0, 9);
					}
					else
					{
						func_1974(uParam0, 4);
						func_1975(uParam0, 10);
						func_1976(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1997(uParam0, iParam5))
			{
				func_1976(uParam0, iParam5);
				func_1975(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1487(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1488(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1489(var uParam0, var uParam1)
{
	if (func_1487(uParam1, 32768))
	{
		Var0 = { func_1523(uParam0) };
		func_2000(uParam0, &Var0);
		if (func_1487(uParam1, 131072))
		{
			func_763(uParam0, 268435456);
			if (func_406(uParam0->f_865))
			{
				uParam0->f_865 = { func_2001(uParam1, uParam1->f_2074) };
			}
			if (func_406(uParam0->f_862))
			{
				uParam0->f_862 = { func_2001(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1487(uParam1, 268435456))
		{
			func_2002(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1487(uParam1, 524288))
	{
		func_763(uParam0, 67108864);
		func_1488(uParam1, 524288);
	}
	if (func_1983(uParam1, 128))
	{
		func_763(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1977(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2002(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1490(char[4] cParam0)
{
	if (func_833(&(cParam0->f_7375), 128) || func_833(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1516(&(cParam0->f_7375));
		func_1416(&(cParam0->f_7375), 128, 1);
		func_1416(&(cParam0->f_7375), 256, 1);
		func_1416(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1491(char[4] cParam0)
{
	func_2003(&(cParam0->f_7375));
}

bool func_1492(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1509(uParam4, &cParam0);
	if (func_833(uParam4, 2) && !func_833(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2004(uParam4) != 1)
	{
		func_2005(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2004(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2006(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2007(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2008(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2009(cParam5);
				}
				func_2007(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_833(uParam4, 2097152))
					{
						func_1519(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_833(uParam4, 134217728)))
				{
				}
				else
				{
					func_1858(uParam4);
				}
				func_225(&(uParam4->f_1));
				func_2007(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1521(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_928(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2007(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_935(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2007(uParam4, 4);
					}
					else if (!func_406(func_1510(uParam4)) && !func_1822(Global_35, func_1510(uParam4), 100f, 1, 1))
					{
						func_1401(1);
						start_player_teleport(get_player_index(), func_1510(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_928(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2007(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_285(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2006(uParam4, &cParam0, cParam5);
						func_2007(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_928(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2007(uParam4, 4);
			}
			break;
		case 3:
			func_402(uParam4);
			if (func_2008(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2009(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_833(uParam4, 512)))
			{
				if (!func_833(uParam4, 1024) && func_2010(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_833(uParam4, 512))
				{
					func_225(&(uParam4->f_1));
					func_763(uParam4, 512);
					func_2007(uParam4, 4);
				}
				else if (func_833(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2005(uParam4);
			}
			if (func_833(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2011(uParam4) - func_2012(uParam4)))) <= 2f)
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
				if (func_2013(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2012(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2014(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2015(uParam4);
				return true;
			}
			else
			{
				if (func_833(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_225(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_763(uParam4, 512);
						func_1416(uParam4, 67108864, 1);
						func_2007(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_833(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2012(uParam4) <= 5000) && func_2012(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_833(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1482(&(uParam4->f_861), 0);
					func_763(uParam4, 536870912);
				}
				if (func_2012(uParam4) >= 5000 && func_2012(uParam4) <= (func_2011(uParam4) - 5000))
				{
					func_2016();
				}
			}
			break;
		case 6:
			if (func_2014(uParam4))
			{
				func_2015(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_833(uParam4, 524288))
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
						func_763(uParam4, 1073741824);
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
					if (func_2017(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2007(uParam4, 3);
					}
					else if (func_928(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2007(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2008(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2007(uParam4, 3);
					}
					else if (func_928(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2007(uParam4, 3);
					}
				}
				if (func_2004(uParam4) == 3)
				{
					if (func_833(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2007(uParam4, 4);
			break;
	}
	return false;
}

void func_1493(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_827()))
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

bool func_1494(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_275(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2018(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_276(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2019(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1495(int iParam0)
{
	MemCopy(&cVar0, {func_275(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1496(int iParam0)
{
	Var0 = { func_1495(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1497(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2020(iVar0));
		iVar0++;
	}
}

int func_1498(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1726(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_2021(iParam1);
	}
	if ((bParam3 && func_1727(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_2022(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_2023(Global_40.f_7729, 4096);
		func_1728(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_2024(iParam0);
	}
	func_2025();
	if (!func_2026(iParam1))
	{
		func_2028(iVar0, iParam0, func_2027(iParam1), 1, 0, 1);
	}
	func_2029(iParam0);
	return 1;
}

void func_1499(int iParam0)
{
	if (iVar364 != iParam0)
	{
		iLocal_367 = iParam0;
	}
}

bool func_1500()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

bool func_1501(char[4] cParam0)
{
	if (func_466(31))
	{
		return true;
	}
	if (!does_entity_exist(iLocal_72))
	{
		Var0 = { func_2030(cParam0) };
		iLocal_72 = create_vehicle(822759307, Var0, Var0.f_3, true, true, false, false);
		if (does_entity_exist(iLocal_72))
		{
			_set_entity_coords_and_heading(iLocal_72, Var0, Var0.f_3, false, false, true);
			_0x09c970ae59abf6b2(iLocal_72, false);
			_set_entity_something(iLocal_72, true);
			_0x8268b098f6fca4e2(iLocal_72, 2);
			_0xf89d82a0582e46ed(iLocal_72, 2);
		}
	}
	if (does_entity_exist(iLocal_72) && !does_entity_exist(iLocal_49))
	{
		vVar4 = { get_offset_from_entity_in_world_coords(iLocal_72, 0f, 3f, 0f) };
		iLocal_49 = func_2031(-1693870200, vVar4, 0f, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
		if (does_entity_exist(iLocal_49))
		{
			_0x9587913b9e772d29(iLocal_49, 0);
			_0x316cdb5b6e8f4110(iLocal_49, iLocal_72, 0);
			func_399();
		}
	}
	if (does_entity_exist(iLocal_72) && does_entity_exist(iLocal_49))
	{
		if (_get_ped_in_draft_seat(iLocal_72, 0) == iLocal_49)
		{
			func_467(31, 1);
		}
	}
	return func_466(31);
}

void func_1502(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (func_33(cParam0) == 0)
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		}
		_0x78030c7867d8b9b6(Global_35, 0);
		if (!is_entity_dead(iLocal_72))
		{
			_0xb7079f4c72896756(Global_35, iLocal_72, 0, 1, -1);
		}
	}
}

bool func_1503(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = 0;
		while (iVar1 <= (1 - 1))
		{
			if (func_2032(cParam0, iVar1))
			{
			}
			else
			{
				bVar0 = true;
			}
			iVar1++;
		}
		if (is_entity_dead(&(iLocal_60[0])))
		{
		}
		else
		{
			func_2033(uLocal_273[0], 2);
		}
		return !bVar0;
	}
	else
	{
		switch (&uLocal_273[0])
		{
			case 0:
				func_2033(uLocal_273[0], 1);
				break;
			case 1:
				if (&uLocal_195[0] < 1)
				{
					func_2032(cParam0, &(uLocal_195[0]));
				}
				else
				{
					func_2033(uLocal_273[0], 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return !bVar0;
}

bool func_1504(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = iVar1;
			if (!func_2034(cParam0, iVar2))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_2033(uLocal_273[1], 2);
		}
	}
	else
	{
		bVar0 = false;
		switch (&uLocal_273[1])
		{
			case 0:
				func_2033(uLocal_273[1], 1);
				break;
			case 1:
				if (&uLocal_195[1] < 1)
				{
					func_2034(cParam0, &(uLocal_195[1]));
				}
				else
				{
					func_2033(uLocal_273[1], 2);
				}
				break;
			case 2:
				bVar0 = true;
				break;
		}
	}
	return bVar0;
}

void func_1505(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(&(iLocal_50[iParam1])))
	{
		switch (func_33(cParam0))
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				if (iParam1 == 0)
				{
					Var0 = { func_228(3, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(4, 5) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(4, 6) };
				}
				break;
			case 5:
				if (iParam1 == 0)
				{
					Var0 = { func_228(5, 6) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(5, 7) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(5, 8) };
				}
				break;
			case 6:
				if (iParam1 == 0)
				{
					Var0 = { func_228(6, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(6, 4) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(6, 5) };
				}
				break;
			case 7:
				if (iParam1 == 0)
				{
					Var0 = { func_228(7, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(7, 4) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(7, 5) };
				}
				break;
			default:
				break;
		}
		iLocal_50[iParam1] = func_2031(-1726458124, Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_2035(iLocal_50[iParam1], iParam1);
	}
	else
	{
		iLocal_198[1] = &iLocal_198[1] + 1;
	}
}

bool func_1506(char[4] cParam0, bool bParam1)
{
	if (&uLocal_270[0] == 2)
	{
		return true;
	}
	if (bParam1)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			iVar1 = iVar0;
			bVar2 = (bVar2 && func_2036(cParam0, iVar1));
			iVar0++;
		}
		if (bVar2)
		{
			func_2033(uLocal_270[0], 2);
		}
		return bVar2;
	}
	else
	{
		switch (&uLocal_270[0])
		{
			case 0:
				func_2033(uLocal_270[0], 1);
				break;
			case 1:
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					iVar1 = iVar0;
					if (!does_entity_exist(&(iLocal_54[iVar1])))
					{
						if (func_2036(cParam0, iVar1))
						{
							return false;
						}
					}
					iVar0++;
				}
				func_2033(uLocal_270[0], 2);
				break;
			case 2:
				break;
		}
	}
	return &uLocal_270[0] == 2;
}

int func_1507(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		while (&iLocal_198[1] < 3)
		{
			func_1505(cParam0, &(iLocal_198[1]));
		}
		func_2033(uLocal_270[1], 2);
		return 1;
	}
	else
	{
		switch (&uLocal_270[1])
		{
			case 0:
				func_2033(uLocal_270[1], 1);
				break;
			case 1:
				if (&iLocal_198[1] < 3)
				{
					func_1505(cParam0, &(iLocal_198[1]));
				}
				else
				{
					func_2033(uLocal_270[1], 2);
				}
				break;
			case 2:
				return 1;
		}
	}
	return 0;
}

int func_1508(char[4] cParam0, int iParam1)
{
	if (!func_2037(cParam0, iParam1, &iVar0, &bVar1, &uVar2, &bVar3, &bVar4, &fVar5, &uVar6, &bVar7))
	{
		return 0;
	}
	if (!func_2038(iVar0))
	{
		return 0;
	}
	if (!func_2039(iVar0))
	{
		func_2040(iVar0, 0, 0);
	}
	if (!func_2039(iVar0))
	{
		return 0;
	}
	func_2041(iVar0, bVar1, uVar2, bVar3, bVar4, fVar5, uVar6, bVar7);
	return 1;
}

void func_1509(var uParam0, char* sParam1)
{
	if (func_833(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_800), {func_2042("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_800), {func_2042("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_763(uParam0, 8192);
}

Vector3 func_1510(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_1511(var uParam0)
{
	MemCopy(&uVar0, {func_2043(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
		uParam0->f_805 = _create_anim_scene(&(uParam0->f_800), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_805, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_805, func_828(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_805, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_805);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1512(var uParam0, vector3 vParam1)
{
	if (func_406(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1513(var uParam0)
{
	return uParam0->f_795;
}

void func_1514()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1710(Var0);
	}
}

void func_1515(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_804, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_822[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_804, uParam0->f_822[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_804, uParam0->f_822[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_804, uParam0->f_822[iVar0]);
		}
		uParam0->f_822[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_1516(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_833(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_2044(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_833(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1416(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1416(uParam0, 16, 1);
}

float func_1517(var uParam0)
{
	return uParam0->f_794;
}

struct<8> func_1518(var uParam0)
{
	return uParam0->f_806;
}

void func_1519(var uParam0)
{
	Var0 = { func_2045() };
	func_2046(uParam0, &Var0);
}

void func_1520(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_833(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_1909(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_2047());
		func_763(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_2048(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_763(uParam0, 16);
	}
}

void func_1521(var uParam0)
{
	if ((!func_833(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_804)) && _is_anim_scene_metadata_loaded(uParam0->f_804, false))
	{
		func_2049(uParam0);
		func_2050(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_804, true))
		{
			load_anim_scene(uParam0->f_804);
		}
		func_763(uParam0, 32768);
	}
}

bool func_1522()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

struct<8> func_1523(var uParam0)
{
	Var0 = { func_2051(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_2052() };
	}
	return Var0;
}

bool func_1524(int iParam0)
{
	if (_does_volume_exist(&(iLocal_93[iParam0])))
	{
		return true;
	}
	if (!func_2053(iParam0, &iVar9, &iVar10))
	{
		if (!func_2054(iParam0, &Var0))
		{
			return false;
		}
		func_2055(iParam0, Var0);
	}
	else
	{
		func_2056(iParam0);
		iVar11 = iVar9;
		while (iVar11 <= iVar10)
		{
			iVar12 = iVar11;
			if (!func_2054(iVar12, &Var0))
			{
			}
			else
			{
				func_2055(iVar12, Var0);
				_0x6e0d3c3f828da773(&(iLocal_93[iParam0]), &(iLocal_93[iVar12]));
			}
			iVar11++;
		}
	}
	return _does_volume_exist(&(iLocal_93[iParam0]));
}

var func_1525(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_950(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_1526(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_261(func_2057(cParam0)))
	{
		func_146(cParam0);
	}
	if (is_string_null_or_empty(sParam3))
	{
		if (func_2058(iParam2))
		{
			sParam3 = func_330(iParam2, 0);
		}
		else
		{
			sParam3 = func_2059(iParam2);
		}
	}
	if (!func_1009(cParam0, iParam1))
	{
		func_2061(cParam0, iParam1, 347146, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!func_2062(cParam0->f_5421, iParam1))
	{
		func_2063(cParam0->f_5421, iParam1);
	}
	decor_set_int(iParam1, func_2064(), iParam2);
	set_ped_relationship_group_hash(iParam1, 1030835986);
	set_ped_can_ragdoll_from_player_impact(iParam1, false);
	_0x15f4732c357b1d6d(iParam1, get_player_index(), 10);
	_0x15f4732c357b1d6d(iParam1, get_player_index(), 11);
}

int func_1527(char[4] cParam0)
{
	if (!is_entity_dead(&(uLocal_46[0])))
	{
		if (func_2065(cParam0, &(uLocal_46[0]), 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				if (!is_entity_dead(iLocal_72))
				{
					if (!is_ped_in_vehicle(&(uLocal_46[0]), iLocal_72, false))
					{
						set_ped_into_vehicle(&(uLocal_46[0]), iLocal_72, 0);
					}
				}
			}
		}
	}
	if (!is_entity_dead(&(uLocal_46[1])))
	{
		if (func_2065(cParam0, &(uLocal_46[1]), 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(&(uLocal_46[1]), func_228(0, 14), 2, 1073741824);
			}
		}
	}
	if (!is_entity_dead(&(iLocal_60[0])))
	{
		if (func_2065(cParam0, &(iLocal_60[0]), 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(&(iLocal_60[0]), func_228(0, 15), 2, 1073741824);
			}
			func_471(1);
		}
	}
	func_2066(cParam0);
	if (has_anim_event_fired(Global_35, 560580119))
	{
		func_953(cParam0);
	}
	if (has_anim_event_fired(&(uLocal_46[0]), -1204668013))
	{
		func_163(&(uLocal_46[0]), 1, 1);
	}
	return 1;
}

int func_1528(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (func_2065(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_930(0f, 0f);
			}
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_ped_in_vehicle(Global_35, iLocal_72, false))
				{
					set_ped_into_vehicle(Global_35, iLocal_72, -1);
				}
			}
		}
	}
	if (!is_entity_dead(&(uLocal_46[0])))
	{
		if (func_2065(cParam0, &(uLocal_46[0]), 0, 0, 1, 1))
		{
			if (!is_entity_dead(iLocal_72))
			{
				if (!is_ped_in_vehicle(&(uLocal_46[0]), iLocal_72, false))
				{
					set_ped_into_vehicle(&(uLocal_46[0]), iLocal_72, 0);
				}
			}
		}
	}
	if (!is_entity_dead(iLocal_72))
	{
		if (func_2067(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(iLocal_72, func_228(4, 2), 2, 1073741824);
			}
		}
	}
	if (!is_entity_dead(&(iLocal_58[0])))
	{
		if (func_2065(cParam0, &(iLocal_58[0]), "U_M_M_STRFREIGHTSTATIONOWNER_01", 0, 1, 1))
		{
			func_1355(&(iLocal_58[0]), func_228(3, 2), 2, 1073741824);
			set_blocking_of_non_temporary_events(&(iLocal_58[0]), false);
			clear_ped_tasks(&(iLocal_58[0]), 1, 0);
		}
	}
	if (!is_entity_dead(&(iLocal_50[0])))
	{
		if (func_2065(cParam0, &(iLocal_50[0]), "G_M_M_UNICRIMINALS_01", 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(&(iLocal_50[0]), func_228(4, 4), 2, 1073741824);
			}
			func_472(iLocal_50[0], 0);
			iLocal_185[0] = 0;
			iLocal_198[1] = 0;
			func_2033(uLocal_270[1], 0);
		}
	}
	if (!func_2068(cParam0))
	{
		return 0;
	}
	return 1;
}

int func_1529(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_72))
	{
		if (func_2067(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(iLocal_72, func_228(7, 17), 2, 1073741824);
			}
		}
	}
	if (!is_entity_dead(Global_35))
	{
		if (func_2065(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (!is_entity_dead(iLocal_72))
			{
				if (is_ped_in_vehicle(Global_35, iLocal_72, false))
				{
					_0xe0b61ed8bb37712f(Global_35);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar1 = iVar0;
				if (!is_entity_dead(&(iLocal_50[iVar1])))
				{
					clear_ped_tasks_immediately(&(iLocal_50[iVar1]), false, true);
				}
				iVar0++;
			}
		}
	}
	if (!is_entity_dead(&(uLocal_46[0])))
	{
		if (func_2065(cParam0, &(uLocal_46[0]), 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				if (!is_entity_dead(iLocal_72))
				{
					if (is_ped_in_vehicle(&(uLocal_46[0]), iLocal_72, false))
					{
						_0xe0b61ed8bb37712f(&(uLocal_46[0]));
					}
				}
				func_1355(&(uLocal_46[0]), func_228(7, 16), 2, 1073741824);
			}
			if (!is_entity_dead(iLocal_72))
			{
				_0x4248ab2eeb3c75ad(iLocal_72, Global_35, 0);
				_0x4248ab2eeb3c75ad(iLocal_72, &(uLocal_46[0]), 1);
			}
			func_1288(6);
		}
	}
	func_1356(cParam0);
	func_163(&(uLocal_46[0]), 0, 1);
	return 1;
}

int func_1530(char[4] cParam0)
{
	if (!is_entity_dead(iLocal_72))
	{
		if (func_2067(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (func_8(cParam0, 524288))
			{
				_set_entity_coords_and_heading(iLocal_72, -1745.369f, 312.5629f, 109.5282f, -38.69f, false, false, true);
			}
		}
	}
	func_924(cParam0, 4194304);
	func_1376(cParam0);
	return 1;
}

int func_1531(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (func_2065(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				func_1355(Global_35, func_228(11, 4), 2, 1073741824);
				func_930(0f, 0f);
			}
		}
	}
	if (!is_entity_dead(&(uLocal_46[0])))
	{
		if (func_2065(cParam0, &(uLocal_46[0]), 0, 0, 1, 1))
		{
			set_anim_scene_entity(&(uLocal_202[8]), "JackMarston_Teen", &(uLocal_46[0]), 0);
			set_anim_scene_entity(&(uLocal_202[8]), "AbigailRoberts", &(uLocal_46[1]), 0);
			start_anim_scene(&(uLocal_202[8]));
		}
	}
	if (func_33(cParam0) == 25)
	{
		if (!is_screen_fading_out() && !is_screen_faded_out())
		{
			if ((func_2069(cParam0) - func_2070(cParam0)) <= 2000)
			{
				do_screen_fade_out(1000);
			}
		}
	}
	set_all_random_peds_flee_this_frame(player_id());
	if (!func_466(19))
	{
		iVar0 = func_220(7);
		iVar1 = func_220(1);
		if (func_832(iVar0, 0))
		{
			_set_entity_coords_and_heading(iVar0, -2590.037f, 465.5254f, 145.1149f, 79.8012f, true, false, true);
			task_stand_still(iVar0, -1);
		}
		if (func_832(iVar1, 0))
		{
			_set_entity_coords_and_heading(iVar1, -2589.972f, 467.1571f, 145.0408f, 83.5558f, true, false, true);
			task_stand_still(iVar1, -1);
		}
		func_467(19, 1);
	}
	return 1;
}

bool func_1532(char[4] cParam0)
{
	func_1802(cParam0, "MAR2_OBJ01", -1082130432, 0, 0, -1, -1, 0);
	return func_2066(cParam0);
}

int func_1533(char[4] cParam0)
{
	func_1802(cParam0, "MAR2_OBJ05", -1082130432, 0, 0, -1, -1, 0);
	if (!func_2068(cParam0))
	{
		return 0;
	}
	return 1;
}

int func_1534(char[4] cParam0)
{
	func_1802(cParam0, "MAR2_OBJ06a", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_1535(char[4] cParam0)
{
	func_1802(cParam0, "MAR2_OBJ08", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

void func_1536()
{
	set_bit(&(Global_1934765->f_301), 1);
	func_2071();
}

void func_1537(int iParam0)
{
	if (iVar353 != iParam0)
	{
		iLocal_356 = iParam0;
	}
}

float func_1538(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

float func_1539(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_1540(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 16777216);
}

int func_1541(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1542(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	iVar0 = func_2072(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_2073(func_1543(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_1543(int iParam0)
{
	if (!func_253(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0]->f_1;
	}
	return Global_1058888->f_40615[iParam0]->f_1;
}

void func_1544(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_1 = iParam1;
}

void func_1545(int iParam0, int iParam1)
{
	if (!func_253(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0]->f_3 = iParam1;
}

void func_1546(int iParam0)
{
	if (!func_253(iParam0))
	{
		return;
	}
	if (func_116(iParam0) && func_2074(iParam0))
	{
		func_2076(func_2075(iParam0));
	}
	else
	{
		func_2077(func_2075(iParam0));
	}
}

void func_1547(char[4] cParam0)
{
	if (func_33(cParam0) == 0)
	{
		iVar0 = 14;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 1)
	{
		iVar0 = 15;
		iVar1 = 0;
	}
	else if (func_33(cParam0) == 2)
	{
		iVar0 = 15;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 3)
	{
		iVar0 = 16;
		iVar1 = 0;
	}
	else if (func_33(cParam0) == 4)
	{
		iVar0 = 16;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 5)
	{
		iVar0 = 17;
		iVar1 = 0;
	}
	else if (func_33(cParam0) == 6)
	{
		iVar0 = 17;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 7)
	{
		iVar0 = 18;
		iVar1 = 0;
	}
	else if (func_33(cParam0) == 8)
	{
		iVar0 = 18;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 9)
	{
		iVar0 = 19;
		iVar1 = 0;
	}
	else if (func_33(cParam0) == 10)
	{
		iVar0 = 19;
		iVar1 = 30;
	}
	else if (func_33(cParam0) == 25)
	{
		iVar0 = 20;
		iVar1 = 0;
	}
	func_2078(iVar0, iVar1, 0, 0);
}

void func_1548(char[4] cParam0)
{
	if (!func_466(15))
	{
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -674562833, false);
		disable_control_action(0, -197984200, false);
		disable_control_action(0, -238861894, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -299367216, false);
		disable_control_action(0, 665666611, false);
		disable_control_action(0, -1110080755, false);
		disable_control_action(0, -200625768, false);
		disable_control_action(0, -1829375970, false);
		disable_control_action(0, 1751579194, false);
		disable_control_action(0, 1735899200, false);
		disable_control_action(0, 1433596806, false);
		if (func_1142(Global_35, 0, 1, 0) == -160924582)
		{
			enable_control_action(0, -128997553, true);
			enable_control_action(0, -674562833, true);
		}
		_0xc9caeaeec1256e54(-1618603322);
		if (!func_466(14) || func_2079(&uLocal_255) > 20000)
		{
			if (!func_984(cParam0))
			{
				if ((((is_disabled_control_just_pressed(0, 130948705) || is_disabled_control_just_pressed(0, 42190210)) || is_disabled_control_just_pressed(0, 1623727326)) || is_disabled_control_just_pressed(0, -922478227)) || is_disabled_control_just_pressed(0, -1304887797))
				{
					iLocal_338 = func_730("MAR2_NOGUNS", 7000, 0, 0, 0, 1);
					func_467(14, 1);
					func_225(&uLocal_255);
				}
			}
		}
	}
	else if (iVar335 != 0 && func_2080(iVar335))
	{
		_0x2f901291ef177b02(iVar335, 0);
		iLocal_338 = 0;
	}
}

void func_1549(bool bParam0)
{
	if (bParam0)
	{
		func_2081(4);
	}
	func_2081(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1550(char[4] cParam0)
{
	if (func_26(&uLocal_357))
	{
		if (func_928(&uLocal_357) > 2f)
		{
			func_1554(cParam0, "MAR2_FSCJA", "", 1, 0);
		}
		return;
	}
	iVar0 = func_33(cParam0);
	if (iVar0 < iLocal_20 || iVar0 > iLocal_21)
	{
		return;
	}
	if (func_1347())
	{
		return;
	}
	if (func_1386(Global_35, -1797.418f, -384.0061f, 159.254f, 0) < 60f)
	{
		return;
	}
	if (func_466(33))
	{
		func_225(&uLocal_357);
	}
	else if (func_2082(&(iLocal_50[0]), 1))
	{
		func_225(&uLocal_357);
	}
	else if (func_2082(&(iLocal_54[0]), 0))
	{
		func_225(&uLocal_357);
	}
	else if (func_2082(iLocal_65, 0))
	{
		func_225(&uLocal_357);
	}
	else if (func_2082(iLocal_66, 0))
	{
		func_225(&uLocal_357);
	}
	else if (func_2082(iLocal_67, 0))
	{
		func_225(&uLocal_357);
	}
}

void func_1551(char[4] cParam0)
{
	if (func_26(&uLocal_360))
	{
		if (func_928(&uLocal_360) > 2f)
		{
			func_1554(cParam0, "MAR2_FJATH", "", 0, 0);
		}
		return;
	}
	if (!is_vehicle_driveable(iLocal_72, false, false))
	{
		return;
	}
	if (!func_832(&(uLocal_46[0]), 0))
	{
		return;
	}
	iVar0 = func_33(cParam0);
	if (func_162(cParam0, iVar0) != 5)
	{
		return;
	}
	if (!func_2083(cParam0))
	{
		return;
	}
	if (!is_ped_in_vehicle(&(uLocal_46[0]), iLocal_72, false))
	{
		func_225(&uLocal_360);
	}
}

void func_1552(char[4] cParam0)
{
	if (!func_466(42))
	{
		if (func_466(41))
		{
			if (func_1804(cParam0, "MAR2_MCS4_LI_A", 0))
			{
				func_225(&uLocal_1258);
				func_467(42, 1);
			}
		}
	}
	else if (!func_466(44))
	{
		if (!func_1371("MAR2_MCS4_LI_A"))
		{
			func_467(44, 1);
		}
		else if (func_466(43))
		{
			fVar0 = func_928(&uLocal_1258);
			if ((fVar0 > 0.707f && fVar0 < 1.56f) || (fVar0 > 2.712f && fVar0 < 4f))
			{
				func_1372("MAR2_MCS4_LI_A", 0, 0);
				func_467(44, 1);
			}
		}
	}
}

bool func_1553()
{
	if (!func_832(Global_35, 0))
	{
		return false;
	}
	if (!is_entity_in_volume(Global_35, &(iLocal_93[51]), false, 0))
	{
		return false;
	}
	if (!func_2084())
	{
		return false;
	}
	return true;
}

void func_1554(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_447(cParam0, 2);
	}
	else
	{
		func_447(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1571(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

void func_1555(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_222(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2085(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1438(cParam0->f_8269[iVar19]);
				}
				else if (func_2086(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_233(cParam0->f_8269[iVar19]);
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
			if (func_222(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2087(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2088(cParam0->f_8269.f_641[iVar19]);
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
			if (func_222(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2087(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_223(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_222(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2089(&(cParam0->f_8269));
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
			if (func_222(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2085(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2090(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_510(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2086(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2090(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_510(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1556(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_2091(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1557()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1549(0);
	func_2092();
}

void func_1558(char[4] cParam0, int iParam1, int iParam2)
{
	func_1902(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1559(int iParam0)
{
	return (iParam0 < func_407() && iParam0 >= 0);
}

int func_1560(int iParam0)
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

bool func_1561(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1562(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1559(iVar0))
	{
		return false;
	}
	iVar1 = func_1560(iParam2);
	if (!func_1561(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1563(struct<2> Param0, int iParam2)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1564(char[4] cParam0)
{
	func_2093(cParam0);
	if (func_285(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_285(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_922(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2094(cParam0);
	func_2095(cParam0, 67108864);
	func_2095(cParam0, 8192);
	func_924(cParam0, 4);
	func_924(cParam0, 512);
	func_924(cParam0, 65536);
	func_924(cParam0, 1024);
	func_924(cParam0, 262144);
	func_924(cParam0, 16777216);
	func_924(cParam0, 64);
	func_271(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2096(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_271(cParam0, 4194304);
	func_271(cParam0, 8388608);
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
	func_464(&(cParam0->f_13106));
	func_225(&(cParam0->f_13112));
	func_2097(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_241(1);
	}
	if (func_974(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_974(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_974(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2098(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_235(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2099(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2100(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2101(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1565(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1566(char[4] cParam0)
{
	func_2009(cParam0);
}

void func_1567(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1398(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1568(char[4] cParam0)
{
	func_2102(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1569(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1570(char[4] cParam0)
{
	return true;
}

void func_1571(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1572(var uParam0, int iParam1)
{
	iVar0 = func_2103(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1573(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2104(cParam0, uParam1))
	{
		return 0;
	}
	if (func_529(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1014(uParam1);
	func_2105(uParam1);
	if (!bParam2)
	{
		func_2106(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2107(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2108(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2109(cParam0, uParam1);
	func_2110(uParam1);
	return 0;
}

bool func_1574(char[4] cParam0)
{
	return true;
}

int func_1575(int iParam0)
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
						*iParam0 = func_2111(vVar0.z);
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

void func_1576(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1554(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1577(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2112(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1487(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2113(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_935(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1578(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_869((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2116((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_869((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2114(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2115(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2117((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_869((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2118((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_869((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2119((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_869(uParam4->f_1, iParam12))
	{
		func_2114(&(uParam4->f_1), iParam12);
		if (func_2115(&(uParam4->f_1), iParam13))
		{
			func_2120(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_869((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2114(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2115(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2121((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_869((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2114(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2115(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2122((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_869((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2114(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2115(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2123((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_869((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2124((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_869((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2125((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_869((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2114(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2115(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2126((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_869((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2114(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2115(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2127((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1579(char[4] cParam0)
{
	iVar0 = func_2128(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1580(bool bParam0, bool bParam1)
{
	if (func_2129(255) == 4)
	{
		return;
	}
	if (func_406(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_296(0);
	}
	else
	{
		if (bParam1)
		{
			func_2130(0, 0, 0, 1);
		}
		func_297(0);
		func_2131(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2132(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2133(Global_1109400->f_389, 42);
	func_2134(Global_1109400->f_428, 42);
}

bool func_1581(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1582(bool bParam0, bool bParam1, bool bParam2)
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

var func_1583(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1584(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2135(sParam1));
}

char* func_1585(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1208(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1208(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_1586(var uParam0, int iParam1)
{
	func_1902(&(uParam0->f_64), iParam1);
}

void func_1587(var uParam0, int iParam1)
{
	func_430(&(uParam0->f_64), iParam1);
}

bool func_1588(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1589(int iParam0, bool bParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1054(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1052(iParam0, 16, 0);
		}
	}
	func_1052(iParam0, 1, bParam1);
}

void func_1590(int iParam0, var uParam1)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1054(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_2136(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1054(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1054(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1054(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1054(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_2137(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_566(iParam0));
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
		if (bVar2 && !func_202(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1054(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1054(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1054(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_330(iParam0, 0));
		}
	}
}

bool func_1591(int iParam0)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_1592(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_456(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_1593(int iParam0)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_1594(int iParam0)
{
	if (!func_456(iParam0))
	{
		return;
	}
	iVar0 = func_2138(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_1595(int iParam0, bool bParam1)
{
	if (!func_456(iParam0))
	{
		return 0;
	}
	if (!func_1592(iParam0, 2))
	{
		return 0;
	}
	if (func_457(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_459(iParam0)))
	{
		return 1;
	}
	if (func_1592(iParam0, 1) && !bParam1)
	{
		func_949(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_1594(iParam0);
	_0xfc77c5b44d5ff7c0(func_459(iParam0));
	func_2139(iParam0, 0);
	return 1;
}

bool func_1596()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_1597(int iParam0)
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

int func_1598(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		case -1324765740:
			return 4;
		case -1119640448:
			return 6;
		case -1015925347:
			return 8;
		case -857562377:
			return 7;
		case -579939614:
			return 10;
		case -193557170:
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case 54488187:
			return 2;
		case 100010212:
			return 11;
		case 679418883:
			return 0;
		case 880414984:
			return 12;
		case 1077154516:
			return 1;
		case 1620037762:
			return 5;
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

int func_1599(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_1600(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_1598(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_2140(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_2140(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_2140(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_1599(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

int func_1601(int iParam0)
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

int func_1602(int iParam0)
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

void func_1603(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1604(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2141(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1605(int iParam0)
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

void func_1606()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_405())
	{
		return;
	}
	func_2142(&(Global_40.f_40));
}

void func_1607()
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

bool func_1608()
{
	return !func_406(Global_1310720->f_1);
}

int func_1609()
{
	return Global_40.f_4283.f_1;
}

int func_1610()
{
	return Global_40.f_4283.f_4;
}

void func_1611(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2143())
	{
		fVar0 = func_1075(vParam0, Global_40.f_6);
	}
	if (func_2144(33554432))
	{
		if (!func_2145(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1075(vParam0, Global_40.f_2);
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

float func_1612(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1613()
{
	if (!func_203(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2146(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2146(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2146(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2146(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2146(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2146(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2146(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2146(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2146(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2147(10f, to_float(func_2146(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2147(5f, to_float(func_2146(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2147(25f, to_float(func_2148(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2147(1f, to_float(func_2148(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2147(6f, to_float(func_2148(64058978)))));
	fVar0 = (fVar0 + (3f * func_2147(1f, to_float(func_2148(795577402)))));
	iVar1 = func_2149();
	fVar0 = (fVar0 + (0.1111111f * func_2147(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2147(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2147(to_float(20), to_float(func_2151()))));
	if (func_2152(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2152(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2152(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2152(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2152(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2150(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2147(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2147(5f, to_float(func_2148(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2147(5f, to_float(func_2146(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1683(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2153(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2147((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2147(1f, to_float(func_2154(-2116919750)))));
	fVar5 = to_float(func_2155());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2147(5f, to_float(func_2148(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2147(1f, to_float(func_2148(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2147(1f, to_float(func_2148(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2147(1f, to_float(func_2148(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2147(1f, to_float(func_2146(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2147(1f, to_float(func_2146(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2156(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_195(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_195(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_199(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2157(Global_1898330[iVar61]);
				}
				else
				{
					func_2158(iVar61, 0);
					if (func_200(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_198(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_198((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_198(&Global_1898437), &iVar9);
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

void func_1614(var uParam0, int iParam1, bool bParam2)
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

int func_1615(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1616(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2159(iParam0);
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

void func_1617(int iParam0)
{
	if (func_529(iParam0))
	{
		if (does_entity_exist(func_566(iParam0)))
		{
			func_725(iParam0, 67108864, 1);
			func_1057(iParam0, 19, 1);
		}
	}
}

float func_1618(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1619(int iParam0)
{
	iVar0 = func_566(iParam0);
	iVar1 = func_1058(iParam0, 0);
	func_2160(iParam0, iVar0);
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

bool func_1620(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1621(int iParam0)
{
	if (!func_1053(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1622(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1053(iParam0))
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

int func_1623(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1053(iParam0))
	{
		return 0;
	}
	iVar0 = func_1065(iParam0);
	if (func_832(iVar0, 0))
	{
		if (func_832(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1620(iParam0)) || func_1621(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2161(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2162(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2163(iParam0);
					_0x7b204f88f6c3d287(func_2164(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2164(iParam0, 0));
					func_2165(iParam0);
				}
			}
			else
			{
				if (func_724(iParam0, 32768, 1))
				{
					iVar2 = func_2164(iParam0, 0);
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
		if (func_832((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_724(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2163(iParam0);
				_0x7b204f88f6c3d287(func_2164(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2164(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2163(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2166(iParam0, 0);
	return 1;
}

int func_1624(int iParam0)
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

char* func_1625(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_252(37, iParam0))
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
	if (func_252(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1626(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1210(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1627(int iParam0)
{
	iParam0 = func_272(iParam0);
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

void func_1628(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1629(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1630(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1631(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1632(int iParam0, int iParam1)
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

void func_1633(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2167(bParam1);
	}
}

void func_1634(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1635(int iParam0)
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

bool func_1636(int iParam0)
{
	if (!func_1274(23, &vVar0))
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

bool func_1637(int iParam0, int iParam1, int iParam2)
{
	if (!func_1274(23, &Var0))
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

int func_1638(int iParam0)
{
	return iParam0;
}

int func_1639()
{
	iVar0 = func_1096();
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

int func_1640(int iParam0)
{
	if (!func_591(*iParam0, 0))
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

bool func_1641(int iParam0, var uParam1, bool bParam2)
{
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_702(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1133((386 + iVar29), 1);
		if (func_1134(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1135(iParam0, &Var6, iVar5);
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

int func_1642(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_591(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1136(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1037(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1644(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1645(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1037(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1646(int iParam0)
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

float func_1647(int iParam0)
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
			return func_2168(iParam0);
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
			return func_2168(iParam0);
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
			return func_2168(iParam0);
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

bool func_1648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_613(18);
		case 2:
			return func_613(20);
		case 1:
			return func_613(19);
		default:
			break;
	}
	return true;
}

int func_1649(int iParam0)
{
	return func_2169(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1650(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_613(31))
	{
		return;
	}
	iVar0 = func_1649(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1649(iParam0);
	if (func_2170(iParam0) && func_2171(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2172(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2173(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_331(func_2174(iParam0), 0);
					}
					func_2175(iParam0, iVar2, iVar3);
					func_2176(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1651(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1652(int iParam0)
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

int func_1653()
{
	return func_2177(Global_40.f_12019);
}

int func_1654()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1117(iVar1);
		if (func_353(iVar2, 1, 0) || func_1660(func_1659(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1655()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2178(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1656()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1665(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1657()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1658(int iParam0)
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

int func_1659(int iParam0)
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

bool func_1660(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1661(int iParam0)
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

int func_1662(int iParam0)
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

int func_1663(int iParam0)
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

char* func_1664(int iParam0)
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

bool func_1665(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1666(int iParam0)
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

char* func_1667(int iParam0)
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

bool func_1668(int iParam0)
{
	if (func_2179(iParam0) && func_353(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2180(iParam0) && func_2181(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1669(int iParam0)
{
	if (!func_591(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_658(iParam0));
}

int func_1670(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1671(bool bParam0)
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

void func_1672(int iParam0)
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

void func_1673(bool bParam0)
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

void func_1674(bool bParam0)
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

void func_1675(bool bParam0)
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

void func_1676(bool bParam0)
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

void func_1677(bool bParam0)
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

void func_1678(bool bParam0)
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

int func_1679(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_690(iParam0, 1)]);
}

void func_1680()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2182();
		_unlock_set_unlocked(-1526891582, true);
		func_618(-916314281);
		func_664(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_618(494733111);
		func_664(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1681(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1037(0);
	*uParam1 = { func_1136(iParam0, func_1242(0), iParam3, 0) };
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

bool func_1682(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1683(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1684(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1685(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_611(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1686(int iParam0, int iParam1)
{
	iVar1 = func_690(func_2183(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_615(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1687(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_690(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1179(524288))
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

bool func_1688(int iParam0)
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

int func_1689(int iParam0)
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

int func_1690(int iParam0)
{
	return func_2184(iParam0, -1);
}

bool func_1691(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1692(int iParam0)
{
	iVar0 = func_1036(iParam0, 1);
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

void func_1693(int iParam0)
{
	iVar0 = func_1036(iParam0, 1);
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

void func_1694()
{
	func_1693(-939420910);
	func_1693(-1187950766);
	func_1693(356365161);
	func_1693(753127042);
	func_1693(-2038424081);
	func_1693(1884271742);
	func_1693(459290420);
}

void func_1695()
{
	func_1693(704802028);
	func_1693(588987611);
	func_1693(2008888900);
	func_1693(1649996811);
	func_1693(227918160);
	func_1693(168171957);
	func_1693(1193080109);
	func_1693(-491981251);
	func_1693(-639037538);
	func_1693(-618620429);
}

bool func_1696(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1697(int iParam0)
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

void func_1698(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1699(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1700()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1701(int iParam0)
{
	func_1424(iParam0, 8, 6);
}

void func_1702(int iParam0)
{
	func_2185(&(Global_1946804->f_2589), iParam0);
}

void func_1703(int iParam0, int iParam1)
{
	func_2186(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1704(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2187(0);
	if (iParam2 != 0 && func_2188(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1233(iParam0, func_1247(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1705(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_2187(0);
	if (func_1179(32768))
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
			iVar5 = func_1247(iVar0, 1);
			if (func_1420(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1420(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1687(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2189(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1179(524288))
					{
						func_1239(524288);
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
							iVar5 = func_1247(iVar0, 1);
							if (func_1420(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1420(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1687(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1703(iVar0, iParam2);
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
					func_1708(524288);
				}
			}
		}
	}
}

void func_1706(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2190(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2191(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1726(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1726(Global_40.f_7729);
				Global_1946804->f_1378 = func_1726(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2192(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1227(0, 1);
	}
}

void func_1707(var uParam0)
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

void func_1708(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1709(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1710(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1764(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1764(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1765(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1239(8);
}

bool func_1711()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1712()
{
	fVar0 = func_2193(13);
	iVar1 = func_2194(fVar0);
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

float func_1713()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1714()
{
	if (func_344())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1715()
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

float func_1716()
{
	return Global_1955565->f_3;
}

void func_1717(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1585(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1718(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1585(iParam0, 2, 0, 0);
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

float func_1719(float fParam0, float fParam1, float fParam2)
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

bool func_1720()
{
	return func_2193(12) <= -99f;
}

bool func_1721()
{
	return func_2193(12) >= 99f;
}

int func_1722()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_615(iVar1) == -999503751)
		{
			if (func_2195() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1723(int iParam0)
{
	if (!func_1195(iParam0))
	{
		return false;
	}
	if (func_1727(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1724(int iParam0)
{
	if (!func_1195(iParam0))
	{
		return false;
	}
	if (func_1727(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1725(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1195(iParam0))
	{
		return;
	}
	if (!func_1724(iParam0))
	{
		func_1728(iParam0, 2);
		if (bParam2)
		{
			if (!func_202(0, 0, 1))
			{
				func_373(1, 4);
			}
		}
		if ((!func_219() && !bParam1) && !func_202(0, 0, 1))
		{
			func_730(_create_var_string(10, "OUT_JOURN_ADD", func_2196(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1726(int iParam0)
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

bool func_1727(int iParam0, int iParam1)
{
	if (!func_1195(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1728(int iParam0, int iParam1)
{
	if (!func_1195(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1729(int iParam0, bool bParam1)
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
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1730(int iParam0, bool bParam1)
{
	iVar0 = func_2197(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_614(50);
			}
			else
			{
				func_614(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_614(51);
			}
			else
			{
				func_614(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2198(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_645();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_645();
			}
			break;
		case 3:
			func_614(24);
			if (bParam1)
			{
				if (!func_2198(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_645();
				}
			}
			break;
	}
}

void func_1731(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2199(0))
			{
				iVar0++;
			}
			if (func_2199(2))
			{
				iVar0++;
			}
			if (func_2199(4))
			{
				iVar0++;
			}
			if (!func_2200(16))
			{
				if (iVar0 == 1)
				{
					func_2201();
					func_331(456, 1);
					func_2202(16);
				}
			}
			if (!func_2200(32))
			{
				if (iVar0 >= 3)
				{
					func_2201();
					func_331(456, 1);
					func_2202(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2199(1))
			{
				iVar0++;
			}
			if (func_2199(3))
			{
				iVar0++;
			}
			if (func_2199(7))
			{
				iVar0++;
			}
			if (!func_2200(1))
			{
				if (iVar0 == 1)
				{
					func_2203();
					func_331(457, 1);
					func_2202(1);
				}
			}
			if (!func_2200(2))
			{
				if (iVar0 >= 3)
				{
					func_2203();
					func_331(457, 1);
					func_2202(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2199(5))
			{
				iVar0++;
			}
			if (func_2199(6))
			{
				iVar0++;
			}
			if (func_2199(8))
			{
				iVar0++;
			}
			if (!func_2200(4))
			{
				if (iVar0 == 1)
				{
					func_2204();
					func_331(455, 1);
					func_2202(4);
				}
			}
			if (!func_2200(8))
			{
				if (iVar0 >= 3)
				{
					func_2204();
					func_331(455, 1);
					func_2202(8);
				}
			}
			break;
	}
}

void func_1732(var uParam0)
{
	func_1201(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1201(uParam0, 617531372);
	}
	else
	{
		func_1201(uParam0, 291123060);
	}
}

void func_1733(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2205(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1734(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1735(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_591(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_1736(int iParam0)
{
	func_686(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2206(iParam0, &uVar18);
	func_2207(iParam0, &uVar18, &iVar34, 1);
	if (func_692() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2208(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_688(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_686(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_615(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2208(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2208(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2208(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2208(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2208(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_688(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_690(func_689(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2209(&(Global_1946804->f_1616));
	func_693(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_694(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_694(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_694(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_694(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_694(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_694(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_694(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_694(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_694(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_695(&(iVar0[iVar36]), iVar35))
			{
				func_688(func_2021(iVar35), 1, 1);
				func_2210(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1761(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_696(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
							*Global_1946804->f_1497.f_1[iVar37] = { *Global_1946804->f_1616.f_1[iVar37] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36]])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1194(iParam0))
	{
		if (!func_2211(8))
		{
			if (func_692() == -2125499975)
			{
				if (bVar17)
				{
					func_693(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2212(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2213(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1194(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_693(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2212(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2213(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1194(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1194(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2023(Global_40.f_7729, 4096);
					func_1728(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1498(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26796.f_627.f_1.f_1.f_1[&iVar0[iVar36]])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_693(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_693(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*Global_1946804->f_1616.f_1[8] = { *Global_26796.f_627.f_1.f_1.f_1[8] };
	*Global_1946804->f_1616.f_1[9] = { *Global_26796.f_627.f_1.f_1.f_1[9] };
	*Global_1946804->f_1616.f_1[0] = { *Global_26796.f_627.f_1.f_1.f_1[0] };
	*Global_1946804->f_1616.f_1[2] = { *Global_26796.f_627.f_1.f_1.f_1[2] };
	*Global_1946804->f_1616.f_1[3] = { *Global_26796.f_627.f_1.f_1.f_1[3] };
	*Global_1946804->f_1616.f_1[1] = { *Global_26796.f_627.f_1.f_1.f_1[1] };
	*Global_1946804->f_1616.f_1[5] = { *Global_26796.f_627.f_1.f_1.f_1[5] };
	*Global_1946804->f_1616.f_1[6] = { *Global_26796.f_627.f_1.f_1.f_1[6] };
	*Global_1946804->f_1616.f_1[7] = { *Global_26796.f_627.f_1.f_1.f_1[7] };
	Global_26796.f_627 = Global_1946804->f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar36] = { *Global_1946804->f_1616.f_1[iVar36] };
		iVar36++;
	}
}

struct<4> func_1737()
{
	Var0 = { func_1241(0) };
	return func_1136(856287005, Var0, -218846335, 0);
}

int func_1738(int iParam0, struct<4> Param1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_591(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1642(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2214(&uVar7);
					if (func_1137(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1739(var uParam0)
{
	return uParam0->f_1;
}

void func_1740(var uParam0)
{
	func_2215(uParam0);
	func_2217(uParam0, func_2216(-1346384396));
	func_2218(uParam0, func_2216(-712836614));
	func_2219(uParam0, func_2216(-1629133289));
	func_2220(uParam0, func_2216(1302066700));
	func_2221(uParam0, func_2216(599669344));
	func_2222(uParam0, func_2216(-1555511632));
}

void func_1741(struct<6> Param0)
{
	if (!func_2223(Param0.f_4, 1))
	{
	}
	if (!func_2223(Param0, 1))
	{
	}
	if (!func_2223(Param0.f_2, 1))
	{
	}
	if (!func_2223(Param0.f_5, 1))
	{
	}
	if (!func_2223(Param0.f_3, 1))
	{
	}
	if (!func_2223(Param0.f_1, 1))
	{
	}
}

int func_1742(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_405())
	{
		if (func_310())
		{
			bVar0 = false;
			if (!func_333((*Global_1835011)[15]->f_1, 1) && !func_613(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2224();
				*iParam1 = func_2225();
				*iParam2 = func_2226();
				return 1;
			}
			else
			{
				*iParam0 = func_2227();
				*iParam1 = func_2228();
				*iParam2 = func_2229();
				return 1;
			}
		}
		else if (func_1098())
		{
			if (!func_333((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2230();
				*iParam1 = func_2231();
				*iParam2 = func_2232();
				return 1;
			}
			else
			{
				*iParam0 = func_2233();
				*iParam1 = func_2234();
				*iParam2 = func_2235();
				return 1;
			}
		}
	}
	else if (func_310())
	{
		*iParam0 = func_2236();
		*iParam1 = func_2237();
		*iParam2 = func_2238();
		return 1;
	}
	else if (func_1098())
	{
		*iParam0 = func_2239();
		*iParam1 = func_2240();
		*iParam2 = func_2241();
		return 1;
	}
	return 0;
}

void func_1743(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1744(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1745(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1746(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1747(int iParam0)
{
	iVar0 = func_2242(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1241(0) };
	if (func_2243(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1748(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2244(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1137(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1749(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1750(int iParam0, int iParam1)
{
	if (!func_591(iParam1, 0))
	{
		return 0;
	}
	if (!func_2245(iParam1))
	{
		return 0;
	}
	if (func_1747(iParam0))
	{
		return 0;
	}
	iVar0 = func_2242(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1241(0) };
	Var1.f_4 = iVar0;
	if (!func_1192(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1751(int iParam0, struct<4> Param1, bool bParam5)
{
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_591(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				{
				}
				else
				{
					{
}