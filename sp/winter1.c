void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_82 = 1;
	iLocal_83 = 2;
	iLocal_84 = 3;
	iLocal_85 = 4;
	iLocal_86 = 5;
	iLocal_87 = 6;
	iLocal_88 = 7;
	iLocal_89 = 8;
	iLocal_90 = 9;
	iLocal_91 = 10;
	iLocal_137 = -1;
	iLocal_141 = -1;
	iLocal_142 = -1;
	iLocal_155 = 1;
	iLocal_157 = 1;
	iLocal_159 = 1;
	iLocal_160 = 1;
	iLocal_161 = 1;
	iLocal_162 = 1;
	iLocal_163 = 1;
	iLocal_164 = 1;
	iLocal_165 = 1;
	iLocal_168 = 1;
	iLocal_169 = 1;
	iLocal_172 = 1;
	iLocal_173 = 1;
	iLocal_174 = 1;
	iLocal_175 = 1;
	iLocal_176 = 1;
	iLocal_177 = 1;
	iLocal_178 = 1;
	iLocal_180 = 1;
	iLocal_181 = 1;
	sLocal_867 = "WNT1_sounds";
	sLocal_868 = "BARN_DOOR_MOD_LIGHT";
	sLocal_869 = "BARN_DOOR_MOD";
	sLocal_870 = "winter1_wagon_tracks";
	sLocal_871 = "winter1_wagon_tracks2";
	sLocal_872 = "winter1_CabinAssist_FrontDoor";
	sLocal_873 = "winter1_CabinAssist_SideDoor";
	sLocal_874 = "winter1_ToMicah_Dutch";
	sLocal_875 = "winter1_ToMicah_FirstTurn";
	sLocal_876 = "winter1_ToMicah_Micah";
	sLocal_877 = "winter1_ToMicah_AssistedRoute";
	sLocal_878 = "winter1_ToAdler_HitchLeft";
	sLocal_879 = "winter1_ToAdler_HitchRight";
	sLocal_880 = "winter1_ToAdler_Micah";
	sLocal_881 = "winter1_ToAdler_DutchOff";
	sLocal_882 = "winter1_ToAdler_DutchOffRight";
	sLocal_883 = "winter1_KillMan_PedEscape";
	sLocal_884 = "winter1_ToAdler_ParkUp";
	sLocal_885 = "winter1_ToAdler_LookOver";
	sLocal_886 = "winter1_ToAdler_LookOverLeft";
	sLocal_887 = "winter1_ToAdler_LookOverRight";
	sLocal_888 = "winter1_Interrogation_Run";
	sLocal_889 = "winter1_HitchToCabin";
	sLocal_890 = "winter1_HitchToCabinAlt";
	sLocal_891 = "winter1_ToColter_Dutch";
	sLocal_892 = "winter1_ToHitch_Assist";
	sLocal_893 = "winter1_ToHorse_Middle";
	sLocal_894 = "winter1_ToHorse_Left";
	sLocal_895 = "winter1_ToHorse_Right";
	sLocal_896 = "winter1_ToCabin_RunInside";
	iLocal_911 = 5000;
	iLocal_922 = -1;
	fLocal_928 = 0f;
	fLocal_929 = 9999f;
	iLocal_1257 = 1;
	iLocal_1258 = 1;
	iLocal_1266 = -1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1553, 1073741824);
		func_2(&uLocal_1553, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1553);
	func_5(&uLocal_1553);
	while (!func_6(&uLocal_1553, -2147483648))
	{
		func_7(&uLocal_1553);
		wait(0);
	}
	while (!func_2(&uLocal_1553, 0))
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
	iLocal_80 = func_125(cParam0);
	iLocal_80 = iLocal_80;
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
	func_164(334010167);
	func_165(1, 1);
	_0xec3f7f24eeeb3ba3();
	func_166(cParam0);
	func_167(cParam0);
	func_168();
	func_169(cParam0);
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
	func_175();
	func_176();
	if (!func_177(iVar903, 2097152))
	{
		func_178();
		func_179(&uLocal_906, 2097152);
	}
	func_180();
	if (func_22(cParam0) == 0)
	{
		func_181(50f);
		func_182(1);
	}
	func_183();
	func_184();
	func_185(1);
	func_186(cParam0, 1);
	func_187(cParam0);
	func_188(cParam0);
	func_189(0);
	func_190();
	func_191();
	func_192(cParam0, 0);
	func_193(0);
	func_194(0);
	func_195(0);
	func_196(0);
	func_197();
	func_198();
	func_199();
	func_200(cParam0, 0);
	func_201();
	func_202();
	func_203();
	func_204();
	func_205();
	func_206();
	func_207(cParam0, Global_35, uLocal_1021[0], 0);
	func_208();
	func_209();
	func_210();
	func_211();
	func_212();
	func_213(-319093529, 1, 0);
	func_59(7);
	if (is_srl_loaded())
	{
		end_srl();
	}
	_0x585ce159db46fadb(player_id(), -1f);
	clear_bit(&(Global_1956580->f_1), 1);
	Global_1934765->f_271 = 0;
	set_script_gfx_draw_order(4);
	func_69(1);
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
	iVar0 = func_214(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_215(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_216(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_217(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_218(iParam0) && !func_219(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_220(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_218(iParam0))
	{
		iParam2 = -1;
	}
	if (func_221(iParam0) == 3 || (func_221(iParam0) == 1 && _0x01f4d242765c6b24(func_220(iParam0))))
	{
		func_223(func_222(iParam0), func_220(iParam0), iParam2);
		if ((!func_217(Global_1572864->f_8) && !func_224(0, 1, 0)) && !func_225(&Global_1935630, 32768))
		{
			iVar0 = func_226(iParam0);
			if (iVar0 != -1)
			{
				func_227(0);
			}
			else if (func_222(iParam0) == 8)
			{
				iVar0 = func_228();
				if (iVar0 != -1)
				{
					func_227(0);
				}
			}
		}
	}
	func_229(iParam0, 0);
	if (func_230(0) == iParam0)
	{
		func_40(1);
		func_231(0);
		func_232(1);
	}
	func_233(iParam0, 1);
	func_234(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_235(0);
	func_236(0);
	func_64(0);
	func_65(0);
	func_237(0);
	func_238(1f);
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
		func_239();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_240())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_241())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_220(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_242(0);
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
		func_243(iVar0, iParam0);
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
		if (func_244((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_245((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_245((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_245((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_246(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_247(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_248(&(cParam0->f_13118)) >= 4000)
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
	func_249(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_217(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_82)
	{
		func_251(&Var0, func_250(10, 0));
	}
	else if (iParam0 == iLocal_83)
	{
		func_251(&Var0, func_250(2, 0));
	}
	else if (iParam0 == iLocal_84)
	{
		func_251(&Var0, func_250(3, 0));
	}
	else if (iParam0 == iLocal_85)
	{
		func_251(&Var0, func_250(3, 9));
	}
	else if (iParam0 == iLocal_86)
	{
		func_251(&Var0, func_250(4, 0));
	}
	else if (iParam0 == iLocal_87)
	{
		func_251(&Var0, func_250(5, 0));
	}
	else if (iParam0 == iLocal_88)
	{
		func_251(&Var0, func_250(14, 0));
	}
	else if (iParam0 == iLocal_89)
	{
		func_251(&Var0, func_250(16, 1));
	}
	else if (iParam0 == iLocal_90)
	{
		func_251(&Var0, func_250(15, 4));
	}
	else if (iParam0 == iLocal_91)
	{
		func_251(&Var0, func_250(0, 0));
	}
	else if (iParam0 == 25)
	{
		func_251(&Var0, func_250(1, 0));
	}
	else
	{
		func_251(&Var0, func_250(9, 0));
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_252(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_235(0);
	func_253(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_244((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_254((*uParam0)[iVar0]);
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
			func_255(iVar0, 4096);
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
		func_256(Global_1935630, 4194304);
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
	func_257();
	func_258();
	func_259();
	func_260();
}

void func_43()
{
	if (func_261())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_262(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_263();
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
	func_264(1, iParam0, iParam1);
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
	return (func_265() || func_54());
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
	func_266(uParam0);
	func_267(uParam0, 0);
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
		func_268(iVar0);
		iVar0++;
	}
	func_269();
	func_270();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_271())
	{
		if (func_272(255))
		{
			if (!func_273(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_274(Global_1894899->f_2) && func_275(Global_1894899->f_2))
		{
			func_276(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_277(16);
			}
		}
		else if (func_274(Global_1894899->f_2) && !func_278(Global_1894899->f_2, 2))
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
		func_279(16);
		func_280();
		if (bVar0)
		{
			func_279(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_281(cParam0->f_5423[iVar0]))
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
	if (func_282(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_283(cParam0->f_5421))
		{
			iVar1 = func_284(cParam0->f_5421, iVar0);
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
		if (func_285(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_286(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_287(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_288(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_289(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_290(7);
		}
		else
		{
			func_291(iVar0, 0);
		}
		func_292(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_294(iParam0, 32);
	func_295();
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
	Var0 = { func_296(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_297(iParam0) };
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
		func_237(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_237(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_298(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_244((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_245((*uParam1)[iVar0], 1);
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
	iVar0 = func_222(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_299(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_300(iVar1))
			{
				if (func_301(iVar1, 4))
				{
					func_302(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_303(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_299(iParam0);
		if (iVar3 == 59)
		{
			func_303(1);
		}
		else if (iVar3 == 61)
		{
			func_303(0);
		}
		else if (iVar3 == 83)
		{
			func_303(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_300(iVar0))
		{
			if (func_301(iVar0, 4))
			{
				if (func_301(iVar0, 16))
				{
					func_304(iVar0, 1);
				}
				if (func_301(iVar0, 8))
				{
					func_305(iVar0, 1);
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
		if (func_306(cParam0) == 0 && iVar0 == 0)
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
		func_307(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_308(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_309(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_310(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_274(iParam0))
	{
		return;
	}
	bVar0 = func_278(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_311(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_313(iParam0, func_312());
			func_314(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_315(iParam0, 67108864);
		func_313(iParam0, -15);
	}
	func_316(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_317(11);
	}
	else
	{
		func_318(11);
	}
}

void func_80(int iParam0)
{
	if (func_319(iParam0, 0))
	{
		func_320(262144, 5, 0, 1);
		func_321(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_322(101, 7, 1f, 0, 1);
			func_322(89, 7, 1f, 0, 1);
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
	if (!func_217(iParam0))
	{
		return;
	}
	if (func_323(iParam0) == 4)
	{
		func_324(iParam0, func_312());
		if (!func_221(iParam0) == 5 && !func_221(iParam0) == 6)
		{
			if (bParam3)
			{
				func_229(iParam0, 6);
			}
			else
			{
				func_229(iParam0, 5);
			}
			func_234(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_222(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_325(0, 2);
		if (!bVar1 && bParam1)
		{
			func_326();
		}
	}
	else
	{
		func_231(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_327(iParam0);
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
				if (bParam1 && func_221(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_299(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_299(iParam0)]->f_8), true);
						}
					}
					else if ((func_299(iParam0) != 95 && func_299(iParam0) != 82) && !func_328((*Global_1347702)[func_299(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_299(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_299(iParam0)]->f_8), true);
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
		func_330(func_299(iParam0), iVar6, func_329());
	}
	else if (iVar0 == 8)
	{
		func_332(func_299(iParam0), iVar6, func_329(), func_331());
	}
	if (!func_221(iParam0) == 5 && !func_221(iParam0) == 6)
	{
		iVar9 = func_333(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_334(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_335(func_299(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_336((iVar10 - 20), 0, iVar10);
					iVar11 = func_336((iVar11 - 10), 0, iVar11);
				}
				func_337(1);
				func_338(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_338(45, 0, 1);
				break;
			case 8:
				iVar10 = func_339(func_299(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_336((iVar10 - 20), 0, iVar10);
					iVar11 = func_336((iVar11 - 10), 0, iVar11);
				}
				func_338(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_340(func_299(iParam0)))
				{
					func_341(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_338(120, 0, 1);
				break;
			case 2:
				func_338(120, 0, 1);
				break;
			case 6:
				func_338(func_343(func_342(iParam0)), 0, 1);
				break;
			case 5:
				func_338(120, 0, 1);
				break;
		}
	}
	func_233(iParam0, 1);
	func_324(iParam0, func_312());
	func_234(iParam0);
	if ((!func_221(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_226(iParam0);
		if (iVar12 != -1)
		{
			func_227(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_228();
			if (iVar12 != -1)
			{
				func_227(0);
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
				switch (func_299(iParam0))
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
				if (func_300(func_299(iParam0)) && func_328((*Global_1347702)[func_299(iParam0)]->f_12, 4))
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
				if (func_299(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_299(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_221(iParam0) == 5 && !func_221(iParam0) == 6)
	{
		if (bParam3)
		{
			func_229(iParam0, 6);
		}
		else
		{
			func_229(iParam0, 5);
		}
		func_234(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_299(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_344();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_345(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-1267972061);
						func_345(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(1619534881);
						func_345(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-755457379);
						func_345(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(1015404643);
						func_345(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-1724192342);
						func_345(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(1310680212);
						func_345(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-566881549);
						func_345(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-1753730528);
						func_345(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(147796381);
						func_345(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(-378547623);
						func_345(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(829545206);
						func_345(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_346(891318243);
						func_345(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_347();
						func_348(967523420);
						func_349();
						func_350();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_351(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_345(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_352(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_352(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_353(304805134, 1, 1);
						if (!func_354((*Global_1347702)[21]->f_15, 1))
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
						func_355();
						break;
					case 26:
						func_356();
						break;
					case 17:
						func_357(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_358())
						{
							func_359(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_360(-514575035, -1))
						{
							iVar15 = func_312();
							func_361(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_362(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_358())
						{
							func_359(1529685685);
						}
						break;
					case 34:
						if (func_358())
						{
							func_359(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_363();
						break;
					case 37:
						func_364();
						if (func_365())
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
						func_366();
						break;
					case 43:
						func_367();
						break;
					case 44:
						if (!func_354((*Global_1347702)[82]->f_15, 1))
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
						if (!func_354((*Global_1347702)[83]->f_15, 1))
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
						func_368();
						break;
					case 59:
						func_369();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_370();
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
						func_371();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_352(451, 0);
						}
						if (!func_372(-1992824800))
						{
							if (func_372(1520110311))
							{
								iVar16 = func_312();
								func_361(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_362(1937177603, iVar16, 1);
							}
						}
						if (func_373(4))
						{
							if (!func_374(684296857, 1, 0))
							{
								iVar17 = func_312();
								func_361(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_362(-1439688706, iVar17, 1);
							}
						}
						func_345(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_345(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_375(89200);
						func_375(2300);
						func_375(2300);
						break;
					case 68:
						func_376();
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
						func_377();
						func_375(-139100);
						break;
					case 69:
						if (func_354((*Global_1347702)[9]->f_15, 1))
						{
							func_375(-6000);
						}
						break;
					case 70:
						func_375(23400);
						func_375(1900);
						func_375(-15000);
						break;
					case 71:
						func_375(-5500);
						break;
				}
				break;
			case 8:
				switch (func_299(iParam0))
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
						func_378();
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
						func_379();
						break;
					case 66:
						func_380();
						func_381();
						break;
					case 67:
						if (!func_382(6))
						{
							func_383(6);
						}
						if (!func_382(3))
						{
							func_383(3);
						}
						if (func_358())
						{
							func_359(1534638301);
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
						if (func_354((*Global_1835011)[69]->f_1, 1))
						{
							func_384(0);
							func_375(40500);
						}
						else
						{
							func_384(0);
							func_375(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_299(iParam0))
				{
					case 0:
						switch (func_342(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_385(iParam0);
		func_386();
		switch (iVar0)
		{
			case 1:
				switch (func_299(iParam0))
				{
					case 4:
						func_387(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_387(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_388(iParam0);
						func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_374(-2046502963, 1, 0))
						{
							func_345(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_387(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_388(iParam0) == 0)
						{
							func_387(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_387(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_328((*Global_1347702)[func_299(iParam0)]->f_12, 536870912))
				{
					func_389(11, 1);
				}
				switch (func_299(iParam0))
				{
					case 109:
						func_387(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_389(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_390(0, 10, 11, 2116153146))
				{
					func_387(iParam0, func_388(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_390(0, 7, 11, -379687487))
				{
					func_387(iParam0, func_391(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_390(0, 8, 11, -1386089015))
				{
					func_387(iParam0, func_391(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_390(0, 11, 11, -1952009645))
				{
					func_387(iParam0, func_391(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_390(0, 12, 11, 2065895756))
				{
					func_387(iParam0, func_391(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_221(iParam0) == 0)
			{
				if (func_220(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_220(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_223(func_222(iParam0), func_220(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_299(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_393(func_392(Global_1879514->f_1));
						if (iVar0 == 8 && func_299(iParam0) == 58)
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
						if (func_300(func_299(iParam0)) && func_328((*Global_1347702)[func_299(iParam0)]->f_12, 1))
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
			func_394(bParam2, iVar20);
		}
	}
	func_232(1);
	if ((bVar13 || func_129()) && (func_222(iParam0) == 1 || func_222(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_220(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_223(func_222(iParam0), func_220(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_222(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_390(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_395();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_219(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_218(iParam0))
	{
		if (!func_221(iParam0) == 5 && !func_221(iParam0) == 6)
		{
			if (bParam1)
			{
				func_229(iParam0, 6);
			}
			else
			{
				func_229(iParam0, 5);
			}
			func_234(iParam0);
		}
	}
	switch (func_222(iParam0))
	{
		case 1:
			switch (func_299(iParam0))
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
			switch (func_299(iParam0))
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
	vVar2 = { func_396((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_397(vVar2, uVar1, uVar0, 0);
	func_398(vVar2);
	Global_40.f_9.f_15 = func_399(vVar2, 0);
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
	func_400();
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
	func_401(Var10, 0);
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
	if (!func_217(iParam0))
	{
		return;
	}
	if (iParam0 != func_230(0))
	{
		return;
	}
	if (func_220(iParam0) == 0)
	{
	}
	iVar0 = func_222(iParam0);
	if (func_221(iParam0) == 3)
	{
		if (func_220(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_220(iParam0)))
		{
			if (func_222(iParam0) != 1 && func_222(iParam0) != 8)
			{
				func_223(func_222(iParam0), func_220(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_234(iParam0);
	func_40(1);
	func_231(0);
	func_229(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_337(1);
			func_338(15, 0, 1);
			break;
		case 4:
			func_338(10, 0, 1);
			break;
		case 8:
			func_338(10, 0, 1);
			break;
		case 9:
			func_338(10, 0, 1);
			break;
		case 2:
			func_338(10, 0, 1);
			break;
		case 6:
			func_338(10, 0, 1);
			break;
		case 5:
			func_338(10, 0, 1);
			break;
	}
	func_232(1);
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
	if (func_402(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_403(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_403(&(Global_1347343->f_11), 16384);
	}
	if (func_404() >= 2)
	{
		if (!func_402(Global_1347343->f_11, 16384))
		{
			func_403(&(Global_1347343->f_11), 8);
		}
		func_238(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_256(Global_1935630, 2048);
	func_405(bParam5);
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

void func_100(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*uParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_406(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_225(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_407(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_408(&(uParam0->f_7375));
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
	return func_409() != -1;
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
	func_410(cParam0);
	cParam0->f_634[0] = 63994;
	cParam0->f_634[1] = 63994;
	cParam0->f_637 = 0;
	func_412(cParam0, *uParam1);
	func_413(cParam0);
}

void func_109(char[4] cParam0)
{
	func_414(1, 1);
	func_415(7, 0);
	func_415(1, 0);
	func_416(cParam0, 32);
}

char[] func_110(int iParam0)
{
	if (!func_216(iParam0))
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
			func_417(iVar0, iVar1);
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
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_278(iParam0, 33554432);
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
	return func_177(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_418(&(cParam0->f_7375));
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
	return func_419(iParam0);
}

int func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return 1;
	}
	return func_420(Param0, Param0.f_3);
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
	if (!func_421())
	{
		return false;
	}
	if (!func_354((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_354((*Global_1835011)[2]->f_1, 1) && func_354((*Global_1347702)[120]->f_15, 1)) && !func_354((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_354((*Global_1835011)[37]->f_1, 1) && !func_354((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_354((*Global_1835011)[57]->f_1, 1) && !func_354((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_354((*Global_1835011)[26]->f_1, 1) && !func_354((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_354((*Global_1835011)[62]->f_1, 1) && func_354((*Global_1835011)[63]->f_1, 1)) && !func_354((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_354((*Global_1835011)[75]->f_1, 1) && !func_354((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_354((*Global_1835011)[76]->f_1, 1) && !func_354((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_354((*Global_1835011)[40]->f_1, 1) && func_354((*Global_1835011)[41]->f_1, 1)) && !func_354((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_354((*Global_1835011)[62]->f_1, 1) && func_354((*Global_1835011)[63]->f_1, 1)) && !func_354((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_354((*Global_1835011)[65]->f_1, 1) && func_354((*Global_1835011)[66]->f_1, 1)) && !func_354((*Global_1835011)[67]->f_1, 1))
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
	if (func_422(vParam1))
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
	func_247(&(cParam0->f_603));
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
		return func_423();
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
		func_424(cParam0->f_607);
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
	func_425(&(cParam0->f_638));
	func_426(&(cParam0->f_819));
	func_427(&(cParam0->f_1020));
	func_428(&(cParam0->f_1081));
	func_429(&(cParam0->f_1126));
	func_430(&(cParam0->f_5147));
	func_431(&(cParam0->f_1124));
	func_432(&(cParam0->f_5188));
	func_433(&(cParam0->f_5239));
	func_434(&(cParam0->f_5249));
	func_435(&(cParam0->f_5265));
	func_436(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_437(cParam0, 1445750337, 67108863);
	func_437(cParam0, 383510803, 67108863);
	func_437(cParam0, 495953578, 67108863);
	func_437(cParam0, -380375467, 67108863);
	func_437(cParam0, 446670976, 67108863);
	func_437(cParam0, 50483426, 67108863);
	func_437(cParam0, -1250098797, 67108863);
	func_437(cParam0, -1423504183, 67108863);
	func_437(cParam0, 1705504999, 67108863);
	func_437(cParam0, 1445750337, 67108863);
	func_437(cParam0, 383510803, 67108863);
	func_437(cParam0, 495953578, 67108863);
	func_437(cParam0, -380375467, 67108863);
}

void func_139(char[4] cParam0)
{
	func_438(cParam0, cVar867, 3, 2, -1);
	func_438(cParam0, cVar868, 3, 2, -1);
	func_438(cParam0, cVar869, 67108863, 2, -1);
	func_438(cParam0, cVar870, 67108863, 2, -1);
	func_438(cParam0, cVar871, 2, 2, -1);
	func_438(cParam0, cVar873, 2, 2, -1);
	func_438(cParam0, cVar874, 2, 2, -1);
	func_438(cParam0, cVar872, 2, 2, -1);
	func_438(cParam0, cVar882, 4, 2, -1);
	func_438(cParam0, cVar883, 4, 2, -1);
	func_438(cParam0, cVar884, 4, 2, -1);
	func_438(cParam0, cVar875, 4, 2, -1);
	func_438(cParam0, cVar876, 4, 2, -1);
	func_438(cParam0, cVar877, 4, 2, -1);
	func_438(cParam0, cVar881, 4, 2, -1);
	func_438(cParam0, cVar878, 4, 2, -1);
	func_438(cParam0, cVar879, 4, 2, -1);
	func_438(cParam0, cVar880, 16, 2, -1);
	func_438(cParam0, cVar885, 256, 2, -1);
	func_438(cParam0, cVar889, 512, 2, -1);
	func_438(cParam0, cVar890, 512, 2, -1);
	func_438(cParam0, cVar891, 512, 2, -1);
	func_438(cParam0, cVar892, 512, 2, -1);
	func_438(cParam0, cVar886, 512, 2, -1);
	func_438(cParam0, cVar887, 512, 2, -1);
	func_438(cParam0, cVar888, 1024, 2, -1);
	func_438(cParam0, cVar893, 1536, 2, -1);
	func_437(cParam0, -796992973, 192);
	func_437(cParam0, 495953578, 67108863);
	func_437(cParam0, -312814636, 67108863);
	func_437(cParam0, 409236430, 32);
	func_437(cParam0, 1935100224, 67108863);
	func_437(cParam0, -2078891512, 67108863);
	func_437(cParam0, -10525037, 67108863);
	func_437(cParam0, 1845515537, 67108863);
	func_437(cParam0, -357997396, 67108863);
	func_437(cParam0, -2001507492, 48);
	func_437(cParam0, -1735508742, 48);
	func_437(cParam0, 764478773, 48);
	func_437(cParam0, 382293518, 48);
	func_437(cParam0, 927991752, 384);
	func_437(cParam0, 617552302, 384);
	func_437(cParam0, -447184114, 384);
	func_437(cParam0, 344576726, 960);
	func_437(cParam0, 715826952, 512);
	func_437(cParam0, 1843407141, 1536);
	func_437(cParam0, -162225711, 1536);
	func_437(cParam0, -1450002727, 67108863);
	func_437(cParam0, -548014618, 67108863);
	func_439(cParam0, "mech_animal_interaction@horse@reaction", 512);
	func_439(cParam0, "script_story@wnt1@ig@ig_8_dutchattachsuppliestohorse", 67108863);
	func_440(cParam0, "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@ATTACKER", 384);
	func_440(cParam0, "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@VICTIM", 384);
	func_440(cParam0, "CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@_STREAMED", 128);
	func_439(cParam0, "SCRIPT_STORY@WNT1@IG@IG16_ARTHUR_LOOKAT_DUTCH", 384);
	func_441(cParam0, "script@story@wnt1@leadout@int@leadout", uLocal_182[0], 2, 0, "pl_leadout", 0, 0);
	func_441(cParam0, "script@story@WNT1@leadin@mcs1@leadin", uLocal_182[1], 6, 0, "pl_Arrival_Dutch", 0, 0);
	func_441(cParam0, "script@story@WNT1@leadout@MCS1@leadout", uLocal_182[2], 4, 0, "pl_Arrival_Dutch", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_1_Arrival@ig_1_Arrival_Dutch", uLocal_182[3], 12, 0, "PL_Arrival_Dutch", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_1_Arrival@ig_1_Arrival_Micah", uLocal_182[4], 12, 0, "PL_Arrival_Micah", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_2_Dutch_Instructs_Cover@ig_2_Dutch_Instructs_Cover", uLocal_182[5], 28, 0, "pl_IG2_DUTCH_INSTRUCTS_TO_COVER", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_2_Dutch_Instructs_Cover@ig_2_Micah_Takes_Cover", uLocal_182[6], 28, 0, "pl_IG2_MICAH_TAKES_COVER", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_4_Dutch_Confronts_Odriscolls@ig_4_Dutch_Confronts_Odriscolls", uLocal_182[7], 28, 0, "PL_IG4_Odriscolll_Idles", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_4_Dutch_Confronts_Odriscolls@ig_4_Micah_Cover", uLocal_182[8], 28, 0, "PL_IG3_Idle", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_4_Dutch_Confronts_Odriscolls@ig_4_MrAdler_Idle", uLocal_182[9], 2044, 0, "PL_Idle", 200f, 1);
	func_441(cParam0, "script@story@WNT1@ig@IG_6_DUTCH_PICK_UP_SUPPLIES@IG_6_DUTCH_PICK_UP_SUPPLIES", uLocal_182[10], 56, 0, "pl_IG5_IG6_MicahBringTheHorses_Dutch_Enters", 150f, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_8_Dutch_Attach_Supplies_to_Horse@ig_8_Dutch_Attach_Supp", uLocal_182[12], 480, 0, "pl_IG8_Idle_At_Horse", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_8_Dutch_Attach_Supplies_to_Horse@ig_8_micah_idles_outside", uLocal_182[13], 112, 0, "pl_IG8_Micah_Idle_Outside", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_9_Micah_Ransacks_Cabin@ig_9_Micah_Ransacks_Cabin", uLocal_182[14], 480, 0, "pl_Enter_Cabin_to_Shelf", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_12_barn_surprise@ig_12_barn_surprise", uLocal_182[17], 192, 0, "PL_OpenDoor", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_13_barn_brawl@ig_13_barn_brawl", uLocal_182[18], 384, 0, "pl_enter", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_17_Enemy_window@ig_17_Enemy_window", uLocal_182[22], 16, 0, "pl_enemy_window", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_19_Enemy_hut@ig_19_Enemy_hut", uLocal_182[23], 16, 0, "pl_enemy_hut", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_21_open_barn_gates@ig_21_open_barn_gates", uLocal_182[24], 960, 0, "pl_open_gate", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_22_lead_out_horse@ig_22_lead_out_horse", uLocal_182[25], 512, 0, "pl_lead_out_horse", 0, 1);
	func_441(cParam0, "script@story@WNT1@leadin@mcs2@leadin", uLocal_182[26], 512, 0, "pl_leadin", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_24_Arthur_Overlook_Lantern_Stash@ig_24_Arthur_Overlook_Lantern_Stash", uLocal_182[28], 4, 0, "pl_Arthur_Lantern_Stash", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_24_Arthur_Overlook_Lantern_Stash@ig_24_Micah_Overlook_Lantern_Stash", uLocal_182[29], 4, 0, "pl_Micah_Lantern_Stash", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_24_BurningRanch@ig24_BurningRanch", uLocal_182[27], 1024, 0, 0, 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_30_Dead_Davey@ig_30_Dead_Davey", uLocal_182[30], 2, 0, "pl_IG30_Dead_Davey", 0, 1);
	func_441(cParam0, "script@story@WNT1@ig@ig_31_Ride_Away_From_Cabin@IG_31_Ride_Away_From_Cabin", uLocal_182[31], 1024, 0, "pl_IG31_Ride_Away_From_Cabin", 0, 0);
	func_441(cParam0, "script@story@WNT1@ig@ig_cabin_on_fire@cabin_on_fire", uLocal_182[32], 1024, 0, 0, 0, 1);
	func_441(cParam0, "script@story@wnt1@wnt1_to_wnt2", uLocal_182[34], 526336, 2, "PL_HouseExt", 0, 1);
	func_442(cParam0, 67108863);
	func_443(cParam0, "Winter1", 192);
	cParam0->f_607 = cParam0->f_607;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_179(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 1);
	func_103(cParam0, 524288);
	func_140(cParam0, iLocal_84, 2048);
	cParam0->f_607 = cParam0->f_607;
}

void func_142(char[4] cParam0, int iParam1)
{
	func_444(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_296(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_297(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_445(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_282(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_446() };
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
	func_447(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_448(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_449(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_406(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_216(iParam0))
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
		if (func_450(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_451(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_450(cParam0, func_33(cParam0), 1))
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
	if (func_452(cParam0) < 1)
	{
		func_453(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_454(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_455(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_456(cParam0);
		}
	}
	switch (func_452(cParam0))
	{
		case -1:
		case 0:
			func_457(cParam0, 1);
			break;
		case 1:
			if (func_458(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_457(cParam0, 2);
				}
				else
				{
					func_457(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_459(cParam0))
			{
				func_457(cParam0, 3);
			}
			break;
		case 3:
			if (func_460(cParam0))
			{
				func_457(cParam0, 4);
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
		func_461(cParam0, 0);
		return true;
	}
	if (func_462(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_461(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_462(cParam0);
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
	if ((does_entity_exist(&(uLocal_1064[2])) && !is_entity_dead(&(uLocal_1064[2]))) && is_ped_in_group(&(uLocal_1064[2])))
	{
		remove_ped_from_group(&(uLocal_1064[2]));
	}
	if ((does_entity_exist(&(uLocal_1064[1])) && !is_entity_dead(&(uLocal_1064[1]))) && is_ped_in_group(&(uLocal_1064[1])))
	{
		remove_ped_from_group(&(uLocal_1064[1]));
	}
	if (does_group_exist(iVar1169))
	{
		remove_group(iVar1169);
	}
}

void func_164(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_165(bool bParam0, bool bParam1)
{
	_0x8ba83cc4288cd56d(Global_35, 2025516807);
	_remove_stealth_kill(660507757, true);
	_0x949b2f9ed2917f5d(Global_35, 30);
	_0x949b2f9ed2917f5d(Global_35, 31);
	_0x949b2f9ed2917f5d(Global_35, 18);
	if (_0x0d3b1568917ebda0(Global_35, 10))
	{
		_0x7c10221ce718aa72(Global_35, 10);
	}
	if (bParam0)
	{
		func_463(1);
	}
	if (bParam1)
	{
		func_464(&iLocal_1048);
	}
	func_465(&uLocal_1315);
	func_465(&uLocal_1318);
	func_465(&uLocal_1321);
	func_465(&uLocal_1324);
}

void func_166(char[4] cParam0)
{
	func_466();
	if (does_entity_exist(Global_35))
	{
		if (!is_entity_dead(Global_35))
		{
			clear_ped_tasks(Global_35, 1, 0);
		}
		clear_ragdoll_blocking_flags(Global_35, 58064);
		set_ped_config_flag(Global_35, 249, false);
		set_ped_config_flag(Global_35, 334, false);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_config_flag(Global_35, 218, false);
		set_ped_config_flag(Global_35, 340, false);
		set_ped_config_flag(Global_35, 483, false);
		set_ped_config_flag(Global_35, 26, false);
		set_ped_config_flag(Global_35, 250, false);
		set_ped_config_flag(Global_35, 328, false);
		_0x6569f31a01b4c097(Global_35, 3, 1);
		_0x6569f31a01b4c097(Global_35, 2, 1);
		_0x0751d461f06e41ce(player_id(), 8, 0, 0);
		_0x0751d461f06e41ce(player_id(), 5, 0, 0);
		_0x0751d461f06e41ce(player_id(), 35, 0, 0);
		set_ped_config_flag(Global_35, 300, false);
		set_ped_config_flag(Global_35, 170, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
	}
	_0x160825dadf1b04b3();
	_0xc67a4910425f11f1(player_id(), 0);
	func_467();
	_hide_ped_weapons(Global_35, 2, false);
	task_swap_weapon(Global_35, 0, 1, 0, 0);
	set_player_control(get_player_index(), false, 0, false);
	set_ped_config_flag(player_ped_id(), 258, false);
	_0x816a3acd265e2297(-1706653313, 1);
	_0x949b2f9ed2917f5d(Global_35, 2);
	_0x949b2f9ed2917f5d(Global_35, 1);
	_0x949b2f9ed2917f5d(Global_35, 24);
	set_ped_config_flag(Global_35, 416, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
	set_ped_config_flag(&(uLocal_1064[2]), 34, false);
	set_ped_config_flag(&(uLocal_1064[2]), 32, false);
	func_468(1f);
	if (func_22(cParam0) == 0)
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			switch (iVar0)
			{
				case 0:
				case 6:
				case 11:
					func_469(iVar0, -2147483648);
					func_470(iVar0, Global_40.f_4942[iVar0]->f_3, 1);
					break;
			}
			iVar0++;
		}
		func_286(cParam0, 0, &(uLocal_1064[1]), 0, 0, 1, 0);
		func_286(cParam0, 6, &(uLocal_1064[2]), 0, 0, 1, 0);
		func_286(cParam0, 11, &(uLocal_1064[3]), 0, 1, 0, 0);
	}
	else
	{
		func_286(cParam0, 0, &(uLocal_1064[1]), 0, 1, 1, 0);
		func_286(cParam0, 6, &(uLocal_1064[2]), 0, 1, 1, 0);
		func_286(cParam0, 11, &(uLocal_1064[3]), 0, 1, 1, 0);
	}
	func_471(1);
	func_472();
	bVar1 = func_242(7);
	if (func_22(cParam0) == 0)
	{
	}
	else
	{
		func_131(func_473(8, 0), 50f, 1, 0, 0, 0, 0);
	}
	set_ped_config_flag(&(iLocal_1084[0]), 412, false);
	set_ped_config_flag(&(iLocal_1084[0]), 219, false);
	set_ped_config_flag(&(Local_14.f_3[0]), 419, false);
	set_ped_config_flag(&(Local_14.f_3[0]), 300, false);
	func_291(bVar1, 0);
	if (bVar1 != &Local_14.f_3[0])
	{
		func_474(Local_14.f_3[0]);
	}
	func_474(&iLocal_1105);
	func_474(iLocal_1084[1]);
	func_474(iLocal_1084[2]);
	func_475(&(Local_14.f_11), 0);
	func_475(&(Local_14.f_22), 0);
	func_475(&(Local_14.f_36), 0);
	func_475(&(Local_14.f_40), 0);
	func_475(&(Local_14.f_18), 0);
	func_475(&(Local_14.f_44), 0);
	func_476(1);
	_0x9851de7aec10b4e1(func_473(13, 3), 100f, 1, 0);
}

void func_167(char[4] cParam0)
{
	if (!func_477(-319093529, 1))
	{
		func_334(-319093529, 195285667, -469960592, -1, 1, 1, 0);
	}
	func_286(cParam0, 13, &(uLocal_1064[11]), 0, 0, 1, 0);
	func_286(cParam0, 3, &(uLocal_1064[4]), 0, 0, 1, 0);
	func_286(cParam0, 5, &(uLocal_1064[13]), 0, 0, 1, 0);
	func_286(cParam0, 14, &(uLocal_1064[5]), 0, 0, 1, 0);
	func_286(cParam0, 20, &(uLocal_1064[6]), 0, 0, 1, 0);
	func_286(cParam0, 18, &(uLocal_1064[7]), 0, 0, 1, 0);
	func_286(cParam0, 15, &(uLocal_1064[8]), 0, 0, 1, 0);
	func_286(cParam0, 17, &(uLocal_1064[15]), 0, 0, 1, 0);
	func_286(cParam0, 21, &(uLocal_1064[9]), 0, 0, 1, 0);
	func_286(cParam0, 19, &(uLocal_1064[16]), 0, 0, 1, 0);
	func_286(cParam0, 22, &(uLocal_1064[17]), 0, 0, 1, 0);
	func_286(cParam0, 4, &(uLocal_1064[10]), 0, 0, 1, 0);
	func_286(cParam0, 9, &(uLocal_1064[18]), 0, 0, 1, 0);
}

void func_168()
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

void func_169(char[4] cParam0)
{
	func_464(&iLocal_1048);
	func_464(&iLocal_1292);
	func_478(&iLocal_1049);
	func_479(cParam0, &(iLocal_1084[0]), 1);
	func_479(cParam0, &(uLocal_1064[1]), 1);
	iLocal_903 = 0;
	while (iVar900 < 4)
	{
		func_464(Local_1267[iVar900]);
		iLocal_903 = iVar900 + 1;
	}
	display_radar(true);
}

void func_170()
{
	func_480(1659012492, 0, 0, 0, 1, 0, 0, 0);
	func_480(1970514606, 0, 0, 0, 1, 0, 0, 0);
}

void func_171()
{
	if (does_entity_exist(iVar1017))
	{
		delete_object(&iLocal_1019);
	}
}

void func_172()
{
	if (animpostfx_is_running("Title_GameIntro"))
	{
		animpostfx_stop("Title_GameIntro");
	}
	_0x37d7bdba89f13959("Title_GameIntro");
}

void func_173()
{
	func_481();
	func_482();
}

void func_174()
{
	func_483();
	func_484();
}

void func_175()
{
	if ((func_177(iVar906, 131072) || func_177(iVar907, 8192)) || _is_app_running(-1782489369))
	{
		_close_app_immediate("opening_credits_sequence");
		func_485(&uLocal_908, 131072);
		func_485(&uLocal_909, 8192);
	}
}

void func_176()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (_does_scenario_point_exist(&(Local_695[iVar0])))
		{
			_delete_scenario_point(&(Local_695[iVar0]));
		}
		iVar0++;
	}
}

bool func_177(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_178()
{
	if (func_177(iVar904, 262144))
	{
		stop_stream(_0x0556c784fa056628("cabin_fiddle_music", "wnt1_sounds"));
	}
}

void func_179(int iParam0, int iParam1)
{
	func_486(iParam0, iParam1);
}

void func_180()
{
	_uitutorial_set_rpg_icon_visibility(0, 0);
	_uitutorial_set_rpg_icon_visibility(1, 0);
	_uitutorial_set_rpg_icon_visibility(2, 0);
	_uitutorial_set_rpg_icon_visibility(3, 0);
	_uitutorial_set_rpg_icon_visibility(8, 0);
	_uitutorial_set_rpg_icon_visibility(9, 0);
	_uitutorial_set_rpg_icon_visibility(6, 0);
	_uitutorial_set_rpg_icon_visibility(7, 0);
	_uitutorial_set_rpg_icon_visibility(4, 0);
	_uitutorial_set_rpg_icon_visibility(5, 0);
}

void func_181(float fParam0)
{
	if (func_487(1) < fParam0)
	{
		func_488(1, fParam0, 0);
	}
	if (func_487(2) < fParam0)
	{
		func_488(2, fParam0, 0);
	}
	if (func_487(0) < fParam0)
	{
		func_488(0, fParam0, 0);
	}
}

void func_182(bool bParam0)
{
	if ((_0xd89504d9d7d5057d("WNT1_SHORT") && _0x1ecc76792f661cf5("WNT1_SHORT")) || bParam0)
	{
		if (!bParam0)
		{
			iVar0 = get_current_scripted_conversation_line("WNT1_SHORT");
		}
		if (iVar0 >= 3 || bParam0)
		{
			_0x946d46cd6dfb9742(player_id(), 0, -1112144297);
		}
	}
}

void func_183()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (&iLocal_725[iVar0] != -1)
		{
			if (is_stream_playing(&(iLocal_725[iVar0])))
			{
				stop_stream(&(iLocal_725[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_184()
{
	_0x87e6302fc61208cc("BLOCKED_CONTEXTS_WNT1_INTERROGATION");
}

void func_185(bool bParam0)
{
	iLocal_903 = 0;
	while (iVar900 <= 18)
	{
		if (iVar900 != 0 || (iVar900 == 0 && bParam0))
		{
			if (does_entity_exist(&(uLocal_1021[iVar900])))
			{
				delete_object(uLocal_1021[iVar900]);
			}
		}
		iLocal_903 = iVar900 + 1;
	}
}

void func_186(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		clear_timecycle_modifier();
	}
	else
	{
		_0xbb6c707f20d955d4(10f);
	}
}

void func_187(char[4] cParam0)
{
	display_radar(true);
	display_hud(true);
	if (func_33(cParam0) <= iLocal_86)
	{
		_0x9851de7aec10b4e1(func_473(4, 2), 50f, 1, 1);
	}
	func_489(1, 4);
	func_489(1, 32);
	func_489(1, 1024);
	func_48(2);
	func_200(cParam0, 0);
	remove_all_pickups_of_type(-70127024);
	func_490(func_473(14, 4), 20f, 0);
	func_491(-1187950766, 0, 0);
}

void func_188(char[4] cParam0)
{
}

void func_189(bool bParam0)
{
	if (bParam0)
	{
		iLocal_1108[0] = _create_volume_box_with_custom_name(-554.9597f, 2704.978f, 322.9938f, 0f, 0f, -32.5976f, 9.679893f, 12.17161f, 9.923422f, "[WINTER1_CABIN]");
		iLocal_1108[1] = _create_volume_box_with_custom_name(-554.9597f, 2704.978f, 322.9938f, 0f, 0f, -32.5976f, 12f, 14f, 10f, "[WINTER1_CABIN_BUFFER]");
		iLocal_1108[2] = _create_volume_box_with_custom_name(-558.5956f, 2699.587f, 322.9938f, 0f, 0f, -24.16733f, 32.08059f, 36.49174f, 9.923422f, "[WINTER1_CABIN_LARGE]");
		iLocal_1108[3] = _create_volume_box_with_custom_name(-554.4188f, 2706.927f, 320.3803f, 0f, 0f, -25.64076f, 1.580994f, 1.330685f, 2.265466f, "[WINTER1_CABIN_LADDER]");
		iLocal_1108[4] = _create_volume_box_with_custom_name(-1295.638f, 2423.278f, 306.2776f, 0f, 0f, 20.00045f, 4.392051f, 10.12136f, 6.262923f, "[WINTER1_TUT_SPEEDUP]");
		iLocal_1108[5] = _create_volume_box_with_custom_name(-647.258f, 2672.825f, 337.9567f, 0f, 10.38933f, 0f, 18.47021f, 4.364812f, 8.22781f, "[WINTER1_ADLER_RIDE_HEALTH_TUTORIAL]");
		iLocal_1108[6] = _create_volume_box_with_custom_name(-1069.004f, 2572.519f, 302.9346f, 0f, 0f, -42.26124f, 24.54708f, 37.36747f, 17.19537f, "[WINTER1_ARRIVE_AT_MICAH]");
		iLocal_1108[8] = _create_volume_box_with_custom_name(-591.2069f, 2682.025f, 321.2525f, 0f, 0f, -75.99712f, 16.80432f, 17.03206f, 7.880286f, "[WINTER1_ARRIVE_AT_ADLERS]");
		iLocal_1108[7] = _create_volume_box_with_custom_name(-958.5704f, 2614.627f, 325.0508f, 8.547521f, -8.01026f, 10.47999f, 7.226684f, 17.94324f, 9.41724f, "[WINTER1_ADLERS_RIDE_DIAG])");
		iLocal_1108[20] = _create_volume_box_with_custom_name(-1356.208f, 2443.024f, 308.2863f, 0.00568f, 0.330721f, -110.0143f, 3.707974f, 4.817196f, 4.185115f, "[WINTER1_COLTER_BEDROOM]");
		iLocal_1108[21] = _create_volume_box_with_custom_name(-1345.278f, 2434.837f, 308.2168f, 0f, 0f, -20.30582f, 5.154926f, 4.393737f, 2.473072f, "[WINTER1_COLTER_OUTSIDE_BEDROOM]");
		iLocal_1108[22] = _create_volume_box_with_custom_name(-1341.032f, 2434.38f, 310.0565f, 0f, 0f, -110.1322f, 93.913f, 72.59877f, 18.41223f, "[WINTER1_COLTER_LARGE]");
		iLocal_1108[24] = _create_volume_box_with_custom_name(-1326.674f, 2443.466f, 309.3971f, 0f, 0f, -18.25534f, 6.977715f, 10.98814f, 4.752764f, "[WINTER1_COLTER_CHARLES_BLOCK]");
		iLocal_1108[28] = _create_volume_sphere_with_custom_name(-534.7f, 2672.51f, 318.7f, 0f, 0f, 0f, 1.606571f, 1.38402f, 2f, "[WINTER1_BARN_INTIMIDATE]");
		iLocal_1108[9] = _create_volume_sphere_with_custom_name(func_473(13, 1), 0f, 0f, 0f, 75f, 75f, 75f, "[WINTER1_ADLERS_RANCH]");
		iLocal_1108[10] = _create_volume_box_with_custom_name(-559.7216f, 2696.34f, 321.1412f, 0f, 0f, -27.88246f, 15.52505f, 12.66801f, 6.387638f, "[WINTER1_ADLERS_RANCH_FRONT]");
		iLocal_1108[11] = _create_volume_box_with_custom_name(-560.8679f, 2696.018f, 321.8588f, 0f, 0f, -32.23331f, 9.355397f, 9.587442f, 7.022203f, "[WINTER1_ADLERS_RANCH_FRONT_UNDERCOVER]");
		iLocal_1108[16] = _create_volume_box_with_custom_name(-575.8677f, 2694.086f, 319.8293f, 0f, 0f, -8.053797f, 5.519349f, 1.395403f, 3.497144f, "[WINTER1_ADLERS_STAND_COVER]");
		iLocal_1108[17] = _create_volume_box_with_custom_name(-576.0132f, 2693.144f, 320.8431f, 0f, 0f, -9.1882f, 4.760593f, 4.068905f, 2.474301f, "[WINTER1_ADLERS_STAND_HELP_COVER]");
		iLocal_1108[18] = _create_volume_box_with_custom_name(-555.0058f, 2710.024f, 320.5247f, 0f, 0f, -32.49552f, 3.704636f, 3.915747f, 2.395837f, "[WINTER1_ADLERS_NEAR_MEDICINE_CABINET]");
		iLocal_1108[25] = _create_volume_box_with_custom_name(-558.8527f, 2705.836f, 320.0473f, 0f, 0f, -33.89819f, 1.619074f, 1.458096f, 2.64884f, "[WINTER1_ARMOIRE_NAVBLOCKER]");
		iLocal_1108[27] = _create_volume_box_with_custom_name(-535.4383f, 2670.497f, 319.9479f, 0f, 0f, -178.6266f, 8.503451f, 9.13003f, 7.759971f, "[WINTER1_BARN]");
		iLocal_1108[29] = _create_volume_box_with_custom_name(-535.3734f, 2676.541f, 319.0079f, 0f, 0f, -177.0298f, 4.659612f, 2.718147f, 3.338424f, "[WINTER1_BARN_USECONTEXT]");
		iLocal_1108[30] = _create_volume_box_with_custom_name(-535.0573f, 2669.556f, 318.4426f, 0f, 0f, 0f, 2.052408f, 1.141019f, 3.48814f, "m_volMission[WINTER1_BARN_GATES]");
		iLocal_1108[31] = _create_volume_box_with_custom_name(-620.1383f, 2677.401f, 325.37f, 0f, 0f, 256.1894f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1DSMT]");
		iLocal_1108[33] = _create_volume_box_with_custom_name(-1081.052f, 2556.35f, 304.2704f, 0f, 0f, -41.00225f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1_SEE]");
		iLocal_1108[34] = _create_volume_box_with_custom_name(-1039.347f, 2620.138f, 308.6044f, 0f, 0f, 145.3735f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1FAST]");
		iLocal_1108[35] = _create_volume_box_with_custom_name(-981.3225f, 2683.577f, 321.8516f, 0f, 0f, 257.4584f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1CLEAR]");
		iLocal_1108[36] = _create_volume_box_with_custom_name(-1194.276f, 2458.87f, 308.225f, 0f, 0f, 132.4959f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1_SLOW]");
		iLocal_1108[37] = _create_volume_box_with_custom_name(-1245.747f, 2441.167f, 300.8273f, 0f, 0f, 264.752f, 30f, 10f, 10f, "[WINTER1_PLAYCONV_WNT1SLOW_DOWN]");
		iLocal_1108[13] = _create_volume_box_with_custom_name(-574.8151f, 2696.771f, 320.198f, 0f, 0f, -99.3294f, 4.194844f, 2.862718f, 2.966116f, "[WINTER1_ADLERS_COVER_PLAYER]");
		iLocal_1108[14] = _create_volume_box_with_custom_name(-575.6859f, 2694.037f, 319.8906f, 0f, 0f, -7.671205f, 4.298023f, 1.53976f, 4.169316f, "[WINTER1_ADLERS_COVER_PLAYER_SIDE]");
		iLocal_1108[15] = _create_volume_box_with_custom_name(-593.2286f, 2682.495f, 322.744f, 0f, 9.12711f, 15.13375f, 8.737286f, 10.51935f, 3.951142f, "[WINTER1_ADLERS_LOOK_BEHIND]");
		iLocal_1108[12] = _create_volume_box_with_custom_name(-570.7772f, 2692.005f, 319.7541f, 0f, 0f, -63.41357f, 2.357413f, 2.461389f, 2.396247f, "[WINTER1_ADLERS_COVER_MICAH]");
		iLocal_1108[19] = _create_volume_aggregate_with_custom_name("[WINTER1_COLTER_AGGR]");
		_0x39816f6f94f385ad(&(iLocal_1108[19]), -1341.032f, 2434.38f, 310.0565f, 0f, 0f, -110.1322f, 93.913f, 72.59877f, 18.41223f);
		_0x39816f6f94f385ad(&(iLocal_1108[19]), -1333.202f, 2415.365f, 303.465f, 0f, 0f, -78.7528f, 48.75174f, 65.38622f, 19.00781f);
		iLocal_1108[38] = _create_volume_box_with_custom_name(-558.1995f, 2701.519f, 320.5391f, 0f, 0f, -33.12691f, 1.456809f, 1f, 2.329621f, "[WINTER1_SEARCH_CUPBOARD1]");
		iLocal_1108[39] = _create_volume_box_with_custom_name(-560.1767f, 2702.809f, 320.5391f, 0f, 0f, -33.12691f, 1.456809f, 1f, 2.329621f, "[WINTER1_SEARCH_CUPBOARD2]");
		iLocal_1108[41] = _create_volume_box_with_custom_name(-553.6121f, 2709.351f, 320.5391f, 0f, 0f, 55.60006f, 1.562819f, 1.623911f, 2.329621f, "[WINTER1_SEARCH_WARDROBE]");
		iLocal_1108[40] = _create_volume_box_with_custom_name(-552.2279f, 2708.965f, 323.7251f, 0f, 0f, -36.56516f, 1.237533f, 2.014662f, 2.576317f, "[WINTER1_SEARCH_CHEST]");
		iLocal_1108[42] = _create_volume_box_with_custom_name(-551.1024f, 2706.764f, 320.6801f, 0f, 0f, -31.48751f, 4.58351f, 5.008232f, 2.618926f, "m_volMission[WINTER1_SEARCH_BED]");
		iLocal_1108[43] = _create_volume_box_with_custom_name(-593.9069f, 2687.276f, 322.4913f, 0f, 0f, 0f, 2.977133f, 3.403373f, 4.272329f, "[WINTER1_ADLER_PLAYER_PARK]");
		iLocal_1108[44] = _create_volume_box_with_custom_name(-598.5338f, 2688.461f, 322.9145f, 0f, 0f, 46.53716f, 4.944352f, 2.556757f, 3.91557f, "[WINTER1_ADLER_PLAYER_PARK_LEFT]");
		iLocal_1108[45] = _create_volume_box_with_custom_name(-597.1617f, 2685.743f, 322.9145f, 0f, 0f, 145.7893f, 11.63129f, 10.62712f, 3.91557f, "[WINTER1_ADLER_PLAYER_PARK_GENERAL]");
		iLocal_1108[46] = _create_volume_box_with_custom_name(-562.3547f, 2692.245f, 319.2341f, 0f, 0f, -28.49525f, 3.118035f, 3.355281f, 3.638772f, "[WINTER1_ADLER_IG8_DUTCH_LEFT]");
		iLocal_1108[47] = _create_volume_box_with_custom_name(-560.3932f, 2695.859f, 319.2341f, 0f, 0f, -28.49525f, 3.118035f, 3.355281f, 3.638772f, "[WINTER1_ADLER_IG8_DUTCH_RIGHT]");
		iLocal_1108[48] = _create_volume_box_with_custom_name(-534.853f, 2675.041f, 318.9573f, 0f, 0f, 0f, 3.323134f, 1f, 2.429621f, "[WINTER1_BARN_ENTER]");
		iLocal_1108[49] = _create_volume_box_with_custom_name(-535.5832f, 2672.181f, 318.9312f, 0f, 0f, 0f, 9.034204f, 6.421137f, 2.454309f, "[WINTER1_BARN_FIGHT_AREA]");
		iLocal_1108[50] = _create_volume_box_with_custom_name(-534.5998f, 2667.474f, 318.9078f, 0f, 0f, 0.356848f, 6.490282f, 3.78144f, 3.110758f, "[WINTER1_BARN_HORSE_AREA]");
		iLocal_1108[51] = _create_volume_box_with_custom_name(-1202.321f, 2450.747f, 307.8746f, 0f, 0f, 27.96128f, 5.726928f, 12.60429f, 5.6806f, "[WINTER1_RIDE_WITH_LEADER]");
		iLocal_1108[52] = _create_volume_box_with_custom_name(-701.6697f, 2628.202f, 330.1644f, 0f, 0f, 0f, 3.021715f, 5.71958f, 2.315535f, "[WINTER1_RIDE_BEHIND_FORMATION]");
		iLocal_1108[53] = _create_volume_box_with_custom_name(-551.886f, 2693.02f, 318.9474f, 0f, 0f, -31.47408f, 1.223627f, 3.388972f, 3.315497f, "[WINTER1_POST_BARN_HITCH]");
		iLocal_1108[54] = _create_volume_box_with_custom_name(-556.9471f, 2699.312f, 320.3972f, 0f, 0f, -30.24692f, 3.220966f, 2.868562f, 2.84688f, "[WINTER1_CABIN_DOORWAY]");
		iLocal_1108[55] = _create_volume_box_with_custom_name(-644.228f, 2695.989f, 342.1002f, 0f, 0f, 0f, 14.19161f, 14.20083f, 6.022934f, "[WINTER1_CABIN_HINT]");
		iLocal_1108[56] = _create_volume_box_with_custom_name(-596.0096f, 2687.781f, 322.5154f, 0f, 0f, -18.74846f, 5.928011f, 3.304492f, 3.659473f, "[WINTER1_VOL_ADLER_HITCH_POST]");
		iLocal_1108[57] = _create_volume_box_with_custom_name(-557.778f, 2698.067f, 319.8172f, 0f, 0f, -36.18789f, 3.184618f, 3.394759f, 4.157483f, "[WINTER1_VOL_CABIN_STAIRS]");
		iLocal_1108[58] = _create_volume_cylinder_with_custom_name(-596.0847f, 2686.997f, 322.4503f, 0f, 0f, 0f, 5.232791f, 3.029282f, 3.345909f, "[WINTER1_VOL_ADLER_HITCH_POST_CIRCLE]");
		iLocal_1108[59] = _create_volume_cylinder_with_custom_name(-576.4448f, 2696.717f, 322.4503f, 0f, 0f, 0f, 4.391799f, 4.437051f, 3.345909f, "[WINTER1_VOL_ADLER_COVER_SHED_CIRCLE]");
		iLocal_1108[60] = _create_volume_box_with_custom_name(-581.219f, 2699.394f, 321.0055f, 0f, 5.513368f, 0f, 6.689329f, 1.492542f, 2.896731f, "m_volMission[WINTER1_VOL_ADLER_JUMP_TUT1]");
		iLocal_1108[61] = _create_volume_box_with_custom_name(-1061.623f, 2579.406f, 308.4801f, 0f, 0f, -41.49663f, 12.13466f, 5.119293f, 5.112387f, "[WINTER1_VOL_MCS_LEADIN_TRIGGER]");
	}
	else
	{
		iLocal_903 = 0;
		while (iVar900 < 62)
		{
			if (_does_volume_exist(&(iLocal_1108[iVar900])))
			{
				_delete_volume(&(iLocal_1108[iVar900]));
			}
			iLocal_903 = iVar900 + 1;
		}
	}
}

void func_190()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (_does_volume_exist(&(Local_733[iVar0])))
		{
			_0x74c2b3dc0b294102(&(Local_733[iVar0]));
			_delete_volume(&(Local_733[iVar0]));
		}
		iVar0++;
	}
}

void func_191()
{
	if (func_10(iVar1306))
	{
		func_11(&iLocal_1308, 1, 1);
	}
	if (func_10(iVar1296))
	{
		func_11(&iLocal_1298, 1, 1);
	}
	if (func_10(iVar1297))
	{
		func_11(&iLocal_1299, 1, 1);
	}
	if (func_10(iVar1298))
	{
		func_11(&iLocal_1300, 1, 1);
	}
	if (func_10(iVar1299))
	{
		func_11(&uLocal_1301, 1, 1);
	}
	if (func_10(iVar1300))
	{
		func_11(&iLocal_1302, 1, 1);
	}
	if (func_10(iVar1301))
	{
		func_11(&iLocal_1303, 1, 1);
	}
	if (func_10(iVar1302))
	{
		func_11(&uLocal_1304, 1, 1);
	}
	if (func_10(iVar1303))
	{
		func_11(&uLocal_1305, 1, 1);
	}
	if (func_10(iVar1304))
	{
		func_11(&iLocal_1306, 1, 1);
	}
	if (func_10(iVar1305))
	{
		func_11(&iLocal_1307, 1, 1);
	}
	if (func_10(iVar1307))
	{
		func_11(&iLocal_1309, 1, 1);
	}
	if (func_10(iVar1308))
	{
		func_11(&iLocal_1310, 1, 1);
	}
	if (func_10(iVar1309))
	{
		func_11(&iLocal_1311, 1, 1);
	}
	if (func_10(iVar1311))
	{
		func_11(&iLocal_1313, 1, 1);
	}
	if (func_10(iVar1312))
	{
		func_11(&iLocal_1314, 1, 1);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_10(&(iLocal_387[iVar0])))
		{
			func_11(iLocal_387[iVar0], 1, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_10(&(iLocal_421[iVar0])))
		{
			func_11(iLocal_421[iVar0], 1, 1);
		}
		if (func_10(&(iLocal_427[iVar0])))
		{
			func_11(iLocal_427[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_192(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		_set_weather_type(725623432, true, true, false, 0f, false);
		_0x3373779baf7caf48("WHITEOUT", "WHITEOUT_winter1");
	}
	else
	{
		_0x0e71c80fa4ec8147("WHITEOUT", false);
		func_492(0, 1103626240);
	}
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		if (get_is_waypoint_recording_loaded(sVar870))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar870, 1, 1f, 1f, 1);
		}
	}
	else
	{
		if (get_is_waypoint_recording_loaded(sVar870))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar870, 0, 1f, 0.5f, 1);
		}
		if (get_is_waypoint_recording_loaded(sVar874))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar874, 0, 1f, 0.5f, 1);
		}
		if (get_is_waypoint_recording_loaded(sVar869))
		{
			use_waypoint_recording_as_assisted_movement_route(sVar869, 0, 1f, 0.5f, 1);
		}
	}
}

void func_194(int iParam0)
{
	iLocal_903 = 0;
	while (iVar900 <= 4)
	{
		Local_931[iVar900]->f_2 = iParam0;
		iLocal_903 = iVar900 + 1;
	}
	func_493();
}

bool func_195(bool bParam0)
{
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar1004 == 0)
		{
			if (!func_495(&uLocal_1007, func_473(7, 5), func_494(7, 5), 1, 2, 0, 0, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (iVar1005 == 0)
		{
			if (!func_495(&uLocal_1008, func_473(3, 7), func_494(3, 7), 3, 0, 0, 0, 1, 1.3f))
			{
				iVar0 = 0;
			}
		}
		if (&uLocal_1013[1] == 0)
		{
			if (!func_495(uLocal_1013[1], func_473(7, 9), func_494(7, 9), 3, 0, 0, 0, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (&uLocal_1013[2] == 0)
		{
			if (!func_495(uLocal_1013[2], func_473(7, 10), func_494(7, 10), 3, 2, 0, 0, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (&uLocal_1013[3] == 0)
		{
			if (!func_495(uLocal_1013[3], func_473(7, 13), func_494(7, 13), 3, 0, 0, 0, 1, 0))
			{
				iVar0 = 0;
			}
		}
		_0xeb2ed1dc3aec0654(&(iLocal_1108[13]), 1, 1, 1, 1);
		_0xeb2ed1dc3aec0654(&(iLocal_1108[14]), 1, 1, 1, 1);
		if (iVar1006 == 0)
		{
			if (!func_495(&uLocal_1009, func_473(3, 9), func_494(3, 9), 3, 0, 0, 1, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (iVar1007 == 0)
		{
			if (!func_495(&uLocal_1010, func_473(3, 16), func_494(3, 16), 3, 0, 0, 1, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (iVar1008 == 0)
		{
			if (!func_495(&uLocal_1011, func_473(3, 17), func_494(3, 17), 3, 0, 0, 1, 1, 0))
			{
				iVar0 = 0;
			}
		}
		if (iVar1009 == 0)
		{
			if (!func_495(&uLocal_1012, func_473(3, 18), func_494(3, 18), 3, 2, 0, 1, 1, 0))
			{
				iVar0 = 0;
			}
		}
		return iVar0;
	}
	else
	{
		remove_cover_point(iVar1004);
		remove_cover_point(iVar1005);
		remove_cover_point(&(uLocal_1013[1]));
		remove_cover_point(&(uLocal_1013[2]));
		remove_cover_point(&(uLocal_1013[3]));
		remove_cover_point(iVar1006);
		remove_cover_point(iVar1007);
		remove_cover_point(iVar1008);
		remove_cover_point(iVar1009);
		remove_all_cover_blocking_areas();
		return true;
	}
	return false;
}

void func_196(bool bParam0)
{
	if (bParam0)
	{
		if (_does_volume_exist(&(iLocal_1108[25])))
		{
			_0x19c7567d2f2287d6(&(iLocal_1108[25]), 15);
			_0xe9b168527b337bf0(&(uLocal_1064[1]), &(iLocal_1108[25]));
		}
	}
	else if (_does_volume_exist(&(iLocal_1108[25])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_1108[25]));
	}
}

void func_197()
{
	_0x2412216fcc7b4e3e("script@Story@WNT1@mission_jump_cameras");
	func_485(&uLocal_907, 1024);
}

void func_198()
{
	iLocal_903 = 0;
	while (iVar901 <= 2)
	{
		if (does_entity_exist(&(Local_219[iVar901])))
		{
			if (!Local_219[iVar901]->f_9)
			{
				if (!Local_219[iVar901]->f_8)
				{
					delete_object(Local_219[iVar901]);
				}
				else
				{
					set_object_as_no_longer_needed(Local_219[iVar901]);
				}
			}
		}
		iLocal_903 = iVar901 + 1;
	}
}

void func_199()
{
	if (does_entity_exist(&(Local_14.f_61[0])))
	{
		delete_object(Local_14.f_61[0]);
	}
}

void func_200(char[4] cParam0, int iParam1)
{
	func_496(2051127971, 0, 0);
	door_system_set_open_ratio(2051127971, 0f, iParam1);
	remove_portal_settings_override("RDR_ALD_BARN_DOOR_OPEN");
	if (func_22(cParam0) == 0)
	{
		door_system_set_door_state(2051127971, 1);
	}
	else
	{
		door_system_set_door_state(2051127971, 1);
	}
}

void func_201()
{
	func_496(872775928, 0, 0);
	func_496(-1909593249, 0, 0);
	_0x0c0a373d181bf900(872775928);
	_0x0c0a373d181bf900(-1909593249);
}

void func_202()
{
	if (is_valid_interior(iVar1000))
	{
		unpin_interior(iVar1000);
	}
	if (is_valid_interior(iVar1001))
	{
		unpin_interior(iVar1001);
	}
	if (is_valid_interior(iVar1002))
	{
		unpin_interior(iVar1002);
	}
	if (is_valid_interior(iVar1003))
	{
		unpin_interior(iVar1003);
	}
	if (is_valid_interior(iVar1004))
	{
		unpin_interior(iVar1004);
	}
}

void func_203()
{
	set_player_health_recharge_multiplier(player_id(), 1f);
}

void func_204()
{
	door_system_set_door_state(1535926888, 0);
	door_system_set_door_state(1364348404, 0);
	func_480(1535926888, 0, 0f, 0, 0, 0, 0, 0);
	func_480(1364348404, 0, 0f, 0, 0, 0, 0, 0);
}

int func_205()
{
	remove_model_hide(-558.2371f, 2699.972f, 323.5609f, 5f, 958665900, 1);
	return 1;
}

void func_206()
{
	Global_1911667 = 0;
}

bool func_207(char[4] cParam0, int iParam1, int* iParam2, int iParam3)
{
	if (func_497(iParam1, 0))
	{
		if (func_498(cParam0, iParam1, -164645981))
		{
			*iParam2 = _0xc6a6789bb405d11c(iParam1, 1);
			set_current_ped_weapon(iParam1, -1569615261, true, 0, true, false);
			set_current_ped_weapon(iParam1, -1569615261, true, 1, false, false);
			if (does_entity_exist(iParam3))
			{
				func_499(iParam2);
				func_500(*iParam2, iParam3);
			}
			else
			{
				delete_object(iParam2);
			}
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_208()
{
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		iVar1 = iVar0;
		if (iVar1 != 2 && iVar1 != 1)
		{
			iVar3 = func_501(iVar1);
			if (iVar3 != -1)
			{
				iVar2 = func_502(iVar3, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (does_entity_exist(iVar2))
				{
					_0xba8818212633500a(iVar2, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_209()
{
	if (func_497(Global_35, 0))
	{
		set_ped_config_flag(Global_35, 249, false);
		set_player_can_use_cover(player_id(), true);
		set_ped_config_flag(Global_35, 258, false);
		_0xd1a70c1e8d1031fe(player_id(), 1);
	}
}

void func_210()
{
	if (does_entity_exist(&(uLocal_1064[1])))
	{
		_0xe98d55c5983f2509(&(uLocal_1064[1]));
		set_ped_config_flag(&(uLocal_1064[1]), 297, false);
		set_ped_config_flag(&(uLocal_1064[1]), 130, true);
		set_ped_config_flag(&(uLocal_1064[1]), 315, true);
		set_ped_config_flag(&(uLocal_1064[1]), 317, false);
	}
	func_11(&iLocal_1302, 1, 1);
	func_11(&iLocal_1303, 1, 1);
	if (&iLocal_359[4] != 12)
	{
		iLocal_359[4] = 11;
	}
	_0xc67a4910425f11f1(player_id(), 0);
}

void func_211()
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (Local_640[iVar0]->f_1 == 1 || !is_scenario_type_enabled(&(Local_640[iVar0])))
		{
			set_scenario_type_enabled(&(Local_640[iVar0]), true);
			Local_640[iVar0]->f_1 = 0;
		}
		iVar0++;
	}
}

void func_212()
{
	_0xe6cb36f43a95d75f(0.1f);
}

int func_213(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_503(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0)
{
	return iParam0;
}

void func_215(int iParam0)
{
	if (!func_504(iParam0))
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

bool func_216(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_217(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_218(int iParam0)
{
	iVar0 = func_323(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_219(int iParam0)
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
		iVar0 = func_221(iParam0);
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

int func_220(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_221(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_505(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_222(int iParam0)
{
	if (!func_217(iParam0))
	{
		return 0;
	}
	return func_507(func_506(iParam0));
}

void func_223(int iParam0, int iParam1, int iParam2)
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

bool func_224(int iParam0, bool bParam1, bool bParam2)
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
		if (func_508())
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
		iVar0 = func_299(&(Global_1898164->f_1[0]));
		if (func_300(iVar0) && func_328((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_217(&(Global_1898164->f_1[0])))
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

bool func_225(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_226(int iParam0)
{
	switch (func_222(iParam0))
	{
		case 1:
			iVar0 = func_299(iParam0);
			return func_509(iVar0);
		case 8:
			iVar1 = func_299(iParam0);
			if (func_328((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_510(iVar1);
			}
			break;
	}
	return -1;
}

void func_227(bool bParam0)
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
		func_511(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_512();
		Global_1898077->f_9 = func_513(Global_1894899->f_2);
		func_514(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_228()
{
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_354((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_354((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_354((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_354((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_354((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_354((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_229(int iParam0, int iParam1)
{
	if (!func_217(iParam0))
	{
		return;
	}
	func_515(iParam0, iParam1);
}

int func_230(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_231(bool bParam0)
{
	if (!bParam0 && func_516(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_232(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_233(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_230(0) != iParam0)
	{
		return;
	}
	if (func_517(iParam0))
	{
		if (bParam1)
		{
			func_518(-525676072);
		}
		else
		{
			func_519(-525676072);
		}
	}
}

int func_234(int iParam0)
{
	return func_521(func_520(iParam0));
}

void func_235(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_236(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_237(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_238(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_239()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_240()
{
	return func_522(_0xc17f69e1418cd11f(3));
}

bool func_241()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_242(int iParam0)
{
	iParam0 = func_293(iParam0);
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

int func_243(int iParam0, int iParam1)
{
	if (!func_523(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_524(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_244(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_245(char* sParam0, bool bParam1)
{
	if (func_244(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_525(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_525(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_525(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_525(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_525(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_525(sParam0, 1);
		return true;
	}
	func_525(sParam0, 1);
	return false;
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_247(var uParam0)
{
	func_526(uParam0, 0f);
}

int func_248(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_527(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_528() - round((uParam0->f_1 * 1000f)));
}

void func_249(bool bParam0, bool bParam1)
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
		func_529(0);
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

struct<4> func_250(int iParam0, int iParam1)
{
	return func_530(iParam0, iParam1);
}

void func_251(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_252(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_253(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_222(iParam0) == 1)
	{
		cVar0 = func_110(func_531(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_222(iParam0) == 8)
	{
		cVar0 = func_533(func_532(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_534(1, 1);
	func_535(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_238(1f);
}

void func_254(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_525(sParam0, 2);
}

void func_255(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_257()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_258()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_259()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_260()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_261()
{
	return func_537(get_id_of_this_thread());
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_538(bParam0);
}

void func_263()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_265()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_266(var uParam0)
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

void func_267(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_268(int iParam0)
{
	if (!func_539(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_269()
{
	func_540(64);
}

void func_270()
{
	Global_1310750->f_16072 = 0;
}

bool func_271()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_272(int iParam0)
{
	return func_273(23, iParam0);
}

bool func_273(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_541(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_542())
	{
		return func_541(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_541(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_274(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_275(int iParam0)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_278(iParam0, 8);
}

void func_276(int iParam0, int iParam1)
{
	if (!func_274(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_277(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_278(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_279(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_280()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_278(iVar1, 1))
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
			else if (func_278(iVar1, 2))
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
				func_315(iVar1, 11);
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

bool func_281(var uParam0)
{
	if (func_543(uParam0, 1) || func_543(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_283(struct<2> Param0)
{
	if (!func_282(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_284(struct<2> Param0, int iParam2)
{
	if (!func_282(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_285(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	if (!func_545(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_286(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_544(iParam1))
	{
		return;
	}
	if (!func_285(iParam1))
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
		func_546(cParam0, bParam2);
		func_547(bParam2);
	}
	func_548(iParam1);
	func_549(iParam1, 0);
	func_550(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_287(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_288(bool bParam0)
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

int func_289(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_290(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_551(iParam0);
	if (func_552(iParam0))
	{
		if (func_289(iParam0) != iVar0)
		{
			return;
		}
	}
	func_553(iParam0);
	func_554(iParam0);
	bVar1 = func_242(iParam0);
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
			if (!func_555(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_556(iParam0);
	}
}

void func_291(bool bParam0, bool bParam1)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (!func_557(bParam0))
	{
		return;
	}
	iVar0 = func_288(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_551(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_289(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_552(iVar0))
		{
			return;
		}
	}
	func_558(iVar0);
	set_ped_keep_task(bParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(bParam0))
		{
			set_entity_as_mission_entity(bParam0, true, true);
		}
	}
}

void func_292(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_293(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_294(int iParam0, int iParam1)
{
	iParam0 = func_293(iParam0);
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

void func_295()
{
	if (func_559(0))
	{
		func_560(0);
	}
	if (func_559(1))
	{
		func_560(1);
	}
	if (func_559(5))
	{
		func_560(5);
	}
	if (func_559(6))
	{
		func_553(6);
	}
}

struct<2> func_296(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_297(int iParam0)
{
	Var0 = { func_296(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_298(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_299(int iParam0)
{
	if (!func_217(iParam0))
	{
		return -1;
	}
	return func_561(func_506(iParam0));
}

bool func_300(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_301(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_302(int iParam0, bool bParam1)
{
	iVar0 = func_562(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_563(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_563(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_563(iParam0)))
			{
				_uilog_remove_entry(2, func_563(iParam0));
			}
		}
	}
	func_564(iParam0, 4);
	func_564(iParam0, 8);
	func_564(iParam0, 16);
}

void func_303(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_300(iVar0))
		{
			if (func_301(iVar0, 4))
			{
				func_304(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_304(int iParam0, bool bParam1)
{
	if (!func_301(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_562(iParam0), func_563(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_562(iParam0), func_563(iParam0), 2, "");
		func_565(iParam0, 16);
	}
	else
	{
		if (func_301(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_562(iParam0), func_563(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_562(iParam0), func_563(iParam0), 0, "");
		}
		func_564(iParam0, 16);
	}
}

void func_305(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_301(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_562(iParam0), func_563(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_301(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_562(iParam0), func_563(iParam0), 1, "");
		}
		func_565(iParam0, 8);
	}
	else
	{
		if (func_301(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_562(iParam0), func_563(iParam0), 0, "");
		}
		func_564(iParam0, 8);
	}
}

int func_306(char[4] cParam0)
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

void func_307(int iParam0, int iParam1)
{
	if (func_559(0))
	{
		if (func_566(0))
		{
			func_567(0);
		}
	}
	if (func_559(1))
	{
		if (func_566(1))
		{
			func_567(1);
		}
	}
}

void func_308(char[4] cParam0)
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
		if (func_454(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_309(char[4] cParam0)
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

void func_310(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_568(iParam0, sParam4, iParam5);
	}
	func_569(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_311(int iParam0)
{
	if (!func_274(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_312()
{
	return &Global_1899515;
}

void func_313(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_314(int iParam0, int iParam1)
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

void func_315(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_316(int iParam0)
{
	if (!func_274(iParam0))
	{
		return;
	}
	if (func_570(iParam0))
	{
		func_571(iParam0);
	}
	else
	{
		func_572(iParam0);
	}
}

int func_317(int iParam0)
{
	if (func_573(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)
{
	if (func_574(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_319(int iParam0, int iParam1)
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

void func_320(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_575(Global_1310750[iVar0], iParam0))
		{
			if (!func_576(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_577(iVar0) < func_578(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_322(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_321(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_579();
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

void func_322(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_580(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_323(int iParam0)
{
	if (!func_217(iParam0))
	{
		return -1;
	}
	return func_221(iParam0);
}

void func_324(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_325(bool bParam0, int iParam1)
{
	if (!bParam0 && func_516(373691918))
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
	func_231(bParam0);
	return 1;
}

void func_326()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_544(iVar17))
		{
			iVar18 = func_581(iVar17);
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
	func_465(&(Global_1359489->f_55));
	if (func_477(1777191912, 1))
	{
		func_213(1777191912, 1, 0);
	}
}

void func_327(int iParam0)
{
	if (!func_217(iParam0))
	{
		return;
	}
	func_583(iParam0, (func_582(iParam0) + shift_left(1, 16)));
}

bool func_328(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_329()
{
	return func_584() > 0;
}

void func_330(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_585(-1032423150, iParam1);
			break;
		case 18:
			func_585(294066959, iParam1);
			func_585(-1925639563, iParam1);
			func_585(-378582304, iParam1);
			func_585(-338306437, iParam1);
			break;
		case 20:
			func_585(437270255, iParam1);
			break;
		case 2:
			func_585(-304000413, iParam1);
			func_585(-533612796, iParam1);
			func_585(48036954, iParam1);
			break;
		case 23:
			func_585(193108691, iParam1);
			func_585(491732588, iParam1);
			func_585(671962088, iParam1);
			func_586(1);
			break;
		case 16:
			func_585(-1836056650, iParam1);
			func_585(-754657922, iParam1);
			func_585(-1752355838, iParam1);
			func_585(-1375324510, iParam1);
			break;
		case 59:
			func_585(-514392105, iParam1);
			func_585(-822060246, iParam1);
			if (func_587(146))
			{
				func_585(1372748575, iParam1);
			}
			func_586(1);
			break;
		case 76:
			func_585(1991352213, iParam1);
			if (func_588() == 0)
			{
				func_585(1852488616, iParam1);
			}
			else
			{
				func_585(-9866350, iParam1);
			}
			break;
		case 44:
			func_585(863852599, iParam1);
			func_585(1228374935, iParam1);
			func_585(1517889050, iParam1);
			func_585(830657578, iParam1);
			func_585(1901354958, iParam1);
			break;
		case 46:
			func_585(-582805654, iParam1);
			func_585(250378940, iParam1);
			func_585(-2143265426, iParam1);
			break;
		case 17:
			func_585(-941494139, iParam1);
			func_585(1641489521, iParam1);
			break;
		case 19:
			func_585(-1829423531, iParam1);
			func_585(-1590504752, iParam1);
			func_585(1357221321, iParam1);
			break;
		case 21:
			func_585(-1037992610, iParam1);
			func_585(-1286414399, iParam1);
			func_586(0);
			break;
		case 15:
			func_585(-1014460309, iParam1);
			func_585(-1030502825, iParam1);
			break;
		case 33:
			func_585(479388090, iParam1);
			func_585(-1396342239, iParam1);
			func_585(-619618632, iParam1);
			break;
		case 34:
			func_585(1193561641, iParam1);
			break;
		case 64:
			func_585(1363960851, iParam1);
			break;
		case 60:
			func_585(-1232453926, iParam1);
			func_585(-882833584, iParam1);
			break;
		case 73:
			func_585(2023205767, iParam1);
			break;
		case 74:
			func_585(-2135286513, iParam1);
			if (func_588() == 0)
			{
				func_585(33799444, iParam1);
			}
			else
			{
				func_585(-161343203, iParam1);
			}
			break;
		case 8:
			func_585(841639693, iParam1);
			func_585(358952323, iParam1);
			break;
		case 36:
			func_585(852538149, iParam1);
			func_585(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_585(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_585(1116039310, iParam1);
			}
			break;
		case 27:
			func_585(107633428, iParam1);
			func_585(335902282, iParam1);
			func_585(575673055, iParam1);
			func_585(-425944207, iParam1);
			break;
		case 28:
			func_585(-1941530250, iParam1);
			func_585(1399269304, iParam1);
			func_585(1839684664, iParam1);
			func_585(923168503, iParam1);
			func_585(-1485078322, iParam1);
			break;
		case 29:
			func_585(574995900, iParam1);
			func_585(-1691275407, iParam1);
			func_585(-1725307861, iParam1);
			break;
		case 31:
			func_585(-2108383238, iParam1);
			func_585(-1321828931, iParam1);
			func_585(-1632118592, iParam1);
			func_585(334938948, iParam1);
			break;
		case 4:
			func_585(115823701, iParam1);
			func_585(-1896939736, iParam1);
			func_585(-1830746356, iParam1);
			func_585(-1235169781, iParam1);
			func_586(0);
			break;
		case 6:
			func_585(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_585(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_585(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_585(-384176140, iParam1);
			}
			break;
		case 25:
			func_585(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_585(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_585(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_585(-1374849484, iParam1);
			}
			break;
		case 48:
			func_585(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_585(217772674, iParam1);
			}
			else
			{
				func_585(2071798160, iParam1);
			}
			if (func_589(51))
			{
				func_585(-792802286, iParam1);
			}
			break;
		case 49:
			func_585(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_585(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_585(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_585(1402120602, iParam1);
			}
			break;
		case 58:
			func_585(-1661934591, iParam1);
			break;
		case 50:
			func_585(-1713759426, iParam1);
			break;
		case 52:
			func_585(-314799932, iParam1);
			func_585(-462260432, iParam1);
			func_585(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_585(345256028, iParam1);
				func_585(-1635084094, iParam1);
			}
			else
			{
				func_585(114267347, iParam1);
			}
			break;
		case 32:
			func_585(615304157, iParam1);
			break;
		case 47:
			func_585(415434835, iParam1);
			break;
		case 69:
			func_585(1373465877, iParam1);
			if (func_354((*Global_1347702)[9]->f_15, 1))
			{
				func_585(-2058273527, iParam1);
			}
			break;
		case 70:
			func_585(451334985, iParam1);
			if (func_588() == 0)
			{
				func_585(-224150200, iParam1);
			}
			else
			{
				func_585(289012628, iParam1);
			}
			break;
		case 71:
			if (func_588() == 0)
			{
				func_585(-41692120, iParam1);
			}
			else
			{
				func_585(1537840678, iParam1);
			}
			break;
		case 37:
			func_585(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_585(1842132550, iParam1);
			}
			else
			{
				func_585(-785735240, iParam1);
			}
			func_585(-1605690566, iParam1);
			break;
		case 13:
			func_585(-731367459, iParam1);
			func_585(224176585, iParam1);
			func_585(-14545580, iParam1);
			break;
		case 53:
			func_585(1095274522, iParam1);
			break;
		case 54:
			func_585(-572027988, iParam1);
			break;
		case 56:
			func_585(1339307101, iParam1);
			func_585(2102267732, iParam1);
			break;
		case 57:
			func_585(710102686, iParam1);
			break;
		case 22:
			func_585(-1754368482, iParam1);
			func_585(-2071408557, iParam1);
			break;
		case 12:
			func_585(-181334543, iParam1);
			break;
		case 0:
			func_585(-2134669864, iParam1);
			func_585(-548289709, iParam1);
			func_585(-911271922, iParam1);
			func_585(-604455775, iParam1);
			break;
		case 1:
			func_586(1);
			break;
		case 3:
			if (func_365())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_585(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_585(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_331()
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

void func_332(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_585(-145926707, iParam1);
			func_585(-604922090, iParam1);
			func_585(-848690769, iParam1);
			break;
		case 1:
			func_585(-1477631591, iParam1);
			break;
		case 2:
			func_585(76112544, iParam1);
			break;
		case 9:
			func_585(1396404308, iParam1);
			func_585(-1357381228, iParam1);
			if (func_354((*Global_1835011)[69]->f_1, 1))
			{
				func_585(1902679064, iParam1);
			}
			else
			{
				func_585(-2146422425, iParam1);
			}
			break;
		case 22:
			func_585(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_585(-1934184559, iParam1);
				func_585(1281755988, iParam1);
			}
			else
			{
				func_585(-1745220872, iParam1);
				func_585(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_585(-1641504538, iParam1);
				func_585(-988014485, iParam1);
			}
			else if (func_587(26))
			{
				func_585(-343043950, iParam1);
				func_585(-640062214, iParam1);
			}
			else
			{
				func_585(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_585(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_585(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_585(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_585(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_585(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_585(1301690984, iParam1);
				}
			}
			else
			{
				func_585(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_585(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_585(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_585(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_585(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_585(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_585(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_585(-754570528, iParam1);
			}
			else
			{
				func_585(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_585(-2072125821, iParam1);
			}
			else
			{
				func_585(270040030, iParam1);
			}
			break;
		case 37:
			func_585(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_585(-505314737, iParam1);
				func_585(-1853052860, iParam1);
			}
			else
			{
				func_585(-1975624994, iParam1);
				func_585(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_585(1690231002, iParam1);
			}
			else
			{
				func_585(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_585(1225386280, iParam1);
			}
			else if (func_587(54))
			{
				func_585(-283235773, iParam1);
			}
			else
			{
				func_585(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_585(1355398007, iParam1);
			}
			else
			{
				func_585(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_585(574636806, iParam1);
			}
			else
			{
				func_585(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_585(821118338, iParam1);
			}
			else if (func_587(39))
			{
				func_585(846829260, iParam1);
			}
			else
			{
				func_585(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_388((*Global_1835011)[33]->f_1) == 1)
				{
					func_585(1422779093, iParam1);
				}
				else
				{
					func_585(-1769536986, iParam1);
				}
			}
			else
			{
				func_585(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_585(352134789, iParam1);
			}
			else if (func_587(43))
			{
				func_585(260723113, iParam1);
			}
			else
			{
				func_585(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_585(-457958799, iParam1);
			}
			else
			{
				func_585(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_587(41))
			{
				func_585(-546824600, iParam1);
			}
			else
			{
				func_585(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_585(1297261593, iParam1);
			}
			else
			{
				func_585(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_585(2068484886, iParam1);
			}
			else if (func_587(49))
			{
				func_585(-1489080639, iParam1);
				func_585(-2102244050, iParam1);
			}
			else
			{
				func_585(-1863040467, iParam1);
			}
			break;
		case 51:
			func_585(-2055943209, iParam1);
			break;
		case 58:
			if (func_354((*Global_1347702)[23]->f_15, 1))
			{
				func_585(1650066845, iParam1);
			}
			else
			{
				func_585(151370023, iParam1);
			}
			func_585(1426057961, iParam1);
			func_585(476379584, iParam1);
			break;
		case 59:
			func_585(-1638117866, iParam1);
			break;
		case 62:
			func_585(199541730, iParam1);
			break;
		case 63:
			func_585(1703485804, iParam1);
			func_585(-800449045, iParam1);
			break;
		case 65:
			func_585(-1678210868, iParam1);
			func_585(-1448238026, iParam1);
			func_585(-1200864845, iParam1);
			func_585(1473511536, iParam1);
			break;
		case 66:
			func_585(-1774490051, iParam1);
			func_585(-34645921, iParam1);
			func_585(174027075, iParam1);
			func_585(-1155999, iParam1);
			func_586(1);
			break;
		case 67:
			func_585(701612593, iParam1);
			func_585(-1069631343, iParam1);
			func_585(1673428882, iParam1);
			break;
		case 68:
			func_585(-739133286, iParam1);
			func_585(-2130089358, iParam1);
			func_585(2056190391, iParam1);
			func_585(1941753817, iParam1);
			func_586(0);
			break;
		case 70:
			func_585(-1217555753, iParam1);
			break;
		case 71:
			func_585(697048821, iParam1);
			break;
		case 73:
			func_585(-553148661, iParam1);
			break;
		case 75:
			func_585(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_585(1414263863, iParam1);
			}
			else
			{
				func_585(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_585(1835465936, iParam1);
				func_585(523715611, iParam1);
			}
			else if (func_587(78))
			{
				func_585(1420338873, iParam1);
			}
			else
			{
				func_585(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_585(10180941, iParam1);
			}
			else if (func_587(79))
			{
				func_585(768420635, iParam1);
			}
			else
			{
				func_585(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_585(-383601523, iParam1);
			}
			else
			{
				func_585(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_585(1606472408, iParam1);
			}
			else
			{
				func_585(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_585(-203571927, iParam1);
			}
			else
			{
				func_585(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_585(729886222, iParam1);
			}
			else
			{
				func_585(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_585(-714816362, iParam1);
			}
			else
			{
				func_585(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_585(-932932179, iParam1);
				func_585(-1458537240, iParam1);
			}
			else
			{
				func_585(-1764383885, iParam1);
				func_585(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_585(1741466706, iParam1);
			}
			else
			{
				func_585(1405815775, iParam1);
			}
			break;
		case 94:
			func_585(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_585(1905280979, iParam1);
			}
			else
			{
				func_585(-1966245299, iParam1);
			}
			func_585(721468880, iParam1);
			break;
		case 99:
			func_585(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_585(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_585(-1117781095, iParam1);
				}
				else
				{
					func_585(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_585(141494548, iParam1);
			}
			else
			{
				func_585(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_585(-369525697, iParam1);
			}
			else if (func_587(101))
			{
				func_585(1595015219, iParam1);
			}
			else
			{
				func_585(-321486961, iParam1);
			}
			break;
		case 103:
			func_585(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_585(793460477, iParam1);
				func_585(-1610242176, iParam1);
			}
			else if (func_587(103))
			{
				func_585(1830897187, iParam1);
			}
			else
			{
				func_585(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_585(1528309077, iParam1);
			}
			else if (func_587(104))
			{
				func_585(1864966105, iParam1);
			}
			else
			{
				func_585(-103336013, iParam1);
			}
			break;
		case 108:
			func_585(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_585(-1123227713, iParam1);
				func_585(-889574341, iParam1);
			}
			else
			{
				func_585(2065385917, iParam1);
				func_585(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_585(-887421691, iParam1);
			}
			else if (func_587(109))
			{
				func_585(-1318117949, iParam1);
			}
			else
			{
				func_585(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_585(284822762, iParam1);
				}
				else
				{
					func_585(-1425017554, iParam1);
				}
			}
			else if (func_587(110))
			{
				if (&Global_1357515 == 0)
				{
					func_585(553087292, iParam1);
				}
				else
				{
					func_585(-1766870331, iParam1);
					func_585(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_585(-1980598735, iParam1);
			}
			else
			{
				func_585(-442732098, iParam1);
				func_585(1955756409, iParam1);
			}
			break;
		case 115:
			func_585(394303528, iParam1);
			func_585(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_585(1182403394, iParam1);
			}
			else
			{
				func_585(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_585(924445424, iParam1);
			}
			else
			{
				func_585(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_585(430755273, iParam1);
				func_585(-1473879802, iParam1);
			}
			else
			{
				func_585(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_585(73885747, iParam1);
			}
			else if (func_587(117))
			{
				func_585(1559707913, iParam1);
			}
			else
			{
				func_585(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_585(-2103887972, iParam1);
			}
			else if (func_587(118))
			{
				func_585(-435828462, iParam1);
			}
			else
			{
				func_585(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_585(2054486196, iParam1);
			}
			else
			{
				func_585(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_585(-570086056, iParam1);
			}
			else if (func_587(121))
			{
				func_585(32337856, iParam1);
			}
			else
			{
				func_585(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_585(813493663, iParam1);
			}
			else if (func_587(122))
			{
				func_585(-2132763590, iParam1);
			}
			else
			{
				func_585(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_585(-66240572, iParam1);
				func_585(1563075046, iParam1);
			}
			else
			{
				func_585(-787011772, iParam1);
				func_585(-1523377438, iParam1);
			}
			break;
		case 127:
			func_585(61020800, iParam1);
			break;
		case 129:
			func_585(428985222, iParam1);
			break;
		case 131:
			func_585(-1393851036, iParam1);
			break;
		case 133:
			func_585(1559531342, iParam1);
			break;
		case 134:
			func_585(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_585(-1374407408, iParam1);
				}
				else
				{
					func_585(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_585(-472672138, iParam1);
				}
				else
				{
					func_585(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_585(-1678710489, iParam1);
			}
			else
			{
				func_585(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_585(1717582460, iParam1);
			}
			else
			{
				func_585(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_585(1568112362, iParam1);
				func_585(1388317526, iParam1);
			}
			else if (func_587(136))
			{
				func_585(-1597534828, iParam1);
				func_585(-1207918353, iParam1);
			}
			else
			{
				func_585(-1940891082, iParam1);
				func_585(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_585(448334530, iParam1);
				func_585(2145375502, iParam1);
			}
			else
			{
				func_585(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_585(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_585(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_585(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_585(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_585(-66616327, iParam1);
			}
			else
			{
				func_585(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_585(1862916706, iParam1);
			}
			else if (func_587(147))
			{
				func_585(675105199, iParam1);
			}
			else
			{
				func_585(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_585(174409701, iParam1);
			}
			else if (func_587(148))
			{
				func_585(-1730895475, iParam1);
			}
			else
			{
				func_585(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_585(1295237052, iParam1);
			}
			else if (func_587(149))
			{
				func_585(-788577684, iParam1);
			}
			else
			{
				func_585(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_333(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_222(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_531(iParam0);
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
					*iParam1 = -2060316038;
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
					if (func_388((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_299(iParam0);
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
					*iParam1 = -2060316038;
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
			iVar3 = func_299(iParam0);
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

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_590(iParam0);
	iVar3 = func_591(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_312();
				func_361(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_592(iParam0, 1);
			if (func_593(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_503(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_594(1, iParam0);
				}
				else
				{
					func_595(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_335(int iParam0, int iParam1)
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

int func_336(int iParam0, int iParam1, int iParam2)
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

void func_337(bool bParam0)
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

void func_338(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_596(iParam0, iParam1, bParam2);
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

int func_339(int iParam0, int iParam1)
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

bool func_340(int iParam0)
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

void func_341(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_597(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_598(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_599(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_600(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_599(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_342(int iParam0)
{
	if (!func_217(iParam0))
	{
		return -1;
	}
	return func_601(func_506(iParam0));
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_602(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_345(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (!func_604(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_605(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_606(iParam0, bParam2);
	iVar2 = 0;
	if (func_607(iParam0, 0, 0) == 0)
	{
		if (func_608(iParam0))
		{
			iVar5 = func_609(iParam0);
			iVar6 = func_610(iVar5);
			iVar7 = func_611(iVar6) + 1;
			func_612(iVar5);
			if (func_613(38))
			{
				func_352(483, 0);
			}
			else
			{
				func_352(482, 0);
			}
			if (iVar7 == func_614(iVar6))
			{
				func_345(func_615(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_421() && func_616(4))
				{
					if (func_421() && (func_617(38) || func_613(38)))
					{
						func_619(38, func_615(iVar6), 0, 0, func_618(), 0, -1, 0);
						func_620(2);
					}
					else
					{
						func_619(38, func_615(iVar6), 0, 0, func_618(), 0, -1, 0);
						func_620(1);
					}
				}
			}
			else if (func_421() && func_616(4))
			{
				if (func_421() && (func_617(38) || func_613(38)))
				{
					func_619(38, 0, 0, 0, func_618(), 0, -1, 0);
					func_620(2);
				}
				else
				{
					func_619(38, 0, 0, 0, func_618(), 0, -1, 0);
					func_620(1);
				}
			}
			if (func_421() && func_616(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_421() && (func_617(38) || func_613(38)))
					{
						func_621(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_621(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_622(iParam0) == -1037537535)
	{
		if ((!func_623(iParam0, 866047851) && !func_623(iParam0, -1979000645)) && !func_623(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_624(iParam0, 8388608) && !func_625(28))
	{
		func_626(28);
	}
	if (!bVar3)
	{
		if (func_623(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_627(iParam0) == -1447088266)
			{
				iVar1 = func_629(func_628(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_630(iVar1);
					}
					if (func_631(0) && func_632(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_633(iParam0, iVar0, iParam5);
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
						func_630(iParam0);
					}
					if (func_631(0) && func_632(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_633(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_622(iParam0) == -427144552)
		{
			if (!func_634(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_622(iParam0) == 307971639 && func_635(iParam0))
		{
			if (!func_636(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_623(iParam0, 866047851))
		{
			func_637(iParam0);
		}
		else if (func_623(iParam0, 2000026003))
		{
			func_638(iParam0);
		}
		else if (func_623(iParam0, -103750053))
		{
			func_95(func_639(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_640(-717883113, 2091222383), iVar0);
		}
		else if (func_623(iParam0, -121341956) && !func_623(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_354((*Global_1835011)[4]->f_1, 1))
				{
					func_352(498, 0);
				}
			}
			if (func_623(iParam0, -2017733358) || func_623(iParam0, -1369131378))
			{
				func_641(iParam0);
			}
		}
		else if (func_623(iParam0, -136654233))
		{
			if (func_623(iParam0, -1021472396))
			{
			}
		}
		else if (func_623(iParam0, -1466706512) && func_623(iParam0, 1147021565))
		{
			func_352(484, 0);
		}
		else if (func_623(iParam0, 1147021565) && func_623(iParam0, -524514947))
		{
		}
		else if (func_623(iParam0, 554195525))
		{
		}
		else if (func_623(iParam0, 589988438))
		{
			if (func_642())
			{
				func_643(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_623(iParam0, 787083290) && func_623(iParam0, 949916894))
		{
			func_644(iParam0);
		}
		else if (func_623(iParam0, -1718133314))
		{
			func_645(iParam0);
		}
		else if (func_623(iParam0, -1738650224))
		{
			func_646(iParam0);
		}
		else if (func_623(iParam0, -1112814642) && func_623(iParam0, 949916894))
		{
			func_647(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_623(iParam0, 1841149704))
		{
			func_648();
		}
		else if (func_623(iParam0, 606799272))
		{
			func_649(iParam0, iParam1);
			func_650(iParam0);
		}
		else if (func_623(iParam0, -1112814642) && func_623(iParam0, -1697809989))
		{
			func_651(iParam0, 0, 0, 0);
		}
		else if (func_623(iParam0, -2017733358) || func_623(iParam0, -1369131378))
		{
			func_641(iParam0);
		}
		else if (func_623(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_652(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_623(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_374(215778062, 1, 0))
					{
						func_345(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_374(670273567, 1, 0))
					{
						func_345(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_374(-967317137, 1, 0))
					{
						func_345(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_374(526074061, 1, 0))
					{
						func_345(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_374(-1045488665, 1, 0))
					{
						func_345(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_374(471514780, 1, 0))
					{
						func_345(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_623(iParam0, -839724752) && func_624(iParam0, 4))
		{
			if (!func_613(42))
			{
				func_653(iParam0);
			}
		}
		else if (func_623(iParam0, 1399091007))
		{
			func_654(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_623(iParam0, 1248798204))
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
				func_345(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_626(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_655(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_656(&iVar9, 0))
				{
					func_632(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_655(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_352(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_657();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_658();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_659();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_660();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_661();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_662(499813453, 854119837, 0);
				func_663(499813453, 0);
				func_664(1);
				break;
			case 2127812557:
				func_662(499813453, -1292544588, 0);
				func_663(499813453, 0);
				func_664(2);
				break;
			case 808991383:
				func_662(499813453, -1003325394, 0);
				func_663(499813453, 0);
				func_664(4);
				break;
			case 1134518629:
				func_662(666607663, -335460405, 0);
				func_663(666607663, 0);
				func_665(1);
				break;
			case 902940106:
				func_662(666607663, 903797617, 0);
				func_663(666607663, 0);
				func_665(2);
				break;
			case -418174898:
				func_662(666607663, 669728650, 0);
				func_663(666607663, 0);
				func_665(4);
				break;
			case -648114971:
				func_662(-220219788, 1214120047, 0);
				func_663(-220219788, 0);
				func_666(1);
				break;
			case 211153747:
				func_662(-220219788, 655769340, 0);
				func_663(-220219788, 0);
				func_666(2);
				break;
			case -32876996:
				func_662(-220219788, 885316185, 0);
				func_663(-220219788, 0);
				func_666(4);
				break;
			case 1191437462:
				func_662(218622660, -1491419385, 0);
				func_663(218622660, 0);
				func_667(1);
				break;
			case 1119149048:
				func_662(218622660, 1809565830, 0);
				func_663(218622660, 0);
				func_667(2);
				break;
			case 506073827:
				func_662(390004462, -628873767, 0);
				func_663(390004462, 0);
				func_668(1);
				break;
			case -1876986168:
				func_662(390004462, -405421956, 0);
				func_663(390004462, 0);
				func_668(2);
				break;
			case 2142623221:
				func_662(390004462, -1108972386, 0);
				func_663(390004462, 0);
				func_668(4);
				break;
			case 1508215381:
				func_662(6410548, 1053716392, 0);
				func_663(6410548, 0);
				func_669(1);
				break;
			case -888935280:
				func_662(6410548, 806507056, 0);
				func_663(6410548, 0);
				func_669(2);
				break;
			case -1252474566:
				func_662(6410548, 1571925350, 0);
				func_663(6410548, 0);
				func_669(4);
				break;
			case -1465702449:
				func_662(6410548, 1330352282, 0);
				func_663(6410548, 0);
				func_669(8);
				break;
			case -21093309:
				func_671(242, func_670(-21093309), 0);
				break;
			case 204375141:
				func_671(240, func_670(204375141), 0);
				break;
			case -417963070:
				func_671(241, func_670(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_672(594, 1934060482, 1, 1);
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
					func_672(594, 1110018439, 1, 1);
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
					func_672(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_672(594, -1228016946, 1, 1);
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
					func_672(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_672(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_352(488, 0);
				break;
			case 1613651027:
				func_352(491, 0);
				break;
			case -885810591:
				func_352(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_345(func_673(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_345(func_674(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_625(1))
				{
					func_352(487, 0);
				}
				break;
			case -898386032:
				func_352(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_352(496, 0);
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
		func_675(&iVar10);
		if (!func_676(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_631(0))
		{
			return true;
		}
		if (func_622(iParam0) == -1037537535)
		{
			func_677(iParam0);
		}
		if (func_623(iParam0, -1979000645))
		{
			func_678(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_631(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_345(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_679(iVar2, 0);
		}
	}
	Var35 = { func_680(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_681(iParam0);
	if (fParam6 > 0f)
	{
		if (func_623(iParam0, -839724752))
		{
			func_682(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_683(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_346(int iParam0)
{
	if (func_623(iParam0, 1989861793))
	{
		iVar0 = func_684(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_685(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_686(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_687(iVar14, iVar1);
					if (iVar15 != iParam0 && func_603(iVar15, 0))
					{
						if (func_688(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_689(iVar1);
				if (bVar13)
				{
					func_690(iParam0);
				}
				else
				{
					func_352(306, 0);
				}
			}
		}
	}
}

void func_347()
{
	if (func_20() != -1)
	{
		return;
	}
	func_691();
	func_692();
	func_693();
	func_694();
	func_695();
	func_696();
	func_697();
}

void func_348(int iParam0)
{
	func_698(iParam0, 1, 1, -142743235, 1);
	if (func_699(iParam0))
	{
		func_700(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_702(func_701(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_703(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_704() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_705(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_705(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_706(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_706(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_706(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_706(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_706(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_706(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_706(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_706(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_706(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_707(iVar8, iVar0))
				{
					func_708(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_707(iVar8, iVar0))
		{
			func_708(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_349()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_707(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_704() == -2125499975 || func_704() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_708(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_708(&vVar2, iVar5, iVar0);
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

void func_350()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_602(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_351(int iParam0, bool bParam1)
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
			if ((func_354((*Global_1835011)[59]->f_1, 1) || func_354((*Global_1347702)[1]->f_15, 1)) || func_218((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_477(403634348, 1))
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

void func_352(int iParam0, bool bParam1)
{
	func_709(iParam0, &iVar0, &iVar1);
	if (!func_710(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_711(iVar0, iVar1);
}

void func_353(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_702(iParam0, 1);
	func_712(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_712(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_713(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_712(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_712(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_354(int iParam0, bool bParam1)
{
	switch (func_323(iParam0))
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

void func_355()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_602(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_602(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_357(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_714(iParam1, 1, 0) };
		iParam3 = func_715(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_716(iParam3);
	return func_655(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_358()
{
	return _unlock_is_unlocked(99890643);
}

void func_359(int iParam0)
{
	if (!func_717(iParam0))
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

bool func_360(int iParam0, int iParam1)
{
	if (!func_718(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_719(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_720(Global_40.f_9910[iParam1], 4);
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_721(*iParam0);
	iVar1 = func_722(*iParam0);
	iVar2 = func_723(*iParam0);
	iVar3 = func_724(*iParam0);
	iVar4 = func_725(*iParam0);
	iVar5 = func_726(*iParam0);
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
	iVar6 = func_727(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_727(iVar1, iVar0);
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
	func_728(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_362(int iParam0, int iParam1, bool bParam2)
{
	if (!func_718(iParam0))
	{
		return;
	}
	if (!func_729(iParam1))
	{
		return;
	}
	if (func_730(iParam1, 1))
	{
		return;
	}
	iVar0 = func_719(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_360(iParam0, -1))
	{
		return;
	}
	else
	{
		func_731(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_224(0, 0, 1))
		{
			func_394(0, 17);
		}
	}
}

void func_363()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_602(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_364()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_602(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_365()
{
	return _unlock_is_unlocked(-121456797);
}

void func_366()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_602(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_367()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_602(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_368()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_602(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_369()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_602(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_370()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_602(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_371()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_602(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_372(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_373(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_374(int iParam0, int iParam1, bool bParam2)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_622(iParam0);
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
		if (!func_732(iParam0, 1))
		{
			return false;
		}
	}
	return func_607(iParam0, 0, bParam2) >= iParam1;
}

void func_375(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_733(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_733(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_376()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_602(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_377()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_602(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_378()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_602(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_379()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_602(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_380()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_602(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_381()
{
	if (func_734() > 1)
	{
		func_735();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_352(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_352(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_352(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_352(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_352(452, 1);
		}
	}
}

bool func_382(int iParam0)
{
	return func_736(iParam0, 4, 1);
}

void func_383(int iParam0)
{
	func_737(iParam0, 4, 1);
}

void func_384(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_385(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_217(iParam0))
	{
		return;
	}
	func_256(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_222(iParam0))
	{
		case 1:
			func_95(func_640(909007663, -587839005), 1);
			iVar0 = func_299(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_509(iVar0))
			{
				case 0:
					func_95(func_640(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_640(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_640(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_640(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_640(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_640(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_640(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_640(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_640(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_640(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_640(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_299(iParam0);
			if (func_328((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_328((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_328((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_640(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_640(909007663, -2049243343), 1);
				}
			}
			if (func_328((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_510(iVar1))
				{
					case 0:
						func_95(func_640(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_640(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_640(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_640(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_640(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_640(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_640(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_640(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_640(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_640(909007663, 532323983), 1);
				}
			}
			else if (func_328((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_328((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_328((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_640(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_640(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_386()
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
	else if (func_225(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_224(0, 0, 1) || func_738()) || func_129())
	{
		return;
	}
	iVar0 = func_228();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_739(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_740(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_740(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_741(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_394(0, -1);
	}
	if (iVar2 > 0)
	{
		func_742("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_743(1, 0);
	Global_1956575->f_4 = 1;
}

void func_387(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_310(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_744(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_388(int iParam0)
{
	if (!func_217(iParam0))
	{
		return -1;
	}
	return func_745(iParam0);
}

int func_389(int iParam0, int iParam1)
{
	if (!func_746(iParam0))
	{
		return 0;
	}
	if (!func_421())
	{
		return 0;
	}
	if (!func_747(iParam0, &iVar0, &iVar1))
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

int func_390(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_748())
	{
		iVar2 = func_748();
	}
	iVar5 = func_749(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_506(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_506(iVar6) == 0)
			{
				return func_750(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_506(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_506(iVar6) == 0)
			{
				return func_750(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_750(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_751(1330954593, 0, -1);
		case 1:
			return func_751(1330954593, 0, -1);
		case 2:
			return func_751(1330954593, 0, -1) * 2;
		case 4:
			return func_751(1330954593, 0, -1);
		case 5:
			return func_751(1330954593, 0, -1);
		case 6:
			return func_751(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_751(1330954593, 0, -1) * 3;
		case 9:
			return func_751(1330954593, 0, -1) * 3;
		case 10:
			return func_751(1330954593, 0, -1) * 3;
		case 11:
			return func_751(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_392(int iParam0)
{
	if (!func_217(iParam0))
	{
		return cVar0;
	}
	switch (func_222(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_531(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_299(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_390(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_393(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_395();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_222(Global_1879514->f_1) == 1)
			{
				func_389(5, 1);
			}
			else if (func_222(Global_1879514->f_1) == 8 && (func_328((*Global_1347702)[func_299(Global_1879514->f_1)]->f_12, 1) || func_328((*Global_1347702)[func_299(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_389(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_394(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_752(&Global_0, 8);
	}
	if (!func_421() || func_20() != -1)
	{
		return;
	}
	func_752(&Global_0, 1);
}

int func_395()
{
	iVar0 = func_753(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_754(iVar0))
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

Vector3 func_396(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_755(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_422(vVar0))
	{
		vVar0 = { func_755(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_397(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_398(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_399(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_274(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_756(vParam0, iParam3);
}

void func_400()
{
	func_757();
	func_758();
	func_759();
	_0x11b0a0b282fa9b10(0);
}

void func_401(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_760(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_761(&(Param0.f_10)))
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
			func_762(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_402(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_403(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_404()
{
	return Global_1572864->f_12;
}

void func_405(bool bParam0)
{
	if (func_522(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_763();
	Var1.f_3.f_3 = iVar0;
	if ((!func_764(Global_1347343->f_2) && !func_402(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_765();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_402(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_766();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_402(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_767();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_768(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_769(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_403(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_403(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_406(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_770(uParam0);
	iVar0 = func_771(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_772(iParam1);
		}
		iVar0 = func_773(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_774(uParam0);
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
		iVar0 = func_774(uParam0);
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
	func_775(uParam0, 2);
}

void func_407(char[4] cParam0, int iParam1)
{
	func_776(&(cParam0->f_7375), iParam1);
}

int func_408(var uParam0)
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

int func_409()
{
	return func_531(func_777());
}

void func_410(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_423())
	{
		func_778(cParam0, iVar0);
		iVar0++;
	}
}

int func_411(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_412(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_413(char[4] cParam0)
{
	func_784(cParam0, iLocal_81, iLocal_82, 116696, 116705, 116875, 117055, 117101, "WNT1_INT_WAGON", 2, -1);
	func_784(cParam0, iLocal_82, iLocal_83, 117266, 117289, 117412, 117742, 118559, "WNT1_INT_CABIN", 18, -1);
	func_784(cParam0, iLocal_83, iLocal_84, 118610, 118673, 118907, 119199, 119779, "WNT1_MCS1", 2, -1);
	func_784(cParam0, iLocal_84, iLocal_85, 119832, 119841, 120123, 120340, 120734, "", 0, -1);
	func_784(cParam0, iLocal_85, iLocal_86, 120759, 120768, 121171, 121281, 121613, "", 4097, -1);
	func_784(cParam0, iLocal_86, iLocal_87, 121683, 121692, 121873, 122021, 122455, "", 0, -1);
	func_784(cParam0, iLocal_87, iLocal_88, 122479, 122488, 122601, 122758, 122811, "", 0, -1);
	func_784(cParam0, iLocal_88, iLocal_89, 122851, 122860, 123080, 123238, 123506, "", 0, -1);
	func_784(cParam0, iLocal_89, iLocal_90, 123530, 123539, 123838, 124230, 124586, "", 4096, -1);
	func_784(cParam0, iLocal_90, iLocal_91, 124658, 124667, 125073, 125222, 125322, "", 0, -1);
	func_784(cParam0, iLocal_91, 25, 125364, 125398, 125558, 126089, 126246, "WNT1_MCS2", 2, -1);
	func_784(cParam0, 25, 26, 126261, 126310, 126363, 126387, 126431, "WNT1_EXT", 2, -1);
	cParam0->f_607 = cParam0->f_607;
}

void func_414(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_491(-1170496998, 0, 0);
		if (bParam1)
		{
			func_491(-939420910, 1, 0);
		}
		else
		{
			func_491(356365161, 1, 0);
			func_840(0);
		}
	}
	else
	{
		func_491(-1187950766, 1, 0);
		func_491(-1170496998, 1, 0);
		func_840(1);
	}
	func_841(0);
}

void func_415(int iParam0, bool bParam1)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_553(iParam0);
	func_554(iParam0);
	func_551(iParam0);
	if (func_552(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_289(iParam0) != iVar0)
		{
			return;
		}
	}
	func_842(iParam0, 4);
	if (bParam1)
	{
		func_842(iParam0, 16);
	}
}

void func_416(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_417(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_418(var uParam0)
{
	if (!func_843(uParam0, 4))
	{
		if (func_844(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_845(uParam0) };
		if (!func_844(uParam0->f_860, 524288))
		{
			func_846(&(uParam0->f_872));
		}
		func_847(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_848(uParam0, 0f, 0f, 0f);
		func_849(uParam0);
		func_850(uParam0);
		func_851(uParam0, 0f, 0f, 0f, 0, 0);
		func_852(uParam0);
		func_776(uParam0, 4);
		func_853(uParam0, 0);
		func_854(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_419(int iParam0)
{
	if (func_855(iParam0))
	{
		return func_856(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_420(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_534(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_857(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_858(0, 0);
		if (func_717(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_859(1, 0);
		}
	}
	else
	{
		func_859(1, 0);
	}
	func_236(0);
	func_535(0, vParam0, uParam3);
	return 1;
}

bool func_421()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_422(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_423()
{
	return 26;
}

void func_424(int iParam0)
{
	if (!func_216(iParam0))
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

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_860((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_426(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_861((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_427(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_862((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_428(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_863((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_429(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_864((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_865((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_431(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_866((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_433(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_867((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_434(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_868((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_435(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_869((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_436(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_870((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_437(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_871(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_872(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_438(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_873(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_874(&(cParam0->f_819));
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

void func_439(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_875(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_876(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_440(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_877(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_878(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0] = cParam1;
	cParam0->f_1081[iVar0]->f_2 = (cParam0->f_1081[iVar0]->f_2 || iParam2);
}

void func_441(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_879(iParam3, func_33(cParam0)) && !func_879(iParam3, func_35(cParam0)))
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
	iVar0 = func_880(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_881(&(cParam0->f_1126));
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
		func_882(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_442(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_443(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_883(&(cParam0->f_5239), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_884(&(cParam0->f_5239));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5239[iVar0] = cParam1;
	cParam0->f_5239[iVar0]->f_2 = (cParam0->f_5239[iVar0]->f_2 || iParam2);
}

void func_444(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_885((*uParam0)[iVar0]))
		{
			if (func_879((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_886((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_887((*uParam1)[iVar0]))
		{
			if (func_879((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_888((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_889((*uParam2)[iVar0]))
		{
			if (func_879((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_890((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_891((*uParam3)[iVar0]))
		{
			if (func_879((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_892((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_879(uParam4->f_1, iParam12))
	{
		func_893(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_894((*uParam5)[iVar0]))
		{
			if (func_879((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_895((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_894((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_896((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_879((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_897((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_898((*uParam6)[iVar0]))
		{
			if (func_879((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_899((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_900((*uParam7)[iVar0]))
		{
			if (func_879((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_901((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_902((*uParam8)[iVar0]))
		{
			if (func_879((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_903((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_904((*uParam9)[iVar0]))
		{
			if (func_879((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_905((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_906((*uParam10)[iVar0]))
		{
			if (func_879((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_907((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_908((*uParam11)[iVar0]))
		{
			if (func_879((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_909((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_445(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_910(uParam0, iParam1, sParam2))
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

struct<2> func_446()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_447(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_448(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_449(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_911(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_406(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_450(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_912(cParam0->f_607)}, 3);
			if (func_913(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_914(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_915(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_451(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_894((*uParam0)[iVar0]))
		{
			if (func_879((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_916((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_917((*uParam0)[iVar0]))
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

int func_452(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_453(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_918(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_919(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_454(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_920(cParam0))
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
				bVar12 = func_921(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(bVar12))
					{
						if (bVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_922(bVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_923(bVar12))
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
		if (func_924(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		bVar13 = func_921(&iVar29, &Var18);
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
		func_925(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_923(bVar13) || func_926(Global_35, bVar13, 1, 1) > 200f) && !func_422(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(bVar13, false);
						func_927(bVar13, vVar14, fParam5, 2, 1073741824);
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

void func_455(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_928(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_929(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_456(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_930(cParam0);
			if (func_931(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_932(cParam0, 2097152);
				func_292(cParam0, 16384);
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
			func_930(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_933(cParam0, Var0))
			{
				if (func_452(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_452(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_457(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_458(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_934(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_453(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_454(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_912(cParam0->f_607)}, 3);
		if (func_935(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_936(&(cParam0->f_13115)) < 30f)
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

bool func_459(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_936(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_937()) && func_936(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_292(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_938(0, 0);
		func_292(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_460(char[4] cParam0)
{
	func_939();
	func_940(334010167);
	func_941(19);
	func_941(20);
	func_941(18);
	func_941(21);
	func_941(22);
	if (!func_177(iVar906, 64))
	{
		func_942(cParam0);
		func_179(&uLocal_909, 64);
	}
	if (func_937())
	{
		return false;
	}
	func_943();
	if (func_33(cParam0) < iLocal_90)
	{
		func_944();
	}
	Global_1934765->f_271 = 1;
	func_945(cParam0);
	if (!func_177(iVar901, 2048))
	{
		if (func_946(cParam0))
		{
			func_179(&uLocal_904, 2048);
		}
		else
		{
			return false;
		}
	}
	if (!func_177(iVar901, 67108864))
	{
		if (func_947(cParam0))
		{
			func_179(&uLocal_904, 67108864);
		}
		else
		{
			return false;
		}
	}
	if (!func_948(7))
	{
		func_949(7, 1, 0);
		if (!func_950(7, 1, 0, 0))
		{
			return false;
		}
	}
	if (func_33(cParam0) > iLocal_83 && func_33(cParam0) < iLocal_91)
	{
		if (!func_951())
		{
			return false;
		}
	}
	if (!func_952())
	{
		return false;
	}
	if (func_33(cParam0) >= iLocal_85)
	{
		_0xba8818212633500a(iVar1102, 0, 1);
	}
	if (!func_953(cParam0))
	{
		return false;
	}
	if (func_33(cParam0) <= iLocal_82)
	{
		if (!func_954(cParam0))
		{
			return false;
		}
		if (func_33(cParam0) == iLocal_82)
		{
			if (!func_955(cParam0))
			{
				return false;
			}
		}
	}
	if (func_33(cParam0) >= iLocal_86 && func_33(cParam0) < iLocal_91)
	{
		if (!func_956())
		{
			return false;
		}
	}
	if (!func_195(1))
	{
		return false;
	}
	func_40(0);
	func_957(cParam0);
	func_958();
	func_959(cParam0);
	func_960(cParam0);
	func_961(cParam0);
	func_962(cParam0);
	func_189(1);
	func_963();
	func_192(cParam0, 1);
	func_193(1);
	func_964();
	func_194(1);
	func_196(1);
	func_965();
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_966(cParam0);
	func_69(0);
	func_967();
	func_968(cParam0);
	func_970(cParam0, 147234);
	func_972(cParam0, 147453);
	func_974(cParam0, 150409);
	return true;
}

void func_461(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_462(char[4] cParam0)
{
	func_975(cParam0);
	func_976(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_931(cParam0);
		}
	}
	func_977(cParam0);
	func_978(cParam0);
	func_979(cParam0);
	func_980(cParam0);
	func_981(cParam0);
	func_982(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_983(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_306(cParam0) == 0)
	{
		func_456(cParam0);
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
			if (func_984(cParam0, iVar0, 0))
			{
				if (func_985(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_985(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_985(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_407(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_986(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_987(cParam0);
					func_988(cParam0, iVar0, 1);
				}
				else
				{
					func_988(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_934(cParam0))
			{
				if (func_989(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_932(cParam0, 4);
					}
					func_988(cParam0, iVar0, 2);
				}
			}
			else if (func_990(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_932(cParam0, 4);
				}
				func_988(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_984(cParam0, iVar0, 2))
			{
				if (!func_991(cParam0))
				{
					func_988(cParam0, iVar0, 4);
					if (func_992(cParam0, iVar0, iVar1))
					{
						func_988(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_993(cParam0);
					func_988(cParam0, iVar0, 3);
					if (func_994(cParam0, iVar0))
					{
						func_988(cParam0, iVar0, 4);
						if (func_992(cParam0, iVar0, iVar1))
						{
							func_988(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_995(cParam0))
			{
				func_994(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_994(cParam0, iVar0))
			{
				func_988(cParam0, iVar0, 4);
				if (func_992(cParam0, iVar0, iVar1))
				{
					func_988(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_992(cParam0, iVar0, iVar1))
			{
				func_988(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_996(cParam0);
				func_997(cParam0, iVar0);
				func_998(cParam0);
				func_999(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_1000(cParam0, iVar1))
					{
						func_1001(cParam0, iVar1);
					}
				}
			}
			if (func_984(cParam0, iVar0, 5))
			{
				if (func_984(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_1002(cParam0, func_33(cParam0));
					}
					func_1003(cParam0, iVar1);
					func_976(cParam0);
					return true;
				}
				else
				{
					func_988(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_1004(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_1005(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_1006("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_1007(cParam0))
					{
						func_988(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_932(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_292(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_996(cParam0);
				func_997(cParam0, iVar0);
				func_998(cParam0);
				func_999(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_1000(cParam0, func_35(cParam0)))
					{
						func_1001(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_1005(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_984(cParam0, iVar0, 5))
				{
					if (func_1008(cParam0))
					{
						func_988(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_1008(cParam0);
					func_988(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_984(cParam0, iVar0, 5);
				func_1009(cParam0);
			}
			break;
		case 7:
			if (func_984(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_1002(cParam0, func_33(cParam0));
				}
				func_1003(cParam0, iVar1);
				func_976(cParam0);
				return true;
			}
			break;
		default:
			func_988(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_463(bool bParam0)
{
	if (func_241())
	{
		func_113(1);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (bParam0)
	{
		func_47(0, 0);
	}
}

void func_464(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_465(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_466()
{
	if (does_entity_exist(&(Local_14.f_3[0])))
	{
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 31, 0, 0);
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 32, 0, 0);
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 33, 0, 0);
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 30, 0, 0);
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 49, 0, 0);
		_0xa3db37edf9a74635(player_id(), &(Local_14.f_3[0]), 50, 0, 0);
		set_ped_can_be_targetted(&(Local_14.f_3[0]), true);
		set_ped_config_flag(&(Local_14.f_3[0]), 297, true);
	}
}

void func_467()
{
	if (does_entity_exist(&(uLocal_1064[1])))
	{
		func_1010(&(uLocal_1064[1]), 1607151610, 0);
	}
}

void func_468(float fParam0)
{
	if (!is_entity_dead(&(uLocal_1064[1])))
	{
		_0xe8c296b75eacc357(&(uLocal_1064[1]), fParam0);
	}
	if (!is_entity_dead(&(uLocal_1064[2])))
	{
		_0xe8c296b75eacc357(&(uLocal_1064[2]), fParam0);
	}
}

void func_469(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 || iParam1);
}

void func_470(int iParam0, int iParam1, bool bParam2)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (!func_1011(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_1012(iParam0, 25, 1);
	}
}

void func_471(bool bParam0)
{
	if (!is_entity_dead(&(iLocal_1084[0])))
	{
		set_ped_config_flag(&(iLocal_1084[0]), 136, !bParam0);
	}
	if (!is_entity_dead(&(iLocal_1084[1])))
	{
		set_ped_config_flag(&(iLocal_1084[1]), 136, !bParam0);
	}
	if (!is_entity_dead(&(iLocal_1084[2])))
	{
		set_ped_config_flag(&(iLocal_1084[2]), 136, !bParam0);
	}
	if (bParam0)
	{
	}
}

void func_472()
{
	iLocal_903 = 0;
	while (iVar901 < 19)
	{
		if (!is_entity_dead(&(iLocal_1084[iVar901])))
		{
			set_ped_config_flag(&(iLocal_1084[iVar901]), 172, false);
		}
		iLocal_903 = iVar901 + 1;
	}
	if (!is_entity_dead(&(Local_14.f_3[0])))
	{
		set_ped_config_flag(&(Local_14.f_3[0]), 172, false);
	}
}

Vector3 func_473(int iParam0, int iParam1)
{
	return func_1013(iParam0, iParam1);
}

void func_474(int* iParam0)
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

void func_475(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_1014((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_476(bool bParam0)
{
	if (does_entity_exist(bVar1103))
	{
		if (func_926(Global_35, bVar1103, 1, 0) > 100f || bParam0)
		{
			delete_ped(&iLocal_1106);
		}
	}
}

bool func_477(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1015(iParam0);
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

void func_478(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_464((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_479(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(bParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(bParam1) && func_1016(get_ped_index_from_entity_index(bParam1)));
	if (bVar0)
	{
		iVar1 = func_1017(get_ped_index_from_entity_index(bParam1));
	}
	if (is_entity_a_ped(bParam1))
	{
		iVar2 = get_ped_index_from_entity_index(bParam1);
		if (bVar0)
		{
			func_548(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1018(cParam0, bParam1) && does_blip_exist(get_blip_from_entity(bParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(bParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(bParam1), 231194138);
		}
		else
		{
			func_1019(bParam1);
		}
	}
	if (func_1018(cParam0, bParam1))
	{
		func_1020(cParam0, bParam1, 1024);
		if (bParam2)
		{
			func_1021(cParam0, bParam1, 128);
		}
		else
		{
			func_1020(cParam0, bParam1, 128);
		}
		if (func_1022(cParam0, bParam1, &iVar3))
		{
			func_1023(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1024(iVar1);
	}
}

void func_480(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_496(iParam0, 0, 0);
	if (func_1025(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1026(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1027(iParam0, 1);
			}
			else
			{
				func_1028(iParam0, 1);
			}
		}
		else
		{
			func_1029(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1030())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_481()
{
	if (does_particle_fx_looped_exist(iVar1171))
	{
		stop_particle_fx_looped(iVar1171, false);
	}
}

void func_482()
{
	if (does_particle_fx_looped_exist(iVar1170))
	{
		stop_particle_fx_looped(iVar1170, false);
		remove_particle_fx_in_range(func_473(10, 10), 30f);
	}
}

void func_483()
{
	if (is_valid_interior(iVar1004))
	{
		if (is_interior_entity_set_active(iVar1004, "adl_stall_blocker"))
		{
			deactivate_interior_entity_set(iVar1004, "adl_stall_blocker", true);
		}
	}
}

void func_484()
{
	if (is_valid_interior(iVar1004))
	{
		if (is_interior_entity_set_active(iVar1004, "adl_exit_blocker"))
		{
			deactivate_interior_entity_set(iVar1004, "adl_exit_blocker", true);
		}
	}
}

void func_485(int iParam0, int iParam1)
{
	func_1031(iParam0, iParam1);
}

void func_486(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

float func_487(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_488(int iParam0, float fParam1, int iParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_625(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1032(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1033(iParam0), iVar0);
	func_1035(func_1034(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1036(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_352(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_352(func_1037(iParam0), 1);
	}
	sVar1 = func_1038(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_489(int iParam0, int iParam1)
{
	if (!func_1039(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (&Global_40.f_9384[iParam0] - (Global_40.f_9384[iParam0] && iParam1));
}

void func_490(vector3 vParam0, float fParam3, int iParam4)
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

void func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1040(1497516462);
			func_1041(2016141805);
			func_1041(1010885152);
			func_1041(-502324015);
			break;
		case 2016141805:
			func_1041(1497516462);
			func_1040(2016141805);
			func_1041(1010885152);
			func_1041(-502324015);
			break;
		case 1010885152:
			func_1041(1497516462);
			func_1041(2016141805);
			func_1040(1010885152);
			func_1041(-502324015);
			break;
		case -502324015:
			func_1041(1497516462);
			func_1041(2016141805);
			func_1041(1010885152);
			func_1040(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1041(-538889627);
			func_1041(-538880323);
			func_1041(-1056767524);
			func_1040(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1042();
			func_1040(iParam0);
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
			func_1043();
			func_1040(iParam0);
			break;
		case 2019386373:
			func_1041(-664252410);
			func_1041(2109952320);
			func_1040(2019386373);
			break;
		case -664252410:
			func_1041(2019386373);
			func_1041(2109952320);
			func_1040(-664252410);
			break;
		case 2109952320:
			func_1041(2019386373);
			func_1041(-664252410);
			func_1040(2109952320);
			break;
		case -1674179981:
			func_1041(-1835851517);
			func_1041(-1838352012);
			func_1040(-1674179981);
			break;
		case -1835851517:
			func_1041(-1674179981);
			func_1041(-1838352012);
			func_1040(-1835851517);
			break;
		case -1838352012:
			func_1041(-1674179981);
			func_1041(-1835851517);
			func_1040(-1838352012);
			break;
		case -1717960576:
			func_1041(210001842);
			func_1040(-1717960576);
			break;
		case 210001842:
			func_1041(-1717960576);
			func_1040(210001842);
			break;
		case -150493654:
			func_1041(-1271608261);
			func_1041(1846061697);
			func_1041(-1145519186);
			func_1040(-150493654);
			break;
		case -1271608261:
			func_1041(-150493654);
			func_1041(1846061697);
			func_1041(-1145519186);
			func_1040(-1271608261);
			break;
		case 1846061697:
			func_1041(-150493654);
			func_1041(-1271608261);
			func_1041(-1145519186);
			func_1040(1846061697);
			break;
		case -1145519186:
			func_1041(-150493654);
			func_1041(-1271608261);
			func_1041(1846061697);
			func_1040(-1145519186);
			break;
		case 1766284049:
			func_1041(280705402);
			func_1041(1926308480);
			func_1040(1766284049);
			break;
		case 280705402:
			func_1041(1766284049);
			func_1041(1926308480);
			func_1040(280705402);
			break;
		case 1926308480:
			func_1041(1766284049);
			func_1041(280705402);
			func_1040(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1041(439465264);
				func_1040(1609506757);
			}
			else
			{
				func_1041(1609506757);
				func_1041(439465264);
			}
			break;
		case 439465264:
			if (func_516(1609506757))
			{
				if (bParam1)
				{
					func_1040(439465264);
				}
				else
				{
					func_1041(439465264);
				}
			}
			break;
		case 1822001510:
			func_1041(-1612662716);
			func_1040(1822001510);
			break;
		case -1612662716:
			func_1041(1822001510);
			func_1040(-1612662716);
			break;
		case 1306158345:
			func_1041(1952610440);
			func_1041(-223469678);
			func_1041(-404698347);
			func_1041(1517904467);
			func_1040(1306158345);
			break;
		case 1952610440:
			func_1041(1306158345);
			func_1041(-223469678);
			func_1041(-404698347);
			func_1041(1517904467);
			func_1040(1952610440);
			break;
		case -223469678:
			func_1041(1306158345);
			func_1041(1952610440);
			func_1041(-404698347);
			func_1041(1517904467);
			func_1040(-223469678);
			break;
		case -404698347:
			func_1041(1306158345);
			func_1041(1952610440);
			func_1041(-223469678);
			func_1041(1517904467);
			func_1040(-404698347);
			break;
		case 1517904467:
			func_1041(1306158345);
			func_1041(1952610440);
			func_1041(-223469678);
			func_1041(-404698347);
			func_1040(1517904467);
			break;
		case 1376646519:
			func_1041(931649776);
			func_1041(-434590080);
			func_1041(1743048395);
			func_1041(449774763);
			func_1040(1376646519);
			break;
		case 931649776:
			func_1041(1376646519);
			func_1041(-434590080);
			func_1041(1743048395);
			func_1041(449774763);
			func_1040(931649776);
			break;
		case -434590080:
			func_1041(1376646519);
			func_1041(931649776);
			func_1041(1743048395);
			func_1041(449774763);
			func_1040(-434590080);
			break;
		case 1743048395:
			func_1041(1376646519);
			func_1041(931649776);
			func_1041(-434590080);
			func_1041(449774763);
			func_1040(1743048395);
			break;
		case 449774763:
			func_1041(1376646519);
			func_1041(931649776);
			func_1041(-434590080);
			func_1041(1743048395);
			func_1040(449774763);
			break;
		case -1414537028:
			func_1041(38162571);
			func_1041(1350391819);
			func_1041(54073871);
			func_1040(-1414537028);
			break;
		case 38162571:
			func_1041(-1414537028);
			func_1041(1350391819);
			func_1041(54073871);
			func_1040(38162571);
			break;
		case 1350391819:
			func_1041(-1414537028);
			func_1041(38162571);
			func_1041(54073871);
			func_1040(1350391819);
			break;
		case 54073871:
			func_1041(-1414537028);
			func_1041(38162571);
			func_1041(1350391819);
			func_1040(54073871);
			break;
		case 198200492:
			func_1040(198200492);
			func_1041(-1124061431);
			func_1041(52706132);
			func_1041(-259123672);
			break;
		case -1124061431:
			func_1041(198200492);
			func_1040(-1124061431);
			func_1041(52706132);
			func_1041(-259123672);
			break;
		case 52706132:
			func_1041(198200492);
			func_1041(-1124061431);
			func_1040(52706132);
			func_1041(-259123672);
			break;
		case -259123672:
			func_1041(198200492);
			func_1041(-1124061431);
			func_1041(52706132);
			func_1040(-259123672);
			break;
		case -919512195:
			func_1040(-919512195);
			func_1041(-1925798111);
			func_1041(420709909);
			func_1041(1703426636);
			break;
		case -1925798111:
			func_1040(-1925798111);
			func_1041(-919512195);
			func_1041(420709909);
			func_1041(1703426636);
			break;
		case 420709909:
			func_1040(420709909);
			func_1041(-919512195);
			func_1041(-1925798111);
			func_1041(1703426636);
			break;
		case 1703426636:
			func_1040(1703426636);
			func_1041(-919512195);
			func_1041(-1925798111);
			func_1041(420709909);
			break;
		case -1223121209:
			func_1040(-1223121209);
			func_1041(630808005);
			break;
		case 630808005:
			func_1040(630808005);
			func_1041(-1223121209);
			break;
		case 1453909576:
			func_1040(1453909576);
			func_1041(1643531967);
			break;
		case 1643531967:
			func_1040(1643531967);
			func_1041(1453909576);
			break;
		case 0:
			func_1040(0);
			func_1041(473295046);
			func_1041(-1738165526);
			break;
		case 473295046:
			func_1040(473295046);
			func_1041(0);
			func_1041(-1738165526);
			break;
		case -1738165526:
			func_1040(-1738165526);
			func_1041(0);
			func_1041(473295046);
			break;
		case 932909855:
			func_1040(932909855);
			func_1041(2051822093);
			break;
		case 2051822093:
			func_1040(2051822093);
			func_1041(932909855);
			break;
		case 405586984:
			func_1040(405586984);
			func_1041(1509509592);
			func_1041(-959357075);
			func_1041(-1311865656);
			break;
		case 1509509592:
			func_1040(1509509592);
			func_1041(405586984);
			func_1041(-959357075);
			func_1041(-1311865656);
			break;
		case -959357075:
			func_1040(-959357075);
			func_1041(1509509592);
			func_1041(405586984);
			func_1041(-1311865656);
			break;
		case -1311865656:
			func_1040(-1311865656);
			func_1041(1509509592);
			func_1041(-959357075);
			func_1041(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1040(-524145696);
			}
			else
			{
				func_1041(-524145696);
			}
			func_1041(1626481264);
			func_1041(282809459);
			break;
		case 282809459:
			func_1040(282809459);
			func_1041(1626481264);
			func_1041(-524145696);
			break;
		case 1626481264:
			func_1040(1626481264);
			func_1041(-524145696);
			func_1041(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1040(885203519);
			}
			else
			{
				func_1041(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1040(-1080627546);
			}
			else
			{
				func_1041(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_516(iParam0))
				{
					func_1040(iParam0);
				}
			}
			else if (func_516(iParam0))
			{
				func_1041(iParam0);
			}
			break;
	}
}

void func_492(bool bParam0, float fParam1)
{
	clear_bit(&(Global_1934765->f_301), 1);
	func_1044(bParam0, fParam1);
}

void func_493()
{
	iLocal_903 = 0;
	while (iVar901 <= 4)
	{
		if (Local_931[iVar901]->f_2)
		{
			if (!_0x91a5f9cbebb9d936(Local_931[iVar901]->f_1))
			{
				func_1045(Local_931[iVar901]->f_4, 5f, 0);
				if (!is_string_null_or_empty(Local_931[iVar901]->f_13))
				{
					Local_931[iVar901] = _create_volume_box_with_custom_name(Local_931[iVar901]->f_4, Local_931[iVar901]->f_7, Local_931[iVar901]->f_10, Local_931[iVar901]->f_13);
				}
				else
				{
					Local_931[iVar901] = _create_volume_box(Local_931[iVar901]->f_4, Local_931[iVar901]->f_7, Local_931[iVar901]->f_10);
				}
				iVar0 = 15;
				if (Local_931[iVar901]->f_3)
				{
					iVar0 |= 16;
				}
				Local_931[iVar901]->f_1 = _0x4c39c95ae5db1329(&(Local_931[iVar901]), 0, iVar0);
				Local_931[iVar901]->f_2 = 1;
			}
		}
		else if (_0x91a5f9cbebb9d936(Local_931[iVar901]->f_1))
		{
			remove_scenario_blocking_area(Local_931[iVar901]->f_1, false);
			Local_931[iVar901]->f_2 = 0;
		}
		iLocal_903 = iVar901 + 1;
	}
}

float func_494(int iParam0, int iParam1)
{
	return func_1046(iParam0, iParam1);
}

bool func_495(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (get_ground_z_for_3d_coord(vParam1, &fVar0, false) || bParam9)
	{
		if (fVar0 != 0f)
		{
			vParam1.f_2 = fVar0;
		}
		Var1 = { vParam1 };
		Var1.f_3 = fParam4;
		Var1.f_4 = iParam5;
		Var1.f_5 = iParam6;
		Var1.f_6 = iParam7;
		Var1.f_7 = iParam8;
		Var1.f_9 = iParam10;
		*uParam0 = _add_scripted_cover_point(&Var1);
		return true;
	}
	return false;
}

int func_496(int iParam0, bool bParam1, bool bParam2)
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

bool func_497(bool bParam0, int iParam1)
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
	if (func_177(iVar0, 1))
	{
		if (is_ped_fatally_injured(bParam0))
		{
			return false;
		}
	}
	if (func_177(iVar0, 2))
	{
		if (_is_ped_hogtied(bParam0))
		{
			return false;
		}
	}
	if (func_177(iVar0, 8))
	{
		if (get_ped_config_flag(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_177(iVar0, 16))
	{
		if (!is_ped_on_mount(bParam0) && !is_ped_in_any_vehicle(bParam0, false))
		{
			return false;
		}
	}
	if (func_177(iVar0, 32))
	{
		if (is_entity_in_water(bParam0))
		{
			return false;
		}
	}
	if (func_177(iVar0, 64))
	{
		if (_0xb655db7582aec805(bParam0))
		{
			return false;
		}
	}
	if (func_177(iVar0, 128))
	{
		if (is_ped_ragdoll(bParam0))
		{
			return false;
		}
	}
	if (func_177(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_498(char[4] cParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (get_current_ped_weapon(iParam1, &iVar0, true, 0, true))
		{
			if (iVar0 == iParam2)
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_499(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		_0xf49574e2332a8f06(*iParam0, 0f);
		_0x56e0735d6273b227(*iParam0, 1);
	}
}

void func_500(int iParam0, int iParam1)
{
	iVar0 = 56226;
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		attach_entity_to_entity(iParam0, iParam1, get_ped_bone_index(iParam1, iVar0), 0f, 0f, -0.2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return 0;
		case 2:
			return 6;
		case 3:
			return 11;
		case 4:
			return 3;
		case 5:
			return 14;
		case 6:
			return 20;
		case 7:
			return 18;
		case 8:
			return 15;
		case 9:
			return 21;
		case 10:
			return 4;
		case 11:
			return 13;
		case 12:
			return 7;
		case 13:
			return 5;
		case 14:
			return 16;
		case 15:
			return 17;
		case 16:
			return 19;
		case 17:
			return 22;
		case 18:
			return 9;
	}
	return -1;
}

bool func_502(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	bVar1 = func_1048(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(bVar1))
	{
		return false;
	}
	if (bParam6)
	{
		if (!is_entity_dead(bVar1) && _0xa0bc8faed8cfeb3c(bVar1))
		{
			return bVar1;
		}
	}
	else
	{
		return bVar1;
	}
	return false;
}

void func_503(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_592(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_594(2, *uParam0);
		}
		else
		{
			func_595(2, *uParam0);
		}
	}
	func_1049(uParam0);
}

bool func_504(int iParam0)
{
	return func_1050(iParam0, 2);
}

int func_505(int iParam0)
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

int func_506(int iParam0)
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

int func_507(int iParam0)
{
	return iParam0 & 31;
}

bool func_508()
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

int func_509(int iParam0)
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

int func_510(int iParam0)
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

void func_511(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_512()
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

int func_513(int iParam0)
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

void func_514(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_515(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1051(iParam0);
	}
	else
	{
		func_1052(iParam0, iParam1);
	}
	func_1053();
}

bool func_516(int iParam0)
{
	iVar0 = func_1054(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_517(int iParam0)
{
	if (!func_217(iParam0))
	{
		return false;
	}
	switch (func_222(iParam0))
	{
		case 1:
			switch (func_299(iParam0))
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
			switch (func_299(iParam0))
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

void func_518(int iParam0)
{
	iVar2 = func_1055(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_627(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1057(func_1056(iParam0), 6);
}

void func_519(int iParam0)
{
	iVar2 = func_1055(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_627(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1058(func_1056(iParam0), 6);
}

int func_520(int iParam0)
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

int func_521(int iParam0)
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
	func_1059(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_522(int iParam0)
{
	return iParam0 != 0;
}

bool func_523(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_524(int iParam0, var uParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1060(iParam0, *uParam1, 0);
	func_1061(uParam1);
	Global_1935183->f_24 = 1;
}

void func_525(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_526(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_579() - fParam1);
	func_1062(uParam0, 1);
	func_1063(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_527(var uParam0)
{
	return func_246(*uParam0, 2);
}

int func_528()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_529(bool bParam0)
{
	if (func_1064())
	{
		Global_1357509 = 1;
	}
	if (func_1065(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_530(int iParam0, int iParam1)
{
	Var0 = { func_1013(iParam0, iParam1) };
	Var0.f_3 = func_1046(iParam0, iParam1);
	return Var0;
}

int func_531(int iParam0)
{
	if (func_222(iParam0) == 1)
	{
		return func_299(iParam0);
	}
	return -1;
}

int func_532(int iParam0)
{
	if (func_222(iParam0) == 8)
	{
		return func_299(iParam0);
	}
	return -1;
}

char[] func_533(int iParam0)
{
	if (!func_300(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_534(int iParam0, bool bParam1)
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
		func_1066(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_312();
	}
}

void func_535(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_399(vParam1, 1);
}

bool func_536(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_537(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_538(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_539(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_540(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_541(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_542()
{
	return Global_1109400->f_245;
}

bool func_543(var uParam0, int iParam1)
{
	return func_177(uParam0->f_64, iParam1);
}

bool func_544(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_545(int iParam0)
{
	return func_736(iParam0, 16, 1);
}

void func_546(char[4] cParam0, bool bParam1)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1022(cParam0, bParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(bParam1) && func_1067(cParam0, get_object_index_from_entity_index(bParam1)))
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

void func_547(bool bParam0)
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

void func_548(int iParam0)
{
	func_1068(iParam0, 8, 0);
}

void func_549(int iParam0, bool bParam1)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1069(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1068(iParam0, 1, 0);
		}
	}
	func_1068(iParam0, 16, bParam1);
}

void func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_545(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1012(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_549(iParam0, 0);
	func_1068(iParam0, 4, 0);
	func_548(iParam0);
	func_1070(iParam0);
	func_1071(iParam0, 37, 1);
	bVar0 = func_497(Global_1360165[iParam0], 0);
	iVar1 = func_1072(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1073(iParam0, 64, 1))
	{
		func_1071(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1071(iParam0, 33, 1);
		func_1071(iParam0, 34, 1);
		func_1074(iParam0, 1056964608, -1, 1061158912);
		func_1075(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1012(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1012(iParam0, 35, 1);
			if (bParam8)
			{
				func_1012(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1076(iParam0, 0);
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
		func_1071(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1012(iParam0, 33, 1);
		func_1075(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_465(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1012(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1077(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1073(iParam0, 45, 1))
	{
		func_1071(iParam0, 45, 1);
	}
	func_1078(iParam0, 16, 1);
	func_1071(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_497(func_1079(iParam0), 0))
		{
			func_1080(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_551(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_289(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_558(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_558(iParam0);
	}
}

bool func_552(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_553(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_554(int iParam0)
{
	iParam0 = func_293(iParam0);
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

bool func_555(int iParam0)
{
	if (!func_1081(iParam0))
	{
		return false;
	}
	if (!func_358())
	{
		return true;
	}
	return false;
}

void func_556(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0))
	{
		return;
	}
	bVar0 = func_242(iParam0);
	func_1082(iParam0);
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	iVar1 = get_entity_model(bVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_555(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&bVar0);
	func_1083(iParam0, 0);
	func_558(iParam0);
}

bool func_557(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return false;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
	}
	iVar0 = func_288(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_558(int iParam0)
{
	iParam0 = func_293(iParam0);
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

bool func_559(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_560(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	bVar0 = func_242(iParam0);
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
	if (func_1084(iParam0, 64))
	{
		func_553(iParam0);
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
	bVar3 = func_625(42);
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
				func_1085(&((*Global_1900383)[iParam0]->f_27));
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
		func_553(iParam0);
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
		if (func_1086(1) < 1)
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
		func_1087(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1084(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(bVar0);
	bVar10 = false;
	iVar11 = func_1088(iParam0);
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
	fVar15 = func_1089(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1090(iParam0))
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
		func_1091((*Global_1900383)[iParam0]->f_26);
		func_1092((*Global_1900383)[iParam0]->f_26);
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
	if (func_923(bVar0) && !bVar9)
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
	iVar21 = func_1086(iParam0);
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

int func_561(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_562(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_563(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_564(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_565(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_566(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_559(iParam0))
	{
		return false;
	}
	iVar0 = func_242(iParam0);
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

void func_567(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0))
	{
		return;
	}
	iVar0 = func_242(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_568(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_733(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_569(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1093())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_733(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1094(iVar0);
			func_1095(iVar0, 0, 0);
		}
		func_733(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_570(int iParam0)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_278(iParam0, 67108864);
}

void func_571(int iParam0)
{
	StringCopy(&cVar0, func_1096(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1097(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_572(int iParam0)
{
	StringCopy(&cVar0, func_1096(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1097(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_574(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_575(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_576(int iParam0)
{
	if (!func_539(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_577(int iParam0)
{
	if (func_539(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_578(int iParam0)
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

float func_579()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_580(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1098(iParam0) == 1 && bParam7)
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

bool func_581(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_582(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_583(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_584()
{
	return Global_40.f_11095.f_35;
}

void func_585(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1099(iParam0, 0);
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
		func_586(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_586(int iParam0)
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
			func_1099(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1100(1);
	}
}

bool func_587(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_588()
{
	iVar0 = func_1101((*Global_1347702)[9]->f_15);
	iVar1 = func_1101((*Global_1835011)[69]->f_1);
	if (func_1102(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	if (!func_216(iParam0))
	{
		return false;
	}
	return func_354((*Global_1835011)[iParam0]->f_1, 1);
}

int func_590(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1103(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1104(iVar6);
	}
	return iVar5;
}

int func_591(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1105(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_592(int iParam0, bool bParam1)
{
	func_1106(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_593(int iParam0)
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

void func_594(int iParam0, int iParam1)
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

void func_595(int iParam0, int iParam1)
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

void func_596(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1107(iParam0, iParam1, bParam2);
}

int func_597(int iParam0)
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

int func_598(int iParam0)
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

void func_599(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1108();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1109(iParam0);
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
	if (func_625(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1110())
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
	Global_40.f_11095.f_35 = func_336(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1108();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1111(iVar1);
		func_1113(func_1112(), 0, 4000);
		func_1114(Global_40.f_11095.f_35);
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
		func_1115(0);
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
				if (iParam0 > func_598(14))
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
					sParam4 = func_1116(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_733(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_733(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_598(4))
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
					sParam4 = func_1116(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_733(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_733(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_389(10, 1);
	}
}

void func_600(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_601(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_602(int iParam0)
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

bool func_603(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_604(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1117(iParam0) && func_1118(iParam0))
		{
			func_1119(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_605(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1120(iParam0, iParam1);
	Var0 = { func_714(iParam0, 0, 1) };
	iVar5 = func_1121(iParam0, &Var0, 0, 0);
	iVar6 = func_1122(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_623(iParam0, -2051813666))
		{
			func_352(583, 1);
		}
		else
		{
			func_352(582, 0);
		}
	}
	if (func_1123(iParam0, &Var0, *iParam1, 0, 0))
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

void func_606(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_684(iParam0, -949239683))
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

int func_607(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_622(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1124(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1125(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1055(bParam2), iParam0, 0);
	return iVar2;
}

bool func_608(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_609(iParam0) != 0;
}

int func_609(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1126())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1127(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_610(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_611(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1126())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_610(iVar0))
		{
			if (func_374(func_1127(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_612(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1128(48);
	func_394(0, -1);
}

bool func_613(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_354((*Global_1347702)[iParam0]->f_15, 1);
}

int func_614(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_615(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_616(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_354((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_617(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_300(iParam0))
	{
		return false;
	}
	return func_218((*Global_1347702)[iParam0]->f_15);
}

int func_618()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_374(func_1129(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_619(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_421() && (func_617(38) || func_613(38)))
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
			if (func_421() && (func_617(39) || func_613(39)))
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
			iVar9 = func_1130(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_421() && (func_617(41) || func_613(41)))
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
			if (func_421() && (func_617(49) || func_613(49)))
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
			iVar9 = func_1130(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1131(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1132(iParam0, iVar13, iVar14))
	{
	}
	if (func_1133(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1134(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1135(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1136(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1137(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_620(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_421() && (func_617(38) || func_613(38)))
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
			if (func_421() && (func_617(39) || func_613(39)))
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
			if (func_421() && (func_617(49) || func_613(49)))
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
		if (func_421() && (func_617(38) || func_613(38)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_740(_create_var_string(2, sVar0), _create_var_string(2, func_1139(func_615(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_421() && (func_617(39) || func_613(39)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_421() && (func_617(49) || func_613(49)))
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
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1138(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_622(int iParam0)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_623(int iParam0, int iParam1)
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

bool func_624(int iParam0, int iParam1)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_625(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return false;
	}
	return func_1141(iParam0);
}

void func_626(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return;
	}
	func_1142(iParam0);
	func_1143(iParam0);
}

int func_627(int iParam0)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_628(int iParam0, bool bParam1)
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
	if (func_603(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1144(iVar0) || func_122(iVar0))
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

int func_629(int iParam0, bool bParam1)
{
	if (!func_603(iParam0, 0))
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

void func_630(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_717(iParam0))
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

bool func_631(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1055(bParam0));
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
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_714(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1145((386 + iVar28), 1);
			if (func_1146(iParam0, &Var0, iVar5, 0))
			{
				if (func_1147(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1148(iParam0, Var0, iVar5, 0) };
					func_1149(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_631(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_633(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1150(iParam0, iParam1);
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

bool func_633(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_635(iParam0))
	{
		return false;
	}
	if (!func_631(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_634(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_629(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_630(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1151(iVar0);
			}
		}
		if (!func_1123(iParam0, &uVar1, 1, 0, 0))
		{
			func_1119(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1152(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_632(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_632(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_632(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1110())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1153(iVar0))
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
				iVar7 = func_1154(Global_35, 2, 0, 1);
				if ((((func_717(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_625(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_717(iVar7) && func_625(24))
				{
					if (!func_632(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_632(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
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
		func_352(480, 1);
	}
	return true;
}

bool func_635(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_636(int iParam0, int iParam1, int iParam2)
{
	if (!func_635(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_717(iVar4))
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
	if (func_374(611073244, 1, 0) && iParam2 == -897553835)
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
		func_671(func_1155(iParam0), func_670(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_354((*Global_1835011)[14]->f_1, 1))
			{
				func_352(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_631(0))
	{
		if (func_633(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_676(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_637(int iParam0)
{
	if ((iParam0 == -615217896 && !func_365()) || iParam0 != -615217896)
	{
		if (func_1156(Global_35, iParam0, &uVar0))
		{
			func_655(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_661();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_661();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_661();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_659();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_657();
			break;
	}
}

void func_638(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_657();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_658();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_659();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_660();
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
			func_661();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1157();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1158();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_639(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_640(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_641(int iParam0)
{
	bVar0 = func_623(iParam0, -2017733358);
	if (func_1159() < 3)
	{
		if (bVar0)
		{
			if (func_1161(func_1160(iParam0), iParam0))
			{
				func_671(79, func_670(func_1160(iParam0)), 1);
			}
			else
			{
				func_671(78, func_670(func_1160(iParam0)), 1);
			}
		}
		else
		{
			func_671(80, func_670(func_1162(iParam0)), 1);
		}
	}
}

bool func_642()
{
	if (((((func_1163(839908568, 400) || func_1163(-1134030454, 400)) || func_1163(623353496, 400)) || func_1163(-344413337, 400)) || func_1163(-1664948962, 400)) || func_1163(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_643(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_751(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_568(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_569(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_644(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_619(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_621(51, 0, 0, 0, 0, -1, 0);
			func_1164(8192);
			break;
		case 581047644:
			func_619(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_621(51, 0, 0, 0, 0, -1, 0);
			func_1164(524288);
			break;
		case -644199619:
			func_619(39, 0, 0, 0, 0, 0, 1, 0);
			func_621(39, 0, 0, 0, 0, -1, 0);
			func_1165(16);
			break;
		case 684296857:
			func_619(41, 0, 0, 0, 0, 0, 1, 0);
			func_621(41, 0, 0, 0, 0, -1, 0);
			func_1166(8);
			break;
		case 466137807:
			func_619(49, 0, 0, 0, 0, 0, 1, 0);
			func_621(49, 0, 0, 0, 0, -1, 0);
			func_1167(16);
			break;
		case -1087522507:
			func_619(43, 0, 0, -1791518714, func_1168(1), 0, -1, 0);
			func_1169(1);
			break;
		case -405829000:
			func_619(43, 0, 0, -2087881550, func_1168(2), 0, -1, 0);
			func_1169(2);
			break;
		case 378660860:
			func_619(43, 0, 0, 1908068621, func_1168(4), 0, -1, 0);
			func_1169(4);
			break;
		case 1566111097:
			func_619(43, 0, 0, 1611247019, func_1168(8), 0, -1, 0);
			func_1169(8);
			break;
		case 1276007140:
			func_619(43, 0, 0, 1319635688, func_1168(16), 0, -1, 0);
			func_1169(16);
			break;
	}
}

void func_645(int iParam0)
{
	if (func_1170() == 1)
	{
		if (func_613(39))
		{
			func_352(342, 0);
		}
		else
		{
			func_352(343, 0);
			func_1165(1);
		}
	}
	if (func_1170() >= 30)
	{
		func_352(344, 0);
	}
	func_619(39, 0, 0, 0, 0, 0, -1, 0);
	func_621(39, 0, 0, func_1170(), 30, 1, 0);
}

void func_646(int iParam0)
{
	if (func_1171() == 1)
	{
		if (func_613(49))
		{
			func_352(409, 0);
		}
		else
		{
			func_352(410, 0);
			func_1167(1);
		}
	}
	if (func_1171() >= 10)
	{
		func_352(411, 0);
	}
	func_619(49, 0, 0, 0, 0, 0, -1, 0);
	func_621(49, 0, 0, func_1171(), 10, 1, 0);
}

void func_647(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_352(437, 0);
			func_352(440, 0);
			func_1172(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_619(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_621(51, 0, 0, sVar0, func_1130(-949689219, 20), 1, 0);
			func_1164(1);
			func_491(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1172(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_619(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_621(51, 0, 0, sVar0, func_1130(-1248968496, 20), 1, 0);
			func_1164(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1172(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_619(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_621(51, 0, 0, sVar0, func_1130(1706369307, 20), 1, 0);
			func_1164(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1172(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_619(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_621(51, 0, 0, sVar0, func_1130(1520110311, 20), 1, 0);
			func_1164(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_352(438, 0);
			func_1172(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_619(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_621(51, 0, 0, sVar0, func_1130(-1992824800, 20), 1, 0);
			func_1164(32768);
			break;
		default:
			func_352(439, 0);
			break;
	}
}

void func_648()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_649(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_613(43))
		{
			if (iParam0 == 281887510)
			{
				func_352(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_352(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_352(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_352(400, 0);
			}
		}
		else if (func_623(iParam0, 412399755))
		{
			func_1173(-1791518714);
			if (func_1174() == 0)
			{
				func_394(0, 10);
				iVar1 = func_1175(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_613(44))
		{
			if (iParam0 == -222563712)
			{
				func_352(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_352(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_352(401, 0);
			}
		}
		else if (func_623(iParam0, 709057512))
		{
			func_1173(-2087881550);
			if (func_1174() == 1)
			{
				func_394(0, 10);
				iVar1 = func_1175(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_613(45))
		{
			if (iParam0 == 2116770557)
			{
				func_352(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_352(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_352(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_352(398, 0);
			}
		}
		else if (func_623(iParam0, -1478961327))
		{
			func_1173(1908068621);
			if (func_1174() == 2)
			{
				func_394(0, 10);
				iVar1 = func_1175(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1178(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1179(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1128(48);
					}
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_613(46))
		{
			if (iParam0 == 2085530337)
			{
				func_352(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_352(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_352(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_352(406, 0);
			}
		}
		else if (func_623(iParam0, -1238404098))
		{
			func_1173(1611247019);
			if (func_1174() == 3)
			{
				func_394(0, 10);
				iVar1 = func_1175(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_613(47))
		{
			if (iParam0 == -1521783510)
			{
				func_352(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_352(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_352(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_352(403, 0);
			}
		}
		else if (func_623(iParam0, 1160548794))
		{
			func_1173(1319635688);
			if (func_1174() == 4)
			{
				func_394(0, 10);
				iVar1 = func_1175(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1176(iParam0) < func_1177(iParam0))
					{
						func_619(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_621(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_650(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1178(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1179(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1128(48);
		}
	}
}

void func_651(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_374(func_1180(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1181(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1182(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_652(int iParam0, int iParam1, int iParam2)
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
				func_643(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_643(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_643(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_643(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_643(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_643(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_643(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_643(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_643(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_643(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_643(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_643(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_643(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1183())
			{
				func_643(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_643(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_643(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_643(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_643(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_643(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_643(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_643(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_643(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_643(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_643(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_643(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_643(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_653(int iParam0)
{
	if (func_613(41))
	{
		func_352(363, 0);
	}
	else
	{
		func_352(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1184(-1865241121);
			func_1185(-642026005);
			func_1186(-642026005);
			func_394(0, 10);
			break;
		case -2108314374:
			func_1184(2117142684);
			func_1185(-940584364);
			func_1186(-940584364);
			func_394(0, 10);
			break;
		case -1193798153:
			func_1184(-1409326024);
			func_1185(1972645282);
			func_1186(1972645282);
			func_394(0, 10);
			break;
		case -787702678:
			func_1184(-641744968);
			func_1185(1667205433);
			func_1186(1667205433);
			func_394(0, 10);
			break;
		case -804542901:
			func_1184(-946988203);
			func_1185(1362715885);
			func_1186(1362715885);
			func_394(0, 10);
			break;
		case -1696275132:
			func_1184(-646136018);
			func_1185(1053540370);
			func_1186(1053540370);
			func_394(0, 10);
			break;
		case -161595323:
			func_1184(-955835837);
			func_1185(-1100103852);
			func_1186(-1100103852);
			func_394(0, 10);
			break;
		case -1114363619:
			func_1184(-179276075);
			func_1185(-1409869209);
			func_1186(-1409869209);
			func_394(0, 10);
			break;
		case -368407134:
			func_1184(-492711560);
			func_1185(-1760235357);
			func_1186(-1760235357);
			func_394(0, 10);
			break;
		case 1997759228:
			func_1184(1764383959);
			func_1185(-138366827);
			func_1186(-138366827);
			func_394(0, 10);
			break;
		case 1265573293:
			func_1184(317501533);
			func_1185(-1261163843);
			func_1186(-1261163843);
			func_394(0, 10);
			break;
		case -1030441283:
			func_1184(817753087);
			func_1185(-963523016);
			func_1186(-963523016);
			func_394(0, 10);
			break;
		case -1490884871:
			func_1184(576606016);
			func_1185(560825326);
			func_1186(560825326);
			func_394(0, 10);
			break;
		case -395458616:
			func_1184(814934957);
			func_1185(858269539);
			func_1186(858269539);
			break;
	}
}

void func_654(int iParam0, int iParam1)
{
	func_1187(iParam0, iParam1, &uVar0);
}

int func_655(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_714(iParam1, 1, 0) };
		iParam3 = func_715(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1188(iParam1, iParam2, func_702(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1189(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_702(iParam3, 1)])
			{
				func_713(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1190(32768) && iParam1 != &Global_1946804->f_57[func_702(iParam3, 1)])
			{
				func_1191();
				func_713(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_713(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1192(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_713(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1193(0);
			func_1194(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_713(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_656(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1154(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1154(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1195("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1196(&Var3, iVar2, iVar0, iVar1))
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
						func_1197(iVar0);
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

void func_657()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_658()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_659()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_660()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_661()
{
	func_1198();
	func_1199();
	func_1200();
}

void func_662(int iParam0, int iParam1, bool bParam2)
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

void func_663(int iParam0, bool bParam1)
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
	func_1138(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_664(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_665(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_666(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_667(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_668(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_669(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_670(int iParam0)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_671(int iParam0, int iParam1, bool bParam2)
{
	func_709(iParam0, &iVar0, &iVar1);
	if (!func_710(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1201(iParam0, 1024))
	{
		return;
	}
	func_711(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_672(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_709(iParam0, &iVar0, &iVar1);
	if (!func_710(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1201(iParam0, 1024))
	{
		return;
	}
	func_711(iVar0, iVar1);
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

int func_673()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1126())
	{
		return func_674();
	}
	iVar4 = (func_1126() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1126())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1202(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1127(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_674()
{
	iVar0 = get_random_int_in_range(0, func_1126());
	return func_1127(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_675(int iParam0)
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

bool func_676(int iParam0, int iParam1, int iParam2)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_714(iParam0, 0, 1) };
	Var5 = { func_1148(iParam0, Var0, Var0.f_4, 0) };
	return func_1203(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_677(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_627(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1204(81053684, 0) <= 0)
			{
				func_713(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_713(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1205(iParam0);
			if (func_1206(iVar0))
			{
				func_949(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_713(30, iParam0, 0, 0, 0);
			}
			if (func_704() == -2125499975 || func_704() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_713(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_704() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_713(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1207(-525676072, 0))
			{
				if (func_1208(-525676072, &iVar1))
				{
					func_713(33, iVar1, 0, 0, 0);
				}
			}
			func_713(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1209(99217379))
		{
			func_655(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_626(24);
		if (func_656(&iVar2, 0))
		{
			func_632(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_678(int iParam0)
{
	if (func_623(iParam0, 943695443))
	{
		func_1210(0, iParam0);
	}
	else if (func_623(iParam0, -2096528786))
	{
		func_1210(1, iParam0);
	}
	else if (func_623(iParam0, -1094167013))
	{
		func_1210(2, iParam0);
	}
	else if (func_623(iParam0, 1936654645))
	{
		func_1210(3, iParam0);
	}
	else if (func_623(iParam0, 1306489306))
	{
		func_1210(4, iParam0);
	}
	else if (func_623(iParam0, 435762317))
	{
		func_1210(5, iParam0);
	}
	else if (func_623(iParam0, 1259363210))
	{
		func_1210(6, iParam0);
	}
	else if (func_623(iParam0, 881398259))
	{
		func_1210(7, iParam0);
	}
	else if (func_623(iParam0, -541549214))
	{
		func_1210(8, iParam0);
	}
	else if (func_623(iParam0, 130796156))
	{
		func_1210(-1, iParam0);
	}
}

int func_679(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1211(&Var4, 1356624740);
	return func_1212(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_680(int iParam0)
{
	if (!func_603(iParam0, 0))
	{
		return Var0;
	}
	if (func_623(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_623(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_623(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_623(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_681(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_354((*Global_1835011)[4]->f_1, 1))
				{
					func_352(109, 1);
				}
			}
			break;
	}
}

void func_682(int iParam0, char* sParam1)
{
	sVar0 = func_1214(func_1213(0));
	func_733(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1215(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_683(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_603(iParam0, 0))
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
	if (!func_1216())
	{
		func_1217(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1218(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1218(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_624(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_622(iParam0);
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
	else if (!func_1219(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1220(_create_var_string(10, &cVar2, _create_var_string(0, func_670(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_623(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_670(iParam0));
	}
	func_733(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_684(int iParam0, int iParam1)
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

struct<10> func_685(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_686(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_687(int iParam0, int iParam1)
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

bool func_688(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1221(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1221(iParam0, Var2, 1))
				{
					if (func_1222(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1222(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_352(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_224(0, 0, 1))
		{
			func_394(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_689(int iParam0)
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

void func_690(int iParam0)
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
		func_352(iVar0, 0);
	}
}

void func_691()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1223(0);
			_unlock_set_unlocked(-121456797, false);
			func_1224();
		}
		return;
	}
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1225();
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
	func_1223(1);
}

void func_692()
{
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_345(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_693()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1226(0);
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
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1226(1);
}

void func_694()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1227(15000, 0, 0, 0, 1);
			func_1226(0);
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
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_310(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1226(1);
}

void func_695()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_374(1191437462, 1, 0) && !func_218((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_345(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1228(1))
			{
				func_667(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_374(1119149048, 1, 0) && !func_218((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_345(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1228(2))
			{
				func_667(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1228(4))
		{
			func_667(4);
		}
		if (func_1228(0))
		{
			func_1229(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_374(1191437462, 1, 0))
			{
				func_698(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_374(1119149048, 1, 0))
			{
				func_698(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1228(1))
		{
			func_1229(1);
		}
		if (func_1228(2))
		{
			func_1229(2);
		}
		if (func_1228(4))
		{
			func_1229(4);
		}
		if (!func_1228(0))
		{
			func_667(0);
		}
	}
}

void func_696()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_354((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1230() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_630(127400949);
		if (func_632(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1230() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1231(-2055673461, Var1, 1423542233);
		func_1231(-202131179, Var1, -1264898804);
		func_1231(2013836545, Var1, 1592019450);
		func_1231(1497476650, Var1, 1117400455);
		func_1231(1063571467, Var1, 1150213537);
		func_1231(2107224237, Var1, 1598825281);
		func_1231(1747981656, Var1, -712527121);
		func_1231(-1371140647, Var1, 454332195);
		func_1231(-19142973, Var1, 256105670);
		func_1231(-2074737817, Var1, -1328061889);
		func_1231(-1114256243, Var1, -782241404);
		func_1231(-1653277288, Var1, 1669853467);
		func_1231(1869398132, Var1, -1559225678);
		func_1231(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_717(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_625(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_625(24) && func_717(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_717(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_625(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_697()
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

int func_698(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1124(iParam0, 1);
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
			func_683(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_374(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_680(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_607(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_607(iParam0, 0, 0) - iParam1) < 0)
		{
			func_698(iParam0, func_607(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_622(iParam0) == -427144552)
	{
		if (!func_1232(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1233(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_631(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_683(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1234(iParam0, iParam1);
	return 1;
}

bool func_699(int iParam0)
{
	switch (func_627(iParam0))
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

void func_700(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_627(iParam0))
	{
		case -2061583405:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1235(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1236();
	}
	if (bParam1)
	{
		func_1237(0, 0);
	}
}

int func_701(int iParam0)
{
	Var0 = { func_714(iParam0, 1, 0) };
	return func_715(Var0.f_4);
}

int func_702(int iParam0, int iParam1)
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

void func_703(int iParam0)
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
		iVar0 = func_702(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1238(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_704()
{
	return Global_1946804->f_1;
}

bool func_705(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1239(iParam6);
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
		func_1241(uParam0, func_1240(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_702(iVar3, 1);
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
							if (func_1242(iVar3) && func_1243(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1244(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_706(int iParam0, int iParam1)
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

int func_707(int iParam0, int iParam1)
{
	vVar0 = { func_706(iParam0, iParam1) };
	return vVar0.x;
}

void func_708(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_709(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_710(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1245(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1246(iParam0))
	{
		return false;
	}
	if (func_1247(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1201(iParam0, 1)) || func_82(32768))
	{
		if (!func_1201(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1248())
	{
		return false;
	}
	return true;
}

void func_711(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_712(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_713(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1249(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1250(Var0);
}

struct<5> func_714(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1251(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_622(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1148(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1252(bParam1) };
			if (bParam2 && func_1253(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1146(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1146(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1147(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1254(bParam1) };
			switch (func_627(iParam0))
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
			if (func_1255(iParam0, -1823706425))
			{
				Var0 = { func_1148(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1255(iParam0, -1483207246))
			{
				Var0 = { func_1148(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1256(Var0, &Var27, bParam1, 0))
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

int func_715(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1257(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_716(int iParam0)
{
	func_1238(Global_1946804->f_1497.f_1[func_702(iParam0, 1)], 2, 6);
	func_1238(Global_1946804->f_1378.f_1[func_702(iParam0, 1)], 2, 6);
}

bool func_717(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_718(int iParam0)
{
	return iParam0 != 0;
}

int func_719(int iParam0)
{
	iVar0 = -1;
	if (!func_718(iParam0))
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

bool func_720(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_721(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1258(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_722(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_723(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_724(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_725(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_726(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_727(int iParam0, int iParam1)
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

void func_728(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1259(iParam0, iParam6);
	func_1260(iParam0, iParam5);
	func_1261(iParam0, iParam4);
	func_1262(iParam0, iParam3);
	func_1263(iParam0, iParam2);
	func_1264(iParam0, iParam1);
}

bool func_729(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_726(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_725(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_724(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_721(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_722(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_723(iParam0);
	if (iVar5 < 1 || iVar5 > func_727(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_730(int iParam0, bool bParam1)
{
	return func_1102(func_312(), iParam0, bParam1);
}

void func_731(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_732(int iParam0, int iParam1)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1124(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1195("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1196(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_717(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1197(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1197(iVar1);
	}
	return false;
}

var func_733(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1265(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_734()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1266(iVar1);
		if (!_unlock_is_visible(func_1267(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_735()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1266(iVar0);
		if (!_unlock_is_visible(func_1267(iVar1)))
		{
			_unlock_set_visible(func_1267(iVar1), true);
		}
		iVar0++;
	}
}

bool func_736(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1047(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_737(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_544(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_738()
{
	return (func_225(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_739(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_603(iVar0, 0))
	{
		return 0;
	}
	if (!func_1268(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1269(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_623(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_714(iVar0, 0, 1) };
	iVar10 = func_1270(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1271(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1272(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_345(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1227(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_740(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_741(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_733(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_742(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_743(bool bParam0, bool bParam1)
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

void func_744(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1093())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1093())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_220(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_299(iParam0);
	if (func_222(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_222(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1273(1, iVar1);
					func_1273(8, iVar1);
					func_1273(7, iVar1);
					break;
				case 12:
					func_1273(6, iVar1);
					break;
				case 53:
					func_1273(3, iVar1);
					func_1273(7, iVar1);
					func_1273(4, iVar1);
					break;
				case 20:
					func_1273(8, iVar1);
					break;
				case 19:
					func_1273(1, iVar1);
					func_1273(2, iVar1);
					break;
				case 24:
					func_1273(3, iVar1);
					func_1273(9, iVar1);
					func_1273(20, iVar1);
					break;
				case 28:
					func_1273(1, iVar1);
					break;
				case 34:
					func_1273(23, iVar1);
					func_1273(2, iVar1);
					func_1273(18, iVar1);
					break;
				case 29:
					func_1273(0, iVar1);
					func_1273(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1273(0, iVar1);
					func_1273(3, iVar1);
					func_1273(2, iVar1);
					func_1273(11, iVar1);
					func_1273(6, iVar1);
					func_1273(25, iVar1);
					func_1273(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1273(5, iVar1);
					break;
				case 63:
					func_1273(1, iVar1);
					func_1273(3, iVar1);
					break;
				case 37:
					func_1273(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_390(0, 10, 11, 2116153146))
			{
				func_1273(7, iVar1);
				func_1273(4, iVar1);
			}
			else if (iParam0 == func_390(0, 7, 11, -379687487))
			{
				func_1273(8, iVar1);
				func_1273(15, iVar1);
			}
			else if (iParam0 == func_390(0, 8, 11, -1386089015))
			{
				func_1273(3, iVar1);
			}
			else if (iParam0 == func_390(0, 11, 11, -1952009645))
			{
				func_1273(6, iVar1);
				func_1273(3, iVar1);
			}
			else if (iParam0 == func_390(0, 12, 11, 2065895756))
			{
				func_1273(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1274()));
	if (!func_1275(629))
	{
		func_352(629, 0);
	}
}

int func_745(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_746(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_747(int iParam0, int iParam1, var uParam2)
{
	if (!func_746(iParam0))
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

int func_748()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_749(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1276(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_748())
	{
		return -1;
	}
	iVar0 = func_749(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_515(iVar1, 0);
	func_583(iVar1, 0);
	func_1277(iVar1, 0);
	func_1278(iVar1, 0);
	func_1279(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1280(iVar1, iParam4);
	}
	return iVar1;
}

int func_751(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_374(1811977508, 1, 0))
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
			if (func_603(iVar25, 0) && func_623(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_752(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_753(int iParam0)
{
	if (!func_217(iParam0))
	{
		return 0;
	}
	cVar0 = func_392(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_754(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_755(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1281(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1282() == 0 && !func_1283(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1284(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1285();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1286(Global_1310720->f_21))
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
			vVar7 = { func_1287(iVar0, iVar1) };
			bVar11 = func_1288(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_422(vVar7)) && func_1289(iVar0, bParam8, iParam12)) && !func_1290(iVar0)) || bVar11)
			{
				if (func_1291(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_756(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1292(vParam0);
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

void func_757()
{
	disable_script_brain_set(1);
}

void func_758()
{
}

void func_759()
{
	disable_script_brain_set(2);
}

bool func_760(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_761(char* sParam0)
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

void func_762(int iParam0)
{
	if (func_760(iParam0, 1))
	{
		func_1293(1);
	}
}

int func_763()
{
	return -1904156936;
}

bool func_764(int iParam0)
{
	if (!func_217(iParam0))
	{
		return false;
	}
	switch (func_222(iParam0))
	{
		case 1:
			iVar0 = func_299(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_299(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_765()
{
	return 166188472;
}

int func_766()
{
	return 2015838421;
}

int func_767()
{
	return 207908017;
}

var func_768(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_769(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_770(var uParam0)
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

int func_771(var uParam0, int iParam1)
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

char* func_772(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1294(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1295(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1296(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_773(var uParam0, char* sParam1)
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

int func_774(var uParam0)
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

void func_775(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_776(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_777()
{
	return Global_1572864->f_8;
}

void func_778(char[4] cParam0, int iParam1)
{
	func_1297(cParam0, iParam1);
	func_1298(cParam0, iParam1, 26);
}

int func_779(var uParam0)
{
	return 1;
}

int func_780(char[4] cParam0)
{
	if (!func_177(iVar906, 1))
	{
		func_1299(cParam0);
		if (!func_477(-319093529, 1))
		{
			func_334(-319093529, -2060316038, -1212621019, -1, 1, 1, 0);
		}
		Global_43838 = 0;
		set_player_control(player_id(), false, 0, false);
		func_179(&uLocal_909, 1);
		func_99(cParam0, 33554432);
		func_1300(cParam0, "MultiStart");
	}
	if (!func_477(-319093529, 1))
	{
		func_334(-319093529, -2060316038, -1212621019, -1, 1, 1, 0);
	}
	func_1301();
	if (func_1302())
	{
		func_485(&uLocal_909, 1);
		return 1;
	}
	return 0;
}

int func_781(char[4] cParam0)
{
	hide_hud_and_radar_this_frame();
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	stop_pad_shake(0);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	if ((_0xfbf161fcfec8589e("ChapterTitle_IntroCh01", 2, 0, &uVar0) || _0xfbf161fcfec8589e("ChapterTitle_IntroCh01", 1, 0, &uVar0)) || func_1303(cParam0, 512))
	{
		_0xa201a3d0ac087c37("ChapterTitle_IntroCh01");
		do_screen_fade_out(0);
		func_99(cParam0, 33554432);
		func_1300(cParam0, "MultiStart");
		if (!func_477(-319093529, 1))
		{
			func_334(-319093529, 1137976064, -1212621019, -1, 1, 1, 0);
		}
		func_1304(0);
		return 1;
	}
	return 0;
}

int func_782(char[4] cParam0)
{
	func_1305(cParam0);
	func_1306(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_783(var uParam0)
{
	if (func_10(iVar1306))
	{
		func_11(&iLocal_1309, 1, 1);
	}
	_reset_minimap_fow(0);
	hide_hud_and_radar_this_frame();
	return 1;
}

void func_784(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1308(cParam0, iParam1);
	func_1298(cParam0, iParam1, iParam2);
	func_1309(cParam0, &iParam3, iParam1, 0);
	func_1309(cParam0, &iParam4, iParam1, 2);
	func_1309(cParam0, &iParam5, iParam1, 4);
	func_1309(cParam0, &iParam6, iParam1, 5);
	func_1309(cParam0, &iParam7, iParam1, 7);
	func_988(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1310(cParam0, iParam1, cVar0);
	func_1311(cParam0, iParam1, iParam10);
}

int func_785(var uParam0)
{
	if (!func_1312(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_786(char[4] cParam0)
{
	hide_hud_and_radar_this_frame();
	if (!func_955(cParam0))
	{
		return 0;
	}
	pin_interior_in_memory(get_interior_at_coords(-1322.251f, 2439.241f, 308.6071f));
	if (!func_477(-319093529, 1))
	{
		func_334(-319093529, -2060316038, -1212621019, -1, 1, 1, 0);
	}
	func_1299(cParam0);
	if (func_8(cParam0, 8))
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(2000);
		}
	}
	func_1313();
	return 1;
}

int func_787(char[4] cParam0)
{
	if (!func_477(-319093529, 1))
	{
		func_334(-319093529, 1137976064, -1212621019, -1, 1, 1, 0);
	}
	func_414(1, 0);
	func_179(&uLocal_909, 2048);
	if (!func_1314())
	{
		return 0;
	}
	func_167(cParam0);
	if (!bVar1262)
	{
		func_1315();
		iLocal_1265 = 1;
	}
	if (!func_1316(1, 0, 0))
	{
		return 0;
	}
	if (!is_entity_dead(&(uLocal_1064[2])))
	{
		func_1317(&(iLocal_1084[2]), func_250(10, 5), 2, 1073741824);
		func_1318(&(uLocal_1064[2]), &(iLocal_1084[2]), 0, -1, 1);
		task_stand_still(&(uLocal_1064[2]), -1);
	}
	func_1319(0);
	func_1304(1);
	_0x37d7bdba89f13959("Title_GameIntro");
	func_99(cParam0, 4194304);
	func_1320(cParam0);
	func_1322(cParam0, func_1321("1-Right"));
	func_1300(cParam0, "2-Left");
	func_1040(1485195808);
	func_1323();
	func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
	func_480(1659012492, 1, 0, 0, 0, 0, 1, 0);
	func_480(1970514606, 1, 0, 0, 0, 0, 1, 0);
	_reset_minimap_fow(0);
	iLocal_1265 = 0;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(3000);
	}
	return 1;
}

int func_788(char[4] cParam0)
{
	func_1325(cParam0);
	func_1326(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (!func_177(iVar902, 2))
			{
				if (_is_ped_getting_into_a_mount_seat(Global_35, true))
				{
					func_1327(Global_35, 0);
					func_179(&uLocal_905, 2);
				}
			}
			if (func_1328(cParam0, &(uLocal_1064[1]), &(iLocal_1108[37]), 512, 4, " MISSION_MESSAGE_04"))
			{
				if (!func_177(iVar902, 8192))
				{
					func_1329(0);
					func_1304(2);
					func_1319(1);
					func_179(&uLocal_905, 8192);
				}
			}
			if (func_1328(cParam0, &(uLocal_1064[1]), &(iLocal_1108[33]), 256, 6, " MISSION_MESSAGE_06"))
			{
				_0xc99f104bdf8c7f5a(&(uLocal_1064[1]), 1);
				func_966(cParam0);
				func_932(cParam0, 4194304);
				func_210();
				func_485(&uLocal_907, 4194304);
				iLocal_343 = 6;
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1330(&(uLocal_1064[1]), 1.1f, 0, 1045220557, 1, 10f, 12f, 16f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			}
			else if (is_waypoint_playback_going_on_for_ped(&(uLocal_1064[1]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_1064[1]), 0f, 0, 0.2f, 0);
			}
			if (!func_177(iVar903, 32768))
			{
				if (func_1331(&(uLocal_1064[1]), func_473(10, 4), 1) < 15f)
				{
					if (does_entity_exist(&(uLocal_1064[1])) && does_entity_exist(Global_35))
					{
						vVar0 = { get_offset_from_entity_given_world_coords(&(uLocal_1064[1]), get_entity_coords(Global_35, true, false)) };
					}
					if (vVar0.x > 0f)
					{
						task_follow_nav_mesh_to_coord(&(uLocal_1064[1]), func_473(10, 4), 1f, 20000, 3f, 0, func_494(10, 4));
					}
					else
					{
						task_follow_nav_mesh_to_coord(&(uLocal_1064[1]), func_473(10, 8), 1f, 20000, 3f, 0, func_494(10, 8));
					}
					func_179(&uLocal_906, 32768);
				}
			}
			if ((func_926(Global_35, &(uLocal_1064[2]), 1, 1) < 10f && !_is_anim_scene_started(&(uLocal_182[1]), false)) || func_1332(Global_35, &(iLocal_1108[61]), 1, 0))
			{
				func_134(cParam0, 2);
			}
			if ((func_1331(&(uLocal_1064[1]), func_473(10, 4), 1) < 7.5f || func_1331(&(uLocal_1064[1]), func_473(10, 8), 1) < 7.5f) && _is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				disable_control_action(0, -17122892, false);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			disable_control_action(0, -17122892, false);
			if (!func_1333(-1, !is_screen_faded_out()))
			{
				return 0;
			}
			if (!func_1334())
			{
				func_1330(&(uLocal_1064[1]), 1.1f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			}
			if (func_1335(cParam0))
			{
				return 1;
			}
			if (func_1332(Global_35, &(iLocal_1108[61]), 1, 0))
			{
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1336(cParam0, "MultiStart");
			return 1;
	}
	return 0;
}

int func_789(char[4] cParam0)
{
	func_1335(cParam0);
	func_1337(sVar874, 0);
	func_1338(0);
	func_1010(&(uLocal_1064[1]), 1607151610, 0);
	func_165(1, 1);
	return 1;
}

int func_790(char[4] cParam0)
{
	func_1320(cParam0);
	if (func_120(cParam0, 4) && !func_128(cParam0, 2))
	{
	}
	else
	{
		func_1300(cParam0, "2-Left");
	}
	func_179(&uLocal_904, 33554432);
	return 1;
}

int func_791(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		func_1299(cParam0);
		if (!func_1339(cParam0))
		{
			return 0;
		}
		if (!func_177(iLocal_92, 4))
		{
			func_1327(&(uLocal_1064[2]), 0);
		}
		if (!func_177(iLocal_92, 2))
		{
			func_1327(&(uLocal_1064[1]), 0);
		}
		if (func_857(Global_35, 1, 0, 0) != -164645981)
		{
			_give_weapon_to_ped_2(Global_35, -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
	}
	else
	{
		func_1335(cParam0);
	}
	if (!func_1333(-1, !is_screen_faded_out()))
	{
		return 0;
	}
	func_1340(cParam0);
	if ((!_is_anim_scene_started(&(uLocal_182[1]), false) || _is_anim_scene_finished(&(uLocal_182[1]), false)) || iVar347 == 8)
	{
		func_1329(1);
		func_1319(2);
		func_1304(3);
		return 1;
	}
	return 0;
}

int func_792(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_26(&uLocal_1457))
		{
			func_247(&uLocal_1457);
		}
		if (!has_ped_got_weapon(&(uLocal_1064[1]), -164645981, 0, false))
		{
			_give_weapon_to_ped_2(&(uLocal_1064[1]), -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		if (!has_ped_got_weapon(&(uLocal_1064[2]), -164645981, 0, false))
		{
			_give_weapon_to_ped_2(&(uLocal_1064[2]), -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
	}
	display_radar(true);
	display_hud(true);
	func_1341(&(cParam0->f_7375), 2, 1);
	func_479(cParam0, &(uLocal_1064[1]), 1);
	func_1324(cParam0, &(uLocal_1064[2]), 1105014447, 422991367, 1, 1);
	set_ped_config_flag(Global_35, 338, true);
	set_ped_config_flag(Global_35, 345, true);
	set_ped_config_flag(&(iLocal_1084[0]), 219, false);
	func_1342();
	if (!func_26(&uLocal_1457) || func_1343(&uLocal_1457) > 2000)
	{
		return 1;
	}
	return 0;
}

int func_793(char[4] cParam0)
{
	func_1344(cParam0);
	func_1345(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (!func_177(iVar902, 16))
			{
				if (get_ped_desired_move_blend_ratio(&(iLocal_1084[2])) > 1f && func_926(&(iLocal_1084[2]), Global_35, 1, 1) > 10f)
				{
					if (func_1346(cParam0) == -1)
					{
						func_135(cParam0, 1);
						func_179(&uLocal_905, 16);
					}
				}
			}
			func_1330(&(uLocal_1064[2]), 1.1f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			if (iVar624 >= 7 && iVar623 >= 9)
			{
				if (!func_177(iVar901, 536870912))
				{
					_0x12e09e278c6c29b7(get_player_index());
					remove_ped_from_group(&(uLocal_1064[2]));
					remove_ped_from_group(&(uLocal_1064[1]));
					remove_group(iVar1168);
					func_1347(0);
					iLocal_393[4] = 0;
					func_479(cParam0, &(uLocal_1064[2]), 1);
					func_99(cParam0, 64);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			set_ped_reset_flag(Global_35, 192, true);
			func_1348(Global_35, func_473(3, 5), 0, 40f, 15f, 10f, 0f, 1, 1, 1, 0);
			if ((func_923(&(iLocal_1084[0])) || ((!is_ped_on_mount(Global_35) && func_1332(Global_35, &(iLocal_1108[45]), 1, 0)) && func_1332(&(iLocal_1084[0]), &(iLocal_1108[45]), 1, 0))) || (((iVar344 >= 2 && !is_ped_on_mount(Global_35)) && func_926(Global_35, &(uLocal_1064[1]), 1, 1) < 5f) && func_923(&(iLocal_1084[0]))))
			{
				if (does_blip_exist(iVar1045))
				{
					remove_blip(&iLocal_1048);
				}
				if (does_entity_exist(&(iLocal_1084[0])))
				{
					if (!func_923(&(iLocal_1084[0])))
					{
						clear_ped_tasks(&(iLocal_1084[0]), 1, 0);
						task_stand_still(&(iLocal_1084[0]), -1);
					}
				}
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (iVar623 == 10 && iVar624 == 8)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_794(var uParam0)
{
	func_165(1, 1);
	use_waypoint_recording_as_assisted_movement_route(sVar875, 0, 1f, 0.5f, 1);
	use_waypoint_recording_as_assisted_movement_route(sVar876, 0, 1f, 0.5f, 1);
	return 1;
}

int func_795(var uParam0)
{
	return 1;
}

int func_796(char[4] cParam0)
{
	if (!func_195(1))
	{
		return 0;
	}
	if (!func_1349(!is_screen_faded_out()))
	{
		return 0;
	}
	if (!func_1333(-1, !is_screen_faded_out()))
	{
		return 0;
	}
	func_1340(cParam0);
	if (!func_8(cParam0, 8))
	{
		func_1350(0, func_250(3, 5), 0);
		func_1350(1, func_250(3, 4), 0);
		func_1350(2, func_250(3, 3), 0);
		func_1318(Global_35, &(iLocal_1084[0]), 0, -1, 1);
		func_1318(&(uLocal_1064[1]), &(iLocal_1084[1]), 0, -1, 1);
		func_1318(&(uLocal_1064[2]), &(iLocal_1084[2]), 0, -1, 1);
		clear_ped_tasks(&(iLocal_1084[0]), 1, 0);
		task_stand_still(&(iLocal_1084[0]), -1);
		_0x2208438012482a1a(&(uLocal_1064[1]), true, false);
		_0x2208438012482a1a(&(uLocal_1064[2]), false, false);
		_0x2208438012482a1a(Global_35, false, false);
		func_1342();
	}
	func_1329(3);
	func_1319(4);
	func_1304(5);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
	func_1351(Global_35);
	return 1;
}

int func_797(char[4] cParam0)
{
	if (func_497(Global_35, 0))
	{
		clear_ped_tasks(Global_35, 1, 0);
	}
	set_player_control(player_id(), true, 0, false);
	Global_1911667 = -547506804;
	_0x9c113883487fd53c(-547506804, 0);
	iVar0 = get_blip_from_entity(&(iLocal_1084[0]));
	if (does_blip_exist(iVar0))
	{
		remove_blip(&iVar0);
	}
	set_ped_config_flag(Global_35, 338, true);
	set_ped_config_flag(Global_35, 345, true);
	func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
	func_1324(cParam0, &(uLocal_1064[2]), 1105014447, 422991367, 0, 1);
	set_ped_config_flag(Global_35, 416, true);
	if (!func_8(cParam0, 8))
	{
		clear_area(func_473(3, 5), 200f, 1536);
		if (!func_1339(cParam0))
		{
			return 0;
		}
	}
	func_1352();
	return 1;
}

int func_798(char[4] cParam0)
{
	func_1353(cParam0);
	func_1354(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (!_is_ped_getting_into_a_mount_seat(Global_35, true) && &iLocal_393[4] == 12)
			{
				func_463(1);
				set_ped_config_flag(&(iLocal_1084[0]), 136, false);
				set_ped_config_flag(&(iLocal_1084[0]), 419, true);
				set_ped_config_flag(&(iLocal_1084[0]), 412, true);
				func_135(cParam0, 15);
				func_134(cParam0, 1);
			}
			else
			{
				set_ped_config_flag(&(iLocal_1084[0]), 136, false);
			}
			break;
		case 1:
			if (func_177(iVar901, 8))
			{
				func_1355(cParam0);
			}
			if ((is_entity_in_volume(Global_35, &(iLocal_1108[13]), true, 0) || is_entity_in_volume(Global_35, &(iLocal_1108[14]), true, 0)) && is_ped_in_cover(Global_35, 0, 0))
			{
				func_463(0);
				set_ped_config_flag(Global_35, 483, true);
				set_ped_config_flag(Global_35, 416, false);
				if (does_blip_exist(iVar1045))
				{
					func_1356(iVar1045);
				}
				set_ped_config_flag(Global_35, 303, true);
				iLocal_441[0] = 0;
				func_135(cParam0, -1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1357() || func_1358(&uLocal_1327) > 60f)
			{
				func_463(1);
				func_247(&uLocal_1349);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1359() && func_1343(&uLocal_1349) > 4000)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_799(var uParam0)
{
	func_165(0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_800(var uParam0)
{
	return 1;
}

int func_801(char[4] cParam0)
{
	func_1360();
	func_1361();
	if (!func_1349(!is_screen_faded_out()))
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		if (!func_1362(cParam0, 1))
		{
			return 0;
		}
		if (!func_1333(-1, !is_screen_faded_out()))
		{
			return 0;
		}
		func_1340(cParam0);
		if (!func_1363(cParam0))
		{
			return 0;
		}
		func_1364(cParam0);
		func_1365(cParam0);
		clear_area(func_473(13, 3), 200f, 1536);
		door_system_set_open_ratio(872775928, 0f, 0);
		func_1366(872775928, 1, 1);
		func_1366(-1909593249, 1, 0);
		func_1327(&(uLocal_1064[1]), 0);
		func_1299(cParam0);
		if (func_497(Global_35, 0))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
			_0x72d4cb5db927009c(-1569615261, -1, 0);
			if (!_0xff07cf465f48b830(-1569615261))
			{
				return 0;
			}
			_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
			task_put_ped_directly_into_cover(Global_35, func_473(3, 9), -1, 1, 0f, 1, 0, uVar1006, 0, 1, 0);
			_0x2208438012482a1a(Global_35, true, false);
			func_131(get_entity_coords(Global_35, true, false), 5f, 1, 0, 0, 0, 0);
		}
		if (func_497(&(uLocal_1064[2]), 0))
		{
			_0x72d4cb5db927009c(-1569615261, -1, 0);
			if (!_0xff07cf465f48b830(-1569615261))
			{
				return 0;
			}
		}
		if (!func_1367(get_entity_coords(&(uLocal_1064[1]), true, false), 0))
		{
			set_gameplay_cam_relative_heading(0f, 1f);
		}
	}
	set_ped_config_flag(Global_35, 303, true);
	func_1368();
	return 1;
}

int func_802(char[4] cParam0)
{
	func_1360();
	func_1369();
	func_468(0f);
	set_ped_config_flag(Global_35, 338, true);
	func_1329(4);
	func_1319(5);
	func_1304(6);
	func_1370();
	set_ped_config_flag(Global_35, 345, true);
	if (!func_8(cParam0, 8))
	{
		if (!func_1367(get_entity_coords(&(uLocal_1064[1]), true, false), 0))
		{
			set_gameplay_cam_relative_heading(90f, 1f);
		}
	}
	return 1;
}

int func_803(char[4] cParam0)
{
	func_1371(cParam0, &iLocal_1266);
	func_1372(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (func_1343(&uLocal_1346) > 1000)
			{
				if (!func_1359())
				{
				}
			}
			if (func_177(iVar901, 16) || func_1373(cParam0))
			{
				set_ped_config_flag(Global_35, 303, false);
				func_1329(5);
				func_1374(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_177(iVar901, 128))
			{
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					func_1375();
					func_179(&uLocal_904, 128);
				}
			}
			if (iVar631 == 5)
			{
				func_1376();
				func_247(&uLocal_1315);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1377(cParam0);
			func_1378(cParam0);
			if (iVar354 == 10)
			{
				if (!func_177(iVar901, 256))
				{
					func_135(cParam0, 8);
					if (func_177(iVar901, 536870912))
					{
						func_99(cParam0, 64);
					}
					iLocal_141 = 0;
					iLocal_142 = 0;
					func_179(&uLocal_904, 256);
				}
			}
			if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0) && is_entity_in_volume(&(uLocal_1064[1]), &(iLocal_1108[0]), true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_804(char[4] cParam0)
{
	func_479(cParam0, &(uLocal_1064[1]), 1);
	func_485(&uLocal_904, 268435456);
	if (!func_177(iVar901, 256))
	{
		iLocal_141 = 0;
		iLocal_142 = 0;
		func_179(&uLocal_904, 256);
	}
	func_165(0, 1);
	return 1;
}

int func_805(var uParam0)
{
	return 1;
}

int func_806(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		func_1299(cParam0);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		func_1379(-668482597, 2000, 0, 1, 1, 0, 0, 0);
		iLocal_141 = 4;
		iLocal_142 = 3;
	}
	if (!func_8(cParam0, 8))
	{
		func_135(cParam0, 1);
		func_134(cParam0, 1);
	}
	else if (func_497(Global_35, 0))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
		{
			func_135(cParam0, 1);
			func_134(cParam0, 1);
		}
		else
		{
			func_135(cParam0, 0);
			func_134(cParam0, 0);
		}
	}
	func_956();
	func_1380();
	return 1;
}

int func_807(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_26(&uLocal_1457))
		{
			func_247(&uLocal_1457);
		}
	}
	if (!func_177(iVar904, 134217728))
	{
		func_179(&uLocal_907, 134217728);
	}
	if (!func_26(&uLocal_1457) || func_1343(&uLocal_1457) > 2000)
	{
		func_1381();
		func_176();
		use_waypoint_recording_as_assisted_movement_route(sVar870, 0, 1f, 0.5f, 1);
		func_485(&uLocal_907, 134217728);
		func_465(&uLocal_1457);
		return 1;
	}
	return 0;
}

int func_808(char[4] cParam0)
{
	func_1382(cParam0);
	func_1383(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (!_0xa2cac9def0195e6f(1))
			{
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					func_134(cParam0, 1);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			func_1384(cParam0);
			if (func_177(iVar907, 8))
			{
				if (!func_177(iVar901, 8388608))
				{
					if ((((!is_ped_using_any_scenario(Global_35) && is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0)) && !is_entity_in_volume(&(uLocal_1064[1]), &(iLocal_1108[0]), true, 0)) && iLocal_141 >= 6) && iLocal_142 >= 10)
					{
						if (!func_1359())
						{
							if (func_1346(cParam0) == -1)
							{
								func_135(cParam0, 8);
								func_179(&uLocal_904, 8388608);
							}
						}
					}
				}
			}
			if (!func_177(iVar901, 1048576))
			{
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					if (!func_26(&uLocal_1367))
					{
						func_247(&uLocal_1367);
					}
				}
				if (func_1343(&uLocal_1367) > 60000 && iLocal_142 >= 11)
				{
					if (func_1343(&uLocal_1367) > 60000)
					{
					}
					func_179(&uLocal_904, 1048576);
				}
			}
			if ((iLocal_142 > 11 && !is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0)) && is_entity_in_volume(Global_35, &(iLocal_1108[11]), true, 0))
			{
				if (&iLocal_516[1] < 12)
				{
					iLocal_516[1] = 11;
				}
				func_464(&iLocal_1048);
				func_479(cParam0, &(uLocal_1064[1]), 1);
				func_1385();
				return 1;
			}
			break;
	}
	return 0;
}

int func_809(var uParam0)
{
	func_468(1f);
	func_165(1, 1);
	func_1385();
	return 1;
}

int func_810(var uParam0)
{
	return 1;
}

int func_811(char[4] cParam0)
{
	_0x72d4cb5db927009c(379542007, -1, 0);
	if (!func_1386(cParam0))
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		func_1299(cParam0);
		func_1387(&(iLocal_1084[0]));
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		iLocal_141 = 5;
	}
	func_956();
	func_1388();
	func_200(cParam0, 0);
	return 1;
}

int func_812(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_26(&uLocal_1457))
		{
			func_247(&uLocal_1457);
		}
	}
	if (!func_177(iVar904, 134217728))
	{
		func_1389();
		func_1390();
		func_1391(cParam0);
		func_1378(cParam0);
		if (iLocal_145 >= 2 && iLocal_141 >= 7)
		{
			func_179(&uLocal_907, 134217728);
		}
	}
	if (!func_26(&uLocal_1457) || func_1343(&uLocal_1457) > 2000)
	{
		func_485(&uLocal_907, 134217728);
		func_465(&uLocal_1457);
		return 1;
	}
	return 0;
}

int func_813(char[4] cParam0)
{
	func_1392(cParam0);
	func_1393(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (iVar606 == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_814(var uParam0)
{
	func_11(&iLocal_1298, 1, 1);
	func_1010(&(uLocal_1064[1]), 1607151610, 0);
	func_165(1, 1);
	return 1;
}

int func_815(var uParam0)
{
	return 1;
}

int func_816(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!does_entity_exist(&(Local_14.f_18[0])))
		{
			func_1394(cParam0);
			_0x8ba83cc4288cd56d(&(Local_14.f_18[0]), 1125838711);
		}
		if (!func_1395(cParam0))
		{
			return 0;
		}
		func_1351(Global_35);
		_0x8ba83cc4288cd56d(Global_35, 1013612591);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		func_1299(cParam0);
		func_200(cParam0, 1);
		func_1387(iVar1102);
		iLocal_609 = 5;
		func_1396(1);
	}
	else
	{
		func_1396(0);
	}
	func_1397();
	func_1398();
	if (!does_entity_exist(&(Local_14.f_18[0])))
	{
		func_1394(cParam0);
	}
	func_135(cParam0, -1);
	iLocal_611 = 0;
	func_465(&uLocal_1318);
	_0x585ce159db46fadb(player_id(), 0.85f);
	return 1;
}

int func_817(var uParam0)
{
	func_1399(uParam0);
	func_1400(uParam0);
	_0x72d4cb5db927009c(379542007, -1, 0);
	if (iVar606 == 7)
	{
		if (_0xff07cf465f48b830(379542007))
		{
			func_1401();
			func_1402(0);
			iLocal_141 = 10;
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
			_0x8ba83cc4288cd56d(Global_35, 1013612591);
			_0x8ba83cc4288cd56d(&(Local_14.f_18[0]), 1125838711);
			set_ped_relationship_group_hash(&(Local_14.f_18[0]), 1269650476);
			set_relationship_between_groups(6, 1862763509, 1269650476);
			set_ped_config_flag(&(Local_14.f_18[0]), 169, true);
			return 1;
		}
	}
	return 0;
}

int func_818(char[4] cParam0)
{
	func_1403(cParam0);
	func_1404(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if (iVar606 == 7)
			{
				func_1405(cParam0, 0);
			}
			if (((iVar608 == 4 && _0x57779b55b83e2bea(&(Local_14.f_18[0]))) && _0x7ee3a8660f38797e(&(Local_14.f_18[0]))) && !func_1332(&(Local_14.f_18[0]), &(iLocal_1108[28]), 1, 0))
			{
				if (!func_177(iVar906, 4096))
				{
					func_135(cParam0, 2);
					func_179(&uLocal_909, 4096);
				}
			}
			if (((iVar608 == 4 && _0x57779b55b83e2bea(&(Local_14.f_18[0]))) && _0x7ee3a8660f38797e(&(Local_14.f_18[0]))) && func_1332(&(Local_14.f_18[0]), &(iLocal_1108[28]), 1, 0))
			{
				func_209();
				display_radar(true);
				display_hud(true);
				func_463(0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			set_player_control(player_id(), true, 0, false);
			return 1;
	}
	return 0;
}

int func_819(var uParam0)
{
	func_165(0, 0);
	_0x585ce159db46fadb(player_id(), -1f);
	return 1;
}

int func_820(var uParam0)
{
	return 1;
}

int func_821(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!func_1406(cParam0))
		{
			return 0;
		}
		if (func_497(Global_35, 0))
		{
			_0x5d4cd22a8c82a81a(Global_35, 0);
			remove_weapon_from_ped(Global_35, 379542007, true, -142743235);
		}
		func_1299(cParam0);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		func_1407(0);
		func_938(0, 0);
		if (func_497(&(Local_14.f_18[0]), 0))
		{
			func_1317(&(Local_14.f_18[0]), func_250(16, 2), 2, 1073741824);
		}
		if (func_497(&(Local_14.f_18[0]), 0))
		{
			clear_ped_tasks_immediately(&(Local_14.f_18[0]), false, true);
			_task_intimidated_2(&(Local_14.f_18[0]), Global_35, 0, 1, 1, 1, 0, 0, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_18[0]), true);
			_0x2208438012482a1a(&(Local_14.f_18[0]), false, false);
			task_look_at_entity(&(Local_14.f_18[0]), Global_35, -1, 0, 51, 1);
		}
		func_1387(iVar1102);
		iLocal_614 = 6;
		iLocal_612 = 5;
		func_1396(1);
	}
	if (is_entity_dead(&(Local_14.f_18[0])))
	{
		resurrect_ped(&(Local_14.f_18[0]));
	}
	return 1;
}

int func_822(char[4] cParam0)
{
	if (func_497(Global_35, 0))
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
		_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
		func_1408(1);
		_0xfc3db99c8144cd81(Global_35, &(iLocal_1108[27]), 0, 0, 0);
	}
	if (func_497(&(Local_14.f_18[0]), 0))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
		set_blocking_of_non_temporary_events(&(Local_14.f_18[0]), true);
		func_1409(Local_14.f_18[0], 1, 1);
		set_ped_relationship_group_hash(&(Local_14.f_18[0]), 1269650476);
		set_ped_config_flag(&(Local_14.f_18[0]), 222, false);
		_0xfc3db99c8144cd81(&(Local_14.f_18[0]), &(iLocal_1108[27]), 0, 0, 0);
		set_entity_visible(&(Local_14.f_18[0]), true);
		set_ped_config_flag(&(Local_14.f_18[0]), 225, true);
		_0x9d8dfe2de9cb4dfc(Global_35);
		_0x8ba83cc4288cd56d(&(Local_14.f_18[0]), 1125838711);
	}
	func_1410(5);
	_0x6378a235374b852f("BLOCKED_CONTEXTS_WNT1_INTERROGATION", 3);
	func_1389();
	iLocal_141 = 10;
	if (!func_8(cParam0, 8))
	{
		if (!func_26(&uLocal_1457))
		{
			func_247(&uLocal_1457);
		}
		if (!does_blip_exist(iVar1045))
		{
			iLocal_1048 = _blip_add_for_entity(831283580, &(Local_14.f_18[0]));
		}
		func_1411(cParam0);
		if (!func_1339(cParam0))
		{
			return 0;
		}
		if (iVar611 < 7)
		{
			return 0;
		}
		if (!_0x57779b55b83e2bea(&(Local_14.f_18[0])))
		{
			return 0;
		}
		if (func_1343(&uLocal_1457) < 2000)
		{
			return 0;
		}
	}
	return 1;
}

int func_823(char[4] cParam0)
{
	func_1412(cParam0);
	func_1413(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			func_1405(cParam0, 0);
			func_1414();
			if (!func_177(iVar902, 4))
			{
				if (is_ped_active_in_scenario(&(uLocal_1064[1]), 0))
				{
					task_look_at_entity(&(uLocal_1064[1]), Global_35, -1, 0, 51, 0);
					func_179(&uLocal_905, 4);
				}
			}
			if (iVar608 == 21 && !func_1359())
			{
				func_209();
				display_radar(true);
				display_hud(true);
				func_464(&iLocal_1048);
				func_463(1);
				func_247(&uLocal_1318);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1414();
			if (func_1415(&uLocal_1318, 2f))
			{
				func_1416(&iLocal_1020, 0, 1, 1);
				func_1402(1);
				func_1417();
				func_464(&iLocal_1048);
				func_135(cParam0, 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1414();
			if (!func_177(iVar901, 536870912))
			{
				func_1418();
			}
			func_1419();
			if (has_pickup_been_collected(iVar1038))
			{
				func_179(&uLocal_906, 256);
				_hide_ped_weapons(Global_35, 2, false);
				func_464(&iLocal_1048);
				func_247(&uLocal_1318);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			func_1420(cParam0);
			if (func_1421())
			{
				if (func_1415(&uLocal_1318, 0.5f))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_824(var uParam0)
{
	if (func_497(Global_35, 0))
	{
		_0x5d4cd22a8c82a81a(Global_35, 1);
	}
	_hide_ped_weapons(Global_35, 2, false);
	task_swap_weapon(Global_35, 0, 0, 0, 0);
	func_165(0, 1);
	_0x87e6302fc61208cc("BLOCKED_CONTEXTS_WNT1_INTERROGATION");
	return uParam0->f_607 == uParam0->f_607;
}

int func_825(var uParam0)
{
	return 1;
}

int func_826(char[4] cParam0)
{
	if (!func_1422(cParam0))
	{
		return 0;
	}
	func_1020(cParam0, &(uLocal_1064[3]), 128);
	if (!func_8(cParam0, 8))
	{
		func_1299(cParam0);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
		if (func_388((*Global_1835011)[0]->f_1) == 1 || Global_43838 == 1)
		{
			func_179(&uLocal_906, 16384);
		}
		func_1407(0);
	}
	if (func_497(Global_35, 0))
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
		task_swap_weapon(Global_35, 1, 0, 0, 0);
	}
	func_1423(0);
	func_1423(1);
	func_1424(7);
	func_1424(1);
	if (does_entity_exist(&(Local_14.f_3[0])))
	{
		func_1425(&(Local_14.f_3[0]), 1);
		_0x931b241409216c1f(Global_35, &(Local_14.f_3[0]), 0);
		_0xb8b6430ead2d2437(&(Local_14.f_3[0]), 130495496);
		_0x2eb75fb86c41f026(&(Local_14.f_3[0]), 3, 1);
		_0x06d26a96ca1bca75(&(Local_14.f_3[0]), 3, 0.5f, 0);
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0.f_3 = Global_35;
		Var0.f_7 = 0;
		Var0.f_19 = 1;
		Var0.f_20 = 0;
		Var0.f_21 = 4;
		Var0.f_22 = 4;
		_0x66f9eb44342bb4c5(&(Local_14.f_3[0]), &Var0);
	}
	return 1;
}

int func_827(char[4] cParam0)
{
	if (_does_anim_scene_exist(&(uLocal_182[14])))
	{
		_delete_anim_scene(&(uLocal_182[14]));
	}
	iLocal_141 = 10;
	func_1426(cParam0);
	if (!func_8(cParam0, 8))
	{
		if (func_1427())
		{
			func_204();
		}
	}
	func_1322(cParam0, func_1321("NormalStart"));
	func_1300(cParam0, "NormalStart_Override");
	use_waypoint_recording_as_assisted_movement_route(sVar890, 1, 1f, 1f, 0);
	use_waypoint_recording_as_assisted_movement_route(sVar891, 1, 1f, 1f, 0);
	use_waypoint_recording_as_assisted_movement_route(sVar892, 1, 1f, 1f, 0);
	func_179(&uLocal_904, 131072);
	func_1428();
	return 1;
}

int func_828(char[4] cParam0)
{
	func_1429(cParam0);
	func_1430(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			if ((iLocal_151 == 12 || iLocal_150 == 7) || (func_26(&uLocal_1424) && func_1343(&uLocal_1424) > 60000))
			{
				if (iLocal_150 == 7)
				{
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_829(var uParam0)
{
	func_165(1, 1);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	_0x949b2f9ed2917f5d(Global_35, 2);
	_0x949b2f9ed2917f5d(Global_35, 1);
	return 1;
}

int func_830(char[4] cParam0)
{
	func_1299(cParam0);
	func_1431(1, func_250(0, 9), 1);
	func_1426(cParam0);
	return 1;
}

int func_831(char[4] cParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	iLocal_1084[0] = &Local_14.f_3[0];
	iLocal_1104 = iVar1102;
	func_1387(iVar1101);
	func_471(1);
	func_1432(1);
	func_206();
	if (!func_8(cParam0, 8))
	{
		func_1299(cParam0);
	}
	set_ped_config_flag(&(Local_14.f_3[0]), 300, true);
	_0xbdda142759307528(Global_35);
	func_1014(Local_14.f_18[0], 1);
	func_179(&uLocal_722, 6);
	func_1433(2);
	func_131(func_473(13, 2), 200f, 1, 0, 0, 0, 0);
	set_ped_config_flag(&(Local_14.f_3[0]), 136, false);
	return 1;
}

int func_832(char[4] cParam0)
{
	func_1434(cParam0);
	if (!func_1435())
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		if (!func_177(iVar904, 134217728))
		{
			if (func_1436(cParam0))
			{
				func_1437();
			}
			else
			{
				return 0;
			}
			func_1327(&(uLocal_1064[1]), 0);
			func_414(0, 0);
			func_179(&uLocal_904, 131072);
			if (!func_1339(cParam0))
			{
				return 0;
			}
			func_247(&uLocal_1457);
		}
	}
	if (!func_177(iVar904, 134217728))
	{
		func_1318(&(uLocal_1064[1]), &(iLocal_1084[1]), 0, -1, 1);
		func_1318(&(uLocal_1064[3]), &(iLocal_1084[1]), 0, -2, 1);
		func_1021(cParam0, &(uLocal_1064[3]), 128);
		func_1318(&(uLocal_1064[2]), &(iLocal_1084[2]), 0, -1, 1);
		func_1438();
		iLocal_1171 = create_group(2);
		set_group_formation(iVar1168, 5);
		add_custom_formation_location(iVar1168, 0f, -8f, 0f, 0);
		add_custom_formation_location(iVar1168, 0f, -16f, 0f, 1);
		add_custom_formation_location(iVar1168, 0f, -20f, 0f, 2);
		_0xd5bd1b5318a81994(iVar1168, 1);
		set_ped_config_flag(&(uLocal_1064[1]), 279, true);
		set_ped_as_group_leader(&(uLocal_1064[1]), iVar1168, false);
		if (is_valid_interior(iVar999))
		{
			unpin_interior(iVar999);
		}
		func_1327(&(uLocal_1064[1]), 0);
		set_audio_flag("OpenWorldMusicOnMission", true);
		func_1319(6);
		func_99(cParam0, 33554432);
		func_1300(cParam0, "MultiStart");
		if (get_script_task_status(Global_35, 242628503, true) != 0 && get_script_task_status(Global_35, 242628503, true) != 1)
		{
			open_sequence_task(&uLocal_1018);
			task_follow_waypoint_recording(0, sVar888, 0, 42, -1, 0, 0, -1);
			close_sequence_task(iVar1015);
			task_perform_sequence(Global_35, iVar1015);
			clear_sequence_task(&uLocal_1018);
		}
		func_179(&uLocal_907, 134217728);
	}
	if (!func_26(&uLocal_1457) || func_1343(&uLocal_1457) > 2000)
	{
		func_485(&uLocal_907, 134217728);
		func_465(&uLocal_1457);
		return 1;
	}
	return 0;
}

int func_833(char[4] cParam0)
{
	func_1439(cParam0);
	func_1440(cParam0);
	switch (func_1307(cParam0))
	{
		case 0:
			bVar0 = false;
			if (func_557(&(iLocal_1084[0])))
			{
				if (func_288(&(iLocal_1084[0])) == 0)
				{
					if (func_1441(0) > 0f)
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_1424(0);
				func_1424(1);
				func_1442(&(iLocal_1084[0]));
				func_1423(0);
				func_1443(0, 1);
			}
			func_134(cParam0, 1);
			break;
		case 1:
			if (func_177(iVar901, -2147483648))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_834(var uParam0)
{
	func_165(1, 1);
	return 1;
}

int func_835(char[4] cParam0)
{
	if (!func_1444(cParam0, 1))
	{
		return 0;
	}
	else
	{
		func_1299(cParam0);
		func_1438();
		func_1445(cParam0);
	}
	func_414(0, 0);
	return 1;
}

int func_836(char[4] cParam0)
{
	func_1434(cParam0);
	set_audio_flag("OpenWorldMusicOnMission", false);
	func_1446(cParam0, &(uLocal_182[34]), 0);
	func_1329(6);
	func_407(cParam0, 524288);
	return 1;
}

int func_837(var uParam0)
{
	func_1447(1, 32);
	func_1447(1, 1024);
	return 1;
}

int func_838(char[4] cParam0)
{
	switch (func_1307(cParam0))
	{
		case 0:
			if (func_1448(1, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_839(char[4] cParam0)
{
	func_1(cParam0, 4);
	return 1;
}

void func_840(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_40.f_4283.f_4 == iParam0)
	{
		return;
	}
	Global_40.f_4283.f_4 = iParam0;
	iVar0 = 176656832;
	iVar1 = 176656832;
	switch (Global_40.f_4283)
	{
		case 0:
			iVar0 = 794696385;
			iVar1 = -2137730706;
			break;
		case 1:
			iVar0 = 2091083291;
			iVar1 = -1771575988;
			break;
		case 2:
			iVar0 = -302574837;
			iVar1 = -1205318041;
			break;
		case 3:
			iVar0 = -1916588959;
			iVar1 = 772151702;
			break;
		case 6:
			iVar0 = 1786449168;
			iVar1 = -365550600;
			break;
	}
	iVar2 = 0;
	while (iVar2 < 60)
	{
		if (Global_40.f_4283.f_6[iVar2]->f_4 == 2)
		{
			func_503(Global_40.f_4283.f_6[iVar2], 1, 0);
		}
		iVar2++;
	}
	if (Global_40.f_4283.f_4 == 0 && iVar0 != 176656832)
	{
		func_334(iVar0, 1137976064, -469960592, -1, 1, 1, 0);
	}
	else if (Global_40.f_4283.f_4 == 2 && iVar1 != 176656832)
	{
		func_334(iVar1, 1137976064, -469960592, -1, 1, 1, 0);
	}
	func_1449();
}

void func_841(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = func_1451(func_1450(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601->f_5[iVar0]->f_2 };
		}
		func_334(func_1452(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
		_0x748c5f51a18cb8f0(0);
		_0x748c5f51a18cb8f0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_1453();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_1454("hso_post_caravan");
			func_1041(-349064220);
			break;
		case 2:
			func_1454("dewclm_post_caravan");
			func_1041(1776302352);
			func_1040(-349064220);
			break;
		case 3:
			func_1041(-523522517);
			func_1040(-349064220);
			func_1040(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			func_1040(-349064220);
			func_1040(1776302352);
			func_1040(-523522517);
			break;
		case 7:
		case 8:
			func_1040(-349064220);
			func_1040(1776302352);
			func_1040(-523522517);
			func_1040(1591451572);
			break;
	}
	Global_1934266->f_66 = 1;
	func_1455(func_1450(iParam0), 0);
	switch (func_20())
	{
		case -1:
			func_1456();
			func_1457(iParam0);
			func_394(1, 18);
			func_1458(iParam0);
			func_1459(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				_copy_memory(Global_40.f_6563.f_274[iVar22], &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_1460(&(Global_1359489->f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				func_1078(iVar1, 16384, 1);
				iVar1++;
			}
			func_55(0, 14);
			func_1461();
			func_1462();
			Global_1357549->f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_334(-285172118, 195285667, -1235532919, -1, 0, 1, 0);
			func_334(func_1452(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_842(int iParam0, int iParam1)
{
	iParam0 = func_293(iParam0);
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

bool func_843(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_844(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_845(var uParam0)
{
	return uParam0->f_862;
}

void func_846(var uParam0)
{
	if (func_1463(&iVar0))
	{
		if (func_603(iVar0, 0))
		{
			if (func_627(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_655(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_603(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_847(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1464(-1);
	}
	func_1465(1);
	set_entity_invincible(Global_35, true);
	if (!func_844(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_844(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_844(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_844(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_844(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_844(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_844(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_844(*iParam0, 4) && !func_844(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_844(*iParam0, 2048))
	{
		func_859(0, 0);
	}
	if (func_844(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_844(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_844(*iParam0, 8192))
	{
		func_1466();
	}
	if (!func_844(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_844(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_844(*iParam0, 1024))
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
		if (!func_844(*iParam0, 16))
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
						if (func_1467() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_422(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1468(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1469(2);
						func_1470(-1);
						func_1471(vVar3);
						func_1473(func_1472());
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
	if (!func_844(*iParam0, 4096))
	{
		func_1474(Global_35);
	}
	if (!func_844(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_844(*iParam0, 2097152))
	{
		if (func_1475() || _0x50f124e6ef188b22(Global_35))
		{
			func_1476(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_848(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_849(var uParam0)
{
	if (func_843(uParam0, 2048) && !func_422(func_1477(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_843(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_927(iVar1, func_1477(uParam0), func_1478(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_843(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_927(iVar3, func_1477(uParam0), func_1478(uParam0), 2, 1073741824);
		}
	}
}

void func_850(var uParam0)
{
	if ((func_843(uParam0, 268435456) && !func_422(func_1477(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1477(uParam0) };
			func_927(iVar0, vVar1, func_1479(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_851(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_422(vParam1))
	{
		func_1341(uParam0, 2048, 1);
	}
	else
	{
		func_776(uParam0, 2048);
		if (bParam5)
		{
			func_776(uParam0, -2147483648);
		}
	}
}

void func_852(var uParam0)
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
					if (!func_1480(uParam0->f_13[iVar0], 8))
					{
						if (func_717(func_1154(iVar1, 0, 1, 0)))
						{
							if (!func_1481(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_717(func_1154(iVar1, 1, 1, 0)))
						{
							if (!func_1481(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_853(var uParam0, bool bParam1)
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

void func_854(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1249(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1482(iParam1, 29, bVar4, 1, 0);
			func_1482(iParam1, 31, bVar4, 1, 0);
			func_1482(iParam1, 30, bVar4, 1, 0);
			func_1482(iParam1, 22, bVar4, 1, 0);
			func_1482(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1190(32768) && func_1483(1108822547, 8)) && func_1484(10, iParam3))
	{
		func_1485(iParam1, 0, 1);
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
			iVar3 = func_1257(iVar1, 1);
			if (func_1483(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1484(iVar1, iParam3))
				{
				}
				else if ((func_1483(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1483(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1482(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1486(iVar3, 1, 6);
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
								func_1482(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1483(iVar3, 1))
							{
								func_1487(iVar3, 1, 6);
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

bool func_855(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1488((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_856(int iParam0)
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

int func_857(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_858(int iParam0, int iParam1)
{
	return func_1489(&uVar0, iParam0, iParam1);
}

void func_859(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_717(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1490(1);
	}
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
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_862(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_863(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_864(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_865(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_866(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_867(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_868(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_869(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_870(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_871(var uParam0, int iParam1)
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

int func_872(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_885((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_873(var uParam0, char* sParam1)
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

int func_874(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_887((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_875(var uParam0, char* sParam1)
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

int func_876(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_889((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_877(var uParam0, char* sParam1)
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

int func_878(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_891((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_879(int iParam0, int iParam1)
{
	iVar0 = func_1491(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_880(var uParam0, char* sParam1, int iParam2)
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

int func_881(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_894((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_882(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_883(var uParam0, char* sParam1)
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

int func_884(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_902((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_885(var uParam0)
{
	return *uParam0 != 0;
}

void func_886(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_887(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_916(uParam0->f_3, 1))
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
		func_882(&(uParam0->f_3), 1);
	}
}

bool func_889(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_890(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_891(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_892(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_1492(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_893(var uParam0)
{
	if (func_916(*uParam0, 2))
	{
		return true;
	}
	if (!func_916(*uParam0, 1))
	{
		func_1493(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_882(uParam0, 2);
		return true;
	}
	return false;
}

bool func_894(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_895(var uParam0)
{
	if (!func_916(uParam0->f_2, 1))
	{
		if (func_1494(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1495(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_331())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1110())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_882(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_896(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_897(var uParam0, int iParam1)
{
	if (!func_916(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_898(var uParam0)
{
	return *uParam0 != 0;
}

void func_899(var uParam0)
{
	if (!func_916(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_882(&(uParam0->f_2), 1);
	}
}

bool func_900(var uParam0)
{
	return *uParam0 != 0;
}

void func_901(var uParam0)
{
	if (!func_916(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_882(&(uParam0->f_3), 1);
	}
}

bool func_902(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_903(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_904(var uParam0)
{
	return func_1496(*uParam0);
}

void func_905(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_906(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_907(var uParam0)
{
	if (!func_916(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_882(&(uParam0->f_2), 1);
	}
}

bool func_908(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_909(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

bool func_910(var uParam0, int iParam1, char* sParam2)
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

void func_911(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_772(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1497(uParam0, iParam1);
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
		iVar1 = func_1498(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1499(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1500(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1501(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1502(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_912(int iParam0)
{
	if (!func_216(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_913(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_935(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1503(uParam0, 0))
			{
				if (func_1504(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1505(uParam0, 1, &iVar0))
					{
					}
					if (func_1506(uParam0, 3, &cVar2))
					{
					}
					if (func_1505(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1505(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1505(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1505(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1505(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1507(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_525((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_525(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_525(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_244(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1507(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_525(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1503(uParam0, 12))
			{
				if (func_1505(uParam0, 13, &iVar0))
				{
				}
				if (func_1505(uParam0, 14, &iVar1))
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

void func_914(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_244((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_244((*uParam0)[iVar0], 1))
		{
			func_1508((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_915(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_885((*uParam0)[iVar1]))
		{
			if (func_879((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1509((*uParam0)[iVar1]))
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
		if (func_887((*uParam1)[iVar1]))
		{
			if (func_879((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1510((*uParam1)[iVar1]))
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
		if (func_889((*uParam2)[iVar1]))
		{
			if (func_879((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1511((*uParam2)[iVar1]))
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
		if (func_891((*uParam3)[iVar1]))
		{
			if (func_879((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_892((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_879(uParam4->f_1, iParam12))
	{
		if (!func_893(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_894((*uParam5)[iVar1]))
		{
			if (func_879((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1494((*uParam5)[iVar1]))
				{
					if (!func_917((*uParam5)[iVar1]))
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
		if (func_894((*uParam5)[iVar1]))
		{
			if (func_879((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1494((*uParam5)[iVar1]))
				{
					if (func_917((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_896((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1512((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_898((*uParam6)[iVar1]))
		{
			if (func_879((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1513((*uParam6)[iVar1]))
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
		if (func_900((*uParam7)[iVar1]))
		{
			if (func_879((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1514((*uParam7)[iVar1]))
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
		if (func_902((*uParam8)[iVar1]))
		{
			if (func_879((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1515((*uParam8)[iVar1]))
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
		if (func_904((*uParam9)[iVar1]))
		{
			if (func_879((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1516((*uParam9)[iVar1]))
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
		if (func_906((*uParam10)[iVar1]))
		{
			if (func_879((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1517((*uParam10)[iVar1]))
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
		if (func_908((*uParam11)[iVar1]))
		{
			if (func_879((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1518((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_916(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_917(var uParam0)
{
	if (func_916(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_2, 1))
	{
		func_895(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_882(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_918(int iParam0)
{
	if (!func_216(iParam0))
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

bool func_919(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_544(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_285(iParam1)) && func_1519(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1520(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1521(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1522(iParam1);
		return true;
	}
	return false;
}

bool func_920(char[4] cParam0)
{
	if (!func_422(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1523(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1523(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1523(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1523(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1523(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1523(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1523(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1523(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1523(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1523(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1523(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1523(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1523(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1523(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1523(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1523(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1523(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1523(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1523(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1523(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1523(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1523(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1523(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1523(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1523(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1523(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1523(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1523(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1523(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1523(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1523(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1523(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1523(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_422(cParam0->f_5417);
}

bool func_921(int iParam0, var uParam1)
{
	uParam1->f_10 = func_293(uParam1->f_10);
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
		if (func_422(uParam1->f_6))
		{
		}
	}
	bVar0 = func_421();
	if (*uParam1)
	{
		if (bVar0 && !func_354((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1524(5))
			{
				func_556(5);
				func_1424(5);
				func_1470(0);
				func_1469(0);
			}
		}
	}
	if (func_1525(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_354((*Global_1835011)[37]->f_1, 1)) && !func_354((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_354((*Global_1835011)[43]->f_1, 1)) && !func_354((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_242(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_1526(iVar1))
		{
			bVar4 = true;
		}
		if (func_566(iVar1))
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
				func_567(uParam1->f_10);
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
			if (!func_1524(0) && func_1524(1))
			{
				func_1527(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1528())
			{
				func_1529();
			}
			func_1470(0);
			func_1469(0);
			func_1471(uParam1->f_6);
		}
	}
	if (!func_559(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1530(uParam1->f_10) == 0 || func_1531(uParam1->f_10) == 0) || func_1532(uParam1->f_10) == 0)
			{
				func_1533(uParam1->f_10);
			}
			func_1534(uParam1->f_10);
			func_1535(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_242(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_559(iVar1))
	{
		bVar3 = true;
		if (func_1526(iVar1))
		{
			bVar4 = true;
		}
		if (func_566(iVar1))
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
			if (!func_422(uParam1->f_6))
			{
				set_entity_coords(bVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(bVar2, uParam1->f_9);
				_0x9587913b9e772d29(bVar2, 0);
			}
		}
	}
	if (func_1536(uParam1->f_10))
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
			Var8 = { func_1537(uParam1->f_10) };
			Var10 = { func_1538() };
			func_1539(bVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, bVar2);
			set_ped_config_flag(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_552(uParam1->f_10))
	{
		set_entity_as_mission_entity(bVar2, true, true);
		func_1540(uParam1->f_10);
		if (uParam1->f_2 && !func_422(uParam1->f_6))
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
	func_551(uParam1->f_10);
	if (func_552(uParam1->f_10))
	{
		iVar16 = func_289(uParam1->f_10);
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

bool func_922(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_923(bool bParam0)
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

bool func_924(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1541(iParam1))
	{
		return false;
	}
	iVar0 = func_1542(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_925(char[4] cParam0, bool bParam1)
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

float func_926(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_927(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (bParam0 == func_1543(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1544(bParam0))
	{
		if (func_923(get_ped_index_from_entity_index(bParam0)))
		{
			_0x0348469daa17576c(bParam0);
		}
	}
	if (func_177(iParam5, 4) && is_entity_a_ped(bParam0))
	{
		iVar1 = get_ped_index_from_entity_index(bParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			bVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(bVar0) && !is_entity_dead(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_927(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			bVar2 = get_mount(iVar1);
			if (does_entity_exist(bVar2) && !is_entity_dead(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_927(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_177(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(bParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(bParam0), false, true);
		}
	}
	if (func_177(iParam5, 2))
	{
		if (is_entity_a_vehicle(bParam0))
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_177(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_177(iParam5, 32), true);
			_0x9587913b9e772d29(bParam0, 0);
		}
	}
	else if (func_177(iParam5, 129))
	{
		if (func_177(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(bParam0, vParam1, func_177(iParam5, 32), true, true);
		set_entity_heading(bParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(bParam0, vParam1, fParam4, true, func_177(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_177(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(bParam0), bVar3, 0, false);
		}
		if (func_1544(bParam0))
		{
			bVar6 = get_ped_index_from_entity_index(bParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_177(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(bParam0), 1);
		if (get_ped_index_from_entity_index(bParam0) == Global_35 && !func_177(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_928(int iParam0, int iParam1, int iParam2)
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

bool func_929(var uParam0, int iParam1)
{
	switch (func_1545(uParam0))
	{
		case 0:
			if (!func_1546(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1547(uParam0, 1);
			break;
		case 1:
			func_1548(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_847(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1547(uParam0, 2);
			break;
		case 2:
			if (func_1549(uParam0))
			{
				func_1045(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1547(uParam0, 3);
			}
			break;
		case 3:
			if (func_936(&(uParam0->f_3)) >= 1f)
			{
				func_1547(uParam0, 4);
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
			func_1550(&iVar1, 0);
			release_script_audio_bank();
			func_1547(uParam0, 0);
			return true;
	}
	return false;
}

void func_930(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1551(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_931(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1552(cParam0, iVar0) };
	if (func_1554(&(cParam0->f_10792), Var1, func_1553(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1555(&(cParam0->f_10792), 524288))
		{
			func_407(cParam0, 67108864);
			func_1556(&(cParam0->f_10792), 524288);
		}
		func_1557(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_932(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_933(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1558(cParam0);
		func_1559(cParam0);
		return true;
	}
	if (func_1560(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_976(cParam0);
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
			func_1561(cParam0);
			func_932(cParam0, 524288);
			func_1562(cParam0);
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

bool func_934(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1563(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1564(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1565(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_450(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_912(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_935(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_935(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1566(uParam0);
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

float func_936(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_527(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_579() - uParam0->f_1);
}

bool func_937()
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

void func_938(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_939()
{
	set_bit(&(Global_1934765->f_301), 1);
	func_1567();
}

void func_940(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_941(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return;
	}
	func_1568(iParam0);
	func_1569(iParam0);
}

void func_942(char[4] cParam0)
{
	func_1570(2);
	if (func_33(cParam0) > iLocal_82 && func_33(cParam0) <= iLocal_91)
	{
		func_414(1, 0);
	}
	if (func_33(cParam0) > iLocal_91)
	{
		func_414(0, 0);
	}
}

int func_943()
{
	if (!does_rayfire_map_object_exist(iVar1172))
	{
		iLocal_1174 = get_rayfire_map_object(-562.0144f, 2699.009f, 320.1597f, 10f, "des_wnt1_cabin_collapse");
	}
	if (does_rayfire_map_object_exist(iVar1172))
	{
		if (((get_state_of_rayfire_map_object(iVar1172) != 0 && get_state_of_rayfire_map_object(iVar1172) != 11) && get_state_of_rayfire_map_object(iVar1172) != 2) && get_state_of_rayfire_map_object(iVar1172) != 3)
		{
			set_state_of_rayfire_map_object(iVar1172, 11);
			func_179(&uLocal_904, 32768);
		}
		return 1;
	}
	return 0;
}

void func_944()
{
	func_1571();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1424(iVar0);
		iVar0++;
	}
}

void func_945(char[4] cParam0)
{
	set_ped_config_flag(Global_35, 340, true);
	set_ped_config_flag(Global_35, 328, true);
	if (func_33(cParam0) == 25)
	{
		if (!has_ped_got_weapon(Global_35, -164645981, 0, false))
		{
			_give_weapon_to_ped_2(Global_35, -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		set_current_ped_weapon(Global_35, -164645981, true, 0, false, false);
	}
}

bool func_946(char[4] cParam0)
{
	if (!does_entity_exist(&(uLocal_1064[1])))
	{
		uLocal_1064[1] = func_159(cParam0);
	}
	vLocal_897 = { func_473(10, 5) };
	if (func_919(cParam0, 6, uLocal_1064[2], 0, iVar894, vLocal_897.y, vLocal_897.z, func_494(10, 5), 1, 0, 1, 0, 1, 0))
	{
	}
	if (func_1572(cParam0))
	{
		if (!func_1422(cParam0))
		{
			return false;
		}
	}
	if (does_entity_exist(&(uLocal_1064[1])) && does_entity_exist(&(uLocal_1064[2])))
	{
		if (!func_177(iVar906, 32))
		{
			_set_ped_body_component(&(uLocal_1064[1]), 1016389820);
			_update_ped_variation(&(uLocal_1064[1]), false, true, true, true, false);
			func_179(&uLocal_909, 32);
		}
		if (func_1572(cParam0))
		{
			if (does_entity_exist(&(uLocal_1064[3])))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_947(char[4] cParam0)
{
	if (!does_entity_exist(&(iLocal_1084[1])))
	{
		iLocal_1084[1] = func_502(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_1573(cParam0, &(iLocal_1084[1]), &(uLocal_1064[1]));
	}
	if (!does_entity_exist(&(iLocal_1084[2])))
	{
		iLocal_1084[2] = func_502(6, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_1573(cParam0, &(iLocal_1084[2]), &(uLocal_1064[2]));
	}
	func_1574();
	if (!does_entity_exist(&(iLocal_1084[1])))
	{
	}
	if (!does_entity_exist(&(iLocal_1084[2])))
	{
	}
	if (does_entity_exist(&(iLocal_1084[1])) && does_entity_exist(&(iLocal_1084[2])))
	{
		set_entity_load_collision_flag(&(iLocal_1084[1]), 1);
		set_entity_load_collision_flag(&(iLocal_1084[2]), 1);
		set_ped_config_flag(&(iLocal_1084[1]), 324, true);
		set_ped_config_flag(&(iLocal_1084[2]), 324, true);
		return true;
	}
	return false;
}

bool func_948(int iParam0)
{
	if (Global_40.f_7729 == iParam0)
	{
		return true;
	}
	return false;
}

void func_949(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1206(iParam0))
	{
		return;
	}
	if (func_1575(iParam0))
	{
		return;
	}
	if (!func_1576(iParam0))
	{
		func_1577(iParam0, 1, 0);
	}
	iVar0 = func_1578(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1579(iParam0, 512))
		{
			func_713(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_241() && !bParam1) && !func_224(0, 0, 1))
	{
		func_742(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1580(iParam0, 6);
	if (bParam2)
	{
		if (!func_224(0, 0, 1))
		{
			func_394(1, 4);
		}
	}
}

bool func_950(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (&Global_1905943)
	{
		return false;
	}
	Global_1905943 = iParam3;
	if (&Global_1905943)
	{
	}
	if (&Global_1905941 == iParam0)
	{
		return true;
	}
	if (Global_40.f_7729 == iParam0 && !bParam2)
	{
		Global_1905941 = iParam0;
		return true;
	}
	if (Global_40.f_7729 != &Global_1905941 && !bParam2)
	{
		return false;
	}
	if (!func_1206(iParam0))
	{
		return false;
	}
	if (!func_1575(iParam0) && !bParam2)
	{
		return false;
	}
	iVar0 = func_1578(iParam0);
	if (iParam0 > 5 && !func_1581(iVar0, Global_1946804->f_1))
	{
	}
	Global_1905941 = iParam0;
	func_1582(iParam0, 1024);
	decor_set_bool(Global_35, "outfitChanged", false);
	decor_set_bool(Global_35, "playerChangeOutfits", true);
	if (bParam2)
	{
		func_1580(iParam0, 32768);
	}
	if (bParam1)
	{
		func_1580(iParam0, 8192);
	}
	return true;
}

bool func_951()
{
	iLocal_1002 = get_interior_at_coords(func_473(4, 2));
	if (is_valid_interior(iVar1000))
	{
		pin_interior_in_memory(iVar1000);
	}
	if (is_valid_interior(iVar1000))
	{
		if (is_interior_ready(iVar1000))
		{
			if (is_interior_entity_set_active(iVar1000, "adl_winter01_trapdooropen"))
			{
				deactivate_interior_entity_set(iVar1000, "adl_winter01_trapdooropen", true);
			}
			if (is_interior_entity_set_active(iVar1000, "adl_winter01_trapdoorclosed"))
			{
				deactivate_interior_entity_set(iVar1000, "adl_winter01_trapdoorclosed", true);
			}
			if (!is_interior_entity_set_active(iVar1000, "adl_winter01_trapdoorclosed"))
			{
				activate_interior_entity_set(iVar1000, "adl_winter01_trapdoorclosed", 0);
			}
			func_1583(185);
			func_1584(184);
			func_179(&uLocal_907, 16384);
			return true;
		}
	}
	return false;
}

bool func_952()
{
	if (!does_entity_exist(iVar1103))
	{
		iLocal_1105 = func_1585(-548014618, -1347.881f, 2414.265f, 306.0905f, 265.4125f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(iVar1103, "StartHorseTaima");
		func_1425(iVar1103, 1);
		return false;
	}
	return true;
}

bool func_953(char[4] cParam0)
{
	if (func_33(cParam0) > iLocal_87)
	{
		if (!func_1386(cParam0))
		{
			return false;
		}
	}
	if (!is_entity_dead(Global_35))
	{
		if (func_33(cParam0) >= iLocal_86)
		{
			if (!func_374(379542007, 1, 0))
			{
				func_345(379542007, 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
				if (func_1125(379542007, 0) < 49)
				{
					func_345(1681219929, (49 - func_1125(379542007, 0)), 1, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
		}
		set_current_ped_weapon(Global_35, -1569615261, true, 0, true, false);
		_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
		_0x79e1e511ff7efb13(Global_35);
		_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
		_0x6569f31a01b4c097(Global_35, 3, 0);
		_0x6569f31a01b4c097(Global_35, 2, 0);
		func_131(get_entity_coords(Global_35, true, false), 5f, 1, 0, 0, 0, 0);
	}
	_0x816a3acd265e2297(-1706653313, 0);
	if (!is_entity_dead(&(uLocal_1064[1])))
	{
		set_ped_config_flag(&(uLocal_1064[1]), 168, false);
		func_1586(&(uLocal_1064[1]), -95736505, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1021(cParam0, &(uLocal_1064[1]), 256);
		set_ped_config_flag(&(uLocal_1064[1]), 249, true);
		func_145(cParam0, &(uLocal_1064[1]), "DUTCH", 1);
	}
	if (!is_entity_dead(&(uLocal_1064[2])))
	{
		set_ped_config_flag(&(uLocal_1064[2]), 168, false);
		func_1021(cParam0, &(uLocal_1064[2]), 256);
		func_145(cParam0, &(uLocal_1064[2]), "MICAH_BELL", 1);
		set_entity_load_collision_flag(&(uLocal_1064[2]), 1);
	}
	if (func_1572(cParam0))
	{
		func_1587(cParam0);
	}
	if (func_33(cParam0) >= 25)
	{
		func_1438();
	}
	if (!is_entity_dead(iVar1102))
	{
		set_ped_config_flag(iVar1102, 138, true);
		set_ped_config_flag(iVar1102, 168, false);
		set_ped_config_flag(iVar1102, 113, true);
		set_ped_config_flag(iVar1102, 284, true);
		set_ped_can_be_targetted(iVar1102, false);
		set_entity_invincible(iVar1102, true);
		set_animal_tuning_bool_param(iVar1102, 48, true);
		_0x2eb75fb86c41f026(iVar1102, 3, 0);
		set_blocking_of_non_temporary_events(iVar1102, true);
		set_ped_relationship_group_hash(iVar1102, 1030835986);
		set_ped_config_flag(iVar1102, 324, true);
		set_ped_config_flag(iVar1102, 66, true);
	}
	iLocal_903 = 0;
	while (iVar900 < 19)
	{
		if (!is_entity_dead(&(iLocal_1084[iVar900])))
		{
			set_ped_can_be_targetted(&(iLocal_1084[iVar900]), false);
			set_ped_config_flag(&(iLocal_1084[iVar900]), 172, true);
			set_ped_config_flag(&(iLocal_1084[iVar900]), 173, true);
			set_animal_tuning_bool_param(&(iLocal_1084[iVar900]), 48, true);
			set_ped_config_flag(&(iLocal_1084[iVar900]), 324, true);
			set_blocking_of_non_temporary_events(&(iLocal_1084[iVar900]), true);
			_0x9b65444c07b782bf(&(iLocal_1084[iVar900]), "Winter1Mount");
		}
		iLocal_903 = iVar900 + 1;
	}
	func_1588();
	if (func_33(cParam0) > iLocal_85 && func_33(cParam0) < iLocal_91)
	{
		func_471(0);
	}
	if (func_33(cParam0) > iLocal_85 && func_33(cParam0) < 25)
	{
		func_1333(-1, 0);
		func_1589();
	}
	if (func_33(cParam0) == iLocal_89)
	{
		func_1394(cParam0);
	}
	if (func_33(cParam0) < iLocal_91)
	{
		if (!does_entity_exist(&(iLocal_1084[0])))
		{
			iLocal_1084[0] = iVar1102;
		}
		_0x2eb75fb86c41f026(&(iLocal_1084[0]), 3, 0);
		set_entity_load_collision_flag(&(iLocal_1084[0]), 1);
	}
	else if (func_33(cParam0) == iLocal_91)
	{
		iLocal_1084[0] = &Local_14.f_3[0];
		func_1424(0);
		func_1424(1);
		func_1442(&(iLocal_1084[0]));
		func_1423(0);
		func_1443(0, 1);
	}
	else
	{
		iLocal_1084[0] = &Local_14.f_3[0];
		func_1424(0);
		func_1424(1);
		func_1442(&(iLocal_1084[0]));
		func_1423(0);
		func_1443(0, 1);
		iLocal_1104 = iVar1102;
	}
	return true;
}

bool func_954(char[4] cParam0)
{
	bVar0 = true;
	vVar1 = { func_473(13, 11) };
	if (!func_285(13))
	{
		if (func_919(cParam0, 13, uLocal_1064[11], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[11]), 0);
			func_546(cParam0, &(uLocal_1064[11]));
			set_entity_load_collision_flag(&(uLocal_1064[11]), 1);
			func_1590(&(uLocal_1064[11]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(3))
	{
		if (func_919(cParam0, 3, uLocal_1064[4], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[4]), 0);
			func_546(cParam0, &(uLocal_1064[4]));
			set_entity_load_collision_flag(&(uLocal_1064[4]), 1);
			func_1590(&(uLocal_1064[4]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(7))
	{
		if (func_919(cParam0, 7, uLocal_1064[12], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 1, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[12]), 0);
			func_546(cParam0, &(uLocal_1064[12]));
			set_entity_load_collision_flag(&(uLocal_1064[12]), 1);
			func_1590(&(uLocal_1064[12]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(5))
	{
		if (func_919(cParam0, 5, uLocal_1064[13], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[13]), 0);
			func_546(cParam0, &(uLocal_1064[13]));
			set_entity_load_collision_flag(&(uLocal_1064[13]), 1);
			func_1590(&(uLocal_1064[13]), 1);
			func_1591(&(uLocal_1064[13]));
		}
		bVar0 = false;
	}
	if (!func_285(20))
	{
		if (func_919(cParam0, 20, uLocal_1064[6], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[6]), 0);
			func_546(cParam0, &(uLocal_1064[6]));
			set_entity_load_collision_flag(&(uLocal_1064[6]), 1);
			func_1590(&(uLocal_1064[6]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(18))
	{
		if (func_919(cParam0, 18, uLocal_1064[7], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[7]), 0);
			func_546(cParam0, &(uLocal_1064[7]));
			set_entity_load_collision_flag(&(uLocal_1064[7]), 1);
			func_1590(&(uLocal_1064[7]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(15))
	{
		if (func_919(cParam0, 15, uLocal_1064[8], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[8]), 0);
			func_546(cParam0, &(uLocal_1064[8]));
			set_entity_load_collision_flag(&(uLocal_1064[8]), 1);
			func_1590(&(uLocal_1064[8]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(16))
	{
		if (func_919(cParam0, 16, uLocal_1064[14], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[14]), 0);
			func_546(cParam0, &(uLocal_1064[14]));
			set_entity_load_collision_flag(&(uLocal_1064[14]), 1);
			func_1590(&(uLocal_1064[14]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(17))
	{
		if (func_919(cParam0, 17, uLocal_1064[15], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[15]), 0);
			func_546(cParam0, &(uLocal_1064[15]));
			set_entity_load_collision_flag(&(uLocal_1064[15]), 1);
			func_1590(&(uLocal_1064[15]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(21))
	{
		if (func_919(cParam0, 21, uLocal_1064[9], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[9]), 0);
			func_546(cParam0, &(uLocal_1064[9]));
			set_entity_load_collision_flag(&(uLocal_1064[9]), 1);
			func_1590(&(uLocal_1064[9]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(19))
	{
		if (func_919(cParam0, 19, uLocal_1064[16], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[16]), 0);
			func_546(cParam0, &(uLocal_1064[16]));
			set_entity_load_collision_flag(&(uLocal_1064[16]), 1);
			func_1590(&(uLocal_1064[16]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(22))
	{
		if (func_919(cParam0, 22, uLocal_1064[17], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[17]), 0);
			func_546(cParam0, &(uLocal_1064[17]));
			set_entity_load_collision_flag(&(uLocal_1064[17]), 1);
			func_1590(&(uLocal_1064[17]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(4))
	{
		if (func_919(cParam0, 4, uLocal_1064[10], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[10]), 0);
			func_546(cParam0, &(uLocal_1064[10]));
			set_entity_load_collision_flag(&(uLocal_1064[10]), 1);
			func_1590(&(uLocal_1064[10]), 1);
		}
		bVar0 = false;
	}
	if (!func_285(9))
	{
		if (func_919(cParam0, 9, uLocal_1064[18], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[18]), 0);
			func_546(cParam0, &(uLocal_1064[18]));
			set_entity_load_collision_flag(&(uLocal_1064[18]), 1);
			func_1590(&(uLocal_1064[18]), 1);
		}
		bVar0 = false;
	}
	if (bVar0)
	{
		func_1438();
	}
	return bVar0;
}

bool func_955(char[4] cParam0)
{
	iVar0 = 1;
	vVar1 = { func_473(13, 11) };
	if (!func_285(14))
	{
		if (func_919(cParam0, 14, uLocal_1064[5], 0, vVar1.x, vVar1.y, vVar1.z, 0, 1, 178615350, 0, 0, 1, 0))
		{
			func_1020(cParam0, &(uLocal_1064[5]), 0);
			func_546(cParam0, &(uLocal_1064[5]));
			set_entity_load_collision_flag(&(uLocal_1064[5]), 1);
			func_1590(&(uLocal_1064[5]), 1);
			func_151(cParam0, &(uLocal_1064[5]), "JackMarston", 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	return iVar0;
}

bool func_956()
{
	iLocal_1006 = get_interior_at_coords(func_473(16, 1));
	if (is_valid_interior(iVar1004))
	{
		pin_interior_in_memory(iVar1004);
	}
	else
	{
		return false;
	}
	return true;
}

void func_957(char[4] cParam0)
{
	_uitutorial_set_rpg_icon_visibility(0, 2);
	_uitutorial_set_rpg_icon_visibility(1, 2);
	_uitutorial_set_rpg_icon_visibility(2, 2);
	_uitutorial_set_rpg_icon_visibility(3, 2);
	_uitutorial_set_rpg_icon_visibility(8, 2);
	_uitutorial_set_rpg_icon_visibility(9, 2);
	_uitutorial_set_rpg_icon_visibility(6, 2);
	_uitutorial_set_rpg_icon_visibility(7, 2);
	switch (func_33(cParam0))
	{
		case 0:
			_uitutorial_set_rpg_icon_visibility(4, 2);
			_uitutorial_set_rpg_icon_visibility(5, 2);
			break;
		case 1:
			_uitutorial_set_rpg_icon_visibility(4, 2);
			_uitutorial_set_rpg_icon_visibility(5, 2);
			break;
		case 2:
			_uitutorial_set_rpg_icon_visibility(4, 2);
			_uitutorial_set_rpg_icon_visibility(5, 2);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 10:
			break;
	}
}

void func_958()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_714[iVar0] = 0;
		iVar0++;
	}
}

void func_959(char[4] cParam0)
{
	if (func_33(cParam0) <= iLocal_86)
	{
		_set_entity_health(Global_35, 150, 0);
		set_player_health_recharge_multiplier(player_id(), 0f);
	}
}

void func_960(char[4] cParam0)
{
	if (func_33(cParam0) <= iLocal_81)
	{
		set_clock_time(22, 0, 0);
		pause_clock(true, 0);
	}
	else
	{
		set_clock_time(0, 0, 0);
		pause_clock(true, 0);
	}
}

void func_961(char[4] cParam0)
{
	if (func_33(cParam0) > iLocal_81)
	{
		func_1592();
	}
}

void func_962(char[4] cParam0)
{
	if (func_33(cParam0) <= iLocal_85)
	{
		func_1593();
	}
	else
	{
		func_1594(0);
	}
	func_496(872775928, 0, 0);
	func_496(-1909593249, 0, 0);
	_0xc07b91b996c1de89(872775928, 0);
	_0xc07b91b996c1de89(-1909593249, 0);
	if (func_33(cParam0) > iLocal_87)
	{
		func_1407(0);
	}
	else
	{
		func_200(cParam0, 0);
	}
	if (func_33(cParam0) < iLocal_90)
	{
		func_1595();
	}
	else
	{
		func_204();
	}
	func_496(1535926888, 0, 0);
	func_496(1364348404, 0, 0);
	_0xc07b91b996c1de89(1535926888, 0);
	_0xc07b91b996c1de89(1364348404, 0);
}

void func_963()
{
	Local_733[0]->f_1 = 0;
	Local_733[0]->f_2 = 2;
	Local_733[0]->f_10 = { -1327.281f, 2441.491f, 309.5428f };
	Local_733[0]->f_13 = { 0f, 0f, -27.99986f };
	Local_733[0]->f_16 = { 2.128819f, 2.5274f, 4.184354f };
	Local_733[0]->f_3 = 272352;
	Local_733[0]->f_5 = 2;
	Local_733[1]->f_1 = 0;
	Local_733[1]->f_2 = 2;
	Local_733[1]->f_10 = { -1318.581f, 2433.726f, 309.5708f };
	Local_733[1]->f_13 = { 0f, 0f, -25.97732f };
	Local_733[1]->f_16 = { 2.170598f, 2.625778f, 3.251842f };
	Local_733[1]->f_3 = 272352;
	Local_733[1]->f_5 = 2;
	Local_733[2]->f_1 = 7;
	Local_733[2]->f_2 = 9;
	Local_733[2]->f_10 = { -535.3652f, 2676.348f, 319.0079f };
	Local_733[2]->f_13 = { 0f, 0f, -177.5965f };
	Local_733[2]->f_16 = { 7.495469f, 2.718147f, 3.338424f };
	Local_733[2]->f_3 = 272352;
	Local_733[2]->f_5 = 2;
	Local_733[3]->f_1 = 7;
	Local_733[3]->f_2 = 10;
	Local_733[3]->f_10 = { -533.6295f, 2666.045f, 318.6663f };
	Local_733[3]->f_13 = { 0f, 0f, -0.431137f };
	Local_733[3]->f_16 = { 4.30921f, 1.964767f, 2.720968f };
	Local_733[3]->f_3 = 8192;
	Local_733[3]->f_5 = 2;
	Local_733[4]->f_1 = 2;
	Local_733[4]->f_2 = 4;
	Local_733[4]->f_10 = { -587.4942f, 2684.553f, 322.3409f };
	Local_733[4]->f_13 = { 0f, 0f, 12.00693f };
	Local_733[4]->f_16 = { 4.965734f, 4.605781f, 4.686838f };
	Local_733[4]->f_3 = 272352;
	Local_733[4]->f_5 = 2;
	Local_733[5]->f_1 = 4;
	Local_733[5]->f_2 = 5;
	Local_733[5]->f_10 = { -557.1843f, 2698.574f, 320.0655f };
	Local_733[5]->f_13 = { 0f, 0f, -31.16287f };
	Local_733[5]->f_16 = { 3.474946f, 3.051342f, 3.878928f };
	Local_733[5]->f_3 = 272352;
	Local_733[5]->f_5 = 2;
	Local_733[6]->f_1 = 4;
	Local_733[6]->f_2 = 5;
	Local_733[6]->f_10 = { -558.6727f, 2708.633f, 319.8523f };
	Local_733[6]->f_13 = { 0f, 0f, -30.55872f };
	Local_733[6]->f_16 = { 3.04693f, 2.937068f, 4.26376f };
	Local_733[6]->f_3 = 272352;
	Local_733[6]->f_5 = 2;
}

void func_964()
{
	Local_931[0]->f_4 = { -551.4096f, 2706.19f, 319.7305f };
	Local_931[0]->f_7 = { 0f, 0f, -32.73538f };
	Local_931[0]->f_10 = { 1.8825f, 1.675275f, 5f };
	Local_931[0]->f_13 = "m_sbiWinter[WINTER1_SBV_ADLER_CABIN_CHEST]";
	Local_931[0]->f_3 = 1;
	Local_931[1]->f_4 = { func_473(8, 0) };
	Local_931[1]->f_7 = { 0f, 0f, 0f };
	Local_931[1]->f_10 = { 5f, 5f, 7.5f };
	Local_931[1]->f_13 = "m_sbiWinter[WINTER1_SBV_COLTER_HITCH_POST]";
	Local_931[2]->f_4 = { func_473(8, 1) };
	Local_931[2]->f_7 = { 0f, 0f, 0f };
	Local_931[2]->f_10 = { 5f, 5f, 7.5f };
	Local_931[2]->f_13 = "m_sbiWinter[WINTER1_SBV_DUTCH_CABIN]";
	Local_931[4]->f_4 = { func_473(8, 2) };
	Local_931[4]->f_7 = { 0f, 0f, 0f };
	Local_931[4]->f_10 = { 5f, 5f, 7.5f };
	Local_931[4]->f_13 = "m_sbiWinter[WINTER1_SBV_COLTER_2ND_HITCH]";
	Local_931[3]->f_4 = { -554.3918f, 2711.327f, 320.8251f };
	Local_931[3]->f_7 = { 0f, 0f, -35.73851f };
	Local_931[3]->f_10 = { 1f, 1f, 3.087893f };
	Local_931[3]->f_13 = "m_sbiWinter[WINTER1_SBV_MICAH_MEDICINE_CABINET]";
	Local_931[3]->f_2 = 0;
}

void func_965()
{
	if (!func_177(iVar905, 1024))
	{
		_0x1b3c2d961f5fc0e1("script@Story@WNT1@mission_jump_cameras");
		func_179(&uLocal_907, 1024);
	}
}

void func_966(char[4] cParam0)
{
	func_151(cParam0, &(uLocal_1064[11]), "AbigailRoberts", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[4]), "BillWilliamson", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[12]), "CharlesSmith", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[13]), "HoseaMatthews", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[5]), "JackMarston", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[6]), "KAREN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[7]), "LeoStrauss", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[8]), "MARYBETH", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[14]), "MollyOshea", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[15]), "MrPearson", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[9]), "RevSwanson", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[16]), "SusanGrimshaw", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[17]), "TILLY", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[10]), "UNCLE", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[18]), "lenny", 0, 0, 0, 0);
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[1]), "dutch", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[2]), "MicahBell", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[0]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[1]), "Horse_01^1", 0, 0, 0, 0);
}

void func_967()
{
	_0xe6cb36f43a95d75f(0f);
}

void func_968(char[4] cParam0)
{
	func_1596();
	if (func_33(cParam0) <= iLocal_82 || func_33(cParam0) >= 25)
	{
		func_1448(1, 0, 0);
	}
}

int func_969(char[4] cParam0)
{
	func_1597();
	switch (func_33(cParam0))
	{
		case 0:
			func_1598();
			func_1599(cParam0, 16384);
			break;
		case 1:
			if (!func_177(iVar906, 33554432))
			{
				clear_ragdoll_blocking_flags(Global_35, 58064);
				func_179(&uLocal_909, 33554432);
			}
			func_1599(cParam0, 16384);
			break;
		case 2:
			func_407(cParam0, 65536);
			func_776(&(cParam0->f_7375), 2);
			set_ped_config_flag(&(iLocal_1084[0]), 219, true);
			break;
		case 10:
			func_1600();
			break;
		case 25:
			func_1591(&(uLocal_1064[13]));
			func_407(cParam0, 65536);
			func_185(0);
			break;
	}
	return 1;
}

void func_970(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_971(char[4] cParam0)
{
	func_1601();
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		func_179(&uLocal_908, 16384);
	}
	else
	{
		func_485(&uLocal_908, 16384);
	}
	switch (func_33(cParam0))
	{
		case 0:
			if (!func_1303(cParam0, 512))
			{
				if (!func_177(iVar906, 128))
				{
					func_1598();
				}
			}
			request_collision_at_coord(func_473(13, 11));
			func_1602(cParam0);
			if (!func_177(iVar906, 128))
			{
				if (has_anim_event_fired(Global_35, -217980619) || has_anim_event_fired(Global_35, 508284207))
				{
					disable_control_action(0, -668070958, false);
					disable_control_action(0, 1250966545, false);
					func_175();
					_0xb958d97a0dfaa0c2("ChapterTitle_IntroCh01");
					animpostfx_play("ChapterTitle_IntroCh01");
					_0x6339c1ea3979b5f7("Chapter_01", "Chapter_Screen_Scenes");
					func_179(&uLocal_909, 128);
				}
			}
			if (_does_anim_scene_exist(cParam0->f_7375.f_804))
			{
				if (_is_anim_scene_started(cParam0->f_7375.f_804, false) && !_0xef324e9550a394d5(cParam0->f_7375.f_804))
				{
					if (_get_anim_scene_progress(cParam0->f_7375.f_804) < 0.95f)
					{
						if (is_screen_faded_out())
						{
							do_screen_fade_in(3000);
						}
					}
				}
			}
			if (func_1603(cParam0, Global_35, 0, 0, 1, 1))
			{
				set_ragdoll_blocking_flags(Global_35, 58064);
				if (_0x6bfbdc46139c45ab(func_473(13, 11)))
				{
				}
				func_1604(cParam0);
				func_179(&iLocal_92, 1);
			}
			break;
		case 1:
			if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
			{
				if (_get_anim_scene_time(cParam0->f_7375.f_804) > 13f)
				{
					if (!func_1303(cParam0, 512))
					{
						func_1605();
					}
				}
				else
				{
					disable_control_action(0, -668070958, false);
					disable_control_action(0, 1250966545, false);
				}
			}
			func_1314();
			if (!func_1303(cParam0, 512))
			{
				if (is_screen_faded_out())
				{
					if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
					{
						do_screen_fade_in(3000);
						_0x9428447ded71fc7e("Chapter_Screen_Scenes");
					}
				}
			}
			_0x72d4cb5db927009c(-164645981, -1, 0);
			func_1312(cParam0);
			if (!does_entity_exist(iVar1103))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					iLocal_1106 = _get_anim_scene_ped(cParam0->f_7375.f_804, "CS_DAVEYCALLENDER", true);
					set_ped_config_flag(iVar1103, 243, true);
					set_ped_config_flag(iVar1103, 186, false);
				}
			}
			if (!func_177(iVar905, 2))
			{
				if (!_does_anim_scene_exist(cParam0->f_7375.f_804) || has_anim_event_fired(&(uLocal_1064[13]), -928298896))
				{
					func_1606();
					func_414(1, 0);
					func_179(&uLocal_908, 2);
				}
			}
			if (!func_177(iLocal_92, 1))
			{
				if (func_1603(cParam0, Global_35, 0, 0, 1, 1))
				{
					func_179(&uLocal_909, 2048);
					_0x0348469daa17576c(&(iLocal_1084[0]));
					func_179(&iLocal_92, 1);
				}
			}
			if (!func_177(iLocal_92, 2))
			{
				if (func_1603(cParam0, &(uLocal_1064[1]), 0, 0, 1, 1))
				{
					func_179(&iLocal_92, 2);
				}
			}
			if (!func_177(iLocal_92, 1024))
			{
				if (func_1607(cParam0))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					func_179(&iLocal_92, 1024);
				}
			}
			if ((_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_active(cParam0->f_7375.f_804)) || (!_does_anim_scene_exist(cParam0->f_7375.f_804) && !func_8(cParam0, 8)))
			{
				if (func_1312(cParam0))
				{
					func_1608();
				}
			}
			break;
		case 2:
			func_1609(cParam0);
			_0x72d4cb5db927009c(-164645981, -1, 0);
			if (!func_177(iVar906, 1048576))
			{
				_0xec3f7f24eeeb3ba3();
				func_179(&uLocal_909, 1048576);
			}
			if (_does_anim_scene_exist(&(uLocal_182[1])))
			{
				if (_is_anim_scene_started(&(uLocal_182[1]), false))
				{
					_delete_anim_scene(&(uLocal_182[1]));
				}
			}
			if (!func_177(iLocal_92, 1))
			{
				if (func_1603(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (!is_ped_on_mount(Global_35))
					{
						func_1318(Global_35, &(iLocal_1084[0]), 0, -1, 1);
					}
					func_179(&iLocal_92, 1);
					func_179(&uLocal_907, 2048);
				}
			}
			if (!func_177(iLocal_92, 2))
			{
				if (func_1603(cParam0, &(uLocal_1064[1]), 0, 0, 1, 1))
				{
					if (!is_ped_on_mount(&(uLocal_1064[1])))
					{
						func_1318(&(uLocal_1064[1]), &(iLocal_1084[1]), 0, -1, 1);
					}
					if (func_177(iVar905, 16384))
					{
						open_sequence_task(&iVar0);
						task_pause(0, 2000);
						if (func_177(iVar901, 33554432))
						{
							task_follow_waypoint_recording(0, sVar879, 0, 27656, -1, 0, 0, -1);
						}
						else
						{
							task_follow_waypoint_recording(0, sVar878, 0, 27656, -1, 0, 0, -1);
						}
						close_sequence_task(iVar0);
						task_perform_sequence(&(uLocal_1064[1]), iVar0);
						clear_sequence_task(&iVar0);
						_0x2208438012482a1a(&(uLocal_1064[1]), true, false);
					}
					func_179(&iLocal_92, 2);
				}
			}
			if (!func_177(iLocal_92, 4))
			{
				if (func_1603(cParam0, &(uLocal_1064[2]), 0, 0, 1, 1))
				{
					if (!is_ped_on_mount(&(uLocal_1064[2])))
					{
						func_1318(&(uLocal_1064[2]), &(iLocal_1084[2]), 0, -1, 1);
					}
					open_sequence_task(&iVar0);
					task_follow_waypoint_recording(0, sVar877, 0, 25608, -1, 0, 0, -1);
					close_sequence_task(iVar0);
					task_perform_sequence(&(uLocal_1064[2]), iVar0);
					clear_sequence_task(&iVar0);
					force_ped_motion_state(&(iLocal_1084[2]), -668482597, false, 0, false);
					set_ped_config_flag(&(uLocal_1064[2]), 72, true);
					func_179(&uLocal_906, 268435456);
					if ((get_script_task_status(&(uLocal_1064[1]), 242628503, true) == 0 || get_script_task_status(&(uLocal_1064[1]), 242628503, true) == 1) || !func_177(iVar905, 16384))
					{
					}
					if (func_1610())
					{
						func_1347(1);
						func_179(&uLocal_905, 1048576);
						func_179(&iLocal_92, 4);
					}
				}
			}
			break;
		case 10:
			func_1436(cParam0);
			if (!func_177(iVar905, 2048))
			{
				func_1611();
				func_179(&uLocal_908, 2048);
			}
			func_1434(cParam0);
			if (!func_177(iLocal_92, 512))
			{
				if (_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
					if (has_anim_event_fired(Global_35, -754318485) || _get_anim_scene_time(cParam0->f_7375.f_804) > 60f)
					{
						func_414(0, 0);
						if (func_1436(cParam0))
						{
							func_1437();
							func_179(&iLocal_92, 512);
						}
					}
				}
			}
			if (func_177(iLocal_92, 512))
			{
				if (!func_177(iVar904, 33554432))
				{
					if (_does_anim_scene_exist(&(uLocal_182[32])))
					{
						if (_get_anim_scene_time(&(uLocal_182[32])) >= 0f)
						{
							_0x8eedfd8921389928(-559.4327f, 2700.801f, 321.1399f, 10f, 5f, 5f, 5f, 200f, 4, 0);
							func_179(&uLocal_907, 33554432);
						}
					}
				}
				else if (!func_177(iVar905, 8388608))
				{
					if (_does_anim_scene_exist(&(uLocal_182[32])))
					{
						if (_get_anim_scene_time(&(uLocal_182[32])) >= 0f)
						{
							_0x8eedfd8921389928(-558.2f, 2700.051f, 323.9688f, 10f, 5f, 5f, 5f, 200f, 4, 0);
							func_179(&uLocal_908, 8388608);
						}
					}
				}
				else if (!func_177(iVar905, 16777216))
				{
					if (_does_anim_scene_exist(&(uLocal_182[32])))
					{
						if (_get_anim_scene_time(&(uLocal_182[32])) >= 0f)
						{
							_0x8eedfd8921389928(-561.2762f, 2703.928f, 321.105f, 10f, 5f, 5f, 5f, 200f, 4, 0);
							func_179(&uLocal_908, 16777216);
						}
					}
				}
				else if (!func_177(iVar905, 33554432))
				{
					if (_does_anim_scene_exist(&(uLocal_182[32])))
					{
						if (_get_anim_scene_time(&(uLocal_182[32])) >= 0f)
						{
							_0x8eedfd8921389928(-560.6094f, 2705.061f, 321.1205f, 10f, 5f, 5f, 5f, 200f, 4, 0);
							func_179(&uLocal_908, 33554432);
						}
					}
				}
			}
			if (!func_177(iLocal_92, 1))
			{
				if (func_1603(cParam0, Global_35, 0, 0, 1, 0))
				{
					if (!func_1612(Global_35, &(iLocal_1084[0]), 0))
					{
						func_1318(Global_35, &(iLocal_1084[0]), 0, -1, 1);
					}
					func_1327(Global_35, 0);
					func_1317(&(iLocal_1084[0]), func_250(17, 5), 34, 1073741824);
					open_sequence_task(&uLocal_1018);
					task_follow_waypoint_recording(0, sVar888, 0, 42, -1, 0, 0, -1);
					close_sequence_task(iVar1015);
					task_perform_sequence(Global_35, iVar1015);
					clear_sequence_task(&uLocal_1018);
				}
			}
			if (!func_177(iLocal_92, 2))
			{
				if (func_1603(cParam0, &(uLocal_1064[1]), 0, 0, 1, 1))
				{
					func_1327(&(uLocal_1064[1]), 0);
					func_1613();
					open_sequence_task(&uLocal_1018);
					task_follow_waypoint_recording(0, sVar888, 0, 42, -1, 0, 0, -1);
					close_sequence_task(iVar1015);
					task_perform_sequence(&(uLocal_1064[1]), iVar1015);
					clear_sequence_task(&uLocal_1018);
					func_179(&iLocal_92, 2);
				}
			}
			if ((_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_active(cParam0->f_7375.f_804)) || (!_does_anim_scene_exist(cParam0->f_7375.f_804) && !func_8(cParam0, 8)))
			{
				func_186(cParam0, 1);
				if (!_does_anim_scene_exist(cParam0->f_7375.f_804))
				{
				}
				func_179(&uLocal_908, 64);
				func_1434(cParam0);
			}
			break;
		case 25:
			if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
			{
				if (_get_anim_scene_time(cParam0->f_7375.f_804) < 10f)
				{
					set_force_object_this_frame(-1307.184f, 2425.93f, 306.6535f, 5f);
				}
			}
			func_1614(1, 0, 0);
			func_1615(5);
			if (!func_1303(cParam0, 512))
			{
				if (func_1603(cParam0, &(uLocal_1064[11]), 0, 0, 1, 1))
				{
					func_286(cParam0, 13, &(uLocal_1064[11]), 0, 0, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[13]), 0, 0, 1, 1))
				{
					func_286(cParam0, 5, &(uLocal_1064[13]), 0, 0, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[17]), 0, 0, 1, 1))
				{
					func_286(cParam0, 22, &(uLocal_1064[17]), 0, 0, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[5]), 0, 0, 1, 1))
				{
					func_286(cParam0, 14, &(uLocal_1064[5]), 0, 0, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[8]), 0, 0, 1, 1))
				{
					func_286(cParam0, 15, &(uLocal_1064[8]), 0, 0, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[4]), 0, 0, 1, 1))
				{
					func_286(cParam0, 3, &(uLocal_1064[4]), 0, 1, 0, 0);
				}
				if (func_1603(cParam0, &(uLocal_1064[2]), 0, 0, 1, 1))
				{
					func_286(cParam0, 6, &(uLocal_1064[2]), 0, 1, 0, 0);
				}
			}
			if (!func_177(iVar906, 131072))
			{
				if (has_anim_event_fired(Global_35, -134367448))
				{
					func_1616(Global_35, -164645981);
					func_179(&uLocal_909, 131072);
				}
			}
			if (func_1603(cParam0, Global_35, 0, 0, 1, 1))
			{
				if (!func_82(32768))
				{
					if (does_entity_exist(func_581(13)))
					{
						set_anim_scene_entity(&(uLocal_182[34]), func_1294(func_581(13)), func_581(13), 0);
					}
					start_anim_scene(&(uLocal_182[34]));
				}
				func_286(cParam0, 13, &(uLocal_1064[11]), 0, 0, 0, 0);
				func_57(cParam0, 0, 0, 1);
				func_1617(cParam0);
			}
			break;
	}
	return 1;
}

void func_972(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_973(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			func_175();
			break;
		case 1:
			if (!bVar1262)
			{
				func_1315();
				iLocal_1265 = 1;
			}
			if (!func_1316(1, 0, 0))
			{
				return 0;
			}
			func_175();
			if (!func_177(iVar905, 2))
			{
				func_414(1, 0);
				func_1606();
				func_179(&uLocal_908, 2);
			}
			if (!func_177(iVar904, 2097152))
			{
				_0x513f8aa5bf2f17cf(func_473(13, 2), 200f, 0);
				func_247(&uLocal_1454);
				func_179(&uLocal_907, 2097152);
			}
			else if (func_1343(&uLocal_1454) >= 10000 || _0x0909f71b5c070797())
			{
				if (_0xcf45df50c7775f2a())
				{
					_0x5a8b01199c3e79c3();
				}
				iLocal_1265 = 0;
				return 1;
			}
			return 0;
		case 2:
			func_1618(cParam0, "WNT1_OBJ_FLW_MCH", -1082130432, 0, 0, -1, -1, 0);
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
		case 25:
			func_286(cParam0, 13, &(uLocal_1064[11]), 0, 0, 0, 0);
			func_57(cParam0, 0, 0, 1);
			if (!func_82(32768))
			{
				if (func_1614(1, 0, 0))
				{
					if (func_219(func_12(1)))
					{
						if (func_1620(func_1619(func_12(1)), 128))
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
			return 0;
	}
	return 1;
}

void func_974(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_975(char[4] cParam0)
{
	if (!func_625(15))
	{
		func_626(15);
	}
	func_1621(cParam0);
	func_1622();
	func_1623();
	func_1624(&(Global_1934765->f_339));
	_0xf45e46deecf7df6e(6144, 0, 0, -1, -1);
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	func_1625();
	func_1626(cParam0);
	func_1627(cParam0);
	func_1628(cParam0);
	if (func_162(cParam0, func_33(cParam0)) != 5)
	{
		return;
	}
	func_1629();
	func_1630(cParam0);
	func_1601();
	func_1631(cParam0);
	func_1632();
	func_1633(cParam0);
	func_1634(cParam0);
	func_1635(cParam0);
	func_1636(cParam0);
	func_1637(cParam0);
	func_1638(cParam0);
	func_1639(cParam0);
	func_1640(cParam0);
	func_1641();
	if (func_33(cParam0) != iLocal_90)
	{
		_0x6cab0ba160b168d2();
	}
	_0xc3abcfbc7d74afa5(Global_35, 0, 1);
	func_1642(1155496742);
	if (func_177(iVar901, 131072))
	{
		func_1643(1);
	}
	else
	{
		func_1643(0);
	}
}

void func_976(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1644(cParam0);
}

void func_977(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_240())
			{
				if (func_936(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_247(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_978(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1645(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1646();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1647(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_979(char[4] cParam0)
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
		if (func_265() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_265() && !func_54())
	{
		func_932(cParam0, 1048576);
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
			func_932(cParam0, 134217728);
		}
	}
}

void func_980(char[4] cParam0)
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

void func_981(char[4] cParam0)
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

void func_982(char[4] cParam0)
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

int func_983(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_281(cParam0->f_5423[iVar0]))
		{
			func_1023(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_984(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1648(iVar0))
	{
		return false;
	}
	iVar1 = func_1649(iParam2);
	if (!func_1650(iVar1))
	{
		return false;
	}
	if (!func_1651(cParam0, iParam1, iParam2))
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

int func_985(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_986(char[4] cParam0, int iParam1)
{
	cParam0->f_607 = cParam0->f_607;
	return 1;
}

void func_987(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_247(&(cParam0->f_603));
	}
}

void func_988(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_989(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_936(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_282(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_283(cParam0->f_5421))
		{
			iVar2 = func_284(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					bVar3 = func_1652(cParam0->f_5421, iVar1);
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

float func_990(char[4] cParam0)
{
	return func_936(&(cParam0->f_603));
}

bool func_991(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_992(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_984(cParam0, iParam1, 4))
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
		func_1653(cParam0);
		if (func_1654(cParam0))
		{
			func_1655(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_932(cParam0, 524288);
		func_1656(&(cParam0->f_7375), 4);
		if (func_1645(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1646();
		}
		return true;
	}
	return false;
}

void func_993(char[4] cParam0)
{
	func_1657(cParam0);
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

bool func_994(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_931(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_932(cParam0, 2097152);
			func_292(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_986(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1552(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_931(cParam0))
			{
				func_932(cParam0, 2097152);
				func_933(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_933(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_931(cParam0))
		{
			func_932(cParam0, 2097152);
			func_1559(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_933(cParam0, Var0);
	}
	return true;
}

bool func_995(char[4] cParam0)
{
	return func_1658(&(cParam0->f_7375));
}

void func_996(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1659(cParam0))
		{
			func_461(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1660(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_997(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_281(cParam0->f_5423[iVar1]))
		{
			if (func_1661(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1662(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_998(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1663(cParam0))
		{
			func_461(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1660(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_999(char[4] cParam0)
{
	switch (func_1664(&iVar0))
	{
		case 1:
			func_1665(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_217(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_1000(char[4] cParam0, int iParam1)
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

int func_1001(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1558(cParam0);
		func_932(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1552(cParam0, iParam1) };
	if (func_1666(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_1002(char[4] cParam0, int iParam1)
{
	func_1667(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_252(cParam0, iParam1));
}

void func_1003(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_988(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_932(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_932(cParam0, 4);
		func_932(cParam0, 8192);
		func_932(cParam0, 536870912);
		func_292(cParam0, 4);
		func_65(0);
		func_64(0);
		func_932(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1668(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_407(cParam0, 524288);
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
				func_1669(1, 1);
			}
		}
	}
}

void func_1004(bool bParam0)
{
	if (!func_224(0, 0, 1) || bParam0)
	{
		iVar0 = func_1108();
		iVar1 = func_1111(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1670(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1670(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_1005(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1671(bParam1, bParam2, bParam3);
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

var func_1006(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1672(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1673(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1672(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_1007(char[4] cParam0)
{
	return true;
}

bool func_1008(char[4] cParam0)
{
	return true;
}

int func_1009(char[4] cParam0)
{
	return 1;
}

void func_1010(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		_0x1e017404784aa6a3(uParam0, iParam1);
		_0x0d7fd6a55fd63aef(7, 3, 1);
		_0x0d7fd6a55fd63aef(25, 3, 1);
		_0x0d7fd6a55fd63aef(21, 3, 1);
		_0x0d7fd6a55fd63aef(14, 3, 1);
		_0x0d7fd6a55fd63aef(23, 3, 1);
		_0x0d7fd6a55fd63aef(22, 3, 1);
		_0x0d7fd6a55fd63aef(38, 3, 0);
		_0x0d7fd6a55fd63aef(39, 3, 0);
	}
	else
	{
		_0x2b4ce170de09f346(uParam0, iParam1);
		_0x660a8f876df1d4f8(7);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(14);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(22);
		_0x660a8f876df1d4f8(38);
		_0x660a8f876df1d4f8(39);
	}
}

bool func_1011(int iParam0, int iParam1)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_1674(iParam0, iParam1);
	return bVar0;
}

void func_1012(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1047(iParam0))
		{
			return;
		}
	}
	func_1675(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

Vector3 func_1013(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -549.126f, 2694.128f, 318.7223f;
				case 1:
					return -550.8969f, 2690.315f, 318.7623f;
				case 2:
					return -560.516f, 2696.681f, 318.7894f;
				case 3:
					return -1347.489f, 2414.866f, 305.9902f;
				case 4:
					return -551.4943f, 2692.104f, 319.1819f;
				case 5:
					return -550.8186f, 2693.235f, 318.8623f;
				case 6:
					return -556.0465f, 2700.886f, 319.4444f;
				case 7:
					return -554.8151f, 2703.409f, 319.4651f;
				case 8:
					return -550.6574f, 2705.949f, 319.429f;
				case 9:
					return -554.4824f, 2701.723f, 319.4562f;
				case 10:
					return -550.3443f, 2690.816f, 318.6254f;
				case 11:
					return -569.683f, 2701.151f, 319.584f;
				case 12:
					return -562.7584f, 2696.001f, 319.0048f;
				case 13:
					return -566.2433f, 2696.135f, 318.535f;
				case 14:
					return -1350.407f, 2421.039f, 306.7565f;
				case 15:
					return -1353.485f, 2429.729f, 306.9984f;
				case 16:
					return -1350.187f, 2431.5f, 307.1114f;
				case 17:
					return -1349.093f, 2420.517f, 306.6555f;
				case 18:
					return -1321.291f, 2439.384f, 308.6653f;
				case 19:
					return -1352.496f, 2422.055f, 306.9413f;
				case 20:
					return -1321.964f, 2438.262f, 308.6913f;
				case 21:
					return -1356.074f, 2408.213f, 307.234f;
				case 22:
					return -552.0107f, 2690.143f, 318.6207f;
				case 23:
					return -1300.348f, 2421.627f, 305.5985f;
				case 24:
					return -1354.409f, 2423.989f, 307.0577f;
				case 25:
					return -1348.436f, 2436.4f, 307.6571f;
				case 26:
					return -1349.342f, 2437.152f, 307.5569f;
				case 27:
					return -1324.395f, 2441.035f, 308.8614f;
				case 28:
					return -1324.992f, 2440.551f, 308.8614f;
				case 29:
					return -1333.878f, 2400.879f, 306.135f;
				case 30:
					return -1334.576f, 2401.971f, 306.135f;
				case 31:
					return -1331.558f, 2427.387f, 307.135f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1356.09f, 2443.6f, 307.4225f;
				case 1:
					return -1355.4f, 2443.654f, 307.3958f;
				case 2:
					return -1350.407f, 2421.039f, 306.757f;
				case 3:
					return -1359.365f, 2428.908f, 306.8413f;
				case 4:
					return -1365.601f, 2429.401f, 306.9464f;
				case 5:
					return -1366.125f, 2430.534f, 306.9004f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1087.299f, 2548.73f, 305.013f;
				case 1:
					return -1058.137f, 2582.992f, 307.0163f;
				case 2:
					return -1110.086f, 2520.66f, 299.7033f;
				case 3:
					return -1088.112f, 2549.21f, 305.3069f;
				case 4:
					return -605.8749f, 2679.398f, 323.4439f;
				case 5:
					return -1058.222f, 2582.915f, 306.8803f;
				case 6:
					return -638.5231f, 2692.088f, 341.6805f;
				case 7:
					return -638.2866f, 2695.643f, 341.55f;
				case 8:
					return -637.7407f, 2699.29f, 341.6074f;
				case 9:
					return -1050.823f, 2585.523f, 307.4921f;
				case 10:
					return -1055.4f, 2584.829f, 307.2421f;
				case 11:
					return -1068.145f, 2572.334f, 305.8655f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -589.8364f, 2683.528f, 320.7961f;
				case 1:
					return -588.5209f, 2685.808f, 320.9451f;
				case 2:
					return -585.4456f, 2684.719f, 320.3979f;
				case 3:
					return -598.1416f, 2686.035f, 322.6384f;
				case 4:
					return -596.1995f, 2685.475f, 322.4523f;
				case 5:
					return -592.8522f, 2685.024f, 322.2314f;
				case 6:
					return -554.5f, 2705.5f, 322f;
				case 7:
					return -570.8674f, 2691.965f, 319.4725f;
				case 8:
					return -586.5501f, 2684.372f, 320.2758f;
				case 9:
					return -573.8251f, 2696.776f, 319.344f;
				case 10:
					return -606.0109f, 2676.362f, 323.4361f;
				case 11:
					return -596.9157f, 2678.723f, 322.7169f;
				case 12:
					return -604.7109f, 2679.182f, 323.5117f;
				case 13:
					return -598.2105f, 2681.926f, 322.4232f;
				case 14:
					return -602.4337f, 2678.345f, 322.8422f;
				case 15:
					return -596.9024f, 2680.516f, 322.2779f;
				case 16:
					return -573.5289f, 2698.038f, 319.4702f;
				case 17:
					return -573.9698f, 2695.441f, 319.4702f;
				case 18:
					return -574.0705f, 2693.956f, 319.7202f;
				case 19:
					return -596.8045f, 2685.338f, 321.8629f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -557.7734f, 2697.585f, 317.9416f;
				case 1:
					return -558.7478f, 2703.263f, 319.429f;
				case 2:
					return -556.0554f, 2702.975f, 320.179f;
				case 3:
					return -554.1286f, 2703.682f, 319.4651f;
				case 4:
					return -559.5352f, 2703.88f, 319.429f;
				case 5:
					return -555.8525f, 2703.151f, 320.2074f;
				case 6:
					return -553.9393f, 2699.874f, 320.207f;
				case 7:
					return -593.0891f, 2686.395f, 321.7635f;
				case 8:
					return -561.4393f, 2697.793f, 318.8144f;
				case 9:
					return -561.3729f, 2695.598f, 318.9921f;
				case 10:
					return -562.3231f, 2695.22f, 319.0825f;
				case 11:
					return -565.4405f, 2697.991f, 319.3163f;
				case 12:
					return -564.5906f, 2696.555f, 319.1151f;
				case 13:
					return -561.5925f, 2694.701f, 318.8867f;
				case 14:
					return -559.6125f, 2698.512f, 318.8323f;
				case 15:
					return -560.7463f, 2698.891f, 318.847f;
				case 16:
					return -552.0554f, 2709.396f, 322.435f;
				case 17:
					return -555.7553f, 2705.082f, 320.2078f;
				case 18:
					return -556.4439f, 2704.891f, 320.0818f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -558.2736f, 2697.154f, 318.783f;
				case 1:
					return -551.3223f, 2707.478f, 319.4992f;
				case 2:
					return -557.314f, 2705.149f, 319.499f;
				case 3:
					return -534.8377f, 2670.477f, 317.7525f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1354.689f, 2442.709f, 307.6412f;
				case 1:
					return -1346.426f, 2418.051f, 306.227f;
				case 2:
					return -1352.535f, 2424.631f, 306.9413f;
				case 3:
					return -1357.63f, 2442.914f, 307.5164f;
				case 4:
					return -1345.992f, 2435.137f, 307.0222f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -558.9784f, 2694.504f, 319.0848f;
				case 1:
					return -556.1304f, 2700.822f, 319.4002f;
				case 2:
					return -554.8923f, 2702.798f, 319.4444f;
				case 3:
					return -563.9199f, 2703.044f, 319.422f;
				case 4:
					return -561.2054f, 2696.611f, 318.9651f;
				case 5:
					return -554.1659f, 2692.339f, 318.8421f;
				case 6:
					return -554.2499f, 2700.507f, 319.4005f;
				case 7:
					return -554.7956f, 2694.804f, 318.9473f;
				case 8:
					return -558.9284f, 2694.418f, 319.3287f;
				case 9:
					return -561.8673f, 2698.701f, 318.92f;
				case 10:
					return -553.5929f, 2697.241f, 319.5804f;
				case 11:
					return -557.0765f, 2707.744f, 319.8911f;
				case 12:
					return -563.8796f, 2702.28f, 319.2061f;
				case 13:
					return -565.8044f, 2701.359f, 319.7127f;
				case 14:
					return -556.7647f, 2698.775f, 319.394f;
				case 15:
					return -568.1996f, 2696.748f, 319.6021f;
				case 16:
					return -563.6536f, 2696.724f, 318.8521f;
				case 17:
					return -554.1071f, 2695.865f, 319.3521f;
				case 18:
					return -563.1431f, 2694.392f, 318.9613f;
				case 19:
					return -560.4378f, 2699.269f, 322.4932f;
				case 20:
					return -572.2604f, 2701.859f, 320.798f;
				case 21:
					return -557.4784f, 2700.159f, 323.1951f;
				case 22:
					return -553.6201f, 2713.06f, 319.8402f;
				case 23:
					return -560.4499f, 2694.106f, 318.8856f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1347.203f, 2414.656f, 306.1091f;
				case 1:
					return -1362.321f, 2410.706f, 306.6811f;
				case 2:
					return -1344.787f, 2418.154f, 306.3366f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1908.819f, 3281.847f, 546.3461f;
				case 1:
					return -1908.294f, 3283.832f, 545.8461f;
				case 2:
					return -1907.087f, 3285.335f, 545.8461f;
				case 3:
					return -1906.095f, 3286.825f, 545.0961f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -1341.741f, 2429.782f, 307.1641f;
				case 1:
					return -1339.095f, 2433.589f, 307.5218f;
				case 2:
					return -1336.291f, 2446.413f, 308.0107f;
				case 3:
					return -1336.581f, 2442.77f, 307.993f;
				case 4:
					return -1065.761f, 2576.53f, 306.003f;
				case 5:
					return -1015.466f, 2636.456f, 311.8198f;
				case 6:
					return -1016.731f, 2637.464f, 311.6628f;
				case 7:
					return -1093.9f, 2541.748f, 305.4905f;
				case 8:
					return -1064.214f, 2575.12f, 306.08f;
				case 9:
					return -1051.608f, 2591.738f, 307.7088f;
				case 10:
					return -1059.536f, 2581.405f, 306.9486f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -556.9926f, 2698.874f, 319.3834f;
				case 1:
					return -559.5023f, 2700.752f, 320.7267f;
				case 2:
					return -561.364f, 2704.025f, 320.64f;
				case 3:
					return -560.623f, 2705.058f, 320.581f;
				case 4:
					return -558.4683f, 2708.624f, 319.3861f;
				case 5:
					return -549.598f, 2708.774f, 320.297f;
				case 6:
					return -549.031f, 2705.57f, 320.296f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1041.506f, 2621.808f, 307.4394f;
				case 1:
					return -1041.481f, 2624.04f, 307.7592f;
				case 2:
					return -1040.104f, 2625.898f, 308.0063f;
				case 3:
					return -1039.48f, 2622.809f, 307.6871f;
				case 4:
					return -1038.344f, 2624.466f, 307.8838f;
				case 5:
					return -1314.188f, 2419.922f, 306.6066f;
				case 6:
					return -1315.184f, 2421.751f, 306.7738f;
				case 7:
					return -1318.825f, 2420.952f, 306.6569f;
				case 8:
					return -1311.401f, 2419.911f, 306.373f;
				case 9:
					return -1310.194f, 2417.723f, 306.1963f;
				case 10:
					return -1111.679f, 2523.026f, 298.6325f;
				case 11:
					return -1112.223f, 2521.049f, 298.4349f;
				case 12:
					return -636.7356f, 2691.048f, 324.9176f;
				case 13:
					return -636.9883f, 2693.81f, 324.9403f;
				case 14:
					return -639.2946f, 2692.339f, 325.0417f;
				case 15:
					return -535.4032f, 2674.103f, 317.7051f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -554.5488f, 2704.235f, 318.4688f;
				case 1:
					return -563.439f, 2691.244f, 318.756f;
				case 2:
					return -1342.663f, 2428.913f, 306.7383f;
				case 3:
					return -556.546f, 2698.604f, 319.386f;
				case 4:
					return -535.317f, 2675.331f, 317.9492f;
				case 5:
					return -536.507f, 2675.252f, 317.723f;
				case 6:
					return -534.179f, 2675.388f, 317.723f;
				case 7:
					return -555.9529f, 2696.242f, 318.8438f;
				case 8:
					return -562.7656f, 2700.386f, 319.0475f;
				case 9:
					return -552.4203f, 2697.11f, 319.1139f;
				case 10:
					return -565.3889f, 2702.731f, 319.5304f;
				case 11:
					return -1318.599f, 2436.536f, 308.8173f;
				case 12:
					return -1321.016f, 2444.357f, 308.8653f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -535.3049f, 2676.087f, 317.9586f;
				case 1:
					return -535.2375f, 2673.928f, 320.9784f;
				case 2:
					return -535.0481f, 2670.909f, 318.2469f;
				case 3:
					return -535.0955f, 2672.258f, 317.9816f;
				case 4:
					return -538.4285f, 2672.768f, 317.9821f;
				case 5:
					return -536.2468f, 2671.896f, 317.8863f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -537.995f, 2668.021f, 317.7279f;
				case 1:
					return -533.7154f, 2667.275f, 317.752f;
				case 2:
					return -538.3524f, 2673.799f, 317.7313f;
				case 3:
					return -538.6021f, 2677.13f, 318.1454f;
				case 4:
					return -534.9652f, 2673.442f, 317.8627f;
				case 5:
					return -537.1947f, 2668.003f, 317.7274f;
				case 6:
					return -534.2451f, 2675.125f, 318.0288f;
				case 7:
					return -536.9863f, 2675.974f, 318.0288f;
				case 8:
					return -550.925f, 2693.284f, 318.7843f;
				case 9:
					return -559.5393f, 2692.569f, 319.1227f;
				case 10:
					return -561.2888f, 2695.078f, 318.8727f;
				case 11:
					return -552.1627f, 2693.225f, 319.6025f;
				case 12:
					return -552.6356f, 2692.42f, 319.6408f;
				case 13:
					return -552.1626f, 2693.132f, 319.6408f;
				case 14:
					return -551.603f, 2694.104f, 319.6408f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -535.3126f, 2676.591f, 317.8742f;
				case 1:
					return -534.8616f, 2671.614f, 317.9804f;
				case 2:
					return -534.9197f, 2673.238f, 317.9815f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -577.5717f, 2684.472f, 320.0268f;
				case 1:
					return -573.316f, 2685.228f, 319.2768f;
				case 2:
					return -567.4244f, 2685.631f, 319.0268f;
				case 3:
					return -563.3377f, 2686.226f, 319.0268f;
				case 4:
					return -553.1518f, 2689.616f, 318.8175f;
				case 5:
					return -551.5262f, 2692.286f, 318.8175f;
				case 6:
					return -549.6575f, 2695.419f, 318.8175f;
				case 7:
					return -548.826f, 2697.237f, 318.8175f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -558.2291f, 2699.056f, 320.0522f;
				case 1:
					return -556.4634f, 2697.78f, 320.0522f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1014(int* iParam0, bool bParam1)
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

bool func_1015(int iParam0)
{
	func_1106(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

bool func_1016(int iParam0)
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

int func_1017(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_1016(iParam0))
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

bool func_1018(char[4] cParam0, bool bParam1)
{
	return func_1022(cParam0, bParam1, &uVar0);
}

void func_1019(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_464(&iVar0);
}

void func_1020(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1022(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1676(cParam0->f_5423[iVar0], iParam2);
}

void func_1021(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return;
	}
	if (!func_1022(cParam0, bParam1, &iVar0))
	{
		return;
	}
	func_1677(cParam0->f_5423[iVar0], iParam2);
}

bool func_1022(char[4] cParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_281(cParam0->f_5423[iVar0]))
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

void func_1023(var uParam0)
{
	if (func_543(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_543(uParam0, 1024);
	if (func_543(uParam0, 128) || bVar0)
	{
		if (func_543(uParam0, 4096))
		{
			if (!func_543(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1677(uParam0, 2048);
				return;
			}
		}
		else if (func_543(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1676(uParam0, 2048);
		}
		if (func_543(uParam0, 512))
		{
			if (func_544(uParam0->f_10))
			{
				if (func_922(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1678(uParam0->f_10))
					{
						func_549(uParam0->f_10, 1);
						func_1679(uParam0->f_10, 0);
					}
				}
				else if ((func_1678(uParam0->f_10) && !bVar0) && !func_543(uParam0, 16384))
				{
					func_549(uParam0->f_10, 0);
					func_1679(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_922(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_922(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_543(uParam0, 512))
	{
		if (func_544(uParam0->f_10))
		{
			if (func_1678(uParam0->f_10))
			{
				func_549(uParam0->f_10, 0);
				func_1679(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_1024(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1073(iParam0, 36, 1))
	{
		func_1071(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1680(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_1025(int iParam0)
{
	if (func_1681(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_1026(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_1025(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_1027(int iParam0, bool bParam1)
{
	if (func_1025(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1028(int iParam0, bool bParam1)
{
	if (func_1025(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1029(int iParam0, bool bParam1)
{
	if (func_1025(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1030()
{
	return true;
}

void func_1031(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_1032(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_1033(int iParam0)
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

int func_1034(int iParam0)
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

void func_1035(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1682(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_1036(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1037(int iParam0)
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

char* func_1038(int iParam0)
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

bool func_1039(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_1040(int iParam0)
{
	iVar0 = func_1054(iParam0, 1);
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

void func_1041(int iParam0)
{
	iVar0 = func_1054(iParam0, 1);
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

void func_1042()
{
	func_1041(-939420910);
	func_1041(-1187950766);
	func_1041(356365161);
	func_1041(753127042);
	func_1041(-2038424081);
	func_1041(1884271742);
	func_1041(459290420);
}

void func_1043()
{
	func_1041(704802028);
	func_1041(588987611);
	func_1041(2008888900);
	func_1041(1649996811);
	func_1041(227918160);
	func_1041(168171957);
	func_1041(1193080109);
	func_1041(-491981251);
	func_1041(-639037538);
	func_1041(-618620429);
}

void func_1044(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1683();
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
	if (func_1684(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

void func_1045(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

float func_1046(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 461.3836f;
				case 1:
					return -331.39f;
				case 2:
					return -234.013f;
				case 3:
					return -113.8202f;
				case 4:
					return -298.0127f;
				case 5:
					return -297.76f;
				case 6:
					return 322.296f;
				case 7:
					return 289.796f;
				case 8:
					return 111.796f;
				case 9:
					return 349.796f;
				case 10:
					return 49.796f;
				case 11:
					return 51.796f;
				case 12:
					return 127.796f;
				case 13:
					return 123.2831f;
				case 14:
					return 158.3116f;
				case 15:
					return 70.3116f;
				case 16:
					return 56.3116f;
				case 17:
					return 156.3116f;
				case 18:
					return -129.6884f;
				case 19:
					return 28.3116f;
				case 20:
					return -101.6884f;
				case 21:
					return 68.0109f;
				case 22:
					return 408.7986f;
				case 23:
					return 112.1838f;
				case 24:
					return -88.3812f;
				case 25:
					return 204.2184f;
				case 26:
					return 218.5563f;
				case 27:
					return 85.793f;
				case 28:
					return 71.793f;
				case 29:
					return -20.4437f;
				case 30:
					return -152.4437f;
				case 31:
					return 250.4744f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -469f;
				case 1:
					return 108.8595f;
				case 2:
					return 158.312f;
				case 3:
					return 69.703f;
				case 4:
					return 115.703f;
				case 5:
					return 115.703f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -31.54f;
				case 1:
					return -217.11f;
				case 2:
					return -35.08f;
				case 3:
					return -34f;
				case 4:
					return 283.4383f;
				case 5:
					return 142.1266f;
				case 6:
					return 265.1626f;
				case 7:
					return 263.1626f;
				case 8:
					return 271.1671f;
				case 9:
					return 289.1109f;
				case 10:
					return 287.1109f;
				case 11:
					return 309.1109f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1368.041f;
				case 1:
					return 1664f;
				case 2:
					return 1164.438f;
				case 3:
					return 1395.982f;
				case 4:
					return 1423.581f;
				case 5:
					return 1448.041f;
				case 6:
					return 503.7123f;
				case 7:
					return 296.138f;
				case 8:
					return 290.5004f;
				case 9:
					return 264.0409f;
				case 10:
					return 286.0409f;
				case 11:
					return 294.0409f;
				case 12:
					return 282.0409f;
				case 13:
					return 294.0409f;
				case 14:
					return 286.0409f;
				case 15:
					return 294.0409f;
				case 16:
					return 262.7109f;
				case 17:
					return 262.7109f;
				case 18:
					return 348.7109f;
				case 19:
					return -25.9545f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -26f;
				case 1:
					return 52f;
				case 2:
					return 146f;
				case 3:
					return 49.97f;
				case 4:
					return 54f;
				case 5:
					return 151.8881f;
				case 6:
					return 31.814f;
				case 7:
					return 96.7045f;
				case 8:
					return -95.2955f;
				case 9:
					return 26.5116f;
				case 10:
					return 215.7187f;
				case 11:
					return 310.878f;
				case 12:
					return 308.878f;
				case 13:
					return 320.878f;
				case 14:
					return 52.878f;
				case 15:
					return 236.878f;
				case 16:
					return 146.5611f;
				case 17:
					return 72.1905f;
				case 18:
					return 328.9069f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -210.0001f;
				case 1:
					return -11.0035f;
				case 2:
					return 54.7769f;
				case 3:
					return 182.6151f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 72f;
				case 1:
					return -201.1402f;
				case 2:
					return 92.8052f;
				case 3:
					return 250.8591f;
				case 4:
					return 211.0844f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 715.9891f;
				case 1:
					return 509.0998f;
				case 2:
					return 506.894f;
				case 3:
					return 562.894f;
				case 4:
					return 90.0354f;
				case 5:
					return 335.0938f;
				case 6:
					return 139.5173f;
				case 7:
					return 99.5173f;
				case 8:
					return -2.3923f;
				case 9:
					return 141.1556f;
				case 10:
					return 57.1556f;
				case 11:
					return 57.1556f;
				case 12:
					return 175.1556f;
				case 13:
					return 147.1556f;
				case 14:
					return 147.0937f;
				case 15:
					return 121.6067f;
				case 16:
					return 109.6067f;
				case 17:
					return -256.3933f;
				case 18:
					return 353.4048f;
				case 19:
					return 107.667f;
				case 20:
					return 185.4862f;
				case 21:
					return 114.7898f;
				case 22:
					return 419.8809f;
				case 23:
					return 79.6884f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 427.4397f;
				case 1:
					return 71.2594f;
				case 2:
					return 236.46f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -123.54f;
				case 1:
					return -111.08f;
				case 2:
					return -476f;
				case 3:
					return -478.19f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -57.54f;
				case 1:
					return 182.92f;
				case 2:
					return -562f;
				case 3:
					return -558.19f;
				case 4:
					return -42.19f;
				case 5:
					return 96.8073f;
				case 6:
					return 99.2682f;
				case 7:
					return 322.4637f;
				case 8:
					return 315.7035f;
				case 9:
					return 505.9034f;
				case 10:
					return 318.7933f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 145.384f;
				case 1:
					return 148f;
				case 2:
					return 414f;
				case 3:
					return 62.084f;
				case 4:
					return 415.485f;
				case 5:
					return -34.616f;
				case 6:
					return 235.384f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 144f;
				case 1:
					return 504.6355f;
				case 2:
					return 508.6355f;
				case 3:
					return 502.6355f;
				case 4:
					return 502.6355f;
				case 5:
					return 65.0718f;
				case 6:
					return 63.0718f;
				case 7:
					return 67.0718f;
				case 8:
					return 69.0718f;
				case 9:
					return 73.0718f;
				case 10:
					return 319.5061f;
				case 11:
					return 321.5061f;
				case 12:
					return 215.7684f;
				case 13:
					return 215.7684f;
				case 14:
					return 211.7684f;
				case 15:
					return 185.3805f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 327.2943f;
				case 1:
					return 87.5173f;
				case 2:
					return -290f;
				case 3:
					return 145.989f;
				case 4:
					return 360.965f;
				case 5:
					return 360f;
				case 6:
					return 360f;
				case 7:
					return 184.0069f;
				case 8:
					return 124.0069f;
				case 9:
					return 222.0069f;
				case 10:
					return 209.266f;
				case 11:
					return 419.5784f;
				case 12:
					return 247.0082f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 180.7769f;
				case 1:
					return -177.2231f;
				case 2:
					return 2.5742f;
				case 3:
					return 182.5742f;
				case 4:
					return 179.3753f;
				case 5:
					return 177.6736f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2.7769f;
				case 1:
					return 105.3179f;
				case 2:
					return -143.2231f;
				case 3:
					return 268.7769f;
				case 4:
					return 182.7769f;
				case 5:
					return 88.5744f;
				case 6:
					return 88.8634f;
				case 7:
					return 278.8633f;
				case 8:
					return 61.0788f;
				case 9:
					return 433.0561f;
				case 10:
					return 311.0561f;
				case 11:
					return 414.0048f;
				case 12:
					return 421.6777f;
				case 13:
					return 421.6777f;
				case 14:
					return 421.6777f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -175.5031f;
				case 1:
					return 4.4969f;
				case 2:
					return 185.1044f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 97.7108f;
				case 1:
					return 95.7108f;
				case 2:
					return 93.7108f;
				case 3:
					return 99.7108f;
				case 4:
					return 126.9948f;
				case 5:
					return 150.9948f;
				case 6:
					return 150.9948f;
				case 7:
					return 148.9948f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 420.4615f;
				case 1:
					return 232.4615f;
			}
			break;
	}
	return 0f;
}

bool func_1047(int iParam0)
{
	return iParam0 > -1;
}

int func_1048(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_1047(iParam1))
	{
		return 0;
	}
	iVar0 = func_1079(iParam1);
	if ((!does_entity_exist(iVar0) || !func_497(iVar0, 0)) || (bParam3 && !func_1685(iParam1)))
	{
		if (bParam2)
		{
			if (func_1686(iParam1, 1) != 0)
			{
				iVar0 = func_1687(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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
	if (does_entity_exist(iVar0) && func_497(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_1688(iParam1, iVar0);
		func_1689(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

void func_1049(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_1050(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1051(int iParam0)
{
	iVar0 = func_505(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1690(iVar0);
}

int func_1052(int iParam0, int iParam1)
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
			func_1691(iVar2);
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

void func_1053()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1054(int iParam0, int iParam1)
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

int func_1055(bool bParam0)
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

int func_1056(int iParam0)
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

void func_1057(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1058(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1059(int iParam0, int iParam1)
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
			func_1692((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1692(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_217(&(Global_1898164->f_1[0])))
	{
		func_229(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1060(int iParam0, int iParam1, bool bParam2)
{
	if (!func_523(iParam0))
	{
		return;
	}
	func_1693(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1061(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1062(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1063(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1064()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1065(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1694(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1066(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1695();
	}
	else
	{
		return;
	}
	func_1696();
	Global_40.f_9.f_14 = func_312();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1697())
		{
			func_398(Global_1310720->f_1);
		}
		else if (func_1698() == func_399(Global_36, 1) && func_1699() != 2)
		{
			func_398(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_398(Global_36);
		}
		func_1700(Global_36, &vVar0, &uVar4);
		if (!func_1697())
		{
			if (func_1701(vVar0, Global_36) < func_1701(Global_40.f_9.f_7, Global_36))
			{
				func_398(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_399(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1700(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_256(Global_1935630, 8192);
	}
	func_1702();
}

bool func_1067(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_281(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1068(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	func_1703(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1069(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1070(int iParam0)
{
	func_1012(iParam0, 36, 1);
}

void func_1071(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1047(iParam0))
		{
			return;
		}
	}
	func_1675(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1072(int iParam0, bool bParam1)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1704(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1073(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1047(iParam0))
		{
			return false;
		}
	}
	func_1675(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1074(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_544(iParam0))
	{
		bVar1 = func_581(iParam0);
		if (!is_entity_dead(bVar1))
		{
			iVar0 = get_ped_max_health(bVar1);
			set_ped_config_flag(bVar1, 179, true);
			func_1705(iParam0);
		}
	}
	if (func_1073(iParam0, 5, 1))
	{
		set_ped_config_flag(func_581(iParam0), 137, true);
	}
}

void func_1075(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1071(iParam0, 50, 1);
		func_1071(iParam0, 48, 1);
		func_1071(iParam0, 49, 1);
		func_1071(iParam0, 51, 1);
		func_1071(iParam0, 52, 1);
		func_1071(iParam0, 54, 1);
		func_1071(iParam0, 55, 1);
	}
	else
	{
		func_1012(iParam0, 50, 1);
		func_1012(iParam0, 48, 1);
		func_1012(iParam0, 49, 1);
		func_1012(iParam0, 51, 1);
		if (bParam3)
		{
			func_1012(iParam0, 54, 1);
		}
		else
		{
			func_1071(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1012(iParam0, 52, 1);
			if (bParam3)
			{
				func_1012(iParam0, 55, 1);
			}
		}
		else
		{
			func_1071(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1071(iParam0, 55, 1);
			}
		}
	}
}

void func_1076(int iParam0, bool bParam1)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_581(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_581(iParam0), 204, false);
	}
}

void func_1077(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_545(iParam0))
	{
		if (!func_285(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1073(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1072(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	bVar1 = func_581(iParam0);
	if (((does_entity_exist(bVar1) && func_1706(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1012(iParam0, 2, 1);
	}
	else
	{
		func_1707(iParam0);
		func_1012(iParam0, 1, 1);
	}
}

void func_1078(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_544(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1079(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1080(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1047(iParam1))
	{
		return;
	}
	bVar0 = func_1079(iParam1);
	if (func_1708(iParam1))
	{
		if (!func_1685(iParam1))
		{
			return;
		}
	}
	func_1071(iParam1, 39, 1);
	func_1709(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1709(iParam1, 8, 0);
	if (does_entity_exist(bVar0))
	{
		if (!bParam2)
		{
			func_1709(iParam1, 512, 1);
			set_ped_keep_task(bVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(bVar0, false);
			func_1012(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1710(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1081(int iParam0)
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

void func_1082(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_242(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1711(iVar6);
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

void func_1083(int iParam0, bool bParam1)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = bParam1;
}

bool func_1084(int iParam0, int iParam1)
{
	iParam0 = func_293(iParam0);
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

void func_1085(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1713(func_1712(255), 109029619));
	}
	else if (func_331())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1110();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1086(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_1087(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1713(func_1712(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_331())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1110())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1088(int iParam0)
{
	iParam0 = func_293(iParam0);
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

float func_1089(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1090(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1530(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1086(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1086(iParam0) + 1;
	fVar6 = func_1441(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1714(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1091(int iParam0)
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

void func_1092(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1093()
{
	if (func_365())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1094(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1715((Global_40.f_4283.f_325 + iParam0));
}

void func_1095(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1093())
	{
		func_733(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_733(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1096(int iParam0)
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

char* func_1097(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1098(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_1099(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1100(1);
	}
}

void func_1100(bool bParam0)
{
	if (bParam0)
	{
		func_1716(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1717(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1101(int iParam0)
{
	if (!func_217(iParam0))
	{
		return -15;
	}
	return func_1718(iParam0);
}

bool func_1102(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_729(iParam1) || !func_729(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1103(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1104(int iParam0)
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

bool func_1105(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1106(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1719(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1107(int iParam0, int iParam1, bool bParam2)
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

int func_1108()
{
	iVar0 = func_584();
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

int func_1109(int iParam0)
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
	fVar1 = func_1670(absf(fVar1) < 1f, func_1670(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1110()
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

int func_1111(int iParam0)
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

int func_1112()
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

void func_1113(int iParam0, bool bParam1, int iParam2)
{
	func_1720((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1721(iParam0);
}

void func_1114(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1722(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1115(bool bParam0)
{
	bVar3 = false;
	if (func_1723(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1724(iVar5, &iVar2, &iVar0))
			{
				if (!func_603(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1725(iVar2);
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
							if (func_622(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1108() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1108() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1726();
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

char* func_1116(int iParam0)
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

bool func_1117(int iParam0)
{
	return func_622(iParam0) == -427144552;
}

bool func_1118(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_624(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1123(iParam0, &uVar0, 1, 0, 0);
	}
	return func_374(iParam0, 1, 0);
}

void func_1119(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_622(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_629(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_630(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_607(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_683(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1120(int iParam0, int iParam1)
{
	if (func_623(iParam0, 58855631))
	{
		func_1269(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1121(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	if (!func_631(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1055(bParam3), iParam0);
}

int func_1122(int iParam0, bool bParam1)
{
	if (func_635(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1055(bParam1), iParam0, 0);
}

bool func_1123(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1727(&iParam0);
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (!func_631(0))
	{
		bParam3 = true;
	}
	if (func_1117(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1252(0) };
			Var4.f_9 = -1591664384;
			if (!func_1146(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1147(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1253(iParam0, 1))
			{
				if (!func_1146(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1147(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1728(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1121(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1729(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1055(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1124(int iParam0, int iParam1)
{
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_622(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_623(iParam0, 1399091007))
	{
		func_1187(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1125(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1730(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1731(&Var0, func_1252(0));
	}
	if (!func_1732(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1197(iVar14);
	return uVar15;
}

int func_1126()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1127(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1128(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1733(iParam0);
	fVar1 = func_1734(iParam0);
	if ((Global_1347477->f_117 || !func_625(31)) || !func_1735(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1736(iVar0) >= 7)
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
	func_1737(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_733(_create_var_string(6, func_1738(iParam0), fVar1), "itemtype_textures", func_1739(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1129(int iParam0)
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

int func_1130(int iParam0, int iParam1)
{
	if (!func_1284(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1131(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_618() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1740(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1741(), 12);
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
			else if (func_1170() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1742(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1170(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1743(), 13);
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
			else if (func_1171() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1744(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1171(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1130(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1132(int iParam0, int iParam1, int iParam2)
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

bool func_1133(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1134(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1745(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_374(iVar2, 1, 0) || func_1747(func_1746(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1139(func_1745(iVar0))), func_1139(func_1745(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1170() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1748(iVar0)), func_1748(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1742() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1748(iVar0)), func_1748(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1748(iVar0)), func_1748(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1180(iParam3, func_1749(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1176(iVar2) - iParam7) >= func_1130(iParam3, func_1750(iVar0));
				}
				else
				{
					bVar1 = func_1176(iVar2) >= func_1130(iParam3, func_1750(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1176(iVar2) + iParam7) >= func_1130(iParam3, func_1750(iVar0));
			}
			else
			{
				bVar1 = func_1176(iVar2) >= func_1130(iParam3, func_1750(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1751(iVar2)), func_1751(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1752(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1753(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1753(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1171() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1754(iVar0)), func_1754(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1744() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1754(iVar0)), func_1754(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1754(iVar0)), func_1754(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1180(iParam3, func_1749(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1176(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1755(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1755(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1756(iVar2)), func_1756(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1136(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1743() >= 13)
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

bool func_1137(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_217(func_230(0)) && ((func_1757(0) == 1 || func_1757(0) == 8) || func_1757(0) == 6))
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

var func_1138(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1139(int iParam0)
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

bool func_1140(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1141(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1142(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1143(int iParam0)
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
			func_1758(1);
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
			func_1759(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1759(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1759(3);
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
			func_1760(1);
			break;
		case 34:
			func_1761(1);
			break;
		case 35:
			func_1762(1);
			break;
		case 36:
			break;
		case 37:
			func_1763(0);
			break;
		case 38:
			func_1764(0);
			break;
		case 39:
			func_1765(0);
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
			if ((!&Global_1879534 && func_421()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_740("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_352(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_421()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_740("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_352(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_421()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_740("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_352(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_421()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_740("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_352(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1209(99217379) || func_1766(99217379) == 2110595215)
				{
					if (func_1110())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_374(iVar0, 1, 0))
					{
						func_676(iVar0, 1, 752097756);
					}
					func_655(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_374(1013902307, 1, 0))
				{
					func_676(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_374(1013902307, 1, 0))
				{
					func_676(1013902307, 1, 752097756);
				}
				if (!func_374(142640135, 1, 0))
				{
					func_676(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_374(786809402, 1, 0))
				{
					func_676(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_374(786809402, 1, 0))
				{
					func_676(786809402, 1, 752097756);
				}
				if (!func_374(-518019409, 1, 0))
				{
					func_676(-518019409, 1, 752097756);
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
			func_1767();
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

bool func_1144(int iParam0)
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

int func_1145(int iParam0, int iParam1)
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

bool func_1146(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1729(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1147(int iParam0, var uParam1, int iParam2)
{
	if (func_1768(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1148(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_603(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1055(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1149(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1769(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1256(*uParam1, &Var0, bParam6, 0))
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
	if (!func_631(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1055(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1150(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1770(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1151(int iParam0)
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
	iVar2 = func_312();
	func_361(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1152(int iParam0)
{
	if (func_1771(iParam0))
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

bool func_1153(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1154(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1155(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_625(50))
			{
				if (!func_625(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_625(51))
			{
				if (!func_625(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1156(int iParam0, int iParam1, var uParam2)
{
	if (!func_603(iParam1, 0))
	{
		return false;
	}
	if (func_622(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_627(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_701(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_623(iParam1, 866047851))
	{
		iVar5 = func_702(iVar4, 1);
		if (func_1772(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_627(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_623(iParam1, -1638171711))
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
			if (func_1773(1868067663, &uVar0))
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
				iVar10 = func_1774(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1774(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_627(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_623(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1775(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1157()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1158()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1159()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_374(func_1776(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1160(int iParam0)
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

bool func_1161(int iParam0, int iParam1)
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
	if (func_374(iVar0, 1, 0) && func_374(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1162(int iParam0)
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

bool func_1163(int iParam0, int iParam1)
{
	iVar0 = func_1777(iParam0);
	if (iVar0 != -15)
	{
		func_361(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_730(iVar0, 1);
	}
	return false;
}

void func_1164(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1165(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1166(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1167(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1168(int iParam0)
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
	iVar1 = func_1176(iVar9);
	iVar2 = func_1176(iVar10);
	iVar3 = func_1176(iVar11);
	iVar5 = func_1177(iVar9);
	iVar6 = func_1177(iVar10);
	iVar7 = func_1177(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1176(iVar12);
		iVar8 = func_1177(iVar12);
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

void func_1169(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1170()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1778(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1171()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1172(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1755(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1755(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1755(iVar0))
		{
			*sParam2++;
		}
		if (func_1755(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1755(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1755(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1755(iVar0))
		{
			*sParam2++;
		}
		if (func_1755(iVar1))
		{
			*sParam2++;
		}
		if (func_1755(iVar0) && func_1755(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1755(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1755(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1755(iVar0))
		{
			*sParam2++;
		}
		if (func_1755(iVar1))
		{
			*sParam2++;
		}
		if (func_1755(iVar2))
		{
			*sParam2++;
		}
		if ((func_1755(iVar0) && func_1755(iVar1)) && func_1755(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1755(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1755(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1755(iVar0))
		{
			*sParam2++;
		}
		if (func_1755(iVar1))
		{
			*sParam2++;
		}
		if (func_1755(iVar2))
		{
			*sParam2++;
		}
		if (func_1755(iVar3))
		{
			*sParam2++;
		}
		if (((func_1755(iVar0) && func_1755(iVar1)) && func_1755(iVar2)) && func_1755(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1173(int iParam0)
{
	if (!func_1779(iParam0))
	{
		func_1781(func_1780(iParam0));
	}
}

int func_1174()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1779(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1175(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1176(iVar9);
	iVar2 = func_1176(iVar10);
	iVar3 = func_1176(iVar11);
	iVar5 = func_1177(iVar9);
	iVar6 = func_1177(iVar10);
	iVar7 = func_1177(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1176(iVar12);
		iVar8 = func_1177(iVar12);
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

int func_1176(int iParam0)
{
	if (func_374(iParam0, 1, 0))
	{
		iVar0 = func_607(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1177(int iParam0)
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

int func_1178(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1179(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1180(int iParam0, int iParam1)
{
	if (!func_1284(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1181(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1180(iParam1, 5) || iParam0 == func_1180(iParam1, 6)) || iParam0 == func_1180(iParam1, 7)) || iParam0 == func_1180(iParam1, 8)) || iParam0 == func_1180(iParam1, 9))
	{
		func_1172(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_619(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_621(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1182(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1180(iParam1, 5) || iParam0 == func_1180(iParam1, 6)) || iParam0 == func_1180(iParam1, 7)) || iParam0 == func_1180(iParam1, 8)) || iParam0 == func_1180(iParam1, 9))
	{
		if (func_1172(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_619(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_621(51, 0, 0, iVar0, func_1130(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_619(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_621(51, 0, 0, iVar0, func_1130(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1183()
{
	if (func_218((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1184(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1185(int iParam0)
{
	if (!func_1782(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1186(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1187(int iParam0, int iParam1, var uParam2)
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

bool func_1188(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1783();
	if (iParam2 == 39)
	{
		Var0 = { func_714(iParam0, 1, 0) };
		iParam2 = func_702(func_715(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_623(iParam0, 866047851) && func_1772(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1190(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1784(func_1257(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1785(iParam2);
	func_1786(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1238(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1238(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1244(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1787(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1788(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1788(&(Global_1946804->f_1378), 1, 0);
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
				func_1487(func_1257(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1189(bool bParam0, bool bParam1, bool bParam2)
{
	func_1789(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1190(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1191()
{
	func_1790(&(Global_1946804->f_2776));
	func_1791(32768);
	func_1487(1108822547, 8, 6);
}

int func_1192(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_702(iParam0, 1);
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

void func_1193(int iParam0)
{
	if (func_1792(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1793(Var0);
}

void func_1194(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1793(Var0);
}

bool func_1195(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1055(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1196(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1197(int iParam0)
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

float func_1198()
{
	if (func_1794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_487(2);
	}
	if (Global_1347477->f_119)
	{
		return func_487(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1795();
	fVar2 = func_1796();
	fVar3 = func_1797();
	fVar4 = func_1798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1799()));
	fVar7 = (func_487(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1800(3, round((to_float(iVar8) * fVar10)), 0);
	func_1801(3, fVar9, fVar9 > 100f);
	return func_1802(fVar7, -100f, 100f);
}

float func_1199()
{
	if (func_1794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_487(1);
	}
	if (Global_1347477->f_119)
	{
		return func_487(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1795();
	fVar2 = func_1796();
	fVar3 = func_1797();
	fVar4 = func_1798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1799()));
	fVar7 = (func_487(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1800(2, round((to_float(iVar8) * fVar10)), 0);
	func_1801(2, fVar9, fVar9 > 100f);
	return func_1802(fVar7, -100f, 100f);
}

float func_1200()
{
	if (func_1794())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_487(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1803())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1804())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_487(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1795();
	fVar2 = func_1796();
	fVar3 = func_1797();
	fVar4 = func_1798();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1799()));
	fVar7 = (func_487(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1800(1, round((to_float(iVar8) * fVar10)), 0);
	func_1801(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_487(0);
	}
	return func_1802(fVar7, -100f, 100f);
}

bool func_1201(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1202(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1203(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_603(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1123(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_631(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1055(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1204(int iParam0, bool bParam1)
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
				return func_1805();
			}
			break;
	}
	return 0;
}

int func_1205(int iParam0)
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

bool func_1206(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_1207(int iParam0, bool bParam1)
{
	return func_1204(iParam0, 0) < func_1806(iParam0, bParam1);
}

bool func_1208(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_627(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1209(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_702(iParam0, 1)] != &Global_1946804->f_57[func_702(iParam0, 1)];
}

void func_1210(int iParam0, int iParam1)
{
	if (func_623(iParam1, 130796156))
	{
		func_1807(iParam1, 0);
	}
	else if (func_623(iParam1, 930141731))
	{
		func_1807(iParam1, 1);
		func_1808(iParam0);
	}
}

void func_1211(var uParam0, int iParam1)
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

int func_1212(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1809(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1810(uParam2, iParam0, Var1);
	return 1;
}

int func_1213(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1214(int iParam0)
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

int func_1215(int iParam0)
{
	if (!func_1811(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1216()
{
	return !&Global_1911774;
}

void func_1217(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1218(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1219(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1220(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1221(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1812(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1222(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1812(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1223(bool bParam0)
{
	if (bParam0)
	{
		func_345(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1224();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1813(2032023096);
		func_348(-615217896);
		func_698(655868243, 1, 1, -142743235, 1);
		func_1815(146323340, func_1814());
		Var0 = { func_1538() };
		if (func_1816(&Var0) == -1387633835)
		{
			func_1817(&Var0);
			func_1818(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1819(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1531(iVar6) == 2010625508)
			{
				func_1820(iVar6, iVar7);
				func_1821(iVar6, iVar8);
				func_1822(iVar6, iVar9);
				func_1823(iVar6, 0);
				if (func_1824(iVar6))
				{
					func_1825(iVar6);
				}
				iVar10 = func_1826(iVar8);
				func_1827(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1224()
{
	if (!func_1828(-1898635967, func_1814(), 1))
	{
		return 0;
	}
	if (func_365())
	{
		if (!func_1828(146323340, func_1814(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1225()
{
	func_359(34411519);
	func_359(834124286);
	func_359(-570967010);
}

void func_1226(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_345(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_345(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_698(-1080874779, 3, 1, -142743235, 1);
		func_698(-223790555, 3, 1, -142743235, 1);
		func_698(1566032147, 3, 1, -142743235, 1);
		func_698(891311852, 5, 1, -142743235, 1);
		func_698(-1353737667, 5, 1, -142743235, 1);
		func_698(-330313895, 5, 1, -142743235, 1);
		func_698(-2051332199, 5, 1, -142743235, 1);
		func_698(1237770824, 5, 1, -142743235, 1);
		func_698(-1795542128, 3, 1, -142743235, 1);
		func_698(-1757588258, 3, 1, -142743235, 1);
		func_698(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1819(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1531(iVar0) == 153881023)
			{
				func_1820(iVar0, iVar1);
				func_1821(iVar0, iVar2);
				func_1822(iVar0, iVar3);
				func_1823(iVar0, 0);
				if (func_1824(iVar0))
				{
					func_1825(iVar0);
				}
				iVar4 = func_1826(iVar2);
				func_1827(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1224();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1227(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1829(iParam0);
	if (bParam3)
	{
		func_741(iParam0, sParam1, iParam2);
	}
}

bool func_1228(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1229(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1230()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1195("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1196(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1147(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1197(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1197(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1231(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1830(Param1, iParam5, &Var5, 0))
	{
		func_1149(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1203(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1831(Var19, 1);
}

bool func_1232(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1730(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1731(&Var0, func_1252(0));
	}
	if (!func_1732(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1196(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1149(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1197(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1233(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_603(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_714(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1832(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1148(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1149(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1234(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_623(iParam0, 606799272))
		{
			func_1833(iParam0, iParam1);
		}
		if (func_623(iParam0, -1112814642) && func_623(iParam0, -1697809989))
		{
			func_651(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1235(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1834(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_627(iParam0) != -999503751)
		{
			func_1835(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_627(iParam0) != -999503751)
	{
		func_1835(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1836(iParam0, 1);
	return 1;
}

void func_1236()
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

void func_1237(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1837(0);
	}
	if (bParam0)
	{
		func_1249(8);
		func_1249(512);
	}
	else
	{
		func_1249(8);
		func_1249(16);
	}
}

void func_1238(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1239(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_704();
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

int func_1240(int iParam0)
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

void func_1241(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1838(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1257(iVar0, 1);
			if (func_1484(iVar0, iParam1))
			{
				vVar4 = { func_706(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1483(iVar7, 4))
				{
					func_1487(iVar7, 4, 6);
				}
			}
			else
			{
				func_1486(iVar7, 4, 6);
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

bool func_1242(int iParam0)
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
	func_1839(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1243(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1244(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_627(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1484(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1786(iVar1, iVar3);
		}
	}
	if (func_1209(-1586649372) && func_1484(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1786(iVar1, iVar3);
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
						func_1786(iVar1, iVar3);
					}
				}
			}
			func_1840(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1840(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1786(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1840(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1786(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1786(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1840(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1840(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1786(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1840(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1786(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1786(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_627(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1786(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1775(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_627(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1786(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_623(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1786(iVar1, iVar3);
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
						func_1786(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1775(&(Global_1946804->f_1497.f_1[iVar1])) || func_623(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1786(iVar1, iVar3);
					}
				}
			}
			switch (func_627(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_627(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1786(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_627(&(uParam0->f_1[iVar1])) || func_623(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1786(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1245(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1246(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1201(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1201(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1247(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1201(iParam0, 65536) && !func_1201(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1201(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1201(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1248()
{
	return Global_1905944->f_5694;
}

void func_1249(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1250(struct<4> Param0)
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
			if (func_1841(Param0))
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
			func_1842(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1249(8);
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
			if (func_1841(Param0))
			{
				return;
			}
			func_1842(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1249(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1194(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1251(bool bParam0)
{
	return func_1148(1328661203, func_1843(), -1591664384, bParam0);
}

struct<4> func_1252(bool bParam0)
{
	iVar0 = func_1055(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1148(923904168, func_1251(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1148(923904168, func_1251(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1148(923904168, func_1251(bParam0), -740156546, 0);
}

bool func_1253(int iParam0, bool bParam1)
{
	if (func_627(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_625(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1254(bool bParam0)
{
	iVar0 = func_1055(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1148(271701509, func_1251(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1148(271701509, func_1251(bParam0), 12999093, 0);
}

bool func_1255(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_627(iParam0);
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

bool func_1256(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1055(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1257(int iParam0, int iParam1)
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

int func_1258(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1259(int iParam0, int iParam1)
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

void func_1260(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1261(int iParam0, int iParam1)
{
	iVar0 = func_722(*iParam0);
	iVar1 = func_721(*iParam0);
	if (iParam1 < 1 || iParam1 > func_727(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1262(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1263(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1264(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1265(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1266(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1267(int iParam0)
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

bool func_1268(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1117(iParam0))
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

int func_1269(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_603(iParam0, 0))
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

int func_1270(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1727(&iParam0);
	if (!func_603(iParam0, 0))
	{
		return 0;
	}
	if (!func_631(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1121(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1729(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1055(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_623(iParam0, -5284486))
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
		if (func_1844(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_684(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_687(iVar62, iVar61);
					if (func_603(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1271(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1271(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1844(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1272(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1845(1);
}

void func_1273(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1846(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_351(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1846(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_351(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1274()
{
	return Global_40.f_4283.f_325;
}

bool func_1275(int iParam0)
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

bool func_1276(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1277(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1278(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1279(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1281(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_421();
	bVar1 = false;
	if (bVar0 && !func_1847(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1847(37)) && !func_1847(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1847(43)) && !func_1847(44))
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
		if (func_1532(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1532(1) == 1)
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

int func_1282()
{
	return Global_40.f_1095.f_3054;
}

bool func_1283(int iParam0)
{
	iParam0 = func_293(iParam0);
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

bool func_1284(int iParam0, var uParam1)
{
	if (!func_1848(iParam0))
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

int func_1285()
{
	if (func_421())
	{
		if (!func_1847(3))
		{
			return func_1849(43);
		}
		if (func_1847(38) && !func_1847(43))
		{
			return func_1850(8);
		}
	}
	return 0;
}

bool func_1286(int iParam0)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1851(iParam0));
}

Vector3 func_1287(int iParam0, int iParam1)
{
	func_1284(15, &Var0);
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

int func_1288(int iParam0, int iParam1)
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
	iVar0 = func_1852(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1284(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1853(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1289(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1854(iParam0);
	if (func_516(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1290(int iParam0)
{
	if (!func_1284(15, &Var0))
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

bool func_1291(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1855(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1856(5))
	{
		if (func_1857(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1525(vParam0);
	if (bParam6)
	{
		iVar1 = func_399(vParam0, 1);
		if (func_116(iVar1) || func_1858(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1859(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1860())
	{
		if (func_1861(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1862(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_399(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1863(iParam3, iParam4))
	{
		return false;
	}
	if (func_1864(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1865(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_421())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1866(vParam0, iParam10) || func_1867(vParam0, iParam10))
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

int func_1292(vector3 vParam0)
{
	iVar0 = func_1868(vParam0, 0f, 0f, 0, 2);
	return func_1868(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1293(int iParam0)
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

char* func_1294(bool bParam0)
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
	return func_1495(iVar0);
}

char* func_1295(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1869(iVar0);
}

char* func_1296(int iParam0)
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

void func_1297(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1648(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 63994;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1298(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1648(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1299(char[4] cParam0)
{
	func_1870(cParam0);
	func_1871(cParam0);
}

void func_1300(char[4] cParam0, char[4] cParam1)
{
	func_1872(&(cParam0->f_7375), cParam1);
	func_407(cParam0, 33554432);
}

void func_1301()
{
	if (!_is_app_running(-1782489369))
	{
		_launch_app_by_hash_with_entry(-1782489369, -1942376275);
	}
}

bool func_1302()
{
	if (get_current_language() == 0)
	{
		_0x32de2bffda43e62a();
	}
	_0x9a252aa23d7098f2();
	switch (iLocal_136)
	{
		case 0:
			_0x5199405eabfbd7f0("Title_GameIntro");
			set_script_gfx_draw_order(1);
			func_247(&uLocal_1463);
			iLocal_136 = 1;
			break;
		case 1:
			if (!_0xbf2dd155b2adcd0a("Title_GameIntro"))
			{
				if (trigger_music_event("WNT1_PRE_INTRO"))
				{
					if (start_audio_scene("Animated_Text_Intro_Scene"))
					{
						animpostfx_play("Title_GameIntro");
						_0xb958d97a0dfaa0c2("Title_GameIntro");
						iLocal_136 = 2;
					}
				}
			}
			break;
		case 2:
			iVar0 = 1;
			if (animpostfx_is_running("Title_GameIntro"))
			{
				if (is_screen_faded_out())
				{
					do_screen_fade_in(3000);
				}
			}
			if (func_1873())
			{
				animpostfx_stop("Title_GameIntro");
				stop_audio_scene("Animated_Text_Intro_Scene");
				_0xa201a3d0ac087c37("Title_GameIntro");
				do_screen_fade_out(0);
				iLocal_136 = 3;
			}
			if (_0xfbf161fcfec8589e("Title_GameIntro", 2, 0, &iVar0))
			{
				stop_audio_scene("Animated_Text_Intro_Scene");
				_0xa201a3d0ac087c37("Title_GameIntro");
				iLocal_136 = 3;
			}
			break;
		case 3:
			if (func_10(iVar1307))
			{
				func_11(&iLocal_1309, 1, 1);
			}
			return true;
	}
	return false;
}

bool func_1303(char[4] cParam0, int iParam1)
{
	return func_843(&(cParam0->f_7375), iParam1);
}

void func_1304(int iParam0)
{
	set_bit(&uLocal_722, iParam0);
}

void func_1305(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			func_135(cParam0, -1);
			break;
	}
}

void func_1306(var uParam0)
{
	hide_hud_and_radar_this_frame();
}

int func_1307(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1308(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1309(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1648(iVar0))
	{
		return;
	}
	iVar1 = func_1649(iParam3);
	if (!func_1650(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1310(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1311(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1312(char[4] cParam0)
{
	bVar0 = true;
	switch (iLocal_153)
	{
		case 0:
			if (!_does_anim_scene_exist(&(uLocal_182[0])))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_153 = 2;
			}
			break;
		case 2:
			if (bVar0)
			{
				iLocal_153 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_182[0]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_182[0]), "Dutch", &(uLocal_1064[1]), 0);
			set_anim_scene_entity(&(uLocal_182[0]), "CharlesSmith", &(uLocal_1064[12]), 0);
			set_anim_scene_entity(&(uLocal_182[0]), "Horse01", &(iLocal_1084[0]), 0);
			set_anim_scene_entity(&(uLocal_182[0]), "Horse01^1", &(iLocal_1084[1]), 0);
			set_anim_scene_entity(&(uLocal_182[0]), "MollyOshea", &(uLocal_1064[14]), 0);
			func_1874(cParam0, &(uLocal_182[0]));
			iLocal_153 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_182[0]), true, false))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_153 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1313()
{
	if (!_is_app_running(-1782489369))
	{
		_launch_app_by_hash_with_entry(-1782489369, -1112207439);
	}
}

bool func_1314()
{
	switch (iVar340)
	{
		case 0:
			iLocal_342 = 1;
			break;
		case 1:
			if (func_1875())
			{
				iLocal_342 = 2;
			}
			break;
		case 2:
			if (func_177(iVar907, 2048))
			{
				_0xc76e94a78127412b(&(Local_14.f_52[0]), 0.4f, 0.4f);
				if (func_1876(&(Local_14.f_52[0]), cVar868, 1, 1061360239, 1053609165, 0, 0, 1))
				{
					iLocal_342 = 3;
				}
			}
			break;
		case 3:
			_0xc76e94a78127412b(&(Local_14.f_52[0]), 0.4f, 0.4f);
			if (func_1876(&(Local_14.f_52[0]), cVar869, 1, 1061360239, 1053609165, 0, 0, 1))
			{
				iLocal_342 = 4;
			}
			break;
		case 4:
			if (does_entity_exist(&(Local_14.f_52[0])))
			{
				delete_ped(Local_14.f_52[0]);
				iLocal_342 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1315()
{
	Global_1359489->f_11 = 0;
}

bool func_1316(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_1877(Global_1359489->f_11, bParam0, bParam1, bParam2))
	{
		if (Global_1359489->f_11 < 26)
		{
			iVar0 = Global_1359489->f_11;
			iVar0++;
			Global_1359489->f_11 = iVar0;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1317(bool bParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_927(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_1318(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_1319(int iParam0)
{
	set_bit(&uLocal_722, iParam0);
	set_bit(&uLocal_723, iParam0);
}

void func_1320(char[4] cParam0)
{
	func_1878(cParam0, &(iLocal_1084[0]));
	func_1878(cParam0, &(iLocal_1084[1]));
	func_1878(cParam0, &(iLocal_1084[2]));
	func_151(cParam0, &(iLocal_1084[0]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[1]), "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[2]), "Horse_01^2", 0, 0, 0, 0);
}

struct<8> func_1321(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_1322(char[4] cParam0, struct<8> Param1)
{
	func_1879(&(cParam0->f_7375), Param1);
}

void func_1323()
{
	iLocal_359[0] = -1;
	iLocal_359[1] = 0;
	iLocal_359[2] = -1;
	iLocal_359[3] = -1;
	iLocal_359[4] = -1;
}

int func_1324(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1018(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1016(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1017(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1021(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_1021(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1880(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1018(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_1022(cParam0, iParam1, &iVar4))
		{
			func_1023(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1024(iVar3);
	}
	return iVar0;
}

void func_1325(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (iVar340 >= 2 && func_177(iVar905, 4096))
			{
				func_179(&uLocal_908, 1);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if ((!func_1359() && !_0x54b187f111d9c6f8(&(uLocal_1064[1]), 1)) && func_1612(Global_35, &(iLocal_1084[0]), 0))
			{
				if (func_1881(cParam0, "WNT1_SET", 1, 0, 0))
				{
					func_135(cParam0, 11);
				}
			}
			break;
		case 2:
			if (!func_1359() && func_1612(Global_35, &(iLocal_1084[0]), 0))
			{
				if (func_1881(cParam0, "WNT1_TALK", 1, 0, 0))
				{
					func_464(&iLocal_1048);
					func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
					func_987(cParam0);
					func_135(cParam0, -1);
				}
			}
			break;
		case 3:
			if (func_1331(&(uLocal_1064[1]), func_473(10, 3), 1) > 50f)
			{
				if (func_926(Global_35, &(uLocal_1064[1]), 1, 1) < 40f)
				{
					if (func_1881(cParam0, "WNT1_TALK2", 1, 0, 0))
					{
						func_179(&uLocal_907, 4194304);
						func_135(cParam0, -1);
					}
				}
			}
			break;
		case 4:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_SLOW", 1, 0, 0))
				{
					func_135(cParam0, 5);
				}
			}
			break;
		case 5:
			if (!func_1359())
			{
				if (&iLocal_359[1] < 12)
				{
					iLocal_359[1] = 11;
				}
				iLocal_359[2] = 0;
				func_135(cParam0, -1);
			}
			break;
		case 6:
			if (func_926(Global_35, &(uLocal_1064[1]), 1, 1) < 60f)
			{
				if (func_1882("WNT1_TALK2"))
				{
					stop_scripted_conversation("WNT1_TALK2", true, true);
				}
				if (func_1882("WNT1_GREET"))
				{
					stop_scripted_conversation("WNT1_GREET", true, true);
				}
				if (func_1882("WNT1_GREET_B"))
				{
					stop_scripted_conversation("WNT1_GREET_B", true, true);
				}
				if (!func_1359())
				{
					if (func_1881(cParam0, "WNT1_SEE", 1, 0, 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			break;
		case 7:
			func_135(cParam0, -1);
			break;
		case 8:
			if (func_1881(cParam0, "WNT1_RIDELEAD", 1, 0, 0))
			{
				func_135(cParam0, 9);
			}
			break;
		case 9:
			if (!func_1359())
			{
				iLocal_359[3] = 0;
				iLocal_359[2] = 11;
				func_135(cParam0, 3);
			}
			break;
		case 10:
			break;
		case 11:
			if (!func_1359() && func_1612(Global_35, &(iLocal_1084[0]), 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 12:
			if (func_1881(cParam0, "WNT1_GREET", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			iLocal_359[4] = 0;
			func_135(cParam0, -1);
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_H_GREET", 8, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (func_1881(cParam0, "WNT1_GREET_B", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 16:
			if (func_1881(cParam0, "WNT1_MCS1_LI", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1326(char[4] cParam0)
{
	func_1883(cParam0);
	func_1884(cParam0);
	func_1885(cParam0);
	func_1886();
	func_1887(cParam0);
	func_1888();
	func_1609(cParam0);
	func_1889(cParam0);
	func_1890();
	func_1891();
	if (func_926(Global_35, &(uLocal_1064[2]), 1, 1) < 50f && iVar347 < 2)
	{
		func_1892(cParam0);
	}
}

void func_1327(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!has_ped_got_weapon(iParam0, -164645981, 0, false))
		{
			_give_weapon_to_ped_2(iParam0, -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		if (has_ped_got_weapon(iParam0, -164645981, 0, false) && func_1893(iParam0, 0) != -164645981)
		{
			set_current_ped_weapon(iParam0, -164645981, true, iParam1, false, false);
		}
	}
}

bool func_1328(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!func_177(iVar902, iParam3))
	{
		if (!is_entity_dead(iParam1))
		{
			if (is_entity_in_volume(iParam1, iParam2, true, 0))
			{
				func_135(cParam0, iParam4);
				func_179(&uLocal_910, iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_1329(int iParam0)
{
	set_bit(&uLocal_724, iParam0);
}

void func_1330(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
			{
				if (bParam4)
				{
					waypoint_playback_override_speed(iParam0, fParam1, iParam2, fParam3, 0);
				}
				set_enable_speed_restrain_for_waypoint_recording_leader(iParam0, 1);
				set_up_speed_restrain_information_for_player_follower(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
}

float func_1331(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(bParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), vParam1, bParam4);
}

bool func_1332(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1333(int iParam0, bool bParam1)
{
	if (!func_282(Local_14.f_9))
	{
		Local_14.f_9 = { func_446() };
	}
	if (func_1894(&(Local_14.f_9), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_11[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_11[0] = func_1585(50483426, -556.1395f, 2700.704f, 320.3992f, 153.8693f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_11[0]), "Leader");
		func_1895(Local_14.f_9, &(Local_14.f_11[0]));
		func_1896(&(Local_14.f_11[0]), Local_14);
		func_1586(&(Local_14.f_11[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
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
	if (!does_entity_exist(&(Local_14.f_11[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_11[1] = func_1585(50483426, -554.5595f, 2703.494f, 320.7426f, 146.669f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_11[1]), "Man01");
		func_1895(Local_14.f_9, &(Local_14.f_11[1]));
		func_1896(&(Local_14.f_11[1]), Local_14);
		func_1586(&(Local_14.f_11[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
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
	if (!does_entity_exist(&(Local_14.f_11[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_11[2] = func_1585(50483426, -554.5225f, 2700.971f, 320.6404f, 146.6695f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_11[2]), "Man02");
		func_1895(Local_14.f_9, &(Local_14.f_11[2]));
		func_1896(&(Local_14.f_11[2]), Local_14);
		func_1586(&(Local_14.f_11[2]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
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
	if (!does_entity_exist(&(Local_14.f_11[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_11[3] = func_1585(50483426, -556.3334f, 2707.324f, 320.4171f, 55.1556f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_11[3]), "Man03");
		func_1895(Local_14.f_9, &(Local_14.f_11[3]));
		func_1896(&(Local_14.f_11[3]), Local_14);
		func_1586(&(Local_14.f_11[3]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
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
	func_1897(&(Local_14.f_9), 1);
	return true;
}

bool func_1334()
{
	if (is_entity_in_volume(Global_35, &(iLocal_1108[22]), true, 0))
	{
		return true;
	}
	return false;
}

bool func_1335(char[4] cParam0)
{
	display_radar(false);
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	switch (iVar347)
	{
		case 0:
			set_player_control(player_id(), false, 0, false);
			iLocal_350 = 1;
			break;
		case 1:
			if (does_entity_exist(&(uLocal_1064[1])) && does_entity_exist(Global_35))
			{
				vVar0 = { get_offset_from_entity_given_world_coords(&(uLocal_1064[1]), get_entity_coords(Global_35, true, false)) };
			}
			if (vVar0.x > 0f)
			{
				open_sequence_task(&uLocal_1018);
				task_follow_nav_mesh_to_coord(0, func_473(10, 8), 1f, 20000, 0.25f, 512, func_494(10, 8));
				close_sequence_task(iVar1015);
				task_perform_sequence(Global_35, iVar1015);
				clear_sequence_task(&uLocal_1018);
				func_1336(cParam0, "1-Right");
				func_485(&uLocal_904, 33554432);
			}
			else
			{
				open_sequence_task(&uLocal_1018);
				task_follow_nav_mesh_to_coord(0, func_473(10, 4), 1f, 20000, 0.25f, 514, func_494(10, 4));
				close_sequence_task(iVar1015);
				task_perform_sequence(Global_35, iVar1015);
				clear_sequence_task(&uLocal_1018);
				func_1336(cParam0, "2-Left");
				func_179(&uLocal_904, 33554432);
			}
			if (func_33(cParam0) == iLocal_82)
			{
				func_135(cParam0, 16);
			}
			iLocal_344 = 3;
			iLocal_350 = 2;
			break;
		case 2:
			if (func_177(iVar901, 33554432))
			{
				func_1898(cParam0);
			}
			else
			{
				func_1899(cParam0);
			}
			if (func_1900(cParam0))
			{
				func_1901(cParam0);
				iLocal_350 = 3;
			}
			break;
		case 3:
			if (func_177(iVar901, 33554432))
			{
				func_1898(cParam0);
			}
			else
			{
				func_1899(cParam0);
			}
			if (func_1331(Global_35, func_473(10, 8), 1) < 5f || func_1331(Global_35, func_473(10, 4), 1) < 5f)
			{
				set_ped_config_flag(&(uLocal_1064[2]), 297, true);
				set_ped_config_flag(&(uLocal_1064[2]), 130, true);
				set_ped_config_flag(&(uLocal_1064[2]), 315, true);
				set_ped_config_flag(&(uLocal_1064[2]), 317, true);
				iLocal_350 = 6;
			}
			break;
		case 6:
			if (func_177(iVar901, 33554432))
			{
				func_1898(cParam0);
			}
			else
			{
				func_1899(cParam0);
			}
			if (_get_anim_scene_progress(&(uLocal_182[1])) > 0.97f || _is_anim_scene_finished(&(uLocal_182[1]), false))
			{
				set_ped_config_flag(&(uLocal_1064[2]), 297, false);
				set_ped_config_flag(&(uLocal_1064[2]), 130, true);
				set_ped_config_flag(&(uLocal_1064[2]), 315, true);
				set_ped_config_flag(&(uLocal_1064[2]), 317, false);
				_0xc67a4910425f11f1(player_id(), 0);
				iLocal_350 = 8;
			}
			break;
		case 8:
			if (func_177(iVar901, 33554432))
			{
				func_1898(cParam0);
			}
			else
			{
				func_1899(cParam0);
			}
			return true;
	}
	return false;
}

void func_1336(char[4] cParam0, char[4] cParam1)
{
	func_1902(&(cParam0->f_7375), cParam1);
}

void func_1337(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (get_is_waypoint_recording_loaded(sParam0))
		{
			use_waypoint_recording_as_assisted_movement_route(sParam0, 1, 1f, 0.01f, 1);
		}
	}
	else if (get_is_waypoint_recording_loaded(sParam0))
	{
		use_waypoint_recording_as_assisted_movement_route(sParam0, 0, 1f, 0.5f, 1);
	}
}

void func_1338(bool bParam0)
{
	if (bParam0)
	{
		if (!is_entity_dead(&(uLocal_1064[1])))
		{
			if (_0x2009f8ab7a5e9d6d(get_player_index()))
			{
				_0x12e09e278c6c29b7(player_id());
			}
			_0xac22aa6df4d1c1de(get_player_index(), &(uLocal_1064[1]), 1.75f, 2.5f, 3, 2, 0);
			_0xdd33a82352c4652f(player_id(), &(uLocal_1064[1]), 0);
			_0x02e741e19e39628c(&(uLocal_1064[1]), 2.5f);
		}
	}
	else if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
}

bool func_1339(char[4] cParam0)
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
			if (!_0xa0bc8faed8cfeb3c(&(uLocal_1064[1])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(uLocal_1064[2])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_1084[1])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_1084[2])))
			{
				iVar0 = 0;
			}
			if (!_0xa0bc8faed8cfeb3c(&(iLocal_1084[0])))
			{
				iVar0 = 0;
			}
			if (!_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				iVar0 = 0;
			}
			break;
		case 3:
			if (((((!_0xa0bc8faed8cfeb3c(Global_35) || !_0xa0bc8faed8cfeb3c(&(uLocal_1064[1]))) || !_0xa0bc8faed8cfeb3c(&(uLocal_1064[2]))) || !_0xa0bc8faed8cfeb3c(&(iLocal_1084[0]))) || !_0xa0bc8faed8cfeb3c(&(iLocal_1084[1]))) || !_0xa0bc8faed8cfeb3c(&(iLocal_1084[2])))
			{
				iVar0 = 0;
			}
			if (!_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				iVar0 = 0;
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
			if (!_0xa0bc8faed8cfeb3c(Global_35) || !_0xa0bc8faed8cfeb3c(&(Local_14.f_18[0])))
			{
				iVar0 = 0;
			}
			break;
		case 9:
			break;
		case 10:
			if ((!does_entity_exist(&(uLocal_1064[1])) || !does_entity_exist(&(uLocal_1064[3]))) || !does_entity_exist(&(uLocal_1064[2])))
			{
				iVar0 = 0;
			}
			if (((!_0xa0bc8faed8cfeb3c(Global_35) || !_0xa0bc8faed8cfeb3c(&(uLocal_1064[1]))) || !_0xa0bc8faed8cfeb3c(&(uLocal_1064[3]))) || !_0xa0bc8faed8cfeb3c(&(uLocal_1064[2])))
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

void func_1340(char[4] cParam0)
{
	iLocal_903 = 0;
	while (iVar900 < 4)
	{
		if (!is_entity_dead(&(Local_14.f_11[iVar900])))
		{
			if (!&iLocal_1260[iVar900])
			{
				remove_all_ped_weapons(&(Local_14.f_11[iVar900]), true, true);
				set_ped_config_flag(&(Local_14.f_11[iVar900]), 243, true);
				set_ped_config_flag(&(Local_14.f_11[iVar900]), 186, false);
				set_blocking_of_non_temporary_events(&(Local_14.f_11[iVar900]), true);
				_0xe8c296b75eacc357(&(Local_14.f_11[iVar900]), 0f);
				set_ped_combat_attributes(&(Local_14.f_11[iVar900]), 35, true);
				set_combat_float(&(Local_14.f_11[iVar900]), 3, 0.5f);
				set_ped_combat_attributes(&(Local_14.f_11[iVar900]), 30, true);
				_0x66c047719b0e80e1(&(Local_14.f_11[iVar900]), -551550807);
				func_1903(&(Local_14.f_11[iVar900]), 0);
				_0x5b637d6f3b67716a(&(Local_14.f_11[iVar900]));
				_give_weapon_to_ped_2(&(Local_14.f_11[iVar900]), 379542007, 100, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
				_0x4b436bac8cbe9b07(&(Local_14.f_11[iVar900]), 1, 0);
				iLocal_1260[iVar900] = 1;
			}
			if (iVar900 == 2)
			{
				set_ped_config_flag(&(Local_14.f_11[iVar900]), 138, true);
				set_entity_only_damaged_by_player(&(Local_14.f_11[iVar900]), true);
			}
			if ((iVar900 == 3 || iVar900 == 0) || iVar900 == 1)
			{
				func_1904(&(Local_14.f_11[iVar900]), 1);
			}
			if (iVar900 == 1)
			{
				if (!func_177(iVar905, 262144))
				{
					_set_ped_body_component(&(Local_14.f_11[iVar900]), -2059084029);
					_update_ped_variation(&(Local_14.f_11[iVar900]), false, true, true, true, false);
					func_179(&uLocal_908, 262144);
				}
			}
			else if (iVar900 == 2)
			{
				if (!func_177(iVar905, 524288))
				{
					_set_ped_body_component(&(Local_14.f_11[iVar900]), 786313787);
					_update_ped_variation(&(Local_14.f_11[iVar900]), false, true, true, true, false);
					func_179(&uLocal_908, 524288);
				}
			}
			else if (iVar900 == 3)
			{
				if (!func_177(iVar905, 1048576))
				{
					_set_ped_body_component(&(Local_14.f_11[iVar900]), -1819706484);
					_update_ped_variation(&(Local_14.f_11[iVar900]), false, true, true, true, false);
					func_179(&uLocal_908, 1048576);
				}
			}
			else if (iVar900 == 0)
			{
				if (!func_177(iVar905, 2097152))
				{
					_set_ped_body_component(&(Local_14.f_11[iVar900]), 549754376);
					_update_ped_variation(&(Local_14.f_11[iVar900]), false, true, true, true, false);
					func_179(&uLocal_908, 2097152);
				}
			}
		}
		iLocal_903 = iVar900 + 1;
	}
	if (!_does_anim_scene_exist(&(uLocal_182[7])) || (_does_anim_scene_exist(&(uLocal_182[7])) && !_is_anim_scene_started(&(uLocal_182[7]), false)))
	{
		func_1317(&(Local_14.f_11[0]), func_250(7, 1), 2, 1073741824);
		func_1317(&(Local_14.f_11[1]), func_250(7, 2), 2, 1073741824);
		func_1317(&(Local_14.f_11[2]), func_250(7, 6), 2, 1073741824);
		func_1317(&(Local_14.f_11[3]), func_250(7, 11), 2, 1073741824);
	}
	func_1327(&(Local_14.f_11[3]), 0);
	func_145(cParam0, &(Local_14.f_11[0]), "WNT1_LEADER", 1);
	func_145(cParam0, &(Local_14.f_11[1]), "WNT1_MAN01", 1);
	func_145(cParam0, &(Local_14.f_11[1]), "ODR_PED1", 1);
	func_145(cParam0, &(Local_14.f_11[2]), "ODR_PED6", 1);
	func_145(cParam0, &(Local_14.f_11[3]), "ODR_PED9", 1);
}

void func_1341(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

void func_1342()
{
	iLocal_393[0] = 0;
	iLocal_393[1] = -1;
	iLocal_393[2] = -1;
	iLocal_393[3] = -1;
	iLocal_393[4] = -1;
}

int func_1343(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0;
	}
	if (func_527(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_528() - round((uParam0->f_1 * 1000f)));
}

void func_1344(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			func_1618(cParam0, "WNT1_OBJ_FLW_MCH", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
		case 1:
			func_1324(cParam0, &(uLocal_1064[2]), 1105014447, 422991367, 1, 1);
			func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 0, 1);
			func_247(&uLocal_1315);
			func_179(&uLocal_907, -2147483648);
			func_135(cParam0, -1);
			break;
		case 2:
			func_135(cParam0, -1);
			break;
		case 3:
			if (func_1881(cParam0, "WNT1_BANT", 1, 3f, 0))
			{
				func_179(&uLocal_907, 64);
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_926(Global_35, &(uLocal_1064[1]), 1, 1) < 25f)
			{
				if (func_1881(cParam0, "WNT1_HITCH", 1, 0, 0))
				{
					func_135(cParam0, 21);
				}
			}
			else
			{
				func_135(cParam0, 21);
			}
			break;
		case 5:
			func_135(cParam0, -1);
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			func_135(cParam0, 12);
			break;
		case 8:
			iVar0 = get_random_int_in_range(0, 2);
			if (iVar0 == 0)
			{
				if (func_1881(cParam0, "WNT1_RIDEFWD", 1, 0, 0))
				{
					func_135(cParam0, 9);
				}
			}
			else if (func_1881(cParam0, "WNT1_RIDEFWD2", 1, 0, 0))
			{
				func_135(cParam0, 9);
			}
			break;
		case 9:
			if (!func_1359())
			{
				iLocal_393[1] = 0;
				func_135(cParam0, -1);
				func_179(&uLocal_907, 1);
			}
			break;
		case 10:
			if (func_1881(cParam0, "WNT1_WAITING", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (!func_1359())
			{
				func_135(cParam0, -1);
				func_179(&uLocal_907, 128);
			}
			break;
		case 12:
			func_135(cParam0, 3);
			break;
		case 13:
			func_135(cParam0, 15);
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_BANT3", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_RID", 0, 0, 0))
				{
					func_135(cParam0, 16);
				}
			}
			break;
		case 16:
			func_179(&uLocal_906, 4096);
			func_135(cParam0, -1);
			break;
		case 17:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_STOP", 1, 0.1f, 0))
				{
					func_135(cParam0, 15);
				}
			}
			break;
		case 18:
			func_135(cParam0, -1);
			break;
		case 19:
			func_135(cParam0, -1);
			break;
		case 20:
			func_135(cParam0, 21);
			break;
		case 21:
			func_135(cParam0, 6);
			break;
		case 22:
			if (func_1881(cParam0, "WNT1_OVERLOOK", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 23:
			if (func_1881(cParam0, "WNT1_HITCH_HRY", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1881(cParam0, "WNT1_DISMOUNT", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 30:
			func_135(cParam0, -1);
			break;
		case 31:
			func_179(&uLocal_906, 4096);
			func_135(cParam0, -1);
			break;
		case 32:
			func_135(cParam0, -1);
			break;
	}
}

void func_1345(char[4] cParam0)
{
	if (func_177(iVar904, -2147483648))
	{
		func_1905(cParam0);
	}
	func_1906(cParam0);
	func_1907(cParam0);
	func_1908(cParam0);
	func_1909(cParam0);
	func_1910(cParam0);
	func_1609(cParam0);
	func_1911();
	func_1912(cParam0);
	func_1913();
	func_1362(cParam0, 0);
	if (!func_177(iVar904, 16384))
	{
		func_951();
	}
	func_1914(cParam0);
	func_1915(cParam0);
	func_1916(cParam0);
	if (!func_177(iVar901, 32768))
	{
		func_943();
	}
}

int func_1346(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1347(bool bParam0)
{
	if (bParam0)
	{
		if (!is_entity_dead(&(uLocal_1064[2])))
		{
			if (!func_177(iLocal_92, 4))
			{
				open_sequence_task(&uLocal_1018);
				task_follow_waypoint_recording(0, sVar877, 0, 25608, -1, 0, 0, -1);
				close_sequence_task(iVar1015);
				task_perform_sequence(&(uLocal_1064[2]), iVar1015);
				clear_sequence_task(&uLocal_1018);
			}
			set_ped_config_flag(&(uLocal_1064[2]), 279, true);
			_0xac22aa6df4d1c1de(get_player_index(), &(uLocal_1064[2]), 0.75f, 16f, 2, 3, 0);
			_0xdd33a82352c4652f(player_id(), &(uLocal_1064[2]), 0);
			_0x02e741e19e39628c(&(uLocal_1064[2]), 2.5f);
			_0x0e9e95fdedcc9d35(Global_35, 1, 0);
		}
	}
	else if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
	}
}

void func_1348(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_1917(vParam1, 0f, 0f, 0f))
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
	fVar3 = func_1331(bParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1918() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			if (!is_entity_dead(iVar0) && !func_1919(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1919(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_1349(bool bParam0)
{
	if (func_1920(-1, bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			set_blocking_of_non_temporary_events(&(Local_14.f_26[iVar0]), true);
			set_ped_relationship_group_hash(&(Local_14.f_26[iVar0]), -1538724068);
			_0xba8818212633500a(&(Local_14.f_26[iVar0]), 0, 1);
			set_ped_config_flag(&(Local_14.f_26[iVar0]), 324, true);
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_1350(int iParam0, vector3 vParam1, var uParam4, bool bParam5)
{
	func_1317(&(iLocal_1084[iParam0]), vParam1, 34, 1073741824);
	_0x9587913b9e772d29(&(iLocal_1084[iParam0]), 1);
	if (bParam5)
	{
		if (func_1921(&(iLocal_1084[iParam0]), vParam1, 3f, 0))
		{
		}
	}
}

void func_1351(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (has_ped_got_weapon(iParam0, -164645981, 0, false))
		{
			iVar0 = _0xc6a6789bb405d11c(iParam0, 1);
		}
		if (does_entity_exist(iVar0))
		{
			set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
			delete_object(&iVar0);
		}
	}
}

void func_1352()
{
	iLocal_433[0] = -1;
	iLocal_441[0] = -1;
}

void func_1353(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (func_8(cParam0, 8))
			{
				if (func_1881(cParam0, "WNT1_DISMOUNT", 1, 0, 0))
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
			if (&iLocal_393[4] == -1)
			{
				iLocal_393[4] = 0;
			}
			func_135(cParam0, -1);
			break;
		case 2:
			if (func_1881(cParam0, "WNT1_COVER", 0, 1f, 0))
			{
				func_179(&uLocal_904, 524288);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1881(cParam0, "WNT1_OBJ_FLW_DCH", 4, 0, 0))
			{
				func_464(&iLocal_1048);
				func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
				func_135(cParam0, -1);
			}
			break;
		case 4:
			func_135(cParam0, 5);
			break;
		case 5:
			iLocal_433[0] = 0;
			if (!does_blip_exist(iVar1045))
			{
				iLocal_1048 = func_1922(-308585968, &(iLocal_1108[59]), 1);
				_blip_set_modifier(iVar1045, -1833912565);
			}
			func_479(cParam0, &(uLocal_1064[1]), 1);
			func_179(&uLocal_904, 8);
			func_27(&uLocal_1327, 0);
			func_135(cParam0, -1);
			break;
		case 7:
			func_135(cParam0, -1);
			break;
		case 8:
			func_135(cParam0, -1);
			break;
		case 9:
			if (func_1881(cParam0, "WNT1_IG2", 0, 0, 0))
			{
				func_135(cParam0, 13);
			}
			break;
		case 10:
			if (func_1881(cParam0, "WNT1_WAITING", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_NOISE", 1, 0, 0))
				{
					func_135(cParam0, 9);
				}
			}
			break;
		case 12:
			if (func_1881(cParam0, "WNT1_MESS", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			if (func_1881(cParam0, "WNT1_HIDE", 0, 0, 0))
			{
				if (does_blip_exist(iVar1045))
				{
					remove_blip(&iLocal_1048);
				}
				func_179(&uLocal_906, 67108864);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_45();
				func_479(cParam0, &(uLocal_1064[1]), 1);
				func_135(cParam0, -1);
			}
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_COME", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			func_1618(cParam0, "WNT1_OBJ_FLW_DCH", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 2);
			break;
		case 16:
			if (func_1881(cParam0, "WNT1_WRONGCOV", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (func_1881(cParam0, "WNT1_DISMOUNT", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1354(char[4] cParam0)
{
	func_1923(cParam0);
	func_1924(cParam0);
	func_1925(cParam0);
	func_1912(cParam0);
	func_1926(cParam0);
	func_1362(cParam0, 0);
	func_1927(cParam0);
	func_1928(cParam0);
	func_1916(cParam0);
}

void func_1355(char[4] cParam0)
{
	if (iVar344 >= 6 && func_177(iVar903, 67108864))
	{
		if (!func_1359())
		{
			if (is_ped_in_cover(Global_35, 0, 0) && !(is_entity_in_volume(Global_35, &(iLocal_1108[13]), true, 0) || is_entity_in_volume(Global_35, &(iLocal_1108[14]), true, 0)))
			{
				if (!func_26(&uLocal_1502) || func_248(&uLocal_1502) > 10000)
				{
					func_247(&uLocal_1502);
					func_135(cParam0, 16);
				}
			}
		}
	}
}

void func_1356(int iParam0)
{
	if (does_blip_exist(iParam0))
	{
		_blip_set_modifier(iParam0, -1269631044);
	}
}

bool func_1357()
{
	if ((is_entity_in_volume(Global_35, &(iLocal_1108[13]), true, 0) || is_entity_in_volume(Global_35, &(iLocal_1108[14]), true, 0)) && is_entity_in_volume(&(uLocal_1064[2]), &(iLocal_1108[12]), true, 0))
	{
		if (is_ped_in_cover(Global_35, 0, 0) && (is_ped_in_cover(&(uLocal_1064[2]), 0, 0) || _0x8d81e7824b7753f7(&(uLocal_182[6]), "s_IG3_MICAH_COVER", 1)))
		{
			return true;
		}
	}
	return false;
}

float func_1358(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_527(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_579() - uParam0->f_1);
}

bool func_1359()
{
	return func_1929(1);
}

void func_1360()
{
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, 527275493, false);
	set_ped_config_flag(Global_35, 334, true);
	if (is_ped_in_cover(Global_35, 0, 0))
	{
		disable_control_action(0, -562475458, false);
		disable_control_action(0, -640622144, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1292666904, false);
	}
}

void func_1361()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!_does_scenario_point_exist(&(Local_695[iVar0])))
		{
			Local_695[iVar0] = func_1930(-2061249149, func_1013(18, iVar0), func_1046(18, iVar0), 5f, 0, 0);
			StringCopy(&(Local_695[iVar0]->f_1), "TEETER", 64);
		}
		iVar0++;
	}
}

bool func_1362(char[4] cParam0, bool bParam1)
{
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = false;
		switch (iLocal_140)
		{
			case 0:
				func_1931(-1, 1);
				bVar0 = true;
				iLocal_140 = 1;
				break;
			case 1:
				if (func_1932())
				{
					bVar0 = true;
					iLocal_140 = 2;
				}
				break;
			case 2:
				if (func_1933(cParam0, 0))
				{
					func_1934();
					iLocal_140 = 3;
				}
				break;
			case 3:
				if (bParam1)
				{
					return true;
				}
				if (iVar354 >= 3)
				{
					if (_0xb89fcff19dafff28(&(uLocal_182[9]), "cs_mradler"))
					{
						iLocal_140 = 4;
					}
				}
				break;
			case 4:
				reset_anim_scene(&(uLocal_182[9]), 0);
				iLocal_159 = 1;
				iLocal_140 = 5;
				break;
			case 5:
				if (func_1933(cParam0, 1))
				{
					if (iVar354 > 4)
					{
						iLocal_140 = 2;
						bVar0 = true;
					}
				}
				break;
			case 6:
				return true;
		}
	}
	return false;
}

bool func_1363(char[4] cParam0)
{
	bVar0 = true;
	switch (iLocal_158)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_182[7])))
			{
				iLocal_158 = 2;
			}
			break;
		case 2:
			func_1931(-1, 1);
			if (does_entity_exist(&(Local_14.f_64[0])))
			{
				set_entity_coords_no_offset(&(Local_14.f_64[0]), func_1935(&(uLocal_182[8]), "PL_IG4_Line_TheresACorpse", 0), false, true, true);
				freeze_entity_position(&(Local_14.f_64[0]), true);
			}
			else
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_158 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_182[8]), "CS_Micah", &(uLocal_1064[2]), 0);
			set_anim_scene_entity(&(uLocal_182[8]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_182[8]), "s_mradlerfrozen_blkt", &(Local_14.f_64[0]), 0);
			set_anim_scene_entity(&(uLocal_182[8]), "cs_mradler", &(Local_14.f_44[0]), 0);
			set_anim_scene_entity(&(uLocal_182[7]), "Dutch", &(uLocal_1064[1]), 0);
			set_anim_scene_entity(&(uLocal_182[7]), "G_M_M_UNIDUSTER_02", &(Local_14.f_11[1]), 0);
			set_anim_scene_entity(&(uLocal_182[7]), "G_M_M_UNIDUSTER_02^1", &(Local_14.f_11[0]), 0);
			set_anim_scene_entity(&(uLocal_182[7]), "G_M_M_UNIDUSTER_02^2", &(Local_14.f_11[2]), 0);
			set_anim_scene_entity(&(uLocal_182[7]), "G_M_M_UNIDUSTER_02^3", &(Local_14.f_11[3]), 0);
			func_1874(cParam0, &(uLocal_182[7]));
			func_1874(cParam0, &(uLocal_182[8]));
			iLocal_158 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_182[7]), true, false))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[7]), "PL_IG4_Odriscolll_Idles"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[7]), "PL_IG4_Dutch_Confronts"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[7]), "PL_IG4_Odriscoll_Guns_Drawn"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[7]), "PL_IG4_Odriscoll_No_Guns"))
			{
				bVar0 = false;
			}
			if (!_is_anim_scene_loaded(&(uLocal_182[8]), true, false))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[8]), "PL_IG4_Line_TheresACorpse"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[8]), "PL_IG4_Reaction_Guns_Drawn"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[8]), "PL_IG4_Reaction_No_Guns"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[8]), "PL_Idle"))
			{
				bVar0 = false;
			}
			if (!func_1936(&(uLocal_182[8]), "PL_IG3_Idle"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_158 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1364(char[4] cParam0)
{
	bVar0 = true;
	func_1937(cParam0);
	while (bVar0)
	{
		bVar0 = false;
		switch (iVar354)
		{
			case 0:
				bVar0 = true;
				iLocal_357 = 2;
				break;
			case 2:
				if (func_1363(cParam0))
				{
					if (func_1938("PL_IG4_Dutch_Confronts"))
					{
						iLocal_357 = 3;
					}
				}
				break;
			case 3:
				if (!func_177(iVar903, 2097152))
				{
					if (_is_anim_scene_started(&(uLocal_182[7]), false) && _get_anim_scene_time(&(uLocal_182[7])) > 3f)
					{
						func_178();
						func_179(&uLocal_906, 2097152);
					}
				}
				if (func_1939(cParam0))
				{
					set_ped_config_flag(Global_35, 483, false);
					iLocal_357 = 4;
				}
				break;
			case 4:
				func_247(&uLocal_1526);
				if (func_1363(cParam0))
				{
					if (func_1940())
					{
						_0x140b3cb1d424a945(&(uLocal_1064[1]), -1);
						func_247(&uLocal_1397);
						func_479(cParam0, &(uLocal_1064[1]), 1);
						iLocal_357 = 6;
					}
					else if (_0xb89fcff19dafff28(&(uLocal_182[7]), "Dutch"))
					{
						iLocal_357 = 5;
					}
				}
				break;
			case 5:
				open_sequence_task(&uLocal_1018);
				task_go_to_coord_while_aiming_at_entity(0, func_473(7, 5), &(Local_14.f_11[0]), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				task_put_ped_directly_into_cover(0, func_473(7, 5), -1, 0, 0f, 0, 0, uVar1004, 0, 0, 0);
				close_sequence_task(iVar1015);
				task_perform_sequence(&(uLocal_1064[1]), iVar1015);
				clear_sequence_task(&uLocal_1018);
				iLocal_357 = 7;
				break;
			case 6:
				if (func_1941())
				{
					set_ped_config_flag(&(uLocal_1064[1]), 249, false);
					open_sequence_task(&uLocal_1018);
					task_put_ped_directly_into_cover(0, func_473(7, 5), -1, 0, 0f, 0, 0, uVar1004, 0, 0, 0);
					close_sequence_task(iVar1015);
					task_perform_sequence(&(uLocal_1064[1]), iVar1015);
					clear_sequence_task(&uLocal_1018);
					set_ped_sphere_defensive_area(&(uLocal_1064[1]), func_473(7, 5), 2f, 0, false, 0);
					iLocal_357 = 7;
				}
				break;
			case 7:
				if (iVar631 == 5 && func_926(Global_35, &(uLocal_1064[1]), 1, 1) < 30f)
				{
					if (func_1346(cParam0) == -1 && !func_1359())
					{
						func_1942(cParam0);
						func_465(&uLocal_1397);
						iLocal_357 = 8;
					}
				}
				else if (iVar631 == 5 && func_926(Global_35, &(uLocal_1064[1]), 1, 1) > 30f)
				{
					if (!func_177(iVar901, 536870912))
					{
						if (!func_177(iVar904, 4096))
						{
							if (func_1881(cParam0, "WNT1_OBJ_FLW_DCH", 4, 0, 0))
							{
								func_179(&uLocal_904, 268435456);
								func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
								func_179(&uLocal_907, 4096);
							}
						}
					}
				}
				break;
			case 8:
				if (func_1943(cParam0))
				{
					set_ped_config_flag(&(uLocal_1064[1]), 248, true);
					iLocal_357 = 9;
				}
				break;
			case 9:
				if (!func_1359())
				{
					Local_733[5]->f_7 = 1;
					Local_733[6]->f_7 = 1;
					iLocal_357 = 10;
				}
				break;
			case 10:
				break;
		}
	}
}

void func_1365(char[4] cParam0)
{
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = false;
		switch (iVar355)
		{
			case 0:
				bVar0 = true;
				iLocal_358 = 1;
				break;
			case 1:
				if (func_1363(cParam0))
				{
					if (func_1944("PL_IG3_Idle"))
					{
						iLocal_358 = 2;
					}
				}
				break;
			case 2:
				if (&iLocal_441[1] == -1)
				{
					if (_is_anim_scene_started(&(uLocal_182[7]), false) && _get_anim_scene_time(&(uLocal_182[7])) > 20f)
					{
						iLocal_441[1] = 0;
					}
				}
				if (_is_anim_scene_started(&(uLocal_182[7]), false) && _get_anim_scene_time(&(uLocal_182[7])) > 25f)
				{
					iLocal_358 = 3;
				}
				break;
			case 3:
				if (func_1363(cParam0))
				{
					if (func_1944("PL_IG4_Line_TheresACorpse"))
					{
						func_135(cParam0, 13);
						iLocal_358 = 4;
					}
				}
				break;
			case 4:
				if (func_1945())
				{
					iLocal_358 = 5;
				}
				break;
			case 5:
				func_1363(cParam0);
				if (func_1946())
				{
					func_135(cParam0, func_1346(cParam0));
					set_ped_accuracy(&(uLocal_1064[2]), 100);
					set_ped_combat_attributes(&(uLocal_1064[2]), 27, true);
					set_ped_combat_attributes(&(uLocal_1064[2]), 30, true);
					set_ped_combat_attributes(&(uLocal_1064[2]), 0, true);
					set_ped_combat_attributes(&(uLocal_1064[2]), 28, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 42, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 14, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 31, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 4, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 8, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 96, false);
					set_ped_combat_attributes(&(uLocal_1064[2]), 93, false);
					set_combat_float(&(uLocal_1064[2]), 3, 0.1f);
					set_combat_float(&(uLocal_1064[2]), 4, 0.1f);
					set_ped_combat_movement(&(uLocal_1064[2]), 0);
					set_ped_sphere_defensive_area(&(uLocal_1064[2]), func_473(3, 7), 1f, 0, false, 0);
					open_sequence_task(&uLocal_1018);
					task_put_ped_directly_into_cover(0, func_473(3, 7), -1, 1, 0f, 1, 1, uVar1005, 0, 0, 0);
					task_set_sphere_defensive_area(0, func_473(3, 7), 1f);
					task_combat_hated_targets_in_area(0, func_473(3, 7), 200f, 0, 2);
					task_stay_in_cover(0);
					close_sequence_task(iVar1015);
					task_perform_sequence(&(uLocal_1064[2]), iVar1015);
					clear_sequence_task(&uLocal_1018);
					_0x2208438012482a1a(&(uLocal_1064[2]), true, false);
					iLocal_358 = 6;
				}
				break;
			case 6:
				if (iVar630 >= 2)
				{
					open_sequence_task(&uLocal_1018);
					task_put_ped_directly_into_cover(0, func_473(3, 7), -1, 0, 0f, 1, 1, uVar1005, 0, 1, 0);
					close_sequence_task(iVar1015);
					task_perform_sequence(&(uLocal_1064[2]), iVar1015);
					clear_sequence_task(&uLocal_1018);
					if (!is_ped_in_cover_facing_left(&(uLocal_1064[2])))
					{
						set_ped_config_flag(&(uLocal_1064[2]), 32, true);
					}
					iLocal_358 = 7;
				}
				break;
			case 7:
				if (iVar631 == 5)
				{
					iLocal_358 = 8;
				}
				break;
			case 8:
				break;
		}
	}
}

void func_1366(int iParam0, int iParam1, bool bParam2)
{
	func_496(iParam0, 0, 0);
	if (func_1025(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_1367(vector3 vParam0, bool bParam3)
{
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		set_gameplay_cam_relative_heading(0f, 1f);
		if (bParam3)
		{
			func_1947(vParam0);
		}
		func_1948(vParam0);
		return true;
	}
	return false;
}

void func_1368()
{
	func_480(1482409867, 1, 0f, 0, 0, 0, 0, 0);
}

void func_1369()
{
	func_480(872775928, 0, 0, 0, 1, 0, 0, 0);
	func_480(-1909593249, 0, 0, 0, 1, 0, 0, 0);
	func_201();
}

void func_1370()
{
	iLocal_441[1] = -1;
	iLocal_441[2] = -1;
	iLocal_441[3] = -1;
	iLocal_441[4] = -1;
	iLocal_441[6] = -1;
	iLocal_441[7] = -1;
	iLocal_441[8] = -1;
	iLocal_441[9] = -1;
	iLocal_441[5] = -1;
	iLocal_441[3] = -1;
}

void func_1371(char[4] cParam0, int iParam1)
{
	switch (func_1346(cParam0))
	{
		case 0:
			func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
			if (&iLocal_441[0] == -1)
			{
				iLocal_441[0] = 0;
			}
			func_135(cParam0, -1);
			func_247(&uLocal_1346);
			break;
		case 1:
			if (func_1881(cParam0, "WNT1_OBJ_WATCH", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 7:
			func_135(cParam0, *iParam1);
			break;
		case 8:
			func_135(cParam0, 9);
			break;
		case 9:
			if (func_1881(cParam0, "WNT1_OBJ_FLW_DCH", 5, 0, 0))
			{
				StringCopy(&(cParam0->f_13146), _uilog_get_cached_objective(), 128);
				StringCopy(&(cParam0->f_13162), _uilog_get_cached_objective(), 128);
				func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
				func_179(&uLocal_904, 268435456);
				func_135(cParam0, -1);
			}
			break;
		case 11:
			if (func_1881(cParam0, "WNT1_WINDOW", 1, 0, 0))
			{
				func_135(cParam0, 24);
			}
			break;
		case 12:
			if (func_1881(cParam0, "WNT1_HORSES", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_ESCAPE", 1, 0, 0))
			{
				if (&iLocal_441[8] < 0)
				{
					iLocal_441[8] = 0;
				}
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (func_1881(cParam0, "WNT1_LEAVE", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 16:
			func_135(cParam0, -1);
			break;
		case 17:
			if (func_1881(cParam0, "WNT1_EARLY", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 18:
			if (func_1881(cParam0, "WNT1_QUICK", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 19:
			if (func_1881(cParam0, "WNT1_WELL", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 20:
			if (func_1881(cParam0, "WNT1_HOUSE", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 22:
			if (func_1881(cParam0, "WNT1_TOILET", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 24:
			if (does_entity_exist(&(Local_14.f_22[0])) && func_497(&(Local_14.f_22[0]), 0))
			{
				if (func_1881(cParam0, "WNT1_SHOUTWIND", 1, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 25:
			if (func_1881(cParam0, "WNT1_RUNAWAY", 1, 0, 0))
			{
				if (&iLocal_441[8] < 0)
				{
					iLocal_441[8] = 0;
				}
				func_135(cParam0, -1);
			}
			break;
		case 26:
			func_135(cParam0, -1);
			break;
		case 40:
			func_135(cParam0, *iParam1);
			break;
	}
	*iParam1 = -1;
}

void func_1372(char[4] cParam0)
{
	func_1949(cParam0);
	func_1950(cParam0);
	func_1951(cParam0);
	func_1952(cParam0);
	func_1364(cParam0);
	func_1365(cParam0);
	func_1953(cParam0);
	func_1954(cParam0);
	func_1362(cParam0, 0);
	func_1955(cParam0);
}

bool func_1373(char[4] cParam0)
{
	bVar0 = false;
	if (func_1956(1))
	{
		bVar0 = true;
	}
	if ((func_1957(&(Local_14.f_11[0]), Global_35) || func_1957(&(Local_14.f_11[1]), Global_35)) || func_1957(&(Local_14.f_11[2]), Global_35))
	{
		bVar0 = true;
	}
	if (func_33(cParam0) == iLocal_84)
	{
		if (is_ped_shooting(Global_35) && func_1332(Global_35, &(iLocal_1108[2]), 1, 0))
		{
			func_179(&uLocal_904, 64);
			bVar0 = true;
		}
		if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iLocal_1266 = func_1346(cParam0);
			func_135(cParam0, 7);
			func_179(&uLocal_904, 16);
		}
	}
	else if (func_33(cParam0) == iLocal_85)
	{
		if (is_ped_shooting(Global_35))
		{
			func_179(&uLocal_904, 64);
			bVar0 = true;
		}
		if (!is_ped_in_cover(Global_35, 0, 0) && !is_entity_in_volume(&(Local_14.f_11[0]), &(iLocal_1108[0]), true, 0))
		{
			func_1958(cParam0);
			bVar0 = true;
		}
		if ((is_ped_aiming_from_cover(Global_35) && func_1956(1)) && !is_entity_in_volume(&(Local_14.f_11[0]), &(iLocal_1108[0]), true, 0))
		{
			func_1958(cParam0);
			func_179(&uLocal_904, 64);
			bVar0 = true;
		}
		if (is_entity_in_volume(Global_35, &(iLocal_1108[1]), true, 0))
		{
			bVar0 = true;
		}
		if (func_1959(Local_14.f_9, Global_35, 4f))
		{
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_1374(char[4] cParam0)
{
	func_113(1);
	iLocal_1266 = func_1346(cParam0);
	func_135(cParam0, 7);
	func_179(&uLocal_904, 16);
}

void func_1375()
{
	if (!is_entity_dead(Global_35))
	{
		iLocal_1108[26] = _create_volume_sphere_with_custom_name(get_entity_coords(Global_35, true, false), 0f, 0f, 0f, 5f, 5f, 5f, "m_volMission[WINTER1_COMBAT_DEFENSIVE_VOLUME]");
		_0x7c00cfc48a782dc0(&(iLocal_1108[26]), Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	iLocal_903 = 0;
	while (iVar901 < 4)
	{
		if (!is_entity_dead(&(Local_14.f_11[iVar901])))
		{
			remove_ped_defensive_area(&(Local_14.f_11[iVar901]), false);
			_0xfc3db99c8144cd81(&(Local_14.f_11[iVar901]), &(iLocal_1108[26]), 0, 0, 0);
		}
		iLocal_903 = iVar901 + 1;
	}
}

void func_1376()
{
	if (func_497(&(uLocal_1064[1]), 0))
	{
		remove_ped_defensive_area(&(uLocal_1064[1]), false);
		_set_ped_crouch_movement(&(uLocal_1064[1]), false, 0, false);
		_set_ped_crouch_movement(&(uLocal_1064[1]), false, 0, false);
		if (_0xb655db7582aec805(&(uLocal_1064[1])))
		{
			_0xf6262491c7704a63(&(uLocal_1064[1]), 0);
		}
	}
	if (func_497(&(uLocal_1064[2]), 0))
	{
		remove_ped_defensive_area(&(uLocal_1064[2]), false);
		_set_ped_crouch_movement(&(uLocal_1064[2]), false, 0, false);
		_set_ped_crouch_movement(&(uLocal_1064[2]), false, 0, false);
		if (_0xb655db7582aec805(&(uLocal_1064[2])))
		{
			_0xf6262491c7704a63(&(uLocal_1064[2]), 0);
		}
	}
}

void func_1377(char[4] cParam0)
{
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = false;
		switch (iLocal_142)
		{
			case 0:
				iLocal_142 = 1;
				break;
			case 1:
				if (func_1960(cParam0))
				{
					set_current_ped_weapon(&(uLocal_1064[1]), -1569615261, true, 0, false, false);
					set_current_ped_weapon(&(uLocal_1064[1]), -1569615261, true, 1, false, false);
					stop_fire_in_range(get_entity_coords(&(uLocal_1064[1]), true, false), 50f);
					func_1961();
					iLocal_142 = 2;
				}
				break;
			case 2:
				func_1962(&(uLocal_1064[1]), Global_35);
				if (_does_anim_scene_exist(&(uLocal_182[10])))
				{
					if (((_is_anim_scene_started(&(uLocal_182[10]), false) && _0x8d81e7824b7753f7(&(uLocal_182[10]), "s_IG6_Dutch_Idle01", 1)) && is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0)) || (_is_anim_scene_finished(&(uLocal_182[10]), false) && is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0)))
					{
						if (_is_anim_scene_finished(&(uLocal_182[10]), false))
						{
							reset_anim_scene(&(uLocal_182[10]), 0);
							iLocal_160 = 1;
						}
						iLocal_142 = 3;
					}
				}
				if (is_entity_in_volume(&(uLocal_1064[1]), &(iLocal_1108[0]), true, 0) && !is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					func_1963(cParam0);
				}
				else if (func_1882("WNT1_HOUSE"))
				{
					stop_scripted_conversation("WNT1_HOUSE", false, true);
				}
				break;
			case 3:
				if (func_1960(cParam0))
				{
					if (func_1964("pl_IG6_Dutch_Rummaging01"))
					{
						iLocal_142 = 4;
					}
				}
				break;
			case 4:
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					func_1962(&(uLocal_1064[1]), Global_35);
					if ((_is_anim_scene_started(&(uLocal_182[10]), false) && _0x8d81e7824b7753f7(&(uLocal_182[10]), "s_IG6_Dutch_Idle02", 1)) || _is_anim_scene_finished(&(uLocal_182[10]), false))
					{
						if (!is_entity_in_volume(Global_35, &(iLocal_1108[42]), true, 0))
						{
							if (_is_anim_scene_finished(&(uLocal_182[10]), false))
							{
								reset_anim_scene(&(uLocal_182[10]), 0);
								iLocal_160 = 1;
							}
							iLocal_142 = 5;
						}
					}
				}
				break;
			case 5:
				if (func_1960(cParam0))
				{
					if (func_1964("pl_IG6_Dutch_Walks_2_Bed_Start"))
					{
						iLocal_142 = 6;
					}
				}
				break;
			case 6:
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					func_1962(&(uLocal_1064[1]), Global_35);
					if ((_is_anim_scene_started(&(uLocal_182[10]), false) && _0x8d81e7824b7753f7(&(uLocal_182[10]), "s_IG6_Dutch_Walks_2_Bed_Idle", 1)) || _is_anim_scene_finished(&(uLocal_182[10]), false))
					{
						if (!is_entity_in_volume(Global_35, &(iLocal_1108[42]), true, 0))
						{
							if (_is_anim_scene_finished(&(uLocal_182[10]), false))
							{
								reset_anim_scene(&(uLocal_182[10]), 0);
								iLocal_160 = 1;
							}
							iLocal_142 = 7;
						}
					}
				}
				break;
			case 7:
				if (func_1960(cParam0))
				{
					if (func_1964("pl_IG6_Dutch_Walks_2_Bed_Finish"))
					{
						iLocal_142 = 8;
					}
				}
				break;
			case 8:
				if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
				{
					if (((_is_anim_scene_started(&(uLocal_182[10]), false) && _0x8d81e7824b7753f7(&(uLocal_182[10]), "s_IG6_Dutch_Idle03", 1)) || _is_anim_scene_finished(&(uLocal_182[10]), false)) && &iLocal_516[1] == 12)
					{
						if (_is_anim_scene_finished(&(uLocal_182[10]), false))
						{
							reset_anim_scene(&(uLocal_182[10]), 0);
							iLocal_160 = 1;
						}
						if (&iLocal_516[3] < 12)
						{
							iLocal_516[3] = 11;
						}
						iLocal_142 = 9;
					}
				}
				break;
			case 9:
				if (func_1960(cParam0))
				{
					if (!func_1359())
					{
						if (func_1964("pl_IG6_Dutch_Walks_Out_Load_Up_2_Outside"))
						{
							if (!func_177(iVar907, 8))
							{
								func_135(cParam0, 6);
							}
							iLocal_142 = 10;
						}
					}
				}
				break;
			case 10:
				func_1962(&(uLocal_1064[1]), Global_35);
				func_1965(cParam0);
				if (func_1966())
				{
					func_198();
					_0x437c08db4febe2bd(&(uLocal_1064[1]), "supplies_upper", 1f, -1);
					bVar0 = true;
					iLocal_142 = 12;
				}
				break;
			case 12:
				if (get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 1)
				{
					if (func_1965(cParam0))
					{
						_0x411189e51b8020ba(&(uLocal_1064[1]), "supplies_upper");
						func_1967();
						iLocal_142 = 13;
					}
				}
				break;
			case 13:
				break;
			case 14:
				break;
		}
	}
}

void func_1378(char[4] cParam0)
{
	bVar0 = true;
	if (iLocal_141 >= 10)
	{
		func_1968(cParam0);
	}
	while (bVar0)
	{
		bVar0 = false;
		switch (iLocal_141)
		{
			case 0:
				iLocal_141 = 1;
				break;
			case 1:
				if (func_1969())
				{
					bVar0 = true;
					iLocal_141 = 2;
				}
				break;
			case 2:
				func_1970();
				iLocal_141 = 3;
				break;
			case 3:
				if (func_1971(cParam0))
				{
					if (get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 1)
					{
						func_1972();
						iLocal_141 = 4;
					}
				}
				break;
			case 4:
				if (get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 1)
				{
					iLocal_141 = 5;
				}
				break;
			case 5:
				if (func_1971(cParam0))
				{
					func_1973();
					iLocal_141 = 6;
				}
				break;
			case 6:
				if (func_33(cParam0) >= iLocal_86)
				{
					iLocal_141 = 7;
				}
				break;
			case 7:
				if ((!is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0) && !is_entity_in_volume(Global_35, &(iLocal_1108[57]), true, 0)) && iLocal_145 >= 2)
				{
					iLocal_141 = 8;
				}
				break;
			case 8:
				if (get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 1)
				{
					if (func_1974(cParam0))
					{
						if (_is_anim_scene_started(&(uLocal_182[13]), false))
						{
							abort_anim_scene(&(uLocal_182[13]), false);
						}
						func_1975();
						iLocal_141 = 9;
					}
				}
				break;
			case 9:
				iVar1 = _find_closest_active_scenario_point_of_type(-554.3303f, 2711.456f, 319.4084f, 813516613, 5f, 1, false);
				if (((_does_scenario_point_exist(iVar1) && _0xa9e7672f8c6c6f74(iVar1) == 0) || !_does_scenario_point_exist(iVar1)) && (_is_anim_scene_started(&(uLocal_182[14]), false) && _0x8d81e7824b7753f7(&(uLocal_182[14]), "s_IG9_Shelf_Looking_Loop", 1)))
				{
					iLocal_141 = 10;
				}
				break;
			case 10:
				if (func_1974(cParam0))
				{
					if (func_1976("pl_Trans_Shelf_to_Window"))
					{
						iLocal_141 = 11;
					}
				}
				break;
			case 11:
				if (_is_anim_scene_started(&(uLocal_182[14]), false) && _0x8d81e7824b7753f7(&(uLocal_182[14]), "s_IG9_Window_Looking_Loop", 1))
				{
					iLocal_141 = 12;
				}
				break;
			case 12:
				if (func_1974(cParam0))
				{
					if (!func_1332(Global_35, &(iLocal_1108[18]), 1, 0))
					{
						if (func_1976("pl_Trans_Window_to_Bed"))
						{
							iLocal_141 = 13;
						}
					}
				}
				break;
			case 13:
				if (_is_anim_scene_started(&(uLocal_182[14]), false) && _0x8d81e7824b7753f7(&(uLocal_182[14]), "s_IG9_Bed_Looking_Loop", 1))
				{
					iLocal_141 = 14;
				}
				break;
			case 14:
				if (func_1974(cParam0))
				{
					if (func_1976("pl_Trans_Bed_to_Fireplace"))
					{
						iLocal_141 = 15;
					}
				}
				break;
			case 15:
				if (_is_anim_scene_started(&(uLocal_182[14]), false) && _0x8d81e7824b7753f7(&(uLocal_182[14]), "s_IG9_At_Fireplace_Loop", 1))
				{
					iLocal_141 = 16;
				}
				break;
			case 16:
				if (func_1974(cParam0))
				{
					if (func_1976("pl_Trans_Fireplace_to_Shelf"))
					{
						iLocal_141 = 17;
					}
				}
				break;
			case 17:
				if (_is_anim_scene_started(&(uLocal_182[14]), false) && _0x8d81e7824b7753f7(&(uLocal_182[14]), "s_IG9_Shelf_Looking_Loop2", 1))
				{
				}
				break;
			case 18:
				if (get_script_task_status(&(uLocal_1064[2]), 242628503, true) != 1)
				{
					func_1977();
					iLocal_141 = 19;
				}
				break;
			case 19:
				break;
		}
	}
}

void func_1379(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1380()
{
	func_480(-1909593249, 0, 0f, 0, 1, 0, 0, 0);
}

void func_1381()
{
	iLocal_516[0] = -1;
	iLocal_516[1] = -1;
	iLocal_516[2] = -1;
	iLocal_516[3] = -1;
}

void func_1382(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (func_1881(cParam0, "WNT1_OBJ_ENTER", 4, 0, 0))
			{
				func_1978();
				func_135(cParam0, -1);
			}
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
			{
				if (func_1881(cParam0, "WNT1_FOLLOW", 1, 0, 0))
				{
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			iLocal_516[0] = 0;
			func_1978();
			func_987(cParam0);
			func_135(cParam0, 3);
			break;
		case 3:
			if (func_990(cParam0) >= 3f)
			{
				if (func_1881(cParam0, "WNT1_H_SEARCH", 8, 0, 0))
				{
					func_247(&uLocal_1529);
					func_135(cParam0, 12);
				}
			}
			break;
		case 4:
			func_135(cParam0, -1);
			break;
		case 5:
			if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_1064[1]), 1))
				{
					if (func_1881(cParam0, "WNT1_LOOT1", 1, 5f, 0))
					{
						func_135(cParam0, 12);
					}
				}
			}
			break;
		case 6:
			if (func_1881(cParam0, "WNT1_KPSEARCH", 1, 0, 0))
			{
				func_135(cParam0, -1);
				func_179(&uLocal_910, 8);
			}
			break;
		case 7:
			if (func_1881(cParam0, "WNT1_OBJ_SRCH2", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 8:
			if (func_1881(cParam0, "WNT1_READY", 1, 0, 0))
			{
				if (does_blip_exist(iVar1045))
				{
					func_1356(iVar1045);
				}
				func_1324(cParam0, &(uLocal_1064[1]), 1105014447, 422991367, 1, 1);
				func_179(&uLocal_910, 32);
				func_135(cParam0, 15);
			}
			break;
		case 9:
			if (func_1881(cParam0, "WNT1_LONG", 1, 0, 0))
			{
				func_179(&uLocal_907, 2);
				func_135(cParam0, -1);
			}
			break;
		case 10:
			func_135(cParam0, -1);
			break;
		case 11:
			if (func_1881(cParam0, "WNT1_H_EXTSEA", 8, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0) && !func_1359())
			{
				if (func_248(&uLocal_1529) > 10000)
				{
					if (func_1881(cParam0, "WNT1_LOOT2", 1, 0, 0))
					{
						func_247(&uLocal_1529);
						func_135(cParam0, 13);
					}
				}
			}
			else
			{
				func_247(&uLocal_1529);
			}
			break;
		case 13:
			if (!func_1359() && is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
			{
				if (func_248(&uLocal_1529) > 10000)
				{
					if (func_1881(cParam0, "WNT1_LOOT3", 1, 0, 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_247(&uLocal_1529);
			}
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_OBJ_OUT_DCH", 6, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			if (func_1881(cParam0, "WNT1_OBJ_SRCH_OPT", 4, 0, 0))
			{
				func_179(&uLocal_908, 16);
				func_135(cParam0, -1);
			}
			break;
		case 16:
			if (func_1881(cParam0, "WNT1_TOOLONG", 1, 0, 0))
			{
				func_179(&uLocal_907, 2);
				func_135(cParam0, -1);
			}
			break;
		case 17:
			if (func_1881(cParam0, "WNT1_RESPONSE", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 18:
			if (func_1881(cParam0, "WNT1_HUNGRY", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 20:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_HOUSE", 1, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
	}
}

void func_1383(char[4] cParam0)
{
	if (iLocal_142 >= 12)
	{
		func_1979(cParam0, 0, 1117126656, 1125515264, 0, 0, 1, 422991367);
	}
	else
	{
		func_1980(cParam0, func_473(4, 2), "WNT1_REM_RANCH", "WNT1_FAIL_RANCH", 1117126656, 1125515264, 0, 0, 0, 1, 1);
	}
	func_1377(cParam0);
	func_1981();
	func_1982();
	func_1378(cParam0);
	func_1983();
	func_1984();
	func_1362(cParam0, 0);
	func_1985(cParam0);
	func_1986(cParam0);
	func_1987(cParam0);
	func_1988();
	func_1989();
	func_1990(cParam0);
}

void func_1384(char[4] cParam0)
{
	if (!func_177(iVar902, 128))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_1108[3]), true, 0))
		{
			if (!func_26(&uLocal_1538))
			{
				func_247(&uLocal_1538);
			}
			if (func_1343(&uLocal_1538) > 1000)
			{
				if (_0xc17f69e1418cd11f(1) == 0)
				{
					iLocal_1544 = func_742("WNT1_H_LADD", 10000, 0, 0, 0, 1);
					func_179(&uLocal_905, 128);
					func_247(&uLocal_1445);
				}
			}
		}
	}
	else if (!is_entity_in_volume(Global_35, &(iLocal_1108[3]), true, 0))
	{
		if (func_26(&uLocal_1538))
		{
			func_465(&uLocal_1538);
		}
		if (_0xc17f69e1418cd11f(1) == iVar1541)
		{
			func_113(1);
			func_465(&uLocal_1445);
		}
	}
	if (_0x59643424b68d52b5(Global_35))
	{
		if (!func_177(iVar902, 128))
		{
			func_179(&uLocal_905, 128);
		}
	}
}

void func_1385()
{
	_0xe98d55c5983f2509(&(uLocal_1064[1]));
	if (func_10(iVar1311))
	{
		func_11(&iLocal_1313, 1, 1);
	}
}

bool func_1386(char[4] cParam0)
{
	if (!func_1991())
	{
		return false;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])))
	{
		return false;
	}
	if (!func_177(iVar906, 8388608))
	{
		_set_ped_scale(&(Local_14.f_3[0]), 1f);
		func_179(&uLocal_909, 8388608);
	}
	if (!_0xa0bc8faed8cfeb3c(&(Local_14.f_3[0])))
	{
		return false;
	}
	func_1817(&Var2);
	func_1818(Var2);
	func_1539(&(Local_14.f_3[0]), &uVar0, &Var2, 0);
	set_blocking_of_non_temporary_events(&(Local_14.f_3[0]), true);
	task_stand_still(&(Local_14.f_3[0]), -1);
	set_ped_config_flag(&(Local_14.f_3[0]), 147, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 172, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 173, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 174, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 138, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 367, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 300, true);
	set_ped_config_flag(&(Local_14.f_3[0]), 324, true);
	set_animal_tuning_bool_param(&(Local_14.f_3[0]), 48, true);
	func_1992(&(Local_14.f_3[0]), get_entity_coords(&(Local_14.f_3[0]), true, false));
	_0x9587913b9e772d29(&(Local_14.f_3[0]), 0);
	_0x9b65444c07b782bf(&(Local_14.f_3[0]), "Winter1Mount");
	_0xfcdec42b1c78b7f8(&(Local_14.f_3[0]), "WIN1_HORSE_PANICKING");
	func_1994(cParam0, &(Local_14.f_3[0]), 364148, 0, "WNT1_REM_BHORSE", 67108863, 1023, 3, 40);
	func_1432(0);
	return true;
}

void func_1387(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (!does_entity_exist(iVar1016))
		{
			iLocal_1019 = create_object(-1450002727, get_entity_coords(iParam0, true, false), true, true, false, false, true);
		}
		if (!is_entity_attached_to_entity(iVar1016, iParam0))
		{
			attach_entity_to_entity(iVar1016, iParam0, get_ped_bone_index(iParam0, 36182), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			play_entity_anim(iVar1016, "ig8_dutch_l_enter_bundle", "script_story@wnt1@ig@ig_8_dutchattachsuppliestohorse", 1f, false, true, false, 0f, 0);
			set_ped_config_flag(iParam0, 136, true);
		}
	}
}

void func_1388()
{
	_0x0d7fd6a55fd63aef(14, 3, 1);
	_0x0d7fd6a55fd63aef(19, 3, 1);
}

void func_1389()
{
	Local_931[3]->f_2 = 1;
	func_493();
}

void func_1390()
{
	iLocal_539[0] = -1;
	iLocal_547[0] = -1;
}

void func_1391(char[4] cParam0)
{
	if (iLocal_145 >= 3)
	{
		func_1995(cParam0);
	}
	switch (iLocal_145)
	{
		case 0:
			iLocal_145 = 1;
			break;
		case 1:
			if (func_1965(cParam0))
			{
				func_1996("pl_IG8_Idle_At_Horse");
				iLocal_145 = 2;
			}
			break;
		case 2:
			if (!_is_anim_scene_started(&(uLocal_182[12]), false))
			{
				if (func_1965(cParam0))
				{
					if (func_1997("WNT1_KEEP", 1))
					{
						func_1996("PL_IG8_Instructs_Arthur");
						func_247(&uLocal_1403);
						iLocal_145 = 3;
					}
				}
			}
			else if (func_1997("WNT1_KEEP", 1))
			{
				func_1996("PL_IG8_Instructs_Arthur");
				iLocal_145 = 3;
			}
			break;
		case 3:
			if (_is_anim_scene_started(&(uLocal_182[12]), false) && _0x8d81e7824b7753f7(&(uLocal_182[12]), "s_IG8_Dutch_Rightt_Loop", 1))
			{
				if (!func_26(&uLocal_1511) || func_248(&uLocal_1511) > 15000)
				{
					if (func_1332(Global_35, &(iLocal_1108[46]), 1, 0))
					{
						func_247(&uLocal_1511);
						func_1996("pl_IG8_React_L");
					}
					else if (func_1332(Global_35, &(iLocal_1108[47]), 1, 0))
					{
						func_247(&uLocal_1511);
						func_1996("pl_IG8_React_R");
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1392(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (func_1881(cParam0, "WNT1_KEEP", 1, 0, 0))
			{
				func_179(&uLocal_910, 2);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1359())
			{
				func_1998(cParam0, "WNT1_OBJ_INV_BARN", 0, 5000, 0, -1082130432, 0, 0, -1, -1, 0);
				iLocal_539[0] = 0;
				func_179(&uLocal_906, 536870912);
				iLocal_1048 = func_1999(408396114, func_473(13, 4), 1);
				func_135(cParam0, -1);
			}
			break;
		case 2:
			if (func_1881(cParam0, "WNT1_BARN", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 3:
			if (func_1881(cParam0, "WNT1_BARNM", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			func_135(cParam0, -1);
			break;
		case 40:
			func_135(cParam0, -1);
			break;
		case 41:
			func_135(cParam0, -1);
			break;
	}
}

void func_1393(char[4] cParam0)
{
	func_1980(cParam0, func_473(13, 4), "WNT1_REM_BARN", "WNT1_FAIL_BARN", 1117126656, 1125515264, 0, 0, 0, 1, 1);
	func_1400(cParam0);
	func_1391(cParam0);
	func_1378(cParam0);
	func_1362(cParam0, 0);
	func_2000();
	func_1984();
	func_2001(cParam0);
	func_2002(cParam0);
}

void func_1394(char[4] cParam0)
{
	func_2003(-1, 0);
	iLocal_903 = 0;
	while (iVar900 < 1)
	{
		if (func_497(&(Local_14.f_18[iVar900]), 0))
		{
			task_stand_still(&(Local_14.f_18[iVar900]), -1);
			remove_all_ped_weapons(&(Local_14.f_18[iVar900]), true, true);
			set_ped_relationship_group_hash(&(Local_14.f_18[iVar900]), 1269650476);
			set_relationship_between_groups(6, 1269650476, 1862763509);
			set_ped_config_flag(&(Local_14.f_18[iVar900]), 186, false);
			set_blocking_of_non_temporary_events(&(Local_14.f_18[iVar900]), true);
			set_entity_load_collision_flag(&(Local_14.f_18[iVar900]), 1);
			_set_entity_health(&(Local_14.f_18[0]), 150, 0);
			set_entity_visible(&(Local_14.f_18[0]), false);
			_set_ped_body_component(&(Local_14.f_18[0]), -2113152875);
			_update_ped_variation(&(Local_14.f_18[0]), false, true, true, true, false);
			set_ped_flee_attributes(&(Local_14.f_18[0]), 512, true);
			func_145(cParam0, &(Local_14.f_18[iVar900]), "WNT1_BRAWLER", 1);
		}
		iLocal_903 = iVar900 + 1;
	}
}

bool func_1395(char[4] cParam0)
{
	bVar0 = true;
	switch (iLocal_166)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_182[17])))
			{
				iLocal_166 = 2;
			}
			break;
		case 2:
			if (bVar0)
			{
				iLocal_166 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_182[17]), "ARTHUR", Global_35, 0);
			set_anim_scene_entity(&(uLocal_182[17]), "brawler", &(Local_14.f_18[0]), 0);
			func_1874(cParam0, &(uLocal_182[17]));
			iLocal_166 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_182[17]), true, false))
			{
				if (!_is_anim_scene_loading(&(uLocal_182[17]), true))
				{
					func_1874(cParam0, &(uLocal_182[17]));
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_182[17]), "PL_IG12_Door_and_Ambush"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_182[17]), "PL_IG12_Door_and_Ambush"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_182[17]), "PL_IG12_Door_and_Ambush");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_182[17]), "PL_IG12_Door_Open"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_182[17]), "PL_IG12_Door_Open"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_182[17]), "PL_IG12_Door_Open");
				}
				bVar0 = false;
			}
			if (!_0x23e33cb9f4a3f547(&(uLocal_182[17]), "PL_OpenDoor"))
			{
				if (!_0x0df57f86fe71dbe5(&(uLocal_182[17]), "PL_OpenDoor"))
				{
					_0xdf7b5144e25cd3fe(&(uLocal_182[17]), "PL_OpenDoor");
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_166 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1396(bool bParam0)
{
	if (bParam0)
	{
		iLocal_547[0] = -1;
	}
	iLocal_547[1] = -1;
	iLocal_547[2] = -1;
	iLocal_547[3] = -1;
	iLocal_547[4] = -1;
	iLocal_547[5] = -1;
}

void func_1397()
{
	if (func_374(379542007, 1, 0))
	{
		iLocal_913 = get_ammo_in_ped_weapon(Global_35, 379542007);
	}
	else
	{
		iLocal_913 = 49;
	}
	if (iVar911 < 10)
	{
		iLocal_913 = 10;
	}
	set_ped_ammo(Global_35, 379542007, 49);
	func_179(&uLocal_905, 2048);
}

void func_1398()
{
	_0x0d7fd6a55fd63aef(38, 3, 0);
	_0x0d7fd6a55fd63aef(39, 3, 0);
}

void func_1399(char[4] cParam0)
{
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = false;
		switch (&iLocal_547[0])
		{
			case 0:
				iLocal_547[0] = 7;
				break;
			case 7:
				iLocal_554[0] = func_1998(cParam0, "WNT1_H_PUN", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_247(vLocal_561[0]);
				if (!does_blip_exist(iVar1045))
				{
					iLocal_1048 = _blip_add_for_entity(831283580, &(Local_14.f_18[0]));
				}
				iLocal_547[0] = 8;
				break;
			case 8:
				if (_0xc17f69e1418cd11f(3) == &iLocal_554[0])
				{
					iLocal_547[0] = 10;
				}
				else
				{
					iLocal_547[0] = 7;
				}
				break;
			case 10:
				if (!func_26(vLocal_561[0]) || func_248(vLocal_561[0]) > 1500)
				{
					if (is_control_just_pressed(0, -1292666904))
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
						iLocal_547[0] = 12;
					}
				}
				break;
			case 12:
				break;
		}
	}
}

void func_1400(char[4] cParam0)
{
	if (!func_177(iVar903, 1048576))
	{
		func_1595();
		func_179(&uLocal_906, 1048576);
	}
	if (iVar606 >= 3 && iVar606 < 7)
	{
		func_2004();
	}
	switch (iVar606)
	{
		case 0:
			func_1394(cParam0);
			_0x949b2f9ed2917f5d(Global_35, 1);
			set_entity_invincible(&(Local_14.f_18[0]), true);
			set_entity_visible(&(Local_14.f_18[0]), false);
			set_ped_config_flag(Global_35, 250, true);
			iLocal_609 = 1;
			break;
		case 1:
			if (func_1395(cParam0))
			{
				if (func_177(iVar903, 536870912))
				{
					if (!func_10(iVar1295))
					{
						iLocal_1298 = func_2005("WNT1_UC_DOOR", -719620017, &(iLocal_1108[29]), 1, 0, 1, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_2006(iVar1295, 14, 1, 1);
						func_2006(iVar1295, 11, 1, 1);
						iLocal_609 = 2;
					}
				}
			}
			break;
		case 2:
			func_1395(cParam0);
			if (func_2007(iVar1295, 1))
			{
				_hide_ped_weapons(Global_35, 2, false);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				task_enter_anim_scene(Global_35, &(uLocal_182[17]), "ARTHUR", "PL_OpenDoor", 1069379748, 0, 0, 20000, -1082130432);
				if (does_blip_exist(iVar1045))
				{
					remove_blip(&iLocal_1048);
				}
				if (func_10(iVar1295))
				{
					func_11(&iLocal_1298, 1, 1);
				}
				iLocal_609 = 3;
			}
			break;
		case 3:
			display_radar(true);
			set_player_control(player_id(), false, 256, false);
			_display_hud_component(724769646);
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			iLocal_609 = 4;
			break;
		case 4:
			_display_hud_component(724769646);
			set_ped_config_flag(Global_35, 250, true);
			set_ped_reset_flag(Global_35, 27, true);
			if (func_1395(cParam0))
			{
				if (_0x337f1cc8ee895601(&(uLocal_182[17]), "ARTHUR"))
				{
					set_player_control(player_id(), true, 0, false);
					if (!_is_anim_scene_started(&(uLocal_182[17]), false))
					{
						start_anim_scene(&(uLocal_182[17]));
					}
					if (does_entity_exist(&(Local_14.f_3[0])))
					{
						_0x2eb75fb86c41f026(&(Local_14.f_3[0]), 3, 1);
						_0x23bde06596a22cec(&(Local_14.f_3[0]), 3, 0.9f, 0);
					}
					func_135(cParam0, 41);
					iLocal_609 = 6;
				}
			}
			break;
		case 5:
			if (func_1395(cParam0))
			{
				set_player_control(player_id(), true, 0, false);
				set_ped_reset_flag(Global_35, 27, true);
				set_ped_config_flag(Global_35, 250, true);
				task_enter_anim_scene(Global_35, &(uLocal_182[17]), "ARTHUR", "PL_OpenDoor", 1069379748, 1, 0, 20000, -1082130432);
				func_135(cParam0, 40);
				if (does_blip_exist(iVar1045))
				{
					remove_blip(&iLocal_1048);
				}
				if (func_10(iVar1295))
				{
					func_11(&iLocal_1298, 1, 1);
				}
				if (is_screen_faded_out() && !is_screen_fading_in())
				{
					do_screen_fade_in(1000);
				}
				func_179(&uLocal_905, 131072);
				iLocal_609 = 6;
			}
			break;
		case 6:
			_0xb8de69d9473b7593(Global_35, 1);
			disable_control_action(0, -432665970, true);
			disable_control_action(0, -349518703, true);
			disable_control_action(0, -1098542161, true);
			set_ped_reset_flag(Global_35, 27, true);
			if (!func_177(iVar906, 524288))
			{
				if (_is_anim_scene_started(&(uLocal_182[17]), false) && _get_anim_scene_time(&(uLocal_182[17])) >= 5f)
				{
					_0xd53846b9c931c181(Global_35, -1569615261, 10f);
					func_179(&uLocal_909, 524288);
				}
			}
			if (_is_anim_scene_started(&(uLocal_182[17]), false))
			{
				if (!is_entity_visible(&(Local_14.f_18[0])))
				{
					set_entity_visible(&(Local_14.f_18[0]), true);
					set_entity_invincible(&(Local_14.f_18[0]), false);
				}
				if (_get_anim_scene_time(&(uLocal_182[17])) >= 13f || (func_177(iVar902, 131072) && _get_anim_scene_progress(&(uLocal_182[17])) >= 0.8f))
				{
					if (!func_177(iVar905, 268435456))
					{
						iLocal_547[0] = 0;
						func_179(&uLocal_908, 268435456);
					}
				}
				if (_get_anim_scene_time(&(uLocal_182[17])) > 3f)
				{
					_0x0ff7125f07deb84f(&(Local_14.f_18[0]), 0);
				}
			}
			if (func_2008())
			{
				func_1407(0);
				set_ped_config_flag(Global_35, 250, false);
				iLocal_609 = 7;
			}
			break;
		case 7:
			display_radar(true);
			break;
	}
}

void func_1401()
{
	iVar0 = get_closest_object_of_type(-537.6478f, 2672.416f, 317.7737f, 5f, -796992973, true, false, true);
	if (does_entity_exist(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, false);
		set_entity_coords(iVar0, -614.1342f, 2724.762f, 326.4483f, true, false, true, true);
		delete_object(&iVar0);
	}
}

void func_1402(bool bParam0)
{
	vVar0 = { -537.2582f, 2672.355f, 318f };
	vVar3 = { 90f, 0f, 0f };
	if (get_ground_z_for_3d_coord(vVar0, &uVar6, false))
	{
		vVar0 = { vVar0.x, vVar0.y, uVar6 };
	}
	if (bParam0)
	{
		if (!func_177(iVar902, 4096))
		{
			iLocal_1041 = create_pickup_rotate(-70127024, vVar0, vVar3, 0, func_2009(), 2, true, 0, 0, 0f, 0);
			func_179(&uLocal_905, 4096);
		}
	}
	else
	{
		iLocal_1020 = _create_weapon_object(379542007, func_2009(), func_473(14, 4), true, 1f);
		set_entity_coords(iVar1017, vVar0, true, false, true, true);
		set_entity_rotation(iVar1017, vVar3, 2, true);
		_0x18ff3110cf47115d(iVar1017, 2, 0);
	}
}

void func_1403(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			func_135(cParam0, 1);
			break;
		case 1:
			func_135(cParam0, -1);
			break;
		case 2:
			if (func_1881(cParam0, "WNT1_H_PUN", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

void func_1404(char[4] cParam0)
{
	func_2010(cParam0);
	func_1400(cParam0);
	func_1378(cParam0);
	func_2011(cParam0);
	func_1362(cParam0, 0);
	func_2002(cParam0);
	func_2012(cParam0);
	if (iVar608 >= 1)
	{
		func_1411(cParam0);
	}
}

void func_1405(char[4] cParam0, bool bParam1)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (bParam1)
	{
	}
	if (iVar607 >= 8)
	{
		if (func_1332(Global_35, &(iLocal_1108[27]), 1, 0))
		{
			disable_control_action(0, -640622144, true);
			_0x2804658eb7d8a50b(5, -25246720);
		}
	}
	if (iVar607 < 15)
	{
		_0xb8de69d9473b7593(Global_35, 3);
		_0xb8de69d9473b7593(Global_35, 4);
		set_ped_flee_attributes(&(Local_14.f_18[0]), 512, true);
		_0x41d1331afad5a091(&(Local_14.f_18[0]), 1, 0);
		_0x41d1331afad5a091(&(Local_14.f_18[0]), 2, 0);
		_0x41d1331afad5a091(&(Local_14.f_18[0]), 4, 1);
	}
	if (iVar607 < 3)
	{
		_0xb8de69d9473b7593(&(Local_14.f_18[0]), 28);
	}
	if (iVar607 < 12)
	{
		disable_control_action(0, 578288361, true);
		disable_control_action(0, -792592641, true);
		disable_control_action(0, 25970639, true);
		disable_control_action(0, 1743595310, true);
		disable_control_action(0, -1105246567, true);
	}
	if (iVar607 >= 12 && iVar607 <= 16)
	{
		disable_control_action(0, 578288361, true);
		disable_control_action(0, -792592641, true);
		disable_control_action(0, 25970639, true);
		disable_control_action(0, 1743595310, true);
		disable_control_action(0, -1105246567, true);
	}
	switch (iVar607)
	{
		case 0:
			func_135(cParam0, 0);
			set_ped_config_flag(&(Local_14.f_18[0]), 169, true);
			_0xb8de69d9473b7593(&(Local_14.f_18[0]), 33);
			set_ped_config_flag(&(Local_14.f_18[0]), 351, true);
			_remove_stealth_kill(660507757, false);
			func_247(&uLocal_1430);
			func_1410(1);
			break;
		case 1:
			if (func_497(&(Local_14.f_18[0]), 0))
			{
				set_ped_config_flag(&(Local_14.f_18[0]), 297, false);
				set_ped_config_flag(&(Local_14.f_18[0]), 130, true);
				set_ped_config_flag(&(Local_14.f_18[0]), 315, true);
				set_ped_config_flag(&(Local_14.f_18[0]), 340, true);
				task_look_at_entity(&(Local_14.f_18[0]), Global_35, -1, 0, 51, 1);
				_set_entity_health(&(Local_14.f_18[0]), 150, 0);
				set_blocking_of_non_temporary_events(&(Local_14.f_18[0]), false);
				_0xfc3db99c8144cd81(&(Local_14.f_18[0]), &(iLocal_1108[28]), 0, 0, 0);
				_0xfc3db99c8144cd81(Global_35, &(iLocal_1108[28]), 0, 0, 0);
				set_ped_relationship_group_hash(&(Local_14.f_18[0]), 1269650476);
				_0x57f35552e771be9d(&(Local_14.f_18[0]), 8);
				_0xb8de69d9473b7593(&(Local_14.f_18[0]), 17);
			}
			if (func_497(Global_35, 0))
			{
				set_ped_config_flag(player_ped_id(), 258, true);
				set_ped_config_flag(Global_35, 170, true);
				_0x949b2f9ed2917f5d(Global_35, 1);
			}
			func_1410(2);
			break;
		case 2:
			func_2013();
			disable_control_action(0, 578288361, false);
			_0x57f35552e771be9d(&(Local_14.f_18[0]), 8);
			set_ped_config_flag(&(Local_14.f_18[0]), 169, true);
			set_ped_config_flag(&(Local_14.f_18[0]), 225, false);
			if (is_ped_performing_melee_action(&(Local_14.f_18[0]), 1, -1405930879) && get_entity_health(&(Local_14.f_18[0])) <= 70)
			{
				_0x57f35552e771be9d(Global_35, 10);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, false);
				_0x949b2f9ed2917f5d(Global_35, 30);
			}
			else
			{
				_0xb8de69d9473b7593(Global_35, 30);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, true);
				_0x7c10221ce718aa72(Global_35, 10);
			}
			if (_0x3bdfcf25b58b0415(&(Local_14.f_18[0])))
			{
				enable_control_action(0, 578288361, true);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, false);
			}
			else
			{
				disable_control_action(0, 578288361, false);
			}
			if (get_entity_health(&(Local_14.f_18[0])) <= 70)
			{
				_set_entity_health(&(Local_14.f_18[0]), 70, 0);
				set_ped_config_flag(&(Local_14.f_18[0]), 225, true);
			}
			else
			{
				set_ped_config_flag(&(Local_14.f_18[0]), 225, false);
			}
			if (_0x57779b55b83e2bea(&(Local_14.f_18[0])) && get_entity_health(&(Local_14.f_18[0])) <= 70)
			{
				_0x57f35552e771be9d(&(Local_14.f_18[0]), 15);
				_0xb8de69d9473b7593(Global_35, 30);
				_0x7c10221ce718aa72(Global_35, 10);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, false);
				set_ped_config_flag(player_ped_id(), 258, false);
				_0x9d8dfe2de9cb4dfc(Global_35);
				func_1410(3);
			}
			break;
		case 3:
			set_ped_config_flag(&(Local_14.f_18[0]), 225, true);
			func_1410(4);
			break;
		case 4:
			if (get_entity_health(&(Local_14.f_18[0])) < 70)
			{
				_set_entity_health(&(Local_14.f_18[0]), 70, 0);
			}
			if (!func_1332(&(Local_14.f_18[0]), &(iLocal_1108[28]), 1, 0))
			{
				_0x57f35552e771be9d(Global_35, 10);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, false);
				_0x949b2f9ed2917f5d(Global_35, 30);
			}
			else
			{
				_0xb8de69d9473b7593(Global_35, 30);
				set_ped_config_flag(&(Local_14.f_18[0]), 169, true);
				_0x7c10221ce718aa72(Global_35, 10);
			}
			if (!func_26(&uLocal_1394))
			{
				func_247(&uLocal_1394);
			}
			else if (func_1343(&uLocal_1394) > 10000)
			{
				if (!_0x57779b55b83e2bea(&(Local_14.f_18[0])))
				{
					_task_intimidated_2(&(Local_14.f_18[0]), Global_35, 0, 1, 1, 0, 0, 0, 0);
				}
			}
			break;
		case 5:
			func_50(&(Local_14.f_18[0]));
			_0xb8de69d9473b7593(Global_35, 3);
			set_ped_config_flag(&(Local_14.f_18[0]), 159, true);
			set_ped_config_flag(&(Local_14.f_18[0]), 225, true);
			_0x585ce159db46fadb(player_id(), 0f);
			set_ped_config_flag(&(Local_14.f_18[0]), 297, false);
			set_ped_config_flag(&(Local_14.f_18[0]), 130, true);
			set_ped_config_flag(&(Local_14.f_18[0]), 315, true);
			_0xb8de69d9473b7593(Global_35, 1);
			func_247(&uLocal_1343);
			func_1410(6);
			break;
		case 6:
			func_2014(cParam0);
			set_ped_config_flag(&(Local_14.f_18[0]), 351, false);
			func_2015();
			func_2016();
			if (func_2017(Global_35) || (func_248(&uLocal_1343) > 3000 && _0x0e99e3bf11bb6367(Global_35)))
			{
				if (!func_177(iVar900, 16777216))
				{
					_0xeae3b5b019c8d23f(Global_35, 4);
					_0x789dabd18e9024db(Global_35, 25, 0);
					_0x789dabd18e9024db(&(Local_14.f_18[0]), 29, 0);
					set_ped_config_flag(&(Local_14.f_18[0]), 213, true);
					_0xb8de69d9473b7593(Global_35, 23);
					_0xb8de69d9473b7593(Global_35, 24);
					if (&iLocal_547[1] < 10)
					{
						iLocal_547[1] = 10;
					}
					func_179(&uLocal_904, 16777216);
				}
				func_1410(10);
			}
			break;
		case 7:
			if (func_177(iVar902, 16))
			{
				func_2015();
			}
			if (iVar608 == 7)
			{
				func_2018(cParam0);
			}
			if (iVar908 > 1 || func_177(iVar900, 16777216))
			{
				func_1410(8);
				_0x789dabd18e9024db(Global_35, 29, 0);
				_0x789dabd18e9024db(&(Local_14.f_18[0]), 29, 0);
			}
			else
			{
				enable_control_action(0, 578288361, true);
				enable_control_action(0, -1292666904, true);
				if (func_2016())
				{
					func_1410(8);
				}
			}
			break;
		case 8:
			enable_control_action(0, -155487368, true);
			func_2018(cParam0);
			func_2014(cParam0);
			if (func_1343(&uLocal_1418) > 0)
			{
				_0x789dabd18e9024db(Global_35, 25, 0);
				_0x789dabd18e9024db(&(Local_14.f_18[0]), 29, 0);
				if (!func_26(&uLocal_1412))
				{
					func_247(&uLocal_1412);
				}
				else if (func_1343(&uLocal_1412) > 15000)
				{
					if (func_10(iVar1295))
					{
						func_2019(iVar1295, 0, 1);
					}
					if (func_10(iVar1296))
					{
						func_2019(iVar1296, 0, 1);
					}
					func_465(&uLocal_1412);
					func_113(1);
					func_465(&uLocal_1505);
					func_1410(9);
				}
				if (func_10(iVar1295) && func_10(iVar1296))
				{
					if (func_10(iVar1295))
					{
						func_2020(iVar1295, 1, 0);
						func_2019(iVar1295, 1, 1);
					}
					if (func_10(iVar1296))
					{
						func_2020(iVar1296, 1, 0);
						func_2019(iVar1296, 1, 1);
					}
					if (func_2021(iVar1296, 1) || func_2022())
					{
						_0x789dabd18e9024db(Global_35, 32, 0);
						func_179(&uLocal_907, 16777216);
					}
					if (((func_2021(iVar1295, 1) || func_177(iVar903, 16777216)) || is_control_just_pressed(0, -163964935)) || func_2022())
					{
						if (!func_177(iVar903, 16777216))
						{
							_0x789dabd18e9024db(Global_35, 65536, 0);
						}
						if (func_10(iVar1295))
						{
							func_2019(iVar1295, 0, 1);
						}
						if (func_10(iVar1296))
						{
							func_2019(iVar1296, 0, 1);
						}
						func_485(&uLocal_907, 16777216);
						func_465(&uLocal_1412);
						func_113(1);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_465(&uLocal_1505);
						func_1410(9);
					}
				}
				else
				{
					if (!func_10(iVar1295))
					{
						iLocal_1299 = func_2023("WNT1_UC_QUESTION", -1582682739, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
						func_2020(iVar1295, 1, 0);
						func_2006(iVar1295, 14, 1, 1);
						func_2006(iVar1295, 11, 1, 1);
						func_2024(&iLocal_1299, &(Local_14.f_18[0]));
					}
					if (!func_10(iVar1296))
					{
						iLocal_1300 = func_2023("WNT1_UC_PUNCH", 1847463266, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
						func_2020(iVar1296, 1, 0);
						func_2006(iVar1296, 14, 1, 1);
						func_2006(iVar1296, 11, 1, 1);
						func_2024(&iLocal_1300, &(Local_14.f_18[0]));
					}
				}
			}
			break;
		case 9:
			bVar0 = false;
			if (func_10(iVar1295))
			{
				func_2019(iVar1295, 0, 1);
			}
			if (func_10(iVar1296))
			{
				func_2019(iVar1296, 0, 1);
			}
			if (iVar908 == 1)
			{
				if (func_1881(cParam0, "WNT1_INTERA", 1, 0, 0))
				{
					bVar0 = true;
				}
			}
			else if (iVar908 == 2)
			{
				if (func_1881(cParam0, "WNT1_INTERB", 1, 0, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1410(10);
			}
			break;
		case 10:
			func_2016();
			_0x949b2f9ed2917f5d(Global_35, 2);
			if (is_disabled_control_just_pressed(0, -1377110900) || is_disabled_control_just_pressed(0, -1292666904))
			{
				_0x789dabd18e9024db(Global_35, 65536, 0);
			}
			if (!func_177(iVar903, 65536) && iVar610 >= 8)
			{
				if (iVar908 < 2)
				{
					func_2025(cParam0);
				}
			}
			else if (func_177(iVar906, 64))
			{
				func_2026(cParam0);
			}
			if (func_177(iVar902, 16))
			{
				if (iVar908 <= 2)
				{
					if (func_1343(&uLocal_1343) > 200 && !func_2027())
					{
						set_player_control(get_player_index(), true, 0, false);
						uLocal_912 = iVar908 + 1;
						func_247(&uLocal_1343);
						func_247(&uLocal_1418);
						func_247(&uLocal_1451);
						func_247(&uLocal_1508);
						func_485(&uLocal_907, 65536);
						func_2028();
						func_1410(7);
					}
					else if (func_177(iVar902, 16))
					{
						func_2015();
					}
				}
			}
			if (iVar908 > 2)
			{
				if (!func_2027())
				{
					func_1410(11);
				}
			}
			break;
		case 11:
			if (func_10(iVar1295))
			{
				func_11(&iLocal_1299, 1, 1);
			}
			if (func_10(iVar1296))
			{
				func_11(&iLocal_1300, 1, 1);
			}
			_0xdd1232b332cbb9e7(3, 1, 0);
			_0xeae3b5b019c8d23f(Global_35, 4);
			iLocal_614 = 9;
			func_1410(12);
			break;
		case 12:
			func_2014(cParam0);
			if (iVar610 >= 11)
			{
				func_135(cParam0, 12);
				freeze_entity_position(&(Local_14.f_18[0]), false);
				_set_entity_health(&(Local_14.f_18[0]), 40, 0);
				func_1410(13);
			}
			break;
		case 13:
			_0x949b2f9ed2917f5d(Global_35, 3);
			_0x585ce159db46fadb(player_id(), 1f);
			func_113(1);
			_0xb8de69d9473b7593(Global_35, 31);
			_0xb8de69d9473b7593(Global_35, 18);
			func_11(&uLocal_1304, 1, 1);
			set_ped_ragdoll_on_collision(&(Local_14.f_18[0]), 0, 0);
			_0x789dabd18e9024db(Global_35, 25, 0);
			if (!func_10(iVar1302))
			{
				iLocal_1306 = func_2023("WNT1_UC_KILL", -2118982895, 1, 0, 1, 5, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2029(&iLocal_1306, "INPUT_WNT1_KILL");
				func_2024(&iLocal_1306, &(Local_14.f_18[0]));
				func_2030(&iLocal_1306, -719620017);
				func_2006(iVar1302, 10, 1, 1);
				func_2006(iVar1302, 14, 1, 1);
				func_2006(iVar1302, 11, 1, 1);
			}
			if (!func_10(iVar1303))
			{
				iLocal_1307 = func_2023("WNT1_UC_RELEASE", 1008922382, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2029(&iLocal_1307, "INPUT_WNT1_REL");
				func_2024(&iLocal_1307, &(Local_14.f_18[0]));
				func_2030(&iLocal_1307, -1242632265);
				func_2006(iVar1303, 10, 1, 1);
				func_2006(iVar1303, 14, 1, 1);
				func_2006(iVar1303, 11, 1, 1);
			}
			if (!func_10(iVar1296))
			{
				iLocal_1300 = func_2023("WNT1_UC_PUNCH", -1292666904, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2020(iVar1296, 1, 0);
				func_2024(&iLocal_1300, &(Local_14.f_18[0]));
			}
			func_1410(14);
			if (IntToFloat(get_entity_health(&(Local_14.f_18[0]))) < 20f)
			{
				set_ped_config_flag(&(Local_14.f_18[0]), 21, true);
			}
			if ((is_ped_dead_or_dying(&(Local_14.f_18[0]), true) || IntToFloat(get_entity_health(&(Local_14.f_18[0]))) == 0f) || get_ped_config_flag(&(Local_14.f_18[0]), 11, true))
			{
				func_179(&uLocal_906, 16384);
				func_11(&iLocal_1307, 1, 1);
				func_11(&iLocal_1306, 1, 1);
				func_11(&uLocal_1304, 1, 1);
				func_1410(17);
			}
			break;
		case 14:
			set_player_control(player_id(), true, 0, false);
			set_ped_config_flag(&(Local_14.f_18[0]), 169, false);
			_0x789dabd18e9024db(Global_35, 24, 0);
			disable_control_action(0, 578288361, false);
			if (!func_240())
			{
				if (!_0x0e99e3bf11bb6367(Global_35) && !_0x3bdfcf25b58b0415(&(Local_14.f_18[0])))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					clear_ped_tasks_immediately(&(Local_14.f_18[0]), false, true);
					_0x789dabd18e9024db(Global_35, 25, 0);
					task_grapple(Global_35, &(Local_14.f_18[0]), 1766147729, 0, 1.5f, 0, 0);
				}
				func_1410(15);
			}
			break;
		case 15:
			func_135(cParam0, 5);
			_0x949b2f9ed2917f5d(Global_35, 1);
			enable_control_action(0, -1242632265, true);
			remove_ped_defensive_area(Global_35, false);
			remove_ped_defensive_area(&(Local_14.f_18[0]), false);
			if (!func_10(iVar1302))
			{
				iLocal_1306 = func_2023("WNT1_UC_KILL", 25970639, 1, 0, 1, 5, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2029(&iLocal_1306, "INPUT_WNT1_KILL");
				func_2024(&iLocal_1306, &(Local_14.f_18[0]));
				func_2006(iVar1302, 10, 1, 1);
				func_2006(iVar1302, 14, 1, 1);
				func_2006(iVar1302, 11, 1, 1);
			}
			if (!func_10(iVar1303))
			{
				iLocal_1307 = func_2023("WNT1_UC_RELEASE", -1242632265, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2029(&iLocal_1307, "INPUT_WNT1_REL");
				func_2024(&iLocal_1307, &(Local_14.f_18[0]));
				func_2006(iVar1303, 10, 1, 1);
				func_2006(iVar1303, 14, 1, 1);
				func_2006(iVar1303, 11, 1, 1);
			}
			if (!func_10(iVar1296))
			{
				iLocal_1300 = func_2023("WNT1_UC_PUNCH", -1292666904, 1, 0, 1, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				func_2024(&iLocal_1300, &(Local_14.f_18[0]));
			}
			func_11(&iLocal_1314, 1, 1);
			func_2019(iVar1302, 1, 1);
			func_2020(iVar1302, 1, 1);
			func_2019(iVar1303, 1, 1);
			func_2020(iVar1303, 1, 1);
			func_2019(iVar1296, 1, 1);
			func_2020(iVar1296, 1, 0);
			iLocal_547[3] = 0;
			_0xeae3b5b019c8d23f(Global_35, 8);
			_0xeae3b5b019c8d23f(&(Local_14.f_18[0]), 8);
			task_clear_look_at(&(Local_14.f_18[0]));
			freeze_entity_position(&(Local_14.f_18[0]), false);
			_0x585ce159db46fadb(player_id(), -1f);
			func_247(&uLocal_1343);
			func_1410(16);
			break;
		case 16:
			func_2026(cParam0);
			if (func_1415(&uLocal_1343, 2f))
			{
				set_player_control(get_player_index(), true, 0, false);
			}
			enable_control_action(0, 25970639, true);
			enable_control_action(0, -1242632265, true);
			_0xeae3b5b019c8d23f(Global_35, 8);
			_0xeae3b5b019c8d23f(&(Local_14.f_18[0]), 8);
			_0xfcdec42b1c78b7f8(&(Local_14.f_3[0]), "WIN1_HORSE_SAD");
			if (func_2007(iVar1302, 1) || is_entity_dead(&(Local_14.f_18[0])))
			{
				enable_control_action(0, 25970639, true);
				if (!is_entity_dead(&(Local_14.f_18[0])))
				{
					_0xea323f5e1a4da2f1(25970639, "WNT1_UC_KILL");
				}
				else
				{
					_0xea323f5e1a4da2f1(-1292666904, "WNT1_UC_PUNCH");
				}
				func_247(&uLocal_1532);
				_0xeae3b5b019c8d23f(Global_35, 8);
				_0x789dabd18e9024db(Global_35, 128, 0);
				func_179(&uLocal_906, 16384);
				func_11(&iLocal_1307, 1, 1);
				func_11(&iLocal_1306, 1, 1);
				func_11(&iLocal_1300, 1, 1);
				func_135(cParam0, 40);
				func_463(1);
				func_1410(17);
			}
			else if (func_2031(iVar1303, 1) || !func_1332(Global_35, &(iLocal_1108[49]), 1, 0))
			{
				_0xea323f5e1a4da2f1(-473983589, "WNT1_UC_RELEASE");
				set_ped_combat_attributes(&(Local_14.f_18[0]), 17, true);
				disable_control_action(0, -792592641, false);
				func_135(cParam0, 4);
				func_11(&iLocal_1307, 1, 1);
				func_11(&iLocal_1306, 1, 1);
				func_11(&iLocal_1300, 1, 1);
				func_463(1);
				func_1410(19);
			}
			else if (func_2021(iVar1296, 1))
			{
				_0x789dabd18e9024db(Global_35, 32, 0);
				uLocal_926 = iVar922 + 1;
				if (iVar922 > 2)
				{
					_0x949b2f9ed2917f5d(Global_35, 3);
					set_entity_invincible(&(Local_14.f_18[0]), false);
				}
			}
			break;
		case 17:
			remove_ped_defensive_area(Global_35, false);
			remove_ped_defensive_area(&(Local_14.f_3[0]), false);
			func_2032((*Global_1835011)[0]->f_1, 1);
			Global_43838 = 1;
			_0xb8de69d9473b7593(Global_35, 1);
			func_1410(18);
			break;
		case 18:
			if (func_248(&uLocal_1532) > 2000)
			{
				_0x949b2f9ed2917f5d(Global_35, 3);
			}
			if (!_0x0e99e3bf11bb6367(Global_35))
			{
				_0xc67a4910425f11f1(player_id(), 0);
				func_1410(21);
			}
			else if (!func_26(&uLocal_1355))
			{
				func_247(&uLocal_1355);
			}
			else if (func_1343(&uLocal_1355) > 10000)
			{
				func_1410(19);
			}
			break;
		case 19:
			Local_733[2]->f_7 = 1;
			set_ped_config_flag(Global_35, 26, true);
			_0x949b2f9ed2917f5d(Global_35, 23);
			_0x949b2f9ed2917f5d(Global_35, 24);
			_0xeae3b5b019c8d23f(Global_35, 1);
			enable_control_action(0, -792592641, true);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -792592641, false);
			_0x789dabd18e9024db(Global_35, 32772, 1);
			remove_ped_defensive_area(Global_35, false);
			remove_ped_defensive_area(&(Local_14.f_3[0]), false);
			_0xb8de69d9473b7593(Global_35, 1);
			func_1410(20);
			break;
		case 20:
			_0xeae3b5b019c8d23f(Global_35, 1);
			enable_control_action(0, -792592641, true);
			_0x789dabd18e9024db(Global_35, 4, 0);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -792592641, false);
			if (!_0x3bdfcf25b58b0415(&(Local_14.f_18[0])) && !is_ped_ragdoll(&(Local_14.f_18[0])))
			{
				clear_ped_tasks(&(Local_14.f_18[0]), 1, 0);
				set_ped_relationship_group_hash(&(Local_14.f_18[0]), -1976316465);
				set_blocking_of_non_temporary_events(&(Local_14.f_18[0]), true);
				_0xaab050da48b57978(&(Local_14.f_18[0]), "Flee_Panic_With_Glances", 0, -1, 4);
				set_ped_combat_attributes(&(Local_14.f_18[0]), 17, true);
				open_sequence_task(&uLocal_1018);
				if (func_1332(&(Local_14.f_18[0]), &(iLocal_1108[49]), 1, 0))
				{
					task_follow_waypoint_recording(0, sVar884, 5, 3078, -1, 0, 0, -1);
				}
				else
				{
					task_follow_waypoint_recording(0, sVar884, 10, 3078, -1, 0, 0, -1);
				}
				task_smart_flee_ped(0, Global_35, 10000f, -1, 0, 1077936128, 0);
				close_sequence_task(iVar1014);
				task_perform_sequence(&(Local_14.f_18[0]), iVar1014);
				clear_sequence_task(&uLocal_1018);
				func_247(&uLocal_1352);
				_0xc67a4910425f11f1(player_id(), 0);
				func_1410(21);
			}
			break;
		case 21:
			_0xe98d55c5983f2509(&(Local_14.f_18[0]));
			disable_control_action(0, -792592641, false);
			if (IntToFloat(get_entity_health(&(Local_14.f_18[0]))) < 20f)
			{
				set_ped_config_flag(&(Local_14.f_18[0]), 21, true);
			}
			if (func_1343(&uLocal_1352) > 10000)
			{
				if (func_497(&(Local_14.f_18[0]), 0) && func_926(Global_35, &(Local_14.f_18[0]), 1, 1) < 30f)
				{
					if (get_script_task_status(&(Local_14.f_18[0]), 518218985, true) != 1 && get_script_task_status(&(Local_14.f_18[0]), 518218985, true) != 0)
					{
						clear_ped_tasks_immediately(&(Local_14.f_18[0]), false, true);
						task_smart_flee_ped(&(Local_14.f_18[0]), Global_35, 10000f, -1, 0, 1077936128, 0);
					}
				}
			}
			if (is_ped_using_action_mode(Global_35))
			{
				set_ped_using_action_mode(Global_35, false, -1, 0);
			}
			func_209();
			set_ped_config_flag(player_ped_id(), 258, false);
			enable_control_action(0, 578288361, true);
			set_player_control(get_player_index(), true, 0, false);
			display_radar(true);
			display_hud(true);
			break;
	}
}

bool func_1406(char[4] cParam0)
{
	bVar0 = true;
	switch (iLocal_167)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_182[18])))
			{
				iLocal_167 = 2;
			}
			break;
		case 2:
			if (bVar0)
			{
				iLocal_167 = 3;
			}
			break;
		case 3:
			set_anim_scene_entity(&(uLocal_182[18]), "CS_Dutch", &(uLocal_1064[1]), 0);
			set_anim_scene_entity(&(uLocal_182[18]), "ARTHUR", Global_35, 0);
			func_1874(cParam0, &(uLocal_182[18]));
			iLocal_167 = 1;
			break;
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_182[18]), true, false))
			{
				bVar0 = false;
			}
			if (!func_2033())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_167 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1407(bool bParam0)
{
	if (!bParam0)
	{
		func_496(2051127971, 0, 0);
		func_480(2051127971, 1, -0.82f, 1, 0, 0, 0, 0);
	}
	set_portal_settings_override("RDR_ALD_BARN_DOOR_CLOSED", "RDR_ALD_BARN_DOOR_OPEN");
}

void func_1408(bool bParam0)
{
	if (func_497(Global_35, 0))
	{
		func_1409(&Global_35, 1, bParam0);
		set_player_can_use_cover(player_id(), false);
		_0xd1a70c1e8d1031fe(player_id(), 0);
		_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
		_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
	}
}

void func_1409(var uParam0, bool bParam1, bool bParam2)
{
	if (func_497(*uParam0, 0))
	{
		if (*uParam0 != Global_35)
		{
			_0x8ba83cc4288cd56d(*uParam0, 1341518023);
			func_1903(*uParam0, 0);
			if (bParam1)
			{
				remove_all_ped_weapons(*uParam0, true, true);
			}
		}
		set_current_ped_weapon(*uParam0, -1569615261, true, 0, false, false);
		set_ped_config_flag(*uParam0, 249, bParam2);
		set_ped_config_flag(*uParam0, 258, true);
	}
}

void func_1410(int iParam0)
{
	iLocal_611 = iParam0;
}

void func_1411(char[4] cParam0)
{
	func_2034(cParam0);
	switch (iVar611)
	{
		case 0:
			func_1431(1, func_250(15, 3), 1);
			set_current_ped_weapon(&(uLocal_1064[1]), -1569615261, true, 0, false, false);
			set_current_ped_weapon(&(uLocal_1064[1]), -1569615261, true, 1, false, false);
			iLocal_614 = 2;
			break;
		case 2:
			func_1406(cParam0);
			if (get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 1)
			{
				if (func_1406(cParam0))
				{
					func_2035();
					iLocal_614 = 3;
				}
			}
			break;
		case 3:
			if (!func_177(iVar907, 128))
			{
				if (_is_anim_scene_started(&(uLocal_182[18]), false) && _get_anim_scene_time(&(uLocal_182[18])) >= 2f)
				{
					func_179(&uLocal_910, 128);
				}
			}
			if (func_33(cParam0) == iLocal_89 && !func_1359())
			{
				if (func_2036(cParam0))
				{
					iLocal_614 = 6;
				}
			}
			break;
		case 6:
			if (func_1406(cParam0))
			{
				if (func_2037("pl_is_he_dead"))
				{
					func_179(&uLocal_908, 32768);
					func_179(&uLocal_905, 33554432);
					iLocal_614 = 7;
				}
			}
			break;
		case 7:
			if (func_2036(cParam0))
			{
				iLocal_614 = 8;
			}
			break;
		case 8:
			func_2038(cParam0);
			if (!func_177(iVar902, 33554432))
			{
				if (func_2036(cParam0))
				{
					iLocal_614 = 9;
				}
			}
			break;
		case 9:
			if (func_1406(cParam0))
			{
				if (func_2037("pl_exit"))
				{
					reset_anim_scene(&(uLocal_182[12]), 0);
					iLocal_162 = 1;
					iLocal_614 = 10;
				}
			}
			break;
		case 10:
			func_1965(cParam0);
			if (func_2039(cParam0))
			{
				iLocal_614 = 11;
			}
			break;
		case 11:
			if (get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 0 && get_script_task_status(&(uLocal_1064[1]), 242628503, true) != 1)
			{
				iLocal_614 = 12;
			}
			break;
		case 12:
			if (func_1965(cParam0))
			{
				func_1967();
				iLocal_614 = 13;
			}
			break;
		case 13:
			break;
		case 14:
			break;
	}
}

void func_1412(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (!func_1359())
			{
				if (func_1881(cParam0, "WNT1_BR_COWER1", 1, 0, 0))
				{
					func_135(cParam0, -1);
				}
			}
			else
			{
				func_135(cParam0, -1);
			}
			break;
		case 1:
			func_135(cParam0, 2);
			break;
		case 2:
			func_135(cParam0, 6);
			break;
		case 3:
			func_135(cParam0, -1);
			break;
		case 4:
			if (func_1881(cParam0, "WNT1_SPARE", 1, 1f, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (func_1881(cParam0, "WNT1_PLEAD", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 6:
			func_135(cParam0, -1);
			break;
		case 7:
			if (!func_1359())
			{
				iLocal_1048 = _blip_add_for_entity(831283580, &(Local_14.f_18[0]));
				func_135(cParam0, -1);
			}
			break;
		case 8:
			func_135(cParam0, -1);
			break;
		case 9:
			func_135(cParam0, -1);
			break;
		case 10:
			if (func_1881(cParam0, "WNT1_PLEADS", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 11:
			func_135(cParam0, -1);
			break;
		case 12:
			if (func_1881(cParam0, "WNT1_H_GRAPPLE", 8, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 13:
			func_135(cParam0, -1);
			break;
		case 14:
			if (func_1881(cParam0, "WNT1_INTERHURRY", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 15:
			func_135(cParam0, -1);
			break;
		case 16:
			if (func_1881(cParam0, "WNT1_BR_COWER2", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

void func_1413(char[4] cParam0)
{
	func_2040(cParam0);
	func_1411(cParam0);
	func_2041(cParam0);
	func_1378(cParam0);
	func_2011(cParam0);
	func_1362(cParam0, 0);
	func_2002(cParam0);
	func_2012(cParam0);
	func_2042(&(Local_14.f_18[0]));
}

void func_1414()
{
	_0xc3abcfbc7d74afa5(Global_35, 9, 1);
}

bool func_1415(var uParam0, float fParam1)
{
	if (func_2043(uParam0, fParam1))
	{
		func_465(uParam0);
		return true;
	}
	return false;
}

void func_1416(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		func_2044(iParam0, bParam2, bParam3);
	}
	else
	{
		func_2045(iParam0);
	}
}

void func_1417()
{
	bVar0 = _0x1f714e7a9dadfc42(Global_35);
	if (does_entity_exist(bVar0))
	{
		func_1317(bVar0, func_250(14, 5), 2, 1073741824);
	}
}

void func_1418()
{
	if (!func_177(iVar906, 32))
	{
		if (does_pickup_exist(iVar1039))
		{
			iVar0 = get_pickup_object(iVar1039);
			if (does_entity_exist(iVar0))
			{
				iLocal_1048 = _blip_add_for_coord(1664425300, get_entity_coords(iVar0, true, false));
				_blip_set_modifier(iVar1046, -401963276);
				set_blip_name_from_text_file(iVar1046, "WNT1_BLIP_GUN");
				if (&iLocal_547[4] == -1)
				{
					iLocal_547[4] = 0;
				}
				func_179(&uLocal_908, 32);
			}
		}
	}
}

void func_1419()
{
	iVar0 = get_pickup_object(iVar1039);
	if (does_entity_exist(iVar0))
	{
		_0xab26deee120fd3fd(iVar0, 0);
	}
}

void func_1420(char[4] cParam0)
{
	if (!func_177(iVar904, 262144))
	{
		iVar0 = _0x1f714e7a9dadfc42(Global_35);
		if (does_entity_exist(iVar0))
		{
			if (&iLocal_547[5] == -1)
			{
				iLocal_547[5] = 0;
			}
			iLocal_1048 = _blip_add_for_entity(486881925, iVar0);
			if (does_blip_exist(iVar1045))
			{
				_blip_set_modifier(iVar1045, -401963276);
				func_179(&uLocal_907, 262144);
			}
		}
	}
}

bool func_1421()
{
	if (func_2046(&Global_35))
	{
		return true;
	}
	iVar0 = _0x1f714e7a9dadfc42(Global_35);
	if (!does_entity_exist(iVar0) && func_2046(&Global_35))
	{
		return true;
	}
	return false;
}

bool func_1422(char[4] cParam0)
{
	if (func_2047(cParam0, 1) && _0xa0bc8faed8cfeb3c(&(uLocal_1064[3])))
	{
		func_1587(cParam0);
		return true;
	}
	return false;
}

void func_1423(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_2048(iParam0);
	func_1443(iParam0, 0);
	func_2049(iParam0, 0f);
}

void func_1424(int iParam0)
{
	iParam0 = func_293(iParam0);
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
	func_2050(&Var0);
	func_2051(iParam0, Var0);
	func_2052(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2053(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2054(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2055(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2056(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2057(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2058(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2059(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2060(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1425(int iParam0, bool bParam1)
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

void func_1426(char[4] cParam0)
{
	func_1878(cParam0, &(iLocal_1084[0]));
	func_1878(cParam0, &(iLocal_1084[1]));
	func_1878(cParam0, &(iLocal_1084[2]));
	func_1878(cParam0, &(Local_14.f_3[0]));
	func_151(cParam0, &(Local_14.f_3[0]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[1]), "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[2]), "Horse_01^2", 0, 0, 0, 0);
	func_151(cParam0, iVar1102, "Horse_01^3", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[3]), "MrsAdler", 0, 0, 0, 0);
}

bool func_1427()
{
	func_496(1535926888, 0, 0);
	func_496(1364348404, 0, 0);
	if (func_1025(1535926888) && func_1025(1364348404))
	{
		return true;
	}
	return false;
	return true;
}

void func_1428()
{
	iLocal_580[0] = 0;
	iLocal_580[1] = -1;
	iLocal_580[2] = -1;
	iLocal_580[3] = -1;
	iLocal_580[4] = -1;
}

void func_1429(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (!does_blip_exist(iVar1045))
			{
				iLocal_1048 = func_2061(408396114, &(Local_14.f_3[0]), 1);
				set_blip_name_from_text_file(iVar1045, "WNT1_BLIP_HORSE");
			}
			func_135(cParam0, -1);
			break;
		case 1:
			iLocal_580[0] = 0;
			func_135(cParam0, -1);
			break;
		case 3:
			if (func_1881(cParam0, "WNT1_OBJ_HTCHCBN", 5, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1881(cParam0, "WNT1_H_HCH1", 8, 0, 0))
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (func_1881(cParam0, "WNT1_H_HCH2", 7, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 12:
			func_135(cParam0, -1);
			break;
		case 13:
			if (func_1881(cParam0, "WNT1_OBJ_NOISE", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 26:
			if (func_1881(cParam0, "WNT1_OBJ_HTCHCBN", 4, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 30:
			if (func_1881(cParam0, "WNT1_NOHORSE", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 31:
			if (func_1881(cParam0, "WNT1_SPARED", 0, 0, 0))
			{
				func_135(cParam0, 33);
			}
			break;
		case 32:
			if (func_1881(cParam0, "WNT1_KILL", 0, 0, 0))
			{
				func_135(cParam0, 33);
			}
			break;
		case 33:
			if (func_1881(cParam0, "WNT1_HITCHED", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 34:
			func_135(cParam0, -1);
			break;
		case 35:
			func_135(cParam0, -1);
			break;
		case 36:
			iLocal_1547 = func_742("WNT1_H_GUNHOLSTER", 10000, 0, 0, 0, 1);
			func_135(cParam0, -1);
			break;
		case 40:
			func_135(cParam0, -1);
			break;
	}
}

void func_1430(char[4] cParam0)
{
	func_2062(cParam0);
	func_2063(cParam0);
	func_2041(cParam0);
	func_2064(cParam0);
	func_1362(cParam0, 0);
	func_2002(cParam0);
	func_2065();
	func_2066(&(Local_14.f_3[0]));
	func_2067();
	func_2068(cParam0);
	func_2069(cParam0);
}

void func_1431(int iParam0, struct<4> Param1, bool bParam5)
{
	if (!is_entity_dead(&(uLocal_1064[iParam0])))
	{
		if (bParam5)
		{
			if (func_2070(&(uLocal_1064[iParam0])))
			{
				_remove_ped_from_mount(&(uLocal_1064[iParam0]), true, false);
			}
		}
		func_1317(&(uLocal_1064[iParam0]), Param1, 34, 1073741824);
		_0x9587913b9e772d29(&(uLocal_1064[iParam0]), 1);
		set_ped_max_health(&(uLocal_1064[iParam0]), 400);
		_set_entity_health(&(uLocal_1064[iParam0]), 400, 0);
		set_blocking_of_non_temporary_events(&(uLocal_1064[iParam0]), true);
	}
}

void func_1432(bool bParam0)
{
	if (!is_entity_dead(&(Local_14.f_3[0])))
	{
		set_ped_config_flag(&(Local_14.f_3[0]), 136, !bParam0);
	}
	if (bParam0)
	{
	}
}

void func_1433(int iParam0)
{
	func_1078(iParam0, 4, 1);
}

int func_1434(char[4] cParam0)
{
	bVar2 = true;
	func_2071();
	func_2072(cParam0);
	if (iLocal_138 >= 2 && iLocal_138 <= 7)
	{
		_0x702b75dc9d3ede56(true);
		disable_control_action(0, -1453452184, false);
		set_player_control(player_id(), false, 0, false);
	}
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	while (bVar2)
	{
		bVar2 = false;
		switch (iLocal_138)
		{
			case 0:
				iLocal_138 = 1;
				break;
			case 1:
				func_965();
				if (_0xdd0b7c5ae58f721d("script@Story@WNT1@mission_jump_cameras") && func_177(iVar905, 64))
				{
					func_1615(4);
					bVar2 = true;
					iLocal_138 = 2;
				}
				break;
			case 2:
				set_player_control(player_id(), false, 0, false);
				func_1594(1);
				func_247(&uLocal_1442);
				_0x5e3ccf03995388b5(-497775401, func_473(17, 5));
				_0xbc016635d6a73b31("script@Story@WNT1@mission_jump_cameras", "ADLER_FLAMES", 5);
				func_1317(&(iLocal_1084[1]), func_250(17, 4), 2, 1073741824);
				func_1317(&(iLocal_1084[2]), func_250(17, 6), 2, 1073741824);
				func_1317(iVar1101, func_250(17, 7), 2, 1073741824);
				func_2073(0);
				force_ped_motion_state(&(iLocal_1084[1]), -1415276238, true, 0, false);
				force_ped_motion_state(&(iLocal_1084[0]), -1415276238, true, 0, false);
				force_ped_motion_state(&(iLocal_1084[2]), -1415276238, true, 0, false);
				force_ped_motion_state(iVar1101, -1415276238, true, 0, false);
				_0x2208438012482a1a(&(iLocal_1084[1]), true, false);
				func_60(1);
				iLocal_138 = 3;
				break;
			case 3:
				func_2072(cParam0);
				iVar1 = (_0x465f04f68ad38197("script@Story@WNT1@mission_jump_cameras", "ADLER_FLAMES", 5) - func_1343(&uLocal_1442));
				iVar0 = (_0xea113bf9b0c0c5d7("script@Story@WNT1@mission_jump_cameras", "ADLER_FLAMES", 5) - func_1343(&uLocal_1442));
				if (_0xffe9c53deea3db0b(iVar0, -764510942, func_473(17, 1), is_srl_loaded(), iVar1))
				{
					if (!func_177(iVar906, 4))
					{
						if (func_2072(cParam0))
						{
							func_2074();
							func_179(&uLocal_909, 4);
						}
					}
					bVar2 = true;
					iLocal_138 = 4;
				}
				break;
			case 4:
				_0xbc016635d6a73b31("script@Story@WNT1@mission_jump_cameras", "ADLER_EXIT", 5);
				if (!func_177(iVar906, 4))
				{
					if (func_2072(cParam0))
					{
						func_2074();
						func_179(&uLocal_909, 4);
					}
				}
				func_1317(&(iLocal_1084[1]), func_250(17, 0), 2, 1073741824);
				func_1317(&(iLocal_1084[0]), func_250(17, 1), 2, 1073741824);
				func_1317(&(iLocal_1084[2]), func_250(17, 2), 2, 1073741824);
				func_1317(iVar1101, func_250(17, 3), 2, 1073741824);
				func_2073(1);
				force_ped_motion_state(&(iLocal_1084[1]), -1415276238, true, 0, false);
				force_ped_motion_state(&(iLocal_1084[0]), -1415276238, true, 0, false);
				force_ped_motion_state(&(iLocal_1084[2]), -1415276238, true, 0, false);
				force_ped_motion_state(iVar1101, -1415276238, true, 0, false);
				_0x2208438012482a1a(&(iLocal_1084[1]), true, false);
				func_247(&uLocal_1442);
				iLocal_138 = 5;
				break;
			case 5:
				func_2075(cParam0);
				if (!func_177(iVar906, 4))
				{
					if (func_2072(cParam0))
					{
						func_2074();
						func_179(&uLocal_909, 4);
					}
				}
				if (!func_177(iVar905, 4))
				{
					func_2076();
					if (func_2077())
					{
						func_179(&uLocal_908, 4);
					}
				}
				iVar1 = (_0x465f04f68ad38197("script@Story@WNT1@mission_jump_cameras", "ADLER_EXIT", 5) - func_1343(&uLocal_1442));
				iVar0 = (_0xea113bf9b0c0c5d7("script@Story@WNT1@mission_jump_cameras", "ADLER_EXIT", 5) - func_1343(&uLocal_1442));
				if (_0xffe9c53deea3db0b(iVar0, 0, func_473(17, 1), is_srl_loaded(), iVar1))
				{
					_0x43037abfe214a851();
					iLocal_138 = 6;
				}
				break;
			case 6:
				if (func_2075(cParam0))
				{
					func_2078();
					iLocal_138 = 7;
				}
				break;
			case 7:
				if (!_does_anim_scene_exist(&(uLocal_182[27])) || ((_does_anim_scene_exist(&(uLocal_182[27])) && _is_anim_scene_started(&(uLocal_182[27]), false)) && _get_anim_scene_progress(&(uLocal_182[27])) > 0.95f))
				{
					if (!func_177(iVar901, -2147483648))
					{
						func_179(&uLocal_904, -2147483648);
					}
				}
				if (!func_177(iVar904, 512))
				{
					_0x513f8aa5bf2f17cf(func_473(13, 2), 200f, 5);
					create_forced_object(-1358.41f, 2423.627f, 306.9243f, 5f, -58075500, true);
					create_forced_object(-1347.948f, 2435.204f, 307.4952f, 5f, -58075500, true);
					create_forced_object(-1326.784f, 2440.716f, 308.6275f, 5f, -58075500, true);
					func_1317(&(iLocal_1084[1]), func_250(0, 18), 2, 1073741824);
					func_1317(&(iLocal_1084[2]), func_250(0, 19), 2, 1073741824);
					func_1317(iVar1101, func_250(0, 15), 2, 1073741824);
					func_1317(Global_35, func_250(13, 2), 2, 1073741824);
					func_1317(&(iLocal_1084[0]), func_250(13, 2), 2, 1073741824);
					func_179(&uLocal_907, 512);
				}
				if (!_does_anim_scene_exist(&(uLocal_182[27])) || _is_anim_scene_finished(&(uLocal_182[27]), false))
				{
					func_60(0);
					iLocal_138 = 8;
				}
				break;
			case 8:
				if (_0xcf45df50c7775f2a())
				{
					_0x5a8b01199c3e79c3();
				}
				set_player_control(player_id(), true, 0, false);
				return 1;
		}
	}
	return 0;
}

bool func_1435()
{
	if (!does_rayfire_map_object_exist(iVar1172))
	{
		iLocal_1174 = get_rayfire_map_object(-562.0144f, 2699.009f, 320.1597f, 10f, "des_wnt1_cabin_collapse");
	}
	if (does_rayfire_map_object_exist(iVar1172))
	{
		if (get_state_of_rayfire_map_object(iVar1172) != 4 && get_state_of_rayfire_map_object(iVar1172) != 5)
		{
			set_state_of_rayfire_map_object(iVar1172, 4);
		}
		return true;
	}
	return false;
}

bool func_1436(char[4] cParam0)
{
	bVar0 = true;
	switch (iLocal_180)
	{
		case 1:
			if (!_is_anim_scene_loaded(&(uLocal_182[32]), true, false))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_180 = 2;
			}
			break;
		case 2:
			iLocal_180 = 3;
			break;
		case 3:
			iLocal_180 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1437()
{
	if (!_is_anim_scene_started(&(uLocal_182[32]), false))
	{
		start_anim_scene(&(uLocal_182[32]));
	}
}

void func_1438()
{
	func_2079();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		switch (iVar0)
		{
			case 0:
				_set_ped_body_component(&(uLocal_1064[1]), 1016389820);
				_update_ped_variation(&(uLocal_1064[1]), false, true, true, true, false);
				break;
			case 6:
			case 11:
			case 13:
				break;
			default:
				func_469(iVar0, -2147483648);
				func_470(iVar0, Global_40.f_4942[iVar0]->f_3, 1);
				break;
		}
		iVar0++;
	}
}

void func_1439(char[4] cParam0)
{
	switch (func_1346(cParam0))
	{
		case 0:
			if (func_1881(cParam0, "WNT1_SHORT", 1, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1440(char[4] cParam0)
{
	if (func_177(iVar904, 1073741824))
	{
	}
	func_1434(cParam0);
	func_1362(cParam0, 0);
	func_2080(cParam0);
	func_2081(cParam0);
	func_182(0);
}

float func_1441(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_1442(bool bParam0)
{
	if (!does_entity_exist(bParam0))
	{
		return;
	}
	if (is_entity_dead(bParam0) || is_ped_injured(bParam0))
	{
		return;
	}
	if (func_557(bParam0))
	{
		iVar0 = func_288(bParam0);
		func_553(iVar0);
	}
	func_553(0);
	func_2082(bParam0, 0, 0);
	func_2083(0, 1);
	func_2084(0);
	_0x8fbf9edb378ccb8c(player_id(), bParam0);
	if (func_1282() == 0)
	{
		_set_ped_as_saddle_horse_for_player(player_id(), bParam0);
		func_1470(0);
		func_1469(0);
	}
	set_ped_config_flag(bParam0, 136, false);
	func_295();
}

void func_1443(int iParam0, int iParam1)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1530(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1819(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_2085(iParam1);
	iVar5 = func_242(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

bool func_1444(char[4] cParam0, bool bParam1)
{
	iVar0 = 1;
	if (!func_285(19))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 19, uLocal_1064[16], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[16]), func_250(6, 2), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[16]), 128);
				func_145(cParam0, &(uLocal_1064[16]), "SUSAN", 1);
				set_entity_load_collision_flag(&(uLocal_1064[16]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(3))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 3, uLocal_1064[4], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[4]), func_250(6, 2), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[4]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[4]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(15))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 15, uLocal_1064[8], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[8]), func_250(6, 2), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[8]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[8]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(20))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 20, uLocal_1064[6], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[6]), func_250(0, 24), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[6]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[6]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(5))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 5, uLocal_1064[13], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[13]), func_250(0, 25), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[13]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[13]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(16))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 16, uLocal_1064[14], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[14]), func_250(0, 26), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[14]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[14]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(17))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 17, uLocal_1064[15], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[15]), func_250(0, 29), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[15]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[15]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(11))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 11, uLocal_1064[3], 0, 0, 0, 0, 0, 1, -946772361, 1, 0, 1, 0))
			{
				func_1020(cParam0, &(uLocal_1064[3]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[3]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(22))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 22, uLocal_1064[17], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[17]), func_250(0, 28), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[17]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[17]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(9))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 9, uLocal_1064[18], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[18]), func_250(0, 31), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[18]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[18]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(13))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 13, uLocal_1064[11], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[11]), func_250(0, 27), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[11]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[11]), 1);
			}
		}
		iVar0 = 0;
	}
	if (!func_285(7))
	{
		if (bParam1 || func_2086(Global_35, func_473(0, 3), 150f, 0, 1))
		{
			if (func_919(cParam0, 7, uLocal_1064[12], 0, 0, 0, 0, 0, 1, 178615350, 1, 0, 1, 0))
			{
				func_1317(&(uLocal_1064[12]), func_250(0, 30), 2, 1073741824);
				func_1020(cParam0, &(uLocal_1064[12]), 128);
				set_entity_load_collision_flag(&(uLocal_1064[12]), 1);
			}
		}
		iVar0 = 0;
	}
	return iVar0;
}

void func_1445(char[4] cParam0)
{
	func_1878(cParam0, &(iLocal_1084[0]));
	func_1878(cParam0, &(iLocal_1084[1]));
	func_1878(cParam0, &(iLocal_1084[2]));
	func_1878(cParam0, &(Local_14.f_3[0]));
	func_151(cParam0, &(uLocal_1064[11]), "AbigailRoberts", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[12]), "CharlesSmith", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[13]), "HoseaMatthews", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[6]), "KAREN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[14]), "MollyOshea", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[15]), "MrPearson", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[3]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[17]), "TILLY", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[18]), "lenny", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[16]), "SusanGrimshaw", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[4]), "BillWilliamson", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_1064[8]), "MARYBETH", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_3[0]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[1]), "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_1084[2]), "Horse_01^2", 0, 0, 0, 0);
	func_151(cParam0, iVar1102, "Horse_01^3", 0, 0, 0, 0);
}

void func_1446(char[4] cParam0, var uParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_2087(&((*Global_1835011)[cParam0->f_607]->f_22), uParam1, iParam2);
}

void func_1447(int iParam0, int iParam1)
{
	if (!func_1039(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0] = (Global_40.f_9384[iParam0] || iParam1);
}

bool func_1448(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_1877(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1449()
{
	Global_1357549 = 0;
	func_1570(1);
}

int func_1450(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_1451(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_1452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		case 1:
			return -807742826;
		case 2:
			return 866755445;
		case 3:
			return 2082303678;
		case 4:
			return 1349313303;
		case 5:
			return 1267596926;
		case 6:
			return 676394410;
		case 7:
			return -1190705999;
		case 8:
			return -1802212639;
		default:
			break;
	}
	return 176656832;
}

void func_1453()
{
	func_1041(1591451572);
	func_1041(-349064220);
	func_1041(1776302352);
	func_1041(-523522517);
}

void func_1454(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_1455(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_82(128))
	{
		return;
	}
	if (!func_2088(iParam0))
	{
		return;
	}
	if (func_278(iParam0, 32))
	{
		return;
	}
	func_314(iParam0, 32);
	func_256(Global_1935630, 8192);
	func_95(func_640(-1532769513, -36357794), 1);
	switch (func_2089(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_95(func_640(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_95(func_640(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_95(func_640(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_95(func_640(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_95(func_640(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_95(func_640(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_314(iParam0, 64);
	}
}

void func_1456()
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_2090(iVar0);
		if (iVar1 != -1)
		{
			if (func_2091(iVar1) != -1 && iVar1 != func_1698())
			{
				if (iVar0 == Global_1934051->f_33 && func_2092(iVar0))
				{
					func_2093(iVar0, 7148155);
					func_2094(&(Global_1934051->f_33), 0);
				}
				iVar2 = func_1852(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == &Global_1914319->f_15936[iVar2] && func_2092(iVar0))
					{
						if (Global_1914319->f_15936[iVar2]->f_5)
						{
							Global_1914319->f_15936[iVar2]->f_5 = 0;
						}
						func_2094(Global_1914319->f_15936[iVar2], 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1457(int iParam0)
{
	iVar0 = func_1698();
	if (func_274(iVar0))
	{
		iVar1 = func_1451(iVar0);
		if (func_1039(iVar1))
		{
			Global_40.f_9384[iVar1] = (&Global_40.f_9384[iVar1] - Global_40.f_9384[iVar1] & 1);
		}
	}
	iVar2 = func_1450(iParam0);
	iVar3 = func_1451(iVar2);
	if (func_1039(iVar3))
	{
		Global_40.f_9384[iVar3] |= 1;
		Global_40.f_6 = { Global_1395601->f_5[iVar3]->f_2 };
		_0x748c5f51a18cb8f0(0);
		_0x748c5f51a18cb8f0(1);
	}
}

void func_1458(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1450(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_2095(iParam0);
	func_2096(iParam0);
	func_1449();
	if (iVar0 == 9)
	{
		func_491(-524145696, 0, 0);
	}
}

void func_1459(int iParam0)
{
	func_2097();
	switch (iParam0)
	{
		case 0:
			func_2098(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_2098(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_2098(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_2098(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_2098(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_2098(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_2098(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_2098(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_2098(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_2098(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_2098(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_2098(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_2098(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_2098(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_2098(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_2098(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_2098(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_2098(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_2098(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_2098(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_2098(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_2098(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_2098(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_2098(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_2098(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_2098(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_2098(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_2098(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_2098(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_2098(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_1460(var uParam0, int iParam1, bool bParam2)
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

void func_1461()
{
	if (does_entity_exist(Global_1357549->f_1674))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1357549->f_1674))
		{
			set_entity_as_mission_entity(Global_1357549->f_1674, true, false);
		}
		if (is_entity_dead(Global_1357549->f_1674) == 0)
		{
			delete_vehicle(&(Global_1357549->f_1674));
		}
	}
}

void func_1462()
{
	func_2099(32);
}

bool func_1463(int iParam0)
{
	if (-1829635046 == func_2100(81053684))
	{
		if (func_2101(iParam0))
		{
			return true;
		}
	}
	else if (func_1773(-525676072, iParam0))
	{
		if (func_2101(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1464(int iParam0)
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

void func_1465(int iParam0)
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

void func_1466()
{
	iVar0 = func_1154(Global_35, 9, 1, 0);
	if (func_717(iVar0))
	{
		return;
	}
	iVar0 = func_1154(Global_35, 7, 1, 0);
	if (func_717(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1154(Global_35, 0, 1, 0);
	if (func_717(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1154(Global_35, 1, 1, 0);
	if (func_717(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1154(Global_35, 18, 1, 0);
	if (func_717(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_2102();
	if (func_717(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1586(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2103(6291456, 0);
	if (func_717(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1586(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1467()
{
	return Global_1900383->f_393;
}

int func_1468(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1917(*uParam0, 0f, 0f, 0f))
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

void func_1469(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1470(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1471(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1472()
{
	return &Global_1899515;
}

void func_1473(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1474(int iParam0)
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

bool func_1475()
{
	return (func_2104() || func_2105());
}

void func_1476(bool bParam0)
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
	func_2106(0f);
	Global_1935436->f_11 = 1;
	if (func_331())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_2107();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1477(var uParam0)
{
	return uParam0->f_865;
}

float func_1478(var uParam0)
{
	return uParam0->f_868;
}

float func_1479(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_1480(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1481(var uParam0, int iParam1)
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

void func_1482(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1257(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2108(iParam4);
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

bool func_1483(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_702(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1484(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1485(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1483(1108822547, 6))
	{
		if (bParam2)
		{
			func_1482(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1486(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1487(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1486(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_702(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_702(iParam0, 1)])->f_10 || iParam1);
}

void func_1487(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_702(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_702(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_702(iParam0, 1)])->f_10 && iParam1));
}

bool func_1488(var uParam0)
{
	if (func_2109(&(uParam0->f_29), 62))
	{
		switch (func_2110())
		{
			case 1:
				if (!func_2109(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_2109(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_2109(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_2109(&(uParam0->f_29), 32))
				{
					if (func_2109(&(uParam0->f_29), 2))
					{
						if (func_724(func_312()) < 5)
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

int func_1489(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_2111(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1195("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1196(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_717(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_2111(iParam1, 512) && func_1768(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_2111(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_2111(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_2111(iParam1, 33554432)))
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
		func_1197(iVar1);
	}
	if (func_717(iVar0))
	{
	}
	else if (!func_2111(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1489(uParam0, iParam1, iParam2);
	}
	else if (func_2111(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1490(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1491(int iParam0)
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

void func_1492(var uParam0)
{
	if (!func_916(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_882(&(uParam0->f_1), 1);
	}
}

void func_1493(var uParam0)
{
	if (!func_916(*uParam0, 1))
	{
		request_ptfx_asset();
		func_882(uParam0, 1);
	}
}

bool func_1494(var uParam0)
{
	if (func_916(uParam0->f_2, 1))
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

char* func_1495(int iParam0)
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

bool func_1496(int iParam0)
{
	return iParam0 != 0;
}

int func_1497(var uParam0, int iParam1)
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

int func_1498(var uParam0, char* sParam1)
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

void func_1499(var uParam0, int iParam1)
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

int func_1500(var uParam0)
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

void func_1501(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1502(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1503(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1504(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1505(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1505(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1505(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1505(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1505(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1505(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1505(uParam0, 5, iParam4))
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
			if (func_1505(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1505(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1505(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1506(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1507(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_244((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1508(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_525(sParam0, 1);
}

bool func_1509(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_886(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1510(var uParam0)
{
	if (func_916(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_3, 1))
	{
		func_888(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_882(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_882(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1511(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_890(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1512(var uParam0, int iParam1)
{
	if (func_916(uParam0->f_1, 2))
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
	if (!func_916(uParam0->f_1, 1))
	{
		func_897(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1513(var uParam0)
{
	if (func_916(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_2, 1))
	{
		func_899(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_882(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1514(var uParam0)
{
	if (func_916(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_3, 1))
	{
		func_901(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_882(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1515(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_903(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1516(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_905(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1517(var uParam0)
{
	if (func_916(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_2, 1))
	{
		func_907(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_882(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1518(var uParam0)
{
	if (func_916(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_916(uParam0->f_1, 1))
	{
		func_909(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_882(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1519(int iParam0)
{
	if (func_544(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1520(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_544(iParam0))
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
			if (func_1073(iParam0, 2, 1))
			{
				func_1071(iParam0, 2, 1);
			}
			if (func_736(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1012(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_550(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_497(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_497(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_2112(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1012(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2113(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1012(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_2113(iParam0, 1);
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
			if (!func_1073(iParam0, 44, 0))
			{
				func_1012(iParam0, 44, 0);
			}
			if (func_2114(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_2113(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1071(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1075(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_2115(iParam0, 0, 0, 1);
			}
			func_1071(iParam0, 33, 1);
			func_1071(iParam0, 34, 1);
			func_1071(iParam0, 29, 1);
			if (!func_422(vVar0) && bParam7)
			{
				func_2113(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_2113(iParam0, 4);
			}
			else
			{
				func_2113(iParam0, 5);
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
						func_2112(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_927(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_2113(iParam0, 4);
			}
			else
			{
				func_2113(iParam0, 5);
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
				if (func_1011(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_470(iParam0, iParam13, 0);
						func_2116(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1073(iParam0, 25, 0))
						{
							func_1071(iParam0, 25, 0);
						}
						func_1012(iParam0, 66, 0);
						func_2113(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_2113(iParam0, 5);
				}
				func_1012(iParam0, 28, 1);
			}
			else
			{
				func_2113(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_2113(iParam0, 6);
			}
			break;
		case 6:
			if (func_497(Global_1360165[iParam0], 0))
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
					func_2117(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2118(Global_1360165[iParam0], 1);
				}
			}
			func_2113(iParam0, 7);
		case 7:
			func_1075(iParam0, bParam9, bParam15, 0);
			func_1068(iParam0, 4, bParam11);
			func_1070(iParam0);
			if (bParam20)
			{
				if (func_1591(Global_1360165[iParam0]))
				{
				}
			}
			func_2119(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_2113(iParam0, 0);
			func_737(iParam0, 16, 1);
			func_1071(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1521(char[4] cParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2120(bParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1992(bParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_2121(cParam0, bParam1, iParam2, func_351(iParam2, 0));
	func_1021(cParam0, bParam1, 512);
	if (bParam5)
	{
		func_1021(cParam0, bParam1, 128);
	}
	else
	{
		func_1020(cParam0, bParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1522(int iParam0)
{
	if (!func_544(iParam0))
	{
		return;
	}
	bVar0 = func_581(iParam0);
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(bVar0, 0, 0f);
}

void func_1523(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1524(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1532(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_1525(vector3 vParam0)
{
	return func_2122(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1526(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_559(iParam0))
	{
		return false;
	}
	iVar0 = func_242(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1527(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_553(iParam0);
	func_553(iParam0);
	func_2123(iParam0, iParam1);
	func_2124(iParam0, iParam1);
	func_2125(iParam0, iParam1);
	bVar1 = func_242(iParam0);
	if (does_entity_exist(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2126(bVar1);
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
	bVar3 = func_242(iParam1);
	if (does_entity_exist(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2126(bVar3);
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
	func_295();
}

bool func_1528()
{
	iVar0 = func_1467();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1529()
{
	bVar0 = func_1467();
	if (!does_entity_exist(bVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(bVar0))
	{
		set_entity_as_mission_entity(bVar0, true, true);
	}
	delete_object(&bVar0);
	func_2127(0);
}

int func_1530(int iParam0)
{
	iParam0 = func_293(iParam0);
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

int func_1531(int iParam0)
{
	iParam0 = func_293(iParam0);
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

int func_1532(int iParam0)
{
	iParam0 = func_293(iParam0);
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

void func_1533(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1819(&iVar0, &iVar1, &iVar2);
	func_1820(iParam0, iVar0);
	func_1821(iParam0, iVar1);
	func_1822(iParam0, iVar2);
	func_2083(iParam0, 1);
	func_1443(iParam0, 1);
}

void func_1534(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_842(iParam0, 1);
}

void func_1535(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_293(iParam0);
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

bool func_1536(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1084(iParam0, 1);
}

struct<2> func_1537(int iParam0)
{
	iParam0 = func_293(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2128(iParam0, &uVar2))
	{
	}
	if (!func_2129(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1538()
{
	if (func_2130(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2130(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2130(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2130(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2130(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2130(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1539(bool bParam0, var uParam1, var uParam2, int iParam3)
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
	func_2131(bParam0);
	func_2132(bParam0, uParam1);
	func_2133(bParam0);
	func_2134(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2135(bParam0, iParam3, 0);
	}
	_update_ped_variation(bParam0, false, true, true, true, true);
}

void func_1540(int iParam0)
{
	iParam0 = func_293(iParam0);
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

bool func_1541(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1542(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_1543(int iParam0)
{
	return iParam0;
}

bool func_1544(bool bParam0)
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

int func_1545(var uParam0)
{
	return *uParam0;
}

bool func_1546(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2136(iParam0) };
	if (func_1917(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_928(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2137(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1547(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1548(var uParam0)
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

bool func_1549(var uParam0)
{
	switch (func_2138(uParam0))
	{
		case 0:
			uParam0->f_24 = func_312();
			iVar4 = func_312();
			func_1262(&iVar4, uParam0->f_6);
			func_1263(&iVar4, 0);
			func_1264(&iVar4, 0);
			if (func_1102(uParam0->f_24, iVar4, 1))
			{
				func_361(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2139(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2140(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2141(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2140(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2141(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_361(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_724(iVar4), func_725(iVar4), func_726(iVar4));
				func_2142(get_clock_hours());
				func_1448(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1550(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2143(2000);
	Global_16 = 0;
	func_2144();
	set_entity_invincible(Global_35, func_2145(*iParam0, 8));
	if (!func_2145(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2145(*iParam0, 2) || func_2145(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2145(*iParam0, 16))
	{
		func_262(1);
	}
	if (func_2145(*iParam0, 32))
	{
		func_655(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2146(-1623728698, 0);
	}
	func_854(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1551(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1552(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1553(var uParam0)
{
	return *uParam0;
}

bool func_1554(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1555(uParam0, 32768))
	{
		return true;
	}
	if (func_2147(uParam0) >= 3)
	{
		uParam0->f_2286 = func_1005(get_player_index(), 0, 0, 1);
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
		func_2148(uParam0);
	}
	if (func_2147(uParam0) < 10)
	{
		if (func_2147(uParam0) == 3)
		{
			func_2149(uParam0, iParam5, bParam6);
		}
		else if (func_2147(uParam0) > 3)
		{
			if (func_1553(uParam0) == 0)
			{
				if (!func_1555(uParam0, 524288))
				{
					func_2150(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2151(uParam0, 4);
					func_2152(uParam0, 10);
					func_2153(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1555(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2154(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_2155(0);
			func_2156();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2154(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2157(uParam0, uParam0->f_2074))
				{
					if (func_2158(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2159(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2159(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2160(uParam0);
			}
		}
	}
	bVar0 = func_2161(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1555(uParam0, 268435456) && bVar1) && !func_1555(uParam0, 262144))
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
				func_775(uParam0, 131072);
				func_775(uParam0, 268435456);
			}
		}
		if (func_2162(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2154(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1553(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2147(uParam0) == 3 || func_1555(uParam0, 131072))
	{
		func_2163(uParam0);
		if (!func_1555(uParam0, 262144))
		{
			if ((bVar0 && func_1555(uParam0, 65536)) || func_1555(uParam0, 131072))
			{
				func_775(uParam0, 32768);
				func_2151(uParam0, 4);
				func_2152(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2153(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2147(uParam0) >= 3)
	{
		func_2164(uParam0, iParam5);
		func_2165(uParam0);
		if (!func_2166(uParam0, 1))
		{
			func_2167(uParam0);
		}
		func_2168(uParam0);
	}
	switch (func_2147(uParam0))
	{
		case 0:
			func_2169(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2170(uParam0);
			break;
		case 2:
			func_2171(uParam0);
			break;
		case 3:
			if (func_2172(uParam0))
			{
				func_2173(2);
				func_2159(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_247(&(uParam0->f_2262));
				func_2151(uParam0, 1);
				func_2174();
				func_2152(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1555(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2147(uParam0) == 5)
			{
				if (func_2175(uParam0))
				{
					func_2151(uParam0, 2);
					func_2152(uParam0, 6);
				}
			}
			if (func_2147(uParam0) == 6)
			{
				if (func_2176(uParam0))
				{
					func_2151(uParam0, 3);
					func_2152(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1358(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2177(uParam0, iParam5))
				{
					if (func_2178(uParam0))
					{
						uParam0->f_2075 = func_2179(uParam0);
						func_247(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2151(uParam0, 6);
						func_2152(uParam0, 9);
					}
					else
					{
						func_2151(uParam0, 4);
						func_2152(uParam0, 10);
						func_2153(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2177(uParam0, iParam5))
			{
				func_2153(uParam0, iParam5);
				func_2152(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1555(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1556(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1557(var uParam0, var uParam1)
{
	if (func_1555(uParam1, 32768))
	{
		Var0 = { func_2180(uParam0) };
		func_1902(uParam0, &Var0);
		if (func_1555(uParam1, 131072))
		{
			func_776(uParam0, 268435456);
			if (func_422(uParam0->f_865))
			{
				uParam0->f_865 = { func_2181(uParam1, uParam1->f_2074) };
			}
			if (func_422(uParam0->f_862))
			{
				uParam0->f_862 = { func_2181(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1555(uParam1, 268435456))
		{
			func_2182(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1555(uParam1, 524288))
	{
		func_776(uParam0, 67108864);
		func_1556(uParam1, 524288);
	}
	if (func_2162(uParam1, 128))
	{
		func_776(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2154(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2182(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1558(char[4] cParam0)
{
	if (func_843(&(cParam0->f_7375), 128) || func_843(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_2183(&(cParam0->f_7375));
		func_1341(&(cParam0->f_7375), 128, 1);
		func_1341(&(cParam0->f_7375), 256, 1);
		func_1341(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1559(char[4] cParam0)
{
	func_2184(&(cParam0->f_7375));
}

bool func_1560(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2185(uParam4, &cParam0);
	if (func_843(uParam4, 2) && !func_843(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2186(uParam4) != 1)
	{
		func_2187(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2186(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2188(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2189(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2190(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2191(cParam5);
				}
				func_2189(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_843(uParam4, 2097152))
					{
						func_2192(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_843(uParam4, 134217728)))
				{
				}
				else
				{
					func_2193(uParam4);
				}
				func_247(&(uParam4->f_1));
				func_2189(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2194(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_936(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2189(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2195(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2189(uParam4, 4);
					}
					else if (!func_422(func_2196(uParam4)) && !func_2086(Global_35, func_2196(uParam4), 100f, 1, 1))
					{
						func_1465(1);
						start_player_teleport(get_player_index(), func_2196(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_936(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2189(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_306(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2188(uParam4, &cParam0, cParam5);
						func_2189(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_936(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2189(uParam4, 4);
			}
			break;
		case 3:
			func_418(uParam4);
			if (func_2190(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2191(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_843(uParam4, 512)))
			{
				if (!func_843(uParam4, 1024) && func_2197(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_843(uParam4, 512))
				{
					func_247(&(uParam4->f_1));
					func_776(uParam4, 512);
					func_2189(uParam4, 4);
				}
				else if (func_843(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2187(uParam4);
			}
			if (func_843(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2198(uParam4) - func_2199(uParam4)))) <= 2f)
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
				if (func_2200(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2199(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2201(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2202(uParam4);
				return true;
			}
			else
			{
				if (func_843(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_247(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_776(uParam4, 512);
						func_1341(uParam4, 67108864, 1);
						func_2189(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_843(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2199(uParam4) <= 5000) && func_2199(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_843(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1550(&(uParam4->f_861), 0);
					func_776(uParam4, 536870912);
				}
				if (func_2199(uParam4) >= 5000 && func_2199(uParam4) <= (func_2198(uParam4) - 5000))
				{
					func_2203();
				}
			}
			break;
		case 6:
			if (func_2201(uParam4))
			{
				func_2202(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_843(uParam4, 524288))
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
						func_776(uParam4, 1073741824);
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
					if (func_2204(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2189(uParam4, 3);
					}
					else if (func_936(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2189(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2190(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2189(uParam4, 3);
					}
					else if (func_936(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2189(uParam4, 3);
					}
				}
				if (func_2186(uParam4) == 3)
				{
					if (func_843(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2189(uParam4, 4);
			break;
	}
	return false;
}

void func_1561(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2205()))
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

void func_1562(char[4] cParam0)
{
	func_2192(&(cParam0->f_7375));
}

bool func_1563(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_296(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2206(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_297(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2207(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1564(int iParam0)
{
	MemCopy(&cVar0, {func_296(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1565(int iParam0)
{
	Var0 = { func_1564(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1566(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2208(iVar0));
		iVar0++;
	}
}

void func_1567()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1568(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	clear_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1569(int iParam0)
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
			func_1758(0);
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
			_uitutorial_set_rpg_icon_visibility(5, 2);
			_uitutorial_set_rpg_icon_visibility(4, 2);
			func_2209(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 2);
			_uitutorial_set_rpg_icon_visibility(0, 2);
			func_2209(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 2);
			_uitutorial_set_rpg_icon_visibility(2, 2);
			func_2209(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 2);
			_uitutorial_set_rpg_icon_visibility(6, 2);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 2);
			_uitutorial_set_rpg_icon_visibility(8, 2);
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
			func_1760(0);
			break;
		case 34:
			func_1761(0);
			break;
		case 35:
			func_1762(0);
			break;
		case 36:
			break;
		case 37:
			func_1763(1);
			break;
		case 38:
			func_1764(1);
			break;
		case 39:
			func_1765(1);
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
			_set_deadeye_ability_locked(get_player_index(), 1, true);
			_set_deadeye_ability_locked(get_player_index(), 2, true);
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			_set_deadeye_ability_level(get_player_index(), 0);
			break;
		case 2:
			_set_deadeye_ability_locked(get_player_index(), 2, true);
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 1)
			{
				_set_deadeye_ability_level(get_player_index(), 1);
			}
			break;
		case 3:
			_set_deadeye_ability_locked(get_player_index(), 3, true);
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 2)
			{
				_set_deadeye_ability_level(get_player_index(), 2);
			}
			break;
		case 4:
			_set_deadeye_ability_locked(get_player_index(), 4, true);
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 3)
			{
				_set_deadeye_ability_level(get_player_index(), 3);
			}
			break;
		case 5:
			_set_deadeye_ability_locked(get_player_index(), 5, true);
			if (_get_deadeye_ability_level(get_player_index()) > 4)
			{
				_set_deadeye_ability_level(get_player_index(), 4);
			}
			break;
		case 24:
			_unlock_set_unlocked(-200143754, false);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 0);
			break;
		case 48:
			_0xc900a465364a85d6(player_id());
			break;
		case 50:
			_0xc900a465364a85d6(player_id());
			break;
		case 49:
			_0xc900a465364a85d6(player_id());
			break;
		case 51:
			_0xc900a465364a85d6(player_id());
			break;
		case 23:
			_0x5b9813ecf7633fe8(1);
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
			_unlock_set_unlocked(-843169622, false);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			_unlock_set_unlocked(-1526891582, false);
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 0);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, false);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, false);
			break;
		case 54:
			_unlock_set_unlocked(296662302, false);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, false);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, false);
			break;
	}
}

void func_1570(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_1571()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_415(iVar0, 0);
		iVar0++;
	}
}

bool func_1572(char[4] cParam0)
{
	if (func_33(cParam0) > iLocal_90)
	{
		return true;
	}
	return false;
}

void func_1573(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_1022(cParam0, iParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_281(cParam0->f_5423[iVar1]))
		{
			if (cParam0->f_5423[iVar1]->f_1 == iParam1)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1 && does_entity_exist(cParam0->f_5423[iVar0]->f_1))
	{
		cParam0->f_5423[iVar2]->f_1 = cParam0->f_5423[iVar0]->f_1;
	}
	cParam0->f_5423[iVar0]->f_1 = iParam1;
	func_1677(cParam0->f_5423[iVar0], 64);
	if (is_entity_a_vehicle(iParam1))
	{
		func_1677(cParam0->f_5423[iVar0], 8);
	}
	else if (func_1544(iParam1))
	{
		func_1677(cParam0->f_5423[iVar0], 16);
	}
}

void func_1574()
{
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		iVar1 = iVar0;
		if (iVar1 != 2 && iVar1 != 1)
		{
			iVar3 = func_501(iVar1);
			if (iVar3 != -1)
			{
				iVar2 = func_502(iVar3, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (does_entity_exist(iVar2))
				{
					_0xba8818212633500a(iVar2, 0, 1);
				}
			}
		}
		iVar0++;
	}
}

bool func_1575(int iParam0)
{
	if (!func_1206(iParam0))
	{
		return false;
	}
	if (func_1579(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1576(int iParam0)
{
	if (!func_1206(iParam0))
	{
		return false;
	}
	if (func_1579(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1577(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1206(iParam0))
	{
		return;
	}
	if (!func_1576(iParam0))
	{
		func_1580(iParam0, 2);
		if (bParam2)
		{
			if (!func_224(0, 0, 1))
			{
				func_394(1, 4);
			}
		}
		if ((!func_241() && !bParam1) && !func_224(0, 0, 1))
		{
			func_742(_create_var_string(10, "OUT_JOURN_ADD", func_2210(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1578(int iParam0)
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

bool func_1579(int iParam0, int iParam1)
{
	if (!func_1206(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1580(int iParam0, int iParam1)
{
	if (!func_1206(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

bool func_1581(int iParam0, int iParam1)
{
	iVar0 = func_1239(iParam1);
	func_1839(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_1582(int iParam0, int iParam1)
{
	if (!func_1206(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_1583(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_1584(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

int func_1585(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_2211(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1586(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_717(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_717(iVar4) && iVar4 != iVar0)
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
		if (iParam0 != Global_35 && func_717(iVar0))
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
		func_632(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_2212(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1153(iVar0))
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

void func_1587(char[4] cParam0)
{
	if (!is_entity_dead(&(uLocal_1064[3])))
	{
		set_blocking_of_non_temporary_events(&(uLocal_1064[3]), true);
		if (func_33(cParam0) >= 25)
		{
			func_1317(&(uLocal_1064[3]), func_250(0, 20), 2, 1073741824);
		}
		else
		{
			func_1317(&(uLocal_1064[3]), func_250(0, 8), 2, 1073741824);
		}
		remove_all_ped_weapons(&(uLocal_1064[3]), true, true);
		func_145(cParam0, &(uLocal_1064[3]), "SADIE_ADLER", 1);
		if (func_33(cParam0) > iLocal_91)
		{
			_set_ped_body_component(&(uLocal_1064[3]), 2069918342);
			_set_ped_body_component(&(uLocal_1064[3]), 718939204);
		}
		else
		{
			_set_ped_body_component(&(uLocal_1064[3]), 2069918342);
		}
		_update_ped_variation(&(uLocal_1064[3]), false, true, true, true, false);
	}
}

void func_1588()
{
}

void func_1589()
{
	func_1317(&(Local_14.f_11[0]), func_250(13, 7), 2, 1073741824);
	func_1317(&(Local_14.f_11[1]), func_250(13, 8), 2, 1073741824);
	func_1317(&(Local_14.f_11[2]), func_250(13, 9), 2, 1073741824);
	func_1317(&(Local_14.f_11[3]), func_250(13, 10), 2, 1073741824);
	iLocal_903 = 0;
	while (iVar901 < 4)
	{
		if (!is_entity_dead(&(Local_14.f_11[iVar901])))
		{
			set_ped_config_flag(&(Local_14.f_11[iVar901]), 186, false);
			remove_all_ped_weapons(&(Local_14.f_11[iVar901]), true, true);
			func_2213(&(Local_14.f_11[iVar901]), 0, 0);
			func_1903(&(Local_14.f_11[iVar901]), 0);
		}
		iLocal_903 = iVar901 + 1;
	}
}

void func_1590(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			_0x5bb04bc74a474b47(iParam0, 1288903733);
		}
		else
		{
			_0x9078fb0557364099(iParam0);
		}
	}
}

bool func_1591(bool bParam0)
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

void func_1592()
{
	set_timecycle_modifier("winter1_MoonPos");
}

void func_1593()
{
	func_480(872775928, 1, 0f, 0, 0, 0, 0, 0);
	func_480(-1909593249, 1, 0f, 0, 0, 0, 0, 0);
	func_2214();
}

void func_1594(bool bParam0)
{
	if (bParam0)
	{
		func_480(872775928, 0, 1f, 1, 0, 0, 1, 0);
	}
	else
	{
		func_480(872775928, 0, 0, 0, 1, 0, 0, 0);
	}
}

void func_1595()
{
	func_480(1535926888, 1, -0.1216f, 0, 0, 0, 0, 0);
	func_480(1364348404, 1, 0.1185f, 0, 0, 0, 0, 0);
}

void func_1596()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		switch (iVar0)
		{
			case 0:
			case 6:
			case 11:
			case 13:
				break;
			default:
				if (iVar0 != 12)
				{
					func_469(iVar0, -2147483648);
					func_470(iVar0, Global_40.f_4942[iVar0]->f_3, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_1597()
{
	iLocal_903 = 0;
	while (iVar901 < 1025)
	{
		if (func_177(iLocal_92, iVar901))
		{
			func_485(&iLocal_92, iVar901);
		}
		iLocal_903 = iVar901 + 1;
	}
}

void func_1598()
{
	if (!func_177(iVar906, 131072))
	{
		if (_is_app_running(-1782489369))
		{
			if (_event_manager_is_event_pending(-1896195300))
			{
				_event_manager_pop_event(-1896195300);
				_request_uiapp_transition_by_hash(-1782489369, -1942376275);
				func_179(&uLocal_908, 131072);
			}
		}
		else
		{
			_launch_app_by_hash_with_entry(-1782489369, -1942376275);
		}
	}
}

void func_1599(char[4] cParam0, int iParam1)
{
	func_776(&(cParam0->f_7375), iParam1);
}

void func_1600()
{
	_0x0f2a2175734926d8("Cabin_Attack_Rustle", uVar865);
}

void func_1601()
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		switch (&iLocal_714[iVar0])
		{
			case 0:
				if (is_bit_set(iVar720, iVar0))
				{
					iLocal_725[iVar0] = -1;
					iLocal_714[iVar0] = 1;
				}
				break;
			case 1:
				if (_0xe368e8422c860ba7(func_2215(iVar0), "WNT1_sounds", -2))
				{
					iLocal_725[iVar0] = _0x0556c784fa056628(func_2215(iVar0), "WNT1_sounds");
					iLocal_714[iVar0] = 2;
				}
				break;
			case 2:
				if (is_bit_set(iVar721, iVar0))
				{
					iLocal_714[iVar0] = 3;
				}
				break;
			case 3:
				play_stream_frontend(&(iLocal_725[iVar0]));
				iLocal_714[iVar0] = 4;
				break;
			case 4:
				if (is_bit_set(iVar722, iVar0))
				{
					iLocal_714[iVar0] = 5;
				}
				else if (!is_stream_playing(&(iLocal_725[iVar0])))
				{
					if (_0xe368e8422c860ba7(func_2215(iVar0), "WNT1_sounds", -2))
					{
						iLocal_725[iVar0] = _0x0556c784fa056628(func_2215(iVar0), "WNT1_sounds");
						play_stream_frontend(&(iLocal_725[iVar0]));
					}
				}
				break;
			case 5:
				stop_stream(&(iLocal_725[iVar0]));
				iLocal_714[iVar0] = 6;
				break;
			case 6:
				break;
		}
		iVar0++;
	}
}

void func_1602(char[4] cParam0)
{
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		fVar0 = _get_anim_scene_time(cParam0->f_7375.f_804);
		if (fVar0 < 41.55f)
		{
			func_1615(0);
		}
		else if (fVar0 < 50.5f)
		{
			func_1615(1);
		}
		else if (fVar0 < 60.77f)
		{
			func_1615(2);
		}
		else
		{
			func_1615(3);
		}
	}
}

int func_1603(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_2216(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1604(char[4] cParam0)
{
	func_1317(&(uLocal_1064[11]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[4]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[12]), func_250(13, 12), 2, 1073741824);
	func_1317(&(uLocal_1064[5]), func_250(13, 12), 2, 1073741824);
	func_1317(&(uLocal_1064[13]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[6]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[7]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[8]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[14]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[15]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[9]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[16]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[17]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[10]), func_250(13, 11), 2, 1073741824);
	func_1317(&(uLocal_1064[18]), func_250(13, 11), 2, 1073741824);
	func_1317(&(iLocal_1084[1]), func_250(13, 11), 2, 1073741824);
	func_1317(&(iLocal_1084[0]), func_250(13, 11), 2, 1073741824);
	_0x9587913b9e772d29(&(iLocal_1084[1]), 1);
	_0x9587913b9e772d29(&(iLocal_1084[0]), 1);
	func_1317(Global_35, func_250(10, 0), 2, 1073741824);
	_0x9587913b9e772d29(Global_35, 1);
	clear_ped_tasks(&(iLocal_1084[1]), 1, 0);
	clear_ped_tasks(&(iLocal_1084[0]), 1, 0);
}

void func_1605()
{
	if (!func_177(iVar907, 8192))
	{
		if (_is_app_running(-1782489369))
		{
			if (_event_manager_is_event_pending(-1896195300))
			{
				_event_manager_pop_event(-1896195300);
				_request_uiapp_transition_by_hash(-1782489369, -1112207439);
				func_179(&uLocal_909, 8192);
			}
		}
		else
		{
			_launch_app_by_hash_with_entry(-1782489369, -1112207439);
		}
	}
}

void func_1606()
{
	set_clock_time(0, 0, 0);
	pause_clock(true, 0);
	func_1592();
}

bool func_1607(char[4] cParam0)
{
	return func_2197(&(cParam0->f_7375), 1);
}

void func_1608()
{
	if (_0xa24c1d341c6e0d53(0, 0, 0))
	{
		set_anim_scene_bool(&(uLocal_182[0]), "b_FPcamera", true, false);
	}
	if (!_is_anim_scene_started(&(uLocal_182[0]), false))
	{
		start_anim_scene(&(uLocal_182[0]));
	}
	_hide_hud_component(-1679307491);
}

void func_1609(char[4] cParam0)
{
	switch (iVar338)
	{
		case 0:
			if (has_ptfx_asset_loaded())
			{
				iLocal_341 = 1;
			}
			break;
		case 1:
			if (!does_particle_fx_looped_exist(iVar1169))
			{
				iLocal_1172 = start_particle_fx_looped_at_coord("scr_winter1_fog_cover", func_473(10, 10), 0f, 0f, 0f, 1f, false, false, false, false);
				iLocal_341 = 2;
			}
			break;
		case 2:
			if (_does_anim_scene_exist(cParam0->f_7375.f_804))
			{
				if (_is_anim_scene_started(cParam0->f_7375.f_804, false))
				{
					iLocal_341 = 3;
				}
			}
			break;
		case 3:
			if (does_particle_fx_looped_exist(iVar1169))
			{
				set_particle_fx_looped_evolution(iVar1169, "fade", 1f, false);
				iLocal_341 = 4;
			}
			break;
		case 4:
			if (func_162(cParam0, func_33(cParam0)) == 5)
			{
				if (func_33(cParam0) >= iLocal_83)
				{
					iLocal_341 = 5;
				}
			}
			break;
		case 5:
			func_482();
			iLocal_341 = 6;
			break;
		case 6:
			break;
	}
}

bool func_1610()
{
	if (func_497(&(uLocal_1064[2]), 0) && func_497(&(uLocal_1064[1]), 0))
	{
		if (!does_group_exist(iVar1169))
		{
			if (is_ped_in_group(&(uLocal_1064[2])))
			{
				remove_ped_from_group(&(uLocal_1064[2]));
			}
			iLocal_1171 = create_group(2);
			set_group_formation(iVar1169, 5);
			add_custom_formation_location(iVar1169, 0f, -7f, 0f, 0);
			add_custom_formation_location(iVar1169, 0f, -14f, 0f, 1);
			set_ped_config_flag(&(uLocal_1064[2]), 279, true);
			set_ped_as_group_leader(&(uLocal_1064[2]), iVar1169, false);
			set_ped_config_flag(&(uLocal_1064[1]), 279, true);
			set_ped_as_group_member(&(uLocal_1064[1]), iVar1169);
			_0xd5bd1b5318a81994(iVar1169, 1);
		}
		else if (!is_ped_in_group(&(uLocal_1064[1])))
		{
			set_ped_config_flag(&(uLocal_1064[1]), 279, true);
			set_ped_as_group_member(&(uLocal_1064[1]), iVar1169);
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_1611()
{
	set_timecycle_modifier("noDirectLight");
}

bool func_1612(int iParam0, int iParam1, bool bParam2)
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

void func_1613()
{
	_set_ped_body_component(&(uLocal_1064[3]), 2069918342);
	_set_ped_body_component(&(uLocal_1064[3]), 718939204);
	_update_ped_variation(&(uLocal_1064[3]), false, true, true, true, false);
}

bool func_1614(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_216(iParam0))
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
	iVar0 = func_1619(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_219(func_12(iParam0)))
	{
		func_2217(iParam0, 0, 0, -1);
	}
	if (func_2218(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_2219(iVar0, 256);
			}
			if (bParam2)
			{
				func_2219(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

void func_1615(int iParam0)
{
	if (iParam0 != iLocal_137)
	{
		switch (iParam0)
		{
			case 0:
				_0xc489fe31ac726512(1.257f, 1.134f);
				break;
			case 1:
				_0xc489fe31ac726512(0.622f, 0.677f);
				break;
			case 2:
				_0xc489fe31ac726512(-0.443f, 0.247f);
				break;
			case 3:
				_0xc489fe31ac726512(0.102f, -0.599f);
				break;
			case 4:
				_0xc489fe31ac726512(5.566f, 5.348f);
				break;
			case 5:
				_0xc489fe31ac726512(5.546f, 4.351f);
				break;
		}
		iLocal_137 = iParam0;
	}
}

void func_1616(int iParam0, int iParam1)
{
	if (!is_weapon_valid(iParam1))
	{
		return;
	}
	if (iParam1 == -1569615261)
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (has_ped_got_weapon(iParam0, iParam1, 0, false))
	{
		remove_weapon_from_ped(iParam0, iParam1, true, -142743235);
	}
}

void func_1617(char[4] cParam0)
{
	func_2220(&(cParam0->f_7375));
}

void func_1618(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1673(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

int func_1619(int iParam0)
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

bool func_1620(int iParam0, int iParam1)
{
	return (func_2218(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

void func_1621(char[4] cParam0)
{
	func_2221(cParam0);
}

void func_1622()
{
	func_2222(0.25f);
}

void func_1623()
{
	if (!func_177(iVar907, 262144))
	{
		if (func_2223(2))
		{
			func_179(&uLocal_909, 262144);
		}
	}
	func_2224(7);
}

void func_1624(var uParam0)
{
	*uParam0++;
	if (func_422(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -1321.927f, 2438.953f, 309.6122f };
		Global_1934765->f_340[2]->f_1 = { -1351.798f, 2440.891f, 309.3728f };
		Global_1934765->f_340[3]->f_1 = { -1336.995f, 2399.444f, 308.1392f };
		Global_1934765->f_340[4]->f_1 = { -1360.135f, 2425.155f, 308.6656f };
		Global_1934765->f_340[5]->f_1 = { -1319.982f, 2440.926f, 308.9205f };
	}
	if (!func_2225(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2226(-1321.927f, 2438.953f, 309.6122f, "col_school_int_before", 148, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2226(-1321.927f, 2438.953f, 309.6122f, "col_school_int_after", 147, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2226(-1351.798f, 2440.891f, 309.3728f, "col_cabin_lights_on", 149, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2226(-1336.995f, 2399.444f, 308.1392f, "col_barn_lights_on", 150, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2226(-1360.135f, 2425.155f, 308.6656f, "col_bunkhouse_lights_on", 151, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2226(-1319.982f, 2440.926f, 308.9205f, "col_school_int_fireplace", 152, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1625()
{
	if (animpostfx_is_running("Title_GameIntro"))
	{
		if (is_player_control_on(player_id()))
		{
			set_player_control(player_id(), false, 0, false);
		}
		_0x5651516d947abc53();
	}
}

void func_1626(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_83)
	{
		iVar0 = 0;
		while (iVar0 <= 18)
		{
			if (does_entity_exist(&(iLocal_1084[iVar0])))
			{
				set_ped_reset_flag(&(iLocal_1084[iVar0]), 317, true);
			}
			iVar0++;
		}
	}
}

void func_1627(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_87)
	{
		if (does_entity_exist(Global_35))
		{
			set_ped_reset_flag(Global_35, 245, true);
		}
	}
	if (func_33(cParam0) == iLocal_88 || func_33(cParam0) == iLocal_89)
	{
		if (does_entity_exist(&(Local_14.f_18[0])))
		{
			set_ped_reset_flag(&(Local_14.f_18[0]), 53, true);
			set_ped_reset_flag(&(Local_14.f_18[0]), 339, true);
		}
	}
}

void func_1628(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 187, true);
		_uiprompt_disable_prompt_type_this_frame(9);
	}
	func_2155(0);
	disable_control_action(0, 2028806450, false);
	disable_control_action(0, 371916472, false);
	disable_control_action(0, 440314811, false);
	disable_control_action(0, 1644850270, false);
	disable_control_action(0, -1496944061, false);
	if (func_33(cParam0) != iLocal_89)
	{
		disable_control_action(0, -432665970, false);
	}
	if (func_33(cParam0) <= iLocal_84)
	{
		func_2227();
	}
	if (func_33(cParam0) == iLocal_84)
	{
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
	}
	if (func_33(cParam0) < iLocal_85)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, -1292666904, false);
		set_ped_config_flag(Global_35, 334, true);
		_0x0751d461f06e41ce(player_id(), 8, 0, 1);
		set_bit(&(Global_1956580->f_1), 1);
	}
	if (func_33(cParam0) == iLocal_85)
	{
		if (iVar605 < 2)
		{
			func_1360();
			set_bit(&(Global_1956580->f_1), 1);
		}
		else
		{
			set_ped_config_flag(Global_35, 334, false);
			clear_bit(&(Global_1956580->f_1), 1);
		}
	}
	if (func_33(cParam0) < iLocal_86)
	{
		func_2004();
		_0x9e58207b194488ac(player_ped_id(), 16);
	}
	if (func_33(cParam0) == iLocal_86)
	{
		func_2228(1);
		if (is_entity_in_volume(Global_35, &(iLocal_1108[0]), true, 0))
		{
			disable_control_action(0, 130948705, false);
			disable_control_action(0, 42190210, false);
			disable_control_action(0, -1292666904, false);
		}
		if (&iLocal_516[1] < 2)
		{
			func_2004();
			_0x9e58207b194488ac(player_ped_id(), 16);
		}
	}
	if ((((func_33(cParam0) > iLocal_85 && func_33(cParam0) != iLocal_88) && func_33(cParam0) != iLocal_87) && func_33(cParam0) != iLocal_89) && func_33(cParam0) != iLocal_90)
	{
		set_ped_config_flag(Global_35, 334, false);
	}
	if (func_33(cParam0) > iLocal_85)
	{
		clear_bit(&(Global_1956580->f_1), 1);
	}
	if (func_33(cParam0) == iLocal_88 || (func_33(cParam0) == iLocal_87 && iVar606 >= 4))
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		set_ped_config_flag(Global_35, 334, true);
	}
	if (func_1332(Global_35, &(iLocal_1108[27]), 1, 0))
	{
		disable_control_action(0, -640622144, false);
	}
	if (func_33(cParam0) != iLocal_89)
	{
		func_1414();
		set_ped_config_flag(Global_35, 218, true);
	}
	else
	{
		set_ped_config_flag(Global_35, 218, false);
	}
	if (func_33(cParam0) == iLocal_89 || func_33(cParam0) == iLocal_88)
	{
		disable_control_action(0, -620139643, false);
	}
	if (func_33(cParam0) == iLocal_89)
	{
		disable_control_action(0, -1304887797, false);
		set_ped_config_flag(Global_35, 334, true);
	}
	if (func_33(cParam0) < iLocal_86)
	{
		disable_control_action(0, 2011525043, false);
		disable_control_action(0, 527275493, false);
	}
	if (func_33(cParam0) >= iLocal_88)
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
	if (func_33(cParam0) != iLocal_90)
	{
		disable_control_action(0, -1582581421, false);
	}
	if (func_33(cParam0) == iLocal_90 || func_33(cParam0) == iLocal_89)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -1304887797, false);
		set_ped_config_flag(Global_35, 334, true);
	}
}

void func_1629()
{
	if (!func_177(iVar907, 256))
	{
		if (does_entity_exist(&(uLocal_1064[1])))
		{
			if (has_ped_got_weapon(&(uLocal_1064[1]), -164645981, 0, false))
			{
				_0xb0fb9b196a3d13f0(&(uLocal_1064[1]), 1, -164645981);
				func_179(&uLocal_909, 256);
			}
		}
	}
	if (!func_177(iVar907, 512))
	{
		if (does_entity_exist(&(uLocal_1064[2])))
		{
			if (has_ped_got_weapon(&(uLocal_1064[2]), -164645981, 0, false))
			{
				_0xb0fb9b196a3d13f0(&(uLocal_1064[2]), 1, -164645981);
				func_179(&uLocal_909, 512);
			}
		}
	}
}

void func_1630(char[4] cParam0)
{
	if ((func_33(cParam0) == 7 || (func_33(cParam0) == 8 && iVar608 != 21)) || (((func_33(cParam0) == 9 && !func_1332(Global_35, &(iLocal_1108[27]), 1, 0)) && !func_1332(&(Local_14.f_3[0]), &(iLocal_1108[27]), 1, 0)) && func_1331(Global_35, _0xf70f00013a62f866(&(iLocal_1108[27])), 1) > 8f))
	{
		func_2229();
	}
	else if (func_33(cParam0) != 9 || ((func_33(cParam0) == 9 && func_1332(Global_35, &(iLocal_1108[27]), 1, 0)) && func_1332(&(Local_14.f_3[0]), &(iLocal_1108[27]), 1, 0)))
	{
		func_484();
	}
}

void func_1631(char[4] cParam0)
{
	switch (iVar640)
	{
		case 0:
			iLocal_643 = 1;
			break;
		case 1:
			if (func_33(cParam0) > iLocal_88 || (func_33(cParam0) == iLocal_88 && iVar606 == 7))
			{
				iLocal_643 = 2;
			}
			break;
		case 2:
			if (!does_particle_fx_looped_exist(iVar1170))
			{
				iLocal_1173 = start_particle_fx_looped_at_coord("scr_winter1_barn_snow", -535.2f, 2676.4f, 318.2f, 0f, 0f, 0f, 1f, false, false, false, false);
				iLocal_643 = 3;
			}
			break;
		case 3:
			if (func_33(cParam0) > iLocal_91)
			{
				iLocal_643 = 4;
			}
			break;
		case 4:
			func_481();
			iLocal_643 = 5;
			break;
		case 5:
			break;
	}
}

void func_1632()
{
	switch (iVar642)
	{
		case 0:
			if (func_1331(Global_35, func_473(13, 0), 1) < 100f)
			{
				func_2230();
				iLocal_644 = 1;
			}
			break;
		case 1:
			if (func_2231())
			{
				iLocal_644 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_1633(char[4] cParam0)
{
	switch (iVar636)
	{
		case 0:
			func_2232();
			iLocal_639 = 1;
			break;
		case 1:
			if (func_33(cParam0) >= iLocal_87)
			{
				iLocal_639 = 2;
			}
			break;
		case 2:
			func_2233();
			iLocal_639 = 3;
			break;
		case 3:
			if (func_33(cParam0) >= iLocal_91)
			{
				iLocal_639 = 4;
			}
			break;
		case 4:
			func_211();
			iLocal_639 = 5;
			break;
		case 5:
			break;
	}
}

void func_1634(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_82)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 1);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 0);
	}
	else if ((func_33(cParam0) == iLocal_83 || func_33(cParam0) == iLocal_84) || func_33(cParam0) == iLocal_85)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 1);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 1);
	}
	else if (func_33(cParam0) == iLocal_86)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 1);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 1);
	}
	else if ((func_33(cParam0) == iLocal_87 || func_33(cParam0) == iLocal_88) || func_33(cParam0) == iLocal_90)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 1);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 1);
	}
	else if (func_33(cParam0) == iLocal_91)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 1);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 1);
		func_2234(cParam0, &(uLocal_1064[3]), 11, 0);
	}
	else if (func_33(cParam0) == 25)
	{
		func_2234(cParam0, &(uLocal_1064[1]), 0, 0);
		func_2234(cParam0, &(uLocal_1064[2]), 6, 0);
		func_2234(cParam0, &(uLocal_1064[3]), 11, 0);
	}
}

void func_1635(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_91)
	{
		func_2235(22, 5, 0, 0);
	}
	else
	{
		func_2235(0, 5, 0, 0);
	}
}

void func_1636(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 49, true);
	}
	if (iVar0 == iLocal_83 || iVar0 == iLocal_84)
	{
		set_ped_reset_flag(Global_35, 263, true);
	}
	if (iVar0 == iLocal_84 || iVar0 == iLocal_85)
	{
		if (&iLocal_441[3] != 12)
		{
			set_ped_reset_flag(Global_35, 166, true);
		}
	}
	if ((iVar0 == iLocal_85 || iVar0 == iLocal_86) || iVar0 == iLocal_87)
	{
		if (!is_entity_dead(&(uLocal_1064[1])))
		{
			_0xc6981aff6d2a71c2(&(uLocal_1064[1]));
			set_ped_reset_flag(&(uLocal_1064[1]), 94, true);
		}
		if (!is_entity_dead(&(uLocal_1064[2])))
		{
			_0xc6981aff6d2a71c2(&(uLocal_1064[2]));
			set_ped_reset_flag(&(uLocal_1064[2]), 94, true);
		}
	}
}

void func_1637(char[4] cParam0)
{
	if (func_2070(Global_35))
	{
		if (!is_entity_dead(get_mount(Global_35)))
		{
			set_ped_reset_flag(get_mount(Global_35), 21, true);
		}
	}
	if (!is_entity_dead(&(iLocal_1084[1])))
	{
		set_ped_reset_flag(&(iLocal_1084[1]), 25, true);
	}
	if (!is_entity_dead(&(iLocal_1084[2])))
	{
		set_ped_reset_flag(&(iLocal_1084[2]), 25, true);
	}
	if (!is_entity_dead(&(iLocal_1084[0])))
	{
		set_ped_reset_flag(&(iLocal_1084[0]), 25, true);
	}
	if (!is_entity_dead(&(Local_14.f_3[0])))
	{
		set_ped_reset_flag(&(Local_14.f_3[0]), 25, true);
	}
	if (func_33(cParam0) == iLocal_85 || func_33(cParam0) == iLocal_86)
	{
		if (!is_entity_dead(&(iLocal_1084[1])))
		{
			set_ped_reset_flag(&(iLocal_1084[1]), 83, true);
		}
		if (!is_entity_dead(&(iLocal_1084[2])))
		{
			set_ped_reset_flag(&(iLocal_1084[2]), 83, true);
		}
		if (!is_entity_dead(&(iLocal_1084[0])))
		{
			set_ped_reset_flag(&(iLocal_1084[0]), 83, true);
		}
		if (!get_ped_config_flag(&(iLocal_1084[1]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[1]), 174, true);
		}
		if (!get_ped_config_flag(&(iLocal_1084[2]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[2]), 174, true);
		}
		if (!get_ped_config_flag(&(iLocal_1084[0]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[0]), 174, true);
		}
	}
	else
	{
		if (get_ped_config_flag(&(iLocal_1084[1]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[1]), 174, false);
		}
		if (does_entity_exist(&(iLocal_1084[2])) && get_ped_config_flag(&(iLocal_1084[2]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[2]), 174, false);
		}
		if (get_ped_config_flag(&(iLocal_1084[0]), 174, true))
		{
			set_ped_config_flag(&(iLocal_1084[0]), 174, false);
		}
	}
	if (func_33(cParam0) == iLocal_88 || func_33(cParam0) == iLocal_90)
	{
		if (!is_entity_dead(&(Local_14.f_3[0])))
		{
			set_ped_reset_flag(&(Local_14.f_3[0]), 83, true);
		}
	}
}

void func_1638(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_85)
	{
		if (!func_177(iVar901, 4))
		{
			if (func_2086(Global_35, func_473(3, 9), 2f, 1, 1) || is_entity_in_volume(Global_35, &(iLocal_1108[17]), true, 0))
			{
				func_179(&uLocal_904, 4);
			}
		}
	}
}

void func_1639(char[4] cParam0)
{
	iLocal_903 = 0;
	while (iVar900 < 1)
	{
		if (does_entity_exist(&(Local_14.f_3[iVar900])) && is_entity_dead(&(Local_14.f_3[iVar900])))
		{
			func_27(&uLocal_1324, 0);
		}
		iLocal_903 = iVar900 + 1;
	}
	if (does_entity_exist(iVar1102) && is_entity_dead(iVar1102))
	{
		func_27(&uLocal_1324, 0);
	}
	if (func_1415(&uLocal_1324, 1.25f))
	{
		func_2236(cParam0, "WNT1_FAIL_MOUNT", "", 1, 0);
	}
}

void func_1640(char[4] cParam0)
{
	func_2237(cParam0);
	func_2238(cParam0);
}

void func_1641()
{
	if (IntToFloat(get_entity_health(Global_35)) < 150f)
	{
		if (_0x22cd23bb0c45e0cd(player_id()) < 1f)
		{
			set_player_health_recharge_multiplier(player_id(), 1f);
		}
	}
	else if (_0x22cd23bb0c45e0cd(player_id()) > 0f)
	{
		set_player_health_recharge_multiplier(player_id(), 0f);
	}
}

void func_1642(int iParam0)
{
	_0xde2c3b74d2b3705c(iParam0, 0);
}

void func_1643(bool bParam0)
{
	iVar0 = get_interior_at_coords(func_473(4, 2));
	if (is_valid_interior(iVar0))
	{
		if (is_interior_ready(iVar0))
		{
			if (!func_2239(get_gameplay_cam_coord()))
			{
				if (bParam0)
				{
					if (is_interior_entity_set_active(iVar0, "adl_winter01_trapdoorclosed"))
					{
						deactivate_interior_entity_set(iVar0, "adl_winter01_trapdoorclosed", true);
					}
					if (!is_interior_entity_set_active(iVar0, "adl_winter01_trapdooropen"))
					{
						activate_interior_entity_set(iVar0, "adl_winter01_trapdooropen", 0);
					}
					func_1584(185);
					func_1583(184);
				}
				else
				{
					if (is_interior_entity_set_active(iVar0, "adl_winter01_trapdooropen"))
					{
						deactivate_interior_entity_set(iVar0, "adl_winter01_trapdooropen", true);
					}
					if (!is_interior_entity_set_active(iVar0, "adl_winter01_trapdoorclosed"))
					{
						activate_interior_entity_set(iVar0, "adl_winter01_trapdoorclosed", 0);
					}
					func_1583(185);
					func_1584(184);
				}
			}
		}
	}
}

void func_1644(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_244(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2240(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1508(cParam0->f_8269[iVar19]);
				}
				else if (func_2241(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_254(cParam0->f_8269[iVar19]);
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
			if (func_244(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2242(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2243(cParam0->f_8269.f_641[iVar19]);
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
			if (func_244(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2242(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_245(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_244(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2244(&(cParam0->f_8269));
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
			if (func_244(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2240(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2245(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_525(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2241(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2245(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_525(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1645(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1919(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1646()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_2155(0);
	func_2004();
}

void func_1647(char[4] cParam0, int iParam1, int iParam2)
{
	func_485(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

bool func_1648(int iParam0)
{
	return (iParam0 < func_423() && iParam0 >= 0);
}

int func_1649(int iParam0)
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

bool func_1650(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1651(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1648(iVar0))
	{
		return false;
	}
	iVar1 = func_1649(iParam2);
	if (!func_1650(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1652(struct<2> Param0, int iParam2)
{
	if (!func_282(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1653(char[4] cParam0)
{
	func_2246(cParam0);
	if (func_306(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_306(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_930(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2247(cParam0);
	func_2248(cParam0, 67108864);
	func_2248(cParam0, 8192);
	func_932(cParam0, 4);
	func_932(cParam0, 512);
	func_932(cParam0, 65536);
	func_932(cParam0, 1024);
	func_932(cParam0, 262144);
	func_932(cParam0, 16777216);
	func_932(cParam0, 64);
	func_292(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2249(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_292(cParam0, 4194304);
	func_292(cParam0, 8388608);
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
	func_465(&(cParam0->f_13106));
	func_247(&(cParam0->f_13112));
	func_2250(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_262(1);
	}
	if (func_985(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_985(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_985(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2251(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_256(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2252(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2253(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2254(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1654(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1655(char[4] cParam0)
{
	func_2191(cParam0);
}

void func_1656(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1502(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1657(char[4] cParam0)
{
	func_2255(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1658(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1659(char[4] cParam0)
{
	return true;
}

void func_1660(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1661(var uParam0, int iParam1)
{
	iVar0 = func_2256(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1662(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2257(cParam0, uParam1))
	{
		return 0;
	}
	if (func_544(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1023(uParam1);
	func_2258(uParam1);
	if (!bParam2)
	{
		func_2259(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2260(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2261(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2262(cParam0, uParam1);
	func_2263(uParam1);
	return 0;
}

bool func_1663(char[4] cParam0)
{
	return true;
}

int func_1664(int iParam0)
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
						*iParam0 = func_2264(vVar0.z);
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

void func_1665(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_2236(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1666(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2265(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1555(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2266(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_2195(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1667(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_879((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2269((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_879((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2267(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2268(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2270((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_879((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2271((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_879((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2272((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_879(uParam4->f_1, iParam12))
	{
		func_2267(&(uParam4->f_1), iParam12);
		if (func_2268(&(uParam4->f_1), iParam13))
		{
			func_2273(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_879((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2267(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2268(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2274((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_879((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2267(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2268(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2275((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_879((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2267(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2268(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2276((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_879((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2277((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_879((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2278((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_879((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2267(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2268(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2279((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_879((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2267(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2268(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2280((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1668(char[4] cParam0)
{
	iVar0 = func_2281(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1669(bool bParam0, bool bParam1)
{
	if (func_2282(255) == 4)
	{
		return;
	}
	if (func_422(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_317(0);
	}
	else
	{
		if (bParam1)
		{
			func_2283(0, 0, 0, 1);
		}
		func_318(0);
		func_2284(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2285(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2286(Global_1109400->f_389, 42);
	func_2287(Global_1109400->f_428, 42);
}

float func_1670(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_1671(bool bParam0, bool bParam1, bool bParam2)
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

var func_1672(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1673(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2288(sParam1));
}

bool func_1674(int iParam0, int iParam1)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	func_2289(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

int func_1675(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1676(var uParam0, int iParam1)
{
	func_485(&(uParam0->f_64), iParam1);
}

void func_1677(var uParam0, int iParam1)
{
	func_179(&(uParam0->f_64), iParam1);
}

bool func_1678(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

void func_1679(int iParam0, bool bParam1)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1069(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1068(iParam0, 16, 0);
		}
	}
	func_1068(iParam0, 1, bParam1);
}

void func_1680(int iParam0, var uParam1)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_1069(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_2290(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_1069(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_1069(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_1069(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_1069(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_2291(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_581(iParam0));
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
		if (bVar2 && !func_224(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_1069(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_1069(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_1069(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_351(iParam0, 0));
		}
	}
}

bool func_1681(int iParam0)
{
	return iParam0 != 0;
}

char* func_1682(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1218(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1218(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1683()
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
		iVar3 = func_2292(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1684(int iParam0, bool bParam1, float fParam2)
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
	iVar0 = func_2293(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_2294(iVar1, 1);
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
	return func_2295(iParam0, bParam1, fParam2);
}

bool func_1685(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

int func_1686(int iParam0, bool bParam1)
{
	if (!func_1047(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_2296(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

int func_1687(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_1047(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_2297(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_497((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_2298(iParam0, 3);
			}
			else
			{
				if (!func_2299(iParam0) && func_2300(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_1686(iParam0, 1), &uVar4);
				}
				func_1709(iParam0, 256, 0);
				func_2298(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_2301();
				}
				if (bParam2 && !func_422(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_2302(iParam0, vVar0, iParam6, iParam10))
				{
					return func_2301();
				}
				if (func_497((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_2298(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_497((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_2298(iParam0, 1);
				return func_2301();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_2298(iParam0, 3);
			}
			break;
		case 3:
			if (!func_497((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_2298(iParam0, 1);
				return func_2301();
			}
			if (bParam7)
			{
				if (!func_2303(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_2301();
				}
			}
			if ((bParam2 && !func_422(vVar0)) && !func_2304(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_927((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_1073(iParam0, 39, 1))
					{
					}
	}