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
	iLocal_23 = 25;
	iLocal_473 = 1051047356;
	iLocal_474 = -1056699092;
	iLocal_475 = -1230221375;
	iLocal_476 = -1820002752;
	iLocal_477 = -272634447;
	iLocal_478 = -310853585;
	iLocal_479 = 1442933459;
	iLocal_480 = -1038436471;
	iLocal_481 = -397513868;
	iLocal_489 = -1;
	iLocal_490 = -1;
	vLocal_507 = { 2255.546f, -875.3812f, 40.68118f };
	vLocal_510 = { 2455.464f, -578.2695f, 40.96408f };
	vLocal_516 = { 2496.476f, -1446.824f, 45.32647f };
	vLocal_519 = { 2493.226f, -1450.587f, 45.1101f };
	sLocal_527 = "AMB_REST_SIT@PROP_HUMAN_SEAT_CHAIR@SAD@FEMALE_B@base";
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1402, 1073741824);
		func_2(&uLocal_1402, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1402);
	func_5(&uLocal_1402);
	while (!func_6(&uLocal_1402, -2147483648))
	{
		func_7(&uLocal_1402);
		wait(0);
	}
	while (!func_2(&uLocal_1402, 0))
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
	if (Global_1394141->f_1328)
	{
		func_163(&(Global_1394141->f_1326), -2147483648);
	}
	if (has_vehicle_asset_loaded(get_entity_model(iVar1199)))
	{
		remove_vehicle_asset(get_entity_model(iVar1199));
	}
	_0x0751d461f06e41ce(player_id(), 10, 0, 0);
	if (get_ped_config_flag(Global_35, 299, true))
	{
		set_ped_config_flag(Global_35, 299, false);
	}
	if (get_ped_config_flag(Global_35, 364, true))
	{
		set_ped_config_flag(Global_35, 364, false);
	}
	_0x949b2f9ed2917f5d(Global_35, 0);
	func_164();
	func_165(9);
	func_166(9, 0, 0);
	func_167(44, 1);
	_0xbbadfb5e5e5766fb(get_player_index(), 1f);
	remove_model_hide(2627.006f, -1379.284f, 46.15857f, 5f, -1878692498, 0);
	func_168(111756353, 1, 1, -142743235, 0);
	clear_weather_type_persist();
	func_169(1388233219);
	func_169(1234907076);
	func_170(-596723840);
	func_170(-1762770596);
	func_170(-2084311522);
	func_171(&(Local_709[0]->f_1));
	func_171(&iLocal_1213);
	func_171(&iLocal_1209);
	func_171(&iLocal_1211);
	func_171(&iLocal_1212);
	func_171(&iLocal_1214);
	func_171(&iLocal_1210);
	func_171(&(Local_709[1]->f_1));
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_172(Local_709[iVar0]);
		iVar0++;
	}
	func_172(Local_530[0]);
	func_172(iLocal_1204[0]);
	func_172(iLocal_1204[1]);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_172(Local_980[iVar0]);
		iVar0++;
	}
	if (does_entity_exist(iVar1214))
	{
		delete_vehicle(&iLocal_1217);
	}
	if (does_entity_exist(iVar1218))
	{
		delete_object(&iLocal_1221);
	}
	if (does_entity_exist(iVar1219))
	{
		delete_object(&uLocal_1222);
	}
	if (func_10(iVar1317))
	{
		func_11(&uLocal_1320, 1, 1);
	}
	if (func_10(iVar1316))
	{
		func_11(&iLocal_1319, 1, 1);
	}
	if (does_entity_exist(iVar1213))
	{
		delete_vehicle(&iLocal_1216);
	}
	if (_0x91a5f9cbebb9d936(uVar1284))
	{
		remove_scenario_blocking_area(uVar1284, false);
	}
	func_173(&uLocal_1288, &(iLocal_1223[4]), 0);
	func_173(&uLocal_1289, &(iLocal_1223[24]), 0);
	func_173(&uLocal_1290, &(iLocal_1223[5]), 0);
	func_173(&uLocal_1291, &(iLocal_1223[0]), 0);
	func_173(&uLocal_1292, &(iLocal_1223[42]), 0);
	func_173(&uLocal_1293, &(iLocal_1223[43]), 0);
	func_173(&uLocal_1294, &(iLocal_1223[9]), 0);
	func_173(&uLocal_1295, &(iLocal_1223[19]), 0);
	func_173(&uLocal_1296, &(iLocal_1223[20]), 0);
	func_173(&uLocal_1297, &(iLocal_1223[37]), 0);
	func_173(&uLocal_1298, &(iLocal_1223[22]), 0);
	func_173(&uLocal_1298, &(iLocal_1223[23]), 0);
	_0xd17672447692478e(&(iLocal_1223[0]), 0);
	_0xd17672447692478e(&(iLocal_1223[5]), 0);
	if (_does_volume_exist(&(iLocal_1223[15])))
	{
		_0xd17672447692478e(&(iLocal_1223[15]), 0);
	}
	_0xbc90bdf4e5228ea1();
	if (_does_volume_exist(&(iLocal_1223[35])))
	{
		func_173(&uLocal_1300, &(iLocal_1223[35]), 0);
		_0xe5ef9de716ff737e(&(iLocal_1223[35]), 0, 1);
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[43])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[43]));
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[0])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[0]));
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[5])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[5]));
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[23])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[23]));
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[6])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[6]));
	}
	if (_0xde0ea444735c1368(&(iLocal_1223[18])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[18]));
	}
	func_174(0, 43);
	func_175();
	func_176(285);
	func_176(286);
	func_176(933);
	func_176(934);
	func_177(285, 32);
	func_177(286, 32);
	func_177(933, 32);
	func_177(934, 32);
	_set_scenario_group_enabled_hash(369265386, true);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_709[iVar0]->f_16 != 0)
		{
			destroy_tracked_point(Local_709[iVar0]->f_16);
		}
		iVar0++;
	}
	if (iVar482 != 0)
	{
		destroy_tracked_point(iVar482);
	}
	if (iVar483 != 0)
	{
		destroy_tracked_point(iVar483);
	}
	if (iVar484 != 0)
	{
		destroy_tracked_point(iVar484);
	}
	func_178(&uLocal_1323);
	_0x9cf1836c03fb67a2(&uLocal_1381, 1);
	_0x9cf1836c03fb67a2(&uLocal_1382, 1);
	_0xde7b2b4144906cdf(2017973493, &(Local_709[1]));
	_0x660a8f876df1d4f8(9);
	_0x43037abfe214a851();
	_0xc67a4910425f11f1(get_player_index(), "MRY3_GRIEF");
	set_random_trains(true);
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
	iVar0 = func_179(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_180(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_181(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_182(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_183(iParam0) && !func_184(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_185(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_183(iParam0))
	{
		iParam2 = -1;
	}
	if (func_186(iParam0) == 3 || (func_186(iParam0) == 1 && _0x01f4d242765c6b24(func_185(iParam0))))
	{
		func_188(func_187(iParam0), func_185(iParam0), iParam2);
		if ((!func_182(Global_1572864->f_8) && !func_189(0, 1, 0)) && !func_190(&Global_1935630, 32768))
		{
			iVar0 = func_191(iParam0);
			if (iVar0 != -1)
			{
				func_192(0);
			}
			else if (func_187(iParam0) == 8)
			{
				iVar0 = func_193();
				if (iVar0 != -1)
				{
					func_192(0);
				}
			}
		}
	}
	func_194(iParam0, 0);
	if (func_195(0) == iParam0)
	{
		func_40(1);
		func_196(0);
		func_197(1);
	}
	func_198(iParam0, 1);
	func_199(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_200(0);
	func_201(0);
	func_64(0);
	func_65(0);
	func_202(0);
	func_203(1f);
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
		func_204();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_205())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_206())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_185(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_207(0);
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
		func_208(iVar0, iParam0);
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
		if (func_209((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_210((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_210((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_210((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(float fParam0)
{
	return func_211(*fParam0, 1);
}

void func_27(float fParam0, bool bParam1)
{
	if (bParam1 || !func_26(fParam0))
	{
		func_212(fParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_213(&(cParam0->f_13118)) >= 4000)
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
	func_214(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_182(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_16)
	{
		func_216(&Var0, func_215(0, 2));
	}
	else if (iParam0 == iLocal_17)
	{
		func_216(&Var0, func_215(0, 0));
	}
	else if (iParam0 == iLocal_18)
	{
		func_216(&Var0, func_215(0, 5));
	}
	else if (iParam0 == iLocal_19)
	{
		func_216(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_20)
	{
		func_216(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_21)
	{
		func_216(&Var0, func_215(5, 2));
	}
	else if (iParam0 == iLocal_22)
	{
		func_216(&Var0, func_215(0, 3));
	}
	else if (iParam0 == iLocal_23)
	{
		func_216(&Var0, func_215(3, 5));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_217(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_200(0);
	func_218(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_209((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_219((*uParam0)[iVar0]);
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
			func_220(iVar0, 4096);
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
		func_221(Global_1935630, 4194304);
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
	func_222();
	func_223();
	func_224();
	func_225();
}

void func_43()
{
	if (func_226())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_227(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_228();
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
	func_229(1, iParam0, iParam1);
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
	return (func_230() || func_54());
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
	func_231(uParam0);
	func_232(uParam0, 0);
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
		func_233(iVar0);
		iVar0++;
	}
	func_234();
	func_235();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_236())
	{
		if (func_237(255))
		{
			if (!func_238(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_239(Global_1894899->f_2) && func_240(Global_1894899->f_2))
		{
			func_241(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_242(16);
			}
		}
		else if (func_239(Global_1894899->f_2) && !func_243(Global_1894899->f_2, 2))
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
		func_244(16);
		func_245();
		if (bVar0)
		{
			func_244(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_246(cParam0->f_5423[iVar0]))
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
	if (func_247(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_248(cParam0->f_5421))
		{
			iVar1 = func_249(cParam0->f_5421, iVar0);
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
		if (func_250(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_251(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_252(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_253(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_254(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_255(7);
		}
		else
		{
			func_256(iVar0, 0);
		}
		func_257(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_259(iParam0, 32);
	func_260();
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
	Var0 = { func_261(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_262(iParam0) };
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
		func_202(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_202(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_263(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_209((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_210((*uParam1)[iVar0], 1);
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
	iVar0 = func_187(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_264(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_265(iVar1))
			{
				if (func_266(iVar1, 4))
				{
					func_267(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_268(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_264(iParam0);
		if (iVar3 == 59)
		{
			func_268(1);
		}
		else if (iVar3 == 61)
		{
			func_268(0);
		}
		else if (iVar3 == 83)
		{
			func_268(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_265(iVar0))
		{
			if (func_266(iVar0, 4))
			{
				if (func_266(iVar0, 16))
				{
					func_269(iVar0, 1);
				}
				if (func_266(iVar0, 8))
				{
					func_270(iVar0, 1);
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
		if (func_271(cParam0) == 0 && iVar0 == 0)
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
		func_272(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_273(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_274(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_275(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_239(iParam0))
	{
		return;
	}
	bVar0 = func_243(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_276(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_278(iParam0, func_277());
			func_279(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_280(iParam0, 67108864);
		func_278(iParam0, -15);
	}
	func_281(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_282(11);
	}
	else
	{
		func_283(11);
	}
}

void func_80(int iParam0)
{
	if (func_284(iParam0, 0))
	{
		func_285(262144, 5, 0, 1);
		func_286(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_287(101, 7, 1f, 0, 1);
			func_287(89, 7, 1f, 0, 1);
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
	if (!func_182(iParam0))
	{
		return;
	}
	if (func_288(iParam0) == 4)
	{
		func_289(iParam0, func_277());
		if (!func_186(iParam0) == 5 && !func_186(iParam0) == 6)
		{
			if (bParam3)
			{
				func_194(iParam0, 6);
			}
			else
			{
				func_194(iParam0, 5);
			}
			func_199(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_187(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_290(0, 2);
		if (!bVar1 && bParam1)
		{
			func_291();
		}
	}
	else
	{
		func_196(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_292(iParam0);
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
				if (bParam1 && func_186(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_264(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_264(iParam0)]->f_8), true);
						}
					}
					else if ((func_264(iParam0) != 95 && func_264(iParam0) != 82) && !func_293((*Global_1347702)[func_264(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_264(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_264(iParam0)]->f_8), true);
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
		func_295(func_264(iParam0), iVar6, func_294());
	}
	else if (iVar0 == 8)
	{
		func_297(func_264(iParam0), iVar6, func_294(), func_296());
	}
	if (!func_186(iParam0) == 5 && !func_186(iParam0) == 6)
	{
		iVar9 = func_298(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_299(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_300(func_264(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_301((iVar10 - 20), 0, iVar10);
					iVar11 = func_301((iVar11 - 10), 0, iVar11);
				}
				func_302(1);
				func_303(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_303(45, 0, 1);
				break;
			case 8:
				iVar10 = func_304(func_264(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_301((iVar10 - 20), 0, iVar10);
					iVar11 = func_301((iVar11 - 10), 0, iVar11);
				}
				func_303(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_305(func_264(iParam0)))
				{
					func_306(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_303(120, 0, 1);
				break;
			case 2:
				func_303(120, 0, 1);
				break;
			case 6:
				func_303(func_308(func_307(iParam0)), 0, 1);
				break;
			case 5:
				func_303(120, 0, 1);
				break;
		}
	}
	func_198(iParam0, 1);
	func_289(iParam0, func_277());
	func_199(iParam0);
	if ((!func_186(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_191(iParam0);
		if (iVar12 != -1)
		{
			func_192(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_193();
			if (iVar12 != -1)
			{
				func_192(0);
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
				switch (func_264(iParam0))
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
				if (func_265(func_264(iParam0)) && func_293((*Global_1347702)[func_264(iParam0)]->f_12, 4))
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
				if (func_264(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_264(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_186(iParam0) == 5 && !func_186(iParam0) == 6)
	{
		if (bParam3)
		{
			func_194(iParam0, 6);
		}
		else
		{
			func_194(iParam0, 5);
		}
		func_199(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_264(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_309();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_310(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1267972061);
						func_310(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1619534881);
						func_310(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-755457379);
						func_310(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1015404643);
						func_310(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1724192342);
						func_310(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1310680212);
						func_310(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-566881549);
						func_310(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1753730528);
						func_310(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(147796381);
						func_310(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-378547623);
						func_310(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(829545206);
						func_310(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(891318243);
						func_310(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312();
						func_313(967523420);
						func_314();
						func_315();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_316(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_310(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_317(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_317(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_318(304805134, 1, 1);
						if (!func_319((*Global_1347702)[21]->f_15, 1))
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
						func_320();
						break;
					case 26:
						func_321();
						break;
					case 17:
						func_322(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_323())
						{
							func_324(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_325(-514575035, -1))
						{
							iVar15 = func_277();
							func_326(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_327(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_323())
						{
							func_324(1529685685);
						}
						break;
					case 34:
						if (func_323())
						{
							func_324(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_328();
						break;
					case 37:
						func_329();
						if (func_330())
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
						func_331();
						break;
					case 43:
						func_332();
						break;
					case 44:
						if (!func_319((*Global_1347702)[82]->f_15, 1))
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
						if (!func_319((*Global_1347702)[83]->f_15, 1))
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
						func_333();
						break;
					case 59:
						func_334();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_335();
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
						func_336();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_317(451, 0);
						}
						if (!func_337(-1992824800))
						{
							if (func_337(1520110311))
							{
								iVar16 = func_277();
								func_326(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_327(1937177603, iVar16, 1);
							}
						}
						if (func_338(4))
						{
							if (!func_339(684296857, 1, 0))
							{
								iVar17 = func_277();
								func_326(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_327(-1439688706, iVar17, 1);
							}
						}
						func_310(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_340(89200);
						func_340(2300);
						func_340(2300);
						break;
					case 68:
						func_341();
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
						func_342();
						func_340(-139100);
						break;
					case 69:
						if (func_319((*Global_1347702)[9]->f_15, 1))
						{
							func_340(-6000);
						}
						break;
					case 70:
						func_340(23400);
						func_340(1900);
						func_340(-15000);
						break;
					case 71:
						func_340(-5500);
						break;
				}
				break;
			case 8:
				switch (func_264(iParam0))
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
						func_343();
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
						func_344();
						break;
					case 66:
						func_345();
						func_346();
						break;
					case 67:
						if (!func_347(6))
						{
							func_165(6);
						}
						if (!func_347(3))
						{
							func_165(3);
						}
						if (func_323())
						{
							func_324(1534638301);
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
						if (func_319((*Global_1835011)[69]->f_1, 1))
						{
							func_348(0);
							func_340(40500);
						}
						else
						{
							func_348(0);
							func_340(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_264(iParam0))
				{
					case 0:
						switch (func_307(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_349(iParam0);
		func_350();
		switch (iVar0)
		{
			case 1:
				switch (func_264(iParam0))
				{
					case 4:
						func_351(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_351(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_351(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_351(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_351(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_351(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_351(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_352(iParam0);
						func_351(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_351(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_351(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_339(-2046502963, 1, 0))
						{
							func_310(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_351(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_351(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_351(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_352(iParam0) == 0)
						{
							func_351(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_351(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_293((*Global_1347702)[func_264(iParam0)]->f_12, 536870912))
				{
					func_353(11, 1);
				}
				switch (func_264(iParam0))
				{
					case 109:
						func_351(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_353(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_351(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_351(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_351(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_351(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_354(0, 10, 11, 2116153146))
				{
					func_351(iParam0, func_352(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_354(0, 7, 11, -379687487))
				{
					func_351(iParam0, func_355(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_354(0, 8, 11, -1386089015))
				{
					func_351(iParam0, func_355(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_354(0, 11, 11, -1952009645))
				{
					func_351(iParam0, func_355(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_354(0, 12, 11, 2065895756))
				{
					func_351(iParam0, func_355(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_186(iParam0) == 0)
			{
				if (func_185(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_185(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_188(func_187(iParam0), func_185(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_264(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_357(func_356(Global_1879514->f_1));
						if (iVar0 == 8 && func_264(iParam0) == 58)
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
						if (func_265(func_264(iParam0)) && func_293((*Global_1347702)[func_264(iParam0)]->f_12, 1))
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
			func_358(bParam2, iVar20);
		}
	}
	func_197(1);
	if ((bVar13 || func_129()) && (func_187(iParam0) == 1 || func_187(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_185(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_188(func_187(iParam0), func_185(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_187(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_354(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_359();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_184(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_183(iParam0))
	{
		if (!func_186(iParam0) == 5 && !func_186(iParam0) == 6)
		{
			if (bParam1)
			{
				func_194(iParam0, 6);
			}
			else
			{
				func_194(iParam0, 5);
			}
			func_199(iParam0);
		}
	}
	switch (func_187(iParam0))
	{
		case 1:
			switch (func_264(iParam0))
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
			switch (func_264(iParam0))
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
	vVar2 = { func_360((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_361(vVar2, uVar1, uVar0, 0);
	func_362(vVar2);
	Global_40.f_9.f_15 = func_363(vVar2, 0);
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
	func_364();
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
	func_365(Var10, 0);
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
	if (!func_182(iParam0))
	{
		return;
	}
	if (iParam0 != func_195(0))
	{
		return;
	}
	if (func_185(iParam0) == 0)
	{
	}
	iVar0 = func_187(iParam0);
	if (func_186(iParam0) == 3)
	{
		if (func_185(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_185(iParam0)))
		{
			if (func_187(iParam0) != 1 && func_187(iParam0) != 8)
			{
				func_188(func_187(iParam0), func_185(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_199(iParam0);
	func_40(1);
	func_196(0);
	func_194(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_302(1);
			func_303(15, 0, 1);
			break;
		case 4:
			func_303(10, 0, 1);
			break;
		case 8:
			func_303(10, 0, 1);
			break;
		case 9:
			func_303(10, 0, 1);
			break;
		case 2:
			func_303(10, 0, 1);
			break;
		case 6:
			func_303(10, 0, 1);
			break;
		case 5:
			func_303(10, 0, 1);
			break;
	}
	func_197(1);
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
	if (func_366(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_367(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_367(&(Global_1347343->f_11), 16384);
	}
	if (func_368() >= 2)
	{
		if (!func_366(Global_1347343->f_11, 16384))
		{
			func_367(&(Global_1347343->f_11), 8);
		}
		func_203(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_221(Global_1935630, 2048);
	func_369(bParam5);
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
			func_370(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_190(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_371(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_372(&(cParam0->f_7375));
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
	return func_373() != -1;
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
	func_374(cParam0);
	cParam0->f_634[0] = 57781;
	cParam0->f_634[1] = 57781;
	cParam0->f_637 = 0;
	func_376(cParam0, *uParam1);
	func_377(cParam0);
}

void func_109(char[4] cParam0)
{
	if (!func_378(65536))
	{
		if (does_entity_exist(func_207(7)))
		{
			func_379(func_207(7), func_215(12, 0), 2, 1073741824);
			func_380(65536);
		}
	}
	iVar0 = 0;
	while (iVar0 < iVar1201)
	{
		if (func_382(func_381(cParam0, -1056699092, 0), 0))
		{
			iLocal_1204[iVar0] = func_381(cParam0, -1056699092, 1);
		}
		iVar0++;
	}
	if (func_271(cParam0) == 0)
	{
		iLocal_1220 = get_last_driven_vehicle();
		iLocal_1208 = _get_last_mount(Global_35);
		if (does_entity_exist(iVar1205))
		{
			set_entity_coords(iVar1205, 2683.154f, -1260.354f, 50.3981f, true, false, true, true);
			set_entity_heading(iVar1205, 295.8101f);
		}
		if (does_entity_exist(iVar1217))
		{
			set_entity_coords(iVar1217, 2683.154f, -1260.354f, 50.3981f, true, false, true, true);
			set_entity_heading(iVar1217, 295.8101f);
		}
		if (func_33(cParam0) == 0)
		{
			if (!_does_volume_exist(&(iLocal_1223[0])))
			{
				iLocal_1223[0] = _create_volume_aggregate_with_custom_name("MARY3_VOL_INT_CLEAR_AREA");
				_0x39816f6f94f385ad(&(iLocal_1223[0]), 2713.793f, -1242.869f, 53.02395f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				_0x39816f6f94f385ad(&(iLocal_1223[0]), 2674.628f, -1265.024f, 55.92817f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				_0xc1799fafd2fdf52b(&(iLocal_1223[0]), 0, 0, 0);
				uLocal_1291 = func_383(&(iLocal_1223[0]), 0, 0, 10208);
				func_384(&(iLocal_1223[0]), 0, 0, 1, 1, 0);
				_0x19c7567d2f2287d6(&(iLocal_1223[0]), 7);
			}
			if (!_does_volume_exist(&(iLocal_1223[1])))
			{
				iLocal_1223[1] = _create_volume_aggregate_with_custom_name("MARY3_VOL_INT_CLEAR_VEHICLES");
				_0x39816f6f94f385ad(&(iLocal_1223[1]), 2634.974f, -1280.685f, 53.00139f, 0f, 0f, 25.01507f, 66.12298f, 14.94918f, 12.5923f);
				_0x39816f6f94f385ad(&(iLocal_1223[1]), 2702.059f, -1250.474f, 53.00139f, 0f, 0f, 25.01507f, 43.57701f, 14.94918f, 12.5923f);
				func_384(&(iLocal_1223[1]), 0, 0, 1, 1, 0);
			}
		}
	}
	if (get_clock_hours() >= 18 && get_clock_hours() < 20)
	{
		set_clock_time(18, 0, 0);
		pause_clock(true, 0);
	}
	else if ((get_clock_hours() >= 20 || get_clock_hours() < 4) || (get_clock_hours() == 4 && get_clock_minutes() < 15))
	{
		set_clock_time(4, 15, 0);
	}
}

char[] func_110(int iParam0)
{
	if (!func_181(iParam0))
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
			func_385(iVar0, iVar1);
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
	if (!func_239(iParam0))
	{
		return false;
	}
	return func_243(iParam0, 33554432);
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
	return func_386(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_387(&(cParam0->f_7375));
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
	return func_388(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_389(Param0, Param0.f_3);
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
	if (!func_390())
	{
		return false;
	}
	if (!func_319((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[2]->f_1, 1) && func_319((*Global_1347702)[120]->f_15, 1)) && !func_319((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[37]->f_1, 1) && !func_319((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[57]->f_1, 1) && !func_319((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[26]->f_1, 1) && !func_319((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[62]->f_1, 1) && func_319((*Global_1835011)[63]->f_1, 1)) && !func_319((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[75]->f_1, 1) && !func_319((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[76]->f_1, 1) && !func_319((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[40]->f_1, 1) && func_319((*Global_1835011)[41]->f_1, 1)) && !func_319((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[62]->f_1, 1) && func_319((*Global_1835011)[63]->f_1, 1)) && !func_319((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[65]->f_1, 1) && func_319((*Global_1835011)[66]->f_1, 1)) && !func_319((*Global_1835011)[67]->f_1, 1))
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
	if (func_391(vParam1))
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
	func_212(&(cParam0->f_603));
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
		return func_392();
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
		func_393(cParam0->f_607);
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
	func_394(&(cParam0->f_638));
	func_395(&(cParam0->f_819));
	func_396(&(cParam0->f_1020));
	func_397(&(cParam0->f_1081));
	func_398(&(cParam0->f_1126));
	func_399(&(cParam0->f_5147));
	func_400(&(cParam0->f_1124));
	func_401(&(cParam0->f_5188));
	func_402(&(cParam0->f_5239));
	func_403(&(cParam0->f_5249));
	func_404(&(cParam0->f_5265));
	func_405(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

void func_139(char[4] cParam0)
{
	func_406(cParam0, iVar470, 67108863);
	func_406(cParam0, iVar473, 56);
	func_406(cParam0, iVar474, 31);
	func_406(cParam0, iVar475, 31);
	func_406(cParam0, iVar471, 67108863);
	func_406(cParam0, iVar472, 62);
	func_406(cParam0, iVar477, 24);
	func_406(cParam0, 1761016051, 62);
	func_406(cParam0, -636146522, 524384);
	func_406(cParam0, iVar478, 24);
	func_406(cParam0, 1144273089, 3);
	func_406(cParam0, 663716280, 3);
	func_406(cParam0, iVar476, 524384);
	func_407(cParam0, "mary3_father_follow", 6, 2, -1);
	func_407(cParam0, "mary3_amb_wagon_left", 24, 2, -1);
	func_407(cParam0, "mary3_amb_wagon_right", 24, 2, -1);
	func_407(cParam0, "mary3_wagon_chase_left", 56, 2, -1);
	func_407(cParam0, "mary3_boat_route", 16, 2, -1);
	func_407(cParam0, "mary3_cme_to_denis", 32, 2, -1);
	func_407(cParam0, "mary3_assist_line", 2, 2, -1);
	func_408(cParam0, cVar524, 32);
	func_410(cParam0, "script@story@mry3@leadin@mcs1@leadin_p1", Local_38[4], 1, 0, func_409(19), 0, 1);
	func_410(cParam0, "script@story@mry3@leadin@mcs1@leadin_p2", Local_38[5], 1, 2, func_409(20), 0, 1);
	func_410(cParam0, "script@story@mry3@leadout@mcs1@mary_lets_follow", Local_38[6], 2, 0, func_409(22), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig1_beckon@ig_1_beckon", Local_38[1], 2, 0, func_409(4), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig2_bump@ig2_bump", Local_38[3], 2, 0, func_409(18), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig3_argue@ig3_argue", Local_38[0], 24, 0, func_409(0), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig4_buyer_runs@ig_4_buyer_runs_player", Local_38[8], 8, 0, func_409(26), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig4_buyer_runs@ig_4_buyer_runs_buyer", Local_38[9], 8, 0, func_409(28), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig6_cower@ig6_cower", Local_38[2], 56, 0, func_409(7), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig7_panic@ig7_panic", Local_38[10], 48, 0, func_409(30), 0, 0);
	func_410(cParam0, "script@story@mry3@ig@ig8_scramble@ig8_scramble", Local_38[11], 32, 0, func_409(41), 0, 0);
	func_410(cParam0, "script@story@mry3@ig@ig9_broach@ig9_broach", Local_38[12], 32, 0, func_409(43), 0, 0);
	func_410(cParam0, "script@story@mry3@ig@ig10_drunk_stop@ig10_drunk_stop", Local_38[7], 2, 0, func_409(23), 0, 1);
	func_410(cParam0, "script@story@mry3@ig@ig10_theater@ig10_theater", Local_38[13], 64, 0, func_409(48), 0, 1);
	func_411(cParam0, &(Local_38[5]), func_409(21), 1);
	func_411(cParam0, &(Local_38[1]), func_409(5), 2);
	func_411(cParam0, &(Local_38[1]), func_409(6), 2);
	func_411(cParam0, &(Local_38[2]), func_409(10), 24);
	func_411(cParam0, &(Local_38[2]), func_409(11), 24);
	func_411(cParam0, &(Local_38[8]), func_409(24), 8);
	func_411(cParam0, &(Local_38[9]), func_409(29), 8);
	func_411(cParam0, &(Local_38[8]), func_409(25), 8);
	func_411(cParam0, &(Local_38[8]), func_409(27), 8);
	func_411(cParam0, &(Local_38[12]), func_409(45), 32);
	func_411(cParam0, &(Local_38[12]), func_409(47), 32);
	func_411(cParam0, &(Local_38[13]), func_409(67), 64);
	func_411(cParam0, &(Local_38[13]), func_409(49), 64);
	func_411(cParam0, &(Local_38[13]), func_409(66), 64);
	func_411(cParam0, &(Local_38[13]), func_409(50), 64);
	func_411(cParam0, &(Local_38[13]), func_409(51), 64);
	func_411(cParam0, &(Local_38[13]), func_409(52), 64);
	func_411(cParam0, &(Local_38[13]), func_409(53), 64);
	func_411(cParam0, &(Local_38[13]), func_409(54), 64);
	func_411(cParam0, &(Local_38[13]), func_409(55), 64);
	func_411(cParam0, &(Local_38[13]), func_409(56), 64);
	func_411(cParam0, &(Local_38[13]), func_409(57), 64);
	func_411(cParam0, &(Local_38[13]), func_409(58), 64);
	func_411(cParam0, &(Local_38[13]), func_409(59), 64);
	func_411(cParam0, &(Local_38[13]), func_409(60), 64);
	func_411(cParam0, &(Local_38[13]), func_409(61), 64);
	func_411(cParam0, &(Local_38[13]), func_409(62), 64);
	func_411(cParam0, &(Local_38[13]), func_409(63), 64);
	func_411(cParam0, &(Local_38[13]), func_409(64), 64);
	func_411(cParam0, &(Local_38[13]), func_409(65), 64);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_163(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 2);
	func_103(cParam0, 1);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_412(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_261(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_262(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_413(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_247(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_414() };
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
	func_415(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_416(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_417(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_370(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_181(iParam0))
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
		if (func_418(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_419(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_418(cParam0, func_33(cParam0), 1))
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
	if (func_420(cParam0) < 1)
	{
		func_421(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_422(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_423(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_424(cParam0);
		}
	}
	switch (func_420(cParam0))
	{
		case -1:
		case 0:
			func_425(cParam0, 1);
			break;
		case 1:
			if (func_426(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_425(cParam0, 2);
				}
				else
				{
					func_425(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_427(cParam0))
			{
				func_425(cParam0, 3);
			}
			break;
		case 3:
			if (func_428(cParam0))
			{
				func_425(cParam0, 4);
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
		func_429(cParam0, 0);
		return true;
	}
	if (func_430(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_429(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_430(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(int iParam0, int iParam1)
{
	func_431(iParam0, iParam1);
}

void func_164()
{
	iVar0 = 137;
	while (iVar0 <= 324)
	{
		func_176(iVar0);
		func_177(iVar0, 32);
		iVar0++;
	}
}

void func_165(int iParam0)
{
	func_432(iParam0, 4, 1);
}

void func_166(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_433(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_434(iParam0, 4);
		}
		else
		{
			func_435(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_436(iParam0, 4);
	}
	else
	{
		func_437(iParam0, 33554432);
	}
	_0x9b4e793b1cb6550a();
	func_438(iParam0);
}

void func_167(int iParam0, bool bParam1)
{
	if (!func_439(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_440(iParam0, 1);
	}
	else
	{
		func_441(iParam0, 1);
	}
	func_443(func_442(iParam0), bParam1);
}

bool func_168(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_445(iParam0, 1);
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
			func_446(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_339(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_447(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_448(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_448(iParam0, 0, 0) - iParam1) < 0)
		{
			func_168(iParam0, func_448(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_449(iParam0) == -427144552)
	{
		if (!func_450(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_451(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_452(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_446(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_453(iParam0, iParam1);
	return true;
}

void func_169(int iParam0)
{
	if (func_454(iParam0) && func_455())
	{
		remove_door_from_system(iParam0);
	}
}

void func_170(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_171(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_172(int* iParam0)
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

void func_173(var uParam0, int iParam1, bool bParam2)
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

void func_174(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (_does_volume_exist(&(iLocal_1223[iVar0])))
		{
			_delete_volume(&(iLocal_1223[iVar0]));
		}
		iVar0++;
	}
}

void func_175()
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		remove_cover_point(&(iLocal_1301[iVar0]));
		iVar0++;
	}
}

int func_176(int iParam0)
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

void func_177(int iParam0, int iParam1)
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

void func_178(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_11((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

int func_179(int iParam0)
{
	return iParam0;
}

void func_180(int iParam0)
{
	if (!func_460(iParam0))
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

bool func_181(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_182(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_183(int iParam0)
{
	iVar0 = func_288(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_184(int iParam0)
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
		iVar0 = func_186(iParam0);
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

int func_185(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_186(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_461(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_187(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return func_463(func_462(iParam0));
}

void func_188(int iParam0, int iParam1, int iParam2)
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

bool func_189(int iParam0, bool bParam1, bool bParam2)
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
		if (func_464())
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
		iVar0 = func_264(&(Global_1898164->f_1[0]));
		if (func_265(iVar0) && func_293((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_182(&(Global_1898164->f_1[0])))
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

bool func_190(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_191(int iParam0)
{
	switch (func_187(iParam0))
	{
		case 1:
			iVar0 = func_264(iParam0);
			return func_465(iVar0);
		case 8:
			iVar1 = func_264(iParam0);
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_466(iVar1);
			}
			break;
	}
	return -1;
}

void func_192(bool bParam0)
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
		func_467(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_468();
		Global_1898077->f_9 = func_469(Global_1894899->f_2);
		func_470(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_193()
{
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_319((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_319((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_319((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_319((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_319((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_319((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_194(int iParam0, int iParam1)
{
	if (!func_182(iParam0))
	{
		return;
	}
	func_471(iParam0, iParam1);
}

int func_195(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_196(bool bParam0)
{
	if (!bParam0 && func_472(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_197(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_198(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_195(0) != iParam0)
	{
		return;
	}
	if (func_473(iParam0))
	{
		if (bParam1)
		{
			func_474(-525676072);
		}
		else
		{
			func_475(-525676072);
		}
	}
}

int func_199(int iParam0)
{
	return func_477(func_476(iParam0));
}

void func_200(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_201(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_202(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_203(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_204()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_205()
{
	return func_478(_0xc17f69e1418cd11f(3));
}

bool func_206()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_207(int iParam0)
{
	iParam0 = func_258(iParam0);
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

int func_208(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_480(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_209(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_210(char* sParam0, bool bParam1)
{
	if (func_209(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_481(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_481(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_481(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_481(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_481(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_481(sParam0, 1);
		return true;
	}
	func_481(sParam0, 1);
	return false;
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_212(float fParam0)
{
	func_482(fParam0, 0f);
}

int func_213(float fParam0)
{
	if (!func_26(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_483(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_484() - round((fParam0->f_1 * 1000f)));
}

void func_214(bool bParam0, bool bParam1)
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
		func_485(0);
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

struct<4> func_215(int iParam0, int iParam1)
{
	return func_486(iParam0, iParam1);
}

void func_216(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_217(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_218(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_187(iParam0) == 1)
	{
		cVar0 = func_110(func_487(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_187(iParam0) == 8)
	{
		cVar0 = func_489(func_488(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_490(1, 1);
	func_491(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_203(1f);
}

void func_219(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_481(sParam0, 2);
}

void func_220(int iParam0, int iParam1)
{
	if (!func_492(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_221(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_222()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_223()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_224()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_225()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_226()
{
	return func_493(get_id_of_this_thread());
}

void func_227(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_494(bParam0);
}

void func_228()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_229(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_230()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_231(var uParam0)
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

void func_232(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_233(int iParam0)
{
	if (!func_495(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_234()
{
	func_496(64);
}

void func_235()
{
	Global_1310750->f_16072 = 0;
}

bool func_236()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_237(int iParam0)
{
	return func_238(23, iParam0);
}

bool func_238(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_497(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_498())
	{
		return func_497(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_497(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_239(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_240(int iParam0)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	return func_243(iParam0, 8);
}

void func_241(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_242(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_243(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_244(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_245()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_243(iVar1, 1))
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
			else if (func_243(iVar1, 2))
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
				func_280(iVar1, 11);
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

bool func_246(var uParam0)
{
	if (func_499(uParam0, 1) || func_499(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_247(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_248(struct<2> Param0)
{
	if (!func_247(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_249(struct<2> Param0, int iParam2)
{
	if (!func_247(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_250(int iParam0)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	if (!func_501(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_251(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_500(iParam1))
	{
		return;
	}
	if (!func_250(iParam1))
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
		func_502(cParam0, iParam2);
		func_503(iParam2);
	}
	func_504(iParam1);
	func_505(iParam1, 0);
	func_506(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_252(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_253(int iParam0)
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

int func_254(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_255(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_507(iParam0);
	if (func_508(iParam0))
	{
		if (func_254(iParam0) != iVar0)
		{
			return;
		}
	}
	func_509(iParam0);
	func_510(iParam0);
	iVar1 = func_207(iParam0);
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
			if (!func_511(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_512(iParam0);
	}
}

void func_256(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_513(iParam0))
	{
		return;
	}
	iVar0 = func_253(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_507(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_254(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_508(iVar0))
		{
			return;
		}
	}
	func_514(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_257(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_258(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_259(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_260()
{
	if (func_515(0))
	{
		func_516(0);
	}
	if (func_515(1))
	{
		func_516(1);
	}
	if (func_515(5))
	{
		func_516(5);
	}
	if (func_515(6))
	{
		func_509(6);
	}
}

struct<2> func_261(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_262(int iParam0)
{
	Var0 = { func_261(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_263(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_264(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	return func_517(func_462(iParam0));
}

bool func_265(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_266(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_267(int iParam0, bool bParam1)
{
	iVar0 = func_518(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_519(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_519(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_519(iParam0)))
			{
				_uilog_remove_entry(2, func_519(iParam0));
			}
		}
	}
	func_520(iParam0, 4);
	func_520(iParam0, 8);
	func_520(iParam0, 16);
}

void func_268(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_265(iVar0))
		{
			if (func_266(iVar0, 4))
			{
				func_269(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_266(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_518(iParam0), func_519(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_518(iParam0), func_519(iParam0), 2, "");
		func_521(iParam0, 16);
	}
	else
	{
		if (func_266(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_518(iParam0), func_519(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_518(iParam0), func_519(iParam0), 0, "");
		}
		func_520(iParam0, 16);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_266(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_518(iParam0), func_519(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_266(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_518(iParam0), func_519(iParam0), 1, "");
		}
		func_521(iParam0, 8);
	}
	else
	{
		if (func_266(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_518(iParam0), func_519(iParam0), 0, "");
		}
		func_520(iParam0, 8);
	}
}

int func_271(char[4] cParam0)
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

void func_272(int iParam0, int iParam1)
{
	if (func_515(0))
	{
		if (func_522(0))
		{
			func_523(0);
		}
	}
	if (func_515(1))
	{
		if (func_522(1))
		{
			func_523(1);
		}
	}
}

void func_273(char[4] cParam0)
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
		if (func_422(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_274(char[4] cParam0)
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

void func_275(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_524(iParam0, sParam4, iParam5);
	}
	func_525(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_276(int iParam0)
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_277()
{
	return &Global_1899515;
}

void func_278(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_279(int iParam0, int iParam1)
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

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_281(int iParam0)
{
	if (!func_239(iParam0))
	{
		return;
	}
	if (func_526(iParam0))
	{
		func_527(iParam0);
	}
	else
	{
		func_528(iParam0);
	}
}

int func_282(int iParam0)
{
	if (func_529(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0)
{
	if (func_530(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_284(int iParam0, int iParam1)
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

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_531(Global_1310750[iVar0], iParam0))
		{
			if (!func_532(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_533(iVar0) < func_534(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_287(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_286(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_535();
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

void func_287(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_536(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_288(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	return func_186(iParam0);
}

void func_289(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_290(bool bParam0, int iParam1)
{
	if (!bParam0 && func_472(373691918))
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
	func_196(bParam0);
	return 1;
}

void func_291()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_500(iVar17))
		{
			iVar18 = func_537(iVar17);
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
	func_538(&(Global_1359489->f_55));
	if (func_539(1777191912, 1))
	{
		func_540(1777191912, 1, 0);
	}
}

void func_292(int iParam0)
{
	if (!func_182(iParam0))
	{
		return;
	}
	func_542(iParam0, (func_541(iParam0) + shift_left(1, 16)));
}

bool func_293(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_294()
{
	return func_543() > 0;
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_544(-1032423150, iParam1);
			break;
		case 18:
			func_544(294066959, iParam1);
			func_544(-1925639563, iParam1);
			func_544(-378582304, iParam1);
			func_544(-338306437, iParam1);
			break;
		case 20:
			func_544(437270255, iParam1);
			break;
		case 2:
			func_544(-304000413, iParam1);
			func_544(-533612796, iParam1);
			func_544(48036954, iParam1);
			break;
		case 23:
			func_544(193108691, iParam1);
			func_544(491732588, iParam1);
			func_544(671962088, iParam1);
			func_545(1);
			break;
		case 16:
			func_544(-1836056650, iParam1);
			func_544(-754657922, iParam1);
			func_544(-1752355838, iParam1);
			func_544(-1375324510, iParam1);
			break;
		case 59:
			func_544(-514392105, iParam1);
			func_544(-822060246, iParam1);
			if (func_546(146))
			{
				func_544(1372748575, iParam1);
			}
			func_545(1);
			break;
		case 76:
			func_544(1991352213, iParam1);
			if (func_547() == 0)
			{
				func_544(1852488616, iParam1);
			}
			else
			{
				func_544(-9866350, iParam1);
			}
			break;
		case 44:
			func_544(863852599, iParam1);
			func_544(1228374935, iParam1);
			func_544(1517889050, iParam1);
			func_544(830657578, iParam1);
			func_544(1901354958, iParam1);
			break;
		case 46:
			func_544(-582805654, iParam1);
			func_544(250378940, iParam1);
			func_544(-2143265426, iParam1);
			break;
		case 17:
			func_544(-941494139, iParam1);
			func_544(1641489521, iParam1);
			break;
		case 19:
			func_544(-1829423531, iParam1);
			func_544(-1590504752, iParam1);
			func_544(1357221321, iParam1);
			break;
		case 21:
			func_544(-1037992610, iParam1);
			func_544(-1286414399, iParam1);
			func_545(0);
			break;
		case 15:
			func_544(-1014460309, iParam1);
			func_544(-1030502825, iParam1);
			break;
		case 33:
			func_544(479388090, iParam1);
			func_544(-1396342239, iParam1);
			func_544(-619618632, iParam1);
			break;
		case 34:
			func_544(1193561641, iParam1);
			break;
		case 64:
			func_544(1363960851, iParam1);
			break;
		case 60:
			func_544(-1232453926, iParam1);
			func_544(-882833584, iParam1);
			break;
		case 73:
			func_544(2023205767, iParam1);
			break;
		case 74:
			func_544(-2135286513, iParam1);
			if (func_547() == 0)
			{
				func_544(33799444, iParam1);
			}
			else
			{
				func_544(-161343203, iParam1);
			}
			break;
		case 8:
			func_544(841639693, iParam1);
			func_544(358952323, iParam1);
			break;
		case 36:
			func_544(852538149, iParam1);
			func_544(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_544(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_544(1116039310, iParam1);
			}
			break;
		case 27:
			func_544(107633428, iParam1);
			func_544(335902282, iParam1);
			func_544(575673055, iParam1);
			func_544(-425944207, iParam1);
			break;
		case 28:
			func_544(-1941530250, iParam1);
			func_544(1399269304, iParam1);
			func_544(1839684664, iParam1);
			func_544(923168503, iParam1);
			func_544(-1485078322, iParam1);
			break;
		case 29:
			func_544(574995900, iParam1);
			func_544(-1691275407, iParam1);
			func_544(-1725307861, iParam1);
			break;
		case 31:
			func_544(-2108383238, iParam1);
			func_544(-1321828931, iParam1);
			func_544(-1632118592, iParam1);
			func_544(334938948, iParam1);
			break;
		case 4:
			func_544(115823701, iParam1);
			func_544(-1896939736, iParam1);
			func_544(-1830746356, iParam1);
			func_544(-1235169781, iParam1);
			func_545(0);
			break;
		case 6:
			func_544(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_544(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_544(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_544(-384176140, iParam1);
			}
			break;
		case 25:
			func_544(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_544(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_544(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_544(-1374849484, iParam1);
			}
			break;
		case 48:
			func_544(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_544(217772674, iParam1);
			}
			else
			{
				func_544(2071798160, iParam1);
			}
			if (func_548(51))
			{
				func_544(-792802286, iParam1);
			}
			break;
		case 49:
			func_544(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_544(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_544(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_544(1402120602, iParam1);
			}
			break;
		case 58:
			func_544(-1661934591, iParam1);
			break;
		case 50:
			func_544(-1713759426, iParam1);
			break;
		case 52:
			func_544(-314799932, iParam1);
			func_544(-462260432, iParam1);
			func_544(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_544(345256028, iParam1);
				func_544(-1635084094, iParam1);
			}
			else
			{
				func_544(114267347, iParam1);
			}
			break;
		case 32:
			func_544(615304157, iParam1);
			break;
		case 47:
			func_544(415434835, iParam1);
			break;
		case 69:
			func_544(1373465877, iParam1);
			if (func_319((*Global_1347702)[9]->f_15, 1))
			{
				func_544(-2058273527, iParam1);
			}
			break;
		case 70:
			func_544(451334985, iParam1);
			if (func_547() == 0)
			{
				func_544(-224150200, iParam1);
			}
			else
			{
				func_544(289012628, iParam1);
			}
			break;
		case 71:
			if (func_547() == 0)
			{
				func_544(-41692120, iParam1);
			}
			else
			{
				func_544(1537840678, iParam1);
			}
			break;
		case 37:
			func_544(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_544(1842132550, iParam1);
			}
			else
			{
				func_544(-785735240, iParam1);
			}
			func_544(-1605690566, iParam1);
			break;
		case 13:
			func_544(-731367459, iParam1);
			func_544(224176585, iParam1);
			func_544(-14545580, iParam1);
			break;
		case 53:
			func_544(1095274522, iParam1);
			break;
		case 54:
			func_544(-572027988, iParam1);
			break;
		case 56:
			func_544(1339307101, iParam1);
			func_544(2102267732, iParam1);
			break;
		case 57:
			func_544(710102686, iParam1);
			break;
		case 22:
			func_544(-1754368482, iParam1);
			func_544(-2071408557, iParam1);
			break;
		case 12:
			func_544(-181334543, iParam1);
			break;
		case 0:
			func_544(-2134669864, iParam1);
			func_544(-548289709, iParam1);
			func_544(-911271922, iParam1);
			func_544(-604455775, iParam1);
			break;
		case 1:
			func_545(1);
			break;
		case 3:
			if (func_330())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_544(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_544(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_296()
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

void func_297(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_544(-145926707, iParam1);
			func_544(-604922090, iParam1);
			func_544(-848690769, iParam1);
			break;
		case 1:
			func_544(-1477631591, iParam1);
			break;
		case 2:
			func_544(76112544, iParam1);
			break;
		case 9:
			func_544(1396404308, iParam1);
			func_544(-1357381228, iParam1);
			if (func_319((*Global_1835011)[69]->f_1, 1))
			{
				func_544(1902679064, iParam1);
			}
			else
			{
				func_544(-2146422425, iParam1);
			}
			break;
		case 22:
			func_544(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_544(-1934184559, iParam1);
				func_544(1281755988, iParam1);
			}
			else
			{
				func_544(-1745220872, iParam1);
				func_544(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_544(-1641504538, iParam1);
				func_544(-988014485, iParam1);
			}
			else if (func_546(26))
			{
				func_544(-343043950, iParam1);
				func_544(-640062214, iParam1);
			}
			else
			{
				func_544(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_544(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_544(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_544(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_544(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_544(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_544(1301690984, iParam1);
				}
			}
			else
			{
				func_544(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_544(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_544(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_544(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_544(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_544(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_544(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_544(-754570528, iParam1);
			}
			else
			{
				func_544(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_544(-2072125821, iParam1);
			}
			else
			{
				func_544(270040030, iParam1);
			}
			break;
		case 37:
			func_544(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_544(-505314737, iParam1);
				func_544(-1853052860, iParam1);
			}
			else
			{
				func_544(-1975624994, iParam1);
				func_544(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_544(1690231002, iParam1);
			}
			else
			{
				func_544(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_544(1225386280, iParam1);
			}
			else if (func_546(54))
			{
				func_544(-283235773, iParam1);
			}
			else
			{
				func_544(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_544(1355398007, iParam1);
			}
			else
			{
				func_544(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_544(574636806, iParam1);
			}
			else
			{
				func_544(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_544(821118338, iParam1);
			}
			else if (func_546(39))
			{
				func_544(846829260, iParam1);
			}
			else
			{
				func_544(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_352((*Global_1835011)[33]->f_1) == 1)
				{
					func_544(1422779093, iParam1);
				}
				else
				{
					func_544(-1769536986, iParam1);
				}
			}
			else
			{
				func_544(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_544(352134789, iParam1);
			}
			else if (func_546(43))
			{
				func_544(260723113, iParam1);
			}
			else
			{
				func_544(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_544(-457958799, iParam1);
			}
			else
			{
				func_544(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_546(41))
			{
				func_544(-546824600, iParam1);
			}
			else
			{
				func_544(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_544(1297261593, iParam1);
			}
			else
			{
				func_544(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_544(2068484886, iParam1);
			}
			else if (func_546(49))
			{
				func_544(-1489080639, iParam1);
				func_544(-2102244050, iParam1);
			}
			else
			{
				func_544(-1863040467, iParam1);
			}
			break;
		case 51:
			func_544(-2055943209, iParam1);
			break;
		case 58:
			if (func_319((*Global_1347702)[23]->f_15, 1))
			{
				func_544(1650066845, iParam1);
			}
			else
			{
				func_544(151370023, iParam1);
			}
			func_544(1426057961, iParam1);
			func_544(476379584, iParam1);
			break;
		case 59:
			func_544(-1638117866, iParam1);
			break;
		case 62:
			func_544(199541730, iParam1);
			break;
		case 63:
			func_544(1703485804, iParam1);
			func_544(-800449045, iParam1);
			break;
		case 65:
			func_544(-1678210868, iParam1);
			func_544(-1448238026, iParam1);
			func_544(-1200864845, iParam1);
			func_544(1473511536, iParam1);
			break;
		case 66:
			func_544(-1774490051, iParam1);
			func_544(-34645921, iParam1);
			func_544(174027075, iParam1);
			func_544(-1155999, iParam1);
			func_545(1);
			break;
		case 67:
			func_544(701612593, iParam1);
			func_544(-1069631343, iParam1);
			func_544(1673428882, iParam1);
			break;
		case 68:
			func_544(-739133286, iParam1);
			func_544(-2130089358, iParam1);
			func_544(2056190391, iParam1);
			func_544(1941753817, iParam1);
			func_545(0);
			break;
		case 70:
			func_544(-1217555753, iParam1);
			break;
		case 71:
			func_544(697048821, iParam1);
			break;
		case 73:
			func_544(-553148661, iParam1);
			break;
		case 75:
			func_544(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_544(1414263863, iParam1);
			}
			else
			{
				func_544(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_544(1835465936, iParam1);
				func_544(523715611, iParam1);
			}
			else if (func_546(78))
			{
				func_544(1420338873, iParam1);
			}
			else
			{
				func_544(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_544(10180941, iParam1);
			}
			else if (func_546(79))
			{
				func_544(768420635, iParam1);
			}
			else
			{
				func_544(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_544(-383601523, iParam1);
			}
			else
			{
				func_544(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_544(1606472408, iParam1);
			}
			else
			{
				func_544(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_544(-203571927, iParam1);
			}
			else
			{
				func_544(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_544(729886222, iParam1);
			}
			else
			{
				func_544(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_544(-714816362, iParam1);
			}
			else
			{
				func_544(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_544(-932932179, iParam1);
				func_544(-1458537240, iParam1);
			}
			else
			{
				func_544(-1764383885, iParam1);
				func_544(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_544(1741466706, iParam1);
			}
			else
			{
				func_544(1405815775, iParam1);
			}
			break;
		case 94:
			func_544(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_544(1905280979, iParam1);
			}
			else
			{
				func_544(-1966245299, iParam1);
			}
			func_544(721468880, iParam1);
			break;
		case 99:
			func_544(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_544(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_544(-1117781095, iParam1);
				}
				else
				{
					func_544(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_544(141494548, iParam1);
			}
			else
			{
				func_544(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_544(-369525697, iParam1);
			}
			else if (func_546(101))
			{
				func_544(1595015219, iParam1);
			}
			else
			{
				func_544(-321486961, iParam1);
			}
			break;
		case 103:
			func_544(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_544(793460477, iParam1);
				func_544(-1610242176, iParam1);
			}
			else if (func_546(103))
			{
				func_544(1830897187, iParam1);
			}
			else
			{
				func_544(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_544(1528309077, iParam1);
			}
			else if (func_546(104))
			{
				func_544(1864966105, iParam1);
			}
			else
			{
				func_544(-103336013, iParam1);
			}
			break;
		case 108:
			func_544(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_544(-1123227713, iParam1);
				func_544(-889574341, iParam1);
			}
			else
			{
				func_544(2065385917, iParam1);
				func_544(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_544(-887421691, iParam1);
			}
			else if (func_546(109))
			{
				func_544(-1318117949, iParam1);
			}
			else
			{
				func_544(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_544(284822762, iParam1);
				}
				else
				{
					func_544(-1425017554, iParam1);
				}
			}
			else if (func_546(110))
			{
				if (&Global_1357515 == 0)
				{
					func_544(553087292, iParam1);
				}
				else
				{
					func_544(-1766870331, iParam1);
					func_544(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_544(-1980598735, iParam1);
			}
			else
			{
				func_544(-442732098, iParam1);
				func_544(1955756409, iParam1);
			}
			break;
		case 115:
			func_544(394303528, iParam1);
			func_544(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_544(1182403394, iParam1);
			}
			else
			{
				func_544(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_544(924445424, iParam1);
			}
			else
			{
				func_544(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_544(430755273, iParam1);
				func_544(-1473879802, iParam1);
			}
			else
			{
				func_544(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_544(73885747, iParam1);
			}
			else if (func_546(117))
			{
				func_544(1559707913, iParam1);
			}
			else
			{
				func_544(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_544(-2103887972, iParam1);
			}
			else if (func_546(118))
			{
				func_544(-435828462, iParam1);
			}
			else
			{
				func_544(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_544(2054486196, iParam1);
			}
			else
			{
				func_544(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_544(-570086056, iParam1);
			}
			else if (func_546(121))
			{
				func_544(32337856, iParam1);
			}
			else
			{
				func_544(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_544(813493663, iParam1);
			}
			else if (func_546(122))
			{
				func_544(-2132763590, iParam1);
			}
			else
			{
				func_544(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_544(-66240572, iParam1);
				func_544(1563075046, iParam1);
			}
			else
			{
				func_544(-787011772, iParam1);
				func_544(-1523377438, iParam1);
			}
			break;
		case 127:
			func_544(61020800, iParam1);
			break;
		case 129:
			func_544(428985222, iParam1);
			break;
		case 131:
			func_544(-1393851036, iParam1);
			break;
		case 133:
			func_544(1559531342, iParam1);
			break;
		case 134:
			func_544(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_544(-1374407408, iParam1);
				}
				else
				{
					func_544(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_544(-472672138, iParam1);
				}
				else
				{
					func_544(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_544(-1678710489, iParam1);
			}
			else
			{
				func_544(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_544(1717582460, iParam1);
			}
			else
			{
				func_544(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_544(1568112362, iParam1);
				func_544(1388317526, iParam1);
			}
			else if (func_546(136))
			{
				func_544(-1597534828, iParam1);
				func_544(-1207918353, iParam1);
			}
			else
			{
				func_544(-1940891082, iParam1);
				func_544(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_544(448334530, iParam1);
				func_544(2145375502, iParam1);
			}
			else
			{
				func_544(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_544(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_544(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_544(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_544(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_544(-66616327, iParam1);
			}
			else
			{
				func_544(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_544(1862916706, iParam1);
			}
			else if (func_546(147))
			{
				func_544(675105199, iParam1);
			}
			else
			{
				func_544(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_544(174409701, iParam1);
			}
			else if (func_546(148))
			{
				func_544(-1730895475, iParam1);
			}
			else
			{
				func_544(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_544(1295237052, iParam1);
			}
			else if (func_546(149))
			{
				func_544(-788577684, iParam1);
			}
			else
			{
				func_544(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_298(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_187(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_487(iParam0);
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
					if (func_352((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_264(iParam0);
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
			iVar3 = func_264(iParam0);
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

int func_299(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_549(iParam0);
	iVar3 = func_550(iParam0);
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
				iVar1 = func_277();
				func_326(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_551(iParam0, 1);
			if (func_552(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_553(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_554(1, iParam0);
				}
				else
				{
					func_555(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
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

int func_301(int iParam0, int iParam1, int iParam2)
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

void func_302(bool bParam0)
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

void func_303(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_556(iParam0, iParam1, bParam2);
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

int func_304(int iParam0, int iParam1)
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

bool func_305(int iParam0)
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

void func_306(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_557(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_558(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_559(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_560(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_559(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_307(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	return func_561(func_462(iParam0));
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_309()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_562(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_310(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (!func_563(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_564(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_565(iParam0, bParam2);
	iVar2 = 0;
	if (func_448(iParam0, 0, 0) == 0)
	{
		if (func_566(iParam0))
		{
			iVar5 = func_567(iParam0);
			iVar6 = func_568(iVar5);
			iVar7 = func_569(iVar6) + 1;
			func_570(iVar5);
			if (func_571(38))
			{
				func_317(483, 0);
			}
			else
			{
				func_317(482, 0);
			}
			if (iVar7 == func_572(iVar6))
			{
				func_310(func_573(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_390() && func_574(4))
				{
					if (func_390() && (func_575(38) || func_571(38)))
					{
						func_577(38, func_573(iVar6), 0, 0, func_576(), 0, -1, 0);
						func_578(2);
					}
					else
					{
						func_577(38, func_573(iVar6), 0, 0, func_576(), 0, -1, 0);
						func_578(1);
					}
				}
			}
			else if (func_390() && func_574(4))
			{
				if (func_390() && (func_575(38) || func_571(38)))
				{
					func_577(38, 0, 0, 0, func_576(), 0, -1, 0);
					func_578(2);
				}
				else
				{
					func_577(38, 0, 0, 0, func_576(), 0, -1, 0);
					func_578(1);
				}
			}
			if (func_390() && func_574(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_390() && (func_575(38) || func_571(38)))
					{
						func_579(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_579(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_449(iParam0) == -1037537535)
	{
		if ((!func_580(iParam0, 866047851) && !func_580(iParam0, -1979000645)) && !func_580(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_581(iParam0, 8388608) && !func_582(28))
	{
		func_583(28);
	}
	if (!bVar3)
	{
		if (func_580(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_584(iParam0) == -1447088266)
			{
				iVar1 = func_586(func_585(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_587(iVar1);
					}
					if (func_452(0) && func_588(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_589(iParam0, iVar0, iParam5);
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
						func_587(iParam0);
					}
					if (func_452(0) && func_588(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_589(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_449(iParam0) == -427144552)
		{
			if (!func_590(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_449(iParam0) == 307971639 && func_591(iParam0))
		{
			if (!func_592(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_580(iParam0, 866047851))
		{
			func_593(iParam0);
		}
		else if (func_580(iParam0, 2000026003))
		{
			func_594(iParam0);
		}
		else if (func_580(iParam0, -103750053))
		{
			func_95(func_595(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_596(-717883113, 2091222383), iVar0);
		}
		else if (func_580(iParam0, -121341956) && !func_580(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_319((*Global_1835011)[4]->f_1, 1))
				{
					func_317(498, 0);
				}
			}
			if (func_580(iParam0, -2017733358) || func_580(iParam0, -1369131378))
			{
				func_597(iParam0);
			}
		}
		else if (func_580(iParam0, -136654233))
		{
			if (func_580(iParam0, -1021472396))
			{
			}
		}
		else if (func_580(iParam0, -1466706512) && func_580(iParam0, 1147021565))
		{
			func_317(484, 0);
		}
		else if (func_580(iParam0, 1147021565) && func_580(iParam0, -524514947))
		{
		}
		else if (func_580(iParam0, 554195525))
		{
		}
		else if (func_580(iParam0, 589988438))
		{
			if (func_598())
			{
				func_599(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_580(iParam0, 787083290) && func_580(iParam0, 949916894))
		{
			func_600(iParam0);
		}
		else if (func_580(iParam0, -1718133314))
		{
			func_601(iParam0);
		}
		else if (func_580(iParam0, -1738650224))
		{
			func_602(iParam0);
		}
		else if (func_580(iParam0, -1112814642) && func_580(iParam0, 949916894))
		{
			func_603(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_580(iParam0, 1841149704))
		{
			func_604();
		}
		else if (func_580(iParam0, 606799272))
		{
			func_605(iParam0, iParam1);
			func_606(iParam0);
		}
		else if (func_580(iParam0, -1112814642) && func_580(iParam0, -1697809989))
		{
			func_607(iParam0, 0, 0, 0);
		}
		else if (func_580(iParam0, -2017733358) || func_580(iParam0, -1369131378))
		{
			func_597(iParam0);
		}
		else if (func_580(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_608(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_580(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_339(215778062, 1, 0))
					{
						func_310(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_339(670273567, 1, 0))
					{
						func_310(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_339(-967317137, 1, 0))
					{
						func_310(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_339(526074061, 1, 0))
					{
						func_310(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_339(-1045488665, 1, 0))
					{
						func_310(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_339(471514780, 1, 0))
					{
						func_310(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_580(iParam0, -839724752) && func_581(iParam0, 4))
		{
			if (!func_571(42))
			{
				func_609(iParam0);
			}
		}
		else if (func_580(iParam0, 1399091007))
		{
			func_610(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_580(iParam0, 1248798204))
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
				func_310(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_583(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_611(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_612(&iVar9, 0))
				{
					func_588(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_611(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_317(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_613();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_614();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_615();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_616();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_617();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_618(499813453, 854119837, 0);
				func_619(499813453, 0);
				func_620(1);
				break;
			case 2127812557:
				func_618(499813453, -1292544588, 0);
				func_619(499813453, 0);
				func_620(2);
				break;
			case 808991383:
				func_618(499813453, -1003325394, 0);
				func_619(499813453, 0);
				func_620(4);
				break;
			case 1134518629:
				func_618(666607663, -335460405, 0);
				func_619(666607663, 0);
				func_621(1);
				break;
			case 902940106:
				func_618(666607663, 903797617, 0);
				func_619(666607663, 0);
				func_621(2);
				break;
			case -418174898:
				func_618(666607663, 669728650, 0);
				func_619(666607663, 0);
				func_621(4);
				break;
			case -648114971:
				func_618(-220219788, 1214120047, 0);
				func_619(-220219788, 0);
				func_622(1);
				break;
			case 211153747:
				func_618(-220219788, 655769340, 0);
				func_619(-220219788, 0);
				func_622(2);
				break;
			case -32876996:
				func_618(-220219788, 885316185, 0);
				func_619(-220219788, 0);
				func_622(4);
				break;
			case 1191437462:
				func_618(218622660, -1491419385, 0);
				func_619(218622660, 0);
				func_623(1);
				break;
			case 1119149048:
				func_618(218622660, 1809565830, 0);
				func_619(218622660, 0);
				func_623(2);
				break;
			case 506073827:
				func_618(390004462, -628873767, 0);
				func_619(390004462, 0);
				func_624(1);
				break;
			case -1876986168:
				func_618(390004462, -405421956, 0);
				func_619(390004462, 0);
				func_624(2);
				break;
			case 2142623221:
				func_618(390004462, -1108972386, 0);
				func_619(390004462, 0);
				func_624(4);
				break;
			case 1508215381:
				func_618(6410548, 1053716392, 0);
				func_619(6410548, 0);
				func_625(1);
				break;
			case -888935280:
				func_618(6410548, 806507056, 0);
				func_619(6410548, 0);
				func_625(2);
				break;
			case -1252474566:
				func_618(6410548, 1571925350, 0);
				func_619(6410548, 0);
				func_625(4);
				break;
			case -1465702449:
				func_618(6410548, 1330352282, 0);
				func_619(6410548, 0);
				func_625(8);
				break;
			case -21093309:
				func_627(242, func_626(-21093309), 0);
				break;
			case 204375141:
				func_627(240, func_626(204375141), 0);
				break;
			case -417963070:
				func_627(241, func_626(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_628(594, 1934060482, 1, 1);
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
					func_628(594, 1110018439, 1, 1);
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
					func_628(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_628(594, -1228016946, 1, 1);
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
					func_628(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_628(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_317(488, 0);
				break;
			case 1613651027:
				func_317(491, 0);
				break;
			case -885810591:
				func_317(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_310(func_629(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_310(func_630(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_582(1))
				{
					func_317(487, 0);
				}
				break;
			case -898386032:
				func_317(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_317(496, 0);
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
		func_631(&iVar10);
		if (!func_632(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_452(0))
		{
			return true;
		}
		if (func_449(iParam0) == -1037537535)
		{
			func_633(iParam0);
		}
		if (func_580(iParam0, -1979000645))
		{
			func_634(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_452(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_310(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_635(iVar2, 0);
		}
	}
	Var35 = { func_447(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_636(iParam0);
	if (fParam6 > 0f)
	{
		if (func_580(iParam0, -839724752))
		{
			func_637(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_446(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_311(int iParam0)
{
	if (func_580(iParam0, 1989861793))
	{
		iVar0 = func_638(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_639(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_640(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_641(iVar14, iVar1);
					if (iVar15 != iParam0 && func_444(iVar15, 0))
					{
						if (func_642(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_643(iVar1);
				if (bVar13)
				{
					func_644(iParam0);
				}
				else
				{
					func_317(306, 0);
				}
			}
		}
	}
}

void func_312()
{
	if (func_20() != -1)
	{
		return;
	}
	func_645();
	func_646();
	func_647();
	func_648();
	func_649();
	func_650();
	func_651();
}

void func_313(int iParam0)
{
	func_168(iParam0, 1, 1, -142743235, 1);
	if (func_652(iParam0))
	{
		func_653(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_655(func_654(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_656(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_657() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_658(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_658(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_659(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_659(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_659(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_659(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_659(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_659(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_659(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_659(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_659(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_660(iVar8, iVar0))
				{
					func_661(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_660(iVar8, iVar0))
		{
			func_661(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_314()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_660(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_657() == -2125499975 || func_657() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_661(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_661(&vVar2, iVar5, iVar0);
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

void func_315()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_562(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_316(int iParam0, bool bParam1)
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
			if ((func_319((*Global_1835011)[59]->f_1, 1) || func_319((*Global_1347702)[1]->f_15, 1)) || func_183((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_539(403634348, 1))
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

void func_317(int iParam0, bool bParam1)
{
	func_662(iParam0, &iVar0, &iVar1);
	if (!func_663(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_664(iVar0, iVar1);
}

void func_318(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_655(iParam0, 1);
	func_665(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_665(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_666(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_665(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_665(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_319(int iParam0, bool bParam1)
{
	switch (func_288(iParam0))
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

void func_320()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_562(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_321()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_562(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_667(iParam1, 1, 0) };
		iParam3 = func_668(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_669(iParam3);
	return func_611(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_323()
{
	return _unlock_is_unlocked(99890643);
}

void func_324(int iParam0)
{
	if (!func_670(iParam0))
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

bool func_325(int iParam0, int iParam1)
{
	if (!func_671(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_672(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_673(Global_40.f_9910[iParam1], 4);
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_674(*iParam0);
	iVar1 = func_675(*iParam0);
	iVar2 = func_676(*iParam0);
	iVar3 = func_677(*iParam0);
	iVar4 = func_678(*iParam0);
	iVar5 = func_679(*iParam0);
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
	iVar6 = func_680(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_680(iVar1, iVar0);
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
	func_681(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_327(int iParam0, int iParam1, bool bParam2)
{
	if (!func_671(iParam0))
	{
		return;
	}
	if (!func_682(iParam1))
	{
		return;
	}
	if (func_683(iParam1, 1))
	{
		return;
	}
	iVar0 = func_672(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_325(iParam0, -1))
	{
		return;
	}
	else
	{
		func_684(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_189(0, 0, 1))
		{
			func_358(0, 17);
		}
	}
}

void func_328()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_562(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_562(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_330()
{
	return _unlock_is_unlocked(-121456797);
}

void func_331()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_562(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_332()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_562(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_562(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_562(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_562(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_562(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_337(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_338(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_339(int iParam0, int iParam1, bool bParam2)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_449(iParam0);
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
		if (!func_685(iParam0, 1))
		{
			return false;
		}
	}
	return func_448(iParam0, 0, bParam2) >= iParam1;
}

void func_340(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_686(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_686(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_562(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_562(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_562(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_562(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_562(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_346()
{
	if (func_687() > 1)
	{
		func_688();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_317(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_317(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_317(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_317(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_317(452, 1);
		}
	}
}

bool func_347(int iParam0)
{
	return func_689(iParam0, 4, 1);
}

void func_348(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_349(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_182(iParam0))
	{
		return;
	}
	func_221(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_187(iParam0))
	{
		case 1:
			func_95(func_596(909007663, -587839005), 1);
			iVar0 = func_264(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_465(iVar0))
			{
				case 0:
					func_95(func_596(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_596(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_596(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_596(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_596(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_596(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_596(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_596(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_596(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_596(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_596(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_264(iParam0);
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_293((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_293((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_596(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_596(909007663, -2049243343), 1);
				}
			}
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_466(iVar1))
				{
					case 0:
						func_95(func_596(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_596(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_596(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_596(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_596(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_596(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_596(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_596(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_596(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_596(909007663, 532323983), 1);
				}
			}
			else if (func_293((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_293((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_293((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_596(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_596(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_350()
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
	else if (func_190(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_189(0, 0, 1) || func_690()) || func_129())
	{
		return;
	}
	iVar0 = func_193();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_691(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_692(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_692(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_693(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_358(0, -1);
	}
	if (iVar2 > 0)
	{
		func_694("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_695(1, 0);
	Global_1956575->f_4 = 1;
}

void func_351(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_275(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_696(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_352(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	return func_697(iParam0);
}

int func_353(int iParam0, int iParam1)
{
	if (!func_698(iParam0))
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (!func_699(iParam0, &iVar0, &iVar1))
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

int func_354(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_700())
	{
		iVar2 = func_700();
	}
	iVar5 = func_701(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_462(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_462(iVar6) == 0)
			{
				return func_702(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_462(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_462(iVar6) == 0)
			{
				return func_702(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_702(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_703(1330954593, 0, -1);
		case 1:
			return func_703(1330954593, 0, -1);
		case 2:
			return func_703(1330954593, 0, -1) * 2;
		case 4:
			return func_703(1330954593, 0, -1);
		case 5:
			return func_703(1330954593, 0, -1);
		case 6:
			return func_703(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_703(1330954593, 0, -1) * 3;
		case 9:
			return func_703(1330954593, 0, -1) * 3;
		case 10:
			return func_703(1330954593, 0, -1) * 3;
		case 11:
			return func_703(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_356(int iParam0)
{
	if (!func_182(iParam0))
	{
		return cVar0;
	}
	switch (func_187(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_487(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_264(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_354(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_357(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_359();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_187(Global_1879514->f_1) == 1)
			{
				func_353(5, 1);
			}
			else if (func_187(Global_1879514->f_1) == 8 && (func_293((*Global_1347702)[func_264(Global_1879514->f_1)]->f_12, 1) || func_293((*Global_1347702)[func_264(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_353(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_358(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_704(&Global_0, 8);
	}
	if (!func_390() || func_20() != -1)
	{
		return;
	}
	func_704(&Global_0, 1);
}

int func_359()
{
	iVar0 = func_705(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_706(iVar0))
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

Vector3 func_360(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_707(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_391(vVar0))
	{
		vVar0 = { func_707(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_361(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_362(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_363(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_239(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_708(vParam0, iParam3);
}

void func_364()
{
	func_709();
	func_710();
	func_711();
	_0x11b0a0b282fa9b10(0);
}

void func_365(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_712(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_713(&(Param0.f_10)))
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
			func_714(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_366(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_367(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_368()
{
	return Global_1572864->f_12;
}

void func_369(bool bParam0)
{
	if (func_478(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_715();
	Var1.f_3.f_3 = iVar0;
	if ((!func_716(Global_1347343->f_2) && !func_366(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_717();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_366(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_718();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_366(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_719();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_720(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_721(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_367(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_367(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_370(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_722(uParam0);
	iVar0 = func_723(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_724(iParam1);
		}
		iVar0 = func_725(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_726(uParam0);
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
		iVar0 = func_726(uParam0);
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
	func_727(uParam0, 2);
}

void func_371(char[4] cParam0, int iParam1)
{
	func_728(&(cParam0->f_7375), iParam1);
}

int func_372(var uParam0)
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

int func_373()
{
	return func_487(func_729());
}

void func_374(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_392())
	{
		func_730(cParam0, iVar0);
		iVar0++;
	}
}

int func_375(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_376(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_377(char[4] cParam0)
{
	func_736(cParam0, iLocal_16, iLocal_17, 108102, 108196, 108394, 108925, 109589, "MRY3_INT", 10, -1);
	func_736(cParam0, iLocal_17, iLocal_18, 110084, 110288, 110667, 111339, 112418, "MRY3_MCS1", 10, -1);
	func_736(cParam0, iLocal_18, iLocal_19, 112567, 112883, 112977, 113404, 114030, "", 264, -1);
	func_736(cParam0, iLocal_19, iLocal_20, 114331, 114686, 114815, 115320, 115758, "MRY3_MCS2", 10, -1);
	func_736(cParam0, iLocal_20, iLocal_21, 115828, 116381, 116480, 116772, 118320, "", 8, -1);
	func_736(cParam0, iLocal_21, iLocal_22, 118546, 118821, 118840, 119321, 124280, "", 8, -1);
	func_736(cParam0, iLocal_22, iLocal_23, 124357, 124499, 124722, 124850, 125017, "MRY3_EXT", 16777282, -1);
	func_736(cParam0, iLocal_23, 26, 125117, 125169, 125480, 125514, 125563, "MRY3_EXT", 66, -1);
}

bool func_378(int iParam0)
{
	return func_386(iVar480, iParam0);
}

void func_379(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_772(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_380(int iParam0)
{
	if (!func_378(iParam0))
	{
		func_163(&uLocal_483, iParam0);
	}
}

int func_381(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = func_773(cParam0, iParam1, bParam2);
	if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

bool func_382(int iParam0, int iParam1)
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
	if (func_386(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_386(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_386(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

var func_383(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_774(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_384(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_385(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_386(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_387(var uParam0)
{
	if (!func_775(uParam0, 4))
	{
		if (func_776(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_777(uParam0) };
		if (!func_776(uParam0->f_860, 524288))
		{
			func_778(&(uParam0->f_872));
		}
		func_779(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_780(uParam0, 0f, 0f, 0f);
		func_781(uParam0);
		func_782(uParam0);
		func_783(uParam0, 0f, 0f, 0f, 0, 0);
		func_784(uParam0);
		func_728(uParam0, 4);
		func_785(uParam0, 0);
		func_786(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_388(int iParam0)
{
	if (func_787(iParam0))
	{
		return func_788(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_389(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_490(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_789(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_790(0, 0);
		if (func_670(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_791(1, 0);
		}
	}
	else
	{
		func_791(1, 0);
	}
	func_201(0);
	func_491(0, vParam0, uParam3);
	return 1;
}

bool func_390()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_391(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_392()
{
	return 26;
}

void func_393(int iParam0)
{
	if (!func_181(iParam0))
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

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_792((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_395(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_793((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_794((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_795((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_796((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_797((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_798((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_799((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_800((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_801((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_802((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_803(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_804(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_407(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_805(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_806(&(cParam0->f_819));
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

void func_408(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_807(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_808(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

char* func_409(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			sVar0 = "pl_leadin_P1";
			break;
		case 20:
			sVar0 = "pl_enter";
			break;
		case 21:
			sVar0 = "pl_leadin";
			break;
		case 0:
			sVar0 = "pl_argue";
			break;
		case 4:
			sVar0 = "pl_enter";
			break;
		case 5:
			sVar0 = "pl_quick";
			break;
		case 6:
			sVar0 = "pl_down_here";
			break;
		case 7:
			sVar0 = "pl_base_loop";
			break;
		case 10:
			sVar0 = "pl_right_to_Left_trans";
			break;
		case 11:
			sVar0 = "pl_left_to_Right_trans";
			break;
		case 12:
			sVar0 = "pl_what_ru_doing_R";
			break;
		case 13:
			sVar0 = "pl_what_ru_doing_L";
			break;
		case 14:
			sVar0 = "pl_who_are_you_R";
			break;
		case 15:
			sVar0 = "pl_who_are_you_L";
			break;
		case 16:
			sVar0 = "pl_are_you_insane_R";
			break;
		case 17:
			sVar0 = "pl_are_you_insane_L";
			break;
		case 18:
			sVar0 = "PBL_Bump_Full";
			break;
		case 23:
			sVar0 = "pl_drunk_enter";
			break;
		case 24:
			sVar0 = "pl_player_hold_it_walk";
			break;
		case 25:
			sVar0 = "pl_player_hold_it_walk_alt";
			break;
		case 26:
			sVar0 = "pl_player_hold_it_run";
			break;
		case 27:
			sVar0 = "pl_player_hold_it_run_alt";
			break;
		case 28:
			sVar0 = "pl_buyer_01_run";
			break;
		case 29:
			sVar0 = "pl_buyer_02_run";
			break;
		case 30:
			sVar0 = "pl_loop_base";
			break;
		case 31:
			sVar0 = "pl_Do_you_know_who";
			break;
		case 32:
			sVar0 = "pl_What_the_hell";
			break;
		case 33:
			sVar0 = "pl_brought_that_broach";
			break;
		case 34:
			sVar0 = "pl_did_linton_put";
			break;
		case 35:
			sVar0 = "pl_lemme_outta_here";
			break;
		case 36:
			sVar0 = "pl_let_me_go";
			break;
		case 37:
			sVar0 = "pl_making_a_big_mistake";
			break;
		case 38:
			sVar0 = "pl_thiis_is_insane";
			break;
		case 39:
			sVar0 = "pl_where_you_taking_me";
			break;
		case 40:
			sVar0 = "pl_you_cant_do_this";
			break;
		case 41:
			sVar0 = "pl_pulls_buyer_out";
			break;
		case 42:
			sVar0 = "pl_pulls_buyer_out_alt";
			break;
		case 43:
			sVar0 = "pl_HandOver_p1";
			break;
		case 44:
			sVar0 = "pl_HandOver_p2";
			break;
		case 45:
			sVar0 = "pl_TossOver_p1";
			break;
		case 46:
			sVar0 = "pl_TossOver_p2";
			break;
		case 47:
			sVar0 = "pl_RunAway";
			break;
		case 22:
			sVar0 = "pl_mary_follow";
			break;
		case 48:
			sVar0 = "pl_Enter_TakeSeat";
			break;
		case 49:
			sVar0 = "pl_Base";
			break;
		case 66:
			sVar0 = "pl_Time_to_Go_End";
			break;
		case 67:
			sVar0 = "pl_Time_to_Go_Mid";
			break;
		case 50:
			sVar0 = "pl_Idle_01_WeightShift";
			break;
		case 51:
			sVar0 = "pl_Idle_02_lookAtEachOther";
			break;
		case 52:
			sVar0 = "pl_Idle_03_MaryExcited";
			break;
		case 53:
			sVar0 = "pl_Idle_04_ArthurFakeExcited";
			break;
		case 54:
			sVar0 = "pl_Idle_05_LookAtThat";
			break;
		case 55:
			sVar0 = "pl_Idle_06_Laugh";
			break;
		case 56:
			sVar0 = "pl_Idle_07_MaryApplause";
			break;
		case 57:
			sVar0 = "pl_Idle_08_MaryJohnApplause";
			break;
		case 58:
			sVar0 = "pl_Idle_09_StealingGlances";
			break;
		case 59:
			sVar0 = "pl_Idle_10_LookAround";
			break;
		case 60:
			sVar0 = "pl_Idle_11_EnjoyingTheShow";
			break;
		case 61:
			sVar0 = "pl_Idle_12_BooSmall";
			break;
		case 62:
			sVar0 = "pl_Idle_13_BooBig";
			break;
		case 63:
			sVar0 = "pl_Idle_14_CheerSmall";
			break;
		case 64:
			sVar0 = "pl_Idle_15_CheerBig";
			break;
		case 65:
			sVar0 = "pl_Make_a_Move";
			break;
		default:
			break;
	}
	return sVar0;
}

void func_410(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_809(iParam3, func_33(cParam0)) && !func_809(iParam3, func_35(cParam0)))
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
	iVar0 = func_810(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_811(&(cParam0->f_1126));
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
		func_812(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_411(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_809(iParam3, func_33(cParam0)) && !func_809(iParam3, func_35(cParam0)))
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
	iVar0 = func_813(&(cParam0->f_1126), iParam1);
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

void func_412(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_814((*uParam0)[iVar0]))
		{
			if (func_809((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_815((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_816((*uParam1)[iVar0]))
		{
			if (func_809((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_817((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_818((*uParam2)[iVar0]))
		{
			if (func_809((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_819((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_820((*uParam3)[iVar0]))
		{
			if (func_809((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_821((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_809(uParam4->f_1, iParam12))
	{
		func_822(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_823((*uParam5)[iVar0]))
		{
			if (func_809((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_824((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_823((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_825((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_809((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_826((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_827((*uParam6)[iVar0]))
		{
			if (func_809((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_828((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_829((*uParam7)[iVar0]))
		{
			if (func_809((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_830((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_831((*uParam8)[iVar0]))
		{
			if (func_809((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_832((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_833((*uParam9)[iVar0]))
		{
			if (func_809((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_834((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_835((*uParam10)[iVar0]))
		{
			if (func_809((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_836((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_837((*uParam11)[iVar0]))
		{
			if (func_809((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_838((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_413(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_839(uParam0, iParam1, sParam2))
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

struct<2> func_414()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_415(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_416(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_417(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_840(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_370(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_418(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_841(cParam0->f_607)}, 3);
			if (func_842(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_843(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_844(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_419(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_823((*uParam0)[iVar0]))
		{
			if (func_809((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_845((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_846((*uParam0)[iVar0]))
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

int func_420(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_421(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_847(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_848(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_422(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_849(cParam0))
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
				iVar12 = func_850(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_851(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_852(iVar12))
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
		if (func_853(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_850(&iVar29, &Var18);
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
		func_854(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_852(iVar13) || func_855(Global_35, iVar13, 1, 1) > 200f) && !func_391(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_772(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_423(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_856(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_857(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_424(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_858(cParam0);
			if (func_859(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_860(cParam0, 2097152);
				func_257(cParam0, 16384);
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
			func_858(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_861(cParam0, Var0))
			{
				if (func_420(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_420(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_425(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_426(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_862(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_421(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_422(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_841(cParam0->f_607)}, 3);
		if (func_863(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_864(&(cParam0->f_13115)) < 30f)
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

bool func_427(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_864(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_865()) && func_864(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_257(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_866(0, 0);
		func_257(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_428(char[4] cParam0)
{
	if (func_867(cParam0))
	{
		func_145(cParam0, &(Local_530[0]), "MARYLINT", 0);
	}
	else
	{
		return false;
	}
	if (!func_382(iVar1199, 0))
	{
		iLocal_1202 = func_870(func_868(12, 0), func_869(12, 0), 1, 1, 0, 1, 1);
		return false;
	}
	else if (func_33(cParam0) >= iLocal_17)
	{
		if (does_entity_exist(iVar1199))
		{
			func_379(iVar1199, func_215(12, 1), 2, 1073741824);
			if (!func_871(iVar1199, -982327190))
			{
				task_stand_still(iVar1199, -1);
			}
		}
	}
	if (func_33(cParam0) == iLocal_16)
	{
		if (!func_382(&(Local_709[5]), 0))
		{
			Local_709[5] = func_872(iVar471, vLocal_516, 344.88f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			set_ped_can_be_targetted(&(Local_709[5]), false);
			set_ped_relationship_group_hash(&(Local_709[5]), -1538724068);
			_set_ped_body_component(&(Local_709[5]), 865644342);
			_update_ped_variation(&(Local_709[5]), false, true, true, true, false);
			set_blocking_of_non_temporary_events(&(Local_709[5]), true);
			return false;
		}
		else if (!func_871(&(Local_709[5]), -1098463898))
		{
			task_start_scenario_at_position(&(Local_709[5]), 837932401, vLocal_516, 344.88f, -1, false, true, "WORLD_HUMAN_BROOM_WORKING_MALE_B", -1f, false);
		}
	}
	if (func_33(cParam0) >= iLocal_18 && func_33(cParam0) <= iLocal_20)
	{
		if (!func_873(cParam0))
		{
			return false;
		}
	}
	func_874();
	func_875(2, 3);
	if (func_33(cParam0) >= 0 && func_33(cParam0) <= 2)
	{
		func_876(cParam0);
		func_875(0, 23);
	}
	if (func_33(cParam0) >= 3 && func_33(cParam0) <= 25)
	{
		func_875(24, 43);
	}
	if (func_271(cParam0) != 0)
	{
		if (func_33(cParam0) == iLocal_16)
		{
			if (_does_volume_exist(&(iLocal_1223[0])))
			{
				_0xc1799fafd2fdf52b(&(iLocal_1223[0]), 0, 0, 0);
				uLocal_1291 = func_383(&(iLocal_1223[0]), 0, 0, 10208);
				func_384(&(iLocal_1223[0]), 0, 0, 1, 1, 0);
				_0x19c7567d2f2287d6(&(iLocal_1223[0]), 7);
			}
		}
	}
	if (func_33(cParam0) >= iLocal_19 && func_33(cParam0) <= iLocal_21)
	{
		_0xc6dcc2a3a8825c85(1);
	}
	if (func_33(cParam0) >= iLocal_19 && func_33(cParam0) <= iLocal_20)
	{
		if (_does_volume_exist(&(iLocal_1223[35])))
		{
			uLocal_1300 = func_383(&(iLocal_1223[35]), 0, 0, 10208);
			_0xe5ef9de716ff737e(&(iLocal_1223[35]), 0, 1);
		}
	}
	if (_does_volume_exist(&(iLocal_1223[32])))
	{
		_0x2fcd528a397e5c88(&(iLocal_1223[32]), 8);
		_0x2fcd528a397e5c88(&(iLocal_1223[32]), 40);
		func_877(&(iLocal_1223[32]), 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[3])))
	{
		if (!_0x91a5f9cbebb9d936(uVar1284))
		{
			uLocal_1287 = _0x4c39c95ae5db1329(&(iLocal_1223[3]), false, 15);
		}
	}
	if (func_33(cParam0) >= iLocal_18 && func_33(cParam0) <= iLocal_20)
	{
		if (_does_volume_exist(&(iLocal_1223[19])))
		{
			uLocal_1295 = func_383(&(iLocal_1223[19]), 0, 0, 0);
			_0x2fcd528a397e5c88(&(iLocal_1223[19]), 40);
		}
		if (_does_volume_exist(&(iLocal_1223[20])))
		{
			uLocal_1296 = func_383(&(iLocal_1223[20]), 0, 0, 0);
			_0x2fcd528a397e5c88(&(iLocal_1223[20]), 40);
		}
	}
	func_879(cParam0, 144298);
	func_881(cParam0, 144587);
	func_883(cParam0, 146658);
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_884(285);
	func_884(286);
	func_884(933);
	func_884(934);
	func_885(285, 32);
	func_885(286, 32);
	func_885(933, 32);
	func_885(934, 32);
	func_886();
	_set_scenario_group_enabled_hash(369265386, false);
	func_887(9);
	create_model_hide(2627.006f, -1379.284f, 46.15857f, 5f, -1878692498, false);
	func_888(-2084311522);
	if ((func_120(cParam0, 4) || func_120(cParam0, 4194304)) || func_128(cParam0, 2))
	{
		_set_weather_type(-702816767, true, true, false, 0f, false);
	}
	else
	{
		_set_weather_type(-702816767, false, true, true, 60f, false);
	}
	func_166(9, 1, 0);
	func_167(44, 0);
	func_889(1388233219, 1, 0f, 1, 0, 0, 1, 0);
	func_889(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	func_889(726257907, 1, 0f, 0, 0, 0, 1, 0);
	func_889(229021101, 1, 0f, 0, 0, 0, 1, 0);
	func_889(293111919, 1, 0f, 0, 0, 0, 1, 0);
	func_889(-1550406539, 1, 0f, 0, 0, 0, 1, 0);
	func_866(0, 0);
	func_890(iVar1199, 0, 0);
	iLocal_485 = create_tracked_point();
	iLocal_486 = create_tracked_point();
	iLocal_487 = create_tracked_point();
	return true;
}

void func_429(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_430(char[4] cParam0)
{
	func_891(cParam0);
	func_892(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_859(cParam0);
		}
	}
	func_893(cParam0);
	func_894(cParam0);
	func_895(cParam0);
	func_896(cParam0);
	func_897(cParam0);
	func_898(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_899(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_271(cParam0) == 0)
	{
		func_424(cParam0);
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
			if (func_900(cParam0, iVar0, 0))
			{
				if (func_901(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_901(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_901(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_371(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_902(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_903(cParam0);
					func_904(cParam0, iVar0, 1);
				}
				else
				{
					func_904(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_862(cParam0))
			{
				if (func_905(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_860(cParam0, 4);
					}
					func_904(cParam0, iVar0, 2);
				}
			}
			else if (func_906(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_860(cParam0, 4);
				}
				func_904(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_900(cParam0, iVar0, 2))
			{
				if (!func_907(cParam0))
				{
					func_904(cParam0, iVar0, 4);
					if (func_908(cParam0, iVar0, iVar1))
					{
						func_904(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_909(cParam0);
					func_904(cParam0, iVar0, 3);
					if (func_910(cParam0, iVar0))
					{
						func_904(cParam0, iVar0, 4);
						if (func_908(cParam0, iVar0, iVar1))
						{
							func_904(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_911(cParam0))
			{
				func_910(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_910(cParam0, iVar0))
			{
				func_904(cParam0, iVar0, 4);
				if (func_908(cParam0, iVar0, iVar1))
				{
					func_904(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_908(cParam0, iVar0, iVar1))
			{
				func_904(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_912(cParam0);
				func_913(cParam0, iVar0);
				func_914(cParam0);
				func_915(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_916(cParam0, iVar1))
					{
						func_917(cParam0, iVar1);
					}
				}
			}
			if (func_900(cParam0, iVar0, 5))
			{
				if (func_900(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_918(cParam0, func_33(cParam0));
					}
					func_919(cParam0, iVar1);
					func_892(cParam0);
					return true;
				}
				else
				{
					func_904(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_920(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_921(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_922("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_923(cParam0))
					{
						func_904(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_860(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_257(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_912(cParam0);
				func_913(cParam0, iVar0);
				func_914(cParam0);
				func_915(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_916(cParam0, func_35(cParam0)))
					{
						func_917(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_921(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_900(cParam0, iVar0, 5))
				{
					if (func_924(cParam0))
					{
						func_904(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_924(cParam0);
					func_904(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_900(cParam0, iVar0, 5);
				func_925(cParam0);
			}
			break;
		case 7:
			if (func_900(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_918(cParam0, func_33(cParam0));
				}
				func_919(cParam0, iVar1);
				func_892(cParam0);
				return true;
			}
			break;
		default:
			func_904(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_431(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_432(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_500(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_433(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_434(int iParam0, int iParam1)
{
	func_926(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_435(int iParam0, int iParam1)
{
	if (!func_433(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_436(int iParam0, int iParam1)
{
	func_927(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_437(int iParam0, int iParam1)
{
	if (!func_433(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_438(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_439(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_440(int iParam0, int iParam1)
{
	if (!func_439(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_441(int iParam0, int iParam1)
{
	if (!func_439(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_442(int iParam0)
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

void func_443(int iParam0, bool bParam1)
{
	if (!func_433(iParam0))
	{
		return;
	}
	if ((bParam1 && func_928(iParam0, 512)) || (!bParam1 && !func_928(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_435(iParam0, 512);
	}
	else
	{
		func_437(iParam0, 512);
	}
	if (func_929(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_444(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_445(int iParam0, int iParam1)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_449(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_580(iParam0, 1399091007))
	{
		func_930(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_446(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_444(iParam0, 0))
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
	if (!func_931())
	{
		func_932(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_933(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_933(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_581(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_449(iParam0);
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
	else if (!func_934(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_935(_create_var_string(10, &cVar2, _create_var_string(0, func_626(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_580(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_626(iParam0));
	}
	func_686(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_447(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return Var0;
	}
	if (func_580(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_580(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_580(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_580(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

int func_448(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_449(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_445(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_936(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_937(bParam2), iParam0, 0);
	return iVar2;
}

int func_449(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_450(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_938(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_940(&Var0, func_939(0));
	}
	if (!func_941(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_942(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_943(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_944(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_451(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_667(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_945(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_946(iParam0, Var0, Var0.f_4, bParam4) };
	return func_943(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_452(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_937(bParam0));
}

void func_453(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_580(iParam0, 606799272))
		{
			func_947(iParam0, iParam1);
		}
		if (func_580(iParam0, -1112814642) && func_580(iParam0, -1697809989))
		{
			func_607(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_454(int iParam0)
{
	if (func_948(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_455()
{
	return true;
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

bool func_460(int iParam0)
{
	return func_949(iParam0, 2);
}

int func_461(int iParam0)
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

int func_462(int iParam0)
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

int func_463(int iParam0)
{
	return iParam0 & 31;
}

bool func_464()
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

int func_465(int iParam0)
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

int func_466(int iParam0)
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

void func_467(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_468()
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

int func_469(int iParam0)
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

void func_470(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_471(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_950(iParam0);
	}
	else
	{
		func_951(iParam0, iParam1);
	}
	func_952();
}

bool func_472(int iParam0)
{
	iVar0 = func_953(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_473(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	switch (func_187(iParam0))
	{
		case 1:
			switch (func_264(iParam0))
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
			switch (func_264(iParam0))
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

void func_474(int iParam0)
{
	iVar2 = func_937(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_584(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_955(func_954(iParam0), 6);
}

void func_475(int iParam0)
{
	iVar2 = func_937(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_584(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_956(func_954(iParam0), 6);
}

int func_476(int iParam0)
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

int func_477(int iParam0)
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
	func_957(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_478(int iParam0)
{
	return iParam0 != 0;
}

bool func_479(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_480(int iParam0, var uParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_958(iParam0, *uParam1, 0);
	func_959(uParam1);
	Global_1935183->f_24 = 1;
}

void func_481(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_482(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_535() - fParam1);
	func_960(fParam0, 1);
	func_961(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_483(float fParam0)
{
	return func_211(*fParam0, 2);
}

int func_484()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_485(bool bParam0)
{
	if (func_962())
	{
		Global_1357509 = 1;
	}
	if (func_963(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_486(int iParam0, int iParam1)
{
	Var0 = { func_964(iParam0, iParam1) };
	Var0.f_3 = func_965(iParam0, iParam1);
	return Var0;
}

int func_487(int iParam0)
{
	if (func_187(iParam0) == 1)
	{
		return func_264(iParam0);
	}
	return -1;
}

int func_488(int iParam0)
{
	if (func_187(iParam0) == 8)
	{
		return func_264(iParam0);
	}
	return -1;
}

char[] func_489(int iParam0)
{
	if (!func_265(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_490(int iParam0, bool bParam1)
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
		func_966(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_277();
	}
}

void func_491(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_363(vParam1, 1);
}

bool func_492(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_493(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_494(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_495(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_496(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_497(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_498()
{
	return Global_1109400->f_245;
}

bool func_499(var uParam0, int iParam1)
{
	return func_386(uParam0->f_64, iParam1);
}

bool func_500(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_501(int iParam0)
{
	return func_689(iParam0, 16, 1);
}

void func_502(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_967(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_968(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_503(int iParam0)
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

void func_504(int iParam0)
{
	func_969(iParam0, 8, 0);
}

void func_505(int iParam0, bool bParam1)
{
	if (!func_970(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_971(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_969(iParam0, 1, 0);
		}
	}
	func_969(iParam0, 16, bParam1);
}

void func_506(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (func_501(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_972(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_505(iParam0, 0);
	func_969(iParam0, 4, 0);
	func_504(iParam0);
	func_973(iParam0);
	func_974(iParam0, 37, 1);
	bVar0 = func_382(Global_1360165[iParam0], 0);
	iVar1 = func_975(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_976(iParam0, 64, 1))
	{
		func_974(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_974(iParam0, 33, 1);
		func_974(iParam0, 34, 1);
		func_977(iParam0, 1056964608, -1, 1061158912);
		func_978(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_972(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_972(iParam0, 35, 1);
			if (bParam8)
			{
				func_972(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_979(iParam0, 0);
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
		func_974(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_972(iParam0, 33, 1);
		func_978(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_538(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_972(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_980(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_976(iParam0, 45, 1))
	{
		func_974(iParam0, 45, 1);
	}
	func_981(iParam0, 16, 1);
	func_974(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_382(func_982(iParam0), 0))
		{
			func_983(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_507(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_254(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_514(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_514(iParam0);
	}
}

bool func_508(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_509(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_510(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_511(int iParam0)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	if (!func_323())
	{
		return true;
	}
	return false;
}

void func_512(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_515(iParam0))
	{
		return;
	}
	iVar0 = func_207(iParam0);
	func_985(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_511(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_986(iParam0, 0);
	func_514(iParam0);
}

bool func_513(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_253(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_514(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_515(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_516(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_207(iParam0);
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
	if (func_987(iParam0, 64))
	{
		func_509(iParam0);
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
	bVar3 = func_582(42);
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
				func_988(&((*Global_1900383)[iParam0]->f_27));
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
		func_509(iParam0);
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
		if (func_989(1) < 1)
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
		func_990(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_987(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_991(iParam0);
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
	fVar15 = func_992(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_993(iParam0))
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
		func_994((*Global_1900383)[iParam0]->f_26);
		func_995((*Global_1900383)[iParam0]->f_26);
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
	if (func_852(iVar0) && !bVar9)
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
	iVar21 = func_989(iParam0);
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

int func_517(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_518(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_519(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_520(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_521(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_522(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_515(iParam0))
	{
		return false;
	}
	iVar0 = func_207(iParam0);
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

void func_523(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_515(iParam0))
	{
		return;
	}
	iVar0 = func_207(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_524(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_525(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_996())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_686(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_997(iVar0);
			func_998(iVar0, 0, 0);
		}
		func_686(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_526(int iParam0)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	return func_243(iParam0, 67108864);
}

void func_527(int iParam0)
{
	StringCopy(&cVar0, func_999(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1000(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_528(int iParam0)
{
	StringCopy(&cVar0, func_999(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1000(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_529(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_530(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_531(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_532(int iParam0)
{
	if (!func_495(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_533(int iParam0)
{
	if (func_495(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_534(int iParam0)
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

float func_535()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_536(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1001(iParam0) == 1 && bParam7)
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

int func_537(int iParam0)
{
	if (!func_970(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_538(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_539(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1002(iParam0);
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

int func_540(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_553(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_541(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_542(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_543()
{
	return Global_40.f_11095.f_35;
}

void func_544(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1003(iParam0, 0);
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
		func_545(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_545(int iParam0)
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
			func_1003(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1004(1);
	}
}

bool func_546(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_547()
{
	iVar0 = func_1005((*Global_1347702)[9]->f_15);
	iVar1 = func_1005((*Global_1835011)[69]->f_1);
	if (func_1006(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_548(int iParam0)
{
	if (!func_181(iParam0))
	{
		return false;
	}
	return func_319((*Global_1835011)[iParam0]->f_1, 1);
}

int func_549(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1007(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1008(iVar6);
	}
	return iVar5;
}

int func_550(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1009(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_551(int iParam0, bool bParam1)
{
	func_1010(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_552(int iParam0)
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

void func_553(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_551(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_554(2, *uParam0);
		}
		else
		{
			func_555(2, *uParam0);
		}
	}
	func_1011(uParam0);
}

void func_554(int iParam0, int iParam1)
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

void func_555(int iParam0, int iParam1)
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

void func_556(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1012(iParam0, iParam1, bParam2);
}

int func_557(int iParam0)
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

int func_558(int iParam0)
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

void func_559(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1013();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1014(iParam0);
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
	if (func_582(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1015())
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
	Global_40.f_11095.f_35 = func_301(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1013();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1016(iVar1);
		func_1018(func_1017(), 0, 4000);
		func_1019(Global_40.f_11095.f_35);
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
		func_1020(0);
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
				if (iParam0 > func_558(14))
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
					sParam4 = func_1021(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_558(4))
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
					sParam4 = func_1021(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_353(10, 1);
	}
}

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_561(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_562(int iParam0)
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

bool func_563(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1022(iParam0) && func_1023(iParam0))
		{
			func_1024(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_564(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1025(iParam0, iParam1);
	Var0 = { func_667(iParam0, 0, 1) };
	iVar5 = func_1026(iParam0, &Var0, 0, 0);
	iVar6 = func_1027(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_580(iParam0, -2051813666))
		{
			func_317(583, 1);
		}
		else
		{
			func_317(582, 0);
		}
	}
	if (func_1028(iParam0, &Var0, *iParam1, 0, 0))
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

void func_565(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_638(iParam0, -949239683))
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

bool func_566(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_567(iParam0) != 0;
}

int func_567(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1029())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1030(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_568(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_569(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1029())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_568(iVar0))
		{
			if (func_339(func_1030(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_570(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1031(48);
	func_358(0, -1);
}

bool func_571(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_319((*Global_1347702)[iParam0]->f_15, 1);
}

int func_572(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_573(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_574(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_319((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_575(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	return func_183((*Global_1347702)[iParam0]->f_15);
}

int func_576()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_339(func_1032(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_577(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_390() && (func_575(38) || func_571(38)))
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
			if (func_390() && (func_575(39) || func_571(39)))
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
			iVar9 = func_1033(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_390() && (func_575(41) || func_571(41)))
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
			if (func_390() && (func_575(49) || func_571(49)))
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
			iVar9 = func_1033(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1034(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1035(iParam0, iVar13, iVar14))
	{
	}
	if (func_1036(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1037(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1038(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1039(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1040(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_578(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_390() && (func_575(38) || func_571(38)))
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
			if (func_390() && (func_575(39) || func_571(39)))
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
			if (func_390() && (func_575(49) || func_571(49)))
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
		if (func_390() && (func_575(38) || func_571(38)))
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
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_692(_create_var_string(2, sVar0), _create_var_string(2, func_1042(func_573(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_390() && (func_575(39) || func_571(39)))
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
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_390() && (func_575(49) || func_571(49)))
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
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1041(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_580(int iParam0, int iParam1)
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

bool func_581(int iParam0, int iParam1)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_582(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return false;
	}
	return func_1044(iParam0);
}

void func_583(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return;
	}
	func_1045(iParam0);
	func_1046(iParam0);
}

int func_584(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_585(int iParam0, bool bParam1)
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
	if (func_444(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1047(iVar0) || func_122(iVar0))
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

int func_586(int iParam0, bool bParam1)
{
	if (!func_444(iParam0, 0))
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

void func_587(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_670(iParam0))
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

bool func_588(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_667(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1048((386 + iVar28), 1);
			if (func_1049(iParam0, &Var0, iVar5, 0))
			{
				if (func_1050(iParam0, &Var6, iVar5))
				{
					Var29 = { func_946(iParam0, Var0, iVar5, 0) };
					func_943(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_452(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_589(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1051(iParam0, iParam1);
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

bool func_589(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_591(iParam0))
	{
		return false;
	}
	if (!func_452(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_590(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_586(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_587(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1052(iVar0);
			}
		}
		if (!func_1028(iParam0, &uVar1, 1, 0, 0))
		{
			func_1024(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1053(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_588(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_588(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_588(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1015())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1054(iVar0))
				{
					func_588(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_588(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1055(Global_35, 2, 0, 1);
				if ((((func_670(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_582(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_670(iVar7) && func_582(24))
				{
					if (!func_588(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_588(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_588(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_317(480, 1);
	}
	return true;
}

bool func_591(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_592(int iParam0, int iParam1, int iParam2)
{
	if (!func_591(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_670(iVar4))
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
	if (func_339(611073244, 1, 0) && iParam2 == -897553835)
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
		func_627(func_1056(iParam0), func_626(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_319((*Global_1835011)[14]->f_1, 1))
			{
				func_317(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_452(0))
	{
		if (func_589(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_632(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_593(int iParam0)
{
	if ((iParam0 == -615217896 && !func_330()) || iParam0 != -615217896)
	{
		if (func_1057(Global_35, iParam0, &uVar0))
		{
			func_611(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_617();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_617();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_617();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_615();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_613();
			break;
	}
}

void func_594(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_613();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_614();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_615();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_616();
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
			func_617();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1058();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1059();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_595(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_596(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_597(int iParam0)
{
	bVar0 = func_580(iParam0, -2017733358);
	if (func_1060() < 3)
	{
		if (bVar0)
		{
			if (func_1062(func_1061(iParam0), iParam0))
			{
				func_627(79, func_626(func_1061(iParam0)), 1);
			}
			else
			{
				func_627(78, func_626(func_1061(iParam0)), 1);
			}
		}
		else
		{
			func_627(80, func_626(func_1063(iParam0)), 1);
		}
	}
}

bool func_598()
{
	if (((((func_1064(839908568, 400) || func_1064(-1134030454, 400)) || func_1064(623353496, 400)) || func_1064(-344413337, 400)) || func_1064(-1664948962, 400)) || func_1064(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_599(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_703(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_524(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_525(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_600(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_577(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_579(51, 0, 0, 0, 0, -1, 0);
			func_1065(8192);
			break;
		case 581047644:
			func_577(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_579(51, 0, 0, 0, 0, -1, 0);
			func_1065(524288);
			break;
		case -644199619:
			func_577(39, 0, 0, 0, 0, 0, 1, 0);
			func_579(39, 0, 0, 0, 0, -1, 0);
			func_1066(16);
			break;
		case 684296857:
			func_577(41, 0, 0, 0, 0, 0, 1, 0);
			func_579(41, 0, 0, 0, 0, -1, 0);
			func_1067(8);
			break;
		case 466137807:
			func_577(49, 0, 0, 0, 0, 0, 1, 0);
			func_579(49, 0, 0, 0, 0, -1, 0);
			func_1068(16);
			break;
		case -1087522507:
			func_577(43, 0, 0, -1791518714, func_1069(1), 0, -1, 0);
			func_1070(1);
			break;
		case -405829000:
			func_577(43, 0, 0, -2087881550, func_1069(2), 0, -1, 0);
			func_1070(2);
			break;
		case 378660860:
			func_577(43, 0, 0, 1908068621, func_1069(4), 0, -1, 0);
			func_1070(4);
			break;
		case 1566111097:
			func_577(43, 0, 0, 1611247019, func_1069(8), 0, -1, 0);
			func_1070(8);
			break;
		case 1276007140:
			func_577(43, 0, 0, 1319635688, func_1069(16), 0, -1, 0);
			func_1070(16);
			break;
	}
}

void func_601(int iParam0)
{
	if (func_1071() == 1)
	{
		if (func_571(39))
		{
			func_317(342, 0);
		}
		else
		{
			func_317(343, 0);
			func_1066(1);
		}
	}
	if (func_1071() >= 30)
	{
		func_317(344, 0);
	}
	func_577(39, 0, 0, 0, 0, 0, -1, 0);
	func_579(39, 0, 0, func_1071(), 30, 1, 0);
}

void func_602(int iParam0)
{
	if (func_1072() == 1)
	{
		if (func_571(49))
		{
			func_317(409, 0);
		}
		else
		{
			func_317(410, 0);
			func_1068(1);
		}
	}
	if (func_1072() >= 10)
	{
		func_317(411, 0);
	}
	func_577(49, 0, 0, 0, 0, 0, -1, 0);
	func_579(49, 0, 0, func_1072(), 10, 1, 0);
}

void func_603(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_317(437, 0);
			func_317(440, 0);
			func_1073(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_577(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_579(51, 0, 0, sVar0, func_1033(-949689219, 20), 1, 0);
			func_1065(1);
			func_1074(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1073(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_577(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_579(51, 0, 0, sVar0, func_1033(-1248968496, 20), 1, 0);
			func_1065(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1073(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_577(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_579(51, 0, 0, sVar0, func_1033(1706369307, 20), 1, 0);
			func_1065(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1073(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_577(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_579(51, 0, 0, sVar0, func_1033(1520110311, 20), 1, 0);
			func_1065(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_317(438, 0);
			func_1073(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_577(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_579(51, 0, 0, sVar0, func_1033(-1992824800, 20), 1, 0);
			func_1065(32768);
			break;
		default:
			func_317(439, 0);
			break;
	}
}

void func_604()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_605(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_571(43))
		{
			if (iParam0 == 281887510)
			{
				func_317(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_317(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_317(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_317(400, 0);
			}
		}
		else if (func_580(iParam0, 412399755))
		{
			func_1075(-1791518714);
			if (func_1076() == 0)
			{
				func_358(0, 10);
				iVar1 = func_1077(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_571(44))
		{
			if (iParam0 == -222563712)
			{
				func_317(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_317(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_317(401, 0);
			}
		}
		else if (func_580(iParam0, 709057512))
		{
			func_1075(-2087881550);
			if (func_1076() == 1)
			{
				func_358(0, 10);
				iVar1 = func_1077(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_571(45))
		{
			if (iParam0 == 2116770557)
			{
				func_317(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_317(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_317(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_317(398, 0);
			}
		}
		else if (func_580(iParam0, -1478961327))
		{
			func_1075(1908068621);
			if (func_1076() == 2)
			{
				func_358(0, 10);
				iVar1 = func_1077(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1080(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1081(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1031(48);
					}
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_571(46))
		{
			if (iParam0 == 2085530337)
			{
				func_317(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_317(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_317(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_317(406, 0);
			}
		}
		else if (func_580(iParam0, -1238404098))
		{
			func_1075(1611247019);
			if (func_1076() == 3)
			{
				func_358(0, 10);
				iVar1 = func_1077(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_571(47))
		{
			if (iParam0 == -1521783510)
			{
				func_317(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_317(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_317(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_317(403, 0);
			}
		}
		else if (func_580(iParam0, 1160548794))
		{
			func_1075(1319635688);
			if (func_1076() == 4)
			{
				func_358(0, 10);
				iVar1 = func_1077(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1078(iParam0) < func_1079(iParam0))
					{
						func_577(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_579(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_606(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1080(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1081(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1031(48);
		}
	}
}

void func_607(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_339(func_1082(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1083(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1084(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_608(int iParam0, int iParam1, int iParam2)
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
				func_599(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_599(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_599(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_599(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_599(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_599(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_599(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_599(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_599(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_599(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_599(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_599(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_599(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1085())
			{
				func_599(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_599(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_599(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_599(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_599(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_599(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_599(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_599(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_599(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_599(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_599(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_599(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_599(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_609(int iParam0)
{
	if (func_571(41))
	{
		func_317(363, 0);
	}
	else
	{
		func_317(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1086(-1865241121);
			func_1087(-642026005);
			func_1088(-642026005);
			func_358(0, 10);
			break;
		case -2108314374:
			func_1086(2117142684);
			func_1087(-940584364);
			func_1088(-940584364);
			func_358(0, 10);
			break;
		case -1193798153:
			func_1086(-1409326024);
			func_1087(1972645282);
			func_1088(1972645282);
			func_358(0, 10);
			break;
		case -787702678:
			func_1086(-641744968);
			func_1087(1667205433);
			func_1088(1667205433);
			func_358(0, 10);
			break;
		case -804542901:
			func_1086(-946988203);
			func_1087(1362715885);
			func_1088(1362715885);
			func_358(0, 10);
			break;
		case -1696275132:
			func_1086(-646136018);
			func_1087(1053540370);
			func_1088(1053540370);
			func_358(0, 10);
			break;
		case -161595323:
			func_1086(-955835837);
			func_1087(-1100103852);
			func_1088(-1100103852);
			func_358(0, 10);
			break;
		case -1114363619:
			func_1086(-179276075);
			func_1087(-1409869209);
			func_1088(-1409869209);
			func_358(0, 10);
			break;
		case -368407134:
			func_1086(-492711560);
			func_1087(-1760235357);
			func_1088(-1760235357);
			func_358(0, 10);
			break;
		case 1997759228:
			func_1086(1764383959);
			func_1087(-138366827);
			func_1088(-138366827);
			func_358(0, 10);
			break;
		case 1265573293:
			func_1086(317501533);
			func_1087(-1261163843);
			func_1088(-1261163843);
			func_358(0, 10);
			break;
		case -1030441283:
			func_1086(817753087);
			func_1087(-963523016);
			func_1088(-963523016);
			func_358(0, 10);
			break;
		case -1490884871:
			func_1086(576606016);
			func_1087(560825326);
			func_1088(560825326);
			func_358(0, 10);
			break;
		case -395458616:
			func_1086(814934957);
			func_1087(858269539);
			func_1088(858269539);
			break;
	}
}

void func_610(int iParam0, int iParam1)
{
	func_930(iParam0, iParam1, &uVar0);
}

int func_611(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_667(iParam1, 1, 0) };
		iParam3 = func_668(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1089(iParam1, iParam2, func_655(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1090(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_655(iParam3, 1)])
			{
				func_666(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1091(32768) && iParam1 != &Global_1946804->f_57[func_655(iParam3, 1)])
			{
				func_1092();
				func_666(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_666(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1093(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_666(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1094(0);
			func_1095(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_666(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_612(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1055(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1055(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1096("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_942(&Var3, iVar2, iVar0, iVar1))
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
						func_944(iVar0);
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

void func_613()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_614()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_615()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_616()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_617()
{
	func_1097();
	func_1098();
	func_1099();
}

void func_618(int iParam0, int iParam1, bool bParam2)
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

void func_619(int iParam0, bool bParam1)
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
	func_1041(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_620(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_621(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_622(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_623(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_624(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_625(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_626(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	func_662(iParam0, &iVar0, &iVar1);
	if (!func_663(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1100(iParam0, 1024))
	{
		return;
	}
	func_664(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_628(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_662(iParam0, &iVar0, &iVar1);
	if (!func_663(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1100(iParam0, 1024))
	{
		return;
	}
	func_664(iVar0, iVar1);
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

int func_629()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1029())
	{
		return func_630();
	}
	iVar4 = (func_1029() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1029())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1101(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1030(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_630()
{
	iVar0 = get_random_int_in_range(0, func_1029());
	return func_1030(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_631(int iParam0)
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

bool func_632(int iParam0, int iParam1, int iParam2)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_667(iParam0, 0, 1) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	return func_1102(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_633(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_584(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1103(81053684, 0) <= 0)
			{
				func_666(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_666(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1104(iParam0);
			if (func_1105(iVar0))
			{
				func_1106(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_666(30, iParam0, 0, 0, 0);
			}
			if (func_657() == -2125499975 || func_657() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_666(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_657() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_666(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1107(-525676072, 0))
			{
				if (func_1108(-525676072, &iVar1))
				{
					func_666(33, iVar1, 0, 0, 0);
				}
			}
			func_666(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1109(99217379))
		{
			func_611(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_583(24);
		if (func_612(&iVar2, 0))
		{
			func_588(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_634(int iParam0)
{
	if (func_580(iParam0, 943695443))
	{
		func_1110(0, iParam0);
	}
	else if (func_580(iParam0, -2096528786))
	{
		func_1110(1, iParam0);
	}
	else if (func_580(iParam0, -1094167013))
	{
		func_1110(2, iParam0);
	}
	else if (func_580(iParam0, 1936654645))
	{
		func_1110(3, iParam0);
	}
	else if (func_580(iParam0, 1306489306))
	{
		func_1110(4, iParam0);
	}
	else if (func_580(iParam0, 435762317))
	{
		func_1110(5, iParam0);
	}
	else if (func_580(iParam0, 1259363210))
	{
		func_1110(6, iParam0);
	}
	else if (func_580(iParam0, 881398259))
	{
		func_1110(7, iParam0);
	}
	else if (func_580(iParam0, -541549214))
	{
		func_1110(8, iParam0);
	}
	else if (func_580(iParam0, 130796156))
	{
		func_1110(-1, iParam0);
	}
}

int func_635(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1111(&Var4, 1356624740);
	return func_1112(iParam0, &Var4, &uVar0, iParam1);
}

void func_636(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_319((*Global_1835011)[4]->f_1, 1))
				{
					func_317(109, 1);
				}
			}
			break;
	}
}

void func_637(int iParam0, char* sParam1)
{
	sVar0 = func_1114(func_1113(0));
	func_686(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1115(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_638(int iParam0, int iParam1)
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

struct<10> func_639(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_640(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_641(int iParam0, int iParam1)
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

bool func_642(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1116(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1116(iParam0, Var2, 1))
				{
					if (func_1117(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1117(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_317(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_189(0, 0, 1))
		{
			func_358(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_643(int iParam0)
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

void func_644(int iParam0)
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
		func_317(iVar0, 0);
	}
}

void func_645()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1118(0);
			_unlock_set_unlocked(-121456797, false);
			func_1119();
		}
		return;
	}
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1120();
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
	func_1118(1);
}

void func_646()
{
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_310(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_647()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1121(0);
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
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1121(1);
}

void func_648()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1122(15000, 0, 0, 0, 1);
			func_1121(0);
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
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_275(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1121(1);
}

void func_649()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_339(1191437462, 1, 0) && !func_183((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_310(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1123(1))
			{
				func_623(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_339(1119149048, 1, 0) && !func_183((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_310(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1123(2))
			{
				func_623(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1123(4))
		{
			func_623(4);
		}
		if (func_1123(0))
		{
			func_1124(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_339(1191437462, 1, 0))
			{
				func_168(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_339(1119149048, 1, 0))
			{
				func_168(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1123(1))
		{
			func_1124(1);
		}
		if (func_1123(2))
		{
			func_1124(2);
		}
		if (func_1123(4))
		{
			func_1124(4);
		}
		if (!func_1123(0))
		{
			func_623(0);
		}
	}
}

void func_650()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1125() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_587(127400949);
		if (func_588(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1125() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1126(-2055673461, Var1, 1423542233);
		func_1126(-202131179, Var1, -1264898804);
		func_1126(2013836545, Var1, 1592019450);
		func_1126(1497476650, Var1, 1117400455);
		func_1126(1063571467, Var1, 1150213537);
		func_1126(2107224237, Var1, 1598825281);
		func_1126(1747981656, Var1, -712527121);
		func_1126(-1371140647, Var1, 454332195);
		func_1126(-19142973, Var1, 256105670);
		func_1126(-2074737817, Var1, -1328061889);
		func_1126(-1114256243, Var1, -782241404);
		func_1126(-1653277288, Var1, 1669853467);
		func_1126(1869398132, Var1, -1559225678);
		func_1126(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_670(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_582(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_582(24) && func_670(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_670(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_582(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_651()
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

bool func_652(int iParam0)
{
	switch (func_584(iParam0))
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

void func_653(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_584(iParam0))
	{
		case -2061583405:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1127(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1128();
	}
	if (bParam1)
	{
		func_1129(0, 0);
	}
}

int func_654(int iParam0)
{
	Var0 = { func_667(iParam0, 1, 0) };
	return func_668(Var0.f_4);
}

int func_655(int iParam0, int iParam1)
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

void func_656(int iParam0)
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
		iVar0 = func_655(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1130(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_657()
{
	return Global_1946804->f_1;
}

bool func_658(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1131(iParam6);
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
		func_1133(uParam0, func_1132(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_655(iVar3, 1);
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
							if (func_1134(iVar3) && func_1135(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1136(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_659(int iParam0, int iParam1)
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

int func_660(int iParam0, int iParam1)
{
	vVar0 = { func_659(iParam0, iParam1) };
	return vVar0.x;
}

void func_661(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_662(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_663(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1137(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1138(iParam0))
	{
		return false;
	}
	if (func_1139(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1100(iParam0, 1)) || func_82(32768))
	{
		if (!func_1100(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1140())
	{
		return false;
	}
	return true;
}

void func_664(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_665(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_666(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1141(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1142(Var0);
}

struct<5> func_667(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1143(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_449(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_946(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_939(bParam1) };
			if (bParam2 && func_1144(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1049(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1049(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1050(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1145(bParam1) };
			switch (func_584(iParam0))
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
			if (func_1146(iParam0, -1823706425))
			{
				Var0 = { func_946(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1146(iParam0, -1483207246))
			{
				Var0 = { func_946(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1147(Var0, &Var27, bParam1, 0))
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

int func_668(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1148(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_669(int iParam0)
{
	func_1130(Global_1946804->f_1497.f_1[func_655(iParam0, 1)], 2, 6);
	func_1130(Global_1946804->f_1378.f_1[func_655(iParam0, 1)], 2, 6);
}

bool func_670(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_671(int iParam0)
{
	return iParam0 != 0;
}

int func_672(int iParam0)
{
	iVar0 = -1;
	if (!func_671(iParam0))
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

bool func_673(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_674(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1149(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_675(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_676(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_677(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_678(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_679(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_680(int iParam0, int iParam1)
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

void func_681(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1150(iParam0, iParam6);
	func_1151(iParam0, iParam5);
	func_1152(iParam0, iParam4);
	func_1153(iParam0, iParam3);
	func_1154(iParam0, iParam2);
	func_1155(iParam0, iParam1);
}

bool func_682(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_679(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_678(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_677(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_674(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_675(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_676(iParam0);
	if (iVar5 < 1 || iVar5 > func_680(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_683(int iParam0, bool bParam1)
{
	return func_1006(func_277(), iParam0, bParam1);
}

void func_684(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_685(int iParam0, int iParam1)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_445(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1096("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_942(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_670(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_944(iVar1);
				return true;
			}
			iVar3++;
		}
		func_944(iVar1);
	}
	return false;
}

var func_686(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1156(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_687()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1157(iVar1);
		if (!_unlock_is_visible(func_1158(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_688()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1157(iVar0);
		if (!_unlock_is_visible(func_1158(iVar1)))
		{
			_unlock_set_visible(func_1158(iVar1), true);
		}
		iVar0++;
	}
}

bool func_689(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_970(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_690()
{
	return (func_190(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_691(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_444(iVar0, 0))
	{
		return 0;
	}
	if (!func_1159(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1160(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_580(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_667(iVar0, 0, 1) };
	iVar10 = func_1161(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1162(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1163(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_310(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1122(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_692(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_693(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_694(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_695(bool bParam0, bool bParam1)
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

void func_696(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_996())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_996())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_185(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_264(iParam0);
	if (func_187(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_187(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1164(1, iVar1);
					func_1164(8, iVar1);
					func_1164(7, iVar1);
					break;
				case 12:
					func_1164(6, iVar1);
					break;
				case 53:
					func_1164(3, iVar1);
					func_1164(7, iVar1);
					func_1164(4, iVar1);
					break;
				case 20:
					func_1164(8, iVar1);
					break;
				case 19:
					func_1164(1, iVar1);
					func_1164(2, iVar1);
					break;
				case 24:
					func_1164(3, iVar1);
					func_1164(9, iVar1);
					func_1164(20, iVar1);
					break;
				case 28:
					func_1164(1, iVar1);
					break;
				case 34:
					func_1164(23, iVar1);
					func_1164(2, iVar1);
					func_1164(18, iVar1);
					break;
				case 29:
					func_1164(0, iVar1);
					func_1164(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1164(0, iVar1);
					func_1164(3, iVar1);
					func_1164(2, iVar1);
					func_1164(11, iVar1);
					func_1164(6, iVar1);
					func_1164(25, iVar1);
					func_1164(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1164(5, iVar1);
					break;
				case 63:
					func_1164(1, iVar1);
					func_1164(3, iVar1);
					break;
				case 37:
					func_1164(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_354(0, 10, 11, 2116153146))
			{
				func_1164(7, iVar1);
				func_1164(4, iVar1);
			}
			else if (iParam0 == func_354(0, 7, 11, -379687487))
			{
				func_1164(8, iVar1);
				func_1164(15, iVar1);
			}
			else if (iParam0 == func_354(0, 8, 11, -1386089015))
			{
				func_1164(3, iVar1);
			}
			else if (iParam0 == func_354(0, 11, 11, -1952009645))
			{
				func_1164(6, iVar1);
				func_1164(3, iVar1);
			}
			else if (iParam0 == func_354(0, 12, 11, 2065895756))
			{
				func_1164(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1165()));
	if (!func_1166(629))
	{
		func_317(629, 0);
	}
}

int func_697(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_698(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_699(int iParam0, int iParam1, int iParam2)
{
	if (!func_698(iParam0))
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

int func_700()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1167(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_700())
	{
		return -1;
	}
	iVar0 = func_701(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_471(iVar1, 0);
	func_542(iVar1, 0);
	func_1168(iVar1, 0);
	func_1169(iVar1, 0);
	func_1170(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1171(iVar1, iParam4);
	}
	return iVar1;
}

int func_703(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_339(1811977508, 1, 0))
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
			if (func_444(iVar25, 0) && func_580(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_704(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_705(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	cVar0 = func_356(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_706(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_707(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1172(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1173() == 0 && !func_1174(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1175(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1176();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1177(Global_1310720->f_21))
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
			vVar7 = { func_1178(iVar0, iVar1) };
			bVar11 = func_1179(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_391(vVar7)) && func_1180(iVar0, bParam8, iParam12)) && !func_1181(iVar0)) || bVar11)
			{
				if (func_1182(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_708(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1183(vParam0);
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

void func_709()
{
	disable_script_brain_set(1);
}

void func_710()
{
}

void func_711()
{
	disable_script_brain_set(2);
}

bool func_712(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_713(char* sParam0)
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

void func_714(int iParam0)
{
	if (func_712(iParam0, 1))
	{
		func_1184(1);
	}
}

int func_715()
{
	return -1904156936;
}

bool func_716(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	switch (func_187(iParam0))
	{
		case 1:
			iVar0 = func_264(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_264(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_717()
{
	return 166188472;
}

int func_718()
{
	return 2015838421;
}

int func_719()
{
	return 207908017;
}

var func_720(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_721(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_722(var uParam0)
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

int func_723(var uParam0, int iParam1)
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

char* func_724(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1185(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1186(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1187(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_725(var uParam0, char* sParam1)
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

int func_726(var uParam0)
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

void func_727(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_728(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_729()
{
	return Global_1572864->f_8;
}

void func_730(char[4] cParam0, int iParam1)
{
	func_1188(cParam0, iParam1);
	func_1189(cParam0, iParam1, 26);
}

bool func_731(char[4] cParam0)
{
	Global_43838 = 0;
	if (!func_120(cParam0, 4))
	{
		func_1190(&(cParam0->f_7375), "1-Start");
		if (!func_1191(cParam0, 0))
		{
			return false;
		}
	}
	else
	{
		if (get_clock_hours() != 16)
		{
			set_clock_time(16, 0, 0);
		}
		func_1192(cParam0, "MRY3_CONVO", 1);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_732(char[4] cParam0)
{
	if (_does_volume_exist(&(iLocal_1223[4])))
	{
		if (!_0xde0ea444735c1368(&(iLocal_1223[4])))
		{
			_0x19c7567d2f2287d6(&(iLocal_1223[4]), 7);
		}
		uLocal_1288 = func_383(&(iLocal_1223[4]), 0, 0, 0);
		func_877(&(iLocal_1223[4]), 0, 0);
		_0x2fcd528a397e5c88(&(iLocal_1223[4]), 16408);
		_0x2fcd528a397e5c88(&(iLocal_1223[4]), 16384);
	}
	func_888(-596723840);
	func_888(-1762770596);
	_0xcf9da72002fc16bf(&(Local_530[0]), iVar1199, 35);
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
	func_151(cParam0, iVar1199, "Horse_01", 0, 0, 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_733(char[4] cParam0)
{
	if ((!_0xa0bc8faed8cfeb3c(Global_35) || !_0xa0bc8faed8cfeb3c(iVar1199)) || !_0xa0bc8faed8cfeb3c(&(Local_530[0])))
	{
		return false;
	}
	if (func_120(cParam0, 4))
	{
		func_866(0, 0);
	}
	if (func_1193(131072))
	{
		if (func_1194(cParam0, 26, 0, 1, 1))
		{
			return cParam0->f_607 == cParam0->f_607;
		}
	}
	if (func_1193(131072))
	{
		func_1195(131072);
	}
	if (func_1193(32768))
	{
		func_1195(32768);
	}
	if (func_1193(65536))
	{
		func_1195(65536);
	}
	_0x0d7fd6a55fd63aef(6, 3, 1);
	_0x0d7fd6a55fd63aef(24, 3, 1);
	_0x0d7fd6a55fd63aef(14, 3, 1);
	if (!func_871(iVar1199, -982327190))
	{
		task_stand_still(iVar1199, -1);
	}
	iLocal_1286 = _find_closest_active_scenario_point_of_type(2686.604f, -1259.912f, 50.1938f, -1805387726, 10f, 0, false);
	if (_does_scenario_point_exist(iVar1283))
	{
		_set_scenario_point_active(iVar1283, false);
	}
	if (_does_volume_exist(&(iLocal_1223[0])))
	{
		func_173(&uLocal_1291, &(iLocal_1223[0]), 0);
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[0]));
		_0xd17672447692478e(&(iLocal_1223[0]), 0);
	}
	if (_does_volume_exist(&(iLocal_1223[5])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1223[5]), 0, 0, 0);
		uLocal_1290 = func_383(&(iLocal_1223[5]), 0, 0, 10208);
	}
	if (!does_blip_exist(iVar1209))
	{
		iLocal_1212 = func_1196(408396114, vLocal_519, 10f, 1);
		_blip_set_modifier(iVar1209, -1878373110);
	}
	if (!func_26(&uLocal_1193))
	{
		func_27(&uLocal_1193, 0);
	}
	if (!_does_volume_exist(iVar1282))
	{
		uLocal_1285 = _0x0eb78c2b156635b1(-1612834106, 2496.533f, -1446.497f, 46.03777f, 0f, 0f, 0f, 1.134854f, 1.624505f, 1.794976f);
	}
	func_1197();
	set_entity_proofs(&(Local_530[0]), 0, false);
	func_134(cParam0, 0);
	func_135(cParam0, 1);
	func_99(cParam0, 33554432);
	return cParam0->f_607 == cParam0->f_607;
}

int func_734(char[4] cParam0)
{
	if (does_entity_exist(iVar1199))
	{
		if (has_vehicle_asset_loaded(get_entity_model(iVar1199)))
		{
		}
	}
	if (func_1193(131072))
	{
		return 1;
	}
	func_1198(cParam0);
	func_1199(cParam0);
	func_1200(cParam0);
	if (func_454(293111919))
	{
		func_889(726257907, 1, 0f, 0, 0, 0, 1, 0);
		func_889(229021101, 1, 0f, 0, 0, 0, 1, 0);
		func_889(293111919, 1, 0f, 0, 0, 0, 1, 0);
		func_889(-1550406539, 1, 0f, 0, 0, 0, 1, 0);
		func_889(1234907076, 1, 0f, 0, 0, 0, 1, 0);
		func_889(1388233219, 1, 0f, 0, 0, 0, 1, 0);
	}
	set_all_random_peds_flee_this_frame(get_player_index());
	switch (func_1201(cParam0))
	{
		case 0:
			if (!func_386(iVar0, 2))
			{
				func_163(&iVar0, 2);
			}
			if (func_1202(Global_35, vLocal_519, &uLocal_1130, 30f, 20f, 10f, 9f, 1f, 0, 0, 1, 1, 1))
			{
			}
			if (func_1203(Global_35, vLocal_519, 1) <= 10f)
			{
				func_1204(Global_35, &iVar0, 2049, 0, 0, 2f, 2, 0, 0);
			}
			if (!func_873(cParam0))
			{
				return 0;
			}
			if (!func_1205())
			{
				return 0;
			}
			if (func_1203(Global_35, vLocal_519, 1) <= 10f)
			{
				if (!func_1193(536870912))
				{
					_0x660a8f876df1d4f8(6);
					_0x660a8f876df1d4f8(24);
					func_1206(536870912);
				}
				if (!is_ped_on_mount(Global_35))
				{
					if (does_blip_exist(iVar1209))
					{
						remove_blip(&iLocal_1212);
					}
					if (does_blip_exist(iVar1206))
					{
						_blip_set_modifier(iVar1206, -546708623);
					}
					if (func_1207("MRY3_CONVO"))
					{
						func_1208("MRY3_CONVO", 1, 0);
					}
					func_1209(cParam0, "MRY3_OBJ_MARY", -1082130432, 0, 0, -1, -1, 0);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (iLocal_29 == 7)
			{
				if (!func_26(&uLocal_1187))
				{
					func_27(&uLocal_1187, 0);
				}
				func_134(cParam0, 29);
			}
			if ((_0x005e6f28dd7ed58d(&(Local_38[5]), "MaryLinton") || _0xb89fcff19dafff28(&(Local_38[5]), "MaryLinton")) || _get_anim_scene_progress(&(Local_38[5])) >= 1f)
			{
				if (!func_26(&uLocal_1187))
				{
					func_27(&uLocal_1187, 0);
				}
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (func_1210(&uLocal_1187) >= 10f)
			{
				if (!func_378(524288))
				{
					return 1;
				}
			}
			if (!func_378(524288))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_735(var uParam0)
{
	if (func_1193(131072))
	{
		return uParam0->f_607 == uParam0->f_607;
	}
	if (func_1211(&(Local_38[5])))
	{
		if (_does_anim_scene_exist(&(Local_38[5])))
		{
			_delete_anim_scene(&(Local_38[5]));
		}
	}
	if (func_26(&uLocal_1187))
	{
		func_538(&uLocal_1187);
	}
	if (func_26(&uLocal_1178))
	{
		func_538(&uLocal_1178);
	}
	if (iLocal_36 != 0)
	{
		iLocal_36 = 0;
	}
	if (is_ped_group_member(&(Local_530[0]), get_player_group(player_id()), 0))
	{
		remove_ped_from_group(&(Local_530[0]));
	}
	if (does_blip_exist(iVar1209))
	{
		remove_blip(&iLocal_1212);
	}
	if (does_blip_exist(iVar1206))
	{
		_set_blip_flash_style(iVar1206, -546708623);
	}
	func_170(-596723840);
	func_170(-1762770596);
	_0xc67a4910425f11f1(get_player_index(), "MRY3_GRIEF");
	if (!does_entity_exist(iVar1218))
	{
		iLocal_1221 = _0x4d0d2e3d8bc000eb(&(Local_709[5]), "p_broom04x_PH_R_HAND", 1);
	}
	if (_does_volume_exist(&(iLocal_1223[0])))
	{
		_delete_volume(&(iLocal_1223[0]));
	}
	if (_does_volume_exist(&(iLocal_1223[5])))
	{
		_delete_volume(&(iLocal_1223[5]));
	}
	if (_does_volume_exist(&(iLocal_1223[1])))
	{
		_delete_volume(&(iLocal_1223[1]));
	}
	if (_does_volume_exist(iVar1282))
	{
		_delete_volume(iVar1282);
	}
	_0x660a8f876df1d4f8(14);
	if (has_vehicle_asset_loaded(get_entity_model(iVar1199)))
	{
		remove_vehicle_asset(get_entity_model(iVar1199));
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_736(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1212(cParam0, iParam1);
	func_1189(cParam0, iParam1, iParam2);
	func_1213(cParam0, &iParam3, iParam1, 0);
	func_1213(cParam0, &iParam4, iParam1, 2);
	func_1213(cParam0, &iParam5, iParam1, 4);
	func_1213(cParam0, &iParam6, iParam1, 5);
	func_1213(cParam0, &iParam7, iParam1, 7);
	func_904(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1214(cParam0, iParam1, cVar0);
	func_1215(cParam0, iParam1, iParam10);
}

bool func_737(char[4] cParam0)
{
	if (get_clock_hours() != 17)
	{
		set_clock_time(17, 0, 0);
	}
	if (!does_entity_exist(iVar1218))
	{
		iLocal_1221 = create_object(1144273089, 2502.185f, -1441.229f, 45.31293f, true, true, false, false, true);
		return false;
	}
	if (!func_873(cParam0))
	{
		return false;
	}
	if (!func_1205())
	{
		return false;
	}
	if (!func_382(&(Local_709[5]), 0))
	{
		Local_709[5] = func_872(iVar471, func_868(3, 3), func_869(3, 3), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_set_ped_body_component(&(Local_709[5]), 865644342);
		_update_ped_variation(&(Local_709[5]), false, true, true, true, false);
		set_blocking_of_non_temporary_events(&(Local_709[5]), true);
		return false;
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_738(char[4] cParam0)
{
	if (does_entity_exist(iVar1199))
	{
		func_379(iVar1199, func_215(12, 1), 2, 1073741824);
		if (!func_871(iVar1199, -982327190))
		{
			task_stand_still(iVar1199, -1);
		}
	}
	func_889(293111919, 1, 0f, 0, 0, 0, 1, 0);
	func_889(-1550406539, 1, 0f, 0, 0, 0, 1, 0);
	func_889(1388233219, 1, 0f, 0, 0, 0, 1, 0);
	func_889(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	func_889(726257907, 1, 0f, 0, 0, 0, 1, 0);
	func_889(229021101, 1, 0f, 0, 0, 0, 1, 0);
	func_889(865213245, 1, 0f, 0, 0, 0, 1, 0);
	func_889(1797818933, 1, 0f, 0, 0, 0, 1, 0);
	_0xab0d553fe20a6e25(0.75f);
	if (_does_volume_exist(&(iLocal_1223[5])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1223[5]), 0, 0, 0);
		uLocal_1290 = func_383(&(iLocal_1223[5]), 0, 0, 10208);
		_0x19c7567d2f2287d6(&(iLocal_1223[5]), 7);
	}
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
	func_151(cParam0, &(Local_709[0]), "cs_mrlinton", 0, 0, 0, 0);
	func_151(cParam0, &(Local_709[5]), "A_M_M_NBXDOCKWORKERS_01", 0, 0, 0, 0);
	if (does_entity_exist(iVar1218))
	{
		func_417(cParam0, iVar1218, "p_broom04x", 0, 0, 0, 0);
	}
	func_1216(&(Local_530[0]));
	return cParam0->f_607 == cParam0->f_607;
}

bool func_739(char[4] cParam0)
{
	if (!_0xa0bc8faed8cfeb3c(&(Local_530[0])))
	{
		return false;
	}
	func_889(1388233219, 1, 0f, 1, 0, 0, 1, 0);
	func_889(1234907076, 1, 0f, 0, 0, 0, 1, 0);
	_0xab0d553fe20a6e25(0.75f);
	if (!func_26(&uLocal_1121))
	{
		func_1217(&uLocal_1121, 10f, 0);
	}
	if (!does_blip_exist(Local_709[0]->f_1))
	{
		Local_709[0]->f_1 = _blip_add_for_entity(-89429847, &(Local_709[0]));
		set_blip_name_from_text_file(Local_709[0]->f_1, "MRY3_BLIP_FATHER");
		_blip_set_modifier(Local_709[0]->f_1, -401963276);
		_blip_set_modifier(Local_709[0]->f_1, 231194138);
		_blip_set_modifier(Local_709[0]->f_1, 476433942);
	}
	if (!does_entity_exist(iVar1200))
	{
		iLocal_1203 = func_872(iVar471, func_868(7, 0), func_869(7, 0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_set_ped_body_component(iVar1200, 2083890004);
		_update_ped_variation(iVar1200, false, true, true, true, false);
	}
	func_379(&(Local_709[0]), func_215(3, 1), 2, 1073741824);
	if (!_0xde0ea444735c1368(&(iLocal_1223[6])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[6]), 16);
	}
	if (!_0xde0ea444735c1368(&(iLocal_1223[18])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[18]), 16);
	}
	if (!_0xde0ea444735c1368(&(iLocal_1223[7])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[7]), 16);
	}
	if (!_0xde0ea444735c1368(&(iLocal_1223[7])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[7]), 7);
	}
	if (_does_volume_exist(&(iLocal_1223[9])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1223[9]), 0, 0, 0);
		uLocal_1294 = func_383(&(iLocal_1223[9]), 0, 0, 10208);
	}
	if (_does_volume_exist(&(iLocal_1223[5])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[5]));
		_0xd17672447692478e(&(iLocal_1223[5]), 0);
	}
	if (_does_volume_exist(&(iLocal_1223[15])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1223[15]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[19])))
	{
		uLocal_1295 = func_383(&(iLocal_1223[19]), 0, 0, 0);
		_0x2fcd528a397e5c88(&(iLocal_1223[19]), 40);
	}
	if (_does_volume_exist(&(iLocal_1223[20])))
	{
		uLocal_1296 = func_383(&(iLocal_1223[20]), 0, 0, 0);
		_0x2fcd528a397e5c88(&(iLocal_1223[20]), 40);
	}
	use_waypoint_recording_as_assisted_movement_route("mary3_assist_line", 1, 1f, 1f, 1);
	_0x89f5e7adecccb49c(&(Local_709[0]), "moderate_drunk");
	func_1218(&(Local_709[0]->f_2), 0);
	func_1219(&(Local_530[0]->f_169), 0);
	func_134(cParam0, 0);
	func_135(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_740(char[4] cParam0)
{
	if (_0xa24c1d341c6e0d53(1, 0, 1))
	{
		set_ragdoll_blocking_flags(&(Local_530[0]), 8192);
		set_ragdoll_blocking_flags(&(Local_530[0]), 16384);
	}
	else
	{
		clear_ragdoll_blocking_flags(&(Local_530[0]), 8192);
		clear_ragdoll_blocking_flags(&(Local_530[0]), 16384);
	}
	func_1220();
	func_1221();
	func_1222(cParam0);
	func_1223();
	func_1224(cParam0);
	func_1225(cParam0);
	func_1226(cParam0);
	if (func_1227(2097152))
	{
		if ((_does_anim_scene_exist(&(Local_38[3])) && !_is_anim_scene_started(&(Local_38[3]), false)) || !_does_anim_scene_exist(&(Local_38[3])))
		{
			func_1228(&(Local_530[0]), Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
			set_ped_reset_flag(Global_35, 229, true);
			disable_control_action(0, -822242784, false);
			func_1229(cParam0);
		}
	}
	_0xab0d553fe20a6e25(0.5f);
	set_scenario_ped_density_multiplier_this_frame(0.5f);
	_0x9f9a829c6751f3c7(get_player_index(), 28, 1);
	set_ped_reset_flag(Global_35, 189, true);
	set_tracked_point_info(iVar484, get_entity_coords(&(Local_709[0]), true, false), 1f);
	func_1230(0);
	fLocal_493 = func_855(Global_35, &(Local_709[0]), 1, 1);
	if (func_1231(Global_35, &(iLocal_1223[11]), 1, 0))
	{
		set_ped_reset_flag(Global_35, 168, true);
	}
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	switch (func_1201(cParam0))
	{
		case 0:
			if (!func_1227(256))
			{
				func_1232(256);
			}
			if (!func_1227(262144))
			{
				if (is_waypoint_playback_going_on_for_ped(&(Local_709[0]), 0))
				{
					if (get_ped_waypoint_progress(&(Local_709[0])) >= 58)
					{
						_blip_set_modifier(Local_709[0]->f_1, 197772266);
						func_1232(262144);
					}
				}
			}
			if (!func_1227(131072))
			{
				if (!func_378(4194304))
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
					if (has_anim_event_fired(&(Local_530[0]), -772387917))
					{
						func_380(4194304);
					}
				}
				else if (!has_entity_clear_los_to_entity(Global_35, &(Local_530[0]), 17))
				{
					set_ped_max_move_blend_ratio(Global_35, 2f);
				}
				else
				{
					set_ped_max_move_blend_ratio(Global_35, 1.5f);
				}
			}
			if (!func_1227(1))
			{
				if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 17))
				{
					set_ped_max_move_blend_ratio(Global_35, 1.5f);
					func_1232(131072);
				}
			}
			if (func_1231(Global_35, &(iLocal_1223[10]), 1, 0))
			{
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
			}
			if (is_entity_at_coord(&(Local_709[0]), 2611.611f, -1414.558f, 46.26895f, 3.6875f, 3.1875f, 1f, false, true, 0))
			{
				if (is_entity_at_coord(Global_35, 2589.023f, -1433.736f, 46.58189f, 32.375f, 17.75f, 1.625f, false, true, 0))
				{
					if (!func_1227(64))
					{
						func_135(cParam0, 7);
						func_1232(64);
					}
				}
			}
			if (!func_1227(1))
			{
				if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167))
				{
					if (fVar490 <= 10f)
					{
						if (func_26(&uLocal_1121))
						{
							if (func_864(&uLocal_1121) >= 10f)
							{
								if (func_1233(cParam0))
								{
									func_212(&uLocal_1121);
								}
							}
						}
					}
				}
			}
			if (iLocal_28 == 2)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if ((_does_anim_scene_exist(&(Local_38[3])) && _0x005e6f28dd7ed58d(&(Local_38[3]), "Mary")) || !_does_anim_scene_exist(&(Local_38[3])))
			{
				func_1234(&uLocal_1089);
				func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
				func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (does_blip_exist(Local_709[0]->f_1))
			{
				_set_blip_flash_style(Local_709[0]->f_1, 197772266);
			}
			return 1;
	}
	return 0;
}

bool func_741(var uParam0)
{
	iLocal_36 = 0;
	if (func_26(&uLocal_1148))
	{
		func_538(&uLocal_1148);
	}
	_delete_volume(&(iLocal_1223[6]));
	func_1237(&(iLocal_1223[14]));
	if (_does_volume_exist(&(iLocal_1223[9])))
	{
		func_173(&uLocal_1294, &(iLocal_1223[9]), 0);
	}
	if (is_ped_in_group(&(Local_530[0])))
	{
		remove_ped_from_group(&(Local_530[0]));
	}
	if (does_blip_exist(Local_709[0]->f_1))
	{
		remove_blip(&(Local_709[0]->f_1));
	}
	func_172(Local_709[5]);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_742(char[4] cParam0)
{
	iLocal_36 = 0;
	if (func_26(&uLocal_1148))
	{
		func_538(&uLocal_1148);
	}
	if (!func_26(&uLocal_1121))
	{
		func_1217(&uLocal_1121, 10f, 0);
	}
	func_379(Global_35, func_215(0, 5), 2, 1073741824);
	func_379(&(Local_530[0]), func_215(1, 3), 2, 1073741824);
	if (_does_volume_exist(&(iLocal_1223[15])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1223[15]), 0, 0, 0);
	}
	func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
	func_1238(cParam0, "MRY3_FOLLOW_OBJ", 4, 0, 0);
	if (get_clock_hours() != 17)
	{
		set_clock_time(17, 0, 0);
	}
	func_1234(&uLocal_1089);
	func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
	func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_743(char[4] cParam0)
{
	if (!_0xa0bc8faed8cfeb3c(&(Local_530[0])))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(&(Local_709[0])))
	{
		return 0;
	}
	if (func_8(cParam0, 8))
	{
		func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
	}
	_0xab0d553fe20a6e25(0.5f);
	set_scenario_ped_density_multiplier_this_frame(0.5f);
	return 1;
}

bool func_744(char[4] cParam0)
{
	_0xab0d553fe20a6e25(0.75f);
	if (!does_blip_exist(Local_709[0]->f_1))
	{
		Local_709[0]->f_1 = _blip_add_for_entity(-89429847, &(Local_709[0]));
		set_blip_name_from_text_file(Local_709[0]->f_1, "MRY3_BLIP_FATHER");
		_blip_set_modifier(Local_709[0]->f_1, -401963276);
		_blip_set_modifier(Local_709[0]->f_1, 231194138);
		_blip_set_modifier(Local_709[0]->f_1, 476433942);
	}
	if (_does_volume_exist(&(iLocal_1223[22])))
	{
		uLocal_1298 = func_383(&(iLocal_1223[22]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[23])))
	{
		uLocal_1299 = func_383(&(iLocal_1223[23]), 0, 0, 0);
		_0x19c7567d2f2287d6(&(iLocal_1223[23]), 16);
	}
	if (_does_volume_exist(&(iLocal_1223[6])) && !_0xde0ea444735c1368(&(iLocal_1223[6])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[6]), 16);
	}
	if (_does_volume_exist(&(iLocal_1223[18])) && !_0xde0ea444735c1368(&(iLocal_1223[18])))
	{
		_0x19c7567d2f2287d6(&(iLocal_1223[18]), 16);
	}
	func_1218(&(Local_709[0]->f_2), 0);
	func_1219(&(Local_530[0]->f_169), 0);
	func_134(cParam0, 0);
	func_135(cParam0, 1);
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(Local_709[0]), "cs_mrlinton", 0, 0, 0, 0);
	func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
	func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
	func_99(cParam0, 33554432);
	return cParam0->f_607 == cParam0->f_607;
}

int func_745(char[4] cParam0)
{
	func_1239(cParam0);
	func_1240(cParam0);
	func_1241(cParam0);
	func_1229(cParam0);
	_0x9f9a829c6751f3c7(get_player_index(), 28, 1);
	set_ped_reset_flag(Global_35, 189, true);
	_0xab0d553fe20a6e25(0.75f);
	set_tracked_point_info(iVar484, get_entity_coords(&(Local_709[0]), true, false), 1f);
	func_1230(0);
	fLocal_493 = func_855(Global_35, &(Local_709[0]), 1, 1);
	if (!func_378(16))
	{
		if (func_1242(cParam0))
		{
			freeze_entity_position(&(Local_709[1]), true);
			func_151(cParam0, &(Local_709[1]), "cs_ashton", 0, 0, 0, 0);
			func_380(16);
		}
	}
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	if (func_1231(Global_35, &(iLocal_1223[21]), 1, 0))
	{
		set_ped_reset_flag(Global_35, 168, true);
	}
	switch (func_1201(cParam0))
	{
		case 0:
			if (func_1231(Global_35, &(iLocal_1223[22]), 1, 0))
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
			}
			else if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 17))
			{
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
			}
			if (!func_1227(256))
			{
				func_1232(256);
			}
			if (is_entity_at_coord(&(Local_709[0]), 2611.611f, -1414.558f, 46.26895f, 3.6875f, 3.1875f, 1f, false, true, 0))
			{
				if (is_entity_at_coord(Global_35, 2589.023f, -1433.736f, 46.58189f, 32.375f, 17.75f, 1.625f, false, true, 0))
				{
					if (!func_1227(64))
					{
						func_135(cParam0, 7);
						func_1232(64);
					}
				}
			}
			if (!func_1227(1))
			{
				if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167))
				{
					if (fVar490 <= 10f)
					{
						if (func_26(&uLocal_1121))
						{
							if (func_864(&uLocal_1121) >= 10f)
							{
								if (func_1233(cParam0))
								{
									func_212(&uLocal_1121);
								}
							}
						}
					}
				}
			}
			if (!func_1227(128))
			{
				if (is_entity_at_coord(&(Local_709[0]), 2620.297f, -1384.312f, 47.8912f, 5.0625f, 2.9375f, 2.6875f, false, true, 0))
				{
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1243(cParam0, 0))
			{
				if (!func_378(1))
				{
					func_380(1);
				}
				func_1244(cParam0, 0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_746(char[4] cParam0)
{
	func_1245(&(Local_530[0]), 1);
	func_1246(Global_35, 1);
	func_1247(&uLocal_1089);
	set_ped_as_no_longer_needed(&iLocal_1203);
	if (is_ped_in_group(&(Local_530[0])))
	{
		remove_ped_from_group(&(Local_530[0]));
	}
	if (does_blip_exist(Local_709[0]->f_1))
	{
		remove_blip(&(Local_709[0]->f_1));
	}
	if (get_ped_config_flag(Global_35, 299, true))
	{
		set_ped_config_flag(Global_35, 299, false);
	}
	func_173(&uLocal_1298, &(iLocal_1223[22]), 0);
	func_173(&uLocal_1299, &(iLocal_1223[23]), 0);
	if (_does_volume_exist(&(iLocal_1223[23])) && _0xde0ea444735c1368(&(iLocal_1223[23])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[23]));
	}
	if (_does_volume_exist(&(iLocal_1223[6])) && _0xde0ea444735c1368(&(iLocal_1223[6])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[6]));
	}
	if (_does_volume_exist(&(iLocal_1223[18])) && _0xde0ea444735c1368(&(iLocal_1223[18])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1223[18]));
	}
	func_860(cParam0, 33554432);
	func_174(4, 23);
	func_1248(cParam0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_747(char[4] cParam0)
{
	if (!func_1249(6, 11, 1))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(&(Local_709[6])))
	{
		return 0;
	}
	if (!func_1250(cParam0))
	{
		return 0;
	}
	else if (!func_1251(cParam0, 2, 4))
	{
		return 0;
	}
	else
	{
		if (!func_1252(&(Local_709[2]), iVar1213, 0))
		{
			func_1253(Local_709[2], &iLocal_1216, -1, 1);
		}
		if (!func_1252(&(Local_709[3]), iVar1213, 0))
		{
			func_1253(Local_709[3], &iLocal_1216, 0, 1);
		}
		if (!func_1254(&(Local_709[4])))
		{
			func_1255(&(Local_709[4]), &(Local_709[10]), 0, -1, 1);
		}
	}
	if (!func_1256())
	{
		return 0;
	}
	if (!func_1242(cParam0))
	{
		return 0;
	}
	else
	{
		freeze_entity_position(&(Local_709[1]), true);
	}
	func_151(cParam0, &(Local_709[1]), "cs_ashton", 0, 0, 0, 0);
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(Local_709[0]), "cs_mrlinton", 0, 0, 0, 0);
	func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
	if (Global_43838 != 1 && Global_43838 != 2)
	{
		func_379(&(Local_709[1]), func_215(4, 1), 2, 1073741824);
	}
	if (get_clock_hours() != 18)
	{
		set_clock_time(18, 0, 0);
	}
	return 1;
}

bool func_748(var uParam0)
{
	if (_does_volume_exist(&(iLocal_1223[19])))
	{
		uLocal_1295 = func_383(&(iLocal_1223[19]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[20])))
	{
		uLocal_1296 = func_383(&(iLocal_1223[20]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[35])))
	{
		uLocal_1300 = func_383(&(iLocal_1223[35]), 0, 0, 10208);
		_0xe5ef9de716ff737e(&(iLocal_1223[35]), 0, 1);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_749(char[4] cParam0)
{
	set_vehicle_density_multiplier_this_frame(0f);
	if (func_8(cParam0, 8))
	{
		if (!func_1249(6, 11, 1))
		{
			return false;
		}
	}
	if (does_blip_exist(iVar1206))
	{
		remove_blip(&iLocal_1209);
	}
	if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ASHTON")))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ASHTON"));
	}
	func_1218(&(Local_709[1]->f_2), 2);
	func_135(cParam0, 1);
	func_772(iVar1199, 2493.517f, -1445.109f, 45.101f, 2.257f, 2, 1073741824);
	set_tracked_point_info(iVar483, get_entity_coords(&(Local_709[1]), true, false), 1f);
	if (does_entity_exist(iVar1213))
	{
		_0x53ba7d96b9a421d9(Global_35, iVar1213);
	}
	if (!does_blip_exist(iVar1210))
	{
		iLocal_1213 = _blip_add_for_radius(-1282792512, 2592.583f, -1432.581f, 45.4481f, 25f);
		set_blip_name_from_text_file(iVar1210, "MRY3_BLIP_BUYER");
	}
	if (!func_871(&(Local_709[0]), -982327190))
	{
		task_stand_still(&(Local_709[0]), -1);
	}
	if (!func_871(&(Local_530[0]), -982327190))
	{
		task_stand_still(&(Local_530[0]), -1);
	}
	if (!func_871(&(Local_709[1]), -982327190))
	{
		task_stand_still(&(Local_709[1]), -1);
	}
	if (_does_volume_exist(&(iLocal_1223[2])))
	{
		_0x2fcd528a397e5c88(&(iLocal_1223[2]), 8);
		_0x2fcd528a397e5c88(&(iLocal_1223[2]), 40);
		_0xc1799fafd2fdf52b(&(iLocal_1223[2]), 0, 0, 0);
		func_877(&(iLocal_1223[2]), 0, 0);
	}
	_0xc6dcc2a3a8825c85(1);
	if (!func_26(&uLocal_1142))
	{
		func_27(&uLocal_1142, 0);
	}
	if (_does_volume_exist(&(iLocal_1223[24])))
	{
		uLocal_1289 = func_383(&(iLocal_1223[24]), 0, 0, 0);
	}
	func_1216(&(Local_530[0]));
	set_ped_relationship_group_hash(&(Local_530[0]), 1030835986);
	if (func_378(1))
	{
		func_1257(1);
	}
	func_134(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_750(char[4] cParam0)
{
	if (func_26(&uLocal_1142))
	{
	}
	func_1258(cParam0);
	func_1259();
	func_1260();
	set_vehicle_density_multiplier_this_frame(0f);
	set_ped_reset_flag(Global_35, 154, true);
	set_ped_reset_flag(iVar1199, 154, true);
	if (is_waypoint_playback_going_on_for_vehicle(iVar1213, 0))
	{
		vehicle_waypoint_playback_override_speed(iVar1213, 6f);
	}
	if (is_waypoint_playback_going_on_for_ped(&(Local_709[4]), 0))
	{
		waypoint_playback_override_speed(&(Local_709[4]), 1.5f, 0, -1082130432, 0);
	}
	if (!func_871(&(Local_709[11]), -1057545828))
	{
		task_animal_interaction(&(Local_709[11]), &(Local_709[6]), -224471938, 0, 0);
	}
	if (_is_tracked_point_valid(iVar483))
	{
		if (is_tracked_point_visible(iVar483) || has_entity_clear_los_to_entity(Global_35, &(Local_709[1]), 17))
		{
			if (func_26(&uLocal_1142))
			{
				func_538(&uLocal_1142);
			}
		}
	}
	if (func_1231(Global_35, &(iLocal_1223[27]), 1, 0))
	{
		set_ped_reset_flag(Global_35, 168, true);
	}
	switch (func_1201(cParam0))
	{
		case 0:
			func_1261(cParam0);
			func_1262();
			if (is_ped_in_vehicle(&(Local_709[1]), iVar1213, false))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (is_ped_in_vehicle(&(Local_709[1]), iVar1213, true))
			{
				set_vehicle_door_shut(iVar1213, 0, true);
				set_vehicle_door_latched(iVar1213, 0, true, true, true);
				if (!func_871(&(Local_709[2]), -235832601))
				{
					task_vehicle_follow_waypoint_recording(&(Local_709[2]), iVar1213, "mary3_wagon_chase_left", 0, 0, 9740, -1, -1082130432, 0, 1073741824, 0);
				}
			}
			if (func_871(&(Local_709[2]), -235832601))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_751(var uParam0)
{
	destroy_tracked_point(iVar482);
	destroy_tracked_point(iVar483);
	destroy_tracked_point(Local_709[6]->f_16);
	destroy_tracked_point(Local_709[7]->f_16);
	destroy_tracked_point(Local_709[8]->f_16);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_752(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return false;
	}
	else
	{
		if (!func_1251(cParam0, 2, 4))
		{
			return false;
		}
		else
		{
			func_1253(Local_709[2], &iLocal_1216, -1, 1);
			func_1253(Local_709[3], &iLocal_1216, 0, 1);
			func_1255(&(Local_709[4]), &(Local_709[10]), 0, -1, 1);
		}
		set_vehicle_door_shut(iVar1213, 0, true);
		set_vehicle_door_latched(iVar1213, 0, true, true, true);
		_0x53ba7d96b9a421d9(Global_35, iVar1213);
	}
	if (!func_1242(cParam0))
	{
		return false;
	}
	else
	{
		func_1253(Local_709[1], &iLocal_1216, 3, 1);
	}
	if (!func_1249(6, 11, 1))
	{
		return false;
	}
	else if (!func_871(&(Local_709[11]), -1057545828))
	{
		task_animal_interaction(&(Local_709[11]), &(Local_709[6]), -224471938, 0, 0);
	}
	if (!_0xa0bc8faed8cfeb3c(&(Local_709[6])))
	{
		return false;
	}
	if (!func_1256())
	{
		return false;
	}
	func_379(&(Local_530[0]), func_215(1, 4), 2, 1073741824);
	if (Global_43838 == 1)
	{
		func_379(iVar1213, func_215(5, 0), 2, 1073741824);
		func_379(Global_35, func_215(0, 7), 2, 1073741824);
		func_379(&(Local_709[10]), func_215(10, 3), 2, 1073741824);
	}
	else
	{
		func_379(iVar1213, func_215(5, 3), 2, 1073741824);
		func_379(Global_35, func_215(0, 8), 2, 1073741824);
		func_379(&(Local_709[10]), func_215(10, 2), 2, 1073741824);
	}
	if (!does_blip_exist(Local_709[1]->f_1))
	{
		Local_709[1]->f_1 = func_1263(408396114, iVar1213, 1);
		set_blip_name_from_text_file(Local_709[1]->f_1, "MRY3_BLIP_WAGON");
	}
	if (_does_volume_exist(&(iLocal_1223[2])))
	{
		_0x2fcd528a397e5c88(&(iLocal_1223[2]), 8);
		_0x2fcd528a397e5c88(&(iLocal_1223[2]), 40);
		_0xc1799fafd2fdf52b(&(iLocal_1223[2]), 0, 0, 0);
		func_877(&(iLocal_1223[2]), 0, 0);
	}
	if (get_clock_hours() != 18)
	{
		set_clock_time(18, 0, 0);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_753(var uParam0)
{
	if (!func_871(&(Local_709[4]), 658540077))
	{
		if (Global_43838 == 1)
		{
			task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
		}
		else if (Global_43838 == 2)
		{
			task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_754(char[4] cParam0)
{
	_0xbbadfb5e5e5766fb(get_player_index(), 0.35f);
	if (vehicle_waypoint_playback_get_is_paused(iVar1213))
	{
		vehicle_waypoint_playback_resume(iVar1213);
	}
	if (!func_871(&(Local_709[2]), -235832601))
	{
		task_vehicle_follow_waypoint_recording(&(Local_709[2]), iVar1213, "mary3_wagon_chase_left", 0, 0, 9740, -1, -1082130432, 0, 1073741824, 0);
	}
	if (!func_871(&(Local_709[4]), 658540077))
	{
		if (Global_43838 == 1)
		{
			task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
		}
		else
		{
			task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
		}
	}
	if (_does_volume_exist(&(iLocal_1223[37])))
	{
		uLocal_1297 = func_383(&(iLocal_1223[37]), 0, 0, 4096);
	}
	if (!func_26(&uLocal_1139))
	{
		func_27(&uLocal_1139, 0);
	}
	_0x7d654266025e921b(-632030841);
	_0x0751d461f06e41ce(player_id(), 10, 0, 1);
	uLocal_1381 = _0xfa50f79257745e74(vLocal_507, 14f, 1, 45, 0);
	_0x0d7fd6a55fd63aef(9, 3, 0);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_755(char[4] cParam0)
{
	func_1264(cParam0);
	func_1259();
	func_1260();
	if (_0x8a3945405b31048f() > 0.9f)
	{
		func_1265(0.9f);
	}
	_0xab0d553fe20a6e25(0.8f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_ped_reset_flag(Global_35, 154, true);
	set_ped_reset_flag(iVar1199, 154, true);
	set_ped_reset_flag(&(Local_709[2]), 222, true);
	set_ped_reset_flag(&(Local_709[3]), 222, true);
	if (is_waypoint_playback_going_on_for_ped(&(Local_709[4]), 0))
	{
		waypoint_playback_override_speed(&(Local_709[4]), 1.5f, 0, -1082130432, 0);
	}
	if (!func_1227(2048))
	{
		if (is_entity_in_volume(iVar1213, &(iLocal_1223[36]), true, 0))
		{
			func_1232(2048);
		}
	}
	switch (func_1201(cParam0))
	{
		case 0:
			func_1266();
			if (func_855(iVar1214, Global_35, 1, 1) <= 250f)
			{
				if (!func_871(&(Local_709[12]), -235832601))
				{
					func_1267(cParam0, &(Local_38[10]));
					task_vehicle_follow_waypoint_recording(&(Local_709[12]), iVar1214, "mary3_boat_route", 524308, 0, 8, -1, -1082130432, 0, 1073741824, 0);
				}
			}
			if (func_1268(Global_35, &(Local_709[6]), 0))
			{
				if (!func_871(&(Local_709[11]), 2121492476))
				{
					task_react(&(Local_709[11]), Global_35, get_entity_coords(Global_35, true, false), "Default_Shocked", 2f, 1f, 4);
				}
			}
			if (!func_1227(16))
			{
				_0xcbf88256e44d5d39(iVar1213, 1);
				func_1232(16);
			}
			if (get_vehicle_ped_is_using(Global_35) == iVar1213)
			{
				if (!func_478(iVar1365))
				{
					uLocal_1368 = func_694("MRY3_JACK_HELP", 10000, 0, 0, 0, 1);
				}
				set_ped_relationship_group_hash(&(Local_709[2]), 1269650476);
				set_ped_relationship_group_hash(&(Local_709[3]), 1269650476);
				_0xdf7b5144e25cd3fe(&(Local_38[2]), func_409(7));
				func_1209(cParam0, "MRY3_OBJ_JACK", -1082130432, 0, 0, -1, -1, 0);
				func_134(cParam0, 1);
			}
			if (get_vehicle_waypoint_progress(iVar1213) >= 802)
			{
				func_1269(iVar1213);
				_0xd4f5efb55769d272(iVar1213, 4);
				_0xcbf88256e44d5d39(iVar1213, 0);
				if (!func_1227(134217728))
				{
					func_1232(134217728);
				}
				set_ped_combat_attributes(&(Local_709[2]), 1, false);
				set_ped_combat_attributes(&(Local_709[3]), 1, false);
				func_1232(4194304);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			vehicle_waypoint_playback_override_speed(iVar1213, 11.7f);
			if (!func_1227(4194304))
			{
				if (get_vehicle_ped_is_using(Global_35) != iVar1213)
				{
					if (func_26(&uLocal_1166))
					{
						func_538(&uLocal_1166);
					}
					iLocal_27 = 6;
					func_1270(2, 7);
					func_1271(cParam0, "MRY3_OBJ_CHASE", get_entity_coords(iVar1213, true, false));
					func_1272(cParam0, "MRY3_OBJ_CHASE", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_134(cParam0, 0);
				}
			}
			if (func_1273(Global_35, iVar1213, 1))
			{
				uLocal_1366 = _0x4e76cb57222a00e5(Global_35);
				if (is_ped_jacking(Global_35))
				{
					set_anim_scene_bool(&(Local_38[2]), "bPanicLoop", true, false);
					iLocal_27 = 7;
					if (!func_26(&uLocal_1157))
					{
						func_27(&uLocal_1157, 0);
					}
				}
				if (func_26(&uLocal_1157))
				{
					if (func_864(&uLocal_1157) <= 10f)
					{
						if (func_382(&(Local_709[2]), 0))
						{
							set_entity_proofs(&(Local_709[2]), 8, false);
						}
						if (func_382(&(Local_709[3]), 0))
						{
							set_entity_proofs(&(Local_709[3]), 8, false);
						}
					}
					else
					{
						if (func_382(&(Local_709[2]), 0))
						{
							set_entity_proofs(&(Local_709[2]), 0, false);
						}
						if (func_382(&(Local_709[3]), 0))
						{
							set_entity_proofs(&(Local_709[2]), 0, false);
						}
					}
				}
			}
			if (func_1227(4194304))
			{
				if (func_382(&(Local_709[2]), 0))
				{
					if (!func_871(&(Local_709[2]), 242628503))
					{
						clear_sequence_task(&uLocal_1215);
						open_sequence_task(&uLocal_1215);
						task_leave_vehicle(0, iVar1213, 64, 0);
						task_smart_flee_ped(0, Global_35, -1f, -1, 0, 1077936128, 0);
						close_sequence_task(iVar1212);
						task_perform_sequence(&(Local_709[2]), iVar1212);
					}
				}
				if (func_382(&(Local_709[3]), 0))
				{
					if (!func_871(&(Local_709[3]), 242628503))
					{
						clear_sequence_task(&uLocal_1215);
						open_sequence_task(&uLocal_1215);
						task_leave_vehicle(0, iVar1213, 64, 0);
						task_smart_flee_ped(0, Global_35, -1f, -1, 0, 1077936128, 0);
						close_sequence_task(iVar1212);
						task_perform_sequence(&(Local_709[3]), iVar1212);
					}
				}
			}
			else
			{
				if (!is_ped_in_vehicle(&(Local_709[2]), iVar1213, false))
				{
					if (!func_871(&(Local_709[2]), 518218985))
					{
						task_smart_flee_ped(&(Local_709[2]), Global_35, -1f, -1, 0, 1077936128, 0);
					}
					if (is_ped_in_vehicle(&(Local_709[3]), iVar1213, false))
					{
						if (!func_871(&(Local_709[3]), 242628503))
						{
							clear_sequence_task(&uLocal_1215);
							open_sequence_task(&uLocal_1215);
							task_leave_vehicle(0, iVar1213, 64, 0);
							task_smart_flee_ped(0, Global_35, -1f, -1, 0, 1077936128, 0);
							close_sequence_task(iVar1212);
							task_perform_sequence(&(Local_709[3]), iVar1212);
						}
					}
				}
				if (!is_ped_in_vehicle(&(Local_709[3]), iVar1213, false))
				{
					if (!func_871(&(Local_709[3]), 518218985))
					{
						task_smart_flee_ped(&(Local_709[3]), Global_35, -1f, -1, 0, 1077936128, 0);
					}
					if (is_ped_in_vehicle(&(Local_709[2]), iVar1213, false))
					{
						if (!func_871(&(Local_709[2]), 242628503))
						{
							clear_sequence_task(&uLocal_1215);
							open_sequence_task(&uLocal_1215);
							task_leave_vehicle(0, iVar1213, 64, 0);
							task_smart_flee_ped(0, Global_35, -1f, -1, 0, 1077936128, 0);
							close_sequence_task(iVar1212);
							task_perform_sequence(&(Local_709[2]), iVar1212);
						}
					}
				}
			}
			if ((iVar1363 == -1 || iVar1363 == 0) || func_1227(4194304))
			{
				if ((!func_1274() && !is_ped_in_vehicle(&(Local_709[2]), iVar1213, false)) && !is_ped_in_vehicle(&(Local_709[3]), iVar1213, false))
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_756(var uParam0)
{
	_0xbbadfb5e5e5766fb(get_player_index(), 1f);
	set_entity_invincible(&(Local_709[2]), false);
	set_entity_invincible(&(Local_709[3]), false);
	if (does_blip_exist(Local_709[1]->f_1))
	{
		remove_blip(&(Local_709[1]->f_1));
	}
	if (does_entity_exist(&(Local_709[0])))
	{
		set_ped_as_no_longer_needed(Local_709[0]);
	}
	set_ped_as_no_longer_needed(Local_709[10]);
	set_ped_as_no_longer_needed(Local_709[4]);
	set_vehicle_as_no_longer_needed(&iLocal_1217);
	set_ped_as_no_longer_needed(Local_709[12]);
	set_ped_as_no_longer_needed(Local_709[13]);
	Global_43838 = 0;
	_delete_anim_scene(&(Local_38[2]));
	if (_does_volume_exist(&(iLocal_1223[35])))
	{
		func_173(&uLocal_1300, &(iLocal_1223[35]), 0);
		_0xe5ef9de716ff737e(&(iLocal_1223[35]), 0, 1);
	}
	func_172(Local_709[11]);
	func_172(Local_709[6]);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return false;
	}
	else
	{
		if (!func_1242(cParam0))
		{
			return false;
		}
		_0x53ba7d96b9a421d9(Global_35, iVar1213);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_entity_exist(&(Local_980[iVar0])))
		{
			if (!_0xa0bc8faed8cfeb3c(&(Local_980[iVar0])))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (_does_volume_exist(&(iLocal_1223[37])))
	{
		uLocal_1297 = func_383(&(iLocal_1223[37]), 0, 0, 4096);
	}
	uLocal_1381 = _0xfa50f79257745e74(vLocal_507, 14f, 1, 45, 0);
	uLocal_1382 = _0xfa50f79257745e74(vLocal_510, 14f, 1, 45, 0);
	func_379(iVar1213, func_215(5, 2), 2, 1073741824);
	func_1253(&Global_35, &iLocal_1216, -1, 1);
	func_1253(Local_709[1], &iLocal_1216, 3, 1);
	_0x0751d461f06e41ce(player_id(), 10, 0, 1);
	func_1267(cParam0, &(Local_38[10]));
	if (get_clock_hours() != 18)
	{
		set_clock_time(18, 0, 0);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_758(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_759(char[4] cParam0)
{
	if (func_382(&(Local_530[0]), 0))
	{
		if (!get_entity_collision_disabled(&(Local_530[0])))
		{
			set_entity_collision(&(Local_530[0]), false, false);
			set_entity_completely_disable_collision(&(Local_530[0]), false, false);
			return false;
		}
		set_entity_coords_no_offset(&(Local_530[0]), func_868(1, 2), false, true, true);
		set_entity_heading(&(Local_530[0]), func_869(1, 2));
		freeze_entity_position(&(Local_530[0]), true);
		if (!func_871(&(Local_530[0]), -2017877118))
		{
			task_play_anim(&(Local_530[0]), sVar524, "base", 8f, -8f, -1, 1, 0f, false, 524299, false, 0, false);
		}
	}
	else
	{
		return false;
	}
	if (func_120(cParam0, 4))
	{
		func_866(0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_980[iVar0] = _get_ped_in_draft_seat(iVar1213, iVar0);
		set_entity_proofs(&(Local_980[iVar0]), 0, false);
		iVar0++;
	}
	_0xb7079f4c72896756(Global_35, iVar1213, 0, 16, -1);
	func_1275(cParam0, &(Local_530[0]), 1);
	if (!func_8(cParam0, 8))
	{
		simulate_player_input_gait(player_id(), 2f, 3000, 0f, true, false);
	}
	func_1276(cParam0, "1-BeforeChoice");
	_0xf7ea250b9a919e03(1215332025, &(Local_709[1]));
	if (func_1227(4194304))
	{
		_0xba8818212633500a(iVar1213, 0, 1);
		func_134(cParam0, 1);
		func_135(cParam0, 4);
	}
	else
	{
		func_134(cParam0, 0);
		func_135(cParam0, 1);
	}
	func_1277();
	func_1267(cParam0, &(Local_38[11]));
	_0xdf7b5144e25cd3fe(&(Local_38[11]), func_409(42));
	func_1267(cParam0, &(Local_38[12]));
	func_415(&(cParam0->f_7375), 1f);
	func_1278(cParam0, "1-BeforeChoice");
	add_relationship_group("m_relLasso", &uLocal_1383);
	set_relationship_between_groups(2, 1862763509, iVar1380);
	set_ped_config_flag(&(Local_709[1]), 138, true);
	return cParam0->f_607 == cParam0->f_607;
}

int func_760(char[4] cParam0)
{
	func_1279();
	func_1280(cParam0);
	if (func_339(111756353, 1, 0))
	{
		iLocal_498 = 1;
		if (func_1201(cParam0) <= 1)
		{
			func_134(cParam0, 2);
		}
	}
	if (bVar495)
	{
		if (!func_382(&(Local_709[1]), 0))
		{
			if (!func_1227(32768))
			{
				func_306(3, 0, 1, "MRY3_HON_MURDER", &(Local_709[1]), 0, 1065353216, 0);
				func_1232(32768);
			}
		}
	}
	if (func_1201(cParam0) >= 2)
	{
		if (iLocal_34 == 5 || _0x1f0e401031e20146(&(Local_38[12]), func_409(47)))
		{
			if (!func_871(&(Local_709[1]), 518218985))
			{
				if (func_382(&(Local_709[1]), 0))
				{
					_task_smart_flee_style_ped(&(Local_709[1]), Global_35, 3, 2097152, -1f, -1, 0);
				}
			}
		}
		if (func_1281(cParam0))
		{
			return 1;
		}
	}
	if (func_1201(cParam0) == 1)
	{
		func_1282();
	}
	if (func_1201(cParam0) >= 2)
	{
		func_1283(cParam0);
	}
	if (_0x8a3945405b31048f() > 0.9f)
	{
		func_1265(0.9f);
	}
	_0xab0d553fe20a6e25(0.8f);
	set_vehicle_density_multiplier_this_frame(0f);
	if (func_1273(&(Local_709[1]), iVar1213, 0))
	{
		if (!func_1227(1024))
		{
			func_1232(1024);
		}
	}
	else if (func_1227(1024))
	{
		func_1284(1024);
	}
	if (func_1227(2048))
	{
		vLocal_504 = { vLocal_510 };
	}
	else
	{
		vLocal_504 = { vLocal_507 };
	}
	if (func_789(Global_35, 1, 0, 0) == 2055893578)
	{
		if (get_ped_relationship_group_hash(&(Local_709[1])) != iVar1380)
		{
			set_ped_relationship_group_hash(&(Local_709[1]), iVar1380);
		}
	}
	else if (get_ped_relationship_group_hash(&(Local_709[1])) != -1976316465)
	{
		set_ped_relationship_group_hash(&(Local_709[1]), -1976316465);
	}
	if (func_1201(cParam0) <= 2)
	{
		if (func_1227(16384))
		{
			disable_control_action(0, 578288361, false);
			disable_control_action(0, -1292666904, false);
		}
	}
	if (is_entity_dead(&(Local_709[1])))
	{
		if (func_10(iVar1319))
		{
			func_11(&iLocal_1322, 1, 1);
		}
		if (func_10(iVar1318))
		{
			func_11(&iLocal_1321, 1, 1);
		}
	}
	if (func_1201(cParam0) >= 1)
	{
		_uiprompt_set_ambient_group_this_frame(&(Local_709[1]), 3f, 3, 1, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), "DISCOVERABLE_NAME_ASHTON", 0);
	}
	if (does_entity_exist(&(Local_709[1])) && !func_382(&(Local_709[1]), 0))
	{
		if (!func_378(16384))
		{
			func_380(16384);
		}
		if (_does_anim_scene_exist(&(Local_38[10])))
		{
			_delete_anim_scene(&(Local_38[10]));
		}
		if (_does_anim_scene_exist(&(Local_38[2])))
		{
			_delete_anim_scene(&(Local_38[2]));
		}
	}
	if (func_378(8192))
	{
		func_1285();
	}
	switch (func_1201(cParam0))
	{
		case 0:
			if (func_1227(4194304))
			{
				_0xba8818212633500a(iVar1213, 0, 1);
				func_134(cParam0, 1);
			}
			if (func_1273(Global_35, iVar1213, 1))
			{
				if (!does_blip_exist(iVar1208))
				{
					iLocal_1211 = func_1196(408396114, vLocal_504, 14f, 1);
					_blip_set_modifier(iVar1208, -1878373110);
				}
				if (does_blip_exist(iVar1211))
				{
					remove_blip(&iLocal_1214);
				}
				if (func_1286(cParam0) != 1 && func_1286(cParam0) != -1)
				{
					func_135(cParam0, 1);
				}
			}
			else
			{
				if (does_blip_exist(iVar1208))
				{
					remove_blip(&iLocal_1211);
				}
				if (!does_blip_exist(iVar1211))
				{
					iLocal_1214 = func_1263(408396114, iVar1213, 1);
				}
				if (func_1286(cParam0) != 2 && func_1286(cParam0) != 3)
				{
					func_135(cParam0, 2);
				}
			}
			if (func_1287(iVar1213, vLocal_504, 14f, 1, 1))
			{
				_0x50b72a754ee64a71(-632030841);
				if (!_0x404527bc03da0e6c(iVar1213))
				{
					bring_vehicle_to_halt(iVar1213, 5f, 4, false);
				}
				if (get_entity_speed(iVar1213) <= 1f)
				{
					set_vehicle_forward_speed(iVar1213, 0f);
					task_leave_any_vehicle(Global_35, 0, 0);
					_0xba8818212633500a(iVar1213, 0, 1);
					if (!func_1227(134217728))
					{
						func_1232(134217728);
					}
					if (_does_anim_scene_exist(&(Local_38[2])))
					{
						_delete_anim_scene(&(Local_38[2]));
					}
					func_171(&iLocal_1211);
					func_135(cParam0, 4);
					func_134(cParam0, 1);
				}
			}
			else if (func_1227(134217728))
			{
				func_1284(134217728);
			}
			break;
		case 1:
			if (!func_378(8192))
			{
				func_380(8192);
			}
			disable_control_action(0, -822242784, false);
			if (!func_1193(2))
			{
				if (!is_ped_in_vehicle(Global_35, iVar1213, false))
				{
					if (!func_10(iVar1316))
					{
						iLocal_1319 = func_1288("MRY3_CXT_PULL", -719620017, iVar1213, 3, 1, 0, 1, 0, 2.25f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						_uiprompt_set_group((*Global_1945938)[func_179(iVar1316)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
						_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1316)]->f_3, 22, 1);
					}
					func_212(&uLocal_1133);
					func_135(cParam0, 7);
					func_1206(2);
				}
			}
			if (!does_blip_exist(Local_709[1]->f_1))
			{
				Local_709[1]->f_1 = _blip_add_for_entity(-89429847, &(Local_709[1]));
				set_blip_name_from_text_file(Local_709[1]->f_1, "MRY3_BLIP_BUYER");
				_blip_set_modifier(Local_709[1]->f_1, -401963276);
			}
			if (!func_1227(4194304))
			{
				if (!func_1287(iVar1213, vLocal_504, 14f, 1, 1))
				{
					remove_blip(&(Local_709[1]->f_1));
					func_1195(2);
					if (func_1227(134217728))
					{
						func_1284(134217728);
					}
					func_135(cParam0, 1);
					func_134(cParam0, 0);
				}
			}
			if (func_1289(iVar1316, 1))
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_35, 0, 1, 0, 0);
				if (!func_382(&(Local_709[1]), 0))
				{
					_0xb7079f4c72896756(Global_35, iVar1213, 0, 16, 3);
					task_enter_vehicle(Global_35, iVar1213, 20000, 3, 2f, 524288, 0);
				}
				else
				{
					if (func_1203(Global_35, get_offset_from_entity_in_world_coords(iVar1213, 0.8303f, -0.1263f, 0.6512f), 1) <= func_1203(Global_35, get_offset_from_entity_in_world_coords(iVar1213, -0.8303f, -0.1263f, 0.6512f), 1))
					{
						task_enter_anim_scene(Global_35, &(Local_38[11]), "player_zero", func_409(42), 1.48f, 1, 0, 20000, -1082130432);
					}
					else
					{
						task_enter_anim_scene(Global_35, &(Local_38[11]), "player_zero", func_409(41), 1.48f, 1, 0, 20000, -1082130432);
					}
					iLocal_33 = 3;
				}
				if (!func_1227(16384))
				{
					func_1232(16384);
					_0xb8de69d9473b7593(Global_35, 0);
				}
				func_135(cParam0, 5);
				func_11(&iLocal_1319, 1, 1);
			}
			if (!is_ped_in_vehicle(&(Local_709[1]), iVar1213, false))
			{
				_0xb7079f4c72896756(Global_35, iVar1213, 0, 16, -1);
			}
			if (_0x005e6f28dd7ed58d(&(Local_38[11]), "IG_ASHTON") || _0xb89fcff19dafff28(&(Local_38[11]), "IG_ASHTON"))
			{
				if (!func_871(&(Local_709[1]), -70145180))
				{
					if (_0x854bc9b1a1ccd034(1215332025, &(Local_709[1])))
					{
						force_ped_motion_state(&(Local_709[1]), 1140525470, true, 1, true);
						_task_intimidated_2(&(Local_709[1]), Global_35, 0, 1, 1, 1, 0, 0, 0);
					}
				}
			}
			if (func_871(&(Local_709[1]), -70145180))
			{
				if (get_script_task_status(&(Local_709[1]), -70145180, true) == 1)
				{
					_set_entity_health(&(Local_709[1]), 100, 0);
					clear_entity_last_damage_entity(&(Local_709[1]));
					func_135(cParam0, 8);
					func_134(cParam0, 2);
				}
			}
			break;
		case 2:
			func_1290();
			if (func_1193(512) && !func_1274())
			{
				if (!func_1227(4096))
				{
					if (!func_10(iVar1319))
					{
						iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
						_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
						func_1232(4096);
					}
				}
				if ((bVar496 && !func_1227(8192)) && !func_378(8388608))
				{
					if (!func_10(iVar1318))
					{
						if (!is_entity_dead(&(Local_709[1])))
						{
							iLocal_1321 = func_1288("MRY3_CXT_ACC", -155487368, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
							_uiprompt_set_group((*Global_1945938)[func_179(iVar1318)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
							_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1318)]->f_3, 22, 1);
						}
					}
				}
				else if (func_10(iVar1318))
				{
					func_11(&iLocal_1321, 1, 1);
				}
			}
			if (bVar495 == 1)
			{
				if (func_10(iVar1318))
				{
					func_11(&iLocal_1321, 1, 1);
				}
				if (func_10(iVar1319))
				{
					func_11(&iLocal_1322, 1, 1);
				}
				if (func_339(111756353, 1, 0))
				{
					if (func_1286(cParam0) != 6)
					{
						func_135(cParam0, 6);
					}
					iVar0 = 0;
					while (iVar0 < 6)
					{
						Local_980[iVar0] = _get_ped_in_draft_seat(iVar1213, iVar0);
						set_entity_proofs(&(Local_980[iVar0]), 0, false);
						set_ped_can_be_targetted(&(Local_980[iVar0]), true);
						set_ped_config_flag(&(Local_980[iVar0]), 253, false);
						iVar0++;
					}
					func_1269(iVar1213);
					_0x226c6a4e3346d288(iVar1213, 1);
					_0x0751d461f06e41ce(player_id(), 10, 0, 0);
					set_player_control(player_id(), true, 0, false);
					_0xba8818212633500a(iVar1213, 0, 0);
					_0x949b2f9ed2917f5d(Global_35, 0);
					func_134(cParam0, 3);
				}
			}
			enable_control_action(0, -1292666904, true);
			switch (iVar485)
			{
				case 0:
					if (func_1289(iVar1318, 1))
					{
						func_11(&iLocal_1321, 1, 1);
						iLocal_498 = 1;
						func_1122(10000, 0, 0, 1, 1);
						func_306(12, 1514826129, 0, 0, &(Local_709[1]), 0, 1065353216, 0);
						iLocal_502 = 1;
						func_1291(&(Local_709[1]), 10000);
					}
					else if (func_1289(iVar1319, 1))
					{
						func_11(&iLocal_1322, 1, 1);
						func_1232(8192);
						clear_entity_last_damage_entity(&(Local_709[1]));
						if (!func_26(&uLocal_1172))
						{
							func_27(&uLocal_1172, 0);
						}
						if (func_670(func_789(Global_35, 1, 0, 0)) && !_0x705be297eebdb95d(func_789(Global_35, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
						}
						task_melee(Global_35, &(Local_709[1]), -1535473179, 1, 1, 1065353216, 1, -1082130432);
					}
					if (func_26(&uLocal_1172))
					{
						if (func_864(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!func_10(iVar1319))
							{
								iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
								_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
								_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
								func_538(&uLocal_1172);
							}
						}
					}
					if (func_1292(&(Local_709[1]), Global_35))
					{
						set_anim_scene_bool(&(Local_38[12]), "bHasBeenHit", true, false);
						clear_entity_last_damage_entity(&(Local_709[1]));
						func_538(&uLocal_1172);
						func_135(cParam0, 11);
						uLocal_488 = iVar485 + 1;
					}
					break;
				case 1:
					if (func_1193(1024))
					{
						if (!func_1274())
						{
							func_1284(8192);
							if (!func_10(iVar1319))
							{
								iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
								_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
								_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
								uLocal_488 = iVar485 + 1;
							}
						}
					}
					break;
				case 2:
					if (func_1289(iVar1318, 1))
					{
						func_11(&iLocal_1321, 1, 1);
						iLocal_498 = 1;
						func_1122(5000, 0, 0, 1, 1);
						func_1291(&(Local_709[1]), 5000);
						iLocal_502 = 1;
					}
					else if (func_1289(iVar1319, 1))
					{
						func_11(&iLocal_1322, 1, 1);
						func_1232(8192);
						clear_entity_last_damage_entity(&(Local_709[1]));
						if (!func_26(&uLocal_1172))
						{
							func_27(&uLocal_1172, 0);
						}
						if (func_670(func_789(Global_35, 1, 0, 0)) && !_0x705be297eebdb95d(func_789(Global_35, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
						}
						task_melee(Global_35, &(Local_709[1]), 1070869986, 1, 1, 1065353216, 1, -1082130432);
					}
					if (func_26(&uLocal_1172))
					{
						if (func_864(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!func_10(iVar1319))
							{
								iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
								_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
								_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
								func_538(&uLocal_1172);
							}
						}
					}
					if (func_1292(&(Local_709[1]), Global_35))
					{
						set_anim_scene_bool(&(Local_38[12]), "bHasBeenHit", true, false);
						clear_entity_last_damage_entity(&(Local_709[1]));
						func_135(cParam0, 12);
						func_538(&uLocal_1172);
						uLocal_488 = iVar485 + 1;
					}
					break;
				case 3:
					if (func_1193(2048))
					{
						if (!func_1274())
						{
							func_1284(8192);
							if (!func_10(iVar1319))
							{
								iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
								_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
								_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
								uLocal_488 = iVar485 + 1;
							}
						}
					}
					break;
				case 4:
					if (func_1289(iVar1318, 1))
					{
						func_11(&iLocal_1321, 1, 1);
						iLocal_498 = 1;
						func_1122(2500, 0, 0, 1, 1);
						func_1291(&(Local_709[1]), 2500);
						iLocal_502 = 1;
					}
					else if (func_1289(iVar1319, 1))
					{
						func_380(8388608);
						func_11(&iLocal_1322, 1, 1);
						func_11(&iLocal_1321, 1, 1);
						clear_entity_last_damage_entity(&(Local_709[1]));
						if (!func_26(&uLocal_1172))
						{
							func_27(&uLocal_1172, 0);
						}
						set_player_control(player_id(), false, 256, false);
						if (func_670(func_789(Global_35, 1, 0, 0)) && !_0x705be297eebdb95d(func_789(Global_35, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
						}
						task_melee(Global_35, &(Local_709[1]), -519447073, 1, 1, 1065353216, 1, -1082130432);
					}
					if (func_26(&uLocal_1172))
					{
						if (func_864(&uLocal_1172) >= 5f)
						{
							func_1284(8192);
							if (!func_10(iVar1319))
							{
								iLocal_1322 = func_1288("MRY3_CXT_HIT", -1292666904, &(Local_709[1]), 3, 1, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
								_uiprompt_set_group((*Global_1945938)[func_179(iVar1319)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_709[1])), 0);
								_uiprompt_set_attribute((*Global_1945938)[func_179(iVar1319)]->f_3, 22, 1);
								func_538(&uLocal_1172);
							}
						}
					}
					if (func_1292(&(Local_709[1]), Global_35))
					{
						if (!func_26(&uLocal_1175))
						{
							func_27(&uLocal_1175, 0);
						}
						else if (func_864(&uLocal_1175) >= 3f)
						{
							iLocal_503 = 1;
							set_anim_scene_bool(&(Local_38[12]), "bHasBeenHit", true, false);
							func_538(&uLocal_1172);
							clear_entity_last_damage_entity(&(Local_709[1]));
							iLocal_498 = 1;
							uLocal_488 = iVar485 + 1;
						}
					}
					break;
			}
			break;
		case 3:
			if (func_378(8192))
			{
				func_1257(8192);
			}
			if (is_ped_in_any_vehicle(Global_35, false))
			{
				if (!func_1227(8388608))
				{
					func_1232(8388608);
				}
				if (func_1227(16777216))
				{
					func_1284(16777216);
				}
				iLocal_1219 = get_vehicle_ped_is_in(Global_35, false);
			}
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				if (!func_1227(16777216))
				{
					func_1232(16777216);
				}
				if (func_1227(8388608))
				{
					func_1284(8388608);
				}
				iLocal_1207 = get_mount(Global_35);
			}
			if (func_1227(33554432))
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			if (func_1227(4194304) && is_ped_in_vehicle(Global_35, iVar1213, false))
			{
				if (!func_1227(536870912))
				{
					func_1232(536870912);
				}
			}
			else if (func_1227(536870912))
			{
				func_1284(536870912);
			}
			if (!func_1227(536870912))
			{
				if (is_ped_in_any_vehicle(Global_35, false) || _is_ped_getting_into_a_mount_seat(Global_35, true))
				{
					if ((func_1231(Global_35, &(iLocal_1223[38]), 1, 0) || func_1231(Global_35, &(iLocal_1223[39]), 1, 0)) || func_1231(Global_35, &(iLocal_1223[40]), 1, 0))
					{
						if (get_entity_speed(iVar1213) > 0.5f || get_entity_speed(get_mount(Global_35)) > 0.5f)
						{
							if (!func_26(&uLocal_1145))
							{
								func_27(&uLocal_1145, 0);
							}
						}
						if (func_26(&uLocal_1145))
						{
							disable_control_action(0, -17122892, false);
							if (_0xdd0b7c5ae58f721d(&Local_1105))
							{
								if (!func_1227(33554432))
								{
									_0xb8b207c34285e978(&Local_1105);
									func_1232(33554432);
								}
								else if (func_864(&uLocal_1145) >= 3f)
								{
									_0x0a5a4f1979abb40e(&Local_1105);
									_0x798be43c9393632b(&Local_1105);
									iLocal_37 = 2;
									func_134(cParam0, 4);
								}
							}
						}
					}
					else if (func_26(&uLocal_1145))
					{
						func_538(&uLocal_1145);
					}
				}
				else if (func_26(&uLocal_1145))
				{
					func_538(&uLocal_1145);
				}
			}
			if (func_855(Global_35, &(Local_530[0]), 1, 1) <= 100f)
			{
				if (!func_8(cParam0, 33554432))
				{
					func_99(cParam0, 33554432);
					func_371(cParam0, 8388608);
				}
			}
			if (func_1231(Global_35, &(iLocal_1223[41]), 1, 0))
			{
				if (!func_378(4096))
				{
					func_380(4096);
				}
			}
			if (func_378(4096))
			{
				if (!func_26(&uLocal_1199))
				{
					func_27(&uLocal_1199, 0);
				}
				else if (func_1210(&uLocal_1199) >= 2f)
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 4:
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_761(var uParam0)
{
	_0xde7b2b4144906cdf(2017973493, &(Local_709[1]));
	if (does_blip_exist(Local_709[1]->f_1))
	{
		remove_blip(&(Local_709[1]->f_1));
	}
	_0x0751d461f06e41ce(player_id(), 10, 0, 0);
	_0xbc90bdf4e5228ea1();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(char[4] cParam0)
{
	if (!func_1279())
	{
		return false;
	}
	if (func_120(cParam0, 4))
	{
		if (func_120(cParam0, 4))
		{
			if (!func_386(Global_1394141->f_1326, 8192))
			{
				func_163(&(Global_1394141->f_1326), 8192);
			}
		}
		if (!func_386(Global_1394141->f_1326, 4096))
		{
			return false;
		}
	}
	func_1293(Global_35);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	func_1190(&(cParam0->f_7375), "1-BeforeChoice");
	return cParam0->f_607 == cParam0->f_607;
}

bool func_763(char[4] cParam0)
{
	func_1294(2738.975f, -1414.386f, 45.03957f, 10f, 0, 0, 5);
	if (_does_volume_exist(&(iLocal_1223[43])))
	{
		uLocal_1293 = func_383(&(iLocal_1223[43]), 0, 0, 0);
		_0x19c7567d2f2287d6(&(iLocal_1223[43]), 7);
	}
	if (_does_volume_exist(&(iLocal_1223[42])))
	{
		uLocal_1292 = func_383(&(iLocal_1223[42]), 0, 0, 0);
	}
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
	func_417(cParam0, iVar1215, "trolley01x", 0, 0, 0, 0);
	if (get_clock_hours() != 18)
	{
		set_clock_time(18, 0, 0);
	}
	func_1295(cParam0, 1024);
	func_1296(cParam0, 4);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_764(char[4] cParam0)
{
	func_135(cParam0, 1);
	if (func_1193(65536))
	{
		func_134(cParam0, 0);
	}
	if (func_1193(131072))
	{
		func_134(cParam0, 29);
	}
	func_99(cParam0, 33554432);
	func_1276(cParam0, "3A-PlayerLeftEarly");
	func_1276(cParam0, "3B-PlayerStayed");
	func_1190(&(cParam0->f_7375), "3A-PlayerLeftEarly");
	func_371(cParam0, 8388608);
	set_ped_config_flag(Global_35, 364, true);
	return cParam0->f_607 == cParam0->f_607;
}

int func_765(char[4] cParam0)
{
	func_1297(cParam0);
	if (Global_1394141->f_1328)
	{
	}
	switch (func_1201(cParam0))
	{
		case 0:
			if (func_1298(iVar1323, 1))
			{
				if (Global_1394141->f_1328)
				{
					func_1299(&iLocal_1326);
					func_1232(524288);
					iLocal_35 = 23;
				}
			}
			if (!Global_1394141->f_1328)
			{
				if (!func_1227(1048576))
				{
					func_11(&iLocal_1326, 1, 1);
					iLocal_35 = 24;
					func_1232(1048576);
				}
			}
			if (func_1211(&(Local_38[13])))
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_766(var uParam0)
{
	clear_bit(&(Global_1956580->f_1), 5);
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (func_775(&(uParam0->f_7375), 512))
	{
		func_1300(&(uParam0->f_7375), 512, 1);
	}
	if (func_775(&(uParam0->f_7375), 2))
	{
		func_1300(&(uParam0->f_7375), 2, 1);
	}
	set_ped_config_flag(Global_35, 364, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	if (!func_1279())
	{
		return false;
	}
	func_1190(&(uParam0->f_7375), "3B-PlayerStayed");
	func_1206(65536);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(char[4] cParam0)
{
	if (!func_382(&(Local_530[0]), 0))
	{
		return false;
	}
	if (func_1193(65536))
	{
		func_1294(2738.975f, -1414.386f, 45.03957f, 10f, 0, 0, 5);
		if (_does_volume_exist(&(iLocal_1223[42])))
		{
			uLocal_1292 = func_383(&(iLocal_1223[42]), 0, 0, 0);
		}
		if (func_1227(524288))
		{
			if (_0x23e33cb9f4a3f547(cParam0->f_7375.f_804, "3A-PlayerLeftEarly"))
			{
				func_1301(&(cParam0->f_7375), "3A-PlayerLeftEarly");
			}
		}
		else if (_0x23e33cb9f4a3f547(cParam0->f_7375.f_804, "3B-PlayerStayed"))
		{
			func_1301(&(cParam0->f_7375), "3B-PlayerStayed");
		}
		func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
		func_151(cParam0, &(Local_530[0]), "MaryLinton", 0, 0, 0, 0);
		func_417(cParam0, iVar1215, "trolley01x", 0, 0, 0, 0);
	}
	if (get_clock_hours() != 18)
	{
		set_clock_time(18, 0, 0);
	}
	func_1302(&(cParam0->f_7375));
	func_1303(&(cParam0->f_7375), 1);
	func_1304(&(cParam0->f_7375));
	func_1305(&(cParam0->f_7375));
	func_1306(&(cParam0->f_7375));
	func_1307(&(cParam0->f_7375), 4);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_769(char[4] cParam0)
{
	func_135(cParam0, 1);
	func_134(cParam0, 29);
	return cParam0->f_607 == cParam0->f_607;
}

int func_770(char[4] cParam0)
{
	func_1308(cParam0);
	switch (func_1201(cParam0))
	{
		case 0:
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_771(var uParam0)
{
	func_173(&uLocal_1293, &(iLocal_1223[43]), 0);
	_0x2c87c3e1c7b96ee2(&(iLocal_1223[43]));
	_0xdd1232b332cbb9e7(3, 1, 0);
	set_player_control(get_player_index(), true, 0, false);
	if (does_entity_exist(iVar1215))
	{
		delete_mission_train(&iLocal_1218);
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_772(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1309(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1310(iParam0))
	{
		if (func_852(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_386(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_772(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_772(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_386(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_386(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_386(iParam5, 129))
	{
		if (func_386(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_386(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_386(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1310(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_386(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_386(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_773(char[4] cParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1311()) && get_entity_model(iVar1) == iParam1)
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

void func_774(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

bool func_775(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_776(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_777(var uParam0)
{
	return uParam0->f_862;
}

void func_778(var uParam0)
{
	if (func_1312(&iVar0))
	{
		if (func_444(iVar0, 0))
		{
			if (func_584(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_611(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_444(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_779(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1313(-1);
	}
	func_1314(1);
	set_entity_invincible(Global_35, true);
	if (!func_776(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_776(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_776(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_776(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_776(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_776(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_776(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_776(*iParam0, 4) && !func_776(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_776(*iParam0, 2048))
	{
		func_791(0, 0);
	}
	if (func_776(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_776(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_776(*iParam0, 8192))
	{
		func_1315();
	}
	if (!func_776(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_776(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_776(*iParam0, 1024))
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
		if (!func_776(*iParam0, 16))
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
						if (func_1316() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_391(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1317(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1318(2);
						func_1319(-1);
						func_1320(vVar3);
						func_1322(func_1321());
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
	if (!func_776(*iParam0, 4096))
	{
		func_1323(Global_35);
	}
	if (!func_776(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_776(*iParam0, 2097152))
	{
		if (func_1324() || _0x50f124e6ef188b22(Global_35))
		{
			func_1325(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_780(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_781(var uParam0)
{
	if (func_775(uParam0, 2048) && !func_391(func_1326(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_775(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_772(iVar1, func_1326(uParam0), func_1327(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_775(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_772(iVar3, func_1326(uParam0), func_1327(uParam0), 2, 1073741824);
		}
	}
}

void func_782(var uParam0)
{
	if ((func_775(uParam0, 268435456) && !func_391(func_1326(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1326(uParam0) };
			func_772(iVar0, vVar1, func_1328(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_783(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_391(vParam1))
	{
		func_1300(uParam0, 2048, 1);
	}
	else
	{
		func_728(uParam0, 2048);
		if (bParam5)
		{
			func_728(uParam0, -2147483648);
		}
	}
}

void func_784(var uParam0)
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
					if (!func_1329(uParam0->f_13[iVar0], 8))
					{
						if (func_670(func_1055(iVar1, 0, 1, 0)))
						{
							if (!func_1330(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_670(func_1055(iVar1, 1, 1, 0)))
						{
							if (!func_1330(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_785(var uParam0, bool bParam1)
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

void func_786(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1141(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1331(iParam1, 29, bVar4, 1, 0);
			func_1331(iParam1, 31, bVar4, 1, 0);
			func_1331(iParam1, 30, bVar4, 1, 0);
			func_1331(iParam1, 22, bVar4, 1, 0);
			func_1331(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1091(32768) && func_1332(1108822547, 8)) && func_1333(10, iParam3))
	{
		func_1334(iParam1, 0, 1);
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
			iVar3 = func_1148(iVar1, 1);
			if (func_1332(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1333(iVar1, iParam3))
				{
				}
				else if ((func_1332(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1332(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1331(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1335(iVar3, 1, 6);
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
								func_1331(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1332(iVar3, 1))
							{
								func_1336(iVar3, 1, 6);
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

bool func_787(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1337((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_788(int iParam0)
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

int func_789(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_790(int iParam0, int iParam1)
{
	return func_1338(&uVar0, iParam0, iParam1);
}

void func_791(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_670(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1339(1);
	}
}

void func_792(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_793(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_794(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_795(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_797(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_798(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_799(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_800(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_801(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_802(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_803(var uParam0, int iParam1)
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

int func_804(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_814((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_805(var uParam0, char* sParam1)
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

int func_806(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_816((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_807(var uParam0, char* sParam1)
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

int func_808(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_818((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_809(int iParam0, int iParam1)
{
	iVar0 = func_1340(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_810(var uParam0, char* sParam1, int iParam2)
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

int func_811(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_823((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_812(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_813(var uParam0, int iParam1)
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

bool func_814(var uParam0)
{
	return *uParam0 != 0;
}

void func_815(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_816(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_817(var uParam0)
{
	if (!func_845(uParam0->f_3, 1))
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
		func_812(&(uParam0->f_3), 1);
	}
}

bool func_818(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_819(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_820(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_821(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_1341(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_822(var uParam0)
{
	if (func_845(*uParam0, 2))
	{
		return true;
	}
	if (!func_845(*uParam0, 1))
	{
		func_1342(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_812(uParam0, 2);
		return true;
	}
	return false;
}

bool func_823(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_824(var uParam0)
{
	if (!func_845(uParam0->f_2, 1))
	{
		if (func_1343(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1344(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_296())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1015())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_812(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_825(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_826(var uParam0, int iParam1)
{
	if (!func_845(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_827(var uParam0)
{
	return *uParam0 != 0;
}

void func_828(var uParam0)
{
	if (!func_845(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_812(&(uParam0->f_2), 1);
	}
}

bool func_829(var uParam0)
{
	return *uParam0 != 0;
}

void func_830(var uParam0)
{
	if (!func_845(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_812(&(uParam0->f_3), 1);
	}
}

bool func_831(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_832(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_833(var uParam0)
{
	return func_1345(*uParam0);
}

void func_834(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_835(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_836(var uParam0)
{
	if (!func_845(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_812(&(uParam0->f_2), 1);
	}
}

bool func_837(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_838(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

bool func_839(var uParam0, int iParam1, char* sParam2)
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

void func_840(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_724(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1346(uParam0, iParam1);
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
		iVar1 = func_1347(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1348(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1349(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1350(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1351(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_841(int iParam0)
{
	if (!func_181(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_842(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_863(uParam0, sParam1, iParam2, bParam4, bParam5))
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
								func_481((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_481(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_481(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_209(&cVar2, 4))
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
							func_481(uParam0->f_2243[uParam0->f_2507], 1048576);
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

void func_843(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_209((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_209((*uParam0)[iVar0], 1))
		{
			func_1357((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_844(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_814((*uParam0)[iVar1]))
		{
			if (func_809((*uParam0)[iVar1]->f_2, iParam12))
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
		if (func_816((*uParam1)[iVar1]))
		{
			if (func_809((*uParam1)[iVar1]->f_4, iParam12))
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
		if (func_818((*uParam2)[iVar1]))
		{
			if (func_809((*uParam2)[iVar1]->f_2, iParam12))
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
		if (func_820((*uParam3)[iVar1]))
		{
			if (func_809((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_821((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_809(uParam4->f_1, iParam12))
	{
		if (!func_822(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_823((*uParam5)[iVar1]))
		{
			if (func_809((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1343((*uParam5)[iVar1]))
				{
					if (!func_846((*uParam5)[iVar1]))
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
		if (func_823((*uParam5)[iVar1]))
		{
			if (func_809((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1343((*uParam5)[iVar1]))
				{
					if (func_846((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_825((*uParam5)[iVar1]->f_4[iVar2]))
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
		if (func_827((*uParam6)[iVar1]))
		{
			if (func_809((*uParam6)[iVar1]->f_3, iParam12))
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
		if (func_829((*uParam7)[iVar1]))
		{
			if (func_809((*uParam7)[iVar1]->f_4, iParam12))
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
		if (func_831((*uParam8)[iVar1]))
		{
			if (func_809((*uParam8)[iVar1]->f_2, iParam12))
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
		if (func_833((*uParam9)[iVar1]))
		{
			if (func_809((*uParam9)[iVar1]->f_2, iParam12))
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
		if (func_835((*uParam10)[iVar1]))
		{
			if (func_809((*uParam10)[iVar1]->f_3, iParam12))
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
		if (func_837((*uParam11)[iVar1]))
		{
			if (func_809((*uParam11)[iVar1]->f_2, iParam12))
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

bool func_845(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_846(var uParam0)
{
	if (func_845(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_2, 1))
	{
		func_824(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_812(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_847(int iParam0)
{
	if (!func_181(iParam0))
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

bool func_848(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_500(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_250(iParam1)) && func_1368(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1369(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1370(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1371(iParam1);
		return true;
	}
	return false;
}

bool func_849(char[4] cParam0)
{
	if (!func_391(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1372(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1372(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1372(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1372(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1372(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1372(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1372(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1372(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1372(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1372(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1372(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1372(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1372(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1372(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1372(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1372(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1372(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1372(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1372(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1372(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1372(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1372(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1372(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1372(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1372(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1372(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1372(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1372(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1372(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1372(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1372(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1372(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1372(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_391(cParam0->f_5417);
}

int func_850(int iParam0, var uParam1)
{
	uParam1->f_10 = func_258(uParam1->f_10);
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
		if (func_391(uParam1->f_6))
		{
		}
	}
	bVar0 = func_390();
	if (*uParam1)
	{
		if (bVar0 && !func_319((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1373(5))
			{
				func_512(5);
				func_1374(5);
				func_1319(0);
				func_1318(0);
			}
		}
	}
	if (func_1375(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_319((*Global_1835011)[37]->f_1, 1)) && !func_319((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_319((*Global_1835011)[43]->f_1, 1)) && !func_319((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_207(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_515(iVar1))
	{
		bVar3 = true;
		if (func_1376(iVar1))
		{
			bVar4 = true;
		}
		if (func_522(iVar1))
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
				func_523(uParam1->f_10);
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
			func_1319(0);
			func_1318(0);
			func_1320(uParam1->f_6);
		}
	}
	if (!func_515(uParam1->f_10))
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
	iVar2 = func_207(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_515(iVar1))
	{
		bVar3 = true;
		if (func_1376(iVar1))
		{
			bVar4 = true;
		}
		if (func_522(iVar1))
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
			if (!func_391(uParam1->f_6))
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
	if (!func_508(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1390(uParam1->f_10);
		if (uParam1->f_2 && !func_391(uParam1->f_6))
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
	func_507(uParam1->f_10);
	if (func_508(uParam1->f_10))
	{
		iVar16 = func_254(uParam1->f_10);
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

bool func_851(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_852(int iParam0)
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

bool func_853(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_854(char[4] cParam0, bool bParam1)
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

float func_855(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_856(int iParam0, int iParam1, int iParam2)
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

bool func_857(var uParam0, int iParam1)
{
	switch (func_1393(uParam0))
	{
		case 0:
			if (!func_1394(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1395(uParam0, 1);
			break;
		case 1:
			func_1396(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_779(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1395(uParam0, 2);
			break;
		case 2:
			if (func_1397(uParam0))
			{
				func_1398(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1395(uParam0, 3);
			}
			break;
		case 3:
			if (func_864(&(uParam0->f_3)) >= 1f)
			{
				func_1395(uParam0, 4);
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
			func_1399(&iVar1, 0);
			release_script_audio_bank();
			func_1395(uParam0, 0);
			return true;
	}
	return false;
}

void func_858(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1400(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_859(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1401(cParam0, iVar0) };
	if (func_1403(&(cParam0->f_10792), Var1, func_1402(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1404(&(cParam0->f_10792), 524288))
		{
			func_371(cParam0, 67108864);
			func_1405(&(cParam0->f_10792), 524288);
		}
		func_1406(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_860(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_861(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1407(cParam0);
		func_1408(cParam0);
		return true;
	}
	if (func_1409(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_892(cParam0);
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
			func_1410(cParam0);
			func_860(cParam0, 524288);
			func_1411(cParam0);
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

bool func_862(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1412(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1413(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1414(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_418(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_841(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_863(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_863(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1415(uParam0);
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

float func_864(float fParam0)
{
	if (!func_26(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_483(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_535() - fParam0->f_1);
}

bool func_865()
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

void func_866(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_867(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			vVar0 = { func_215(1, 1) };
			break;
		case 1:
			vVar0 = { func_215(1, 0) };
			break;
		case 2:
			vVar0 = { func_215(1, 3) };
			break;
		case 3:
		case 4:
		case 5:
		case 25:
			vVar0 = { func_215(1, 4) };
			break;
	}
	func_1416();
	if (!func_382(&(Local_530[0]), 0))
	{
		if (func_382(func_381(cParam0, 1051047356, 0), 0))
		{
			Local_530[0] = func_381(cParam0, 1051047356, 1);
		}
		else
		{
			Local_530[0] = func_872(iVar470, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
	}
	if (does_entity_exist(&(Local_530[0])))
	{
		if (func_382(&(Local_530[0]), 0))
		{
			if (!does_blip_exist(iVar1206))
			{
				iLocal_1209 = _blip_add_for_entity(422991367, &(Local_530[0]));
				set_blip_name_from_text_file(iVar1206, "MRY3_BLIP_MARY");
			}
			_set_ped_body_component(&(Local_530[0]), -486951805);
			_update_ped_variation(&(Local_530[0]), false, true, true, true, false);
			set_ped_can_be_targetted(&(Local_530[0]), true);
			set_ped_config_flag(&(Local_530[0]), 297, true);
			set_ped_config_flag(&(Local_530[0]), 309, true);
			set_blocking_of_non_temporary_events(&(Local_530[0]), true);
			set_ped_relationship_group_hash(&(Local_530[0]), -1538724068);
			return true;
		}
	}
	return false;
}

Vector3 func_868(int iParam0, int iParam1)
{
	return func_964(iParam0, iParam1);
}

float func_869(int iParam0, int iParam1)
{
	return func_965(iParam0, iParam1);
}

int func_870(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return func_850(&uVar0, &Var1);
}

bool func_871(int iParam0, int iParam1)
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

int func_872(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1417(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_873(char[4] cParam0)
{
	if (func_33(cParam0) == 0)
	{
		vVar0 = { 2507.269f, -1461.026f, 45.3167f };
		fVar3 = 92.0544f;
	}
	else if (func_33(cParam0) == 1)
	{
		vVar0 = { func_868(2, 0) };
		fVar3 = func_869(2, 0);
	}
	else if (func_33(cParam0) == 2)
	{
		vVar0 = { func_868(2, 1) };
		fVar3 = func_869(2, 1);
	}
	else if (func_33(cParam0) >= 3)
	{
		vVar0 = { func_868(2, 2) };
		fVar3 = func_869(2, 2);
	}
	if (!func_382(&(Local_709[0]), 0))
	{
		Local_709[0] = func_872(iVar474, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_set_ped_body_component(&(Local_709[0]), 41788943);
		_update_ped_variation(&(Local_709[0]), false, true, true, true, false);
		set_ped_relationship_group_hash(&(Local_709[0]), 1030835986);
		set_blocking_of_non_temporary_events(&(Local_709[0]), true);
		func_145(cParam0, &(Local_709[0]), "MRY3_FATHER", 0);
		return false;
	}
	return true;
}

void func_874()
{
	iVar0 = func_207(1);
	iVar1 = 0;
	vVar2 = { 2647.098f, -1270.327f, 51.0841f };
	fVar5 = 113.0633f;
	if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_entity_in_volume(iVar0, func_1418(5), true, 0))
	{
		if (func_852(iVar0))
		{
			_0x0348469daa17576c(iVar0);
		}
		clear_ped_tasks_immediately(iVar0, false, true);
		func_772(iVar0, vVar2, fVar5, 2, 1073741824);
		iVar1 = _find_closest_active_scenario_point_of_type(vVar2, -1805387726, 2f, 0, false);
		if (_does_scenario_point_exist(iVar1))
		{
			_task_use_scenario_point(iVar0, iVar1, "", -1, false, true, 0, false, -1f, false);
		}
		else
		{
			task_stand_still(iVar0, -1);
		}
	}
}

void func_875(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		switch (iVar0)
		{
			case 4:
				vVar1 = { 2676.067f, -1268.667f, 55.77193f };
				vVar4 = { 0f, 0f, 25.83045f };
				vVar7 = { 28.17047f, 5.649572f, 11.3652f };
				sVar10 = "MARY3_VOL_INTRO_BLOCK";
				break;
			case 8:
				vVar1 = { 2564.333f, -1417.924f, 47.84305f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 7.000798f, 2.99244f, 6.073237f };
				sVar10 = "MARY3_VOL_BOX_COVER";
				break;
			case 11:
				if (!_does_volume_exist(&(iLocal_1223[11])))
				{
					iLocal_1223[11] = _create_volume_aggregate_with_custom_name("MARY3_VOL_BLOCK_CLIMBING");
					_0x39816f6f94f385ad(&(iLocal_1223[11]), 2559.047f, -1420.069f, 48.11821f, 0f, 0f, 0f, 8.622968f, 15.20198f, 7.235769f);
					_0x39816f6f94f385ad(&(iLocal_1223[11]), 2567.982f, -1421.171f, 48.11821f, 0f, 0f, 0f, 12.54362f, 3.617082f, 7.235769f);
				}
				break;
			case 6:
				vVar1 = { 2560.235f, -1415.119f, 47.20535f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 5.346095f, 9.083188f, 4.162855f };
				sVar10 = "MARY3_VOL_NAV_BLOCKING";
				break;
			case 7:
				vVar1 = { 2549.077f, -1414.007f, 46.65154f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.94653f, 3.838621f, 3.072046f };
				sVar10 = "MARY3_VOL_NAV_BLOCK_DOOR";
				break;
			case 24:
				vVar1 = { 2623.157f, -1418.104f, 46.56877f };
				vVar4 = { 0f, 0f, 1.609269f };
				vVar7 = { 37.17809f, 6.026463f, 6.014519f };
				sVar10 = "MARY3_VOL_PEDS_CLEAR";
				break;
			case 2:
				vVar1 = { 2361.5f, -855.7745f, 72.2333f };
				vVar4 = { 0f, 0f, 2.109299f };
				vVar7 = { 626.6743f, 1432.68f, 157.3131f };
				sVar10 = "MARY3_VOL_VEHICLE_CLEAR";
				break;
			case 32:
				vVar1 = { 2624.081f, -1422.021f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109299f };
				vVar7 = { 20.50032f, 3.544907f, 4.080611f };
				sVar10 = "MARY3_VOL_WAGON_CLEAR";
				break;
			case 25:
				vVar1 = { 2611.857f, -1389.085f, 47.08357f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 7.306688f, 3.567551f, 5.011181f };
				sVar10 = "MARY3_VOL_RIGHT_TRIGGER";
				break;
			case 26:
				vVar1 = { 2637.528f, -1397.875f, 45.88699f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 10.1378f, 12.53464f, 6.717197f };
				sVar10 = "MARY3_VOL_LEFT_TRIGGER";
				break;
			case 36:
				vVar1 = { 2260.451f, -960.2484f, 46.43104f };
				vVar4 = { 0f, 0f, -2.976917f };
				vVar7 = { 4.171563f, 13.77848f, 16.71082f };
				sVar10 = "MARY3_VOL_SPOT_TRIGGER";
				break;
			case 33:
				vVar1 = { 1910.067f, -1578.355f, 44.16736f };
				vVar4 = { -3.144623f, -1.484692f, -151.7873f };
				vVar7 = { 4.204058f, 1.762825f, 3.055763f };
				sVar10 = "MARY3_VOL_WAGON_LEFT_SIDE";
				break;
			case 34:
				vVar1 = { 1910.067f, -1578.355f, 44.16736f };
				vVar4 = { -3.144623f, -1.484692f, -151.7873f };
				vVar7 = { 4.204058f, 1.762825f, 3.055763f };
				sVar10 = "MARY3_VOL_WAGON_RIGHT_SIDE";
				break;
			case 5:
				vVar1 = { 2493.19f, -1448.861f, 48.13944f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 14.76307f, 42.51423f, 8.302655f };
				sVar10 = "MARY3_VOL_MCS1_CLEAR_AREA";
				break;
			case 9:
				vVar1 = { 2557.314f, -1415.538f, 47.05839f };
				vVar4 = { 0f, 0f, -179.5891f };
				vVar7 = { 12.3514f, 8.481095f, 4.624906f };
				sVar10 = "MARY3_VOL_FOLLOW_CLEAR_AREA";
				break;
			case 10:
				vVar1 = { 2560.229f, -1413.544f, 46.47549f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 6.479941f, 5.622358f, 3.292628f };
				sVar10 = "MARY3_VOL_FORCE_WALK";
				break;
			case 15:
				vVar1 = { 2586.052f, -1409.986f, 47.60594f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 4.348464f, 10.64148f, 5.761968f };
				sVar10 = "MARY3_VOL_ROAD_DISABLE_1";
				break;
			case 42:
				vVar1 = { 2635.976f, -1398.498f, 48.28503f };
				vVar4 = { 0f, 0f, 17.32687f };
				vVar7 = { 28.82826f, 48.79539f, 6.717197f };
				sVar10 = "MARY3_VOL_OUTRO_PED_CLEAR";
				break;
			case 38:
				vVar1 = { 2275.684f, -926.5105f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_1";
				break;
			case 39:
				vVar1 = { 2452.131f, -630.6329f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_2";
				break;
			case 40:
				vVar1 = { 2396.922f, -247.5679f, 57.32553f };
				vVar4 = { 0f, 0f, 14.53321f };
				vVar7 = { 254.1658f, 188.1887f, 46.93304f };
				sVar10 = "MARY3_VOL_CME_TRIGGER_3";
				break;
			case 12:
				vVar1 = { 2537.268f, -1426.316f, 46.57167f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.480352f, 2.607908f, 3.227798f };
				sVar10 = "MARY3_VOL_DIAG_CORNER";
				break;
			case 13:
				vVar1 = { 2561.78f, -1414.576f, 46.55922f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 2.27035f, 1f, 3.97613f };
				sVar10 = "MARY3_VOL_DIAG_CRATE";
				break;
			case 19:
				vVar1 = { 2638.473f, -1417.158f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109298f };
				vVar7 = { 7.168409f, 7.26614f, 4.080611f };
				sVar10 = "MARY3_VOL_CLEAR_RUN_LEFT";
				break;
			case 20:
				vVar1 = { 2611.186f, -1417.317f, 46.56877f };
				vVar4 = { 0f, 0f, 2.109298f };
				vVar7 = { 7.168409f, 7.26614f, 4.080611f };
				sVar10 = "MARY3_VOL_CLEAR_RUN_RIGHT";
				break;
			case 16:
				vVar1 = { 2583.654f, -1392.903f, 50.56699f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 15.07896f, 26.52871f, 11.67837f };
				sVar10 = "MARY3_VOL_WRONG_WAY_1";
				break;
			case 17:
				vVar1 = { 2628.71f, -1423.4f, 51.03245f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 26.11412f, 13.43156f, 11.67837f };
				sVar10 = "MARY3_VOL_WRONG_WAY_2";
				break;
			case 28:
				vVar1 = { 2596.123f, -1376.975f, 47.52084f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 3.311842f, 6.238957f, 4.992996f };
				sVar10 = "MARY3_VOL_WRONG_WAY_3";
				break;
			case 29:
				vVar1 = { 2596.171f, -1361.4f, 47.52084f };
				vVar4 = { 0f, 0f, -18.81132f };
				vVar7 = { 3.311842f, 7.965707f, 4.992996f };
				sVar10 = "MARY3_VOL_WRONG_WAY_4";
				break;
			case 21:
				vVar1 = { 2611.271f, -1392.067f, 47.19597f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 8.173466f, 10.76377f, 4.608119f };
				sVar10 = "MARY3_VOL_BLOCK_CLIMBING_2";
				break;
			case 30:
				vVar1 = { 2638.119f, -1415.428f, 45.2187f };
				vVar4 = { 0f, 0f, 7.327471f };
				vVar7 = { 1.917503f, 1f, 4.553709f };
				sVar10 = "MARY3_VOL_PLAYER_RUN_LEFT";
				break;
			case 31:
				vVar1 = { 2611.761f, -1416.637f, 45.2187f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1.917503f, 1f, 4.553709f };
				sVar10 = "MARY3_VOL_PLAYER_RUN_RIGHT";
				break;
			case 18:
				vVar1 = { 2570.024f, -1417.933f, 47.20535f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 14.36632f, 3.452018f, 4.162855f };
				sVar10 = "MARY3_VOL_ALLEY";
				break;
			case 14:
				vVar1 = { 2562.174f, -1413.903f, 46.54226f };
				vVar4 = { 0f, 0f, 16.78326f };
				vVar7 = { 3.283338f, 1.212145f, 2.851954f };
				sVar10 = "MARY3_VOL_BUMP_TRIGGER";
				break;
			case 22:
				vVar1 = { 2611.725f, -1397.968f, 47.96184f };
				vVar4 = { 0f, 0f, 0.912822f };
				vVar7 = { 7.327817f, 35.57869f, 6.451694f };
				sVar10 = "MARY3_VOL_FACT_ALLEY_CLEAR";
				break;
			case 23:
				vVar1 = { 2624.696f, -1383.871f, 47.96184f };
				vVar4 = { 0f, 0f, -90.00552f };
				vVar7 = { 7.327817f, 18.79066f, 6.451694f };
				sVar10 = "MARY3_VOL_FACT_ALLEY_NAVMESH";
				break;
			case 35:
				if (!_does_volume_exist(&(iLocal_1223[35])))
				{
					iLocal_1223[35] = _create_volume_aggregate_with_custom_name("MARY3_VOL_AVOID_ROAD");
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2584.77f, -1447.538f, 46.47818f, 0f, 0f, 55.99229f, 40.8517f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2594.667f, -1432.979f, 46.47818f, 0f, 0f, 43.52136f, 24.53756f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2615.017f, -1424.058f, 46.46979f, 0f, 0f, 0f, 64.37097f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2586.524f, -1432.854f, 46.46979f, 0f, 0f, 90.65791f, 24.78514f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2565.995f, -1468.55f, 46.47818f, 0f, 0f, 25.81751f, 19.81384f, 6.45993f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2415.569f, -1437.723f, 46.47818f, 0f, 0f, -38.9641f, 81.81699f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2591.012f, -1429.13f, 46.47818f, 0f, 0f, 43.52136f, 8.411131f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2461.86f, -1466.917f, 46.47818f, 0f, 0f, -17.80367f, 35.91303f, 7.131345f, 7.886738f);
					_0x39816f6f94f385ad(&(iLocal_1223[35]), 2518.231f, -1471.95f, 46.47818f, 0f, 0f, 0.138219f, 81.81699f, 7.131345f, 7.886738f);
				}
				break;
			case 43:
				if (!_does_volume_exist(&(iLocal_1223[43])))
				{
					iLocal_1223[43] = _create_volume_aggregate_with_custom_name("MARY3_VOL_THEATRE_CLEAR");
					_0x39816f6f94f385ad(&(iLocal_1223[43]), 2527.487f, -1321.362f, 49.30772f, 0f, 0f, -106.1684f, 20.97531f, 7.01f, 5.163333f);
					_0x39816f6f94f385ad(&(iLocal_1223[43]), 2531.963f, -1330.449f, 49.30772f, 0f, 0f, 0f, 20.97531f, 3.913322f, 5.163333f);
					_0x39816f6f94f385ad(&(iLocal_1223[43]), 2731.807f, -1402.828f, 47.25246f, 0f, 0f, -64.45999f, 17.78216f, 17.05902f, 5.902164f);
					_0x39816f6f94f385ad(&(iLocal_1223[43]), 2531.227f, -1279.95f, 50.20545f, 0f, 0f, 0f, 8.637694f, 12.01823f, 4.474741f);
					_0x39816f6f94f385ad(&(iLocal_1223[43]), 2634.701f, -1417.631f, 47.25246f, 0f, 0f, 0f, 31.93571f, 8.961099f, 5.902164f);
				}
				break;
			case 41:
				if (!_does_volume_exist(&(iLocal_1223[41])))
				{
					iLocal_1223[41] = _create_volume_aggregate_with_custom_name("MARY3_VOL_OUTRO_TRIGGER");
					_0x39816f6f94f385ad(&(iLocal_1223[41]), 2603.584f, -1367.832f, 47.52084f, 0f, 0f, -48.27879f, 3.311842f, 7.965707f, 4.992996f);
					_0x39816f6f94f385ad(&(iLocal_1223[41]), 2602.549f, -1375.762f, 47.52084f, 0f, 0f, 0f, 3.311842f, 10.90322f, 4.992996f);
					_0x39816f6f94f385ad(&(iLocal_1223[41]), 2611.618f, -1412.165f, 47.86766f, 0f, 0f, 2.109298f, 8.005536f, 7.26614f, 5.469234f);
					_0x39816f6f94f385ad(&(iLocal_1223[41]), 2646.868f, -1409.7f, 47.86766f, 0f, 0f, 26.11105f, 9.563106f, 7.26614f, 5.469234f);
					_0x39816f6f94f385ad(&(iLocal_1223[41]), 2639.9f, -1411.885f, 47.86766f, 0f, 0f, 7.045374f, 9.563106f, 7.26614f, 5.469234f);
				}
				break;
			case 27:
				if (!_does_volume_exist(&(iLocal_1223[27])))
				{
					iLocal_1223[27] = _create_volume_aggregate_with_custom_name("MARY3_VOL_BLOCK_CLIMBING_3");
					_0x39816f6f94f385ad(&(iLocal_1223[27]), 2638.909f, -1396.198f, 45.88699f, 0f, 0f, 21.85925f, 4.041228f, 16.73971f, 11.07725f);
					_0x39816f6f94f385ad(&(iLocal_1223[27]), 2642.038f, -1415.163f, 45.88699f, 0f, 0f, -82.41966f, 4.041228f, 12.77264f, 11.07725f);
					_0x39816f6f94f385ad(&(iLocal_1223[27]), 2641.816f, -1404.35f, 45.88699f, 0f, 0f, 89.33925f, 4.939544f, 12.77264f, 11.07725f);
					_0x39816f6f94f385ad(&(iLocal_1223[27]), 2648.401f, -1408.473f, 45.88699f, 0f, 0f, 22.34857f, 6.65543f, 12.77264f, 11.07725f);
					_0x39816f6f94f385ad(&(iLocal_1223[27]), 2612.506f, -1415.773f, 45.88699f, 0f, 0f, -90.06153f, 6.839558f, 9.456755f, 11.07725f);
				}
				break;
			case 37:
				if (!_does_volume_exist(&(iLocal_1223[37])))
				{
					iLocal_1223[37] = _create_volume_aggregate_with_custom_name("MARY3_VOL_ANIMAL_CLEAR");
					_0x39816f6f94f385ad(&(iLocal_1223[37]), 2120.552f, -991.1982f, 43.33574f, 0.437863f, 0.715294f, 47.89995f, 63.76992f, 66.79929f, 8.876685f);
					_0x39816f6f94f385ad(&(iLocal_1223[37]), 2250.044f, -864.2026f, 45.38305f, 0.437863f, 0.715294f, 47.89995f, 108.9317f, 118.0184f, 32.27951f);
				}
				break;
			case 0:
				if (!_does_volume_exist(&(iLocal_1223[0])))
				{
					iLocal_1223[0] = _create_volume_aggregate_with_custom_name("MARY3_VOL_INT_CLEAR_AREA");
					_0x39816f6f94f385ad(&(iLocal_1223[0]), 2713.793f, -1242.869f, 53.02395f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
					_0x39816f6f94f385ad(&(iLocal_1223[0]), 2674.628f, -1265.024f, 55.92817f, 0f, 0f, 25.01506f, 19.03873f, 14.94918f, 12.5923f);
				}
				break;
		}
		if ((((((iVar0 != 11 && iVar0 != 35) && iVar0 != 43) && iVar0 != 41) && iVar0 != 27) && iVar0 != 37) && iVar0 != 0)
		{
			if (!_does_volume_exist(&(iLocal_1223[iVar0])))
			{
				func_1419(iLocal_1223[iVar0], vVar1, vVar4, vVar7, sVar10);
			}
		}
		iVar0++;
	}
}

void func_876(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!_does_volume_exist(&(iLocal_1268[iVar0])))
		{
			iLocal_1268[iVar0] = _create_volume_cylinder(func_964(8, iVar0), 0f, 0f, 0f, 3f, 3f, 2f);
		}
		iVar0++;
	}
}

void func_877(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_878(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			break;
		case 1:
			func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 2:
			func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 3:
			func_1209(cParam0, "MRY3_OBJ_CATCHUP", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 4:
			func_1209(cParam0, "MRY3_OBJ_CHASE", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 5:
			func_1209(cParam0, "MRY3_OBJ_DRIVE", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 6:
			if (func_1193(65536))
			{
				if (!func_386(Global_1394141->f_1326, 8192))
				{
					func_163(&(Global_1394141->f_1326), 8192);
				}
				if (!Global_1394141->f_1328)
				{
					return 0;
				}
				if (!func_386(Global_1394141->f_1326, 4096))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

void func_879(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

int func_880(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_16)
	{
		if (func_1420(&(cParam0->f_7375), "MRY3_INT"))
		{
			if (!func_1193(268435456))
			{
				func_1192(cParam0, "MRY3_CONVO", 1);
				func_1206(268435456);
			}
			if (!func_378(65536))
			{
				if (does_entity_exist(func_207(7)))
				{
					func_379(func_207(7), func_215(12, 0), 2, 1073741824);
					func_380(65536);
				}
			}
			if (func_294())
			{
				set_anim_scene_bool(cParam0->f_7375.f_804, "Honor_is", true, false);
			}
			else
			{
				set_anim_scene_bool(cParam0->f_7375.f_804, "Honor_is", false, false);
			}
			if (!func_1193(65536) && !func_1193(131072))
			{
				func_1421(&(cParam0->f_7375), cParam0);
			}
		}
		if (!func_1193(131072))
		{
			if (func_1422(cParam0, &(Local_530[0]), "MaryLinton", 0, 1, 1))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					if (!is_entity_at_coord(iVar1199, func_868(12, 0), 3f, 3f, 3f, false, true, 0))
					{
						func_379(iVar1199, func_215(12, 0), 2, 1073741824);
					}
					if (!is_ped_on_mount(Global_35))
					{
						_set_ped_on_mount(Global_35, iVar1199, -1, true);
					}
					if (!is_ped_on_mount(&(Local_530[0])))
					{
						_set_ped_on_mount(&(Local_530[0]), iVar1199, 0, true);
					}
				}
			}
		}
		if (does_entity_exist(&(iLocal_1204[0])))
		{
		}
		if (func_1422(cParam0, &(iLocal_1204[0]), "A_M_M_HtlFancyTravellers_01", 0, 1, 0))
		{
			if (func_382(&(iLocal_1204[0]), 0))
			{
				delete_ped(iLocal_1204[0]);
			}
			if (func_382(&(iLocal_1204[1]), 0))
			{
				delete_ped(iLocal_1204[1]);
			}
		}
	}
	else if (iVar0 == iLocal_17)
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
		if (func_1227(1073741824))
		{
			func_1284(1073741824);
		}
		func_1223();
		if (func_1422(cParam0, &(Local_530[0]), "MaryLinton", 0, 1, 1))
		{
			iLocal_26 = 2;
		}
		if (func_1422(cParam0, &(Local_709[5]), "A_M_M_NBXDOCKWORKERS_01", 0, 1, 0))
		{
			func_172(Local_709[5]);
			if (does_entity_exist(iVar1218))
			{
				delete_object(&iLocal_1221);
			}
		}
	}
	else if (iVar0 == iLocal_19)
	{
		if (func_1422(cParam0, Global_35, "ARTHUR", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "ARTHUR"))
		{
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				if (Global_43838 == 1)
				{
					func_379(Global_35, func_215(0, 1), 2, 1073741824);
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(27), true);
					iLocal_31 = 3;
				}
				else if (Global_43838 == 2)
				{
					func_379(Global_35, func_215(0, 4), 2, 1073741824);
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(26), true);
					iLocal_31 = 3;
				}
				func_379(&(Local_709[0]), func_215(2, 2), 2, 1073741824);
				func_379(&(Local_530[0]), func_215(1, 4), 2, 1073741824);
			}
			else
			{
				func_1423(-668482597, 2000, 0, 1, 1, 0, 0, 0);
			}
		}
		if (func_1422(cParam0, &(Local_709[1]), "CS_ASHTON", 0, 1, 1))
		{
			if (Global_43838 == 1)
			{
				func_379(&(Local_709[1]), func_215(4, 0), 2, 1073741824);
			}
			else if (Global_43838 == 2)
			{
				func_379(&(Local_709[1]), func_215(4, 1), 2, 1073741824);
			}
			else
			{
				func_379(&(Local_709[1]), func_215(4, 1), 2, 1073741824);
			}
			freeze_entity_position(&(Local_709[1]), false);
		}
	}
	else if (iVar0 == iLocal_22)
	{
		set_ped_max_move_blend_ratio(Global_35, 0f);
		if (!_0xa24c1d341c6e0d53(0, 0, 0) && !is_first_person_aim_cam_active())
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, 0, false);
			}
		}
		if (!func_378(131072))
		{
			set_bit(&(Global_1956580->f_1), 5);
			func_1293(Global_35);
			func_380(131072);
		}
		if (func_378(4096))
		{
			func_1257(4096);
		}
		if (func_1227(33554432))
		{
			func_1284(33554432);
		}
		if (!func_1193(65536) && !func_1193(131072))
		{
			func_1421(&(cParam0->f_7375), cParam0);
		}
		if (func_1422(cParam0, Global_35, "ARTHUR", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "ARTHUR"))
		{
			if (func_1193(65536))
			{
				if (_does_anim_scene_exist(&(Local_38[13])))
				{
					if (!_is_anim_scene_started(&(Local_38[13]), false))
					{
						func_772(Global_35, 2546.104f, -1294.094f, 48.2355f, 175.7322f, 2, 1073741824);
						func_772(&(Local_530[0]), 2545.532f, -1293.922f, 49.2009f, 175.7322f, 2, 1073741824);
						start_anim_scene(&(Local_38[13]));
					}
					else
					{
						iLocal_35 = 3;
					}
				}
			}
			if (func_1193(131072))
			{
				func_134(cParam0, 29);
			}
		}
		if (func_775(&(cParam0->f_7375), 512))
		{
			if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
			{
				vLocal_522 = { 2690.132f, -1391.983f, 45.44843f };
			}
			else
			{
				vLocal_522 = { 2693.239f, -1408.94f, 45.6074f };
			}
		}
		else if (has_anim_event_fired(iVar1215, -1995617374))
		{
			if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
			{
				vLocal_522 = { 2692.113f, -1398.907f, 45.52513f };
			}
			else
			{
				vLocal_522 = { 2696.837f, -1416.611f, 45.60464f };
			}
		}
		if ((_0x1f0e401031e20146(Global_43800, "4-Refuses") || _0x1f0e401031e20146(Global_43800, "3A-PlayerLeftEarly")) || _0x1f0e401031e20146(Global_43800, "3B-PlayerStayed"))
		{
			if (has_anim_event_fired(iVar1215, -1995617374) || (func_775(&(cParam0->f_7375), 512) && is_screen_fading_in()))
			{
				if (!func_378(2097152))
				{
					if (does_entity_exist(iVar1215))
					{
						remove_anim_scene_entity(Global_43800, "trolley01x", iVar1215);
						_0xc9ea26893c9e4024(iVar1215, vLocal_522, 0);
						if (func_775(&(cParam0->f_7375), 512) && (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active()))
						{
							set_train_speed(iVar1215, 6.5f);
						}
						else
						{
							set_train_speed(iVar1215, 5.5f);
						}
						func_380(2097152);
					}
				}
			}
		}
		if (has_anim_event_fired(Global_35, -1780970610))
		{
			func_1122(400, 0, 0, 1, 1);
		}
	}
	else if (iVar0 == iLocal_23)
	{
		set_ped_max_move_blend_ratio(Global_35, 0f);
		if (!_0xa24c1d341c6e0d53(0, 0, 0) && !is_first_person_aim_cam_active())
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, 0, false);
			}
		}
		if (func_775(&(cParam0->f_7375), 512))
		{
			if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
			{
				vLocal_522 = { 2690.132f, -1391.983f, 45.44843f };
			}
			else
			{
				vLocal_522 = { 2693.239f, -1408.94f, 45.6074f };
			}
		}
		else if (has_anim_event_fired(iVar1215, -1995617374))
		{
			if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
			{
				vLocal_522 = { 2692.113f, -1398.907f, 45.52513f };
			}
			else
			{
				vLocal_522 = { 2696.837f, -1416.611f, 45.60464f };
			}
		}
		if (has_anim_event_fired(iVar1215, -1995617374) || (func_775(&(cParam0->f_7375), 512) && is_screen_fading_in()))
		{
			if (!func_378(2097152))
			{
				if (does_entity_exist(iVar1215))
				{
					remove_anim_scene_entity(Global_43800, "trolley01x", iVar1215);
					_0xc9ea26893c9e4024(iVar1215, vLocal_522, 0);
					if (func_775(&(cParam0->f_7375), 512) && (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active()))
					{
						set_train_speed(iVar1215, 6.5f);
					}
					else
					{
						set_train_speed(iVar1215, 5.5f);
					}
					func_380(2097152);
				}
			}
		}
	}
	return 1;
}

void func_881(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_882(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 3:
			break;
	}
	return 0;
}

void func_883(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_884(int iParam0)
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

void func_885(int iParam0, int iParam1)
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

void func_886()
{
	iVar0 = 137;
	while (iVar0 <= 324)
	{
		func_884(iVar0);
		func_885(iVar0, 32);
		iVar0++;
	}
}

void func_887(int iParam0)
{
	func_981(iParam0, 4, 1);
}

void func_888(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_889(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1424(iParam0, 0, 0);
	if (func_454(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1425(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1426(iParam0, 1);
			}
			else
			{
				func_1427(iParam0, 1);
			}
		}
		else
		{
			func_1428(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1429())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_890(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = func_1430(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_452(0))
	{
		iVar1 = get_entity_model(iVar0);
		func_635(iVar1, 0);
	}
	else if (is_ped_human(get_ped_index_from_entity_index(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar0), 1, 1, get_entity_model(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = &Var2.f_1[iVar25];
			if (func_444(iVar26, 0))
			{
				if (!bParam1 || func_1431(iVar26))
				{
					func_310(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = _get_ped_damage(get_ped_index_from_entity_index(iVar0));
		if (func_339(-269048282, 1, 0))
		{
			if (iVar39 < 2 && get_random_int_in_range(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		iVar42 = func_1432(get_ped_index_from_entity_index(iVar0), iVar41);
		_0x6b89faa36fc909a3(&iVar27, get_ped_index_from_entity_index(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_1433(iVar0) && !func_1434(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_1431(&(iVar27[iVar38])))
				{
					func_310(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_1435(iVar0);
	if (!func_444(iVar43, 0))
	{
		iVar43 = func_1436(iVar0);
	}
	if (func_444(iVar43, 0))
	{
		func_1437(iVar43, 1, 1, -142743235, 0);
	}
	_0x0d0db2b6af19a987(&iVar0);
}

void func_891(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (!func_1193(131072))
	{
		if (!func_378(1))
		{
			func_1438(cParam0);
		}
	}
	if (get_clock_hours() >= 18)
	{
		set_clock_time(18, 0, 0);
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		if (func_1227(1073741824))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		if (does_entity_exist(&(Local_709[5])))
		{
			if (_0xfdecca06e8b81346(&(Local_709[5])))
			{
			}
		}
	}
	if (iVar0 == iLocal_18 || iVar0 == iLocal_19)
	{
		if (!get_ped_config_flag(Global_35, 299, true))
		{
			set_ped_config_flag(Global_35, 299, true);
		}
	}
	if (iVar0 == iLocal_19)
	{
		func_1439();
		if (func_8(cParam0, 8))
		{
			func_875(24, 43);
		}
		if (!func_1250(cParam0))
		{
		}
		else if (!func_1251(cParam0, 2, 4))
		{
		}
		else
		{
			if (!func_1252(&(Local_709[2]), iVar1213, 0))
			{
				func_1253(Local_709[2], &iLocal_1216, -1, 1);
			}
			if (!func_1252(&(Local_709[3]), iVar1213, 0))
			{
				func_1253(Local_709[3], &iLocal_1216, 0, 1);
			}
			if (!func_1254(&(Local_709[4])))
			{
				func_1255(&(Local_709[4]), &(Local_709[10]), 0, -1, 1);
			}
		}
		if (!func_1256())
		{
		}
	}
	if (iVar0 >= iLocal_19)
	{
		func_1440();
		if (!func_378(256))
		{
			delete_all_trains();
			set_random_trains(false);
			func_380(256);
		}
	}
	if (iVar0 == iLocal_19 || iVar0 == iLocal_20)
	{
		func_1275(cParam0, &(Local_530[0]), 1);
		iVar1 = _get_last_mount(Global_35);
		if ((func_382(iVar1, 0) && !func_1268(Global_35, iVar1, 0)) && !func_871(iVar1, -982327190))
		{
			task_stand_still(iVar1, -1);
		}
	}
	if (iVar0 == iLocal_20 || iVar0 == iLocal_21)
	{
		func_1441(cParam0);
	}
	if (iVar0 == iLocal_21 || iVar0 == iLocal_22)
	{
		if (func_378(4096) || func_1227(33554432))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (iVar0 == iLocal_22)
	{
		if (func_1193(65536) || func_120(cParam0, 4))
		{
			func_1442(cParam0);
		}
		_disable_first_person_cam_this_frame_2();
	}
}

void func_892(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1443(cParam0);
}

void func_893(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_205())
			{
				if (func_864(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_212(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_894(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1444(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1445();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1446(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_895(char[4] cParam0)
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
		if (func_230() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_230() && !func_54())
	{
		func_860(cParam0, 1048576);
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
			func_860(cParam0, 134217728);
		}
	}
}

void func_896(char[4] cParam0)
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

void func_897(char[4] cParam0)
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

void func_898(char[4] cParam0)
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

int func_899(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_246(cParam0->f_5423[iVar0]))
		{
			func_1447(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_900(char[4] cParam0, int iParam1, int iParam2)
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
	if (!func_1451(cParam0, iParam1, iParam2))
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

int func_901(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_902(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_903(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_212(&(cParam0->f_603));
	}
}

void func_904(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_905(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_864(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_247(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_248(cParam0->f_5421))
		{
			iVar2 = func_249(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1452(cParam0->f_5421, iVar1);
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

float func_906(char[4] cParam0)
{
	return func_864(&(cParam0->f_603));
}

bool func_907(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_908(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_900(cParam0, iParam1, 4))
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
		func_1453(cParam0);
		if (func_1454(cParam0))
		{
			func_1455(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_860(cParam0, 524288);
		func_1307(&(cParam0->f_7375), 4);
		if (func_1444(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1445();
		}
		return true;
	}
	return false;
}

void func_909(char[4] cParam0)
{
	func_1456(cParam0);
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

bool func_910(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_859(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_860(cParam0, 2097152);
			func_257(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_902(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1401(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_859(cParam0))
			{
				func_860(cParam0, 2097152);
				func_861(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_861(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_859(cParam0))
		{
			func_860(cParam0, 2097152);
			func_1408(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_861(cParam0, Var0);
	}
	return true;
}

bool func_911(char[4] cParam0)
{
	return func_1457(&(cParam0->f_7375));
}

void func_912(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1458(cParam0))
		{
			func_429(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1459(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_913(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_246(cParam0->f_5423[iVar1]))
		{
			if (func_1460(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1461(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_914(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1462(cParam0))
		{
			func_429(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1459(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_915(char[4] cParam0)
{
	switch (func_1463(&iVar0))
	{
		case 1:
			func_1464(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_182(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_916(char[4] cParam0, int iParam1)
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

int func_917(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1407(cParam0);
		func_860(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1401(cParam0, iParam1) };
	if (func_1465(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_918(char[4] cParam0, int iParam1)
{
	func_1466(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_217(cParam0, iParam1));
}

void func_919(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_904(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_860(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_860(cParam0, 4);
		func_860(cParam0, 8192);
		func_860(cParam0, 536870912);
		func_257(cParam0, 4);
		func_65(0);
		func_64(0);
		func_860(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1467(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_371(cParam0, 524288);
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

void func_920(bool bParam0)
{
	if (!func_189(0, 0, 1) || bParam0)
	{
		iVar0 = func_1013();
		iVar1 = func_1016(iVar0);
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

bool func_921(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

var func_922(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
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

bool func_923(char[4] cParam0)
{
	return true;
}

bool func_924(char[4] cParam0)
{
	return true;
}

int func_925(char[4] cParam0)
{
	return 1;
}

void func_926(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_927(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_928(int iParam0, int iParam1)
{
	if (!func_433(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_929(int iParam0)
{
	if (func_1473())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_930(int iParam0, int iParam1, var uParam2)
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

bool func_931()
{
	return !&Global_1911774;
}

void func_932(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_933(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_934(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_935(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_936(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_938(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_940(&Var0, func_939(0));
	}
	if (!func_941(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_944(iVar14);
	return uVar15;
}

int func_937(bool bParam0)
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

struct<14> func_938(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_939(bool bParam0)
{
	iVar0 = func_937(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_946(923904168, func_1143(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_946(923904168, func_1143(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_946(923904168, func_1143(bParam0), -740156546, 0);
}

void func_940(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_941(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_937(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_942(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_943(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1474(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1147(*uParam1, &Var0, bParam6, 0))
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
	if (!func_452(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_937(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_944(int iParam0)
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

bool func_945(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1474(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_452(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_937(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_946(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_444(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_937(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_947(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_571(43))
		{
			if (func_580(iParam0, 412399755))
			{
				func_1075(-1791518714);
				if (func_1076() == 0)
				{
					func_358(0, 10);
					iVar0 = func_1475(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1078(iParam0) < func_1079(iParam0))
						{
							func_577(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_571(44))
		{
			if (func_580(iParam0, 709057512))
			{
				func_1075(-2087881550);
				if (func_1076() == 1)
				{
					func_358(0, 10);
					iVar0 = func_1475(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1078(iParam0) < func_1079(iParam0))
						{
							func_577(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_571(45))
		{
			if (func_580(iParam0, -1478961327))
			{
				func_1075(1908068621);
				if (func_1076() == 2)
				{
					func_358(0, 10);
					iVar0 = func_1475(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1078(iParam0) < func_1079(iParam0))
						{
							func_577(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_571(46))
		{
			if (func_580(iParam0, -1238404098))
			{
				func_1075(1611247019);
				if (func_1076() == 3)
				{
					func_358(0, 10);
					iVar0 = func_1475(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1078(iParam0) < func_1079(iParam0))
						{
							func_577(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_571(47))
		{
			if (func_580(iParam0, 1160548794))
			{
				func_1075(1319635688);
				if (func_1076() == 4)
				{
					func_358(0, 10);
					iVar0 = func_1475(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1078(iParam0) < func_1079(iParam0))
						{
							func_577(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_948(int iParam0)
{
	return iParam0 != 0;
}

bool func_949(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_950(int iParam0)
{
	iVar0 = func_461(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1476(iVar0);
}

int func_951(int iParam0, int iParam1)
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
			func_1477(iVar2);
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

void func_952()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_953(int iParam0, int iParam1)
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

int func_954(int iParam0)
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

void func_955(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_956(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_957(int iParam0, int iParam1)
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
			func_1478((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1478(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_182(&(Global_1898164->f_1[0])))
	{
		func_194(&(Global_1898164->f_1[0]), 3);
	}
}

void func_958(int iParam0, int iParam1, bool bParam2)
{
	if (!func_479(iParam0))
	{
		return;
	}
	func_1479(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_959(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_960(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_961(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_962()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_963(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1480(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2496.714f, -1449.32f, 46.4004f;
				case 1:
					return 2611.882f, -1416.146f, 45.2808f;
				case 2:
					return 2667.999f, -1267.186f, 52.5174f;
				case 3:
					return 2629.009f, -1385.906f, 46.2792f;
				case 4:
					return 2638.111f, -1415.061f, 45.3699f;
				case 5:
					return 2564.781f, -1418.028f, 46.1963f;
				case 6:
					return 2629.551f, -1386.395f, 46.2155f;
				case 7:
					return 2608.005f, -1419.578f, 45.4451f;
				case 8:
					return 2635.685f, -1418.359f, 45.4399f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2495.802f, -1444.102f, 46.3275f;
				case 1:
					return 2669.94f, -1269.536f, 51.006f;
				case 2:
					return 2625.438f, -1377.62f, 45.69f;
				case 3:
					return 2563.787f, -1417.386f, 46.1675f;
				case 4:
					return 2620.136f, -1385.286f, 46.2428f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2502.55f, -1443.829f, 45.3126f;
				case 1:
					return 2587.055f, -1419.5f, 46.2489f;
				case 2:
					return 2620.183f, -1386.184f, 46.2515f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2497.516f, -1451.117f, 45.3393f;
				case 1:
					return 2507.615f, -1432.438f, 45.3223f;
				case 2:
					return 2616.001f, -1377.403f, 45.2553f;
				case 3:
					return 2496.928f, -1454.166f, 45.3152f;
				case 4:
					return 2626.388f, -1379.105f, 45.1696f;
				case 5:
					return 2638.231f, -1417.223f, 45.3576f;
				case 6:
					return 2577.725f, -1417.278f, 45.315f;
				case 7:
					return 2577.65f, -1418.425f, 45.3641f;
				case 8:
					return 2557.726f, -1417.636f, 45.1369f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2588.303f, -1440.807f, 45.4894f;
				case 1:
					return 2606.273f, -1423.878f, 45.4104f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2582.7f, -1446.572f, 45.4204f;
				case 1:
					return 2408.861f, -1428.505f, 44.827f;
				case 2:
					return 2078.942f, -1033.068f, 42.4332f;
				case 3:
					return 2602.434f, -1422.932f, 45.4816f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2583.369f, -1430.951f, 45.5f;
				case 1:
					return 2640.914f, -1420.747f, 45.3081f;
				case 2:
					return 2602.829f, -1430.352f, 45.4955f;
				case 3:
					return 2622.523f, -1420.9f, 45.4055f;
				case 4:
					return 2605.46f, -1427.89f, 45.4089f;
				case 5:
					return 2602.893f, -1430.387f, 45.4047f;
				case 6:
					return 2583.355f, -1424.999f, 45.2854f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2581.206f, -1421.794f, 45.3306f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2505.676f, -1426.501f, 45.1694f;
				case 1:
					return 2516.323f, -1434.497f, 45.3648f;
				case 2:
					return 2527.776f, -1432.66f, 45.3418f;
				case 3:
					return 2533.618f, -1428.373f, 45.2831f;
				case 4:
					return 2541.378f, -1427.477f, 45.2044f;
				case 5:
					return 2546.545f, -1415.776f, 45.1651f;
				case 6:
					return 2552.502f, -1412.87f, 45.1466f;
				case 7:
					return 2562.353f, -1415.984f, 45.1809f;
				case 8:
					return 2566.911f, -1416.686f, 45.2463f;
				case 9:
					return 2581.475f, -1419.808f, 45.3294f;
				case 10:
					return 2590.353f, -1417.617f, 45.3184f;
				case 11:
					return 2593.355f, -1418.873f, 45.3698f;
				case 12:
					return 2607.483f, -1418.919f, 45.3847f;
				case 13:
					return 2613.187f, -1416.945f, 45.2949f;
				case 14:
					return 2614.115f, -1411.299f, 45.5156f;
				case 15:
					return 2609.315f, -1396.108f, 45.2304f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2546.937f, -1415.839f, 45.2274f;
				case 1:
					return 2546.773f, -1415.107f, 45.3285f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2548.1f, -1470.444f, 45.1848f;
				case 1:
					return 2580.395f, -1452.726f, 45.4781f;
				case 2:
					return 2595.333f, -1433.062f, 45.4986f;
				case 3:
					return 2575.907f, -1462.534f, 45.2863f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2640.273f, -1419.894f, 45.3832f;
				case 1:
					return 2582.483f, -1430.91f, 45.4136f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2667.999f, -1267.186f, 51.0947f;
				case 1:
					return 2493.328f, -1444.25f, 45.1124f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2226.699f, -1365.706f, 40.25f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_965(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 354.13f;
				case 1:
					return 181.37f;
				case 2:
					return 136.52f;
				case 3:
					return 250.37f;
				case 4:
					return -172.43f;
				case 5:
					return 269.2301f;
				case 6:
					return 239.33f;
				case 7:
					return -223.92f;
				case 8:
					return 90.12f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 354.13f;
				case 1:
					return 23.395f;
				case 2:
					return 225.64f;
				case 3:
					return 268.405f;
				case 4:
					return 194.91f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 170.9488f;
				case 1:
					return 239.24f;
				case 2:
					return 315.69f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 270f;
				case 2:
					return 66.9498f;
				case 3:
					return 0.332f;
				case 4:
					return 42.3758f;
				case 5:
					return 4.42f;
				case 6:
					return 178.835f;
				case 7:
					return 358.75f;
				case 8:
					return 93.38f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 146.615f;
				case 1:
					return 94.515f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 146.34f;
				case 1:
					return 55.3938f;
				case 2:
					return 317.835f;
				case 3:
					return 93.295f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -180.625f;
				case 1:
					return 95.4f;
				case 2:
					return -97.92f;
				case 3:
					return 90.005f;
				case 4:
					return 147.6f;
				case 5:
					return -95.4f;
				case 6:
					return 181.4219f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1.9744f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 269.09f;
				case 1:
					return 274.475f;
				case 2:
					return 269.6563f;
				case 3:
					return 3.175f;
				case 4:
					return 270.1063f;
				case 5:
					return 270.1063f;
				case 6:
					return 270.1063f;
				case 7:
					return 252.7238f;
				case 8:
					return 271.8033f;
				case 9:
					return 271.8033f;
				case 10:
					return 271.8033f;
				case 11:
					return 271.8033f;
				case 12:
					return 271.8033f;
				case 13:
					return 271.8033f;
				case 14:
					return 271.8033f;
				case 15:
					return 271.8033f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 90.595f;
				case 1:
					return 180.82f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -94.045f;
				case 1:
					return -36.635f;
				case 2:
					return -38.76f;
				case 3:
					return 325.495f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 182.76f;
				case 1:
					return 269.28f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 136.51f;
				case 1:
					return 179.745f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 93.19f;
			}
			break;
	}
	return 0f;
}

void func_966(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1481();
	}
	else
	{
		return;
	}
	func_1482();
	Global_40.f_9.f_14 = func_277();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1483())
		{
			func_362(Global_1310720->f_1);
		}
		else if (func_1484() == func_363(Global_36, 1) && func_1485() != 2)
		{
			func_362(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_362(Global_36);
		}
		func_1486(Global_36, &vVar0, &uVar4);
		if (!func_1483())
		{
			if (func_1487(vVar0, Global_36) < func_1487(Global_40.f_9.f_7, Global_36))
			{
				func_362(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_363(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1486(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_221(Global_1935630, 8192);
	}
	func_1488();
}

bool func_967(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_246(cParam0->f_5423[iVar0]))
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

bool func_968(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_246(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_969(int iParam0, int iParam1, bool bParam2)
{
	if (!func_970(iParam0))
	{
		return;
	}
	func_1489(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_970(int iParam0)
{
	return iParam0 > -1;
}

bool func_971(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_972(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_970(iParam0))
		{
			return;
		}
	}
	func_1490(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_973(int iParam0)
{
	func_972(iParam0, 36, 1);
}

void func_974(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_970(iParam0))
		{
			return;
		}
	}
	func_1490(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_975(int iParam0, bool bParam1)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1491(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_976(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_970(iParam0))
		{
			return false;
		}
	}
	func_1490(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_977(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_500(iParam0))
	{
		iVar1 = func_537(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1492(iParam0);
		}
	}
	if (func_976(iParam0, 5, 1))
	{
		set_ped_config_flag(func_537(iParam0), 137, true);
	}
}

void func_978(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_970(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_974(iParam0, 50, 1);
		func_974(iParam0, 48, 1);
		func_974(iParam0, 49, 1);
		func_974(iParam0, 51, 1);
		func_974(iParam0, 52, 1);
		func_974(iParam0, 54, 1);
		func_974(iParam0, 55, 1);
	}
	else
	{
		func_972(iParam0, 50, 1);
		func_972(iParam0, 48, 1);
		func_972(iParam0, 49, 1);
		func_972(iParam0, 51, 1);
		if (bParam3)
		{
			func_972(iParam0, 54, 1);
		}
		else
		{
			func_974(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_972(iParam0, 52, 1);
			if (bParam3)
			{
				func_972(iParam0, 55, 1);
			}
		}
		else
		{
			func_974(iParam0, 52, 1);
			if (!bParam3)
			{
				func_974(iParam0, 55, 1);
			}
		}
	}
}

void func_979(int iParam0, bool bParam1)
{
	if (!func_970(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_537(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_537(iParam0), 204, false);
	}
}

void func_980(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (func_501(iParam0))
	{
		if (!func_250(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_976(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_975(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_537(iParam0);
	if (((does_entity_exist(iVar1) && func_1493(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_972(iParam0, 2, 1);
	}
	else
	{
		func_1494(iParam0);
		func_972(iParam0, 1, 1);
	}
}

void func_981(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_500(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_982(int iParam0)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_983(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_970(iParam1))
	{
		return;
	}
	iVar0 = func_982(iParam1);
	if (func_1495(iParam1))
	{
		if (!func_1496(iParam1))
		{
			return;
		}
	}
	func_974(iParam1, 39, 1);
	func_1497(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1497(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1497(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_972(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1498(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_984(int iParam0)
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

void func_985(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1499(iVar6);
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

void func_986(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

bool func_987(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_988(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1501(func_1500(255), 109029619));
	}
	else if (func_296())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1015();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_989(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_990(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1501(func_1500(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_296())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1015())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_991(int iParam0)
{
	iParam0 = func_258(iParam0);
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

float func_992(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_993(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	iVar1 = func_989(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_989(iParam0) + 1;
	fVar6 = func_1502(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1503(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_994(int iParam0)
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

void func_995(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_996()
{
	if (func_330())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_997(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1504((Global_40.f_4283.f_325 + iParam0));
}

void func_998(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_996())
	{
		func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_999(int iParam0)
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

char* func_1000(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1001(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1002(int iParam0)
{
	func_1010(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1003(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1004(1);
	}
}

void func_1004(bool bParam0)
{
	if (bParam0)
	{
		func_926(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_927(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1005(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -15;
	}
	return func_1505(iParam0);
}

bool func_1006(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_682(iParam1) || !func_682(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1007(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1008(int iParam0)
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

bool func_1009(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1010(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1506(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1011(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1012(int iParam0, int iParam1, bool bParam2)
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

int func_1013()
{
	iVar0 = func_543();
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

int func_1014(int iParam0)
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

bool func_1015()
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

int func_1016(int iParam0)
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

int func_1017()
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

void func_1018(int iParam0, bool bParam1, int iParam2)
{
	func_1507((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1508(iParam0);
}

void func_1019(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1509(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1020(bool bParam0)
{
	bVar3 = false;
	if (func_1510(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1511(iVar5, &iVar2, &iVar0))
			{
				if (!func_444(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1512(iVar2);
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
							if (func_449(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1013() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1013() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1513();
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

char* func_1021(int iParam0)
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

bool func_1022(int iParam0)
{
	return func_449(iParam0) == -427144552;
}

bool func_1023(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_581(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1028(iParam0, &uVar0, 1, 0, 0);
	}
	return func_339(iParam0, 1, 0);
}

void func_1024(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_449(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_586(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_587(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_448(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_446(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1025(int iParam0, int iParam1)
{
	if (func_580(iParam0, 58855631))
	{
		func_1160(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1026(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	if (!func_452(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_937(bParam3), iParam0);
}

int func_1027(int iParam0, bool bParam1)
{
	if (func_591(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_937(bParam1), iParam0, 0);
}

bool func_1028(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1514(&iParam0);
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	if (!func_452(0))
	{
		bParam3 = true;
	}
	if (func_1022(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_939(0) };
			Var4.f_9 = -1591664384;
			if (!func_1049(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1050(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1144(iParam0, 1))
			{
				if (!func_1049(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1050(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1515(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1026(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1516(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_937(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1029()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1030(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1031(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1517(iParam0);
	fVar1 = func_1518(iParam0);
	if ((Global_1347477->f_117 || !func_582(31)) || !func_1519(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1520(iVar0) >= 7)
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
	func_1521(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_686(_create_var_string(6, func_1522(iParam0), fVar1), "itemtype_textures", func_1523(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1032(int iParam0)
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

int func_1033(int iParam0, int iParam1)
{
	if (!func_1175(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1034(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_576() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1524(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1525(), 12);
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
			else if (func_1071() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1526(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1071(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1527(), 13);
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
			else if (func_1072() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1528(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1072(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1033(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1035(int iParam0, int iParam1, int iParam2)
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

bool func_1036(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1037(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1038(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1529(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_339(iVar2, 1, 0) || func_1531(func_1530(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1042(func_1529(iVar0))), func_1042(func_1529(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1071() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1532(iVar0)), func_1532(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1526() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1532(iVar0)), func_1532(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1532(iVar0)), func_1532(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1082(iParam3, func_1533(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1078(iVar2) - iParam7) >= func_1033(iParam3, func_1534(iVar0));
				}
				else
				{
					bVar1 = func_1078(iVar2) >= func_1033(iParam3, func_1534(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1078(iVar2) + iParam7) >= func_1033(iParam3, func_1534(iVar0));
			}
			else
			{
				bVar1 = func_1078(iVar2) >= func_1033(iParam3, func_1534(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1535(iVar2)), func_1535(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1536(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1537(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1537(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1072() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1538(iVar0)), func_1538(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1528() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1538(iVar0)), func_1538(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1538(iVar0)), func_1538(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1082(iParam3, func_1533(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1078(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1539(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1539(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1540(iVar2)), func_1540(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1039(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1527() >= 13)
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

bool func_1040(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_182(func_195(0)) && ((func_1541(0) == 1 || func_1541(0) == 8) || func_1541(0) == 6))
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

var func_1041(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1042(int iParam0)
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

bool func_1043(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1044(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1045(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1046(int iParam0)
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
			func_1542(1);
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
			func_1543(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1543(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1543(3);
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
			func_1544(1);
			break;
		case 34:
			func_1545(1);
			break;
		case 35:
			func_1546(1);
			break;
		case 36:
			break;
		case 37:
			func_1547(0);
			break;
		case 38:
			func_1548(0);
			break;
		case 39:
			func_1549(0);
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
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_317(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_317(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_317(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_317(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1109(99217379) || func_1550(99217379) == 2110595215)
				{
					if (func_1015())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_339(iVar0, 1, 0))
					{
						func_632(iVar0, 1, 752097756);
					}
					func_611(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_339(1013902307, 1, 0))
				{
					func_632(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_339(1013902307, 1, 0))
				{
					func_632(1013902307, 1, 752097756);
				}
				if (!func_339(142640135, 1, 0))
				{
					func_632(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_339(786809402, 1, 0))
				{
					func_632(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_339(786809402, 1, 0))
				{
					func_632(786809402, 1, 752097756);
				}
				if (!func_339(-518019409, 1, 0))
				{
					func_632(-518019409, 1, 752097756);
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
			func_1551();
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

bool func_1047(int iParam0)
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

int func_1048(int iParam0, int iParam1)
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
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1049(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1516(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1050(int iParam0, var uParam1, int iParam2)
{
	if (func_1552(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

void func_1051(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1553(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1052(int iParam0)
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
	iVar2 = func_277();
	func_326(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1053(int iParam0)
{
	if (func_1554(iParam0))
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

bool func_1054(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1055(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1056(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_582(50))
			{
				if (!func_582(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_582(51))
			{
				if (!func_582(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1057(int iParam0, int iParam1, var uParam2)
{
	if (!func_444(iParam1, 0))
	{
		return false;
	}
	if (func_449(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_584(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_654(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_580(iParam1, 866047851))
	{
		iVar5 = func_655(iVar4, 1);
		if (func_1555(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_584(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_580(iParam1, -1638171711))
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
			if (func_1556(1868067663, &uVar0))
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
				iVar10 = func_1557(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1557(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_584(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_580(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1558(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1058()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1059()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1060()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_339(func_1559(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1061(int iParam0)
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

bool func_1062(int iParam0, int iParam1)
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
	if (func_339(iVar0, 1, 0) && func_339(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1063(int iParam0)
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

bool func_1064(int iParam0, int iParam1)
{
	iVar0 = func_1560(iParam0);
	if (iVar0 != -15)
	{
		func_326(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_683(iVar0, 1);
	}
	return false;
}

void func_1065(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1066(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1067(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1068(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1069(int iParam0)
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
	iVar1 = func_1078(iVar9);
	iVar2 = func_1078(iVar10);
	iVar3 = func_1078(iVar11);
	iVar5 = func_1079(iVar9);
	iVar6 = func_1079(iVar10);
	iVar7 = func_1079(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1078(iVar12);
		iVar8 = func_1079(iVar12);
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

void func_1070(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1071()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1561(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1072()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1073(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1539(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1539(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1539(iVar0))
		{
			*iParam2++;
		}
		if (func_1539(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1539(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1539(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1539(iVar0))
		{
			*iParam2++;
		}
		if (func_1539(iVar1))
		{
			*iParam2++;
		}
		if (func_1539(iVar0) && func_1539(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1539(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1539(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1539(iVar0))
		{
			*iParam2++;
		}
		if (func_1539(iVar1))
		{
			*iParam2++;
		}
		if (func_1539(iVar2))
		{
			*iParam2++;
		}
		if ((func_1539(iVar0) && func_1539(iVar1)) && func_1539(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1539(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1539(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1539(iVar0))
		{
			*iParam2++;
		}
		if (func_1539(iVar1))
		{
			*iParam2++;
		}
		if (func_1539(iVar2))
		{
			*iParam2++;
		}
		if (func_1539(iVar3))
		{
			*iParam2++;
		}
		if (((func_1539(iVar0) && func_1539(iVar1)) && func_1539(iVar2)) && func_1539(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1074(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1562(1497516462);
			func_1563(2016141805);
			func_1563(1010885152);
			func_1563(-502324015);
			break;
		case 2016141805:
			func_1563(1497516462);
			func_1562(2016141805);
			func_1563(1010885152);
			func_1563(-502324015);
			break;
		case 1010885152:
			func_1563(1497516462);
			func_1563(2016141805);
			func_1562(1010885152);
			func_1563(-502324015);
			break;
		case -502324015:
			func_1563(1497516462);
			func_1563(2016141805);
			func_1563(1010885152);
			func_1562(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1563(-538889627);
			func_1563(-538880323);
			func_1563(-1056767524);
			func_1562(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1564();
			func_1562(iParam0);
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
			func_1565();
			func_1562(iParam0);
			break;
		case 2019386373:
			func_1563(-664252410);
			func_1563(2109952320);
			func_1562(2019386373);
			break;
		case -664252410:
			func_1563(2019386373);
			func_1563(2109952320);
			func_1562(-664252410);
			break;
		case 2109952320:
			func_1563(2019386373);
			func_1563(-664252410);
			func_1562(2109952320);
			break;
		case -1674179981:
			func_1563(-1835851517);
			func_1563(-1838352012);
			func_1562(-1674179981);
			break;
		case -1835851517:
			func_1563(-1674179981);
			func_1563(-1838352012);
			func_1562(-1835851517);
			break;
		case -1838352012:
			func_1563(-1674179981);
			func_1563(-1835851517);
			func_1562(-1838352012);
			break;
		case -1717960576:
			func_1563(210001842);
			func_1562(-1717960576);
			break;
		case 210001842:
			func_1563(-1717960576);
			func_1562(210001842);
			break;
		case -150493654:
			func_1563(-1271608261);
			func_1563(1846061697);
			func_1563(-1145519186);
			func_1562(-150493654);
			break;
		case -1271608261:
			func_1563(-150493654);
			func_1563(1846061697);
			func_1563(-1145519186);
			func_1562(-1271608261);
			break;
		case 1846061697:
			func_1563(-150493654);
			func_1563(-1271608261);
			func_1563(-1145519186);
			func_1562(1846061697);
			break;
		case -1145519186:
			func_1563(-150493654);
			func_1563(-1271608261);
			func_1563(1846061697);
			func_1562(-1145519186);
			break;
		case 1766284049:
			func_1563(280705402);
			func_1563(1926308480);
			func_1562(1766284049);
			break;
		case 280705402:
			func_1563(1766284049);
			func_1563(1926308480);
			func_1562(280705402);
			break;
		case 1926308480:
			func_1563(1766284049);
			func_1563(280705402);
			func_1562(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1563(439465264);
				func_1562(1609506757);
			}
			else
			{
				func_1563(1609506757);
				func_1563(439465264);
			}
			break;
		case 439465264:
			if (func_472(1609506757))
			{
				if (bParam1)
				{
					func_1562(439465264);
				}
				else
				{
					func_1563(439465264);
				}
			}
			break;
		case 1822001510:
			func_1563(-1612662716);
			func_1562(1822001510);
			break;
		case -1612662716:
			func_1563(1822001510);
			func_1562(-1612662716);
			break;
		case 1306158345:
			func_1563(1952610440);
			func_1563(-223469678);
			func_1563(-404698347);
			func_1563(1517904467);
			func_1562(1306158345);
			break;
		case 1952610440:
			func_1563(1306158345);
			func_1563(-223469678);
			func_1563(-404698347);
			func_1563(1517904467);
			func_1562(1952610440);
			break;
		case -223469678:
			func_1563(1306158345);
			func_1563(1952610440);
			func_1563(-404698347);
			func_1563(1517904467);
			func_1562(-223469678);
			break;
		case -404698347:
			func_1563(1306158345);
			func_1563(1952610440);
			func_1563(-223469678);
			func_1563(1517904467);
			func_1562(-404698347);
			break;
		case 1517904467:
			func_1563(1306158345);
			func_1563(1952610440);
			func_1563(-223469678);
			func_1563(-404698347);
			func_1562(1517904467);
			break;
		case 1376646519:
			func_1563(931649776);
			func_1563(-434590080);
			func_1563(1743048395);
			func_1563(449774763);
			func_1562(1376646519);
			break;
		case 931649776:
			func_1563(1376646519);
			func_1563(-434590080);
			func_1563(1743048395);
			func_1563(449774763);
			func_1562(931649776);
			break;
		case -434590080:
			func_1563(1376646519);
			func_1563(931649776);
			func_1563(1743048395);
			func_1563(449774763);
			func_1562(-434590080);
			break;
		case 1743048395:
			func_1563(1376646519);
			func_1563(931649776);
			func_1563(-434590080);
			func_1563(449774763);
			func_1562(1743048395);
			break;
		case 449774763:
			func_1563(1376646519);
			func_1563(931649776);
			func_1563(-434590080);
			func_1563(1743048395);
			func_1562(449774763);
			break;
		case -1414537028:
			func_1563(38162571);
			func_1563(1350391819);
			func_1563(54073871);
			func_1562(-1414537028);
			break;
		case 38162571:
			func_1563(-1414537028);
			func_1563(1350391819);
			func_1563(54073871);
			func_1562(38162571);
			break;
		case 1350391819:
			func_1563(-1414537028);
			func_1563(38162571);
			func_1563(54073871);
			func_1562(1350391819);
			break;
		case 54073871:
			func_1563(-1414537028);
			func_1563(38162571);
			func_1563(1350391819);
			func_1562(54073871);
			break;
		case 198200492:
			func_1562(198200492);
			func_1563(-1124061431);
			func_1563(52706132);
			func_1563(-259123672);
			break;
		case -1124061431:
			func_1563(198200492);
			func_1562(-1124061431);
			func_1563(52706132);
			func_1563(-259123672);
			break;
		case 52706132:
			func_1563(198200492);
			func_1563(-1124061431);
			func_1562(52706132);
			func_1563(-259123672);
			break;
		case -259123672:
			func_1563(198200492);
			func_1563(-1124061431);
			func_1563(52706132);
			func_1562(-259123672);
			break;
		case -919512195:
			func_1562(-919512195);
			func_1563(-1925798111);
			func_1563(420709909);
			func_1563(1703426636);
			break;
		case -1925798111:
			func_1562(-1925798111);
			func_1563(-919512195);
			func_1563(420709909);
			func_1563(1703426636);
			break;
		case 420709909:
			func_1562(420709909);
			func_1563(-919512195);
			func_1563(-1925798111);
			func_1563(1703426636);
			break;
		case 1703426636:
			func_1562(1703426636);
			func_1563(-919512195);
			func_1563(-1925798111);
			func_1563(420709909);
			break;
		case -1223121209:
			func_1562(-1223121209);
			func_1563(630808005);
			break;
		case 630808005:
			func_1562(630808005);
			func_1563(-1223121209);
			break;
		case 1453909576:
			func_1562(1453909576);
			func_1563(1643531967);
			break;
		case 1643531967:
			func_1562(1643531967);
			func_1563(1453909576);
			break;
		case 0:
			func_1562(0);
			func_1563(473295046);
			func_1563(-1738165526);
			break;
		case 473295046:
			func_1562(473295046);
			func_1563(0);
			func_1563(-1738165526);
			break;
		case -1738165526:
			func_1562(-1738165526);
			func_1563(0);
			func_1563(473295046);
			break;
		case 932909855:
			func_1562(932909855);
			func_1563(2051822093);
			break;
		case 2051822093:
			func_1562(2051822093);
			func_1563(932909855);
			break;
		case 405586984:
			func_1562(405586984);
			func_1563(1509509592);
			func_1563(-959357075);
			func_1563(-1311865656);
			break;
		case 1509509592:
			func_1562(1509509592);
			func_1563(405586984);
			func_1563(-959357075);
			func_1563(-1311865656);
			break;
		case -959357075:
			func_1562(-959357075);
			func_1563(1509509592);
			func_1563(405586984);
			func_1563(-1311865656);
			break;
		case -1311865656:
			func_1562(-1311865656);
			func_1563(1509509592);
			func_1563(-959357075);
			func_1563(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1562(-524145696);
			}
			else
			{
				func_1563(-524145696);
			}
			func_1563(1626481264);
			func_1563(282809459);
			break;
		case 282809459:
			func_1562(282809459);
			func_1563(1626481264);
			func_1563(-524145696);
			break;
		case 1626481264:
			func_1562(1626481264);
			func_1563(-524145696);
			func_1563(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1562(885203519);
			}
			else
			{
				func_1563(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1562(-1080627546);
			}
			else
			{
				func_1563(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_472(iParam0))
				{
					func_1562(iParam0);
				}
			}
			else if (func_472(iParam0))
			{
				func_1563(iParam0);
			}
			break;
	}
}

void func_1075(int iParam0)
{
	if (!func_1566(iParam0))
	{
		func_1568(func_1567(iParam0));
	}
}

int func_1076()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1566(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1077(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1078(iVar9);
	iVar2 = func_1078(iVar10);
	iVar3 = func_1078(iVar11);
	iVar5 = func_1079(iVar9);
	iVar6 = func_1079(iVar10);
	iVar7 = func_1079(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1078(iVar12);
		iVar8 = func_1079(iVar12);
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

int func_1078(int iParam0)
{
	if (func_339(iParam0, 1, 0))
	{
		iVar0 = func_448(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1079(int iParam0)
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

int func_1080(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1081(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1082(int iParam0, int iParam1)
{
	if (!func_1175(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1083(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1082(iParam1, 5) || iParam0 == func_1082(iParam1, 6)) || iParam0 == func_1082(iParam1, 7)) || iParam0 == func_1082(iParam1, 8)) || iParam0 == func_1082(iParam1, 9))
	{
		func_1073(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_577(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_579(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1084(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1082(iParam1, 5) || iParam0 == func_1082(iParam1, 6)) || iParam0 == func_1082(iParam1, 7)) || iParam0 == func_1082(iParam1, 8)) || iParam0 == func_1082(iParam1, 9))
	{
		if (func_1073(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_577(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_579(51, 0, 0, iVar0, func_1033(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_577(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_579(51, 0, 0, iVar0, func_1033(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1085()
{
	if (func_183((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1086(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1087(int iParam0)
{
	if (!func_1569(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1088(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_1089(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1570();
	if (iParam2 == 39)
	{
		Var0 = { func_667(iParam0, 1, 0) };
		iParam2 = func_655(func_668(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_580(iParam0, 866047851) && func_1555(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1091(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1571(func_1148(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1572(iParam2);
	func_1573(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1130(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1130(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1136(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1574(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1575(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1575(&(Global_1946804->f_1378), 1, 0);
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
				func_1336(func_1148(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1090(bool bParam0, bool bParam1, bool bParam2)
{
	func_1576(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1091(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1092()
{
	func_1577(&(Global_1946804->f_2776));
	func_1578(32768);
	func_1336(1108822547, 8, 6);
}

int func_1093(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_655(iParam0, 1);
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

void func_1094(int iParam0)
{
	if (func_1579(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1580(Var0);
}

void func_1095(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1580(Var0);
}

bool func_1096(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_937(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

float func_1097()
{
	if (func_1581())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1582(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1582(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1583();
	fVar2 = func_1584();
	fVar3 = func_1585();
	fVar4 = func_1586();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1587()));
	fVar7 = (func_1582(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1588(3, round((to_float(iVar8) * fVar10)), 0);
	func_1589(3, fVar9, fVar9 > 100f);
	return func_1590(fVar7, -100f, 100f);
}

float func_1098()
{
	if (func_1581())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1582(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1582(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1583();
	fVar2 = func_1584();
	fVar3 = func_1585();
	fVar4 = func_1586();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1587()));
	fVar7 = (func_1582(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1588(2, round((to_float(iVar8) * fVar10)), 0);
	func_1589(2, fVar9, fVar9 > 100f);
	return func_1590(fVar7, -100f, 100f);
}

float func_1099()
{
	if (func_1581())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1582(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1591())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1592())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1582(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1583();
	fVar2 = func_1584();
	fVar3 = func_1585();
	fVar4 = func_1586();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1587()));
	fVar7 = (func_1582(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1588(1, round((to_float(iVar8) * fVar10)), 0);
	func_1589(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1582(0);
	}
	return func_1590(fVar7, -100f, 100f);
}

bool func_1100(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1101(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1102(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_444(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1028(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_452(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_937(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1103(int iParam0, bool bParam1)
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
				return func_1593();
			}
			break;
	}
	return 0;
}

int func_1104(int iParam0)
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

bool func_1105(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1106(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1105(iParam0))
	{
		return;
	}
	if (func_1594(iParam0))
	{
		return;
	}
	if (!func_1595(iParam0))
	{
		func_1596(iParam0, 1, 0);
	}
	iVar0 = func_1597(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1598(iParam0, 512))
		{
			func_666(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_206() && !bParam1) && !func_189(0, 0, 1))
	{
		func_694(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1599(iParam0, 6);
	if (bParam2)
	{
		if (!func_189(0, 0, 1))
		{
			func_358(1, 4);
		}
	}
}

bool func_1107(int iParam0, bool bParam1)
{
	return func_1103(iParam0, 0) < func_1600(iParam0, bParam1);
}

bool func_1108(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_584(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1109(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_655(iParam0, 1)] != &Global_1946804->f_57[func_655(iParam0, 1)];
}

void func_1110(int iParam0, int iParam1)
{
	if (func_580(iParam1, 130796156))
	{
		func_1601(iParam1, 0);
	}
	else if (func_580(iParam1, 930141731))
	{
		func_1601(iParam1, 1);
		func_1602(iParam0);
	}
}

void func_1111(var uParam0, int iParam1)
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

int func_1112(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1603(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1604(uParam2, iParam0, Var1);
	return 1;
}

int func_1113(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1114(int iParam0)
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

int func_1115(int iParam0)
{
	if (!func_1605(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1116(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1606(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1117(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1606(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1118(bool bParam0)
{
	if (bParam0)
	{
		func_310(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1119();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1607(2032023096);
		func_313(-615217896);
		func_168(655868243, 1, 1, -142743235, 1);
		func_1609(146323340, func_1608());
		Var0 = { func_1388() };
		if (func_1610(&Var0) == -1387633835)
		{
			func_1611(&Var0);
			func_1612(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1613(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1381(iVar6) == 2010625508)
			{
				func_1614(iVar6, iVar7);
				func_1615(iVar6, iVar8);
				func_1616(iVar6, iVar9);
				func_1617(iVar6, 0);
				if (func_1618(iVar6))
				{
					func_1619(iVar6);
				}
				iVar10 = func_1620(iVar8);
				func_1621(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1119()
{
	if (!func_1622(-1898635967, func_1608(), 1))
	{
		return 0;
	}
	if (func_330())
	{
		if (!func_1622(146323340, func_1608(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1120()
{
	func_324(34411519);
	func_324(834124286);
	func_324(-570967010);
}

void func_1121(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_310(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_168(-1080874779, 3, 1, -142743235, 1);
		func_168(-223790555, 3, 1, -142743235, 1);
		func_168(1566032147, 3, 1, -142743235, 1);
		func_168(891311852, 5, 1, -142743235, 1);
		func_168(-1353737667, 5, 1, -142743235, 1);
		func_168(-330313895, 5, 1, -142743235, 1);
		func_168(-2051332199, 5, 1, -142743235, 1);
		func_168(1237770824, 5, 1, -142743235, 1);
		func_168(-1795542128, 3, 1, -142743235, 1);
		func_168(-1757588258, 3, 1, -142743235, 1);
		func_168(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1613(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1381(iVar0) == 153881023)
			{
				func_1614(iVar0, iVar1);
				func_1615(iVar0, iVar2);
				func_1616(iVar0, iVar3);
				func_1617(iVar0, 0);
				if (func_1618(iVar0))
				{
					func_1619(iVar0);
				}
				iVar4 = func_1620(iVar2);
				func_1621(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1119();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1122(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1623(iParam0);
	if (bParam3)
	{
		func_693(iParam0, sParam1, iParam2);
	}
}

bool func_1123(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1124(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1125()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1096("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_942(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1050(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_944(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_944(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1126(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1624(Param1, iParam5, &Var5, 0))
	{
		func_943(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1102(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1625(Var19, 1);
}

int func_1127(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1626(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_584(iParam0) != -999503751)
		{
			func_1627(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_584(iParam0) != -999503751)
	{
		func_1627(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1628(iParam0, 1);
	return 1;
}

void func_1128()
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

void func_1129(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1629(0);
	}
	if (bParam0)
	{
		func_1141(8);
		func_1141(512);
	}
	else
	{
		func_1141(8);
		func_1141(16);
	}
}

void func_1130(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1131(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_657();
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

int func_1132(int iParam0)
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

void func_1133(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1630(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1148(iVar0, 1);
			if (func_1333(iVar0, iParam1))
			{
				vVar4 = { func_659(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1332(iVar7, 4))
				{
					func_1336(iVar7, 4, 6);
				}
			}
			else
			{
				func_1335(iVar7, 4, 6);
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

bool func_1134(int iParam0)
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
	func_1631(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1135(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1136(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_584(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1333(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1573(iVar1, iVar3);
		}
	}
	if (func_1109(-1586649372) && func_1333(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1573(iVar1, iVar3);
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
						func_1573(iVar1, iVar3);
					}
				}
			}
			func_1632(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1632(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1573(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1632(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1573(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1573(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1632(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1632(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1573(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1632(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1573(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1573(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_584(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1573(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1558(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_584(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1573(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_580(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1573(iVar1, iVar3);
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
						func_1573(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1558(&(Global_1946804->f_1497.f_1[iVar1])) || func_580(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1573(iVar1, iVar3);
					}
				}
			}
			switch (func_584(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_584(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1573(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_584(&(uParam0->f_1[iVar1])) || func_580(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1573(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1137(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1138(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1100(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1100(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1139(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1100(iParam0, 65536) && !func_1100(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1100(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1100(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1140()
{
	return Global_1905944->f_5694;
}

void func_1141(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1142(struct<4> Param0)
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
			if (func_1633(Param0))
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
			func_1634(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1141(8);
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
			if (func_1633(Param0))
			{
				return;
			}
			func_1634(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1141(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1095(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1143(bool bParam0)
{
	return func_946(1328661203, func_1635(), -1591664384, bParam0);
}

bool func_1144(int iParam0, bool bParam1)
{
	if (func_584(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_582(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1145(bool bParam0)
{
	iVar0 = func_937(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_946(271701509, func_1143(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_946(271701509, func_1143(bParam0), 12999093, 0);
}

bool func_1146(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_584(iParam0);
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

bool func_1147(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_937(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1148(int iParam0, int iParam1)
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

int func_1149(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1150(int iParam0, int iParam1)
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

void func_1151(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1152(int iParam0, int iParam1)
{
	iVar0 = func_675(*iParam0);
	iVar1 = func_674(*iParam0);
	if (iParam1 < 1 || iParam1 > func_680(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1153(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1154(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1155(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1156(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1157(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1158(int iParam0)
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

bool func_1159(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1022(iParam0))
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

int func_1160(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_444(iParam0, 0))
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

int func_1161(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1514(&iParam0);
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	if (!func_452(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1026(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1516(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_937(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1162(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_580(iParam0, -5284486))
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
		if (func_1636(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_638(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_641(iVar62, iVar61);
					if (func_444(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1162(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1162(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1636(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1163(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1637(1);
}

void func_1164(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1638(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_316(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1638(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_316(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1165()
{
	return Global_40.f_4283.f_325;
}

bool func_1166(int iParam0)
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

bool func_1167(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1168(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1169(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1170(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1171(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1172(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_390();
	bVar1 = false;
	if (bVar0 && !func_1639(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1639(37)) && !func_1639(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1639(43)) && !func_1639(44))
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

int func_1173()
{
	return Global_40.f_1095.f_3054;
}

bool func_1174(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_1175(int iParam0, var uParam1)
{
	if (!func_1640(iParam0))
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

int func_1176()
{
	if (func_390())
	{
		if (!func_1639(3))
		{
			return func_1418(43);
		}
		if (func_1639(38) && !func_1639(43))
		{
			return func_1641(8);
		}
	}
	return 0;
}

bool func_1177(int iParam0)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1642(iParam0));
}

Vector3 func_1178(int iParam0, int iParam1)
{
	func_1175(15, &Var0);
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

int func_1179(int iParam0, int iParam1)
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
	iVar0 = func_1643(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1175(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1644(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1180(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1645(iParam0);
	if (func_472(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1181(int iParam0)
{
	if (!func_1175(15, &Var0))
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

bool func_1182(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1646(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1647(5))
	{
		if (func_1648(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1375(vParam0);
	if (bParam6)
	{
		iVar1 = func_363(vParam0, 1);
		if (func_116(iVar1) || func_1649(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1650(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1651())
	{
		if (func_1652(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1653(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_363(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1654(iParam3, iParam4))
	{
		return false;
	}
	if (func_1655(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1656(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_390())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1657(vParam0, bParam10) || func_1658(vParam0, bParam10))
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

int func_1183(vector3 vParam0)
{
	iVar0 = func_1659(vParam0, 0f, 0f, 0, 2);
	return func_1659(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1184(int iParam0)
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

char* func_1185(int iParam0)
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
	return func_1344(iVar0);
}

char* func_1186(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1660(iVar0);
}

char* func_1187(int iParam0)
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

void func_1188(char[4] cParam0, int iParam1)
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
		(*cParam0->f_1[iVar0])[iVar1] = 57781;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1189(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1448(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1190(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

bool func_1191(char[4] cParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iVar1200)
			{
				if (!does_entity_exist(&(iLocal_1204[iVar0])))
				{
					iLocal_1204[iVar0] = func_872(iVar470, 2681.97f, -1287.527f, 50.64278f, 0f, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
					if (iVar0 == 0)
					{
						_set_ped_body_component(&(iLocal_1204[iVar0]), 697683187);
						_update_ped_variation(&(iLocal_1204[iVar0]), false, true, true, true, false);
					}
					else if (iVar0 == 1)
					{
						iLocal_1204[iVar0] = func_872(iVar470, 2681.97f, -1287.527f, 50.64278f, 0f, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
						_set_ped_body_component(&(iLocal_1204[iVar0]), 928671868);
						_update_ped_variation(&(iLocal_1204[iVar0]), false, true, true, true, false);
					}
					return false;
				}
				else if (iVar0 == 0)
				{
				}
				else if (iVar0 == 1)
				{
				}
				iVar0++;
			}
			func_151(cParam0, &(iLocal_1204[0]), "A_M_M_HtlFancyTravellers_01", 0, 0, 0, 0);
			func_151(cParam0, &(iLocal_1204[1]), "A_M_M_HtlFancyTravellers_01^1", 0, 0, 0, 0);
			break;
	}
	return true;
}

bool func_1192(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1661(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1193(int iParam0)
{
	return func_386(iVar481, iParam0);
}

bool func_1194(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return false;
	}
	if (!bParam2)
	{
		func_99(cParam0, 512);
	}
	func_1189(cParam0, func_33(cParam0), iParam1);
	if (bParam3)
	{
		func_904(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_1662(cParam0);
	}
	return true;
}

void func_1195(int iParam0)
{
	if (func_1193(iParam0))
	{
		func_1663(&uLocal_484, iParam0);
	}
}

int func_1196(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = _blip_add_for_radius(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1197()
{
	if (does_group_exist(get_player_group(player_id())))
	{
		if (_0x0455546f23ff08e4(get_player_group(player_id())))
		{
			set_group_formation(get_player_group(player_id()), 0);
			if (!is_entity_dead(&(Local_530[0])))
			{
				if (!is_ped_group_member(&(Local_530[0]), get_player_group(player_id()), 0) && is_ped_in_group(&(Local_530[0])))
				{
					remove_ped_from_group(&(Local_530[0]));
				}
				if (!is_ped_group_member(&(Local_530[0]), get_player_group(player_id()), 0))
				{
					clear_ped_tasks(&(Local_530[0]), 1, 0);
					set_ped_config_flag(&(Local_530[0]), 279, true);
					set_ped_as_group_member(&(Local_530[0]), get_player_group(player_id()));
				}
			}
		}
	}
}

void func_1198(char[4] cParam0)
{
	if (!is_ped_on_mount(Global_35))
	{
		if (func_855(Global_35, &(Local_530[0]), 1, 1) <= 0.85f)
		{
			if (!func_26(&uLocal_1196))
			{
				func_27(&uLocal_1196, 0);
			}
			else if (!func_1274())
			{
				if (func_1210(&uLocal_1196) >= 3f)
				{
					if (func_1192(cParam0, "MRY3_CLOSEMARY", 0))
					{
						func_212(&uLocal_1196);
					}
				}
			}
			else
			{
				func_212(&uLocal_1196);
			}
		}
		else if (func_26(&uLocal_1196))
		{
			func_538(&uLocal_1196);
		}
	}
	else if (func_26(&uLocal_1196))
	{
		func_538(&uLocal_1196);
	}
	if (func_1312(&uVar0) && !func_1193(16777216))
	{
		if (!func_1274())
		{
			if (func_1210(&uLocal_1133) >= 3f)
			{
				if (func_1192(cParam0, "MRY3_BANDANA", 0))
				{
					func_1206(16777216);
				}
			}
		}
		else
		{
			func_212(&uLocal_1133);
		}
	}
	if (func_1201(cParam0) == 0)
	{
		if (!func_1473())
		{
			if (get_entity_speed(Global_35) > 0f)
			{
				if (!is_ped_heading_towards_position(Global_35, vLocal_519, 90f))
				{
				}
				else
				{
					func_212(&uLocal_1193);
				}
			}
		}
		else if (func_1210(&uLocal_1193) >= 7f)
		{
			if (!func_1274())
			{
				if (func_1192(cParam0, "MRY3_QUICK", 0))
				{
					func_212(&uLocal_1193);
					uLocal_492 = iVar489 + 1;
				}
			}
			else
			{
				func_482(&uLocal_1193, 5f);
			}
		}
		if (iVar489 <= 2)
		{
			if (func_1210(&uLocal_1193) >= 10f)
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_QUICK", 0))
					{
						func_212(&uLocal_1193);
						uLocal_492 = iVar489 + 1;
					}
				}
				else
				{
					func_482(&uLocal_1193, 8f);
				}
			}
		}
	}
	switch (func_1286(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_STABLE", 2493.226f, -1450.587f, 45.1101f);
			func_212(&uLocal_1133);
			func_135(cParam0, 2);
			break;
		case 2:
			if (func_1210(&uLocal_1133) >= 2f)
			{
				if (func_1664("MRY3_CONVO"))
				{
					func_212(&uLocal_1133);
					if (!func_26(&uLocal_1178))
					{
						func_27(&uLocal_1178, 0);
					}
					func_135(cParam0, -1);
				}
			}
			break;
	}
}

void func_1199(char[4] cParam0)
{
	switch (Local_530[0]->f_169)
	{
		case 0:
			func_1219(&(Local_530[0]->f_169), 2);
			break;
		case 2:
			if (func_1201(cParam0) == 1)
			{
				if (!is_ped_on_mount(Global_35) && !is_ped_on_mount(&(Local_530[0])))
				{
					func_1219(&(Local_530[0]->f_169), 1);
				}
			}
			break;
		case 1:
			if (is_ped_group_member(&(Local_530[0]), get_player_group(player_id()), 0))
			{
				remove_ped_from_group(&(Local_530[0]));
			}
			_0x3946fc742ac305cd(get_player_index(), &(Local_530[0]), "MRY3_GRIEF", 0f, 0f, 0f, 0, "MRY3_GRIEF");
			task_enter_anim_scene(&(Local_530[0]), &(Local_38[5]), "MaryLinton", func_409(20), 2f, 1, 2, 20000, -1082130432);
			func_1219(&(Local_530[0]->f_169), 3);
			break;
		case 3:
			break;
	}
}

void func_1200(char[4] cParam0)
{
	switch (iLocal_29)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[4])) && _does_anim_scene_exist(&(Local_38[5])))
			{
				_get_anim_scene_entity_matrix(&(Local_38[5]), "MaryLinton", &uLocal_1369, false, func_409(20), 2);
				func_1665(4);
				func_1665(5);
				iLocal_29 = 1;
			}
			break;
		case 1:
			if (Local_530[0]->f_169 == 3)
			{
				iLocal_29 = 3;
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(Local_38[4])))
			{
				if (!_is_anim_scene_started(&(Local_38[4]), false))
				{
					if (func_1207("MRY3_CONVO"))
					{
						func_1208("MRY3_CONVO", 0, 0);
					}
					start_anim_scene(&(Local_38[4]));
				}
				else
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 5:
			if (func_1211(&(Local_38[4])))
			{
				if (_does_anim_scene_exist(&(Local_38[4])))
				{
					_delete_anim_scene(&(Local_38[4]));
					iLocal_29 = 4;
				}
			}
			break;
		case 4:
			if (_does_anim_scene_exist(&(Local_38[5])) && _is_anim_scene_started(&(Local_38[5]), false))
			{
				iLocal_29 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(Local_38[5]), false) && _0x8d81e7824b7753f7(&(Local_38[5]), "s_idle_wait", 1))
			{
				if (func_855(Global_35, &(Local_530[0]), 1, 1) <= 5f)
				{
					if (!func_1227(1073741824))
					{
						func_1232(1073741824);
					}
					set_anim_scene_bool(&(Local_38[5]), "b_breakout", true, false);
					iLocal_29 = 6;
				}
				else
				{
					if (does_blip_exist(iVar1209))
					{
						remove_blip(&iLocal_1212);
					}
					_blip_set_modifier(iVar1206, -546708623);
					func_1209(cParam0, "MRY3_OBJ_FRONT", -1082130432, 0, 0, -1, -1, 0);
					func_1238(cParam0, "MRY3_OBJ_FRONT", 4, 0, 0);
				}
			}
			break;
		case 6:
			if (func_1211(&(Local_38[5])))
			{
				if (_does_anim_scene_exist(&(Local_38[5])))
				{
					iLocal_29 = 7;
				}
			}
			break;
	}
}

int func_1201(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1202(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1666(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1203(iParam0, vParam1, 1);
	if (!func_26(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_538(fParam4);
	}
	if (func_26(fParam4))
	{
		if (bParam14)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (!is_entity_dead(iVar1))
		{
			set_ped_max_move_blend_ratio(iVar1, 1f);
		}
		if (!is_entity_dead(iVar2) && _is_draft_vehicle(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar2, iVar0);
				if (!is_entity_dead(iVar3))
				{
					set_ped_max_move_blend_ratio(iVar3, 1f);
					_0x0c3f0f7f92ca847c(iVar2, _0x46bf2a810679d6e6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_864(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1667(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1667(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return false;
}

float func_1203(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_1204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_386(*iParam1, 128))
	{
		if (!func_871(iParam0, 1245594896))
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
	if (func_386(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1668(iVar2))
			{
				return false;
			}
			if (!func_871(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1669(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_386(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_1670(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_163(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_386(*iParam1, 4))
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
	if (func_386(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1668(iVar2))
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
		if (!func_1670(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_1670(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_1670(iParam2, 8192))
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
		if (func_386(*iParam1, 2336))
		{
			if (!func_1668(iVar2))
			{
			}
			if (func_1671(iVar2, *iParam1))
			{
				func_1663(iParam1, 32);
				func_1663(iParam1, 256);
				func_1663(iParam1, 2048);
				func_163(iParam1, 512);
				func_163(iParam1, 1024);
				func_163(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_386(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_1668(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_1663(iParam1, 64);
			}
		}
		if (func_1670(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_1670(iParam2, 1024))) || func_1670(iParam2, 8)) && !func_386(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_163(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_1670(iParam2, 4096)) && !func_386(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_163(iParam1, 2048);
			func_163(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_1670(iParam2, 32)) && !func_386(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_163(iParam1, 256);
			func_163(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_163(iParam1, 64);
		}
		else if (!func_1670(iParam2, 1))
		{
			if (!func_1670(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_1669(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_386(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_163(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_163(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_1670(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_163(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_1670(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_163(iParam1, 8);
	}
	return false;
}

bool func_1205()
{
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = iVar1;
		if (!_0xc276fe69dda22bad(&(iLocal_1301[iVar0])))
		{
			iLocal_1301[iVar0] = add_cover_point(func_868(8, iVar0), func_869(8, iVar0), 3, 2, 0, false);
		}
		iVar1++;
	}
	return true;
}

void func_1206(int iParam0)
{
	if (!func_1193(iParam0))
	{
		func_163(&uLocal_484, iParam0);
	}
}

bool func_1207(char* sParam0)
{
	return func_1672(sParam0);
}

void func_1208(char* sParam0, bool bParam1, bool bParam2)
{
	func_1673(sParam0, bParam1, bParam2);
}

void func_1209(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1472(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

float func_1210(float fParam0)
{
	if (!func_26(fParam0))
	{
		return 0f;
	}
	if (func_483(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_535() - fParam0->f_1);
}

bool func_1211(int iParam0)
{
	return (!_does_anim_scene_exist(iParam0) || _is_anim_scene_finished(iParam0, false));
}

void func_1212(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1213(char[4] cParam0, int iParam1, int iParam2, int iParam3)
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
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1214(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1215(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1216(int iParam0)
{
	if ((does_entity_exist(iParam0) && !is_entity_dead(iParam0)) && is_ped_in_group(iParam0))
	{
		remove_ped_from_group(iParam0);
	}
}

void func_1217(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_26(fParam0))
	{
		func_482(fParam0, fParam1);
	}
}

void func_1218(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1219(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1220()
{
	if (func_26(&uLocal_1151))
	{
	}
	switch (iLocal_25)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[1])))
			{
				func_1665(1);
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(&(Local_38[1])))
			{
				if (_is_anim_scene_started(&(Local_38[1]), false))
				{
					iLocal_25 = 2;
				}
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_38[1])) && _is_anim_scene_started(&(Local_38[1]), false))
			{
				if (_0x1f0e401031e20146(&(Local_38[1]), "pl_loop_base"))
				{
					if (!func_26(&uLocal_1151))
					{
						func_27(&uLocal_1151, 0);
					}
				}
			}
			if (_does_anim_scene_exist(&(Local_38[1])) && _0x005e6f28dd7ed58d(&(Local_38[1]), "IG_MaryLinton"))
			{
				_delete_anim_scene(&(Local_38[1]));
				iLocal_25 = 6;
			}
			if (func_26(&uLocal_1151))
			{
				if (func_864(&uLocal_1151) >= 5f)
				{
					func_1270(1, 6);
					iLocal_25 = 3;
				}
			}
			break;
		case 3:
			if (func_26(&uLocal_1151))
			{
				if (func_864(&uLocal_1151) >= 13f)
				{
					func_1270(1, 5);
					iLocal_25 = 4;
				}
			}
			break;
		case 4:
			iLocal_25 = 6;
			break;
		case 5:
			if (_does_anim_scene_exist(&(Local_38[1])))
			{
				if (!_is_anim_scene_started(&(Local_38[1]), false))
				{
					start_anim_scene(&(Local_38[1]));
				}
				else
				{
					iLocal_25 = 2;
				}
			}
			break;
		case 6:
			if (func_1211(&(Local_38[1])))
			{
				if (_does_anim_scene_exist(&(Local_38[1])))
				{
					_delete_anim_scene(&(Local_38[1]));
				}
			}
			break;
	}
}

void func_1221()
{
	if (iLocal_28 >= 2 && !func_1227(268435456))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_28)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[3])))
			{
				func_1665(3);
				iLocal_28 = 1;
			}
			break;
		case 1:
			if (func_1231(Global_35, &(iLocal_1223[14]), 1, 0))
			{
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (!func_1227(128))
			{
				if (_does_anim_scene_exist(&(Local_38[3])))
				{
					if (!_is_anim_scene_started(&(Local_38[3]), false))
					{
						func_1245(&(Local_530[0]), 1);
						func_1246(Global_35, 1);
						func_1247(&uLocal_1089);
						set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
						start_anim_scene(&(Local_38[3]));
					}
					else
					{
						iLocal_28 = 3;
					}
				}
			}
			break;
		case 3:
			set_all_random_peds_flee_this_frame(get_player_index());
			if (_get_anim_scene_progress(&(Local_38[3])) >= 0.1398344f)
			{
				func_1674();
			}
			if (_get_anim_scene_progress(&(Local_38[3])) >= 0.1398344f && _get_anim_scene_progress(&(Local_38[3])) <= 0.2998155f)
			{
				if (!func_1227(67108864))
				{
					func_1232(67108864);
				}
			}
			else if (func_1227(67108864))
			{
				func_1284(67108864);
			}
			if (!func_1227(268435456))
			{
				if (_get_anim_scene_progress(&(Local_38[3])) >= 0.9816008f)
				{
					func_866(0, 0);
					func_1232(268435456);
				}
			}
			if (func_1211(&(Local_38[3])))
			{
				if (_does_anim_scene_exist(&(Local_38[3])))
				{
					_delete_anim_scene(&(Local_38[3]));
					func_1234(&uLocal_1089);
					func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
					func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
					if (!func_871(iVar1201, 713668775))
					{
						task_follow_nav_mesh_to_coord(iVar1201, 2563.96f, -1262.823f, 50.19314f, 1f, -1, 0.25f, 0, 40000f);
					}
					iLocal_28 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1222(char[4] cParam0)
{
	if (has_anim_event_fired(&(Local_709[0]), 1318273915))
	{
	}
	switch (iLocal_30)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[7])))
			{
				func_1665(7);
				iLocal_30 = 1;
			}
			break;
		case 1:
			waypoint_recording_get_closest_waypoint("mary3_father_follow", get_entity_coords(&(Local_709[0]), true, false), &iVar0);
			if (iVar0 >= 47)
			{
				set_anim_scene_origin(&(Local_38[7]), get_entity_coords(&(Local_709[0]), true, false), get_entity_rotation(&(Local_709[0]), 2), 2);
				iLocal_30 = 3;
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(Local_38[7])))
			{
				if (!_is_anim_scene_started(&(Local_38[7]), false))
				{
					start_anim_scene(&(Local_38[7]));
				}
				else if (!func_26(&uLocal_1160))
				{
					func_27(&uLocal_1160, 0);
					iLocal_30 = 2;
				}
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_38[7])) && _is_anim_scene_started(&(Local_38[7]), false))
			{
				if (_0x1f0e401031e20146(&(Local_38[7]), func_409(23)) && _get_anim_scene_progress(&(Local_38[7])) >= 0.1445946f)
				{
					if (!func_1193(524288))
					{
						func_47(0, 0);
						if (get_entity_speed(Global_35) > 0f)
						{
							if (func_1192(cParam0, "MRY3_PUKE", 0))
							{
								func_135(cParam0, 8);
								func_1206(524288);
							}
						}
						else
						{
							func_135(cParam0, 8);
							func_1206(524288);
						}
					}
				}
			}
			if (func_26(&uLocal_1160))
			{
				if (func_864(&uLocal_1160) >= 8f)
				{
					set_anim_scene_bool(&(Local_38[7]), "bLoop", true, false);
					iLocal_30 = 4;
				}
			}
			break;
		case 4:
			if (func_1211(&(Local_38[7])))
			{
				if (_does_anim_scene_exist(&(Local_38[7])))
				{
					_delete_anim_scene(&(Local_38[7]));
					if (!func_871(&(Local_709[0]), 658540077))
					{
						task_follow_waypoint_recording(&(Local_709[0]), "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
					}
					func_1192(cParam0, "MRY3_CHAT", 0);
					iLocal_30 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1223()
{
	switch (iLocal_26)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[6])))
			{
				func_1665(6);
				iLocal_26 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_38[6])))
			{
				if (!_is_anim_scene_started(&(Local_38[6]), false))
				{
					start_anim_scene(&(Local_38[6]));
				}
				else
				{
					iLocal_26 = 3;
				}
			}
			break;
		case 3:
			if (func_1211(&(Local_38[6])))
			{
				if (!func_871(&(Local_530[0]), 1369124074))
				{
					task_enter_anim_scene(&(Local_530[0]), &(Local_38[1]), "IG_MaryLinton", func_409(4), 3f, 1, 2, 20000, -1082130432);
				}
				if (_does_anim_scene_exist(&(Local_38[6])))
				{
					_delete_anim_scene(&(Local_38[6]));
					iLocal_26 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1224(char[4] cParam0)
{
	func_1675(cParam0);
	if (func_855(Global_35, &(Local_709[0]), 1, 1) <= 30f)
	{
		if (func_1231(&(Local_709[0]), &(iLocal_1223[12]), 1, 0))
		{
			if (!func_1193(4096))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WHISPER", 0))
					{
						func_1206(4096);
					}
				}
			}
		}
		else if (func_1231(&(Local_709[0]), &(iLocal_1223[13]), 1, 0))
		{
			if (!func_1193(8192))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WHISPER2", 0))
					{
						func_1206(8192);
					}
				}
			}
		}
	}
	switch (func_1286(cParam0))
	{
		case 1:
			func_1209(cParam0, "MRY3_FOLLOW_OBJ", -1082130432, 0, 0, -1, -1, 0);
			if (func_1238(cParam0, "MRY3_FOLLOW_OBJ", 4, 0, 0))
			{
				func_135(cParam0, 3);
			}
			break;
		case 2:
			break;
		case 3:
			if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167) && !func_1676())
			{
				func_694("MRY3_FOLLOW_HELP", 10000, 0, 0, 0, 1);
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_1", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 5:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_2", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 6:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_3", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 7:
			if (!func_1227(128))
			{
				if (func_1192(cParam0, "MRY3_ALLEY", 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 8:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_PUKE_RE", 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			break;
	}
}

void func_1225(char[4] cParam0)
{
	if (func_1227(128))
	{
		if (Local_709[0]->f_2 != 4)
		{
			func_1218(&(Local_709[0]->f_2), 4);
		}
	}
	switch (Local_709[0]->f_2)
	{
		case 0:
			func_1218(&(Local_709[0]->f_2), 2);
			break;
		case 2:
			if (!is_ped_in_cover(Global_35, 0, 0))
			{
				if (func_1227(1))
				{
					func_1284(1);
				}
			}
			if (!func_871(&(Local_709[0]), 658540077))
			{
				task_follow_waypoint_recording(&(Local_709[0]), "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
				func_1218(&(Local_709[0]->f_2), 5);
			}
			break;
		case 5:
			if (is_waypoint_playback_going_on_for_ped(&(Local_709[0]), 0))
			{
				if (get_ped_waypoint_progress(&(Local_709[0])) >= 64)
				{
					clear_ped_tasks(&(Local_709[0]), 1, 0);
				}
			}
			break;
		case 4:
			if (!func_871(&(Local_709[0]), -875674219))
			{
				task_turn_ped_to_face_entity(&(Local_709[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			break;
		case 6:
			break;
		case 9:
			break;
	}
}

void func_1226(char[4] cParam0)
{
	func_1677();
	switch (Local_530[0]->f_169)
	{
		case 0:
			func_1219(&(Local_530[0]->f_169), 2);
			break;
		case 2:
			if (((_does_anim_scene_exist(&(Local_38[6])) && !_is_anim_scene_started(&(Local_38[6]), false)) && (_does_anim_scene_exist(&(Local_38[1])) && !_is_anim_scene_started(&(Local_38[1]), false))) || (!_does_anim_scene_exist(&(Local_38[6])) && !_does_anim_scene_exist(&(Local_38[1]))))
			{
				if (func_1678(&(Local_530[0]), Global_35, 0))
				{
					func_1219(&(Local_530[0]->f_169), 1);
				}
			}
			if (_does_anim_scene_exist(&(Local_38[1])))
			{
				if (_is_anim_scene_started(&(Local_38[1]), false) && _0x8d81e7824b7753f7(&(Local_38[1]), "s_loop_base", 1))
				{
					if (func_1678(&(Local_530[0]), Global_35, 0))
					{
						func_1219(&(Local_530[0]->f_169), 1);
					}
				}
			}
			break;
		case 1:
			func_1234(&uLocal_1089);
			func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
			func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!func_1227(2097152))
			{
				func_1232(2097152);
			}
			if (_does_anim_scene_exist(&(Local_38[1])))
			{
				_delete_anim_scene(&(Local_38[1]));
			}
			func_1219(&(Local_530[0]->f_169), 3);
			break;
		case 3:
			if ((_does_anim_scene_exist(&(Local_38[3])) && !_is_anim_scene_started(&(Local_38[3]), false)) || !_does_anim_scene_exist(&(Local_38[3])))
			{
				func_1679();
				if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
				{
					if (!func_871(&(Local_530[0]), 1910705116))
					{
						func_1247(&uLocal_1089);
						func_1245(&(Local_530[0]), 1);
						task_seek_cover_from_ped(&(Local_530[0]), &(Local_709[0]), -1, 0, 0, 0);
					}
					else
					{
						func_1219(&(Local_530[0]->f_169), 4);
					}
				}
			}
			break;
		case 4:
			if (!is_ped_in_cover(Global_35, 0, 0) && !is_ped_going_into_cover(Global_35))
			{
				if ((_does_anim_scene_exist(&(Local_38[3])) && !_is_anim_scene_started(&(Local_38[3]), false)) || !_does_anim_scene_exist(&(Local_38[3])))
				{
					func_1234(&uLocal_1089);
					func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
					func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
					func_1219(&(Local_530[0]->f_169), 3);
				}
			}
			break;
		case 5:
			func_1245(&(Local_530[0]), 1);
			if (_is_tracked_point_valid(iVar484))
			{
				if (is_tracked_point_visible(iVar484))
				{
					if (func_1231(Global_35, &(iLocal_1223[8]), 1, 0))
					{
						if (!is_ped_in_cover(Global_35, 0, 0) && !is_ped_going_into_cover(Global_35))
						{
							if (!func_871(&(Local_530[0]), 713668775))
							{
								task_follow_nav_mesh_to_coord(&(Local_530[0]), 2561.818f, -1415.543f, 45.15988f, 2f, 20000, 0.25f, 0, 40000f);
							}
						}
					}
				}
			}
			if (is_ped_in_cover(Global_35, 0, 0))
			{
				func_1219(&(Local_530[0]->f_169), 6);
			}
			break;
		case 6:
			if (!is_ped_in_cover(Global_35, 0, 0) && !is_ped_going_into_cover(Global_35))
			{
				if ((_does_anim_scene_exist(&(Local_38[3])) && !_is_anim_scene_started(&(Local_38[3]), false)) || !_does_anim_scene_exist(&(Local_38[3])))
				{
					_delete_volume(&(iLocal_1223[6]));
					_set_ped_crouch_movement(&(Local_530[0]), false, 0, false);
					func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
					func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
					func_1219(&(Local_530[0]->f_169), -1);
				}
			}
			break;
		case 7:
			func_1245(&(Local_530[0]), 1);
			if (!func_871(&(Local_530[0]), 713668775))
			{
				task_follow_nav_mesh_to_coord(&(Local_530[0]), 2561.818f, -1415.543f, 45.15988f, 2f, 20000, 0.25f, 0, 40000f);
			}
			break;
	}
}

bool func_1227(int iParam0)
{
	return func_386(iVar479, iParam0);
}

void func_1228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
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
		func_1680(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_1229(char[4] cParam0)
{
	if ((_does_anim_scene_exist(&(Local_38[7])) && !_is_anim_scene_started(&(Local_38[7]), false)) || !_does_anim_scene_exist(&(Local_38[7])))
	{
		if (get_entity_speed(Global_35) <= 0f)
		{
			if (!func_26(&uLocal_1181))
			{
				func_27(&uLocal_1181, 0);
			}
			else if (!func_1227(128))
			{
				if (func_864(&uLocal_1181) >= 10f)
				{
					if (!func_1274())
					{
						if (func_1192(cParam0, "MRY3_FOLLOW", 0))
						{
							func_212(&uLocal_1181);
						}
					}
				}
			}
		}
		else
		{
			func_538(&uLocal_1181);
		}
	}
	else if (func_26(&uLocal_1181))
	{
		func_538(&uLocal_1181);
	}
	if (get_entity_speed(Global_35) > 0f)
	{
		if (!func_1681(Global_35, get_entity_coords(&(Local_709[0]), true, false), 0f))
		{
			if (!func_26(&uLocal_1184))
			{
				func_27(&uLocal_1184, 0);
			}
		}
		else if (func_26(&uLocal_1184))
		{
			func_538(&uLocal_1184);
		}
	}
	if (!func_1227(128))
	{
		if (get_entity_speed(Global_35) > 0f)
		{
			if (func_864(&uLocal_1184) >= 5f)
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WHERE", 0))
					{
						func_212(&uLocal_1184);
					}
				}
			}
		}
	}
}

void func_1230(bool bParam0)
{
	if (bParam0)
	{
		func_1682(4);
	}
	func_1682(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1231(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_1232(int iParam0)
{
	if (!func_1227(iParam0))
	{
		func_163(&uLocal_482, iParam0);
	}
}

bool func_1233(char[4] cParam0)
{
	iVar0 = get_random_int_in_range(1, 4);
	switch (iVar0)
	{
		case 1:
			func_135(cParam0, 4);
			return true;
		case 2:
			func_135(cParam0, 5);
			return true;
		case 3:
			func_135(cParam0, 6);
			return true;
	}
	return false;
}

void func_1234(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_NO_REORIENT_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

void func_1235(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!func_1683(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_1684(iParam0, iParam1, iParam14);
	}
}

void func_1236(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1684(iParam0, iParam1, iParam18);
	}
}

void func_1237(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_1238(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1274() || func_205())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_206())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1685(sParam1))
	{
		func_538(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(cParam0->f_13106), 0);
	}
	if ((func_1686(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1192(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1192(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_538(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1192(cParam0, sParam1, 0);
						}
						else if (!func_1192(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(cParam0->f_13106)) && func_1192(cParam0, sParam1, 0))
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
					func_1192(cParam0, sParam1, 0);
				}
				else if (!func_1192(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1272(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1272(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_694(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_694(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1687(sParam1, 0, 0, 1);
				break;
		}
		func_538(&(cParam0->f_13106));
		return true;
	}
	return false;
}

void func_1239(char[4] cParam0)
{
	func_1675(cParam0);
	switch (func_1286(cParam0))
	{
		case 1:
			if (!func_1274())
			{
				if (func_1192(cParam0, "MRY3_WHISPER4", 0))
				{
					func_212(&uLocal_1133);
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!is_ped_in_melee_combat(Global_35))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_CHAT3", 0))
					{
						func_212(&uLocal_1133);
						func_135(cParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (!is_ped_in_melee_combat(Global_35))
			{
				if (func_26(&uLocal_1133) && func_864(&uLocal_1133) >= 2f)
				{
					if (!func_1274())
					{
						if (!func_1193(1073741824))
						{
							if (func_1688(cParam0))
							{
								func_1206(1073741824);
								func_135(cParam0, -1);
							}
						}
					}
				}
			}
			else
			{
				func_212(&uLocal_1133);
			}
			break;
		case 4:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_1", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 5:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_2", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 6:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_WARN_3", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_47(0, 0);
				}
			}
			break;
		case 7:
			if (!func_1227(128))
			{
				if (!func_1274())
				{
					if (func_1192(cParam0, "MRY3_ALLEY", 0))
					{
						func_212(&uLocal_1133);
						func_135(cParam0, 8);
					}
				}
			}
			break;
		case 8:
			if (!func_1227(128))
			{
				if (!is_ped_in_melee_combat(Global_35) && !func_1274())
				{
					if (func_26(&uLocal_1133) && func_864(&uLocal_1133) >= 3f)
					{
						if (func_1192(cParam0, "MRY3_CHAT2", 0))
						{
							func_135(cParam0, -1);
						}
					}
				}
				else
				{
					func_212(&uLocal_1133);
				}
			}
			break;
	}
}

void func_1240(char[4] cParam0)
{
	if (func_1227(128))
	{
		if (Local_709[0]->f_2 != 4)
		{
			func_1218(&(Local_709[0]->f_2), 4);
		}
	}
	if (!func_378(32768))
	{
		if (_0x3ab6c7b0bb0df4b1(&(Local_709[0]), -1))
		{
			func_380(32768);
		}
	}
	switch (Local_709[0]->f_2)
	{
		case 0:
			func_1218(&(Local_709[0]->f_2), 2);
			break;
		case 2:
			if (!is_ped_in_cover(Global_35, 0, 0))
			{
				if (func_1227(1))
				{
					func_1284(1);
				}
			}
			if (!func_871(&(Local_709[0]), 658540077))
			{
				task_follow_waypoint_recording(&(Local_709[0]), "mary3_father_follow", 0, 25673, -1, 0, 0, -1);
				func_1218(&(Local_709[0]->f_2), 5);
			}
			break;
		case 5:
			break;
		case 4:
			if (!func_871(&(Local_709[0]), -875674219))
			{
				task_turn_ped_to_face_entity(&(Local_709[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			break;
	}
}

void func_1241(char[4] cParam0)
{
	func_1677();
	switch (Local_530[0]->f_169)
	{
		case 0:
			func_1219(&(Local_530[0]->f_169), 2);
			break;
		case 2:
			func_1679();
			func_1228(&(Local_530[0]), Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
			set_ped_reset_flag(Global_35, 229, true);
			disable_control_action(0, -822242784, false);
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				if (!func_871(&(Local_530[0]), 1910705116))
				{
					func_1247(&uLocal_1089);
					func_1245(&(Local_530[0]), 1);
					task_seek_cover_from_ped(&(Local_530[0]), &(Local_709[0]), -1, 0, 0, 0);
				}
				else
				{
					func_1219(&(Local_530[0]->f_169), 1);
				}
			}
			break;
		case 1:
			if (!is_ped_in_cover(Global_35, 0, 0) && !is_ped_going_into_cover(Global_35))
			{
				func_1234(&uLocal_1089);
				func_1235(Global_35, &(Local_530[0]), &uLocal_1328, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
				func_1236(&(Local_530[0]), Global_35, &uLocal_1328, -1082130432, 0, 0, -1082130432, -1082130432, 1, 64, 1f, -1f, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1219(&(Local_530[0]->f_169), 2);
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

bool func_1242(char[4] cParam0)
{
	if (func_33(cParam0) >= 5)
	{
		vVar0 = { 2080.798f, -1033.691f, 42.45461f };
	}
	else
	{
		vVar0 = { 2623.061f, -1389.606f, 46.71011f };
	}
	if (!does_entity_exist(&(Local_709[1])))
	{
		Local_709[1] = func_872(iVar472, vVar0, 0f, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0);
		return false;
	}
	set_blocking_of_non_temporary_events(&(Local_709[1]), true);
	_set_ped_body_component(&(Local_709[1]), 41788943);
	_update_ped_variation(&(Local_709[1]), false, true, true, true, false);
	func_145(cParam0, &(Local_709[1]), "MRY3_BUYER", 0);
	set_ped_config_flag(&(Local_709[1]), 180, true);
	func_1689(&(Local_709[1]), 0);
	_0x41d1331afad5a091(&(Local_709[1]), 1, 0);
	stop_ped_speaking(&(Local_709[1]), true);
	func_1690(&(Local_709[1]));
	func_1691(&(Local_709[1]), 111756353, 1, 0);
	Local_709[1]->f_13 = 1;
	return true;
}

bool func_1243(char[4] cParam0, bool bParam1)
{
	func_859(cParam0);
	if (((bParam1 && func_1692(&(cParam0->f_10792)) != 11) && !func_1404(&(cParam0->f_10792), 131072)) && !func_1404(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1693(&(cParam0->f_10792));
}

void func_1244(char[4] cParam0, int iParam1)
{
	Var0 = { func_1694(&(cParam0->f_7375)) };
	if ((((func_1404(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1695(cParam0, &Var0);
		func_1696(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_120(cParam0, 16384))
		{
			func_1697(&(cParam0->f_10792), Global_43805);
			func_727(&(cParam0->f_10792), 8);
		}
		func_232(&(cParam0->f_10792), iParam1);
		func_859(cParam0);
		func_99(cParam0, 2097152);
	}
}

void func_1245(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_1246(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_1247(char* sParam0)
{
	if (_0x927b810e43e99932(sParam0))
	{
		_0x0a5a4f1979abb40e(sParam0);
	}
	_0x798be43c9393632b(sParam0);
}

void func_1248(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (_does_volume_exist(&(iLocal_1268[iVar0])))
		{
			_delete_volume(&(iLocal_1268[iVar0]));
		}
		iVar0++;
	}
}

bool func_1249(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!does_entity_exist(&(Local_709[iVar1])))
		{
			switch (iVar1)
			{
				case 6:
					Var3 = { func_215(6, 0) };
					Var7 = { func_215(6, 1) };
					iVar2 = iVar475;
					break;
				case 7:
					Var3 = { func_215(6, 4) };
					Var7 = { func_215(6, 4) };
					iVar2 = iVar475;
					break;
				case 8:
					Var3 = { func_215(6, 3) };
					Var7 = { func_215(6, 5) };
					iVar2 = iVar475;
					break;
				case 9:
					Var7 = { func_215(6, 6) };
					Var3 = { func_215(6, 6) };
					iVar2 = iVar475;
					break;
				case 10:
					Var7 = { func_215(10, 1) };
					Var3 = { func_215(10, 0) };
					iVar2 = iVar475;
					break;
				case 11:
					Var3 = { func_215(11, 1) };
					Var7 = { func_215(11, 0) };
					iVar2 = iVar473;
					break;
			}
			if (Global_43838 == 1)
			{
				if (!does_entity_exist(&(Local_709[iVar1])))
				{
					Local_709[iVar1] = func_872(iVar2, Var3, Var3.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (iVar1 == 9)
				{
					_0xcac43d060099ea72(&(Local_709[9]));
					set_entity_visible(&(Local_709[9]), false);
					freeze_entity_position(&(Local_709[9]), true);
					set_entity_completely_disable_collision(&(Local_709[9]), false, false);
					set_ped_config_flag(&(Local_709[9]), 471, true);
					set_ped_config_flag(&(Local_709[9]), 324, true);
				}
			}
			else
			{
				if (!does_entity_exist(&(Local_709[iVar1])))
				{
					Local_709[iVar1] = func_872(iVar2, Var7, Var7.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (iVar1 == 8)
				{
					_0xcac43d060099ea72(&(Local_709[8]));
					set_entity_visible(&(Local_709[8]), false);
					freeze_entity_position(&(Local_709[8]), true);
					set_entity_completely_disable_collision(&(Local_709[8]), false, false);
					set_ped_config_flag(&(Local_709[8]), 471, true);
					set_ped_config_flag(&(Local_709[8]), 324, true);
				}
			}
			Local_709[iVar1]->f_13 = 1;
			Local_709[iVar1]->f_5 = { Var3 };
			Local_709[iVar1]->f_9 = { Var7 };
			Local_709[iVar1]->f_16 = create_tracked_point();
			set_tracked_point_info(Local_709[iVar1]->f_16, get_entity_coords(&(Local_709[iVar1]), true, false), 1f);
			if (iVar1 != 11)
			{
				set_blocking_of_non_temporary_events(&(Local_709[iVar1]), true);
				set_ped_config_flag(&(Local_709[iVar1]), 6, true);
				func_1689(&(Local_709[iVar1]), 0);
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1250(char[4] cParam0)
{
	if (!does_entity_exist(iVar1213))
	{
		if (func_33(cParam0) == 3)
		{
			if (Global_43838 == 1)
			{
				iLocal_1216 = create_vehicle(1761016051, func_868(5, 0), func_869(5, 0), true, true, false, false);
			}
			else if (Global_43838 == 2)
			{
				iLocal_1216 = create_vehicle(1761016051, func_868(5, 3), func_869(5, 3), true, true, false, false);
			}
			else
			{
				iLocal_1216 = create_vehicle(1761016051, func_868(5, 3), func_869(5, 3), true, true, false, false);
			}
		}
		else
		{
			iLocal_1216 = create_vehicle(1761016051, func_868(5, 3), func_869(5, 3), true, true, false, false);
		}
		_0x8268b098f6fca4e2(iVar1213, 3);
		_0xf89d82a0582e46ed(iVar1213, 3);
		func_1698(iVar1213);
		_0x226c6a4e3346d288(iVar1213, 0);
		set_entity_load_collision_flag(iVar1213, 1);
		set_vehicle_extra(iVar1213, 3, true);
		set_vehicle_on_ground_properly(iVar1213, 0f);
		set_vehicle_is_considered_by_player(iVar1213, true);
		_0xcbf88256e44d5d39(iVar1213, 0);
		_0xf489f94bfee12bb0(iVar1213, -1732002606);
		_0x7c00cfc48a782dc0(&(iLocal_1223[33]), iVar1213, -0.88f, -0.5f, 0.75f, 0f, 0f, 90f, 2, 1);
		_0x7c00cfc48a782dc0(&(iLocal_1223[34]), iVar1213, 0.88f, -0.5f, 0.75f, 0f, 0f, 90f, 2, 1);
	}
	else if (func_1699(&iLocal_1216) && is_vehicle_driveable(iVar1213, false, false))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (get_ped_relationship_group_hash(&(Local_980[iVar0])) != -1538724068)
			{
				Local_980[iVar0] = _get_ped_in_draft_seat(iVar1213, iVar0);
				set_ped_relationship_group_hash(&(Local_980[iVar0]), -1538724068);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

bool func_1251(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		if (!does_entity_exist(&(Local_709[iVar1])))
		{
			switch (iVar1)
			{
				case 2:
					vVar4 = { 2621.119f, -1417.653f, 45.4384f };
					iVar2 = iVar469;
					iVar3 = -1028993974;
					break;
				case 3:
					vVar4 = { 2621.119f, -1417.653f, 45.4384f };
					iVar2 = iVar469;
					iVar3 = 1696207146;
					break;
				case 4:
					vVar4 = { 2555.575f, -1466.246f, 45.2951f };
					iVar2 = iVar471;
					break;
			}
			Local_709[iVar1] = func_872(iVar2, vVar4, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (iVar1 != 4)
			{
				_set_ped_body_component(&(Local_709[iVar1]), iVar3);
				_update_ped_variation(&(Local_709[iVar1]), false, true, true, true, false);
			}
			if (iVar1 == 2)
			{
				func_145(cParam0, &(Local_709[2]), "MRY3_DRIVER1", 0);
			}
			else if (iVar1 == 3)
			{
				func_145(cParam0, &(Local_709[3]), "MRY3_DRIVER2", 0);
			}
			set_ped_config_flag(&(Local_709[iVar1]), 37, true);
			set_ped_config_flag(&(Local_709[iVar1]), 180, true);
			set_ped_config_flag(&(Local_709[iVar1]), 6, true);
			set_ped_relationship_group_hash(&(Local_709[iVar1]), -1538724068);
			func_1689(&(Local_709[iVar1]), 0);
			set_ped_config_flag(&(Local_709[iVar1]), 6, true);
			set_blocking_of_non_temporary_events(&(Local_709[iVar1]), true);
			Local_709[iVar1]->f_13 = 1;
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1252(int iParam0, int iParam1, bool bParam2)
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

int func_1253(var uParam0, int iParam1, int iParam2, int iParam3)
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
			if (iParam3 && func_1700(*iParam1))
			{
				iParam2 = func_1701(*iParam1);
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

bool func_1254(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_1255(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

bool func_1256()
{
	if (!does_entity_exist(iVar1215))
	{
		iLocal_1217 = create_vehicle(iVar479, func_868(13, 0), func_869(13, 0), true, true, false, false);
		return false;
	}
	else
	{
		if (!does_entity_exist(&(Local_709[12])))
		{
			Local_709[12] = func_872(iVar476, 2177.356f, -1382.305f, 39.8501f, 293.1471f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			func_1253(Local_709[12], &iLocal_1217, -1, 1);
		}
		if (!does_entity_exist(&(Local_709[13])))
		{
			Local_709[13] = func_872(iVar476, 2177.356f, -1382.305f, 39.8501f, 293.1471f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			func_1253(Local_709[13], &iLocal_1217, 0, 1);
		}
	}
	return true;
}

void func_1257(int iParam0)
{
	if (func_378(iParam0))
	{
		func_1663(&uLocal_483, iParam0);
	}
}

void func_1258(char[4] cParam0)
{
	switch (func_1286(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_CATCHUP", 2625.3f, -1420.164f, 45.4558f);
			func_212(&uLocal_1136);
			if (!func_1685("MRY3_OBJ_CATCHUP"))
			{
				func_1238(cParam0, "MRY3_OBJ_CATCHUP", 5, 0, 0);
			}
			func_135(cParam0, 2);
			break;
		case 2:
			if (func_855(Global_35, &(Local_530[0]), 1, 1) <= 10f)
			{
				if (!func_26(&uLocal_1127))
				{
					func_27(&uLocal_1127, 0);
				}
				else if ((_0x8d81e7824b7753f7(&(Local_38[0]), "s_Loop_01", 1) || _0x8d81e7824b7753f7(&(Local_38[0]), "s_Loop_02", 1)) || _0x8d81e7824b7753f7(&(Local_38[0]), "s_Loop_02", 1))
				{
					if (func_864(&uLocal_1127) >= 5f)
					{
						if (func_1192(cParam0, "MRY3_IDLE_1", 0))
						{
							func_212(&uLocal_1127);
						}
					}
				}
				else
				{
					func_212(&uLocal_1127);
				}
			}
			else
			{
				if (func_26(&uLocal_1127))
				{
					func_538(&uLocal_1127);
				}
				if (is_entity_at_coord(Global_35, 2610.099f, -1419.531f, 45.267f, 1f, 1f, 3f, false, true, 0) || is_entity_at_coord(Global_35, 2635.751f, -1418.39f, 45.3884f, 1f, 1f, 3f, false, true, 0))
				{
					func_1206(4);
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			func_1271(cParam0, "MRY3_OBJ_STOP", get_entity_coords(&(Local_709[1]), true, false));
			func_212(&uLocal_1136);
			func_135(cParam0, -1);
			break;
		case 51:
			break;
	}
}

void func_1259()
{
	switch (iLocal_24)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[0])))
			{
				func_1665(0);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(&(Local_38[0])))
			{
				if (!_is_anim_scene_started(&(Local_38[0]), false))
				{
					start_anim_scene(&(Local_38[0]));
				}
				else
				{
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			if (func_1211(&(Local_38[0])))
			{
				if (_does_anim_scene_exist(&(Local_38[0])))
				{
					_delete_anim_scene(&(Local_38[0]));
				}
			}
			else if (does_entity_exist(iVar1215))
			{
				if (func_855(iVar1215, Global_35, 1, 1) <= 250f)
				{
					if (_does_anim_scene_exist(&(Local_38[0])))
					{
						_delete_anim_scene(&(Local_38[0]));
					}
				}
			}
			break;
	}
}

void func_1260()
{
	if (was_ped_skeleton_updated(Global_35))
	{
		vVar4 = { get_ped_bone_coords(Global_35, 0, 0f, 0f, 0f) };
	}
	if (func_26(&uLocal_1166) && func_864(&uLocal_1166) >= 6f)
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Local_38[2]->f_3[iVar0] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		bVar3 = true;
	}
	if (bVar2 && !bVar3)
	{
		if (iVar488 == -1)
		{
			iLocal_490 = get_random_int_in_range(0, 3);
		}
		else
		{
			iLocal_490 = func_1702(0, 3, iVar488);
		}
		if (!&Local_38[2]->f_14[iVar488])
		{
			if (iVar488 == 0)
			{
				if (iLocal_27 == 1)
				{
					cLocal_529 = func_409(12);
				}
				else if (iLocal_27 == 2)
				{
					cLocal_529 = func_409(13);
				}
			}
			else if (iVar488 == 1)
			{
				if (iLocal_27 == 1)
				{
					cLocal_529 = func_409(14);
				}
				else if (iLocal_27 == 2)
				{
					cLocal_529 = func_409(15);
				}
			}
			else if (iVar488 == 2)
			{
				if (iLocal_27 == 1)
				{
					cLocal_529 = func_409(16);
				}
				else if (iLocal_27 == 2)
				{
					cLocal_529 = func_409(17);
				}
			}
			if ((_is_anim_scene_started(&(Local_38[2]), false) && !_0x0df57f86fe71dbe5(&(Local_38[2]), sVar527)) && !_0x23e33cb9f4a3f547(&(Local_38[2]), sVar527))
			{
				_0xdf7b5144e25cd3fe(&(Local_38[2]), sVar527);
			}
			Local_38[2]->f_14[iVar488] = 1;
			func_538(&uLocal_1166);
			iLocal_27 = 3;
		}
	}
	switch (iLocal_27)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[2])))
			{
				func_1665(2);
				attach_anim_scene_to_entity(&(Local_38[2]), iVar1214, 12);
				iLocal_27 = 5;
			}
			break;
		case 5:
			if (is_ped_in_vehicle(&(Local_709[1]), iVar1214, false))
			{
				if (_does_anim_scene_exist(&(Local_38[2])))
				{
					if (!_is_anim_scene_started(&(Local_38[2]), false))
					{
						start_anim_scene(&(Local_38[2]));
					}
					else
					{
						iLocal_27 = 6;
					}
				}
			}
			break;
		case 6:
			if (_0x9420fb11b8d77948(Global_35) == 1 || _0x9420fb11b8d77948(Global_35) == 2)
			{
				if (func_1703(&(iLocal_1223[33]), vVar4))
				{
					func_1704(2, 10);
					set_anim_scene_bool(&(Local_38[2]), "bJumpLeft", true, false);
					iLocal_27 = 1;
				}
				if (func_1703(&(iLocal_1223[34]), vVar4))
				{
					func_1704(2, 11);
					set_anim_scene_bool(&(Local_38[2]), "bJumpRight", true, false);
					iLocal_27 = 2;
				}
			}
			break;
		case 1:
			if ((_does_anim_scene_exist(&(Local_38[2])) && _is_anim_scene_started(&(Local_38[2]), false)) && _0x8d81e7824b7753f7(&(Local_38[2]), "s_panic_base_loop_R", 1))
			{
				if (!func_26(&uLocal_1166))
				{
					func_27(&uLocal_1166, 0);
				}
			}
			if (func_1273(Global_35, iVar1214, 1))
			{
				if (func_1703(&(iLocal_1223[34]), vVar4))
				{
					func_1704(2, 11);
					func_1270(2, 10);
					iLocal_27 = 2;
				}
			}
			break;
		case 2:
			if ((_does_anim_scene_exist(&(Local_38[2])) && _is_anim_scene_started(&(Local_38[2]), false)) && _0x8d81e7824b7753f7(&(Local_38[2]), "s_panic_base_loop_L", 1))
			{
				if (!func_26(&uLocal_1166))
				{
					func_27(&uLocal_1166, 0);
				}
			}
			if (func_1273(Global_35, iVar1214, 1))
			{
				if (func_1703(&(iLocal_1223[33]), vVar4))
				{
					func_1704(2, 10);
					func_1270(2, 11);
					iLocal_27 = 1;
				}
			}
			break;
		case 3:
			if (_is_anim_scene_started(&(Local_38[2]), false))
			{
				if (!_0x1f0e401031e20146(&(Local_38[2]), sVar527))
				{
					if (_0x23e33cb9f4a3f547(&(Local_38[2]), sVar527))
					{
						_set_anim_scene_playback_list_bool(&(Local_38[2]), sVar527, true);
						iLocal_27 = 4;
					}
				}
			}
			break;
		case 4:
			if (_0x8d81e7824b7753f7(&(Local_38[2]), "s_panic_base_loop_L", 1))
			{
				if (!func_26(&uLocal_1166))
				{
					func_27(&uLocal_1166, 0);
					iLocal_27 = 2;
				}
			}
			else if (_0x8d81e7824b7753f7(&(Local_38[2]), "s_panic_base_loop_R", 1))
			{
				if (!func_26(&uLocal_1166))
				{
					func_27(&uLocal_1166, 0);
					iLocal_27 = 1;
				}
			}
			break;
		case 7:
			break;
	}
}

void func_1261(char[4] cParam0)
{
	switch (Local_709[1]->f_2)
	{
		case 2:
			if (_is_tracked_point_valid(iVar483))
			{
				if (is_tracked_point_visible(iVar483) || has_entity_clear_los_to_entity(Global_35, &(Local_709[1]), 17))
				{
					if (does_blip_exist(iVar1210))
					{
						remove_blip(&iLocal_1213);
					}
					if (!does_blip_exist(Local_709[1]->f_1))
					{
						Local_709[1]->f_1 = func_1263(408396114, &(Local_709[1]), 1);
						set_blip_name_from_text_file(Local_709[1]->f_1, "MRY3_BLIP_BUYER");
					}
					if (!func_871(&(Local_709[4]), 658540077))
					{
						if (Global_43838 == 1)
						{
							task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_right", 0, 9740, -1, 0, 0, -1);
						}
						else if (Global_43838 == 2)
						{
							task_follow_waypoint_recording(&(Local_709[4]), "mary3_amb_wagon_left", 0, 9740, -1, 0, 0, -1);
						}
					}
					if (!is_gameplay_hint_active())
					{
						set_gameplay_ped_hint(&(Local_709[1]), 0f, 0f, 0f, true, 3000, 2000, 2000);
					}
					else
					{
						func_1218(&(Local_709[1]->f_2), 4);
					}
				}
			}
			break;
		case 4:
			break;
		case 9:
			break;
	}
}

void func_1262()
{
	if (!func_1227(8))
	{
		if (!func_1227(2))
		{
			if (func_1231(Global_35, &(iLocal_1223[25]), 1, 0))
			{
				func_772(&(Local_709[6]), Local_709[6]->f_5, Local_709[6]->f_5.f_3, 2, 1073741824);
				func_772(&(Local_709[7]), Local_709[7]->f_5, Local_709[7]->f_5.f_3, 2, 1073741824);
				func_772(&(Local_709[8]), Local_709[8]->f_5, Local_709[8]->f_5.f_3, 2, 1073741824);
				func_379(iVar1214, func_215(5, 0), 2, 1073741824);
				func_379(&(Local_709[1]), func_215(4, 0), 2, 1073741824);
				func_772(&(Local_709[10]), Local_709[10]->f_5, Local_709[10]->f_5.f_3, 2, 1073741824);
				func_772(&(Local_709[11]), Local_709[11]->f_5, Local_709[11]->f_5.f_3, 2, 1073741824);
				func_772(&(Local_709[11]), Local_709[11]->f_5, Local_709[11]->f_5.f_3, 2, 1073741824);
				set_tracked_point_info(Local_709[6]->f_16, get_entity_coords(&(Local_709[6]), true, false), 1f);
				set_tracked_point_info(Local_709[7]->f_16, get_entity_coords(&(Local_709[7]), true, false), 1f);
				set_tracked_point_info(Local_709[8]->f_16, get_entity_coords(&(Local_709[8]), true, false), 1f);
				set_tracked_point_info(iVar484, get_entity_coords(&(Local_709[1]), true, false), 1f);
				if (Local_709[9]->f_16 == 0)
				{
					Local_709[9]->f_16 = create_tracked_point();
				}
				else
				{
					set_tracked_point_info(Local_709[9]->f_16, get_entity_coords(&(Local_709[9]), true, false), 1f);
				}
				_0xcac43d060099ea72(&(Local_709[9]));
				set_entity_visible(&(Local_709[9]), false);
				freeze_entity_position(&(Local_709[9]), true);
				set_entity_completely_disable_collision(&(Local_709[9]), false, false);
				set_ped_config_flag(&(Local_709[9]), 471, true);
				set_ped_config_flag(&(Local_709[9]), 324, true);
				_0xcac43d060099ea72(&(Local_709[8]));
				set_entity_visible(&(Local_709[8]), false);
				freeze_entity_position(&(Local_709[8]), true);
				set_entity_completely_disable_collision(&(Local_709[8]), false, false);
				set_ped_config_flag(&(Local_709[8]), 471, true);
				set_ped_config_flag(&(Local_709[8]), 324, true);
				Global_43838 = 1;
				func_1232(2);
				func_1284(4);
			}
		}
		if (!func_1227(4))
		{
			if (func_1231(Global_35, &(iLocal_1223[26]), 1, 0))
			{
				func_772(&(Local_709[6]), Local_709[6]->f_9, Local_709[6]->f_9.f_3, 2, 1073741824);
				func_772(&(Local_709[7]), Local_709[7]->f_9, Local_709[7]->f_9.f_3, 2, 1073741824);
				func_772(&(Local_709[8]), Local_709[8]->f_9, Local_709[8]->f_9.f_3, 2, 1073741824);
				func_772(&(Local_709[9]), Local_709[9]->f_9, Local_709[9]->f_9.f_3, 2, 1073741824);
				func_379(iVar1214, func_215(5, 3), 2, 1073741824);
				func_379(&(Local_709[1]), func_215(4, 1), 2, 1073741824);
				func_772(&(Local_709[10]), Local_709[10]->f_9, Local_709[10]->f_9.f_3, 2, 1073741824);
				func_772(&(Local_709[11]), Local_709[11]->f_9, Local_709[11]->f_9.f_3, 2, 1073741824);
				func_772(&(Local_709[11]), Local_709[11]->f_9, Local_709[11]->f_9.f_3, 2, 1073741824);
				set_tracked_point_info(Local_709[6]->f_16, get_entity_coords(&(Local_709[6]), true, false), 1f);
				set_tracked_point_info(Local_709[7]->f_16, get_entity_coords(&(Local_709[7]), true, false), 1f);
				set_tracked_point_info(Local_709[8]->f_16, get_entity_coords(&(Local_709[8]), true, false), 1f);
				set_tracked_point_info(iVar484, get_entity_coords(&(Local_709[1]), true, false), 1f);
				if (_is_tracked_point_valid(Local_709[9]->f_16))
				{
					destroy_tracked_point(Local_709[9]->f_16);
				}
				_0xc9151483cc06a414(&(Local_709[9]));
				set_entity_visible(&(Local_709[9]), true);
				freeze_entity_position(&(Local_709[9]), false);
				set_entity_completely_disable_collision(&(Local_709[9]), true, false);
				set_ped_config_flag(&(Local_709[9]), 471, false);
				set_ped_config_flag(&(Local_709[9]), 324, false);
				_0xcac43d060099ea72(&(Local_709[8]));
				set_entity_visible(&(Local_709[8]), false);
				freeze_entity_position(&(Local_709[8]), true);
				set_entity_completely_disable_collision(&(Local_709[8]), false, false);
				set_ped_config_flag(&(Local_709[8]), 471, true);
				set_ped_config_flag(&(Local_709[8]), 324, true);
				Global_43838 = 2;
				func_1232(4);
				func_1284(2);
			}
		}
	}
	else if (func_1227(2))
	{
		if (Global_43838 != 1)
		{
			Global_43838 = 1;
		}
	}
	else if (func_1227(4))
	{
		if (Global_43838 != 2)
		{
			Global_43838 = 2;
		}
	}
}

int func_1263(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1264(char[4] cParam0)
{
	waypoint_recording_get_closest_waypoint("mary3_wagon_chase_left", get_entity_coords(Global_35, true, false), &iVar0);
	switch (func_1286(cParam0))
	{
		case 0:
			func_1271(cParam0, "MRY3_OBJ_CHASE", get_entity_coords(iVar1213, true, false));
			func_1272(cParam0, "MRY3_OBJ_CHASE", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			if (func_26(&uLocal_1136))
			{
				func_212(&uLocal_1136);
			}
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1192(cParam0, "MRY3_CHASE", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1274())
			{
				if (iVar0 >= 29)
				{
					if (!func_1193(8))
					{
						if (func_855(Global_35, iVar1213, 1, 1) <= 40f)
						{
							func_1705(cParam0, "MRY3_CATCH_UP", 0, 0);
							func_1206(8);
						}
					}
				}
				if (iVar0 >= 110)
				{
					if (!func_1193(16))
					{
						if (func_855(Global_35, iVar1213, 1, 1) <= 25f)
						{
							func_1705(cParam0, "MRY3_CATCH_UP", 2, 0);
							func_1206(16);
						}
					}
				}
				if (iVar0 >= 214)
				{
					if (!func_1193(32))
					{
						if (func_855(Global_35, iVar1213, 1, 1) <= 15f)
						{
							func_1705(cParam0, "MRY3_CATCH_UP", 5, 0);
							func_1206(32);
						}
					}
				}
				if (iVar0 == 10)
				{
					if (!func_1193(64))
					{
						func_1705(cParam0, "MRY3_CATCH_UP", 1, 0);
						func_1206(64);
					}
				}
				else if (iVar0 == 45)
				{
					if (!func_1193(128))
					{
						func_1705(cParam0, "MRY3_CATCH_UP", 3, 0);
						func_1206(128);
					}
				}
				else if (iVar0 == 70)
				{
					if (!func_1193(256))
					{
						func_1705(cParam0, "MRY3_CATCH_UP", 4, 0);
						func_1206(256);
					}
				}
			}
			if (func_855(Global_35, iVar1213, 1, 1) <= 5f)
			{
				func_1271(cParam0, "MRY3_OBJ_JUMP", get_entity_coords(iVar1213, true, false));
				if (func_1238(cParam0, "MRY3_OBJ_JUMP", 4, 0, 0))
				{
					func_212(&uLocal_1136);
					func_212(&uLocal_1133);
					func_135(cParam0, 3);
				}
			}
			break;
		case 3:
			if (get_vehicle_ped_is_using(Global_35) != iVar1213)
			{
				if (func_26(&uLocal_1133))
				{
					if (func_1210(&uLocal_1133) >= 5f)
					{
						if (!func_478(iVar1364))
						{
							uLocal_1367 = func_694("MRY3_JUMP_HELP", 10000, 0, 0, 0, 1);
							func_212(&uLocal_1133);
							func_135(cParam0, -1);
						}
					}
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1265(float fParam0)
{
	func_1706(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1266()
{
	fVar3 = 22f;
	if (is_entity_occluded(iVar1214))
	{
		fVar2 = 2f;
	}
	else if (get_vehicle_waypoint_progress(iVar1214) <= 9)
	{
		fVar2 = 10f;
	}
	else if (get_vehicle_waypoint_progress(iVar1214) >= 799)
	{
		fVar2 = 13f;
	}
	else if (func_855(Global_35, iVar1214, 1, 1) <= 50f)
	{
		fVar2 = 11.7f;
	}
	else if (func_855(Global_35, iVar1214, 1, 1) >= 100f)
	{
		fVar2 = 6f;
	}
	else
	{
		fVar2 = 8f;
	}
	waypoint_recording_get_num_points("mary3_wagon_chase_left", &uVar0);
	fLocal_493 = func_855(iVar1214, Global_35, 1, 1);
	fVar1 = (1f - (to_float(get_vehicle_waypoint_progress(iVar1214)) / 281f));
	if (get_vehicle_waypoint_progress(iVar1214) >= 231)
	{
		fLocal_496 = 3f;
	}
	else
	{
		fLocal_496 = (30f * fVar1);
	}
	if (fVar494 <= 3f)
	{
		fLocal_496 = 3f;
	}
	fLocal_494 = (fVar494 / fVar491);
	fLocal_495 = (15f * fVar492);
	if (fVar493 < fVar2)
	{
		vehicle_waypoint_playback_override_speed(iVar1214, fVar2);
	}
	else if (fVar493 > fVar3)
	{
		vehicle_waypoint_playback_override_speed(iVar1214, fVar3);
	}
	else
	{
		vehicle_waypoint_playback_override_speed(iVar1214, fVar493);
	}
}

void func_1267(char[4] cParam0, int iParam1)
{
	if (!_does_anim_scene_exist(iParam1))
	{
		return;
	}
	if (_is_anim_scene_loading(iParam1, true))
	{
		return;
	}
	if (_is_anim_scene_loaded(iParam1, true, false))
	{
		return;
	}
	iVar0 = func_813(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_809(cParam0->f_1126[iVar0]->f_3, func_33(cParam0)))
	{
		return;
	}
	cParam0->f_1126[iVar0]->f_66 = 1;
}

bool func_1268(int iParam0, int iParam1, bool bParam2)
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

void func_1269(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if ((_is_draft_vehicle(iParam0) || func_1707(iParam0)) && !is_entity_dead(iParam0))
		{
			_0xd826690b5cf3beff(iParam0, 1f);
			_0x850ce59dec2028f3(iParam0, 1);
			_0x6090a031c69f384e(iParam0, 1);
		}
		set_vehicle_wheels_can_break(iParam0, true);
		set_vehicle_wheels_can_break_off_when_blow_up(iParam0, true);
		set_vehicle_explodes_on_high_explosion_damage(iParam0, true);
		set_vehicle_has_strong_axles(iParam0, false);
		set_entity_can_be_damaged(iParam0, true);
		if (_0xe777ddf3e78397e8(iParam0) > 0)
		{
			set_vehicle_can_break(iParam0, true);
		}
	}
}

int func_1270(int iParam0, int iParam1)
{
	if ((_does_anim_scene_exist(&(Local_38[iParam0])) && _is_anim_scene_started(&(Local_38[iParam0]), false)) && !_0x1f0e401031e20146(&(Local_38[iParam0]), func_409(iParam1)))
	{
		if (_0x23e33cb9f4a3f547(&(Local_38[iParam0]), func_409(iParam1)))
		{
			_set_anim_scene_playback_list_bool(&(Local_38[iParam0]), func_409(iParam1), true);
			return 1;
		}
	}
	return 0;
}

void func_1271(char[4] cParam0, char* sParam1, vector3 vParam2)
{
	if (!func_1708(sParam1, 0, 0, -1, -1, 0))
	{
		func_1209(cParam0, sParam1, -1082130432, 0, 0, -1, -1, 0);
		vLocal_513 = { vParam2 };
		fLocal_497 = get_distance_between_coords(vLocal_513, Global_36, true);
	}
}

var func_1272(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1209(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_922(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1709(cParam0, sParam1))
	{
		sVar1 = func_1472(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1471(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

bool func_1273(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1274()
{
	return func_1710(1);
}

void func_1275(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1711(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1712(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_504(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1713(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1714(iParam1);
		}
	}
	if (func_1713(cParam0, iParam1))
	{
		func_1715(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1716(cParam0, iParam1, 128);
		}
		else
		{
			func_1715(cParam0, iParam1, 128);
		}
		if (func_967(cParam0, iParam1, &iVar3))
		{
			func_1447(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1717(iVar1);
	}
}

void func_1276(char[4] cParam0, char[4] cParam1)
{
	func_1718(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1277()
{
	StringCopy(&Local_1105, "camera_treatments", 64);
	StringCopy(&(Local_1105.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_1105);
}

void func_1278(char[4] cParam0, char[4] cParam1)
{
	func_1190(&(cParam0->f_7375), cParam1);
	func_371(cParam0, 33554432);
}

bool func_1279()
{
	if (!does_entity_exist(iVar1216))
	{
		iLocal_1218 = _create_mission_train(-1083616881, 2738.975f, -1414.386f, 45.03957f, false, false, true, true);
		return false;
	}
	return true;
}

void func_1280(char[4] cParam0)
{
	switch (func_1286(cParam0))
	{
		case 1:
			func_1271(cParam0, "MRY3_OBJ_DRIVE", 1804.312f, -1728.799f, 46.5772f);
			if (!is_ped_in_vehicle(&(Local_709[3]), iVar1213, false))
			{
				func_212(&uLocal_1136);
				func_1238(cParam0, "MRY3_OBJ_DRIVE", 5, 0, 0);
				func_135(cParam0, -1);
			}
			break;
		case 2:
			func_1271(cParam0, "MRY3_OBJ_WAGON", get_entity_coords(iVar1213, true, false));
			if (func_1238(cParam0, "MRY3_OBJ_WAGON", 5, 0, 0))
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			break;
		case 4:
			func_1271(cParam0, "MRY3_BROOCH", get_entity_coords(&(Local_709[1]), true, false));
			func_212(&uLocal_1136);
			if (func_1238(cParam0, "MRY3_BROOCH", 5, 0, 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 5:
			if (!func_378(16384))
			{
				if (func_1192(cParam0, "MRY3_THREATEN", 0))
				{
					func_135(cParam0, -1);
				}
			}
			else
			{
				func_135(cParam0, -1);
			}
			break;
		case 6:
			if (func_339(111756353, 1, 0))
			{
				bVar0 = true;
			}
			if (iLocal_34 == 6)
			{
				if (_is_anim_scene_started(&(Local_38[12]), false))
				{
					if (_0x1f0e401031e20146(&(Local_38[12]), func_409(44)))
					{
						if (_get_anim_scene_progress(&(Local_38[12])) >= 0.5833333f)
						{
							bVar0 = true;
							func_310(111756353, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_1719(&(Local_709[1]), 111756353, 1);
						}
					}
					else if (_0x1f0e401031e20146(&(Local_38[12]), func_409(46)))
					{
						if (_get_anim_scene_progress(&(Local_38[12])) >= 0.5724138f)
						{
							bVar0 = true;
							func_310(111756353, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_1719(&(Local_709[1]), 111756353, 1);
						}
					}
				}
			}
			if (bVar0)
			{
				if (!does_blip_exist(iVar1206))
				{
					iLocal_1209 = _blip_add_for_entity(422991367, &(Local_530[0]));
					set_blip_name_from_text_file(iVar1206, "MRY3_BLIP_MARY");
				}
				func_1720(&(Local_530[0]), -401963276, 1);
				func_1271(cParam0, "MRY3_RETURN", get_entity_coords(&(Local_530[0]), true, false));
				if (does_blip_exist(Local_709[1]->f_1))
				{
					remove_blip(&(Local_709[1]->f_1));
				}
				if (func_1238(cParam0, "MRY3_RETURN", 5, 0, 0))
				{
					func_212(&uLocal_1136);
					func_135(cParam0, -1);
				}
			}
			break;
		case 7:
			if (func_864(&uLocal_1133) >= 10f)
			{
				if (!func_1274())
				{
					func_1192(cParam0, "MRY3_PANIC_V2", 0);
					func_212(&uLocal_1133);
				}
			}
			break;
		case 8:
			if (!_0x54b187f111d9c6f8(&(Local_709[1]), 1))
			{
				func_1192(cParam0, "MRY3_BUY1", 0);
				func_212(&uLocal_1133);
				func_135(cParam0, 9);
			}
			break;
		case 9:
			if (!func_1207("MRY3_BUY1"))
			{
				if (!func_1193(512))
				{
					func_1206(512);
					func_135(cParam0, -1);
				}
			}
			break;
		case 11:
			if (!func_1274() && !is_any_speech_playing(&(Local_709[1])))
			{
				if (func_1192(cParam0, "MRY3_BUY2", 0))
				{
					func_1206(1024);
					func_212(&uLocal_1133);
					func_135(cParam0, -1);
				}
			}
			break;
		case 12:
			if (!func_1274() && !is_any_speech_playing(&(Local_709[1])))
			{
				if (func_1192(cParam0, "MRY3_BUY3", 0))
				{
					func_1206(2048);
					func_212(&uLocal_1133);
					func_135(cParam0, -1);
				}
			}
			break;
	}
}

bool func_1281(char[4] cParam0)
{
	if (func_1227(33554432))
	{
		disable_control_action(0, 1287709438, false);
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	if (iLocal_37 >= 3 && iLocal_37 < 7)
	{
		_0x702b75dc9d3ede56(true);
		if (func_1227(8388608))
		{
			if (is_waypoint_playback_going_on_for_vehicle(iVar1216, 0))
			{
				vehicle_waypoint_playback_override_speed(iVar1216, 6f);
			}
		}
		if (func_1227(16777216))
		{
			if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
			{
				waypoint_playback_override_speed(Global_35, 2f, 0, -1082130432, 0);
			}
		}
	}
	switch (iLocal_37)
	{
		case 0:
			_0x1b3c2d961f5fc0e1("script@Story@Mary3@return_to_saintdenis");
			prefetch_srl("script@cme@MRY3_CME_Bayou_srl");
			_0xae00387e53b1e9fc();
			iLocal_37 = 1;
			break;
		case 1:
			break;
		case 2:
			if (_0xdd0b7c5ae58f721d("script@Story@Mary3@return_to_saintdenis"))
			{
				set_player_control(player_id(), false, 0, false);
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (is_srl_loaded() && _0x6bfbdc46139c45ab(2077.499f, -1034.204f, 42.53389f))
			{
				_0xbc016635d6a73b31("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5);
				_0x5e3ccf03995388b5(-205522369, 2077.499f, -1034.204f, 42.53389f);
				if (func_1227(16777216))
				{
					func_772(iVar1204, 2077.499f, -1034.204f, 42.53389f, 153.3f, 2, 1073741824);
					force_ped_motion_state(iVar1204, -530524, false, 0, false);
					_0x2208438012482a1a(iVar1204, false, false);
					task_follow_waypoint_recording(Global_35, "mary3_cme_to_denis", 0, 9480, -1, 0, 0, -1);
					waypoint_playback_override_speed(Global_35, 2f, 0, -1082130432, 0);
				}
				if (func_1227(8388608))
				{
					func_772(iVar1216, 2077.499f, -1034.204f, 42.53389f, 153.3f, 0, 1073741824);
					set_vehicle_forward_speed(iVar1216, 6f);
					task_vehicle_follow_waypoint_recording(Global_35, iVar1216, "mary3_cme_to_denis", 524295, 0, 9224, -1, -1082130432, 0, 1073741824, 0);
					vehicle_waypoint_playback_override_speed(iVar1216, 6f);
				}
				if (!func_26(&uLocal_1154))
				{
					func_27(&uLocal_1154, 0);
				}
				else
				{
					func_212(&uLocal_1154);
				}
				iLocal_500 = 1;
				iLocal_37 = 4;
			}
			break;
		case 4:
			if (func_1227(16777216))
			{
				waypoint_playback_override_speed(Global_35, 2f, 0, -1082130432, 0);
			}
			if (func_1227(8388608))
			{
				vehicle_waypoint_playback_override_speed(iVar1216, 6f);
			}
			if (bVar497)
			{
				end_srl();
				prefetch_srl("script@cme@MRY3_CME_StDenis_srl");
				_0xae00387e53b1e9fc();
				iLocal_500 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5) - func_213(&uLocal_1154)), -514203335, 2279.801f, -1370.593f, 44.38634f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@Mary3@return_to_saintdenis", "3_BayouRoad_1", 5) - func_213(&uLocal_1154))))
			{
				iLocal_37 = 5;
			}
			break;
		case 5:
			_0xbc016635d6a73b31("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5);
			if (func_1227(16777216))
			{
				func_772(iVar1204, 2279.801f, -1370.593f, 44.38634f, -108.8f, 0, 1073741824);
				force_ped_motion_state(iVar1204, -530524, false, 0, false);
				_0x2208438012482a1a(iVar1204, false, false);
				task_follow_waypoint_recording(Global_35, "mary3_cme_to_denis", 0, 9480, -1, 0, 0, -1);
				waypoint_playback_override_speed(Global_35, 2f, 0, -1082130432, 0);
			}
			if (func_1227(8388608))
			{
				func_772(iVar1216, 2279.801f, -1370.593f, 44.38634f, -108.8f, 0, 1073741824);
				set_vehicle_forward_speed(iVar1216, 6f);
				task_vehicle_follow_waypoint_recording(Global_35, iVar1216, "mary3_cme_to_denis", 524295, 0, 9224, -1, -1082130432, 0, 1073741824, 0);
				vehicle_waypoint_playback_override_speed(iVar1216, 6f);
			}
			func_212(&uLocal_1154);
			iLocal_500 = 1;
			iLocal_37 = 6;
			break;
		case 6:
			if (func_1227(16777216))
			{
				waypoint_playback_override_speed(Global_35, 2f, 0, -1082130432, 0);
			}
			if (func_1227(8388608))
			{
				vehicle_waypoint_playback_override_speed(iVar1216, 6f);
			}
			if (bVar497)
			{
				end_srl();
				iLocal_500 = 0;
			}
			else if (!func_8(cParam0, 33554432))
			{
				func_99(cParam0, 33554432);
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5) - func_213(&uLocal_1154)), 0, 2279.801f, -1370.593f, 44.38634f, true, (_0x465f04f68ad38197("script@Story@Mary3@return_to_saintdenis", "2_StDenisBridge_1", 5) - func_213(&uLocal_1154))))
			{
				iLocal_37 = 7;
			}
			break;
		case 7:
			_0x43037abfe214a851();
			set_player_control(player_id(), true, 0, false);
			return true;
	}
	return false;
}

void func_1282()
{
	switch (iLocal_33)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[11])))
			{
				attach_anim_scene_to_entity(&(Local_38[11]), iVar1214, 12);
				func_1665(11);
				iLocal_33 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (_is_anim_scene_started(&(Local_38[11]), false))
			{
				if (_does_anim_scene_exist(&(Local_38[10])) && _is_anim_scene_started(&(Local_38[10]), false))
				{
					_delete_anim_scene(&(Local_38[10]));
				}
			}
			if (func_1211(&(Local_38[11])))
			{
				if (_does_anim_scene_exist(&(Local_38[11])))
				{
					_delete_anim_scene(&(Local_38[11]));
					iLocal_33 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1283(char[4] cParam0)
{
	switch (iLocal_34)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[12])))
			{
				func_1665(12);
				_0xdf7b5144e25cd3fe(&(Local_38[12]), func_409(46));
				iLocal_34 = 1;
			}
			break;
		case 1:
			if (bVar499)
			{
				if (_does_anim_scene_exist(&(Local_38[12])))
				{
					if (!_is_anim_scene_started(&(Local_38[12]), false))
					{
						set_anim_scene_origin(&(Local_38[12]), get_entity_coords(&(Local_709[1]), true, false), get_entity_rotation(&(Local_709[1]), 2), 2);
						iLocal_34 = 2;
					}
				}
			}
			else if (bVar500)
			{
				if (func_855(Global_35, &(Local_709[1]), 1, 1) >= 2f)
				{
					iLocal_34 = 4;
				}
				else
				{
					set_anim_scene_origin(&(Local_38[12]), get_entity_coords(&(Local_709[1]), true, false), get_entity_rotation(&(Local_709[1]), 2), 2);
					iLocal_34 = 2;
				}
			}
			break;
		case 2:
			set_player_control(player_id(), false, 256, false);
			if (!func_871(Global_35, 1369124074))
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_35, 0, 1, 0, 0);
				task_enter_anim_scene(Global_35, &(Local_38[12]), "player_zero", func_409(43), 1.48f, 1, 0, 20000, -1082130432);
				iLocal_34 = 3;
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(Local_38[12])))
			{
				if (_is_anim_scene_started(&(Local_38[12]), false))
				{
					set_player_control(player_id(), true, 0, false);
					func_135(cParam0, 6);
					func_1206(2097152);
					iLocal_34 = 6;
				}
			}
			break;
		case 4:
			if (_does_anim_scene_exist(&(Local_38[12])))
			{
				if (_0x23e33cb9f4a3f547(&(Local_38[12]), func_409(46)))
				{
					if (!_is_anim_scene_started(&(Local_38[12]), false))
					{
						_set_anim_scene_playback_list_bool(&(Local_38[12]), func_409(46), true);
						set_anim_scene_origin(&(Local_38[12]), get_entity_coords(&(Local_709[1]), true, false), get_entity_rotation(&(Local_709[1]), 2), 2);
						set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
						start_anim_scene(&(Local_38[12]));
						func_135(cParam0, 6);
					}
				}
				if (_is_anim_scene_started(&(Local_38[12]), false))
				{
					func_1206(2097152);
					iLocal_34 = 6;
				}
			}
			break;
		case 6:
			if ((_does_anim_scene_exist(&(Local_38[12])) && _is_anim_scene_started(&(Local_38[12]), false)) && _0x1f0e401031e20146(&(Local_38[12]), func_409(47)))
			{
				set_player_control(player_id(), true, 0, false);
			}
			if (func_1211(&(Local_38[12])))
			{
				if (_does_anim_scene_exist(&(Local_38[12])))
				{
					_delete_anim_scene(&(Local_38[12]));
					iLocal_34 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1284(int iParam0)
{
	if (func_1227(iParam0))
	{
		func_1663(&uLocal_482, iParam0);
	}
}

void func_1285()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

int func_1286(char[4] cParam0)
{
	return cParam0->f_599;
}

bool func_1287(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1487(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_1288(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_949(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_1721(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_1289(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_179(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1290()
{
	switch (iVar486)
	{
		case 0:
			iVar0 = 10000;
			break;
		case 2:
			iVar0 = 5000;
			break;
		case 4:
			iVar0 = 2500;
			break;
	}
	if (func_1637(1) >= iVar0)
	{
		iLocal_499 = 1;
	}
	else
	{
		iLocal_499 = 0;
	}
}

bool func_1291(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1722(iParam0);
		return func_1723(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

bool func_1292(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			return has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1);
		}
	}
	return false;
}

bool func_1293(int iParam0)
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

void func_1294(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_1724(vVar0, vVar3, 0f) };
	vVar9 = { func_1725(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

void func_1295(char[4] cParam0, int iParam1)
{
	func_140(cParam0, func_33(cParam0), iParam1);
}

void func_1296(char[4] cParam0, int iParam1)
{
	func_1726(&(cParam0->f_7375.f_861), iParam1);
}

void func_1297(char[4] cParam0)
{
	switch (func_1286(cParam0))
	{
		case 1:
			break;
		case 51:
			break;
	}
}

bool func_1298(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_179(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1299(int iParam0)
{
	if (func_10(*iParam0))
	{
		func_11(iParam0, 1, 1);
	}
}

void func_1300(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

void func_1301(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_804, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_804, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_822[iVar0]) && are_strings_equal(sParam1, uParam0->f_822[iVar0]))
		{
			Var1 = { uParam0->f_806 };
			*uParam0->f_822[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_1190(uParam0, sParam1);
	func_1300(uParam0, 2097152, 1);
	func_728(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_804, sParam1, true);
}

void func_1302(var uParam0)
{
	StringCopy(&(uParam0->f_800), "", 32);
	func_1727(uParam0);
	func_1728(uParam0, 0f, 0f, 0f);
	func_1729(uParam0);
}

void func_1303(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_212(&(uParam0->f_1));
}

void func_1304(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_775(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_1730(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_775(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1300(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1300(uParam0, 16, 1);
}

void func_1305(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_1306(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1307(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1351(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1308(char[4] cParam0)
{
	switch (func_1286(cParam0))
	{
		case 1:
			break;
		case 51:
			break;
	}
}

int func_1309(var uParam0)
{
	return uParam0;
}

bool func_1310(int iParam0)
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

char* func_1311()
{
	return "cutDeleteMe";
}

bool func_1312(int iParam0)
{
	if (-1829635046 == func_1731(81053684))
	{
		if (func_1732(iParam0))
		{
			return true;
		}
	}
	else if (func_1556(-525676072, iParam0))
	{
		if (func_1732(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1313(int iParam0)
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

void func_1314(int iParam0)
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

void func_1315()
{
	iVar0 = func_1055(Global_35, 9, 1, 0);
	if (func_670(iVar0))
	{
		return;
	}
	iVar0 = func_1055(Global_35, 7, 1, 0);
	if (func_670(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1055(Global_35, 0, 1, 0);
	if (func_670(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1055(Global_35, 1, 1, 0);
	if (func_670(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1055(Global_35, 18, 1, 0);
	if (func_670(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1733();
	if (func_670(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1734(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1735(6291456, 0);
	if (func_670(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1734(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1316()
{
	return Global_1900383->f_393;
}

int func_1317(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1683(*uParam0, 0f, 0f, 0f))
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

void func_1318(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1319(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1320(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1321()
{
	return &Global_1899515;
}

void func_1322(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1323(int iParam0)
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

bool func_1324()
{
	return (func_1736() || func_1737());
}

void func_1325(bool bParam0)
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
	func_1738(0f);
	Global_1935436->f_11 = 1;
	if (func_296())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1739();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1326(var uParam0)
{
	return uParam0->f_865;
}

float func_1327(var uParam0)
{
	return uParam0->f_868;
}

float func_1328(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_1329(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1330(var uParam0, int iParam1)
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

void func_1331(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1148(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1740(iParam4);
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

bool func_1332(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_655(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1333(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1334(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1332(1108822547, 6))
	{
		if (bParam2)
		{
			func_1331(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1335(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1336(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1335(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_655(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_655(iParam0, 1)])->f_10 || iParam1);
}

void func_1336(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_655(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_655(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_655(iParam0, 1)])->f_10 && iParam1));
}

bool func_1337(var uParam0)
{
	if (func_1741(&(uParam0->f_29), 62))
	{
		switch (func_1742())
		{
			case 1:
				if (!func_1741(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1741(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1741(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1741(&(uParam0->f_29), 32))
				{
					if (func_1741(&(uParam0->f_29), 2))
					{
						if (func_677(func_277()) < 5)
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

int func_1338(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1743(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1096("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_942(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_670(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1743(iParam1, 512) && func_1552(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1743(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1743(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1743(iParam1, 33554432)))
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
		func_944(iVar1);
	}
	if (func_670(iVar0))
	{
	}
	else if (!func_1743(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1338(uParam0, iParam1, iParam2);
	}
	else if (func_1743(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1339(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1340(int iParam0)
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

void func_1341(var uParam0)
{
	if (!func_845(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_812(&(uParam0->f_1), 1);
	}
}

void func_1342(var uParam0)
{
	if (!func_845(*uParam0, 1))
	{
		request_ptfx_asset();
		func_812(uParam0, 1);
	}
}

bool func_1343(var uParam0)
{
	if (func_845(uParam0->f_2, 1))
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

char* func_1344(int iParam0)
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

bool func_1345(int iParam0)
{
	return iParam0 != 0;
}

int func_1346(var uParam0, int iParam1)
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

int func_1347(var uParam0, char* sParam1)
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

void func_1348(var uParam0, int iParam1)
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

int func_1349(var uParam0)
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

void func_1350(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
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
		if (((func_209((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
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
	func_481(sParam0, 1);
}

bool func_1358(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_815(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1359(var uParam0)
{
	if (func_845(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_3, 1))
	{
		func_817(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_812(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_812(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1360(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_819(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1361(var uParam0, int iParam1)
{
	if (func_845(uParam0->f_1, 2))
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
	if (!func_845(uParam0->f_1, 1))
	{
		func_826(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1362(var uParam0)
{
	if (func_845(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_2, 1))
	{
		func_828(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_812(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1363(var uParam0)
{
	if (func_845(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_3, 1))
	{
		func_830(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_812(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1364(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_832(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1365(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_834(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1366(var uParam0)
{
	if (func_845(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_2, 1))
	{
		func_836(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_812(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1367(var uParam0)
{
	if (func_845(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_845(uParam0->f_1, 1))
	{
		func_838(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_812(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1368(int iParam0)
{
	if (func_500(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1369(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_500(iParam0))
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
			if (func_976(iParam0, 2, 1))
			{
				func_974(iParam0, 2, 1);
			}
			if (func_689(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_972(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_506(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_382(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_382(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1744(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_972(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1745(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_972(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1745(iParam0, 1);
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
			if (!func_976(iParam0, 44, 0))
			{
				func_972(iParam0, 44, 0);
			}
			if (func_1746(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1745(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_974(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_978(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1747(iParam0, 0, 0, 1);
			}
			func_974(iParam0, 33, 1);
			func_974(iParam0, 34, 1);
			func_974(iParam0, 29, 1);
			if (!func_391(vVar0) && bParam7)
			{
				func_1745(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1745(iParam0, 4);
			}
			else
			{
				func_1745(iParam0, 5);
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
						func_1744(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_772(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1745(iParam0, 4);
			}
			else
			{
				func_1745(iParam0, 5);
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
				if (func_1748(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1749(iParam0, iParam13, 0);
						func_1750(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_976(iParam0, 25, 0))
						{
							func_974(iParam0, 25, 0);
						}
						func_972(iParam0, 66, 0);
						func_1745(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1745(iParam0, 5);
				}
				func_972(iParam0, 28, 1);
			}
			else
			{
				func_1745(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1745(iParam0, 6);
			}
			break;
		case 6:
			if (func_382(Global_1360165[iParam0], 0))
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
					func_1751(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1752(Global_1360165[iParam0], 1);
				}
			}
			func_1745(iParam0, 7);
		case 7:
			func_978(iParam0, bParam9, bParam15, 0);
			func_969(iParam0, 4, bParam11);
			func_973(iParam0);
			if (bParam20)
			{
				if (func_1293(Global_1360165[iParam0]))
				{
				}
			}
			func_1753(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1745(iParam0, 0);
			func_432(iParam0, 16, 1);
			func_974(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1370(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1754(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1755(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1756(cParam0, iParam1, iParam2, func_316(iParam2, 0));
	func_1716(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1716(cParam0, iParam1, 128);
	}
	else
	{
		func_1715(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1371(int iParam0)
{
	if (!func_500(iParam0))
	{
		return;
	}
	iVar0 = func_537(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1372(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1373(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	iParam0 = func_258(iParam0);
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
	func_1757(&Var0);
	func_1758(iParam0, Var0);
	func_1759(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1760(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1761(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1762(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1763(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1764(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1765(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1766(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1767(&(Global_40.f_1095.f_1[iParam0]->f_425));
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
	return func_1768(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1376(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_515(iParam0))
	{
		return false;
	}
	iVar0 = func_207(iParam0);
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
	func_509(iParam0);
	func_509(iParam0);
	func_1769(iParam0, iParam1);
	func_1770(iParam0, iParam1);
	func_1771(iParam0, iParam1);
	iVar1 = func_207(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1772(iVar1);
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
	iVar3 = func_207(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1772(iVar3);
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
	func_260();
}

bool func_1378()
{
	iVar0 = func_1316();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1379()
{
	iVar0 = func_1316();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1773(0);
}

int func_1380(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	iParam0 = func_258(iParam0);
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
	iParam0 = func_258(iParam0);
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
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1613(&iVar0, &iVar1, &iVar2);
	func_1614(iParam0, iVar0);
	func_1615(iParam0, iVar1);
	func_1616(iParam0, iVar2);
	func_1774(iParam0, 1);
	func_1775(iParam0, 1);
}

void func_1384(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1776(iParam0, 1);
}

void func_1385(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_258(iParam0);
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
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_987(iParam0, 1);
}

struct<2> func_1387(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1777(iParam0, &uVar2))
	{
	}
	if (!func_1778(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1388()
{
	if (func_1779(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1779(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1779(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1779(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1779(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1779(-415648720, &uVar11))
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
	func_1780(iParam0);
	func_1781(iParam0, uParam1);
	func_1782(iParam0);
	func_1783(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1784(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1390(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	return *uParam0;
}

bool func_1394(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1785(iParam0) };
	if (func_1683(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_856(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1786(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1395(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1396(var uParam0)
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

bool func_1397(var uParam0)
{
	switch (func_1787(uParam0))
	{
		case 0:
			uParam0->f_24 = func_277();
			iVar4 = func_277();
			func_1153(&iVar4, uParam0->f_6);
			func_1154(&iVar4, 0);
			func_1155(&iVar4, 0);
			if (func_1006(uParam0->f_24, iVar4, 1))
			{
				func_326(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1788(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1789(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1790(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1789(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1790(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_326(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_677(iVar4), func_678(iVar4), func_679(iVar4));
				func_1791(get_clock_hours());
				func_1792(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1398(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1399(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1793(2000);
	Global_16 = 0;
	func_1794();
	set_entity_invincible(Global_35, func_1795(*iParam0, 8));
	if (!func_1795(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1795(*iParam0, 2) || func_1795(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1795(*iParam0, 16))
	{
		func_227(1);
	}
	if (func_1795(*iParam0, 32))
	{
		func_611(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1796(-1623728698, 0);
	}
	func_786(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1400(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1401(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1402(var uParam0)
{
	return *uParam0;
}

bool func_1403(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1404(uParam0, 32768))
	{
		return true;
	}
	if (func_1797(uParam0) >= 3)
	{
		uParam0->f_2286 = func_921(get_player_index(), 0, 0, 1);
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
		func_1798(uParam0);
	}
	if (func_1797(uParam0) < 10)
	{
		if (func_1797(uParam0) == 3)
		{
			func_1799(uParam0, iParam5, bParam6);
		}
		else if (func_1797(uParam0) > 3)
		{
			if (func_1402(uParam0) == 0)
			{
				if (!func_1404(uParam0, 524288))
				{
					func_1800(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1801(uParam0, 4);
					func_1802(uParam0, 10);
					func_1803(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1404(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1804(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1230(0);
			func_1805();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1804(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1806(uParam0, uParam0->f_2074))
				{
					if (func_1692(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1807(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1807(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1808(uParam0);
			}
		}
	}
	bVar0 = func_1809(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1404(uParam0, 268435456) && bVar1) && !func_1404(uParam0, 262144))
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
				func_727(uParam0, 131072);
				func_727(uParam0, 268435456);
			}
		}
		if (func_1810(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1804(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1402(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1797(uParam0) == 3 || func_1404(uParam0, 131072))
	{
		func_1811(uParam0);
		if (!func_1404(uParam0, 262144))
		{
			if ((bVar0 && func_1404(uParam0, 65536)) || func_1404(uParam0, 131072))
			{
				func_727(uParam0, 32768);
				func_1801(uParam0, 4);
				func_1802(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1803(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1797(uParam0) >= 3)
	{
		func_1812(uParam0, iParam5);
		func_1813(uParam0);
		if (!func_1814(uParam0, 1))
		{
			func_1815(uParam0);
		}
		func_1816(uParam0);
	}
	switch (func_1797(uParam0))
	{
		case 0:
			func_1817(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1818(uParam0);
			break;
		case 2:
			func_1819(uParam0);
			break;
		case 3:
			if (func_1693(uParam0))
			{
				func_1820(2);
				func_1807(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_212(&(uParam0->f_2262));
				func_1801(uParam0, 1);
				func_1821();
				func_1802(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1404(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1797(uParam0) == 5)
			{
				if (func_1822(uParam0))
				{
					func_1801(uParam0, 2);
					func_1802(uParam0, 6);
				}
			}
			if (func_1797(uParam0) == 6)
			{
				if (func_1823(uParam0))
				{
					func_1801(uParam0, 3);
					func_1802(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1210(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1824(uParam0, iParam5))
				{
					if (func_1825(uParam0))
					{
						uParam0->f_2075 = func_1826(uParam0);
						func_212(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1801(uParam0, 6);
						func_1802(uParam0, 9);
					}
					else
					{
						func_1801(uParam0, 4);
						func_1802(uParam0, 10);
						func_1803(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1824(uParam0, iParam5))
			{
				func_1803(uParam0, iParam5);
				func_1802(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1404(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1405(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1406(var uParam0, var uParam1)
{
	if (func_1404(uParam1, 32768))
	{
		Var0 = { func_1694(uParam0) };
		func_1301(uParam0, &Var0);
		if (func_1404(uParam1, 131072))
		{
			func_728(uParam0, 268435456);
			if (func_391(uParam0->f_865))
			{
				uParam0->f_865 = { func_1827(uParam1, uParam1->f_2074) };
			}
			if (func_391(uParam0->f_862))
			{
				uParam0->f_862 = { func_1827(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1404(uParam1, 268435456))
		{
			func_1828(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1404(uParam1, 524288))
	{
		func_728(uParam0, 67108864);
		func_1405(uParam1, 524288);
	}
	if (func_1810(uParam1, 128))
	{
		func_728(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1804(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1828(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1407(char[4] cParam0)
{
	if (func_775(&(cParam0->f_7375), 128) || func_775(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1304(&(cParam0->f_7375));
		func_1300(&(cParam0->f_7375), 128, 1);
		func_1300(&(cParam0->f_7375), 256, 1);
		func_1300(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1408(char[4] cParam0)
{
	func_1306(&(cParam0->f_7375));
}

bool func_1409(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1829(uParam4, &cParam0);
	if (func_775(uParam4, 2) && !func_775(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1830(uParam4) != 1)
	{
		func_1831(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1830(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1832(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1303(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1833(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1834(cParam5);
				}
				func_1303(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_775(uParam4, 2097152))
					{
						func_1835(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_775(uParam4, 134217728)))
				{
				}
				else
				{
					func_1836(uParam4);
				}
				func_212(&(uParam4->f_1));
				func_1303(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1837(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_864(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1303(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1838(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1303(uParam4, 4);
					}
					else if (!func_391(func_1839(uParam4)) && !func_1287(Global_35, func_1839(uParam4), 100f, 1, 1))
					{
						func_1314(1);
						start_player_teleport(get_player_index(), func_1839(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_864(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1303(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_271(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1832(uParam4, &cParam0, cParam5);
						func_1303(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_864(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1303(uParam4, 4);
			}
			break;
		case 3:
			func_387(uParam4);
			if (func_1833(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1834(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_775(uParam4, 512)))
			{
				if (!func_775(uParam4, 1024) && func_1840(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_775(uParam4, 512))
				{
					func_212(&(uParam4->f_1));
					func_728(uParam4, 512);
					func_1303(uParam4, 4);
				}
				else if (func_775(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1831(uParam4);
			}
			if (func_775(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1841(uParam4) - func_1842(uParam4)))) <= 2f)
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
				if (func_1843(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1842(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1844(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1845(uParam4);
				return true;
			}
			else
			{
				if (func_775(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_212(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_728(uParam4, 512);
						func_1300(uParam4, 67108864, 1);
						func_1303(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_775(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1842(uParam4) <= 5000) && func_1842(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_775(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1399(&(uParam4->f_861), 0);
					func_728(uParam4, 536870912);
				}
				if (func_1842(uParam4) >= 5000 && func_1842(uParam4) <= (func_1841(uParam4) - 5000))
				{
					func_1846();
				}
			}
			break;
		case 6:
			if (func_1844(uParam4))
			{
				func_1845(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_775(uParam4, 524288))
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
						func_728(uParam4, 1073741824);
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
					if (func_1847(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1303(uParam4, 3);
					}
					else if (func_864(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1303(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1833(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1303(uParam4, 3);
					}
					else if (func_864(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1303(uParam4, 3);
					}
				}
				if (func_1830(uParam4) == 3)
				{
					if (func_775(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1303(uParam4, 4);
			break;
	}
	return false;
}

void func_1410(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1311()))
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

void func_1411(char[4] cParam0)
{
	func_1835(&(cParam0->f_7375));
}

bool func_1412(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_261(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1848(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_262(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1849(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1413(int iParam0)
{
	MemCopy(&cVar0, {func_261(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1414(int iParam0)
{
	Var0 = { func_1413(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1415(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1850(iVar0));
		iVar0++;
	}
}

void func_1416()
{
	Local_530[0]->f_169 = 0;
}

void func_1417(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1851(iParam1))
		{
			func_1852(iParam0, 41788943);
		}
		else if (bParam5)
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
			func_1853(iParam0, 0, 1);
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
			func_1854(iParam0, 0);
			bVar0 = true;
		}
		func_1855(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_1418(int iParam0)
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_1419(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_1420(var uParam0, char* sParam1)
{
	return _does_string_exist_in_string(&(uParam0->f_800), sParam1);
}

void func_1421(var uParam0, char[4] cParam1)
{
	if (func_1420(uParam0, "MRY3_INT"))
	{
		if (!func_1193(65536) && !func_1193(131072))
		{
			if (!func_1856(&uLocal_1384))
			{
				if (_does_anim_scene_exist(cParam1->f_7375.f_804) && (_0x8d81e7824b7753f7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || _0x8d81e7824b7753f7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1)))
				{
					func_1206(32768);
					if (!func_775(uParam0, 2))
					{
						func_728(uParam0, 2);
					}
					func_1857(&uLocal_1384, "MRY3_CXT_HELP", "MRY3_CXT_DHELP", func_543(), 0, 23000, 1, -1, -1);
				}
			}
			else if (func_1858(&uLocal_1384))
			{
				if (func_1859(&uLocal_1384))
				{
					if (func_1860(&uLocal_1384))
					{
						if (_0x8d81e7824b7753f7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || _0x8d81e7824b7753f7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
						{
							set_anim_scene_bool(uParam0->f_804, "Loop", true, false);
							set_anim_scene_bool(uParam0->f_804, "Yes_is", true, false);
						}
						else
						{
							func_1861(&uLocal_1384);
							func_306(13, 709690973, 1, 0, 0, 0, 1065353216, 0);
							func_1206(65536);
							func_1195(32768);
							_0xea323f5e1a4da2f1(-163964935, "MRY3_CXT_HELP");
							chal_add_goal_progress_int_by_score_id(1594333983, 1);
						}
					}
					else if (func_1862(&uLocal_1384))
					{
						if (_0x8d81e7824b7753f7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || _0x8d81e7824b7753f7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
						{
							set_anim_scene_bool(uParam0->f_804, "Loop", true, false);
							set_anim_scene_bool(uParam0->f_804, "Yes_is", false, false);
						}
						else
						{
							func_1861(&uLocal_1384);
							func_1206(131072);
							func_1195(32768);
							func_1863((*Global_1835011)[36]->f_1, 1);
							_0xea323f5e1a4da2f1(648122183, "MRY3_CXT_DHELP");
							func_1206(131072);
						}
					}
				}
				else if (func_1860(&uLocal_1384))
				{
					if (_0x8d81e7824b7753f7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || _0x8d81e7824b7753f7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
					{
						set_anim_scene_bool(cParam1->f_7375.f_804, "Honor_is", true, false);
					}
					else
					{
						func_1861(&uLocal_1384);
						func_1206(65536);
						func_1195(32768);
						_0xea323f5e1a4da2f1(-163964935, "MRY3_CXT_HELP");
						chal_add_goal_progress_int_by_score_id(1594333983, 1);
					}
				}
				else if (func_1862(&uLocal_1384))
				{
					if (_0x8d81e7824b7753f7(cParam1->f_7375.f_804, "MRY3_INT_P2_T02_Shot_2", 1) || _0x8d81e7824b7753f7(uParam0->f_804, "MRY3_INT_P3A1_T02_Shot_1", 1))
					{
						set_anim_scene_bool(cParam1->f_7375.f_804, "Honor_is", false, false);
					}
					else
					{
						func_1861(&uLocal_1384);
						func_1206(131072);
						func_1195(32768);
						func_1863((*Global_1835011)[36]->f_1, 1);
						_0xea323f5e1a4da2f1(648122183, "MRY3_CXT_DHELP");
						func_1206(131072);
					}
				}
				if (func_775(uParam0, 512))
				{
					func_1300(uParam0, 512, 1);
				}
				if (func_775(uParam0, 2))
				{
					func_1300(uParam0, 2, 1);
				}
			}
		}
	}
	if (func_1420(uParam0, "MRY3_EXT"))
	{
		if (!func_1193(65536) && !func_1193(131072))
		{
			if (!func_1856(&uLocal_1384))
			{
				if (_does_anim_scene_exist(cParam1->f_7375.f_804) && _0x1f0e401031e20146(uParam0->f_804, "2-Choice"))
				{
					if (!func_775(uParam0, 2))
					{
						func_728(uParam0, 2);
					}
					func_1206(32768);
					func_1857(&uLocal_1384, "MRY3_CXT_YES", "MRY3_CXT_NO", func_543(), 0, 20000, 1, -1, -1);
				}
			}
			else if (func_1858(&uLocal_1384))
			{
				if (func_1859(&uLocal_1384))
				{
					if (func_1860(&uLocal_1384))
					{
						if (_0x1f0e401031e20146(uParam0->f_804, "2-Choice"))
						{
							set_anim_scene_bool(uParam0->f_804, "bChoice", true, false);
							set_anim_scene_bool(uParam0->f_804, "bBreakout", true, false);
						}
						else
						{
							func_1861(&uLocal_1384);
							Global_1357515 = 0;
							_0xea323f5e1a4da2f1(-163964935, "MRY3_CXT_YES");
							func_1864(cParam1, 1628825755);
							func_1206(65536);
							func_1195(32768);
						}
					}
					else if (func_1862(&uLocal_1384))
					{
						if (_0x1f0e401031e20146(uParam0->f_804, "2-Choice"))
						{
							set_anim_scene_bool(uParam0->f_804, "bChoice", false, false);
							set_anim_scene_bool(uParam0->f_804, "bBreakout", true, false);
						}
						else
						{
							func_1861(&uLocal_1384);
							Global_1357515 = 1;
							_0xea323f5e1a4da2f1(648122183, "MRY3_CXT_NO");
							func_1206(131072);
							func_1195(32768);
							func_1446(cParam1, func_35(cParam1), 2);
						}
					}
				}
				else if (func_1860(&uLocal_1384))
				{
					if (_0x1f0e401031e20146(uParam0->f_804, "2-Choice"))
					{
						set_anim_scene_bool(uParam0->f_804, "bChoice", true, false);
						set_anim_scene_bool(uParam0->f_804, "bBreakout", true, false);
					}
					else
					{
						func_1861(&uLocal_1384);
						Global_1357515 = 0;
						_0xea323f5e1a4da2f1(-163964935, "MRY3_CXT_YES");
						func_1864(cParam1, 1628825755);
						func_1206(65536);
						func_1195(32768);
					}
				}
				else if (func_1862(&uLocal_1384))
				{
					if (_0x1f0e401031e20146(uParam0->f_804, "2-Choice"))
					{
						set_anim_scene_bool(uParam0->f_804, "bChoice", false, false);
						set_anim_scene_bool(uParam0->f_804, "bBreakout", true, false);
					}
					else
					{
						func_1861(&uLocal_1384);
						Global_1357515 = 1;
						_0xea323f5e1a4da2f1(648122183, "MRY3_CXT_NO");
						func_1206(131072);
						func_1195(32768);
						func_1446(cParam1, func_35(cParam1), 2);
					}
				}
				if (func_775(uParam0, 512))
				{
					func_1300(uParam0, 512, 1);
				}
				if (func_775(uParam0, 2))
				{
					func_1300(uParam0, 2, 1);
				}
			}
		}
	}
}

bool func_1422(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1865(cParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_1423(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

int func_1424(int iParam0, bool bParam1, bool bParam2)
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

void func_1425(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_454(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_1426(int iParam0, bool bParam1)
{
	if (func_454(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1427(int iParam0, bool bParam1)
{
	if (func_454(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1428(int iParam0, bool bParam1)
{
	if (func_454(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1429()
{
	return true;
}

int func_1430(int iParam0)
{
	iVar0 = func_1866(iParam0);
	if (does_entity_exist(iVar0) && is_ped_injured(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_1431(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	if (func_580(iParam0, -887064662))
	{
		return 1;
	}
	return func_1867(iParam0);
}

int func_1432(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = _get_ped_quality(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_1433(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -2116748615:
		case -2037578922:
		case -1981561472:
		case -1910795227:
		case -1550768676:
		case -1302821723:
		case -1210546580:
		case -1182983171:
		case -1028170431:
		case -930822792:
		case -452224784:
		case -292997097:
		case -243188398:
		case 1520661:
		case 41707457:
		case 98537260:
		case 111281960:
		case 122748261:
		case 264156159:
		case 490159652:
		case 510312109:
		case 513249462:
		case 674267496:
		case 703712157:
		case 706485280:
		case 729471181:
		case 989669666:
		case 1465438313:
		case 1493541632:
		case 1502581273:
		case 1582986780:
		case 1746830155:
		case 1784941179:
		case 1860580756:
		case 1867262572:
		case 2105463796:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1434(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
	}
	if (func_580(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_1435(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1868(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_1869(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

int func_1436(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_1870(iVar1);
		}
	}
	return iVar0;
}

int func_1437(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam1 = func_1871(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_1872(0);
		if (does_entity_exist(iVar0))
		{
			func_1873(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_1874(iParam0, iParam1, bParam2, iParam3);
}

void func_1438(char[4] cParam0)
{
	vVar1 = { 2582.681f, -1407.028f, 45.18142f };
	vVar4 = { 2613.832f, -1423.258f, 45.37554f };
	iVar0 = func_33(cParam0);
	if (func_1227(128))
	{
		if (_0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(player_id(), 1);
		}
		disable_control_action(0, -824104112, false);
	}
	switch (iLocal_36)
	{
		case 0:
			if (does_entity_exist(&(Local_530[0])))
			{
				if (!func_382(&(Local_530[0]), 0))
				{
					func_1875("MRY3_MARY_FAIL_1", 0);
				}
			}
			if (has_entity_been_damaged_by_entity(&(Local_530[0]), Global_35, 1, 1))
			{
				func_380(524288);
				func_1875("MRY3_MATT_FAIL", 0);
			}
			if (func_33(cParam0) == 0 && func_1201(cParam0) >= 1)
			{
				if (is_explosion_in_sphere(-1, get_entity_coords(&(Local_530[0]), true, false), 30f))
				{
					func_380(524288);
					func_1875("MRY3_MATT_FAIL", 0);
				}
			}
			if (func_1227(128) && (iVar0 == iLocal_17 || iVar0 == iLocal_18))
			{
				if (is_ped_facing_ped(&(Local_709[0]), Global_35, 80f))
				{
					if (!func_1193(262144))
					{
						if (!func_1207("MRY3_FT_SHOOT") && !func_1207("MRY3_SPOTTED"))
						{
							func_47(0, 0);
							if (func_1192(cParam0, "MRY3_SPOTTED", 0))
							{
								func_212(&uLocal_1124);
								func_1206(262144);
							}
						}
					}
					else if (!func_1207("MRY3_SPOTTED"))
					{
						func_1875("MRY3_FOLLOW_FAIL", 0);
					}
				}
			}
			if (!func_1227(128))
			{
				if (func_921(player_id(), 1, 0, 1))
				{
					func_1875("MRY3_LAW_FAIL", 0);
				}
			}
			if (iVar0 == iLocal_16)
			{
				if (func_26(&uLocal_1178))
				{
					if (func_864(&uLocal_1178) >= 120f)
					{
						func_1875("MRY3_TIME_FAIL", 0);
					}
				}
				if (func_1203(Global_35, vLocal_519, 1) >= 500f)
				{
					func_1875("MRY3_TIME_FAIL", 0);
				}
				if (does_entity_exist(&(Local_709[5])))
				{
					if (!func_382(&(Local_709[5]), 0) || has_entity_been_damaged_by_entity(&(Local_709[5]), Global_35, 1, 1))
					{
						func_1875("MRY3_LAW_FAIL", 0);
					}
				}
				if (func_162(cParam0, func_33(cParam0)) == 5 && func_382(&(Local_530[0]), 0))
				{
					if (func_1876(cParam0, &(Local_530[0]), "MRY3_OBJ_RETURN", "MRY3_MARY_FAIL_2", 25f, 50f, 0, 0, 1, 422991367, 0))
					{
						if (does_blip_exist(iVar1209))
						{
							remove_blip(&iLocal_1212);
						}
						_blip_set_modifier(iVar1206, -546708623);
					}
					else if (func_1201(cParam0) == 0)
					{
						if (!does_blip_exist(iVar1209))
						{
							iLocal_1212 = func_1196(408396114, vLocal_519, 10f, 1);
							_blip_set_modifier(iVar1209, -1878373110);
						}
						_set_blip_flash_style(iVar1206, -546708623);
					}
				}
			}
			if (iVar0 == iLocal_17 || iVar0 == iLocal_18)
			{
				if (!func_1227(1))
				{
					if (func_1227(256))
					{
						if (_is_ped_lassoed(&(Local_709[0])))
						{
							func_1875("MRY3_FHARM_FAIL", 0);
						}
						if (func_1877())
						{
							if (!func_1231(&(Local_709[0]), &(iLocal_1223[18]), 1, 0))
							{
								if (!func_1227(128))
								{
									if (func_1192(cParam0, "MRY3_FT_SHOOT", 0))
									{
										func_1232(128);
									}
								}
							}
							else
							{
								func_1875("MRY3_FOLLOW_FAIL", 0);
							}
						}
						if (!func_382(&(Local_709[0]), 0))
						{
							func_1875("MRY3_FKILL_FAIL", 0);
						}
						else if (has_entity_been_damaged_by_entity(&(Local_709[0]), Global_35, 1, 1))
						{
							func_1875("MRY3_FHARM_FAIL", 0);
						}
						if (!func_378(32768))
						{
							if (fVar490 <= 7f && has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167))
							{
								if (!func_1231(&(Local_709[0]), &(iLocal_1223[18]), 1, 0))
								{
									func_1232(128);
								}
							}
						}
						if (!func_378(32768))
						{
							if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167))
							{
								if (!func_1231(&(Local_709[0]), &(iLocal_1223[18]), 1, 0))
								{
									if (is_ped_facing_ped(&(Local_709[0]), Global_35, 80f))
									{
										func_1232(128);
									}
								}
							}
						}
						if (!has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167) && !is_tracked_point_visible(iVar484))
						{
							if (!func_26(&uLocal_1148))
							{
								func_27(&uLocal_1148, 0);
							}
						}
						else if (func_26(&uLocal_1148))
						{
							func_538(&uLocal_1148);
						}
						if (_does_anim_scene_exist(&(Local_38[3])))
						{
							if (_is_anim_scene_started(&(Local_38[3]), false))
							{
								if (func_26(&uLocal_1148))
								{
									func_538(&uLocal_1148);
								}
							}
						}
						if (func_26(&uLocal_1148))
						{
							if (func_1227(2097152))
							{
								if (func_864(&uLocal_1148) >= 10f)
								{
									if (!func_1274())
									{
										if (!func_1193(4194304))
										{
											if (func_1192(cParam0, "MRY3_WHISPER3", 0))
											{
												func_1206(4194304);
											}
										}
									}
								}
							}
							if (func_864(&uLocal_1148) >= 15f)
							{
								func_1875("MRY3_FATH_DIST_FAIL", 1);
							}
						}
						func_1876(cParam0, &(Local_709[0]), "MRY3_FOLLOW_OBJ", "MRY3_FATH_DIST_FAIL", 40f, 60f, 0, 0, 0, 422991367, 0);
						if (is_ped_in_melee_combat(Global_35))
						{
							if (!func_26(&uLocal_1169))
							{
								func_27(&uLocal_1169, 0);
							}
						}
						else if (func_26(&uLocal_1169))
						{
							func_538(&uLocal_1169);
						}
						if (func_26(&uLocal_1169))
						{
							if (func_864(&uLocal_1169) >= 2f)
							{
								if (has_entity_clear_los_to_entity(Global_35, &(Local_709[0]), 3167) && func_855(Global_35, &(Local_709[0]), 1, 1) <= 25f)
								{
									func_1232(128);
								}
							}
						}
						if (func_1231(Global_35, &(iLocal_1223[16]), 1, 0) || func_1231(Global_35, &(iLocal_1223[17]), 1, 0))
						{
							if (!func_1193(1048576))
							{
								if (func_1192(cParam0, "MRY3_WHERE", 0))
								{
									func_1206(1048576);
								}
							}
							else if (!func_1207("MRY3_WHERE"))
							{
								if (func_1231(Global_35, &(iLocal_1223[16]), 1, 0))
								{
									if (func_1203(Global_35, vVar1, 1) >= 20f)
									{
										func_1875("MRY3_FATH_DIST_FAIL", 0);
									}
								}
								if (func_1231(Global_35, &(iLocal_1223[17]), 1, 0))
								{
									if (func_1203(Global_35, vVar4, 1) >= 20f)
									{
										func_1875("MRY3_FATH_DIST_FAIL", 0);
									}
								}
							}
						}
					}
				}
			}
			if (iVar0 >= iLocal_19 && iVar0 <= iLocal_23)
			{
				if (Local_709[1]->f_13 && !bVar495)
				{
					if (!func_1227(134217728))
					{
						if (!func_382(&(Local_709[1]), 0))
						{
							func_1875("MRY3_BKILL_FAIL", 0);
						}
						else if (has_entity_been_damaged_by_entity(&(Local_709[1]), Global_35, 1, 1))
						{
							func_1875("MRY3_BHARM_FAIL", 0);
						}
					}
					else if (is_entity_on_fire(&(Local_709[1])))
					{
						func_1875("MRY3_DEST_FAIL", 0);
					}
				}
			}
			if (iVar0 == iLocal_19)
			{
				if (func_26(&uLocal_1142))
				{
					if (func_864(&uLocal_1142) >= 30f)
					{
						if (!func_1227(8))
						{
							Global_43838 = 0;
						}
						func_1875("MRY3_CONFRONT_FAIL", 0);
					}
				}
				if (Local_709[2]->f_13 && Local_709[3]->f_13)
				{
					if (!is_ped_jacking(Global_35))
					{
						if (!func_382(&(Local_709[2]), 0) || !func_382(&(Local_709[3]), 0))
						{
							if (!func_1227(8))
							{
								Global_43838 = 0;
							}
							func_1875("MRY3_DKILL_FAIL", 0);
						}
						else if (has_entity_been_damaged_by_entity(&(Local_709[2]), Global_35, 1, 1) || has_entity_been_damaged_by_entity(&(Local_709[3]), Global_35, 1, 1))
						{
							if (!func_1227(8))
							{
								Global_43838 = 0;
							}
							func_1875("MRY3_DHARM_FAIL", 0);
						}
					}
				}
				if (func_1231(Global_35, &(iLocal_1223[28]), 1, 0) || func_1231(Global_35, &(iLocal_1223[29]), 1, 0))
				{
					if (!func_1227(8))
					{
						Global_43838 = 0;
					}
					func_1875("MRY3_FATH_DIST_FAIL", 1);
				}
			}
			if (iVar0 == iLocal_20)
			{
				if (is_ped_ragdoll(&(Local_709[2])))
				{
				}
				func_1876(cParam0, iVar1213, "MRY3_OBJ_CHASE", "MRY3_WAG_DIST_FAIL", 100f, 150f, 0, 0, 0, 422991367, 0);
				if (Local_709[2]->f_13 && Local_709[3]->f_13)
				{
					if (!is_ped_jacking(Global_35))
					{
						if (!func_382(&(Local_709[2]), 0) || !func_382(&(Local_709[3]), 0))
						{
							func_1875("MRY3_DKILL_FAIL", 0);
						}
						else if (has_entity_been_damaged_by_entity(&(Local_709[2]), Global_35, 1, 1) || has_entity_been_damaged_by_entity(&(Local_709[3]), Global_35, 1, 1))
						{
							func_1875("MRY3_DHARM_FAIL", 0);
						}
					}
					else
					{
						clear_entity_last_damage_entity(&(Local_709[2]));
						clear_entity_last_damage_entity(&(Local_709[3]));
					}
					if (_is_ped_lassoed(&(Local_709[2])) || _is_ped_lassoed(&(Local_709[3])))
					{
						func_1875("MRY3_DHARM_FAIL", 0);
					}
				}
			}
			if (iVar0 == iLocal_21)
			{
				if (does_entity_exist(iVar1213))
				{
					if (!func_1227(4194304) && !func_1227(16384))
					{
						if (func_1878(&iLocal_1216) || (!is_vehicle_driveable(iVar1213, false, false) && !func_1227(4194304)))
						{
							func_1875("MRY3_WAG_FAIL", 0);
						}
					}
				}
				if (!bVar495)
				{
					if (does_entity_exist(&(Local_709[1])))
					{
						if (func_1876(cParam0, &(Local_709[1]), "MRY3_BDIST_REMIN", "MRY3_BDIST_FAIL", 15f, 50f, 0, 0, 1, 422991367, 0))
						{
							if (!does_blip_exist(Local_709[1]->f_1))
							{
								Local_709[1]->f_1 = _blip_add_for_entity(-89429847, &(Local_709[1]));
								set_blip_name_from_text_file(Local_709[1]->f_1, "MRY3_BLIP_BUYER");
								_blip_set_modifier(Local_709[1]->f_1, -401963276);
								if (!func_378(8))
								{
									func_380(8);
								}
							}
							if (does_blip_exist(iVar1211))
							{
								remove_blip(&iLocal_1214);
								if (!func_378(4))
								{
									func_380(4);
								}
							}
							if (does_blip_exist(iVar1208))
							{
								remove_blip(&iLocal_1211);
								if (!func_378(2))
								{
									func_380(2);
								}
							}
						}
						else
						{
							if (func_378(8))
							{
								if (does_blip_exist(Local_709[1]->f_1))
								{
									remove_blip(&(Local_709[1]->f_1));
									func_1257(8);
								}
							}
							if (func_378(4))
							{
								if (!does_blip_exist(iVar1211))
								{
									iLocal_1214 = func_1263(408396114, iVar1213, 1);
									func_1257(4);
								}
							}
							if (func_378(2))
							{
								if (!does_blip_exist(iVar1208))
								{
									iLocal_1211 = func_1196(408396114, vLocal_504, 14f, 1);
									func_1257(2);
								}
							}
						}
						if (func_855(Global_35, &(Local_709[1]), 1, 1) >= 50f)
						{
							func_1875("MRY3_BDIST_FAIL", 0);
						}
					}
				}
				if (func_1879())
				{
					func_1875("MRY3_SECL_FAIL", 0);
				}
			}
			break;
		case 1:
			if (func_26(&uLocal_1124))
			{
				if (bVar498)
				{
					func_1880(cParam0, sVar522, sVar523, 1, 0);
					iLocal_36 = 2;
				}
				else if (func_864(&uLocal_1124) >= 1.5f)
				{
					func_1880(cParam0, sVar522, sVar523, 1, 0);
					iLocal_36 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_1439()
{
	switch (iLocal_31)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[8])) && _does_anim_scene_exist(&(Local_38[9])))
			{
				if ((does_entity_exist(iVar1214) && does_entity_exist(Global_35)) && does_entity_exist(&(Local_709[1])))
				{
					func_1665(8);
					func_1665(9);
					iLocal_31 = 1;
				}
			}
			break;
		case 1:
			_0xf60165e1d2c5370b(Global_35, &uVar0, &fVar1);
			if (func_1231(Global_35, &(iLocal_1223[30]), 1, 0))
			{
				if (fVar1 <= 1.5f)
				{
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(24), true);
					iLocal_31 = 3;
				}
				else
				{
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(26), true);
					iLocal_31 = 3;
				}
			}
			if (func_1231(Global_35, &(iLocal_1223[31]), 1, 0))
			{
				if (fVar1 <= 1.5f)
				{
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(25), true);
					iLocal_31 = 3;
				}
				else
				{
					_set_anim_scene_playback_list_bool(&(Local_38[8]), func_409(27), true);
					iLocal_31 = 3;
				}
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(Local_38[8])))
			{
				if (!_is_anim_scene_started(&(Local_38[8]), false))
				{
					start_anim_scene(&(Local_38[8]));
				}
			}
			if (_does_anim_scene_exist(&(Local_38[9])))
			{
				if (!_is_anim_scene_started(&(Local_38[9]), false))
				{
					attach_anim_scene_to_entity(&(Local_38[9]), iVar1214, 12);
					start_anim_scene(&(Local_38[9]));
				}
			}
			if (_does_anim_scene_exist(&(Local_38[8])) && _does_anim_scene_exist(&(Local_38[9])))
			{
				if (_is_anim_scene_started(&(Local_38[8]), false) && _is_anim_scene_started(&(Local_38[9]), false))
				{
					iLocal_31 = 4;
				}
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_38[9])))
			{
				if (!_is_anim_scene_started(&(Local_38[9]), false))
				{
					attach_anim_scene_to_entity(&(Local_38[9]), iVar1214, 12);
					set_anim_scene_origin(&(Local_38[9]), get_entity_coords(iVar1214, true, false), get_entity_rotation(iVar1214, 2), 2);
					start_anim_scene(&(Local_38[9]));
				}
				else
				{
					iLocal_31 = 4;
				}
			}
			break;
		case 4:
			set_anim_scene_rate(&(Local_38[9]), 1.15f);
			if (func_1211(&(Local_38[9])))
			{
				if (_does_anim_scene_exist(&(Local_38[9])))
				{
					_delete_anim_scene(&(Local_38[9]));
					iLocal_31 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1440()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_378(32))
		{
			if (is_explosion_in_sphere(-1, get_entity_coords(&(Local_980[iVar0]), true, false), 4f))
			{
				func_380(32);
			}
		}
		if (func_378(32))
		{
			if (!Local_980[iVar0]->f_14)
			{
				start_entity_fire(&(Local_980[iVar0]), 0, -1, 0);
				Local_980[iVar0]->f_14 = 1;
			}
		}
		if (!func_378(64))
		{
			if (is_entity_on_fire(&(Local_980[iVar0])) || is_explosion_in_sphere(-1, get_entity_coords(&(Local_980[iVar0]), true, false), 3f))
			{
				func_1269(iVar1214);
				start_entity_fire(iVar1214, 0, -1, 0);
				func_380(64);
			}
		}
		if (!func_378(128))
		{
			if (is_entity_on_fire(iVar1214))
			{
				start_entity_fire(&(Local_709[1]), 0, -1, 0);
				func_380(128);
			}
		}
		iVar0++;
	}
}

void func_1441(char[4] cParam0)
{
	switch (iLocal_32)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_38[10])) && _does_anim_scene_exist(&(Local_38[10])))
			{
				if (does_entity_exist(iVar1213))
				{
					attach_anim_scene_to_entity(&(Local_38[10]), iVar1213, 12);
					iLocal_32 = 5;
				}
			}
			break;
		case 1:
			break;
		case 5:
			if ((iVar1363 == -1 || iVar1363 == 0) || func_1227(4194304))
			{
				if (((_does_anim_scene_exist(&(Local_38[2])) && _is_anim_scene_started(&(Local_38[2]), false)) && _0x1f0e401031e20146(&(Local_38[2]), "pl_Panic_Loop_Base")) || !_is_anim_scene_started(&(Local_38[2]), false))
				{
					if (_does_anim_scene_exist(&(Local_38[10])))
					{
						if (_is_anim_scene_loaded(&(Local_38[10]), true, false))
						{
							if (!_is_anim_scene_started(&(Local_38[10]), false))
							{
								if (get_entity_speed(iVar1213) >= 6f)
								{
									_set_anim_scene_playback_list_bool(&(Local_38[10]), func_409(32), true);
								}
								iLocal_489 = get_random_int_in_range(0, 10);
								func_1665(10);
								start_anim_scene(&(Local_38[10]));
								if (!func_26(&uLocal_1163))
								{
									func_27(&uLocal_1163, 0);
								}
							}
							else
							{
								func_380(512);
								iLocal_32 = 2;
							}
						}
					}
				}
			}
			break;
		case 2:
			if (_is_anim_scene_started(&(Local_38[10]), false) && _0x8d81e7824b7753f7(&(Local_38[10]), "s_loop_base", 1))
			{
				func_212(&uLocal_1163);
				iLocal_32 = 3;
			}
			break;
		case 3:
			if (!func_1287(iVar1213, vLocal_504, 40f, 1, 1))
			{
				if (func_26(&uLocal_1163))
				{
					if (func_864(&uLocal_1163) >= 6f)
					{
						if (iVar486 == -1)
						{
							iLocal_489 = get_random_int_in_range(0, 9);
						}
						else
						{
							iLocal_489 = func_1702(0, 9, iVar486);
						}
						if (!&Local_38[10]->f_3[iVar486])
						{
							if (iVar486 == 0)
							{
								cLocal_528 = func_409(33);
							}
							else if (iVar486 == 1)
							{
								cLocal_528 = func_409(40);
							}
							else if (iVar486 == 2)
							{
								cLocal_528 = func_409(34);
							}
							else if (iVar486 == 3)
							{
								cLocal_528 = func_409(31);
							}
							else if (iVar486 == 4)
							{
								cLocal_528 = func_409(35);
							}
							else if (iVar486 == 5)
							{
								cLocal_528 = func_409(36);
							}
							else if (iVar486 == 6)
							{
								cLocal_528 = func_409(37);
							}
							else if (iVar486 == 7)
							{
								cLocal_528 = func_409(38);
							}
							else if (iVar486 == 8)
							{
								cLocal_528 = func_409(39);
							}
							if ((_is_anim_scene_started(&(Local_38[10]), false) && !_0x0df57f86fe71dbe5(&(Local_38[10]), sVar525)) && !_0x23e33cb9f4a3f547(&(Local_38[10]), sVar525))
							{
								_0xdf7b5144e25cd3fe(&(Local_38[10]), sVar525);
							}
							Local_38[10]->f_3[iVar486] = 1;
							func_538(&uLocal_1163);
							iLocal_32 = 4;
						}
						iVar0 = 0;
						while (iVar0 < 10)
						{
							if (&Local_38[10]->f_3[iVar0] == 1)
							{
								iVar1++;
							}
							iVar0++;
						}
						if (iVar1 == 10)
						{
							iLocal_32 = 6;
						}
						else
						{
							iVar1 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (_is_anim_scene_started(&(Local_38[10]), false) || func_378(512))
			{
				if (!_0x1f0e401031e20146(&(Local_38[10]), sVar525))
				{
					if (_0x23e33cb9f4a3f547(&(Local_38[10]), sVar525))
					{
						_set_anim_scene_playback_list_bool(&(Local_38[10]), sVar525, true);
					}
				}
				else if (_0x8d81e7824b7753f7(&(Local_38[10]), "s_loop_base", 1))
				{
					if (!func_26(&uLocal_1163))
					{
						func_27(&uLocal_1163, 0);
						iLocal_32 = 3;
					}
				}
			}
			break;
		case 6:
			if (func_1211(&(Local_38[10])))
			{
				if (_does_anim_scene_exist(&(Local_38[10])))
				{
					_delete_anim_scene(&(Local_38[10]));
					iLocal_32 = 7;
				}
			}
			break;
		case 7:
			break;
	}
}

void func_1442(char[4] cParam0)
{
	if (func_378(262144))
	{
		iVar0 = func_1309(&(Local_530[0]));
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
		{
			if (&Local_530[0] == get_ped_index_from_entity_index(iVar0))
			{
				if (func_10(iVar1324))
				{
					if ((((_does_anim_scene_exist(&(Local_38[13])) && _is_anim_scene_started(&(Local_38[13]), false)) && _0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1)) && !_0x54b187f111d9c6f8(Global_35, 1)) && !_0x54b187f111d9c6f8(&(Local_530[0]), 1))
					{
						func_1881(iVar1324, 1, 1);
					}
					else
					{
						func_1881(iVar1324, 0, 1);
					}
					if (func_1289(iVar1324, 1))
					{
						func_1270(13, 65);
						func_1257(262144);
						func_11(&iLocal_1327, 1, 1);
					}
				}
				else
				{
					iLocal_1327 = func_1288("MRY3_CXT_MOVE", -473983589, &(Local_530[0]), 3, 0, 0, 1, 0, 3f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_1881(iVar1324, 0, 1);
					func_1882(iVar1324, 3f, 1);
					_uiprompt_set_group((*Global_1945938)[func_179(iVar1324)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_530[0])), 0);
				}
			}
			else
			{
				func_11(&iLocal_1327, 1, 1);
			}
		}
		else
		{
			func_11(&iLocal_1327, 1, 1);
		}
	}
	switch (iLocal_35)
	{
		case 0:
			iLocal_1318 = get_interior_at_coords(2549.9f, -1296.5f, 48.8f);
			if (!is_valid_interior(iVar1315))
			{
			}
			else
			{
				pin_interior_in_memory(iVar1315);
			}
			if (_does_anim_scene_exist(&(Local_38[13])))
			{
				func_1665(13);
				iLocal_35 = 4;
			}
			break;
		case 4:
			if (func_1422(cParam0, Global_35, "ARTHUR", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "ARTHUR"))
			{
				if (_does_anim_scene_exist(&(Local_38[13])))
				{
					if (!_is_anim_scene_started(&(Local_38[13]), false))
					{
						func_772(Global_35, 2546.104f, -1294.094f, 48.2355f, 175.7322f, 2, 1073741824);
						func_772(&(Local_530[0]), 2545.532f, -1293.922f, 49.2009f, 175.7322f, 2, 1073741824);
						start_anim_scene(&(Local_38[13]));
					}
					else
					{
						iLocal_35 = 1;
					}
				}
			}
			break;
		case 1:
			if (has_anim_event_fired(Global_35, 518331026))
			{
				set_audio_flag("DisableSubtitleDistancePriorityFiltering", true);
				func_1192(cParam0, "MRY3_TH_ENTER", 0);
				_0xf232c2c546ac16d0("MRY3_TH_ENTER");
			}
			if (func_1207("MRY3_TH_ENTER"))
			{
				if (!func_378(16777216))
				{
					func_380(16777216);
				}
			}
			if (func_378(16777216))
			{
				if (!func_1207("MRY3_TH_ENTER"))
				{
					if (!func_378(33554432))
					{
						set_audio_flag("DisableSubtitleDistancePriorityFiltering", false);
						func_380(33554432);
					}
				}
			}
			if (_is_anim_scene_started(&(Local_38[13]), false) && _0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (!func_10(iVar1323))
				{
					iLocal_1326 = func_1883("MRY3_CXT_LEAVE", -719620017, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					iLocal_35 = 5;
				}
			}
			break;
		case 5:
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && _0x1f0e401031e20146(Global_1394141->f_1335, "PL_INTRO"))
			{
				if (_get_anim_scene_progress(Global_1394141->f_1335) >= 0.4270833f)
				{
					if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
					{
						if (func_1192(cParam0, "MRY3_TH_WAIT", 0))
						{
							func_163(&(Global_1394141->f_1326), 16384);
							iLocal_35 = 6;
						}
					}
					else
					{
						iLocal_35 = 6;
					}
				}
			}
			break;
		case 6:
			if (!func_1207("MRY3_TH_WAIT"))
			{
				func_1663(&(Global_1394141->f_1326), 16384);
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 4)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 56);
					func_380(262144);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 7;
				}
				else
				{
					iLocal_35 = 7;
				}
			}
			break;
		case 7:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if ((_is_anim_scene_started(Global_1394141->f_1335, false) && _0x1f0e401031e20146(Global_1394141->f_1335, "PL_P2")) && _get_anim_scene_progress(Global_1394141->f_1335) >= 0.25f)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 54);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 8;
				}
				else
				{
					iLocal_35 = 8;
				}
			}
			break;
		case 8:
			if (has_anim_event_fired(Global_35, 623162028))
			{
				if (func_1192(cParam0, "MRY3_TH_POINT2", 0))
				{
					func_163(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_POINT2"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if ((_is_anim_scene_started(Global_1394141->f_1335, false) && _0x1f0e401031e20146(Global_1394141->f_1335, "PL_P2")) && _get_anim_scene_progress(Global_1394141->f_1335) >= 0.5f)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 50);
					func_163(&(Global_1394141->f_1326), 16384);
					_0xdf7b5144e25cd3fe(&(Local_38[13]), func_409(54));
					iLocal_35 = 9;
				}
				else
				{
					iLocal_35 = 9;
				}
			}
			break;
		case 9:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if ((_is_anim_scene_started(Global_1394141->f_1335, false) && _0x1f0e401031e20146(Global_1394141->f_1335, "PL_P2")) && _get_anim_scene_progress(Global_1394141->f_1335) >= 0.75f)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 51);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 10;
				}
				else
				{
					iLocal_35 = 10;
				}
			}
			break;
		case 10:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 15)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1192(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 11;
				}
				else
				{
					iLocal_35 = 11;
				}
			}
			break;
		case 11:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 1)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 53);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 12;
				}
				else
				{
					iLocal_35 = 12;
				}
			}
			break;
		case 12:
			if (has_anim_event_fired(Global_35, -1419636573))
			{
				if (func_1192(cParam0, "MRY3_TH_FEXCTE1", 0))
				{
					func_163(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_FEXCTE1"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 13)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 52);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 14;
				}
				else
				{
					iLocal_35 = 14;
				}
			}
			break;
		case 14:
			if (has_anim_event_fired(&(Local_530[0]), -1978992321))
			{
				if (func_1192(cParam0, "MRY3_TH_MEXCTE", 0))
				{
					func_163(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_MEXCTE"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 16)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (func_1192(cParam0, "MRY3_TH_FIRE", 0))
					{
						func_163(&(Global_1394141->f_1326), 16384);
						iLocal_35 = 13;
					}
				}
				else
				{
					iLocal_35 = 13;
				}
			}
			break;
		case 13:
			if (!func_1207("MRY3_TH_FIRE"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 18)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 54);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 15;
				}
				else
				{
					iLocal_35 = 15;
				}
			}
			break;
		case 15:
			if (has_anim_event_fired(Global_35, 623162028))
			{
				if (func_1192(cParam0, "MRY3_TH_POINT1", 0))
				{
					func_163(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_POINT1"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 21)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 59);
					func_163(&(Global_1394141->f_1326), 16384);
					_0xdf7b5144e25cd3fe(&(Local_38[13]), func_409(57));
					iLocal_35 = 16;
				}
				else
				{
					_0xdf7b5144e25cd3fe(&(Local_38[13]), func_409(57));
					iLocal_35 = 16;
				}
			}
			break;
		case 16:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 24)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1192(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 17;
				}
				else
				{
					iLocal_35 = 17;
				}
			}
			break;
		case 17:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 14)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (func_1192(cParam0, "MRY3_TH_CANCAN1", 0))
					{
						func_163(&(Global_1394141->f_1326), 16384);
						iLocal_35 = 18;
					}
				}
				else
				{
					iLocal_35 = 18;
				}
			}
			break;
		case 18:
			if (!func_1207("MRY3_TH_CANCAN1"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 15)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					if (func_1192(cParam0, "MRY3_TH_CANCAN2", 0))
					{
						func_163(&(Global_1394141->f_1326), 16384);
						iLocal_35 = 19;
					}
				}
				else
				{
					iLocal_35 = 19;
				}
			}
			break;
		case 19:
			if (!func_1207("MRY3_TH_CANCAN2"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && _get_anim_scene_progress(Global_1394141->f_1335) >= 0.4113616f)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 55);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 20;
				}
				else
				{
					iLocal_35 = 20;
				}
			}
			break;
		case 20:
			if (has_anim_event_fired(&(Local_530[0]), 2033048347))
			{
				if (func_1192(cParam0, "MRY3_TH_MLAUGH", 0))
				{
					func_163(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_MLAUGH"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 19)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 58);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 21;
				}
				else
				{
					iLocal_35 = 21;
				}
			}
			break;
		case 21:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_MLAUGH"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 21)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1270(13, 60);
					func_163(&(Global_1394141->f_1326), 16384);
					_0xdf7b5144e25cd3fe(&(Local_38[13]), func_409(57));
					iLocal_35 = 22;
				}
				else
				{
					_0xdf7b5144e25cd3fe(&(Local_38[13]), func_409(57));
					iLocal_35 = 22;
				}
			}
			break;
		case 22:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_is_anim_scene_started(Global_1394141->f_1335, false) && Global_1394141->f_1332 == 23)
			{
				if ((_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !_0x54b187f111d9c6f8(Global_35, 1)) && !is_entity_playing_anim(Global_35, "script_shows@show_audience@ig_arthur_applause", "idle_08_maryjohnapplause", 1))
				{
					func_1192(cParam0, "MRY3_TH_MCLAP", 0);
					func_1270(13, 57);
					func_163(&(Global_1394141->f_1326), 16384);
					iLocal_35 = 2;
				}
				else
				{
					iLocal_35 = 2;
				}
			}
			break;
		case 23:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1) && !func_1207("MRY3_TH_MLAUGH"))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			if (_does_anim_scene_exist(&(Local_38[13])))
			{
				if (_0x23e33cb9f4a3f547(&(Local_38[13]), func_409(67)))
				{
					if (_is_anim_scene_started(&(Local_38[13]), false))
					{
						_set_anim_scene_playback_list_bool(&(Local_38[13]), func_409(67), true);
						iLocal_35 = 25;
					}
				}
			}
			break;
		case 2:
			if (_0x8d81e7824b7753f7(&(Local_38[13]), "s_Base", 1))
			{
				if (func_386(Global_1394141->f_1326, 16384))
				{
					func_1663(&(Global_1394141->f_1326), 16384);
				}
			}
			break;
		case 24:
			if (_does_anim_scene_exist(&(Local_38[13])))
			{
				if (_0x23e33cb9f4a3f547(&(Local_38[13]), func_409(66)))
				{
					if (_is_anim_scene_started(&(Local_38[13]), false))
					{
						_set_anim_scene_playback_list_bool(&(Local_38[13]), func_409(66), true);
						iLocal_35 = 25;
					}
				}
			}
			break;
		case 25:
			if (has_anim_event_fired(Global_35, -211553998))
			{
				func_1192(cParam0, "MRY3_TH_LEARLY", 0);
			}
			if (has_anim_event_fired(Global_35, 2011219280))
			{
				func_1192(cParam0, "MRY3_TH_LEND", 0);
			}
			if (func_1211(&(Local_38[13])))
			{
				if (_does_anim_scene_exist(&(Local_38[13])))
				{
					_delete_anim_scene(&(Local_38[13]));
					iLocal_35 = 26;
				}
			}
			break;
		case 26:
			break;
	}
}

void func_1443(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_209(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_1884(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1357(cParam0->f_8269[iVar19]);
				}
				else if (func_1885(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_219(cParam0->f_8269[iVar19]);
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
			if (func_209(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1886(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1887(cParam0->f_8269.f_641[iVar19]);
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
			if (func_209(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1886(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_210(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_209(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1888(&(cParam0->f_8269));
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
			if (func_209(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1884(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1889(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_481(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1885(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1889(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_481(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1444(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1667(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1445()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1230(0);
	func_1890();
}

void func_1446(char[4] cParam0, int iParam1, int iParam2)
{
	func_1663(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1447(var uParam0)
{
	if (func_499(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_499(uParam0, 1024);
	if (func_499(uParam0, 128) || bVar0)
	{
		if (func_499(uParam0, 4096))
		{
			if (!func_499(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1891(uParam0, 2048);
				return;
			}
		}
		else if (func_499(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1892(uParam0, 2048);
		}
		if (func_499(uParam0, 512))
		{
			if (func_500(uParam0->f_10))
			{
				if (func_851(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1893(uParam0->f_10))
					{
						func_505(uParam0->f_10, 1);
						func_1894(uParam0->f_10, 0);
					}
				}
				else if ((func_1893(uParam0->f_10) && !bVar0) && !func_499(uParam0, 16384))
				{
					func_505(uParam0->f_10, 0);
					func_1894(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_851(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_851(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_499(uParam0, 512))
	{
		if (func_500(uParam0->f_10))
		{
			if (func_1893(uParam0->f_10))
			{
				func_505(uParam0->f_10, 0);
				func_1894(uParam0->f_10, 1);
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
	return (iParam0 < func_392() && iParam0 >= 0);
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

bool func_1451(char[4] cParam0, int iParam1, int iParam2)
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
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1452(struct<2> Param0, int iParam2)
{
	if (!func_247(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1453(char[4] cParam0)
{
	func_1895(cParam0);
	if (func_271(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_271(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_858(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_1896(cParam0);
	func_1897(cParam0, 67108864);
	func_1897(cParam0, 8192);
	func_860(cParam0, 4);
	func_860(cParam0, 512);
	func_860(cParam0, 65536);
	func_860(cParam0, 1024);
	func_860(cParam0, 262144);
	func_860(cParam0, 16777216);
	func_860(cParam0, 64);
	func_257(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_1898(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_257(cParam0, 4194304);
	func_257(cParam0, 8388608);
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
	func_538(&(cParam0->f_13106));
	func_212(&(cParam0->f_13112));
	func_1899(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_227(1);
	}
	if (func_901(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_901(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_901(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1900(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_221(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_1901(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_1295(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_1902(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1454(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1455(char[4] cParam0)
{
	func_1834(cParam0);
}

void func_1456(char[4] cParam0)
{
	func_1903(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1457(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1458(char[4] cParam0)
{
	return true;
}

void func_1459(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1460(var uParam0, int iParam1)
{
	iVar0 = func_1904(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1461(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_1905(cParam0, uParam1))
	{
		return 0;
	}
	if (func_500(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1447(uParam1);
	func_1906(uParam1);
	if (!bParam2)
	{
		func_1907(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_1908(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_1909(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_1910(cParam0, uParam1);
	func_1911(uParam1);
	return 0;
}

bool func_1462(char[4] cParam0)
{
	return true;
}

int func_1463(int iParam0)
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
						*iParam0 = func_1912(vVar0.z);
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

void func_1464(char[4] cParam0, char[4] cParam1, bool bParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1880(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1465(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_1913(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1404(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1914(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_1838(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1466(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_809((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_1917((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_809((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_1915(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_1916(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_1918((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_809((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_1919((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_809((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_1920((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_809(uParam4->f_1, iParam12))
	{
		func_1915(&(uParam4->f_1), iParam12);
		if (func_1916(&(uParam4->f_1), iParam13))
		{
			func_1921(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_809((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_1915(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_1916(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_1922((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_809((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_1915(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_1916(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_1923((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_809((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_1915(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_1916(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_1924((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_809((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_1925((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_809((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_1926((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_809((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_1915(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_1916(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_1927((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_809((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_1915(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_1916(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_1928((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1467(char[4] cParam0)
{
	iVar0 = func_1929(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1468(bool bParam0, bool bParam1)
{
	if (func_1930(255) == 4)
	{
		return;
	}
	if (func_391(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_282(0);
	}
	else
	{
		if (bParam1)
		{
			func_1931(0, 0, 0, 1);
		}
		func_283(0);
		func_1932(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_1933(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_1934(Global_1109400->f_389, 42);
	func_1935(Global_1109400->f_428, 42);
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
	return _create_var_string(2, func_1936(sParam1));
}

bool func_1473()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_1474(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1475(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1078(iVar9);
	iVar2 = func_1078(iVar10);
	iVar3 = func_1078(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1078(iVar12);
	}
	iVar5 = func_1079(iVar9);
	iVar6 = func_1079(iVar10);
	iVar7 = func_1079(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1079(iVar12);
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
	if (iParam2 != 2)
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

int func_1476(int iParam0)
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

int func_1477(int iParam0)
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

void func_1478(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1479(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1937(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1480(int iParam0)
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

void func_1481()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_390())
	{
		return;
	}
	func_1938(&(Global_40.f_40));
}

void func_1482()
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

bool func_1483()
{
	return !func_391(Global_1310720->f_1);
}

int func_1484()
{
	return Global_40.f_4283.f_1;
}

int func_1485()
{
	return Global_40.f_4283.f_4;
}

void func_1486(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1939())
	{
		fVar0 = func_992(vParam0, Global_40.f_6);
	}
	if (func_1940(33554432))
	{
		if (!func_1941(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_992(vParam0, Global_40.f_2);
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

float func_1487(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1488()
{
	if (!func_190(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1942(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1942(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1942(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1942(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1942(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1942(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1942(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1942(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1942(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1943(10f, to_float(func_1942(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1943(5f, to_float(func_1942(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1943(25f, to_float(func_1944(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1943(1f, to_float(func_1944(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1943(6f, to_float(func_1944(64058978)))));
	fVar0 = (fVar0 + (3f * func_1943(1f, to_float(func_1944(795577402)))));
	iVar1 = func_1945();
	fVar0 = (fVar0 + (0.1111111f * func_1943(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1943(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1943(to_float(20), to_float(func_1947()))));
	if (func_1948(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1948(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1948(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1948(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1948(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1946(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1943(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1943(5f, to_float(func_1944(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1943(5f, to_float(func_1942(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1553(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1949(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1943((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1943(1f, to_float(func_1950(-2116919750)))));
	fVar5 = to_float(func_1951());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1943(5f, to_float(func_1944(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1943(1f, to_float(func_1944(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1943(1f, to_float(func_1944(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1943(1f, to_float(func_1944(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1943(1f, to_float(func_1942(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1943(1f, to_float(func_1942(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_1952(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_182(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_182(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_186(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1953(Global_1898330[iVar61]);
				}
				else
				{
					func_1954(iVar61, 0);
					if (func_187(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_185(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_185((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_185(&Global_1898437), &iVar9);
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

void func_1489(var uParam0, int iParam1, bool bParam2)
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

int func_1490(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1491(int iParam0)
{
	if (!func_970(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1955(iParam0);
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

void func_1492(int iParam0)
{
	if (func_500(iParam0))
	{
		if (does_entity_exist(func_537(iParam0)))
		{
			func_432(iParam0, 67108864, 1);
			func_974(iParam0, 19, 1);
		}
	}
}

float func_1493(int iParam0)
{
	if (!func_970(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1494(int iParam0)
{
	iVar0 = func_537(iParam0);
	iVar1 = func_975(iParam0, 0);
	func_1956(iParam0, iVar0);
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

bool func_1495(int iParam0)
{
	if (!func_970(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1496(int iParam0)
{
	if (!func_970(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1497(int iParam0, int iParam1, bool bParam2)
{
	if (!func_970(iParam0))
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

int func_1498(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_970(iParam0))
	{
		return 0;
	}
	iVar0 = func_982(iParam0);
	if (func_382(iVar0, 0))
	{
		if (func_382(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1495(iParam0)) || func_1496(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1957(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1958(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1959(iParam0);
					_0x7b204f88f6c3d287(func_1960(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1960(iParam0, 0));
					func_1961(iParam0);
				}
			}
			else
			{
				if (func_689(iParam0, 32768, 1))
				{
					iVar2 = func_1960(iParam0, 0);
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
		if (func_382((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_689(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1959(iParam0);
				_0x7b204f88f6c3d287(func_1960(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1960(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1959(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1962(iParam0, 0);
	return 1;
}

int func_1499(int iParam0)
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

char* func_1500(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_238(37, iParam0))
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
	if (func_238(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1501(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_935(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1502(int iParam0)
{
	iParam0 = func_258(iParam0);
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

float func_1503(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1504(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1505(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1506(int iParam0, int iParam1)
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

void func_1507(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1963(bParam1);
	}
}

void func_1508(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1509(int iParam0)
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

bool func_1510(int iParam0)
{
	if (!func_1175(23, &vVar0))
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

bool func_1511(int iParam0, int iParam1, int iParam2)
{
	if (!func_1175(23, &Var0))
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

int func_1512(int iParam0)
{
	return iParam0;
}

int func_1513()
{
	iVar0 = func_1013();
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

int func_1514(int iParam0)
{
	if (!func_444(*iParam0, 0))
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

bool func_1515(int iParam0, var uParam1, bool bParam2)
{
	if (!func_444(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_667(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1048((386 + iVar29), 1);
		if (func_1049(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1050(iParam0, &Var6, iVar5);
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

int func_1516(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_444(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_946(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_937(bParam6), &Var0, 0);
	return uVar4;
}

int func_1517(int iParam0)
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

float func_1518(int iParam0)
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
			return func_1964(iParam0);
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
			return func_1964(iParam0);
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
			return func_1964(iParam0);
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

bool func_1519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_582(18);
		case 2:
			return func_582(20);
		case 1:
			return func_582(19);
		default:
			break;
	}
	return true;
}

int func_1520(int iParam0)
{
	return func_1965(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1521(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_582(31))
	{
		return;
	}
	iVar0 = func_1520(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1520(iParam0);
	if (func_1966(iParam0) && func_1967(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1968(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1969(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_317(func_1970(iParam0), 0);
					}
					func_1971(iParam0, iVar2, iVar3);
					func_1972(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1522(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1523(int iParam0)
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

int func_1524()
{
	return func_1973(Global_40.f_12019);
}

int func_1525()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1032(iVar1);
		if (func_339(iVar2, 1, 0) || func_1531(func_1530(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1526()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1974(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1527()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1536(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1528()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1529(int iParam0)
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

int func_1530(int iParam0)
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

bool func_1531(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1532(int iParam0)
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

int func_1533(int iParam0)
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

int func_1534(int iParam0)
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

char* func_1535(int iParam0)
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

bool func_1536(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1537(int iParam0)
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

char* func_1538(int iParam0)
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

bool func_1539(int iParam0)
{
	if (func_1975(iParam0) && func_339(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1976(iParam0) && func_1977(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1540(int iParam0)
{
	if (!func_444(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_626(iParam0));
}

int func_1541(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1542(bool bParam0)
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

void func_1543(int iParam0)
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

void func_1544(bool bParam0)
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

void func_1545(bool bParam0)
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

void func_1546(bool bParam0)
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

void func_1547(bool bParam0)
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

void func_1548(bool bParam0)
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

void func_1549(bool bParam0)
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

int func_1550(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_655(iParam0, 1)]);
}

void func_1551()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1978();
		_unlock_set_unlocked(-1526891582, true);
		func_587(-916314281);
		func_632(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_587(494733111);
		func_632(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1552(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_937(0);
	*uParam1 = { func_946(iParam0, func_939(0), iParam3, 0) };
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

int func_1553(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1554(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1555(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_580(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1556(int iParam0, int iParam1)
{
	iVar1 = func_655(func_1979(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_584(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1557(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_655(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1091(524288))
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

bool func_1558(int iParam0)
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

int func_1559(int iParam0)
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

int func_1560(int iParam0)
{
	return func_1980(iParam0, -1);
}

bool func_1561(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1562(int iParam0)
{
	iVar0 = func_953(iParam0, 1);
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

void func_1563(int iParam0)
{
	iVar0 = func_953(iParam0, 1);
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

void func_1564()
{
	func_1563(-939420910);
	func_1563(-1187950766);
	func_1563(356365161);
	func_1563(753127042);
	func_1563(-2038424081);
	func_1563(1884271742);
	func_1563(459290420);
}

void func_1565()
{
	func_1563(704802028);
	func_1563(588987611);
	func_1563(2008888900);
	func_1563(1649996811);
	func_1563(227918160);
	func_1563(168171957);
	func_1563(1193080109);
	func_1563(-491981251);
	func_1563(-639037538);
	func_1563(-618620429);
}

bool func_1566(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1567(int iParam0)
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

void func_1568(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1569(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1570()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1571(int iParam0)
{
	func_1336(iParam0, 8, 6);
}

void func_1572(int iParam0)
{
	func_1981(&(Global_1946804->f_2589), iParam0);
}

void func_1573(int iParam0, int iParam1)
{
	func_1982(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1574(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1983(0);
	if (iParam2 != 0 && func_1984(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1135(iParam0, func_1148(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1575(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_1983(0);
	if (func_1091(32768))
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
			iVar5 = func_1148(iVar0, 1);
			if (func_1332(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1332(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1557(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1985(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1091(524288))
					{
						func_1141(524288);
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
							iVar5 = func_1148(iVar0, 1);
							if (func_1332(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1332(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1557(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1573(iVar0, iParam2);
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
					func_1578(524288);
				}
			}
		}
	}
}

void func_1576(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1986(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1987(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1597(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1597(Global_40.f_7729);
				Global_1946804->f_1378 = func_1597(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1988(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1129(0, 1);
	}
}

void func_1577(var uParam0)
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

void func_1578(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1579(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1580(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1633(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1633(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1634(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1141(8);
}

bool func_1581()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1582(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1583()
{
	fVar0 = func_1989(13);
	iVar1 = func_1990(fVar0);
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

float func_1584()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1585()
{
	if (func_330())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1586()
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

float func_1587()
{
	return Global_1955565->f_3;
}

void func_1588(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1991(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1589(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1991(iParam0, 2, 0, 0);
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

float func_1590(float fParam0, float fParam1, float fParam2)
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

bool func_1591()
{
	return func_1989(12) <= -99f;
}

bool func_1592()
{
	return func_1989(12) >= 99f;
}

int func_1593()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_584(iVar1) == -999503751)
		{
			if (func_1992() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1594(int iParam0)
{
	if (!func_1105(iParam0))
	{
		return false;
	}
	if (func_1598(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1595(int iParam0)
{
	if (!func_1105(iParam0))
	{
		return false;
	}
	if (func_1598(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1596(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1105(iParam0))
	{
		return;
	}
	if (!func_1595(iParam0))
	{
		func_1599(iParam0, 2);
		if (bParam2)
		{
			if (!func_189(0, 0, 1))
			{
				func_358(1, 4);
			}
		}
		if ((!func_206() && !bParam1) && !func_189(0, 0, 1))
		{
			func_694(_create_var_string(10, "OUT_JOURN_ADD", func_1993(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1597(int iParam0)
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

bool func_1598(int iParam0, int iParam1)
{
	if (!func_1105(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1599(int iParam0, int iParam1)
{
	if (!func_1105(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1600(int iParam0, bool bParam1)
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

void func_1601(int iParam0, bool bParam1)
{
	iVar0 = func_1994(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_583(50);
			}
			else
			{
				func_583(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_583(51);
			}
			else
			{
				func_583(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1995(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_613();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_613();
			}
			break;
		case 3:
			func_583(24);
			if (bParam1)
			{
				if (!func_1995(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_613();
				}
			}
			break;
	}
}

void func_1602(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1996(0))
			{
				iVar0++;
			}
			if (func_1996(2))
			{
				iVar0++;
			}
			if (func_1996(4))
			{
				iVar0++;
			}
			if (!func_1997(16))
			{
				if (iVar0 == 1)
				{
					func_1998();
					func_317(456, 1);
					func_1999(16);
				}
			}
			if (!func_1997(32))
			{
				if (iVar0 >= 3)
				{
					func_1998();
					func_317(456, 1);
					func_1999(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1996(1))
			{
				iVar0++;
			}
			if (func_1996(3))
			{
				iVar0++;
			}
			if (func_1996(7))
			{
				iVar0++;
			}
			if (!func_1997(1))
			{
				if (iVar0 == 1)
				{
					func_2000();
					func_317(457, 1);
					func_1999(1);
				}
			}
			if (!func_1997(2))
			{
				if (iVar0 >= 3)
				{
					func_2000();
					func_317(457, 1);
					func_1999(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1996(5))
			{
				iVar0++;
			}
			if (func_1996(6))
			{
				iVar0++;
			}
			if (func_1996(8))
			{
				iVar0++;
			}
			if (!func_1997(4))
			{
				if (iVar0 == 1)
				{
					func_2001();
					func_317(455, 1);
					func_1999(4);
				}
			}
			if (!func_1997(8))
			{
				if (iVar0 >= 3)
				{
					func_2001();
					func_317(455, 1);
					func_1999(8);
				}
			}
			break;
	}
}

void func_1603(var uParam0)
{
	func_1111(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1111(uParam0, 617531372);
	}
	else
	{
		func_1111(uParam0, 291123060);
	}
}

void func_1604(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2002(uParam0))
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

bool func_1605(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1606(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_444(iParam0, 0))
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

void func_1607(int iParam0)
{
	func_168(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2003(iParam0, &uVar18);
	func_2004(iParam0, &uVar18, &iVar34, 1);
	if (func_657() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2005(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_653(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_168(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_584(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2005(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2005(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2005(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2005(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2005(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_653(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_655(func_654(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2006(&(Global_1946804->f_1616));
	func_658(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_659(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_659(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_659(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_659(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_659(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_659(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_659(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_659(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_659(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_660(&(iVar0[iVar36]), iVar35))
			{
				func_653(func_2007(iVar35), 1, 1);
				func_2008(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1630(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_661(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1104(iParam0))
	{
		if (!func_2009(8))
		{
			if (func_657() == -2125499975)
			{
				if (bVar17)
				{
					func_658(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2010(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2011(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1104(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_658(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2010(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2011(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1104(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1104(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2012(Global_40.f_7729, 4096);
					func_1599(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2013(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_658(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	{
	}
