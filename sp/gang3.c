void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_150 = 1;
	iLocal_151 = 2;
	iLocal_152 = 3;
	iLocal_153 = 4;
	iLocal_154 = 5;
	iLocal_155 = 6;
	iLocal_156 = 7;
	iLocal_157 = 8;
	iLocal_158 = 25;
	iLocal_159 = 1;
	iLocal_160 = 2;
	iLocal_161 = 4;
	iLocal_162 = 8;
	iLocal_163 = 16;
	iLocal_164 = 32;
	iLocal_165 = 64;
	iLocal_166 = 128;
	iLocal_167 = 256;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_2281, 1073741824);
		func_2(&uLocal_2281, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_2281);
	func_5(&uLocal_2281);
	while (!func_6(&uLocal_2281, -2147483648))
	{
		func_7(&uLocal_2281);
		wait(0);
	}
	while (!func_2(&uLocal_2281, 0))
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
	iLocal_148 = func_125(cParam0);
	iLocal_148 = iLocal_148;
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
	if (does_entity_exist(Global_35) && !is_ped_dead_or_dying(Global_35, true))
	{
		set_ped_config_flag(Global_35, 218, false);
		set_ped_config_flag(Global_35, 352, false);
		set_ped_config_flag(Global_35, 192, false);
		set_ped_config_flag(Global_35, 26, false);
		set_ped_config_flag(Global_35, 249, false);
	}
	if (func_163(&(Local_207[1]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[1]), 1f);
	}
	if (func_163(&(Local_207[0]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[0]), 1f);
	}
	if (func_163(&(Local_226[3]), 0))
	{
		freeze_entity_position(&(Local_226[3]), false);
	}
	if (func_163(iVar310, 0))
	{
		_0xf74e134f40192884(iVar310, 0);
	}
	func_164(0);
	func_165(cParam0, 1);
	func_166(1);
	func_167(1);
	func_168();
	if (func_163(&(Local_405[0]), 0) && is_entity_attached(&(Local_405[0])))
	{
		func_169();
	}
	end_srl();
	_0x2412216fcc7b4e3e(func_170(0));
	_0x2412216fcc7b4e3e(func_170(1));
	_0x19b2c7a6c34fad54(player_id(), 1f);
	release_script_audio_bank();
	func_171();
	func_172(79, 0);
	func_173();
	if (!is_player_control_on(player_id()))
	{
		if (does_entity_exist(Global_35) && !is_ped_dead_or_dying(Global_35, true))
		{
			clear_ped_tasks(Global_35, 1, 0);
		}
		set_player_control(player_id(), true, 0, false);
	}
	_0xaca45ddcef6071c4(player_id(), 1);
	func_174(0, 0, 1103626240);
	func_176(&iLocal_897, func_175(5, 4) - Vector(100f, 500f, 500f), func_175(5, 4) + Vector(100f, 500f, 500f), 0, 0);
	if (func_22(cParam0) == 0)
	{
		func_177((*Global_1835011)[cParam0->f_607]->f_1, 1);
		func_178(43, 20);
	}
	else
	{
		func_177((*Global_1835011)[cParam0->f_607]->f_1, 0);
	}
	_0x4f57397388e1dff8();
	set_random_boats(true);
	func_179(0);
	func_180();
	func_181();
	pause_clock(false, 0);
	func_182();
	func_183(1);
	func_48(16777216);
	func_184(1f);
	func_185(0);
	_0x99a6e246c315bf60(Global_35, 1f);
	_0x56e9c26cd29d1ed6(Global_35, 0);
	_0x789dabd18e9024db(Global_35, 0, 1);
	_0x7c10221ce718aa72(Global_35, 14);
	_0x0eabf182fbb63d72(Global_35, 0, 0);
	stop_ped_speaking(Global_35, false);
	func_186(1);
	set_player_can_use_cover(player_id(), true);
	display_hud(true);
	display_radar(true);
	_0x12e09e278c6c29b7(player_id());
	clear_bit(&(Global_1956580->f_1), 5);
	set_wind_speed(-1f);
	_0xa0cefcea390aab9b(0);
	func_187(0);
	func_187(1);
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
	iVar0 = func_188(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_189(iVar0);
	*uParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_191(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_192(iParam0) && !func_193(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_194(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_192(iParam0))
	{
		iParam2 = -1;
	}
	if (func_195(iParam0) == 3 || (func_195(iParam0) == 1 && _0x01f4d242765c6b24(func_194(iParam0))))
	{
		func_197(func_196(iParam0), func_194(iParam0), iParam2);
		if ((!func_191(Global_1572864->f_8) && !func_198(0, 1, 0)) && !func_199(&Global_1935630, 32768))
		{
			iVar0 = func_200(iParam0);
			if (iVar0 != -1)
			{
				func_201(0);
			}
			else if (func_196(iParam0) == 8)
			{
				iVar0 = func_202();
				if (iVar0 != -1)
				{
					func_201(0);
				}
			}
		}
	}
	func_203(iParam0, 0);
	if (func_204(0) == iParam0)
	{
		func_40(1);
		func_205(0);
		func_206(1);
	}
	func_207(iParam0, 1);
	func_208(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_209(0);
	func_210(0);
	func_64(0);
	func_65(0);
	func_211(0);
	func_212(1f);
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
		func_213();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_214())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_215())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_194(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_216(0);
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
		func_217(iVar0, iParam0);
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
		if (func_218((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_220(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_221(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_222(&(cParam0->f_13118)) >= 4000)
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
	func_223(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_191(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 != iLocal_158)
	{
		func_225(&Var0, func_224(0, func_132(iParam0)));
	}
	else
	{
		func_225(&Var0, func_226(0, 8));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_227(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_209(0);
	func_228(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_218((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_229((*uParam0)[iVar0]);
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
			func_230(iVar0, 4096);
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
		func_231(Global_1935630, 4194304);
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
	func_232();
	func_233();
	func_234();
	func_235();
}

void func_43()
{
	if (func_236())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_237(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_238();
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
	func_239(1, iParam0, iParam1);
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
	return (func_240() || func_54());
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
	func_241(uParam0);
	func_242(uParam0, 0);
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
		func_243(iVar0);
		iVar0++;
	}
	func_244();
	func_245();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_246())
	{
		if (func_247(255))
		{
			if (!func_248(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_249(Global_1894899->f_2) && func_250(Global_1894899->f_2))
		{
			func_172(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_251(16);
			}
		}
		else if (func_249(Global_1894899->f_2) && !func_252(Global_1894899->f_2, 2))
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
		func_253(16);
		func_254();
		if (bVar0)
		{
			func_253(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_255(cParam0->f_5423[iVar0]))
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
	if (func_256(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_257(cParam0->f_5421))
		{
			iVar1 = func_258(cParam0->f_5421, iVar0);
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
		if (func_259(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_260(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_261(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_262(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_263(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_264(7);
		}
		else
		{
			func_265(iVar0, 0);
		}
		func_266(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_268(iParam0, 32);
	func_269();
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
	Var0 = { func_270(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_271(iParam0) };
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
		func_211(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_211(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_272(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_218((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_219((*uParam1)[iVar0], 1);
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
	iVar0 = func_196(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_273(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_274(iVar1))
			{
				if (func_275(iVar1, 4))
				{
					func_276(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_277(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_273(iParam0);
		if (iVar3 == 59)
		{
			func_277(1);
		}
		else if (iVar3 == 61)
		{
			func_277(0);
		}
		else if (iVar3 == 83)
		{
			func_277(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_274(iVar0))
		{
			if (func_275(iVar0, 4))
			{
				if (func_275(iVar0, 16))
				{
					func_278(iVar0, 1);
				}
				if (func_275(iVar0, 8))
				{
					func_279(iVar0, 1);
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
		if (func_280(cParam0) == 0 && iVar0 == 0)
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
		func_281(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_282(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_283(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_284(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_249(iParam0))
	{
		return;
	}
	bVar0 = func_252(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_285(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_287(iParam0, func_286());
			func_288(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_289(iParam0, 67108864);
		func_287(iParam0, -15);
	}
	func_290(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_291(11);
	}
	else
	{
		func_292(11);
	}
}

void func_80(int iParam0)
{
	if (func_293(iParam0, 0))
	{
		func_294(262144, 5, 0, 1);
		func_295(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_296(101, 7, 1f, 0, 1);
			func_296(89, 7, 1f, 0, 1);
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
	if (!func_191(iParam0))
	{
		return;
	}
	if (func_297(iParam0) == 4)
	{
		func_298(iParam0, func_286());
		if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
		{
			if (bParam3)
			{
				func_203(iParam0, 6);
			}
			else
			{
				func_203(iParam0, 5);
			}
			func_208(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_196(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_299(0, 2);
		if (!bVar1 && bParam1)
		{
			func_300();
		}
	}
	else
	{
		func_205(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_301(iParam0);
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
				if (bParam1 && func_195(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_273(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_273(iParam0)]->f_8), true);
						}
					}
					else if ((func_273(iParam0) != 95 && func_273(iParam0) != 82) && !func_302((*Global_1347702)[func_273(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_273(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_273(iParam0)]->f_8), true);
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
		func_304(func_273(iParam0), iVar6, func_303());
	}
	else if (iVar0 == 8)
	{
		func_306(func_273(iParam0), iVar6, func_303(), func_305());
	}
	if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
	{
		iVar9 = func_307(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_308(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_309(func_273(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_310((iVar10 - 20), 0, iVar10);
					iVar11 = func_310((iVar11 - 10), 0, iVar11);
				}
				func_311(1);
				func_312(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_312(45, 0, 1);
				break;
			case 8:
				iVar10 = func_313(func_273(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_310((iVar10 - 20), 0, iVar10);
					iVar11 = func_310((iVar11 - 10), 0, iVar11);
				}
				func_312(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_314(func_273(iParam0)))
				{
					func_315(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_312(120, 0, 1);
				break;
			case 2:
				func_312(120, 0, 1);
				break;
			case 6:
				func_312(func_317(func_316(iParam0)), 0, 1);
				break;
			case 5:
				func_312(120, 0, 1);
				break;
		}
	}
	func_207(iParam0, 1);
	func_298(iParam0, func_286());
	func_208(iParam0);
	if ((!func_195(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_200(iParam0);
		if (iVar12 != -1)
		{
			func_201(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_202();
			if (iVar12 != -1)
			{
				func_201(0);
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
				switch (func_273(iParam0))
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
				if (func_274(func_273(iParam0)) && func_302((*Global_1347702)[func_273(iParam0)]->f_12, 4))
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
				if (func_273(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_273(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
	{
		if (bParam3)
		{
			func_203(iParam0, 6);
		}
		else
		{
			func_203(iParam0, 5);
		}
		func_208(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_273(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_318();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_319(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-1267972061);
						func_319(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(1619534881);
						func_319(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-755457379);
						func_319(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(1015404643);
						func_319(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-1724192342);
						func_319(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(1310680212);
						func_319(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-566881549);
						func_319(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-1753730528);
						func_319(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(147796381);
						func_319(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(-378547623);
						func_319(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(829545206);
						func_319(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320(891318243);
						func_319(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321();
						func_322(967523420);
						func_323();
						func_324();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_325(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_319(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_326(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_326(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_327(304805134, 1, 1);
						if (!func_328((*Global_1347702)[21]->f_15, 1))
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
						func_329();
						break;
					case 26:
						func_330();
						break;
					case 17:
						func_331(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_332())
						{
							func_333(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_334(-514575035, -1))
						{
							iVar15 = func_286();
							func_335(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_336(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_332())
						{
							func_333(1529685685);
						}
						break;
					case 34:
						if (func_332())
						{
							func_333(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_337();
						break;
					case 37:
						func_338();
						if (func_339())
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
						func_340();
						break;
					case 43:
						func_341();
						break;
					case 44:
						if (!func_328((*Global_1347702)[82]->f_15, 1))
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
						if (!func_328((*Global_1347702)[83]->f_15, 1))
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
						func_342();
						break;
					case 59:
						func_343();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_344();
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
						func_345();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_326(451, 0);
						}
						if (!func_346(-1992824800))
						{
							if (func_346(1520110311))
							{
								iVar16 = func_286();
								func_335(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_336(1937177603, iVar16, 1);
							}
						}
						if (func_347(4))
						{
							if (!func_348(684296857, 1, 0))
							{
								iVar17 = func_286();
								func_335(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_336(-1439688706, iVar17, 1);
							}
						}
						func_319(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_349(89200);
						func_349(2300);
						func_349(2300);
						break;
					case 68:
						func_350();
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
						func_351();
						func_349(-139100);
						break;
					case 69:
						if (func_328((*Global_1347702)[9]->f_15, 1))
						{
							func_349(-6000);
						}
						break;
					case 70:
						func_349(23400);
						func_349(1900);
						func_349(-15000);
						break;
					case 71:
						func_349(-5500);
						break;
				}
				break;
			case 8:
				switch (func_273(iParam0))
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
						func_352();
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
						func_353();
						break;
					case 66:
						func_354();
						func_355();
						break;
					case 67:
						if (!func_356(6))
						{
							func_357(6);
						}
						if (!func_356(3))
						{
							func_357(3);
						}
						if (func_332())
						{
							func_333(1534638301);
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
						if (func_328((*Global_1835011)[69]->f_1, 1))
						{
							func_358(0);
							func_349(40500);
						}
						else
						{
							func_358(0);
							func_349(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_273(iParam0))
				{
					case 0:
						switch (func_316(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_359(iParam0);
		func_360();
		switch (iVar0)
		{
			case 1:
				switch (func_273(iParam0))
				{
					case 4:
						func_361(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_361(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_361(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_361(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_361(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_361(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_361(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_362(iParam0);
						func_361(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_361(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_361(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_348(-2046502963, 1, 0))
						{
							func_319(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_361(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_361(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_361(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_362(iParam0) == 0)
						{
							func_361(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_361(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_302((*Global_1347702)[func_273(iParam0)]->f_12, 536870912))
				{
					func_363(11, 1);
				}
				switch (func_273(iParam0))
				{
					case 109:
						func_361(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_363(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_361(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_361(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_361(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_361(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_364(0, 10, 11, 2116153146))
				{
					func_361(iParam0, func_362(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_364(0, 7, 11, -379687487))
				{
					func_361(iParam0, func_365(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_364(0, 8, 11, -1386089015))
				{
					func_361(iParam0, func_365(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_364(0, 11, 11, -1952009645))
				{
					func_361(iParam0, func_365(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_364(0, 12, 11, 2065895756))
				{
					func_361(iParam0, func_365(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_195(iParam0) == 0)
			{
				if (func_194(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_194(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_197(func_196(iParam0), func_194(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_273(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_367(func_366(Global_1879514->f_1));
						if (iVar0 == 8 && func_273(iParam0) == 58)
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
						if (func_274(func_273(iParam0)) && func_302((*Global_1347702)[func_273(iParam0)]->f_12, 1))
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
			func_368(bParam2, iVar20);
		}
	}
	func_206(1);
	if ((bVar13 || func_129()) && (func_196(iParam0) == 1 || func_196(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_194(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_197(func_196(iParam0), func_194(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_196(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_364(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_369();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_193(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_192(iParam0))
	{
		if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
		{
			if (bParam1)
			{
				func_203(iParam0, 6);
			}
			else
			{
				func_203(iParam0, 5);
			}
			func_208(iParam0);
		}
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (func_273(iParam0))
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
			switch (func_273(iParam0))
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
	vVar2 = { func_370((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_371(vVar2, uVar1, uVar0, 0);
	func_372(vVar2);
	Global_40.f_9.f_15 = func_373(vVar2, 0);
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
	func_374();
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
	func_375(Var10, 0);
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
	if (!func_191(iParam0))
	{
		return;
	}
	if (iParam0 != func_204(0))
	{
		return;
	}
	if (func_194(iParam0) == 0)
	{
	}
	iVar0 = func_196(iParam0);
	if (func_195(iParam0) == 3)
	{
		if (func_194(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_194(iParam0)))
		{
			if (func_196(iParam0) != 1 && func_196(iParam0) != 8)
			{
				func_197(func_196(iParam0), func_194(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_208(iParam0);
	func_40(1);
	func_205(0);
	func_203(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_311(1);
			func_312(15, 0, 1);
			break;
		case 4:
			func_312(10, 0, 1);
			break;
		case 8:
			func_312(10, 0, 1);
			break;
		case 9:
			func_312(10, 0, 1);
			break;
		case 2:
			func_312(10, 0, 1);
			break;
		case 6:
			func_312(10, 0, 1);
			break;
		case 5:
			func_312(10, 0, 1);
			break;
	}
	func_206(1);
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

struct<8> func_96(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_376(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_377(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_377(&(Global_1347343->f_11), 16384);
	}
	if (func_378() >= 2)
	{
		if (!func_376(Global_1347343->f_11, 16384))
		{
			func_377(&(Global_1347343->f_11), 8);
		}
		func_212(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_231(Global_1935630, 2048);
	func_379(bParam5);
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
			func_380(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_199(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_381(cParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_382(&(uParam0->f_7375));
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
	return func_383() != -1;
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
	func_384(cParam0);
	cParam0->f_634[0] = 58706;
	cParam0->f_634[1] = 58706;
	cParam0->f_637 = 0;
	func_386(cParam0, *uParam1);
	func_387(cParam0);
}

void func_109(char[4] cParam0)
{
	func_388(cParam0, 40);
	func_103(cParam0, 1);
}

char[] func_110(int iParam0)
{
	if (!func_190(iParam0))
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
	if (!func_249(iParam0))
	{
		return false;
	}
	return func_252(iParam0, 33554432);
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
	if (!func_328((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_328((*Global_1835011)[2]->f_1, 1) && func_328((*Global_1347702)[120]->f_15, 1)) && !func_328((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_328((*Global_1835011)[37]->f_1, 1) && !func_328((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_328((*Global_1835011)[57]->f_1, 1) && !func_328((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_328((*Global_1835011)[26]->f_1, 1) && !func_328((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_328((*Global_1835011)[62]->f_1, 1) && func_328((*Global_1835011)[63]->f_1, 1)) && !func_328((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_328((*Global_1835011)[75]->f_1, 1) && !func_328((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_328((*Global_1835011)[76]->f_1, 1) && !func_328((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_328((*Global_1835011)[40]->f_1, 1) && func_328((*Global_1835011)[41]->f_1, 1)) && !func_328((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_328((*Global_1835011)[62]->f_1, 1) && func_328((*Global_1835011)[63]->f_1, 1)) && !func_328((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_328((*Global_1835011)[65]->f_1, 1) && func_328((*Global_1835011)[66]->f_1, 1)) && !func_328((*Global_1835011)[67]->f_1, 1))
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
	func_221(&(cParam0->f_603));
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
	func_410(cParam0, 2065139134, 67108863);
	func_410(cParam0, 944531097, 67108863);
	func_410(cParam0, -989609930, 67108863);
	func_410(cParam0, 1170674247, 67108863);
	func_410(cParam0, -1628389425, 67108863);
	func_410(cParam0, 474677157, 62);
	func_410(cParam0, 1836621877, 67108863);
	func_410(cParam0, 1167462574, 67108863);
	func_410(cParam0, 340021975, 67108863);
	func_410(cParam0, 2065139134, 67108863);
	func_410(cParam0, 944531097, 67108863);
	func_410(cParam0, -989609930, 67108863);
	func_410(cParam0, 1170674247, 67108863);
	func_410(cParam0, -1628389425, 67108863);
	func_410(cParam0, 474677157, 62);
}

int func_139(char[4] cParam0)
{
	func_410(cParam0, -258491284, 67108863);
	func_410(cParam0, -2049014994, iLocal_165);
	func_410(cParam0, func_411(0), iLocal_164);
	func_410(cParam0, func_411(1), iLocal_164);
	func_410(cParam0, func_411(2), (((iLocal_159 || iLocal_160) || iLocal_161) || iLocal_164));
	func_410(cParam0, func_411(3), iLocal_164);
	func_410(cParam0, func_411(4), iLocal_164);
	func_410(cParam0, 2514129, (iLocal_160 || iLocal_161));
	func_410(cParam0, 474677157, 67108863);
	func_412(cParam0, "script@story@GNG3@IG@IG_1_SadieIdles@Sadie_Idles", uLocal_293[0], iLocal_159, 0, "pbl_Idles", 0, 1);
	func_412(cParam0, "script@story@GNG3@IG@IG_2_Landing_Boat@Land_Boat", uLocal_293[1], iLocal_159, 0, "pbl_LandBoat", 0, 1);
	func_412(cParam0, "script@story@GNG3@IG@IG_4_Prison_Work@Prison_Work", uLocal_293[2], ((iLocal_160 || iLocal_161) || iLocal_162), 0, "pbl_WorkingLoop", 0, 1);
	func_412(cParam0, "script@story@gng3@leadin@mcs1@boat_placement", uLocal_293[3], (((((iLocal_159 || iLocal_160) || iLocal_161) || iLocal_162) || iLocal_163) || iLocal_164), 0, 0, 0, 1);
	func_412(cParam0, "script@story@gng3@ig@ig_10_sadie_searches@ig_10_sadie_Searches", uLocal_293[7], ((iLocal_160 || iLocal_161) || iLocal_162), 0, 0, 0, 1);
	func_412(cParam0, "script@story@gng3@ig@ig_14_release_hostage@release_hostage", uLocal_293[8], iLocal_164, 0, 0, 0, 1);
	func_412(cParam0, "script@story@GNG3@Leadout@INT@Leadout", uLocal_293[9], iLocal_159, 0, 0, 0, 1);
	func_412(cParam0, "script@story@GNG3@Leadout@mcs3@grapple_guard", uLocal_293[6], iLocal_163, 0, 0, 0, 1);
	func_412(cParam0, "script@story@gng3@leadin@mcs3@leadin", uLocal_293[5], iLocal_162, 0, "pl_idle", 0, 1);
	func_412(cParam0, "script@story@gng3@ig@ig_12_sadie_disarms_guard@ig_12_sadie_disarms_guard", uLocal_293[10], iLocal_163, 0, "pl_reveal", 0, 1);
	func_412(cParam0, "script@story@gng3@ig@ig_13_sadie_disarms_guards@sadie_disarms_guards", uLocal_293[11], iLocal_163, 0, "pl_start_loop", 0, 1);
	func_412(cParam0, "script@timelapse@buck_coyote@gng3", uLocal_293[12], iLocal_167, 2, "PBL_1", 0, 1);
	func_413(cParam0, "AMB_WANDER@UPPERBODY_IDLES@HOT@LEFT_ARM@MALE_A@IDLE_A", (iLocal_159 || iLocal_160));
	func_413(cParam0, func_414(3), iLocal_166);
	func_413(cParam0, func_414(4), iLocal_166);
	func_413(cParam0, func_414(5), iLocal_166);
	func_413(cParam0, func_414(6), iLocal_166);
	func_415(cParam0, "gang3_SadieToVantage", iLocal_160, 2, -1);
	func_415(cParam0, "gang3_Sadie_Off_Tower", iLocal_162, 2, -1);
	func_415(cParam0, "gang3_SadieToGuards", iLocal_162, 2, -1);
	func_415(cParam0, "gang3_SadieToPrison", iLocal_163, 2, -1);
	func_415(cParam0, "gang3_RouteToPrison", iLocal_163, 2, -1);
	func_415(cParam0, "gang3_RouteToBoat", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_CoverAssistRoute", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_CoverAssistRoute_2", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_FinalBoatRoute", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_BoatRoute", iLocal_165, 2, -1);
	func_415(cParam0, "gang3_RouteToCamp", iLocal_166, 2, -1);
	func_415(cParam0, "gang3_HorseWave0", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_HorseWave1", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_HorseField0", iLocal_164, 2, -1);
	func_415(cParam0, "gang3_HorseField1", iLocal_164, 2, -1);
	func_416(cParam0, -506285289, ((iLocal_159 || iLocal_160) || iLocal_161), -1, 0);
	func_417(cParam0, &(uLocal_293[0]), "pbl_TakingTooLong", iLocal_159);
	func_417(cParam0, &(uLocal_293[0]), "pbl_Idles", iLocal_159);
	func_417(cParam0, &(uLocal_293[0]), "pbl_BringUsOver", iLocal_159);
	func_417(cParam0, &(uLocal_293[1]), "pbl_LandBoat", iLocal_159);
	func_417(cParam0, &(uLocal_293[2]), "pbl_GetDown", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[2]), "pbl_BothGuardsShot", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[2]), "pbl_AttackGuard2", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[2]), "pbl_AttackGuard1", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[2]), "pbl_DownLoop", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[2]), "pbl_WorkingLoop", ((iLocal_160 || iLocal_161) || iLocal_162));
	func_417(cParam0, &(uLocal_293[7]), "pl_Action", (iLocal_160 || iLocal_161));
	func_417(cParam0, &(uLocal_293[7]), "pl_Exit", (iLocal_161 || iLocal_162));
	func_417(cParam0, &(uLocal_293[11]), "pl_start_loop", iLocal_163);
	func_417(cParam0, &(uLocal_293[11]), "pl_disarm_ko", iLocal_163);
	func_417(cParam0, &(uLocal_293[11]), "pl_react", iLocal_163);
	func_417(cParam0, &(uLocal_293[11]), "pl_surrender_loop", iLocal_163);
	func_417(cParam0, &(uLocal_293[10]), "pl_reveal", iLocal_163);
	func_417(cParam0, &(uLocal_293[10]), "pl_disarm_ko", iLocal_163);
	func_417(cParam0, &(uLocal_293[10]), "pl_surrender_loop", iLocal_163);
	func_418(cParam0, "CLIPSET@MECH_GRAPPLE@PISTOL@_MALE@_GANG3@_HEALTHY@BACK@LOCO@ATTACKER", iLocal_163);
	func_418(cParam0, "CLIPSET@MECH_GRAPPLE@PISTOL@_MALE@_AMBIENT@_HEALTHY@BACK@LOCO@ATTACKER", iLocal_163);
	func_418(cParam0, "CLIPSET@MECH_GRAPPLE@PISTOL@_MALE@_GANG3@_HEALTHY@BACK@LOCO@VICTIM", iLocal_163);
	func_418(cParam0, "CLIPSET@MECH_GRAPPLE@PISTOL@_MALE@_AMBIENT@_HEALTHY@BACK@LOCO@VICTIM", iLocal_163);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_419(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 2);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_420(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_270(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_271(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_421(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_256(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_422() };
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
	func_423(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_424(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_425(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_380(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_190(iParam0))
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
		if (func_426(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_427(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_426(cParam0, func_33(cParam0), 1))
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
	if (func_428(cParam0) < 1)
	{
		func_429(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_430(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_431(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_432(cParam0);
		}
	}
	switch (func_428(cParam0))
	{
		case -1:
		case 0:
			func_433(cParam0, 1);
			break;
		case 1:
			if (func_434(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_433(cParam0, 2);
				}
				else
				{
					func_433(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_435(cParam0))
			{
				func_433(cParam0, 3);
			}
			break;
		case 3:
			if (func_436(cParam0))
			{
				func_433(cParam0, 4);
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
		func_437(cParam0, 0);
		return true;
	}
	if (func_438(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_437(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_438(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(int iParam0, int iParam1)
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
	if (func_390(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_390(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_390(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_390(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_164(bool bParam0)
{
	if (does_entity_exist(&(Local_207[1])))
	{
		if (bParam0)
		{
			_0x1e017404784aa6a3(&(Local_207[1]), 1475229948);
		}
		else
		{
			_0x2b4ce170de09f346(&(Local_207[1]), 1475229948);
		}
	}
	if (does_entity_exist(&(Local_207[0])))
	{
		if (bParam0)
		{
			_0x1e017404784aa6a3(&(Local_207[0]), 1475229948);
		}
		else
		{
			_0x2b4ce170de09f346(&(Local_207[0]), 1475229948);
		}
	}
	_0x0d7fd6a55fd63aef(25, 3, bParam0);
	_0x0d7fd6a55fd63aef(21, 3, bParam0);
	_0x0d7fd6a55fd63aef(19, 3, bParam0);
}

void func_165(char[4] cParam0, int iParam1)
{
	cParam0->f_607 = cParam0->f_607;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _0x6f1f0b17109309da(cParam0->f_7375.f_804, func_439(&(Local_207[iVar0]))))
		{
			func_440(&(cParam0->f_7375), &(Local_207[iVar0]), 0);
		}
		func_441(cParam0, &(Local_207[iVar0]));
		iVar0++;
	}
	iParam1 = iParam1;
}

void func_166(bool bParam0)
{
	bParam0 = bParam0;
	func_442(&iLocal_309, bParam0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_entity_exist(&(Local_14.f_132[iVar0])))
		{
			func_443(&(Local_14.f_132[iVar0]), Local_14.f_131);
			set_object_as_no_longer_needed(Local_14.f_132[iVar0]);
		}
		iVar0++;
	}
}

void func_167(bool bParam0)
{
	func_444(&iLocal_917, !bParam0);
	bParam0 = bParam0;
}

void func_168()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_445(&(iLocal_918[iVar0]));
		iVar0++;
	}
}

void func_169()
{
	if (!func_446(8) && func_163(Global_35, 0))
	{
		func_447(&(Local_405[0]), 1, 1);
		clear_ped_tasks(Global_35, 1, 0);
		clear_ped_tasks(&(Local_405[0]), 1, 0);
		func_442(&iLocal_308, 1);
		set_entity_collision(&(Local_405[0]), true, false);
		set_player_can_use_cover(player_id(), true);
		set_ped_config_flag(Global_35, 249, false);
		set_ped_config_flag(Global_35, 26, false);
		set_ped_config_flag(Global_35, 192, false);
		func_186(1);
	}
}

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@Story@GNG3@mission_jump_cameras";
		case 1:
			return "script@Story@GNG3@RideBackToCamp";
		default:
			break;
	}
	return "";
}

void func_171()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_448(uLocal_912[iVar0]))
		{
			_0x9cf1836c03fb67a2(uLocal_912[iVar0], 0);
		}
		iVar0++;
	}
}

void func_172(int iParam0, int iParam1)
{
	if (!func_249(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_173()
{
	set_ambient_zone_state("AZ_sisika_penitentiary_alarms", false, true);
	_0x0f2a2175734926d8("alarm_bell", "GNG3_Sounds");
	func_449(0);
}

void func_174(int iParam0, bool bParam1, float fParam2)
{
	func_450(iParam0, bParam1, fParam2);
}

Vector3 func_175(int iParam0, int iParam1)
{
	return func_451(iParam0, iParam1);
}

void func_176(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, bool bParam8)
{
	clear_ped_non_creation_area();
	vVar0 = { func_452(vParam1, vParam4, uParam7) };
	vVar3 = { func_453(vParam1, vParam4, uParam7) };
	set_ped_paths_back_to_original(vVar0, vVar3, 0);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam8);
	}
}

void func_177(int iParam0, bool bParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = func_273(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (func_457(134, 0) && func_458(1) <= 1)
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
				if (func_459(134))
				{
					if (func_454(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						func_455(134, iVar2, 0);
					}
				}
				else
				{
					func_456(134, iVar2, 0);
				}
				if (!func_460(138) && func_459(138))
				{
					if (func_454(138, 1, 0, 0, 0))
					{
					}
					else
					{
						func_455(138, 1, 0);
					}
				}
				else
				{
					func_456(138, 1, 0);
				}
			}
			else
			{
				func_456(134, iVar2, 0);
				func_456(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (func_460(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (func_454(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_455(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_456(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
			}
			if (func_460(5) && func_461(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_454(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_455(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_456(iVar1, iVar2, bVar3);
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
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
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
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
			}
			if ((func_328((*Global_1835011)[11]->f_1, 1) && func_328((*Global_1835011)[14]->f_1, 1)) && func_328((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_454(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_455(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_456(iVar1, iVar2, bVar3);
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
		iVar5 = func_273(iParam0);
		if (iVar5 == 0)
		{
			if (func_462(15))
			{
				if (bParam1)
				{
					if (func_463(15, 0, 0))
					{
					}
				}
				else
				{
					func_464(15, 0);
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
			if (func_462(15))
			{
				if (bParam1)
				{
					if (func_463(15, 0, 0))
					{
					}
				}
				else
				{
					func_464(15, 0);
				}
			}
			if (func_462(9))
			{
				if (bParam1)
				{
					if (func_463(9, 0, 0))
					{
					}
				}
				else
				{
					func_464(9, 0);
				}
			}
			if (!func_328((*Global_1347702)[63]->f_15, 1))
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
			if (func_462(15))
			{
				if (bParam1)
				{
					if (func_463(15, 0, 0))
					{
					}
				}
				else
				{
					func_464(15, 0);
				}
			}
			if (func_462(9))
			{
				if (bParam1)
				{
					if (func_463(9, 0, 0))
					{
					}
				}
				else
				{
					func_464(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
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
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
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
			if (func_328((*Global_1835011)[6]->f_1, 1) && func_328((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (func_454(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_455(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_456(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (func_328((*Global_1835011)[9]->f_1, 1))
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
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_455(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_456(iVar1, iVar2, bVar3);
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
		if (func_454(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			func_455(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		func_456(iVar1, iVar2, bVar3);
	}
}

void func_178(int iParam0, int iParam1)
{
	Var2 = { func_94(85200619) };
	if (stat_id_get_int(&Var2, &uVar0))
	{
		iVar1 = _0x1e7384ab5d4f4581(uVar0);
		Global_40.f_9632[iParam0]->f_3 = (iVar1 + iParam1);
	}
}

void func_179(bool bParam0)
{
	if (bParam0)
	{
		func_465(2, 4, 1);
		func_465(7, 4, 1);
		func_465(14, 4, 1);
		func_465(22, 4, 1);
		func_465(18, 4, 1);
		func_465(20, 4, 1);
		func_465(21, 4, 1);
		func_465(23, 4, 1);
		func_466(4096);
	}
	else
	{
		func_467(2, 4, 1);
		func_467(7, 4, 1);
		func_467(14, 4, 1);
		func_467(22, 4, 1);
		func_467(18, 4, 1);
		func_467(20, 4, 1);
		func_467(21, 4, 1);
		func_467(23, 4, 1);
		func_48(4096);
	}
	func_465(3, 4, 1);
}

void func_180()
{
	if (_is_tracked_point_valid(iVar1017))
	{
		destroy_tracked_point(iVar1017);
	}
	if (_is_tracked_point_valid(iVar1018))
	{
		destroy_tracked_point(iVar1018);
	}
}

void func_181()
{
	if (_does_anim_scene_exist(&(uLocal_293[3])))
	{
		_delete_anim_scene(&(uLocal_293[3]));
	}
}

void func_182()
{
	if (does_entity_exist(iVar308))
	{
		if (is_entity_attached(iVar308))
		{
			detach_entity(iVar308, true, true);
		}
		delete_object(&iLocal_310);
	}
}

void func_183(bool bParam0)
{
	iVar0 = 325;
	while (iVar0 <= 344)
	{
		iVar1 = iVar0;
		if (bParam0)
		{
			func_468(iVar1);
			func_469(iVar1, 32);
		}
		else
		{
			func_470(iVar1);
			func_471(iVar1, 32);
		}
		iVar0++;
	}
}

void func_184(float fParam0)
{
	func_472(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_185(int iParam0)
{
	iVar0 = func_473(0);
	if (iParam0 == 0)
	{
		_0x6a564540fac12211(iVar0, -1415022764);
	}
	else
	{
		_0x766315a564594401(iVar0, -1415022764, 0);
	}
}

void func_186(int iParam0)
{
	if (!is_ped_injured(Global_35))
	{
		_0x6569f31a01b4c097(Global_35, 2, iParam0);
		_0x6569f31a01b4c097(Global_35, 3, iParam0);
	}
}

void func_187(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_268(iParam0, 64);
	func_269();
}

int func_188(int iParam0)
{
	return iParam0;
}

void func_189(int iParam0)
{
	if (!func_474(iParam0))
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

bool func_190(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_191(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_192(int iParam0)
{
	iVar0 = func_297(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_193(int iParam0)
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
		iVar0 = func_195(iParam0);
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

int func_194(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_475(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_196(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return func_477(func_476(iParam0));
}

void func_197(int iParam0, int iParam1, int iParam2)
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

bool func_198(int iParam0, bool bParam1, bool bParam2)
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
		if (func_478())
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
		iVar0 = func_273(&(Global_1898164->f_1[0]));
		if (func_274(iVar0) && func_302((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_191(&(Global_1898164->f_1[0])))
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

bool func_199(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_200(int iParam0)
{
	switch (func_196(iParam0))
	{
		case 1:
			iVar0 = func_273(iParam0);
			return func_479(iVar0);
		case 8:
			iVar1 = func_273(iParam0);
			if (func_302((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_480(iVar1);
			}
			break;
	}
	return -1;
}

void func_201(bool bParam0)
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
		func_481(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_482();
		Global_1898077->f_9 = func_483(Global_1894899->f_2);
		func_484(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_202()
{
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_328((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_328((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_328((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_328((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_328((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_328((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_203(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_485(iParam0, iParam1);
}

int func_204(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_205(bool bParam0)
{
	if (!bParam0 && func_486(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_206(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_207(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_204(0) != iParam0)
	{
		return;
	}
	if (func_487(iParam0))
	{
		if (bParam1)
		{
			func_488(-525676072);
		}
		else
		{
			func_489(-525676072);
		}
	}
}

int func_208(int iParam0)
{
	return func_491(func_490(iParam0));
}

void func_209(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_210(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_211(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_212(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_213()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_214()
{
	return func_492(_0xc17f69e1418cd11f(3));
}

bool func_215()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_216(int iParam0)
{
	iParam0 = func_267(iParam0);
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

int func_217(int iParam0, int iParam1)
{
	if (!func_493(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_494(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_218(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_219(char* sParam0, bool bParam1)
{
	if (func_218(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_495(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_495(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_495(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_495(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_495(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_495(sParam0, 1);
		return true;
	}
	func_495(sParam0, 1);
	return false;
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_221(var uParam0)
{
	func_496(uParam0, 0f);
}

int func_222(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_497(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_498() - round((uParam0->f_1 * 1000f)));
}

void func_223(bool bParam0, bool bParam1)
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
		func_499(0);
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

struct<4> func_224(int iParam0, int iParam1)
{
	Var0 = { func_451(iParam0, iParam1) };
	Var0.f_3 = func_500(iParam0, iParam1);
	return Var0;
}

void func_225(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

struct<4> func_226(int iParam0, int iParam1)
{
	return func_224(iParam0, iParam1);
}

int func_227(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_228(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_196(iParam0) == 1)
	{
		cVar0 = func_110(func_501(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_196(iParam0) == 8)
	{
		cVar0 = func_503(func_502(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_504(1, 1);
	func_505(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_212(1f);
}

void func_229(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_495(sParam0, 2);
}

void func_230(int iParam0, int iParam1)
{
	if (!func_506(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_232()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_233()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_234()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_235()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_236()
{
	return func_507(get_id_of_this_thread());
}

void func_237(bool bParam0)
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

void func_238()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_239(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_240()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_241(var uParam0)
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

void func_242(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_243(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_244()
{
	func_510(64);
}

void func_245()
{
	Global_1310750->f_16072 = 0;
}

bool func_246()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_247(int iParam0)
{
	return func_248(23, iParam0);
}

bool func_248(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_511(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_512())
	{
		return func_511(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_511(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_249(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_250(int iParam0)
{
	if (!func_249(iParam0))
	{
		return false;
	}
	return func_252(iParam0, 8);
}

void func_251(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_252(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_253(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_254()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_252(iVar1, 1))
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
			else if (func_252(iVar1, 2))
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
				func_289(iVar1, 11);
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

bool func_255(var uParam0)
{
	if (func_513(uParam0, 1) || func_513(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_257(struct<2> Param0)
{
	if (!func_256(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_258(struct<2> Param0, int iParam2)
{
	if (!func_256(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_259(int iParam0)
{
	if (!func_514(iParam0))
	{
		return false;
	}
	if (!func_515(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_260(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_514(iParam1))
	{
		return;
	}
	if (!func_259(iParam1))
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
		func_516(cParam0, iParam2);
		func_517(iParam2);
	}
	func_518(iParam1);
	func_519(iParam1, 0);
	func_520(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_261(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_264(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_521(iParam0);
	if (func_522(iParam0))
	{
		if (func_263(iParam0) != iVar0)
		{
			return;
		}
	}
	func_523(iParam0);
	func_524(iParam0);
	iVar1 = func_216(iParam0);
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
			if (!func_525(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_526(iParam0);
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_527(iParam0))
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_521(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_263(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_522(iVar0))
		{
			return;
		}
	}
	func_528(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_266(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_267(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_268(int iParam0, int iParam1)
{
	iParam0 = func_267(iParam0);
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

void func_269()
{
	if (func_529(0))
	{
		func_530(0);
	}
	if (func_529(1))
	{
		func_530(1);
	}
	if (func_529(5))
	{
		func_530(5);
	}
	if (func_529(6))
	{
		func_523(6);
	}
}

struct<2> func_270(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_271(int iParam0)
{
	Var0 = { func_270(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_272(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_273(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_531(func_476(iParam0));
}

bool func_274(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_275(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_276(int iParam0, bool bParam1)
{
	iVar0 = func_532(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_533(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_533(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_533(iParam0)))
			{
				_uilog_remove_entry(2, func_533(iParam0));
			}
		}
	}
	func_534(iParam0, 4);
	func_534(iParam0, 8);
	func_534(iParam0, 16);
}

void func_277(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_274(iVar0))
		{
			if (func_275(iVar0, 4))
			{
				func_278(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_278(int iParam0, bool bParam1)
{
	if (!func_275(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_532(iParam0), func_533(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_532(iParam0), func_533(iParam0), 2, "");
		func_535(iParam0, 16);
	}
	else
	{
		if (func_275(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_532(iParam0), func_533(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_532(iParam0), func_533(iParam0), 0, "");
		}
		func_534(iParam0, 16);
	}
}

void func_279(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_275(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_532(iParam0), func_533(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_275(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_532(iParam0), func_533(iParam0), 1, "");
		}
		func_535(iParam0, 8);
	}
	else
	{
		if (func_275(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_532(iParam0), func_533(iParam0), 0, "");
		}
		func_534(iParam0, 8);
	}
}

int func_280(char[4] cParam0)
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

void func_281(int iParam0, int iParam1)
{
	if (func_529(0))
	{
		if (func_536(0))
		{
			func_537(0);
		}
	}
	if (func_529(1))
	{
		if (func_536(1))
		{
			func_537(1);
		}
	}
}

void func_282(char[4] cParam0)
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
		if (func_430(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_283(char[4] cParam0)
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

void func_284(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_538(iParam0, sParam4, iParam5);
	}
	func_539(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_285(int iParam0)
{
	if (!func_249(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_286()
{
	return &Global_1899515;
}

void func_287(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_288(int iParam0, int iParam1)
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

void func_289(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_290(int iParam0)
{
	if (!func_249(iParam0))
	{
		return;
	}
	if (func_540(iParam0))
	{
		func_541(iParam0);
	}
	else
	{
		func_542(iParam0);
	}
}

int func_291(int iParam0)
{
	if (func_543(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	if (func_544(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_293(int iParam0, int iParam1)
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

void func_294(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_545(Global_1310750[iVar0], iParam0))
		{
			if (!func_546(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_547(iVar0) < func_548(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_296(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_295(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_549();
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

void func_296(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_550(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_297(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_195(iParam0);
}

void func_298(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_299(bool bParam0, int iParam1)
{
	if (!bParam0 && func_486(373691918))
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
	func_205(bParam0);
	return 1;
}

void func_300()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_514(iVar17))
		{
			iVar18 = func_551(iVar17);
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
	func_552(&(Global_1359489->f_55));
	if (func_553(1777191912, 1))
	{
		func_554(1777191912, 1, 0);
	}
}

void func_301(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_556(iParam0, (func_555(iParam0) + shift_left(1, 16)));
}

bool func_302(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_303()
{
	return func_557() > 0;
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_558(-1032423150, iParam1);
			break;
		case 18:
			func_558(294066959, iParam1);
			func_558(-1925639563, iParam1);
			func_558(-378582304, iParam1);
			func_558(-338306437, iParam1);
			break;
		case 20:
			func_558(437270255, iParam1);
			break;
		case 2:
			func_558(-304000413, iParam1);
			func_558(-533612796, iParam1);
			func_558(48036954, iParam1);
			break;
		case 23:
			func_558(193108691, iParam1);
			func_558(491732588, iParam1);
			func_558(671962088, iParam1);
			func_559(1);
			break;
		case 16:
			func_558(-1836056650, iParam1);
			func_558(-754657922, iParam1);
			func_558(-1752355838, iParam1);
			func_558(-1375324510, iParam1);
			break;
		case 59:
			func_558(-514392105, iParam1);
			func_558(-822060246, iParam1);
			if (func_560(146))
			{
				func_558(1372748575, iParam1);
			}
			func_559(1);
			break;
		case 76:
			func_558(1991352213, iParam1);
			if (func_561() == 0)
			{
				func_558(1852488616, iParam1);
			}
			else
			{
				func_558(-9866350, iParam1);
			}
			break;
		case 44:
			func_558(863852599, iParam1);
			func_558(1228374935, iParam1);
			func_558(1517889050, iParam1);
			func_558(830657578, iParam1);
			func_558(1901354958, iParam1);
			break;
		case 46:
			func_558(-582805654, iParam1);
			func_558(250378940, iParam1);
			func_558(-2143265426, iParam1);
			break;
		case 17:
			func_558(-941494139, iParam1);
			func_558(1641489521, iParam1);
			break;
		case 19:
			func_558(-1829423531, iParam1);
			func_558(-1590504752, iParam1);
			func_558(1357221321, iParam1);
			break;
		case 21:
			func_558(-1037992610, iParam1);
			func_558(-1286414399, iParam1);
			func_559(0);
			break;
		case 15:
			func_558(-1014460309, iParam1);
			func_558(-1030502825, iParam1);
			break;
		case 33:
			func_558(479388090, iParam1);
			func_558(-1396342239, iParam1);
			func_558(-619618632, iParam1);
			break;
		case 34:
			func_558(1193561641, iParam1);
			break;
		case 64:
			func_558(1363960851, iParam1);
			break;
		case 60:
			func_558(-1232453926, iParam1);
			func_558(-882833584, iParam1);
			break;
		case 73:
			func_558(2023205767, iParam1);
			break;
		case 74:
			func_558(-2135286513, iParam1);
			if (func_561() == 0)
			{
				func_558(33799444, iParam1);
			}
			else
			{
				func_558(-161343203, iParam1);
			}
			break;
		case 8:
			func_558(841639693, iParam1);
			func_558(358952323, iParam1);
			break;
		case 36:
			func_558(852538149, iParam1);
			func_558(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_558(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_558(1116039310, iParam1);
			}
			break;
		case 27:
			func_558(107633428, iParam1);
			func_558(335902282, iParam1);
			func_558(575673055, iParam1);
			func_558(-425944207, iParam1);
			break;
		case 28:
			func_558(-1941530250, iParam1);
			func_558(1399269304, iParam1);
			func_558(1839684664, iParam1);
			func_558(923168503, iParam1);
			func_558(-1485078322, iParam1);
			break;
		case 29:
			func_558(574995900, iParam1);
			func_558(-1691275407, iParam1);
			func_558(-1725307861, iParam1);
			break;
		case 31:
			func_558(-2108383238, iParam1);
			func_558(-1321828931, iParam1);
			func_558(-1632118592, iParam1);
			func_558(334938948, iParam1);
			break;
		case 4:
			func_558(115823701, iParam1);
			func_558(-1896939736, iParam1);
			func_558(-1830746356, iParam1);
			func_558(-1235169781, iParam1);
			func_559(0);
			break;
		case 6:
			func_558(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_558(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_558(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_558(-384176140, iParam1);
			}
			break;
		case 25:
			func_558(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_558(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_558(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_558(-1374849484, iParam1);
			}
			break;
		case 48:
			func_558(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_558(217772674, iParam1);
			}
			else
			{
				func_558(2071798160, iParam1);
			}
			if (func_562(51))
			{
				func_558(-792802286, iParam1);
			}
			break;
		case 49:
			func_558(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_558(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_558(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_558(1402120602, iParam1);
			}
			break;
		case 58:
			func_558(-1661934591, iParam1);
			break;
		case 50:
			func_558(-1713759426, iParam1);
			break;
		case 52:
			func_558(-314799932, iParam1);
			func_558(-462260432, iParam1);
			func_558(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_558(345256028, iParam1);
				func_558(-1635084094, iParam1);
			}
			else
			{
				func_558(114267347, iParam1);
			}
			break;
		case 32:
			func_558(615304157, iParam1);
			break;
		case 47:
			func_558(415434835, iParam1);
			break;
		case 69:
			func_558(1373465877, iParam1);
			if (func_328((*Global_1347702)[9]->f_15, 1))
			{
				func_558(-2058273527, iParam1);
			}
			break;
		case 70:
			func_558(451334985, iParam1);
			if (func_561() == 0)
			{
				func_558(-224150200, iParam1);
			}
			else
			{
				func_558(289012628, iParam1);
			}
			break;
		case 71:
			if (func_561() == 0)
			{
				func_558(-41692120, iParam1);
			}
			else
			{
				func_558(1537840678, iParam1);
			}
			break;
		case 37:
			func_558(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_558(1842132550, iParam1);
			}
			else
			{
				func_558(-785735240, iParam1);
			}
			func_558(-1605690566, iParam1);
			break;
		case 13:
			func_558(-731367459, iParam1);
			func_558(224176585, iParam1);
			func_558(-14545580, iParam1);
			break;
		case 53:
			func_558(1095274522, iParam1);
			break;
		case 54:
			func_558(-572027988, iParam1);
			break;
		case 56:
			func_558(1339307101, iParam1);
			func_558(2102267732, iParam1);
			break;
		case 57:
			func_558(710102686, iParam1);
			break;
		case 22:
			func_558(-1754368482, iParam1);
			func_558(-2071408557, iParam1);
			break;
		case 12:
			func_558(-181334543, iParam1);
			break;
		case 0:
			func_558(-2134669864, iParam1);
			func_558(-548289709, iParam1);
			func_558(-911271922, iParam1);
			func_558(-604455775, iParam1);
			break;
		case 1:
			func_559(1);
			break;
		case 3:
			if (func_339())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_558(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_558(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_305()
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

void func_306(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_558(-145926707, iParam1);
			func_558(-604922090, iParam1);
			func_558(-848690769, iParam1);
			break;
		case 1:
			func_558(-1477631591, iParam1);
			break;
		case 2:
			func_558(76112544, iParam1);
			break;
		case 9:
			func_558(1396404308, iParam1);
			func_558(-1357381228, iParam1);
			if (func_328((*Global_1835011)[69]->f_1, 1))
			{
				func_558(1902679064, iParam1);
			}
			else
			{
				func_558(-2146422425, iParam1);
			}
			break;
		case 22:
			func_558(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_558(-1934184559, iParam1);
				func_558(1281755988, iParam1);
			}
			else
			{
				func_558(-1745220872, iParam1);
				func_558(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_558(-1641504538, iParam1);
				func_558(-988014485, iParam1);
			}
			else if (func_560(26))
			{
				func_558(-343043950, iParam1);
				func_558(-640062214, iParam1);
			}
			else
			{
				func_558(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_558(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_558(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_558(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_558(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_558(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_558(1301690984, iParam1);
				}
			}
			else
			{
				func_558(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_558(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_558(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_558(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_558(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_558(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_558(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_558(-754570528, iParam1);
			}
			else
			{
				func_558(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_558(-2072125821, iParam1);
			}
			else
			{
				func_558(270040030, iParam1);
			}
			break;
		case 37:
			func_558(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_558(-505314737, iParam1);
				func_558(-1853052860, iParam1);
			}
			else
			{
				func_558(-1975624994, iParam1);
				func_558(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_558(1690231002, iParam1);
			}
			else
			{
				func_558(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_558(1225386280, iParam1);
			}
			else if (func_560(54))
			{
				func_558(-283235773, iParam1);
			}
			else
			{
				func_558(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_558(1355398007, iParam1);
			}
			else
			{
				func_558(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_558(574636806, iParam1);
			}
			else
			{
				func_558(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_558(821118338, iParam1);
			}
			else if (func_560(39))
			{
				func_558(846829260, iParam1);
			}
			else
			{
				func_558(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_362((*Global_1835011)[33]->f_1) == 1)
				{
					func_558(1422779093, iParam1);
				}
				else
				{
					func_558(-1769536986, iParam1);
				}
			}
			else
			{
				func_558(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_558(352134789, iParam1);
			}
			else if (func_560(43))
			{
				func_558(260723113, iParam1);
			}
			else
			{
				func_558(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_558(-457958799, iParam1);
			}
			else
			{
				func_558(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_560(41))
			{
				func_558(-546824600, iParam1);
			}
			else
			{
				func_558(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_558(1297261593, iParam1);
			}
			else
			{
				func_558(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_558(2068484886, iParam1);
			}
			else if (func_560(49))
			{
				func_558(-1489080639, iParam1);
				func_558(-2102244050, iParam1);
			}
			else
			{
				func_558(-1863040467, iParam1);
			}
			break;
		case 51:
			func_558(-2055943209, iParam1);
			break;
		case 58:
			if (func_328((*Global_1347702)[23]->f_15, 1))
			{
				func_558(1650066845, iParam1);
			}
			else
			{
				func_558(151370023, iParam1);
			}
			func_558(1426057961, iParam1);
			func_558(476379584, iParam1);
			break;
		case 59:
			func_558(-1638117866, iParam1);
			break;
		case 62:
			func_558(199541730, iParam1);
			break;
		case 63:
			func_558(1703485804, iParam1);
			func_558(-800449045, iParam1);
			break;
		case 65:
			func_558(-1678210868, iParam1);
			func_558(-1448238026, iParam1);
			func_558(-1200864845, iParam1);
			func_558(1473511536, iParam1);
			break;
		case 66:
			func_558(-1774490051, iParam1);
			func_558(-34645921, iParam1);
			func_558(174027075, iParam1);
			func_558(-1155999, iParam1);
			func_559(1);
			break;
		case 67:
			func_558(701612593, iParam1);
			func_558(-1069631343, iParam1);
			func_558(1673428882, iParam1);
			break;
		case 68:
			func_558(-739133286, iParam1);
			func_558(-2130089358, iParam1);
			func_558(2056190391, iParam1);
			func_558(1941753817, iParam1);
			func_559(0);
			break;
		case 70:
			func_558(-1217555753, iParam1);
			break;
		case 71:
			func_558(697048821, iParam1);
			break;
		case 73:
			func_558(-553148661, iParam1);
			break;
		case 75:
			func_558(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_558(1414263863, iParam1);
			}
			else
			{
				func_558(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_558(1835465936, iParam1);
				func_558(523715611, iParam1);
			}
			else if (func_560(78))
			{
				func_558(1420338873, iParam1);
			}
			else
			{
				func_558(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_558(10180941, iParam1);
			}
			else if (func_560(79))
			{
				func_558(768420635, iParam1);
			}
			else
			{
				func_558(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_558(-383601523, iParam1);
			}
			else
			{
				func_558(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_558(1606472408, iParam1);
			}
			else
			{
				func_558(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_558(-203571927, iParam1);
			}
			else
			{
				func_558(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_558(729886222, iParam1);
			}
			else
			{
				func_558(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_558(-714816362, iParam1);
			}
			else
			{
				func_558(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_558(-932932179, iParam1);
				func_558(-1458537240, iParam1);
			}
			else
			{
				func_558(-1764383885, iParam1);
				func_558(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_558(1741466706, iParam1);
			}
			else
			{
				func_558(1405815775, iParam1);
			}
			break;
		case 94:
			func_558(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_558(1905280979, iParam1);
			}
			else
			{
				func_558(-1966245299, iParam1);
			}
			func_558(721468880, iParam1);
			break;
		case 99:
			func_558(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_558(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_558(-1117781095, iParam1);
				}
				else
				{
					func_558(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_558(141494548, iParam1);
			}
			else
			{
				func_558(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_558(-369525697, iParam1);
			}
			else if (func_560(101))
			{
				func_558(1595015219, iParam1);
			}
			else
			{
				func_558(-321486961, iParam1);
			}
			break;
		case 103:
			func_558(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_558(793460477, iParam1);
				func_558(-1610242176, iParam1);
			}
			else if (func_560(103))
			{
				func_558(1830897187, iParam1);
			}
			else
			{
				func_558(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_558(1528309077, iParam1);
			}
			else if (func_560(104))
			{
				func_558(1864966105, iParam1);
			}
			else
			{
				func_558(-103336013, iParam1);
			}
			break;
		case 108:
			func_558(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_558(-1123227713, iParam1);
				func_558(-889574341, iParam1);
			}
			else
			{
				func_558(2065385917, iParam1);
				func_558(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_558(-887421691, iParam1);
			}
			else if (func_560(109))
			{
				func_558(-1318117949, iParam1);
			}
			else
			{
				func_558(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_558(284822762, iParam1);
				}
				else
				{
					func_558(-1425017554, iParam1);
				}
			}
			else if (func_560(110))
			{
				if (&Global_1357515 == 0)
				{
					func_558(553087292, iParam1);
				}
				else
				{
					func_558(-1766870331, iParam1);
					func_558(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_558(-1980598735, iParam1);
			}
			else
			{
				func_558(-442732098, iParam1);
				func_558(1955756409, iParam1);
			}
			break;
		case 115:
			func_558(394303528, iParam1);
			func_558(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_558(1182403394, iParam1);
			}
			else
			{
				func_558(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_558(924445424, iParam1);
			}
			else
			{
				func_558(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_558(430755273, iParam1);
				func_558(-1473879802, iParam1);
			}
			else
			{
				func_558(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_558(73885747, iParam1);
			}
			else if (func_560(117))
			{
				func_558(1559707913, iParam1);
			}
			else
			{
				func_558(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_558(-2103887972, iParam1);
			}
			else if (func_560(118))
			{
				func_558(-435828462, iParam1);
			}
			else
			{
				func_558(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_558(2054486196, iParam1);
			}
			else
			{
				func_558(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_558(-570086056, iParam1);
			}
			else if (func_560(121))
			{
				func_558(32337856, iParam1);
			}
			else
			{
				func_558(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_558(813493663, iParam1);
			}
			else if (func_560(122))
			{
				func_558(-2132763590, iParam1);
			}
			else
			{
				func_558(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_558(-66240572, iParam1);
				func_558(1563075046, iParam1);
			}
			else
			{
				func_558(-787011772, iParam1);
				func_558(-1523377438, iParam1);
			}
			break;
		case 127:
			func_558(61020800, iParam1);
			break;
		case 129:
			func_558(428985222, iParam1);
			break;
		case 131:
			func_558(-1393851036, iParam1);
			break;
		case 133:
			func_558(1559531342, iParam1);
			break;
		case 134:
			func_558(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_558(-1374407408, iParam1);
				}
				else
				{
					func_558(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_558(-472672138, iParam1);
				}
				else
				{
					func_558(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_558(-1678710489, iParam1);
			}
			else
			{
				func_558(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_558(1717582460, iParam1);
			}
			else
			{
				func_558(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_558(1568112362, iParam1);
				func_558(1388317526, iParam1);
			}
			else if (func_560(136))
			{
				func_558(-1597534828, iParam1);
				func_558(-1207918353, iParam1);
			}
			else
			{
				func_558(-1940891082, iParam1);
				func_558(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_558(448334530, iParam1);
				func_558(2145375502, iParam1);
			}
			else
			{
				func_558(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_558(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_558(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_558(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_558(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_558(-66616327, iParam1);
			}
			else
			{
				func_558(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_558(1862916706, iParam1);
			}
			else if (func_560(147))
			{
				func_558(675105199, iParam1);
			}
			else
			{
				func_558(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_558(174409701, iParam1);
			}
			else if (func_560(148))
			{
				func_558(-1730895475, iParam1);
			}
			else
			{
				func_558(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_558(1295237052, iParam1);
			}
			else if (func_560(149))
			{
				func_558(-788577684, iParam1);
			}
			else
			{
				func_558(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_307(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_196(iParam0);
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
					if (func_362((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_273(iParam0);
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
			iVar3 = func_273(iParam0);
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

int func_308(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_563(iParam0);
	iVar3 = func_564(iParam0);
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
				iVar1 = func_286();
				func_335(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_565(iParam0, 1);
			if (func_566(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_567(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_568(1, iParam0);
				}
				else
				{
					func_569(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
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

int func_310(int iParam0, int iParam1, int iParam2)
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

void func_311(bool bParam0)
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

void func_312(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_570(iParam0, iParam1, bParam2);
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

int func_313(int iParam0, int iParam1)
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

bool func_314(int iParam0)
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

void func_315(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_571(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_572(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_573(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_574(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_573(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_316(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_575(func_476(iParam0));
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_318()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_576(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_319(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (!func_578(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_579(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_580(iParam0, bParam2);
	iVar2 = 0;
	if (func_581(iParam0, 0, 0) == 0)
	{
		if (func_582(iParam0))
		{
			iVar5 = func_583(iParam0);
			iVar6 = func_584(iVar5);
			iVar7 = func_585(iVar6) + 1;
			func_586(iVar5);
			if (func_587(38))
			{
				func_326(483, 0);
			}
			else
			{
				func_326(482, 0);
			}
			if (iVar7 == func_588(iVar6))
			{
				func_319(func_589(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_394() && func_590(4))
				{
					if (func_394() && (func_591(38) || func_587(38)))
					{
						func_593(38, func_589(iVar6), 0, 0, func_592(), 0, -1, 0);
						func_594(2);
					}
					else
					{
						func_593(38, func_589(iVar6), 0, 0, func_592(), 0, -1, 0);
						func_594(1);
					}
				}
			}
			else if (func_394() && func_590(4))
			{
				if (func_394() && (func_591(38) || func_587(38)))
				{
					func_593(38, 0, 0, 0, func_592(), 0, -1, 0);
					func_594(2);
				}
				else
				{
					func_593(38, 0, 0, 0, func_592(), 0, -1, 0);
					func_594(1);
				}
			}
			if (func_394() && func_590(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_394() && (func_591(38) || func_587(38)))
					{
						func_595(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_595(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_596(iParam0) == -1037537535)
	{
		if ((!func_597(iParam0, 866047851) && !func_597(iParam0, -1979000645)) && !func_597(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_598(iParam0, 8388608) && !func_599(28))
	{
		func_600(28);
	}
	if (!bVar3)
	{
		if (func_597(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_601(iParam0) == -1447088266)
			{
				iVar1 = func_603(func_602(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_604(iVar1);
					}
					if (func_605(0) && func_606(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_607(iParam0, iVar0, iParam5);
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
						func_604(iParam0);
					}
					if (func_605(0) && func_606(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_607(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_596(iParam0) == -427144552)
		{
			if (!func_608(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_596(iParam0) == 307971639 && func_609(iParam0))
		{
			if (!func_610(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_597(iParam0, 866047851))
		{
			func_611(iParam0);
		}
		else if (func_597(iParam0, 2000026003))
		{
			func_612(iParam0);
		}
		else if (func_597(iParam0, -103750053))
		{
			func_95(func_613(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_614(-717883113, 2091222383), iVar0);
		}
		else if (func_597(iParam0, -121341956) && !func_597(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_328((*Global_1835011)[4]->f_1, 1))
				{
					func_326(498, 0);
				}
			}
			if (func_597(iParam0, -2017733358) || func_597(iParam0, -1369131378))
			{
				func_615(iParam0);
			}
		}
		else if (func_597(iParam0, -136654233))
		{
			if (func_597(iParam0, -1021472396))
			{
			}
		}
		else if (func_597(iParam0, -1466706512) && func_597(iParam0, 1147021565))
		{
			func_326(484, 0);
		}
		else if (func_597(iParam0, 1147021565) && func_597(iParam0, -524514947))
		{
		}
		else if (func_597(iParam0, 554195525))
		{
		}
		else if (func_597(iParam0, 589988438))
		{
			if (func_616())
			{
				func_617(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_597(iParam0, 787083290) && func_597(iParam0, 949916894))
		{
			func_618(iParam0);
		}
		else if (func_597(iParam0, -1718133314))
		{
			func_619(iParam0);
		}
		else if (func_597(iParam0, -1738650224))
		{
			func_620(iParam0);
		}
		else if (func_597(iParam0, -1112814642) && func_597(iParam0, 949916894))
		{
			func_621(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_597(iParam0, 1841149704))
		{
			func_622();
		}
		else if (func_597(iParam0, 606799272))
		{
			func_623(iParam0, iParam1);
			func_624(iParam0);
		}
		else if (func_597(iParam0, -1112814642) && func_597(iParam0, -1697809989))
		{
			func_625(iParam0, 0, 0, 0);
		}
		else if (func_597(iParam0, -2017733358) || func_597(iParam0, -1369131378))
		{
			func_615(iParam0);
		}
		else if (func_597(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_626(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_597(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_348(215778062, 1, 0))
					{
						func_319(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_348(670273567, 1, 0))
					{
						func_319(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_348(-967317137, 1, 0))
					{
						func_319(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_348(526074061, 1, 0))
					{
						func_319(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_348(-1045488665, 1, 0))
					{
						func_319(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_348(471514780, 1, 0))
					{
						func_319(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_597(iParam0, -839724752) && func_598(iParam0, 4))
		{
			if (!func_587(42))
			{
				func_627(iParam0);
			}
		}
		else if (func_597(iParam0, 1399091007))
		{
			func_628(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_597(iParam0, 1248798204))
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
				func_319(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_600(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_629(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_630(&iVar9, 0))
				{
					func_606(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_629(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_326(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_631();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_632();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_633();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_634();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_635();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_636(499813453, 854119837, 0);
				func_637(499813453, 0);
				func_638(1);
				break;
			case 2127812557:
				func_636(499813453, -1292544588, 0);
				func_637(499813453, 0);
				func_638(2);
				break;
			case 808991383:
				func_636(499813453, -1003325394, 0);
				func_637(499813453, 0);
				func_638(4);
				break;
			case 1134518629:
				func_636(666607663, -335460405, 0);
				func_637(666607663, 0);
				func_639(1);
				break;
			case 902940106:
				func_636(666607663, 903797617, 0);
				func_637(666607663, 0);
				func_639(2);
				break;
			case -418174898:
				func_636(666607663, 669728650, 0);
				func_637(666607663, 0);
				func_639(4);
				break;
			case -648114971:
				func_636(-220219788, 1214120047, 0);
				func_637(-220219788, 0);
				func_640(1);
				break;
			case 211153747:
				func_636(-220219788, 655769340, 0);
				func_637(-220219788, 0);
				func_640(2);
				break;
			case -32876996:
				func_636(-220219788, 885316185, 0);
				func_637(-220219788, 0);
				func_640(4);
				break;
			case 1191437462:
				func_636(218622660, -1491419385, 0);
				func_637(218622660, 0);
				func_641(1);
				break;
			case 1119149048:
				func_636(218622660, 1809565830, 0);
				func_637(218622660, 0);
				func_641(2);
				break;
			case 506073827:
				func_636(390004462, -628873767, 0);
				func_637(390004462, 0);
				func_642(1);
				break;
			case -1876986168:
				func_636(390004462, -405421956, 0);
				func_637(390004462, 0);
				func_642(2);
				break;
			case 2142623221:
				func_636(390004462, -1108972386, 0);
				func_637(390004462, 0);
				func_642(4);
				break;
			case 1508215381:
				func_636(6410548, 1053716392, 0);
				func_637(6410548, 0);
				func_643(1);
				break;
			case -888935280:
				func_636(6410548, 806507056, 0);
				func_637(6410548, 0);
				func_643(2);
				break;
			case -1252474566:
				func_636(6410548, 1571925350, 0);
				func_637(6410548, 0);
				func_643(4);
				break;
			case -1465702449:
				func_636(6410548, 1330352282, 0);
				func_637(6410548, 0);
				func_643(8);
				break;
			case -21093309:
				func_645(242, func_644(-21093309), 0);
				break;
			case 204375141:
				func_645(240, func_644(204375141), 0);
				break;
			case -417963070:
				func_645(241, func_644(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_646(594, 1934060482, 1, 1);
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
					func_646(594, 1110018439, 1, 1);
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
					func_646(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_646(594, -1228016946, 1, 1);
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
					func_646(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_646(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_326(488, 0);
				break;
			case 1613651027:
				func_326(491, 0);
				break;
			case -885810591:
				func_326(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_319(func_647(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_319(func_648(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_599(1))
				{
					func_326(487, 0);
				}
				break;
			case -898386032:
				func_326(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_326(496, 0);
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
		func_649(&iVar10);
		if (!func_650(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_605(0))
		{
			return true;
		}
		if (func_596(iParam0) == -1037537535)
		{
			func_651(iParam0);
		}
		if (func_597(iParam0, -1979000645))
		{
			func_652(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_605(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_319(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_653(iVar2, 0);
		}
	}
	Var35 = { func_654(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_655(iParam0);
	if (fParam6 > 0f)
	{
		if (func_597(iParam0, -839724752))
		{
			func_656(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_657(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_320(int iParam0)
{
	if (func_597(iParam0, 1989861793))
	{
		iVar0 = func_658(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_659(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_660(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_661(iVar14, iVar1);
					if (iVar15 != iParam0 && func_577(iVar15, 0))
					{
						if (func_662(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_663(iVar1);
				if (bVar13)
				{
					func_664(iParam0);
				}
				else
				{
					func_326(306, 0);
				}
			}
		}
	}
}

void func_321()
{
	if (func_20() != -1)
	{
		return;
	}
	func_665();
	func_666();
	func_667();
	func_668();
	func_669();
	func_670();
	func_671();
}

void func_322(int iParam0)
{
	func_672(iParam0, 1, 1, -142743235, 1);
	if (func_673(iParam0))
	{
		func_674(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_676(func_675(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_677(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_678() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_679(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_679(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_680(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_680(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_680(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_680(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_680(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_680(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_680(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_680(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_680(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_681(iVar8, iVar0))
				{
					func_682(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_681(iVar8, iVar0))
		{
			func_682(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_323()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_681(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_678() == -2125499975 || func_678() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_682(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_682(&vVar2, iVar5, iVar0);
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

void func_324()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_576(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_325(int iParam0, bool bParam1)
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
			if ((func_328((*Global_1835011)[59]->f_1, 1) || func_328((*Global_1347702)[1]->f_15, 1)) || func_192((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_553(403634348, 1))
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

void func_326(int iParam0, bool bParam1)
{
	func_683(iParam0, &iVar0, &iVar1);
	if (!func_684(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_685(iVar0, iVar1);
}

void func_327(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_676(iParam0, 1);
	func_686(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_686(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_687(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_686(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_686(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_328(int iParam0, bool bParam1)
{
	switch (func_297(iParam0))
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

void func_329()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_576(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_330()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_576(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_331(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_688(iParam1, 1, 0) };
		iParam3 = func_689(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_690(iParam3);
	return func_629(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_332()
{
	return _unlock_is_unlocked(99890643);
}

void func_333(int iParam0)
{
	if (!func_691(iParam0))
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

bool func_334(int iParam0, int iParam1)
{
	if (!func_692(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_693(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_694(Global_40.f_9910[iParam1], 4);
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_695(*iParam0);
	iVar1 = func_696(*iParam0);
	iVar2 = func_697(*iParam0);
	iVar3 = func_698(*iParam0);
	iVar4 = func_699(*iParam0);
	iVar5 = func_700(*iParam0);
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
	iVar6 = func_701(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_701(iVar1, iVar0);
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
	func_702(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_336(int iParam0, int iParam1, bool bParam2)
{
	if (!func_692(iParam0))
	{
		return;
	}
	if (!func_703(iParam1))
	{
		return;
	}
	if (func_704(iParam1, 1))
	{
		return;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_334(iParam0, -1))
	{
		return;
	}
	else
	{
		func_705(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_198(0, 0, 1))
		{
			func_368(0, 17);
		}
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_576(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_576(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_339()
{
	return _unlock_is_unlocked(-121456797);
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_576(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_576(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_576(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_576(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_576(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_576(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_346(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_347(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_348(int iParam0, int iParam1, bool bParam2)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_596(iParam0);
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
		if (!func_706(iParam0, 1))
		{
			return false;
		}
	}
	return func_581(iParam0, 0, bParam2) >= iParam1;
}

void func_349(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_707(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_707(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_576(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_576(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_576(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_576(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_354()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_576(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_355()
{
	if (func_708() > 1)
	{
		func_709();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_326(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_326(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_326(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_326(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_326(452, 1);
		}
	}
}

bool func_356(int iParam0)
{
	return func_710(iParam0, 4, 1);
}

void func_357(int iParam0)
{
	func_467(iParam0, 4, 1);
}

void func_358(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_359(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_191(iParam0))
	{
		return;
	}
	func_231(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_196(iParam0))
	{
		case 1:
			func_95(func_614(909007663, -587839005), 1);
			iVar0 = func_273(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_479(iVar0))
			{
				case 0:
					func_95(func_614(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_614(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_614(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_614(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_614(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_614(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_614(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_614(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_614(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_614(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_614(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_273(iParam0);
			if (func_302((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_302((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_302((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_614(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_614(909007663, -2049243343), 1);
				}
			}
			if (func_302((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_480(iVar1))
				{
					case 0:
						func_95(func_614(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_614(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_614(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_614(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_614(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_614(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_614(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_614(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_614(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_614(909007663, 532323983), 1);
				}
			}
			else if (func_302((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_302((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_302((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_614(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_614(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_360()
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
	else if (func_199(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_198(0, 0, 1) || func_711()) || func_129())
	{
		return;
	}
	iVar0 = func_202();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_712(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_713(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_713(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_714(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_368(0, -1);
	}
	if (iVar2 > 0)
	{
		func_715("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_716(1, 0);
	Global_1956575->f_4 = 1;
}

void func_361(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_284(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_717(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_362(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_718(iParam0);
}

int func_363(int iParam0, int iParam1)
{
	if (!func_719(iParam0))
	{
		return 0;
	}
	if (!func_394())
	{
		return 0;
	}
	if (!func_720(iParam0, &iVar0, &iVar1))
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

int func_364(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_721())
	{
		iVar2 = func_721();
	}
	iVar5 = func_722(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_476(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_476(iVar6) == 0)
			{
				return func_723(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_476(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_476(iVar6) == 0)
			{
				return func_723(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_723(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_724(1330954593, 0, -1);
		case 1:
			return func_724(1330954593, 0, -1);
		case 2:
			return func_724(1330954593, 0, -1) * 2;
		case 4:
			return func_724(1330954593, 0, -1);
		case 5:
			return func_724(1330954593, 0, -1);
		case 6:
			return func_724(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_724(1330954593, 0, -1) * 3;
		case 9:
			return func_724(1330954593, 0, -1) * 3;
		case 10:
			return func_724(1330954593, 0, -1) * 3;
		case 11:
			return func_724(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_366(int iParam0)
{
	if (!func_191(iParam0))
	{
		return cVar0;
	}
	switch (func_196(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_501(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_273(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_364(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_367(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_369();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_196(Global_1879514->f_1) == 1)
			{
				func_363(5, 1);
			}
			else if (func_196(Global_1879514->f_1) == 8 && (func_302((*Global_1347702)[func_273(Global_1879514->f_1)]->f_12, 1) || func_302((*Global_1347702)[func_273(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_363(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_368(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_725(&Global_0, 8);
	}
	if (!func_394() || func_20() != -1)
	{
		return;
	}
	func_725(&Global_0, 1);
}

int func_369()
{
	iVar0 = func_726(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_727(iVar0))
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

Vector3 func_370(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_728(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_395(vVar0))
	{
		vVar0 = { func_728(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_371(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_372(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_373(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_249(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_729(vParam0, iParam3);
}

void func_374()
{
	func_730();
	func_731();
	func_732();
	_0x11b0a0b282fa9b10(0);
}

void func_375(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_733(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_734(&(Param0.f_10)))
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
			func_735(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_376(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_377(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_378()
{
	return Global_1572864->f_12;
}

void func_379(bool bParam0)
{
	if (func_492(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_736();
	Var1.f_3.f_3 = iVar0;
	if ((!func_737(Global_1347343->f_2) && !func_376(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_738();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_376(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_739();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_376(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_740();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_741(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_742(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_377(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_377(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_380(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_743(uParam0);
	iVar0 = func_744(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_439(iParam1);
		}
		iVar0 = func_745(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_746(uParam0);
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
		iVar0 = func_746(uParam0);
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
	func_747(uParam0, 2);
}

void func_381(char[4] cParam0, int iParam1)
{
	func_748(&(cParam0->f_7375), iParam1);
}

int func_382(var uParam0)
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

int func_383()
{
	return func_501(func_749());
}

void func_384(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_396())
	{
		func_750(cParam0, iVar0);
		iVar0++;
	}
}

int func_385(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_386(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_387(char[4] cParam0)
{
	func_756(cParam0, iLocal_149, iLocal_150, 115263, 115370, 115419, 115563, 115702, "GNG3_INT", 2, -1);
	func_756(cParam0, iLocal_150, iLocal_151, 115864, 115957, 115966, 116136, 116461, "", 4, -1);
	func_756(cParam0, iLocal_151, iLocal_152, 116499, 116587, 116596, 116719, 117342, "", 0, -1);
	func_756(cParam0, iLocal_152, iLocal_153, 117397, 117580, 117693, 117775, 117978, "", 0, -1);
	func_756(cParam0, iLocal_153, iLocal_154, 117996, 118140, 118362, 118602, 119016, "GNG3_MCS3", 258, -1);
	func_756(cParam0, iLocal_154, iLocal_155, 119147, 119236, 119427, 119969, 120373, "GNG3_MCS4", 258, -1);
	func_756(cParam0, iLocal_155, iLocal_156, 120531, 120581, 120647, 121221, 121469, "GNG3_MCS1", 2, 50);
	func_756(cParam0, iLocal_156, iLocal_157, 121512, 121619, 121703, 122006, 122384, "GNG3_MCS2", 4098, -1);
	func_756(cParam0, iLocal_157, iLocal_158, 122529, 122649, 122695, 122836, 122891, "GNG3_EXT", 2, -1);
	func_756(cParam0, iLocal_158, 26, 122922, 123030, 123143, 123263, 123297, "", 0, -1);
}

void func_388(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_389(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_390(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_391(var uParam0)
{
	if (!func_802(uParam0, 4))
	{
		if (func_803(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_804(uParam0) };
		if (!func_803(uParam0->f_860, 524288))
		{
			func_805(&(uParam0->f_872));
		}
		func_806(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_807(uParam0, 0f, 0f, 0f);
		func_808(uParam0);
		func_809(uParam0);
		func_810(uParam0, 0f, 0f, 0f, 0, 0);
		func_811(uParam0);
		func_748(uParam0, 4);
		func_812(uParam0, 0);
		func_813(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_392(int iParam0)
{
	if (func_814(iParam0))
	{
		return func_815(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_393(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_504(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_816(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_817(0, 0);
		if (func_691(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_818(1, 0);
		}
	}
	else
	{
		func_818(1, 0);
	}
	func_210(0);
	func_505(0, vParam0, uParam3);
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
	if (!func_190(iParam0))
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
		func_819((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_820((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_821((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_822((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_823((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_824((*uParam0)[iVar0]);
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
		func_825((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_826((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_827((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_828((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_829((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_830(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_831(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1693870200;
		case 1:
			return -1599683008;
		case 2:
			return 1074477367;
		case 3:
			return 1072019803;
		case 4:
			return -727455979;
		default:
			break;
	}
	return -1693870200;
}

void func_412(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_832(iParam3, func_33(cParam0)) && !func_832(iParam3, func_35(cParam0)))
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
	iVar0 = func_833(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_834(&(cParam0->f_1126));
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
		func_835(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_413(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_836(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_837(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

char* func_414(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "script_story@ntv3@ig@ig12_nativewapitireaction_p2";
		case 4:
			return "script_story@ntv3@ig@ig12_nativewapitireaction_p2";
		case 5:
			return "script_story@ntv3@ig@ig12_nativewapitireaction_p3";
		case 6:
			return "script_story@ntv3@ig@ig12_nativewapitireaction_p3";
		default:
			break;
	}
	return "";
}

void func_415(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_838(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_839(&(cParam0->f_819));
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

void func_416(char[4] cParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_840(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_841(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0] = iParam1;
	cParam0->f_5188[iVar0]->f_1 = iParam3;
	cParam0->f_5188[iVar0]->f_2 = iParam4;
	cParam0->f_5188[iVar0]->f_4 = (cParam0->f_5188[iVar0]->f_4 || uParam2);
}

void func_417(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_832(iParam3, func_33(cParam0)) && !func_832(iParam3, func_35(cParam0)))
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
	iVar0 = func_842(&(cParam0->f_1126), iParam1);
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

void func_418(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_843(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_844(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0] = cParam1;
	cParam0->f_1081[iVar0]->f_2 = (cParam0->f_1081[iVar0]->f_2 || iParam2);
}

void func_419(int iParam0, int iParam1)
{
	func_845(iParam0, iParam1);
}

void func_420(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_846((*uParam0)[iVar0]))
		{
			if (func_832((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_847((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_848((*uParam1)[iVar0]))
		{
			if (func_832((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_849((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_850((*uParam2)[iVar0]))
		{
			if (func_832((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_851((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_852((*uParam3)[iVar0]))
		{
			if (func_832((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_853((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_832(uParam4->f_1, iParam12))
	{
		func_854(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_855((*uParam5)[iVar0]))
		{
			if (func_832((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_856((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_855((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_857((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_832((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_858((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_859((*uParam6)[iVar0]))
		{
			if (func_832((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_860((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_861((*uParam7)[iVar0]))
		{
			if (func_832((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_862((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_863((*uParam8)[iVar0]))
		{
			if (func_832((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_864((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_865((*uParam9)[iVar0]))
		{
			if (func_832((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_866((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_867((*uParam10)[iVar0]))
		{
			if (func_832((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_868((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_869((*uParam11)[iVar0]))
		{
			if (func_832((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_870((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_421(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_871(uParam0, iParam1, sParam2))
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

struct<2> func_422()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_423(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_425(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_872(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_380(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_426(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_873(cParam0->f_607)}, 3);
			if (func_874(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_875(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_876(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_427(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_855((*uParam0)[iVar0]))
		{
			if (func_832((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_877((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_878((*uParam0)[iVar0]))
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

int func_428(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_429(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_879(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_880(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_430(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_881(cParam0))
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
				iVar12 = func_882(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_883(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_884(iVar12))
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
		if (func_885(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_882(&iVar29, &Var18);
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
		func_886(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_884(iVar13) || func_887(Global_35, iVar13, 1, 1) > 200f) && !func_395(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_888(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_431(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_889(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_890(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_432(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_891(cParam0);
			if (func_892(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_893(cParam0, 2097152);
				func_266(cParam0, 16384);
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
			func_891(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_894(cParam0, Var0))
			{
				if (func_428(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_428(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_433(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_434(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_895(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_429(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_430(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_873(cParam0->f_607)}, 3);
		if (func_896(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_897(&(cParam0->f_13115)) < 30f)
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

bool func_435(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_897(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_898()) && func_897(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_266(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_899(0, 0);
		func_266(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_436(char[4] cParam0)
{
	func_900(cParam0);
	func_901(cParam0);
	func_902(0, 0);
	func_903();
	func_904();
	if (!func_905(cParam0, func_33(cParam0)))
	{
		return false;
	}
	if (!func_900(cParam0))
	{
		return false;
	}
	if (!func_901(cParam0))
	{
		return false;
	}
	func_906(0);
	func_906(1);
	func_907();
	func_908(3259f, -557.9f, 44.3f, 650f, 0, 0);
	func_909(cParam0);
	func_910(cParam0);
	func_911();
	func_912();
	func_914(cParam0, 139642);
	func_916(cParam0, 141205);
	func_918(cParam0, 141373);
	func_151(cParam0, Global_35, "arthur", 0, 0, 0, 0);
	func_140(cParam0, iLocal_153, 4096);
	func_140(cParam0, iLocal_155, 4096);
	iLocal_897 = func_919(func_175(5, 4) - Vector(100f, 500f, 500f), func_175(5, 4) + Vector(100f, 500f, 500f), func_175(5, 4), 500f, 0, 0);
	func_920();
	func_185(1);
	iLocal_949 = _request_metaped_outfit(1836621877, 760163859);
	if (func_33(cParam0) == iLocal_149)
	{
		func_921(-1015925347, 0, 0, 90f);
	}
	else
	{
		func_921(-1015925347, 0, 1, 1103626240);
	}
	if (func_33(cParam0) >= iLocal_150 && func_33(cParam0) <= iLocal_152)
	{
		set_wind_speed(20f);
	}
	func_179(1);
	if (func_33(cParam0) >= iLocal_150)
	{
		set_clock_time(15, 0, 0);
		pause_clock(true, 0);
	}
	func_183(0);
	if (func_33(cParam0) >= iLocal_150 && func_33(cParam0) <= iLocal_155)
	{
		set_random_boats(false);
	}
	set_ped_config_flag(Global_35, 43, false);
	return true;
}

void func_437(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_438(char[4] cParam0)
{
	func_922(cParam0);
	func_923(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_892(cParam0);
		}
	}
	func_924(cParam0);
	func_925(cParam0);
	func_926(cParam0);
	func_927(cParam0);
	func_928(cParam0);
	func_929(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_930(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_280(cParam0) == 0)
	{
		func_432(cParam0);
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
			if (func_931(cParam0, iVar0, 0))
			{
				if (func_932(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_932(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_932(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_381(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_933(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_934(cParam0);
					func_935(cParam0, iVar0, 1);
				}
				else
				{
					func_935(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_895(cParam0))
			{
				if (func_936(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_893(cParam0, 4);
					}
					func_935(cParam0, iVar0, 2);
				}
			}
			else if (func_937(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_893(cParam0, 4);
				}
				func_935(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_931(cParam0, iVar0, 2))
			{
				if (!func_938(cParam0))
				{
					func_935(cParam0, iVar0, 4);
					if (func_939(cParam0, iVar0, iVar1))
					{
						func_935(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_940(cParam0);
					func_935(cParam0, iVar0, 3);
					if (func_941(cParam0, iVar0))
					{
						func_935(cParam0, iVar0, 4);
						if (func_939(cParam0, iVar0, iVar1))
						{
							func_935(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_942(cParam0))
			{
				func_941(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_941(cParam0, iVar0))
			{
				func_935(cParam0, iVar0, 4);
				if (func_939(cParam0, iVar0, iVar1))
				{
					func_935(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_939(cParam0, iVar0, iVar1))
			{
				func_935(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_943(cParam0);
				func_944(cParam0, iVar0);
				func_945(cParam0);
				func_946(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_947(cParam0, iVar1))
					{
						func_948(cParam0, iVar1);
					}
				}
			}
			if (func_931(cParam0, iVar0, 5))
			{
				if (func_931(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_949(cParam0, func_33(cParam0));
					}
					func_950(cParam0, iVar1);
					func_923(cParam0);
					return true;
				}
				else
				{
					func_935(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_951(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_952(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_953("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_954(cParam0))
					{
						func_935(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_893(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_266(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_943(cParam0);
				func_944(cParam0, iVar0);
				func_945(cParam0);
				func_946(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_947(cParam0, func_35(cParam0)))
					{
						func_948(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_952(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_931(cParam0, iVar0, 5))
				{
					if (func_955(cParam0))
					{
						func_935(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_955(cParam0);
					func_935(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_931(cParam0, iVar0, 5);
				func_956(cParam0);
			}
			break;
		case 7:
			if (func_931(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_949(cParam0, func_33(cParam0));
				}
				func_950(cParam0, iVar1);
				func_923(cParam0);
				return true;
			}
			break;
		default:
			func_935(cParam0, iVar0, 7);
			break;
	}
	return false;
}

char* func_439(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_957(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_958(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_959(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

void func_440(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!func_960(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_961(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_804, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_804, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_804, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_804, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_804, sParam2, iParam1);
		}
	}
}

void func_441(char[4] cParam0, int iParam1)
{
	func_962(&(cParam0->f_7375), iParam1);
	func_963(&(cParam0->f_10792), iParam1);
}

void func_442(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (bParam1)
		{
			delete_object(iParam0);
		}
		else
		{
			set_object_as_no_longer_needed(iParam0);
		}
	}
}

void func_443(int iParam0, int iParam1)
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

void func_444(int* iParam0, bool bParam1)
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
		func_964(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_445(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_446(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	return (uLocal_951[iVar0] && iVar2) == iVar2;
}

void func_447(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

bool func_448(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_449(int iParam0)
{
	if (iVar956 != iParam0)
	{
		iLocal_959 = iParam0;
	}
}

void func_450(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_965(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_966(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_967();
		}
		else
		{
			func_968(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_969();
	}
}

Vector3 func_451(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2915.687f, -257.8894f, 40.8643f;
				case 1:
					return 3151.994f, -408.7002f, 41.0647f;
				case 2:
					return 3151.994f, -490.274f, 48.1959f;
				case 3:
					return 3151.969f, -490.2701f, 48.2463f;
				case 4:
					return 3226.893f, -573.4702f, 41.814f;
				case 5:
					return 3341.418f, -633.5823f, 43f;
				case 6:
					return 3137.29f, -409.1278f, 40.5f;
				case 7:
					return 2890.112f, -246.8036f, 41.481f;
				case 8:
					return 2356.286f, 1350.397f, 104.9928f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2914f, -257.7829f, 40.891f;
				case 1:
					return 3151.503f, -410.0976f, 41.078f;
				case 2:
					return 3149.852f, -490.9436f, 48.1923f;
				case 3:
					return 3151.243f, -491.108f, 48.268f;
				case 4:
					return 3225.44f, -574.0098f, 41.814f;
				case 5:
					return 3331.081f, -630.133f, 42.7f;
				case 6:
					return 3135.172f, -408.9974f, 41.0628f;
				case 7:
					return 2890.879f, -245.0602f, 41.4872f;
				case 8:
					return 2355.012f, 1351.743f, 104.9462f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3369.306f, -646.0472f, 45.636f;
				case 1:
					return 3369.334f, -645.7159f, 45.5364f;
				case 2:
					return 3369.339f, -645.6984f, 45.2864f;
				case 3:
					return 3369.431f, -646.0855f, 45.7864f;
				case 4:
					return 3369.377f, -646.002f, 45.5364f;
				case 5:
					return 3329.811f, -630.7092f, 42.7154f;
				case 6:
					return 3131.447f, -406.9728f, 41.981f;
				case 7:
					return 2890.921f, -245.0291f, 41.4858f;
				case 8:
					return 2353.554f, 1352.021f, 104.946f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2907.015f, -257.4433f, 40.8388f;
				case 1:
					return 3151.69f, -405.49f, 40.8173f;
				case 2:
					return 3151.69f, -405.49f, 40.8173f;
				case 3:
					return 3151.69f, -405.49f, 40.8173f;
				case 4:
					return 3151.69f, -405.49f, 40.8173f;
				case 5:
					return 3151.69f, -405.49f, 40.8173f;
				case 6:
					return 3151.69f, -405.49f, 40.817f;
				case 7:
					return 2905.876f, -248.2718f, 40.5887f;
				case 8:
					return 2905.894f, -248.2953f, 40.5469f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2344.724f, 1349.878f, 105.307f;
				case 1:
					return 2358.376f, 1375.712f, 105.654f;
				case 2:
					return 2359.515f, 1377.03f, 105.7312f;
				case 3:
					return 2359.759f, 1338.517f, 104.7986f;
				case 4:
					return 2369.29f, 1341.064f, 105.1301f;
				case 5:
					return 2363.479f, 1338.626f, 105.0227f;
				case 6:
					return 2362.188f, 1338.908f, 105.0673f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 3142.937f, -405.4962f, 40.7407f;
				case 1:
					return 3151.171f, -491.6702f, 48.1947f;
				case 2:
					return 3208.285f, -584.1937f, 41.7775f;
				case 3:
					return 3220.616f, -578.5389f, 42.0259f;
				case 4:
					return 3347.117f, -637.617f, 44.3401f;
				case 5:
					return 3146.956f, -406.304f, 40.9236f;
				case 6:
					return 2903.777f, -247.8066f, 40.9752f;
				case 7:
					return 2351.079f, 1352.18f, 104.913f;
				case 8:
					return 2895.488f, -246.7879f, 40.9742f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 3328.455f, -632.5963f, 42.6126f;
				case 1:
					return 3327.739f, -634.2744f, 42.6045f;
				case 2:
					return 3310.437f, -600.1161f, 42.2095f;
				case 3:
					return 3305.344f, -600.4805f, 42.1143f;
				case 4:
					return 3234.383f, -513.2373f, 41.9863f;
				case 5:
					return 3240.09f, -508.9891f, 42.1333f;
				case 6:
					return 3332.414f, -630.6164f, 42.629f;
				case 7:
					return 3329.166f, -631.5132f, 42.6203f;
				case 8:
					return 3303.715f, -601.523f, 42.2009f;
				case 9:
					return 3301.792f, -602.3265f, 42.146f;
				case 10:
					return 3232.068f, -514.7981f, 41.9717f;
				case 11:
					return 3229.048f, -519.4579f, 41.988f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 3151.489f, -415.4738f, 41.7673f;
				case 1:
					return 3152.76f, -409.966f, 41.6106f;
				case 2:
					return 3156.8f, -405.0612f, 40.666f;
				case 3:
					return 3163.183f, -398.6358f, 40.8036f;
				case 4:
					return 3156.005f, -388.9613f, 41.0282f;
				case 5:
					return 3147.597f, -419.4083f, 41.3273f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2890.161f, -246.8138f, 42.1279f;
				case 1:
					return 2890.908f, -245.0454f, 42.0818f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 3147.295f, -486.7789f, 42.1178f;
				case 1:
					return 3246.253f, -592.0275f, 42.2207f;
				case 2:
					return 3333.246f, -628.5524f, 42.6403f;
				case 3:
					return 3325.708f, -613.7052f, 43.3082f;
				case 4:
					return 3292.346f, -562.7777f, 42f;
				case 5:
					return 3244.976f, -539.1732f, 41.9778f;
				case 6:
					return 3339.173f, -673.0488f, 44.7195f;
				case 7:
					return 3337.995f, -655.461f, 44.676f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 3355.984f, -643.6658f, 50.851f;
				case 1:
					return 3339.461f, -648.1259f, 50.8509f;
				case 2:
					return 3356.799f, -646.3375f, 50.951f;
				case 3:
					return 3359.795f, -645.699f, 50.851f;
				case 4:
					return 3356.334f, -648.6714f, 44.5209f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 3328.469f, -651.7897f, 50.8555f;
				case 1:
					return 3335.248f, -651.0684f, 50.8555f;
				case 2:
					return 3339.108f, -648.3207f, 50.8555f;
				case 3:
					return 3321.575f, -653.7015f, 51.6055f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3327.475f, -632.6318f, 42.8348f;
				case 1:
					return 3326.972f, -633.9529f, 42.6329f;
				case 2:
					return 3314.502f, -603.6417f, 43.115f;
				case 3:
					return 3316.965f, -601.1099f, 43.3665f;
				case 4:
					return 3315.74f, -602.2479f, 43.343f;
				case 5:
					return 3324.913f, -610.2316f, 43.151f;
				case 6:
					return 3322.531f, -612.3309f, 43.151f;
				case 7:
					return 3331.629f, -624.9572f, 43.151f;
				case 8:
					return 3335.988f, -621.4561f, 43.151f;
				case 9:
					return 3311.943f, -655.4907f, 50.8509f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 3224.642f, -550.9028f, 41.8485f;
				case 1:
					return 3231.647f, -550.142f, 41.7857f;
				case 2:
					return 3241.778f, -538.8352f, 41.778f;
				case 3:
					return 3242.998f, -531.836f, 41.8954f;
				case 4:
					return 3233.628f, -545.7991f, 41.9045f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 3252.498f, -521.9197f, 41.8427f;
				case 1:
					return 3251.12f, -517.0648f, 41.7481f;
				case 2:
					return 3233.004f, -558.7134f, 41.9936f;
				case 3:
					return 3237.325f, -548.9829f, 41.74f;
				case 4:
					return 3242.684f, -542.8853f, 41.9416f;
				case 5:
					return 3233.485f, -566.0179f, 42.0351f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 3156.352f, -409.2256f, 45.7064f;
				case 1:
					return 1.6258f, 0.003f, 99.084f;
				case 2:
					return 3156.037f, -407.1275f, 42.7993f;
				case 3:
					return 0.1082f, 0.003f, 99.689f;
				case 4:
					return 3209.268f, -576.2525f, 42.1399f;
				case 5:
					return 3.96f, 0f, -151.817f;
				case 6:
					return 3202.974f, -579.7289f, 42.0157f;
				case 7:
					return 4.016f, 0f, -146.668f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 3341.159f, -649.5276f, 50.9165f;
				case 1:
					return 3352.706f, -644.8525f, 51.6665f;
				case 2:
					return 3349.462f, -645.4986f, 51.6707f;
				case 3:
					return 3345.057f, -646.9883f, 50.9207f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 3315.901f, -602.5363f, 43.0978f;
				case 1:
					return 3314.813f, -603.9694f, 43.098f;
				case 2:
					return 3317.369f, -601.5035f, 43.0978f;
				case 3:
					return 3317.559f, -605.8411f, 43.0994f;
				case 4:
					return 3318.383f, -603.9161f, 43.099f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 3343.899f, -636.3448f, 43.2192f;
				case 1:
					return 3339.166f, -640.827f, 43.2395f;
				case 2:
					return 3344.09f, -631.7302f, 43.0378f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 3234.595f, -527.4664f, 41.7828f;
				case 1:
					return 3233.852f, -533.9858f, 41.7258f;
				case 2:
					return 3240.141f, -524.7826f, 41.9921f;
				case 3:
					return 3237.491f, -533.3199f, 41.8911f;
				case 4:
					return 3242.571f, -527.5309f, 41.9439f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_452(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_453(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

bool func_454(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_274(iParam0))
	{
		return true;
	}
	if (!func_457(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_970(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_971((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_972(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_971((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_972(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_971((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_973(iParam0))
	{
		func_974((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_975((*Global_1347702)[iParam0]->f_15))
	{
		func_976((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_971((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_972(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_455(int iParam0, int iParam1, bool bParam2)
{
	if (func_460(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_457(iParam0, 0))
	{
		if ((bParam2 || func_302((*Global_1347702)[iParam0]->f_12, 65536)) || func_977(iParam0))
		{
			if (bParam2 && !func_971((*Global_1347702)[iParam0]->f_13, 1024))
			{
				func_972(&((*Global_1347702)[iParam0]->f_13), 1024);
			}
			func_978(&((*Global_1347702)[iParam0]->f_12), 1024);
			func_978(&((*Global_1347702)[iParam0]->f_12), 32768);
			func_979(iParam0);
		}
	}
}

void func_456(int iParam0, int iParam1, bool bParam2)
{
	if (!func_274(iParam0))
	{
		return;
	}
	func_980(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_971((*Global_1347702)[iParam0]->f_13, 1024))
	{
		func_981(&((*Global_1347702)[iParam0]->f_13), 1024);
	}
	if (func_973(iParam0))
	{
		func_982((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		func_983(iParam0, 1);
	}
}

bool func_457(int iParam0, bool bParam1)
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

int func_458(bool bParam0)
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
						if (func_302((*Global_1347702)[iVar1]->f_12, 1))
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
							if (func_190(iVar2) && !func_984(iVar2))
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

bool func_459(int iParam0)
{
	if (func_195((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_502(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_985(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

bool func_460(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_328((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_461(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_328((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_462(int iParam0)
{
	if (!func_190(iParam0))
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

bool func_463(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_190(iParam0))
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
	iVar0 = func_986(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_193(func_12(iParam0)))
	{
		func_987(iParam0, 0, 0, -1);
	}
	if (func_988(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_989(iVar0, 256);
			}
			if (bParam2)
			{
				func_989(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

void func_464(int iParam0, bool bParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	iVar0 = func_986(func_12(iParam0));
	if (func_988(iVar0) && (*Global_1835011)[iParam0]->f_71)
	{
		(*Global_1835011)[iParam0]->f_71 = 0;
	}
	if (!bParam1)
	{
		func_990(iParam0, -1, 0, 1, 0, 0, 0);
		func_13(func_12(iParam0), 1, 2);
	}
}

void func_465(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_514(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_466(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_467(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_514(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

int func_468(int iParam0)
{
	if (!func_991(iParam0))
	{
		return 0;
	}
	if (!func_993(func_992(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_994(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_994(iParam0));
	return 1;
}

void func_469(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_991(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

int func_470(int iParam0)
{
	if (!func_991(iParam0))
	{
		return 0;
	}
	if (!func_993(func_992(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_994(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_994(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_994(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_994(iParam0));
	return 1;
}

void func_471(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_991(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_472(int iParam0)
{
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_995(&iVar0))
	{
		if (Global_1934765->f_275[iVar0]->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0]->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			_0x2f9ac754fe179d58(func_996());
		}
		return;
	}
	iVar0 = func_997();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765->f_275[iVar0]->f_1 = iParam0;
	Global_1934765->f_275[iVar0] = get_id_of_this_thread();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	_0x2f9ac754fe179d58(func_996());
}

int func_473(bool bParam0)
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

bool func_474(int iParam0)
{
	return func_998(iParam0, 2);
}

int func_475(int iParam0)
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

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	return iParam0 & 31;
}

bool func_478()
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

int func_479(int iParam0)
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

int func_480(int iParam0)
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

void func_481(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_482()
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

int func_483(int iParam0)
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

void func_484(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_485(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_999(iParam0);
	}
	else
	{
		func_1000(iParam0, iParam1);
	}
	func_1001();
}

bool func_486(int iParam0)
{
	iVar0 = func_1002(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_487(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (func_273(iParam0))
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
			switch (func_273(iParam0))
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

void func_488(int iParam0)
{
	iVar2 = func_473(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_601(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1004(func_1003(iParam0), 6);
}

void func_489(int iParam0)
{
	iVar2 = func_473(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_601(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1005(func_1003(iParam0), 6);
}

int func_490(int iParam0)
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

int func_491(int iParam0)
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
	func_1006(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_492(int iParam0)
{
	return iParam0 != 0;
}

bool func_493(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_494(int iParam0, var uParam1)
{
	if (!func_493(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1007(iParam0, *uParam1, 0);
	func_1008(uParam1);
	Global_1935183->f_24 = 1;
}

void func_495(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_496(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_549() - fParam1);
	func_1009(uParam0, 1);
	func_1010(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_497(var uParam0)
{
	return func_220(*uParam0, 2);
}

int func_498()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_499(bool bParam0)
{
	if (func_1011())
	{
		Global_1357509 = 1;
	}
	if (func_1012(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

float func_500(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 272.88f;
				case 1:
					return 128.2203f;
				case 2:
					return 215.28f;
				case 3:
					return 215.84f;
				case 4:
					return 236.88f;
				case 5:
					return 33.84f;
				case 6:
					return 67.68f;
				case 7:
					return 63.9819f;
				case 8:
					return 161.6203f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 265.68f;
				case 1:
					return 141.04f;
				case 2:
					return 240.48f;
				case 3:
					return -151.74f;
				case 4:
					return 239.84f;
				case 5:
					return 36f;
				case 6:
					return -294.48f;
				case 7:
					return 64.75f;
				case 8:
					return 161.6203f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95.84f;
				case 1:
					return 15.62f;
				case 2:
					return 13.68f;
				case 3:
					return 13.62f;
				case 4:
					return 13.62f;
				case 5:
					return 20.88f;
				case 6:
					return 71.28f;
				case 7:
					return 69.6203f;
				case 8:
					return 161.6203f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -178.64f;
				case 1:
					return 212.4f;
				case 2:
					return 212.4f;
				case 3:
					return 212.4f;
				case 4:
					return 212.4f;
				case 5:
					return 212.4f;
				case 6:
					return 212.4f;
				case 7:
					return 355.6203f;
				case 8:
					return 357.6203f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 55.45f;
				case 1:
					return -393.32f;
				case 2:
					return -222f;
				case 3:
					return 229.68f;
				case 4:
					return 182.88f;
				case 5:
					return 223.2f;
				case 6:
					return 216f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 185.04f;
				case 1:
					return 242.64f;
				case 2:
					return 280.813f;
				case 3:
					return 272.8125f;
				case 4:
					return 200.1125f;
				case 5:
					return 272.1125f;
				case 6:
					return 272.1125f;
				case 7:
					return 350.1125f;
				case 8:
					return 272.1125f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 243.36f;
				case 1:
					return 250.56f;
				case 2:
					return 226.08f;
				case 3:
					return 206.64f;
				case 4:
					return 415.4554f;
				case 5:
					return 413.4554f;
				case 6:
					return 175.68f;
				case 7:
					return 234.72f;
				case 8:
					return 193.68f;
				case 9:
					return 207.36f;
				case 10:
					return 236.16f;
				case 11:
					return 234f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 39.0143f;
				case 1:
					return 419.0143f;
				case 2:
					return 65.0143f;
				case 3:
					return 81.0143f;
				case 4:
					return 180f;
				case 5:
					return 41.0143f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 64.52f;
				case 1:
					return 68.28f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 218.64f;
				case 1:
					return 10.8f;
				case 2:
					return 370.7074f;
				case 3:
					return 399.3898f;
				case 4:
					return 234.2614f;
				case 5:
					return 230.2614f;
				case 6:
					return 196.1133f;
				case 7:
					return 48.24f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 15.03f;
				case 1:
					return -12.96f;
				case 2:
					return 18f;
				case 3:
					return 391.5408f;
				case 4:
					return 91.5408f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 354.0002f;
				case 1:
					return 392.0002f;
				case 2:
					return 374.0002f;
				case 3:
					return 0.4521f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -17.9998f;
				case 1:
					return 402.0002f;
				case 2:
					return 400.0002f;
				case 3:
					return 34.0002f;
				case 4:
					return 40.0002f;
				case 5:
					return 40.2727f;
				case 6:
					return 40.2727f;
				case 7:
					return 18.2727f;
				case 8:
					return 62.2727f;
				case 9:
					return 12.24f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 256.0002f;
				case 1:
					return 236.0002f;
				case 2:
					return 246.0002f;
				case 3:
					return 320.5758f;
				case 4:
					return 33.84f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 104.0002f;
				case 1:
					return 416.0002f;
				case 2:
					return 448.0002f;
				case 3:
					return 52.0002f;
				case 4:
					return 55.526f;
				case 5:
					return 27.526f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -151.7243f;
				case 1:
					return 44.2757f;
				case 2:
					return 214.2757f;
				case 3:
					return 66.2757f;
				case 4:
					return -157.6141f;
				case 5:
					return 24.3859f;
				case 6:
					return 208.3859f;
				case 7:
					return 24.3859f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 377.0726f;
				case 1:
					return 391.0726f;
				case 2:
					return 377.0766f;
				case 3:
					return 383.0766f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 38.88f;
				case 1:
					return 40.32f;
				case 2:
					return 42.48f;
				case 3:
					return 42.48f;
				case 4:
					return 40.32f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 61.92f;
				case 1:
					return 22.32f;
				case 2:
					return 52.56f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 43.92f;
				case 1:
					return 35.28f;
				case 2:
					return 46.08f;
				case 3:
					return 36f;
				case 4:
					return 47.52f;
			}
			break;
	}
	return 0f;
}

int func_501(int iParam0)
{
	if (func_196(iParam0) == 1)
	{
		return func_273(iParam0);
	}
	return -1;
}

int func_502(int iParam0)
{
	if (func_196(iParam0) == 8)
	{
		return func_273(iParam0);
	}
	return -1;
}

char[] func_503(int iParam0)
{
	if (!func_274(iParam0))
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
		func_1013(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_286();
	}
}

void func_505(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_373(vParam1, 1);
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

bool func_511(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_512()
{
	return Global_1109400->f_245;
}

bool func_513(var uParam0, int iParam1)
{
	return func_390(uParam0->f_64, iParam1);
}

bool func_514(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_515(int iParam0)
{
	return func_710(iParam0, 16, 1);
}

void func_516(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1014(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1015(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_517(int iParam0)
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

void func_518(int iParam0)
{
	func_1016(iParam0, 8, 0);
}

void func_519(int iParam0, bool bParam1)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1018(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1016(iParam0, 1, 0);
		}
	}
	func_1016(iParam0, 16, bParam1);
}

void func_520(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_514(iParam0))
	{
		return;
	}
	if (func_515(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1019(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_519(iParam0, 0);
	func_1016(iParam0, 4, 0);
	func_518(iParam0);
	func_1020(iParam0);
	func_1021(iParam0, 37, 1);
	bVar0 = func_163(Global_1360165[iParam0], 0);
	iVar1 = func_1022(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1023(iParam0, 64, 1))
	{
		func_1021(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1021(iParam0, 33, 1);
		func_1021(iParam0, 34, 1);
		func_1024(iParam0, 1056964608, -1, 1061158912);
		func_1025(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1019(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1019(iParam0, 35, 1);
			if (bParam8)
			{
				func_1019(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1026(iParam0, 0);
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
		func_1021(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1019(iParam0, 33, 1);
		func_1025(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_552(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1019(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1027(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1023(iParam0, 45, 1))
	{
		func_1021(iParam0, 45, 1);
	}
	func_465(iParam0, 16, 1);
	func_1021(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_163(func_1028(iParam0), 0))
		{
			func_1029(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_521(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_263(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_528(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_528(iParam0);
	}
}

bool func_522(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_523(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_524(int iParam0)
{
	iParam0 = func_267(iParam0);
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

bool func_525(int iParam0)
{
	if (!func_1030(iParam0))
	{
		return false;
	}
	if (!func_332())
	{
		return true;
	}
	return false;
}

void func_526(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	func_1031(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_525(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1032(iParam0, 0);
	func_528(iParam0);
}

bool func_527(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_528(int iParam0)
{
	iParam0 = func_267(iParam0);
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

bool func_529(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_530(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_216(iParam0);
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
	if (func_1033(iParam0, 64))
	{
		func_523(iParam0);
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
	bVar3 = func_599(42);
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
				func_1034(&((*Global_1900383)[iParam0]->f_27));
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
		func_523(iParam0);
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
		if (func_1035(1) < 1)
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
		func_1036(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1033(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1037(iParam0);
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
	fVar15 = func_1038(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1039(iParam0))
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
		func_1040((*Global_1900383)[iParam0]->f_26);
		func_1041((*Global_1900383)[iParam0]->f_26);
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
	if (func_884(iVar0) && !bVar9)
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
	iVar21 = func_1035(iParam0);
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

int func_531(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_532(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_533(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_534(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_535(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_536(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_529(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
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

void func_537(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_538(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_539(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1042())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_707(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1043(iVar0);
			func_1044(iVar0, 0, 0);
		}
		func_707(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_540(int iParam0)
{
	if (!func_249(iParam0))
	{
		return false;
	}
	return func_252(iParam0, 67108864);
}

void func_541(int iParam0)
{
	StringCopy(&cVar0, func_1045(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1046(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_542(int iParam0)
{
	StringCopy(&cVar0, func_1045(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1046(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_543(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_544(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_545(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_546(int iParam0)
{
	if (!func_509(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_547(int iParam0)
{
	if (func_509(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_548(int iParam0)
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

float func_549()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_550(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1047(iParam0) == 1 && bParam7)
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

int func_551(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_552(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_553(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1048(iParam0);
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

int func_554(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_567(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_556(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_557()
{
	return Global_40.f_11095.f_35;
}

void func_558(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1049(iParam0, 0);
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
		func_559(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_559(int iParam0)
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
			func_1049(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1050(1);
	}
}

bool func_560(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_561()
{
	iVar0 = func_1051((*Global_1347702)[9]->f_15);
	iVar1 = func_1051((*Global_1835011)[69]->f_1);
	if (func_1052(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_562(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return func_328((*Global_1835011)[iParam0]->f_1, 1);
}

int func_563(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1053(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1054(iVar6);
	}
	return iVar5;
}

int func_564(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1055(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_565(int iParam0, bool bParam1)
{
	func_1056(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_566(int iParam0)
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

void func_567(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_565(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_568(2, *uParam0);
		}
		else
		{
			func_569(2, *uParam0);
		}
	}
	func_1057(uParam0);
}

void func_568(int iParam0, int iParam1)
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

void func_569(int iParam0, int iParam1)
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

void func_570(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1058(iParam0, iParam1, bParam2);
}

int func_571(int iParam0)
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

int func_572(int iParam0)
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

void func_573(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1059();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1060(iParam0);
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
	if (func_599(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1061())
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
	Global_40.f_11095.f_35 = func_310(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1059();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1062(iVar1);
		func_1064(func_1063(), 0, 4000);
		func_1065(Global_40.f_11095.f_35);
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
		func_1066(0);
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
				if (iParam0 > func_572(14))
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
					sParam4 = func_1067(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_572(4))
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
					sParam4 = func_1067(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_363(10, 1);
	}
}

void func_574(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_575(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_576(int iParam0)
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

bool func_577(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_578(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1068(iParam0) && func_1069(iParam0))
		{
			func_1070(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_579(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1071(iParam0, iParam1);
	Var0 = { func_688(iParam0, 0, 1) };
	iVar5 = func_1072(iParam0, &Var0, 0, 0);
	iVar6 = func_1073(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_597(iParam0, -2051813666))
		{
			func_326(583, 1);
		}
		else
		{
			func_326(582, 0);
		}
	}
	if (func_1074(iParam0, &Var0, *iParam1, 0, 0))
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

void func_580(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_658(iParam0, -949239683))
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

int func_581(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_596(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1075(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1076(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_473(bParam2), iParam0, 0);
	return iVar2;
}

bool func_582(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_583(iParam0) != 0;
}

int func_583(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1077())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1078(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_584(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_585(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1077())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_584(iVar0))
		{
			if (func_348(func_1078(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_586(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1079(48);
	func_368(0, -1);
}

bool func_587(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_328((*Global_1347702)[iParam0]->f_15, 1);
}

int func_588(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_589(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_590(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_328((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_591(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_192((*Global_1347702)[iParam0]->f_15);
}

int func_592()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_348(func_1080(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_593(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_394() && (func_591(38) || func_587(38)))
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
			if (func_394() && (func_591(39) || func_587(39)))
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
			iVar9 = func_1081(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_394() && (func_591(41) || func_587(41)))
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
			if (func_394() && (func_591(49) || func_587(49)))
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
			iVar9 = func_1081(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1082(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1083(iParam0, iVar13, iVar14))
	{
	}
	if (func_1084(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1085(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1086(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1087(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1088(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_594(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_595(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_394() && (func_591(38) || func_587(38)))
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
			if (func_394() && (func_591(39) || func_587(39)))
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
			if (func_394() && (func_591(49) || func_587(49)))
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
		if (func_394() && (func_591(38) || func_587(38)))
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
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_713(_create_var_string(2, sVar0), _create_var_string(2, func_1090(func_589(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_394() && (func_591(39) || func_587(39)))
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
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_394() && (func_591(49) || func_587(49)))
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
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1089(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_596(int iParam0)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_597(int iParam0, int iParam1)
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

bool func_598(int iParam0, int iParam1)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_599(int iParam0)
{
	if (!func_1091(iParam0))
	{
		return false;
	}
	return func_1092(iParam0);
}

void func_600(int iParam0)
{
	if (!func_1091(iParam0))
	{
		return;
	}
	func_1093(iParam0);
	func_1094(iParam0);
}

int func_601(int iParam0)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_602(int iParam0, bool bParam1)
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
	if (func_577(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1095(iVar0) || func_122(iVar0))
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

int func_603(int iParam0, bool bParam1)
{
	if (!func_577(iParam0, 0))
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

void func_604(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_691(iParam0))
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

bool func_605(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_473(bParam0));
}

bool func_606(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_688(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1096((386 + iVar28), 1);
			if (func_1097(iParam0, &Var0, iVar5, 0))
			{
				if (func_1098(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1099(iParam0, Var0, iVar5, 0) };
					func_1100(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_605(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_607(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1101(iParam0, iParam1);
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

bool func_607(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_609(iParam0))
	{
		return false;
	}
	if (!func_605(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_608(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_603(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_604(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1102(iVar0);
			}
		}
		if (!func_1074(iParam0, &uVar1, 1, 0, 0))
		{
			func_1070(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1103(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_606(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_606(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_606(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1061())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1104(iVar0))
				{
					func_606(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_606(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1105(Global_35, 2, 0, 1);
				if ((((func_691(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_599(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_691(iVar7) && func_599(24))
				{
					if (!func_606(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_606(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_606(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_326(480, 1);
	}
	return true;
}

bool func_609(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_610(int iParam0, int iParam1, int iParam2)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_691(iVar4))
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
	if (func_348(611073244, 1, 0) && iParam2 == -897553835)
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
		func_645(func_1106(iParam0), func_644(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_328((*Global_1835011)[14]->f_1, 1))
			{
				func_326(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_605(0))
	{
		if (func_607(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_650(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_611(int iParam0)
{
	if ((iParam0 == -615217896 && !func_339()) || iParam0 != -615217896)
	{
		if (func_1107(Global_35, iParam0, &uVar0))
		{
			func_629(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_635();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_635();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_635();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_633();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_631();
			break;
	}
}

void func_612(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_631();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_632();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_633();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_634();
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
			func_635();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1108();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1109();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_613(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_614(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_615(int iParam0)
{
	bVar0 = func_597(iParam0, -2017733358);
	if (func_1110() < 3)
	{
		if (bVar0)
		{
			if (func_1112(func_1111(iParam0), iParam0))
			{
				func_645(79, func_644(func_1111(iParam0)), 1);
			}
			else
			{
				func_645(78, func_644(func_1111(iParam0)), 1);
			}
		}
		else
		{
			func_645(80, func_644(func_1113(iParam0)), 1);
		}
	}
}

bool func_616()
{
	if (((((func_1114(839908568, 400) || func_1114(-1134030454, 400)) || func_1114(623353496, 400)) || func_1114(-344413337, 400)) || func_1114(-1664948962, 400)) || func_1114(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_617(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_724(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_538(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_539(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_618(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_593(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_595(51, 0, 0, 0, 0, -1, 0);
			func_1115(8192);
			break;
		case 581047644:
			func_593(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_595(51, 0, 0, 0, 0, -1, 0);
			func_1115(524288);
			break;
		case -644199619:
			func_593(39, 0, 0, 0, 0, 0, 1, 0);
			func_595(39, 0, 0, 0, 0, -1, 0);
			func_1116(16);
			break;
		case 684296857:
			func_593(41, 0, 0, 0, 0, 0, 1, 0);
			func_595(41, 0, 0, 0, 0, -1, 0);
			func_1117(8);
			break;
		case 466137807:
			func_593(49, 0, 0, 0, 0, 0, 1, 0);
			func_595(49, 0, 0, 0, 0, -1, 0);
			func_1118(16);
			break;
		case -1087522507:
			func_593(43, 0, 0, -1791518714, func_1119(1), 0, -1, 0);
			func_1120(1);
			break;
		case -405829000:
			func_593(43, 0, 0, -2087881550, func_1119(2), 0, -1, 0);
			func_1120(2);
			break;
		case 378660860:
			func_593(43, 0, 0, 1908068621, func_1119(4), 0, -1, 0);
			func_1120(4);
			break;
		case 1566111097:
			func_593(43, 0, 0, 1611247019, func_1119(8), 0, -1, 0);
			func_1120(8);
			break;
		case 1276007140:
			func_593(43, 0, 0, 1319635688, func_1119(16), 0, -1, 0);
			func_1120(16);
			break;
	}
}

void func_619(int iParam0)
{
	if (func_1121() == 1)
	{
		if (func_587(39))
		{
			func_326(342, 0);
		}
		else
		{
			func_326(343, 0);
			func_1116(1);
		}
	}
	if (func_1121() >= 30)
	{
		func_326(344, 0);
	}
	func_593(39, 0, 0, 0, 0, 0, -1, 0);
	func_595(39, 0, 0, func_1121(), 30, 1, 0);
}

void func_620(int iParam0)
{
	if (func_1122() == 1)
	{
		if (func_587(49))
		{
			func_326(409, 0);
		}
		else
		{
			func_326(410, 0);
			func_1118(1);
		}
	}
	if (func_1122() >= 10)
	{
		func_326(411, 0);
	}
	func_593(49, 0, 0, 0, 0, 0, -1, 0);
	func_595(49, 0, 0, func_1122(), 10, 1, 0);
}

void func_621(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_326(437, 0);
			func_326(440, 0);
			func_1123(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_593(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_595(51, 0, 0, sVar0, func_1081(-949689219, 20), 1, 0);
			func_1115(1);
			func_1124(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1123(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_593(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_595(51, 0, 0, sVar0, func_1081(-1248968496, 20), 1, 0);
			func_1115(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1123(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_593(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_595(51, 0, 0, sVar0, func_1081(1706369307, 20), 1, 0);
			func_1115(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1123(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_593(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_595(51, 0, 0, sVar0, func_1081(1520110311, 20), 1, 0);
			func_1115(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_326(438, 0);
			func_1123(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_593(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_595(51, 0, 0, sVar0, func_1081(-1992824800, 20), 1, 0);
			func_1115(32768);
			break;
		default:
			func_326(439, 0);
			break;
	}
}

void func_622()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_623(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_587(43))
		{
			if (iParam0 == 281887510)
			{
				func_326(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_326(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_326(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_326(400, 0);
			}
		}
		else if (func_597(iParam0, 412399755))
		{
			func_1125(-1791518714);
			if (func_1126() == 0)
			{
				func_368(0, 10);
				iVar1 = func_1127(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_587(44))
		{
			if (iParam0 == -222563712)
			{
				func_326(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_326(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_326(401, 0);
			}
		}
		else if (func_597(iParam0, 709057512))
		{
			func_1125(-2087881550);
			if (func_1126() == 1)
			{
				func_368(0, 10);
				iVar1 = func_1127(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_587(45))
		{
			if (iParam0 == 2116770557)
			{
				func_326(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_326(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_326(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_326(398, 0);
			}
		}
		else if (func_597(iParam0, -1478961327))
		{
			func_1125(1908068621);
			if (func_1126() == 2)
			{
				func_368(0, 10);
				iVar1 = func_1127(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1130(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1131(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1079(48);
					}
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_587(46))
		{
			if (iParam0 == 2085530337)
			{
				func_326(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_326(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_326(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_326(406, 0);
			}
		}
		else if (func_597(iParam0, -1238404098))
		{
			func_1125(1611247019);
			if (func_1126() == 3)
			{
				func_368(0, 10);
				iVar1 = func_1127(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_587(47))
		{
			if (iParam0 == -1521783510)
			{
				func_326(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_326(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_326(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_326(403, 0);
			}
		}
		else if (func_597(iParam0, 1160548794))
		{
			func_1125(1319635688);
			if (func_1126() == 4)
			{
				func_368(0, 10);
				iVar1 = func_1127(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1128(iParam0) < func_1129(iParam0))
					{
						func_593(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_595(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_624(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1130(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1131(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1079(48);
		}
	}
}

void func_625(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_348(func_1132(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1133(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1134(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_626(int iParam0, int iParam1, int iParam2)
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
				func_617(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_617(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_617(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_617(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_617(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_617(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_617(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_617(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_617(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_617(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_617(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_617(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_617(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1135())
			{
				func_617(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_617(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_617(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_617(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_617(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_617(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_617(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_617(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_617(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_617(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_617(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_617(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_617(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_627(int iParam0)
{
	if (func_587(41))
	{
		func_326(363, 0);
	}
	else
	{
		func_326(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1136(-1865241121);
			func_1137(-642026005);
			func_1138(-642026005);
			func_368(0, 10);
			break;
		case -2108314374:
			func_1136(2117142684);
			func_1137(-940584364);
			func_1138(-940584364);
			func_368(0, 10);
			break;
		case -1193798153:
			func_1136(-1409326024);
			func_1137(1972645282);
			func_1138(1972645282);
			func_368(0, 10);
			break;
		case -787702678:
			func_1136(-641744968);
			func_1137(1667205433);
			func_1138(1667205433);
			func_368(0, 10);
			break;
		case -804542901:
			func_1136(-946988203);
			func_1137(1362715885);
			func_1138(1362715885);
			func_368(0, 10);
			break;
		case -1696275132:
			func_1136(-646136018);
			func_1137(1053540370);
			func_1138(1053540370);
			func_368(0, 10);
			break;
		case -161595323:
			func_1136(-955835837);
			func_1137(-1100103852);
			func_1138(-1100103852);
			func_368(0, 10);
			break;
		case -1114363619:
			func_1136(-179276075);
			func_1137(-1409869209);
			func_1138(-1409869209);
			func_368(0, 10);
			break;
		case -368407134:
			func_1136(-492711560);
			func_1137(-1760235357);
			func_1138(-1760235357);
			func_368(0, 10);
			break;
		case 1997759228:
			func_1136(1764383959);
			func_1137(-138366827);
			func_1138(-138366827);
			func_368(0, 10);
			break;
		case 1265573293:
			func_1136(317501533);
			func_1137(-1261163843);
			func_1138(-1261163843);
			func_368(0, 10);
			break;
		case -1030441283:
			func_1136(817753087);
			func_1137(-963523016);
			func_1138(-963523016);
			func_368(0, 10);
			break;
		case -1490884871:
			func_1136(576606016);
			func_1137(560825326);
			func_1138(560825326);
			func_368(0, 10);
			break;
		case -395458616:
			func_1136(814934957);
			func_1137(858269539);
			func_1138(858269539);
			break;
	}
}

void func_628(int iParam0, int iParam1)
{
	func_1139(iParam0, iParam1, &uVar0);
}

int func_629(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_688(iParam1, 1, 0) };
		iParam3 = func_689(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1140(iParam1, iParam2, func_676(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1141(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_676(iParam3, 1)])
			{
				func_687(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1142(32768) && iParam1 != &Global_1946804->f_57[func_676(iParam3, 1)])
			{
				func_1143();
				func_687(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_687(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1144(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_687(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1145(0);
			func_1146(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_687(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_630(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1105(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1105(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1147("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1148(&Var3, iVar2, iVar0, iVar1))
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
						func_1149(iVar0);
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

void func_631()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_632()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_633()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_634()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_635()
{
	func_1150();
	func_1151();
	func_1152();
}

void func_636(int iParam0, int iParam1, bool bParam2)
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

void func_637(int iParam0, bool bParam1)
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
	func_1089(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_638(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_639(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_640(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_641(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_642(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_643(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_644(int iParam0)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_645(int iParam0, int iParam1, bool bParam2)
{
	func_683(iParam0, &iVar0, &iVar1);
	if (!func_684(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1153(iParam0, 1024))
	{
		return;
	}
	func_685(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_646(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_683(iParam0, &iVar0, &iVar1);
	if (!func_684(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1153(iParam0, 1024))
	{
		return;
	}
	func_685(iVar0, iVar1);
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

int func_647()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1077())
	{
		return func_648();
	}
	iVar4 = (func_1077() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1077())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1154(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1078(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_648()
{
	iVar0 = get_random_int_in_range(0, func_1077());
	return func_1078(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_649(int iParam0)
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

bool func_650(int iParam0, int iParam1, int iParam2)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_688(iParam0, 0, 1) };
	Var5 = { func_1099(iParam0, Var0, Var0.f_4, 0) };
	return func_1155(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_651(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_601(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1156(81053684, 0) <= 0)
			{
				func_687(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_687(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1157(iParam0);
			if (func_1158(iVar0))
			{
				func_1159(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_687(30, iParam0, 0, 0, 0);
			}
			if (func_678() == -2125499975 || func_678() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_687(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_678() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_687(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1160(-525676072, 0))
			{
				if (func_1161(-525676072, &iVar1))
				{
					func_687(33, iVar1, 0, 0, 0);
				}
			}
			func_687(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1162(99217379))
		{
			func_629(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_600(24);
		if (func_630(&iVar2, 0))
		{
			func_606(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_652(int iParam0)
{
	if (func_597(iParam0, 943695443))
	{
		func_1163(0, iParam0);
	}
	else if (func_597(iParam0, -2096528786))
	{
		func_1163(1, iParam0);
	}
	else if (func_597(iParam0, -1094167013))
	{
		func_1163(2, iParam0);
	}
	else if (func_597(iParam0, 1936654645))
	{
		func_1163(3, iParam0);
	}
	else if (func_597(iParam0, 1306489306))
	{
		func_1163(4, iParam0);
	}
	else if (func_597(iParam0, 435762317))
	{
		func_1163(5, iParam0);
	}
	else if (func_597(iParam0, 1259363210))
	{
		func_1163(6, iParam0);
	}
	else if (func_597(iParam0, 881398259))
	{
		func_1163(7, iParam0);
	}
	else if (func_597(iParam0, -541549214))
	{
		func_1163(8, iParam0);
	}
	else if (func_597(iParam0, 130796156))
	{
		func_1163(-1, iParam0);
	}
}

int func_653(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1164(&Var4, 1356624740);
	return func_1165(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_654(int iParam0)
{
	if (!func_577(iParam0, 0))
	{
		return Var0;
	}
	if (func_597(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_597(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_597(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_597(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_655(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_328((*Global_1835011)[4]->f_1, 1))
				{
					func_326(109, 1);
				}
			}
			break;
	}
}

void func_656(int iParam0, char* sParam1)
{
	sVar0 = func_1167(func_1166(0));
	func_707(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1168(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_657(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_577(iParam0, 0))
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
	if (!func_1169())
	{
		func_1170(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1171(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_598(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_596(iParam0);
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
	else if (!func_1172(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1173(_create_var_string(10, &cVar2, _create_var_string(0, func_644(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_597(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_644(iParam0));
	}
	func_707(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_658(int iParam0, int iParam1)
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

struct<10> func_659(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_660(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_661(int iParam0, int iParam1)
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

bool func_662(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1174(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1174(iParam0, Var2, 1))
				{
					if (func_1175(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1175(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_326(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_198(0, 0, 1))
		{
			func_368(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_663(int iParam0)
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

void func_664(int iParam0)
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
		func_326(iVar0, 0);
	}
}

void func_665()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1176(0);
			_unlock_set_unlocked(-121456797, false);
			func_1177();
		}
		return;
	}
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1178();
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
	func_1176(1);
}

void func_666()
{
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_319(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_667()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1179(0);
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
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1179(1);
}

void func_668()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1180(15000, 0, 0, 0, 1);
			func_1179(0);
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
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_284(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1179(1);
}

void func_669()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_348(1191437462, 1, 0) && !func_192((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_319(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1181(1))
			{
				func_641(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_348(1119149048, 1, 0) && !func_192((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_319(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1181(2))
			{
				func_641(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1181(4))
		{
			func_641(4);
		}
		if (func_1181(0))
		{
			func_1182(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_348(1191437462, 1, 0))
			{
				func_672(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_348(1119149048, 1, 0))
			{
				func_672(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1181(1))
		{
			func_1182(1);
		}
		if (func_1181(2))
		{
			func_1182(2);
		}
		if (func_1181(4))
		{
			func_1182(4);
		}
		if (!func_1181(0))
		{
			func_641(0);
		}
	}
}

void func_670()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_328((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1183() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_604(127400949);
		if (func_606(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1183() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1184(-2055673461, Var1, 1423542233);
		func_1184(-202131179, Var1, -1264898804);
		func_1184(2013836545, Var1, 1592019450);
		func_1184(1497476650, Var1, 1117400455);
		func_1184(1063571467, Var1, 1150213537);
		func_1184(2107224237, Var1, 1598825281);
		func_1184(1747981656, Var1, -712527121);
		func_1184(-1371140647, Var1, 454332195);
		func_1184(-19142973, Var1, 256105670);
		func_1184(-2074737817, Var1, -1328061889);
		func_1184(-1114256243, Var1, -782241404);
		func_1184(-1653277288, Var1, 1669853467);
		func_1184(1869398132, Var1, -1559225678);
		func_1184(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_691(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_599(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_599(24) && func_691(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_691(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_599(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_671()
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

int func_672(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1075(iParam0, 1);
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
			func_657(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_348(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_654(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_581(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_581(iParam0, 0, 0) - iParam1) < 0)
		{
			func_672(iParam0, func_581(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_596(iParam0) == -427144552)
	{
		if (!func_1185(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1186(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_605(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_657(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1187(iParam0, iParam1);
	return 1;
}

bool func_673(int iParam0)
{
	switch (func_601(iParam0))
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

void func_674(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_601(iParam0))
	{
		case -2061583405:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1188(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1189();
	}
	if (bParam1)
	{
		func_1190(0, 0);
	}
}

int func_675(int iParam0)
{
	Var0 = { func_688(iParam0, 1, 0) };
	return func_689(Var0.f_4);
}

int func_676(int iParam0, int iParam1)
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

void func_677(int iParam0)
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
		iVar0 = func_676(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1191(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_678()
{
	return Global_1946804->f_1;
}

bool func_679(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1192(iParam6);
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
		func_1194(uParam0, func_1193(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_676(iVar3, 1);
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
							if (func_1195(iVar3) && func_1196(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1197(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_680(int iParam0, int iParam1)
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

int func_681(int iParam0, int iParam1)
{
	vVar0 = { func_680(iParam0, iParam1) };
	return vVar0.x;
}

void func_682(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_683(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_684(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1198(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1199(iParam0))
	{
		return false;
	}
	if (func_1200(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1153(iParam0, 1)) || func_82(32768))
	{
		if (!func_1153(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1201())
	{
		return false;
	}
	return true;
}

void func_685(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_686(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_687(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1202(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1203(Var0);
}

struct<5> func_688(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1204(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_596(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1099(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1205(bParam1) };
			if (bParam2 && func_1206(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1097(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1097(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1098(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1207(bParam1) };
			switch (func_601(iParam0))
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
			if (func_1208(iParam0, -1823706425))
			{
				Var0 = { func_1099(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1208(iParam0, -1483207246))
			{
				Var0 = { func_1099(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1209(Var0, &Var27, bParam1, 0))
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

int func_689(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1210(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_690(int iParam0)
{
	func_1191(Global_1946804->f_1497.f_1[func_676(iParam0, 1)], 2, 6);
	func_1191(Global_1946804->f_1378.f_1[func_676(iParam0, 1)], 2, 6);
}

bool func_691(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_692(int iParam0)
{
	return iParam0 != 0;
}

int func_693(int iParam0)
{
	iVar0 = -1;
	if (!func_692(iParam0))
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

bool func_694(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_695(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1211(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_696(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_697(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_698(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_699(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_700(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_701(int iParam0, int iParam1)
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

void func_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1212(iParam0, iParam6);
	func_1213(iParam0, iParam5);
	func_1214(iParam0, iParam4);
	func_1215(iParam0, iParam3);
	func_1216(iParam0, iParam2);
	func_1217(iParam0, iParam1);
}

bool func_703(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_700(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_699(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_698(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_695(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_696(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_697(iParam0);
	if (iVar5 < 1 || iVar5 > func_701(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_704(int iParam0, bool bParam1)
{
	return func_1052(func_286(), iParam0, bParam1);
}

void func_705(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_706(int iParam0, int iParam1)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1075(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1147("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1148(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_691(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1149(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1149(iVar1);
	}
	return false;
}

var func_707(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1218(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_708()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1219(iVar1);
		if (!_unlock_is_visible(func_1220(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_709()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1219(iVar0);
		if (!_unlock_is_visible(func_1220(iVar1)))
		{
			_unlock_set_visible(func_1220(iVar1), true);
		}
		iVar0++;
	}
}

bool func_710(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1017(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_711()
{
	return (func_199(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_712(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_577(iVar0, 0))
	{
		return 0;
	}
	if (!func_1221(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1222(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_597(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_688(iVar0, 0, 1) };
	iVar10 = func_1223(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1224(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1225(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_319(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1180(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_713(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_714(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_715(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_716(bool bParam0, bool bParam1)
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

void func_717(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1042())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1042())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_194(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_273(iParam0);
	if (func_196(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1226(1, iVar1);
					func_1226(8, iVar1);
					func_1226(7, iVar1);
					break;
				case 12:
					func_1226(6, iVar1);
					break;
				case 53:
					func_1226(3, iVar1);
					func_1226(7, iVar1);
					func_1226(4, iVar1);
					break;
				case 20:
					func_1226(8, iVar1);
					break;
				case 19:
					func_1226(1, iVar1);
					func_1226(2, iVar1);
					break;
				case 24:
					func_1226(3, iVar1);
					func_1226(9, iVar1);
					func_1226(20, iVar1);
					break;
				case 28:
					func_1226(1, iVar1);
					break;
				case 34:
					func_1226(23, iVar1);
					func_1226(2, iVar1);
					func_1226(18, iVar1);
					break;
				case 29:
					func_1226(0, iVar1);
					func_1226(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1226(0, iVar1);
					func_1226(3, iVar1);
					func_1226(2, iVar1);
					func_1226(11, iVar1);
					func_1226(6, iVar1);
					func_1226(25, iVar1);
					func_1226(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1226(5, iVar1);
					break;
				case 63:
					func_1226(1, iVar1);
					func_1226(3, iVar1);
					break;
				case 37:
					func_1226(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_364(0, 10, 11, 2116153146))
			{
				func_1226(7, iVar1);
				func_1226(4, iVar1);
			}
			else if (iParam0 == func_364(0, 7, 11, -379687487))
			{
				func_1226(8, iVar1);
				func_1226(15, iVar1);
			}
			else if (iParam0 == func_364(0, 8, 11, -1386089015))
			{
				func_1226(3, iVar1);
			}
			else if (iParam0 == func_364(0, 11, 11, -1952009645))
			{
				func_1226(6, iVar1);
				func_1226(3, iVar1);
			}
			else if (iParam0 == func_364(0, 12, 11, 2065895756))
			{
				func_1226(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1227()));
	if (!func_1228(629))
	{
		func_326(629, 0);
	}
}

int func_718(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_719(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_720(int iParam0, int iParam1, int iParam2)
{
	if (!func_719(iParam0))
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

int func_721()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_722(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_723(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1229(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_721())
	{
		return -1;
	}
	iVar0 = func_722(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_485(iVar1, 0);
	func_556(iVar1, 0);
	func_1230(iVar1, 0);
	func_1231(iVar1, 0);
	func_1232(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1233(iVar1, iParam4);
	}
	return iVar1;
}

int func_724(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_348(1811977508, 1, 0))
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
			if (func_577(iVar25, 0) && func_597(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_725(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_726(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	cVar0 = func_366(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_727(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_728(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1234(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1235() == 0 && !func_1236(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1237(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1238();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1239(Global_1310720->f_21))
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
			vVar7 = { func_1240(iVar0, iVar1) };
			bVar11 = func_1241(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_395(vVar7)) && func_1242(iVar0, bParam8, iParam12)) && !func_1243(iVar0)) || bVar11)
			{
				if (func_1244(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_729(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1245(vParam0);
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

void func_730()
{
	disable_script_brain_set(1);
}

void func_731()
{
}

void func_732()
{
	disable_script_brain_set(2);
}

bool func_733(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_734(char* sParam0)
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

void func_735(int iParam0)
{
	if (func_733(iParam0, 1))
	{
		func_1246(1);
	}
}

int func_736()
{
	return -1904156936;
}

bool func_737(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	switch (func_196(iParam0))
	{
		case 1:
			iVar0 = func_273(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_273(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_738()
{
	return 166188472;
}

int func_739()
{
	return 2015838421;
}

int func_740()
{
	return 207908017;
}

var func_741(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_742(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_743(var uParam0)
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

int func_744(var uParam0, int iParam1)
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

int func_745(var uParam0, char* sParam1)
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

int func_746(var uParam0)
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

void func_747(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_748(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_749()
{
	return Global_1572864->f_8;
}

void func_750(char[4] cParam0, int iParam1)
{
	func_1247(cParam0, iParam1);
	func_1248(cParam0, iParam1, 26);
}

int func_751(char[4] cParam0)
{
	set_blocking_of_non_temporary_events(&(Local_207[1]), true);
	func_58(cParam0, 1);
	if (func_120(cParam0, 4))
	{
		func_888(&(Local_226[0]), 2890.326f, -197.7096f, 40.898f, 11.3412f, 2, 1073741824);
	}
	if (func_163(&(Local_207[0]), 0))
	{
		set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 0, false, false);
	}
	set_random_boats(false);
	return 1;
}

int func_752(var uParam0)
{
	func_1249(uParam0, 8192);
	_disable_first_person_cam_this_frame_2();
	set_current_ped_weapon(&(Local_207[0]), -2088446466, true, 0, false, false);
	_0x1b3c2d961f5fc0e1(func_170(0));
	return 1;
}

int func_753(char[4] cParam0)
{
	func_1251(&(Local_207[1]), func_224(func_1250(Local_207[1]->f_8), func_132(func_33(cParam0))), 2, 1073741824);
	set_vehicle_is_considered_by_player(iVar914, true);
	_0x978aa2323ed32209(iVar914, 0.2f);
	func_1252(0, 0, 1, 1);
	func_1253(0);
	set_ped_can_ragdoll(&(Local_207[0]), true);
	func_1254(Local_207[0], 0);
	func_1255(&(Local_207[0]), Global_35);
	func_27(&uLocal_899, 1);
	func_552(&uLocal_902);
	_disable_first_person_cam_this_frame_2();
	func_899(0, 0);
	set_random_boats(false);
	return 1;
}

bool func_754(char[4] cParam0)
{
	func_1256(cParam0);
	func_1257(cParam0);
	func_1258();
	func_1259();
	func_1260();
	func_1261();
	switch (func_1262(cParam0))
	{
		case 0:
			if (func_1263(cParam0))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (_0xb89fcff19dafff28(&(uLocal_293[1]), "MrsAdler"))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	if (iVar983 <= 3)
	{
		_disable_first_person_cam_this_frame_2();
	}
	return func_1262(cParam0) == 29;
}

int func_755(char[4] cParam0)
{
	func_1264();
	func_1265(cParam0);
	func_1266(cParam0, 0);
	set_vehicle_is_considered_by_player(iVar914, false);
	return 1;
}

void func_756(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1267(cParam0, iParam1);
	func_1248(cParam0, iParam1, iParam2);
	func_1268(cParam0, &iParam3, iParam1, 0);
	func_1268(cParam0, &iParam4, iParam1, 2);
	func_1268(cParam0, &iParam5, iParam1, 4);
	func_1268(cParam0, &iParam6, iParam1, 5);
	func_1268(cParam0, &iParam7, iParam1, 7);
	func_935(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1269(cParam0, iParam1, cVar0);
	func_1270(cParam0, iParam1, iParam10);
}

int func_757(char[4] cParam0)
{
	if (!func_1271())
	{
		return 0;
	}
	func_58(cParam0, 1);
	if (func_163(&(Local_380[2]), 0))
	{
		set_entity_coords(&(Local_380[2]), 3151.09f, -491.76f, 49.18f, true, false, true, true);
	}
	_set_ped_crouch_movement(Global_35, true, 0, true);
	_set_ped_crouch_movement(&(Local_207[0]), true, 0, true);
	return 1;
}

int func_758(var uParam0)
{
	return 1;
}

int func_759(var uParam0)
{
	func_552(&uLocal_902);
	_0xaca45ddcef6071c4(player_id(), 0);
	func_1272(&(Local_380[2]), 0);
	if (!_does_scenario_point_exist(iVar908))
	{
		uLocal_911 = create_scenario_point(-1354153129, 3151.86f, -492.09f, 49.27f, 239.7505f, 2f, 0, 0);
	}
	clear_ped_tasks(&(Local_380[2]), 1, 0);
	_give_weapon_to_ped_2(&(Local_380[2]), -160924582, 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	func_1273(&(Local_380[2]), -183018591, 0, 0, 9, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	return 1;
}

bool func_760(char[4] cParam0)
{
	func_1274(cParam0);
	func_1275(cParam0);
	func_1276(cParam0);
	func_1277();
	func_1278();
	func_1279();
	func_1280();
	func_1281();
	func_1282(cParam0, 1);
	func_1283();
	if (func_1284(cParam0, &(Local_207[0]), "GNG3_WARN", "GNG3_F_LEFT_S", 44f, 66f, 0, 0, 1, 422991367, 1))
	{
		func_902(68, 1);
	}
	else
	{
		func_902(68, 0);
	}
	_0x437c08db4febe2bd(Global_35, "Stealth", 1f, 1);
	_0x437c08db4febe2bd(&(Local_207[0]), "Stealth", 1f, 1);
	if (!func_446(12))
	{
		if (has_pickup_been_collected(iVar981))
		{
			set_ped_config_flag(Global_35, 249, true);
			func_319(218444191, 20, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_902(12, 1);
		}
	}
	switch (func_1262(cParam0))
	{
		case 0:
			if (func_1285())
			{
				func_134(cParam0, 1);
			}
			else if (func_1286(Global_35, 2, 1))
			{
				func_902(17, 1);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if ((func_1285() && !func_1287()) && func_1288(cParam0) == 51)
			{
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_761(var uParam0)
{
	if (does_blip_exist(Local_380[2]->f_2))
	{
		func_1289(&(Local_380[2]));
	}
	func_1264();
	return 1;
}

bool func_762(char[4] cParam0)
{
	if (!func_1271())
	{
		return false;
	}
	func_1251(Global_35, func_226(0, 2), 0, 1073741824);
	func_1251(&(Local_207[0]), func_226(1, 2), 0, 1073741824);
	set_blocking_of_non_temporary_events(&(Local_207[1]), true);
	func_58(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_763(var uParam0)
{
	return 1;
}

bool func_764(char[4] cParam0)
{
	func_552(&uLocal_899);
	func_552(&uLocal_902);
	_set_ped_crouch_movement(&(Local_207[0]), false, 0, false);
	_set_ped_crouch_movement(Global_35, false, 0, false);
	if (func_120(cParam0, 4))
	{
		func_1290(cParam0, "GNG3_S3_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
	}
	else
	{
		StringCopy(&(cParam0->f_13146), "", 128);
		func_1291(cParam0, "GNG3_S2_OBJ3", -1082130432, 0, 0, -1, -1, 0);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_765(char[4] cParam0)
{
	func_1292();
	func_1293();
	func_1294(cParam0);
	func_1295(cParam0);
	func_1296(cParam0);
	func_1282(cParam0, 1);
	func_1297();
	func_1298();
	func_1281();
	func_1283();
	if (func_1284(cParam0, &(Local_207[0]), "GNG3_WARN", "GNG3_F_LEFT_S", 44f, 66f, 0, 0, 1, 422991367, 1))
	{
		if (!func_446(68))
		{
			func_1299(0);
			func_902(68, 1);
		}
	}
	else if (func_446(68))
	{
		if (!func_446(12) && !_0x80bb243789008a82(Global_35, 1))
		{
			func_1299(1);
		}
		func_902(68, 0);
	}
	if (!is_entity_dead(&(Local_380[1])) && !is_entity_dead(&(Local_380[0])))
	{
		disable_control_action(0, -640622144, false);
	}
	if (get_ped_config_flag(Global_35, 249, true))
	{
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -1819459471, false);
		disable_control_action(0, 2011525043, false);
		disable_control_action(0, 527275493, false);
		disable_control_action(0, 527362831, false);
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 2109526038, true);
	}
	if (get_ped_config_flag(Global_35, 249, true) && func_816(Global_35, 1, 0, 0) != -506285289)
	{
		set_ped_config_flag(Global_35, 249, false);
	}
	func_1300(cParam0);
	if (!func_446(12))
	{
		if (has_pickup_been_collected(iVar981))
		{
			set_ped_config_flag(Global_35, 249, true);
			func_319(218444191, 20, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_902(12, 1);
		}
	}
	switch (func_1262(cParam0))
	{
		case 0:
			iVar0 = func_1301();
			if (func_1302())
			{
				func_134(cParam0, 1);
			}
			else if (iVar0 == 3)
			{
				func_902(34, 1);
				func_221(&uLocal_902);
				func_134(cParam0, 1);
			}
			else if (func_446(35))
			{
				func_221(&uLocal_902);
				func_134(cParam0, 1);
			}
			else if (iVar0 == 4)
			{
				func_902(14, 1);
			}
			break;
		case 1:
			if (func_1302())
			{
				func_552(&uLocal_902);
				func_902(40, 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1303(9) && func_1304(Local_405[0]->f_7, 1))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_766(var uParam0)
{
	set_ped_accuracy(&(Local_207[0]), 40);
	set_ped_combat_attributes(&(Local_207[0]), 27, false);
	set_ped_config_flag(Global_35, 249, false);
	func_180();
	func_1299(0);
	func_1264();
	return 1;
}

int func_767(char[4] cParam0)
{
	if (!func_1271())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_845(&(Local_455[iVar0]->f_7), 2);
		iVar0++;
	}
	func_1251(Global_35, func_226(0, 3), 0, 1073741824);
	func_1251(&(Local_207[0]), func_226(1, 3), 0, 1073741824);
	func_58(cParam0, 1);
	func_1305();
	_set_entity_coords_and_heading(&(Local_380[0]), 3205.48f, -574.23f, 41.79f, -70.48f, true, false, true);
	explode_ped_head(&(Local_380[0]), -506285289);
	freeze_entity_position(&(Local_380[0]), true);
	func_1291(cParam0, "GNG3_S4_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_768(char[4] cParam0)
{
	_set_ped_crouch_movement(&(Local_207[0]), false, 0, false);
	if (!func_8(cParam0, 8) && !_is_anim_scene_started(&(uLocal_293[7]), false))
	{
		set_anim_scene_entity(&(uLocal_293[7]), "IG_MrsAdler", &(Local_207[0]), 0);
		set_anim_scene_entity(&(uLocal_293[7]), "P_BINOCULARS01X", iVar307, 0);
		start_anim_scene(&(uLocal_293[7]));
	}
	func_99(cParam0, 512);
	func_1306(iLocal_153);
	return 1;
}

int func_769(char[4] cParam0)
{
	func_27(&uLocal_899, 1);
	func_552(&uLocal_902);
	func_150(cParam0, 140f);
	func_149(cParam0, 120f);
	_0xdd1232b332cbb9e7(3, 1, 0);
	StringCopy(&(cParam0->f_13146), "", 128);
	func_1291(cParam0, "GNG3_S4_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

bool func_770(char[4] cParam0)
{
	func_1307(cParam0);
	func_1308(cParam0);
	func_1309(cParam0);
	func_1310();
	func_1282(cParam0, 0);
	func_1311();
	if (func_446(53))
	{
		func_1312();
	}
	func_1313(0);
	switch (func_1262(cParam0))
	{
		case 0:
			if (func_1314(Global_35, 3222.811f, -571.1642f, 42.0131f, 11f, 1, 1))
			{
				func_134(cParam0, 29);
			}
			else if (func_1314(&(Local_207[0]), 3222.811f, -571.1642f, 42.0131f, 17f, 1, 1) && !func_1304(Local_207[0]->f_7, 8))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_771(var uParam0)
{
	set_wind_speed(-1f);
	func_1264();
	return 1;
}

int func_772(char[4] cParam0)
{
	if (!func_1313(0))
	{
		return 0;
	}
	if (!func_1271())
	{
		return 0;
	}
	func_58(cParam0, 1);
	if (func_1105(Global_35, 0, 1, 0) == -1569615261)
	{
		iVar0 = func_1105(Global_35, 2, 1, 0);
		if (is_weapon_valid(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		}
		else
		{
			set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		}
	}
	return 1;
}

int func_773(char[4] cParam0)
{
	_set_ped_crouch_movement(&(Local_207[0]), false, 0, false);
	_set_ped_crouch_movement(Global_35, false, 0, false);
	set_ped_config_flag(Global_35, 218, true);
	reset_ped_last_vehicle(Global_35);
	func_140(cParam0, func_33(cParam0), 16777216);
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (does_entity_exist(iVar0))
		{
			_set_entity_coords_and_heading(iVar0, 3195.115f, -599.1196f, 41.7766f, 153.5157f, true, false, true);
			task_stand_still(iVar0, -1);
		}
	}
	clear_ped_tasks(Global_35, 1, 0);
	if (func_1315())
	{
		func_1273(Global_35, 379542007, 1, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(Global_35, 379542007, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
	}
	_0x0eabf182fbb63d72(&(Local_207[0]), 8, 1);
	return 1;
}

int func_774(char[4] cParam0)
{
	if (!get_is_waypoint_recording_loaded("gang3_RouteToPrison"))
	{
		return 0;
	}
	use_waypoint_recording_as_assisted_movement_route("gang3_RouteToPrison", 1, 1065353216, 1056964608, 1);
	set_ped_config_flag(Global_35, 352, true);
	func_1316(0);
	_0xaca45ddcef6071c4(player_id(), 1);
	func_552(&uLocal_899);
	func_552(&uLocal_902);
	if (func_163(&(Local_380[0]), 0))
	{
		func_1317(&(Local_380[0]), 0, 0);
	}
	if (func_163(&(Local_380[1]), 0))
	{
		func_1317(&(Local_380[1]), 0, 0);
	}
	if (func_120(cParam0, 4) && !func_1318())
	{
		func_1290(cParam0, "GNG3_S5_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
	}
	func_1319(cParam0, func_33(cParam0), 8388608);
	func_909(cParam0);
	func_1320(cParam0);
	stop_ped_speaking(Global_35, true);
	iLocal_291 = 0;
	iLocal_1040 = 0;
	_disable_first_person_cam_this_frame_2();
	func_1321();
	func_1322(cParam0);
	return 1;
}

bool func_775(char[4] cParam0)
{
	func_1323(cParam0);
	func_1324(cParam0);
	func_1325();
	func_1326();
	func_1327();
	func_1328();
	func_1321();
	func_1329();
	func_1330();
	func_1322(cParam0);
	func_1331();
	func_1332();
	func_1333(cParam0, 1, func_33(cParam0));
	_disable_first_person_cam_this_frame_2();
	if (!func_446(10))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_918[21]), true, 0) || is_entity_in_volume(&(Local_207[0]), &(iLocal_918[21]), true, 0))
		{
			func_902(10, 1);
		}
	}
	if (!func_446(9) && Local_414[3]->f_3 == 1)
	{
		_play_sound_from_position("WALL_WHISTLE", func_175(5, 4), "GNG3_Sounds", false, 0, true, 0);
		func_902(9, 1);
	}
	switch (func_1262(cParam0))
	{
		case 0:
			fVar0 = func_1334(Global_35, func_451(5, func_132(iLocal_153)), 0);
			if (!is_ped_still(Global_35) || iVar1039 < 12)
			{
				func_221(&uLocal_1047);
			}
			if (fVar0 <= 9f)
			{
				func_134(cParam0, 1);
			}
			else if (fVar0 <= 16f && func_1335(&uLocal_1047) > 5f)
			{
				func_134(cParam0, 1);
			}
			else if (fVar0 <= 25f && func_1335(&uLocal_1047) > 10f)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (_0xa2b1c7ef759a63ce() == 1f)
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_776(var uParam0)
{
	use_waypoint_recording_as_assisted_movement_route("gang3_RouteToPrison", 0, 1065353216, 1056964608, 1);
	set_ped_config_flag(Global_35, 352, false);
	set_player_control(player_id(), true, 0, false);
	_0x56e9c26cd29d1ed6(Global_35, 0);
	if (func_163(&(Local_405[0]), 0))
	{
		_0x56e9c26cd29d1ed6(&(Local_405[0]), 0);
	}
	_0x789dabd18e9024db(Global_35, 0, 1);
	_0x7c10221ce718aa72(Global_35, 14);
	_0x78815fc52832b690(&(Local_207[0]), 1);
	func_1264();
	func_1336(0);
	func_1337(0);
	func_1338(0);
	return 1;
}

bool func_777(char[4] cParam0)
{
	if (!func_1271())
	{
		return false;
	}
	func_58(cParam0, 1);
	stop_ped_speaking(Global_35, true);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1251(&(Local_414[iVar0]), func_224(10, iVar0), 2, 1073741824);
		iVar0++;
	}
	return cParam0->f_607 == cParam0->f_607;
}

int func_778(char[4] cParam0)
{
	func_1339();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1340();
	if ((func_120(cParam0, 4) && !func_128(cParam0, 2)) || func_8(cParam0, 524288))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!is_entity_dead(&(Local_414[iVar0])))
			{
				task_aim_gun_at_entity(&(Local_414[iVar0]), Global_35, -1, 1, 1);
			}
			iVar0++;
		}
	}
	set_ped_current_weapon_visible(&(Local_414[0]), false, false, true, false);
	set_ped_current_weapon_visible(&(Local_414[1]), false, false, true, false);
	set_ped_current_weapon_visible(&(Local_414[2]), false, false, true, false);
	set_ped_current_weapon_visible(&(Local_414[3]), false, false, true, false);
	set_ped_current_weapon_visible(&(Local_414[4]), false, false, true, false);
	func_173();
	return 1;
}

int func_779(char[4] cParam0)
{
	set_ped_config_flag(Global_35, 218, false);
	func_27(&uLocal_899, 1);
	if (!is_entity_dead(&(Local_414[0])))
	{
		_play_sound_from_position("WALL_WHISTLE", get_entity_coords(&(Local_414[0]), true, false), "GNG3_Sounds", false, 0, true, 0);
	}
	func_1341(cParam0, &(Local_207[1]), 1105014447, 422991367, 0, 0);
	func_99(cParam0, 33554432);
	func_1251(&(Local_207[0]), func_226(1, 5), 2, 1073741824);
	func_1251(&(Local_207[1]), func_226(2, 5), 2, 1073741824);
	_0x437c08db4febe2bd(&(Local_207[1]), "Cautious", 1f, -1);
	_0x437c08db4febe2bd(&(Local_207[0]), "Cautious", 1f, -1);
	_0x8acc0506743a8a5c(&(Local_207[0]), 1307780291, 2, -1082130432);
	_0x8acc0506743a8a5c(&(Local_207[1]), 1307780291, 2, -1082130432);
	func_169();
	func_1342();
	func_902(4, 1);
	set_ped_current_weapon_visible(&(Local_414[0]), true, true, true, false);
	set_ped_current_weapon_visible(&(Local_414[1]), true, true, true, false);
	set_ped_current_weapon_visible(&(Local_414[2]), true, true, true, false);
	set_ped_current_weapon_visible(&(Local_414[3]), true, true, true, false);
	set_ped_current_weapon_visible(&(Local_414[4]), true, true, true, false);
	func_1343(cParam0, "1-ArriveFirst");
	func_1343(cParam0, "2-ArriveLast");
	func_381(cParam0, 33554432);
	func_1344(cParam0);
	func_150(cParam0, 140f);
	func_149(cParam0, 120f);
	func_135(cParam0, 0);
	remove_all_ped_weapons(&(Local_207[0]), true, true);
	func_1273(&(Local_207[0]), 1240907314, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 0, false, false);
	func_1273(&(Local_207[0]), 2077870112, 0, 0, 9, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	remove_all_ped_weapons(&(Local_207[1]), true, true);
	_give_weapon_to_ped_2(&(Local_207[1]), 1240907314, -1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	set_current_ped_weapon(&(Local_207[1]), 1240907314, true, 0, false, false);
	fLocal_1377 = -1f;
	func_1345(1);
	return 1;
}

bool func_780(char[4] cParam0)
{
	func_1346();
	func_1347(cParam0);
	func_1348(cParam0);
	func_1349(cParam0);
	func_1350();
	func_1351();
	func_1352(cParam0);
	func_1353(cParam0);
	func_1354();
	func_1355(cParam0);
	func_1356();
	func_1357();
	func_1358(cParam0);
	func_1359(cParam0);
	func_1360();
	func_1361(cParam0);
	func_1362();
	func_1363();
	func_1364();
	func_1365(cParam0);
	func_1366();
	func_1367(cParam0);
	func_1368();
	func_1369();
	func_1370(cParam0);
	if (is_entity_at_coord(Global_35, 3147.194f, -408.7798f, 42.3698f, 12f, 12f, 12f, false, false, 0))
	{
		disable_control_action(0, -17122892, false);
		set_player_may_not_enter_any_vehicle(player_id());
		if (is_ped_on_mount(Global_35))
		{
			task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
		}
	}
	func_1371(cParam0, "GNG3_MCS1");
	if (func_446(57))
	{
		if (has_anim_event_fired(Global_35, -749565221))
		{
			func_1372(cParam0, 3, 2);
			func_902(57, 0);
		}
	}
	switch (func_1262(cParam0))
	{
		case 0:
			iVar0 = func_1373();
			if (iVar0 != 0)
			{
				if (iVar0 == 1)
				{
					func_1374(cParam0, "1-ArriveFirst");
				}
				else if (iVar0 == 2)
				{
					func_902(60, 1);
					func_1374(cParam0, "2-ArriveLast");
				}
				func_134(cParam0, 1);
			}
			break;
		case 1:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (_0xa2b1c7ef759a63ce() == 1f)
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_781(char[4] cParam0)
{
	func_1264();
	func_1375(0);
	func_1376(0);
	func_1377(0);
	func_1378(0);
	func_1379(0);
	func_1380(0);
	func_1381(0);
	func_1382(0);
	func_1383(0);
	func_1384(0);
	if (does_blip_exist(iLocal_190))
	{
		remove_blip(&iLocal_190);
	}
	func_1385(cParam0, &(Local_207[0]), 0);
	func_1385(cParam0, &(Local_207[1]), 0);
	func_1341(cParam0, &(Local_207[0]), 1105014447, 422991367, 0, 0);
	func_1341(cParam0, &(Local_207[1]), 1105014447, 422991367, 0, 0);
	func_173();
	func_181();
	return 1;
}

int func_782(var uParam0)
{
	func_1251(iVar310, func_226(8, 0), 2, 1073741824);
	task_stand_still(iVar310, -1);
	func_1249(uParam0, 256);
	func_1386();
	return 1;
}

int func_783(char[4] cParam0)
{
	func_140(cParam0, func_33(cParam0), 16777216);
	destroy_all_cams(false);
	func_1273(&(Local_207[0]), -2088446466, 0, 0, 3, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	return 1;
}

int func_784(char[4] cParam0)
{
	_0xe4c95e0ae31c6512(Global_35, iVar914);
	if (func_120(cParam0, 4))
	{
		set_entity_coords(iVar914, 3143.674f, -392.5667f, 40.2f, true, false, true, true);
		set_entity_rotation(iVar914, 0f, 0f, -148.89f, 2, true);
		_set_entity_coords_and_heading(Global_35, 3144.516f, -394.3652f, 40.69f, -148.89f, true, false, true);
		set_current_ped_weapon(Global_35, func_1387(6291456, 0), true, 0, false, false);
	}
	else
	{
		set_entity_heading(Global_35, get_entity_heading(iVar914));
		if (func_1388(cParam0, 512))
		{
			set_current_ped_weapon(Global_35, func_1387(6291456, 0), true, 0, false, false);
		}
		func_1389();
	}
	func_899(0, 0);
	func_27(&uLocal_899, 1);
	func_552(&uLocal_902);
	if (!does_entity_exist(iVar306))
	{
		iLocal_309 = create_object(-2049014994, 2902.86f, -247.47f, 39.97f, true, true, false, false, true);
		func_425(cParam0, iVar306, "P_CS_ROPE01X", 0, 0, 0, 0);
	}
	iLocal_290 = 0;
	func_1390(cParam0);
	func_99(cParam0, 33554432);
	if (func_199(&Global_1935630, 2048) && !func_1318())
	{
		func_1290(cParam0, "GNG3_S9_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
	}
	func_1391(Local_207[0], &iLocal_917, -1, 1);
	func_1391(Local_207[1], &iLocal_917, 1, 1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_163(Local_832[iVar0]->f_1, 0))
		{
			force_ped_motion_state(Local_832[iVar0]->f_1, -530524, false, 1, true);
			_0x9587913b9e772d29(Local_832[iVar0]->f_1, 0);
			if (iVar0 == 1)
			{
				set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 1.75f);
			}
			else
			{
				set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
			}
			set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
		}
		if (func_163(&(Local_832[iVar0]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_832[iVar0]), 500f, 0, 7);
		}
		iVar0++;
	}
	if (func_163(&(Local_207[1]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[1]), 4f);
	}
	if (func_163(&(Local_207[0]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[0]), 4f);
	}
	_0x6e969927cf632608(1);
	return 1;
}

bool func_785(char[4] cParam0)
{
	func_1392(cParam0);
	func_1393(cParam0);
	func_1394();
	_clamp_gameplay_cam_pitch(-40f, 50f);
	if (is_vehicle_driveable(iVar914, false, false))
	{
		set_entity_rotation(iVar914, 0f, 0f, get_entity_heading(iVar914), 2, true);
	}
	func_1360();
	func_1395();
	_0xe2bb2d6a9fe2ecde(1);
	switch (func_1262(cParam0))
	{
		case 0:
			if (func_1396(&uLocal_1386))
			{
				func_134(cParam0, 1);
			}
			else if (func_1397())
			{
				func_134(cParam0, 29);
			}
			break;
		case 1:
			if (!func_163(&(Local_832[iVar1383]), 0))
			{
				_0xe3639db78b3b5400(&(Local_832[iVar1383]));
				func_134(cParam0, 2);
			}
			else if (func_1397())
			{
				func_134(cParam0, 29);
			}
			break;
		case 2:
			if (_0x6072b7420a83a03f())
			{
				func_1398(cParam0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_786(var uParam0)
{
	display_radar(true);
	set_random_boats(true);
	func_1264();
	func_1399(&(Local_207[0]), 0);
	func_1399(&(Local_207[1]), 0);
	return 1;
}

int func_787(var uParam0)
{
	func_1251(iVar310, func_226(8, 0), 2, 1073741824);
	func_1251(Local_207[0]->f_1, func_226(8, 1), 2, 1073741824);
	func_1400(Global_35, iVar310, 0, -1, 1);
	func_1400(&(Local_207[0]), Local_207[0]->f_1, 0, -1, 1);
	func_1400(&(Local_207[1]), Local_207[0]->f_1, 0, 0, 1);
	return 1;
}

int func_788(var uParam0)
{
	display_hud(true);
	if (func_163(&(Local_207[0]), 0))
	{
		_hide_ped_weapons(&(Local_207[0]), 2, true);
	}
	if (func_163(iVar310, 0))
	{
		_0xf74e134f40192884(iVar310, 2);
	}
	set_entity_invincible(iVar914, true);
	_0x1b3c2d961f5fc0e1(func_170(1));
	func_187(0);
	func_187(1);
	return 1;
}

int func_789(char[4] cParam0)
{
	if (!is_entity_dead(iVar310))
	{
		task_stand_still(iVar310, -1);
	}
	func_27(&uLocal_899, 1);
	func_441(cParam0, Local_207[0]->f_1);
	func_441(cParam0, func_261(cParam0));
	func_425(cParam0, Local_207[0]->f_1, "Horse_01", 0, 0, 0, 0);
	func_149(cParam0, 200f);
	func_150(cParam0, 300f);
	func_1401(&(cParam0->f_7375), &(iLocal_918[27]), 10208, 0, 0, 0);
	_hide_ped_weapons(Global_35, 2, true);
	display_hud(true);
	_0x9f9a829c6751f3c7(player_id(), 28, 0);
	set_entity_invincible(Local_207[0]->f_1, true);
	clear_area(func_1402(player_id()), 500f, 1065787);
	func_1403(cParam0);
	func_164(1);
	func_1404(0);
	set_entity_invincible(iVar914, false);
	func_1405(iVar914, 100f, 0);
	func_1385(cParam0, &(Local_207[1]), 0);
	func_1341(cParam0, &(Local_207[0]), 1105014447, 422991367, 1, 1);
	if (func_163(&(Local_207[1]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[1]), 4f);
	}
	if (func_163(&(Local_207[0]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[0]), 4f);
	}
	return 1;
}

bool func_790(char[4] cParam0)
{
	func_1406(cParam0);
	func_1407(cParam0);
	func_1408();
	func_1409();
	if (func_446(32))
	{
		func_1410(cParam0, func_33(cParam0));
		if (_0x8a3945405b31048f() != 0.8f)
		{
			func_466(16777216);
			func_184(0.8f);
		}
	}
	func_1411(cParam0, 11, 1117126656, 1125515264, 0, 0, 1, 422991367);
	if (func_1262(cParam0) <= 1)
	{
		_0xf45e46deecf7df6e(96256, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	switch (func_1262(cParam0))
	{
		case 0:
			if (((func_1412(Global_35, iVar310, 0) && func_1288(cParam0) == 51) && func_1413(Global_35, "gang3_RouteToCamp") >= 5) && func_1414(cParam0, "GNG3_S10_RBANT1", 0))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_446(32) && func_1413(Global_35, "gang3_RouteToCamp") >= 465)
			{
				func_902(32, 1);
			}
			if (func_1415())
			{
				func_902(33, 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1416())
			{
				clear_ped_tasks_immediately(&(Local_207[0]), true, true);
				clear_ped_tasks_immediately(&(Local_207[1]), true, true);
				func_1398(cParam0);
				func_134(cParam0, 29);
			}
			break;
	}
	func_1417();
	return func_1262(cParam0) == 29;
}

int func_791(var uParam0)
{
	if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
	if (func_1418("GNG3_S10_RBANT1"))
	{
		stop_scripted_conversation("GNG3_S10_RBANT1", false, false);
	}
	func_164(0);
	set_entity_invincible(Local_207[0]->f_1, false);
	func_1264();
	if (func_163(iVar310, 0))
	{
		_0xf74e134f40192884(iVar310, 0);
	}
	_0xa0cefcea390aab9b(0);
	if (func_163(&(Local_207[1]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[1]), 1f);
	}
	if (func_163(&(Local_207[0]), 0))
	{
		set_ped_lod_multiplier(&(Local_207[0]), 1f);
	}
	return 1;
}

int func_792(var uParam0)
{
	if (!func_1419())
	{
		return 0;
	}
	iVar0 = _create_volume_aggregate();
	_0x39816f6f94f385ad(iVar0, 2353.888f, 1363.052f, 105.7577f, 0f, 0f, -17f, 3f, 20f, 4f);
	_0x39816f6f94f385ad(iVar0, 2349.764f, 1351.726f, 105.0764f, 0f, 0f, -45.07289f, 13.93975f, 10.32839f, 4.739717f);
	func_1401(&(uParam0->f_7375), iVar0, 0, 0, 0, 0);
	return 1;
}

int func_793(char[4] cParam0)
{
	func_1(cParam0, 4);
	func_1420(cParam0, "multistart");
	func_1421(0);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1422();
	return 1;
}

bool func_794(char[4] cParam0)
{
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, 1300184824, 0);
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -441265845, 0);
	remove_model_hide(2349.58f, 1352.6f, 105.13f, 4f, -1608216788, 0);
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -422220273, 0);
	func_99(cParam0, 33554432);
	func_134(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_795(char[4] cParam0)
{
	switch (func_1262(cParam0))
	{
		case 0:
			if (func_1423(cParam0))
			{
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1262(cParam0) == 29;
}

int func_796(var uParam0)
{
	func_1264();
	func_1424((*Global_1835011)[uParam0->f_607]->f_1);
	return 1;
}

int func_797(var uParam0)
{
	iVar0 = _create_volume_aggregate();
	_0x39816f6f94f385ad(iVar0, 2353.888f, 1363.052f, 105.7577f, 0f, 0f, -17f, 3f, 20f, 4f);
	_0x39816f6f94f385ad(iVar0, 2349.764f, 1351.726f, 105.0764f, 0f, 0f, -45.07289f, 13.93975f, 10.32839f, 4.739717f);
	func_1401(&(uParam0->f_7375), iVar0, 0, 0, 0, 0);
	return 1;
}

int func_798(var uParam0)
{
	create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, 1300184824, true);
	create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -441265845, true);
	create_model_hide(2349.58f, 1352.6f, 105.13f, 4f, -1608216788, true);
	create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -422220273, true);
	return 1;
}

int func_799(var uParam0)
{
	func_1425(9, 0);
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, 1300184824, 0);
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -441265845, 0);
	remove_model_hide(2349.58f, 1352.6f, 105.13f, 4f, -1608216788, 0);
	remove_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -422220273, 0);
	return 1;
}

int func_800(char[4] cParam0)
{
	switch (func_1262(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_801(var uParam0)
{
	func_1264();
	func_1424((*Global_1835011)[uParam0->f_607]->f_1);
	return 1;
}

bool func_802(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_803(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_804(var uParam0)
{
	return uParam0->f_862;
}

void func_805(var uParam0)
{
	if (func_1426(&iVar0))
	{
		if (func_577(iVar0, 0))
		{
			if (func_601(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_629(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_577(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_806(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1427(-1);
	}
	func_1428(1);
	set_entity_invincible(Global_35, true);
	if (!func_803(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_803(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_803(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_803(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_803(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_803(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_803(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_803(*iParam0, 4) && !func_803(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_803(*iParam0, 2048))
	{
		func_818(0, 0);
	}
	if (func_803(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_803(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_803(*iParam0, 8192))
	{
		func_1429();
	}
	if (!func_803(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_803(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_803(*iParam0, 1024))
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
		if (!func_803(*iParam0, 16))
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
						if (func_1430() == iVar7)
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
						func_1431(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1432(2);
						func_1433(-1);
						func_1434(vVar3);
						func_1436(func_1435());
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
	if (!func_803(*iParam0, 4096))
	{
		func_1437(Global_35);
	}
	if (!func_803(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_803(*iParam0, 2097152))
	{
		if (func_1438() || _0x50f124e6ef188b22(Global_35))
		{
			func_1439(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_807(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_808(var uParam0)
{
	if (func_802(uParam0, 2048) && !func_395(func_1440(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_802(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_888(iVar1, func_1440(uParam0), func_1441(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_802(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_888(iVar3, func_1440(uParam0), func_1441(uParam0), 2, 1073741824);
		}
	}
}

void func_809(var uParam0)
{
	if ((func_802(uParam0, 268435456) && !func_395(func_1440(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1440(uParam0) };
			func_888(iVar0, vVar1, func_1442(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_810(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_395(vParam1))
	{
		func_1443(uParam0, 2048, 1);
	}
	else
	{
		func_748(uParam0, 2048);
		if (bParam5)
		{
			func_748(uParam0, -2147483648);
		}
	}
}

void func_811(var uParam0)
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
					if (!func_1444(uParam0->f_13[iVar0], 8))
					{
						if (func_691(func_1105(iVar1, 0, 1, 0)))
						{
							if (!func_960(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_691(func_1105(iVar1, 1, 1, 0)))
						{
							if (!func_960(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_812(var uParam0, bool bParam1)
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

void func_813(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1202(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1445(iParam1, 29, bVar4, 1, 0);
			func_1445(iParam1, 31, bVar4, 1, 0);
			func_1445(iParam1, 30, bVar4, 1, 0);
			func_1445(iParam1, 22, bVar4, 1, 0);
			func_1445(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1142(32768) && func_1446(1108822547, 8)) && func_1447(10, iParam3))
	{
		func_1448(iParam1, 0, 1);
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
			iVar3 = func_1210(iVar1, 1);
			if (func_1446(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1447(iVar1, iParam3))
				{
				}
				else if ((func_1446(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1446(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1445(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1449(iVar3, 1, 6);
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
								func_1445(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1446(iVar3, 1))
							{
								func_1450(iVar3, 1, 6);
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

bool func_814(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1451((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_815(int iParam0)
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

int func_816(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_817(int iParam0, int iParam1)
{
	return func_1452(&uVar0, iParam0, iParam1);
}

void func_818(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_691(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1453(1);
	}
}

void func_819(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_820(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
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
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_824(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_825(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_826(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
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
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_829(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_830(var uParam0, int iParam1)
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

int func_831(var uParam0)
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

bool func_832(int iParam0, int iParam1)
{
	iVar0 = func_1454(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_833(var uParam0, char* sParam1, int iParam2)
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

int func_834(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_855((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_835(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_836(var uParam0, char* sParam1)
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

int func_837(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_850((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_838(var uParam0, char* sParam1)
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

int func_839(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_848((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_840(var uParam0, int iParam1)
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

int func_841(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_861((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_842(var uParam0, int iParam1)
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

int func_843(var uParam0, char* sParam1)
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

int func_844(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_852((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_845(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_846(var uParam0)
{
	return *uParam0 != 0;
}

void func_847(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_848(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_849(var uParam0)
{
	if (!func_877(uParam0->f_3, 1))
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
		func_835(&(uParam0->f_3), 1);
	}
}

bool func_850(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_851(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_852(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_853(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_1455(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_854(var uParam0)
{
	if (func_877(*uParam0, 2))
	{
		return true;
	}
	if (!func_877(*uParam0, 1))
	{
		func_1456(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_835(uParam0, 2);
		return true;
	}
	return false;
}

bool func_855(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_856(var uParam0)
{
	if (!func_877(uParam0->f_2, 1))
	{
		if (func_1457(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1458(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_305())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1061())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_835(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_857(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_858(var uParam0, int iParam1)
{
	if (!func_877(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_859(var uParam0)
{
	return *uParam0 != 0;
}

void func_860(var uParam0)
{
	if (!func_877(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_835(&(uParam0->f_2), 1);
	}
}

bool func_861(var uParam0)
{
	return *uParam0 != 0;
}

void func_862(var uParam0)
{
	if (!func_877(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_835(&(uParam0->f_3), 1);
	}
}

bool func_863(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_864(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_865(var uParam0)
{
	return func_1459(*uParam0);
}

void func_866(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_867(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_868(var uParam0)
{
	if (!func_877(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_835(&(uParam0->f_2), 1);
	}
}

bool func_869(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_870(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

bool func_871(var uParam0, int iParam1, char* sParam2)
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

void func_872(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_439(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1460(uParam0, iParam1);
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
		iVar1 = func_1461(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_962(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1462(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1463(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1464(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_873(int iParam0)
{
	if (!func_190(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_874(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_896(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1465(uParam0, 0))
			{
				if (func_1466(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1467(uParam0, 1, &iVar0))
					{
					}
					if (func_1468(uParam0, 3, &cVar2))
					{
					}
					if (func_1467(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1467(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1467(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1467(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1467(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1469(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_495((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_495(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_495(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_218(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1469(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_495(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1465(uParam0, 12))
			{
				if (func_1467(uParam0, 13, &iVar0))
				{
				}
				if (func_1467(uParam0, 14, &iVar1))
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

void func_875(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_218((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_218((*uParam0)[iVar0], 1))
		{
			func_1470((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_876(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_846((*uParam0)[iVar1]))
		{
			if (func_832((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1471((*uParam0)[iVar1]))
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
		if (func_848((*uParam1)[iVar1]))
		{
			if (func_832((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1472((*uParam1)[iVar1]))
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
		if (func_850((*uParam2)[iVar1]))
		{
			if (func_832((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1473((*uParam2)[iVar1]))
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
		if (func_852((*uParam3)[iVar1]))
		{
			if (func_832((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_853((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_832(uParam4->f_1, iParam12))
	{
		if (!func_854(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_855((*uParam5)[iVar1]))
		{
			if (func_832((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1457((*uParam5)[iVar1]))
				{
					if (!func_878((*uParam5)[iVar1]))
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
		if (func_855((*uParam5)[iVar1]))
		{
			if (func_832((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1457((*uParam5)[iVar1]))
				{
					if (func_878((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_857((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1474((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_859((*uParam6)[iVar1]))
		{
			if (func_832((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1475((*uParam6)[iVar1]))
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
		if (func_861((*uParam7)[iVar1]))
		{
			if (func_832((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1476((*uParam7)[iVar1]))
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
		if (func_863((*uParam8)[iVar1]))
		{
			if (func_832((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1477((*uParam8)[iVar1]))
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
		if (func_865((*uParam9)[iVar1]))
		{
			if (func_832((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1478((*uParam9)[iVar1]))
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
		if (func_867((*uParam10)[iVar1]))
		{
			if (func_832((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1479((*uParam10)[iVar1]))
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
		if (func_869((*uParam11)[iVar1]))
		{
			if (func_832((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1480((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_877(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_878(var uParam0)
{
	if (func_877(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_2, 1))
	{
		func_856(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_835(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_879(int iParam0)
{
	if (!func_190(iParam0))
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

bool func_880(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_514(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_259(iParam1)) && func_1481(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1482(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1483(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1484(iParam1);
		return true;
	}
	return false;
}

bool func_881(char[4] cParam0)
{
	if (!func_395(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1485(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1485(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1485(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1485(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1485(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1485(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1485(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1485(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1485(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1485(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1485(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1485(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1485(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1485(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1485(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1485(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1485(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1485(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1485(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1485(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1485(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1485(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1485(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1485(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1485(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1485(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1485(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1485(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1485(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1485(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1485(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1485(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1485(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_395(cParam0->f_5417);
}

int func_882(int iParam0, var uParam1)
{
	uParam1->f_10 = func_267(uParam1->f_10);
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
		if (func_395(uParam1->f_6))
		{
		}
	}
	bVar0 = func_394();
	if (*uParam1)
	{
		if (bVar0 && !func_328((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1486(5))
			{
				func_526(5);
				func_1487(5);
				func_1433(0);
				func_1432(0);
			}
		}
	}
	if (func_1488(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_328((*Global_1835011)[37]->f_1, 1)) && !func_328((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_328((*Global_1835011)[43]->f_1, 1)) && !func_328((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_216(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_529(iVar1))
	{
		bVar3 = true;
		if (func_1489(iVar1))
		{
			bVar4 = true;
		}
		if (func_536(iVar1))
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
				func_537(uParam1->f_10);
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
			if (!func_1486(0) && func_1486(1))
			{
				func_1490(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1491())
			{
				func_1492();
			}
			func_1433(0);
			func_1432(0);
			func_1434(uParam1->f_6);
		}
	}
	if (!func_529(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1493(uParam1->f_10) == 0 || func_1494(uParam1->f_10) == 0) || func_1495(uParam1->f_10) == 0)
			{
				func_1496(uParam1->f_10);
			}
			func_1497(uParam1->f_10);
			func_1498(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_216(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_529(iVar1))
	{
		bVar3 = true;
		if (func_1489(iVar1))
		{
			bVar4 = true;
		}
		if (func_536(iVar1))
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
			if (!func_395(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1499(uParam1->f_10))
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
			Var8 = { func_1500(uParam1->f_10) };
			Var10 = { func_1501() };
			func_1502(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_522(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1503(uParam1->f_10);
		if (uParam1->f_2 && !func_395(uParam1->f_6))
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
	func_521(uParam1->f_10);
	if (func_522(uParam1->f_10))
	{
		iVar16 = func_263(uParam1->f_10);
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

bool func_883(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_884(int iParam0)
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

bool func_885(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1504(iParam1))
	{
		return false;
	}
	iVar0 = func_1505(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_886(char[4] cParam0, bool bParam1)
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

float func_887(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_888(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1506(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1507(iParam0))
	{
		if (func_884(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_390(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_888(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_888(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_390(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_390(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
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
		set_entity_coords_no_offset(iParam0, vParam1, func_390(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_390(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_390(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1507(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_390(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_390(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_889(int iParam0, int iParam1, int iParam2)
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

bool func_890(var uParam0, int iParam1)
{
	switch (func_1508(uParam0))
	{
		case 0:
			if (!func_1509(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1510(uParam0, 1);
			break;
		case 1:
			func_1511(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_806(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1510(uParam0, 2);
			break;
		case 2:
			if (func_1512(uParam0))
			{
				func_1513(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1510(uParam0, 3);
			}
			break;
		case 3:
			if (func_897(&(uParam0->f_3)) >= 1f)
			{
				func_1510(uParam0, 4);
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
			func_1514(&iVar1, 0);
			release_script_audio_bank();
			func_1510(uParam0, 0);
			return true;
	}
	return false;
}

void func_891(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1515(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_892(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1516(cParam0, iVar0) };
	if (func_1518(&(cParam0->f_10792), Var1, func_1517(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1519(&(cParam0->f_10792), 524288))
		{
			func_381(cParam0, 67108864);
			func_1520(&(cParam0->f_10792), 524288);
		}
		func_1521(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_893(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_894(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1522(cParam0);
		func_1523(cParam0);
		return true;
	}
	if (func_1524(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_923(cParam0);
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
			func_1525(cParam0);
			func_893(cParam0, 524288);
			func_1344(cParam0);
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

bool func_895(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1526(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1527(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1528(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_426(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_873(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_896(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_896(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1529(uParam0);
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

float func_897(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_497(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_549() - uParam0->f_1);
}

bool func_898()
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

void func_899(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_900(char[4] cParam0)
{
	if (func_446(72))
	{
		return true;
	}
	if (func_33(cParam0) >= iLocal_154)
	{
		return true;
	}
	if (!func_529(0))
	{
		return true;
	}
	iVar0 = func_216(0);
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (is_entity_on_screen(iVar0) && !is_screen_faded_out())
	{
		return false;
	}
	_set_entity_coords_and_heading(iVar0, 2881.168f, -259.8995f, 41.3149f, 259.8871f, false, true, true);
	func_1530(iVar0);
	func_902(72, 1);
	return true;
}

bool func_901(char[4] cParam0)
{
	if (func_446(73))
	{
		return true;
	}
	if (func_33(cParam0) >= iLocal_154)
	{
		return true;
	}
	if (!func_529(1))
	{
		return true;
	}
	iVar0 = func_216(1);
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (is_entity_on_screen(iVar0) && !is_screen_faded_out())
	{
		return false;
	}
	_set_entity_coords_and_heading(iVar0, 2880.378f, -261.5262f, 41.2207f, 251.6571f, false, true, true);
	func_1530(iVar0);
	func_902(73, 1);
	return true;
}

void func_902(int iParam0, bool bParam1)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	bVar3 = (uLocal_951[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_951[iVar0] = (uLocal_951[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_951[iVar0] = (uLocal_951[iVar0] && iVar4);
	}
}

void func_903()
{
	Local_207[0]->f_8 = 11;
	Local_207[1]->f_8 = 1;
	Local_226[0]->f_8 = 13;
	Local_226[1]->f_8 = 0;
	Local_226[2]->f_8 = 6;
	Local_226[3]->f_8 = 15;
	Local_226[4]->f_8 = 19;
	Local_226[5]->f_8 = 17;
	Local_226[6]->f_8 = 4;
}

void func_904()
{
	func_1531(-1, 1);
}

bool func_905(char[4] cParam0, int iParam1)
{
	if (iParam1 == iLocal_149)
	{
		return ((func_1333(cParam0, 0, iParam1) && func_1532(cParam0, 0, iParam1)) && func_1533(1, 1));
	}
	else if (iParam1 == iLocal_150)
	{
		return ((((func_1333(cParam0, 0, iParam1) && func_1258()) && func_1259()) && func_1533(1, 1)) && func_1260());
	}
	else if (iParam1 == iLocal_151)
	{
		return ((((func_1333(cParam0, 0, iParam1) && func_1258()) && func_1259()) && func_1533(0, 1)) && func_1260());
	}
	else if (iParam1 == iLocal_152)
	{
		return ((((func_1333(cParam0, 0, iParam1) && func_1258()) && func_1259()) && func_1533(0, 0)) && func_1300(cParam0));
	}
	else if (iParam1 == iLocal_153)
	{
		return ((((func_1333(cParam0, 0, iParam1) && func_1258()) && func_1259()) && func_1533(0, 0)) && func_1300(cParam0));
	}
	else if (iParam1 == iLocal_154)
	{
		return ((func_1534(cParam0, iParam1) && func_1300(cParam0)) && func_1331());
	}
	else if (iParam1 == iLocal_155)
	{
		return ((func_1359(cParam0) && func_1534(cParam0, iParam1)) && func_1535(cParam0));
	}
	else if (iParam1 == iLocal_156)
	{
		return (func_1359(cParam0) && func_1534(cParam0, iParam1));
	}
	else if (iParam1 == iLocal_157)
	{
		return (((((func_1359(cParam0) && func_1534(cParam0, iParam1)) && func_1532(cParam0, 0, iParam1)) && func_1532(cParam0, 1, iParam1)) && func_1532(cParam0, 2, iParam1)) && func_1532(cParam0, 3, iParam1));
	}
	else if (iParam1 == iLocal_158)
	{
		return (func_1359(cParam0) && func_1534(cParam0, iParam1));
	}
	return true;
}

void func_906(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1536(iParam0, 64);
	func_269();
}

void func_907()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_523(iVar0);
		func_524(iVar0);
		iVar0++;
	}
}

void func_908(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
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

void func_909(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_145(cParam0, &(Local_207[0]), "SADIE_ADLER", 0);
	func_145(cParam0, &(Local_207[1]), "JOHN", 0);
	func_145(cParam0, &(Local_405[0]), "GNG3_Milliken", 0);
	func_145(cParam0, &(Local_314[1]), "GNG3_GUARD2", 0);
}

void func_910(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	func_1537(cParam0);
}

void func_911()
{
	*Local_168[2] = { 3148.134f, -487.2448f, 42.275f };
	Local_168[2]->f_3 = { 3150.412f, -494.5863f, 58.1864f };
	Local_168[2]->f_6 = 5.75f;
}

void func_912()
{
	func_1538(0, 3250.038f, -588.0089f, 43.40937f, 0f, 0f, 0f, 600f, 600f, 300f);
	func_1538(1, 3149.479f, -490.8693f, 50.02374f, 0f, 0f, -30f, 10f, 7f, 4f);
	func_1538(2, 3351.148f, -646.1904f, 52.12408f, 0f, 0f, 105.691f, 3.739907f, 33.52648f, 2.620054f);
	func_1538(3, 3331.818f, -631.5088f, 43.66877f, 0f, 0f, 111.875f, 4.18927f, 8.516262f, 3.411626f);
	func_1538(4, 3321.211f, -608.5092f, 44.16453f, 0f, 0f, 41.18901f, 6.777163f, 10.50764f, 3.411626f);
	func_1538(5, 3313.893f, -599.9825f, 44.31696f, 0f, 0f, 41.18901f, 6.777163f, 10.50764f, 3.411626f);
	func_1538(6, 3256.976f, -529.6294f, 43.69999f, 0f, 0f, -35.582f, 10.11149f, 19.26707f, 5.297476f);
	func_1538(7, 3234.854f, -512.8432f, 43.18093f, 0f, 0f, 42.539f, 19.67875f, 3.315223f, 6.374707f);
	func_1538(8, 3215.135f, -530.7507f, 45.44772f, 0f, 0f, 58f, 75f, 20f, 20f);
	func_1538(9, 3271.198f, -551.6541f, 42.02166f, 0f, 0f, 57.00001f, 67.3f, 91.3f, 23.75f);
	func_1538(12, 3175.165f, -505.134f, 43.5695f, 0f, 0f, -28f, 34f, 56f, 26f);
	func_1538(12, 3175.165f, -505.134f, 43.5695f, 0f, 0f, -28f, 34f, 56f, 26f);
	func_1538(11, 3214.437f, -564.7067f, 43.5695f, 0f, 0f, -33.00001f, 48f, 65f, 26f);
	func_1538(17, 3324.114f, -610.7552f, 42.5f, 0f, 0f, 32.67588f, 500f, 7.696168f, 41.50933f);
	func_1538(18, func_175(9, 4), 0f, 0f, 39f, 500f, 36.382f, 200f);
	func_1538(19, func_175(9, 5), 0f, 0f, 39f, 500f, 10f, 200f);
	func_1538(20, 3351.101f, -646.4399f, 52.99907f, 0f, 0f, 15f, 34f, 5f, 5f);
	func_1539(13, 3350.32f, -648.5551f, 45.2326f, 0f, 0f, 15.39492f, 1.151472f, 1.37654f, 2.059243f);
	func_1538(14, 3351.348f, -648.5571f, 45.2326f, 0f, 0f, 15.39492f, 1.594001f, 1.37654f, 2.059243f);
	func_1538(15, 3149.222f, -490.5394f, 46.44504f, 0f, 0f, -30.21905f, 6.43505f, 6.361824f, 11.1548f);
	func_1538(16, 3315.119f, -597.3622f, 42.81765f, 0f, 0f, -49.054f, 1.734103f, 1.59503f, 1.562499f);
	func_1538(21, 3331.833f, -621.0967f, 43.3209f, 0f, 0f, 40.58276f, 17.59941f, 4.027505f, 10.30706f);
	func_1538(22, 3309.329f, -597.4175f, 42.3865f, 0f, 0f, -50.45253f, 9.491338f, 20.46817f, 6.866788f);
	func_1538(23, 3351.683f, -647.2672f, 44.26897f, 0f, 0f, 15.73928f, 4.150622f, 4.8435f, 6.829016f);
	func_1538(24, 3317.131f, -749.1496f, 57.84786f, 0f, 0f, 32.68903f, 351.1955f, 215.2045f, 45.96127f);
	func_1538(25, 2969.372f, -342.4908f, 45.46243f, 0f, 0f, -27.21196f, 340f, 212f, 35.04018f);
	func_1538(26, 2969.372f, -342.4908f, 45.46243f, 0f, 0f, -27.21196f, 410f, 280f, 35.04018f);
	func_1539(28, 2333.399f, 1338.537f, 105.8353f, 0f, 0f, 0f, 5f, 5f, 3f);
	func_1538(29, 3275.627f, -552.7504f, 51.13022f, 0f, 0f, 46.39354f, 103.6082f, 131.9196f, 21.34392f);
	iLocal_918[10] = _create_volume_aggregate();
	_0x39816f6f94f385ad(&(iLocal_918[10]), 3353.348f, -656.9924f, 54.13757f, 0f, 0f, 15.40817f, 73.68444f, 26.98952f, 44.35288f);
	_0xbce668aaf83608be(&(iLocal_918[10]), 3363.282f, -681.855f, 46.411f, 0f, 0f, 0f, 40f, 40f, 30f);
	iLocal_918[27] = _create_volume_aggregate();
	_0x39816f6f94f385ad(&(iLocal_918[27]), 2353.888f, 1363.052f, 105.7577f, 0f, 0f, -17f, 3f, 20f, 4f);
	_0x39816f6f94f385ad(&(iLocal_918[27]), 2349.764f, 1351.726f, 105.0764f, 0f, 0f, -45.07289f, 13.93975f, 10.32839f, 4.739717f);
	_0x18262cafebb5fbe1(&(iLocal_918[0]), 0, 0, 0, -1, -1, 0);
	_0x19c7567d2f2287d6(&(iLocal_918[13]), 7);
	_0x2a10538d0a005e81(&(iLocal_918[0]), 2);
}

int func_913(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_149)
	{
		if (does_entity_exist(iVar914))
		{
			_get_rowing_oars(iVar914, uVar0[0], uVar0[1]);
			if (does_entity_exist(&(uVar0[0])))
			{
				func_425(cParam0, &(uVar0[0]), "P_BOAT_OAR_01_S^1", 0, 0, 0, 0);
			}
			if (does_entity_exist(&(uVar0[1])))
			{
				func_425(cParam0, &(uVar0[1]), "P_BOAT_OAR_01_S", 0, 0, 0, 0);
			}
		}
		set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 3, false, false);
		set_current_ped_weapon(&(Local_207[0]), -2088446466, true, 0, false, false);
	}
	else if (func_33(cParam0) == iLocal_153)
	{
		if (func_163(&(Local_405[0]), 0))
		{
			func_1540(cParam0, &(Local_405[0]), "S_M_M_SKPGUARD_01", 0);
		}
		if (does_entity_exist(&(Local_380[1])) && func_163(&(Local_380[1]), 0))
		{
			remove_all_ped_weapons(&(Local_380[1]), true, true);
			func_1540(cParam0, &(Local_380[1]), "S_M_M_SKPGUARD_01^1", 0);
		}
		if (func_1541(0))
		{
			func_1540(cParam0, &(iLocal_311[0]), "W_REPEATER_CARBINE01", 0);
		}
		if (does_entity_exist(&(Local_380[0])))
		{
			if (is_entity_dead(&(Local_380[0])))
			{
				resurrect_ped(&(Local_380[0]));
			}
			remove_all_ped_weapons(&(Local_380[0]), true, true);
			func_1540(cParam0, &(Local_380[0]), "S_M_M_SKPGUARD_01^2", 0);
		}
	}
	else if (func_33(cParam0) == iLocal_154)
	{
		if (func_163(&(Local_405[0]), 0) && !func_960(&(cParam0->f_7375), &(Local_405[0])))
		{
			func_888(&(Local_405[0]), 3342.221f, -634.4185f, 43.0475f, 249.0954f, 2, 1073741824);
			func_169();
			set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01", &(Local_405[0]), 0);
		}
		func_1273(&(Local_414[4]), 379542007, 1, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_414[4]), 379542007, true, 0, false, false);
		set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01^1", &(Local_414[0]), 0);
		set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01^2", &(Local_414[3]), 0);
		set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01^3", &(Local_414[1]), 0);
		set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01^4", &(Local_414[4]), 0);
		set_anim_scene_entity(cParam0->f_7375.f_804, "S_M_M_SKPGUARD_01^5", &(Local_414[2]), 0);
	}
	else if (func_33(cParam0) == iLocal_155)
	{
		iVar3 = func_1387(0, 0);
		if (!has_ped_got_weapon(Global_35, iVar3, 0, false))
		{
			func_319(iVar3, 1, 1, 1, 0, 752097756, 0, 0, 0, 0);
		}
		set_current_ped_weapon(Global_35, iVar3, true, 0, false, false);
		func_1273(&(Local_207[0]), 1240907314, 1, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 0, false, false);
		func_1273(&(Local_207[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[1]), -1569615261, true, 0, false, false);
		if (does_entity_exist(iVar914))
		{
			_get_rowing_oars(iVar914, uVar0[0], uVar0[1]);
			if (does_entity_exist(&(uVar0[0])))
			{
				func_425(cParam0, &(uVar0[0]), "P_BOAT_OAR_01_S^1", 0, 0, 0, 0);
			}
			if (does_entity_exist(&(uVar0[1])))
			{
				func_425(cParam0, &(uVar0[1]), "P_BOAT_OAR_01_S", 0, 0, 0, 0);
			}
		}
		detach_entity(Global_35, false, false);
	}
	else if (func_33(cParam0) == iLocal_156)
	{
		func_1542(Global_35);
		func_1273(&(Local_207[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[0]), -1569615261, true, 0, false, false);
		func_1273(&(Local_207[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[1]), -1569615261, true, 0, false, false);
		func_1273(&(Local_207[0]), 1240907314, 1, 0, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 0, false, false);
		func_1273(&(Local_207[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[1]), -1569615261, true, 0, false, false);
		if (does_entity_exist(iVar914))
		{
			_get_rowing_oars(iVar914, uVar0[0], uVar0[1]);
			if (does_entity_exist(&(uVar0[0])))
			{
				func_441(cParam0, &(uVar0[0]));
				func_425(cParam0, &(uVar0[0]), "P_OAR03X^1", 0, 0, 0, 0);
			}
			if (does_entity_exist(&(uVar0[1])))
			{
				func_441(cParam0, &(uVar0[1]));
				func_425(cParam0, &(uVar0[1]), "P_OAR03X", 0, 0, 0, 0);
			}
		}
		detach_entity(Global_35, false, false);
		func_1273(&(Local_207[0]), 1240907314, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[0]), 1240907314, true, 0, false, false);
		func_441(cParam0, iVar914);
		func_425(cParam0, iVar914, "ROWBOATSWAMP", 0, 0, 0, 0);
	}
	else if (func_33(cParam0) == iLocal_157)
	{
		func_1542(Global_35);
		func_1542(&(Local_207[0]));
		func_1542(&(Local_207[1]));
		func_1273(Global_35, -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		func_1273(&(Local_207[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[0]), -1569615261, true, 0, false, false);
		func_1273(&(Local_207[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_current_ped_weapon(&(Local_207[1]), -1569615261, true, 0, false, false);
	}
	else if (func_33(cParam0) == iLocal_158)
	{
	}
	return 1;
}

void func_914(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

bool func_915(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_149)
	{
		return func_1543(cParam0);
	}
	else if (func_33(cParam0) == iLocal_153)
	{
		return func_1544(cParam0);
	}
	else if (func_33(cParam0) == iLocal_154)
	{
		return func_1545(cParam0);
	}
	else if (func_33(cParam0) == iLocal_155)
	{
		return func_1546(cParam0);
	}
	else if (func_33(cParam0) == iLocal_156)
	{
		return func_1547(cParam0);
	}
	else if (func_33(cParam0) == iLocal_157)
	{
		return func_1548(cParam0);
	}
	return true;
}

void func_916(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_917(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_149)
	{
		return func_1549(cParam0);
	}
	else if (func_33(cParam0) == iLocal_153)
	{
		return func_1550(cParam0);
	}
	else if (func_33(cParam0) == iLocal_154)
	{
		return func_1551(cParam0);
	}
	else if (func_33(cParam0) == iLocal_155)
	{
		return func_1552(cParam0);
	}
	else if (func_33(cParam0) == iLocal_156)
	{
		return func_1553(cParam0);
	}
	return 1;
}

void func_918(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

int func_919(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, var uParam10, int iParam11)
{
	vVar1 = { func_452(vParam0, vParam3, uParam10) };
	vVar4 = { func_453(vParam0, vParam3, uParam10) };
	func_1513(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

void func_920()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1554(iVar0);
		iVar0++;
	}
}

void func_921(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1555(iParam0, iParam1, bParam2, fParam3);
}

void func_922(char[4] cParam0)
{
	func_902(0, 0);
	func_1556(cParam0);
	if (is_entity_in_volume(Global_35, &(iLocal_918[1]), true, 0))
	{
		_0x8910c24b7e0046ec();
	}
	if (_0x59643424b68d52b5(Global_35))
	{
		_0x718c6ecf5e8cbdd4();
	}
	func_1557(cParam0);
	_disable_guard_zone("SISIKA_PENITENTIARY");
	if (func_33(cParam0) != iLocal_156)
	{
		func_1558(0);
	}
	func_1559(cParam0);
}

void func_923(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1560(cParam0);
}

void func_924(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_214())
			{
				if (func_897(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_221(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_925(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1561(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1562();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1319(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_926(char[4] cParam0)
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
		if (func_240() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_240() && !func_54())
	{
		func_893(cParam0, 1048576);
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
			func_893(cParam0, 134217728);
		}
	}
}

void func_927(char[4] cParam0)
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

void func_928(char[4] cParam0)
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

void func_929(char[4] cParam0)
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

int func_930(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_255(cParam0->f_5423[iVar0]))
		{
			func_1563(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_931(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1564(iVar0))
	{
		return false;
	}
	iVar1 = func_1565(iParam2);
	if (!func_1566(iVar1))
	{
		return false;
	}
	if (!func_1567(cParam0, iParam1, iParam2))
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

int func_932(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_933(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_934(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_221(&(cParam0->f_603));
	}
}

void func_935(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_936(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_897(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_256(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_257(cParam0->f_5421))
		{
			iVar2 = func_258(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1568(cParam0->f_5421, iVar1);
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

float func_937(char[4] cParam0)
{
	return func_897(&(cParam0->f_603));
}

bool func_938(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_939(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_931(cParam0, iParam1, 4))
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
		func_1569(cParam0);
		if (func_1570(cParam0))
		{
			func_1571(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_893(cParam0, 524288);
		func_1572(&(cParam0->f_7375), 4);
		if (func_1561(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1562();
		}
		return true;
	}
	return false;
}

void func_940(char[4] cParam0)
{
	func_1573(cParam0);
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

bool func_941(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_892(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_893(cParam0, 2097152);
			func_266(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_933(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1516(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_892(cParam0))
			{
				func_893(cParam0, 2097152);
				func_894(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_894(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_892(cParam0))
		{
			func_893(cParam0, 2097152);
			func_1523(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_894(cParam0, Var0);
	}
	return true;
}

bool func_942(char[4] cParam0)
{
	return func_1574(&(cParam0->f_7375));
}

void func_943(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1575(cParam0))
		{
			func_437(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1576(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_944(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_255(cParam0->f_5423[iVar1]))
		{
			if (func_1577(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1578(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_945(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1579(cParam0))
		{
			func_437(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1576(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_946(char[4] cParam0)
{
	switch (func_1580(&iVar0))
	{
		case 1:
			func_1581(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_191(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_947(char[4] cParam0, int iParam1)
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

int func_948(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1522(cParam0);
		func_893(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1516(cParam0, iParam1) };
	if (func_1371(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_949(char[4] cParam0, int iParam1)
{
	func_1582(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_227(cParam0, iParam1));
}

void func_950(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_935(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_893(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_893(cParam0, 4);
		func_893(cParam0, 8192);
		func_893(cParam0, 536870912);
		func_266(cParam0, 4);
		func_65(0);
		func_64(0);
		func_893(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1583(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_381(cParam0, 524288);
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
				func_1584(1, 1);
			}
		}
	}
}

void func_951(bool bParam0)
{
	if (!func_198(0, 0, 1) || bParam0)
	{
		iVar0 = func_1059();
		iVar1 = func_1062(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1585(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1585(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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
		return func_1586(bParam1, bParam2, bParam3);
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
		return func_1587(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1588(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1587(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_954(char[4] cParam0)
{
	return true;
}

bool func_955(char[4] cParam0)
{
	return true;
}

int func_956(char[4] cParam0)
{
	return 1;
}

char* func_957(int iParam0)
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
	return func_1458(iVar0);
}

char* func_958(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1589(iVar0);
}

char* func_959(int iParam0)
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

bool func_960(var uParam0, int iParam1)
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

char* func_961(var uParam0, int iParam1)
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
			return func_1590(uParam0->f_13[iVar0]->f_1);
		}
		iVar0++;
	}
	return "";
}

void func_962(var uParam0, int iParam1)
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

void func_963(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_744(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = -1569615261;
	*uParam0->f_3[iVar0] = { Var1 };
}

void func_964(int* iParam0)
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
					func_888(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

int func_965(int iParam0)
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

void func_966(int iParam0)
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

void func_967()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_968(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_969();
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
	if (func_1591(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_969()
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
		iVar3 = func_1592(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_970(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_302((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_328((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_302((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_328((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_1593(iParam0);
}

bool func_971(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_972(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_973(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_193((*Global_1347702)[iParam0]->f_15);
}

int func_974(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1594(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_986(iParam0);
		if (iVar2 >= 0)
		{
			func_1595(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1596(iVar1, 1);
			func_1595(iParam0, 1);
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
		iVar2 = func_986(iParam0);
		if (iVar2 >= 0)
		{
			func_1595(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_191(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1596(iVar0, 1);
					func_1595(iParam0, 1);
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

bool func_975(int iParam0)
{
	return func_297(iParam0) == 2;
}

void func_976(int iParam0)
{
	func_1597(iParam0);
}

bool func_977(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_1598((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_978(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_979(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_514(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1600(&iVar0, func_1599(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_972(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1602(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_1601()))
			{
				func_972(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_972(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

void func_980(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_274(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1603(iParam0);
	}
	if (func_971((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_981(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_302((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1604(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_1605(iParam0, 0);
	}
	func_1606(iParam0);
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

void func_981(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_982(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_191(iParam0))
	{
		return;
	}
	if (func_193(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	iVar0 = func_986(iParam0);
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

void func_983(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_981(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_980(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_274(&(Global_40.f_450[iVar1])))
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

bool func_984(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

Vector3 func_985(int iParam0)
{
	if (!func_274(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1607(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_986(int iParam0)
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

int func_987(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_1608(iParam0))
	{
		return 0;
	}
	if ((func_328((*Global_1347702)[59]->f_15, 1) && !func_328((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_1609(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_1610(iParam0)) && !Global_43891)
		{
			func_1612(iParam0, vdist2(func_1611(iParam0), Global_36), -1, 1, 1);
			func_1613((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_1602(func_1614(iParam0), func_12(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_458(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_1615(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_1314(Global_35, func_126(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_126(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_126(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_974((*Global_1835011)[iParam0]->f_1);
	if (!func_988(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_1616(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_976((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_206(4);
	}
	return 1;
}

bool func_988(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_989(int iParam0, int iParam1)
{
	if (!func_988(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

void func_990(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_988(iParam1))
	{
		iParam1 = func_986(func_12(iParam0));
		if (!func_988(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_1617(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_215())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1618(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_1617(iParam0, -1) && func_1619(iParam0))
			{
				func_1612(iParam0, fParam5, iParam1, bParam2, 1);
				func_1613((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_984(iParam0)) && !Global_43891)
	{
		func_1612(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_1620(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_1621(iParam0)) && !func_1620(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_982((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1622(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

bool func_991(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_992(int iParam0)
{
	if (!func_991(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_993(int iParam0)
{
	return iParam0 != 0;
}

int func_994(int iParam0)
{
	if (!func_991(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_995(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_thread_active(&(Global_1934765->f_275[iVar0]), false) && &Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_996()
{
	return (func_1623(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

int func_997()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_thread_active(&(Global_1934765->f_275[iVar0]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_998(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_999(int iParam0)
{
	iVar0 = func_475(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1624(iVar0);
}

int func_1000(int iParam0, int iParam1)
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
			func_1625(iVar2);
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

void func_1001()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1002(int iParam0, int iParam1)
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

int func_1003(int iParam0)
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

void func_1004(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1005(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1006(int iParam0, int iParam1)
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
			func_1626((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1626(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_191(&(Global_1898164->f_1[0])))
	{
		func_203(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1007(int iParam0, int iParam1, bool bParam2)
{
	if (!func_493(iParam0))
	{
		return;
	}
	func_1627(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1008(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1009(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1010(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1011()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1012(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1628(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1013(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1629();
	}
	else
	{
		return;
	}
	func_1630();
	Global_40.f_9.f_14 = func_286();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1631())
		{
			func_372(Global_1310720->f_1);
		}
		else if (func_1601() == func_373(Global_36, 1) && func_1632() != 2)
		{
			func_372(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_372(Global_36);
		}
		func_1633(Global_36, &vVar0, &uVar4);
		if (!func_1631())
		{
			if (func_1634(vVar0, Global_36) < func_1634(Global_40.f_9.f_7, Global_36))
			{
				func_372(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_373(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1633(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_231(Global_1935630, 8192);
	}
	func_1635();
}

bool func_1014(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_255(cParam0->f_5423[iVar0]))
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

bool func_1015(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_255(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1016(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	func_1636(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1017(int iParam0)
{
	return iParam0 > -1;
}

bool func_1018(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1019(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1017(iParam0))
		{
			return;
		}
	}
	func_1637(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1020(int iParam0)
{
	func_1019(iParam0, 36, 1);
}

void func_1021(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1017(iParam0))
		{
			return;
		}
	}
	func_1637(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1022(int iParam0, bool bParam1)
{
	if (!func_514(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1638(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1023(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1017(iParam0))
		{
			return false;
		}
	}
	func_1637(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1024(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_514(iParam0))
	{
		iVar1 = func_551(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1639(iParam0);
		}
	}
	if (func_1023(iParam0, 5, 1))
	{
		set_ped_config_flag(func_551(iParam0), 137, true);
	}
}

void func_1025(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1021(iParam0, 50, 1);
		func_1021(iParam0, 48, 1);
		func_1021(iParam0, 49, 1);
		func_1021(iParam0, 51, 1);
		func_1021(iParam0, 52, 1);
		func_1021(iParam0, 54, 1);
		func_1021(iParam0, 55, 1);
	}
	else
	{
		func_1019(iParam0, 50, 1);
		func_1019(iParam0, 48, 1);
		func_1019(iParam0, 49, 1);
		func_1019(iParam0, 51, 1);
		if (bParam3)
		{
			func_1019(iParam0, 54, 1);
		}
		else
		{
			func_1021(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1019(iParam0, 52, 1);
			if (bParam3)
			{
				func_1019(iParam0, 55, 1);
			}
		}
		else
		{
			func_1021(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1021(iParam0, 55, 1);
			}
		}
	}
}

void func_1026(int iParam0, bool bParam1)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_551(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_551(iParam0), 204, false);
	}
}

void func_1027(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_514(iParam0))
	{
		return;
	}
	if (func_515(iParam0))
	{
		if (!func_259(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1023(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1022(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_551(iParam0);
	if (((does_entity_exist(iVar1) && func_1640(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1019(iParam0, 2, 1);
	}
	else
	{
		func_1641(iParam0);
		func_1019(iParam0, 1, 1);
	}
}

int func_1028(int iParam0)
{
	if (!func_514(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1029(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1017(iParam1))
	{
		return;
	}
	iVar0 = func_1028(iParam1);
	if (func_1642(iParam1))
	{
		if (!func_1643(iParam1))
		{
			return;
		}
	}
	func_1021(iParam1, 39, 1);
	func_1644(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1644(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1644(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1019(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1645(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1030(int iParam0)
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

void func_1031(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1646(iVar6);
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

void func_1032(int iParam0, int iParam1)
{
	iParam0 = func_267(iParam0);
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

bool func_1033(int iParam0, int iParam1)
{
	iParam0 = func_267(iParam0);
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

void func_1034(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1648(func_1647(255), 109029619));
	}
	else if (func_305())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1061();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1035(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_1036(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1648(func_1647(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_305())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1061())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1037(int iParam0)
{
	iParam0 = func_267(iParam0);
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

float func_1038(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1039(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1493(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1035(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1035(iParam0) + 1;
	fVar6 = func_1649(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1650(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1040(int iParam0)
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

void func_1041(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1042()
{
	if (func_339())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1043(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1651((Global_40.f_4283.f_325 + iParam0));
}

void func_1044(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1042())
	{
		func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1045(int iParam0)
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

char* func_1046(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1047(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1048(int iParam0)
{
	func_1056(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1049(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1050(1);
	}
}

void func_1050(bool bParam0)
{
	if (bParam0)
	{
		func_1652(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1653(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1051(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -15;
	}
	return func_1654(iParam0);
}

bool func_1052(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_703(iParam1) || !func_703(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1053(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1054(int iParam0)
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

bool func_1055(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1056(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1655(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1057(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1058(int iParam0, int iParam1, bool bParam2)
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

int func_1059()
{
	iVar0 = func_557();
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

int func_1060(int iParam0)
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
	fVar1 = func_1585(absf(fVar1) < 1f, func_1585(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1061()
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

int func_1062(int iParam0)
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

int func_1063()
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

void func_1064(int iParam0, bool bParam1, int iParam2)
{
	func_1656((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1657(iParam0);
}

void func_1065(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1658(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1066(bool bParam0)
{
	bVar3 = false;
	if (func_1659(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1660(iVar5, &iVar2, &iVar0))
			{
				if (!func_577(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1661(iVar2);
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
							if (func_596(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1059() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1059() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1662();
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

char* func_1067(int iParam0)
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

bool func_1068(int iParam0)
{
	return func_596(iParam0) == -427144552;
}

bool func_1069(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_598(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1074(iParam0, &uVar0, 1, 0, 0);
	}
	return func_348(iParam0, 1, 0);
}

void func_1070(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_596(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_603(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_604(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_581(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_657(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1071(int iParam0, int iParam1)
{
	if (func_597(iParam0, 58855631))
	{
		func_1222(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1072(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	if (!func_605(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_473(bParam3), iParam0);
}

int func_1073(int iParam0, bool bParam1)
{
	if (func_609(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_473(bParam1), iParam0, 0);
}

bool func_1074(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1663(&iParam0);
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (!func_605(0))
	{
		bParam3 = true;
	}
	if (func_1068(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1205(0) };
			Var4.f_9 = -1591664384;
			if (!func_1097(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1098(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1206(iParam0, 1))
			{
				if (!func_1097(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1098(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1664(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1072(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1665(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_473(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1075(int iParam0, int iParam1)
{
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_596(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_597(iParam0, 1399091007))
	{
		func_1139(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1076(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1666(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1667(&Var0, func_1205(0));
	}
	if (!func_1668(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1149(iVar14);
	return uVar15;
}

int func_1077()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1078(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1079(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1669(iParam0);
	fVar1 = func_1670(iParam0);
	if ((Global_1347477->f_117 || !func_599(31)) || !func_1671(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1672(iVar0) >= 7)
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
	func_1673(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_707(_create_var_string(6, func_1674(iParam0), fVar1), "itemtype_textures", func_1675(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1080(int iParam0)
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

int func_1081(int iParam0, int iParam1)
{
	if (!func_1237(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1082(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_592() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1676(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1677(), 12);
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
			else if (func_1121() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1678(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1121(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1679(), 13);
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
			else if (func_1122() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1680(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1122(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1081(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1083(int iParam0, int iParam1, int iParam2)
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

bool func_1084(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1085(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1086(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1681(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_348(iVar2, 1, 0) || func_1683(func_1682(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1090(func_1681(iVar0))), func_1090(func_1681(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1121() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1684(iVar0)), func_1684(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1678() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1684(iVar0)), func_1684(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1684(iVar0)), func_1684(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1132(iParam3, func_1685(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1128(iVar2) - iParam7) >= func_1081(iParam3, func_1686(iVar0));
				}
				else
				{
					bVar1 = func_1128(iVar2) >= func_1081(iParam3, func_1686(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1128(iVar2) + iParam7) >= func_1081(iParam3, func_1686(iVar0));
			}
			else
			{
				bVar1 = func_1128(iVar2) >= func_1081(iParam3, func_1686(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1687(iVar2)), func_1687(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1688(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1689(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1689(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1122() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1690(iVar0)), func_1690(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1680() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1690(iVar0)), func_1690(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1690(iVar0)), func_1690(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1132(iParam3, func_1685(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1128(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1691(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1691(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1692(iVar2)), func_1692(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1087(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1679() >= 13)
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

bool func_1088(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_191(func_204(0)) && ((func_1693(0) == 1 || func_1693(0) == 8) || func_1693(0) == 6))
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

var func_1089(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1090(int iParam0)
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

bool func_1091(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1092(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1093(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1094(int iParam0)
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
			func_1694(1);
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
			func_1695(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1695(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1695(3);
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
			func_1696(1);
			break;
		case 34:
			func_1697(1);
			break;
		case 35:
			func_1698(1);
			break;
		case 36:
			break;
		case 37:
			func_1699(0);
			break;
		case 38:
			func_1700(0);
			break;
		case 39:
			func_1701(0);
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
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_326(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_326(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_326(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_394()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_326(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1162(99217379) || func_1702(99217379) == 2110595215)
				{
					if (func_1061())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_348(iVar0, 1, 0))
					{
						func_650(iVar0, 1, 752097756);
					}
					func_629(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_348(1013902307, 1, 0))
				{
					func_650(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_348(1013902307, 1, 0))
				{
					func_650(1013902307, 1, 752097756);
				}
				if (!func_348(142640135, 1, 0))
				{
					func_650(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_348(786809402, 1, 0))
				{
					func_650(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_348(786809402, 1, 0))
				{
					func_650(786809402, 1, 752097756);
				}
				if (!func_348(-518019409, 1, 0))
				{
					func_650(-518019409, 1, 752097756);
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
			func_1703();
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

bool func_1095(int iParam0)
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

int func_1096(int iParam0, int iParam1)
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

bool func_1097(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1665(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1098(int iParam0, var uParam1, int iParam2)
{
	if (func_1704(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1099(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_577(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_473(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1100(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1705(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1209(*uParam1, &Var0, bParam6, 0))
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
	if (!func_605(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_473(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1101(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1706(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1102(int iParam0)
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
	iVar2 = func_286();
	func_335(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1103(int iParam0)
{
	if (func_1707(iParam0))
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

bool func_1104(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1105(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1106(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_599(50))
			{
				if (!func_599(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_599(51))
			{
				if (!func_599(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1107(int iParam0, int iParam1, var uParam2)
{
	if (!func_577(iParam1, 0))
	{
		return false;
	}
	if (func_596(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_601(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_675(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_597(iParam1, 866047851))
	{
		iVar5 = func_676(iVar4, 1);
		if (func_1708(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_601(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_597(iParam1, -1638171711))
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
			if (func_1709(1868067663, &uVar0))
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
				iVar10 = func_1710(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1710(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_601(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_597(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1711(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1108()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1109()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1110()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_348(func_1712(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1111(int iParam0)
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

bool func_1112(int iParam0, int iParam1)
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
	if (func_348(iVar0, 1, 0) && func_348(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1113(int iParam0)
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

bool func_1114(int iParam0, int iParam1)
{
	iVar0 = func_1713(iParam0);
	if (iVar0 != -15)
	{
		func_335(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_704(iVar0, 1);
	}
	return false;
}

void func_1115(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1116(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1117(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1118(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1119(int iParam0)
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
	iVar1 = func_1128(iVar9);
	iVar2 = func_1128(iVar10);
	iVar3 = func_1128(iVar11);
	iVar5 = func_1129(iVar9);
	iVar6 = func_1129(iVar10);
	iVar7 = func_1129(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1128(iVar12);
		iVar8 = func_1129(iVar12);
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

void func_1120(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1121()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1714(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1122()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1123(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1691(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1691(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1691(iVar0))
		{
			*sParam2++;
		}
		if (func_1691(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1691(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1691(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1691(iVar0))
		{
			*sParam2++;
		}
		if (func_1691(iVar1))
		{
			*sParam2++;
		}
		if (func_1691(iVar0) && func_1691(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1691(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1691(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1691(iVar0))
		{
			*sParam2++;
		}
		if (func_1691(iVar1))
		{
			*sParam2++;
		}
		if (func_1691(iVar2))
		{
			*sParam2++;
		}
		if ((func_1691(iVar0) && func_1691(iVar1)) && func_1691(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1691(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1691(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1691(iVar0))
		{
			*sParam2++;
		}
		if (func_1691(iVar1))
		{
			*sParam2++;
		}
		if (func_1691(iVar2))
		{
			*sParam2++;
		}
		if (func_1691(iVar3))
		{
			*sParam2++;
		}
		if (((func_1691(iVar0) && func_1691(iVar1)) && func_1691(iVar2)) && func_1691(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1124(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1715(1497516462);
			func_1716(2016141805);
			func_1716(1010885152);
			func_1716(-502324015);
			break;
		case 2016141805:
			func_1716(1497516462);
			func_1715(2016141805);
			func_1716(1010885152);
			func_1716(-502324015);
			break;
		case 1010885152:
			func_1716(1497516462);
			func_1716(2016141805);
			func_1715(1010885152);
			func_1716(-502324015);
			break;
		case -502324015:
			func_1716(1497516462);
			func_1716(2016141805);
			func_1716(1010885152);
			func_1715(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1716(-538889627);
			func_1716(-538880323);
			func_1716(-1056767524);
			func_1715(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1717();
			func_1715(iParam0);
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
			func_1718();
			func_1715(iParam0);
			break;
		case 2019386373:
			func_1716(-664252410);
			func_1716(2109952320);
			func_1715(2019386373);
			break;
		case -664252410:
			func_1716(2019386373);
			func_1716(2109952320);
			func_1715(-664252410);
			break;
		case 2109952320:
			func_1716(2019386373);
			func_1716(-664252410);
			func_1715(2109952320);
			break;
		case -1674179981:
			func_1716(-1835851517);
			func_1716(-1838352012);
			func_1715(-1674179981);
			break;
		case -1835851517:
			func_1716(-1674179981);
			func_1716(-1838352012);
			func_1715(-1835851517);
			break;
		case -1838352012:
			func_1716(-1674179981);
			func_1716(-1835851517);
			func_1715(-1838352012);
			break;
		case -1717960576:
			func_1716(210001842);
			func_1715(-1717960576);
			break;
		case 210001842:
			func_1716(-1717960576);
			func_1715(210001842);
			break;
		case -150493654:
			func_1716(-1271608261);
			func_1716(1846061697);
			func_1716(-1145519186);
			func_1715(-150493654);
			break;
		case -1271608261:
			func_1716(-150493654);
			func_1716(1846061697);
			func_1716(-1145519186);
			func_1715(-1271608261);
			break;
		case 1846061697:
			func_1716(-150493654);
			func_1716(-1271608261);
			func_1716(-1145519186);
			func_1715(1846061697);
			break;
		case -1145519186:
			func_1716(-150493654);
			func_1716(-1271608261);
			func_1716(1846061697);
			func_1715(-1145519186);
			break;
		case 1766284049:
			func_1716(280705402);
			func_1716(1926308480);
			func_1715(1766284049);
			break;
		case 280705402:
			func_1716(1766284049);
			func_1716(1926308480);
			func_1715(280705402);
			break;
		case 1926308480:
			func_1716(1766284049);
			func_1716(280705402);
			func_1715(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1716(439465264);
				func_1715(1609506757);
			}
			else
			{
				func_1716(1609506757);
				func_1716(439465264);
			}
			break;
		case 439465264:
			if (func_486(1609506757))
			{
				if (bParam1)
				{
					func_1715(439465264);
				}
				else
				{
					func_1716(439465264);
				}
			}
			break;
		case 1822001510:
			func_1716(-1612662716);
			func_1715(1822001510);
			break;
		case -1612662716:
			func_1716(1822001510);
			func_1715(-1612662716);
			break;
		case 1306158345:
			func_1716(1952610440);
			func_1716(-223469678);
			func_1716(-404698347);
			func_1716(1517904467);
			func_1715(1306158345);
			break;
		case 1952610440:
			func_1716(1306158345);
			func_1716(-223469678);
			func_1716(-404698347);
			func_1716(1517904467);
			func_1715(1952610440);
			break;
		case -223469678:
			func_1716(1306158345);
			func_1716(1952610440);
			func_1716(-404698347);
			func_1716(1517904467);
			func_1715(-223469678);
			break;
		case -404698347:
			func_1716(1306158345);
			func_1716(1952610440);
			func_1716(-223469678);
			func_1716(1517904467);
			func_1715(-404698347);
			break;
		case 1517904467:
			func_1716(1306158345);
			func_1716(1952610440);
			func_1716(-223469678);
			func_1716(-404698347);
			func_1715(1517904467);
			break;
		case 1376646519:
			func_1716(931649776);
			func_1716(-434590080);
			func_1716(1743048395);
			func_1716(449774763);
			func_1715(1376646519);
			break;
		case 931649776:
			func_1716(1376646519);
			func_1716(-434590080);
			func_1716(1743048395);
			func_1716(449774763);
			func_1715(931649776);
			break;
		case -434590080:
			func_1716(1376646519);
			func_1716(931649776);
			func_1716(1743048395);
			func_1716(449774763);
			func_1715(-434590080);
			break;
		case 1743048395:
			func_1716(1376646519);
			func_1716(931649776);
			func_1716(-434590080);
			func_1716(449774763);
			func_1715(1743048395);
			break;
		case 449774763:
			func_1716(1376646519);
			func_1716(931649776);
			func_1716(-434590080);
			func_1716(1743048395);
			func_1715(449774763);
			break;
		case -1414537028:
			func_1716(38162571);
			func_1716(1350391819);
			func_1716(54073871);
			func_1715(-1414537028);
			break;
		case 38162571:
			func_1716(-1414537028);
			func_1716(1350391819);
			func_1716(54073871);
			func_1715(38162571);
			break;
		case 1350391819:
			func_1716(-1414537028);
			func_1716(38162571);
			func_1716(54073871);
			func_1715(1350391819);
			break;
		case 54073871:
			func_1716(-1414537028);
			func_1716(38162571);
			func_1716(1350391819);
			func_1715(54073871);
			break;
		case 198200492:
			func_1715(198200492);
			func_1716(-1124061431);
			func_1716(52706132);
			func_1716(-259123672);
			break;
		case -1124061431:
			func_1716(198200492);
			func_1715(-1124061431);
			func_1716(52706132);
			func_1716(-259123672);
			break;
		case 52706132:
			func_1716(198200492);
			func_1716(-1124061431);
			func_1715(52706132);
			func_1716(-259123672);
			break;
		case -259123672:
			func_1716(198200492);
			func_1716(-1124061431);
			func_1716(52706132);
			func_1715(-259123672);
			break;
		case -919512195:
			func_1715(-919512195);
			func_1716(-1925798111);
			func_1716(420709909);
			func_1716(1703426636);
			break;
		case -1925798111:
			func_1715(-1925798111);
			func_1716(-919512195);
			func_1716(420709909);
			func_1716(1703426636);
			break;
		case 420709909:
			func_1715(420709909);
			func_1716(-919512195);
			func_1716(-1925798111);
			func_1716(1703426636);
			break;
		case 1703426636:
			func_1715(1703426636);
			func_1716(-919512195);
			func_1716(-1925798111);
			func_1716(420709909);
			break;
		case -1223121209:
			func_1715(-1223121209);
			func_1716(630808005);
			break;
		case 630808005:
			func_1715(630808005);
			func_1716(-1223121209);
			break;
		case 1453909576:
			func_1715(1453909576);
			func_1716(1643531967);
			break;
		case 1643531967:
			func_1715(1643531967);
			func_1716(1453909576);
			break;
		case 0:
			func_1715(0);
			func_1716(473295046);
			func_1716(-1738165526);
			break;
		case 473295046:
			func_1715(473295046);
			func_1716(0);
			func_1716(-1738165526);
			break;
		case -1738165526:
			func_1715(-1738165526);
			func_1716(0);
			func_1716(473295046);
			break;
		case 932909855:
			func_1715(932909855);
			func_1716(2051822093);
			break;
		case 2051822093:
			func_1715(2051822093);
			func_1716(932909855);
			break;
		case 405586984:
			func_1715(405586984);
			func_1716(1509509592);
			func_1716(-959357075);
			func_1716(-1311865656);
			break;
		case 1509509592:
			func_1715(1509509592);
			func_1716(405586984);
			func_1716(-959357075);
			func_1716(-1311865656);
			break;
		case -959357075:
			func_1715(-959357075);
			func_1716(1509509592);
			func_1716(405586984);
			func_1716(-1311865656);
			break;
		case -1311865656:
			func_1715(-1311865656);
			func_1716(1509509592);
			func_1716(-959357075);
			func_1716(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1715(-524145696);
			}
			else
			{
				func_1716(-524145696);
			}
			func_1716(1626481264);
			func_1716(282809459);
			break;
		case 282809459:
			func_1715(282809459);
			func_1716(1626481264);
			func_1716(-524145696);
			break;
		case 1626481264:
			func_1715(1626481264);
			func_1716(-524145696);
			func_1716(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1715(885203519);
			}
			else
			{
				func_1716(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1715(-1080627546);
			}
			else
			{
				func_1716(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_486(iParam0))
				{
					func_1715(iParam0);
				}
			}
			else if (func_486(iParam0))
			{
				func_1716(iParam0);
			}
			break;
	}
}

void func_1125(int iParam0)
{
	if (!func_1719(iParam0))
	{
		func_1721(func_1720(iParam0));
	}
}

int func_1126()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1719(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1127(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1128(iVar9);
	iVar2 = func_1128(iVar10);
	iVar3 = func_1128(iVar11);
	iVar5 = func_1129(iVar9);
	iVar6 = func_1129(iVar10);
	iVar7 = func_1129(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1128(iVar12);
		iVar8 = func_1129(iVar12);
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

int func_1128(int iParam0)
{
	if (func_348(iParam0, 1, 0))
	{
		iVar0 = func_581(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1129(int iParam0)
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

int func_1130(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1131(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1132(int iParam0, int iParam1)
{
	if (!func_1237(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1133(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1132(iParam1, 5) || iParam0 == func_1132(iParam1, 6)) || iParam0 == func_1132(iParam1, 7)) || iParam0 == func_1132(iParam1, 8)) || iParam0 == func_1132(iParam1, 9))
	{
		func_1123(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_593(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_595(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1134(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1132(iParam1, 5) || iParam0 == func_1132(iParam1, 6)) || iParam0 == func_1132(iParam1, 7)) || iParam0 == func_1132(iParam1, 8)) || iParam0 == func_1132(iParam1, 9))
	{
		if (func_1123(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_593(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_595(51, 0, 0, iVar0, func_1081(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_593(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_595(51, 0, 0, iVar0, func_1081(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1135()
{
	if (func_192((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1136(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1137(int iParam0)
{
	if (!func_1722(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1138(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1139(int iParam0, int iParam1, var uParam2)
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

bool func_1140(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1723();
	if (iParam2 == 39)
	{
		Var0 = { func_688(iParam0, 1, 0) };
		iParam2 = func_676(func_689(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_597(iParam0, 866047851) && func_1708(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1142(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1724(func_1210(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1725(iParam2);
	func_1726(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1191(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1191(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1197(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1727(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1728(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1728(&(Global_1946804->f_1378), 1, 0);
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
				func_1450(func_1210(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1141(bool bParam0, bool bParam1, bool bParam2)
{
	func_1729(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1142(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1143()
{
	func_1730(&(Global_1946804->f_2776));
	func_1731(32768);
	func_1450(1108822547, 8, 6);
}

int func_1144(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_676(iParam0, 1);
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

void func_1145(int iParam0)
{
	if (func_1732(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1733(Var0);
}

void func_1146(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1733(Var0);
}

bool func_1147(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_473(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1148(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1149(int iParam0)
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

float func_1150()
{
	if (func_1734())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1735(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1735(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1736();
	fVar2 = func_1737();
	fVar3 = func_1738();
	fVar4 = func_1739();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1740()));
	fVar7 = (func_1735(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1741(3, round((to_float(iVar8) * fVar10)), 0);
	func_1742(3, fVar9, fVar9 > 100f);
	return func_1743(fVar7, -100f, 100f);
}

float func_1151()
{
	if (func_1734())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1735(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1735(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1736();
	fVar2 = func_1737();
	fVar3 = func_1738();
	fVar4 = func_1739();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1740()));
	fVar7 = (func_1735(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1741(2, round((to_float(iVar8) * fVar10)), 0);
	func_1742(2, fVar9, fVar9 > 100f);
	return func_1743(fVar7, -100f, 100f);
}

float func_1152()
{
	if (func_1734())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1735(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1744())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1745())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1735(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1736();
	fVar2 = func_1737();
	fVar3 = func_1738();
	fVar4 = func_1739();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1740()));
	fVar7 = (func_1735(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1741(1, round((to_float(iVar8) * fVar10)), 0);
	func_1742(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1735(0);
	}
	return func_1743(fVar7, -100f, 100f);
}

bool func_1153(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1154(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1155(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_577(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1074(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_605(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_473(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1156(int iParam0, bool bParam1)
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
				return func_1746();
			}
			break;
	}
	return 0;
}

int func_1157(int iParam0)
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

bool func_1158(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1159(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1158(iParam0))
	{
		return;
	}
	if (func_1747(iParam0))
	{
		return;
	}
	if (!func_1748(iParam0))
	{
		func_1749(iParam0, 1, 0);
	}
	iVar0 = func_1750(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1751(iParam0, 512))
		{
			func_687(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_215() && !bParam1) && !func_198(0, 0, 1))
	{
		func_715(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1752(iParam0, 6);
	if (bParam2)
	{
		if (!func_198(0, 0, 1))
		{
			func_368(1, 4);
		}
	}
}

bool func_1160(int iParam0, bool bParam1)
{
	return func_1156(iParam0, 0) < func_1753(iParam0, bParam1);
}

bool func_1161(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_601(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1162(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_676(iParam0, 1)] != &Global_1946804->f_57[func_676(iParam0, 1)];
}

void func_1163(int iParam0, int iParam1)
{
	if (func_597(iParam1, 130796156))
	{
		func_1754(iParam1, 0);
	}
	else if (func_597(iParam1, 930141731))
	{
		func_1754(iParam1, 1);
		func_1755(iParam0);
	}
}

void func_1164(var uParam0, int iParam1)
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

int func_1165(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1756(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1757(uParam2, iParam0, Var1);
	return 1;
}

int func_1166(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1167(int iParam0)
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

int func_1168(int iParam0)
{
	if (!func_1758(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1169()
{
	return !&Global_1911774;
}

void func_1170(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1171(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1172(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1173(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1174(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1759(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1175(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1759(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1176(bool bParam0)
{
	if (bParam0)
	{
		func_319(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1177();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1760(2032023096);
		func_322(-615217896);
		func_672(655868243, 1, 1, -142743235, 1);
		func_1762(146323340, func_1761());
		Var0 = { func_1501() };
		if (func_1763(&Var0) == -1387633835)
		{
			func_1764(&Var0);
			func_1765(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1766(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1494(iVar6) == 2010625508)
			{
				func_1767(iVar6, iVar7);
				func_1768(iVar6, iVar8);
				func_1769(iVar6, iVar9);
				func_1770(iVar6, 0);
				if (func_1771(iVar6))
				{
					func_1772(iVar6);
				}
				iVar10 = func_1773(iVar8);
				func_1774(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1177()
{
	if (!func_1775(-1898635967, func_1761(), 1))
	{
		return 0;
	}
	if (func_339())
	{
		if (!func_1775(146323340, func_1761(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1178()
{
	func_333(34411519);
	func_333(834124286);
	func_333(-570967010);
}

void func_1179(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_319(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_319(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_672(-1080874779, 3, 1, -142743235, 1);
		func_672(-223790555, 3, 1, -142743235, 1);
		func_672(1566032147, 3, 1, -142743235, 1);
		func_672(891311852, 5, 1, -142743235, 1);
		func_672(-1353737667, 5, 1, -142743235, 1);
		func_672(-330313895, 5, 1, -142743235, 1);
		func_672(-2051332199, 5, 1, -142743235, 1);
		func_672(1237770824, 5, 1, -142743235, 1);
		func_672(-1795542128, 3, 1, -142743235, 1);
		func_672(-1757588258, 3, 1, -142743235, 1);
		func_672(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1766(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1494(iVar0) == 153881023)
			{
				func_1767(iVar0, iVar1);
				func_1768(iVar0, iVar2);
				func_1769(iVar0, iVar3);
				func_1770(iVar0, 0);
				if (func_1771(iVar0))
				{
					func_1772(iVar0);
				}
				iVar4 = func_1773(iVar2);
				func_1774(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1177();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1180(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1776(iParam0);
	if (bParam3)
	{
		func_714(iParam0, sParam1, iParam2);
	}
}

bool func_1181(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1182(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1183()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1147("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1148(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1098(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1149(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1149(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1184(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1777(Param1, iParam5, &Var5, 0))
	{
		func_1100(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1155(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1778(Var19, 1);
}

bool func_1185(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1666(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1667(&Var0, func_1205(0));
	}
	if (!func_1668(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1148(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1100(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1149(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1186(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_577(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_688(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1779(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1099(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1100(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1187(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_597(iParam0, 606799272))
		{
			func_1780(iParam0, iParam1);
		}
		if (func_597(iParam0, -1112814642) && func_597(iParam0, -1697809989))
		{
			func_625(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1188(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1781(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_601(iParam0) != -999503751)
		{
			func_1782(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_601(iParam0) != -999503751)
	{
		func_1782(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1783(iParam0, 1);
	return 1;
}

void func_1189()
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

void func_1190(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1784(0);
	}
	if (bParam0)
	{
		func_1202(8);
		func_1202(512);
	}
	else
	{
		func_1202(8);
		func_1202(16);
	}
}

void func_1191(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1192(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_678();
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

int func_1193(int iParam0)
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

void func_1194(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1785(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1210(iVar0, 1);
			if (func_1447(iVar0, iParam1))
			{
				vVar4 = { func_680(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1446(iVar7, 4))
				{
					func_1450(iVar7, 4, 6);
				}
			}
			else
			{
				func_1449(iVar7, 4, 6);
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

bool func_1195(int iParam0)
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
	func_1786(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1196(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1197(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_601(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1447(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1726(iVar1, iVar3);
		}
	}
	if (func_1162(-1586649372) && func_1447(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1726(iVar1, iVar3);
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
						func_1726(iVar1, iVar3);
					}
				}
			}
			func_1787(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1787(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1726(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1787(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1726(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1726(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1787(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1787(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1726(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1787(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1726(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1726(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_601(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1726(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1711(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_601(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1726(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_597(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1726(iVar1, iVar3);
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
						func_1726(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1711(&(Global_1946804->f_1497.f_1[iVar1])) || func_597(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1726(iVar1, iVar3);
					}
				}
			}
			switch (func_601(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_601(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1726(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_601(&(uParam0->f_1[iVar1])) || func_597(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1726(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1198(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1199(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1153(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1153(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1200(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1153(iParam0, 65536) && !func_1153(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1153(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1153(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1201()
{
	return Global_1905944->f_5694;
}

void func_1202(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1203(struct<4> Param0)
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
			if (func_1788(Param0))
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
			func_1789(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1202(8);
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
			if (func_1788(Param0))
			{
				return;
			}
			func_1789(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1202(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1146(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1204(bool bParam0)
{
	return func_1099(1328661203, func_1790(), -1591664384, bParam0);
}

struct<4> func_1205(bool bParam0)
{
	iVar0 = func_473(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1099(923904168, func_1204(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1099(923904168, func_1204(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1099(923904168, func_1204(bParam0), -740156546, 0);
}

bool func_1206(int iParam0, bool bParam1)
{
	if (func_601(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_599(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1207(bool bParam0)
{
	iVar0 = func_473(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1099(271701509, func_1204(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1099(271701509, func_1204(bParam0), 12999093, 0);
}

bool func_1208(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_601(iParam0);
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

bool func_1209(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_473(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1210(int iParam0, int iParam1)
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

int func_1211(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1212(int iParam0, int iParam1)
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

void func_1213(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1214(int iParam0, int iParam1)
{
	iVar0 = func_696(*iParam0);
	iVar1 = func_695(*iParam0);
	if (iParam1 < 1 || iParam1 > func_701(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1215(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1216(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1217(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1218(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1219(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1220(int iParam0)
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

bool func_1221(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1068(iParam0))
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

int func_1222(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_577(iParam0, 0))
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

int func_1223(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1663(&iParam0);
	if (!func_577(iParam0, 0))
	{
		return 0;
	}
	if (!func_605(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1072(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1665(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_473(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1224(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_597(iParam0, -5284486))
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
		if (func_1791(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_658(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_661(iVar62, iVar61);
					if (func_577(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1224(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1224(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1791(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1225(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1792(1);
}

void func_1226(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1793(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_325(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1793(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_325(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1227()
{
	return Global_40.f_4283.f_325;
}

bool func_1228(int iParam0)
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

bool func_1229(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1230(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1231(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1232(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1233(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1234(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_394();
	bVar1 = false;
	if (bVar0 && !func_461(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_461(37)) && !func_461(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_461(43)) && !func_461(44))
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
		if (func_1495(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1495(1) == 1)
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

int func_1235()
{
	return Global_40.f_1095.f_3054;
}

bool func_1236(int iParam0)
{
	iParam0 = func_267(iParam0);
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

bool func_1237(int iParam0, var uParam1)
{
	if (!func_1794(iParam0))
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

int func_1238()
{
	if (func_394())
	{
		if (!func_461(3))
		{
			return func_1795(43);
		}
		if (func_461(38) && !func_461(43))
		{
			return func_1796(8);
		}
	}
	return 0;
}

bool func_1239(int iParam0)
{
	if (!func_249(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1797(iParam0));
}

Vector3 func_1240(int iParam0, int iParam1)
{
	func_1237(15, &Var0);
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

int func_1241(int iParam0, int iParam1)
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
	iVar0 = func_1798(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1237(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1799(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1242(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1800(iParam0);
	if (func_486(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1243(int iParam0)
{
	if (!func_1237(15, &Var0))
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

bool func_1244(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1801(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1802(5))
	{
		if (func_1803(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1488(vParam0);
	if (bParam6)
	{
		iVar1 = func_373(vParam0, 1);
		if (func_116(iVar1) || func_1804(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1805(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1806())
	{
		if (func_1807(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1808(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_373(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1809(iParam3, iParam4))
	{
		return false;
	}
	if (func_1810(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1811(65536, 2))
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
		if (func_1812(vParam0, bParam10) || func_1813(vParam0, bParam10))
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

int func_1245(vector3 vParam0)
{
	iVar0 = func_1814(vParam0, 0f, 0f, 0, 2);
	return func_1814(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1246(int iParam0)
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

void func_1247(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1564(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 58706;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1248(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1564(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1249(var uParam0, int iParam1)
{
	func_1815(&(uParam0->f_7375.f_860), iParam1);
}

int func_1250(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 1;
		case 1:
			return 2;
	}
	return 0;
}

void func_1251(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_888(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1252(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	sVar0 = func_1816(iParam0);
	prefetch_srl(sVar0);
	if (bParam2)
	{
		_0xae00387e53b1e9fc();
	}
	if (bParam3)
	{
		_0xef1a8a484118735e();
	}
	_0x7c907e8a725e5fd2(bParam1);
}

void func_1253(int iParam0)
{
	if (iVar983 != iParam0)
	{
		iLocal_986 = iParam0;
	}
}

void func_1254(var uParam0, int iParam1)
{
	if (uParam0->f_3 != iParam1)
	{
		uParam0->f_3 = iParam1;
	}
}

void func_1255(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		func_1817(iParam0, get_entity_coords(iParam1, false, false));
	}
}

void func_1256(char[4] cParam0)
{
	iVar0 = 0;
	switch (func_1288(cParam0))
	{
		case 0:
			if (func_1818(&uLocal_902, 1f))
			{
				bLocal_950 = func_1819();
				if (bVar947)
				{
					iVar0 = "GNG3_S1_SETOFFN";
				}
				else
				{
					iVar0 = "GNG3_S1_SETOFFD";
				}
				if (func_1414(cParam0, iVar0, 0) || func_1335(&uLocal_902) >= 5f)
				{
					iLocal_190 = func_1820(408396114, func_451(5, func_132(func_33(cParam0))), 1);
					func_1291(cParam0, "GNG3_S1_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (bVar947)
			{
				iVar0 = "GNG3_S1_BANTNHT";
			}
			else
			{
				iVar0 = "GNG3_S1_BANTDAY";
			}
			if ((!func_1821() && func_1335(&uLocal_902) >= 4f) && func_1414(cParam0, iVar0, 0))
			{
				func_221(&uLocal_902);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1822() && !func_1821())
			{
				func_552(&uLocal_902);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (iVar983 <= 2)
			{
				if (!is_vehicle_stopped(iVar914))
				{
					func_552(&uLocal_902);
				}
				else if (func_1818(&uLocal_902, 10f) && func_1414(cParam0, "GNG1_S1_NOTROW", 0))
				{
					func_552(&uLocal_902);
				}
			}
			else
			{
				func_1291(cParam0, "GNG3_S2_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_1823(&iLocal_190);
				iLocal_190 = func_1820(408396114, func_451(5, func_132(iLocal_150)), 1);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1257(char[4] cParam0)
{
	if (!is_entity_dead(&(Local_207[0])))
	{
		func_1824(&(uLocal_293[0]), "pbl_Idles");
		func_1824(&(uLocal_293[0]), "pbl_BringUsOver");
		func_1824(&(uLocal_293[0]), "pbl_TakingTooLong");
		switch (Local_207[0]->f_3)
		{
			case 0:
				func_221(&(Local_207[0]->f_4));
				func_221(&uLocal_908);
				func_1254(Local_207[0], 1);
				break;
			case 1:
				if (!func_1825() && !func_1821())
				{
					if (func_1335(&uLocal_908) >= 8f)
					{
						if (!func_1826(iVar914, 1065353216) && func_1262(cParam0) == 0)
						{
							if (func_1335(&(Local_207[0]->f_4)) > 5f)
							{
								func_135(cParam0, 3);
								func_221(&(Local_207[0]->f_4));
								func_1254(Local_207[0], 49);
							}
						}
						else
						{
							func_221(&(Local_207[0]->f_4));
						}
					}
				}
				break;
			case 49:
				_set_anim_scene_playback_list_bool(&(uLocal_293[0]), "pbl_TakingTooLong", true);
				func_221(&uLocal_908);
				func_221(&(Local_207[0]->f_4));
				func_1254(Local_207[0], 50);
				break;
			case 50:
				if (_get_anim_scene_progress(&(uLocal_293[0])) >= 0.99f)
				{
					_set_anim_scene_playback_list_bool(&(uLocal_293[0]), "pbl_Idles", true);
					func_221(&(Local_207[0]->f_4));
					func_1254(Local_207[0], 1);
				}
				break;
		}
	}
}

bool func_1258()
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = iVar1;
		bVar0 = (bVar0 && func_1827(iVar2));
		iVar1++;
	}
	return bVar0;
}

bool func_1259()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_1304(Local_347[iVar1]->f_7, 1))
		{
		}
		else
		{
			if (func_446(0))
			{
				return false;
			}
			func_1828(iVar0, 1);
			Local_347[iVar1] = &Local_14.f_36[iVar1];
			if (does_entity_exist(&(Local_347[iVar1])))
			{
				func_902(0, 1);
				func_845(&(Local_347[iVar1]->f_7), 1);
				remove_all_ped_weapons(&(Local_347[iVar1]), false, true);
				set_ped_relationship_group_hash(&(Local_347[iVar1]), 1030835986);
				func_1272(&(Local_347[iVar1]), 0);
				set_ped_config_flag(&(Local_347[iVar1]), 186, false);
				set_ped_config_flag(&(Local_347[iVar1]), 301, true);
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

bool func_1260()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (func_1304(Local_455[iVar1]->f_7, 1))
		{
		}
		else
		{
			if (func_446(0))
			{
				return false;
			}
			func_1829(iVar0, 1);
			Local_455[iVar1] = &Local_14.f_3[iVar1];
			if (does_entity_exist(&(Local_455[iVar1])))
			{
				func_902(0, 1);
				func_845(&(Local_455[iVar1]->f_7), 1);
				remove_all_ped_weapons(&(Local_455[iVar1]), false, true);
				set_ped_relationship_group_hash(&(Local_455[iVar1]), 1030835986);
				func_1272(&(Local_455[iVar1]), 0);
				set_ped_config_flag(&(Local_455[iVar1]), 186, false);
				set_ped_config_flag(&(Local_455[iVar1]), 301, true);
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

void func_1261()
{
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	disable_control_action(0, -17122892, false);
	disable_control_action(0, -674562833, false);
	disable_control_action(0, -197984200, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -128997553, false);
	set_input_exclusive(0, 1530302706);
}

int func_1262(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1263(char[4] cParam0)
{
	switch (iVar983)
	{
		case 0:
			func_1830();
			func_1253(1);
			break;
		case 1:
			func_1831();
			if ((_0x1ecc76792f661cf5("GNG3_S1_BANTDAY") && get_current_scripted_conversation_line("GNG3_S1_BANTDAY") > 3) || (_0x1ecc76792f661cf5("GNG3_S1_BANTNHT") && get_current_scripted_conversation_line("GNG3_S1_BANTNHT") > 2))
			{
				func_1253(2);
			}
			break;
		case 2:
			if (func_1831() && func_1832())
			{
				func_221(&uLocal_905);
				set_player_control(player_id(), false, 4096, false);
				if (!func_446(67))
				{
					_task_vehicle_drive_to_point(Global_35, iVar914, get_offset_from_entity_in_world_coords(iVar914, 0f, 20f, 0f), 4f, 1f, 0);
				}
				else
				{
					_task_vehicle_drive_to_point(Global_35, iVar914, func_451(5, func_132(func_33(cParam0))), 4f, 1f, 0);
				}
				_0x7a49d40de437bc8d(iVar914, 0);
				func_1253(3);
			}
			break;
		case 3:
			if (func_222(&uLocal_905) >= 3000)
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (func_222(&uLocal_905) >= 4500)
			{
				if (is_srl_loaded() && _0xaa235e2f2c09e952(func_170(0)))
				{
					clear_ped_tasks_immediately(Global_35, true, true);
					_set_entity_coords_and_heading(Global_35, 3101.763f, -617.0657f, 48.7934f, 260.3362f, false, false, true);
					func_1833(0, 0);
					_0x702b75dc9d3ede56(true);
					set_wind_speed(20f);
					func_1834();
					func_1835();
					_0x5e3ccf03995388b5(func_1836(0), func_1837(0));
					play_sound_frontend("prison_shot", "gng3_CME_SoundSet", true, 0);
					func_174(0, 1, 1103626240);
					func_921(-1015925347, 0, 1, 1103626240);
					if (func_163(&(Local_380[2]), 0))
					{
						set_entity_coords(&(Local_380[2]), 3151.09f, -491.76f, 48.2292f, false, false, false, true);
					}
					func_221(&uLocal_905);
					func_1253(4);
				}
			}
			break;
		case 4:
			_0x702b75dc9d3ede56(true);
			func_1838(1, 0, 1, 1);
			if (func_1839(0, 0, 1))
			{
				if (get_clock_hours() <= 6)
				{
					set_clock_time(8, 30, 0);
				}
				else if (get_clock_hours() >= 20)
				{
					set_clock_time(6, 0, 0);
				}
				_0x0f2a2175734926d8("prison_shot", "gng3_CME_SoundSet");
				_0xa54d643d0773eb65(func_170(0), func_1840(0), 5);
				func_1833(0, 1);
				if (_does_anim_scene_exist(&(uLocal_293[0])))
				{
					_delete_anim_scene(&(uLocal_293[0]));
				}
				set_ped_into_vehicle(Global_35, iVar914, -1);
				func_1841();
				_set_ped_crouch_movement(Global_35, true, 0, false);
				_set_ped_crouch_movement(&(Local_207[0]), true, 0, false);
				func_888(iVar914, 3123.843f, -393.3612f, 41f, 205f, 128, 1073741824);
				func_1834();
				func_221(&uLocal_905);
				func_1253(5);
			}
			break;
		case 5:
			_0x702b75dc9d3ede56(true);
			func_1838(2, 0, 1, 1);
			if (func_1839(0, 1, 2))
			{
				if (is_entity_attached_to_any_vehicle(&(Local_207[0])))
				{
					func_447(&(Local_207[0]), 1, 1);
				}
				_0xa54d643d0773eb65(func_170(0), func_1840(1), 5);
				func_1833(0, 2);
				func_1834();
				play_sound_frontend("watchtower_shot", "gng3_CME_SoundSet", true, 0);
				set_clock_time(15, 0, 0);
				pause_clock(true, 0);
				if (func_163(&(Local_380[2]), 0))
				{
					task_play_anim(&(Local_380[2]), "AMB_WANDER@UPPERBODY_IDLES@HOT@LEFT_ARM@MALE_A@IDLE_A", "idle_a", 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					_0x2208438012482a1a(&(Local_380[2]), true, false);
				}
				func_221(&uLocal_905);
				func_1253(6);
			}
			break;
		case 6:
			func_1838(-1, 0, 0, 0);
			if (!func_1839(0, 2, -1) || !func_1271())
			{
				_0x702b75dc9d3ede56(true);
			}
			else
			{
				_0xa54d643d0773eb65(func_170(0), func_1840(2), 5);
				clear_focus();
				_0x0f2a2175734926d8("watchtower_shot", "gng3_CME_SoundSet");
				_0x43037abfe214a851();
				remove_anim_scene_entity(&(uLocal_293[1]), "arthur", Global_35);
				set_player_control(player_id(), true, 0, false);
				_0x7a49d40de437bc8d(iVar914, 1);
				func_1253(7);
			}
			break;
		case 7:
			_0x2412216fcc7b4e3e(func_170(0));
			func_1253(8);
			break;
		case 8:
			break;
	}
	if (iVar983 >= 4 && iVar983 <= 6)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	return iVar983 == 8;
}

void func_1264()
{
	func_1823(&iLocal_190);
	func_1842(&Local_207, 0);
	func_1842(&Local_226, 0);
	func_1843(&Local_380, 0);
	func_1843(&Local_405, 0);
	func_1843(&Local_455, 0);
	func_1843(&Local_414, 0);
	func_1843(&Local_314, 0);
	func_1843(&Local_347, 0);
}

void func_1265(char[4] cParam0)
{
	func_516(cParam0, iVar310);
	func_516(cParam0, Local_207[0]->f_1);
	func_58(cParam0, 0);
	func_1029(Local_207[0]->f_1, 11, 1, 0, 0);
	iLocal_313 = 0;
	Local_207[0]->f_1 = 0;
}

void func_1266(char[4] cParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_516(cParam0, &(Local_226[0]));
			func_260(cParam0, 13, &(Local_226[0]), 0, 0, 1, 0);
			Local_226[0] = 0;
			break;
		case 1:
			func_516(cParam0, &(Local_226[1]));
			func_260(cParam0, 0, &(Local_226[1]), 0, 1, 1, 0);
			Local_226[1] = 0;
			break;
		case 2:
			func_516(cParam0, &(Local_226[2]));
			func_260(cParam0, 6, &(Local_226[2]), 0, 1, 1, 0);
			Local_226[2] = 0;
			break;
		case 3:
			func_516(cParam0, &(Local_226[3]));
			func_260(cParam0, 15, &(Local_226[3]), 0, 0, 1, 0);
			Local_226[3] = 0;
			break;
		case 4:
			func_516(cParam0, &(Local_226[4]));
			func_260(cParam0, 19, &(Local_226[4]), 0, 0, 1, 0);
			Local_226[4] = 0;
			break;
		case 5:
			func_516(cParam0, &(Local_226[5]));
			func_260(cParam0, 17, &(Local_226[5]), 0, 0, 1, 0);
			Local_226[5] = 0;
			break;
		case 6:
			func_516(cParam0, &(Local_226[6]));
			func_260(cParam0, 4, &(Local_226[6]), 0, 0, 1, 0);
			Local_226[6] = 0;
			break;
	}
}

void func_1267(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1268(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1564(iVar0))
	{
		return;
	}
	iVar1 = func_1565(iParam3);
	if (!func_1566(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1269(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1270(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1271()
{
	if (!_does_anim_scene_exist(&(uLocal_293[3])))
	{
		return false;
	}
	if (_is_anim_scene_started(&(uLocal_293[3]), false))
	{
		return true;
	}
	if (!is_vehicle_driveable(iVar915, false, false))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(&(uLocal_293[3]), true, false))
	{
		return false;
	}
	set_anim_scene_entity(&(uLocal_293[3]), "rowboatswamp02", iVar915, 0);
	start_anim_scene(&(uLocal_293[3]));
	return true;
}

void func_1272(int iParam0, int iParam1)
{
	func_1844(iParam0, iParam1);
}

int func_1273(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_691(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_691(iVar4) && iVar4 != iVar0)
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
		if (iParam0 != Global_35 && func_691(iVar0))
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
		func_606(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1845(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1104(iVar0))
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

void func_1274(char[4] cParam0)
{
	switch (iVar994)
	{
		case 0:
			if (func_446(24) && !is_entity_dead(&(Local_380[2])))
			{
				func_221(&uLocal_1001);
				func_1846(2);
			}
			else if (func_1847(&Global_35) && !_0x5809dbca0a37c82b(func_1105(Global_35, 0, 1, 0)))
			{
				func_1848(0, 3f);
				func_221(&uLocal_1001);
				func_1846(1);
			}
			else if (func_1849())
			{
				func_221(&uLocal_1001);
				func_1846(1);
			}
			else if (func_1847(Local_380[2]))
			{
				func_1848(0, 3f);
				func_221(&uLocal_1001);
				func_1846(1);
			}
			break;
		case 1:
			if (func_1335(&uLocal_1001) >= 6f)
			{
				func_1850(cParam0, "GNG3_F_GUA", "", 1, 0);
			}
			break;
		case 2:
			if (func_1847(&Global_35) && !_0x5809dbca0a37c82b(func_1105(Global_35, 0, 1, 0)))
			{
				func_1848(0, 3f);
				func_221(&uLocal_1001);
				func_1846(1);
			}
			else if (is_entity_dead(&(Local_380[2])))
			{
				func_1846(0);
			}
			else if (func_1335(&uLocal_1001) >= 1f)
			{
				func_1850(cParam0, "GNG3_F_SPO", "", 1, 0);
			}
			break;
	}
}

void func_1275(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			if (func_1818(&uLocal_902, 1f))
			{
				if (func_1414(cParam0, "GNG3_S2_OBJ1", 0) || func_1335(&uLocal_902) >= 5f)
				{
					if (!does_blip_exist(iLocal_190))
					{
						iLocal_190 = func_1820(408396114, func_451(5, func_132(func_33(cParam0))), 1);
					}
					func_1291(cParam0, "GNG3_S2_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_221(&uLocal_902);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1418("GNG3_S2_OBJ1") && get_current_scripted_conversation_line("GNG3_S2_OBJ1") > 0)
			{
				func_1290(cParam0, "GNG3_S2_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_887(Global_35, &(Local_207[0]), 0, 1) > 50f)
			{
				if (does_blip_exist(iLocal_190))
				{
					remove_blip(&iLocal_190);
				}
			}
			else if (!does_blip_exist(iLocal_190))
			{
				iLocal_190 = func_1820(408396114, func_451(5, func_132(func_33(cParam0))), 1);
			}
			if (func_1285())
			{
				if (func_1822() || func_1821())
				{
					func_47(0, 0);
				}
				if (func_1414(cParam0, "GNG3_S2_TAKEOUT", 0))
				{
					if (does_blip_exist(iLocal_190))
					{
						remove_blip(&iLocal_190);
					}
					func_135(cParam0, 51);
				}
			}
			else if (func_1314(Global_35, func_451(5, func_132(func_33(cParam0))), 30f, 1, 1) || func_1851())
			{
				if (!func_1822() && !func_1821())
				{
					if (!func_1285())
					{
						func_1414(cParam0, "GNG3_S2_BANT1", 0);
					}
					if (does_blip_exist(iLocal_190))
					{
						remove_blip(&iLocal_190);
					}
					func_1852(Local_380[2], 831283580, -1118229366, 1);
					if (func_163(&(Local_380[2]), 0))
					{
						func_1291(cParam0, "GNG3_S2_OBJ2", -1082130432, 0, 0, -1, -1, 0);
					}
					func_221(&uLocal_902);
					func_135(cParam0, 3);
				}
			}
			else if (!func_1304(uVar304, 1) && func_1335(&uLocal_902) >= 40f)
			{
				func_1290(cParam0, "GNG3_S2_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_845(&uLocal_307, 1);
			}
			else if (func_446(50))
			{
				if (!func_1304(Local_207[0]->f_7, 8))
				{
					func_902(50, 0);
				}
			}
			else if ((func_1304(Local_207[0]->f_7, 8) && !func_1822()) && !func_1821())
			{
				if (func_1414(cParam0, "GNG3_S2_VANDAWD", 0))
				{
					func_902(50, 1);
				}
			}
			break;
		case 3:
			if ((!func_1304(uVar304, 2) && !func_1285()) && !func_1821())
			{
				if (func_163(&(Local_380[2]), 0))
				{
					func_1290(cParam0, "GNG3_S2_OBJ2", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				func_845(&uLocal_307, 2);
			}
			if (func_1285())
			{
				if (!is_entity_in_volume(Global_35, &(iLocal_918[1]), true, 0))
				{
					if (func_1822() || func_1821())
					{
						func_47(0, 0);
					}
					if (func_1414(cParam0, "GNG3_S2_TAKEOUT", 0))
					{
						func_135(cParam0, 51);
					}
				}
				else
				{
					func_135(cParam0, 51);
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1276(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(Local_207[iVar0])))
		{
			switch (Local_207[iVar0]->f_3)
			{
				case 0:
					switch (Local_207[iVar0]->f_8)
					{
						case 11:
							set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
							set_current_ped_weapon(&(Local_207[iVar0]), get_best_ped_weapon(&(Local_207[iVar0]), false, false), false, 0, false, false);
							task_swap_weapon(&(Local_207[iVar0]), 1, 1, 0, 0);
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 2);
							break;
						case 1:
							set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 1);
							break;
					}
					break;
				case 2:
					func_1853(&(Local_207[iVar0]), "gang3_SadieToVantage", 0);
					func_221(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 8);
					break;
				case 8:
					func_1854();
					if (func_1314(&(Local_207[iVar0]), func_175(9, 0), 5f, 1, 1))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 3);
					}
					else if (func_1285())
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 4);
					}
					break;
				case 3:
					func_1855();
					task_follow_nav_mesh_to_coord(0, func_175(9, 0), 1f, 20000, 0.25f, 0, func_1856(9, 0));
					task_pause(0, 1500);
					func_1857(&(Local_207[iVar0]), -1082130432, -1082130432, 0);
					func_552(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 9);
					break;
				case 9:
					if ((((is_ped_still(&(Local_207[iVar0])) && func_1818(&(Local_207[iVar0]->f_4), 6f)) && !_0x59643424b68d52b5(Global_35)) && !func_1858(Global_35, &(iLocal_918[1]), 1, 0)) && !func_1285())
					{
						func_1414(cParam0, "GNG3_S2_CLMDAWD", 0);
						func_221(&(Local_207[iVar0]->f_4));
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1277()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_314[iVar0])))
		{
			switch (Local_314[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_314[iVar0]->f_4));
					func_1859(Local_314[iVar0], 1);
					break;
			}
		}
		iVar0++;
	}
}

void func_1278()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_347[iVar0])))
		{
			switch (Local_347[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_347[iVar0]->f_4));
					func_1859(Local_347[iVar0], 1);
					break;
				case 1:
					if (!func_1860(&(Local_347[iVar0]), 993674639))
					{
						_task_start_scenario_in_place(&(Local_347[iVar0]), 2043209211, 0, false, 0, -1f, false);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1279()
{
	Var1.f_8 = -1;
	Var1.f_17 = 1097859072;
	Var1.f_18 = 1000;
	Var1.f_19 = 1067450368;
	Var1.f_20 = 5000;
	Var1.f_21 = 42;
	Var1.f_22 = 1103626240;
	Var1.f_23 = 1077936128;
	Var1.f_24 = 1106247680;
	Var1.f_25 = 1103101952;
	Var1.f_26 = 1097859072;
	Var1.f_27 = 1103626240;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_dead(&(Local_380[iVar0])))
		{
			switch (Local_380[iVar0]->f_3)
			{
				case 0:
					if (iVar0 == 2)
					{
						_0x9587913b9e772d29(&(Local_380[iVar0]), 0);
						func_221(&(Local_380[iVar0]->f_4));
						func_1859(Local_380[iVar0], 28);
					}
					else
					{
						func_221(&(Local_380[iVar0]->f_4));
						func_1859(Local_380[iVar0], 1);
					}
					break;
				case 28:
					if (iVar0 == 2)
					{
						if (func_1861())
						{
							func_221(&(Local_380[iVar0]->f_4));
							func_1859(Local_380[iVar0], 6);
						}
					}
					else if (func_1858(Global_35, &(iLocal_918[12]), 1, 0))
					{
						func_221(&(Local_380[iVar0]->f_4));
						func_1859(Local_380[iVar0], 6);
					}
					break;
				case 6:
					set_blocking_of_non_temporary_events(&(Local_380[iVar0]), false);
					set_ped_path_can_use_ladders(&(Local_380[iVar0]), false);
					task_combat_hated_targets_around_ped(&(Local_380[iVar0]), 200f, 0, 0);
					func_1859(Local_380[iVar0], 7);
					break;
			}
		}
		iVar0++;
	}
	if (!func_446(24))
	{
		func_1862(&Var1);
		func_1863(&Var1, 1);
		func_1864(&Var1, 1);
		func_1865(&Var1, 1);
		func_1866(&Var1, 1);
		func_1867(&Var1, 1);
		func_1868(&Var1, 150);
		func_1869(&Var1);
		func_1870(&Var1, 0);
		bVar30 = false;
		if (!is_entity_dead(&(Local_380[2])) && func_1861())
		{
			if (func_1871(&(Local_380[2]), 0, &Var1, &uVar29, 0, 0))
			{
				bVar30 = true;
			}
			else if (func_1872(&(Local_380[2]), &Var1, &uVar29, 0))
			{
				bVar30 = true;
			}
			if ((((((is_ped_performing_melee_action(Global_35, 8, 0) || is_ped_performing_melee_action(Global_35, 4096, 0)) || is_ped_performing_melee_action(Global_35, 16, 0)) || is_ped_performing_melee_action(Global_35, 32, 0)) || get_ped_config_flag(&(Local_380[2]), 9, true)) || is_ped_being_stealth_killed(&(Local_380[2]))) || _0x3bdfcf25b58b0415(&(Local_380[2])))
			{
				bVar30 = false;
			}
		}
		if (bVar30)
		{
			func_902(24, 1);
		}
	}
}

void func_1280()
{
	disable_control_action(2, 1101824977, false);
	disable_control_action(0, 2109526038, true);
	_0x9f9a829c6751f3c7(player_id(), 47, 1);
	switch (iVar991)
	{
		case 0:
			if (func_163(&(Local_380[2]), 0))
			{
				_0xfc3db99c8144cd81(&(Local_380[2]), &(iLocal_918[1]), 0, 0, 0);
			}
			func_1873(1);
			break;
		case 1:
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			else if (func_1874() || func_1875())
			{
				task_react(&(Local_380[2]), Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 0.5f, 0, 4);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if (func_446(17))
			{
				func_1873(2);
			}
			break;
		case 2:
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			else if (func_1874() || func_1875())
			{
				task_react(&(Local_380[2]), Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 0.5f, 0, 4);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if ((Global_36.f_2 > 47.55f && is_entity_in_volume(Global_35, &(iLocal_918[15]), false, 0)) || func_1876())
			{
				task_follow_nav_mesh_to_coord(&(Local_380[2]), 3150.102f, -493.6246f, 48.1966f, 1f, 20000, 0.25f, 0, 40000f);
				func_1873(3);
			}
			break;
		case 3:
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			else if ((func_1875() && !_0x3bdfcf25b58b0415(&(Local_380[2]))) && !is_ped_being_stealth_killed(&(Local_380[2])))
			{
				task_turn_ped_to_face_entity(&(Local_380[2]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if (!func_1860(&(Local_380[2]), 713668775))
			{
				func_221(&uLocal_994);
				func_1873(4);
			}
			break;
		case 4:
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			else if (has_entity_been_damaged_by_entity(&(Local_380[2]), Global_35, 1, 1))
			{
				task_combat_hated_targets_around_ped(&(Local_380[2]), 200f, 0, 0);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if (func_1874() || func_1875())
			{
				task_react(&(Local_380[2]), Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 0.5f, 0, 4);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if ((func_1877() && !_0x3bdfcf25b58b0415(&(Local_380[2]))) && !is_ped_being_stealth_killed(&(Local_380[2])))
			{
				task_turn_ped_to_face_entity(&(Local_380[2]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				func_221(&uLocal_994);
				func_1873(5);
			}
			else if ((((func_897(&uLocal_994) > 9.5f && func_1858(Global_35, &(iLocal_918[1]), 1, 0)) && func_1878()) && !_0x3bdfcf25b58b0415(&(Local_380[2]))) && !is_ped_being_stealth_killed(&(Local_380[2])))
			{
				task_turn_ped_to_face_entity(&(Local_380[2]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				func_221(&uLocal_994);
				func_1873(5);
			}
			break;
		case 5:
			if (has_ped_got_weapon(&(Local_380[2]), -160924582, 0, false))
			{
				if (func_897(&uLocal_994) > 2.5f)
				{
					_0xcef4c65de502d367(&(Local_380[2]), 0, 0, 1, 0);
				}
			}
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			else if (func_897(&uLocal_994) > 2f)
			{
				func_1873(8);
			}
			break;
		case 6:
			func_1289(&(Local_380[2]));
			func_1873(7);
			break;
		case 7:
			break;
		case 8:
			if (!func_163(&(Local_380[2]), 74))
			{
				func_1873(6);
			}
			break;
	}
}

void func_1281()
{
	if (!func_446(29))
	{
		iLocal_984 = create_pickup(-1973091726, 3152.32f, -489.89f, 48.61f, 16640, -1, true, 0, 0, 0f, 0);
		if (does_pickup_exist(iVar982))
		{
			set_pickup_not_lootable(iVar982, 1);
			func_902(29, 1);
		}
	}
}

void func_1282(char[4] cParam0, int iParam1)
{
	func_1879(cParam0);
	switch (iVar957)
	{
		case 0:
			if (iParam1 && func_1880())
			{
				func_1881(1);
			}
			break;
		case 1:
			if (func_1882())
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[2]), "pbl_GetDown", true);
				set_anim_scene_rate(&(uLocal_293[2]), 1.3f);
				func_1881(2);
			}
			break;
		case 2:
			if (_0x8d81e7824b7753f7(&(uLocal_293[2]), "s_DownLoop", 1))
			{
				set_anim_scene_rate(&(uLocal_293[2]), 1f);
				func_1881(3);
			}
			break;
		case 3:
			if (is_entity_dead(&(Local_380[1])) && is_entity_dead(&(Local_380[0])))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[2]), "pbl_BothGuardsShot", true);
				func_1881(7);
			}
			else if (is_entity_dead(&(Local_380[0])) && func_1818(&uLocal_962, 2.5f))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[2]), "pbl_AttackGuard1", true);
				set_entity_invincible(&(Local_380[1]), true);
				func_1881(7);
				func_902(47, 1);
			}
			else if (is_entity_dead(&(Local_380[1])) && func_1818(&uLocal_962, 2.5f))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[2]), "pbl_AttackGuard2", true);
				set_entity_invincible(&(Local_380[0]), true);
				func_1881(7);
				func_902(48, 1);
			}
			break;
		case 7:
			break;
	}
	if (iVar957 > 0)
	{
		func_1883();
		func_1884();
		func_1885();
	}
}

void func_1283()
{
	if (!func_446(69) && func_1858(Global_35, &(iLocal_918[1]), 1, 0))
	{
		func_902(69, 1);
	}
}

bool func_1284(char[4] cParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam1) && iParam9 == 422991367)
	{
		iParam9 = 408396114;
	}
	bVar0 = func_1886(cParam0, get_entity_coords(iParam1, true, false), sParam2, sParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (func_22(cParam0) != 1 && func_8(cParam0, 64))
	{
		if (bParam10)
		{
			func_1887(cParam0, iParam1, iParam9, bVar0, iParam6);
		}
		func_893(cParam0, 64);
	}
	return bVar0;
}

bool func_1285()
{
	return iVar991 == 7;
}

bool func_1286(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_in_angled_area(iParam0, *Local_168[iParam1], Local_168[iParam1]->f_3, Local_168[iParam1]->f_6, false, true, 0))
	{
		return true;
	}
	return false;
}

bool func_1287()
{
	return iVar995 == 1;
}

int func_1288(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1289(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_1823(&iVar0);
}

var func_1290(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1291(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_953(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1888(cParam0, sParam1))
	{
		sVar1 = func_1588(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1587(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1291(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1588(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

void func_1292()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (!func_163(&(Local_314[iVar1]), 0))
		{
		}
		else
		{
			switch (Local_314[iVar1]->f_3)
			{
				case 0:
					func_1859(Local_314[iVar1], 1);
					break;
				case 1:
					if (is_ped_shooting(Global_35) || is_ped_shooting(&(Local_207[0])))
					{
						func_221(&(Local_314[iVar1]->f_4));
						func_1859(Local_314[iVar1], 12);
					}
					break;
				case 12:
					if (func_897(&(Local_314[iVar1]->f_4)) > 0.8f)
					{
						func_1855();
						task_react(0, Global_35, Global_36, "DEFAULT_PANIC", 1f, 0, 4);
						task_cower(0, -1, 0, 0);
						func_1857(&(Local_314[iVar1]), 0.5f, 0.9f, 0);
						func_1859(Local_314[iVar1], 13);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1293()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_347[iVar0])))
		{
			switch (Local_347[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_347[iVar0]->f_4));
					func_1859(Local_347[iVar0], 1);
					break;
				case 1:
					if (!func_1860(&(Local_347[iVar0]), 993674639))
					{
						func_1889(&(Local_347[iVar0]), -905548901, 0, 0, 0, -1082130432);
					}
					if (is_ped_shooting(Global_35) || is_ped_shooting(&(Local_207[0])))
					{
						func_221(&(Local_347[iVar0]->f_4));
						func_1859(Local_347[iVar0], 12);
					}
					break;
				case 12:
					if (func_897(&(Local_314[iVar0]->f_4)) > get_random_float_in_range(0f, 1f))
					{
						func_1855();
						task_react(0, Global_35, Global_36, "DEFAULT_PANIC", 1f, 0, 4);
						task_cower(0, -1, 0, 0);
						func_1857(&(Local_347[iVar0]), 0.5f, 0.9f, 0);
						func_221(&(Local_347[iVar0]->f_4));
						func_1859(Local_347[iVar0], 13);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1294(char[4] cParam0)
{
	if (!func_163(&(Local_207[0]), 0))
	{
		return;
	}
	iVar0 = iVar1004;
	bVar1 = is_ped_shooting(Global_35);
	bVar2 = func_1890();
	switch (iVar1004)
	{
		case 0:
			if (is_entity_at_coord(&(Local_207[0]), func_175(1, 2), 1.8f, 1.8f, 1f, false, true, 0))
			{
				func_1891(1);
			}
			else
			{
				_hide_ped_weapons(&(Local_207[0]), 2, true);
				func_1855();
				task_follow_nav_mesh_to_coord(0, 3148.889f, -490.3755f, 42.165f, 2f, -1, 0.25f, 0, func_1892(&(Local_207[0]), &(Local_380[1]), 1));
				task_climb_ladder(0, 2f, 0, 0);
				func_1857(&(Local_207[0]), 3f, 3f, 0);
				func_1891(1);
			}
			break;
		case 1:
			if (is_entity_at_coord(&(Local_207[0]), func_175(1, 2), 1.8f, 1.8f, 1f, false, true, 0) && !_0x59643424b68d52b5(&(Local_207[0])))
			{
				func_221(&(Local_207[0]->f_4));
				func_1891(2);
			}
			break;
		case 2:
			if (func_897(&(Local_207[0]->f_4)) > 0.4f)
			{
				func_1891(3);
			}
			break;
		case 3:
			if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_action") || _0x1f0e401031e20146(&(uLocal_293[7]), "pl_action"))
			{
				if (!_0x1f0e401031e20146(&(uLocal_293[7]), "pl_action"))
				{
					clear_ped_tasks(&(Local_207[0]), 1, 0);
					_0x94a3c1b804d291ec(&(Local_207[0]), 0, 0, 0, 1);
					set_current_ped_weapon(&(Local_207[0]), -1569615261, false, 0, false, false);
					func_1893();
					set_anim_scene_entity(&(uLocal_293[7]), "IG_MrsAdler", &(Local_207[0]), 0);
					set_anim_scene_entity(&(uLocal_293[7]), "P_BINOCULARS01X", iVar307, 0);
					set_anim_scene_entity(&(uLocal_293[7]), "ARTHUR", Global_35, 0);
					_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_action", true);
					start_anim_scene(&(uLocal_293[7]));
				}
				func_1824(&(uLocal_293[7]), "pl_loop_2_blocked_view");
				func_1824(&(uLocal_293[7]), "pl_blocked_2_action_without_intro");
				func_1824(&(uLocal_293[7]), "pl_blocked_gunshot_react_02");
				func_1824(&(uLocal_293[7]), "pl_gunshot_react_01");
				func_1824(&(uLocal_293[7]), "pl_not_blocked_2_action_without_intro");
				func_1824(&(uLocal_293[7]), "pl_player_exit_response");
				func_1824(&(uLocal_293[7]), "pl_blocked_view_2_loop");
				func_1824(&(uLocal_293[7]), "pl_loop");
				func_1824(&(uLocal_293[7]), "pl_exit");
				func_1891(4);
			}
			break;
		case 4:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1))
			{
				func_221(&(Local_207[0]->f_4));
				func_1891(6);
			}
			break;
		case 5:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1) || _0x8d81e7824b7753f7(&(uLocal_293[7]), "s_action", 1))
			{
				if (!func_446(35) && !func_446(34))
				{
					if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_not_blocked_2_action_without_intro"))
					{
						_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_not_blocked_2_action_without_intro", true);
						func_1824(&(uLocal_293[7]), "pl_not_blocked_2_action_without_intro");
						func_221(&(Local_207[0]->f_4));
						func_1891(6);
					}
				}
				else if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_loop"))
				{
					_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_loop", true);
					func_1824(&(uLocal_293[7]), "pl_loop");
					func_221(&(Local_207[0]->f_4));
					func_1891(7);
				}
			}
			else if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_blocked_view_loop", 1))
			{
				if (!func_446(35) && !func_446(34))
				{
					if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_blocked_2_action_without_intro"))
					{
						_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_blocked_2_action_without_intro", true);
						func_1824(&(uLocal_293[7]), "pl_blocked_2_action_without_intro");
						func_221(&(Local_207[0]->f_4));
						func_1891(6);
					}
				}
				else if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_blocked_view_2_loop"))
				{
					_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_blocked_view_2_loop", true);
					func_1824(&(uLocal_293[7]), "pl_blocked_view_2_loop");
					func_221(&(Local_207[0]->f_4));
					func_1891(7);
				}
			}
			break;
		case 6:
			if (((!func_446(54) && !func_446(12)) && func_1858(Global_35, &(iLocal_918[1]), 1, 0)) && func_1335(&(Local_207[0]->f_4)) > 8f)
			{
				func_1414(cParam0, "GNG3_S2_PICKUP", 0);
				func_902(54, 1);
			}
			if (func_446(34))
			{
				func_221(&(Local_207[0]->f_4));
				func_1891(5);
			}
			else if (!get_anim_scene_bool(&(uLocal_293[7]), "b_breakout") && !_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_Action", 1))
			{
				if (bVar1)
				{
					func_1891(11);
				}
				else if (bVar2)
				{
					func_1891(9);
				}
				else if ((func_1894() && !func_446(36)) && func_446(69))
				{
					func_1891(13);
				}
				else if (func_897(&(Local_207[0]->f_4)) > 45f)
				{
					set_anim_scene_bool(&(uLocal_293[7]), "b_breakout", true, false);
				}
			}
			else if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_Action", 1))
			{
				set_anim_scene_bool(&(uLocal_293[7]), "b_breakout", false, false);
				func_221(&(Local_207[0]->f_4));
				func_902(35, 1);
				func_221(&uLocal_1036);
				func_1891(7);
			}
			break;
		case 7:
			if (bVar1)
			{
				func_1891(11);
			}
			else if (bVar2)
			{
				func_1891(9);
			}
			else if ((func_1894() && !func_446(36)) && func_446(69))
			{
				func_1891(13);
			}
			else if ((func_897(&(Local_207[0]->f_4)) > 45f && func_163(&(Local_380[1]), 0)) && func_163(&(Local_380[0]), 0))
			{
				_delete_anim_scene(&(uLocal_293[7]));
				set_current_ped_weapon(&(Local_207[0]), 2077870112, false, 0, false, false);
				task_swap_weapon(&(Local_207[0]), 1, 1, 0, 0);
				set_ped_accuracy(&(Local_207[0]), 100);
				set_ped_combat_attributes(&(Local_207[0]), 27, true);
				set_ped_combat_attributes(&(Local_207[0]), 30, true);
				_set_ped_crouch_movement(&(Local_207[0]), false, 0, false);
				set_combat_float(&(Local_207[0]), 2, 500f);
				func_1895(&uVar3, &(Local_207[0]), 0f, 0f, 0f, &(Local_380[1]), -1, 0, 1, 0);
				func_1891(8);
			}
			break;
		case 8:
			if (!func_163(&(Local_380[1]), 0) || !func_163(&(Local_380[0]), 0))
			{
				clear_ped_tasks(&(Local_207[0]), 1, 0);
				set_ped_combat_attributes(&(Local_207[0]), 27, false);
				set_ped_combat_attributes(&(Local_207[0]), 30, false);
				set_combat_float(&(Local_207[0]), 2, -1f);
				func_221(&(Local_207[0]->f_4));
				func_1891(15);
			}
			break;
		case 9:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1) || _0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_loop_2_blocked_view"))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_loop_2_blocked_view", true);
				func_1824(&(uLocal_293[7]), "pl_loop_2_blocked_view");
				func_902(39, 1);
				func_1891(10);
			}
			break;
		case 10:
			if (bVar1)
			{
				func_1891(11);
			}
			else if (!bVar2)
			{
				func_1891(5);
			}
			break;
		case 11:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1) && _0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_gunshot_react_01"))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_gunshot_react_01", true);
				func_1824(&(uLocal_293[7]), "pl_gunshot_react_01");
				func_1891(12);
			}
			else if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_blocked_view_loop", 1) && _0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_blocked_gunshot_react_02"))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_blocked_gunshot_react_02", true);
				func_1824(&(uLocal_293[7]), "pl_blocked_gunshot_react_02");
				func_1891(12);
			}
			break;
		case 12:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_blocked_view_loop", 1) || _0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1))
			{
				if (bVar2)
				{
					func_1891(9);
				}
				else
				{
					func_1891(5);
				}
			}
			break;
		case 13:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1) && _0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_player_exit_response"))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_player_exit_response", true);
				func_902(36, 1);
				func_1891(14);
			}
			break;
		case 14:
			if (_0x8d81e7824b7753f7(&(uLocal_293[7]), "s_loop", 1))
			{
				func_1891(5);
			}
			break;
		case 15:
			if (!func_26(&(Local_207[0]->f_4)) || func_897(&(Local_207[0]->f_4)) > 1f)
			{
				func_1891(16);
			}
			break;
		case 16:
			break;
	}
	if (iVar0 != iVar1004)
	{
		func_1294(cParam0);
	}
}

void func_1295(char[4] cParam0)
{
	if (iVar1004 <= 4)
	{
		return;
	}
	if ((((func_446(34) && !func_446(40)) && !func_1303(0)) && func_163(&(Local_380[1]), 0)) && func_163(&(Local_380[0]), 0))
	{
		func_1896(1, 0, 0);
	}
	if (((func_446(35) && func_897(&uLocal_1036) > 15f) && !func_446(40)) && !func_1303(1))
	{
		func_1896(0, 0, 0);
	}
	if (!func_163(&(Local_380[1]), 0) || !func_163(&(Local_380[0]), 0))
	{
		if ((iVar1004 != 8 && !func_1897(3)) && !func_446(37))
		{
			func_1898();
			func_1896(3, 0, 0);
		}
	}
	if (((func_897(&uLocal_902) > 30f && !func_446(40)) && !func_1899()) && (func_1303(1) || func_1303(0)))
	{
		func_1896(2, 0, 0);
	}
	if (func_446(37) && !func_1897(4))
	{
		func_1898();
		func_1896(4, 0, 0);
	}
	if (iVar1004 == 8)
	{
		func_1896(5, 0, 0);
	}
	if (!func_163(&(Local_380[1]), 0) || !func_163(&(Local_380[1]), 0))
	{
		if (iVar1004 == 8 || iVar1004 == 16)
		{
			func_1896(7, 0, 0);
		}
	}
	if (func_446(14) && !func_1821())
	{
		func_1896(6, 0, 0);
	}
	if (((func_1821() && !func_1900(6)) && func_1897(6)) && !func_1303(6))
	{
		func_1901(6, 0);
	}
	if (((!func_446(40) && func_1902()) && !func_1903()) && !func_1897(8))
	{
		func_1898();
		func_1896(8, 0, 0);
	}
	if (func_446(39) && !func_446(40))
	{
		func_902(39, 0);
		func_1896(10, 1, 1);
	}
	if (func_446(40) && !func_1897(9))
	{
		func_1898();
		func_1896(9, 0, 0);
	}
	if ((func_1903() && func_163(&(Local_380[1]), 0)) && func_163(&(Local_380[0]), 0))
	{
		func_902(37, 1);
	}
	if (func_1904())
	{
		return;
	}
	iVar0 = func_1905();
	if (iVar0 == -1)
	{
		return;
	}
	sVar1 = func_1906(iVar0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	if (func_1414(cParam0, sVar1, 0))
	{
		func_1907();
		func_1908(iVar0, 1);
	}
}

void func_1296(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			if (is_entity_in_volume(Global_35, &(iLocal_918[1]), false, 0) && !_0x59643424b68d52b5(Global_35))
			{
				if (func_1414(cParam0, "GNG3_S2_COME", 0))
				{
					func_135(cParam0, 1);
				}
			}
			else
			{
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (!func_446(68))
			{
				if (!func_446(12) && !_0x80bb243789008a82(Global_35, 1))
				{
					func_1291(cParam0, "GNG3_S2_OBJ3", -1082130432, 0, 0, -1, -1, 0);
					func_1299(1);
					func_135(cParam0, 2);
				}
				else
				{
					func_902(12, 1);
					func_1291(cParam0, "GNG3_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_221(&uLocal_902);
					func_135(cParam0, 4);
				}
			}
			break;
		case 2:
			if (func_446(12))
			{
				func_1291(cParam0, "GNG3_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_221(&uLocal_902);
				func_135(cParam0, 4);
			}
			else if (func_1849())
			{
				func_1299(0);
				func_1291(cParam0, "GNG3_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_221(&uLocal_902);
				func_135(cParam0, 4);
			}
			else if ((!func_1418("GNG3_S2_COME") && !func_1418("GNG3_S2_PICKUP")) && func_446(54))
			{
				func_1290(cParam0, "GNG3_S2_OBJ3", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1849())
			{
				func_1299(0);
				func_1291(cParam0, "GNG3_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_221(&uLocal_902);
				func_135(cParam0, 5);
			}
			else if (func_446(12))
			{
				func_1291(cParam0, "GNG3_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_221(&uLocal_902);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_897(&uLocal_902) > 1f)
			{
				func_1290(cParam0, "GNG3_S3_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (func_1302())
			{
				bVar0 = true;
			}
			else if (func_1849())
			{
				bVar0 = true;
			}
			else if (!func_1904() && (func_1303(1) || func_1303(0)))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (func_163(&(Local_380[1]), 0))
				{
					Local_380[1]->f_2 = _blip_add_for_entity(831283580, &(Local_380[1]));
				}
				if (func_163(&(Local_380[0]), 0))
				{
					Local_380[0]->f_2 = _blip_add_for_entity(831283580, &(Local_380[0]));
				}
				if (!func_1302())
				{
					func_1290(cParam0, "GNG3_S3_OBJ2", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				}
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1302() || (is_entity_dead(&(Local_380[1])) && is_entity_dead(&(Local_380[0]))))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1291(cParam0, "GNG3_S4_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
}

void func_1297()
{
	if (is_ped_shooting(Global_35))
	{
		func_221(&uLocal_1027);
	}
	else if (func_26(&uLocal_1027) && func_897(&uLocal_1027) > 10f)
	{
		func_552(&uLocal_1027);
	}
}

void func_1298()
{
	if (is_bullet_in_area(3209.695f, -576.3339f, 41.79442f, 20f, false))
	{
		func_221(&uLocal_1030);
	}
	else if (func_26(&uLocal_1030) && func_897(&uLocal_1030) > 1f)
	{
		func_552(&uLocal_1030);
	}
}

void func_1299(bool bParam0)
{
	if (!does_pickup_exist(iVar981))
	{
		return;
	}
	iVar0 = get_pickup_object(iVar981);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (bParam0)
	{
		if (!does_blip_exist(iVar982))
		{
			iLocal_985 = _blip_add_for_entity(1664425300, iVar0);
			_blip_set_modifier(iVar982, -401963276);
		}
	}
	else
	{
		func_1823(&iLocal_985);
	}
}

bool func_1300(char[4] cParam0)
{
	if (func_1304(Local_405[0]->f_7, 1))
	{
		return true;
	}
	if (func_446(0))
	{
		return false;
	}
	func_1909(0, 1);
	Local_405[0] = &Local_14.f_17[0];
	if (!does_entity_exist(&(Local_405[0])))
	{
		return false;
	}
	func_902(0, 1);
	func_845(&(Local_405[0]->f_7), 1);
	_set_ped_body_component(&(Local_405[0]), -1791829633);
	_update_ped_variation(&(Local_405[0]), false, true, true, true, false);
	func_145(cParam0, &(Local_405[0]), "GNG3_PRISON_GUARD_01", 0);
	func_425(cParam0, &(Local_405[0]), "S_M_M_SKPGUARD_01", 0, 0, 0, 0);
	remove_all_ped_weapons(&(Local_405[0]), false, true);
	if (func_33(cParam0) == iLocal_153)
	{
		_give_weapon_to_ped_2(&(Local_405[0]), 1845102363, 10, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		set_current_ped_weapon(&(Local_405[0]), 1845102363, true, 0, false, false);
	}
	set_ped_config_flag(&(Local_405[0]), 186, false);
	set_ped_config_flag(&(Local_405[0]), 301, true);
	set_entity_only_damaged_by_player(&(Local_405[0]), true);
	func_1910(&(Local_405[0]), 1);
	set_ped_relationship_group_hash(&(Local_405[0]), 1269650476);
	stop_ped_speaking(&(Local_405[0]), true);
	func_1911(&(Local_405[0]), 2);
	return true;
}

int func_1301()
{
	if (get_final_rendered_cam_fov() > 20f)
	{
		return 0;
	}
	vVar0 = { 3209.484f, -575.8503f, 41.93f };
	vVar3 = { func_1912(5, 0) };
	get_screen_coord_from_world_coord(vVar0, &Var6, &(Var6.f_1));
	get_screen_coord_from_world_coord(vVar3, &Var9, &(Var9.f_1));
	if (!_is_tracked_point_valid(iVar1017))
	{
		iLocal_1019 = create_tracked_point();
		set_tracked_point_info(iVar1017, vVar0, 1f);
	}
	if (!_is_tracked_point_valid(iVar1018))
	{
		iLocal_1020 = create_tracked_point();
		set_tracked_point_info(iVar1018, vVar3, 1f);
	}
	if ((((is_tracked_point_visible(iVar1017) && Var6 > 0.35f) && Var6 < 0.65f) && Var6.f_1 > 0.25f) && Var6.f_1 < 0.75f)
	{
		if (!func_26(&uLocal_1021))
		{
			func_221(&uLocal_1021);
		}
		func_552(&uLocal_1024);
		if (func_1335(&uLocal_1021) >= 2f)
		{
			return 3;
		}
		else
		{
			return 1;
		}
	}
	else if ((((is_tracked_point_visible(iVar1018) && Var9 > 0.25f) && Var9 < 0.75f) && Var9.f_1 > 0.25f) && Var9.f_1 < 0.75f)
	{
		if (!func_26(&uLocal_1024))
		{
			func_221(&uLocal_1024);
		}
		func_552(&uLocal_1021);
		if (func_1335(&uLocal_1024) >= 3f)
		{
			return 4;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		func_552(&uLocal_1021);
		func_552(&uLocal_1024);
	}
	return 0;
}

bool func_1302()
{
	return iVar959 == 7;
}

bool func_1303(int iParam0)
{
	return func_1913(iParam0, &uLocal_1010);
}

bool func_1304(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1305()
{
	if (does_entity_exist(&(Local_380[1])))
	{
		if (is_entity_dead(&(Local_380[1])))
		{
			resurrect_ped(&(Local_380[1]));
		}
		set_entity_only_damaged_by_player(&(Local_380[1]), true);
		set_anim_scene_entity(&(uLocal_293[5]), "S_M_M_SKPGUARD_01", &(Local_380[1]), 0);
	}
	start_anim_scene(&(uLocal_293[5]));
	func_902(53, 1);
}

void func_1306(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 26)
	{
		Global_1572864->f_10 = func_1914(iParam0);
	}
	else
	{
		Global_1572864->f_10 = -1;
	}
}

void func_1307(char[4] cParam0)
{
	if (((does_entity_exist(&(Local_380[1])) && is_entity_dead(&(Local_380[1]))) && _does_anim_scene_exist(&(uLocal_293[5]))) && _is_anim_scene_started(&(uLocal_293[5]), false))
	{
		func_1850(cParam0, "GNG3_F_HOSTAGE", "", 1, 0);
	}
}

void func_1308(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			func_1291(cParam0, "GNG3_S4_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			iLocal_190 = func_1915(408396114, 3222.811f, -571.1642f, 42.0131f, 12f, 1);
			func_552(&uLocal_902);
			func_135(cParam0, 1);
			break;
		case 1:
		case 2:
			if (func_1284(cParam0, &(Local_207[0]), "GNG3_S4_OBJ2", "GNG3_F_LEFT_S", 44f, 66f, 0, 0, 1, 422991367, 1))
			{
				func_1823(&iLocal_190);
			}
			else
			{
				if (!does_blip_exist(iLocal_190))
				{
					iLocal_190 = func_1915(408396114, 3222.811f, -571.1642f, 42.0131f, 12f, 1);
				}
				if (func_1288(cParam0) == 1)
				{
					if (!func_1821() && func_1818(&uLocal_902, 1f))
					{
						func_1290(cParam0, "GNG3_S4_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						func_135(cParam0, 2);
					}
				}
			}
			break;
	}
}

void func_1309(char[4] cParam0)
{
	_0x437c08db4febe2bd(&(Local_207[0]), "Cautious", 1f, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(Local_207[iVar0])))
		{
			switch (Local_207[iVar0]->f_3)
			{
				case 0:
					switch (Local_207[iVar0]->f_8)
					{
						case 11:
							if (_is_anim_scene_started(&(uLocal_293[7]), false) && !_0x1f0e401031e20146(&(uLocal_293[7]), "pl_exit"))
							{
								if (_0x23e33cb9f4a3f547(&(uLocal_293[7]), "pl_exit"))
								{
									_set_anim_scene_playback_list_bool(&(uLocal_293[7]), "pl_exit", true);
								}
								else
								{
									_delete_anim_scene(&(uLocal_293[7]));
								}
							}
							if (does_entity_exist(iVar307))
							{
								if ((!_does_anim_scene_exist(&(uLocal_293[7])) || !_is_anim_scene_started(&(uLocal_293[7]), false)) || has_anim_event_fired(&(Local_207[iVar0]), 59116410))
								{
									func_182();
								}
							}
							if ((!_is_anim_scene_started(&(uLocal_293[7]), false) && !_0x59643424b68d52b5(&(Local_207[iVar0]))) && get_is_waypoint_recording_loaded("gang3_SadieToGuards"))
							{
								set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
								func_221(&(Local_207[iVar0]->f_4));
								if (func_1858(&(Local_207[iVar0]), &(iLocal_918[1]), 1, 0))
								{
									task_follow_waypoint_recording(&(Local_207[0]), "gang3_Sadie_Off_Tower", 0, 8, -1, 0, 0, -1);
								}
								func_1254(Local_207[iVar0], 2);
							}
							break;
						case 1:
							set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 1);
							break;
					}
					break;
				case 2:
					if (is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "gang3_Sadie_Off_Tower"))
					{
						if (get_ped_waypoint_progress(&(Local_207[iVar0])) >= 5)
						{
							func_1254(Local_207[iVar0], 3);
						}
						else if (get_ped_waypoint_progress(&(Local_207[iVar0])) >= 3)
						{
							func_1916(&(Local_207[iVar0]), 1073741824);
						}
					}
					else
					{
						task_follow_waypoint_recording(&(Local_207[0]), "gang3_Sadie_Off_Tower", 0, 8, -1, 0, 0, -1);
					}
					break;
				case 3:
					task_follow_waypoint_recording(&(Local_207[iVar0]), "gang3_SadieToGuards", 0, 0, -1, 0, 0, -1);
					func_221(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 8);
					break;
				case 8:
					if (is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "gang3_SadieToGuards"))
					{
						func_1917(cParam0);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1310()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_347[iVar0])))
		{
			switch (Local_347[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_347[iVar0]->f_4));
					func_1859(Local_347[iVar0], 1);
					break;
				case 1:
					if (!func_1860(&(Local_347[iVar0]), 993674639))
					{
						func_1889(&(Local_347[iVar0]), -905548901, 0, 0, 0, -1082130432);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1311()
{
	if (!_does_anim_scene_exist(&(uLocal_293[5])))
	{
		return;
	}
	if (_is_anim_scene_started(&(uLocal_293[5]), false))
	{
		return;
	}
	if (_is_anim_scene_started(&(uLocal_293[2]), false))
	{
		return;
	}
	if (!func_163(Global_35, 0))
	{
		return;
	}
	if (is_entity_in_volume(Global_35, &(iLocal_918[15]), false, 0))
	{
		return;
	}
	if ((_0x59643424b68d52b5(Global_35) || is_ped_jumping(Global_35)) || is_ped_falling(Global_35))
	{
		return;
	}
	if (Global_36.f_2 > 44.5f)
	{
		return;
	}
	func_1305();
}

void func_1312()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		iVar2 = &Local_455[iVar1];
		if (!does_entity_exist(iVar2))
		{
		}
		else if (!_0x5102307ce88798eb(iVar2))
		{
			request_ped_visibility_tracking(iVar2);
		}
		else if (is_tracked_ped_visible(iVar2))
		{
			func_221(vLocal_967[iVar1]);
		}
		else if (func_897(vLocal_967[iVar1]) > 10f)
		{
			if (func_887(iVar2, Global_35, 0, 0) > 20f)
			{
				_0x3088634cf8c819cf(iVar2);
				func_1918(Local_455[iVar1], 0);
				Local_455[iVar1] = 0;
			}
		}
		iVar0++;
	}
}

bool func_1313(int iParam0)
{
	if (func_1541(iParam0))
	{
		return true;
	}
	if (!func_1919(iParam0, &iVar0, &iVar1, &vVar2, &iVar6))
	{
		return false;
	}
	if (iVar0 != 0)
	{
		iLocal_311[iParam0] = create_object(iVar0, vVar2, true, true, false, false, true);
	}
	else if (iVar1 != 0)
	{
		iLocal_311[iParam0] = _create_weapon_object(iVar1, iVar6, vVar2, true, 1f);
	}
	if (func_1541(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1314(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1634(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1315()
{
	if (func_1105(Global_35, 0, 1, 0) == 392538360)
	{
		return true;
	}
	if (func_1105(Global_35, 2, 1, 0) == 392538360)
	{
		return true;
	}
	return false;
}

void func_1316(bool bParam0)
{
	func_1920(&Local_455, bParam0);
}

void func_1317(int iParam0, bool bParam1, bool bParam2)
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

bool func_1318()
{
	return _uilog_has_displayed_cached_objective();
}

void func_1319(char[4] cParam0, int iParam1, int iParam2)
{
	func_1921(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1320(char[4] cParam0)
{
	func_381(cParam0, 8388608);
	func_1343(cParam0, "MultiStart");
	func_1420(cParam0, "MultiStart");
	func_150(cParam0, 140f);
	func_149(cParam0, 120f);
}

void func_1321()
{
	if (!func_163(Global_35, 0))
	{
		return;
	}
	if (!func_163(&(Local_405[0]), 0))
	{
		return;
	}
	if (iVar1037 == 1 && is_disabled_control_pressed(0, -1879280170))
	{
		_0x99a6e246c315bf60(Global_35, 1.15f);
	}
	switch (iVar1037)
	{
		case 0:
			_0x0eabf182fbb63d72(Global_35, 0, 1);
			func_899(0, 0);
			func_1922(1);
			break;
		case 1:
			break;
	}
	if (iVar1037 >= 1)
	{
		disable_control_action(0, 130948705, false);
		disable_control_action(0, -1377110900, false);
		disable_control_action(0, -792592641, false);
		disable_control_action(0, 1287709438, false);
	}
}

void func_1322(char[4] cParam0)
{
	switch (iVar1043)
	{
		case 0:
			if (((!_does_anim_scene_exist(cParam0->f_7375.f_804) || !_is_anim_scene_started(cParam0->f_7375.f_804, false)) || _is_anim_scene_active(cParam0->f_7375.f_804)) || _0x005e6f28dd7ed58d(cParam0->f_7375.f_804, "ARTHUR"))
			{
				set_anim_scene_entity(&(uLocal_293[6]), "ARTHUR", Global_35, 0);
				set_anim_scene_entity(&(uLocal_293[6]), "S_M_M_SkpGuard_01^1", &(Local_405[0]), 0);
				start_anim_scene(&(uLocal_293[6]));
				func_1923(1);
			}
			break;
		case 1:
			if (_0x005e6f28dd7ed58d(&(uLocal_293[6]), "ARTHUR"))
			{
				_0x56e9c26cd29d1ed6(Global_35, 1396960379);
				_0x57f35552e771be9d(Global_35, 14);
				_0x789dabd18e9024db(Global_35, 1039, 0);
				_0x630e7b01f091a197(Global_35, 1924414210);
				_0x56e9c26cd29d1ed6(&(Local_405[0]), 1396960379);
				_0x57f35552e771be9d(&(Local_405[0]), 14);
				_0x789dabd18e9024db(&(Local_405[0]), 1039, 0);
				_0x630e7b01f091a197(&(Local_405[0]), 1924414210);
				set_ped_config_flag(&(Local_405[0]), 315, true);
				task_put_ped_directly_into_grapple(Global_35, &(Local_405[0]), 0, 0, 0, 1, 0);
				force_ped_motion_state(Global_35, 1926482157, false, 0, false);
				force_ped_motion_state(&(Local_405[0]), 1926482157, false, 0, false);
				func_1923(2);
			}
			break;
		case 2:
			break;
	}
}

void func_1323(char[4] cParam0)
{
	if (func_1334(Global_35, func_451(5, func_132(iLocal_153)), 1) > 160f)
	{
		func_1850(cParam0, "GROUP_FAIL", "", 1, 0);
	}
	if (is_entity_in_water(&(Local_405[0])))
	{
		func_169();
		func_1850(cParam0, "GNG3_F_HOSTAGE", "", 1, 0);
	}
}

void func_1324(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			iLocal_190 = func_1820(408396114, func_451(5, func_132(func_33(cParam0))), 1);
			func_552(&uLocal_902);
			func_1290(cParam0, "GNG3_S5_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1818(&uLocal_902, 1f) && func_1414(cParam0, "GNG3_S5_OBJ1", 0))
			{
				func_552(&uLocal_902);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (iVar1037 == 10 && func_1818(&uLocal_902, 1f))
			{
				func_1414(cParam0, "GNG3_WLKTK_A", 0);
				func_552(&uLocal_902);
				if (func_461(33) && func_1925(func_1924(33)) == 1)
				{
					func_135(cParam0, 4);
				}
				else
				{
					func_135(cParam0, 5);
				}
			}
			break;
		case 4:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_WLKTK_ALT1", 0);
				func_135(cParam0, 6);
			}
			break;
		case 5:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_WLKTK_ALT2", 0);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if ((!func_390(iVar952, 2) && func_446(44)) && !func_1821())
			{
				func_135(cParam0, 8);
			}
			if ((!func_390(iVar952, 1) && func_1334(Global_35, 3302.668f, -596.7073f, 42.1077f, 1) < 3f) && !func_1821())
			{
				func_135(cParam0, 9);
			}
			if ((!func_390(iVar952, 8) && func_1334(Global_35, 3316.808f, -603.5316f, 43.09838f, 1) < 3f) && !func_1821())
			{
				func_135(cParam0, 10);
			}
			if ((!func_390(iVar952, 4) && func_1334(Global_35, 3327.23f, -615.2495f, 43.10504f, 1) < 3f) && !func_1821())
			{
				func_135(cParam0, 7);
			}
			if (func_1314(Global_35, func_451(5, func_132(iLocal_153)), 20f, 1, 1))
			{
				func_135(cParam0, 3);
			}
			break;
		case 8:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_S5_WT_BNT1", 0);
				func_419(&uLocal_955, 2);
				func_135(cParam0, 6);
			}
			break;
		case 9:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_S5_WT_BNT2", 0);
				func_419(&uLocal_955, 1);
				func_135(cParam0, 6);
			}
			break;
		case 7:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_S5_LOWER", 0);
				func_419(&uLocal_955, 4);
				func_135(cParam0, 6);
			}
			break;
		case 10:
			if (!func_1821())
			{
				func_1414(cParam0, "GNG3_S5_MARCH", 0);
				func_419(&uLocal_955, 8);
				func_135(cParam0, 6);
			}
			break;
		case 3:
			if (func_1314(Global_35, func_451(5, func_132(iLocal_153)), 20f, 1, 1) && func_1414(cParam0, "GNG3_S5_COMPLY", 0))
			{
				func_135(cParam0, 11);
			}
			break;
		case 11:
			if (!func_1821() && func_1414(cParam0, "GNG3_S5_DROPWEP", 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
	if ((func_1314(Global_35, func_451(5, func_132(iLocal_152)), 28f, 1, 1) && func_1818(&uLocal_899, 20f)) && !func_1926(cParam0))
	{
		func_1290(cParam0, "GNG3_S5_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		func_552(&uLocal_899);
	}
	if (func_1288(cParam0) > 2)
	{
		if (!func_1821())
		{
			if (func_1818(&uLocal_902, 9f) && func_1414(cParam0, "GNG3_S5_OHMYGOD", 0))
			{
				func_552(&uLocal_902);
			}
		}
		else if (func_26(&uLocal_902))
		{
			func_552(&uLocal_902);
		}
	}
}

void func_1325()
{
	if (!func_163(&(Local_207[0]), 0))
	{
		return;
	}
	iVar0 = func_1927();
	vVar1 = { get_entity_coords(&(Local_207[0]), true, false) };
	switch (iVar1040)
	{
		case 0:
			set_blocking_of_non_temporary_events(&(Local_207[0]), true);
			clear_ped_tasks(&(Local_207[0]), 1, 0);
			set_ped_using_action_mode(&(Local_207[0]), true, -1, 0);
			func_1928(1);
			break;
		case 1:
			func_1929();
			if (func_1927() >= 3)
			{
				task_aim_at_entity(&(Local_207[0]), &(Local_314[2]), -1, 0, 0);
				func_1928(2);
			}
			break;
		case 2:
			if (func_163(&(Local_314[2]), 0) && func_446(58))
			{
				task_go_to_coord_while_aiming_at_entity_using_combat_style(&(Local_207[0]), 3247.83f, -596.6143f, 42.96185f, &(Local_314[2]), 1f, 0, 20f, 2f, 1, 0, 0, -687903391, 20000, 0);
				func_1852(Local_314[2], 831283580, 0, 0);
				func_221(&uLocal_1043);
				func_1928(3);
			}
			break;
		case 3:
			if (func_1314(&(Local_207[0]), 3247.83f, -596.6143f, 42.96185f, 1f, 1, 1))
			{
				func_1930();
				func_1928(4);
			}
			break;
		case 4:
			if (_is_anim_scene_active(&(uLocal_293[10])))
			{
				func_1317(&(Local_314[2]), 0, 0);
				func_902(43, 1);
				func_1928(5);
			}
			break;
		case 5:
			if (((func_883(Global_35, &(Local_207[0]), 3f, 1) && iVar0 > 28) && iVar0 < 35) && Global_36.f_1 < vVar1.y)
			{
				func_1931();
			}
			func_1929();
			if (func_1927() >= 27)
			{
				task_go_to_coord_while_aiming_at_entity_using_combat_style(&(Local_207[0]), 3286.346f, -595.9282f, 43.23828f, &(Local_314[0]), 2f, 0, 0.05f, 2f, 1, 0, 0, -687903391, 20000, 0);
				set_ped_config_flag(&(Local_207[0]), 87, true);
				func_1852(Local_314[0], 831283580, 0, 0);
				func_1852(Local_314[1], 831283580, 0, 0);
				func_221(&uLocal_1043);
				func_1928(6);
			}
			break;
		case 6:
			func_1932();
			if ((iVar289 > 3 && _0x1f0e401031e20146(&(uLocal_293[11]), "pl_surrender_loop")) && (func_1314(&(Local_207[0]), 3286.346f, -595.9282f, 43.23828f, 0.25f, 1, 1) || !func_1860(&(Local_207[0]), -1758697641)))
			{
				func_1933();
				set_ped_config_flag(&(Local_207[0]), 87, false);
				func_1928(7);
			}
			break;
		case 7:
			if (_is_anim_scene_active(&(uLocal_293[11])))
			{
				func_1317(&(Local_314[0]), 0, 0);
				func_1317(&(Local_314[1]), 0, 0);
				func_902(44, 1);
				func_1928(8);
			}
			break;
		case 8:
			if (((func_883(Global_35, &(Local_207[0]), 3f, 1) && iVar0 > 46) && iVar0 < 52) && func_1934())
			{
				func_1931();
			}
			if (func_883(Global_35, &(Local_207[0]), 8f, 1) && iVar0 > 66)
			{
				func_1935();
			}
			if (iVar0 > 37 && iVar0 < 42)
			{
				func_1935();
			}
			if (iVar0 > 50 && iVar0 < 57)
			{
				func_1935();
			}
			func_1929();
			if (func_1927() > 69)
			{
				task_go_to_entity_while_aiming_at_entity_using_combat_style(&(Local_207[0]), &(Local_314[3]), &(Local_314[3]), 2f, 0, 1056964608, 1082130432, 1, 0, -687903391, 0);
				func_1852(Local_314[3], 831283580, 0, 0);
				func_221(&uLocal_1043);
				func_1928(9);
			}
			break;
		case 9:
			func_1932();
			if (func_883(&(Local_207[0]), &(Local_314[3]), 1.4f, 1))
			{
				clear_ped_tasks(&(Local_207[0]), 1, 0);
				task_melee(&(Local_207[0]), &(Local_314[3]), 1744450544, 0, 1, 1065353216, 1, -1082130432);
				_0x8acc0506743a8a5c(&(Local_207[0]), 166028666, 1, -1082130432);
				func_1928(10);
			}
			break;
		case 10:
			if (!func_163(&(Local_314[3]), 0) && !func_1860(&(Local_207[0]), -2055662961))
			{
				clear_ped_tasks(&(Local_207[0]), 1, 0);
				task_go_to_coord_while_aiming_at_coord(&(Local_207[0]), 3344.1f, -633.8f, 44.08f, 3358.35f, -643.7881f, 53.0843f, 1.5f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 0);
				func_902(45, 1);
				func_1928(11);
			}
			break;
		case 11:
			if (func_1334(&(Local_207[0]), 3344.1f, -633.8f, 44.08f, 0) < 0.5f)
			{
				task_aim_at_coord(&(Local_207[0]), 3358.35f, -643.7881f, 53.0843f, -1, 0, 0);
				_0x78815fc52832b690(&(Local_207[0]), 1);
				func_1928(12);
			}
			break;
		case 12:
			break;
	}
}

void func_1326()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_163(&(Local_414[iVar0]), 0))
		{
		}
		else
		{
			iVar1 = iVar0;
			switch (Local_414[iVar1]->f_3)
			{
				case 0:
					func_1859(Local_414[iVar1], 28);
					break;
				case 28:
					if (func_446(10))
					{
						func_221(&(Local_414[iVar1]->f_4));
						func_1859(Local_414[iVar1], 6);
					}
					break;
				case 6:
					switch (iVar1)
					{
						case 0:
							fVar2 = 0f;
							break;
						case 1:
							fVar2 = 4f;
							break;
						case 2:
							fVar2 = 1f;
							break;
						case 3:
							fVar2 = 2f;
							break;
						case 4:
							fVar2 = 1f;
							break;
					}
					if (func_897(&(Local_414[iVar1]->f_4)) > fVar2)
					{
						if (iVar1 == 2 || iVar1 == 4)
						{
							task_aim_at_entity(&(Local_414[iVar1]), Global_35, -1, 0, 0);
							func_1859(Local_414[iVar1], 1);
						}
						else
						{
							task_follow_nav_mesh_to_coord(&(Local_414[iVar1]), func_175(10, iVar0), 2f, 20000, 0.25f, 0, 40000f);
							func_1859(Local_414[iVar1], 2);
						}
					}
					break;
				case 2:
					if (func_1334(&(Local_414[iVar1]), func_175(10, iVar0), 1) < 1.5f)
					{
						task_aim_at_entity(&(Local_414[iVar1]), Global_35, -1, 0, 0);
						func_1859(Local_414[iVar1], 1);
					}
					break;
				case 1:
					break;
			}
		}
		iVar0++;
	}
}

void func_1327()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_347[iVar0])))
		{
			if ((!func_163(&(Local_314[0]), 0) || _0x1f0e401031e20146(&(uLocal_293[11]), "pl_surrender_loop")) && Local_347[iVar0]->f_3 != 27)
			{
				func_1859(Local_347[iVar0], 26);
			}
			switch (Local_347[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_347[iVar0]->f_4));
					func_1859(Local_347[iVar0], 12);
					break;
				case 12:
					if (!is_entity_dead(&(Local_314[1])))
					{
						task_cower(&(Local_347[iVar0]), -1, &(Local_314[1]), 0);
					}
					func_1859(Local_347[iVar0], 13);
					break;
				case 26:
					func_1855();
					_task_flee_from_coord(0, func_451(5, func_132(iLocal_153)), func_451(5, func_132(iLocal_154)), 300f, -1, 0, 2f, 0);
					func_1857(&(Local_347[iVar0]), 0f, 2f, 0);
					func_1859(Local_347[iVar0], 27);
					break;
			}
		}
		iVar0++;
	}
}

void func_1328()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_entity_dead(&(Local_314[iVar0])) && !is_ped_fleeing(&(Local_314[iVar0])))
		{
			switch (Local_314[iVar0]->f_3)
			{
				case 0:
					func_221(&(Local_314[iVar0]->f_4));
					set_ped_config_flag(&(Local_314[iVar0]), 250, true);
					func_1859(Local_314[iVar0], 1);
					clear_ped_tasks(&(Local_314[iVar0]), 1, 0);
					_set_ped_crouch_movement(&(Local_314[iVar0]), false, 0, false);
					if (iVar0 == 3)
					{
						_set_entity_coords_and_heading(&(Local_314[iVar0]), 3335.298f, -641.6983f, 42.9246f, 23.2814f, false, false, true);
					}
					break;
				case 1:
					if (iVar0 == 2)
					{
						_get_anim_scene_entity_matrix(&(uLocal_293[10]), "Guard01", &vVar1, false, 0, 2);
						task_follow_nav_mesh_to_coord(&(Local_314[iVar0]), vVar1, 1.5f, 20000, 0.25f, 0, 40000f);
						func_1859(Local_314[iVar0], 3);
					}
					else if (iVar0 == 3)
					{
						if (func_883(&(Local_314[iVar0]), Global_35, 60f, 1))
						{
							func_1855();
							task_follow_nav_mesh_to_coord(0, func_175(9, 2), 2f, 20000, 0.25f, 0, 40000f);
							task_aim_at_entity(0, Global_35, 2000, 0, 0);
							task_aim_at_entity(0, Global_35, -1, 0, 0);
							func_1857(&(Local_314[iVar0]), -1082130432, -1082130432, 0);
							func_221(&(Local_314[iVar0]->f_4));
							func_1859(Local_314[iVar0], 6);
						}
					}
					break;
				case 6:
					if ((func_883(Global_35, &(Local_314[iVar0]), 16f, 1) && is_entity_on_screen(&(Local_314[iVar0]))) || func_883(&(Local_207[0]), &(Local_314[iVar0]), 14f, 1))
					{
						clear_ped_tasks_immediately(&(Local_314[iVar0]), false, true);
						_0xcef4c65de502d367(&(Local_314[iVar0]), 1, 0, 0, 0);
						task_hands_up(&(Local_314[iVar0]), -1, Global_35, -1, false);
						func_221(&(Local_314[iVar0]->f_4));
						func_1859(Local_314[iVar0], 7);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1329()
{
	switch (iVar289)
	{
		case 0:
			if (func_163(&(Local_314[0]), 0) && func_163(&(Local_314[1]), 0))
			{
				func_1936();
				iLocal_291 = 1;
			}
			break;
		case 1:
			if (!_is_anim_scene_started(&(uLocal_293[11]), false))
			{
				func_1937();
			}
			else
			{
				iLocal_291 = 2;
			}
			break;
		case 2:
			if (func_883(&(Local_207[0]), &(Local_314[1]), 40f, 1) && _is_anim_scene_started(&(uLocal_293[11]), false))
			{
				func_1938();
			}
			if (_0x1f0e401031e20146(&(uLocal_293[11]), "pl_react"))
			{
				iLocal_291 = 3;
			}
			break;
		case 3:
			if (_is_anim_scene_started(&(uLocal_293[11]), false) && _get_anim_scene_progress(&(uLocal_293[11])) > 0.99f)
			{
				func_1939();
			}
			if (_0x1f0e401031e20146(&(uLocal_293[11]), "pl_surrender_loop"))
			{
				iLocal_291 = 4;
			}
			break;
	}
	func_1940(0, 11);
	func_1940(1, 11);
}

void func_1330()
{
	switch (iVar1038)
	{
		case 0:
			set_anim_scene_entity(&(uLocal_293[10]), "Guard01", &(Local_314[2]), 0);
			set_anim_scene_entity(&(uLocal_293[10]), "SADIE", &(Local_207[0]), 0);
			_0xdf7b5144e25cd3fe(&(uLocal_293[10]), "pl_reveal");
			func_1941(1);
			break;
		case 1:
			_get_anim_scene_entity_matrix(&(uLocal_293[10]), "Guard01", &vVar0, false, 0, 2);
			if (!_is_anim_scene_started(&(uLocal_293[10]), false) && is_entity_at_coord(&(Local_314[2]), vVar0, 1f, 1f, 1f, false, true, 0))
			{
				if (_is_anim_scene_loaded(&(uLocal_293[10]), true, false) && _0x23e33cb9f4a3f547(&(uLocal_293[10]), "pl_reveal"))
				{
					start_anim_scene(&(uLocal_293[10]));
					_0xdf7b5144e25cd3fe(&(uLocal_293[10]), "pl_surrender_loop");
					func_1941(2);
				}
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(uLocal_293[10]), false))
			{
				func_221(&uLocal_905);
				func_1941(3);
			}
			break;
		case 3:
			if (!func_446(58) && func_897(&uLocal_905) > 2f)
			{
				func_902(58, 1);
			}
			if (_is_anim_scene_started(&(uLocal_293[10]), false) && _get_anim_scene_progress(&(uLocal_293[10])) > 0.99f)
			{
				if (_0x1f0e401031e20146(&(uLocal_293[10]), "pl_disarm_ko"))
				{
					func_1941(10);
				}
				else if (_is_anim_scene_started(&(uLocal_293[10]), false) && _0x23e33cb9f4a3f547(&(uLocal_293[10]), "pl_surrender_loop"))
				{
					_set_anim_scene_playback_list_bool(&(uLocal_293[10]), "pl_surrender_loop", true);
					_0xdf7b5144e25cd3fe(&(uLocal_293[10]), "pl_Disarm_ko");
					func_1941(4);
				}
			}
			break;
		case 4:
			if (_0x1f0e401031e20146(&(uLocal_293[10]), "pl_surrender_loop"))
			{
				func_1941(10);
			}
			break;
	}
	func_1940(2, 10);
}

bool func_1331()
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		bVar0 = (bVar0 && func_1942(iVar1));
		iVar1++;
	}
	return bVar0;
}

void func_1332()
{
	if (func_446(59))
	{
		return;
	}
	if (func_1943(0) && func_1943(1))
	{
		func_902(59, 1);
	}
}

bool func_1333(char[4] cParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(&(Local_207[iParam1])))
	{
		if (func_1944(Local_207[iParam1]->f_8, &(Local_207[iParam1]), iParam2, &(Local_207[iParam1]->f_7)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_446(0))
	{
		return false;
	}
	if (iParam2 != iLocal_157)
	{
		Var0 = { func_224(func_1250(Local_207[iParam1]->f_8), func_132(func_33(cParam0))) };
	}
	else
	{
		Var0 = { func_1945(Local_207[iParam1]->f_8) };
	}
	func_880(cParam0, Local_207[iParam1]->f_8, Local_207[iParam1], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, 0, 0, 0, 1, 0);
	if (does_entity_exist(&(Local_207[iParam1])))
	{
	}
	else
	{
		return false;
	}
	if (!_0x3ab6c7b0bb0df4b1(&(Local_207[iParam1]), -1))
	{
		if (Local_207[iParam1]->f_8 == 11 && func_33(cParam0) == iLocal_149)
		{
			func_1251(&(Local_207[iParam1]), Var0, 0, 1073741824);
		}
		else
		{
			func_1251(&(Local_207[iParam1]), Var0, 2, 1073741824);
		}
	}
	set_blocking_of_non_temporary_events(&(Local_207[iParam1]), true);
	switch (iParam1)
	{
		case 0:
			if (func_33(cParam0) == iLocal_149)
			{
				set_ped_can_ragdoll(&(Local_207[iParam1]), false);
			}
			func_151(cParam0, &(Local_207[iParam1]), "MrsAdler", 0, 0, 0, 0);
			func_145(cParam0, &(Local_207[iParam1]), "SADIE_ADLER", 0);
			if (!_0x3ab6c7b0bb0df4b1(&(Local_207[iParam1]), -1))
			{
				if (func_33(cParam0) < iLocal_154)
				{
					func_1273(&(Local_207[iParam1]), -2088446466, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					set_current_ped_weapon(&(Local_207[iParam1]), -2088446466, true, 0, false, false);
				}
				else
				{
					func_1273(&(Local_207[iParam1]), 1240907314, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					set_current_ped_weapon(&(Local_207[iParam1]), 1240907314, true, 0, false, false);
				}
			}
			func_1273(&(Local_207[iParam1]), 2077870112, 0, 0, 9, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_1946(cParam0, &(Local_207[iParam1]), 128);
			func_1341(cParam0, &(Local_207[iParam1]), 1105014447, 422991367, 0, 0);
			break;
		case 1:
			remove_all_ped_weapons(&(Local_207[iParam1]), true, true);
			if (func_33(cParam0) == iLocal_154)
			{
				_give_weapon_to_ped_2(&(Local_207[iParam1]), 1240907314, -1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				set_current_ped_weapon(&(Local_207[iParam1]), 1240907314, true, 0, false, false);
			}
			func_151(cParam0, &(Local_207[iParam1]), "JohnMarston", 0, 0, 0, 0);
			func_145(cParam0, &(Local_207[iParam1]), "JOHN", 0);
			func_1019(1, 28, 1);
			func_1946(cParam0, &(Local_207[iParam1]), 128);
			if (func_33(cParam0) > iLocal_153)
			{
				func_1341(cParam0, &(Local_207[iParam1]), 1105014447, 422991367, 0, 0);
			}
			break;
	}
	return false;
}

float func_1334(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_1335(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_497(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_549() - uParam0->f_1);
}

void func_1336(bool bParam0)
{
	func_1920(&Local_380, bParam0);
}

void func_1337(bool bParam0)
{
	func_1920(&Local_314, bParam0);
}

void func_1338(bool bParam0)
{
	func_1920(&Local_347, bParam0);
}

void func_1339()
{
	set_anim_scene_entity(&(uLocal_293[8]), "player_zero", Global_35, 0);
	set_anim_scene_entity(&(uLocal_293[8]), "S_M_M_SKPGUARD_01", &(Local_405[0]), 0);
}

void func_1340()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 1:
				Local_1050[iVar1] = "GNG3_ESC_W0";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 2:
				Local_1050[iVar1] = "GNG3_S6_BANT1";
				Local_1050[iVar1]->f_2 = 1;
				Local_1050[iVar1]->f_7 = get_random_float_in_range(0.75f, 1.25f);
				break;
			case 3:
				Local_1050[iVar1] = "GNG3_S6_BANT1B";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 4:
				Local_1050[iVar1] = "GNG3_S6_BANT2";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 5:
				Local_1050[iVar1] = "GNG3_S6_BRIDGE1";
				Local_1050[iVar1]->f_7 = 3.5f;
				break;
			case 6:
				Local_1050[iVar1] = "GNG3_S6_BRIDGE2";
				Local_1050[iVar1]->f_7 = 8f;
				break;
			case 7:
				Local_1050[iVar1] = "GNG3_S6_BANT3";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 8:
				Local_1050[iVar1] = "GNG3_S6_GBRIDGE";
				Local_1050[iVar1]->f_7 = 0.25f;
				break;
			case 9:
				Local_1050[iVar1] = "GNG3_S6_BANT4";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 10:
				Local_1050[iVar1] = "GNG3_S6_BANT4B";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 11:
				Local_1050[iVar1] = "GNG3_S6_BANT5";
				Local_1050[iVar1]->f_8 = 0.25f;
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 12:
				Local_1050[iVar1] = "GNG3_S6_WAVE3";
				Local_1050[iVar1]->f_8 = 1.8f;
				break;
			case 13:
				Local_1050[iVar1] = "GNG3_S6_BANT6";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 14:
				Local_1050[iVar1] = "GNG3_S6_GFIELD";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 15:
				Local_1050[iVar1] = "GNG3_S6_BANT7";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 16:
				Local_1050[iVar1] = "GNG3_S6_BANT7B";
				Local_1050[iVar1]->f_2 = 1;
				break;
			case 17:
				Local_1050[iVar1] = "GNG3_WV4_COV";
				break;
			case 18:
				Local_1050[iVar1] = "GNG3_WV4_HOLD";
				break;
			case 19:
				Local_1050[iVar1] = "GNG3_WV15_CHAR";
				break;
			case 20:
				Local_1050[iVar1] = "GNG3_S6_CATCH";
				break;
			case 0:
				Local_1050[iVar1] = "GNG3_HAVEPISTOL";
				break;
			case 21:
				Local_1050[iVar1] = "GNG3_S6_ESCAPE";
				Local_1050[iVar1]->f_9 = 1;
				break;
			case 22:
				Local_1050[iVar1] = "GNG3_S6_LAGGING";
				Local_1050[iVar1]->f_9 = 1;
				break;
			case 23:
				Local_1050[iVar1] = "GNG3_S6_BOATDOAWD";
				Local_1050[iVar1]->f_7 = 3.5f;
				Local_1050[iVar1]->f_8 = 0.5f;
				Local_1050[iVar1]->f_9 = 3;
				break;
			case 24:
				Local_1050[iVar1] = "GNG3_S6_JOHNEX1";
				break;
			case 25:
				Local_1050[iVar1] = "GNG3_S6_JOHNEX2";
				break;
			case 26:
				Local_1050[iVar1] = "GNG3_S6_JOHNEX3";
				break;
		}
		iVar0++;
	}
}

int func_1341(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1947(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1948(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1949(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1950(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_1950(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1951(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1947(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_1014(cParam0, iParam1, &iVar4))
		{
			func_1563(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1952(iVar3);
	}
	return iVar0;
}

void func_1342()
{
	if (!func_446(8))
	{
		func_447(&(Local_405[0]), 1, 1);
		clear_ped_tasks(Global_35, 1, 0);
		clear_ped_tasks(&(Local_405[0]), 1, 0);
		func_442(&iLocal_308, 1);
		set_entity_collision(&(Local_405[0]), true, false);
		set_player_can_use_cover(player_id(), true);
		set_ped_config_flag(Global_35, 249, false);
		set_ped_config_flag(Global_35, 26, false);
		func_186(1);
		start_anim_scene(&(uLocal_293[8]));
		func_902(8, 1);
	}
}

void func_1343(char[4] cParam0, char[4] cParam1)
{
	func_1953(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1344(char[4] cParam0)
{
	func_1954(&(cParam0->f_7375));
}

void func_1345(int iParam0)
{
	if (iVar980 != iParam0)
	{
		iLocal_983 = iParam0;
	}
}

void func_1346()
{
	switch (iVar1355)
	{
		case 0:
			if (Local_207[0]->f_3 == 3)
			{
				func_1955(1);
			}
			break;
		case 1:
			if (func_446(13) || func_446(16))
			{
				func_1955(2);
			}
			break;
		case 2:
			if (func_446(5))
			{
				func_1955(3);
			}
			break;
		case 3:
			if (Local_207[0]->f_3 == 4)
			{
				func_1955(4);
			}
			break;
		case 4:
			if (func_1304(Local_207[0]->f_7, 128))
			{
				func_1955(5);
			}
			break;
		case 5:
			if (Local_207[0]->f_3 == 5)
			{
				func_1955(6);
			}
			break;
		case 6:
			if (func_446(11))
			{
				func_1955(7);
			}
			break;
		case 7:
			break;
	}
}

void func_1347(char[4] cParam0)
{
	if (iVar1319 == 0)
	{
		return;
	}
	if (func_1335(&uLocal_1323) >= 1f)
	{
		func_1956(cParam0, iVar1319, 2);
		iLocal_1322 = 0;
	}
}

void func_1348(char[4] cParam0)
{
	bVar0 = (func_887(Global_35, &(Local_207[1]), 1, 1) > 55f || func_887(Global_35, &(Local_207[0]), 1, 1) > 55f);
	iVar1 = 0;
	iVar2 = 8;
	switch (iVar1354)
	{
		case 0:
			iVar1 = 3;
			break;
		case 1:
			iVar1 = 1;
			break;
		case 2:
			iVar1 = 2;
			iVar2 |= 6;
			break;
		case 3:
		case 4:
		case 5:
			iVar1 = 3;
			break;
		case 6:
			iVar1 = 1;
			break;
		case 7:
			iVar1 = 4;
			iVar2 |= 6;
			break;
	}
	if (((iVar1318 != 5 && bVar0) && iVar1354 != 6) && iVar1354 != 7)
	{
		func_1372(cParam0, 5, 10);
	}
	else if (iVar1318 == 5 && !bVar0)
	{
		func_1372(cParam0, iVar1, 8);
	}
	else if (iVar1318 != 5 && !func_1957(iVar1))
	{
		func_1372(cParam0, iVar1, iVar2);
	}
}

void func_1349(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			if (func_1958(2))
			{
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_446(5))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_1958(9))
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_446(6))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_1958(15) || func_1958(16))
			{
				func_135(cParam0, 51);
			}
			break;
	}
}

void func_1350()
{
	switch (iVar1360)
	{
		case 0:
			if (iVar1355 == 4)
			{
				func_1959(1);
				func_1960(1);
			}
			break;
		case 1:
			if (iVar1355 == 5)
			{
				func_1384(1);
				func_1375(1);
				func_1383(1);
				func_1376(1);
				func_1960(2);
			}
			break;
		case 2:
			if (iVar1355 == 7)
			{
				func_1378(1);
				func_1960(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1351()
{
	if (!_does_anim_scene_exist(&(uLocal_293[8])))
	{
		return;
	}
	if (!func_446(25))
	{
		if (has_anim_event_fired(Global_35, -483003645))
		{
			remove_anim_scene_entity(&(uLocal_293[8]), "player_zero", Global_35);
			func_1961(Global_35, 3334.375f, -630.5068f, 42.6389f, 3341.257f, -633.9246f, 42.9958f, -1, 0, 0, 0, 0, 0, 0);
			_0x2208438012482a1a(Global_35, false, false);
			set_ped_config_flag(Global_35, 192, false);
			func_902(25, 1);
		}
		else if (!is_entity_playing_anim(Global_35, "script_story@gng3@ig@ig_14_release_hostage", "release_hostage_player_zero", 1))
		{
			remove_anim_scene_entity(&(uLocal_293[8]), "player_zero", Global_35);
			set_ped_config_flag(Global_35, 192, false);
			func_902(25, 1);
		}
	}
	if (!func_446(26))
	{
		if (_is_anim_scene_started(&(uLocal_293[8]), false))
		{
			if (_0x005e6f28dd7ed58d(&(uLocal_293[8]), "S_M_M_SKPGUARD_01"))
			{
				task_follow_nav_mesh_to_coord(&(Local_405[0]), 3344.289f, -651.1472f, 44.6797f, 3f, 20000, 0.25f, 4327488, 40000f);
				stop_ped_speaking(Global_35, false);
				func_902(26, 1);
			}
		}
	}
	if (!func_446(63))
	{
		if (!_is_anim_scene_started(&(uLocal_293[8]), false))
		{
			func_1962(0);
			func_902(63, 1);
		}
	}
}

void func_1352(char[4] cParam0)
{
	if (func_887(Global_35, &(Local_207[1]), 1, 1) > 75f || func_887(Global_35, &(Local_207[0]), 1, 1) > 75f)
	{
		if (!func_446(11) && !func_446(16))
		{
			func_1850(cParam0, "GROUP_FAIL", "", 1, 0);
		}
	}
}

void func_1353(char[4] cParam0)
{
	vVar7 = { 3151.66f, -405.4f, 41.44f };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!is_entity_dead(&(Local_207[iVar0])))
		{
			iVar10 = iVar0;
			switch (Local_207[iVar0]->f_3)
			{
				case 0:
					if (is_ped_in_group(&(Local_207[iVar0])))
					{
						remove_ped_from_group(&(Local_207[iVar0]));
					}
					set_entity_only_damaged_by_player(&(Local_207[iVar0]), true);
					_0xc2266aa617668ad3(&(Local_207[iVar0]), 0.1f);
					set_ped_combat_range(&(Local_207[iVar0]), 3);
					set_current_ped_weapon(&(Local_207[iVar0]), get_best_ped_weapon(&(Local_207[iVar0]), false, false), false, 0, false, false);
					task_swap_weapon(&(Local_207[iVar0]), 1, 1, 0, 0);
					func_221(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 2);
					break;
				case 2:
					switch (Local_207[iVar0]->f_8)
					{
						case 11:
							iVar5 = 0;
							iVar6 = 6;
							break;
						case 1:
							iVar5 = 1;
							iVar6 = 7;
							break;
					}
					set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar5), 1.75f, 1, false, 0);
					set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar6), 1f, 0, true, 0);
					_0x4ec4ea2f72b36358(&(Local_207[iVar0]), 1);
					task_combat_hated_targets_around_ped(&(Local_207[iVar0]), 300f, 0, 7);
					func_221(&uLocal_902);
					func_221(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 8);
					break;
				case 8:
					if (iVar10 == 0)
					{
						if (func_1858(Global_35, &(iLocal_918[17]), 1, 0))
						{
							func_902(16, 1);
							func_1963(3);
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 3);
						}
						else if (func_1335(&(Local_207[iVar0]->f_4)) >= 8.5f && ((func_1964(&Local_414) + func_1964(&Local_496)) + func_1965()) >= 5)
						{
							func_1963(2);
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 3);
						}
						else if (func_1335(&uLocal_902) >= 6f && !func_1958(0))
						{
							func_1963(0);
							func_552(&uLocal_902);
						}
						else if ((!func_1958(1) && func_1966(0)) && !func_1418(&(Local_1050[0])))
						{
							func_1963(1);
						}
						else if ((((func_446(30) && !func_1958(19)) && func_1966(1)) && !func_1418(&(Local_1050[1]))) && func_1818(&uLocal_902, 1.5f))
						{
							func_1963(19);
						}
					}
					else if (func_1335(&(Local_207[iVar0]->f_4)) >= 8.5f && ((func_1964(&Local_414) + func_1964(&Local_496)) + func_1965()) >= 5)
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 3);
					}
					else if (func_1858(Global_35, &(iLocal_918[17]), 1, 0))
					{
						func_902(16, 1);
						func_1963(3);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 3);
					}
					break;
				case 3:
					if ((Local_207[iVar0]->f_8 == 1 && func_1335(&(Local_207[iVar0]->f_4)) >= 1.8f) || (Local_207[iVar0]->f_8 == 11 && func_1335(&(Local_207[iVar0]->f_4)) >= 0.7f))
					{
						func_902(61, 1);
						switch (Local_207[iVar0]->f_8)
						{
							case 11:
								iVar5 = 2;
								iVar6 = 8;
								break;
							case 1:
								iVar5 = 3;
								iVar6 = 9;
								break;
						}
						func_50(&(Local_207[iVar0]));
						set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar5), 1f, 1, false, 0);
						set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar6), 1f, 0, true, 0);
						if (Local_207[iVar0]->f_8 == 11)
						{
							task_follow_waypoint_recording(&(Local_207[iVar0]), "gang3_CoverAssistRoute", 0, 8, -1, 0, 1, -1);
						}
						else
						{
							task_follow_waypoint_recording(&(Local_207[iVar0]), "gang3_CoverAssistRoute_2", 0, 8, -1, 0, 1, -1);
						}
						func_1254(Local_207[iVar0], 9);
					}
					break;
				case 9:
					if (!func_1304(Local_207[iVar10]->f_7, 1024) && is_entity_in_volume(&(Local_207[iVar10]), &(iLocal_918[17]), false, 0))
					{
						func_845(&(Local_207[iVar10]->f_7), 1024);
						if (iVar10 == 0)
						{
							if (!func_1958(8) && func_163(&(Local_405[0]), 0))
							{
								func_145(cParam0, &(Local_405[0]), "GNG3_PRISON_GUARD_01", 0);
								func_1963(8);
							}
						}
						set_ped_combat_attributes(&(Local_207[iVar0]), 30, true);
					}
					if (((Local_207[iVar0]->f_8 == 11 && !func_446(5)) && func_1304(Local_207[0]->f_7, 1024)) && func_1304(Local_207[1]->f_7, 1024))
					{
						func_902(13, 1);
						if (!func_1821() && !func_1958(4))
						{
							if (!func_883(Global_35, &(Local_207[iVar0]), 15f, 1))
							{
								func_1963(4);
								func_221(&(Local_207[iVar0]->f_4));
							}
						}
						else if ((!func_1821() && !func_1958(5)) && func_1818(&(Local_207[iVar0]->f_4), 5f))
						{
							if (!func_883(Global_35, &(Local_207[iVar0]), 15f, 1))
							{
								func_1963(5);
								func_221(&(Local_207[iVar0]->f_4));
							}
						}
						else if ((!func_1821() && !func_1958(6)) && func_1818(&(Local_207[iVar0]->f_4), 5f))
						{
							if (!func_883(Global_35, &(Local_207[iVar0]), 15f, 1))
							{
								func_1963(6);
							}
						}
					}
					if (Local_207[iVar0]->f_8 == 11 && !is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "gang3_CoverAssistRoute"))
					{
						if (!is_ped_in_combat(&(Local_207[iVar0]), 0))
						{
							task_combat_hated_targets_around_ped(&(Local_207[iVar0]), 300f, 0, 7);
							func_1967(5, 0);
							func_1967(6, 0);
							set_ped_combat_attributes(&(Local_207[iVar0]), 30, false);
						}
					}
					if (!func_446(49) && is_entity_in_volume(Global_35, &(iLocal_918[22]), false, 0))
					{
						func_902(49, 1);
					}
					if (Local_207[iVar0]->f_8 == 1 && !is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "gang3_CoverAssistRoute_2"))
					{
						if (is_entity_in_volume(Global_35, &(iLocal_918[22]), false, 0) && is_entity_in_volume(&(Local_207[iVar0]), &(iLocal_918[22]), false, 0))
						{
							if (!func_1904() && !func_1958(24))
							{
								func_1963(24);
							}
							else if (!func_1904() && !func_1958(25))
							{
								func_1963(25);
							}
							else if (!func_1904() && !func_1958(26))
							{
								func_1963(26);
							}
						}
						if (!is_ped_in_combat(&(Local_207[iVar0]), 0))
						{
							task_combat_hated_targets_around_ped(&(Local_207[iVar0]), 300f, 0, 7);
						}
					}
					if (((((func_1964(&Local_529) >= 5 && is_ped_dead_or_dying(&(Local_529[2]), true)) && is_ped_dead_or_dying(&(Local_529[3]), true)) && is_ped_dead_or_dying(&(Local_529[5]), true)) && is_ped_dead_or_dying(&(Local_529[6]), true)) && func_1966(26))
					{
						if (!is_ped_dead_or_dying(&(Local_529[9]), true))
						{
							set_entity_only_damaged_by_player(&(Local_529[9]), false);
						}
						func_1963(9);
						func_902(27, 1);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 4);
					}
					else if (!func_1314(Global_35, func_451(5, func_132(iLocal_153)), 70f, 1, 1) && !is_entity_in_volume(Global_35, &(iLocal_918[24]), false, 0))
					{
						func_902(16, 1);
						func_1963(10);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 4);
					}
					break;
				case 75:
					func_1254(Local_207[iVar0], 9);
					break;
				case 76:
					func_1254(Local_207[iVar0], 9);
					break;
				case 4:
					if ((Local_207[iVar0]->f_8 == 1 && func_1335(&(Local_207[iVar0]->f_4)) >= 1.6f) || (Local_207[iVar0]->f_8 == 11 && func_1335(&(Local_207[iVar0]->f_4)) >= 0.7f))
					{
						switch (Local_207[iVar0]->f_8)
						{
							case 11:
								iVar5 = 4;
								iVar6 = 10;
								fVar1 = 1.5f;
								break;
							case 1:
								iVar5 = 5;
								iVar6 = 11;
								fVar1 = -1f;
								break;
						}
						func_50(&(Local_207[iVar0]));
						set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar5), 1.5f, 1, false, 0);
						set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar6), 1f, 0, true, 0);
						_set_ped_crouch_movement(&(Local_207[iVar0]), false, 0, false);
						task_follow_waypoint_recording_at_offset(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT", fVar1, 34, 0, -1, 0);
						func_221(&(Local_207[iVar0]->f_4));
						func_1968(0);
						func_1254(Local_207[iVar0], 10);
					}
					break;
				case 10:
					func_1969(iVar0, 7, 0);
					if (func_446(28))
					{
						if (func_1304(Local_207[iVar0]->f_7, 8) && is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT"))
						{
							waypoint_playback_resume(&(Local_207[iVar0]), false, -1, 0);
							func_1970(&(Local_207[iVar0]->f_7), 8);
						}
						if (Local_207[iVar0]->f_8 == 11 && !func_446(18))
						{
							if (((is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT") && get_ped_waypoint_progress(&(Local_207[iVar0])) >= 45) && does_entity_exist(&(Local_627[0]))) && !is_entity_dead(&(Local_627[0])))
							{
								waypoint_playback_start_shooting_at_entity(&(Local_207[iVar0]), &(Local_627[2]), 1, -687903391, -1082130432);
								func_902(18, 1);
							}
						}
						if (is_entity_dead(&(Local_627[0])) && func_446(18))
						{
							if (is_waypoint_playback_going_on_for_ped(&(Local_207[0]), 0))
							{
								waypoint_playback_stop_aiming_or_shooting(&(Local_207[0]));
							}
							func_902(18, 0);
						}
						if (((iVar10 == 1 && !func_446(28)) && is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT")) && get_ped_waypoint_progress(&(Local_207[iVar0])) >= 41)
						{
							func_902(28, 1);
						}
						if ((((((iVar10 == 1 && !func_446(19)) && func_446(28)) && !func_1971(&(Local_1050[21]))) && !func_1418(&(Local_1050[21]))) && !func_1971(&(Local_1050[22]))) && !func_1418(&(Local_1050[22])))
						{
							func_1967(21, 0);
							func_1967(22, 0);
							if ((does_entity_exist(&(Local_627[0])) && !is_entity_dead(&(Local_627[0]))) && is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), 0))
							{
								waypoint_playback_start_shooting_at_entity(&(Local_207[iVar0]), &(Local_627[2]), 1, -687903391, -1082130432);
							}
							if (!func_446(16))
							{
								func_1963(11);
							}
							func_902(19, 1);
						}
						if (!func_1958(12) && func_446(19))
						{
							if (func_446(16) || func_1966(11))
							{
								if (!func_1971(&(Local_1050[21])) && !func_1418(&(Local_1050[21])))
								{
									if (does_entity_exist(&(Local_627[0])) && !is_entity_dead(&(Local_627[0])))
									{
										func_1963(12);
									}
								}
							}
						}
						if (((func_883(&(Local_207[iVar0]), &(Local_627[2]), 40f, 1) && is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT")) && get_ped_waypoint_progress(&(Local_207[iVar0])) >= 70) && !is_ped_dead_or_dying(&(Local_627[2]), true))
						{
							explode_ped_head(&(Local_627[2]), 2077870112);
						}
						if (is_entity_dead(&(Local_627[1])) && func_446(19))
						{
							if (is_waypoint_playback_going_on_for_ped(&(Local_207[1]), "GANG3_ROUTETOBOAT"))
							{
								waypoint_playback_stop_aiming_or_shooting(&(Local_207[1]));
							}
							func_902(19, 0);
						}
						if ((is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT") && get_ped_waypoint_progress(&(Local_207[iVar0])) > 78) && !func_1304(Local_207[iVar0]->f_7, 128))
						{
							switch (Local_207[iVar0]->f_8)
							{
								case 11:
									iVar5 = 4;
									iVar6 = 10;
									break;
								case 1:
									iVar5 = 5;
									iVar6 = 11;
									break;
							}
							func_50(&(Local_207[iVar0]));
							set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar5), 1f, 1, false, 0);
							set_ped_sphere_defensive_area(&(Local_207[iVar0]), func_175(6, iVar6), 1f, 0, true, 0);
							set_ped_combat_movement(&(Local_207[iVar0]), 1);
							func_1963(13);
							func_1855();
							task_follow_nav_mesh_to_coord(0, func_451(6, (4 + iVar0)), 2f, -1, 0.25f, 1, 40000f);
							task_combat_hated_targets_around_ped(0, 500f, 0, 7);
							func_1857(&(Local_207[iVar0]), -1082130432, -1082130432, 0);
							func_221(&(Local_207[iVar0]->f_4));
							func_845(&(Local_207[iVar0]->f_7), 128);
						}
					}
					if (func_1304(Local_207[iVar0]->f_7, 128) && !func_1304(Local_207[iVar0]->f_7, 512))
					{
						if (func_1972(iVar10))
						{
							func_845(&(Local_207[iVar0]->f_7), 512);
						}
					}
					if ((func_446(7) && func_1964(&Local_725) >= 1) && !func_446(1))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1973(22, 3);
						func_1973(21, 3);
						func_1963(15);
						func_902(1, 1);
					}
					else if (func_446(1) && func_1335(&(Local_207[iVar0]->f_4)) >= 6f)
					{
						func_1963(17);
						func_1963(18);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 5);
					}
					else if (!func_1314(Global_35, func_451(5, func_132(iLocal_153)), 200f, 1, 1))
					{
						func_902(16, 1);
						func_1963(16);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 5);
					}
					else if (!func_446(15) && func_446(6))
					{
						if ((Local_207[iVar0]->f_8 == 11 && func_446(7)) && is_ped_in_cover(&(Local_207[iVar0]), 0, 0))
						{
							func_1855();
							task_shoot_at_coord(0, func_1912(9, 0), 3000, 0, 0);
							task_combat_hated_targets_around_ped(0, 500f, 0, 7);
							func_1857(&(Local_207[iVar0]), -1082130432, -1082130432, 0);
							func_902(15, 1);
						}
					}
					break;
				case 5:
					if (((Local_207[iVar0]->f_8 == 1 && func_1335(&(Local_207[iVar0]->f_4)) >= 2.7f) || (Local_207[iVar0]->f_8 == 11 && func_1335(&(Local_207[iVar0]->f_4)) >= 2.1f)) || func_446(16))
					{
						set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
						switch (Local_207[iVar0]->f_8)
						{
							case 1:
								_set_ped_crouch_movement(&(Local_207[iVar0]), false, 0, false);
								func_1855();
								task_follow_entity_along_waypoint_recording_at_offset(0, &(Local_207[0]), "gang3_FinalBoatRoute", -0.55f, -1.15f, 0, 16388, -1, 1);
								func_1857(&(Local_207[iVar0]), -1082130432, -1082130432, 0);
								break;
							case 11:
								_set_ped_crouch_movement(&(Local_207[iVar0]), false, 0, false);
								func_1855();
								task_follow_waypoint_recording(0, "gang3_FinalBoatRoute", 16, 16384, -1, 0, 1, -1);
								func_1857(&(Local_207[iVar0]), -1082130432, -1082130432, 0);
								break;
						}
						_0x411189e51b8020ba(&(Local_207[iVar0]), "Cautious");
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 11);
					}
					break;
				case 11:
					if ((!func_446(11) && !func_446(16)) && func_1974(&(Local_207[1]->f_4)) > 10000)
					{
						func_902(11, 1);
					}
					if (Local_207[iVar0]->f_8 == 1)
					{
					}
					else if (Local_207[iVar0]->f_8 == 11)
					{
						if (func_1974(&(Local_207[iVar0]->f_4)) > 5000 && func_446(11))
						{
							if (!func_1822() && !func_1821())
							{
								if (!func_1975(&(Local_207[iVar0])) && !func_1976(vVar7))
								{
									func_1414(cParam0, "GNG3_RET_BOAT", 0);
								}
							}
							func_221(&(Local_207[iVar0]->f_4));
						}
					}
					if (func_1314(&(Local_207[iVar0]), vVar7, 7.5f, 1, 1))
					{
						waypoint_playback_use_default_speed(&(Local_207[iVar0]));
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 6);
					}
					else if (is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "gang3_FinalBoatRoute"))
					{
						fVar2 = get_ped_waypoint_distance(&(Local_207[iVar0]));
						fVar3 = _0x3acc128510142b9d("gang3_FinalBoatRoute", get_entity_coords(Global_35, true, false));
						fVar4 = (fVar2 - fVar3);
						if (fVar4 < 0f)
						{
							if (absf(fVar4) > 10f)
							{
								waypoint_playback_override_speed(&(Local_207[iVar0]), 3f, 0, -1f, 0);
							}
							else
							{
								waypoint_playback_use_default_speed(&(Local_207[iVar0]));
							}
						}
					}
					break;
				case 6:
					func_1977(iVar0, 10);
					func_1969(iVar0, 13, 1);
					switch (Local_207[iVar0]->f_8)
					{
						case 1:
							if (func_883(Global_35, &(Local_207[iVar0]), 20f, 1) && is_waypoint_playback_going_on_for_ped(&(Local_207[iVar0]), "GANG3_ROUTETOBOAT"))
							{
								func_1963(26);
							}
							if (func_1314(&(Local_207[iVar0]), vVar7, 8f, 1, 1))
							{
								func_50(&(Local_207[iVar0]));
								set_ped_sphere_defensive_area(&(Local_207[iVar0]), 3149.583f, -406.0165f, 41.4832f, 1f, 1, false, 0);
								set_ped_combat_movement(&(Local_207[iVar0]), 1);
								task_combat_hated_targets_around_ped(&(Local_207[iVar0]), 500f, 0, 7);
								func_1254(Local_207[iVar0], 1);
							}
							break;
						case 11:
							if (func_1314(&(Local_207[iVar0]), vVar7, 8f, 1, 1))
							{
								func_50(&(Local_207[iVar0]));
								set_ped_sphere_defensive_area(&(Local_207[iVar0]), 3149.601f, -408.7785f, 42.3289f, 1f, 1, false, 0);
								set_ped_combat_movement(&(Local_207[iVar0]), 1);
								task_combat_hated_targets_around_ped(&(Local_207[iVar0]), 500f, 0, 7);
								func_221(&(Local_207[iVar0]->f_4));
								func_1254(Local_207[iVar0], 1);
							}
							break;
					}
					break;
				case 1:
					switch (Local_207[iVar0]->f_8)
					{
						case 1:
							if (func_446(60))
							{
								func_221(&(Local_207[iVar0]->f_4));
								func_1254(Local_207[iVar0], 80);
							}
							break;
						case 11:
							if (func_446(60))
							{
								func_221(&(Local_207[iVar0]->f_4));
								func_1254(Local_207[iVar0], 80);
							}
							else if (func_1978(&(Local_207[0])) && func_1974(&(Local_207[0]->f_4)) > 5000)
							{
								func_1414(cParam0, "GNG3_S6_BOATDWD", 0);
								func_221(&(Local_207[0]->f_4));
							}
							break;
					}
					break;
				case 80:
					switch (Local_207[iVar0]->f_8)
					{
						case 1:
							if (func_897(&(Local_207[iVar0]->f_4)) > 0.5f)
							{
								task_turn_ped_to_face_coord(&(Local_207[iVar0]), 3150.156f, -403.1472f, 41.4251f, 0);
								func_1254(Local_207[iVar0], 87);
							}
							break;
						case 11:
							if (func_897(&(Local_207[iVar0]->f_4)) > 0.8f)
							{
								task_turn_ped_to_face_coord(&(Local_207[iVar0]), 3150.156f, -403.1472f, 41.4251f, 0);
								func_1254(Local_207[iVar0], 87);
							}
							break;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1354()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		switch (Local_414[iVar1]->f_3)
		{
			case 0:
				if (func_163(&(Local_414[iVar1]), 0))
				{
					if (iVar1 == 4)
					{
						func_1859(Local_414[iVar0], 32);
						return;
					}
					else if (iVar1 == 0 || iVar1 == 2)
					{
						func_1910(&(Local_414[iVar1]), 1);
					}
					_0xc2266aa617668ad3(&(Local_414[iVar1]), 0.5f);
					set_ped_accuracy(&(Local_414[iVar1]), 0);
					func_1859(Local_414[iVar1], 6);
					func_221(&(Local_414[iVar1]->f_4));
				}
				break;
			case 6:
				if (!func_163(&(Local_414[iVar1]), 0))
				{
					func_1859(Local_414[iVar1], 30);
				}
				else
				{
					if (_is_anim_scene_started(&(uLocal_293[8]), false))
					{
						fVar2 = _get_anim_scene_progress(&(uLocal_293[8]));
					}
					else
					{
						fVar2 = -1f;
					}
					if (iVar1 == 0)
					{
						if (fVar2 == -1f || fVar2 >= 0.5f)
						{
							func_1979(&(Local_414[iVar1]), 3337.586f, -628.437f, 43.7096f, 0, 0, 0, 0, 0);
							func_221(&(Local_414[iVar1]->f_4));
							func_1859(Local_414[iVar1], 7);
						}
					}
					else if (iVar1 == 2)
					{
						if (fVar2 == -1f || fVar2 >= 0.64f)
						{
							func_1979(&(Local_414[iVar1]), 3335.354f, -630.9412f, 43.3486f, 0, 0, 0, 0, 0);
							func_221(&(Local_414[iVar1]->f_4));
							func_1859(Local_414[iVar1], 7);
						}
					}
					else if (fVar2 == -1f || fVar2 >= 0.4f)
					{
						func_1859(Local_414[iVar1], 7);
					}
				}
				break;
			case 7:
				if (!func_163(&(Local_414[iVar1]), 0))
				{
					func_1859(Local_414[iVar1], 30);
				}
				else if (((iVar1 == 1 || iVar1 == 3) || iVar1 == 4) || func_1974(&(Local_414[iVar1]->f_4)) > 1000)
				{
					set_ped_sphere_defensive_area(&(Local_414[iVar1]), func_451(16, iVar0), 1.25f, 0, false, 0);
					_0xfc3db99c8144cd81(&(Local_414[iVar1]), &(iLocal_918[2]), 0, 1, 0);
					set_ped_combat_attributes(&(Local_414[iVar1]), 5, true);
					func_1852(Local_414[iVar1], 831283580, 0, 1);
					set_blocking_of_non_temporary_events(&(Local_414[iVar1]), false);
					task_combat_hated_targets_around_ped(&(Local_414[iVar1]), 300f, 33554432, 7);
					func_1859(Local_414[iVar1], 8);
				}
				break;
			case 8:
				if (!func_163(&(Local_414[iVar1]), 0))
				{
					func_1859(Local_414[iVar1], 30);
				}
				else if (!_does_anim_scene_exist(&(uLocal_293[8])) || !_is_anim_scene_started(&(uLocal_293[8]), false))
				{
					set_ped_accuracy(&(Local_414[iVar1]), 10);
					func_221(&(Local_414[iVar1]->f_4));
					func_1859(Local_414[iVar1], 9);
				}
				break;
			case 9:
				if (!func_163(&(Local_414[iVar1]), 0))
				{
					func_1859(Local_414[iVar1], 30);
				}
				else if (!func_1304(Local_414[iVar1]->f_7, 64))
				{
					if (func_1335(&(Local_414[iVar1]->f_4)) >= 10f)
					{
						func_1910(&(Local_414[iVar1]), 1);
						func_845(&(Local_414[iVar1]->f_7), 64);
					}
				}
				break;
			case 30:
				if (iVar1355 == 2 && func_1964(&Local_496) >= 3)
				{
					if (!_0x5102307ce88798eb(&(Local_414[iVar1])))
					{
						request_ped_visibility_tracking(&(Local_414[iVar1]));
					}
					else if (!is_tracked_ped_visible(&(Local_414[iVar1])) && !_0x1204eb53a5fbc63d())
					{
						_0x3088634cf8c819cf(&(Local_414[iVar1]));
						func_1980(Local_414[iVar1], 0);
						func_1970(&(Local_414[iVar1]->f_7), 1);
						func_1970(&(Local_414[iVar1]->f_7), 64);
						func_1981(iVar1);
						func_221(&(Local_414[iVar1]->f_4));
						fLocal_1369[iVar1] = get_random_float_in_range(2f, 6f);
						func_1859(Local_414[iVar1], 31);
					}
				}
				else if (iVar1355 > 2)
				{
					func_1859(Local_414[iVar1], 32);
				}
				break;
			case 31:
				if (func_1335(&(Local_414[iVar1]->f_4)) >= &fLocal_1369[iVar1] || func_1964(&Local_414) >= 4)
				{
					if (func_1982(iVar1))
					{
						func_221(&(Local_414[iVar1]->f_4));
						func_1859(Local_414[iVar1], 9);
					}
				}
				break;
			case 32:
				break;
		}
		iVar0++;
	}
}

void func_1355(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (((Local_1050[iVar0]->f_1 && Local_1050[iVar0]->f_9 >= 1) && !_0xb16223cb7da965f0(player_id())) && func_1818(&(Local_1050[iVar0]->f_4), Local_1050[iVar0]->f_7))
		{
			if (Local_1050[iVar0]->f_2)
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 0;
			}
			if (func_1983(cParam0, &(Local_1050[iVar0]), iVar1, Local_1050[iVar0]->f_8, 0))
			{
				Local_1050[iVar0]->f_9 = (Local_1050[iVar0]->f_9 - 1);
				func_221(&(Local_1050[iVar0]->f_4));
				if (Local_1050[iVar0]->f_9 <= 0)
				{
					Local_1050[iVar0]->f_3 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_1356()
{
	if (!func_446(64))
	{
		if (func_1984())
		{
			func_902(64, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		switch (&iLocal_1329[iVar1])
		{
			case 0:
				if (does_entity_exist(&(uLocal_889[iVar1])))
				{
					if (iVar1 == 0)
					{
						iVar2 = 35;
					}
					else if (iVar1 == 1)
					{
						iVar2 = 30;
					}
					else if (iVar1 == 2)
					{
						iVar2 = 35;
					}
					set_ped_accuracy(&(uLocal_889[iVar1]), iVar2);
					func_1985(iVar1, 1);
				}
				break;
			case 1:
				if (!func_163(&(uLocal_889[iVar1]), 0))
				{
					func_1985(iVar1, 4);
				}
				else if (func_446(20))
				{
					switch (iVar1)
					{
						case 0:
							fVar3 = 2f;
							iVar4 = 0;
							break;
						case 1:
							fVar3 = 1f;
							set_ped_combat_attributes(&(uLocal_889[iVar1]), 11, true);
							iVar4 = 1500;
							break;
						case 2:
							fVar3 = 2f;
							iVar4 = 4000;
							break;
					}
					if (!func_26(vLocal_1333[iVar1]))
					{
						func_221(vLocal_1333[iVar1]);
					}
					else if (func_222(vLocal_1333[iVar1]) > iVar4)
					{
						set_blocking_of_non_temporary_events(&(uLocal_889[iVar1]), false);
						func_1986(&(uLocal_889[iVar1]), func_175(18, (0 + iVar0)), fVar3, 1, 0);
						task_combat_hated_targets_around_ped(&(uLocal_889[iVar1]), 100f, 0, 0);
						func_1985(iVar1, 2);
					}
				}
				break;
			case 2:
				if (!func_163(&(uLocal_889[iVar1]), 0))
				{
					func_1985(iVar1, 4);
					func_902(30, 1);
					return;
				}
				if (!func_446(30) && is_entity_in_volume(&(uLocal_889[iVar1]), &(iLocal_918[14]), true, 0))
				{
					if (!does_blip_exist(&(iLocal_1343[iVar1])))
					{
						iLocal_1343[iVar1] = _blip_add_for_entity(831283580, &(uLocal_889[iVar1]));
						_blip_set_modifier(&(iLocal_1343[iVar1]), -1034486097);
					}
					func_902(30, 1);
				}
				if (func_1334(&(uLocal_889[iVar1]), func_175(18, (0 + iVar0)), 1) < 2f)
				{
					switch (iVar1)
					{
						case 0:
							break;
						case 1:
							set_ped_combat_attributes(&(uLocal_889[iVar1]), 11, false);
							break;
						case 2:
							break;
					}
					func_1985(iVar1, 3);
				}
				break;
			case 3:
				if (!func_163(&(uLocal_889[iVar1]), 0))
				{
					func_1985(iVar1, 4);
				}
				break;
			case 4:
				break;
		}
		if ((func_163(&(uLocal_889[iVar0]), 0) && get_ped_config_flag(&(uLocal_889[iVar0]), 87, false)) && !is_entity_in_volume(&(uLocal_889[iVar0]), &(iLocal_918[10]), false, 0))
		{
			set_ped_config_flag(&(uLocal_889[iVar0]), 87, false);
		}
		iVar0++;
	}
}

void func_1357()
{
	if (!func_163(&(Local_414[4]), 0))
	{
		return;
	}
	switch (iVar1373)
	{
		case 0:
			set_blocking_of_non_temporary_events(&(Local_414[4]), true);
			_set_entity_coords_and_heading(&(Local_414[4]), 3357.195f, -670.4856f, 44.5263f, 12.6286f, false, false, true);
			set_entity_invincible(&(Local_414[4]), true);
			set_ped_combat_attributes(&(Local_414[4]), 30, true);
			set_ped_can_be_targetted(&(Local_414[4]), false);
			task_aim_at_coord(&(Local_414[4]), 3350.494f, -645.5168f, 45.6803f, -1, 1, 1);
			func_1987(1);
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_918[23]), false, 0) || is_bullet_in_area(get_entity_coords(&(Local_414[4]), true, false), 10f, true))
			{
				if (get_player_invincible(player_id()))
				{
					_set_entity_health(Global_35, 0, &(Local_414[4]));
				}
				func_1987(2);
			}
			else if (!func_1860(&(Local_414[4]), 329066242))
			{
				task_aim_at_coord(&(Local_414[4]), 3350.494f, -645.5168f, 45.6803f, -1, 1, 1);
			}
			break;
		case 2:
			func_1910(Global_35, 1);
			set_blocking_of_non_temporary_events(&(Local_414[4]), false);
			task_combat_hated_targets_around_ped(&(Local_414[4]), 100f, 0, 0);
			_0x1854217c640b39ec(&(Local_414[4]), Global_35, 0f, 0f, 0f, 5f, 0, 0);
			set_ped_accuracy(&(Local_414[4]), 100);
			func_1987(3);
			break;
		case 3:
			break;
	}
}

void func_1358(char[4] cParam0)
{
	switch (iVar1375)
	{
		case 0:
			if (iVar1354 == 7 && func_1988() == 0)
			{
				func_1290(cParam0, "GNG3_S8_OBJ4", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				func_221(&uLocal_1379);
				func_1989(1);
			}
			break;
		case 1:
			if ((func_897(&uLocal_1379) > 10f && is_entity_in_volume(Global_35, &(iLocal_918[29]), false, 0)) && func_1334(Global_35, 3230.587f, -516.5512f, 41.77988f, 0) < 27f)
			{
				func_1989(2);
			}
			break;
		case 2:
			if (func_1990())
			{
				func_221(&uLocal_1379);
				func_1989(3);
			}
			break;
		case 3:
			if (!is_ped_still(Global_35))
			{
				func_221(&uLocal_1379);
			}
			else if (func_897(&uLocal_1379) > 10f)
			{
				func_1989(4);
			}
			break;
		case 4:
			break;
	}
	if (iVar1375 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			switch (Local_807[iVar1]->f_3)
			{
				case 0:
					if (!func_163(&(Local_807[iVar1]), 0))
					{
						func_1859(Local_807[iVar1], 30);
					}
					else
					{
						if (iVar1 == 0)
						{
							vVar2 = { 3221.948f, -514.9853f, 41.91f };
						}
						else if (iVar1 == 1)
						{
							vVar2 = { 3245.926f, -521.2373f, 41.8849f };
						}
						else if (iVar1 == 2)
						{
							vVar2 = { 3228.396f, -532.1015f, 41.8568f };
						}
						set_ped_sphere_defensive_area(&(Local_807[iVar1]), vVar2, 1f, 1, false, 0);
						task_combat_hated_targets_around_ped(&(Local_807[iVar1]), 300f, 0, 7);
						set_blocking_of_non_temporary_events(&(Local_807[iVar1]), false);
						set_ped_combat_attributes(&(Local_807[iVar1]), 12, true);
						set_ped_combat_attributes(&(Local_807[iVar1]), 5, true);
						set_ped_accuracy(&(Local_807[iVar1]), 80);
						func_1852(Local_807[iVar1], 831283580, 0, 1);
						func_221(&(Local_807[iVar1]->f_4));
						func_1859(Local_807[iVar1], 2);
					}
					break;
				case 2:
					if (!func_163(&(Local_807[iVar1]), 0))
					{
						func_1859(Local_807[iVar1], 30);
					}
					else
					{
						if (iVar1 == 0)
						{
							vVar5 = { 3221.948f, -514.9853f, 41.91f };
						}
						else if (iVar1 == 1)
						{
							vVar5 = { 3245.926f, -521.2373f, 41.8849f };
						}
						else if (iVar1 == 2)
						{
							vVar5 = { 3228.396f, -532.1015f, 41.8568f };
						}
						if (func_1334(&(Local_807[iVar1]), vVar5, 0) < 3f)
						{
							func_1859(Local_807[iVar1], 6);
						}
					}
					break;
				case 6:
					if (!func_163(&(Local_807[iVar1]), 0))
					{
						func_1859(Local_807[iVar1], 30);
					}
					else if (iVar1375 == 4)
					{
						set_ped_accuracy(&(Local_807[iVar1]), 80);
						_0x1854217c640b39ec(&(Local_807[iVar1]), Global_35, 0f, 0f, 0f, 15f, 0, 0);
						func_1859(Local_807[iVar1], 8);
					}
					else if (func_1976(3151.66f, -405.4f, 41.44f))
					{
						set_ped_accuracy(&(Local_807[iVar1]), 20);
					}
					else
					{
						set_ped_accuracy(&(Local_807[iVar1]), 80);
					}
					break;
				case 8:
					break;
				case 30:
					break;
			}
			func_1991(Local_758[iVar1]);
			iVar0++;
		}
	}
}

bool func_1359(char[4] cParam0)
{
	if (!func_1992(cParam0))
	{
		return false;
	}
	if (!does_entity_exist(Local_207[0]->f_1))
	{
		if (func_446(0))
		{
			return false;
		}
		Local_207[0]->f_1 = func_1993(Local_207[0]->f_8, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (does_entity_exist(Local_207[0]->f_1))
		{
			func_902(0, 1);
			if (func_33(cParam0) >= iLocal_157)
			{
				func_1251(Local_207[0]->f_1, func_226(1, 8), 2, 1073741824);
				func_151(cParam0, Local_207[0]->f_1, "Horse_01", 0, 0, 0, 0);
			}
			else
			{
				func_1251(Local_207[0]->f_1, func_226(8, 1), 2, 1073741824);
				func_151(cParam0, Local_207[0]->f_1, "Horse_01^1", 0, 0, 0, 0);
			}
			set_blocking_of_non_temporary_events(Local_207[0]->f_1, true);
			_0x2eb75fb86c41f026(Local_207[0]->f_1, 3, 0);
			set_ped_config_flag(Local_207[0]->f_1, 284, true);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1360()
{
	set_player_lockon_range_override(player_id(), _0x79b1a6e780266db0(Global_35));
}

void func_1361(char[4] cParam0)
{
	if (!func_446(5) && func_1858(Global_35, &(iLocal_918[17]), 1, 0))
	{
		func_1967(5, 0);
		func_1967(6, 0);
		func_1967(4, 0);
		func_47(0, 0);
		if (!func_446(16))
		{
			func_1963(7);
		}
		func_902(5, 1);
		func_902(6, 1);
	}
	if (func_1858(Global_35, &(iLocal_918[18]), 1, 0))
	{
		if (!func_446(28))
		{
			func_221(&uLocal_899);
			func_902(28, 1);
		}
	}
	if (!func_446(7) && (func_1858(Global_35, &(iLocal_918[19]), 1, 0) || (func_1304(Local_207[0]->f_7, 128) && func_897(&(Local_207[0]->f_4)) >= 3.5f)))
	{
		func_902(7, 1);
	}
}

void func_1362()
{
	if (func_446(4))
	{
		func_1994();
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!is_entity_dead(&(Local_496[iVar0])))
			{
				switch (Local_496[iVar0]->f_3)
				{
					case 0:
						func_1852(Local_496[iVar0], 831283580, 0, 1);
						set_ped_accuracy(&(Local_496[iVar0]), 10);
						if (iVar0 == 0 || iVar0 == 2)
						{
							func_1910(&(Local_496[iVar0]), 1);
						}
						func_1859(Local_496[iVar0], 6);
						func_221(&(Local_496[iVar0]->f_4));
						break;
					case 6:
						set_ped_sphere_defensive_area(&(Local_496[iVar0]), func_451(11, iVar0), 1.25f, 0, false, 0);
						_0xfc3db99c8144cd81(&(Local_496[iVar0]), &(iLocal_918[2]), 0, 1, 0);
						set_blocking_of_non_temporary_events(&(Local_496[iVar0]), false);
						task_combat_hated_targets_around_ped(&(Local_496[iVar0]), 200f, 0, 7);
						set_ped_combat_attributes(&(Local_496[iVar0]), 12, true);
						func_1859(Local_496[iVar0], 7);
						func_221(&(Local_496[iVar0]->f_4));
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_1363()
{
	if (func_446(5))
	{
		func_1995();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			iVar2 = iVar1;
			if (!is_entity_dead(&(Local_529[iVar1])))
			{
				switch (Local_529[iVar1]->f_3)
				{
					case 0:
						func_1852(Local_529[iVar1], 831283580, 0, 1);
						set_ped_accuracy(&(Local_529[iVar1]), 50);
						func_1910(&(Local_529[iVar1]), 1);
						func_221(&(Local_529[iVar1]->f_4));
						func_1859(Local_529[iVar1], 6);
						break;
					case 6:
						if (iVar2 == 9)
						{
							fVar0 = 1f;
						}
						else
						{
							fVar0 = 5f;
						}
						set_ped_sphere_defensive_area(&(Local_529[iVar1]), func_451(12, iVar1), fVar0, 0, false, 0);
						if (!is_ped_on_mount(&(Local_529[iVar1])))
						{
							set_ped_combat_attributes(&(Local_529[iVar1]), 42, true);
							set_blocking_of_non_temporary_events(&(Local_529[iVar1]), false);
						}
						register_target(&(Local_529[iVar1]), Global_35, 1);
						task_combat_hated_targets_around_ped(&(Local_529[iVar1]), 200f, 0, 7);
						func_221(&(Local_529[iVar1]->f_4));
						func_1859(Local_529[iVar1], 7);
						break;
					case 7:
						if (func_816(&(Local_529[iVar1]), 1, 0, 0) != 1845102363 && has_ped_got_weapon(&(Local_529[iVar1]), 1845102363, 0, false))
						{
							set_current_ped_weapon(&(Local_529[iVar1]), 1845102363, true, 0, false, false);
						}
						if (!func_1304(Local_529[iVar1]->f_7, 32))
						{
							if (func_1335(&(Local_529[iVar1]->f_4)) >= 35f && (func_1964(&Local_529) + func_1964(&Local_496)) >= 10)
							{
								func_50(&(Local_529[iVar1]));
								set_ped_combat_attributes(&(Local_529[iVar1]), 50, true);
								set_ped_combat_movement(&(Local_529[iVar1]), 2);
								if (does_blip_exist(Local_529[iVar1]->f_2))
								{
									_set_blip_flash_style(Local_529[iVar1]->f_2, -1034486097);
								}
								func_845(&(Local_529[iVar1]->f_7), 32);
							}
						}
						else if (!func_1304(Local_529[iVar1]->f_7, 256) && func_1314(&(Local_529[iVar1]), func_451(5, func_132(iLocal_154)), 50f, 1, 1))
						{
							set_ped_combat_attributes(&(Local_529[iVar1]), 50, false);
							if (does_entity_exist(Local_529[iVar1]->f_1))
							{
								set_ped_combat_attributes(Local_529[iVar1]->f_1, 50, true);
							}
							set_ped_combat_movement(&(Local_529[iVar1]), 1);
							if (does_blip_exist(Local_529[iVar1]->f_2))
							{
								_blip_set_modifier(Local_529[iVar1]->f_2, -1034486097);
							}
							func_1986(&(Local_529[iVar1]), get_entity_coords(&(Local_529[iVar1]), true, false), 4f, 0, 0);
							func_845(&(Local_529[iVar1]->f_7), 256);
						}
						break;
				}
			}
			iVar1++;
		}
	}
}

void func_1364()
{
	if (!func_446(61))
	{
		return;
	}
	func_1996();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar4 = iVar0;
		if (!func_163(&(Local_610[iVar4]), 0))
		{
		}
		else
		{
			switch (Local_610[iVar4]->f_3)
			{
				case 0:
					func_1852(Local_610[iVar0], 831283580, 0, 1);
					set_ped_accuracy(&(Local_610[iVar0]), 50);
					func_1859(Local_610[iVar0], 6);
					break;
				case 6:
					if (iVar4 == 0)
					{
						vVar1 = { 3347.151f, -634.9161f, 43.4405f };
					}
					else if (iVar4 == 1)
					{
						vVar1 = { 3340.397f, -635.1588f, 43.0132f };
					}
					set_ped_sphere_defensive_area(&(Local_610[iVar0]), vVar1, 1f, 0, false, 0);
					task_combat_hated_targets_around_ped(&(Local_610[iVar0]), 200f, 0, 7);
					func_221(&(Local_610[iVar0]->f_4));
					func_1859(Local_610[iVar0], 7);
					break;
				case 7:
					if (!func_1304(Local_610[iVar0]->f_7, 32))
					{
						if (func_1335(&(Local_610[iVar0]->f_4)) >= 50f)
						{
							func_50(&(Local_610[iVar0]));
							set_ped_combat_attributes(&(Local_610[iVar0]), 50, true);
							set_ped_combat_movement(&(Local_610[iVar0]), 2);
							func_845(&(Local_610[iVar0]->f_7), 32);
						}
					}
					else if (!func_1304(Local_610[iVar0]->f_7, 256) && func_1314(&(Local_610[iVar0]), func_451(5, func_132(iLocal_154)), 50f, 1, 1))
					{
						set_ped_combat_attributes(&(Local_610[iVar0]), 5, true);
						set_ped_combat_movement(&(Local_610[iVar0]), 1);
						func_1986(&(Local_610[iVar0]), get_entity_coords(&(Local_627[iVar0]), true, false), 5f, 0, 0);
						func_845(&(Local_610[iVar0]->f_7), 256);
					}
					break;
			}
			if (get_ped_config_flag(&(Local_610[iVar0]), 87, false) && !is_entity_in_volume(&(Local_610[iVar0]), &(iLocal_918[10]), false, 0))
			{
				set_ped_config_flag(&(Local_610[iVar0]), 87, false);
			}
		}
		iVar0++;
	}
}

void func_1365(char[4] cParam0)
{
	if (!func_446(6))
	{
		return;
	}
	func_1997();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = iVar0;
		if (!func_163(&(Local_627[iVar2]), 0))
		{
		}
		else
		{
			switch (Local_627[iVar0]->f_3)
			{
				case 0:
					set_ped_accuracy(&(Local_627[iVar0]), 40);
					func_1910(&(Local_627[iVar0]), 1);
					if (iVar2 == 2)
					{
						func_145(cParam0, &(Local_627[2]), "GNG3_WAV3_GUARD", 0);
					}
					if (does_entity_exist(Local_627[iVar0]->f_1))
					{
						set_blocking_of_non_temporary_events(Local_627[iVar0]->f_1, true);
					}
					func_221(&(Local_627[iVar0]->f_4));
					func_1859(Local_627[iVar0], 2);
					break;
				case 2:
					if (func_446(28))
					{
						func_1852(Local_627[iVar0], 831283580, 0, 1);
						if (does_blip_exist(Local_627[iVar0]->f_2))
						{
							_set_blip_flash_style(Local_627[iVar0]->f_2, -1034486097);
						}
						if ((iVar2 == 0 && does_entity_exist(&(Local_627[0]))) && func_163(&(Local_627[0]), 0))
						{
							_play_sound_from_position("POLICE_WHISTLE_MULTI", get_entity_coords(&(Local_627[0]), true, false), "GNG3_Sounds", false, 0, true, 0);
						}
						switch (iVar2)
						{
							case 0:
								task_follow_waypoint_recording(&(Local_627[iVar0]), "gang3_HorseWave1", 0, 0, -1, 0, 1, -1);
								break;
							case 1:
								task_follow_waypoint_recording_at_offset(&(Local_627[iVar0]), "gang3_HorseWave1", 3f, 6, 2, -1, 1);
								break;
							case 2:
								task_follow_waypoint_recording_at_offset(&(Local_627[iVar0]), "gang3_HorseWave0", 2f, 6, 2, -1, 1);
								break;
							case 3:
								task_follow_waypoint_recording(&(Local_627[iVar0]), "gang3_HorseWave0", 0, 0, -1, 0, 1, -1);
								break;
							case 4:
								task_follow_waypoint_recording_at_offset(&(Local_627[iVar0]), "gang3_HorseWave1", 1.5f, 4, 2, -1, 1);
								break;
						}
						func_1859(Local_627[iVar0], 3);
					}
					break;
				case 3:
					switch (iVar2)
					{
						case 0:
						case 1:
						case 4:
							iVar1 = 143;
							break;
						case 2:
						case 3:
							iVar1 = 133;
							break;
					}
					if (!is_waypoint_playback_going_on_for_ped(&(Local_627[iVar0]), 0) || get_ped_waypoint_progress(&(Local_627[iVar0])) >= iVar1)
					{
						func_1986(&(Local_627[iVar0]), func_451(13, iVar0), 5f, 0, 0);
						task_combat_hated_targets_around_ped(&(Local_627[iVar0]), 200f, 0, 7);
						func_221(&(Local_627[iVar0]->f_4));
						func_1859(Local_627[iVar0], 7);
					}
					break;
				case 7:
					if (!func_1304(Local_627[iVar0]->f_7, 4))
					{
						if (func_897(&(Local_627[iVar0]->f_4)) > func_1998())
						{
							func_1999(*Local_627[iVar0]);
							func_845(&(Local_627[iVar0]->f_7), 4);
						}
					}
					else if (!func_1304(Local_627[iVar0]->f_7, 32))
					{
						if (func_1335(&(Local_627[iVar0]->f_4)) >= 50f)
						{
							func_50(&(Local_627[iVar0]));
							set_ped_combat_attributes(&(Local_627[iVar0]), 50, true);
							set_ped_combat_movement(&(Local_627[iVar0]), 2);
							func_845(&(Local_627[iVar0]->f_7), 32);
						}
					}
					else if (!func_1304(Local_627[iVar0]->f_7, 256) && func_1314(&(Local_627[iVar0]), func_451(5, func_132(iLocal_154)), 50f, 1, 1))
					{
						set_ped_combat_attributes(&(Local_627[iVar0]), 5, true);
						set_ped_combat_movement(&(Local_627[iVar0]), 1);
						func_1986(&(Local_627[iVar0]), get_entity_coords(&(Local_627[iVar0]), true, false), 5f, 0, 0);
						func_845(&(Local_627[iVar0]->f_7), 256);
					}
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1991(Local_627[iVar0]);
		iVar0++;
	}
}

void func_1366()
{
	if (!func_446(27))
	{
		return;
	}
	func_2000();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = iVar0;
		if (!func_163(&(Local_668[iVar2]), 0))
		{
		}
		else
		{
			switch (Local_668[iVar2]->f_3)
			{
				case 0:
					if (iVar2 == 0)
					{
						iVar3 = 40;
					}
					else if (iVar2 == 1)
					{
						iVar3 = 45;
					}
					else if (iVar2 == 2)
					{
						iVar3 = 40;
					}
					else if (iVar2 == 3)
					{
						iVar3 = 45;
					}
					else if (iVar2 == 4)
					{
						iVar3 = 40;
					}
					else if (iVar2 == 5)
					{
						iVar3 = 45;
					}
					else if (iVar2 == 6)
					{
						iVar3 = 40;
					}
					set_ped_accuracy(&(Local_668[iVar0]), iVar3);
					func_221(&(Local_668[iVar0]->f_4));
					func_1859(Local_668[iVar0], 6);
					break;
				case 6:
					if (iVar2 == 0)
					{
						iVar1 = 0;
					}
					else if (iVar2 == 1)
					{
						iVar1 = 700;
					}
					else if (iVar2 == 2)
					{
						iVar1 = 1400;
					}
					else if (iVar2 == 3)
					{
						iVar1 = 1900;
					}
					else if (iVar2 == 4)
					{
						iVar1 = 2200;
					}
					else if (iVar2 == 4)
					{
						iVar1 = 2600;
					}
					else if (iVar2 == 4)
					{
						iVar1 = 3000;
					}
					if (func_1974(&(Local_668[iVar0]->f_4)) > iVar1)
					{
						if (iVar2 == 0 || iVar2 == 1)
						{
							_0x1854217c640b39ec(&(Local_668[iVar0]), Global_35, 0f, 0f, 0f, 10f, 0, 0);
							func_1859(Local_668[iVar0], 7);
						}
						else
						{
							func_1986(&(Local_668[iVar0]), func_451(17, (iVar0 - 2)), 1f, 0, 0);
							func_1859(Local_668[iVar0], 7);
						}
						task_combat_hated_targets_around_ped(&(Local_668[iVar0]), 200f, 0, 7);
					}
					break;
				case 7:
					if (iVar2 == 0)
					{
						if (iVar1355 >= 5)
						{
							func_1986(&(Local_668[iVar0]), 3244.852f, -520.8053f, 41.9002f, 1f, 0, 0);
							func_1859(Local_668[iVar0], 9);
						}
					}
					else if (iVar2 == 1)
					{
						if (iVar1355 >= 5)
						{
							func_1986(&(Local_668[iVar0]), 3246.049f, -513.3772f, 41.8486f, 1f, 0, 0);
							func_1859(Local_668[iVar0], 9);
						}
					}
					else if (func_446(31))
					{
						func_221(&(Local_668[iVar0]->f_4));
						func_1859(Local_668[iVar0], 8);
					}
					break;
				case 8:
					if (iVar2 == 2)
					{
						iVar1 = 0;
					}
					else if (iVar2 == 3)
					{
						iVar1 = 2000;
					}
					else if (iVar2 == 4)
					{
						iVar1 = 0;
					}
					else if (iVar2 == 5)
					{
						iVar1 = 3500;
					}
					else if (iVar2 == 6)
					{
						iVar1 = 3500;
					}
					if (func_1974(&(Local_668[iVar0]->f_4)) > iVar1)
					{
						func_1986(&(Local_668[iVar0]), func_451(19, iVar0), 1f, 1, 0);
						func_1852(Local_668[iVar0], 831283580, 0, 1);
						func_1859(Local_668[iVar0], 9);
					}
					break;
				case 9:
					if (!func_1304(Local_668[iVar0]->f_7, 32))
					{
						if (func_446(11) && func_2001())
						{
							func_50(&(Local_668[iVar0]));
							set_ped_combat_attributes(&(Local_668[iVar0]), 50, true);
							set_ped_combat_movement(&(Local_668[iVar0]), 2);
							func_845(&(Local_668[iVar0]->f_7), 32);
						}
					}
					else if (!func_1304(Local_668[iVar0]->f_7, 256) && func_1314(&(Local_668[iVar0]), func_451(5, func_132(iLocal_154)), 50f, 1, 1))
					{
						set_ped_combat_attributes(&(Local_668[iVar0]), 5, true);
						set_ped_combat_movement(&(Local_668[iVar0]), 1);
						func_1986(&(Local_668[iVar0]), get_entity_coords(&(Local_668[iVar0]), true, false), 5f, 0, 0);
						func_845(&(Local_668[iVar0]->f_7), 256);
					}
					break;
			}
			if (get_ped_config_flag(&(Local_668[iVar0]), 87, false) && !is_entity_in_volume(&(Local_668[iVar0]), &(iLocal_918[10]), false, 0))
			{
				set_ped_config_flag(&(Local_668[iVar0]), 87, false);
			}
		}
		iVar0++;
	}
}

void func_1367(char[4] cParam0)
{
	if (!func_446(7))
	{
		return;
	}
	func_2002();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (!func_163(&(Local_725[iVar1]), 0))
		{
		}
		else
		{
			switch (Local_725[iVar0]->f_3)
			{
				case 0:
					func_1852(Local_725[iVar0], 831283580, 0, 1);
					if (does_blip_exist(Local_725[iVar0]->f_2))
					{
						_set_blip_flash_style(Local_725[iVar0]->f_2, -1034486097);
					}
					set_ped_accuracy(&(Local_725[iVar0]), 40);
					if (iVar1 == 3)
					{
						func_145(cParam0, &(Local_725[3]), "GNG3_WAV3_GUARD", 0);
					}
					if (does_entity_exist(Local_725[iVar0]->f_1))
					{
						set_blocking_of_non_temporary_events(Local_725[iVar0]->f_1, true);
					}
					switch (iVar1)
					{
						case 0:
							task_follow_waypoint_recording(&(Local_725[iVar0]), "gang3_HorseField0", 0, 2, -1, 0, 1, -1);
							break;
						case 1:
							task_follow_waypoint_recording(&(Local_725[iVar0]), "gang3_HorseField0", 0, 2, -1, 0, 1, -1);
							break;
						case 2:
							task_follow_waypoint_recording(&(Local_725[iVar0]), "gang3_HorseField1", 0, 2, -1, 0, 1, -1);
							break;
						case 3:
							task_follow_waypoint_recording(&(Local_725[iVar0]), "gang3_HorseField1", 4, 2, -1, 0, 1, -1);
							break;
					}
					func_221(&(Local_725[iVar0]->f_4));
					func_1859(Local_725[iVar0], 2);
					break;
				case 2:
					func_1916(&(Local_725[iVar0]), 1073741824);
					switch (iVar1)
					{
						case 0:
							if (!is_waypoint_playback_going_on_for_ped(&(Local_725[iVar0]), 0) || get_ped_waypoint_progress(&(Local_725[iVar0])) >= 47)
							{
								func_1859(Local_725[iVar0], 6);
							}
							break;
						case 1:
							if (!is_waypoint_playback_going_on_for_ped(&(Local_725[iVar0]), 0) || get_ped_waypoint_progress(&(Local_725[iVar0])) >= 43)
							{
								func_1859(Local_725[iVar0], 6);
							}
							break;
						case 2:
							if (!is_waypoint_playback_going_on_for_ped(&(Local_725[iVar0]), 0) || get_ped_waypoint_progress(&(Local_725[iVar0])) >= 42)
							{
								func_1859(Local_725[iVar0], 6);
							}
							break;
						case 3:
							if (!is_waypoint_playback_going_on_for_ped(&(Local_725[iVar0]), 0) || get_ped_waypoint_progress(&(Local_725[iVar0])) >= 37)
							{
								func_1859(Local_725[iVar0], 6);
							}
							break;
					}
					break;
				case 6:
					func_902(31, 1);
					switch (iVar1)
					{
						case 0:
							set_ped_sphere_defensive_area(&(Local_725[iVar0]), func_175(14, 0), 3f, 0, false, 0);
							break;
						case 1:
							set_ped_sphere_defensive_area(&(Local_725[iVar0]), func_175(14, 1), 3f, 0, false, 0);
							break;
						case 2:
							set_ped_sphere_defensive_area(&(Local_725[iVar0]), func_175(14, 4), 3f, 0, false, 0);
							break;
						case 3:
							set_ped_sphere_defensive_area(&(Local_725[iVar0]), func_175(14, 3), 3f, 0, false, 0);
							break;
					}
					_0xfc3db99c8144cd81(&(Local_725[iVar0]), &(iLocal_918[6]), 0, 1, 0);
					clear_ped_tasks(&(Local_725[iVar0]), 1, 0);
					task_combat_hated_targets_around_ped(&(Local_725[iVar0]), 200f, 0, 7);
					set_ped_combat_attributes(&(Local_725[iVar0]), 5, true);
					func_221(&(Local_725[iVar0]->f_4));
					func_1859(Local_725[iVar0], 7);
					break;
				case 7:
					if (!func_1304(Local_725[iVar0]->f_7, 4096))
					{
						if (iVar1354 == 5)
						{
							set_ped_accuracy(&(Local_725[iVar0]), 50);
							func_845(&(Local_725[iVar0]->f_7), 4096);
						}
					}
					if (!func_1304(Local_725[iVar0]->f_7, 4))
					{
						if (func_897(&(Local_725[iVar0]->f_4)) > func_1998())
						{
							func_1999(*Local_725[iVar0]);
							func_845(&(Local_725[iVar0]->f_7), 4);
						}
					}
					else if (!func_1304(Local_725[iVar0]->f_7, 32))
					{
						if (func_1335(&(Local_725[iVar0]->f_4)) >= 50f)
						{
							func_50(&(Local_725[iVar0]));
							set_ped_combat_attributes(&(Local_725[iVar0]), 50, true);
							set_ped_combat_movement(&(Local_725[iVar0]), 2);
							func_845(&(Local_725[iVar0]->f_7), 32);
						}
					}
					else if (!func_1304(Local_725[iVar0]->f_7, 256) && func_1314(&(Local_725[iVar0]), func_451(5, func_132(iLocal_154)), 50f, 1, 1))
					{
						set_ped_combat_attributes(&(Local_725[iVar0]), 5, false);
						set_ped_combat_movement(&(Local_725[iVar0]), 1);
						func_1986(&(Local_725[iVar0]), get_entity_coords(&(Local_725[iVar0]), true, false), 5f, 0, 0);
						func_845(&(Local_725[iVar0]->f_7), 256);
					}
					if (iVar1 == 3 && !func_883(Global_35, &(Local_725[iVar0]), 30f, 1))
					{
						func_1963(14);
					}
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1991(Local_725[iVar0]);
		iVar0++;
	}
}

void func_1368()
{
	if (func_446(7))
	{
		func_2003();
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = iVar0;
			if (is_entity_dead(&(Local_758[iVar1])))
			{
			}
			else
			{
				switch (Local_758[iVar1]->f_3)
				{
					case 0:
						func_1852(Local_758[iVar1], 831283580, 0, 1);
						set_ped_accuracy(&(Local_758[iVar1]), 10);
						set_ped_seeing_range(&(Local_758[iVar1]), 300f);
						func_1859(Local_758[iVar1], 6);
						func_221(&(Local_758[iVar1]->f_4));
						break;
					case 6:
						_0xfc3db99c8144cd81(&(Local_758[iVar1]), &(iLocal_918[6]), 0, 1, 0);
						task_combat_hated_targets_around_ped(&(Local_758[iVar1]), 300f, 0, 7);
						set_ped_combat_attributes(&(Local_758[iVar1]), 5, true);
						func_1859(Local_758[iVar1], 7);
						func_221(&(Local_758[iVar1]->f_4));
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_1369()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (Local_405[iVar0]->f_3)
		{
			case 0:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				else
				{
					set_blocking_of_non_temporary_events(&(Local_405[iVar0]), true);
					func_1859(Local_405[iVar0], 2);
					func_221(&(Local_405[iVar0]->f_4));
				}
				break;
			case 2:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				else if ((((!_does_anim_scene_exist(&(uLocal_293[8])) || !_is_anim_scene_started(&(uLocal_293[8]), false)) || _is_anim_scene_finished(&(uLocal_293[8]), false)) || _is_anim_scene_active(&(uLocal_293[8]))) || _0x005e6f28dd7ed58d(&(uLocal_293[8]), "S_M_M_SKPGUARD_01"))
				{
					if (!func_1860(&(Local_405[iVar0]), 713668775))
					{
						task_follow_nav_mesh_to_coord(&(Local_405[iVar0]), func_175(9, 7), 3f, 20000, 0.25f, 0, 40000f);
					}
					func_1859(Local_405[iVar0], 3);
					func_221(&(Local_405[iVar0]->f_4));
				}
				break;
			case 3:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				else if (is_entity_in_volume(&(Local_405[iVar0]), &(iLocal_918[14]), true, 0) || !func_1860(&(Local_405[iVar0]), 713668775))
				{
					func_902(20, 1);
					func_1859(Local_405[iVar0], 5);
				}
				break;
			case 5:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				else if (func_1334(&(Local_405[iVar0]), func_175(9, 7), 1) < 3f || !func_1860(&(Local_405[iVar0]), 713668775))
				{
					func_1859(Local_405[iVar0], 12);
				}
				break;
			case 12:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				else
				{
					task_cower(&(Local_405[iVar0]), -1, Global_35, 0);
					func_1859(Local_405[iVar0], 13);
					func_221(&(Local_405[iVar0]->f_4));
				}
				break;
			case 13:
				if (!func_163(&(Local_405[iVar0]), 0))
				{
					func_1859(Local_405[iVar0], 30);
				}
				break;
			case 30:
				func_902(20, 1);
				if (func_2004(Global_35, &(Local_405[iVar0])))
				{
					func_315(2, 1142025875, 0, 0, &(Local_405[iVar0]), 0, 1065353216, 0);
				}
				func_1859(Local_405[iVar0], 32);
				break;
			case 32:
				break;
		}
		iVar0++;
	}
}

void func_1370(char[4] cParam0)
{
	if (func_2005())
	{
		if (!func_446(41))
		{
			func_2006(cParam0, &(Local_207[1]), 1, 1);
			func_2006(cParam0, &(Local_207[0]), 1, 1);
			func_552(&uLocal_1359);
			func_902(41, 1);
		}
	}
	else if (func_446(41))
	{
		func_2006(cParam0, &(Local_207[1]), 0, 1);
		func_2006(cParam0, &(Local_207[0]), 0, 1);
		func_552(&uLocal_1359);
		func_902(41, 0);
	}
}

bool func_1371(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2007(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1519(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2008(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_2009(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1372(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_2010(iParam2, 4))
	{
		func_2011(iParam1);
	}
	else
	{
		func_1956(cParam0, iParam1, iParam2);
	}
}

int func_1373()
{
	if (!is_vehicle_driveable(iVar915, false, false))
	{
		return 0;
	}
	if (!func_163(&(Local_207[0]), 0))
	{
		return 0;
	}
	if (!func_163(&(Local_207[1]), 0))
	{
		return 0;
	}
	if (!func_163(Global_35, 0))
	{
		return 0;
	}
	fVar0 = func_887(Global_35, iVar915, 0, 0);
	if (fVar0 > 12f)
	{
		return 0;
	}
	fVar1 = func_887(&(Local_207[0]), iVar915, 0, 0);
	fVar2 = func_887(&(Local_207[1]), iVar915, 0, 0);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		return 1;
	}
	return 2;
}

void func_1374(char[4] cParam0, char[4] cParam1)
{
	func_2012(&(cParam0->f_7375), cParam1);
}

void func_1375(bool bParam0)
{
	func_1920(&Local_496, bParam0);
}

void func_1376(bool bParam0)
{
	func_1920(&Local_529, bParam0);
}

void func_1377(bool bParam0)
{
	func_1920(&Local_610, bParam0);
}

void func_1378(bool bParam0)
{
	func_1920(&Local_627, bParam0);
}

void func_1379(bool bParam0)
{
	func_1920(&Local_668, bParam0);
}

void func_1380(bool bParam0)
{
	func_1920(&Local_725, bParam0);
}

void func_1381(bool bParam0)
{
	func_1920(&Local_758, bParam0);
}

void func_1382(bool bParam0)
{
	func_1920(&Local_807, bParam0);
}

void func_1383(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1980(uLocal_889[iVar0], bParam0);
		iVar0++;
	}
}

void func_1384(bool bParam0)
{
	func_1920(&Local_414, bParam0);
}

void func_1385(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1948(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1949(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_518(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1947(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1289(iParam1);
		}
	}
	if (func_1947(cParam0, iParam1))
	{
		func_1946(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1950(cParam0, iParam1, 128);
		}
		else
		{
			func_1946(cParam0, iParam1, 128);
		}
		if (func_1014(cParam0, iParam1, &iVar3))
		{
			func_1563(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1952(iVar1);
	}
}

void func_1386()
{
	if (func_446(70))
	{
		return;
	}
	func_902(70, 1);
	_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
	iVar0 = func_1387(6291584, 0);
	iVar1 = func_1387(6291456, 0);
	if (iVar0 != 0)
	{
		iVar2 = iVar0;
	}
	else if (iVar1 != 0)
	{
		iVar2 = iVar1;
	}
	else
	{
		iVar2 = -183018591;
	}
	iVar3 = func_1105(Global_35, 9, 0, 0);
	if (iVar3 == iVar2)
	{
		return;
	}
	iVar4 = func_1105(Global_35, 10, 0, 0);
	if (iVar4 == iVar2)
	{
		set_current_ped_weapon(Global_35, iVar4, true, 9, false, false);
		set_current_ped_weapon(Global_35, iVar3, true, 10, false, false);
	}
	else
	{
		remove_weapon_from_ped(Global_35, iVar3, true, -142743235);
		_give_weapon_to_ped_2(Global_35, iVar2, 20, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
}

int func_1387(int iParam0, int iParam1)
{
	return func_2013(&uVar0, iParam0, iParam1);
}

bool func_1388(char[4] cParam0, int iParam1)
{
	return func_802(&(cParam0->f_7375), iParam1);
}

void func_1389()
{
	if (!func_446(42))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_ped_current_weapon_visible(Global_35, true, false, true, false);
		func_319(218444191, 20, 1, 0, 0, 752097756, 0, 0, 0, 0);
		_0x9f9a829c6751f3c7(player_id(), 6, 1);
		set_player_simulate_aiming(player_id(), true);
		force_ped_motion_state(Global_35, 1063765679, true, 1, true);
		func_1453(1);
		func_902(42, 1);
	}
}

void func_1390(char[4] cParam0)
{
	func_2014(&(cParam0->f_7375));
}

int func_1391(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*uParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *uParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_2015(*iParam1))
			{
				iParam2 = func_2016(*iParam1);
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
		set_ped_into_vehicle(*uParam0, *iParam1, iParam2);
	}
	return 1;
}

void func_1392(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			if (func_1818(&uLocal_902, 1f))
			{
				if (func_1414(cParam0, "GNG3_S7_OBJ1", 0) || func_1335(&uLocal_902) >= 5f)
				{
					func_552(&uLocal_902);
					func_1291(cParam0, "GNG3_S9_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_1821())
			{
				if (func_1818(&uLocal_902, 1f))
				{
					if (!func_163(&(Local_832[4]), 0))
					{
						func_552(&uLocal_902);
						func_135(cParam0, 2);
					}
					else if (Local_832[4]->f_3 >= 3 && func_1414(cParam0, "GNG3_S7_BANT1", 0))
					{
						func_552(&uLocal_902);
						func_135(cParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (func_2017(&Local_832, 0) == 2 && func_1414(cParam0, "GNG3_S7_BANT2", 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
}

void func_1393(char[4] cParam0)
{
	func_1535(cParam0);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		if (iVar1 == 4)
		{
			switch (Local_832[iVar1]->f_3)
			{
				case 0:
					if (!is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1852(Local_832[iVar0], 831283580, 0, 1);
						_set_blip_flash_style(Local_832[iVar0]->f_2, -1034486097);
						set_entity_visible(&(Local_832[iVar0]), true);
						set_entity_visible(Local_832[iVar0]->f_1, true);
						func_1986(&(Local_832[iVar0]), func_451(7, iVar0), 3f, 0, 0);
						func_1910(&(Local_832[iVar0]), 1);
						set_ped_accuracy(&(Local_832[iVar0]), 10);
						task_follow_nav_mesh_to_coord(&(Local_832[iVar0]), func_451(7, iVar0), 2.001f, 20000, 0.25f, 0, func_500(7, iVar0));
						if (func_163(Local_832[iVar0]->f_1, 0))
						{
							func_1910(Local_832[iVar0]->f_1, 1);
							set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
							set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
						}
						func_1859(Local_832[iVar0], 2);
					}
					break;
				case 2:
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						if (!is_ped_dead_or_dying(Local_832[iVar0]->f_1, true) && func_2018(&(Local_832[iVar0])))
						{
							func_1317(Local_832[iVar0]->f_1, 0, 0);
						}
						else
						{
							task_go_straight_to_coord(Local_832[iVar0]->f_1, 3259f, -557.9f, 44.3f, 3f, -1, 40000f, 1056964608, 0);
						}
						func_1859(Local_832[iVar0], 32);
					}
					else if (is_ped_dead_or_dying(Local_832[iVar0]->f_1, true) && func_2018(&(Local_832[iVar0])))
					{
						func_1317(Local_832[iVar0]->f_1, 0, 0);
						func_1859(Local_832[iVar0], 32);
					}
					if (func_1334(&(Local_832[iVar0]), func_451(7, iVar0), 0) < 1f)
					{
						task_dismount_animal(&(Local_832[iVar0]), 262144, 0, 0, 0, 0);
						func_221(&(Local_832[iVar0]->f_4));
						func_1859(Local_832[iVar0], 3);
					}
					break;
				case 3:
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1859(Local_832[iVar0], 32);
					}
					else if (!is_ped_on_mount(&(Local_832[iVar0])) || func_1335(&(Local_832[iVar0]->f_4)) > 1.2f)
					{
						task_combat_hated_targets_around_ped(&(Local_832[iVar0]), 500f, 0, 0);
						if (func_163(Local_832[iVar0]->f_1, 0))
						{
							_task_smart_flee_style_ped_via(Local_832[iVar0]->f_1, Global_35, 3, 3218.197f, -423.3309f, 42.4743f, 0, -1082130432, -1, 0);
						}
						func_1859(Local_832[iVar0], 6);
					}
					break;
				case 6:
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1859(Local_832[iVar0], 32);
					}
					break;
				case 32:
					break;
			}
		}
		else if (iVar1 == 6)
		{
			switch (Local_832[iVar1]->f_3)
			{
				case 0:
					if (!is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1852(Local_832[iVar0], 831283580, 0, 1);
						_set_blip_flash_style(Local_832[iVar0]->f_2, -1034486097);
						func_1986(&(Local_832[iVar0]), 3146.249f, -491.3773f, 48.2219f, 1f, 0, 0);
						func_1910(&(Local_832[iVar0]), 1);
						set_ped_accuracy(&(Local_832[iVar0]), 1);
						remove_all_ped_weapons(&(Local_832[iVar0]), false, true);
						func_1273(&(Local_832[iVar0]), -506285289, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						task_combat_hated_targets_around_ped(&(Local_832[iVar0]), 500f, 0, 0);
						func_1859(Local_832[iVar0], 2);
					}
					break;
				case 6:
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1859(Local_832[iVar0], 32);
					}
					break;
				case 32:
					break;
			}
		}
		else
		{
			switch (Local_832[iVar0]->f_3)
			{
				case 0:
					if (!is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1852(Local_832[iVar0], 831283580, 0, 1);
						set_combat_float(&(Local_832[iVar0]), 31, -1f);
						_set_blip_flash_style(Local_832[iVar0]->f_2, -1034486097);
						func_1986(&(Local_832[iVar0]), func_451(7, iVar0), 3f, 1, 0);
						func_1910(&(Local_832[iVar0]), 1);
						func_1910(Local_832[iVar0]->f_1, 1);
						set_blocking_of_non_temporary_events(&(Local_832[iVar0]), false);
						set_ped_accuracy(&(Local_832[iVar0]), 10);
						if (func_163(Local_832[iVar0]->f_1, 0))
						{
							if (iVar1 == 1)
							{
								set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 1.75f);
							}
							else
							{
								set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
							}
							set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
						}
						func_1859(Local_832[iVar0], 6);
						func_221(&(Local_832[iVar0]->f_4));
					}
					break;
				case 6:
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						func_1859(Local_832[iVar0], 32);
					}
					else
					{
						if (func_163(Local_832[iVar0]->f_1, 0))
						{
							if (iVar1 == 1)
							{
								set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 1.75f);
							}
							else
							{
								set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
							}
							set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
						}
						task_combat_hated_targets_around_ped(&(Local_832[iVar0]), 500f, 0, 0);
						func_1859(Local_832[iVar0], 7);
						func_221(&(Local_832[iVar0]->f_4));
					}
					break;
				case 7:
					if (iVar1 != 1)
					{
						if ((func_26(&(Local_832[iVar0]->f_4)) && func_1335(&(Local_832[iVar0]->f_4)) <= 3f) && func_163(Local_832[iVar0]->f_1, 0))
						{
							set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
							set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
						}
					}
					else if ((func_26(&(Local_832[iVar0]->f_4)) && func_1335(&(Local_832[iVar0]->f_4)) <= 0.5f) && func_163(Local_832[iVar0]->f_1, 0))
					{
						set_ped_min_move_blend_ratio(Local_832[iVar0]->f_1, 2.001f);
						set_ped_reset_flag(Local_832[iVar0]->f_1, 346, true);
					}
					if (((iVar1 == 1 && !func_446(65)) && func_163(&(Local_832[iVar0]), 0)) && !is_ped_on_mount(&(Local_832[iVar0])))
					{
						func_1986(&(Local_832[iVar0]), 3148.741f, -408.2357f, 40.8066f, 1f, 1, 0);
						func_902(65, 1);
					}
					if (is_ped_dead_or_dying(&(Local_832[iVar0]), true))
					{
						if (!is_ped_dead_or_dying(Local_832[iVar0]->f_1, true) && func_2018(&(Local_832[iVar0])))
						{
							func_1317(Local_832[iVar0]->f_1, 0, 0);
						}
						else
						{
							_task_smart_flee_style_ped_via(Local_832[iVar0]->f_1, Global_35, 3, 3259f, -557.9f, 44.3f, 0, -1082130432, -1, 0);
						}
						func_1859(Local_832[iVar0], 32);
					}
					else if (is_ped_dead_or_dying(Local_832[iVar0]->f_1, true) && func_2018(&(Local_832[iVar0])))
					{
						func_1317(Local_832[iVar0]->f_1, 0, 0);
						func_1859(Local_832[iVar0], 32);
					}
					break;
				case 32:
					break;
			}
		}
		iVar0++;
	}
}

void func_1394()
{
	if (!is_vehicle_driveable(iVar915, false, false))
	{
		return;
	}
	if (!func_163(&(Local_207[0]), 0))
	{
		return;
	}
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, 1291350480, false);
	disable_control_action(0, 581154816, false);
	disable_control_action(0, -1304887797, false);
	sVar0 = "gang3_BoatRoute";
	switch (iVar1380)
	{
		case 0:
			if (get_is_waypoint_recording_loaded(sVar0))
			{
				task_vehicle_follow_waypoint_recording(&(Local_207[0]), iVar915, sVar0, 1024, 0, 0, -1, 1.76f, 0, 1073741824, 0);
				func_2019(1);
			}
			break;
		case 1:
			if (func_2020(sVar0))
			{
				func_2019(2);
			}
			break;
		case 2:
			break;
	}
}

void func_1395()
{
	if (func_2021(&uLocal_1383, 20f))
	{
		if (!func_446(55))
		{
			func_1399(&(Local_207[0]), 1);
			func_1399(&(Local_207[1]), 1);
			func_2022(80);
			func_902(55, 1);
		}
	}
	else if (func_446(55))
	{
		func_1399(&(Local_207[0]), 0);
		func_1399(&(Local_207[1]), 0);
		func_2022(10);
		func_902(55, 0);
	}
}

bool func_1396(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = iVar1;
		if (func_163(&(Local_832[iVar2]), 0))
		{
			*uParam0 = iVar2;
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 == 1;
}

bool func_1397()
{
	return iVar1380 == 2;
}

void func_1398(char[4] cParam0)
{
	Var0 = { func_1516(cParam0, func_35(cParam0)) };
	func_2023(cParam0, &Var0);
}

void func_1399(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if ((!get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 10f) || !_0x75df9e73f2f005fd(iParam0))
		{
			func_1910(iParam0, 1);
			_0xc2266aa617668ad3(iParam0, 10f);
			_0xd05ad61f242c626b(iParam0, 10f);
			set_entity_invincible(iParam0, false);
			set_entity_only_damaged_by_player(iParam0, false);
			set_entity_can_be_damaged(iParam0, true);
		}
	}
	else if (get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 1f)
	{
		func_1910(iParam0, 0);
		_0xc2266aa617668ad3(iParam0, 1f);
		_0xd05ad61f242c626b(iParam0, 1f);
	}
}

int func_1400(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_1401(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_2024(uParam0);
	uParam0->f_4 = iParam1;
	func_2025(uParam0, iParam2, iParam3, iParam4, iParam5);
}

Vector3 func_1402(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_1403(char[4] cParam0)
{
	func_381(cParam0, 268435456);
	func_1343(cParam0, "MultiStart");
	func_1420(cParam0, "MultiStart");
}

void func_1404(int iParam0)
{
	if (iVar287 != iParam0)
	{
		iLocal_290 = iParam0;
	}
}

void func_1405(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_1743(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

void func_1406(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
}

void func_1407(char[4] cParam0)
{
	switch (func_1288(cParam0))
	{
		case 0:
			if (!func_120(cParam0, 4))
			{
				func_1291(cParam0, "GNG3_S10_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			}
			else
			{
				func_1290(cParam0, "GNG3_S10_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			}
			func_2026(7);
			func_552(&uLocal_902);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1818(&uLocal_902, 1f) && func_1414(cParam0, "GNG3_S10_OBJ1", 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
	func_2027(cParam0, iVar310, 1125515264, 0, 0, 1, -1925605092, 1084227584, 1103626240);
	func_2028();
}

void func_1408()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (!is_entity_dead(&(Local_207[iVar0])))
		{
			switch (Local_207[iVar0]->f_3)
			{
				case 0:
					set_blocking_of_non_temporary_events(&(Local_207[iVar0]), true);
					if (func_2018(&(Local_207[iVar0])))
					{
						if (iVar1 == 0)
						{
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 2);
						}
						else
						{
							func_221(&(Local_207[iVar0]->f_4));
							func_1254(Local_207[iVar0], 8);
						}
					}
					else
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 34);
					}
					break;
				case 2:
					if (func_2018(&(Local_207[1])))
					{
						_0xac22aa6df4d1c1de(player_id(), &(Local_207[iVar0]), -1082130432, -1082130432, 4, 2, 0);
						func_1853(&(Local_207[iVar0]), "gang3_RouteToCamp", 25614);
						func_221(&(Local_207[iVar0]->f_4));
						if (!func_446(71))
						{
							func_1254(Local_207[iVar0], 38);
						}
						else
						{
							func_1254(Local_207[iVar0], 8);
						}
					}
					break;
				case 38:
					if (get_ped_waypoint_progress(&(Local_207[iVar0])) >= 16 || func_1412(Global_35, iVar311, 0))
					{
						func_1254(Local_207[iVar0], 8);
						func_902(71, 1);
					}
					else if (!func_2029(&(Local_207[iVar0]), 658540077))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 2);
					}
					break;
				case 8:
					if (iVar1 == 0)
					{
						func_2030(&(Local_207[iVar0]), 1071644672, 0, 1045220557, 1, 1077936128, 15f, 30f, 1033476506, 1061158912, 1, 1, 1045220557, iVar311);
					}
					if (!func_2018(&(Local_207[iVar0])))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 34);
					}
					else if (iVar1 == 0 && !func_2018(&(Local_207[1])))
					{
						waypoint_playback_pause(&(Local_207[iVar0]), 0, 0, 0);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 32);
					}
					else if (iVar1 == 0 && !func_1412(Global_35, iVar311, 0))
					{
						waypoint_playback_pause(&(Local_207[iVar0]), 1, 0, 0);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 32);
					}
					else if (iVar1 == 0 && !func_2029(&(Local_207[iVar0]), 658540077))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 2);
					}
					break;
				case 32:
					if (iVar1 == 0)
					{
						func_2030(&(Local_207[iVar0]), 1071644672, 0, 1045220557, 1, 1077936128, 15f, 30f, 1033476506, 1061158912, 1, 1, 1045220557, iVar311);
					}
					if (func_2018(&(Local_207[1])) && func_1412(Global_35, iVar311, 0))
					{
						waypoint_playback_resume(&(Local_207[iVar0]), false, -1, 0);
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 8);
					}
					break;
				case 34:
					if (Local_207[iVar0]->f_8 == 11 && !is_entity_dead(Local_207[0]->f_1))
					{
						task_mount_animal(&(Local_207[iVar0]), Local_207[0]->f_1, 20000, -1, 1073741824, 1, 0, 0);
					}
					else if (Local_207[iVar0]->f_8 == 1 && !is_entity_dead(Local_207[0]->f_1))
					{
						task_mount_animal(&(Local_207[iVar0]), Local_207[0]->f_1, 20000, 0, 1073741824, 1, 0, 0);
					}
					func_221(&(Local_207[iVar0]->f_4));
					func_1254(Local_207[iVar0], 35);
					break;
				case 35:
					if (func_2018(&(Local_207[iVar0])))
					{
						func_221(&(Local_207[iVar0]->f_4));
						if (iVar1 == 0)
						{
							func_1254(Local_207[iVar0], 2);
						}
						else if (iVar1 == 1)
						{
							func_1254(Local_207[iVar0], 8);
						}
					}
					else if (!func_2029(&(Local_207[iVar0]), 1868526510))
					{
						func_221(&(Local_207[iVar0]->f_4));
						func_1254(Local_207[iVar0], 34);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_1409()
{
	switch (iVar288)
	{
		case 0:
			if (func_446(32))
			{
				func_1252(3, 1, 1, 1);
				func_1830();
				func_1404(1);
			}
			break;
		case 1:
			if (func_446(33) && func_1832())
			{
				func_221(&uLocal_905);
				if (is_player_control_on(player_id()))
				{
					set_player_control(player_id(), false, 24, false);
				}
				_0xf239400e16c23e08(0, 0);
				waypoint_recording_get_closest_waypoint("gang3_RouteToCamp", Global_36, &iVar0);
				task_follow_waypoint_recording(Global_35, "gang3_RouteToCamp", iVar0 + 5, 25614, -1, 0, 0, -1);
				func_1404(2);
			}
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
			{
				waypoint_playback_override_speed(Global_35, 2f, 0, -1f, 0);
			}
			if ((is_srl_loaded() && _0xaa235e2f2c09e952(func_170(1))) && func_897(&uLocal_905) > 3f)
			{
				display_hud(false);
				display_radar(false);
				func_1835();
				_0x5e3ccf03995388b5(func_1836(3), func_1837(3));
				func_1833(1, 3);
				func_2031("gang3_RouteToCamp", 535, 1.5f, -1415276238);
				end_srl();
				func_1252(4, 1, 1, 1);
				func_908(2462.633f, 673.2061f, 71.4118f, 120f, 0, 0);
				func_172(79, 1);
				func_221(&uLocal_905);
				func_1404(3);
			}
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_ped(&(Local_207[0]), 0))
			{
				waypoint_playback_override_speed(&(Local_207[0]), 1.5f, 0, -1f, 0);
			}
			if (func_1839(1, 3, 4))
			{
				func_1833(1, 4);
				func_2031("gang3_RouteToCamp", 616, 1.5f, -530524);
				end_srl();
				func_1252(5, 1, 1, 1);
				func_908(2525.157f, 824.2104f, 74.4704f, 120f, 0, 0);
				func_221(&uLocal_905);
				func_1404(4);
			}
			break;
		case 4:
			if (is_waypoint_playback_going_on_for_ped(&(Local_207[0]), 0))
			{
				waypoint_playback_override_speed(&(Local_207[0]), 1.5f, 0, -1f, 0);
			}
			if (func_1839(1, 4, 5))
			{
				func_1833(1, 5);
				func_2031("gang3_RouteToCamp", 716, 1.5f, -530524);
				end_srl();
				func_1252(6, 1, 1, 1);
				func_908(2491.579f, 972.1976f, 93.6027f, 120f, 0, 0);
				func_221(&uLocal_905);
				func_1404(5);
			}
			break;
		case 5:
			if (func_1839(1, 5, 6))
			{
				func_1833(1, 6);
				func_2031("gang3_RouteToCamp", 914, 1.25f, -530524);
				func_221(&uLocal_905);
				func_1404(6);
			}
			break;
		case 6:
			set_srl_time(to_float(func_222(&uLocal_905)));
			if (func_1839(1, 6, -1))
			{
				display_hud(true);
				display_radar(true);
				_0x43037abfe214a851();
				set_player_control(player_id(), true, 0, false);
				func_172(79, 0);
				func_1404(10);
			}
			break;
		case 10:
			set_srl_time(to_float(func_222(&uLocal_905)));
			break;
	}
	if (iVar288 >= 2)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	if (iVar288 >= 1 && iVar288 <= 6)
	{
		_0x98a7cd5ea379a854();
	}
	if (iVar288 >= 1)
	{
		_0xf45e46deecf7df6e(10208, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	return iVar288 == 10;
}

bool func_1410(char[4] cParam0, int iParam1)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = iVar1;
		bVar0 = (bVar0 && func_1532(cParam0, iVar2, iParam1));
		iVar1++;
	}
	return bVar0;
}

bool func_1411(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	return func_1284(cParam0, func_551(iParam1), "GANG_RET", "GANG_FAIL", sParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_1412(int iParam0, int iParam1, bool bParam2)
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

int func_1413(int iParam0, char* sParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return -1;
	}
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return -1;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	if (!waypoint_recording_get_closest_waypoint(sParam1, vVar0, &uVar3))
	{
		return -1;
	}
	return uVar3;
}

bool func_1414(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_2032(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1415()
{
	if (func_1413(Global_35, "gang3_RouteToCamp") < 535)
	{
		return false;
	}
	if (_0x1ecc76792f661cf5("GNG3_S10_RBANT1") && get_current_scripted_conversation_line("GNG3_S10_RBANT1") > 24)
	{
		return true;
	}
	if (_0xf01c570e0a0a1e67("GNG3_S10_RBANT1"))
	{
		return false;
	}
	if (!_0x1ecc76792f661cf5("GNG3_S10_RBANT1"))
	{
		return true;
	}
	return false;
}

bool func_1416()
{
	return iVar288 == 10;
}

void func_1417()
{
	switch (iVar1385)
	{
		case 0:
			if (func_1825() && iVar288 == 6)
			{
				iVar25 = 3;
				while (iVar25 <= 6)
				{
					iVar0 = iVar25;
					if (!func_163(&(Local_226[iVar0]), 0))
					{
					}
					else if (func_2033(iVar0, &uVar1, &cVar9, &vVar17, &vVar20, &iVar23, &fVar24))
					{
						if (!has_anim_dict_loaded(&uVar1))
						{
						}
						else
						{
							set_blocking_of_non_temporary_events(&(Local_226[iVar0]), true);
							task_play_anim_advanced(&(Local_226[iVar0]), &uVar1, &cVar9, vVar17, vVar20, 1000f, -8f, -1, iVar23, fVar24, 2, 1, 0);
							_0x2208438012482a1a(&(Local_226[iVar0]), false, false);
						}
					}
					iVar25++;
				}
				func_2034(1);
			}
			break;
		case 1:
			if (func_163(&(Local_226[3]), 0) && is_entity_playing_anim(&(Local_226[3]), func_414(3), func_2035(3), 1))
			{
				_set_entity_anim_speed(&(Local_226[3]), func_414(3), func_2035(3), 0.85f);
			}
			if (!func_1825())
			{
				func_2034(2);
			}
			break;
		case 2:
			break;
	}
}

int func_1418(char* sParam0)
{
	return func_2036(sParam0);
}

bool func_1419()
{
	switch (iVar2277)
	{
		case 0:
			func_1252(6, 1, 1, 1);
			func_2037(1);
			break;
		case 1:
			if (is_srl_loaded())
			{
				func_2037(2);
			}
			break;
		case 2:
			break;
	}
	return iVar2277 == 2;
}

void func_1420(char[4] cParam0, char[4] cParam1)
{
	func_2038(&(cParam0->f_7375), cParam1);
	func_381(cParam0, 33554432);
}

void func_1421(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1105(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_1707(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					_0xe9bd19f8121ade3e(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_1422()
{
	if (iVar2277 == 2)
	{
		begin_srl();
		func_2039(&uLocal_905, 9.26f, 0);
	}
}

bool func_1423(char[4] cParam0)
{
	if (iVar2275 <= 2)
	{
		set_srl_time(to_float(func_222(&uLocal_905)));
	}
	switch (iVar2275)
	{
		case 0:
			if (func_2040(cParam0))
			{
				if (_does_anim_scene_exist(&(uLocal_293[12])) && _is_anim_scene_loaded(&(uLocal_293[12]), true, false))
				{
					if (func_303())
					{
						iLocal_2280 = 1;
					}
					else
					{
						iLocal_2280 = 0;
						_0xdf7b5144e25cd3fe(&(uLocal_293[12]), func_2041(iVar2277));
					}
					func_2042(1);
				}
			}
			break;
		case 1:
			_set_entity_coords_and_heading(iVar310, 2367.112f, 1341.25f, 105.1529f, 302.8364f, true, false, true);
			_0x2412216fcc7b4e3e(func_170(1));
			create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, 1300184824, true);
			create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -441265845, true);
			create_model_hide(2349.58f, 1352.6f, 105.13f, 4f, -1608216788, true);
			create_model_hide(2350.515f, 1353.91f, 104.8535f, 4f, -422220273, true);
			iVar5 = 3;
			while (iVar5 <= 6)
			{
				iVar6 = iVar5;
				if (!func_163(&(Local_226[iVar6]), 0))
				{
				}
				else
				{
					clear_ped_tasks(&(Local_226[iVar6]), 1, 0);
					switch (iVar6)
					{
						case 3:
							set_entity_coords(&(Local_226[iVar6]), 2360.778f, 1380.142f, 105.5222f, true, false, true, true);
							break;
						case 4:
							_set_entity_coords_and_heading(&(Local_226[iVar6]), 2368.642f, 1359.133f, 105.1222f, 82.1162f, false, false, false);
							func_260(cParam0, 19, &(Local_226[iVar6]), 0, 0, 1, 0);
							break;
						case 5:
							_set_entity_coords_and_heading(&(Local_226[iVar6]), 2371.657f, 1351.375f, 105.1306f, 102.0592f, false, false, false);
							func_260(cParam0, 17, &(Local_226[iVar6]), 0, 0, 1, 0);
							break;
						case 6:
							_set_entity_coords_and_heading(&(Local_226[iVar6]), 2337.119f, 1359.697f, 105.3035f, 249.097f, false, false, false);
							func_260(cParam0, 4, &(Local_226[iVar6]), 0, 0, 1, 0);
							break;
					}
				}
				iVar5++;
			}
			func_2042(2);
			break;
		case 2:
			func_2009(&Local_1388, "GNG3_EXT2", 1, 1);
			if (has_anim_event_fired(Global_35, 2030541885))
			{
				func_2042(3);
			}
			else if (func_2043(cParam0, 512))
			{
				func_2044(cParam0, 524288);
				func_140(cParam0, iLocal_157, 16);
				func_902(66, 1);
				func_2042(3);
			}
			break;
		case 3:
			if ((_does_anim_scene_exist(&(uLocal_293[12])) && _is_anim_scene_loaded(&(uLocal_293[12]), true, false)) && _0x23e33cb9f4a3f547(&(uLocal_293[12]), func_2041(iVar2277)))
			{
				if (func_446(66))
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						_delete_anim_scene(cParam0->f_7375.f_804);
					}
				}
				_set_anim_scene_playback_list_bool(&(uLocal_293[12]), func_2041(iVar2277), true);
				start_anim_scene(&(uLocal_293[12]));
				set_bit(&(Global_1956580->f_1), 5);
				end_srl();
				func_179(0);
				func_2045(cParam0);
				if (!func_446(66))
				{
					func_2044(cParam0, 2);
				}
				_0x025e98e317652cdd(2);
				_0xc9caeaeec1256e54(-1679307491);
				func_2042(4);
			}
			break;
		case 4:
			iVar0 = &uLocal_293[12];
			func_2009(&Local_1388, "GNG3_EXT2", 1, 1);
			_0xc9caeaeec1256e54(-1679307491);
			if (func_446(66) && _get_anim_scene_time(iVar0) >= 4f)
			{
				do_screen_fade_in(1000);
				func_1319(cParam0, iLocal_157, 16);
				func_902(66, 0);
			}
			if ((!_does_anim_scene_exist(iVar0) || !_is_anim_scene_started(iVar0, false)) || _get_anim_scene_progress(iVar0) == 1f)
			{
				clear_bit(&(Global_1956580->f_1), 5);
				_0x025e98e317652cdd(0);
				func_2042(5);
			}
			break;
		case 5:
			_0xc9caeaeec1256e54(-1679307491);
			func_2046();
			func_266(cParam0, 2048);
			func_266(cParam0, 1024);
			func_266(cParam0, 131072);
			func_872(&Local_1388, Global_35, "arthur", 0, 0, 0);
			func_872(&Local_1388, &(Local_226[3]), "MARYBETH", 0, 0, 0);
			func_1401(&Local_1388, &(iLocal_918[28]), 10208, 0, 8, 0);
			func_2042(6);
			break;
		case 6:
			if (_does_anim_scene_exist(&(uLocal_293[12])) && _is_anim_scene_started(Local_1388.f_804, false))
			{
				_delete_anim_scene(&(uLocal_293[12]));
			}
			StringCopy(&cVar1, "GNG3_EXT2", 32);
			if (func_1524(cVar1, &Local_1388, cParam0))
			{
				func_2042(7);
			}
			break;
		case 7:
			break;
	}
	func_2047();
	if (iVar2275 >= 4 && iVar2275 <= 6)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	return iVar2275 == 7;
}

int func_1424(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 1;
	}
	iVar0 = func_196(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_273(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_454(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_457(134, 0) && func_458(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_454(iVar1, iVar2, bVar3, 0, 0))
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
			if (func_454(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_454(138, 1, 0, 0, 0))
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
			if (func_460(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_454(iVar1, 0, 0, 0, 0))
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
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_460(5) && func_461(12))
			{
				iVar1 = 21;
				if (func_454(iVar1, 1, 0, 0, 0))
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
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_454(iVar1, 0, 0, 0, 0))
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
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_328((*Global_1835011)[11]->f_1, 1) && func_328((*Global_1835011)[14]->f_1, 1)) && func_328((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_454(iVar1, iVar2, bVar3, 0, 0))
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
		iVar6 = func_273(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_462(15))
			{
				if (func_463(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_454(iVar1, 0, 0, 0, 0))
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
			if (func_462(15))
			{
				if (func_463(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_462(9))
			{
				if (func_463(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_328((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_454(iVar1, iVar2, 0, 0, 0))
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
			if (func_462(15))
			{
				if (func_463(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_462(9))
			{
				if (func_463(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_454(iVar1, 0, 0, 0, 0))
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
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_454(iVar1, 0, 0, 0, 0))
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
			if (func_328((*Global_1835011)[6]->f_1, 1) && func_328((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_454(iVar1, iVar2, bVar3, 0, 0))
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
			if (func_328((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_454(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_454(iVar1, 0, 0, 0, 0))
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
	if (func_454(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1425(int iParam0, int iParam1)
{
	if (func_2048())
	{
		return;
	}
	if (func_2049())
	{
		return;
	}
	Global_1327590->f_9 = iParam0;
	Global_1327590->f_10.f_11 = iParam1;
	Global_1327590->f_10.f_1 = { func_2050(Global_1327590->f_9) };
	request_script(&(Global_1327590->f_10.f_1));
}

bool func_1426(int iParam0)
{
	if (-1829635046 == func_2051(81053684))
	{
		if (func_2052(iParam0))
		{
			return true;
		}
	}
	else if (func_1709(-525676072, iParam0))
	{
		if (func_2052(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1427(int iParam0)
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

void func_1428(int iParam0)
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

void func_1429()
{
	iVar0 = func_1105(Global_35, 9, 1, 0);
	if (func_691(iVar0))
	{
		return;
	}
	iVar0 = func_1105(Global_35, 7, 1, 0);
	if (func_691(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1105(Global_35, 0, 1, 0);
	if (func_691(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1105(Global_35, 1, 1, 0);
	if (func_691(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1105(Global_35, 18, 1, 0);
	if (func_691(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_2053();
	if (func_691(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1273(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1387(6291456, 0);
	if (func_691(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1273(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1430()
{
	return Global_1900383->f_393;
}

int func_1431(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_2054(*uParam0, 0f, 0f, 0f))
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

void func_1432(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1433(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1434(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1435()
{
	return &Global_1899515;
}

void func_1436(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1437(int iParam0)
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

bool func_1438()
{
	return (func_2055() || func_2056());
}

void func_1439(bool bParam0)
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
	func_2057(0f);
	Global_1935436->f_11 = 1;
	if (func_305())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_2058();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1440(var uParam0)
{
	return uParam0->f_865;
}

float func_1441(var uParam0)
{
	return uParam0->f_868;
}

float func_1442(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1443(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1444(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1445(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1210(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2059(iParam4);
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

bool func_1446(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_676(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1447(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1448(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1446(1108822547, 6))
	{
		if (bParam2)
		{
			func_1445(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1449(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1450(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1449(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_676(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_676(iParam0, 1)])->f_10 || iParam1);
}

void func_1450(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_676(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_676(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_676(iParam0, 1)])->f_10 && iParam1));
}

bool func_1451(var uParam0)
{
	if (func_2060(&(uParam0->f_29), 62))
	{
		switch (func_2061())
		{
			case 1:
				if (!func_2060(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_2060(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_2060(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_2060(&(uParam0->f_29), 32))
				{
					if (func_2060(&(uParam0->f_29), 2))
					{
						if (func_698(func_286()) < 5)
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

int func_1452(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_2062(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1147("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1148(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_691(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_2062(iParam1, 512) && func_1704(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_2062(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_2062(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_2062(iParam1, 33554432)))
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
		func_1149(iVar1);
	}
	if (func_691(iVar0))
	{
	}
	else if (!func_2062(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1452(uParam0, iParam1, iParam2);
	}
	else if (func_2062(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1453(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1454(int iParam0)
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

void func_1455(var uParam0)
{
	if (!func_877(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_835(&(uParam0->f_1), 1);
	}
}

void func_1456(var uParam0)
{
	if (!func_877(*uParam0, 1))
	{
		request_ptfx_asset();
		func_835(uParam0, 1);
	}
}

bool func_1457(var uParam0)
{
	if (func_877(uParam0->f_2, 1))
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

char* func_1458(int iParam0)
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

bool func_1459(int iParam0)
{
	return iParam0 != 0;
}

int func_1460(var uParam0, int iParam1)
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

int func_1461(var uParam0, char* sParam1)
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

int func_1462(var uParam0)
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

void func_1463(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1464(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1465(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1466(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1467(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1467(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1467(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1467(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1467(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1467(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1467(uParam0, 5, iParam4))
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
			if (func_1467(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1467(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1467(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1468(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1469(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_218((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1470(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_495(sParam0, 1);
}

bool func_1471(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_847(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1472(var uParam0)
{
	if (func_877(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_3, 1))
	{
		func_849(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_835(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_835(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1473(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_851(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1474(var uParam0, int iParam1)
{
	if (func_877(uParam0->f_1, 2))
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
	if (!func_877(uParam0->f_1, 1))
	{
		func_858(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1475(var uParam0)
{
	if (func_877(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_2, 1))
	{
		func_860(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_835(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1476(var uParam0)
{
	if (func_877(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_3, 1))
	{
		func_862(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_835(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1477(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_864(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1478(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_866(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1479(var uParam0)
{
	if (func_877(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_2, 1))
	{
		func_868(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_835(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1480(var uParam0)
{
	if (func_877(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_877(uParam0->f_1, 1))
	{
		func_870(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_835(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1481(int iParam0)
{
	if (func_514(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1482(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_514(iParam0))
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
			if (func_1023(iParam0, 2, 1))
			{
				func_1021(iParam0, 2, 1);
			}
			if (func_710(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1019(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_520(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
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
						func_2063(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1019(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2064(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1019(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2064(iParam0, 1);
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
			if (!func_1023(iParam0, 44, 0))
			{
				func_1019(iParam0, 44, 0);
			}
			if (func_2065(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_2064(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1021(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1025(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_2066(iParam0, 0, 0, 1);
			}
			func_1021(iParam0, 33, 1);
			func_1021(iParam0, 34, 1);
			func_1021(iParam0, 29, 1);
			if (!func_395(vVar0) && bParam7)
			{
				func_2064(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_2064(iParam0, 4);
			}
			else
			{
				func_2064(iParam0, 5);
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
						func_2063(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_888(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_2064(iParam0, 4);
			}
			else
			{
				func_2064(iParam0, 5);
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
				if (func_2067(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_2068(iParam0, iParam13, 0);
						func_2069(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1023(iParam0, 25, 0))
						{
							func_1021(iParam0, 25, 0);
						}
						func_1019(iParam0, 66, 0);
						func_2064(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_2064(iParam0, 5);
				}
				func_1019(iParam0, 28, 1);
			}
			else
			{
				func_2064(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_2064(iParam0, 6);
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
					func_2070(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2071(Global_1360165[iParam0], 1);
				}
			}
			func_2064(iParam0, 7);
		case 7:
			func_1025(iParam0, bParam9, bParam15, 0);
			func_1016(iParam0, 4, bParam11);
			func_1020(iParam0);
			if (bParam20)
			{
				if (func_2072(Global_1360165[iParam0]))
				{
				}
			}
			func_2073(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_2064(iParam0, 0);
			func_467(iParam0, 16, 1);
			func_1021(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1483(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2074(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_2075(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_2076(cParam0, iParam1, iParam2, func_325(iParam2, 0));
	func_1950(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1950(cParam0, iParam1, 128);
	}
	else
	{
		func_1946(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1484(int iParam0)
{
	if (!func_514(iParam0))
	{
		return;
	}
	iVar0 = func_551(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1485(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1486(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1495(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1487(int iParam0)
{
	iParam0 = func_267(iParam0);
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
	func_2077(&Var0);
	func_2078(iParam0, Var0);
	func_2079(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2080(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2081(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2082(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2083(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2084(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2085(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2086(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2087(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1488(vector3 vParam0)
{
	return func_2088(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1489(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_529(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1490(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_523(iParam0);
	func_523(iParam0);
	func_2089(iParam0, iParam1);
	func_2090(iParam0, iParam1);
	func_2091(iParam0, iParam1);
	iVar1 = func_216(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2092(iVar1);
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
	iVar3 = func_216(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2092(iVar3);
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
	func_269();
}

bool func_1491()
{
	iVar0 = func_1430();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1492()
{
	iVar0 = func_1430();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2093(0);
}

int func_1493(int iParam0)
{
	iParam0 = func_267(iParam0);
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

int func_1494(int iParam0)
{
	iParam0 = func_267(iParam0);
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

int func_1495(int iParam0)
{
	iParam0 = func_267(iParam0);
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

void func_1496(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1766(&iVar0, &iVar1, &iVar2);
	func_1767(iParam0, iVar0);
	func_1768(iParam0, iVar1);
	func_1769(iParam0, iVar2);
	func_2094(iParam0, 1);
	func_2095(iParam0, 1);
}

void func_1497(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1536(iParam0, 1);
}

void func_1498(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_267(iParam0);
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

bool func_1499(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1033(iParam0, 1);
}

struct<2> func_1500(int iParam0)
{
	iParam0 = func_267(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2096(iParam0, &uVar2))
	{
	}
	if (!func_2097(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1501()
{
	if (func_2098(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2098(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2098(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2098(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2098(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2098(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1502(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_2099(iParam0);
	func_2100(iParam0, uParam1);
	func_2101(iParam0);
	func_2102(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2103(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1503(int iParam0)
{
	iParam0 = func_267(iParam0);
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

bool func_1504(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1505(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1506(int iParam0)
{
	return iParam0;
}

bool func_1507(int iParam0)
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

int func_1508(var uParam0)
{
	return *uParam0;
}

bool func_1509(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2104(iParam0) };
	if (func_2054(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_889(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2105(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1510(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1511(var uParam0)
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

bool func_1512(var uParam0)
{
	switch (func_2106(uParam0))
	{
		case 0:
			uParam0->f_24 = func_286();
			iVar4 = func_286();
			func_1215(&iVar4, uParam0->f_6);
			func_1216(&iVar4, 0);
			func_1217(&iVar4, 0);
			if (func_1052(uParam0->f_24, iVar4, 1))
			{
				func_335(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2107(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2108(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2109(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2108(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2109(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_335(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_698(iVar4), func_699(iVar4), func_700(iVar4));
				func_2110(get_clock_hours());
				func_2111(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1513(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1514(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2112(2000);
	Global_16 = 0;
	func_2113();
	set_entity_invincible(Global_35, func_2114(*iParam0, 8));
	if (!func_2114(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2114(*iParam0, 2) || func_2114(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2114(*iParam0, 16))
	{
		func_237(1);
	}
	if (func_2114(*iParam0, 32))
	{
		func_629(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2115(-1623728698, 0);
	}
	func_813(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1515(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1516(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1517(var uParam0)
{
	return *uParam0;
}

bool func_1518(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1519(uParam0, 32768))
	{
		return true;
	}
	if (func_2116(uParam0) >= 3)
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
		func_2117(uParam0);
	}
	if (func_2116(uParam0) < 10)
	{
		if (func_2116(uParam0) == 3)
		{
			func_2118(uParam0, iParam5, bParam6);
		}
		else if (func_2116(uParam0) > 3)
		{
			if (func_1517(uParam0) == 0)
			{
				if (!func_1519(uParam0, 524288))
				{
					func_2119(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2120(uParam0, 4);
					func_2121(uParam0, 10);
					func_2122(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1519(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2123(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1558(0);
			func_2124();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2123(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2125(uParam0, uParam0->f_2074))
				{
					if (func_2126(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2127(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2127(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2128(uParam0);
			}
		}
	}
	bVar0 = func_2129(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1519(uParam0, 268435456) && bVar1) && !func_1519(uParam0, 262144))
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
				func_747(uParam0, 131072);
				func_747(uParam0, 268435456);
			}
		}
		if (func_2130(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2123(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1517(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2116(uParam0) == 3 || func_1519(uParam0, 131072))
	{
		func_2131(uParam0);
		if (!func_1519(uParam0, 262144))
		{
			if ((bVar0 && func_1519(uParam0, 65536)) || func_1519(uParam0, 131072))
			{
				func_747(uParam0, 32768);
				func_2120(uParam0, 4);
				func_2121(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2122(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2116(uParam0) >= 3)
	{
		func_2132(uParam0, iParam5);
		func_2133(uParam0);
		if (!func_2134(uParam0, 1))
		{
			func_2135(uParam0);
		}
		func_2136(uParam0);
	}
	switch (func_2116(uParam0))
	{
		case 0:
			func_2137(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2138(uParam0);
			break;
		case 2:
			func_2139(uParam0);
			break;
		case 3:
			if (func_2140(uParam0))
			{
				func_2141(2);
				func_2127(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_221(&(uParam0->f_2262));
				func_2120(uParam0, 1);
				func_2142();
				func_2121(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1519(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2116(uParam0) == 5)
			{
				if (func_2143(uParam0))
				{
					func_2120(uParam0, 2);
					func_2121(uParam0, 6);
				}
			}
			if (func_2116(uParam0) == 6)
			{
				if (func_2144(uParam0))
				{
					func_2120(uParam0, 3);
					func_2121(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1335(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2145(uParam0, iParam5))
				{
					if (func_2146(uParam0))
					{
						uParam0->f_2075 = func_2147(uParam0);
						func_221(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2120(uParam0, 6);
						func_2121(uParam0, 9);
					}
					else
					{
						func_2120(uParam0, 4);
						func_2121(uParam0, 10);
						func_2122(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2145(uParam0, iParam5))
			{
				func_2122(uParam0, iParam5);
				func_2121(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1519(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1520(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1521(var uParam0, var uParam1)
{
	if (func_1519(uParam1, 32768))
	{
		Var0 = { func_2148(uParam0) };
		func_2012(uParam0, &Var0);
		if (func_1519(uParam1, 131072))
		{
			func_748(uParam0, 268435456);
			if (func_395(uParam0->f_865))
			{
				uParam0->f_865 = { func_2149(uParam1, uParam1->f_2074) };
			}
			if (func_395(uParam0->f_862))
			{
				uParam0->f_862 = { func_2149(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1519(uParam1, 268435456))
		{
			func_1815(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1519(uParam1, 524288))
	{
		func_748(uParam0, 67108864);
		func_1520(uParam1, 524288);
	}
	if (func_2130(uParam1, 128))
	{
		func_748(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2123(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1815(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1522(char[4] cParam0)
{
	if (func_802(&(cParam0->f_7375), 128) || func_802(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_2024(&(cParam0->f_7375));
		func_1443(&(cParam0->f_7375), 128, 1);
		func_1443(&(cParam0->f_7375), 256, 1);
		func_1443(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1523(char[4] cParam0)
{
	func_2150(&(cParam0->f_7375));
}

bool func_1524(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2151(uParam4, &cParam0);
	if (func_802(uParam4, 2) && !func_802(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2152(uParam4) != 1)
	{
		func_2153(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2152(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2154(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2155(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2156(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2157(cParam5);
				}
				func_2155(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_802(uParam4, 2097152))
					{
						func_1954(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_802(uParam4, 134217728)))
				{
				}
				else
				{
					func_2014(uParam4);
				}
				func_221(&(uParam4->f_1));
				func_2155(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2158(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_897(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2155(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2009(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2155(uParam4, 4);
					}
					else if (!func_395(func_2159(uParam4)) && !func_1314(Global_35, func_2159(uParam4), 100f, 1, 1))
					{
						func_1428(1);
						start_player_teleport(get_player_index(), func_2159(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_897(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2155(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_280(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2154(uParam4, &cParam0, cParam5);
						func_2155(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_897(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2155(uParam4, 4);
			}
			break;
		case 3:
			func_391(uParam4);
			if (func_2156(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2157(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_802(uParam4, 512)))
			{
				if (!func_802(uParam4, 1024) && func_2160(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_802(uParam4, 512))
				{
					func_221(&(uParam4->f_1));
					func_748(uParam4, 512);
					func_2155(uParam4, 4);
				}
				else if (func_802(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2153(uParam4);
			}
			if (func_802(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2161(uParam4) - func_2162(uParam4)))) <= 2f)
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
				if (func_2163(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2162(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2164(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2165(uParam4);
				return true;
			}
			else
			{
				if (func_802(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_221(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_748(uParam4, 512);
						func_1443(uParam4, 67108864, 1);
						func_2155(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_802(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2162(uParam4) <= 5000) && func_2162(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_802(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1514(&(uParam4->f_861), 0);
					func_748(uParam4, 536870912);
				}
				if (func_2162(uParam4) >= 5000 && func_2162(uParam4) <= (func_2161(uParam4) - 5000))
				{
					func_2166();
				}
			}
			break;
		case 6:
			if (func_2164(uParam4))
			{
				func_2165(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_802(uParam4, 524288))
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
						func_748(uParam4, 1073741824);
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
					if (func_2167(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2155(uParam4, 3);
					}
					else if (func_897(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2155(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2156(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2155(uParam4, 3);
					}
					else if (func_897(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2155(uParam4, 3);
					}
				}
				if (func_2152(uParam4) == 3)
				{
					if (func_802(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2155(uParam4, 4);
			break;
	}
	return false;
}

void func_1525(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2168()))
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

bool func_1526(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_270(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2169(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_271(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2170(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1527(int iParam0)
{
	MemCopy(&cVar0, {func_270(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1528(int iParam0)
{
	Var0 = { func_1527(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1529(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2171(iVar0));
		iVar0++;
	}
}

int func_1530(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0;
	}
	if (!func_2029(iParam0, -982327190))
	{
		task_stand_still(iParam0, -1);
	}
	_0xff1e339ce40eaaaf(iParam0, 0);
	set_animal_tuning_bool_param(iParam0, 48, true);
	_0xf74e134f40192884(iParam0, 2);
	return 1;
}

void func_1531(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_131))
	{
		Local_14.f_131 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_132[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_132[0] = create_object(474677157, 3315.498f, -597.553f, 42.1093f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_132[0]), 0f, 0f, -135.9994f, 2, true);
		freeze_entity_position(&(Local_14.f_132[0]), bParam1);
	}
	func_2172(&(Local_14.f_132[0]), Local_14);
	func_2172(&(Local_14.f_132[0]), Local_14.f_131);
}

bool func_1532(char[4] cParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(&(Local_226[iParam1])))
	{
		if (func_1944(Local_226[iParam1]->f_8, &(Local_226[iParam1]), iParam2, &(Local_226[iParam1]->f_7)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_446(0))
	{
		return false;
	}
	Var0 = { func_224(4, iParam1) };
	if (iParam2 == iLocal_149 && iParam1 == 0)
	{
		Var0 = { 2890.326f, -197.7096f, 40.898f };
		Var0.f_3 = 11.3412f;
	}
	func_880(cParam0, Local_226[iParam1]->f_8, Local_226[iParam1], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, 0, 0, 0, 1, 0);
	if (does_entity_exist(&(Local_226[iParam1])))
	{
	}
	else
	{
		return false;
	}
	if (!_0x3ab6c7b0bb0df4b1(&(Local_226[iParam1]), -1))
	{
		func_1251(&(Local_226[iParam1]), Var0, 2, 1073741824);
	}
	switch (iParam1)
	{
		case 0:
			func_151(cParam0, &(Local_226[iParam1]), "AbigailRoberts", 0, 0, 0, 0);
			break;
		case 1:
			func_151(cParam0, &(Local_226[iParam1]), "DUTCH", 0, 0, 0, 0);
			break;
		case 2:
			func_151(cParam0, &(Local_226[iParam1]), "MicahBell", 0, 0, 0, 0);
			break;
		case 3:
			func_151(cParam0, &(Local_226[iParam1]), "MARYBETH", 0, 0, 0, 0);
			break;
	}
	func_1946(cParam0, &(Local_226[iParam1]), 128);
	return false;
}

bool func_1533(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (iVar1 == 2 && !bParam0)
		{
		}
		else if (func_1304(Local_380[iVar1]->f_7, 1))
		{
		}
		else
		{
			if ((iVar1 == 1 && bParam1) && !does_entity_exist(Local_380[iVar1]->f_1))
			{
				if (func_446(0))
				{
					return false;
				}
				Local_380[iVar1]->f_1 = func_2173(func_411(2), 3221.59f, -573.79f, 43.12f, -177.933f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (does_entity_exist(Local_380[iVar1]->f_1))
				{
					func_902(0, 1);
					set_ped_config_flag(Local_380[iVar1]->f_1, 186, false);
					func_2174(Local_380[iVar1]->f_1, 0);
					task_stand_still(Local_380[iVar1]->f_1, -1);
					set_blocking_of_non_temporary_events(Local_380[iVar1]->f_1, true);
				}
				else
				{
					return false;
				}
			}
			if (func_446(0))
			{
				return false;
			}
			func_2175(iVar0, 1);
			Local_380[iVar1] = &Local_14.f_11[iVar1];
			if (does_entity_exist(&(Local_380[iVar1])))
			{
				func_845(&(Local_380[iVar1]->f_7), 1);
				func_902(0, 1);
				func_2174(&(Local_380[iVar1]), 0);
				set_ped_config_flag(&(Local_380[iVar1]), 186, false);
				set_ped_config_flag(&(Local_380[iVar1]), 301, true);
				set_ped_config_flag(&(Local_380[iVar1]), 305, true);
				func_1910(&(Local_380[iVar1]), 1);
				set_ambient_voice_name(&(Local_380[iVar1]), "0708_S_M_M_RaCRailGuards_01_WHITE_01");
				remove_all_ped_weapons(&(Local_380[iVar1]), false, true);
				if (iVar1 == 0)
				{
					func_1273(&(Local_380[iVar1]), -506285289, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				else if (iVar1 == 1)
				{
					func_1273(&(Local_380[iVar1]), 1845102363, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				}
				else if (iVar1 == 2)
				{
					_0x9587913b9e772d29(&(Local_380[iVar1]), 0);
					set_ped_config_flag(&(Local_380[iVar1]), 138, true);
					set_ped_config_flag(&(Local_380[iVar1]), 21, true);
					set_ped_drops_weapons_when_dead(&(Local_380[iVar1]), false);
					_0x18ff3110cf47115d(&(Local_380[iVar1]), 7, 0);
					_0x18ff3110cf47115d(&(Local_380[iVar1]), 2, 0);
					_0x18ff3110cf47115d(&(Local_380[iVar1]), 3, 0);
					_0x18ff3110cf47115d(&(Local_380[iVar1]), 1, 0);
				}
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

bool func_1534(char[4] cParam0, int iParam1)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = iVar1;
		bVar0 = (bVar0 && func_1333(cParam0, iVar2, iParam1));
		iVar1++;
	}
	return bVar0;
}

bool func_1535(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		if (func_1304(Local_832[iVar1]->f_7, 1))
		{
		}
		else
		{
			if (!does_entity_exist(Local_832[iVar1]->f_1) && iVar1 != 6)
			{
				if (func_446(0))
				{
					return false;
				}
				Local_832[iVar1]->f_1 = func_2173(func_2176(), func_2177(10, iVar0), func_2178(10, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (does_entity_exist(Local_832[iVar1]->f_1))
				{
					func_902(0, 1);
					_0x9587913b9e772d29(Local_832[iVar1]->f_1, 0);
					func_2174(Local_832[iVar1]->f_1, 0);
					set_ped_config_flag(Local_832[iVar1]->f_1, 186, false);
					if (iVar1 == 4)
					{
						set_entity_visible(Local_832[iVar1]->f_1, false);
					}
				}
				else
				{
					return false;
				}
			}
			if (func_446(0))
			{
				return false;
			}
			func_2179(iVar0, 1);
			Local_832[iVar1] = &Local_14.f_78[iVar1];
			if (does_entity_exist(&(Local_832[iVar1])))
			{
				func_902(0, 1);
				func_845(&(Local_832[iVar1]->f_7), 1);
				remove_all_ped_weapons(&(Local_832[iVar1]), false, true);
				func_1273(&(Local_832[iVar1]), -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				if (!is_entity_dead(Local_832[iVar1]->f_1))
				{
					func_1400(&(Local_832[iVar1]), Local_832[iVar0]->f_1, 0, -1, 1);
				}
				_0x9587913b9e772d29(&(Local_832[iVar1]), 0);
				set_ped_config_flag(&(Local_832[iVar1]), 186, false);
				set_ped_config_flag(&(Local_832[iVar1]), 301, true);
				set_ped_combat_range(&(Local_832[iVar1]), 3);
				set_ped_seeing_range(&(Local_832[iVar1]), 300f);
				set_ped_config_flag(&(Local_832[iVar1]), 388, true);
				func_2174(&(Local_832[iVar1]), 0);
				if (iVar1 == 4)
				{
					func_145(cParam0, &(Local_832[iVar1]), "GNG3_PRISON_GUARD_01", 0);
					set_entity_visible(&(Local_832[iVar1]), false);
				}
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

void func_1536(int iParam0, int iParam1)
{
	iParam0 = func_267(iParam0);
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

void func_1537(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_157)
	{
		if (!does_entity_exist(iVar914))
		{
			if (!does_entity_exist(func_2180(cParam0, -258491284, 0)))
			{
				iLocal_917 = create_vehicle(-258491284, func_451(3, func_132(func_33(cParam0))), func_500(3, func_132(func_33(cParam0))), true, true, false, false);
			}
			else
			{
				iLocal_917 = get_vehicle_index_from_entity_index(func_2180(cParam0, -258491284, 0));
				if (!_is_anim_scene_started(cParam0->f_7375.f_804, false))
				{
					func_1251(iVar914, func_224(3, func_132(func_33(cParam0))), 0, 1073741824);
				}
			}
			set_vehicle_extra(iVar914, 1, true);
			set_vehicle_extra(iVar914, 2, false);
			set_vehicle_extra(iVar914, 5, true);
			set_vehicle_is_considered_by_player(iVar914, false);
			func_425(cParam0, iVar914, "ROWBOATSWAMP02", 0, 0, 0, 0);
		}
	}
}

void func_1538(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (_does_volume_exist(&(iLocal_918[iParam0])))
	{
		return;
	}
	iLocal_918[iParam0] = _create_volume_box(vParam1, vParam4, vParam7);
}

void func_1539(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (_does_volume_exist(&(iLocal_918[iParam0])))
	{
		return;
	}
	iLocal_918[iParam0] = _create_volume_cylinder(vParam1, vParam4, vParam7);
}

void func_1540(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3)
{
	func_2181(&(cParam0->f_7375), cParam2, iParam1, iParam3);
}

bool func_1541(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 1) && does_entity_exist(&(iLocal_311[iParam0])));
}

void func_1542(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
	}
}

int func_1543(char[4] cParam0)
{
	if (func_2182(cParam0, Global_35, "arthur", 0, 1, 1))
	{
		func_1391(&Global_35, &iLocal_917, -1, 1);
	}
	if (func_2182(cParam0, &(Local_226[0]), "AbigailRoberts", 0, 1, 1))
	{
		if (!_is_anim_scene_started(&(uLocal_293[9]), false))
		{
			if (_0x083d497d57b7400f(&(Local_226[0])))
			{
				freeze_entity_position(&(Local_226[0]), false);
			}
			func_440(&(cParam0->f_7375), &(Local_226[0]), 0);
			set_anim_scene_entity(&(uLocal_293[9]), "AbigailRoberts", &(Local_226[0]), 0);
			start_anim_scene(&(uLocal_293[9]));
		}
	}
	if (func_2182(cParam0, &(Local_207[0]), "MrsAdler", 0, 1, 1))
	{
		if (_0x083d497d57b7400f(&(Local_207[0])))
		{
			freeze_entity_position(&(Local_207[0]), false);
		}
		set_anim_scene_entity(&(uLocal_293[0]), "MrsAdler", &(Local_207[0]), 0);
		start_anim_scene(&(uLocal_293[0]));
		_set_anim_scene_playback_list_bool(&(uLocal_293[0]), "pbl_Idles", true);
		set_anim_scene_origin(&(uLocal_293[0]), 0f, 0f, 0.08f, 0f, 0f, 0f, 2);
		attach_anim_scene_to_entity(&(uLocal_293[0]), iVar914, 0);
		attach_entity_to_entity(&(Local_207[0]), iVar914, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
	if (func_942(cParam0) && has_anim_event_fired(Global_35, 1731152595))
	{
		set_random_boats(false);
	}
	_disable_first_person_cam_this_frame_2();
	return 1;
}

int func_1544(char[4] cParam0)
{
	if (func_2182(cParam0, Global_35, 0, 0, 1, 1))
	{
		iVar0 = _0xc6a6789bb405d11c(&(Local_405[0]), 0);
		if (does_entity_exist(iVar0))
		{
			set_entity_coords(iVar0, 3222.9f, -574.23f, 41.79f, false, false, false, true);
			set_entity_rotation(iVar0, 93.65f, 1.36f, 168.62f, 2, false);
		}
		_set_entity_coords_and_heading(&(Local_207[0]), 3239.238f, -589.1492f, 41.88f, -127.03f, false, false, true);
	}
	func_1322(cParam0);
	func_1331();
	func_1332();
	return 1;
}

int func_1545(char[4] cParam0)
{
	if (!func_120(cParam0, 4))
	{
		if (func_2182(cParam0, Global_35, "ARTHUR", 0, 1, 1) && !is_entity_dead(Global_35))
		{
			set_ped_config_flag(Global_35, 26, true);
			set_ped_config_flag(Global_35, 192, true);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
			func_186(0);
			set_player_can_use_cover(player_id(), false);
		}
		if (func_2182(cParam0, &(Local_414[0]), "S_M_M_SKPGUARD_01^1", 0, 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!is_entity_dead(&(Local_414[iVar0])))
				{
					task_aim_gun_at_entity(&(Local_414[iVar0]), Global_35, -1, 1, 1);
				}
				iVar0++;
			}
		}
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_active(cParam0->f_7375.f_804))
	{
		func_1342();
	}
	if ((!func_446(74) && func_942(cParam0)) && IntToFloat(func_2183(cParam0)) > 8f)
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILLIKIN"));
		func_902(74, 1);
	}
	return 1;
}

int func_1546(char[4] cParam0)
{
	func_1535(cParam0);
	_0xe9b3fec825668291(Global_35, func_1387(0, 0), 1073741824);
	if (func_942(cParam0))
	{
		func_1386();
	}
	return 1;
}

int func_1547(char[4] cParam0)
{
	if (_0x1204eb53a5fbc63d())
	{
		animpostfx_stop("KillCamHonorChange");
	}
	if (IntToFloat(func_2183(cParam0)) > 1f)
	{
		func_2184(0);
	}
	return 1;
}

bool func_1548(char[4] cParam0)
{
	return func_1423(cParam0);
}

int func_1549(char[4] cParam0)
{
	func_1291(cParam0, "GNG3_S1_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_1550(char[4] cParam0)
{
	func_1291(cParam0, "GNG3_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	_set_entity_coords_and_heading(&(Local_207[0]), 3239.238f, -589.1492f, 41.88f, -127.03f, false, false, true);
	return 1;
}

int func_1551(char[4] cParam0)
{
	func_902(57, 1);
	if (!func_446(74))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILLIKIN"));
		func_902(74, 1);
	}
	return 1;
}

int func_1552(char[4] cParam0)
{
	func_1291(cParam0, "GNG3_S9_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_1553(char[4] cParam0)
{
	func_2184(0);
	return 1;
}

void func_1554(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { 3222.835f, -520.8367f, 41.76213f };
			fVar3 = 11f;
			iVar4 = 1;
			iVar5 = 12;
			break;
		case 1:
			vVar0 = { 3235.926f, -506.932f, 41.75024f };
			fVar3 = 4f;
			iVar4 = 1;
			iVar5 = 12;
			break;
		case 2:
			vVar0 = { 3258.251f, -597.3484f, 42.06856f };
			fVar3 = 8f;
			iVar4 = 1;
			iVar5 = 12;
			break;
		case 3:
			vVar0 = { 3212.662f, -567.8749f, 41.80667f };
			fVar3 = 15f;
			iVar4 = 1;
			iVar5 = 12;
			break;
	}
	func_2185(uLocal_912[iParam0], vVar0, fVar3, iVar4, iVar5, 0);
}

void func_1555(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	iVar0 = func_965(iParam1);
	if (iVar0 == -1)
	{
		func_2186(iParam0, iParam1, fParam3);
		func_968(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0])
	{
		func_966(iVar0);
		func_2186(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_968(bParam2, fParam3);
		return;
	}
}

void func_1556(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_149)
	{
		func_2187(cParam0);
	}
	else if (iVar0 == iLocal_150)
	{
	}
	else if (iVar0 == iLocal_151)
	{
	}
	else if (iVar0 == iLocal_152)
	{
	}
	else if (iVar0 == iLocal_153)
	{
	}
	else if (iVar0 == iLocal_154)
	{
	}
	else if (iVar0 == iLocal_155)
	{
	}
	else if (iVar0 == iLocal_156)
	{
		if (does_entity_exist(func_261(cParam0)))
		{
			if (is_entity_dead(func_261(cParam0)) || is_ped_fatally_injured(func_261(cParam0)))
			{
				func_1850(cParam0, "GNG3_F_HOD", "", 1, 0);
			}
		}
	}
	else if (iVar0 == iLocal_157)
	{
	}
	else if (iVar0 == iLocal_158)
	{
	}
	if ((iVar0 >= iLocal_149 && iVar0 <= iLocal_155) && func_162(cParam0, iVar0) == 5)
	{
		if (does_entity_exist(iVar914) && is_entity_dead(iVar914))
		{
			func_1850(cParam0, "GNG3_BOAT", "", 1, 0);
		}
	}
}

void func_1557(char[4] cParam0)
{
	switch (iVar956)
	{
		case 0:
			break;
		case 1:
			if (func_897(&uLocal_956) >= fVar957)
			{
				if (func_446(62))
				{
					set_ambient_zone_state("AZ_sisika_penitentiary_alarms", true, true);
					func_221(&uLocal_956);
					func_449(2);
				}
				else if (_0xe368e8422c860ba7("alarm_bell", "GNG3_Sounds", -2))
				{
					_play_sound_from_position("alarm_bell", 3368.1f, -704.6f, 49.8f, "GNG3_Sounds", false, 0, true, 0);
					func_221(&uLocal_956);
					func_449(2);
				}
			}
			break;
		case 2:
			if (func_897(&uLocal_956) >= 30f)
			{
				if (func_446(62))
				{
					set_ambient_zone_state("AZ_sisika_penitentiary_alarms", false, true);
					func_449(3);
				}
				else
				{
					_0x0f2a2175734926d8("alarm_bell", "GNG3_Sounds");
					func_449(3);
				}
			}
			break;
		case 3:
			break;
	}
	if (iVar956 != 0)
	{
		return;
	}
	if (func_33(cParam0) == iLocal_150 || func_33(cParam0) == iLocal_151)
	{
		if ((((is_entity_in_volume(Global_35, &(iLocal_918[11]), true, 0) || is_bullet_in_area(3212.714f, -590.644f, 41.7251f, 50f, true)) || is_bullet_in_area(3219.561f, -577.8934f, 44.1844f, 40f, true)) || is_entity_dead(&(Local_380[1]))) || is_entity_dead(&(Local_380[0])))
		{
			func_1848(1, 4f);
		}
	}
	if (_is_anim_scene_started(&(uLocal_293[8]), false) && _get_anim_scene_progress(&(uLocal_293[8])) > 0.9f)
	{
		func_1848(0, 0f);
	}
}

void func_1558(bool bParam0)
{
	if (bParam0)
	{
		func_2188(4);
	}
	func_2188(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1559(char[4] cParam0)
{
	switch (iVar980)
	{
		case 0:
			if (func_33(cParam0) == iLocal_154)
			{
				func_1345(2);
			}
			else if (func_1962(1))
			{
				func_1345(1);
			}
			break;
		case 1:
			if (func_33(cParam0) == iLocal_154)
			{
				func_1345(2);
			}
			break;
		case 2:
			if (func_1962(0))
			{
				func_1345(3);
			}
			break;
		case 3:
			if (func_33(cParam0) != iLocal_154)
			{
				func_1345(0);
			}
			break;
	}
}

void func_1560(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_218(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2189(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1470(cParam0->f_8269[iVar19]);
				}
				else if (func_2190(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_229(cParam0->f_8269[iVar19]);
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
			if (func_218(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2191(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2192(cParam0->f_8269.f_641[iVar19]);
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
			if (func_218(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2191(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_219(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_218(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2193(&(cParam0->f_8269));
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
			if (func_218(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2189(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2194(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_495(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2190(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2194(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_495(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1561(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_2029(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1562()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1558(0);
	func_2195();
}

void func_1563(var uParam0)
{
	if (func_513(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_513(uParam0, 1024);
	if (func_513(uParam0, 128) || bVar0)
	{
		if (func_513(uParam0, 4096))
		{
			if (!func_513(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_2196(uParam0, 2048);
				return;
			}
		}
		else if (func_513(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_2197(uParam0, 2048);
		}
		if (func_513(uParam0, 512))
		{
			if (func_514(uParam0->f_10))
			{
				if (func_883(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2198(uParam0->f_10))
					{
						func_519(uParam0->f_10, 1);
						func_2199(uParam0->f_10, 0);
					}
				}
				else if ((func_2198(uParam0->f_10) && !bVar0) && !func_513(uParam0, 16384))
				{
					func_519(uParam0->f_10, 0);
					func_2199(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_883(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_883(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_513(uParam0, 512))
	{
		if (func_514(uParam0->f_10))
		{
			if (func_2198(uParam0->f_10))
			{
				func_519(uParam0->f_10, 0);
				func_2199(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1564(int iParam0)
{
	return (iParam0 < func_396() && iParam0 >= 0);
}

int func_1565(int iParam0)
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

bool func_1566(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1567(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1564(iVar0))
	{
		return false;
	}
	iVar1 = func_1565(iParam2);
	if (!func_1566(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1568(struct<2> Param0, int iParam2)
{
	if (!func_256(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1569(char[4] cParam0)
{
	func_2200(cParam0);
	if (func_280(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_280(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_891(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2201(cParam0);
	func_2202(cParam0, 67108864);
	func_2202(cParam0, 8192);
	func_893(cParam0, 4);
	func_893(cParam0, 512);
	func_893(cParam0, 65536);
	func_893(cParam0, 1024);
	func_893(cParam0, 262144);
	func_893(cParam0, 16777216);
	func_893(cParam0, 64);
	func_266(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2203(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_266(cParam0, 4194304);
	func_266(cParam0, 8388608);
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
	func_552(&(cParam0->f_13106));
	func_221(&(cParam0->f_13112));
	func_2204(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_237(1);
	}
	if (func_932(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_932(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_932(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2205(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_231(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2206(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2207(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2208(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1570(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1571(char[4] cParam0)
{
	func_2157(cParam0);
}

void func_1572(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1464(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1573(char[4] cParam0)
{
	func_2209(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1574(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1575(char[4] cParam0)
{
	return true;
}

void func_1576(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1577(var uParam0, int iParam1)
{
	iVar0 = func_2210(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1578(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2211(cParam0, uParam1))
	{
		return 0;
	}
	if (func_514(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1563(uParam1);
	func_2212(uParam1);
	if (!bParam2)
	{
		func_2213(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2214(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2215(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2216(cParam0, uParam1);
	func_2217(uParam1);
	return 0;
}

bool func_1579(char[4] cParam0)
{
	return true;
}

int func_1580(int iParam0)
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
						*iParam0 = func_2218(vVar0.z);
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

void func_1581(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1850(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_1582(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_832((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2221((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_832((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2219(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2220(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2222((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_832((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2223((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_832((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2224((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_832(uParam4->f_1, iParam12))
	{
		func_2219(&(uParam4->f_1), iParam12);
		if (func_2220(&(uParam4->f_1), iParam13))
		{
			func_2225(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_832((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2219(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2220(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2226((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_832((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2219(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2220(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2227((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_832((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2219(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2220(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2228((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_832((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2229((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_832((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2230((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_832((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2219(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2220(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2231((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_832((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2219(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2220(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2232((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1583(char[4] cParam0)
{
	iVar0 = func_2233(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1584(bool bParam0, bool bParam1)
{
	if (func_2234(255) == 4)
	{
		return;
	}
	if (func_395(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_291(0);
	}
	else
	{
		if (bParam1)
		{
			func_2235(0, 0, 0, 1);
		}
		func_292(0);
		func_2236(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2237(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2238(Global_1109400->f_389, 42);
	func_2239(Global_1109400->f_428, 42);
}

bool func_1585(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1586(bool bParam0, bool bParam1, bool bParam2)
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

var func_1587(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1588(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2240(sParam1));
}

char* func_1589(int iParam0)
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

var func_1590(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1591(int iParam0, bool bParam1, float fParam2)
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
	iVar0 = func_2241(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_2242(iVar1, 1);
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
	return func_2243(iParam0, bParam1, fParam2);
}

int func_1592(int iParam0)
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

int func_1593(int iParam0)
{
	if (func_460(iParam0))
	{
		return 0;
	}
	if (func_457(iParam0, 0))
	{
		func_979(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_979(iParam0);
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

bool func_1594(int iParam0)
{
	return func_297(iParam0) == 0;
}

void func_1595(int iParam0, bool bParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	if (!func_1594(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_194(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_194(iParam0)))
		{
			_0xca41e86545413b5b(func_196(iParam0), func_273(iParam0), func_316(iParam0), func_194(iParam0), Global_36);
		}
	}
	func_203(iParam0, 1);
	bParam1 = bParam1;
}

void func_1596(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_476(Global_1898330[iParam0]);
		func_2244((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_1597(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	if (!func_193(iParam0))
	{
		return;
	}
	func_203(iParam0, 2);
}

bool func_1598(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_698(func_286());
	if (func_2245(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2245(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_1599(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_1600(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1601()
{
	return Global_40.f_4283.f_1;
}

bool func_1602(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_198(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_2246(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_2247(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_467(iVar0, 512, 1);
			}
			else
			{
				func_465(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_1603(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_2248((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_1604(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1605(int iParam0, bool bParam1)
{
	if (!func_274(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_2249(&((*Global_1347702)[iParam0]->f_14));
		func_981(&((*Global_1347702)[iParam0]->f_13), 16);
		func_2250(iParam0);
		if ((!func_2251(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_981(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_1823(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_2252(iParam0, 16384);
			func_2253(iParam0, 1, func_985(iParam0));
		}
	}
}

void func_1606(int iParam0)
{
	if (func_2254(iParam0, &iVar1, &iVar0))
	{
		if (func_2255(iVar1, iVar0, 1))
		{
			func_2256(iVar1, iVar0);
		}
	}
}

bool func_1607(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_362((*Global_1347702)[iParam0]->f_15) != 0)
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

bool func_1608(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_1594((*Global_1835011)[iParam0]->f_1);
}

bool func_1609(int iParam0, bool bParam1, bool bParam2)
{
	if (func_952(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_1610(int iParam0)
{
	return func_984(iParam0);
}

Vector3 func_1611(int iParam0)
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

int func_1612(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_82(32768))
	{
		return 0;
	}
	iVar0 = func_20();
	if ((bParam4 && func_2060(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_2060(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_215())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_2257(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_328((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_2258()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_328((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_2258()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_328((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_1617(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_2259((*Global_1835011)[iParam0], 2))
			{
				if (func_814(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_815(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_392(iParam0));
				}
			}
			else if (func_814(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_815(iParam0), func_2260(iParam0), func_2261(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_2262(iParam0), func_2263(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_814(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_1611(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_815(iParam0));
				bVar2 = true;
			}
		}
		else if (func_1610(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_392(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_392(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_392(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_814(iParam0))
			{
				func_989(iParam2, 4194304);
			}
			else
			{
				func_1622(iParam2, 4194304);
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
		if (!func_2060(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_1610(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_2264(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_1610(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_2259((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_2265(Global_40.f_4283);
	if (func_249(iVar4) && func_2266((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_2267(iVar4);
	}
	if (func_2268(iParam0, bVar5, iVar4))
	{
		func_2269((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_1228(579))
	{
		func_2270(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_2060(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_2060(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_2258()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_2271(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_1617(iParam0, iVar0) || (fParam1 >= (func_2272(iParam0) * func_2272(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_715(&cVar7, 10000, 0, 0, 0, 1);
			func_2264(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

void func_1613(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_1614(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_1615(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_1614(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_2247(iVar1, &iVar0))
		{
			iVar2 = func_551(func_879(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_1023(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_1023(iVar1, 47, 1))
				{
					return true;
				}
				if (!_0x5102307ce88798eb(iVar2))
				{
					request_ped_visibility_tracking(iVar2);
				}
				if (is_tracked_ped_visible(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

void func_1616(int iParam0)
{
	iVar0 = func_1614(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_2247(iVar1, &iVar0))
		{
			iVar2 = func_551(func_879(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else if (_0x5102307ce88798eb(iVar2))
			{
				_0x3088634cf8c819cf(iVar2);
			}
		}
		iVar1++;
	}
}

bool func_1617(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_814(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

void func_1618(int iParam0)
{
	func_113(1);
}

bool func_1619(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

bool func_1620(int iParam0, int iParam1)
{
	return (func_988(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_1621(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_192((*Global_1835011)[iParam0]->f_1);
}

void func_1622(int iParam0, int iParam1)
{
	if (!func_988(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

float func_1623(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1624(int iParam0)
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

int func_1625(int iParam0)
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

void func_1626(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1627(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2273(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1628(int iParam0)
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

void func_1629()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_394())
	{
		return;
	}
	func_2274(&(Global_40.f_40));
}

void func_1630()
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

bool func_1631()
{
	return !func_395(Global_1310720->f_1);
}

int func_1632()
{
	return Global_40.f_4283.f_4;
}

void func_1633(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2275())
	{
		fVar0 = func_1038(vParam0, Global_40.f_6);
	}
	if (func_2276(33554432))
	{
		if (!func_2277(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1038(vParam0, Global_40.f_2);
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

float func_1634(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1635()
{
	if (!func_199(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2278(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2278(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2278(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2278(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2278(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2278(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2278(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2278(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2278(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2279(10f, to_float(func_2278(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2279(5f, to_float(func_2278(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2279(25f, to_float(func_2280(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2279(1f, to_float(func_2280(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2279(6f, to_float(func_2280(64058978)))));
	fVar0 = (fVar0 + (3f * func_2279(1f, to_float(func_2280(795577402)))));
	iVar1 = func_2281();
	fVar0 = (fVar0 + (0.1111111f * func_2279(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2279(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2279(to_float(20), to_float(func_2282()))));
	if (func_460(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_460(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_460(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_460(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_460(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1623(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2279(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2279(5f, to_float(func_2280(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2279(5f, to_float(func_2278(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1706(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2283(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2279((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2279(1f, to_float(func_2284(-2116919750)))));
	fVar5 = to_float(func_2285());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2279(5f, to_float(func_2280(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2279(1f, to_float(func_2280(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2279(1f, to_float(func_2280(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2279(1f, to_float(func_2280(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2279(1f, to_float(func_2278(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2279(1f, to_float(func_2278(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2286(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_191(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_191(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_195(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_982(Global_1898330[iVar61]);
				}
				else
				{
					func_1596(iVar61, 0);
					if (func_196(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_194(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_194((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_194(&Global_1898437), &iVar9);
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

void func_1636(var uParam0, int iParam1, bool bParam2)
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

int func_1637(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1638(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2287(iParam0);
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

void func_1639(int iParam0)
{
	if (func_514(iParam0))
	{
		if (does_entity_exist(func_551(iParam0)))
		{
			func_467(iParam0, 67108864, 1);
			func_1021(iParam0, 19, 1);
		}
	}
}

float func_1640(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1641(int iParam0)
{
	iVar0 = func_551(iParam0);
	iVar1 = func_1022(iParam0, 0);
	func_2288(iParam0, iVar0);
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

bool func_1642(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1643(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1644(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1017(iParam0))
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

int func_1645(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1017(iParam0))
	{
		return 0;
	}
	iVar0 = func_1028(iParam0);
	if (func_163(iVar0, 0))
	{
		if (func_163(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1642(iParam0)) || func_1643(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2289(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2290(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2291(iParam0);
					_0x7b204f88f6c3d287(func_2292(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2292(iParam0, 0));
					func_2293(iParam0);
				}
			}
			else
			{
				if (func_710(iParam0, 32768, 1))
				{
					iVar2 = func_2292(iParam0, 0);
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
		if (func_163((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_710(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2291(iParam0);
				_0x7b204f88f6c3d287(func_2292(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2292(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2291(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2294(iParam0, 0);
	return 1;
}

int func_1646(int iParam0)
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

char* func_1647(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_248(37, iParam0))
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
	if (func_248(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1648(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1173(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1649(int iParam0)
{
	iParam0 = func_267(iParam0);
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

float func_1650(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1651(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1652(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1653(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1654(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1655(int iParam0, int iParam1)
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
}