void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	iLocal_29 = -1247606340;
	network_set_script_is_safe_for_network_game();
	_set_thread_priority(0);
	func_1(16);
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_2();
	while (!func_3(512))
	{
		wait(0);
	}
	func_4();
	func_5();
	while (!func_3(512))
	{
		wait(0);
	}
	func_6();
	func_7(16);
	while (Global_1572887->f_8)
	{
		wait(0);
	}
	while (!func_3(256))
	{
		wait(0);
	}
	network_set_script_ready_for_events(true);
	func_7(2);
	bVar0 = false;
	while (!bVar0)
	{
		bVar0 = _0x9e4ef615e307fbbe();
		func_8();
		Global_1955565->f_1 = (1 + Global_1955565->f_1);
		Global_1955565->f_2 = (get_frame_time() + Global_1955565->f_2);
		if ((&Global_1955565 - get_game_timer()) > 500)
		{
			Global_1955565->f_3 = (1f / (Global_1955565->f_2 / to_float(Global_1955565->f_1)));
			Global_1955565->f_1 = 0;
			Global_1955565->f_2 = 0f;
		}
		iVar1 = 0;
		while (iVar1 < 14)
		{
			Call_Loc(Local_505[iVar1]->f_1);
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < 18)
		{
			Call_Loc(Local_604[iVar2]->f_1);
			iVar2++;
		}
		func_9();
		func_10();
		wait(0);
	}
	func_11();
	while (!_0x380ffa15b72408fb(10))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Local_505[iVar0] = 1893;
		Local_505[iVar0]->f_1 = 1901;
		Local_505[iVar0]->f_2 = 1893;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Local_604[iVar0] = 1893;
		Local_604[iVar0]->f_1 = 1901;
		Local_604[iVar0]->f_2 = 1893;
		iVar0++;
	}
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4()
{
	func_16(1912, 1994, 1893, 0, "PLAYER(S)");
	func_16(2163, 2171, 2406, 1, "DISTRICT");
	func_16(1893, 2506, 1893, 2, "DEED LAUNCHER");
	func_16(3198, 3210, 1893, 3, "EVENT MONITOR");
	func_16(3506, 3522, 1893, 4, "LAW(S)");
	func_16(1893, 3652, 1893, 5, "SATCHEL");
	func_16(4126, 4138, 4286, 6, "PLAYERMENU");
	func_16(4294, 4437, 1893, 7, "HUD");
	func_16(5909, 5923, 6138, 8, "SKINNING");
	func_16(1893, 6153, 1893, 10, "FOCUS_VOLUME");
	func_16(1893, 6413, 6620, 11, "MISSION HANDLER(S)");
	func_16(1893, 1901, 6658, 12, "UI CLEANUP");
	func_16(1893, 6678, 1893, 13, "WORLD STATE SHORT");
}

void func_5()
{
	func_41(6737, 6763, 1893, 0, "RESPAWN");
	func_41(7620, 7628, 1893, 1, "MISSION REPLAY");
	func_41(7640, 7694, 8107, 4, "SHOP MANAGER");
	func_41(8146, 8443, 8992, 5, "TRANSLATE OVERLAY");
	func_41(9004, 9012, 1893, 6, "AMBUSH(S)");
	func_41(9546, 9554, 1893, 7, "SHOPROBBERY");
	func_41(9737, 9745, 9777, 2, "EA MANAGER(S)");
	func_41(1893, 9785, 1893, 3, "BEAT(S)");
	func_41(9801, 10325, 10738, 8, "SHOWS");
	func_41(10782, 10798, 10897, 9, "COMP MANAGER");
	func_41(10951, 10959, 11759, 10, "CARAVAN_DIRECTOR");
	func_41(11767, 11775, 11944, 11, "CAMP VIGNETTES");
	func_41(1893, 12027, 1893, 13, "CAMPFIRE_MANAGER_SHORT");
	func_41(12248, 12809, 13309, 14, "CHEAT_MANAGER_SHORT");
	func_41(13343, 13363, 13661, 15, "STAGE COACH");
	func_41(13681, 13697, 13713, 16, "MINIGAME PHOTO");
	func_41(1893, 13729, 14970, 17, "PLAYER CAMP FAST TRAVEL");
}

void func_6()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Call_Loc(&Local_505[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Call_Loc(&Local_604[iVar0]);
		iVar0++;
	}
}

void func_7(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

void func_8()
{
	Global_22 = 0;
	if (func_82() != -1)
	{
		return;
	}
	if (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false))
	{
		func_83(2);
	}
	if (func_84(player_id(), 1, 0, 1))
	{
		func_83(1);
	}
}

void func_9()
{
	if (_0x5060fa977cea4455())
	{
		if ((is_control_just_pressed(0, 1007304946) || is_control_just_pressed(0, 898989932)) || is_disabled_control_just_pressed(0, 1007304946))
		{
			if ((((_0xd6bd313cfa41e57a(2139949496) || _0xd6bd313cfa41e57a(-416594956)) || _get_number_of_references_of_script_with_name_hash(130487986) > 0) || (_get_number_of_references_of_script_with_name_hash(2011907525) > 0 && is_bit_set(&Global_1357505, 9))) || func_85())
			{
				set_bit(Global_1357505, 2);
			}
			else if (func_86())
			{
				if (func_87())
				{
					func_88();
				}
				else
				{
					set_bit(Global_1357505, 1);
				}
			}
		}
	}
	else if ((is_control_just_pressed(0, 1007304946) || is_control_just_pressed(0, 898989932)) || is_disabled_control_just_pressed(0, 898989932))
	{
		if (_0x43f35ddb2905d945(0, 1007304946))
		{
			if (func_86())
			{
				if (func_87())
				{
					func_88();
				}
			}
		}
	}
}

void func_10()
{
	if (_get_number_of_references_of_script_with_name_hash(778601866) == 0)
	{
		if (is_bit_set(&Global_1357505, 0))
		{
			if (!is_bit_set(&Global_1357505, 4))
			{
				func_89("CAM_PM_HELP_RESTRICTED", 10000, 0, 0, 0, 1);
				set_bit(Global_1357505, 4);
			}
		}
		if (is_bit_set(&Global_1357505, 1))
		{
			if (!is_bit_set(&Global_1357505, 5))
			{
				func_89("CAM_PM_HELP_DISABLED", 10000, 0, 0, 0, 1);
				set_bit(Global_1357505, 5);
			}
		}
		if (is_bit_set(&Global_1357505, 2))
		{
			if (!is_bit_set(&Global_1357505, 6))
			{
				func_89("CAM_PM_HELP_QL", 10000, 0, 0, 0, 1);
				set_bit(Global_1357505, 6);
			}
		}
		if (is_bit_set(&Global_1357505, 3))
		{
			if (!is_bit_set(&Global_1357505, 7))
			{
				func_90("CAM_CONG_PM", "MG_HELP_UPDATED", -546782298, 1694598986, get_hash_key("help_menu"), "INPUT_FEED_INTERACT_GENERIC", 1798635104, -2, 0, 0, 0, 0, 1, 1);
				set_bit(Global_1357505, 7);
			}
		}
	}
}

void func_11()
{
	func_91();
	network_set_script_ready_for_events(false);
	if (Global_1935630->f_3 != 0)
	{
		_0x00a15b94cba4f76f(Global_1935630->f_3);
	}
	if (_0x99f92061efe908ba())
	{
		_0x09fbf15d73efc900();
	}
}

void func_12()
{
}

void func_13()
{
	return;
}

void func_14()
{
	if (func_82() == -1)
	{
		func_92();
		func_93();
		func_94();
		func_95();
		func_96(8388608);
		if (does_blip_exist(get_main_player_blip_id()))
		{
			set_blip_name_from_text_file(get_main_player_blip_id(), "BLIP_PLAYER");
		}
		func_97();
		func_98();
		func_99();
		func_100();
	}
}

void func_15()
{
	func_101();
	func_102();
	func_103();
	Global_1913812 = 0;
	func_104();
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (is_ped_injured(Global_35))
	{
		if (Global_36605 != 0)
		{
			Global_36605 = 0;
		}
		return;
	}
	func_105();
	func_106();
	func_107();
	if (!Global_40.f_9421)
	{
		if (is_control_just_pressed(1, 2139949496))
		{
			Global_1430258 = get_game_timer();
		}
	}
	func_108();
	func_109();
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_505[iParam3] = iParam0;
	Local_505[iParam3]->f_1 = iParam1;
	Local_505[iParam3]->f_2 = iParam2;
	StringCopy(&(Local_505[iParam3]->f_3), sParam4, 24);
}

void func_17()
{
}

void func_18()
{
	if (func_110())
	{
		return;
	}
	func_83(8);
	func_111(Global_1897952->f_35);
	func_112(Global_1897952->f_35);
	Global_1897952->f_35++;
	if (Global_1897952->f_35 >= 17)
	{
		Global_1897952->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952->f_36 != -1)
	{
		if (Global_1897952->f_36 != func_113())
		{
			func_114(Global_1897952->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_115(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_113() != iVar1)
		{
			Global_1897952->f_37 = 1;
			if (func_114(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952->f_37 && !is_thread_active(Global_1897952->f_42, false)) && func_113() != -1)
		{
			func_114(func_113());
		}
		Global_1897952->f_37 = 0;
	}
}

void func_19()
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, func_116(iVar0), 64);
		if (!is_string_null_or_empty(&cVar1) && _get_number_of_references_of_script_with_name_hash(get_hash_key(&cVar1)) > 0)
		{
			func_117(&cVar1, 523);
		}
		iVar0++;
	}
	func_118(func_113());
	func_119(func_113());
	func_120();
	Global_1897952->f_41 = -1;
}

void func_20()
{
	iVar0 = func_82();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	func_121();
	func_122();
	bVar1 = func_123(&Global_1898439, 1);
	if (bVar1 || func_124())
	{
		if (!bVar1)
		{
			if (func_125(6208))
			{
				func_126(Global_1898439, 1);
				func_126(Global_1898439, 2);
			}
		}
		else if (!func_125(6208))
		{
			func_127(Global_1898439, 1);
		}
		if (func_123(&Global_1898439, 2))
		{
			if (func_128(0, 0, 0, 1))
			{
				func_127(Global_1898439, 2);
			}
			else
			{
				return;
			}
		}
	}
	if (&Global_1898439 != 0 && !func_123(&Global_1898439, 15))
	{
		Global_1898439 = 0;
	}
	if (func_129(1))
	{
		return;
	}
	if (func_130(128))
	{
		return;
	}
	bVar6 = func_130(4112);
	bVar7 = func_131(&Global_1935630, 2048);
	bVar8 = (func_132() || Global_1572864->f_3 & 4096 != 0);
	iVar4 = 0;
	while (iVar4 < &Global_1898329)
	{
		iVar5 = Global_1898330[iVar4];
		if (func_133(iVar5))
		{
			func_134(iVar4, 0);
			switch ((*Global_1898346)[iVar4]->f_3)
			{
				case 1:
					if (func_135(iVar4, bVar7, bVar8))
					{
						func_136(Global_1935630, 1);
						func_137();
						return;
					}
					break;
				case 4:
					if (!bVar9)
					{
						bVar10 = (func_138(player_id(), 1, 0, 1) || func_139());
						bVar9 = true;
					}
					if (func_140(iVar5, iVar4, (*Global_1898346)[iVar4]->f_4, (*Global_1898346)[iVar4]->f_5, bVar10))
					{
						func_136(Global_1935630, 2);
						return;
					}
					break;
				case 2:
					iVar2 = (*Global_1898346)[iVar4]->f_4;
					switch (iVar2)
					{
						case 1:
							if (func_141(iVar4))
							{
								return;
							}
							break;
						case 3:
							if (func_142(iVar4, bVar6, bVar7))
							{
								return;
							}
							break;
						case 6:
							if (func_143(iVar4))
							{
								return;
							}
							break;
						case 2:
							if (func_144(iVar4))
							{
								return;
							}
							break;
					}
					break;
				case 6:
					iVar3 = (*Global_1898346)[iVar4]->f_4;
					switch (iVar3)
					{
						case 0:
							if (func_145(iVar4))
							{
								return;
							}
							break;
					}
					break;
				case 8:
					if (func_146(iVar5, bVar6, bVar7))
					{
						func_137();
						return;
					}
					break;
				case 10:
					break;
				case 11:
					if (func_147(iVar5, iVar4))
					{
						func_137();
						return;
					}
					break;
				case 12:
					break;
				default:
					break;
			}
		}
		iVar4++;
	}
}

void func_21()
{
	func_148();
}

void func_22()
{
	func_149();
	func_150();
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		Global_1945917->f_19 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_151(iVar0);
			func_152(iVar0);
			func_153(iVar0);
			func_154(iVar0);
			func_155(iVar0);
			func_156(iVar0);
			func_157(iVar0);
			func_158(iVar0);
			func_159(iVar0);
			func_160(iVar0);
			func_161(iVar0);
			func_162(iVar0);
			func_163(iVar0);
			func_164(iVar0);
			iVar2 = get_event_at_index(0, iVar0);
			switch (iVar2)
			{
				case -140551285:
					func_165(iVar0);
					break;
				case -2091944374:
				case -1511724297:
				case -1312424871:
				case -369170747:
					func_166(iVar0);
					break;
				case 1387172233:
					func_167(iVar0);
					break;
				case 735942751:
					func_168(iVar0);
					break;
				case 1351025667:
				case 1669410864:
					func_169(iVar0);
					break;
			}
			iVar0++;
		}
	}
	iVar1 = get_number_of_events(3);
	if (iVar1 > 0)
	{
		iVar3 = 0;
		while (iVar3 < get_number_of_events(3))
		{
			func_170(iVar3);
			iVar3++;
		}
	}
}

void func_23()
{
	func_171();
	func_172();
}

void func_24()
{
	bVar0 = func_173();
	bVar1 = func_138(player_id(), 1, 0, 1);
	bVar2 = func_138(player_id(), 0, 0, 1);
	bVar3 = func_82() == -1;
	if (!bVar0)
	{
		func_174(bVar1);
		func_175();
		if (bVar3)
		{
			func_176(bVar1);
			func_177();
		}
		if (func_179(func_178()))
		{
			if (!is_screen_faded_out() && _get_bounty_for_player(player_id()) > Global_1935630->f_17)
			{
				_0xc310239acccf5579();
			}
		}
	}
	func_180(bVar2, bVar0);
}

void func_25()
{
	func_181();
	func_182();
	if (Global_1935630->f_44 == -160924582)
	{
		if (!func_183())
		{
			if (!func_184("binoculars"))
			{
				func_185();
			}
		}
	}
	func_186();
	func_187();
	if (Global_1935630->f_44 == -1016714371)
	{
		if (!func_188())
		{
			if (!func_184("camera_item"))
			{
				func_189();
			}
		}
	}
	if (Global_1935630->f_44 == 827679807)
	{
		if (func_82() == -1)
		{
			if (!func_190())
			{
				if (!func_184("electric_lantern"))
				{
					func_191();
				}
			}
		}
	}
	bVar0 = false;
	if (func_82() == 0 && func_192(2048, 255))
	{
		bVar0 = true;
	}
	if (!is_ped_injured(Global_35))
	{
		if (Global_1935630->f_44 == -1415022764)
		{
			if (!func_193(Global_35, 716706914))
			{
				if (func_194(bVar0))
				{
					func_195();
				}
			}
			if (!is_pause_menu_active() && func_196())
			{
				_0x2804658eb7d8a50b(1, -517219045);
			}
		}
		else if (func_197(1))
		{
			if (func_194(bVar0))
			{
				func_195();
			}
		}
	}
	if (!func_198())
	{
		Global_1935689->f_17 = 0;
		return;
	}
	bVar1 = &Global_1935689 == true;
	if (!bVar1)
	{
		if (func_199(&(Global_1935496->f_115[2]), 1))
		{
			bVar1 = true;
		}
	}
	if (bVar1 && !Global_1935689->f_1)
	{
		if (func_200(0) != 4)
		{
			if (!is_thread_active(Global_1935689->f_13, false))
			{
				request_script("satchel");
				Global_1935689->f_1 = 1;
				Global_1935689 = 0;
			}
		}
		else if (&Global_1935689 == 1)
		{
			Global_1935689 = 0;
		}
	}
	else if (Global_1935689->f_1 && !is_thread_active(Global_1935689->f_13, false))
	{
		if (has_script_loaded("satchel"))
		{
			Global_1935689->f_13 = start_new_script("satchel", 1024);
			set_script_as_no_longer_needed("satchel");
		}
	}
}

void func_26()
{
	func_201();
}

void func_27()
{
	_0x0a487cc74a517fb5(true);
	func_202();
	func_203();
	if (!func_204())
	{
		func_205(0);
		Global_1898068->f_4 = 0;
		return;
	}
	bVar0 = func_206();
	bVar1 = func_207();
	bVar2 = ((Global_1898068->f_4 || bVar0) && Global_1898068->f_3);
	if (bVar2 && !bVar1)
	{
		disable_all_control_actions(0);
		disable_all_control_actions(2);
	}
	if ((_is_app_active(1433015236) || bVar2) || bVar1)
	{
		if (bVar0)
		{
			func_208(0);
		}
		func_209();
	}
}

void func_28()
{
}

void func_29()
{
	Global_1935496->f_123 = func_210(-569063887, 0, 0) >= 1;
	Global_1935496->f_124 = func_210(1259508039, 0, 0) >= 1;
	func_211();
	func_212();
	func_213();
	func_214();
	func_215();
	func_216();
	if (func_82() != -1)
	{
		return;
	}
	func_217();
	if (!Global_40)
	{
		func_218(0);
	}
	else
	{
		func_218(func_219());
	}
	Global_1347398 = 3000;
	_databinding_add_data_bool_from_path("", "bAllowedToReplay", 0);
	_databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
}

void func_30()
{
	if (Global_43891)
	{
		_0xc9caeaeec1256e54(1023137905);
	}
	Global_1935496->f_25 = 0;
	if (Global_1935630->f_12)
	{
		func_220(&(Global_1935496->f_114));
		return;
	}
	if ((get_frame_count() % 30) == 0)
	{
		Global_1935496->f_123 = _0xe787f05dfc977bde(func_221(0), -569063887, 0) >= 1;
		Global_1935496->f_124 = _0xe787f05dfc977bde(func_221(0), 1259508039, 0) >= 1;
		Global_1935496->f_125 = _0xe787f05dfc977bde(func_221(0), -1838434463, 0) >= 1;
		Global_1935496->f_126 = _0xe787f05dfc977bde(func_221(0), 2019377485, 0) >= 1;
	}
	if (_event_manager_is_event_pending(746131100) && _event_manager_peek_event(746131100, &vVar0))
	{
		if (vVar0.x == -1740156697)
		{
			bVar4 = true;
		}
	}
	if ((((((get_frame_count() % 30) == 0 || is_control_just_pressed(2, -2131587435)) || is_control_just_pressed(2, 1287709438)) || is_control_just_pressed(2, -209515122)) || is_control_just_pressed(2, -1046962283)) || Global_1935496->f_127)
	{
		Global_1935496->f_127 = 0;
		iVar26 = _0x0501d52d24ea8934(1);
		bVar25 = true;
		func_222(&uVar5, iVar26, 1);
	}
	func_223();
	if (!bVar25)
	{
		iVar26 = _0x0501d52d24ea8934(1);
		bVar25 = true;
	}
	func_224(&uVar5, iVar26);
	if (Global_1935496->f_18)
	{
		set_ped_reset_flag(Global_35, 103, true);
	}
	iVar27 = Global_1935496->f_30;
	Global_1935496->f_30 = _0x9c409bbc492cb5b1();
	if (bVar4)
	{
		func_225(&(Global_1935496->f_40.f_9), iVar26);
	}
	bVar28 = false;
	if ((Global_1935496->f_10 || Global_1935496->f_11) || Global_1935496->f_12)
	{
		bVar28 = true;
	}
	if (bVar28)
	{
		func_220(&(Global_1935496->f_114));
		disable_control_action(0, -17122892, false);
		disable_control_action(0, -874806616, false);
		if (!Global_1935496->f_17)
		{
			Global_1935496->f_17 = 1;
			func_226();
		}
	}
	else if (Global_1935496->f_17)
	{
		Global_1935496->f_17 = 0;
	}
	if (bVar28 || bVar4)
	{
		if (((((!Global_1935496->f_15 && func_227(&uVar5, iVar26, 0, 18606208)) && !is_ped_sitting_in_any_vehicle(Global_35)) && !_0xec7e480ff8bd0bed(Global_35)) && !is_ped_reloading(Global_35)) && !func_228())
		{
			if (!Global_1935496->f_16 || bVar4)
			{
				func_229(1);
			}
		}
		else if (Global_1935496->f_16 || bVar4)
		{
			func_229(0);
		}
	}
	if (func_230())
	{
		return;
	}
	if (!Global_1935496->f_10 && (Global_1935496->f_11 || Global_1935496->f_12))
	{
		if (!is_task_move_network_active(Global_35))
		{
			Global_1935496->f_8 = 0;
		}
	}
	if (iVar27 != Global_1935496->f_30)
	{
		if (func_231(Global_1935496->f_30, 0))
		{
			if (func_232(Global_1935496->f_30) == 2085633299 && func_233(Global_1935496->f_30))
			{
				if (Global_1935496->f_12)
				{
				}
				else
				{
					func_234(Global_1935496->f_30, 1, 0, 0, 1, 1, 0);
				}
			}
		}
	}
	func_235();
	func_236();
	func_237();
	while (_event_manager_is_event_pending(746131100))
	{
		if (_event_manager_peek_event(746131100, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1740156697:
					switch (vVar0.z)
					{
						case 813560150:
							if ((Global_1935496->f_15 || !func_238()) || is_ped_reloading(Global_35))
							{
								func_229(0);
							}
							Global_1935496->f_10 = 1;
							func_222(&uVar5, iVar26, 1);
							func_239(0);
							break;
						case -414255251:
							func_240();
							func_241(0);
							Global_1935496->f_11 = 1;
							func_222(&uVar5, iVar26, 1);
							func_239(0);
							break;
						case -1472057397:
							Global_1935496->f_12 = 1;
							func_222(&uVar5, iVar26, 1);
							func_239(0);
							break;
						case -1992626253:
							Global_1935496->f_13 = 1;
							func_222(&uVar5, iVar26, 1);
							func_239(0);
							break;
						default:
							break;
					}
					break;
				case -632467210:
					switch (vVar0.z)
					{
						case 813560150:
							Global_1935496->f_10 = 0;
							break;
						case -414255251:
							Global_1935496->f_11 = 0;
							break;
						case -1472057397:
							Global_1935496->f_12 = 0;
							break;
						case -1992626253:
							Global_1935496->f_13 = 0;
							break;
						default:
							break;
					}
					break;
				case -1203660660:
					switch (vVar0.z)
					{
						case -445375936:
							func_240();
							func_222(&uVar5, iVar26, 1);
							func_239(0);
							break;
						case -1472057397:
							func_242(vVar0.z, 0);
							break;
						case 545934563:
							Global_1935496->f_25 = 1;
							break;
						default:
							func_243(vVar0.z, 0);
							break;
					}
					break;
				default:
					break;
			}
			_event_manager_pop_event(746131100);
		}
	else
	{
		}
	else
	{
		}
	}
	bVar29 = _0x51bea356b1c60225(get_player_index(), 35);
	if (bVar29)
	{
		iVar30 = func_244();
		if (iVar30 != 0 && iVar30 != Global_1935496->f_54)
		{
			Global_1935496->f_54 = iVar30;
			iVar31 = get_ped_index_from_entity_index(iVar30);
			func_245(iVar31, _0x964000d355219fc0(iVar31), 1, 0);
		}
	}
	else if (Global_1935496->f_54 == 0)
	{
	}
	if (Global_1935496->f_23 && bVar29)
	{
		if (!func_246(&(Global_1935496->f_40)))
		{
			func_247(&(Global_1935496->f_40));
		}
		if (func_248(&(Global_1935496->f_40)))
		{
			if (func_249(&(Global_1935496->f_40)))
			{
				func_250(&(Global_1935496->f_40));
			}
		}
	}
	else if ((!bVar29 || !Global_1935496->f_23) && Global_1935496->f_6 != get_game_timer())
	{
		if (func_246(&(Global_1935496->f_40)))
		{
			func_251(&(Global_1935496->f_40));
		}
		Global_1935496->f_23 = 0;
		_0xdc68829bb3f37023(get_player_index(), 0);
	}
}

void func_31()
{
	func_252(&Local_32);
}

void func_32()
{
	if (func_253(&Local_32) != 0)
	{
		if ((does_entity_exist(Local_32.f_16) && _0xf8b48a361dc388ae(get_ped_index_from_entity_index(Local_32.f_16)) == 2) && func_254(Global_35))
		{
			disable_control_action(0, -668070958, false);
			disable_control_action(0, 1250966545, false);
		}
	}
	switch (func_253(&Local_32))
	{
		case 0:
			func_255(&Local_32);
			break;
		case 1:
			func_256(&Local_32);
			break;
		case 2:
			func_257(&Local_32);
			break;
		case 3:
			func_258(&Local_32);
			break;
		case 4:
			func_259(&Local_32);
			break;
		case 5:
			func_260(&Local_32);
			break;
		case 6:
			func_261(&Local_32, 0);
			break;
		case 7:
		default:
			break;
	}
	func_262(&Local_32);
}

void func_33()
{
	func_261(&Local_32, 1);
}

void func_34()
{
	iVar0 = func_263();
	iVar1 = 0;
	iVar2 = -1;
	if (!is_entity_dead(iVar0))
	{
		iVar2 = func_264(0, 0);
		if (func_265(iVar2, 1, 1))
		{
			iVar1 = get_mount(iVar0);
			if (!func_266(iVar2, 2))
			{
				if (!does_entity_exist(iVar1) || is_entity_dead(iVar1))
				{
					set_ped_max_move_blend_ratio(iVar0, 1f);
				}
				else
				{
					set_ped_max_move_blend_ratio(iVar1, 1.25f);
				}
			}
			set_ped_reset_flag(Global_35, 188, true);
			if (!func_266(iVar2, 4))
			{
				disable_control_action(0, -128997553, false);
			}
			if (func_266(iVar2, 256))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
			}
			if (func_266(iVar2, 2048))
			{
				disable_control_action(0, -640622144, false);
				disable_control_action(0, -1437157082, false);
				disable_control_action(0, -455946723, false);
			}
			if (func_266(iVar2, 1024) || func_266(iVar2, 512))
			{
				enable_control_action(0, -124244224, true);
			}
		}
	}
}

void func_35()
{
	if (func_82() == -1)
	{
		Global_1879513 = &Global_1879513 + 1;
		if (&Global_1879513 > 77)
		{
			Global_1879513 = 0;
		}
		if ((*Global_1835011)[&Global_1879513]->f_7 != 0 && !_does_thread_exist((*Global_1835011)[&Global_1879513]->f_7))
		{
			(*Global_1835011)[&Global_1879513]->f_7 = 0;
		}
		if (func_267(&Global_1879513))
		{
			func_269(&Global_1879513, vdist2(func_268(&Global_1879513), Global_36));
		}
	}
	else
	{
		Global_1879513 = &Global_1879513 + 1;
		if (&Global_1879513 > 24)
		{
			Global_1879513 = 0;
		}
		if ((*Global_1835011)[&Global_1879513]->f_7 != 0 && !_does_thread_exist((*Global_1835011)[&Global_1879513]->f_7))
		{
			(*Global_1835011)[&Global_1879513]->f_7 = 0;
		}
	}
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 80)
	{
		(*Global_1835011)[iVar0]->f_7 = 0;
		iVar0++;
	}
}

void func_37()
{
	if (!_0x9eeb007317fa3b9c())
	{
		_close_all_apps();
	}
}

void func_38()
{
	if (func_110())
	{
		return;
	}
	if (_does_scenario_point_exist(&Global_1913813))
	{
		_0x5a40040bb5ae3ea2(&Global_1913813);
	}
	Global_1913813 = 0;
	if (Global_1934765->f_273)
	{
		return;
	}
	func_270();
}

void func_39()
{
	func_271();
	Global_1310720->f_23 = 0;
	Global_1310720->f_21 = -1;
}

void func_40()
{
	if (!func_3(64) && !func_130(32))
	{
		return;
	}
	if (func_272(-1 ^ 265, 1, 1))
	{
		return;
	}
	if (is_screen_faded_out())
	{
		if (func_273())
		{
			return;
		}
	}
	if ((&Global_1347343 != -1 || func_130(34)) || func_274(Global_1347343->f_2))
	{
		return;
	}
	if (network_is_game_in_progress() || Global_1572887->f_8)
	{
		return;
	}
	if (Global_1572864->f_21 > 0 && Global_1572864->f_21 <= 15)
	{
		func_275();
	}
	if (!is_radar_hidden() && !func_132())
	{
		if (!func_276(Global_1310720->f_18))
		{
			Global_1310720->f_18 = { 0f, 0f, 0f };
		}
	}
	if (Global_1310720->f_11)
	{
		_0x9428447ded71fc7e("DEATH_FAIL_RESPAWN_SCENES");
		Global_1310720->f_11 = 0;
	}
	func_277();
	switch (func_278())
	{
		case 0:
			if (is_ped_dead_or_dying(Global_35, true))
			{
				func_279(1);
				if (Global_1310720->f_24 == -1569615261)
				{
					get_current_ped_weapon(Global_35, &(Global_1310720->f_24), true, 0, false);
				}
			}
			if (is_screen_faded_out())
			{
				if (!is_player_playing(player_id()))
				{
					func_136(Global_1935630, 4096);
					pause_death_arrest_restart(false);
					ignore_next_restart(true);
					set_player_invincible(player_id(), true);
					force_cleanup(2048);
					func_280();
					_0x55f37f5f3f2475e1();
					_0x062b4a4a3396351d(player_id());
					func_281(0);
					func_279(1);
					iVar2 = func_178();
					if (func_282(iVar2))
					{
						if (Global_23118[iVar2]->f_10 < 10)
						{
							Global_23118[iVar2]->f_10 = 0;
						}
					}
					func_283();
					func_284(1);
					_0x9428447ded71fc7e("KNOCKOUT_FAIL_RESPAWN_SCENES");
					if (Global_1935630->f_22)
					{
						Global_1934266->f_59 = 1;
						_0x9428447ded71fc7e("Arrest_Fail_Respawn_Scenes");
						func_285();
						func_286(0);
					}
					else
					{
						_0xac84686c06184b0d("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SCENES");
						play_sound_frontend("FADE_TO_BLACK_OFF_MISSION", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
						iVar3 = get_ped_source_of_death(Global_35);
						if (does_entity_exist(iVar3))
						{
							if (is_entity_a_ped(iVar3))
							{
								if (is_ped_human(get_ped_index_from_entity_index(iVar3)))
								{
									if (get_ped_index_from_entity_index(iVar3) != Global_35)
									{
										if (Global_1310720->f_16 + 3600000) < get_game_timer()
										{
											Global_1310720->f_15 = 0;
										}
										Global_1310720->f_15++;
										Global_1310720->f_12 = 1;
										if (get_ped_relationship_group_hash(get_ped_index_from_entity_index(iVar3)) == 1222652248)
										{
											Global_1310720->f_13 = 1;
										}
										if (get_ped_relationship_group_hash(get_ped_index_from_entity_index(iVar3)) == 707888648 && func_287(player_id()))
										{
											Global_1310720->f_14 = 1;
										}
									}
								}
							}
						}
						Global_1310720->f_7 = 1;
						Global_1310720->f_16 = get_game_timer();
						Global_1310720->f_17 = get_clock_hours();
						iVar0 = func_288(Global_36, 1);
						if (Global_1310720->f_21 == iVar0 && Global_1310720->f_21 != -1)
						{
							Global_1310720->f_23++;
						}
						else
						{
							Global_1310720->f_23 = 0;
						}
						iVar1 = func_113();
						Global_1310720->f_22 = iVar1;
						if (_is_weapon_two_handed(Global_1310720->f_24))
						{
							Global_40.f_9.f_12 = 1;
						}
						if (!func_289())
						{
							func_290(Global_36);
						}
					}
				}
			}
			break;
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_604[iParam3] = iParam0;
	Local_604[iParam3]->f_1 = iParam1;
	Local_604[iParam3]->f_2 = iParam2;
	StringCopy(&(Local_604[iParam3]->f_3), sParam4, 24);
}

void func_42()
{
}

void func_43()
{
	func_291();
}

void func_44()
{
	func_292();
	Global_1914319->f_18590 = get_frame_count();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_1914319->f_15927[iVar0] = -1;
		iVar0++;
	}
}

void func_45()
{
	if (Global_1572887->f_8 || func_110())
	{
		return;
	}
	if (Global_1911914->f_1581 || Global_1911914->f_1582)
	{
		return;
	}
	iVar0 = func_178();
	if (Global_1914319->f_18748 != iVar0)
	{
		func_293(iVar0);
		if (Global_1914319->f_3[9]->f_10 != -1)
		{
			func_294(Global_1914319->f_3[9]->f_10, 0);
			func_295(9, 268435456);
			if (func_296(Global_1914319->f_3[9]->f_10))
			{
				func_297(&(Global_1914319->f_17042));
			}
		}
		Global_1914319->f_18748 = iVar0;
	}
	func_298();
	func_299();
	func_300();
	func_301();
	func_302();
	func_303();
	if (!func_304(&iVar1, &iVar2, iVar0))
	{
		func_305();
		return;
	}
	if (!func_306(iVar1))
	{
		if (!func_307(iVar1))
		{
			return;
		}
	}
	bVar3 = Global_1914319->f_15923 != -1;
	if (!func_308(iVar1) || !func_309(iVar2))
	{
		if (bVar3)
		{
			Global_1914319->f_15923 = -1;
		}
		else
		{
			func_305();
		}
		if (iVar1 == 9 && !func_310(iVar2, 8388608))
		{
			func_311(iVar1, iVar2, 3, 1, 0, 0, 1);
		}
		return;
	}
	if (!bVar3 && (get_frame_count() - Global_1914319->f_18590) <= 3)
	{
		return;
	}
	func_312(iVar1, iVar2);
	func_313(iVar1);
	func_314(iVar1, iVar2);
	if (bVar3)
	{
		Global_1914319->f_15923 = -1;
	}
	else
	{
		func_305();
	}
	Global_1914319->f_18590 = get_frame_count();
	func_315();
}

void func_46()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_316(iVar0);
		func_317(iVar0);
		iVar0++;
	}
}

void func_47()
{
	func_318();
	uVar0 = _databinding_add_data_container_from_path("", "Translate");
	uVar0 = _databinding_add_data_container(uVar0, "Generic");
	uVar1 = _databinding_add_data_container(uVar0, "textField0");
	uVar2 = _databinding_add_data_hash(uVar1, "text", 0);
	uVar3 = _databinding_add_data_hash(uVar1, "style", 0);
	uVar4 = _databinding_add_data_container(uVar0, "divider0");
	uVar5 = _databinding_add_data_bool(uVar4, "isVisible", false);
	uVar6 = _databinding_add_data_container(uVar0, "textField1");
	uVar7 = _databinding_add_data_hash(uVar6, "text", 0);
	uVar8 = _databinding_add_data_hash(uVar6, "style", 0);
	uVar9 = _databinding_add_data_container(uVar0, "divider1");
	uVar10 = _databinding_add_data_bool(uVar9, "isVisible", false);
	uVar11 = _databinding_add_data_container(uVar0, "textField2");
	uVar12 = _databinding_add_data_hash(uVar11, "text", 0);
	uVar13 = _databinding_add_data_hash(uVar11, "style", 0);
	uVar14 = _databinding_add_data_container(uVar0, "divider2");
	uVar15 = _databinding_add_data_bool(uVar14, "isVisible", false);
	Global_1933981 = uVar2;
	Global_1933981->f_1 = uVar3;
	Global_1933981->f_2 = uVar5;
	Global_1933981->f_3 = uVar7;
	Global_1933981->f_4 = uVar8;
	Global_1933981->f_5 = uVar10;
	Global_1933981->f_6 = uVar12;
	Global_1933981->f_7 = uVar13;
	Global_1933981->f_8 = uVar15;
}

void func_48()
{
	if (does_entity_exist(Global_35) && !is_entity_dead(Global_35))
	{
		if (func_319())
		{
			if (Global_1933981->f_9 != -1)
			{
				iVar0 = Global_1933981->f_9;
				if (Global_1933981->f_13[iVar0]->f_10 == -1 || !func_320(Global_1933981->f_13[iVar0]->f_10))
				{
					switch (Global_1933981->f_13[iVar0]->f_9)
					{
						case 1:
							if (!func_321(Global_1933981->f_13[iVar0]->f_8))
							{
								if (_does_volume_exist(Global_1933981->f_13[iVar0]->f_7))
								{
									Global_1933981->f_13[iVar0]->f_8 = func_322("READ", -69749786, Global_1933981->f_13[iVar0]->f_7, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
								}
								else
								{
									Global_1933981->f_13[iVar0]->f_8 = func_323("READ", -69749786, *Global_1933981->f_13[iVar0], 1070386381, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
								}
								if (Global_1933981->f_13[iVar0]->f_6 != -1)
								{
									func_324(Global_1933981->f_13[iVar0]->f_8, Global_1933981->f_13[iVar0]->f_6, 0, 1);
								}
							}
							else
							{
								func_325(&(Global_1933981->f_13[iVar0]->f_9), 2);
							}
							break;
						case 2:
							if (func_321(Global_1933981->f_13[iVar0]->f_8))
							{
								if (func_326(Global_1933981->f_13[iVar0]->f_8, 1))
								{
									func_327(&(Global_1933981->f_13[iVar0]->f_8), 1, 1);
									if (!func_328())
									{
										if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
										{
											func_329(Global_1933981->f_13[iVar0]);
										}
									}
									func_325(&(Global_1933981->f_13[iVar0]->f_9), 3);
								}
							}
							else
							{
								func_325(&(Global_1933981->f_13[iVar0]->f_9), 1);
							}
							break;
						case 3:
							if (!func_328())
							{
								func_325(&(Global_1933981->f_13[iVar0]->f_9), 1);
							}
							break;
					}
				}
			}
		}
		else
		{
			func_330();
		}
	}
	else
	{
		func_330();
	}
}

void func_49()
{
	func_330();
}

void func_50()
{
}

void func_51()
{
	if (func_124())
	{
		iVar0 = 0;
		iVar1 = 43;
		if (Global_1393447->f_71 < iVar0 || Global_1393447->f_71 > iVar1)
		{
			Global_1393447->f_71 = iVar0;
		}
		Global_1393447->f_4[Global_1393447->f_71] = 0;
		Global_1393447->f_71++;
		return;
	}
	iVar2 = func_113();
	iVar3 = func_331(iVar2, 0, 0, 0);
	iVar0 = func_332(iVar3);
	iVar1 = func_333(iVar3);
	if (Global_1393447->f_71 < iVar0 || Global_1393447->f_71 > iVar1)
	{
		Global_1393447->f_71 = iVar0;
	}
	Global_1393447->f_4[Global_1393447->f_71] = func_334(Global_1393447->f_71);
	if (iVar2 == 9)
	{
	}
	else if (iVar3 == 4)
	{
		Global_1393447->f_4[26] = func_334(26);
	}
	Global_1393447->f_71++;
	if (Global_1393447->f_71 < iVar0 || Global_1393447->f_71 > iVar1)
	{
		Global_1393447->f_71 = iVar0;
	}
	iVar0 = func_332(-1);
	iVar1 = func_333(-1);
	if (Global_1393447->f_72 < iVar0 || Global_1393447->f_72 > iVar1)
	{
		Global_1393447->f_72 = iVar0;
	}
	Global_1393447->f_4[Global_1393447->f_72] = func_334(Global_1393447->f_72);
	Global_1393447->f_72++;
	if (Global_1393447->f_72 < iVar0 || Global_1393447->f_72 > iVar1)
	{
		Global_1393447->f_72 = iVar0;
	}
	if (iVar2 == 10)
	{
		if (func_335() == 6 && !func_336())
		{
			iVar0 = func_332(10);
			iVar1 = func_333(10);
			if (Global_1393447->f_73 < iVar0 || Global_1393447->f_73 > iVar1)
			{
				Global_1393447->f_73 = iVar0;
			}
			Global_1393447->f_4[Global_1393447->f_73] = func_334(Global_1393447->f_73);
			Global_1393447->f_73++;
			if (Global_1393447->f_73 < iVar0 || Global_1393447->f_73 > iVar1)
			{
				Global_1393447->f_73 = iVar0;
			}
		}
	}
}

void func_52()
{
}

void func_53()
{
	if (Global_1572887->f_8)
	{
		return;
	}
	iVar0 = &Global_1393521;
	iVar1 = Global_1914319->f_3[iVar0]->f_10;
	iVar2 = func_337(iVar1);
	if (Global_1393521->f_2)
	{
		return;
	}
	if (Global_1914319->f_17371)
	{
		return;
	}
	else
	{
		func_338(iVar0, iVar1);
	}
	func_339(iVar0, iVar1, iVar2);
	if (func_340(iVar0, iVar1))
	{
		if (!func_341(iVar0, iVar1))
		{
			if (func_342(iVar0, iVar1))
			{
				func_343(iVar0, iVar1);
			}
			else if (func_344(iVar0, iVar1))
			{
				func_345(iVar0, iVar1);
			}
		}
	}
	Global_1393521 = &Global_1393521 + 1;
	if (&Global_1393521 >= 25)
	{
		Global_1393521 = 0;
	}
}

void func_54()
{
}

void func_55()
{
	func_346();
	func_347();
	func_348();
	func_349();
	func_350();
	func_351();
}

void func_56()
{
}

void func_57()
{
	func_352();
	func_353();
}

void func_58()
{
	func_354(0, 0);
	func_354(1, 0);
	func_354(4, 0);
	func_354(2, 0);
	func_354(3, 0);
	func_354(5, 0);
	func_354(6, 0);
	func_354(7, 0);
	func_354(8, 0);
	func_354(9, 0);
	func_354(10, 0);
	func_354(11, 0);
	func_354(12, 0);
	func_354(13, 0);
	func_354(14, 0);
	func_354(15, 0);
	func_354(16, 0);
	func_354(17, 0);
	func_354(18, 0);
	func_354(19, 0);
	func_354(20, 0);
	func_354(21, 1);
	func_354(22, 1);
	func_354(23, 1);
	func_354(24, 1);
	func_354(25, 1);
	func_354(26, 2);
	func_354(27, 2);
	func_354(28, 2);
	func_354(29, 2);
	func_354(30, 2);
	func_354(31, 3);
	func_354(32, 3);
	func_354(33, 3);
	func_354(34, 3);
	func_354(35, 3);
	func_354(36, 4);
	func_354(37, 4);
	func_354(38, 4);
	func_354(39, 4);
	func_354(40, 4);
	if (&Global_40.f_9028[0] < 0 || &Global_40.f_9028[0] > 3)
	{
		Global_40.f_9028[0] = 0;
	}
	if (&Global_40.f_9028[1] < 21 || &Global_40.f_9028[1] > 25)
	{
		Global_40.f_9028[1] = 21;
	}
	if (&Global_40.f_9028[2] < 26 || &Global_40.f_9028[2] > 29)
	{
		Global_40.f_9028[2] = 26;
	}
	if (&Global_40.f_9028[3] < 31 || &Global_40.f_9028[3] > 35)
	{
		Global_40.f_9028[3] = 31;
	}
	if (&Global_40.f_9028[4] < 36 || &Global_40.f_9028[4] > 36)
	{
		Global_40.f_9028[4] = 36;
	}
	Global_1394141->f_2 = 2;
	func_126(&(Global_1394141->f_1326), 128);
}

void func_59()
{
	iVar0 = Global_1894899->f_2;
	func_355();
	if ((get_frame_count() % 30) == 0)
	{
		func_356(iVar0);
		Global_1394141->f_1340 = func_357(36);
		switch (iVar0)
		{
			case 76:
				func_358();
				Global_1394141->f_1337 = 3;
				break;
			case 38:
				Global_1394141->f_1337 = 4;
				break;
			case 5:
				if (Global_1394141->f_1337 == 0)
				{
					func_359();
					func_360();
				}
				else if (func_361(45))
				{
					func_362();
				}
				else
				{
					func_363();
				}
				if (Global_1394141->f_1337 < 0 || Global_1394141->f_1337 > 2)
				{
					Global_1394141->f_1337 = 0;
				}
				break;
			default:
				Global_1394141->f_1337 = -1;
				return;
		}
	}
	if (!func_364(Global_1394141->f_1337, &iVar1, &iVar2))
	{
		return;
	}
	if (&Global_40.f_9028[Global_1394141->f_1337] < iVar1 || &Global_40.f_9028[Global_1394141->f_1337] > iVar2)
	{
		Global_40.f_9028[Global_1394141->f_1337] = iVar1;
	}
	if (&Global_40.f_9028[Global_1394141->f_1337] != -1)
	{
		if (func_365(&(Global_40.f_9028[Global_1394141->f_1337]), Global_1394141->f_1337))
		{
			func_366(&(Global_40.f_9028[Global_1394141->f_1337]));
		}
		else
		{
			func_367(&(Global_40.f_9028[Global_1394141->f_1337]));
		}
	}
	if (iVar0 == 5)
	{
		Global_1394141->f_1337++;
		if (Global_1394141->f_1337 > 2)
		{
			Global_1394141->f_1337 = 0;
		}
	}
}

void func_60()
{
	if (func_82() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 41)
	{
		func_368(iVar0);
		iVar0++;
	}
}

void func_61()
{
	func_369();
	func_370();
}

void func_62()
{
	Global_1359489->f_12 = 0;
	Global_1359489->f_13 = 0;
	func_371();
	if (func_372(Global_1359489->f_10, 30, 1))
	{
		if (func_373(Global_1359489->f_10, 0))
		{
			func_374(Global_1359489->f_10);
		}
		func_375(Global_1359489->f_10, 30, 1);
	}
	func_376();
	func_377();
	func_378();
	func_379();
	func_380();
}

void func_63()
{
	if (func_82() == -1)
	{
		if (_text_database_has_loaded("COMP"))
		{
			_text_database_delete("COMP");
		}
		if (_text_database_has_loaded("CMPI"))
		{
			_text_database_delete("CMPI");
		}
	}
}

void func_64()
{
}

void func_65()
{
	switch (&Global_1359453)
	{
		case 0:
			if (!func_381())
			{
				return;
			}
			if (func_382() <= 0)
			{
				Global_1357549->f_1406 = 0;
			}
			if (func_383(256))
			{
				func_384(0, 0, 0, 0, 1);
				func_385(256);
			}
			if (&Global_1879534)
			{
				return;
			}
			if (Global_1359453->f_2 == 1)
			{
				return;
			}
			if (Global_1357549->f_1404)
			{
				func_386(0, -1);
			}
			func_387(1);
			break;
		case 1:
			if (Global_1357549->f_1404)
			{
			}
			Global_1359453->f_3 = 0;
			Global_1359453->f_25 = 0;
			Global_1359453->f_15 = 0;
			Global_1359453->f_28 = 0;
			Global_1359453->f_29 = 0;
			Global_1357549->f_577 = func_388(func_335());
			func_387(2);
		case 2:
			if (func_389())
			{
				bVar0 = vdist2(Global_36, func_390(func_335())) < 62500f;
				if (func_391(32768))
				{
					func_392(128);
				}
				if (bVar0 || Global_1357549->f_1404)
				{
					func_387(3);
				}
				else
				{
					func_387(9);
				}
			}
			break;
		case 3:
			func_393(&(Global_40.f_4283.f_6));
			func_394();
			if (Global_1357549->f_1404)
			{
				Global_1357549->f_579 = func_395(4);
				func_387(4);
			}
			else
			{
				func_387(5);
			}
			break;
		case 4:
			if (func_396())
			{
				if (Global_1357549->f_1404)
				{
					Global_1359453->f_27 = 1;
				}
				func_397(&(Global_1359453->f_33), 1);
				func_387(5);
			}
			break;
		case 5:
			if (!Global_1359453->f_27 || func_398(&(Global_1359453->f_33)) > 5f)
			{
				func_399(&(Global_1359453->f_33));
				Global_1359453->f_27 = 0;
				func_387(8);
			}
			break;
		case 8:
			if ((Global_1359453->f_3 >= 10 || &Global_1359453->f_4[Global_1359453->f_3] == -1) || func_400())
			{
				func_387(9);
			}
			else
			{
				if (!func_401(&(Global_1359453->f_33)))
				{
					func_397(&(Global_1359453->f_33), 1);
				}
				if (Global_1359453->f_15 > 0)
				{
					if (Global_1359453->f_15 == 1)
					{
						Global_1359453->f_16[&Global_1359453->f_4[Global_1359453->f_3]] = &Global_1359453->f_16[&Global_1359453->f_4[Global_1359453->f_3]] + 1;
						Global_1359453->f_24++;
					}
					func_402();
				}
				else if (func_398(&(Global_1359453->f_33)) > 10f)
				{
					Global_1359453->f_15 = 4;
					func_402();
				}
			}
			break;
		case 9:
			if (!func_401(&(Global_1359453->f_30)))
			{
				iVar1 = 0;
				while (iVar1 < 7)
				{
					iVar1++;
				}
				func_397(&(Global_1359453->f_30), 1);
			}
			if (func_398(&(Global_1359453->f_30)) >= 1f)
			{
				func_399(&(Global_1359453->f_30));
				if (func_383(128))
				{
					if (!func_383(512) || !func_404(func_403()))
					{
						func_392(256);
						func_385(128);
					}
				}
				Global_1357549->f_1404 = 0;
				func_387(0);
			}
			break;
	}
}

void func_66()
{
}

void func_67()
{
}

void func_68()
{
	switch (func_405())
	{
		case 1:
			if (func_406())
			{
				func_407();
				func_408(2);
			}
			break;
		case 2:
			if (func_409())
			{
				func_408(3);
			}
			break;
		case 5:
			if (func_410() && func_411() < 2)
			{
				func_412();
			}
			break;
		case 3:
			if (func_413())
			{
				Global_1359453->f_27 = 0;
				func_414();
				func_408(4);
			}
			break;
		case 4:
			if (func_415())
			{
				func_408(5);
			}
			break;
		case 6:
			if (func_416())
			{
				func_408(5);
			}
			break;
	}
}

void func_69()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (is_thread_active(Global_1327590->f_19547[iVar0]->f_2, false))
		{
			terminate_thread(Global_1327590->f_19547[iVar0]->f_2);
		}
		iVar0++;
	}
	func_417();
	Global_1327590->f_19621 = -1;
}

void func_70()
{
	if (Global_1393237->f_11[Global_1393237->f_207]->f_26 < 1f && Global_1393237->f_11[Global_1393237->f_207]->f_26 != -1f)
	{
		iVar0 = get_game_timer();
		fVar1 = (IntToFloat((iVar0 - Global_1393237->f_11[Global_1393237->f_207]->f_25)) / 5000f);
		if (fVar1 > 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar1 < 0f)
		{
			fVar1 = 0f;
		}
		Global_1393237->f_11[Global_1393237->f_207]->f_26 = fVar1;
		set_particle_fx_looped_alpha(Global_1393237->f_11[Global_1393237->f_207]->f_22, Global_1393237->f_11[Global_1393237->f_207]->f_26);
	}
	if (func_418(Global_1393237->f_207, 8388608))
	{
		func_419(Global_1393237->f_207);
	}
	Global_1393237->f_207++;
	if (Global_1393237->f_207 > 5)
	{
		Global_1393237->f_207 = 0;
	}
}

void func_71()
{
	if (func_130(32800))
	{
		return;
	}
	func_420(Global_1425247);
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				func_421();
				break;
			case 1:
				func_422();
				break;
			case 2:
				func_423();
				break;
			case 3:
				func_424();
				break;
			case 4:
				func_425();
				break;
			case 5:
				func_426();
				break;
			case 6:
				func_427();
				break;
			case 7:
				func_428();
				break;
			case 8:
				func_429();
				break;
			case 9:
				func_430();
				break;
			case 10:
				func_431();
				break;
			case 11:
				func_432();
				break;
			case 12:
				func_433();
				break;
			case 13:
				func_434();
				break;
			case 14:
				func_435();
				break;
			case 15:
				func_436();
				break;
			case 16:
				func_437();
				break;
			case 17:
				func_438();
				break;
			case 18:
				func_439();
				break;
			case 19:
				func_440();
				break;
			case 20:
				func_441();
				break;
			case 21:
				func_442();
				break;
			case 22:
				func_443();
				break;
			case 23:
				func_444();
				break;
			case 24:
				func_445();
				break;
			case 25:
				func_446();
				break;
			case 26:
				func_447(iVar1);
				break;
			case 27:
				func_447(iVar1);
				break;
			case 28:
				func_447(iVar1);
				break;
			case 29:
				func_447(iVar1);
				break;
			case 30:
				func_447(iVar1);
				break;
			case 31:
				func_447(iVar1);
				break;
			case 32:
				func_447(iVar1);
				break;
			case 33:
				func_447(iVar1);
				break;
			case 34:
				func_448();
				break;
			case 35:
				func_449();
				break;
			case 36:
				func_450();
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_72()
{
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		iVar0 = func_451();
		switch (iVar0)
		{
			case 0:
				func_452();
				break;
			case 1:
				func_453();
				break;
			case 2:
				func_454();
				break;
			case 3:
				func_455();
				break;
			case 4:
				func_456();
				break;
			case 5:
				func_457();
				break;
			case 6:
				func_458();
				break;
			case 7:
				break;
			case 8:
				func_459();
				break;
			case 9:
				func_460();
				break;
			case 10:
				func_461();
				break;
			case 11:
				func_462();
				break;
			case 12:
				func_463();
				break;
			case 13:
				func_464();
				break;
			case 14:
				func_465();
				break;
			case 15:
				func_466();
				break;
			case 16:
				func_467();
				break;
			case 17:
				func_468();
				break;
			case 18:
				func_469();
				break;
			case 19:
				func_470();
				break;
			case 20:
				func_471();
				break;
			case 21:
				func_472();
				break;
			case 22:
				func_473();
				break;
			case 23:
				func_474();
				break;
			case 24:
				func_475();
				break;
			case 25:
				func_476();
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
			case 31:
				break;
			case 32:
				break;
			case 33:
				break;
			case 34:
				func_477();
				break;
			case 35:
				func_478();
				break;
			case 36:
				func_479();
				break;
			default:
				break;
		}
		func_480();
		iVar1++;
	}
	func_481();
	func_482();
}

void func_73()
{
	if (func_130(32800))
	{
		return;
	}
	func_483();
	_0x7d4e70a67a651c71(func_484());
}

void func_74()
{
	func_327(&(Global_1430231->f_8), 1, 1);
}

void func_75()
{
	if (func_485())
	{
		if (!Global_1430231->f_5)
		{
			Global_1430231->f_5 = 1;
			Global_1430231 = 1;
		}
	}
	switch (&Global_1430231)
	{
		case 0:
			if (Global_1430231->f_2)
			{
				return;
			}
			if (func_486(20, 0))
			{
				return;
			}
			if (func_272(0, 0, 1))
			{
				return;
			}
			if (!func_487(func_178()))
			{
				return;
			}
			if (!func_488(Global_1430231->f_3, 1))
			{
				return;
			}
			if (func_178() == 105 && func_267(21))
			{
				return;
			}
			if (is_ped_in_any_vehicle(Global_35, false))
			{
				return;
			}
			Global_1430231 = 1;
			break;
		case 1:
			if (_get_number_of_references_of_script_with_name_hash(1289699235) < 1)
			{
				request_script_with_name_hash(1289699235);
				Global_1430231 = 2;
			}
			else
			{
				Global_1430231 = 3;
			}
			break;
		case 2:
			if (has_script_with_name_hash_loaded(1289699235))
			{
				Global_1430231->f_1 = start_new_script_with_name_hash(1289699235, 1024);
				set_script_as_no_longer_needed("stage_coach");
				Global_1430231 = 3;
			}
			break;
		case 3:
			if (!is_thread_active(Global_1430231->f_1, false))
			{
				Global_1430231 = 0;
			}
			break;
	}
}

void func_76()
{
	func_327(&(Global_1430231->f_8), 1, 1);
}

void func_77()
{
	func_489(Global_1899750);
}

void func_78()
{
	func_490(Global_1899750);
}

void func_79()
{
	func_491(Global_1899750);
}

void func_80()
{
	switch (func_492())
	{
		case 0:
			if (func_493(&Global_43907, 4))
			{
				func_494(&Global_43907, 4);
				if (func_495(&(Local_168.f_7), 1, 1))
				{
					func_496(&Local_168);
					animpostfx_play("WheelHUDIn");
					set_time_scale(0.1f);
					func_497();
					func_498(1);
				}
			}
			break;
		case 1:
			if (func_493(&Global_43907, 16))
			{
				func_494(&Global_43907, 16);
				func_499(&Local_168);
				return;
			}
			func_497();
			if ((is_entity_dead(func_500(7)) || is_ped_in_writhe(func_500(7))) && (is_entity_dead(func_500(1)) || is_ped_in_writhe(func_500(1))))
			{
				func_499(&Local_168);
				return;
			}
			if (!func_501(8388608))
			{
				func_499(&Local_168);
				return;
			}
			if ((((!func_502(1) || is_entity_dead(Global_35)) || func_503()) || func_504()) || func_505())
			{
				func_499(&Local_168);
				return;
			}
			switch (func_506(&Local_168))
			{
				case 1:
					break;
				case 2:
					func_507(&Global_43907, 8);
					Local_498 = func_508(&Local_168);
					func_509(&Local_168);
					func_498(2);
					break;
				case 0:
					func_499(&Local_168);
					break;
			}
			break;
		case 2:
			if (func_493(&Global_43907, 1))
			{
				func_494(&Global_43907, 1);
				trigger_music_event("OpenWorldMusic_FastTravel_StartEvent");
			}
			if (!func_493(&Global_43907, 64))
			{
				if (is_entity_playing_anim(Global_35, "script_camp@camp_cleanup", "kick_fire_short", 1))
				{
					if (_get_entity_anim_current_time(Global_35, "script_camp@camp_cleanup", "kick_fire_short") >= 0.6f)
					{
						do_screen_fade_out(1000);
						func_507(&Global_43907, 64);
					}
				}
			}
			if (func_493(&Global_43907, 32))
			{
				func_494(&Global_43907, 32);
				if (((((is_entity_dead(func_500(7)) || is_ped_in_writhe(func_500(7))) || func_510(Global_36, get_entity_coords(func_500(7), true, false)) > func_511(7)) && !is_entity_dead(func_500(1))) && !is_ped_in_writhe(func_500(1))) && func_510(Global_36, get_entity_coords(func_500(1), true, false)) <= func_511(1))
				{
					Local_168.f_304.f_1 = func_500(1);
				}
				else if ((!is_entity_dead(func_500(7)) && !is_ped_in_writhe(func_500(7))) && func_510(Global_36, get_entity_coords(func_500(7), true, false)) <= func_511(7))
				{
					Local_168.f_304.f_1 = func_500(7);
					if ((!is_entity_dead(func_500(1)) && !is_ped_in_writhe(func_500(1))) && func_510(Global_36, get_entity_coords(func_500(1), true, false)) <= func_511(1))
					{
						Local_498.f_1 = func_500(1);
					}
				}
				set_ped_config_flag(Local_168.f_304.f_1, 388, true);
				if (!is_entity_dead(Local_498.f_1))
				{
					set_ped_config_flag(Local_498.f_1, 388, true);
				}
				if (func_512(&Local_168, Local_168.f_304.f_1, 0, -1, 1))
				{
					_0x2e24c27b112b5b12(1);
					func_498(4);
				}
			}
			break;
		case 4:
			if (func_513(&Local_168, iVar496, 0))
			{
				func_514(&Local_168);
				func_498(5);
			}
			break;
		case 5:
			func_515(&Local_168);
			if (iVar496 == func_516() && ((is_screen_faded_out() && _0x27af48c62b281341()) || ((!is_screen_faded_out() && _0x5d5e2102b174b8d2()) && _0x7b8c2b846c05e5ad())))
			{
				if (is_screen_faded_out() && func_398(&(Local_498.f_3)) <= 5f)
				{
					_0x62d5f0588915b277();
				}
				else if (!is_screen_faded_out() && func_398(&(Local_498.f_3)) <= (5f * 2f))
				{
					_0x62d5f0588915b277();
				}
			}
			else
			{
				func_517(&(Local_498.f_3));
			}
			if ((!Local_498.f_6 && is_screen_faded_out()) && _0xdabfe48ba0d457aa() > 0)
			{
				set_random_weather_type(true, true);
				Local_498.f_6 = 1;
			}
			if ((!Local_498.f_2 && _0x5d5e2102b174b8d2()) && _0xda7fdeff4de86839())
			{
				func_518(&Local_168, iVar496, Local_498.f_1);
				Local_498.f_2 = 1;
			}
			if (func_519(&Local_168))
			{
				if (!is_entity_dead(Local_168.f_304.f_1))
				{
					set_ped_config_flag(Local_168.f_304.f_1, 388, false);
				}
				if (!is_entity_dead(Local_498.f_1))
				{
					set_ped_config_flag(Local_498.f_1, 388, false);
				}
				func_520(0, 0);
				func_498(6);
			}
			break;
		case 6:
			trigger_music_event("OpenWorldMusic_FastTravel_StopEvent");
			func_81();
			Var0.f_7 = 40;
			Var0.f_288 = 10;
			_copy_memory(&Local_168, &Var0, 330);
			_copy_memory(&Local_498, &uVar330, 7);
			break;
	}
}

void func_81()
{
	Global_43907 = 0;
	func_498(0);
}

int func_82()
{
	return Global_1572887->f_12;
}

void func_83(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_84(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_138(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

bool func_85()
{
	if (func_521())
	{
		iVar0 = _0x804425c4bbd00883(Global_35);
		if (func_522(iVar0) == 2041469314 || func_522(iVar0) == -77448735)
		{
			return false;
		}
		else
		{
			if (func_522(iVar0) == 0)
			{
				if (_get_number_of_references_of_script_with_name_hash(52395882) > 0 || _get_number_of_references_of_script_with_name_hash(-1741532193) > 0)
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_86()
{
	return _unlock_is_unlocked(99890643);
}

bool func_87()
{
	if (_is_app_active(1289756680))
	{
		return false;
	}
	if (((((((animpostfx_is_running("ChapterTitle_IntroCh01") || animpostfx_is_running("ChapterTitle_IntroCh02")) || animpostfx_is_running("ChapterTitle_IntroCh03")) || animpostfx_is_running("ChapterTitle_IntroCh04")) || animpostfx_is_running("ChapterTitle_IntroCh05")) || animpostfx_is_running("ChapterTitle_IntroCh06")) || animpostfx_is_running("ChapterTitle_IntroCh08Epi01")) || animpostfx_is_running("ChapterTitle_IntroCh09Epi02"))
	{
		return false;
	}
	if (((((((((((((((((((animpostfx_is_running("Title_Gen_FewDaysLater") || animpostfx_is_running("Title_Gen_FewDaysLater_onblack")) || animpostfx_is_running("Title_Gen_FewHoursLater")) || animpostfx_is_running("Title_Gen_FewHoursLater_onblack")) || animpostfx_is_running("Title_Gen_FewMonthsLater")) || animpostfx_is_running("Title_Gen_FewMonthsLater_onblack")) || animpostfx_is_running("Title_Gen_FewWeeksLater")) || animpostfx_is_running("Title_Gen_FewWeeksLater_onblack")) || animpostfx_is_running("Title_Gen_coupledayslater")) || animpostfx_is_running("Title_Gen_coupledayslater_onblack")) || animpostfx_is_running("Title_Gen_couplemonthslater")) || animpostfx_is_running("Title_Gen_couplemonthslater_onblack")) || animpostfx_is_running("Title_Gen_coupleweekslater")) || animpostfx_is_running("Title_Gen_coupleweekslater_onblack")) || animpostfx_is_running("Title_Gen_daylater")) || animpostfx_is_running("Title_Gen_daylater_onblack")) || animpostfx_is_running("Title_Gen_somedaysLater")) || animpostfx_is_running("Title_Gen_somedaysLater_onblack")) || animpostfx_is_running("Title_Gen_someyearsLater")) || animpostfx_is_running("Title_Gen_someyearsLater_onblack"))
	{
		return false;
	}
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		if (decor_get_bool(player_ped_id(), "player_crafting_active"))
		{
			return false;
		}
	}
	if (func_131(&Global_1935630, 4096))
	{
		return false;
	}
	if (Global_1392040->f_6)
	{
		return false;
	}
	if (_is_app_active(1833066477) || _is_app_running(1833066477))
	{
		return false;
	}
	if (func_131(&Global_1935630, 16384) || _0x99f92061efe908ba())
	{
		return false;
	}
	if (func_524(func_523(func_178())))
	{
		if (&Global_40.f_9384[func_523(func_178())] == 256)
		{
			return false;
		}
	}
	if ((animpostfx_is_running("MissionChoice") || animpostfx_is_running("PlayerHonorChoiceGood")) || animpostfx_is_running("PlayerHonorChoiceBad"))
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-1799469283) > 0)
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			return false;
		}
	}
	if (func_525() || func_504())
	{
		return false;
	}
	if (_0x139efb0a71dd9011())
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(1433015236) > 0)
	{
		return false;
	}
	if (!is_player_playing(player_id()))
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-2055369659) > 0)
	{
		if (func_526(Global_35, -3704.772f, -2616.527f, -14.9239f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-580465115) > 0)
	{
		if (func_526(Global_35, 2435.137f, -1225.753f, 44.8932f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-2124103932) > 0)
	{
		if (func_526(Global_35, -1786.264f, -423.6425f, 154.3952f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-1176988783) > 0)
	{
		if (func_526(Global_35, 2674.925f, -1389.901f, 45.4948f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-1389645547) > 0)
	{
		if (func_526(Global_35, 2944.418f, 1337.022f, 43.1089f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-130809593) > 0)
	{
		if (func_526(Global_35, 2644.537f, -1209.317f, 52.3504f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-651201458) > 0)
	{
		if (func_526(Global_35, 2780.151f, -1310.231f, 45.5924f, 1) < 4f)
		{
			return false;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-2036486134) > 0)
	{
		if (func_526(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 10f)
		{
			return false;
		}
	}
	return true;
}

void func_88()
{
	if (func_86())
	{
		clear_bit(Global_1357505, 8);
		_0xcdcd7b2d49aee73a(1);
		_0xec3d8c228fe553d7(0);
		Global_1357503 = 1;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "camera_photomode", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 0;
		func_527(Var10, 0);
	}
}

var func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_90(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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

void func_91()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Call_Loc(Local_505[iVar0]->f_2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Call_Loc(Local_604[iVar0]->f_2);
		iVar0++;
	}
}

void func_92()
{
	func_528();
}

void func_93()
{
	func_529(0);
	func_531(func_530());
}

void func_94()
{
	uVar0 = func_532(-763706539, -1397419524);
	Global_1347477->f_127 = uVar0;
	uVar1 = func_532(258444835, 1449106310);
	Global_1347477->f_128 = uVar1;
	fVar2 = func_532(845057552, -458184788);
	fVar3 = func_532(845057552, 1468884243);
	Global_1347477->f_129 = (fVar2 + fVar3);
	uVar4 = func_533(1388069370);
	Global_1347477->f_130 = uVar4;
	if (!is_ped_injured(Global_35))
	{
		func_534(12, 0f);
		func_535();
		func_536();
		func_537();
		func_538();
		if (func_336())
		{
			set_ped_config_flag(Global_35, 265, true);
		}
	}
	func_539();
	func_540();
	func_541();
	func_542();
	func_543();
	func_544();
	func_545();
	set_player_targeting_mode(-1);
	if (!func_130(32) && !func_130(2))
	{
		func_546();
	}
	if (Global_1347477->f_205)
	{
		_0x5199405eabfbd7f0("PlayerRPGNoCoreHealth");
		_0x5199405eabfbd7f0("PlayerRPGNoCoreStamina");
		_0x5199405eabfbd7f0("PlayerRPGNoCoreDeadEye");
	}
}

void func_95()
{
	Global_1935630->f_54 = get_game_timer();
}

void func_96(int iParam0)
{
	if (func_547(iParam0))
	{
		Global_40.f_9419 = (Global_40.f_9419 - (Global_40.f_9419 && iParam0));
	}
}

void func_97()
{
	if (func_548(get_entity_model(Global_35)) == -676452144)
	{
		_0x2b4ce170de09f346(Global_35, 531055934);
		_0x2b4ce170de09f346(Global_35, -676452144);
		_0x1e017404784aa6a3(Global_35, 1862763509);
		_0x1e017404784aa6a3(Global_35, 455003611);
		_0x1e017404784aa6a3(Global_35, 487851963);
	}
}

void func_98()
{
	Global_1347701 = 0;
}

void func_99()
{
	vVar0.f_1 = -15;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		vVar0 = { *Global_40.f_4237[iVar3] };
		if (func_549(vVar0.x))
		{
			iVar4 = vVar0.y;
			if (iVar4 != -15 && func_550(iVar4))
			{
				func_551(vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (func_552(vVar0.x))
			{
			}
		}
		iVar3++;
	}
}

void func_100()
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iVar1 = &Global_40.f_4283.f_6[iVar0];
		if (iVar1 == 1621135203)
		{
			_0x39bed552db46ffa9(player_id(), 5);
			return;
		}
		else if (iVar1 == 1300783988)
		{
			_0x39bed552db46ffa9(player_id(), 6);
			return;
		}
		iVar0++;
	}
}

void func_101()
{
	iVar0 = func_553();
	bVar1 = (!func_131(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (does_entity_exist(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (_0x69e181772886f48b(iVar0) || _0xf0fbfb9ab15f7734(iVar0, 0, 0));
			Global_1935630->f_15 = _0x148e7ac8141c9e64(iVar0);
			Global_1935630->f_14 = _0x9945a3e2528a02e8(iVar0);
			Global_1935630->f_16 = _0xf46108c50a22b029();
			Global_1935630->f_17 = _get_wanted_intensity_for_player(iVar0);
			Global_1935630->f_26 = _0x9d5c9a5a3321b128(iVar0);
			Global_1935630->f_21 = _0xdaefdfdb2aeece37(_get_hud_player_crime_type(iVar0), 0);
			Global_1935630->f_18 = _0xad401c63158acbaa(iVar0);
			if (Global_1935630->f_18)
			{
				_0x9c5bd8c562565ce6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (_0x532c5fddb986ee5c(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = _0xdaefdfdb2aeece37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_554();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = is_player_being_arrested(iVar0, true);
	Global_1935630->f_12 = is_entity_dead(Global_35);
	if (!Global_1935630->f_12)
	{
		get_current_ped_weapon(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = get_mount(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			set_ped_reset_flag(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			set_ped_reset_flag(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_361(9))
			{
				set_ped_reset_flag(Global_35, 135, true);
			}
			if (!func_361(14))
			{
				set_ped_reset_flag(Global_35, 144, true);
			}
			if (!func_361(36))
			{
				_uiprompt_disable_prompt_type_this_frame(9);
			}
			if (_0x139efb0a71dd9011())
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, 1934388793, false);
				disable_control_action(0, -209515122, false);
				disable_control_action(0, -824104112, false);
				disable_control_action(0, 516589524, false);
				disable_control_action(0, 1390807691, false);
				disable_control_action(0, 1663574939, false);
				_uiprompt_enable_prompt_type_this_frame(6);
			}
			else if ((is_screen_faded_out() && func_273()) && !func_272(0, 0, 1))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (is_control_pressed(0, 255439828))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, 42190210, false);
				disable_control_action(0, 1623727326, false);
				disable_control_action(0, -922478227, false);
				disable_control_action(0, 1751579194, false);
				disable_control_action(0, -2023713047, false);
			}
			if (_is_weapon_sniper(Global_1935630->f_44) && is_first_person_aim_cam_active())
			{
				disable_control_action(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_82() == -1 && _0x139efb0a71dd9011())
		{
			_uiprompt_enable_prompt_type_this_frame(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_102()
{
	if (!func_555())
	{
		Global_1935630->f_52 = 0;
		return;
	}
	bVar0 = is_screen_faded_out();
	bVar1 = is_gameplay_cam_rendering();
	if (Global_1935630->f_50 && bVar0)
	{
		Global_1935630->f_50 = 0;
		func_556(0);
	}
	if ((Global_1935630->f_51 && !bVar1) && !is_sphere_visible(get_entity_coords(Global_35, true, false), 2f))
	{
		Global_1935630->f_51 = 0;
		func_556(0);
	}
	if ((((Global_1935630->f_51 && (!bVar1 || is_screen_faded_out())) && func_274(&Global_1898437)) && func_557() <= 2f) && func_558(&Global_1898437))
	{
		func_556(1);
	}
	if (is_screen_faded_in())
	{
		Global_1935630->f_50 = 1;
	}
	if (bVar1)
	{
		Global_1935630->f_51 = 1;
	}
}

void func_103()
{
	if (!func_559(8))
	{
		return;
	}
	if (Global_1946804->f_852 > 0)
	{
		func_560(&(Global_1946804->f_769));
	}
	if (Global_1946804->f_850 > 0 && !func_559(16384))
	{
		func_561(&(Global_1946804->f_668));
	}
	else if (Global_1946804->f_851 > 0)
	{
		func_562(&(Global_1946804->f_567));
	}
	if (func_559(16384))
	{
		func_563(16384);
	}
	if ((Global_1946804->f_851 <= 0 && Global_1946804->f_850 <= 0) && Global_1946804->f_852 <= 0)
	{
		if (func_559(512))
		{
			func_386(0, 4);
			func_563(512);
			func_563(16);
		}
		if (func_559(16))
		{
			func_386(0, 4);
			func_563(16);
		}
		func_563(8);
	}
}

void func_104()
{
	if (Global_1935436->f_9 > 0f)
	{
		bVar0 = false;
		fVar1 = 0.01f;
		if (Global_1935436->f_1 != -1 && Global_1935436->f_1 < &Global_1935436)
		{
			bVar0 = true;
			fVar1 = 0.25f;
		}
		if ((get_game_timer() >= Global_1935436->f_3 + 30000 && !Global_1935436->f_10) || bVar0)
		{
			if (((get_game_timer() >= Global_1935436->f_4 || bVar0) && (Global_1935436->f_9 < 1f || bVar0)) && (Global_1935436->f_9 >= 0.5f || Global_1935436->f_12.f_1 == 0f))
			{
				Global_1935436->f_9 = (Global_1935436->f_9 - (fVar1 * timestep()));
				if (Global_1935436->f_9 < 0f)
				{
					Global_1935436->f_9 = 0f;
				}
			}
		}
		_0x06d26a96ca1bca75(Global_35, 10, Global_1935436->f_9, 0);
	}
	if (func_564())
	{
		if (&Global_1935436 >= 2)
		{
			disable_control_action(0, -822242784, false);
		}
		_0x406ccf555b04fad3(Global_35, 1, Global_1935436->f_9);
		get_current_ped_weapon(Global_35, &iVar2, true, 0, false);
		if (iVar2 != -1569615261 && iVar2 != 0)
		{
			set_ped_reset_flag(Global_35, 1, true);
		}
		if (Global_1935436->f_9 >= 1f)
		{
			Global_1935436->f_8 = (Global_1935436->f_8 + (1f * timestep()));
		}
		else
		{
			Global_1935436->f_8 = 0f;
		}
		if (is_gameplay_cam_rendering() && !_0x190f7da1ac09a8ef())
		{
			if (Global_1935436->f_12.f_1 > 0f)
			{
				if (is_gameplay_cam_shaking())
				{
					bVar3 = false;
					switch (Global_1935436->f_12.f_5)
					{
						case 2:
							if (!is_first_person_aim_cam_active())
							{
								bVar3 = true;
							}
							break;
						case 1:
							if (!_0xa24c1d341c6e0d53(1, 0, 1) || is_first_person_aim_cam_active())
							{
								bVar3 = true;
							}
							break;
						case 0:
							if (_0xa24c1d341c6e0d53(1, 0, 1))
							{
								bVar3 = true;
							}
							break;
					}
					if (bVar3)
					{
						stop_gameplay_cam_shaking(true);
					}
				}
				if (Global_1935436->f_12.f_3 != Global_1935436->f_12.f_1 || !is_gameplay_cam_shaking())
				{
					sVar4 = "";
					if (is_first_person_aim_cam_active())
					{
						sVar4 = "POV_AIM_DRUNK_SHAKE";
						Global_1935436->f_12.f_5 = 2;
					}
					else if (_0xa24c1d341c6e0d53(1, 0, 1))
					{
						sVar4 = "POV_DRUNK_SHAKE";
						Global_1935436->f_12.f_5 = 1;
					}
					else
					{
						sVar4 = "DRUNK_SHAKE";
						Global_1935436->f_12.f_5 = 0;
					}
					if (!is_gameplay_cam_shaking())
					{
						shake_gameplay_cam(sVar4, Global_1935436->f_12.f_1);
					}
					else
					{
						set_gameplay_cam_shake_amplitude(Global_1935436->f_12.f_1);
					}
					Global_1935436->f_12.f_3 = Global_1935436->f_12.f_1;
				}
			}
			else if (is_gameplay_cam_shaking())
			{
				stop_gameplay_cam_shaking(false);
			}
		}
		if (Global_1935436->f_9 >= 0.5f)
		{
			fVar5 = ((0.2f * pow(260f, ((Global_1935436->f_9 - 0.5f) - 0.25f))) + 0.1f);
			if (&Global_1935436 >= 2)
			{
				fVar5 = (fVar5 + 0.15f);
			}
			if (fVar5 > 1f)
			{
				fVar5 = 1f;
			}
			else if (fVar5 < 0f)
			{
				fVar5 = 0f;
			}
		}
		else
		{
			fVar5 = 0f;
		}
		if (fVar5 > Global_1935436->f_12.f_1)
		{
			if (get_game_timer() >= Global_1935436->f_3 + 1500)
			{
				Global_1935436->f_12.f_1 = (Global_1935436->f_12.f_1 + (0.18f * timestep()));
				if (Global_1935436->f_12.f_1 > fVar5)
				{
					Global_1935436->f_12.f_1 = fVar5;
				}
			}
		}
		else if (fVar5 < Global_1935436->f_12.f_1)
		{
			Global_1935436->f_12.f_1 = (Global_1935436->f_12.f_1 - (0.18f * timestep()));
			if (Global_1935436->f_12.f_1 < fVar5)
			{
				Global_1935436->f_12.f_1 = fVar5;
			}
		}
		bVar6 = animpostfx_is_running("PlayerDrunk01");
		if (((Global_1935436->f_12.f_1 > 0f && !bVar6) || (Global_1935436->f_12.f_1 <= 0f && bVar6)) || Global_1935436->f_12 != Global_1935436->f_12.f_1)
		{
			if (!bVar6)
			{
				animpostfx_play("PlayerDrunk01");
			}
			_0xcab4dd2d5b2b7246("PlayerDrunk01", Global_1935436->f_12.f_1);
			Global_1935436->f_12 = Global_1935436->f_12.f_1;
		}
		if (bVar6)
		{
			fVar7 = get_control_normal(0, -1450761377);
			if (fVar7 < 0f)
			{
				fVar7 = (fVar7 * -1f);
			}
			fVar8 = get_control_normal(0, -771458680);
			if (fVar8 < 0f)
			{
				fVar8 = (fVar8 * -1f);
			}
			if (fVar7 > fVar8)
			{
				fVar9 = fVar7;
			}
			else
			{
				fVar9 = fVar8;
			}
			fVar10 = fVar9;
			if (fVar10 > Global_1935436->f_12.f_2)
			{
				Global_1935436->f_12.f_2 = (Global_1935436->f_12.f_2 + (0.8f * timestep()));
				if (Global_1935436->f_12.f_2 > fVar10)
				{
					Global_1935436->f_12.f_2 = fVar10;
				}
			}
			else if (fVar10 < Global_1935436->f_12.f_2)
			{
				Global_1935436->f_12.f_2 = (Global_1935436->f_12.f_2 - (0.8f * timestep()));
				if (Global_1935436->f_12.f_2 < fVar10)
				{
					Global_1935436->f_12.f_2 = fVar10;
				}
			}
			_0xf972f0ab16dc5260("PlayerDrunk01", 1, Global_1935436->f_12.f_2);
		}
	}
	if (func_565())
	{
		func_566();
	}
}

void func_105()
{
	func_567();
	func_568();
	if (Global_1347477->f_8)
	{
		func_386(0, 19);
		Global_1347477->f_8 = 0;
	}
	if (Global_1347477->f_205)
	{
		bVar0 = func_569();
		func_570(&(Global_1347477->f_206), -80f, bVar0);
		func_571(&(Global_1347477->f_206), -80f, bVar0);
		func_572(&(Global_1347477->f_206), -80f, bVar0);
		func_573(&(Global_1347477->f_206), bVar0);
	}
	func_574();
	func_575();
	if (!is_ped_injured(Global_35) && !func_576())
	{
		func_577(0);
		func_577(1);
		func_577(2);
	}
	func_578();
	func_579();
	iVar1 = _0x6ca484c9a7377e4f(Global_35, 1);
	if (does_entity_exist(iVar1))
	{
		iVar2 = _0x7e7b19a4355fee13(Global_35, iVar1);
		if (Global_1347477->f_174 != iVar2)
		{
			if (func_580(iVar2))
			{
				Global_1347477->f_175 = 0.1f;
			}
			else
			{
				Global_1347477->f_175 = 0f;
			}
			func_545();
			Global_1347477->f_174 = iVar2;
		}
	}
	func_581();
	func_582();
}

void func_106()
{
	iVar1 = get_game_timer();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Global_1347477->f_155[iVar0] != 0)
		{
			if (iVar1 >= Global_1347477->f_155[iVar0]->f_1)
			{
				func_583(&(Global_1347477->f_155[iVar0]), 0, Global_1347477->f_155[iVar0]->f_2, Global_1347477->f_155[iVar0]->f_3, 0, Global_1347477->f_155[iVar0]->f_4, Global_1347477->f_155[iVar0]->f_5, 0);
				Global_1347477->f_155[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_107()
{
	if (!func_361(15))
	{
		return;
	}
	func_584();
}

void func_108()
{
	if (Global_36605 != 0)
	{
		if (!is_ped_on_mount(Global_35))
		{
			func_585();
			Global_36605 = 0;
		}
	}
	else if (_0xb881ca836cc4b6d4(&Global_36606))
	{
		iVar0 = func_586(Global_35, 1, 0, 0);
		if (((((!Global_1935689->f_1 && get_game_timer() >= &Global_1911913 + 2000) && !_0x038b1f1674f0e242(Global_35)) && !_0xec7e480ff8bd0bed(Global_35)) && !is_ped_using_any_scenario(Global_35)) && !Global_1935689->f_9)
		{
			Var1.f_7 = 752097756;
			Var1.f_8 = 1056964608;
			Var1.f_9 = 1065353216;
			Var1 = { Global_36606 };
			Var23.f_9 = -1591664384;
			if (_0x9700e8efc4ab9089(func_221(0), &Var1, &Var23, false))
			{
				Var1.f_4 = Var23.f_4;
			}
			_give_weapon_to_ped(Global_35, &Var1, &uVar17);
			Global_36606 = { func_587() };
			if (_0xb881ca836cc4b6d4(&Global_36610))
			{
				Var37.f_7 = 752097756;
				Var37.f_8 = 1056964608;
				Var37.f_9 = 1065353216;
				Var37 = { Global_36610 };
				Var59.f_9 = -1591664384;
				if (_0x9700e8efc4ab9089(func_221(0), &Var37, &Var59, false))
				{
					Var53.f_4 = Var59.f_4;
				}
				_give_weapon_to_ped(Global_35, &Var37, &Var53);
				Global_36610 = { func_587() };
			}
			task_swap_weapon(Global_35, 1, 1, 0, 0);
		}
		else if (iVar0 == -160924582 || iVar0 == -1016714371)
		{
			Global_36606 = { func_587() };
			Global_36610 = { func_587() };
		}
	}
}

void func_109()
{
	if (Global_43894.f_12 != -1)
	{
		func_588(1);
		if (is_ped_on_mount(Global_35))
		{
			if (!func_193(Global_35, 501393341))
			{
				task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
			}
		}
		else if (_0xefc4303ddc6e60d3(Global_35))
		{
			_0xed27560703f37258(Global_35);
		}
		else
		{
			iVar0 = func_500(7);
			if (does_entity_exist(iVar0))
			{
				if (is_entity_in_volume(iVar0, &(Global_43894[Global_43894.f_12]), true, 0))
				{
					if (!func_193(iVar0, 713668775))
					{
						vVar1 = { func_589(Global_43894.f_12, iVar0) };
						if (!func_276(vVar1))
						{
							task_follow_nav_mesh_to_coord(iVar0, vVar1, &(Global_43894.f_6[Global_43894.f_12]), 20000, 0.25f, 0, 40000f);
						}
					}
				}
			}
			iVar0 = _get_last_mount(Global_35);
			if (does_entity_exist(iVar0) && iVar0 != func_500(7))
			{
				if (is_entity_in_volume(iVar0, &(Global_43894[Global_43894.f_12]), true, 0))
				{
					if (!func_193(iVar0, 713668775))
					{
						vVar4 = { func_589(Global_43894.f_12, iVar0) };
						if (!func_276(vVar4))
						{
							task_follow_nav_mesh_to_coord(iVar0, vVar4, &(Global_43894.f_6[Global_43894.f_12]), 20000, 0.25f, 0, 40000f);
						}
					}
				}
			}
		}
	}
}

bool func_110()
{
	return false;
}

void func_111(int iParam0)
{
	if (func_590(iParam0, 1) || func_590(iParam0, 2))
	{
		iVar0 = func_591(iParam0);
		if (_does_volume_exist(iVar0))
		{
			if (func_590(iParam0, 1))
			{
				func_592(iVar0, 0);
				func_593(iVar0, 0);
				func_594(iParam0, 1);
			}
			if (func_590(iParam0, 2))
			{
				_0xa1cfb35069d23c23(iVar0);
				_0x74c2b3dc0b294102(iVar0);
				_delete_volume(iVar0);
				func_594(iParam0, 2);
			}
		}
	}
}

void func_112(int iParam0)
{
	if (func_590(iParam0, 4))
	{
		func_119(iParam0);
		func_594(iParam0, 4);
	}
	if (func_590(iParam0, 8))
	{
		func_595(iParam0);
		func_594(iParam0, 8);
	}
}

int func_113()
{
	return Global_1897952->f_41;
}

bool func_114(int iParam0)
{
	sVar0 = func_116(iParam0);
	request_script(sVar0);
	if (has_script_loaded(sVar0))
	{
		if (func_82() == -1)
		{
			if (is_thread_active(Global_1897952->f_42, false))
			{
				force_cleanup_for_thread_with_this_id(Global_1897952->f_42, 523);
				return true;
			}
			if (_get_number_of_references_of_script_with_name_hash(get_hash_key(sVar0)) > 0)
			{
				func_117(sVar0, 523);
				return true;
			}
		}
		else if (!is_string_null_or_empty(&(Global_1897952->f_43)) && network_is_script_active(&(Global_1897952->f_43), Global_1897952->f_51, true, 0))
		{
			_0x7de4643157ad646c(Global_1897952->f_42);
			set_script_as_no_longer_needed(sVar0);
			return false;
		}
		Global_1897952->f_42 = start_new_script(sVar0, 1024);
		StringCopy(&(Global_1897952->f_43), sVar0, 64);
		set_script_as_no_longer_needed(sVar0);
		bVar1 = func_596(iParam0);
		_0x5e6f375ca101c108(player_id(), (bVar1 || func_598(func_597(iParam0))));
		if (func_597(iParam0) != func_597(func_113()) || bVar1)
		{
			func_599(func_113(), 0);
			iVar2 = func_288(Global_36, 1);
			if (!func_600(iVar2))
			{
				if (!func_131(&Global_1935630, 16384) && !func_576())
				{
					if (func_601(func_597(iParam0)) >= get_wanted_level_threshold(1))
					{
						func_602(-1, -1, -1, 0, func_597(iParam0), 0);
					}
					else if (bVar1)
					{
						func_602(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_138(player_id(), 1, 0, 1))
			{
				func_603(iParam0);
			}
			else
			{
				func_599(iParam0, 1);
			}
		}
		if (func_113() != -1)
		{
			func_118(func_113());
			func_119(func_113());
		}
		func_604(iParam0);
		if (func_605(iParam0))
		{
			_0x14e57f88ba0a07fc(func_606(iParam0));
		}
		func_607(iParam0);
		func_608(iParam0);
		iVar3 = -1000;
		if (func_282(func_178()))
		{
			iVar3 = (*Global_1888801)[func_178()]->f_1;
		}
		if (iVar3 < (get_game_timer() - 1000))
		{
			iVar4 = func_288(Global_36, 1);
			if (func_609(iVar4, 1, 0) == 0)
			{
				func_611(func_610(iParam0, 1), func_597(iParam0));
			}
			func_612(0.775f, 0.2f, 0.025f, 0f);
			func_595(iParam0);
		}
		if (8 == iParam0 != func_613(373691918))
		{
			func_614(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

int func_115(vector3 vParam0)
{
	return func_615(_get_map_zone_at_coords(vParam0, 10));
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_117(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	func_616(get_hash_key(sParam0), iParam1);
}

void func_118(int iParam0)
{
	if (func_617(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_618((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_119(int iParam0)
{
	if (func_619(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_618((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_120()
{
	if (func_82() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		func_618((iVar1 + iVar0), 0);
		iVar0++;
	}
}

void func_121()
{
	Global_1898164->f_163 = func_272(0, 0, 0);
}

void func_122()
{
	Global_1898164->f_164 = func_272(0, 1, 0);
}

bool func_123(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_124()
{
	return Global_1898164->f_163;
}

bool func_125(int iParam0)
{
	return (Global_1935630 && (-1 - iParam0) & 40959) != 0;
}

void func_126(int iParam0, int iParam1)
{
	func_620(iParam0, iParam1);
}

void func_127(int iParam0, int iParam1)
{
	func_621(iParam0, iParam1);
}

bool func_128(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bVar4 = func_82() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_138(get_player_index(), 1, 0, 1);
	}
	if (!func_123(&Global_1898439, 1024))
	{
		func_622();
		func_126(Global_1898439, 1024);
		if (bParam3)
		{
			return false;
		}
	}
	iVar2 = (&Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_274(Global_1898330[iVar2]) && func_133(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581->f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_623(iVar2, 1024))
			{
				func_134(iVar2, 0);
				switch ((*Global_1898346)[iVar2]->f_3)
				{
					case 1:
						if (!(*Global_1835011)[iVar0]->f_71)
						{
							iVar0 = (*Global_1898346)[iVar2]->f_4;
							if (func_624(iVar0))
							{
								if (!bParam1)
								{
									func_625(iVar0, 0);
								}
								func_626(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_627(iVar0);
								if (bVar3 && !func_628((*Global_1835011)[iVar0], 32768))
								{
									func_629((*Global_1835011)[iVar0], 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899->f_2 == (*Global_1835011)[iVar0]->f_21)
									{
										(*Global_1835011)[iVar0]->f_64 = func_630();
									}
								}
								if (bParam3)
								{
									return false;
								}
							}
						}
						break;
					case 6:
						iVar5 = (*Global_1898346)[iVar2]->f_4;
						if (iVar5 == 0 && func_82() == -1)
						{
							iVar6 = (*Global_1898346)[iVar2]->f_5;
							if (*Global_1392626)[iVar6]->f_3 != func_631(0)
							{
								if (bVar3)
								{
									func_632(iVar6, 0, 0);
								}
								else
								{
									func_632(iVar6, 1, 0);
								}
								if (func_133((*Global_1392626)[iVar6]->f_3))
								{
									func_633((*Global_1392626)[iVar6]->f_3);
								}
								if (bParam3)
								{
									return false;
								}
							}
						}
						break;
					case 2:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
					default:
						if (does_blip_exist(Global_1898346[iVar2]))
						{
							remove_blip((*Global_1898346)[iVar2]);
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!func_123(&Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				func_634(16384);
			}
			else
			{
				func_635();
			}
			func_126(Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = &Global_40.f_450[iVar7];
			if (func_636(iVar1) && Global_1347702[iVar1] != 45)
			{
				if (func_637((*Global_1347702)[iVar1]->f_13, 256))
				{
				}
				else if (*Global_1347702)[iVar1]->f_15 != func_631(0)
				{
					if (func_200(0) == 1 || func_200(0) == 8)
					{
						func_638(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_639(iVar1, 0);
					}
					if (func_133((*Global_1347702)[iVar1]->f_15))
					{
						func_633((*Global_1347702)[iVar1]->f_15);
					}
				}
				func_640(&((*Global_1347702)[iVar1]->f_13), 2);
			}
			iVar7++;
		}
	}
	func_641();
	if (bParam2)
	{
		func_642();
	}
	func_121();
	func_122();
	return true;
}

bool func_129(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_130(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_131(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_132()
{
	return (func_131(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

bool func_133(int iParam0)
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
		iVar0 = func_643(iParam0);
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

void func_134(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_644(Global_1898330[iParam0]);
		func_645((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_135(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = (*Global_1898346)[iParam0]->f_4;
		if (bParam1)
		{
			return false;
		}
		if (bParam2)
		{
			return false;
		}
		if (func_646(iVar0, iParam0))
		{
			if (func_647(iVar0))
			{
				return true;
			}
		}
		return false;
	}
	if (!func_648())
	{
		return false;
	}
	iVar0 = (*Global_1898346)[iParam0]->f_4;
	if (iVar0 > 80)
	{
		return false;
	}
	if ((*Global_1835011)[iVar0]->f_17)
	{
		return false;
	}
	if (func_650(func_649(iVar0), 256, 0))
	{
		return false;
	}
	if (Global_1572887->f_8)
	{
		return false;
	}
	if (!func_647(iVar0))
	{
		return false;
	}
	func_626(iVar0, iParam0, 0, 1, 1, 0, 0);
	return true;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137()
{
	if (func_82() != -1)
	{
		return;
	}
	Global_1391406 = &Global_1391405;
}

bool func_138(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_651(bParam1, bParam2, bParam3);
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

bool func_139()
{
	if (func_179(func_178()))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_320(iParam0))
	{
		return false;
	}
	iVar0 = uParam2;
	if (!func_652(iVar0))
	{
		return false;
	}
	iVar1 = uParam3;
	iVar2 = func_653(iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	if (func_124())
	{
		return false;
	}
	bVar3 = func_654((*Global_1392915)[iVar2]->f_2);
	if (!bVar3 && !bParam4)
	{
		if (Global_1392915->f_121[iVar2]->f_2 && Global_1899528->f_210 == 0)
		{
			func_655(iVar0, iVar1, iVar2);
			if ((*Global_1392915)[iVar2]->f_1 == 3 && Global_1900325->f_24 == 0)
			{
				Global_1392915->f_121[iVar2]->f_15 = 1;
			}
		}
	}
	iVar6 = func_643(iParam0);
	iVar7 = func_656(iVar0, 0);
	if (func_526(Global_35, (*Global_1392915)[iVar2]->f_6, 1) <= 3.5f)
	{
		func_657(iVar0, 0);
	}
	if (!func_658(iVar1, iVar6))
	{
		if (Global_1392915->f_121[iVar2]->f_1 == 1)
		{
			func_659();
		}
		if (iParam1 != -1)
		{
			if ((*Global_1898346)[iParam1]->f_1 & 2 != 0)
			{
				func_660(iParam1, 2);
				set_script_with_name_hash_as_no_longer_needed(iVar7);
			}
		}
		Global_1392915->f_121[iVar2]->f_1 = 0;
		func_661(iVar2);
	}
	else
	{
		Global_1899528->f_204 = iVar1;
		if (Global_1392915->f_121[iVar2]->f_1 == 0)
		{
		}
		Global_1392915->f_121[iVar2]->f_1 = 1;
		if (!func_662(iVar2))
		{
			func_663(iVar2);
			if (func_321(Global_1392915->f_121[iVar2]->f_3))
			{
				if (func_664(Global_1392915->f_121[iVar2]->f_3, 0))
				{
					func_665(Global_1392915->f_121[iVar2]->f_3, 0, 1);
				}
			}
		}
		else
		{
			func_659();
			func_666();
			if (func_667(iVar0))
			{
				bVar4 = func_668(iVar1, iParam1);
			}
			else
			{
				bVar4 = func_669(iVar1, iParam1);
			}
			if (func_670(Global_1392915->f_121[iVar2]->f_3, 1) > 0f)
			{
				disable_control_action(2, 578288361, false);
				disable_control_action(2, -1404316431, false);
				disable_control_action(2, -128997553, false);
				disable_control_action(2, -1304887797, false);
				disable_control_action(2, -1819459471, false);
				disable_control_action(2, 130948705, false);
				if (get_current_ped_weapon(Global_35, &iVar5, true, 0, false))
				{
					if (iVar5 != -1569615261)
					{
						_hide_ped_weapons(Global_35, 2, false);
						task_swap_weapon(Global_35, 0, 0, 1, 1);
					}
				}
			}
			if (bVar4)
			{
				clear_area((*Global_1392915)[iVar2]->f_6, 4f, 65537);
				func_661(iVar2);
				return true;
			}
			if (func_321(Global_1392915->f_121[iVar2]->f_3))
			{
				if (!func_664(Global_1392915->f_121[iVar2]->f_3, 0))
				{
					func_665(Global_1392915->f_121[iVar2]->f_3, 1, 1);
				}
			}
		}
		return bVar4;
	}
	return false;
}

bool func_141(int iParam0)
{
	iVar0 = func_671(Global_1898330[iParam0]);
	if (is_thread_active(Global_1934182->f_73, false))
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_178() != func_672(iVar0))
	{
		return false;
	}
	if (func_673() == -1670940721)
	{
		sVar1 = "bankrobberies";
	}
	else if (func_674())
	{
		iVar2 = func_675(iVar0);
		if (func_676(iVar2, Global_36))
		{
			sVar1 = "bankrobberies_simple";
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	request_script(sVar1);
	if (has_script_loaded(sVar1))
	{
		if (func_677(1073741824))
		{
			Var3.f_1 = 1;
		}
		Var3 = 1;
		Var3.f_2 = func_678(iVar0);
		Var3.f_3 = iVar0;
		Global_1934182->f_73 = start_new_script_with_args(sVar1, &Var3, 4, 5500);
		set_script_as_no_longer_needed(sVar1);
		func_679(1073741824);
		return true;
	}
	return false;
}

bool func_142(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_671(Global_1898330[iParam0]);
	if (bParam1)
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	return func_680(iVar0, 1);
}

bool func_143(int iParam0)
{
	iVar0 = func_671(Global_1898330[iParam0]);
	if (func_681(iVar0, 8))
	{
		return false;
	}
	if (is_thread_active(&Global_1392240, false))
	{
		if (func_682(6, 524288))
		{
			func_683(6, 1);
		}
		return false;
	}
	if (func_684(iVar0) && !does_blip_exist(Global_1898346[iParam0]))
	{
		return false;
	}
	if (!func_685(iVar0))
	{
		return false;
	}
	if (!func_686(iVar0, 8))
	{
		if (func_687(iVar0))
		{
			return false;
		}
	}
	fVar1 = vdist(Global_36, *Global_1392240->f_1[iVar0]);
	if (fVar1 > 200f)
	{
		return false;
	}
	if (!func_688(iVar0))
	{
		return false;
	}
	if (func_681(iVar0, 2))
	{
		return false;
	}
	if (func_689(iVar0))
	{
		return false;
	}
	if (func_690(iVar0))
	{
		if (func_682(iVar0, 2))
		{
			if (is_screen_faded_out())
			{
				do_screen_fade_in(500);
			}
			func_691(iVar0, 2);
		}
		return true;
	}
	return false;
}

bool func_144(int iParam0)
{
	if (is_thread_active(&Global_1392581, false))
	{
		return false;
	}
	request_script("trainrobbery_ambient");
	if (has_script_loaded("trainrobbery_ambient"))
	{
		if (func_692(Global_1392581->f_3, 16))
		{
			vVar0.x = 14;
		}
		else
		{
			vVar0.x = func_693(Global_36, 1);
		}
		vVar0.f_1 = Global_1898330[iParam0];
		if (does_entity_exist(Global_1392581->f_44))
		{
			vVar0.f_2 = Global_1392581->f_44;
		}
		Global_1392581 = start_new_script_with_args("trainrobbery_ambient", &vVar0, 3, 2300);
		set_script_as_no_longer_needed("trainrobbery_ambient");
		func_633(vVar0.y);
		return true;
	}
	return false;
}

bool func_145(int iParam0)
{
	iVar0 = func_671(Global_1898330[iParam0]);
	if (is_thread_active((*Global_1392626)[iVar0]->f_21, false))
	{
		return false;
	}
	else if (!func_694((*Global_1392626)[iVar0]->f_9, 2))
	{
		return false;
	}
	else if (!func_695(iVar0, (*Global_1392626)[iVar0]->f_5))
	{
		return false;
	}
	else if (!func_696(iVar0))
	{
		return false;
	}
	Var1 = { (*Global_1392626)[iVar0]->f_13 };
	request_script(&Var1);
	if (has_script_loaded(&Var1))
	{
		iVar9 = iVar0;
		(*Global_1392626)[iVar0]->f_21 = start_new_script_with_args(&Var1, &iVar9, 1, 7000);
		set_script_as_no_longer_needed(&Var1);
		func_697(&((*Global_1392626)[iVar0]->f_9), 2);
		func_633((*Global_1392626)[iVar0]->f_3);
		return true;
	}
	return false;
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_698(iParam0);
	if (!func_636(iVar0))
	{
		return false;
	}
	if (!func_699(iVar0))
	{
		return false;
	}
	if (bParam1)
	{
		if (Global_1310720->f_6 == 0)
		{
			return false;
		}
	}
	if (bParam2)
	{
		return false;
	}
	if ((get_frame_count() % 30) == 0)
	{
		func_700(iVar0);
		func_701(iVar0);
	}
	if (func_702(iVar0))
	{
		if (func_703(iVar0))
		{
			func_704(iVar0);
			return true;
		}
	}
	return false;
}

bool func_147(int iParam0, int iParam1)
{
	if (func_705(iParam0))
	{
		return false;
	}
	if (!func_623(iParam1, 64) && iParam0 != func_707(0, func_706(func_335())))
	{
		func_708(iParam0, iParam1);
	}
	if (func_320(iParam0))
	{
		return true;
	}
	return false;
}

void func_148()
{
	_0x608ad36a644a97fe(-1250929611, 1, 0);
	_0x608ad36a644a97fe(1462638198, 1, 0);
	_0x608ad36a644a97fe(-1043434543, 1, 0);
	_0x608ad36a644a97fe(225514697, 1, 0);
	_0x608ad36a644a97fe(11966224, 1, 0);
	_0x608ad36a644a97fe(-1038436471, 1, 0);
}

void func_149()
{
	if (!func_709())
	{
		Global_1945917->f_7 = 0;
		return;
	}
	if (does_entity_exist(Global_1945917->f_7))
	{
		get_current_ped_weapon(Global_1945917->f_7, &iVar0, false, 3, false);
		if (func_710(iVar0))
		{
			if (_is_weapon_pistol(iVar0))
			{
				if (!func_282(Global_1894899->f_2) || Global_1894899->f_2 != 5)
				{
					fVar1 = _0xd56e5f336c675efa(get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_1945917->f_7, 3)));
					remove_weapon_from_ped(Global_1945917->f_7, iVar0, true, -142743235);
					iVar0 = _0xf8204ef17410bf43(-1101297303, 1056964608, 1065353216, 0);
					_give_weapon_to_ped_2(Global_1945917->f_7, iVar0, _get_weapon_clip_size(iVar0), true, false, 3, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		get_current_ped_weapon(Global_1945917->f_7, &iVar0, false, 2, false);
		if (func_710(iVar0))
		{
			if (_is_weapon_pistol(iVar0))
			{
				if (!func_282(Global_1894899->f_2) || Global_1894899->f_2 != 5)
				{
					fVar1 = _0xd56e5f336c675efa(get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_1945917->f_7, 2)));
					remove_weapon_from_ped(Global_1945917->f_7, iVar0, true, -142743235);
					iVar0 = _0xf8204ef17410bf43(-1101297303, 1056964608, 1065353216, 0);
					_give_weapon_to_ped_2(Global_1945917->f_7, iVar0, _get_weapon_clip_size(iVar0), true, false, 2, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		Global_1945917->f_7 = 0;
	}
}

void func_150()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!is_entity_dead(&(Global_1945917->f_8[iVar0])))
		{
			if (_0xa0bc8faed8cfeb3c(&(Global_1945917->f_8[iVar0])))
			{
				if (_is_ped_child(&(Global_1945917->f_8[iVar0])))
				{
					set_entity_invincible(&(Global_1945917->f_8[iVar0]), true);
					set_entity_can_be_damaged(&(Global_1945917->f_8[iVar0]), false);
					set_entity_proofs(&(Global_1945917->f_8[iVar0]), 255, false);
				}
				Global_1945917->f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_151(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case 2145012826:
			func_711(iParam0);
			break;
	}
}

void func_152(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
		case 402722103:
			func_712(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			if (func_82() == -1)
			{
				func_713(iParam0);
			}
			break;
		case -1682387274:
			break;
	}
}

void func_153(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
			break;
	}
}

void func_154(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
			break;
	}
}

void func_155(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
		case 402722103:
			func_714(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			func_715(iParam0);
			break;
		case -617453104:
			func_716(iParam0);
			break;
		case -1730772208:
			func_717(iParam0);
			break;
	}
}

void func_156(int iParam0)
{
	if (func_82() != 0)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case -1651585854:
			func_718(iParam0);
			break;
		case -1985279805:
			func_719(iParam0);
			break;
		case 218595333:
			func_720(iParam0);
			break;
		case 1387172233:
			func_721(iParam0);
			break;
		case 1082572570:
			func_722(iParam0);
			break;
		case -687266558:
			func_723(iParam0);
			func_724(iParam0);
			break;
	}
}

void func_157(int iParam0)
{
	iVar18 = get_event_at_index(0, iParam0);
	iVar19 = 10;
	switch (iVar18)
	{
		case -1286831256:
			if (func_559(128))
			{
				func_563(128);
				return;
			}
			if (!get_event_data(0, iParam0, &Var3, 5))
			{
				return;
			}
			if (func_82() == -1)
			{
				if (is_entity_dead(Global_35))
				{
					return;
				}
				func_725(1);
				if (func_727(func_726()))
				{
					func_729(func_728(func_726()), Global_35, -1, 1);
					func_730();
				}
				if (!Var3.f_3)
				{
					Global_40.f_7730 = 1;
				}
				if (does_entity_exist(Var3.f_2))
				{
					_0x18ff3110cf47115d(Var3.f_2, 10, 0);
					if (_0x7e02e4218d916b94(Var3.f_2, 0, 0) == 0)
					{
						_0xa48e4801debdf7e4(Var3.f_2, 0);
					}
				}
				Global_1946804->f_2790 = _0x1f714e7a9dadfc42(Global_35);
			}
			else if (Global_1132155->f_6001 && Global_1132155->f_6001.f_1)
			{
				return;
			}
			if (&Global_1946804->f_1497.f_1[iVar19] != &Global_1946804->f_57[iVar19])
			{
				func_731(&(Global_1946804->f_1497.f_1[iVar19]), 0);
			}
			if (func_559(32768))
			{
				func_732();
			}
			else
			{
				func_733(player_ped_id(), &(Global_1946804->f_57[10]), 0, 1108822547, 1, 1, 0, 0, 1, 0);
			}
			func_734(0);
			break;
		case -369170747:
			if (!get_event_data(0, iParam0, &Var8, 10))
			{
				return;
			}
			iVar0 = _0x7e02e4218d916b94(Var8.f_1, 0, 0);
			Global_40.f_7730 = 0;
			if (func_735(69) || func_735(70))
			{
				func_736(69);
				func_736(70);
			}
			if (&Global_1946804->f_1497.f_1[iVar19] != &Global_1946804->f_57[iVar19])
			{
				func_731(&(Global_1946804->f_1497.f_1[iVar19]), 0);
			}
			if (iVar0 == 0)
			{
				func_737(73, 0);
				func_738(Var8.f_2, Var8.f_3, Var8.f_4, Var8.f_5, Var8.f_6, Var8.f_7, Var8.f_8, Var8.f_9);
				if (&Global_1946804->f_1497.f_1[iVar19] != &Global_1946804->f_57[iVar19])
				{
					func_731(&(Global_1946804->f_1497.f_1[iVar19]), 0);
				}
				func_733(player_ped_id(), &(Global_1946804->f_57[10]), 1155669136, 1108822547, 1, 1, 0, 0, 1, 0);
			}
			else
			{
				if (func_559(32768))
				{
					func_732();
				}
				iVar1 = iVar0;
				if (!func_739(iVar1, 1, 0))
				{
					func_740(iVar1, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					if (!func_741(71))
					{
						func_737(71, 0);
					}
					else
					{
						func_737(72, 0);
					}
				}
				iVar2 = func_522(iVar1);
				if (iVar2 != -2061583405 && iVar2 != -525676072)
				{
					return;
				}
				if (iVar2 == -525676072)
				{
					_0xc494c76a34266e82(Global_35, 0);
					if (add_shocking_event_for_entity(1925708505, Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
					{
					}
				}
				func_742(iVar1);
				func_733(player_ped_id(), iVar0, 0, func_743(iVar1), 1, 1, 0, 0, 1, 0);
			}
			if (does_entity_exist(Global_1946804->f_2790))
			{
				_0x18ff3110cf47115d(Global_1946804->f_2790, 10, 0);
			}
			func_734(0);
			break;
	}
}

void func_158(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case 2030961287:
			if (!get_event_data(0, iParam0, &Var0, 2))
			{
				return;
			}
			if (Var0 == func_744(Global_35))
			{
				return;
			}
			if (get_entity_model(Var0) == -1865855539)
			{
				_0x18ff3110cf47115d(Var0.f_1, 10, 0);
				_0x18ff3110cf47115d(Var0.f_1, 2, 0);
				return;
			}
			if (is_entity_a_ped(Var0) && get_ped_relationship_group_hash(get_ped_index_from_entity_index(Var0)) == 1030835986)
			{
				_0x18ff3110cf47115d(Var0.f_1, 10, 0);
				_0x18ff3110cf47115d(Var0.f_1, 2, 0);
				return;
			}
			if (_0x7e02e4218d916b94(Var0.f_1, 0, 0) != 0)
			{
				_0xa48e4801debdf7e4(Var0.f_1, 1);
			}
			break;
	}
}

void func_159(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -1863021589:
			func_745(iParam0);
			break;
		case -1231347001:
			func_746(iParam0);
			break;
	}
}

void func_160(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 1794914733:
			break;
		case 353377915:
			break;
		case 1208357138:
			func_747(iParam0, 0, 0);
			break;
		case 1081092949:
			func_748(iParam0);
			break;
		case 1505348054:
			func_749(iParam0);
			break;
	}
}

void func_161(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 2145012826:
			func_750(iParam0);
			func_751(iParam0);
			break;
		case -978548489:
		case 402722103:
			func_752(iParam0);
			break;
		case 1811873798:
			func_753(iParam0);
			break;
		case 313219550:
			func_754(iParam0);
			break;
		case -2027383723:
			func_755(iParam0);
			break;
	}
}

void func_162(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case -978548489:
		case 402722103:
		case 2145012826:
			func_756(iParam0);
			break;
		case 1811873798:
			func_757(iParam0);
			break;
	}
}

void func_163(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case -178091376:
			func_758(iParam0);
			break;
	}
}

void func_164(int iParam0)
{
	if (get_event_at_index(0, iParam0) != 2099179610)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (func_759(Var0.f_1))
	{
		return;
	}
	Var2.f_6 = 3;
	Var2 = Var0;
	Var2.f_1 = Var0.f_1;
	Var2.f_2 = Var0.f_1;
	sVar14 = func_760(Var0.f_1);
	if (!is_string_null_or_empty(sVar14))
	{
		Var2.f_3 = sVar14;
	}
	if (func_231(Var0.f_1, 0))
	{
		iVar15 = func_761(Var0.f_1, 1);
		if (iVar15 != 0)
		{
			Var2.f_2 = iVar15;
		}
		else
		{
			uVar16 = Var0.f_1;
			if (func_762(&uVar16))
			{
				Var2.f_2 = uVar16;
			}
		}
		_0xfd41d1d4350f6413(&Var2);
	}
	else
	{
		_0xfd41d1d4350f6413(&Var2);
	}
}

void func_165(int iParam0)
{
	if (get_event_data(0, iParam0, &uVar0, 6))
	{
		_copy_memory(Global_1945917, &uVar0, 6);
		Global_1945917->f_6 = get_game_timer();
	}
}

void func_166(int iParam0)
{
	if (func_110())
	{
		return;
	}
	if (Global_1572887->f_8)
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case -2091944374:
			func_763(iParam0);
			break;
		case -1511724297:
			func_764(iParam0);
			break;
		case -369170747:
			func_765(iParam0);
			break;
	}
}

void func_167(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 10);
	iVar10 = Var0;
	iVar11 = Var0.f_7;
	bVar13 = false;
	switch (iVar10)
	{
		case 30:
			if (does_entity_exist(Var0.f_2))
			{
				if (!_0x0772f87d7b07719a(get_player_index(), iVar11, Var0.f_3))
				{
					_0x946d46cd6dfb9742(get_player_index(), iVar11, Var0.f_3);
				}
				switch (iVar11)
				{
					case 0:
						break;
					case 1:
						if (func_82() == 0)
						{
						}
						else
						{
							if (!func_741(607))
							{
								if ((!func_766() && func_767(4)) && is_player_targetting_entity(player_id(), Var0.f_2, false))
								{
									Global_40.f_11955++;
									if (!func_768() && !func_769())
									{
										if (Global_40.f_11955 >= 2)
										{
											func_737(607, 0);
										}
									}
								}
							}
							if (Var0.f_8 == 0 || Var0.f_8 == 3)
							{
								bVar13 = true;
							}
							iVar12 = get_ped_index_from_entity_index(_get_entity_from_item(Var0.f_2));
							func_245(iVar12, _0x964000d355219fc0(iVar12), bVar13, 0);
							Jump @310; //curOff = 298
							Jump @310; //curOff = 301
						}
					}
					break;
				case 35:
					Global_1935496->f_23 = !Global_1935496->f_23;
					Global_1935496->f_6 = get_game_timer();
					_0xdc68829bb3f37023(get_player_index(), Global_1935496->f_23);
					break;
				case 26:
					break;
			}
		}

void func_168(int iParam0)
{
	if (get_event_data(0, iParam0, &iVar0, 1))
	{
		if (!is_entity_dead(iVar0) && is_ped_human(iVar0))
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				Global_1945917->f_7 = iVar0;
			}
			if (get_entity_model(iVar0) == -631664452 || get_entity_model(iVar0) == 1912073755)
			{
				return;
			}
			iVar1 = func_770();
			if (iVar1 != -1)
			{
				Global_1945917->f_8[iVar1] = iVar0;
			}
		}
	}
}

void func_169(int iParam0)
{
	if (!Global_1945917->f_19)
	{
		Global_1945917->f_20 = (!func_272(0, 0, 1) && !func_273());
		Global_1945917->f_19 = 1;
	}
	switch (get_event_at_index(0, iParam0))
	{
		case 1669410864:
			get_event_data(0, iParam0, &iVar0, 1);
			if (Global_1945917->f_20)
			{
				func_386(0, 10);
			}
			if (iVar0 == -1574980492)
			{
				func_737(444, 0);
			}
			if (iVar0 == -1780627769)
			{
				func_737(446, 0);
			}
			if (iVar0 == 594231547)
			{
				func_737(447, 0);
			}
			if (iVar0 == 1058534988)
			{
				func_737(448, 0);
			}
			if (iVar0 == -1228320627)
			{
				func_737(449, 0);
			}
			if (iVar0 == 650330068)
			{
				func_737(450, 0);
			}
			if (iVar0 == 581017708)
			{
				func_737(451, 0);
			}
			if (iVar0 == -1444506015)
			{
				func_737(452, 0);
			}
			break;
		case 1351025667:
			get_event_data(0, iParam0, &iVar1, 1);
			if (Global_1945917->f_20)
			{
				func_386(0, 10);
			}
			if (iVar1 == -1316535105)
			{
				_unlock_set_visible(-1278339625, true);
				func_737(445, 0);
			}
			break;
	}
}

void func_170(int iParam0)
{
	switch (get_event_at_index(3, iParam0))
	{
		case -1267317510:
			if (func_771())
			{
				func_772(iParam0);
			}
			set_event_flag_for_deletion(3, iParam0, 1);
			break;
		case -346212524:
			func_773(iParam0);
			set_event_flag_for_deletion(3, iParam0, 1);
			break;
	}
}

void func_171()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_774(iVar0))
		{
			func_775(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_172()
{
	iVar0 = 0;
	while (iVar0 < 130)
	{
		if (func_282(iVar0))
		{
			if (func_654(iVar0))
			{
				func_776(iVar0, 1, 350);
			}
			else
			{
				func_776(iVar0, 0, 350);
			}
			if (func_179(iVar0))
			{
				func_777(iVar0, 1);
			}
			else
			{
				func_777(iVar0, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_778(iVar1))
		{
			if (func_779(iVar1, 0))
			{
				func_780(iVar1, 1);
			}
			else
			{
				func_780(iVar1, 0);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_774(iVar2))
		{
			if (func_781(iVar2, 1))
			{
				func_782(iVar2, 1);
			}
			else
			{
				func_782(iVar2, 0);
			}
			if (func_783(iVar2, 4))
			{
				func_784(iVar2, 1);
			}
			else
			{
				func_784(iVar2, 0);
			}
		}
		iVar2++;
	}
}

bool func_173()
{
	if (func_82() == -1)
	{
		if (func_576() || func_785())
		{
			return true;
		}
	}
	else if (func_786(1, 255))
	{
		return true;
	}
	return false;
}

void func_174(bool bParam0)
{
	if (!bParam0)
	{
		if (func_787())
		{
			iVar0 = func_597(func_113());
			if (func_774(iVar0) && func_788(iVar0))
			{
				func_789(iVar0);
				func_790(iVar0, func_601(iVar0));
				func_791(iVar0, 0);
			}
		}
	}
	else
	{
		func_790(func_792(), _get_bounty_for_player(player_id()));
	}
}

void func_175()
{
	if (func_138(player_id(), 1, 1, 1))
	{
		if (_get_bounty_for_player(player_id()) >= get_wanted_level_threshold(1))
		{
			if (!func_179(func_178()))
			{
				func_777(func_178(), 1);
			}
		}
	}
	else if (func_179(func_178()))
	{
		if (_get_bounty_for_player(player_id()) <= 0 || func_794(func_793(func_178())) >= 4320)
		{
			func_777(func_178(), 0);
		}
	}
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		func_796(func_795());
	}
}

void func_177()
{
	iVar0 = func_113();
	if (func_797())
	{
		if (!func_138(player_id(), 0, 1, 1))
		{
			_0xc310239acccf5579();
		}
	}
	if (iVar0 == 8)
	{
		if (Global_1935630->f_18)
		{
			_0x9b4c564bfa7cff37(30f);
			Global_1934266->f_68 = 1;
		}
	}
	else if (Global_1934266->f_68 == 1)
	{
		Global_1934266->f_68 = 0;
		_0x9b4c564bfa7cff37(1f);
	}
	if (Global_1934266->f_335 != Global_1879534->f_7301.f_2[2]->f_1)
	{
		Global_1934266->f_335 = Global_1879534->f_7301.f_2[2]->f_1;
		Global_1934266->f_336 = func_267(11);
	}
	if ((iVar0 == 8 || (Global_1934266->f_336 && func_795() == 3)) || (!func_361(45) && (((((iVar0 == 4 || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16)))
	{
		_0x9f9a829c6751f3c7(player_id(), 45, 1);
	}
}

int func_178()
{
	return Global_1894899->f_2;
}

bool func_179(int iParam0)
{
	if (!func_282(iParam0))
	{
		return false;
	}
	return func_798(iParam0, 67108864);
}

void func_180(bool bParam0, bool bParam1)
{
	iVar0 = func_795();
	bVar1 = false;
	bVar2 = Global_1935630->f_13;
	bVar3 = true;
	bVar4 = false;
	if ((iVar0 == 5 || bParam1) || _0x139efb0a71dd9011())
	{
		if (Global_1934266->f_78.f_59 != 0)
		{
			func_799(0);
		}
	}
	else if ((!bVar2 && !bParam0) && Global_1934266->f_78.f_62 == -1)
	{
		if (Global_1934266->f_78.f_59 != 0)
		{
			if (Global_1934266->f_78.f_59 != 9)
			{
				func_799(0);
			}
		}
	}
	else if (bParam0)
	{
		bVar1 = func_287(player_id());
	}
	if (Global_1934266->f_78.f_62 != -1)
	{
		if (Global_1934266->f_78.f_59 != Global_1934266->f_78.f_62)
		{
			func_799(Global_1934266->f_78.f_62);
		}
	}
	switch (Global_1934266->f_78.f_59)
	{
		case 0:
			if (iVar0 != 5)
			{
				if (func_800(player_id(), 0, 0, 1))
				{
					func_801(bVar1);
					return;
				}
				else if (bVar2)
				{
					if (func_799(1))
					{
						return;
					}
				}
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					func_803();
					func_804(-1);
					_0x3e98ac9d8c56c62c(0);
					if (func_805(4))
					{
						func_806(0);
					}
					func_807(2);
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					_databinding_write_data_string(Global_1934266->f_78.f_1.f_2, "LAW_UI_WITNESS");
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, true);
					func_808();
					func_809(&(Global_1934266->f_78.f_56));
					if (!is_player_being_arrested(get_player_index(), true))
					{
						play_sound_frontend("Witness", "HUD_Wanted_Sounds", true, 0);
					}
					if (_0x69e181772886f48b(player_id()))
					{
						Global_1934266->f_6 = _get_hud_player_crime_type(player_id());
						sVar5 = func_810(Global_1934266->f_6);
						if (Global_1934266->f_6 == -1361146315)
						{
							if (!func_741(270))
							{
								if (!func_769() && !func_768())
								{
									func_737(270, 0);
								}
							}
						}
						_databinding_write_data_int(Global_1934266->f_78.f_1.f_12, 1);
						_databinding_write_data_string(Global_1934266->f_78.f_1.f_5, sVar5);
						func_807(2);
					}
					else
					{
						if ((!func_769() && !func_741(259)) && !func_768())
						{
							func_737(259, 0);
						}
						_databinding_write_data_int(Global_1934266->f_78.f_1.f_12, 0);
						_databinding_write_data_int(Global_1934266->f_78.f_1.f_3, 0);
						_databinding_write_data_string(Global_1934266->f_78.f_1.f_4, "LAW_UI_INVESTIGATING");
						func_807(1);
					}
					break;
				case 1:
					if (_0x69e181772886f48b(player_id()) || bParam0)
					{
						_databinding_write_data_int(Global_1934266->f_78.f_1.f_12, 1);
						func_807(2);
					}
					break;
				case 2:
					iVar23 = _get_hud_player_crime_type(player_id());
					if (_0xdaefdfdb2aeece37(iVar23, 0) >= _0xdaefdfdb2aeece37(Global_1934266->f_6, 0))
					{
						Global_1934266->f_6 = iVar23;
					}
					sVar5 = func_810(Global_1934266->f_6);
					_databinding_write_data_string(Global_1934266->f_78.f_1.f_5, sVar5);
					if (_databinding_read_data_int(Global_1934266->f_78.f_1.f_3) != 1)
					{
						if ((!func_769() && !func_741(261)) && !func_768())
						{
							func_737(261, 0);
						}
						func_808();
					}
					else if ((!func_769() && !func_741(260)) && !func_768())
					{
						func_737(260, 0);
					}
					func_811();
					if (bParam0 && Global_1935630->f_15 != 1370593166)
					{
						func_801(bVar1);
						return;
					}
					break;
			}
			break;
		case 2:
			bVar4 = true;
			if (func_812())
			{
				if (func_799(5))
				{
					return;
				}
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					func_808();
					_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_CRIME_REPORTED");
					_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 0);
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, false);
					if (Global_1935630->f_18)
					{
						_0x9c5bd8c562565ce6(&Var6);
						if (Var6.f_16)
						{
							func_808();
							_databinding_write_data_bool(Global_1934266->f_78.f_19.f_13, true);
						}
						else if (!_databinding_read_data_bool(Global_1934266->f_78.f_19.f_14))
						{
							_databinding_write_data_bool(Global_1934266->f_78.f_19.f_14, true);
						}
					}
					else
					{
						_databinding_write_data_bool(Global_1934266->f_78.f_19.f_13, true);
					}
					func_811();
					func_809(&(Global_1934266->f_78.f_56));
					func_807(1);
					break;
				case 1:
					if (Global_1935630->f_18)
					{
						_0x9c5bd8c562565ce6(&Var6);
					}
					if (((func_813(&(Global_1934266->f_78.f_56)) > 4000 && _0x9d5c9a5a3321b128(player_id())) || Var6.f_12 == 5) || Var6.f_12 == 3)
					{
						if (func_814())
						{
							_0x3e98ac9d8c56c62c(1);
						}
						if (func_799(3))
						{
							return;
						}
					}
					break;
			}
			break;
		case 3:
			bVar4 = true;
			if (func_812())
			{
				if (func_799(5))
				{
					return;
				}
			}
			else
			{
				if (!func_814() || !Global_1935630->f_18)
				{
					if (func_799(8))
					{
						_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_INVESTIGATING");
						_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 0);
						return;
					}
				}
				if (func_815())
				{
					if (func_799(4))
					{
						return;
					}
				}
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, false);
					_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_INVESTIGATING");
					_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 0);
					func_809(&(Global_1934266->f_78.f_56));
					func_807(1);
					break;
				case 1:
					if (func_813(&(Global_1934266->f_78.f_56)) > 2000)
					{
						_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 1);
						if (Global_1935630->f_18)
						{
							_0x9c5bd8c562565ce6(&Var6);
						}
						if (Var6.f_16)
						{
							if (_databinding_read_data_bool(Global_1934266->f_78.f_19.f_14))
							{
								_databinding_write_data_bool(Global_1934266->f_78.f_19.f_14, false);
								_databinding_write_data_bool(Global_1934266->f_78.f_19.f_13, true);
							}
							_databinding_write_data_string(Global_1934266->f_78.f_19.f_5, func_816());
						}
						else
						{
							if (!_databinding_read_data_bool(Global_1934266->f_78.f_19.f_14))
							{
								_databinding_write_data_bool(Global_1934266->f_78.f_19.f_14, true);
								_databinding_write_data_bool(Global_1934266->f_78.f_19.f_13, false);
							}
							_databinding_write_data_string(Global_1934266->f_78.f_19.f_5, "LAW_UI_UNKNOWN_SUSPECT");
						}
						func_809(&(Global_1934266->f_78.f_56));
						func_807(2);
					}
					break;
				case 2:
					if (func_813(&(Global_1934266->f_78.f_56)) > 2000)
					{
						func_809(&(Global_1934266->f_78.f_56));
						if (Global_1935630->f_18)
						{
							_0x9c5bd8c562565ce6(&Var6);
						}
						if (Var6.f_12 == 3)
						{
							_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_MOVE_ALONG");
						}
						else
						{
							_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_INVESTIGATING");
						}
						_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 0);
						func_807(1);
					}
					break;
			}
			break;
		case 4:
			bVar4 = true;
			if (func_812())
			{
				if (func_799(5))
				{
					return;
				}
			}
			else if (!func_815())
			{
				if (func_799(3))
				{
					return;
				}
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_14, true);
					_databinding_write_data_string(Global_1934266->f_78.f_19.f_4, "LAW_UI_INTERROGATING");
					_databinding_write_data_int(Global_1934266->f_78.f_19.f_12, 0);
					if ((!func_769() && !func_741(271)) && !func_768())
					{
						func_737(271, 0);
					}
					func_809(&(Global_1934266->f_78.f_56));
					func_807(1);
					break;
				case 1:
					if (func_813(&(Global_1934266->f_78.f_56)) > 2000)
					{
						func_809(&(Global_1934266->f_78.f_56));
					}
					break;
				case 2:
					break;
			}
			break;
		case 5:
			func_804(func_795());
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					func_808();
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_15, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_15, false);
					_databinding_write_data_string(Global_1934266->f_78.f_37.f_4, "");
					_databinding_write_data_string(Global_1934266->f_78.f_37.f_4, func_816());
					_databinding_write_data_int(Global_1934266->f_78.f_37.f_12, 0);
					if (!is_player_being_arrested(get_player_index(), true))
					{
						play_sound_frontend("Wanted_Spotted", "HUD_Wanted_Sounds", true, 0);
					}
					func_809(&(Global_1934266->f_78.f_56));
					func_807(1);
					break;
				case 1:
					if (func_813(&(Global_1934266->f_78.f_56)) > 4000)
					{
						if (Global_1934266->f_6 == 0)
						{
							_0x6abc50979655bee7(player_id(), &uVar24, 1);
							Global_1934266->f_6 = uVar24;
						}
						sVar5 = func_810(Global_1934266->f_6);
						_databinding_write_data_string(Global_1934266->f_78.f_37.f_5, sVar5);
						_databinding_write_data_int(Global_1934266->f_78.f_37.f_12, 1);
						func_809(&(Global_1934266->f_78.f_56));
						func_807(2);
					}
					break;
				case 2:
					if (func_813(&(Global_1934266->f_78.f_56)) > 4000)
					{
						if (func_799(6))
						{
							return;
						}
					}
					break;
			}
			break;
		case 6:
			func_817();
			if (Global_1935630->f_18)
			{
				_0x9c5bd8c562565ce6(&Var6);
				if (Var6.f_16)
				{
					func_804(func_795());
				}
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					func_818(3);
					_0x3e98ac9d8c56c62c(1);
					_databinding_write_data_int(Global_1934266->f_78.f_37.f_12, 0);
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, true);
					func_808();
					if (_0x717da2281df90855(player_id()) > 0f)
					{
						_databinding_write_data_bool(Global_1934266->f_78.f_37.f_15, true);
						_databinding_write_data_bool(Global_1934266->f_78.f_37.f_15, false);
					}
					func_807(2);
					break;
				case 2:
					if (_0x717da2281df90855(player_id()) > 1f)
					{
						if (!func_814())
						{
							if (func_799(8))
							{
								return;
							}
						}
						else if (func_799(7))
						{
							return;
						}
					}
					break;
			}
			break;
		case 7:
			bVar4 = true;
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_802();
					_0x3e98ac9d8c56c62c(1);
					_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, false);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, true);
					_databinding_write_data_bool(Global_1934266->f_78.f_37.f_13, true);
					_databinding_write_data_int(Global_1934266->f_78.f_37.f_12, 1);
					_databinding_write_data_string(Global_1934266->f_78.f_37.f_5, "LAW_UI_LAW_SEARCHING");
					func_809(&(Global_1934266->f_78.f_56));
					func_807(2);
					break;
				case 2:
					fVar41 = _0x717da2281df90855(player_id());
					if (fVar41 <= 0f && _0x9945a3e2528a02e8(player_id()))
					{
						if (bVar1)
						{
							if (func_799(10))
							{
								return;
							}
						}
						else if (func_799(6))
						{
							return;
						}
					}
					if (!func_814() || !Global_1935630->f_18)
					{
						if (func_799(8))
						{
							return;
						}
					}
					Global_1934266->f_78.f_61 = fVar41;
					break;
			}
			break;
		case 8:
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					_0x3e98ac9d8c56c62c(0);
					if (!Global_1935630->f_18)
					{
						_databinding_write_data_bool(Global_1934266->f_78.f_1.f_16, true);
						_databinding_write_data_bool(Global_1934266->f_78.f_19.f_16, true);
						_databinding_write_data_bool(Global_1934266->f_78.f_37.f_16, true);
					}
					else
					{
						_databinding_write_data_bool(Global_1934266->f_78.f_1.f_17, true);
						_databinding_write_data_bool(Global_1934266->f_78.f_19.f_17, true);
						_databinding_write_data_bool(Global_1934266->f_78.f_37.f_17, true);
						if ((!func_769() && !func_741(267)) && !func_768())
						{
							func_737(267, 0);
						}
					}
					_0x35a33783ec3c3448(1);
					func_809(&(Global_1934266->f_78.f_56));
					func_807(2);
					break;
				case 2:
					if (func_814() && Global_1935630->f_18)
					{
						func_801(bVar1);
						if (func_819(267))
						{
							func_820(267);
						}
						return;
					}
					if (_databinding_read_data_bool(Global_1934266->f_78.f_37.f_16))
					{
						iVar42 = 10000;
					}
					else
					{
						iVar42 = 35000;
					}
					_0x39d8d7082bc34b72(iVar42);
					_0x1ad8ad999c27f44a(func_813(&(Global_1934266->f_78.f_56)));
					if (func_813(&(Global_1934266->f_78.f_56)) > iVar42)
					{
						if (func_819(267))
						{
							func_820(267);
						}
						if (!Global_1935630->f_18)
						{
							if (func_799(9))
							{
								return;
							}
						}
						else if (func_821())
						{
							return;
						}
					}
					break;
			}
			break;
		case 9:
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					func_803();
					func_809(&(Global_1934266->f_78.f_56));
					func_807(1);
					break;
				case 1:
					if (func_813(&(Global_1934266->f_78.f_56)) > 1000)
					{
						if (func_774(func_792()))
						{
							iVar43 = func_822(func_792());
							if (iVar43 > 0)
							{
								func_602(-1, -1, -1, 0, func_792(), 0);
							}
						}
						func_807(2);
					}
					break;
				case 2:
					func_799(0);
					break;
			}
			break;
		case 10:
			bVar3 = false;
			if (!bVar1)
			{
				func_801(bVar1);
				return;
			}
			switch (Global_1934266->f_78.f_60)
			{
				case 0:
					if (_0x9945a3e2528a02e8(player_id()))
					{
						func_802();
						_databinding_write_data_bool(Global_1934266->f_78.f_55, true);
						func_809(&(Global_1934266->f_78.f_56));
						func_807(1);
					}
					break;
				case 1:
					if (func_813(&(Global_1934266->f_78.f_56)) > 4000)
					{
						_databinding_write_data_bool(Global_1934266->f_78.f_55, false);
						func_807(2);
					}
					break;
			}
			break;
	}
	func_823(bVar3, bVar4);
}

void func_181()
{
	iVar0 = get_game_timer();
	if (iVar0 <= Global_36633)
	{
		func_588(1);
	}
	if (iVar0 <= &Global_1911913 + 1500)
	{
		disable_control_action(0, 130948705, false);
	}
	if (iVar0 <= Global_36620)
	{
		func_824();
	}
	switch (Global_36621)
	{
		case 1:
			if (!Global_36634)
			{
				if (!func_321(&(Global_36622[1])))
				{
					Global_36622[1] = func_825("DOCUMENT_INSPECTION_PREV_DOC", 538512052, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_665(&(Global_36622[1]), &(Global_36627[1]), 1);
					func_324(&(Global_36622[1]), 1310260484, 0, 1);
				}
				if (!func_321(&(Global_36622[0])))
				{
					Global_36622[0] = func_825("DOCUMENT_INSPECTION_NEXT_DOC", -914910537, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_665(&(Global_36622[0]), &(Global_36627[0]), 1);
					func_324(&(Global_36622[0]), 1310260484, 0, 1);
				}
			}
			if (!Global_36635)
			{
				if (!func_321(&(Global_36622[2])))
				{
					Global_36622[2] = func_825("HUD_SATCHEL", -1692620582, Global_35, 2, 0, 0, 1, 5, 1070386381, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
					func_324(&(Global_36622[2]), 1310260484, 0, 1);
				}
			}
			if (!func_321(&(Global_36622[3])))
			{
				Global_36622[3] = func_825("VI_READ", -473983589, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_665(&(Global_36622[3]), &(Global_36627[3]), 1);
				if (!Global_36636)
				{
					func_324(&(Global_36622[3]), 1310260484, 0, 1);
				}
			}
			Global_36636 = 0;
			if ((((_get_number_of_references_of_script_with_name_hash(195871429) == 0 && _get_number_of_references_of_script_with_name_hash(2006217472) == 0) && _get_number_of_references_of_script_with_name_hash(-704221704) == 0) && _get_number_of_references_of_script_with_name_hash(-369505775) == 0) && get_game_timer() >= Global_36632)
			{
				Global_36621 = 2;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (func_321(&(Global_36622[iVar1])))
				{
					func_327(Global_36622[iVar1], 0, 1);
				}
				iVar1++;
			}
			_0xcb9401f918cb0f75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
			Global_36621 = 0;
			break;
	}
}

void func_182()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch ((*Global_1911894)[iVar0]->f_1)
		{
			case 4:
				if (!_0x038b1f1674f0e242(Global_35))
				{
					func_826(iVar0);
				}
				break;
			case 3:
				if (!(*Global_1911894)[iVar0]->f_4)
				{
					if ((*Global_1911894)[iVar0]->f_2 != 0)
					{
						_set_streamed_txd_as_no_longer_needed((*Global_1911894)[iVar0]->f_2);
						(*Global_1911894)[iVar0]->f_2 = 0;
					}
				}
				else if ((*Global_1911894)[iVar0]->f_3 != 0)
				{
					_0xf1e6979c0b779985(&((*Global_1911894)[iVar0]->f_3));
					(*Global_1911894)[iVar0]->f_3 = 0;
				}
				(*Global_1911894)[iVar0]->f_1 = 0;
				break;
			case 0:
				if (Global_1911894[iVar0] != 0)
				{
					(*Global_1911894)[iVar0]->f_4 = func_828(func_827(Global_1911894[iVar0], -949239683));
					if (!(*Global_1911894)[iVar0]->f_4)
					{
						if (func_829(Global_1911894[iVar0], &iVar1, 805880880, -401018458, 0, 0))
						{
							if (_does_streamed_txd_exist(iVar1))
							{
								_request_streamed_txd(iVar1, false);
								(*Global_1911894)[iVar0]->f_2 = iVar1;
							}
						}
						(*Global_1911894)[iVar0]->f_1 = 1;
					}
					else
					{
						iVar4 = func_830(Global_1911894[iVar0]);
						(*Global_1911894)[iVar0]->f_3 = _0xb6857100f8fd433c(iVar4, -2);
						func_831(iVar0);
						(*Global_1911894)[iVar0]->f_1 = 2;
					}
				}
				break;
			case 1:
				if (!(*Global_1911894)[iVar0]->f_4)
				{
					if ((*Global_1911894)[iVar0]->f_2 != 0)
					{
						if (_has_streamed_txd_loaded((*Global_1911894)[iVar0]->f_2))
						{
							(*Global_1911894)[iVar0]->f_1 = 2;
						}
					}
					else
					{
						(*Global_1911894)[iVar0]->f_1 = 2;
					}
				}
				else
				{
					(*Global_1911894)[iVar0]->f_1 = 2;
				}
				break;
			case 2:
				if ((*Global_1911894)[iVar0]->f_4)
				{
					func_831(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

bool func_183()
{
	return _get_number_of_references_of_script_with_name_hash(-310160435) > 0;
}

bool func_184(char* sParam0)
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

void func_185()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "binoculars", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_527(Var10, 0);
}

void func_186()
{
	if (is_bit_set(&Global_1357510, 0))
	{
		set_bit(Global_1357510, 1);
		clear_bit(Global_1357510, 0);
		return;
	}
	if (!is_bit_set(&Global_1357510, 0))
	{
		clear_bit(Global_1357510, 1);
		return;
	}
}

void func_187()
{
	if (!is_bit_set(&Global_1357510, 4))
	{
		if (is_bit_set(&Global_1357510, 1))
		{
			func_832(64);
		}
	}
}

bool func_188()
{
	return _get_number_of_references_of_script_with_name_hash(-92416669) > 0;
}

void func_189()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "camera_item", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_527(Var10, 0);
}

bool func_190()
{
	return _get_number_of_references_of_script_with_name_hash(-458977373) > 0;
}

void func_191()
{
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "electric_lantern", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_527(Var10, 0);
}

bool func_192(int iParam0, int iParam1)
{
	if (!Global_1058888->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1146941[iParam1] && iParam0) != 0;
}

bool func_193(int iParam0, int iParam1)
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

bool func_194(bool bParam0)
{
	return (((!bParam0 && !func_197(2)) && !func_196()) && (is_screen_faded_in() || func_197(1)));
}

void func_195()
{
	if (func_833("fishing_core", 5500, Global_1900073))
	{
	}
}

bool func_196()
{
	if (is_thread_active(&Global_1900073, false))
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(-506425016) > 0)
	{
		return true;
	}
	return false;
}

bool func_197(int iParam0)
{
	return func_123(Global_1900073->f_1, iParam0);
}

bool func_198()
{
	bVar0 = true;
	if ((Global_1914319->f_17370 || func_834()) || Global_1935689->f_9)
	{
		bVar0 = false;
	}
	if (!func_835(bVar0, 1, 0, 1))
	{
		if (&Global_1935689 == 1)
		{
		}
		return false;
	}
	if (!Global_1935689->f_2)
	{
		if (&Global_1935689 == 1)
		{
		}
		return false;
	}
	bVar1 = Global_1935689->f_6;
	Global_1935689->f_6 = 0;
	if (bVar1)
	{
		if (&Global_1935689 == 1)
		{
		}
		return false;
	}
	if (func_207())
	{
		if (&Global_1935689 == 1)
		{
		}
		return false;
	}
	return true;
}

bool func_199(int iParam0, bool bParam1)
{
	if (bParam1 && !func_321(iParam0))
	{
		return false;
	}
	iVar0 = func_836(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_200(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_201()
{
	func_837();
}

void func_202()
{
	if (func_505())
	{
		return;
	}
	iVar4 = 1433015236;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1340543710:
					func_838(Var0, Var0.f_2);
					_event_manager_pop_event(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 290710310:
							func_839(Var0.f_3);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
}

void func_203()
{
	bVar0 = func_840();
	if (bVar0)
	{
		_0x0a487cc74a517fb5(bVar0);
	}
	Global_1898068->f_3 = bVar0;
}

bool func_204()
{
	if (!Global_1898068->f_1)
	{
		return false;
	}
	bVar0 = Global_1572887->f_12 == -1;
	if (!bVar0)
	{
		if (&Global_1058888)
		{
			return false;
		}
	}
	if (!func_835((bVar0 && !func_841()), func_841(), 1, 1))
	{
		return false;
	}
	return true;
}

void func_205(bool bParam0)
{
	if (bParam0)
	{
		if (!&Global_1898068)
		{
			Global_1898068 = bParam0;
		}
	}
	else if (&Global_1898068)
	{
		Global_1898068 = bParam0;
	}
}

int func_206()
{
	if (func_82() == -1)
	{
		if (func_842(&(Global_1935496->f_115[1]), 1))
		{
			return 1;
		}
	}
	else if (func_842(&(Global_1935496->f_115[3]), 1))
	{
		return 1;
	}
	return 0;
}

bool func_207()
{
	return &Global_1898068;
}

void func_208(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

void func_209()
{
	if (is_thread_active(Global_1898068->f_5, false))
	{
		return;
	}
	if (has_script_loaded("player_menu") && func_207())
	{
		Global_1898068->f_5 = start_new_script("player_menu", 1400);
		set_script_as_no_longer_needed("player_menu");
	}
	else
	{
		request_script("player_menu");
		func_205(1);
	}
}

int func_210(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_232(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_761(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_843(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_221(bParam2), iParam0, 0);
	return iVar2;
}

void func_211()
{
	Global_1935496->f_20 = 0;
}

void func_212()
{
	if (Global_1935496->f_124)
	{
		Global_1935496->f_33 = _databinding_add_data_container_from_path("", "quick_select_satchel_shortcut");
		Global_1935496->f_33.f_1 = _databinding_add_data_bool(Global_1935496->f_33, "isAccessible", true);
	}
}

void func_213()
{
	if (func_82() == -1 && Global_1935496->f_123)
	{
		Global_1935496->f_35 = _databinding_add_data_container_from_path("", "quick_select_journal_shortcut");
		Global_1935496->f_35.f_1 = _databinding_add_data_bool(Global_1935496->f_35, "isAccessible", true);
		Global_1935496->f_39 = _databinding_add_data_bool(Global_1935496->f_35, "hasNewEntry", func_844());
	}
}

void func_214()
{
	if (func_82() == -1)
	{
		Global_1935496->f_37 = _databinding_add_data_container_from_path("", "quick_select_crafting_menu_shortcut");
		Global_1935496->f_37.f_1 = _databinding_add_data_bool(Global_1935496->f_37, "isAccessible", true);
	}
}

void func_215()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		func_327(Global_1935496->f_115[iVar1], 1, 1);
		iVar0++;
	}
	Global_1935496->f_20 = 0;
}

void func_216()
{
	iVar0 = func_221(0);
	func_845(iVar0, 1, 0, 0, 1);
	func_846(iVar0);
}

void func_217()
{
}

void func_218(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_847(661720433) };
		stat_id_set_int(&Var0, iParam0, true);
	}
}

int func_219()
{
	if (func_82() != -1)
	{
		return 0;
	}
	return func_533(661720433);
}

void func_220(var uParam0)
{
	if (func_321(*uParam0))
	{
		func_327(uParam0, 1, 1);
	}
}

int func_221(bool bParam0)
{
	if (func_82() == -1)
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

void func_222(var uParam0, int iParam1, bool bParam2)
{
	func_848(iParam1);
	bVar0 = func_849(1);
	if (func_851(uParam0, iParam1, 1, 159457) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_849(2);
	if (func_851(uParam0, iParam1, 2, 159584) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_849(8192);
	if (func_851(uParam0, iParam1, 8192, 159597) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = (func_849(4) || func_849(8));
	if (!func_854())
	{
		func_855(4);
		func_855(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_856(81053684) || func_857(4))
		{
			func_855(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_856(-525676072) || func_857(8))
		{
			func_855(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_227(uParam0, iParam1, 0, func_858()))
			{
				if (!bVar0)
				{
					Global_1935496->f_70.f_1 = 1;
				}
				if (bVar1)
				{
					func_859(4);
				}
				if (bVar2)
				{
					func_859(8);
				}
			}
			else
			{
				func_855(4);
				func_855(8);
				if (bVar0)
				{
					Global_1935496->f_70.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_849(16);
	if (func_851(uParam0, iParam1, 16, 159711) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_849(256);
	if (func_851(uParam0, iParam1, 256, 159724) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_849(512);
	if (func_851(uParam0, iParam1, 512, 159736) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_849(1024);
	if (func_851(uParam0, iParam1, 1024, 159748) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	if (((((func_864() || func_865()) || func_866()) || func_867()) || func_525()) || bParam2)
	{
		bVar0 = func_849(16384);
		if (func_851(uParam0, iParam1, 16384, 159816) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_849(64);
		if (func_851(uParam0, iParam1, 64, 159829) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_849(32);
		if (func_851(uParam0, iParam1, 32, 159842) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_849(128);
		if (func_851(uParam0, iParam1, 128, 159855) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_849(2048);
		if (func_851(uParam0, iParam1, 2048, 159868) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_849(4096);
		if (func_851(uParam0, iParam1, 4096, 159881) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
	}
	func_874();
}

void func_223()
{
	if (func_525() || (((func_864() || func_865()) || func_866()) || func_867()))
	{
		Global_1935496->f_70 = 1;
		func_239(0);
		if (Global_1935496->f_70.f_1)
		{
			if (!func_875(0))
			{
				if (!Global_1935689->f_4)
				{
					Global_1935689->f_4 = 1;
					Global_1935689->f_5 = 1;
				}
			}
		}
		Global_1935496->f_70.f_1 = 0;
	}
	else if (Global_1935496->f_70)
	{
		func_216();
		Global_1935496->f_70 = 0;
		Global_1935496->f_70.f_1 = 0;
	}
}

void func_224(var uParam0, int iParam1)
{
	func_876(uParam0, iParam1);
	func_877();
	if (Global_1935496->f_19)
	{
		Global_1935496->f_19 = 0;
	}
	if (Global_1935496->f_21 && !is_control_pressed(0, 255439828))
	{
		Global_1935496->f_21 = 0;
	}
	if (is_control_pressed(0, 255439828))
	{
		func_878();
	}
	else if (func_199(&(Global_1935496->f_115[0]), 1) && func_849(16))
	{
		func_879();
	}
	else if (func_842(&(Global_1935496->f_115[5]), 1))
	{
		func_234(Global_1935496->f_67.f_2, 0, 0, 0, 1, 0, 0);
		func_880();
	}
	else if (func_842(&(Global_1935496->f_115[6]), 1))
	{
		Global_1935496->f_59.f_2 = get_game_timer();
		func_234(Global_1935496->f_59.f_1, 0, 0, 0, 1, 0, 0);
		func_881();
	}
}

void func_225(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		*uParam0 = _databinding_add_data_container_from_path("", "quick_select");
		uParam0->f_1 = _databinding_add_data_container(*uParam0, "target_horse_info");
	}
	bVar0 = true;
	if (!func_882(iParam1))
	{
		bVar0 = false;
	}
	_databinding_add_data_bool(uParam0->f_1, "visible", bVar0);
	if (!bVar0)
	{
		_databinding_add_data_string(uParam0->f_1, "horseName", "");
		_databinding_add_data_hash(uParam0->f_1, "bondingRankTexture", 0);
		_databinding_add_data_string(uParam0->f_1, "horseCoat", "");
		_databinding_add_data_int(uParam0->f_1, "horseSpeedValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMaxValue", 10);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMinValue", 0);
		_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
		_databinding_add_data_string(uParam0->f_1, "horseHandling", "");
		return;
	}
	iVar1 = iParam1;
	iVar2 = -1;
	if (func_883(iVar1))
	{
		iVar2 = func_884(iVar1);
	}
	iVar3 = get_entity_model(iVar1);
	iVar4 = func_885(iVar3);
	sVar5 = "";
	StringCopy(&cVar6, func_886(iVar4), 64);
	sVar5 = func_887(&cVar6);
	iVar14 = 0;
	iVar15 = func_888(iVar1);
	if (iVar2 == 0)
	{
		if (iVar15 == 0)
		{
			iVar14 = -217389439;
		}
		else if (iVar15 == 1)
		{
			iVar14 = 13992470;
		}
		else if (iVar15 == 2)
		{
			iVar14 = 396341162;
		}
		else if (iVar15 == 3)
		{
			iVar14 = 623069873;
		}
		else if (iVar15 == 4)
		{
			iVar14 = -637422489;
		}
	}
	else if (iVar15 == 0)
	{
		iVar14 = 937553910;
	}
	else if (iVar15 == 1)
	{
		iVar14 = 489732756;
	}
	else if (iVar15 == 2)
	{
		iVar14 = 195204984;
	}
	else if (iVar15 == 3)
	{
		iVar14 = -103418913;
	}
	else if (iVar15 == 4)
	{
		iVar14 = -815685893;
	}
	sVar16 = func_889(iVar4);
	_databinding_add_data_string(uParam0->f_1, "horseName", _get_label_text_2(sVar5));
	_databinding_add_data_hash(uParam0->f_1, "bondingRankTexture", iVar14);
	_databinding_add_data_string(uParam0->f_1, "horseCoat", sVar16);
	iVar17 = func_890(iVar1);
	iVar18 = iVar17 + 1;
	_databinding_add_data_int(uParam0->f_1, "horseSpeedValue", iVar18);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedMaxValue", 10);
	iVar19 = func_891(iVar1);
	iVar20 = (iVar18 + iVar19);
	iVar20 = func_892(iVar20, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentValue", iVar20);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
	iVar21 = iVar18 + 3;
	iVar21 = func_892(iVar21, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityValue", iVar21);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
	iVar22 = func_893(iVar1);
	iVar23 = iVar22 + 1;
	_databinding_add_data_int(uParam0->f_1, "horseAccValue", iVar23);
	_databinding_add_data_int(uParam0->f_1, "horseAccMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccMaxValue", 10);
	iVar24 = func_894(iVar1);
	iVar25 = (iVar23 + iVar24);
	iVar25 = func_892(iVar25, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentValue", iVar25);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
	iVar26 = iVar23 + 2;
	iVar26 = func_892(iVar26, 0, 10);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityValue", iVar26);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_1, "horseAccCapacityMaxValue", 10);
	iVar27 = func_895(iVar1);
	sVar28 = func_896(iVar27);
	_databinding_add_data_string(uParam0->f_1, "horseHandling", sVar28);
}

void func_226()
{
	if (func_897())
	{
		iVar0 = _0xd04241bbf6d03a5e(Global_35);
		if (_does_scenario_point_exist(iVar0))
		{
			_databinding_write_data_bool(Global_1935496->f_33.f_1, false);
			_databinding_write_data_bool(Global_1935496->f_35.f_1, false);
		}
		else
		{
			_databinding_write_data_bool(Global_1935496->f_33.f_1, true);
			_databinding_write_data_bool(Global_1935496->f_35.f_1, true);
		}
	}
	else
	{
		if (_databinding_read_data_bool(Global_1935496->f_33.f_1) && !Global_1935496->f_124)
		{
			_databinding_write_data_bool(Global_1935496->f_33.f_1, false);
		}
		else if (!_databinding_read_data_bool(Global_1935496->f_33.f_1) && Global_1935496->f_124)
		{
			_databinding_write_data_bool(Global_1935496->f_33.f_1, true);
		}
		if (func_82() == -1)
		{
			if (_databinding_read_data_bool(Global_1935496->f_35.f_1) && !Global_1935496->f_123)
			{
				_databinding_write_data_bool(Global_1935496->f_35.f_1, false);
			}
			else if (!_databinding_read_data_bool(Global_1935496->f_35.f_1) && Global_1935496->f_123)
			{
				_databinding_write_data_bool(Global_1935496->f_35.f_1, true);
			}
		}
	}
	if (func_82() == -1)
	{
		iVar1 = -1448210800;
	}
	else
	{
		iVar1 = -2035110427;
	}
	if (_databinding_read_data_bool(Global_1935496->f_37.f_1) && !func_739(iVar1, 1, 0))
	{
		_databinding_write_data_bool(Global_1935496->f_37.f_1, false);
	}
	else if (!_databinding_read_data_bool(Global_1935496->f_37.f_1) && func_739(iVar1, 1, 0))
	{
		_databinding_write_data_bool(Global_1935496->f_37.f_1, true);
	}
}

bool func_227(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_848(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = is_ped_dead_or_dying(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return false;
	}
	if (func_82() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630->f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_898(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_899(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_900(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_193(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_901(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_89("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_193(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_901(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = is_ped_swimming(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_901(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = does_entity_exist(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_902(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_89("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_89("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_525();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_89("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_228()
{
	if (func_129(4))
	{
		return Global_1935630->f_27;
	}
	return func_903();
}

void func_229(int iParam0)
{
	Global_1935496->f_16 = iParam0;
	Var3.f_9 = -1591664384;
	if (func_904("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_905(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_710(Var3.f_4))
			{
			}
			else if (_0x0c093c1787f18519(Var3.f_4, &Var17) && !func_906(Var3.f_4, 1194584906))
			{
				_0x227522fd59ddb7e8(func_221(0), &Var3, iParam0);
			}
			iVar2++;
		}
		func_907(iVar0);
	}
}

bool func_230()
{
	if (Global_1911914->f_1581)
	{
		disable_all_control_actions(0);
		if (func_908("simple_crafting", 1024))
		{
			Global_1911914->f_1581 = 0;
			Global_1911914->f_1582 = 1;
		}
		else if ((get_game_timer() - Global_1911914->f_1583) > 1000)
		{
			Global_1911914->f_1581 = 0;
		}
		return false;
	}
	if (func_82() == 0)
	{
		return false;
	}
	iVar0 = get_game_timer();
	if ((iVar0 - Global_1392040->f_5) >= 500)
	{
		Global_1392040->f_5 = iVar0;
		if (func_909())
		{
			if (Global_1935496->f_125 || Global_1935496->f_126)
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (!func_321(Global_1935496->f_114))
					{
						if (is_entity_a_ped(iVar1))
						{
							iVar2 = get_ped_index_from_entity_index(iVar1);
							if ((((_0x9a100f1cf4546629(iVar2) && func_910(get_entity_model(iVar2)) != 0) && !_0x8de41e9902e85756(iVar2)) && !func_254(Global_35)) && !_0xcdc25355c0d65963(iVar2))
							{
								iVar3 = _0xf8b48a361dc388ae(iVar2);
								if (iVar3 != 2)
								{
									Global_1911914->f_1577 = func_910(get_entity_model(iVar2));
									Global_1935496->f_114 = func_825("CAMP_REC_COOK", 992265328, Global_35, 1, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
									func_324(Global_1935496->f_114, _uiprompt_get_group_id_for_target_entity(iVar2), 0, 1);
									func_737(465, 0);
								}
							}
						}
					}
				}
				else
				{
					func_220(&(Global_1935496->f_114));
				}
			}
			else
			{
				func_220(&(Global_1935496->f_114));
			}
		}
		else
		{
			func_220(&(Global_1935496->f_114));
		}
	}
	if (func_321(Global_1935496->f_114))
	{
		if (func_199(Global_1935496->f_114, 1))
		{
			func_327(&(Global_1935496->f_114), 1, 1);
			Global_1392040->f_2 = 1;
			func_911(268435456);
			if (func_234(-1838434463, 0, 0, 0, 1, 0, 0) || func_234(2019377485, 0, 0, 0, 1, 0, 0))
			{
				Global_1392040->f_4 = iVar0;
				set_player_control(player_id(), false, 256, false);
			}
			else
			{
				Global_1392040->f_2 = 0;
				func_912(268435456);
			}
			return true;
		}
	}
	return false;
}

bool func_231(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_232(int iParam0)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_233(int iParam0)
{
	iVar0 = func_827(iParam0, -949239683);
	switch (iVar0)
	{
		case -1919515848:
		case -1915958659:
		case -1337515701:
		case -809056541:
		case -273840653:
		case -262371497:
		case 89124942:
		case 238865292:
		case 845883585:
		case 999632878:
		case 1130235258:
		case 1174751405:
		case 1177617310:
		case 1443104131:
		case 1451036371:
		case 1859991422:
		case 1891031775:
			return false;
		default:
			break;
	}
	if (func_906(Global_1935496->f_30, 791664616))
	{
		return false;
	}
	return true;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_913())
	{
		Global_1935689->f_10191 = iParam0;
		func_914(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_915())
	{
		_0xbfff81e12a745a5f();
		func_916(iParam0, 0);
		func_914(func_917(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_918(iParam0, bParam4))
	{
		return 0;
	}
	if (func_919(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_906(iParam0, -2081717885))
	{
		func_920(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_906(iParam0, -1909684001))
	{
		func_921(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_906(iParam0, 587975446))
	{
		func_922(iParam0, Var10);
	}
	else if (func_906(iParam0, 566155764))
	{
		if (!func_923(iParam0))
		{
			return 0;
		}
	}
	if (func_924(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = get_game_timer();
		return 1;
	}
	if (func_906(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_527(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_906(iParam0, -1472964441) || func_906(iParam0, -228153877)) || func_906(iParam0, 566155764))
	{
	}
	else if (func_906(iParam0, 1919582297))
	{
		if (((func_925() || is_ped_active_in_scenario(Global_35, 1)) || _0x0c3cb2e600c8977d(Global_35, 1)) || !is_ped_on_foot(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_527(Var10, 0);
		bVar32 = false;
	}
	else if (func_232(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_926(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_527(Var10, 0);
		iVar33 = 1;
	}
	else if (func_232(iParam0) == -1037537535)
	{
		if (func_522(iParam0) == -999503751)
		{
			if (func_82() != -1)
			{
				return iVar33;
			}
			if (!func_927(iParam0))
			{
				func_89("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_928(7, iParam0);
			bVar36 = func_928(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_89("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_929(7))
			{
				func_89("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_930(Global_35, func_500(7), 0))
				{
					func_89("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_89("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_931(iParam0);
			if (iVar30 == -1)
			{
				func_932(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_932(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_522(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_933(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_934(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23])
					{
						func_733(Global_35, 260271636, 0, -358215195, 1, 1, 1, 0, 1, 0);
						_0xcb9401f918cb0f75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_731(iParam0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_731(iParam0, 1);
					}
					break;
			}
			func_733(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_935(1);
				break;
			case -727924611:
				if (func_82() != -1)
				{
				}
				else if (!func_927(iParam0))
				{
					func_89("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_928(7, iParam0);
					bVar36 = func_928(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (does_blip_exist(Global_36559))
						{
							remove_blip(&Global_36559);
						}
						Global_36559 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_36559, 673950256);
						func_89(_create_var_string(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!func_929(7))
					{
						func_89("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_930(Global_35, func_500(7), 0))
						{
							func_89("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_36559))
							{
								remove_blip(&Global_36559);
							}
							Global_36559 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_36559, 673950256);
							func_89(_create_var_string(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_527(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_936();
						Jump @2541; //curOff = 1643
						if (!func_692(Global_1392040->f_1, 1) || func_692(Global_1392040->f_1, 512))
						{
							if (func_82() == -1)
							{
								if (_get_number_of_references_of_script_with_name_hash(get_hash_key("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_937(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_357(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_927(iParam0) || ((!func_938(Global_35, func_500(7), func_511(7), 1) || func_939() != 0) && !func_938(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_692(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_692(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_527(Var10, 2);
								}
							}
							else if (func_927(-1838434463))
							{
								if (func_940(1))
								{
									func_941(2);
								}
								else if (func_942(1))
								{
									func_89("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_0x424b17a7dc5c90bc(player_id()))
									{
										func_89("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_943(_0x901e0dc25080c8b9(player_id()));
								}
							}
							else if (!_0x424b17a7dc5c90bc(player_id()))
							{
								func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_943(_0x901e0dc25080c8b9(player_id()));
							}
							else
							{
								func_89("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_586(Global_35, 1, 0, 0) != -160924582)
						{
							set_current_ped_weapon(Global_35, -160924582, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_586(Global_35, 1, 0, 0) != -1016714371)
						{
							set_current_ped_weapon(Global_35, -1016714371, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_944(func_178());
						iVar28 = func_945();
						if (func_524(iVar27))
						{
							if (iVar27 == iVar28 && !func_946())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_89("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_947(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_737(497, 1);
						Jump @2541; //curOff = 2388
						func_948(1);
						Jump @2541; //curOff = 2396
						func_947(iParam0, 1, 0, 562618531, 0);
						func_740(136579449, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301;
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_527(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar33;
				default:
					break;
		}
	}
}

void func_235()
{
	if (!func_949())
	{
		if (Global_1911774->f_2 > 0 && (get_game_timer() - Global_1911774->f_1) > Global_1911774->f_2)
		{
			func_950();
			Global_1911774->f_2 = 0;
		}
	}
	else if (!func_951())
	{
		iVar0 = 0;
		while (iVar0 < Global_1911774->f_3)
		{
			func_952(&(Global_1911774->f_4[iVar0]), Global_1911774->f_4[iVar0]->f_1, Global_1911774->f_4[iVar0]->f_2, 0, Global_1911774->f_4[iVar0]->f_3);
			Global_1911774->f_4[iVar0] = 0;
			iVar0++;
		}
		func_953();
	}
}

void func_236()
{
	if (&Global_1879514 == 1)
	{
		if (_0x59fa676177dbe4c9(Global_1879514->f_17) == 5 && !Global_1879514->f_16)
		{
			play_sound_frontend("Mission_Complete_Final_Wipe_Off", "Mission_Complete_Sounds", true, 0);
			Global_1879514->f_16 = 1;
		}
	}
}

void func_237()
{
	if (Global_1956580->f_2 != -1 && !Global_1935496->f_8)
	{
		func_954(1, Global_1956580->f_2, Var0);
	}
}

bool func_238()
{
	return func_849(1);
}

void func_239(bool bParam0)
{
	if (func_129(64))
	{
		return;
	}
	if (!func_875(0) && !func_834())
	{
		iVar0 = func_221(0);
		if (func_845(iVar0, 0, 0, 0, bParam0))
		{
			func_846(iVar0);
		}
		func_955(iVar0);
		func_956();
		func_83(64);
	}
}

void func_240()
{
	if (func_82() != -1)
	{
		return;
	}
	if (func_739(-1838434463, 1, 0))
	{
		if (func_957())
		{
			iVar0 = func_221(0);
			bVar1 = _0x3d10d7179d7034af(iVar0, -1838434463, func_875(0));
			func_947(-1838434463, 1, 1, -142743235, 0);
			func_740(2019377485, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496->f_125 = 0;
			Global_1935496->f_126 = 1;
			if (bVar1)
			{
				_0x766315a564594401(iVar0, 2019377485, 0);
			}
			else
			{
				_0x6a564540fac12211(iVar0, 2019377485);
			}
		}
	}
	else if (func_739(2019377485, 1, 0))
	{
		if (!func_957())
		{
			iVar2 = func_221(0);
			bVar3 = _0x3d10d7179d7034af(iVar2, 2019377485, func_875(0));
			func_947(2019377485, 1, 1, -142743235, 0);
			func_740(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496->f_125 = 1;
			Global_1935496->f_126 = 0;
			if (bVar3)
			{
				_0x766315a564594401(iVar2, -1838434463, 0);
			}
			else
			{
				_0x6a564540fac12211(iVar2, -1838434463);
			}
		}
	}
}

void func_241(int iParam0)
{
	iVar4 = func_221(0);
	Var5 = { func_958(0) };
	Var5.f_4 = 1084182731;
	if (_0x886dfd3e185c8a89(iVar4, &Var5, -1838434463, Var5.f_4, &uVar0))
	{
		_0x227522fd59ddb7e8(iVar4, &uVar0, iParam0);
	}
	if (_0x886dfd3e185c8a89(iVar4, &Var5, 2019377485, Var5.f_4, &uVar0))
	{
		_0x227522fd59ddb7e8(iVar4, &uVar0, iParam0);
	}
	Var5 = { func_959(0) };
	Var5.f_4 = 1728382685;
	if (_0x886dfd3e185c8a89(iVar4, &Var5, -160924582, Var5.f_4, &uVar0))
	{
		_0x227522fd59ddb7e8(iVar4, &uVar0, iParam0);
	}
	if (_0x886dfd3e185c8a89(iVar4, &Var5, -1016714371, Var5.f_4, &uVar0))
	{
		_0x227522fd59ddb7e8(iVar4, &uVar0, iParam0);
	}
}

void func_242(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (_0x3d10d7179d7034af(func_221(0), iVar0, 1))
	{
		return;
	}
	iVar1 = func_232(iVar0);
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (iVar1 != -1037537535)
	{
		func_960(iVar0, iParam1);
	}
	else
	{
		func_234(iVar0, 0, 0, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1935496->f_31 = iVar0;
	}
	else
	{
		Global_1935496->f_32 = iVar0;
	}
}

void func_243(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (_0x3d10d7179d7034af(func_221(0), iVar0, 1))
	{
		if (iVar0 == -1838434463 || iVar0 == 2019377485)
		{
			func_961(1, 0);
		}
		return;
	}
	iVar1 = func_232(iVar0);
	if (does_entity_exist(iParam1))
	{
	}
	if ((iVar1 != 2085633299 || Global_1935496->f_30 != iVar0) || !func_233(iVar0))
	{
		func_234(iVar0, 1, iParam1, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1935496->f_31 = iVar0;
	}
	else
	{
		Global_1935496->f_32 = iVar0;
	}
	iVar2 = func_221(0);
	if (!_0x3d10d7179d7034af(iVar2, iVar0, 0))
	{
		Global_1900073->f_153 = iVar0;
	}
}

var func_244()
{
	iVar0 = get_player_index();
	if (_0x3ee1f7a8c32f24e1(iVar0, &uVar1, 1, 0))
	{
		return uVar1;
	}
	if (get_player_target_entity(iVar0, &uVar1) || get_entity_player_is_free_aiming_at(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

void func_245(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_entity_model(iParam0);
	if (!is_model_valid(iVar0))
	{
		return;
	}
	iVar2 = _0x0139637a3bff8b6d(iParam0, &iVar1);
	if (iVar2 == 0)
	{
		return;
	}
	if (!_0x0772f87d7b07719a(get_player_index(), iVar1, iVar2))
	{
		return;
	}
	vVar3 = { get_entity_coords(iParam0, true, false) };
	func_962(iParam1, iVar0, vVar3, bParam2, iParam3);
	if (bParam2 && -153407852 == iParam1)
	{
		compendium_horse_observed(iParam0, iParam3);
	}
}

bool func_246(var uParam0)
{
	return uParam0->f_13;
}

void func_247(var uParam0)
{
	uParam0->f_11 = func_244();
	if (!does_entity_exist(uParam0->f_11))
	{
		return;
	}
	bVar0 = false;
	if (func_248(uParam0))
	{
		iVar1 = get_ped_index_from_entity_index(uParam0->f_11);
		uParam0->f_12 = func_888(iVar1);
		bVar0 = true;
	}
	bVar2 = false;
	if (bVar0)
	{
		if (func_963(uParam0))
		{
			bVar2 = true;
		}
	}
	else if (func_964(uParam0))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		_hide_hud_component(-972988753);
		uParam0->f_13 = 1;
		play_sound_frontend("show_info", "Study_Sounds", true, 0);
	}
}

bool func_248(var uParam0)
{
	if (is_entity_a_ped(uParam0->f_11))
	{
		iVar0 = get_ped_index_from_entity_index(uParam0->f_11);
		if (func_965(iVar0))
		{
			iVar1 = get_entity_model(uParam0->f_11);
			if (!func_966(iVar1) && !func_967(iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_249(var uParam0)
{
	iVar0 = get_ped_index_from_entity_index(uParam0->f_11);
	iVar1 = func_888(iVar0);
	if (uParam0->f_12 != iVar1)
	{
		return true;
	}
	return false;
}

void func_250(var uParam0)
{
	iVar0 = player_id();
	iVar1 = get_ped_index_from_entity_index(uParam0->f_11);
	bVar2 = false;
	if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
	{
		bVar2 = true;
	}
	iVar3 = 937553910;
	iVar4 = func_888(iVar1);
	if (bVar2)
	{
		if (iVar4 == 0)
		{
			iVar3 = -217389439;
		}
		else if (iVar4 == 1)
		{
			iVar3 = 13992470;
		}
		else if (iVar4 == 2)
		{
			iVar3 = 396341162;
		}
		else if (iVar4 == 3)
		{
			iVar3 = 623069873;
		}
		else if (iVar4 == 4)
		{
			iVar3 = -637422489;
		}
	}
	else if (iVar4 == 1)
	{
		iVar3 = 489732756;
	}
	else if (iVar4 == 2)
	{
		iVar3 = 195204984;
	}
	else if (iVar4 == 3)
	{
		iVar3 = -103418913;
	}
	else if (iVar4 == 4)
	{
		iVar3 = -815685893;
	}
	uParam0->f_1.f_7 = _databinding_add_data_container(uParam0->f_1, "bonding");
	_databinding_add_data_hash(uParam0->f_1.f_7, "bondingRankTexture", iVar3);
}

void func_251(var uParam0)
{
	if (_is_app_active(1749944028))
	{
		_close_app_by_hash(1749944028);
	}
	if (!_is_app_active(1749944028))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (uParam0->f_13)
	{
		play_sound_frontend("hide_info", "Study_Sounds", true, 0);
	}
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	_display_hud_component(-972988753);
}

void func_252(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_26 = 0f;
	func_968(uParam0, 0);
	func_969(uParam0, 1);
	Global_36560 = 0;
	Global_36560.f_1 = 0;
	Global_36560.f_2 = 3;
	func_970();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_36560.f_4[iVar0] = 0;
		Global_36560.f_4[iVar0]->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_971(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	uParam0->f_46.f_37 = 0;
	StringCopy(&(uParam0->f_84), "default_inspection_settings", 64);
	StringCopy(&(uParam0->f_84.f_8), "DEFAULT_INSPECTION_REQUEST", 64);
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
}

int func_253(var uParam0)
{
	return *uParam0;
}

bool func_254(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

void func_255(var uParam0)
{
	if (func_254(Global_35))
	{
		func_972(uParam0, 1);
	}
	else if (func_973(&Var0))
	{
		switch (Var0)
		{
			case 2:
				iVar3 = get_entity_type(Var0.f_1);
				switch (iVar3)
				{
					case 1:
						if (!func_124())
						{
						}
						break;
					case 3:
						break;
				}
				break;
			case 4:
				iVar2 = func_976(func_975(func_974(10f)));
				if (func_231(iVar2, 0))
				{
					func_89(_create_var_string(10, "HELP_QUANTITY_MAXED", _create_var_string(0, iVar2)), 10000, 0, 0, 0, 1);
				}
				else
				{
					func_89("HELP_QUANTITY_MAXED_GENERIC", 10000, 0, 0, 0, 1);
				}
				break;
			case 3:
				if (does_entity_exist(Var0.f_1))
				{
					if (does_entity_exist(player_ped_id()) && !is_ped_injured(player_ped_id()))
					{
						if (is_ped_on_foot(player_ped_id()) && !is_ped_human(get_ped_index_from_entity_index(Var0.f_1)))
						{
							func_737(193, 1);
						}
					}
				}
				break;
		}
	}
}

void func_256(var uParam0)
{
	iVar0 = func_977(Global_35);
	if (does_entity_exist(iVar0))
	{
		if (_0x9a100f1cf4546629(iVar0) || _0xc346a546612c49a9(iVar0))
		{
			func_978(uParam0, iVar0);
			func_972(uParam0, 2);
		}
		else
		{
			func_972(uParam0, 6);
		}
	}
}

void func_257(var uParam0)
{
	func_979(uParam0);
	if (uParam0->f_25 == 0)
	{
		func_972(uParam0, 4);
		return;
	}
	func_980(uParam0);
	func_981(uParam0, 1);
	func_982();
	_0x6a4d224fc7643941(&(uParam0->f_84));
	func_972(uParam0, 3);
}

void func_258(var uParam0)
{
	iVar0 = func_983(uParam0);
	func_588(0);
	if (func_984(uParam0))
	{
		func_985(&(uParam0->f_84), uParam0->f_84.f_43, uParam0->f_84.f_44, uParam0->f_84.f_45);
		if (_0x38c2bf94d15f464d(Global_35))
		{
			func_968(uParam0, 1);
			func_986(uParam0, iVar0);
		}
		else if (func_987(uParam0))
		{
			func_980(uParam0);
			func_988(uParam0, iVar0 + 1);
		}
		if (iVar0 >= func_989(uParam0))
		{
			if (uParam0->f_84.f_47 != -1)
			{
				func_397(&(uParam0->f_84.f_48), 0);
			}
			func_972(uParam0, 4);
		}
	}
	else
	{
		func_972(uParam0, 4);
	}
	if (!func_254(Global_35))
	{
		func_972(uParam0, 6);
	}
}

void func_259(var uParam0)
{
	bVar0 = false;
	if (uParam0->f_25 > 0 || (uParam0->f_25 >= 0 && !bVar0))
	{
		func_990(uParam0);
	}
}

void func_260(var uParam0)
{
	if (func_991(uParam0))
	{
		iVar0 = func_992(uParam0);
		_telemetry_animal_skinned(uParam0->f_15, &(uParam0->f_33));
		bVar1 = func_993(iVar0);
		iVar3 = _0x0139637a3bff8b6d(iVar0, &iVar2);
		if (!_0x0772f87d7b07719a(get_player_index(), iVar2, iVar3))
		{
			_0x946d46cd6dfb9742(get_player_index(), iVar2, iVar3);
		}
		iVar4 = uParam0->f_15;
		func_245(get_ped_index_from_entity_index(iVar0), iVar4, 0, 1);
		if (func_994(iVar0))
		{
			func_737(464, 0);
		}
		_0xd64dbc8b0424135f(iVar0, iVar4);
		if (!func_995(0))
		{
			iVar5 = get_entity_model(iVar0);
			Var6.f_1 = 10;
			func_996(uParam0, &Var6);
			func_997(iVar5, &Var6, 0);
			if (!bVar1)
			{
				iVar18 = 0;
				while (iVar18 < uParam0->f_33)
				{
					func_998(&(uParam0->f_33[iVar18]), 1, 0);
					iVar18++;
				}
			}
		}
		else
		{
			iVar19 = 0;
			iVar31 = 0;
			while (iVar31 < uParam0->f_33)
			{
				if (!func_231(&(uParam0->f_33[iVar31]), 0))
				{
				}
				else
				{
					bVar33 = false;
					iVar32 = 0;
					while (iVar32 < uParam0->f_33)
					{
						if (&uParam0->f_33[iVar31] == &uVar20[iVar32])
						{
							bVar33 = true;
						}
						iVar32++;
					}
					if (bVar33)
					{
					}
					else
					{
						uVar20[iVar19] = &uParam0->f_33[iVar31];
						iVar19++;
						iVar35 = 0;
						iVar34 = 0;
						while (iVar34 < uParam0->f_33)
						{
							if (&uParam0->f_33[iVar31] == &uParam0->f_33[iVar34])
							{
								iVar35++;
							}
							iVar34++;
						}
						if (iVar35 > 0)
						{
							func_999(&(uParam0->f_33[iVar31]));
							func_998(&(uParam0->f_33[iVar31]), iVar35, bVar1);
							if (Global_36560.f_19)
							{
								func_1000(&(uParam0->f_33[iVar31]));
							}
							if (bVar1 || !_0x4aef1fb5b9011d75(&(uParam0->f_33[iVar31])))
							{
								func_740(&(uParam0->f_33[iVar31]), iVar35, 0, 0, 0, -897553835, 0, 0, 0, 0);
								uParam0->f_33[iVar31] = 0;
							}
						}
					}
				}
				iVar31++;
			}
			func_1001();
		}
		iVar36 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		if (func_82() == -1)
		{
			func_1002();
			func_1004(func_1003(iVar36));
			if (func_767(4) && !func_1005(iVar0))
			{
				func_737(108, 1);
			}
		}
		else
		{
			func_1006(get_entity_model(iVar0), &uVar37, &iVar38);
			func_1007(iVar38, 0, 0);
			func_1008(func_1003(iVar36));
		}
		func_1009(5);
		Global_36560.f_19 = 0;
		func_972(uParam0, 6);
	}
	else if (Global_36560.f_17)
	{
		Global_36560.f_17 = 0;
		func_972(uParam0, 6);
	}
}

void func_261(var uParam0, bool bParam1)
{
	if (!func_254(Global_35) || bParam1)
	{
		func_1010();
		func_981(uParam0, 0);
		iVar0 = _get_first_entity_ped_is_carrying(player_ped_id());
		if (!does_entity_exist(iVar0))
		{
			iVar0 = _0x7b5c293238ee4f20(player_ped_id());
			Global_36560.f_15 = 0;
		}
		if (does_entity_exist(iVar0))
		{
			iVar1 = _0x31fef6a20f00b963(iVar0);
			if (func_1011(iVar1) && func_1012(iVar1))
			{
				func_1013(get_entity_model(uParam0->f_16), &iVar2);
				Global_40.f_9319[iVar2]->f_3 = 1;
				Global_1425228->f_2[iVar2] = iVar0;
				func_386(0, -1);
			}
		}
		func_1014(*uParam0);
		func_1015(uParam0);
		_0xae6b68a83abbe7c0(player_ped_id());
		func_972(uParam0, 0);
	}
}

void func_262(var uParam0)
{
	Global_36560 = func_253(uParam0);
	Global_36560.f_1 = func_992(uParam0);
	if (uParam0->f_17)
	{
		set_player_may_not_enter_any_vehicle(player_id());
		_0x9f9a829c6751f3c7(player_id(), 28, 1);
		set_ped_reset_flag(Global_35, 175, true);
		set_ped_reset_flag(Global_35, 129, true);
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
	}
	func_1016(uParam0);
}

int func_263()
{
	switch (func_82())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

int func_264(int iParam0, bool bParam1)
{
	iVar0 = func_263();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

bool func_265(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1955500)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1955500)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_266(int iParam0, int iParam1)
{
	if (func_265(iParam0, 1, 1))
	{
		return func_123(Global_1955500[iParam0], iParam1);
	}
	return false;
}

bool func_267(int iParam0)
{
	if (!func_624(iParam0))
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

Vector3 func_268(int iParam0)
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

void func_269(int iParam0, float fParam1)
{
	if (((fParam1 <= (10f * 10f) && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && !func_1017()) && func_628((*Global_1835011)[iParam0], 2))
	{
		if (func_628((*Global_1835011)[iParam0], 4096) && !func_1018((*Global_1835011)[iParam0], 8))
		{
			sVar0 = _create_var_string(2, "MISSION_MEMORY", (*Global_1835011)[iParam0]->f_27);
			func_89(sVar0, 10000, 0, 0, 0, 1);
			func_1019((*Global_1835011)[iParam0], 8);
		}
		else if (func_628((*Global_1835011)[iParam0], 1024) && !func_1018((*Global_1835011)[iParam0], 4))
		{
			sVar0 = _create_var_string(2, "MISSION_ANTAGONIZE", (*Global_1835011)[iParam0]->f_27);
			func_89(sVar0, 10000, 0, 0, 0, 1);
			func_1019((*Global_1835011)[iParam0], 4);
		}
		else if (func_628((*Global_1835011)[iParam0], 2048) && !func_1018((*Global_1835011)[iParam0], 2))
		{
			sVar0 = _create_var_string(2, "MISSION_WANTED_REGION", (*Global_1835011)[iParam0]->f_27);
			func_89(sVar0, 10000, 0, 0, 0, 1);
			func_1019((*Global_1835011)[iParam0], 2);
		}
		else if (func_628((*Global_1835011)[iParam0], 16384) && !func_1018((*Global_1835011)[iParam0], 16))
		{
			sVar0 = _create_var_string(2, "MISSION_COMBAT", (*Global_1835011)[iParam0]->f_27);
			func_89(sVar0, 10000, 0, 0, 0, 1);
			func_1019((*Global_1835011)[iParam0], 16);
		}
		else if (func_628((*Global_1835011)[iParam0], 32768) && !func_1018((*Global_1835011)[iParam0], 32))
		{
			if (func_1020((*Global_1835011)[iParam0]->f_64) && (iParam0 == 7 || iParam0 == 17))
			{
				sVar0 = _create_var_string(2, "MISSION_PREV_WANTED_2", (*Global_1835011)[iParam0]->f_27);
			}
			else
			{
				sVar0 = _create_var_string(2, "MISSION_PREV_WANTED", (*Global_1835011)[iParam0]->f_27);
			}
			func_89(sVar0, 10000, 0, 0, 0, 1);
			func_1019((*Global_1835011)[iParam0], 32);
		}
	}
}

void func_270()
{
	iVar1 = func_178();
	if (Global_1934765->f_401 != iVar1)
	{
		Global_1934765->f_339 = 0;
		Global_1934765->f_401 = iVar1;
		iVar2 = 0;
		while (iVar2 < 15)
		{
			Global_1934765->f_340[iVar2] = 0;
			Global_1934765->f_340[iVar2]->f_1 = { 0f, 0f, 0f };
			iVar2++;
		}
	}
	switch (iVar1)
	{
		case 9:
			func_1021(&(Global_1934765->f_339));
			break;
		case 79:
			func_1022(&(Global_1934765->f_339));
			break;
		case 5:
			func_1023(&(Global_1934765->f_339));
			break;
		case 4:
			func_1024(&(Global_1934765->f_339));
			break;
		case 36:
			func_1025(&(Global_1934765->f_339));
			break;
		case 55:
			func_1026(&(Global_1934765->f_339));
			break;
		case 105:
			func_1027(&(Global_1934765->f_339));
			break;
		case 37:
			func_1028(&(Global_1934765->f_339));
			break;
		case 21:
			func_1029(&(Global_1934765->f_339));
			break;
		case 22:
			func_1030(&(Global_1934765->f_339));
			break;
		case 76:
			func_1031(&(Global_1934765->f_339));
			break;
		case 8:
			func_1032(&(Global_1934765->f_339));
			break;
		case 43:
			break;
		case 65:
			func_1033(&(Global_1934765->f_339));
			break;
		case 68:
			func_1034(&(Global_1934765->f_339));
			break;
		case 69:
			func_1035(&(Global_1934765->f_339));
			break;
		case 16:
			func_1036(&(Global_1934765->f_339));
			break;
		case 40:
			func_1037(&(Global_1934765->f_339));
			break;
		case 45:
			func_1038(&(Global_1934765->f_339));
			break;
		case 47:
			func_1039(&(Global_1934765->f_339));
			break;
		case 95:
			func_1037(&(Global_1934765->f_339));
			break;
		case 26:
			func_1040(&(Global_1934765->f_339));
			break;
		case 78:
			func_1041(&(Global_1934765->f_339));
			break;
		case 115:
			func_1042(&(Global_1934765->f_339));
			break;
		case 75:
			func_1043(&(Global_1934765->f_339));
			break;
		case 122:
			func_1044(&(Global_1934765->f_339));
			break;
		case 93:
			func_1045(&(Global_1934765->f_339));
			break;
		case 80:
			func_1046(&(Global_1934765->f_339));
			break;
		case 84:
			func_1047(&(Global_1934765->f_339));
			break;
		case 38:
			func_1048(&(Global_1934765->f_339));
			break;
		case -1:
			func_1049(&(Global_1934765->f_339));
			break;
		default:
			Global_1934765->f_339 = 0;
			break;
	}
	if (iVar1 == 43)
	{
		func_1050(&(Global_1934765->f_339));
		bVar0 = true;
	}
	if (func_357(0))
	{
		if (!bVar0)
		{
			func_1050(&(Global_1934765->f_339));
		}
	}
}

void func_271()
{
}

bool func_272(int iParam0, bool bParam1, bool bParam2)
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
		if (func_1051())
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
		iVar0 = func_698(&(Global_1898164->f_1[0]));
		if (func_636(iVar0) && func_1052((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_274(&(Global_1898164->f_1[0])))
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

bool func_273()
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_709())
	{
		return false;
	}
	if (!func_1053((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_1053((*Global_1835011)[2]->f_1, 1) && func_1053((*Global_1347702)[120]->f_15, 1)) && !func_1053((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_1053((*Global_1835011)[37]->f_1, 1) && !func_1053((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_1053((*Global_1835011)[57]->f_1, 1) && !func_1053((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_1053((*Global_1835011)[26]->f_1, 1) && !func_1053((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_1053((*Global_1835011)[62]->f_1, 1) && func_1053((*Global_1835011)[63]->f_1, 1)) && !func_1053((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_1053((*Global_1835011)[75]->f_1, 1) && !func_1053((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_1053((*Global_1835011)[76]->f_1, 1) && !func_1053((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_1053((*Global_1835011)[40]->f_1, 1) && func_1053((*Global_1835011)[41]->f_1, 1)) && !func_1053((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_1053((*Global_1835011)[62]->f_1, 1) && func_1053((*Global_1835011)[63]->f_1, 1)) && !func_1053((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_1053((*Global_1835011)[65]->f_1, 1) && func_1053((*Global_1835011)[66]->f_1, 1)) && !func_1053((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_274(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_275()
{
}

bool func_276(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_277()
{
	if (Global_1935630->f_22)
	{
		_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
		_0x702b75dc9d3ede56(true);
	}
}

int func_278()
{
	return Global_1572864->f_21;
}

int func_279(bool bParam0)
{
	if (!bParam0 && func_613(373691918))
	{
		_0xe9ac8466abe484bb(false, 0);
		_0xc61edebf16cd9668(752193127, true, 0);
		return 0;
	}
	_0xe9ac8466abe484bb(bParam0, 0);
	return 1;
}

void func_280()
{
	if (func_1054(&uVar0))
	{
		func_1055();
	}
}

void func_281(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1056(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_136(Global_1935630, 4194304);
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

bool func_282(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_283()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_527(Var10, 0);
}

void func_284(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_285()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_1057(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_286(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

bool func_287(int iParam0)
{
	if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	switch (Global_1935630->f_15)
	{
		case -717938992:
		case -251921849:
		case 681501455:
		case 701031707:
		case 2118174520:
			return true;
	}
	return false;
}

int func_288(vector3 vParam0, int iParam3)
{
	iVar0 = func_178();
	if (func_282(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1058(vParam0, iParam3);
}

bool func_289()
{
	return true;
}

void func_290(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_291()
{
	if (func_274(Global_1347343->f_2) && Global_1347343->f_2 == func_649(46))
	{
		_disable_guard_zone("SISIKA_PENITENTIARY");
	}
	if (func_274(Global_43890))
	{
		func_1059();
		request_script_with_name_hash(27496334);
		if (has_script_with_name_hash_loaded(27496334))
		{
			uVar0 = Global_43890;
			start_new_script_with_name_hash_and_args(27496334, &uVar0, 1, 6006);
			set_script_with_name_hash_as_no_longer_needed(27496334);
			Global_43890 = -1;
		}
	}
	if (func_272(0, 0, 1))
	{
		if (_0x139efb0a71dd9011() || func_1060(Global_1347343->f_11, 8192))
		{
			disable_frontend_this_frame();
			if (!func_1060(Global_1347343->f_11, 8192))
			{
				func_1061(&(Global_1347343->f_11), 8192);
			}
		}
	}
	else if (func_1060(Global_1347343->f_11, 8192))
	{
		func_1062(&(Global_1347343->f_11), 8192);
	}
	if (!func_1060(Global_1347343->f_11, 65536))
	{
		if (_0x139efb0a71dd9011())
		{
			if (func_1060(Global_1347343->f_11, 131072))
			{
				_0x6339c1ea3979b5f7("Fade_To_Title_Screen_LoanShark", "Mission_Fail_Respawn_Scenes");
				play_sound_frontend("FADE_TO_BLACK_LOANSHARK", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				func_1062(&(Global_1347343->f_11), 131072);
			}
			else if (func_1060(Global_1347343->f_11, 262144))
			{
				_0x6339c1ea3979b5f7("Fade_To_Title_Screen_CompanionActivity", "Mission_Fail_Respawn_Scenes");
				play_sound_frontend("FADE_TO_BLACK_COMPANIONACTIVITY", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				func_1062(&(Global_1347343->f_11), 262144);
			}
			else if (func_1063(2073, 0))
			{
				_0x6339c1ea3979b5f7("Fade_To_Title_Screen", "Mission_Fail_Respawn_Scenes");
				play_sound_frontend("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
			}
			func_1061(&(Global_1347343->f_11), 65536);
		}
	}
	if (func_1060(Global_1347343->f_11, 524288))
	{
		_0x9428447ded71fc7e("Mission_Fail_Respawn_Scenes");
		func_1062(&(Global_1347343->f_11), 524288);
	}
	if (!func_1064())
	{
		return;
	}
	if (func_1060(Global_1347343->f_11, 128))
	{
		_0xab0d553fe20a6e25(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		_0xf45e46deecf7df6e(10240, 0, 0, -1, -1);
	}
	switch (&Global_1347343)
	{
		case 0:
			if (func_1065())
			{
				if (!is_player_playing(player_id()))
				{
					func_1066(Global_1347343, 1);
				}
				else
				{
					pause_death_arrest_restart(true);
					func_1066(Global_1347343, 2);
				}
			}
			break;
		case 1:
			if (is_player_playing(player_id()))
			{
				pause_death_arrest_restart(true);
				func_1066(Global_1347343, 2);
			}
			break;
		case 2:
			func_1067();
			break;
		case 3:
			func_1068();
			break;
		case 4:
			if (func_1069())
			{
				if (func_82() != -1)
				{
					func_1070(0);
					func_1071(0);
				}
				func_1072(4096);
				func_284(6);
				func_1066(Global_1347343, 8);
				func_1073(0);
			}
			break;
		case 5:
			if (!is_player_teleport_active() && func_3(64))
			{
				if (!is_player_playing(player_id()))
				{
					pause_death_arrest_restart(false);
					return;
				}
				pause_death_arrest_restart(true);
				vVar1 = { func_1074() };
				fVar4 = func_1075();
				if (!func_1060(Global_1347343->f_11, 4))
				{
					freeze_entity_position(Global_35, true);
					_set_entity_coords_and_heading(Global_35, vVar1, fVar4, false, false, true);
				}
				start_player_teleport(player_id(), vVar1, fVar4, false, true, true, false);
				if (is_valid_interior(get_interior_at_coords(vVar1)))
				{
					pin_interior_in_memory(get_interior_at_coords(vVar1));
				}
				Global_1347343->f_12 = get_game_timer();
				func_1076();
				Global_1347360 = 0;
				Global_1347360->f_1 = 0;
				func_1077(&(Global_1347360->f_2));
				Global_1347377 = 0;
				Global_1347377->f_1 = 0;
				func_1077(&(Global_1347377->f_2));
				func_1066(Global_1347343, 6);
			}
			break;
		case 6:
			vVar5 = { func_1074() };
			uVar8 = func_1075();
			if (func_1078(Global_1347360, Global_1347360, vVar5, uVar8))
			{
				func_1066(Global_1347343, 7);
			}
			break;
		case 7:
			if (func_1079(Global_1347360, Global_1347360))
			{
				func_1066(Global_1347343, 8);
			}
			break;
		case 8:
			if (func_1080())
			{
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				if (is_valid_interior(get_interior_at_coords(func_1074())))
				{
					_0x1460b644397453eb();
					unpin_interior(get_interior_at_coords(func_1074()));
				}
				func_520(0, 0);
				func_1081(func_1074());
				if (!func_1060(Global_1347343->f_11, 4))
				{
					_set_entity_coords_and_heading(Global_35, func_1074(), func_1075(), false, false, true);
					freeze_entity_position(Global_35, false);
					func_520(0, 0);
					func_1082();
				}
				else if (func_624(func_1083()) && (*Global_1835011)[func_1083()]->f_17)
				{
					if ((func_133(Global_1347343->f_2) && func_623(func_1084(Global_1347343->f_2), 4)) || get_game_timer() >= Global_1347343->f_13 + 10000)
					{
						func_520(0, 0);
						func_1082();
					}
				}
				else if (get_game_timer() >= Global_1347343->f_13 + 5000)
				{
					func_520(0, 0);
					func_1082();
				}
			}
			else
			{
				Global_1347343->f_13 = get_game_timer();
			}
			break;
	}
}

void func_292()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_316(iVar0);
		iVar0++;
	}
}

void func_293(int iParam0)
{
	if (func_82() == 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_1085(&(Global_20710.f_1126));
	func_1086(iParam0, &uVar0, &iVar1);
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		iVar3 = func_1087(iVar2);
		if (iVar3 != -1 && iVar3 < 25)
		{
			func_1085(&(Global_20710[iVar3]->f_2));
		}
		iVar2++;
	}
}

void func_294(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1088(iParam0, 1048576);
		func_1089(iParam0, 256);
		func_1089(iParam0, 512);
	}
	else
	{
		func_1089(iParam0, 1048576);
	}
}

void func_295(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_296(int iParam0)
{
	iVar0 = 0;
	if (func_361(30))
	{
		if (func_767(15) || func_357(15))
		{
			iVar0 = 1;
		}
		else if ((iParam0 == 76 || iParam0 == 63) || iParam0 == 35)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_297(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_1091(iVar0);
		if (does_entity_exist(func_500(iVar1)))
		{
			iVar2 = get_ped_index_from_entity_index(func_500(iVar1));
			if (does_entity_exist(iVar2) && func_1092(iVar1))
			{
				func_1093(iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (does_entity_exist(&(uParam0->f_70[iVar0])))
		{
			if (!func_883(get_ped_index_from_entity_index(&(uParam0->f_70[iVar0]))))
			{
				delete_entity(uParam0->f_70[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(uParam0->f_88[iVar0])))
		{
			delete_object(uParam0->f_88[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(&(uParam0->f_79[iVar0])))
		{
			delete_object(uParam0->f_79[iVar0]);
		}
		iVar0++;
	}
	if (_does_volume_exist(uParam0->f_154))
	{
		_delete_volume(uParam0->f_154);
	}
	Var3.f_2 = 3;
	Var3.f_15 = 3;
	Var3.f_26 = 3;
	Var3.f_30 = 3;
	Var3.f_34 = 8;
	Var3.f_59 = 8;
	Var3.f_70 = 8;
	Var3.f_79 = 8;
	Var3.f_88 = 8;
	Var3.f_97 = 8;
	Var3.f_107 = 6;
	Var3.f_115 = 3;
	Var3.f_128 = 3;
	Var3.f_141 = 3;
	Var3.f_145 = 3;
	Var3.f_158.f_4 = 5;
	*uParam0 = { Var3 };
	func_1094(uParam0, 0);
}

void func_298()
{
	if (Global_1914319->f_18941.f_1 != func_178() && Global_1914319->f_18941.f_1 != -1)
	{
		func_1095();
		Global_1914319->f_18941.f_15 = 0;
		Global_1914319->f_18941.f_1 = -1;
		func_1096(0);
	}
	switch (Global_1914319->f_18941)
	{
		case 0:
			func_1097(1);
			if (!func_1098(func_178()))
			{
				return;
			}
			if (func_1099())
			{
				func_1100();
				Global_1914319->f_18941.f_1 = func_178();
				func_1096(1);
			}
			break;
		case 1:
			func_1097(1);
			if (!func_1098(func_178()))
			{
				return;
			}
			func_1096(2);
			break;
		case 2:
			func_1097(1);
			Global_1914319->f_18941.f_1 = func_178();
			Global_1914319->f_18941.f_6 = { func_1101() };
			Global_1914319->f_18941.f_13 = func_1102(470467759, -915411861, 1, 0, 0);
			Global_1914319->f_18941.f_14 = func_1102(1334501804, -915411861, 1, 0, 0);
			if (Global_1914319->f_18941.f_15 == 0)
			{
				func_1103();
			}
			func_1096(3);
			break;
		case 3:
			bVar1 = false;
			if (!func_1104(func_178()))
			{
				return;
			}
			if (!func_1105())
			{
				if (func_321(&(Global_1914319->f_18941.f_2[0])))
				{
					func_327(Global_1914319->f_18941.f_2[0], 1, 1);
				}
				return;
			}
			bVar1 = func_1106(&iVar0);
			if (func_321(&(Global_1914319->f_18941.f_2[0])))
			{
				if (bVar1)
				{
					if (func_664(&(Global_1914319->f_18941.f_2[0]), 0))
					{
						func_665(&(Global_1914319->f_18941.f_2[0]), 0, 1);
						func_1107(0, 1);
					}
					if ((func_1108() || iVar0 == 2) || iVar0 == 3)
					{
						func_327(Global_1914319->f_18941.f_2[0], 1, 1);
					}
					func_1097(1);
					return;
				}
			}
			if (bVar1)
			{
				return;
			}
			func_1097(0);
			if (func_1109(func_944(func_178())))
			{
				if (func_1110() && !func_1111(16))
				{
					func_1112(16);
				}
			}
			if (func_1104(func_178()))
			{
				if (func_178() == 92)
				{
					func_1107(1, 0);
				}
				if (func_1113(Global_1914319->f_18941.f_2[0], -719620017, "INSPECT_GENERIC", Global_1914319->f_18941.f_6, 1070386381))
				{
					if (is_player_control_on(player_id()))
					{
						set_player_control(player_id(), false, 0, false);
					}
					func_1114();
					func_1115();
					func_1096(4);
				}
				if (func_1116(Global_35, Global_1914319->f_18941.f_6, 1) < 4f)
				{
					_uiprompt_set_ambient_group_this_frame(Global_35, 2f, 1, 1, 428250662, "EXAMINE_SIGN", 2);
				}
			}
			if (func_1117() == 2 || func_1117() == 1)
			{
				func_1096(4);
			}
			break;
		case 4:
			if (func_1117() != 1 && func_1117() != 2)
			{
				if (is_player_control_on(player_id()))
				{
					set_player_control(player_id(), false, 0, false);
					func_1114();
				}
			}
			func_1097(0);
			if (!Global_1914319->f_18941.f_15)
			{
				if (!_0x7c7e4ab748ea3b07())
				{
					if (func_1118(Global_1914319->f_18941.f_2[0], -719620017, "SERVICE_BATH", Global_1914319->f_18941.f_6, Global_1914319->f_18941.f_13, 10f) || func_1117() == 1)
					{
						Global_1914319->f_18941.f_12 = 1;
						Global_1914319->f_18941.f_15 = 1;
						Global_1914319->f_18941.f_16 = 0;
						Var2.f_15 = 1;
						StringCopy(&(Var2.f_10), "bathing", 32);
						Var2.f_1 = 16;
						Var2.f_2 = Global_1914319->f_18941.f_12;
						Var2.f_14 = 1024;
						func_527(Var2, 0);
						func_1112(2);
						func_1119(1);
						func_1120();
						func_1096(6);
					}
				}
			}
			if (!func_1109(func_944(func_178())))
			{
				if (func_1118(Global_1914319->f_18941.f_2[1], -163964935, "SERVICE_ROOM", Global_1914319->f_18941.f_6, func_1102(1334501804, -915411861, 1, 0, 0), 10f) || func_1117() == 2)
				{
					func_1119(2);
					func_1120();
					func_1121(func_310(Global_1914319->f_16855.f_1, 262144));
					func_1089(Global_1914319->f_16855.f_1, 262144);
					func_1096(6);
				}
			}
			if (func_1113(Global_1914319->f_18941.f_2[2], 814057702, "SHOP_EXIT", Global_1914319->f_18941.f_6, 10f) || func_1106(&iVar0))
			{
				func_1120();
				func_1096(6);
			}
			if (func_1116(Global_35, Global_1914319->f_18941.f_6, 1) < 4f)
			{
				_uiprompt_set_ambient_group_this_frame(Global_35, 2f, 1, 1, 428250662, "EXAMINE_SIGN", 2);
			}
			break;
		case 6:
			func_1095();
			func_1096(0);
			break;
	}
}

void func_299()
{
	if (func_321(Global_1914319->f_18966) && (!func_309(Global_1914319->f_18967) || !func_308(func_1087(Global_1914319->f_18967))))
	{
		func_327(&(Global_1914319->f_18966), 1, 1);
		Global_1914319->f_18967 = -1;
	}
	if (Global_1914319->f_18969)
	{
		switch (Global_1914319->f_18964)
		{
			case 0:
				func_1122(Global_1914319->f_18967);
				func_327(&(Global_1914319->f_18966), 1, 1);
				play_sound("OS_BOB_29_RIDE_DAY_04", 0, false, 0, true, 0);
				Global_1914319->f_18965 = get_game_timer() + 2000;
				Global_1914319->f_18964 = 1;
				break;
			case 1:
				if (get_game_timer() > Global_1914319->f_18965)
				{
					do_screen_fade_out(2000);
					Global_1914319->f_18964 = 2;
				}
				break;
			case 2:
				if (is_screen_fading_in() || is_screen_faded_in())
				{
					do_screen_fade_out(2000);
				}
				if (is_screen_faded_out())
				{
					func_1123(Global_1914319->f_18967);
					func_1124();
					Global_1914319->f_18964 = 3;
				}
				break;
			case 3:
				if (is_screen_faded_in())
				{
					Global_1310720->f_28 = 0;
					Global_1914319->f_18969 = 0;
					Global_1914319->f_18964 = 0;
				}
				break;
		}
	}
	else if (((is_screen_faded_in() && func_321(Global_1914319->f_18966)) && func_199(Global_1914319->f_18966, 1)) && !func_1125())
	{
		Global_1914319->f_18969 = 1;
	}
}

void func_300()
{
	if (func_82() == -1)
	{
		if (func_1126(func_631(0)) == 37 || func_357(14))
		{
			return;
		}
	}
	func_1127();
	iVar0 = Global_1914319->f_16855;
	iVar1 = Global_1914319->f_16855.f_1;
	if (!func_1128(iVar1) || !func_1090(iVar0))
	{
		return;
	}
	if (func_82() == -1)
	{
		iVar2 = get_ped_index_from_entity_index(Global_1914319->f_3[iVar0]->f_23);
	}
	else
	{
		iVar2 = get_ped_index_from_entity_index(Global_1051260->f_48[iVar0]->f_19);
	}
	if ((func_1129(iVar0) || func_1130(iVar0, iVar1)) || func_1131(iVar2, 1, 1, 1, 0, 0))
	{
		func_285();
		_0xdd1232b332cbb9e7(1, 1, 1);
		return;
	}
	if (!func_897())
	{
		if (Global_1914319->f_3[iVar0]->f_441 != 0)
		{
			_0x2f901291ef177b02(Global_1914319->f_3[iVar0]->f_441, 0);
		}
	}
	if ((((!func_897() || !func_309(iVar1)) || func_1132(iVar1)) || func_1130(iVar0, iVar1)) || func_272(242, 1, 1))
	{
		return;
	}
	if (func_1133(iVar0, iVar1))
	{
		if (func_1134())
		{
			if (!func_741(501) && !func_735(501))
			{
				func_737(501, 0);
			}
		}
	}
	else if (func_1135(iVar0, iVar1))
	{
		if (!func_875(0))
		{
			if (!func_741(503) && !func_741(502))
			{
				if (!func_735(502) && !func_735(503))
				{
					if (iVar0 == 11 && func_178() == 11)
					{
						func_737(503, 0);
					}
					else
					{
						func_737(502, 0);
					}
				}
			}
		}
		else
		{
			if (func_735(502))
			{
				func_736(502);
			}
			if (func_735(503))
			{
				func_736(503);
			}
		}
	}
	if (func_1136(iVar1))
	{
		if (!func_741(506) && !func_735(506))
		{
			func_737(506, 0);
		}
	}
	if (_is_ped_carrying(Global_35) && func_1133(iVar0, iVar1))
	{
		if (Global_1914319->f_3[iVar0]->f_441 == 0 && iVar0 != 19)
		{
			Global_1914319->f_3[iVar0]->f_441 = func_89("SHOP_CARRYING_OBJECT", 10000, 0, 0, 0, 1);
		}
	}
}

void func_301()
{
	if (Global_1914319->f_15922 != -1)
	{
		iVar0 = func_1087(Global_1914319->f_15922);
		if (iVar0 != -1)
		{
			func_1137(Global_1914319->f_15922, iVar0);
		}
		Global_1914319->f_15922 = -1;
	}
}

void func_302()
{
	if ((get_frame_count() % 700) == 0 || !Global_36560.f_18)
	{
		if ((func_1138(0) && !func_1139(0)) || (func_1138(1) && !func_1139(1)))
		{
			return;
		}
		Global_36560.f_18 = 1;
		uVar2 = 57;
		iVar60 = 0;
		while (iVar60 < 16)
		{
			if (Global_40.f_9319[iVar60]->f_1)
			{
				iVar0 = func_1140(iVar60);
				if (!func_123(Global_20710.f_2407, iVar0))
				{
					if (!func_1141(iVar60, &iVar1))
					{
					}
					else if (Global_40.f_9319[iVar60]->f_3)
					{
						iVar61 = func_1142(iVar1);
						bVar62 = false;
						if (does_entity_exist(&(Global_1425228->f_2[iVar60])) && func_1143(&(Global_1425228->f_2[iVar60])))
						{
							bVar62 = true;
							iVar63 = get_ped_index_from_entity_index(&(Global_1425228->f_2[iVar60]));
							if (is_entity_dead(iVar63) && iVar63 != func_500(0))
							{
								bVar62 = false;
							}
							else
							{
								iVar64 = _inventory_get_ped_inventory_id(iVar63);
								if (iVar64 == 0 || _0xe787f05dfc977bde(iVar64, iVar61, 0) == 0)
								{
									bVar62 = false;
								}
							}
							if (!bVar62)
							{
								Global_1425228->f_2[iVar60] = 0;
							}
						}
						if (!does_entity_exist(&(Global_1425228->f_2[iVar60])) && func_1144() != iVar61)
						{
							bVar62 = false;
							if (func_1145(iVar61))
							{
								func_1146(&uVar2);
								if (func_1147(&uVar2, iVar61) > 0)
								{
									bVar62 = true;
								}
								if (!bVar62)
								{
									iVar65 = 0;
									iVar65 = 0;
									while (iVar65 < 7)
									{
										func_1148(iVar65, &uVar2);
										if (func_1147(&uVar2, iVar61) > 0)
										{
											bVar62 = true;
											Global_1425228->f_2[iVar60] = func_500(iVar65);
										}
										else
										{
											iVar65++;
										}
									}
								}
							}
							else if (!bVar62)
							{
								iVar66 = 0;
								iVar66 = 0;
								while (iVar66 < 2)
								{
									if (iVar66 == 0)
									{
										iVar67 = func_500(0);
									}
									else
									{
										iVar67 = func_500(1);
									}
									iVar68 = create_itemset(true);
									find_all_attached_carriable_entities(iVar67, iVar68);
									iVar69 = get_itemset_size(iVar68);
									iVar70 = 0;
									iVar70 = 0;
									while (iVar70 < iVar69)
									{
										iVar71 = _get_entity_from_item(get_indexed_item_in_itemset(iVar70, iVar68));
										if (!does_entity_exist(iVar71))
										{
										}
										else
										{
											iVar72 = _0x31fef6a20f00b963(iVar71);
											if (iVar72 == iVar61)
											{
												Global_1425228->f_2[iVar60] = iVar71;
												bVar62 = true;
											}
											else
											{
												iVar70++;
											}
											destroy_itemset(iVar68);
											if (bVar62)
											{
											}
											else
											{
												iVar66++;
											}
											if (!bVar62)
											{
												func_1149(iVar60, 0);
											}
											Jump @688; //curOff = 631
											if (!does_entity_exist(&(Global_1425228->f_2[iVar60])))
											{
												iVar73 = _get_first_entity_ped_is_carrying(Global_35);
												iVar74 = _0x31fef6a20f00b963(iVar73);
												if (iVar74 == iVar61)
												{
													Global_1425228->f_2[iVar60] = iVar73;
												}
											}
											Jump @723; //curOff = 688
											if (func_1150(iVar1))
											{
												func_1149(iVar60, 1);
												_0xa59590050f80ff2e(func_1151(iVar60), 0, 1, 0);
											}
											iVar60++;
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

void func_303()
{
	if (func_282(Global_1914319->f_19658))
	{
		if (!has_script_loaded("train_fast_travel_core"))
		{
			request_script("train_fast_travel_core");
			return;
		}
		if (_get_number_of_references_of_script_with_name_hash(1527681014) <= 0)
		{
			uVar0 = Global_1914319->f_19658;
			start_new_script_with_args("train_fast_travel_core", &uVar0, 1, 1024);
			set_script_as_no_longer_needed("train_fast_travel_core");
		}
		Global_1914319->f_19658 = -1;
	}
}

bool func_304(var uParam0, var uParam1, int iParam2)
{
	if (Global_1914319->f_15923 != -1)
	{
		*uParam0 = Global_1914319->f_15923;
		*uParam1 = Global_1914319->f_3[*uParam0]->f_10;
		return true;
	}
	else
	{
		*uParam0 = &Global_1914319;
		if (!func_1090(*uParam0))
		{
			return false;
		}
		*uParam1 = Global_1914319->f_3[*uParam0]->f_10;
		if (!func_1128(*uParam1))
		{
			return false;
		}
		if (*uParam1 != 101)
		{
			if (func_1152(*uParam1) != iParam2)
			{
				func_316(*uParam0);
				return false;
			}
		}
	}
	return true;
}

void func_305()
{
	Global_1914319 = &Global_1914319 + 1;
	if (&Global_1914319 > 25)
	{
		Global_1914319 = 0;
	}
}

bool func_306(int iParam0)
{
	return func_692(&(Global_1914319->f_16970[iParam0]), 8);
	return false;
}

bool func_307(int iParam0)
{
	if (!func_1153(iParam0))
	{
		if (!func_1154(iParam0))
		{
			return false;
		}
	}
	else
	{
		if (func_692(&(Global_1914319->f_16970[iParam0]), 1))
		{
			func_1155(Global_1914319->f_16970[iParam0], 1);
		}
		if (!func_1156(iParam0))
		{
			return false;
		}
		else
		{
			func_1157(Global_1914319->f_16970[iParam0], 8);
		}
	}
	return true;
}

bool func_308(int iParam0)
{
	return func_1158(iParam0, 4);
}

bool func_309(int iParam0)
{
	return !func_310(iParam0, 1);
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_1128(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (func_1159(iParam1))
	{
		return;
	}
	if (func_1160(iParam1) && !bParam3)
	{
		return;
	}
	if (bParam3)
	{
		func_1161(iParam1, iParam0, bParam4);
		if (bParam6)
		{
			func_1162(iParam0, iParam1, 1, iParam5);
		}
		func_1163(iParam0, iParam1, 1);
		if (get_clock_hours() >= 0 && get_clock_hours() < 6)
		{
			if (func_1164(iParam0, &iVar0))
			{
				if (func_1165(iVar0))
				{
					func_1166(iVar0, iParam1, 0);
				}
			}
		}
		func_295(iParam0, 256);
		func_1088(iParam1, 8388608);
	}
	if (!func_1167(iParam0))
	{
		if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
		{
			_0x74c2b3dc0b294102(Global_1914319->f_3[iParam0]->f_28);
			_0xa1cfb35069d23c23(Global_1914319->f_3[iParam0]->f_28);
		}
		_0xb56d41a694e42e86(Global_1914319->f_3[iParam0]->f_25, 26592, 0, 0, -1, func_1168(iParam1), 0);
		_0x18262cafebb5fbe1(Global_1914319->f_3[iParam0]->f_25, 0, 26592, 0, -1, func_1168(iParam1), 0);
		Global_1393529->f_113 = (get_game_timer() + get_random_int_in_range(15000, 30000));
	}
	if (iParam2 == 1)
	{
		if (!func_310(iParam1, 32768))
		{
			func_1088(iParam1, 32768);
		}
		if (func_310(iParam1, 16384))
		{
			func_1089(iParam1, 16384);
		}
		if (bParam3)
		{
			func_1169(iParam0, 0);
		}
	}
	else
	{
		if (!func_310(iParam1, 16384))
		{
			func_1088(iParam1, 16384);
		}
		if (func_310(iParam1, 32768))
		{
			func_1089(iParam1, 32768);
		}
		func_1169(iParam0, 0);
	}
}

void func_312(int iParam0, int iParam1)
{
	Global_1914319->f_17372 = func_1170();
	if (!func_1171(iParam0))
	{
		if (func_1172(iParam0))
		{
			if (func_1173(iParam0))
			{
				func_1174(iParam1, iParam0, 0, 0);
			}
		}
	}
	if (func_1175())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			iVar1 = &Global_1914319->f_15927[iVar0];
			if (iVar1 != -1)
			{
				func_1176(iVar1);
				if (func_1177(iVar1))
				{
					Global_1914319->f_15927[iVar0] = -1;
					func_1178(iVar1, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_313(int iParam0)
{
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		if (func_1179(Global_1914319->f_3[iParam0]->f_21) && func_1180(Global_1914319->f_3[iParam0]->f_21, 1))
		{
			Global_1914319->f_3[iParam0]->f_23 = func_1181(Global_1914319->f_3[iParam0]->f_21);
			iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
			if (!func_1182(iVar0, 0))
			{
				if (_0x131ec9247e7a2903(iVar0))
				{
					add_entity_to_audio_mix_group(iVar0, "shop_keeper_group", 0f);
				}
				set_ped_config_flag(iVar0, 130, true);
				if (iParam0 == 22)
				{
					set_ped_config_flag(iVar0, 146, true);
					set_ped_config_flag(iVar0, 148, true);
				}
				_0x18ff3110cf47115d(iVar0, 7, 0);
				_0x18ff3110cf47115d(iVar0, 2, 0);
			}
		}
	}
	else if (!func_1179(Global_1914319->f_3[iParam0]->f_21) || !func_1180(Global_1914319->f_3[iParam0]->f_21, 1))
	{
		Global_1914319->f_3[iParam0]->f_23 = 0;
	}
	else
	{
		iVar1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
		if (!func_1182(iVar1, 0))
		{
			if (_0x0eaf918f751f27ba(iVar1) || _0xc0df161950fb101e(iVar1))
			{
				if (_0x268b3aebf032a88d(iVar1))
				{
					set_blocking_of_non_temporary_events(iVar1, false);
				}
				if (get_ped_config_flag(iVar1, 130, true))
				{
					set_ped_config_flag(iVar1, 130, false);
				}
				if (get_ped_config_flag(iVar1, 315, true))
				{
					set_ped_config_flag(iVar1, 315, false);
				}
			}
		}
	}
}

void func_314(int iParam0, int iParam1)
{
	if (!func_1128(iParam1) || !func_1090(iParam0))
	{
		return;
	}
	if (iParam0 == 9)
	{
		Global_1914319->f_19001[iParam1] = func_1183(iParam1, &iVar0);
		if (&Global_1914319->f_19001[iParam1])
		{
			if (!func_1184(iParam1))
			{
				func_294(iParam1, 1);
			}
		}
	}
	else
	{
		Global_1914319->f_19001[iParam1] = func_1185(iParam0, iParam1, &iVar0, 0);
	}
	Global_1914319->f_19001[iParam1]->f_1 = iVar0;
	Global_1914319->f_3[iParam0]->f_3 = func_1186(iVar0);
	func_1187(iParam0, iParam1, iVar0);
	switch (Global_1914319->f_3[iParam0]->f_1)
	{
		case 0:
			func_311(iParam0, iParam1, iVar0, 0, 0, 1, 1);
			if (func_310(iParam1, 256))
			{
				func_1188(iParam0, 3);
			}
			else
			{
				func_1188(iParam0, 1);
			}
			if ((iParam0 == 9 && Global_1914319->f_17042 > 0) && !func_357(15))
			{
				func_1189(&(Global_1914319->f_17042), 128);
			}
			break;
		case 1:
			func_311(iParam0, iParam1, iVar0, (iParam0 == 9 || func_310(iParam1, 8388608)), 0, 0, iParam0 != 9);
			func_1188(iParam0, 2);
			if (iParam1 == func_1190() && iVar0 != 1)
			{
				_0x9b4e793b1cb6550a();
				func_1169(iParam0, 0);
			}
			func_1191(iParam0, iParam1, 8);
			func_1192(iParam1);
			break;
		case 2:
			if (Global_1914319->f_3[iParam0]->f_3 == 1)
			{
				func_1188(iParam0, 3);
			}
			else if (Global_1914319->f_3[iParam0]->f_3 == 2)
			{
				func_1188(iParam0, 6);
			}
			else
			{
				if (func_1193(iParam0) && !func_1160(iParam1))
				{
					if (func_310(iParam1, 8388608))
					{
						if (iVar0 == 1)
						{
							func_1188(iParam0, 3);
						}
						else
						{
							func_1089(iParam1, 8388608);
							func_1194(iParam0);
						}
					}
				}
				else if (!func_310(iParam1, 8388608) && func_1195(iParam1, iParam0, iVar0))
				{
					func_311(iParam0, iParam1, iVar0, 1, 0, 0, 1);
				}
				else if (func_310(iParam1, 8388608))
				{
					if (!func_1160(iParam1))
					{
						if (!func_1195(iParam1, iParam0, iVar0))
						{
							if (iVar0 == 1)
							{
								func_1188(iParam0, 3);
							}
							else
							{
								func_1089(iParam1, 8388608);
								func_1194(iParam0);
							}
						}
					}
				}
				if (func_310(iParam1, 8388608))
				{
					if (iParam0 == 10 && !Global_1914319->f_18994)
					{
						func_1196(iParam0, 1);
					}
				}
				func_1197(iParam0, iParam1, iVar0);
			}
			break;
		case 3:
			func_1198(iParam0, iParam1);
			func_1191(iParam0, iParam1, 2);
			func_1188(iParam0, 5);
			break;
		case 4:
			func_1194(iParam0);
			func_1188(iParam0, 5);
			if (Global_1914319->f_3[iParam0]->f_3 == 0)
			{
				func_1188(iParam0, 1);
			}
			else if (Global_1914319->f_3[iParam0]->f_3 == 2)
			{
				func_1188(iParam0, 6);
			}
			break;
		case 5:
			if (Global_1914319->f_3[iParam0]->f_3 == 0)
			{
				func_1188(iParam0, 1);
			}
			else if (Global_1914319->f_3[iParam0]->f_3 == 2)
			{
				func_1188(iParam0, 6);
			}
			break;
		case 6:
			func_311(iParam0, iParam1, iVar0, func_310(iParam1, 8388608), 0, 0, 1);
			func_1188(iParam0, 7);
			func_1191(iParam0, iParam1, 8);
			break;
		case 7:
			if (Global_1914319->f_3[iParam0]->f_3 == 0)
			{
				func_1188(iParam0, 1);
			}
			else if (Global_1914319->f_3[iParam0]->f_3 == 1)
			{
				func_1188(iParam0, 3);
			}
			else
			{
				if (func_310(iParam1, 8388608))
				{
					if (iParam0 == 10 && !Global_1914319->f_18994)
					{
						func_1196(iParam0, 1);
					}
				}
				if (func_1193(iParam0))
				{
					if (!func_1160(iParam1))
					{
						if (func_310(iParam1, 8388608))
						{
							func_1089(iParam1, 8388608);
							func_1194(iParam0);
						}
					}
				}
				else if (!func_310(iParam1, 8388608) && func_1195(iParam1, iParam0, iVar0))
				{
					func_311(iParam0, iParam1, iVar0, 1, 0, 0, 1);
				}
				else if (func_310(iParam1, 8388608))
				{
					if (!func_1195(iParam1, iParam0, iVar0))
					{
						func_1089(iParam1, 8388608);
						func_1194(iParam0);
					}
				}
			}
			break;
	}
	func_1199(iParam0, iParam1);
	if (func_296(iParam1) && Global_1914319->f_3[9]->f_10 != -1)
	{
		func_1200(Global_1914319->f_3[9]->f_10, &(Global_1914319->f_17042));
	}
	if (func_1201(iParam0) == 3)
	{
		if (!func_897() && func_1116(Global_35, Global_1914319->f_3[iParam0]->f_11, 1) > 225f)
		{
			if (func_1202(Global_1914319->f_3[iParam0]->f_21, 1))
			{
				func_1203(Global_1914319->f_3[iParam0]->f_21, 1, 1, 0, 0);
			}
		}
	}
}

void func_315()
{
	func_1204(1);
	if (func_173())
	{
		func_1204(0);
		return;
	}
	if (is_screen_faded_out())
	{
		func_1204(0);
		return;
	}
	if (is_screen_fading_out())
	{
		func_1204(0);
		return;
	}
	if (is_screen_fading_in())
	{
		func_1204(0);
		return;
	}
	if (func_138(get_player_index(), 1, 0, 1))
	{
		func_1204(0);
		return;
	}
}

void func_316(int iParam0)
{
	if (func_1179(Global_1914319->f_3[iParam0]->f_21) && func_1205(Global_1914319->f_3[iParam0]->f_21))
	{
		func_1203(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1914319->f_3[iParam0]->f_11 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_21 = -1;
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_17 = 0;
	Global_1914319->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_1206(Global_1914319->f_3[iParam0]->f_10, 0);
	func_295(iParam0, 536870912);
	iVar1 = func_1207(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_1208(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
			Global_1914319->f_3[iParam0]->f_317[iVar0] = 0;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = 0f;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	if (Global_1914319->f_3[iParam0]->f_440 != 0)
	{
		_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
	}
	Global_1914319->f_3[iParam0]->f_23 = 0;
	func_1209(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_1178(iParam0, 0);
}

void func_317(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1914319->f_16934[iParam0])) && _0x603ac35fd4602c76(&(Global_1914319->f_16934[iParam0])))
	{
		_datafile_unload(&(Global_1914319->f_16934[iParam0]));
	}
	Global_1914319->f_16970[iParam0] = 0;
	Global_1914319->f_16934[iParam0] = 0;
}

void func_318()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1933981->f_13[iVar0]->f_3 = -1;
		Global_1933981->f_13[iVar0]->f_4 = -1;
		Global_1933981->f_13[iVar0]->f_5 = -1;
		Global_1933981->f_13[iVar0]->f_6 = -1;
		Global_1933981->f_13[iVar0]->f_10 = -1;
		func_325(&(Global_1933981->f_13[iVar0]->f_9), 0);
		iVar0++;
	}
	Global_1933981->f_11 = 0;
	Global_1933981->f_12 = 0;
	Global_1933981->f_9 = -1;
}

bool func_319()
{
	if (Global_1933981->f_11 >= Global_1933981->f_12)
	{
		Global_1933981->f_11 = 0;
	}
	if (!func_276(*Global_1933981->f_13[Global_1933981->f_11]))
	{
		if (vdist2(Global_36, *Global_1933981->f_13[Global_1933981->f_11]) < 2.25f)
		{
			func_1210(Global_1933981->f_11);
			return true;
		}
	}
	else if (_does_volume_exist(Global_1933981->f_13[Global_1933981->f_11]->f_7))
	{
		if (is_entity_in_volume(Global_35, Global_1933981->f_13[Global_1933981->f_11]->f_7, false, 0))
		{
			func_1210(Global_1933981->f_11);
			return true;
		}
	}
	Global_1933981->f_11++;
	return false;
}

bool func_320(int iParam0)
{
	iVar0 = func_1211(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_321(int iParam0)
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

int func_322(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1212(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1213(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_323(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_276(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1212(iVar0, 2))
		{
			if (func_1214(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1213(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_324(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_321(iParam0))
	{
		return;
	}
	iVar0 = func_836(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_325(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_326(int iParam0, bool bParam1)
{
	if (bParam1 && !func_321(iParam0))
	{
		return false;
	}
	iVar0 = func_836(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_327(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_321(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_836(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_1215(iVar0);
	*iParam0 = 0;
}

bool func_328()
{
	return _is_app_running(-605293197);
}

void func_329(var uParam0)
{
	if (uParam0->f_3 != -1)
	{
		_databinding_write_data_hash_string(&Global_1933981, uParam0->f_3);
		_databinding_write_data_hash_string(Global_1933981->f_1, 0);
		_databinding_write_data_bool(Global_1933981->f_2, true);
	}
	if (uParam0->f_4 != -1)
	{
		_databinding_write_data_hash_string(Global_1933981->f_3, uParam0->f_4);
		_databinding_write_data_hash_string(Global_1933981->f_4, 3);
		_databinding_write_data_bool(Global_1933981->f_5, false);
	}
	if (uParam0->f_5 != -1)
	{
		_databinding_write_data_hash_string(Global_1933981->f_6, uParam0->f_5);
		_databinding_write_data_hash_string(Global_1933981->f_7, 3);
		_databinding_write_data_bool(Global_1933981->f_8, false);
	}
}

void func_330()
{
	if (Global_1933981->f_9 != -1)
	{
		if (func_328())
		{
			_close_app_by_hash(-605293197);
		}
		func_1216(Global_1933981->f_9);
		func_1210(-1);
	}
}

int func_331(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bVar0 = (func_336() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 18;
		case 2:
			return 11;
		case 3:
			return 24;
		case 4:
			return 29;
		case 5:
			return 31;
		case 10:
			return 43;
		default:
			break;
	}
	return 34;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 23;
		case 2:
			return 17;
		case 3:
			return 28;
		case 4:
			return 30;
		case 5:
			return 33;
		case 10:
			return 43;
		default:
			break;
	}
	return 42;
}

int func_334(int iParam0)
{
	iVar1 = func_1217(iParam0);
	if (iParam0 >= 43 && iParam0 <= 43)
	{
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		vVar3 = { func_1218(iParam0, iVar0) };
		fVar2 = vdist(Global_36, vVar3);
		if (iParam0 >= 43 && iParam0 <= 43)
		{
		}
		if (iParam0 == 21)
		{
			if (fVar2 < (200f - 20f))
			{
				return 1;
			}
		}
		else if (fVar2 < 200f)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_335()
{
	return Global_40.f_4283;
}

bool func_336()
{
	if (func_82() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1;
		case 43:
			return 0;
		case 61:
			return 2;
		case 73:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_338(int iParam0, int iParam1)
{
	if (!func_1128(iParam1))
	{
		return;
	}
	iVar0 = &Global_20710.f_1322[iParam1];
	if (iVar0 == -15 || iVar0 == 0)
	{
		return;
	}
	func_1219(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	if (!func_488(iVar0, 1))
	{
		if (!func_310(iParam1, 1024))
		{
			func_1088(iParam1, 1024);
			return;
		}
	}
	else if (func_310(iParam1, 1024))
	{
		func_1089(iParam1, 1024);
		return;
	}
	func_1219(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	if (func_488(iVar0, 1) && func_1220(iParam1, 1, 1))
	{
		func_1221(iParam1, 65536);
		func_1222(iParam1);
		return;
	}
	func_1219(&iVar1, 0, 0, 0, 1, 0, 0, 0);
	if (func_488(iVar1, 1) && func_1223(iParam1, 65536))
	{
		func_1224(iParam1, 65536);
		return;
	}
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	if (!func_1225(iParam1))
	{
		return;
	}
	if (func_1226(iParam2, 4))
	{
		return;
	}
	if (iParam2 == 0)
	{
		func_1227(iParam2, 4);
		return;
	}
	if (!func_1226(iParam2, 2))
	{
		if (func_178() == func_1152(iParam1))
		{
			if (!func_272(0, 0, 1))
			{
				if (func_1211(Global_1914319->f_3[iParam0]->f_20) != 5)
				{
					func_1230(func_1228(iParam1), func_1229(iParam1), "AMB_RESTRICT_SHOPROB", 1, 0, 0, 0, -1082130432);
					func_1227(iParam2, 2);
				}
				else
				{
					func_1231(func_1228(iParam1), 0);
					func_1227(iParam2, 4);
				}
			}
		}
	}
	else if (func_178() != func_1152(iParam1))
	{
		func_1231(func_1228(iParam1), 0);
		func_1232(iParam2, 2);
	}
}

bool func_340(int iParam0, int iParam1)
{
	if (is_thread_active(&(Global_1914319->f_17006[iParam0]), false))
	{
		return false;
	}
	if (!func_1128(iParam1))
	{
		return false;
	}
	if (Global_1914319->f_3[iParam0]->f_7 & 4 == 0)
	{
		return false;
	}
	if (!func_1225(iParam1))
	{
		if (!func_1193(iParam0))
		{
			return false;
		}
	}
	if (func_310(iParam1, 1))
	{
		return false;
	}
	if (!is_screen_faded_in() && !func_1233(iParam0, 8192))
	{
		return false;
	}
	if (iParam1 == 39 && func_937(58))
	{
		return false;
	}
	if (func_1152(iParam1) == 105)
	{
		if (func_1234(21))
		{
			return false;
		}
		else if (func_1235(109))
		{
			return false;
		}
		else if (func_1226(1, 16))
		{
			return false;
		}
	}
	if (iParam0 == 2 && !func_361(28))
	{
		return false;
	}
	if (iParam0 == 8 && !func_361(29))
	{
		return false;
	}
	if (iParam0 == 9 && !func_296(iParam1))
	{
		return false;
	}
	if (func_344(iParam0, iParam1))
	{
		return true;
	}
	if (!func_1236(iParam0))
	{
		if (!func_1237(iParam1))
		{
			return false;
		}
	}
	if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
		if (!is_entity_dead(iVar0))
		{
			if (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))
			{
				func_1088(iParam1, 1024);
				return false;
			}
		}
	}
	return true;
}

bool func_341(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 73:
			if (!func_1238(2))
			{
				return false;
			}
			return true;
		case 43:
			if (!func_1238(1))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

bool func_342(int iParam0, int iParam1)
{
	if (is_thread_active(&(Global_1914319->f_17006[iParam0]), false))
	{
		return false;
	}
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_1225(iParam1))
	{
		return false;
	}
	if (func_138(player_id(), 1, 0, 1))
	{
		return false;
	}
	fVar0 = vdist(Global_36, Global_1914319->f_3[iParam0]->f_11);
	if (fVar0 >= 75f)
	{
		return false;
	}
	if (!func_1239(iParam0, -1))
	{
		if (!func_1237(iParam1))
		{
			return false;
		}
	}
	if (func_341(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_343(int iParam0, int iParam1)
{
	if (is_thread_active(&(Global_1914319->f_17006[iParam0]), false))
	{
		return;
	}
	if (func_1220(iParam1, 0, 1))
	{
		return;
	}
	request_script("shoprobberies");
	if (!has_script_loaded("shoprobberies"))
	{
		return;
	}
	if (!func_1240(iParam0, iParam1, &uVar0))
	{
		return;
	}
	vVar1.x = uVar0;
	vVar1.f_2 = iParam1;
	vVar1.f_1 = iParam0;
	Global_1914319->f_17006[iParam0] = start_new_script_with_args("shoprobberies", &vVar1, 3, 7302);
	set_script_as_no_longer_needed("shoprobberies");
}

bool func_344(int iParam0, int iParam1)
{
	if (is_thread_active(&(Global_1914319->f_17006[iParam0]), false))
	{
		return false;
	}
	if (func_82() != -1)
	{
		return false;
	}
	if (network_is_game_in_progress())
	{
		return false;
	}
	if (!func_1179(Global_1914319->f_3[iParam0]->f_21))
	{
		return false;
	}
	if (func_1225(Global_1914319->f_3[iParam0]->f_10))
	{
		return false;
	}
	if ((iParam1 == 77 || iParam1 == 20) || iParam1 == 30)
	{
		return false;
	}
	if (iParam1 == 41 && func_937(23))
	{
		return false;
	}
	if (!func_1241(iParam0))
	{
		return false;
	}
	if (!is_thread_active(Global_1914319->f_3[iParam0]->f_18, false))
	{
		return false;
	}
	return true;
}

void func_345(int iParam0, int iParam1)
{
	if (_does_thread_exist(&(Global_1914319->f_17006[iParam0])))
	{
	}
	else if (!network_is_game_in_progress())
	{
		request_script("shoprobberies_dynamic");
		if (!has_script_loaded("shoprobberies_dynamic"))
		{
		}
		else
		{
			if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
			{
				iVar3 = func_1242(get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23), 0);
				if (func_1179(iVar3))
				{
					vVar0.x = iVar3;
				}
			}
			else
			{
				vVar0.x = -1;
			}
			vVar0.f_2 = iParam1;
			vVar0.f_1 = iParam0;
			if (!func_1239(iParam0, -1) || vVar0.x != -1)
			{
				Global_1914319->f_17006[iParam0] = start_new_script_with_args("shoprobberies_dynamic", &vVar0, 3, 512);
				set_script_as_no_longer_needed("shoprobberies_dynamic");
			}
		}
	}
}

void func_346()
{
	if (func_1243(512))
	{
		if (!func_1244(Global_1898092->f_26.f_2))
		{
			func_1245();
			func_1246(512);
			return;
		}
		Var0.f_8 = -1;
		Var0.f_17 = 1097859072;
		Var0.f_18 = 1000;
		Var0.f_19 = 1067450368;
		Var0.f_20 = 5000;
		Var0.f_21 = 42;
		Var0.f_22 = 1103626240;
		Var0.f_23 = 1077936128;
		Var0.f_24 = 1106247680;
		Var0.f_25 = 1103101952;
		Var0.f_26 = 1097859072;
		Var0.f_27 = 1103626240;
		Var0.f_35 = 24;
		Var0.f_140 = 10;
		Var0.f_29 = Global_1898092->f_26.f_8;
		Var0.f_136 = Global_1898092->f_26.f_2;
		Var0.f_137 = Global_1898092->f_26.f_1;
		if (func_1247(&Var0))
		{
			if (func_282(Var0.f_137))
			{
				func_1248(Var0.f_137, 4);
				func_1248(Var0.f_137, 8);
			}
			if ((func_1249(&Var0, 4) || func_1249(&Var0, 8)) || func_1249(&Var0, 16))
			{
				func_1250(&Var0);
			}
			else
			{
				if (_does_volume_exist((*Global_1392194)[Global_1898092->f_26.f_2]->f_6))
				{
					vVar151 = { _0xf70f00013a62f866((*Global_1392194)[Global_1898092->f_26.f_2]->f_6) };
					vVar155 = { _0x3e2a25b2416dd67e((*Global_1392194)[Global_1898092->f_26.f_2]->f_6) };
					fVar154 = ((vVar155.x + vVar155.y) / 2f);
				}
				else
				{
					vVar151 = { func_1252(Global_1898092->f_26.f_2, func_1251(Global_1898092->f_26.f_2)) };
					fVar154 = 75f;
				}
				_0x9851de7aec10b4e1(vVar151, fVar154, 1, 0);
				_0x4161648394262fdf(vVar151, fVar154);
			}
			if (_does_volume_exist((*Global_1392194)[Global_1898092->f_26.f_2]->f_6))
			{
				_0xa1cfb35069d23c23((*Global_1392194)[Global_1898092->f_26.f_2]->f_6);
				_0x74c2b3dc0b294102((*Global_1392194)[Global_1898092->f_26.f_2]->f_6);
			}
			if (_does_volume_exist((*Global_1392194)[Global_1898092->f_26.f_2]->f_5))
			{
				_0xa1cfb35069d23c23((*Global_1392194)[Global_1898092->f_26.f_2]->f_5);
			}
			func_1245();
			func_1246(512);
		}
	}
}

void func_347()
{
	if (func_1243(4))
	{
		if (func_1244(Global_1898092->f_2))
		{
			func_1253(Global_1898092->f_2, &(Global_1898092->f_36));
			if (!func_1254(Global_1898092->f_2, Global_1898092->f_36, 0, 0, 1))
			{
				if (!func_1243(8))
				{
					Global_1898092->f_25++;
				}
			}
			else
			{
				Global_1898092->f_25 = 0;
				if (func_1255(Global_1898092->f_2) || Global_40.f_9096[Global_1898092->f_2]->f_1 >= 0)
				{
					func_1256(3);
				}
				else if (func_1257(Global_1898092->f_2, 1073741824))
				{
					func_1256(0);
				}
				if (_does_volume_exist((*Global_1392194)[Global_1898092->f_2]->f_6))
				{
					func_1258((*Global_1392194)[Global_1898092->f_2]->f_6, 0, 0, 1, 1, 0);
					func_592((*Global_1392194)[Global_1898092->f_2]->f_6, 0);
				}
				func_1259(Global_1898092->f_2, -2147483648);
				func_1259(Global_1898092->f_2, 1073741824);
				func_1246(4);
			}
		}
		else
		{
			func_1256(0);
			func_1246(4);
			Global_1898092->f_25 = 0;
		}
	}
}

void func_348()
{
	if (func_1243(16) && !func_1243(512))
	{
		if (!is_thread_active(Global_1898092->f_26.f_6, false))
		{
			func_1260();
		}
		else
		{
			func_1246(16);
		}
	}
}

void func_349()
{
	if ((Global_1898092->f_24 % 2) != 0)
	{
		Global_1898092->f_24++;
		return;
	}
	iVar0 = (Global_1898092->f_24 / 2);
	if (iVar0 >= 3)
	{
		Global_1898092->f_24 = 0;
		return;
	}
	iVar1 = (64 * func_1261(iVar0 == 0, 1, (2 * iVar0)));
	if (func_1262(iVar1))
	{
		vVar2 = { func_1263(Global_1898092->f_3, func_1251(Global_1898092->f_3), iVar0) };
		if (!func_276(vVar2))
		{
			func_1264(Global_1898092->f_5[iVar0], vVar2, iVar1);
		}
	}
	else if (func_1265(iVar1))
	{
		func_1266(Global_1898092->f_5[iVar0], iVar1, 0);
	}
	Global_1898092->f_24++;
	if (Global_1898092->f_24 >= 4)
	{
		Global_1898092->f_24 = 0;
	}
}

void func_350()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9096[iVar0]->f_3++;
		iVar0++;
	}
}

void func_351()
{
	if (func_113() == 1 && is_entity_in_area(Global_35, -1672.828f, -1047.349f, 96.03329f, -1466.282f, -873.5215f, 94.96809f, false, false, 0))
	{
		if (get_game_timer() >= Global_36618)
		{
			if (_does_volume_exist(Global_36617))
			{
				func_1267(Global_36617, &Var0);
				bVar7 = false;
				if (_get_entity_inside_explosion_area(-1, Var0, Var0.f_3, Var0.f_6) == func_744(Global_35))
				{
					bVar7 = true;
				}
				else if (is_bullet_in_angled_area(Var0, Var0.f_3, Var0.f_6, true))
				{
					vVar8 = { 0f, 0f, 0f };
					if (get_ped_last_weapon_impact_coord(Global_35, &vVar8))
					{
						if (is_point_in_angled_area(vVar8, Var0, Var0.f_3, Var0.f_6, false, true))
						{
							bVar7 = true;
						}
					}
				}
				if (bVar7)
				{
					func_1268(3, 0, 0, 0, 0, 0, 1065353216, 0);
					Global_36618 = (get_game_timer() + 60000);
				}
			}
			else
			{
				Global_36617 = _create_volume_box_with_custom_name(-1589.715f, -973.328f, 71.412f, 0f, 0f, -19.875f, 15.995f, 28.436f, 32.529f, "fortriggsgrave");
			}
		}
	}
}

void func_352()
{
	if (Global_17504.f_42[Global_1326862->f_1]->f_4 > 0)
	{
		Global_17504.f_42[Global_1326862->f_1]->f_4 = (Global_17504.f_42[Global_1326862->f_1]->f_4 - 90);
	}
	Global_1326862->f_1++;
	if (Global_1326862->f_1 > 119)
	{
		Global_1326862->f_1 = 0;
	}
}

void func_353()
{
	uVar11 = 1;
	if (Global_1326862->f_604 > Global_1326862->f_605)
	{
		return;
	}
	iVar15 = func_1261(func_1099(), 5, 15);
	Global_1326862->f_607 = func_892(Global_1326862->f_607, Global_1326862->f_604, Global_1326862->f_605);
	iVar0 = &Global_1326862->f_11[Global_1326862->f_607];
	switch (Global_1326862->f_606)
	{
		case 0:
			if (!(*Global_1310750)[iVar0]->f_48)
			{
				if ((*Global_1310750)[iVar0]->f_38 != -1)
				{
					if (!func_1269((*Global_1310750)[iVar0]->f_38))
					{
						(*Global_1310750)[iVar0]->f_50 = 0;
						(*Global_1310750)[iVar0]->f_45 = 0;
					}
					else
					{
						(*Global_1310750)[iVar0]->f_50 = 1;
					}
				}
				else
				{
					(*Global_1310750)[iVar0]->f_50 = 1;
				}
				if ((*Global_1310750)[iVar0]->f_50)
				{
					Global_1326862->f_606 = 1;
				}
				else
				{
					Global_1326862->f_606 = 0;
				}
			}
			break;
		case 1:
			if (!func_1270(iVar0, Global_1310750[iVar0]))
			{
				(*Global_1310750)[iVar0]->f_51 = 0;
				(*Global_1310750)[iVar0]->f_45 = 0;
			}
			else
			{
				(*Global_1310750)[iVar0]->f_51 = 1;
			}
			if ((*Global_1310750)[iVar0]->f_51)
			{
				Global_1326862->f_606 = 2;
			}
			else
			{
				Global_1326862->f_606 = 0;
			}
			break;
		case 2:
			if (func_1271(iVar0, 512))
			{
				Global_1326862->f_609 = 1;
				(*Global_1310750)[iVar0]->f_49 = 1;
				Global_1326862->f_606 = 0;
			}
			else
			{
				bVar13 = _0xf47a1eb2a538a3a3();
				if (!is_ped_injured(Global_35))
				{
					bVar14 = !is_ped_still(Global_35);
				}
				iVar17 = func_1272(iVar0);
				iVar18 = func_1273(iVar0);
				func_1274(iVar0, &fVar9, &fVar8, &uVar10, bVar14);
				while (iVar16 < iVar15 && Global_1326862->f_608 < iVar17)
				{
					vVar1 = { *(Global_1310750->f_13358[(Global_1326862->f_608 + iVar18)]) };
					if (!func_276(vVar1))
					{
						if (!func_1275(iVar0, Global_1326862->f_608))
						{
							fVar7 = vdist2(Global_36, vVar1);
							if (bVar13 && func_1271(iVar0, 1))
							{
								if (_find_closest_gps_position(vVar1, &vVar4))
								{
									if (func_510(vVar1, vVar4) <= 20f)
									{
										Global_1326862->f_610 = 1;
									}
								}
							}
							if (fVar7 > fVar8)
							{
							}
							else if (fVar7 < fVar9)
							{
							}
							else if (func_1276(vVar1, 0, 0, 0))
							{
								func_1277(iVar0, vVar1);
							}
							else if (func_1271(iVar0, 32) && (is_position_occupied(vVar1, func_1278(iVar0), false, true, false, false, false, 0, false) || func_1279(vVar1, func_1278(iVar0), &uVar11)))
							{
							}
							else
							{
								Global_1326862->f_609 = 1;
								(*Global_1310750)[iVar0]->f_49 = 1;
							}
						}
					}
					Global_1326862->f_608++;
					iVar16++;
				}
				if (Global_1326862->f_608 >= func_1272(iVar0) || Global_1326862->f_609)
				{
					(*Global_1310750)[iVar0]->f_49 = Global_1326862->f_609;
					(*Global_1310750)[iVar0]->f_52 = Global_1326862->f_610;
					Global_1326862->f_606 = 0;
				}
			}
			break;
	}
	if (Global_1326862->f_606 == 0)
	{
		Global_1326862->f_609 = 0;
		Global_1326862->f_610 = 0;
		Global_1326862->f_608 = 0;
		Global_1326862->f_607++;
		if (Global_1326862->f_607 > Global_1326862->f_605)
		{
			Global_1326862->f_607 = 0;
		}
	}
}

void func_354(int iParam0, int iParam1)
{
	Global_1394141->f_7[iParam0]->f_30 = iParam1;
}

void func_355()
{
	if (Global_1394141->f_1339 == -1)
	{
		Global_1394141->f_1339 = 10;
	}
	Global_1394141->f_1339++;
	if (Global_1394141->f_1339 < 10)
	{
		return;
	}
	func_1280(Global_1394141->f_1338);
	Global_1394141->f_1338++;
	if (Global_1394141->f_1338 < 0 || Global_1394141->f_1338 > 4)
	{
		Global_1394141->f_1338 = 0;
		Global_1394141->f_1339 = 0;
	}
}

void func_356(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			if (!func_272(0, 0, 1))
			{
				if (!_does_thread_exist(&(Global_1394141->f_1279[0])) && func_1281(0))
				{
					func_1282();
					Var0.f_1 = 283;
					Var0.f_2 = 0;
					func_1283("theatre_ticket_taker", Var0, 1024, Global_1394141->f_1279[0]);
					return;
				}
				if (func_361(45))
				{
					if (!_does_thread_exist(&(Global_1394141->f_1279[2])) && func_1281(2))
					{
						Var10.f_1 = 284;
						Var10.f_2 = 2;
						func_1283("theatre_ticket_taker", Var10, 1024, Global_1394141->f_1279[2]);
						return;
					}
				}
				else if (!_does_thread_exist(&(Global_1394141->f_1279[1])) && func_1281(1))
				{
					Var20.f_1 = 284;
					Var20.f_2 = 1;
					func_1283("theatre_ticket_taker", Var20, 1024, Global_1394141->f_1279[1]);
					return;
				}
			}
			break;
		case 76:
			if (!func_272(0, 0, 1))
			{
				if (!_does_thread_exist(&(Global_1394141->f_1279[3])) && func_1281(3))
				{
					func_1282();
					Var30.f_1 = 33;
					Var30.f_2 = 3;
					func_1283("theatre_ticket_taker", Var30, 1024, Global_1394141->f_1279[3]);
					return;
				}
			}
			break;
		case 38:
			if (!func_272(0, 0, 1))
			{
				if (!_does_thread_exist(&(Global_1394141->f_1279[4])) && func_1281(4))
				{
					func_1282();
					Var40.f_1 = 525;
					Var40.f_2 = 4;
					func_1283("theatre_ticket_taker", Var40, 1024, Global_1394141->f_1279[4]);
					return;
				}
			}
			break;
	}
}

bool func_357(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1);
}

int func_358()
{
	switch (Global_1394141->f_3)
	{
		case 0:
			Global_1394141->f_1279[3]->f_7 = &Global_40.f_9028[3];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_3 = 1;
			break;
		case 1:
			if (Global_1394141->f_1279[3]->f_7 != &Global_40.f_9028[3] && func_1284(&(Global_40.f_9028[3]), 3))
			{
				Global_1394141->f_3 = 2;
			}
			break;
		case 2:
			Global_1394141->f_1279[3]->f_7 = &Global_40.f_9028[3];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_3 = 1;
			break;
	}
	if (func_123(Global_1394141->f_1326, 128))
	{
		switch (&Global_40.f_9028[3])
		{
			case 31:
				if (!func_613(func_1285(Global_1394141->f_1279[3]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[3]->f_7));
					func_1287(426191476);
					func_1287(187862543);
					func_1287(417081698);
					func_1287(791041526);
					func_1287(965986934);
				}
				break;
			case 32:
				if (!func_613(func_1285(Global_1394141->f_1279[3]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[3]->f_7));
					func_1287(192515737);
					func_1287(187862543);
					func_1287(417081698);
					func_1287(791041526);
					func_1287(965986934);
				}
				break;
			case 33:
				if (!func_613(func_1285(Global_1394141->f_1279[3]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[3]->f_7));
					func_1287(192515737);
					func_1287(426191476);
					func_1287(417081698);
					func_1287(791041526);
					func_1287(965986934);
				}
				break;
			case 34:
				if (!func_613(func_1285(Global_1394141->f_1279[3]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[3]->f_7));
					func_1287(192515737);
					func_1287(426191476);
					func_1287(187862543);
					func_1287(791041526);
					func_1287(965986934);
				}
				break;
			case 35:
				if (!func_613(func_1285(Global_1394141->f_1279[3]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[3]->f_7));
					func_1287(192515737);
					func_1287(426191476);
					func_1287(187862543);
					func_1287(417081698);
					func_1287(965986934);
				}
				break;
		}
		func_127(&(Global_1394141->f_1326), 128);
	}
	return 1;
}

void func_359()
{
	if (Global_1394141->f_1 != &Global_40.f_9028[0] && func_1284(&(Global_40.f_9028[0]), 0))
	{
		Global_1394141->f_2 = 1;
		func_126(&(Global_1394141->f_1326), 128);
	}
	func_1288(Global_1394141->f_1);
	if (func_123(Global_1394141->f_1326, 128))
	{
		iVar0 = get_interior_at_coords(2537.973f, -1278.278f, 49.21795f);
		switch (Global_1394141->f_2)
		{
			case 1:
				if (is_valid_interior(iVar0))
				{
					if (is_interior_ready(iVar0))
					{
						if (_is_interior_entity_set_valid(iVar0, func_1289(Global_1394141->f_1)))
						{
							deactivate_interior_entity_set(iVar0, func_1289(Global_1394141->f_1), true);
							Global_1394141->f_1 = &Global_40.f_9028[0];
							Global_1394141->f_2 = 2;
						}
					}
				}
				break;
			case 2:
				if (is_valid_interior(iVar0))
				{
					if (is_interior_ready(iVar0))
					{
						if (_is_interior_entity_set_valid(iVar0, func_1289(Global_1394141->f_1)))
						{
							activate_interior_entity_set(iVar0, func_1289(Global_1394141->f_1), 0);
							func_127(&(Global_1394141->f_1326), 128);
							Global_1394141->f_2 = 0;
						}
					}
				}
				break;
			case 0:
				break;
		}
	}
}

void func_360()
{
	iVar0 = 0;
	bVar1 = false;
	if (_0xcf45df50c7775f2a())
	{
		return;
	}
	if (func_1284(&(Global_40.f_9028[0]), 0))
	{
		iVar0 = 1;
	}
	if (iVar0 || Global_1394141->f_1328)
	{
		bVar1 = true;
	}
	switch (Global_1394141->f_6)
	{
		case 1:
			_0x2c87c3e1c7b96ee2(Global_1394141->f_1320);
			if (_is_imap_active(149553684))
			{
				_remove_imap(149553684);
			}
			Global_1394141->f_6 = 0;
			break;
		case 2:
			if (!_does_volume_exist(Global_1394141->f_1320))
			{
				Global_1394141->f_1320 = _create_volume_cylinder_with_custom_name(2527.91f, -1274.304f, 48.197f, 0f, 0f, 0f, 0.75f, 0.75f, 3f, "Sidewalk_sign_Nav_Block");
			}
			_0x19c7567d2f2287d6(Global_1394141->f_1320, 7);
			if (!_is_imap_active(149553684))
			{
				_request_imap(149553684);
			}
			Global_1394141->f_6 = 0;
			break;
		case 0:
			if (bVar1)
			{
				if (!func_123(Global_1394141->f_1326, 256))
				{
					Global_1394141->f_6 = 2;
					func_126(&(Global_1394141->f_1326), 256);
				}
			}
			else if (func_123(Global_1394141->f_1326, 256))
			{
				Global_1394141->f_6 = 1;
				func_127(&(Global_1394141->f_1326), 256);
			}
			break;
	}
}

bool func_361(int iParam0)
{
	if (!func_1290(iParam0))
	{
		return false;
	}
	return func_1291(iParam0);
}

int func_362()
{
	switch (Global_1394141->f_5)
	{
		case 0:
			Global_1394141->f_1279[2]->f_7 = &Global_40.f_9028[2];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_5 = 1;
			break;
		case 1:
			if (Global_1394141->f_1279[2]->f_7 != &Global_40.f_9028[2] && func_1284(&(Global_40.f_9028[2]), 2))
			{
				Global_1394141->f_5 = 2;
			}
			break;
		case 2:
			Global_1394141->f_1279[2]->f_7 = &Global_40.f_9028[2];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_5 = 1;
			break;
	}
	if (func_123(Global_1394141->f_1326, 128))
	{
		switch (&Global_40.f_9028[2])
		{
			case 26:
				if (!func_613(func_1285(Global_1394141->f_1279[2]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[2]->f_7));
					func_1287(-1838712533);
					func_1287(1140218954);
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-35658630);
				}
				break;
			case 27:
				if (!func_613(func_1285(Global_1394141->f_1279[2]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[2]->f_7));
					func_1287(-2069570138);
					func_1287(1140218954);
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-35658630);
				}
				break;
			case 28:
			case 29:
			case 30:
				if (!func_613(func_1285(Global_1394141->f_1279[2]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[2]->f_7));
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-35658630);
				}
				break;
		}
		func_127(&(Global_1394141->f_1326), 128);
	}
	return 1;
}

int func_363()
{
	switch (Global_1394141->f_4)
	{
		case 0:
			Global_1394141->f_1279[1]->f_7 = &Global_40.f_9028[1];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_4 = 1;
			break;
		case 1:
			if (Global_1394141->f_1279[1]->f_7 != &Global_40.f_9028[1] && func_1284(&(Global_40.f_9028[1]), 1))
			{
				Global_1394141->f_4 = 2;
			}
			break;
		case 2:
			Global_1394141->f_1279[1]->f_7 = &Global_40.f_9028[1];
			func_126(&(Global_1394141->f_1326), 128);
			Global_1394141->f_4 = 1;
			break;
	}
	if (func_123(Global_1394141->f_1326, 128))
	{
		switch (&Global_40.f_9028[1])
		{
			case 21:
				if (!func_613(func_1285(Global_1394141->f_1279[1]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[1]->f_7));
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-35658630);
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1140218954);
				}
				break;
			case 22:
				if (!func_613(func_1285(Global_1394141->f_1279[1]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[1]->f_7));
					func_1287(1350371763);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-35658630);
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1140218954);
				}
				break;
			case 23:
				if (!func_613(func_1285(Global_1394141->f_1279[1]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[1]->f_7));
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1718674470);
					func_1287(-35658630);
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1140218954);
				}
				break;
			case 24:
				if (!func_613(func_1285(Global_1394141->f_1279[1]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[1]->f_7));
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-35658630);
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1140218954);
				}
				break;
			case 25:
				if (!func_613(func_1285(Global_1394141->f_1279[1]->f_7)))
				{
					func_1286(func_1285(Global_1394141->f_1279[1]->f_7));
					func_1287(1350371763);
					func_1287(-1257057567);
					func_1287(-1419919497);
					func_1287(-1718674470);
					func_1287(-2069570138);
					func_1287(-1838712533);
					func_1287(1140218954);
				}
				break;
		}
		func_127(&(Global_1394141->f_1326), 128);
	}
	return 1;
}

bool func_364(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			if (func_123(Global_40.f_9028.f_12, 8) || Global_1394141->f_1340)
			{
				*uParam2 = 4;
			}
			else
			{
				*uParam2 = 3;
			}
			return true;
		case 1:
			*uParam1 = 21;
			*uParam2 = 25;
			return true;
		case 2:
			*uParam1 = 26;
			if (func_123(Global_40.f_9028.f_12, 64))
			{
				*uParam2 = 30;
			}
			else
			{
				*uParam2 = 29;
			}
			return true;
		case 3:
			*uParam1 = 31;
			*uParam2 = 35;
			return true;
		case 4:
			*uParam1 = 36;
			if (func_123(Global_40.f_9028.f_12, 64))
			{
				*uParam2 = 40;
			}
			else
			{
				*uParam2 = 39;
			}
			return true;
		case -1:
			return false;
	}
	return false;
}

bool func_365(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return false;
	}
	if (is_thread_active(Global_1394141->f_1336, false))
	{
		return false;
	}
	if (Global_1394141->f_1328)
	{
		return false;
	}
	iVar0 = func_178();
	if (iParam1 == 0 || iParam1 == 0)
	{
		if (Global_1394141->f_1340)
		{
			if (!Global_1394141->f_1279[0]->f_2)
			{
				if (func_526(Global_35, 2541.474f, -1281.891f, 49.26815f, 1) < 5f || func_123(Global_1394141->f_1326, 8192))
				{
					Global_1394141->f_1279[0]->f_2 = 1;
				}
			}
			return true;
		}
	}
	if (Global_1394141->f_1279[iParam1]->f_5)
	{
		return false;
	}
	if (func_1293(iParam0) != iVar0)
	{
		return false;
	}
	if (!func_1294(iParam0))
	{
		return false;
	}
	if (func_1295(iParam0))
	{
		return false;
	}
	if (func_1296(iParam0, 8))
	{
		return false;
	}
	if (func_138(player_id(), 1, 0, 1) || _0xf46108c50a22b029())
	{
		return false;
	}
	if (func_82() == 0)
	{
		return false;
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_35);
		iVar2 = get_entity_type(iVar1);
		if (iVar2 == 1)
		{
			return false;
		}
	}
	if (!does_entity_exist(Global_1394141->f_7[iParam0]->f_6))
	{
		Global_1394141->f_7[iParam0]->f_6 = func_1181(Global_1394141->f_7[iParam0]->f_5);
	}
	if (!func_1284(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_366(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return;
	}
	fVar0 = get_distance_between_coords(Global_36, Global_1394141->f_7[iParam0]->f_1, true);
	sVar1 = func_1297(iParam0);
	if (!is_thread_active(Global_1394141->f_1336, false))
	{
		Global_1394141->f_1279[Global_1394141->f_1337]->f_3 = 1;
		if (fVar0 < 55f)
		{
			if (is_entity_dead(Global_1394141->f_7[iParam0]->f_6) && !Global_1394141->f_1340)
			{
				return;
			}
			bVar2 = Global_1394141->f_1279[Global_1394141->f_1337]->f_2;
			if (!bVar2)
			{
				return;
			}
			request_script(sVar1);
			if (has_script_loaded(sVar1))
			{
				func_127(&(Global_1394141->f_1326), 4096);
				vVar3.f_1 = iParam0;
				vVar3.f_2 = Global_1394141->f_7[iParam0]->f_12;
				Global_1394141->f_1336 = start_new_script_with_args(sVar1, &vVar3, 10, 2051);
				Global_1394141->f_1328 = 1;
				Global_1394141->f_1329 = 0;
				Global_1394141->f_1279[Global_1394141->f_1337]->f_2 = 0;
				Global_40.f_9028.f_6[Global_1394141->f_7[iParam0]->f_30] = func_630();
				func_1298(iParam0, 4);
				set_script_as_no_longer_needed(sVar1);
			}
		}
	}
}

void func_367(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return;
	}
	if (!func_1296(iParam0, 4))
	{
		return;
	}
	if (does_entity_exist(Global_1394141->f_7[iParam0]->f_6) && !is_entity_dead(Global_1394141->f_7[iParam0]->f_6))
	{
		Global_1394141->f_1279[Global_1394141->f_1337]->f_2 = 0;
		Global_1394141->f_1279[Global_1394141->f_1337]->f_3 = 0;
		Global_1394141->f_1279[Global_1394141->f_1337]->f_4 = 0;
		func_1299(iParam0, 4);
	}
}

void func_368(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return;
	}
	Global_1394141->f_7[iParam0] = 0;
}

void func_369()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!func_1300(iVar0))
		{
		}
		else
		{
			(*Global_1360165)[iVar0]->f_1155 = 0;
		}
		iVar0++;
	}
}

void func_370()
{
	if (!_0x3cf96e16265b7dc8("COMP"))
	{
		_text_database_request("COMP");
	}
	if (!_0x3cf96e16265b7dc8("CMPI"))
	{
		_text_database_request("CMPI");
	}
}

void func_371()
{
	iVar0 = Global_1359489->f_10 + 1;
	if (iVar0 <= 26)
	{
		Global_1359489->f_10 = iVar0;
	}
	else
	{
		Global_1359489->f_10 = 0;
	}
}

bool func_372(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1301(iParam0))
		{
			return false;
		}
	}
	func_1302(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

bool func_373(int iParam0, bool bParam1)
{
	iVar0 = func_1303(iParam0);
	if (bParam1)
	{
		if (!func_1304(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_1305(), 1);
}

void func_374(int iParam0)
{
	if (!func_1300(iParam0))
	{
		return;
	}
	if (!func_373(iParam0, 0))
	{
	}
	func_1306(iParam0);
	Global_1359489->f_15 = func_1307(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_1308();
	func_375(iParam0, 32, 1);
	if (func_1304(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_178();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

void func_375(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1301(iParam0))
		{
			return;
		}
	}
	func_1302(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_376()
{
	if (func_272(0, 1, 0))
	{
		return;
	}
	if (&Global_1879534)
	{
		return;
	}
	iVar1 = Global_1359489->f_10;
	if (Global_40.f_4942[iVar1]->f_59 != 0)
	{
		iVar0 = func_1309(Global_40.f_4942[iVar1]->f_59);
		bVar2 = false;
		switch (iVar0)
		{
			case 8:
				if (!func_1310(func_1126(Global_40.f_4942[iVar1]->f_59), 0) || func_637((*Global_1347702)[func_1126(Global_40.f_4942[iVar1]->f_59)]->f_13, 16384))
				{
					bVar2 = true;
				}
				break;
			case 1:
				iVar3 = func_1311(Global_40.f_4942[iVar1]->f_59);
				if (!func_1234(iVar3) && !func_1312(iVar3))
				{
					bVar2 = true;
				}
				break;
			default:
				if (!func_133(Global_40.f_4942[iVar1]->f_59))
				{
					bVar2 = true;
				}
				break;
		}
		if (bVar2)
		{
			Global_40.f_4942[iVar1]->f_59 = 0;
			func_1313(iVar1, 512, 1);
		}
	}
	(*Global_1360165)[iVar1]->f_22 = func_1314(iVar1);
}

void func_377()
{
	if (func_1300(Global_1359489->f_9))
	{
		if ((*Global_1360165)[Global_1359489->f_9]->f_4 != Global_1359489->f_9)
		{
			Global_1359489->f_9 = -1;
			return;
		}
		if (!has_script_with_name_hash_loaded(89040947))
		{
			request_script_with_name_hash(89040947);
			return;
		}
		if (!is_thread_active((*Global_1360165)[Global_1359489->f_9]->f_128, false))
		{
			(*Global_1360165)[Global_1359489->f_9]->f_128 = start_new_script_with_name_hash_and_args(89040947, &((*Global_1360165)[Global_1359489->f_9]->f_4), 7, 513);
			if (func_372(Global_1359489->f_9, 1, 1))
			{
				func_375(Global_1359489->f_9, 1, 1);
			}
			if (func_372(Global_1359489->f_9, 2, 1))
			{
				func_375(Global_1359489->f_9, 2, 1);
			}
		}
		Global_1359489->f_9 = -1;
	}
	else
	{
		if (Global_1359489->f_10 == 24 || Global_1359489->f_10 == 25)
		{
			if (func_335() == 6)
			{
				if (func_1053((*Global_1835011)[56]->f_1, 1))
				{
					iVar0++;
				}
				if (func_1053((*Global_1835011)[52]->f_1, 1))
				{
					iVar0++;
				}
				if (func_1053((*Global_1835011)[49]->f_1, 1))
				{
					iVar0++;
				}
				if (func_1053((*Global_1347702)[65]->f_15, 1))
				{
					iVar0++;
				}
				if (iVar0 >= 3 && !func_1053((*Global_1835011)[57]->f_1, 1))
				{
					if (!func_320(func_1315(59)))
					{
						if (!func_1316(Global_1359489->f_10))
						{
							func_1317(Global_1359489->f_10);
							func_1318(Global_1359489->f_10);
							func_1319(1360004037, 1137976064, 1120952528, -1, 1, 1, 0);
						}
					}
				}
				else
				{
					func_1320(Global_1359489->f_10);
				}
			}
		}
		if (func_1321(Global_1359489->f_10))
		{
			if (((((!func_1322(Global_1359489->f_10) && !func_372(Global_1359489->f_10, 44, 1)) && !func_372(Global_1359489->f_10, 33, 1)) && !func_1323(Global_1359489->f_10)) && !func_373(Global_1359489->f_10, 0)) && !func_372(Global_1359489->f_10, 31, 1))
			{
				func_1324(Global_1359489->f_10, 0, 0, 0, 0);
			}
		}
		else if (func_404(func_403()) && (*Global_1360165)[Global_1359489->f_10]->f_3 <= 0)
		{
			if (func_1323(Global_1359489->f_10))
			{
				Global_1359489->f_9 = Global_1359489->f_10;
				(*Global_1360165)[Global_1359489->f_9]->f_4 = { func_1325(Global_1359489->f_9, 0, 0f, 0f, 0f, 0, 0, 1, 0, 1) };
				if (!has_script_with_name_hash_loaded(89040947))
				{
					request_script_with_name_hash(89040947);
				}
			}
		}
	}
}

void func_378()
{
	if (get_is_loading_screen_active())
	{
		return;
	}
	switch (func_335())
	{
		case 0:
		case 4:
		case 5:
			return;
	}
	iVar0 = Global_1359489->f_361;
	if (iVar0 < 9)
	{
		Global_1359489->f_361++;
	}
	else
	{
		Global_1359489->f_361 = 0;
	}
	if (func_1326(Global_40.f_6563[iVar0]))
	{
		return;
	}
	func_1327();
	if (!func_391(32768))
	{
		func_1328(iVar0);
		return;
	}
	func_1329();
	if (func_1330() != 1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (&Global_40.f_6563[iVar1] == -1)
		{
		}
		else
		{
			if (func_321(&(Global_1359489->f_361.f_61[iVar1])))
			{
				if (func_842(&(Global_1359489->f_361.f_61[iVar1]), 1))
				{
					Global_1359489->f_361.f_15[iVar1] = 1;
					Global_1359489->f_361.f_26[iVar1] = 0;
					Global_1359489->f_361.f_37[iVar1] = 0;
					Global_1359489->f_361.f_48[iVar1] = 0;
				}
			}
			switch (Global_40.f_6563[iVar1]->f_24)
			{
				case 5:
					if (!func_1331(iVar1))
					{
					}
					else
					{
						clear_ped_tasks(func_1303(Global_40.f_6563[iVar1]->f_3), 1, 0);
						if (!func_1332(iVar1))
						{
							func_1333(iVar1, 11);
						}
						if (Global_40.f_6563[iVar1]->f_24 != 7)
						{
						}
						else if (&Global_40.f_6563[iVar1] == 15)
						{
							Global_1359489->f_361.f_26[iVar1] = 0;
							Global_1359489->f_361.f_37[iVar1] = 0;
							Global_1359489->f_361.f_48[iVar1] = 0;
						}
						else if (&Global_40.f_6563[iVar1] == 5)
						{
						}
						else
						{
							func_1334(&(Global_1359489->f_361.f_299), 5, 10, 0);
							set_anim_scene_origin(&(Global_1359489->f_361.f_3[iVar1]), Global_1359489->f_361.f_299, 0f, 0f, Global_1359489->f_361.f_302, 2);
							clear_ped_tasks_immediately(func_1303(Global_40.f_6563[iVar1]->f_3), false, true);
							_hide_ped_weapons(func_1303(Global_40.f_6563[iVar1]->f_3), 2, true);
							start_anim_scene(&(Global_1359489->f_361.f_3[iVar1]));
							Global_1359489->f_361.f_59 = 1;
							func_1333(iVar1, 9);
							Jump @1375; //curOff = 637
							if (!func_1335(iVar1))
							{
							}
							else
							{
								Jump @1375; //curOff = 653
								if (!is_screen_faded_in())
								{
								}
								else
								{
									if (&Global_40.f_6563[iVar1] == 9)
									{
										if (!func_1336(9, &(Global_1359489->f_361.f_295)))
										{
										}
										else
										{
											Jump @746; //curOff = 705
											if (&Global_40.f_6563[iVar1] == 11)
											{
												if (!func_1336(11, &(Global_1359489->f_361.f_297)))
												{
												}
												else
												{
													if (!does_blip_exist(Global_1359489->f_361.f_72))
													{
														Global_1359489->f_361.f_72 = _blip_add_for_coord(422991367, func_1337(func_335()));
													}
													func_1333(iVar1, 16);
													Jump @1375; //curOff = 797
													switch (&Global_40.f_6563[iVar1])
													{
														case 9:
															if (func_1338(&(Global_1359489->f_361.f_295)))
															{
																func_1339(&(Global_1359489->f_361.f_295));
																func_1333(iVar1, 19);
															}
															break;
														case 11:
															if (func_1338(&(Global_1359489->f_361.f_297)))
															{
																func_1339(&(Global_1359489->f_361.f_297));
																func_1333(iVar1, 19);
															}
															break;
													}
													Jump @1375; //curOff = 912
													if (!func_1340(iVar1))
													{
													}
													else
													{
														Jump @1375; //curOff = 928
														if (_does_anim_scene_exist(&(Global_1359489->f_361.f_3[iVar1])))
														{
															if (_is_anim_scene_started(&(Global_1359489->f_361.f_3[iVar1]), false))
															{
																func_1333(iVar1, 10);
															}
														}
														else
														{
															func_1333(iVar1, 12);
														}
														if (_does_anim_scene_exist(&(Global_1359489->f_361.f_3[iVar1])))
														{
															if (!is_string_null_or_empty(&(Global_40.f_6563[iVar1]->f_12)) && _does_anim_scene_exist(&(Global_1359489->f_361.f_3[iVar1])))
															{
																if (has_anim_event_fired(Global_35, 138705504))
																{
																	if (!is_string_null_or_empty(&(Global_40.f_6563[iVar1]->f_6)))
																	{
																		if (func_1341(Global_40.f_6563[iVar1], Global_40.f_6563[iVar1]->f_6))
																		{
																		}
																	}
																	else
																	{
																		func_1333(iVar1, 12);
																		func_1342(&(Global_40.f_6563[iVar1]), 1);
																	}
																}
																if (has_anim_event_fired(Global_35, 275695226))
																{
																	if (Global_40.f_6563[iVar1]->f_3 == 14)
																	{
																		abort_anim_scene(&(Global_1359489->f_361.f_3[iVar1]), true);
																		func_1343(Global_1359489->f_361.f_3[iVar1]);
																		Global_1359489->f_361.f_59 = 0;
																		func_1333(iVar1, 11);
																	}
																	else
																	{
																		if (_0x005e6f28dd7ed58d(&(Global_1359489->f_361.f_3[iVar1]), "PLAYER"))
																		{
																			Global_1359489->f_361.f_59 = 0;
																		}
																		if (_0xf94692eb9dc15d74(&(Global_1359489->f_361.f_3[iVar1]), 0) || _is_anim_scene_finished(&(Global_1359489->f_361.f_3[iVar1]), false))
																		{
																			func_1343(Global_1359489->f_361.f_3[iVar1]);
																			Global_1359489->f_361.f_59 = 0;
																			func_1333(iVar1, 11);
																		}
																		Jump @1361; //curOff = 1350
																		func_1333(iVar1, 11);
																		Jump @1372; //curOff = 1361
																		func_1333(iVar1, 11);
																	}
																	iVar1++;
																	if (&Global_40.f_6563[iVar0] == -1)
																	{
																		return;
																	}
																	func_1344(Global_40.f_6563[iVar0], Global_1359489->f_361.f_61[iVar0], &(Global_1359489->f_361.f_26[iVar0]), &(Global_1359489->f_361.f_37[iVar0]), &(Global_1359489->f_361.f_48[iVar0]));
																	switch (Global_40.f_6563[iVar0]->f_24)
																	{
																		case 1:
																			if (!func_1345(Global_1359489->f_361.f_14))
																			{
																				return;
																			}
																			if (!func_1346("CMPI"))
																			{
																				return;
																			}
																			if ((Global_1359489->f_361.f_194 == 0 || _0x59fa676177dbe4c9(Global_1359489->f_361.f_194) == 5) || _0x59fa676177dbe4c9(Global_1359489->f_361.f_194) == 6)
																			{
																				_uilog_set_pending_details_id(1, func_1347(&(Global_40.f_6563[iVar0])));
																				Global_1359489->f_361.f_194 = func_90("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, get_hash_key(func_1348(Global_40.f_6563[iVar0]->f_3)), 1433015236, "INPUT_FEED_INTERACT_GENERIC", -1507719118, 5000, 0, 0, 0, 0, 1, 1);
																				func_1333(iVar0, 2);
																			}
																			break;
																		case 2:
																			if (!func_1345(Global_1359489->f_361.f_14))
																			{
																				return;
																			}
																			if (!func_1346("CMPI"))
																			{
																				return;
																			}
																			if (func_1349(Global_40.f_6563[iVar0]))
																			{
																				func_1350(Global_40.f_6563[iVar0], 1);
																				Global_1359489->f_361.f_26[iVar0] = 1;
																				Global_1359489->f_361.f_37[iVar0] = 1;
																				Global_1359489->f_361.f_48[iVar0] = 1;
																				if (!is_string_null_or_empty(&(Global_40.f_6563[iVar0]->f_12)))
																				{
																					func_1333(iVar0, 4);
																				}
																				else
																				{
																					func_1333(iVar0, 3);
																				}
																			}
																			break;
																		case 4:
																			sVar2 = func_1351(&(Global_40.f_6563[iVar0]));
																			if (!is_string_null_or_empty(sVar2))
																			{
																				if (!_text_database_has_loaded(sVar2))
																				{
																					_text_database_request(sVar2);
																					return;
																				}
																			}
																			else
																			{
																				func_1333(iVar0, 3);
																				return;
																			}
																			if (!_does_anim_scene_exist(&(Global_1359489->f_361.f_3[iVar0])))
																			{
																				Global_1359489->f_361.f_3[iVar0] = _create_anim_scene(&(Global_40.f_6563[iVar0]->f_12), 64, 0, false, true);
																			}
																			if (!_is_anim_scene_loading(&(Global_1359489->f_361.f_3[iVar0]), true) && !_is_anim_scene_loaded(&(Global_1359489->f_361.f_3[iVar0]), true, false))
																			{
																				load_anim_scene(&(Global_1359489->f_361.f_3[iVar0]));
																			}
																			if (_is_anim_scene_loaded(&(Global_1359489->f_361.f_3[iVar0]), true, false))
																			{
																				set_anim_scene_entity(&(Global_1359489->f_361.f_3[iVar0]), "PLAYER", Global_35, 0);
																				set_anim_scene_entity(&(Global_1359489->f_361.f_3[iVar0]), "companion", func_1303(Global_40.f_6563[iVar0]->f_3), 0);
																				func_1333(iVar0, 3);
																			}
																			break;
																		case 3:
																			if (!func_1352(iVar0))
																			{
																				return;
																			}
																			break;
																		case 8:
																			func_1353(iVar0);
																			break;
																		case 11:
																			if (!func_1354(iVar0))
																			{
																				return;
																			}
																			break;
																		case 13:
																			if (!func_1355(iVar0))
																			{
																				return;
																			}
																			break;
																		case 14:
																			if (!func_1356(iVar0))
																			{
																				return;
																			}
																			break;
																		case 18:
																			switch (Global_40.f_6563[iVar0]->f_5)
																			{
																				case 3:
																					if (func_1357(Global_40.f_6563[iVar0]->f_20) || !func_1358(Global_40.f_6563[iVar0]->f_20))
																					{
																						func_1359(iVar0);
																						func_1333(iVar0, 19);
																					}
																					break;
																			}
																			break;
																		case 19:
																			func_1360(iVar0);
																			break;
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

void func_379()
{
	if (func_1361(2, 1))
	{
		if (Global_1357549->f_1497.f_5 > 0 && Global_1357549->f_1497 != -1)
		{
			func_1362(12);
		}
		else
		{
			return;
		}
	}
	iVar0 = func_335();
	if (!func_1363(iVar0))
	{
		func_1364(0, 2);
		return;
	}
	if (!func_1304(player_ped_id(), 0))
	{
		func_1364(0, 2);
		return;
	}
	if (func_1365())
	{
		return;
	}
	fVar1 = get_distance_between_coords(Global_36, func_390(iVar0), true);
	bVar2 = func_1366(fVar1);
	Global_1357549->f_1497.f_3 = 0;
	Global_1357549->f_1497.f_4 = 0;
	Global_1357549->f_1497.f_2 = 0;
	if (iVar0 == 0)
	{
		bVar7 = func_391(32768);
	}
	else
	{
		bVar7 = func_391(1073741824);
	}
	if (Global_1357549->f_1497.f_5 > 0)
	{
		if (Global_1357549->f_1497 != -1)
		{
			Global_1357549->f_1497.f_3 = func_1303(Global_1357549->f_1497);
			Global_1357549->f_1497.f_2 = func_1304(Global_1357549->f_1497.f_3, 0);
			Global_1357549->f_1497.f_4 = func_1367(Global_1357549->f_1497, 1);
			if (Global_1357549->f_1497.f_2)
			{
				bVar3 = (is_screen_faded_in() && func_1368(Global_1357549->f_1497.f_3, 1116471296, -1082130432, -1082130432, -1082130432));
				if (bVar3 && !func_1361(16, 1))
				{
					func_1369(16, 1);
				}
				bVar6 = func_1370(Global_1357549->f_1497);
				if ((Global_1357549->f_1497.f_5 >= 4 && Global_1357549->f_1497.f_5 < 11) && is_screen_faded_in())
				{
					set_ped_reset_flag(Global_1357549->f_1497.f_3, 5, true);
					set_ped_reset_flag(Global_1357549->f_1497.f_3, 300, true);
					bVar4 = func_1371();
					bVar5 = func_1372();
				}
				if (fVar1 > 200f)
				{
					if (func_1361(4, 1))
					{
						func_1369(4, 0);
					}
					if (func_1361(8, 1))
					{
						func_1369(8, 0);
					}
					if (func_1361(256, 1))
					{
						func_1369(256, 0);
					}
					if (func_1361(32, 1))
					{
						func_1369(32, 0);
					}
					if (func_1361(16, 1))
					{
						func_1369(16, 0);
					}
				}
			}
		}
		if (bVar4)
		{
			if (Global_1357549->f_1497.f_5 != 10)
			{
				func_399(&(Global_1357549->f_1497.f_24));
				func_1362(10);
			}
		}
		if (bVar5)
		{
			if ((Global_1357549->f_1497.f_5 != 9 && Global_1357549->f_1497.f_5 != 10) && Global_1357549->f_1497.f_7 != 0)
			{
				func_1362(9);
			}
		}
		if (func_401(&(Global_1357549->f_1497.f_27)))
		{
			if (func_1373(&(Global_1357549->f_1497.f_27)) >= 60f)
			{
				func_399(&(Global_1357549->f_1497.f_27));
				if (Global_1357549->f_1497.f_5 == 9)
				{
					func_1362(7);
				}
			}
			else
			{
				set_ped_reset_flag(Global_1357549->f_1497.f_3, 185, true);
			}
		}
		if (func_1304(player_ped_id(), 0))
		{
			if (bVar7)
			{
				if (!func_1361(256, 1))
				{
					func_1369(256, 1);
				}
			}
		}
		if (Global_1357549->f_1497.f_5 >= 4 && Global_1357549->f_1497.f_5 < 11)
		{
			if (Global_1357549->f_1497 != -1)
			{
				bVar8 = false;
				if (Global_1357549->f_1497.f_5 > 6)
				{
					if (fVar1 > 200f)
					{
						bVar8 = true;
					}
					if (!has_collision_loaded_around_entity(Global_1357549->f_1497.f_3))
					{
						bVar8 = true;
					}
				}
				if (bVar8)
				{
					func_1369(4, 0);
					func_1362(4);
				}
				iVar9 = func_1374();
				if (Global_1357549->f_1497.f_17 != iVar9)
				{
					iVar10 = func_1375(Global_1357549->f_1497);
					if (iVar10 == Global_1357549->f_1497)
					{
						Global_1357549->f_1497.f_17 = iVar9;
					}
					if (!func_1361(16, 1))
					{
						Global_1357549->f_1497.f_17 = iVar9;
					}
				}
				if (((!bVar6 || !bVar2) || Global_1357549->f_1497.f_17 != func_1374()) || func_1361(1, 1))
				{
					if (((Global_1357549->f_1497.f_5 <= 4 || !func_1361(16, 1)) || !bVar6) || !bVar2)
					{
						func_1369(128, 1);
					}
					if (func_1361(1, 1))
					{
						func_1369(1, 0);
					}
					if (Global_1357549->f_1497.f_5 < 11)
					{
						func_1362(11);
					}
				}
				else
				{
					func_1364(0, 3);
				}
				if (!Global_1357549->f_1497.f_2)
				{
					func_1369(128, 1);
					if (Global_1357549->f_1497.f_5 < 11)
					{
						func_1362(11);
					}
					return;
				}
			}
			else
			{
				func_1362(0);
			}
		}
	}
	switch (Global_1357549->f_1497.f_5)
	{
		case 0:
			if (!func_1376(0))
			{
				if (func_401(&(Global_1357549->f_1497.f_18)) && func_1377(&(Global_1357549->f_1497.f_18)) < 5000)
				{
					if (!func_401(&(Global_1357549->f_1497.f_18)))
					{
						func_397(&(Global_1357549->f_1497.f_18), 0);
					}
					return;
				}
			}
			if (!bVar2)
			{
				func_517(&(Global_1357549->f_1497.f_18));
				func_1364(0, 1);
				return;
			}
			if (fVar1 > 300f)
			{
				func_517(&(Global_1357549->f_1497.f_18));
				func_1364(0, 1);
				return;
			}
			Global_1357549->f_1497.f_17 = func_1374();
			func_1369(1, 0);
			func_1369(16, 0);
			func_1369(32, 0);
			func_1369(128, 0);
			func_1378();
			if (Global_1357549->f_1497.f_7 != 0)
			{
				func_1379(0);
			}
			func_399(&(Global_1357549->f_1497.f_18));
			func_1362(1);
			break;
		case 1:
			if (Global_1357549->f_1497 != -1)
			{
				func_1362(2);
				return;
			}
			Global_1357549->f_1497 = func_1375(Global_1357549->f_1497.f_1);
			if (Global_1357549->f_1497 != -1)
			{
				func_1364(0, 1);
				(*Global_1360165)[Global_1357549->f_1497]->f_62 = -289447566;
				func_1362(2);
				return;
			}
			func_1364(0, 2);
			func_1362(0);
			break;
		case 2:
			if (Global_1357549->f_1497 == -1)
			{
				func_1362(1);
				return;
			}
			if (Global_1357549->f_1497.f_111 > 120)
			{
				func_1362(1);
				return;
			}
			if (!Global_1357549->f_1497.f_2)
			{
				if (func_1380())
				{
					if (!func_1381(Global_1357549->f_1497, 0f, 0f, 0f, 0, 1, 0, 1, 0, -1, 1, 0))
					{
						Global_1357549->f_1497.f_111++;
						return;
					}
				}
				else
				{
					Global_1357549->f_1497.f_111++;
					return;
				}
			}
			Global_1357549->f_1497.f_2 = func_1304(Global_1357549->f_1497.f_3, 0);
			if (Global_1357549->f_1497.f_2)
			{
				func_1362(3);
			}
			break;
		case 3:
			iVar11 = 0;
			while (iVar11 < 27)
			{
				if (iVar11 != Global_1357549->f_1497 && func_1382(iVar11, 1))
				{
					func_1383(iVar11, 1);
				}
				iVar11++;
			}
			if (!func_1382(Global_1357549->f_1497, 1))
			{
				if (func_1384(Global_1357549->f_1497, 1, 0, -1))
				{
				}
			}
			func_1385(Global_1357549->f_1497, 0, 1, 1);
			_set_entity_health(Global_1357549->f_1497.f_3, 12000, 0);
			func_1386(Global_1357549->f_1497, -289447566);
			Global_1357549->f_1497.f_30 = func_1387(Global_1357549->f_1497);
			(*Global_1360165)[Global_1357549->f_1497]->f_62 = -289447566;
			if (!bVar3)
			{
				iVar12 = func_1388(Global_1357549->f_1497);
				if (iVar12 != 0)
				{
					if (Global_1357549->f_1497.f_111 < 60)
					{
						if (_0xa0bc8faed8cfeb3c(Global_1357549->f_1497.f_3))
						{
							func_1389(Global_1357549->f_1497, Global_1357549->f_1497.f_3, iVar12, 1);
						}
						else
						{
							Global_1357549->f_1497.f_111++;
							return;
						}
					}
				}
			}
			func_1390(iVar0);
			func_1391(0);
			if (does_entity_exist(Global_1357549->f_1497.f_3))
			{
				_0x85f500f4e24ca43e(Global_1357549->f_1497.f_3, 0f);
				_set_entity_something(Global_1357549->f_1497.f_3, true);
				set_ped_config_flag(Global_1357549->f_1497.f_3, 48, true);
			}
			func_1362(4);
			break;
		case 4:
			if (iVar0 == 0)
			{
				func_1392(1);
				bVar13 = true;
			}
			if (fVar1 > 200f)
			{
				bVar14 = true;
			}
			if (bVar7)
			{
				func_1362(7);
				return;
			}
			if (func_1361(4, 1))
			{
				if (!bVar14)
				{
					func_1362(7);
				}
				return;
			}
			if (!func_1393())
			{
				if (!bVar14)
				{
					func_1362(7);
				}
				return;
			}
			if (Global_1357549->f_1497.f_110 == 0)
			{
				if (!bVar14)
				{
					func_1362(7);
				}
				return;
			}
			if (!_does_scenario_point_exist(Global_1357549->f_1497.f_109))
			{
				if (!bVar14)
				{
					func_1362(7);
				}
				return;
			}
			if (is_scenario_occupied(_get_scenario_point_coords(Global_1357549->f_1497.f_109, true), 2f, false))
			{
				if (!bVar14)
				{
					func_1362(7);
				}
				return;
			}
			bVar15 = false;
			if (is_screen_faded_in())
			{
				bVar15 = bVar3;
				iVar16 = func_1394(Global_1357549->f_1497);
				bVar17 = true;
				if (is_model_valid(iVar16))
				{
					bVar17 = would_entity_be_occluded(iVar16, _get_scenario_point_coords(Global_1357549->f_1497.f_109, true), true);
				}
				if (!bVar15 && !bVar17)
				{
					bVar15 = true;
				}
			}
			if (!bVar13)
			{
				func_1392(1);
			}
			_task_use_scenario_point(Global_1357549->f_1497.f_3, Global_1357549->f_1497.f_109, 0, -1, bVar15, !bVar15, Global_1357549->f_1497.f_110, false, -1f, false);
			_set_entity_something(Global_1357549->f_1497.f_3, true);
			set_ped_config_flag(Global_1357549->f_1497.f_3, 48, true);
			func_1362(5);
			break;
		case 5:
			if (bVar7 && !func_1361(32, 1))
			{
				func_1362(7);
				return;
			}
			if (!bVar3 && func_1395())
			{
				func_1396();
				return;
			}
			func_1362(6);
			break;
		case 6:
			if ((bVar7 || fVar1 < (func_526(Global_1357549->f_1497.f_3, func_390(iVar0), 1) - 10f)) && !func_1361(32, 1))
			{
				func_1362(7);
				return;
			}
			if (Global_1357549->f_1497.f_110 == 0)
			{
				func_1362(7);
				return;
			}
			if (!_does_scenario_point_exist(Global_1357549->f_1497.f_109))
			{
				func_1362(7);
				return;
			}
			if ((!_0x9c54041bb66bcf9e(Global_1357549->f_1497.f_3, Global_1357549->f_1497.f_109) && !func_193(Global_1357549->f_1497.f_3, -76381094)) && !is_scenario_occupied(_get_scenario_point_coords(Global_1357549->f_1497.f_109, true), 2f, false))
			{
				bVar15 = false;
				if (is_screen_faded_in())
				{
					bVar15 = bVar3;
					iVar18 = func_1394(Global_1357549->f_1497);
					bVar19 = true;
					if (is_model_valid(iVar18))
					{
						bVar19 = would_entity_be_occluded(iVar18, _get_scenario_point_coords(Global_1357549->f_1497.f_109, true), true);
					}
					if (!bVar15 && !bVar19)
					{
						bVar15 = true;
					}
				}
				_task_use_scenario_point(Global_1357549->f_1497.f_3, Global_1357549->f_1497.f_109, 0, -1, bVar15, !bVar15, Global_1357549->f_1497.f_110, false, -1f, false);
			}
			if (func_1397())
			{
				func_1362(7);
			}
			break;
		case 7:
			if (Global_1357549->f_1497.f_111 > 60)
			{
				func_1362(11);
				return;
			}
			if (func_1398(Global_35, &uVar20))
			{
				Global_1357549->f_1497.f_31 = uVar20;
			}
			iVar21 = Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31]->f_4;
			if (!func_1399(iVar21))
			{
				Global_1357549->f_1497.f_111++;
				return;
			}
			func_399(&(Global_1357549->f_1497.f_21));
			func_1362(8);
			break;
		case 8:
			if (Global_1357549->f_1497.f_111 > 60)
			{
				func_1362(11);
				return;
			}
			if (!func_1400())
			{
				Global_1357549->f_1497.f_111++;
				func_1362(7);
				return;
			}
			if ((((is_ped_shooting(player_ped_id()) && Global_1357549->f_1497.f_7 == 0) && ((func_401(&(Global_1357549->f_1497.f_21)) && func_398(&(Global_1357549->f_1497.f_21)) > 30f) || !func_401(&(Global_1357549->f_1497.f_21)))) && !is_any_speech_playing(Global_1357549->f_1497.f_3)) && func_1401(player_ped_id(), Global_1357549->f_1497.f_3, 0) < (((Global_1357549->f_1497.f_30 * 1.5f) * Global_1357549->f_1497.f_30) * 1.5f))
			{
				func_517(&(Global_1357549->f_1497.f_21));
				func_1402(Global_1357549->f_1497.f_3, "SHOOTING_NEAR_CAMP", -1454469014, 0, 1, 0, 0, 1);
			}
			if (!func_1361(8, 1) && func_1361(256, 1))
			{
				vVar22 = { func_1403(func_335()) };
				if ((!bVar7 && !is_ped_heading_towards_position(Global_35, vVar22, 180f)) && func_1404(Global_1357549->f_1497) < (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30))
				{
					if (func_1402(Global_1357549->f_1497.f_3, "SCOUT_GOODBYE", -1454469014, player_ped_id(), 1, 0, 0, 1))
					{
					}
					func_1369(8, 1);
				}
			}
			break;
		case 9:
			if (!func_401(&(Global_1357549->f_1497.f_24)))
			{
				if (is_any_speech_playing(player_ped_id()))
				{
					return;
				}
				if (Global_1357549->f_1497.f_111 > 60)
				{
					func_1362(7);
					return;
				}
				if (!func_1405(1065353216))
				{
					Global_1357549->f_1497.f_111++;
					return;
				}
				func_397(&(Global_1357549->f_1497.f_24), 1);
				func_397(&(Global_1357549->f_1497.f_27), 1);
			}
			else
			{
				fVar26 = func_398(&(Global_1357549->f_1497.f_24));
				if (get_script_task_status(Global_1357549->f_1497.f_3, 713668775, true) == 7)
				{
					if (fVar26 >= 15f)
					{
						bVar25 = true;
					}
				}
				else if (func_1406(Global_1357549->f_1497.f_3, *Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31], 1.5f, 1, 1) || fVar26 >= 45f)
				{
					bVar25 = true;
				}
				if (bVar25)
				{
					func_399(&(Global_1357549->f_1497.f_24));
					func_1362(7);
				}
			}
			break;
		case 10:
			if (func_401(&(Global_1357549->f_1497.f_24)))
			{
				bVar27 = (bVar4 && func_1377(&(Global_1357549->f_1497.f_24)) > 5000);
			}
			if (bVar27)
			{
				func_397(&(Global_1357549->f_1497.f_24), 1);
			}
			if (!func_401(&(Global_1357549->f_1497.f_24)))
			{
				func_1385(Global_1357549->f_1497, 1, 1, 1);
				if (!is_ped_ragdoll(Global_1357549->f_1497.f_3))
				{
					clear_ped_tasks_immediately(Global_1357549->f_1497.f_3, false, true);
				}
				else
				{
					clear_ped_tasks(Global_1357549->f_1497.f_3, 1, 0);
				}
				if (Global_1357549->f_1497.f_111 > 60)
				{
					func_1385(Global_1357549->f_1497, 0, 1, 1);
					_set_entity_health(Global_1357549->f_1497.f_3, 12000, 0);
					func_1362(7);
					return;
				}
				if (!func_1405(3f))
				{
					Global_1357549->f_1497.f_111++;
					return;
				}
				Global_1357549->f_1497.f_111 = 0;
				func_397(&(Global_1357549->f_1497.f_24), 1);
			}
			else
			{
				fVar29 = func_398(&(Global_1357549->f_1497.f_24));
				if (get_script_task_status(Global_1357549->f_1497.f_3, 713668775, true) == 7)
				{
					if (fVar29 >= 15f)
					{
						bVar28 = true;
					}
					else
					{
						set_ped_min_move_blend_ratio(Global_1357549->f_1497.f_3, 3f);
					}
				}
				else if (func_1406(Global_1357549->f_1497.f_3, *Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31], 1.5f, 1, 1) || fVar29 >= 45f)
				{
					bVar28 = true;
				}
				if (bVar28)
				{
					func_399(&(Global_1357549->f_1497.f_24));
					func_1385(Global_1357549->f_1497, 0, 1, 1);
					_set_entity_health(Global_1357549->f_1497.f_3, 12000, 0);
					func_1362(7);
				}
			}
			break;
		case 11:
			if (func_1322(Global_1357549->f_1497))
			{
				func_1407(1, 0);
				func_1362(12);
				return;
			}
			if (!_0x800df3fc913355f3(Global_1357549->f_1497.f_4))
			{
				func_1407(1, 0);
				func_1362(12);
				return;
			}
			if (func_1361(128, 1) || iVar0 == 0)
			{
				func_1407(1, 0);
				func_1362(12);
				return;
			}
			StringCopy(&cVar30, func_1408(0, 1), 64);
			if (is_string_null_or_empty(&cVar30))
			{
				func_1407(1, 1);
				func_1362(12);
				return;
			}
			if (Global_1357549->f_1497.f_111 > 60)
			{
				func_1407(1, 0);
				func_1362(12);
				return;
			}
			if ((func_1409(Global_1357549->f_1497, cVar30, 2) && _0xa8120ebeaf290c7a(Global_1357549->f_1497.f_4)) && are_strings_equal(&cVar30, _0xceb40b678e403759(func_1410(Global_1357549->f_1497))))
			{
				_0x631cd2d77fdc0316(Global_1357549->f_1497.f_4);
				Global_1357549->f_1497.f_111 = 0;
				func_1362(12);
				return;
			}
			else
			{
				Global_1357549->f_1497.f_111++;
			}
			break;
		case 12:
			if (Global_1357549->f_1497.f_111 < 60 && !func_1411(Global_1357549->f_1497, 0, 0, 0))
			{
				Global_1357549->f_1497.f_111++;
				return;
			}
			if (!func_1361(128, 1))
			{
				func_1412(Global_1357549->f_1497, 27, 1);
			}
			Global_1357549->f_1497.f_1 = Global_1357549->f_1497;
			func_1369(1, 0);
			func_1369(16, 0);
			func_1369(32, 0);
			func_1369(128, 0);
			func_1378();
			func_1362(0);
			break;
	}
}

void func_380()
{
	if (Global_1359489->f_10 == 0)
	{
		func_1413();
	}
	func_1414(Global_1359489->f_10);
	if (func_401(&(Global_1359489->f_40)) && func_398(&(Global_1359489->f_40)) > 120f)
	{
		func_399(&(Global_1359489->f_40));
	}
	if (func_401(&(Global_1359489->f_43)) && func_398(&(Global_1359489->f_43)) > 10f)
	{
		func_399(&(Global_1359489->f_43));
	}
}

bool func_381()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (&Global_1357549->f_1252[iVar0] != 0)
		{
			func_1415(Global_1357549->f_1252[iVar0]->f_1, &(Global_1357549->f_1252[iVar0]));
			Global_1357549->f_1404 = 1;
			Global_1357549->f_1252[iVar0] = 0;
			Global_1357549->f_1252[iVar0]->f_1 = 0;
			Global_1357549->f_1252[iVar0]->f_2 = 0;
			Global_1357549->f_1405++;
			if (Global_1357549->f_1483 > 0)
			{
				func_1416(iVar0);
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_382()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (&Global_1357549->f_1252[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_383(int iParam0)
{
	switch (func_82())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

void func_384(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (bParam0)
		{
			func_1417(Global_40.f_4283.f_6[iVar0], 1, 0);
		}
		else
		{
			switch (Global_40.f_4283.f_6[iVar0]->f_2)
			{
				case 1017034651:
					if ((bParam3 || bParam1) || bParam2)
					{
						func_1417(Global_40.f_4283.f_6[iVar0], 1, 0);
					}
					break;
				case 1137976064:
					if (bParam1)
					{
						func_1417(Global_40.f_4283.f_6[iVar0], 1, 0);
					}
					break;
				case -2060316038:
					break;
				case 195285667:
					if (bParam1 || bParam4)
					{
						func_1417(Global_40.f_4283.f_6[iVar0], 1, 0);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_385(int iParam0)
{
	switch (func_82())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

void func_386(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1418(&Global_0, 8);
	}
	if (!func_709() || func_82() != -1)
	{
		return;
	}
	func_1418(&Global_0, 1);
}

void func_387(int iParam0)
{
	Global_1359453 = iParam0;
}

int func_388(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_2 = 29309381;
	Var0.f_3 = func_1419(iParam0);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

bool func_389()
{
	if (&Global_1879534)
	{
		return false;
	}
	if (Global_1357549->f_1884 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 17)
		{
			Global_1357549->f_1866[iVar0] = &Global_1357549->f_1848[iVar0];
			Global_1357549->f_1848[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = Global_1357549->f_1884;
	if (&Global_40.f_4283.f_6[iVar0] != 176656832)
	{
		if (Global_40.f_4283.f_6[iVar0]->f_1 != -15 && func_550(Global_40.f_4283.f_6[iVar0]->f_1))
		{
			func_1417(Global_40.f_4283.f_6[iVar0], 1, 0);
		}
		else
		{
			func_1420(&(Global_40.f_4283.f_6[iVar0]), 1);
			func_1421(&(Global_40.f_4283.f_6[iVar0]));
		}
	}
	if (Global_1357549->f_1884 >= 59)
	{
		Global_1357549->f_1884 = 0;
	}
	else
	{
		Global_1357549->f_1884++;
		return false;
	}
	return true;
}

Vector3 func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1422();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_391(int iParam0)
{
	switch (func_82())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

void func_392(int iParam0)
{
	switch (func_82())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

int func_393(var uParam0)
{
	iVar0 = 60;
	iVar1[0] = 57;
	iVar1[1] = 23;
	iVar1[2] = 10;
	iVar1[3] = 4;
	iVar1[4] = 1;
	iVar7 = 0;
	while (iVar7 < 5)
	{
		iVar8 = &iVar1[iVar7];
		while (iVar8 < iVar0)
		{
			Var9 = { *(*uParam0)[iVar8] };
			iVar14 = iVar8;
			while (iVar14 > 0 && (*uParam0)[iVar14]->f_3 > ((*uParam0)[(iVar14 - 1)])->f_3)
			{
				*(*uParam0)[iVar14] = { *((*uParam0)[(iVar14 - 1)]) };
				iVar14 = (iVar14 - 1);
				*(*uParam0)[iVar14] = { Var9 };
			}
			iVar8++;
		}
		iVar7++;
	}
	return 1;
}

void func_394()
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] != 176656832)
		{
			switch (&Global_40.f_4283.f_6[iVar0])
			{
				case -558867971:
					Global_1359453->f_4[0] = 0;
					Global_1359453->f_4[1] = -1;
					Global_1359453->f_4[2] = -1;
					Global_1359453->f_4[3] = -1;
					Global_1359453->f_4[4] = -1;
					Global_1359453->f_4[5] = -1;
					Global_1359453->f_4[6] = -1;
					Global_1359453->f_4[7] = -1;
					Global_1359453->f_4[8] = -1;
					Global_1359453->f_4[9] = -1;
					return;
				case 180573150:
					Global_1359453->f_4[0] = -1;
					Global_1359453->f_4[1] = -1;
					Global_1359453->f_4[2] = -1;
					Global_1359453->f_4[3] = -1;
					Global_1359453->f_4[4] = -1;
					Global_1359453->f_4[5] = -1;
					Global_1359453->f_4[6] = -1;
					Global_1359453->f_4[7] = -1;
					Global_1359453->f_4[8] = -1;
					Global_1359453->f_4[9] = -1;
					return;
			}
		}
		iVar0++;
	}
	Global_1359453->f_4[0] = 0;
	Global_1359453->f_4[1] = 2;
	Global_1359453->f_4[2] = 1;
	Global_1359453->f_4[3] = 2;
	Global_1359453->f_4[4] = 2;
	Global_1359453->f_4[5] = 2;
	Global_1359453->f_4[6] = 2;
	Global_1359453->f_4[7] = 1;
	Global_1359453->f_4[8] = -1;
	Global_1359453->f_4[9] = -1;
}

int func_395(int iParam0)
{
	vVar0.x = Global_1357549->f_576;
	vVar0.f_1 = Global_1357549->f_578;
	switch (iParam0)
	{
		case 0:
			iVar5 = -1671282280;
			break;
		case 1:
			iVar5 = 1770089518;
			break;
		case 2:
			iVar5 = 730646859;
			break;
		case 3:
			iVar5 = -1811142696;
			break;
		case 4:
			iVar5 = 131366045;
			break;
		case 5:
			iVar5 = -1717836031;
			break;
		case 6:
			iVar5 = -23319581;
			break;
	}
	vVar0.f_2 = iVar5;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		return vVar0.y;
	}
	return 0;
}

bool func_396()
{
	if (func_1423(Global_1359453->f_28, &(Global_1359453->f_29), 6))
	{
		iVar0 = Global_1359453->f_28 + 1;
		if (iVar0 <= 26)
		{
			Global_1359453->f_28 = iVar0;
			Global_1359453->f_29 = 0;
		}
		else
		{
			Global_1359453->f_28 = 0;
			Global_1359453->f_29 = 0;
			return true;
		}
	}
	return false;
}

void func_397(var uParam0, bool bParam1)
{
	if (bParam1 || !func_401(uParam0))
	{
		func_517(uParam0);
	}
}

float func_398(var uParam0)
{
	if (!func_401(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1424(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1425() - uParam0->f_1);
}

void func_399(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_400()
{
	return &Global_1935436 == 2;
}

bool func_401(var uParam0)
{
	return func_1426(*uParam0, 1);
}

void func_402()
{
	Global_1359453->f_3++;
	if (Global_1359453->f_3 < 10 && &Global_1359453->f_4[Global_1359453->f_3] != -1)
	{
	}
	Global_1359453->f_15 = 0;
	func_399(&(Global_1359453->f_33));
}

int func_403()
{
	return Global_40.f_4283.f_1;
}

bool func_404(int iParam0)
{
	if (!func_282(iParam0))
	{
		return false;
	}
	return func_798(iParam0, 8);
}

int func_405()
{
	return Global_1327590->f_3;
}

bool func_406()
{
	switch (func_1427())
	{
		case 0:
			func_1428(5);
			func_1429(4);
			return false;
		case 4:
			if (!func_1430())
			{
				return false;
			}
			func_1429(0);
			return true;
		default:
			break;
	}
	return false;
}

void func_407()
{
	Global_1327590->f_19621 = func_335();
	Global_1327590->f_19682 = -1;
	switch (Global_1327590->f_19621)
	{
		case 1:
			func_1319(-266920872, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 2:
			func_1319(-715535005, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 3:
			func_1319(289706151, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
		case 6:
			func_1319(1156064998, 1017034651, 1120952528, -1, 1, 1, 0);
			break;
	}
}

void func_408(int iParam0)
{
	Global_1327590->f_3 = iParam0;
}

bool func_409()
{
	switch (func_1427())
	{
		case 0:
			func_1431();
			func_1429(1);
			return false;
		case 1:
			if (!func_417())
			{
				return false;
			}
			func_1429(2);
			return false;
		case 2:
			if (!func_1432())
			{
				func_1429(0);
				return true;
			}
			func_1429(3);
			return false;
		case 3:
			if (!func_1433())
			{
				return false;
			}
			func_1434();
			func_1429(4);
			return false;
		case 4:
			if (!func_1435())
			{
				return false;
			}
			func_1429(0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_410()
{
	return Global_1327590->f_9 != -1;
}

int func_411()
{
	return Global_1327590->f_1;
}

void func_412()
{
	if (func_1436())
	{
		return;
	}
	if (!has_script_loaded(&(Global_1327590->f_10.f_1)))
	{
		request_script(&(Global_1327590->f_10.f_1));
		return;
	}
	Global_1327590->f_10.f_12 = 0;
	Global_1327590->f_10.f_9 = start_new_script(&(Global_1327590->f_10.f_1), 6004);
	set_script_as_no_longer_needed(&(Global_1327590->f_10.f_1));
	Global_1327590->f_10 = Global_1327590->f_9;
	Global_1327590->f_9 = -1;
}

bool func_413()
{
	switch (func_1427())
	{
		case 0:
			func_1437();
			func_1429(5);
			return false;
		case 5:
			if (func_1438())
			{
				if (Global_1327590->f_19723 == 0)
				{
					Global_1327590->f_19725++;
					return false;
				}
				func_1429(6);
				return false;
			}
			else
			{
				func_1429(0);
				return true;
			}
			break;
		case 6:
			if (func_1439())
			{
				func_1428(15);
				func_1429(4);
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (func_1440())
			{
				Global_1327590->f_19725++;
				func_1429(5);
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

void func_414()
{
	Global_1327590->f_19682 = get_clock_hours();
	func_1428(25);
}

bool func_415()
{
	iVar2 = func_1441();
	iVar3 = func_1442();
	iVar0 = iVar2;
	while (iVar0 <= iVar3)
	{
		if (iVar0 >= Global_1327590->f_18199)
		{
			return true;
		}
		iVar1 = &Global_1327590->f_18199[iVar0];
		if (iVar1 == -1)
		{
			return true;
		}
		Global_1327590->f_11465[iVar1]->f_9 = func_1443(iVar1);
		iVar0++;
	}
	func_1444();
	return false;
}

bool func_416()
{
	if (Global_1327590->f_8)
	{
		func_1445();
		func_1446();
		func_1447();
		func_1448(0);
		Global_1327590->f_8 = 0;
	}
	switch (func_1449())
	{
		case 0:
			Global_1327590->f_19573 = func_1450();
			if (func_1451(Global_1327590->f_19573))
			{
				func_1448(6);
				return false;
			}
			if (!func_1376(2))
			{
				return true;
			}
			if (func_1452())
			{
				func_1448(1);
				return false;
			}
			func_1364(2, 3);
			return true;
		case 1:
			if (func_1453())
			{
				func_1428(5);
				func_1448(2);
			}
			break;
		case 2:
			if (func_1454(0, 1, 1))
			{
				func_1448(3);
			}
			break;
		case 3:
			if (func_1455())
			{
				func_1428(15);
				func_1448(4);
			}
			break;
		case 4:
			if (func_1456())
			{
				func_1448(5);
			}
			break;
		case 5:
			if (func_1457())
			{
				func_1448(7);
			}
			else
			{
				func_1364(func_1458(), 2);
				func_1448(0);
				return true;
			}
			break;
		case 6:
			if (!func_1459(Global_1327590->f_19573))
			{
				func_1448(0);
			}
			if (!func_1460(Global_1327590->f_19573))
			{
				func_1461(Global_1327590->f_19573);
			}
			if (func_1462(Global_1327590->f_19573))
			{
				func_1463(Global_1327590->f_19573);
				func_1448(0);
				return true;
			}
			if (func_1464(Global_1327590->f_19573))
			{
				func_1465(Global_1327590->f_19573);
				func_1463(Global_1327590->f_19573);
				func_1448(7);
			}
			break;
		case 7:
			if (func_1466())
			{
				func_1448(8);
			}
			else
			{
				func_1446();
				func_1364(func_1458(), 2);
				func_1448(0);
				return true;
			}
			break;
		case 8:
			if (func_1467())
			{
				func_1448(9);
			}
			break;
		case 9:
			if (func_1468())
			{
				func_1448(10);
			}
			else
			{
				func_1446();
				func_1364(func_1458(), 2);
				func_1448(0);
			}
			break;
		case 10:
			if (func_1470(func_1469()))
			{
				func_1446();
				func_1364(func_1458(), 1);
				func_1448(0);
				return true;
			}
			if (func_1471(func_1469()) >= 6 || func_1471(func_1469()) == 0)
			{
				func_1446();
				func_1364(func_1458(), 2);
				func_1448(0);
				return true;
			}
			break;
	}
	return false;
}

bool func_417()
{
	if (func_1433())
	{
		_datafile_unload(Global_1327590->f_19721);
	}
	if (!func_1433())
	{
		Global_1327590->f_19721 = 0;
		return true;
	}
	return false;
}

bool func_418(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return func_692(Global_1393237->f_11[iParam0]->f_10, iParam1);
}

void func_419(int iParam0)
{
	if (func_1472(Global_1393237->f_11[iParam0]->f_17))
	{
		if (_is_imap_active(Global_1393237->f_11[iParam0]->f_17))
		{
			if (!_0xcf45df50c7775f2a())
			{
				func_1473(iParam0, 8388608);
				_remove_imap(Global_1393237->f_11[iParam0]->f_17);
			}
		}
		else if (func_418(iParam0, 8388608))
		{
			func_1473(iParam0, 8388608);
		}
	}
	else if (func_418(iParam0, 8388608))
	{
		func_1473(iParam0, 8388608);
	}
}

void func_420(var uParam0)
{
	Var0 = 2;
	Var0.f_3 = 2;
	Var0.f_6 = 2;
	Var0.f_9 = 2;
	Var0.f_12 = 37;
	Var0.f_12.f_1 = -1;
	Var0.f_12.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_50 = 2;
	Var0.f_50.f_1 = -1;
	Var0.f_50.f_1.f_1 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = 3;
	Var0.f_59.f_6 = -1;
	Var0.f_66 = 7;
	Var0.f_76.f_1 = -1;
	Var0.f_76.f_2 = -1;
	Var0.f_76.f_9 = -1;
	Var0.f_86.f_3 = -1;
	Var0.f_90.f_1 = 1;
	Var0.f_90.f_1.f_2 = 1;
	Var0.f_90.f_1.f_4 = 2;
	Var0.f_90.f_1.f_9 = 2;
	*uParam0 = { Var0 };
}

void func_421()
{
	func_1475(0, func_1474(0));
}

void func_422()
{
	func_1475(1, func_1474(1));
}

void func_423()
{
	func_1475(2, func_1474(2));
}

void func_424()
{
	func_1475(3, func_1474(3));
}

void func_425()
{
	func_1475(4, func_1474(4));
}

void func_426()
{
	func_1475(5, func_1474(5));
}

void func_427()
{
	func_1475(6, func_1474(6));
}

void func_428()
{
	func_1475(7, func_1474(7));
}

void func_429()
{
	func_1475(8, func_1474(8));
}

void func_430()
{
	func_1475(9, func_1474(9));
}

void func_431()
{
	func_1475(10, func_1474(10));
}

void func_432()
{
	func_1475(11, func_1474(11));
}

void func_433()
{
	func_1475(12, func_1474(12));
}

void func_434()
{
	func_1475(13, func_1474(13));
}

void func_435()
{
	func_1475(14, func_1474(14));
}

void func_436()
{
	func_1475(15, func_1474(15));
}

void func_437()
{
	func_1475(16, func_1474(16));
}

void func_438()
{
	func_1475(17, func_1474(17));
}

void func_439()
{
	func_1475(18, func_1474(18));
}

void func_440()
{
	func_1475(19, func_1474(19));
}

void func_441()
{
	func_1475(20, func_1474(20));
}

void func_442()
{
	func_1475(21, func_1474(21));
}

void func_443()
{
	func_1475(22, func_1474(22));
}

void func_444()
{
	func_1475(23, func_1474(23));
}

void func_445()
{
	func_1475(24, func_1474(24));
}

void func_446()
{
	func_1475(25, func_1474(25));
}

void func_447(int iParam0)
{
	func_1475(iParam0, func_1474(iParam0));
}

void func_448()
{
	func_1475(34, func_1474(34));
}

void func_449()
{
	func_1475(35, func_1474(35));
}

void func_450()
{
	func_1475(36, func_1474(36));
}

var func_451()
{
	return Global_1425247->f_54;
}

void func_452()
{
	switch (func_1476(0))
	{
		case 4:
			if (func_1477(0))
			{
			}
			else
			{
				func_1478(0);
				func_1479();
				set_ped_infinite_ammo(get_player_ped(player_id()), true, 0);
				func_1475(0, 3);
				Jump @146; //curOff = 74
				if (func_1477(0))
				{
					set_ped_infinite_ammo(get_player_ped(player_id()), false, 0);
				}
				else
				{
					set_ped_infinite_ammo(get_player_ped(player_id()), true, 0);
				}
				Jump @146; //curOff = 116
				set_ped_infinite_ammo(get_player_ped(player_id()), false, 0);
				func_1475(0, func_1474(0));
			}
			default:
				break;
	}
}

void func_453()
{
	switch (func_1476(1))
	{
		case 4:
			if (func_1477(1))
			{
			}
			else
			{
				func_1478(1);
				func_1480(1, &bVar0);
				if (bVar0 && !Global_43891)
				{
					func_1481(10);
				}
				func_1475(1, 3);
				Jump @138; //curOff = 83
				if (func_1477(1))
				{
					func_1482(1);
				}
				else
				{
					func_1483(1);
				}
				Jump @138; //curOff = 107
				if (_0xd0b7aeb56229d317(Global_35) != 0)
				{
				}
				else
				{
					func_1484(1);
					func_1475(1, 2);
				}
			}
			default:
				break;
	}
}

void func_454()
{
	switch (func_1476(2))
	{
		case 4:
			if (func_1477(2))
			{
			}
			else
			{
				func_1478(2);
				func_1480(2, &bVar0);
				if (bVar0 && !Global_43891)
				{
					func_1481(10);
				}
				func_1475(2, 3);
				Jump @138; //curOff = 83
				if (func_1477(2))
				{
					func_1482(2);
				}
				else
				{
					func_1483(2);
				}
				Jump @138; //curOff = 107
				if (_0xd0b7aeb56229d317(Global_35) != 0)
				{
				}
				else
				{
					func_1484(2);
					func_1475(2, 2);
				}
			}
			default:
				break;
	}
}

void func_455()
{
	switch (func_1476(3))
	{
		case 4:
			if (func_1477(3))
			{
			}
			else
			{
				func_1478(3);
				func_1480(3, &bVar0);
				if (bVar0 && !Global_43891)
				{
					func_1481(10);
				}
				func_1475(3, 3);
				Jump @138; //curOff = 83
				if (func_1477(3))
				{
					func_1482(3);
				}
				else
				{
					func_1483(3);
				}
				Jump @138; //curOff = 107
				if (_0xd0b7aeb56229d317(Global_35) != 0)
				{
				}
				else
				{
					func_1484(3);
					func_1475(3, 2);
				}
			}
			default:
				break;
	}
}

void func_456()
{
	switch (func_1476(4))
	{
		case 4:
			if (func_1477(4))
			{
			}
			else
			{
				func_1478(4);
				if (!func_361(24))
				{
					func_1485(24);
					func_1486();
				}
				func_1480(4, &bVar0);
				if (bVar0 && !Global_43891)
				{
					func_1481(10);
				}
				func_1475(4, 3);
				Jump @236; //curOff = 103
				if (func_1477(4))
				{
					func_1482(4);
					if (func_1487() && !func_1488())
					{
						func_1489();
						func_1490(24);
					}
				}
				else
				{
					if (!func_361(24))
					{
						func_1485(24);
						func_1486();
					}
					func_1483(4);
				}
				Jump @236; //curOff = 174
				if (_0xd0b7aeb56229d317(Global_35) != 0)
				{
				}
				else
				{
					func_1484(4);
					if (func_1487() && !func_1488())
					{
						func_1489();
						func_1490(24);
					}
					func_1491();
					func_1475(4, 2);
				}
			}
			default:
				break;
	}
}

void func_457()
{
	switch (func_1476(5))
	{
		case 4:
			if (func_1477(5))
			{
			}
			else
			{
				func_1478(5);
				func_1492(1);
				func_1475(5, 3);
			}
			default:
				break;
	}
}

void func_458()
{
	switch (func_1476(6))
	{
		case 4:
			if (func_1477(6))
			{
			}
			else
			{
				func_1478(6);
				if (func_1493() == -1)
				{
					func_1494(50000, 0, 1065353216, 1, 0, 0, 1, 752097756);
				}
				else
				{
					func_1494(func_1493(), 0, 1065353216, 1, 0, 0, 1, 752097756);
				}
				func_1495();
				func_1475(6, func_1474(6));
				func_1496(6);
			}
	}
}

void func_459()
{
	switch (func_1476(8))
	{
		case 4:
			if (func_1477(8))
			{
			}
			else
			{
				func_1478(8);
				func_1497(1);
				func_1481(4);
				func_1475(8, 3);
			}
			default:
				break;
	}
}

void func_460()
{
	switch (func_1476(9))
	{
		case 4:
			if (func_1477(9))
			{
			}
			else
			{
				func_1478(9);
				func_1498(4, 16);
				func_1475(9, 3);
			}
			default:
				break;
	}
}

void func_461()
{
	switch (func_1476(10))
	{
		case 4:
			if (func_1477(10))
			{
			}
			else
			{
				func_1478(10);
				if (func_897())
				{
					_0x9b4e793b1cb6550a();
				}
				func_1268(17, -1091304842, 0, 0, 0, 0, 1065353216, 0);
				func_1475(10, func_1474(10));
				func_1496(10);
			}
	}
}

void func_462()
{
	switch (func_1476(11))
	{
		case 4:
			if (func_1477(11))
			{
			}
			else
			{
				func_1478(11);
				if (func_897())
				{
					_0x9b4e793b1cb6550a();
				}
				func_1268(18, -1091304842, 0, 0, 0, 0, 1065353216, 0);
				func_1475(11, func_1474(11));
				func_1496(11);
			}
	}
}

void func_463()
{
	switch (func_1476(12))
	{
		case 4:
			if (func_1477(12))
			{
			}
			else
			{
				func_1478(12);
				if (func_897())
				{
					_0x9b4e793b1cb6550a();
				}
				func_1499();
				func_1475(12, func_1474(12));
				func_1496(12);
			}
	}
}

void func_464()
{
	switch (func_1476(13))
	{
		case 4:
			if (func_1477(13))
			{
			}
			else
			{
				func_1478(13);
				_0x28a13bf6b05c3d83(player_id(), 1);
				func_1500(10);
				func_1475(13, 3);
				Jump @147; //curOff = 75
				if (func_1477(13))
				{
					_0x28a13bf6b05c3d83(player_id(), 0);
				}
				else
				{
					_0x28a13bf6b05c3d83(player_id(), 1);
					if (func_1501())
					{
						func_1500(10);
					}
				}
				Jump @147; //curOff = 121
				_0x28a13bf6b05c3d83(player_id(), 0);
				func_1475(13, func_1474(13));
			}
			default:
				break;
	}
}

void func_465()
{
	switch (func_1476(14))
	{
		case 4:
			func_1478(14);
			func_1475(14, 3);
			break;
		case 5:
			func_1475(14, func_1474(14));
			break;
	}
}

void func_466()
{
	switch (func_1476(15))
	{
		case 4:
			if (func_1477(15))
			{
			}
			else
			{
				func_1478(15);
				func_1502(15);
				func_1503(1);
				func_1475(15, 3);
				Jump @174; //curOff = 71
				if (func_1477(15))
				{
					if (!func_1504())
					{
						func_1503(func_1505());
					}
				}
				else if (func_1506() != 1)
				{
					func_1503(1);
				}
				Jump @174; //curOff = 115
				iVar0 = func_1508(func_1507(15));
				if (func_1509(iVar0))
				{
					if (iVar0 == 15)
					{
						func_1510();
						func_1511(func_1507(15), -1);
					}
					func_1475(15, 2);
				}
			}
			default:
				break;
	}
}

void func_467()
{
	switch (func_1476(16))
	{
		case 4:
			if (func_1477(16))
			{
			}
			else
			{
				func_1478(16);
				func_1502(16);
				func_1503(2);
				func_1475(16, 3);
				Jump @174; //curOff = 71
				if (func_1477(16))
				{
					if (!func_1504())
					{
						func_1503(func_1505());
					}
				}
				else if (func_1506() != 2)
				{
					func_1503(2);
				}
				Jump @174; //curOff = 115
				iVar0 = func_1508(func_1507(16));
				if (func_1509(iVar0))
				{
					if (iVar0 == 16)
					{
						func_1510();
						func_1511(func_1507(16), -1);
					}
					func_1475(16, 2);
				}
			}
			default:
				break;
	}
}

void func_468()
{
	switch (func_1476(17))
	{
		case 4:
			if (func_1477(17))
			{
			}
			else
			{
				func_1478(17);
				func_1502(17);
				func_1503(3);
				func_1475(17, 3);
				Jump @174; //curOff = 71
				if (func_1477(17))
				{
					if (!func_1504())
					{
						func_1503(func_1505());
					}
				}
				else if (func_1506() != 3)
				{
					func_1503(3);
				}
				Jump @174; //curOff = 115
				iVar0 = func_1508(func_1507(17));
				if (func_1509(iVar0))
				{
					if (iVar0 == 17)
					{
						func_1510();
						func_1511(func_1507(17), -1);
					}
					func_1475(17, 2);
				}
			}
			default:
				break;
	}
}

void func_469()
{
	switch (func_1476(18))
	{
		case 4:
			if (func_1477(18))
			{
			}
			else
			{
				func_1475(18, 3);
				func_1502(18);
				func_1503(4);
				func_1478(18);
				Jump @174; //curOff = 71
				if (func_1477(18))
				{
					if (!func_1504())
					{
						func_1503(func_1505());
					}
				}
				else if (func_1506() != 4)
				{
					func_1503(4);
				}
				Jump @174; //curOff = 115
				iVar0 = func_1508(func_1507(18));
				if (func_1509(iVar0))
				{
					if (iVar0 == 18)
					{
						func_1510();
						func_1511(func_1507(18), -1);
					}
					func_1475(18, 2);
				}
			}
			default:
				break;
	}
}

void func_470()
{
	switch (func_1476(19))
	{
		case 4:
			if (func_1477(19))
			{
			}
			else
			{
				func_1478(19);
				func_1502(19);
				func_1503(5);
				func_1475(19, 3);
				Jump @174; //curOff = 71
				if (func_1477(19))
				{
					if (!func_1504())
					{
						func_1503(func_1505());
					}
				}
				else if (func_1506() != 5)
				{
					func_1503(5);
				}
				Jump @174; //curOff = 115
				iVar0 = func_1508(func_1507(19));
				if (func_1509(iVar0))
				{
					if (iVar0 == 19)
					{
						func_1510();
						func_1511(func_1507(19), -1);
					}
					func_1475(19, 2);
				}
			}
			default:
				break;
	}
}

void func_471()
{
	switch (func_1476(20))
	{
		case 4:
			if (func_1477(20))
			{
			}
			else
			{
				func_1478(20);
				bVar0 = func_1512();
				if (bVar0)
				{
					if (!Global_1897952->f_40)
					{
						func_1513(0, 0);
					}
					func_1514(-1);
				}
				func_1515();
				func_1475(20, 3);
				Jump @130; //curOff = 90
				if (func_1516())
				{
					func_1500(10);
					func_1517();
				}
				func_1475(20, func_1474(21));
				func_1496(20);
			}
			default:
				break;
	}
}

void func_472()
{
	switch (func_1476(21))
	{
		case 4:
			if (func_1477(21))
			{
			}
			else
			{
				func_1478(21);
				bVar0 = func_1512();
				func_1518(0, 7, 1, 1, 1);
				func_1518(1, 7, 1, bVar0, 1);
				func_1518(2, 7, 1, 1, 1);
				if (bVar0)
				{
					if (!Global_1897952->f_40)
					{
						func_1513(0, 0);
					}
					func_1514(-1);
				}
				func_1500(10);
				func_1475(21, 3);
			}
			default:
				break;
	}
}

void func_473()
{
	switch (func_1476(22))
	{
		case 4:
			if (func_1477(22))
			{
			}
			else
			{
				func_1478(22);
				bVar0 = func_1512();
				if (bVar0)
				{
					if (!Global_1897952->f_40)
					{
						func_1519(0, 1080f);
						func_1513(0, 0);
					}
					func_1519(1, 1080f);
					func_1514(-1);
				}
				func_1519(2, 1080f);
				func_1500(10);
				func_1475(22, func_1474(22));
				func_1496(22);
			}
	}
}

void func_474()
{
	switch (func_1476(23))
	{
		case 4:
			if (func_1477(23))
			{
			}
			else
			{
				func_1478(23);
				iVar1 = func_1520(0);
				if (iVar1 != 0)
				{
					iVar0 = get_default_max_attribute_rank(iVar1, 7);
					func_1521(0, iVar0);
				}
				iVar1 = func_1520(2);
				if (iVar1 != 0)
				{
					iVar0 = get_default_max_attribute_rank(iVar1, 7);
					func_1521(2, iVar0);
				}
				iVar1 = func_1520(3);
				if (iVar1 != 0)
				{
					iVar0 = get_default_max_attribute_rank(iVar1, 7);
					func_1521(3, iVar0);
				}
				iVar1 = func_1520(4);
				if (iVar1 != 0)
				{
					iVar0 = get_default_max_attribute_rank(iVar1, 7);
					func_1521(4, iVar0);
				}
				iVar1 = func_1520(1);
				if (iVar1 != 0)
				{
					iVar0 = get_default_max_attribute_rank(iVar1, 7);
					func_1521(1, iVar0);
				}
				func_1475(23, func_1474(23));
				func_1496(23);
			}
	}
}

void func_475()
{
	switch (func_1476(24))
	{
		case 4:
			if (func_1477(24))
			{
			}
			else
			{
				func_1478(24);
				func_1522(8);
				func_1475(24, 3);
				Jump @116; //curOff = 66
				if (func_1477(24))
				{
					func_1523(8);
				}
				else
				{
					func_1522(8);
				}
				Jump @116; //curOff = 93
				func_1523(8);
				func_1475(24, func_1474(24));
			}
			default:
				break;
	}
}

void func_476()
{
	switch (func_1476(25))
	{
		case 4:
			if (func_1477(25))
			{
			}
			else
			{
				func_1478(25);
				if (func_1524() < 0.8f)
				{
					func_1525(0.8f);
				}
				func_1475(25, 3);
				Jump @107; //curOff = 82
				Jump @107; //curOff = 85
				func_1526(0);
				func_1475(25, func_1474(25));
			}
			default:
				break;
	}
}

void func_477()
{
	switch (func_1476(34))
	{
		case 4:
			if (func_1477(34))
			{
			}
			else
			{
				func_1478(34);
				set_cheat_active(3);
				func_1475(34, func_1474(34));
				func_1496(34);
			}
	}
}

void func_478()
{
	switch (func_1476(35))
	{
		case 4:
			if (func_1477(35))
			{
			}
			else
			{
				func_1478(35);
				iVar0 = player_id();
				iVar1 = get_player_wanted_level(iVar0);
				iVar2 = func_892((iVar1 - 1), 0, get_max_wanted_level());
				set_cheat_active(4);
				if (iVar2 == 0)
				{
					_0x29cd4896ecb66c12();
					func_1527();
				}
				func_1475(35, func_1474(35));
				func_1496(35);
			}
	}
}

void func_479()
{
	switch (func_1476(36))
	{
		case 4:
			if (func_1477(36))
			{
			}
			else
			{
				func_1478(36);
				iVar0 = player_id();
				iVar1 = get_wanted_level_threshold(0);
				_set_wanted_intensity_for_player(iVar0, iVar1);
				if (func_138(iVar0, 1, 0, 1))
				{
					_0x55f37f5f3f2475e1();
				}
				set_cheat_active(4);
				func_1528();
				func_1527();
				_0x29cd4896ecb66c12();
				func_1475(36, func_1474(36));
				func_1496(36);
			}
	}
}

void func_480()
{
	Global_1425247->f_54 = (Global_1425247->f_54 + 1 % 37);
}

void func_481()
{
	func_1529();
	func_1530();
	func_1531();
	if (func_1476(7) == 4)
	{
		func_1532();
	}
	if (func_272(0, 0, 1))
	{
		func_1533();
		func_1534();
		func_1535();
	}
}

void func_482()
{
	vVar0 = 2;
	Global_1425247->f_9 = { vVar0 };
	Global_1425247->f_57 = 0;
}

void func_483()
{
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				func_1536();
				break;
			case 1:
				func_1537();
				break;
			case 2:
				func_1538();
				break;
			case 3:
				func_1539();
				break;
			case 4:
				func_1540();
				break;
			case 5:
				func_1541();
				break;
			case 6:
				func_1542();
				break;
			case 7:
				func_1543();
				break;
			case 8:
				func_1544();
				break;
			case 9:
				func_1545();
				break;
			case 10:
				func_1546();
				break;
			case 11:
				func_1547();
				break;
			case 12:
				func_1548();
				break;
			case 13:
				func_1549();
				break;
			case 14:
				func_1550();
				break;
			case 15:
				func_1551();
				break;
			case 16:
				func_1552();
				break;
			case 17:
				func_1553();
				break;
			case 18:
				func_1554();
				break;
			case 19:
				func_1555();
				break;
			case 20:
				func_1556();
				break;
			case 21:
				func_1557();
				break;
			case 22:
				func_1558();
				break;
			case 23:
				func_1559();
				break;
			case 24:
				func_1560();
				break;
			case 25:
				func_1561();
				break;
			case 26:
				func_1562(iVar1);
				break;
			case 27:
				func_1562(iVar1);
				break;
			case 28:
				func_1562(iVar1);
				break;
			case 29:
				func_1562(iVar1);
				break;
			case 30:
				func_1562(iVar1);
				break;
			case 31:
				func_1562(iVar1);
				break;
			case 32:
				func_1562(iVar1);
				break;
			case 33:
				func_1562(iVar1);
				break;
			case 34:
				func_1563();
				break;
			case 35:
				func_1564();
				break;
			case 36:
				func_1565();
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_484()
{
	return Global_1425247->f_66.f_8;
}

bool func_485()
{
	iVar0 = func_178();
	vVar1 = { func_1566(iVar0) };
	fVar4 = -1f;
	if (!func_276(vVar1))
	{
		fVar4 = vdist(Global_36, vVar1);
	}
	bVar6 = func_1567(iVar0, &iVar5, fVar4);
	if ((fVar4 >= 0f && !Global_1430231->f_5) && bVar6)
	{
		if (!func_321(Global_1430231->f_8))
		{
			Global_1430231->f_8 = func_323("STAGE_COACH", -719620017, vVar1, 1.6f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		}
	}
	else
	{
		if (func_321(Global_1430231->f_8))
		{
			func_327(&(Global_1430231->f_8), 1, 1);
		}
		if (!func_276(vVar1) && iVar5 != 0)
		{
			if (fVar4 < 2f)
			{
				func_1568(iVar5);
			}
		}
		return false;
	}
	if (func_199(Global_1430231->f_8, 1))
	{
		if (func_321(Global_1430231->f_8))
		{
			func_327(&(Global_1430231->f_8), 1, 1);
		}
		return true;
	}
	return false;
}

bool func_486(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419->f_9721[iVar0]->f_2)
		{
			if (&Global_1415419->f_9721[iVar0] == iParam0 || ((bParam1 && Global_1415419->f_19[iParam0]->f_5 != 0) && Global_1415419->f_19[&Global_1415419->f_9721[iVar0]]->f_5 == Global_1415419->f_19[iParam0]->f_5))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_487(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			if (func_267(21))
			{
				return false;
			}
			return true;
		case 76:
			return true;
		case 69:
			return true;
		case 26:
			return true;
		case 5:
			return true;
		case 38:
			return true;
		case 120:
			return false;
		case 126:
			return false;
		case 115:
			return false;
		case 92:
			return false;
	}
	return false;
}

bool func_488(int iParam0, bool bParam1)
{
	return func_1569(func_630(), iParam0, bParam1);
}

void func_489(var uParam0)
{
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_10 = -1;
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		uParam0->f_14[iVar0] = 0;
		iVar0++;
	}
	if (func_82() == 0)
	{
		uParam0->f_27 = 3;
	}
	func_1570(uParam0, 1);
}

void func_490(var uParam0)
{
	uParam0->f_24 = _0xaf6e67d073d2dce2();
	uParam0->f_25 = _0xa21e3bad0a42d199();
	uParam0->f_26 = _0xcc4e72c339461ed1();
	if (*uParam0 == 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		func_1571(uParam0, iVar0);
		iVar0++;
	}
	switch (*uParam0)
	{
		case 1:
			if (uParam0->f_25)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_14)
			{
				if (!is_entity_dead(&(uParam0->f_14[iVar0])))
				{
					if (is_bit_set(uParam0->f_22, iVar0) && !is_bit_set(uParam0->f_23, iVar0))
					{
						uParam0->f_10 = iVar0;
						func_1572(&(uParam0->f_21));
						func_1570(uParam0, 2);
						return;
					}
				}
				iVar0++;
			}
			break;
		case 2:
			if (is_entity_dead(&(uParam0->f_14[uParam0->f_10])))
			{
				func_1570(uParam0, 1);
				func_1572(&(uParam0->f_21));
				return;
			}
			uParam0->f_21 = clone_ped(&(uParam0->f_14[uParam0->f_10]), 0f, true, true);
			vVar1 = { get_offset_from_entity_in_world_coords(&(uParam0->f_14[uParam0->f_10]), 0f, 0f, -2f) };
			if (!func_276(uParam0->f_11))
			{
				set_entity_coords(uParam0->f_21, uParam0->f_11, true, false, true, true);
			}
			else
			{
				func_1573(uParam0->f_21, vVar1);
			}
			set_entity_collision(uParam0->f_21, false, false);
			freeze_entity_position(uParam0->f_21, true);
			force_ped_motion_state(uParam0->f_21, 247561816, false, 0, false);
			set_entity_invincible(uParam0->f_21, true);
			_0x196d3acbeba4a44b(1);
			_0xa1a86055792fb249(0);
			if (is_ped_male(uParam0->f_21))
			{
				StringCopy(&(uParam0->f_2), "MINIGAME_PROFILE_PHOTO", 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2), "MINIGAME_PROFILE_PHOTO_F", 64);
			}
			vVar1 = { get_entity_coords(uParam0->f_21, true, false) };
			func_1570(uParam0, 3);
			break;
		case 3:
			if (is_entity_dead(uParam0->f_21))
			{
				func_1570(uParam0, 1);
				func_1572(&(uParam0->f_21));
				return;
			}
			force_ped_motion_state(uParam0->f_21, 247561816, false, 0, false);
			if (!_0xa0bc8faed8cfeb3c(uParam0->f_21))
			{
				return;
			}
			_0x3e2fddbe435a8787();
			_0xd9c24f53631f2372(&(uParam0->f_2), uParam0->f_21, 0);
			_0x3e2fddbe435a8787();
			vVar1 = { get_entity_coords(uParam0->f_21, true, false) };
			func_1570(uParam0, 4);
			break;
		case 4:
			force_ped_motion_state(uParam0->f_21, 247561816, false, 0, false);
			if (_0x2a48d9567940598f(&(uParam0->f_2), uParam0->f_10, 1, uParam0->f_27))
			{
				uParam0->f_1 = 1;
				func_1570(uParam0, 5);
			}
			break;
		case 5:
			force_ped_motion_state(uParam0->f_21, 247561816, false, 0, false);
			if (uParam0->f_25)
			{
				return;
			}
			if (uParam0->f_26)
			{
				_0x55285f885f662169();
				_0xc2b8164c3be871a4();
				func_1572(&(uParam0->f_21));
				uParam0->f_1 = 0;
				func_1570(uParam0, 6);
			}
			break;
		case 6:
			sVar4 = _0x356f9fb0698c1feb(uParam0->f_10, uParam0->f_27);
			if (!is_string_null_or_empty(sVar4) && _0xe2c3cec3c0903a00(sVar4))
			{
				set_bit(&(uParam0->f_23), uParam0->f_10);
				uParam0->f_10 = -1;
				func_1570(uParam0, 1);
			}
			break;
	}
}

void func_491(var uParam0)
{
	func_1572(&(uParam0->f_21));
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		func_1574(uParam0, &(uParam0->f_14[iVar0]));
		uParam0->f_14[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	if (uParam0->f_1 == 1)
	{
		_0x55285f885f662169();
		_0xc2b8164c3be871a4();
	}
	uParam0->f_1 = 0;
	*uParam0 = 7;
}

int func_492()
{
	return Global_43908;
}

bool func_493(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_494(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_495(var uParam0, bool bParam1, bool bParam2)
{
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1] = -1;
		(*uParam0)[iVar1]->f_3 = 0;
		(*uParam0)[iVar1]->f_4 = 99999999;
		(*uParam0)[iVar1]->f_5 = 0f;
		(*uParam0)[iVar1]->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_1575(iVar0))
		{
			if (func_1576(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_1577(uParam0, iVar0);
				}
				else
				{
					func_1578(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_3)
		{
			if (func_282(uParam0[iVar0]))
			{
				iVar2++;
				(*uParam0)[iVar0]->f_5 = func_1579((*uParam0)[iVar0]->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

int func_496(var uParam0)
{
	if (!_can_launch_app_by_hash(1833066477))
	{
	}
	else if (_launch_app_by_hash(1833066477) == 0)
	{
	}
	func_1580(uParam0);
	func_1581(1);
	uParam0->f_6 = 1;
	return 1;
}

void func_497()
{
	if ((_is_app_active(1433015236) || func_207()) || Global_1898068->f_4)
	{
		_close_app_by_hash(1433015236);
		func_205(0);
	}
}

void func_498(int iParam0)
{
	Global_43908 = iParam0;
}

void func_499(var uParam0)
{
	func_509(uParam0);
	func_498(0);
}

int func_500(int iParam0)
{
	iParam0 = func_1582(iParam0);
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

bool func_501(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_502(bool bParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (ped_has_use_scenario_task(Global_35) && !_0x0c3cb2e600c8977d(Global_35, 1))
		{
			if (((_0x02ebbb3989b7e695(Global_35) || (bParam0 && is_ped_active_in_scenario(Global_35, 0))) || (is_task_move_network_active(Global_35) && get_task_move_network_event(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_501(16777216) && has_anim_event_fired(Global_35, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_503()
{
	return &Global_1357517;
}

bool func_504()
{
	return Global_1935689->f_1;
}

bool func_505()
{
	return &Global_1898068;
}

int func_506(var uParam0)
{
	iVar0 = 1;
	display_radar(false);
	func_588(0);
	while (_event_manager_is_event_pending(1833066477))
	{
		if (_event_manager_peek_event(1833066477, &Var2))
		{
			if (Var2.f_2 == -997855324)
			{
				iVar0 = 0;
			}
			else
			{
				switch (Var2)
				{
					case -1740156697:
						iVar1 = func_1583(_databinding_read_data_hash_string_from_parent(Var2.f_3, "itemName"));
						_databinding_write_data_string_from_parent(uParam0->f_2, "subFooter", func_1585(func_1584(iVar1)));
						break;
					case -1203660660:
						iVar1 = func_1583(_databinding_read_data_hash_string_from_parent(Var2.f_3, "itemName"));
						uParam0->f_4 = iVar1;
						iVar0 = 2;
						break;
				}
			}
		}
		_event_manager_pop_event(1833066477);
	}
	return iVar0;
}

void func_507(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_508(var uParam0)
{
	return uParam0->f_4;
}

void func_509(var uParam0)
{
	func_1586(uParam0);
	_0x26dd2fb0a88cc412("WheelHUDIn", "WheelHUDOut", 0, 0);
	set_time_scale(1f);
}

float func_510(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_511(int iParam0)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1520(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1587(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1587(iParam0) + 1;
	fVar6 = func_1588(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1589(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_512(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_1590(uParam0);
	uParam0->f_326 = 272913;
	uParam0->f_327 = 272921;
	uParam0->f_328 = 272929;
	uParam0->f_329 = 272937;
	func_1595(uParam0, &uParam1);
	uParam0->f_304.f_2 = iParam2;
	uParam0->f_304.f_3 = iParam3;
	uParam0->f_304.f_4 = iParam4;
	uParam0->f_304.f_5 = 1f;
	uParam0->f_304.f_5.f_1 = 2000;
	uParam0->f_304.f_5.f_2 = 0f;
	uParam0->f_304.f_5.f_3 = 1;
	uParam0->f_304.f_5.f_4 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1f;
	func_1155(&(uParam0->f_318), 128);
	uParam0->f_324 = func_1596(uParam0);
	return uParam0->f_324;
}

int func_513(var uParam0, int iParam1, int iParam2)
{
	if (!func_1597(&uVar0, iParam1))
	{
		return 0;
	}
	if (!func_1598(&uVar0, iParam2, &Var7))
	{
		return 0;
	}
	uParam0->f_317 = iParam1;
	uParam0->f_314 = { Var7 };
	uParam0->f_304 = Var7.f_3;
	if (Var7.f_4 == 0)
	{
		return func_1599(uParam0, Var7, Var7.f_3);
	}
	else
	{
		_0x032a14d082a9b269(Var7.f_4);
		func_1157(&(uParam0->f_318), 1024);
		func_1155(&(uParam0->f_318), 2048);
		return 1;
	}
	return 0;
}

int func_514(var uParam0)
{
	if (func_692(uParam0->f_318, 64))
	{
		return 0;
	}
	if (func_692(uParam0->f_318, 4) || _0x99f92061efe908ba())
	{
		return 1;
	}
	if (uParam0->f_319 <= 0)
	{
		return 2;
	}
	if (Global_1935630->f_22)
	{
		return 3;
	}
	if (!func_692(uParam0->f_318, 2048) && !func_692(uParam0->f_318, 1024))
	{
		return 4;
	}
	if (uParam0->f_299 >= 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= uParam0->f_299)
		{
			_0xf11d7cb962fcd747(&(uParam0->f_288[iVar0]));
			iVar0++;
		}
	}
	else
	{
		if (func_692(uParam0->f_318, 2))
		{
			_0x6a6e79fbe8678c98();
		}
		_0xb9b9e47edb9d63db();
	}
	if (func_692(uParam0->f_318, 256) && uParam0->f_321 != 0)
	{
	}
	_0x36559148b78853b3(0, 0, 0);
	func_1600(0);
	display_radar(false);
	display_hud(false);
	func_1601();
	func_1602(1);
	func_1603(-1, 0, 0, 0, 0);
	func_1604();
	_0xc6dcc2a3a8825c85(1);
	_0xcc61d8d6c19d9f14(3);
	_0x7cef4ac79f7e7fad(func_1605(func_178()), func_1605(uParam0->f_317), uParam0->f_314);
	uParam0->f_323 = 1;
	return 6;
}

void func_515(var uParam0)
{
	if (_0x99f92061efe908ba() || func_692(uParam0->f_318, 4))
	{
		disable_all_control_actions(2);
		disable_frontend_this_frame();
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		_0xc0258742b034dfaf(0f);
		_0xdd1232b332cbb9e7(3, 1, 0);
		if (func_1017())
		{
			func_1606(1);
		}
		if (uParam0->f_323 != 3 && !get_player_invincible(player_id()))
		{
			set_entity_invincible(Global_35, true);
			if (func_1304(uParam0->f_304.f_1, 0))
			{
				set_entity_invincible(func_744(uParam0->f_304.f_1), true);
			}
		}
		_0x36559148b78853b3(0, 0, 0);
		stop_current_playing_speech(Global_35, 0);
		switch (uParam0->f_323)
		{
			case 0:
				uParam0->f_323 = 4;
				break;
			case 1:
				if (!func_692(uParam0->f_318, 4))
				{
					func_1157(&(uParam0->f_318), 4);
				}
				uParam0->f_320 = (_0x2f4d53023f826ff0() - 1);
				if (_0xdabfe48ba0d457aa() > uParam0->f_300)
				{
					uParam0->f_301 = uParam0->f_300;
					uParam0->f_300 = _0xdabfe48ba0d457aa();
					uParam0->f_303 = uParam0->f_302;
					uParam0->f_302 = _0xe5b76e5b56cd77dd();
				}
				if (_0x5d5e2102b174b8d2() || _0x7b8c2b846c05e5ad())
				{
					if (func_692(uParam0->f_318, 8))
					{
						func_1155(&(uParam0->f_318), 8);
					}
					uParam0->f_323 = 2;
				}
				if (_0x27af48c62b281341() || !_0x99f92061efe908ba())
				{
					uParam0->f_323 = 3;
				}
				break;
			case 2:
				if (!func_1607(uParam0))
				{
					_0x62d5f0588915b277();
				}
				else if (!_0x5d5e2102b174b8d2() && !_0x7b8c2b846c05e5ad())
				{
					func_1608(uParam0->f_314, 2f, 1, 0, 0, 0, 0);
					uParam0->f_323 = 3;
				}
				break;
			case 3:
				if (_0x27af48c62b281341() || !_0x99f92061efe908ba())
				{
					func_1600(1);
					display_radar(true);
					display_hud(true);
					func_1609();
					_0xbc90bdf4e5228ea1();
					if (get_player_invincible(player_id()))
					{
						set_entity_invincible(Global_35, false);
					}
					if (func_1304(uParam0->f_304.f_1, 0))
					{
						set_entity_invincible(func_744(uParam0->f_304.f_1), false);
					}
					func_1157(&(uParam0->f_318), 1);
					if (func_692(uParam0->f_318, 2048))
					{
						func_1610(uParam0);
					}
					func_1611(1);
					if (uParam0->f_324)
					{
						Call_Loc(uParam0->f_329);
					}
					func_1157(&(uParam0->f_318), 32);
					func_1157(&(uParam0->f_318), 64);
					if (func_692(uParam0->f_318, 4))
					{
						func_1155(&(uParam0->f_318), 4);
					}
					func_1612(0);
					uParam0->f_323 = 4;
				}
				break;
		}
		if (uParam0->f_324)
		{
			Call_Loc(uParam0->f_326);
		}
	}
}

int func_516()
{
	if (func_1613() == -1)
	{
		return -1;
	}
	return func_1614(func_1613());
}

void func_517(var uParam0)
{
	func_1615(uParam0, 0f);
}

void func_518(var uParam0, int iParam1, int iParam2)
{
	if ((!is_entity_dead(iParam2) && !is_ped_in_writhe(iParam2)) && uParam0->f_304.f_1 != iParam2)
	{
		set_entity_invincible(iParam2, false);
		freeze_entity_position(iParam2, false);
		if ((func_516() == iParam1 || iParam1 == 43) && func_1617(func_1616(iParam1), &vVar0, &fVar3))
		{
			func_1618(iParam2, vVar0, fVar3, 2, 1073741824);
			func_1619(iParam2, vVar0, 5f, 1);
		}
		else
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 2f, -5f, 0f) };
			func_1334(&vVar0, 50, 10, 0);
			func_1618(iParam2, get_offset_from_entity_in_world_coords(Global_35, 2f, -2f, 0f), get_entity_heading(Global_35), 2, 1073741824);
			if (!func_1619(iParam2, vVar0, 20f, 1))
			{
			}
			func_1608(get_entity_coords(iParam2, true, false), 5f, 0, 0, 0, 0, 0);
		}
	}
}

bool func_519(var uParam0)
{
	return func_692(uParam0->f_318, 1);
}

void func_520(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_521()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

int func_522(int iParam0)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_523(int iParam0)
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

bool func_524(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_525()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

float func_526(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_527(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_1620(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_184(&(Param0.f_10)))
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
			func_1621(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_528()
{
	func_1622();
	func_1623();
	func_1624();
	func_1625(1, 0, 0);
	func_1625(2, 0, 0);
	func_1625(3, 0, 0);
}

void func_529(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_530()
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

void func_531(int iParam0)
{
	if (!_databinding_is_data_id_valid(&Global_1955569))
	{
		return;
	}
	func_1626(iParam0, 1, 4000);
}

var func_532(int iParam0, int iParam1)
{
	Var1 = { func_1627(iParam0, iParam1) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

int func_533(int iParam0)
{
	Var1 = { func_847(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

void func_534(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_1628(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1629(1, bVar1, 1, sVar2);
		func_1630(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1631(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_1632();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1631(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1631(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_535()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_11)
	{
		iVar1 = round(&(Global_40.f_11095.f_11[iVar0]));
		if (func_1633(iVar0))
		{
			if (func_1634(iVar0))
			{
				set_attribute_points(Global_35, iVar0, iVar1);
			}
			else
			{
				set_attribute_points(Global_35, iVar0, func_1631(iVar1));
			}
		}
		iVar0++;
	}
}

void func_536()
{
	_0x2498035289b5688f(player_id(), 0f);
	_0x51345ae20f22c261(player_id(), Global_40.f_11095.f_39, 0, 1, 1);
}

void func_537()
{
	_set_attribute_core_value(Global_35, func_1635(0), func_1631(round(func_1636(0))));
	_set_attribute_core_value(Global_35, func_1635(2), func_1631(round(func_1636(2))));
	_set_attribute_core_value(Global_35, func_1635(1), func_1631(round(func_1636(1))));
}

void func_538()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_4)
	{
		if (Global_40.f_11095.f_4[iVar0]->f_1 > 0f)
		{
			enable_attribute_overpower(Global_35, func_1635(iVar0), Global_40.f_11095.f_4[iVar0]->f_1, 0);
		}
		if (&Global_40.f_11095.f_4[iVar0] > 0f)
		{
			_set_attribute_overpower_amount(Global_35, func_1635(iVar0), &(Global_40.f_11095.f_4[iVar0]), false);
		}
		iVar0++;
	}
}

void func_539()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_540()
{
	_0x22c8b10802301381(player_id(), Global_40.f_11095.f_59);
}

void func_541()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_542()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_543()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

void func_544()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_545()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_546()
{
	Global_1347477->f_201 = 1;
}

bool func_547(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return -508547493;
		case 11966224:
			return -676452144;
		default:
			break;
	}
	return 0;
}

bool func_549(int iParam0)
{
	return iParam0 != 0;
}

bool func_550(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_551(int iParam0)
{
	if (!func_549(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_1637(iParam0, &iVar0))
	{
		func_1638(iVar0);
	}
}

bool func_552(int iParam0)
{
	if (func_1639(iParam0))
	{
		return false;
	}
	if (!func_1304(Global_35, 0))
	{
		return false;
	}
	iVar0 = -1;
	if (!func_1637(iParam0, &iVar0))
	{
		return false;
	}
	if (func_1640(iParam0))
	{
	}
	if (_0x1e017404784aa6a3(Global_35, iParam0))
	{
		func_1641(iParam0, 1);
		return true;
	}
	return false;
}

int func_553()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225639->f_8;
		Global_36 = { Global_1225639->f_16 };
		return Global_1225639->f_10;
	}
	Global_35 = get_player_ped(player_id());
	Global_36 = { get_entity_coords(Global_35, false, false) };
	return player_id();
}

void func_554()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

bool func_555()
{
	return !Global_1935630->f_52;
}

void func_556(bool bParam0)
{
	if ((!func_1053(func_1315(4), 1) || func_320(func_1315(33))) || func_320(func_1315(34)))
	{
		return;
	}
	func_1642(bParam0);
	func_1643(bParam0);
	func_725(0);
}

float func_557()
{
	return (to_float(func_1644()) / 1000f);
}

bool func_558(int iParam0)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	switch (func_1309(iParam0))
	{
		case 1:
			iVar0 = func_698(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_698(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

bool func_559(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_560(var uParam0)
{
	iVar0 = Global_1946804->f_853;
	switch (uParam0[iVar0])
	{
		case 30:
			func_1645((*uParam0)[iVar0]->f_2);
			break;
		case 31:
			func_1646();
			func_1647();
			break;
		case 36:
			func_1648();
			break;
		case 32:
			iVar2 = (*uParam0)[iVar0]->f_2;
			if (func_522(iVar2) != -999503751)
			{
				iVar3 = func_743(iVar2);
				if (iVar3 == -358215195)
				{
				}
				else
				{
					bVar1 = iVar2 == &Global_1946804->f_1497.f_1[func_1649(iVar3, 1)];
					Jump @184; //curOff = 169
					bVar1 = iVar2 == Global_1946804->f_1497;
					func_1650(iVar2, 1, 1, bVar1);
					Jump @269; //curOff = 194
					iVar2 = (*uParam0)[iVar0]->f_2;
					func_1651(iVar2, 1, 1);
					Jump @269; //curOff = 215
					if (!func_1652((*uParam0)[iVar0]->f_1, 2048))
					{
						func_1653(&(Global_1946804->f_2163));
					}
					func_1654();
					Jump @269; //curOff = 252
					func_1653(&(Global_1946804->f_2163));
				}
				func_1655(uParam0[iVar0]);
				iVar0 = (iVar0 + 1 % 20);
				Global_1946804->f_853 = iVar0;
				Global_1946804->f_852 = (Global_1946804->f_852 - 1);
			}
			default:
				break;
	}
}

void func_561(var uParam0)
{
	iVar1 = Global_1946804->f_855;
	if ((*uParam0)[iVar1]->f_3 != 0)
	{
		iVar0 = (*uParam0)[iVar1]->f_3;
	}
	else
	{
		iVar0 = get_player_ped(player_id());
	}
	if (!func_1656(iVar0, &iVar3))
	{
		return;
	}
	if (iVar3 == 0)
	{
		switch (uParam0[iVar1])
		{
			case 6:
				_update_ped_variation(iVar0, false, true, false, true, func_1652((*uParam0)[iVar1]->f_2, 16));
				break;
			case 12:
				func_1657(&(Global_1946804->f_979));
				break;
			case 3:
				if (Global_1946804->f_979.f_1 == 0)
				{
				}
				else
				{
					if (!func_1658(&(Global_1946804->f_979), &(Global_1946804->f_979.f_9)))
					{
						return;
					}
					Jump @1652; //curOff = 304
					if (Global_1946804->f_979.f_1 == 0)
					{
					}
					else
					{
						if (!func_1659(iVar0, &(Global_1946804->f_979), 0))
						{
							return;
						}
						if (Global_1132155->f_6001.f_1)
						{
							iVar4 = func_1661(func_1660(255));
							if (iVar4 & 512 == 0)
							{
								iVar5 = 512;
							}
							if (iVar4 & 64 == 0)
							{
								iVar5 |= 64;
							}
						}
						else
						{
							iVar5 = 512;
						}
						func_1662(&(Global_1946804->f_1497), iVar0, 1, iVar5, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), 1);
						Jump @1652; //curOff = 452
						if (!func_1663(iVar0, &(Global_1946804->f_979)))
						{
							return;
						}
						_set_metaped_weariness(iVar0, Global_36638.f_45.f_350.f_1010);
						Jump @1652; //curOff = 492
						iVar2 = 1;
						if ((func_1664(func_726()) && Global_40.f_7748.f_1 > 0) && Global_40.f_7748.f_1 <= 2)
						{
							Global_1946804->f_1497.f_1[iVar2] = func_1665();
						}
						else if (func_726() == func_1665() && Global_40.f_7748.f_1 >= 3)
						{
							Global_1946804->f_1497.f_1[iVar2] = func_1666();
						}
						func_1667();
						func_1668(Global_40.f_7748.f_1);
						func_730();
						func_1662(&(Global_1946804->f_1497), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), 64, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), 1);
						Jump @1652; //curOff = 680
						func_1669();
						func_1670(&(Global_40.f_7731[0]), &(Global_40.f_7731[1]), &(Global_40.f_7731[2]));
						func_1671();
						func_1662(&(Global_1946804->f_1497), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), 64, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), 1);
						Jump @1652; //curOff = 779
						func_1672();
						Jump @1652; //curOff = 786
						func_1673(&(Global_1946804->f_1378), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), func_1652((*uParam0)[iVar1]->f_2, 64), func_1652((*uParam0)[iVar1]->f_2, 128));
						Jump @1652; //curOff = 871
						func_1673(&(Global_1946804->f_1497), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), func_1652((*uParam0)[iVar1]->f_2, 64), func_1652((*uParam0)[iVar1]->f_2, 128));
						Jump @1652; //curOff = 956
						iVar4 = -1;
						if ((*uParam0)[iVar1]->f_1 != 0)
						{
							iVar4 = (*uParam0)[iVar1]->f_1;
						}
						func_1662(&(Global_1946804->f_1378), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), iVar4, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), !func_1652((*uParam0)[iVar1]->f_2, 1024));
						Jump @1652; //curOff = 1056
						iVar4 = -1;
						if ((*uParam0)[iVar1]->f_1 != 0)
						{
							iVar4 = (*uParam0)[iVar1]->f_1;
						}
						func_1662(&(Global_1946804->f_1497), iVar0, func_1652((*uParam0)[iVar1]->f_2, 2), iVar4, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), !func_1652((*uParam0)[iVar1]->f_2, 1024));
						Jump @1652; //curOff = 1156
						iVar2 = func_1649((*uParam0)[iVar1]->f_1, 1);
						func_1674(iVar0, iVar2, func_82() != -1, !func_1652((*uParam0)[iVar1]->f_2, 256), &(Global_1946804->f_1497.f_1[iVar2]));
						_update_ped_variation(iVar0, false, true, true, true, func_1652((*uParam0)[iVar1]->f_2, 16));
						Jump @1652; //curOff = 1241
						iVar2 = func_1649(Global_1946804->f_668[iVar1]->f_1, 1);
						func_1675(&(Global_1946804->f_1497), iVar0, iVar2, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), func_1652((*uParam0)[iVar1]->f_2, 2));
						Jump @1652; //curOff = 1320
						iVar2 = func_1649(Global_1946804->f_668[iVar1]->f_1, 1);
						func_1675(&(Global_1946804->f_1378), iVar0, iVar2, !func_1652((*uParam0)[iVar1]->f_2, 4), func_1652((*uParam0)[iVar1]->f_2, 16), func_1652((*uParam0)[iVar1]->f_2, 2));
						Jump @1652; //curOff = 1399
						if (!func_1676(2))
						{
						}
						else
						{
							_set_ped_component_disabled(iVar0, -668168749, 0);
							func_1677(iVar0, Global_1132155->f_6001.f_8.f_1, Global_1132155->f_6001.f_8.f_4);
							Jump @1652; //curOff = 1454
							func_1678(iVar0, 1);
							Jump @1652; //curOff = 1464
							if (!func_1676(2))
							{
							}
							else
							{
								if (!func_1679(iVar0, func_1660(255), (*uParam0)[iVar1]->f_1))
								{
								}
								_update_ped_variation(iVar0, false, true, true, true, func_1652((*uParam0)[iVar1]->f_2, 16));
								Jump @1652; //curOff = 1527
								_set_ped_component_disabled(iVar0, -668168749, 0);
								Jump @1652; //curOff = 1542
								if (!func_1680(*(*uParam0)[iVar1]))
								{
									return;
								}
								Jump @1652; //curOff = 1564
								func_1681(iVar0, (*uParam0)[iVar1]->f_1, 1, func_1652((*uParam0)[iVar1]->f_2, 16));
								Jump @1652; //curOff = 1597
								func_1682(iVar0, (*uParam0)[iVar1]->f_1, 1, func_1652((*uParam0)[iVar1]->f_2, 16));
								Jump @1652; //curOff = 1630
								func_1683(iVar0, (*uParam0)[iVar1]->f_1, 1);
							}
						}
					}
				}
				func_1655(uParam0[iVar1]);
				iVar1 = (iVar1 + 1 % 25);
				Global_1946804->f_855 = iVar1;
				Global_1946804->f_850 = (Global_1946804->f_850 - 1);
				default:
					break;
		}
	}
}

void func_562(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_851)
	{
		if ((*uParam0)[iVar0]->f_3 != 0)
		{
			iVar2 = (*uParam0)[iVar0]->f_3;
		}
		else
		{
			iVar2 = get_player_ped(player_id());
		}
		if (!func_1656(iVar2, &iVar3))
		{
			return;
		}
		if (iVar3 == 0)
		{
			switch (uParam0[iVar0])
			{
				case 23:
					func_1684(1);
					break;
				case 24:
					func_1684(0);
					break;
				case 25:
					func_1685(0);
					break;
				case 27:
					_apply_ped_metaped_outfit((*uParam0)[iVar0]->f_1, iVar2, true, false);
					bVar1 = true;
					break;
				case 28:
					func_1686(iVar2, (*uParam0)[iVar0]->f_1);
					bVar1 = true;
				case 29:
					_set_ped_body_component(iVar2, (*uParam0)[iVar0]->f_1);
					bVar1 = true;
					break;
			}
		}
		func_1655(uParam0[iVar0]);
		iVar0++;
	}
	if (bVar1)
	{
		_update_ped_variation(iVar2, false, true, true, true, func_1652((*uParam0)[iVar0]->f_2, 16));
	}
	Global_1946804->f_851 = 0;
}

void func_563(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_564()
{
	return (func_1687() || func_400());
}

bool func_565()
{
	if (Global_1935436->f_18.f_1)
	{
		return true;
	}
	if ((Global_1935436->f_8 >= 10f && func_1688()) && func_1689())
	{
		func_1690();
		return true;
	}
	return false;
}

void func_566()
{
	if (!does_entity_exist(Global_35) || is_entity_dead(Global_35))
	{
		func_1691(1);
		func_1692();
	}
	func_1693();
	switch (Global_1935436->f_18.f_11)
	{
		case 0:
			func_1694(1);
			Global_1935436->f_18.f_4 = 0;
			break;
		case 1:
			if (!Global_1935436->f_18.f_4)
			{
				request_anim_dict(func_1695());
				Global_1935436->f_18.f_4 = 1;
			}
			if (has_anim_dict_loaded(func_1695()))
			{
				func_1694(2);
			}
			break;
		case 2:
			animpostfx_play("PlayerDrunk01_PassOut");
			Global_1935436->f_18.f_7 = get_game_timer();
			func_1694(3);
			break;
		case 3:
			if (get_game_timer() >= Global_1935436->f_18.f_7 + 3400)
			{
				if (is_ped_walking(Global_35) || is_ped_running(Global_35))
				{
					bVar0 = true;
				}
				if (func_1696(Global_35))
				{
					bVar0 = false;
				}
				if (is_ped_using_any_scenario(Global_35) && _get_scenario_point_type_ped_is_using(Global_35) == -1241981548)
				{
					bVar0 = false;
				}
				if (bVar0 && !Global_1935436->f_18)
				{
					task_play_anim(Global_35, func_1695(), func_1697(), 4f, -2f, 5000, 0, 0f, false, 0, false, 0, false);
					Global_1935436->f_18 = 1;
				}
				if (Global_1935436->f_18.f_4)
				{
					remove_anim_dict(func_1695());
					Global_1935436->f_18.f_4 = 0;
				}
				func_1694(4);
			}
			break;
		case 4:
			hide_hud_and_radar_this_frame();
			if (get_game_timer() >= Global_1935436->f_18.f_7 + 5500)
			{
				do_screen_fade_out(0);
				if (_is_anim_scene_loaded(Global_1935436->f_18.f_6, true, false))
				{
					bVar4 = func_1698();
					iVar1 = func_630();
					func_1219(&iVar1, 0, 0, 8, 0, 0, 0, 0);
					func_1699(iVar1);
					if (bVar4)
					{
						func_1700(1, 0, 0);
					}
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					_0x9587913b9e772d29(Global_35, 0);
					Global_1935436->f_18.f_8 = { func_1701(get_player_index()) };
					if (get_ground_z_for_3d_coord(Global_1935436->f_18.f_8, &uVar2, false))
					{
						Global_1935436->f_18.f_8 = { Global_1935436->f_18.f_8, Global_1935436->f_18.f_8.f_1, uVar2 };
					}
					Global_1935436->f_18.f_2 = 0;
					Global_1935436->f_18.f_5 = 0;
					func_1694(5);
				}
			}
			break;
		case 5:
			hide_hud_and_radar_this_frame();
			if (Global_43891)
			{
				Global_1935436->f_18.f_12.f_3 = { 1421.257f, -7328.976f, 80.5118f };
				Global_1935436->f_18.f_12.f_6 = { 0f, 0f, 240f };
				set_anim_scene_origin(Global_1935436->f_18.f_6, Global_1935436->f_18.f_12.f_3, Global_1935436->f_18.f_12.f_6, 2);
				set_anim_scene_entity(Global_1935436->f_18.f_6, "player_zero", Global_35, 0);
				func_1694(6);
			}
			else if (func_1702(Global_1935436->f_18.f_8, &(Global_1935436->f_18.f_12), &(Global_1935436->f_18.f_2), 1, 1, 1127481344, 1101004800, -0.01f, 40f, 0))
			{
				if (!func_1703(Global_1935436->f_18.f_8, 1103626240) && !func_1704(Global_1935436->f_18.f_8, 1103626240))
				{
					set_anim_scene_origin(Global_1935436->f_18.f_6, Global_1935436->f_18.f_12.f_3, Global_1935436->f_18.f_12.f_6, 2);
					set_anim_scene_entity(Global_1935436->f_18.f_6, "player_zero", Global_35, 0);
					func_1694(6);
				}
				else
				{
					func_1694(8);
				}
			}
			else if (Global_1935436->f_18.f_2)
			{
				if (Global_1935436->f_18.f_5 < 3)
				{
					Global_1935436->f_18.f_2 = 0;
					Global_1935436->f_18.f_5++;
					func_1705(&(Global_1935436->f_18.f_12), 1, 0);
				}
				else
				{
					func_1694(8);
				}
			}
			break;
		case 6:
			hide_hud_and_radar_this_frame();
			if (!_is_anim_scene_started(Global_1935436->f_18.f_6, false))
			{
				if (!func_138(get_player_index(), 1, 0, 1))
				{
					do_screen_fade_in(0);
					animpostfx_play("PlayerWakeUpDrunk");
					func_1691(1);
					start_anim_scene(Global_1935436->f_18.f_6);
					func_1694(7);
				}
				else
				{
					func_1691(1);
					func_1692();
					reset_anim_scene(Global_1935436->f_18.f_6, 0);
					if (_does_anim_scene_exist(Global_1935436->f_18.f_6))
					{
						_delete_anim_scene(Global_1935436->f_18.f_6);
					}
					func_1705(&(Global_1935436->f_18.f_12), 1, 0);
					Global_1934266->f_59 = 1;
					func_283();
					func_284(2);
				}
			}
			break;
		case 7:
			hide_hud_and_radar_this_frame();
			if (_0xf94692eb9dc15d74(Global_1935436->f_18.f_6, 0))
			{
				func_1694(8);
			}
			break;
		case 8:
			if (func_1698())
			{
				iVar3 = func_1706(func_1701(get_player_index()), 15f, -1);
				iVar5 = func_1303(iVar3);
				if (does_entity_exist(iVar5) && !is_entity_dead(iVar5))
				{
					func_1402(iVar5, "POST_PASSOUT_COMMENT", -1454469014, 0, 1, 0, 0, 1);
				}
			}
			func_1705(&(Global_1935436->f_18.f_12), 1, 0);
			if (!is_screen_fading_in())
			{
				do_screen_fade_in(3000);
			}
			func_1691(1);
			func_1692();
			reset_anim_scene(Global_1935436->f_18.f_6, 0);
			if (_does_anim_scene_exist(Global_1935436->f_18.f_6))
			{
				_delete_anim_scene(Global_1935436->f_18.f_6);
			}
			break;
	}
}

void func_567()
{
	if (func_1707() && Global_1955569->f_1 <= get_game_timer())
	{
		func_1708(0);
	}
}

void func_568()
{
}

int func_569()
{
	if (Global_16 || Global_18)
	{
		Global_1347477->f_154 = get_game_timer() + 5000;
		return 0;
	}
	if (Global_1347477->f_154 > get_game_timer())
	{
		return 0;
	}
	if (func_131(&Global_1935630, 131072))
	{
		return 0;
	}
	if (Global_1914319->f_17376 || func_1709())
	{
		return 0;
	}
	return 1;
}

void func_570(var uParam0, float fParam1, bool bParam2)
{
	if (!is_ped_injured(Global_35))
	{
		fVar1 = _get_player_health(player_id());
		if (fVar1 <= 1f && !_0x200373a8df081f22(Global_35, 0))
		{
			bVar3 = true;
			if (!uParam0->f_3)
			{
				uParam0->f_3 = 1;
			}
		}
		else
		{
			func_1710(uParam0);
		}
		fVar0 = func_1636(0);
		if (bParam2)
		{
			if (fVar0 <= -100f)
			{
				if (!uParam0->f_2)
				{
					func_1711(func_847(-1447203283), 1);
					if (!bVar3 && !func_1712())
					{
						func_1713(0);
					}
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
			if (fVar0 < fParam1)
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 0;
			}
			fVar2 = (IntToFloat(get_ped_max_health(Global_35)) * 0.1f);
			if ((fVar1 < fVar2 && !func_1712()) && fVar0 < 0f)
			{
				func_1714(fVar1, fVar2);
			}
			else
			{
				func_1715();
			}
		}
		else
		{
			*uParam0 = 0;
			func_1715();
		}
		if (uParam0->f_1 != *uParam0)
		{
			_0xcb9401f918cb0f75(Global_35, func_1716(0), *uParam0, -1);
			uParam0->f_1 = *uParam0;
		}
	}
}

void func_571(var uParam0, float fParam1, bool bParam2)
{
	if (!is_ped_injured(Global_35))
	{
		if (_get_player_stamina(player_id()) <= 1f && !_0x200373a8df081f22(Global_35, 1))
		{
			bVar1 = true;
			if (func_1717(_get_attribute_core_value(Global_35, 1)) < func_1636(1) || ((is_ped_sprinting(Global_35) || is_ped_running(Global_35)) || is_ped_swimming(Global_35)))
			{
				if (!uParam0->f_12)
				{
					uParam0->f_12 = 1;
				}
			}
			else
			{
				func_1718(uParam0);
			}
		}
		else
		{
			func_1718(uParam0);
		}
		fVar0 = func_1636(1);
		if (bParam2)
		{
			if (fVar0 <= -100f)
			{
				if (!uParam0->f_11)
				{
					func_1711(func_847(-1740872260), 1);
					if (!bVar1 && !func_1712())
					{
						func_1713(1);
					}
					uParam0->f_11 = 1;
				}
			}
			else
			{
				uParam0->f_11 = 0;
			}
			if (fVar0 < fParam1)
			{
				uParam0->f_9 = 1;
			}
			else
			{
				uParam0->f_9 = 0;
			}
		}
		else
		{
			uParam0->f_9 = 0;
		}
		if (uParam0->f_10 != uParam0->f_9)
		{
			_0xcb9401f918cb0f75(Global_35, func_1716(1), uParam0->f_9, -1);
			uParam0->f_10 = uParam0->f_9;
		}
	}
}

void func_572(var uParam0, float fParam1, bool bParam2)
{
	if (!is_ped_injured(Global_35) && is_player_playing(player_id()))
	{
		if (_0xdf66a37936d5f3d9(player_id()) <= 0f && !_0x200373a8df081f22(Global_35, 2))
		{
			if (_0xb16223cb7da965f0(player_id()) && !func_1719())
			{
				if (!uParam0->f_8)
				{
					animpostfx_play("PlayerRPGCoreDeadEye");
					uParam0->f_8 = 1;
				}
			}
			else
			{
				func_1720(uParam0);
			}
		}
		else
		{
			func_1720(uParam0);
		}
		fVar0 = func_1636(2);
		if (bParam2)
		{
			if (fVar0 <= -100f)
			{
				if (!uParam0->f_7)
				{
					func_1711(func_847(-2053203075), 1);
					if (!func_1712())
					{
						func_1713(2);
					}
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 0;
			}
			if (fVar0 < fParam1)
			{
				uParam0->f_5 = 1;
			}
			else
			{
				uParam0->f_5 = 0;
			}
		}
		else
		{
			uParam0->f_5 = 0;
		}
		if (uParam0->f_6 != uParam0->f_5)
		{
			_0xcb9401f918cb0f75(Global_35, func_1716(2), uParam0->f_5, -1);
			uParam0->f_6 = uParam0->f_5;
		}
	}
}

void func_573(var uParam0, bool bParam1)
{
	iVar5 = player_ped_id();
	fVar6 = 0f;
	fVar7 = 0f;
	if (!bParam1)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		if (animpostfx_is_running("PlayerRPGCore"))
		{
			_0xc5cb91d65852ed7e("PlayerRPGCore");
		}
		return;
	}
	if (uParam0->f_3)
	{
		if (uParam0->f_8 || uParam0->f_12)
		{
			fVar0 = 0f;
			fVar1 = 0f;
			fVar2 = 1f;
		}
		else
		{
			fVar0 = 1f;
			fVar1 = 0f;
			fVar2 = 0f;
		}
		bVar3 = true;
		bVar4 = true;
	}
	else if (uParam0->f_12)
	{
		if (uParam0->f_8)
		{
			fVar0 = 0f;
			fVar1 = 0f;
			fVar2 = 1f;
		}
		else
		{
			fVar0 = 0f;
			fVar1 = 1f;
			fVar2 = 0f;
		}
		bVar3 = true;
	}
	else
	{
		uParam0->f_4 = 0f;
		uParam0->f_13 = 0f;
		uParam0->f_14 = 0f;
		if (animpostfx_is_running("PlayerRPGCore"))
		{
			_0xc5cb91d65852ed7e("PlayerRPGCore");
		}
	}
	if (bVar3)
	{
		fVar9 = ((get_frame_time() * 1000f) / 2000f);
		if (uParam0->f_4 != fVar0)
		{
			fVar8 = func_1721(fVar0 > uParam0->f_4, 1f, -1f);
			uParam0->f_4 = (uParam0->f_4 + (fVar8 * fVar9));
			uParam0->f_4 = func_1722(uParam0->f_4, 0f, 1f);
		}
		if (uParam0->f_13 != fVar1)
		{
			fVar8 = func_1721(fVar1 > uParam0->f_13, 1f, -1f);
			uParam0->f_13 = (uParam0->f_13 + (fVar8 * fVar9));
			uParam0->f_13 = func_1722(uParam0->f_13, 0f, 1f);
		}
		if (uParam0->f_14 != fVar2)
		{
			fVar8 = func_1721(fVar2 > uParam0->f_14, 1f, -1f);
			uParam0->f_14 = (uParam0->f_14 + (fVar8 * fVar9));
			uParam0->f_14 = func_1722(uParam0->f_14, 0f, 1f);
		}
		if (!animpostfx_is_running("PlayerRPGCore"))
		{
			animpostfx_play("PlayerRPGCore");
		}
		else if (bVar4 && !is_audio_scene_active("PLAYER_HEALTH_CORE_EMTPY_VFX_SCENE"))
		{
			play_sound_frontend("HEALTH_VFX_FLASH", "Player_Core_Empty_Sounds", true, 0);
			start_audio_scene("PLAYER_HEALTH_CORE_EMTPY_VFX_SCENE");
			fVar6 = to_float(_get_attribute_core_value(iVar5, func_1635(0)));
			fVar7 = (1f - (fVar6 * 0.01f));
			set_audio_scene_variable("PLAYER_HEALTH_CORE_EMTPY_VFX_SCENE", "coreRatioApply", fVar7);
		}
		_0xf972f0ab16dc5260("PlayerRPGCore", 1, uParam0->f_4);
		_0xf972f0ab16dc5260("PlayerRPGCore", 2, uParam0->f_13);
		_0xf972f0ab16dc5260("PlayerRPGCore", 3, uParam0->f_14);
	}
}

void func_574()
{
	fVar0 = &Global_40.f_11095.f_11[13];
	if (Global_1347477->f_201)
	{
		if (func_1723(fVar0))
		{
			Global_1347477->f_196 = func_1724(fVar0);
			set_attribute_points(Global_35, 13, func_1631(ceil(fVar0)));
			func_1725(Global_1347477->f_196);
			func_1726(1);
			Global_1347477->f_201 = 0;
		}
	}
	if (((is_screen_faded_out() && (!func_272(0, 0, 1) || func_576())) && !func_130(34)) && !func_274(Global_1347343->f_2))
	{
		if (!Global_1347477->f_198)
		{
			iVar1 = func_1724(fVar0);
			iVar2 = iVar1;
			if (Global_1347477->f_196 != iVar1)
			{
				iVar3 = (iVar1 - Global_1347477->f_196);
				iVar4 = (iVar3 / absi(iVar3));
				Global_1347477->f_197 = iVar4;
				if (absi(iVar3) > 1)
				{
					iVar2 = (Global_1347477->f_196 + iVar4);
				}
				if (func_1723(to_float(func_1727(iVar2))))
				{
					Global_1347477->f_196 = iVar2;
					set_attribute_points(Global_35, 13, func_1631(func_1727(iVar2)));
					func_1725(iVar2);
					func_1726(1);
				}
			}
			Global_1347477->f_198 = 1;
		}
		else if (func_131(&Global_1935630, 131072))
		{
			Global_1347477->f_199 = 1;
		}
	}
	else if (Global_1347477->f_198)
	{
		if ((func_361(17) && (!is_radar_hidden() || !is_radar_preference_switched_on())) && is_gameplay_cam_rendering())
		{
			if (!Global_1347477->f_199)
			{
				func_737(91, 0);
				if (Global_1347477->f_197 > 0)
				{
					_set_core_icon(12);
				}
				else
				{
					_set_core_icon(11);
				}
				if (Global_1347477->f_196 == 10)
				{
					func_737(92, 0);
				}
				else if (Global_1347477->f_196 == -10)
				{
					func_737(93, 0);
				}
			}
			Global_1347477->f_197 = 0;
			Global_1347477->f_199 = 0;
			Global_1347477->f_198 = 0;
		}
	}
}

void func_575()
{
	if (!Global_16)
	{
		return;
	}
	if (has_anim_event_fired(Global_35, -1199973157))
	{
		func_1728(1f, 0);
	}
	if (has_anim_event_fired(Global_35, 211722178))
	{
		func_1728(1f, 0);
	}
	if (has_anim_event_fired(Global_35, 1127451883))
	{
		func_1728(1f, 0);
	}
}

bool func_576()
{
	return func_131(&Global_1935630, 4096);
}

void func_577(int iParam0)
{
	iVar0 = _get_attribute_core_value(Global_35, func_1635(iParam0));
	if (func_1631(ceil(&(Global_40.f_11095[iParam0]))) != iVar0)
	{
		Global_40.f_11095[iParam0] = func_1717(iVar0);
	}
}

void func_578()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_4)
	{
		if (_is_attribute_overpowered(Global_35, func_1635(iVar0)))
		{
			Global_40.f_11095.f_4[iVar0] = _0x4c9f782180712742(Global_35, func_1635(iVar0));
		}
		else
		{
			Global_40.f_11095.f_4[iVar0] = -1f;
		}
		if (_0x200373a8df081f22(Global_35, func_1635(iVar0)))
		{
			Global_40.f_11095.f_4[iVar0]->f_1 = _0xb429f58803d285b1(Global_35, func_1635(iVar0));
		}
		else
		{
			Global_40.f_11095.f_4[iVar0]->f_1 = -1f;
		}
		iVar0++;
	}
}

void func_579()
{
	Global_40.f_11095.f_39 = _0xdf66a37936d5f3d9(player_id());
}

bool func_580(int iParam0)
{
	switch (iParam0)
	{
		case -1841822177:
		case -1368511730:
		case -1040876935:
		case 126245522:
		case 296901449:
			return true;
	}
	return false;
}

void func_581()
{
	if (func_864())
	{
		iVar0 = func_1729();
		iVar1 = iVar0;
		if ((iVar1 != 0 && iVar1 != -214043612) && iVar1 != 1304158006)
		{
			bVar2 = false;
			if (_is_weapon_revolver(iVar0))
			{
				if (get_ped_ammo_by_type(Global_35, 1681219929) > 0 && (((get_ped_ammo_by_type(Global_35, 1232099469) > 0 || get_ped_ammo_by_type(Global_35, 78180283) > 0) || get_ped_ammo_by_type(Global_35, -2084181920) > 0) || get_ped_ammo_by_type(Global_35, 1243983880) > 0))
				{
					bVar2 = true;
				}
			}
			else if (_is_weapon_pistol(iVar0))
			{
				if (get_ped_ammo_by_type(Global_35, 1950175060) > 0 && (((get_ped_ammo_by_type(Global_35, 836939099) > 0 || get_ped_ammo_by_type(Global_35, 1185302722) > 0) || get_ped_ammo_by_type(Global_35, -1411815376) > 0) || get_ped_ammo_by_type(Global_35, 236338048) > 0))
				{
					bVar2 = true;
				}
			}
			else if (_is_weapon_repeater(iVar0))
			{
				if (get_ped_ammo_by_type(Global_35, -1330115686) > 0 && (((get_ped_ammo_by_type(Global_35, -578347576) > 0 || get_ped_ammo_by_type(Global_35, -1668585578) > 0) || get_ped_ammo_by_type(Global_35, 231465488) > 0) || get_ped_ammo_by_type(Global_35, 1148521608) > 0))
				{
					bVar2 = true;
				}
			}
			else if (_is_weapon_rifle(iVar0))
			{
				if (get_ped_ammo_by_type(Global_35, 218444191) > 0 && (((get_ped_ammo_by_type(Global_35, 1654725195) > 0 || get_ped_ammo_by_type(Global_35, 1838310467) > 0) || get_ped_ammo_by_type(Global_35, 1858824185) > 0) || get_ped_ammo_by_type(Global_35, 200254898) > 0))
				{
					bVar2 = true;
				}
			}
			else if (_is_weapon_shotgun(iVar0))
			{
				if (get_ped_ammo_by_type(Global_35, -1878508229) > 0 && ((get_ped_ammo_by_type(Global_35, -1077205471) > 0 || get_ped_ammo_by_type(Global_35, 314966081) > 0) || get_ped_ammo_by_type(Global_35, 588559146) > 0))
				{
					bVar2 = true;
				}
			}
			else if (_is_weapon_bow(iVar0))
			{
				if (((((get_ped_ammo_by_type(Global_35, 954660191) > 0 || get_ped_ammo_by_type(Global_35, -1040876935) > 0) || get_ped_ammo_by_type(Global_35, 296901449) > 0) || get_ped_ammo_by_type(Global_35, -1841822177) > 0) || get_ped_ammo_by_type(Global_35, 126245522) > 0) || get_ped_ammo_by_type(Global_35, -1368511730) > 0)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				iVar3 = (Global_40.f_7756 - 1);
				if (Global_40.f_7756[iVar3]->f_2 == -1 || Global_40.f_7756[iVar3]->f_2 == 597)
				{
					if (Global_40.f_7756[iVar3]->f_1 < 3 && (&Global_40.f_7756[iVar3] == 0 || get_game_timer() >= (&Global_40.f_7756[iVar3] + 600000)))
					{
						if (!func_768())
						{
							if (func_1730(1))
							{
								Global_1347477->f_176 = func_89("TF_ALT_AMMO", -2, 0, 0, 0, 1);
								Global_40.f_7756[iVar3]->f_2 = 597;
								Global_40.f_7756[iVar3]->f_1++;
								Global_40.f_7756[iVar3] = get_game_timer();
							}
						}
					}
				}
			}
		}
	}
	else if (func_1731(Global_1347477->f_176))
	{
		func_1732(1);
	}
}

void func_582()
{
	if (_0xb16223cb7da965f0(player_id()))
	{
		if (!Global_1347477->f_125)
		{
			func_1733();
		}
		func_1734();
	}
	else
	{
		func_1735();
	}
}

void func_583(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1736();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1737(iParam0);
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
	if (func_361(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_336())
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
	Global_40.f_11095.f_35 = func_892(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1736();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1738(iVar1);
		func_1626(func_530(), 0, 4000);
		func_1739(Global_40.f_11095.f_35);
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
		func_1740(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_1711(func_847(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1741(14))
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
					sParam4 = func_1742(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1743(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1743(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_1711(func_847(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1741(4))
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
					sParam4 = func_1742(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1743(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1743(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_847(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1744(10, 1);
	}
}

void func_584()
{
	func_1745(0, 18, -1135800718, 1898574875);
	func_1745(2, 20, -402975377, 1506296948);
	func_1745(1, 19, -2074936164, 308865989);
}

void func_585()
{
	if (!does_entity_exist(Global_35) || is_entity_dead(Global_35))
	{
		return;
	}
	if (!_0x23bf601a42f329a0(Global_35))
	{
		return;
	}
	switch (Global_36605)
	{
		case 1:
			iVar0[0] = 860033945;
			iVar0[1] = -594562071;
			iVar0[2] = 970310034;
			iVar0[3] = -1241684019;
			iVar0[4] = -1212426201;
			break;
		case 2:
			iVar0[0] = -594562071;
			iVar0[1] = 970310034;
			iVar0[2] = -1241684019;
			iVar0[3] = 860033945;
			iVar0[4] = -1212426201;
			break;
		case 3:
			iVar0[0] = 970310034;
			iVar0[1] = -1212426201;
			iVar0[2] = -594562071;
			iVar0[3] = -1241684019;
			iVar0[4] = 860033945;
			break;
		case 4:
			iVar0[0] = 970310034;
			iVar0[1] = -594562071;
			iVar0[2] = -1241684019;
			iVar0[3] = 860033945;
			iVar0[4] = -1212426201;
			break;
		case 6:
			iVar0[0] = -1212426201;
			iVar0[1] = 970310034;
			iVar0[2] = -594562071;
			iVar0[3] = -1241684019;
			iVar0[4] = 860033945;
			break;
		case 5:
			iVar0[0] = -1241684019;
			iVar0[1] = -594562071;
			iVar0[2] = 970310034;
			iVar0[3] = 860033945;
			iVar0[4] = -1212426201;
			break;
	}
	iVar13 = 0;
	iVar16 = 0;
	while (iVar16 < 5)
	{
		if (func_1746(&(iVar0[iVar16]), &iVar12, &iVar14, &iVar15, 0))
		{
			iVar13 = &iVar0[iVar16];
		}
		else
		{
			iVar16++;
		}
	}
	if (iVar13 == 0)
	{
		iVar16 = 0;
		while (iVar16 < 5)
		{
			if (func_1746(&(iVar0[iVar16]), &iVar12, &iVar14, &iVar15, 1))
			{
				iVar13 = &iVar0[iVar16];
			}
			else
			{
				iVar16++;
			}
		}
	}
	if (iVar12 == -1569615261 || iVar12 == 0)
	{
		return;
	}
	iVar17 = 0;
	if (iVar13 != -594562071)
	{
		iVar6[iVar17] = -594562071;
		iVar17++;
	}
	if (iVar13 != 970310034)
	{
		iVar6[iVar17] = 970310034;
		iVar17++;
	}
	if (iVar13 != 860033945)
	{
		iVar6[iVar17] = 860033945;
		iVar17++;
	}
	if (iVar13 != -1212426201)
	{
		iVar6[iVar17] = -1212426201;
		iVar17++;
	}
	if (iVar13 != -1241684019)
	{
		iVar6[iVar17] = -1241684019;
		iVar17++;
	}
	iVar16 = 0;
	while (iVar16 < iVar17)
	{
		if (func_1746(&(iVar6[iVar16]), &iVar18, &iVar19, &iVar20, 0))
		{
			bVar21 = true;
		}
		else
		{
			iVar16++;
		}
	}
	if (!bVar21)
	{
		iVar16 = 0;
		while (iVar16 < iVar17)
		{
			if (func_1746(&(iVar6[iVar16]), &iVar18, &iVar19, &iVar20, 1))
			{
			}
			else
			{
				iVar16++;
			}
		}
	}
	bVar22 = true;
	bVar23 = true;
	bVar25 = true;
	bVar27 = true;
	iVar28 = 0;
	iVar29 = 1;
	iVar30 = 1;
	iVar31 = 1;
	func_1747(&iVar28, 0, &iVar29, &iVar31);
	func_1747(&iVar28, 1, &iVar30, &iVar31);
	func_1747(&iVar24, 9, &bVar25, &bVar22);
	bVar33 = true;
	func_1747(&iVar32, 7, &bVar33, &bVar22);
	func_1747(&iVar26, 10, &bVar27, &bVar23);
	bVar35 = true;
	func_1747(&iVar34, 8, &bVar35, &bVar23);
	bVar36 = false;
	iVar37 = 10;
	iVar38 = 10;
	bVar40 = false;
	iVar42 = 0;
	while (iVar42 <= 1)
	{
		bVar43 = true;
		if (iVar42 == 0)
		{
			bVar43 = iVar29;
		}
		else
		{
			bVar43 = iVar30;
		}
		if (!bVar43)
		{
			iVar39 = _0xcad4fe9398820d24(Global_35, iVar41);
			if (iVar39 == 9 || iVar39 == 7)
			{
				if (!_is_weapon_bow(iVar28))
				{
					iVar24 = iVar28;
					bVar25 = false;
				}
				else
				{
					iVar32 = iVar28;
					bVar33 = false;
				}
				if (!bVar22)
				{
					bVar40 = true;
				}
				bVar22 = false;
			}
			else
			{
				if (!_is_weapon_bow(iVar28))
				{
					iVar26 = iVar28;
					bVar27 = false;
				}
				else
				{
					iVar34 = iVar28;
					bVar35 = false;
				}
				if (!bVar23)
				{
					bVar40 = true;
				}
				bVar23 = false;
			}
		}
		iVar42++;
	}
	if (bVar40)
	{
		if (Global_36605 != 5 && Global_36605 != 6)
		{
			return;
		}
	}
	func_1748(iVar24, iVar13, bVar25, &iVar0, &bVar36, &iVar37);
	func_1748(iVar32, iVar13, bVar33, &iVar0, &bVar36, &iVar37);
	func_1748(iVar26, iVar13, bVar27, &iVar0, &bVar36, &iVar38);
	func_1748(iVar34, iVar13, bVar35, &iVar0, &bVar36, &iVar38);
	if (bVar22)
	{
		if (bVar23)
		{
			set_current_ped_weapon(Global_35, iVar12, true, iVar14, false, false);
			if (iVar18 != -1569615261 && iVar18 != 0)
			{
				set_current_ped_weapon(Global_35, iVar18, true, iVar20, false, false);
			}
		}
		else if (!bVar36)
		{
			set_current_ped_weapon(Global_35, iVar12, true, iVar14, false, false);
		}
		else if (iVar18 != -1569615261 && iVar18 != 0)
		{
			set_current_ped_weapon(Global_35, iVar18, true, iVar19, false, false);
		}
	}
	else if (bVar23)
	{
		if (!bVar36)
		{
			set_current_ped_weapon(Global_35, iVar12, true, iVar15, false, false);
		}
		else if (iVar18 != -1569615261 && iVar18 != 0)
		{
			set_current_ped_weapon(Global_35, iVar18, true, iVar20, false, false);
		}
	}
	else if (!bVar36)
	{
		if (Global_36605 == 5 || Global_36605 == 6)
		{
			if (iVar37 > iVar38)
			{
				set_current_ped_weapon(Global_35, iVar12, true, iVar14, false, false);
			}
			else
			{
				set_current_ped_weapon(Global_35, iVar12, true, iVar15, false, false);
			}
		}
	}
	Global_36606 = { func_587() };
	Global_36610 = { func_587() };
}

int func_586(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

struct<4> func_587()
{
	return Var0;
}

void func_588(bool bParam0)
{
	if (bParam0)
	{
		func_1522(4);
	}
	func_1522(2);
	set_bit(&(Global_1956580->f_1), 0);
}

Vector3 func_589(int iParam0, int iParam1)
{
	bVar0 = &Global_43894[iParam0];
	vVar1 = { _0xf70f00013a62f866(bVar0) };
	fVar4 = func_1749(bVar0);
	if (func_1214(vVar1, 2834.069f, -1229.412f, 46.6618f, 25f, 1))
	{
		vVar11 = { get_entity_coords(iParam1, false, false) };
		if (get_distance_between_coords(vVar11, 2867.058f, -1249.136f, 45.25f, true) < get_distance_between_coords(vVar11, 2875.368f, -1226.459f, 45.2029f, true) && get_distance_between_coords(vVar11, 2867.058f, -1249.136f, 45.25f, true) < get_distance_between_coords(vVar11, 2804.836f, -1227.169f, 46.7774f, true))
		{
			vVar5 = { 2867.058f, -1249.136f, 45.25f };
		}
		else if (get_distance_between_coords(vVar11, 2875.368f, -1226.459f, 45.2029f, true) < get_distance_between_coords(vVar11, 2867.058f, -1249.136f, 45.25f, true) && get_distance_between_coords(vVar11, 2875.368f, -1226.459f, 45.2029f, true) < get_distance_between_coords(vVar11, 2804.836f, -1227.169f, 46.7774f, true))
		{
			vVar5 = { 2875.368f, -1226.459f, 45.2029f };
		}
		else
		{
			vVar5 = { 2804.836f, -1227.169f, 46.7774f };
		}
	}
	else
	{
		vVar5 = { func_1750(vVar1, fVar4, (fVar4 * 1.5f), vVar1.z) };
	}
	if (!_0xf256a75210c5c0eb(bVar0, vVar5) && get_safe_coord_for_ped(vVar5, false, &vVar8, 12))
	{
		vVar5 = { vVar8 };
	}
	else
	{
		vVar5 = { 0f, 0f, 0f };
	}
	return vVar5;
}

bool func_590(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0] && iParam1) != 0;
}

int func_591(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	(*Global_1897952)[iParam0]->f_1 = iVar0;
	return iVar0;
}

void func_592(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_593(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, 231, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		_0x2161278c6322f740(231, 16384, 0, -1, -1, iParam0);
	}
}

void func_594(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0] = (Global_1897952[iParam0] - (Global_1897952[iParam0] && iParam1));
}

void func_595(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	if (func_619(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_1751((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

bool func_596(int iParam0)
{
	if (!func_778(iParam0))
	{
		return false;
	}
	return func_1752(iParam0, 2);
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_598(int iParam0)
{
	if (!func_774(iParam0))
	{
		return false;
	}
	return func_783(iParam0, 2);
}

void func_599(int iParam0, int iParam1)
{
	if (!func_778(iParam0))
	{
		return;
	}
	func_791(func_597(iParam0), iParam1);
}

bool func_600(int iParam0)
{
	if (!func_282(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1753(iParam0));
}

int func_601(int iParam0)
{
	if (!func_774(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

void func_602(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!func_1754())
	{
		return;
	}
	sVar1 = func_1755(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (is_string_null_or_empty(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_774(iParam4))
	{
		if (func_282(iParam0))
		{
			iParam4 = func_597(func_1584(iParam0));
		}
		else
		{
			iParam4 = func_597(iParam1);
		}
	}
	if (func_774(iParam4))
	{
		iVar3 = func_601(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_1757(func_1756(iParam2));
	}
	else if ((func_1752(iParam1, 2) || func_783(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (is_ped_male(player_ped_id()))
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = _create_var_string(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_282(iParam0) && func_798(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = _create_var_string(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_1758(func_630());
		iVar5 = func_1759(func_630());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = _get_temperature_at_coords(Global_36);
		if (!_should_use_24_hour_clock())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_1760(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(674, sVar8, iVar4, func_1761(&cVar6, 109029619), sVar9, func_1761(&cVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!_should_use_metric_temperature())
			{
				fVar7 = func_1760(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, round(fVar7), 8);
			sVar2 = _create_var_string(162, sVar8, iVar4, func_1761(&cVar6, 109029619), func_1761(&cVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_1762(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_603(int iParam0)
{
	if (!func_778(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	func_789(iVar0);
	func_790(iVar0, func_601(iVar0));
}

void func_604(int iParam0)
{
	Global_1897952->f_41 = iParam0;
}

bool func_605(int iParam0)
{
	if (!func_709())
	{
		return true;
	}
	if (!func_767(3))
	{
		return 7 == iParam0;
	}
	return true;
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_607(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	if (func_617(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_1763((iVar1 + iVar0)))
			{
				func_1751((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_608(int iParam0)
{
	if (!func_778(iParam0))
	{
		return;
	}
	func_1764();
	switch (iParam0)
	{
		case 0:
			func_1765(5, -411244401);
			func_1765(10, -530650579);
			func_1765(11, -411244401);
			func_1765(12, -79992523);
			func_1765(13, -1608748833);
			func_1765(7, -1243003160);
			break;
		case 1:
			func_1765(5, -431794078);
			func_1765(10, -530650579);
			func_1765(11, 2024364203);
			func_1765(12, 1131021608);
			func_1765(13, -2064541187);
			func_1765(7, -604466256);
			break;
		case 2:
			func_1765(5, -715307145);
			func_1765(10, 1784992423);
			func_1765(11, -411244401);
			func_1765(12, 1784992423);
			func_1765(13, -1608748833);
			func_1765(7, 486487548);
			break;
		case 3:
			func_1765(5, -2064541187);
			func_1765(10, -530650579);
			func_1765(11, 2024364203);
			func_1765(12, 1131021608);
			func_1765(13, -2064541187);
			func_1765(7, 506825778);
			break;
		case 4:
			func_1765(5, -530650579);
			func_1765(10, -530650579);
			func_1765(11, 2024364203);
			func_1765(12, -1897088481);
			func_1765(13, -2064541187);
			func_1765(7, -604466256);
			func_1765(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_1765(5, -530650579);
			func_1765(10, -1608748833);
			func_1765(11, 1455354960);
			func_1765(12, -530650579);
			func_1765(13, -1608748833);
			func_1765(7, 188176855);
			break;
		case 8:
			func_1765(5, -79992523);
			func_1765(10, -79992523);
			func_1765(11, 796850253);
			func_1765(12, -838827775);
			func_1765(13, -79992523);
			func_1765(7, -1063650279);
			break;
		case 9:
			func_1765(5, -530650579);
			func_1765(10, -530650579);
			func_1765(11, 1455354960);
			func_1765(12, -79992523);
			func_1765(13, -2064541187);
			func_1765(7, -604466256);
			func_1765(8, 239028334);
			break;
		case 10:
			func_1765(5, -2064541187);
			func_1765(10, -530650579);
			func_1765(11, 1455354960);
			func_1765(12, 1131021608);
			func_1765(13, -2064541187);
			func_1765(7, -604466256);
			break;
		case 11:
			func_1765(5, -530650579);
			func_1765(10, -1074047115);
			func_1765(11, -1608748833);
			func_1765(12, -1897088481);
			func_1765(13, -1608748833);
			func_1765(7, 662736559);
			break;
		case 12:
			func_1765(5, -530650579);
			func_1765(10, -1608748833);
			func_1765(11, -1504621559);
			func_1765(12, 1131021608);
			func_1765(13, -2064541187);
			func_1765(7, 486487548);
			break;
	}
}

int func_609(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_654(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_654(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_82() != -1)
			{
				return 1624541293;
			}
			if (func_361(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_82() != -1)
			{
				return 1024208566;
			}
			if (func_361(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_82() != -1)
			{
				return 965626876;
			}
			if (func_1053((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_82() != -1)
			{
				return -497792649;
			}
			if (func_1053((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_361(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_403())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_82() != -1)
			{
				return -1990305778;
			}
			if (func_361(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_1766(iParam0);
		if (iVar0 != -1)
		{
			return func_610(iVar0, bParam1);
		}
	}
	return 0;
}

int func_610(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_82() != -1)
			{
				return -1308265478;
			}
			if (func_361(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_82() != -1)
			{
				return -650528936;
			}
			if (func_361(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_82() != -1)
			{
				return -877373104;
			}
			if (func_361(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_611(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_610(func_115(Global_36), 1);
	}
	if (func_1767(iParam0, iParam1))
	{
	}
}

void func_612(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

bool func_613(int iParam0)
{
	iVar0 = func_1768(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_614(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1286(1497516462);
			func_1287(2016141805);
			func_1287(1010885152);
			func_1287(-502324015);
			break;
		case 2016141805:
			func_1287(1497516462);
			func_1286(2016141805);
			func_1287(1010885152);
			func_1287(-502324015);
			break;
		case 1010885152:
			func_1287(1497516462);
			func_1287(2016141805);
			func_1286(1010885152);
			func_1287(-502324015);
			break;
		case -502324015:
			func_1287(1497516462);
			func_1287(2016141805);
			func_1287(1010885152);
			func_1286(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1287(-538889627);
			func_1287(-538880323);
			func_1287(-1056767524);
			func_1286(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1769();
			func_1286(iParam0);
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
			func_1770();
			func_1286(iParam0);
			break;
		case 2019386373:
			func_1287(-664252410);
			func_1287(2109952320);
			func_1286(2019386373);
			break;
		case -664252410:
			func_1287(2019386373);
			func_1287(2109952320);
			func_1286(-664252410);
			break;
		case 2109952320:
			func_1287(2019386373);
			func_1287(-664252410);
			func_1286(2109952320);
			break;
		case -1674179981:
			func_1287(-1835851517);
			func_1287(-1838352012);
			func_1286(-1674179981);
			break;
		case -1835851517:
			func_1287(-1674179981);
			func_1287(-1838352012);
			func_1286(-1835851517);
			break;
		case -1838352012:
			func_1287(-1674179981);
			func_1287(-1835851517);
			func_1286(-1838352012);
			break;
		case -1717960576:
			func_1287(210001842);
			func_1286(-1717960576);
			break;
		case 210001842:
			func_1287(-1717960576);
			func_1286(210001842);
			break;
		case -150493654:
			func_1287(-1271608261);
			func_1287(1846061697);
			func_1287(-1145519186);
			func_1286(-150493654);
			break;
		case -1271608261:
			func_1287(-150493654);
			func_1287(1846061697);
			func_1287(-1145519186);
			func_1286(-1271608261);
			break;
		case 1846061697:
			func_1287(-150493654);
			func_1287(-1271608261);
			func_1287(-1145519186);
			func_1286(1846061697);
			break;
		case -1145519186:
			func_1287(-150493654);
			func_1287(-1271608261);
			func_1287(1846061697);
			func_1286(-1145519186);
			break;
		case 1766284049:
			func_1287(280705402);
			func_1287(1926308480);
			func_1286(1766284049);
			break;
		case 280705402:
			func_1287(1766284049);
			func_1287(1926308480);
			func_1286(280705402);
			break;
		case 1926308480:
			func_1287(1766284049);
			func_1287(280705402);
			func_1286(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1287(439465264);
				func_1286(1609506757);
			}
			else
			{
				func_1287(1609506757);
				func_1287(439465264);
			}
			break;
		case 439465264:
			if (func_613(1609506757))
			{
				if (bParam1)
				{
					func_1286(439465264);
				}
				else
				{
					func_1287(439465264);
				}
			}
			break;
		case 1822001510:
			func_1287(-1612662716);
			func_1286(1822001510);
			break;
		case -1612662716:
			func_1287(1822001510);
			func_1286(-1612662716);
			break;
		case 1306158345:
			func_1287(1952610440);
			func_1287(-223469678);
			func_1287(-404698347);
			func_1287(1517904467);
			func_1286(1306158345);
			break;
		case 1952610440:
			func_1287(1306158345);
			func_1287(-223469678);
			func_1287(-404698347);
			func_1287(1517904467);
			func_1286(1952610440);
			break;
		case -223469678:
			func_1287(1306158345);
			func_1287(1952610440);
			func_1287(-404698347);
			func_1287(1517904467);
			func_1286(-223469678);
			break;
		case -404698347:
			func_1287(1306158345);
			func_1287(1952610440);
			func_1287(-223469678);
			func_1287(1517904467);
			func_1286(-404698347);
			break;
		case 1517904467:
			func_1287(1306158345);
			func_1287(1952610440);
			func_1287(-223469678);
			func_1287(-404698347);
			func_1286(1517904467);
			break;
		case 1376646519:
			func_1287(931649776);
			func_1287(-434590080);
			func_1287(1743048395);
			func_1287(449774763);
			func_1286(1376646519);
			break;
		case 931649776:
			func_1287(1376646519);
			func_1287(-434590080);
			func_1287(1743048395);
			func_1287(449774763);
			func_1286(931649776);
			break;
		case -434590080:
			func_1287(1376646519);
			func_1287(931649776);
			func_1287(1743048395);
			func_1287(449774763);
			func_1286(-434590080);
			break;
		case 1743048395:
			func_1287(1376646519);
			func_1287(931649776);
			func_1287(-434590080);
			func_1287(449774763);
			func_1286(1743048395);
			break;
		case 449774763:
			func_1287(1376646519);
			func_1287(931649776);
			func_1287(-434590080);
			func_1287(1743048395);
			func_1286(449774763);
			break;
		case -1414537028:
			func_1287(38162571);
			func_1287(1350391819);
			func_1287(54073871);
			func_1286(-1414537028);
			break;
		case 38162571:
			func_1287(-1414537028);
			func_1287(1350391819);
			func_1287(54073871);
			func_1286(38162571);
			break;
		case 1350391819:
			func_1287(-1414537028);
			func_1287(38162571);
			func_1287(54073871);
			func_1286(1350391819);
			break;
		case 54073871:
			func_1287(-1414537028);
			func_1287(38162571);
			func_1287(1350391819);
			func_1286(54073871);
			break;
		case 198200492:
			func_1286(198200492);
			func_1287(-1124061431);
			func_1287(52706132);
			func_1287(-259123672);
			break;
		case -1124061431:
			func_1287(198200492);
			func_1286(-1124061431);
			func_1287(52706132);
			func_1287(-259123672);
			break;
		case 52706132:
			func_1287(198200492);
			func_1287(-1124061431);
			func_1286(52706132);
			func_1287(-259123672);
			break;
		case -259123672:
			func_1287(198200492);
			func_1287(-1124061431);
			func_1287(52706132);
			func_1286(-259123672);
			break;
		case -919512195:
			func_1286(-919512195);
			func_1287(-1925798111);
			func_1287(420709909);
			func_1287(1703426636);
			break;
		case -1925798111:
			func_1286(-1925798111);
			func_1287(-919512195);
			func_1287(420709909);
			func_1287(1703426636);
			break;
		case 420709909:
			func_1286(420709909);
			func_1287(-919512195);
			func_1287(-1925798111);
			func_1287(1703426636);
			break;
		case 1703426636:
			func_1286(1703426636);
			func_1287(-919512195);
			func_1287(-1925798111);
			func_1287(420709909);
			break;
		case -1223121209:
			func_1286(-1223121209);
			func_1287(630808005);
			break;
		case 630808005:
			func_1286(630808005);
			func_1287(-1223121209);
			break;
		case 1453909576:
			func_1286(1453909576);
			func_1287(1643531967);
			break;
		case 1643531967:
			func_1286(1643531967);
			func_1287(1453909576);
			break;
		case 0:
			func_1286(0);
			func_1287(473295046);
			func_1287(-1738165526);
			break;
		case 473295046:
			func_1286(473295046);
			func_1287(0);
			func_1287(-1738165526);
			break;
		case -1738165526:
			func_1286(-1738165526);
			func_1287(0);
			func_1287(473295046);
			break;
		case 932909855:
			func_1286(932909855);
			func_1287(2051822093);
			break;
		case 2051822093:
			func_1286(2051822093);
			func_1287(932909855);
			break;
		case 405586984:
			func_1286(405586984);
			func_1287(1509509592);
			func_1287(-959357075);
			func_1287(-1311865656);
			break;
		case 1509509592:
			func_1286(1509509592);
			func_1287(405586984);
			func_1287(-959357075);
			func_1287(-1311865656);
			break;
		case -959357075:
			func_1286(-959357075);
			func_1287(1509509592);
			func_1287(405586984);
			func_1287(-1311865656);
			break;
		case -1311865656:
			func_1286(-1311865656);
			func_1287(1509509592);
			func_1287(-959357075);
			func_1287(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1286(-524145696);
			}
			else
			{
				func_1287(-524145696);
			}
			func_1287(1626481264);
			func_1287(282809459);
			break;
		case 282809459:
			func_1286(282809459);
			func_1287(1626481264);
			func_1287(-524145696);
			break;
		case 1626481264:
			func_1286(1626481264);
			func_1287(-524145696);
			func_1287(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1286(885203519);
			}
			else
			{
				func_1287(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1286(-1080627546);
			}
			else
			{
				func_1287(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_613(iParam0))
				{
					func_1286(iParam0);
				}
			}
			else if (func_613(iParam0))
			{
				func_1287(iParam0);
			}
			break;
	}
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_616(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_script_with_name_hash_exist(iParam0))
	{
		return;
	}
	if (_get_number_of_references_of_script_with_name_hash(iParam0) != 0)
	{
		script_thread_iterator_reset();
		iVar0 = script_thread_iterator_get_next_thread_id();
		while (iVar0 != 0)
		{
			if (iParam0 == _get_hash_of_thread(iVar0))
			{
				if (is_thread_active(iVar0, false))
				{
					force_cleanup_for_thread_with_this_id(iVar0, iParam1);
				}
			}
			iVar0 = script_thread_iterator_get_next_thread_id();
		}
	}
}

bool func_617(int iParam0, var uParam1, var uParam2)
{
	bVar0 = func_82() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_618(int iParam0, bool bParam1)
{
	if (!func_1179(iParam0))
	{
		return 0;
	}
	if (!func_1771(iParam0, 2))
	{
		return 0;
	}
	if (func_1772(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_1773(iParam0)))
	{
		return 1;
	}
	if (func_1771(iParam0, 1) && !bParam1)
	{
		func_1774(iParam0, 128);
		return 1;
	}
	func_1775(iParam0, 129);
	func_1776(iParam0);
	_0xfc77c5b44d5ff7c0(func_1773(iParam0));
	func_1777(iParam0, 0);
	return 1;
}

bool func_619(int iParam0, var uParam1, var uParam2)
{
	bVar0 = func_82() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_620(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_621(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_622()
{
	iVar2 = 0;
	bVar3 = func_82() == -1;
	iVar1 = 0;
	while (iVar1 < &Global_1898329)
	{
		if (func_274(Global_1898330[iVar1]) && func_133(Global_1898330[iVar1]))
		{
			if ((*Global_1898346)[iVar1]->f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = (*Global_1898346)[iVar1]->f_5;
					if (func_1778(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

bool func_623(int iParam0, int iParam1)
{
	return (func_1779(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_624(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_625(int iParam0, bool bParam1)
{
	if (!func_624(iParam0))
	{
		return;
	}
	if (func_628((*Global_1835011)[iParam0], 8192))
	{
		bVar0 = true;
	}
	(*Global_1835011)[iParam0]->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		(*Global_1835011)[iParam0]->f_63 |= 2;
		(*Global_1835011)[iParam0]->f_63 |= 8192;
	}
}

void func_626(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_1779(iParam1))
	{
		iParam1 = func_1084(func_649(iParam0));
		if (!func_1779(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_1780(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_768())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1732(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_1780(iParam0, -1) && func_1781(iParam0))
			{
				func_1782(iParam0, fParam5, iParam1, bParam2, 1);
				func_629((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_1783(iParam0)) && !Global_43891)
	{
		func_1782(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_623(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_357(iParam0)) && !func_623(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_633((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_660(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

void func_627(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_3}, 3);
	if ((func_82() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_7, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_7);
	}
}

bool func_628(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_629(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_630()
{
	return &Global_1899515;
}

int func_631(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_632(int iParam0, bool bParam1, int iParam2)
{
	if (func_320((*Global_1392626)[iParam0]->f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_1784(iParam0);
	}
	if (!is_thread_active((*Global_1392626)[iParam0]->f_21, false))
	{
		if (iParam2 == 1)
		{
			func_1785(iParam0);
		}
		func_1786(&((*Global_1392626)[iParam0]->f_11), 1, 0, 1);
		(*Global_1392626)[iParam0]->f_11 = 0;
	}
	func_697(&((*Global_1392626)[iParam0]->f_9), 1);
	if (!func_1787((*Global_1392626)[iParam0]->f_8, 1))
	{
		func_1788(&((*Global_1392626)[iParam0]->f_8), 1);
	}
	func_697(&((*Global_1392626)[iParam0]->f_9), 2);
}

void func_633(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_274(iParam0))
	{
		return;
	}
	if (func_133(iParam0))
	{
		func_1789(iParam0, 0, 2);
	}
	iVar0 = func_1084(iParam0);
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

void func_634(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_1790(iVar0) && is_bit_set(Global_40.f_9052, iVar0))
		{
			if (((*Global_1392626)[iVar0]->f_10 && iParam0) == 0)
			{
				func_1791(iVar0, iParam0);
			}
			func_1792(iVar0);
		}
		iVar0++;
	}
}

void func_635()
{
	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_1790(iVar0))
		{
			func_1784(iVar0);
		}
		iVar0++;
	}
}

bool func_636(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_637(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_638(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_636(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1793(iParam0);
	}
	if (func_637((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_640(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_1052((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1794(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_639(iParam0, 0);
	}
	func_1795(iParam0);
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

void func_639(int iParam0, bool bParam1)
{
	if (!func_636(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_1796(&((*Global_1347702)[iParam0]->f_14));
		func_640(&((*Global_1347702)[iParam0]->f_13), 16);
		func_1797(iParam0);
		if ((!func_84(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_640(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_1798(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_1799(iParam0, 16384);
			func_1801(iParam0, 1, func_1800(iParam0));
		}
	}
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_641()
{
	if (func_82() != -1)
	{
		return;
	}
	Global_1357549->f_1708 = 0;
	if (does_blip_exist(Global_1357549->f_1711))
	{
		remove_blip(&(Global_1357549->f_1711));
		iVar0 = func_1614(Global_40.f_4283);
		if (func_282(iVar0) && func_1802((*Global_1888801)[iVar0]->f_13))
		{
			func_1803((*Global_1888801)[iVar0]->f_13, 1560611276);
		}
		Global_1357549->f_1710 = 0;
	}
}

void func_642()
{
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
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2;
						if (func_624(iVar1))
						{
							func_625(iVar1, 0);
							func_626(iVar1, -1, 0, 1, 0, 0, 0);
							if (does_blip_exist((*Global_1835011)[iVar1]->f_27))
							{
								remove_blip(&((*Global_1835011)[iVar1]->f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

int func_643(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1804(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_644(int iParam0)
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

void func_645(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_1805(iParam0);
	*uParam1 = func_1806(iParam0);
	*uParam2 = func_1807(iParam0);
}

bool func_646(int iParam0, int iParam1)
{
	if (Global_12106[(*Global_1835011)[iParam0]->f_1]->f_1 == 2)
	{
		return true;
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return false;
	}
	if ((*Global_1898346)[iParam1]->f_1 & 1 == 0)
	{
		return false;
	}
	if ((*Global_1898346)[iParam1]->f_1 & 2048 != 0)
	{
		return true;
	}
	return false;
}

bool func_647(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_3}, 3);
	request_script(&uVar0);
	if (has_script_loaded(&uVar0))
	{
		iVar3 = iParam0;
		iVar5 = func_1084((*Global_1835011)[iParam0]->f_1);
		if (func_1808((*Global_1835011)[iParam0]->f_1))
		{
			func_1809(&iVar3, 1);
		}
		(*Global_1835011)[iParam0]->f_7 = start_new_script_with_args(&uVar0, &iVar3, 2, (*Global_1835011)[iParam0]->f_68);
		set_script_as_no_longer_needed(&uVar0);
		func_1810(2);
		func_626(iParam0, iVar5, 0, 1, 0, 0, 0);
		_set_wanted_intensity_for_player(player_id(), 0);
		func_775(func_795());
		func_1811((*Global_1835011)[iParam0]->f_1, 1, 0);
		func_633((*Global_1835011)[iParam0]->f_1);
		return true;
	}
	return false;
}

bool func_648()
{
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (_0xbaffde5f953720d9())
	{
		return false;
	}
	if (!func_1812())
	{
		return false;
	}
	if (!func_1813())
	{
		return false;
	}
	if (!func_1814())
	{
		return false;
	}
	if (func_1815())
	{
		return false;
	}
	return true;
}

int func_649(int iParam0)
{
	if (!func_624(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_650(int iParam0, int iParam1, int iParam2)
{
	if (Global_265238->f_79565.f_278 & 8 != 0)
	{
		return true;
	}
	if (&Global_1051043 != -1 && &Global_1051043 != iParam0)
	{
		return true;
	}
	if (iParam1 != 0 && func_1816(iParam1))
	{
		return true;
	}
	if (iParam2 != 0 && func_192(iParam2, 255))
	{
		return true;
	}
	if (Global_262777[&Global_1225639] > 2)
	{
		return true;
	}
	if (&Global_262150 >= 1)
	{
		return true;
	}
	if (func_1051())
	{
		return true;
	}
	if (Global_1572887->f_6 & 1 != 0)
	{
		if (&Global_1051043 == -1)
		{
			return true;
		}
	}
	if (Global_265238->f_79864 != 0 && _does_thread_exist(Global_265238->f_79864))
	{
		return true;
	}
	return false;
}

int func_651(bool bParam0, bool bParam1, bool bParam2)
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

bool func_652(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_653(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

bool func_654(int iParam0)
{
	if (!func_282(iParam0))
	{
		return false;
	}
	return func_798(iParam0, 33554432);
}

int func_655(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (!func_1817(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	iVar10 = func_1818(iParam0);
	if (iVar10 == 0)
	{
		return 0;
	}
	fVar11 = func_1819(iParam1);
	Var0.f_3 = { (*Global_1392915)[iParam2]->f_6 };
	if (func_1820(Global_36, Var0.f_3) > (fVar11 * fVar11))
	{
		return 0;
	}
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_6 = (*Global_1392915)[iParam2]->f_9;
	Var0.f_7 = (*Global_1392915)[iParam2]->f_2;
	Var0.f_8 = (*Global_1392915)[iParam2]->f_4;
	Var0.f_9 = func_1821(iParam1);
	if (func_1822(iParam0, Var0.f_3))
	{
		return 0;
	}
	request_script_with_name_hash(iVar10);
	if (has_script_with_name_hash_loaded(iVar10))
	{
		Global_1392915->f_121[iParam2]->f_4 = start_new_script_with_name_hash_and_args(iVar10, &Var0, 10, 6001);
		set_script_with_name_hash_as_no_longer_needed(iVar10);
		return 1;
	}
	return 0;
}

int func_656(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return 19547436;
	}
	switch (iParam0)
	{
		case 2:
			return 19547436;
		case 0:
			return 648454729;
		case 1:
			return 639632500;
		case 3:
			return 504839342;
		case 4:
			return 1221273613;
		case 5:
			return 1966390672;
		case 6:
			return -761450110;
		default:
			break;
	}
	return 0;
}

void func_657(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		disable_control_action(2, 578288361, false);
		disable_control_action(2, 1287709438, false);
		disable_control_action(2, -1046962283, false);
		disable_control_action(2, -258447629, false);
		disable_control_action(2, -209515122, false);
		if (iParam0 != 5)
		{
			disable_control_action(2, 782960533, false);
		}
	}
	if (func_667(iParam0) || iParam0 == 4)
	{
		set_ped_reset_flag(Global_35, 2, true);
		set_ped_reset_flag(Global_35, 219, true);
		set_ped_reset_flag(Global_35, 220, true);
		set_ped_reset_flag(Global_35, 187, true);
		set_ped_reset_flag(Global_35, 129, true);
		set_ped_reset_flag(Global_35, 168, true);
		set_ped_reset_flag(Global_35, 247, true);
		set_ped_reset_flag(Global_35, 21, true);
		set_ped_reset_flag(Global_35, 237, true);
	}
}

bool func_658(int iParam0, int iParam1)
{
	iVar0 = func_653(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iParam1 == 2)
	{
		return true;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	vVar1 = { func_1823(iVar0) + Vector(0.1f, 0f, 0f) };
	fVar4 = func_510(vVar1, Global_36);
	if (fVar4 > func_1824(iVar0))
	{
		return false;
	}
	if (get_ground_z_for_3d_coord(vVar1, &(vVar1.f_2), false))
	{
		if (Global_36.f_2 > (vVar1.z + 1.5f))
		{
			return false;
		}
		if (Global_36.f_2 < vVar1.z)
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_659()
{
	if (Global_1899528->f_202 != 0)
	{
		if (Global_1899528->f_202 == _0xc17f69e1418cd11f(1))
		{
			func_1606(1);
		}
		Global_1899528->f_202 = 0;
		Global_1899528->f_203 = 0;
	}
}

void func_660(int iParam0, int iParam1)
{
	if (!func_1779(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

int func_661(int iParam0)
{
	if (func_321(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_327(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

bool func_662(int iParam0)
{
	iVar0 = (*Global_1392915)[iParam0]->f_1;
	iVar1 = Global_1392915[iParam0];
	Global_1899528->f_203 = 0;
	if (!func_652(iVar0))
	{
		return false;
	}
	if (func_138(player_id(), 1, 0, 1) || func_139())
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (func_1825())
	{
		return false;
	}
	if (_0xe956c2340a76272e(player_id()) > 0.05f)
	{
		return false;
	}
	if (_0x038b1f1674f0e242(Global_35))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return false;
	}
	if (is_control_pressed(2, 130948705))
	{
		return false;
	}
	if (_0xb16223cb7da965f0(player_id()) || _0x45ab66d02b601fa7(player_id()))
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-310160435) > 0)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		return false;
	}
	if (_0x331550b212014b92(Global_35, 0))
	{
		return false;
	}
	if (is_control_pressed(2, -124244224))
	{
		return false;
	}
	if (is_screen_fading_out() || is_screen_faded_out())
	{
		return false;
	}
	if (get_current_ped_weapon(Global_35, &iVar2, true, 0, true))
	{
		if (iVar2 == -1016714371)
		{
			return false;
		}
		if (iVar2 == -160924582)
		{
			return false;
		}
		if (iVar2 == 191707516)
		{
			return false;
		}
	}
	if (is_ped_planting_bomb(Global_35))
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (is_ped_in_cover(Global_35, 0, 0))
	{
		return false;
	}
	if (is_player_free_aiming(player_id()))
	{
		return false;
	}
	if (is_player_targetting_anything(player_id()))
	{
		return false;
	}
	if (func_193(Global_35, 716706914))
	{
		if (get_current_ped_weapon(Global_35, &iVar2, true, 0, true) && iVar2 != -1569615261)
		{
			return false;
		}
	}
	if (func_1826(iVar1))
	{
		if (func_1827((*Global_1392915)[iParam0]->f_6, 2.5f))
		{
			return false;
		}
	}
	Global_1899528->f_203 = 1;
	if (_is_ped_carrying(Global_35))
	{
		return false;
	}
	if (func_667(iVar0))
	{
		if (Global_1392915->f_121[iParam0]->f_16 == 1)
		{
			Global_1899528->f_203 = 1;
			return false;
		}
		if (!is_entity_dead(Global_1935630->f_40) || is_ped_in_any_vehicle(Global_35, false))
		{
			return false;
		}
		if (func_1828((*Global_1392915)[iParam0]->f_6, (*Global_1392915)[iParam0]->f_5, 1))
		{
			Global_1899528->f_203 = 1;
			return false;
		}
		if (func_1829(iVar0, 1048576) || _get_number_of_references_of_script_with_name_hash(func_656(iVar0, 0)) > 1)
		{
			Global_1899528->f_203 = 7;
			return false;
		}
	}
	if (func_1830(iVar0) > 0)
	{
		if (!func_1831(iVar0))
		{
			Global_1899528->f_203 = 3;
			return false;
		}
	}
	if (!func_1832(iVar1))
	{
		Global_1899528->f_203 = 2;
		return false;
	}
	if (!func_1833(iVar1))
	{
		Global_1899528->f_203 = 6;
		return false;
	}
	if (func_1834(1) < (*Global_1392915)[iParam0]->f_10)
	{
		Global_1899528->f_203 = 8;
		return false;
	}
	if (func_1835(Global_35))
	{
		return false;
	}
	if (func_1836(iVar1))
	{
		if (Global_1392915->f_121[iParam0]->f_16 == 1)
		{
			Global_1899528->f_203 = 1;
			return false;
		}
		if (func_1837(iVar0) && iVar0 == 0)
		{
			if (!func_1838(iVar0, Global_1392915->f_121[iParam0]->f_6))
			{
				Global_1899528->f_203 = 5;
				return false;
			}
		}
		if (!func_1839(iVar1))
		{
			Global_1899528->f_203 = 4;
			return false;
		}
	}
	if (func_1840() == 2)
	{
		return false;
	}
	if (func_1837(iVar0) && iVar0 != 2)
	{
		if (!func_1838(iVar0, Global_1392915->f_121[iParam0]->f_6))
		{
			return false;
		}
	}
	if (func_521() || _is_ped_carrying(Global_35))
	{
		return false;
	}
	if (func_925())
	{
		if (Global_1935630->f_44 == 1549070292 || Global_1935630->f_44 == 1030402560)
		{
			return false;
		}
	}
	if (func_1841((*Global_1392915)[iParam0]->f_6, 2f))
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (func_1822(iVar0, (*Global_1392915)[iParam0]->f_6))
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (func_1842(iParam0))
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (func_400())
	{
		Global_1899528->f_203 = 1;
		return false;
	}
	if (func_1843(iVar0))
	{
		Global_1899528->f_203 = 0;
		return true;
	}
	return Global_1392915->f_121[iParam0]->f_18;
}

void func_663(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	if (Global_1899528->f_202 != 0)
	{
		return;
	}
	if (_0xc17f69e1418cd11f(1) != 0)
	{
		return;
	}
	if (get_frame_count() < Global_1899528->f_207 + 60)
	{
		return;
	}
	if (func_1844())
	{
		return;
	}
	if (!func_133((*Global_1392915)[iParam0]->f_4))
	{
		return;
	}
	if (func_124())
	{
		return;
	}
	iVar2 = func_1845(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	sVar3 = func_1846(iVar2);
	if (iVar2 == 3 && Global_1900325->f_24 == 0)
	{
		sVar3 = "MG_FILLET_SOLO";
	}
	switch (Global_1899528->f_203)
	{
		case 1:
			Global_1899528->f_202 = func_89(_create_var_string(10, "MG_UNAVAILABLE", sVar3), 10000, 0, 0, 0, 1);
			break;
		case 2:
			iVar0 = func_1847((*Global_1392915)[iParam0]->f_3);
			iVar1 = func_1848((*Global_1392915)[iParam0]->f_3);
			Global_1899528->f_202 = func_89(_create_var_string(2, "MG_TABLE_SHUT", iVar0, iVar1), 10000, 0, 0, 0, 1);
			break;
		case 6:
			Global_1899528->f_202 = func_89("MG_BAD_WEATHER", 10000, 0, 0, 0, 1);
			break;
		case 3:
			if (iVar2 == 4)
			{
				Global_1899528->f_202 = func_89("MG_COW_LOCKED", 10000, 0, 0, 0, 1);
			}
			else if (iVar2 == 5)
			{
				Global_1899528->f_202 = func_89("MG_CLEAN_LOCKED", 10000, 0, 0, 0, 1);
			}
			else if (&Global_1899528->f_53[iVar2] == 1)
			{
				Global_1899528->f_202 = func_89("MG_TIME_LOCKED1", 10000, 0, 0, 0, 1);
			}
			else
			{
				Global_1899528->f_202 = func_89(_create_var_string(2, "MG_TIME_LOCKED", &(Global_1899528->f_53[iVar2])), 10000, 0, 0, 0, 1);
			}
			break;
		case 7:
			Global_1899528->f_202 = func_89("MG_GAME_RESET", 10000, 0, 0, 0, 1);
			break;
		case 4:
			if (func_1843(iVar2))
			{
				Global_1899528->f_202 = func_89(_create_var_string(10, "MG_UNAVAILABLE", sVar3), 10000, 0, 0, 0, 1);
			}
			else
			{
				Global_1899528->f_202 = func_89(_create_var_string(10, "MG_NO_PEOPLE", sVar3), 10000, 0, 0, 0, 1);
			}
			break;
		case 5:
			Global_1899528->f_202 = func_89(_create_var_string(10, "MG_NO_DEALER", sVar3), 10000, 0, 0, 0, 1);
			break;
		case 8:
			Global_1899528->f_202 = func_89(_create_var_string(2, "MG_NO_MONEY"), 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_664(int iParam0, bool bParam1)
{
	if (bParam1 && !func_321(iParam0))
	{
		return false;
	}
	return !func_1212(iParam0, 4);
}

void func_665(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_321(iParam0))
	{
		return;
	}
	iVar0 = func_836(iParam0);
	if (bParam1)
	{
		func_1849(iParam0, 4);
		func_1850(iVar0, 1);
		func_1851(iVar0, 1);
	}
	else
	{
		func_1852(iParam0, 4);
		func_1851(iVar0, 0);
	}
}

void func_666()
{
	disable_control_action(2, -824104112, false);
	disable_control_action(2, 1663574939, false);
	disable_control_action(2, -2128655846, false);
	disable_control_action(2, 516589524, false);
}

bool func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_668(int iParam0, int iParam1)
{
	iVar0 = func_653(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_1845(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	iVar3 = func_656(iVar1, 0);
	if (_get_number_of_references_of_script_with_name_hash(iVar3) > 0)
	{
		func_661(iVar0);
		return 0;
	}
	request_script_with_name_hash(iVar3);
	if (iParam1 != -1)
	{
		func_1853(iParam1, 2);
	}
	if (func_1854())
	{
		func_661(iVar0);
		return 0;
	}
	else
	{
		iVar2 = func_1857(iVar1, func_1855(iVar0), func_1823(iVar0), func_1856(iVar0), 1, 0);
		if (iVar2 != -1 && func_1858(func_1823(iVar0), Global_35))
		{
			func_1859(iVar0);
			func_657(iVar1, 1);
		}
		else
		{
			func_661(iVar0);
		}
	}
	func_1860(iVar0);
	if (((func_199(Global_1392915->f_121[iVar0]->f_3, 1) && !func_1861(Global_1392915->f_121[iVar0]->f_3, 1)) && func_1862(iParam0)) || func_1808((*Global_1392915)[iVar0]->f_4))
	{
		disable_control_action(0, -822242784, false);
		disable_control_action(2, 782960533, false);
		Var5 = -1;
		Var5.f_1 = -1;
		Var5.f_2 = -1;
		Var5.f_4 = -1;
		Var5.f_11 = -1;
		Var5.f_12 = -1;
		Var5.f_23 = 6;
		Var5.f_30 = -1;
		Var5.f_31 = 255;
		Var5.f_21 = Global_1392915->f_121[iVar0]->f_6;
		if (func_1863(iParam0, &Var5, &uVar4, 1, 0))
		{
			func_1864(iParam0);
			func_1865();
			func_1866(iVar1);
			func_1867(iParam0);
			func_1868(iVar2);
			func_1778(iParam0, 0);
			if (iVar1 == 3)
			{
				func_1869(3, 2);
			}
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0, int iParam1)
{
	iVar0 = func_653(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_1845(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	iVar2 = func_656(iVar1, 0);
	request_script_with_name_hash(iVar2);
	func_1853(iParam1, 2);
	if (func_1854())
	{
		func_661(iVar0);
		return 0;
	}
	else
	{
		func_1859(iVar0);
		func_657(iVar1, 1);
	}
	if (((func_199(Global_1392915->f_121[iVar0]->f_3, 1) && !func_1861(Global_1392915->f_121[iVar0]->f_3, 1)) && func_1862(iParam0)) || func_1808((*Global_1392915)[iVar0]->f_4))
	{
		disable_control_action(0, -822242784, false);
		Var4 = -1;
		Var4.f_1 = -1;
		Var4.f_2 = -1;
		Var4.f_4 = -1;
		Var4.f_11 = -1;
		Var4.f_12 = -1;
		Var4.f_23 = 6;
		Var4.f_30 = -1;
		Var4.f_31 = 255;
		Var4.f_21 = Global_1392915->f_121[iVar0]->f_6;
		if (func_1863(iParam0, &Var4, &uVar3, 1, 0))
		{
			func_1778(iParam0, 0);
			if (iVar1 == 3)
			{
				func_1869(3, 2);
			}
			return 1;
		}
	}
	return 0;
}

float func_670(int iParam0, bool bParam1)
{
	if (bParam1 && !func_321(iParam0))
	{
		return 0f;
	}
	iVar0 = func_836(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

int func_671(int iParam0)
{
	if (!func_274(iParam0))
	{
		return -1;
	}
	return func_1807(func_644(iParam0));
}

int func_672(int iParam0)
{
	return Global_1934182[iParam0];
}

int func_673()
{
	return Global_1391438->f_414;
}

bool func_674()
{
	iVar0 = func_630();
	iVar1 = func_1758(iVar0);
	if (iVar1 >= 7)
	{
		return true;
	}
	return false;
}

int func_675(int iParam0)
{
	if (func_1870(iParam0))
	{
		return (*Global_1934182)[iParam0]->f_7;
	}
	return 0;
}

bool func_676(bool bParam0, vector3 vParam1)
{
	if (!_does_volume_exist(bParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(bParam0, vParam1);
}

bool func_677(int iParam0)
{
	return (Global_1934182->f_74 && iParam0) != 0;
}

int func_678(int iParam0)
{
	if (!func_1870(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 208;
		case 1:
			return 76;
		case 2:
			return 12;
		case 3:
			return 519;
	}
	return -1;
}

void func_679(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 - (Global_1934182->f_74 && iParam0));
}

int func_680(int iParam0, bool bParam1)
{
	if (is_thread_active(Global_1392388->f_1, false))
	{
		return 0;
	}
	if (bParam1)
	{
		if (iParam0 != func_1871())
		{
			if (!does_blip_exist(Global_1392388->f_10[iParam0]->f_10))
			{
				return 0;
			}
		}
	}
	if (!func_1872(iParam0))
	{
		return 0;
	}
	fVar0 = vdist2(get_entity_coords(player_ped_id(), true, false), Global_1392388->f_10[iParam0]->f_5);
	if (fVar0 < 160000f)
	{
		func_1873(iParam0);
	}
	if (iParam0 != func_1871())
	{
		if (fVar0 > 22500f)
		{
			return 0;
		}
	}
	if (func_1874(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_681(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0]->f_5 && iParam1) != 0;
}

bool func_682(int iParam0, int iParam1)
{
	return (Global_1392240->f_1[iParam0]->f_15 && iParam1) != 0;
}

void func_683(int iParam0, bool bParam1)
{
	if (!func_1875(iParam0))
	{
		return;
	}
	if (does_blip_exist(Global_1392240->f_1[iParam0]->f_5))
	{
		remove_blip(&(Global_1392240->f_1[iParam0]->f_5));
	}
	if (bParam1)
	{
		func_1876(iParam0);
	}
}

bool func_684(int iParam0)
{
	if (iParam0 == 6)
	{
		if (func_1877() || (func_1878() && func_336()))
		{
			return false;
		}
		else if ((!func_681(6, 16) && !func_681(6, 32)) && func_336())
		{
			return false;
		}
		else if (func_1879(6, 16384))
		{
			return false;
		}
		else if (func_681(6, 8))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_685(int iParam0)
{
	if (iParam0 == 1)
	{
		return false;
	}
	return true;
}

bool func_686(int iParam0, int iParam1)
{
	return (Global_1392240->f_1[iParam0]->f_16 && iParam1) != 0;
}

bool func_687(int iParam0)
{
	if (&Global_1879534)
	{
		return true;
	}
	if (Global_1879534->f_1)
	{
		return true;
	}
	return false;
}

bool func_688(int iParam0)
{
	iVar0 = func_1880(iParam0);
	if (!func_488(iVar0, 1) && iVar0 != -15)
	{
		func_1881(iVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6);
		return false;
	}
	return true;
}

bool func_689(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			iVar0[0] = 1265552111;
			if (func_1882(&iVar0))
			{
				func_1883(7, 0, 12, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_690(int iParam0)
{
	sVar0 = "homeinvasion";
	request_script(sVar0);
	if (!has_script_loaded(sVar0))
	{
		return false;
	}
	if (func_1884(iParam0))
	{
		return false;
	}
	vVar1.x = iParam0;
	vVar1.f_1 = Global_1392240->f_1[iParam0]->f_5;
	vVar1.f_2 = func_1885();
	Global_1392240 = start_new_script_with_args(sVar0, &vVar1, 3, 10000);
	set_script_as_no_longer_needed(sVar0);
	func_1886(iParam0, 512);
	return true;
}

void func_691(int iParam0, int iParam1)
{
	if (!func_682(iParam0, iParam1))
	{
		return;
	}
	Global_1392240->f_1[iParam0]->f_15 = (Global_1392240->f_1[iParam0]->f_15 - (Global_1392240->f_1[iParam0]->f_15 && iParam1));
}

bool func_692(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_693(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1887(iVar0))
		{
			fVar3 = func_1888(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_694(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_695(int iParam0, float fParam1)
{
	if (vdist2((*Global_1392626)[iParam0]->f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_1889(Global_1572864->f_8))
	{
		return false;
	}
	return true;
}

bool func_696(int iParam0)
{
	if (iParam0 == func_1889(Global_1572864->f_8))
	{
		return true;
	}
	if (&Global_40.f_9052.f_1[iParam0] != -15)
	{
		if (!func_488(&(Global_40.f_9052.f_1[iParam0]), 1))
		{
			return false;
		}
	}
	if (is_thread_active((*Global_1392626)[iParam0]->f_21, false))
	{
		return true;
	}
	if (func_1890(iParam0))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_654(26))
		{
			if ((*Global_1392626)[iParam0]->f_10 & 2048 == 0)
			{
				func_1791(iParam0, 2048);
			}
			return false;
		}
		else if (func_179(26))
		{
			if ((*Global_1392626)[iParam0]->f_10 & 2048 == 0)
			{
				func_1791(iParam0, 2048);
			}
			return false;
		}
	}
	if ((*Global_1392626)[iParam0]->f_12 != -1)
	{
		if (func_654((*Global_1392626)[iParam0]->f_12))
		{
			if ((*Global_1392626)[iParam0]->f_10 & 2048 == 0)
			{
				func_1791(iParam0, 2048);
			}
			return false;
		}
	}
	if ((*Global_1392626)[iParam0]->f_22 != -1)
	{
		if (!func_1269((*Global_1392626)[iParam0]->f_22))
		{
			return false;
		}
	}
	if (func_1787((*Global_1392626)[iParam0]->f_8, 1))
	{
		if (!func_1891() && func_695(iParam0, (*Global_1392626)[iParam0]->f_6))
		{
			return false;
		}
		else if (!is_sphere_visible((*Global_1392626)[iParam0]->f_24, (*Global_1392626)[iParam0]->f_5))
		{
			func_1892(&((*Global_1392626)[iParam0]->f_8), 1);
		}
	}
	return true;
}

void func_697(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_698(int iParam0)
{
	if (!func_274(iParam0))
	{
		return -1;
	}
	return func_1806(func_644(iParam0));
}

bool func_699(int iParam0)
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_636(iParam0))
	{
		return false;
	}
	return func_133((*Global_1347702)[iParam0]->f_15);
}

void func_700(int iParam0)
{
	if (func_741(179))
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_36 != -1822497728)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return;
	}
	else if (func_1893(iParam0))
	{
		return;
	}
	if (((does_blip_exist((*Global_1347702)[iParam0]->f_37) && is_blip_on_minimap((*Global_1347702)[iParam0]->f_37)) && vdist2(func_1800(iParam0), Global_36) < 10000f) && func_1894())
	{
		func_1895(179, (*Global_1347702)[iParam0]->f_37, 0);
	}
}

void func_701(int iParam0)
{
	if (func_741(180))
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_1893(iParam0))
	{
		return;
	}
	if ((does_blip_exist((*Global_1347702)[iParam0]->f_37) && is_blip_on_minimap((*Global_1347702)[iParam0]->f_37)) && func_1894())
	{
		func_1895(180, (*Global_1347702)[iParam0]->f_37, 0);
	}
}

bool func_702(int iParam0)
{
	if (func_643((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_1126(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_1800(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

bool func_703(int iParam0)
{
	if (does_script_exist(&((*Global_1347702)[iParam0]->f_4)))
	{
		request_script(&((*Global_1347702)[iParam0]->f_4));
		if (has_script_loaded(&((*Global_1347702)[iParam0]->f_4)))
		{
			Var0 = iParam0;
			Var0.f_1 = func_637((*Global_1347702)[iParam0]->f_13, 256);
			(*Global_1347702)[iParam0]->f_42 = start_new_script_with_args(&((*Global_1347702)[iParam0]->f_4), &Var0, 2, 7300);
			set_script_as_no_longer_needed(&((*Global_1347702)[iParam0]->f_4));
			func_633((*Global_1347702)[iParam0]->f_15);
			return true;
		}
	}
	return false;
}

void func_704(int iParam0)
{
	func_640(&((*Global_1347702)[iParam0]->f_13), 256);
	if (func_1052((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1794(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
}

bool func_705(int iParam0)
{
	return func_1211(iParam0) == 0;
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2061320468;
		case 2:
			return -709866131;
		case 3:
			return -1348173149;
		default:
			break;
	}
	return -589165916;
}

int func_707(int iParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_1897(0, func_1896(iParam1, 1), 11, 2116153146);
	}
	return func_1897(0, func_1896(iParam1, 1), 11, iParam1);
}

bool func_708(int iParam0, int iParam1)
{
	if (func_1898(&(Global_1391438->f_5), 8))
	{
		return false;
	}
	if (!func_1899(iParam0, &iVar0))
	{
		func_1789(iParam0, 0, 2);
		return false;
	}
	if (!func_623(iParam1, 64) && !is_thread_active(&(Global_1391438->f_206[iVar0]), false))
	{
		if (func_623(iParam1, 32))
		{
			if (!func_1900(Global_1391438->f_7[iVar0]))
			{
				return false;
			}
			iVar1 = Global_1391438->f_7[iVar0]->f_12;
			sVar2 = func_887(&(Global_1391438->f_7[iVar0]->f_58));
			if (is_thread_active(&(Global_1391438->f_206[iVar0]), false))
			{
				func_1853(iParam1, 64);
				return false;
			}
			if (!is_thread_active(&(Global_1391438->f_206[iVar1]), false))
			{
				Global_1391438->f_206[iVar1] = start_new_script_with_name_hash_and_args(get_hash_key(sVar2), Global_1391438->f_7[iVar0], 99, 6003);
				set_script_as_no_longer_needed(sVar2);
				func_1853(iParam1, 64);
				return true;
			}
		}
	}
	return func_623(iParam1, 64);
}

bool func_709()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_710(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_711(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 9);
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (is_entity_a_ped(Var0) && is_entity_a_ped(Var0.f_1))
	{
		iVar9 = get_ped_index_from_entity_index(Var0);
		iVar10 = get_ped_index_from_entity_index(Var0.f_1);
		if (func_1901(iVar9))
		{
			if (func_1902(iVar10))
			{
				if (func_1903(iVar9))
				{
					func_1904(iVar9);
				}
				else
				{
					func_1905(iVar9);
				}
				iVar11 = func_1906(iVar9);
				if (func_1907(iVar11))
				{
					func_1908(iVar11);
					func_1909(iVar11);
				}
			}
		}
	}
}

void func_712(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 9);
	if (!does_entity_exist(vVar0.x) || is_entity_dead(vVar0.x))
	{
		return;
	}
	if (vVar0.z != 0)
	{
		if (_0x705be297eebdb95d(vVar0.z))
		{
			decor_set_int(vVar0.x, "last_gun_damage_time_in_ms", func_1910());
		}
	}
}

void func_713(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 9);
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (is_entity_a_ped(vVar0.x))
	{
		iVar9 = get_ped_index_from_entity_index(vVar0.x);
		if (!get_ped_config_flag(iVar9, 385, false))
		{
			iVar10 = func_1242(get_ped_index_from_entity_index(vVar0.x), 1);
			if (iVar10 != -1)
			{
				func_1911(iVar10);
				if (_0x40851bcc33acd9ab(iVar9) && is_ped_a_player(get_ped_index_from_entity_index(vVar0.y)))
				{
					func_1603(Global_1310750->f_16071, 0, 0, 0, 0);
				}
			}
			if (_0xff584f097c17fa8f() && is_entity_a_ped(vVar0.y))
			{
				if (_0x118d476a6f1a13f1(iVar9) && vVar0.z == -1553120962)
				{
					bVar11 = true;
				}
				if (((iVar9 != Global_35 && !is_entity_dead(vVar0.y)) && get_ped_index_from_entity_index(vVar0.y) == Global_35) && !bVar11)
				{
					animpostfx_play("PedKill");
				}
			}
		}
	}
}

void func_714(int iParam0)
{
}

void func_715(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return;
	}
	get_event_data(0, iParam0, &Var0, 9);
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (is_entity_a_ped(Var0))
	{
		iVar9 = get_ped_index_from_entity_index(Var0);
		if (!does_entity_exist(iVar9))
		{
			return;
		}
		if (is_ped_a_player(iVar9))
		{
			start_audio_scene("DYING_SCENE");
		}
		else if (func_767(4) && func_113() != 8)
		{
			if (!func_741(549) && is_entity_a_ped(Var0.f_1))
			{
				iVar10 = get_ped_index_from_entity_index(Var0.f_1);
				if (is_entity_a_ped(iVar10))
				{
					if (func_1304(iVar10, 0))
					{
						if (iVar10 == Global_35)
						{
							if ((!func_138(player_id(), 1, 0, 1) && is_ped_human(iVar9)) && !func_1099())
							{
								if (get_entity_speed(Global_35) < 2f)
								{
									if (get_closest_vehicle_node(get_entity_coords(iVar9, true, false), &vVar11, 1, 3f, 0f))
									{
										if (func_526(iVar9, vVar11, 1) < 10f)
										{
											if (func_1912(Global_35, iVar9, 1, 1) < 15f)
											{
												func_737(549, 0);
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

void func_716(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 3);
	switch (iVar0)
	{
		case 641837477:
			func_1485(25);
			func_1913(43, 1, 1);
			func_1914(43, 0, 1, 0);
			break;
		case -1998874621:
			func_1915(75, 1);
			break;
		case -780847177:
			func_1004(20);
			break;
		case 1300356559:
			func_1004(21);
			break;
		case 1546064507:
			func_1004(22);
			break;
		case 784165212:
			func_1004(23);
			break;
		case -1273579357:
			func_1004(31);
			break;
		case 1490688289:
			func_1004(32);
			break;
		case 886079389:
			func_1004(33);
			break;
		case 1925927530:
			func_1004(34);
			break;
		case 852747612:
			func_1004(51);
			break;
		case -1737849651:
			func_1004(52);
			break;
		case 1014818289:
			func_1004(53);
			break;
		case -1236382161:
			func_1004(54);
			break;
		case -472309625:
			func_1916(-717208178, 0, 1065353216, 1, 0, 0);
			break;
		case 330866767:
			func_1916(891416187, 0, 1065353216, 1, 0, 0);
			break;
		case -1370552074:
			func_1916(-1205398647, 0, 1065353216, 1, 0, 0);
			break;
		case 88587571:
			func_1916(-1820566531, 0, 1065353216, 1, 0, 0);
			break;
		case -1792415772:
			break;
		case -26396867:
			break;
		case -947509055:
			func_1917();
			break;
		case -1166365038:
			func_1917();
			break;
		case 1906463669:
			func_1917();
			break;
		case 1133612787:
			func_1917();
			break;
		case -1001022556:
			func_1917();
			break;
		case -2001342216:
			func_1917();
			break;
		case -1679207648:
			func_1917();
			break;
		case -1453188990:
			func_1917();
			break;
		case 1288977178:
			func_1917();
			break;
		case -2134396111:
			if (func_741(441))
			{
				func_737(442, 0);
			}
			else
			{
				func_737(441, 0);
			}
			break;
		case -376933349:
			if (func_741(444))
			{
				func_737(444, 0);
			}
			break;
		case -173457503:
			if (func_741(445))
			{
				func_737(445, 0);
			}
			break;
		case -1807840498:
			if (func_741(446))
			{
				func_737(446, 0);
			}
			break;
		case -1307705188:
			if (func_741(447))
			{
				func_737(447, 0);
			}
			break;
		case 452651469:
			if (func_741(448))
			{
				func_737(448, 0);
			}
			break;
		case 222996590:
			if (func_741(449))
			{
				func_737(449, 0);
			}
			break;
		case -1545935426:
			if (func_741(450))
			{
				func_737(450, 0);
			}
			break;
		case -1885016671:
			if (func_741(451))
			{
				func_737(451, 0);
			}
			break;
		case -590668937:
			if (func_741(452))
			{
				func_737(452, 0);
			}
			break;
		case 1064835034:
			break;
		case -644596287:
			break;
		case 742749932:
			if (func_1918(-1349086674) || func_336())
			{
				func_737(454, 1);
			}
			else
			{
				func_737(453, 1);
			}
			break;
	}
}

int func_717(int iParam0)
{
	bVar0 = func_1919(iParam0);
	if (bVar0)
	{
		func_1711(func_1920(1546817274), 1);
		return 1;
	}
	return 0;
}

void func_718(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 4);
	if (is_ped_injured(Global_35))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0);
	if (!does_entity_exist(iVar4))
	{
		return;
	}
	iVar5 = get_ped_index_from_entity_index(Var0.f_1);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (_0xf49f14462f0ae27c(player_id()) != iVar5)
	{
		return;
	}
	vVar6 = { get_entity_coords(iVar5, true, false) };
	Var9 = { func_1921(0, 1, 0, -1) };
	func_1922(&Var9, 0, 1, 1);
	if (get_distance_between_coords(vVar6, func_1923(&Var9), true) < 200f)
	{
		return;
	}
	vVar13 = { func_1924() };
	if (Var0.f_2)
	{
		switch (Var0.f_3)
		{
			case 1:
			case 2:
			case 3:
				if (!func_276(vVar13) && get_distance_between_coords(vVar6, vVar13, true) < 200f)
				{
					func_1925(iVar5, Global_1913814, 8);
				}
				else if (func_1926(iVar5, -1))
				{
					func_1925(iVar5, Global_1913814, 9);
				}
				else
				{
					func_1925(iVar5, Global_1913814, 10);
				}
				break;
		}
	}
	func_1927(&Var9, vVar6);
}

void func_719(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 4);
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0);
	if (iVar4 != Global_35)
	{
		return;
	}
	if (is_entity_dead(iVar4))
	{
		return;
	}
	iVar5 = get_ped_index_from_entity_index(Var0.f_1);
	if (is_entity_dead(iVar5))
	{
		return;
	}
	if (_0xf49f14462f0ae27c(player_id()) != iVar5)
	{
		return;
	}
	if (Global_1222969->f_1196.f_35 != iVar5)
	{
		Global_1222969->f_1196.f_35 = iVar5;
		Global_1222969->f_1196.f_36 = 0;
	}
	bVar6 = false;
	iVar7 = Global_1225639->f_19;
	if ((Global_1222969->f_1196.f_36 + 45000) > iVar7)
	{
		bVar6 = true;
	}
	if (bVar6)
	{
		return;
	}
	if (!Var0.f_3)
	{
		return;
	}
	Var8 = { func_1921(0, 1, 0, -1) };
	func_1922(&Var8, 0, 1, 1);
	switch (Var0.f_2)
	{
		case 0:
			func_1925(iVar5, Global_1913814, 7);
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			func_1925(iVar5, Global_1913814, 6);
			break;
	}
	Global_1222969->f_1196.f_36 = iVar7;
}

void func_720(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 3);
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.x);
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.y);
	if (is_entity_dead(iVar4) || is_ped_injured(iVar4))
	{
		return;
	}
	if (vVar0.z != 2)
	{
		return;
	}
	func_1711(func_1627(-1811330370, -591306697), 1);
	compendium_horse_wild_broken(iVar4);
}

void func_721(int iParam0)
{
	if (func_82() == -1)
	{
		return;
	}
	get_event_data(0, iParam0, &vVar0, 10);
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	iVar12 = vVar0.x;
	iVar13 = iVar12;
	switch (iVar13)
	{
		case 31:
			iVar14 = 0;
			break;
		case 32:
			iVar14 = 1;
			break;
		case 33:
			iVar14 = 2;
			break;
		default:
			return;
	}
	bVar15 = false;
	if (_0xad03b03737ce6810(iVar11) == player_id())
	{
		bVar15 = true;
	}
	if (!bVar15)
	{
		if (iVar14 != 2)
		{
			return;
		}
	}
	func_1928(iVar11, iVar14);
}

void func_722(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!does_entity_exist(vVar0.z))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.z))
	{
		return;
	}
	iVar6 = vVar0.y;
	iVar7 = vVar0.x;
	iVar8 = get_ped_index_from_entity_index(vVar0.z);
	if (iVar7 != Global_35)
	{
		return;
	}
	if (is_entity_a_ped(iVar6))
	{
		iVar9 = get_ped_index_from_entity_index(iVar6);
		if (is_ped_human(iVar9))
		{
			return;
		}
	}
	if (func_883(iVar8))
	{
		iVar10 = func_884(iVar8);
		iVar11 = 0;
		iVar11 = func_1929(iVar6);
		if (func_231(iVar11, 0))
		{
			if (func_1145(iVar11))
			{
				if (_0xf59fde7b4d31a630(iVar6))
				{
					func_1930(iVar10, iVar11, 1);
				}
			}
		}
	}
	else
	{
		iVar12 = func_1929(iVar6);
		if (func_231(iVar12, 0))
		{
			if ((func_1145(iVar12) && func_1931(iVar12) != 0) && func_1013(func_1931(iVar12), &iVar13))
			{
				Global_1425228->f_2[iVar13] = iVar8;
			}
		}
	}
	iVar14 = func_1932(iVar8, iVar6);
}

void func_723(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return;
	}
	iVar4 = Var0.f_1;
	iVar5 = get_ped_index_from_entity_index(Var0.f_3);
	if (!does_entity_exist(Var0))
	{
		func_1934(func_1933(iVar4));
	}
	else
	{
		iVar6 = Var0;
		if (iVar6 != Global_35)
		{
			return;
		}
	}
	bVar7 = false;
	if (is_entity_a_mission_entity(iVar4))
	{
		bVar7 = true;
	}
	if (!bVar7)
	{
		_0xdc0a1f0ecec9f0c0(iVar4, 1f);
	}
	iVar8 = func_1935(iVar5, iVar4);
}

void func_724(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (Var0 != Global_35)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0.f_3);
	iVar5 = func_884(iVar4);
	switch (iVar5)
	{
		case 0:
		case 1:
			break;
		default:
			return;
	}
	if (!func_1936(iVar5))
	{
		return;
	}
	if (func_1937(iVar4, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!is_entity_a_ped(iVar6) && !_0x255b6db4e3ad3c3e(iVar6))
	{
		return;
	}
	func_1938(iVar5);
	if (!func_1939(iVar5))
	{
		func_1940(iVar5, 22);
		return;
	}
	func_1941(iVar5, 0);
	func_1940(iVar5, 21);
}

void func_725(bool bParam0)
{
	if (func_1942() && (bParam0 || func_488(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_630();
		}
		else
		{
			func_737(492, 1);
		}
		func_932(9, 0, 0, 0, 0);
	}
}

int func_726()
{
	return &(Global_1946804->f_1497.f_1[1]);
}

bool func_727(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582;
		case -1051664629:
			return -1472456118;
		case 1471627791:
			return -2120294484;
		case 1012091683:
			return -814448122;
		case 282876023:
			return 1279519416;
		case 1334801974:
			return 933586678;
		case -736147717:
			return 1612093252;
		case -245303732:
			return 530132198;
		case -1900633994:
			return -499492817;
		case -1511041621:
			return -1392593303;
		case -193909113:
			return -2091943191;
		case -929316746:
			return 1165676701;
		case -1147723761:
			return 1380556716;
		case 963009459:
			return -1140711191;
		case 602337354:
			return -1189021969;
		case -1471756535:
			return 862555979;
		case -2017785881:
			return -674783297;
		case -827216318:
			return 279124309;
		default:
			break;
	}
	return 0;
}

int func_729(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1943(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_1668(iParam2);
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_932(1, 64, 0, 0, 0);
		}
		else
		{
			func_932(1, 64, 1, iParam1, 0);
		}
	}
	func_1944(1);
	return 1;
}

void func_730()
{
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0];
	if (!func_1942() && func_727(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0] = func_728(iVar1);
	}
	func_1944(0);
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_1945();
	Global_40.f_7748.f_2 = func_726();
	func_1946(Global_1946804->f_2656, 0);
	func_1947();
}

void func_731(int iParam0, bool bParam1)
{
	Var0 = { func_1948(iParam0, 0, 0) };
	Var5 = { func_1949(iParam0, Var0, Var0.f_4, 0) };
	if (func_1950(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_221(0), &Var5, bParam1);
}

void func_732()
{
	func_1951(&(Global_1946804->f_2776));
	func_563(32768);
	func_1952(1108822547, 8, 6);
}

int func_733(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1948(iParam1, 1, 0) };
		iParam3 = func_1953(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1943(iParam1, iParam2, func_1649(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1954(1, (func_82() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1649(iParam3, 1)])
			{
				func_932(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_559(32768) && iParam1 != &Global_1946804->f_57[func_1649(iParam3, 1)])
			{
				func_732();
				func_932(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_932(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1955(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_932(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_734(0);
			func_1956(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_932(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_734(int iParam0)
{
	if (func_1652(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1957(Var0);
}

bool func_735(int iParam0)
{
	func_1958(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_736(int iParam0)
{
	func_1958(iParam0, &iVar0, &iVar1);
	func_1057(iVar0, iVar1);
}

void func_737(int iParam0, bool bParam1)
{
	func_1958(iParam0, &iVar0, &iVar1);
	if (!func_1959(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1960(iVar0, iVar1);
}

void func_738(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	func_1961(32768);
	func_1962(1108822547);
	Global_1946804->f_2776.f_1 = uParam0;
	Global_1946804->f_2776.f_3[0] = uParam1;
	Global_1946804->f_2776.f_3[1] = uParam2;
	Global_1946804->f_2776.f_3[2] = uParam3;
	Global_1946804->f_2776 = -1725579161;
	if (iParam4 != 0)
	{
		Global_1946804->f_2776.f_8 = iParam4;
		Global_1946804->f_2776.f_9 = uParam5;
		Global_1946804->f_2776.f_10 = uParam6;
		Global_1946804->f_2776.f_11 = uParam7;
	}
	Global_1946804->f_2776.f_12 = 1;
	Global_1946804->f_2776.f_13 = _0x3fcbb5fcfd968698(Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), 0);
}

bool func_739(int iParam0, int iParam1, bool bParam2)
{
	if (!func_231(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_232(iParam0);
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
		if (!func_1963(iParam0, 1))
		{
			return false;
		}
	}
	return func_210(iParam0, 0, bParam2) >= iParam1;
}

int func_740(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	if (!func_1964(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1965(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1966(iParam0, bParam2);
	iVar2 = 0;
	if (func_210(iParam0, 0, 0) == 0)
	{
		if (func_1967(iParam0))
		{
			iVar5 = func_1968(iParam0);
			iVar6 = func_1969(iVar5);
			iVar7 = func_1970(iVar6) + 1;
			func_1971(iVar5);
			if (func_1972(38))
			{
				func_737(483, 0);
			}
			else
			{
				func_737(482, 0);
			}
			if (iVar7 == func_1973(iVar6))
			{
				func_740(func_1974(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_709() && func_1975(4))
				{
					if (func_709() && (func_1976(38) || func_1972(38)))
					{
						func_1978(38, func_1974(iVar6), 0, 0, func_1977(), 0, -1, 0);
						func_1979(2);
					}
					else
					{
						func_1978(38, func_1974(iVar6), 0, 0, func_1977(), 0, -1, 0);
						func_1979(1);
					}
				}
			}
			else if (func_709() && func_1975(4))
			{
				if (func_709() && (func_1976(38) || func_1972(38)))
				{
					func_1978(38, 0, 0, 0, func_1977(), 0, -1, 0);
					func_1979(2);
				}
				else
				{
					func_1978(38, 0, 0, 0, func_1977(), 0, -1, 0);
					func_1979(1);
				}
			}
			if (func_709() && func_1975(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_709() && (func_1976(38) || func_1972(38)))
					{
						func_1980(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1980(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_232(iParam0) == -1037537535)
	{
		if ((!func_906(iParam0, 866047851) && !func_906(iParam0, -1979000645)) && !func_906(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1981(iParam0, 8388608) && !func_361(28))
	{
		func_1485(28);
	}
	if (!bVar3)
	{
		if (func_906(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_522(iParam0) == -1447088266)
			{
				iVar1 = func_1983(func_1982(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_82() == -1)
					{
						func_1984(iVar1);
					}
					if (func_995(0) && func_1985(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1986(iParam0, iVar0, iParam5);
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
					if (func_82() == -1)
					{
						func_1984(iParam0);
					}
					if (func_995(0) && func_1985(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1986(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_232(iParam0) == -427144552)
		{
			if (!func_1987(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_232(iParam0) == 307971639 && func_1988(iParam0))
		{
			if (!func_1989(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_906(iParam0, 866047851))
		{
			func_1990(iParam0);
		}
		else if (func_906(iParam0, 2000026003))
		{
			func_1991(iParam0);
		}
		else if (func_906(iParam0, -103750053))
		{
			func_1711(func_1920(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_1711(func_1627(-717883113, 2091222383), iVar0);
		}
		else if (func_906(iParam0, -121341956) && !func_906(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_1053((*Global_1835011)[4]->f_1, 1))
				{
					func_737(498, 0);
				}
			}
			if (func_906(iParam0, -2017733358) || func_906(iParam0, -1369131378))
			{
				func_1992(iParam0);
			}
		}
		else if (func_906(iParam0, -136654233))
		{
			if (func_906(iParam0, -1021472396))
			{
			}
		}
		else if (func_906(iParam0, -1466706512) && func_906(iParam0, 1147021565))
		{
			func_737(484, 0);
		}
		else if (func_906(iParam0, 1147021565) && func_906(iParam0, -524514947))
		{
		}
		else if (func_906(iParam0, 554195525))
		{
		}
		else if (func_906(iParam0, 589988438))
		{
			if (func_1993())
			{
				func_1994(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_906(iParam0, 787083290) && func_906(iParam0, 949916894))
		{
			func_1995(iParam0);
		}
		else if (func_906(iParam0, -1718133314))
		{
			func_1996(iParam0);
		}
		else if (func_906(iParam0, -1738650224))
		{
			func_1997(iParam0);
		}
		else if (func_906(iParam0, -1112814642) && func_906(iParam0, 949916894))
		{
			func_1998(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_906(iParam0, 1841149704))
		{
			func_1999();
		}
		else if (func_906(iParam0, 606799272))
		{
			func_2000(iParam0, iParam1);
			func_2001(iParam0);
		}
		else if (func_906(iParam0, -1112814642) && func_906(iParam0, -1697809989))
		{
			func_2002(iParam0, 0, 0, 0);
		}
		else if (func_906(iParam0, -2017733358) || func_906(iParam0, -1369131378))
		{
			func_1992(iParam0);
		}
		else if (func_906(iParam0, -1921346699))
		{
			if (func_82() != -1)
			{
				return 0;
			}
			func_2003(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_906(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_739(215778062, 1, 0))
					{
						func_740(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_739(670273567, 1, 0))
					{
						func_740(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_739(-967317137, 1, 0))
					{
						func_740(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_739(526074061, 1, 0))
					{
						func_740(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_739(-1045488665, 1, 0))
					{
						func_740(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_739(471514780, 1, 0))
					{
						func_740(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_906(iParam0, -839724752) && func_1981(iParam0, 4))
		{
			if (!func_1972(42))
			{
				func_2004(iParam0);
			}
		}
		else if (func_906(iParam0, 1399091007))
		{
			func_2005(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_906(iParam0, 1248798204))
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
				func_740(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1485(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_733(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_2006(&iVar9, 0))
				{
					func_1985(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_82() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_733(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_737(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_541();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_544();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_539();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_542();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1632();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_2007(499813453, 854119837, 0);
				func_2008(499813453, 0);
				func_2009(1);
				break;
			case 2127812557:
				func_2007(499813453, -1292544588, 0);
				func_2008(499813453, 0);
				func_2009(2);
				break;
			case 808991383:
				func_2007(499813453, -1003325394, 0);
				func_2008(499813453, 0);
				func_2009(4);
				break;
			case 1134518629:
				func_2007(666607663, -335460405, 0);
				func_2008(666607663, 0);
				func_2010(1);
				break;
			case 902940106:
				func_2007(666607663, 903797617, 0);
				func_2008(666607663, 0);
				func_2010(2);
				break;
			case -418174898:
				func_2007(666607663, 669728650, 0);
				func_2008(666607663, 0);
				func_2010(4);
				break;
			case -648114971:
				func_2007(-220219788, 1214120047, 0);
				func_2008(-220219788, 0);
				func_2011(1);
				break;
			case 211153747:
				func_2007(-220219788, 655769340, 0);
				func_2008(-220219788, 0);
				func_2011(2);
				break;
			case -32876996:
				func_2007(-220219788, 885316185, 0);
				func_2008(-220219788, 0);
				func_2011(4);
				break;
			case 1191437462:
				func_2007(218622660, -1491419385, 0);
				func_2008(218622660, 0);
				func_2012(1);
				break;
			case 1119149048:
				func_2007(218622660, 1809565830, 0);
				func_2008(218622660, 0);
				func_2012(2);
				break;
			case 506073827:
				func_2007(390004462, -628873767, 0);
				func_2008(390004462, 0);
				func_2013(1);
				break;
			case -1876986168:
				func_2007(390004462, -405421956, 0);
				func_2008(390004462, 0);
				func_2013(2);
				break;
			case 2142623221:
				func_2007(390004462, -1108972386, 0);
				func_2008(390004462, 0);
				func_2013(4);
				break;
			case 1508215381:
				func_2007(6410548, 1053716392, 0);
				func_2008(6410548, 0);
				func_2014(1);
				break;
			case -888935280:
				func_2007(6410548, 806507056, 0);
				func_2008(6410548, 0);
				func_2014(2);
				break;
			case -1252474566:
				func_2007(6410548, 1571925350, 0);
				func_2008(6410548, 0);
				func_2014(4);
				break;
			case -1465702449:
				func_2007(6410548, 1330352282, 0);
				func_2008(6410548, 0);
				func_2014(8);
				break;
			case -21093309:
				func_2016(242, func_2015(-21093309), 0);
				break;
			case 204375141:
				func_2016(240, func_2015(204375141), 0);
				break;
			case -417963070:
				func_2016(241, func_2015(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_2017(594, 1934060482, 1, 1);
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
					func_2017(594, 1110018439, 1, 1);
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
					func_2017(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_2017(594, -1228016946, 1, 1);
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
					func_2017(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_2017(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_737(488, 0);
				break;
			case 1613651027:
				func_737(491, 0);
				break;
			case -885810591:
				func_737(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_740(func_2018(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_740(func_2019(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_361(1))
				{
					func_737(487, 0);
				}
				break;
			case -898386032:
				func_737(486, 0);
				break;
			case -2035110427:
				if (func_82() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_737(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_2020(&iVar10);
		if (!func_2021(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_995(0))
		{
			return 1;
		}
		if (func_232(iParam0) == -1037537535)
		{
			func_2022(iParam0);
		}
		if (func_906(iParam0, -1979000645))
		{
			func_2023(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_995(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_740(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_2024(iVar2, 0);
		}
	}
	Var35 = { func_2025(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_2026(iParam0);
	if (fParam6 > 0f)
	{
		if (func_906(iParam0, -839724752))
		{
			func_2027(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_952(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_741(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_82() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_742(int iParam0)
{
	iVar0 = 10;
	iVar1 = func_522(iParam0);
	iVar2 = &Global_1946804->f_1497.f_1[iVar0];
	if (iParam0 == iVar2)
	{
		return;
	}
	if (func_2028(iVar2))
	{
		func_731(iVar2, 0);
	}
	if (func_2028(iParam0))
	{
		func_731(iParam0, 1);
	}
	else if (func_2029(iVar1, 0))
	{
		func_1650(iParam0, 1, 1, 1);
	}
}

int func_743(int iParam0)
{
	Var0 = { func_1948(iParam0, 1, 0) };
	return func_1953(Var0.f_4);
}

int func_744(int iParam0)
{
	return iParam0;
}

void func_745(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (func_2030(iVar0))
	{
		func_2031(iVar0);
	}
}

void func_746(int iParam0)
{
	get_event_data(0, iParam0, &iVar0, 1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
}

void func_747(int iParam0, int iParam1, int iParam2)
{
	if (Global_36560 != 0)
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = _get_first_entity_ped_is_carrying(player_ped_id());
	}
	iVar13 = 0;
	if (is_entity_a_ped(iVar0))
	{
		iVar14 = get_ped_index_from_entity_index(iVar0);
		iVar1 = func_2032(iVar14, &uVar2);
		if (_0x9a100f1cf4546629(iVar14))
		{
			iVar16 = _0x0139637a3bff8b6d(iVar14, &iVar15);
			if (!_0x0772f87d7b07719a(get_player_index(), iVar15, iVar16))
			{
				_0x946d46cd6dfb9742(get_player_index(), iVar15, iVar16);
			}
			func_245(iVar14, _0x964000d355219fc0(iVar14), 0, 1);
		}
	}
	if (iVar1 == 0)
	{
		if (does_entity_exist(iVar0))
		{
			iVar13 = _0x31fef6a20f00b963(iVar0);
		}
		else
		{
			iVar13 = 0;
		}
		get_event_data(0, iParam0, &Var17, 5);
		if (iVar13 == 0)
		{
			if (!does_entity_exist(Var17.f_2) && Var17.f_4)
			{
				func_2033(Global_36560.f_16);
				Global_36560.f_16 = 0;
				Global_36560.f_19 = 0;
			}
			if (Global_36560.f_15 != 0)
			{
				if (Var17.f_3 == 0)
				{
					func_952(Global_36560.f_15, -1, 0, 0, 0);
				}
				Global_36560.f_15 = 0;
			}
		}
		else if (func_1011(iVar13))
		{
			if (Global_36560.f_15 == 0)
			{
				Global_36560.f_15 = iVar13;
				func_952(Global_36560.f_15, 1, 0, 0, 0);
			}
		}
	}
	else if (func_1005(iVar0))
	{
		iVar22 = 0;
		while (iVar22 < iVar1)
		{
			iVar23 = &uVar2[iVar22];
			if (iVar23 == 0 || !func_2034(iVar23))
			{
			}
			else if (iVar23 == iParam2)
			{
				Jump @385; //curOff = 366
			}
			else
			{
				func_952(iVar23, 1, 0, 0, 0);
			}
			iVar22++;
		}
	}
	else
	{
		get_event_data(0, iParam0, &Var24, 5);
		if ((Var24.f_2 == Var24.f_1 && !Var24.f_4) && !Var24.f_3)
		{
			iVar29 = get_ped_index_from_entity_index(Var24);
			func_2035(iVar29, &uVar31, &uVar32, &iVar30, &uVar33);
			func_2036(&(Global_36560.f_16), iVar29, iVar30, uVar31);
			func_2037(Global_36560.f_16);
			if (func_2038(Global_36560.f_16))
			{
				Global_36560.f_19 = 1;
			}
		}
	}
}

void func_748(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 5))
	{
		return;
	}
	iVar5 = Var0;
	if (func_759(iVar5))
	{
		return;
	}
	if (func_709())
	{
		iVar6 = 7;
		if (Var0 == 523000950)
		{
			iVar6 = 255;
		}
		_0xb03140014aca6c40(Var0, iVar6);
	}
	if (!func_995(0))
	{
		func_2024(Var0.f_1, 0);
	}
	else if (!Var0.f_2)
	{
		if ((func_2039(iVar5) && is_weapon_valid(iVar5)) && !func_906(iVar5, -1588156645))
		{
			func_952(iVar5, 1, 0, 0, 0);
			if (func_2040())
			{
				iVar7 = 1;
				func_2041(iVar5, 1, 0, &iVar7, 444010018);
			}
			iVar8 = func_2042(iVar5);
			if (iVar8 > 0)
			{
				func_1986(_get_ammo_type_for_weapon(iVar5), iVar8, -897553835);
				func_2043(iVar5, iVar8);
			}
		}
		else
		{
			func_740(iVar5, 1, 0, 0, 0, -897553835, 0, 1, Var0.f_4, 0);
		}
	}
	else
	{
		func_2021(iVar5, 1, 752097756);
		func_234(iVar5, 0, 0, 1, 1, 0, 0);
	}
}

void func_749(int iParam0)
{
	if (!get_event_data(0, iParam0, &uVar0, 1))
	{
		return;
	}
	iVar1 = uVar0;
	if (func_906(iVar1, 747873593))
	{
		return;
	}
	func_947(iVar1, 1, 0, -142743235, 0);
}

void func_750(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return;
	}
	get_event_data(0, iParam0, &vVar0, 9);
	if (vVar0.x == func_744(Global_35))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar9 = get_ped_index_from_entity_index(vVar0.x);
	if (_is_ped_hogtied(iVar9) && _0x3d9f958834ab9c30(iVar9) == Global_35)
	{
		if ((((_0x9e2d5d6bc97a5f1e(iVar9, -10959621, 5000) || _0x9e2d5d6bc97a5f1e(iVar9, -544306709, 5000)) || _0x9e2d5d6bc97a5f1e(iVar9, -842959696, 5000)) || _0x9e2d5d6bc97a5f1e(iVar9, -1553120962, 5000)) || _0x9e2d5d6bc97a5f1e(iVar9, 133987706, 5000))
		{
			vVar0.f_1 = Global_35;
		}
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (get_entity_health(vVar0.x) > 0)
	{
		return;
	}
	if (is_entity_a_ped(vVar0.y))
	{
		iVar10 = get_ped_index_from_entity_index(vVar0.y);
		if (is_ped_a_player(iVar10))
		{
			if (is_ped_human(iVar9))
			{
				iVar11 = func_533(1388069370);
				bVar12 = iVar11 > Global_1347477->f_130;
				Global_1347477->f_130 = iVar11;
				bVar13 = func_2044(iVar9, iVar10);
				func_2045(iVar9, vVar0.z, bVar13, bVar12, 0);
				func_2046(vVar0.z, bVar12);
				if (bVar13)
				{
					iVar14 = func_2047(iVar9);
					if (func_2048(iVar9, iVar14))
					{
						func_1268(2, iVar14, 0, 0, iVar9, 0, 1065353216, 0);
					}
				}
				else
				{
					if (Global_1894899->f_2 != -1)
					{
						Global_23118[Global_1894899->f_2]->f_10++;
					}
					Global_23118.f_1768++;
					iVar14 = func_2047(iVar9);
					if (!func_2049(iVar9, iVar14))
					{
						if (iVar14 == 1587891565)
						{
							iVar15 = 1;
						}
						else
						{
							iVar15 = 2;
						}
						bVar16 = true;
						if (iVar14 != 1142025875)
						{
							bVar16 = false;
						}
						else if (is_ped_in_combat(iVar9, Global_35) || _0xcd66fea29400a0b5(iVar9) == func_744(Global_35))
						{
							bVar16 = false;
						}
						func_1268(iVar15, iVar14, 0, 0, iVar9, bVar16, 1065353216, 0);
					}
				}
				func_2050(iVar9, 1587891565);
			}
			else
			{
				iVar17 = func_2051(iVar9);
				if (-1955384325 == vVar0.z || 357427886 == vVar0.z)
				{
					if (decor_exist_on(iVar9, "bleed_start_time"))
					{
						iVar18 = decor_get_int(iVar9, "bleed_start_time");
					}
					if (vdist(Global_36, get_entity_coords(iVar9, false, false)) < 10f && (get_game_timer() - iVar18) > 10000)
					{
						if (!func_2049(iVar9, 446961221))
						{
							sVar19 = "HONOR_EVENT_ANIMAL_BLEEDOUT";
							if (357427886 == vVar0.z)
							{
								sVar19 = "HONOR_EVENT_ANIMAL_POISON";
							}
							func_1268(0, 446961221, 0, sVar19, iVar9, 0, 1065353216, 0);
						}
					}
				}
				if (iVar17 == -153407852)
				{
					iVar20 = _get_rider_of_mount(iVar9, true);
					if (!is_ped_injured(iVar20))
					{
						if (!func_2044(iVar20, Global_35) && !func_2049(iVar20, 551416228))
						{
							func_1268(2, 551416228, 0, 0, iVar9, 0, 1065353216, 0);
						}
					}
					else if (!get_ped_config_flag(iVar9, 501, true))
					{
						if (!func_2049(iVar9, 551416228))
						{
							func_1268(2, 551416228, 0, 0, iVar9, 0, 1065353216, 0);
						}
					}
				}
				else if (func_2052(iVar17))
				{
					if (!func_2049(iVar9, -597116214))
					{
						func_1268(2, -597116214, 0, 0, iVar9, 0, 1065353216, 0);
					}
				}
				else if (iVar17 == -705312705 && func_1099())
				{
					if (!func_2049(iVar9, -643014279))
					{
						func_1268(10, -643014279, 0, 0, iVar9, 0, 1065353216, 0);
					}
				}
				else if (!func_124())
				{
					if (Global_1347477->f_139 > 0)
					{
						if (Global_1347477->f_139 < get_game_timer())
						{
							func_1002();
						}
					}
					if (Global_1347477->f_139 == 0)
					{
						Global_1347477->f_139 = (get_game_timer() + 300000);
					}
					Global_1347477->f_140++;
					if (Global_1347477->f_140 == 12)
					{
						func_1268(4, -2010847721, 0, 0, 0, 0, 1065353216, 0);
						func_1002();
					}
					else if (Global_1347477->f_140 == 8)
					{
						func_1268(3, -2010847721, 0, 0, 0, 0, 1065353216, 0);
					}
				}
				func_2046(vVar0.z, 0);
				if (func_2053(iVar17))
				{
					func_2045(iVar9, vVar0.z, _0x5594afe9de0c01b7(iVar9), 0, 1);
				}
			}
		}
	}
}

void func_751(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return;
	}
	get_event_data(0, iParam0, &Var0, 9);
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (get_entity_health(Var0) > 0)
	{
		return;
	}
	if (is_entity_a_ped(Var0) && is_entity_a_ped(Var0.f_1))
	{
		iVar9 = get_ped_index_from_entity_index(Var0.f_1);
		iVar10 = get_ped_index_from_entity_index(Var0);
		if (is_ped_a_player(iVar9))
		{
			if (!is_ped_human(iVar10))
			{
				iVar11 = func_2051(iVar10);
				if (iVar11 == -1906789582)
				{
					iVar12 = _0x126cbebba46693cf(iVar12, -566775080, 0);
					if (!func_2054(iVar12) >= 25)
					{
						func_2055(iVar12, 1);
						if (func_2054(iVar12) == 1)
						{
							func_2056(1, 0, 0, 1);
							func_2057(1);
						}
						else if (func_2054(iVar12) == 15)
						{
							func_2056(15, 1, 0, 1);
							func_2057(2);
						}
						else if (func_2054(iVar12) == 25)
						{
							func_2056(25, 1, 1, 1);
							if (func_2058())
							{
								func_2059(536172671, 0);
							}
							else
							{
								func_2059(710647935, 0);
							}
							func_2057(4);
						}
					}
				}
			}
		}
	}
}

void func_752(int iParam0)
{
	if (network_is_game_in_progress())
	{
		return;
	}
	get_event_data(0, iParam0, &Var0, 9);
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (is_entity_dead(Var0))
	{
		return;
	}
	if (get_entity_health(Var0) <= 0)
	{
		return;
	}
	iVar9 = func_2060();
	if (is_entity_a_ped(Var0))
	{
		iVar9 = get_ped_index_from_entity_index(Var0);
	}
	iVar10 = func_2060();
	if (is_entity_a_ped(Var0.f_1))
	{
		iVar10 = get_ped_index_from_entity_index(Var0.f_1);
	}
	if (iVar9 == Global_35)
	{
		if (does_entity_exist(Global_35))
		{
			if (func_2061())
			{
				Global_1935496->f_67.f_1 = 1;
			}
			if (Var0.f_2 == -1504859554 && Global_35 != iVar10)
			{
				func_1004(25);
			}
		}
		if (does_entity_exist(iVar10))
		{
			if (!is_ped_human(iVar10))
			{
				iVar11 = func_2051(iVar10);
				if ((-604086604 == iVar11 || -655377385 == Var0.f_2) && !func_124())
				{
					func_2062(1);
				}
			}
		}
	}
	else if (iVar10 == Global_35)
	{
		if (does_entity_exist(iVar9))
		{
			if (((_is_weapon_throwable(Var0.f_2) && Var0.f_2 != -1504859554) && Var0.f_2 != 1885857703) && !is_ped_performing_melee_action(iVar10, 32768, 0))
			{
				func_1004(10);
			}
			if ((_is_weapon_bow(Var0.f_2) && Var0.f_3 != 296901449) && Var0.f_3 != -1040876935)
			{
				func_1004(11);
			}
			if (!func_2044(iVar9, iVar10))
			{
				decor_set_bool(iVar9, "instigated_by_player", true);
			}
			if (func_2048(iVar9, 1142025875) && is_ped_fatally_injured(iVar9))
			{
				func_1268(0, 1142025875, 0, "HONOR_EVENT_FATAL_WOUND", iVar9, 0, 1065353216, 0);
				func_2050(iVar9, 1142025875);
			}
			if (get_ped_config_flag(iVar9, 11, false))
			{
				if (!func_2049(iVar9, 1587891565))
				{
					func_1268(1, 1587891565, 0, 0, iVar9, 0, 1065353216, 0);
					func_2050(iVar9, 1587891565);
				}
			}
			if (!is_ped_human(iVar9))
			{
				if (Var0.f_2 == -1955384325 || Var0.f_2 == 357427886)
				{
					if (!decor_exist_on(iVar9, "bleed_start_time"))
					{
						decor_set_int(iVar9, "bleed_start_time", get_game_timer());
					}
				}
			}
		}
	}
}

void func_753(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 2);
	if (Var0 != func_744(Global_35))
	{
		return;
	}
	if (!func_2044(Var0.f_1, Global_35))
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			Global_1347477->f_145[iVar2] = 0;
			iVar2++;
		}
		Global_1347477->f_152 = 0;
		if (!decor_exist_on(Var0.f_1, "player_antagonized"))
		{
			decor_set_bool(Var0.f_1, "player_antagonized", true);
			Global_1347477->f_141[Global_1347477->f_149] = get_game_timer();
			Global_1347477->f_149++;
			if (Global_1347477->f_149 >= 3)
			{
				Global_1347477->f_149 = 0;
			}
			iVar3 = (get_game_timer() - 60000);
			bVar4 = true;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (&Global_1347477->f_141[iVar2] < iVar3)
				{
					bVar4 = false;
				}
				iVar2++;
			}
			Global_1347477->f_151++;
			if (bVar4)
			{
				if (Global_1347477->f_151 >= 3)
				{
					func_1268(0, -1972216640, 0, 0, get_ped_index_from_entity_index(Var0.f_1), 0, 1065353216, 0);
					Global_1347477->f_151 = 0;
				}
			}
		}
	}
}

void func_754(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 2);
	if (Var0 != func_744(Global_35))
	{
		return;
	}
	if (!func_2044(Var0.f_1, Global_35))
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			Global_1347477->f_141[iVar2] = 0;
			iVar2++;
		}
		Global_1347477->f_151 = 0;
		if (!func_2063())
		{
			if (!decor_exist_on(Var0.f_1, "player_greeted"))
			{
				decor_set_bool(Var0.f_1, "player_greeted", true);
				Global_1347477->f_145[Global_1347477->f_150] = get_game_timer();
				Global_1347477->f_150++;
				if (Global_1347477->f_150 >= 3)
				{
					Global_1347477->f_150 = 0;
				}
				iVar3 = (get_game_timer() - 60000);
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (&Global_1347477->f_145[iVar2] < iVar3)
					{
						bVar4 = false;
					}
					iVar2++;
				}
				Global_1347477->f_152++;
				if (bVar4)
				{
					if (Global_1347477->f_152 >= 3)
					{
						func_1268(10, -534116900, 0, 0, get_ped_index_from_entity_index(Var0.f_1), 0, 1065353216, 0);
						Global_1347477->f_152 = 0;
					}
				}
			}
		}
	}
}

void func_755(int iParam0)
{
	uVar0 = _0x5e9faf6c513347b4(Global_35, -2027383723);
	uVar1 = _0x326f7951ef0d7f75(Global_35, -2027383723);
}

void func_756(int iParam0)
{
	get_event_data(0, iParam0, &vVar0, 9);
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	if (vVar0.y != func_744(Global_35))
	{
		return;
	}
	if (!is_ped_human(get_ped_index_from_entity_index(vVar0.x)))
	{
		return;
	}
	if (is_entity_a_ped(vVar0.x))
	{
		if (!decor_exist_on(vVar0.x, "injured_woman") && !is_ped_male(get_ped_index_from_entity_index(vVar0.x)))
		{
			decor_set_bool(vVar0.x, "injured_woman", true);
			func_1711(func_847(-1069702661), 1);
		}
		if ((vVar0.z == -1569615261 && !decor_exist_on(vVar0.x, "recently_punched")) && !func_2044(vVar0.x, Global_35))
		{
			decor_set_bool(vVar0.x, "recently_punched", true);
			func_1711(func_847(-1845128196), 1);
		}
		if (!decor_exist_on(vVar0.x, "was_hurt"))
		{
			decor_set_bool(vVar0.x, "was_hurt", true);
			func_1711(func_847(1260535743), 1);
		}
	}
}

void func_757(int iParam0)
{
	get_event_data(0, iParam0, &Var0, 2);
	if (Var0 != func_744(Global_35))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	if (!is_ped_human(get_ped_index_from_entity_index(Var0.f_1)))
	{
		return;
	}
	iVar2 = get_ped_index_from_entity_index(Var0.f_1);
	if ((!func_2044(Var0.f_1, Global_35) && is_ped_human(iVar2)) && !decor_exist_on(Var0.f_1, "was_antagonized"))
	{
		func_1711(func_847(1041337134), 1);
		decor_set_bool(Var0.f_1, "was_antagonized", true);
	}
}

void func_758(int iParam0)
{
	if (!func_995(0))
	{
		return;
	}
	if (get_event_data(0, iParam0, &Var0, 8))
	{
		iVar9 = Var0.f_7;
		if (!func_231(iVar9, 0))
		{
			return;
		}
		iVar8 = _0x44b09a23d728045a(Var0);
		iVar10 = func_1983(iVar9, 1);
		if (is_weapon_valid(iVar10))
		{
			if (!func_739(iVar9, 1, 0))
			{
				if (func_82() == -1)
				{
					func_2065(_create_var_string(10, "WEP_DISCOVER", func_2064(iVar10)), -2, 0, 0, 0, 1);
					play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				}
				func_952(iVar9, 1, 0, 0, 0);
			}
			else
			{
				iVar11 = _get_ammo_type_for_weapon(iVar10);
				if (_0x58425fca3d3a2d15(iVar10))
				{
					if (func_1982(iVar11, 0) == iVar11)
					{
						func_952(iVar9, 1, 0, 0, 0);
					}
					else
					{
						func_952(iVar8, Var0.f_6, 0, 0, 0);
					}
				}
				else
				{
					func_952(iVar9, 1, 0, 0, 0);
				}
			}
		}
		else if (func_1988(iVar9))
		{
			func_952(iVar9, Var0.f_6, 0, 0, 0);
		}
	}
}

bool func_759(int iParam0)
{
	iVar0 = func_2066();
	if (func_1090(iVar0))
	{
		iVar1 = func_2067(func_178(), iVar0);
		if (func_1128(iVar1))
		{
			if (func_2068(iVar0, iVar1, iParam0, &Var2))
			{
				if (Var2.f_1 != 0)
				{
					iParam0 = Var2.f_1;
				}
			}
			if (func_2069(iParam0, iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_760(int iParam0)
{
	if (!func_231(iParam0, 0))
	{
		return "";
	}
	StringCopy(&cVar8, "_", 32);
	bVar12 = func_2070(iParam0, &Var0);
	bVar13 = func_2071(iParam0, &cVar4);
	if (bVar12 && bVar13)
	{
		MemCopy(&cVar14, {Var0}, 8);
		StringConCat(&cVar14, &cVar8, 64);
		StringConCat(&cVar14, &cVar4, 64);
		return _0xd8402b858f4ddd88(&cVar14, get_length_of_literal_string(&cVar14));
	}
	if (!bVar12 && bVar13)
	{
		return _0xd8402b858f4ddd88(&cVar4, get_length_of_literal_string(&cVar4));
	}
	if (bVar12 && !bVar13)
	{
		return "";
	}
	return "";
}

int func_761(int iParam0, int iParam1)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_232(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_906(iParam0, 1399091007))
	{
		func_2072(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_762(int iParam0)
{
	if (!func_231(*iParam0, 0))
	{
		return false;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return true;
		case 1903483453:
			*iParam0 = -1527293029;
			return true;
		case -541584777:
			*iParam0 = 206762213;
			return true;
		case 998010398:
			*iParam0 = -324053813;
			return true;
		case -1424823393:
			*iParam0 = -885810591;
			return true;
		default:
			break;
	}
	return false;
}

void func_763(int iParam0)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var26.f_1 = 10;
	Var26.f_12 = 10;
	iVar51 = 0;
	fVar52 = 0f;
	bVar53 = false;
	get_event_data(0, iParam0, &Var0, 26);
	if (!func_2073(Var0.f_24))
	{
		if (Var0.f_23 == Global_35)
		{
			func_2074(Var0.f_24);
			Var26 = { Var0 };
			if (!func_2075(Var0.f_24))
			{
				iVar49 = func_2076(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57);
				while (iVar49 != 0)
				{
					Var26.f_1[iVar61] = iVar49;
					Var26.f_12[iVar61] = iVar51;
					iVar49 = func_2076(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57);
					iVar61++;
				}
				func_2077(Var0.f_24);
				bVar53 = true;
			}
			if (func_2078(&Var26))
			{
				bVar53 = true;
			}
			if (bVar53)
			{
				if (func_2079(Var0.f_24))
				{
					func_2080(&Var26);
				}
				if (_0xcc1baf72d571db8d(Var0.f_23, &Var26, Var0.f_25))
				{
				}
			}
		}
	}
}

void func_764(int iParam0)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	get_event_data(0, iParam0, &Var0, 36);
	if (func_82() == 0)
	{
	}
	if (does_entity_exist(Var0.f_27))
	{
	}
	if (!func_2073(Var0.f_27))
	{
		if (Var0.f_26 == Global_35)
		{
			if (!func_2079(Var0.f_27))
			{
				func_2081(&Var0, Var0.f_27, Var0.f_28, 0);
			}
			Global_1935180 = get_game_timer();
			func_2074(Var0.f_27);
		}
		else if (does_entity_exist(Var0.f_26))
		{
			func_2082(Var0.f_26, Var0.f_27);
		}
		func_2083(Var0.f_26, Var0.f_27, Var0.f_23, Var0.f_30, Var0, Var0.f_31, Var0.f_32, Var0.f_29, Var0.f_34);
	}
}

void func_765(int iParam0)
{
	get_event_data(0, iParam0, &uVar0, 10);
}

bool func_766()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_767(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_1053((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_768()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_769()
{
	if (func_2084())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_770()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_entity_exist(&(Global_1945917->f_8[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_771()
{
	if (func_232(Global_1935496->f_30) != 2085633299)
	{
		return true;
	}
	if (!func_2085())
	{
		return true;
	}
	if (_0xb65927f861e7ae39(player_ped_id(), 34))
	{
		return true;
	}
	func_89("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
	return false;
}

void func_772(int iParam0)
{
	Var6.f_9 = -1591664384;
	if (get_event_data(3, iParam0, &Var0, 6))
	{
		if (_0x9700e8efc4ab9089(Var0.f_4, &Var0, &Var6, true))
		{
			bVar20 = false;
			if (does_entity_exist(Var0.f_5))
			{
				if (func_1143(Var0.f_5))
				{
					bVar20 = true;
				}
			}
			if (bVar20)
			{
				func_242(Var6.f_4, Var0.f_5);
			}
			else
			{
				func_243(Var6.f_4, Var0.f_5);
			}
		}
	}
}

void func_773(int iParam0)
{
	Var6.f_9 = -1591664384;
	if (get_event_data(3, iParam0, &Var0, 6))
	{
		if (_0x9700e8efc4ab9089(Var0.f_4, &Var0, &Var6, true))
		{
			func_954(Var0.f_5, Var6.f_4, Var0);
		}
	}
}

bool func_774(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_775(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_282(iVar0))
		{
			if (func_2086(func_609(iVar0, 1, 1)) == iParam0)
			{
				func_777(iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_776(int iParam0, bool bParam1, int iParam2)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (func_2087(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1888801)[iParam0]->f_5))
	{
		iVar0 = (*Global_1888801)[iParam0]->f_5;
	}
	else
	{
		iVar0 = func_2088(iParam0);
	}
	bVar1 = func_798(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_2089(iParam0);
		if (iParam2 > iVar2 || !func_1020(func_2090(iParam0)))
		{
			func_2091(iParam0, func_630());
			func_2092(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_2093(iParam0, 33554432);
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
		func_1248(iParam0, 33554432);
		func_2091(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_2094(iParam0);
}

void func_777(int iParam0, bool bParam1)
{
	if (!func_282(iParam0))
	{
		return;
	}
	bVar0 = func_798(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_2095(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_2096(iParam0, func_630());
			func_2093(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1248(iParam0, 67108864);
		func_2096(iParam0, -15);
	}
	func_2097(iParam0);
}

bool func_778(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_779(int iParam0, bool bParam1)
{
	if (!func_778(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1752(iParam0, 8))
		{
			return false;
		}
	}
	if (func_1752(iParam0, 1))
	{
		return true;
	}
	return false;
}

void func_780(int iParam0, bool bParam1)
{
	if (!func_778(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2098(iParam0, 1);
	}
	else
	{
		if (func_596(iParam0))
		{
			return;
		}
		func_2099(iParam0, 1);
	}
	func_2100(iParam0, bParam1);
}

bool func_781(int iParam0, bool bParam1)
{
	if (!func_774(iParam0))
	{
		return false;
	}
	if (func_783(iParam0, 1) || (bParam1 && func_783(iParam0, 2)))
	{
		return true;
	}
	return false;
}

void func_782(int iParam0, bool bParam1)
{
	if (!func_774(iParam0))
	{
		return;
	}
	if (func_783(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_2101(iParam0, 1);
	}
	else
	{
		func_2102(iParam0, 1);
	}
	func_2103(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_597(iVar0) == iParam0)
		{
			func_780(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_783(int iParam0, int iParam1)
{
	if (!func_774(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

void func_784(int iParam0, bool bParam1)
{
	if (!func_774(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2101(iParam0, 4);
	}
	else
	{
		func_2102(iParam0, 4);
	}
	func_2104(iParam0, bParam1);
}

bool func_785()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_786(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_2105(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_2106())
	{
		return func_2105(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_2105(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_787()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_774(iVar0))
		{
			if (func_788(iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_788(int iParam0)
{
	if (!func_774(iParam0))
	{
		return false;
	}
	return &(Global_1934266->f_27[iParam0]);
}

void func_789(int iParam0)
{
	if (!func_774(iParam0))
	{
		return;
	}
	Global_1934266->f_4 = iParam0;
}

void func_790(int iParam0, int iParam1)
{
	if (!func_774(iParam0))
	{
		return;
	}
	iVar0 = func_2107();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_795())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_2108(iParam0, iParam1);
			func_2109(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_783(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_784(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_784(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

void func_791(int iParam0, int iParam1)
{
	if (!func_774(iParam0))
	{
		return;
	}
	Global_1934266->f_27[iParam0] = iParam1;
}

int func_792()
{
	return Global_1934266->f_5;
}

int func_793(int iParam0)
{
	if (!func_282(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0]->f_2;
	}
	return Global_1058888->f_40615[iParam0]->f_2;
}

int func_794(int iParam0)
{
	if (!func_1020(iParam0))
	{
		return 0;
	}
	func_1881(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

int func_795()
{
	return Global_1934266->f_4;
}

void func_796(int iParam0)
{
	if (!func_774(iParam0))
	{
		return;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_2110(&Var0);
	func_2111(iParam0, &Var0);
}

bool func_797()
{
	if (func_781(func_795(), 1))
	{
		return true;
	}
	if (func_779(func_113(), 1))
	{
		return true;
	}
	if (func_654(func_178()))
	{
		return true;
	}
	if (does_blip_exist(Global_1934266->f_151))
	{
		if (func_814())
		{
			return true;
		}
	}
	return false;
}

bool func_798(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_799(int iParam0)
{
	if (iParam0 != Global_1934266->f_78.f_62 && Global_1934266->f_78.f_62 != -1)
	{
		return false;
	}
	Global_1934266->f_78.f_59 = iParam0;
	Global_1934266->f_78.f_60 = 0;
	func_811();
	return true;
}

bool func_800(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_138(iParam0, bParam1, bParam2, bParam3))
	{
		if (func_287(iParam0) || Global_1935630->f_15 != 1370593166)
		{
			return true;
		}
	}
	return false;
}

void func_801(bool bParam0)
{
	if (!Global_1935630->f_18)
	{
		return;
	}
	if (bParam0)
	{
		func_799(10);
	}
	else
	{
		if (!is_player_being_arrested(get_player_index(), true))
		{
			play_sound_frontend("Witness_Wanted", "HUD_Wanted_Sounds", true, 0);
		}
		_0x6abc50979655bee7(player_id(), &iVar0, 1);
		if (Global_1935630->f_18)
		{
			_0x9c5bd8c562565ce6(&Var17);
		}
		if (Var17.f_16 && _get_bounty_for_player(player_id()) > 0)
		{
			func_804(func_795());
		}
		if (Global_1935630->f_23 || iVar0 == 481893872)
		{
			func_799(6);
		}
		else
		{
			func_799(2);
		}
	}
}

void func_802()
{
	func_2112(&(Global_1934266->f_78.f_56));
	_databinding_write_data_bool(Global_1934266->f_78.f_1.f_16, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_1.f_17, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_19.f_16, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_19.f_17, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_37.f_16, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_37.f_17, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_1.f_14, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_1.f_13, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_19.f_14, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_19.f_13, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_37.f_14, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_37.f_13, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_55, false);
	_0x35a33783ec3c3448(0);
	_0x39d8d7082bc34b72(0);
	_0x1ad8ad999c27f44a(0);
}

void func_803()
{
	_databinding_write_data_bool(Global_1934266->f_78.f_1.f_1, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_19.f_1, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_37.f_1, false);
	_databinding_write_data_bool(Global_1934266->f_78.f_55, false);
	Global_1934266->f_6 = 0;
}

void func_804(int iParam0)
{
	Global_1934266->f_5 = iParam0;
}

bool func_805(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1898077->f_1 == 1 || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1898077->f_1 == 5 || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1898077->f_1 == 3 || Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1898077->f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_806(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_82() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_2113(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_2114();
		Global_1898077->f_9 = func_2115(Global_1894899->f_2);
		func_2116(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_807(int iParam0)
{
	Global_1934266->f_78.f_60 = iParam0;
	func_811();
}

void func_808()
{
	if (Global_1935630->f_18)
	{
		_0x9c5bd8c562565ce6(&Var1);
		if (Var1.f_16 || Var1.f_15)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if ((_0x89e005b1662f6e48(player_id(), 1, 0) || _0x3738b784ddd35cc6(player_id(), 1, 0)) || Global_1934266->f_78.f_62 > -1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (Global_1934266->f_78.f_63 > 0)
	{
		iVar0 = Global_1934266->f_78.f_63;
	}
	_databinding_write_data_int(Global_1934266->f_78.f_1.f_3, iVar0);
	_databinding_write_data_int(Global_1934266->f_78.f_19.f_3, iVar0);
	_databinding_write_data_int(Global_1934266->f_78.f_37.f_3, iVar0);
}

void func_809(var uParam0)
{
	func_2117(uParam0, 0);
}

char* func_810(int iParam0)
{
	switch (iParam0)
	{
		case -1358475411:
			return "CRIME_ACCOMPLICE";
		case 195938434:
			return "CRIME_ASSAULT";
		case 416962030:
			return "CRIME_ASSAULT_ANIMAL";
		case 1314857970:
			return "CRIME_ASSAULT_CORPSE";
		case -999071359:
			return "CRIME_ASSAULT_HORSE";
		case -683250308:
			return "CRIME_ASSAULT_LAW";
		case -857617219:
			return "CRIME_ASSAULT_LIVESTOCK";
		case 1780145725:
			return "CRIME_BANK_ROBBERY";
		case -1521715232:
			return "CRIME_BURGLARY";
		case -1560342203:
			return "CRIME_CHEATING";
		case 1343354387:
			return "CRIME_DISTURBANCE";
		case 1052408375:
			return "CRIME_EXPLOSION";
		case -1759599185:
			return "CRIME_GRAVE_ROBBERY";
		case 1481148278:
			return "CRIME_HASSLE";
		case -16106300:
			return "CRIME_HIT_AND_RUN";
		case 105387183:
			return "CRIME_HIT_AND_RUN_LAW";
		case -2095449173:
			return "CRIME_INTIMIDATION";
		case 314693001:
			return "CRIME_JAIL_BREAK";
		case -2097683294:
			return "CRIME_JACK_HORSE";
		case 1805131596:
			return "CRIME_JACK_VEHICLE";
		case -1728509733:
			return "CRIME_KIDNAPPING";
		case -42817558:
			return "CRIME_KIDNAPPING_LAW";
		case 1458462042:
			return "CRIME_LASSO_ASSAULT";
		case 481893872:
			return "CRIME_LAW_IS_THREATENED";
		case 1714017012:
			return "CRIME_LOITERING";
		case 1437412331:
			return "CRIME_LOOTING";
		case -493957506:
			return "CRIME_MURDER";
		case 1224055398:
			return "CRIME_MURDER_ANIMAL";
		case -953803399:
			return "CRIME_MURDER_HORSE";
		case 2006449383:
			return "CRIME_MURDER_LAW";
		case -1788230330:
			return "CRIME_MURDER_LIVESTOCK";
		case 1396375613:
			return "CRIME_PROPERTY_DESTRUCTION";
		case -547914843:
			return "CRIME_RESIST_ARREST";
		case -1547772340:
			return "CRIME_ROBBERY";
		case 1352191066:
			return "CRIME_UNARMED_ASSAULT";
		case -59535775:
			return "CRIME_STAGECOACH_ROBBERY";
		case -1701536647:
			return "CRIME_STOLEN_GOODS";
		case 1923998736:
			return "CRIME_THEFT";
		case -1103472584:
			return "CRIME_THEFT_HORSE";
		case -2051405571:
			return "CRIME_THEFT_LIVESTOCK";
		case 1135209633:
			return "CRIME_THEFT_VEHICLE";
		case -1810065318:
			return "CRIME_THREATEN";
		case 2140177766:
			return "CRIME_THREATEN_LAW";
		case 1171995096:
			return "CRIME_TRAMPLE";
		case -267442581:
			return "CRIME_TRAMPLE_LAW";
		case 1685924442:
			return "CRIME_TRAIN_ROBBERY";
		case -1361146315:
			return "CRIME_TRESPASSING";
		case -2130852007:
			return "CRIME_VANDALISM";
		case -102241052:
			return "CRIME_VANDALISM_VEHICLE";
		case 1420320220:
			return "CRIME_VEHICLE_DESTRUCTION";
		case 0:
			return "CRIME_NONE";
		default:
			break;
	}
	return "CRIME_NONE";
}

void func_811()
{
	_0xb6fd96420c0126a1(343652620, _databinding_read_data_bool(Global_1934266->f_78.f_1.f_1));
	_0xb6fd96420c0126a1(370165233, _databinding_read_data_bool(Global_1934266->f_78.f_19.f_1));
	_0xb6fd96420c0126a1(214328093, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_1));
	_0x29c733459a9011eb(899278954, _databinding_read_data_string(Global_1934266->f_78.f_1.f_2));
	_0x74bcceb233ad95b2(-67464364, _databinding_read_data_int(Global_1934266->f_78.f_1.f_3));
	_0x29c733459a9011eb(-1388386159, _databinding_read_data_string(Global_1934266->f_78.f_1.f_4));
	_0x29c733459a9011eb(1584094595, _databinding_read_data_string(Global_1934266->f_78.f_1.f_5));
	_0x29c733459a9011eb(2037870381, _databinding_read_data_string(Global_1934266->f_78.f_19.f_2));
	_0x74bcceb233ad95b2(419081062, _databinding_read_data_int(Global_1934266->f_78.f_19.f_3));
	_0x29c733459a9011eb(-77578703, _databinding_read_data_string(Global_1934266->f_78.f_19.f_4));
	_0x29c733459a9011eb(-1895820149, _databinding_read_data_string(Global_1934266->f_78.f_19.f_5));
	_0x29c733459a9011eb(284336735, _databinding_read_data_string(Global_1934266->f_78.f_37.f_2));
	_0x74bcceb233ad95b2(1967777848, _databinding_read_data_int(Global_1934266->f_78.f_37.f_3));
	_0x29c733459a9011eb(-1851553844, _databinding_read_data_string(Global_1934266->f_78.f_37.f_4));
	_0x29c733459a9011eb(-1711179274, _databinding_read_data_string(Global_1934266->f_78.f_37.f_5));
	_0x29c733459a9011eb(-502453069, _databinding_read_data_string(Global_1934266->f_78.f_37.f_8));
	_0xb6fd96420c0126a1(2090772712, _databinding_read_data_bool(Global_1934266->f_78.f_1.f_13));
	_0xb6fd96420c0126a1(567080718, _databinding_read_data_bool(Global_1934266->f_78.f_1.f_14));
	_0xb6fd96420c0126a1(-2111378860, _databinding_read_data_bool(Global_1934266->f_78.f_19.f_13));
	_0xb6fd96420c0126a1(930867308, _databinding_read_data_bool(Global_1934266->f_78.f_19.f_14));
	_0xb6fd96420c0126a1(102890458, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_13));
	_0xb6fd96420c0126a1(400672808, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_14));
	_0xb6fd96420c0126a1(158320892, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_15));
	_0xb6fd96420c0126a1(-2074406361, _databinding_read_data_bool(Global_1934266->f_78.f_1.f_16));
	_0xb6fd96420c0126a1(-882466102, _databinding_read_data_bool(Global_1934266->f_78.f_1.f_17));
	_0xb6fd96420c0126a1(-1363987847, _databinding_read_data_bool(Global_1934266->f_78.f_19.f_16));
	_0xb6fd96420c0126a1(581135177, _databinding_read_data_bool(Global_1934266->f_78.f_19.f_17));
	_0xb6fd96420c0126a1(874457339, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_16));
	_0xb6fd96420c0126a1(-84149284, _databinding_read_data_bool(Global_1934266->f_78.f_37.f_17));
	_0x74bcceb233ad95b2(-1979147281, _databinding_read_data_int(Global_1934266->f_78.f_1.f_12));
	_0x74bcceb233ad95b2(397723712, _databinding_read_data_int(Global_1934266->f_78.f_19.f_12));
	_0x74bcceb233ad95b2(1420669041, _databinding_read_data_int(Global_1934266->f_78.f_37.f_12));
}

bool func_812()
{
	if (!Global_1935630->f_18)
	{
		return false;
	}
	if (Global_1935630->f_23)
	{
		return true;
	}
	return false;
}

int func_813(var uParam0)
{
	if (!func_2118(uParam0))
	{
		func_2119(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_2120(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1910() - uParam0->f_1);
}

bool func_814()
{
	iVar0 = func_795();
	if (!func_774(iVar0))
	{
		return false;
	}
	if (func_276(Global_40.f_358[iVar0]->f_1) || Global_40.f_358[iVar0]->f_4 < 1f)
	{
		return false;
	}
	if (func_1406(Global_35, Global_40.f_358[iVar0]->f_1, (Global_40.f_358[iVar0]->f_4 + 10f), 1, 1))
	{
		return true;
	}
	return false;
}

bool func_815()
{
	if (Global_1935630->f_18)
	{
		_0x9c5bd8c562565ce6(&Var0);
	}
	if (Var0.f_11 == 4 || Var0.f_11 == 5)
	{
		return false;
	}
	if (!func_814())
	{
		return false;
	}
	if (((Var0.f_12 != 0 && Var0.f_12 != 1) && Var0.f_12 != 5) && Var0.f_12 != 3)
	{
		return true;
	}
	return false;
}

char* func_816()
{
	if (does_text_label_exist(&(Global_1934266->f_78.f_64)))
	{
		return func_2121(Global_1934266->f_78.f_64);
	}
	if (func_2058())
	{
		return "POSTER_PL_ARTHUR_NAME";
	}
	if (func_336())
	{
		return "POSTER_PL_JOHN_NAME";
	}
	return "POSTER_PL_GENERIC";
}

void func_817()
{
	iVar0 = _get_bounty_for_player(player_id());
	if (does_text_label_exist(&(Global_1934266->f_78.f_67)))
	{
		_databinding_write_data_string(Global_1934266->f_78.f_37.f_4, &(Global_1934266->f_78.f_67));
	}
	else if (func_596(func_113()) || func_2087(func_178()))
	{
		_databinding_write_data_string(Global_1934266->f_78.f_37.f_4, "LAW_UI_DEAD_OR_ALIVE");
	}
	else if (iVar0 <= 1)
	{
		_databinding_write_data_string(Global_1934266->f_78.f_37.f_4, "LAW_UI_NO_BOUNTY");
	}
	else
	{
		sVar1 = _create_var_string(2, "LAW_UI_BOUNTY_CASH", iVar0);
		_databinding_write_data_string(Global_1934266->f_78.f_37.f_8, sVar1);
	}
	func_811();
}

void func_818(int iParam0)
{
	if (((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_82() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_2 = Global_1898077->f_1;
	Global_1898077->f_13 = Global_1898077->f_12;
	Global_1898077->f_1 = 4;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_12 = iParam0;
	func_2113(Global_1898077->f_7, Global_1898077->f_12);
}

bool func_819(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_820(int iParam0)
{
	if (!func_819(iParam0))
	{
		return;
	}
	func_1606(1);
}

bool func_821()
{
	if (func_799(9))
	{
		if (Global_1935630->f_18)
		{
			_0x55f37f5f3f2475e1();
		}
		return true;
	}
	return false;
}

int func_822(int iParam0)
{
	if (!func_774(iParam0))
	{
		return 0;
	}
	return func_601(iParam0);
}

void func_823(bool bParam0, bool bParam1)
{
	bVar0 = true;
	if (bParam0 && (Global_1935630->f_18 || Global_1934266->f_78.f_62 > -1))
	{
		if (Global_1935630->f_18)
		{
			_0x9c5bd8c562565ce6(&Var1);
		}
		if (Var1.f_10 > -1 || Global_1934266->f_78.f_62 > -1)
		{
			bVar0 = false;
			iVar18 = func_795();
			if (!func_774(iVar18))
			{
				return;
			}
			if (Global_1935630->f_18)
			{
				Global_40.f_358[iVar18]->f_1 = { Var1.f_7 };
			}
			else
			{
				Global_40.f_358[iVar18]->f_1 = { Global_36 };
			}
			func_2122(get_game_timer());
			iVar19 = func_2123();
			iVar20 = iVar19;
			Global_40.f_358[iVar18]->f_4 = get_wanted_level_radius(iVar20);
			if (Global_40.f_358[iVar18]->f_4 <= 0f)
			{
				switch (iVar19)
				{
					case 1:
						Global_40.f_358[iVar18]->f_4 = 60f;
						break;
					case 2:
						Global_40.f_358[iVar18]->f_4 = 70f;
						break;
					default:
						Global_40.f_358[iVar18]->f_4 = 80f;
						break;
				}
			}
			if (!does_blip_exist(Global_1934266->f_151))
			{
				Global_1934266->f_151 = _blip_add_for_radius(1165324392, Global_40.f_358[iVar18]->f_1, Global_40.f_358[iVar18]->f_4);
			}
			else
			{
				set_blip_coords(Global_1934266->f_151, Global_40.f_358[iVar18]->f_1);
				set_blip_scale(Global_1934266->f_151, Global_40.f_358[iVar18]->f_4);
				if (bParam1)
				{
					_blip_set_modifier(Global_1934266->f_151, 40294510);
				}
				else
				{
					_set_blip_flash_style(Global_1934266->f_151, 40294510);
				}
			}
		}
	}
	if (bVar0)
	{
		if (does_blip_exist(Global_1934266->f_151))
		{
			remove_blip(&(Global_1934266->f_151));
		}
	}
}

void func_824()
{
	disable_control_action(0, 1367437629, false);
	disable_control_action(0, 992265328, false);
	disable_control_action(0, -473983589, false);
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -1053137564, false);
	disable_control_action(0, 129547951, false);
	disable_control_action(0, -1300031296, false);
}

int func_825(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1212(iVar0, 2))
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
				func_1213(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_826(int iParam0)
{
	(*Global_1911894)[iParam0]->f_1 = 3;
	(*Global_1911894)[iParam0] = 0;
	(*Global_1911894)[iParam0]->f_5 = 0;
}

int func_827(int iParam0, int iParam1)
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

int func_828(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return 1;
	}
	return 0;
}

bool func_829(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case -14157738:
			if (func_2124(func_1315(3)) == 0)
			{
				return 1323994892;
			}
			else
			{
				return -2100835330;
			}
			break;
		case -246260565:
			return 1573399751;
		case 340173459:
			return -2106624491;
		case 109840158:
			return -1793811613;
		case 903996873:
			return -1510851298;
		case 706727493:
			return -1467596218;
		case -1454682982:
			return -1184308213;
		case 1538503020:
			return -870708883;
		case 1318524723:
			return -251964625;
		case 18296369:
			return 1207697423;
		case -279147844:
			return 1499898596;
		case -413074747:
			return 1822214480;
		case -760557223:
			return 2134142591;
		case -924992065:
			return -1862299111;
		case 1767753378:
			if (func_2124(func_1315(3)) == 0)
			{
				return 389460201;
			}
			else
			{
				return 1264044047;
			}
			break;
		case -1556675047:
			return 1371776514;
		case -2012820803:
			return 1001486814;
		case -849973848:
			return 1882514148;
		case 1012860904:
			return 1103889939;
		case -1680391208:
			return -1802851441;
		case -1253105631:
			return 1719193452;
		case -915721704:
			return -1151534797;
		case 202891657:
			return -1929044860;
		case -1261034125:
			return 924313143;
		case 1787203230:
			return 626082474;
		case 1737771952:
			return -653022672;
		case -1254096446:
			return -942045252;
		case 61577350:
			return -38767767;
		case 1566650197:
			if (func_2124(func_1315(3)) == 0)
			{
				return -194659462;
			}
			else
			{
				return -2099454688;
			}
			break;
		case -572653278:
			return -549220042;
		case -532692958:
			return 293303717;
		case -1594812622:
			return -1890586292;
		case -358162791:
			return -2122099277;
		case 368626453:
			return -1681356223;
		case 543847666:
			return -830115910;
		case 888242611:
			return 1211786018;
		case 1712504077:
			return 1124096174;
		case -634222073:
			return -911614461;
		case 662019373:
			return -662209602;
		case 1032348365:
			return 1799528770;
		case -1449342224:
			return 1560872143;
		case 1786928078:
			return -1764788133;
	}
	return -1;
}

void func_831(int iParam0)
{
	bVar0 = _0x038b1f1674f0e242(Global_35);
	if (iParam0 == 0)
	{
		if (!bVar0 || !(*Global_1911894)[iParam0]->f_5)
		{
			iVar1 = _0xbe1067cd1c9570f6((*Global_1911894)[iParam0]->f_3);
			if (iVar1 != 0)
			{
				_0x51de09a2196bd951(iVar1, -1028267229);
				if (bVar0)
				{
					(*Global_1911894)[iParam0]->f_5 = 1;
				}
			}
		}
	}
}

void func_832(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

bool func_833(char* sParam0, int iParam1, var uParam2)
{
	if (!does_script_exist(sParam0))
	{
		return false;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return false;
	}
	*uParam2 = start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return true;
}

bool func_834()
{
	if (((Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2) || func_915()) || func_913())
	{
		return true;
	}
	return false;
}

bool func_835(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1572887->f_12 == -1)
	{
		if (is_entity_dead(Global_35))
		{
			return false;
		}
		if (&Global_1347343 != -1)
		{
			return false;
		}
	}
	else if (!bParam3 && Global_1572887->f_80.f_63 != 0)
	{
		return false;
	}
	if (!is_entity_dead(Global_35))
	{
		if (_0x038b1f1674f0e242(Global_35))
		{
			return false;
		}
		if (_0x4912dfe492db98cd(Global_35, "inInspectionMode"))
		{
			return false;
		}
	}
	if (!bParam1 && (Global_1914319->f_17370 || Global_1914319->f_18996.f_1))
	{
		return false;
	}
	if (func_1844())
	{
		return false;
	}
	if (bParam0 && !is_player_control_on(get_player_index()))
	{
		return false;
	}
	if (!bParam2 && (((Global_1935496->f_10 || Global_1935496->f_11) || Global_1935496->f_12) || Global_1935496->f_13))
	{
		return false;
	}
	if (Global_18)
	{
		return false;
	}
	if (!bParam3 && Global_1572887->f_12 != -1)
	{
		iVar0 = network_player_id_to_int();
		if (Global_1572887->f_80.f_63 > 7 && Global_1572887->f_80.f_63 < 10)
		{
			return false;
		}
		if ((*Global_262777)[iVar0]->f_72 & 74752 != 0)
		{
			return true;
		}
		if ((*Global_262777)[iVar0]->f_1.f_16 != 0 && Global_265238->f_79565.f_278 & 8192 == 0)
		{
			return false;
		}
		if ((*Global_262777)[iVar0]->f_1 != 255 && Global_265238->f_79565.f_278 & 8192 == 0)
		{
			return false;
		}
		if (Global_1181810->f_9810 != -1)
		{
			return false;
		}
		if ((*Global_1126349)[iVar0]->f_34 & 1 != 0)
		{
			return false;
		}
	}
	return true;
}

int func_836(int iParam0)
{
	return iParam0;
}

void func_837()
{
	Global_1935689->f_1225.f_2 = _0xd7db94ab78e8ebe4("", -1379787959);
	Global_1935689->f_1225.f_1 = _databinding_add_data_bool_by_hash(Global_1935689->f_1225.f_2, -97511012, 0);
	Global_1935689->f_1225.f_3 = _databinding_add_ui_item_list_by_hash(Global_1935689->f_1225.f_2, 904318604);
	_databinding_clear_binding_array(Global_1935689->f_1225.f_3);
	Global_1935689->f_1225.f_1209 = get_game_timer();
}

void func_838(struct<4> Param0, int iParam4)
{
	switch (iParam4)
	{
		case 778915895:
			if (_databinding_read_data_bool_from_parent(Param0.f_3, func_2125(78)))
			{
				return;
			}
			else if (!func_941(3))
			{
				func_839(Param0.f_3);
			}
			_databinding_write_data_bool_from_parent(Param0.f_3, func_2125(78), 1);
			func_2126(Param0.f_3);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

void func_839(int iParam0)
{
	if (!_databinding_is_data_id_valid(iParam0))
	{
		return;
	}
	iVar0 = _databinding_read_data_int_from_parent(iParam0, func_2125(79));
	switch (iVar0)
	{
		case 1:
			func_2127(_databinding_read_data_int_from_parent(iParam0, func_2125(50)), 1);
			break;
	}
	func_2128(iParam0);
}

bool func_840()
{
	if ((((func_875(0) && !func_841()) || func_2129()) || Global_1935689->f_1) || func_505())
	{
		return false;
	}
	return true;
}

bool func_841()
{
	return Global_1914319->f_17375;
}

bool func_842(int iParam0, bool bParam1)
{
	if (bParam1 && !func_321(iParam0))
	{
		return false;
	}
	iVar0 = func_836(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_843(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_2130(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_2131(&Var0, func_959(0));
	}
	if (!func_2132(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_907(iVar14);
	return uVar15;
}

bool func_844()
{
	return func_692(Global_40.f_12019.f_42, 1);
}

bool func_845(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_2133(Global_35))
	{
		bParam2 = true;
	}
	bVar0 = false;
	if (!bParam2 && !bParam1)
	{
		if (Global_1935496->f_28 == Global_1935496->f_27)
		{
			return bVar0;
		}
	}
	iVar1 = -1;
	iVar3 = 0;
	Var4.f_9 = -1591664384;
	Var18 = { func_2130(0, 1084182731, -1591664384, -1591664384, 0, 0) };
	if (func_2132(&Var18, &iVar1, &iVar2, bParam3))
	{
		iVar32 = Global_36637 + 150;
		if (!bParam4)
		{
			if (iVar32 >= iVar2)
			{
				iVar32 = (iVar2 - 1);
				bVar0 = true;
			}
		}
		else
		{
			Global_36637 = 0;
			iVar32 = (iVar2 - 1);
			bVar0 = true;
		}
		iVar3 = Global_36637;
		while (iVar3 <= iVar32)
		{
			if (func_905(&Var4, iVar3, iVar1, iVar2))
			{
				if (!func_2134(Var4.f_4))
				{
				}
				else
				{
					if (bParam1)
					{
						func_2135(iParam0, Var4.f_4, 1);
					}
					else if (bParam2)
					{
						func_2135(iParam0, Var4.f_4, 0);
					}
					else if (Var4.f_4 != 1259508039)
					{
						func_2135(iParam0, Var4.f_4, func_2136(Var4.f_4));
					}
					Global_36637 = iVar3;
				}
				iVar3++;
				if (bVar0)
				{
					Global_36637 = 0;
					Global_1935496->f_28 = Global_1935496->f_27;
				}
				func_907(iVar1);
				return bVar0;
			}
		}
	}
}

void func_846(int iParam0)
{
	func_2135(iParam0, -160924582, func_849(32));
	func_2135(iParam0, -1016714371, func_849(64));
	func_2135(iParam0, -1516555556, func_849(1024));
	func_2137(iParam0, func_849(16384));
	func_2138(iParam0, func_849(128));
	func_2139(iParam0, func_849(4));
	func_2140(iParam0, func_849(8));
}

struct<2> func_847(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_848(int iParam0)
{
	if (func_129(32))
	{
		return;
	}
	func_83(32);
	if (func_2141(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_254(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_2142(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_2143(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_961(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_2144(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_2145(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_2146(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (is_ped_in_cover(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_82() == 0 && _0xb655db7582aec805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (_0x7fc84e85d98f063d(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || _0xc8b29d18022ea2b7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (is_ped_running(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_2142(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (is_ped_using_any_scenario(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (_get_scenario_point_type_ped_is_using(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (is_cinematic_cam_rendering())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (_0x1204eb53a5fbc63d())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (is_ped_getting_up(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_2147(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_2148(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_2149(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_2150())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (does_entity_exist(iParam0))
	{
		if (func_1143(iParam0))
		{
			switch (get_entity_model(iParam0))
			{
				case -1230516683:
				case 594040097:
				case 1772321403:
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (_is_metaped_using_component(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (is_ped_on_vehicle(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_82() == -1 && func_391(32768)) || func_2151()) || func_2152()) || (func_124() && !func_2153())) || get_entity_submerged_level(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_586(Global_35, 1, 0, 0) == -1415022764)
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

bool func_849(int iParam0)
{
	return func_2154(iParam0);
}

int func_850()
{
	return 33284224;
}

int func_851(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((Global_1935496->f_29 && iParam2) != 0)
	{
		Global_1935496->f_27 = (Global_1935496->f_27 - (Global_1935496->f_27 && iParam2));
		return 0;
	}
	else
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1);
		Stack.Push(0);
		Call_Loc(iParam3);
		if (func_227(StackVal, StackVal, StackVal, StackVal))
		{
			Global_1935496->f_27 = (Global_1935496->f_27 || iParam2);
			return 1;
		}
		else
		{
			Global_1935496->f_27 = (Global_1935496->f_27 - (Global_1935496->f_27 && iParam2));
			return 0;
		}
	}
	return 0;
}

int func_852()
{
	return 33537239;
}

int func_853()
{
	return 26983431;
}

bool func_854()
{
	return func_2155();
}

void func_855(int iParam0)
{
	func_127(&(Global_1935496->f_27), iParam0);
}

bool func_856(int iParam0)
{
	return func_2157(func_2156(iParam0));
}

bool func_857(int iParam0)
{
	return (Global_1935496->f_29 && iParam0) != 0;
}

int func_858()
{
	return func_2158();
}

void func_859(int iParam0)
{
	func_126(&(Global_1935496->f_27), iParam0);
}

int func_860()
{
	return 33284224;
}

int func_861()
{
	return 16662519;
}

int func_862()
{
	return 16596983;
}

int func_863()
{
	return 16400295;
}

bool func_864()
{
	return Global_1935496->f_10;
}

bool func_865()
{
	return Global_1935496->f_11;
}

bool func_866()
{
	return Global_1935496->f_12;
}

bool func_867()
{
	return Global_1935496->f_13;
}

int func_868()
{
	return 26978304;
}

int func_869()
{
	return 18589696;
}

int func_870()
{
	return 26978448;
}

int func_871()
{
	return 33529847;
}

int func_872()
{
	return 32713860;
}

int func_873()
{
	return 32505855;
}

void func_874()
{
	Global_1935496->f_29 = 0;
}

bool func_875(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

void func_876(var uParam0, int iParam1)
{
	func_2159(uParam0, iParam1);
	func_2160(uParam0, iParam1);
	if (!Global_1935496->f_20)
	{
		iVar0 = -820096546;
		if (!func_321(&(Global_1935496->f_115[2])))
		{
			Global_1935496->f_115[2] = func_2161("HUD_SATCHEL", 1287709438, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, iVar0, 0);
			func_2162(&(Global_1935496->f_115[2]), 21, 1, 1);
			func_2162(&(Global_1935496->f_115[2]), 20, 1, 1);
			func_2162(&(Global_1935496->f_115[2]), 29, 1, 1);
		}
		if (func_739(-569063887, 1, 0) && !func_321(&(Global_1935496->f_115[0])))
		{
			Global_1935496->f_115[0] = func_2161("HUD_JOURNAL", -209515122, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, iVar0, 0);
			func_2162(&(Global_1935496->f_115[0]), 21, 1, 1);
			func_2162(&(Global_1935496->f_115[0]), 20, 1, 1);
			func_2162(&(Global_1935496->f_115[0]), 29, 1, 1);
		}
		if (!func_321(&(Global_1935496->f_115[1])))
		{
			Global_1935496->f_115[1] = func_2161("HUD_LOG", -2131587435, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 1, 1704213876, 0);
			func_2162(&(Global_1935496->f_115[1]), 21, 0, 1);
			func_2162(&(Global_1935496->f_115[1]), 20, 1, 1);
			func_2162(&(Global_1935496->f_115[1]), 20, 1, 1);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_321(&(Global_1935496->f_115[iVar1])))
			{
				func_2162(&(Global_1935496->f_115[iVar1]), 17, 1, 1);
				func_2162(&(Global_1935496->f_115[iVar1]), 13, 1, 1);
				func_2162(&(Global_1935496->f_115[iVar1]), 23, 1, 1);
				func_1850(&(Global_1935496->f_115[iVar1]), 0);
			}
			iVar1++;
		}
		Global_1935496->f_20 = 1;
	}
}

void func_877()
{
	bVar0 = func_2163();
	bVar1 = is_player_free_aiming(get_player_index());
	bVar2 = func_131(&Global_1935630, 32768);
	bVar3 = is_player_targetting_anything(get_player_index());
	if (bVar0)
	{
		if (!Global_1935496->f_22)
		{
			func_2164();
		}
	}
	else if (Global_1935496->f_22)
	{
		func_2165();
	}
	if (!bVar0 && _0xec7e480ff8bd0bed(Global_35))
	{
		bVar0 = true;
	}
	if (!bVar0 && bVar2)
	{
		bVar0 = true;
	}
	if ((bVar0 || bVar1) || !func_2166())
	{
		func_2167(2);
	}
	else
	{
		func_2168(2, 0);
	}
	if ((bVar0 || bVar1) || !func_2169())
	{
		func_2167(0);
	}
	else
	{
		func_2168(0, 0);
	}
	if ((!func_238() || bVar1) || bVar3)
	{
		func_2167(6);
	}
	else
	{
		func_2168(6, 1);
	}
	if (bVar1 || bVar2)
	{
		func_2167(1);
	}
	else
	{
		func_2168(1, 0);
	}
}

void func_878()
{
	Global_1935496->f_19 = 1;
	bVar0 = false;
	if (!Global_1935496->f_21)
	{
		Global_1935496->f_21 = 1;
		if (bVar0)
		{
			Global_1935496->f_5 = 1;
		}
	}
	if (bVar0 && is_control_just_pressed(0, -1929835875))
	{
		func_2170();
	}
	func_2172(704572841, func_2171(), 1);
	_0x2804658eb7d8a50b(5, -333019928);
}

int func_879()
{
	if (!func_739(-569063887, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return 0;
	}
	if (!func_849(16))
	{
		_0xbfff81e12a745a5f();
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_35) && !has_anim_event_fired(Global_35, 108107462))
	{
		return 0;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || func_2142(Global_35, 1369124074))
	{
		return 0;
	}
	if ((((((is_control_just_pressed(0, -473983589) || is_control_just_pressed(0, -719620017)) || is_control_just_pressed(0, 1367437629)) || is_control_just_pressed(0, 992265328)) || is_control_just_pressed(0, -1053137564)) || is_control_just_pressed(0, 129547951)) || is_control_just_pressed(0, -1300031296))
	{
		return 0;
	}
	iVar0 = -569063887;
	if (_0x3d10d7179d7034af(func_221(0), iVar0, 0))
	{
		return 0;
	}
	Global_36620 = get_game_timer() + 1000;
	func_824();
	disable_control_action(0, -209515122, false);
	_task_item_interaction(player_ped_id(), iVar0, 1928812891, 1, 0, -1082130432);
	return 1;
}

void func_880()
{
	func_327(Global_1935496->f_115[5], 1, 1);
	Global_1935496->f_67 = 0;
	Global_1935496->f_67.f_1 = 0;
	Global_1935496->f_67.f_2 = 0;
}

void func_881()
{
	if (func_321(&(Global_1935496->f_115[6])))
	{
		if (!Global_1935689->f_1 && !_0x038b1f1674f0e242(Global_35))
		{
			func_826(0);
		}
		func_2173();
		func_327(Global_1935496->f_115[6], 1, 1);
	}
}

bool func_882(int iParam0)
{
	iVar0 = iParam0;
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = get_entity_model(iVar0);
	if (func_966(iVar1) || func_967(iVar1))
	{
		return false;
	}
	return true;
}

bool func_883(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_884(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_884(int iParam0)
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

int func_885(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case 604357666:
			return -540812301;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case 1496579364:
			return -2055655009;
		case -1523757120:
			return -1506685618;
		case -403470324:
			return -852553462;
		case 1576849913:
			return -2105447887;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1516219602:
			return 1427053849;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case -1063137731:
			return 955937750;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case 1048964673:
			return 2059232991;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 446670976:
			return 1342496140;
		case 802784330:
			return -126555855;
		case 549900435:
			return 294243421;
		case -2063289686:
			return -997197050;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		case -216303527:
			return 1589164943;
		case -1356425746:
			return -1087523615;
		case -1760684159:
			return -496814209;
		case -548014618:
			return 2109055751;
		case 1800725969:
			return -776673611;
		case -1391147923:
			return 1764402253;
		case -646460384:
			return -1417310078;
		case -1181161469:
			return 1096273915;
		case -1642485146:
			return 772751081;
		case -1486704931:
			return -1140435723;
		case 1139858530:
			return 2002524329;
		case -1053639984:
			return 1151530184;
		case -941733863:
			return -1266525037;
		case -1084397164:
			return -2018137175;
		case -575759638:
			return -574151692;
		case -1718100160:
			return 649786380;
		case 979093383:
			return -1921328920;
		case 1760888205:
			return -837607790;
		case 291878635:
			return 370424594;
		default:
			break;
	}
	return 0;
}

char[] func_886(int iParam0)
{
	StringCopy(&cVar0, func_2174(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_887(&cVar0);
}

char[] func_887(char[4] cParam0)
{
	return cParam0;
}

int func_888(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, 7);
	return iVar0;
}

char* func_889(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -540812301:
			return "COAT_FEWSPOTTED";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -2055655009:
			return "COAT_REDCH";
		case -1506685618:
			return "COAT_REDCH";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -2105447887:
			return "COAT_WARPEDBRINDLE";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1427053849:
			return "COAT_BUTTERMILKBUCKSKIN";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 955937750:
			return "COAT_LIVERCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case 2059232991:
			return "COAT_GOLDPALOMINO";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_NONE";
		default:
			break;
	}
	return "";
}

int func_890(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_base_rank(iParam0, func_2175());
	return iVar0;
}

int func_891(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_bonus_rank(iParam0, func_2175());
	return iVar0;
}

int func_892(int iParam0, int iParam1, int iParam2)
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

int func_893(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_base_rank(iParam0, func_2176());
	return iVar0;
}

int func_894(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_bonus_rank(iParam0, func_2176());
	return iVar0;
}

int func_895(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = func_2177(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

bool func_897()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_898(bool bParam0)
{
	if (func_2178(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_2178(2) && !Global_1392040->f_2) && get_game_timer() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = func_2179(Global_35);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_89("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_89("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_2178(4194304))
	{
		return 0;
	}
	return 1;
}

int func_899(bool bParam0)
{
	if (_is_ped_carrying(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_900(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_35))
	{
		return 0;
	}
	else if (is_ped_in_any_vehicle(Global_35, true))
	{
		if (!is_ped_in_any_vehicle(Global_35, false))
		{
			return 0;
		}
		iVar0 = get_vehicle_ped_is_using(Global_35);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_692(iParam1, 32) && !is_ped_on_mount(Global_35))
		{
			if (_0x2963b5c1637e8a27(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return 0;
	}
	return 1;
}

bool func_901(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

int func_902(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return 0;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return 0;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_903()
{
	if (func_2180())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

bool func_904(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_221(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_905(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_906(int iParam0, int iParam1)
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

int func_907(int iParam0)
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

bool func_908(char* sParam0, int iParam1)
{
	if (!does_script_exist(sParam0))
	{
		return false;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return false;
	}
	start_new_script(sParam0, iParam1);
	set_script_as_no_longer_needed(sParam0);
	return true;
}

bool func_909()
{
	if (Global_1392040->f_2)
	{
		return false;
	}
	if (func_124())
	{
		return false;
	}
	if (func_925())
	{
		return false;
	}
	if (Global_1935496->f_10)
	{
		return false;
	}
	if (Global_1935496->f_11)
	{
		return false;
	}
	if (Global_1935496->f_12)
	{
		return false;
	}
	if (!func_767(15))
	{
		return false;
	}
	if (func_897())
	{
		return false;
	}
	if (func_2181(8192))
	{
		return false;
	}
	if (_0x0c3cb2e600c8977d(Global_35, 1))
	{
		return false;
	}
	if (func_1099())
	{
		return false;
	}
	if (func_501(8388608))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_35);
		iVar1 = iVar0;
		if (((iVar1 == 1020517461 || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052)
		{
			return true;
		}
		return false;
	}
	if (!func_961(0, 1))
	{
		return false;
	}
	return true;
}

int func_910(int iParam0)
{
	switch (iParam0)
	{
		case -2145890973:
		case -2073130256:
		case -1910795227:
		case -1302821723:
		case -1210546580:
		case -1076508705:
		case -1028170431:
		case -861544272:
		case -575340245:
		case -564099192:
		case -466687768:
		case -292997097:
		case -164963696:
		case 98537260:
		case 111281960:
		case 386506078:
		case 510312109:
		case 729471181:
		case 831859211:
		case 1095117488:
		case 1104697660:
		case 1205982615:
		case 1459778951:
		case 1582986780:
		case 1784941179:
			return 166398389;
		case -1797625440:
		case -1790499186:
		case -1550768676:
		case -1414989025:
		case -1211566332:
		case -1170118274:
		case -1134449699:
		case -229688157:
		case 252669332:
		case 480688259:
		case 545068538:
		case 759906147:
		case 846659001:
		case 989669666:
		case 1458540991:
		case 1464167925:
		case 1465438313:
			return -467118139;
		case -1854059305:
		case -1451393780:
		case -930822792:
		case -593056309:
		case -407730502:
		case 1502581273:
			return 524620511;
		case -2116748615:
		case -2022921611:
		case -711779521:
		case 703712157:
		case 1493541632:
		case 1538187374:
		case 1867262572:
			return -1768405210;
		case -1568716381:
		case -753902995:
		case 40345436:
			return -546209848;
		case -1981561472:
		case -1884490195:
		case -1553593715:
		case -1182983171:
		case -452224784:
		case -300867788:
		case -243188398:
		case 1520661:
		case 122748261:
		case 264156159:
		case 463643368:
		case 513249462:
		case 697075200:
		case 706485280:
		case 1860580756:
			return 880496229;
		case -2063183075:
		case -2011226991:
		case -466054788:
		case -166054593:
		case 723190474:
		case 2023522846:
		case 2079703102:
			return 2058993648;
		case -50684386:
		case 195700131:
		case 556355544:
		case 1556473961:
			return -1535978095;
		case -2021043433:
		case -1963605336:
		case -1098441944:
		case 1110710183:
		case 1755643085:
			return -151108755;
		case 1007418994:
		case 1751700893:
		case 2028722809:
			return 1663095412;
		case -1003616053:
		case -541762431:
		case 1416324601:
		case 2105463796:
			return -348823399;
		case 41707457:
		case 134747314:
		case 490159652:
		case 543892122:
			return -1240620284;
		case -1797450568:
		case 1265966684:
		case 1746830155:
			return 532201260;
		case -1892280447:
		case -1598866821:
		case -1295720802:
		case -1143398950:
		case -1124266369:
		case -885451903:
		case -829273561:
		case 90264823:
		case 730092646:
		case 1654513481:
			return 1610737930;
		case -2037578922:
			return -1277667710;
	}
	return 0;
}

void func_911(int iParam0)
{
	if (!func_501(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_912(int iParam0)
{
	if (func_501(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

bool func_913()
{
	if (Global_1935689->f_17 == 3)
	{
		return true;
	}
	return false;
}

bool func_914(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_231(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1948(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_2182(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1949(iParam0, Var0, Var0.f_4, bParam4) };
	return func_2183(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_915()
{
	if (func_1304(Global_35, 0))
	{
		if (_is_ped_using_scenario_hash(Global_35, 1855656219))
		{
			return true;
		}
	}
	return false;
}

void func_916(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_917()
{
	return Global_1357549->f_1672;
}

bool func_918(int iParam0, bool bParam1)
{
	if (!func_231(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689->f_8)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_2184(iParam0);
		if (func_906(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_227(&uVar1, _0x0501d52d24ea8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_2151())
		{
			return false;
		}
	}
	if (!func_739(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_919(int iParam0)
{
	if (func_232(iParam0) == -1650247667)
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_221(0), iParam0, func_875(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			if (!Global_1392040->f_2)
			{
				func_961(1, 1);
				_0x565eaa726b2ce3b7(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1807503187:
			func_89(_create_var_string(0, 163043886, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

void func_920(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730:
			break;
		case -1952196650:
			if (func_2058())
			{
				func_2059(998229694, 0);
			}
			else if (_journal_can_write_entry(998229694))
			{
				func_2059(1610852701, 0);
			}
			break;
		case -1566711999:
			func_2059(-1741315348, 0);
			break;
		case -1237758927:
			break;
		case -631796932:
			func_2185((*Global_1347702)[80]->f_15, 1);
			if (func_2058() == 1)
			{
				func_2059(1565950479, 0);
			}
			else if (_journal_can_write_entry(1565950479))
			{
				if (func_2186(77))
				{
					func_2059(-553142873, 0);
				}
				else
				{
					func_2059(-384883866, 0);
				}
			}
			break;
		case 581047644:
			if ((func_709() && !func_1972(51)) && !func_2187(1048576))
			{
				func_2188(2);
				func_1980(51, 0, 0, 0, 0, -1, 0);
				func_1978(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_2189(1048576);
			}
			break;
		case -625427311:
			if ((func_709() && !func_1972(51)) && !func_2187(16384))
			{
				func_2188(1);
				func_1980(51, 0, 0, 0, 0, -1, 0);
				func_1978(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_2189(16384);
			}
			break;
		case -644199619:
			if ((func_709() && !func_1972(40)) && !func_2190(32))
			{
				func_2191(4);
				func_1980(39, 0, 0, 0, 0, -1, 0);
				func_1978(39, 0, 0, 0, 0, 0, 2, 0);
				func_2192(32);
			}
			break;
		case 684296857:
			if ((func_709() && !func_1972(42)) && !func_2193(16))
			{
				func_2194(8);
				func_1980(41, 0, 0, 0, 0, -1, 0);
				func_1978(41, 0, 0, 0, 0, 0, 2, 0);
				func_2195(16);
			}
			break;
		case 466137807:
			if ((func_709() && !func_1972(50)) && !func_2196(32))
			{
				func_2197(4);
				func_1980(49, 0, 0, 0, 0, -1, 0);
				func_1978(49, 0, 0, 0, 0, 0, 2, 0);
				func_2198(32);
				if (!func_1053((*Global_1347702)[50]->f_15, 1))
				{
					if (func_2058() == 1)
					{
						func_2059(-629995342, 0);
					}
					else if (_journal_can_write_entry(-629995342))
					{
						func_2059(-1367572831, 0);
					}
				}
			}
			break;
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_921(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992:
			func_2194(16);
			break;
	}
}

void func_922(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case -1280336729:
		case -691125380:
		case -287018478:
		case 305626647:
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

bool func_923(int iParam0)
{
	return true;
}

bool func_924(int iParam0, bool bParam1, bool bParam2)
{
	if (func_2199(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1911773 = get_game_timer() + 3000;
		return true;
	}
	switch (func_827(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_2200(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_1942())
				{
					if (func_2201(&Global_35))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_89("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1911773 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_2202(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_2203(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_2204(iParam0, is_ped_in_combat(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_35, 0))
				{
					func_2205(iParam0);
				}
				else
				{
					func_2206(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_2207(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_2208(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_2209(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_2210(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_2211(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_2212(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_2213(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_2214(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_2215(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_2216(iParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_925()
{
	return Global_1894899 & 2 != 0;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_927(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_232(iParam0) == -1037537535)
	{
		if (func_522(iParam0) == -999503751)
		{
			iVar0 = func_931(iParam0);
			if ((iVar0 != -1 && !func_2217(iVar0)) || !func_739(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

int func_928(int iParam0, int iParam1)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_500(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_35) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_35))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_35)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_2218(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_929(int iParam0)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_500(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_2219())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

bool func_930(int iParam0, int iParam1, bool bParam2)
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

int func_931(int iParam0)
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

void func_932(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1961(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_2220(Var0);
}

int func_933(int iParam0, bool bParam1)
{
	if (!func_2155())
	{
		return 0;
	}
	if (!func_2221(iParam0))
	{
		return 0;
	}
	if (func_2222(iParam0))
	{
		iVar0 = 0;
		if (func_522(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_126(&iVar0, 2);
			}
		}
		return func_2223(iParam0, iVar0);
	}
	return 0;
}

void func_934(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_733(Global_35, -2065815962, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_731(iParam0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_733(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_559(32768))
	{
		knock_off_ped_prop(Global_35, false, true, false, true);
		func_732();
		func_1961(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0])
	{
		func_731(iParam0, 1);
		return;
	}
	if (func_2029(-2061583405, 0))
	{
		if (func_2028(iVar1))
		{
			func_731(iVar1, 0);
		}
		else
		{
			func_1650(iVar1, 1, 1, 0);
		}
		func_731(iParam0, 1);
		return;
	}
	if (func_2028(iVar1))
	{
		func_731(iVar1, 0);
		func_731(iParam0, 1);
	}
	else if (func_2028(iParam0))
	{
		if (iParam0 != func_2224(0))
		{
			func_2225(iParam0, iVar1);
			func_731(iParam0, 0);
			func_731(iVar1, 0);
		}
		else
		{
			knock_off_ped_prop(Global_35, false, true, false, true);
			func_1961(128);
			func_731(iParam0, 1);
		}
	}
}

void func_935(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_936()
{
	if (func_2226())
	{
		return;
	}
	if (func_2227())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_89(func_2228(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

bool func_937(int iParam0)
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_636(iParam0))
	{
		return false;
	}
	return func_320((*Global_1347702)[iParam0]->f_15);
}

bool func_938(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_939()
{
	return Global_40.f_1095.f_3054.f_1;
}

bool func_940(int iParam0)
{
	if (!func_2229(32))
	{
		return false;
	}
	if (!_unlock_is_unlocked(-75008140))
	{
		return false;
	}
	if (!func_2230())
	{
		return false;
	}
	if (func_1816(16))
	{
		return false;
	}
	if (!_0xd6f6acf4392187fb(Global_1225639->f_14) || !_0x424b17a7dc5c90bc(int_to_playerindex(&Global_1225639)))
	{
		return false;
	}
	if (iParam0 == 1 && func_123(Global_1131433->f_8, 1))
	{
		return false;
	}
	return true;
}

bool func_941(int iParam0)
{
	if (!func_840())
	{
		return false;
	}
	func_208(iParam0);
	Global_1898068->f_4 = 1;
	return true;
}

bool func_942(int iParam0)
{
	return func_123(Global_1131433->f_8, iParam0);
}

void func_943(int iParam0)
{
	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_2232(Var0, func_2231(0, 15), 0, 0);
}

int func_944(int iParam0)
{
	if (!func_282(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_945()
{
	iVar0 = func_335();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_946()
{
	return &Global_1395601;
}

int func_947(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_231(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_761(iParam0, 1);
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
			func_952(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_739(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_2025(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_210(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_210(iParam0, 0, 0) - iParam1) < 0)
		{
			func_947(iParam0, func_210(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_232(iParam0) == -427144552)
	{
		if (!func_2233(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_914(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_995(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_952(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_2234(iParam0, iParam1);
	return 1;
}

void func_948(bool bParam0)
{
	if ((func_82() != -1 || !bParam0) || func_2235(Global_35))
	{
		func_2236();
		return;
	}
	if (func_501(8388608) && !func_692(Global_1392040->f_1, 2048))
	{
		func_911(16777216);
		return;
	}
	func_2236();
}

bool func_949()
{
	return !&Global_1911774;
}

void func_950()
{
	Global_1911774 = 0;
}

bool func_951()
{
	return Global_1911774->f_3 == 0;
}

void func_952(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_231(iParam0, 0))
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
	if (!func_949())
	{
		func_2237(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1628(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1628(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1981(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_232(iParam0);
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
	else if (!func_2238(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_2239(_create_var_string(10, &cVar2, _create_var_string(0, func_2015(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_906(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_2015(iParam0));
	}
	func_1743(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_953()
{
	Global_1911774->f_3 = 0;
}

void func_954(int iParam0, var uParam1, struct<4> Param2)
{
	disable_control_action(0, -822242784, false);
	if (is_ped_on_mount(Global_35) && !func_901(Global_35))
	{
		return;
	}
	else if (is_ped_getting_into_a_vehicle(Global_35))
	{
		return;
	}
	else if (is_ped_reloading(Global_35))
	{
		return;
	}
	if (iParam0 == 1)
	{
		uVar0 = uParam1;
		if (!Global_1935496->f_9 && !_0x4912dfe492db98cd(Global_35, "inInspectionMode"))
		{
			_task_item_interaction_3(player_ped_id(), uVar0, &Param2, 0, 0, 0, -1082130432);
			Global_1935496->f_8 = 1;
			Global_1935496->f_55 = { Param2 };
		}
	}
}

void func_955(int iParam0)
{
	if (Global_1935496->f_72.f_41 <= 0)
	{
		return;
	}
	Var1.f_1 = -1;
	iVar0 = 0;
	while (iVar0 <= Global_1935496->f_72.f_41)
	{
		Var1 = { *Global_1935496->f_72[iVar0] };
		if (!func_231(Var1, 0))
		{
		}
		else
		{
			func_2240(iParam0, &Var1);
			func_2241(iVar0);
			iVar0++;
		}
	}
	Global_1935496->f_72.f_41 = 0;
}

void func_956()
{
	iVar0 = 0;
	while (iVar0 <= Global_1935496->f_72.f_41)
	{
		if (!func_2241(iVar0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	Global_1935496->f_72.f_41 = 0;
}

bool func_957()
{
	iVar0 = func_500(7);
	fVar1 = -1f;
	if (!is_entity_dead(iVar0))
	{
		if (func_1520(7) != 0)
		{
			fVar1 = func_511(7);
			if (fVar1 != -1f)
			{
				if (func_938(Global_35, iVar0, fVar1, 1))
				{
					return false;
				}
			}
		}
	}
	if (func_939() != 0)
	{
		if (does_entity_exist(Global_1900383->f_393))
		{
			if (func_938(Global_35, Global_1900383->f_393, 5f, 1))
			{
				return false;
			}
		}
	}
	return true;
}

struct<4> func_958(bool bParam0)
{
	return func_1949(1328661203, func_587(), -1591664384, bParam0);
}

struct<4> func_959(bool bParam0)
{
	iVar0 = func_221(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1949(923904168, func_958(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1949(923904168, func_958(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1949(923904168, func_958(bParam0), -740156546, 0);
}

int func_960(int iParam0, int iParam1)
{
	if (func_82() == -1)
	{
		if (func_2242(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_82() == 0)
	{
		if (func_2242(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool func_961(bool bParam0, bool bParam1)
{
	if (func_82() == 0)
	{
		return _databinding_read_data_bool(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_2243())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2141(Global_35))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1698())
	{
		if (bParam0)
		{
			if (func_335() != 8 && func_335() != 7)
			{
				func_89("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_89("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (does_entity_exist(iVar0))
		{
			if (!is_entity_dead(iVar0))
			{
				if (is_entity_in_air(iVar0, 1) || is_ped_swimming(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (is_entity_in_air(Global_35, 1) || is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_interior_scene())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_138(player_id(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (_0x26934083d3f2579c(player_id()))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (is_ped_active_in_scenario(Global_35, 1))
		{
			if (bParam0)
			{
				func_89("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_2244(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2245())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2246(-608558181) || _get_number_of_references_of_script_with_name_hash(-608558181) > 0)
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (is_minigame_in_progress())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((is_ped_in_any_vehicle(Global_35, false) || (!is_ped_ragdoll(Global_35) && is_ped_on_vehicle(Global_35, false))) || is_ped_in_any_boat(Global_35)) || is_player_riding_train(player_id())) || is_ped_jacking(Global_35))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_272(0, 1, 1) && !func_2247(1))
	{
		if (bParam0)
		{
			if (func_357(15))
			{
				func_89("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_89("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_113() == 8)
	{
		return false;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_547(8388608))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_501(8388608))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_654(func_178()))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_1099() || func_2095(func_178()) == 9) || func_2248(func_178())) && !func_2249())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_254(Global_35))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2250())
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (get_distance_between_coords(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { _0x6de03bcc15e81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_1406(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2251(Global_36, 5f))
	{
		if (bParam0)
		{
			func_89("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (vdist2(Global_36, (*Global_1347702)[74]->f_24) < 144f && _get_number_of_references_of_script_with_name_hash(1822247127) > 0)
	{
		return false;
	}
	return true;
}

void func_962(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	iVar0 = compendium_get_map_discoverable_from_stat_item(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !_map_is_discovery_active(iVar1))
	{
		_0xd8c7162ab2e2af45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		compendium_animal_observed_by_stat_name(iParam0, iParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == 225514697)
		{
			iVar2 = func_2252(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_2059(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_2252(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (_journal_can_write_entry(iVar2))
				{
					iVar2 = func_2252(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_2059(iVar2, 0);
					}
				}
			}
		}
	}
}

bool func_963(var uParam0)
{
	if (!does_entity_exist(uParam0->f_11))
	{
		return false;
	}
	if (!is_entity_a_ped(uParam0->f_11))
	{
		return false;
	}
	if (_launch_app_by_hash_with_entry(1749944028, -649639953) != 0)
	{
		return false;
	}
	iVar0 = get_entity_model(uParam0->f_11);
	iVar1 = get_ped_index_from_entity_index(uParam0->f_11);
	*uParam0 = _databinding_add_data_container_from_path("", "InfoBox");
	_databinding_add_data_bool(*uParam0, "isVisible", true);
	_databinding_add_data_bool(*uParam0, "showHorseStats", true);
	sVar3 = _0x0139637a3bff8b6d(uParam0->f_11, &uVar2);
	StringCopy(&cVar4, _create_var_string(0, sVar3), 128);
	_databinding_add_data_string(*uParam0, "itemLabel", &cVar4);
	func_245(iVar1, _0x964000d355219fc0(iVar1), 1, 0);
	iVar20 = compendium_get_short_description_from_ped(iVar1);
	_databinding_add_data_hash(*uParam0, "itemDescription", iVar20);
	iVar21 = func_885(iVar0);
	sVar22 = "";
	StringCopy(&cVar23, func_886(iVar21), 64);
	sVar22 = func_887(&cVar23);
	iVar31 = player_id();
	bVar32 = false;
	if (_0x46fa0ae18f4c7fa9(iVar31) == iVar1)
	{
		bVar32 = true;
	}
	bVar33 = false;
	if (_0xd3f7445cea2e5035(iVar31) == iVar1)
	{
		bVar33 = true;
	}
	bVar34 = false;
	if (bVar32 || bVar33)
	{
		bVar34 = true;
	}
	_databinding_add_data_bool(uParam0->f_1, "visible", true);
	_databinding_add_data_bool(uParam0->f_1, "showHorseStats", true);
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "horseRpgStats");
	iVar35 = func_2253(iVar1);
	fVar36 = _0x22f2a386d43048a9(iVar1);
	iVar37 = func_2254(iVar1, 1);
	iVar38 = round((IntToFloat(iVar37) * 0.15f));
	uParam0->f_1.f_1 = _databinding_add_data_container(uParam0->f_1, "stamina");
	_databinding_add_data_int(uParam0->f_1.f_1, "unlockedMaxAsState", iVar35);
	_databinding_add_data_float(uParam0->f_1.f_1, "normalizedValue", fVar36);
	_databinding_add_data_float(uParam0->f_1.f_1, "normalizedUnlockedMax", fVar36);
	uParam0->f_1.f_2 = _databinding_add_data_container(uParam0->f_1.f_1, "staminaCore");
	uParam0->f_1.f_3 = _databinding_add_data_container(uParam0->f_1.f_2, "status");
	_databinding_add_data_int(uParam0->f_1.f_3, "state", iVar38);
	iVar39 = func_2255(iVar1);
	iVar40 = get_entity_health(iVar1);
	iVar41 = get_entity_max_health(iVar1, false);
	fVar42 = (to_float(iVar40) / to_float(iVar41));
	iVar43 = func_2254(iVar1, 0);
	iVar44 = round((IntToFloat(iVar43) * 0.15f));
	uParam0->f_1.f_4 = _databinding_add_data_container(uParam0->f_1, "health");
	_databinding_add_data_int(uParam0->f_1.f_4, "unlockedMaxAsState", iVar39);
	_databinding_add_data_float(uParam0->f_1.f_4, "normalizedValue", fVar42);
	_databinding_add_data_float(uParam0->f_1.f_4, "normalizedUnlockedMax", fVar42);
	uParam0->f_1.f_5 = _databinding_add_data_container(uParam0->f_1.f_4, "healthCore");
	uParam0->f_1.f_6 = _databinding_add_data_container(uParam0->f_1.f_5, "status");
	_databinding_add_data_int(uParam0->f_1.f_6, "state", iVar44);
	func_250(uParam0);
	sVar45 = func_889(iVar21);
	_databinding_add_data_string(*uParam0, "horseName", _get_label_text_2(sVar22));
	_databinding_add_data_string(*uParam0, "HorseCoat", sVar45);
	iVar46 = func_890(iVar1);
	iVar47 = iVar46 + 1;
	_databinding_add_data_int(*uParam0, "HorseSpeedValue", iVar47);
	_databinding_add_data_int(*uParam0, "HorseSpeedMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseSpeedMaxValue", 10);
	iVar48 = func_891(iVar1);
	iVar49 = (iVar47 + iVar48);
	iVar49 = func_892(iVar49, 0, 10);
	_databinding_add_data_int(*uParam0, "HorseSpeedEquipmentValue", iVar49);
	_databinding_add_data_int(*uParam0, "HorseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseSpeedEquipmentMaxValue", 10);
	iVar50 = iVar47 + 3;
	iVar50 = func_892(iVar50, 0, 10);
	_databinding_add_data_int(*uParam0, "HorseSpeedCapacityValue", iVar50);
	_databinding_add_data_int(*uParam0, "HorseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseSpeedCapacityMaxValue", 10);
	iVar51 = func_893(iVar1);
	iVar52 = iVar51 + 1;
	_databinding_add_data_int(*uParam0, "HorseAccValue", iVar52);
	_databinding_add_data_int(*uParam0, "HorseAccMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseAccMaxValue", 10);
	iVar53 = func_894(iVar1);
	iVar54 = (iVar52 + iVar53);
	iVar54 = func_892(iVar54, 0, 10);
	_databinding_add_data_int(*uParam0, "HorseAccEquipmentValue", iVar54);
	_databinding_add_data_int(*uParam0, "HorseAccEquipmentMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseAccEquipmentMaxValue", 10);
	iVar55 = iVar52 + 2;
	iVar55 = func_892(iVar55, 0, 10);
	_databinding_add_data_int(*uParam0, "HorseAccCapacityValue", iVar55);
	_databinding_add_data_int(*uParam0, "HorseAccCapacityMinValue", 0);
	_databinding_add_data_int(*uParam0, "HorseAccCapacityMaxValue", 10);
	iVar56 = func_895(iVar1);
	sVar57 = func_896(iVar56);
	_databinding_add_data_string(*uParam0, "HorseHandling", sVar57);
	iVar58 = 0;
	if (bVar34 && is_ped_in_writhe(iVar1))
	{
		iVar58 = -7914336;
	}
	else if (bVar32)
	{
		iVar58 = -790855579;
	}
	else if (bVar33)
	{
		iVar58 = 592282892;
	}
	_databinding_add_data_hash(*uParam0, "itemTipText", iVar58);
	return true;
}

bool func_964(var uParam0)
{
	if (!does_entity_exist(uParam0->f_11))
	{
		return false;
	}
	if (_launch_app_by_hash_with_entry(1749944028, -1645363952) != 0)
	{
		return false;
	}
	*uParam0 = _databinding_add_data_container_from_path("", "InfoBox");
	_databinding_add_data_bool(*uParam0, "isVisible", true);
	sVar1 = _0x0139637a3bff8b6d(uParam0->f_11, &iVar0);
	StringCopy(&cVar2, _create_var_string(0, sVar1), 128);
	if (iVar0 == 1)
	{
		iVar18 = get_ped_index_from_entity_index(uParam0->f_11);
		iVar19 = _get_ped_quality(iVar18);
		if (iVar19 != -1)
		{
			if (iVar19 == 2)
			{
				StringCopy(&cVar20, "PED_QUALITY_HIGH", 128);
			}
			else if (iVar19 == 1)
			{
				StringCopy(&cVar20, "PED_QUALITY_MEDIUM", 128);
			}
			else
			{
				StringCopy(&cVar20, "PED_QUALITY_LOW", 128);
			}
			StringCopy(&cVar2, _create_var_string(42, "MORE_INFO_PED_QUALITY", _create_var_string(0, sVar1), &cVar20), 128);
		}
	}
	_databinding_add_data_string(*uParam0, "itemLabel", &cVar2);
	iVar36 = 0;
	if (is_entity_a_ped(uParam0->f_11))
	{
		iVar37 = get_ped_index_from_entity_index(uParam0->f_11);
		if (iVar37 == Global_1360165[12])
		{
			if (Global_40.f_39 == 11966224)
			{
				iVar36 = -1754697053;
			}
			else
			{
				iVar36 = -564301063;
			}
		}
		else
		{
			func_245(iVar37, _0x964000d355219fc0(iVar37), 1, 0);
			iVar36 = compendium_get_short_description_from_ped(iVar37);
		}
	}
	_databinding_add_data_hash(*uParam0, "itemDescription", iVar36);
	return true;
}

bool func_965(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_966(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return true;
	}
	return false;
}

bool func_967(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return true;
	}
	return false;
}

void func_968(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&(uParam0->f_28), 2);
	}
	else
	{
		clear_bit(&(uParam0->f_28), 2);
	}
}

void func_969(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&(uParam0->f_27), 0);
	}
	else
	{
		clear_bit(&(uParam0->f_27), 0);
	}
}

void func_970()
{
	Global_36560.f_3 = 0;
}

void func_971(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam1)[iVar0] = uParam0[iVar0];
		iVar0++;
	}
}

void func_972(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_973(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		if (get_event_at_index(0, iVar0) == -1509407906)
		{
			if (get_event_data(0, iVar0, iParam0, 2))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return false;
}

int func_974(float fParam0)
{
	return func_2256(get_entity_coords(Global_35, true, false), fParam0);
}

int func_975(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_82() != -1)
	{
		return &(Global_38105[iParam0]);
	}
	else
	{
		return &(Global_27573[iParam0]);
	}
	return 0;
}

int func_976(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -1781387050;
		case 20:
			return -597058368;
		case 23:
			return 128702355;
		case 26:
			return -2051332199;
		case 27:
			return 546981776;
		case 28:
			return -2013384490;
		case 29:
			return 228922461;
		case 31:
			return -746674788;
		case 33:
			return 599861917;
		case 34:
			return -1781387050;
		case 37:
			return 2006811763;
		case 38:
			return -90546043;
		case 39:
			return 1216456215;
		case 40:
			return 746300881;
		case 41:
			return -435006002;
		case 42:
			return -624139784;
		case 43:
			return -529638012;
		case 1:
			return -651064726;
		case 9:
			return -404270094;
		case 10:
			return -1521783510;
		case 14:
			return 1714875242;
		case 17:
			return 2093126853;
		case 21:
			return 728781265;
		case 22:
			return 1794857344;
		case 24:
			return 1952409553;
		case 25:
			return -150591160;
		case 30:
			return 1019229063;
		case 32:
			return -323969289;
		case 35:
			return 927763737;
		case 36:
			return 1504361882;
		default:
			break;
	}
	return 0;
}

int func_977(int iParam0)
{
	iVar0 = func_2257(iParam0, 0);
	if (does_entity_exist(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_2257(iParam0, 2);
	if (does_entity_exist(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_2257(iParam0, 1);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	uVar3 = _0x14169fa823679e41(iParam0);
	return uVar3;
}

void func_978(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

void func_979(var uParam0)
{
	iVar0 = func_992(uParam0);
	uParam0->f_15 = func_2258(iVar0);
	iVar1 = get_entity_model(iVar0);
	if (_0xc346a546612c49a9(iVar0))
	{
		switch (iVar1)
		{
			case -1003616053:
				break;
			case 1459778951:
				func_969(uParam0, 0);
				break;
			case 831859211:
				func_969(uParam0, 0);
				break;
			case 723190474:
				func_969(uParam0, 0);
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case -1892280447:
			case -1598866821:
				func_969(uParam0, 0);
				break;
			case -1124266369:
			case 730092646:
				func_969(uParam0, 1);
				break;
			case 1556473961:
				func_969(uParam0, 0);
				break;
			case 480688259:
				func_969(uParam0, 0);
				break;
			case 1110710183:
				break;
			case -541762431:
				func_969(uParam0, 0);
				break;
			case -1211566332:
				func_969(uParam0, 0);
				break;
			default:
				break;
		}
	}
	func_2259(uParam0, iVar1);
}

void func_980(var uParam0)
{
	uParam0->f_9 = 0;
	uParam0->f_28 = 0;
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar0 = 30;
	func_971(&uVar0, &(uParam0->f_46.f_2));
	func_2260(&(uParam0->f_46.f_37));
	if (uParam0->f_84.f_46)
	{
		uParam0->f_84.f_46 = 0;
		uParam0->f_84.f_16 = 0;
		uParam0->f_84.f_17 = -1;
		uParam0->f_84.f_18 = -1;
		uParam0->f_84.f_19 = 0;
		uParam0->f_84.f_43 = 0;
		uParam0->f_84.f_44 = 0;
		uParam0->f_84.f_45 = 0;
		uParam0->f_84.f_47 = -1;
		func_2261(&(uParam0->f_84), 0);
	}
	func_1014(*uParam0);
}

void func_981(var uParam0, int iParam1)
{
	uParam0->f_17 = iParam1;
}

void func_982()
{
	if (Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 0;
}

int func_983(var uParam0)
{
	return uParam0->f_1;
}

bool func_984(var uParam0)
{
	return is_bit_set(uParam0->f_27, 0);
}

void func_985(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	if (!is_string_null_or_empty(sParam2) || !is_string_null_or_empty(sParam3))
	{
		iVar0 = get_hash_key(sParam2);
		iVar1 = get_hash_key(sParam3);
	}
	if (!_0x927b810e43e99932(uParam0))
	{
		if ((_0xdd0b7c5ae58f721d(uParam0) && does_entity_exist(iParam1)) && (iVar0 != -1 || iVar1 != -1))
		{
			_0xb8b207c34285e978(uParam0);
			uParam0->f_16 = iParam1;
			uParam0->f_17 = iVar0;
			uParam0->f_18 = iVar1;
			_0x29e6655df3590b0d(uParam0);
		}
	}
	else if (((uParam0->f_16 != iParam1 && does_entity_exist(iParam1)) || uParam0->f_17 != iVar0) || uParam0->f_18 != iVar1)
	{
		uParam0->f_16 = iParam1;
		uParam0->f_17 = iVar0;
		uParam0->f_18 = iVar1;
		_0x29e6655df3590b0d(uParam0);
	}
}

void func_986(var uParam0, int iParam1)
{
	func_2262(&(uParam0->f_29));
	switch (&uParam0->f_2[iParam1])
	{
		case 0:
			func_2263(uParam0);
			break;
		case 1:
			func_2264(uParam0);
			break;
		case 2:
			func_2265(uParam0);
			break;
		case -1:
		default:
			break;
	}
}

bool func_987(var uParam0)
{
	return is_bit_set(uParam0->f_28, 2);
}

void func_988(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_989(var uParam0)
{
	return uParam0->f_25;
}

void func_990(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		uParam0->f_33[iVar0] = 0;
		iVar0++;
	}
	iVar2 = func_992(uParam0);
	uParam0->f_44 = _get_ped_damage(get_ped_index_from_entity_index(iVar2));
	if (func_739(-269048282, 1, 0))
	{
		if (uParam0->f_44 < 2 && get_random_int_in_range(0, 2) == 0)
		{
			iVar3 = uParam0->f_44;
			iVar3++;
			uParam0->f_44 = iVar3;
		}
	}
	iVar4 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar2));
	if (Global_36560.f_2 != 3)
	{
		iVar4 = Global_36560.f_2;
	}
	uParam0->f_45 = func_2266(get_ped_index_from_entity_index(iVar2), iVar4);
	_0x6b89faa36fc909a3(&(uParam0->f_33), get_ped_index_from_entity_index(iVar2), uParam0->f_44, uParam0->f_45);
	iVar1 = 0;
	while (iVar1 < uParam0->f_33)
	{
		if (&uParam0->f_33[iVar1] != 0)
		{
			if (func_1005(iVar2) && !func_2034(&(uParam0->f_33[iVar1])))
			{
				uParam0->f_33[iVar1] = 0;
			}
			else if (_0x4aef1fb5b9011d75(&(uParam0->f_33[iVar1])) && !func_993(iVar2))
			{
				iVar5 = get_ped_index_from_entity_index(iVar2);
				_0x9b47971234169990(iVar5, &(uParam0->f_33[iVar1]));
			}
		}
		iVar1++;
	}
	func_972(uParam0, 5);
}

bool func_991(var uParam0)
{
	return is_bit_set(uParam0->f_27, 1);
}

int func_992(var uParam0)
{
	return uParam0->f_16;
}

bool func_993(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -1797625440:
		case -1414989025:
		case -1211566332:
		case -1170118274:
		case -1134449699:
		case -541762431:
		case 1458540991:
			return true;
	}
	return false;
}

bool func_994(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -2021043433:
		case -1963605336:
		case -1003616053:
		case -753902995:
		case -541762431:
		case 252669332:
		case 1110710183:
		case 1556473961:
			return true;
	}
	return false;
}

bool func_995(bool bParam0)
{
	if (func_82() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_221(bParam0));
}

struct<12> func_996(var uParam0, var uParam1)
{
	iVar0 = 0;
	switch (uParam0->f_44)
	{
		case 0:
			switch (uParam0->f_45)
			{
				case 0:
					iVar0 = 1112574294;
					break;
				case 1:
					iVar0 = -132480015;
					break;
				case 2:
					iVar0 = 1838524355;
					break;
				case 3:
					iVar0 = 781424689;
					break;
				case 4:
					iVar0 = 1547693994;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_45)
			{
				case 0:
					iVar0 = -684991368;
					break;
				case 1:
					iVar0 = -832325162;
					break;
				case 2:
					iVar0 = -346003361;
					break;
				case 3:
					iVar0 = 264694784;
					break;
				case 4:
					iVar0 = -559967702;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_45)
			{
				case 0:
					iVar0 = 1341408997;
					break;
				case 1:
					iVar0 = -254777578;
					break;
				case 2:
					iVar0 = -379118674;
					break;
				case 3:
					iVar0 = -1624584872;
					break;
				case 4:
					iVar0 = 1526992527;
					break;
			}
			break;
	}
	func_2267(uParam1, 1884295263);
	func_2267(uParam1, iVar0);
	return *uParam1;
}

int func_997(int iParam0, var uParam1, int iParam2)
{
	return func_2268(iParam0, uParam1, &uVar0, iParam2);
}

void func_998(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1011(iParam0))
	{
		return;
	}
	if (func_906(iParam0, -1112814642) && func_906(iParam0, -1697809989))
	{
		func_2002(iParam0, 0, 0, 0);
	}
	if (!bParam2)
	{
		func_952(iParam0, iParam1, 0, 0, 0);
		Global_36560.f_15 = iParam0;
	}
}

void func_999(int iParam0)
{
	if (iParam0 == -923552142)
	{
		if (chal_is_goal_active(1231074654, 586762978))
		{
			chal_add_goal_progress_int(1231074654, 586762978, 1);
		}
	}
}

void func_1000(int iParam0)
{
	switch (iParam0)
	{
		case -923552142:
			func_2033(-1866642239);
			break;
		case -475820303:
			func_2033(-935543049);
			break;
		case 119626970:
			func_2033(102446365);
			break;
		case 1292673537:
			func_2033(924882045);
			break;
		default:
			break;
	}
}

void func_1001()
{
	if (!func_995(0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_36560.f_4[iVar0] != 0 && Global_36560.f_4[iVar0]->f_1 > 0)
		{
			func_740(&(Global_36560.f_4[iVar0]), Global_36560.f_4[iVar0]->f_1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			func_1743(_create_var_string(10, "ITEM_GET_PUMP_MULT", _create_var_string(0, func_2015(&(Global_36560.f_4[iVar0]))), Global_36560.f_4[iVar0]->f_1), "", 0, 0, 109029619, 0, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_1002()
{
	Global_1347477->f_139 = 0;
	Global_1347477->f_140 = 0;
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		default:
			break;
	}
	return 41;
}

void func_1004(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	iVar0 = func_2269(iParam0);
	fVar1 = func_2270(iParam0);
	if ((Global_1347477->f_117 || !func_361(31)) || !func_2271(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_2272(iVar0) >= 7)
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
	func_2273(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1743(_create_var_string(6, func_2274(iParam0), fVar1), "itemtype_textures", func_2275(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_1005(int iParam0)
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

int func_1006(int iParam0, var uParam1, int iParam2)
{
	Var0 = Global_1132155->f_10;
	Var0.f_2 = 1436525806;
	Var0.f_3 = iParam0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1339366851;
		_datafile_get_hash(&iVar5, &Var0);
		*uParam1 = func_2276(iVar5);
		Var0.f_2 = 327549336;
		_datafile_get_hash(&iVar5, &Var0);
		*iParam2 = func_2276(iVar5);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1007(int iParam0, bool bParam1, int iParam2)
{
	if (func_2277(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_2278(iParam0))
	{
		return 0;
	}
	if (!func_2280(func_2279(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_1008(int iParam0)
{
	if (func_2281())
	{
		return 1;
	}
	if (!func_2280(func_2282(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

void func_1009(int iParam0)
{
	if (func_2283())
	{
		return;
	}
	if (func_82() != 0)
	{
		return;
	}
	if (iParam0 > 5 || iParam0 < 0)
	{
		return;
	}
	iVar0 = func_2284(iParam0);
	if (iVar0 >= 5 || iVar0 <= 0)
	{
		return;
	}
	iVar1 = func_2285(iParam0);
	if (iVar1 <= 0)
	{
		return;
	}
	iVar2 = func_2286(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	Var3 = { *Global_1132155->f_4620.f_284[iParam0] };
	if (Var3 < 0 || Var3 >= iVar0)
	{
		Var3 = 0;
	}
	iVar10 = absi(get_cloud_time_as_int());
	iVar11 = 0;
	iVar12 = 0;
	Var3.f_1[Var3] = iVar10;
	iVar11 = 0;
	while (iVar11 < iVar0)
	{
		if (&Var3.f_1[iVar11] <= 0)
		{
		}
		else if ((&Var3.f_1[iVar11] - iVar10) < iVar1)
		{
			iVar12++;
		}
		iVar11++;
	}
	if (iVar12 >= iVar0)
	{
		iVar11 = 0;
		while (iVar11 < 5)
		{
			Var3.f_1[iVar11] = 0;
			iVar11++;
		}
		func_2287(iVar2, 0, 0);
		Var3 = 0;
	}
	else
	{
		Var3++;
	}
	*Global_1132155->f_4620.f_284[iParam0] = { Var3 };
}

void func_1010()
{
	if (!Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 1;
}

bool func_1011(int iParam0)
{
	if (!func_231(iParam0, 0))
	{
		return false;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

bool func_1012(int iParam0)
{
	if (!func_1011(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1517904196:
		case -987731097:
		case -888740979:
		case -734947450:
		case -687487191:
		case -514494287:
		case -444893329:
		case -150200864:
		case -103050851:
		case 229379699:
		case 552246565:
		case 657906142:
		case 1528935719:
		case 1642484975:
		case 2022985736:
		case 2109269555:
			return true;
	}
	return false;
}

bool func_1013(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1124266369:
			*iParam1 = 0;
			return true;
		case 759906147:
			*iParam1 = 1;
			return true;
		case -1568716381:
			*iParam1 = 2;
			return true;
		case 1556473961:
			*iParam1 = 3;
			return true;
		case 2028722809:
			*iParam1 = 4;
			return true;
		case -1963605336:
			*iParam1 = 5;
			return true;
		case 367637652:
			*iParam1 = 6;
			return true;
		case -1598866821:
			*iParam1 = 7;
			return true;
		case 90264823:
			*iParam1 = 8;
			return true;
		case 480688259:
			*iParam1 = 9;
			return true;
		case -2021043433:
			*iParam1 = 10;
			return true;
		case 252669332:
			*iParam1 = 11;
			return true;
		case -1098441944:
			*iParam1 = 12;
			return true;
		case 1654513481:
			*iParam1 = 13;
			return true;
		case 1755643085:
			*iParam1 = 14;
			return true;
		case -1143398950:
			*iParam1 = 15;
			return true;
	}
	return false;
}

void func_1014(struct<11> Param0, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_2288(&(Param0.f_10[iVar0])))
		{
			func_1606(1);
		}
		iVar0++;
	}
}

void func_1015(var uParam0)
{
	func_988(uParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_26 = 0f;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	func_969(uParam0, 1);
	Global_36560 = *uParam0;
	Global_36560.f_1 = 0;
	Global_36560.f_2 = 3;
	func_970();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_36560.f_4[iVar0] = 0;
		Global_36560.f_4[iVar0]->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_971(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	func_2260(&(uParam0->f_46.f_37));
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
	func_399(&(uParam0->f_84.f_48));
}

void func_1016(var uParam0)
{
	bVar0 = false;
	if (func_253(uParam0) == 5 && !func_991(uParam0))
	{
		iVar1 = 0;
		while (iVar1 < get_number_of_events(0))
		{
			if (get_event_at_index(0, iVar1) == 1376140891)
			{
				get_event_data(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_35 && vVar2.y == func_992(uParam0))
				{
					if (vVar2.z)
					{
						bVar0 = true;
					}
					else
					{
						func_972(uParam0, 6);
					}
				}
				else if (vVar2.x == 0 && vVar2.y == 0)
				{
					func_972(uParam0, 6);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_2289(uParam0, 1);
		}
	}
}

bool func_1017()
{
	return func_768();
}

bool func_1018(var uParam0, int iParam1)
{
	return (uParam0->f_69 && iParam1) != 0;
}

void func_1019(var uParam0, int iParam1)
{
	uParam0->f_69 = (uParam0->f_69 || iParam1);
}

bool func_1020(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_2290(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1759(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1758(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_2291(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_2292(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_2293(iParam0);
	if (iVar5 < 1 || iVar5 > func_2294(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1021(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1891.925f, -1864.166f, 46.30484f };
		Global_1934765->f_340[2]->f_1 = { 1905.741f, -1862.606f, 46.3492f };
		Global_1934765->f_340[3]->f_1 = { 1894.485f, -1859.417f, 46.3346f };
		Global_1934765->f_340[4]->f_1 = { 1898.38f, -1871.146f, 46.3756f };
		Global_1934765->f_340[5]->f_1 = { 1905.561f, -1861.793f, 46.3492f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_00", 1, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_01", 2, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_02", 4, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_03", 17, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_04", 5, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(1905.741f, -1862.606f, 46.3492f, "shb_p_mansion_fasttravel", 6, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_eden", 7, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_inferno", 8, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1906.537f, -1861.705f, 46.3612f, "shb_arthurpickup_bookforage", 9, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1906.537f, -1861.705f, 46.3612f, "shb_arthurpickup_bookhunting", 10, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(1898.38f, -1871.146f, 46.3756f, "shb_upg_john_rug", 11, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_chest", 12, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_rug", 13, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_ram", 14, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_gator", 15, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_table", 16, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1022(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 2294f, 1462.5f, 85.8f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(2294f, 1462.5f, 85.8f, "bea_cave_endlessSummer", 164, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORM", 190, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORMBURNED", 189, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1023(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 2692.287f, -1197.868f, 55.4693f };
		Global_1934765->f_340[2]->f_1 = { 2385.548f, -1221.158f, 46.1729f };
		Global_1934765->f_340[3]->f_1 = { 2638.399f, -1290.197f, 51.2461f };
		Global_1934765->f_340[4]->f_1 = { 2795.127f, -1170.396f, 46.924f };
		Global_1934765->f_340[5]->f_1 = { 2691.526f, -1200.938f, 55.4698f };
		Global_1934765->f_340[6]->f_1 = { 2691.526f, -1200.938f, 55.4698f };
		Global_1934765->f_340[7]->f_1 = { 2698.736f, -1188.603f, 51.0762f };
		Global_1934765->f_340[8]->f_1 = { 2385.548f, -1221.158f, 46.1729f };
		Global_1934765->f_340[9]->f_1 = { 2643.301f, -1304.161f, 51.2461f };
		Global_1934765->f_340[10]->f_1 = { 2652.08f, -1292.479f, 51.246f };
		Global_1934765->f_340[11]->f_1 = { 2853.421f, -1202.203f, 47.5946f };
		Global_1934765->f_340[12]->f_1 = { 2633.846f, -1225.53f, 52.3804f };
		Global_1934765->f_340[13]->f_1 = { 2734.165f, -1119.711f, 50.122f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(2692.287f, -1197.868f, 55.4693f, "new_art_photos_pre_RC_Mason", 18, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2692.287f, -1197.868f, 55.4693f, "new_art_photos_post_RC_Mason", 19, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_open", 160, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_close", 161, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_glass_breakable", 162, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_glass_unbreakable", 163, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(2638.399f, -1290.197f, 51.2461f, "new_com_bank_before", 134, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2638.399f, -1290.197f, 51.2461f, "new_com_bank_shootout", 135, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2638.399f, -1290.197f, 51.2461f, "new_com_bank_after", 137, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2638.399f, -1290.197f, 51.2461f, "new_com_bank_int_windows_blocker", 138, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(2795.127f, -1170.396f, 46.924f, "ForMyArt_nobarprops", 168, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(2691.526f, -1200.938f, 55.4698f, "new_art_exhibit_RC_Art3", 154, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2691.526f, -1200.938f, 55.4698f, "new_art_exhibit_post_RC_Art3", 155, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 6:
			func_2296(2691.526f, -1200.938f, 55.4698f, "new_forMyArt_paintings", 156, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2691.526f, -1200.938f, 55.4698f, "new_forMyArt_gallery", 157, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2691.526f, -1200.938f, 55.4698f, "st_denis_art_int_open", 159, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 7:
			func_2296(2698.736f, -1188.603f, 51.0762f, "st_denis_art_int_closed", 158, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 8:
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_mp_dressing", 166, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2385.548f, -1221.158f, 46.1729f, "bronte_sp_dressing", 167, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 9:
			func_2296(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_with_rayfire", 139, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_without_rayfire", 140, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 10:
			func_2296(2652.08f, -1292.479f, 51.246f, "new_com_bank_int_des", 136, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 11:
			func_2296(2853.421f, -1202.203f, 47.5946f, "new_shadyshop_cheatcode01", 218, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 12:
			func_2296(2633.846f, -1225.53f, 52.3804f, "new_saloon01_int_rent", 208, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 13:
			func_2296(2734.165f, -1119.711f, 50.122f, "new_photo_tablechair", 227, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1024(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 2253.076f, -789.0005f, 44.3422f };
		Global_1934765->f_340[2]->f_1 = { 2232.242f, -770.113f, 42.5082f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(2253.076f, -789.0005f, 44.3422f, "lak_hidout_trapopen", 25, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2253.076f, -789.0005f, 44.3422f, "lak_hideout_intgroup_trapdoor", 26, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_undamaged", 27, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_damaged", 28, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(2232.242f, -770.113f, 42.5082f, "lak_p_multiplayer", 29, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1025(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -63.9f, 1236.4f, 171.8f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-63.9f, 1236.4f, 171.8f, "six_table_STATIC", 20, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-63.9f, 1236.4f, 171.8f, "six_fireplace_ON", 21, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-63.9f, 1236.4f, 171.8f, "six_lights_on", 23, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-63.9f, 1236.4f, 171.8f, "six_lights_off", 24, 0, 1, 1, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1026(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1698.872f, 1510.014f, 147.8707f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1698.872f, 1510.014f, 147.8707f, "vet_fishTrophy", 176, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1698.872f, 1510.014f, 147.8707f, "InteriorGroup_WolfHead", 177, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1027(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1339.969f, -1371.888f, 84.07868f };
		Global_1934765->f_340[2]->f_1 = { 1355.646f, -1301.913f, 76.7644f };
		Global_1934765->f_340[3]->f_1 = { 1293.242f, -1301.401f, 76.0402f };
		Global_1934765->f_340[4]->f_1 = { 1327.78f, -1292.977f, 76.0091f };
		Global_1934765->f_340[5]->f_1 = { 1339.969f, -1371.888f, 84.07868f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_before", 130, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_after", 131, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables01", 132, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables02", 133, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_01", 143, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_02", 144, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(1293.242f, -1301.401f, 76.0402f, "rhobank_int_walla", 181, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1293.242f, -1301.401f, 76.0402f, "rhobank_int_wallb", 182, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_ON", 191, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_OFF", 192, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(1339.969f, -1371.888f, 84.07868f, "rho_saloon_int_rentSign", 206, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1028(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -1643.893f, -1358.232f, 86.4541f };
		Global_1934765->f_340[2]->f_1 = { -1643.893f, -1358.232f, 86.4541f };
		Global_1934765->f_340[3]->f_1 = { -1643.893f, -1358.232f, 86.4541f };
		Global_1934765->f_340[4]->f_1 = { -1632.406f, -1356.38f, 83.4029f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_2.2", 101, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2", 102, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2_dressing", 103, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_finished_after_Marston8_dressing", 104, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_fireplace_on", 111, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01_unmade", 108, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01", 107, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_decorated_after_Abigail3", 109, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_basic", 110, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed_Abigail3", 106, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(-1643.893f, -1358.232f, 86.4541f, "Beechers_fully_decorated_finale", 112, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_fancy", 113, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03_unmade", 115, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03", 114, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "BEE_01_HOUSE_STAGE06", 116, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "BEECHERS_PIANO_STOOL", 117, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_chair", 118, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(-1632.406f, -1356.38f, 83.4029f, "bee_01_masterBR_travelmap", 100, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1029(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -613.6971f, -27.7605f, 84.9747f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-613.6971f, -27.7605f, 84.9747f, "pai_intgroup_lootables", 229, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1030(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -2593.122f, 452.8192f, 145.9973f };
		Global_1934765->f_340[2]->f_1 = { -2592.498f, 458.3414f, 145.9973f };
		Global_1934765->f_340[3]->f_1 = { -2371.433f, 472.4824f, 131.229f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedmade", 126, 666254892, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedunmade", 128, 666254892, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-2592.498f, 458.3414f, 145.9973f, "pro_worker_food", 127, 666254892, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-2592.498f, 458.3414f, 145.9973f, "pro_int_shaving", 129, 666254892, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(-2371.433f, 472.4824f, 131.229f, "shack_hb_cheat01", 217, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1031(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -273.4513f, 811.3408f, 118.38f };
		Global_1934765->f_340[2]->f_1 = { -289.4673f, 865.7859f, 121.1349f };
		Global_1934765->f_340[3]->f_1 = { -308.2578f, 777.48f, 117.7031f };
		Global_1934765->f_340[4]->f_1 = { -306.48f, 803.07f, 118.97f };
		Global_1934765->f_340[5]->f_1 = { -323.5455f, 761.3587f, 120.6335f };
		Global_1934765->f_340[6]->f_1 = { -308.88f, 777.37f, 118.77f };
		Global_1934765->f_340[7]->f_1 = { -310.0119f, 802.9316f, 117.9846f };
		Global_1934765->f_340[8]->f_1 = { -323.0087f, 801.0296f, 116.8817f };
		Global_1934765->f_340[9]->f_1 = { -323.5455f, 761.3587f, 120.6335f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-273.4513f, 811.3408f, 118.38f, "val_jail_int_walla", 145, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-273.4513f, 811.3408f, 118.38f, "val_jail_int_wallb", 146, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-289.4673f, 865.7859f, 121.1349f, "val_res_a_int_peepcurtain", 165, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsopen", 170, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsclosed", 169, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(-306.48f, 803.07f, 118.97f, "6_chair_poker_set", 175, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-306.48f, 803.07f, 118.97f, "4_chair_poker_set", 174, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(-323.5455f, 761.3587f, 120.6335f, "val_hotel_int_rentSign", 205, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 6:
			func_2296(-308.88f, 777.37f, 118.77f, "val_bank_front_windows", 194, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-308.88f, 777.37f, 118.77f, "val_bank_mud5_windowblock", 195, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 7:
			func_2296(-310.0119f, 802.9316f, 117.9846f, "front_windows", 196, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-310.0119f, 802.9316f, 117.9846f, "val_saloon_br03_bed", 197, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 8:
			func_2296(-323.0087f, 801.0296f, 116.8817f, "val_genstore_night_light", 180, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 9:
			func_2296(-323.5455f, 761.3587f, 120.6335f, "mud3_val_hotel_room_curtain01", 171, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_prayercurtain", 172, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_curtain", 173, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1032(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 3285.792f, -1325.603f, 43.08399f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(3285.792f, -1325.603f, 43.08399f, "korrigan_props_default", 141, -1800106923, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(3285.792f, -1325.603f, 43.08399f, "korrigan_props_poker", 142, -1800106923, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1033(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 340.3874f, 607.1694f, 117.3576f };
		Global_1934765->f_340[2]->f_1 = { 494.78f, 673.19f, 120.043f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(340.3874f, 607.1694f, 117.3576f, "cor_factb_int_loot", 153, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(494.78f, 673.19f, 120.043f, "cor_factb_int_cheatcode_01", 219, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1034(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -819.8f, 353.8f, 97.0781f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_pulp_novel", 224, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_after_move", 199, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_before_move", 198, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1035(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1450.08f, 373.16f, 91.06f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1450.08f, 373.16f, 91.06f, "eme_saloon_intgroup_curtains", 202, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1450.08f, 373.16f, 91.06f, "eme_saloon_intgroup_furniture", 231, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1036(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -2177.459f, 717.2651f, 121.6204f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-2177.459f, 717.2651f, 121.6204f, "han_win_lock", 178, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1037(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -551.09f, 2705.65f, 321.98f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdooropen", 184, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdoorclosed", 185, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-551.09f, 2705.65f, 321.98f, "adl_cabin01_int_ransacked", 186, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1038(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -1407.588f, 1206.949f, 221.6721f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-1407.588f, 1206.949f, 221.6721f, "Mil_mine_cave03_cheat01", 220, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1039(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -690.3915f, 1044.363f, 134.0043f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-690.3915f, 1044.363f, 134.0043f, "shack_sc_int_pulp_novel", 223, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1040(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -1813.349f, -354.6237f, 160.4226f };
		Global_1934765->f_340[2]->f_1 = { -1812.825f, -370.48f, 161.8785f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-1813.349f, -354.6237f, 160.4226f, "str_jail_unbrokenwall", 193, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-1812.825f, -370.48f, 161.8785f, "str_whore_int_rentSign", 207, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1041(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 2946.44f, 1319.626f, 43.8203f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(2946.44f, 1319.626f, 43.8203f, "ann_gunsmith_int_rent", 210, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1042(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -5508.609f, -2965.48f, -1.6284f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-5508.609f, -2965.48f, -1.6284f, "tum_gunsmith_int_rentSign", 209, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1043(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -332.4864f, -359.7746f, 87.0537f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_regular", 200, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_cinematic", 201, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1044(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -3400.726f, -3305.328f, -5.4439f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_cc_graffiti", 211, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_pulp_novel", 225, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1045(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1119.123f, -1988.793f, 54.4015f };
		Global_1934765->f_340[2]->f_1 = { 1006.364f, -1766.812f, 46.5922f };
		Global_1934765->f_340[3]->f_1 = { 1010.435f, -1767.927f, 49.4189f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1119.123f, -1988.793f, 54.4015f, "br_tre_house_cheat01", 215, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_groups", 120, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_csprops", 121, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_clean", 122, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_ransacked", 123, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(1010.435f, -1767.927f, 49.4189f, "bra_man_dining_vfx", 187, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1010.435f, -1767.927f, 49.4189f, "bra_man_parlor_vfx", 188, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsBreakable", 125, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsStatic", 124, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1046(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 2624.29f, 1695.73f, 114.6861f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(2624.29f, 1695.73f, 114.6861f, "shack_it_02_cheat01", 216, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1047(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 1889.438f, 301.362f, 76.0637f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(1889.438f, 301.362f, 76.0637f, "HF_pulp_novel", 222, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1048(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -814.042f, -1374.27f, 44.941f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-814.042f, -1374.27f, 44.941f, "bla_photo_int_chairs", 228, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1049(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { 342.0971f, -666.6483f, 41.8221f };
		Global_1934765->f_340[2]->f_1 = { -959.4431f, 705.4899f, 95.5632f };
		Global_1934765->f_340[3]->f_1 = { 191.1237f, -412.0208f, 86.7293f };
		Global_1934765->f_340[4]->f_1 = { -4369.159f, -2416.709f, 19.4046f };
		Global_1934765->f_340[5]->f_1 = { 326.6011f, 1712.11f, 165.5851f };
		Global_1934765->f_340[6]->f_1 = { 2309.994f, 1141.108f, 95.3301f };
		Global_1934765->f_340[7]->f_1 = { -1492.235f, 1248.413f, 313.4902f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_beg", 203, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_end", 204, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-959.4431f, 705.4899f, 95.5632f, "l_08p_tunnel2_cc_graffiti", 212, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(191.1237f, -412.0208f, 86.7293f, "dis_tradepost_cheat01", 213, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(-4369.159f, -2416.709f, 19.4046f, "ple_house_int_cheatcode_01", 214, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(326.6011f, 1712.11f, 165.5851f, "dis_grz_preskull_cheat01", 221, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 6:
			func_2296(2309.994f, 1141.108f, 95.3301f, "poison_mine_blockage", 226, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 7:
			func_2296(-1492.235f, 1248.413f, 313.4902f, "mic_hideout_lantern", 230, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

void func_1050(var uParam0)
{
	*uParam0++;
	if (func_276(Global_1934765->f_340[1]->f_1))
	{
		Global_1934765->f_340[1]->f_1 = { -1321.927f, 2438.953f, 309.6122f };
		Global_1934765->f_340[2]->f_1 = { -1351.798f, 2440.891f, 309.3728f };
		Global_1934765->f_340[3]->f_1 = { -1336.995f, 2399.444f, 308.1392f };
		Global_1934765->f_340[4]->f_1 = { -1360.135f, 2425.155f, 308.6656f };
		Global_1934765->f_340[5]->f_1 = { -1319.982f, 2440.926f, 308.9205f };
	}
	if (!func_2295(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			func_2296(-1321.927f, 2438.953f, 309.6122f, "col_school_int_before", 148, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			func_2296(-1321.927f, 2438.953f, 309.6122f, "col_school_int_after", 147, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 2:
			func_2296(-1351.798f, 2440.891f, 309.3728f, "col_cabin_lights_on", 149, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 3:
			func_2296(-1336.995f, 2399.444f, 308.1392f, "col_barn_lights_on", 150, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 4:
			func_2296(-1360.135f, 2425.155f, 308.6656f, "col_bunkhouse_lights_on", 151, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
		case 5:
			func_2296(-1319.982f, 2440.926f, 308.9205f, "col_school_int_fireplace", 152, 0, 1, 0, &(Global_1934765->f_340[*uParam0]));
			break;
	}
}

bool func_1051()
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

bool func_1052(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1053(int iParam0, bool bParam1)
{
	switch (func_1211(iParam0))
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

bool func_1054(int iParam0)
{
	if (-1829635046 == func_2297(81053684))
	{
		if (func_2298(iParam0))
		{
			return true;
		}
	}
	else if (func_2299(-525676072, iParam0))
	{
		if (func_2298(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_1055()
{
	if (!func_2155())
	{
		return 0;
	}
	if (!func_2298(&iVar0))
	{
		return 0;
	}
	if (!func_2221(iVar0))
	{
		return 0;
	}
	return func_2223(iVar0, 0);
}

void func_1056(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1057(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_1058(vector3 vParam0, bool bParam3)
{
	iVar0 = func_2300(vParam0);
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

void func_1059()
{
	func_1418(&Global_0, 16);
}

bool func_1060(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1061(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1062(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1063(int iParam0, bool bParam1)
{
	if (func_2301(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_2302(5000))
		{
			return true;
		}
	}
	switch (func_200(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1064()
{
	if (func_274(Global_1347343->f_2))
	{
		return true;
	}
	return false;
}

bool func_1065()
{
	if (!network_is_game_in_progress())
	{
		if (is_player_playing(player_id()))
		{
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				func_136(Global_1935630, 2048);
				return false;
			}
		}
		else if (!is_screen_faded_out())
		{
			func_136(Global_1935630, 2048);
			return false;
		}
	}
	else if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(0);
		}
		func_136(Global_1935630, 2048);
		return false;
	}
	uVar0 = func_2303();
	set_mission_name(true, &uVar0);
	func_136(Global_1935630, 2048);
	func_2304(0);
	if (!is_player_playing(player_id()))
	{
		pause_death_arrest_restart(false);
		ignore_next_restart(true);
	}
	func_2305();
	_0x062b4a4a3396351d(get_player_index());
	clear_area(func_1074(), 5000f, 32768);
	func_2306();
	start_audio_scene("MISSION_FAILED_SCENE");
	func_1606(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_2307(0, 0, 0);
	set_everyone_ignore_player(get_player_index(), true);
	func_2308(1);
	func_935(0);
	Global_1347343->f_12 = get_game_timer();
	func_1062(&(Global_1347343->f_11), 8192);
	func_2309(0);
	Global_1347343->f_16 = get_game_timer();
	if (!is_player_being_arrested(get_player_index(), true))
	{
		play_sound_frontend("DEATH_SCREEN_ENTER", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
	}
	func_2310();
	force_cleanup(2048);
	return true;
}

void func_1066(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1067()
{
	set_pad_shake(0, 0, 0);
	if (is_player_control_on(player_id()))
	{
		set_player_control(player_id(), false, 0, false);
	}
	func_2306();
	set_player_invincible(get_player_index(), true);
	set_entity_invincible(Global_35, true);
	if (!func_2311())
	{
		return;
	}
	if (!func_1060(Global_1347343->f_11, 38))
	{
		if ((is_screen_faded_out() || is_screen_fading_out()) && ((!func_1060(Global_1347343->f_11, 1048576) || !func_2312(Global_1935630->f_3)) || func_2288(Global_1935630->f_3)))
		{
			do_screen_fade_in(0);
			Global_1347343->f_16 = 0;
			func_1062(&(Global_1347343->f_11), 1048576);
		}
		func_2313();
	}
	else
	{
		set_player_invincible(player_id(), false);
		freeze_entity_position(Global_35, false);
		_0xac84686c06184b0d("Fade_To_Black", "Mission_Fail_Respawn_Scenes");
		func_1062(&(Global_1347343->f_11), 65536);
		if (func_1060(Global_1347343->f_11, 34))
		{
			func_1066(Global_1347343, 3);
		}
		else
		{
			func_1066(Global_1347343, 4);
		}
	}
}

int func_1068()
{
	if (!func_1064())
	{
		return 0;
	}
	func_2314(Global_1347343->f_2);
	if (func_2315())
	{
		if (_0x1b065a2bf7953815(1) == 1)
		{
			return 0;
		}
		else if (!func_1060(Global_1347343->f_11, 256))
		{
			func_2316(1, 1);
			func_1061(&(Global_1347343->f_11), 256);
			return 0;
		}
		else
		{
			func_2317(1, *Global_1347394, Global_1347394->f_3);
			func_1072(42);
			func_1073(1);
		}
	}
	else if (func_1060(Global_1347343->f_11, 32))
	{
		func_1072(50);
		func_1073(0);
	}
	else
	{
		func_1072(42);
		func_1073(1);
	}
	if (func_1060(Global_1347343->f_11, 38))
	{
		func_2318();
	}
	func_2319();
	func_2308(1);
	return 1;
}

bool func_1069()
{
	if (!is_player_playing(player_id()))
	{
		pause_death_arrest_restart(false);
		return false;
	}
	pause_death_arrest_restart(true);
	if (func_2320())
	{
		Global_1347343->f_12 = get_game_timer();
		func_2319();
		iVar0 = func_2322(func_2321());
		if (iVar0 != -1)
		{
			func_806(0);
		}
		else if (func_1309(func_2321()) == 8)
		{
			iVar0 = func_2323();
			if (iVar0 != -1)
			{
				func_806(0);
			}
		}
	}
	if (func_130(32768))
	{
		do_screen_fade_out(0);
	}
	func_1056(Global_1935630, 2048);
	func_1072(4112);
	func_2324(2);
	if (!func_130(32768))
	{
		vVar3 = { func_2325() };
		func_1573(Global_35, vVar3);
		func_2317(0, func_2325(), 0f);
		vVar6 = { func_2326(vVar3, &uVar1, &uVar2, 0, 1, 1, 0, 0, 0) };
		func_290(vVar6);
		Global_40.f_9.f_15 = func_288(vVar6, 0);
		func_2327(vVar6, uVar2, uVar1, 0);
	}
	else
	{
		func_2328();
	}
	func_2329();
	func_2330();
	set_entity_invincible(Global_35, true);
	freeze_entity_position(Global_35, true);
	set_mission_name(false, 0);
	if (func_1060(Global_1347343->f_11, 38))
	{
		func_2318();
	}
	func_2308(1);
	if (func_2331())
	{
		func_2332(0);
	}
	uVar9 = func_2303();
	iVar10 = get_hash_key(&uVar9);
	if (_uilog_is_entry_registered(1, iVar10))
	{
		_uilog_remove_entry(1, iVar10);
	}
	return true;
}

void func_1070(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

void func_1071(bool bParam0)
{
	if (!bParam0)
	{
		func_2333(11);
	}
	else
	{
		func_2334(11);
	}
}

void func_1072(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_1073(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	func_1072(32);
	if (iParam0 == 0)
	{
		func_1072(16);
	}
	else if (iParam0 == 1)
	{
		func_1072(8);
	}
	func_2335();
	Global_43889 = 1;
}

Vector3 func_1074()
{
	if (func_1060(Global_1347343->f_11, 512))
	{
		return (*Global_2621440)[0]->f_9.f_7;
	}
	return (*Global_2621440)[1]->f_9.f_7;
}

var func_1075()
{
	if (func_1060(Global_1347343->f_11, 512))
	{
		return (*Global_2621440)[0]->f_9.f_13;
	}
	return (*Global_2621440)[1]->f_9.f_13;
}

void func_1076()
{
	func_2336(Global_1347343->f_2, 0);
	bVar0 = true;
	if (func_2337())
	{
		func_2338(func_1083(), 0, 0, -1);
		bVar0 = false;
	}
	else if (func_2339())
	{
		func_2341(&((*Global_1347702)[func_2340()]->f_12), 1024);
		func_2342(func_2340(), 0);
		func_2343(func_2340());
	}
	else if (func_2344())
	{
		func_1788(&((*Global_1392626)[func_2345()]->f_8), 1);
		func_2346(func_2345());
	}
	else if (func_2347())
	{
		Global_1391438->f_413 = 0;
		func_2348(&(Global_1391438->f_5), 8, 1);
	}
	else if (func_2349())
	{
		func_2351(func_2350());
		bVar0 = false;
	}
	if (bVar0)
	{
		func_2352(Global_1347343->f_2);
	}
	else if (!func_133(Global_1347343->f_2))
	{
		func_2352(Global_1347343->f_2);
	}
	func_2353(Global_1347343->f_2);
}

void func_1077(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_2354(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

bool func_1078(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	if (!func_2355(&bVar0, &bVar1))
	{
		return true;
	}
	if (bVar0)
	{
		if (!bVar2)
		{
			func_2356(0, &vVar4, &uVar7);
			if (!func_276(vVar4))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (func_2357(vParam2, &vVar8, &uVar11))
			{
				func_2358(0, vVar8, uVar11);
				uParam0->f_1 = 1;
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (func_2359(0, uParam0, vParam2, uParam5, &vVar12, &uVar15))
			{
				func_2358(0, vVar12, uVar15);
				bVar2 = true;
			}
		}
	}
	if (bVar1)
	{
		if (!bVar3)
		{
			func_2356(1, &vVar16, &uVar19);
			if (!func_276(vVar16))
			{
				bVar3 = true;
			}
		}
		if (!bVar3)
		{
			if (func_2357(vParam2, &vVar20, &uVar23))
			{
				func_2358(1, vVar20, uParam5);
				uParam1->f_1 = 1;
				bVar3 = true;
			}
		}
		if (!bVar3)
		{
			if (func_2359(1, uParam1, vParam2, uParam5, &vVar24, &uVar27))
			{
				func_2358(1, vVar24, uVar27);
				bVar3 = true;
			}
		}
	}
	if (bVar0)
	{
		if (!bVar2)
		{
			return false;
		}
	}
	if (bVar1)
	{
		if (!bVar3)
		{
			return false;
		}
	}
	return true;
}

bool func_1079(var uParam0, var uParam1)
{
	if (!func_2355(&bVar0, &bVar1))
	{
		return true;
	}
	bVar2 = false;
	if (!bVar0)
	{
		bVar2 = true;
	}
	if (does_entity_exist(*uParam0))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		func_2356(0, &vVar3, &uVar6);
		vVar7 = { vVar3 };
		if (!func_1334(&vVar7, 50, 10, 0))
		{
		}
		if ((vVar7.z - 0.5f) < vVar3.z && (vVar7.z + 6f) > vVar3.z)
		{
			vVar3 = { vVar7 };
		}
		iVar10 = 0;
		if (func_939() == 0 && func_2219() == 0)
		{
			iVar10 = 1;
		}
		Var12.f_10 = 7;
		Var12.f_10 = 0;
		Var12 = 1;
		Var12.f_2 = 1;
		Var12.f_4 = iVar10;
		Var12.f_6 = { vVar3 };
		Var12.f_9 = uVar6;
		*uParam0 = func_2360(&iVar11, &Var12);
		if (iVar11 == 2 && does_entity_exist(*uParam0))
		{
			bVar2 = true;
		}
		else if (iVar11 == 1)
		{
			bVar2 = true;
		}
	}
	bVar23 = false;
	if (!bVar1)
	{
		bVar23 = true;
	}
	if (does_entity_exist(*uParam1))
	{
		bVar23 = true;
	}
	if (!bVar23)
	{
		func_2356(1, &vVar24, &uVar27);
		vVar28 = { vVar24 };
		if (!func_1334(&vVar28, 50, 10, 0))
		{
		}
		if ((vVar28.z - 0.5f) < vVar24.z && (vVar28.z + 6f) > vVar24.z)
		{
			vVar24 = { vVar28 };
		}
		Var32.f_10 = 7;
		Var32.f_10 = 1;
		Var32 = 1;
		Var32.f_2 = 1;
		Var32.f_6 = { vVar24 };
		Var32.f_9 = uVar27;
		*uParam1 = func_2360(&iVar31, &Var32);
		if (iVar31 == 2 && does_entity_exist(*uParam1))
		{
			bVar23 = true;
		}
		else if (iVar31 == 1)
		{
		}
	}
	if (bVar2 && bVar23)
	{
		return true;
	}
	return false;
}

bool func_1080()
{
	if (!is_player_teleport_active() && get_game_timer() >= Global_1347343->f_12 + 2000)
	{
		return true;
	}
	if (get_game_timer() >= (Global_1347343->f_12 + Global_1347343->f_15))
	{
		return true;
	}
	if (func_2361())
	{
		return false;
	}
	if (_has_player_teleport_finished(player_id()))
	{
		return true;
	}
	return false;
}

void func_1081(vector3 vParam0)
{
	clear_area(vParam0, 5000f, 6639498);
	_0x9851de7aec10b4e1(vParam0, 5000f, 1, 0);
	_0x4161648394262fdf(vParam0, 5000f);
	remove_decals_in_range(vParam0, 5000f);
	if (!func_1060(Global_1347343->f_11, 128))
	{
		_0x4759cc730f947c81();
		_0x1ff00db43026b12f();
	}
	_0xb173599d61faeb31();
}

void func_1082()
{
	if (func_1060(Global_1347343->f_11, 16))
	{
		func_2362();
	}
	do_screen_fade_out(0);
	func_2363(!func_1060(Global_1347343->f_11, 512), !func_1060(Global_1347343->f_11, 512));
	func_537();
	func_2366(func_2365(func_2364()));
	bVar0 = func_1060(Global_1347343->f_11, 4);
	func_1514(-1);
	func_2367();
	func_2304(1);
	func_2368();
	func_2369(10000);
	func_2318();
	set_player_invincible(player_id(), false);
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
		if (!bVar0)
		{
			set_entity_invincible(Global_35, false);
		}
		else
		{
			set_entity_invincible(Global_35, true);
			freeze_entity_position(Global_35, true);
		}
		set_ped_config_flag(Global_35, 265, true);
		set_ped_config_flag(Global_35, 267, true);
	}
	func_1056(Global_1935630, 2048);
	func_2370();
	func_2371();
	_0x7455cd705f7e933e();
	stop_audio_scene("MISSION_FAILED_SCENE");
	if (is_audio_scene_active("DYING_SCENE"))
	{
		stop_audio_scene("DYING_SCENE");
	}
	_0x9428447ded71fc7e("Mission_Fail_Respawn_Scenes");
	stop_audio_scenes();
	if (func_2315())
	{
		func_2372(Global_35);
	}
	Global_1347343->f_12 = 0;
	_0x55f37f5f3f2475e1();
	func_97();
	if (!bVar0)
	{
		_0x0730e518486deec3(1);
	}
	pause_death_arrest_restart(false);
	if (is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
}

int func_1083()
{
	return func_1311(Global_1347343->f_2);
}

int func_1084(int iParam0)
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

void func_1085(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_1 = -15;
		(*uParam0)[iVar0]->f_3 = -1;
		iVar0++;
	}
}

void func_1086(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 78:
			*uParam1 = 0;
			*uParam2 = 3;
			break;
		case 38:
			*uParam1 = 6;
			*uParam2 = 17;
			break;
		case 69:
			*uParam1 = 18;
			*uParam2 = 21;
			break;
		case 3:
			*uParam1 = 22;
			*uParam2 = 22;
			break;
		case 5:
			*uParam1 = 36;
			*uParam2 = 55;
			break;
		case 105:
			*uParam1 = 25;
			*uParam2 = 33;
			break;
		case 101:
			*uParam1 = 35;
			*uParam2 = 35;
			break;
		case 23:
			*uParam1 = 23;
			*uParam2 = 24;
			break;
		case 26:
			*uParam1 = 60;
			*uParam2 = 65;
			break;
		case 76:
			*uParam1 = 68;
			*uParam2 = 80;
			break;
		case 92:
			*uParam1 = 82;
			*uParam2 = 86;
			break;
		case 28:
			*uParam1 = 87;
			*uParam2 = 89;
			break;
		case 115:
			*uParam1 = 90;
			*uParam2 = 94;
			break;
		case 120:
			*uParam1 = 95;
			*uParam2 = 96;
			break;
		case 117:
			*uParam1 = 99;
			*uParam2 = 100;
			break;
		case 71:
			*uParam1 = 56;
			*uParam2 = 56;
			break;
		case 98:
			*uParam1 = 57;
			*uParam2 = 57;
			break;
		case 9:
			*uParam1 = 58;
			*uParam2 = 58;
			break;
		case 79:
			*uParam1 = 59;
			*uParam2 = 59;
			break;
		case 13:
			*uParam1 = 4;
			*uParam2 = 4;
			break;
		case 14:
			*uParam1 = 5;
			*uParam2 = 5;
			break;
		case 90:
		case 128:
			*uParam1 = 34;
			*uParam2 = 34;
			break;
		case 113:
			*uParam1 = 67;
			*uParam2 = 67;
			break;
		case -1:
			*uParam1 = 101;
			*uParam2 = 101;
			break;
	}
}

int func_1087(int iParam0)
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

void func_1088(int iParam0, int iParam1)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_1089(int iParam0, int iParam1)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

bool func_1090(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
	}
	return -1;
}

bool func_1092(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

void func_1093(int iParam0)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1139(iParam0))
	{
		return;
	}
	iVar0 = func_500(iParam0);
	func_2373(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_2374(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_2375(iParam0, 0);
	func_2376(iParam0);
}

void func_1094(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1095()
{
	func_2377();
	func_1107(0, 0);
	func_2378(&(Global_1914319->f_18941.f_9));
	func_2379(&(Global_1914319->f_18941.f_2));
	func_1100();
}

void func_1096(int iParam0)
{
	Global_1914319->f_18941 = iParam0;
}

void func_1097(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1914319->f_18941.f_18)
		{
			Global_1914319->f_18941.f_18 = 1;
		}
	}
	else if (Global_1914319->f_18941.f_18)
	{
		Global_1914319->f_18941.f_18 = 0;
	}
}

bool func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			Global_1914319->f_18941.f_10 = 20;
			return true;
		case 78:
			Global_1914319->f_18941.f_10 = 6;
			return true;
		case 115:
			Global_1914319->f_18941.f_10 = 6;
			return true;
		case 26:
			Global_1914319->f_18941.f_10 = 20;
			return true;
		case 5:
			Global_1914319->f_18941.f_10 = 33;
			return true;
		case 38:
			Global_1914319->f_18941.f_10 = 33;
			return true;
		case 92:
			Global_1914319->f_18941.f_10 = 2;
			return true;
		case 105:
			Global_1914319->f_18941.f_10 = 33;
			return true;
	}
	return false;
}

bool func_1099()
{
	return (Global_1894899 & 1 != 0 && func_178() != -1);
}

void func_1100()
{
	func_1096(0);
	Global_1914319->f_18941.f_6 = { 0f, 0f, 0f };
	Global_1914319->f_18941.f_12 = 0;
	Global_1914319->f_18941.f_1 = -1;
	Global_1395601->f_2 = 0;
}

Vector3 func_1101()
{
	switch (func_178())
	{
		case 76:
			return -324.4915f, 774.6527f, 116.4359f;
		case 78:
			return 2946.603f, 1318.259f, 45.14628f;
		case 115:
			return -5508.488f, -2963.16f, -1.631f;
		case 26:
			return -1817.689f, -370.4365f, 162.2964f;
		case 5:
			return 2638.085f, -1222.06f, 52.3805f;
		case 38:
			return -819.2906f, -1316.014f, 42.679f;
		case 92:
			return 2982.66f, 570.2827f, 45.2343f;
		case 105:
			return 1341.261f, -1376.511f, 79.4836f;
	}
	return 0f, 0f, 0f;
}

int func_1102(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_906(iParam0, -5284486))
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
		if (func_2380(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_827(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_2381(iVar62, iVar61);
					if (func_231(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1102(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1102(iVar63, -915411861, 1, 0, 0));
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
	if (!func_2380(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_1103()
{
	switch (func_178())
	{
		case 76:
			func_2382(142240370);
			break;
		case 78:
			func_2382(-201071322);
			break;
		case 115:
			func_2382(1423877126);
			func_2382(1682160693);
			break;
		case 26:
			func_2382(1256786197);
			break;
		case 5:
			func_2382(779421929);
			break;
		case 38:
			func_2382(815031507);
			func_2382(1523300673);
			break;
		case 92:
			func_2382(1102743282);
			break;
		case 105:
			func_2382(-1847993131);
			break;
	}
}

bool func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 92:
		case 105:
		case 115:
			return true;
		default:
			break;
	}
	return true;
}

bool func_1105()
{
	if (func_178() == 92)
	{
		return true;
	}
	if (Global_1914319->f_18941.f_10 == 33)
	{
		return func_2384(func_2383());
	}
	return func_1193(Global_1914319->f_18941.f_10);
}

bool func_1106(int iParam0)
{
	if (!func_1105())
	{
		*iParam0 = 1;
		return true;
	}
	if (Global_1914319->f_17370)
	{
		*iParam0 = 1;
		return true;
	}
	if (func_654(func_178()))
	{
		*iParam0 = 1;
		return true;
	}
	if (Global_1395601->f_1)
	{
		*iParam0 = 1;
		return true;
	}
	if (func_272(242, 1, 1))
	{
		*iParam0 = 2;
		return true;
	}
	if (func_2245() && func_1235(101))
	{
		*iParam0 = 2;
		return true;
	}
	if (func_131(&Global_1935630, 2097152))
	{
		*iParam0 = 3;
		return true;
	}
	if (func_2385())
	{
		*iParam0 = 3;
		return true;
	}
	if (func_129(4))
	{
		if (Global_1935630->f_24)
		{
			*iParam0 = 3;
			return true;
		}
	}
	else if (is_ped_in_combat(Global_35, 0))
	{
		*iParam0 = 3;
		return true;
	}
	if (func_138(player_id(), 1, 0, 1))
	{
		*iParam0 = 3;
		return true;
	}
	if (is_ped_using_any_scenario(player_ped_id()))
	{
		if (func_2386(player_ped_id(), 817658057) || func_2386(player_ped_id(), 1231068245))
		{
			*iParam0 = 1;
			return true;
		}
	}
	if (func_1211((*Global_1835011)[7]->f_1) == 3)
	{
		*iParam0 = 1;
		return true;
	}
	if ((func_82() == -1 && func_1053((*Global_1835011)[60]->f_1, 1)) && !func_1053((*Global_1835011)[67]->f_1, 1))
	{
		*iParam0 = 4;
		return true;
	}
	*iParam0 = 0;
	return false;
}

void func_1107(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		iVar0 = 168093330;
		iVar1 = -211556852;
		if (!does_blip_exist(Global_1914319->f_18941.f_11))
		{
			Global_1914319->f_18941.f_11 = _blip_add_for_coord(iVar0, Global_1914319->f_18941.f_6);
			set_blip_sprite(Global_1914319->f_18941.f_11, iVar1, true);
			set_blip_flash_timer(Global_1914319->f_18941.f_11, 43, -1);
		}
		else
		{
			_set_blip_flash_style(Global_1914319->f_18941.f_11, 724623647);
		}
	}
	else if (does_blip_exist(Global_1914319->f_18941.f_11))
	{
		if (bParam1)
		{
			_blip_set_modifier(Global_1914319->f_18941.f_11, 724623647);
		}
		else
		{
			_set_blip_flash_style(Global_1914319->f_18941.f_11, 724623647);
			remove_blip(&(Global_1914319->f_18941.f_11));
		}
	}
}

bool func_1108()
{
	if (func_131(&Global_1935630, 2097152))
	{
		return true;
	}
	if (func_2385())
	{
		return true;
	}
	if (func_129(4))
	{
		if (Global_1935630->f_24)
		{
			return true;
		}
	}
	else if (is_ped_in_combat(Global_35, 0))
	{
		return true;
	}
	if (func_138(player_id(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_1109(int iParam0)
{
	if (!func_524(iParam0))
	{
		return false;
	}
	return Global_40.f_9384[iParam0] & 1 != 0;
}

bool func_1110()
{
	return Global_1392040->f_6;
}

bool func_1111(int iParam0)
{
	return func_692(Global_1395601->f_3, iParam0);
}

void func_1112(int iParam0)
{
	func_1157(&(Global_1395601->f_3), iParam0);
}

bool func_1113(int iParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	if (!func_321(*iParam0))
	{
		*iParam0 = func_323(sParam2, iParam1, vParam3, iParam6, 0, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_324(*iParam0, 428250662, 0, 1);
	}
	else
	{
		if (!func_664(*iParam0, 0))
		{
			func_665(*iParam0, 1, 1);
		}
		if (func_842(*iParam0, 0))
		{
			func_327(iParam0, 1, 1);
			return true;
		}
	}
	return false;
}

void func_1114()
{
	switch (func_178())
	{
		case 76:
			vVar0 = { -325.2036f, 774.826f, 116.4626f };
			fVar3 = 197.4206f;
			break;
		case 78:
			vVar0 = { 2945.869f, 1318.783f, 43.8203f };
			fVar3 = 256.7262f;
			break;
		case 115:
			vVar0 = { -5508.463f, -2963.747f, -1.6289f };
			fVar3 = 35.4031f;
			break;
		case 26:
			vVar0 = { -1817.232f, -370.7726f, 162.2964f };
			fVar3 = 128.8699f;
			break;
		case 5:
			vVar0 = { 2637.96f, -1222.673f, 52.3805f };
			fVar3 = 289.8708f;
			break;
		case 38:
			vVar0 = { -818.8851f, -1316.083f, 42.679f };
			fVar3 = 141.5019f;
			break;
		case 92:
			vVar0 = { 2982.553f, 570.3638f, 43.611f };
			fVar3 = 262.7074f;
			break;
		case 105:
			vVar0 = { 1342.306f, -1376.489f, 79.4806f };
			fVar3 = 56.3656f;
			break;
		default:
			return;
	}
	func_1618(Global_35, vVar0, fVar3, 2, 1073741824);
}

void func_1115()
{
	switch (func_178())
	{
		case 76:
			vVar0 = { -324.6974f, 774.1577f, 117.7629f };
			vVar3 = { -17.9738f, 0f, -163.7266f };
			fVar6 = 50f;
			break;
		case 78:
			vVar0 = { 2946.288f, 1318.553f, 45.2128f };
			vVar3 = { -26.1533f, 0.7267f, -128.0349f };
			fVar6 = 50f;
			break;
		case 115:
			vVar0 = { -5508.126f, -2963.279f, -0.3103f };
			vVar3 = { -15.0795f, 0f, -51.4135f };
			fVar6 = 50f;
			break;
		case 26:
			vVar0 = { -1817.856f, -370.7591f, 163.4388f };
			vVar3 = { -10.4184f, 0f, 149.5079f };
			fVar6 = 50f;
			break;
		case 5:
			vVar0 = { 2638.337f, -1222.889f, 53.7627f };
			vVar3 = { -18.8836f, 0f, -69.2092f };
			fVar6 = 50f;
			break;
		case 38:
			vVar0 = { -819.3685f, -1316.582f, 43.9983f };
			vVar3 = { -15.7284f, 0f, 127.8788f };
			fVar6 = 50f;
			break;
		case 92:
			vVar0 = { 2982.631f, 570.196f, 45.3819f };
			vVar3 = { -11.7481f, 0f, -92.2869f };
			fVar6 = 50f;
			break;
		case 105:
			vVar0 = { 1341.599f, -1375.922f, 80.8071f };
			vVar3 = { -14.9846f, 0f, 104.7122f };
			fVar6 = 50f;
			break;
		default:
			return;
	}
	func_2387(&(Global_1914319->f_18941.f_9), vVar0, vVar3, fVar6, 0);
}

float func_1116(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_1820(vVar0, vParam1);
}

int func_1117()
{
	return Global_1395601->f_2;
}

bool func_1118(int iParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7)
{
	if (!func_321(*iParam0))
	{
		*iParam0 = func_323(sParam2, iParam1, vParam3, fParam7, 0, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_2388(*iParam0, sParam2, iParam6, 1);
		func_665(*iParam0, func_1834(1) > iParam6, 1);
		func_324(*iParam0, 428250662, 0, 1);
	}
	else
	{
		if (!func_664(*iParam0, 0))
		{
			func_665(*iParam0, 1, 1);
		}
		if (func_842(*iParam0, 0))
		{
			func_327(iParam0, 1, 1);
			return true;
		}
	}
	return false;
}

void func_1119(int iParam0)
{
	Global_1395601->f_2 = iParam0;
}

void func_1120()
{
	if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
}

void func_1121(bool bParam0)
{
	Global_1395601->f_482 = func_944(func_178());
	Global_1395601->f_5[Global_1395601->f_482]->f_27 = 0;
	func_89("PROPERTY_BOUGHT", 10000, 0, 0, 0, 1);
	func_1112(4);
	if (bParam0 == 0)
	{
		iVar2 = func_1102(1334501804, -915411861, 1, 0, 0);
		func_2389(iVar2, 0, 0, 1, 1);
		func_2390(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 1334501804, 1, iVar2);
	}
	iVar1 = func_2391();
	iVar0 = func_1758(iVar1);
	iVar0 = (36 - iVar0);
	func_1219(&iVar1, 0, 0, iVar0, 0, 0, 0, 0);
	func_2392(&iVar1, 0);
	func_2393(Global_1395601->f_482);
	Global_40.f_9384[Global_1395601->f_482]->f_1 = iVar1;
}

void func_1122(int iParam0)
{
	set_player_control(player_id(), false, 0, false);
	task_go_to_coord_any_means(Global_35, func_2394(iParam0), 1f, 0, false, 524419, -1f);
	Global_1914319->f_18968 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
	func_2395(iParam0, Global_1914319->f_18968);
	shake_cam(Global_1914319->f_18968, "HAND_SHAKE", 0.1f);
	render_script_cams(true, false, 3000, true, false, 0);
}

void func_1123(int iParam0)
{
	render_script_cams(false, false, 3000, true, false, 0);
	set_player_control(player_id(), true, 0, false);
	iVar0 = func_500(7);
	if (is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		clear_ped_tasks_immediately(Global_35, true, true);
	}
	if ((does_entity_exist(iVar0) && !_0xb655db7582aec805(iVar0)) && func_2396(Global_35, iVar0) < 100f)
	{
		if (_0x6eead6af637da752(get_entity_coords(Global_35, false, false), -1805387726, 100f, 0))
		{
			iVar1 = _find_closest_active_scenario_point_of_type(get_entity_coords(Global_35, false, false), -1805387726, 100f, 1, false);
			if (!func_2397(_get_scenario_point_coords(iVar1, true), 4f, 2, 0, 0, 0))
			{
				_task_use_scenario_point(iVar0, iVar1, 0, 0, true, true, 0, false, -1f, false);
			}
		}
	}
	if (_is_ped_carrying(Global_35))
	{
		func_2398(Global_35, &uVar2, 1);
		if (does_entity_exist(&(uVar2[0])))
		{
			_0xed00d72f81cf7278(&(uVar2[0]), 0, 0);
			vVar6 = { func_2400(func_2399(iParam0), &uVar4, &uVar5) };
			vVar6 = { vVar6 + Vector(0.5f, 0f, 0f) };
			set_entity_coords(&(uVar2[0]), vVar6, false, false, true, true);
		}
	}
	if (does_cam_exist(Global_1914319->f_18968))
	{
		destroy_cam(Global_1914319->f_18968, false);
	}
}

void func_1124()
{
	Global_1310720->f_9 = 1;
	if (get_clock_hours() >= 8)
	{
		iVar0 = func_630();
		func_1219(&iVar0, 0, 0, 24, 0, 0, 0, 0);
		func_1699(iVar0);
	}
	vVar3 = { func_2400(func_2399(Global_1914319->f_18967), &uVar1, &uVar2) };
	func_2327(vVar3, uVar2, uVar1, 0);
	Global_40.f_9.f_15 = -1;
	Global_1572864->f_21 = 7;
	Global_1310720->f_17 = 8;
	Global_1310720->f_8 = 0;
	Global_1310720->f_27 = 1;
	Global_1310720->f_28 = 1;
	Global_1935630->f_4 = 1;
	Var16 = { Var6 };
	StringCopy(&(Var16.f_10), "respawn_persistence", 32);
	Var16.f_14 = 1024;
	Var16.f_15 = 0;
	func_527(Var16, 0);
	func_1072(4096);
}

bool func_1125()
{
	if (((func_138(player_id(), 1, 0, 1) || is_ped_in_combat(Global_35, 0)) || func_139()) || func_654(func_178()))
	{
		return true;
	}
	if (func_124())
	{
		return true;
	}
	return false;
}

int func_1126(int iParam0)
{
	if (func_1309(iParam0) == 8)
	{
		return func_698(iParam0);
	}
	return -1;
}

void func_1127()
{
	if (!Global_1914319->f_19657)
	{
		return;
	}
	iVar0 = func_2067(func_178(), 2);
	if (iVar0 != -1 && iVar0 != 96)
	{
		if (func_2401(iVar0, 20f))
		{
			if (((((Global_1914319->f_3[2]->f_442 == 0 && !func_272(0, 0, 1)) && !func_1844()) && !func_2402()) && !func_769()) && !func_768())
			{
				Global_1914319->f_3[2]->f_442 = func_89("TF_SHOP_POST_OFFICE", 10000, 0, 0, 0, 1);
			}
		}
		else if (Global_1914319->f_3[2]->f_442 != 0)
		{
			_0x2f901291ef177b02(Global_1914319->f_3[2]->f_442, 1);
			Global_1914319->f_3[2]->f_442 = 0;
		}
	}
}

bool func_1128(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_1129(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_1158(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_1130(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_1159(iParam1))
	{
		return false;
	}
	return func_310(Global_1914319->f_3[iParam0]->f_10, 1024);
}

bool func_1131(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_1912(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_2403(iVar0, 0)))
		{
			if (func_2404(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1132(int iParam0)
{
	if (func_310(iParam0, 32768) || func_310(iParam0, 16384))
	{
		return true;
	}
	return false;
}

bool func_1133(int iParam0, int iParam1)
{
	if (!func_1128(iParam1))
	{
		return false;
	}
	return func_2405(iParam1);
}

bool func_1134()
{
	if (((func_1193(6) || func_1193(3)) || func_1193(7)) || func_1193(0))
	{
		return true;
	}
	return false;
}

bool func_1135(int iParam0, int iParam1)
{
	if ((iParam0 == 9 || iParam0 == 29) || iParam0 == 19)
	{
		return false;
	}
	return true;
}

bool func_1136(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return false;
	}
	return Global_1914319->f_19001[iParam0]->f_2 == 1;
}

void func_1137(int iParam0, int iParam1)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	if (!func_1090(iParam1))
	{
		return;
	}
	if (iParam1 != func_1087(iParam0))
	{
		return;
	}
	iVar0 = func_2406(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 != -1)
	{
		if (!func_1802(iVar0))
		{
			func_2407(&iVar0, 0);
			Global_1914319->f_15936[iParam0] = -1;
			if (Global_1914319->f_15936[iParam0]->f_5)
			{
				Global_1914319->f_15936[iParam0]->f_5 = 0;
			}
			return;
		}
	}
	if (iParam1 == 9)
	{
		iVar1 = func_2408(iVar0);
		if (func_2410(func_2409(iVar0)) != func_2411(iParam0, iParam1))
		{
			if (iVar1 != 0)
			{
				set_blip_sprite(iVar1, func_2411(iParam0, iParam1), true);
				func_2413(iVar0, func_2412(iParam0, iParam1));
			}
		}
		switch (func_2414(&(Global_1914319->f_17042)))
		{
			case 0:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				break;
			case 1:
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				_blip_set_modifier(iVar1, 1351440471);
				break;
			case 2:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, -586092192);
				_blip_set_modifier(iVar1, 2068327888);
				break;
			case 3:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_blip_set_modifier(iVar1, -586092192);
				break;
			default:
				_set_blip_flash_style(iVar1, 1351440471);
				_set_blip_flash_style(iVar1, 2068327888);
				_set_blip_flash_style(iVar1, -586092192);
				break;
		}
	}
	if (iParam0 == Global_1934051->f_116 && !Global_1934051->f_118)
	{
		if (!func_310(iParam0, -2147483648))
		{
			func_2415(iVar0, -1186550032);
			func_1089(iParam0, 32);
			if (Global_1914319->f_15936[iParam0]->f_5)
			{
				func_2415(iVar0, func_2416(func_1152(iParam0)));
				Global_1914319->f_15936[iParam0]->f_5 = 0;
			}
			func_2417(iVar0, 580546400);
			func_2417(iVar0, 847579139);
			func_1088(iParam0, -2147483648);
		}
	}
	else if (func_2418(iParam0, iParam1))
	{
		if (!func_310(iParam0, 32))
		{
			func_2415(iVar0, -1446646876);
			func_2415(iVar0, 724623647);
			func_1089(iParam0, 16);
			func_1089(iParam0, 64);
			func_2417(iVar0, -1186550032);
			if (iParam1 == func_1087(iParam0))
			{
				if (does_blip_exist(Global_1914319->f_3[iParam1]->f_14))
				{
					_blip_set_modifier(Global_1914319->f_3[iParam1]->f_14, -1186550032);
				}
			}
			func_1088(iParam0, 32);
		}
	}
	else if ((func_2419(iParam0) || ((Global_1914319->f_3[iParam1]->f_3 == 2 || Global_1914319->f_3[iParam1]->f_3 == 0) && !func_2420(iParam0))) && func_1152(iParam0) == func_178())
	{
		if (!func_310(iParam0, 16))
		{
			func_2415(iVar0, -1446646876);
			func_2415(iVar0, -1186550032);
			func_2415(iVar0, 580546400);
			func_2415(iVar0, 847579139);
			func_1089(iParam0, 32);
			func_1089(iParam0, 64);
			func_1089(iParam0, -2147483648);
			func_2417(iVar0, 724623647);
			func_1088(iParam0, 16);
		}
	}
	else if ((func_2420(iParam0) && func_1152(iParam0) == func_178()) || !(func_2421(iParam0) || func_1269(func_2422(iParam1))))
	{
		if (!func_310(iParam0, 64))
		{
			func_2415(iVar0, 724623647);
			func_2415(iVar0, -1186550032);
			func_2415(iVar0, 580546400);
			func_2415(iVar0, 847579139);
			func_1089(iParam0, 32);
			func_1089(iParam0, 16);
			func_1089(iParam0, -2147483648);
			func_2417(iVar0, -1446646876);
			func_1088(iParam0, 64);
		}
	}
	else
	{
		if (func_310(iParam0, 32))
		{
			func_2415(iVar0, -1186550032);
			if (iParam1 == func_1087(iParam0))
			{
				if (does_blip_exist(Global_1914319->f_3[iParam1]->f_14))
				{
					_set_blip_flash_style(Global_1914319->f_3[iParam1]->f_14, -1186550032);
				}
			}
			func_1089(iParam0, 32);
		}
		if (func_310(iParam0, -2147483648))
		{
			func_2415(iVar0, 580546400);
			func_2415(iVar0, 847579139);
			func_1089(iParam0, -2147483648);
		}
		if (func_310(iParam0, 16))
		{
			func_2415(iVar0, 724623647);
			func_1089(iParam0, 16);
		}
		if (func_310(iParam0, 64))
		{
			func_2415(iVar0, -1446646876);
			func_1089(iParam0, 64);
		}
		if (func_1087(iParam0) == 2)
		{
			iVar2 = func_2423();
			func_2424(&(Global_1914319->f_15936[iParam0]), iVar2);
			if (func_601(func_795()) > 0)
			{
				func_2417(&(Global_1914319->f_15936[iParam0]), 37805592);
			}
			else
			{
				func_2415(&(Global_1914319->f_15936[iParam0]), 37805592);
			}
		}
	}
}

bool func_1138(int iParam0)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_2425(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1139(int iParam0)
{
	iParam0 = func_1582(iParam0);
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

int func_1140(int iParam0)
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
			return 64;
		case 5:
			return 16;
		case 6:
			return 32;
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
	}
	return 0;
}

bool func_1141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = -1124266369;
			return true;
		case 1:
			*iParam1 = 759906147;
			return true;
		case 2:
			*iParam1 = -1568716381;
			return true;
		case 3:
			*iParam1 = 1556473961;
			return true;
		case 4:
			*iParam1 = 2028722809;
			return true;
		case 5:
			*iParam1 = -1963605336;
			return true;
		case 6:
			*iParam1 = 367637652;
			return true;
		case 7:
			*iParam1 = -1598866821;
			return true;
		case 8:
			*iParam1 = 90264823;
			return true;
		case 9:
			*iParam1 = 480688259;
			return true;
		case 10:
			*iParam1 = -2021043433;
			return true;
		case 11:
			*iParam1 = 252669332;
			return true;
		case 12:
			*iParam1 = -1098441944;
			return true;
		case 13:
			*iParam1 = 1654513481;
			return true;
		case 14:
			*iParam1 = 1755643085;
			return true;
		case 15:
			*iParam1 = -1143398950;
			return true;
	}
	return false;
}

int func_1142(int iParam0)
{
	switch (iParam0)
	{
		case -1124266369:
			return -514494287;
		case 759906147:
			return -150200864;
		case -1568716381:
			return -734947450;
		case 1556473961:
			return 2022985736;
		case 2028722809:
			return 2109269555;
		case -1963605336:
			return -888740979;
		case 367637652:
			return -987731097;
		case -1598866821:
			return -444893329;
		case 90264823:
			return 1528935719;
		case 480688259:
			return -1517904196;
		case -2021043433:
			return 229379699;
		case 252669332:
			return 1642484975;
		case -1098441944:
			return -687487191;
		case 1654513481:
			return 657906142;
		case 1755643085:
			return -103050851;
		case -1143398950:
			return 552246565;
		default:
			break;
	}
	return 0;
}

bool func_1143(int iParam0)
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

int func_1144()
{
	return Global_36560.f_15;
}

bool func_1145(int iParam0)
{
	if (!func_1011(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_2426(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1146(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_3[iVar0], 1);
		iVar0++;
	}
}

int func_1147(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_2426(iVar0, 1);
		iVar2 = iVar1;
		if (!func_231(iVar2, 0))
		{
		}
		else if (iParam1 == iVar2)
		{
			return uParam0[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_1148(int iParam0, var uParam1)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam1)[iVar0], Global_40.f_1095.f_1[iParam0]->f_298[iVar0], 1);
		iVar0++;
	}
}

void func_1149(int iParam0, bool bParam1)
{
	iVar0 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar21 = func_1140(iParam0);
	func_1141(iParam0, &uVar22);
	iVar4 = _0xb29c553ba582d09e(&uVar5, uVar22, 2, 4);
	if (iVar4 > 0 && iVar4 < 15)
	{
		bVar1 = true;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			iVar0 = 0;
			if (func_2427(&(uVar5[iVar3]), 369710026, &iVar0))
			{
				iVar0 = (iVar0 - func_2428(&(uVar5[iVar3]), 1));
				if (iVar0 > 0)
				{
					if (func_2429(&(uVar5[iVar3]), 1))
					{
						if (!func_2430(&(uVar5[iVar3]), 1, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bParam1 && func_2427(&(uVar5[iVar3]), -768110908, &iVar0))
			{
				iVar0 = (iVar0 - func_2428(&(uVar5[iVar3]), 0));
				if (iVar0 > 0)
				{
					if (func_2429(&(uVar5[iVar3]), 0))
					{
						if (!func_2430(&(uVar5[iVar3]), 0, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar1)
		{
			Global_40.f_9319[iParam0]->f_3 = 0;
			func_126(&(Global_20710.f_2407), iVar21);
			if (bVar2)
			{
				func_737(467, 1);
			}
			func_386(0, -1);
		}
	}
}

bool func_1150(int iParam0)
{
	return _0x1f56fb3fdb4eaf65(iParam0);
}

int func_1151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1781233743;
		case 1:
			return 636730081;
		case 2:
			return -795241033;
		case 3:
			return -1550790546;
		case 4:
			return 950257367;
		case 5:
			return -1894468643;
		case 6:
			return 2111267495;
		case 7:
			return 1044478494;
		case 8:
			return -973690007;
		case 9:
			return 1210759497;
		case 10:
			return 1895708243;
		case 11:
			return 225698625;
		case 12:
			return -1998732171;
		case 13:
			return 1631667828;
		case 14:
			return -908129790;
		case 15:
			return -377162693;
		default:
			break;
	}
	return 0;
}

int func_1152(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_178() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_1153(int iParam0)
{
	if (_0x7907969497ea92f5(&(Global_1914319->f_16934[iParam0])))
	{
		if (_0x603ac35fd4602c76(&(Global_1914319->f_16934[iParam0])))
		{
			if (!func_692(&(Global_1914319->f_16970[iParam0]), 2))
			{
				func_1157(Global_1914319->f_16970[iParam0], 2);
			}
			return true;
		}
	}
	return false;
}

bool func_1154(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return true;
	}
	iVar0 = func_2431(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_0x7907969497ea92f5(&(Global_1914319->f_16934[iParam0])))
	{
		Global_1914319->f_16934[iParam0] = _0xd97d8d905f1562f2(iVar0);
		if (!func_123(&(Global_1914319->f_16970[iParam0]), 1))
		{
			func_1157(Global_1914319->f_16970[iParam0], 1);
		}
	}
	if (!_0x603ac35fd4602c76(&(Global_1914319->f_16934[iParam0])))
	{
		return false;
	}
	return true;
}

void func_1155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1156(int iParam0)
{
	if (!func_1153(iParam0))
	{
		return false;
	}
	if (func_2432(iParam0))
	{
		return false;
	}
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), 297708565, "SHOP_TYPE/REGION(id=%x)");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -1579522939, "VOLUME(id=%x):position");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), 216275750, "VOLUME(id=%x):rotation");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -1658911560, "VOLUME(id=%x):scale");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -738708473, "VOLUME(id=%x):name");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -99852754, "VECTOR(id=%x):data");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), 1059891245, "FLOAT(id=%x):data");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), 110382701, "INT(id=%x):data");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -1407851228, "HASH(id=%x):data");
	_datafile_register_query(&(Global_1914319->f_16934[iParam0]), -1793904784, "STRING(id=%x):data");
	func_1157(Global_1914319->f_16970[iParam0], 4);
	return true;
}

void func_1157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1158(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_1159(int iParam0)
{
	bVar0 = func_310(iParam0, 256);
	return bVar0;
}

bool func_1160(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_1087(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

void func_1161(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	if (iParam1 == 2 || iParam1 == 1)
	{
		return;
	}
	iVar1 = func_1207(iParam1);
	if (iVar1 >= 15)
	{
		return;
	}
	if (func_2433(iParam0))
	{
		bParam2 = false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = &Global_1914319->f_3[iParam1]->f_317[iVar0];
		if (func_2434(iVar2))
		{
			func_2435(iVar2, 0, 0);
			if (!func_2436(iVar2))
			{
				return;
			}
			func_2437(iVar2, 1, 0f, 0, bParam2, 0, 0, 0);
			if (!bParam2)
			{
				_0x7f458b543006c8fe(iVar2, 16);
			}
			else
			{
				_0x7f458b543006c8fe(iVar2, 0);
			}
		}
		iVar0++;
	}
}

void func_1162(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam3 = iParam3;
	switch (iParam1)
	{
		case 29:
			if (func_82() == -1)
			{
				iVar0 = get_interior_at_coords(Global_1914319->f_3[iParam0]->f_11);
			}
			else
			{
				iVar0 = get_interior_at_coords(Global_1051260->f_48[iParam0]->f_3);
			}
			if (!is_valid_interior(iVar0))
			{
			}
			else
			{
				if (bParam2)
				{
					if (is_interior_entity_set_active(iVar0, "rhoGunsmith_FireON"))
					{
						deactivate_interior_entity_set(iVar0, "rhoGunsmith_FireON", true);
					}
					if (!is_interior_entity_set_active(iVar0, "rhoGunsmith_FireOFF"))
					{
						activate_interior_entity_set(iVar0, "rhoGunsmith_FireOFF", 0);
					}
				}
				else
				{
					if (is_interior_entity_set_active(iVar0, "rhoGunsmith_FireOFF"))
					{
						deactivate_interior_entity_set(iVar0, "rhoGunsmith_FireOFF", true);
					}
					if (!is_interior_entity_set_active(iVar0, "rhoGunsmith_FireON"))
					{
						activate_interior_entity_set(iVar0, "rhoGunsmith_FireON", 0);
					}
				}
				Jump @283; //curOff = 212
				if (bParam2)
				{
					if (!func_613(-628542779))
					{
						func_1286(-628542779);
					}
				}
				else if (func_613(-628542779))
				{
					func_1287(-628542779);
				}
				Jump @283; //curOff = 266
				func_1196(iParam0, bParam2);
			}
			if (bParam2)
			{
				func_2438(iParam0);
			}
			else
			{
				func_2439(iParam0);
			}
			default:
				break;
	}
}

void func_1163(int iParam0, int iParam1, int iParam2)
{
	if (func_82() != -1)
	{
		return;
	}
	if (func_2440(iParam1) != -1)
	{
		if (!_0xee1d6ff54caf7714(Global_1914319->f_3[iParam0]->f_25, func_1773(func_2440(iParam1))))
		{
			func_2441(func_2440(Global_1914319->f_3[iParam0]->f_10), Global_1914319->f_3[iParam0]->f_25, 0);
		}
		_0x53d05d60e5f5b40c(Global_1914319->f_3[iParam0]->f_25, 3, iParam2, func_1773(func_2440(iParam1)));
	}
}

bool func_1164(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_82() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*iParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1165(int iParam0)
{
	if (!func_1179(func_1242(iParam0, 0)))
	{
		return false;
	}
	iVar0 = func_1772(func_1242(iParam0, 0));
	switch (iVar0)
	{
		case -2098805802:
		case -1760134268:
		case -1720522403:
		case -1496211826:
		case -1472222264:
		case -1456173883:
		case -1391735686:
		case -1337007991:
		case -1128080855:
		case -1116668486:
		case -877355938:
		case -650257138:
		case -634913711:
		case -615386674:
		case -556457729:
		case -533772707:
		case 13133629:
		case 135353273:
		case 156473432:
		case 225456100:
		case 260410249:
		case 344419080:
		case 618535878:
		case 852936895:
		case 895371587:
		case 914853768:
		case 986295353:
		case 1010118053:
		case 1057927283:
		case 1193985110:
		case 1198640232:
		case 1231178090:
		case 1317192638:
		case 1443812975:
		case 1479005205:
		case 1645786537:
		case 1659593009:
		case 1677108849:
		case 1709214177:
		case 1711355775:
		case 1787522659:
		case 1908738551:
		case 1943609607:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

void func_1166(int iParam0, int iParam1, bool bParam2)
{
	if (func_2442(iParam1, 1))
	{
		return;
	}
	if (func_310(iParam1, 1024))
	{
		return;
	}
	if (_0x0eaf918f751f27ba(iParam0) || _0xc0df161950fb101e(iParam0))
	{
		return;
	}
	if (func_2443(iParam0, 0))
	{
		return;
	}
	if (func_1182(iParam0, 0) || !does_entity_exist(func_744(iParam0)))
	{
		return;
	}
	iVar0 = func_1772(func_1242(iParam0, 0));
	if (bParam2)
	{
		sVar1 = func_2444(iVar0);
		func_1775(func_1242(iParam0, 0), 4096);
	}
	else
	{
		sVar1 = func_2445(iVar0);
		func_1774(func_1242(iParam0, 0), 4096);
	}
	if (compare_strings(_0xceb40b678e403759(iVar0), sVar1, false, -1) == 0)
	{
		return;
	}
	_0x187d65f3aec5d679(iVar0, sVar1);
	_0xa3a9299c4f2adb98(iParam0);
	task_persistent_character(iParam0);
}

bool func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 12:
		case 13:
		case 14:
		case 17:
		case 18:
		case 19:
		case 22:
			return true;
		default:
			break;
	}
	return false;
}

int func_1168(int iParam0)
{
	if (!func_1128(iParam0))
	{
		return 320012143;
	}
	switch (func_1152(iParam0))
	{
		case 78:
			return -745800003;
		case 38:
			return -131175708;
		case 69:
			return 105086774;
		case 3:
			return -952561203;
		case 5:
			return -1332404091;
		case 105:
			return 872186388;
		case 23:
			return 410265074;
		case 26:
			return -437531556;
		case 76:
			return -1159046135;
		case 92:
			return 692025686;
		case 28:
			return -1316957294;
		case 115:
			return 1475477895;
		case 13:
		case 14:
		case 90:
		case 113:
		case 128:
			return 1056936303;
		default:
			break;
	}
	return 320012143;
	return 320012143;
}

void func_1169(int iParam0, bool bParam1)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1158(iParam0, 512)) || (!bParam1 && !func_1158(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_2446(iParam0, 512);
	}
	else
	{
		func_295(iParam0, 512);
	}
	if (func_1193(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_1170()
{
	return Global_1914319->f_16855.f_1 != -1;
}

bool func_1171(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (is_thread_active(Global_1914319->f_3[iParam0]->f_18, false))
	{
		return true;
	}
	return false;
}

bool func_1172(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_2447(iParam0))
	{
		return true;
	}
	if (func_82() == -1)
	{
		if (func_131(&Global_1935630, 2097152))
		{
			return false;
		}
	}
	fVar0 = Global_1914319->f_3[iParam0]->f_19;
	fVar0 = (fVar0 * fVar0);
	fVar1 = func_1116(get_player_ped(get_player_index()), Global_1914319->f_3[iParam0]->f_11, 1);
	if (fVar1 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_1173(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_2448(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (&Global_1914319->f_15927[iVar0] == -1)
		{
			Global_1914319->f_15927[iVar0] = iParam0;
			func_1178(iParam0, 1);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1174(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_1160(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_2449(iParam0, 4))
		{
			func_2450(iParam0, 4);
		}
	}
	else
	{
		func_2451(iParam0, 4);
	}
	func_1192(iParam0);
}

bool func_1175()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&Global_1914319->f_15924[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1176(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return 0;
	}
	sVar0 = func_2452(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	if (func_1158(iParam0, 2))
	{
		return 1;
	}
	request_script(sVar0);
	func_2446(iParam0, 2);
	return 1;
}

bool func_1177(int iParam0)
{
	if (!func_1158(iParam0, 128))
	{
		if (is_thread_active(Global_1914319->f_3[iParam0]->f_18, false))
		{
			return false;
		}
		if (func_2453(iParam0))
		{
			if (get_number_of_free_stacks_of_this_size(6005) > 0)
			{
				Var0 = iParam0;
				Var0.f_2 = Global_1914319->f_3[iParam0]->f_25;
				Var0.f_3 = Global_1914319->f_3[iParam0]->f_26;
				Var0.f_1 = func_178();
				Var0.f_4 = { Global_1914319->f_3[iParam0]->f_11 };
				Global_1914319->f_3[iParam0]->f_18 = start_new_script_with_args(func_2452(iParam0), &Var0, 7, 6005);
				func_295(iParam0, 2);
				if (!Global_20710.f_2400)
				{
					Global_20710.f_2400 = 1;
				}
				func_2454(iParam0, 8);
				set_script_as_no_longer_needed(func_2452(iParam0));
				return true;
			}
		}
		else if (!func_1158(iParam0, 2))
		{
			func_1176(iParam0);
		}
	}
	return false;
}

void func_1178(int iParam0, bool bParam1)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		set_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		clear_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_1179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_1180(int iParam0, bool bParam1)
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_1179(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_1773(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_1181(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_1773(iParam0));
}

int func_1181(int iParam0)
{
	iVar0 = func_1773(iParam0);
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

bool func_1182(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

int func_1183(int iParam0, var uParam1)
{
	if (func_357(15))
	{
		func_1194(9);
		*uParam1 = 0;
		return 0;
	}
	if (!func_1128(iParam0))
	{
		*uParam1 = 0;
		return 1;
	}
	if (!func_309(iParam0))
	{
		*uParam1 = 3;
		return 1;
	}
	if (!func_296(iParam0))
	{
		*uParam1 = 4;
		return 1;
	}
	if (func_1179(Global_1914319->f_3[9]->f_21))
	{
		if (!func_1180(Global_1914319->f_3[9]->f_21, 0))
		{
			if (!func_1158(9, -2147483648))
			{
				func_1911(Global_1914319->f_3[9]->f_21);
				func_281(1);
				_0x710448d44a64c213(1);
				func_2455(iParam0);
				func_2446(9, -2147483648);
			}
			else
			{
				iVar0 = func_2456(Global_1914319->f_3[9]->f_21);
				iVar1 = (24 - func_1758(iVar0));
				if (iVar1 < 0)
				{
					iVar1 = 0;
				}
				func_1219(&iVar0, 0, 0, iVar1, 1, 0, 0, 0);
				if (func_488(iVar0, 1) && _0x800df3fc913355f3(func_1773(Global_1914319->f_3[9]->f_21)))
				{
					_0x49a8c2cd97815215(func_1773(Global_1914319->f_3[9]->f_21));
					func_295(9, -2147483648);
				}
			}
		}
	}
	if (func_654(func_1152(iParam0)))
	{
		*uParam1 = 2;
		return 1;
	}
	if (func_767(43) && !func_767(44))
	{
		*uParam1 = 11;
		return 1;
	}
	if ((func_1063(1, 0) || func_1063(8, 0)) && !func_357(15))
	{
		*uParam1 = 11;
		return 1;
	}
	if (func_2457())
	{
		*uParam1 = 11;
		return 1;
	}
	if (func_2458(&(Global_1914319->f_17042.f_70), Global_35, 1, 1))
	{
		*uParam1 = 9;
		return 1;
	}
	if (func_2458(&(Global_1914319->f_17042.f_26), Global_35, 1, 1))
	{
		*uParam1 = 9;
		return 1;
	}
	if (func_2459(&(Global_1914319->f_17042.f_70), 0) > 0)
	{
		*uParam1 = 9;
		return 1;
	}
	if (func_2459(&(Global_1914319->f_17042.f_26), 0) > 0)
	{
		*uParam1 = 9;
		return 1;
	}
	if (get_closest_fire_pos(&vVar2, Global_1914319->f_3[9]->f_11))
	{
		if (_0xf256a75210c5c0eb(Global_1914319->f_3[9]->f_25, vVar2))
		{
			*uParam1 = 9;
			return 1;
		}
	}
	bVar6 = func_2460(9, iParam0, &iVar5);
	if ((func_1184(iParam0) && !iVar5 == 1) && !func_1158(9, 268435456))
	{
		func_294(iParam0, 0);
		bVar6 = false;
	}
	else if (func_1184(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (bVar6)
	{
		switch (iVar5)
		{
			case 1:
				*uParam1 = 9;
				return 1;
			case 4:
				*uParam1 = 2;
				return 1;
		}
	}
	func_1194(9);
	*uParam1 = 0;
	return 0;
}

bool func_1184(int iParam0)
{
	return func_310(iParam0, 1048576);
}

int func_1185(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	if (!func_1128(iParam1))
	{
		*uParam2 = 0;
		return 1;
	}
	if (!func_309(iParam1))
	{
		*uParam2 = 3;
		return 1;
	}
	if (func_1159(iParam1))
	{
		return 0;
	}
	if (func_2461(iParam1))
	{
		return 0;
	}
	if (func_2462(iParam1))
	{
		*uParam2 = 6;
		return 1;
	}
	if (func_2442(iParam1, 1))
	{
		return 0;
	}
	if (iParam0 == 8 && !func_361(29))
	{
		*uParam2 = 4;
		return 1;
	}
	if (!func_1233(iParam0, 16384) || bParam3)
	{
		if (func_1179(Global_1914319->f_3[iParam0]->f_21))
		{
			if (!func_1180(Global_1914319->f_3[iParam0]->f_21, 0))
			{
				if (!func_1158(iParam0, -2147483648))
				{
					func_1911(Global_1914319->f_3[iParam0]->f_21);
					func_281(1);
					_0x710448d44a64c213(1);
					if (func_2463(func_1772(Global_1914319->f_3[iParam0]->f_21)))
					{
						func_2450(func_2067(func_178(), iParam0), 16);
					}
					Global_20710.f_1938[iParam1] = func_630();
					func_1219(Global_20710.f_1938[iParam1], 0, 0, 0, 5, 0, 0, 0);
					func_2446(iParam0, -2147483648);
					func_2455(iParam1);
				}
				else
				{
					iVar0 = func_2456(Global_1914319->f_3[iParam0]->f_21);
					iVar1 = (24 - func_1758(iVar0));
					if (iVar1 < 0)
					{
						iVar1 = 0;
					}
					func_1219(&iVar0, 0, 0, iVar1, 1, 0, 0, 0);
					if (func_488(iVar0, 1) && _0x800df3fc913355f3(func_1773(Global_1914319->f_3[iParam0]->f_21)))
					{
						_0x49a8c2cd97815215(func_1773(Global_1914319->f_3[iParam0]->f_21));
						func_295(iParam0, -2147483648);
					}
				}
				*uParam2 = 10;
				return 1;
			}
		}
	}
	if (Global_1914319->f_3[iParam0]->f_4 != -15 && !func_488(Global_1914319->f_3[iParam0]->f_4, 1))
	{
		*uParam2 = 11;
		return 1;
	}
	if (func_2460(iParam0, iParam1, &iVar2))
	{
		if (func_1233(iParam0, 16384) && !bParam3)
		{
			switch (iVar2)
			{
				case 1:
					*uParam2 = 9;
					return 1;
				case 2:
				case 3:
				case 4:
					*uParam2 = 2;
					return 1;
				default:
					break;
			}
		}
		else
		{
			switch (iVar2)
			{
				case 3:
					*uParam2 = 8;
					return 1;
				case 1:
					*uParam2 = 9;
					return 1;
				case 5:
				case 6:
					*uParam2 = 5;
					return 1;
				default:
					*uParam2 = 2;
					return 1;
			}
		}
	}
	if (!func_1239(iParam0, iParam1))
	{
		*uParam2 = 1;
		return 1;
	}
	if (func_2464(iParam0))
	{
		*uParam2 = 12;
		return 1;
	}
	if (iParam1 == 39 && func_937(58))
	{
		*uParam2 = 11;
		return 1;
	}
	if ((iParam0 == 9 && func_767(43)) && !func_767(44))
	{
		*uParam2 = 11;
		return 1;
	}
	if ((iParam0 == 9 && (func_1063(1, 0) || func_1063(8, 0))) && !func_357(15))
	{
		*uParam2 = 11;
		return 1;
	}
	*uParam2 = 0;
	return 0;
}

int func_1186(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
			iVar0 = 0;
			break;
		case 10:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_1187(int iParam0, int iParam1, int iParam2)
{
	if (!func_1128(iParam1))
	{
		return;
	}
	if (!func_2465(iParam1))
	{
		return;
	}
	if (!Global_1914319->f_18969)
	{
		if (((iParam2 == 1 || iParam2 == 10) && func_310(iParam1, 8388608)) && func_2466(iParam0, iParam1))
		{
			if (!func_321(Global_1914319->f_18966))
			{
				Global_1914319->f_18966 = func_2161("SHOP_TOD_SKIP_AVAILABLE", -822242784, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				Global_1914319->f_18967 = iParam1;
			}
		}
		else if (Global_1914319->f_18967 == iParam1 && func_321(Global_1914319->f_18966))
		{
			func_327(&(Global_1914319->f_18966), 1, 1);
			Global_1914319->f_18967 = -1;
		}
	}
}

void func_1188(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_1 = iParam1;
}

void func_1189(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1190()
{
	if (func_897())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

void func_1191(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 68)
	{
		switch (iParam2)
		{
			case 2:
				break;
			case 8:
				break;
		}
		Global_1914319->f_3[iParam0]->f_443 = iParam2;
	}
}

void func_1192(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

bool func_1193(int iParam0)
{
	if (func_897())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_1194(int iParam0)
{
	iVar1 = func_2067(func_178(), iParam0);
	if (iVar1 == 27)
	{
		func_1286(-644722288);
	}
	iVar2 = func_1207(iParam0);
	if (iVar2 >= 15)
	{
		return;
	}
	if (iParam0 == 9)
	{
		bVar3 = is_sphere_visible(Global_1914319->f_3[9]->f_11, 15f);
		fVar4 = func_526(Global_35, Global_1914319->f_3[iParam0]->f_11, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar5 = &Global_1914319->f_3[iParam0]->f_317[iVar0];
		if (func_2434(iVar5))
		{
			func_2435(iVar5, 0, 0);
			if (!func_2436(iVar5))
			{
				return;
			}
			bVar6 = Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 >= 1f;
			if ((!func_2467(iVar5) && !Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5) || (!func_2468(iVar5, bVar6) && Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5))
			{
				if (iParam0 == 9)
				{
					if (fVar4 >= 125f || ((fVar4 < 125f && fVar4 >= 50f) && !bVar3))
					{
						func_2437(iVar5, 0, Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4, Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5, 1, 0, 0, 0);
					}
					else
					{
						func_2437(iVar5, 0, 0, 0, 1, 0, 0, 0);
					}
				}
				else
				{
					func_2437(iVar5, 0, Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4, Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5, 1, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_1195(int iParam0, int iParam1, int iParam2)
{
	if (func_1184(iParam0))
	{
		return true;
	}
	if (func_1159(iParam0))
	{
		return false;
	}
	if ((iParam2 == 2 && !func_1193(iParam1)) && !func_2469(iParam1, 0))
	{
		return true;
	}
	if (iParam2 == 1)
	{
		if (func_2421(iParam0))
		{
			return false;
		}
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam1]->f_23))
	{
		return true;
	}
	iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam1]->f_23);
	if (func_1160(iParam0))
	{
		if ((func_1193(iParam1) && func_2470(iVar0, iParam1)) && is_ped_still(iVar0))
		{
			return false;
		}
	}
	else
	{
		bVar1 = false;
		if ((_0x0eaf918f751f27ba(iVar0) || _0xc0df161950fb101e(iVar0)) || is_ped_in_combat(iVar0, Global_35))
		{
			bVar1 = true;
		}
		if (func_897() || func_2469(iParam1, bVar1))
		{
			return false;
		}
	}
	if (!func_1179(Global_1914319->f_3[iParam1]->f_21))
	{
		return true;
	}
	if (!func_1180(Global_1914319->f_3[iParam1]->f_21, 0))
	{
		return true;
	}
	return true;
}

void func_1196(int iParam0, bool bParam1)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return;
	}
	iVar3[0] = 319326044;
	iVar3[1] = -127135028;
	iVar3[2] = 1960923571;
	iVar3[3] = 219115318;
	iVar8 = func_2471(&uVar0, &iVar3, Global_1914319->f_3[iParam0]->f_25, 1);
	if (iVar8 > 0)
	{
		if (bParam1)
		{
			if (!Global_1914319->f_18994)
			{
				if (fLocal_7 <= 0.025f)
				{
					Global_1914319->f_18994 = 1;
					_0xf49574e2332a8f06(&(uVar0[0]), 0.025f);
					func_2438(iParam0);
				}
				else
				{
					_0xf49574e2332a8f06(&(uVar0[0]), fLocal_7);
					fLocal_7 = (fLocal_7 - 0.025f);
				}
			}
		}
		else
		{
			fLocal_7 = 1f;
			_0xf49574e2332a8f06(&(uVar0[0]), fLocal_7);
			func_2439(iParam0);
			Global_1914319->f_18994 = 0;
		}
	}
}

void func_1197(int iParam0, int iParam1, int iParam2)
{
	if (!func_1128(iParam1))
	{
		return;
	}
	if (iParam2 != 0)
	{
		if (Global_1914319->f_3[iParam0]->f_440 == 0)
		{
			if (func_2472(iParam0) || func_2473(iParam0))
			{
				switch (iParam2)
				{
					case 2:
						if ((((!(iParam0 == 2 && func_361(28)) && !func_310(iParam1, 1048576)) && !func_272(0, 0, 1)) && !func_1130(iParam0, iParam1)) && !(func_1234(21) && func_1152(iParam1) == 105))
						{
							Global_1914319->f_3[iParam0]->f_440 = func_89("SHOP_UNAVAILABLE_LOCKDOWN", -1, 0, 0, 0, 1);
						}
						break;
					case 10:
						iVar0 = func_2474(iParam1);
						if (func_1179(iVar0))
						{
							if (!func_1180(iVar0, 0))
							{
								Global_1914319->f_3[iParam0]->f_440 = func_89("SHOP_UNAVAILABLE_SHOPKEEPER_DEAD", -1, 0, 0, 0, 1);
							}
						}
						break;
					case 5:
						if (!func_1130(iParam0, iParam1) && !func_272(0, 0, 1))
						{
							Global_1914319->f_3[iParam0]->f_440 = func_89("SHOP_UNAVAILABLE_SHOPKEEPER_AGGROED", -1, 0, 0, 0, 1);
						}
						break;
					case 1:
						if ((!func_875(0) && !func_1130(iParam0, iParam1)) && !func_2475())
						{
							Global_1914319->f_3[iParam0]->f_440 = func_89("SHOP_UNAVAILABLE_TOD", -1, 0, 0, 0, 1);
						}
						break;
					default:
						Global_1914319->f_3[iParam0]->f_440 = 0;
						break;
				}
				if (Global_1914319->f_3[iParam0]->f_440 != 0)
				{
					if (_0x59fa676177dbe4c9(Global_1914319->f_3[iParam0]->f_440) != 6)
					{
					}
				}
			}
		}
		else if (Global_1914319->f_3[iParam0]->f_440 != 0)
		{
			if (_0x59fa676177dbe4c9(Global_1914319->f_3[iParam0]->f_440) != 6)
			{
				_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
			}
		}
	}
	else
	{
		Global_1914319->f_3[iParam0]->f_440 = 0;
	}
}

void func_1198(int iParam0, int iParam1)
{
	if (func_2462(iParam1))
	{
		return;
	}
	if (func_1164(iParam0, &iVar0))
	{
		if (func_1165(iVar0))
		{
			func_1166(iVar0, iParam1, 1);
		}
	}
	func_1194(iParam0);
	func_1162(iParam0, iParam1, 0, 0);
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		_0x74c2b3dc0b294102(Global_1914319->f_3[iParam0]->f_25);
		_0xa1cfb35069d23c23(Global_1914319->f_3[iParam0]->f_25);
		func_2476(Global_1914319->f_3[iParam0]->f_25);
	}
	if (_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		_0xb56d41a694e42e86(Global_1914319->f_3[iParam0]->f_28, 26592, 0, 0, -1, func_1168(iParam1), 0);
		_0x18262cafebb5fbe1(Global_1914319->f_3[iParam0]->f_28, 0, 26592, 0, -1, func_1168(iParam1), 0);
	}
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_1169(iParam0, 1);
	func_1163(iParam0, iParam1, 0);
	func_1089(iParam1, 16384);
	func_1089(iParam1, 32768);
	func_1089(iParam1, 8388608);
	func_1089(iParam1, 8192);
	func_2446(iParam0, 256);
}

void func_1199(int iParam0, int iParam1)
{
	if (iParam1 == 68)
	{
		if (func_2461(iParam1))
		{
			return;
		}
		if (func_1130(iParam0, iParam1))
		{
			return;
		}
		if (func_124())
		{
			return;
		}
		if (func_357(24))
		{
			return;
		}
		if (func_1193(iParam0))
		{
			return;
		}
		if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
		{
			return;
		}
		iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
		switch (Global_1914319->f_3[iParam0]->f_443)
		{
			case 1:
				break;
			case 2:
				_0x187d65f3aec5d679(919554560, "Valentine/VAL_BANK_GUARD_DAY");
				Global_1914319->f_3[iParam0]->f_443 = 4;
				break;
			case 4:
				if (func_1158(iParam0, 256) && !has_entity_clear_los_to_entity(Global_35, iVar0, 17))
				{
					_0x187d65f3aec5d679(-1043255841, "Valentine/VAL_BANK_MANAGER");
					func_1618(iVar0, -307.811f, 773.4694f, 117.7031f, 11.6268f, 2, 1073741824);
					Global_1914319->f_3[iParam0]->f_443 = 1;
				}
				break;
			case 8:
				_0x187d65f3aec5d679(919554560, "Valentine/VAL_BANK_GUARD_NIGHT");
				Global_1914319->f_3[iParam0]->f_443 = 16;
				break;
			case 16:
				if (!func_1158(iParam0, 256) && !_0x0c9dbf48c6ba6e4c(Global_35, -300.8933f, 762.6749f, 117.7171f, 17))
				{
					_0x187d65f3aec5d679(-1043255841, "Valentine/VAL_BANK_MANAGER_NIGHT");
					func_1618(iVar0, -300.8933f, 762.6749f, 117.7171f, 193.6368f, 2, 1073741824);
					Global_1914319->f_3[iParam0]->f_443 = 1;
				}
				break;
		}
	}
}

void func_1200(int iParam0, var uParam1)
{
	bVar0 = func_526(Global_35, Global_1914319->f_3[9]->f_11, 1) <= 175f;
	bVar1 = (func_2477(uParam1, 128) || !func_2478());
	if (bVar0 && !bVar1)
	{
		switch (*uParam1)
		{
			case 0:
				func_2479(iParam0, uParam1);
				break;
			case 1:
				func_2480(uParam1);
				break;
			case 2:
				func_2481(uParam1);
				break;
			case 3:
				func_2482(uParam1);
				break;
			case 4:
				func_2483(uParam1);
				break;
			case 5:
				func_2484(uParam1);
				break;
			case 6:
				func_2485(uParam1);
				break;
		}
	}
	else if (func_2477(uParam1, 2))
	{
		func_297(uParam1);
		func_2486(uParam1, 2);
		func_2486(uParam1, 128);
		if (func_1158(9, 268435456))
		{
			func_295(9, 268435456);
		}
	}
}

int func_1201(int iParam0)
{
	if (!func_1164(iParam0, &iVar0))
	{
		return 0;
	}
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		Global_1914319->f_18905[iParam0] = _0x7cc2186c32d3540a(iVar0, player_id());
		return &(Global_1914319->f_18905[iParam0]);
	}
	return 0;
}

bool func_1202(int iParam0, bool bParam1)
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_1179(iParam0))
	{
		return false;
	}
	if (!func_1205(iParam0) && bParam1)
	{
		return false;
	}
	return func_1771(iParam0, 1);
}

void func_1203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1179(iParam0))
	{
		return;
	}
	if (!func_1771(iParam0, 1))
	{
		return;
	}
	if (!func_1771(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1205(iParam0)) && func_2487(iParam0))
	{
		return;
	}
	func_1775(iParam0, 1);
	func_1776(iParam0);
	if (func_2488(func_1772(iParam0)))
	{
		iVar0 = func_1773(iParam0);
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
		func_1775(iParam0, 16);
	}
	if (func_1771(iParam0, 128) && !bParam3)
	{
		func_618(iParam0, 0);
	}
}

void func_1204(int iParam0)
{
	Global_1914319->f_17374 = iParam0;
}

bool func_1205(int iParam0)
{
	if (!func_1179(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_1206(int iParam0, bool bParam1)
{
	if (!func_1128(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_310(iParam0, 1024))
		{
			func_1088(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_310(iParam0, 1024))
	{
		func_1089(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_2489(iParam0);
}

int func_1207(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_1208(int iParam0)
{
	if (func_2436(iParam0) && func_2490())
	{
		remove_door_from_system(iParam0);
	}
}

void func_1209(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_1210(int iParam0)
{
	if (Global_1933981->f_9 != iParam0)
	{
		Global_1933981->f_9 = iParam0;
	}
}

int func_1211(int iParam0)
{
	if (!func_274(iParam0))
	{
		return -1;
	}
	return func_643(iParam0);
}

bool func_1212(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_1213(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_1850(iParam0, 1);
	func_1851(iParam0, 1);
	func_1852(iParam0, 128);
}

bool func_1214(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_1215(int iParam0)
{
	if (!func_2491(iParam0))
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

void func_1216(int iParam0)
{
	if (iParam0 != -1 && func_321(Global_1933981->f_13[iParam0]->f_8))
	{
		func_327(&(Global_1933981->f_13[iParam0]->f_8), 1, 1);
	}
}

int func_1217(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 38:
			return 1;
		case 0:
			return 5;
		case 6:
		case 42:
			return 3;
		case 9:
		case 10:
		case 37:
			return 4;
		case 1:
		case 2:
		case 36:
			return 2;
		case 41:
			return 2;
		case 40:
			return 1;
		case 13:
			return 2;
		case 14:
			return 3;
		case 16:
			return 2;
		case 11:
			return 6;
		case 17:
		case 39:
			return 5;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 4;
		case 27:
			return 2;
		case 33:
			return 2;
		case 43:
			return 4;
		default:
			break;
	}
	return 1;
}

Vector3 func_1218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.4119f, 168.1394f, 97.095f;
				case 1:
					return -71.9f, 314.6f, 108.1f;
				case 2:
					return -247.9203f, 499.8062f, 94.8408f;
				case 3:
					return -265.6117f, -258.6254f, 91.1275f;
				case 4:
					return 947.9633f, 392.5947f, 110.4447f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 36:
			switch (iParam1)
			{
				case 0:
					return 37.4f, 576f, 130.9528f;
				case 1:
					return 82.3596f, 414.8434f, 126.6896f;
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 38:
			switch (iParam1)
			{
				case 0:
					return -99.1603f, 295.7463f, 102.7589f;
				default:
					break;
			}
			break;
		case 6:
		case 42:
			switch (iParam1)
			{
				case 0:
					return -605.1606f, 415.9453f, 95.278f;
				case 1:
					return 647.687f, -566.0206f, 73.8882f;
				case 2:
					return 156.9574f, 589.7143f, 124.4553f;
				default:
					break;
			}
			break;
		case 5:
		case 35:
			switch (iParam1)
			{
				case 0:
					return -1110.081f, 126.4462f, 55.3198f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				case 1:
					return 839.995f, -692.6373f, 66.1221f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 37:
			switch (iParam1)
			{
				case 0:
					return 340.1664f, 224.1398f, 101.5865f;
				case 1:
					return -368.3074f, 115.4362f, 40.7802f;
				case 2:
					return -1061.945f, -445.6989f, 80.26047f;
				case 3:
					return -1283.033f, 16.5433f, 53.7479f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				case 1:
					return 925.174f, -1145.063f, 53.314f;
				case 2:
					return 1426.139f, -1437.182f, 78.244f;
				case 3:
					return 1480.597f, -1043.651f, 54.8389f;
				case 4:
					return 2156.54f, -1319.13f, 41.4469f;
				case 5:
					return 1321.881f, -1679.864f, 66.872f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1497.896f, -719.2251f, 47.15442f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 925.6f, -1145f, 53f;
				case 1:
					return 1485.047f, -1042.127f, 52.9948f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1717.905f, -2066.761f, 42.9164f;
				case 1:
					return 1475.829f, -2229.839f, 42.6941f;
				case 2:
					return 2153.501f, -1302.344f, 42.1521f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1240.883f, -859.2491f, 69.91452f;
				case 1:
					return 991.1385f, -889.2033f, 70.3542f;
				default:
					break;
			}
			break;
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					return 2139.084f, -1322.471f, 41.6526f;
				case 1:
					return 2162.225f, -960.3032f, 41.7974f;
				case 2:
					return 1153.882f, -1502.448f, 52.6003f;
				case 3:
					return 1490.574f, -1001.085f, 48.9639f;
				case 4:
					return 1659.413f, -1597.443f, 55.4104f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 2355.17f, 1680.76f, 95.341f;
				case 1:
					return 2606.643f, 1809.042f, 91.94587f;
				case 2:
					return 2627.776f, 1314.441f, 113.6464f;
				case 3:
					return 2853.661f, 869.5517f, 49.258f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 2466.44f, 1326.504f, 108.6252f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 2737.724f, 836.7189f, 83.38937f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2814.25f, 445.3571f, 63.1659f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -2361.181f, -1483.392f, 140.8987f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -1554.11f, -1211.528f, 73.6863f;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return -1298.058f, -1248.784f, 81.8463f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1424.421f, -956.7158f, 61.702f;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -2089.884f, -1624.694f, 132.9787f;
				case 1:
					return -2169.37f, -1187.876f, 132.733f;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -3285.6f, -2630.4f, 4.9f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -5233.051f, -2902.402f, 1.486f;
				default:
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return -3827.842f, -2983.152f, -7.33933f;
				case 1:
					return -4181.152f, -2308.259f, 0.004f;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 1903.304f, 1642.989f, 170.1826f;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 2386.82f, 751.7125f, 66.2341f;
				case 1:
					return 2678.968f, 268.3763f, 62.3124f;
				case 2:
					return 1904.455f, 498.3759f, 122.2237f;
				case 3:
					return 2832.23f, 927.7681f, 47.4658f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_2291(*iParam0);
	iVar1 = func_2292(*iParam0);
	iVar2 = func_2293(*iParam0);
	iVar3 = func_1758(*iParam0);
	iVar4 = func_1759(*iParam0);
	iVar5 = func_2290(*iParam0);
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
	iVar6 = func_2294(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_2294(iVar1, iVar0);
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
	func_2492(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1220(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1128(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_1223(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_1223(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1221(int iParam0, int iParam1)
{
	if (func_1223(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (Global_20710.f_2092[iParam0] || iParam1);
}

void func_1222(int iParam0)
{
	func_2493(iParam0, 1, 0);
}

bool func_1223(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

void func_1224(int iParam0, int iParam1)
{
	if (!func_1223(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (&Global_20710.f_2092[iParam0] - (Global_20710.f_2092[iParam0] && iParam1));
}

bool func_1225(int iParam0)
{
	if (func_272(-26, 1, 1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 29:
		case 61:
		case 73:
			if (func_1220(iParam0, 0, 1))
			{
				return false;
			}
			return true;
		case 43:
			if (!func_1220(iParam0, 0, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1226(int iParam0, int iParam1)
{
	return (Global_1393521->f_3[iParam0] && iParam1) != 0;
}

void func_1227(int iParam0, int iParam1)
{
	if (func_1226(iParam0, iParam1))
	{
		return;
	}
	Global_1393521->f_3[iParam0] = (Global_1393521->f_3[iParam0] || iParam1);
}

Vector3 func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1323.391f, -1322.26f, 78.42934f;
		case 43:
			return 2717.041f, -1286.226f, 49.68017f;
		case 61:
			return -1790.417f, -387.5786f, 160.4101f;
		case 73:
			return -280.3181f, 815.7234f, 118.3201f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 17f;
		case 43:
			return 4.62f;
		case 61:
			return 6.79f;
		case 73:
			return 20f;
		default:
			break;
	}
	return 0f;
}

int func_1230(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_276(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_2494(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_2495(iVar0, bParam8);
	return iVar0;
}

void func_1231(vector3 vParam0, int iParam3)
{
	if (func_276(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_1214(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_1232(int iParam0, int iParam1)
{
	if (!func_1226(iParam0, iParam1))
	{
		return;
	}
	Global_1393521->f_3[iParam0] = (&Global_1393521->f_3[iParam0] - (Global_1393521->f_3[iParam0] && iParam1));
}

bool func_1233(int iParam0, int iParam1)
{
	return func_692(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

bool func_1234(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_133((*Global_1835011)[iParam0]->f_1);
}

bool func_1235(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_1236(int iParam0)
{
	if (iParam0 == 19)
	{
		return true;
	}
	if (iParam0 == 9)
	{
		return true;
	}
	if (func_82() == 0)
	{
		return func_2496(Global_1051260->f_48[iParam0]->f_18, Global_1051260->f_48[iParam0]->f_30, 1, 0);
	}
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	if (iParam0 != 11)
	{
		if (!func_1179(Global_1914319->f_3[iParam0]->f_21))
		{
			return false;
		}
		if (!func_1180(Global_1914319->f_3[iParam0]->f_21, 0))
		{
			return false;
		}
	}
	if (!does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		Global_1914319->f_3[iParam0]->f_23 = func_2497(Global_1914319->f_3[iParam0]->f_21);
		iVar0 = func_1773(Global_1914319->f_3[iParam0]->f_21);
		if (!_does_item_have_valid_base(iVar0))
		{
			return false;
		}
		if (!_0x4afc7288c77238b3(iVar0))
		{
			return false;
		}
		if (!_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, func_2498(Global_1914319->f_3[iParam0]->f_21)))
		{
			return false;
		}
		return true;
	}
	iVar1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	if (func_1129(iParam0))
	{
		return false;
	}
	if (!is_entity_dead(iVar1))
	{
		if (_0x856ce8fde2416602(iVar1))
		{
			return false;
		}
	}
	vVar2 = { get_entity_coords(Global_1914319->f_3[iParam0]->f_23, true, false) };
	if (!_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, vVar2))
	{
		return false;
	}
	return true;
}

bool func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 73:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1238(int iParam0)
{
	return func_123(Global_1310750->f_16109, iParam0);
}

bool func_1239(int iParam0, int iParam1)
{
	bVar0 = true;
	if (func_82() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_2067(func_178(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		bVar0 = (func_2421(iParam1) || func_1269(func_2422(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = bVar0;
	}
	return bVar0;
}

bool func_1240(int iParam0, int iParam1, var uParam2)
{
	if (!func_2499(iParam0, uParam2))
	{
		return false;
	}
	if (!func_1237(iParam1) && !func_1239(iParam0, -1))
	{
		return false;
	}
	return true;
}

bool func_1241(int iParam0)
{
	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = func_2067(func_178(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return true;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}
	return true;
}

int func_1242(int iParam0, bool bParam1)
{
	return func_2500(iParam0, Global_1894899->f_2, bParam1);
}

bool func_1243(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

bool func_1244(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

void func_1245()
{
	Global_1898092->f_26 = 0;
	Global_1898092->f_26.f_1 = -1;
	Global_1898092->f_26.f_2 = -1;
	Global_1898092->f_26.f_7 = -1;
	Global_1898092->f_26.f_3 = 0;
	Global_1898092->f_26.f_4 = 0;
	func_2501(Global_1898092->f_26.f_5);
}

void func_1246(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 - (Global_1898092->f_1 && iParam0));
}

bool func_1247(var uParam0)
{
	if (uParam0->f_137 == 76)
	{
		func_2502(&uVar0, &iVar1, func_1257(1, 1048576));
	}
	else
	{
		func_2503(uParam0->f_137, &uVar0, &iVar1, 0, 0);
	}
	if (Global_1898092->f_26.f_7 <= iVar1)
	{
		uVar0 = Global_1898092->f_26.f_7;
	}
	else
	{
		return true;
	}
	if (Global_1898092->f_26.f_7 + 3 < iVar1)
	{
		iVar1 = Global_1898092->f_26.f_7 + 3;
	}
	_0xf008e0ba1fe1d644(1);
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (func_1179(iVar2))
		{
			iVar4 = func_2497(iVar2);
			if (!is_entity_dead(iVar4))
			{
				if (func_2504(uParam0, iVar2))
				{
					func_2505(uParam0, 16);
				}
				fVar3 = func_2506(iVar4, 1, 1);
			}
			if (func_1202(iVar2, 0))
			{
				func_1203(iVar2, func_2507(&iVar4, fVar3), 0, 0, 1);
			}
			else if (func_2507(&iVar4, fVar3))
			{
				func_2508(iVar2);
			}
			else
			{
				func_2509(&iVar2);
			}
			func_618(iVar2, 0);
		}
		iVar2++;
	}
	_0x7d4e70a67a651c71(1);
	Global_1898092->f_26.f_7 = iVar1 + 1;
	Global_1898092->f_26.f_8 = uParam0->f_29;
	return false;
}

void func_1248(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_1249(var uParam0, int iParam1)
{
	return (uParam0->f_29 && iParam1) != 0;
}

void func_1250(var uParam0)
{
	if (!func_1244(uParam0->f_136))
	{
		return;
	}
	if (func_1249(uParam0, 32))
	{
		return;
	}
	Global_40.f_9096[uParam0->f_136]->f_8++;
	func_2510(uParam0->f_136, 512);
	if (func_1249(uParam0, 16))
	{
		iVar0 = 4;
		func_2510(uParam0->f_136, 2097152);
	}
	else if (func_1249(uParam0, 4))
	{
		iVar0 = (5 * Global_40.f_9096[uParam0->f_136]->f_8);
		func_2510(uParam0->f_136, 524288);
	}
	else if (func_1249(uParam0, 8))
	{
		iVar0 = 2;
		func_2510(uParam0->f_136, 1048576);
	}
	else
	{
		iVar0 = (5 * Global_40.f_9096[uParam0->f_136]->f_8);
	}
	func_2511(uParam0->f_136, 4096);
	Global_40.f_9096[uParam0->f_136]->f_11 = Global_40.f_9096[uParam0->f_136]->f_3;
	func_2512(uParam0->f_136, iVar0, 0, 0, 0, 1);
	func_2513(uParam0->f_136, 1);
	func_2514(uParam0->f_136, iVar0, 0, 0, 0, !func_1255(uParam0->f_136));
	func_2515(uParam0);
	func_2511(uParam0->f_136, 1073741824);
}

int func_1251(int iParam0)
{
	if (!func_1244(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

Vector3 func_1252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1253(int iParam0, var uParam1)
{
	if (func_2516(iParam0, *uParam1))
	{
		return;
	}
	if (func_361(45))
	{
		*uParam1 = func_2517(iParam0);
		return;
	}
	*uParam1 = func_2518(iParam0);
}

bool func_1254(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1244(iParam0))
	{
		func_2519(8);
		return false;
	}
	if (_0xcf45df50c7775f2a())
	{
		func_2519(8);
		return false;
	}
	if (func_1243(2) || func_1243(1))
	{
		bParam2 = true;
	}
	if (func_1257(iParam0, 268435456))
	{
		bParam2 = true;
		bParam4 = false;
	}
	iVar0 = func_2520(iParam0);
	set_this_script_can_remove_blips_created_by_any_script(true);
	if (!func_1243(32))
	{
		func_2519(32);
	}
	switch (iParam0)
	{
		case 0:
			iVar1 = 14;
			switch (iParam1)
			{
				case 1:
					bVar2 = func_2521(0, 128);
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2522(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2524(iParam1, bVar2, bParam4, func_2523(0), func_1257(0, 4194304), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2525(iParam1);
							func_2526(0, iParam1);
							if (!func_2523(0))
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_stage_01", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					bVar2 = func_1257(0, 512);
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2522(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2524(iParam1, 0, bParam4, func_2523(0), func_1257(0, 4194304), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2525(iParam1);
							func_2526(0, iParam1);
							if (!func_2523(0))
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_stage_02", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2522(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2524(iParam1, 0, bParam4, func_2523(0), func_1257(0, 4194304), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2525(iParam1);
							func_2526(0, iParam1);
							if (!func_2523(0))
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_stage_03", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2522(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_2513(iParam0, 1);
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2524(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_2511(iParam0, 1048576);
							func_2525(iParam1);
							func_2526(0, iParam1);
							set_ambient_zone_list_state_persistent("AZL_appleseed_timber_stage_04", true, true);
							_0xcc3edc5614b03f61(0);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2522(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_2513(iParam0, 1);
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2524(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_2511(iParam0, 1048576);
							func_2525(iParam1);
							func_614(-1062490780, 1, 0);
							func_2526(0, iParam1);
							set_ambient_zone_list_state_persistent("AZL_appleseed_timber_stage_05", true, true);
							_0xcc3edc5614b03f61(0);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 1:
			iVar1 = 4;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2528(iParam1, 0, func_1257(1, 4194304), func_1257(1, 8388608), bParam4, func_2523(1), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2526(1, iParam1);
							if (!func_2523(1))
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_stage_01", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2528(iParam1, 0, func_1257(1, 4194304), func_1257(1, 8388608), bParam4, func_2523(1), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2526(1, iParam1);
							if (!func_2523(1))
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_stage_02", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2528(iParam1, func_1257(1, 128), func_1257(1, 4194304), func_1257(1, 8388608), bParam4, func_2523(1), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2526(1, iParam1);
							if (!func_2523(1))
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_stage_03", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2528(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2526(1, iParam1);
							if (!func_2523(1))
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_stage_04", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_2513(iParam0, 1);
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2528(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_2511(iParam0, 1048576);
							func_2526(1, iParam1);
							_0xcc3edc5614b03f61(1);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 3:
			iVar1 = 2;
			iVar3 = iParam1;
			switch (iVar3)
			{
				case 1:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2529(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2530(iParam1, bParam4, iVar1))
						{
							func_2526(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2529(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2530(iParam1, bParam4, iVar1))
						{
							func_2526(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 2:
			iVar1 = 13;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!bParam3 && !func_2534(func_2531(iParam1), func_2532(iParam1), func_2533(iParam1), bParam2, iParam1, 2f))
						{
							func_2519(8);
							return false;
						}
						if (!bParam2 && func_2496(Global_35, (*Global_1888801)[iVar0]->f_3, 1, 0))
						{
							func_2519(8);
							return false;
						}
						if (!func_2535(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						bVar2 = func_2536(iParam1);
						if (func_2537(iParam1, bVar2, bParam4, func_1257(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								func_2510(2, 134217728);
							}
							func_1259(iParam0, 1048576);
							func_2538(iParam1);
							if (_does_volume_exist((*Global_1392194)[2]->f_7))
							{
								_0xd17672447692478e((*Global_1392194)[2]->f_7, 0);
								_delete_volume((*Global_1392194)[2]->f_7);
							}
							(*Global_1392194)[2]->f_7 = _create_volume_aggregate_with_custom_name("EA Central Union - volRoadBlock");
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 2244.843f, 721.3605f, 95.94753f, 0f, 0f, 0f, 40f, 40f, 30f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xc1799fafd2fdf52b((*Global_1392194)[2]->f_7, 0, 0, 0);
							func_2526(2, iParam1);
							if (!func_2523(2))
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_01", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!bParam3 && !func_2534(func_2531(iParam1), func_2532(iParam1), func_2533(iParam1), bParam2, iParam1, 1.5f))
						{
							func_2519(8);
							return false;
						}
						if (!bParam2 && func_2496(Global_35, (*Global_1888801)[iVar0]->f_3, 1, 0))
						{
							func_2519(8);
							return false;
						}
						if (!func_2535(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						bVar2 = func_2536(iParam1);
						if (func_2537(iParam1, bVar2, bParam4, func_1257(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								func_2510(2, 134217728);
							}
							func_1259(iParam0, 1048576);
							func_2538(iParam1);
							if (_does_volume_exist((*Global_1392194)[2]->f_7))
							{
								_0xd17672447692478e((*Global_1392194)[2]->f_7, 0);
								_delete_volume((*Global_1392194)[2]->f_7);
							}
							(*Global_1392194)[2]->f_7 = _create_volume_aggregate_with_custom_name("EA Central Union - volRoadBlock");
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xc1799fafd2fdf52b((*Global_1392194)[2]->f_7, 0, 0, 0);
							func_2526(2, iParam1);
							if (!func_2523(2))
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_02", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!bParam3 && !func_2534(func_2531(iParam1), func_2532(iParam1), func_2533(iParam1), bParam2, iParam1, 1065353216))
						{
							func_2519(8);
							return false;
						}
						if (!bParam2 && func_2496(Global_35, (*Global_1888801)[iVar0]->f_3, 1, 0))
						{
							func_2519(8);
							return false;
						}
						if (!func_2535(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2537(iParam1, 0, bParam4, func_1257(2, 4194304), iVar1))
						{
							func_1259(iParam0, 1048576);
							func_2538(iParam1);
							if (_does_volume_exist((*Global_1392194)[2]->f_7))
							{
								_0xd17672447692478e((*Global_1392194)[2]->f_7, 0);
								_delete_volume((*Global_1392194)[2]->f_7);
							}
							(*Global_1392194)[2]->f_7 = _create_volume_aggregate_with_custom_name("EA Central Union - volRoadBlock");
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xbce668aaf83608be((*Global_1392194)[2]->f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							_0xc1799fafd2fdf52b((*Global_1392194)[2]->f_7, 0, 0, 0);
							func_2526(2, iParam1);
							if (!func_2523(2))
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_03", true, true);
							}
							else
							{
								set_ambient_zone_list_state_persistent("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || &Global_1898092 == 1)
					{
						if (!func_2534(func_2531(iParam1), func_2532(iParam1), func_2533(iParam1), bParam2, iParam1, 1065353216))
						{
							func_2519(8);
							return false;
						}
						if (!bParam2)
						{
							if (func_2496(Global_35, (*Global_1888801)[iVar0]->f_3, 1, 0))
							{
								func_2519(8);
								return false;
							}
							if (is_sphere_visible(1846.298f, 887.8817f, 113.5422f, 115f) || func_2539(1846.298f, 887.8817f, 113.5422f, 1) < 200f)
							{
								func_2519(8);
								return false;
							}
						}
						if (!func_2535(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_2513(iParam0, 1);
							func_1256(2);
							func_2519(8);
							return false;
						}
					}
					if (!bParam4 || &Global_1898092 == 2)
					{
						if (func_2537(iParam1, bVar2, bParam4, 0, iVar1))
						{
							func_2511(iParam0, 1048576);
							func_2538(iParam1);
							if (_does_volume_exist((*Global_1392194)[2]->f_7))
							{
								_0xd17672447692478e((*Global_1392194)[2]->f_7, 0);
								_delete_volume((*Global_1392194)[2]->f_7);
							}
							func_2511(iParam0, 65536);
							func_2540(iVar0);
							func_2541(4, 1);
							func_2542("railroad_stage4");
							func_2526(2, iParam1);
						}
					}
					if (bParam4 && Global_1898092->f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
	}
	func_1259(iParam0, 268435456);
	func_1246(32);
	return true;
}

bool func_1255(int iParam0)
{
	if (!func_1244(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_2;
}

void func_1256(int iParam0)
{
	Global_1898092 = iParam0;
}

bool func_1257(int iParam0, int iParam1)
{
	if (!func_1244(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_1258(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_1259(int iParam0, int iParam1)
{
	if (!func_1244(iParam0))
	{
		return;
	}
	if (!func_1257(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 - (Global_40.f_9096[iParam0]->f_5 && iParam1));
}

int func_1260()
{
	switch (Global_1898092->f_26)
	{
		case 0:
			if (!func_282(Global_1898092->f_26.f_1))
			{
				Global_1898092->f_26 = 2;
				return 1;
			}
			Global_1898092->f_26.f_2 = func_2543(Global_1898092->f_26.f_1);
			if (!func_1244(Global_1898092->f_26.f_2))
			{
				Global_1898092->f_26 = 2;
				return 1;
			}
			Global_1898092->f_26.f_3 = func_1251(Global_1898092->f_26.f_2);
			if (!_does_volume_exist(Global_1898092->f_26.f_5))
			{
				vVar0 = { _0x3e2a25b2416dd67e(func_2088(Global_1898092->f_26.f_1)) };
				vVar0 = { vVar0 + Vector(15f, 15f, 15f) };
				Global_1898092->f_26.f_5 = _create_volume_cylinder_with_custom_name(_0xf70f00013a62f866(func_2088(Global_1898092->f_26.f_1)), _0x18675bc914891122(func_2088(Global_1898092->f_26.f_1)), vVar0, "Event Area - volShutdown");
			}
			Global_1898092->f_26.f_4 = func_2544(Global_1898092->f_26.f_2, Global_1898092->f_26.f_3);
			if (Global_1898092->f_26.f_4 == 0)
			{
				Global_1898092->f_26 = 2;
				return 1;
			}
			else
			{
				request_script_with_name_hash(Global_1898092->f_26.f_4);
				Global_1898092->f_26 = 1;
			}
			Jump @460; //curOff = 308
			if (Global_1898092->f_26.f_4 == 0)
			{
				Global_1898092->f_26 = 2;
				return 1;
			}
			if (has_script_with_name_hash_loaded(Global_1898092->f_26.f_4))
			{
				uVar3 = Global_1898092->f_26.f_1;
				Global_1898092->f_26.f_6 = start_new_script_with_name_hash_and_args(Global_1898092->f_26.f_4, &uVar3, 4, 5502);
				if (Global_1898092->f_26.f_1 != 76)
				{
					(*Global_1888801)[Global_1898092->f_26.f_1]->f_9 = Global_1898092->f_26.f_6;
				}
				set_script_with_name_hash_as_no_longer_needed(Global_1898092->f_26.f_4);
				func_1246(16);
				return 1;
			}
			Jump @460; //curOff = 444
			func_1246(16);
			return 1;
			return 0;
		}

int func_1261(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_1262(int iParam0)
{
	if (func_2521(Global_1898092->f_3, 256))
	{
		return false;
	}
	if (func_1257(Global_1898092->f_3, 4194304))
	{
		return false;
	}
	if (func_2521(Global_1898092->f_3, 524288))
	{
		return false;
	}
	if (func_2521(Global_1898092->f_3, 1048576))
	{
		return false;
	}
	if (func_2521(Global_1898092->f_3, 2097152))
	{
		return false;
	}
	if (func_1243(2) || func_1243(1))
	{
		return false;
	}
	if (!func_2545(Global_1898092->f_3, func_1251(Global_1898092->f_3)))
	{
		return false;
	}
	if (Global_1898092->f_4 < 350f)
	{
		return true;
	}
	return false;
}

Vector3 func_1263(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 4)
			{
				switch (iParam2)
				{
					case 0:
						return -1412.532f, -248.4221f, 98.75124f;
					case 1:
						if (iParam1 >= 2)
						{
							return -1402.895f, -238.5495f, 98.66378f;
						}
						break;
					case 2:
						if (iParam1 >= 3)
						{
							return -1426.377f, -251.0657f, 99.35887f;
						}
						break;
				}
			}
			break;
		case 1:
			if (iParam1 < 4 && iParam2 == 0)
			{
				return -425.5081f, 498.3357f, 97.12907f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 2202.604f, 652.4808f, 95.04327f;
						case 1:
							return 2212.253f, 632.5779f, 95.7794f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2188.802f, 784.2423f, 106.1615f;
						case 1:
							return 2206.549f, 786.0485f, 106.3437f;
						case 2:
							return 2205.799f, 793.0085f, 106.7501f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 1944.959f, 940.22f, 115.8212f;
						case 1:
							return 1960.344f, 931.9992f, 116.1395f;
						case 2:
							return 1953.876f, 944.0119f, 115.6677f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1264(var uParam0, vector3 vParam1, int iParam4)
{
	if (func_2546(uParam0, vParam1, 2, Global_1898092->f_4))
	{
		if (!func_1243(iParam4))
		{
			func_2519(iParam4);
		}
	}
}

bool func_1265(int iParam0)
{
	if (!func_1243(iParam0))
	{
		return false;
	}
	if (func_1243(2) || func_1243(1))
	{
		return true;
	}
	if (func_1257(Global_1898092->f_3, 4194304))
	{
		return true;
	}
	if (func_2521(Global_1898092->f_3, 524288))
	{
		return true;
	}
	if (func_2521(Global_1898092->f_3, 1048576))
	{
		return true;
	}
	if (Global_1898092->f_4 > 375f)
	{
		return true;
	}
	if (!func_2545(Global_1898092->f_3, func_1251(Global_1898092->f_3)))
	{
		return true;
	}
	return false;
}

void func_1266(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || func_1243(iParam1))
	{
		uParam0->f_1 = 0;
		uParam0->f_3 = 0f;
		uParam0->f_2 = 0f;
		uParam0->f_5 = 0f;
		uParam0->f_4 = 0;
		if (does_particle_fx_looped_exist(*uParam0))
		{
			stop_particle_fx_looped(*uParam0, false);
			remove_particle_fx(*uParam0, false);
			remove_named_ptfx_asset(-458373790);
		}
		*uParam0 = 0;
		func_1246(iParam1);
	}
}

int func_1267(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0x3e2a25b2416dd67e(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	vVar6 = { _0x18675bc914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { _get_object_offset_from_coords(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { _get_object_offset_from_coords(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

void func_1268(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_82() != -1)
	{
		return;
	}
	if ((Global_36616 && func_2547(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1741(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_583(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_2548(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_583(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_1269(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_1758(func_630());
	if (func_692(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_692(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_692(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_692(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_692(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_692(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_692(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_692(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_692(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_692(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_692(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_692(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_692(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_692(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_692(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_692(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_692(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_1270(int iParam0, int iParam1)
{
	bVar0 = Global_1935630->f_11;
	if (func_2549(iParam0) == 1)
	{
		return true;
	}
	if (func_2550(iParam0, 16384))
	{
		if (func_2551())
		{
			return false;
		}
	}
	if (iParam1 & 128 != 0)
	{
		if (bVar0)
		{
			return false;
		}
		if (func_2552(Global_36))
		{
			return false;
		}
	}
	if (iParam1 & -2147483648 != 0)
	{
		if (func_2553(32) > 0)
		{
			return false;
		}
	}
	if (iParam1 & 32 != 0)
	{
		if (func_2553(-2147483648) > 0)
		{
			return false;
		}
	}
	if (!func_2550(iParam0, 1048576))
	{
		if (func_2554(1))
		{
			return false;
		}
	}
	if ((((iParam1 & 4194304 != 0 && Global_17504.f_5 != -1) && func_2555()) && !func_2556()) && !func_2557())
	{
		if (func_1271(Global_17504.f_5, 4194304))
		{
			return false;
		}
	}
	if ((((iParam1 & 536870912 != 0 && Global_17504.f_6 != -1) && func_2558()) && !func_2556()) && !func_2557())
	{
		if (func_1271(Global_17504.f_6, 536870912))
		{
			return false;
		}
	}
	if (func_336())
	{
		if (iParam1 & 32768 != 0)
		{
			return false;
		}
	}
	else if (iParam1 & 65536 != 0)
	{
		return false;
	}
	return true;
}

bool func_1271(int iParam0, int iParam1)
{
	if (!func_2559(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

int func_1272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_1273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

void func_1274(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (func_2560(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*uParam1 = 225f;
				*uParam2 = 6400f;
			}
			else
			{
				*uParam1 = 225f;
				*uParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_1271(iParam0, 1))
			{
				if (func_2550(iParam0, 2))
				{
				}
			}
			func_2561(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_2562(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_2562(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7f;
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_2563(iParam0))
	{
		*uParam2 = 40000f;
	}
}

bool func_1275(int iParam0, int iParam1)
{
	iVar0 = (func_1273(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_1276(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_276(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

void func_1277(int iParam0, vector3 vParam1)
{
	if (iParam0 == 19)
	{
		if (!func_2244(Global_1393447, 32768))
		{
			if (func_1276(vParam1, 0, 512, 0) || func_1276(vParam1, 0, 256, 0))
			{
				func_2564(Global_1393447, 1);
				func_2565(30f, 1, 0);
				Global_1326862->f_609 = 1;
				(*Global_1310750)[iParam0]->f_49 = 1;
			}
		}
	}
}

float func_1278(int iParam0)
{
	if (func_1271(iParam0, 24576))
	{
		return 5f;
	}
	return 20f;
}

bool func_1279(vector3 vParam0, float fParam3, var uParam4)
{
	iVar0 = create_itemset(true);
	iVar4 = _0x59b57c4b06531e1e(vParam0, fParam3, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = get_indexed_item_in_itemset(iVar3, iVar0);
		iVar2 = iVar1;
		if (!is_entity_dead(iVar2))
		{
			if ((is_ped_human(iVar2) && !is_ped_a_player(iVar2)) && !func_2566(iVar2, uParam4))
			{
				iVar5++;
			}
		}
		iVar3++;
	}
	destroy_itemset(iVar0);
	if (iVar5 == 0)
	{
		return false;
	}
	return true;
}

void func_1280(int iParam0)
{
	if (!Global_1394141->f_1279[iParam0]->f_4)
	{
		if (func_1284(&(Global_40.f_9028[iParam0]), iParam0) && !func_1295(&(Global_40.f_9028[iParam0])))
		{
			Global_1394141->f_1279[iParam0]->f_4 = 1;
		}
	}
	else if (!func_1284(&(Global_40.f_9028[iParam0]), iParam0) || func_1295(&(Global_40.f_9028[iParam0])))
	{
		Global_1394141->f_1279[iParam0]->f_4 = 0;
	}
}

bool func_1281(int iParam0)
{
	fVar0 = get_entity_speed(Global_35);
	fVar1 = func_526(Global_35, func_2567(iParam0), 1);
	if (fVar1 < 50f && fVar0 < 6f)
	{
		return true;
	}
	if (fVar1 < 40f)
	{
		return true;
	}
	return false;
}

void func_1282()
{
	Global_1394141->f_1328 = 0;
	Global_1394141->f_1330 = 0;
}

int func_1283(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, var uParam12)
{
	if (!does_script_exist(sParam0))
	{
		return 0;
	}
	request_script(sParam0);
	if (!has_script_loaded(sParam0))
	{
		return 0;
	}
	*uParam12 = start_new_script_with_args(sParam0, &uParam1, 10, iParam11);
	set_script_as_no_longer_needed(sParam0);
	return 1;
}

bool func_1284(int iParam0, int iParam1)
{
	if (Global_1394141->f_1340)
	{
		return true;
	}
	if (func_123(Global_40.f_9028.f_12, 4) && !func_123(Global_40.f_9028.f_12, 8))
	{
		return true;
	}
	iVar0 = &Global_40.f_9028.f_6[iParam1];
	func_1219(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	if (!func_2568(func_630(), iVar0))
	{
		return false;
	}
	return true;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1607768502;
		case 1:
			return -1852605133;
		case 4:
			return -129643890;
		case 2:
			return -1433686245;
		case 3:
			return -1711895055;
		case 31:
			return 192515737;
		case 32:
			return 426191476;
		case 33:
			return 187862543;
		case 34:
			return 417081698;
		case 35:
			return 791041526;
		case 21:
			return 1350371763;
		case 22:
			return -1257057567;
		case 23:
			return -1419919497;
		case 24:
			return -1718674470;
		case 25:
			return -35658630;
		case 26:
			return -2069570138;
		case 27:
			return -1838712533;
		case 28:
		case 29:
		case 30:
			return 1140218954;
		default:
			break;
	}
	return 1607768502;
}

void func_1286(int iParam0)
{
	iVar0 = func_1768(iParam0, 1);
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

void func_1287(int iParam0)
{
	iVar0 = func_1768(iParam0, 1);
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

void func_1288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_613(func_1285(iParam0)))
			{
				func_1286(func_1285(iParam0));
				func_1287(-1852605133);
				func_1287(-129643890);
				func_1287(-1433686245);
				func_1287(-1711895055);
			}
			break;
		case 1:
			if (!func_613(func_1285(iParam0)))
			{
				func_1286(func_1285(iParam0));
				func_1287(1607768502);
				func_1287(-129643890);
				func_1287(-1433686245);
				func_1287(-1711895055);
			}
			break;
		case 4:
			if (!func_613(func_1285(iParam0)))
			{
				func_1286(func_1285(iParam0));
				func_1287(1607768502);
				func_1287(-1852605133);
				func_1287(-1433686245);
				func_1287(-1711895055);
			}
			break;
		case 2:
			if (!func_613(func_1285(iParam0)))
			{
				func_1286(func_1285(iParam0));
				func_1287(1607768502);
				func_1287(-1852605133);
				func_1287(-129643890);
				func_1287(-1711895055);
			}
			break;
		case 3:
			if (!func_613(func_1285(iParam0)))
			{
				func_1286(func_1285(iParam0));
				func_1287(1607768502);
				func_1287(-1852605133);
				func_1287(-129643890);
				func_1287(-1433686245);
			}
			break;
	}
}

char* func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "new_theatre_int_Fire";
		case 1:
			return "new_theatre_int_Sdance";
		case 4:
			return "new_theatre_int_CanCan";
		case 2:
			return "new_theatre_int_Swoman";
		case 3:
			return "new_theatre_int_Magician";
	}
	return "new_theatre_int_Fire";
}

bool func_1290(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1291(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_1292(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 41);
}

int func_1293(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 5:
			return 5;
		case 9:
			return 5;
		case 6:
			return 5;
		case 10:
			return 5;
		case 11:
			return 5;
		case 12:
			return 5;
		case 13:
			return 5;
		case 14:
			return 5;
		case 15:
			return 5;
		case 16:
			return 5;
		case 17:
			return 5;
		case 18:
			return 5;
		case 19:
			return 5;
		case 8:
			return 5;
		case 7:
			return 5;
		case 20:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 36:
			return 38;
		case 37:
			return 38;
		case 38:
			return 38;
		case 39:
			return 38;
		case 40:
			return 38;
		case 31:
			return 76;
		case 32:
			return 76;
		case 33:
			return 76;
		case 34:
			return 76;
		case 35:
			return 76;
		case 0:
			return 5;
		case 1:
			return 5;
		case 4:
			return 5;
		case 2:
			return 5;
		case 3:
			return 5;
		default:
			break;
	}
	return -1;
}

bool func_1294(int iParam0)
{
	iVar0 = func_2569(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iVar0 == 1)
	{
		if (!func_767(59))
		{
			return true;
		}
	}
	if (iVar0 == 2 && func_767(59))
	{
		return true;
	}
	return false;
}

bool func_1295(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return false;
	}
	if ((func_272(0, 0, 1) && !func_1296(iParam0, 16)) && !Global_1394141->f_1340)
	{
		return true;
	}
	return false;
}

bool func_1296(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return false;
	}
	return (Global_1394141->f_7[iParam0] && iParam1) != 0;
}

char* func_1297(int iParam0)
{
	if (!func_1292(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 5:
			return "show_nbx_cancan";
		case 9:
			return "show_nbx_bulletCatch";
		case 6:
			return "show_nbx_cancan_02";
		case 10:
			return "show_nbx_escapeArtist";
		case 11:
			return "show_nbx_escapeNoose";
		case 12:
			return "show_nbx_fireBreath_01";
		case 13:
			return "show_nbx_fireDance_01";
		case 14:
			return "show_nbx_fireDance_02";
		case 15:
			return "show_nbx_flexFight";
		case 16:
			return "show_nbx_snakeDance_01";
		case 17:
			return "show_nbx_snakeDance_02";
		case 18:
			return "show_nbx_strongWoman";
		case 19:
			return "show_nbx_swordDance_01";
		case 8:
			return "show_nbx_bigband_02";
		case 7:
			return "show_nbx_bigband";
		case 20:
			return "show_nbx_oddFellows";
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return "show_movie_magic_lantern";
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "show_movie_magic_lantern";
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
			return "show_movie_magic_lantern";
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return "show_movie_magic_lantern";
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "generic_show_mc";
		default:
			break;
	}
	return "";
}

void func_1298(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return;
	}
	Global_1394141->f_7[iParam0] = (Global_1394141->f_7[iParam0] || iParam1);
}

void func_1299(int iParam0, int iParam1)
{
	if (!func_1292(iParam0))
	{
		return;
	}
	Global_1394141->f_7[iParam0] = (&Global_1394141->f_7[iParam0] - (Global_1394141->f_7[iParam0] && iParam1));
}

bool func_1300(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_1301(int iParam0)
{
	return iParam0 > -1;
}

int func_1302(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1303(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_1304(int iParam0, int iParam1)
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
	if (func_123(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_123(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_123(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_123(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_123(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_123(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_123(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_123(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_1305()
{
	return get_player_group(get_player_index());
}

void func_1306(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_1300(iParam0))
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
		_0xd747979c053efa7a(func_1305());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_2570(iParam0, 0, 0);
}

int func_1307(bool bParam0)
{
	if (bParam0)
	{
		return func_2571(Global_1359489->f_4);
	}
	get_group_size(func_1305(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_1305(), iVar3);
		if (func_2572(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_1308()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_2573(iVar0);
		iVar2 = func_2573(iVar0 + 1);
		if (!func_1300(iVar1))
		{
			if (func_1300(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

int func_1309(int iParam0)
{
	if (!func_274(iParam0))
	{
		return 0;
	}
	return func_1805(func_644(iParam0));
}

bool func_1310(int iParam0, bool bParam1)
{
	if (func_82() != -1)
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

int func_1311(int iParam0)
{
	if (func_1309(iParam0) == 1)
	{
		return func_698(iParam0);
	}
	return -1;
}

bool func_1312(int iParam0)
{
	if ((!func_1053((*Global_1347702)[61]->f_15, 1) && func_1053((*Global_1347702)[59]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return true;
	}
	return false;
}

void func_1313(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1300(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1314(int iParam0)
{
	if (func_2574(iParam0))
	{
		if ((func_1382(iParam0, -2147483648) || func_1382(iParam0, 2048)) || func_1382(iParam0, 8192))
		{
			return 5;
		}
		if ((((func_1382(iParam0, 1) || func_1382(iParam0, 16)) || func_1382(iParam0, 32)) || func_1382(iParam0, 1024)) || func_1382(iParam0, 4096))
		{
			return 4;
		}
		if (func_1382(iParam0, 2) || func_1382(iParam0, 64))
		{
			return 3;
		}
		if ((func_1382(iParam0, 8) || func_1382(iParam0, 4)) || func_1382(iParam0, 128))
		{
			return 2;
		}
		if (func_1382(iParam0, 512))
		{
			return 1;
		}
	}
	return 0;
}

int func_1315(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_1316(int iParam0)
{
	return func_2575(iParam0, 2, 1);
}

void func_1317(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return;
	}
	func_2576(iParam0, 2, 1);
	func_2577(iParam0);
}

void func_1318(int iParam0)
{
	func_2576(iParam0, 4, 1);
}

int func_1319(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_2578(iParam0);
	iVar3 = func_2579(iParam0);
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
				iVar1 = func_630();
				func_1219(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_1420(iParam0, 1);
			if (func_2580(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_1417(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_2581(1, iParam0);
				}
				else
				{
					func_2582(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1320(int iParam0)
{
	func_1313(iParam0, 4, 1);
}

bool func_1321(int iParam0)
{
	if (func_1300(iParam0))
	{
		if (func_1304(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1322(int iParam0)
{
	return func_2575(iParam0, 16, 1);
}

bool func_1323(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return false;
	}
	if (!func_2583(iParam0, 1, 0))
	{
		if (func_2584(iParam0))
		{
			if (!func_2575(iParam0, 512, 1) || !func_2585(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1324(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1300(iParam0))
	{
		return;
	}
	if (func_1322(iParam0))
	{
		if (!func_2586(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_372(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1367(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_1303(iParam0);
	if (((does_entity_exist(iVar1) && func_1404(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1412(iParam0, 2, 1);
	}
	else
	{
		func_2587(iParam0);
		func_1412(iParam0, 1, 1);
	}
}

struct<7> func_1325(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = iParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

bool func_1326(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_2575(uParam0->f_3, 32, 1))
	{
		func_2588(uParam0);
		return true;
	}
	else if (func_335() == 6)
	{
		switch (uParam0->f_3)
		{
			case 0:
			case 2:
			case 3:
				func_2588(uParam0);
				return true;
			default:
				break;
		}
	}
	else if (func_361(45))
	{
		switch (*uParam0)
		{
			case 3:
			case 4:
			case 8:
			case 9:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
				func_2588(uParam0);
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_1327()
{
	if (func_361(45))
	{
		return;
	}
	if (Global_1359489->f_361.f_257 != func_178())
	{
		Global_1359489->f_361.f_257 = func_178();
		func_2589();
		iVar1 = Global_1359489->f_361.f_2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (&Global_1359489->f_361.f_196[iVar0] == -1)
			{
			}
			else if (Global_1359489->f_361.f_196[iVar0]->f_1 != Global_1359489->f_361.f_257)
			{
			}
			else if (func_2590(&(Global_1359489->f_361.f_196[iVar0])))
			{
			}
			else if (func_210(Global_1359489->f_361.f_196[iVar0]->f_2, 0, 0) >= 1)
			{
			}
			else
			{
				func_2591(Global_1359489->f_361.f_196[iVar0], 1);
			}
			iVar0++;
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		func_2592();
	}
}

void func_1328(int iParam0)
{
	switch (Global_40.f_6563[iParam0]->f_24)
	{
		case 0:
			break;
		case 1:
			if (!func_1345(Global_1359489->f_361.f_14))
			{
				return;
			}
			if (!func_1346("CMPI"))
			{
				return;
			}
			if ((Global_1359489->f_361.f_194 == 0 || _0x59fa676177dbe4c9(Global_1359489->f_361.f_194) == 5) || _0x59fa676177dbe4c9(Global_1359489->f_361.f_194) == 6)
			{
				_uilog_set_pending_details_id(1, func_1347(&(Global_40.f_6563[iParam0])));
				Global_1359489->f_361.f_194 = func_90("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, get_hash_key(func_1348(Global_40.f_6563[iParam0]->f_3)), 1433015236, "INPUT_FEED_INTERACT_GENERIC", -1507719118, 5000, 0, 0, 0, 0, 1, 1);
				func_1333(iParam0, 2);
			}
			break;
		case 2:
			if (&Global_40.f_6563[iParam0] == 15)
			{
				return;
			}
			if (!func_1345(Global_1359489->f_361.f_14))
			{
				return;
			}
			if (!func_1346("CMPI"))
			{
				return;
			}
			if (Global_1914319->f_17376)
			{
				return;
			}
			if (!func_1349(Global_40.f_6563[iParam0]))
			{
				return;
			}
			if (&Global_40.f_6563[iParam0] == 9)
			{
				func_2593();
			}
			func_1350(Global_40.f_6563[iParam0], 1);
			Global_1359489->f_361.f_26[iParam0] = 1;
			Global_1359489->f_361.f_37[iParam0] = 1;
			Global_1359489->f_361.f_48[iParam0] = 1;
			func_1333(iParam0, 3);
			break;
		case 12:
		case 14:
			if (does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
			{
				delete_object(Global_1359489->f_361.f_84[iParam0]);
				if (does_blip_exist(Global_1359489->f_361.f_72))
				{
					remove_blip(&(Global_1359489->f_361.f_72));
				}
			}
			if (&Global_40.f_6563[iParam0] == 9)
			{
				func_1333(iParam0, 15);
			}
			else
			{
				func_1333(iParam0, 13);
			}
			break;
		case 17:
			if (does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
			{
				delete_object(Global_1359489->f_361.f_84[iParam0]);
				if (does_blip_exist(Global_1359489->f_361.f_72))
				{
					remove_blip(&(Global_1359489->f_361.f_72));
				}
			}
			break;
		case 16:
			if (does_blip_exist(Global_1359489->f_361.f_72))
			{
				remove_blip(&(Global_1359489->f_361.f_72));
			}
			func_2594();
			func_1333(iParam0, 15);
			break;
		case 3:
			if (!func_1349(Global_40.f_6563[iParam0]))
			{
				func_2595(Global_40.f_6563[iParam0], 0);
				func_1343(Global_1359489->f_361.f_3[iParam0]);
				sVar0 = func_1351(&(Global_40.f_6563[iParam0]));
				if (_text_database_has_loaded(sVar0))
				{
					_text_database_delete(sVar0);
				}
				Global_1359489->f_361.f_26[iParam0] = 0;
				Global_1359489->f_361.f_37[iParam0] = 0;
				Global_1359489->f_361.f_48[iParam0] = 0;
				func_1333(iParam0, 2);
				return;
			}
			break;
	}
}

void func_1329()
{
	if (func_2590(6))
	{
		return;
	}
	if (func_2596(6, &uVar0))
	{
		return;
	}
	if (!_0xec7e480ff8bd0bed(Global_35))
	{
		return;
	}
	if (_0x804425c4bbd00883(Global_35) != -1448254237)
	{
		return;
	}
	func_2597(6, 5, 1);
}

int func_1330()
{
	return Global_40.f_4283.f_4;
}

bool func_1331(int iParam0)
{
	iVar0 = Global_40.f_6563[iParam0]->f_3;
	if (!func_2598(iVar0))
	{
		return false;
	}
	if (!func_2586(iVar0))
	{
		iVar1 = func_2599(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (!does_entity_exist(iVar1))
		{
			return false;
		}
	}
	Global_1359489->f_361.f_308 = 0;
	Global_1359489->f_361.f_309 = 0;
	Global_1359489->f_361.f_310 = 0;
	Global_1359489->f_361.f_299 = { Global_36 };
	Global_1359489->f_361.f_302 = (get_entity_heading(func_1303(Global_40.f_6563[iParam0]->f_3)) - 180f);
	func_2600(Global_1359489->f_361.f_299, Global_1359489->f_361.f_302, &(Global_1359489->f_361.f_305));
	func_2600(Global_1359489->f_361.f_299, (Global_1359489->f_361.f_302 + Global_1359489->f_361.f_303), &(Global_1359489->f_361.f_306));
	func_2600(Global_1359489->f_361.f_299, (Global_1359489->f_361.f_302 + Global_1359489->f_361.f_304), &(Global_1359489->f_361.f_307));
	func_1333(iParam0, 6);
	return true;
}

bool func_1332(int iParam0)
{
	iVar1 = func_1303(Global_40.f_6563[iParam0]->f_3);
	func_2601(iVar1, &(Global_1359489->f_361.f_305), &(Global_1359489->f_361.f_308), &bVar0);
	if (bVar0)
	{
		func_1333(iParam0, 7);
		return true;
	}
	func_2601(iVar1, &(Global_1359489->f_361.f_306), &(Global_1359489->f_361.f_309), &bVar0);
	if (bVar0)
	{
		Global_1359489->f_361.f_302 = (Global_1359489->f_361.f_302 + Global_1359489->f_361.f_303);
		func_1333(iParam0, 7);
		return true;
	}
	func_2601(iVar1, &(Global_1359489->f_361.f_307), &(Global_1359489->f_361.f_310), &bVar0);
	if (bVar0)
	{
		Global_1359489->f_361.f_302 = (Global_1359489->f_361.f_302 + Global_1359489->f_361.f_304);
		func_1333(iParam0, 7);
		return true;
	}
	if ((Global_1359489->f_361.f_308 == 2 && Global_1359489->f_361.f_309 == 2) && Global_1359489->f_361.f_310 == 2)
	{
		return false;
	}
	return true;
}

void func_1333(int iParam0, int iParam1)
{
	Global_40.f_6563[iParam0]->f_24 = iParam1;
}

bool func_1334(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_2602(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_1335(int iParam0)
{
	switch (Global_40.f_6563[iParam0]->f_5)
	{
		case 3:
			if (func_2603(495))
			{
				if (func_1471(495) == 4)
				{
					do_screen_fade_in(1500);
					func_1333(iParam0, 18);
				}
			}
			else
			{
				do_screen_fade_in(1500);
				func_1333(iParam0, 18);
			}
			break;
		default:
			if (!does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
			{
				if (Global_40.f_6563[iParam0]->f_22 != 0)
				{
					func_1333(iParam0, 13);
					return false;
				}
				else
				{
					func_1333(iParam0, 19);
					return false;
				}
			}
			if (does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
			{
				switch (&Global_40.f_6563[iParam0])
				{
					case 12:
						if (func_1401(&(Global_1359489->f_361.f_84[iParam0]), Global_35, 1) < 4f)
						{
							_0xa6a76d666a281f2d(&(Global_1359489->f_361.f_84[iParam0]), 480079517);
						}
						break;
					case 10:
						if (func_1401(&(Global_1359489->f_361.f_84[iParam0]), Global_35, 1) < 4f)
						{
							_0xa6a76d666a281f2d(&(Global_1359489->f_361.f_84[iParam0]), 2074469742);
						}
						break;
					case 4:
						if (func_1401(&(Global_1359489->f_361.f_84[iParam0]), Global_35, 1) < 4f)
						{
							_0xa6a76d666a281f2d(&(Global_1359489->f_361.f_84[iParam0]), 126245522);
						}
						break;
				}
				if (func_2604(&(Global_1359489->f_361.f_84[iParam0])))
				{
					switch (&Global_40.f_6563[iParam0])
					{
						case 3:
							if (!func_2605(296901449))
							{
								func_952(296901449, 2, 0, 0, 0);
							}
							else
							{
								func_740(296901449, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
							}
							break;
						case 4:
							if (!func_2605(126245522))
							{
								func_952(126245522, 2, 0, 0, 0);
							}
							else
							{
								func_740(126245522, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
							}
							break;
						case 10:
							if (!func_2605(2074469742))
							{
								func_952(2074469742, 2, 0, 0, 0);
							}
							else
							{
								func_740(2074469742, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
							}
							break;
					}
					iVar0 = func_2606();
					if (iVar0 == 1)
					{
						if (does_blip_exist(Global_1359489->f_361.f_72))
						{
							remove_blip(&(Global_1359489->f_361.f_72));
						}
					}
					delete_object(Global_1359489->f_361.f_84[iParam0]);
					if (&Global_40.f_6563[iParam0] == 11)
					{
						func_1333(iParam0, 15);
					}
					else
					{
						func_1333(iParam0, 19);
					}
				}
				else if (&Global_40.f_6563[iParam0] == 11)
				{
					if (func_1338(&(Global_1359489->f_361.f_297)))
					{
						func_1339(&(Global_1359489->f_361.f_297));
						func_1333(iParam0, 17);
					}
				}
			}
			break;
	}
	return true;
}

bool func_1336(int iParam0, var uParam1)
{
	if (!_does_scenario_point_exist(*uParam1))
	{
		Var0 = { func_2607(iParam0) };
		if (iParam0 == 9)
		{
			iVar4 = 1910747196;
		}
		else
		{
			iVar4 = -523602066;
		}
		*uParam1 = create_scenario_point(iVar4, Var0, Var0.f_3, 0, 0, 0);
		return false;
	}
	if (!does_entity_exist(uParam1->f_1))
	{
		uParam1->f_1 = get_object_index_from_entity_index(_get_scenario_point_entity(*uParam1, "PrimaryItem"));
		return false;
	}
	if (iParam0 == 11)
	{
		if (_does_streamed_txd_exist(-1138345479))
		{
			_request_streamed_txd(-1138345479, false);
		}
		if (!_has_streamed_txd_loaded(-1138345479))
		{
			return false;
		}
		if (_has_streamed_txd_loaded(-1138345479))
		{
			_set_apply_object_txd(uParam1->f_1, -1138345479, 0, 0);
		}
	}
	if (iParam0 == 11)
	{
		decor_set_int(uParam1->f_1, "letter_item", 890514341);
	}
	else
	{
		decor_set_int(uParam1->f_1, "letter_item", -783217322);
	}
	return true;
}

Vector3 func_1337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_2608(-126.6237f, -39.9627f, 95.36f, 0.2f, 0f);
		case 2:
			return func_2608(653.2031f, -1243.2f, 43.49f, 0.15f, 0f);
		case 3:
			return func_2608(1902.14f, -1859.22f, 46.85f, 0.15f, 0f);
		case 6:
			return func_2608(2340.23f, 1360.12f, 106.1032f, 0.2f, 0f);
		case 8:
			return func_2608(-1633.54f, -1356.06f, 84.19f, 0.2f, 0f);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1338(var uParam0)
{
	if (!_does_scenario_point_exist(*uParam0))
	{
		return false;
	}
	if (does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_1339(var uParam0)
{
	if (_does_scenario_point_exist(*uParam0))
	{
		_delete_scenario_point(*uParam0);
	}
	if (does_entity_exist(uParam0->f_1))
	{
		delete_object(&(uParam0->f_1));
	}
}

bool func_1340(int iParam0)
{
	if (!does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
	{
		request_model(Global_40.f_6563[iParam0]->f_22, false);
		if (has_model_loaded(Global_40.f_6563[iParam0]->f_22))
		{
			Global_1359489->f_361.f_84[iParam0] = create_object(Global_40.f_6563[iParam0]->f_22, func_1337(func_335()), true, true, false, false, true);
		}
		return false;
	}
	if (!does_blip_exist(Global_1359489->f_361.f_72))
	{
		Global_1359489->f_361.f_72 = _blip_add_for_coord(422991367, func_1337(func_335()));
	}
	if (func_2604(&(Global_1359489->f_361.f_84[iParam0])))
	{
		iVar0 = func_2606();
		if (iVar0 == 1)
		{
			if (does_blip_exist(Global_1359489->f_361.f_72))
			{
				remove_blip(&(Global_1359489->f_361.f_72));
			}
		}
		delete_object(Global_1359489->f_361.f_84[iParam0]);
		func_1333(iParam0, 19);
	}
	return true;
}

bool func_1341(var uParam0, vector3 vParam1)
{
	if (!is_string_null_or_empty(&vParam1))
	{
		if (!_0x54b187f111d9c6f8(func_1303(uParam0->f_3), 0) && !_0x54b187f111d9c6f8(Global_35, 0))
		{
			func_2610(&(Global_1359489->f_361.f_96), func_1303(uParam0->f_3), func_2609(uParam0->f_3), 1);
			if (func_2058())
			{
				func_2610(&(Global_1359489->f_361.f_96), Global_35, "ARTHUR", 0);
			}
			else
			{
				func_2610(&(Global_1359489->f_361.f_96), Global_35, "JOHN", 0);
			}
			if (func_2611(&(Global_1359489->f_361.f_96), vParam1, 0, -1, 0, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1342(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (bParam1 && !is_bit_set(Global_40.f_6563.f_271, iVar0))
	{
		set_bit(&(Global_40.f_6563.f_271), iVar0);
		func_1711(func_1920(-664554906), 1);
		if (Global_1425247->f_53)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 2;
		}
		_0xe824ce7d13fcb300(func_1347(iParam0), iVar1);
	}
	else
	{
		clear_bit(&(Global_40.f_6563.f_271), iVar0);
	}
}

void func_1343(var uParam0)
{
	if (_does_anim_scene_exist(*uParam0))
	{
		reset_anim_scene(*uParam0, 0);
		_delete_anim_scene(*uParam0);
		*uParam0 = -1;
	}
}

void func_1344(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1321(uParam0->f_3))
	{
		return;
	}
	if (uParam0->f_24 > 8)
	{
		return;
	}
	bVar0 = true;
	bVar1 = false;
	bVar2 = true;
	bVar3 = true;
	iVar4 = func_2612(uParam0);
	switch (iVar4)
	{
		case 4:
		case 10:
		case 11:
			bVar0 = false;
			bVar3 = false;
			bVar2 = false;
			break;
		case 3:
		case 5:
			bVar1 = true;
			bVar3 = false;
			break;
		case 0:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
			bVar3 = false;
			break;
		case 1:
			if (*uParam0 != 15)
			{
				bVar3 = false;
			}
			break;
	}
	func_2613(uParam0, bParam4, bVar0, bVar1);
	func_2614(uParam0, uParam1, bParam2, bParam3, bVar3, bVar2);
}

bool func_1345(int iParam0)
{
	if (_does_streamed_txd_exist(iParam0))
	{
		_request_streamed_txd(iParam0, false);
		if (!_has_streamed_txd_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_1346(char* sParam0)
{
	if (!_text_database_has_loaded(sParam0))
	{
		if (!_0x3cf96e16265b7dc8(sParam0))
		{
			_text_database_request(sParam0);
		}
		return false;
	}
	return true;
}

int func_1347(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -467647619;
		case 2:
			return -1692078269;
		case 3:
			return -1411867178;
		case 4:
			return -1295797652;
		case 5:
			return -1306960697;
		case 6:
			return 567333282;
		case 7:
			return 669046098;
		case 8:
			return -1099073159;
		case 9:
			return 1137962872;
		case 10:
			return -74329438;
		case 11:
			return 1637646544;
		case 12:
			return 1226042171;
		case 13:
			return -338802011;
		case 14:
			return 1476368342;
		case 15:
			return 794168062;
		case 16:
			return -1058589986;
		case 17:
			return 1586830886;
		case 18:
			return 676666991;
		case 19:
			return -770025009;
		case 20:
			return -1897617972;
		case 21:
			return -930732451;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_1348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1349(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
			if ((((func_739(-1487662509, uParam0->f_2, 0) || func_739(443610063, uParam0->f_2, 0)) || func_739(1159327003, uParam0->f_2, 0)) || func_739(1020653842, uParam0->f_2, 0)) || func_739(290068603, uParam0->f_2, 0))
			{
				return true;
			}
			break;
		case 12:
			if ((func_739(-931012004, uParam0->f_2, 0) || func_739(544283678, uParam0->f_2, 0)) || func_739(-963759116, uParam0->f_2, 0))
			{
				return true;
			}
			break;
		case 15:
			return func_2615(-1523680261, 0);
		case 20:
			if ((((func_739(1301922967, uParam0->f_2, 0) || func_739(844655121, uParam0->f_2, 0)) || func_739(95619999, uParam0->f_2, 0)) || func_739(-1014049156, uParam0->f_2, 0)) || func_739(1681227286, uParam0->f_2, 0))
			{
				return true;
			}
			break;
		case 19:
			if ((func_739(546981776, uParam0->f_2, 0) || func_739(-435006002, uParam0->f_2, 0)) || func_739(2064962445, uParam0->f_2, 0))
			{
				return true;
			}
			break;
		case 21:
			iVar0 = func_2616(uParam0, 1, 688258043);
			iVar2 = func_2616(uParam0, 2, -1477273558);
			iVar1 = func_2616(uParam0, 3, 128702355);
			iVar3 = func_2616(uParam0, 4, 1613651027);
			iVar4 = func_2616(uParam0, 5, 0);
			return ((((iVar0 && iVar1) && iVar2) && iVar3) && iVar4);
		default:
			if (func_739(uParam0->f_1, uParam0->f_2, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1350(var uParam0, bool bParam1)
{
	iVar0 = func_2617(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 541204999)
	{
		sVar1 = func_2618(uParam0->f_3, 0);
		func_2619(uParam0, 1896170705, _create_var_string(8, iVar0, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_2619(uParam0, 1896170705, _get_label_text_by_hash(iVar0), 0, bParam1, 0);
	}
}

char* func_1351(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "TITHAUD";
		case 2:
		case 21:
			return "CABCHAU";
		case 3:
		case 10:
		case 13:
		case 15:
		case 18:
			return "CAHSAUD";
		case 7:
		case 11:
		case 14:
			return "CACCAUD";
		case 1:
		case 4:
		case 6:
		case 8:
		case 9:
		case 12:
		case 16:
		case 17:
		case 19:
		case 20:
			return "CPGENAU";
	}
	return "";
}

bool func_1352(int iParam0)
{
	if (!func_1345(Global_1359489->f_361.f_14))
	{
		return false;
	}
	if (!func_1346("CMPI"))
	{
		return false;
	}
	if (!func_1349(Global_40.f_6563[iParam0]))
	{
		func_2595(Global_40.f_6563[iParam0], 0);
		func_1343(Global_1359489->f_361.f_3[iParam0]);
		Global_1359489->f_361.f_26[iParam0] = 0;
		Global_1359489->f_361.f_37[iParam0] = 0;
		Global_1359489->f_361.f_48[iParam0] = 0;
		func_1333(iParam0, 2);
		return false;
	}
	if (!is_string_null_or_empty(&(Global_40.f_6563[iParam0]->f_12)) && !_does_anim_scene_exist(&(Global_1359489->f_361.f_3[iParam0])))
	{
		func_1333(iParam0, 4);
		return false;
	}
	Global_1359489->f_361.f_26[iParam0] = 1;
	Global_1359489->f_361.f_37[iParam0] = 1;
	Global_1359489->f_361.f_48[iParam0] = 1;
	switch (Global_40.f_6563[iParam0]->f_4)
	{
		case 0:
			if (func_2620(Global_40.f_6563[iParam0], Global_1359489->f_361.f_61[iParam0], &(Global_1359489->f_361.f_15[iParam0])))
			{
				Global_1359489->f_361.f_26[iParam0] = 0;
				Global_1359489->f_361.f_37[iParam0] = 0;
				Global_1359489->f_361.f_48[iParam0] = 0;
				if (&Global_40.f_6563[iParam0] == 15)
				{
					func_1402(func_1303(Global_40.f_6563[iParam0]->f_3), "PEARSON_ARTHUR_DAWDLE", -417894478, Global_35, 1, 0, 1, 1);
					func_1333(iParam0, 7);
				}
				else
				{
					switch (Global_40.f_6563[iParam0]->f_5)
					{
						case 3:
							do_screen_fade_out(2000);
							func_1333(iParam0, 8);
							func_2621(Global_40.f_6563[iParam0]);
							break;
						case 2:
							func_1384(Global_40.f_6563[iParam0]->f_3, -2147483648, 0, -1);
							func_2621(Global_40.f_6563[iParam0]);
							func_1333(iParam0, 5);
							break;
					}
				}
				func_386(0, -1);
				Global_1359489->f_361.f_15[iParam0] = 0;
				return true;
			}
			break;
	}
	return false;
}

int func_1353(int iParam0)
{
	if (func_819(173))
	{
		func_2622(Global_40.f_6563[iParam0], &(Global_1359489->f_361.f_61[iParam0]));
		func_820(173);
	}
	switch (Global_40.f_6563[iParam0]->f_5)
	{
		case 3:
			if (is_screen_faded_out())
			{
				func_1447();
				func_2623(Global_40.f_6563[iParam0]->f_20, 1, 1, 1, 0);
				func_1333(iParam0, 14);
			}
			break;
		case 2:
			if (!func_1322(Global_40.f_6563[iParam0]->f_3) && !func_2584(Global_40.f_6563[iParam0]->f_3))
			{
				if (!is_string_null_or_empty(&(Global_40.f_6563[iParam0]->f_6)))
				{
					if (func_1341(Global_40.f_6563[iParam0], Global_40.f_6563[iParam0]->f_6))
					{
						func_1333(iParam0, 11);
					}
				}
				else
				{
					func_1333(iParam0, 12);
					func_1342(&(Global_40.f_6563[iParam0]), 1);
				}
			}
			break;
		case 1:
			sVar0 = func_1351(&(Global_40.f_6563[iParam0]));
			if (!is_string_null_or_empty(sVar0))
			{
				if (!_text_database_has_loaded(sVar0))
				{
					_text_database_request(sVar0);
					return 0;
				}
			}
			if (!is_string_null_or_empty(&(Global_40.f_6563[iParam0]->f_6)))
			{
				if (func_1341(Global_40.f_6563[iParam0], Global_40.f_6563[iParam0]->f_6))
				{
					func_1333(iParam0, 11);
				}
			}
			break;
	}
	return 1;
}

bool func_1354(int iParam0)
{
	if (!func_1345(Global_1359489->f_361.f_14))
	{
		return false;
	}
	if (!func_1346("CMPI"))
	{
		return false;
	}
	switch (Global_40.f_6563[iParam0]->f_5)
	{
		case 2:
			if (!func_2624(&(Global_40.f_6563[iParam0]->f_6)))
			{
				func_2625(Global_40.f_6563[iParam0]->f_3);
				func_1268(12, 1461411082, 0, 0, 0, 0, 1065353216, 0);
				func_1342(&(Global_40.f_6563[iParam0]), 1);
				if (func_1359(iParam0))
				{
					func_1333(iParam0, 19);
				}
				else
				{
					func_2619(Global_40.f_6563[iParam0], 1896170705, "ITEM_REQ_RETURN", 1, 1, 0);
					func_1333(iParam0, 12);
				}
			}
			break;
		case 1:
			if (&Global_40.f_6563[iParam0] == 15)
			{
				func_1268(12, 1461411082, 0, 0, 0, 0, 1065353216, 0);
				func_1342(&(Global_40.f_6563[iParam0]), 1);
				Global_1357549->f_1492 = -1760041550;
				func_1359(iParam0);
				func_1333(iParam0, 19);
				return true;
			}
			break;
		default:
			func_1268(12, 1461411082, 0, 0, 0, 0, 1065353216, 0);
			func_1342(&(Global_40.f_6563[iParam0]), 1);
			if (func_1359(iParam0))
			{
				func_1333(iParam0, 19);
			}
			else
			{
				func_2619(Global_40.f_6563[iParam0], -503391303, "ITEM_REQ_RETURN", 1, 1, 0);
				func_1333(iParam0, 12);
			}
			break;
	}
	return true;
}

bool func_1355(int iParam0)
{
	if (Global_40.f_6563[iParam0]->f_22 != 0)
	{
		if (!does_entity_exist(&(Global_1359489->f_361.f_84[iParam0])))
		{
			request_model(Global_40.f_6563[iParam0]->f_22, false);
			if (has_model_loaded(Global_40.f_6563[iParam0]->f_22))
			{
				Global_1359489->f_361.f_84[iParam0] = create_object(Global_40.f_6563[iParam0]->f_22, func_1337(func_335()), true, true, false, false, true);
			}
		}
		else
		{
			if (&Global_40.f_6563[iParam0] == 11)
			{
				if (!func_1336(11, &(Global_1359489->f_361.f_297)))
				{
					return false;
				}
			}
			if (!does_blip_exist(Global_1359489->f_361.f_72))
			{
				Global_1359489->f_361.f_72 = _blip_add_for_coord(422991367, func_1337(func_335()));
			}
			iVar0 = 0;
			switch (&Global_40.f_6563[iParam0])
			{
				case 3:
					iVar0 = 296901449;
					break;
				case 4:
					iVar0 = 126245522;
					break;
				case 10:
					iVar0 = 2074469742;
					break;
				case 12:
					iVar0 = 480079517;
					break;
				case 18:
					iVar0 = 1446246869;
					break;
			}
			if (iVar0 != 0)
			{
				iVar1 = func_1983(func_1982(iVar0, 0), 0);
				if (is_weapon_valid(iVar1))
				{
					func_1984(iVar1);
				}
			}
			func_1333(iParam0, 14);
		}
	}
	return true;
}

bool func_1356(int iParam0)
{
	if (!Global_40.f_6563[iParam0]->f_26)
	{
		iVar0 = func_2606();
		if (iVar0 > 0)
		{
			iVar1 = func_2626();
			iVar2 = (iVar0 - iVar1);
			if (iVar2 == 1)
			{
				sVar3 = func_2618(Global_40.f_6563[iParam0]->f_3, 0);
				switch (func_335())
				{
					case 1:
					case 2:
					case 6:
						Global_1359489->f_361.f_194 = func_89(_create_var_string(10, "ITEM_REQ_ITEM_PICKUP_TENT", sVar3), 10000, 0, 0, 0, 1);
						break;
					case 3:
					case 8:
						Global_1359489->f_361.f_194 = func_89(_create_var_string(10, "ITEM_REQ_ITEM_PICKUP_ROOM", sVar3), 10000, 0, 0, 0, 1);
						break;
				}
			}
			else if (iVar2 > 1)
			{
				switch (func_335())
				{
					case 1:
					case 2:
					case 6:
						Global_1359489->f_361.f_194 = func_89("ITEM_REQ_ITEM_PICKUP_MULT_TENT", 10000, 0, 0, 0, 1);
						break;
					case 3:
					case 8:
						Global_1359489->f_361.f_194 = func_89("ITEM_REQ_ITEM_PICKUP_MULT_ROOM", 10000, 0, 0, 0, 1);
						break;
				}
				func_2627();
			}
		}
		Global_40.f_6563[iParam0]->f_26 = 1;
	}
	switch (Global_40.f_6563[iParam0]->f_5)
	{
		case 1:
		case 2:
			if ((!Global_40.f_6563[iParam0]->f_25 && func_2628(func_1303(Global_40.f_6563[iParam0]->f_3), Global_35, 1, 6f, 0)) && !func_1322(Global_40.f_6563[iParam0]->f_3))
			{
				sVar4 = func_1351(&(Global_40.f_6563[iParam0]));
				if (!is_string_null_or_empty(sVar4))
				{
					if (!_text_database_has_loaded(sVar4))
					{
						_text_database_request(sVar4);
						return false;
					}
				}
				func_1341(Global_40.f_6563[iParam0], Global_40.f_6563[iParam0]->f_9);
				if (!is_string_null_or_empty(&(Global_40.f_6563[iParam0]->f_9)) && func_2624(&(Global_40.f_6563[iParam0]->f_9)))
				{
					iVar5 = func_2629(&(Global_40.f_6563[iParam0]->f_9));
					if (iVar5 > 0)
					{
						task_look_at_entity(func_1303(Global_40.f_6563[iParam0]->f_3), Global_35, iVar5, 0, 51, 1);
					}
					else
					{
						task_look_at_entity(func_1303(Global_40.f_6563[iParam0]->f_3), Global_35, 2500, 0, 51, 1);
					}
					Global_40.f_6563[iParam0]->f_25 = 1;
				}
			}
			break;
	}
	return true;
}

bool func_1357(int iParam0)
{
	if (!func_2630(iParam0))
	{
		return false;
	}
	return Global_32074.f_4[iParam0]->f_3;
}

bool func_1358(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1359(int iParam0)
{
	switch (&Global_40.f_6563[iParam0])
	{
		case 2:
			if (!func_2605(1627068364))
			{
				func_952(1627068364, 1, 0, 0, 0);
			}
			else
			{
				func_740(1627068364, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			break;
		case 13:
			if (!func_2605(1478239863))
			{
				func_952(1478239863, 1, 0, 0, 0);
			}
			else
			{
				func_740(1478239863, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			break;
		case 20:
			if (!func_2605(230530039))
			{
				func_952(230530039, 2, 0, 0, 0);
			}
			else
			{
				func_740(230530039, 2, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			break;
		case 8:
			if (!func_2605(-951828978))
			{
				func_952(-951828978, 1, 0, 0, 0);
			}
			else
			{
				func_740(-951828978, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			break;
		case 16:
			if (!func_2605(1483206625))
			{
				func_952(1483206625, 1, 0, 0, 0);
			}
			else
			{
				func_740(1483206625, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			break;
		case 21:
			func_740(-329550451, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_740(-961594764, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_740(-617979714, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_740(-588157961, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			break;
		case 15:
			func_740(-605953717, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			break;
		case 5:
			func_740(-858194369, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			break;
		default:
			return false;
	}
	return true;
}

void func_1360(int iParam0)
{
	if (!func_2590(&(Global_40.f_6563[iParam0])))
	{
		func_1342(&(Global_40.f_6563[iParam0]), 1);
	}
	switch (&Global_40.f_6563[iParam0])
	{
		case 3:
			func_2631(-1482329777, 1, 0);
			break;
		case 5:
			func_1319(-56411631, -2060316038, 1120952528, -1, 1, 1, 0);
			break;
		case 9:
			func_2593();
			break;
		case 21:
			func_2632();
			break;
	}
	if (Global_40.f_6563[iParam0]->f_23 != 0)
	{
		func_2633(Global_40.f_6563[iParam0]->f_23);
	}
	func_2634(&(Global_40.f_6563[iParam0]));
	Global_1359489->f_361.f_15[iParam0] = 0;
}

bool func_1361(int iParam0, bool bParam1)
{
	if (Global_1357549->f_1497.f_8 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		return (Global_1357549->f_1497.f_8 && iParam0) == iParam0;
	}
	return (Global_1357549->f_1497.f_8 && iParam0) != 0;
}

void func_1362(int iParam0)
{
	if (iParam0 == 8 && Global_1357549->f_1497.f_5 != 7)
	{
		iParam0 = 7;
	}
	if (iParam0 != Global_1357549->f_1497.f_5)
	{
		Global_1357549->f_1497.f_111 = 0;
		func_2635();
	}
	if (iParam0 == 0 && Global_1357549->f_1497.f_5 != 0)
	{
		func_517(&(Global_1357549->f_1497.f_18));
	}
	Global_1357549->f_1497.f_6 = Global_1357549->f_1497.f_5;
	Global_1357549->f_1497.f_5 = iParam0;
}

bool func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_767(1);
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

void func_1364(int iParam0, int iParam1)
{
	if (func_1376(iParam0))
	{
		Global_1359453->f_15 = iParam1;
	}
}

bool func_1365()
{
	return func_1361(1024, 1);
}

int func_1366(float fParam0)
{
	if (fParam0 > 310f)
	{
		return 0;
	}
	if ((((func_2636(180573150, 1) || func_2636(-404697685, 1)) || func_2636(-558867971, 1)) || func_357(4)) || func_1234(50))
	{
		return 0;
	}
	return 1;
}

int func_1367(int iParam0, bool bParam1)
{
	if (!func_1300(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_2577(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1368(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_526(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1369(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1357549->f_1497.f_8 = (Global_1357549->f_1497.f_8 || iParam0);
	}
	else
	{
		Global_1357549->f_1497.f_8 = (Global_1357549->f_1497.f_8 - (Global_1357549->f_1497.f_8 && iParam0));
	}
}

bool func_1370(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return false;
	}
	if (func_372(iParam0, 44, 1))
	{
		return false;
	}
	if (!func_2575(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_2575(iParam0, 4, 1))
	{
		return false;
	}
	if (func_2575(iParam0, 32, 1))
	{
		return false;
	}
	if (func_372(iParam0, 33, 1))
	{
		return false;
	}
	if (func_1322(iParam0))
	{
		return false;
	}
	if (func_2584(iParam0))
	{
		return false;
	}
	if (func_2637(iParam0, 1, 0))
	{
		return false;
	}
	iVar0 = func_1303(iParam0);
	if (does_entity_exist(iVar0) && _0x3ab6c7b0bb0df4b1(iVar0, -1))
	{
		return false;
	}
	return true;
}

int func_1371()
{
	if (_0x29fce825613fefca(Global_1357549->f_1497.f_3, 1000))
	{
		return 1;
	}
	if (_0x1a6e84f13c952094(player_id(), 250, &uVar0))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (Global_1357549->f_1497.f_3 == &uVar0[iVar4])
			{
				return 1;
			}
			iVar4++;
		}
	}
	vVar5 = { get_entity_coords(Global_1357549->f_1497.f_3, true, false) };
	if (is_explosion_in_sphere(-1, vVar5, 7.5f))
	{
		return 1;
	}
	if (is_bullet_in_area(vVar5, 3f, true))
	{
		return 1;
	}
	return 0;
}

int func_1372()
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (get_event_at_index(0, iVar0) != 1811873798)
			{
			}
			else
			{
				get_event_data(0, iVar0, &Var2, 2);
				if (Var2 != func_744(player_ped_id()))
				{
					return 0;
				}
				if (Var2.f_1 != func_744(Global_1357549->f_1497.f_3))
				{
					return 0;
				}
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_1373(var uParam0)
{
	if (!func_401(uParam0))
	{
		return 0f;
	}
	if (func_1424(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1425() - uParam0->f_1);
}

int func_1374()
{
	iVar0 = get_clock_hours();
	if (iVar0 >= func_2638(3) || iVar0 < func_2639(3))
	{
		return 3;
	}
	else if (iVar0 >= func_2638(2))
	{
		return 2;
	}
	else if (iVar0 >= func_2638(1))
	{
		return 1;
	}
	else if (iVar0 >= func_2638(0))
	{
		return 0;
	}
	return -1;
}

int func_1375(int iParam0)
{
	iVar0 = func_335();
	iVar13 = -1;
	bVar14 = func_2640(&iVar13);
	if (bVar14)
	{
		if (func_1370(iVar13))
		{
			return iVar13;
		}
		bVar14 = false;
	}
	func_2641(&uVar1);
	func_2642(&uVar10, iParam0);
	if (!bVar14)
	{
		func_2643(&uVar1, 8, iVar0, &iVar15, iParam0);
		if (iVar15 > 0)
		{
			iVar25 = 0;
			iVar26 = 0;
			while (iVar26 < 8)
			{
				if (&uVar1[iVar26] == -1)
				{
				}
				else
				{
					uVar16[iVar25] = &uVar1[iVar26];
					iVar25++;
				}
				iVar26++;
			}
			iVar27 = get_random_int_in_range(0, iVar15);
			return &(uVar16[iVar27]);
		}
		else
		{
			func_2643(&uVar10, 2, iVar0, &iVar28, -1);
			if (iVar28 > 0)
			{
				iVar32 = 0;
				iVar33 = 0;
				while (iVar33 < 2)
				{
					if (&uVar10[iVar33] == -1)
					{
					}
					else
					{
						uVar29[iVar32] = &uVar10[iVar33];
						iVar32++;
					}
					iVar33++;
				}
				iVar34 = get_random_int_in_range(0, iVar28);
				return &(uVar29[iVar34]);
			}
			else
			{
				return -1;
			}
		}
	}
	return -1;
}

bool func_1376(int iParam0)
{
	if (&Global_1359453 != 8)
	{
		return false;
	}
	return func_1458() == iParam0;
}

int func_1377(var uParam0)
{
	if (!func_401(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_1424(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1910() - round((uParam0->f_1 * 1000f)));
}

void func_1378()
{
	Global_1357549->f_1497 = -1;
	Global_1357549->f_1497.f_2 = 0;
	Global_1357549->f_1497.f_3 = 0;
	Global_1357549->f_1497.f_4 = 0;
	Global_1357549->f_1497.f_30 = -1f;
	Global_1357549->f_1497.f_31 = 0;
	Global_1357549->f_1497.f_111 = 0;
	Global_1357549->f_1497.f_109 = 0;
	Global_1357549->f_1497.f_110 = 0;
}

void func_1379(int iParam0)
{
	if (func_1361(512, 1) && iParam0 == 0)
	{
		_0xe98d55c5983f2509(Global_1357549->f_1497.f_3);
		func_1369(512, 0);
	}
	Global_1357549->f_1497.f_7 = iParam0;
}

bool func_1380()
{
	return true;
}

bool func_1381(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_1301(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_2644(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_133((*Global_1360165)[iParam0]->f_4.f_2) || func_320((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_2644(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_2645((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_2646(iParam0, 0))
					{
						func_1412(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_1325(iParam0, iParam4, vParam1, fParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_375(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_1304(func_1303(iParam0), 0))
			{
				return false;
			}
			if (fParam5 && iParam10)
			{
				if (!func_1304(func_2647(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1382(int iParam0, int iParam1)
{
	if (!func_1301(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

void func_1383(int iParam0, int iParam1)
{
	if (!func_1300(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 - ((*Global_1360165)[iParam0]->f_140 && iParam1));
	(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 - ((*Global_1360165)[iParam0]->f_141 && iParam1));
}

bool func_1384(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_1300(iParam0))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_2637(iParam0, iParam1, 0))
		{
			return false;
		}
	}
	if (iParam3 == -1)
	{
		(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 || iParam1);
		(*Global_1360165)[iParam0]->f_142 = &Global_1899515;
		func_1219(&((*Global_1360165)[iParam0]->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return true;
}

void func_1385(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1300(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_2648(iParam0, bParam3);
	}
	else
	{
		func_2649(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_2650(iParam0, bParam3);
	}
	else
	{
		func_2651(iParam0, bParam3);
	}
}

void func_1386(int iParam0, int iParam1)
{
	if (func_1300(iParam0))
	{
		(*Global_1360165)[iParam0]->f_62 = iParam1;
	}
}

float func_1387(int iParam0)
{
	fVar0 = 30f;
	if (is_ped_on_mount(player_ped_id()))
	{
		fVar0 = (fVar0 * 1.25f);
	}
	iVar1 = get_clock_hours();
	if (func_2652(iVar1, 23, 4))
	{
		fVar0 = (fVar0 * 0.75f);
	}
	_get_weather_type_transition(&iVar2, &iVar3, &fVar4);
	if (fVar4 > 0.5f)
	{
		iVar5 = iVar3;
	}
	else
	{
		iVar5 = iVar2;
	}
	switch (iVar5)
	{
		case -702816767:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 2082228755:
		case 2137137442:
			fVar0 = (fVar0 * 0.6f);
			break;
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 1500834021:
		case 1974067816:
			fVar0 = (fVar0 * 0.8f);
			break;
	}
	switch (iParam0)
	{
		case 7:
			fVar0 = (fVar0 * 1.2f);
			break;
		case 3:
			fVar0 = (fVar0 * 0.8f);
			break;
	}
	if (fVar0 < 25f)
	{
		fVar0 = 25f;
	}
	if (fVar0 > 35f)
	{
		fVar0 = 35f;
	}
	return fVar0;
}

int func_1388(int iParam0)
{
	if (iParam0 != 3)
	{
		return 0;
	}
	iVar0 = func_335();
	switch (iVar0)
	{
		case 1:
			return -268604689;
		case 2:
		case 3:
		case 6:
			return -922193456;
		default:
			break;
	}
	return 0;
}

void func_1389(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_2653(iParam2))
		{
			iVar0 = func_2654(iParam2, -1);
			if (func_2655(iParam1, iVar0))
			{
				if (func_2656(iParam1, iVar0))
				{
					if (func_2657(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_2658(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_2659(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_1412(iParam0, 66, 0);
		}
	}
}

void func_1390(int iParam0)
{
	func_2660();
	switch (iParam0)
	{
		case 0:
			func_2661(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_2661(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_2661(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_2661(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_2661(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_2661(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_2661(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_2661(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_2661(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_2661(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_2661(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_2661(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_2661(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_2661(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_2661(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_2661(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_2661(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_2661(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_2661(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_2661(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_2661(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_2661(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_2661(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_2661(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_2661(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_2661(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_2661(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_2661(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_2661(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_2661(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

bool func_1391(int iParam0)
{
	if (!func_2662(iParam0))
	{
	}
	if (func_1409(Global_1357549->f_1497, Global_1357549->f_1497.f_9, 12))
	{
		return true;
	}
	return false;
}

void func_1392(bool bParam0)
{
	if (!has_ped_got_weapon(Global_1357549->f_1497.f_3, -183018591, 0, true))
	{
		if (bParam0)
		{
			clear_ped_tasks_immediately(Global_1357549->f_1497.f_3, false, true);
			_0x2208438012482a1a(Global_1357549->f_1497.f_3, false, false);
		}
		_0xecbb26529a737ef6(0);
		_0x899a04afcc725d04(Global_1357549->f_1497.f_3, -243629315);
	}
}

bool func_1393()
{
	if (_does_scenario_point_exist(Global_1357549->f_1497.f_109))
	{
		_delete_scenario_point(Global_1357549->f_1497.f_109);
	}
	if (!func_1398(Global_35, &iVar0))
	{
		return false;
	}
	if (!func_2663(iVar0))
	{
		return false;
	}
	Global_1357549->f_1497.f_31 = iVar0;
	Global_1357549->f_1497.f_110 = func_2664();
	if (Global_1357549->f_1497.f_110 == 0)
	{
		return false;
	}
	Global_1357549->f_1497.f_109 = create_scenario_point(Global_1357549->f_1497.f_110, *Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31], Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31]->f_3, 0, 0, 0);
	if (!_does_scenario_point_exist(Global_1357549->f_1497.f_109))
	{
		return false;
	}
	_0xe69fda40aac3efc0(Global_1357549->f_1497.f_109, 0);
	_0xa7479fb665361edb(Global_1357549->f_1497.f_109, 0);
	return true;
}

int func_1394(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return 0;
	}
	return Global_40.f_4942[iParam0]->f_6;
}

bool func_1395()
{
	if (is_screen_faded_out())
	{
		return true;
	}
	if (func_1361(16, 1))
	{
		return false;
	}
	if (func_2663(Global_1357549->f_1497.f_31))
	{
		if (func_1820(Global_36, *Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31]) < (35f * 35f))
		{
			return false;
		}
	}
	if (func_1368(Global_1357549->f_1497.f_3, 1116471296, 35f, -1082130432, -1082130432))
	{
		return false;
	}
	return true;
}

void func_1396()
{
	if ((is_screen_faded_in() && Global_1357549->f_1497.f_2) && func_1368(Global_1357549->f_1497.f_3, 1116471296, -1082130432, -1082130432, -1082130432))
	{
		return;
	}
	if (!func_1398(Global_35, &iVar0))
	{
		return;
	}
	if (iVar0 == Global_1357549->f_1497.f_31)
	{
		return;
	}
	if (func_2663(iVar0))
	{
		if (func_1820(Global_36, *Global_1357549->f_1497.f_32[iVar0]) < ((35f * 0.65f) * (35f * 0.65f)))
		{
			return;
		}
	}
	Global_1357549->f_1497.f_31 = iVar0;
	if (!func_1393())
	{
		return;
	}
	if ((_does_scenario_point_exist(Global_1357549->f_1497.f_109) && Global_1357549->f_1497.f_110 != 0) && !is_scenario_occupied(_get_scenario_point_coords(Global_1357549->f_1497.f_109, true), 2f, false))
	{
		clear_ped_tasks_immediately(Global_1357549->f_1497.f_3, false, true);
		_task_use_scenario_point(Global_1357549->f_1497.f_3, Global_1357549->f_1497.f_109, 0, -1, false, true, Global_1357549->f_1497.f_110, false, -1f, false);
	}
}

bool func_1397()
{
	if (!Global_1357549->f_1497.f_2)
	{
		return false;
	}
	if (!func_1304(player_ped_id(), 0))
	{
		return false;
	}
	if (is_screen_faded_out() || is_screen_fading_in())
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
	{
		if (iVar0 != Global_1357549->f_1497.f_3)
		{
			_0xc6366a585659d15c(player_id(), 0);
			func_375(Global_1357549->f_1497, 51, 1);
			set_ped_config_flag(Global_1357549->f_1497.f_3, 330, false);
		}
	}
	switch (Global_1357549->f_1497.f_7)
	{
		case 0:
			if (func_1361(4, 1))
			{
				func_1379(7);
				return false;
			}
			if (func_391(32768))
			{
				func_1379(7);
				return false;
			}
			if (func_1912(player_ped_id(), Global_1357549->f_1497.f_3, 1, 1) < 30f)
			{
				if (func_272(0, 0, 1) && !func_391(4194304))
				{
					func_1379(7);
				}
				else
				{
					func_1379(1);
				}
			}
			break;
		case 1:
			if (func_391(32768))
			{
				func_1379(7);
				return false;
			}
			if (((func_1401(Global_35, Global_1357549->f_1497.f_3, 1) < (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30) && !func_501(8388608)) && func_1368(Global_1357549->f_1497.f_3, 1116471296, -1082130432, -1082130432, -1082130432)) && !func_1361(4, 1))
			{
				func_1369(32, 1);
				func_399(&(Global_1357549->f_1497.f_21));
				func_1379(2);
			}
			break;
		case 2:
			if (func_391(32768))
			{
				func_1379(7);
				return false;
			}
			if (!is_any_speech_playing(Global_1357549->f_1497.f_3))
			{
				if (func_2665())
				{
					sVar1 = "SCOUT_GREET_GROUP_MALE";
					if (func_2666() > 0)
					{
						sVar1 = "SCOUT_GREET_NEUTRAL";
					}
					func_1402(Global_1357549->f_1497.f_3, sVar1, -1454469014, player_ped_id(), 1, 0, 0, 1);
					func_1369(4, 1);
					func_1379(7);
					return true;
				}
				func_1402(Global_1357549->f_1497.f_3, "SCOUT_CALLOUT", -1454469014, player_ped_id(), 1, 0, 0, 1);
				task_look_at_entity(Global_1357549->f_1497.f_3, player_ped_id(), 7000, 0, 51, 1);
				func_2667(Global_1357549->f_1497, Global_35, 28, 0, 0);
				if (_0x870708a6e147a9ad(Global_1357549->f_1497.f_3, "", (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), 388, 0, 0, 0, 0, -1))
				{
					func_1369(512, 1);
					func_1412(Global_1357549->f_1497, 51, 1);
					set_ped_config_flag(Global_1357549->f_1497.f_3, 330, true);
				}
				iVar2 = get_random_int_in_range(0, 2);
				if (iVar2 == 0)
				{
					sVar3 = "RETURN_TO_CAMP_CALLOUT";
				}
				else if (iVar2 == 1)
				{
					sVar3 = "SCOUT_CALLOUT_RESPONSE";
				}
				_0xc6366a585659d15c(player_id(), sVar3);
				func_1369(4, 1);
				func_1379(3);
			}
			break;
		case 3:
			if (!func_1361(512, 1) && _0x870708a6e147a9ad(Global_1357549->f_1497.f_3, "", (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), 388, 0, 0, 0, 0, -1))
			{
				func_1369(512, 1);
				func_1412(Global_1357549->f_1497, 51, 1);
				set_ped_config_flag(Global_1357549->f_1497.f_3, 330, true);
			}
			if (!is_any_speech_playing(Global_1357549->f_1497.f_3))
			{
				func_1379(4);
			}
			break;
		case 4:
			if (!func_1361(512, 1) && _0x870708a6e147a9ad(Global_1357549->f_1497.f_3, "", (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), (Global_1357549->f_1497.f_30 * Global_1357549->f_1497.f_30), 388, 0, 0, 0, 0, -1))
			{
				func_1369(512, 1);
				func_1412(Global_1357549->f_1497, 51, 1);
				set_ped_config_flag(Global_1357549->f_1497.f_3, 330, true);
			}
			if (!func_401(&(Global_1357549->f_1497.f_21)))
			{
				func_397(&(Global_1357549->f_1497.f_21), 1);
			}
			else
			{
				bVar4 = false;
				vVar5 = { get_entity_coords(Global_1357549->f_1497.f_3, true, false) };
				if (is_any_speech_playing(player_ped_id()))
				{
					func_1379(5);
					bVar4 = true;
				}
				else if ((!func_2668(player_id(), Global_1357549->f_1497.f_3) && func_1377(&(Global_1357549->f_1497.f_21)) > 7000) || vdist2(Global_36, vVar5) > ((Global_1357549->f_1497.f_30 + 5f) * (Global_1357549->f_1497.f_30 + 5f)))
				{
					func_1379(7);
					bVar4 = true;
				}
				if (bVar4)
				{
					func_399(&(Global_1357549->f_1497.f_21));
					_0xc6366a585659d15c(player_id(), 0);
					func_375(Global_1357549->f_1497, 51, 1);
					set_ped_config_flag(Global_1357549->f_1497.f_3, 330, false);
					_0xe98d55c5983f2509(Global_1357549->f_1497.f_3);
				}
			}
			break;
		case 5:
			if (!is_any_speech_playing(player_ped_id()))
			{
				func_1379(6);
			}
			break;
		case 6:
			func_1402(Global_1357549->f_1497.f_3, "SCOUT_GREET", -1454469014, player_ped_id(), 1, 0, 0, 1);
			func_1379(7);
			break;
		case 7:
			if (!func_401(&(Global_1357549->f_1497.f_21)))
			{
				func_397(&(Global_1357549->f_1497.f_21), 1);
			}
			else if (func_1377(&(Global_1357549->f_1497.f_21)) > 5000)
			{
				func_1379(8);
			}
			break;
		case 8:
			func_2635();
			return true;
	}
	return false;
}

bool func_1398(int iParam0, int iParam1)
{
	iVar0 = -1;
	iVar1 = -1;
	if (func_2669(iParam0, &iVar0, &iVar1, 1))
	{
		*iParam1 = iVar0;
		return true;
	}
	*iParam1 = -1;
	return false;
}

bool func_1399(int iParam0)
{
	if (!_0x800df3fc913355f3(Global_1357549->f_1497.f_4))
	{
		func_1362(12);
		return false;
	}
	if (!func_1391(iParam0))
	{
		return false;
	}
	if (!_0xa8120ebeaf290c7a(Global_1357549->f_1497.f_4))
	{
		return false;
	}
	if (!func_1400())
	{
		return false;
	}
	_0x631cd2d77fdc0316(Global_1357549->f_1497.f_4);
	return true;
}

bool func_1400()
{
	if (!func_2670(Global_1357549->f_1497))
	{
		return false;
	}
	sVar0 = _0xceb40b678e403759(func_1410(Global_1357549->f_1497));
	return are_strings_equal(sVar0, func_2671(Global_1357549->f_1497.f_9));
}

float func_1401(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_1820(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_1402(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_2672(iParam0, &Var0);
}

Vector3 func_1403(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		default:
			break;
	}
	return func_2673(func_1614(iParam0), 0);
}

float func_1404(int iParam0)
{
	if (!func_1301(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

bool func_1405(float fParam0)
{
	if (func_2674(Global_1357549->f_1497.f_3, &uVar0))
	{
		Global_1357549->f_1497.f_31 = uVar0;
		task_follow_nav_mesh_to_coord(Global_1357549->f_1497.f_3, *Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31], fParam0, -1, 0.25f, 0, 40000f);
		return true;
	}
	if (Global_1357549->f_1497.f_6 != 8)
	{
		if (!func_1399(Global_1357549->f_1497.f_32[Global_1357549->f_1497.f_31]->f_4))
		{
			return false;
		}
	}
	set_ped_min_move_blend_ratio(Global_1357549->f_1497.f_3, fParam0);
	return true;
}

bool func_1406(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1820(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1407(bool bParam0, bool bParam1)
{
	if ((does_entity_exist(Global_1357549->f_1497.f_3) && _does_scenario_point_exist(Global_1357549->f_1497.f_109)) && _0x9c54041bb66bcf9e(Global_1357549->f_1497.f_3, Global_1357549->f_1497.f_109))
	{
		clear_ped_tasks(Global_1357549->f_1497.f_3, 1, 0);
	}
	func_2675(Global_1357549->f_1497, func_403(), 1);
	StringCopy(&(Global_1357549->f_1497.f_9), "", 64);
	if (bParam0)
	{
		func_2676(bParam1);
	}
	if (_0x800df3fc913355f3(Global_1357549->f_1497.f_4))
	{
		if (!_0xa8120ebeaf290c7a(Global_1357549->f_1497.f_4))
		{
			return false;
		}
		_0x631cd2d77fdc0316(Global_1357549->f_1497.f_4);
	}
	return true;
}

char* func_1408(int iParam0, bool bParam1)
{
	iVar0 = func_335();
	StringCopy(&cVar1, "", 128);
	if (!func_1363(iVar0))
	{
		return "";
	}
	StringCopy(&cVar1, func_2677(iVar0), 128);
	if (is_string_null_or_empty(func_2678(cVar1)))
	{
		return "";
	}
	StringConCat(&cVar1, "/", 128);
	StringConCat(&cVar1, func_2679(iVar0), 128);
	if (bParam1)
	{
		StringConCat(&cVar1, "_scout_cooldown", 128);
	}
	else if (Global_1357549->f_1497 == 2 && iVar0 == 0)
	{
		StringConCat(&cVar1, "_guard_javier", 128);
	}
	else
	{
		StringConCat(&cVar1, "_guard_patrol_entry_", 128);
		if (iParam0 < 0 || iParam0 > 3)
		{
			iParam0 = 0;
		}
		_int_to_string(iParam0, "%d", &cVar17);
		StringConCat(&cVar1, &cVar17, 128);
	}
	return func_2678(cVar1);
}

bool func_1409(int iParam0, char[32] cParam1, int iParam9)
{
	if (is_string_null_or_empty(&cParam1))
	{
		return false;
	}
	if (!func_1301(iParam0))
	{
		return false;
	}
	iVar0 = func_1410(iParam0);
	if (iVar0 != 0 && func_1316(iParam0))
	{
		(*Global_1360165)[iParam0]->f_39 = { cParam1 };
		_0x187d65f3aec5d679(iVar0, &cParam1);
		func_1412(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_630();
			func_1219(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0]->f_46 = iVar1;
			Global_40.f_4942[iParam0]->f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0]->f_46 = -15;
			Global_40.f_4942[iParam0]->f_49 = 0;
		}
		(*Global_1360165)[iParam0]->f_56 = 1;
		return true;
	}
	return false;
}

int func_1410(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

bool func_1411(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_1386(iParam0, 0);
	func_1383(iParam0, 1);
	if (func_1300(iParam0))
	{
		iVar0 = func_1303(iParam0);
		if (does_entity_exist(iVar0))
		{
			_set_entity_something(iVar0, false);
			set_ped_config_flag(iVar0, 48, false);
			_0x85f500f4e24ca43e(iVar0, (*Global_1360165)[iParam0]->f_138);
		}
		func_1385(iParam0, 1, 1, 1);
	}
	if (bParam1)
	{
		if (!func_1407(bParam2, bParam3))
		{
			return false;
		}
	}
	return true;
}

void func_1412(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1301(iParam0))
		{
			return;
		}
	}
	func_1302(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1413()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_2680(-1, 1, Global_40.f_4237[iVar0]);
		iVar0++;
	}
}

void func_1414(int iParam0)
{
	if (!func_1300(iParam0))
	{
		return;
	}
	func_2680(iParam0, 0, &(Global_40.f_4942[iParam0]->f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_2680(iParam0, 0, Global_40.f_4942[iParam0]->f_11[iVar0]);
		iVar0++;
	}
}

void func_1415(int iParam0, int iParam1)
{
	iVar0 = func_2681(iParam0);
	Global_1357549->f_578 = func_2682(iParam0, &iVar0);
	switch (iParam1)
	{
		case 1:
			func_2683(iParam0);
			iVar1 = func_2684();
			if (iVar1 != 0)
			{
				func_2685(iVar1);
			}
			iVar1 = func_395(5);
			if (iVar1 != 0)
			{
				func_2686(iVar1);
			}
			iVar1 = func_395(3);
			if (iVar1 != 0)
			{
				func_2687(iVar1);
			}
			iVar1 = func_395(1);
			if (iVar1 != 0)
			{
				func_2688(iVar1);
			}
			iVar1 = func_395(6);
			if (iVar1 != 0)
			{
				func_2689(iVar1);
			}
			break;
		case 2:
			func_2690(iParam0);
			iVar1 = func_395(3);
			if (iVar1 != 0)
			{
				func_2691(iVar1);
			}
			break;
	}
}

void func_1416(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (&Global_1357549->f_1252[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	iVar2 = ((Global_1357549->f_1483 - 1) - iParam0);
	if (iVar2 < 0)
	{
		iVar1 = iParam0 + 1;
		while (iVar1 <= (iVar0 + iParam0))
		{
			iVar6 = (iVar1 + iVar2);
			if (iVar6 >= 50 || iVar1 >= 50)
			{
			}
			else
			{
				_copy_memory(Global_1357549->f_1252[iVar6], Global_1357549->f_1252[iVar1], 3);
				vVar3.f_2 = 0;
				vVar3.x = 0;
				vVar3.f_1 = 0;
				_copy_memory(Global_1357549->f_1252[iVar1], &vVar3, 3);
				iVar1++;
			}
		}
	}
	else if (iVar2 > 0)
	{
		iVar1 = (iVar0 + iParam0);
		while (iVar1 >= iParam0 + 1)
		{
			iVar7 = (iVar1 + iVar2);
			if (iVar7 >= 50 || iVar1 >= 50)
			{
			}
			else
			{
				_copy_memory(Global_1357549->f_1252[iVar7], Global_1357549->f_1252[iVar1], 3);
				vVar3.f_2 = 0;
				vVar3.x = 0;
				vVar3.f_1 = 0;
				_copy_memory(Global_1357549->f_1252[iVar1], &vVar3, 3);
				iVar1 = (iVar1 + -1);
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1357549->f_1483)
	{
		_copy_memory(Global_1357549->f_1252[iVar1], Global_1357549->f_1407[iVar1], 3);
		iVar1++;
	}
	Global_1357549->f_1406 = (Global_1357549->f_1406 + iVar2);
	if (Global_1357549->f_1406 < 0)
	{
		Global_1357549->f_1406 = 0;
	}
	Global_1357549->f_1403 = (Global_1357549->f_1403 + Global_1357549->f_1483);
	Global_1357549->f_1483 = 0;
}

void func_1417(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1420(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_2581(2, *uParam0);
		}
		else
		{
			func_2582(2, *uParam0);
		}
	}
	func_2692(uParam0);
}

void func_1418(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		case 1:
			return -432333475;
		case 2:
			return 2093317438;
		case 3:
			return -1327067584;
		case 4:
			return -145951480;
		case 5:
			return -2045110373;
		case 6:
			return 2092390181;
		case 7:
			return -1192044061;
		case 8:
			return 1206762561;
		default:
			break;
	}
	return 991030100;
}

void func_1420(int iParam0, bool bParam1)
{
	func_2693(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

void func_1421(int iParam0)
{
	if (Global_1357549->f_1896)
	{
		return;
	}
	switch (iParam0)
	{
		case -558867971:
			if (!func_410())
			{
				Global_1327590->f_19735 = 1;
				func_2694(10, 0);
				Global_1357549->f_1896 = 1;
			}
			break;
		case -2082302444:
			if (!func_410())
			{
				func_2694(0, 0);
				Global_1357549->f_1896 = 1;
			}
			break;
		case -1866112883:
			if (!func_357(3) && !func_1234(3))
			{
				if (!func_410())
				{
					func_2694(1, 0);
					Global_1357549->f_1896 = 1;
				}
			}
			break;
		case 1328264128:
			if (!func_357(3) && !func_1234(3))
			{
				if (!func_410())
				{
					func_2694(2, 0);
					Global_1357549->f_1896 = 1;
				}
			}
			break;
	}
}

Vector3 func_1422()
{
	if (func_767(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_767(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_1423(int iParam0, var uParam1, int iParam2)
{
	Var0 = Global_1357549->f_576;
	iVar5 = func_2695(iParam0);
	iVar6 = -1651099034;
	iVar7 = iVar5;
	iVar26 = func_403();
	iVar28 = func_335();
	iVar29 = func_1410(iParam0);
	if (is_screen_faded_out())
	{
		iParam2 = 60;
	}
	iVar30 = *uParam1;
	iVar31 = (iVar30 + iParam2);
	if (iVar31 >= 60)
	{
		iVar31 = 59;
	}
	*uParam1 = iVar30;
	while (*uParam1 <= iVar31)
	{
		if (&Global_40.f_4283.f_6[*uParam1] == 176656832)
		{
			return true;
		}
		iVar32 = func_2681(&(Global_40.f_4283.f_6[*uParam1]));
		Global_1357549->f_578 = func_2682(&(Global_40.f_4283.f_6[*uParam1]), &iVar32);
		Var0.f_1 = Global_1357549->f_578;
		iVar27 = func_2696(&(Global_40.f_4283.f_6[*uParam1]));
		if (iVar27 != iVar28)
		{
		}
		else
		{
			iVar25 = func_1614(iVar27);
			if (iVar25 == -1)
			{
				iVar25 = iVar26;
			}
			sVar24 = func_2697(iVar25);
			Var0.f_3 = iVar7;
			if (func_2698(Var0, iVar6, &cVar8, 0))
			{
				StringCopy(&cVar16, sVar24, 64);
				StringConCat(&cVar16, "/", 64);
				StringConCat(&cVar16, &cVar8, 64);
				Global_40.f_4942[iParam0]->f_51 = { cVar16 };
				if (!func_372(iParam0, 17, 1))
				{
					_0x187d65f3aec5d679(iVar29, &(Global_40.f_4942[iParam0]->f_51));
				}
				(*Global_1360165)[iParam0]->f_47 = 0;
				(*Global_1360165)[iParam0]->f_56 = 1;
				return true;
			}
		}
		*uParam1++;
	}
	return *uParam1 >= 60;
}

bool func_1424(var uParam0)
{
	return func_1426(*uParam0, 2);
}

float func_1425()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_1426(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1427()
{
	return Global_1327590->f_5;
}

void func_1428(int iParam0)
{
	Global_1327590->f_6 = 0;
	Global_1327590->f_7 = iParam0;
}

void func_1429(int iParam0)
{
	Global_1327590->f_5 = iParam0;
}

bool func_1430()
{
	if (!func_2699())
	{
		return false;
	}
	Var0 = Global_1327590->f_19720;
	uVar5 = Var0.f_1;
	iVar19 = func_1441();
	iVar20 = func_1442();
	iVar17 = iVar19;
	while (iVar17 <= iVar20)
	{
		if (iVar17 >= 673)
		{
			return true;
		}
		iVar18 = iVar17;
		Var0.f_1 = uVar5;
		Var0.f_2 = 1604180342;
		Var0.f_3 = get_hash_key(func_2700(iVar18));
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
		}
		else
		{
			Global_1327590->f_23[iVar18] = 1;
			if (func_2701(iVar18))
			{
				Global_1327590->f_23[iVar18]->f_1 = 1;
			}
			else if (func_2702(iVar18))
			{
				Global_1327590->f_23[iVar18]->f_1 = 2;
			}
			else if (func_2703(iVar18))
			{
				Global_1327590->f_23[iVar18]->f_1 = 3;
			}
			else
			{
				Global_1327590->f_23[iVar18]->f_1 = 0;
			}
			Var0.f_2 = -657975000;
			if (_datafile_get_string(&Var8, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_2 = { Var8 };
			}
			Var0.f_2 = 1085469397;
			if (_datafile_get_float(&uVar7, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_10 = uVar7;
			}
			Var0.f_2 = -1535977529;
			if (_datafile_get_float(&uVar7, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_11 = uVar7;
			}
			Var0.f_2 = -1060281697;
			if (_datafile_get_float(&uVar7, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_12 = uVar7;
			}
			Var0.f_2 = -1800491381;
			if (_datafile_get_int(&iVar6, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_13 = iVar6;
			}
			Var0.f_2 = 35230954;
			if (_datafile_get_hash(&iVar6, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_14 = iVar6;
			}
			Var0.f_2 = -1556005224;
			iVar16 = 0;
			while (iVar16 < 8)
			{
				Var0.f_3 = iVar16;
				if (!_datafile_get_hash(&iVar6, &Var0))
				{
				}
				else
				{
					iVar21 = func_2705(func_2704(iVar6));
					func_2706(&(Global_1327590->f_23[iVar18]->f_15), iVar21);
					iVar16++;
				}
			}
			Var0.f_2 = 1185638752;
			if (_datafile_get_int(&iVar6, &Var0))
			{
				Global_1327590->f_23[iVar18]->f_16 = iVar6;
			}
		}
		iVar17++;
	}
	func_1444();
	return false;
}

void func_1431()
{
	func_1428(5);
	iVar0 = 0;
	while (iVar0 < 673)
	{
		Global_1327590->f_11465[iVar0] = 0;
		Global_1327590->f_11465[iVar0]->f_1 = { 0f, 0f, 0f };
		Global_1327590->f_11465[iVar0]->f_4 = 0;
		iVar0++;
	}
}

bool func_1432()
{
	if (func_1433())
	{
		return false;
	}
	switch (Global_1327590->f_19621)
	{
		case 0:
			iVar0 = -1936878978;
			break;
		case 1:
			iVar0 = 302312027;
			break;
		case 2:
			iVar0 = -1454245585;
			break;
		case 3:
			iVar0 = -1848560923;
			break;
		case 5:
			iVar0 = 793894114;
			break;
		case 6:
			iVar0 = 2036766930;
			break;
		case 8:
			iVar0 = 187571349;
			break;
		default:
			return false;
	}
	Global_1327590->f_19721 = _0xd97d8d905f1562f2(iVar0);
	return true;
}

bool func_1433()
{
	return _0x603ac35fd4602c76(Global_1327590->f_19721);
}

void func_1434()
{
	_datafile_register_query(Global_1327590->f_19721, -1748561602, "vignetteData/vignettes/vignette(%i)");
	_datafile_register_query(Global_1327590->f_19721, -1497239028, ":name");
	_datafile_register_query(Global_1327590->f_19721, -967686513, ":rootPos");
	_datafile_register_query(Global_1327590->f_19721, -702911531, ":flowEnabled");
}

bool func_1435()
{
	if (!func_1433())
	{
		return true;
	}
	Var0 = Global_1327590->f_19721;
	uVar5 = Var0.f_1;
	iVar13 = func_1441();
	iVar14 = func_1442();
	iVar11 = iVar13;
	while (iVar11 <= iVar14)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = -1748561602;
		Var0.f_3 = iVar11;
		if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return true;
		}
		Var0.f_2 = -1497239028;
		if (!_datafile_get_hash(&iVar6, &Var0))
		{
		}
		else
		{
			iVar12 = func_2707(iVar6);
			if (iVar12 == -1)
			{
			}
			else
			{
				Global_1327590->f_11465[iVar12] = 1;
				Var0.f_2 = -967686513;
				if (_datafile_get_vector(&vVar8, &Var0))
				{
					Global_1327590->f_11465[iVar12]->f_1 = { vVar8 };
				}
				Var0.f_2 = -702911531;
				if (_datafile_get_bool(&uVar7, &Var0))
				{
					Global_1327590->f_11465[iVar12]->f_4 = uVar7;
				}
				else
				{
					Global_1327590->f_11465[iVar12]->f_4 = 1;
				}
			}
		}
		iVar11++;
	}
	func_1444();
	return false;
}

bool func_1436()
{
	return Global_1327590->f_10 != -1;
}

void func_1437()
{
	iVar0 = 0;
	while (iVar0 < 673)
	{
		Global_1327590->f_11465[iVar0]->f_6 = 0;
		Global_1327590->f_11465[iVar0]->f_7 = 0;
		Global_1327590->f_11465[iVar0]->f_8 = 0;
		Global_1327590->f_18199[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_1327590->f_19622[iVar1]->f_2 = 0;
		Global_1327590->f_19622[iVar1]->f_4 = 0;
		Global_1327590->f_19622[iVar1]->f_6 = 0;
		Global_1327590->f_19622[iVar1]->f_8 = 0;
		Global_1327590->f_19622[iVar1]->f_11 = 0;
		Global_1327590->f_19622[iVar1]->f_13 = 0;
		Global_1327590->f_19622[iVar1]->f_10 = 0;
		iVar1++;
	}
	Global_1327590->f_19725 = 0;
	Global_1327590->f_19726 = 0;
}

bool func_1438()
{
	Global_1327590->f_19723 = 0;
	if (Global_1327590->f_19725 < 0 || Global_1327590->f_19725 >= 60)
	{
		return false;
	}
	iVar0 = &Global_40.f_4283.f_6[Global_1327590->f_19725];
	if (iVar0 == 176656832)
	{
		return false;
	}
	Var1 = Global_1357549->f_576;
	Var1.f_1 = Global_1357549->f_577;
	Var1.f_2 = 1032438694;
	Var1.f_3 = iVar0;
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		return true;
	}
	Var1.f_2 = 367288306;
	if (!_datafile_get_int(&(Global_1327590->f_19724), &Var1))
	{
		return true;
	}
	Var1.f_2 = 1390301875;
	if (!_datafile_get_data_node_index(&(Global_1327590->f_19722), &Var1))
	{
	}
	Var1.f_2 = 730646859;
	if (!_datafile_get_data_node_index(&(Global_1327590->f_19723), &Var1))
	{
	}
	return true;
}

bool func_1439()
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = Global_1327590->f_19722;
	iVar7 = 0;
	while (iVar7 < 4)
	{
		Var0.f_3 = iVar7;
		Var0.f_2 = -1715662773;
		if (!_datafile_get_hash(&iVar5, &Var0))
		{
			return true;
		}
		iVar6 = func_2708(iVar5);
		if (iVar6 < 0 || iVar6 > 3)
		{
		}
		else
		{
			Var0.f_2 = -99632347;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_2 = iVar5;
			}
			Var0.f_2 = 290349293;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_4 = iVar5;
			}
			Var0.f_2 = 1192477482;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_6 = iVar5;
			}
			Var0.f_2 = 550828398;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_8 = iVar5;
			}
			Var0.f_2 = -176494405;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_11 = iVar5;
				Global_1327590->f_19622[iVar6]->f_10 = iVar5;
			}
			Var0.f_2 = 1087786295;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_12 = iVar5;
			}
			Var0.f_2 = 1066925324;
			if (_datafile_get_int(&iVar5, &Var0))
			{
				Global_1327590->f_19622[iVar6]->f_13 = iVar5;
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1440()
{
	if (Global_1327590->f_19726 < 0 || Global_1327590->f_19726 >= 673)
	{
		return true;
	}
	Var0 = Global_1357549->f_576;
	Var0.f_1 = Global_1327590->f_19723;
	iVar8 = func_1441();
	iVar9 = func_1442();
	iVar6 = iVar8;
	while (iVar6 <= iVar9)
	{
		Var0.f_3 = iVar6;
		Var0.f_2 = 161473965;
		if (!_datafile_get_hash(&iVar5, &Var0))
		{
			return true;
		}
		iVar7 = func_2707(iVar5);
		if (iVar7 == -1)
		{
		}
		else if (!&Global_1327590->f_11465[iVar7] || !Global_1327590->f_11465[iVar7]->f_4)
		{
		}
		else
		{
			Var0.f_2 = -407988477;
			if (!_datafile_get_hash(&iVar5, &Var0))
			{
				if (!Global_1327590->f_11465[iVar7]->f_7)
				{
					if (Global_1327590->f_11465[iVar7]->f_6)
					{
						Global_1327590->f_11465[iVar7]->f_8 = func_2709(Global_1327590->f_11465[iVar7]->f_8, Global_1327590->f_19724);
					}
					else
					{
						Global_1327590->f_18199[Global_1327590->f_19726] = iVar7;
						Global_1327590->f_11465[iVar7]->f_6 = 1;
						Global_1327590->f_11465[iVar7]->f_8 = func_2709(Global_1327590->f_11465[iVar7]->f_8, Global_1327590->f_19724);
						Global_1327590->f_19726++;
					}
				}
			}
			else if (iVar5 == -1722884127)
			{
				Global_1327590->f_11465[iVar7]->f_7 = 1;
			}
			else if (iVar5 == 342945216)
			{
				Global_1327590->f_11465[iVar7]->f_8 = func_2709(Global_1327590->f_11465[iVar7]->f_8, Global_1327590->f_19724);
			}
		}
		iVar6++;
	}
	func_1444();
	return false;
}

int func_1441()
{
	return (Global_1327590->f_6 * Global_1327590->f_7);
}

int func_1442()
{
	return (func_1441() + (Global_1327590->f_7 - 1));
}

int func_1443(int iParam0)
{
	fVar0 = func_2710(iParam0);
	fVar1 = func_2711(iParam0);
	iVar2 = get_clock_hours();
	if (fVar1 > fVar0)
	{
		if (IntToFloat(iVar2) >= fVar0 && IntToFloat(iVar2) < fVar1)
		{
			return 1;
		}
	}
	else if (IntToFloat(iVar2) >= fVar0 || IntToFloat(iVar2) < fVar1)
	{
		return 1;
	}
	return 0;
}

void func_1444()
{
	Global_1327590->f_6++;
}

void func_1445()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		func_1463(iVar0);
		iVar0++;
	}
}

void func_1446()
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&(Global_1327590->f_19615), &Var0, 6);
}

void func_1447()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] != -1)
		{
			func_2712(iVar0);
		}
		iVar0++;
	}
}

void func_1448(int iParam0)
{
	Global_1327590->f_4 = iParam0;
}

int func_1449()
{
	return Global_1327590->f_4;
}

int func_1450()
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_1459(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1451(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590->f_19574);
}

bool func_1452()
{
	if (func_2713(2))
	{
		return false;
	}
	if (func_2713(1))
	{
		return false;
	}
	if (func_272(6, 0, 1) && !Global_1327590->f_19734)
	{
		return false;
	}
	if (func_2714())
	{
		return false;
	}
	if (func_391(4))
	{
		return false;
	}
	return true;
}

bool func_1453()
{
	Global_1327590->f_19679.f_2 = 0;
	Global_1327590->f_19679.f_1 = 0;
	Global_1327590->f_19679 = func_2715();
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_18873)
	{
		Global_1327590->f_18873[iVar0] = -1;
		iVar0++;
	}
	return true;
}

bool func_1454(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		iVar2 = func_1441();
		iVar3 = func_1442();
	}
	else
	{
		iVar2 = 0;
		iVar3 = 23;
	}
	iVar0 = iVar2;
	while (iVar0 <= iVar3)
	{
		iVar1 = iVar0;
		if (!func_1300(iVar1))
		{
			return true;
		}
		bVar4 = false;
		iVar5 = func_2705(iVar1);
		if (func_2716(iVar1, 0, 0))
		{
			bVar4 = true;
		}
		if (!bParam0)
		{
			if ((*Global_1360165)[iVar1]->f_62 == -289447566)
			{
				bVar4 = false;
			}
		}
		if (bParam2)
		{
			if (!func_2717(iVar1))
			{
				bVar4 = false;
			}
		}
		if (!func_2718(func_1303(iVar1)))
		{
			bVar4 = false;
		}
		if (func_2719(iVar1))
		{
			bVar4 = false;
		}
		if (func_2720(func_1303(iVar1), Global_35, 28, -1, 0, 0, 5))
		{
			bVar4 = false;
		}
		switch (Global_1327590->f_19621)
		{
			case 1:
				switch (iVar1)
				{
					case 21:
						if (func_2636(1863892775, 1))
						{
							bVar4 = false;
						}
						break;
				}
				break;
			case 2:
				switch (iVar1)
				{
					case 17:
						if (func_2636(-72799657, 1))
						{
							bVar4 = false;
						}
						break;
				}
				break;
		}
		if (!bVar4)
		{
			func_2721(&(Global_1327590->f_19688), iVar5);
			func_2721(&(Global_1327590->f_19689), iVar5);
			func_2721(&(Global_1327590->f_19690), iVar5);
			func_2721(&(Global_1327590->f_19691), iVar5);
		}
		else
		{
			if (!func_2637(iVar1, 8, 1))
			{
				func_2706(&(Global_1327590->f_19688), iVar5);
			}
			else
			{
				func_2721(&(Global_1327590->f_19688), iVar5);
			}
			if (!func_2637(iVar1, 16, 1))
			{
				func_2706(&(Global_1327590->f_19689), iVar5);
			}
			else
			{
				func_2721(&(Global_1327590->f_19689), iVar5);
			}
			if (!func_2637(iVar1, 32, 1))
			{
				func_2706(&(Global_1327590->f_19690), iVar5);
			}
			else
			{
				func_2721(&(Global_1327590->f_19690), iVar5);
			}
			if (!func_2637(iVar1, -2147483648, 1))
			{
				func_2706(&(Global_1327590->f_19691), iVar5);
			}
			else
			{
				func_2721(&(Global_1327590->f_19691), iVar5);
			}
		}
		iVar0++;
	}
	if (iVar1 >= 26)
	{
		return true;
	}
	func_1444();
	return false;
}

bool func_1455()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1327590->f_19622[iVar0] = 1;
		if (func_2722(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		if (func_2723(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		if (func_2724(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		if (func_2725(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		if (!func_2726(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		if (!func_2727(iVar0))
		{
			Global_1327590->f_19622[iVar0] = 0;
		}
		iVar0++;
	}
	return true;
}

bool func_1456()
{
	iVar1 = func_1441();
	iVar2 = func_1442();
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (iVar0 >= Global_1327590->f_18199)
		{
			return true;
		}
		iVar3 = &Global_1327590->f_18199[iVar0];
		if (iVar3 == -1)
		{
			return true;
		}
		func_2728(iVar3);
		iVar0++;
	}
	func_1444();
	return false;
}

bool func_1457()
{
	func_1446();
	if (Global_1327590->f_19679.f_2 <= 0)
	{
		return false;
	}
	iVar0 = get_random_int_in_range(Global_1327590->f_19679.f_1, Global_1327590->f_19679.f_2);
	if (iVar0 < 0 || iVar0 >= Global_1327590->f_18873)
	{
		return false;
	}
	iVar1 = &Global_1327590->f_18873[iVar0];
	if (iVar1 == -1)
	{
		return false;
	}
	func_2729(iVar1, Global_1327590->f_19679);
	return true;
}

int func_1458()
{
	return &(Global_1359453->f_4[Global_1359453->f_3]);
}

bool func_1459(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return false;
	}
	return &Global_1327590->f_19574[iParam0] != -1;
}

bool func_1460(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return false;
	}
	return func_401(&(Global_1327590->f_19574[iParam0]->f_4));
}

void func_1461(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return;
	}
	func_1615(&(Global_1327590->f_19574[iParam0]->f_4), 0f);
}

bool func_1462(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return false;
	}
	return func_1373(&(Global_1327590->f_19574[iParam0]->f_4)) >= IntToFloat(Global_1327590->f_19574[iParam0]->f_7);
}

void func_1463(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return;
	}
	func_2730(iParam0);
	uVar0 = -1;
	_copy_memory(Global_1327590->f_19574[iParam0], &uVar0, 8);
}

bool func_1464(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return false;
	}
	if (!func_1459(iParam0))
	{
		return false;
	}
	iVar0 = func_2731(iParam0);
	if (func_1358(iVar0))
	{
		return false;
	}
	if (Global_1327590->f_19574[iParam0]->f_1)
	{
		return true;
	}
	if (!func_2732(iVar0, 10, 1, 1))
	{
		return false;
	}
	if (func_2733(iVar0))
	{
		return false;
	}
	return true;
}

void func_1465(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return;
	}
	if (!func_1459(iParam0))
	{
		return;
	}
	iVar0 = 10;
	func_2729(&(Global_1327590->f_19574[iParam0]), iVar0);
	Global_1327590->f_19615.f_2 = Global_1327590->f_19574[iParam0]->f_3;
	Global_1327590->f_19615.f_5 = Global_1327590->f_19574[iParam0]->f_2;
	Global_1327590->f_19615.f_3 = 1;
}

bool func_1466()
{
	if (!func_2734())
	{
		return false;
	}
	Var0 = { func_2735() };
	if (!func_2630(Var0))
	{
		return false;
	}
	if (!does_script_exist(&(Global_1327590->f_23[Var0]->f_2)))
	{
		return false;
	}
	request_script(&(Global_1327590->f_23[Var0]->f_2));
	return true;
}

bool func_1467()
{
	Var0 = { func_2735() };
	if (!has_script_loaded(&(Global_1327590->f_23[Var0]->f_2)))
	{
		return false;
	}
	return true;
}

bool func_1468()
{
	Var0 = { func_2735() };
	Var0.f_1 = func_2736(Var0);
	if (Var0.f_1 < 0)
	{
		return false;
	}
	Global_1327590->f_19547[Var0.f_1]->f_2 = start_new_script_with_args(&(Global_1327590->f_23[Var0]->f_2), &Var0, 6, 6004);
	set_script_as_no_longer_needed(&(Global_1327590->f_23[Var0]->f_2));
	func_2737(Var0);
	func_2738(Var0);
	return true;
}

int func_1469()
{
	return Global_1327590->f_19615;
}

bool func_1470(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] == iParam0)
		{
			return Global_1327590->f_19547[iVar0]->f_3;
		}
		iVar0++;
	}
	return false;
}

int func_1471(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0] == iParam0)
		{
			return Global_1327590->f_19547[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1472(int iParam0)
{
	return iParam0 != 0;
}

void func_1473(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	func_1155(&(Global_1393237->f_11[iParam0]->f_10), iParam1);
}

int func_1474(int iParam0)
{
	if (!func_2739(iParam0))
	{
		return 0;
	}
	if (func_1477(iParam0))
	{
		return 1;
	}
	return 2;
}

void func_1475(int iParam0, int iParam1)
{
	Global_1425247->f_12[iParam0] = iParam1;
}

int func_1476(int iParam0)
{
	return &(Global_1425247->f_12[iParam0]);
}

bool func_1477(int iParam0)
{
	return (((func_2740() || func_2741()) || func_2105(&(Global_1425247->f_3), iParam0, 2)) || func_2742(iParam0));
}

void func_1478(int iParam0)
{
	func_2743(iParam0);
}

void func_1479()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = iVar0;
		func_2744(iVar1, 1);
		iVar0++;
	}
	if (_unlock_is_unlocked(-1504859554))
	{
		func_740(480079517, 8, 1, 0, 0, 752097756, 0, 0, 0, 1);
		func_740(840671577, 8, 1, 0, 0, 752097756, 0, 0, 0, 1);
	}
}

void func_1480(int iParam0, var uParam1)
{
	iVar7 = -1;
	iVar8 = -1;
	iVar1 = func_2745(iParam0);
	if (iVar1 <= 0)
	{
		return;
	}
	bVar9 = func_2746(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_2747(iParam0, iVar0);
		iVar4 = func_2748(iVar2);
		iVar3 = func_2749(iVar2);
		if (!_unlock_is_unlocked(iVar3))
		{
			_unlock_set_unlocked(iVar3, true);
			func_2750(iVar2);
		}
		if (has_ped_got_weapon(Global_35, iVar3, 0, false))
		{
			func_2751(iVar2);
		}
		iVar5 = get_weapontype_group(iVar3);
		if (func_2752(iVar5, &iVar6, Global_43891, bVar9, iVar7, iVar8))
		{
			_give_weapon_to_ped_2(Global_35, iVar3, 500, true, false, iVar6, false, 0.5f, 1f, 752097756, true, 0f, false);
			if (func_2753(iVar3))
			{
				if (iVar6 == 0 || iVar6 == 2)
				{
					iVar7 = 0;
				}
				else if (iVar6 == 1 || iVar6 == 3)
				{
					iVar7 = 1;
				}
				else
				{
					iVar7 = -1;
				}
			}
			if (func_2754(iVar3))
			{
				if (iVar6 == 9 || iVar6 == 7)
				{
					iVar8 = 2;
				}
				else if (iVar6 == 10 || iVar6 == 8)
				{
					iVar8 = 3;
				}
				else
				{
					iVar8 = -1;
				}
			}
		}
		else
		{
			*uParam1 = 1;
		}
		func_740(iVar3, 1, func_2755(iVar6), 0, 0, 752097756, 0, 0, 0, 0);
		func_2744(iVar4, 1);
		func_2756(iVar3);
		iVar0++;
	}
}

void func_1481(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		_0xdd1232b332cbb9e7(1, 1, 0);
	}
	func_89(func_2757(iParam0), 10000, 0, 0, 0, 1);
}

void func_1482(int iParam0)
{
	iVar1 = func_2745(iParam0);
	if (iVar1 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_2747(iParam0, iVar0);
		iVar3 = func_2749(iVar2);
		if (!has_ped_got_weapon(Global_35, iVar3, 0, false))
		{
		}
		else if (func_2758(iVar2))
		{
		}
		else
		{
			func_947(iVar3, 1, 1, -142743235, 0);
			remove_weapon_from_ped(Global_35, iVar3, true, -142743235);
			if (func_2753(iVar3))
			{
				if (!bVar6 && !func_2759(&iVar4, &uVar5))
				{
					_give_weapon_to_ped_2(Global_35, 379542007, 100, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
					bVar6 = true;
				}
			}
		}
		iVar0++;
	}
}

void func_1483(int iParam0)
{
	iVar1 = func_2745(iParam0);
	iVar6 = -1;
	iVar7 = -1;
	if (iVar1 <= 0)
	{
		return;
	}
	bVar8 = func_2746(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_2747(iParam0, iVar0);
		iVar3 = func_2749(iVar2);
		iVar4 = get_weapontype_group(iVar3);
		if (has_ped_got_weapon(Global_35, iVar3, 0, false))
		{
		}
		else
		{
			if (func_2752(iVar4, &iVar5, Global_43891, bVar8, iVar6, iVar7))
			{
				_give_weapon_to_ped_2(Global_35, iVar3, 500, true, false, iVar5, false, 0.5f, 1f, 752097756, true, 0f, false);
				if (func_2753(iVar3))
				{
					if (iVar5 == 0 || iVar5 == 2)
					{
						iVar6 = 0;
					}
					else if (iVar5 == 1 || iVar5 == 3)
					{
						iVar6 = 1;
					}
					else
					{
						iVar6 = -1;
					}
				}
				if (func_2754(iVar3))
				{
					if (iVar5 == 9 || iVar5 == 7)
					{
						iVar7 = 2;
					}
					else if (iVar5 == 10 || iVar5 == 8)
					{
						iVar7 = 3;
					}
					else
					{
						iVar7 = -1;
					}
				}
			}
			func_740(iVar3, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_1484(int iParam0)
{
	iVar1 = func_2745(iParam0);
	iVar6 = get_player_ped(player_id());
	if (iVar1 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_2747(iParam0, iVar0);
		iVar3 = func_2749(iVar2);
		if (func_2758(iVar2))
		{
			func_2760(iVar2);
		}
		else
		{
			func_947(iVar3, 1, 0, -142743235, 0);
			remove_weapon_from_ped(iVar6, iVar3, true, -142743235);
			if (func_2753(iVar3))
			{
				if (!bVar7 && !func_2759(&iVar4, &uVar5))
				{
					_give_weapon_to_ped_2(Global_35, 379542007, 100, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
					bVar7 = true;
				}
			}
			if (func_2761(iVar2))
			{
				if (_unlock_is_unlocked(iVar3))
				{
					_unlock_set_unlocked(iVar3, false);
					func_2762(iVar2);
				}
			}
		}
		iVar0++;
	}
}

void func_1485(int iParam0)
{
	if (!func_1290(iParam0))
	{
		return;
	}
	func_2763(iParam0);
	func_2764(iParam0);
}

void func_1486()
{
	Global_1425247->f_90.f_1.f_7 = 1;
}

bool func_1487()
{
	return Global_1425247->f_90.f_1.f_7;
}

bool func_1488()
{
	if (func_336())
	{
		return func_767(67);
	}
	return func_767(11);
}

void func_1489()
{
	get_current_ped_weapon(Global_35, &iVar0, true, 3, false);
	if (iVar0 == 0 || iVar0 == -1569615261)
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 1, false);
		if (iVar0 == 0 || iVar0 == -1569615261)
		{
			return;
		}
		if (!_is_weapon_pistol(iVar0) && !_is_weapon_revolver(iVar0))
		{
			return;
		}
	}
	remove_weapon_from_ped(Global_35, iVar0, false, -142743235);
}

void func_1490(int iParam0)
{
	if (!func_1290(iParam0))
	{
		return;
	}
	func_2765(iParam0);
	func_2766(iParam0);
}

void func_1491()
{
	Global_1425247->f_90.f_1.f_7 = 0;
}

void func_1492(bool bParam0)
{
	set_minimap_hide_fow(bParam0);
	if (bParam0)
	{
		_reveal_minimap_fow(0);
	}
	else
	{
		_reset_minimap_fow(0);
	}
}

int func_1493()
{
	return Global_1425247->f_58;
}

void func_1494(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_2767(iParam0, sParam4, iParam5);
	}
	func_2768(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1495()
{
	Global_1425247->f_58 = -1;
}

void func_1496(int iParam0)
{
	if (func_2769(Global_1425247, iParam0, 2))
	{
	}
}

void func_1497(int iParam0)
{
	Global_1911914->f_1579 = iParam0;
	Global_1911914->f_1580 = 1;
}

void func_1498(int iParam0, int iParam1)
{
	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_2770(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_2770(iParam1, iParam0);
	}
}

void func_1499()
{
	iVar0 = (Global_40.f_11095.f_35 * -1);
	func_583(iVar0, 0, 9, -1091304842, 0, 0, 0, 0);
}

void func_1500(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

bool func_1501()
{
	return _0x811a748b1be231ba(player_id()) < _0xbefed69ce8317f91(player_id());
}

void func_1502(int iParam0)
{
	if (func_2771(iParam0))
	{
		iVar1 = func_1507(iParam0);
		iVar0 = func_1508(iVar1);
		if (func_1509(iVar0))
		{
			func_2772(iVar0);
		}
		else
		{
			switch (iVar1)
			{
				case 1:
					func_2773(func_1506());
					break;
				default:
					break;
			}
		}
		func_1511(iVar1, iParam0);
	}
}

void func_1503(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_1485(1);
			func_1490(2);
			func_1490(3);
			func_1490(4);
			func_1490(5);
			break;
		case 2:
			func_1485(1);
			func_1485(2);
			func_1490(3);
			func_1490(4);
			func_1490(5);
			break;
		case 3:
			func_1485(1);
			func_1485(2);
			func_1485(3);
			func_1490(4);
			func_1490(5);
			break;
		case 4:
			func_1485(1);
			func_1485(2);
			func_1485(3);
			func_1485(4);
			func_1490(5);
			break;
		case 5:
			func_1485(1);
			func_1485(2);
			func_1485(3);
			func_1485(4);
			func_1485(5);
			break;
		default:
			break;
	}
}

bool func_1504()
{
	return func_1506() == func_1505();
}

int func_1505()
{
	return Global_1425247->f_90;
}

int func_1506()
{
	if (func_361(5))
	{
		return 5;
	}
	if (func_361(4))
	{
		return 4;
	}
	if (func_361(3))
	{
		return 3;
	}
	if (func_361(2))
	{
		return 2;
	}
	if (func_361(1))
	{
		return 1;
	}
	return 0;
}

int func_1507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return -1;
}

var func_1508(int iParam0)
{
	return &(Global_1425247->f_50[iParam0]);
}

bool func_1509(int iParam0)
{
	return iParam0 != -1;
}

void func_1510()
{
	iVar0 = func_1505();
	if (iVar0 == 0)
	{
		return;
	}
	func_1503(iVar0);
	func_2773(0);
}

void func_1511(int iParam0, int iParam1)
{
	Global_1425247->f_50[iParam0] = iParam1;
}

bool func_1512()
{
	iVar0 = get_player_ped(player_id());
	if (is_ped_on_mount(iVar0))
	{
		iVar1 = get_mount(iVar0);
		return (!is_ped_swimming(iVar1) && !is_ped_swimming_under_water(iVar1));
	}
	else
	{
		return (!is_ped_swimming(iVar0) && !is_ped_swimming_under_water(iVar0));
	}
	return false;
}

void func_1513(int iParam0, bool bParam1)
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

void func_1514(int iParam0)
{
	if (func_82() != -1)
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

void func_1515()
{
	Global_1425247->f_103 = 1;
}

bool func_1516()
{
	return Global_1425247->f_103;
}

void func_1517()
{
	Global_1425247->f_103 = 1;
}

void func_1518(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar0 = func_2774(iParam1);
	if (iParam0 == 0)
	{
		func_2775(0);
	}
	else if (iParam0 == 2)
	{
		func_2776(0);
	}
	else if (iParam0 == 1)
	{
		func_2777(0, bParam3);
	}
	set_attribute_points(Global_35, iParam0, iVar0);
	Global_40.f_11095.f_11[iParam0] = to_float(iVar0);
	if (bParam2)
	{
		func_737(func_2778(iParam0), 0);
		func_2779(iParam0, iParam1, 0);
		func_2780(iParam0, 7000);
	}
}

void func_1519(int iParam0, float fParam1)
{
	iVar0 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_2781(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_2782(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_2783(-1);
			func_2062(0);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0] = fParam1;
			break;
		case 1:
			sVar1 = func_2782(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_2784(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1] = fParam1;
			break;
		case 2:
			sVar1 = func_2782(iParam0);
			if (!animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar1);
			}
			func_2785(-1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2] = fParam1;
			break;
		case 19:
			func_2786(0, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0]->f_1 = fParam1;
			break;
		case 18:
			func_2786(1, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1]->f_1 = fParam1;
			break;
		case 20:
			func_2786(2, 1, 1);
			_set_attribute_overpower_amount(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2]->f_1 = fParam1;
			break;
		default:
			break;
	}
}

int func_1520(int iParam0)
{
	iParam0 = func_1582(iParam0);
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

void func_1521(int iParam0, int iParam1)
{
	iParam0 = func_1582(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1520(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_2787(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_2788(iParam1);
	iVar5 = func_500(iParam0);
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

void func_1522(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_1523(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

float func_1524()
{
	return Global_1935436->f_9;
}

void func_1525(float fParam0)
{
	if ((Global_1357549->f_1495 & 512 != 0 || is_ped_on_mount(Global_35)) || is_ped_in_any_vehicle(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436->f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436->f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436->f_9 = 1f;
	}
	else
	{
		Global_1935436->f_9 = fParam0;
	}
}

void func_1526(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_1527()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_774(iVar0))
		{
			func_2789(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

void func_1528()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_2790(iVar0);
		iVar0++;
	}
}

void func_1529()
{
	if (func_1477(14))
	{
		return;
	}
	if (func_2791(14))
	{
		if (func_1512())
		{
			iVar0 = get_player_ped(player_id());
			if (is_ped_on_mount(iVar0))
			{
				iVar1 = get_mount(iVar0);
				set_ped_reset_flag(iVar1, 6, true);
				set_ped_reset_flag(iVar0, 6, true);
			}
			else
			{
				set_ped_reset_flag(iVar0, 6, true);
			}
		}
	}
}

void func_1530()
{
	iVar0 = func_2792();
	if (iVar0 == -1)
	{
		iVar0 = func_2793();
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (func_2794())
	{
		if (func_2795(iVar0) == 2)
		{
			if (func_2796() > 1)
			{
				func_2797();
			}
		}
		func_2798(7);
		return;
	}
	switch (func_2796())
	{
		case 0:
			func_2799(iVar0);
			func_2800(-1);
			func_2798(1);
			break;
		case 1:
			if (!func_2801(iVar0))
			{
				func_1481(1);
				func_2798(7);
				return;
			}
			func_2802(iVar0);
			func_2803(iVar0);
			func_2798(4);
			break;
		case 4:
			if (!has_model_loaded(func_2804()))
			{
				return;
			}
			if (!func_2805(iVar0))
			{
				return;
			}
			func_2798(2);
			break;
		case 2:
			func_2806(iVar0);
			if (func_2809(func_2804(), func_2807(), func_2808()))
			{
				func_2798(3);
			}
			else
			{
				func_1481(0);
				func_2798(7);
				if (func_2795(iVar0) == 2)
				{
					func_2797();
				}
			}
			break;
		case 3:
			func_2810(iVar0);
			func_2798(5);
			break;
		case 5:
			if (!func_2811(iVar0))
			{
				func_1481(1);
				func_2798(7);
				if (func_2795(iVar0) == 2)
				{
					func_2797();
				}
				return;
			}
			func_1478(iVar0);
			func_2812(get_game_timer());
			func_2798(6);
			break;
		case 6:
			if ((get_game_timer() - func_2813()) < 500)
			{
				return;
			}
			func_2814(iVar0);
			func_2798(7);
			break;
		case 7:
			set_model_as_no_longer_needed(func_2804());
			func_2815(0f, 0f, 0f);
			func_2816(0f);
			func_2812(0);
			func_1475(iVar0, func_1474(iVar0));
			func_2799(-1);
			func_2817(-1);
			func_2798(0);
			func_1496(iVar0);
			break;
	}
}

void func_1531()
{
	iVar0 = func_2818();
	if (iVar0 < 7)
	{
		func_2819(iVar0, 1, 0, 1, 1);
	}
	else
	{
		func_2820((iVar0 - 7), 1, 0, 1, 0);
	}
	func_2821();
}

void func_1532()
{
	switch (func_2822())
	{
		case 0:
			if (func_1477(7))
			{
			}
			else
			{
				func_2823(1);
				Jump @337; //curOff = 55
				Var4 = -1;
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_5 = -1;
				Var4.f_6 = -1;
				Var4.f_7 = -1;
				Var4.f_8 = -1;
				Var4 = { func_2824(-1591664384, -1591664384, 0, -999503751, 0, 0, -1, 0, 0) };
				if (func_2825(Var4, &iVar1, &uVar0, 0))
				{
					func_2826(iVar1);
					func_2827(uVar0);
					func_2823(2);
				}
				else
				{
					func_2823(3);
					func_1481(2);
				}
				Jump @337; //curOff = 190
				func_1478(7);
				iVar2 = func_2381(func_2828(), func_2829());
				iVar3 = func_931(iVar2);
				if (func_2830(iVar2, iVar3))
				{
					func_740(iVar2, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
				}
				func_2831(func_2828() + 1);
				if (func_2828() >= func_2832())
				{
					func_2823(3);
					func_1481(3);
				}
				Jump @337; //curOff = 282
				iVar1 = func_2829();
				if (func_2833())
				{
					func_2834(iVar1);
					func_2826(-1);
				}
				func_2827(0);
				func_2831(0);
				func_2823(0);
				func_1475(7, 3);
			}
			default:
				break;
	}
}

void func_1533()
{
	iVar0 = func_1508(1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_2791(iVar0))
	{
		return;
	}
	func_2772(iVar0);
}

void func_1534()
{
	if (!func_2791(25))
	{
		return;
	}
	func_2772(25);
}

void func_1535()
{
	if (func_2835() > 0)
	{
		func_2836();
	}
	if (func_2837() > 0)
	{
		func_2838();
	}
}

void func_1536()
{
	if (func_2791(0))
	{
		func_2772(0);
		func_452();
	}
}

void func_1537()
{
	if (func_2791(1))
	{
		func_1475(1, 5);
		func_453();
	}
}

void func_1538()
{
	if (func_2791(2))
	{
		func_1475(2, 5);
		func_454();
	}
}

void func_1539()
{
	if (func_2791(3))
	{
		func_1475(3, 5);
		func_455();
	}
}

void func_1540()
{
	if (func_2791(4))
	{
		func_1475(4, 5);
		func_456();
	}
}

void func_1541()
{
}

void func_1542()
{
}

void func_1543()
{
	if (func_1476(7) == 4)
	{
		func_2823(3);
		func_1532();
	}
}

void func_1544()
{
}

void func_1545()
{
}

void func_1546()
{
}

void func_1547()
{
}

void func_1548()
{
}

void func_1549()
{
	if (func_2791(13))
	{
		func_2772(13);
		func_464();
	}
}

void func_1550()
{
	if (func_2791(14))
	{
		func_2772(14);
	}
}

void func_1551()
{
}

void func_1552()
{
}

void func_1553()
{
}

void func_1554()
{
}

void func_1555()
{
}

void func_1556()
{
}

void func_1557()
{
}

void func_1558()
{
}

void func_1559()
{
}

void func_1560()
{
	if (func_2791(24))
	{
		func_2772(24);
		func_475();
	}
}

void func_1561()
{
}

void func_1562(int iParam0)
{
}

void func_1563()
{
}

void func_1564()
{
}

void func_1565()
{
}

Vector3 func_1566(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1264.245f, -1301.033f, 75.027f;
		case 76:
			return -187.675f, 646.971f, 112.512f;
		case 69:
			return 1521.27f, 413.91f, 89.064f;
		case 78:
			return 2928.835f, 1295.411f, 43.346f;
		case 26:
			return -1850.81f, -436.986f, 158.493f;
		case 5:
			return 2743.008f, -1406.18f, 45.371f;
		case 38:
			return -859.7903f, -1342.636f, 42.52987f;
		case 120:
			return -3708.26f, -2636.08f, -14.894f;
		case 126:
			return -2478.03f, -2444.9f, 59.345f;
		case 115:
			return -5567.82f, -2944.74f, -1.713f;
		case 92:
			return 2946.014f, 599.033f, 43.488f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1567(int iParam0, var uParam1, float fParam2)
{
	if (fParam2 >= 0f && fParam2 > (1.6f * 2f))
	{
		*uParam1 = 4;
		return 0;
	}
	if (Global_1430231->f_2)
	{
		*uParam1 = 4;
		return 0;
	}
	if (!func_2839())
	{
		*uParam1 = 1;
		return 0;
	}
	if (func_1182(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (_is_any_app_running())
	{
		if (!_is_app_active(1833066477))
		{
			*uParam1 = 4;
			return 0;
		}
	}
	if (is_player_wanted_level_greater(player_id(), 0) && iParam0 != 120)
	{
		*uParam1 = 3;
		return 0;
	}
	if (func_822(func_795()) > 15)
	{
		*uParam1 = 2;
		return 0;
	}
	if (func_654(iParam0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (_is_ped_carrying(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (func_1063(9, 0) || func_272(0, 0, 1))
	{
		*uParam1 = 4;
		return 0;
	}
	if (func_1524() >= 0.8f)
	{
		*uParam1 = 4;
		return 0;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (!is_ped_on_foot(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (_0x331550b212014b92(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (_0x038b1f1674f0e242(Global_35) || _0xec7e480ff8bd0bed(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	return 1;
}

void func_1568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			func_89("NO_REGION_TAXI", 2500, 0, 0, 0, 1);
			break;
		case 2:
			func_89("BOUNTY_TAXI", 2500, 0, 0, 0, 1);
			break;
		case 3:
			func_89("STAGE_COACH_WANTED", 2500, 0, 0, 0, 1);
			break;
		case 4:
			func_89("UNAVAILABLE_TAXI", 2500, 0, 0, 0, 1);
			break;
	}
}

bool func_1569(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1020(iParam1) || !func_1020(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1570(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	*uParam0 = iParam1;
}

char* func_1571(var uParam0, int iParam1)
{
	if (!is_bit_set(uParam0->f_22, iParam1))
	{
		return "";
	}
	if (!is_bit_set(uParam0->f_23, iParam1))
	{
		return "";
	}
	return _0x356f9fb0698c1feb(iParam1, uParam0->f_27);
}

void func_1572(int* iParam0)
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

void func_1573(int iParam0, vector3 vParam1)
{
	if (does_entity_exist(iParam0))
	{
		vVar0 = { vParam1 };
		if (get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
		{
			set_entity_coords(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			set_entity_coords(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_1574(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		if (&uParam0->f_14[iVar0] == iParam1)
		{
			clear_bit(&(uParam0->f_22), iVar0);
			clear_bit(&(uParam0->f_23), iVar0);
			if (uParam0->f_10 == iVar0)
			{
				uParam0->f_10 = -1;
			}
			if (does_entity_exist(&(uParam0->f_14[iVar0])))
			{
			}
			uParam0->f_14[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_1575(int iParam0)
{
	return _0x8d56bda343d9519f(func_1605(iParam0));
}

bool func_1576(int iParam0, bool bParam1)
{
	if (!func_709())
	{
		return true;
	}
	if (func_2840(iParam0))
	{
		if (iParam0 == func_178())
		{
			return false;
		}
		if (get_entity_model(Global_35) == 225514697)
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return false;
			}
		}
		else if (get_entity_model(Global_35) == 11966224)
		{
			if (iParam0 == 37 && !func_2841(9))
			{
				return false;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return false;
				}
				if (func_403() != iParam0)
				{
					return false;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return false;
				}
				break;
		}
		if (func_113() == 8)
		{
			if (func_2842(iParam0, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_1577(var uParam0, int iParam1)
{
	iVar0 = func_2843(iParam1);
	iVar1 = func_2844(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	StringCopy(&cVar11, _get_label_text_by_hash(iVar1), 64);
	while ((*uParam0)[iVar2]->f_3 && compare_strings(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, _get_label_text_by_hash((*uParam0)[iVar2]->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	iVar22 = iVar0;
	iVar23 = iVar1;
	while ((*uParam0)[iVar19]->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		iVar24 = (*uParam0)[iVar19]->f_4;
		iVar21 = uParam0[iVar19];
		iVar25 = (*uParam0)[iVar19]->f_6;
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
		func_1597((*uParam0)[iVar19], uParam0[iVar19]);
		iVar22 = iVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!(*uParam0)[iVar19]->f_3)
	{
		(*uParam0)[iVar19]->f_4 = iVar22;
		(*uParam0)[iVar19] = iVar20;
		(*uParam0)[iVar19]->f_3 = 1;
		(*uParam0)[iVar19]->f_6 = iVar23;
	}
}

void func_1578(var uParam0, int iParam1)
{
	iVar0 = func_2843(iParam1);
	iVar1 = func_2844(iParam1);
	if (iParam1 == func_403())
	{
		(*uParam0)[0]->f_4 = iVar0;
		(*uParam0)[0] = iParam1;
		(*uParam0)[0]->f_3 = 1;
		(*uParam0)[0]->f_6 = iVar1;
		return;
	}
	iVar2 = 1;
	while (((*uParam0)[iVar2]->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && (*uParam0)[iVar2]->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	iVar7 = iVar1;
	while ((*uParam0)[iVar3]->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = (*uParam0)[iVar3]->f_4;
		iVar5 = uParam0[iVar3];
		iVar9 = (*uParam0)[iVar3]->f_6;
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
		func_1597((*uParam0)[iVar3], uParam0[iVar3]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		iVar7 = iVar9;
		iVar3++;
	}
	if (!(*uParam0)[iVar3]->f_3)
	{
		(*uParam0)[iVar3]->f_4 = iVar6;
		(*uParam0)[iVar3] = iVar4;
		(*uParam0)[iVar3]->f_3 = 1;
		(*uParam0)[iVar3]->f_6 = iVar7;
	}
}

float func_1579(int iParam0)
{
	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * pow((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_82() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_2845()));
	}
	return func_2846(fVar1, 2, 1);
}

int func_1580(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2))
	{
		uParam0->f_2 = _databinding_add_data_bool_from_path("", "FastTravel", 1);
	}
	_databinding_add_data_string(uParam0->f_2, "header", "CAMP_FT_HEADER");
	_databinding_add_data_string(uParam0->f_2, "subHeader", "CAMP_FT_SUB");
	_databinding_add_data_string(uParam0->f_2, "subFooter", "");
	if (!func_2847(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_1581(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

int func_1582(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1583(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if ((*Global_1888801)[iVar0]->f_30 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1584(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

char* func_1585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

void func_1586(var uParam0)
{
	_close_app_by_hash(1833066477);
	_databinding_remove_data_entry(uParam0->f_2);
	display_radar(true);
	func_1581(0);
	uParam0->f_6 = 0;
}

int func_1587(int iParam0)
{
	iParam0 = func_1582(iParam0);
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

float func_1588(int iParam0)
{
	iParam0 = func_1582(iParam0);
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

float func_1589(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1590(var uParam0)
{
	uParam0->f_299 = -1;
	uParam0->f_300 = -1;
	uParam0->f_301 = -1;
	uParam0->f_302 = -1;
	uParam0->f_303 = -1;
	uParam0->f_319 = 5;
	uParam0->f_320 = -1;
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	_0x09fbf15d73efc900();
	iVar0 = 0;
	while (iVar0 < 2049)
	{
		if (iVar0 != 1)
		{
			func_1155(&(uParam0->f_318), iVar0);
		}
		iVar0++;
	}
}

void func_1591()
{
}

void func_1592(var uParam0, var uParam1)
{
}

void func_1593(var uParam0, var uParam1)
{
}

void func_1594()
{
}

int func_1595(var uParam0, var uParam1)
{
	if ((!does_entity_exist(*uParam1) || is_entity_dead(*uParam1)) || is_ped_human(*uParam1))
	{
		return 0;
	}
	uParam0->f_304.f_1 = *uParam1;
	_0x2a6d1daab9ebb262(*uParam1);
	return 1;
}

int func_1596(var uParam0)
{
	if (does_entity_exist(uParam0->f_304.f_1))
	{
		if (!_0x2d64376cf437363e(uParam0->f_304.f_1))
		{
			return 0;
		}
	}
	if (does_entity_exist(uParam0->f_304.f_2))
	{
		if (!is_entity_a_vehicle(uParam0->f_304.f_2))
		{
			return 0;
		}
		if (func_2848(uParam0->f_304.f_2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_1597(var uParam0, int iParam1)
{
	func_2849(uParam0);
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_1605(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = _0xd6e39dc5d46df4ab(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return true;
}

bool func_1598(var uParam0, int iParam1, var uParam2)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_2)
	{
		return false;
	}
	_0xd840c130d7aacfa5(uParam0->f_1, iParam1, &Var0);
	*uParam2 = { Var0 };
	uParam2->f_3 = Var0.f_3;
	uParam2->f_4 = Var0.f_4;
	return true;
}

int func_1599(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_314 = { vParam1 };
	uParam0->f_304 = uParam4;
	_0xbe8daa9d8d01da6a(uParam0->f_314);
	func_1157(&(uParam0->f_318), 2048);
	func_1155(&(uParam0->f_318), 1024);
	return 1;
}

void func_1600(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_1601()
{
	_0xd6c0a8c7c0b2f82c(player_id(), 0);
	set_entity_invincible(player_ped_id(), true);
	set_everyone_ignore_player(player_id(), true);
	set_player_can_be_hassled_by_gangs(player_id(), false);
	set_player_control(player_id(), false, 0, false);
	func_136(Global_1935630, 16384);
}

void func_1602(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_1603(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_2850() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_2559(iVar1) && !func_1271(iVar1, iParam2)) && (!bParam3 || !func_2851(iVar1))) && (!bParam4 || !func_2852(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_2853(iVar0);
			}
		}
		iVar0++;
	}
}

void func_1604()
{
	if (!func_2559(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_2854(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

int func_1605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

void func_1606(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_1607(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_274(Global_1898330[iVar0]) && func_133(Global_1898330[iVar0]))
		{
			iVar1 = func_1309(Global_1898330[iVar0]);
			if (iVar1 == 1 || iVar1 == 8)
			{
				if ((func_623(iVar0, 64) || func_623(iVar0, 16)) || func_623(iVar0, 32))
				{
					if (!func_692(uParam0->f_318, 8))
					{
						func_1157(&(uParam0->f_318), 8);
					}
					return false;
				}
			}
		}
		iVar0++;
	}
	if (func_692(uParam0->f_318, 8))
	{
	}
	return true;
}

void func_1608(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_1609()
{
	_0xd6c0a8c7c0b2f82c(player_id(), 1);
	set_entity_invincible(player_ped_id(), false);
	set_everyone_ignore_player(player_id(), false);
	set_player_can_be_hassled_by_gangs(player_id(), true);
	set_player_control(player_id(), true, 0, false);
	func_1056(Global_1935630, 16384);
}

int func_1610(var uParam0)
{
	if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id()))
	{
		if (does_entity_exist(uParam0->f_304.f_1) && !is_entity_dead(uParam0->f_304.f_1))
		{
			if (func_2855(uParam0->f_304.f_1))
			{
				_0x0348469daa17576c(uParam0->f_304.f_1);
			}
			func_1618(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			_set_entity_coords_and_heading(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, true, false, true);
			set_ped_config_flag(uParam0->f_304.f_1, 136, false);
			if (is_ped_ragdoll(uParam0->f_304.f_1))
			{
				_0x221f4d9912b7fe86(uParam0->f_304.f_1, 1);
			}
			if (_0x2d64376cf437363e(uParam0->f_304.f_1))
			{
				func_2856(player_ped_id(), uParam0->f_304.f_1, 0, -1, 1);
			}
		}
		else if (does_entity_exist(uParam0->f_304.f_2))
		{
			func_1618(uParam0->f_304.f_2, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			iVar0 = player_ped_id();
			func_2857(&iVar0, &(uParam0->f_304.f_2), uParam0->f_304.f_3, 1);
			set_vehicle_on_ground_properly(uParam0->f_304.f_2, 0f);
		}
		else
		{
			func_1618(player_ped_id(), uParam0->f_314, uParam0->f_304, 2, 1073741824);
		}
	}
	else
	{
		return 0;
	}
	if (uParam0->f_304.f_4)
	{
		simulate_player_input_gait(player_id(), uParam0->f_304.f_5, uParam0->f_304.f_5.f_1, uParam0->f_304.f_5.f_2, uParam0->f_304.f_5.f_3, uParam0->f_304.f_5.f_4);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	return 1;
}

void func_1611(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_1612(int iParam0)
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
			func_2858(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_2859(1);
	}
}

int func_1613()
{
	switch (func_82())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_1614(int iParam0)
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

void func_1615(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1425() - fParam1);
	func_2860(uParam0, 1);
	func_2861(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_1616(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

bool func_1617(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return false;
	}
	return true;
}

void func_1618(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_744(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1143(iParam0))
	{
		if (func_2855(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_123(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1618(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1618(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_123(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_123(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_123(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_123(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_123(iParam5, 129))
	{
		if (func_123(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_123(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_123(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_123(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1143(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_123(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_123(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_1619(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
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
	func_2862(vParam1, fParam4, 0);
	clear_ped_tasks(iParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = _find_closest_active_scenario_point_of_type(vParam1, iVar0, fParam4, 1, false);
	if (_does_scenario_point_exist(iVar1))
	{
		_task_use_scenario_point(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		task_stand_still(iParam0, -1);
	}
	return true;
}

bool func_1620(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1621(int iParam0)
{
	if (func_1620(iParam0, 1))
	{
		func_2863(1);
	}
}

void func_1622()
{
	Global_1955569 = _databinding_add_data_container_from_path("", "RPGStatusIcons");
}

void func_1623()
{
	if (!_databinding_is_data_id_valid(&Global_1955569))
	{
		return;
	}
	Global_1955569->f_1.f_2 = _databinding_add_data_container(&Global_1955569, "HonorIcon");
	Global_1955569->f_1.f_2.f_1 = _databinding_add_data_int(Global_1955569->f_1.f_2, "State", 0);
	func_1708(0);
	func_2864(get_game_timer(), 0);
}

void func_1624()
{
	if (_databinding_is_data_id_valid(Global_1955569->f_5))
	{
		return;
	}
	iVar0 = _databinding_get_data_container_from_path("playerSkillsDatastore");
	if (_databinding_is_data_id_valid(iVar0))
	{
		_databinding_remove_data_entry(iVar0);
	}
	uVar1 = _databinding_add_data_container_from_path("", "sessionInfo");
	Global_1955569->f_5.f_147.f_23 = _databinding_add_data_bool(uVar1, "isHorseAlive", true);
	Global_1955569->f_5 = _databinding_add_data_container_from_path("", "playerSkillsDatastore");
	Global_1955569->f_5.f_1 = _databinding_add_ui_item_list(Global_1955569->f_5, "playerSkillPanel");
	iVar2 = 0;
	while (iVar2 < 4)
	{
		StringCopy(&cVar4, "rpgPanel", 64);
		StringIntConCat(&cVar4, iVar2, 64);
		uVar12[iVar2] = _databinding_add_data_container(Global_1955569->f_5, &cVar4);
		Global_1955569->f_5.f_2[iVar2] = &uVar12[iVar2];
		uVar17[iVar2] = _databinding_add_ui_item_list(&(uVar12[iVar2]), "attributes");
		_databinding_add_data_string(&(uVar12[iVar2]), "label", func_2865(iVar2));
		_databinding_add_data_string(&(uVar12[iVar2]), "description", func_2866(iVar2));
		Global_1955569->f_5.f_2[iVar2]->f_1 = _databinding_add_data_string(&(uVar12[iVar2]), "textureName", func_2867(iVar2, 0));
		Global_1955569->f_5.f_2[iVar2]->f_2 = _databinding_add_data_string(&(uVar12[iVar2]), "textureTxd", func_2868());
		_databinding_add_data_string(&(uVar12[iVar2]), "iconTextureTxd", "itemtype_textures");
		_databinding_add_data_string(&(uVar12[iVar2]), "iconTextureName", func_2869(iVar2));
		_databinding_add_data_bool(&(uVar12[iVar2]), "isIconVisible", func_2870(iVar2));
		iVar3 = 0;
		while (iVar3 < 3)
		{
			StringCopy(&cVar4, "rpgLines", 64);
			StringIntConCat(&cVar4, iVar3, 64);
			StringIntConCat(&cVar4, iVar2, 64);
			uVar22[iVar3] = _databinding_add_data_container(Global_1955569->f_5, &cVar4);
			_databinding_add_data_string(&(uVar22[iVar3]), "label", _create_var_string(2, func_2871(iVar2, iVar3)));
			Global_1955569->f_5.f_2[iVar2]->f_12[iVar3] = _databinding_add_data_string(&(uVar22[iVar3]), "value", "");
			Global_1955569->f_5.f_2[iVar2]->f_16[iVar3] = _databinding_add_data_bool(&(uVar22[iVar3]), "isActive", false);
			Global_1955569->f_5.f_2[iVar2]->f_20[iVar3] = _databinding_add_data_string(&(uVar22[iVar3]), "endIconTexture", "");
			Global_1955569->f_5.f_2[iVar2]->f_24[iVar3] = _databinding_add_data_string(&(uVar22[iVar3]), "endIconTXD", "");
			Global_1955569->f_5.f_2[iVar2]->f_28[iVar3] = _databinding_add_data_hash(&(uVar22[iVar3]), "endIconColor", 1105014447);
			Global_1955569->f_5.f_2[iVar2]->f_32[iVar3] = _databinding_add_data_bool(&(uVar22[iVar3]), "isEndIconVisible", false);
			_databinding_insert_ui_item_to_list_from_context_string_alias(&(uVar17[iVar2]), iVar3, "player_attribute_item", &(uVar22[iVar3]));
			iVar3++;
		}
		if (func_2870(iVar2))
		{
			_databinding_add_data_string(&(uVar12[iVar2]), "footerText", _create_var_string(2, "PMPLAYER_CONDITIONS"));
		}
		Global_1955569->f_5.f_2[iVar2]->f_4 = _databinding_add_data_bool(&(uVar12[iVar2]), "isWeightVisible", false);
		Global_1955569->f_5.f_2[iVar2]->f_3 = _databinding_add_data_bool(&(uVar12[iVar2]), "isWeightActive", false);
		Global_1955569->f_5.f_2[iVar2]->f_6 = _databinding_add_data_bool(&(uVar12[iVar2]), "isToxicityVisible", false);
		Global_1955569->f_5.f_2[iVar2]->f_5 = _databinding_add_data_bool(&(uVar12[iVar2]), "isToxicityActive", false);
		Global_1955569->f_5.f_2[iVar2]->f_8 = _databinding_add_data_bool(&(uVar12[iVar2]), "isTemperatureVisible", false);
		Global_1955569->f_5.f_2[iVar2]->f_7 = _databinding_add_data_bool(&(uVar12[iVar2]), "isTemperatureActive", false);
		Global_1955569->f_5.f_2[iVar2]->f_9 = _databinding_add_data_string(&(uVar12[iVar2]), "TemperatureTexture", "");
		Global_1955569->f_5.f_2[iVar2]->f_11 = _databinding_add_data_bool(&(uVar12[iVar2]), "isWellbeingVisible", false);
		Global_1955569->f_5.f_2[iVar2]->f_10 = _databinding_add_data_bool(&(uVar12[iVar2]), "isWellbeingActive", false);
		_databinding_add_data_hash(&(uVar12[iVar2]), "link", func_2872(iVar2));
		if (0 == iVar2)
		{
			func_2873(iVar2);
		}
		iVar2++;
	}
	func_2874(0);
	func_1630(1, 0, 0);
	func_1739(Global_40.f_11095.f_35);
	func_2875(1, 100f, 0);
	func_2876(1, 90, 0);
	func_2877(1, 100f, 0);
	func_2875(2, 100f, 0);
	func_2876(2, 90, 0);
	func_2877(2, 100f, 0);
	func_2875(3, 100f, 0);
	func_2876(3, 90, 0);
	func_2877(3, 100f, 0);
	uVar26 = _databinding_add_data_container_from_path("", "playerSkillsInfoboxDatastore");
	Global_1955569->f_5.f_147 = _databinding_add_data_string(uVar26, "pageTitle", func_2865(0));
	Global_1955569->f_5.f_147.f_1 = _databinding_add_data_string(uVar26, "label", "PMPLAYER_OVERVIEW");
	Global_1955569->f_5.f_147.f_2 = _databinding_add_data_string(uVar26, "description", "RP_PLAYER_MADE_DESC");
	Global_1955569->f_5.f_147.f_3 = _databinding_add_data_string(uVar26, "textureName", func_2867(0, 0));
	Global_1955569->f_5.f_147.f_4 = _databinding_add_data_string(uVar26, "textureTxd", func_2868());
	Global_1955569->f_5.f_147.f_5 = _databinding_add_data_string(uVar26, "tooltipText", "FEED_TOOLTIP");
	Global_1955569->f_5.f_147.f_6 = _databinding_add_data_bool(uVar26, "RPGPlayerHealthVisible", true);
	Global_1955569->f_5.f_147.f_7 = _databinding_add_data_bool(uVar26, "RPGPlayerStaminaVisible", true);
	Global_1955569->f_5.f_147.f_8 = _databinding_add_data_bool(uVar26, "RPGPlayerDeadeyeVisible", true);
	Global_1955569->f_5.f_147.f_18 = _databinding_add_data_bool(uVar26, "RPGPlayerProgressionIconVisible", false);
	Global_1955569->f_5.f_147.f_19 = _databinding_add_data_string(uVar26, "RPGPlayerProgressionIconTxn", "");
	Global_1955569->f_5.f_147.f_20 = _databinding_add_data_string(uVar26, "RPGPlayerProgressionIconTxd", "");
	uVar27 = _databinding_add_data_container(uVar26, "horseRPGStats");
	uVar28 = _databinding_add_data_container(uVar27, "health");
	Global_1955569->f_5.f_147.f_9 = _databinding_add_data_bool(uVar28, "isVisible", true);
	Global_1955569->f_5.f_147.f_12 = _databinding_add_data_int(uVar28, "unlockedMaxAsState", 0);
	Global_1955569->f_5.f_147.f_13 = _databinding_add_data_float(uVar28, "normalizedValue", 0f);
	uVar29 = _databinding_add_data_container(uVar28, "healthCore");
	uVar30 = _databinding_add_data_container(uVar29, "status");
	Global_1955569->f_5.f_147.f_14 = _databinding_add_data_int(uVar30, "state", 0);
	uVar31 = _databinding_add_data_container(uVar27, "stamina");
	Global_1955569->f_5.f_147.f_10 = _databinding_add_data_bool(uVar31, "isVisible", true);
	Global_1955569->f_5.f_147.f_15 = _databinding_add_data_int(uVar31, "unlockedMaxAsState", 0);
	Global_1955569->f_5.f_147.f_16 = _databinding_add_data_float(uVar31, "normalizedValue", 0f);
	uVar32 = _databinding_add_data_container(uVar31, "staminaCore");
	uVar33 = _databinding_add_data_container(uVar32, "status");
	Global_1955569->f_5.f_147.f_17 = _databinding_add_data_int(uVar33, "state", 0);
	uVar34 = _databinding_add_data_container(uVar27, "bonding");
	Global_1955569->f_5.f_147.f_11 = _databinding_add_data_bool(uVar34, "isVisible", true);
	Global_1955569->f_5.f_147.f_21 = _databinding_add_ui_item_list(uVar26, "attributes");
	Global_1955569->f_5.f_147.f_22 = _databinding_add_ui_item_list(uVar26, "itemList");
	iVar87 = 0;
	while (iVar87 < 25)
	{
		StringCopy(&cVar4, "rpgInfo", 64);
		StringIntConCat(&cVar4, iVar87, 64);
		uVar35[iVar87] = _databinding_add_data_container(uVar26, &cVar4);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_1 = _databinding_add_data_bool(&(uVar35[iVar87]), "isIconVisible", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_2 = _databinding_add_data_string(&(uVar35[iVar87]), "iconTexture", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_3 = _databinding_add_data_string(&(uVar35[iVar87]), "iconTXD", "pausemenu_player");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_4 = _databinding_add_data_string(&(uVar35[iVar87]), "label", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_5 = _databinding_add_data_string(&(uVar35[iVar87]), "value", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_6 = _databinding_add_data_bool(&(uVar35[iVar87]), "isActive", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_7 = _databinding_add_data_bool(&(uVar35[iVar87]), "isRowActive", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_8 = _databinding_add_data_float(&(uVar35[iVar87]), "statValue", 0f);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_9 = _databinding_add_data_float(&(uVar35[iVar87]), "statEquipmentValue", 0f);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_10 = _databinding_add_data_float(&(uVar35[iVar87]), "statCapacityValue", 0f);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_11 = _databinding_add_data_bool(&(uVar35[iVar87]), "barVisible", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_12 = _databinding_add_data_bool(&(uVar35[iVar87]), "isEndIconVisible", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_13 = _databinding_add_data_string(&(uVar35[iVar87]), "endIconTexture", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_14 = _databinding_add_data_string(&(uVar35[iVar87]), "endIconTXD", "pausemenu_player_update");
		Global_1955569->f_5.f_147.f_24[iVar87] = &uVar35[iVar87];
		iVar87++;
	}
	iVar87 = 0;
	while (iVar87 < 25)
	{
		StringCopy(&cVar4, "rpgItems", 64);
		StringIntConCat(&cVar4, iVar87, 64);
		uVar61[iVar87] = _databinding_add_data_container(uVar26, &cVar4);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_16 = _databinding_add_data_string(&(uVar61[iVar87]), "label", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_17 = _databinding_add_data_string(&(uVar61[iVar87]), "value", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_18 = _databinding_add_data_bool(&(uVar61[iVar87]), "isActive", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_19 = _databinding_add_data_bool(&(uVar61[iVar87]), "isAccentColorActive", false);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_20 = _databinding_add_data_string(&(uVar61[iVar87]), "textureName", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_21 = _databinding_add_data_string(&(uVar61[iVar87]), "textureTxd", "");
		Global_1955569->f_5.f_147.f_24[iVar87]->f_22 = _databinding_add_data_bool(&(uVar61[iVar87]), "textureVisible", false);
		_databinding_add_data_int(&(uVar61[iVar87]), "rpg_pause_item_index", iVar87);
		Global_1955569->f_5.f_147.f_24[iVar87]->f_15 = &uVar61[iVar87];
		iVar87++;
	}
}

void func_1625(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_11, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_10, bParam2);
}

void func_1626(int iParam0, bool bParam1, int iParam2)
{
	func_2864((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_2878(iParam0);
}

struct<2> func_1627(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

char* func_1628(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_1629(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1630(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_2879(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_1631(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_1632()
{
	func_2880();
	func_2881();
	func_2882();
}

bool func_1633(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1634(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

int func_1635(int iParam0)
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

float func_1636(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

bool func_1637(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

void func_1638(int iParam0)
{
	func_2883(Global_40.f_4237[iParam0]);
	if (func_549(&(Global_40.f_4237[iParam0])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_549(&(Global_40.f_4237[iVar0 + 1])))
		{
			Global_40.f_4237[iVar0] = &Global_40.f_4237[iVar0 + 1];
			Global_40.f_4237[iVar0]->f_1 = (Global_40.f_4237[iVar0 + 1])->f_1;
			Global_40.f_4237[iVar0]->f_2 = (Global_40.f_4237[iVar0 + 1])->f_2;
			func_2885(iVar0, func_2884(iVar0 + 1));
			func_2886(Global_40.f_4237[iVar0 + 1]);
			func_2885(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

bool func_1639(int iParam0)
{
	if (!func_1637(iParam0, &iVar0))
	{
		return false;
	}
	return Global_40.f_4237[iVar0]->f_2;
}

bool func_1640(int iParam0)
{
	iVar0 = -1;
	if (func_1637(iParam0, &iVar0))
	{
		return func_2884(iVar0);
	}
	return false;
}

void func_1641(int iParam0, bool bParam1)
{
	iVar0 = -1;
	if (func_1637(iParam0, &iVar0))
	{
		func_2885(iVar0, bParam1);
	}
}

void func_1642(bool bParam0)
{
	if (Global_40.f_7748.f_1 < 9)
	{
		if (func_488(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (func_2887())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					func_2888();
				}
				else
				{
					func_2889();
				}
			}
		}
	}
	if (bVar0)
	{
		func_932(9, 0, 0, 0, 0);
	}
}

void func_1643(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (&Global_40.f_7731[iVar0] < 10)
		{
			if (func_488(Global_40.f_7731[iVar0]->f_3, 1))
			{
				if (&Global_40.f_7731[iVar0] <= 10)
				{
					if (&Global_40.f_7731[iVar0] < 7)
					{
						bVar1 = true;
					}
					else if (func_2890(iVar0))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (bParam0)
					{
						func_2891(iVar0);
					}
					else
					{
						func_2892(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_932(10, 0, 0, 0, 0);
		func_932(7, 0, 0, 0, 0);
	}
}

int func_1644()
{
	return &Global_1898438;
}

void func_1645(int iParam0)
{
	if (func_82() != -1)
	{
		return;
	}
	if (func_767(4) && iParam0 == 1164374808)
	{
		return;
	}
	iVar0 = func_2893(iParam0, &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_739(&(uVar2[iVar1]), 1, 0))
		{
		}
		else
		{
			func_740(&(uVar2[iVar1]), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar1++;
	}
}

void func_1646()
{
	iVar2 = 10;
	iVar3 = 23;
	iVar4 = 12;
	func_2894(-2061583405);
	func_2894(-525676072);
	if (&Global_1946804->f_1497.f_1[iVar2] != &Global_1946804->f_57[iVar2])
	{
		if (func_2895(&(Global_1946804->f_1497.f_1[iVar2]), &iVar0))
		{
			func_731(&(Global_1946804->f_1497.f_1[iVar2]), 1);
		}
		else if (func_2029(-2061583405, 0))
		{
			func_1650(&(Global_1946804->f_1497.f_1[iVar2]), 1, 1, 1);
		}
	}
	func_2896(-1719060085);
	if (&Global_1946804->f_1497.f_1[iVar3] != &Global_1946804->f_57[iVar3])
	{
		func_1650(&(Global_1946804->f_1497.f_1[iVar3]), 1, 1, 1);
	}
	iVar1 = &Global_1946804->f_1497.f_1[iVar4];
	if (func_906(iVar1, 160827531))
	{
		func_2896(81053684);
		func_1650(iVar1, 1, 1, Global_1946804->f_1497.f_1[iVar4]->f_1 == -1829635046);
	}
	else
	{
		func_2894(81053684);
	}
	func_1648();
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		func_2897(&(Global_1946804->f_2657[iVar0]), 0);
		iVar0++;
	}
}

void func_1647()
{
	Var3.f_9 = -1591664384;
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_7 = -1;
	Var17.f_8 = -1;
	Var17.f_13 = -1;
	iVar2 = &Global_1946804->f_1497.f_1[34];
	if (func_906(iVar2, 2085922893))
	{
		Var17 = { func_2130(0, -1591664384, -1591664384, -1591664384, -999503751, 2085922893) };
		if (func_2132(&Var17, &iVar0, &iVar1, 0))
		{
			if (func_905(&Var3, 0, iVar0, iVar1) && func_2898(Var3.f_4, &(Global_1946804->f_1497)))
			{
				func_2899(1);
			}
			else if (func_2900())
			{
				func_2899(0);
			}
			func_907(iVar0);
		}
		else if (func_2900())
		{
			func_2899(0);
		}
	}
	else if (func_2900())
	{
		func_2899(0);
	}
	iVar32 = func_2901(-999503751, 1);
	iVar31 = 0;
	while (iVar31 < iVar32)
	{
		iVar34 = func_2902(-999503751, iVar31, 1);
		iVar33 = func_931(iVar34);
		if (iVar33 > -1 && iVar33 <= 5)
		{
			func_2904(iVar34, func_2903(iVar34));
		}
		iVar31++;
	}
}

void func_1648()
{
	iVar1 = Global_1946804->f_1497;
	func_2894(-999503751);
	if (func_2895(Global_1946804->f_1497, &uVar0))
	{
		func_731(iVar1, 1);
	}
	else if (func_2029(-999503751, 0))
	{
		func_1650(iVar1, 1, 1, 1);
	}
}

int func_1649(int iParam0, int iParam1)
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

void func_1650(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_2905(iParam0))
	{
		return;
	}
	iVar0 = func_522(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2906(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_2224(0))
	{
		func_2907(iParam0, 1);
		if (func_2908() == 1160113249)
		{
			func_2907(func_2224(-2125499975), 0);
		}
		else
		{
			func_2907(func_2224(1160113249), 0);
		}
	}
	func_2909();
	if (func_856(iVar0))
	{
		_0x766315a564594401(func_221(0), iParam0, 0);
	}
	func_731(iParam0, bParam3);
	if (bParam2)
	{
		func_2910(0, 0);
	}
}

void func_1651(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_522(iParam0))
	{
		case -2061583405:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_2911(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_2909();
	}
	if (bParam1)
	{
		func_2910(0, 0);
	}
}

bool func_1652(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1653(var uParam0)
{
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (_0x93ffd92f05ec32fd(&(uParam0->f_135[iVar0])))
		{
			_0x13e7320c762f0477(&(uParam0->f_135[iVar0]));
		}
		uParam0->f_135[iVar0]->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1.f_1[iVar0] = { vVar1 };
		iVar0++;
	}
	func_1951(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_1654()
{
	iVar0 = Global_1946804->f_1497;
	iVar1 = func_931(iVar0);
	if (iVar1 == -1)
	{
		iVar1 = 0;
		func_2912(Global_35, iVar1, &(Global_1946804->f_2163), 1, iVar0, 1);
	}
	else
	{
		func_2912(Global_35, iVar1, &(Global_1946804->f_2163), 1, 0, 1);
	}
}

void func_1655(int iParam0)
{
	if ((&Global_1946804->f_529[iParam0] - 1) >= 0)
	{
		Global_1946804->f_529[iParam0] = (&Global_1946804->f_529[iParam0] - 1);
	}
}

bool func_1656(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 2;
		return true;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		*uParam1 = 1;
		return false;
	}
	*uParam1 = 0;
	return true;
}

void func_1657(var uParam0)
{
	if (!_is_ped_texture_valid(*uParam0))
	{
		return;
	}
	if (func_2913(uParam0, 2))
	{
		return;
	}
	_update_ped_texture(*uParam0);
	_reset_ped_texture(*uParam0);
	func_2914(uParam0, 2);
}

bool func_1658(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 0)
	{
		return true;
	}
	if (func_2913(uParam0, 1))
	{
		if (!func_2913(uParam0, 4))
		{
			_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
			func_2914(uParam0, 4);
		}
	}
	else if (!func_2913(uParam0, 4))
	{
		*uParam0 = _create_ped_texture(uParam0->f_2, uParam0->f_3, uParam0->f_4);
		func_2914(uParam0, 4);
	}
	if (!_is_ped_texture_valid(*uParam0))
	{
		return false;
	}
	if (uParam0->f_7 < uParam0->f_6)
	{
		func_2915(uParam0, uParam1, uParam0->f_7);
		uParam0->f_7++;
		return false;
	}
	func_2914(uParam0, 1);
	return true;
}

bool func_1659(int iParam0, var uParam1, bool bParam2)
{
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return false;
	}
	_0xbc6df00d7a4a6819(iParam0, uParam1->f_1, uParam1->f_2, uParam1->f_3, uParam1->f_4, 0, 0, 0, 0);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, false, true, false);
	}
	return true;
}

int func_1660(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1132155->f_5998.f_1;
	}
	return (*Global_1140157)[iParam0]->f_16.f_1;
}

int func_1661(int iParam0)
{
	if (iParam0 == 269611475)
	{
		return 1;
	}
	else if (iParam0 == 1135262948)
	{
		return 97;
	}
	else if (iParam0 == -884466200)
	{
		return 457;
	}
	else if (iParam0 == 1833182491)
	{
		return 0;
	}
	else if (iParam0 == -1135852754)
	{
		return 0;
	}
	return 0;
}

void func_1662(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_82() != -1;
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
			func_1961(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1674(iParam1, 29, bVar4, 1, 0);
			func_1674(iParam1, 31, bVar4, 1, 0);
			func_1674(iParam1, 30, bVar4, 1, 0);
			func_1674(iParam1, 22, bVar4, 1, 0);
			func_1674(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_559(32768) && func_2916(1108822547, 8)) && func_2917(10, iParam3))
	{
		func_2918(iParam1, 0, 1);
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
			iVar3 = func_2919(iVar1, 1);
			if (func_2916(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_2917(iVar1, iParam3))
				{
				}
				else if ((func_2916(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_2916(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1674(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_2920(iVar3, 1, 6);
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
								func_1674(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_2916(iVar3, 1))
							{
								func_1952(iVar3, 1, 6);
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

bool func_1663(int iParam0, var uParam1)
{
	if (!_is_ped_texture_valid(*uParam1))
	{
		return false;
	}
	if (!func_2913(uParam1, 2))
	{
		_update_ped_texture(*uParam1);
	}
	_override_texture_on_ped(iParam0, uParam1->f_5, *uParam1);
	return true;
}

bool func_1664(int iParam0)
{
	return (iParam0 == 642397982 || iParam0 == -312175403);
}

int func_1665()
{
	if (func_2908() == 1160113249)
	{
		return -1392593303;
	}
	return 1156231582;
}

int func_1666()
{
	if (func_2908() == 1160113249)
	{
		return -2091943191;
	}
	return 933586678;
}

void func_1667()
{
	iVar0 = 1;
	Global_1946804->f_1378.f_1[iVar0] = &Global_1946804->f_1497.f_1[iVar0];
}

void func_1668(int iParam0)
{
	func_2921(&(Global_1946804->f_1378), iParam0);
}

void func_1669()
{
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	Global_1946804->f_1378.f_1[iVar0] = &Global_1946804->f_1497.f_1[iVar0];
	Global_1946804->f_1378.f_1[iVar1] = &Global_1946804->f_1497.f_1[iVar1];
	Global_1946804->f_1378.f_1[iVar2] = &Global_1946804->f_1497.f_1[iVar2];
}

void func_1670(int iParam0, int iParam1, int iParam2)
{
	iVar3 = 0;
	bVar2 = func_82() != -1;
	if (func_2908() == 24043185)
	{
		iVar3 = 1;
	}
	iVar0 = func_2922(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2653 = iParam0;
		}
		else if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_2922(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2653 = iParam0;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_2924(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2653 = iParam0;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2653 = iParam0;
			}
		}
	}
	iVar0 = func_2922(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2654 = iParam1;
		}
		else if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_2922(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2654 = iParam1;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_2924(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2654 = iParam1;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2654 = iParam1;
			}
		}
	}
	iVar0 = func_2922(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
			Global_1946804->f_2655 = iParam2;
		}
		else if (func_2923(&(Global_1946804->f_1378.f_1[iVar1]), iVar3, func_2922(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804->f_1378.f_1[iVar1]->f_1 = 1155669136;
			Global_1946804->f_2655 = iParam2;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1] = func_2924(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = 289238755;
				Global_1946804->f_2655 = iParam2;
			}
			else
			{
				Global_1946804->f_1378.f_1[iVar1]->f_1 = iVar0;
				Global_1946804->f_2655 = iParam2;
			}
		}
	}
}

void func_1671()
{
	func_1944(0);
	func_2925(0, Global_1946804->f_2653, 0);
	func_2925(1, Global_1946804->f_2654, 0);
	func_2925(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	*Global_1946804->f_1497.f_1[iVar1] = { *Global_1946804->f_1378.f_1[iVar1] };
	*Global_1946804->f_1497.f_1[iVar2] = { *Global_1946804->f_1378.f_1[iVar2] };
	*Global_1946804->f_1497.f_1[iVar3] = { *Global_1946804->f_1378.f_1[iVar3] };
	func_2926();
	func_2927();
}

void func_1672()
{
	if (func_82() != -1)
	{
		return;
	}
	iVar0 = 0;
	if (func_2928(0) && func_2929(-1889597427) != -7657935)
	{
		func_2930(Global_35, -7657935, -1889597427, 1, 0, 1);
	}
	else if (func_2929(-1889597427) != 1155669136)
	{
		func_2930(Global_35, 1155669136, -1889597427, 1, 0, 1);
	}
	*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
	func_2931(Global_1946804->f_1497.f_1[iVar0], iVar0, 0);
	func_1671();
}

void func_1673(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar0 = func_82() != -1;
	iVar1 = 0;
	while (iVar1 < Global_1946804->f_2589)
	{
		iVar3 = func_2919(&(Global_1946804->f_2589.f_2[iVar1]), 1);
		if (bParam5)
		{
			func_2932(Global_1946804->f_2589.f_2[iVar1], 2, 6);
		}
		func_2932(Global_1946804->f_2589.f_2[iVar1], 1, 6);
		if (iVar3 == -358215195)
		{
		}
		else if (&Global_1946804->f_57[&Global_1946804->f_2589.f_2[iVar1]]->f_2[0] == -1802376732 || &uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]] == 0)
		{
		}
		else
		{
			iVar2 = &uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]];
			if (func_2916(iVar3, 8))
			{
			}
			else if ((func_2916(iVar3, 6) || &uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]] == &Global_1946804->f_57[&Global_1946804->f_2589.f_2[iVar1]]) || uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1 == 289238755)
			{
				if (!func_2916(iVar3, 1) || bParam2)
				{
					Global_1946804->f_857++;
					func_1674(iParam1, &(Global_1946804->f_2589.f_2[iVar1]), bVar0, 1, 0);
					if (uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1 == 289238755)
					{
						Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar1]]->f_1 = 289238755;
					}
					func_2920(iVar3, 1, 6);
				}
			}
			else if ((!bParam2 && &uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]] == &Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar1]]) && uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1 == Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar1]]->f_1)
			{
			}
			else
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar1]] = &uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]];
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar1]]->f_1 = uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1;
				if (func_2916(iVar3, 1))
				{
					func_1952(iVar3, 1, 6);
				}
				if (func_2933(uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]], 4))
				{
					func_1674(iParam1, &(Global_1946804->f_2589.f_2[iVar1]), bVar0, 1, &(uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]));
					func_2934(uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]], 4, 6);
				}
				Global_1946804->f_857++;
				_set_ped_component_enabled(iParam1, iVar2, false, bVar0, false);
				if (uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1 != 0)
				{
					_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[&Global_1946804->f_2589.f_2[iVar1]]->f_1, 0, bVar0, 1);
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		_0xaab86462966168ce(iParam1, bVar0);
		_update_ped_variation(iParam1, false, true, true, true, bParam4);
	}
	if (bParam5 || bParam6)
	{
		func_2935(&(Global_1946804->f_2589));
	}
}

void func_1674(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_2919(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2936(iParam4);
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

void func_1675(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = func_82() != -1;
	iVar1 = func_2919(iParam2, 1);
	if (func_559(32768) && iParam2 == 10)
	{
		func_2918(iParam1, bParam3, 1);
		return;
	}
	if (func_2916(iVar1, 8))
	{
		return;
	}
	if ((!bParam5 && &uParam0->f_1[iParam2] == &Global_1946804->f_2456[iParam2]) && uParam0->f_1[iParam2]->f_1 == Global_1946804->f_2456[iParam2]->f_1)
	{
		return;
	}
	Global_1946804->f_2456[iParam2] = &uParam0->f_1[iParam2];
	Global_1946804->f_2456[iParam2]->f_1 = uParam0->f_1[iParam2]->f_1;
	if ((func_2916(iVar1, 6) || &uParam0->f_1[iParam2] == &Global_1946804->f_57[iParam2]) || uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		if (!func_2916(iVar1, 1))
		{
			func_1674(iParam1, iParam2, bVar0, (iVar1 != 1108822547 || (iVar1 == 1108822547 && Global_1946804->f_2776.f_1 == 0)), 0);
			func_2920(iVar1, 1, 6);
		}
	}
	else
	{
		if (func_2916(iVar1, 1))
		{
			func_1952(iVar1, 1, 6);
		}
		if (func_2933(uParam0->f_1[iParam2], 4))
		{
			func_1674(iParam1, iParam2, bVar0, 1, 0);
			func_2934(uParam0->f_1[iParam2], 4, 6);
		}
		iVar2 = &uParam0->f_1[iParam2];
		if ((&Global_1946804->f_1497.f_1[iParam2] == &Global_1946804->f_57[iParam2] && &uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2]) && (_get_num_components_in_ped(iParam1) + _0x31b2e7f2e3c58b89(iVar2, 1155669136, _get_metaped_type(iParam1), bVar0)) >= 31)
		{
			return;
		}
		_set_ped_component_enabled(iParam1, iVar2, false, bVar0, false);
		if (uParam0->f_1[iParam2]->f_1 != 0)
		{
			_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iParam2]->f_1, 0, bVar0, 1);
		}
	}
	if (bParam3)
	{
		_0xaab86462966168ce(iParam1, bVar0);
		_update_ped_variation(iParam1, false, true, true, true, bParam4);
	}
}

bool func_1676(int iParam0)
{
	return func_123(&Global_1224206, iParam0);
}

void func_1677(int iParam0, int iParam1, int iParam2)
{
	func_1686(iParam0, iParam1);
	_set_ped_body_component(iParam0, iParam1);
	if (iParam2 != 0)
	{
		func_932(8, iParam2, 0, iParam0, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1678(int iParam0, bool bParam1)
{
	bVar4 = false;
	bVar5 = func_82() != -1;
	Global_1946804->f_857 = 0;
	vVar6.f_2 = 10;
	vVar6.f_2.f_1 = 39;
	vVar6.f_2.f_1.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar3 = func_2919(iVar0, 1);
		bVar4 = false;
		if (func_2916(iVar3, 8))
		{
			Global_1946804->f_2377[iVar0] = 0;
			Global_1946804->f_2377[iVar0]->f_1 = 0;
		}
		else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &Global_1946804->f_2377[iVar0] == 0)
		{
			Global_1946804->f_2377[iVar0] = 0;
			Global_1946804->f_2377[iVar0]->f_1 = 0;
		}
		else
		{
			iVar1 = &Global_1946804->f_1497.f_1[iVar0];
			Global_1946804->f_1378.f_1[iVar0] = &Global_1946804->f_2377[iVar0];
			Global_1946804->f_1378.f_1[iVar0]->f_1 = 0;
			*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
			func_2937(&vVar6, iVar0, 0);
			iVar2 = &Global_1946804->f_2377[iVar0];
			if (func_2916(iVar3, 6))
			{
				Global_1946804->f_2377[iVar0] = 0;
				Global_1946804->f_2377[iVar0]->f_1 = 0;
			}
			else
			{
				func_2938(iParam0, iVar3, iVar0, bVar5, &bVar4);
				if (func_2939(iVar3, 32))
				{
					func_731(iVar1, 0);
				}
				if (func_2939(iVar3, 64))
				{
					func_731(iVar2, bVar4);
				}
				else
				{
					switch (func_522(iVar2))
					{
						case 81053684:
							func_2896(81053684);
							func_1650(iVar2, 1, 1, bVar4);
							break;
						default:
							break;
					}
				}
				Global_1946804->f_2377[iVar0] = 0;
				Global_1946804->f_2377[iVar0]->f_1 = 0;
			}
		}
		iVar0++;
	}
	if (vVar6.x > 0)
	{
		func_2940(&vVar6, 1, 1, 1);
		func_2941(&vVar6);
	}
	if (Global_1946804->f_857 <= 0)
	{
		return;
	}
	_0xaab86462966168ce(iParam0, bVar5);
	_update_ped_variation(iParam0, false, true, true, true, bParam1);
}

bool func_1679(int iParam0, int iParam1, int iParam2)
{
	func_2942(14, &(Global_1946804->f_959));
	Global_1946804->f_959.f_1 = 0;
	if (!func_2943(&(Global_1946804->f_959), -929624153, iParam1, iParam2))
	{
		return false;
	}
	if (!func_2943(&(Global_1946804->f_959), -1636119814, func_2908(), 0))
	{
		return false;
	}
	vVar1.f_2 = 3;
	iVar7 = func_2944(Global_1946804->f_959, -1990973241, 0, 0);
	uVar8 = Global_1946804->f_959.f_1;
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		Global_1946804->f_959.f_1 = uVar8;
		if (!func_2943(&(Global_1946804->f_959), -1990973241, iVar0, 0))
		{
		}
		else
		{
			func_2945(Global_1946804->f_959, -612355112, &vVar1, 0);
			vVar1.x = func_2946(vVar1.x);
			func_2945(Global_1946804->f_959, 607361843, &(vVar1.f_1), 0);
			func_2947(Global_1946804->f_959, -914904147, vVar1.f_2[0], 0);
			func_2947(Global_1946804->f_959, -2114544496, vVar1.f_2[1], 0);
			func_2947(Global_1946804->f_959, -1925926132, vVar1.f_2[2], 0);
			_0x4efc1f8ff1ad94de(iParam0, vVar1.x, vVar1.y, &(vVar1.f_2[0]), &(vVar1.f_2[1]), &(vVar1.f_2[2]));
		}
		iVar0++;
	}
	return true;
}

bool func_1680(vector3 vParam0, var uParam3)
{
	iVar0 = vParam0.y;
	bVar1 = true;
	bVar2 = false;
	if (func_1652(vParam0.z, 8))
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = func_931(iVar0);
	}
	if (iVar3 > 0 && iVar3 <= 5)
	{
		iVar0 = func_2948(iVar3);
	}
	switch (Global_1946804->f_527)
	{
		case 0:
			func_1653(&(Global_1946804->f_2163));
			func_2949(1);
			break;
		case 1:
			func_2912(Global_35, iVar3, &(Global_1946804->f_2163), 1, iVar0, 0);
			func_2949(2);
			break;
		case 2:
			bVar1 = (bVar1 && func_2950());
			bVar1 = (bVar1 && func_2951(Global_35, &(Global_1946804->f_2163)));
			if (bVar1)
			{
				func_2949(3);
			}
			break;
		case 3:
			bVar2 = func_2952();
			func_2953(Global_35, &(Global_1946804->f_2163), 0, bVar2, 0, Global_1946804->f_858 <= 0);
			func_89(_create_var_string(10, "OUT_SWAP", _create_var_string(0, vParam0.y)), 10000, 0, 0, 0, 1);
			if (!bVar2 && func_559(1))
			{
				func_563(1);
				remove_anim_dict(func_2954());
			}
			func_2949(4);
			break;
		case 4:
			func_2949(0);
			return true;
	}
	return false;
}

int func_1681(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_932(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_932(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_2955(0))
	{
	}
	func_1662(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_1682(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_932(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_932(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_2956(0))
	{
	}
	func_1662(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_1683(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 && !_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	_0xa274f51ef7e34b95(iParam0, func_2957(iParam1));
	return 1;
}

void func_1684(bool bParam0)
{
	if (bParam0)
	{
		func_1685(0);
	}
	else
	{
		func_932(10, 0, 0, 0, 0);
	}
}

void func_1685(bool bParam0)
{
	iVar0 = 1;
	if (bParam0)
	{
		if (&Global_40.f_7731[1] < 3)
		{
			iVar0 = &Global_40.f_7731[1];
		}
		else
		{
			iVar0 = 3;
		}
	}
	func_2958(Global_35, 0, iVar0, 0, 1);
	func_2959(-1, 1, 1, 1, 1, 0);
}

void func_1686(int iParam0, int iParam1)
{
	iVar4 = _0xa622e66eee92a08d(iParam0);
	iVar3 = func_1661(iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		iVar1 = _0xccb97b51893c662f(iParam0, iVar0);
		iVar2 = func_2960(iVar1);
		if (iVar2 == -1)
		{
		}
		else if (!func_2961(iVar2, iVar3))
		{
		}
		else
		{
			_set_ped_component_disabled(iParam0, iVar1, 1);
		}
		iVar0++;
	}
}

bool func_1687()
{
	return &Global_1935436 == 1;
}

bool func_1688()
{
	if (((is_ped_in_any_vehicle(Global_35, true) || func_2235(Global_35)) || Global_1357549->f_1495 & 512 != 0) || Global_1935436->f_18.f_3)
	{
		return false;
	}
	return true;
}

bool func_1689()
{
	if (func_272(0, 0, 1))
	{
		switch (func_200(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
			default:
				break;
		}
		if (func_82() == -1)
		{
			if (_get_number_of_references_of_script_with_name_hash(1895447864) > 0)
			{
				return false;
			}
		}
	}
	return true;
}

void func_1690()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

void func_1691(bool bParam0)
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
	func_2962(0f);
	Global_1935436->f_11 = 1;
	if (func_2058())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_2963();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_1692()
{
	Global_1935436->f_18 = 0;
	Global_1935436->f_18.f_1 = 0;
	Global_1935436->f_18.f_3 = 0;
	Global_1935436->f_18.f_4 = 0;
	Global_1935436->f_18.f_7 = 0;
	Global_1935436->f_18.f_11 = 0;
}

void func_1693()
{
	if (!_does_anim_scene_exist(Global_1935436->f_18.f_6))
	{
		Global_1935436->f_18.f_6 = _create_anim_scene(func_2964(), 64, 0, false, true);
	}
	else if (!_is_anim_scene_loaded(Global_1935436->f_18.f_6, true, false))
	{
		load_anim_scene(Global_1935436->f_18.f_6);
	}
}

void func_1694(int iParam0)
{
	Global_1935436->f_18.f_11 = iParam0;
}

char* func_1695()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

bool func_1696(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_sitting_in_any_vehicle(iParam0))
	{
		return true;
	}
	if (!is_ped_still(iParam0))
	{
		return false;
	}
	if (!is_entity_upright(iParam0, 90f))
	{
		return false;
	}
	if (_get_ped_crouch_movement(iParam0))
	{
		return false;
	}
	if (get_ped_stealth_movement(iParam0))
	{
		return false;
	}
	if (is_ped_jumping(iParam0))
	{
		return false;
	}
	if (is_ped_ragdoll(iParam0))
	{
		return false;
	}
	vVar10 = { get_ped_bone_coords(iParam0, 56200, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2]->f_2) > 0.7f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 65478, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_2965(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*vVar0[0] = { get_ped_bone_coords(iParam0, 6884, 0f, 0f, 0f) };
	*vVar0[1] = { get_ped_bone_coords(iParam0, 43312, 0f, 0f, 0f) };
	*vVar0[2] = { get_ped_bone_coords(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_2965(*vVar0[2] - *vVar0[1], *vVar0[1] - *vVar0[0]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

char* func_1697()
{
	return "MOVE";
}

bool func_1698()
{
	return func_383(512);
}

void func_1699(int iParam0)
{
	set_clock_time(func_1758(iParam0), func_1759(iParam0), func_2290(iParam0));
	set_clock_date(func_2293(iParam0), func_2292(iParam0), func_2291(iParam0));
}

int func_1700(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_2966(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

Vector3 func_1701(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_1702(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = _0x74f0209674864cbd();
			func_2967(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_2968(&(iParam3->f_1), iParam5);
				if (!func_276(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_2969(iParam3->f_6));
				}
				_0x2b8af29a78024bd3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = _0x0365000d8bf86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { _0x865732725536ee39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_1703(vector3 vParam0, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_274(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_2970(iVar1), vParam0) < func_1721(func_2971(iVar1) == 0f, iParam3, func_2971(iVar1)))
					{
						return true;
					}
					break;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1704(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1310(iVar0, 0))
		{
			if (vdist(func_1800(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1705(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && _0x1ac5a8ab50cfaa33(uParam0->f_1))
	{
		_0x0365000d8bf86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

int func_1706(vector3 vParam0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_2972(iVar0, 1, iParam4))
		{
			if (func_526(func_1303(iVar0), vParam0, 1) < fParam3)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_1707()
{
	return Global_1955569->f_1.f_1;
}

void func_1708(bool bParam0)
{
	func_529(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

var func_1709()
{
	return Global_1347477->f_118;
}

void func_1710(var uParam0)
{
	if (uParam0->f_3)
	{
		uParam0->f_3 = 0;
	}
}

void func_1711(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_1712()
{
	return (animpostfx_is_running("PlayerRPGCore") || animpostfx_is_running("PlayerRPGCoreDeadEye"));
}

int func_1713(int iParam0)
{
	sVar0 = "PlayerRPGEmptyCoreHealth";
	sVar1 = "PlayerRPGEmptyCoreStamina";
	sVar2 = "PlayerRPGEmptyCoreDeadEye";
	switch (iParam0)
	{
		case 0:
			if (!animpostfx_is_running(sVar1) && !animpostfx_is_running(sVar2))
			{
				animpostfx_play(sVar0);
				play_sound_frontend("HEALTH", "Player_Core_Empty_Sounds", true, 0);
				return 1;
			}
			break;
		case 1:
			if (!animpostfx_is_running(sVar0) && !animpostfx_is_running(sVar2))
			{
				animpostfx_play(sVar1);
				play_sound_frontend("STAMINA", "Player_Core_Empty_Sounds", true, 0);
				return 1;
			}
			break;
		case 2:
			if (!animpostfx_is_running(sVar0) && !animpostfx_is_running(sVar1))
			{
				animpostfx_play(sVar2);
				play_sound_frontend("DEADEYE", "Player_Core_Empty_Sounds", true, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_1714(float fParam0, float fParam1)
{
	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!animpostfx_is_running("PlayerHealthLow"))
	{
		animpostfx_play("PlayerHealthLow");
	}
	_0xcab4dd2d5b2b7246("PlayerHealthLow", fVar1);
}

void func_1715()
{
	if (animpostfx_is_running("PlayerHealthLow"))
	{
		_0xc5cb91d65852ed7e("PlayerHealthLow");
	}
}

char* func_1716(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

float func_1717(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_1718(var uParam0)
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
	}
}

bool func_1719()
{
	if (is_first_person_aim_cam_active())
	{
		if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
		{
			if (_is_weapon_sniper(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1720(var uParam0)
{
	if (uParam0->f_8)
	{
		_0xc5cb91d65852ed7e("PlayerRPGCoreDeadEye");
		uParam0->f_8 = 0;
	}
}

float func_1721(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_1722(float fParam0, float fParam1, float fParam2)
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

bool func_1723(float fParam0)
{
	iVar0 = func_2973(fParam0);
	if (_0xa0bc8faed8cfeb3c(Global_35))
	{
		_set_ped_body_component(Global_35, iVar0);
		_update_ped_variation(Global_35, true, true, true, true, false);
		Global_1347477->f_189 = iVar0;
		return true;
	}
	return false;
}

int func_1724(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

void func_1725(int iParam0)
{
	if ((Global_40.f_11095.f_67 > 2 || Global_43891) && func_2058())
	{
		return;
	}
	fVar0 = (to_float(iParam0) / to_float(10));
	if (fVar0 < -0.5f)
	{
		iVar1 = 509283903;
	}
	else if (fVar0 >= -0.5f && fVar0 < 0.5f)
	{
		iVar1 = 1822769204;
	}
	else
	{
		iVar1 = 1837059600;
	}
	func_2974(iVar1);
	if (Global_1347477->f_185 != iVar1)
	{
		func_2975(Global_35, iVar1, 1);
	}
}

void func_1726(bool bParam0)
{
	if (func_124() && !bParam0)
	{
		return;
	}
	iVar0 = Global_1347477->f_196;
	if (Global_1347477->f_183 == iVar0)
	{
		return;
	}
	Global_1347477->f_183 = iVar0;
	fVar1 = (((to_float(iVar0) / to_float(10)) * 7.5f) / 100f);
	Global_40.f_11095.f_45 = -fVar1;
	Global_40.f_11095.f_62 = fVar1;
	fVar2 = func_2976();
	bVar3 = true;
	bVar4 = false;
	if (fVar2 == 0f)
	{
		bVar3 = false;
	}
	else if (fVar2 < 0f)
	{
		bVar4 = true;
	}
	func_2977(1, bVar3, bVar4);
	func_2977(2, bVar3, bVar4);
	func_2977(3, bVar3, bVar4);
	func_2874(iVar0);
	func_1632();
	func_543();
	func_544();
}

int func_1727(int iParam0)
{
	return round(((to_float(iParam0) / to_float(10)) * 100f));
}

void func_1728(float fParam0, bool bParam1)
{
	fVar0 = func_2978(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_361(17))
	{
		return;
	}
	if (func_2979())
	{
		iVar1 = func_1724(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_1724(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_630();
			func_1219(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_2980(&fVar3, &fVar4);
		func_534(13, func_1722(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_737(94, 0);
		}