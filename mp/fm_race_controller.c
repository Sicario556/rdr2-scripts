void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_6153 = -1;
	iLocal_6154 = -1;
	iLocal_6162 = 31;
	fLocal_7384 = 1.5E+08f;
	iLocal_7385 = -1;
	iLocal_8130 = -1;
	iLocal_8325 = -1;
	iLocal_8433 = 1;
	iLocal_13699 = -1;
	iLocal_13938 = -1;
	iLocal_13977 = -1;
	fLocal_13984 = -1f;
	network_set_script_is_safe_for_network_game();
	func_1();
	func_2(1);
	func_3(128);
	func_4();
	if (!func_5(ScriptParam_0))
	{
		func_6();
		func_7(0);
	}
	if (!func_8())
	{
		_0x708df841b8f27aa2(&(Global_3145858->f_191));
	}
	func_9();
	func_10(0);
	func_11(262144);
	func_12(1);
	Var0 = -1;
	Var0.f_1 = -1;
	if (func_13(ScriptParam_0.f_16))
	{
		Var0 = { ScriptParam_0.f_16 };
	}
	func_14(&uLocal_14007, Global_2097152->f_32);
	if (iVar14005 != 0)
	{
		_0xdf95df488a645ce7();
		_0x3eb2791a1fbc8a42(iVar14005, -1423748980);
		_0x3eb2791a1fbc8a42(1887583641, 0);
		_0x3eb2791a1fbc8a42(701412595, 0);
	}
	while (!func_15())
	{
		if (func_9() && !is_bit_set(iVar13506, 28))
		{
			_0x1096603b519c905f(func_16());
			set_bit(&uLocal_13508, 28);
		}
		if (func_17() && !is_bit_set(iVar13507, 11))
		{
			func_18(2);
			set_bit(&uLocal_13509, 11);
		}
		func_19(0);
		func_20();
		func_21();
		func_22();
		func_23();
		func_24();
		func_25();
		func_26();
		func_27();
		func_28();
		if (func_29(iVar6150))
		{
			func_30();
			func_31();
		}
		func_32();
		func_33();
		func_34();
		if (network_is_game_in_progress())
		{
			if (!is_bit_set(Global_2097152->f_253, 6))
			{
				func_35(iVar13696 != 0);
			}
			func_36(8);
			func_37(Var0);
		}
		if (bVar6143)
		{
			func_39(func_38(Var0));
		}
		func_40();
		func_41();
		func_42(&uLocal_7273);
		func_43(&uLocal_13646);
		wait(0);
	}
	if (func_15())
	{
		func_44();
		func_45();
		func_6();
		if (func_17())
		{
			func_46(1, 0);
			if (func_47() != 33)
			{
				if (func_48() != 2)
				{
				}
				else
				{
					func_49(1, 1);
				}
			}
			else
			{
				func_50(5, 0);
			}
			func_51(1);
			if (func_52() && func_48() == 2)
			{
				func_53(1);
			}
			else
			{
				func_54();
			}
		}
		if (iVar13510 != 0)
		{
			_0x00a15b94cba4f76f(iVar13510);
		}
		if (iVar13571 == 0)
		{
		}
		else
		{
			_0x00a15b94cba4f76f(iVar13571);
		}
		_display_hud_component(690901814);
		func_22();
		_0x2e399eafbeea74d5();
		func_55(128);
		func_7(0);
	}
}

void func_1()
{
	sVar0 = "net_ugc_intro_flow";
	func_56();
	func_57(536870912);
	iVar1 = get_hash_key(sVar0);
	if (_get_number_of_references_of_script_with_name_hash(iVar1) != 0)
	{
		return;
	}
	if (network_is_script_active(sVar0, -1, true, 0))
	{
		return;
	}
	request_script(sVar0);
	if (!func_58(sVar0))
	{
		StringCopy(&(Var2.f_10), sVar0, 32);
		Var2.f_14 = 6000;
		func_59(Var2, 0);
	}
}

void func_2(int iParam0)
{
	if (&Global_1048577 != iParam0)
	{
		Global_1048577 = iParam0;
	}
}

void func_3(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

void func_4()
{
	Global_390124->f_18.f_10 = 0;
	Global_390124->f_18.f_15 = -1;
	Global_390124->f_1 = 0;
	Global_390124->f_4 = 0;
}

bool func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	func_60(1);
	set_waypoint_off();
	func_61(&uParam0, &uLocal_6781, 32);
	func_62(0, 28);
	func_63(1);
	Local_5197.f_44 = Global_2097152->f_254;
	func_64(1);
	func_19(1);
	func_65();
	*Global_1051116 = { Global_3145858->f_191 };
	func_66(-1);
	Global_1048626 = 0;
	func_67(1, 0);
	func_68();
	func_69();
	func_70();
	func_71(0);
	func_72(1);
	func_73(1);
	if (Global_2097152->f_31 == 149530285)
	{
		func_74(1);
	}
	func_75();
	func_76();
	vVar0 = { Global_3145858->f_196 };
	if (bVar6129)
	{
		vVar0 = { get_entity_coords(iVar6128, true, false) };
	}
	func_77(vVar0, 5000f, 1, 0, 0, 0);
	func_78(524288);
	iLocal_9047 = func_79(Local_5197.f_603, Local_5197.f_605);
	fVar3 = 1f;
	if ((Local_5197.f_603 == 0f && Local_5197.f_605 == 0f) && Local_5197.f_604 == 0f)
	{
		fVar3 = 0f;
	}
	_0x2f9ac754fe179d58(fVar3);
	func_80(1);
	func_81(&(Local_5197.f_745), 1);
	func_82(&uLocal_13660, &uVar4, 6, 0, 1);
	func_82(&uLocal_13660, &uVar4, 7, 0, 1);
	if (func_83())
	{
		func_82(&uLocal_13660, &uVar4, 8, 1, 1);
	}
	else
	{
		func_82(&uLocal_13660, &uVar4, 8, 0, 1);
	}
	if (func_84(15))
	{
		set_bit(&(Local_13286.f_159), 0);
	}
	if (func_84(71))
	{
		set_bit(&(Local_13286.f_160), 5);
	}
	func_85(0);
	func_86(Global_1050050);
	chal_net_start_chal(1852874750);
	func_87();
	if (Global_2097152->f_6485 == 1)
	{
		func_88();
	}
	Global_1049275 = 0;
	Local_57[iVar6131]->f_11 = func_89();
	func_90();
	set_bit(&(Local_57[iVar6131]->f_13), 19);
	return true;
}

void func_6()
{
	if (func_91(2, 255))
	{
		return;
	}
	func_92(2);
}

void func_7(bool bParam0)
{
	_0x6a564540fac12211(3, -2076104686);
	_0x6a564540fac12211(3, -801397594);
	_0x6a564540fac12211(3, 747460826);
	_0x6a564540fac12211(3, 1627068364);
	set_cinematic_button_active(true);
	if (((!is_bit_set(Local_5197.f_26, 5) && !func_93(iVar6149)) && func_94(iVar6149)) && !func_95())
	{
		func_96();
	}
	if (!&Global_1048581)
	{
		animpostfx_stop_all();
	}
	func_12(0);
	func_97(0);
	func_18(64);
	_display_hud_component(128623374);
	func_98(0);
	func_99(1);
	func_100(&Local_12276, &Local_13286);
	func_101(&Local_12276);
	func_102(1);
	func_103(1);
	func_104();
	if (!&Global_1048581)
	{
		func_105(&uLocal_6781, 1);
	}
	if (is_bit_set(iVar13483, 0))
	{
		func_106(&uLocal_13702);
		clear_bit(&uLocal_13486, 0);
	}
	if (!func_84(46))
	{
		_0x3fbb838aea30c1d8();
	}
	func_107(-2101264851);
	func_72(0);
	func_73(0);
	func_74(0);
	func_63(0);
	func_108(0);
	func_109();
	func_110(1024);
	func_111(65536);
	func_112(0);
	func_113();
	func_114(0);
	func_115(0, 0);
	func_116();
	func_117(0, 0, 0);
	func_118(1);
	func_119(1);
	func_120(0);
	func_121();
	func_122(&uLocal_13964);
	func_123(iVar6146);
	func_124(iVar6146);
	func_125(iVar6146);
	if (is_bit_set(iVar13506, 19))
	{
		set_ped_config_flag(iVar6146, 472, false);
		clear_bit(&uLocal_13509, 19);
	}
	func_126(&iLocal_13722);
	func_127(&iLocal_13873);
	if (!&Global_1048581 && !is_bit_set(iVar13506, 12))
	{
		func_128();
	}
	func_129(0);
	func_130(1);
	if (func_84(30))
	{
		func_131(1);
	}
	func_132(network_player_id_to_int());
	func_133(1, 0, 1);
	func_134();
	func_135();
	if (!func_8())
	{
		if (func_136(Local_5197) && is_bit_set(iVar13505, 18))
		{
			Var1.f_1 = !bParam0;
			Var1.f_2 = 1 == Global_1572887->f_106;
			if (Var1.f_2)
			{
				Var1 = func_137(Global_1572887->f_106.f_9);
			}
			Var1.f_5 = (Global_1048684->f_403.f_8 + Global_1048684->f_419.f_8);
			Var1.f_3 = func_138();
			Var1.f_4 = 0;
			Var1.f_6 = (Global_1048684->f_403.f_6 + Global_1048684->f_419.f_6);
			Var1.f_9 = (Local_57[iVar6149]->f_3 - 1);
			func_139(Global_1049170);
			func_140(Global_1049175);
			if (!Var1.f_1)
			{
				*Global_1049159 = { Var1 };
				Global_1049169 = 1;
				*Global_1049196 = { Local_5197 };
			}
			else
			{
				_0xa2058154357726bb(&Local_5197, &Var1, Global_1049170, Global_1049175, Global_3145858->f_60002 == 1);
			}
			Global_1050949 = Local_5197.f_2;
			Global_1050949->f_1 = Local_5197.f_2.f_1;
			Global_1050949->f_2 = Local_5197.f_2.f_2;
			Global_1050949->f_3 = Local_5197.f_2.f_3;
			Global_1050949->f_8 = Local_5197.f_46;
		}
	}
	func_141(0);
	func_142();
	func_143();
	func_144();
	func_145();
	func_146();
	func_147();
	func_148();
	func_149(&uLocal_9902);
	func_150();
	func_151();
	func_80(0);
	func_103(1);
	func_152();
	func_153();
	func_154();
	func_155();
	iVar11 = 0;
	while (iVar11 < 32)
	{
		func_156(iVar11);
		func_157(iVar11);
		func_158(iVar11);
		func_159(iVar11);
		iVar11++;
	}
	func_160(64);
	func_160(4);
	func_160(1);
	func_160(256);
	func_161(&iLocal_6149);
	func_162(iVar6146, &Local_13939, 1);
	func_163(1, 1);
	func_164();
	func_165(0);
	func_166(&iLocal_6146);
	func_167(iVar6146, &Local_13939);
	func_168(0);
	func_169(0);
	func_170(0);
	func_171(0);
	func_172(0);
	func_173();
	if (Global_1048581 && func_174(255))
	{
		func_175(1);
		func_176(1);
	}
	else
	{
		func_175(0);
	}
	func_177(0, 0, 0, 1);
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		_0xb6e79850b759a30e(iVar0, 0);
		iVar0++;
	}
	func_66(-1);
	func_160(262144);
	func_160(1048576);
	func_178();
	func_179();
	if (func_84(79))
	{
		func_180(0);
	}
	chal_net_stop_chal(1852874750);
	set_player_lockon(iVar6143, true);
	set_everyone_ignore_player(iVar6143, false);
	network_set_friendly_fire_option(false);
	_0xaca45ddcef6071c4(iVar6143, 1);
	_0xa0c683284df027c7(iVar6143, 15, 1);
	clear_gps_multi_route();
	set_gps_multi_route_render(false);
	set_ignore_no_gps_flag(false);
	func_181(262144);
	if (bVar6147)
	{
		_0x5639fbea922788da(iVar6146);
		set_ped_can_be_knocked_off_vehicle(iVar6146, 0);
		clear_ped_tasks(iVar6146, 1, 0);
		reset_ped_weapon_movement_clipset(iVar6146);
		set_ped_drops_weapons_when_dead(iVar6146, true);
	}
	_0x564552c6af1eeab1();
	set_random_trains(true);
	set_enable_vehicle_slipstreaming(false);
	_set_hidof_env_blur_params(false, false, 0f, 0f, 0f, 0f);
	_0x531a78d6bf27014b("RDRO_Race_sounds");
	_0xfeca17cf3343694b(iVar6143, uVar6779);
	_0xbbadfb5e5e5766fb(iVar6143, uVar6780);
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	if (_0xfc464598f6ee97b0())
	{
		_0x31108bb5715d035f();
	}
	set_player_team(iVar6143, -1, false);
	if (network_is_signed_online())
	{
		if (bVar6142 && bParam0)
		{
			func_182(&(Local_5197.f_606), 1);
			Local_5197.f_606 = -1;
			if (Local_5197.f_603 == 0f && Local_5197.f_604 == 0f)
			{
				func_183(&(Local_5197.f_607));
			}
		}
	}
	func_184(&iLocal_9047);
	_0x2f9ac754fe179d58(1f);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_185(iVar0, 1);
		iVar0++;
	}
	set_max_wanted_level(5);
	reset_wanted_level_difficulty(iVar6143);
	set_widescreen_borders(false, -1);
	_display_hud_component(474191950);
	_display_hud_component(-1450522739);
	unlock_minimap_angle();
	_0x6035e8fbca32ac5e();
	clear_gps_flags();
	destroy_cam(iVar7296, false);
	destroy_cam(iVar7297, false);
	func_186();
	remove_named_ptfx_asset(134607740);
	if (func_187())
	{
		remove_named_ptfx_asset(1330862000);
	}
	func_188(0);
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		if (does_blip_exist(&(iLocal_8436[iVar0])))
		{
			remove_blip(iLocal_8436[iVar0]);
		}
		if (does_pickup_exist(&(uLocal_8637[iVar0])))
		{
			remove_pickup(&(uLocal_8637[iVar0]));
		}
		if (does_entity_exist(&(uLocal_8838[iVar0])))
		{
			delete_object(uLocal_8838[iVar0]);
		}
		iVar0++;
	}
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (network_does_network_id_exist(&(Local_5197.f_238[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5197.f_238[iVar0])))
				{
					func_189(Local_5197.f_238[iVar0], 0);
				}
				else
				{
					func_190(Local_5197.f_238[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (network_does_network_id_exist(&(Local_5197.f_238.f_33[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5197.f_238.f_33[iVar0])))
				{
					func_191(Local_5197.f_238.f_33[iVar0], 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (network_does_network_id_exist(&(Local_5197.f_238.f_187[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5197.f_238.f_187[iVar0])))
				{
					func_189(Local_5197.f_238.f_187[iVar0], 0);
				}
				else
				{
					func_190(Local_5197.f_238.f_187[iVar0]);
				}
			}
			iVar0++;
		}
		func_192(&(Local_5197.f_238.f_36));
	}
	func_193(&uLocal_9056);
	func_194(&uLocal_9840);
	func_195(1);
	trigger_music_event("MC_MUSIC_STOP");
	func_196();
	Global_2892896->f_9 = 0;
	Global_2892896->f_6 = 0;
	func_64(0);
	func_197(-1);
	if (!is_entity_visible(iVar6146))
	{
		set_entity_visible(iVar6146, true);
	}
	if ((!func_198() || Global_1048581) // PointerArith)
	{
		func_62(0, 40);
	}
	else
	{
		func_62(1, 2);
	}
	if (does_particle_fx_looped_exist(Local_13676.f_4))
	{
		stop_particle_fx_looped(Local_13676.f_4, false);
	}
	_0xe2b3b852b537c398(0);
	_0x1f5e07e14a86fafc(0);
	func_199(1);
	_0xec3f7f24eeeb3ba3();
	if (bParam0)
	{
		func_200();
	}
	func_201();
	if (func_84(32))
	{
		func_202(iVar6143, 0);
	}
	if (!func_203(0))
	{
		func_204(8192);
		func_204(16384);
	}
	func_205(0);
	_0xbc7d36946d19e60e(1);
	func_206(0);
	_0x1096603b519c905f("");
	func_207(524288);
	func_2(0);
	func_208();
	func_209(1);
	set_ped_config_flag(iVar6146, 366, false);
	set_ped_config_flag(iVar6146, 337, false);
	set_ped_config_flag(iVar6146, 544, false);
	set_ped_config_flag(iVar6146, 551, false);
	set_ped_config_flag(iVar6146, 286, false);
	if (Local_57[iVar6149]->f_10 > -1 && Local_57[iVar6149]->f_10 < 18)
	{
		func_210(Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_40);
	}
	use_player_colour_instead_of_team_colour(false);
	_0x71fa2d1880c48032(0);
	_0x780a13f780a13f1b(1);
	_0x1f488807bc8e0630(iVar6143);
	if (func_198() || !bParam0)
	{
		func_211();
	}
	func_212(0);
	if (!bParam0)
	{
		func_213();
		if (func_214())
		{
			func_215(0);
		}
	}
	func_216();
	func_217();
	_0xa967d6a8ed2d713b(iVar6146, 1);
	_0x708df841b8f27aa2("");
	func_4();
	if (iVar14004 != 0)
	{
		_0xdf95df488a645ce7();
	}
	func_218(1, -462361264);
	Global_1051146 = 0;
	func_219();
}

bool func_8()
{
	return &Global_2883584;
}

bool func_9()
{
	if (_text_database_has_loaded("RC_PLAY"))
	{
		return true;
	}
	else
	{
		_text_database_request("RC_PLAY");
	}
	return false;
}

void func_10(int iParam0)
{
	iVar0 = iVar6149;
	if (iParam0 == 0)
	{
		iVar0 = participant_id_to_int();
	}
	Local_57[iVar0]->f_31[iParam0] = func_220(-1161644143);
	Local_57[iVar0]->f_34[iParam0] = func_220(-1128784855);
	Local_57[iVar0]->f_37[iParam0] = func_221(-763706539, 405868330);
}

void func_11(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_12(int iParam0)
{
	if (&Global_1048578 != iParam0)
	{
		Global_1048578 = iParam0;
	}
}

bool func_13(struct<2> Param0)
{
	if (!func_222(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_223(Param0))
	{
		return false;
	}
	return true;
}

void func_14(int iParam0, int iParam1)
{
	func_224(iParam0, &uVar0, iParam1, iVar1);
}

bool func_15()
{
	if (func_225(0, 0))
	{
		return true;
	}
	if (&Global_1051146)
	{
		return true;
	}
	if (&Global_1051139)
	{
		return true;
	}
	return false;
}

char* func_16()
{
	sVar0 = "MP Instanced Race";
	sVar1 = func_226();
	if (!is_string_null_or_empty(sVar1))
	{
		StringCopy(&cVar2, sVar0, 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, sVar1, 64);
		return func_227(cVar2);
	}
	return sVar0;
}

bool func_17()
{
	if ((is_bit_set(Local_5197.f_26, 4) || func_228(256)) || func_8())
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

void func_19(bool bParam0)
{
	if (bParam0)
	{
		bLocal_6145 = network_is_host_of_this_script();
	}
	else if (network_is_host_of_this_script() != iVar6142)
	{
		bLocal_6145 = network_is_host_of_this_script();
	}
	func_229();
	iLocal_6146 = player_id();
	iLocal_6147 = network_player_id_to_int();
	bLocal_6148 = func_230(iVar6143);
	iLocal_6149 = player_ped_id();
	bLocal_6150 = !is_ped_injured(iVar6146);
	iLocal_6151 = participant_id();
	iLocal_6152 = participant_id_to_int();
	Global_262154 = get_unique_int_for_player(iVar6143);
	switch (Global_2097152->f_31)
	{
		case 149530285:
			if (is_ped_on_mount(iVar6146))
			{
				iLocal_6160 = get_mount(iVar6146);
			}
			break;
		case -1742691940:
		case 628988510:
			if (is_ped_in_any_vehicle(iVar6146, false))
			{
				iLocal_6161 = get_vehicle_ped_is_in(iVar6146, false);
			}
			break;
	}
	iVar0 = iVar6150;
	clear_bit(&uLocal_13509, 4);
	iLocal_6153 = -1;
	if (func_231(255))
	{
		iVar1 = func_232();
		if (iVar1 == iVar6143)
		{
			bVar2 = true;
		}
		else if ((iVar1 != 255 && network_is_player_active(iVar1)) && network_is_player_a_participant(iVar1))
		{
			iVar3 = network_get_participant_index(iVar1);
			iVar4 = iVar3;
			if ((func_233(iVar4, iVar3) && iVar4 >= 0) && iVar4 < 32)
			{
				if (!func_234(iVar1))
				{
					if (!func_235(iVar4))
					{
						iLocal_6153 = iVar4;
						iLocal_6155 = iVar1;
						iLocal_6159 = iVar6150;
					}
					else
					{
						bVar2 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
			}
			else
			{
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			iVar5 = 0;
			while (iVar5 < 32)
			{
				if (iVar5 == iVar6149)
				{
				}
				else
				{
					iVar6 = int_to_participantindex(iVar5);
					if (!func_233(iVar5, iVar6))
					{
					}
					else
					{
						iVar1 = network_get_player_index(iVar6);
						if (!func_235(iVar5) && func_236(iVar5) == 5)
						{
							iLocal_6153 = iVar5;
							iLocal_6155 = iVar1;
							iLocal_6159 = iVar5;
							bVar2 = false;
						}
						else
						{
							iVar5++;
						}
						if (iVar6150 == -1)
						{
							iLocal_6159 = iVar6149;
							iLocal_6155 = iVar6143;
							bLocal_6156 = iVar6145;
							iLocal_6157 = iVar6146;
							bLocal_6158 = bVar6147;
						}
						else
						{
							bLocal_6156 = func_230(iVar6152);
							iLocal_6157 = get_player_ped(iVar6152);
							if (bVar6153)
							{
								bLocal_6158 = !is_ped_injured(iVar6154);
							}
							else
							{
								bLocal_6158 = false;
							}
						}
						if (iVar6150 != iVar0)
						{
							set_bit(&uLocal_13509, 4);
						}
						func_10(1);
					}
				}
			}
		}
	}
}

void func_20()
{
	func_237(&(Local_57[iVar6150]->f_50));
	if (Local_5197.f_24 >= 1 && Local_5197.f_24 < 3)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Local_6163[iVar0]->f_1 = -1;
			Local_6163[iVar0]->f_2 = 255;
			Local_6163[iVar0]->f_4 = 255;
			Local_6163[iVar0]->f_3 = 0;
			Local_6163[iVar0]->f_5 = 0;
			Local_6163[iVar0]->f_8 = 0;
			if (func_233(iVar0, 255))
			{
				Local_6163[iVar0]->f_2 = int_to_participantindex(iVar0);
				Local_6163[iVar0]->f_3 = 1;
				Local_6163[iVar0]->f_4 = network_get_player_index(Local_6163[iVar0]->f_2);
				Local_6163[iVar0]->f_1 = get_player_team(Local_6163[iVar0]->f_4);
				Local_6163[iVar0]->f_9 = (func_238() && Local_6163[iVar0]->f_1 == Local_57[iVar6157]->f_9);
				Local_6163[iVar0]->f_6 = get_player_ped(Local_6163[iVar0]->f_4);
				if (is_ped_on_mount(Local_6163[iVar0]->f_6))
				{
					Local_6163[iVar0]->f_7 = get_mount(Local_6163[iVar0]->f_6);
				}
				if (!is_entity_dead(Local_6163[iVar0]->f_6))
				{
					Local_6163[iVar0]->f_5 = 1;
				}
				Local_6163[iVar0] = get_unique_int_for_player(Local_6163[iVar0]->f_4);
				StringCopy(&(Local_6163[iVar0]->f_10), get_player_name(Local_6163[iVar0]->f_4), 64);
				Local_6163[iVar0]->f_9 = func_239(Local_57[iVar0]->f_9, Local_57[iVar6157]->f_9);
			}
			else if (&Local_6163[iVar0] != -1 && !func_235(iVar0))
			{
				if (!is_string_null_or_empty(&(Local_6163[iVar0]->f_10)))
				{
					sVar1 = "RC_PLY_LFT";
					bVar2 = true;
					if (Global_3145858->f_282 < 2)
					{
						bVar2 = false;
					}
					iVar3 = func_240(Local_57[iVar0]->f_9, bVar2, Local_6163[iVar0]->f_9);
					Local_6163[iVar0] = -1;
					func_243(func_242(_create_var_string(10, sVar1, func_241(&(Local_6163[iVar0]->f_10), iVar3)), 2000, 0, 0, 1, 1));
				}
			}
			iVar0++;
		}
	}
}

void func_21()
{
	func_244();
	func_245();
	if (func_246(*Global_1049272, *Global_262148))
	{
		func_247();
		func_248();
	}
	Global_390124->f_1 = 1;
	Global_390124->f_4 = 1;
}

void func_22()
{
	if (func_249())
	{
		_0x236905c700fdb54d();
	}
}

void func_23()
{
	if (!network_is_host())
	{
		return;
	}
	if (Local_57[iVar6150]->f_49 == Local_5197.f_851)
	{
		return;
	}
	if (func_250())
	{
		func_206(1);
	}
	if (network_is_session_active())
	{
		iVar0 = 192;
		Local_57[iVar6150]->f_49 = Local_5197.f_851;
		if (Local_5197.f_851)
		{
			_0xe546bda1b3e288ee(iVar0);
		}
		else
		{
			_0x78335e12db0bf961(iVar0);
		}
	}
}

void func_24()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_251(iVar0);
				break;
			case -1315570756:
				func_252(iVar0);
				break;
			case -454144443:
				func_253(iVar0);
				break;
			case 1559647390:
				func_254(iVar0);
				break;
			case -437497832:
				func_255(iVar0);
				break;
			case -2001102517:
				func_256(iVar0);
				break;
			case 1385704366:
				func_257(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_25()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_258(iVar0);
		iVar0++;
	}
	if (bVar6143)
	{
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			func_259(iVar1);
			iVar1++;
		}
	}
}

void func_26()
{
	func_260(Local_5197.f_603, Local_5197.f_605, Local_5197.f_604, Local_5197.f_604 == 0f);
}

void func_27()
{
	if (!func_17())
	{
		return;
	}
	func_261(&(Local_5197.f_594), &uLocal_6775);
}

void func_28()
{
	if (func_8())
	{
		if (!is_pause_menu_active())
		{
			if (Global_2892896->f_9)
			{
				if (is_screen_faded_out())
				{
					func_6();
					func_262();
					func_7(1);
					if (&Global_2883584)
					{
						Global_2883584 = 0;
					}
				}
				else if (!is_screen_fading_out())
				{
					do_screen_fade_out(500);
				}
			}
		}
	}
}

bool func_29(int iParam0)
{
	return &Local_57[iParam0] >= 3;
}

void func_30()
{
	iLocal_7492 = 1;
	iLocal_7493 = 0;
	bVar0 = func_95();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Local_6163[iVar1]->f_3)
		{
			if (iVar1 != iVar6150)
			{
				if (!func_93(iVar1) && !func_263(iVar1))
				{
					if (func_94(iVar1))
					{
						iLocal_7492 = iVar7490 + 1;
						if (!func_264(iVar1))
						{
							if (bVar0)
							{
								iLocal_7493 = iVar7491 + 1;
							}
							else
							{
								if (func_265(iVar6150, fVar7382, iVar1, Local_6163[iVar1]->f_5, Local_6163[iVar1]->f_6))
								{
									iLocal_7493 = iVar7491 + 1;
								}
								else if ((Local_57[iVar1]->f_47 < Local_57[iVar6150]->f_47 && Local_57[iVar1]->f_47 < -3f) && Local_57[iVar6150]->f_47 < -3f)
								{
									Local_57[iVar6150]->f_47 = -3f;
								}
								Jump @260; //curOff = 232
								if (bVar0)
								{
									if (func_266(iVar6150, iVar1))
									{
										iLocal_7493 = iVar7491 + 1;
									}
								}
							}
							iVar1++;
							if (((!bVar0 && !func_267()) && !func_93(-1)) && !func_231(255))
							{
								iVar3 = iVar7490;
								iVar4 = iVar7491;
								iVar2 = (iVar3 - iVar4);
								if (iVar2 != iVar7489)
								{
									if (iVar7489 == 1 && iVar2 != 1)
									{
										if (func_268(&uLocal_7496))
										{
											Local_57[iVar6150]->f_27 = (Local_57[iVar6150]->f_27 + func_269(&uLocal_7496, 0, 0));
										}
										func_270(&uLocal_7496);
									}
									if (iVar2 < iVar7489)
									{
										func_271(-711431897, (iVar7489 - iVar2));
									}
									iLocal_7491 = iVar2;
									Local_57[iVar6150]->f_24 = iVar7489;
									Local_57[iVar6150]->f_47 = -3f;
									if (func_268(&(Local_5197.f_159)))
									{
										if (func_269(&(Local_5197.f_159), 0, 0) >= 5000)
										{
											if (iVar7489 == 1)
											{
												func_272(&uLocal_7494, 0, 0);
												func_272(&uLocal_7496, 0, 0);
											}
											else
											{
												func_270(&uLocal_7494);
											}
										}
									}
								}
								if ((iVar7489 == 1 && func_268(&uLocal_7494)) && func_269(&uLocal_7494, 0, 0) >= 500)
								{
									func_270(&uLocal_7494);
									func_273(180156097, iVar6144, 1, 0);
								}
								if ((iVar7489 == 1 && !func_268(&uLocal_7496)) && func_269(&(Local_5197.f_159), 0, 0) >= 5000)
								{
									func_272(&uLocal_7496, 0, 0);
								}
							}
							else
							{
								if (bVar0)
								{
									iVar2 = (iVar7490 - iVar7491);
									if (iVar2 != iVar7489)
									{
										iLocal_7491 = iVar2;
										Local_57[iVar6150]->f_24 = iVar7489;
									}
								}
								if (iVar7489 == 1)
								{
									if (func_268(&uLocal_7496))
									{
										func_271(966194332, func_269(&uLocal_7496, 0, 0));
										func_270(&uLocal_7496);
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

void func_31()
{
	if (func_268(&(Local_57[iVar6150]->f_18)))
	{
		if (!is_bit_set(iVar13507, 9))
		{
			if ((is_control_pressed(0, 1520437207) || is_control_pressed(0, 1002303471)) || is_control_pressed(0, 308778731))
			{
				func_271(1057455349, func_269(&(Local_57[iVar6150]->f_18), 0, 0));
				set_bit(&uLocal_13509, 9);
			}
		}
	}
	if (is_bit_set(iVar13507, 0))
	{
		return;
	}
	switch (iVar13980)
	{
		case 0:
			if (is_bit_set(Local_57[iVar6150]->f_13, 17) && func_268(&uLocal_7303))
			{
				func_274(1);
			}
			break;
		case 1:
			iVar0 = func_269(&uLocal_7303, 0, 0);
			if (is_control_just_pressed(0, 1520437207) || is_disabled_control_just_pressed(0, 1520437207))
			{
				uLocal_13983 = iVar13981 + 1;
				if (absi((3000 - iVar0)) <= 150)
				{
					fLocal_13984 = 120f;
				}
				else if (absi((3000 - iVar0)) <= 350)
				{
					fLocal_13984 = 60f;
				}
			}
			if (iVar0 >= 3000)
			{
				if (iVar13981 >= 10)
				{
					fLocal_13984 = -1f;
					func_274(3);
					return;
				}
				if (fVar13982 != -1f)
				{
					if (iVar13981 < 5)
					{
						func_274(2);
					}
					else if (iVar13981 < 10)
					{
						fLocal_13984 = 60f;
						func_274(2);
					}
				}
			}
			if (iVar0 >= 3350)
			{
				func_274(4);
			}
			break;
		case 2:
			animpostfx_play("MP_RaceBoostStart");
			iVar1 = 5000;
			if (fVar13982 == 120f)
			{
				iVar1 = 10000;
			}
			_0x09c28f828ee674fa(iVar6144, 1f, iVar1);
			func_275(1, fVar13982, 0);
			func_274(4);
			break;
		case 3:
			task_horse_action(iVar6158, 1, 0, 0);
			func_274(4);
			break;
		case 4:
			set_bit(&uLocal_13509, 0);
			break;
	}
}

void func_32()
{
	switch (iVar13498)
	{
		case 0:
			if ((((&Local_57[iVar6150] >= 3 && iVar7267 >= 2) && (func_228(256) || func_8())) || func_93(-1)) || func_276(iVar6150))
			{
				if (func_93(-1))
				{
					func_277(6);
				}
				else
				{
					trigger_music_event("MP_HORSE_RACE_START");
					func_277(1);
				}
			}
			break;
		case 1:
			if (&Local_57[iVar6150] == 5)
			{
				trigger_music_event("MP_HORSE_RACE_BEGINS");
				set_audio_flag("MusicIgnoreDeathArrest", true);
				func_277(2);
			}
			break;
		case 2:
			if (Local_57[iVar6150]->f_3 == 3)
			{
				trigger_music_event("MP_HORSE_RACE_MID");
				func_277(3);
			}
			if (func_263(iVar6150))
			{
				func_277(5);
			}
			break;
		case 3:
			if (func_278(Local_57[iVar6150]->f_4))
			{
				if (Local_57[iVar6150]->f_3 >= (Global_2097152->f_255 - 3))
				{
					trigger_music_event("MP_HORSE_RACE_FINAL");
					func_277(4);
				}
			}
			if (func_263(iVar6150))
			{
				func_277(5);
			}
			break;
		case 4:
			if (func_264(iVar6150))
			{
				trigger_music_event("MP_HORSE_RACE_END");
				if (Local_5197.f_24 == 4 || func_279())
				{
					func_277(7);
				}
				else
				{
					func_277(6);
				}
			}
			break;
		case 5:
			trigger_music_event("MP_HORSE_RACE_FAIL");
			if (Local_5197.f_24 == 4 || func_279())
			{
				func_277(7);
			}
			else
			{
				func_277(6);
			}
			break;
		case 6:
			if (func_231(255))
			{
				trigger_music_event("MC_DEFENDING");
				func_277(7);
			}
			break;
		case 7:
			break;
	}
	if (!is_bit_set(iVar13507, 15))
	{
		if (func_268(&(Local_5197.f_743)))
		{
			iVar0 = func_269(&(Local_5197.f_743), 0, 0);
			iVar1 = (Global_2097152->f_6018 - iVar0);
			if (iVar1 <= 0)
			{
				if (func_268(&uLocal_13501))
				{
					if (func_269(&uLocal_13501, 0, 0) > 1500)
					{
						func_122(&uLocal_13964);
						set_bit(&uLocal_13509, 15);
					}
				}
				else
				{
					func_280(&uLocal_13501, 0, 0);
				}
			}
		}
	}
}

void func_33()
{
	if (!is_bit_set(iVar13507, 18))
	{
		return;
	}
	if (is_bit_set(iVar13507, 17))
	{
		if (!animpostfx_is_running("DeathFailMP01"))
		{
			_0x9428447ded71fc7e("DEATH_FAIL_RESPAWN_SCENES");
			clear_bit(&uLocal_13509, 17);
			clear_bit(&uLocal_13509, 18);
		}
	}
	else if (animpostfx_is_running("DeathFailMP01"))
	{
		play_sound_frontend("HORSE_FALL_FAIL", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
		_0x6339c1ea3979b5f7("HORSE_FALL_FAIL", "DEATH_FAIL_RESPAWN_SCENES");
		set_bit(&uLocal_13509, 17);
	}
}

void func_34()
{
	func_281(1);
	func_282();
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		func_283(1);
	}
	func_283(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_36(int iParam0)
{
	Global_1296543->f_48 = (Global_1296543->f_48 || iParam0);
}

void func_37(struct<2> Param0)
{
	if (!func_284(iVar6148))
	{
		set_everyone_ignore_player(iVar6142, true);
		set_ped_reset_flag(iVar6145, 25, true);
	}
	set_ped_reset_flag(iVar6145, 195, true);
	if (bVar13630)
	{
		_0x00a15b94cba4f76f(iVar13569);
		_0x00a15b94cba4f76f(iVar13508);
		Local_13573 = 0;
		Local_13512 = 0;
		func_6();
		_0x2e399eafbeea74d5();
		func_285(1);
		Global_1051146 = 1;
		return;
	}
	switch (func_236(iVar6148))
	{
		case 0:
			if (func_286())
			{
				set_bit(&(Local_57[iVar6148]->f_13), 15);
				func_85(1);
			}
			else
			{
				func_85(2);
			}
			func_18(2048);
			func_287(64);
			break;
		case 1:
			if (func_288(Param0))
			{
				if (is_bit_set(Local_57[iVar6148]->f_13, 10))
				{
					func_18(1024);
					_0xf620f47b4f4a78c4(&Local_5197, &Local_13985);
					set_bit(&uLocal_13508, 18);
					func_85(6);
				}
				else
				{
					func_85(4);
				}
			}
			break;
		case 2:
			if (func_289(Param0))
			{
				func_85(3);
			}
			break;
		case 3:
			if (func_290())
			{
				func_85(4);
			}
			break;
		case 4:
			func_291();
			if (!is_bit_set(Local_57[iVar6148]->f_13, 10))
			{
				func_292(524288);
			}
			set_bit(&(Local_57[iVar6148]->f_13), 22);
			func_85(5);
			break;
		case 5:
			func_293();
			if ((is_bit_set(Local_5197.f_26, 5) || func_95()) || func_267())
			{
				func_294(0);
				func_85(6);
			}
			break;
		case 6:
			if (!func_295() && (bVar6141 || is_bit_set(iVar13504, 2)))
			{
				func_293();
			}
			func_296();
			break;
		case 7:
			if ((!&Global_1048581 || Global_1048586) // PointerArith)
			{
				if (is_screen_faded_out() || is_bit_set(iVar13504, 0))
				{
					func_6();
					func_7(1);
				}
			}
			break;
	}
}

int func_38(struct<2> Param0)
{
	return func_297(Param0);
}

void func_39(int iParam0)
{
	switch (func_298())
	{
		case 0:
			if (!is_bit_set(Local_5197.f_26, 0) && !func_8())
			{
				if (func_228(256))
				{
					if (!func_268(&(Local_5197.f_154)))
					{
						func_272(&(Local_5197.f_154), 0, 0);
					}
					else if (func_269(&(Local_5197.f_154), 0, 0) >= 60000)
					{
						if (!func_299())
						{
							func_270(&(Local_5197.f_154));
							set_bit(&(Local_5197.f_26), 1);
							set_bit(&(Local_5197.f_26), 0);
							Local_5197.f_45 = func_300();
						}
					}
				}
				if (func_299())
				{
					Local_5197.f_45 = func_300();
					set_bit(&(Local_5197.f_26), 0);
				}
			}
			else
			{
				if (func_8() && Local_5197.f_45 == 0)
				{
					Local_5197.f_45 = 1;
					set_bit(&(Local_5197.f_26), 0);
				}
				if (func_301())
				{
					func_302();
					if (func_67(0, iParam0))
					{
						func_304(&(Local_5197.f_606), func_303(), Local_5197.f_604);
						if ((Local_5197.f_603 == 0f && Local_5197.f_604 == 0f) && Local_5197.f_605 == 0f)
						{
							func_305(&(Local_5197.f_607), 1);
						}
						func_306();
						func_307(1);
					}
				}
			}
			break;
		case 1:
			if (func_308())
			{
				if (func_309())
				{
					if (!_0x1bb50cd340a996e6())
					{
						if (!is_bit_set(Local_5197.f_26, 2))
						{
							func_310();
						}
						func_311();
						if (func_312())
						{
							if (func_313())
							{
								if (!is_bit_set(Local_5197.f_26, 4))
								{
									set_bit(&(Local_5197.f_26), 4);
								}
							}
						}
						if (func_314(&iVar0) && is_bit_set(Local_5197.f_26, 4))
						{
							func_206(0);
							func_272(&(Local_5197.f_159), 0, 1);
							if (Local_5197.f_166 > 0 && iVar0 > Global_2097152->f_6019)
							{
								func_272(&(Local_5197.f_168), 0, 1);
							}
							Local_5197.f_47 = iVar0;
							func_307(2);
						}
					}
				}
			}
			break;
		case 2:
			func_315();
			func_316(0);
			if (func_317())
			{
				if (Local_5197.f_161 <= 0)
				{
					Local_5197.f_161 = func_269(&(Local_5197.f_159), 0, 0);
				}
				func_206(1);
				func_99(0);
				set_bit(&(Local_5197.f_26), 5);
				func_307(3);
			}
			break;
		case 3:
			if (func_318())
			{
				func_307(4);
			}
			break;
		case 4:
			if (func_319())
			{
				if (func_320())
				{
					if (!func_268(&uLocal_13510))
					{
						func_272(&uLocal_13510, 0, 0);
					}
					if (func_269(&uLocal_13510, 0, 0) > 2000)
					{
						func_307(5);
					}
				}
			}
			break;
		case 5:
			func_321();
			if (Local_2971.f_740 && is_bit_set(Local_5197.f_26, 20))
			{
				func_307(6);
			}
			break;
		case 6:
			break;
	}
}

void func_40()
{
	if (func_322())
	{
		set_bit(&uLocal_13486, 8);
	}
	else
	{
		clear_bit(&uLocal_13486, 8);
	}
	switch (iVar12265)
	{
		case 0:
			if (func_323(&Local_12276))
			{
				func_324();
				set_bit(&(Local_13286.f_159), 3);
				if (Global_2097152->f_254 > 1 || Global_2097152->f_254 == 0)
				{
					set_bit(&(Local_13286.f_159), 4);
				}
				else if (func_83())
				{
					set_bit(&(Local_13286.f_159), 15);
				}
				if (Global_3145858->f_52526 == 4)
				{
					set_bit(&(Local_13286.f_159), 26);
				}
				else if (Global_3145858->f_52526 == 5)
				{
					set_bit(&(Local_13286.f_159), 27);
				}
				if (func_84(55))
				{
					set_bit(&(Local_13286.f_159), 28);
				}
				if (func_84(54))
				{
					set_bit(&(Local_13286.f_159), 22);
				}
				if (iVar13700 == 0)
				{
					func_325(&uLocal_13702, 0, 0);
				}
				set_bit(&(Local_13286.f_159), 12);
				if (func_326())
				{
					set_bit(&uLocal_13486, 14);
				}
				func_327(1);
			}
			break;
		case 1:
			if (func_328(&Local_12276) && is_bit_set(Local_5197.f_26, 2))
			{
				func_329(&Local_12276);
				func_330();
				func_327(2);
			}
			break;
		case 2:
			func_287(4);
			_hide_hud_component(-1450522739);
			func_327(3);
			break;
		case 3:
			func_331();
			func_332(&Local_12276);
			func_333();
			if (func_268(&(Local_5197.f_159)))
			{
				if (is_bit_set(iVar13484, 5))
				{
					if (func_268(&uLocal_13487))
					{
						if (func_269(&uLocal_13487, 0, 0) >= 1000)
						{
							if (!func_334() || (func_334() && fVar7382 < 15000f))
							{
								func_335("RC_TSTPYP", 1105014447, 5000, 0, 0, 0, 1);
								clear_bit(&uLocal_13486, 5);
								func_270(&uLocal_13487);
							}
						}
					}
					else
					{
						func_280(&uLocal_13487, 0, 0);
					}
				}
			}
			if (is_bit_set(Local_5197.f_26, 5))
			{
				func_336();
				func_327(4);
			}
			break;
		case 4:
			break;
	}
	func_337(&Local_12276);
	if (func_268(&uLocal_7303))
	{
		if (func_269(&uLocal_7303, 0, 0) > 4000)
		{
			_databinding_write_data_bool(&(Local_12276.f_12[10]), false);
			func_270(&uLocal_7303);
		}
	}
}

void func_41()
{
	if (func_338())
	{
		if (func_339())
		{
			func_340(3);
			if ((get_current_ped_weapon(iVar6147, &iVar0, true, 0, false) && iVar0 != -1569615261) || (get_current_ped_weapon(iVar6147, &iVar1, true, 0, false) && iVar1 != -1569615261))
			{
				_hide_ped_weapons(iVar6147, 2, true);
			}
		}
		else if (!is_bit_set(iVar13507, 7))
		{
			if (Local_57[iVar6150]->f_10 > -1 && Local_57[iVar6150]->f_10 < 18)
			{
				iVar2 = Global_3145858->f_49704[Local_57[iVar6150]->f_10]->f_26;
				if (iVar2 > -1)
				{
					if (Global_3145858->f_57980[iVar2]->f_100 != 0)
					{
						set_current_ped_weapon(iVar6147, Global_3145858->f_57980[iVar2]->f_100, false, 0, false, false);
					}
				}
				set_bit(&uLocal_13509, 7);
			}
		}
	}
	func_341(256);
	func_341(512);
}

void func_42(var uParam0)
{
	if (uParam0->f_16)
	{
		_0x702b75dc9d3ede56(true);
		_0xc64abc0676af262b();
	}
	else if (uParam0->f_20 != -1)
	{
		_0x8910c24b7e0046ec();
	}
}

void func_43(var uParam0)
{
	if (uParam0->f_6)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		return;
	}
	if (uParam0->f_7)
	{
		if (!uParam0->f_8)
		{
			func_342(uParam0);
			uParam0->f_8 = 1;
		}
		return;
	}
	iVar0 = func_343();
	if (iVar0 >= 5000)
	{
		if (!func_268(uParam0))
		{
			func_272(uParam0, 0, 0);
			func_270(&(uParam0->f_2));
		}
	}
	else
	{
		if (func_268(uParam0))
		{
			func_270(uParam0);
		}
		if (!func_268(&(uParam0->f_2)))
		{
			func_272(&(uParam0->f_2), 0, 0);
		}
		iVar1 = func_269(&(uParam0->f_2), 0, 0);
		if (iVar1 >= 1000)
		{
			if (iVar0 < iVar1)
			{
				uParam0->f_4++;
			}
			func_272(&(uParam0->f_2), 0, 0);
		}
	}
}

void func_44()
{
	if (func_344())
	{
		return;
	}
	datafile_create(0);
	sVar0 = datafile_get_file_dict(0);
	datadict_set_int(sVar0, "lp", get_cloud_time_as_int());
	if (!is_bit_set(&Global_1048626, 2))
	{
		datadict_set_int(sVar0, "quit", 1);
	}
	Local_41.f_11 = _0xe79c70e77e0973c7(Global_1051116, Local_54.f_1, func_345(0), 0);
	func_346();
	IntToString(Global_1051116, get_hash_key(""), 24);
	func_347(10);
}

void func_45()
{
	func_272(&uVar0, 1, 0);
	while (func_269(&uVar0, 1, 0) < 4500)
	{
		if (!network_is_signed_online())
		{
			return;
		}
		if ((!network_is_game_in_progress() && !_0xf2cbc969c4f090c7()) && !network_is_session_active())
		{
			return;
		}
		if (func_348(255) != 4)
		{
			return;
		}
		if (!func_349(11, 255))
		{
			func_350();
		}
		wait(0);
	}
}

void func_46(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_351(62);
		if (bParam1)
		{
			func_351(69);
		}
	}
	else
	{
		func_352(62);
		func_352(50);
		func_352(69);
	}
}

int func_47()
{
	return Global_1893587->f_2;
}

int func_48()
{
	if (!func_353(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

void func_49(bool bParam0, bool bParam1)
{
	if (func_348(255) == 4)
	{
		return;
	}
	if (func_354(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_352(0);
	}
	else
	{
		if (bParam1)
		{
			func_177(0, 0, 0, 1);
		}
		func_351(0);
		func_355(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_356(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_357(Global_1102219->f_3849, 36);
	func_358(Global_1102219->f_3888, 36);
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_359(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_351(88);
	if (func_360(iParam0, &uVar0))
	{
		func_361(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_352(0);
		}
		return;
	}
	func_362(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_352(0);
	}
}

void func_51(bool bParam0)
{
	if (!bParam0)
	{
		func_352(18);
	}
	else
	{
		func_351(18);
	}
}

bool func_52()
{
	return Global_1572887->f_266 > 0;
}

void func_53(bool bParam0)
{
	if (!bParam0)
	{
		func_352(25);
	}
	else
	{
		func_351(25);
	}
}

void func_54()
{
	func_55(512);
	func_270(Global_1051135);
}

void func_55(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_56()
{
	Global_262153 = 0;
}

void func_57(int iParam0)
{
	func_363(536870912);
	func_363(1073741824);
	func_363(-2147483648);
	func_363(268435456);
	func_18(iParam0);
}

bool func_58(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_59(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_364(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_58(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_365(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_60(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_366(&(Global_1071686->f_28773.f_2), 2);
}

void func_61(var uParam0, var uParam1, int iParam2)
{
	network_set_this_script_is_network_script(iParam2, false, uParam0->f_13);
	func_367();
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	*uParam1 = Global_3145858->f_286;
	func_105(uParam1, 0);
}

void func_62(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_368(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_369(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_352(15);
	}
	else
	{
		func_351(15);
	}
}

void func_64(bool bParam0)
{
	if (func_370())
	{
		Var0 = -1;
		Var0.f_1 = 2;
		Var0.f_1.f_1.f_8 = 3;
		Var0.f_1.f_1.f_18 = 3;
		Var0.f_1.f_1.f_25 = 5;
		Var0.f_1.f_1.f_34 = 2;
		Var0.f_1.f_1.f_37.f_8 = 3;
		Var0.f_1.f_1.f_37.f_18 = 3;
		Var0.f_1.f_1.f_37.f_25 = 5;
		Var0.f_1.f_1.f_37.f_34 = 2;
		if (bParam0)
		{
			Var0 = { *Global_2097152->f_258[0] };
		}
		else
		{
			Global_2097152->f_255 = (Global_2097152->f_255 - 1);
		}
		if (Global_2097152->f_255 < 64)
		{
			*Global_2097152->f_258[Global_2097152->f_255] = { Var0 };
		}
		if (bParam0)
		{
			Global_2097152->f_255++;
		}
	}
}

void func_65()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iLocal_6807[iVar0] = -1;
		iLocal_6840[iVar0] = -1;
		iLocal_6873[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_18726 - 1))
	{
		iLocal_13722[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_255 - 1))
	{
		iLocal_13873[iVar0] = -1;
		iVar0++;
	}
	func_371();
}

void func_66(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			(*Global_1051147)[iVar0] = 0;
			(*Global_1051147)[iVar0]->f_1 = 0;
			iVar0++;
		}
	}
	else
	{
		(*Global_1051147)[iParam0] = 0;
		(*Global_1051147)[iParam0]->f_1 = 0;
	}
}

bool func_67(bool bParam0, int iParam1)
{
	if (!bParam0 && is_bit_set(Local_5197.f_26, 14))
	{
		return true;
	}
	if (bParam0 || func_372(iParam1))
	{
		if (!bParam0)
		{
			Local_5197.f_47 = Local_5197.f_45;
			if (Local_5197.f_47 > Local_5197.f_2.f_3)
			{
				Local_5197.f_2.f_3 = Local_5197.f_47;
			}
		}
		Local_5197.f_46 = Global_2097152->f_6313;
		Local_5197.f_101 = Global_2097152->f_6313;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			Local_5197.f_560[iVar0] = 1;
			Local_5197.f_543[iVar0] = -1;
			iVar0++;
		}
		if (bParam0)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				Local_5197.f_675[iVar0] = -1;
				Local_5197.f_709[iVar0] = func_373();
				Local_5197.f_853[iVar0] = -1;
				iVar0++;
			}
		}
		func_374(&Local_3713, func_83());
		if (is_bit_set(Global_2097152->f_253, 12))
		{
			Local_5197.f_44 = Local_5197.f_45;
		}
		else
		{
			Local_5197.f_44 = Global_2097152->f_254;
		}
		Local_5197.f_162 = (Global_2097152->f_6025 + (Global_2097152->f_6026 * (Local_5197.f_44 - 1)));
		func_375(&(Local_5197.f_594), func_203(10), bParam0);
		func_376(&(Local_5197.f_594), 20000);
		if (func_203(14))
		{
			func_377(&(Local_5197.f_594), 1);
		}
		Local_5197.f_603 = func_378(Global_3145858->f_288);
		Local_5197.f_604 = func_379(Global_3145858->f_287);
		Local_5197.f_605 = func_378(Global_3145858->f_289);
		if (!bParam0)
		{
			Local_5197.f_947 = func_380();
		}
		func_381();
		if (func_382() && !bParam0)
		{
			Local_5197.f_166 = func_383(Global_2097152->f_6020);
		}
		else
		{
			Local_5197.f_166 = Global_2097152->f_6020;
		}
		if (Local_5197.f_166 > 0)
		{
			set_bit(&(Local_5197.f_26), 15);
		}
		else if (Global_2097152->f_6021 > 0 || Global_2097152->f_6021 == -1)
		{
			set_bit(&(Local_5197.f_26), 15);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= (Global_2097152->f_6500 - 1))
			{
				if (is_bit_set(Global_2097152->f_6501[iVar0]->f_44, 8))
				{
					if (Global_2097152->f_6501[iVar0]->f_108 > 0 || Global_2097152->f_6501[iVar0]->f_107 > 0)
					{
						set_bit(&(Local_5197.f_26), 15);
					}
				}
				iVar0++;
			}
		}
		iVar1 = 0;
		while (iVar1 < Global_2097152->f_255)
		{
			if (func_384(iVar1) > 0)
			{
				set_bit(&(Local_5197.f_26), 17);
			}
			iVar1++;
		}
		if (func_385())
		{
			if (func_386())
			{
				Local_5197.f_167 = func_387(Local_5197.f_45);
			}
			else
			{
				Local_5197.f_167 = Global_2097152->f_6021;
			}
		}
		if (func_388())
		{
			set_bit(&(Local_5197.f_26), 11);
		}
		if (Global_3145858->f_452 > 0)
		{
			if (Local_5197.f_445 < Global_3145858->f_452)
			{
				Local_5197.f_445 = Global_3145858->f_452;
			}
		}
		if (Global_3145858->f_36479 > 0)
		{
			if (Local_5197.f_445 < Global_3145858->f_36479)
			{
				Local_5197.f_445 = Global_3145858->f_36479;
			}
		}
		if (Global_2097152->f_6500 > 0)
		{
			if (Local_5197.f_445 < Global_2097152->f_6500)
			{
				Local_5197.f_445 = Global_2097152->f_6500;
			}
			iVar0 = 0;
			while (iVar0 <= (Global_2097152->f_6500 - 1))
			{
				if (is_bit_set(Global_2097152->f_6501[iVar0]->f_44, 3) && is_bit_set(Global_2097152->f_6501[iVar0]->f_45, 1))
				{
					func_389(Global_2097152->f_6501[iVar0]->f_75, Global_2097152->f_6501[iVar0]->f_76);
				}
				iVar0++;
			}
		}
		if (Local_5197.f_445 > 0)
		{
			Local_5197.f_446 = func_390(60, Local_5197.f_445);
		}
		if (!bParam0)
		{
			set_bit(&(Local_5197.f_26), 14);
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_68()
{
	func_391();
	func_392();
	func_393();
	func_395(45623);
	func_396();
	func_397();
}

int func_69()
{
	if (is_bit_set(Local_5197.f_26, 8))
	{
		return 1;
	}
	if (func_398(1))
	{
		set_bit(&(Local_5197.f_26), 8);
		return 0;
	}
	return 0;
}

void func_70()
{
	network_register_host_broadcast_variables(&Local_5197, 948, 54);
	func_399(_0xba24095ea96dfe17(&Local_5197), 948, "RC_serverBD");
	network_register_host_broadcast_variables(&Local_2971, 742, 55);
	func_399(_0xba24095ea96dfe17(&Local_2971), 742, "RC_serverBD_LB");
	network_register_host_broadcast_variables(&uLocal_4455, 742, 55);
	func_399(_0xba24095ea96dfe17(&uLocal_4455), 742, "RC_serverBD_LB_Rounds");
	network_register_host_broadcast_variables(&Local_3713, 742, 55);
	func_399(_0xba24095ea96dfe17(&Local_3713), 742, "RC_serverBD_LB_Unsorted");
	network_register_player_broadcast_variables(&Local_57, 1697, 56);
	func_400(_0x690806bc83bc8ca2(Local_57[0]), 1697, "RC_playerBD");
	network_register_player_broadcast_variables(&Local_1754, 1217, 57);
	func_400(_0x690806bc83bc8ca2(Local_1754[0]), 1217, "g_UGCPlayerBD_Vote");
}

void func_71(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_219();
					break;
				case 2:
					func_219();
					break;
				case 4:
					func_219();
					break;
				case 3:
					func_219();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_219();
			return;
		}
		wait(0);
	}
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_351(128);
	}
	else
	{
		func_352(128);
	}
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_401(16384);
	}
	else
	{
		func_402(16384);
	}
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		func_401(32768);
	}
	else
	{
		func_402(32768);
	}
}

void func_75()
{
	if (func_238())
	{
		iVar2 = 0;
		while (iVar2 <= 15)
		{
			StringCopy(&cVar0, "RCTeam", 16);
			StringIntConCat(&cVar0, iVar2, 16);
			if (!add_relationship_group(&cVar0, uLocal_7312[iVar2]))
			{
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 15)
		{
			iVar3 = 0;
			while (iVar3 <= 15)
			{
				iVar4 = 2;
				if (iVar2 != iVar3)
				{
					iVar4 = Global_2097152->f_6315;
				}
				set_relationship_between_groups(iVar4, &(uLocal_7312[iVar2]), &(uLocal_7312[iVar3]));
				iVar3++;
			}
			iVar2++;
		}
	}
	else if (!add_relationship_group("RCTeam-1", uLocal_7312[0]))
	{
	}
	else
	{
		set_relationship_between_groups(Global_2097152->f_6315, &(uLocal_7312[0]), &(uLocal_7312[0]));
	}
}

void func_76()
{
	_0x2e31aca7477cf00f(iVar6147, "Entity.Relationship", "Player");
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_233(iVar0, 255))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (network_is_player_active(iVar1) && iVar1 != iVar6144)
			{
				_0x2e31aca7477cf00f(get_player_ped(iVar1), "Entity.Relationship", "Enemy");
			}
		}
		iVar0++;
	}
}

void func_77(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = 2442122;
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
	clear_area(vParam0, fParam3, iVar0);
}

void func_78(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

int func_79(float fParam0, float fParam1)
{
	if (fParam0 == 0f || fParam1 == 0f)
	{
		iVar0 = 0;
		iVar1 = 262144;
		if (fParam0 == 0f)
		{
			iVar0 = 8192;
		}
		else
		{
			iVar1 |= 8192;
		}
		if (fParam1 == 0f)
		{
			iVar0 |= 2016;
		}
		else
		{
			iVar1 |= 2016;
		}
		vVar2 = { -16000f, -16000f, -1700f };
		vVar5 = { 16000f, 16000f, 2700f };
		iVar8 = func_403(vVar2, vVar5);
		_0xb56d41a694e42e86(iVar8, iVar0, iVar1, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iVar8, iVar0, iVar1, 0, -1, -1, 0);
		if (fParam0 == 0f)
		{
			_0xefc5c6670e0b99ba();
		}
		return iVar8;
	}
	return 0;
}

void func_80(int iParam0)
{
	Global_17352 = iParam0;
}

void func_81(var uParam0, bool bParam1)
{
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!bParam1)
		{
			*Global_1050050->f_27[iVar18] = { *(*uParam0)[iVar18] };
		}
		else
		{
			*Global_1050050->f_27[iVar18] = { Var0 };
		}
		iVar18++;
	}
	if (bParam1)
	{
	}
}

void func_82(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam1 < 4)
	{
		(*uParam0)[*uParam1] = iParam2;
		uParam0->f_5[*uParam1] = iParam3;
		uParam0->f_10[*uParam1] = iParam4;
		*uParam1++;
	}
}

bool func_83()
{
	return (Global_2097152->f_32 == 1744858848 || Global_2097152->f_32 == -1185533313);
}

bool func_84(int iParam0)
{
	return func_404(&(Global_3145858->f_6), iParam0);
}

void func_85(int iParam0)
{
	if (iParam0 != &Local_57[iVar6149])
	{
		Local_57[iVar6149] = iParam0;
	}
}

void func_86(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(uParam0->f_27[iVar0], "", 64);
		iVar0++;
	}
}

void func_87()
{
	iVar0 = 0;
	while (iVar0 <= 67)
	{
		if (is_bit_set(&(Global_3145858->f_232[func_405(iVar0)]), func_406(iVar0)) || (func_407() && iVar0 < 49))
		{
			iVar1 = func_408(iVar0);
			if (iVar1 != 0)
			{
				chal_net_stop_goal(1852874750, iVar1);
			}
		}
		iVar0++;
	}
}

void func_88()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar2 >= 3)
		{
		}
		else
		{
			*vLocal_8336[iVar2] = { *Global_2097152->f_6035[iVar0] };
			iVar2++;
			iVar0++;
		}
	}
	iVar0 = 1;
	while (iVar0 <= Global_2097152->f_255)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (iVar2 >= 32)
			{
			}
			else
			{
				vVar3 = { *Global_2097152->f_258[iVar0]->f_1[0]->f_8[iVar1] };
				if (!func_354(vVar3))
				{
					*vLocal_8336[iVar2] = { vVar3 };
					iVar2++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar2 < 32)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			if (iVar2 >= 32)
			{
			}
			else
			{
				*vLocal_8336[iVar0] = { *Global_2097152->f_6035[iVar0] };
				iVar2++;
				iVar0++;
			}
		}
	}
}

var func_89()
{
	return &Global_1051212;
}

void func_90()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(*Global_1049283)[iVar0] = { *Global_3145858->f_61343[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(*Global_1049296)[iVar0] = { *Global_3145858->f_61357[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		*(*Global_1049309)[iVar0] = { *Global_3145858->f_61371[iVar0] };
		iVar0++;
	}
	if (func_409())
	{
		func_215(1);
	}
}

bool func_91(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

void func_92(int iParam0)
{
	func_410(2, iParam0);
}

bool func_93(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = iVar6149;
	}
	if (is_bit_set(Local_57[iParam0]->f_13, 10))
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0)
{
	return &Local_57[iParam0] >= 4;
}

bool func_95()
{
	return func_264(iVar6150);
}

void func_96()
{
	if (!func_267())
	{
		set_bit(&(Local_57[iVar6150]->f_13), 5);
	}
}

void func_97(int iParam0)
{
	if (&Global_1048579 != iParam0)
	{
		Global_1048579 = iParam0;
	}
}

void func_98(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!bParam0 && !is_bit_set(iLocal_13, iVar0))
		{
		}
		else if (&Global_1048581)
		{
			if (iVar0 == 1)
			{
				clear_bit(&iLocal_13, iVar0);
			}
			else
			{
				func_411(iVar0, bParam0);
			}
			iVar0++;
		}
	}
}

void func_99(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_412(bParam0);
}

void func_100(var uParam0, var uParam1)
{
	if (!&Global_1048581)
	{
		if (!is_bit_set(uParam0->f_966, 9))
		{
			func_413(&(uParam0->f_973));
			func_414(uParam0);
			func_415(uParam1);
			func_416();
			_text_database_delete("UIC");
			set_bit(&(uParam0->f_966), 9);
		}
	}
	func_417(uParam0);
	func_418(uParam0);
	_display_hud_component(-2124237476);
}

void func_101(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_8))
	{
		_databinding_clear_binding_array(uParam0->f_8);
		_databinding_remove_data_entry(uParam0->f_7);
	}
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		func_419(2);
	}
	else
	{
		func_420(2);
	}
}

void func_103(bool bParam0)
{
	if (bParam0)
	{
		func_419(8);
	}
	else
	{
		func_420(8);
	}
}

void func_104()
{
	func_421();
	Global_1051119 = 0;
}

void func_105(var uParam0, bool bParam1)
{
	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= (func_422(16385) - 1))
	{
		iVar2 = func_423(iVar1);
		func_424(iVar2, func_353(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_106(var uParam0)
{
	if (_uistatemachine_exists(*uParam0))
	{
		uVar0 = *uParam0;
		_uistatemachine_destroy_and_clear(&uVar0);
		_uiflowblock_release(uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_remove_data_entry(uParam0->f_3);
	}
}

void func_107(int iParam0)
{
	iVar0 = func_425(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_108(bool bParam0)
{
	if (!bParam0)
	{
		func_352(14);
	}
	else
	{
		func_351(14);
	}
}

void func_109()
{
	func_426(1);
	func_426(2);
	func_426(4);
	func_426(8);
	func_426(16);
	func_426(32);
	func_426(64);
	func_426(128);
	func_426(256);
	func_426(512);
	func_426(1024);
	func_426(2048);
	func_426(4096);
	func_426(8192);
	func_427();
	func_428();
}

void func_110(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 - ((*Global_263042)[&Global_1296859]->f_68 && iParam0));
}

void func_111(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		func_351(49);
	}
	else
	{
		func_352(49);
	}
}

void func_113()
{
	func_352(85);
}

void func_114(bool bParam0)
{
	if (!bParam0)
	{
		if (func_234(255))
		{
			return;
		}
	}
	clear_bit(&uLocal_13508, 20);
	func_429(&Local_7498);
	iLocal_8131 = 0;
	iLocal_8130 = -1;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		func_430(Local_8132[iVar0]);
		iVar0++;
	}
}

void func_115(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_351(65);
		if (bParam1)
		{
			func_351(69);
		}
	}
	else
	{
		func_352(65);
		func_352(69);
	}
}

void func_116()
{
	func_352(86);
	Global_1102219->f_3846 = 0;
}

void func_117(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_351(70);
		if (bParam2)
		{
			func_351(72);
		}
		Global_1102219->f_3802 = iParam0;
	}
	else
	{
		func_352(70);
		func_352(72);
	}
}

void func_118(bool bParam0)
{
	if (bParam0)
	{
		func_351(109);
		if (!Global_1296859->f_12)
		{
			func_431(16);
		}
	}
	else
	{
		func_352(109);
		if (!Global_1296859->f_12)
		{
			func_431(16);
		}
	}
}

void func_119(bool bParam0)
{
	Global_1102219->f_3671 = 0;
	if (!Global_1296859->f_12 && bParam0)
	{
		func_431(16);
	}
}

void func_120(bool bParam0)
{
	if (!bParam0)
	{
		func_352(127);
	}
	else
	{
		func_351(127);
	}
}

void func_121()
{
	func_351(91);
}

void func_122(var uParam0)
{
	release_sound_id(uParam0->f_4);
	_0x531a78d6bf27014b(func_432(*uParam0));
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	*uParam0 = 0;
}

void func_123(int iParam0)
{
	_0x949b2f9ed2917f5d(iParam0, 0);
	_0x949b2f9ed2917f5d(iParam0, 1);
	_0x949b2f9ed2917f5d(iParam0, 2);
	_0x949b2f9ed2917f5d(iParam0, 3);
	_0x949b2f9ed2917f5d(iParam0, 0);
	_0x949b2f9ed2917f5d(iParam0, 4);
	_0x949b2f9ed2917f5d(iParam0, 5);
	_0x949b2f9ed2917f5d(iParam0, 6);
	_0x949b2f9ed2917f5d(iParam0, 7);
	_0x949b2f9ed2917f5d(iParam0, 8);
	_0x949b2f9ed2917f5d(iParam0, 9);
	_0x949b2f9ed2917f5d(iParam0, 10);
	_0x949b2f9ed2917f5d(iParam0, 11);
	_0x949b2f9ed2917f5d(iParam0, 12);
	_0x949b2f9ed2917f5d(iParam0, 13);
	_0x949b2f9ed2917f5d(iParam0, 14);
	_0x949b2f9ed2917f5d(iParam0, 15);
	_0x949b2f9ed2917f5d(iParam0, 16);
	_0x949b2f9ed2917f5d(iParam0, 17);
	_0x949b2f9ed2917f5d(iParam0, 18);
	_0x949b2f9ed2917f5d(iParam0, 19);
	_0x949b2f9ed2917f5d(iParam0, 20);
	_0x949b2f9ed2917f5d(iParam0, 21);
	_0x949b2f9ed2917f5d(iParam0, 22);
	_0x949b2f9ed2917f5d(iParam0, 23);
	_0x949b2f9ed2917f5d(iParam0, 25);
	_0x949b2f9ed2917f5d(iParam0, 26);
	_0x949b2f9ed2917f5d(iParam0, 27);
	_0x949b2f9ed2917f5d(iParam0, 28);
	_0x949b2f9ed2917f5d(iParam0, 29);
	_0x949b2f9ed2917f5d(iParam0, 30);
	_0x949b2f9ed2917f5d(iParam0, 31);
	_0x949b2f9ed2917f5d(iParam0, 32);
	_0x949b2f9ed2917f5d(iParam0, 33);
}

void func_124(int iParam0)
{
	if (!does_entity_exist(iParam0) || !is_entity_a_ped(iParam0))
	{
		return;
	}
	set_ped_config_flag(iParam0, 366, false);
	set_ped_config_flag(iParam0, 7, false);
	set_ped_config_flag(iParam0, 421, false);
	set_ped_config_flag(iParam0, 149, false);
	set_ped_config_flag(iParam0, 274, false);
	set_ped_config_flag(iParam0, 373, false);
	set_ped_config_flag(iParam0, 97, false);
	set_ped_config_flag(iParam0, 249, false);
	set_ped_config_flag(iParam0, 284, false);
	set_ped_config_flag(iParam0, 419, false);
	set_ped_config_flag(iParam0, 398, false);
	set_ped_config_flag(iParam0, 259, false);
	set_ped_config_flag(iParam0, 40, false);
	set_ped_config_flag(iParam0, 98, false);
	set_ped_config_flag(iParam0, 214, false);
	set_ped_config_flag(iParam0, 253, false);
	set_ped_config_flag(iParam0, 122, false);
	set_ped_config_flag(iParam0, 278, false);
	set_ped_config_flag(iParam0, 266, false);
	set_ped_config_flag(iParam0, 96, false);
	set_ped_config_flag(iParam0, 77, false);
	set_ped_config_flag(iParam0, 286, false);
	set_ped_config_flag(iParam0, 185, false);
	set_ped_config_flag(iParam0, 169, false);
	set_ped_config_flag(iParam0, 305, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 43, false);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 277, false);
	set_ped_config_flag(iParam0, 147, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 337, false);
	set_ped_config_flag(iParam0, 182, false);
	set_ped_config_flag(iParam0, 107, false);
	set_ped_config_flag(iParam0, 2, false);
	set_ped_config_flag(iParam0, 265, false);
	set_ped_config_flag(iParam0, 189, false);
	set_ped_config_flag(iParam0, 319, false);
	set_ped_config_flag(iParam0, 168, false);
	set_ped_config_flag(iParam0, 207, false);
	set_ped_config_flag(iParam0, 246, false);
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 23, false);
	set_ped_config_flag(iParam0, 331, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 120, false);
	set_ped_config_flag(iParam0, 35, false);
	set_ped_config_flag(iParam0, 81, false);
	set_ped_config_flag(iParam0, 129, false);
	set_ped_config_flag(iParam0, 138, false);
	set_ped_config_flag(iParam0, 180, false);
	set_ped_config_flag(iParam0, 233, false);
	set_ped_config_flag(iParam0, 65, false);
	set_ped_config_flag(iParam0, 104, false);
	set_ped_config_flag(iParam0, 309, false);
	set_ped_config_flag(iParam0, 225, false);
	set_ped_config_flag(iParam0, 24, false);
	set_ped_config_flag(iParam0, 217, false);
	set_ped_config_flag(iParam0, 112, false);
	set_ped_config_flag(iParam0, 250, false);
	set_ped_config_flag(iParam0, 105, false);
	set_ped_config_flag(iParam0, 289, false);
	set_ped_config_flag(iParam0, 154, false);
	set_ped_config_flag(iParam0, 5, false);
	set_ped_config_flag(iParam0, 592, false);
	func_433();
}

void func_125(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(iParam0);
	if (decor_exist_on(get_player_ped_script_index(iVar0), "TeamId"))
	{
		decor_remove(get_player_ped_script_index(iVar0), "TeamId");
	}
	if (decor_exist_on(get_player_ped_script_index(iVar0), "MC_EntityID"))
	{
		decor_remove(get_player_ped_script_index(iVar0), "MC_EntityID");
	}
}

void func_126(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_18726 - 1))
	{
		func_434((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_127(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_255 - 1))
	{
		func_434((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_128()
{
	if (func_348(255) == 4 || func_435(0))
	{
		Global_1102219->f_3955 = 1;
		return;
	}
	bVar0 = func_435(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102219->f_4[iVar1] = 0;
		iVar1++;
	}
	func_351(109);
	func_351(131);
	if (bVar0)
	{
		func_351(36);
	}
	Global_1102219->f_3952 = 0;
	Global_1102219->f_3953 = 0;
	Global_1102219->f_3954 = 0;
	Global_1102219->f_3955 = 0;
}

void func_129(bool bParam0)
{
	if (bParam0)
	{
		func_351(31);
	}
	else
	{
		func_352(31);
	}
}

void func_130(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_436(iVar0);
		iVar0++;
	}
	func_160(262144);
	func_160(1048576);
	func_160(4194304);
	func_160(2097152);
	func_178();
	if (bParam0)
	{
		func_160(8388608);
	}
}

void func_131(bool bParam0)
{
	func_437(57, !bParam0);
}

void func_132(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (150 - 1))
	{
		if (!func_438(iVar0))
		{
		}
		else
		{
			func_439(iVar0, iParam0);
		}
		iVar0++;
	}
}

void func_133(bool bParam0, int iParam1, bool bParam2)
{
	if (func_440())
	{
		if (func_441(255))
		{
			if (!func_349(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_438(Global_1893587->f_2) && func_442(Global_1893587->f_2))
		{
			func_443(Global_1893587->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587->f_7 = iParam1;
				func_444(16);
			}
		}
		else if (func_438(Global_1893587->f_2) && !func_445(Global_1893587->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1893587->f_7 = 0;
		func_446(16);
		func_447(bParam2);
		if (bVar0)
		{
			func_446(1);
		}
	}
}

void func_134()
{
	func_448(2);
}

void func_135()
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if (func_233(iVar0, iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			_0x5a91bcef74944e93(iVar2, 30f);
		}
		iVar0++;
	}
}

bool func_136(struct<2> Param0)
{
	return (Param0 != 0 && Param0.f_1 != 0);
}

int func_137(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_138()
{
	return func_449(iVar6144);
}

void func_139(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 < 0 || iVar0 == 4)
		{
		}
		else
		{
			(*uParam0)[iVar0] = &Global_1139381->f_4621.f_36[iVar0];
		}
		iVar0++;
	}
}

void func_140(var uParam0)
{
	iVar2 = 0;
	while (iVar2 < 20)
	{
		(*uParam0)[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if (iVar3 == 20)
		{
		}
		else
		{
			iVar1 = iVar2;
			iVar0 = func_450(Global_34, 0, iVar1, 0);
			if (iVar0 == 0 || iVar0 == -1569615261)
			{
			}
			else if (!func_451(iVar0))
			{
			}
			else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
			{
			}
			else
			{
				(*uParam0)[iVar3] = iVar0;
				iVar3++;
			}
		}
		iVar2++;
	}
	func_452(uParam0, &iVar3);
}

void func_141(bool bParam0)
{
	if (!bParam0)
	{
		func_352(21);
	}
	else
	{
		func_351(21);
	}
}

void func_142()
{
	func_453();
	_0xde544b7ec0c187cc(&(Global_1071686->f_28345));
}

void func_143()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28347));
}

void func_144()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28346));
}

void func_145()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28349));
}

void func_146()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28350));
}

void func_147()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28348));
}

void func_148()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_454(int_to_playerindex(iVar0), 0);
		iVar0++;
	}
}

void func_149(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_34228 - 1))
	{
		if (Global_3145858->f_34229[iVar0]->f_3 != 0)
		{
			func_455(Global_3145858->f_34229[iVar0], (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_150()
{
	(*Global_1100469)[network_player_id_to_int()]->f_36 = { Var0 };
}

void func_151()
{
	(*Global_1100469)[network_player_id_to_int()]->f_29 = { Var0 };
	(*Global_1100469)[network_player_id_to_int()]->f_43 = 0;
	(*Global_1100469)[network_player_id_to_int()]->f_44 = 0;
	Global_1102219->f_3665 = 0;
}

void func_152()
{
	func_456(&(Global_1291734->f_11.f_78));
	func_457(43);
}

void func_153()
{
	func_456(&(Global_1291734->f_581.f_82));
	func_457(87);
}

void func_154()
{
	if (Global_1071686->f_21952.f_581 != 0)
	{
		Global_1071686->f_21952.f_581 = 0;
	}
}

void func_155()
{
	if (_0x179a6f0ee2e79026(&(Global_1071686->f_21952.f_583)))
	{
		_0xde544b7ec0c187cc(&(Global_1071686->f_21952.f_583));
	}
}

void func_156(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_1 = 0;
		func_458(iParam0);
	}
}

void func_157(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
		}
		Global_1071686->f_21689[iParam0]->f_4 = 0;
		func_458(iParam0);
	}
}

void func_158(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_458(iParam0);
	}
}

void func_159(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = 0;
		func_458(iParam0);
	}
}

void func_160(int iParam0)
{
	if (func_459(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_460(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

void func_161(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == 0)
			{
			}
			else
			{
				if (!func_461(&(Global_3145858->f_57980[iVar0]->f_3[iVar1])))
				{
				}
				else
				{
					set_ped_infinite_ammo(*iParam0, false, &(Global_3145858->f_57980[iVar0]->f_3[iVar1]));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_162(int iParam0, var uParam1, bool bParam2)
{
	_0xb7e52a058b07c7e2(iParam0, &uVar0, &uVar4);
	Var8.f_9 = -1591664384;
	if (_0xb881ca836cc4b6d4(&uVar0))
	{
		if (_0x025a1b1fb03fbf61(3, &uVar0, &Var8, 22, 1))
		{
			uParam1->f_22 = Var8.f_4;
			if (bParam2)
			{
				Global_1051130 = Var8.f_4;
			}
		}
	}
	if (_0xb881ca836cc4b6d4(&uVar4))
	{
		if (_0x025a1b1fb03fbf61(3, &uVar4, &Var8, 22, 1))
		{
			uParam1->f_23 = Var8.f_4;
			if (bParam2)
			{
				Global_1051131 = Var8.f_4;
			}
		}
	}
}

void func_163(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_462(&(Global_1139381->f_4796), bParam1);
		func_352(117);
	}
	else
	{
		func_351(117);
	}
}

void func_164()
{
	Var0.f_2 = -1;
	*Global_1051126 = { Var0 };
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		func_351(100);
	}
	else
	{
		func_352(100);
	}
}

void func_166(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == 0)
			{
			}
			else
			{
				func_463(&(Global_3145858->f_57980[iVar0]->f_3[iVar1]), 1f, iParam0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_167(int iParam0, var uParam1)
{
	if ((Global_3145858->f_60002 == 3 || Global_3145858->f_60002 == 0) || (Global_3145858->f_60002 == 2 && !func_84(1)))
	{
		return;
	}
	if (_0xb881ca836cc4b6d4(&(uParam1->f_14)) && _0xb881ca836cc4b6d4(&(uParam1->f_18)))
	{
		_0xec1f85da51d3d6c4(iParam0, &(uParam1->f_14), &(uParam1->f_18));
	}
}

void func_168(bool bParam0)
{
	if (!bParam0)
	{
		func_352(28);
	}
	else
	{
		func_351(28);
	}
}

void func_169(bool bParam0)
{
	if (!bParam0)
	{
		func_352(29);
	}
	else
	{
		func_351(29);
	}
}

void func_170(bool bParam0)
{
	if (bParam0)
	{
		func_401(32);
	}
	else
	{
		func_402(32);
	}
}

void func_171(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		func_401(8);
	}
	else
	{
		func_402(8);
	}
}

void func_173()
{
	Global_1102219->f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3347 = 1;
}

bool func_174(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_464();
	}
	return func_465(64, iParam0);
}

void func_175(bool bParam0)
{
	if (!bParam0)
	{
		func_352(19);
	}
	else
	{
		func_351(19);
	}
}

void func_176(bool bParam0)
{
	if (!bParam0)
	{
		func_352(22);
	}
	else
	{
		func_351(22);
	}
}

void func_177(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_171(iParam0);
	if (!func_466(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_467(128) && !func_435(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_468() == 4)
	{
		func_352(18);
	}
	func_401(1024);
}

void func_178()
{
	if (Global_1071686->f_22961 >= 0f)
	{
		Global_1071686->f_22961 = -1f;
	}
}

void func_179()
{
	trigger_music_event("MC_MUSIC_STOP");
	if (func_84(57))
	{
		set_audio_flag("MusicIgnoreDeathArrest", false);
	}
	if (func_84(72))
	{
		set_audio_flag("MusicIgnoreScreenFade", false);
	}
}

void func_180(bool bParam0)
{
	if (bParam0)
	{
		func_351(139);
	}
	else
	{
		func_352(139);
	}
}

void func_181(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_182(var uParam0, bool bParam1)
{
	bVar0 = false;
	vVar1 = { -16000f, -16000f, -1700f };
	vVar4 = { 16000f, 16000f, 2700f };
	if (*uParam0 != -1)
	{
		if (does_pop_multiplier_area_exist(*uParam0))
		{
			remove_pop_multiplier_area(*uParam0, bVar0);
		}
		set_all_vehicle_generators_active_in_area(vVar1, vVar4, true, !bVar0);
		if (bParam1)
		{
			set_roads_back_to_original(vVar1, vVar4, 0, 1);
		}
	}
}

void func_183(var uParam0)
{
	if (!_0x91a5f9cbebb9d936(*uParam0))
	{
		return;
	}
	remove_scenario_blocking_area(*uParam0, true);
}

void func_184(int iParam0)
{
	if (_does_volume_exist(*iParam0))
	{
		_0x74c2b3dc0b294102(*iParam0);
		_0xa1cfb35069d23c23(*iParam0);
		_delete_volume(*iParam0);
	}
	_0x2e957aa81f2c61c9();
}

void func_185(int iParam0, bool bParam1)
{
	switch (Global_2097152->f_6200[iParam0]->f_3)
	{
		case -2114717494:
		case -536084153:
			if (&Local_7111.f_143[iParam0] != -1)
			{
				_0x9cf1836c03fb67a2(Local_7111.f_143[iParam0], 1);
			}
			break;
		case 101474539:
			if (!bParam1)
			{
				if (func_234(255))
				{
					set_bit(&(Local_7111.f_31), iParam0);
					return;
				}
			}
			func_114(0);
			break;
	}
	func_430(Local_7111.f_32[iParam0]);
	set_bit(&(Local_7111.f_7), iParam0);
	clear_bit(&(Local_7111.f_6), iParam0);
	clear_bit(&(Local_7111.f_8), iParam0);
	clear_bit(&(Local_7111.f_31), iParam0);
}

void func_186()
{
	iVar0 = 0;
	while (iVar0 < 64)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			func_469(iVar0, iVar1, 1);
			func_470(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	if (has_model_loaded(389769403))
	{
		set_model_as_no_longer_needed(389769403);
	}
	if (has_model_loaded(-29086678))
	{
		set_model_as_no_longer_needed(-29086678);
	}
}

bool func_187()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_255 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if (func_471(iVar0, iVar1) || Global_2097152->f_258[iVar0]->f_1[iVar1]->f_33 != -1)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_188(bool bParam0)
{
	if (func_84(42))
	{
		set_ped_model_is_suppressed(-1892280447, bParam0);
		set_ped_model_is_suppressed(-1598866821, bParam0);
		set_ped_model_is_suppressed(-1295720802, bParam0);
		set_ped_model_is_suppressed(-1124266369, bParam0);
		set_ped_model_is_suppressed(730092646, bParam0);
		set_ped_model_is_suppressed(480688259, bParam0);
		set_ped_model_is_suppressed(1654513481, bParam0);
		set_ped_model_is_suppressed(-1143398950, bParam0);
		set_ped_model_is_suppressed(-885451903, bParam0);
		set_ped_model_is_suppressed(-829273561, bParam0);
		set_ped_model_is_suppressed(90264823, bParam0);
		set_ped_model_is_suppressed(846659001, bParam0);
		set_ped_model_is_suppressed(1464167925, bParam0);
		set_ped_model_is_suppressed(-1790499186, bParam0);
		set_ped_model_is_suppressed(-1747620994, bParam0);
		set_ped_model_is_suppressed(545068538, bParam0);
	}
}

void func_189(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		delete_entity(&iVar0);
	}
}

void func_190(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_191(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (is_entity_a_vehicle(iVar0))
		{
			iVar1 = net_to_veh(*uParam0);
			delete_mission_train(&iVar1);
		}
		else
		{
			return;
		}
	}
	*uParam0 = 0;
}

void func_192(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_472(iVar0) && network_does_network_id_exist(uParam0[iVar0]))
		{
			if (network_has_control_of_network_id(uParam0[iVar0]))
			{
				func_189((*uParam0)[iVar0], 0);
			}
			else
			{
				func_190((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_193(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!func_472(iVar0) && does_entity_exist(uParam0[iVar0]))
		{
			delete_object((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_194(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (_does_propset_exist(uParam0[iVar0]))
		{
			_delete_propset(uParam0[iVar0], true, true);
		}
		iVar0++;
	}
}

void func_195(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if (Global_3145858->f_453[iVar0]->f_43 != 0 && is_model_valid(Global_3145858->f_453[iVar0]->f_43))
		{
			if (has_model_loaded(Global_3145858->f_453[iVar0]->f_43))
			{
				set_model_as_no_longer_needed(Global_3145858->f_453[iVar0]->f_43);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_36479)
	{
		if (Global_3145858->f_36480[iVar0]->f_1 != 0)
		{
			iVar3 = Global_3145858->f_36480[iVar0]->f_1;
			iVar1 = _0x635423d55ca84fc8(iVar3);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar4 = _0x8df5f6a19f99f0d5(iVar3, iVar2);
				if (is_model_valid(iVar4))
				{
					set_model_as_no_longer_needed(iVar4);
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2097152->f_5635)
	{
		if (Global_2097152->f_5636[iVar0]->f_6 != 0 && is_model_valid(Global_2097152->f_5636[iVar0]->f_6))
		{
			if (has_model_loaded(Global_2097152->f_5636[iVar0]->f_6))
			{
				set_model_as_no_longer_needed(Global_2097152->f_5636[iVar0]->f_6);
			}
		}
		iVar0++;
	}
	func_473();
	if (bParam0)
	{
		func_474();
		func_475();
	}
}

void func_196()
{
	if (func_476(iVar8316))
	{
		func_477(&iLocal_8318, 1, 1);
	}
	func_270(&uLocal_8310);
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 534854562:
			iVar0 = 0;
			break;
		case -1176661506:
			iVar0 = 1;
			break;
		case 408982081:
			iVar0 = 2;
			break;
		case 2094371892:
		case 2116390633:
			iVar0 = 3;
			break;
		case -1:
		default:
			iVar0 = -1;
			break;
	}
	func_478(iVar0, iVar0);
}

bool func_198()
{
	if (func_479() <= 1)
	{
		return true;
	}
	return is_bit_set(Local_5197.f_26, 9);
}

void func_199(bool bParam0)
{
	Global_1940144->f_15 = !bParam0;
}

void func_200()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_480(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_481(Global_3145858->f_37246[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_201()
{
	if (!&Global_1048581)
	{
		_0x65f040d91001ed4b(0);
		_0xce7690c0a0d1c36d(5000);
		func_482(0);
	}
}

void func_202(int iParam0, int iParam1)
{
	_0x59f0aff3e0a1b019(iParam0, 1548507267, iParam1);
	_0x59f0aff3e0a1b019(iParam0, -1241684019, iParam1);
}

bool func_203(int iParam0)
{
	return func_404(&(Global_2097152->f_3), iParam0);
}

void func_204(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 || iParam0);
}

void func_205(bool bParam0)
{
	if (is_entity_dead(iVar6146))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_233(iVar0, 255))
		{
			iVar1 = int_to_participantindex(iVar0);
			iVar2 = network_get_player_index(iVar1);
			iVar3 = get_player_ped(iVar2);
			if (is_entity_dead(iVar3))
			{
			}
			else if (is_ped_on_mount(iVar6146) && is_ped_on_mount(iVar3))
			{
				set_entity_no_collision_entity(get_mount(iVar6146), get_mount(iVar3), bParam0);
			}
			else if (is_ped_in_any_vehicle(iVar3, false) && is_ped_in_any_vehicle(iVar6146, false))
			{
				set_entity_no_collision_entity(get_vehicle_ped_is_in(iVar6146, false), get_vehicle_ped_is_in(iVar3, false), bParam0);
			}
		}
		iVar0++;
	}
}

void func_206(int iParam0)
{
	if (bVar6142)
	{
		if (Local_5197.f_851 != iParam0)
		{
			Local_5197.f_851 = iParam0;
		}
	}
}

void func_207(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

void func_208()
{
	script_race_shutdown();
}

void func_209(bool bParam0)
{
	if (!bParam0)
	{
		func_483(0);
	}
	Global_1940311->f_2 = bParam0;
}

void func_210(int iParam0)
{
	if (iParam0 != 0)
	{
		func_484(352539363, 1);
	}
}

void func_211()
{
	Global_1296679->f_8 = { func_485() };
	Global_1296679->f_12 = { func_485() };
	*Global_1296679 = { func_485() };
	Global_1296679->f_4 = { func_485() };
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		*Global_1296679->f_53[iVar0] = { func_485() };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		*Global_1296679->f_16[iVar0] = { func_485() };
		iVar0++;
	}
	Global_1296679->f_146 = 0;
	Global_1296679->f_147 = 0;
	Global_1296843->f_4 = { func_485() };
	*Global_1296843 = { func_485() };
}

void func_212(bool bParam0)
{
	_set_local_player_can_use_pickups_with_this_model(-936393949, !bParam0);
	_set_local_player_can_use_pickups_with_this_model(-1891315382, !bParam0);
}

void func_213()
{
	Global_1051212 = -1;
}

bool func_214()
{
	return &Global_1048583;
}

void func_215(bool bParam0)
{
	if (!&Global_1048583)
	{
		if (bParam0)
		{
			Global_1048583 = 1;
		}
	}
	else if (!bParam0)
	{
		vVar0 = -1;
		vVar0.f_1 = -1;
		Global_1048583 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			*(*Global_1049283)[iVar3] = { vVar0 };
			*(*Global_1049296)[iVar3] = { vVar0 };
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			*(*Global_1049309)[iVar3] = { vVar0 };
			iVar3++;
		}
	}
}

void func_216()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (&Global_3145858->f_57980[iVar0]->f_3[0] == 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 15)
			{
				if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == 0)
				{
				}
				else
				{
					_0xc3896d03e2852236(&(Global_3145858->f_57980[iVar0]->f_3[iVar1]));
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_217()
{
	if (is_audio_scene_active("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene"))
	{
		stop_audio_scene("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene");
	}
}

int func_218(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_486())
	{
		return 0;
	}
	if (!func_487())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_488(&Global_0, 8);
	}
	func_488(&Global_0, 1);
	return 1;
}

void func_219()
{
	terminate_this_thread();
}

var func_220(int iParam0)
{
	Var1 = { func_489(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_221(int iParam0, int iParam1)
{
	Var1 = { func_490(iParam0, iParam1) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

bool func_222(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 149530285:
			*iParam1 = -2128989164;
			break;
		case -1742691940:
			*iParam1 = 1656779954;
			break;
		case 628988510:
			*iParam1 = 959379466;
			break;
		case -500771278:
			*iParam1 = -1768766169;
			break;
		default:
			break;
	}
	switch (iParam2)
	{
		case -784189810:
			*iParam0 = -2121293852;
			break;
		case 1744858848:
			*iParam0 = 1158425475;
			break;
		case 218185167:
			*iParam0 = -576139815;
			break;
		case -1185533313:
			*iParam0 = -1052052312;
			break;
		default:
			break;
	}
}

bool func_225(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_226()
{
	switch (Global_2097152->f_31)
	{
		case 149530285:
			sVar0 = "RC_TYP_HRS";
			break;
		case -1742691940:
			sVar0 = "RC_TYP_VEH";
			break;
		case 628988510:
			sVar0 = "RC_TYP_BOA";
			break;
		case -500771278:
			sVar0 = "RC_TYP_FOO";
			break;
		default:
			sVar0 = "RC_TYP_HRS";
			break;
	}
	return _get_label_text(sVar0);
}

char* func_227(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_228(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

void func_229()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iLocal_6740[iVar0] = -1;
		iVar0++;
	}
}

bool func_230(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		if (!func_491(iVar0))
		{
			return false;
		}
		iVar1 = get_player_ped(iParam0);
		if (is_entity_dead(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_231(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_465(128, iParam0);
}

int func_232()
{
	iVar0 = 255;
	iVar1 = func_492();
	if (func_493(iVar1))
	{
		return player_id();
	}
	if (does_entity_exist(iVar1))
	{
		if (is_entity_a_ped(iVar1))
		{
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (is_ped_a_player(iVar2))
			{
				iVar0 = network_get_player_index_from_ped(iVar2);
			}
		}
	}
	return iVar0;
}

bool func_233(int iParam0, int iParam1)
{
	iVar0 = func_494(iParam0);
	if (iVar0 == -1)
	{
		if (iParam1 == 255)
		{
			iParam1 = int_to_participantindex(iParam0);
		}
		if (network_is_participant_active(iParam1))
		{
			iLocal_6740[iParam0] = 1;
			return true;
		}
		else
		{
			iLocal_6740[iParam0] = 0;
			return false;
		}
	}
	return iVar0 == 1;
}

bool func_234(int iParam0)
{
	return func_348(iParam0) == 4;
}

bool func_235(int iParam0)
{
	if (func_236(iParam0) == 0)
	{
		return true;
	}
	if (is_bit_set(Local_57[iParam0]->f_13, 15) || is_bit_set(Local_57[iParam0]->f_13, 10))
	{
		return true;
	}
	return false;
}

int func_236(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = iVar6149;
	}
	return &(Local_57[iParam0]);
}

int func_237(var uParam0)
{
	return func_495(1, uParam0);
}

bool func_238()
{
	if (Global_2097152->f_6314 > 1 || Global_2097152->f_6316 > 0)
	{
		return true;
	}
	return false;
}

bool func_239(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (iParam0 != iParam1 || iParam0 == -1)
	{
		switch (Global_2097152->f_6315)
		{
			case 1:
			case 2:
				iVar0 = 1;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	return iVar0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (bParam2)
		{
			return func_496();
		}
		else
		{
			return func_497();
		}
	}
	switch (iParam0)
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		default:
			break;
	}
	return 1105014447;
}

char* func_241(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_498(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_242(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, bParam5);
	return uVar17;
}

void func_243(var uParam0)
{
	Global_1102219->f_26.f_3364 = uParam0;
}

void func_244()
{
	Global_390124->f_18 = uVar6143;
	Global_390124 = get_id_of_this_thread();
	Global_390124->f_18.f_1 = func_235(iVar6150);
	Global_390124->f_18.f_3 = &Local_57[iVar6150];
	Global_390124->f_18.f_14 = Local_57[iVar6150]->f_10;
}

void func_245()
{
	Global_390124->f_36.f_94 = Local_5197.f_24;
}

bool func_246(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_247()
{
	if (!bVar6143)
	{
		return;
	}
}

void func_248()
{
	if (Global_390124->f_18.f_10 != 0)
	{
		Local_57[iVar6150]->f_30 = Global_390124->f_18.f_10;
	}
	if (Global_390124->f_18.f_15 != -1)
	{
		func_499(Global_390124->f_18.f_15);
		Global_390124->f_18.f_15 = -1;
	}
}

bool func_249()
{
	if (func_235(iVar6150))
	{
		return true;
	}
	if (iVar6151 != -1)
	{
		return true;
	}
	if (func_236(iVar6150) != 5 && func_236(iVar6150) != 6)
	{
		return true;
	}
	if (func_500() >= 1)
	{
		return true;
	}
	if (func_501(1))
	{
		return true;
	}
	return false;
}

bool func_250()
{
	return false;
}

void func_251(int iParam0)
{
	get_event_data(1, iParam0, &iVar0, 4);
	switch (iVar0)
	{
		case 164:
			func_502(iParam0);
			break;
		case 163:
			func_503(iParam0);
			break;
		case 165:
			func_504(iParam0);
			break;
		case 160:
			func_505(iParam0);
			break;
		case 161:
			func_506(iParam0);
			break;
		case 166:
			func_507(iParam0);
			break;
		case 167:
			func_508(iParam0);
			break;
	}
}

void func_252(int iParam0)
{
	get_event_data(1, iParam0, &Var0, 32);
	if (!does_entity_exist(Var0.f_1) || !is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	iVar32 = get_ped_index_from_entity_index(Var0.f_1);
	if (!is_ped_a_player(iVar32))
	{
		return;
	}
	iVar33 = network_get_player_index_from_ped(iVar32);
	if (!network_is_player_a_participant(iVar33))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (is_entity_a_ped(Var0))
	{
		iVar34 = get_ped_index_from_entity_index(Var0);
		if (is_ped_a_player(iVar34))
		{
			func_509(iVar33, iVar34, Var0);
			if (iVar6146 == iVar32)
			{
				func_510(func_489(1273489824), floor(Var0.f_2));
			}
		}
		else
		{
			func_511(iVar33, iVar34, Var0);
		}
	}
	else if (is_entity_an_object(Var0))
	{
		func_512(iVar33, Var0);
	}
}

void func_253(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 8))
	{
		if (Var0.f_1 == iVar6143)
		{
			if (Var0.f_2 != 738282662)
			{
				func_513(get_weapon_type_from_pickup_type(Var0.f_2), Var0.f_5, Var0.f_6, Var0.f_7 == 0);
				func_271(-68117845, 1);
			}
			iVar8 = 0;
			while (iVar8 < Global_3145858->f_6822)
			{
				if (iVar8 < 200)
				{
					if (Var0 == &uLocal_8637[iVar8])
					{
						if (is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 3))
						{
							if (has_ped_got_weapon(iVar6146, get_weapon_type_from_pickup_type(Var0.f_2), 0, false))
							{
								if (_is_weapon_two_handed(get_weapon_type_from_pickup_type(Var0.f_2)))
								{
									_hide_ped_weapons(iVar6146, 2, true);
								}
								set_current_ped_weapon(iVar6146, get_weapon_type_from_pickup_type(Var0.f_2), true, 0, false, false);
								_0x0a2ab7b7abc055f4(iVar6146);
								if (!is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 20))
								{
									_0x5230d3f6ee56cfe6(iVar6146, 0);
								}
								Jump @369; //curOff = 234
							}
						}
						else if (is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 16))
						{
							if (has_ped_got_weapon(iVar6146, get_weapon_type_from_pickup_type(Var0.f_2), 0, false) && !_0xcb690f680a3ea971(iVar6146, 6))
							{
								set_current_ped_weapon(iVar6146, get_weapon_type_from_pickup_type(Var0.f_2), true, 0, false, false);
								_0x0a2ab7b7abc055f4(iVar6146);
								if (!is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 20))
								{
									_0x5230d3f6ee56cfe6(iVar6146, 0);
								}
							}
							else
							{
								iVar8++;
							}
							if (is_bit_set(Global_2097152->f_6463, 0))
							{
								if (Var0.f_4 == 178323656)
								{
									iVar10 = Global_2097152->f_6467;
									set_pickup_uncollectable(Var0, 1);
									bVar9 = true;
								}
								else if (Var0.f_4 == 291474213)
								{
									iVar10 = Global_2097152->f_6468;
									set_pickup_uncollectable(Var0, 1);
									bVar9 = true;
								}
								else if (Var0.f_4 == 1547041634)
								{
									iVar10 = Global_2097152->f_6469;
									set_pickup_uncollectable(Var0, 1);
									bVar9 = true;
								}
								if (bVar9)
								{
									func_514(to_float(iVar10), 0);
									StringCopy(&cVar11, _create_var_string(2, "RC_RM_POSNUM", iVar10), 16);
									func_515(&cVar11, 1, -2, 0, 0, 0, 0);
								}
							}
							if (Var0.f_4 == 888737253)
							{
								func_271(-1008746630, 1);
								set_bit(&iLocal_13657, 3);
								iLocal_13659 = 1;
							}
							else if (Var0.f_4 == 70776250)
							{
								set_bit(&iLocal_13657, 6);
							}
							if (Var0.f_1 == iVar6143 || Var0.f_1 == iVar6152)
							{
								func_516(Var0.f_2, Var0.f_4);
								if (Var0.f_2 != 738282662 || Var0.f_4 == 888737253)
								{
									use_particle_fx_asset("scr_net_race_checkpoints");
									vVar13 = { get_pickup_coords(Var0) };
									start_particle_fx_non_looped_at_coord("scr_net_race_barrel_break", vVar13, 0f, 0f, 0f, 1f, false, false, false);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_254(int iParam0)
{
	if (!get_event_data(1, iParam0, &vVar0, 3))
	{
		return;
	}
	if (vVar0.y == iVar6143)
	{
		iVar3 = vVar0.z;
		switch (vVar0.x)
		{
			case 1:
				func_517(iVar3);
				break;
			case 2:
				if (iVar3 == -1888453608)
				{
					func_518("PCFR2", 2000, 0, 0, 0, 1);
				}
				else if (func_519(iVar3))
				{
					func_517(iVar3);
				}
				break;
			case 0:
				break;
		}
	}
}

void func_255(int iParam0)
{
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = Var0.f_40;
		iVar42 = Var0.f_8;
		if (Var0.f_11 <= 0)
		{
			return;
		}
		iVar43 = get_id_of_this_thread();
		bVar44 = false;
		iVar45 = 0;
		while (iVar45 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar45] == iVar43)
			{
				bVar44 = true;
			}
			else
			{
				iVar45++;
			}
		}
		if (!bVar44)
		{
			return;
		}
		func_520(iVar41, iVar42, Var0.f_40, Var0.f_8);
	}
}

void func_256(int iParam0)
{
	if (!bVar6142)
	{
		return;
	}
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = Var0.f_40;
		if (Var0.f_11 <= 0)
		{
			return;
		}
		iVar42 = get_id_of_this_thread();
		bVar43 = false;
		iVar44 = 0;
		while (iVar44 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar44] == iVar42)
			{
				bVar43 = true;
			}
			else
			{
				iVar44++;
			}
		}
		if (!bVar43)
		{
			return;
		}
		func_521(iVar41);
	}
}

void func_257(int iParam0)
{
	if (get_event_data(1, iParam0, &iVar0, 2))
	{
		vVar2 = { get_pickup_coords(iVar0) };
		use_particle_fx_asset("scr_net_race_checkpoints");
		start_particle_fx_non_looped_at_coord("scr_net_race_barrel_break", vVar2, 0f, 0f, 0f, 1f, false, false, false);
	}
}

void func_258(int iParam0)
{
	if (&iLocal_6840[iParam0] != -1)
	{
		func_270(Local_6971[iParam0]);
		if (bVar6142)
		{
			func_522(iParam0);
		}
		else
		{
			func_523(iParam0);
		}
	}
	else if (bVar6142)
	{
		func_524(iParam0);
	}
	else
	{
		func_525(iParam0);
	}
}

void func_259(int iParam0)
{
	if (!func_233(iParam0, 255))
	{
		return;
	}
	iVar0 = func_526(iParam0, 255);
	if (is_bit_set(Local_5197.f_742, iVar0))
	{
		return;
	}
	if (&iLocal_6840[iVar0] != -1 || func_527(iVar0))
	{
		return;
	}
	if (&Local_5197.f_709[iVar0] == func_373())
	{
		iVar1 = int_to_participantindex(iParam0);
		Local_5197.f_709[iVar0] = iVar1;
	}
	if (is_bit_set(Local_57[iParam0]->f_13, 22) || is_bit_set(Local_57[iParam0]->f_13, 21))
	{
		set_bit(&(Local_5197.f_742), iVar0);
	}
}

void func_260(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (fParam0 == 0f || fParam1 == 0f)
	{
		iVar0 = 0;
		if (fParam0 == 0f)
		{
			iVar0 = 8192;
		}
		if (fParam1 == 0f)
		{
			iVar0 |= 2016;
		}
		_0xf45e46deecf7df6e(iVar0, 0, 0, -1, -1);
	}
	_0xab0d553fe20a6e25(func_528(fParam0, fParam1));
	set_vehicle_density_multiplier_this_frame(fParam2);
	_0xc0258742b034dfaf(fParam1);
	_0xdb48e99f8e064e56(fParam1);
	_0xba0980b5c0a11924(fParam0);
	_0x28cb6391acedd9db(fParam0);
	set_random_vehicle_density_multiplier_this_frame(fParam2);
	set_parked_vehicle_density_multiplier_this_frame(fParam2);
	set_disable_random_trains_this_frame(bParam3);
}

void func_261(var uParam0, var uParam1)
{
	if (!is_bit_set(uParam0->f_7, 0))
	{
		return;
	}
	func_529(uParam0, uParam1);
	func_530(uParam0, uParam1);
}

void func_262()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_480(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_531(iVar0, 0, 0f, 0);
		}
		iVar0++;
	}
}

bool func_263(int iParam0)
{
	return is_bit_set(Local_57[iParam0]->f_13, 5);
}

bool func_264(int iParam0)
{
	return is_bit_set(Local_57[iParam0]->f_13, 3);
}

bool func_265(int iParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = 0;
	if (Local_57[iParam0]->f_4 > Local_57[iParam2]->f_4)
	{
		iVar0 = 1;
	}
	else if (Local_57[iParam0]->f_4 == Local_57[iParam2]->f_4)
	{
		if (Local_57[iParam0]->f_3 > Local_57[iParam2]->f_3)
		{
			iVar0 = 1;
		}
		else if (Local_57[iParam0]->f_3 == Local_57[iParam2]->f_3)
		{
			if (!bParam3 && bVar6141)
			{
				iVar0 = 1;
			}
			else if (func_532(Local_57[iParam0]->f_3))
			{
				fVar1 = func_533(iParam2, get_entity_coords(iParam4, true, false), Local_57[iParam2]->f_3, &(Local_57[iParam2]->f_6), 1, 0);
				if (fParam1 <= fVar1)
				{
					iVar0 = 1;
				}
			}
			else if (func_83() && func_269(&(Local_57[iParam0]->f_22), 0, 0) > func_269(&(Local_57[iParam2]->f_22), 0, 0))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_266(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (Local_57[iParam0]->f_1 < Local_57[iParam1]->f_1)
	{
		iVar0 = 1;
	}
	else if (Local_57[iParam0]->f_1 == Local_57[iParam1]->f_1)
	{
		if (Local_57[iParam0]->f_2 < Local_57[iParam1]->f_2)
		{
			iVar0 = 1;
		}
		else if (Local_57[iParam0]->f_2 == Local_57[iParam1]->f_2)
		{
			if (iParam0 < iParam1)
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_267()
{
	return func_263(iVar6150);
}

bool func_268(var uParam0)
{
	return uParam0->f_1;
}

int func_269(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(*uParam0, get_network_time());
		}
		else
		{
			return get_time_difference(*uParam0, get_network_time_accurate());
		}
	}
	return get_time_difference(*uParam0, get_game_timer());
}

void func_270(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_271(int iParam0, int iParam1)
{
	chal_add_goal_progress_int(1852874750, iParam0, iParam1);
}

void func_272(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

void func_273(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Var0 = 161;
	Var0.f_1 = iParam1;
	Var0.f_5 = iParam0;
	Var0.f_4 = iParam2;
	if (!bParam3)
	{
		uVar6 = func_534(4, 8);
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, player_id());
	}
	if (_0x179a6f0ee2e79026(&uVar6))
	{
		trigger_script_event(1, &Var0, 6, 48, &uVar6);
	}
}

void func_274(int iParam0)
{
	iLocal_13982 = iParam0;
}

int func_275(int iParam0, float fParam1, bool bParam2)
{
	if (!does_entity_exist(Global_1296859->f_9))
	{
		return 0;
	}
	return func_535(Global_1296859->f_9, iParam0, fParam1, bParam2);
}

bool func_276(int iParam0)
{
	return is_bit_set(Local_57[iParam0]->f_13, 9);
}

void func_277(int iParam0)
{
	iLocal_13500 = iParam0;
}

bool func_278(int iParam0)
{
	if (iParam0 >= (Local_5197.f_44 - 1) && Local_5197.f_44 != 0)
	{
		return true;
	}
	return false;
}

bool func_279()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (func_233(iVar0, iVar1) && !func_235(iVar0))
		{
			if (!func_264(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_280(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

void func_281(int iParam0)
{
	if (func_435(115) && func_435(116))
	{
		func_536(&(Global_1139381->f_4854), Global_1139381->f_4854.f_13, iParam0);
		func_352(116);
		func_352(115);
	}
}

void func_282()
{
	if (func_537(255))
	{
		if (!func_538())
		{
		}
	}
}

void func_283(int iParam0)
{
	if (!func_539(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

bool func_284(int iParam0)
{
	return &Local_57[iParam0] >= 5;
}

void func_285(int iParam0)
{
	func_540(0, 0, iParam0, 129, -1, 0, -1);
}

bool func_286()
{
	if (func_541(255))
	{
		iLocal_13635 = 1;
		return true;
	}
	if (func_542(iVar6144, 1024))
	{
		return true;
	}
	if (is_bit_set(Local_5197.f_26, 4))
	{
		return true;
	}
	return false;
}

void func_287(int iParam0)
{
	if (!func_459(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_543(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

bool func_288(struct<2> Param0)
{
	iVar0 = get_unique_int_for_player(iVar6142);
	if ((func_268(&uLocal_13638) && func_269(&uLocal_13638, 0, 0) > 60000) || func_544())
	{
		if (iVar13632 < 15)
		{
			if (func_545())
			{
				_0x00a15b94cba4f76f(iVar13569);
				Local_13573 = 0;
			}
			else if (iVar13632 == 3)
			{
				_0x00a15b94cba4f76f(iVar13508);
				Local_13512 = 0;
			}
			func_546(15);
			set_bit(&uLocal_13509, 2);
		}
	}
	if (!is_bit_set(iVar13505, 6))
	{
		if (!func_547())
		{
		}
		else
		{
			set_bit(&uLocal_13509, 6);
		}
	}
	switch (iVar13632)
	{
		case 0:
			func_272(&uLocal_13638, 0, 0);
			if (is_entity_visible(iVar6145))
			{
				set_entity_visible(iVar6145, false);
			}
			func_548(7);
			func_549(1);
			func_550();
			func_133(1, 0, 1);
			func_211();
			animpostfx_stop_all();
			if (func_84(43))
			{
				set_random_trains(false);
			}
			func_546(1);
		case 1:
			if (func_447(0))
			{
				func_551(-2101264851);
				func_546(2);
			}
			break;
		case 2:
			if (func_552())
			{
				set_bit(&(Local_57[iVar6148]->f_13), 21);
				func_546(3);
			}
			break;
		case 3:
			if (func_298() < 2)
			{
				func_270(&uLocal_13638);
				if (iVar13508 == 0)
				{
					func_553(&uLocal_7273, 0, 1);
					Var2.f_44 = 4;
					Var2.f_52 = -1;
					Local_13512 = { Var2 };
					StringCopy(&(Local_13512.f_1), "JIP_JOINING", 16);
					StringCopy(&(Local_13512.f_3), "JIP_ERROR_INIRC", 16);
					Local_13512.f_43 = 1;
					Local_13512.f_44[0] = 45095138;
					Local_13512.f_42 = 1;
					func_554();
					func_555(&Local_13512, 0);
				}
				else if (_0x07954320d77f6a3d(iVar13508) >= 3)
				{
					if (!is_screen_faded_in())
					{
						do_screen_fade_in(0);
					}
					iVar1 = func_556(&Local_13512, -1218098620, &(Local_13512.f_49), 1);
					if (iVar1 == 0)
					{
						_0x00a15b94cba4f76f(iVar13508);
						Local_13512 = 0;
						func_6();
						_0x2e399eafbeea74d5();
						do_screen_fade_out(0);
						func_285(1);
						Global_1051146 = 1;
					}
				}
				return false;
			}
			else
			{
				if (!func_268(&uLocal_13644))
				{
					func_280(&uLocal_13644, 0, 0);
				}
				if (func_269(&uLocal_13644, 0, 0) < 5000)
				{
					return false;
				}
			}
			if (!func_268(&uLocal_13638))
			{
				func_272(&uLocal_13638, 0, 0);
			}
			_0x00a15b94cba4f76f(iVar13508);
			Local_13512 = 0;
			do_screen_fade_out(0);
			func_546(4);
			break;
		case 4:
			func_557(1);
			if (func_558())
			{
				set_bit(&(Local_57[iVar6148]->f_13), 14);
				func_546(5);
				func_62(0, 28);
			}
			else if (bVar13631)
			{
				func_546(12);
			}
			else
			{
				func_546(10);
			}
			break;
		case 5:
			if (Local_5197.f_851 && func_353(_0x51f33dbc1a41cbfd(), 2048))
			{
				func_546(15);
				return false;
			}
			if (iVar0 == -1 || !is_bit_set(Local_5197.f_708, iVar0))
			{
				if (!func_268(&uLocal_13640))
				{
					func_272(&uLocal_13640, 0, 0);
				}
				else if (func_269(&uLocal_13640, 0, 0) > 10000)
				{
					func_546(15);
				}
				return false;
			}
			func_559();
			func_560(Param0);
			func_561(5);
			func_546(6);
			break;
		case 6:
			if (func_562())
			{
				func_546(7);
			}
			break;
		case 7:
			if (!is_bit_set(iVar13505, 6))
			{
				return false;
			}
			func_18(512);
			func_546(8);
		case 8:
			if (_is_loading_screen_active())
			{
				return false;
			}
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			func_553(&uLocal_7273, 0, 1);
			func_546(9);
		case 9:
			clear_bit(&(Local_57[iVar6148]->f_13), 15);
			set_bit(&(Local_57[iVar6148]->f_13), 9);
			func_78(65536);
			func_563();
			return true;
		case 10:
			if (iVar13569 == 0)
			{
				Var63.f_44 = 4;
				Var63.f_52 = -1;
				Local_13573 = { Var63 };
				StringCopy(&(Local_13573.f_1), "JIP_SPECTATE", 16);
				StringCopy(&(Local_13573.f_3), "JIP_CON_SPEC", 16);
				Local_13573.f_43 = 2;
				Local_13573.f_44[0] = -767935747;
				Local_13573.f_44[1] = 45095138;
				func_554();
				func_555(&Local_13573, 0);
				return false;
			}
			if (_0x07954320d77f6a3d(iVar13569) < 3)
			{
				return false;
			}
			func_272(&uLocal_7267, 0, 0);
			func_546(11);
			break;
		case 11:
			if (!is_screen_faded_in())
			{
				do_screen_fade_in(0);
			}
			iVar1 = func_556(&Local_13573, -1218098620, &(Local_13573.f_49), 1);
			if (iVar1 == 0)
			{
				func_546(12);
				do_screen_fade_out(0);
				iLocal_13635 = 1;
			}
			else if (iVar1 == 1 || func_269(&uLocal_7267, 0, 0) > 30000)
			{
				do_screen_fade_out(0);
				iLocal_13634 = 1;
			}
			break;
		case 12:
			clear_bit(&(Local_57[iVar6148]->f_13), 14);
			func_564(1);
			func_566(7, func_565(), 0, 0);
			func_567(iVar6148, 1);
			func_272(&uLocal_13642, 0, 0);
			func_546(13);
			break;
		case 13:
			if (iVar6149 <= -1 || iVar6149 >= 32)
			{
				if (func_268(&uLocal_13642))
				{
					if (func_269(&uLocal_13642, 0, 0) > 30000)
					{
						func_546(15);
					}
				}
				else
				{
					func_272(&uLocal_13642, 0, 0);
				}
				return false;
			}
			if (func_568() != 7)
			{
				return false;
			}
			if (!is_bit_set(iVar13505, 6))
			{
				return false;
			}
			func_546(14);
		case 14:
			func_553(&uLocal_7273, 0, 1);
			func_18(512);
			func_195(0);
			_display_hud_component(128623374);
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			set_bit(&(Local_57[iVar6148]->f_13), 10);
			clear_bit(&(Local_57[iVar6148]->f_13), 15);
			func_569(&uLocal_13646);
			func_570(&uLocal_13646);
			if (!func_541(255))
			{
				func_571();
			}
			return true;
		case 15:
			func_553(&uLocal_7273, 0, 1);
			func_177(0, 0, 0, 1);
			Var124.f_44 = 4;
			Var124.f_52 = -1;
			Local_13512 = { Var124 };
			StringCopy(&(Local_13512.f_1), "ALERT_ERROR_MSG", 16);
			func_554();
			if (func_544())
			{
				StringCopy(&(Local_13512.f_3), "JIP_ERROR_DONE", 16);
				Local_13512.f_43 = 1;
				Local_13512.f_44[0] = 45095138;
				_0x778d4733e0f2f265(1);
			}
			else
			{
				StringCopy(&(Local_13512.f_3), "JIP_ERROR_RETRY", 16);
				Local_13512.f_43 = 2;
				Local_13512.f_44[0] = 1737041538;
				Local_13512.f_44[1] = 45095138;
			}
			func_555(&Local_13512, 0);
			func_546(16);
			break;
		case 16:
			if (_0x07954320d77f6a3d(iVar13508) < 3)
			{
				return false;
			}
			func_272(&uLocal_13642, 0, 0);
			func_546(17);
			break;
		case 17:
			if (is_entity_visible(iVar6145))
			{
				set_entity_visible(iVar6145, false);
			}
			if (!is_screen_faded_in())
			{
				do_screen_fade_in(0);
			}
			iVar1 = func_556(&Local_13512, -1218098620, &(Local_13512.f_49), 1);
			if (func_544())
			{
				if (func_268(&uLocal_13642))
				{
					if (func_269(&uLocal_13642, 0, 0) > 7500)
					{
						iLocal_13634 = 1;
					}
				}
				if (iVar1 == 0)
				{
					_0x2e399eafbeea74d5();
					func_285(1);
					Global_1051146 = 1;
				}
			}
			else if (iVar1 == 0)
			{
				func_553(&uLocal_7273, 1, 1);
				do_screen_fade_out(0);
				func_546(3);
			}
			else if (iVar1 == 1)
			{
				set_bit(&uLocal_13509, 2);
			}
			break;
	}
	return false;
}

bool func_289(struct<2> Param0)
{
	if (!is_bit_set(iVar13505, 1))
	{
		if (!func_572())
		{
		}
		else
		{
			set_bit(&uLocal_13509, 1);
		}
	}
	if (!is_bit_set(iVar13505, 6))
	{
		if (!func_547())
		{
		}
		else
		{
			set_bit(&uLocal_13509, 6);
		}
	}
	switch (func_573())
	{
		case 0:
			func_550();
			func_133(1, 0, 1);
			if (is_ped_swimming(iVar6145))
			{
				clear_ped_tasks(iVar6145, 1, 0);
			}
			func_549(0);
			func_574(&Local_13286);
			if (func_84(43))
			{
				set_random_trains(false);
			}
			if (func_8())
			{
				Global_265377->f_124517.f_71.f_53 = { func_575(921725912, 7) };
				func_576();
				func_577();
			}
			func_561(1);
			func_102(0);
			func_103(0);
			func_578(0);
		case 1:
			if (func_447(0))
			{
				func_551(-2101264851);
				func_561(2);
			}
			break;
		case 2:
			if (func_579())
			{
				func_206(1);
				func_580();
				set_bit(&(Local_57[iVar6148]->f_13), 20);
				func_581(&uVar0, 0);
				func_561(3);
			}
			break;
		case 3:
			if (!func_268(&uLocal_13700))
			{
				func_272(&uLocal_13700, 0, 0);
			}
			if (!func_582() || !func_583())
			{
				if (func_269(&uLocal_13700, 0, 0) < 30000)
				{
					return false;
				}
			}
			func_499(-1);
			func_560(Param0);
			func_561(4);
			break;
		case 4:
			if (is_bit_set(Local_5197.f_26, 18))
			{
				func_561(5);
			}
			break;
		case 5:
			if (func_584())
			{
				func_561(6);
			}
			break;
		case 6:
			if (func_585())
			{
				func_561(7);
			}
			break;
		case 7:
			if (func_586())
			{
				func_561(8);
			}
			break;
		case 8:
			if (Local_5197.f_24 == 0)
			{
				return false;
			}
			func_557(0);
			func_561(9);
		case 9:
			if (!func_17())
			{
				return false;
			}
			func_18(2);
			func_561(10);
		case 10:
			if (!is_bit_set(iVar13505, 1))
			{
				return false;
			}
			if (!is_bit_set(iVar13505, 6))
			{
				return false;
			}
			func_587(1);
			Local_57[iVar6148]->f_14 = { get_entity_coords(iVar6145, true, false) };
			set_bit(&(Local_57[iVar6148]->f_13), 0);
			_display_hud_component(128623374);
			func_588();
			func_589(&uLocal_9902);
			func_18(4);
			_set_hidof_env_blur_params(false, false, 0f, 0f, 0f, 0f);
			return true;
	}
	return false;
}

bool func_290()
{
	if (iVar7267 == 0)
	{
		iLocal_7270 = 0;
		func_62(0, 8);
		destroy_all_cams(true);
		set_bit(&(Local_57[iVar6150]->f_13), 1);
		if (!func_8() && !func_276(iVar6150))
		{
			func_78(2);
		}
		func_590(1);
	}
	if (iVar7267 == 1)
	{
		if (is_bit_set(Local_5197.f_26, 2))
		{
			if (func_591(Local_5197.f_158))
			{
				if (&Global_1049277 < 4)
				{
					if (!func_592(0))
					{
						return false;
					}
				}
				Global_1049277 = 0;
				Global_1049278 = 0;
				Global_1049264 = 1;
				func_553(&uLocal_7273, 0, 1);
				iLocal_7270 = 0;
				func_590(2);
			}
			else if (iVar7268 != 0 && is_screen_faded_out())
			{
				do_screen_fade_in(1000);
			}
		}
	}
	if (iVar7267 == 2)
	{
		switch (iVar7268)
		{
			case 0:
				if (func_593())
				{
					func_590(3);
				}
				break;
			case 1:
			default:
				if (!is_screen_faded_in())
				{
					do_screen_fade_in(250);
				}
				set_bit(&(Local_57[iVar6150]->f_13), 2);
				set_bit(&(Local_57[iVar6150]->f_13), 17);
				animpostfx_stop_all();
				func_141(0);
				func_590(3);
				break;
		}
	}
	if (iVar7267 == 3)
	{
		func_553(&uLocal_7273, 0, 1);
		func_160(8388608);
		return true;
	}
	return false;
}

void func_291()
{
	if (!func_276(iVar6150))
	{
		func_272(&(Local_57[iVar6150]->f_18), 0, 1);
		if (func_370())
		{
			func_272(&(Local_57[iVar6150]->f_20), 0, 1);
		}
	}
	else
	{
		func_594(&(Local_57[iVar6150]->f_18), Local_5197.f_159);
		if (func_370() && Local_57[iVar6150]->f_3 <= 1)
		{
			func_272(&(Local_57[iVar6150]->f_20), 0, 1);
		}
	}
	func_272(&(Local_57[iVar6150]->f_22), 0, 0);
	if (!is_string_null_or_empty(&(Global_2097152->f_6311)))
	{
		func_518(&(Global_2097152->f_6311), 10000, 0, 0, 0, 1);
	}
	func_595();
	set_ped_config_flag(iVar6147, 286, false);
	func_62(1, 2);
	func_596(0);
	func_597(Global_1048684);
	func_3(32);
	func_598();
	_0xf620f47b4f4a78c4(&Local_5197, &Local_13985);
	set_bit(&uLocal_13508, 18);
	func_570(&uLocal_13646);
	if (func_276(iVar6150))
	{
		func_553(&uLocal_7273, 0, 1);
	}
	else
	{
		func_18(1024);
	}
	func_195(0);
}

void func_292(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 || iParam0);
}

void func_293()
{
	func_599();
	func_600();
	func_601(Local_57[iVar6157]->f_3, Local_57[iVar6157]->f_6);
	func_602();
	if (!func_93(iVar6150))
	{
		func_603(0);
	}
	func_604();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_605(iVar0);
		iVar0++;
	}
	func_606();
	if (Local_5197.f_445 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_5197.f_446 - 1))
		{
			if (iVar8432 >= Local_5197.f_445)
			{
				func_607();
				iLocal_8434 = 0;
				func_608();
			}
			if (iVar8432 < Global_3145858->f_452)
			{
				func_609(iVar8432);
				func_610(iVar8432);
			}
			if (iVar8432 < Global_3145858->f_36479)
			{
				func_611(iVar8432);
				func_612(iVar8432);
			}
			if (iVar8432 < Global_2097152->f_6500)
			{
				func_613(iVar8432);
			}
			iLocal_8434 = iVar8432 + 1;
			iVar0++;
		}
	}
	func_614();
	func_615();
	func_616();
	func_617();
	func_618();
	func_619();
	func_620();
	func_621();
	func_622();
	set_bit(&uLocal_13508, 6);
}

void func_294(bool bParam0)
{
	if (func_268(&(Local_57[iVar6149]->f_18)))
	{
		if (bParam0)
		{
			Local_57[iVar6149]->f_1 = 88400000;
		}
		else
		{
			Local_57[iVar6149]->f_1 = (func_269(&(Local_57[iVar6149]->f_18), 0, 1) + iVar13960);
		}
		func_270(&(Local_57[iVar6149]->f_18));
	}
	func_270(&(Local_57[iVar6149]->f_22));
}

bool func_295()
{
	return func_500() > 6;
}

void func_296()
{
	if (bVar6148 && func_623())
	{
		set_ped_reset_flag(iVar6147, 25, true);
	}
	if (func_268(&uLocal_13492) && func_500() >= 6)
	{
		_0x2f901291ef177b02(iVar13489, 0);
		func_270(&uLocal_13492);
	}
	switch (func_500())
	{
		case 0:
			if (((func_95() || func_267()) || Local_5197.f_24 == 4) || func_93(-1))
			{
				func_624();
				func_294(0);
				func_625(2);
			}
			break;
		case 2:
			if (func_626())
			{
				if (func_627())
				{
					if (func_334())
					{
						if (func_628())
						{
							func_625(3);
						}
					}
					else
					{
						func_625(4);
					}
				}
				else if (func_629())
				{
					if (func_334())
					{
						if (func_628())
						{
							func_625(3);
						}
					}
					else if (func_628() && func_630(0))
					{
						func_548(16);
						clear_bit(&uLocal_13508, 19);
						func_625(6);
					}
				}
				else
				{
					if (!is_bit_set(iVar13506, 13))
					{
						func_553(&uLocal_7273, 1, 1);
						set_bit(&uLocal_13508, 13);
					}
					if (func_628() && func_630(0))
					{
						clear_bit(&uLocal_13508, 19);
						func_631();
						func_625(5);
					}
				}
			}
			break;
		case 3:
			if (is_player_control_on(iVar6144))
			{
				func_62(0, 40);
			}
			bVar10 = iVar6151 == -1;
			if (iVar6151 != -1 && Local_57[iVar6150]->f_52 != -2)
			{
				bVar11 = true;
				if (Local_57[iVar6157]->f_52 != -2)
				{
					Local_57[iVar6150]->f_52 = Local_57[iVar6157]->f_52;
					uLocal_7273.f_12 = Local_57[iVar6157]->f_52;
					bVar11 = false;
				}
				if (!func_268(&uLocal_13978))
				{
					func_272(&uLocal_13978, 0, 0);
				}
				else if (func_269(&uLocal_13978, 0, 0) >= 5000)
				{
					bVar11 = false;
				}
				if (bVar11)
				{
					return;
				}
			}
			if (func_632(&uLocal_7273, &iLocal_6157, bVar10, 1))
			{
				if (uLocal_7273.f_16)
				{
					func_548(16);
				}
				else if (uLocal_7273.f_20 != -1)
				{
					if (_is_anim_scene_loaded(uLocal_7273.f_20, true, false))
					{
						if (!_is_anim_scene_started(uLocal_7273.f_20, false))
						{
							start_anim_scene(uLocal_7273.f_20);
							func_548(16);
						}
					}
					else
					{
						return;
					}
				}
				if (uLocal_7273.f_12 != -1)
				{
					Local_57[iVar6150]->f_52 = uLocal_7273.f_12;
				}
				func_175(1);
				if (bVar6146)
				{
					if (is_ped_on_mount(iVar6147))
					{
						clear_ped_tasks(get_mount(iVar6147), 1, 0);
						task_stand_still(get_mount(iVar6147), -1);
					}
					set_cam_affects_aiming(&(uLocal_7273[0]), false);
				}
				if (func_629())
				{
					bVar9 = true;
				}
				if (!func_630(bVar9))
				{
					return;
				}
				if (func_268(&uLocal_13980))
				{
					if (func_269(&uLocal_13980, 0, 0) < 3000)
					{
						return;
					}
				}
				else
				{
					func_280(&uLocal_13980, 0, 0);
					return;
				}
				if (bVar9)
				{
					clear_bit(&uLocal_13508, 19);
					func_625(6);
				}
				else
				{
					func_553(&uLocal_7273, 1, 1);
					set_bit(&uLocal_13508, 13);
					func_631();
					func_633(&uLocal_7273);
					func_625(5);
				}
			}
			break;
		case 4:
			bVar13 = func_634(&bVar12);
			disable_control_action(1, 1644850270, false);
			if (is_cam_active(iVar7297))
			{
				if (!func_476(iVar7295))
				{
					iLocal_7297 = func_635("POS_SPEC", -416594956, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
					func_636(iVar7295, 20, 1, 1);
					func_636(iVar7295, 13, 1, 1);
					func_636(iVar7295, 11, 1, 1);
				}
			}
			bVar14 = false;
			if (func_637(iVar7295, 1))
			{
				bVar14 = true;
			}
			if (!bVar14)
			{
				if (func_629() || func_638())
				{
					bVar9 = true;
				}
				if (!func_630(0))
				{
					return;
				}
				if (!bVar12)
				{
					return;
				}
				if (!func_628())
				{
					return;
				}
				func_631();
				if (!bVar13)
				{
					return;
				}
			}
			if (bVar9)
			{
				clear_bit(&uLocal_13508, 19);
				func_477(&iLocal_7297, 1, 1);
				func_336();
				func_625(6);
			}
			else if (bVar14)
			{
				clear_bit(&uLocal_13508, 19);
				set_bit(&uLocal_13508, 13);
				func_631();
				func_477(&iLocal_7297, 1, 1);
				func_625(5);
			}
			break;
		case 5:
			if (func_629() || func_638())
			{
				func_168(1);
				func_477(&iLocal_7297, 1, 1);
				func_625(6);
				return;
			}
			if (!is_bit_set(iVar13506, 2))
			{
				func_168(0);
				if ((bVar6148 || !func_231(255)) || func_639(255))
				{
					if (func_639(255))
					{
						func_169(0);
					}
					func_640();
					if (is_bit_set(iVar13506, 13))
					{
						func_641();
					}
					func_566(7, func_642(func_267()), 1, 250);
				}
				set_bit(&uLocal_13508, 2);
			}
			if (is_screen_faded_out())
			{
				if (is_cam_active(iVar7297))
				{
					destroy_cam(iVar7297, false);
					render_script_cams(false, false, 3000, true, false, 0);
				}
			}
			if (func_231(255))
			{
				if (func_568() == 7)
				{
					if (is_bit_set(iVar13484, 0))
					{
						func_643(&uLocal_13702);
						clear_bit(&uLocal_13486, 0);
					}
					if (is_bit_set(iVar13506, 13))
					{
						func_402(64);
						func_155();
						func_553(&uLocal_7273, 0, 1);
						if (is_cam_active(iVar7297))
						{
							destroy_cam(iVar7297, false);
							render_script_cams(false, false, 3000, true, false, 0);
						}
						clear_bit(&uLocal_13508, 13);
					}
					if ((func_268(&uLocal_13492) && func_269(&uLocal_13492, 0, 0) >= 5000) && Local_12276.f_968 == -1)
					{
						_0x2f901291ef177b02(iVar13489, 0);
						func_270(&uLocal_13492);
					}
				}
				else
				{
					_0xc64abc0676af262b();
					_0x77d65669a05d1a1a();
				}
			}
			else
			{
				_0xc64abc0676af262b();
				_0x77d65669a05d1a1a();
			}
			break;
		case 6:
			func_548(16);
			func_644();
			if (!func_645())
			{
				return;
			}
			if (!func_646())
			{
				return;
			}
			if (!is_bit_set(Local_57[iVar6150]->f_13, 12))
			{
				set_bit(&(Local_57[iVar6150]->f_13), 12);
			}
			if (!func_647())
			{
				return;
			}
			func_648(13);
			func_411(1, 0);
			func_411(3, 0);
			func_287(262144);
			func_649();
			if (!func_235(iVar6150) && func_650())
			{
				func_651();
			}
			if (is_bit_set(iVar13484, 0))
			{
				func_643(&uLocal_13702);
				clear_bit(&uLocal_13486, 0);
			}
			trigger_music_event("MC_MUSIC_STOP");
			if (is_bit_set(iVar13506, 13))
			{
				func_553(&uLocal_7273, 0, 1);
				clear_bit(&uLocal_13508, 13);
			}
			if (func_638())
			{
				set_bit(&uLocal_13509, 12);
				if (!is_bit_set(iVar13507, 13))
				{
					if ((!bVar6148 || func_652(255)) || func_174(255))
					{
						do_screen_fade_out(0);
						func_401(64);
						func_175(1);
						func_51(1);
						func_53(1);
						func_350();
						set_bit(&uLocal_13509, 13);
						return;
					}
				}
				else if (is_bit_set(iVar13507, 13) && func_652(255))
				{
					return;
				}
				do_screen_fade_out(0);
				func_51(1);
				func_625(9);
				return;
			}
			func_548(15);
			func_653(1);
			func_625(7);
			break;
		case 7:
			if (Local_5197.f_24 == 6)
			{
				if (func_8())
				{
					func_625(9);
					return;
				}
				if (!func_654())
				{
					return;
				}
				if (!func_8())
				{
					func_655(&Local_13286, 1);
				}
				func_656(1);
				if (!func_93(-1))
				{
					if (Local_5197.f_45 > 1 && (Local_5197.f_65 > 1 || Local_5197.f_83 > 0))
					{
						if (func_657())
						{
							set_bit(Global_1048626, 0);
							func_658(Global_2097152->f_32, Global_2097152->f_31, 1, 0, 1);
						}
						else
						{
							set_bit(Global_1048626, 1);
							func_658(Global_2097152->f_32, Global_2097152->f_31, 0, 1, 1);
						}
					}
					else
					{
						func_658(Global_2097152->f_32, Global_2097152->f_31, 0, 0, 1);
					}
				}
				if (func_138() <= 3)
				{
					Var15 = { func_489(-589206625) };
					func_510(Var15, 1);
				}
				if (!func_370())
				{
					set_bit(&(Local_12276.f_966), 10);
				}
				iVar17 = 0;
				while (iVar17 < 8)
				{
					iVar0[iVar17] = iVar17;
					iVar17++;
				}
				StringCopy(&cVar18, _get_label_text(func_659(Global_2097152->f_32)), 64);
				if (!is_string_null_or_empty(&(Global_3145858->f_108)))
				{
					cVar18 = { Global_3145858->f_108 };
				}
				func_660(&Local_2971, &uLocal_13660, &cVar18, &Local_5197, &(Local_5197.f_2), &(Global_3145858->f_11), Local_13286.f_159, Local_13286.f_160, Local_13286.f_162, &iVar0, Global_2097152->f_31, -1, Local_5197.f_44, (*Global_263042)[iVar6150]->f_1.f_55, 0);
				func_81(&(Local_5197.f_745), func_84(14));
				func_625(8);
			}
			break;
		case 8:
			if (func_479() <= 1)
			{
				func_625(9);
			}
			else
			{
				if (network_is_host_of_this_script())
				{
					if (func_661())
					{
						func_662();
						set_bit(&(Local_5197.f_26), 10);
					}
				}
				func_663();
				if (is_bit_set(Local_5197.f_26, 10))
				{
					func_625(9);
					if (!func_198())
					{
						func_664();
					}
				}
			}
			break;
		case 9:
			if ((!bVar6146 || func_652(255)) || func_665(255))
			{
				func_53(1);
				if (&Global_1048581)
				{
					if (!&Global_1048586)
					{
						if (!is_screen_faded_out())
						{
							return;
						}
					}
				}
				if (!is_bit_set(iVar13507, 13))
				{
					func_401(64);
					func_175(1);
					func_51(1);
					func_350();
					set_bit(&uLocal_13509, 13);
				}
				return;
			}
			clear_bit(&uLocal_13509, 13);
			if (!func_198())
			{
				if (is_bit_set(iVar13484, 0))
				{
					func_106(&uLocal_13702);
					clear_bit(&uLocal_13486, 0);
				}
			}
			func_179();
			if (is_bit_set(Local_57[iVar6150]->f_13, 4))
			{
				func_666(1);
			}
			else
			{
				func_667();
			}
			func_262();
			if (func_8())
			{
				func_668(&(Global_265377->f_124517.f_71.f_53));
			}
			func_669(func_138());
			func_625(10);
			break;
		case 10:
			set_bit(&uLocal_13508, 0);
			func_85(7);
			break;
	}
}

int func_297(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_670(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_298()
{
	return Local_5197.f_24;
}

bool func_299()
{
	if (!func_671(16))
	{
		return false;
	}
	if (!func_671(32768))
	{
		return false;
	}
	return true;
}

int func_300()
{
	uVar1 = func_534(4, 8);
	iVar0 = count_player_bits(&uVar1);
	return iVar0;
}

bool func_301()
{
	if (is_bit_set(Local_5197.f_26, 19))
	{
		return true;
	}
	if (!func_268(&(Local_5197.f_156)))
	{
		func_272(&(Local_5197.f_156), 0, 0);
	}
	if (func_269(&(Local_5197.f_156), 0, 0) < 30000)
	{
		uVar4 = func_672();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!_0x72b2e00c9bac6789(&uVar4, iVar0))
			{
			}
			else
			{
				iVar2 = int_to_playerindex(iVar0);
				if (!network_is_player_active(iVar2) || !network_is_player_a_participant(iVar2))
				{
					return false;
				}
				iVar3 = network_get_participant_index(iVar2);
				iVar1 = iVar3;
				if (!func_233(iVar1, iVar3))
				{
					return false;
				}
				if (!is_bit_set(Local_57[iVar1]->f_13, 19))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	set_bit(&(Local_5197.f_26), 19);
	func_270(&(Local_5197.f_156));
	return true;
}

void func_302()
{
	if (bVar6143 && !is_bit_set(Local_5197.f_26, 18))
	{
		vVar0 = { Global_3145858->f_196 };
		iVar3 = func_673();
		iVar3 |= 1048576 | 1 | 524288 | 24 | 40;
		clear_area(vVar0, 5000f, iVar3);
		set_bit(&(Local_5197.f_26), 18);
	}
}

float func_303()
{
	fVar0 = func_528(Local_5197.f_603, Local_5197.f_605);
	return fVar0;
}

void func_304(var uParam0, float fParam1, float fParam2)
{
	bVar0 = false;
	vVar1 = { -16000f, -16000f, -1700f };
	vVar4 = { 16000f, 16000f, 2700f };
	*uParam0 = add_pop_multiplier_area(vVar1, vVar4, fParam1, fParam2, bVar0, true);
	if (fParam1 == 0f && fParam2 == 0f)
	{
		set_all_vehicle_generators_active_in_area(vVar1, vVar4, false, !bVar0);
	}
}

void func_305(var uParam0, bool bParam1)
{
	vVar0 = { -16000f, -16000f, -1700f };
	vVar3 = { 16000f, 16000f, 2700f };
	iVar6 = 15;
	if (bParam1)
	{
		iVar6 |= 48;
	}
	*uParam0 = add_scenario_blocking_area(vVar0, vVar3, 1, iVar6);
}

void func_306()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else
		{
			iVar3 = int_to_participantindex(iVar0);
			iVar4 = network_get_player_index(iVar3);
			iVar5 = get_unique_int_for_player(iVar4);
			iVar6 = func_674(iVar4);
			if (func_675(iVar6))
			{
				iVar7 = func_676(iVar5, iVar6);
				if (iVar7 > -1)
				{
					Local_5197.f_853[iVar5] = iVar7;
				}
				else
				{
					iVar8 = Local_57[iVar0]->f_11;
					if (iVar8 == -1)
					{
					}
					else
					{
						iVar8 = (iVar8 - 1);
						if (is_bit_set(iVar2, iVar8))
						{
						}
						else
						{
							Local_5197.f_853[iVar5] = iVar8;
							set_bit(&iVar2, iVar8);
						}
					}
				}
				iVar0++;
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (!func_233(iVar0, 255))
					{
					}
					else
					{
						iVar9 = int_to_participantindex(iVar0);
						iVar10 = network_get_player_index(iVar9);
						iVar11 = get_unique_int_for_player(iVar10);
						iVar12 = func_674(iVar10);
						if (func_675(iVar12))
						{
							iVar13 = func_676(iVar11, iVar12);
							if (iVar13 > -1)
							{
								Local_5197.f_853[iVar11] = iVar13;
							}
							else if (&Local_5197.f_853[iVar11] != -1)
							{
							}
							else
							{
								iVar1 = 0;
								while (iVar1 <= 31)
								{
									if (!is_bit_set(iVar2, iVar1))
									{
										Local_5197.f_853[iVar11] = iVar1;
										set_bit(&iVar2, iVar1);
									}
									else
									{
										iVar1++;
									}
								}
							}
							iVar0++;
						}
					}
				}
			}
		}
	}
}

void func_307(int iParam0)
{
	if (iParam0 != Local_5197.f_24)
	{
		Local_5197.f_24 = iParam0;
	}
}

bool func_308()
{
	switch (func_677())
	{
		case 0:
			iVar0 = func_678();
			iVar1 = func_679();
			iVar2 = func_680();
			if (can_register_mission_entities(iVar0, iVar1, iVar2, 0))
			{
				func_681(1);
			}
			break;
		case 1:
			if (func_682())
			{
				func_681(2);
			}
			break;
		case 2:
			if (func_683())
			{
				func_681(3);
			}
			break;
		case 3:
			if (func_684())
			{
				func_681(4);
			}
			break;
		case 4:
			if (func_686(&(Local_5197.f_238.f_36), 45623, 88243))
			{
				func_681(5);
			}
			break;
		case 5:
			if (func_687())
			{
				func_681(6);
			}
			break;
		case 6:
			func_195(0);
			func_681(7);
		case 7:
			return true;
	}
	return false;
}

bool func_309()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else if (is_bit_set(Local_57[iVar0]->f_13, 15) || is_bit_set(Local_57[iVar0]->f_13, 10))
		{
		}
		else if (!is_bit_set(Local_57[iVar0]->f_13, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_310()
{
	set_bit(&(Local_5197.f_26), 2);
	Local_5197.f_158 = get_network_time_accurate();
}

void func_311()
{
	if (!func_312())
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_233(iVar0, 255))
			{
			}
			else if (is_bit_set(Local_57[iVar0]->f_13, 15) || is_bit_set(Local_57[iVar0]->f_13, 10))
			{
			}
			else if (!is_bit_set(Local_57[iVar0]->f_13, 2))
			{
				bVar1 = false;
			}
			else
			{
				iVar0++;
			}
		}
		if (bVar1)
		{
			Local_5197.f_163 = get_network_time_accurate();
			set_bit(&(Local_5197.f_26), 3);
		}
	}
}

bool func_312()
{
	return is_bit_set(Local_5197.f_26, 3);
}

bool func_313()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else if (is_bit_set(Local_57[iVar0]->f_13, 15) || is_bit_set(Local_57[iVar0]->f_13, 10))
		{
		}
		else if (!is_bit_set(Local_57[iVar0]->f_13, 17))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_314(int iParam0)
{
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else if (is_bit_set(Local_57[iVar0]->f_13, 15) || is_bit_set(Local_57[iVar0]->f_13, 10))
		{
		}
		else if (!func_94(iVar0))
		{
			return false;
		}
		else
		{
			*iParam0++;
		}
		iVar0++;
	}
	return true;
}

void func_315()
{
	if (network_is_session_active())
	{
		if (func_688())
		{
			func_206(1);
		}
	}
}

void func_316(bool bParam0)
{
	bVar7 = false;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!is_bit_set(Local_57[iVar0]->f_13, 22) || is_bit_set(Local_57[iVar0]->f_13, 10))
		{
		}
		else if (!Local_6163[iVar0]->f_3)
		{
		}
		else
		{
			iVar1 = Local_57[iVar0]->f_24;
			if (func_689(iVar0))
			{
				iVar1 = 0;
			}
			bVar7 = func_690(iVar0);
			if (bParam0 && (func_263(iVar0) || bVar7))
			{
				iVar4 = 1;
				iVar5 = 0;
				fVar6 = func_691(iVar0, Local_6163[iVar0]->f_5, Local_6163[iVar0]->f_6);
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (iVar3 == iVar0)
					{
					}
					else if (!is_bit_set(Local_57[iVar3]->f_13, 22) || is_bit_set(Local_57[iVar3]->f_13, 10))
					{
					}
					else if (!Local_6163[iVar3]->f_3)
					{
					}
					else
					{
						iVar4++;
						if (!func_263(iVar3) && !bVar7)
						{
						}
						else if (func_689(iVar3) && !bVar7)
						{
						}
						else if (func_265(iVar0, fVar6, iVar3, Local_6163[iVar3]->f_5, Local_6163[iVar3]->f_6))
						{
							iVar5++;
						}
					}
					iVar3++;
				}
				iVar1 = (iVar4 - iVar5);
			}
			iVar2 = Local_57[iVar0]->f_1;
			if (func_263(iVar0))
			{
				if (func_385())
				{
					iVar2 = 87400000;
				}
				else
				{
					iVar2 = 88400000;
				}
			}
			if (func_238() && !is_bit_set(Local_57[iVar0]->f_13, 10))
			{
				iVar1 = &Local_5197.f_543[Local_57[iVar0]->f_9];
			}
			iVar8 = Local_57[iVar0]->f_2;
			if (func_83())
			{
				iVar8 = (Local_57[iVar0]->f_3 - 1);
			}
			Var9 = { Local_6163[iVar0]->f_10 };
			if (func_214())
			{
				uVar17 = Local_57[iVar0]->f_9;
				iVar18 = func_692(Global_3145858->f_61343[0]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar19 = func_692(Global_3145858->f_61343[1]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar20 = func_692(Global_3145858->f_61343[2]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar21 = func_692(Global_3145858->f_61343[3]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar22 = func_692(Global_3145858->f_61357[0]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar23 = func_692(Global_3145858->f_61357[1]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar24 = func_692(Global_3145858->f_61357[2]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar25 = func_692(Global_3145858->f_61357[3]->f_2, iVar0, iVar4, iVar2, iVar8);
				iVar26 = func_692(Global_3145858->f_61371[0]->f_2, iVar0, iVar4, iVar2, iVar8);
				func_693(&Local_3713, &(Local_6163[iVar0]->f_4), uVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23, iVar24, iVar25, iVar26, !Local_6163[iVar0]->f_5, &(Local_6163[iVar0]), Local_57[iVar0]->f_30, Var9, 0);
			}
			else
			{
				func_694(&Local_3713, &(Local_6163[iVar0]->f_4), Local_57[iVar0]->f_9, iVar1, iVar2, iVar8, !Local_6163[iVar0]->f_5, Var9, &(Local_6163[iVar0]), Local_57[iVar0]->f_30);
			}
		}
		iVar0++;
	}
	if (&Global_1051113)
	{
		Local_2971.f_738++;
	}
	func_695(&Local_3713, &Local_2971, &uLocal_13660, 0);
}

bool func_317()
{
	bVar1 = true;
	if (func_696())
	{
		if (func_238())
		{
			if (Local_5197.f_46 > 1 && (Local_5197.f_101 + Local_5197.f_102) == 1)
			{
				bVar0 = true;
			}
		}
		else if (Local_5197.f_45 > 1 && (Local_5197.f_47 + Local_5197.f_65) == 1)
		{
			bVar0 = true;
		}
	}
	if ((((func_385() || func_697()) && Global_2097152->f_6019 > 0) && Local_5197.f_47 <= Global_2097152->f_6019) && (!is_bit_set(Global_2097152->f_253, 13) && !func_8()))
	{
		bVar0 = true;
	}
	if (Local_5197.f_47 <= 0)
	{
		bVar1 = false;
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bVar1 && !is_bit_set(Local_5197.f_26, 12))
		{
			set_bit(&(Local_5197.f_26), 12);
		}
		return true;
	}
	return false;
}

bool func_318()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_233(iVar0, 255) && !func_235(iVar0))
		{
			if (&Local_57[iVar0] < 6)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_319()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_235(iVar0) || !func_233(iVar0, 255))
		{
		}
		else if (!is_bit_set(Local_57[iVar0]->f_13, 12))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_320()
{
	if (!func_698())
	{
		return false;
	}
	if (!Local_2971.f_740)
	{
		func_699(1);
		func_316(1);
		Local_2971.f_740 = 1;
	}
	return Local_2971.f_740;
}

void func_321()
{
	if (!func_700())
	{
		return;
	}
	fVar1 = -1E+09f;
	fVar2 = 1E+09f;
	uVar3 = 4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar8[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*Local_5197.f_745[iVar0] = { Var46 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_235(iVar0) && func_233(iVar0, 255))
		{
			fVar13[iVar0] = func_701(iVar0);
			Local_5197.f_818[&Local_6163[iVar0]] = &fVar13[iVar0];
		}
		else
		{
			fVar13[iVar0] = -1f;
		}
		iVar0++;
	}
	if (func_702(&fVar13, &iVar8, &uVar3, 0, fVar1, 0, 0))
	{
		if (func_702(&fVar13, &iVar8, &uVar3, 1, fVar1, 0, 0))
		{
			if (func_702(&fVar13, &iVar8, &uVar3, 2, fVar1, 1, 0))
			{
			}
			else if (func_702(&fVar13, &iVar8, &uVar3, 2, fVar1, 0, 0))
			{
			}
		}
	}
	if (func_702(&fVar13, &iVar8, &uVar3, 3, fVar2, 1, 1))
	{
	}
	else if (func_702(&fVar13, &iVar8, &uVar3, 3, fVar2, 0, 1))
	{
	}
	set_bit(&(Local_5197.f_26), 20);
	if (((is_string_null_or_empty(Local_5197.f_745[0]) || is_string_null_or_empty(Local_5197.f_745[1])) || is_string_null_or_empty(Local_5197.f_745[2])) || is_string_null_or_empty(Local_5197.f_745[3]))
	{
		StringCopy(Local_5197.f_745[0], "", 64);
	}
}

bool func_322()
{
	return ((Global_1102219->f_26.f_3487 || Global_1102219->f_26.f_3488) || Global_1102219->f_26.f_3489);
}

bool func_323(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			*uParam0 = _uiflowblock_request(-119209833);
			func_703(uParam0);
			func_704(uParam0);
			func_705(uParam0, 1);
			break;
		case 1:
			if (_uiflowblock_is_loaded(*uParam0))
			{
				func_706();
				return true;
			}
			break;
	}
	return false;
}

void func_324()
{
	if (func_84(0))
	{
		func_707();
	}
	if (func_84(16))
	{
		Global_1051119 = 1;
	}
}

void func_325(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = _uiflowblock_request(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = _uiflowblock_request(1781462046);
	}
	else
	{
		*uParam0 = _uiflowblock_request(-242590942);
	}
	uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
}

bool func_326()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_6822 - 1))
	{
		if (Global_3145858->f_6823[iVar0]->f_17 == 738282662)
		{
			if (Global_3145858->f_6823[iVar0]->f_24 == 3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_327(int iParam0)
{
	iLocal_12267 = iParam0;
}

bool func_328(var uParam0)
{
	if (uParam0->f_967 > 100)
	{
		return true;
	}
	uParam0->f_967++;
	_text_database_request("UIC");
	if (_text_database_has_loaded("UIC"))
	{
		uParam0->f_967 = 101;
		return true;
	}
	return false;
}

void func_329(var uParam0)
{
	_databinding_write_data_bool(uParam0->f_9, true);
}

void func_330()
{
	iVar0 = Global_2097152->f_6015;
	if (Local_5197.f_47 == 1)
	{
		iVar0 = Global_2097152->f_6016;
	}
	if (iVar0 < 0)
	{
		return;
	}
	func_708(&Local_12276, Global_3145858->f_36563[iVar0]);
}

void func_331()
{
	if ((is_bit_set(iVar13484, 4) && is_bit_set(iVar13484, 6)) && !func_93(iVar6150))
	{
		return;
	}
	if (!func_268(&(Local_57[iVar6150]->f_18)))
	{
		return;
	}
	func_709();
	if (is_bit_set(Local_57[iVar6150]->f_13, 22))
	{
		if (func_338())
		{
			if (!is_bit_set(iVar13484, 4))
			{
				if (!is_bit_set(iVar13484, 3))
				{
					func_335("RC_SRH_WD", 1105014447, -2, 0, 0, 0, 1);
					set_bit(&uLocal_13486, 3);
				}
				else if (!func_339())
				{
					func_335("RC_SRH_WE", 1105014447, -2, 0, 0, 0, 1);
					set_bit(&uLocal_13486, 4);
				}
			}
		}
		else
		{
			set_bit(&uLocal_13486, 3);
			if (Global_2097152->f_31 == -1742691940)
			{
				set_bit(&uLocal_13486, 4);
				return;
			}
			if (!func_339() && !is_bit_set(iVar13484, 4))
			{
				func_335("RC_SRH_MWE", 1105014447, -2, 0, 0, 0, 1);
				set_bit(&uLocal_13486, 4);
			}
		}
		if (func_339())
		{
			if (!is_bit_set(iVar13484, 6))
			{
				if (is_control_pressed(0, 440314811) || is_disabled_control_pressed(0, 440314811))
				{
					uLocal_12273[0] = func_518("RC_SRH_MWD", 10000, 0, 0, 0, 1);
					func_710(&uLocal_12268, 0);
					set_bit(&uLocal_13486, 6);
				}
			}
		}
		else if (is_bit_set(iVar13484, 6))
		{
			if (func_711(&(uLocal_12273[0])))
			{
				if (func_712(&uLocal_12268))
				{
					if (func_713(&uLocal_12268) >= 2f)
					{
						func_714(1);
					}
				}
			}
		}
	}
}

void func_332(var uParam0)
{
	if (func_715())
	{
		func_716();
		return;
	}
	else if (Local_12276.f_968 > -1)
	{
		func_411(1, 0);
		func_411(3, 0);
		func_330();
		if (!is_bit_set(Local_57[iVar6149]->f_13, 3))
		{
			func_97(1);
		}
		Local_12276.f_968 = -1;
	}
	_display_hud_component(474191950);
	if (is_bit_set(iVar13505, 26))
	{
		clear_bit(&uLocal_13508, 24);
	}
	if (is_bit_set(iVar13483, 14))
	{
		func_717();
	}
	func_718(uParam0);
}

void func_333()
{
	iVar2 = func_719();
	if (Local_2971.f_738 > iVar13673)
	{
		uLocal_13675 = Local_2971.f_738;
		bVar0 = true;
	}
	Var3 = 32;
	Var3.f_1.f_1 = -1082130432;
	Var3.f_1.f_2 = -1082130432;
	Var3.f_1.f_3 = -1082130432;
	Var3.f_1.f_4 = -1082130432;
	Var3.f_1.f_5 = -1082130432;
	Var3.f_1.f_14 = 255;
	Var3.f_1.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var3.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		*Var3[iVar1] = { *Local_2971[iVar1] };
		if ((Var3[iVar1]->f_14 != 255 && network_is_player_active(Var3[iVar1]->f_14)) && !func_264(iVar6150))
		{
			iVar740 = network_get_participant_index(Var3[iVar1]->f_14);
			if (iLocal_742 >= 0 && iLocal_742 < 32)
			{
				fVar741 = Local_57[iLocal_742]->f_47;
				if (Local_57[iLocal_742]->f_47 == 0f)
				{
					if (iVar2 != iLocal_742)
					{
						fVar741 = -3f;
					}
				}
				if (iVar2 == iLocal_742)
				{
					fVar741 = 0f;
				}
				if (func_689(iLocal_742))
				{
					Var3[iVar1]->f_7 = to_float(Local_57[iLocal_742]->f_1);
					Var3[iVar1]->f_1 = 8.94E+07f;
				}
				else
				{
					Var3[iVar1]->f_7 = uLocal_743;
				}
			}
		}
		iVar1++;
	}
	func_720(&Local_13286, Local_12276.f_973);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar742[iVar1] = iVar1;
		iVar1++;
	}
	func_721(&Local_13286, &Var3, &iLocal_6155, bVar0, &iVar742, 0, 0, is_bit_set(iVar13484, 8));
	if (is_bit_set(Local_13286.f_158, 0))
	{
		StringCopy(&cVar751, _get_label_text(func_659(Global_2097152->f_32)), 64);
		if (!is_string_null_or_empty(&(Global_3145858->f_108)))
		{
			cVar751 = { Global_3145858->f_108 };
		}
		func_722(&Local_13286, &cVar751);
	}
	clear_bit(&uLocal_13508, 3);
}

bool func_334()
{
	return (Global_2097152->f_32 == 218185167 || Global_2097152->f_32 == -1185533313);
}

var func_335(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x8d1249bd28791878(&Var0, &vVar13, bParam6);
	return uVar16;
}

void func_336()
{
	Var0.f_1 = 15;
	func_708(&Local_12276, &Var0);
}

void func_337(var uParam0)
{
	func_723(&(uParam0->f_973));
	func_724(uParam0);
	clear_bit(&(uParam0->f_966), 8);
	func_725(uParam0);
}

bool func_338()
{
	return is_bit_set(Global_2097152->f_253, 15);
}

bool func_339()
{
	if (!func_268(&(Local_57[iVar6150]->f_18)))
	{
		return true;
	}
	if ((Global_2097152->f_6484 == 0 && Local_57[iVar6150]->f_3 == 1) && Local_57[iVar6150]->f_4 == 0)
	{
		return true;
	}
	if (Global_2097152->f_6484 != 0 && func_269(&(Local_57[iVar6150]->f_18), 0, 0) < Global_2097152->f_6484)
	{
		return true;
	}
	return false;
}

void func_340(int iParam0)
{
	_0xe3a46370f70f3607(iParam0, 0);
}

void func_341(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

void func_342(var uParam0)
{
	if (!func_268(uParam0))
	{
		return;
	}
	iVar0 = func_269(uParam0, 0, 0);
	if (uParam0->f_4 >= 5)
	{
		return;
	}
	if (iVar0 < 60000)
	{
		return;
	}
	func_726(1, -1);
}

int func_343()
{
	return _0x771dfcb24d19c2f6(0);
	iVar0 = _0xd7d22f5592aed8ba(0);
	iVar1 = _0xd7d22f5592aed8ba(1);
	iVar2 = _0xd7d22f5592aed8ba(2);
	if (iVar0 <= iVar1 && iVar0 <= iVar2)
	{
		return iVar0;
	}
	if (iVar1 <= iVar0 && iVar1 <= iVar2)
	{
		return iVar1;
	}
	if (iVar2 <= iVar1 && iVar2 <= iVar0)
	{
		return iVar2;
	}
	return 0;
}

bool func_344()
{
	if (!network_is_cloud_available())
	{
		return true;
	}
	if (is_bit_set(&Global_1048626, 2))
	{
		return true;
	}
	return false;
}

char* func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mission";
		case 1:
			return "photo";
		case 2:
			return "playlist";
		case 3:
			return "lifeinvaderpost";
		case 4:
			return "challenge";
		case 5:
			return "youtube";
		default:
			break;
	}
	return "mission";
}

void func_346()
{
	if (datafile_get_file_dict(0) != 0)
	{
		datafile_delete(0);
	}
}

void func_347(int iParam0)
{
	iLocal_24 = iParam0;
}

int func_348(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

bool func_349(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_727(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_728())
	{
		return func_727(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_727(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_350()
{
	func_351(11);
	func_49(1, 1);
	func_729(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { get_entity_coords(player_ped_id(), false, false) };
	Global_1102219->f_3879 = get_gameplay_cam_relative_heading();
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_730(Global_1102219->f_3879, 36);
}

int func_351(int iParam0)
{
	if (func_731(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (func_732(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_353(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_354(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_355(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_356(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_357(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_358(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_359(var uParam0, int iParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_733(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_734(uVar0, iVar2, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_360(int iParam0, var uParam1)
{
	if (!func_438(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		return false;
	}
	uParam1->f_17.f_6 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
	if (get_ground_z_for_3d_coord(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_1 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_2 = Global_1901947->f_50.f_1;
	vVar1 = { _0x3e2a25b2416dd67e((*Global_1887339)[iParam0]->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901947->f_50)
	{
		fVar4 = Global_1901947->f_50;
	}
	if (fVar4 > Global_1901947->f_50.f_1)
	{
		fVar4 = Global_1901947->f_50.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return true;
}

void func_361(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_348(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_354(uParam0->f_17.f_6))
		{
			return;
		}
		if (vmag(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947->f_50.f_1;
		}
	}
	if (func_354(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (vmag(uParam0->f_6) < 1f)
		{
			return;
		}
		if (vmag(uParam0->f_17) < vmag(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_351(0);
	func_351(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_355(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_356(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_357(Global_1102219->f_3849, 36);
	func_358(Global_1102219->f_3888, 36);
}

void func_362(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_735(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_736(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_363(int iParam0)
{
	Global_262153 = (&Global_262153 - (Global_262153 && iParam0));
}

bool func_364(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_365(int iParam0)
{
	if (func_364(iParam0, 1))
	{
		func_737(1);
	}
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_367()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_219();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_219();
					break;
				case 2:
					func_219();
					break;
				case 4:
					func_219();
					break;
				case 3:
					func_219();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_219();
		}
		if (!network_is_game_in_progress())
		{
			func_219();
		}
		if (!network_is_signed_online())
		{
			func_219();
		}
		if (func_738() == 0)
		{
			if (func_739())
			{
				func_219();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_219();
	}
	return 1;
}

void func_368(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_740();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_369(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

bool func_370()
{
	if (Local_5197.f_44 > 1 || Local_5197.f_44 == 0)
	{
		return true;
	}
	return false;
}

void func_371()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		fLocal_7390[iVar0] = -1f;
		iLocal_7423[iVar0] = -1;
		iVar0++;
	}
	iLocal_7456 = 0;
	iLocal_7389 = 0;
}

bool func_372(int iParam0)
{
	if (func_8())
	{
		return true;
	}
	if (_telemetry_create_uuid(&Local_5197))
	{
		func_741(iParam0, network_get_num_participants(), Global_3145858->f_196);
		return true;
	}
	return false;
}

int func_373()
{
	return 255;
}

void func_374(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_742(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

void func_375(var uParam0, bool bParam1, bool bParam2)
{
	func_743(uParam0, bParam2);
	if (bParam1)
	{
		set_bit(&(uParam0->f_7), 2);
	}
	if (!bParam2)
	{
		set_bit(&(uParam0->f_7), 0);
	}
}

void func_376(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_377(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!is_bit_set(uParam0->f_7, 3))
		{
			set_bit(&(uParam0->f_7), 3);
		}
	}
	else if (is_bit_set(uParam0->f_7, 3))
	{
		clear_bit(&(uParam0->f_7), 3);
	}
}

float func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (1f * fVar0);
}

float func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (fVar0 * 1f);
}

int func_380()
{
	if (Global_3145858->f_224 != -1)
	{
		return Global_3145858->f_224;
	}
	return Global_3145858->f_225;
}

void func_381()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_480(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_744(iVar0, Global_3145858->f_37246[iVar0]->f_2, Global_3145858->f_37246[iVar0]->f_7, 0, 0);
		}
		iVar0++;
	}
}

bool func_382()
{
	return func_203(13);
}

int func_383(int iParam0)
{
	iVar0 = (iParam0 / Local_5197.f_45);
	return iVar0;
}

int func_384(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= Global_2097152->f_255)
	{
		return 0;
	}
	if (&Local_5197.f_174[(iParam0 - 1)] > 0)
	{
		return &(Local_5197.f_174[(iParam0 - 1)]);
	}
	return Global_2097152->f_258[iParam0]->f_80;
}

bool func_385()
{
	return is_bit_set(Local_5197.f_26, 15);
}

bool func_386()
{
	return true;
}

int func_387(int iParam0)
{
	fVar0 = ((to_float(iParam0) - to_float(Global_2097152->f_6019)) / to_float(Local_5197.f_44));
	iVar1 = round(fVar0);
	if (fVar0 < 1f)
	{
		iVar1 = 1;
	}
	return iVar1;
}

bool func_388()
{
	if (Global_2097152->f_256 > -1 || Global_2097152->f_257 > -1)
	{
		return true;
	}
	if (func_745())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2097152->f_6316 - 1))
		{
			if (Global_2097152->f_6317[iVar0]->f_2 > -1 || Global_2097152->f_6317[iVar0]->f_3 > -1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_389(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case -1821507459:
			iVar0 = 0;
			while (iVar0 <= (Global_3145858->f_452 - 1))
			{
				if (is_bit_set(iParam1, iVar0))
				{
					if (!is_bit_set(Local_5197.f_526, iVar0))
					{
						set_bit(&(Local_5197.f_526), iVar0);
					}
				}
				iVar0++;
			}
			break;
		case 465509728:
			iVar0 = 0;
			while (iVar0 <= (Global_3145858->f_36479 - 1))
			{
				if (is_bit_set(iParam1, iVar0))
				{
					if (!is_bit_set(Local_5197.f_526.f_1, iVar0))
					{
						set_bit(&(Local_5197.f_526.f_1), iVar0);
					}
				}
				iVar0++;
			}
			break;
		case 291889844:
			iVar0 = 0;
			while (iVar0 <= (Global_3145858->f_6822 - 1))
			{
				if (is_bit_set(iParam1, iVar0))
				{
					if (!is_bit_set(&(Local_5197.f_526.f_2[func_405(iVar0)]), func_406(iVar0)))
					{
						set_bit(Local_5197.f_526.f_2[func_405(iVar0)], func_406(iVar0));
					}
				}
				iVar0++;
			}
			break;
		default:
			break;
	}
}

int func_390(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_391()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_36479)
	{
		if ((Global_3145858->f_36480[iVar0]->f_1 == 0 || func_354(func_746(iVar0))) || !func_747(iVar0))
		{
		}
		else
		{
			func_748(iVar0);
		}
		iVar0++;
	}
}

void func_392()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if ((Global_3145858->f_453[iVar0]->f_43 == 0 || !func_749(iVar0)) || !is_model_valid(Global_3145858->f_453[iVar0]->f_43))
		{
		}
		else
		{
			func_750(Global_3145858->f_453[iVar0]->f_43);
		}
		iVar0++;
	}
}

void func_393()
{
	iVar0 = 0;
	while (iVar0 < Global_2097152->f_5635)
	{
		if (Global_2097152->f_5636[iVar0]->f_6 == 0 || !func_751(iVar0))
		{
		}
		else
		{
			iVar1 = Global_2097152->f_5636[iVar0]->f_6;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 1599685341;
			}
			func_750(iVar1);
		}
		iVar0++;
	}
}

int func_394(var uParam0)
{
	return 1;
}

void func_395(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(Global_3145858->f_18727[iVar0]->f_8 == 0);
		Stack.Push(iVar0);
		Call_Loc(iParam0);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 207132841;
			}
			func_750(iVar1);
		}
		iVar0++;
	}
}

void func_396()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else
		{
			_request_propset(Global_3145858->f_32697[iVar0]->f_11);
		}
		iVar0++;
	}
}

bool func_397()
{
	iVar0 = 1;
	request_model(389769403, false);
	request_model(-29086678, false);
	if (!has_model_loaded(389769403) && !has_model_loaded(-29086678))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_398(bool bParam0)
{
	if (!is_bit_set(Local_5197.f_26, 8) && !bParam0)
	{
		return false;
	}
	if (!is_bit_set(iVar13505, 21))
	{
		iVar0 = func_678();
		if (iVar0 > 0)
		{
			reserve_network_mission_peds(iVar0);
		}
		iVar1 = func_679();
		if (iVar1 > 0)
		{
			reserve_network_mission_vehicles(iVar1);
		}
		iVar2 = func_680();
		if (iVar2 > 0)
		{
			reserve_network_mission_objects(iVar2);
		}
		set_bit(&uLocal_13508, 21);
	}
	return true;
}

int func_399(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_400(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_401(int iParam0)
{
	if (func_752(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_402(int iParam0)
{
	if (!func_753(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 - (Global_1102219->f_26.f_9 && iParam0));
}

int func_403(vector3 vParam0, vector3 vParam3)
{
	return func_754(vParam0, vParam3, 0f, 0f, 0f);
}

bool func_404(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_405(int iParam0)
{
	return (iParam0 / 32);
}

int func_406(int iParam0)
{
	return (iParam0 - (iParam0 / 32) * 32);
}

bool func_407()
{
	return &Global_3145858 == -933924539;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1763467984;
		case 1:
			return -311722996;
		case 2:
			return -663251240;
		case 3:
			return 299170259;
		case 4:
			return 1797448669;
		case 5:
			return -737967266;
		case 6:
			return -1132137047;
		case 7:
			return -808084283;
		case 8:
			return 1054743401;
		case 9:
			return -614717889;
		case 10:
			return -614717889;
		case 11:
			return 553641561;
		case 12:
			return 1015500476;
		case 13:
			return -1792457046;
		case 14:
			return -1110567953;
		case 15:
			return 1801427726;
		case 16:
			return -1179304729;
		case 17:
			return -1208920672;
		case 18:
			return 2049553553;
		case 19:
			return -517030668;
		case 20:
			return 1399046085;
		case 21:
			return -1581191600;
		case 22:
			return -840899846;
		case 23:
			return 1251710716;
		case 24:
			return -1851633148;
		case 25:
			return -1387569989;
		case 26:
			return -716088422;
		case 27:
			return -601057408;
		case 28:
			return -933688330;
		case 29:
			return -1058316279;
		case 30:
			return -1928147756;
		case 31:
			return -1625925065;
		case 32:
			return 1196791162;
		case 33:
			return -2026537663;
		case 34:
			return 1573191414;
		case 35:
			return 769276093;
		case 36:
			return 1645000405;
		case 37:
			return 2134225326;
		case 38:
			return -716072558;
		case 39:
			return 1530063285;
		case 40:
			return 1728764840;
		case 41:
			return -318321726;
		case 42:
			return -1197085363;
		case 43:
			return -776864312;
		case 44:
			return 2033486435;
		case 45:
			return -1085170826;
		case 46:
			return 679801275;
		case 47:
			return 1722821502;
		case 48:
			return 707056726;
		case 49:
			return -1199438720;
		case 50:
			return 409276899;
		case 51:
			return -662385272;
		case 52:
			return 1471375922;
		case 53:
			return 966194332;
		case 54:
			return -677165568;
		case 55:
			return 223181639;
		case 56:
			return -2077539676;
		case 57:
			return -1008746630;
		case 58:
			return 999882722;
		case 59:
			return 1150823022;
		case 60:
			return -512460250;
		case 61:
			return -68117845;
		case 62:
			return 195014139;
		case 63:
			return -711431897;
		case 64:
			return 1057455349;
		case 65:
			return 2076532901;
		case 66:
			return 1099283026;
		case 67:
			return 1453781476;
		default:
			break;
	}
	return 0;
}

bool func_409()
{
	if ((Global_3145858->f_61343[0]->f_2 != 0 || Global_3145858->f_61357[0]->f_2 != 0) || Global_3145858->f_61371[0]->f_2 != 0)
	{
		return true;
	}
	return false;
}

void func_410(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

void func_411(int iParam0, bool bParam1)
{
	if (is_bit_set(iLocal_13, iParam0) || bParam1)
	{
		clear_bit(&iLocal_13, iParam0);
		_display_hud_component(func_755(iParam0));
	}
}

void func_412(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

void func_413(var uParam0)
{
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_414(var uParam0)
{
	func_756(uParam0);
}

void func_415(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_1))
	{
		_databinding_remove_data_entry(uParam0->f_1);
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_12[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_12[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_3[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_3[iVar0]));
		}
		iVar0++;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		_databinding_remove_data_entry(uParam0->f_2);
	}
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
}

void func_416()
{
	Global_1071686->f_15 = 0;
	Global_1071686->f_14 = 50f;
}

void func_417(var uParam0)
{
	func_757(uParam0);
	func_758(uParam0);
	_0xc5cb91d65852ed7e("MP_OutofArea");
	_display_hud_component(-2124237476);
	func_759(4);
	func_759(8);
}

void func_418(var uParam0)
{
	func_411(9, 0);
	_databinding_write_data_bool(&(uParam0->f_12[33]), false);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (_databinding_is_data_id_valid(&(uParam0->f_370[iVar0]->f_1[iVar1])))
			{
				_databinding_remove_data_entry(&(uParam0->f_370[iVar0]->f_1[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (_databinding_is_data_id_valid(uParam0->f_10))
	{
		_databinding_remove_data_entry(uParam0->f_10);
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_remove_data_entry(uParam0->f_11);
	}
	if (_databinding_is_data_id_valid(uParam0->f_881))
	{
		_databinding_remove_data_entry(uParam0->f_881);
	}
	if (_databinding_is_data_id_valid(uParam0->f_6))
	{
		_databinding_remove_data_entry(uParam0->f_6);
	}
}

void func_419(int iParam0)
{
	Global_1071686->f_22973.f_3 = (Global_1071686->f_22973.f_3 - (Global_1071686->f_22973.f_3 && iParam0));
}

void func_420(int iParam0)
{
	Global_1071686->f_22973.f_3 = (Global_1071686->f_22973.f_3 || iParam0);
}

void func_421()
{
	Global_1071686->f_28352 = 0;
}

int func_422(int iParam0)
{
	return func_760(iParam0) + 1;
}

int func_423(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_424(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_353(*uParam2, 8))
			{
				func_761(-1484676996, bParam1);
			}
			func_762("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_761(1510350995, bParam1);
			break;
		case 4:
			func_761(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_353(*uParam2, 1))
			{
				func_761(-1484676996, bParam1);
			}
			func_761(2075683947, bParam1);
			func_761(1646485471, bParam1);
			func_763(2075683947, bParam1);
			func_762("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_761(-2131576785, bParam1);
			func_761(-2137016051, bParam1);
			func_761(1193151399, bParam1);
			func_761(-1353871107, bParam1);
			func_761(2026630914, bParam1);
			func_761(-225844616, bParam1);
			func_762("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_761(-200270658, bParam1);
			func_761(-127497991, bParam1);
			func_762("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_763(-127497991, bParam1);
			break;
		case 256:
			func_761(331698185, bParam1);
			break;
		case 128:
			func_763(-393752274, bParam1);
			break;
		case 512:
			func_761(-770646513, bParam1);
			break;
		case 32:
			func_761(-1876837239, bParam1);
			break;
		case 1024:
			func_761(401370450, bParam1);
			func_761(1183263476, bParam1);
			func_761(573140494, bParam1);
			break;
		case 2048:
			func_761(-1407497494, bParam1);
			func_761(-1161238459, bParam1);
			func_761(-1583237641, bParam1);
			break;
		case 4096:
			func_761(-1744971427, bParam1);
			break;
		case 8192:
			func_761(793572138, bParam1);
			break;
		case 16384:
			func_761(1773228786, bParam1);
			func_762("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_366(uParam2, iParam0);
	}
	else
	{
		func_764(uParam2, iParam0);
	}
}

int func_425(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

void func_426(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_353(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_764((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_427()
{
	enable_script_brain_set(4);
}

void func_428()
{
	enable_script_brain_set(1);
}

void func_429(var uParam0)
{
	func_765(uParam0);
	if (!_0x89ec2fc89ecb1005())
	{
		_0x5d3c528b7a7df836(-1741123096);
		_0x5d3c528b7a7df836(1593630490);
		_0x5d3c528b7a7df836(-869194337);
		_0x5d3c528b7a7df836(493630969);
		_0x5d3c528b7a7df836(1062828826);
		_0x5d3c528b7a7df836(-733639455);
		_0x6cee2e30021daec6();
	}
	Var0.f_10 = 16;
	Var0.f_94 = 128;
	Var0.f_479 = 128;
	Var0.f_608 = 15;
	Var0.f_626 = -1082130432;
	Var0.f_627 = -1082130432;
	Var0.f_628 = -1082130432;
	Var0.f_629 = -1082130432;
	Var0.f_630 = -1082130432;
	Var0.f_631 = -1082130432;
	*uParam0 = { Var0 };
}

void func_430(int iParam0)
{
	if (_does_volume_exist(*iParam0))
	{
		_delete_volume(*iParam0);
	}
	func_766(iParam0);
}

bool func_431(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

char* func_432(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return "RDRO_Countdown_Sounds";
		default:
			break;
	}
	return "";
}

void func_433()
{
	func_767(1);
	func_768(1);
}

void func_434(var uParam0)
{
	if (*uParam0 != -1)
	{
		_0x9cf1836c03fb67a2(uParam0, 0);
	}
}

bool func_435(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_436(int iParam0)
{
	func_770(func_769(), iParam0);
}

void func_437(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_283(iParam0);
	}
	else
	{
		func_457(iParam0);
	}
}

bool func_438(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_439(int iParam0, int iParam1)
{
	if (func_738() == -1)
	{
		return;
	}
	func_771(&((*Global_1197355)[iParam1]->f_4), iParam0, 0, 30, 1, 7);
}

bool func_440()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_441(int iParam0)
{
	return func_349(27, iParam0);
}

bool func_442(int iParam0)
{
	if (!func_438(iParam0))
	{
		return false;
	}
	return func_445(iParam0, 8);
}

void func_443(int iParam0, int iParam1)
{
	if (!func_438(iParam0))
	{
		return;
	}
	(*Global_1887339)[iParam0]->f_20 = iParam1;
}

void func_444(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_445(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_446(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_447(bool bParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_445(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1887339)[iVar1]->f_27)))
			{
				set_script_as_no_longer_needed(&((*Global_1887339)[iVar1]->f_27));
			}
		}
		if ((*Global_1887339)[iVar1]->f_10 != 0)
		{
			if (is_thread_active((*Global_1887339)[iVar1]->f_10, false))
			{
				if (func_738() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1887339)[iVar1]->f_10, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1887339)[iVar1]->f_10))
				{
					_0x7de4643157ad646c((*Global_1887339)[iVar1]->f_10);
				}
			}
			else if (func_445(iVar1, 2))
			{
				if (func_738() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1887339)[iVar1]->f_27), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1887339)[iVar1]->f_27)));
				}
			}
			if (!_does_thread_exist((*Global_1887339)[iVar1]->f_10))
			{
				(*Global_1887339)[iVar1]->f_10 = 0;
				func_772(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_445(iVar1, 1))
			{
				func_772(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_448(int iParam0)
{
	func_764(&(Global_1071686->f_23887.f_4), iParam0);
}

int func_449(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_2971[iVar0]->f_14 == 255)
		{
		}
		else if (Local_2971[iVar0]->f_14 != iParam0)
		{
		}
		else
		{
			return iVar0 + 1;
		}
		iVar0++;
	}
	return -1;
}

int func_450(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_451(int iParam0)
{
	return func_773(iParam0) == -427144552;
}

void func_452(var uParam0, int iParam1)
{
	bVar3 = func_774("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0);
	Var4.f_9 = -1591664384;
	if (bVar3)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (*iParam1 == 20)
			{
			}
			else if (!func_775(&Var4, iVar0, iVar1, iVar2))
			{
			}
			else if (_is_weapon_throwable(Var4.f_4))
			{
				iVar18 = _get_ammo_type_for_weapon(Var4.f_4);
				if (iVar18 != 0)
				{
					if (func_776(iVar18, 0, 1, 0) > 0)
					{
						(*uParam0)[*iParam1] = Var4.f_4;
						*iParam1++;
					}
				}
			}
			else if (_is_weapon_melee(Var4.f_4))
			{
				iVar18 = _get_ammo_type_for_weapon(Var4.f_4);
				(*uParam0)[*iParam1] = Var4.f_4;
				*iParam1++;
			}
			iVar0++;
		}
		func_777(iVar1);
	}
}

void func_453()
{
	func_778(0);
}

void func_454(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_779(iParam0);
	func_780(iParam0);
	func_781(iParam0);
	func_782(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_158(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_783(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_784(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_785(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_785(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_242(_create_var_string(10, "PARLEY_TICKER_END", func_241(get_player_name(iParam0), func_786(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_787(&Var15, &uVar14);
}

void func_455(var uParam0, var uParam1)
{
	if (uParam0->f_3 == 0)
	{
		return;
	}
	if (_0xd4636c2edb0dea8a(uParam0->f_3))
	{
		_0x9cf1836c03fb67a2(uParam1, 0);
	}
	else
	{
		remove_model_hide(*uParam0, 0.1f, uParam0->f_3, 0);
	}
	if (!is_bit_set(uParam0->f_4, 0))
	{
		remove_all_cover_blocking_areas();
	}
}

void func_456(var uParam0)
{
	func_788(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_485() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

void func_457(int iParam0)
{
	if (!func_539(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_458(int iParam0)
{
	if (!func_789(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

bool func_459(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_460(var uParam0, int iParam1)
{
	func_790(uParam0, iParam1);
}

bool func_461(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_462(var uParam0, bool bParam1)
{
	if (!func_791(uParam0))
	{
		return;
	}
	iVar0 = Global_1296859->f_8;
	func_792();
	func_793(0);
	if (uParam0->f_1)
	{
		func_794(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_795(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_796();
		}
	}
	if (uParam0->f_12)
	{
		func_797();
	}
	if (uParam0->f_8)
	{
		func_798(_0xdf66a37936d5f3d9(player_id()));
		func_800(func_799());
	}
	else if (uParam0->f_4)
	{
		func_801();
		func_798(_0xdf66a37936d5f3d9(player_id()));
		func_800(Global_1956200->f_1549);
	}
	if (uParam0->f_3)
	{
		func_802();
	}
	if (bParam1)
	{
		func_803(0, 0);
		func_804();
	}
	func_805(&(Global_1139381->f_4796));
}

void func_463(int iParam0, float fParam1, int iParam2)
{
	_0xd04ad186ce8bb129(*iParam2, iParam0, fParam1);
}

bool func_464()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_467(2048))
	{
		return true;
	}
	if (func_466(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_465(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_466(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_467(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_468()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_469(int iParam0, int iParam1, bool bParam2)
{
	if (_0x4c11ccacb7c02b6e(Local_10256[iParam0][iParam1]))
	{
		if (!_0x4c11ccacb7c02b6e(&(Local_10256[iParam0]->f_3[iParam1])) || bParam2)
		{
			delete_checkpoint(Local_10256[iParam0][iParam1]);
		}
		else
		{
			delete_checkpoint(&(Local_10256[iParam0]->f_3[iParam1]));
		}
	}
	if (_0x4c11ccacb7c02b6e(&(Local_10256[iParam0]->f_3[iParam1])))
	{
		delete_checkpoint(&(Local_10256[iParam0]->f_3[iParam1]));
	}
	func_806(iParam0, iParam1);
	if (func_334())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			iVar1 = &Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar0];
			if (iVar1 > -1)
			{
				func_807(&(Local_57[iVar6147]->f_40), iVar1);
			}
			iVar0++;
		}
		iVar2 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33;
		if (iVar2 > -1)
		{
			set_bit(&(Local_57[iVar6147]->f_46), iVar2);
		}
	}
}

void func_470(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 63)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (does_entity_exist(Local_10256[iParam0]->f_22[iParam1][iVar0]))
		{
			delete_object((*Local_10256[iParam0]->f_22[iParam1])[iVar0]);
		}
		iVar0++;
	}
}

bool func_471(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar0] > -1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_472(int iParam0)
{
	return is_bit_set(Global_3145858->f_18727[iParam0]->f_19, 25);
}

void func_473()
{
	func_808(1);
}

void func_474()
{
	func_808(0);
}

void func_475()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else
		{
			_release_propset(Global_3145858->f_32697[iVar0]->f_11);
		}
		iVar0++;
	}
}

bool func_476(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_477(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_476(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_809(*iParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_810(iVar0);
	*iParam0 = 0;
}

void func_478(int iParam0, int iParam1)
{
	iVar0 = func_811(0);
	iVar1 = func_811(1);
	if (iVar0 > iParam0)
	{
		iParam0 = iVar0;
	}
	if (iVar1 > iParam1)
	{
		iParam1 = iVar1;
	}
	func_812(iParam0, iParam1);
}

int func_479()
{
	return (*Global_263042)[network_player_id_to_int()]->f_1.f_34;
}

bool func_480(int iParam0)
{
	return iParam0 != 0;
}

void func_481(int iParam0)
{
	if (func_813(iParam0) && func_814())
	{
		remove_door_from_system(iParam0);
	}
}

void func_482(int iParam0)
{
	if (&Global_1049271 != iParam0)
	{
		Global_1049271 = iParam0;
	}
}

void func_483(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_484(int iParam0, bool bParam1)
{
	if (!func_815(iParam0))
	{
		return 0;
	}
	if (!func_816(iParam0))
	{
		return 0;
	}
	iVar0 = get_id_of_this_thread();
	if (!func_817(iParam0, iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		func_818(iParam0);
	}
	func_819(iParam0);
	return 1;
}

struct<4> func_485()
{
	return Var0;
}

bool func_486()
{
	return !Global_1572887->f_9;
}

bool func_487()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_488(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

struct<2> func_489(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

struct<2> func_490(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_491(int iParam0)
{
	return !func_652(iParam0);
}

int func_492()
{
	return Global_1102219->f_26.f_3341;
}

bool func_493(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (iVar0 == Global_1102219->f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == get_player_ped(player_id()))
	{
		return true;
	}
	return false;
}

int func_494(int iParam0)
{
	if (iParam0 == 255 || iParam0 < 0)
	{
		return 0;
	}
	return &(iLocal_6740[iParam0]);
}

int func_495(int iParam0, var uParam1)
{
	return func_820(&(Global_17411.f_55.f_2481), iParam0, uParam1);
}

int func_496()
{
	if (Global_3145858->f_282 < 2 && !func_821())
	{
		return 1105014447;
	}
	if (func_822(14))
	{
		return 830499243;
	}
	return 1765299542;
}

int func_497()
{
	return -1031763995;
}

char* func_498(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_499(int iParam0)
{
	if (func_8())
	{
		if (Global_2892896->f_12 > -1 && Global_2892896->f_12 < 18)
		{
			Local_57[iVar6149]->f_10 = Global_2892896->f_12;
			return;
		}
	}
	if (iParam0 == -1)
	{
		iVar0 = func_823();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= Global_3145858->f_49703)
	{
		iVar0 = 0;
	}
	Local_57[iVar6149]->f_10 = iVar0;
}

int func_500()
{
	return uVar7305;
}

bool func_501(bool bParam0)
{
	iVar0 = Local_5197.f_47;
	if (bParam0)
	{
		iVar0 = (iVar0 + Local_5197.f_65);
	}
	if (iVar0 <= 1 && !func_824(-1))
	{
		return true;
	}
	return false;
}

void func_502(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 6))
	{
		if (Var0 == 164)
		{
			iVar6 = Var0.f_4;
			iVar7 = Var0.f_5;
			if ((!func_745() || iVar7 == 0) || is_bit_set(iVar7, Local_57[iVar6149]->f_9))
			{
				if (!is_bit_set(iVar12118, iVar6))
				{
					set_bit(&uLocal_12121, iVar6);
				}
			}
		}
	}
}

void func_503(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0 == 163)
		{
			iVar5 = Var0.f_4;
			if (bVar6142 && !is_bit_set(Local_5197.f_608, iVar5))
			{
				set_bit(&(Local_5197.f_608), iVar5);
				func_825(iVar5);
			}
		}
	}
}

void func_504(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0 == 165)
		{
			iVar5 = Var0.f_4;
			if (bVar6142 && !is_bit_set(Local_5197.f_609, iVar5))
			{
				set_bit(&(Local_5197.f_609), iVar5);
			}
		}
	}
}

void func_505(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 7))
	{
		if (Var0 == 160)
		{
			iVar7 = Var0.f_4;
			uVar8 = Var0.f_5;
			iVar9 = Var0.f_6;
			iVar10 = network_get_participant_index(Var0.f_1);
			func_826(iVar10, iVar7, iVar9, uVar8);
			if (Var0.f_1 == iVar6143)
			{
				Local_57[iVar6149]->f_47 = to_float(func_827(func_719()));
			}
		}
	}
}

void func_506(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 6))
	{
		return;
	}
	iVar6 = func_828(Var0.f_5, Var0.f_1, iVar6143, -1, -1, -1, -1, 0, -1, 255, 0);
	if (iVar6 > -1)
	{
		Var7.f_1 = 8;
		Var7.f_10 = 2;
		Var7.f_24 = 2;
		Var7.f_30 = -666;
		Var7.f_31 = -666;
		Var7.f_10[0] = Var0.f_1;
		func_829(iVar6, &Var7);
		return;
	}
	switch (Var0.f_5)
	{
		case 665915798:
			if (func_267())
			{
				StringCopy(&cVar39, "POS_DNF", 24);
			}
			else if (func_830(&iLocal_6155))
			{
				StringCopy(&cVar39, "POS_ELIM", 24);
			}
			else
			{
				StringCopy(&cVar39, "POS_", 24);
				StringIntConCat(&cVar39, func_138(), 24);
			}
			func_831(&cVar39, -2, 0, 0, 0, 1);
			break;
		case 180156097:
			func_832("RC_TCK_NEW1", Var0.f_1, func_786(Var0.f_1, 1, -1, 0));
			break;
		case -657254249:
			iVar42 = Var0.f_4;
			if (Var0.f_4 == 1)
			{
				if (!func_833(Local_57[iVar6156]->f_3))
				{
					iVar43 = func_786(Var0.f_1, 1, -1, 0);
					func_335(_create_var_string(10, "RC_TCK_PLW", func_241(get_player_name(Var0.f_1), iVar43)), 1105014447, -2, 0, 0, 0, 1);
				}
			}
			if (Var0.f_1 != iVar6143)
			{
				StringIntConCat(&cVar44, iVar42, 8);
				StringConCat(&cVar44, _get_label_text(func_834(iVar42)), 8);
				func_835("RC_TCK_FIN", Var0.f_1, func_786(Var0.f_1, 1, -1, 0), &cVar44, 109029619);
			}
			break;
		case -1878271701:
			if (Var0.f_1 != iVar6143)
			{
				func_832("RC_TCK_ELM1", Var0.f_1, func_786(Var0.f_1, 1, -1, 0));
			}
			else
			{
				func_836("RC_TCK_YEL1");
			}
			break;
	}
}

void func_507(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 5) || Var0 != 166)
	{
		return;
	}
	iVar5 = Var0.f_1;
	if (!network_is_player_active(iVar5))
	{
		return;
	}
	iVar7 = Var0.f_4;
	StringCopy(&cVar8, get_player_name(iVar5), 64);
	iVar16 = -5208416;
	if (func_239(Local_57[iVar6149]->f_9, iVar7))
	{
		iVar16 = 830499243;
	}
	if (iVar7 == -1)
	{
		sVar6 = _create_var_string(10, "JIPP_JOIN_NT", func_241(&cVar8, iVar16));
	}
	else if (!func_235(iVar6149) && iVar7 == Local_57[iVar6149]->f_9)
	{
		sVar6 = _create_var_string(10, "JIPP_JOIN_YT", func_241(&cVar8, iVar16));
	}
	else
	{
		sVar6 = _create_var_string(42, "JIPP_JOIN_OT", func_241(&cVar8, iVar16), func_837((*Global_3145728)[iVar7], iVar16));
	}
	func_242(sVar6, -2, 0, 0, 0, 1);
}

void func_508(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 4) || Var0 != 167)
	{
		return;
	}
	iVar4 = Var0.f_1;
	if (!network_is_player_active(iVar4))
	{
		return;
	}
	StringCopy(&cVar6, get_player_name(iVar4), 64);
	sVar5 = _create_var_string(10, "JIPS_JOIN", func_241(&cVar6, 1105014447));
	func_242(sVar5, -2, 0, 0, 0, 1);
}

void func_509(int iParam0, int iParam1, struct<6> Param2, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	iVar0 = network_get_player_index_from_ped(iParam1);
	if (!network_is_player_a_participant(iVar0))
	{
		return;
	}
	if (Param2.f_3)
	{
		func_838(iParam0, iVar0);
		if (iParam0 == iVar6110)
		{
			Local_57[iVar6116]->f_28++;
		}
	}
	if (is_bit_set(Global_2097152->f_6463, 0))
	{
		if (iParam0 == iVar6110 && is_bit_set(Global_2097152->f_6463, 2))
		{
			func_514(to_float(Global_2097152->f_6471), 0);
			StringCopy(&cVar1, _create_var_string(2, "RC_RM_POSNUM", Global_2097152->f_6471), 16);
			func_515(&cVar1, 1, -2, 0, 0, 0, 0);
		}
		if (iVar0 == iVar6110 && is_bit_set(Global_2097152->f_6463, 3))
		{
			func_514(to_float(-Global_2097152->f_6470), 0);
			StringCopy(&cVar1, _create_var_string(2, "RC_RM_NEGNUM", Global_2097152->f_6470), 16);
			func_515(&cVar1, 1, -2, 0, 0, 0, 0);
		}
	}
	if (iVar0 == iVar6110)
	{
		iVar3 = Param2.f_5;
		if (iVar3 == -1569615261)
		{
			if (is_ped_on_mount(iVar6113))
			{
				set_air_drag_multiplier_for_players_vehicle(iVar6110, 15f);
				func_270(&uLocal_13506);
				func_280(&uLocal_13506, 0, 0);
				if (Global_2097152->f_6472 > 0f)
				{
					func_839(get_mount(iVar6113), -Global_2097152->f_6472);
				}
			}
			else if (!is_bit_set(iVar13472, 29))
			{
				sVar4 = "RC_PLY_HHIT";
				if (Global_2097152->f_31 == -1742691940)
				{
					sVar4 = "RC_PLY_VHIT";
				}
				func_242(_create_var_string(10, sVar4, func_241(get_player_name(iParam0), 859817522)), -2, 0, 0, 0, 1);
				set_bit(&uLocal_13508, 29);
			}
		}
	}
}

void func_510(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_511(int iParam0, int iParam1, struct<4> Param2, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	iVar0 = get_entity_model(iParam1);
	if (_is_this_model_a_horse(iVar0))
	{
		if (Param2.f_3 && iParam0 != iVar6110)
		{
			if (iParam1 == iVar6124)
			{
				func_242(_create_var_string(10, "RC_PLY_KYH", func_241(get_player_name(iParam0), 859817522)), -2, 0, 0, 0, 1);
			}
		}
	}
}

void func_512(int iParam0, struct<31> Param1, var uParam32)
{
	if (iParam0 != iVar6111)
	{
		return;
	}
	if (!func_840())
	{
		return;
	}
	iVar0 = Param1.f_5;
	if (iVar0 == 539292904)
	{
		return;
	}
	iVar1 = Local_57[iVar6117]->f_3;
	iVar2 = func_841(iVar1);
	switch (Global_2097152->f_32)
	{
		case -1185533313:
			if (!func_842(net_to_obj(_0xf260af6f43953316(Param1)), &iLocal_12118))
			{
				iVar1 = func_843(get_entity_coords(iVar6114, true, false));
			}
			else
			{
				iVar1 = iVar12083;
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (Local_57[iVar6124]->f_6 == iVar3 || func_844(iVar2, iVar1, 0))
		{
			iVar4 = Global_2097152->f_258[iVar1]->f_1[iVar3]->f_33;
			if (func_471(iVar1, iVar3))
			{
				iVar5 = 0;
				while (iVar5 <= 4)
				{
					iVar6 = &Global_2097152->f_258[iVar1]->f_1[iVar3]->f_25[iVar5];
					if (iVar6 > -1)
					{
						if (does_entity_exist(&(uLocal_9056[iVar6])) && is_entity_visible(&(uLocal_9056[iVar6])))
						{
							if (&uLocal_9056[iVar6] == get_object_index_from_entity_index(Param1))
							{
								func_845(&(uLocal_9056[iVar6]), iVar1, Param1.f_30, 0);
								iLocal_12119 = iVar3;
								iLocal_12118 = iVar1;
							}
							else
							{
								iVar5++;
							}
							Jump @490; //curOff = 327
							if (iVar4 > -1)
							{
								if (_does_propset_exist(&(uLocal_9840[iVar4])))
								{
									iVar7 = create_itemset(true);
									iVar8 = _get_entities_from_propset(&(uLocal_9840[iVar4]), iVar7, 0, false, false);
									iVar9 = 0;
									while (iVar9 <= (iVar8 - 1))
									{
										uVar10 = get_indexed_item_in_itemset(iVar9, iVar7);
										iVar11 = _0x18013392501ce5dc(uVar10);
										if (func_846(iVar11))
										{
											if (is_entity_visible(iVar11))
											{
												if (iVar11 == get_object_index_from_entity_index(Param1))
												{
													func_845(iVar11, iVar1, Param1.f_30, 1);
													iLocal_12119 = iVar3;
													iLocal_12118 = iVar1;
													Jump @478; //curOff = 457
												}
											}
										}
										iVar9++;
									}
									_0x20a4bf0e09bee146(iVar7);
									destroy_itemset(iVar7);
								}
							}
							iVar3++;
						}
					}
				}
			}
		}
	}
}

void func_513(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_847(iParam0, 0))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = func_773(iParam0);
	iVar4 = 805880880;
	iVar5 = 0;
	Var1.f_1 = func_848(iParam0);
	if (iVar0 == 307971639)
	{
		iVar5 = 622449822;
		Var1.f_1 = "ammo_types";
		iVar4 = 622449822;
	}
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		Var1 = "ITEMTYPE_UPGRADES";
		Var1.f_1 = "itemtype_textures";
	}
	else if (!func_849(iParam0, &Var1, iVar4, iVar5, 0, 0))
	{
		Var1 = "_PLACEHOLDER";
		Var1.f_1 = "inventory_items";
	}
	iVar6 = _get_ammo_type_for_weapon(iParam0);
	if (iParam2 != -1)
	{
		iVar6 = iParam2;
	}
	if (func_850(iParam0))
	{
		StringCopy(&cVar7, func_851(iParam1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		func_853(_create_var_string(10, &cVar7, _create_var_string(0, func_852(iParam0)), iParam1), Var1.f_1, get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		if (!bParam3)
		{
			func_853(_create_var_string(10, "ITEM_GET_PUMP", _create_var_string(0, func_852(iParam0))), Var1.f_1, get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
		}
		if (iVar6 != 0)
		{
			iVar5 = 622449822;
			iVar4 = 622449822;
			if (!func_849(iVar6, &Var1, iVar4, iVar5, 0, 0))
			{
				Var1 = "_PLACEHOLDER";
				Var1.f_1 = "inventory_items";
			}
			StringCopy(&cVar7, func_851(iParam1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
			func_853(_create_var_string(10, &cVar7, _create_var_string(0, func_852(iVar6)), iParam1), "ammo_types", get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
		}
	}
}

void func_514(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

var func_515(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = cParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x893128cdb4b81fbb(&Var0, &vVar13, iParam6);
	return uVar16;
}

void func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 738282662:
			switch (iParam1)
			{
				case 178323656:
				case 291474213:
				case 1547041634:
					sVar0 = "Gold_Collected";
					sVar1 = "RDRO_Races_Gold_Rush_Sounds";
					break;
				case 888737253:
					sVar0 = "Pickup_RPG";
					sVar1 = "RDRO_Race_Pickup_Sounds";
					break;
			}
			break;
		case -1888453608:
			sVar0 = "Pickup_Health";
			sVar1 = "RDRO_Race_Pickup_Sounds";
			break;
		default:
			sVar0 = "Pickup_Weapon";
			sVar1 = "RDRO_Race_Pickup_Sounds";
			break;
	}
	if (!is_string_null_or_empty(sVar0) && !is_string_null_or_empty(sVar1))
	{
		func_854(sVar0, sVar1, 1);
	}
}

void func_517(int iParam0)
{
	StringCopy(&cVar0, "PCFR0a", 128);
	if (func_519(iParam0))
	{
		iVar24 = get_weapon_type_from_pickup_type(iParam0);
		if (func_461(iVar24))
		{
			if (_is_weapon_throwable(iVar24))
			{
				StringCopy(&cVar0, "PCFR0b", 128);
			}
			StringCopy(&cVar16, func_855(iVar24), 64);
		}
		if (!is_string_null_or_empty(&cVar16))
		{
			StringCopy(&cVar0, _create_var_string(10, &cVar0, &cVar16), 128);
			func_518(&cVar0, 2000, 0, 0, 0, 0);
		}
	}
}

var func_518(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_519(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case -2136239332:
		case -1888453608:
		case -31919185:
		case 738282662:
		case 1723684897:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (&iLocal_6807[iParam0] == -1)
	{
		func_856(iParam0, iParam3, 0);
	}
	iVar0 = &iLocal_6807[iParam0];
	if (iVar0 == -1)
	{
		return;
	}
	if (&iLocal_6840[iVar0] != -1)
	{
		return;
	}
	if (func_527(iVar0))
	{
		return;
	}
	if (bVar6139 && func_857(iVar0))
	{
		func_858(iVar0, iParam0, iParam1, iParam2, iParam3);
	}
	else
	{
		iLocal_6840[iVar0] = iParam0;
		iLocal_6873[iVar0] = iParam1;
	}
	func_66(iParam1);
	clear_bit(&uLocal_6784, iParam0);
	iLocal_6807[iParam0] = -1;
}

void func_521(int iParam0)
{
	if (!func_824(iParam0))
	{
		return;
	}
	iVar0 = func_526(iParam0, 255);
	if (iVar0 == -1)
	{
		return;
	}
	if (&iLocal_6840[iVar0] != -1)
	{
		return;
	}
	if (func_527(iVar0))
	{
		return;
	}
	if (!is_bit_set(Local_5197.f_708, iVar0))
	{
		Local_5197.f_675[iVar0] = func_859();
		set_bit(&(Local_5197.f_708), iVar0);
	}
}

void func_522(int iParam0)
{
	func_270(Local_6906[iParam0]);
	if (!func_857(iParam0))
	{
		if (!func_268(Local_7036[iParam0]))
		{
			func_272(Local_7036[iParam0], 0, 0);
		}
		if (func_269(Local_7036[iParam0], 0, 0) < 5000)
		{
			return;
		}
	}
	iVar0 = &iLocal_6840[iParam0];
	iVar1 = &iLocal_6873[iParam0];
	iVar2 = int_to_participantindex(iVar0);
	iVar3 = int_to_playerindex(iVar1);
	func_858(iParam0, iVar0, iVar1, iVar2, iVar3);
	func_270(Local_7036[iParam0]);
}

void func_523(int iParam0)
{
	func_270(Local_7036[iParam0]);
	if (!func_860(iParam0))
	{
		if (is_bit_set(Local_57[iVar6149]->f_51, iParam0))
		{
			clear_bit(&(Local_57[iVar6149]->f_51), iParam0);
		}
		if (!func_268(Local_6906[iParam0]))
		{
			func_272(Local_6906[iParam0], 0, 0);
		}
		if (func_269(Local_6906[iParam0], 0, 0) < 20000)
		{
			return;
		}
	}
	iLocal_6840[iParam0] = -1;
	iLocal_6873[iParam0] = -1;
	func_270(Local_6906[iParam0]);
	set_bit(&(Local_57[iVar6149]->f_51), iParam0);
}

void func_524(int iParam0)
{
	if (func_527(iParam0))
	{
		if (!is_bit_set(Local_57[iVar6149]->f_51, iParam0))
		{
			set_bit(&(Local_57[iVar6149]->f_51), iParam0);
		}
		if (!func_861(iParam0))
		{
			if (!func_268(Local_6971[iParam0]))
			{
				func_272(Local_6971[iParam0], 0, 0);
			}
			if (func_269(Local_6971[iParam0], 0, 0) < 5000)
			{
				return;
			}
		}
		func_862(iParam0);
		func_270(Local_6971[iParam0]);
		clear_bit(&(Local_57[iVar6149]->f_51), iParam0);
	}
}

void func_525(int iParam0)
{
	if (func_527(iParam0))
	{
		func_270(Local_6971[iParam0]);
		if (!is_bit_set(Local_57[iVar6149]->f_51, iParam0))
		{
			set_bit(&(Local_57[iVar6149]->f_51), iParam0);
		}
	}
	else if (is_bit_set(Local_57[iVar6149]->f_51, iParam0))
	{
		func_270(Local_6971[iParam0]);
		clear_bit(&(Local_57[iVar6149]->f_51), iParam0);
	}
}

int func_526(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iVar1 = int_to_participantindex(iParam0);
		if (func_233(iParam0, iVar1))
		{
			if (iParam0 != -1)
			{
				if (&iLocal_6807[iParam0] != -1)
				{
					return &(iLocal_6807[iParam0]);
				}
				else if (&Local_6163[iParam0] != -1)
				{
					iLocal_6807[iParam0] = &Local_6163[iParam0];
					return &(Local_6163[iParam0]);
				}
			}
			iParam1 = network_get_player_index(iVar1);
		}
		else
		{
			return -1;
		}
	}
	iVar0 = get_unique_int_for_player(iParam1);
	if (iParam0 != -1 && &iLocal_6807[iParam0] == -1)
	{
		iLocal_6807[iParam0] = iVar0;
	}
	return iVar0;
}

bool func_527(int iParam0)
{
	if (is_bit_set(Local_5197.f_852, iParam0) || is_bit_set(Local_3713.f_741, iParam0))
	{
		return true;
	}
	return false;
}

float func_528(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_529(var uParam0, var uParam1)
{
	if (!func_863(uParam0, uParam1))
	{
		return;
	}
	if (network_is_host_of_this_script() && !is_bit_set(uParam0->f_7, 1))
	{
		func_864(uParam0);
	}
	if (!is_bit_set(uParam0->f_7, 1))
	{
		return;
	}
	func_865(uParam0, &iVar0, &iVar1, &iVar2);
	func_866(uParam0, uParam1);
	iVar3 = 0;
	if (uParam0->f_6 > -1)
	{
		iVar3 = uParam0->f_6;
	}
	else if (is_bit_set(uParam0->f_7, 3))
	{
		iVar3 = 30000;
	}
	switch (uParam0->f_8)
	{
		case 0:
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), true);
			break;
		case 1:
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), false);
			break;
		case 2:
			bVar4 = func_867(iVar0, iVar1, iVar2);
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), bVar4);
			break;
		case 3:
			_network_clock_time_override(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1));
			break;
	}
	set_bit(&(uParam1->f_5), 0);
}

void func_530(var uParam0, var uParam1)
{
	if (uParam1->f_1 != uParam0->f_1 || (*uParam0 == 2 && uParam0->f_1 == 0))
	{
		switch (*uParam0)
		{
			case 0:
				return;
			case 1:
				break;
			case 2:
				return;
			default:
				if (uParam0->f_1 == 0)
				{
				}
				else
				{
					iVar0 = func_868(uParam0->f_1);
					if (*uParam1 == 0 || uParam0->f_2 == 0)
					{
						_set_weather_type(iVar0, true, true, false, 0f, false);
					}
					else
					{
						_set_weather_type(iVar0, false, true, true, (to_float(uParam0->f_2) / 1000f), false);
					}
					func_482(1);
				}
				break;
		}
		*uParam1 = *uParam0;
		uParam1->f_1 = uParam0->f_1;
	}
}

void func_531(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = Global_3145858->f_37246[iParam0]->f_1;
	func_869(iVar0, iParam1, 0);
	func_870(iVar0, fParam2, iParam3);
	if (is_bit_set(Global_3145858->f_37246[iParam0]->f_8, 0))
	{
		_0x57c242543b7b8fb9(iVar0, 0);
		_0xc07b91b996c1de89(iVar0, 0);
	}
}

bool func_532(int iParam0)
{
	if (func_83())
	{
		if (iParam0 < (Global_2097152->f_255 - 1))
		{
			return false;
		}
	}
	return true;
}

float func_533(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	fVar0 = 1.5E+08f;
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (!bParam6 && !bParam7)
		{
			bVar2 = true;
		}
		else if (bParam6 && is_bit_set(Local_57[iParam0]->f_7, iVar3))
		{
			bVar2 = true;
		}
		else if (bParam7 && !is_bit_set(Global_2097152->f_258[iParam4]->f_1[iVar3]->f_23, iVar6152))
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			vVar4 = { func_871(iParam4, iVar3, 1) };
			if (!func_354(vVar4))
			{
				fVar1 = vdist2(vParam1, vVar4);
				if (fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*iParam5 = iVar3;
				}
			}
		}
		iVar3++;
	}
	return fVar0;
}

var func_534(int iParam0, int iParam1)
{
	return func_872(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

int func_535(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam0 == Global_1296859->f_8)
	{
		return func_873(iParam1, fParam2, 1, bParam3);
	}
	if (fParam2 == -1f)
	{
		if (func_874(iParam1))
		{
			fParam2 = 30f;
		}
		else
		{
			fParam2 = 30f;
		}
	}
	else if (fParam2 <= 0f)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			func_875(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 1:
			func_875(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 19:
			func_875(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 18:
			func_875(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		default:
			return 0;
	}
	return 1;
}

void func_536(var uParam0, struct<2> Param1, bool bParam3)
{
	func_876(uParam0, 84);
	if (!func_791(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_13(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if (((((((((((((((((((_get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Mission_Controller")) <= 0 && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Race_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Deathmatch_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("mp_intro")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_archery")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_challenges")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_condor_egg")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_dead_drop")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_escaped_convicts")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_golden_hat")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_hot_property")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_castle")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_rails")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_round_up")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_supply_train")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_treasure_hunt")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wreckage")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_animal_tagging")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wildlife_photographer")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_protect_legendary_animal")) <= 0)
	{
		return;
	}
	if (Global_1139381->f_4796)
	{
		func_462(&(Global_1139381->f_4796), 1);
	}
	func_805(&(Global_1139381->f_4796));
	func_877(uParam0);
	func_878();
	func_793(0);
	Global_1139381->f_4796 = { *uParam0 };
	Global_1139381->f_4796.f_13 = { Param1 };
	Global_1139381->f_4796 = 1;
	if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[0]))
	{
		Var1 = { func_879(0, 1, 0, -1) };
	}
	func_883(&(Global_1139381->f_4796), func_880(&Var1, 0), func_881(&Var1, 0), -882137232, func_882(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_884(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_796();
		}
	}
	if (bParam3)
	{
		if (func_885(0) != 3)
		{
			func_803(1, uParam0->f_57);
			func_11(16777216);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1139381->f_4796.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_886(&Var5);
		if (!func_349(115, 255))
		{
			func_887();
		}
	}
	if (uParam0->f_3)
	{
		func_888(uParam0);
		func_889();
		func_890(0);
	}
	if (uParam0->f_6)
	{
		func_890(3);
	}
	if (uParam0->f_4)
	{
		func_890(1);
		func_891(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_892(uParam0->f_25.f_3, 1);
		func_893(uParam0->f_25.f_4, 1);
		func_894(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_895();
	}
	if (uParam0->f_5)
	{
		func_890(2);
		func_896(0, uParam0->f_25.f_6, 1);
		func_896(2, uParam0->f_25.f_7, 1);
		func_896(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_890(4);
	}
	if (uParam0->f_12)
	{
		func_890(5);
		func_897(&(uParam0->f_34[0]), uParam0->f_34[0]->f_1, 0);
		func_897(&(uParam0->f_34[1]), uParam0->f_34[1]->f_1, 1);
		func_897(&(uParam0->f_34[2]), uParam0->f_34[2]->f_1, 2);
		func_897(&(uParam0->f_34[3]), uParam0->f_34[3]->f_1, 3);
		func_898();
	}
	if (uParam0->f_8)
	{
		func_890(6);
		func_800(Global_1956200->f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_800(Global_1956200->f_1549);
	}
	else if (bParam3)
	{
		func_800(Global_1956200->f_1549);
	}
}

bool func_537(int iParam0)
{
	return func_349(43, iParam0);
}

bool func_538()
{
	if (func_435(44))
	{
		func_352(43);
		return true;
	}
	return false;
}

bool func_539(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (&Global_1051139)
	{
		return;
	}
	Global_1051139->f_2 = iParam0;
	Global_1051139->f_3 = iParam1;
	Global_1051139->f_4 = iParam2;
	Global_1051139->f_6 = iParam3;
	Global_1051139->f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = get_hash_of_this_script_name();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051139->f_1 = iVar0;
	Global_1051139 = 1;
}

bool func_541(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_349(36, iParam0);
}

bool func_542(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

void func_543(var uParam0, int iParam1)
{
	func_899(uParam0, iParam1);
}

bool func_544()
{
	if (func_298() >= 3)
	{
		return true;
	}
	else if (is_bit_set(iVar13507, 2))
	{
		return true;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (network_is_participant_active(int_to_participantindex(iVar0)))
			{
				if (!func_235(iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_545()
{
	if ((((iVar13634 == 10 || iVar13634 == 11) || iVar13634 == 12) || iVar13634 == 13) || iVar13634 == 14)
	{
		return true;
	}
	return false;
}

void func_546(int iParam0)
{
	if (iVar13633 != iParam0)
	{
		iLocal_13636 = iParam0;
	}
}

bool func_547()
{
	switch (func_900())
	{
		case 0:
			if (func_9())
			{
				func_901(2);
			}
			break;
		case 2:
			if (func_397())
			{
				func_901(3);
			}
			break;
		case 3:
			if (func_902())
			{
				func_901(1);
			}
			break;
		case 1:
			if (func_903())
			{
				func_901(4);
			}
			break;
		case 4:
			if (is_bit_set(Local_5197.f_26, 18))
			{
				func_901(5);
			}
			break;
		case 5:
			if (func_904(&uLocal_9056, 45623, 88243, 0, 1))
			{
				func_474();
				func_905();
				func_901(6);
			}
			break;
		case 6:
			if (func_906(&uLocal_9840))
			{
				func_901(7);
			}
			break;
		case 7:
			if (func_907())
			{
				func_901(8);
			}
			break;
		case 8:
			if (func_908())
			{
				func_901(9);
			}
			break;
		case 9:
			if (func_268(&uLocal_14008) && func_269(&uLocal_14008, 0, 0) > 5000)
			{
				func_901(10);
				func_272(&uLocal_14008, 0, 0);
			}
			if (func_909(&iLocal_13722) && func_910(&iLocal_13873))
			{
				func_901(10);
			}
			break;
		case 10:
			if (func_398(0))
			{
				func_901(11);
				return true;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_548(int iParam0)
{
	set_bit(Global_1048684, iParam0);
}

void func_549(bool bParam0)
{
	vVar0 = { func_911(-933924539, bParam0) };
	if (!func_354(vVar0))
	{
		set_entity_coords(iVar6146, vVar0, true, false, true, true);
	}
}

void func_550()
{
	func_912(4);
	iVar0 = 0;
	while (iVar0 <= (150 - 1))
	{
		if (!func_438(iVar0) || iVar0 == 136)
		{
		}
		else
		{
			func_913(iVar0);
		}
		iVar0++;
	}
}

void func_551(int iParam0)
{
	iVar0 = func_425(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

bool func_552()
{
	iVar0 = func_526(iVar6150, iVar6144);
	if (is_bit_set(Local_5197.f_742, iVar0))
	{
		return false;
	}
	if (func_527(iVar0) && !func_860(iVar0))
	{
		return false;
	}
	if (&Local_5197.f_709[iVar0] != iVar6149)
	{
		return false;
	}
	return true;
}

void func_553(var uParam0, bool bParam1, bool bParam2)
{
	if (&Global_1048581)
	{
		return;
	}
	if (bParam1)
	{
		if (!is_bit_set(uParam0->f_8, 3) || bParam2)
		{
			toggle_paused_renderphases(false);
			set_bit(&(uParam0->f_8), 3);
		}
	}
	else if (is_bit_set(uParam0->f_8, 3) || bParam2)
	{
		toggle_paused_renderphases(true);
		clear_bit(&(uParam0->f_8), 3);
	}
}

void func_554()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

void func_555(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	func_272(&(iParam0->f_49), 0, 0);
	Var19 = &iParam0->f_44[0];
	Var19.f_3 = iParam0->f_42;
	Var0.f_3 = { Var19 };
	if (iParam0->f_43 > 1)
	{
		Var23 = &iParam0->f_44[1];
		Var23.f_3 = iParam0->f_42;
		Var0.f_7 = { Var23 };
		if (iParam0->f_43 > 2)
		{
			Var27 = &iParam0->f_44[2];
			Var27.f_3 = iParam0->f_42;
			Var0.f_11 = { Var27 };
			if (iParam0->f_43 > 3)
			{
				Var31 = &iParam0->f_44[3];
				Var31.f_3 = iParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (iParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!is_string_null_or_empty(&(iParam0->f_5)))
	{
		cVar35 = _create_var_string(10, &(iParam0->f_3), &(iParam0->f_5));
	}
	else
	{
		cVar35 = func_914(iParam0->f_3);
	}
	if (!is_string_null_or_empty(&(iParam0->f_7)))
	{
		if (!is_string_null_or_empty(&(iParam0->f_23)))
		{
			if (iParam0->f_39)
			{
				cVar35 = _create_var_string(42, cVar35, func_837(&(iParam0->f_7), 109029619), func_837(&(iParam0->f_23), 109029619), iParam0->f_40);
			}
			else
			{
				cVar35 = _create_var_string(42, cVar35, func_837(&(iParam0->f_7), 109029619), func_837(&(iParam0->f_23), 109029619));
			}
		}
		else if (iParam0->f_39)
		{
			cVar35 = _create_var_string(10, cVar35, func_837(&(iParam0->f_7), 109029619), iParam0->f_40);
		}
		else
		{
			cVar35 = _create_var_string(10, cVar35, func_837(&(iParam0->f_7), 109029619));
		}
	}
	else if (iParam0->f_39)
	{
		cVar35 = _create_var_string(2, cVar35, iParam0->f_40);
	}
	if (bParam1)
	{
		*iParam0 = func_915(&Var0, &(iParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*iParam0 = func_916(&Var0, &(iParam0->f_1), cVar35, 0, 0, 1);
	}
}

int func_556(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = -1;
	if (_event_manager_is_event_pending(iParam1))
	{
		if (_event_manager_peek_event(iParam1, &vVar1))
		{
			if (func_268(uParam2))
			{
				if (func_269(uParam2, 0, 0) > 250)
				{
					switch (vVar1.x)
					{
						case -1203660660:
							if (vVar1.y == *iParam0)
							{
								if (vVar1.z == 2074623703)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 0;
								}
								else if (vVar1.z == 1400745903)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 1;
								}
								else if (vVar1.z == 444632721)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 2;
								}
							}
							break;
					}
				}
				_event_manager_pop_event(iParam1);
			}
			else
			{
				func_272(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_557(int iParam0)
{
	Local_13985 = { Local_5197.f_2 };
	Local_13985.f_8 = func_917(&(Local_13985.f_9));
	Local_13985.f_20 = func_918();
	Local_13985.f_21 = iParam0;
}

bool func_558()
{
	if (!func_824(iVar6150))
	{
		return false;
	}
	iVar0 = -1;
	func_581(&iVar0, 0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_559()
{
	iVar0 = func_526(iVar6150, iVar6144);
	iVar1 = &Local_5197.f_675[iVar0];
	func_919(iVar1, 1);
	iVar2 = func_920(iVar1);
	func_499(iVar2);
	clear_bit(&(Local_57[iVar6150]->f_13), 14);
	set_bit(&(Local_57[iVar6150]->f_13), 16);
}

void func_560(struct<2> Param0)
{
	Var0 = { Param0 };
	if (func_8())
	{
		Var0 = { Global_265377->f_124517.f_71.f_53 };
	}
	func_921(iVar6145, &Local_13939);
	Var2.f_4 = 3;
	Var2.f_8 = -1;
	Var2.f_9 = -1;
	Var2.f_10 = -1;
	Var2.f_11 = 1;
	Var2.f_42.f_1 = -1;
	Var2.f_42.f_3 = -1082130432;
	Var2.f_42.f_4 = 2;
	Var2.f_42.f_5 = -1082130432;
	Var2.f_42.f_7 = -1082130432;
	Var2.f_42.f_9 = -1082130432;
	Var2.f_42.f_11 = -1082130432;
	Var2.f_54.f_2 = -1;
	Var2.f_54.f_5 = -1;
	Var2 = { func_922(1, 1) };
	func_923(&Var2, &Var0, &(Local_12276.f_973), 0);
}

void func_561(int iParam0)
{
	if (iParam0 != iVar7263)
	{
		iLocal_7266 = iParam0;
	}
}

bool func_562()
{
	if (!is_bit_set(iVar13507, 1))
	{
		if (func_572())
		{
			set_bit(&uLocal_13509, 1);
		}
	}
	switch (iVar13635)
	{
		case 0:
			if (func_584())
			{
				func_924(1);
			}
			break;
		case 1:
			if (func_585())
			{
				func_924(2);
			}
			break;
		case 2:
			if (func_586())
			{
				func_924(3);
			}
			break;
		case 3:
			if (!is_bit_set(iVar13507, 1))
			{
				return false;
			}
			func_587(1);
			Local_57[iVar6150]->f_14 = { get_entity_coords(iVar6147, true, false) };
			func_588();
			func_175(0);
			func_51(0);
			func_272(&uLocal_6773, 0, 0);
			func_324();
			_display_hud_component(128623374);
			return true;
	}
	return false;
}

void func_563()
{
	Var0 = 166;
	Var0.f_1 = uVar6144;
	Var0.f_4 = Local_57[iVar6150]->f_9;
	uVar5 = func_534(5, 8);
	if (_0x179a6f0ee2e79026(&uVar5))
	{
		trigger_script_event(1, &Var0, 5, 52, &uVar5);
	}
}

void func_564(bool bParam0)
{
	func_160(64);
	func_103(0);
	func_287(1);
	func_287(256);
	func_287(4);
	func_925();
	func_926(Global_1940258, 524288);
	func_926(Global_1940258, 131072);
	func_927(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0x406ccf555b04fad3(uVar6146, 0, 0f);
	func_928();
	func_188(1);
	func_929(&(Local_12276.f_973), 0);
	func_930(bParam0, vLocal_8333);
	_0x780a13f780a13f1b(0);
	if (!func_84(46))
	{
		_0xa1b4052c2a3dcc1e();
	}
}

int func_565()
{
	if (func_931(&iVar0, Local_13985) && func_230(iVar0))
	{
		iVar1 = network_get_participant_index(iVar0);
		iVar2 = iVar1;
		if (func_233(iVar2, iVar1) && !func_235(iVar2))
		{
			if (!is_bit_set(Local_57[iVar2]->f_13, 23) && !func_264(iVar2))
			{
				return get_player_ped(iVar0);
			}
		}
	}
	return func_642(0);
}

void func_566(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = player_ped_id();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_170(1);
	func_932(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

void func_567(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_260), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_260), iParam0);
		func_458(iParam0);
	}
}

var func_568()
{
	return func_933();
}

void func_569(var uParam0)
{
	if (!uParam0->f_6)
	{
		uParam0->f_6 = 1;
	}
}

void func_570(var uParam0)
{
	if (!uParam0->f_5)
	{
		uParam0->f_5 = 1;
	}
}

void func_571()
{
	Var0 = 167;
	Var0.f_1 = uVar6144;
	uVar4 = func_534(5, 8);
	if (_0x179a6f0ee2e79026(&uVar4))
	{
		trigger_script_event(1, &Var0, 4, 53, &uVar4);
	}
}

bool func_572()
{
	if (Global_2097152->f_6199 == 0)
	{
		return true;
	}
	func_934(iVar7109, 1);
	Local_7111 = iVar7109 + 1;
	if (iVar7109 >= Global_2097152->f_6199)
	{
		Local_7111 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

int func_573()
{
	return uVar7264;
}

void func_574(var uParam0)
{
	set_bit(&(uParam0->f_158), 16);
}

struct<2> func_575(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636), func_223(iParam1));
			break;
		case 3:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_602), func_223(iParam1));
			break;
		case 4:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_2104), func_223(iParam1));
			break;
		case 5:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_12606), func_223(iParam1));
			break;
		case 6:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_12908), func_223(iParam1));
			break;
		case 7:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_15910), func_223(iParam1));
			break;
		case 8:
			Var0.f_1 = func_935(iParam0, &(Global_1071686->f_636.f_16512), func_223(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_936();
	}
	return Var0;
}

void func_576()
{
	Var0 = { func_937() };
	if (!func_13(Var0))
	{
		return;
	}
	if (func_938(Var0))
	{
		return;
	}
	if (func_939(Var0))
	{
		return;
	}
	func_940(Var0);
}

void func_577()
{
	Var0 = { func_937() };
	if (!func_13(Var0))
	{
		return;
	}
	if (func_939(Var0))
	{
		return;
	}
	if (!func_938(Var0))
	{
		func_576();
	}
	if (Var0 == 2)
	{
		func_942(func_941(Var0));
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	func_943(Var0, 1, 0, 1);
}

void func_578(bool bParam0)
{
	iVar1 = func_944(0, (Global_1296543->f_43 - 1));
	iVar0 = iVar1;
	while (iVar0 >= 0)
	{
		if (Global_1296543[iVar0] != get_id_of_this_thread())
		{
			if (bParam0)
			{
			}
			else
			{
				func_945(iVar0);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

bool func_579()
{
	if ((is_bit_set(Local_5197.f_26, 4) || func_542(iVar6144, 32768)) || func_8())
	{
		return true;
	}
	return false;
}

void func_580()
{
	iVar0 = -1;
	func_120(1);
	if (!func_8())
	{
		iVar0 = func_946();
	}
	else if (func_238())
	{
		if (func_745())
		{
			iVar0 = Global_2892896->f_13;
		}
		else
		{
			iVar0 = 0;
		}
		bVar1 = true;
	}
	if (!func_238())
	{
		if (iVar0 != -1)
		{
			iVar0 = -1;
			bVar1 = true;
		}
	}
	else if (iVar0 == -1)
	{
		iVar0 = 0;
		bVar1 = true;
	}
	if (iVar0 < -1)
	{
		iVar0 = -1;
		bVar1 = true;
	}
	if (Global_2097152->f_6316 > 0)
	{
		if (iVar0 >= 8)
		{
			iVar0 = 7;
			bVar1 = true;
		}
	}
	else if (iVar0 >= 16)
	{
		iVar0 = 15;
		bVar1 = true;
	}
	if (bVar1)
	{
		func_947(iVar0, 0, 1);
	}
	func_919(iVar0, 0);
	if (Local_57[iVar6150]->f_9 > -1)
	{
		iLocal_6162 = Local_57[iVar6150]->f_9;
	}
	else
	{
		iLocal_6162 = 31;
	}
}

void func_581(int iParam0, bool bParam1)
{
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	*iParam0 = -1;
	if (func_8())
	{
		iVar1 = func_948(Global_2892896->f_18, 0, (Local_5197.f_44 - 1));
		iVar0 = func_948(Global_2892896->f_19, 1, (Global_2097152->f_255 - 1));
		iVar2 = func_949(Global_2892896->f_19, Global_2892896->f_20);
		*iParam0 = iVar6148;
	}
	else if (func_950())
	{
		iVar8 = 999999;
		iVar9 = 999999;
		iVar10 = 999999;
		iVar11 = -1;
		iVar12 = 999999;
		iVar13 = 999999;
		iVar14 = 999999;
		iVar15 = -1;
		iVar16 = Local_57[iVar6148]->f_9;
		iVar18 = func_951();
		iVar3 = 0;
		while (iVar3 <= 31)
		{
			if ((((iVar3 != iVar6148 && func_236(iVar3) == 5) && !func_263(iVar3)) && !func_264(iVar3)) && !func_93(iVar3))
			{
				iVar4 = int_to_participantindex(iVar3);
				if (func_233(iVar3, iVar4))
				{
					iVar17++;
					if (!bParam1)
					{
						if (((iVar18 == -1 || iVar18 == 0) || iVar16 == -1) || Local_57[iVar3]->f_9 == iVar16)
						{
							if (Local_57[iVar3]->f_4 < iVar8)
							{
								iVar8 = Local_57[iVar3]->f_4;
								iVar9 = Local_57[iVar3]->f_3;
								iVar10 = Local_57[iVar3]->f_6;
								iVar11 = iVar3;
							}
							else if (Local_57[iVar3]->f_4 == iVar8)
							{
								if (Local_57[iVar3]->f_3 < iVar9)
								{
									iVar9 = Local_57[iVar3]->f_3;
									iVar10 = Local_57[iVar3]->f_6;
									iVar11 = iVar3;
								}
							}
						}
					}
					else if (Local_57[iVar3]->f_9 == iVar16)
					{
						iVar5 = network_get_player_index(iVar4);
						if (func_230(iVar5))
						{
							iVar6 = get_player_ped(iVar5);
							if (is_ped_on_mount(iVar6))
							{
								iVar7 = get_mount(iVar6);
								if (!is_ped_injured(iVar7))
								{
									if (!_is_mount_seat_free(iVar7, -1) && _is_mount_seat_free(iVar7, 0))
									{
										if (Local_57[iVar3]->f_4 < iVar12)
										{
											iVar12 = Local_57[iVar3]->f_4;
											iVar13 = Local_57[iVar3]->f_3;
											iVar14 = Local_57[iVar3]->f_6;
											iVar15 = iVar3;
										}
										else if (Local_57[iVar3]->f_4 == iVar12)
										{
											if (Local_57[iVar3]->f_3 < iVar13)
											{
												iVar13 = Local_57[iVar3]->f_3;
												iVar14 = Local_57[iVar3]->f_6;
												iVar15 = iVar3;
											}
										}
									}
								}
							}
						}
					}
					if (iVar17 >= Local_5197.f_47)
					{
					}
					else
					{
						iVar3++;
					}
					if (iVar11 != -1)
					{
						if (bParam1)
						{
							if (iVar15 != -1)
							{
								iVar1 = iVar12;
								iVar0 = iVar13;
								iVar2 = iVar14;
								*iParam0 = iVar15;
								iLocal_8325 = *iParam0;
							}
							else
							{
								iLocal_8325 = -1;
								return;
							}
						}
						else
						{
							iVar1 = iVar8;
							iVar0 = iVar9;
							iVar2 = iVar10;
							*iParam0 = iVar11;
						}
						if (func_83())
						{
							if (iVar0 > 1)
							{
								iVar0 = (iVar0 - 1);
							}
							func_952(iVar0, iVar2);
						}
						else if (func_334())
						{
							func_953(iVar0, iVar2);
						}
					}
					Local_57[iVar6148]->f_4 = iVar1;
					Local_57[iVar6148]->f_3 = iVar0;
					Local_57[iVar6148]->f_6 = iVar2;
				}
			}
		}
	}
}

bool func_582()
{
	uVar4 = func_672();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&uVar4, iVar0))
		{
		}
		else
		{
			iVar2 = int_to_playerindex(iVar0);
			if (!network_is_player_active(iVar2) || !network_is_player_a_participant(iVar2))
			{
				return false;
			}
			iVar3 = network_get_participant_index(iVar2);
			iVar1 = iVar3;
			if (is_bit_set(Local_57[iVar1]->f_13, 15) || is_bit_set(Local_57[iVar1]->f_13, 10))
			{
			}
			else if (!func_233(iVar1, iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_583()
{
	iVar3 = -1;
	uVar4 = func_672();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (!func_233(iVar0, iVar2))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar2);
			if (func_235(iVar0))
			{
				if (func_236(iVar0) == 0 && _0x72b2e00c9bac6789(&uVar4, iVar1))
				{
					return false;
				}
			}
			else
			{
				if (!is_bit_set(Local_57[iVar0]->f_13, 20))
				{
					return false;
				}
				iVar1 = network_get_player_index(iVar2);
				if (func_238())
				{
					if (!func_8())
					{
						iVar3 = func_954(iVar1);
					}
					else
					{
						iVar3 = Global_2892896->f_13;
					}
				}
				if (func_674(iVar1) != iVar3)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_584()
{
	func_175(1);
	if (!func_955(&(Local_57[iVar6150]->f_12)))
	{
		return false;
	}
	if (Global_2097152->f_6485 == 1)
	{
		Local_57[iVar6150]->f_4 = 0;
		Local_57[iVar6150]->f_3 = (Local_57[iVar6150]->f_12 / 3) + 1;
		Local_57[iVar6150]->f_6 = 0;
		iLocal_8433 = Local_57[iVar6150]->f_3;
	}
	vVar0 = { func_956() };
	if (func_354(vVar0))
	{
		return false;
	}
	clear_ped_tasks_immediately(iVar6147, true, true);
	set_entity_coords(iVar6147, vVar0, true, false, true, true);
	return true;
}

bool func_585()
{
	if (func_652(255))
	{
		return false;
	}
	vVar0 = { func_956() };
	bVar4 = (func_950() && !(func_675(-1) && iVar8323 != -1));
	if (bVar4 && func_957())
	{
		func_112(1);
		func_958(&Local_7498);
	}
	else if (Local_57[iVar6150]->f_12 != -1)
	{
		if (Global_2097152->f_6485 == 1)
		{
			iVar5 = (Local_57[iVar6150]->f_12 / 3) + 1;
			if (iVar5 == 1)
			{
				uVar3 = &Global_2097152->f_6132[Local_57[iVar6150]->f_12];
			}
			else
			{
				uVar3 = Global_2097152->f_258[iVar5]->f_1[0]->f_5;
			}
		}
		else
		{
			uVar3 = &Global_2097152->f_6132[Local_57[iVar6150]->f_12];
		}
	}
	func_959();
	switch (Global_2097152->f_31)
	{
		case -1742691940:
		case 628988510:
			if (Global_2097152->f_31 == 628988510)
			{
				func_960(3);
			}
			break;
	}
	if (func_675(-1) && iVar8323 != -1)
	{
		vVar0 = { vVar0 + Vector(1f, 2f, 2f) };
		if (get_ground_z_for_3d_coord(vVar0, &uVar6, false))
		{
			vVar0.f_2 = uVar6;
		}
	}
	else
	{
		func_961(1);
	}
	if (func_84(79))
	{
		func_180(1);
	}
	func_175(1);
	func_51(1);
	func_176(1);
	func_53(1);
	func_63(1);
	func_962(1);
	if (!bVar4)
	{
		func_963(vVar0, uVar3, 1);
	}
	else
	{
		func_49(1, 1);
	}
	return true;
}

bool func_586()
{
	if (!bVar6148 || func_652(255))
	{
		if (bVar6148)
		{
			set_ped_config_flag(iVar6147, 286, true);
		}
		func_964();
		return false;
	}
	set_ped_config_flag(iVar6147, 286, true);
	if (!func_965())
	{
		return false;
	}
	func_966(1);
	func_961(1);
	if (iVar8129 > 0)
	{
		func_114(0);
	}
	else if (func_967() == 1)
	{
		func_114(0);
	}
	func_596(1);
	func_175(1);
	return true;
}

void func_587(bool bParam0)
{
	if (!bParam0)
	{
		if (func_268(&uLocal_8319) && func_269(&uLocal_8319, 0, 0) < 2000)
		{
			return;
		}
	}
	if (func_968())
	{
		vLocal_8321 = { get_entity_coords(iVar6146, false, false) };
	}
	func_272(&uLocal_8319, 0, 0);
}

void func_588()
{
	iVar0 = Local_57[iVar6150]->f_9;
	if (!is_entity_visible(iVar6147))
	{
		set_entity_visible(iVar6147, true);
		set_player_team(iVar6144, iVar0, false);
	}
	if (iVar0 != -1)
	{
		iVar2 = 0;
		while (iVar2 < 16)
		{
			func_969(iVar0, iVar2);
			iVar2++;
		}
		network_set_friendly_fire_option(false);
		func_172(1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_239(-1, -1))
		{
			func_970(-1, 2);
			network_set_friendly_fire_option(false);
		}
		else
		{
			func_970(-1, 0);
		}
	}
	if (func_84(45))
	{
		if (!animpostfx_is_running("MP_DM_Annesburg_ReduceDustDensity"))
		{
			animpostfx_play("MP_DM_Annesburg_ReduceDustDensity");
		}
	}
	if (func_84(67))
	{
		if (!animpostfx_is_running("MP_Rhodes_ReduceDustDensity"))
		{
			animpostfx_play("MP_Rhodes_ReduceDustDensity");
		}
	}
	func_971(iVar6147);
	func_112(1);
	if (!func_972())
	{
		func_118(0);
	}
	else if (!func_973())
	{
		func_974(2048, 1);
	}
	if (func_84(30))
	{
		func_131(0);
	}
	if (!func_84(52))
	{
		_0xaca45ddcef6071c4(iVar6144, 0);
		_0xa0c683284df027c7(iVar6144, 0, 0);
	}
	iVar3 = (Local_57[iVar6150]->f_3 - 1);
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	Local_57[iVar6150]->f_7 = 0;
	func_975(&(Local_57[iVar6150]->f_7), Local_57[iVar6150]->f_3, Local_57[iVar6150]->f_6, iVar3, get_entity_coords(iVar6147, true, false));
	Local_57[iVar6150]->f_8 = 0;
	iVar4 = func_976(Local_57[iVar6150]->f_3);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (is_bit_set(Local_57[iVar6150]->f_7, iVar1))
		{
			func_975(&(Local_57[iVar6150]->f_8), iVar4, iVar1, Local_57[iVar6150]->f_3, Global_2097152->f_258[Local_57[iVar6150]->f_3]->f_1[iVar1]->f_1);
		}
		iVar1++;
	}
	if (func_334())
	{
		func_977(Local_57[iVar6150]->f_3, 1, 1);
	}
	if (func_844(iVar3, Local_57[iVar6150]->f_3, 0))
	{
		set_bit(&uLocal_13486, 5);
	}
	func_978(Local_57[iVar6150]->f_3, 1);
	Var5 = { func_979(0) };
	func_980(Var5, Global_3145858->f_49704[Local_57[iVar6150]->f_10]->f_65);
	func_981(Global_3145858->f_49704[Local_57[iVar6150]->f_10]->f_40);
	if (!func_203(12) && Global_2097152->f_31 == -1742691940)
	{
		set_enable_vehicle_slipstreaming(true);
	}
	uLocal_6782 = _0x617d3494ad58200f(iVar6144);
	if (Global_2097152->f_31 == 149530285)
	{
		_0xfeca17cf3343694b(iVar6144, Global_2097152->f_6461);
	}
	uLocal_6783 = _0x68a0389e0718ac8f(iVar6144);
	if (Global_2097152->f_6462 != fVar6781)
	{
		_0xbbadfb5e5e5766fb(iVar6144, Global_2097152->f_6462);
	}
	if (func_982())
	{
		set_ped_drops_weapons_when_dead(iVar6147, false);
	}
	if (Global_2097152->f_6428 != 1)
	{
		_0xd637d327080cd86e(Global_2097152->f_6428);
	}
	set_ped_config_flag(iVar6147, 366, true);
	iVar1 = 0;
	while (iVar1 < Global_2097152->f_255)
	{
		if (is_bit_set(Global_2097152->f_258[iVar1]->f_76, 5))
		{
			Local_57[iVar6150]->f_29 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (func_950())
	{
		if (Local_57[iVar6150]->f_4 > 0)
		{
			iVar17 = Global_2097152->f_255;
		}
		else if (Local_57[iVar6150]->f_3 > 1)
		{
			iVar17 = Local_57[iVar6150]->f_3;
		}
		if (iVar17 > 0)
		{
			if (!func_83())
			{
				iVar1 = 1;
				while (iVar1 <= (iVar17 - 1))
				{
					func_983(iVar1, 0);
					iVar1++;
				}
			}
			else
			{
				iVar1 = 1;
				while (iVar1 <= (Global_2097152->f_255 - 2))
				{
					if (func_984(&uLocal_12113, iVar1))
					{
						func_983(iVar1, 0);
					}
					iVar1++;
				}
			}
		}
	}
	else if (Local_57[iVar6150]->f_12 >= 0)
	{
		Local_57[iVar6150]->f_24 = Local_57[iVar6150]->f_12 + 1;
	}
	Var18.f_4 = 3;
	Var18.f_8 = -1;
	Var18.f_9 = -1;
	Var18.f_10 = -1;
	Var18.f_11 = 1;
	Var18.f_42.f_1 = -1;
	Var18.f_42.f_3 = -1082130432;
	Var18.f_42.f_4 = 2;
	Var18.f_42.f_5 = -1082130432;
	Var18.f_42.f_7 = -1082130432;
	Var18.f_42.f_9 = -1082130432;
	Var18.f_42.f_11 = -1082130432;
	Var18.f_54.f_2 = -1;
	Var18.f_54.f_5 = -1;
	Var18 = { func_922(0, 0) };
	func_985(&Var18, 0);
	func_986(&Var18);
	func_987(iVar6147);
	func_118(0);
	if (Global_2097152->f_32 == 218185167 || Global_2097152->f_32 == -1185533313)
	{
		_0xe2b3b852b537c398(1);
		set_ped_config_flag(iVar6147, 544, true);
	}
	func_988(iVar0, 0, 0, 0);
	func_989();
	_0x1f5e07e14a86fafc(1);
	func_199(0);
	_0xbc7d36946d19e60e(0);
	if (!func_203(0))
	{
		func_990(8192);
		func_990(16384);
	}
	set_ped_can_be_knocked_off_vehicle(iVar6147, 1);
	func_991(Global_3145858->f_60018, iVar6144, iVar6147);
	if (func_203(23))
	{
		set_ped_config_flag(iVar6147, 551, true);
	}
	if (Global_3145858->f_60019 > 0)
	{
		_0xac9ae68f0a463752(Global_3145858->f_60019);
	}
	if (func_84(73))
	{
		set_ped_config_flag(iVar6147, 361, true);
	}
	if (func_84(78))
	{
		set_ped_config_flag(iVar6147, 567, true);
	}
	func_564(0);
	func_992();
}

void func_589(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_34228 - 1))
	{
		if (Global_3145858->f_34229[iVar0]->f_3 != 0)
		{
			func_993(Global_3145858->f_34229[iVar0], (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_590(int iParam0)
{
	if (iVar7266 != iParam0)
	{
		iLocal_7269 = iParam0;
	}
}

bool func_591(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate()) > 750;
}

bool func_592(bool bParam0)
{
	iVar0 = &Global_1049278;
	iVar1 = player_id();
	iVar2 = get_player_team(iVar1);
	iVar4 = 16;
	if (&Global_1049277 >= iVar4)
	{
		return true;
	}
	if (&Global_1049278 >= 32)
	{
		return true;
	}
	iVar5 = int_to_participantindex(iVar0);
	if (network_is_participant_active(iVar5) || bVar3)
	{
		if (bVar3)
		{
			iVar6 = iVar1;
		}
		else
		{
			iVar6 = network_get_player_index(iVar5);
		}
		if ((get_player_team(iVar6) == iVar2 && !bParam0) || iVar1 == iVar6)
		{
			iVar7 = get_player_ped(iVar6);
			if (!is_ped_injured(iVar7))
			{
			}
			if (!bParam0 && iVar1 != iVar6)
			{
				Global_1049264 = 0;
			}
			if (!bVar3 || &Global_1049277 == 0)
			{
				(*Global_1049198)[&Global_1049277] = clone_ped(iVar7, 0f, true, true);
				func_994(iVar7, Global_1049198[&Global_1049277]);
			}
			if (is_ped_injured(Global_1049198[&Global_1049277]))
			{
				revive_injured_ped(Global_1049198[&Global_1049277]);
			}
			set_entity_visible(Global_1049198[&Global_1049277], false);
			if (is_ped_on_mount(iVar7))
			{
				(*Global_1049231)[&Global_1049277] = clone_ped(get_mount(iVar7), 0f, false, true);
				_set_ped_on_mount(Global_1049198[&Global_1049277], Global_1049231[&Global_1049277], -1, true);
				set_blocking_of_non_temporary_events(Global_1049198[&Global_1049277], true);
				set_blocking_of_non_temporary_events(Global_1049231[&Global_1049277], true);
				set_entity_invincible(Global_1049198[&Global_1049277], true);
				set_entity_invincible(Global_1049231[&Global_1049277], true);
				set_entity_visible(Global_1049231[&Global_1049277], false);
			}
			else
			{
				(*Global_1049231)[&Global_1049277] = -1;
				set_blocking_of_non_temporary_events(Global_1049198[&Global_1049277], true);
				set_entity_invincible(Global_1049198[&Global_1049277], true);
			}
			Global_1049277 = &Global_1049277 + 1;
			if (&Global_1049277 >= iVar4)
			{
				return true;
			}
		}
	}
	Global_1049278 = &Global_1049278 + 1;
	if (&Global_1049278 >= 32)
	{
		return true;
	}
	if (!bVar3)
	{
		func_592(bParam0);
	}
	return false;
}

bool func_593()
{
	switch (iVar7270)
	{
		case 0:
			Global_1049276 = Local_57[iVar6150]->f_12;
			func_18(8);
			func_18(128);
			func_995(1);
			break;
		case 1:
			if (!func_996(16384))
			{
				if (func_996(32768) && func_996(65536))
				{
					if (!_is_loading_screen_active())
					{
						set_bit(&(Local_57[iVar6150]->f_13), 25);
					}
					else
					{
						clear_bit(&(Local_57[iVar6150]->f_13), 25);
					}
				}
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (Local_6163[iVar0]->f_3 && !func_235(iVar0))
					{
						if (!is_bit_set(Local_57[iVar0]->f_13, 25))
						{
							return false;
						}
					}
					iVar0++;
				}
				func_18(16384);
			}
			if (!is_bit_set(iVar13507, 16))
			{
				if (!func_996(16))
				{
					return false;
				}
				else
				{
					set_bit(&uLocal_13509, 16);
				}
			}
			if (!is_bit_set(Local_57[iVar6150]->f_13, 2))
			{
				set_bit(&(Local_57[iVar6150]->f_13), 2);
			}
			if (!func_312())
			{
				return false;
			}
			if (func_591(Local_5197.f_163))
			{
				set_player_control(iVar6144, false, 256, false);
				func_995(2);
			}
			break;
		case 2:
			if (!is_bit_set(Local_57[iVar6150]->f_13, 17))
			{
				play_sound_frontend("321_GO", "RDRO_Race_sounds", true, 0);
				_databinding_write_data_bool(&(Local_12276.f_12[10]), true);
				func_272(&uLocal_7303, 0, 0);
				set_bit(&(Local_57[iVar6150]->f_13), 17);
			}
			if (func_269(&uLocal_7303, 0, 0) >= 3000)
			{
				func_175(0);
				func_51(0);
				func_141(0);
				func_995(3);
				play_sound_frontend("match_start", "RDRO_Adversary_Sounds", true, 0);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_594(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

void func_595()
{
	switch (Global_2097152->f_31)
	{
		case 149530285:
			func_997();
			break;
	}
}

void func_596(bool bParam0)
{
	if ((Global_2097152->f_31 == 628988510 && is_ped_in_any_vehicle(iVar6146, false)) && can_anchor_boat_here(iVar6158))
	{
		iVar0 = get_vehicle_ped_is_in(iVar6146, false);
		set_boat_anchor(iVar0, bParam0);
		_set_boat_frozen_when_anchored(iVar0, bParam0, 0);
	}
}

void func_597(var uParam0)
{
	Var0.f_20 = -1;
	Var0.f_22 = 32;
	Var0.f_343 = 32;
	Var0.f_377 = 28;
	Var0.f_378 = 5;
	Var0.f_469 = -1;
	*uParam0 = { Var0 };
}

void func_598()
{
	if (func_235(iVar6150))
	{
		return;
	}
	script_race_init(Global_2097152->f_255, Global_2097152->f_254, Local_5197.f_45, uVar6145);
}

void func_599()
{
	clear_bit(&(Local_5197.f_26), 13);
}

void func_600()
{
	clear_bit(&uLocal_13508, 5);
	iVar0 = Local_57[iVar6157]->f_3;
	iVar1 = Local_57[iVar6157]->f_6;
	if (iVar6151 != -1)
	{
		func_998(iVar0, iVar1);
		return;
	}
	if (func_95() || func_267())
	{
		return;
	}
	if (!is_bit_set(iVar13506, 6))
	{
		set_bit(&uLocal_13508, 5);
	}
	if (!func_354(Global_2097152->f_258[iVar0]->f_1[0]->f_1))
	{
		if (func_83())
		{
			if (func_334() && iVar12116 != 0)
			{
				iVar0 = iVar12116;
				iVar1 = iVar12117;
			}
			else
			{
				iVar0 = func_843(get_entity_coords(iVar6147, true, false));
			}
			Local_57[iVar6150]->f_6 = 0;
		}
		vVar4 = { get_entity_coords(iVar6147, true, false) };
		fLocal_7384 = func_533(iVar6157, vVar4, iVar0, &iVar1, 1, 0);
		if (bVar6148)
		{
			if (func_999(iVar0, iVar1))
			{
				iVar1 = iVar12117;
				func_1000(iVar0, iVar1, &bVar3);
				if (bVar3)
				{
					Local_57[iVar6150]->f_6 = iVar12117;
				}
			}
			else if (func_1001(iVar6147, iVar0, iVar1))
			{
				bVar3 = true;
			}
		}
		else
		{
			fLocal_7384 = 1.5E+08f;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar3 && func_840())
	{
		bVar2 = true;
	}
	func_1002(&bVar2);
	if (bVar2)
	{
		func_1003(iVar0, iVar1);
	}
}

void func_601(int iParam0, var uParam1)
{
	func_1004(iParam0, uParam1, is_bit_set(iVar13504, 5));
}

void func_602()
{
	if (Global_2097152->f_6199 == 0)
	{
		return;
	}
	if (is_bit_set(iVar13506, 5) || Local_7111.f_31 != 0)
	{
		func_1005();
	}
	if (Local_7111.f_1 != Local_5197.f_542 || Local_7111.f_2 != Local_5197.f_541)
	{
		func_1006();
	}
	else if (Local_7111.f_9 != 0)
	{
		func_1007();
	}
	if (Local_7111.f_6 != 0)
	{
		func_1008();
	}
}

void func_603(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = Global_3145858->f_51905;
	}
	else
	{
		iVar0 = iParam0;
	}
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			_0x90da5ba5c2635416();
			break;
		case 2:
			if (_0xa24c1d341c6e0d53(0, 0, 0))
			{
				_0x8370d34bd2e60b73();
			}
			_disable_first_person_cam_this_frame();
			break;
	}
}

void func_604()
{
	if (bVar6143)
	{
		iLocal_7329 = 0;
		iLocal_7347 = 0;
		iLocal_7365 = 0;
		if (iVar7387 != 0 || iVar7383 != -1)
		{
			func_371();
			iLocal_7385 = -1;
		}
		if (func_238())
		{
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				iLocal_7330[iVar0] = 0;
				iLocal_7348[iVar0] = 0;
				iLocal_7366[iVar0] = 0;
				iLocal_7457[iVar0] = 999;
				iLocal_7474[iVar0] = 999;
				iVar0++;
			}
		}
	}
}

void func_605(int iParam0)
{
	iVar1 = Local_57[iParam0]->f_9;
	if (bVar6142)
	{
		if (Local_6163[iParam0]->f_3)
		{
			if (!func_93(iParam0))
			{
				if (is_bit_set(Local_57[iParam0]->f_13, 15) || func_276(iParam0))
				{
					iVar2 = func_526(iParam0, Local_6163[iParam0]->f_4);
					if (iVar2 != -1 && func_1009(iParam0, iVar2))
					{
						if (is_bit_set(Local_57[iParam0]->f_13, 14))
						{
							if (!is_bit_set(Local_5197.f_708, iVar2))
							{
								Local_5197.f_675[iVar2] = func_859();
								set_bit(&(Local_5197.f_708), iVar2);
							}
						}
						else if (is_bit_set(Local_57[iParam0]->f_13, 16))
						{
							if (is_bit_set(Local_5197.f_708, iVar2) && func_94(iParam0))
							{
								Local_5197.f_675[iVar2] = -1;
								clear_bit(&(Local_5197.f_708), iVar2);
							}
						}
					}
				}
				if (func_94(iParam0))
				{
					if (!Local_6163[iParam0]->f_5 && &Local_5197.f_121[iVar0] < Local_57[iParam0]->f_17)
					{
						if (iVar1 != -1)
						{
							Local_5197.f_104[iVar1] = (&Local_5197.f_104[iVar1] + (&Local_5197.f_121[iVar0] - Local_57[iParam0]->f_17));
						}
						Local_5197.f_121[iVar0] = Local_57[iParam0]->f_17;
					}
					if (!func_263(iParam0))
					{
						func_1010(iParam0, iVar1, Local_6163[iParam0]->f_6);
						if (Local_57[iParam0]->f_4 > Local_5197.f_542 || (Local_57[iParam0]->f_3 > Local_5197.f_541 && Local_57[iParam0]->f_4 == Local_5197.f_542))
						{
							Local_5197.f_541 = Local_57[iParam0]->f_3;
							if (Local_5197.f_542 != Local_57[iParam0]->f_4)
							{
								bVar3 = true;
								Local_5197.f_542 = Local_57[iParam0]->f_4;
							}
							func_1011(Local_5197.f_541, Local_5197.f_542, bVar3, iParam0);
						}
						if (!func_264(iParam0))
						{
							iLocal_7329 = iVar7326 + 1;
							if (func_238() && iVar1 != -1)
							{
								iLocal_7330[iVar1] = &iLocal_7330[iVar1] + 1;
							}
						}
						else
						{
							iLocal_7347 = iVar7344 + 1;
							if (func_238() && iVar1 != -1)
							{
								iLocal_7348[iVar1] = &iLocal_7348[iVar1] + 1;
							}
							if (!is_bit_set(Local_5197.f_26, 6))
							{
								Local_5197.f_164 = func_269(&(Local_5197.f_159), 0, 0);
								set_bit(&(Local_5197.f_26), 6);
							}
						}
					}
					else
					{
						iLocal_7365 = iVar7362 + 1;
						if (func_238() && iVar1 != -1)
						{
							iLocal_7366[iVar1] = &iLocal_7366[iVar1] + 1;
						}
					}
				}
			}
		}
		else if (!func_93(iParam0))
		{
			if (func_263(iParam0))
			{
				iLocal_7365 = iVar7362 + 1;
				if (func_238() && iVar1 != -1)
				{
					iLocal_7366[iVar1] = &iLocal_7366[iVar1] + 1;
				}
			}
			else if (func_264(iParam0))
			{
				func_1010(iParam0, iVar1, Local_6163[iParam0]->f_6);
				iLocal_7347 = iVar7344 + 1;
				if (func_238() && iVar1 != -1)
				{
					iLocal_7348[iVar1] = &iLocal_7348[iVar1] + 1;
				}
			}
		}
	}
	if ((iParam0 != iVar6149 && Local_6163[iParam0]->f_3) && !func_235(iParam0))
	{
		if (!is_bit_set(iVar6781, iParam0))
		{
			if (func_276(iParam0))
			{
				if (Local_6163[iParam0]->f_5)
				{
					func_1012(&(Local_12276.f_973), Local_6163[iParam0]->f_4, 0);
					if (func_239(Local_57[iVar6149]->f_9, iVar1))
					{
						iVar4 = 2;
					}
					else
					{
						iVar4 = 0;
					}
					func_1013(iParam0, Local_6163[iParam0]->f_4, iVar4);
					func_1015(iParam0, func_1014(iVar1, 0, iVar4 == 2));
					func_1016(iParam0, func_240(iVar1, 0, iVar4 == 2));
					set_bit(&uLocal_6784, iParam0);
				}
			}
			else
			{
				set_bit(&uLocal_6784, iParam0);
			}
		}
	}
}

void func_606()
{
	if (bVar6143)
	{
		if (iVar7327 != Local_5197.f_47)
		{
			Local_5197.f_47 = iVar7327;
			bVar0 = true;
		}
		if (iVar7345 != Local_5197.f_65)
		{
			Local_5197.f_65 = iVar7345;
			bVar0 = true;
		}
		if (iVar7363 != Local_5197.f_83)
		{
			Local_5197.f_83 = iVar7363;
			bVar0 = true;
		}
		if (bVar0)
		{
			func_699(1);
		}
		if (func_238())
		{
			iVar1 = 0;
			while (iVar1 <= 15)
			{
				if (&iLocal_7330[iVar1] != &Local_5197.f_48[iVar1])
				{
					Local_5197.f_48[iVar1] = &iLocal_7330[iVar1];
				}
				if (&iLocal_7348[iVar1] != &Local_5197.f_66[iVar1])
				{
					Local_5197.f_66[iVar1] = &iLocal_7348[iVar1];
				}
				if (&iLocal_7366[iVar1] != &Local_5197.f_84[iVar1])
				{
					Local_5197.f_84[iVar1] = &iLocal_7366[iVar1];
				}
				if (&Local_5197.f_48[iVar1] > 0)
				{
					iVar2++;
					if (iVar1 > Local_5197.f_46)
					{
						Local_5197.f_46 = iVar1;
					}
				}
				if (&Local_5197.f_66[iVar1] > 0)
				{
					if (func_951() == 1)
					{
						iVar3++;
						if (!is_bit_set(&(Local_5197.f_27[iVar1]), 0))
						{
							set_bit(Local_5197.f_27[iVar1], 0);
						}
					}
					else if (&Local_5197.f_48[iVar1] == 0)
					{
						iVar3++;
						if (!is_bit_set(&(Local_5197.f_27[iVar1]), 0))
						{
							set_bit(Local_5197.f_27[iVar1], 0);
						}
					}
				}
				if (&Local_5197.f_84[iVar1] > 0)
				{
					if (&Local_5197.f_48[iVar1] == 0 && &Local_5197.f_66[iVar1] == 0)
					{
						iVar4++;
						if (!is_bit_set(&(Local_5197.f_27[iVar1]), 1))
						{
							set_bit(Local_5197.f_27[iVar1], 1);
						}
					}
				}
				iVar1++;
			}
			if (iVar2 != Local_5197.f_101)
			{
				Local_5197.f_101 = iVar2;
			}
			if (iVar3 != Local_5197.f_102)
			{
				Local_5197.f_102 = iVar3;
			}
			if (iVar4 != Local_5197.f_103)
			{
				Local_5197.f_103 = iVar4;
			}
		}
		if (Local_5197.f_47 > Local_5197.f_2.f_3)
		{
			Local_5197.f_2.f_3 = Local_5197.f_47;
		}
		if (iVar7387 != 0)
		{
		}
		if (func_238())
		{
			func_1017();
		}
		if (Local_5197.f_172 > 0)
		{
			if ((Local_5197.f_47 + Local_5197.f_65) <= Global_2097152->f_6019)
			{
				Local_5197.f_172 = 0;
			}
			else
			{
				if (Local_5197.f_172 > ((Local_5197.f_47 + Local_5197.f_65) - Global_2097152->f_6019))
				{
					Local_5197.f_172 = ((Local_5197.f_47 + Local_5197.f_65) - Global_2097152->f_6019);
				}
				if (Local_5197.f_172 > Local_5197.f_47)
				{
					Local_5197.f_172 = Local_5197.f_47;
				}
				if (Local_5197.f_172 > 0)
				{
					if (Local_5197.f_172 == 1 && iVar7387 == 0)
					{
						if (iVar7383 != -1)
						{
							set_bit(&iVar5, iVar7383);
						}
					}
					else
					{
						iVar6 = 0;
						while (iVar6 <= (Local_5197.f_172 - 1))
						{
							iVar7 = ((iVar7454 - 1) - iVar6);
							if (iVar7 >= 0)
							{
								if (&iLocal_7423[iVar7] != -1)
								{
									set_bit(&iVar5, &(iLocal_7423[iVar7]));
								}
							}
						else
						{
							}
							else
							{
								iVar6++;
							}
						}
					}
					if (iVar5 != 0)
					{
						iVar8 = 0;
						while (iVar8 <= 31)
						{
							if (is_bit_set(iVar5, iVar8))
							{
								if (!func_264(iVar8))
								{
									iVar10 = network_get_player_index(int_to_participantindex(iVar8));
									iVar9 = iVar10;
									func_273(-1878271701, iVar10, 1, 0);
									_0x31010318ba9897ac(&(Local_5197.f_173), iVar9);
								}
							}
							iVar8++;
						}
					}
				}
				Local_5197.f_172 = 0;
			}
		}
		if ((Global_2097152->f_6018 != -1 && !func_268(&(Local_5197.f_743))) && func_1018())
		{
			func_272(&(Local_5197.f_743), 0, 0);
		}
	}
	iVar11 = ((Local_5197.f_47 + Local_5197.f_65) + Local_5197.f_83);
	if (iVar11 != iVar7381)
	{
		if (iVar11 < iVar7381)
		{
			set_bit(&uLocal_13508, 26);
			if (func_385())
			{
				if (bVar6143)
				{
					Local_5197.f_167 = func_387(iVar11);
				}
			}
		}
		iLocal_7383 = iVar11;
	}
	else if (is_bit_set(iVar13506, 26))
	{
		clear_bit(&uLocal_13508, 26);
	}
}

void func_607()
{
}

void func_608()
{
}

void func_609(int iParam0)
{
	if (!bVar6142)
	{
		return;
	}
	if (network_does_network_id_exist(&(Local_5197.f_238[iParam0])))
	{
		iVar0 = net_to_ped(&(Local_5197.f_238[iParam0]));
		if (is_entity_dead(iVar0) || func_1019(iParam0))
		{
			func_190(Local_5197.f_238[iParam0]);
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
		if (!is_bit_set(Local_5197.f_538, iParam0) && func_749(iParam0))
		{
			if (func_1020(iParam0, 0))
			{
				bVar1 = false;
			}
		}
	}
	if (bVar1)
	{
		return;
	}
	if (is_bit_set(Local_5197.f_540, iParam0))
	{
		if (!network_has_control_of_entity(iVar0))
		{
			network_request_control_of_entity(iVar0);
		}
		else if (_0xa0bc8faed8cfeb3c(iVar0))
		{
			func_1021(iVar0, &(Global_3145858->f_453[iParam0]->f_165), Global_3145858->f_453[iParam0]->f_45, 0);
			clear_bit(&(Local_5197.f_540), iParam0);
		}
	}
	switch (&Local_5197.f_447[iParam0])
	{
		case 0:
			func_1022(iParam0);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			vVar2 = { Global_2097152->f_6501[&Local_5197.f_480[iParam0]]->f_24 };
			fVar5 = vdist2(get_entity_coords(iVar0, true, false), vVar2);
			if (fVar5 < (4f * 4f) && !is_bit_set(Local_5197.f_516, iParam0))
			{
				if (network_has_control_of_entity(iVar0))
				{
					set_bit(&(Local_5197.f_516), iParam0);
					iVar6 = get_player_ped(int_to_playerindex(get_nearest_player_to_entity(iVar0, 0, 0)));
					func_1023(-1821507459, iVar0, iVar6, 0f, 0f, 0f, 0, 0);
					set_ped_keep_task(iVar0, true);
					func_190(Local_5197.f_238[iParam0]);
					Local_5197.f_238[iParam0] = 0;
					clear_bit(&(Local_5197.f_538), iParam0);
					set_bit(&(Local_5197.f_526), iParam0);
				}
				else
				{
					network_request_control_of_entity(iVar0);
				}
			}
			break;
	}
}

void func_610(int iParam0)
{
	if (network_does_network_id_exist(&(Local_5197.f_238[iParam0])))
	{
		iVar0 = net_to_ped(&(Local_5197.f_238[iParam0]));
		if (is_entity_dead(iVar0))
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
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	switch (&Local_5197.f_447[iParam0])
	{
		case 0:
			break;
		case 1:
			func_1024(iParam0, iVar0);
			break;
		case 2:
			if (func_1025(iVar0, 923520851))
			{
				task_wander_in_area(iVar0, func_1026(iParam0), Global_3145858->f_453[iParam0]->f_20, 1077936128, 1086324736, 0);
			}
			break;
		case 3:
			if (func_1025(iVar0, -1146898486))
			{
				task_wander_standard(iVar0, 40000f, 0);
			}
			break;
		case 4:
			if (func_1025(iVar0, -1824940423))
			{
				vVar2 = { Global_2097152->f_6501[&Local_5197.f_480[iParam0]]->f_24 };
				task_go_straight_to_coord(iVar0, vVar2, 3f, 20000, 1193033728, 1056964608, 0);
			}
			break;
	}
	if (is_bit_set(Global_3145858->f_453[iParam0]->f_13, 31))
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
}

void func_611(int iParam0)
{
	if (!bVar6142)
	{
		return;
	}
	if (network_does_network_id_exist(&(Local_5197.f_238.f_33[iParam0])))
	{
		iVar0 = net_to_veh(&(Local_5197.f_238.f_33[iParam0]));
		if (is_entity_dead(iVar0) || func_1027(iParam0))
		{
			bVar1 = true;
			if (network_has_control_of_entity(iVar0))
			{
				func_191(Local_5197.f_238.f_33[iParam0], 0);
			}
			else
			{
				network_request_control_of_entity(iVar0);
			}
		}
	}
	else
	{
		bVar1 = true;
		if (!is_bit_set(Local_5197.f_539, iParam0) && func_747(iParam0))
		{
			if (func_1028(iParam0, 0))
			{
				bVar1 = false;
			}
		}
	}
	if (bVar1)
	{
		return;
	}
}

void func_612(int iParam0)
{
	if (network_does_network_id_exist(&(Local_5197.f_238.f_33[iParam0])))
	{
		iVar0 = net_to_veh(&(Local_5197.f_238.f_33[iParam0]));
		if (is_entity_dead(iVar0))
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
		return;
	}
	if (is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 5))
	{
		if (is_vehicle_driveable(iVar0, false, false))
		{
			if (Global_3145858->f_36480[iParam0]->f_9 > 0)
			{
				vVar2 = { get_entity_coords(iVar0, true, false) };
				fVar5 = absf(get_distance_between_coords(get_entity_coords(iVar6146, true, false), vVar2, false));
				if (fVar5 > IntToFloat(Global_3145858->f_36480[iParam0]->f_9))
				{
					if (does_blip_exist(&(iLocal_9053[iParam0])))
					{
						remove_blip(iLocal_9053[iParam0]);
					}
				}
				else if (!does_blip_exist(&(iLocal_9053[iParam0])))
				{
					iLocal_9053[iParam0] = func_1029(&(Global_3145858->f_36480[iParam0]->f_11), iVar0, 465509728);
				}
			}
			else if (!does_blip_exist(&(iLocal_9053[iParam0])))
			{
				iLocal_9053[iParam0] = func_1029(&(Global_3145858->f_36480[iParam0]->f_11), iVar0, 465509728);
			}
		}
		else if (does_blip_exist(&(iLocal_9053[iParam0])))
		{
			remove_blip(iLocal_9053[iParam0]);
		}
	}
	func_1030(iVar0, iParam0);
	func_1031(iVar0, iParam0);
	if (!network_has_control_of_entity(iVar0))
	{
		clear_bit(&uLocal_9049, iParam0);
		return;
	}
	if (!is_bit_set(iVar9046, iParam0) || &uLocal_9050[iParam0] != &Local_5197.f_513[iParam0])
	{
		set_train_cruise_speed(iVar0, &(Local_5197.f_513[iParam0]));
		uLocal_9050[iParam0] = &Local_5197.f_513[iParam0];
		set_bit(&uLocal_9049, iParam0);
	}
}

void func_613(int iParam0)
{
	if (!func_1032(iParam0))
	{
		if (func_1033(iParam0))
		{
			if (func_1034(iParam0) || func_1035(iParam0))
			{
				func_1036(iParam0);
				if ((!func_745() || Global_2097152->f_6501[iParam0]->f_43 == 0) || is_bit_set(Global_2097152->f_6501[iParam0]->f_43, Local_57[iVar6156]->f_9))
				{
					bVar0 = true;
				}
			}
			if (func_1037(iParam0))
			{
				bVar0 = true;
			}
		}
		else if (func_1037(iParam0) || func_1035(iParam0))
		{
			bVar0 = true;
		}
	}
	else
	{
		func_270(Local_12124[iParam0]);
		if (func_268(Local_12189[iParam0]))
		{
			func_1038(iParam0);
		}
		if (func_1039(iParam0))
		{
			func_270(Local_5197.f_610[iParam0]);
			clear_bit(&uLocal_12120, iParam0);
			clear_bit(&uLocal_12121, iParam0);
			func_270(Local_12189[iParam0]);
		}
	}
	if (bVar0)
	{
		func_1040(iParam0);
	}
	else
	{
		func_1041(iParam0);
	}
}

void func_614()
{
	if (func_542(iVar6144, 1024) || func_174(255))
	{
		if (iVar13697 != iVar6157 && iVar6157 != iVar6150)
		{
			iLocal_13699 = iVar6157;
			iVar0 = Local_57[iVar6150]->f_9;
			if ((!func_84(40) && !func_542(iVar6144, 1024)) || (func_84(41) && func_542(iVar6144, 1024)))
			{
				iVar0 = Local_57[iVar6157]->f_9;
			}
			func_988(iVar0, 1, func_542(iVar6144, 1024), 0);
		}
	}
}

void func_615()
{
	if (iVar6151 == -1)
	{
		func_1042();
		func_1043();
		func_1044();
		func_1045();
		func_1046();
		func_1047();
		func_1048();
		func_1049();
		func_1050();
		func_1051();
		func_1052();
		func_1053();
		func_1054();
		func_1055();
	}
}

void func_616()
{
	if (!func_1056())
	{
		func_1057();
		return;
	}
	if (iVar7489 > 0)
	{
		func_1058(iVar7489);
	}
}

void func_617()
{
	if (Global_3145858->f_6822 == 0)
	{
		return;
	}
	func_1059(&iLocal_6149, &iLocal_13657);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iVar8433 >= Global_3145858->f_6822)
		{
			iLocal_8435 = 0;
		}
		else
		{
			func_1060(iVar8433);
			iLocal_8435 = iVar8433 + 1;
			iVar0++;
		}
	}
}

void func_618()
{
	if (Global_3145858->f_18726 == 0)
	{
		return;
	}
	if (iVar10252 >= Global_3145858->f_18726)
	{
		iLocal_10254 = 0;
	}
	iVar1 = iVar10252 + 25;
	if (iVar1 > Global_3145858->f_18726)
	{
		iVar1 = (Global_3145858->f_18726 - 1);
	}
	if (is_bit_set(iVar13507, 4))
	{
		iLocal_10254 = 0;
		iVar1 = (Global_3145858->f_18726 - 1);
	}
	iVar0 = iVar10252;
	while (iVar0 <= iVar1)
	{
		if (!func_472(iVar0))
		{
			func_1061(iVar0);
		}
		else
		{
			func_1062(iVar0);
		}
		iVar0++;
	}
	iLocal_10254 = iVar1 + 1;
}

void func_619()
{
	if (Global_3145858->f_32696 == 0)
	{
		return;
	}
	if (iVar10253 >= Global_3145858->f_32696)
	{
		iLocal_10255 = 0;
	}
	func_1063(iVar10253);
	iLocal_10255 = iVar10253 + 1;
}

void func_620()
{
	if (bVar6143)
	{
		if ((Local_5197.f_47 + Local_5197.f_65) > Global_2097152->f_6019)
		{
			if (Local_5197.f_166 > 0 || Local_5197.f_165 > 0)
			{
				if (func_268(&(Local_5197.f_168)))
				{
					iVar0 = Local_5197.f_166;
					if (Local_5197.f_165 > 0)
					{
						iVar0 = Local_5197.f_165;
					}
					if (func_269(&(Local_5197.f_168), 0, 1) >= iVar0)
					{
						func_1064(1);
						Local_5197.f_165 = 0;
						if (((Local_5197.f_47 + Local_5197.f_65) - 1) > Global_2097152->f_6019 && Local_5197.f_166 > 0)
						{
							func_272(&(Local_5197.f_168), 0, 1);
						}
						else
						{
							func_270(&(Local_5197.f_168));
						}
					}
				}
				else
				{
					func_272(&(Local_5197.f_168), 0, 1);
				}
			}
			if ((Local_5197.f_167 > 0 && Global_2097152->f_6022 > 0) && func_268(&(Local_5197.f_170)))
			{
				if (func_269(&(Local_5197.f_170), 0, 1) >= Global_2097152->f_6022)
				{
					func_1064(Local_5197.f_167);
					func_270(&(Local_5197.f_170));
				}
			}
		}
		else
		{
			if (func_268(&(Local_5197.f_168)))
			{
				func_270(&(Local_5197.f_168));
			}
			if (func_268(&(Local_5197.f_170)))
			{
				func_270(&(Local_5197.f_170));
			}
		}
	}
	if ((!func_95() && !func_267()) && iVar6151 == -1)
	{
		if (Global_2097152->f_6018 != -1 && func_268(&(Local_5197.f_743)))
		{
			iVar1 = func_269(&(Local_5197.f_743), 0, 0);
			iVar2 = (Global_2097152->f_6018 - iVar1);
			if (iVar2 <= 0)
			{
				func_96();
				set_bit(&(Local_57[iVar6150]->f_13), 8);
			}
		}
		if (Global_2097152->f_6017 > 0)
		{
			iVar3 = (Global_2097152->f_6017 - func_269(&(Local_57[iVar6150]->f_18), 0, 0));
			if (iVar3 <= 0)
			{
				if (func_203(16))
				{
					func_294(0);
					set_bit(&(Local_57[iVar6150]->f_13), 3);
				}
				else
				{
					func_96();
					set_bit(&(Local_57[iVar6150]->f_13), 8);
				}
			}
		}
		iVar4 = func_384(Local_57[iVar6150]->f_3);
		if (iVar4 > 0 && func_268(&(Local_57[iVar6150]->f_22)))
		{
			if (func_269(&(Local_57[iVar6150]->f_22), 0, 0) >= iVar4)
			{
				if (func_203(16))
				{
					func_294(0);
					set_bit(&(Local_57[iVar6150]->f_13), 3);
				}
				else
				{
					func_272(&uLocal_7386, 0, 0);
					func_96();
				}
			}
		}
		if (Local_5197.f_162 > 0 && func_268(&(Local_5197.f_159)))
		{
			if (func_269(&(Local_5197.f_159), 0, 0) >= Local_5197.f_162)
			{
				if (Local_5197.f_65 == 0)
				{
					func_294(1);
					set_bit(&(Local_57[iVar6150]->f_13), 3);
					set_bit(&(Local_57[iVar6150]->f_13), 26);
				}
				else
				{
					func_96();
					set_bit(&(Local_57[iVar6150]->f_13), 8);
				}
			}
		}
		if (func_238())
		{
			if (func_951() == 1)
			{
				if (func_1065(Local_57[iVar6150]->f_9))
				{
					if (!is_bit_set(Local_57[iVar6150]->f_13, 3))
					{
						set_bit(&(Local_57[iVar6150]->f_13), 3);
					}
				}
			}
		}
	}
}

void func_621()
{
	func_1066();
}

void func_622()
{
	if (func_268(&uLocal_14010))
	{
		if (func_269(&uLocal_14010, 0, 0) > 10000)
		{
			fVar0 = (to_float(Local_57[iVar6157]->f_24) / to_float(iVar7381));
			bVar1 = false;
			if (is_bit_set(Local_57[iVar6150]->f_13, 23))
			{
				func_510(func_489(678099476), 1);
				bVar1 = true;
			}
			if (!bVar1)
			{
				if (fVar0 <= (1f / 3f) || (iVar7381 <= 2 && fVar0 <= 0.5f))
				{
					func_510(func_489(297696516), 1);
				}
				else if (fVar0 <= (2f / 3f))
				{
					func_510(func_489(911604740), 1);
				}
				else
				{
					func_510(func_489(-489849587), 1);
				}
			}
			func_272(&uLocal_14010, 0, 0);
		}
	}
	else
	{
		func_272(&uLocal_14010, 0, 0);
	}
}

bool func_623()
{
	return func_500() > 0;
}

void func_624()
{
	if (is_pause_menu_active())
	{
		set_frontend_active(false);
	}
	func_196();
	set_bit(&(Local_57[iVar6150]->f_13), 3);
	set_bit(&(Local_57[iVar6150]->f_13), 6);
	func_1067(&uLocal_13646);
	func_97(0);
	clear_bit(&(Local_13286.f_159), 12);
	set_frontend_active(false);
	set_ped_reset_flag(iVar6147, 265, true);
	func_169(0);
	func_168(1);
	if (!func_174(255) && bVar6146)
	{
		if ((func_1068() == 2 || func_1068() == 0) || func_1068() == 4)
		{
			func_171(3);
		}
	}
	if (!func_629())
	{
		func_129(1);
	}
	func_62(0, 8);
	if (func_234(255))
	{
		func_53(1);
	}
	if (bVar6146)
	{
		func_175(1);
		set_everyone_ignore_player(iVar6144, true);
	}
	if (func_267())
	{
		chal_net_stop_goal(1852874750, 1453781476);
	}
	func_209(0);
	func_205(1);
	_0xa967d6a8ed2d713b(iVar6147, 0);
}

void func_625(int iParam0)
{
	if (iParam0 != iVar7304)
	{
		iLocal_7307 = iParam0;
	}
}

bool func_626()
{
	if (func_1069() && func_268(&uLocal_7386))
	{
		if (func_269(&uLocal_7386, 0, 0) < 2000)
		{
			return false;
		}
	}
	return true;
}

bool func_627()
{
	if ((!func_267() && !func_93(-1)) && func_1070())
	{
		return true;
	}
	return false;
}

bool func_628()
{
	if (is_bit_set(iVar13506, 19) || func_93(-1))
	{
		return true;
	}
	bVar0 = false;
	if (!is_bit_set(iVar13506, 16))
	{
		clear_ped_tasks(iVar6147, 1, 0);
		if (is_ped_on_mount(iVar6147))
		{
			iVar1 = get_mount(iVar6147);
			clear_ped_tasks(iVar1, 1, 0);
		}
		set_bit(&uLocal_13508, 16);
	}
	if (!is_ped_in_any_vehicle(iVar6147, false))
	{
		bVar0 = func_1071(iVar6147, &uLocal_7308, 1, 0, 0, 1084227584, 100, 0, 0);
	}
	else
	{
		iVar2 = get_vehicle_ped_is_in(iVar6147, false);
		bVar0 = is_vehicle_stopped(iVar2);
		if (!bVar0)
		{
			bring_vehicle_to_halt(iVar2, 5f, 1, false);
			if ((is_this_model_a_boat(get_entity_model(iVar2)) && !has_entity_collided_with_anything(iVar2)) && can_anchor_boat_here(iVar2))
			{
				set_boat_anchor(iVar2, true);
			}
		}
	}
	if (!func_268(&uLocal_7309))
	{
		func_272(&uLocal_7309, 0, 0);
	}
	else if (func_269(&uLocal_7309, 0, 0) >= 5000)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_270(&uLocal_7309);
		clear_bit(&uLocal_13508, 16);
		set_bit(&uLocal_13508, 19);
	}
	return bVar0;
}

bool func_629()
{
	if ((Local_5197.f_24 == 4 || func_279()) || is_bit_set(Local_57[iVar6150]->f_13, 8))
	{
		return true;
	}
	return false;
}

bool func_630(bool bParam0)
{
	if (is_bit_set(iVar13483, 12) || func_93(-1))
	{
		return true;
	}
	if (!func_268(&uLocal_13489))
	{
		func_272(&uLocal_13489, 0, 0);
		return false;
	}
	else if (!func_1072(&uLocal_13489, 500, 0))
	{
		return false;
	}
	if (func_267())
	{
		StringCopy(&cVar0, "POS_OOT", 24);
	}
	else if (func_830(&iLocal_6155))
	{
		StringCopy(&cVar0, "POS_ELIM", 24);
	}
	else
	{
		iVar3 = Local_57[iVar6149]->f_24;
		StringCopy(&cVar0, "POS_", 24);
		StringIntConCat(&cVar0, iVar3, 24);
	}
	iVar4 = 5000;
	if (!func_629())
	{
		iVar4 = -1;
		func_272(&uLocal_13492, 0, 0);
	}
	uLocal_13491 = func_831(&cVar0, iVar4, 0, 0, 0, 1);
	if (bParam0)
	{
		if (iVar3 == 1)
		{
			_0x3a9a281ff71249e9("MP_MatchEndPulseWinner", 3000);
		}
		else
		{
			_0x3a9a281ff71249e9("MP_MatchEndPulseLoser", 3000);
		}
	}
	if (iVar3 > 0)
	{
		func_273(-657254249, iVar6143, iVar3, 0);
	}
	set_bit(&uLocal_13486, 12);
	return true;
}

void func_631()
{
	if (!is_bit_set(iVar13506, 17))
	{
		set_entity_visible(iVar6147, false);
		switch (Global_2097152->f_31)
		{
			case 149530285:
				if (network_has_control_of_entity(iVar6158))
				{
					set_entity_visible(iVar6158, false);
					set_entity_collision(iVar6158, false, false);
					freeze_entity_position(iVar6158, true);
				}
				break;
			case -1742691940:
			case 628988510:
				if (network_has_control_of_entity(iVar6159))
				{
					if (iVar6159 == _0xb9050a97594c8832(iVar6144))
					{
						func_1073();
					}
					else
					{
						set_entity_as_mission_entity(iVar6159, false, true);
						delete_vehicle(&iLocal_6161);
					}
				}
				break;
		}
		set_bit(&uLocal_13508, 17);
	}
}

bool func_632(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_1074(uParam0, iParam1))
	{
		switch (uParam0->f_22)
		{
			case 0:
				if (uParam0->f_20 == -1)
				{
					if (func_1075(iParam1))
					{
						if (is_ped_male(*iParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_F", 129, 0, false, true);
						}
						bVar0 = true;
					}
					else if (is_ped_on_mount(*iParam1))
					{
						if (is_ped_male(*iParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_F", 129, 0, false, true);
						}
					}
					else if (is_ped_male(*iParam1))
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_M", 129, 0, false, true);
					}
					else
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_F", 129, 0, false, true);
					}
					vVar1 = { get_entity_coords(*iParam1, true, true) };
					if (bVar0)
					{
						vVar1.f_2 = (vVar1.z + 1f);
					}
					set_anim_scene_origin(uParam0->f_20, vVar1, get_entity_rotation(*iParam1, 2), 2);
					load_anim_scene(uParam0->f_20);
					_0xdf7b5144e25cd3fe(uParam0->f_20, "LIVE");
					func_1076(&(uParam0->f_22), 1);
				}
				break;
			case 1:
				iVar4 = func_1077(uParam0, iParam1, bParam2, 0, uParam0->f_12);
				if (func_1075(iParam1))
				{
					iVar4 = 1;
					uParam0->f_17 = 1;
				}
				if (uParam0->f_9 == 0)
				{
					if (iVar4 == 2)
					{
						uParam0->f_12 = -1;
						uParam0->f_9 = 1;
						if (func_1078(iParam1))
						{
							uParam0->f_9 = 2;
						}
					}
					else if (iVar4 == 1)
					{
						func_1076(&(uParam0->f_22), 2);
					}
				}
				else if (iVar4 == 1)
				{
					func_1076(&(uParam0->f_22), 2);
				}
				else if (iVar4 == 2 || uParam0->f_9 > 1)
				{
					uParam0->f_9++;
					if (uParam0->f_9 > 3)
					{
						if (!does_cam_exist(uParam0[0]))
						{
							(*uParam0)[0] = create_camera(26379945, true);
						}
						func_1079((*uParam0)[0]);
						uParam0->f_16 = 1;
						return true;
					}
				}
				break;
			case 2:
				if (_is_anim_scene_loaded(uParam0->f_20, true, false) && _0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = uParam0->f_12;
						func_948(uParam0->f_21, 0, 5);
						set_anim_scene_int(uParam0->f_20, "CameraIndex", uParam0->f_21, false);
						_set_anim_scene_playback_list_bool(uParam0->f_20, "LIVE", true);
						func_272(&(uParam0->f_18), 0, 0);
						func_1076(&(uParam0->f_22), 3);
					}
				}
				break;
			case 3:
				if (bParam3)
				{
					if (is_ped_on_mount(*iParam1))
					{
						set_ped_max_move_blend_ratio(*iParam1, 0f);
						if (!is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(*iParam1)))
						{
							return false;
						}
						if (!_is_ped_getting_into_a_mount_seat(*iParam1, true))
						{
							return false;
						}
					}
				}
				if (get_entity_speed(*iParam1) > 0.01f)
				{
					if (func_268(&(uParam0->f_18)) && func_269(&(uParam0->f_18), 0, 0) < 3000)
					{
						return false;
					}
				}
				vVar5 = { get_entity_coords(*iParam1, true, true) };
				set_anim_scene_origin(uParam0->f_20, vVar5, get_entity_rotation(*iParam1, 2), 2);
				func_270(&(uParam0->f_18));
				func_1076(&(uParam0->f_22), 4);
				break;
			case 4:
				if (uParam0->f_17)
				{
					if (bParam2)
					{
						func_1080(iParam1, uParam0);
					}
					_freeze_ped_camera_rotation(*iParam1);
					func_1076(&(uParam0->f_22), 5);
					return true;
				}
				break;
			case 5:
				return true;
		}
	}
	else
	{
		uParam0->f_16 = 1;
		return true;
	}
	return false;
}

void func_633(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_cam_exist(uParam0[iVar0]))
		{
			destroy_cam(uParam0[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (_0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
		{
			_0xae6ada8fe7e84acc(uParam0->f_20, "LIVE");
		}
		if (_is_anim_scene_started(uParam0->f_20, false))
		{
			abort_anim_scene(uParam0->f_20, false);
		}
		reset_anim_scene(uParam0->f_20, 0);
		_delete_anim_scene(uParam0->f_20);
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	func_270(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
	func_270(&uLocal_14016);
}

int func_634(bool bParam0)
{
	switch (iVar7308)
	{
		case 0:
			if (!func_334())
			{
				iVar1 = iVar6146;
				if (_is_ped_getting_into_a_mount_seat(iVar6146, true))
				{
					iVar1 = get_mount(iVar6146);
				}
				_0xf60165e1d2c5370b(iVar1, &uVar2, &fVar3);
				vVar4 = { get_offset_from_entity_in_world_coords(iVar6146, -1f, 20f, 0f) };
				if (get_ground_z_for_3d_coord(vVar4, &fVar0, false))
				{
					vVar4.f_2 = fVar0;
				}
				task_go_straight_to_coord(iVar1, vVar4, fVar3, 20000, 1193033728, 1056964608, 0);
			}
			if (func_354(Global_2097152->f_6433))
			{
				func_1081(1);
			}
			else
			{
				func_1081(2);
			}
			break;
		case 1:
			bVar7 = !func_354(Global_2097152->f_6453);
			if (!bVar7)
			{
				vLocal_13719 = { func_1082(iVar7302) * FtoV(func_1083()) };
				vVar18 = { get_entity_coords(iVar6146, true, false) };
				fVar21 = get_entity_heading(iVar6146);
				vVar8 = { _get_object_offset_from_coords(vVar18, fVar21, vLocal_13719) };
				vVar11 = { vVar8 };
				bVar22 = func_1084(vVar18, vVar8, &vVar11);
				if (bVar22 || is_bit_set(iVar13505, 4))
				{
					if (!get_ground_z_for_3d_coord(vVar11 + Vector(5f, 0f, 0f), &fVar0, false))
					{
						fVar0 = (vVar18.z - 1f);
					}
					vVar11.f_2 = (fVar0 + 1.2f);
					vVar14 = { func_1085(vVar18, fVar21, iVar7302) };
					bVar17 = true;
				}
			}
			else
			{
				vVar11 = { Global_2097152->f_6453 };
				bVar17 = true;
			}
			if (bVar17)
			{
				if (!does_cam_exist(iVar7296))
				{
					iLocal_7299 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
				}
				set_cam_coord(iVar7296, vVar11);
				if (!bVar7)
				{
					point_cam_at_coord(iVar7296, vVar14);
					fVar23 = 35f;
				}
				else
				{
					set_cam_rot(iVar7296, Global_2097152->f_6456, 2);
					fVar23 = 40f;
				}
				set_cam_fov(iVar7296, fVar23);
				set_cam_active(iVar7296, true);
				render_script_cams(true, false, 3000, true, false, 0);
				func_272(&uLocal_7301, 0, 0);
				func_1081(3);
			}
			break;
		case 3:
			if (iVar7302 < 2)
			{
				func_1086();
			}
			if (!is_entity_on_screen(iVar6146))
			{
				if (!bVar7)
				{
					shake_cam(iVar7296, "SMALL_EXPLOSION_SHAKE", 0.1f);
				}
				*bParam0 = 1;
				func_272(&uLocal_7301, 0, 0);
				func_1081(5);
			}
			else if (func_269(&uLocal_7301, 0, 0) > 3500)
			{
				*bParam0 = 1;
				func_270(&uLocal_7301);
				func_1081(5);
			}
			break;
		case 2:
			iLocal_7299 = create_camera_with_params(26379945, Global_2097152->f_6433, Global_2097152->f_6433.f_6, Global_2097152->f_6433.f_12, true, 2);
			set_cam_params(iVar7296, Global_2097152->f_6433.f_3, Global_2097152->f_6433.f_9, Global_2097152->f_6433.f_13, Global_2097152->f_6433.f_15, Global_2097152->f_6433.f_14, Global_2097152->f_6433.f_14, 2, 1, 0);
			render_script_cams(true, false, 3000, true, false, 0);
			func_1081(4);
			break;
		case 4:
			if (is_bit_set(Global_2097152->f_6433.f_17, 0) && !bVar7303)
			{
				if (!is_entity_on_screen(iVar6146))
				{
					shake_cam(iVar7296, func_1087(Global_2097152->f_6433.f_18), Global_2097152->f_6433.f_19);
					iLocal_7306 = 1;
				}
			}
			if (!is_cam_interpolating(iVar7296))
			{
				func_1081(5);
			}
			break;
		case 5:
			*bParam0 = 1;
			func_270(&uLocal_7301);
			return 1;
	}
	return 0;
}

int func_635(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	while (iVar0 < 60)
	{
		if (func_1088(iVar0, 2))
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
		func_1089(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_476(iParam0))
	{
		return;
	}
	iVar0 = func_809(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_637(int iParam0, bool bParam1)
{
	if (bParam1 && !func_476(iParam0))
	{
		return false;
	}
	iVar0 = func_809(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

bool func_638()
{
	if ((Local_5197.f_47 + Local_5197.f_65) > 0)
	{
		return false;
	}
	return true;
}

bool func_639(int iParam0)
{
	return func_349(29, iParam0);
}

void func_640()
{
	func_352(21);
	if (animpostfx_is_running("DeathFailMP01"))
	{
		animpostfx_stop("DeathFailMP01");
	}
}

void func_641()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21952.f_583));
	func_1090();
}

int func_642(bool bParam0)
{
	iVar2 = 255;
	if (bParam0)
	{
		iVar3 = 32;
	}
	else
	{
		iVar3 = 0;
	}
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if ((func_233(iVar0, iVar1) && !func_235(iVar0)) && iVar0 != iVar6149)
		{
			if (((((Local_57[iVar0]->f_24 > iVar3 && !bParam0) || (Local_57[iVar0]->f_24 <= iVar3 && bParam0)) && !is_bit_set(Local_57[iVar0]->f_13, 23)) && !func_234(Local_6163[iVar0]->f_4)) && !func_264(iVar0))
			{
				iVar2 = network_get_player_index(iVar1);
				iVar3 = Local_57[iVar0]->f_24;
			}
		}
		iVar0++;
	}
	return get_player_ped(iVar2);
}

void func_643(var uParam0)
{
	if (!is_bit_set(uParam0->f_15, 1))
	{
		if (_uistatemachine_exists(*uParam0) && _0xf7c180f57f85d0b8(*uParam0))
		{
			_0x6b9fe4f0ba521a19(*uParam0, 0);
			set_bit(&(uParam0->f_15), 1);
		}
	}
	else if (!_0x11e73195e735b25b(*uParam0))
	{
		uVar0 = *uParam0;
		_uistatemachine_destroy_and_clear(&uVar0);
		clear_bit(&(uParam0->f_15), 0);
		clear_bit(&(uParam0->f_15), 1);
	}
}

void func_644()
{
	if (is_bit_set(Local_57[iVar6150]->f_13, 24))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_233(iVar0, 255))
		{
			if (!func_235(iVar0))
			{
				if (Local_57[iVar0]->f_26 > iVar1)
				{
					iVar1 = Local_57[iVar0]->f_26;
					iVar3 = iVar0;
				}
				if (Local_57[iVar0]->f_26 < iVar2)
				{
					iVar2 = Local_57[iVar0]->f_26;
					iVar4 = iVar0;
				}
				if (func_334())
				{
					if (fVar8 == 0f || Local_57[iVar0]->f_48 > fVar8)
					{
						iVar5 = iVar0;
						fVar8 = Local_57[iVar0]->f_48;
					}
				}
				if (iVar7 == 0 || Local_57[iVar0]->f_27 > iVar7)
				{
					iVar6 = iVar0;
					iVar7 = Local_57[iVar0]->f_27;
				}
			}
		}
		iVar0++;
	}
	if (iVar3 == iVar6150)
	{
		if (Local_57[iVar6150]->f_24 != 1)
		{
			func_271(-677165568, 1);
		}
	}
	if (iVar4 == iVar6150)
	{
		if (Local_57[iVar6150]->f_24 == 1)
		{
			func_271(223181639, 1);
		}
	}
	if (func_334())
	{
		if (iVar5 == iVar6150)
		{
			func_1091(2076532901, Local_57[iVar6150]->f_48);
		}
	}
	if (iVar6 == iVar6150)
	{
		func_271(966194332, Local_57[iVar6150]->f_27);
	}
	set_bit(&(Local_57[iVar6150]->f_13), 24);
}

bool func_645()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_233(iVar0, 255))
		{
			if (!func_235(iVar0))
			{
				if (!is_bit_set(Local_57[iVar0]->f_13, 24))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_646()
{
	if (Local_57[iVar6150]->f_30 == 0)
	{
		if (func_1092(&(Local_57[iVar6150]->f_30), 0))
		{
			return true;
		}
	}
	return Local_57[iVar6150]->f_30 != 0;
}

bool func_647()
{
	if (Local_5197.f_24 > 4)
	{
		return true;
	}
	return false;
}

void func_648(int iParam0)
{
	if (is_bit_set(iLocal_13, iParam0))
	{
	}
	else
	{
		set_bit(&iLocal_13, iParam0);
		_hide_hud_component(func_755(iParam0));
	}
}

void func_649()
{
	if (func_1070() && Local_57[iVar6150]->f_1 < 86400000)
	{
	}
	if ((func_370() && Local_57[iVar6150]->f_4 > 0) && Local_57[iVar6150]->f_2 < 86400000)
	{
	}
}

bool func_650()
{
	if (Global_1901947->f_827.f_24 != 0)
	{
		if (iVar12115 < Global_1901947->f_827.f_24)
		{
			return false;
		}
	}
	if (Global_1901947->f_827.f_23)
	{
		if (func_267())
		{
			return false;
		}
	}
	return true;
}

void func_651()
{
	if (!func_8())
	{
		Var0.f_2 = -1;
		Var0.f_3 = -1;
		Var0.f_4 = -1;
		Var0.f_5 = -1;
		Var0.f_6 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var14.f_2 = -1;
		Var14.f_3 = -1;
		Var14.f_4 = -1;
		Var14.f_5 = -1;
		Var14.f_6 = -1;
		Var14.f_7 = -1;
		Var14.f_8 = -1;
		Var14.f_9 = -1;
		Var14.f_10 = -1;
		Var14.f_11 = -1;
		Var28.f_2 = -1;
		Var28.f_3 = -1;
		Var28.f_4 = -1;
		Var28.f_5 = -1;
		Var28.f_6 = -1;
		Var28.f_7 = -1;
		Var28.f_8 = -1;
		Var28.f_9 = -1;
		Var28.f_10 = -1;
		Var28.f_11 = -1;
		iVar42 = 0;
		if (func_238())
		{
			iVar42 = 1;
		}
		iVar43 = func_1093();
		func_1094(&Var0, 0, iVar42, iVar43);
		func_1095(&Var0, &(Global_1048684->f_403), &(Global_1048684->f_399), 0);
		func_1094(&Var14, 1, iVar42, iVar43);
		func_1095(&Var14, &(Global_1048684->f_419), &(Global_1048684->f_415), 0);
		Var44.f_1 = 11;
		func_1096(&Var44, Var0.f_13);
		func_1098(func_1097(Var0.f_2), &(Global_1048684->f_431), &Var44, 0, 255, 0, 0);
		if (func_479() > 1)
		{
			if (func_198())
			{
				func_1099(&Var28, iVar43);
				func_1095(&Var28, &(Global_1048684->f_452), &(Global_1048684->f_448), 0);
			}
			else
			{
				Global_1049275 = (&Global_1049275 + Var0.f_2);
			}
		}
	}
}

bool func_652(int iParam0)
{
	return func_349(1, iParam0);
}

void func_653(bool bParam0)
{
	if (!&Global_2883584)
	{
		if (bParam0)
		{
			func_55(4);
		}
		else
		{
			func_3(4);
		}
	}
}

bool func_654()
{
	if (func_1100())
	{
		func_1101(1887583641);
		Global_1048684->f_377 = func_1102(1, 0);
		Global_1048684->f_21 = _get_prev_weather_type_hash_name();
		Global_1048684->f_471 = { func_1103(-1, Local_57[iVar6157]->f_9) };
		if (func_93(iVar6150))
		{
			Global_1048684->f_1 = { Local_6163[iVar6157]->f_10 };
			Global_1048684->f_19 = iVar6153;
			Global_1048684->f_18 = uVar6155;
			Global_1048684->f_469 = func_449(iVar6153);
			if (iVar6151 == -1 || !func_233(iVar6157, 255))
			{
				func_548(17);
			}
		}
		else
		{
			Global_1048684->f_1 = { Local_6163[iVar6150]->f_10 };
			Global_1048684->f_18 = uVar6147;
			Global_1048684->f_19 = iVar6144;
			Global_1048684->f_469 = func_449(iVar6144);
		}
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_233(iVar0, 255))
			{
				if (Local_2971[0]->f_14 == Local_6163[iVar0]->f_4)
				{
					iVar1 = iVar0;
					Global_1048684->f_9 = { Local_6163[iVar0]->f_10 };
					Global_1048684->f_17 = 1105014447;
				}
				else
				{
					iVar0++;
				}
				if (iVar1 == iVar6150)
				{
					func_548(2);
				}
				else
				{
					func_548(3);
				}
				if (!func_198())
				{
					Global_1048684->f_398 = 1;
					func_1104(0);
				}
				else
				{
					func_1104(1);
				}
				return true;
				return false;
			}
		}
	}
}

void func_655(var uParam0, bool bParam1)
{
	_close_app_by_hash(595204529);
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_142))
	{
		_databinding_remove_data_entry(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_143[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_413(&(uParam0->f_162));
	}
	func_1105(0);
}

void func_656(bool bParam0)
{
	if (bParam0)
	{
		func_55(16);
	}
	else
	{
		func_3(16);
	}
}

bool func_657()
{
	if (func_138() == 1)
	{
		return true;
	}
	return false;
}

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_224(&iVar1, &iVar0, iParam0, iParam1);
	if (iParam2 > 0)
	{
		func_510(func_490(-1892463704, 1887583641), iParam2);
		func_510(func_490(-1892463704, iVar0), iParam2);
		func_510(func_490(-1892463704, iVar1), iParam2);
	}
	if (iParam3 > 0)
	{
		func_510(func_490(1374282888, 1887583641), iParam3);
		func_510(func_490(1374282888, iVar0), iParam3);
		func_510(func_490(1374282888, iVar1), iParam3);
	}
	if (iParam4 > 0)
	{
		func_510(func_490(1511238709, 1887583641), iParam4);
		func_510(func_490(1511238709, iVar0), iParam4);
		func_510(func_490(1511238709, iVar1), iParam4);
	}
}

char* func_659(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

void func_660(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, struct<37> Param8, int iParam45, var uParam46, int iParam47, var uParam48, int iParam49, bool bParam50)
{
	func_1106(Global_1049313);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*Global_1049313)[iVar0] = { *(*uParam0)[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*Global_1050966)[iVar0] = iParam45[iVar0];
		iVar0++;
	}
	if (!bParam50)
	{
		if (iParam49 > 0)
		{
			func_1107(&(Global_1050050->f_101), uParam0, uParam1, &uVar1, 1);
		}
		else
		{
			func_1108(Global_1050050);
			func_1107(&(Global_1050050->f_101), uParam0, uParam1, &uVar1, 0);
			func_1109(0);
		}
	}
	Global_1051114 = uParam6;
	Global_1051115 = uParam7;
	*Global_1050888 = { Param8 };
	*Global_1050925 = { *uParam3 };
	*Global_1050927 = { *uParam4 };
	StringCopy(Global_1050958, sParam2, 64);
	func_1110(uParam5, uParam46, iParam47, uParam48);
}

bool func_661()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (func_233(iVar0, iVar1))
		{
			if (!is_bit_set(Local_57[iVar0]->f_13, 13))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_662()
{
	iVar0 = func_479();
	Var1 = { func_1111() };
	if (iVar0 == Var1 + 1)
	{
		set_bit(&(Local_5197.f_26), 9);
	}
	if (!is_bit_set(Local_5197.f_26, 9))
	{
		if (!func_1112())
		{
			set_bit(&(Local_5197.f_26), 9);
		}
	}
}

void func_663()
{
	if (!is_bit_set(Local_57[iVar6150]->f_13, 13))
	{
		func_1114(func_1113((func_138() - 1)));
		set_bit(&(Local_57[iVar6150]->f_13), 13);
	}
}

void func_664()
{
	if (!func_198())
	{
		func_1116(func_1115());
	}
}

bool func_665(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_465(32, iParam0);
}

int func_666(bool bParam0)
{
	Var0 = { func_937() };
	if (!func_13(Var0))
	{
		return 1;
	}
	if (Var0 == 2)
	{
		if (func_1117(func_941(Var0)))
		{
			func_1118(func_941(Var0));
			return 1;
		}
		return 0;
	}
	if (Var0 != 7)
	{
		return 1;
	}
	if (func_938(Var0))
	{
		return 1;
	}
	if (!func_939(Var0))
	{
		return 1;
	}
	if (bParam0)
	{
		func_1119(Var0, 0, 0, 0, 0);
	}
	else
	{
		func_1119(Var0, 0, 1, 0, 0);
	}
	return 1;
}

void func_667()
{
	Var0 = { func_937() };
	if (!func_13(Var0))
	{
		return;
	}
	if (Var0 == 2)
	{
		func_1120(func_941(Var0));
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	if (func_938(Var0))
	{
		return;
	}
	if (!func_939(Var0))
	{
		return;
	}
	func_1119(Var0, 0, 1, 0, 0);
}

void func_668(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_669(int iParam0)
{
	Global_1051212 = iParam0;
}

bool func_670(struct<2> Param0, var uParam2)
{
	if (!func_13(Param0))
	{
		return false;
	}
	func_1121(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_671(int iParam0)
{
	return func_1122(func_672(), iParam0);
}

var func_672()
{
	return Global_265377->f_124517.f_142.f_1;
}

int func_673()
{
	iVar0 = 344970;
	return iVar0;
}

int func_674(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 == 255)
	{
		return -1;
	}
	if (network_is_player_active(&(Global_1296859->f_154[iParam0])))
	{
		return get_player_team(&(Global_1296859->f_154[iParam0]));
	}
	return -1;
}

bool func_675(int iParam0)
{
	if (func_745())
	{
		if (iParam0 != -1)
		{
			iVar0 = iParam0;
		}
		else
		{
			iVar0 = Local_57[iVar6149]->f_9;
		}
		return is_bit_set(Global_2097152->f_6317[iVar0]->f_4, 1);
	}
	return func_203(6);
}

int func_676(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(iVar0);
			iVar2 = network_get_player_index(iVar1);
			iVar3 = get_unique_int_for_player(iVar2);
			if (iParam1 == func_674(iVar2) && iVar3 != iParam0)
			{
				if (&Local_5197.f_853[iVar3] > -1)
				{
					return &(Local_5197.f_853[iVar3]);
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_677()
{
	return Local_5197.f_25;
}

int func_678()
{
	uVar0 = Global_3145858->f_452;
	return uVar0;
}

int func_679()
{
	uVar0 = Global_3145858->f_36479;
	return uVar0;
}

int func_680()
{
	return 0;
}

void func_681(int iParam0)
{
	if (Local_5197.f_25 != iParam0)
	{
		Local_5197.f_25 = iParam0;
	}
}

bool func_682()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_480(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_1123(Global_3145858->f_37246[iVar0]->f_1, 1, 1);
			func_1124(Global_3145858->f_37246[iVar0]->f_1);
			func_531(iVar0, Local_5197.f_886[iVar0]->f_1, &(Local_5197.f_886[iVar0]), 0);
		}
		iVar0++;
	}
	return true;
}

bool func_683()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_36479)
	{
		if ((Global_3145858->f_36480[iVar0]->f_1 == 0 || func_354(func_746(iVar0))) || !func_747(iVar0))
		{
		}
		else if (network_does_network_id_exist(&(Local_5197.f_238.f_33[iVar0])))
		{
		}
		else if (!func_748(iVar0))
		{
			iVar1 = 0;
		}
		else if (bVar2)
		{
			iVar1 = 0;
		}
		else if (!func_1028(iVar0, 1))
		{
			iVar1 = 0;
		}
		else
		{
			bVar2 = true;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_684()
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if ((Global_3145858->f_453[iVar0]->f_43 == 0 || !func_749(iVar0)) || !is_model_valid(Global_3145858->f_453[iVar0]->f_43))
		{
		}
		else if (network_does_network_id_exist(&(Local_5197.f_238[iVar0])))
		{
			if (!is_bit_set(Local_5197.f_540, iVar0))
			{
			}
			else
			{
				iVar1 = net_to_ped(&(Local_5197.f_238[iVar0]));
				if (!_0xa0bc8faed8cfeb3c(iVar1))
				{
					iVar2 = 0;
				}
				else
				{
					func_1021(iVar1, &(Global_3145858->f_453[iVar0]->f_165), Global_3145858->f_453[iVar0]->f_45, 0);
					clear_bit(&(Local_5197.f_540), iVar0);
					Jump @271; //curOff = 192
					if (!func_750(Global_3145858->f_453[iVar0]->f_43))
					{
						iVar2 = 0;
					}
					else if (bVar3)
					{
						iVar2 = 0;
					}
					else if (!func_1020(iVar0, 1))
					{
						iVar2 = 0;
					}
					else
					{
						bVar3 = true;
						if (is_bit_set(Local_5197.f_540, iVar0))
						{
							iVar2 = 0;
						}
					}
				}
			}
			iVar0++;
			return iVar2;
		}
	}
}

void func_685(var uParam0, var uParam1)
{
}

bool func_686(var uParam0, int iParam1, int iParam2)
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(((!func_472(iVar0) || Global_3145858->f_18727[iVar0]->f_8 == 0) || network_does_network_id_exist(uParam0[iVar0])));
		Stack.Push(iVar0);
		Call_Loc(iParam1);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 207132841;
			}
			if (!func_750(iVar1))
			{
				iVar2 = 0;
			}
			else if (bVar3)
			{
				iVar2 = 0;
			}
			else if (!func_1125((*uParam0)[iVar0], iVar1, Global_3145858->f_18727[iVar0]->f_1, 1, 0))
			{
				iVar2 = 0;
			}
			else
			{
				iVar5 = net_to_obj(uParam0[iVar0]);
				bVar4 = func_1126(Global_3145858->f_18727[iVar0]);
				func_1127(iVar5, iVar0, iParam2, 1, bVar4);
				bVar3 = true;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_687()
{
	iVar0 = 1269650476;
	if (func_238())
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			iVar2 = &uLocal_7312[iVar1];
			set_relationship_between_groups(6, iVar0, iVar2);
			iVar1++;
		}
	}
	else
	{
		iVar3 = &uLocal_7312[0];
		set_relationship_between_groups(6, iVar0, iVar3);
	}
	iVar5 = 1;
	iVar4 = 0;
	while (iVar4 < Global_2097152->f_5635)
	{
		if (Global_2097152->f_5636[iVar4]->f_6 == 0 || !func_751(iVar4))
		{
		}
		else if (network_does_network_id_exist(&(Local_5197.f_238.f_187[iVar4])))
		{
		}
		else
		{
			iVar6 = Global_2097152->f_5636[iVar4]->f_6;
			if (!is_model_valid(iVar6))
			{
				iVar6 = 1599685341;
			}
			if (!func_750(iVar6))
			{
				iVar5 = 0;
			}
			else
			{
				vVar7 = { Global_2097152->f_5636[iVar4]->f_1 };
				iVar10 = Global_2097152->f_5636[iVar4]->f_4;
				if (!func_1128(Local_5197.f_238.f_187[iVar4], iVar6, vVar7, iVar10, 1, 0, 1, 1, 1))
				{
					iVar5 = 0;
				}
				else
				{
					func_1129(net_to_ped(&(Local_5197.f_238.f_187[iVar4])));
					func_1130(net_to_ped(&(Local_5197.f_238.f_187[iVar4])), iVar4);
				}
			}
		}
		iVar4++;
	}
	return iVar5;
}

bool func_688()
{
	if (func_1131())
	{
		return true;
	}
	if (func_1132())
	{
		return true;
	}
	if (func_501(0))
	{
		return true;
	}
	return false;
}

bool func_689(int iParam0)
{
	return is_bit_set(Local_57[iParam0]->f_13, 4);
}

int func_690(int iParam0)
{
	if (is_bit_set(Local_57[iParam0]->f_13, 26))
	{
		return 1;
	}
	return 0;
}

float func_691(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return 1.5E+08f;
	}
	fVar0 = vdist2(get_entity_coords(iParam2, true, false), func_871(Local_57[iParam0]->f_3, Local_57[iParam0]->f_6, 1));
	return fVar0;
}

int func_692(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 1639323328:
			return -1;
		case 580738266:
			return -1;
		case -952673229:
			return -1;
		case -1640317778:
			return -1;
		case 2105734739:
			return -1;
		case -515335746:
			return -1;
		case 1691389412:
			return -1;
		case 1064633829:
			return -1;
		case 104896572:
			return -1;
		case 1294910046:
			return -1;
		case -1128715836:
			return -1;
		case -1726957461:
			return -1;
		case -645794988:
			return -1;
		case -628568057:
			return iParam2;
		case 232749932:
			return iParam3;
		case -1458795323:
			return iParam4;
		default:
			break;
	}
	return -1;
}

void func_693(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13, int iParam14, struct<8> Param15, int iParam23)
{
	func_1133(uParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, bParam12, iParam14, Param15, uParam13, iParam23);
}

void func_694(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, struct<8> Param7, var uParam15, int iParam16)
{
	func_1134(uParam0, uParam1, uParam2, -1, -1, -1, -1, -1, iParam3, iParam4, iParam5, bParam6, iParam16, Param7, uParam15, 0);
}

void func_695(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (&Global_1051113)
	{
		func_1135(uParam0, uParam1, uParam2, bParam3);
		func_699(0);
	}
}

bool func_696()
{
	return is_bit_set(Local_5197.f_26, 11);
}

bool func_697()
{
	return is_bit_set(Local_5197.f_26, 17);
}

bool func_698()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_233(iVar0, 255))
		{
			if (!func_235(iVar0))
			{
				if (Local_57[iVar0]->f_30 == 0)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_699(int iParam0)
{
	Global_1051113 = iParam0;
}

bool func_700()
{
	if (!bVar6143)
	{
		return false;
	}
	if (!func_698())
	{
		return false;
	}
	if (func_84(14))
	{
		set_bit(&(Local_5197.f_26), 20);
		return false;
	}
	return true;
}

float func_701(int iParam0)
{
	bVar0 = false;
	fVar1 = 0f;
	if (func_264(iParam0))
	{
		fVar1 = (&Local_57[iParam0]->f_37[1] - &Local_57[iParam0]->f_37[0]);
		if (!func_238())
		{
			if (Local_2971[0]->f_14 == Local_6163[iParam0]->f_4)
			{
				bVar0 = true;
			}
		}
	}
	return func_1136(Local_57[iParam0]->f_28, 0, to_float((Local_57[iParam0]->f_31[0] - Local_57[iParam0]->f_31[1]) // PointerArith), to_float((Local_57[iParam0]->f_34[0] - Local_57[iParam0]->f_34[1]) // PointerArith), 0, 0, 0, 0, 0, bVar0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, fVar1, 0, 0, 0, 0, 0, Local_57[iParam0]->f_26, ((86400000 - Local_57[iParam0]->f_2) / 86400000), (Local_5197.f_45 - func_449(Local_6163[iParam0]->f_4)), Local_57[iParam0]->f_1, to_float(Local_57[iParam0]->f_27), 0, 0);
}

bool func_702(float fParam0, int iParam1, var uParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = get_random_int_in_range(1000, 100000);
		bVar3 = (iVar2 % 2) == false;
		bVar4 = false;
		if (bParam5)
		{
			if (!func_1137(Local_57[iVar0]->f_9))
			{
			}
			else if (fParam0[iVar0] > -1f)
			{
				if (bParam6 && fParam0[iVar0] < fParam4)
				{
					bVar4 = true;
				}
				else if (!bParam6 && fParam0[iVar0] > fParam4)
				{
					bVar4 = true;
				}
				else if (fParam0[iVar0] == fParam4)
				{
					if (iParam1[iParam3] != -1)
					{
						if (func_1137(Local_57[iParam1[iParam3]]->f_9) && !bParam5)
						{
							bVar4 = true;
						}
						else if (bVar3)
						{
							bVar4 = true;
						}
					}
					else
					{
						bVar4 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (iParam1[iVar1] == iVar0)
					{
						bVar4 = false;
					}
					iVar1++;
				}
				if (bVar4)
				{
					func_1138(iVar0, iParam3, fParam0[iVar0], uParam2);
					(*iParam1)[iParam3] = iVar0;
					fParam4 = uParam2[iParam3];
				}
			}
			iVar0++;
			if (iParam3 == 0 && iParam1[iParam3] > -1)
			{
				Global_1050050->f_100 = Local_57[iParam1[iParam3]]->f_50;
			}
			return iParam1[iParam3] > -1;
		}
	}
}

void func_703(var uParam0)
{
	uParam0->f_11 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
	uParam0->f_10 = _databinding_add_data_container_from_path("", "helperTextfields");
	uParam0->f_370[0]->f_1[0] = _databinding_add_data_string(uParam0->f_10, "rawLabel0", "");
	uParam0->f_370[0]->f_1[1] = _databinding_add_data_string(uParam0->f_10, "rawValue0", "");
	uParam0->f_370[1]->f_1[0] = _databinding_add_data_string(uParam0->f_10, "rawLabel1", "");
	uParam0->f_370[1]->f_1[1] = _databinding_add_data_string(uParam0->f_10, "rawValue1", "");
	uParam0->f_881 = _databinding_add_data_container_from_path("", "MPCountdown");
	uParam0->f_12[33] = _databinding_add_data_bool(uParam0->f_881, "showTimer", 0);
	uParam0->f_12[34] = _databinding_add_data_string(uParam0->f_881, "Timer", "");
	func_1139(uParam0);
	func_1140(uParam0, 551037070, 859817522);
	uVar0 = _databinding_add_data_container(uParam0->f_11, "fistingMeter");
	uParam0->f_12[12] = _databinding_add_data_int(uVar0, "setLeftMeter", 0);
	uParam0->f_12[14] = _databinding_add_data_int(uVar0, "setRightMeter", 0);
	uParam0->f_12[13] = _databinding_add_data_hash(uVar0, "setLeftMeterColor", 551037070);
	uParam0->f_12[15] = _databinding_add_data_hash(uVar0, "setRightMeterColor", 859817522);
	uParam0->f_12[16] = _databinding_add_data_bool(uVar0, "visible", 0);
	uVar1 = _databinding_add_data_container(uParam0->f_11, "wrongWay");
	uParam0->f_12[11] = _databinding_add_data_bool(uVar1, "isVisible", 0);
	func_1141(uParam0, 17, "meter0", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 18, "meter1", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 19, "meter2", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 20, "meter3", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 21, "meter4", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 22, "meter5", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 23, "meter6", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 24, "meter7", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 25, "meter8", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 26, "meter9", 0f, "", "", "", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 27, "dynamicIcon2", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 28, "dynamicIcon1", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 29, "dynamicIcon0", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 30, "dynamicIcon3", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 31, "dynamicIcon4", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
	func_1141(uParam0, 32, "dynamicIcon5", 0f, "", "generic_textures", "TEMP_PEDSHOT", 109029619, 109029619, 0, 0, 0, 0, 109029619);
}

void func_704(var uParam0)
{
	uParam0->f_6 = _databinding_add_data_container_from_path("", "MpHudDataStore");
	uParam0->f_7 = _databinding_add_data_container(uParam0->f_6, "bottomRightStack");
	uParam0->f_8 = _databinding_add_ui_item_list(uParam0->f_7, "itemCreationList");
	uParam0->f_9 = _databinding_add_data_bool(uParam0->f_7, "isVisible", 0);
}

void func_705(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_706()
{
	Global_1071686->f_15 = 1;
	Global_1071686->f_14 = -1f;
}

void func_707()
{
	Global_1071686->f_28352 = 1;
}

void func_708(var uParam0, var uParam1)
{
	if (uParam0->f_2 == 2 && uParam0->f_897 != *uParam1)
	{
		func_1142(uParam0, 3);
	}
	uParam0->f_897 = { *uParam1 };
	func_1143(&(uParam0->f_969));
	if (*uParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_897.f_1)
	{
		if (&uParam0->f_897.f_1[iVar0] == 0)
		{
		}
		else
		{
			func_807(&(uParam0->f_969), func_1144(&(uParam0->f_897.f_1[iVar0]), 1));
		}
		iVar0++;
	}
}

void func_709()
{
	if (is_bit_set(iVar13484, 13) || func_1145())
	{
		return;
	}
	func_1146();
	set_bit(&uLocal_13486, 13);
}

void func_710(var uParam0, bool bParam1)
{
	if (bParam1 || !func_712(uParam0))
	{
		func_1147(uParam0);
	}
}

bool func_711(int iParam0)
{
	if (func_1148(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_712(var uParam0)
{
	return func_1149(*uParam0, 1);
}

float func_713(var uParam0)
{
	if (!func_712(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1150(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1151() - uParam0->f_1);
}

void func_714(int iParam0)
{
	func_927(1);
}

bool func_715()
{
	if (!func_17())
	{
		return false;
	}
	if ((&Local_57[iVar6150] == 3 || &Local_57[iVar6150] == 4) && is_bit_set(Local_57[iVar6150]->f_13, 17))
	{
		return false;
	}
	if (!func_268(&(Local_57[iVar6150]->f_18)) && &Local_57[iVar6150] < 5)
	{
		return true;
	}
	if (iVar7269 == 1)
	{
		return true;
	}
	if (iVar7305 == 5 && is_bit_set(iVar13506, 13))
	{
		return true;
	}
	if (iVar7305 >= 6)
	{
		return true;
	}
	if (func_231(255) && (func_232() == iVar6144 || iVar6151 == -1))
	{
		return true;
	}
	if (!is_bit_set(Local_5197.f_26, 4))
	{
		return true;
	}
	if (func_322())
	{
		return true;
	}
	return false;
}

void func_716()
{
	bVar0 = (func_231(255) && func_232() == iVar6144);
	if (Local_12276.f_968 != -1)
	{
		if (bVar0)
		{
			if (func_1152(1))
			{
				func_411(1, 0);
			}
			if (!func_1152(3))
			{
				func_648(3);
			}
		}
		else if (func_1152(3))
		{
			func_411(3, 0);
		}
		Local_12276.f_968++;
		return;
	}
	Local_12276.f_968 = 0;
	if ((iVar7305 == 5 && is_bit_set(iVar13506, 13)) && func_268(&uLocal_13492))
	{
		return;
	}
	if ((func_652(255) || bVar0) || !bVar6154)
	{
		func_648(3);
	}
	else
	{
		func_648(1);
	}
}

void func_717()
{
	if (!is_ped_injured(_get_last_mount(iVar6147)))
	{
		if (_0x22f2a386d43048a9(_get_last_mount(iVar6147)) <= 0.5f)
		{
			if (!is_bit_set(iVar13484, 9))
			{
				if (!func_1145())
				{
					uLocal_12273[1] = func_518("RC_STAMINA_0", 10000, 0, 0, 0, 1);
					func_280(&uLocal_12271, 0, 0);
					set_bit(&uLocal_13486, 9);
				}
			}
			if (!bVar13657)
			{
				if (!is_bit_set(iVar13484, 10))
				{
					if (func_268(&uLocal_12271))
					{
						if (func_269(&uLocal_12271, 0, 0) >= 30000)
						{
							if (!func_1145())
							{
								uLocal_12273[1] = func_518("RC_STAMINA_0", 10000, 0, 0, 0, 1);
								func_272(&uLocal_12271, 0, 0);
								set_bit(&uLocal_13486, 10);
							}
						}
					}
				}
			}
		}
	}
}

void func_718(var uParam0)
{
	if ((func_1153(&Local_12276, 63218849) && func_370()) && func_268(&(Local_57[iVar6156]->f_20)))
	{
		iVar1 = 12;
		if (Local_5197.f_44 == 0)
		{
			iVar1 = 0;
		}
		func_1155(uParam0, 63218849, Local_57[iVar6156]->f_4 + 1, -1, "RC_LAPNUM", iVar1, uVar0, to_float(func_1154(Local_5197.f_44 == 0, 0, Local_5197.f_44)), 109029619, 109029619);
	}
	if (func_1153(&Local_12276, 1130424855))
	{
		if ((func_238() && Local_57[iVar6156]->f_9 != -1) && func_1156() != -1)
		{
			func_1155(uParam0, 1130424855, func_944((&Local_5197.f_104[Local_57[iVar6156]->f_9] - func_1156()), 0), -1, "RC_TEMLVS", 0, uVar0, 0, 109029619, 109029619);
		}
		else
		{
			iVar2 = func_1157();
			if (iVar2 != -1)
			{
				func_1155(uParam0, 1130424855, func_944((iVar2 - Local_57[iVar6156]->f_17), 0), -1, "RC_PLYLVS", 0, uVar0, 0, 109029619, 109029619);
			}
		}
	}
	if ((func_1153(&Local_12276, 2058416949) && Local_57[iVar6156]->f_24 > 0) && !func_238())
	{
		fVar3 = to_float((Local_5197.f_47 + Local_5197.f_65));
		if (func_231(255))
		{
			fVar3 = to_float(iVar7380);
		}
		iVar4 = Local_57[iVar6156]->f_24;
		func_1155(uParam0, 2058416949, iVar4, -1, "RC_POSIT", 72, uVar0, fVar3, func_496(), 109029619);
	}
	if (((func_1153(&Local_12276, -687714247) && func_238()) && Local_57[iVar6156]->f_9 != -1) && &Local_5197.f_543[Local_57[iVar6156]->f_9] != -1)
	{
		func_1155(uParam0, -687714247, &Local_5197.f_543[Local_57[iVar6156]->f_9] + 1, -1, "RC_TPOS", 8, uVar0, to_float(Local_5197.f_46), 109029619, 109029619);
	}
	sVar5 = "RC_CHECKP";
	if (func_1153(&Local_12276, 361976649))
	{
		iVar6 = Global_2097152->f_255;
		if (func_370())
		{
			sVar5 = "RC_LAPPRO";
			if (Global_2097152->f_6483 > -1 && Local_57[iVar6156]->f_4 >= Global_2097152->f_6483)
			{
				iVar6 = (Global_2097152->f_255 - Global_2097152->f_6482);
			}
		}
		iVar7 = Local_57[iVar6156]->f_3;
		if (func_1158())
		{
			iVar7 = (iVar7 - (iVar8430 - 1));
		}
		iVar7 = (iVar7 - 1);
		iVar6 = (iVar6 - 1);
		func_1155(uParam0, 361976649, iVar7, -1, sVar5, 8, uVar0, to_float(iVar6), 76603059, 109029619);
	}
	func_1159(uParam0);
	if (func_1153(&Local_12276, 764304959))
	{
		iVar8 = Global_2097152->f_255;
		iVar9 = func_719();
		iVar10 = func_497();
		if (iVar9 == iVar6156)
		{
			iVar9 = func_1160(2);
		}
		if ((iVar13974 != iVar9 && iVar9 != iVar6156) && iVar9 != -1)
		{
			iLocal_13977 = iVar9;
		}
		if (iVar9 == -1)
		{
			if (iVar13974 != -1)
			{
				iVar9 = iVar13974;
			}
			else
			{
				iVar9 = iVar6156;
			}
		}
		if (iVar7380 <= 1)
		{
			iVar10 = 1765299542;
		}
		if (func_370())
		{
			sVar5 = "RC_LAPPRO";
			if (Global_2097152->f_6483 > -1 && Local_57[iVar9]->f_4 >= Global_2097152->f_6483)
			{
				iVar8 = (Global_2097152->f_255 - Global_2097152->f_6482);
			}
		}
		iVar11 = Local_57[iVar9]->f_3;
		if (func_83())
		{
			iVar11 = (iVar11 - 1);
			iVar8 = (iVar8 - 1);
		}
		func_1155(uParam0, 764304959, iVar11, -1, sVar5, 8, uVar0, to_float(iVar8), iVar10, 109029619);
	}
}

int func_719()
{
	return func_1160(1);
}

void func_720(var uParam0, struct<37> Param1)
{
	if (uParam0->f_162.f_34 == Param1.f_34)
	{
		return;
	}
	uParam0->f_162 = { Param1 };
	set_bit(&(uParam0->f_158), 15);
	clear_bit(&(uParam0->f_158), 16);
}

void func_721(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = -1;
	if (!is_bit_set(uParam0->f_159, 1))
	{
		iVar2 = get_player_team(*iParam2);
		iVar3 = func_1161();
		bVar4 = func_1162();
		bVar5 = func_1163();
		bVar6 = is_bit_set(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940144->f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940144->f_111;
			bParam3 = true;
		}
		func_1164(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!is_bit_set(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!is_bit_set(uParam0->f_158, 0))
					{
						func_1165(uParam0);
						func_1166(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						set_bit(&(uParam0->f_158), 0);
					}
					else
					{
						func_1167(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					clear_bit(&(uParam0->f_158), 13);
					set_bit(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				set_bit(&(uParam0->f_158), 13);
			}
			enable_control_action(0, -1450761377, true);
			enable_control_action(0, -771458680, true);
			enable_control_action(1, -1450761377, true);
			enable_control_action(1, -771458680, true);
			enable_control_action(0, 1033498310, true);
			enable_control_action(0, -1074497799, true);
			enable_control_action(1, 1033498310, true);
			enable_control_action(1, -1074497799, true);
			clear_bit(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940144->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940144->f_111)
			{
				disable_control_action(0, -1450761377, false);
				disable_control_action(0, -771458680, false);
				disable_control_action(1, -1450761377, false);
				disable_control_action(1, -771458680, false);
				disable_control_action(0, 1033498310, false);
				disable_control_action(0, -1074497799, false);
				disable_control_action(1, 1033498310, false);
				disable_control_action(1, -1074497799, false);
			}
			if (bParam3)
			{
				func_1167(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940144->f_111)
			{
				func_1168(uParam0, uParam1);
				func_1169(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940144->f_111)
		{
			if ((is_bit_set(uParam0->f_158, 1) || is_bit_set(uParam0->f_158, 13)) || uParam0->f_199 < 2)
			{
				func_1170(uParam0, 1);
			}
			func_1171(uParam0);
		}
	}
}

void func_722(var uParam0, char* sParam1)
{
	if (!is_bit_set(uParam0->f_158, 7))
	{
		set_bit(&(uParam0->f_158), 7);
		_databinding_add_data_string(uParam0->f_1, "Heading", sParam1);
	}
}

void func_723(var uParam0)
{
	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_1172(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!is_bit_set(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = int_to_playerindex(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1173(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			set_bit(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1174(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_1174(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_724(var uParam0)
{
	func_1175(uParam0);
	func_1176(uParam0);
}

void func_725(var uParam0)
{
	Var0 = 15;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_7 = -1;
	Var0.f_1.f_15.f_1 = -1;
	Var0.f_1.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_228 = 4;
	Var0.f_233 = 4;
	Var0.f_233.f_1 = 10;
	Var0.f_233.f_1.f_1 = -1;
	Var0.f_233.f_1.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_2 = -1;
	Var0.f_233.f_1.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51 = 10;
	Var0.f_233.f_1.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51 = 10;
	Var0.f_233.f_1.f_51.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51 = 10;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438 = 10;
	Var0.f_438.f_1 = -1;
	Var0.f_438.f_1.f_1 = 26125758;
	Var0.f_438.f_1.f_2 = -1;
	Var0.f_438.f_1.f_3 = 26125758;
	Var0.f_438.f_1.f_5 = -1;
	Var0.f_438.f_1.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_489 = 2;
	Var0.f_489.f_1 = -1;
	Var0.f_489.f_1.f_1 = 26125758;
	Var0.f_489.f_1.f_2 = -1;
	Var0.f_489.f_1.f_3 = 26125758;
	Var0.f_489.f_1.f_5 = -1;
	Var0.f_489.f_1.f_5.f_1 = 26125758;
	Var0.f_489.f_1.f_5.f_2 = -1;
	Var0.f_489.f_1.f_5.f_3 = 26125758;
	uParam0->f_379 = { Var0 };
	uParam0->f_894 = 0;
}

void func_726(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_1177(iParam0, iParam1);
	}
	func_1178(4);
	func_1179();
	func_1180(1);
}

bool func_727(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_728()
{
	return Global_1102219->f_3672;
}

void func_729(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_730(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_731(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_732(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_733(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_734(var uParam0, int iParam1, var uParam2, int iParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(iParam3, &Var0);
		return true;
	}
	return false;
}

bool func_735(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_1181(vParam0)];
	iVar1 = func_733(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_734(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_736(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_348(255) == 4)
	{
		return;
	}
	if (func_354(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_177(0, 0, 0, 1);
	}
	func_351(0);
	func_351(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_355(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = iParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_356(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = iParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_357(Global_1102219->f_3849, 36);
	func_358(Global_1102219->f_3888, 36);
}

void func_737(int iParam0)
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

int func_738()
{
	return Global_1572887->f_13;
}

bool func_739()
{
	return Global_1051252->f_8;
}

void func_740()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

void func_741(int iParam0, int iParam1, vector3 vParam2)
{
	Local_5197.f_2 = iParam0;
	Local_5197.f_2.f_1 = -933924539;
	Local_5197.f_2.f_2 = Global_2097152->f_32;
	Local_5197.f_2.f_3 = iParam1;
	Local_5197.f_2.f_4 = 0;
	Local_5197.f_2.f_5 = { vParam2 };
	Local_5197.f_2.f_16 = func_1182();
	StringCopy(&(Local_5197.f_2.f_17), func_1183(Global_3145858->f_191), 24);
	Local_5197.f_2.f_20 = func_918();
	Local_5197.f_2.f_8 = func_917(&(Local_5197.f_2.f_9));
}

void func_742(var uParam0, int iParam1, bool bParam2)
{
	(*uParam0)[iParam1]->f_6 = 999f;
	(*uParam0)[iParam1]->f_7 = 8.64E+07f;
	if (!bParam2)
	{
		(*uParam0)[iParam1]->f_8 = 8.64E+07f;
	}
}

void func_743(var uParam0, bool bParam1)
{
	if (Global_3145858->f_240 != 0)
	{
		if (!bParam1)
		{
			func_1184(uParam0);
		}
		else
		{
			*uParam0 = 2;
			uParam0->f_1 = 0;
			uParam0->f_3 = -1;
		}
		return;
	}
	if (Global_3145858->f_236 == 2)
	{
		if (!bParam1)
		{
			uParam0->f_1 = func_1185();
			*uParam0 = 3;
		}
		else
		{
			*uParam0 = 2;
			uParam0->f_1 = 0;
		}
	}
	else
	{
		uParam0->f_1 = Global_3145858->f_237;
		*uParam0 = 3;
	}
	uParam0->f_3 = Global_3145858->f_238;
	uParam0->f_4 = Global_3145858->f_239;
	uParam0->f_5 = 0;
}

void func_744(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4)
{
	if (Local_5197.f_886[iParam0]->f_1 != iParam1)
	{
		Local_5197.f_886[iParam0]->f_1 = iParam1;
	}
	if (&Local_5197.f_886[iParam0] != fParam2)
	{
		Local_5197.f_886[iParam0] = fParam2;
	}
	if (bParam3)
	{
		func_531(iParam0, iParam1, fParam2, iParam4);
	}
}

bool func_745()
{
	return Global_2097152->f_6316 > 0;
}

Vector3 func_746(int iParam0)
{
	return Global_3145858->f_36480[iParam0]->f_4;
}

bool func_747(int iParam0)
{
	if (func_1027(iParam0))
	{
		return false;
	}
	if (is_bit_set(Local_5197.f_526.f_1, iParam0))
	{
		return false;
	}
	if (func_354(func_746(iParam0)))
	{
		return false;
	}
	return true;
}

bool func_748(int iParam0)
{
	iVar0 = 1;
	iVar1 = Global_3145858->f_36480[iParam0]->f_1;
	iVar2 = _0x635423d55ca84fc8(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = _0x8df5f6a19f99f0d5(iVar1, iVar3);
		if (!func_750(iVar4))
		{
			iVar0 = 0;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_749(int iParam0)
{
	if (func_1019(iParam0))
	{
		return false;
	}
	if (is_bit_set(Local_5197.f_526, iParam0))
	{
		return false;
	}
	return true;
}

bool func_750(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_751(int iParam0)
{
	return true;
}

bool func_752(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_753(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_754(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { absf(vVar4.x), absf(vVar4.y), absf(vVar4.z) };
	iVar0 = _create_volume_box(vVar1, vParam6, vVar4);
	return iVar0;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

void func_756(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (_databinding_is_data_id_valid(&(uParam0->f_370[iVar0]->f_1[iVar1])))
			{
				_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[iVar1]), "");
			}
			iVar1++;
		}
		iVar0++;
	}
	func_757(uParam0);
}

void func_757(var uParam0)
{
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
	}
}

void func_758(var uParam0)
{
	if (uParam0->f_895 != -1)
	{
		_0x3210bcb36af7621b(uParam0->f_895);
		uParam0->f_895 = -1;
		_0x9428447ded71fc7e("out_of_bounds_scenes");
	}
	_databinding_write_data_bool(&(uParam0->f_12[33]), false);
}

void func_759(int iParam0)
{
	if (func_353(&Global_1903131, iParam0))
	{
		func_764(Global_1903131, iParam0);
	}
}

int func_760(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	if (is_bit_set(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_761(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1186(iParam0);
	}
	else
	{
		func_1187(iParam0);
	}
}

void func_762(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1188(sParam0);
	}
	else
	{
		func_1189(sParam0);
	}
}

void func_763(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1190(iParam0);
	}
	else
	{
		func_1191(iParam0);
	}
}

void func_764(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_765(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (_does_volume_exist(&(uParam0->f_10[iVar0])))
		{
			_delete_volume(&(uParam0->f_10[iVar0]));
		}
		iVar0++;
	}
}

void func_766(int iParam0)
{
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	*iParam0 = { Var0 };
}

void func_767(bool bParam0)
{
	if (bParam0)
	{
		if (func_1192(3))
		{
			func_1193(3);
		}
	}
	else if (!func_1192(3))
	{
		func_1194(3);
	}
}

void func_768(bool bParam0)
{
	iVar0 = player_id();
	if (bParam0)
	{
		if (func_1192(2))
		{
			func_1193(2);
		}
		if (_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1192(2))
		{
			func_1194(2);
		}
		if (!_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 1);
		}
	}
	_0xa63fcad3a6fec6d2(iVar0, bParam0);
	_0x7146cf430965927c(27, bParam0);
}

char* func_769()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

void func_770(char* sParam0, int iParam1)
{
	if (decor_exist_on(player_ped_id(), sParam0))
	{
		iVar0 = decor_get_int(player_ped_id(), sParam0);
		if (is_bit_set(iVar0, iParam1))
		{
			clear_bit(&iVar0, iParam1);
			decor_set_int(player_ped_id(), sParam0, iVar0);
		}
	}
}

void func_771(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = (iParam1 / iParam3);
	iVar1 = (iParam1 % iParam3);
	iVar2 = (shift_left(1, iParam4) - 1);
	iVar3 = 0;
	iVar4 = 2147483647;
	iVar5 = (iParam4 * iVar1);
	iVar3 = shift_left(iParam2, iVar5);
	iVar4 = (iVar4 - shift_left(iVar2, iVar5));
	(*uParam0)[iVar0] = (uParam0[iVar0] && iVar4);
	(*uParam0)[iVar0] = (uParam0[iVar0] || iVar3);
}

void func_772(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

int func_773(int iParam0)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_774(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_885(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_775(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_776(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1195(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_885(bParam1), iParam0, iParam3);
}

int func_777(int iParam0)
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

void func_778(bool bParam0)
{
	if (bParam0)
	{
		func_1196();
		_0x9b39b0555cc692b5();
		return;
	}
	func_1196();
	switch (Global_1572887->f_16)
	{
		case 0:
			_0x9b39b0555cc692b5();
			break;
		case 1:
			_0x9b39b0555cc692b5();
			_0xe3ab5eefcb6671a2(1);
			break;
		case 2:
			_0x9b39b0555cc692b5();
			_0xe3ab5eefcb6671a2(2);
			break;
	}
}

void func_779(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_780(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_1197(iParam0))
		{
			func_1198(iParam0);
		}
	}
}

void func_781(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_782(var uParam0, int iParam1)
{
	func_460(uParam0, iParam1);
}

bool func_783(var uParam0, int iParam1)
{
	return func_459(*uParam0, iParam1);
}

int func_784(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_785(var uParam0, int iParam1)
{
	if (func_783(uParam0, iParam1))
	{
		return;
	}
	func_543(uParam0, iParam1);
}

int func_786(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_939(func_1199(0)) && func_1200(func_1199(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_1201(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_1202(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_459(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_1203(iParam0, 1);
	if (!bVar0)
	{
		if (func_1204(iParam0, bParam1))
		{
			return func_1202(iParam0);
		}
		else if (func_1205(iParam0, bParam1))
		{
			if (func_1206(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_1201(iParam0);
	}
	else if (func_1204(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_1208(func_1207(func_1199(0)), 1) == 395262693)
		{
			return func_1202(iParam0);
		}
		else
		{
			return func_1202(iParam0);
		}
	}
	else if (func_1205(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

void func_787(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 22, uParam1);
}

void func_788(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_789(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_790(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_791(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	else if (uParam0->f_10)
	{
		return true;
	}
	else if (uParam0->f_9)
	{
		return true;
	}
	else if (uParam0->f_4)
	{
		return true;
	}
	else if (uParam0->f_5)
	{
		return true;
	}
	else if (uParam0->f_3)
	{
		return true;
	}
	else if (uParam0->f_8)
	{
		return true;
	}
	else if (uParam0->f_6)
	{
		return true;
	}
	else if (uParam0->f_7)
	{
		return true;
	}
	else if (uParam0->f_11)
	{
		return true;
	}
	else if (uParam0->f_2)
	{
		return true;
	}
	else if (uParam0->f_12)
	{
		return true;
	}
	return false;
}

void func_792()
{
	if (!func_349(132, 255))
	{
		return;
	}
}

void func_793(bool bParam0)
{
	if (!bParam0 && Global_1956200->f_1431.f_108)
	{
		return;
	}
	iVar0 = get_player_ped(player_id());
	if (_is_attribute_overpowered(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_1 = _0x4c9f782180712742(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_3 = _0x4c9f782180712742(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_2 = _0x4c9f782180712742(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_4 = _0xb429f58803d285b1(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_6 = _0xb429f58803d285b1(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_5 = _0xb429f58803d285b1(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	Global_1956200->f_1431.f_108 = 1;
}

void func_794(int iParam0, bool bParam1)
{
	if (!func_1209(32))
	{
		return;
	}
	func_1210(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_181(32);
	func_1211();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_1212(&(Global_1952637->f_2365));
	func_1213(&(Global_1952637->f_2365));
	func_1214(4);
	if (bParam1)
	{
		func_1215(iParam0, 1, 1, 0);
	}
	func_1210(27, 0, 131074, 0, 0);
	func_1210(34, 0, 131072, 0, 0);
}

bool func_795(bool bParam0)
{
	if (!func_884(-931834499, bParam0))
	{
		return false;
	}
	return true;
}

void func_796()
{
	func_1216(&(Global_1139381->f_3876.f_480));
}

void func_797()
{
	func_1217();
	func_1218();
}

void func_798(float fParam0)
{
	Global_1956200->f_1561.f_3 = fParam0;
}

struct<12> func_799()
{
	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = player_ped_id();
	iVar13 = player_id();
	switch (Global_1956200->f_1565.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1956200->f_1565.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1956200->f_1565.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1956200->f_1565.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1956200->f_1565.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1956200->f_1565.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1956200->f_1565.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = get_entity_health(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = _get_ped_stamina(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = _0xa81d24ae0af99a5e(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1219(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1219(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1219(2, 2);
			break;
	}
	return Var0;
}

void func_800(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	iVar0 = player_ped_id();
	func_1220();
	func_1221();
	func_1222(&uParam0, iVar0);
	func_1223(&uParam0, iVar0);
	func_1224(&uParam0, iVar0);
	func_1225(&uParam0);
	func_1226();
	func_1227(1);
}

void func_801()
{
	fVar0 = func_221(-763706539, -1397419524);
	Global_1956200->f_1431.f_74.f_2 = fVar0;
	fVar1 = func_221(258444835, 1449106310);
	Global_1956200->f_1431.f_74.f_3 = fVar1;
	fVar2 = func_221(845057552, -458184788);
	fVar3 = func_221(845057552, 1468884243);
	Global_1956200->f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_220(-1645702932);
	Global_1956200->f_1431.f_74.f_5 = uVar4;
}

void func_802()
{
	_0xd2d74f89df844a50(&(Global_1956200->f_1565));
}

void func_803(int iParam0, int iParam1)
{
	_0xa6aa9f56bc6cff58(iParam0, iParam1);
	func_788(&(Global_1293346->f_12));
	func_788(&(Global_1293346->f_16));
}

void func_804()
{
	if (is_entity_dead(Global_34))
	{
		return;
	}
	_0xc395355843be134b(Global_34);
	if (get_current_ped_weapon(Global_34, &iVar0, false, 0, true))
	{
		if ((((iVar0 == -1415022764 || _is_weapon_binoculars(iVar0)) || iVar0 == -1016714371) || iVar0 == 332793555) || iVar0 == 191707516)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		}
	}
}

void func_805(var uParam0)
{
	func_1228(uParam0);
	func_1229(&(uParam0->f_16));
	func_1230(&(uParam0->f_21));
	func_1231(&(uParam0->f_22));
	func_1232(&(uParam0->f_25));
	func_1233(&(uParam0->f_47));
	func_1234(&(uParam0->f_51));
	func_1235(&(uParam0->f_54));
	func_1236(&(uParam0->f_57));
}

void func_806(int iParam0, int iParam1)
{
	if (does_blip_exist(&(Local_10256[iParam0]->f_6[iParam1])))
	{
		remove_blip(Local_10256[iParam0]->f_6[iParam1]);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (does_blip_exist(Local_10256[iParam0]->f_9[iParam1][iVar0]))
		{
			remove_blip((*Local_10256[iParam0]->f_9[iParam1])[iVar0]);
		}
		iVar0++;
	}
}

void func_807(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	set_bit((*uParam0)[iVar0], (iParam1 - iVar0 * 32));
}

void func_808(bool bParam0)
{
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_18726)
	{
		bVar1 = func_472(iVar2);
		if (((bParam0 && !bVar1) || (!bParam0 && bVar1)) || Global_3145858->f_18727[iVar2]->f_8 == 0)
		{
		}
		else
		{
			iVar0 = Global_3145858->f_18727[iVar2]->f_8;
			if (!is_model_valid(iVar0))
			{
				iVar0 = 207132841;
			}
			set_model_as_no_longer_needed(iVar0);
		}
		iVar2++;
	}
}

int func_809(int iParam0)
{
	return iParam0;
}

void func_810(int iParam0)
{
	if (!func_1237(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

int func_811(int iParam0)
{
	return &(Global_1956200->f_1710.f_2[iParam0]);
}

void func_812(int iParam0, int iParam1)
{
	func_1238(1);
	func_1239(0, iParam0);
	func_1239(1, iParam1);
}

bool func_813(int iParam0)
{
	if (func_480(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_814()
{
	return true;
}

bool func_815(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_816(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_817(int iParam0, int iParam1)
{
	iVar0 = func_1241(iParam0);
	if (Global_1146212->f_47689.f_44[iVar0]->f_1 == 0)
	{
		return true;
	}
	else if (Global_1146212->f_47689.f_44[iVar0]->f_1 == iParam1)
	{
		return true;
	}
	return false;
}

void func_818(int iParam0)
{
	Global_1146212->f_47689.f_44[func_1241(iParam0)]->f_1 = 0;
}

int func_819(int iParam0)
{
	if (!func_815(iParam0))
	{
		return 0;
	}
	iVar0 = func_1240(iParam0, 1);
	if (!func_1242(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_1243(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_1244(iParam0, iVar1))
		{
			case 0:
				func_1245(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_1245(iVar1, iParam0, iVar4);
						func_1246(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_1246(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1247(iVar1, 1);
				func_1248(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1249(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_1250(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

int func_820(var uParam0, int iParam1, var uParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*uParam2 = 0;
		return 0;
	}
	if ((*uParam0)[iVar0]->f_1 < 0)
	{
		*uParam2 = 0;
		return 0;
	}
	*uParam2 = &(*uParam0)[iVar0]->f_2[(*uParam0)[iVar0]->f_1];
	return 1;
}

bool func_821()
{
	return &Global_3145858 == -504335712;
}

bool func_822(int iParam0)
{
	return func_404(&(Global_524288->f_6), iParam0);
}

int func_823()
{
	return Global_265377->f_124517.f_71.f_36;
}

bool func_824(int iParam0)
{
	if (is_bit_set(Global_2097152->f_253, 9))
	{
		return false;
	}
	if (iParam0 != -1)
	{
		iVar0 = network_get_player_index(int_to_participantindex(iParam0));
		if (func_541(iVar0))
		{
			return false;
		}
	}
	if (Local_5197.f_851 && func_353(_0x51f33dbc1a41cbfd(), 2048))
	{
		return false;
	}
	if (!is_bit_set(Local_5197.f_26, 4))
	{
		return false;
	}
	if (is_bit_set(Local_5197.f_26, 5))
	{
		return false;
	}
	if (Local_5197.f_47 >= Global_3145858->f_194)
	{
		return false;
	}
	if (Global_2097152->f_6018 != -1 && func_268(&(Local_5197.f_743)))
	{
		iVar1 = func_269(&(Local_5197.f_743), 0, 0);
		iVar2 = (Global_2097152->f_6018 - iVar1);
		if (iVar2 <= 60000)
		{
			return false;
		}
	}
	if (Global_2097152->f_6017 > 0)
	{
		if (IntToFloat(func_269(&(Local_5197.f_159), 0, 0)) > (IntToFloat(Global_2097152->f_6017) * 0.75f))
		{
			return false;
		}
	}
	if (Local_5197.f_162 > 0)
	{
		if ((Local_5197.f_162 - func_269(&(Local_5197.f_159), 0, 0)) <= 60000)
		{
			return false;
		}
	}
	return true;
}

void func_825(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_6500 - 1))
	{
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_3, iVar0))
		{
			set_bit(&(Local_5197.f_609), iVar0);
		}
		iVar0++;
	}
}

void func_826(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_235(iVar6146))
	{
		return;
	}
	if (iParam2 == 0)
	{
		iParam1 = (iParam1 - 1);
	}
	_0xba62b4d80fa66bd6(iParam0, iParam1, iParam2, uParam3);
}

int func_827(int iParam0)
{
	if (func_235(iVar6149))
	{
		return 0;
	}
	script_race_get_player_split_time(iParam0, &uVar1, &uVar0);
	return uVar1;
}

int func_828(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_3145858->f_52165[iVar0]->f_3 != iParam0)
		{
		}
		else
		{
			switch (Global_3145858->f_52165[iVar0]->f_5)
			{
				case -836875806:
					if (iParam1 != iParam2)
					{
					}
					else
					{
						Jump @193; //curOff = 105
						if (iParam1 == iParam2)
						{
						}
						else
						{
							Jump @193; //curOff = 118
							if (iParam2 != iParam9)
							{
							}
							else
							{
								Jump @193; //curOff = 131
								if (iParam3 > -1 && iParam4 != iParam3)
								{
								}
								else
								{
									Jump @193; //curOff = 154
									if (iParam3 > -1 && iParam4 == iParam3)
									{
									}
									else
									{
										Jump @193; //curOff = 177
										if (iParam6 != iParam4)
										{
										}
										else if (iParam3 > -1)
										{
											if (func_1251(iVar0) && !is_bit_set(Global_3145858->f_52165[iVar0]->f_7, (8 + iParam3)))
											{
											}
											else if (func_1252(iVar0) && !is_bit_set(Global_3145858->f_52165[iVar0]->f_7, (0 + iParam4)))
											{
											}
											else if ((iParam4 > -1 && iParam8 > -1) && is_bit_set(&(Global_3145858->f_52165[iVar0]->f_9[iParam4]), iParam8))
											{
											}
											else if ((iParam5 > -1 && Global_3145858->f_52165[iVar0]->f_8 > -1) && iParam5 != Global_3145858->f_52165[iVar0]->f_8)
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 0) && bParam7)
											{
											}
											else if ((is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 1) && !func_491(255)) && !func_174(255))
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 2) && bParam10)
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 3) && !bParam10)
											{
											}
											else
											{
												return iVar0;
											}
											iVar0++;
											return -1;
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

int func_829(int iParam0, var uParam1)
{
	if (((iParam0 < 0 || Global_3145858->f_51943[iParam0]->f_3 == 0) || Global_3145858->f_51943[iParam0]->f_4 == -1) || is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4]))
	{
		return 0;
	}
	Var0 = { *Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4] };
	if (is_bit_set(Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4]->f_16, 1))
	{
		func_1253(&Var0, uParam1, &bVar51, 0);
	}
	if (bVar51)
	{
		return 0;
	}
	switch (Global_3145858->f_51943[iParam0]->f_3)
	{
		case 1:
			func_1254(iParam0, uParam1, &uVar16, &cVar32, &iVar49, &uVar50, &iVar52);
			if (is_bit_set(Global_3145858->f_51943[iParam0]->f_9, 0))
			{
				_0xdd1232b332cbb9e7(11, 1, 0);
			}
			bVar48 = func_1255(Global_3145858->f_51943[iParam0]->f_4);
			switch (iVar52)
			{
				case 0:
					return func_831(&Var0, -2, 0, 0, 0, bVar48);
				case 1:
					return func_1256(&Var0, &uVar16, -2, 0, 0, 0, bVar48, iVar49);
				case 2:
					return func_1257(&Var0, &uVar16, &cVar32, -2, 0, 0, 0, bVar48, iVar49, uVar50);
				default:
					break;
			}
			break;
		case 2:
			if (is_bit_set(Global_3145858->f_51943[iParam0]->f_9, 0))
			{
				_0xdd1232b332cbb9e7(12, 1, 0);
			}
			return func_335(&Var0, Global_3145858->f_51943[iParam0]->f_8, -2, 0, 0, 0, bVar48);
		case 3:
			return func_242(&Var0, -2, 0, 0, 0, bVar48);
		case 4:
			func_1258(Global_3145858->f_51943[iParam0]->f_10, 1, 0, 0, 0, 0, 0);
			return 0;
	}
	return 0;
}

bool func_830(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Local_5197.f_173), *iParam0);
}

var func_831(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar20 = _0x860ddfe97cc94df0(&Var0, &Var13, bParam5);
	return uVar20;
}

int func_832(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 0;
	}
	if (!network_is_player_active(iParam1))
	{
		return 0;
	}
	StringCopy(&cVar0, get_player_name(iParam1), 64);
	sVar8 = _create_var_string(10, sParam0, func_241(&cVar0, iParam2));
	uVar9 = func_242(sVar8, -2, 0, 0, 0, 1);
	return uVar9;
}

bool func_833(int iParam0)
{
	if (func_1158())
	{
		if (iVar8430 == 1)
		{
			if (iParam0 == (Global_2097152->f_255 - 1))
			{
				bVar0 = true;
			}
		}
		else if (iParam0 == (iVar8430 - 1))
		{
			bVar0 = true;
		}
	}
	else if ((iParam0 >= (Global_2097152->f_255 - 1) || (func_370() && iParam0 >= (Global_2097152->f_255 - 1))) || ((Global_2097152->f_6483 > -1 && Local_57[iVar6156]->f_4 >= Global_2097152->f_6483) && iParam0 == (Global_2097152->f_255 - 2)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_278(Local_57[iVar6149]->f_4))
		{
			return true;
		}
	}
	return false;
}

char* func_834(int iParam0)
{
	iVar0 = (iParam0 % 10);
	iVar1 = (iParam0 % 100);
	if (iVar0 == 1 && iVar1 != 11)
	{
		return "RC_TCK_ORDST";
	}
	else if (iVar0 == 2 && iVar1 != 12)
	{
		return "RC_TCK_ORDND";
	}
	else if (iVar0 == 3 && iVar1 != 13)
	{
		return "RC_TCK_ORDRD";
	}
	return "RC_TCK_ORDTH";
}

int func_835(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (iParam1 == 255)
	{
		return 0;
	}
	if (!network_is_player_active(iParam1))
	{
		return 0;
	}
	StringCopy(&cVar0, get_player_name(iParam1), 64);
	sVar8 = _create_var_string(42, sParam0, func_241(&cVar0, iParam2), func_837(sParam3, iParam4));
	uVar9 = func_242(sVar8, -2, 0, 0, 0, 1);
	return uVar9;
}

var func_836(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_242(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

char* func_837(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_498(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_838(int iParam0, int iParam1)
{
	if ((iParam0 == iParam1 || iParam0 == 255) || iParam1 == 255)
	{
		return;
	}
	iVar0 = player_id();
	if (iParam0 == iVar0)
	{
		(*Global_1051147)[iParam1] = Global_1051147[iParam1] + 1;
	}
	else if (iParam1 == iVar0)
	{
		(*Global_1051147)[iParam0]->f_1++;
	}
}

int func_839(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!func_1259(iParam0, 1, fParam1))
	{
		return 0;
	}
	return 1;
}

bool func_840()
{
	if ((!bVar6148 || func_652(255)) || func_1260(-1))
	{
		return false;
	}
	if (Global_2097152->f_31 != -500771278)
	{
		if (!(is_ped_on_mount(iVar6147) || is_ped_in_any_vehicle(iVar6147, false)))
		{
			return false;
		}
		if (Global_2097152->f_31 != 149530285)
		{
			if (!is_vehicle_driveable(iVar6159, false, false))
			{
				return false;
			}
		}
	}
	return true;
}

int func_841(int iParam0)
{
	iVar0 = (iParam0 - 1);
	if (iVar0 < 1)
	{
		if (func_370() || iVar0 < 0)
		{
			iVar0 = (Global_2097152->f_255 - 1);
		}
	}
	return iVar0;
}

bool func_842(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_255 - 1))
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = &Global_2097152->f_258[iVar0]->f_1[iVar1]->f_25[iVar2];
				if (iVar3 > -1 && does_entity_exist(&(uLocal_9056[iVar3])))
				{
					if (&uLocal_9056[iVar3] == net_to_obj(_0xf260af6f43953316(iParam0)))
					{
						*iParam1 = iVar0;
						return true;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

int func_843(vector3 vParam0)
{
	iVar2 = (Global_2097152->f_255 - 1);
	if (Local_57[iVar6147]->f_3 >= (Global_2097152->f_255 - 1))
	{
		iVar2 = Global_2097152->f_255;
	}
	iVar0 = 1;
	while (iVar0 <= iVar2)
	{
		if (((!func_354(Global_2097152->f_258[iVar0]->f_1[0]->f_1) && !is_bit_set(&(uLocal_12113[func_405(iVar0)]), func_406(iVar0))) && iVar0 < iVar2) || (iVar0 == iVar2 && func_833(Local_57[iVar6154]->f_3)))
		{
			fVar4 = vdist2(vParam0, Global_2097152->f_258[iVar0]->f_1[0]->f_1);
			if (fVar3 == 0f || fVar4 < fVar3)
			{
				fVar3 = fVar4;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_844(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 != -1 && iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (((func_354(Global_2097152->f_258[iParam0]->f_1[iVar0]->f_1) && !func_354(Global_2097152->f_258[iParam1]->f_1[iVar0]->f_1)) && !is_bit_set(Global_2097152->f_258[iParam1]->f_1[iVar0]->f_23, iVar6157)) || ((bParam2 && !func_354(Global_2097152->f_258[iParam0]->f_1[iVar0]->f_1)) && func_354(Global_2097152->f_258[iParam1]->f_1[iVar0]->f_1)))
			{
				return true;
			}
			iVar0++;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_845(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	set_bit(&uLocal_13508, 15);
	func_1261(iParam0);
	if (!bParam3)
	{
		func_1262(iParam1);
	}
	else
	{
		func_1263(iParam1);
	}
	fVar0 = vdist2(get_entity_coords(iVar6143, true, false), get_entity_coords(iParam0, true, false));
	if (fVar0 > Local_57[iVar6146]->f_48)
	{
		Local_57[iVar6146]->f_48 = fVar0;
	}
	iVar1 = func_1264(iParam2);
	if (iVar1 > 0)
	{
		if (is_ped_on_mount(iVar6143))
		{
			iVar2 = get_mount(iVar6143);
			func_839(iVar2, (to_float(iVar1) * 0.01f));
			if (iParam2 == 53)
			{
				func_1265(iVar2, 1, 100);
			}
		}
	}
}

bool func_846(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	return func_1266(iVar0);
}

bool func_847(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

char* func_848(int iParam0)
{
	if (iParam0 == 1905553950)
	{
		return "inventory_items_mp";
	}
	return "inventory_items";
}

bool func_849(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_850(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1511427369:
		case -1504859554:
		case -764310200:
		case -577893115:
		case 1885857703:
		case 2133046983:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_851(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_852(int iParam0)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1267(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_853(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1268(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_854(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

char* func_855(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WT_INVALID";
		case -1569615261:
			return "WT_UNARMED";
		case 416676503:
			return "WT_PISTOL";
		case -1101297303:
			return "WT_REVOLVER";
		case 970310034:
			return "WT_RIFLE";
		case -594562071:
			return "WT_ASSAULTRIFLE";
		case 860033945:
			return "WT_SHOTGUN";
		case -1212426201:
			return "WT_SNIPERRIFLE";
		default:
			return _get_weapon_name(iParam0);
	}
	return "WT_INVALID";
}

int func_856(int iParam0, int iParam1, bool bParam2)
{
	if (&iLocal_6807[iParam0] == -1)
	{
		if (!bParam2 && func_233(iParam0, 255))
		{
			return func_526(iParam0, iParam1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (iParam0 == &Local_5197.f_709[iVar0])
				{
					iLocal_6807[iParam0] = iVar0;
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		return &(iLocal_6807[iParam0]);
	}
	return -1;
}

bool func_857(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else if (is_bit_set(Local_57[iVar0]->f_51, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_858(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if ((&Local_5197.f_121[iParam0] < Local_57[iParam1]->f_17 && Local_57[iParam1]->f_9 != -1) && !is_bit_set(Local_5197.f_852, iParam0))
	{
		Local_5197.f_104[Local_57[iParam1]->f_9] = (&Local_5197.f_104[Local_57[iParam1]->f_9] + (&Local_5197.f_121[iParam0] - Local_57[iParam1]->f_17));
	}
	Local_5197.f_121[iParam0] = 0;
	Local_5197.f_675[iParam0] = -1;
	clear_bit(&(Local_5197.f_708), iParam0);
	func_1269(&Local_3713, iParam0, func_83());
	Local_5197.f_709[iParam0] = func_373();
	_0xd426e2e3288469d6(&(Local_5197.f_173), iParam2);
	clear_bit(&(Local_5197.f_742), iParam0);
	iLocal_6840[iParam0] = -1;
	iLocal_6873[iParam0] = -1;
	func_270(Local_7036[iParam0]);
	func_270(Local_6906[iParam0]);
	func_1270(iParam0);
	set_bit(&(Local_57[iVar6145]->f_51), iParam0);
}

int func_859()
{
	if (!func_238())
	{
		return -1;
	}
	iVar2 = -1;
	fVar21 = 1f;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Local_5197.f_675[iVar1] > -1 && &Local_5197.f_675[iVar1] < 16)
		{
			uVar3[&Local_5197.f_675[iVar1]] = &uVar3[&Local_5197.f_675[iVar1]] + 1;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_5197.f_46 - 1))
	{
		if (&Local_5197.f_48[iVar0] > 0)
		{
			iVar20 = (uVar3[iVar0] + Local_5197.f_48[iVar0]) // PointerArith;
			fVar24 = to_float(iVar20);
			fVar22 = (fVar24 / IntToFloat(func_1271(iVar0)));
			if (fVar22 < 1f)
			{
				if (fVar22 < fVar21)
				{
					iVar2 = iVar0;
					fVar21 = fVar22;
					iVar23 = &Local_5197.f_543[iVar0];
				}
				else if (fVar22 == fVar21)
				{
					if (&Local_5197.f_543[iVar0] > iVar23)
					{
						iVar2 = iVar0;
						iVar23 = &Local_5197.f_543[iVar0];
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_860(int iParam0)
{
	if (!is_bit_set(Local_5197.f_852, iParam0) || !is_bit_set(Local_3713.f_741, iParam0))
	{
		return false;
	}
	return true;
}

bool func_861(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_233(iVar0, 255))
		{
		}
		else if (!is_bit_set(Local_57[iVar0]->f_51, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_862(int iParam0)
{
	clear_bit(&(Local_5197.f_852), iParam0);
	clear_bit(&(Local_3713.f_741), iParam0);
}

bool func_863(var uParam0, var uParam1)
{
	if ((is_bit_set(uParam0->f_7, 2) && !is_bit_set(uParam0->f_7, 1)) && uParam0->f_3 == -1)
	{
		return false;
	}
	if (is_bit_set(uParam1->f_5, 0) && !func_1272(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

void func_864(var uParam0)
{
	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_4;
	iVar2 = uParam0->f_5;
	if (iVar0 == -1)
	{
		network_get_global_multiplayer_clock(&iVar3, &iVar4, &iVar5);
		func_1273(uParam0, iVar3, iVar4, iVar5);
	}
	else
	{
		func_1273(uParam0, iVar0, iVar1, iVar2);
	}
	set_bit(&(uParam0->f_7), 1);
}

void func_865(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_bit_set(uParam0->f_7, 2))
	{
		*iParam1 = uParam0->f_3;
		*iParam2 = uParam0->f_4;
		*iParam3 = uParam0->f_5;
	}
	else
	{
		network_get_global_multiplayer_clock(&iVar0, &iVar1, &iVar2);
		*iParam1 = (iVar0 + uParam0->f_3);
		*iParam2 = (iVar1 + uParam0->f_4);
		*iParam3 = (iVar2 + uParam0->f_5);
		func_1274(iParam1, iParam2, iParam3);
	}
}

void func_866(var uParam0, var uParam1)
{
	if (!func_1272(uParam0, uParam1))
	{
		return;
	}
	if (is_bit_set(uParam0->f_7, 2))
	{
		set_bit(&(uParam1->f_5), 1);
	}
	else
	{
		clear_bit(&(uParam1->f_5), 1);
	}
	uParam1->f_2 = uParam0->f_3;
	uParam1->f_3 = uParam0->f_4;
	uParam1->f_4 = uParam0->f_5;
}

int func_867(int iParam0, int iParam1, int iParam2)
{
	iVar0 = ((iParam0 * 3600 + iParam1 * 60) + iParam2);
	iVar1 = ((get_clock_hours() * 3600 + get_clock_minutes() * 60) + get_clock_seconds());
	if (iVar0 >= iVar1)
	{
		iVar2 = (iVar0 - iVar1);
	}
	else
	{
		iVar2 = ((iVar0 + 86400) - iVar1);
	}
	if (iVar1 >= iVar0)
	{
		iVar3 = (iVar1 - iVar0);
	}
	else
	{
		iVar3 = ((iVar1 + 86400) - iVar0);
	}
	if (iVar2 <= iVar3)
	{
		return 1;
	}
	return 0;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case -1439599467:
		case 0:
		case 1679686673:
			return 0;
	}
	return iParam0;
}

void func_869(int iParam0, int iParam1, bool bParam2)
{
	func_1123(iParam0, 0, 0);
	if (func_813(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_870(int iParam0, float fParam1, int iParam2)
{
	func_1123(iParam0, 0, 0);
	if (func_813(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

Vector3 func_871(int iParam0, int iParam1, bool bParam2)
{
	if ((iParam0 < 64 && iParam0 >= 0) && !func_354(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_1))
	{
		switch (&Global_2097152->f_258[iParam0]->f_1[iParam1])
		{
			case 0:
				vVar0 = { Global_2097152->f_258[iParam0]->f_1[iParam1]->f_1 };
				break;
			default:
				break;
		}
	}
	if (func_334() && bParam2)
	{
		if (func_471(iParam0, iParam1))
		{
			iVar3 = func_1275(iParam0, iParam1);
			if (does_entity_exist(&(uLocal_9056[&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar3]])))
			{
				vVar0 = { get_entity_coords(&(uLocal_9056[&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar3]]), true, false) };
				get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false);
			}
		}
	}
	if (func_354(vVar0) && iParam1 > 0)
	{
		vVar0 = { Global_2097152->f_258[iParam0]->f_1[0]->f_1 };
	}
	return vVar0;
}

var func_872(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1276() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1277());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1277());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1277());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1278(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_541(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_348(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1197(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

int func_873(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_874(iParam0))
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
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1279(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1280(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1279(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1281(1775828486);
			func_1282(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1279(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_1283(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_1281(350943398);
			func_1284(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_1284(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_1284(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_874(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

void func_875(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_1285(get_entity_max_health(iParam1, false), iParam1);
			break;
		case 1:
			func_1286(_get_ped_max_stamina(iParam1), iParam1);
			break;
		case 19:
			func_1287(iParam1, 0, 100f);
			break;
		case 18:
			func_1287(iParam1, 1, 100f);
			break;
	}
}

void func_876(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_1288(&(uParam0->f_16), 84);
	}
}

void func_877(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_1289(uParam0, 1);
	}
}

void func_878()
{
	func_1290();
	func_1291();
	func_798(_0xdf66a37936d5f3d9(player_id()));
}

struct<4> func_879(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_1292(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1293() };
		if (func_1294() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_1295(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_1296(player_id());
	}
	bVar33 = func_84(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_1297(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_485();
		}
		if (!func_1298(&Var0, 0))
		{
			Var35 = { func_1299(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_880(var uParam0, int iParam1)
{
	func_1300(uParam0, iParam1, 0);
	return Global_1904087->f_11;
}

var func_881(var uParam0, int iParam1)
{
	func_1300(uParam0, iParam1, 0);
	return Global_1904087->f_22;
}

int func_882(var uParam0, int iParam1)
{
	if (!func_1300(uParam0, iParam1, 1))
	{
	}
	if (!func_1301(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_1302(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

void func_883(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = iParam4;
}

bool func_884(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_1303(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_1304(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_1305(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

int func_885(bool bParam0)
{
	if (func_738() == -1)
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

int func_886(int iParam0)
{
	if (!func_1209(32))
	{
		func_1306(&(Global_1952637->f_2365));
		func_11(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_1307(*iParam0))
		{
			if (func_1209(32))
			{
				func_794(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1213(&(Global_1952637->f_2365));
		if (!func_1308(&(Global_1952637->f_1556), *iParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_1209(32))
			{
				func_794(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1212(&(Global_1952637->f_1556));
	}
	func_1210(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *iParam0;
	Global_1139381->f_4779 = iParam0->f_1;
	func_1210(30, 0, 0, 0, 0);
	func_1210(27, 0, 0, 0, 0);
	func_1210(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return 1;
}

void func_887()
{
	func_351(121);
}

void func_888(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_1309(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_1309(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_1309(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_1310(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_1311(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_1312(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_889()
{
	func_1313();
}

int func_890(int iParam0)
{
	if (func_731(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_891(int iParam0, int iParam1, int iParam2)
{
	func_1314(0, iParam0);
	func_1314(2, iParam1);
	func_1314(1, iParam2);
	iVar0 = func_1315(iParam0);
	func_1316(0, iVar0);
	iVar0 = func_1315(iParam1);
	func_1316(2, iVar0);
	iVar0 = func_1315(iParam2);
	func_1316(1, iVar0);
}

void func_892(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136 = iParam0;
			break;
	}
}

void func_893(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_1 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_1 = iParam0;
			break;
	}
}

void func_894(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_2 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_2 = iParam0;
			break;
	}
}

void func_895()
{
	func_1314(0, func_1309(0, 0));
	func_1314(2, func_1309(2, 0));
	func_1314(1, func_1309(1, 0));
	fVar0 = func_1318(0, 0);
	func_1316(0, floor(fVar0));
	fVar0 = func_1318(2, 0);
	func_1316(2, floor(fVar0));
	fVar0 = func_1318(1, 0);
	func_1316(1, floor(fVar0));
}

void func_896(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1317(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_81 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_83 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_82 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_897(int iParam0, var uParam1, int iParam2)
{
	vVar0.f_1 = -1;
	if (!func_1319(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*Global_1139381->f_4796.f_34[iParam2] = { vVar0 };
}

void func_898()
{
	func_1320();
	func_1321();
}

void func_899(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_900()
{
	return uVar7263;
}

void func_901(int iParam0)
{
	if (iParam0 != iVar7262)
	{
		iLocal_7265 = iParam0;
	}
}

bool func_902()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (&Global_3145858->f_57980[iVar1]->f_3[0] == 0)
		{
		}
		else
		{
			iVar2 = 0;
			while (iVar2 <= 15)
			{
				if (&Global_3145858->f_57980[iVar1]->f_3[iVar2] == 0)
				{
				}
				else
				{
					_0x72d4cb5db927009c(&(Global_3145858->f_57980[iVar1]->f_3[iVar2]), -1, 0);
					if (!_0xff07cf465f48b830(&(Global_3145858->f_57980[iVar1]->f_3[iVar2])))
					{
						iVar0 = 0;
					}
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_903()
{
	iVar0 = 1;
	request_named_ptfx_asset(134607740);
	if (!has_named_ptfx_asset_loaded(134607740))
	{
		iVar0 = 0;
	}
	if (func_187())
	{
		request_named_ptfx_asset(1330862000);
		if (!has_named_ptfx_asset_loaded(1330862000))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_904(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(((func_472(iVar0) || Global_3145858->f_18727[iVar0]->f_8 == 0) || does_entity_exist(uParam0[iVar0])));
		Stack.Push(iVar0);
		Call_Loc(iParam1);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (bParam3 && !func_1322(iVar1))
			{
			}
			else
			{
				if (!is_model_valid(iVar1))
				{
					iVar1 = 207132841;
				}
				if (!func_750(iVar1))
				{
					iVar2 = 0;
				}
				else if (bVar3)
				{
					iVar2 = 0;
				}
				else
				{
					(*uParam0)[iVar0] = create_object(iVar1, Global_3145858->f_18727[iVar0]->f_1, false, false, true, false, true);
					func_1127(uParam0[iVar0], iVar0, iParam2, bParam4, 0);
					bVar3 = true;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_905()
{
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if (is_bit_set(Global_3145858->f_18727[iVar0]->f_19, 22))
		{
		}
		else
		{
			iLocal_9358[iVar0] = func_1323(uLocal_9056[iVar0], Global_3145858->f_18727[iVar0]->f_8, 1);
		}
		iVar0++;
	}
}

bool func_906(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else if (_does_propset_exist(uParam0[iVar0]))
		{
		}
		else
		{
			_request_propset(Global_3145858->f_32697[iVar0]->f_11);
			if (!_has_propset_loaded(Global_3145858->f_32697[iVar0]->f_11))
			{
				iVar1 = 0;
			}
			else
			{
				(*uParam0)[iVar0] = _create_propset(Global_3145858->f_32697[iVar0]->f_11, Global_3145858->f_32697[iVar0]->f_1, Global_3145858->f_32697[iVar0]->f_13, Global_3145858->f_32697[iVar0]->f_10, 1200f, false, is_bit_set(Global_3145858->f_32697[iVar0]->f_14, 0));
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_907()
{
	if (Global_3145858->f_6822 == 0)
	{
		return true;
	}
	iVar1 = 1;
	iVar2 = 7;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_6822)
	{
		if (func_1324(iVar0))
		{
			bVar3 = true;
			if (!func_338())
			{
				bVar3 = func_1325(Global_3145858->f_6823[iVar0]->f_17);
			}
			if (!func_1327(iVar0, &uLocal_8637, iVar2, &uLocal_8838, bVar3, 151, -1, 0, func_1326(iVar0)))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_908()
{
	iVar0 = 1;
	if (!_0xd9130842d7226045("RDRO_Race_sounds", 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_909(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (Global_3145858->f_18726 - 1))
	{
		if (is_bit_set(Global_3145858->f_18727[iVar1]->f_19, 19))
		{
			if (iParam0[iVar1] == -1)
			{
				func_1328(Global_3145858->f_18727[iVar1]->f_1, Global_3145858->f_18727[iVar1]->f_8, (*iParam0)[iVar1], 5, 1056964608);
			}
			if (iParam0[iVar1] == -1)
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_910(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (Global_2097152->f_255 - 1))
	{
		if (is_bit_set(Global_2097152->f_258[iVar1]->f_76, 6))
		{
			if (iParam0[iVar1] == -1)
			{
				func_1329(Global_2097152->f_258[iVar1]->f_1[0]->f_1, (*iParam0)[iVar1], (iVar1 == 0 || iVar1 == (Global_2097152->f_255 - 1)));
			}
			if (iParam0[iVar1] == -1)
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_911(int iParam0, bool bParam1)
{
	vVar0 = { Global_3145858->f_196 };
	switch (iParam0)
	{
		case -504335712:
			vVar3 = { func_1330(bParam1) };
			break;
		case 395262693:
			vVar3 = { func_1331() };
			break;
		case -933924539:
			vVar3 = { func_1332(bParam1) };
			break;
	}
	if (!func_354(vVar3))
	{
		vVar0 = { vVar3 };
	}
	return vVar0;
}

void func_912(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (!func_353(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_366((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_913(int iParam0)
{
	if (func_738() == -1)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	func_771(&((*Global_1197355)[iVar0]->f_4), iParam0, 1, 30, 1, 7);
}

char* func_914(var uParam0, var uParam1)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

var func_915(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_916(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

var func_917(var uParam0)
{
	if (Global_1572887->f_266.f_92)
	{
		*uParam0 = { Global_1572887->f_266.f_68 };
	}
	return Global_1572887->f_266.f_92;
}

int func_918()
{
	switch (Global_1572887->f_106.f_14)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
		case 7:
			return 5;
		case 8:
			return 6;
		case 9:
			return 7;
		case 3:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 14:
			return 12;
		case 15:
			return 13;
		case 16:
			return 14;
		case 17:
			return 15;
		default:
			break;
	}
	return 16;
}

void func_919(int iParam0, bool bParam1)
{
	Local_57[iVar6148]->f_9 = iParam0;
	if (bVar6146)
	{
		iVar0 = iParam0;
		if (iParam0 == -1)
		{
			iVar0 = 0;
		}
		set_ped_relationship_group_hash(iVar6145, &(uLocal_7312[iVar0]));
		if (bParam1 && network_is_game_in_progress())
		{
			iVar1 = 0;
			while (iVar1 < Local_5197.f_46)
			{
				func_969(iParam0, iVar1);
				iVar1++;
			}
		}
	}
	if (bParam1)
	{
		func_947(iParam0, 0, 1);
	}
}

int func_920(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_49703 - 1))
	{
		if (!func_238() || is_bit_set(Global_3145858->f_49704[iVar0]->f_3, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_921(int iParam0, var uParam1)
{
	_0xb7e52a058b07c7e2(iParam0, &(uParam1->f_14), &(uParam1->f_18));
}

struct<61> func_922(int iParam0, bool bParam1)
{
	Var0.f_4 = 3;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = 1;
	Var0.f_42.f_1 = -1;
	Var0.f_42.f_3 = -1082130432;
	Var0.f_42.f_4 = 2;
	Var0.f_42.f_5 = -1082130432;
	Var0.f_42.f_7 = -1082130432;
	Var0.f_42.f_9 = -1082130432;
	Var0.f_42.f_11 = -1082130432;
	Var0.f_54.f_2 = -1;
	Var0.f_54.f_5 = -1;
	Var0.f_2 = Local_57[iVar6148]->f_9;
	if (Var0.f_2 == -1)
	{
		Var0.f_2 = 0;
	}
	Var0.f_3 = Local_57[iVar6148]->f_10;
	Var0 = uVar6145;
	Var0.f_1 = uVar6142;
	Var0.f_11 = iParam0;
	Var0.f_9 = Global_3145858->f_49704[Var0.f_3]->f_27;
	if (!func_338())
	{
		Var0.f_8 = -1;
	}
	else if (&Global_1051123 == 1)
	{
		Var0.f_8 = func_1333();
	}
	else
	{
		Var0.f_8 = Global_3145858->f_49704[Var0.f_3]->f_26;
	}
	if (iVar13934 != -1)
	{
		Var0.f_8 = iVar13934;
	}
	iVar61 = 0;
	while (iVar61 <= 2)
	{
		Var0.f_4[iVar61] = &Global_3145858->f_59031[iVar61];
		iVar61++;
	}
	Var0.f_18 = { Local_13939 };
	if (!func_84(1) || is_bit_set(Global_3145858->f_49704[Var0.f_3]->f_6, 18))
	{
		set_bit(&(Var0.f_12), 0);
	}
	if (!func_84(26))
	{
		set_bit(&(Var0.f_12), 1);
	}
	if (!func_84(60))
	{
		set_bit(&(Var0.f_12), 6);
	}
	if (func_84(6) || is_bit_set(Global_3145858->f_49704[Var0.f_3]->f_5, 11))
	{
		set_bit(&(Var0.f_12), 2);
	}
	if (func_84(28))
	{
		set_bit(&(Var0.f_12), 3);
	}
	if (!func_84(29))
	{
		set_bit(&(Var0.f_12), 4);
	}
	if (!func_84(33))
	{
		set_bit(&(Var0.f_12), 5);
	}
	Var0.f_13 = Global_2097152->f_6317[Var0.f_2]->f_11;
	Var0.f_14 = { Global_2097152->f_6317[Var0.f_2]->f_7 };
	Var0.f_42 = { func_979(bParam1) };
	uVar62 = &Global_3145858->f_49704[Var0.f_3]->f_8[Var0.f_2];
	Var0.f_54 = func_1334(&uVar62);
	Var0.f_54.f_3 = Var0.f_2;
	Var0.f_54.f_4 = func_84(12);
	Var0.f_54.f_5 = &Global_3145858->f_49704[Var0.f_3]->f_17[Var0.f_2];
	return Var0;
}

void func_923(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		func_1335(uParam0, uParam1, uParam2);
	}
	else
	{
		func_1336(uParam0, uParam2);
	}
}

void func_924(int iParam0)
{
	if (iVar13634 != iParam0)
	{
		iLocal_13637 = iParam0;
	}
}

void func_925()
{
	func_1337(2);
}

void func_926(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_927(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_928()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

void func_929(var uParam0, int iParam1)
{
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1338(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			set_bit(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

void func_930(bool bParam0, vector3 vParam1)
{
	func_1340(func_1339(bParam0, vParam1), Global_3145858->f_202);
}

bool func_931(int iParam0, struct<10> Param1, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)
{
	*iParam0 = 255;
	if (!Param1.f_8)
	{
		return false;
	}
	Var0 = { Param1.f_9 };
	if (!network_is_handle_valid(&Var0))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(&Var0))
	{
		return false;
	}
	iVar7 = network_get_player_from_gamer_handle(&Var0);
	if (!network_is_player_active(iVar7))
	{
		return false;
	}
	if (!network_is_player_a_participant(iVar7))
	{
		return false;
	}
	*iParam0 = iVar7;
	return true;
}

void func_932(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		iParam4 = 1;
	}
	func_171(iParam0);
	func_402(1024);
	if (bParam5)
	{
		func_401(16);
	}
	func_1341(iParam1);
	func_1342(iParam4);
	if (bParam2)
	{
		Global_1102219->f_26.f_4 = 1;
		Global_1102219->f_26.f_5 = iParam3;
	}
}

var func_933()
{
	return Global_1102219->f_26.f_3337;
}

void func_934(int iParam0, bool bParam1)
{
	if (!func_1343(iParam0, bParam1))
	{
		return;
	}
	iVar0 = Global_2097152->f_6200[iParam0]->f_4;
	if (!func_1344(*Local_7111.f_32[iParam0]))
	{
		if (func_354(func_1345(iVar0)))
		{
			return;
		}
		*Local_7111.f_32[iParam0] = { func_1346(iVar0, 0, 0, 0, 0) };
	}
	set_bit(&(Local_7111.f_6), iParam0);
	switch (Global_2097152->f_6200[iParam0]->f_3)
	{
		case -536084153:
			iVar1 = 1;
			if (is_bit_set(Global_2097152->f_6200[iParam0]->f_9, 0))
			{
				iVar1 = 16;
			}
			else
			{
				iVar1 = 1;
			}
			Local_7111.f_143[iParam0] = _0xbd3324281e8b9933(&(Local_7111.f_32[iParam0]), iVar1, -1, 0);
			break;
		case -2114717494:
			Local_7111.f_143[iParam0] = _0xbd3324281e8b9933(&(Local_7111.f_32[iParam0]), 4, -1, 0);
			break;
		case 101474539:
			if (!func_234(255))
			{
				func_114(0);
			}
			else
			{
				set_bit(&(Local_7111.f_8), iParam0);
			}
			break;
	}
}

int func_935(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

struct<2> func_936()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

struct<2> func_937()
{
	return Global_265377->f_124517.f_71.f_53;
}

bool func_938(struct<2> Param0)
{
	iVar0 = func_1347(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_939(struct<2> Param0)
{
	iVar0 = func_1347(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_940(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1348(Param0))
	{
		return -1;
	}
	iVar1 = func_1349(Param0);
	if (iVar1 >= 0)
	{
		func_1350(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_1350(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_941(struct<2> Param0)
{
	if (!func_13(Param0))
	{
		return -1;
	}
	if (Param0 != 2)
	{
		return -1;
	}
	return func_1207(Param0);
}

void func_942(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_1351(iParam0))
	{
		func_108(1);
	}
	func_1352(iParam0, 0);
	func_943((*Global_1835011)[iParam0]->f_1, 1, func_1353(&((*Global_1835011)[iParam0]->f_30), 2097152), 1);
	func_1354(iParam0);
	if (func_1355(iParam0, &iVar0))
	{
		func_510(func_490(1511238709, iVar0), 1);
	}
}

void func_943(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_13(Param0))
	{
		return;
	}
	if (!func_938(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1356(Param0);
	}
	if (!func_13(func_1199(0)))
	{
		func_1357(Param0, 3);
		func_1358(bParam3);
		func_1359(!bParam4);
		func_1360(Param0, -1);
		if (bParam2 && !func_1361(2))
		{
			func_488(&Global_0, 1024);
		}
		func_1362(1);
	}
	else
	{
		func_1360(Param0, -1);
		func_1357(Param0, 4);
		func_1363(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_1200(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1364(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_944(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_945(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1296543->f_43)
	{
		return;
	}
	if ((*Global_1296543)[iParam0]->f_1 != 255)
	{
		_0xd426e2e3288469d6(&(Global_1296543->f_44), (*Global_1296543)[iParam0]->f_1);
	}
	iVar0 = player_id();
	if (does_entity_exist((*Global_1296543)[iParam0]->f_3))
	{
		if (_0xe24c64d9aded2ef5(iVar0, (*Global_1296543)[iParam0]->f_3))
		{
			_0x0c6b89876262a99d(iVar0, (*Global_1296543)[iParam0]->f_3);
		}
	}
	func_1365((*Global_1296543)[iParam0]);
	Global_1296543->f_43 = (Global_1296543->f_43 - 1);
	*(*Global_1296543)[iParam0] = { *(*Global_1296543)[Global_1296543->f_43] };
	if (is_bit_set(Global_1296543->f_50, Global_1296543->f_43))
	{
		set_bit(&(Global_1296543->f_50), iParam0);
	}
	else
	{
		clear_bit(&(Global_1296543->f_50), iParam0);
	}
	clear_bit(&(Global_1296543->f_50), Global_1296543->f_43);
	func_1365((*Global_1296543)[Global_1296543->f_43]);
}

int func_946()
{
	iVar0 = -1;
	if (!func_8())
	{
		iVar0 = func_1366();
		func_947(iVar0, 0, 1);
	}
	return iVar0;
}

int func_947(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	if (get_player_team(player_id()) == iParam0 && !bParam2)
	{
		return 1;
	}
	if (!(iParam0 >= -1 && iParam0 <= 7))
	{
		return 0;
	}
	set_player_team(player_id(), iParam0, bParam1);
	if (!bParam1)
	{
		func_1367();
	}
	return 1;
}

int func_948(int iParam0, int iParam1, int iParam2)
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

int func_949(int iParam0, int iParam1)
{
	if (!func_354(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_1))
	{
		return iParam1;
	}
	else if (iParam1 > 0)
	{
		iVar0 = (iParam1 - 1);
		while (iVar0 >= 0)
		{
			if (!func_354(Global_2097152->f_258[iParam0]->f_1[iVar0]->f_1))
			{
				return iVar0;
			}
			iVar0 = (iVar0 + -1);
		}
	}
	return 0;
}

bool func_950()
{
	return is_bit_set(Local_57[iVar6150]->f_13, 15);
}

int func_951()
{
	iVar0 = -1;
	if (func_238())
	{
		if (is_bit_set(Global_2097152->f_253, 10))
		{
			iVar0 = 1;
		}
		else if (is_bit_set(Global_2097152->f_253, 11))
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_952(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		return;
	}
	if (func_833(iParam0))
	{
		iVar0 = 1;
		while (iVar0 <= (Global_2097152->f_255 - 2))
		{
			func_807(&uLocal_12113, iVar0);
			iVar0++;
		}
		if (!func_83())
		{
			iLocal_12116 = (Global_2097152->f_255 - 2);
		}
		return;
	}
	iVar1 = (iParam0 - 1);
	iVar67 = (Global_2097152->f_255 - 2);
	iVar0 = 1;
	while (iVar0 <= (Global_2097152->f_255 - 2))
	{
		iVar2[(iVar0 - 1)] = iVar0;
		iVar0++;
	}
	iVar68 = 0;
	while (iVar68 <= (iVar1 - 1))
	{
		if (iVar67 == 0)
		{
		}
		else
		{
			iVar69 = get_random_int_in_range(1000, iVar67 + 1 * 1000);
			iVar69 = (floor((to_float(iVar69) / 1000f)) - 1);
			iVar70 = &iVar2[iVar69];
			func_807(&uLocal_12113, iVar70);
			if (!func_83())
			{
				iLocal_12116 = iVar70;
			}
			if (func_471(iVar70, iParam1))
			{
				iVar71 = 0;
				while (iVar71 <= 4)
				{
					if (&Global_2097152->f_258[iVar70]->f_1[iParam1]->f_25[iVar71] != -1)
					{
						func_807(&(Local_57[iVar6148]->f_40), &(Global_2097152->f_258[iVar70]->f_1[iParam1]->f_25[iVar71]));
					}
					iVar71++;
				}
			}
			if (iVar69 < (iVar67 - 1))
			{
				iVar72 = iVar69;
				while (iVar72 <= (iVar67 - 2))
				{
					iVar2[iVar72] = &iVar2[iVar72 + 1];
					iVar72++;
				}
			}
			iVar67 = (iVar67 - 1);
			iVar68++;
		}
	}
}

void func_953(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (func_471(iVar0, iParam1))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (&Global_2097152->f_258[iVar0]->f_1[iParam1]->f_25[iVar1] != -1)
				{
					func_807(&(Local_57[iVar6148]->f_40), &(Global_2097152->f_258[iVar0]->f_1[iParam1]->f_25[iVar1]));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_954(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_35;
}

bool func_955(var uParam0)
{
	if (func_8())
	{
		if (Global_2892896->f_16 > -1)
		{
			*uParam0 = Global_2892896->f_16;
		}
		else
		{
			*uParam0 = 0;
		}
		return true;
	}
	else if (!func_950())
	{
		iVar0 = func_1368();
		if (iVar0 != -1)
		{
			*uParam0 = iVar0;
			return true;
		}
	}
	else
	{
		*uParam0 = -1;
		if (func_675(-1) && func_238())
		{
			func_581(&uVar1, 1);
		}
		return true;
	}
	return false;
}

Vector3 func_956()
{
	if (!func_950())
	{
		if (Local_57[iVar6150]->f_12 == -1 || func_354(*Global_2097152->f_6035[Local_57[iVar6150]->f_12]))
		{
			vVar0 = { Global_3145858->f_196 };
		}
		else if (func_8() && Global_2892896->f_19 > 1)
		{
			vVar0 = { func_871(Local_57[iVar6150]->f_3, Local_57[iVar6150]->f_6, 0) };
		}
		else
		{
			vVar0 = { *Global_2097152->f_6035[Local_57[iVar6150]->f_12] };
			if (Global_2097152->f_6485 == 1)
			{
				vVar0 = { *vLocal_8336[Local_57[iVar6150]->f_12] };
			}
		}
	}
	else if (!(func_675(-1) && iVar8323 != -1))
	{
		vVar0 = { func_1369() };
	}
	else if (func_354(vLocal_8326))
	{
		iVar3 = int_to_participantindex(iVar8323);
		if (func_233(iVar8323, iVar3))
		{
			iVar4 = network_get_player_index(iVar3);
			vLocal_8326 = { func_1370(iVar4) };
			vVar0 = { vLocal_8326 };
		}
		else
		{
			iLocal_8325 = -1;
			vVar0 = { func_871(Local_57[iVar6150]->f_3, Local_57[iVar6150]->f_6, 0) };
		}
	}
	else
	{
		vVar0 = { vLocal_8326 };
	}
	vLocal_8333 = { vVar0 };
	return vVar0;
}

bool func_957()
{
	iVar0 = func_967();
	iVar1 = func_1371();
	iVar2 = func_1372(-1);
	iVar3 = Local_57[iVar6150]->f_3;
	iVar4 = Local_57[iVar6150]->f_6;
	if (iVar0 == 1)
	{
		if (!is_bit_set(iVar13506, 20))
		{
			vVar5 = { func_1373(1) };
			iVar8 = _create_volume_sphere(vVar5, 0f, 0f, 0f, 25f, 25f, 25f);
			iLocal_8130 = func_1374(iVar8, 1, &Local_7498, 1, 1065353216, 1, 1, 2);
			iVar9 = func_843(vVar5);
			if (func_83())
			{
				fVar10 = Global_2097152->f_258[iVar9]->f_1[iVar4]->f_4;
				fVar11 = (fVar10 * 2f);
				if (fVar11 > 15f)
				{
					fVar11 = 15f;
				}
				iVar12 = _create_volume_sphere(Global_2097152->f_258[iVar9]->f_1[iVar4]->f_1, 0f, 0f, 0f, fVar11, fVar11, fVar11);
				func_1374(iVar12, 0, &Local_7498, 1, 1065353216, 1, 1, 2);
			}
			func_1375();
			func_1376(vVar5, &Local_7498);
			if (func_203(18))
			{
				func_1377(func_871(iVar9, iVar4, 0), &Local_7498);
			}
			else
			{
				func_1377(func_871(iVar3, iVar4, 0), &Local_7498);
			}
			func_1378(iVar0);
			set_bit(&uLocal_13508, 20);
		}
		return true;
	}
	if ((iVar3 == 1 && Local_57[iVar6157]->f_4 == 0) || iVar0 == 2)
	{
		if (!is_bit_set(iVar13506, 20))
		{
			vVar13 = { func_871(iVar3, iVar4, 0) };
			if (Global_2097152->f_6198 != 0)
			{
				iVar20 = 0;
				while (iVar20 <= 2)
				{
					if (!is_bit_set(Global_2097152->f_6198, iVar20) || func_354(*Global_2097152->f_258[0]->f_1[0]->f_8[iVar20]))
					{
					}
					else
					{
						if (&Global_2097152->f_258[0]->f_1[0]->f_18[iVar20] != 0f)
						{
							fVar21 = &Global_2097152->f_258[0]->f_1[0]->f_18[iVar20];
						}
						else
						{
							fVar21 = func_1379(*Global_2097152->f_258[0]->f_1[0]->f_8[iVar20], vVar13, 1);
						}
						func_1380(*Global_2097152->f_258[0]->f_1[0]->f_8[iVar20], &Local_7498, fVar21);
						if (func_354(vVar16))
						{
							vVar16 = { *Global_2097152->f_258[0]->f_1[0]->f_8[iVar20] };
							fVar19 = fVar21;
						}
					}
					iVar20++;
				}
			}
			if (Global_2097152->f_6198 == 0 || func_354(vVar16))
			{
				vVar16 = { func_1381(iVar6150) };
				if (Local_57[iVar6150]->f_12 != -1)
				{
					fVar19 = &Global_2097152->f_6132[Local_57[iVar6150]->f_12];
				}
				else if (!func_354(*Global_2097152->f_6035[0]))
				{
					fVar19 = &Global_2097152->f_6132[0];
				}
				else
				{
					fVar19 = func_1379(vVar16, vVar13, 1);
				}
				func_1380(vVar16, &Local_7498, fVar19);
			}
			iVar22 = _create_volume_sphere(vVar16, 0f, 0f, 0f, 10f, 10f, 10f);
			iLocal_8130 = func_1374(iVar22, 1, &Local_7498, 1, 1065353216, 0, 1, 2);
			func_1375();
			func_1376(vVar16, &Local_7498);
			func_1382(fVar19, &Local_7498);
			func_1378(iVar0);
			set_bit(&uLocal_13508, 20);
		}
		return true;
	}
	else
	{
		if (!is_bit_set(iVar13506, 20))
		{
			if (is_bit_set(iVar13506, 20))
			{
				func_114(0);
			}
			iLocal_8130 = func_1374(func_1383(iVar1, iVar2, 0), 1, &Local_7498, 1, 1065353216, 1, 1, 2);
			if ((Global_2097152->f_31 == 628988510 || Global_2097152->f_32 == 218185167) || Global_2097152->f_32 == -1185533313)
			{
				iVar23 = _create_volume_sphere(func_871(iVar1, iVar2, 0), 0f, 0f, 0f, 2f, 2f, 2f);
				func_1374(iVar23, 0, &Local_7498, 1, 1065353216, 0, 0, 0);
			}
			func_1375();
			func_1376(func_871(iVar1, iVar2, 0), &Local_7498);
			iVar24 = 0;
			while (iVar24 <= 2)
			{
				if (!func_354(*Global_2097152->f_258[iVar1]->f_1[iVar2]->f_8[iVar24]))
				{
					if (&Global_2097152->f_258[iVar1]->f_1[iVar2]->f_18[iVar24] != 0f)
					{
						fVar25 = &Global_2097152->f_258[iVar1]->f_1[iVar2]->f_18[iVar24];
					}
					else
					{
						fVar25 = func_1379(*Global_2097152->f_258[iVar1]->f_1[iVar2]->f_8[iVar24], func_871(iVar3, iVar4, 0), 1);
					}
					func_1380(*Global_2097152->f_258[iVar1]->f_1[iVar2]->f_8[iVar24], &Local_7498, fVar25);
				}
				iVar24++;
			}
			func_1378(iVar0);
			if (Global_2097152->f_258[iVar1]->f_1[iVar2]->f_5 != 0f)
			{
				func_1382(Global_2097152->f_258[iVar1]->f_1[iVar2]->f_5, &Local_7498);
			}
			else
			{
				func_1377(func_871(iVar3, iVar4, 0), &Local_7498);
			}
			set_bit(&uLocal_13508, 20);
		}
		return true;
	}
	return false;
}

void func_958(var uParam0)
{
	if (!is_bit_set(uParam0->f_624, 1))
	{
		set_bit(&(uParam0->f_624), 1);
	}
	if (is_bit_set(uParam0->f_624, 0))
	{
		clear_bit(&(uParam0->f_624), 0);
	}
}

void func_959()
{
	func_351(85);
}

void func_960(int iParam0)
{
	func_351(86);
	Global_1102219->f_3846 = iParam0;
}

void func_961(bool bParam0)
{
	iVar0 = 0;
	switch (Global_2097152->f_31)
	{
		case 149530285:
			func_115(bParam0, 1);
			func_1384(iVar6149);
			break;
		case -1742691940:
		case 628988510:
			if (bParam0)
			{
				iVar0 = Global_2097152->f_35;
				if (is_bit_set(Global_2097152->f_253, 4) && func_1385())
				{
					iVar0 = 0;
				}
				else if (iVar0 == 0)
				{
					bParam0 = false;
				}
			}
			func_117(iVar0, bParam0, 1);
			func_1384(iVar6149);
			break;
	}
}

void func_962(bool bParam0)
{
	if (bParam0)
	{
		func_351(129);
	}
	else
	{
		func_352(129);
	}
}

void func_963(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_1386(vParam0, uParam3))
	{
		func_49(1, bParam4);
	}
}

void func_964()
{
	if (!func_1387(255))
	{
		return;
	}
	if (func_1388() > 0)
	{
		iLocal_8131 = iVar8129 + 1;
		func_1389(&Local_7498, 0);
		func_1390(iVar8129);
	}
	func_1391(&Local_7498);
}

bool func_965()
{
	if (func_675(-1) && iVar8323 != -1)
	{
		if (!is_bit_set(Local_57[iVar8323]->f_13, 0))
		{
			if (!func_268(&uLocal_8329))
			{
				func_272(&uLocal_8329, 0, 0);
			}
			else if (func_269(&uLocal_8329, 0, 0) >= 20000)
			{
				return true;
			}
			return false;
		}
		else if (func_268(&uLocal_8329))
		{
			func_270(&uLocal_8329);
		}
		iVar1 = int_to_participantindex(iVar8323);
		if (func_233(iVar8323, iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			if (func_230(iVar2))
			{
				iVar3 = get_player_ped(iVar2);
				if (is_ped_on_mount(iVar3))
				{
					iVar0 = get_mount(iVar3);
				}
			}
		}
		if ((!is_ped_injured(iVar0) && !_is_mount_seat_free(iVar0, -1)) && _is_mount_seat_free(iVar0, 0))
		{
			task_mount_animal(iVar6147, iVar0, 1, 0, 2f, 16, 0, 0);
			func_1392(iVar0, 0);
		}
		else if (!func_268(&uLocal_8331))
		{
			func_272(&uLocal_8331, 0, 0);
			return false;
		}
		else if (func_269(&uLocal_8331, 0, 0) < 10000)
		{
			return false;
		}
		else if (Global_2097152->f_31 == 149530285)
		{
			if (!func_1393(&bVar4) && !bVar4)
			{
				return false;
			}
		}
	}
	return true;
}

void func_966(bool bParam0)
{
	if (bParam0)
	{
		_0x442b4347b6ec36e8(iVar6146, 0, false);
	}
	switch (Global_2097152->f_31)
	{
		case 149530285:
			func_1394(bParam0);
			break;
		case -1742691940:
		case 628988510:
			func_1395();
			break;
	}
	func_1282(-1);
}

int func_967()
{
	iVar0 = 0;
	if (func_745())
	{
		if (is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 5))
		{
			iVar0 = 1;
		}
		else if (is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 6))
		{
			iVar0 = 2;
		}
	}
	else if (func_203(2))
	{
		iVar0 = 1;
	}
	else if (func_203(3))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_968()
{
	if (is_ped_on_mount(iVar6147))
	{
		iVar0 = get_mount(iVar6147);
	}
	else if (is_ped_in_any_vehicle(iVar6147, false))
	{
		iVar0 = get_vehicle_ped_is_in(iVar6147, false);
	}
	else
	{
		iVar0 = iVar6147;
	}
	if (is_entity_in_air(iVar0, 1))
	{
		return false;
	}
	if (Global_2097152->f_31 != 628988510 && is_entity_in_water(iVar0))
	{
		return false;
	}
	if (func_1396())
	{
		return false;
	}
	return true;
}

void func_969(int iParam0, int iParam1)
{
	bVar0 = func_239(iParam0, iParam1);
	if (bVar0)
	{
		if (network_is_game_in_progress())
		{
			set_ped_can_be_targetted_by_team(iVar6145, iParam1, false);
		}
	}
	else if (network_is_game_in_progress())
	{
		set_ped_can_be_targetted_by_team(iVar6145, iParam1, true);
	}
	if (bVar0)
	{
		func_970(iParam1, 2);
	}
	else
	{
		func_970(iParam1, 0);
	}
}

void func_970(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if ((func_233(iVar0, iVar1) && !func_235(iVar0)) && Local_57[iVar0]->f_9 == iParam0)
		{
			if (iVar0 != iVar6148)
			{
				iVar2 = network_get_player_index(iVar1);
				if (network_is_player_active(iVar2))
				{
					func_1013(iVar0, iVar2, iParam1);
					func_1015(iVar0, func_1014(iParam0, 0, iParam1 == 2));
					func_1016(iVar0, func_240(iParam0, 0, iParam1 == 2));
				}
			}
			else
			{
				func_1016(iVar0, 1105014447);
			}
		}
		iVar0++;
	}
}

void func_971(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0) && !is_ped_injured(iParam0))
		{
			set_ped_config_flag(iParam0, 265, true);
			set_ped_max_time_underwater(iParam0, -1f);
			set_ped_config_flag(iParam0, 267, true);
		}
	}
}

bool func_972()
{
	if (func_745())
	{
		return is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 0);
	}
	return is_bit_set(Global_2097152->f_253, 1);
}

bool func_973()
{
	if (func_745())
	{
		return is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 10);
	}
	return is_bit_set(Global_2097152->f_253, 7);
}

void func_974(int iParam0, bool bParam1)
{
	if (!func_435(109))
	{
		return;
	}
	Global_1102219->f_3671 = iParam0;
	if (!Global_1296859->f_12 && bParam1)
	{
		func_431(16);
	}
}

void func_975(int* iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (func_844(iParam3, iParam1, 0) || is_bit_set(Global_2097152->f_258[iParam1]->f_76, 2))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!func_354(Global_2097152->f_258[iParam1]->f_1[iVar0]->f_1) && !is_bit_set(Global_2097152->f_258[iParam1]->f_1[iVar0]->f_23, iVar6153))
			{
				set_bit(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else if (!func_354(Global_2097152->f_258[iParam1]->f_1[iParam2]->f_1) && !is_bit_set(Global_2097152->f_258[iParam1]->f_1[iParam2]->f_23, iVar6153))
	{
		set_bit(iParam0, iParam2);
	}
	else
	{
		iParam2 = 0;
		if (iParam2 > -1)
		{
			set_bit(iParam0, iParam2);
		}
	}
	if (*iParam0 == 0)
	{
		iParam2 = func_1397(vParam4, iParam1, 0, 0);
		if (iParam2 > -1)
		{
			set_bit(iParam0, iParam2);
		}
		else
		{
			set_bit(iParam0, 0);
		}
	}
}

int func_976(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = Local_57[iVar6156]->f_3 + 1;
	}
	else
	{
		iVar0 = iParam0 + 1;
	}
	if (iVar0 >= Global_2097152->f_255)
	{
		if (!func_278(Local_57[iVar6149]->f_4))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = -1;
		}
	}
	if (iVar0 >= (Global_2097152->f_255 - 1) && Global_2097152->f_6483 > -1)
	{
		if (!func_278(Local_57[iVar6156]->f_4))
		{
			if (Local_57[iVar6149]->f_4 >= (Global_2097152->f_6483 - 1))
			{
				if (Global_2097152->f_6482 > -1)
				{
					iVar0 = Global_2097152->f_6482;
				}
				else
				{
					iVar0 = 1;
				}
			}
		}
		else
		{
			iVar0 = -1;
		}
	}
	if (func_1158())
	{
		if (func_278(Local_57[iVar6156]->f_4))
		{
			if (iParam0 == (iVar8430 - 1))
			{
				iVar0 = -1;
			}
		}
	}
	return iVar0;
}

void func_977(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 <= 149)
		{
			if (bParam2)
			{
				if (does_entity_exist(&(uLocal_9056[iVar0])))
				{
					if (func_846(&(uLocal_9056[iVar0])))
					{
						func_1398(iVar0);
					}
				}
			}
			func_807(&(Local_57[iVar6154]->f_40), iVar0);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 29)
		{
			if (bParam2)
			{
				if (_does_propset_exist(&(uLocal_9840[iVar0])))
				{
					func_1399(iVar0);
				}
			}
			set_bit(&(Local_57[iVar6154]->f_46), iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				iVar2 = &Global_2097152->f_258[iParam0]->f_1[iVar0]->f_25[iVar1];
				if (iVar2 != -1)
				{
					func_807(&(Local_57[iVar6154]->f_40), iVar2);
				}
				iVar1++;
			}
			iVar3 = Global_2097152->f_258[iParam0]->f_1[iVar0]->f_33;
			if (iVar3 != -1)
			{
				set_bit(&(Local_57[iVar6154]->f_46), iVar3);
			}
			iVar0++;
		}
	}
}

void func_978(int iParam0, bool bParam1)
{
	if (func_83())
	{
		if (bParam1)
		{
			if (!func_950())
			{
				iVar1 = 1;
				if (func_334())
				{
					iVar1 = 2;
				}
				iVar0 = 1;
				while (iVar0 <= (Global_2097152->f_255 - iVar1))
				{
					func_1400(iVar0, 0, 408396114, iVar0 < (Global_2097152->f_255 - 1));
					iVar0++;
				}
			}
			else
			{
				iVar0 = 1;
				while (iVar0 <= (Global_2097152->f_255 - 1))
				{
					if (func_984(&uLocal_12113, iVar0))
					{
					}
					else
					{
						if (iVar0 < (Global_2097152->f_255 - 1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = func_833(Local_57[iVar6148]->f_3);
						}
						func_1400(iVar0, 0, 408396114, bVar2);
					}
					iVar0++;
				}
			}
		}
		else if (iParam0 >= (Global_2097152->f_255 - 1))
		{
			func_1400(iParam0, 0, 408396114, 1);
		}
	}
	else
	{
		iVar3 = func_976(iParam0);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (is_bit_set(Local_57[iVar6155]->f_7, iVar0))
			{
				func_1400(iParam0, iVar0, 408396114, 1);
			}
			else
			{
				func_469(iParam0, iVar0, 0);
			}
			if (iVar3 > -1)
			{
				if (!func_203(5))
				{
					if (is_bit_set(Local_57[iVar6155]->f_8, iVar0))
					{
						func_1400(iVar3, iVar0, 681199565, 1);
					}
					else
					{
						func_469(iVar3, iVar0, 0);
					}
				}
				else if (func_203(15))
				{
					if (is_bit_set(Local_57[iVar6155]->f_8, iVar0))
					{
						if (is_bit_set(Global_2097152->f_258[iVar3]->f_76, 9))
						{
							func_1401(iVar3, iVar0, 681199565);
						}
						else
						{
							func_1402(iVar3, iVar0, 681199565);
						}
					}
					else
					{
						func_806(iVar3, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

struct<12> func_979(bool bParam0)
{
	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	if (!bParam0)
	{
		Var0 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_41;
		Var0.f_1 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_42;
		Var0.f_4 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_43;
		Var0.f_5 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_44;
		Var0.f_8 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_45;
		Var0.f_9 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_46;
		Var0.f_2 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_47;
		Var0.f_3 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_48;
		Var0.f_6 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_49;
		Var0.f_7 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_50;
		Var0.f_10 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_51;
		Var0.f_11 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_52;
	}
	else
	{
		if (Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_53 == 2)
		{
			iVar12 = get_entity_health(iVar6146);
			Var0 = 3;
			Var0.f_1 = iVar12;
		}
		else
		{
			Var0 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_53;
			Var0.f_1 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_54;
		}
		Var0.f_4 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_55;
		Var0.f_5 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_56;
		Var0.f_8 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_57;
		Var0.f_9 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_58;
		Var0.f_2 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_59;
		Var0.f_3 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_60;
		Var0.f_6 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_61;
		Var0.f_7 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_62;
		Var0.f_10 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_63;
		Var0.f_11 = Global_3145858->f_49704[Local_57[iVar6149]->f_10]->f_64;
	}
	return Var0;
}

void func_980(struct<12> Param0, var uParam12)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1403(&(Global_1139381->f_4796), Param0, uParam12);
}

void func_981(int iParam0)
{
	if (is_bit_set(iParam0, 0))
	{
		func_1404(352539363, -2131931188);
	}
	if (is_bit_set(iParam0, 1))
	{
		func_1404(352539363, -1356583879);
	}
	if (is_bit_set(iParam0, 2))
	{
		func_1404(352539363, 1500545235);
	}
	if (is_bit_set(iParam0, 3))
	{
		func_1404(352539363, -1952291530);
	}
	if (is_bit_set(iParam0, 4))
	{
		func_1404(352539363, -974857798);
	}
	if (is_bit_set(iParam0, 5))
	{
		func_1404(352539363, -132268497);
	}
	if (is_bit_set(iParam0, 6))
	{
		func_1404(352539363, -900341092);
	}
	if (is_bit_set(iParam0, 7))
	{
		func_1404(352539363, -1140308479);
	}
	if (is_bit_set(iParam0, 8))
	{
		func_1404(352539363, 785001351);
	}
	if (is_bit_set(iParam0, 9))
	{
		func_1404(352539363, 549687162);
	}
	if (is_bit_set(iParam0, 10))
	{
		func_1404(352539363, -300915357);
	}
}

bool func_982()
{
	if (func_745())
	{
		return is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 9);
	}
	return func_203(8);
}

void func_983(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Local_57[iVar6148]->f_5 = func_269(&(Local_57[iVar6148]->f_22), 0, 0);
		func_272(&(Local_57[iVar6148]->f_22), 0, 0);
	}
}

bool func_984(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	return is_bit_set(uParam0[iVar0], (iParam1 - iVar0 * 32));
}

void func_985(var uParam0, bool bParam1)
{
	bVar0 = uParam0->f_8 > -1;
	bVar1 = ((is_bit_set(uParam0->f_12, 0) || Global_3145858->f_60002 == 0) || Global_3145858->f_60002 == 3);
	bVar2 = is_bit_set(uParam0->f_12, 3);
	iVar3 = 1;
	if (bParam1)
	{
		if (Global_3145858->f_60002 == 3)
		{
			if (!bVar0)
			{
				func_1405(*uParam0);
				return;
			}
		}
		if (func_1406(uParam0->f_12))
		{
			remove_all_ped_weapons(*uParam0, true, true);
		}
		else
		{
			func_1405(*uParam0);
			return;
		}
		if (func_1407(uParam0->f_12))
		{
			_0x1b83c0deebcbb214(*uParam0);
		}
		else
		{
			iVar3 = 0;
		}
	}
	else
	{
		remove_all_ped_weapons(*uParam0, true, true);
		_0x1b83c0deebcbb214(*uParam0);
	}
	switch (Global_3145858->f_60002)
	{
		case 0:
			func_1408(uParam0, iVar3);
			break;
		case 1:
			if (bVar0)
			{
				func_1409(uParam0, bVar1, bParam1);
				if (bParam1 && bVar2)
				{
					func_1410(uParam0->f_9);
				}
			}
			break;
		case 2:
			if (bVar1)
			{
				func_1408(uParam0, iVar3);
			}
			if (bVar0)
			{
				func_1409(uParam0, bVar1, bParam1);
			}
			break;
		case 3:
			func_1408(uParam0, iVar3);
			if (bVar0)
			{
				func_1409(uParam0, 0, bParam1);
			}
			break;
	}
	func_1411(uParam0, bParam1, bVar1);
	if (func_1412(uParam0->f_18.f_10))
	{
		if (_0xb881ca836cc4b6d4(&(uParam0->f_18)))
		{
			if (get_ped_ammo_by_type(*uParam0, uParam0->f_18.f_10) != 0)
			{
				_0xebe46b501bc3fbcf(*uParam0, &(uParam0->f_18), uParam0->f_18.f_10);
			}
			else
			{
				uParam0->f_18.f_10 = 0;
			}
		}
	}
	if (func_1412(uParam0->f_18.f_11))
	{
		if (_0xb881ca836cc4b6d4(&(uParam0->f_18.f_4)))
		{
			if (get_ped_ammo_by_type(*uParam0, uParam0->f_18.f_11) != 0)
			{
				_0xebe46b501bc3fbcf(*uParam0, &(uParam0->f_18.f_4), uParam0->f_18.f_11);
			}
			else
			{
				uParam0->f_18.f_11 = 0;
			}
		}
	}
	_0x0a2ab7b7abc055f4(*uParam0);
	if (Global_3145858->f_60002 != 1)
	{
		func_1413(uParam0);
	}
	if (func_84(32))
	{
		func_202(uParam0->f_1, 1);
	}
	if ((!func_1414(Global_524288->f_40400) || func_407()) || func_1415())
	{
		func_1416(0);
	}
	func_212(is_bit_set(uParam0->f_12, 8));
}

void func_986(var uParam0)
{
	bVar2 = true;
	if (Global_3145858->f_60002 != 3)
	{
		if (is_bit_set(uParam0->f_12, 4) || Global_3145858->f_60002 == 0)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = func_84(9);
	if (bVar0 || bVar2)
	{
		_0x644ccb76a76cfbd6(0, 0, bVar0, bVar2, 0, 1);
		if (bVar0)
		{
			func_1417(1);
			func_1418(1);
			if (!bVar1)
			{
				func_1419(1);
			}
			else
			{
				func_1420();
			}
		}
	}
	func_1421(1);
	func_1422(uParam0->f_9);
}

int func_987(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		iVar0 = func_1423(iParam0, 0, 1, 0);
		if (iVar0 != 0 && iVar0 != -1569615261)
		{
			_0x5230d3f6ee56cfe6(iParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_988(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar7 = (Global_3145858->f_282 - 1);
	if (func_407())
	{
		if ((Global_2097152->f_6316 - 1) > -1)
		{
			iVar7 = (Global_2097152->f_6316 - 1);
		}
	}
	func_130(0);
	bVar2 = func_84(3);
	bVar3 = ((func_1414(Global_524288->f_40400) && func_1424() == -504335712) || func_84(74));
	bVar4 = !(bParam1 && func_84(35));
	bVar5 = (func_84(77) || bParam3);
	if (bParam1)
	{
		if (func_84(34) || (bParam2 && !bVar3))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (!bVar2 && iParam0 > -1)
		{
			iVar6 = 0;
			while (iVar6 <= iVar7)
			{
				if (Global_3145858->f_60008 == 0 || iParam0 == iVar6)
				{
					func_1425(iVar6, &bVar1, iParam0);
				}
				iVar6++;
			}
		}
		else if (iParam0 <= -1)
		{
		}
		if (bVar3 || bVar2)
		{
			func_287(262144);
			func_178();
		}
		else if (Global_3145858->f_60008 > 0 && bVar4)
		{
			func_287(1048576);
			func_1426(to_float(Global_3145858->f_60008));
		}
		else if (!bVar1)
		{
		}
	}
	if (bParam1)
	{
		if (func_84(34) || (bParam2 && !bVar3))
		{
			func_287(4194304);
		}
		if (func_84(35))
		{
			func_287(2097152);
		}
	}
	else if (bVar5)
	{
		func_287(16777216);
	}
}

void func_989()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Local_6163[iVar0]->f_3 && network_is_player_active(Local_6163[iVar0]->f_4)) && is_bit_set(Local_5197.f_26, 4))
		{
			func_1427(iVar0, Local_6163[iVar0]->f_4);
		}
		iVar0++;
	}
}

void func_990(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 - (Global_17411.f_55.f_61.f_582 && iParam0));
}

void func_991(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1428(iParam0, iParam2);
	_0x78b3d19af6391a55(iParam1, sVar0);
}

void func_992()
{
	if (func_84(70))
	{
		start_audio_scene("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene");
	}
}

void func_993(var uParam0, var uParam1)
{
	if (uParam0->f_3 == 0)
	{
		return;
	}
	if (_0xd4636c2edb0dea8a(uParam0->f_3))
	{
		*uParam1 = _0xfa50f79257745e74(*uParam0, 2f, 1, -1, 0);
	}
	else if (func_8())
	{
		create_model_hide(*uParam0, 0.1f, uParam0->f_3, true);
	}
	else
	{
		create_model_hide_excluding_script_objects(*uParam0, 0.1f, uParam0->f_3, true);
	}
	if (!is_bit_set(uParam0->f_4, 0))
	{
		fVar0 = 1.75f;
		iVar1 = _create_volume_box_with_custom_name(*uParam0, uParam0->f_5, uParam0->f_8 * Vector(fVar0, fVar0, fVar0), "Temp Cover Blocker");
		_0xeb2ed1dc3aec0654(iVar1, 0, 0, 1, 1);
		_delete_volume(iVar1);
	}
}

void func_994(int iParam0, int iParam1)
{
	func_1429(iParam0, iParam1);
	iVar0 = _inventory_get_ped_inventory_id(iParam1);
	bVar2 = false;
	Var3 = { func_485() };
	Var7 = { func_485() };
	Var11.f_9 = -1591664384;
	Var33.f_9 = -1591664384;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		_copy_memory(&Var11, &Var33, 22);
		Var55 = { func_1430(iVar1, iVar0) };
		if (_0xb881ca836cc4b6d4(&Var55))
		{
			if (!_0x025a1b1fb03fbf61(iVar0, &Var55, &Var11, 22, 1))
			{
			}
			else if (Var11.f_4 == -1569615261)
			{
			}
			else
			{
				if (iVar1 == 0 || (!bVar2 && iVar1 == 5))
				{
					Var3 = { Var55 };
					bVar2 = true;
					Jump @235; //curOff = 182
				}
				else if (iVar1 == 1)
				{
					set_ped_combat_attributes(iParam1, 116, true);
					Var7 = { Var55 };
				}
				else
				{
					_0x12fb95fe3d579238(iParam1, &Var55, 1, iVar1, 0, 0);
					Var55 = { func_485() };
				}
			}
			iVar1++;
			if (_0xb881ca836cc4b6d4(&Var3))
			{
				_0x12fb95fe3d579238(iParam1, &Var3, 1, 0, 0, 0);
			}
			if (_0xb881ca836cc4b6d4(&Var7))
			{
				_0x12fb95fe3d579238(iParam1, &Var7, 1, 1, 0, 0);
			}
		}
	}
}

void func_995(int iParam0)
{
	iLocal_7272 = iParam0;
}

bool func_996(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

void func_997()
{
	if (!is_ped_on_mount(iVar6147) || func_652(255))
	{
		return;
	}
	iVar0 = get_mount(iVar6147);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	set_ped_config_flag(iVar0, 174, false);
}

void func_998(int iParam0, int iParam1)
{
	if (is_bit_set(iVar13505, 4))
	{
		func_186();
		func_978(iParam0, 0);
		iLocal_6154 = iParam0;
	}
	else if (iVar6150 != iParam0)
	{
		if (iVar6150 != -1)
		{
			func_1431(iVar6150, iParam1);
			if (!func_203(20) && !func_833(iVar6150))
			{
				use_particle_fx_asset("scr_net_race_checkpoints");
				start_particle_fx_non_looped_at_coord("scr_net_race_checkpoint", Global_2097152->f_258[iVar6150]->f_1[iParam1]->f_1, 0f, 0f, 0f, 1f, false, false, false);
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_469(iVar6150, iVar0, 0);
				iVar0++;
			}
		}
		func_978(iParam0, 0);
		iLocal_6154 = iParam0;
	}
}

bool func_999(int iParam0, int iParam1)
{
	return (func_471(iParam0, iParam1) || Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33 != -1);
}

void func_1000(int iParam0, int iParam1, bool bParam2)
{
	if (func_1432(iParam0))
	{
		if (is_bit_set(iVar13503, 15))
		{
			*bParam2 = 1;
			iLocal_12118 = 0;
		}
	}
	else if (func_1001(iVar6144, iParam0, iParam1) && !is_bit_set(iVar13503, 15))
	{
		set_bit(&uLocal_13509, 8);
	}
	else if (is_bit_set(iVar13503, 15))
	{
		*bParam2 = 1;
		iLocal_12118 = 0;
		clear_bit(&uLocal_13509, 8);
	}
	else if (is_bit_set(iVar13504, 8))
	{
		bVar0 = true;
		*bParam2 = 1;
		iLocal_12118 = 0;
		clear_bit(&uLocal_13509, 8);
	}
	if (bVar0)
	{
		if (func_471(iParam0, iParam1))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (does_entity_exist(&(uLocal_9056[&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar1]])))
				{
					delete_object(uLocal_9056[&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar1]]);
				}
				iVar1++;
			}
		}
		sVar2 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_32;
		StringCopy(&cVar3, _create_var_string(2, "RC_RM_TIMPEN", sVar2), 8);
		func_515(&cVar3, 0, -2, 0, 0, 0, 0);
		iLocal_13963 = (iVar13958 + Global_2097152->f_258[iParam0]->f_1[iParam1]->f_32 * 1000);
	}
}

bool func_1001(int iParam0, int iParam1, int iParam2)
{
	vVar1 = { get_entity_coords(iParam0, true, false) };
	vVar4 = { Global_2097152->f_258[iParam1]->f_1[iParam2]->f_1 };
	fVar7 = Global_2097152->f_258[iParam1]->f_1[iParam2]->f_4;
	switch (&Global_2097152->f_258[iParam1]->f_1[iParam2])
	{
		case 0:
			if (((func_833(iParam1) && func_1433(iParam1, &uVar8, &uVar9) != 2) && Global_2097152->f_32 != 1744858848) && Global_2097152->f_32 != -1185533313)
			{
				vVar14 = { func_871(func_841(iParam1), iParam2, 0) };
				vVar10 = { vVar4 - vVar4 - vVar14 };
				fVar13 = func_1379(vVar4, vVar10, 1);
				if (is_bit_set(Global_2097152->f_258[iParam1]->f_76, 0))
				{
					fVar13 = Global_2097152->f_258[iParam1]->f_1[iParam2]->f_5;
				}
				if (!func_354(Global_2097152->f_6012))
				{
					vVar4 = { _get_object_offset_from_coords(vVar4, fVar13, Global_2097152->f_6012) };
				}
				if (func_1433(iParam1, &uVar8, &uVar9) == -1880054030)
				{
					vVar17 = { _get_object_offset_from_coords(vVar4, fVar13, -fVar7, 0f, 0f) };
					vVar20 = { _get_object_offset_from_coords(vVar4, fVar13, fVar7, 0f, 0f) };
				}
				else if (func_1433(iParam1, &uVar8, &uVar9) == -1390686937)
				{
					vVar17 = { _get_object_offset_from_coords(vVar4, fVar13, -(fVar7 / 2.35f), 0f, 0f) };
					vVar20 = { _get_object_offset_from_coords(vVar4, fVar13, (fVar7 / 2.35f), 0f, 0f) };
				}
				else
				{
					vVar17 = { _get_object_offset_from_coords(vVar4, fVar13, -(fVar7 / 2.5f), 0f, 0f) };
					vVar20 = { _get_object_offset_from_coords(vVar4, fVar13, (fVar7 / 2.5f), 0f, 0f) };
				}
				vVar20.f_2 = (vVar20.z + 5f);
				if (is_entity_in_angled_area(iParam0, vVar17, vVar20, 2.25f, true, true, 0))
				{
					iVar0 = 1;
				}
			}
			else if (fVar7379 < (fVar7 * fVar7))
			{
				iVar0 = 1;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

void func_1002(bool bParam0)
{
	if (func_238())
	{
		iVar0 = Local_57[iVar6149]->f_9;
		switch (func_951())
		{
			case 1:
				if (Local_57[iVar6149]->f_4 < &Local_5197.f_577[iVar0] || (Local_57[iVar6149]->f_3 < &Local_5197.f_560[iVar0] && Local_57[iVar6149]->f_4 == &Local_5197.f_577[iVar0]))
				{
					*bParam0 = 1;
				}
				break;
			case 2:
				break;
			case 0:
				break;
		}
	}
}

void func_1003(int iParam0, int iParam1)
{
	func_807(&uLocal_12113, iParam0);
	iLocal_12116 = iParam0;
	clear_bit(&uLocal_13508, 15);
	iVar0 = iParam0;
	if (func_83())
	{
		iVar0 = Local_57[iVar6148]->f_3;
	}
	func_1434(iVar0, func_269(&(Local_5197.f_159), 0, 0), Local_57[iVar6148]->f_4);
	func_1431(iParam0, iParam1);
	iVar1 = Local_57[iVar6148]->f_3;
	iVar2 = Global_2097152->f_258[iParam0]->f_78;
	if (iVar2 != -1)
	{
		func_1435(iVar2);
	}
	Local_57[iVar6148]->f_3++;
	uLocal_12117 = iVar12113 + 1;
	func_1436();
	if (func_967() == 0)
	{
		func_114(0);
	}
	if (Local_57[iVar6148]->f_24 == 1)
	{
		Local_57[iVar6148]->f_26++;
		if (Global_2097152->f_6023 > 0 && Local_57[iVar6148]->f_3 > Global_2097152->f_6024)
		{
			func_335("RC_ELIMTCL", 1105014447, 5000, 0, 0, 0, 1);
		}
	}
	if (func_1158())
	{
		if (Local_57[iVar6148]->f_3 >= Global_2097152->f_255)
		{
			Local_57[iVar6148]->f_3 = 1;
		}
	}
	bVar3 = false;
	if (func_1437())
	{
		if (func_278(Local_57[iVar6148]->f_4))
		{
			func_1438(1);
			bVar3 = true;
			func_294(0);
			set_bit(&(Local_57[iVar6148]->f_13), 3);
			set_bit(&(Local_57[iVar6148]->f_13), 4);
		}
		else
		{
			func_1438(0);
			func_983(Local_57[iVar6148]->f_3, 1);
		}
	}
	else
	{
		func_983(Local_57[iVar6148]->f_3, 1);
		if (!func_203(20))
		{
			use_particle_fx_asset("scr_net_race_checkpoints");
			start_particle_fx_non_looped_at_coord("scr_net_race_checkpoint", Global_2097152->f_258[iParam0]->f_1[iParam1]->f_1, 0f, 0f, 0f, 1f, false, false, false);
		}
	}
	if (Local_57[iVar6148]->f_3 > -1)
	{
		Local_57[iVar6148]->f_6 = func_1439(iParam1, iParam0);
		iLocal_12119 = Local_57[iVar6148]->f_6;
		if (func_844(iVar1, Local_57[iVar6148]->f_3, 0))
		{
			set_bit(&uLocal_13486, 5);
		}
	}
	fLocal_7384 = func_533(iVar6155, get_entity_coords(iVar6145, true, false), Local_57[iVar6148]->f_3, &iParam1, 1, 0);
	if (!bVar3)
	{
		iVar4 = 0;
		while (iVar4 < 2)
		{
			func_469(iParam0, iVar4, 0);
			iVar5 = func_841(iParam0);
			func_470(iVar5, iVar4);
			iVar4++;
		}
		func_978(Local_57[iVar6148]->f_3, 0);
		if (func_833(Local_57[iVar6148]->f_3))
		{
			if (func_83())
			{
				sVar6 = "RC_TO_FINISH";
				if (func_334())
				{
					sVar6 = "RC_FINAL_TARGET";
				}
				func_831(sVar6, -2, 0, 0, 0, 1);
			}
			else
			{
				func_831("RC_TO_FINISHS", -2, 0, 0, 0, 1);
			}
		}
	}
	set_bit(&uLocal_13508, 5);
}

void func_1004(int iParam0, var uParam1, bool bParam2)
{
	if (!func_203(1))
	{
		if (func_231(255))
		{
			if (is_bit_set(Local_57[iVar6154]->f_13, 18))
			{
				_databinding_write_data_bool(&(Local_12276.f_12[11]), true);
			}
			else
			{
				_databinding_write_data_bool(&(Local_12276.f_12[11]), false);
			}
			return;
		}
		if (bVar6145 && !func_652(255))
		{
			fVar0 = 25f;
			fVar1 = 9f;
			iVar2 = 2000;
			if (iVar8304 != 0)
			{
				iLocal_13494 = 0;
				return;
			}
			if (bParam2)
			{
				switch (iVar13489)
				{
					case 0:
						iLocal_13494 = 1;
						func_270(&uLocal_13495);
						fLocal_13497 = fVar7379;
						break;
					case 1:
						fLocal_13497 = fVar7379;
						break;
					case 2:
					case 3:
						fLocal_13498 = fVar7379;
						fLocal_13499 = (fVar13493 - fVar1);
						break;
				}
			}
			iVar3 = func_1397(get_entity_coords(iVar6144, true, false), iParam0, 0, 0);
			switch (iVar13489)
			{
				case 0:
					fVar4 = vdist2(Local_57[iVar6154]->f_14, func_871(iParam0, iVar3, 1));
					func_270(&uLocal_13495);
					if (fVar7379 < fVar4)
					{
						iLocal_13494 = 1;
						fLocal_13497 = fVar7379;
					}
					else if (fVar7379 > (fVar4 + fVar0))
					{
						iLocal_13494 = 2;
						fLocal_13498 = fVar7379;
						fLocal_13499 = (fVar13493 - fVar1);
					}
					break;
				case 1:
					if (fVar7379 < fVar13492)
					{
						fLocal_13497 = fVar7379;
					}
					else if (fVar7379 > (fVar13492 + fVar0))
					{
						iLocal_13494 = 2;
						fLocal_13498 = fVar7379;
						fLocal_13499 = (fVar13493 - fVar1);
					}
					if (is_bit_set(Local_57[iVar6147]->f_13, 18))
					{
						_databinding_write_data_bool(&(Local_12276.f_12[11]), false);
						clear_bit(&(Local_57[iVar6147]->f_13), 18);
					}
					break;
				case 2:
				case 3:
					iVar5 = 0;
					while (iVar5 < 2)
					{
						if (is_bit_set(Local_57[iVar6154]->f_7, iVar5))
						{
							iVar6++;
						}
						iVar5++;
					}
					iVar5 = 0;
					while (iVar5 < iVar6)
					{
						if (func_1440(iParam0, iVar5))
						{
							bVar7 = true;
						}
						iVar5++;
					}
					if (fVar7379 < fVar13494 || bVar7)
					{
						iLocal_13494 = 1;
						fLocal_13497 = fVar7379;
						func_270(&uLocal_13495);
						_databinding_write_data_bool(&(Local_12276.f_12[11]), false);
						if (is_bit_set(Local_57[iVar6147]->f_13, 18))
						{
							clear_bit(&(Local_57[iVar6147]->f_13), 18);
						}
					}
					else
					{
						if (fVar7379 > fVar13493)
						{
							fLocal_13498 = fVar7379;
							fLocal_13499 = (fVar13493 - fVar1);
						}
						if (iVar13489 == 2)
						{
							if (!func_268(&uLocal_13495))
							{
								func_272(&uLocal_13495, 0, 0);
							}
							else if (func_269(&uLocal_13495, 0, 0) >= iVar2)
							{
								iLocal_13494 = 3;
								func_270(&uLocal_13495);
								_databinding_write_data_bool(&(Local_12276.f_12[11]), true);
								if (!is_bit_set(Local_57[iVar6147]->f_13, 18))
								{
									set_bit(&(Local_57[iVar6147]->f_13), 18);
								}
							}
						}
					}
					break;
			}
		}
		else if (iVar13489 != 0)
		{
			iLocal_13494 = 0;
			func_270(&uLocal_13495);
			_databinding_write_data_bool(&(Local_12276.f_12[11]), false);
			if (is_bit_set(Local_57[iVar6147]->f_13, 18))
			{
				clear_bit(&(Local_57[iVar6147]->f_13), 18);
			}
		}
	}
}

void func_1005()
{
	iVar0 = 0;
	while (iVar0 < Global_2097152->f_6199)
	{
		if (!is_bit_set(iVar13506, 5) && !is_bit_set(Local_7111.f_31, iVar0))
		{
		}
		else if (!is_bit_set(Local_7111.f_6, iVar0) || is_bit_set(Local_7111.f_7, iVar0))
		{
		}
		else
		{
			iVar1 = Global_2097152->f_6200[iVar0]->f_7;
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar2 = Global_2097152->f_6200[iVar0]->f_8;
				if (Local_5197.f_542 >= iVar1 && Local_5197.f_541 >= iVar2)
				{
					func_185(iVar0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_1006()
{
	if (iVar7109 == 0)
	{
		if (Local_7111.f_3 != Local_5197.f_542)
		{
			Local_7111.f_3 = Local_5197.f_542;
		}
		if (Local_7111.f_4 != Local_5197.f_541)
		{
			Local_7111.f_4 = Local_5197.f_541;
		}
	}
	func_934(iVar7109, 0);
	Local_7111 = iVar7109 + 1;
	if (iVar7109 >= Global_2097152->f_6199)
	{
		Local_7111 = 0;
		Local_7111.f_5 = -1;
		if (Local_7111.f_1 != Local_7111.f_3)
		{
			Local_7111.f_1 = Local_7111.f_3;
		}
		if (Local_7111.f_2 != Local_7111.f_4)
		{
			Local_7111.f_2 = Local_7111.f_4;
		}
	}
}

void func_1007()
{
	if (Local_7111.f_5 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2097152->f_6199 - 1))
		{
			if (!is_bit_set(Local_7111.f_9, iVar0))
			{
			}
			else
			{
				Local_7111.f_5 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	func_934(Local_7111.f_5, 0);
	if (Local_7111.f_9 == 0)
	{
		Local_7111.f_5 = -1;
		return;
	}
	Local_7111.f_5++;
	if (Local_7111.f_5 >= Global_2097152->f_6199)
	{
		Local_7111.f_5 = -1;
		return;
	}
	iVar1 = -1;
	iVar0 = Local_7111.f_5;
	while (iVar0 <= (Global_2097152->f_6199 - 1))
	{
		if (!is_bit_set(Local_7111.f_9, iVar0))
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		Local_7111.f_5 = -1;
		return;
	}
	else
	{
		Local_7111.f_5 = iVar1;
	}
}

void func_1008()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_6199 - 1))
	{
		if (!is_bit_set(Local_7111.f_6, iVar0))
		{
		}
		else
		{
			func_1441(Local_7111.f_32[iVar0]);
			if (!is_bit_set(Local_7111.f_8, iVar0))
			{
			}
			else
			{
				switch (Global_2097152->f_6200[iVar0]->f_3)
				{
					case 101474539:
						if (func_234(255))
						{
						}
						else
						{
							func_114(0);
							clear_bit(&(Local_7111.f_8), iVar0);
						}
				}
			}
		}
		iVar0++;
	}
}

bool func_1009(int iParam0, int iParam1)
{
	if (&iLocal_6840[iParam1] != -1)
	{
		return false;
	}
	if (func_527(iParam1))
	{
		return false;
	}
	if (!is_bit_set(Local_5197.f_742, iParam1))
	{
		return false;
	}
	iVar0 = int_to_participantindex(iParam0);
	if (&Local_5197.f_709[iParam1] != iVar0)
	{
		return false;
	}
	return true;
}

void func_1010(int iParam0, int iParam1, int iParam2)
{
	if (func_238())
	{
		switch (func_951())
		{
			case 1:
				if (Local_57[iParam0]->f_4 > &Local_5197.f_577[iParam1] || (Local_57[iParam0]->f_3 > &Local_5197.f_560[iParam1] && Local_57[iParam0]->f_4 == &Local_5197.f_577[iParam1]))
				{
					Local_5197.f_560[iParam1] = Local_57[iParam0]->f_3;
					Local_5197.f_577[iParam1] = Local_57[iParam0]->f_4;
				}
				break;
			case 2:
				if (Local_57[iParam0]->f_4 < &iLocal_7474[iParam1] || (Local_57[iParam0]->f_3 < &iLocal_7457[iParam1] && Local_57[iParam0]->f_4 == &iLocal_7474[iParam1]))
				{
					iLocal_7474[iParam1] = Local_57[iParam0]->f_4;
					iLocal_7457[iParam1] = Local_57[iParam0]->f_3;
				}
				break;
			case 0:
				func_1442(iParam0, iParam2);
				break;
		}
	}
	if (Local_5197.f_172 > 0)
	{
		func_1443(iParam0, iParam2);
	}
}

void func_1011(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_2097152->f_258[iParam0]->f_77 != 0)
	{
		func_1444(&(Local_5197.f_594), Global_2097152->f_258[iParam0]->f_77, -1, 3);
	}
	if (!is_bit_set(Local_5197.f_26, 7))
	{
		if (func_278(iParam1))
		{
			iVar0 = iParam0 + 1;
			if (iVar0 >= Global_2097152->f_255)
			{
				set_bit(&(Local_5197.f_26), 7);
			}
		}
	}
	if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 3))
	{
		func_1445(&(Local_5197.f_594), 0);
	}
	else if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 4))
	{
		func_1445(&(Local_5197.f_594), 1);
	}
	if (bParam2)
	{
		if (Local_5197.f_167 > 0)
		{
			if ((Local_5197.f_47 + Local_5197.f_65) > Global_2097152->f_6019)
			{
				if (Global_2097152->f_6022 > 0)
				{
					if (func_268(&(Local_5197.f_170)))
					{
						func_1064(Local_5197.f_167);
					}
					func_272(&(Local_5197.f_170), 0, 1);
				}
				else
				{
					func_1064(Local_5197.f_167);
				}
			}
			else
			{
				func_270(&(Local_5197.f_170));
			}
		}
	}
	if (is_bit_set(Global_2097152->f_253, 2))
	{
		iVar1 = func_841(iParam0);
		if (Local_57[iParam3]->f_5 > 0)
		{
			if (iVar1 >= Global_2097152->f_6024)
			{
				if (iVar1 > 0)
				{
					Local_5197.f_174[(iVar1 - 1)] = (Local_57[iParam3]->f_5 + Global_2097152->f_6023);
				}
			}
		}
	}
}

void func_1012(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_1172(uParam0, iVar1, iParam2);
}

void func_1013(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case default:
			func_1446(iParam1);
			break;
		case 1:
			func_1447(iParam1);
			break;
		case 2:
			func_1448(iParam1);
			break;
	}
}

int func_1014(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (bParam2)
		{
			return func_1449();
		}
		else
		{
			return func_1450();
		}
	}
	switch (iParam0)
	{
		case 0:
			return -1926234334;
		case 1:
			return -324452845;
		case 2:
			return 978868600;
		case 3:
			return 1209431284;
		case 4:
			return 364744771;
		case 5:
			return -1581930451;
		case 6:
			return -210318418;
		case 7:
			return 1782892786;
		default:
			break;
	}
	return 2087220824;
}

void func_1015(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_4 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
			}
		}
		Global_1071686->f_21689[iParam0]->f_4 = iParam1;
		func_458(iParam0);
	}
}

void func_1016(int iParam0, int iParam1)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = iParam1;
		func_458(iParam0);
	}
}

void func_1017()
{
	switch (func_951())
	{
		case 2:
			iVar52 = 0;
			while (iVar52 <= (Local_5197.f_46 - 1))
			{
				if (&Local_5197.f_577[iVar52] != &iLocal_7474[iVar52] || &Local_5197.f_560[iVar52] != &iLocal_7457[iVar52])
				{
					Local_5197.f_577[iVar52] = &iLocal_7474[iVar52];
					Local_5197.f_560[iVar52] = &iLocal_7457[iVar52];
				}
				iVar52++;
			}
		case 1:
			iVar54 = 0;
			while (iVar54 <= (Local_5197.f_46 - 1))
			{
				iVar34[iVar54] = -1;
				Local_5197.f_543[iVar54] = -1;
				iVar54++;
			}
			iVar52 = 0;
			while (iVar52 <= (Local_5197.f_46 - 1))
			{
				iVar53 = -1;
				iVar54 = 0;
				while (iVar54 <= (Local_5197.f_46 - 1))
				{
					if (iVar53 == -1)
					{
						if (&iVar34[iVar54] == -1)
						{
							iVar34[iVar54] = iVar52;
							Local_5197.f_543[iVar52] = iVar54;
							Jump @376; //curOff = 271
						}
						else if (func_1451(iVar52, &(iVar34[iVar54])))
						{
							iVar53 = &iVar34[iVar54];
							iVar34[iVar54] = iVar52;
							Local_5197.f_543[iVar52] = iVar54;
						}
					}
					else
					{
						iVar55 = &iVar34[iVar54];
						iVar34[iVar54] = iVar53;
						Local_5197.f_543[iVar53] = iVar54;
						if (iVar55 != -1)
						{
							iVar53 = iVar55;
						}
					else
					{
						}
						else
						{
							iVar54++;
						}
						iVar52++;
						Jump @746; //curOff = 385
						iVar51 = 0;
						while (iVar51 <= (iVar7454 - 1))
						{
							if (&iLocal_7423[iVar51] != -1)
							{
								iVar52 = Local_57[&iLocal_7423[iVar51]]->f_9;
								if (iVar52 != -1)
								{
									fVar0[iVar52] = (&fVar0[iVar52] + func_1113(iVar51));
									uVar17[iVar52] = &uVar17[iVar52] + 1;
								}
							}
							iVar51++;
						}
						iVar54 = 0;
						while (iVar54 <= (Local_5197.f_46 - 1))
						{
							iVar34[iVar54] = -1;
							Local_5197.f_543[iVar54] = -1;
							iVar54++;
						}
						iVar52 = 0;
						while (iVar52 <= (Local_5197.f_46 - 1))
						{
							if (&uVar17[iVar52] > 0)
							{
								fVar0[iVar52] = (&fVar0[iVar52] / to_float(&(uVar17[iVar52])));
								iVar53 = -1;
								iVar54 = 0;
								while (iVar54 <= (Local_5197.f_46 - 1))
								{
									if (iVar53 == -1)
									{
										if (&iVar34[iVar54] == -1)
										{
											iVar34[iVar54] = iVar52;
											Local_5197.f_543[iVar52] = iVar54;
											Jump @731; //curOff = 619
										}
										else if (&fVar0[iVar52] > &fVar0[&iVar34[iVar54]])
										{
											iVar53 = &iVar34[iVar54];
											iVar34[iVar54] = iVar52;
											Local_5197.f_543[iVar52] = iVar54;
										}
									}
									else
									{
										iVar55 = &iVar34[iVar54];
										iVar34[iVar54] = iVar53;
										Local_5197.f_543[iVar53] = iVar54;
										if (iVar55 != -1)
										{
											iVar53 = iVar55;
										}
									else
									{
										}
										else
										{
											iVar54++;
										}
										iVar52++;
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

bool func_1018()
{
	if (iVar7381 > 1)
	{
		return (to_float(Local_5197.f_65) / to_float((iVar7381 - Local_5197.f_83))) >= 0.5f;
	}
	return false;
}

bool func_1019(int iParam0)
{
	if (is_bit_set(Local_5197.f_516, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1020(int iParam0, bool bParam1)
{
	iVar0 = Global_3145858->f_453[iParam0]->f_43;
	if (!bParam1)
	{
		if (!is_model_valid(iVar0))
		{
			return false;
		}
		if (!func_750(iVar0))
		{
			return false;
		}
		if (!func_1452(-1821507459, iParam0))
		{
			return false;
		}
	}
	if (!func_1128(Local_5197.f_238[iParam0], iVar0, func_1026(iParam0), func_1453(iParam0), 1, 0, 1, 1, 1))
	{
		return false;
	}
	iVar1 = net_to_ped(&(Local_5197.f_238[iParam0]));
	func_1454(iVar1, iParam0);
	set_bit(&(Local_5197.f_538), iParam0);
	if (func_1455(iVar1))
	{
		set_bit(&(Local_5197.f_540), iParam0);
	}
	if (!bParam1)
	{
		set_model_as_no_longer_needed(iVar0);
		func_1456();
	}
	if (Global_3145858->f_453[iParam0]->f_162 != -1)
	{
		if (does_group_exist(&(Local_5197.f_238.f_203[Global_3145858->f_453[iParam0]->f_162])))
		{
			iVar2 = &Local_5197.f_238.f_203[Global_3145858->f_453[iParam0]->f_162];
		}
		else
		{
			iVar2 = create_group(0);
			Local_5197.f_238.f_203[Global_3145858->f_453[iParam0]->f_162] = iVar2;
		}
		if (is_bit_set(Global_3145858->f_453[iParam0]->f_12, 12))
		{
			set_ped_as_group_leader(iVar1, iVar2, false);
		}
		else
		{
			set_ped_as_group_member(iVar1, iVar2);
		}
	}
	return true;
}

void func_1021(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	func_1457(uParam1, &uVar0);
	if (!bParam3)
	{
		func_1458(uParam1, &Var2, iParam2);
		Var2 = func_1459(uParam1->f_4);
		Var2.f_4 = func_1460(uParam1->f_5);
		Var2.f_5 = func_1461(uParam1->f_6);
	}
	if (iParam2 == -1 && !bParam3)
	{
		Var2 = func_1459(-1);
		Var2.f_4 = func_1460(-1);
		Var2.f_5 = func_1461(-1);
	}
	func_1462(iParam0, &uVar0, &Var2, 0, 1);
	if (!bParam3)
	{
		iVar10 = 0;
		while (iVar10 <= (2 - 1))
		{
			iVar11 = iVar10;
			func_1463(iParam0, *uParam1->f_10[iVar11], iVar11);
			iVar10++;
		}
	}
}

void func_1022(int iParam0)
{
	if (Global_3145858->f_453[iParam0]->f_20 > 0f)
	{
		if (Global_3145858->f_453[iParam0]->f_20 == 50f)
		{
			func_1464(iParam0, 3);
		}
		else
		{
			func_1464(iParam0, 2);
		}
	}
}

void func_1023(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7)
{
	func_1465(iParam1, 0);
	set_ped_flee_attributes(iParam1, 4194304, bParam6);
	set_ped_flee_attributes(iParam1, 1024, true);
	set_ped_flee_attributes(iParam1, 65536, bParam6);
	set_ped_flee_attributes(iParam1, 2048, false);
	set_ped_flee_attributes(iParam1, 32768, false);
	set_ped_flee_attributes(iParam1, 131072, true);
	set_ped_flee_attributes(iParam1, 512, false);
	set_ped_combat_attributes(iParam1, 17, true);
	set_ped_combat_attributes(iParam1, 5, false);
	set_ped_combat_attributes(iParam1, 1, !bParam6);
	set_ped_combat_attributes(iParam1, 3, bParam6);
	set_ped_combat_attributes(iParam1, 58, false);
	if (iParam0 == 1627542854)
	{
		if (bParam6)
		{
			iVar0 |= 1;
		}
		if (bParam7)
		{
			iVar0 |= 67108864;
		}
		if (!func_354(vParam3))
		{
			_task_smart_flee_style_coord(iParam1, vParam3, 4, iVar0, -1082130432, -1, 0);
		}
		else
		{
			_task_smart_flee_style_ped(iParam1, iParam2, 4, iVar0, -1082130432, -1, 0);
		}
	}
	else if (iParam0 == -1821507459)
	{
		bVar1 = 66048;
		if (!func_354(vParam3))
		{
			task_smart_flee_coord(iParam1, vParam3, 300f, -1, bVar1, 1077936128);
		}
		else
		{
			task_smart_flee_ped(iParam1, iParam2, 300f, -1, bVar1, 1077936128, 0);
		}
	}
}

void func_1024(int iParam0, int iParam1)
{
	if (Global_3145858->f_453[iParam0]->f_160 == 2)
	{
		if (!is_bit_set(iVar9044, iParam0))
		{
			set_ped_config_flag(iParam1, 112, true);
			set_bit(&uLocal_9048, iParam0);
		}
	}
	if (is_bit_set(Global_3145858->f_453[iParam0]->f_15, 10))
	{
		set_ped_seeing_range(iParam1, 150f);
		set_ped_combat_range(iParam1, 2);
	}
	if ((is_ped_in_combat(iParam1, 0) || is_ped_fleeing(iParam1)) || !func_1025(iParam1, 1120685857))
	{
		return;
	}
	task_combat_hated_targets_in_area(iParam1, get_entity_coords(iParam1, true, false), 299f, 0, 16);
}

bool func_1025(int iParam0, int iParam1)
{
	iVar1 = get_script_task_status(iParam0, iParam1, true);
	if (iVar1 == 1 || iVar1 == 0)
	{
		bVar0 = true;
	}
	return !bVar0;
}

Vector3 func_1026(int iParam0)
{
	return Global_3145858->f_453[iParam0]->f_16;
}

bool func_1027(int iParam0)
{
	if (is_bit_set(Local_5197.f_516.f_1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1028(int iParam0, bool bParam1)
{
	iVar0 = Global_3145858->f_36480[iParam0]->f_1;
	if (!bParam1)
	{
		if (iVar0 == 0)
		{
			return false;
		}
		if (!func_748(iParam0))
		{
			return false;
		}
		if (!func_1452(465509728, iParam0))
		{
			return false;
		}
	}
	bVar4 = !is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 20);
	if (!func_1466(Local_5197.f_238.f_33[iParam0], iVar0, func_746(iParam0), is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 1), is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 4), 1, bVar4, 0))
	{
		return false;
	}
	func_1467(net_to_veh(&(Local_5197.f_238.f_33[iParam0])), iParam0);
	set_bit(&(Local_5197.f_539), iParam0);
	if (!bParam1)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = _0x8df5f6a19f99f0d5(iVar0, iVar2);
			if (has_model_loaded(iVar3))
			{
				set_model_as_no_longer_needed(iVar3);
			}
			iVar2++;
		}
		func_1456();
	}
	return true;
}

int func_1029(var uParam0, int iParam1, int iParam2)
{
	if (func_353(uParam0->f_3, 8))
	{
		return 0;
	}
	iVar1 = -1749618580;
	if (*uParam0 != 0)
	{
		iVar1 = *uParam0;
	}
	iVar0 = _blip_add_for_entity(iVar1, iParam1);
	if (uParam0->f_2 != 0)
	{
		_blip_set_modifier(iVar0, uParam0->f_2);
	}
	if (uParam0->f_1 != 0)
	{
		set_blip_sprite(iVar0, uParam0->f_1, true);
	}
	if (func_353(uParam0->f_3, 16))
	{
		_blip_set_modifier(iVar0, 313075017);
	}
	if (func_353(uParam0->f_3, 4))
	{
		_blip_set_modifier(iVar0, -1878373110);
	}
	func_1468(iVar0, iParam2);
	return iVar0;
}

void func_1030(int iParam0, int iParam1)
{
	if (is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 17))
	{
		if (is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 19))
		{
			if (network_has_control_of_entity(iParam0))
			{
				network_disable_proximity_migration(veh_to_net(iParam0));
			}
			func_1469(&iVar0, &iVar1);
			if (network_is_host() && !network_has_control_of_entity(iParam0))
			{
				network_request_control_of_entity(iParam0);
			}
			if (func_269(&uLocal_13688, 0, 0) >= 5000 || (!func_268(&uLocal_13688) && func_268(&(Local_57[iVar6148]->f_18))))
			{
				func_272(&uLocal_13688, 0, 0);
				if (does_entity_exist(iVar0) && iVar1 != -1)
				{
					vVar2 = { get_entity_coords(iParam0, true, false) };
					vVar5 = { Global_2097152->f_258[Local_57[iVar1]->f_29]->f_1[0]->f_1 };
					fVar8 = get_distance_between_coords(vVar2, vVar5, true);
					uLocal_13685[iParam1] = floor((fVar8 / get_entity_speed(iParam0))) * 1000;
					iVar10 = Local_57[iVar1]->f_29;
					if (iVar10 == Global_2097152->f_255)
					{
						iVar10 = (iVar10 - 1);
					}
					fVar9 = vdist(get_entity_coords(iVar0, true, false), Global_2097152->f_258[iVar10]->f_1[Local_57[iVar1]->f_6]->f_1);
					fVar11 = 7f;
					fVar12 = 3f;
					fVar13 = func_1470(fVar11, fVar12, (to_float(Local_57[iVar1]->f_3) / to_float(Global_2097152->f_255)));
					fVar14 = ((fVar9 / get_entity_speed(iVar0)) + fVar13);
					fVar15 = func_1471((fVar8 / fVar14), 6f, 20f);
					if (!bVar6141)
					{
						return;
					}
					set_train_cruise_speed(iParam0, fVar15);
				}
			}
		}
	}
}

void func_1031(int iParam0, int iParam1)
{
	if (is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 21) && func_1472())
	{
		if (!func_476(Local_13690.f_5))
		{
			Local_13690.f_5 = func_1473("RC_TRN_SHC", -403992187, iVar6145, 1, 0, 0, 0, 3, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			Local_13690.f_3 = 0;
			Local_13690.f_4 = 0;
			set_bit(&uLocal_13508, 31);
		}
		if (is_bit_set(iVar13504, 31))
		{
			if (is_gameplay_hint_active())
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, -2032700426, false);
				disable_control_action(0, 2120975890, false);
				disable_control_action(0, 1301263553, false);
				disable_control_action(0, 1885667965, false);
				disable_control_action(0, -1260100172, false);
				disable_control_action(0, -1882188328, false);
				disable_control_action(0, -1882188328, false);
				disable_control_action(0, 1002303471, false);
			}
			else
			{
				clear_bit(&uLocal_13508, 31);
			}
		}
		set_bit(&uLocal_13698, 0);
		func_1474(&Local_13690, iParam0, 0f, 0f, 0f, 500f, 500, 1500, 1000, 1, 0);
	}
	else
	{
		clear_bit(&uLocal_13698, 0);
		func_477(&(Local_13690.f_5), 1, 0);
	}
}

bool func_1032(int iParam0)
{
	return (is_bit_set(iVar12117, iParam0) || is_bit_set(Local_5197.f_609, iParam0));
}

bool func_1033(int iParam0)
{
	if (Global_2097152->f_6501[iParam0]->f_44 == 0)
	{
		return false;
	}
	if (is_bit_set(iVar12117, iParam0))
	{
		return false;
	}
	if ((func_745() && Global_2097152->f_6501[iParam0]->f_2 != Local_57[iVar6156]->f_9) && Global_2097152->f_6501[iParam0]->f_2 != -1)
	{
		return false;
	}
	return true;
}

bool func_1034(int iParam0)
{
	if (&Global_2097152->f_6501[iParam0] == 0)
	{
		return true;
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 0))
	{
		if (!func_1475(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 1))
	{
		if (!func_1476(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 2))
	{
		if (!func_1477(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 3))
	{
		if (!func_1478(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 4))
	{
		if (!func_1479(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 5))
	{
		if (Global_2097152->f_6501[iParam0]->f_38 != -1)
		{
			if (!is_bit_set(iVar12117, Global_2097152->f_6501[iParam0]->f_38))
			{
				return false;
			}
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 6))
	{
		if (!func_1480(iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(&(Global_2097152->f_6501[iParam0]), 7))
	{
		if (!func_1481(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_1035(int iParam0)
{
	return is_bit_set(iVar12118, iParam0);
}

void func_1036(int iParam0)
{
	func_1482(iParam0, Global_2097152->f_6501[iParam0]->f_43);
}

bool func_1037(int iParam0)
{
	return (is_bit_set(Local_5197.f_608, iParam0) && !is_bit_set(Local_5197.f_609, iParam0));
}

void func_1038(int iParam0)
{
	if (is_bit_set(Local_5197.f_609, iParam0))
	{
		func_270(Local_12189[iParam0]);
		return;
	}
	if (bVar6142)
	{
		set_bit(&(Local_5197.f_609), iParam0);
		func_270(Local_12189[iParam0]);
		return;
	}
	if (func_268(Local_12189[iParam0]))
	{
		if (func_269(Local_12189[iParam0], 0, 0) < 5000)
		{
			return;
		}
	}
	func_1483(iParam0);
	func_272(Local_12189[iParam0], 0, 0);
}

bool func_1039(int iParam0)
{
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 0))
	{
		if (!func_1034(iParam0))
		{
			return true;
		}
	}
	if (Global_2097152->f_6501[iParam0]->f_4 != -1)
	{
		if (func_268(Local_5197.f_610[iParam0]) && func_1072(Local_5197.f_610[iParam0], Global_2097152->f_6501[iParam0]->f_4 * 1000, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1040(int iParam0)
{
	iLocal_12122 = 1;
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 0))
	{
		func_1484(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 1))
	{
		func_1485(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 3))
	{
		func_1486(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 4))
	{
		func_1487(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 5))
	{
		func_1488(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 6))
	{
		func_1489(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 7))
	{
		func_1490(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 8))
	{
		func_1491(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 9))
	{
		func_1492(iParam0);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_44, 10))
	{
		func_1493(iParam0);
	}
	if (bVar12119)
	{
		set_bit(&uLocal_12120, iParam0);
	}
	if (Global_2097152->f_6501[iParam0]->f_4 != -1)
	{
		func_272(Local_5197.f_610[iParam0], 0, 0);
	}
}

void func_1041(int iParam0)
{
	clear_bit(&uLocal_12123, iParam0);
}

void func_1042()
{
	func_366(&(Global_1071686->f_22973.f_3), 4);
}

void func_1043()
{
	func_366(&(Global_1071686->f_22973.f_3), 16);
}

void func_1044()
{
	if (!func_84(10))
	{
		if (!is_bit_set(iVar13507, 19))
		{
			set_ped_config_flag(iVar6147, 472, true);
			set_bit(&uLocal_13509, 19);
		}
		set_ped_reset_flag(iVar6147, 129, true);
		set_ped_reset_flag(iVar6147, 219, true);
		set_ped_reset_flag(iVar6147, 220, true);
	}
}

void func_1045()
{
	if (is_bit_set(iVar13507, 14))
	{
		if (!is_ped_injured(iVar6147) && func_1494(255))
		{
			if ((_is_ped_getting_into_a_mount_seat(iVar6147, true) || is_ped_in_any_vehicle(iVar6147, false)) || Global_2097152->f_31 == -500771278)
			{
				Var0.f_4 = 3;
				Var0.f_8 = -1;
				Var0.f_9 = -1;
				Var0.f_10 = -1;
				Var0.f_11 = 1;
				Var0.f_42.f_1 = -1;
				Var0.f_42.f_3 = -1082130432;
				Var0.f_42.f_4 = 2;
				Var0.f_42.f_5 = -1082130432;
				Var0.f_42.f_7 = -1082130432;
				Var0.f_42.f_9 = -1082130432;
				Var0.f_42.f_11 = -1082130432;
				Var0.f_54.f_2 = -1;
				Var0.f_54.f_5 = -1;
				Var0 = { func_922(1, 0) };
				func_985(&Var0, 1);
				clear_bit(&uLocal_13509, 14);
			}
		}
	}
	if (func_1260(-1))
	{
		return;
	}
	if (!is_bit_set(iVar13506, 7))
	{
		if (!bVar6148)
		{
			func_1495();
			set_bit(&uLocal_13508, 7);
			set_bit(&uLocal_13509, 14);
		}
		else
		{
			func_587(0);
		}
	}
	else if (bVar6148 && !func_652(255))
	{
		if (func_1496())
		{
			func_1497(1);
			clear_bit(&uLocal_13508, 7);
		}
	}
}

void func_1046()
{
	if (func_95())
	{
		if (func_1498(255))
		{
			func_112(0);
		}
		return;
	}
	if (!func_234(255))
	{
		func_1499();
		return;
	}
	if (is_bit_set(iVar13506, 10))
	{
		if (!func_1387(255))
		{
			return;
		}
		if (func_1500(Local_57[iVar6150]->f_9))
		{
			return;
		}
		clear_bit(&uLocal_13508, 10);
	}
	if (!func_957())
	{
		return;
	}
	if (!func_1498(255))
	{
		func_112(1);
	}
	func_964();
}

void func_1047()
{
	if (iVar8307 == 0)
	{
		if ((func_652(255) || func_267()) || func_1069())
		{
			func_196();
			return;
		}
		bVar0 = func_1501();
		if (!bVar0)
		{
			if (!func_1502())
			{
				func_196();
				return;
			}
		}
		if (!func_1503())
		{
			func_196();
			return;
		}
		if (is_control_pressed(0, 21798980) || bVar0)
		{
			if (func_1504(bVar0))
			{
				func_1495();
				if (!func_267())
				{
					func_62(0, 8);
					iLocal_8309 = 1;
				}
			}
		}
		else
		{
			func_196();
		}
	}
	if (iVar8307 == 1)
	{
		func_1505();
		iLocal_8309 = 2;
	}
	if (iVar8307 == 2)
	{
		if (func_652(255))
		{
			set_bit(&uLocal_13509, 14);
			iLocal_8309 = 3;
		}
	}
	if (iVar8307 == 3)
	{
		func_1506();
		if (!func_652(255))
		{
			if (func_1496())
			{
				do_screen_fade_in(0);
				iLocal_8309 = 4;
			}
		}
	}
	if (iVar8307 == 4)
	{
		if (is_screen_faded_in())
		{
			func_1507();
			iLocal_8309 = 5;
		}
	}
	if (iVar8307 == 5)
	{
		if (func_1508())
		{
			func_196();
			func_270(&uLocal_8312);
			func_270(&uLocal_8314);
			func_270(&uLocal_8316);
			iLocal_8309 = 0;
		}
	}
}

void func_1048()
{
	if (func_1509())
	{
		func_1506();
	}
	if (func_339())
	{
		disable_control_action(0, 440314811, false);
	}
	else if (!is_bit_set(iVar13507, 3))
	{
		set_ped_can_be_knocked_off_vehicle(iVar6147, 0);
		set_bit(&uLocal_13509, 3);
	}
	_0x8910c24b7e0046ec();
	set_cinematic_button_active(false);
	if (func_203(22))
	{
	}
	func_341(1024);
}

void func_1049()
{
	set_ped_reset_flag(iVar6147, 154, true);
	set_ped_reset_flag(iVar6147, 353, true);
	if (func_203(19))
	{
		set_ped_reset_flag(iVar6147, 349, true);
	}
	if (does_entity_exist(iVar6158))
	{
		set_ped_reset_flag(iVar6158, 214, true);
		set_ped_reset_flag(iVar6158, 154, true);
		if (func_203(19))
		{
			set_ped_reset_flag(iVar6158, 349, true);
		}
		if (func_203(24))
		{
			set_ped_reset_flag(iVar6158, 357, true);
		}
	}
	if (is_bit_set(iVar13506, 25))
	{
		set_ped_reset_flag(iVar6147, 128, true);
		report_police_spotted_player(iVar6144);
	}
	if (func_334())
	{
		set_ped_reset_flag(iVar6147, 347, true);
	}
}

void func_1050()
{
	if (!func_203(12) && Global_2097152->f_31 == 149530285)
	{
		if (func_268(&uLocal_13681) && func_269(&uLocal_13681, 0, 0) > 5000)
		{
			func_272(&uLocal_13681, 0, 0);
			func_1510(iVar6147, iVar6158, 1);
		}
		else if (!func_268(&uLocal_13681))
		{
			func_280(&uLocal_13681, 0, 0);
		}
		if (!func_268(&uLocal_13506))
		{
			if (does_entity_exist(iVar6158) && _0xaf61b3cd8c3b82c3(iVar6158))
			{
				set_air_drag_multiplier_for_players_vehicle(iVar6144, 0f);
				fLocal_13504 = 0f;
				if (!func_268(&uLocal_13683))
				{
					func_280(&uLocal_13683, 0, 0);
				}
			}
			else if (func_268(&uLocal_13683))
			{
				iVar0 = func_269(&uLocal_13683, 0, 0);
				func_271(-512460250, iVar0);
				func_270(&uLocal_13683);
			}
		}
		func_1511(&Local_13676, iVar6158, 1);
	}
	else if (Global_2097152->f_31 == -1742691940)
	{
		if (is_ped_in_any_vehicle(iVar6147, false))
		{
			if (_0xf57db8e83dcd8349(uVar6159))
			{
				if (!animpostfx_is_running("MP_RiderFormation"))
				{
					animpostfx_play("MP_RiderFormation");
				}
			}
			else if (animpostfx_is_running("MP_RiderFormation"))
			{
				_0xc5cb91d65852ed7e("MP_RiderFormation");
			}
		}
	}
}

void func_1051()
{
	if (func_1069())
	{
		if (!is_bit_set(iVar13484, 7))
		{
			if (func_630(0))
			{
				set_bit(&uLocal_13486, 7);
			}
		}
		if (func_1512())
		{
			func_169(0);
			func_171(7);
		}
	}
}

void func_1052()
{
	if (!func_84(31))
	{
		func_1513(250);
	}
}

void func_1053()
{
	if (((!is_bit_set(Local_57[iVar6150]->f_13, 22) || !func_268(&(Local_57[iVar6150]->f_18))) || func_269(&(Local_57[iVar6150]->f_18), 0, 0) < 30000) || !bVar6148)
	{
		if (is_bit_set(Local_57[iVar6150]->f_13, 23))
		{
			_0x71fa2d1880c48032(0);
			use_player_colour_instead_of_team_colour(false);
			clear_bit(&(Local_57[iVar6150]->f_13), 23);
		}
		return;
	}
	if (func_1514(30000))
	{
		if (!is_bit_set(Local_57[iVar6150]->f_13, 23))
		{
			_0x71fa2d1880c48032(1);
			use_player_colour_instead_of_team_colour(true);
			set_bit(&(Local_57[iVar6150]->f_13), 23);
		}
	}
	else if (is_bit_set(Local_57[iVar6150]->f_13, 23))
	{
		_0x71fa2d1880c48032(0);
		use_player_colour_instead_of_team_colour(false);
		clear_bit(&(Local_57[iVar6150]->f_13), 23);
	}
}

void func_1054()
{
	if (!func_339())
	{
		if (!is_bit_set(iVar13507, 5))
		{
			func_1515();
			set_bit(&uLocal_13509, 5);
		}
	}
	if (Local_5197.f_947 != -1)
	{
		func_197(Local_5197.f_947);
	}
	func_1516(&iVar0, &iVar1);
	if (iVar0 != -1 || iVar1 != -1)
	{
		func_478(iVar0, iVar1);
	}
	if (!is_bit_set(iVar13484, 2))
	{
		if (!func_338())
		{
			set_bit(&uLocal_13486, 2);
		}
		else if (&Global_3145858->f_57980[0]->f_3[0] != 0)
		{
			if (func_334())
			{
				if (func_83())
				{
					func_518("RC_SRH_OTLO", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_518("RC_SRH_TRLO", 10000, 0, 0, 0, 1);
				}
			}
			else if (iVar0 != 3 || iVar1 != 3)
			{
				func_518("RC_SRH_TMC", 10000, 0, 0, 0, 1);
			}
			set_bit(&uLocal_13486, 2);
		}
	}
	func_1517(iVar6147, &Local_13939, Local_57[iVar6150]->f_10);
}

void func_1055()
{
	if (func_268(&uLocal_13506))
	{
		if (func_1072(&uLocal_13506, 1000, 0))
		{
			func_270(&uLocal_13506);
			fVar0 = 1f;
			if (fVar13502 > 1f)
			{
				fVar0 = fVar13502;
			}
			set_air_drag_multiplier_for_players_vehicle(iVar6144, fVar0);
		}
	}
}

bool func_1056()
{
	iVar0 = 1;
	if (is_bit_set(Global_2097152->f_253, 0))
	{
		iVar0 = 0;
	}
	if (Local_5197.f_47 <= 1)
	{
		iVar0 = 0;
	}
	if (!func_268(&(Local_5197.f_159)) || func_269(&(Local_5197.f_159), 0, 0) <= 10000)
	{
		iVar0 = 0;
	}
	if (is_bit_set(Local_5197.f_26, 7))
	{
		iVar0 = 0;
	}
	if (&Local_57[iVar6150] != 5)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1057()
{
	if (!is_bit_set(iVar13506, 11))
	{
		set_bit(&uLocal_13508, 11);
		_0x09c28f828ee674fa(iVar6144, 0f, 1000);
	}
}

void func_1058(int iParam0)
{
	if (to_float(iParam0) / to_float(Local_5197.f_47)) > (Global_2097152->f_6475 * 0.01f)
	{
		if (func_269(&uLocal_12265, 0, 0) >= 1000 || !func_268(&uLocal_12265))
		{
			fVar0 = (Global_2097152->f_6473 * 0.01f);
			fVar1 = ((Global_2097152->f_6474 * 0.01f) * fVar0);
			fVar2 = (fVar0 - (IntToFloat((Local_5197.f_47 - iParam0)) * fVar1));
			fLocal_13503 = func_1471(fVar2, 0f, 1f);
			_0x09c28f828ee674fa(iVar6143, fVar13500, 1000);
			clear_bit(&uLocal_13508, 11);
			func_272(&uLocal_12265, 0, 0);
		}
	}
	if (!func_268(&uLocal_13506))
	{
		if (does_entity_exist(iVar6157))
		{
			if ((to_float((iParam0 - 1)) / to_float(Local_5197.f_47)) < (Global_2097152->f_6478 * 0.01f) && !_0xaf61b3cd8c3b82c3(iVar6157))
			{
				if (is_ped_in_any_vehicle(iVar6146, false) || is_ped_on_mount(iVar6146))
				{
					fVar3 = Global_2097152->f_6476;
					fVar4 = ((Global_2097152->f_6477 * 0.01f) * fVar3);
					fLocal_13504 = func_1471((fVar3 - (IntToFloat((iParam0 - 1)) * fVar4)), 0f, 10f);
					set_air_drag_multiplier_for_players_vehicle(iVar6143, fVar13501);
				}
			}
			else
			{
				set_air_drag_multiplier_for_players_vehicle(iVar6143, 1f);
				fLocal_13504 = 1f;
			}
		}
	}
	if (to_float(iParam0) / to_float(Local_5197.f_47)) > (Global_2097152->f_6481 * 0.01f)
	{
		fVar5 = Global_2097152->f_6479;
		fVar6 = ((Global_2097152->f_6480 * 0.01f) * fVar5);
		fLocal_13505 = func_1471((fVar5 - (IntToFloat((Local_5197.f_47 - iParam0)) * fVar6)), 1f, 5f);
		_0xfeca17cf3343694b(iVar6143, uVar13502);
	}
}

void func_1059(int iParam0, int* iParam1)
{
	if (*iParam1 == 0)
	{
		return;
	}
	if (is_bit_set(*iParam1, 3))
	{
		iVar0 = _0x849bd6c6314793d0(*iParam0);
		if (is_ped_on_mount(*iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			func_1265(iVar1, 1, 100);
			func_275(1, 1f, 0);
		}
		else if (is_ped_in_any_vehicle(*iParam0, false))
		{
			iVar2 = get_vehicle_ped_is_in(*iParam0, false);
			if (is_vehicle_driveable(iVar2, false, false))
			{
				if (_is_draft_vehicle(iVar2))
				{
					if (_0xa19447d83294e29f(iVar2, &uVar3, &uVar4))
					{
						iVar5 = 0;
						while (iVar5 < 6)
						{
							iVar6 = iVar5;
							iVar7 = _get_ped_in_draft_seat(iVar2, iVar6);
							if (does_entity_exist(iVar7))
							{
								func_1265(iVar7, 1, 100);
								func_275(1, 1f, 0);
							}
							iVar5++;
						}
					}
				}
				else
				{
					func_1518(1, 1f, 1, 1);
				}
			}
		}
		clear_bit(iParam1, 3);
	}
	else if (is_bit_set(*iParam1, 6))
	{
		func_1519(-1185145312, 1, 752097756);
		_0x83b8d50eb9446bba(*iParam0, 1);
		func_513(-1185145312, 1, -1, 0);
		clear_bit(iParam1, 6);
	}
}

void func_1060(int iParam0)
{
	if (func_95() && !func_93(-1))
	{
		if (does_pickup_exist(&(uLocal_8637[iParam0])))
		{
			remove_pickup(&(uLocal_8637[iParam0]));
		}
		return;
	}
	if (func_1324(iParam0))
	{
		if (!does_pickup_exist(&(uLocal_8637[iParam0])))
		{
			bVar0 = true;
			if (!func_338())
			{
				bVar0 = func_1325(Global_3145858->f_6823[iParam0]->f_17);
			}
			iVar1 = 7;
			if (!func_1327(iParam0, &uLocal_8637, iVar1, &uLocal_8838, bVar0, 151, -1, 0, func_1326(iParam0)))
			{
			}
		}
	}
	else if (does_pickup_exist(&(uLocal_8637[iParam0])))
	{
		func_1520(&(uLocal_8637[iParam0]), iParam0);
	}
	iVar2 = get_weapon_type_from_pickup_type(Global_3145858->f_6823[iParam0]->f_17);
	bVar3 = true;
	iVar4 = func_1521(iVar2);
	if (iVar4 != -1)
	{
		if (has_ped_got_weapon(iVar6146, iVar2, 0, false) && func_461(iVar2))
		{
			iVar5 = get_ammo_in_ped_weapon(iVar6146, iVar2);
			if (func_1522(iVar2))
			{
				iVar6 = get_max_ammo_in_clip(player_ped_id(), iVar2, false);
				iVar5 = (iVar5 / iVar6);
			}
			if (iVar5 >= iVar4)
			{
				bVar3 = false;
			}
		}
	}
	_0x94f3d956bfaeae18(uVar6143, Global_3145858->f_6823[iParam0]->f_17, bVar3);
	if (!is_bit_set(Global_3145858->f_6823[iParam0]->f_13, 5))
	{
		func_1523(iParam0, bVar3);
	}
	func_1524(&uLocal_8637, &uLocal_9039, iParam0);
}

void func_1061(int iParam0)
{
	if (Global_3145858->f_18727[iParam0]->f_8 == 0)
	{
		return;
	}
	if (is_bit_set(iVar13505, 15))
	{
		return;
	}
	bVar0 = does_entity_exist(&(uLocal_9056[iParam0]));
	if (!bVar0)
	{
		if (Global_3145858->f_18727[iParam0]->f_72 > 0)
		{
			if (func_268(Local_9953[iParam0]) && func_269(Local_9953[iParam0], 0, 0) >= Global_3145858->f_18727[iParam0]->f_72)
			{
				bVar1 = true;
			}
			else
			{
				func_280(Local_9953[iParam0], 0, 0);
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			if (func_1525(iParam0, uLocal_9056[iParam0], 88243))
			{
				func_270(Local_9953[iParam0]);
			}
		}
		return;
	}
	if (!func_1266(Global_3145858->f_18727[iParam0]->f_8))
	{
		return;
	}
	bVar2 = is_entity_visible(&(uLocal_9056[iParam0]));
	bVar3 = func_984(&(Local_57[iVar6156]->f_40), iParam0);
	if (bVar2)
	{
		if (bVar3)
		{
			if (!is_bit_set(iVar13506, 4) && iVar6150 != -1)
			{
				func_1261(&(uLocal_9056[iParam0]));
			}
			func_1398(iParam0);
		}
	}
	else if (!bVar3)
	{
		func_1526(iParam0);
	}
}

void func_1062(int iParam0)
{
	if (network_does_network_id_exist(&(Local_5197.f_238.f_36[iParam0])))
	{
		iVar0 = net_to_obj(&(Local_5197.f_238.f_36[iParam0]));
		func_1527(&uLocal_13971, iVar0, iParam0);
	}
	if (!bVar6142)
	{
		return;
	}
	if (Global_3145858->f_18727[iParam0]->f_8 != 0)
	{
		if (Global_3145858->f_18727[iParam0]->f_72 > 0)
		{
			if (!network_does_network_id_exist(&(Local_5197.f_238.f_36[iParam0])) || has_object_been_broken(net_to_obj(&(Local_5197.f_238.f_36[iParam0]))))
			{
				if (func_268(Local_9953[iParam0]))
				{
					if (func_269(Local_9953[iParam0], 0, 0) >= Global_3145858->f_18727[iParam0]->f_72)
					{
						if (network_does_network_id_exist(&(Local_5197.f_238.f_36[iParam0])))
						{
							if (!network_has_control_of_network_id(&(Local_5197.f_238.f_36[iParam0])))
							{
								network_request_control_of_network_id(&(Local_5197.f_238.f_36[iParam0]));
								return;
							}
							else
							{
								func_189(Local_5197.f_238.f_36[iParam0], 0);
							}
						}
						if (func_1528(iParam0, Local_5197.f_238.f_36[iParam0], 88243))
						{
							func_270(Local_9953[iParam0]);
						}
					}
				}
				else
				{
					func_280(Local_9953[iParam0], 0, 0);
				}
			}
		}
	}
}

void func_1063(int iParam0)
{
	if (Global_3145858->f_32697[iParam0]->f_11 == -1)
	{
		return;
	}
	if (is_bit_set(iVar13505, 15))
	{
		return;
	}
	if (!_does_propset_exist(&(uLocal_9840[iParam0])))
	{
		return;
	}
	if (_0xf42db680a8b2a4d9(&(uLocal_9840[iParam0])))
	{
		iVar0 = create_itemset(true);
		iVar1 = _get_entities_from_propset(&(uLocal_9840[iParam0]), iVar0, 0, false, true);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			uVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
			iVar4 = _0x18013392501ce5dc(uVar3);
			if (!is_bit_set(&(uLocal_9871[iParam0]), 0))
			{
				_0x56e0735d6273b227(iVar4, 1);
				if (func_846(iVar4))
				{
					if (!is_bit_set(Global_3145858->f_32697[iParam0]->f_14, 1))
					{
						_set_pickup_object_glow_enabled(iVar4, true);
					}
					func_1529(iVar4, 0, 1, 1, 1, 1, 1, 1, 0, 0);
				}
			}
			if (Global_3145858->f_32697[iParam0]->f_12 > -1)
			{
				if (get_entity_model(iVar4) == -1785266162)
				{
					fVar5 = 0f;
					fVar6 = 0f;
					fVar7 = 0f;
					func_1531(func_1530(Global_3145858->f_32697[iParam0]->f_12), &fVar5, &fVar6, &fVar7);
					_0x3c61b52b00848c26(iVar4, "AMB_BONFIRE_MP", fVar5, fVar6, fVar7);
				}
			}
			iVar2++;
		}
		set_bit(uLocal_9871[iParam0], 0);
		_0x20a4bf0e09bee146(iVar0);
		destroy_itemset(iVar0);
	}
	if (is_bit_set(Local_57[iVar6156]->f_46, iParam0))
	{
		if (func_1532(iParam0))
		{
			func_1399(iParam0);
		}
	}
	else if (func_1533(iParam0))
	{
		func_1534(iParam0);
	}
}

void func_1064(int iParam0)
{
	if ((Local_5197.f_47 + Local_5197.f_65) > Global_2097152->f_6019)
	{
		if (iParam0 > ((Local_5197.f_47 + Local_5197.f_65) - Global_2097152->f_6019))
		{
			iParam0 = ((Local_5197.f_47 + Local_5197.f_65) - Global_2097152->f_6019);
		}
		Local_5197.f_172 = iParam0;
	}
}

bool func_1065(int iParam0)
{
	if ((func_238() && iParam0 >= 0) && iParam0 < 16)
	{
		return is_bit_set(&(Local_5197.f_27[iParam0]), 0);
	}
	return false;
}

void func_1066()
{
	if (!func_1535() || iVar6151 != -1)
	{
		return;
	}
	fVar0 = (Global_2097152->f_6465 * get_frame_time());
	func_514(-fVar0, 0);
	if (is_bit_set(Global_2097152->f_6463, 1))
	{
		if (func_1001(iVar6147, Local_57[iVar6157]->f_3, Local_57[iVar6157]->f_6))
		{
			func_514(to_float(Global_2097152->f_6466), 0);
			StringCopy(&cVar1, _create_var_string(2, "RC_RM_CPPNUM", Global_2097152->f_6466), 16);
			func_515(&cVar1, 1, -2, 0, 0, 0, 0);
		}
	}
	if (!bVar6148)
	{
		func_96();
	}
}

void func_1067(var uParam0)
{
	if (!uParam0->f_7)
	{
		uParam0->f_7 = 1;
	}
}

int func_1068()
{
	return Global_1102219->f_26.f_12;
}

bool func_1069()
{
	return func_830(&iLocal_6146);
}

bool func_1070()
{
	return func_689(iVar6150);
}

int func_1071(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_459(*uParam1, 128))
	{
		if (!func_1536(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_459(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1537(iVar2))
			{
				return 0;
			}
			if (!func_1536(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1538(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_459(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_353(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_543(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_459(*uParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return 0;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_459(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1537(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_353(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_353(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_353(iParam2, 16384))
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
			return 0;
		}
		if (func_459(*uParam1, 2336))
		{
			if (!func_1537(iVar2))
			{
			}
			if (func_1539(iVar2, *uParam1))
			{
				func_460(uParam1, 32);
				func_460(uParam1, 256);
				func_460(uParam1, 2048);
				func_543(uParam1, 512);
				func_543(uParam1, 1024);
				func_543(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_459(*uParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_1537(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return 0;
			}
			else
			{
				func_460(uParam1, 64);
			}
		}
		if (func_353(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		disable_control_action(0, 1520437207, false);
		if ((((is_ped_sprinting(iVar2) && !func_353(iParam2, 8192)) || (is_ped_running(iVar2) && func_353(iParam2, 1024))) || func_353(iParam2, 8)) && !func_459(*uParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_543(uParam1, 32);
		}
		else if (((is_ped_running(iVar2) || (is_ped_sprinting(iVar2) && func_353(iParam2, 8192))) && func_353(iParam2, 4096)) && !func_459(*uParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_543(uParam1, 2048);
			func_543(uParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_353(iParam2, 32)) && !func_459(*uParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_543(uParam1, 256);
			func_543(uParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_543(uParam1, 64);
		}
		else if (!func_353(iParam2, 1))
		{
			if (!func_353(iParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_35.f_2;
				if (func_1538(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_459(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_543(uParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_543(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_353(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_543(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_353(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_543(uParam1, 8);
	}
	return 0;
}

bool func_1072(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_280(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_1073()
{
	if (func_1540(8, 255))
	{
		return;
	}
	func_1541(3);
}

bool func_1074(var uParam0, int iParam1)
{
	if (is_entity_in_water(*iParam1))
	{
		get_water_height_no_waves(get_entity_coords(*iParam1, true, false), &fVar0);
	}
	if (is_ped_falling(*iParam1))
	{
		return false;
	}
	else if (!is_entity_visible(*iParam1))
	{
		return false;
	}
	else if (is_entity_in_air(*iParam1, 1))
	{
		return false;
	}
	else if (fVar0 > 0.25f)
	{
		return false;
	}
	else if (is_ped_ragdoll(*iParam1))
	{
		return false;
	}
	else if (is_ped_climbing(*iParam1))
	{
		return false;
	}
	else if (_0x84d0bf2b21862059(*iParam1))
	{
		return false;
	}
	else if (is_ped_getting_up(*iParam1))
	{
		return false;
	}
	else if (_get_ped_crouch_movement(*iParam1))
	{
		return false;
	}
	else if (Global_1913694->f_1582 || Global_1913694->f_1581)
	{
		return false;
	}
	else if (is_ped_in_cover(*iParam1, 0, 0))
	{
		return false;
	}
	else if (func_1542(iParam1))
	{
		return false;
	}
	else if (is_ped_going_into_cover(*iParam1))
	{
		return false;
	}
	else if (is_ped_aiming_from_cover(*iParam1))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(*iParam1, false) && !func_1075(iParam1))
	{
		return false;
	}
	else if (_0x2311f15d971aa680(*iParam1) != -1)
	{
		return false;
	}
	else if (func_1543(iParam1))
	{
		return false;
	}
	else if (_0xa24c1d341c6e0d53(1, 0, 0) && !is_bit_set(uParam0->f_8, 18))
	{
		return false;
	}
	else if (_is_ped_hogtying(*iParam1))
	{
		return false;
	}
	else if (_is_ped_hogtied(*iParam1))
	{
		return false;
	}
	else if (is_ped_on_vehicle(*iParam1, false))
	{
		return false;
	}
	else if (!is_entity_on_screen(*iParam1))
	{
		return false;
	}
	else if (Global_1102219->f_26.f_3337 != 0)
	{
		return false;
	}
	else if (func_727(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	return true;
}

bool func_1075(int iParam0)
{
	if (is_ped_in_any_vehicle(*iParam0, false) || is_ped_on_vehicle(*iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*iParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 742064790)
		{
			iLocal_14020 = func_1544();
			return true;
		}
	}
	return false;
}

void func_1076(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1077(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (uParam0->f_12 == -1)
	{
		if (bParam3)
		{
			uParam0->f_12 = (get_game_timer() % 2);
		}
		else if (!bParam2 || !_0xcb690f680a3ea971(*iParam1, 6))
		{
			if (get_random_int_in_range(0, 10) < 5)
			{
				uParam0->f_12 = 0;
			}
			else
			{
				uParam0->f_12 = 2;
			}
		}
		else
		{
			uParam0->f_12 = (get_game_timer() % 4);
		}
		if (func_1078(iParam1))
		{
			uParam0->f_12 = 0;
		}
		if (iParam4 >= 0)
		{
			uParam0->f_12 = iParam4;
		}
	}
	bVar10 = false;
	if (!bParam2)
	{
		bVar10 = true;
	}
	else if (!_0xcb690f680a3ea971(*iParam1, 6))
	{
		bVar10 = true;
	}
	func_1545(uParam0->f_12, &vVar0, &vVar3, &vVar6, &uVar9, _0xdc44f405a6b98d03(*iParam1, 0), is_ped_male(*iParam1), bVar10, bParam3);
	vVar11 = { get_offset_from_entity_in_world_coords(*iParam1, vVar0) };
	iVar14 = func_1546(uParam0, iParam1, vVar11, get_entity_coords(*iParam1, true, false));
	if (iVar14 == 1)
	{
		func_1547(uParam0, iParam1, vVar0, vVar3, vVar6, uVar9);
	}
	else
	{
		uParam0->f_12 = -1;
	}
	return iVar14;
}

bool func_1078(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (get_current_ped_weapon(*iParam0, &iVar0, true, 0, false))
	{
		return (_is_weapon_pistol(iVar0) || _is_weapon_revolver(iVar0));
	}
	return false;
}

void func_1079(var uParam0)
{
	set_cam_coord(*uParam0, get_gameplay_cam_coord());
	set_cam_rot(*uParam0, get_gameplay_cam_rot(2), 2);
	set_cam_fov(*uParam0, get_gameplay_cam_fov());
}

void func_1080(int iParam0, var uParam1)
{
	if (!_0xcb690f680a3ea971(*iParam0, 6))
	{
		return;
	}
	if (_is_ped_hogtying(*iParam0) || _is_ped_hogtied(*iParam0))
	{
		return;
	}
	clear_ped_tasks_immediately(*iParam0, false, true);
	StringCopy(&cVar29, "Camera", 16);
	if (uParam1->f_12 > 0)
	{
		StringConCat(&cVar29, "_", 16);
		StringIntConCat(&cVar29, uParam1->f_12, 16);
	}
	_get_anim_scene_entity_matrix(uParam1->f_20, &cVar29, &Var17, false, "LIVE", 2);
	uParam1->f_13.f_1 = (uParam1->f_13.f_1 + 0.165f);
	Var0.f_1 = { func_1548(Var17, Var17.f_3, uParam1->f_13) };
	Var0.f_4 = 10000;
	Var0.f_6 = 1;
	Var0.f_7 = 1;
	task_shoot_with_weapon(*iParam0, &Var0);
}

void func_1081(int iParam0)
{
	iLocal_7311 = iParam0;
}

Vector3 func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1f, 13f, -10f;
		case 1:
			return -1f, 13f, -10f;
		case 2:
		default:
			break;
	}
	return 5.64f, -7.12f, 1.41f;
}

float func_1083()
{
	fVar0 = 1f;
	if (is_ped_in_any_vehicle(iVar6147, false))
	{
		iVar1 = get_entity_model(get_vehicle_ped_is_using(iVar6147));
		get_model_dimensions(iVar1, &fVar2, &fVar5);
		fVar0 = (fVar0 + ((fVar5 - fVar2) * 0.2f));
	}
	return fVar0;
}

int func_1084(vector3 vParam0, vector3 vParam3, var uParam6)
{
	fVar9 = 1.5f;
	iVar10 = 1;
	if (!get_ground_z_for_3d_coord(vParam3 + Vector(10f, 0f, 0f), &fVar8, false))
	{
		fVar8 = (vParam0.z - 1f);
	}
	uParam6->f_2 = (fVar8 + fVar9);
	if (iVar7289 == 0)
	{
		iLocal_7298 = start_shape_test_los_probe(vParam0, *uParam6, iVar10, iVar6140, 7);
	}
	else
	{
		iVar11 = get_shape_test_result(iVar7289, &iVar1, &uVar2, &uVar5, &uVar0);
		switch (iVar11)
		{
			case 2:
				if (iVar1 == 0)
				{
					set_bit(&uLocal_13508, 4);
				}
				else
				{
					uLocal_7305 = iVar7296 + 1;
					clear_bit(&uLocal_13508, 4);
				}
				break;
			case 1:
				break;
			case 0:
				clear_bit(&uLocal_13508, 4);
				iLocal_7298 = 0;
				return 1;
			default:
				break;
		}
	}
	if (is_bit_set(iVar13499, 4) || iVar7296 > 2)
	{
		iLocal_7298 = 0;
		return 1;
	}
	return 0;
}

Vector3 func_1085(vector3 vParam0, float fParam3, int iParam4)
{
	switch (iParam4)
	{
		case 0:
		case 1:
			vVar3 = { 0f, 6.5f, 0.8f };
			break;
		case 2:
		default:
			vVar3 = { 0f, 0f, 0.8f };
			break;
	}
	vVar0 = { _get_object_offset_from_coords(vParam0, fParam3, vVar3) };
	return vVar0;
}

void func_1086()
{
	if (_0xa710dc5d25f8b942(iVar6147, 2106541073) != -1f)
	{
		return;
	}
	vVar0 = { get_entity_coords(iVar6147, true, false) + get_entity_forward_vector(iVar6147) * Vector(10f, 10f, 10f) };
	bVar3 = vdist2(get_cam_coord(iVar7297), vVar0) <= 15f;
	if (bVar3)
	{
		vVar0 = { vVar0 - _0x935a30aa88fb1014(iVar6147) * Vector(fVar13717, fVar13717, fVar13717) * Vector(5f, 5f, 5f) };
		vVar0 = { vVar0 + get_entity_forward_vector(iVar6147) * Vector(25f, 25f, 25f) };
		task_go_straight_to_coord(iVar6147, vVar0, 3f, 20000, 1193033728, 1056964608, 1);
	}
}

char* func_1087(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "NONE";
		case 0:
			return "SMALL_EXPLOSION_SHAKE";
		case 1:
			return "MEDIUM_EXPLOSION_SHAKE";
		case 2:
			return "LARGE_EXPLOSION_SHAKE";
		case 3:
			return "HAND_SHAKE";
		case 4:
			return "JOLT_SHAKE";
		case 5:
			return "VIBRATE_SHAKE";
		case 6:
			return "WOBBLY_SHAKE";
		case 7:
			return "DRUNK_SHAKE";
		default:
			break;
	}
	return "";
}

bool func_1088(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_1089(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
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
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_1549(iParam0, 1);
	func_1550(iParam0, 1);
	func_1551(iParam0, 128);
}

void func_1090()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

void func_1091(int iParam0, var uParam1)
{
	chal_add_goal_progress_float(1852874750, iParam0, uParam1);
}

bool func_1092(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		*uParam0 = -1199438720;
		return true;
	}
	*uParam0 = 0;
	_0x4fcbcc0584cd08e9(1852874750);
	if (_0xca1f0b5103936891(1852874750))
	{
		*uParam0 = _0x8ba3d7b1e83ef803(1852874750);
		if (*uParam0 == 0)
		{
			*uParam0 = -1199438720;
		}
		func_1552(*uParam0);
		return true;
	}
	return false;
}

int func_1093()
{
	if (func_334())
	{
		if (func_83())
		{
			return 62;
		}
		else
		{
			return 63;
		}
	}
	else if (func_83())
	{
		return 61;
	}
	else if (Global_2097152->f_32 == -784189810)
	{
		return 60;
	}
	return -1;
}

void func_1094(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam2;
	uParam0->f_1 = iParam1;
	uParam0->f_13 = iParam3;
	if (func_268(&uLocal_6773))
	{
		uParam0->f_2 = (func_269(&uLocal_6773, 0, 0) / 60000);
	}
	else
	{
		uParam0->f_2 = (Local_5197.f_161 / 60000);
	}
	if (uParam0->f_2 > 30)
	{
		uParam0->f_2 = 30;
	}
	else if (uParam0->f_2 < 0)
	{
		uParam0->f_2 = 0;
	}
	if (uParam0->f_1 == 1)
	{
		uParam0->f_3 = Local_5197.f_2.f_3;
	}
	if (*uParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			iVar1++;
			if (iVar0 == Local_57[iVar6146]->f_9)
			{
				uParam0->f_4 = func_138();
			}
			iVar0++;
		}
		if (uParam0->f_1 == 1)
		{
			uParam0->f_5 = iVar1;
		}
	}
	else
	{
		uParam0->f_4 = func_138();
	}
}

void func_1095(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	Var0.f_1 = 11;
	if (func_1096(&Var0, uParam0->f_13))
	{
	}
	if ((*uParam0 != 3 && *uParam0 != 5) && *uParam0 != 4)
	{
		if (func_1553(&Var0, *uParam0, uParam0->f_2))
		{
		}
		if (func_1554(&Var0, *uParam0, uParam0->f_3))
		{
		}
	}
	switch (*uParam0)
	{
		case 2:
			if (func_1555(&Var0, uParam0->f_7))
			{
			}
			if (func_1556(&Var0, uParam0->f_6))
			{
			}
			break;
		case 4:
			if (func_1557(&Var0, uParam0->f_9))
			{
			}
			if (func_1558(&Var0, uParam0->f_10))
			{
			}
			if (func_1559(&Var0, uParam0->f_11))
			{
			}
			if (func_1553(&Var0, *uParam0, uParam0->f_2))
			{
			}
			if (func_1560(&Var0, uParam0->f_12))
			{
			}
			break;
		case 5:
			if (func_1553(&Var0, *uParam0, uParam0->f_2))
			{
			}
			if (func_1561(&Var0, uParam0->f_6))
			{
			}
			if (func_1562(&Var0, uParam0->f_11))
			{
			}
			if (func_1554(&Var0, *uParam0, uParam0->f_3))
			{
			}
			break;
		case 3:
			if (func_1563(&Var0, uParam0->f_4))
			{
			}
			if (func_1564(&Var0, uParam0->f_2))
			{
			}
			if (func_1565(&Var0, uParam0->f_8))
			{
			}
			break;
		case 0:
		case 1:
			if (func_1566(&Var0, *uParam0, uParam0->f_4))
			{
			}
			if (*uParam0 == 1)
			{
				if (func_1567(&Var0, uParam0->f_5))
				{
				}
			}
			break;
	}
	*uParam2 = { Var13 };
	*uParam1 = { Var17 };
	if (*uParam0 == 4)
	{
		func_1568(&Var0);
	}
	else if (!func_1098(func_1569(*uParam0, uParam0->f_1), uParam2, &Var0, 0, 255, 0, bParam3))
	{
	}
}

bool func_1096(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, -260413506);
			break;
		case 1:
			func_1570(iParam0, -2111337702);
			break;
		case 2:
			func_1570(iParam0, -656492409);
			break;
		case 3:
			func_1570(iParam0, -357278670);
			break;
		case 4:
			func_1570(iParam0, -2143717776);
			break;
		case 5:
			func_1570(iParam0, 1263733924);
			break;
		case 6:
			func_1570(iParam0, 1553313577);
			break;
		case 7:
			func_1570(iParam0, 1568888077);
			break;
		case 8:
			func_1570(iParam0, 256424089);
			break;
		case 9:
			func_1570(iParam0, 617538469);
			break;
		case 10:
			func_1570(iParam0, 378029848);
			break;
		case 11:
			func_1570(iParam0, -2080015931);
			break;
		case 12:
			func_1570(iParam0, -1786110766);
			break;
		case 30:
			func_1570(iParam0, -884340676);
			break;
		case 31:
			func_1570(iParam0, 102860608);
			break;
		case 39:
			func_1570(iParam0, 1794767366);
			break;
		case 33:
			func_1570(iParam0, -783611486);
			break;
		case 32:
			func_1570(iParam0, -952276855);
			break;
		case 34:
			func_1570(iParam0, 318220867);
			break;
		case 35:
			func_1570(iParam0, -1077729335);
			break;
		case 36:
			func_1570(iParam0, -163378282);
			break;
		case 37:
			func_1570(iParam0, 1021593062);
			break;
		case 38:
			func_1570(iParam0, 1008454707);
			break;
		case 41:
			func_1570(iParam0, 1705953859);
			break;
		case 40:
			func_1570(iParam0, -455735051);
			break;
		case 23:
			func_1570(iParam0, -1671824329);
			break;
		case 24:
			func_1570(iParam0, 1142154017);
			break;
		case 25:
			func_1570(iParam0, -1062585103);
			break;
		case 26:
			func_1570(iParam0, 324387350);
			break;
		case 60:
			func_1570(iParam0, 1572644157);
			break;
		case 61:
			func_1570(iParam0, 1410030361);
			break;
		case 62:
			func_1570(iParam0, -393597833);
			break;
		case 63:
			func_1570(iParam0, -812549498);
			break;
		case 22:
			func_1570(iParam0, 1456885582);
			break;
		case 21:
			func_1570(iParam0, 1144077788);
			break;
		case 20:
			func_1570(iParam0, -2055749896);
			break;
		case 27:
			func_1570(iParam0, -267233182);
			break;
		case 28:
			func_1570(iParam0, -1732897089);
			break;
		case 100:
			func_1570(iParam0, 193425242);
			break;
		case 101:
			func_1570(iParam0, -703536713);
			break;
		case 102:
			func_1570(iParam0, 1493002126);
			break;
		case 103:
			func_1570(iParam0, 1094531086);
			break;
		case 104:
			func_1570(iParam0, -1800642837);
			break;
		case 105:
			func_1570(iParam0, -1635028311);
			break;
		case 29:
			func_1570(iParam0, -45153286);
			break;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return true;
}

int func_1097(int iParam0)
{
	if (iParam0 > 29)
	{
		return -1496683509;
	}
	else if (iParam0 > 24)
	{
		return 244647508;
	}
	else if (iParam0 > 19)
	{
		return 1046912657;
	}
	else if (iParam0 > 14)
	{
		return -603072187;
	}
	else if (iParam0 > 11)
	{
		return 658173854;
	}
	else if (iParam0 > 8)
	{
		return 1882285004;
	}
	else if (iParam0 > 5)
	{
		return 227647118;
	}
	else if (iParam0 > 2)
	{
		return 436254572;
	}
	return 0;
}

int func_1098(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_1 = 10;
	return func_1571(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_1099(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	*uParam0 = 3;
	uParam0->f_8 = func_1572(iVar6148);
	uParam0->f_4 = func_1573();
	uParam0->f_2 = &Global_1049275;
}

bool func_1100()
{
	if (iVar13716 >= 32 || Global_1048684->f_376 >= 32)
	{
		return true;
	}
	bVar1 = false;
	bVar2 = func_235(iVar6150);
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar3)))
		{
			bVar1 = iVar3 == iVar6157;
			if (func_449(Local_6163[iVar3]->f_4) == iVar13716 + 1)
			{
				func_1574(iVar3, 1, 0, Local_6163[iVar3]->f_7, bVar1, bVar2, 0, 0);
				bVar0 = true;
			}
			else
			{
				iVar3++;
			}
			if (!bVar0)
			{
			}
			uLocal_13718 = iVar13716 + 1;
			if (iVar13716 < 32)
			{
				return false;
			}
			return true;
		}
	}
}

void func_1101(int iParam0)
{
	Global_1048684->f_470 = iParam0;
}

int func_1102(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (Global_1048684->f_22[iVar0]->f_9)
		{
			iVar1++;
		}
		else
		{
			iVar2++;
		}
		iVar3 = get_random_int_in_range(0, 1000);
		iVar0++;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	else if (!bParam0)
	{
		if (iVar1 == 1)
		{
			return 0;
		}
		else if (iVar1 <= 4)
		{
			if (iVar3 < 250)
			{
				return 1;
			}
			else if (iVar3 < 500)
			{
				return 2;
			}
			else if (iVar3 < 700)
			{
				return 3;
			}
			else
			{
				return 4;
			}
		}
		else if (iVar1 <= 7 && iVar2 <= 1)
		{
			return 5;
		}
		else if (iVar1 <= 8)
		{
			if (iVar3 < 125)
			{
				return 6;
			}
			else if (iVar3 < 250)
			{
				return 7;
			}
			else if (iVar3 < 375)
			{
				return 9;
			}
			else if (iVar3 < 500)
			{
				return 13;
			}
			else if (iVar3 < 750)
			{
				return 14;
			}
			else
			{
				return 12;
			}
		}
		else if (iVar1 <= 16)
		{
			if (iVar3 < 250)
			{
				return 8;
			}
			else if (iVar3 < 500)
			{
				return 13;
			}
			else if (iVar3 < 750)
			{
				return 14;
			}
			else
			{
				return 12;
			}
		}
	}
	else
	{
		return 20;
	}
	return 28;
}

struct<4> func_1103(int iParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_CELEB_SCREEN_MUSIC", 32);
	if (are_strings_equal(&(Global_3145858->f_51886), "MP_ADV_PH_PREDATORS_OUTRO_OS"))
	{
		cVar0 = { Global_3145858->f_51886 };
		if (iParam0 == 1)
		{
			StringCopy(&cVar0, "MP_ADV_PH_HUNTED_OUTRO_OS", 32);
		}
	}
	else if (are_strings_equal(&(Global_3145858->f_51886), "MP_FEAR_OUTRO_OS_TEAM1"))
	{
		cVar0 = { Global_3145858->f_51886 };
		if (iParam1 == iParam0)
		{
			StringCopy(&cVar0, "MP_FEAR_OUTRO_OS_TEAM2", 32);
		}
	}
	return cVar0;
}

void func_1104(int iParam0)
{
	Global_262152 = iParam0;
}

void func_1105(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_1106(var uParam0)
{
	Var0.f_1 = -1082130432;
	Var0.f_2 = -1082130432;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1082130432;
	Var0.f_5 = -1082130432;
	Var0.f_14 = 255;
	iVar23 = 0;
	while (iVar23 <= 31)
	{
		*(*uParam0)[iVar23] = { Var0 };
		iVar23++;
	}
}

void func_1107(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 != 255)
		{
			if (bParam4)
			{
				iVar1 = func_1575(&((*uParam1)[iVar0]->f_14), &iVar2);
			}
			else
			{
				iVar1 = func_1576(&iVar2);
			}
			if (iVar1 == -1)
			{
			}
			else
			{
				(*uParam0)[iVar1]->f_14 = { (*uParam1)[iVar0]->f_14 };
				(*uParam0)[iVar1] = uParam1[iVar0];
				func_1577(&((*uParam0)[iVar1]->f_1), (*uParam1)[iVar0]->f_1, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_2), (*uParam1)[iVar0]->f_2, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_3), (*uParam1)[iVar0]->f_3, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_4), (*uParam1)[iVar0]->f_4, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_5), (*uParam1)[iVar0]->f_5, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_7), (*uParam1)[iVar0]->f_7, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_8), (*uParam1)[iVar0]->f_8, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_9), (*uParam1)[iVar0]->f_9, bParam4);
				(*uParam0)[iVar1]->f_12 = ((*uParam0)[iVar1]->f_12 + (*uParam1)[iVar0]->f_12);
				(*uParam0)[iVar1]->f_11 = (*uParam1)[iVar0]->f_11;
				(*uParam0)[iVar1]->f_6 = (*uParam1)[iVar0]->f_6;
			}
		}
		iVar0++;
	}
	func_1578(uParam0, uParam2);
	*uParam3 = 1;
}

void func_1108(var uParam0)
{
	Var0 = 1;
	Var0.f_15 = 8;
	Var0.f_27 = 4;
	Var0.f_101 = 32;
	Var0.f_101.f_1.f_1 = -1082130432;
	Var0.f_101.f_1.f_2 = -1082130432;
	Var0.f_101.f_1.f_3 = -1082130432;
	Var0.f_101.f_1.f_4 = -1082130432;
	Var0.f_101.f_1.f_5 = -1082130432;
	Var0.f_101.f_1.f_14 = 255;
	Var0.f_101.f_1.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	iVar838 = 0;
	while (iLocal_841 <= 31)
	{
		Var0.f_101[iLocal_841]->f_14 = 255;
		iVar838 = iLocal_841 + 1;
	}
	func_86(&Var0);
	*uParam0 = { Var0 };
}

void func_1109(int iParam0)
{
	Global_1050050 = iParam0;
}

void func_1110(var uParam0, var uParam1, int iParam2, var uParam3)
{
	Global_1050050->f_1 = { *uParam0 };
	Global_1050050->f_12 = func_1579();
	Global_1050050->f_13 = uParam1;
	Global_1050050->f_14 = iParam2;
	Global_1050050->f_24 = uParam3;
}

struct<5> func_1111()
{
	return (*Global_263042)[network_player_id_to_int()]->f_1.f_55;
}

bool func_1112()
{
	iVar20 = 0;
	while (iVar20 < network_get_max_num_participants())
	{
		iVar22 = int_to_participantindex(iVar20);
		if (func_233(iVar20, iVar22))
		{
			if (!func_235(iVar20))
			{
				if (func_238())
				{
					uVar0[Local_57[iVar20]->f_9] = &uVar0[Local_57[iVar20]->f_9] + 1;
					set_bit(&iVar18, Local_57[iVar20]->f_9);
				}
				else
				{
					iVar17++;
				}
			}
		}
		iVar20++;
	}
	if (!func_238())
	{
		if (iVar17 < Global_3145858->f_195)
		{
			return false;
		}
	}
	else
	{
		iVar19 = 0;
		while (iVar19 <= 15)
		{
			if (is_bit_set(iVar18, iVar19))
			{
				if (&uVar0[iVar19] <= 1)
				{
					return false;
				}
				iVar21++;
			}
			iVar19++;
		}
		if (iVar21 <= 1)
		{
			return false;
		}
	}
	return true;
}

float func_1113(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 < 3)
	{
		if (iParam0 == 0)
		{
			return 100f;
		}
		else if (iParam0 == 1)
		{
			return 91.5f;
		}
		else
		{
			return 85f;
		}
	}
	return ((20f / 7f) * IntToFloat((31 - iParam0)));
}

void func_1114(float fParam0)
{
	(*Global_263042)[network_player_id_to_int()]->f_1.f_55.f_2 = ((*Global_263042)[network_player_id_to_int()]->f_1.f_55.f_2 + fParam0);
}

Vector3 func_1115()
{
	return Global_265377->f_124517.f_71.f_27;
}

int func_1116(vector3 vParam0)
{
	iVar0 = network_player_id_to_int();
	if (Global_263042[iVar0] != 9)
	{
		return 0;
	}
	if (func_542(player_id(), 32))
	{
		return 0;
	}
	MemCopy(&uVar1, {func_1580()}, 8);
	iVar9 = get_hash_key(&vParam0);
	if (func_1581())
	{
		if (iVar9 == get_hash_key(&uVar1))
		{
			return 1;
		}
		return 0;
	}
	if (is_string_null_or_empty(&vParam0))
	{
		return 0;
	}
	if (func_1582() != iVar9)
	{
		func_1583();
		func_1584();
		func_110(4);
	}
	else if (!func_1585(0, 0))
	{
		return 0;
	}
	func_1586(vParam0);
	return 1;
}

bool func_1117(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	Var0 = { func_1587(iParam0) };
	if (!func_939(Var0))
	{
		return true;
	}
	if (!func_1588(iParam0))
	{
		if (Global_1900736->f_69 <= 0)
		{
			Global_1900736->f_69 = absi(get_cloud_time_as_int());
		}
		else if (absi((Global_1900736->f_69 - get_cloud_time_as_int())) >= Global_1901947->f_677.f_1)
		{
			func_726(22, -1);
		}
		return false;
	}
	else if (Global_1900736->f_69 != 0)
	{
		Global_1900736->f_69 = 0;
	}
	func_1589(get_cloud_time_as_int());
	func_1590(iParam0, 1);
	if (func_1355(iParam0, &iVar2))
	{
		func_510(func_490(-1892463704, iVar2), 1);
		Var3 = { func_490(1671659657, iVar2) };
		stat_id_set_to_posse_id(&Var3);
		iVar5 = 0;
		Var6 = { func_489(-1048906573) };
		if (_0x302e71c1d9ee75b9(&Var6, func_38(Var0), &iVar5) && iVar5 == 0)
		{
			func_510(func_490(909949304, iVar2), 1);
		}
	}
	if (!func_1351(iParam0))
	{
		func_108(0);
	}
	func_109();
	func_1591(iParam0);
	func_1354(iParam0);
	func_1592(0);
	func_1594(func_1593(iParam0));
	func_1595(Var0, 1, 1, 0, 1);
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	return true;
}

void func_1118(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_4}, 3);
	if ((func_738() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_8);
	}
}

void func_1119(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_13(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_939(Param0) && !func_938(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_38(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_1347(Param0) == 3)
		{
			func_218(1, -1706799532);
		}
		else if (func_1347(Param0) == 4)
		{
			func_218(0, -1706799532);
		}
	}
	if ((func_1347(Param0) == 3 || func_1347(Param0) == 1) || ((bParam5 && func_1347(Param0) == 4) && _0x01f4d242765c6b24(func_38(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1596(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_1596(Param0, 2, iParam4, 255, 0);
		}
	}
	func_1357(Param0, 0);
	if (func_1597(func_1199(0), Param0))
	{
		func_1358(1);
		func_1359(0);
		func_1598(0);
		func_1362(1);
	}
	func_1599(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_1200(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_1120(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Var0 = { func_1587(iParam0) };
	if (!func_939(Var0))
	{
		return;
	}
	func_108(0);
	func_109();
	func_1119(Var0, 0, 1, 0, 0);
	Global_1900736->f_69 = 0;
	if (func_1355(iParam0, &iVar2))
	{
		func_510(func_490(1374282888, iVar2), 1);
	}
	func_1354(iParam0);
	func_1592(0);
}

void func_1121(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1122(var uParam0, int iParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else
		{
			if (!&Global_1296859->f_22[iVar0])
			{
				return 0;
			}
			if (!((*Global_263042)[iVar0]->f_68 && iParam1) != 0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1123(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

void func_1124(int iParam0)
{
	if (!func_813(iParam0))
	{
		return;
	}
	if (_0x4f89dad4156ba145(iParam0))
	{
		return;
	}
	_0x985767f5fa45bc44(iParam0);
}

bool func_1125(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_750(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

int func_1126(var uParam0)
{
	if (uParam0->f_80 != -1 && uParam0->f_81 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1127(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = true;
	bVar7 = false;
	bVar8 = false;
	set_entity_coords(iParam0, Global_3145858->f_18727[iParam1]->f_1, true, false, true, true);
	if (!func_354(Global_3145858->f_18727[iParam1]->f_4))
	{
		set_entity_rotation(iParam0, Global_3145858->f_18727[iParam1]->f_4, 2, true);
	}
	else
	{
		set_entity_heading(iParam0, Global_3145858->f_18727[iParam1]->f_7);
	}
	set_entity_visible(iParam0, bParam3);
	bVar8 = is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 17);
	if (func_472(iParam1))
	{
		_0x581edbe56e8d62c9(iParam0, bVar8);
	}
	else
	{
		set_object_targettable(iParam0, bVar8);
	}
	_set_pickup_object_glow_enabled(iParam0, is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 20));
	if (Global_3145858->f_18727[iParam1]->f_71 != -1)
	{
		set_entity_lod_dist(iParam0, Global_3145858->f_18727[iParam1]->f_71);
	}
	else if (func_1600(Global_3145858->f_18727[iParam1]->f_8) != -1)
	{
		set_entity_lod_dist(iParam0, func_1600(Global_3145858->f_18727[iParam1]->f_8));
	}
	if (Global_3145858->f_18727[iParam1]->f_9 != 0)
	{
		_set_object_texture_variation(iParam0, Global_3145858->f_18727[iParam1]->f_9);
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 11))
	{
		_0x98d2d9c053a1f449(iParam0, 1);
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 21))
	{
		_0xe1c708ba4885796b(iParam0, 1);
	}
	_set_object_can_climb_on(iParam0, true);
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 18))
	{
		bVar5 = false;
		bVar7 = true;
		bVar6 = false;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar0 = false;
	}
	else if (bVar8)
	{
		bVar5 = false;
		if (!func_846(iParam0))
		{
			bVar1 = false;
			bVar2 = false;
			bVar3 = false;
			bVar4 = false;
		}
		bVar0 = false;
	}
	if (func_1601(iParam0))
	{
		bVar5 = false;
		bVar7 = true;
		bVar6 = true;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar0 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 4))
	{
		bVar2 = false;
		bVar5 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 28))
	{
		bVar1 = false;
		bVar2 = false;
		bVar5 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 13))
	{
		bVar0 = true;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 27))
	{
		bParam4 = true;
	}
	set_entity_can_be_damaged(iParam0, bVar7);
	freeze_entity_position(iParam0, bVar6);
	if (bParam4)
	{
		bVar0 = true;
		bVar1 = true;
		bVar2 = true;
		bVar3 = true;
		bVar4 = true;
		bVar5 = true;
	}
	set_entity_invincible(iParam0, bVar5);
	func_1529(iParam0, bVar0, bVar1, bVar2, bVar3, bVar4, 0, 0, 0, 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(iParam2);
}

bool func_1128(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_750(iParam1))
	{
		return false;
	}
	iVar0 = func_1602(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
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
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_1129(int iParam0)
{
	iVar0 = 1269650476;
	set_ped_relationship_group_hash(iParam0, iVar0);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		set_ped_can_be_targetted_by_team(iParam0, iVar1, true);
		iVar1++;
	}
}

void func_1130(int iParam0, int iParam1)
{
	fVar3 = to_float(Local_5197.f_45);
	fVar4 = to_float(Global_3145858->f_194);
	fVar5 = ((fVar3 / fVar4) + 1f);
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	remove_all_ped_weapons(iParam0, true, true);
	_0x1b83c0deebcbb214(iParam0);
	iVar9 = Global_2097152->f_5636[iParam1]->f_8;
	if (iVar9 != 0)
	{
		bVar10 = false;
		iVar11 = Global_2097152->f_5636[iParam1]->f_14;
		func_1603(iParam0, iVar9, bVar10, Global_2097152->f_5636[iParam1]->f_8.f_3, Global_2097152->f_5636[iParam1]->f_8.f_5, 0);
		func_1603(iParam0, iVar11, bVar10, Global_2097152->f_5636[iParam1]->f_14.f_3, Global_2097152->f_5636[iParam1]->f_14.f_5, 1);
	}
	_0x24c82ef607105faa(iParam0, -920810745);
	set_ped_config_flag(iParam0, 168, true);
	func_1604(1627542854, iParam0, Global_2097152->f_5636[iParam1]->f_1, Global_2097152->f_5636[iParam1]->f_5, 0, 0);
	if (!bVar7)
	{
		set_ped_combat_movement(iParam0, 1);
		bVar12 = (Global_2097152->f_5636[iParam1]->f_8 == -1569615261 || Global_2097152->f_5636[iParam1]->f_8 == 0);
		set_ped_combat_attributes(iParam0, 17, (bVar12 || bVar8));
		set_ped_combat_attributes(iParam0, 5, !(bVar12 || bVar8));
		set_ped_combat_attributes(iParam0, 46, !(bVar12 || bVar8));
	}
	if (Global_2097152->f_5636[iParam1]->f_21 == 3)
	{
		iVar0 = 5;
		iVar2 = 0;
	}
	else if (Global_2097152->f_5636[iParam1]->f_21 == 2)
	{
		iVar0 = 15;
		iVar2 = 0;
	}
	else if (Global_2097152->f_5636[iParam1]->f_21 == 1)
	{
		iVar0 = 40;
		iVar2 = 2;
	}
	else
	{
		iVar0 = 25;
		iVar2 = 1;
	}
	fVar13 = ((IntToFloat(iVar0) + ((0.25f * IntToFloat(iVar0)) * fVar5)) * 0.8f);
	iVar0 = func_948(round(fVar13), 0, 100);
	set_ped_combat_ability(iParam0, iVar2);
	set_ped_accuracy(iParam0, iVar0);
	if (Global_2097152->f_5636[iParam1]->f_22 > -1)
	{
		set_ped_firing_pattern(iParam0, func_1605(Global_2097152->f_5636[iParam1]->f_22, 1));
	}
	if (Global_2097152->f_5636[iParam1]->f_23 != 0)
	{
		set_combat_float(iParam0, 2, to_float(Global_2097152->f_5636[iParam1]->f_23));
		set_ped_seeing_range(iParam0, to_float(Global_2097152->f_5636[iParam1]->f_23));
	}
	iVar14 = func_1606(Global_2097152->f_5636[iParam1]->f_24, Local_5197.f_45, Global_3145858->f_194);
	set_entity_max_health(iParam0, iVar14);
	_set_entity_health(iParam0, iVar14, 0);
	set_ped_config_flag(iParam0, 502, true);
	set_ped_config_flag(iParam0, 81, false);
	set_ped_config_flag(iParam0, 122, true);
	set_ped_config_flag(iParam0, 35, true);
	set_ped_config_flag(iParam0, 104, false);
	set_ped_config_flag(iParam0, 185, true);
	set_ped_config_flag(iParam0, 289, true);
	set_ped_config_flag(iParam0, 290, true);
	set_ped_config_flag(iParam0, 107, bVar6);
	set_ped_config_flag(iParam0, 98, bVar6);
	set_ped_flee_attributes(iParam0, 16384, !bVar7);
	set_ped_flee_attributes(iParam0, 1024, bVar7);
	set_ped_flee_attributes(iParam0, 32768, !bVar7);
	iVar1 = 0;
	while (iVar1 <= (Global_524288->f_35350 - 1))
	{
		_0x545bf19f86e80f11(iParam0, iVar1, 1);
		iVar1++;
	}
	if (Global_524288->f_47318[iParam1]->f_322 != -1)
	{
		_set_ped_outfit_preset(iParam0, Global_524288->f_47318[iParam1]->f_322, 0);
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_1131()
{
	return false;
}

bool func_1132()
{
	return false;
}

void func_1133(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, struct<8> Param14, int iParam22, bool bParam23)
{
	if (iParam22 < 0 || iParam22 >= 32)
	{
		return;
	}
	func_1607(&((*uParam0)[iParam22]->f_14), uParam1, Param14);
	(*uParam0)[iParam22] = uParam2;
	func_1608(&((*uParam0)[iParam22]->f_1), to_float(iParam3));
	func_1608(&((*uParam0)[iParam22]->f_2), to_float(iParam4));
	func_1608(&((*uParam0)[iParam22]->f_3), to_float(iParam5));
	func_1608(&((*uParam0)[iParam22]->f_4), to_float(iParam6));
	func_1608(&((*uParam0)[iParam22]->f_5), to_float(iParam7));
	func_1608(&((*uParam0)[iParam22]->f_6), to_float(iParam8));
	func_1608(&((*uParam0)[iParam22]->f_7), to_float(iParam9));
	func_1608(&((*uParam0)[iParam22]->f_8), to_float(iParam10));
	func_1608(&((*uParam0)[iParam22]->f_9), to_float(iParam11));
	func_1609(uParam0, iParam22, bParam12, bParam23);
	(*uParam0)[iParam22]->f_11 = iParam13;
	if (iParam13 != 0)
	{
	}
}

void func_1134(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, struct<8> Param13, int iParam21, bool bParam22)
{
	if (iParam21 < 0 || iParam21 >= 32)
	{
		return;
	}
	func_1607(&((*uParam0)[iParam21]->f_14), uParam1, Param13);
	(*uParam0)[iParam21] = uParam2;
	func_1608(&((*uParam0)[iParam21]->f_1), to_float(iParam3));
	func_1608(&((*uParam0)[iParam21]->f_2), to_float(iParam4));
	func_1608(&((*uParam0)[iParam21]->f_3), to_float(iParam5));
	func_1608(&((*uParam0)[iParam21]->f_4), to_float(iParam6));
	func_1608(&((*uParam0)[iParam21]->f_5), to_float(iParam7));
	func_1608(&((*uParam0)[iParam21]->f_6), to_float(iParam8));
	func_1608(&((*uParam0)[iParam21]->f_7), to_float(iParam9));
	func_1608(&((*uParam0)[iParam21]->f_8), to_float(iParam10));
	func_1609(uParam0, iParam21, bParam11, bParam22);
	(*uParam0)[iParam21]->f_11 = iParam12;
	if (iParam12 != 0)
	{
	}
}

void func_1135(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*uParam1)[iVar0] = { *(*uParam0)[iVar0] };
		(*uParam1)[iVar0]->f_14 = (*uParam0)[iVar0]->f_14;
		(*uParam1)[iVar0]->f_14.f_1 = { (*uParam0)[iVar0]->f_14.f_1 };
		iVar0++;
	}
	if (bParam3)
	{
		func_1610(uParam1, uParam2);
	}
	else
	{
		func_1578(uParam1, uParam2);
	}
}

float func_1136(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, bool bParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16, float fParam17, float fParam18, float fParam19, float fParam20, float fParam21, float fParam22, float fParam23, float fParam24, float fParam25, float fParam26, float fParam27, int iParam28, int iParam29, int iParam30, int iParam31, float fParam32, int iParam33, int iParam34)
{
	fVar0 = 0f;
	if (Global_3145858->f_51906 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam0) * Global_3145858->f_51906));
	}
	if (Global_3145858->f_51906.f_1 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam1) * Global_3145858->f_51906.f_1));
	}
	if (Global_3145858->f_51906.f_2 > 0f)
	{
		fVar1 = (fParam3 / fParam2);
		fVar0 = (fVar0 + (fVar1 * Global_3145858->f_51906.f_2));
	}
	if (Global_3145858->f_51906.f_3 > 0f)
	{
		fVar0 = (fVar0 + (fParam4 * Global_3145858->f_51906.f_3));
	}
	if (Global_3145858->f_51906.f_4 > 0f)
	{
		fVar0 = (fVar0 + (fParam5 * Global_3145858->f_51906.f_4));
	}
	if (Global_3145858->f_51906.f_5 > 0f)
	{
		fVar0 = (fVar0 + (fParam6 * Global_3145858->f_51906.f_5));
	}
	if (Global_3145858->f_51906.f_7 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam7) * Global_3145858->f_51906.f_7));
	}
	if (Global_3145858->f_51906.f_8 > 0f)
	{
		fVar2 = to_float(iParam8);
		fVar3 = to_float(iParam7);
		fVar4 = (fVar3 / fVar2);
		fVar0 = (fVar0 + (fVar4 * Global_3145858->f_51906.f_8));
	}
	if (Global_3145858->f_51906.f_9 > 0f)
	{
		fVar0 = (fVar0 + (fParam10 * Global_3145858->f_51906.f_9));
	}
	if (Global_3145858->f_51906.f_10 > 0f)
	{
		fVar0 = (fVar0 + (fParam11 * Global_3145858->f_51906.f_10));
	}
	if (Global_3145858->f_51906.f_11 > 0f)
	{
		fVar0 = (fVar0 + (fParam12 * Global_3145858->f_51906.f_11));
	}
	if (Global_3145858->f_51906.f_12 > 0f)
	{
		fVar0 = (fVar0 + (fParam13 * Global_3145858->f_51906.f_12));
	}
	if (Global_3145858->f_51906.f_13 > 0f)
	{
		fVar0 = (fVar0 + (fParam14 * Global_3145858->f_51906.f_13));
	}
	if (Global_3145858->f_51906.f_14 > 0f)
	{
		fVar0 = (fVar0 + (fParam15 * Global_3145858->f_51906.f_14));
	}
	if (Global_3145858->f_51906.f_15 > 0f)
	{
		fVar0 = (fVar0 + (fParam16 * Global_3145858->f_51906.f_15));
	}
	if (Global_3145858->f_51906.f_16 > 0f)
	{
		fVar0 = (fVar0 + (fParam17 * Global_3145858->f_51906.f_16));
	}
	if (Global_3145858->f_51906.f_17 > 0f)
	{
		fVar0 = (fVar0 + (fParam18 * Global_3145858->f_51906.f_17));
	}
	if (Global_3145858->f_51906.f_18 > 0f)
	{
		fVar0 = (fVar0 + (fParam19 * Global_3145858->f_51906.f_18));
	}
	if (Global_3145858->f_51906.f_19 > 0f)
	{
		fVar0 = (fVar0 + (fParam20 * Global_3145858->f_51906.f_19));
	}
	if (Global_3145858->f_51906.f_20 > 0f)
	{
		fVar0 = (fVar0 + (fParam21 * Global_3145858->f_51906.f_20));
	}
	if (Global_3145858->f_51906.f_21 > 0f)
	{
		fVar0 = (fVar0 + (fParam22 * Global_3145858->f_51906.f_21));
	}
	if (Global_3145858->f_51906.f_22 > 0f)
	{
		fVar0 = (fVar0 + (fParam23 * Global_3145858->f_51906.f_22));
	}
	if (Global_3145858->f_51906.f_23 > 0f)
	{
		fVar0 = (fVar0 + (fParam24 * Global_3145858->f_51906.f_23));
	}
	if (Global_3145858->f_51906.f_24 > 0f)
	{
		fVar0 = (fVar0 + (fParam25 * Global_3145858->f_51906.f_24));
	}
	if (Global_3145858->f_51906.f_25 > 0f)
	{
		fVar0 = (fVar0 + (fParam26 * Global_3145858->f_51906.f_25));
	}
	if (Global_3145858->f_51906.f_26 > 0f)
	{
		fVar0 = (fVar0 + (fParam27 * Global_3145858->f_51906.f_26));
	}
	if (Global_3145858->f_51906.f_31 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam28) * Global_3145858->f_51906.f_31));
	}
	if (Global_3145858->f_51906.f_29 > 0f)
	{
		fVar0 = (IntToFloat(iParam30) * Global_3145858->f_51906.f_29);
	}
	if (Global_3145858->f_51906.f_30 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam29) * Global_3145858->f_51906.f_30));
	}
	if (Global_3145858->f_51906.f_28 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam34) * Global_3145858->f_51906.f_28));
	}
	if ((Global_3145858->f_51906.f_33 > 0f && fParam22 > 0f) && Global_2097152->f_30 > 0f)
	{
		fVar5 = (Global_2097152->f_30 + 2000f);
		fVar6 = (Global_2097152->f_30 * 0.9f);
		fVar7 = func_1471(fParam22, fVar6, fVar5);
		fVar8 = ((fVar5 - fVar7) / (fVar5 - fVar6));
		fVar0 = (fVar0 + (fVar8 * Global_3145858->f_51906.f_33));
	}
	if (Global_3145858->f_51906.f_34 > 0f)
	{
		fVar9 = (fParam22 / (to_float(iParam31) / 1000f));
		fVar10 = func_1471(fVar9, 0f, 15f);
		fVar11 = (fVar10 / 15f);
		fVar0 = (fVar0 + (fVar11 * Global_3145858->f_51906.f_34));
	}
	if (Global_3145858->f_51906.f_32 > 0f)
	{
		fVar12 = (fParam32 / 10000f);
		fVar0 = (fVar0 + (fVar12 * Global_3145858->f_51906.f_32));
	}
	if (Global_3145858->f_51906.f_27 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam33) * Global_3145858->f_51906.f_27));
	}
	if (Global_3145858->f_51906.f_6 > 0f)
	{
		if (bParam9)
		{
			fVar0 = (fVar0 + Global_3145858->f_51906.f_6);
		}
	}
	return fVar0;
}

bool func_1137(int iParam0)
{
	if ((func_238() && iParam0 >= 0) && iParam0 < 16)
	{
		return is_bit_set(&(Local_5197.f_27[iParam0]), 1);
	}
	return false;
}

void func_1138(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*Local_5197.f_745[iParam1] = { Local_6163[iParam0]->f_10 };
	MemCopy(&(Local_5197.f_745[iParam1]->f_8), {func_1611(Local_57[iParam0]->f_30, 0)}, 8);
	Local_5197.f_745[iParam1]->f_16 = Local_57[iParam0]->f_9;
	Local_5197.f_745[iParam1]->f_17 = func_1612(Local_57[iParam0]->f_9);
	(*uParam3)[iParam1] = uParam2;
}

void func_1139(var uParam0)
{
	uParam0->f_12[0] = _databinding_add_data_string(uParam0->f_11, "timerString", "00:00");
	uParam0->f_12[1] = _databinding_add_data_bool(uParam0->f_11, "isTimerLow", 0);
	uParam0->f_12[2] = _databinding_add_data_bool(uParam0->f_11, "isVisible", 0);
	uVar0 = _databinding_add_data_container(uParam0->f_11, "countDownTimer");
	uParam0->f_12[10] = _databinding_add_data_bool(uVar0, "isVisible", 0);
}

void func_1140(var uParam0, int iParam1, int iParam2)
{
	uVar0 = _databinding_add_data_container(uParam0->f_11, "score");
	uParam0->f_12[3] = _databinding_add_data_bool(uVar0, "visible", 0);
	uParam0->f_12[4] = _databinding_add_data_string(uVar0, "leftScore", "0");
	uParam0->f_12[7] = _databinding_add_data_string(uVar0, "rightScore", "0");
	uParam0->f_12[6] = _databinding_add_data_hash(uVar0, "leftScoreColor", iParam1);
	uParam0->f_12[9] = _databinding_add_data_hash(uVar0, "rightScoreColor", iParam2);
	uParam0->f_12[5] = _databinding_add_data_hash(uVar0, "leftScoreTextColor", -1886482671);
	uParam0->f_12[8] = _databinding_add_data_hash(uVar0, "rightScoreTextColor", -1886482671);
}

void func_1141(var uParam0, int iParam1, char* sParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, int iParam13)
{
	iVar0 = (iParam1 - 17);
	uParam0->f_12[iParam1] = _databinding_add_data_container(uParam0->f_11, sParam2);
	(*uParam0->f_49[iVar0])[0] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "visible", iParam9);
	(*uParam0->f_49[iVar0])[6] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "text", sParam4);
	(*uParam0->f_49[iVar0])[4] = _databinding_add_data_float(&(uParam0->f_12[iParam1]), "meterValue", fParam3);
	(*uParam0->f_49[iVar0])[5] = _databinding_add_data_hash(&(uParam0->f_12[iParam1]), "meterColor", iParam7);
	(*uParam0->f_49[iVar0])[7] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "txd", sParam5);
	(*uParam0->f_49[iVar0])[8] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "txn", sParam6);
	(*uParam0->f_49[iVar0])[9] = _databinding_add_data_hash(&(uParam0->f_12[iParam1]), "imgColor", iParam8);
	(*uParam0->f_49[iVar0])[10] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "secondaryTxd", sParam11);
	(*uParam0->f_49[iVar0])[11] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "secondaryTxn", sParam12);
	(*uParam0->f_49[iVar0])[12] = _databinding_add_data_hash(&(uParam0->f_12[iParam1]), "secondaryImgColor", iParam13);
	(*uParam0->f_49[iVar0])[2] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "overlayVisible", iParam10);
	(*uParam0->f_49[iVar0])[15] = _databinding_add_data_hash(&(uParam0->f_12[iParam1]), "overlayColor", iParam7);
	(*uParam0->f_49[iVar0])[13] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "overlayTxd", "scoretimer_textures");
	(*uParam0->f_49[iVar0])[14] = _databinding_add_data_string(&(uParam0->f_12[iParam1]), "overlayTxn", "SCORETIMER_GENERIC_CROSS");
	(*uParam0->f_49[iVar0])[1] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "meterVisible", 1);
	(*uParam0->f_49[iVar0])[3] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "isIconBackgroundVisible", 0);
	(*uParam0->f_49[iVar0])[16] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "showBlinkIcon", 0);
	(*uParam0->f_49[iVar0])[17] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "showPulse", 0);
	(*uParam0->f_49[iVar0])[18] = _databinding_add_data_bool(&(uParam0->f_12[iParam1]), "showAlternateIcons", 0);
}

void func_1142(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_1143(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_1144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2039501127:
			return 2;
		case -1890923540:
			return 69;
		case -1698389833:
			return 70;
		case -1540158808:
			return 73;
		case -1533983348:
			return 19;
		case -1501015261:
			return 57;
		case -1458496107:
			return 24;
		case -1438502509:
			return 12;
		case -1329294210:
			return 4;
		case -1321090275:
			return 15;
		case -1312722280:
			return 17;
		case -1308798499:
			return 10;
		case -1307589538:
			return 22;
		case -1277875962:
			return 28;
		case -1257079286:
			return 64;
		case -1221619492:
			return 63;
		case -1219452364:
			return 58;
		case -992645810:
			return 18;
		case -950801774:
			return 7;
		case -939910718:
			return 36;
		case -878696721:
			return 52;
		case -843335391:
			return 9;
		case -821494676:
			return 74;
		case -802866321:
			return 1;
		case -713787803:
			return 13;
		case -703795840:
			return 78;
		case -687714247:
			return 50;
		case -666550357:
			return 60;
		case -655468511:
			return 56;
		case -638016860:
			return 26;
		case -615934178:
			return 76;
		case -614515457:
			return 25;
		case -580272278:
			return 79;
		case -520308917:
			return 43;
		case -464093109:
			return 65;
		case -350176926:
			return 77;
		case -301326588:
			return 11;
		case -156881965:
			return 20;
		case -152594716:
			return 41;
		case -85973785:
			return 38;
		case -58731503:
			return 29;
		case 0:
			return 0;
		case 63218849:
			return 46;
		case 149540493:
			return 54;
		case 206509498:
			return 5;
		case 243900865:
			return 80;
		case 279823206:
			return 42;
		case 300973492:
			return 75;
		case 307335450:
			return 16;
		case 312878349:
			return 30;
		case 321607379:
			return 40;
		case 354637832:
			return 27;
		case 361976649:
			return 51;
		case 460855531:
			return 68;
		case 479779912:
			return 72;
		case 607449742:
			return 71;
		case 650587855:
			return 61;
		case 756696646:
			return 3;
		case 764304959:
			return 59;
		case 786066588:
			return 35;
		case 810310130:
			return 45;
		case 833685806:
			return 14;
		case 866669490:
			return 66;
		case 988196598:
			return 62;
		case 1036683068:
			return 33;
		case 1129169015:
			return 39;
		case 1130424855:
			return 47;
		case 1179535804:
			return 6;
		case 1217805983:
			return 34;
		case 1315487827:
			return 8;
		case 1379907684:
			return 23;
		case 1380454690:
			return 31;
		case 1413392437:
			return 53;
		case 1609644258:
			return 21;
		case 1668754447:
			return 48;
		case 1776048844:
			return 55;
		case 1885194679:
			return 67;
		case 1894655054:
			return 44;
		case 1932263154:
			return 32;
		case 2001915594:
			return 37;
		case 2058416949:
			return 49;
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

bool func_1145()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1146()
{
	if (func_83())
	{
		if (func_1613(725) < 3)
		{
			func_1614(725, 1);
		}
	}
	else if (func_1613(724) < 3)
	{
		func_1614(724, 1);
	}
	if (func_334())
	{
		if (func_1613(752) < 3)
		{
			func_1614(752, 1);
		}
	}
	if (func_1613(713) < 5)
	{
		func_1614(713, 1);
	}
}

void func_1147(var uParam0)
{
	func_1615(uParam0, 0f);
}

bool func_1148(int iParam0)
{
	return iParam0 != 0;
}

bool func_1149(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1150(var uParam0)
{
	return func_1149(*uParam0, 2);
}

float func_1151()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_1152(int iParam0)
{
	return is_bit_set(iLocal_13, iParam0);
}

bool func_1153(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (iParam1 == -1329294210)
	{
		return true;
	}
	return func_984(&(uParam0->f_969), func_1144(iParam1, 1));
}

int func_1154(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1155(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, var uParam6, float fParam7, int iParam8, int iParam9)
{
	if (uParam0->f_968 > -1)
	{
		return;
	}
	if (func_1616(iParam1) != 1)
	{
		return;
	}
	if (uParam0->f_379.f_226 >= 15)
	{
		return;
	}
	if (!func_1617(uParam0, iParam1, iParam3))
	{
		return;
	}
	Var1.f_1 = -1;
	Var1.f_7 = -1;
	Var1 = iParam1;
	Var1.f_1 = iParam3;
	Var1.f_6 = uParam6;
	Var1.f_4 = iParam2;
	Var1.f_8 = sParam4;
	Var1.f_14 = iParam5;
	Var1.f_5 = fParam7;
	Var1.f_7 = uVar0;
	Var1.f_2 = iParam8;
	Var1.f_3 = iParam9;
	func_1618(uParam0, &Var1);
}

int func_1156()
{
	if (func_745())
	{
		return Global_2097152->f_6317[Local_57[iVar6157]->f_9]->f_3;
	}
	return Global_2097152->f_257;
}

int func_1157()
{
	if (func_745())
	{
		return Global_2097152->f_6317[Local_57[iVar6157]->f_9]->f_2;
	}
	return Global_2097152->f_256;
}

bool func_1158()
{
	return Global_2097152->f_6485 == 1;
}

void func_1159(var uParam0)
{
	if (func_1153(&Local_12276, 1894655054))
	{
		if (func_268(&(Local_57[iVar6156]->f_18)))
		{
			func_1619(uParam0, 1894655054, (func_269(&(Local_57[iVar6156]->f_18), 0, 0) + iVar13960), -1, "RC_TIME", 0, 768, 109029619, 109029619);
		}
		else if (func_264(iVar6156))
		{
			iVar0 = Local_57[iVar6156]->f_1;
			if (iVar0 > Global_2097152->f_6025)
			{
				iVar0 = Global_2097152->f_6025;
			}
			func_1619(uParam0, 1894655054, iVar0, -1, "RC_TIME", 0, 0, 109029619, 109029619);
		}
	}
	if ((func_1153(&Local_12276, -878696721) && func_384(Local_57[iVar6156]->f_3) > 0) && func_268(&(Local_57[iVar6156]->f_22)))
	{
		func_1619(uParam0, -878696721, (func_384(Local_57[iVar6156]->f_3) - func_269(&(Local_57[iVar6149]->f_22), 0, 0)), -1, "RC_CHKTIM", 0, 0, 109029619, 109029619);
	}
	if ((func_1153(&Local_12276, 810310130) && func_370()) && func_268(&(Local_57[iVar6156]->f_20)))
	{
		func_1619(uParam0, 810310130, func_269(&(Local_57[iVar6156]->f_20), 0, 0), -1, "RC_LAPTIM", 0, 0, 109029619, 109029619);
	}
	if (func_1153(&Local_12276, 1413392437))
	{
		iVar1 = -1;
		if ((Local_5197.f_166 > 0 || Local_5197.f_165 > 0) && func_268(&(Local_5197.f_168)))
		{
			if (Local_5197.f_165 > 0)
			{
				iVar1 = (Local_5197.f_165 - func_269(&(Local_5197.f_168), 0, 0));
			}
			else
			{
				iVar1 = (Local_5197.f_166 - func_269(&(Local_5197.f_168), 0, 0));
			}
		}
		if ((Local_5197.f_167 > 0 && Global_2097152->f_6022 > 0) && func_268(&(Local_5197.f_170)))
		{
			iVar3 = (Global_2097152->f_6022 - func_269(&(Local_5197.f_170), 0, 0));
			if (iVar1 == -1 || iVar3 < iVar1)
			{
				iVar1 = iVar3;
				bVar2 = true;
			}
		}
		if (iVar1 != -1)
		{
			iVar4 = 0;
			func_1620(&uLocal_13964, iVar1, 0);
			func_1621(&uLocal_13964, 2);
			if (iVar1 < 10000 && func_1622(bVar2))
			{
				iVar4 = 1;
				if (!is_bit_set(iVar13483, 1))
				{
					uLocal_7388 = func_335("RC_ELIMWAR", 1105014447, 10000, 0, 0, 0, 1);
					set_bit(&uLocal_13486, 1);
				}
			}
			else if (is_bit_set(iVar13483, 1))
			{
				func_122(&uLocal_13964);
				clear_bit(&uLocal_13486, 1);
				if (func_1148(iVar7385))
				{
					_0x2f901291ef177b02(iVar7385, 0);
				}
			}
			func_1619(uParam0, 1413392437, iVar1, -1, "RC_ELITIM", 0, iVar4, 109029619, 109029619);
		}
		else if (is_bit_set(iVar13483, 1))
		{
			func_122(&uLocal_13964);
			clear_bit(&uLocal_13486, 1);
			if (func_1148(iVar7385))
			{
				_0x2f901291ef177b02(iVar7385, 0);
			}
		}
	}
	iVar5 = -1;
	iVar6 = Global_2097152->f_6018;
	if (Global_2097152->f_6017 > 0)
	{
		if (func_268(&(Local_57[iVar6156]->f_18)))
		{
			iVar5 = (Global_2097152->f_6017 - func_269(&(Local_57[iVar6156]->f_18), 0, 0));
		}
		else
		{
			iVar5 = (Global_2097152->f_6017 - func_269(&(Local_5197.f_159), 0, 0));
		}
		iVar6 = Global_2097152->f_6017;
	}
	if (Global_2097152->f_6018 != -1 && func_268(&(Local_5197.f_743)))
	{
		iVar7 = func_269(&(Local_5197.f_743), 0, 0);
		iVar8 = (Global_2097152->f_6018 - iVar7);
		if (iVar5 == -1 || iVar8 < iVar5)
		{
			iVar5 = iVar8;
			iVar6 = Global_2097152->f_6018;
		}
	}
	if (Local_5197.f_162 > 0 && func_268(&(Local_5197.f_159)))
	{
		iVar9 = (Local_5197.f_162 - func_269(&(Local_5197.f_159), 0, 0));
		if (iVar9 <= 60000)
		{
			if (iVar5 == -1 || iVar9 < iVar5)
			{
				iVar5 = iVar9;
				iVar6 = 60000;
			}
		}
	}
	if (iVar5 != -1 && func_1153(&Local_12276, 149540493))
	{
		func_1621(&uLocal_13964, 2);
		func_1620(&uLocal_13964, (iVar5 - 500), 0);
		func_1619(uParam0, 149540493, iVar5, -1, "RC_ENDTIM", iVar6, 136, 859817522, 109029619);
	}
	if (func_1153(&Local_12276, -1219452364))
	{
		iVar10 = 0;
		while (iVar10 < 2)
		{
			if (is_bit_set(Global_3145858->f_36480[iVar10]->f_7, 17))
			{
				func_1619(uParam0, -1219452364, &(uLocal_13685[iVar10]), -1, "RC_TRETA", 0, 0, 109029619, 109029619);
			}
			iVar10++;
		}
	}
	if (is_bit_set(iVar13505, 30) && func_1153(&Local_12276, -655468511))
	{
		if (func_268(&uLocal_12254))
		{
			if (func_269(&uLocal_12254, 0, 0) < iVar12261)
			{
				iVar11 = (iVar12261 - func_269(&uLocal_12254, 0, 0));
				func_1619(uParam0, -655468511, iVar11, -1, &Local_12256, 0, 0, 109029619, 109029619);
			}
			else
			{
				clear_bit(&uLocal_13508, 30);
				func_270(&uLocal_12254);
				iLocal_12264 = 0;
				StringCopy(&Local_12256, "", 64);
			}
		}
	}
	func_1623(&uLocal_13964);
}

int func_1160(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (func_233(iVar0, 255))
		{
			if (Local_57[iVar0]->f_24 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1161()
{
	if (Global_1940144->f_20)
	{
		if (Global_1940144->f_5 == 1)
		{
			return 1;
		}
		if (Global_1940144->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1162()
{
	if (Global_1102219->f_26.f_3440.f_4 && !func_464())
	{
		Global_1102219->f_26.f_3440.f_4 = 0;
	}
	return Global_1102219->f_26.f_3440.f_4;
}

bool func_1163()
{
	return (func_1624(2) && func_1625());
}

void func_1164(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!is_bit_set(uParam0->f_158, 17))
	{
		if (is_bit_set(uParam0->f_159, 22))
		{
			Global_1940144->f_112 = 1;
		}
		else
		{
			Global_1940144->f_112 = 0;
		}
		set_bit(&(uParam0->f_158), 17);
	}
	if (Global_1940144->f_111)
	{
		if (is_bit_set(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0]->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1165(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "Title");
	uParam0->f_2 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
	uParam0->f_142 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
}

void func_1166(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1626(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1627(uParam0, uParam1, bParam5, iParam6, iParam2, is_bit_set(uParam0->f_159, 5), iParam10);
}

void func_1167(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_1628(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_1627(uParam0, uParam1, bParam3, iParam2, iParam4, is_bit_set(uParam0->f_159, 5), iParam6);
}

void func_1168(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else if (func_1629(&((*uParam1)[iVar0]->f_14)))
		{
			func_1630(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_1169(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else
		{
			func_1631(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1170(var uParam0, bool bParam1)
{
	bVar0 = func_1632(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_1105(1);
			func_1633(&(uParam0->f_199), 1);
			break;
		case 1:
			_0xd9130842d7226045("MP_Leaderboard_Sounds", 1);
			func_1633(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = _launch_app_by_hash_with_entry(595204529, func_1634(bParam1));
			if (iVar1 == 0)
			{
				func_1633(&(uParam0->f_199), 3);
			}
			else if (_is_app_running(595204529))
			{
				func_1633(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (_is_app_running(595204529))
			{
				if (!bVar0)
				{
					play_sound_frontend("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				_request_uiapp_transition_by_hash(595204529, func_1635());
				func_1633(&(uParam0->f_199), 4);
			}
			else if (func_1636())
			{
				func_1633(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (is_bit_set(uParam0->f_158, 13))
			{
				if (_is_app_running(595204529))
				{
					if (!bVar0)
					{
						play_sound_frontend("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					_close_app_by_hash(595204529);
					func_1633(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				clear_bit(&(uParam0->f_158), 13);
				func_1633(&(uParam0->f_199), 1);
			}
			else
			{
				func_1633(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_655(uParam0, bParam1);
			break;
	}
}

void func_1171(var uParam0)
{
	func_723(&(uParam0->f_162));
	if ((is_bit_set(uParam0->f_158, 14) || is_bit_set(uParam0->f_158, 15)) || is_bit_set(uParam0->f_158, 16))
	{
		return;
	}
	func_929(&(uParam0->f_162), 0);
	set_bit(&(uParam0->f_158), 14);
}

void func_1172(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1338(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_1173(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1637(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_1638(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1639(iParam1, iParam2, 0);
						return 1;
					}
					func_1640(iParam1, iParam2, iVar1);
					func_1639(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1641(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1639(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1639(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1639(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1641(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1639(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_1639(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1641(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1639(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1174(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_1637(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1640(iParam0, iParam1, 0);
			func_1639(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1641(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_1639(iParam0, iParam1, 0);
			break;
	}
}

void func_1175(var uParam0)
{
	if (uParam0->f_894 || uParam0->f_897 == 0)
	{
		uParam0->f_879 = 1;
		if (uParam0->f_2 == 2)
		{
			func_1142(uParam0, 3);
		}
	}
	else
	{
		uParam0->f_879 = 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (_uiflowblock_is_loaded(*uParam0) && !uParam0->f_879)
			{
				func_1142(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_897 != 0)
			{
				_uiflowblock_enter(*uParam0, func_1642(uParam0->f_897));
				if (!_uistatemachine_exists(1546991729))
				{
					_uistatemachine_create(1546991729, *uParam0);
				}
			}
			func_648(9);
			func_1643(uParam0);
			func_1644(uParam0);
			switch (uParam0->f_897)
			{
				case 456605338:
					func_1645(uParam0);
					break;
				case 1083726117:
				case 2091842205:
					func_1646(uParam0);
					break;
				case 1375802800:
					func_1647(uParam0);
					break;
				case -1838730762:
					func_1648(uParam0);
					break;
				case -1220700382:
					func_1649(uParam0);
					break;
				case 1174457346:
					func_1650(uParam0);
					break;
				case 593332131:
					func_1651(uParam0);
					break;
				case -2146584:
					func_1652(uParam0);
					break;
				case 344700063:
				case 1485013169:
					func_1139(uParam0);
					break;
				case 1936484400:
					func_1653(uParam0);
					break;
				case 1835758938:
					func_1654(uParam0);
					break;
				case -438934027:
					func_1655(uParam0);
					break;
				case 244605310:
					func_1656(uParam0);
					break;
				case 615217735:
					func_1657(uParam0);
					break;
				case 1117913623:
				case 1928276294:
					func_1658(uParam0);
					break;
				case -699819638:
					func_1659(uParam0);
					break;
				case 283413025:
					func_1660(uParam0);
					break;
				case 1443986063:
					func_1661(uParam0);
					break;
				case -818658900:
					func_1662(uParam0);
					break;
			}
			func_1142(uParam0, 2);
			break;
		case 2:
			func_1663(uParam0);
			switch (uParam0->f_897)
			{
				case 456605338:
					func_1664(uParam0);
					break;
				case 2091842205:
					func_1665(uParam0);
					break;
				case 1083726117:
					func_1666(uParam0);
					break;
				case 1375802800:
					func_1667(uParam0);
					break;
				case -699819638:
					func_1668(uParam0);
					break;
				case -1838730762:
					func_1669(uParam0);
					break;
				case -1220700382:
					func_1670(uParam0);
					break;
				case 1174457346:
					func_1671(uParam0);
					break;
				case 593332131:
				case 1443986063:
					func_1672(uParam0);
					break;
				case -2146584:
					func_1673(uParam0);
					break;
				case 344700063:
					func_1674(uParam0);
					break;
				case -438934027:
					func_1675(uParam0);
					break;
				case 1835758938:
				case 1936484400:
					func_1676(uParam0);
					break;
				case 1117913623:
					func_1677(uParam0);
					break;
				case 1928276294:
					func_1678(uParam0);
					break;
				case 244605310:
					func_1679(uParam0);
					break;
				case 283413025:
					func_1680(uParam0);
					break;
				case 615217735:
					func_1681(uParam0);
					break;
				case -818658900:
					func_1682(uParam0);
					break;
			}
			break;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_databinding_write_data_bool(&(uParam0->f_12[3]), false);
				func_1683(uParam0);
				func_1644(uParam0);
				func_411(9, 0);
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_1142(uParam0, 4);
			}
			else
			{
				func_1142(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				if (_uistatemachine_exists(1546991729))
				{
					_uistatemachine_destroy(1546991729);
				}
				func_1142(uParam0, 0);
			}
			break;
		case 5:
			func_1683(uParam0);
			func_757(uParam0);
			break;
	}
}

void func_1176(var uParam0)
{
	sVar0 = "Out_of_Bounds";
	sVar1 = "RDRO_Countdown_Sounds";
	if ((((((((((((_is_app_running(29649618) && _0x96fd694fe5be55dc(29649618) != 1271225230) || _is_app_running(2066271527)) || _is_app_running(683057487)) || _is_app_running(-1318692639)) || _is_app_running(-779472066)) || _is_app_running(-1379742803)) || _is_app_running(1916894743)) || _is_app_running(-1641598689)) || _is_app_running(1037810546)) || _is_app_running(-605293197)) || _is_app_running(347537322)) || _is_app_running(-479097442))
	{
		bVar2 = true;
	}
	if (uParam0->f_882 == 0)
	{
		if (uParam0->f_894 && !bVar2)
		{
			func_1684(uParam0, 1);
		}
	}
	if (uParam0->f_882 == 1)
	{
		_databinding_write_data_bool(&(uParam0->f_12[33]), true);
		animpostfx_play("MP_OutofAreaDirectional");
		_0x6339c1ea3979b5f7("default", "out_of_bounds_scenes");
		_hide_hud_component(-2124237476);
		func_1685(4);
		func_1686();
		Var3 = { *uParam0->f_379[uParam0->f_883] };
		if (uParam0->f_895 < 0)
		{
			iVar18 = (Var3.f_4 / 1000);
			uParam0->f_895 = get_sound_id();
			_0xce5d0ffe83939af1(uParam0->f_895, sVar0, sVar1, 1);
			_0x503703ec1781b7d6(uParam0->f_895, "Time", to_float(iVar18));
		}
		func_1684(uParam0, 2);
	}
	if (uParam0->f_882 == 2)
	{
		Var19 = { *uParam0->f_379[uParam0->f_883] };
		_databinding_write_data_string(&(uParam0->f_12[34]), _create_var_string(2, "UI_L_ONEPAR", (Var19.f_4 / 1000)));
		_0x981c7d863980fa51();
		_0x735762e8d7573e42(1, uParam0->f_896, 2.5f);
		if (!uParam0->f_894 || bVar2)
		{
			func_1684(uParam0, 3);
		}
	}
	if (uParam0->f_882 == 3)
	{
		_databinding_write_data_bool(&(uParam0->f_12[33]), false);
		func_1687();
		_0x9428447ded71fc7e("out_of_bounds_scenes");
		_0x3210bcb36af7621b(uParam0->f_895);
		uParam0->f_895 = -1;
		_0xc5cb91d65852ed7e("MP_OutofAreaDirectional");
		_display_hud_component(-2124237476);
		func_759(4);
		_0x981c7d863980fa51();
		uParam0->f_896 = 0;
		func_1684(uParam0, 0);
	}
}

void func_1177(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_1178(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_1179()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_1180(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_1181(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1182()
{
	return -1;
}

char* func_1183(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1184(var uParam0)
{
	iVar0 = func_1688();
	*uParam0 = &Global_3145858->f_241[iVar0];
	uParam0->f_1 = Global_3145858->f_241[iVar0]->f_1;
	if (*uParam0 == 2)
	{
		uParam0->f_1 = func_1185();
		*uParam0 = 3;
	}
	uParam0->f_3 = Global_3145858->f_241[iVar0]->f_2;
	uParam0->f_4 = Global_3145858->f_241[iVar0]->f_3;
	uParam0->f_5 = 0;
}

int func_1185()
{
	iVar0 = _0x1359c181bc625503();
	iVar0 = func_868(iVar0);
	if (iVar0 == 0)
	{
		iVar1 = 0;
		iVar2 = 22;
		iVar3 = get_random_int_in_range(iVar1 * 1000, iVar2 * 1000);
		iVar4 = floor((to_float(iVar3) / 1000f));
		iVar0 = func_1689(iVar4, 1);
		if (iVar0 == 1679686673)
		{
			iVar0 = 603685163;
		}
		if (iVar0 == 0 || iVar0 == -1439599467)
		{
			iVar0 = 1632247697;
		}
	}
	return iVar0;
}

void func_1186(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_1690(iParam0);
	}
}

void func_1187(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_1691(iParam0);
	}
}

void func_1188(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_1189(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_1190(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_1191(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

bool func_1192(int iParam0)
{
	return func_727(&(Global_1956200->f_1753), iParam0, 1);
}

int func_1193(int iParam0)
{
	if (func_732(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1194(int iParam0)
{
	if (func_731(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1195(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_1196()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1071686->f_21416.f_1[iVar0] = 0;
		iVar0++;
	}
}

bool func_1197(int iParam0)
{
	if (func_1692(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_1693(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_1198(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_1694(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

struct<2> func_1199(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_1200(var uParam0, var uParam1)
{
	return uParam0;
}

int func_1201(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_1202(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_1695())
	{
		return 636925055;
	}
	return -963477619;
}

int func_1203(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1696(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_1204(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1205(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_1697(iParam0))
	{
		return true;
	}
	return !func_1204(iParam0, 0);
}

bool func_1206(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_1692(iParam0))
	{
		return false;
	}
	if (func_1697(iParam0))
	{
		return false;
	}
	if (func_1698(iParam0))
	{
		return true;
	}
	return func_1699(iParam0);
}

int func_1207(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_670(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

bool func_1209(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_1210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_11(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1700(Var0);
}

void func_1211()
{
	Global_1952637->f_3467 = 0;
	Global_1952637->f_3467.f_1 = 0;
	Global_1952637->f_3467.f_8 = 0;
	Global_1952637->f_3467.f_2 = 0;
	Global_1952637->f_3467.f_3[0] = 0;
	Global_1952637->f_3467.f_3[1] = 0;
	Global_1952637->f_3467.f_3[2] = 0;
	Global_1952637->f_3467.f_3[3] = 0;
	Global_1952637->f_3467.f_9 = 0;
	Global_1952637->f_3467.f_10 = 0;
	Global_1952637->f_3467.f_11 = 0;
	if (Global_1952637->f_3467.f_12)
	{
		_0x13e7320c762f0477(Global_1952637->f_3467.f_13);
	}
	Global_1952637->f_3467.f_12 = 0;
	func_181(32768);
	func_1701(1108822547, 8, 6);
}

void func_1212(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_1213(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_1214(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1702(iVar0, iParam0))
		{
			func_1703(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1215(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_1704(Global_1952637->f_2843);
		func_1705(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_1706(iParam3))
	{
		func_1707(0);
	}
	if (func_1209(32768))
	{
		func_1708(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_1709(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1709(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1210(2, 0, iVar0, 0, 0);
		func_1210(4, 0, 0, 0, 0);
		func_1210(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_1210(2, 0, iVar0, iParam0, 0);
	}
	func_1710();
}

void func_1216(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1711((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1217()
{
	func_1712(0);
	func_1712(1);
	func_1712(2);
	func_1712(3);
}

void func_1218()
{
	func_1713(0);
	func_1713(1);
	func_1713(2);
	func_1713(3);
}

float func_1219(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

void func_1220()
{
	if (func_1192(2))
	{
		func_768(0);
	}
	else
	{
		func_768(1);
	}
	func_1714(1);
	_0x7146cf430965927c(15, true);
	_0x7146cf430965927c(16, true);
}

void func_1221()
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_1318(iVar1, 2);
		func_1715(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_1222(var uParam0, int iParam1)
{
	iVar0 = func_1310(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_1716())
	{
		func_1717(iParam1);
		return;
	}
	_0x7ff72de061df55e2(iParam1, 0, to_float(iVar0));
	if (func_738() == 0)
	{
		iVar1 = round(_0x89bfdf6d53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	set_entity_max_health(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = get_entity_max_health(iParam1, true);
			func_1285(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1285(iVar3, 0);
			}
			else
			{
				iVar3 = get_entity_max_health(iParam1, true);
				func_1285(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1223(var uParam0, int iParam1)
{
	if (func_1716())
	{
		return;
	}
	iVar0 = func_1312(2);
	fVar1 = -1f;
	_0x7ff72de061df55e2(iParam1, 1, to_float(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = _get_ped_max_stamina(iParam1);
			func_1286(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1286(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1286(fVar1, 0);
			}
			else
			{
				fVar1 = _get_ped_max_stamina(iParam1);
				func_1286(fVar1, 0);
			}
			break;
	}
}

void func_1224(var uParam0, int iParam1)
{
	if (func_1716())
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = func_1311(2);
	fVar2 = -1f;
	_0x7ff72de061df55e2(iParam1, 2, to_float(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1719(func_1718());
			break;
		case 0:
			fVar2 = _0x029884fb65821b07(iVar0);
			func_1719(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1719(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1719(fVar2);
			}
			else
			{
				fVar2 = _0x029884fb65821b07(iVar0);
				func_1719(fVar2);
			}
			break;
	}
	func_798(0f);
}

void func_1225(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1720(iVar1))
		{
			iVar2 = func_1721(iVar1);
			fVar0 = func_1722(uParam0, iVar2);
			func_1723(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1724();
}

void func_1226()
{
	if (Global_1956200->f_1431.f_108.f_1 != 0f)
	{
		func_1518(0, Global_1956200->f_1431.f_108.f_1, 0, 0);
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_3 != 0f)
	{
		func_1518(1, Global_1956200->f_1431.f_108.f_3, 0, 0);
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_2 != 0f)
	{
		func_1518(2, Global_1956200->f_1431.f_108.f_2, 0, 0);
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_4 != 0f)
	{
		func_1518(19, Global_1956200->f_1431.f_108.f_4, 0, 0);
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_6 != 0f)
	{
		func_1518(18, Global_1956200->f_1431.f_108.f_6, 0, 0);
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_5 != 0f)
	{
		func_1518(20, Global_1956200->f_1431.f_108.f_5, 0, 0);
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	func_1725();
}

void func_1227(int iParam0)
{
	Global_1956200->f_1431.f_3 = iParam0;
}

void func_1228(var uParam0)
{
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_1229(var uParam0)
{
	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_1230(var uParam0)
{
	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_1231(var uParam0)
{
	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_1232(var uParam0)
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
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_1233(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1234(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1235(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1236(var uParam0)
{
	*uParam0 = uVar0;
}

bool func_1237(int iParam0)
{
	return func_1088(iParam0, 2);
}

void func_1238(int iParam0)
{
	Global_1956200->f_1710.f_1 = 0f;
	Global_1956200->f_1710 = iParam0;
}

void func_1239(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!is_entity_dead(Global_1296859->f_8))
		{
			set_player_targeting_mode(iParam1);
		}
	}
	else if (iParam0 == 1)
	{
		if (!is_entity_dead(Global_1296859->f_8))
		{
			_0x19b4f71703902238(iParam1);
		}
	}
}

int func_1240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_1241(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (func_1726(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1727(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1728(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1729(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_816(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1730(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1731(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_1242(int iParam0)
{
	iVar0 = func_1243(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_1244(int iParam0, int iParam1)
{
	iVar0 = func_1732(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1247(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1245(int iParam0, int iParam1, int iParam2)
{
	if (!func_815(iParam1))
	{
		return 0;
	}
	if (!func_1733(iParam0))
	{
		return 0;
	}
	iVar0 = func_1247(iParam0, 1);
	func_1734(iParam0, iParam1, iParam2);
	if (func_1735(*Global_1146212->f_35859.f_3116[iVar0]) && func_1736(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1737(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1738(vVar1))
		{
			if (func_1739(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1740(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1741(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1741(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_1246(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_1248(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1249(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1250(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

bool func_1251(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(Global_3145858->f_52165[iParam0]->f_7, (8 + iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1252(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(Global_3145858->f_52165[iParam0]->f_7, (0 + iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1253(char* sParam0, var uParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	if (iParam3 >= iVar0)
	{
		return 0;
	}
	Var1 = { *sParam0 };
	iVar17 = -1;
	iVar19 = iParam3;
	while (iVar19 <= (iVar0 - 1))
	{
		if (are_strings_equal(_get_text_substring(&Var1, iVar19, iVar19 + 1), "#"))
		{
			iVar17 = 0;
			while (iVar17 < 32)
			{
				if (func_1742(&Var1, iVar17, iVar19, uParam1, bParam2))
				{
					bVar18 = true;
				}
				else
				{
					iVar17++;
				}
			}
		}
		if (bVar18)
		{
		}
		else
		{
			iVar19++;
		}
	}
	if (!are_strings_equal(&Var1, sParam0))
	{
		*sParam0 = { Var1 };
		func_1253(sParam0, uParam1, bParam2, iVar19);
		return 1;
	}
	return 0;
}

void func_1254(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, int iParam6)
{
	*iParam6 = 0;
	iVar0 = &Global_3145858->f_51943[iParam0]->f_5[0];
	iVar1 = &Global_3145858->f_51943[iParam0]->f_5[1];
	if (iVar0 != -1)
	{
		*sParam2 = { *Global_3145858->f_52528[iVar0] };
		*iParam4 = func_1255(iVar0);
		*iParam6++;
	}
	if (iVar1 != -1)
	{
		if (*iParam6 == 0)
		{
			*sParam2 = { *Global_3145858->f_52528[iVar1] };
			*iParam4 = func_1255(iVar1);
		}
		else
		{
			*sParam3 = { *Global_3145858->f_52528[iVar1] };
			*uParam5 = func_1255(iVar1);
		}
		*iParam6++;
	}
	if ((iVar0 != -1 && is_bit_set(Global_3145858->f_52528[iVar0]->f_16, 1)) && !*iParam4)
	{
		func_1253(sParam2, uParam1, &uVar2, 0);
	}
	if ((iVar1 != -1 && is_bit_set(Global_3145858->f_52528[iVar1]->f_16, 1)) && !*uParam5)
	{
		func_1253(sParam3, uParam1, &uVar2, 0);
	}
}

bool func_1255(int iParam0)
{
	return func_1743(Global_3145858->f_52528[iParam0]->f_17, 0);
}

var func_1256(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = cParam0;
	vVar13.f_2 = cParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, bParam6, iParam7);
	return uVar20;
}

var func_1257(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, var uParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = cParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, bParam7, iParam8, uParam9);
	return uVar20;
}

void func_1258(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_847(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1744() || bParam6)
	{
		func_1745(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_851(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_851(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1746(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_773(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_1747(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_849(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_1748(iParam0, 474910316))
	{
		sVar17 = func_1749(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_1748(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_1750(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_852(iParam0);
	if ((func_1751(iVar12) && func_1748(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1752(iParam0);
	}
	else if (func_773(iParam0) == -1037537535)
	{
		iVar19 = func_1753(iParam0);
		if (func_847(iVar19, 0))
		{
			iVar18 = func_852(iVar19);
		}
	}
	if (func_1754(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1755(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_498(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_1756(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1757(iParam0, &cVar22))
		{
			sVar21 = func_837(func_1758(cVar22), 109029619);
		}
	}
	func_853(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

bool func_1259(int iParam0, int iParam1, float fParam2)
{
	if (fParam2 == 0f)
	{
		return false;
	}
	if (fParam2 > 1f)
	{
		return false;
	}
	if (fParam2 < -1f)
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = func_1759(iParam0, iParam1);
	if (!func_1760(iParam1, &iVar1))
	{
		return false;
	}
	iVar2 = get_attribute_rank(iParam0, iVar1) + 2;
	fVar3 = (to_float(iVar0) / to_float(iVar2));
	fVar4 = ((fVar3 * fParam2) * IntToFloat(iVar2));
	switch (iParam1)
	{
		case 0:
			func_1761(iParam0, fVar4);
			break;
		case 1:
			func_1762(iParam0, fVar4);
			break;
	}
	return true;
}

bool func_1260(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = iVar6149;
	}
	return is_bit_set(Local_57[iParam0]->f_13, 11);
}

void func_1261(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	get_model_dimensions(iVar0, &vVar1, &vVar4);
	vVar10 = { vVar4 - vVar1 };
	vVar7 = { vVar1 + vVar10 / Vector(2f, 2f, 2f) };
	vVar13 = { get_offset_from_entity_in_world_coords(iParam0, vVar7) };
	use_particle_fx_asset("scr_net_target_races");
	start_particle_fx_non_looped_at_coord("scr_net_target_destroy_burst", vVar13, 0f, 0f, 0f, 1f, false, false, false);
	if (func_1266(iVar0))
	{
		fVar16 = func_1763(iVar0);
		iVar17 = get_entity_bone_index_by_name(iParam0, "p_targetArchery02xTarget");
		if (iVar17 != -1)
		{
			use_particle_fx_asset("scr_net_target_races");
			_0xc695870b8a149b96("scr_net_target_fire_ring_burst_mp", iParam0, vVar7, 0f, 0f, 0f, iVar17, fVar16, 0, 0, 0);
		}
		else
		{
			use_particle_fx_asset("scr_net_target_races");
			start_particle_fx_non_looped_on_entity("scr_net_target_fire_ring_burst_mp", iParam0, vVar7, 0f, 0f, 0f, fVar16, false, false, false);
		}
	}
}

void func_1262(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = &Global_2097152->f_258[iParam0]->f_1[iVar0]->f_25[iVar1];
			if (iVar2 > -1)
			{
				func_1398(iVar2);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_1263(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = Global_2097152->f_258[iParam0]->f_1[iVar0]->f_33;
		if (iVar1 > -1)
		{
			func_1399(iVar1);
		}
		iVar0++;
	}
}

int func_1264(int iParam0)
{
	switch (iParam0)
	{
		case 58:
			return Global_2097152->f_6486;
		case 36:
			return Global_2097152->f_6487;
		case 53:
			return Global_2097152->f_6488;
		default:
			break;
	}
	return 0;
}

void func_1265(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_948(iParam2, 0, 100);
	if (func_1760(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

bool func_1266(int iParam0)
{
	switch (iParam0)
	{
		case -1042371315:
		case -73658703:
		case -36237369:
		case 81276375:
		case 442459581:
		case 678166986:
		case 1000705175:
		case 1030464549:
		case 1444794465:
			return true;
		default:
			break;
	}
	return false;
}

int func_1267(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_1268(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_1269(var uParam0, int iParam1, bool bParam2)
{
	if ((*uParam0)[iParam1]->f_14 != 255)
	{
		Var0.f_1 = -1082130432;
		Var0.f_2 = -1082130432;
		Var0.f_3 = -1082130432;
		Var0.f_4 = -1082130432;
		Var0.f_5 = -1082130432;
		Var0.f_14 = 255;
		*(*uParam0)[iParam1] = { Var0 };
		(*uParam0)[iParam1]->f_14 = 255;
		StringCopy(&((*uParam0)[iParam1]->f_14.f_1), "", 64);
		func_742(uParam0, iParam1, bParam2);
		func_699(1);
	}
}

void func_1270(int iParam0)
{
	set_bit(&(Local_5197.f_852), iParam0);
	set_bit(&(Local_3713.f_741), iParam0);
}

int func_1271(int iParam0)
{
	iVar0 = 0;
	if (func_238())
	{
		if (!func_745())
		{
			iVar0 = Global_2097152->f_6314;
		}
		else
		{
			iVar0 = Global_2097152->f_6317[iParam0]->f_1;
		}
	}
	else if (iParam0 == -1)
	{
		iVar0 = 32;
	}
	return iVar0;
}

bool func_1272(var uParam0, var uParam1)
{
	if (((is_bit_set(uParam0->f_7, 2) != is_bit_set(uParam1->f_5, 1) || uParam1->f_2 != uParam0->f_3) || uParam1->f_3 != uParam0->f_4) || uParam1->f_4 != uParam0->f_5)
	{
		return true;
	}
	return false;
}

void func_1273(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_bit_set(uParam0->f_7, 2))
	{
		uParam0->f_3 = iParam1;
		uParam0->f_4 = iParam2;
		uParam0->f_5 = iParam3;
	}
	else
	{
		network_get_global_multiplayer_clock(&iVar0, &iVar1, &iVar2);
		iVar3 = (iParam1 - iVar0);
		iVar4 = (iParam2 - iVar1);
		iVar5 = (iParam3 - iVar2);
		uParam0->f_3 = iVar3;
		uParam0->f_4 = iVar4;
		uParam0->f_5 = iVar5;
	}
}

void func_1274(int iParam0, int iParam1, int iParam2)
{
	if (*iParam2 >= 60)
	{
		*iParam2 = (*iParam2 - 60);
		*iParam1++;
	}
	else if (*iParam2 < 0)
	{
		*iParam2 += 60;
		*iParam1 = (*iParam1 - 1);
	}
	if (*iParam1 >= 60)
	{
		*iParam1 = (*iParam1 - 60);
		*iParam0++;
	}
	else if (*iParam1 < 0)
	{
		*iParam1 += 60;
		*iParam0 = (*iParam0 - 1);
	}
	if (*iParam0 >= 24)
	{
		*iParam0 = (*iParam0 - 24);
	}
	else if (*iParam0 < 0)
	{
		*iParam0 += 24;
	}
}

int func_1275(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar0] > -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1276()
{
	return Global_1051252->f_12;
}

char* func_1277()
{
	return "unnamed";
}

int func_1278(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

char* func_1279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1280(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_1310(2);
	func_514(to_float((iParam0 * iVar1)), 0);
}

void func_1281(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_1240(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_819(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_1282(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_1312(2);
	func_1764(to_float((iParam0 * iVar1)), 0);
}

void func_1283(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_1311(2);
	func_1765(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_1284(int iParam0, bool bParam1, bool bParam2)
{
	func_1766(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_1285(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_set_entity_health(iParam1, iParam0, 0);
}

void func_1286(float fParam0, int iParam1)
{
	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - _get_ped_stamina(iParam1));
	_charge_ped_stamina(iParam1, fVar0);
}

bool func_1287(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_1767(iParam1), ceil(fParam2));
	return true;
}

void func_1288(var uParam0, int iParam1)
{
}

void func_1289(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_1768(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_1769(uParam0);
}

void func_1290()
{
	iVar0 = player_id();
	Global_1956200->f_1565.f_117.f_13 = floor(_get_player_health(iVar0));
	Global_1956200->f_1565.f_117.f_14 = _0xdf66a37936d5f3d9(iVar0);
	Global_1956200->f_1565.f_117.f_15 = _get_player_stamina(iVar0);
}

void func_1291()
{
	Global_1956200->f_1565.f_117.f_16 = func_1219(0, 2);
	Global_1956200->f_1565.f_117.f_17 = func_1219(1, 2);
	Global_1956200->f_1565.f_117.f_18 = func_1219(2, 2);
}

bool func_1292(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1770(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1771(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_775(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1772(&Var45, &Var0, 0))
				{
					if (func_1773(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_777(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_777(iVar43);
	}
	return false;
}

struct<4> func_1293()
{
	return Global_1291734->f_11.f_310;
}

bool func_1294()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_1295(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_1296(int iParam0)
{
	iVar0 = func_1774(iParam0);
	bVar1 = func_1775(func_936(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_1297(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_1298(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1770(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1771(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_775(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1772(&Var45, &Var0, 0))
				{
					if (func_1773(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_777(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_777(iVar43);
	}
	return false;
}

struct<4> func_1299(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_774("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_775(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_777(iVar0);
	return Var2;
}

bool func_1300(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_456(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1776(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1777(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1301(var uParam0)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_1302(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar1 = iVar0 + 1;
		iVar2 = func_1778(iParam0, uVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

int func_1303(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
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

void func_1304(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_1305(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1779(iParam0);
	}
	Global_1139381->f_3876.f_2[func_1305(iParam0, 1)] = bParam1;
}

int func_1305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

void func_1306(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1307(var uParam0)
{
	Var0 = func_1780(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	return _0xed4413cee1bf142c(&Var0);
}

bool func_1308(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_1780(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1782(uParam0, func_1781(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1783(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1781(iVar0);
		}
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1784(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				uParam0->f_1[iVar1] = iVar0;
				if (bVar2)
				{
					func_1785(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1786(iVar3) && func_1787(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1789(uParam0, iVar11, func_1788(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_1790() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1788(&(uParam0->f_1[34])) == 0) && !func_1209(32)) && !func_1209(64))
					{
						uParam0->f_1[iVar1] = func_1791(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_1792(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

int func_1309(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = &Global_1956200->f_1431.f_50[iParam0];
			break;
		case 1:
			iVar0 = &Global_1956200->f_1565.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_1310(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1317(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

int func_1311(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1317(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

int func_1312(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1317(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_1313()
{
	_copy_memory(&(Global_1956200->f_1565.f_2), &(Global_1956200->f_1431), 115);
	Global_1956200->f_1565.f_2.f_6[0] = func_1219(0, 0);
	Global_1956200->f_1565.f_2.f_6[0]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[0]->f_1 = -15;
	Global_1956200->f_1565.f_2.f_6[1] = func_1219(1, 0);
	Global_1956200->f_1565.f_2.f_6[1]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[1]->f_1 = -15;
	Global_1956200->f_1565.f_2.f_6[2] = func_1219(2, 0);
	Global_1956200->f_1565.f_2.f_6[2]->f_2 = 0;
	Global_1956200->f_1565.f_2.f_6[2]->f_1 = -15;
}

void func_1314(int iParam0, int iParam1)
{
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_1793(iParam0);
	iVar1 = func_1795(iVar0, func_1794(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = absi(iVar2);
	if (iVar2 > 0)
	{
		func_1519(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1796(iVar0, iVar3, -142743235, 0, 0);
	}
}

int func_1315(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_1316(int iParam0, int iParam1)
{
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1797(iParam0);
	iVar1 = func_1795(iVar0, func_1794(0), -1990194462, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = absi(iVar2);
	if (iVar2 > 0)
	{
		func_1519(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1796(iVar0, iVar3, -142743235, 0, 0);
	}
	func_1715(iParam0, to_float(iParam1), 1);
}

int func_1317(int iParam0)
{
	return func_1798(func_1768(iParam0));
}

float func_1318(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1317(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

bool func_1319(int iParam0, int iParam1)
{
	return func_1800(func_1799(iParam0), iParam1);
}

void func_1320()
{
	func_1801(0);
	func_1801(1);
	func_1801(2);
	func_1801(3);
}

void func_1321()
{
	func_1802(0);
	func_1802(1);
	func_1802(2);
	func_1802(3);
}

bool func_1322(int iParam0)
{
	switch (iParam0)
	{
		case -1773771702:
		case -1400017352:
		case -965956337:
		case -443425498:
		case -281129686:
		case 261622973:
		case 1811008981:
			return true;
		default:
			break;
	}
	return false;
}

int func_1323(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1266(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(*iParam0) || is_entity_dead(*iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		_0xb6cbd40f8ea69e8a(*iParam0);
	}
	fVar0 = func_1763(iParam1);
	iVar1 = get_entity_bone_index_by_name(*iParam0, "p_targetArchery02xTarget");
	use_particle_fx_asset("scr_net_target_races");
	return start_particle_fx_looped_on_entity_bone("scr_net_target_fire_ring_mp", *iParam0, 0f, 0f, 0f, 0f, 0f, 0f, iVar1, fVar0, false, false, false);
}

bool func_1324(int iParam0)
{
	if (func_1803(iParam0))
	{
		return false;
	}
	if (is_bit_set(&(Local_5197.f_526.f_2[func_405(iParam0)]), func_406(iParam0)))
	{
		return false;
	}
	if (Global_3145858->f_6823[iParam0]->f_12 > 0)
	{
		if ((func_268(&(Local_5197.f_159)) && func_269(&(Local_5197.f_159), 0, 0) < Global_3145858->f_6823[iParam0]->f_12 * 1000) || !func_268(&(Local_5197.f_159)))
		{
			return false;
		}
	}
	else if (Global_3145858->f_6823[iParam0]->f_12 == -1)
	{
		return false;
	}
	if (Global_3145858->f_6823[iParam0]->f_31 != 0)
	{
		iVar0 = Global_3145858->f_6823[iParam0]->f_26;
		switch (Global_3145858->f_6823[iParam0]->f_31)
		{
			case 465509728:
				if (!network_does_network_id_exist(&(Local_5197.f_238.f_33[iVar0])))
				{
					return false;
				}
				break;
		}
	}
	return true;
}

bool func_1325(int iParam0)
{
	switch (iParam0)
	{
		case -1888453608:
		case -31919185:
		case 738282662:
			return true;
	}
	if (func_407() || func_84(69))
	{
		return true;
	}
	return false;
}

int func_1326(int iParam0)
{
	iVar0 = 0;
	if (Global_3145858->f_6823[iParam0]->f_31 != 0)
	{
		iVar1 = Global_3145858->f_6823[iParam0]->f_26;
		switch (Global_3145858->f_6823[iParam0]->f_31)
		{
			case 465509728:
				if (network_does_network_id_exist(&(Local_5197.f_238.f_33[iVar1])))
				{
					iVar0 = net_to_ent(&(Local_5197.f_238.f_33[iVar1]));
				}
				break;
		}
	}
	return iVar0;
}

bool func_1327(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bVar0 = false;
	Var1 = { *Global_3145858->f_6823[iParam0] };
	if (does_pickup_exist(uParam1[iParam0]) || !bParam4)
	{
		bVar0 = true;
		return bVar0;
	}
	iVar34 = Var1.f_17;
	iVar35 = Var1.f_8;
	iVar36 = Var1.f_10;
	if (iParam5 != 151)
	{
		iVar34 = iParam5;
		iVar35 = iParam6;
		iVar36 = iParam7;
	}
	if (!_is_pickup_type_valid(iVar34))
	{
		bVar0 = true;
		return bVar0;
	}
	iVar38 = 0;
	iVar39 = 0;
	if (iVar36 != 0 && func_1804(get_weapon_type_from_pickup_type(iVar34)))
	{
		iVar39 = iVar36;
		_0x23fb9faca28779c1(player_ped_id(), get_weapon_type_from_pickup_type(iVar34), iVar36);
	}
	if (!func_354(Var1.f_1))
	{
		if (is_bit_set(Var1.f_13, 15))
		{
			if (!func_1805((*uParam3)[iParam0], Var1.f_1, Var1.f_4))
			{
				return false;
			}
		}
		func_1806(&iVar37, Var1, iParam2);
		vVar40 = { Var1.f_1 };
		if (does_entity_exist(iParam8))
		{
			vVar40 = { get_offset_from_entity_in_world_coords(iParam8, Var1.f_28) };
		}
		vVar43 = { func_1807(is_bit_set(Var1.f_13, 15)) };
		iVar46 = 1;
		iVar47 = get_weapon_type_from_pickup_type(iVar34);
		if (func_1808(iVar34))
		{
			iVar47 = _0x44b09a23d728045a(iVar34);
		}
		if (func_461(iVar47) || func_1195(iVar47))
		{
			iVar46 = func_1809(iVar34, iVar35, Var1.f_9);
		}
		fVar48 = Global_3145858->f_6823[iParam0]->f_32;
		if (func_1325(iVar34))
		{
			iVar38 = func_1810(iVar34, Var1.f_24);
			request_model(iVar38, false);
			if (has_model_loaded(iVar38))
			{
				(*uParam1)[iParam0] = create_pickup_rotate(iVar34, vVar40 + vVar43, func_1811(Var1), iVar37, iVar46, 2, false, iVar38, iVar39, fVar48, iParam8);
				bVar0 = true;
			}
		}
		else
		{
			(*uParam1)[iParam0] = create_pickup_rotate(iVar34, vVar40 + vVar43, func_1811(Var1), iVar37, iVar46, 2, false, iVar38, iVar39, fVar48, iParam8);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		iVar49 = Var1.f_11 * 1000;
		if (Var1.f_11 == -1)
		{
			iVar49 = 86400000;
		}
		set_pickup_regeneration_time(uParam1[iParam0], iVar49);
		set_pickup_not_lootable(uParam1[iParam0], 1);
		if (func_84(37) || (!func_1812(Var1) && does_pickup_object_exist(uParam1[iParam0])))
		{
			set_entity_rotation(get_pickup_object(uParam1[iParam0]), func_1811(Var1), 2, true);
		}
		if (func_84(69))
		{
			block_pickup_placement_light(uParam1[iParam0], 1);
		}
	}
	return bVar0;
}

void func_1328(vector3 vParam0, int iParam3, int iParam4, int iParam5, float fParam6)
{
	get_model_dimensions(iParam3, &uVar1, &Var4);
	iVar0 = -1;
	fVar7 = func_1813(Var4.f_1 > Var4, Var4.f_1, Var4);
	fVar7 = (fVar7 + fParam6);
	if (fVar7 < 2f)
	{
		fVar7 = 2f;
	}
	*iParam4 = _0xfa50f79257745e74(vParam0, fVar7, iParam5, iVar0, 0);
}

void func_1329(vector3 vParam0, var uParam3, bool bParam4)
{
	fVar2 = 2.5f;
	iVar1 = 1;
	iVar0 = -1;
	if (bParam4)
	{
		fVar2 = 6f;
	}
	*uParam3 = _0xfa50f79257745e74(vParam0, fVar2, iVar1, iVar0, 0);
}

Vector3 func_1330(bool bParam0)
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1814(iVar0, bParam0))
		{
		}
		else if (func_354(Global_3145858->f_38736[iVar0]->f_1))
		{
		}
		else
		{
			return Global_3145858->f_38736[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1331()
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1815(iVar0))
		{
		}
		else if (func_354(Global_3145858->f_38736[iVar0]->f_1))
		{
		}
		else
		{
			return Global_3145858->f_38736[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1332(bool bParam0)
{
	if (bParam0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_354(*Global_2097152->f_6035[iVar0]))
		{
		}
		else
		{
			return *Global_2097152->f_6035[iVar0];
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

int func_1333()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_bit_set(Global_3145858->f_57980[iVar0]->f_101, 0))
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar13 = get_random_int_in_range(0, iVar1);
	return &(iVar2[iVar13]);
}

int func_1334(var uParam0)
{
	if (*uParam0 < 0 || *uParam0 >= 12)
	{
		return 0;
	}
	if (func_821())
	{
		uVar0 = &Global_524288->f_135748[*uParam0];
	}
	else if (func_1415())
	{
		uVar0 = &Global_2359296->f_443[*uParam0];
	}
	else if (func_407())
	{
		uVar0 = &Global_2097152->f_6414[*uParam0];
	}
	return uVar0;
}

void func_1335(var uParam0, var uParam1, var uParam2)
{
	bVar0 = (uParam0->f_2 > -1 && uParam0->f_2 < 8);
	if (uParam0->f_3 < 0 || uParam0->f_3 >= 18)
	{
		uParam0->f_3 = 0;
	}
	Var1 = { *Global_3145858->f_49704[uParam0->f_3] };
	if (func_1816())
	{
		func_163(1, 1);
	}
	func_352(117);
	func_165(1);
	Var117.f_13 = -1;
	Var117.f_13.f_1 = -1;
	Var117.f_16.f_3 = 1;
	Var117.f_21 = 1;
	Var117.f_22 = 1;
	Var117.f_22.f_1 = -1082130432;
	Var117.f_22.f_2 = 1;
	Var117.f_25 = -1;
	Var117.f_25.f_1 = -1;
	Var117.f_25.f_2 = -1;
	Var117.f_25.f_3 = -1;
	Var117.f_25.f_4 = -1;
	Var117.f_25.f_5 = -1;
	Var117.f_25.f_6 = -1;
	Var117.f_25.f_7 = -1;
	Var117.f_25.f_8 = -1;
	Var117.f_34 = 4;
	Var117.f_34.f_1.f_1 = -1;
	Var117.f_34.f_1.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	func_805(&Var117);
	if (func_1817(&Var1))
	{
		func_1818(&(Var1.f_32), &(Var1.f_34), &(Var1.f_36));
		func_1819(&Var117, Var1.f_31, Var1.f_32, Var1.f_33, Var1.f_34, Var1.f_35, Var1.f_36);
	}
	if (func_1820(&Var1))
	{
		if (Var1.f_37 == -1)
		{
			iVar175 = -1;
		}
		else if (Var1.f_37 == 0)
		{
			iVar175 = -2;
		}
		else
		{
			iVar175 = Var1.f_37;
		}
		if (Var1.f_38 == -1)
		{
			iVar176 = -1;
		}
		else if (Var1.f_38 == 0)
		{
			iVar176 = -2;
		}
		else
		{
			iVar176 = Var1.f_38;
		}
		if (Var1.f_39 == -1)
		{
			iVar177 = -1;
		}
		else if (Var1.f_39 == 0)
		{
			iVar177 = -2;
		}
		else
		{
			iVar177 = Var1.f_39;
		}
		func_1821(&Var117, iVar175, iVar176, iVar177);
	}
	if (func_1822(&Var1))
	{
		func_1289(&Var117, 1);
	}
	func_1403(&Var117, uParam0->f_42, Var1.f_65);
	if (is_bit_set(Var1.f_5, 22))
	{
		func_1823(&Var117, 0);
	}
	if (bVar0)
	{
		if (uParam0->f_13 != -1000 || Var1.f_109 != 0)
		{
			fVar178 = func_1813(uParam0->f_13 == -2000, -1f, (to_float(uParam0->f_13) / 1000f));
			if (Var1.f_109 != 0)
			{
				fVar178 = to_float(Var1.f_109);
			}
			func_1824(&Var117, fVar178);
		}
	}
	bVar179 = is_bit_set(uParam0->f_12, 7);
	if (func_1825(&Var1, bVar179))
	{
		func_1826(&Var117, &(Var1.f_73[0]), &(Var1.f_78[0]), &(Var1.f_73[1]), &(Var1.f_78[1]), &(Var1.f_73[2]), &(Var1.f_78[2]), &(Var1.f_73[3]), &(Var1.f_78[3]), !bVar179);
	}
	func_1827(&Var117, &(uParam0->f_54), uParam2, &(uParam0->f_1));
	if (bVar0 && !is_string_null_or_empty(&(uParam0->f_14)))
	{
		func_1828(&Var117, 1476714553, 0, 0);
	}
	else
	{
		func_1828(&Var117, 493038497, 0, 0);
	}
	func_1829(&Var117, Global_3145858->f_60002 == 3);
	func_1830(&Var117, *uParam1, uParam0->f_11, 1);
	if (uParam0->f_9 != -1)
	{
		func_1831(uParam0->f_9);
	}
	func_1832();
	func_1833();
	func_1834(uParam0->f_1, *uParam0);
}

void func_1336(var uParam0, var uParam1)
{
	bVar0 = (uParam0->f_2 > -1 && uParam0->f_2 < 8);
	if (uParam0->f_3 < 0 || uParam0->f_3 >= 18)
	{
		uParam0->f_3 = 0;
	}
	Var1 = { *Global_3145858->f_49704[uParam0->f_3] };
	Var117.f_13 = -1;
	Var117.f_13.f_1 = -1;
	Var117.f_16.f_3 = 1;
	Var117.f_21 = 1;
	Var117.f_22 = 1;
	Var117.f_22.f_1 = -1082130432;
	Var117.f_22.f_2 = 1;
	Var117.f_25 = -1;
	Var117.f_25.f_1 = -1;
	Var117.f_25.f_2 = -1;
	Var117.f_25.f_3 = -1;
	Var117.f_25.f_4 = -1;
	Var117.f_25.f_5 = -1;
	Var117.f_25.f_6 = -1;
	Var117.f_25.f_7 = -1;
	Var117.f_25.f_8 = -1;
	Var117.f_34 = 4;
	Var117.f_34.f_1.f_1 = -1;
	Var117.f_34.f_1.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	func_805(&Var117);
	func_1818(&(Var1.f_32), &(Var1.f_34), &(Var1.f_36));
	func_1835(Var1.f_31, Var1.f_32, Var1.f_33, Var1.f_34, Var1.f_35, Var1.f_36);
	func_1836(&Var1, &(uParam0->f_42), *uParam0);
	if (func_1820(&Var1))
	{
		if (Var1.f_37 == -1)
		{
			iVar175 = -1;
		}
		else if (Var1.f_37 == 0)
		{
			iVar175 = -2;
		}
		else
		{
			iVar175 = Var1.f_37;
		}
		if (Var1.f_38 == -1)
		{
			iVar176 = -1;
		}
		else if (Var1.f_38 == 0)
		{
			iVar176 = -2;
		}
		else
		{
			iVar176 = Var1.f_38;
		}
		if (Var1.f_39 == -1)
		{
			iVar177 = -1;
		}
		else if (Var1.f_39 == 0)
		{
			iVar177 = -2;
		}
		else
		{
			iVar177 = Var1.f_39;
		}
		func_1837(iVar175, iVar176, iVar177);
	}
	bVar178 = func_1822(&Var1);
	func_1838(bVar178);
	func_980(uParam0->f_42, Var1.f_65);
	bVar179 = !is_bit_set(Var1.f_5, 22);
	func_1839(&Var117, bVar179);
	if (bVar0)
	{
		if (uParam0->f_13 != -1000 || Var1.f_109 != 0)
		{
			fVar180 = func_1813(uParam0->f_13 == -2000, -1f, (to_float(uParam0->f_13) / 1000f));
			if (Var1.f_109 != 0)
			{
				fVar180 = to_float(Var1.f_109);
			}
			func_1840(&Var117, fVar180);
		}
	}
	bVar181 = is_bit_set(uParam0->f_12, 7);
	if (func_1841())
	{
		bVar181 = true;
	}
	if (func_1825(&Var1, bVar181))
	{
		func_1842(&(Var1.f_73[0]), &(Var1.f_78[0]), &(Var1.f_73[1]), &(Var1.f_78[1]), &(Var1.f_73[2]), &(Var1.f_78[2]), &(Var1.f_73[3]), &(Var1.f_78[3]), !bVar181);
	}
	func_1843(&(uParam0->f_54), uParam1, &(uParam0->f_1));
	if (uParam0->f_9 != -1)
	{
		func_1831(uParam0->f_9);
	}
}

void func_1337(int iParam0)
{
	func_366(&(Global_1071686->f_23887.f_4), iParam0);
}

void func_1338(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_1844(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_1844(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_1845(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1844(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_1845(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

Vector3 func_1339(bool bParam0, vector3 vParam1)
{
	if (!func_354(Global_3145858->f_199))
	{
		return Global_3145858->f_199;
	}
	if (!bParam0)
	{
		if (!func_354(vParam1))
		{
			return vParam1 + Vector(5f, 0f, 0f);
		}
	}
	return Global_3145858->f_196 + Vector(5f, 0f, 0f);
}

void func_1340(vector3 vParam0, vector3 vParam3)
{
	bVar0 = false;
	if (!does_entity_exist(Global_1102219->f_26.f_3344))
	{
		bVar0 = true;
	}
	else if (!func_246(get_entity_coords(Global_1102219->f_26.f_3344, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1102219->f_26.f_3348 = { vParam0 };
		Global_1102219->f_26.f_3354 = { vParam3 };
		Global_1102219->f_26.f_3345 = 1;
		request_model(-861544272, false);
	}
}

void func_1341(int iParam0)
{
	if (Global_1102219->f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		Global_1102219->f_26.f_3342 = 0;
		return;
	}
	if (iParam0 == func_1846(player_ped_id()))
	{
		if (does_entity_exist(Global_1102219->f_26.f_3344))
		{
			iParam0 = Global_1102219->f_26.f_3344;
		}
	}
	Global_1102219->f_26.f_3342 = iParam0;
}

void func_1342(int iParam0)
{
	Global_1102219->f_26.f_3 = iParam0;
}

bool func_1343(int iParam0, bool bParam1)
{
	if (((iParam0 < 0 || iParam0 >= Global_2097152->f_6199) || Global_2097152->f_6200[iParam0]->f_3 == 0) || Global_2097152->f_6200[iParam0]->f_4 == -1)
	{
		return false;
	}
	if (is_bit_set(Local_7111.f_6, iParam0) || is_bit_set(Local_7111.f_7, iParam0))
	{
		return false;
	}
	iVar0 = Global_2097152->f_6200[iParam0]->f_5;
	iVar1 = Global_2097152->f_6200[iParam0]->f_6;
	iVar2 = Global_2097152->f_6200[iParam0]->f_10;
	if (!is_bit_set(Local_7111.f_9, iParam0))
	{
		if (iVar0 >= 0 && iVar1 >= 0)
		{
			if ((Local_5197.f_542 == iVar0 && Local_5197.f_541 >= iVar1) || Local_5197.f_542 > iVar0)
			{
				if (iVar2 != 0)
				{
					set_bit(&(Local_7111.f_9), iParam0);
				}
				else
				{
					return true;
				}
			}
		}
	}
	if (is_bit_set(Local_7111.f_9, iParam0) && !bParam1)
	{
		if (iVar2 != 0)
		{
			if (!func_268(Local_7111.f_10[iParam0]))
			{
				func_272(Local_7111.f_10[iParam0], 0, 0);
			}
			if (func_269(Local_7111.f_10[iParam0], 0, 0) >= iVar2)
			{
				clear_bit(&(Local_7111.f_9), iParam0);
				func_270(Local_7111.f_10[iParam0]);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1344(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	if (_does_volume_exist(Param0))
	{
		return true;
	}
	if (Param0.f_4 != 0 && Param0.f_5 != -1)
	{
		return true;
	}
	return false;
}

Vector3 func_1345(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1847(iParam0))
		{
			return Global_3145858->f_36343[Global_3145858->f_34781[iParam0]->f_13]->f_13;
		}
		else
		{
			return Global_3145858->f_34781[iParam0]->f_3.f_1;
		}
	}
	return 0f, 0f, 0f;
}

struct<11> func_1346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var1.f_1 = -1;
	Var1.f_5 = -1;
	Var1.f_1 = iParam0;
	if (Global_3145858->f_34781[iParam0]->f_13 > -1)
	{
		iVar12 = Global_3145858->f_34781[iParam0]->f_13;
		if (Global_3145858->f_36343[iVar12]->f_12 > 0)
		{
			iVar0 = _create_volume_aggregate();
			iVar13 = 0;
			while (iVar13 < 10)
			{
				iVar14 = &Global_3145858->f_36343[iVar12]->f_1[iVar13];
				if (iVar14 == -1)
				{
				}
				else
				{
					_0x12fcaa23f2320422(iVar0, Global_3145858->f_34781[iVar14]->f_3, Global_3145858->f_34781[iVar14]->f_3.f_1, Global_3145858->f_34781[iVar14]->f_3.f_4, Global_3145858->f_34781[iVar14]->f_3.f_7);
				}
				iVar13++;
			}
		}
	}
	else
	{
		iVar0 = _create_volume_by_hash(Global_3145858->f_34781[iParam0]->f_3, Global_3145858->f_34781[iParam0]->f_3.f_1, Global_3145858->f_34781[iParam0]->f_3.f_4, Global_3145858->f_34781[iParam0]->f_3.f_7);
	}
	Var1 = iVar0;
	Var1.f_4 = Global_3145858->f_34781[iParam0]->f_15;
	Var1.f_5 = Global_3145858->f_34781[iParam0]->f_16;
	Var1.f_6 = Global_3145858->f_34781[iParam0]->f_17;
	if (is_bit_set(Global_3145858->f_34781[iParam0]->f_14, 0))
	{
		set_bit(&(Var1.f_2), 1);
	}
	else
	{
		clear_bit(&(Var1.f_2), 1);
	}
	if (is_bit_set(Global_3145858->f_34781[iParam0]->f_14, 1))
	{
		set_bit(&(Var1.f_2), 2);
	}
	else
	{
		clear_bit(&(Var1.f_2), 2);
	}
	Var1.f_7 = iParam1;
	Var1.f_8 = { iParam2, iParam3, iParam4 };
	func_1848(&Var1, 0);
	return Var1;
}

int func_1347(struct<2> Param0)
{
	if (!func_13(Param0))
	{
		return -1;
	}
	iVar0 = func_1849(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_1348(struct<2> Param0)
{
	return func_1347(Param0) == 0;
}

int func_1349(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_1597(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1350(struct<2> Param0, bool bParam2)
{
	if (!func_13(Param0))
	{
		return;
	}
	if (!func_1348(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1850(Param0);
	}
	func_1357(Param0, 1);
	bParam2 = bParam2;
}

bool func_1351(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_1352(int iParam0, bool bParam1)
{
	iVar0 = func_1349((*Global_1835011)[iParam0]->f_1);
	if (!func_1851(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_1852(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_1854(func_1853(4, iParam0), 0);
		func_1119((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_1354(iParam0);
}

bool func_1353(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1354(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

bool func_1355(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
			*iParam1 = 622326403;
			return true;
		case 14:
			*iParam1 = 384587308;
			return true;
		case 15:
			*iParam1 = 968661964;
			return true;
		case 16:
			*iParam1 = 49496744;
			return true;
		case 17:
			*iParam1 = 1495592714;
			return true;
		case 18:
			*iParam1 = 2125588482;
			return true;
		case 19:
			*iParam1 = 1866942769;
			return true;
		case 21:
			*iParam1 = 661064591;
			return true;
		case 22:
			*iParam1 = 1311562014;
			return true;
		case 23:
			*iParam1 = 1435506115;
			return true;
		case 24:
			*iParam1 = 1709487724;
			return true;
		case 20:
			*iParam1 = 757099750;
			return true;
		case 25:
			*iParam1 = 392315242;
			return true;
		default:
			break;
	}
	return false;
}

void func_1356(struct<2> Param0)
{
	if (func_38(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_38(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_38(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1364(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_1357(struct<2> Param0, int iParam2)
{
	if (!func_13(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1855(Param0);
	}
	else
	{
		func_1856(Param0, iParam2);
	}
	func_1857();
}

void func_1358(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1858(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_926(Global_1940258, 8388608);
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

void func_1359(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1859(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1860(cVar2);
			}
			else
			{
				func_1861();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1360(struct<2> Param0, int iParam2)
{
	iVar0 = func_1862(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_1863(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1864(iVar0, iParam2);
	return iParam2;
}

bool func_1361(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_1362(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1363(struct<2> Param0, int iParam2)
{
	if (!func_13(Param0))
	{
		return 0;
	}
	iVar0 = func_1862(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1865(Param0, func_1199(0), iParam2))
	{
		func_1357(func_1199(0), 3);
		func_1357(func_1199(iVar0), 4);
		return 0;
	}
	func_1864(iVar0, 0);
	func_1357(func_1199(0), 3);
	func_1357(func_1199(1), 4);
	return 1;
}

bool func_1364(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_670(Param0, &vVar0);
	if (func_1866(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1365(var uParam0)
{
	Var0.f_1 = 255;
	Var0.f_4 = 4;
	Var0.f_5 = 2;
	*uParam0 = { Var0 };
}

int func_1366()
{
	return Global_265377->f_124517.f_71.f_35;
}

void func_1367()
{
	iVar1 = get_player_team(player_id());
	switch (iVar1)
	{
		case -1:
			iVar0 = func_1867(network_player_id_to_int());
			break;
		case 0:
			iVar0 = 1965820175;
			break;
		case 1:
			iVar0 = -1164995627;
			break;
		case 2:
			iVar0 = -1406404850;
			break;
		case 3:
			iVar0 = 892340488;
			break;
		case 4:
			iVar0 = 570352286;
			break;
		case 5:
			iVar0 = 1809249877;
			break;
		case 6:
			iVar0 = 1185197041;
			break;
		case 7:
			iVar0 = -1901478918;
			break;
		case 8:
			iVar0 = 2097877918;
			break;
		default:
			return;
	}
	set_ped_relationship_group_hash(player_ped_id(), iVar0);
	if (!is_entity_dead(player_ped_id()) && is_ped_on_mount(player_ped_id()))
	{
		set_ped_relationship_group_hash(get_mount(player_ped_id()), func_1868());
	}
}

int func_1368()
{
	if (func_8())
	{
		return 0;
	}
	iVar0 = get_unique_int_for_player(iVar6144);
	if (iVar0 == 255)
	{
		return 0;
	}
	if (&Local_5197.f_853[iVar0] == -1)
	{
		if (func_268(&uLocal_7109))
		{
			if (func_269(&uLocal_7109, 0, 0) > 10000)
			{
				func_270(&uLocal_7109);
				return 0;
			}
		}
		else
		{
			func_272(&uLocal_7109, 0, 0);
		}
		return -1;
	}
	func_270(&uLocal_7109);
	iVar1 = &Local_5197.f_853[iVar0];
	if (!func_1869(iVar1))
	{
		return 0;
	}
	return iVar1;
}

Vector3 func_1369()
{
	iVar3 = func_1371();
	iVar4 = func_1372(-1);
	if (iVar3 != -1)
	{
		vVar0 = { func_871(iVar3, iVar4, 0) };
	}
	else
	{
		vVar0 = { func_1381(iVar6157) };
	}
	return vVar0;
}

Vector3 func_1370(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_1371()
{
	if (!func_83())
	{
		iVar0 = (Local_57[iVar6157]->f_3 - 1);
		if (iVar0 < 0)
		{
			iVar0 = (Global_2097152->f_255 - 1);
		}
	}
	else
	{
		iVar0 = iVar12114;
	}
	return iVar0;
}

int func_1372(int iParam0)
{
	if (func_8() && Global_2892896->f_20 > 0)
	{
		return Global_2892896->f_20;
	}
	if (iParam0 == -1)
	{
		iParam0 = iVar6156;
	}
	return Local_57[iParam0]->f_6;
}

Vector3 func_1373(bool bParam0)
{
	if (bParam0)
	{
		func_587(1);
	}
	return vLocal_8321;
}

int func_1374(int iParam0, bool bParam1, var uParam2, bool bParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	if (bParam3)
	{
		fVar0 = 10f;
	}
	else
	{
		fVar0 = absf(fParam4);
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	return func_1870(iParam0, fVar0, uParam2, bParam5, 0, iParam6, iParam7);
}

void func_1375()
{
	if (Global_2097152->f_6199 == 0 || Local_7111.f_6 == 0)
	{
		return;
	}
	Var1.f_1 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= (Global_2097152->f_6199 - 1))
	{
		if (Global_2097152->f_6200[iVar0]->f_3 != 101474539 || !is_bit_set(Local_7111.f_6, iVar0))
		{
		}
		else
		{
			iVar12 = Global_2097152->f_6200[iVar0]->f_4;
			Var1 = { func_1346(iVar12, iVar6147, 0, 0, 0) };
			iVar13 = func_1870(Var1, -10f, &Local_7498, 0, 0, 1, 2);
			if (iVar13 == -1)
			{
				func_430(&Var1);
			}
			else
			{
				*Local_8132[iVar0] = { Var1 };
				iVar0++;
			}
		}
	}
}

void func_1376(vector3 vParam0, var uParam3)
{
	uParam3->f_6 = { vParam0 };
}

void func_1377(vector3 vParam0, var uParam3)
{
	uParam3->f_5 = 2;
	uParam3->f_1 = { vParam0 };
}

void func_1378(int iParam0)
{
	func_1871(0, 1, &Local_7498, 0, 1f);
	switch (Global_2097152->f_31)
	{
		case 628988510:
			func_1871(4, 1, &Local_7498, 1, 1065353216);
			break;
	}
	func_1872(&Local_7498, 2f);
	func_1873(&Local_7498, 2f);
	func_1874(&Local_7498, 0f);
	func_1875(&Local_7498, 0f);
	if (iParam0 != 1)
	{
		func_958(&Local_7498);
		func_1876(&Local_7498, 1);
	}
	else
	{
		func_1871(5, 0, &Local_7498, 0, 0.6f);
		func_1871(6, 0, &Local_7498, 0, 0.3f);
		func_1871(7, 1, &Local_7498, 0, 0.9f);
		func_1871(9, 1, &Local_7498, 0, 0.3f);
		func_1871(14, 1, &Local_7498, 0, 0.3f);
		func_1871(13, 1, &Local_7498, 0, 0.1f);
	}
}

float func_1379(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1380(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_354(vParam0))
	{
		iVar0 = func_1877(uParam3);
		if (iVar0 != -1)
		{
			*uParam3->f_94[iVar0] = { vParam0 };
			uParam3->f_479[iVar0] = fParam4;
			uParam3->f_93++;
		}
	}
}

Vector3 func_1381(int iParam0)
{
	if (Local_57[iParam0]->f_12 == -1 || func_354(*Global_2097152->f_6035[Local_57[iParam0]->f_12]))
	{
		if (!func_354(*Global_2097152->f_6035[0]))
		{
			vVar0 = { *Global_2097152->f_6035[0] };
		}
		else
		{
			vVar0 = { Global_3145858->f_196 };
		}
	}
	else
	{
		vVar0 = { *Global_2097152->f_6035[Local_57[iParam0]->f_12] };
	}
	return vVar0;
}

void func_1382(float fParam0, var uParam1)
{
	uParam1->f_5 = 1;
	*uParam1 = fParam0;
}

int func_1383(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_871(iParam0, iParam1, 0) };
	uVar3 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_5;
	vVar4 = { func_1878() };
	if (iParam2 > 0)
	{
		vVar7 = { func_1879(Global_2097152->f_31) * FtoV((0.25f * IntToFloat(iParam2))) };
		vVar4.f_1 = (vVar4.y - vVar7.y);
	}
	vVar10 = { func_1880(vVar4, uVar3) };
	vVar13 = { vVar0 + vVar10 };
	vVar16 = { func_1879(Global_2097152->f_31) };
	if (iParam2 > 0)
	{
		vVar16 = { vVar16 * FtoV((1f + (0.5f * IntToFloat(iParam2)))) };
	}
	iVar19 = _create_volume_box(vVar13, 0f, 0f, uVar3, vVar16);
	return iVar19;
}

int func_1384(int iParam0)
{
	if (func_1881(iParam0))
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	Var0.f_4 = 3;
	_0x31010318ba9897ac(&(Var0.f_5), iParam0);
	Var0.f_8 = get_hash_of_this_script_name();
	Var0.f_9 = _0x638a3a81733086db();
	func_1882(&Var0, Var0.f_5);
	return 0;
}

bool func_1385()
{
	return func_1883(2, 15);
}

bool func_1386(vector3 vParam0, var uParam3)
{
	if (func_354(vParam0))
	{
		return false;
	}
	if (func_348(255) == 4)
	{
		return false;
	}
	if (func_349(4, 255))
	{
	}
	func_351(4);
	func_729(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_730(Global_1102219->f_3879, 36);
	return true;
}

bool func_1387(int iParam0)
{
	return func_349(48, iParam0);
}

int func_1388()
{
	return Global_1102219->f_3911;
}

void func_1389(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1884(uParam0);
	}
	func_1885(uParam0);
}

void func_1390(int iParam0)
{
	iVar0 = func_1371();
	iVar1 = func_1372(-1);
	if (iVar0 == -1 || func_967() != 0)
	{
		func_1884(&Local_7498);
	}
	else
	{
		if (iVar8127 == -1)
		{
			return;
		}
		_delete_volume(&(Local_7498.f_10[iVar8127]));
		Local_7498.f_10[iVar8127] = func_1383(iVar0, iVar1, iParam0);
	}
}

void func_1391(var uParam0)
{
	if (!func_1387(255))
	{
		return;
	}
	func_1886(uParam0, &Var0, &Var30);
	func_1887(Var0, Var30, 0, 0, 1);
}

void func_1392(int iParam0, int iParam1)
{
	_0x6569f31a01b4c097(iParam0, 1, iParam1);
	_0x6569f31a01b4c097(iParam0, 0, iParam1);
	_0x6569f31a01b4c097(iParam0, 4, iParam1);
}

bool func_1393(bool bParam0)
{
	if (!is_bit_set(iVar13505, 9))
	{
		vVar0 = { get_entity_coords(iVar6146, true, false) };
		bVar4 = get_ground_z_for_3d_coord(vVar0, &uVar3, false);
		if (bVar4)
		{
			vVar0.f_2 = uVar3;
			set_entity_coords(iVar6146, vVar0 + Vector(10f, 0f, 0f), true, false, true, true);
		}
		set_entity_collision(iVar6146, false, false);
		freeze_entity_position(iVar6146, true);
		vVar5 = { func_871(Local_57[iVar6149]->f_3, Local_57[iVar6149]->f_6, 0) };
		iVar8 = func_1888(vVar0, get_angle_between_2d_vectors(vVar5.x, vVar5.y, vVar0.x, vVar0.y), 0, 0, 1, 100, 0, 1);
		*bParam0 = 0;
		if (iVar8 != 0)
		{
			_0x9587913b9e772d29(iVar8, 0);
			set_bit(&uLocal_13508, 9);
		}
		else
		{
			return false;
		}
	}
	if (is_bit_set(iVar13505, 9))
	{
		iVar9 = _0xf49f14462f0ae27c(player_id());
		if (!is_entity_dead(iVar9) && !is_ped_injured(iVar9))
		{
			func_1889(iVar9, get_entity_coords(iVar9, true, false));
			task_stand_still(iVar9, 5000);
			set_animal_tuning_bool_param(iVar9, 48, true);
			set_entity_collision(iVar6146, true, false);
			freeze_entity_position(iVar6146, false);
			_set_ped_on_mount(iVar6146, iVar9, -1, true);
			set_gameplay_cam_relative_heading(0f, 1f);
			clear_bit(&uLocal_13508, 9);
			return true;
		}
	}
	return false;
}

void func_1394(bool bParam0)
{
	if (!is_ped_on_mount(iVar6146) || func_652(255))
	{
		return;
	}
	iVar0 = get_mount(iVar6146);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	_0xc9151483cc06a414(iVar0);
	func_1392(iVar0, 0);
	func_1890(iVar0);
	if (bParam0)
	{
		task_stand_still(iVar0, -1);
		set_blocking_of_non_temporary_events(iVar0, true);
		set_animal_tuning_bool_param(iVar0, 48, true);
		set_ped_config_flag(iVar0, 174, true);
	}
}

void func_1395()
{
	if (!is_ped_in_any_vehicle(iVar6147, false) || func_652(255))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(iVar6147, false);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (!is_bit_set(Global_2097152->f_253, 4))
	{
		iVar1 = floor((to_float(Global_2097152->f_36) / 100f));
		iVar2 = (get_entity_health(iVar0) * iVar1);
		_set_entity_health(iVar0, iVar2, 0);
		fVar3 = (get_vehicle_body_health(iVar0) * to_float(iVar1));
		set_vehicle_body_health(iVar0, fVar3);
		fVar4 = (get_vehicle_petrol_tank_health(iVar0) * to_float(iVar1));
		set_vehicle_petrol_tank_health(iVar0, fVar4);
		fVar5 = (get_vehicle_engine_health(iVar0) * to_float(iVar1));
		set_vehicle_engine_health(iVar0, fVar5);
		if (iVar2 >= 3000)
		{
			set_vehicle_explodes_on_high_explosion_damage(iVar0, false);
		}
		if (func_1891())
		{
			_0x7f8e2b131e1dca6c(iVar0, true);
		}
	}
	set_vehicle_engine_on(iVar0, true, true);
	_0x41cda90ee3450921(iVar0);
	if (_is_draft_vehicle(iVar0))
	{
		iVar6 = 0;
		while (iVar6 < 6)
		{
			iVar7 = iVar6;
			iVar8 = _get_ped_in_draft_seat(iVar0, iVar7);
			if (does_entity_exist(iVar8))
			{
				set_entity_can_be_damaged_by_relationship_group(iVar8, false, get_ped_relationship_group_hash(iVar6147));
			}
			iVar6++;
		}
	}
}

bool func_1396()
{
	if (Global_2097152->f_6199 == 0 || Local_7111.f_6 == 0)
	{
		return false;
	}
	vVar0 = { get_entity_coords(iVar6147, false, false) };
	iVar3 = 0;
	while (iVar3 <= (Global_2097152->f_6199 - 1))
	{
		if (Global_2097152->f_6200[iVar3]->f_3 != 101474539 || !is_bit_set(Local_7111.f_6, iVar3))
		{
		}
		else if (_does_volume_exist(&(Local_7111.f_32[iVar3])) && _0xf256a75210c5c0eb(&(Local_7111.f_32[iVar3]), vVar0))
		{
			return true;
		}
		iVar3++;
	}
	return false;
}

int func_1397(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	iVar0 = 0;
	func_533(iVar6151, vParam0, iParam3, &iVar0, iParam4, iParam5);
	return iVar0;
}

void func_1398(int iParam0)
{
	set_entity_completely_disable_collision(&(uLocal_9056[iParam0]), false, false);
	set_entity_visible(&(uLocal_9056[iParam0]), false);
	set_object_targettable(&(uLocal_9056[iParam0]), false);
	stop_particle_fx_looped(&(iLocal_9358[iParam0]), true);
	clear_area(get_entity_coords(&(uLocal_9056[iParam0]), true, false), 5f, 2);
	if (does_blip_exist(&(iLocal_9207[iParam0])))
	{
		remove_blip(iLocal_9207[iParam0]);
	}
	if (iVar6149 == iVar6156)
	{
		func_807(&(Local_57[iVar6149]->f_40), iParam0);
	}
}

void func_1399(int iParam0)
{
	if (!_does_propset_exist(&(uLocal_9840[iParam0])))
	{
		return;
	}
	iVar3 = create_itemset(true);
	iVar4 = _get_entities_from_propset(&(uLocal_9840[iParam0]), iVar3, 0, false, false);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		uVar1 = get_indexed_item_in_itemset(iVar0, iVar3);
		iVar2 = _0x18013392501ce5dc(uVar1);
		_0x56e0735d6273b227(iVar2, 1);
		if (!func_846(iVar2))
		{
		}
		else
		{
			set_entity_visible(iVar2, false);
			set_entity_completely_disable_collision(iVar2, false, false);
			set_object_targettable(iVar2, false);
			if (iVar6149 == iVar6156)
			{
				set_bit(&(Local_57[iVar6149]->f_46), iParam0);
			}
			if (does_particle_fx_looped_exist(Local_9509[iParam0][iVar0]))
			{
				stop_particle_fx_looped(Local_9509[iParam0][iVar0], true);
			}
		}
		iVar0++;
	}
	_0x20a4bf0e09bee146(iVar3);
	destroy_itemset(iVar3);
}

void func_1400(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!_0x4c11ccacb7c02b6e(Local_10256[iParam0][iParam1]))
	{
		if (func_1892(iParam0))
		{
			(*Local_10256[iParam0])[iParam1] = func_1893(iParam0, iParam1);
		}
	}
	if (!_0x4c11ccacb7c02b6e(&(Local_10256[iParam0]->f_3[iParam1])))
	{
		if (func_1892(iParam0))
		{
			Local_10256[iParam0]->f_3[iParam1] = func_1894(iParam0, iParam1);
		}
	}
	if (bParam3)
	{
		if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 9))
		{
			func_1401(iParam0, iParam1, iParam2);
		}
		else
		{
			func_1402(iParam0, iParam1, iParam2);
		}
	}
	if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 8))
	{
		func_1895(iParam0, iParam1, func_833(iParam0));
	}
	if (func_334())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			iVar1 = &Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar0];
			if (iVar1 > -1)
			{
				func_1896(&(Local_57[iVar6146]->f_40), iVar1);
			}
			iVar0++;
		}
		iVar2 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33;
		if (iVar2 > -1)
		{
			clear_bit(&(Local_57[iVar6146]->f_46), iVar2);
		}
	}
}

void func_1401(int iParam0, int iParam1, int iParam2)
{
	bVar0 = false;
	if (func_471(iParam0, iParam1))
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar1] != -1)
			{
				if (is_bit_set(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_31, iVar1))
				{
				}
				else
				{
					if (!does_blip_exist(Local_10256[iParam0]->f_9[iParam1][iVar1]))
					{
						vVar2 = { get_entity_coords(&(uLocal_9056[&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_25[iVar1]]), true, false) };
						(*Local_10256[iParam0]->f_9[iParam1])[iVar1] = _blip_add_for_coord(iParam2, vVar2);
						bVar0 = true;
					}
					else
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						func_1897(iParam0, iParam1, iVar1, iParam2);
					}
				}
			}
			iVar1++;
		}
	}
	else if (Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33 != -1)
	{
		if (!does_blip_exist(Local_10256[iParam0]->f_9[iParam1][0]))
		{
			if (_does_propset_exist(&(uLocal_9840[Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33])))
			{
				vVar5 = { Global_3145858->f_32697[Global_2097152->f_258[iParam0]->f_1[iParam1]->f_33]->f_1 };
			}
			(*Local_10256[iParam0]->f_9[iParam1])[0] = _blip_add_for_coord(iParam2, vVar5);
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			func_1897(iParam0, iParam1, 0, iParam2);
		}
	}
}

void func_1402(int iParam0, int iParam1, int iParam2)
{
	if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 7))
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (func_833(iParam0))
	{
		bVar1 = true;
	}
	if (!does_blip_exist(&(Local_10256[iParam0]->f_6[iParam1])))
	{
		vVar2 = { func_871(iParam0, iParam1, 0) };
		Local_10256[iParam0]->f_6[iParam1] = _blip_add_for_coord(iParam2, vVar2);
		StringCopy(&cVar5, "RC_CHECKPM", 16);
		if (bVar1)
		{
			StringCopy(&cVar5, "RC_BLP_FIN", 16);
		}
		set_blip_name_from_text_file(&(Local_10256[iParam0]->f_6[iParam1]), &cVar5);
		bVar0 = true;
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar7 = iParam2;
		if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 5))
		{
			if (Global_2097152->f_258[iParam0]->f_81 != 0)
			{
				iVar7 = Global_2097152->f_258[iParam0]->f_81;
			}
		}
		if (bVar1)
		{
			iVar7 = -282719360;
		}
		_0xbd62d98799a3daf0(&(Local_10256[iParam0]->f_6[iParam1]), iVar7);
		if (Global_2097152->f_258[iParam0]->f_82 != 0)
		{
			iVar8 = Global_2097152->f_258[iParam0]->f_82;
			set_blip_sprite(&(Local_10256[iParam0]->f_6[iParam1]), iVar8, true);
		}
		if (Global_2097152->f_258[iParam0]->f_83 != 0)
		{
			iVar9 = Global_2097152->f_258[iParam0]->f_83;
			_blip_set_modifier(&(Local_10256[iParam0]->f_6[iParam1]), iVar9);
		}
		if (Global_2097152->f_32 == 1744858848 || (Global_2097152->f_32 == -1185533313 && iVar7 != -282719360))
		{
			_blip_set_modifier(&(Local_10256[iParam0]->f_6[iParam1]), 2084443829);
		}
		if (iVar7 == -282719360 || iVar7 == 408396114)
		{
			_blip_set_modifier(&(Local_10256[iParam0]->f_6[iParam1]), 231194138);
		}
		else
		{
			_set_blip_flash_style(&(Local_10256[iParam0]->f_6[iParam1]), 231194138);
		}
	}
}

void func_1403(var uParam0, struct<12> Param1, var uParam13)
{
	Global_1956200->f_1565.f_117.f_12 = uParam13;
	func_1898(&(Global_1956200->f_1565.f_117), Param1, Param1.f_1);
	func_1899(&(Global_1956200->f_1565.f_117), Param1.f_2, Param1.f_3);
	func_1900(&(Global_1956200->f_1565.f_117), Param1.f_4, Param1.f_5);
	func_1901(&(Global_1956200->f_1565.f_117), Param1.f_6, Param1.f_7);
	func_1902(&(Global_1956200->f_1565.f_117), Param1.f_8, Param1.f_9);
	func_1903(&(Global_1956200->f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_1769(uParam0);
}

int func_1404(int iParam0, int iParam1)
{
	if (!func_1904(iParam1))
	{
		return 0;
	}
	if (!func_1242(iParam1))
	{
		return 0;
	}
	if (!func_816(iParam0))
	{
		return 0;
	}
	if (!func_815(iParam0))
	{
		return 0;
	}
	if (!func_1905(iParam0))
	{
		func_819(iParam0);
	}
	iVar0 = get_id_of_this_thread();
	if (!func_817(iParam0, iVar0))
	{
		return 0;
	}
	if (func_1906(iParam0, iParam1))
	{
		func_1907(iParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_1405(int iParam0)
{
	iVar0 = _0xda37a053c1522f5d(iParam0, 1, 0, 1);
	if (get_ammo_in_ped_weapon(iParam0, iVar0) != 0)
	{
		return;
	}
	iVar1 = get_max_ammo_in_clip(iParam0, iVar0, true);
	_add_ammo_to_ped(iParam0, iVar0, iVar1, 752097756);
	Var2 = { func_1908(0) };
	Var6 = { func_1909(iVar0, Var2, -1591664384, 0) };
	_0xdf4a3404d022adde(iParam0, &Var6, -1);
}

bool func_1406(int iParam0)
{
	if (Global_3145858->f_60002 == 0 || Global_3145858->f_60002 == 3)
	{
		return true;
	}
	if (is_bit_set(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1407(int iParam0)
{
	if (Global_3145858->f_60002 == 0 || Global_3145858->f_60002 == 3)
	{
		return true;
	}
	if (is_bit_set(iParam0, 3))
	{
		return false;
	}
	return true;
}

void func_1408(var uParam0, int iParam1)
{
	_0x644ccb76a76cfbd6(0, iParam1, false, false, 0, 1);
	if (func_1910())
	{
		bVar0 = true;
		if (Global_3145858->f_60002 == 3)
		{
			bVar0 = false;
			_0x644ccb76a76cfbd6(1, 0, false, false, 0, 1);
		}
		func_1911(uParam0, bVar0);
	}
	else
	{
		_0x644ccb76a76cfbd6(1, 0, false, false, 0, 1);
		_0xc395355843be134b(*uParam0);
	}
	func_1912(uParam0);
	func_1405(*uParam0);
}

void func_1409(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0->f_8;
	if (iVar0 == -1)
	{
		return;
	}
	Var10.f_7 = 752097756;
	Var10.f_8 = 1056964608;
	Var10.f_9 = 1065353216;
	if (iVar0 == -2)
	{
		Var1 = -1569615261;
		return;
	}
	iVar26 = 0;
	while (iVar26 < 16)
	{
		Var1 = &Global_3145858->f_57980[iVar0]->f_3[iVar26];
		Var1.f_1 = Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_3;
		if (Var1 == 0)
		{
		}
		else if (is_bit_set(Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_4, 0) || (func_1913(Var1, func_485()) && bParam1))
		{
		}
		else
		{
			if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 > 0)
			{
				_0xe133c1ec5300f740(uParam0->f_1, _get_ammo_type_for_weapon(Var1), Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2);
			}
			if (func_1415())
			{
				if (Global_2359296->f_6686 != 0 && &Global_3145858->f_57980[iVar0]->f_3[iVar26] == Global_2359296->f_6686)
				{
					if (uParam0->f_10 != -1)
					{
						Var1.f_1 = uParam0->f_10;
					}
				}
			}
			if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 == 0)
			{
				func_1914(uParam0, Var1, &(Var1.f_1));
			}
			if (Var1.f_1 == 0)
			{
			}
			else if (Var1.f_1 == -1)
			{
				if (func_461(Var1))
				{
					set_ped_infinite_ammo(*uParam0, true, Var1);
				}
			}
			else if (Var1.f_1 == -2)
			{
				get_max_ammo(*uParam0, &(Var1.f_1), Var1);
				if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 > 0)
				{
					Var1.f_1 = Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2;
				}
			}
			bVar27 = Global_3145858->f_57980[iVar0]->f_100 == Var1;
			if (bParam2)
			{
				if (is_bit_set(uParam0->f_12, 1))
				{
					bVar27 = false;
					if (uParam0->f_18.f_8 == Var1)
					{
						bVar27 = true;
					}
				}
			}
			iVar28 = _get_ammo_type_for_weapon(Var1);
			Var10.f_4 = Var1;
			Var10.f_12 = 1;
			bVar33 = false;
			if (bParam1)
			{
				iVar34 = 0;
				if (is_bit_set(Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_4, 1))
				{
					iVar34 = get_weapontype_group(Var1);
				}
				Var35 = { func_485() };
				if (func_1915(&Var1, &Var35, iVar34))
				{
					bVar33 = true;
					Var29 = { Var35 };
				}
			}
			_0xcc9c4393523833e2(*uParam0, Var1, iVar28);
			if (!bVar33)
			{
				_give_weapon_to_ped(*uParam0, &Var10, &Var4);
				Var29 = { Var4 };
			}
			if (&Global_1051130 == Var1 || &Global_1051131 == Var1)
			{
				if (&Global_1051130 == Var1)
				{
					Var39 = { Var29 };
				}
				if (&Global_1051131 == Var1)
				{
					Var43 = { Var29 };
				}
				_0xec1f85da51d3d6c4(*uParam0, &Var39, &Var43);
			}
			func_1916(iVar28, Var1.f_1, 752097756);
			func_463(Var1, Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_1, &(uParam0->f_1));
			Var47 = { func_1908(0) };
			Var29 = { func_1909(Var1, Var47, -1591664384, 0) };
			if (_0xb881ca836cc4b6d4(&Var29))
			{
				_0xdf4a3404d022adde(*uParam0, &Var29, -1);
			}
			_0x5c2e5e3caeeb1f58(uParam0->f_1, Var1, is_bit_set(Global_3145858->f_57980[iVar0]->f_104, iVar26));
			if (func_1412(uParam0->f_18.f_10))
			{
				_0xcc9c4393523833e2(*uParam0, Var1, uParam0->f_18.f_10);
			}
			else
			{
				_0xcc9c4393523833e2(*uParam0, Var1, iVar28);
			}
			if (bVar27)
			{
				_0xec516fe805d2cb2d(*uParam0);
				set_current_ped_weapon(*uParam0, Var1, true, 0, false, false);
				_0x0a2ab7b7abc055f4(*uParam0);
			}
		}
		iVar26++;
	}
}

void func_1410(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		if (func_1917(&(Global_3145858->f_57852[iParam0]->f_4[iVar2])))
		{
			Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
			Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
			func_1519(Var0, Var0.f_1, 752097756);
		}
		iVar2++;
	}
}

void func_1411(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (is_bit_set(uParam0->f_12, 1) && Global_3145858->f_60002 != 1)
		{
			if (_0xb881ca836cc4b6d4(&(uParam0->f_18)))
			{
				if (_0x4823f13a21f51964(*uParam0, &(uParam0->f_18)) > 0)
				{
					bVar0 = true;
				}
			}
			if (!bVar0 || !func_1913(0, uParam0->f_18))
			{
				get_current_ped_weapon(*uParam0, &iVar1, true, 0, false);
				if (is_bit_set(uParam0->f_12, 5) && iVar1 == -1569615261)
				{
					set_current_ped_weapon(*uParam0, func_1918(uParam0), true, 0, false, false);
				}
				return;
			}
			else
			{
				_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18), 1, 0, 0, 0);
			}
			if (!_0xb881ca836cc4b6d4(&(uParam0->f_18.f_4)))
			{
				return;
			}
			_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18.f_4), 1, 1, 0, 0);
			return;
		}
	}
	else if (is_bit_set(uParam0->f_12, 1) && Global_3145858->f_60002 != 1)
	{
		bVar2 = _0xb881ca836cc4b6d4(&(uParam0->f_18));
		bVar3 = _0xb881ca836cc4b6d4(&(uParam0->f_18));
		if (bVar2 || bVar3)
		{
			if (bVar2 && func_1913(0, uParam0->f_18))
			{
				_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18), 1, 0, 0, 0);
			}
			if (!bVar3)
			{
				return;
			}
			_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18.f_4), 1, 1, 0, 0);
			return;
		}
	}
	if (!bParam1)
	{
		if (func_1910())
		{
			if ((Global_3145858->f_60002 == 3 || Global_3145858->f_60002 == 0) || (Global_3145858->f_60002 == 2 && bParam2))
			{
				if (Global_1296679->f_147)
				{
					return;
				}
				bVar4 = false;
				bVar5 = false;
				if (_0xb881ca836cc4b6d4(&(Global_1296843->f_4)))
				{
					if (func_1919(Global_1296843->f_4))
					{
						Var6.f_9 = -1591664384;
						if (_0x9700e8efc4ab9089(3, &(Global_1296843->f_4), &Var6, true))
						{
							if (Var6.f_4 != -1569615261)
							{
								_0x12fb95fe3d579238(*uParam0, &(Global_1296843->f_4), 1, 0, 0, 0);
								bVar4 = true;
								bVar5 = true;
							}
						}
					}
				}
				if (_0xb881ca836cc4b6d4(Global_1296843) && func_776(-1185145312, 1, 0, 0) > 0)
				{
					if (func_1919(*Global_1296843))
					{
						Var20.f_9 = -1591664384;
						if (_0x9700e8efc4ab9089(3, Global_1296843, &Var20, true))
						{
							if (Var20.f_4 != -1569615261)
							{
								iVar34 = 1;
								if (bVar5)
								{
									iVar34 = 1;
								}
								else
								{
									iVar34 = 0;
								}
								_0x12fb95fe3d579238(*uParam0, Global_1296843, 1, iVar34, 0, 0);
								bVar4 = true;
							}
						}
					}
				}
				if (bVar4)
				{
					return;
				}
				if ((_0xb881ca836cc4b6d4(&(Global_1296679->f_4)) && _0xb881ca836cc4b6d4(Global_1296679)) && func_776(-1185145312, 1, 0, 0) > 0)
				{
					Var35.f_9 = -1591664384;
					Var49.f_9 = -1591664384;
					bVar63 = true;
					if (!_0x9700e8efc4ab9089(3, &(Global_1296679->f_4), &Var35, true))
					{
						bVar63 = false;
					}
					if (!_0x9700e8efc4ab9089(3, Global_1296679, &Var49, true))
					{
						bVar63 = false;
					}
					if (bVar63)
					{
						_0x12fb95fe3d579238(*uParam0, &(Global_1296679->f_4), 1, 0, 0, 0);
						_0x12fb95fe3d579238(*uParam0, Global_1296679, 1, 1, 0, 0);
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					return;
				}
				if (is_bit_set(uParam0->f_12, 5))
				{
					iVar64 = get_best_ped_weapon(*uParam0, false, true);
					if (!_is_weapon_lasso(iVar64))
					{
						set_current_ped_weapon(*uParam0, iVar64, true, 0, false, false);
					}
				}
				return;
			}
		}
		else if (Global_3145858->f_60002 != 1)
		{
			Var65 = { func_1920(0, 3) };
			if (_0xb881ca836cc4b6d4(&Var65))
			{
				Var69.f_9 = -1591664384;
				if (_0x9700e8efc4ab9089(3, &Var65, &Var69, true))
				{
					_0x12fb95fe3d579238(*uParam0, &Var65, 1, 0, 0, 0);
					return;
				}
			}
		}
	}
	if (is_bit_set(uParam0->f_12, 5))
	{
		get_current_ped_weapon(*uParam0, &iVar83, true, 0, false);
		if (!is_bit_set(uParam0->f_12, 1) || (is_bit_set(uParam0->f_12, 1) && iVar83 == -1569615261))
		{
			iVar84 = get_best_ped_weapon(*uParam0, false, true);
			if (!_is_weapon_lasso(iVar84))
			{
				set_current_ped_weapon(*uParam0, iVar84, true, 0, false, false);
			}
		}
	}
}

bool func_1412(int iParam0)
{
	if (func_84(60))
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_1413(var uParam0)
{
	if (uParam0->f_18.f_22 != 0 || uParam0->f_18.f_23 != 0)
	{
		if (func_1913(uParam0->f_18.f_22, func_485()))
		{
			Var16 = { func_1908(0) };
			Var8 = { func_1909(uParam0->f_18.f_22, Var16, -1591664384, 0) };
		}
		if (func_1913(uParam0->f_18.f_23, func_485()))
		{
			Var20 = { func_1908(0) };
			Var12 = { func_1909(uParam0->f_18.f_23, Var20, -1591664384, 0) };
		}
		_0xec1f85da51d3d6c4(*uParam0, &Var8, &Var12);
		return;
	}
	_0xb7e52a058b07c7e2(*uParam0, &Var0, &Var4);
	if (_0xb881ca836cc4b6d4(&Var0) || _0xb881ca836cc4b6d4(&Var4))
	{
		if (func_1913(0, Var0))
		{
			bVar24 = true;
		}
		if (func_1913(0, Var4))
		{
			bVar24 = true;
		}
		if (bVar24)
		{
			return;
		}
	}
	Var0 = { func_485() };
	Var4 = { func_485() };
	_0x7b98500614c8e8b8(*uParam0, 0, &Var0);
	_0xec1f85da51d3d6c4(*uParam0, &Var0, &Var4);
}

bool func_1414(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_1415()
{
	return &Global_3145858 == 395262693;
}

void func_1416(int iParam0)
{
	if (Global_1940144->f_16 == iParam0 && !Global_1940144->f_17)
	{
		return;
	}
	Global_1940144->f_16 = iParam0;
	Global_1940144->f_17 = 0;
	Var3.f_9 = -1591664384;
	if (func_774("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_775(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_1921(Var3.f_4))
			{
			}
			else if (!func_1748(Var3.f_4, 1194584906) && _0x0c093c1787f18519(Var3.f_4, &Var17))
			{
				_0x227522fd59ddb7e8(func_885(0), &Var3, iParam0);
			}
			iVar2++;
		}
		func_777(iVar0);
	}
}

void func_1417(int iParam0)
{
	Var0 = { func_1922(1) };
	_0x3112adb9d5f3426b(&Var0, iParam0);
}

void func_1418(int iParam0)
{
	Var0 = { func_1909(889965687, func_1794(1), 1034665895, 1) };
	_0x3112adb9d5f3426b(&Var0, iParam0);
	func_1210(27, 0, 2, 0, 0);
}

void func_1419(int iParam0)
{
	func_1421(1);
	Var0 = { func_1909(273608212, func_1794(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

void func_1420()
{
	func_1924(-252071901, func_1923(-252071901, 0), 1, -142743235);
}

void func_1421(int iParam0)
{
	Var0 = { func_1909(-1295114026, func_1794(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

void func_1422(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
		Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
		if (Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == -244725740)
		{
			func_1924(Var0, Var0.f_1, 1, -142743235);
		}
		iVar2++;
	}
}

int func_1423(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1424()
{
	if (_get_number_of_references_of_script_with_name_hash(-1307215916) > 0 || _get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		return -504335712;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-947293544) > 0 || _get_number_of_references_of_script_with_name_hash(-814065802) > 0)
	{
		return -933924539;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-2041850076) > 0 || _get_number_of_references_of_script_with_name_hash(-701235215) > 0)
	{
		return 395262693;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-1909886917) > 0)
	{
		return -504335712;
	}
	return 371211549;
}

void func_1425(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 >= 8 || iParam2 < 0)
	{
		return;
	}
	if (is_bit_set(&(Global_3145858->f_60009[iParam2]), (0 + iParam0)) || iParam2 == iParam0)
	{
		func_1925(iParam0);
		*bParam1 = 1;
	}
	else
	{
		func_436(iParam0);
	}
}

void func_1426(float fParam0)
{
	if (Global_1071686->f_22961 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1071686->f_22961 = fParam0;
		}
	}
}

void func_1427(int iParam0, int iParam1)
{
	iVar0 = Local_57[iParam0]->f_9;
	if (iVar0 < 0 || iVar0 >= 16)
	{
		if (func_238())
		{
			return;
		}
		iVar0 = 0;
	}
	bVar1 = (Global_2097152->f_6314 == 1 && Global_2097152->f_6316 <= 1);
	func_1926(-933924539, iVar0, Local_57[iParam0]->f_10, bVar1, iParam1);
}

char* func_1428(int iParam0, int iParam1)
{
	if (is_ped_male(iParam1))
	{
		bVar1 = true;
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "STANDARD_PLAYER_PED_DAMAGE_MP";
			if (!bVar1)
			{
				sVar0 = "STANDARD_FEMALE_PLAYER_PED_DAMAGE_MP";
			}
			break;
		case 1:
			sVar0 = "STANDARD_PED_DAMAGE";
			if (!bVar1)
			{
				sVar0 = "STANDARD_FEMALE_PED_DAMAGE";
			}
			break;
	}
	return sVar0;
}

void func_1429(int iParam0, int iParam1)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = _inventory_get_ped_inventory_id(iParam1);
	if (!_0x886dfd3e185c8a89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	_0xc04f47d488ef9eba(iVar0, iVar1, &uVar2, 0);
}

struct<4> func_1430(int iParam0, int iParam1)
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
	Var17.f_8 = -427144552;
	iVar0 = _0x640f890c3e5a3ffd(iParam1, &Var17, &iVar1);
	if (iVar0 == -1)
	{
		return func_485();
	}
	if (iVar1 <= 0)
	{
		_0x42a2f33a1942e865(iVar0);
		return func_485();
	}
	Var31.f_9 = -1591664384;
	Var53.f_9 = -1591664384;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (_0x82fa24c3d3fcd9b7(iVar0, iVar2, &Var3))
		{
			if (Var3.f_4 != -1569615261)
			{
				Var31 = { Var53 };
				if (_0x025a1b1fb03fbf61(iParam1, &Var3, &Var31, 22, 1))
				{
					if (Var31.f_14 == iParam0)
					{
						_0x42a2f33a1942e865(iVar0);
						return Var3;
					}
				}
			}
		}
		iVar2++;
	}
	_0x42a2f33a1942e865(iVar0);
	return func_485();
}

void func_1431(int iParam0, int iParam1)
{
	iVar0 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_7;
	if (iVar0 != 0)
	{
		bVar1 = false;
		if (iVar0 == -1)
		{
			if (func_278(Local_57[iVar6148]->f_4) && func_833(iParam0))
			{
				if (Local_57[iVar6148]->f_24 == 1)
				{
					iVar0 = 4;
					bVar1 = true;
				}
				else
				{
					iVar0 = 3;
				}
			}
			else
			{
				switch (Global_2097152->f_32)
				{
					case -1185533313:
					case 218185167:
						iVar0 = 5;
						break;
					default:
						iVar0 = 1;
						break;
				}
			}
		}
		func_1927(iVar0, bVar1);
	}
}

bool func_1432(int iParam0)
{
	return !is_bit_set(Global_2097152->f_258[iParam0]->f_76, 10);
}

int func_1433(int iParam0, float fParam1, float fParam2)
{
	*fParam1 = 1f;
	*fParam2 = 0f;
	if (func_833(iParam0))
	{
		if (func_278(Local_57[iVar6154]->f_4))
		{
			if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 8))
			{
				return -1880054030;
			}
			switch (Global_2097152->f_32)
			{
				case -1185533313:
				case 1744858848:
					return 105540869;
			}
			switch (Global_2097152->f_31)
			{
				case -1742691940:
				case -500771278:
				case 149530285:
					return -1390686937;
				case 628988510:
					return -841046000;
			}
		}
	}
	switch (Global_2097152->f_31)
	{
		case -1742691940:
		case -500771278:
		case 149530285:
			iVar0 = -1132780182;
			break;
		case 628988510:
			iVar0 = 493104853;
			break;
	}
	switch (Global_2097152->f_32)
	{
		case -1185533313:
		case 1744858848:
			iVar0 = -993457185;
			break;
		case 218185167:
			iVar0 = -1148661087;
			break;
	}
	if (func_203(20) && (func_203(21) || iVar0 == -993457185))
	{
		iVar0 = -1577441307;
	}
	else if (func_203(20))
	{
		iVar0 = -2038043934;
	}
	else if (func_203(21))
	{
		iVar0 = -993457185;
	}
	return iVar0;
}

void func_1434(int iParam0, int iParam1, var uParam2)
{
	Var0 = 160;
	Var0.f_1 = uVar6141;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = uParam2;
	uVar7 = func_534(4, 8);
	if (_0x179a6f0ee2e79026(&uVar7))
	{
		trigger_script_event(1, &Var0, 7, 51, &uVar7);
	}
}

void func_1435(int iParam0)
{
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if (iParam0 != -1 && &Global_3145858->f_57980[iParam0]->f_3[iVar3] != 0)
		{
			Var0 = &Global_3145858->f_57980[iParam0]->f_3[iVar3];
			Var0.f_1 = Global_3145858->f_57980[iParam0]->f_3[iVar3]->f_3;
			func_1928(Var0, Var0.f_1, 0, 1, 0, 0, 752097756, 0);
			if (Global_3145858->f_57980[iParam0]->f_3[iVar3]->f_1 != 1f)
			{
				_0xd04ad186ce8bb129(uVar6143, Var0, Global_3145858->f_57980[iParam0]->f_3[iVar3]->f_1);
			}
			if (Global_3145858->f_57980[iParam0]->f_100 == &Global_3145858->f_57980[iParam0]->f_3[iVar3])
			{
				set_current_ped_weapon(iVar6146, &(Global_3145858->f_57980[iParam0]->f_3[iVar3]), false, 0, false, false);
			}
		}
		iVar3++;
	}
	iLocal_13938 = iParam0;
}

void func_1436()
{
	if (Local_57[iVar6150]->f_3 > Local_57[iVar6150]->f_29)
	{
		iVar0 = 0;
		while (iVar0 < Global_2097152->f_255)
		{
			if (iVar0 > Local_57[iVar6150]->f_29)
			{
				if (is_bit_set(Global_2097152->f_258[iVar0]->f_76, 5))
				{
					Local_57[iVar6150]->f_29 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1437()
{
	if (Global_2097152->f_6485 == 1)
	{
		if (Local_57[iVar6150]->f_3 == iVar8431)
		{
			return true;
		}
	}
	else if (Local_57[iVar6150]->f_3 >= Global_2097152->f_255 || ((Global_2097152->f_6483 > -1 && Local_57[iVar6150]->f_4 >= Global_2097152->f_6483) && Local_57[iVar6150]->f_3 >= (Global_2097152->f_255 - 1)))
	{
		return true;
	}
	return false;
}

void func_1438(bool bParam0)
{
	if (!bParam0)
	{
		Local_57[iVar6149]->f_4++;
		if (Global_2097152->f_6483 > -1 && Local_57[iVar6149]->f_4 >= Global_2097152->f_6483)
		{
			if (Global_2097152->f_6482 > -1)
			{
				Local_57[iVar6149]->f_3 = Global_2097152->f_6482;
			}
		}
		else if (func_1158())
		{
			Local_57[iVar6149]->f_3 = uVar8430;
		}
		else
		{
			Local_57[iVar6149]->f_3 = 1;
		}
	}
	bVar0 = false;
	bVar1 = func_268(&(Local_57[iVar6149]->f_20));
	if (bVar1)
	{
		iVar2 = func_269(&(Local_57[iVar6149]->f_20), 0, 1);
		if (iVar2 < Local_57[iVar6149]->f_2)
		{
			Local_57[iVar6149]->f_2 = iVar2;
			bVar0 = true;
		}
	}
	if (!bParam0)
	{
		StringConCat(&cVar3, _create_var_string(2, "RC_LAP_LAP"), 32);
		StringConCat(&cVar3, " ", 32);
		StringIntConCat(&cVar3, Local_57[iVar6149]->f_4 + 1, 32);
		if (Local_5197.f_44 != 0)
		{
			StringConCat(&cVar3, " ", 32);
			StringConCat(&cVar3, _create_var_string(2, "RC_LAP_OF"), 32);
			StringConCat(&cVar3, " ", 32);
			StringIntConCat(&cVar3, Local_5197.f_44, 32);
		}
		if (bVar1)
		{
			StringCopy(&cVar7, _create_var_string(2, "RC_LAP_LT"), 32);
			if (bVar0)
			{
				StringCopy(&cVar7, _create_var_string(2, "RC_LAP_FSL"), 32);
			}
			StringConCat(&cVar7, " ", 32);
			StringConCat(&cVar7, func_1929(iVar2, 1, 2, 0, 0, 0), 32);
			func_1256(&cVar3, &cVar7, 3000, 0, 0, 0, 0, 0);
		}
		else
		{
			func_831(&cVar3, 3000, 0, 0, 0, 0);
		}
	}
	if (Local_57[iVar6149]->f_4 >= 2)
	{
		set_bit(&(Global_3145858->f_222), 1);
	}
	if (!bParam0)
	{
		func_272(&(Local_57[iVar6149]->f_20), 0, 1);
	}
	else
	{
		func_270(&(Local_57[iVar6149]->f_20));
		set_bit(&(Global_3145858->f_222), 1);
	}
}

int func_1439(int iParam0, int iParam1)
{
	iVar0 = Local_57[iVar6155]->f_3;
	Local_57[iVar6148]->f_7 = 0;
	func_975(&(Local_57[iVar6148]->f_7), iVar0, iParam0, iParam1, get_entity_coords(iVar6145, true, false));
	Local_57[iVar6148]->f_8 = 0;
	iVar1 = func_976(iVar0);
	if (iVar1 > -1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (is_bit_set(Local_57[iVar6148]->f_7, iVar2))
			{
				func_975(&(Local_57[iVar6148]->f_8), iVar1, iVar2, iVar0, Global_2097152->f_258[iVar0]->f_1[iVar2]->f_1);
			}
			iVar2++;
		}
	}
	return func_1930(iParam0, iVar0);
}

bool func_1440(int iParam0, int iParam1)
{
	if (bVar6154)
	{
		fVar1 = func_1931(get_entity_coords(iVar6153, true, false), func_871(iParam0, iParam1, 1));
		fVar2 = get_entity_heading(iVar6153);
		vVar3 = { get_entity_speed_vector(iVar6153, true) };
		if ((fVar2 > (fVar1 - 10f) && fVar2 < (fVar1 + 10f)) && vVar3.y >= 0f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_1441(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	if (uParam0->f_4 != 0 && uParam0->f_5 != -1)
	{
		if (_does_volume_exist(*uParam0))
		{
			if (is_bit_set(uParam0->f_2, 0))
			{
				if (!is_bit_set(uParam0->f_2, 1))
				{
					if (!does_entity_exist(uParam0->f_3) || is_entity_dead(uParam0->f_3))
					{
						_delete_volume(*uParam0);
						uParam0->f_3 = 0;
						clear_bit(&(uParam0->f_2), 0);
						return false;
					}
				}
				else if (!does_entity_exist(uParam0->f_3))
				{
					uParam0->f_3 = 0;
					clear_bit(&(uParam0->f_2), 0);
				}
				else if (is_entity_dead(uParam0->f_3) && func_1932(uParam0, &iVar1))
				{
					_0x19c975b81be53c28(*uParam0, uParam0->f_3);
					_0x7c00cfc48a782dc0(*uParam0, iVar1, func_1933(), func_1933(), 2, 1);
					uParam0->f_3 = iVar1;
				}
			}
			else
			{
				func_1848(uParam0, 0);
			}
		}
		else
		{
			iVar1 = func_1934(uParam0->f_4, uParam0->f_5, uParam0->f_7, uParam0->f_8, uParam0->f_8.f_1, uParam0->f_8.f_2);
			if (does_entity_exist(iVar1))
			{
				Var2 = { func_1346(uParam0->f_1, 0, 0, 0, 0) };
				*uParam0 = Var2;
				if (_does_volume_exist(*uParam0))
				{
					iVar0 = 1;
					if (is_bit_set(Var2.f_2, 0))
					{
						set_bit(&(uParam0->f_2), 0);
					}
					else
					{
						clear_bit(&(uParam0->f_2), 0);
					}
				}
			}
			else
			{
				return false;
			}
		}
	}
	return iVar0;
}

void func_1442(int iParam0, int iParam1)
{
	if (!is_bit_set(iVar7385, iParam0))
	{
		func_1935(iParam0, iParam1, 0, iVar7452);
		iLocal_7456 = iVar7452 + 1;
		set_bit(&iLocal_7389, iParam0);
	}
}

void func_1443(int iParam0, int iParam1)
{
	if (Local_5197.f_172 == 1 && iVar7385 == 0)
	{
		if (iVar7381 == -1)
		{
			iLocal_7385 = iParam0;
		}
		else if (!func_1936(iParam0, iVar7381, iParam1, 0))
		{
			iLocal_7385 = iParam0;
		}
	}
	else
	{
		func_1442(iParam0, iParam1);
	}
}

void func_1444(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam1 = func_1185();
		*uParam0 = 3;
	}
	uParam0->f_1 = iParam1;
	if (iParam2 != -1)
	{
		func_376(uParam0, iParam2);
	}
}

void func_1445(var uParam0, bool bParam1)
{
	if (bParam1 == !is_bit_set(uParam0->f_7, 2))
	{
		return;
	}
	func_865(uParam0, &iVar0, &iVar1, &iVar2);
	if (bParam1)
	{
		clear_bit(&(uParam0->f_7), 2);
	}
	else
	{
		set_bit(&(uParam0->f_7), 2);
	}
	func_1273(uParam0, iVar0, iVar1, iVar2);
}

void func_1446(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_1699(iParam0))
	{
		func_1937(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1447(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28347), iParam0);
	if (!func_1938(iParam0))
	{
		func_1198(iParam0);
	}
}

void func_1448(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_1197(iParam0))
	{
		func_1693(iParam0);
	}
}

int func_1449()
{
	return 500408427;
}

int func_1450()
{
	return 1871037390;
}

bool func_1451(int iParam0, int iParam1)
{
	iVar0 = &Local_5197.f_577[iParam0];
	iVar1 = &Local_5197.f_577[iParam1];
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar2 = &Local_5197.f_560[iParam0];
	iVar3 = &Local_5197.f_560[iParam1];
	if (iVar2 > iVar3)
	{
		return true;
	}
	else if (iVar2 < iVar3)
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 < network_get_max_num_participants())
	{
		iVar7 = int_to_participantindex(iVar4);
		if (func_233(iVar4, iVar7))
		{
			if (Local_57[iVar4]->f_9 == iParam0 || Local_57[iVar4]->f_9 == iParam1)
			{
				iVar8 = network_get_player_index(iVar7);
				fVar9 = get_distance_between_coords(get_entity_coords(get_player_ped(iVar8), true, false), func_871(&(Local_5197.f_560[iParam0]), 0, 1), true);
				if (fVar5 == 0f || fVar9 < fVar5)
				{
					fVar5 = fVar9;
					iVar6 = Local_57[iVar4]->f_9;
				}
			}
		}
		iVar4++;
	}
	if (iVar6 == iParam0)
	{
		return true;
	}
	else if (iVar6 == iParam1)
	{
		return false;
	}
	return iParam0 < iParam1;
}

bool func_1452(int iParam0, int iParam1)
{
	if (Local_5197.f_536 != 0 && Local_5197.f_537 != -1)
	{
		if (Local_5197.f_536 != iParam0 || Local_5197.f_537 != iParam1)
		{
			return false;
		}
	}
	else
	{
		Local_5197.f_536 = iParam0;
		Local_5197.f_537 = iParam1;
	}
	if (is_bit_set(Local_5197.f_26, 13))
	{
		return false;
	}
	return true;
}

int func_1453(int iParam0)
{
	return Global_3145858->f_453[iParam0]->f_19;
}

void func_1454(int iParam0, int iParam1)
{
	func_1939(iParam0, iParam1, 1);
	if (_0x2d64376cf437363e(iParam0))
	{
		func_1940(iParam0, 1);
	}
	set_blocking_of_non_temporary_events(iParam0, false);
}

bool func_1455(int iParam0)
{
	if (does_entity_exist(iParam0) && func_1941(get_entity_model(iParam0)))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_1456()
{
	Local_5197.f_536 = 0;
	Local_5197.f_537 = -1;
	set_bit(&(Local_5197.f_26), 13);
}

void func_1457(var uParam0, var uParam1)
{
	if (is_bit_set(*uParam0, 1))
	{
		iVar2 = func_1942(18);
		iVar0 = iVar2;
		iVar1 = iVar2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		iVar1 = uParam0->f_2;
	}
	*uParam1 = func_1943(iVar0);
	uParam1->f_1 = func_1944(iVar1);
}

void func_1458(var uParam0, var uParam1, int iParam2)
{
	vVar0 = { func_1945(uParam0, 0) };
	if (iParam2 == -1)
	{
		uParam1->f_1 = func_1946(-1);
		uParam1->f_2 = func_1947(-1);
		uParam1->f_3 = func_1948(-1);
	}
	else
	{
		uParam1->f_1 = func_1946(vVar0.x);
		uParam1->f_2 = func_1947(vVar0.y);
		uParam1->f_3 = func_1948(vVar0.z);
	}
}

int func_1459(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 1351319737;
		case 0:
			return 0;
		case 1:
			return 1351319737;
		case 2:
			return 1741336375;
		case 3:
			return -340478195;
		case 4:
			return -99527738;
		case 5:
			return 257130058;
		case 6:
			return -1746147735;
		case 7:
			return 647332810;
		case 8:
			return 963881350;
		case 9:
			return 1244220145;
		case 10:
			return -318664541;
		case 11:
			return -1141877867;
		case 12:
			return -2110103510;
		case 13:
			return 1396310570;
		case 14:
			return -1325941340;
		case 15:
			return -37497133;
		case 16:
			return 1797293285;
		case 17:
			return 2029723802;
		case 18:
			return -1884467714;
		case 19:
			return -1646204315;
		case 20:
			return 875108083;
		case 21:
			return -1389874939;
		case 22:
			return -1024500589;
		case 23:
			return -928749571;
		case 24:
			return 1180033890;
		case 25:
			return -605090154;
		case 26:
			return 2035405959;
		case 27:
			return -1066147126;
		case 28:
			return -305447560;
		case 29:
			return -1546311283;
		case 30:
			return -1315224295;
		case 31:
			return -841811050;
		case 32:
			return -1063788244;
		case 33:
			return -751597989;
		case 34:
			return -469129209;
		case 35:
			return -163033980;
		case 36:
			return -335278967;
		case 37:
			return 432400396;
		case 38:
			return 1690205688;
		case 39:
			return 846764397;
		case 40:
			return 4011251;
		case 41:
			return 1000396653;
		case 42:
			return 1274148879;
		case 43:
			return 1594859082;
		case 44:
			return 1910490090;
		case 45:
			return -184104398;
		case 46:
			return 711799784;
		case 47:
			return -5120398;
		case 48:
			return 231242399;
		case 49:
			return 550805695;
		case 50:
			return 310248466;
		case 51:
			return -483782576;
		case 52:
			return 1486158628;
		case 53:
			return -639533637;
		case 54:
			return -1422909351;
		case 55:
			return -1639545210;
		case 56:
			return -1868357738;
		case 57:
			return -1697238020;
		case 58:
			return 1404249527;
		case 59:
			return 2103671063;
		case 60:
			return -949449440;
		default:
			break;
	}
	return 1351319737;
}

int func_1460(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1613128323;
		case 0:
			return 0;
		case 1:
			return -1613128323;
		case 2:
			return -1935706359;
		case 3:
			return 2069222518;
		case 4:
			return -668627436;
		case 5:
			return 180482892;
		case 6:
			return 414935856;
		case 7:
			return 317775775;
		case 8:
			return 457437253;
		case 9:
			return 1436607742;
		case 10:
			return -5228258;
		case 11:
			return 139352826;
		case 12:
			return -1652128408;
		case 13:
			return 1929162841;
		case 14:
			return 1773313477;
		case 15:
			return -765923568;
		case 16:
			return -1742648548;
		case 17:
			return 1174316760;
		case 18:
			return -1505531892;
		case 19:
			return 2089424026;
		case 20:
			return -1915242699;
		case 21:
			return -1577219261;
		case 22:
			return -1269616658;
		case 23:
			return -1134149612;
		case 24:
			return -803149943;
		case 25:
			return 1773279965;
		case 26:
			return 1266550546;
		case 27:
			return 918478224;
		case 28:
			return 659832507;
		case 29:
			return -2078508982;
		case 30:
			return 1943099316;
		default:
			break;
	}
	return 0;
}

int func_1461(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 1383590330;
		case 0:
			return 0;
		case 1:
			return 1383590330;
		case 2:
			return 548046368;
		case 3:
			return 1467937844;
		case 4:
			return 691935155;
		case 5:
			return -468677287;
		case 6:
			return -288915854;
		case 7:
			return 720369354;
		case 8:
			return 491707272;
		case 9:
			return 243875325;
		case 10:
			return -255655311;
		default:
			break;
	}
	return 0;
}

void func_1462(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	func_1949(iParam0);
	func_1950(iParam0, uParam1);
	func_1951(iParam0);
	func_1952(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1953(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		_update_ped_variation(iParam0, false, true, true, true, true);
	}
}

void func_1463(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (Param1 != -1)
	{
		switch (iParam10)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
		}
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		Var1 = Param1;
		iVar24 = 0;
		while (iVar24 <= (Param1 - 1))
		{
			Var1.f_1[iVar24] = &Param1.f_1[iVar24];
			Var1.f_12[iVar24] = &Param1.f_5[iVar24];
			iVar24++;
		}
		_0xa88e215ceb0435c0(iParam0, &Var1, 205298116, 128, 2, iVar0);
	}
}

void func_1464(int iParam0, int iParam1)
{
	if (func_1954(iParam0) != iParam1)
	{
		Local_5197.f_447[iParam0] = iParam1;
	}
}

void func_1465(int iParam0, bool bParam1)
{
	set_blocking_of_non_temporary_events(iParam0, bParam1);
}

bool func_1466(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!can_register_mission_vehicles(_0x635423d55ca84fc8(iParam1)))
	{
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (bParam7)
	{
		iVar1 = _0x635423d55ca84fc8(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (!func_750(_0x8df5f6a19f99f0d5(iParam1, iVar0)))
			{
				bVar2 = true;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return false;
		}
	}
	iVar3 = _create_mission_train(iParam1, vParam2, bParam5, bParam6, true, bParam8);
	if (!does_entity_exist(iVar3))
	{
		return false;
	}
	_0x06a09a6e0c6d2a84(iVar3, 0);
	*uParam0 = veh_to_net(iVar3);
	if (!network_does_network_id_exist(*uParam0))
	{
		return false;
	}
	if (bParam9)
	{
		_network_set_entity_invisible_to_network(iVar3, true);
	}
	else
	{
		set_network_id_exists_on_all_machines(*uParam0, true);
	}
	return true;
}

void func_1467(int iParam0, int iParam1)
{
	if (!is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 0))
	{
		set_train_cruise_speed(iParam0, Global_3145858->f_36480[iParam1]->f_8);
		set_train_speed(iParam0, Global_3145858->f_36480[iParam1]->f_8);
	}
	else
	{
		set_train_cruise_speed(iParam0, 0f);
		set_train_speed(iParam0, 0f);
	}
	Local_5197.f_513[iParam1] = Global_3145858->f_36480[iParam1]->f_8;
	bVar0 = is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 3);
	bVar1 = is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 2);
	_0xdd100ce1ebbf37e3(iParam0, bVar0);
	_0x4182c037aa1f0091(iParam0, bVar1);
	_0xa72b1bf3857b94d7(iParam0, 1);
	_0x1a861f899ebbe17c(iParam0, is_bit_set(Global_3145858->f_36480[iParam1]->f_7, 12));
	func_1955(iParam0, iParam1);
}

void func_1468(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -532393368:
			sVar0 = "HLOCATEBLIP";
			break;
		case 1627542854:
			sVar0 = "HPEDBLIP";
			break;
		case 1135537454:
			sVar0 = "HVEHICLEBLIP";
			break;
		case 422112462:
			sVar0 = "HOBJECTBLIP";
			break;
		case -1821507459:
			sVar0 = "HANIMALBLIP";
			break;
		case 465509728:
			sVar0 = "HTRAINBLIP";
			break;
	}
	set_blip_name_from_text_file(iParam0, sVar0);
}

void func_1469(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_233(iVar0, 255))
		{
			if (Local_57[iVar0]->f_24 == 1)
			{
				*iParam1 = iVar0;
				*iParam0 = get_player_ped(network_get_player_index(int_to_participantindex(iVar0)));
				return;
			}
		}
		iVar0++;
	}
	*iParam1 = -1;
	*iParam0 = func_1182();
}

float func_1470(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_1471(float fParam0, float fParam1, float fParam2)
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

bool func_1472()
{
	if (((((is_cinematic_cam_rendering() || func_1956()) || func_1957()) || func_1958()) || func_1959()) || func_264(iVar6150))
	{
		return false;
	}
	return true;
}

int func_1473(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_1088(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_1089(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1474(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (uParam0->f_3 == 5)
	{
		if (is_gameplay_hint_active())
		{
			func_1960();
		}
		if (bParam10)
		{
			uParam0->f_3 = 0;
		}
		return;
	}
	if (uParam0->f_3 > 0 && uParam0->f_3 < 5)
	{
		vVar0 = { _get_object_offset_from_coords(get_entity_coords(iParam1, true, false), fParam5, vParam2) };
		if (func_1961(uParam0, vVar0, iParam7, iParam6))
		{
			func_1960();
			func_1962(uParam0);
			uParam0->f_3 = 5;
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!is_gameplay_hint_active())
			{
				if (func_1963(uParam0, iParam1, vParam2, iParam6, iParam7, iParam8, iParam9))
				{
					uParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			func_1964(&(uParam0->f_4), *uParam0);
			if (func_1965(uParam0) >= iParam7)
			{
				uParam0->f_3 = 2;
			}
			break;
	}
}

bool func_1475(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_5;
	iVar1 = Global_2097152->f_6501[iParam0]->f_6;
	if (!is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 1))
	{
		if (Local_57[iVar6156]->f_4 < iVar0)
		{
			return false;
		}
		else if (Local_57[iVar6156]->f_4 == iVar0)
		{
			bVar2 = true;
		}
	}
	else if (Local_57[iVar6156]->f_4 != iVar0)
	{
		return false;
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (!is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 2))
		{
			if (iVar1 > 0)
			{
				if (Local_57[iVar6156]->f_3 <= iVar1)
				{
					return false;
				}
			}
		}
		else if (Local_57[iVar6156]->f_3 != iVar1 + 1)
		{
			return false;
		}
	}
	return true;
}

bool func_1476(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_7;
	iVar1 = Global_2097152->f_6501[iParam0]->f_8;
	if (iVar0 != -1)
	{
		if (Local_5197.f_542 < iVar0)
		{
			return false;
		}
		else if (Local_5197.f_542 == iVar0)
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2 && iVar1 != -1)
	{
		if (Local_5197.f_541 < iVar1)
		{
			return false;
		}
	}
	return true;
}

bool func_1477(int iParam0)
{
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 3))
	{
		if (!is_entity_dead(iVar6154))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 4))
	{
		if (!is_bit_set(iVar12120, iParam0))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 5))
	{
		if (!func_1966(iVar6154))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 6))
	{
		if (!is_ped_on_mount(iVar6154))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 7))
	{
		if (!does_entity_exist(_get_lassoed_entity(iVar6154)))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 8))
	{
		if (!does_entity_exist(_0x0c31c51168e80365(iVar6154)))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 9))
	{
		if (!_is_ped_hogtied(iVar6154))
		{
			return false;
		}
	}
	iVar0 = -1;
	if (Global_2097152->f_6501[iParam0]->f_9 != 0)
	{
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 14))
		{
			iVar1 = 0;
			get_current_ped_weapon(iVar6154, &iVar1, true, 0, false);
			if (iVar1 != Global_2097152->f_6501[iParam0]->f_9)
			{
				return false;
			}
		}
		else if (!has_ped_got_weapon(iVar6154, Global_2097152->f_6501[iParam0]->f_9, 0, false))
		{
			return false;
		}
		iVar0 = Global_2097152->f_6501[iParam0]->f_9;
	}
	if (Global_2097152->f_6501[iParam0]->f_10 != -1)
	{
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 15))
		{
			if (get_ammo_in_ped_weapon(iVar6154, iVar0) <= Global_2097152->f_6501[iParam0]->f_10)
			{
				return false;
			}
		}
		else if (get_ammo_in_ped_weapon(iVar6154, iVar0) >= Global_2097152->f_6501[iParam0]->f_10)
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 13))
	{
		if (!is_ped_in_combat(iVar6154, 0))
		{
			return false;
		}
	}
	if (!func_354(Global_2097152->f_6501[iParam0]->f_11) && Global_2097152->f_6501[iParam0]->f_17 > 0f)
	{
		bVar2 = is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 11);
		vVar3 = { Global_2097152->f_6501[iParam0]->f_11 };
		fVar6 = Global_2097152->f_6501[iParam0]->f_17;
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 10))
		{
			bVar7 = is_entity_in_angled_area(iVar6154, vVar3, Global_2097152->f_6501[iParam0]->f_14, fVar6, false, true, 0);
		}
		else
		{
			bVar7 = vdist2(get_entity_coords(iVar6154, false, false), vVar3) <= (fVar6 * fVar6);
		}
		if (bVar2)
		{
			if (bVar7)
			{
				return false;
			}
		}
		else if (!bVar7)
		{
			return false;
		}
	}
	if ((Global_2097152->f_6501[iParam0]->f_18 != 0 && Global_2097152->f_6501[iParam0]->f_19 > -1) && Global_2097152->f_6501[iParam0]->f_20 > 0f)
	{
		if (func_1967(Global_2097152->f_6501[iParam0]->f_18, Global_2097152->f_6501[iParam0]->f_19, &iVar8))
		{
			fVar9 = Global_2097152->f_6501[iParam0]->f_20;
			bVar10 = vdist2(get_entity_coords(iVar6154, false, false), get_entity_coords(iVar8, false, false)) <= (fVar9 * fVar9);
			if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 12))
			{
				if (bVar10)
				{
					return false;
				}
			}
			else if (!bVar10)
			{
				return false;
			}
		}
	}
	if (Global_2097152->f_6501[iParam0]->f_21 > -1)
	{
		Var11 = { func_1968(iVar6152) };
		_0x4ef23e04a0c8ff51(&Var11, &iVar18);
		bVar20 = is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 16);
		bVar21 = iVar18 < Global_2097152->f_6501[iParam0]->f_21;
		if (bVar20)
		{
			if (!bVar21)
			{
				return false;
			}
		}
		else if (bVar21)
		{
			return false;
		}
	}
	return true;
}

bool func_1478(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_22;
	iVar1 = Global_2097152->f_6501[iParam0]->f_23;
	if (!func_1967(iVar0, iVar1, &iVar2))
	{
		if (is_bit_set(Local_5197.f_538, iVar1))
		{
			if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 17) || is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 18))
			{
				return true;
			}
		}
		return false;
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 17))
	{
		if (!is_entity_dead(iVar2))
		{
			return false;
		}
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 18))
	{
		if (!func_1966(iVar2))
		{
			return false;
		}
	}
	if (is_entity_a_ped(iVar2))
	{
		iVar3 = get_ped_index_from_entity_index(iVar2);
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 19))
		{
			if (!is_ped_on_mount(iVar3))
			{
				return false;
			}
		}
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 20))
		{
			if (!does_entity_exist(_get_lassoed_entity(iVar3)))
			{
				return false;
			}
		}
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 21))
		{
			if (!does_entity_exist(_0x0c31c51168e80365(iVar3)))
			{
				return false;
			}
		}
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 22))
		{
			if (!_is_ped_hogtied(iVar3))
			{
				return false;
			}
		}
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 26))
		{
			if (!is_ped_in_combat(iVar3, 0))
			{
				return false;
			}
		}
	}
	if (!func_354(Global_2097152->f_6501[iParam0]->f_24) && Global_2097152->f_6501[iParam0]->f_30 > 0f)
	{
		bVar4 = is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 24);
		vVar5 = { Global_2097152->f_6501[iParam0]->f_24 };
		fVar8 = Global_2097152->f_6501[iParam0]->f_30;
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 23))
		{
			bVar9 = is_entity_in_angled_area(iVar2, vVar5, Global_2097152->f_6501[iParam0]->f_27, fVar8, false, true, 0);
		}
		else
		{
			bVar9 = vdist2(get_entity_coords(iVar2, false, false), vVar5) <= (fVar8 * fVar8);
		}
		if (bVar4)
		{
			if (bVar9)
			{
				return false;
			}
		}
		else if (!bVar9)
		{
			return false;
		}
	}
	if ((Global_2097152->f_6501[iParam0]->f_31 != 0 && Global_2097152->f_6501[iParam0]->f_32 > -1) && Global_2097152->f_6501[iParam0]->f_33 > 0f)
	{
		if (func_1967(Global_2097152->f_6501[iParam0]->f_31, Global_2097152->f_6501[iParam0]->f_32, &iVar10))
		{
			fVar11 = Global_2097152->f_6501[iParam0]->f_33;
			bVar12 = vdist2(get_entity_coords(iVar2, false, false), get_entity_coords(iVar10, false, false)) <= (fVar11 * fVar11);
			if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 25))
			{
				if (bVar12)
				{
					return false;
				}
			}
			else if (!bVar12)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_1479(int iParam0)
{
	if (Global_2097152->f_6501[iParam0]->f_35 != -1)
	{
		if (!func_268(&(Local_57[iVar6156]->f_18)) || func_269(&(Local_57[iVar6156]->f_18), 0, 0) < Global_2097152->f_6501[iParam0]->f_35)
		{
			return false;
		}
	}
	if ((Global_2097152->f_6501[iParam0]->f_36 != -1 && Global_2097152->f_6017 > 0) && func_268(&(Local_57[iVar6149]->f_18)))
	{
		if (func_269(&(Local_57[iVar6149]->f_18), 0, 0) >= Global_2097152->f_6501[iParam0]->f_36)
		{
			return false;
		}
	}
	if (Global_2097152->f_6501[iParam0]->f_37 != -1)
	{
		if (!func_268(&(Local_57[iVar6156]->f_22)) || func_269(&(Local_57[iVar6156]->f_22), 0, 0) < Global_2097152->f_6501[iParam0]->f_37)
		{
			return false;
		}
	}
	return true;
}

bool func_1480(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_39;
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = &uLocal_8637[iVar0];
	if (!does_pickup_exist(iVar1))
	{
		return false;
	}
	bVar2 = does_pickup_object_exist(iVar1);
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 28))
	{
		if (!bVar2)
		{
			return false;
		}
	}
	else if (is_bit_set(Global_2097152->f_6501[iParam0]->f_1, 29))
	{
		if (bVar2)
		{
			return false;
		}
	}
	return true;
}

bool func_1481(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_40;
	iVar1 = Global_2097152->f_6501[iParam0]->f_41;
	iVar2 = Global_2097152->f_6501[iParam0]->f_42;
	iVar3 = Local_5197.f_47;
	if (iVar0 > -1 && iVar0 < 16)
	{
		iVar3 = &Local_5197.f_48[iVar0];
	}
	if (iVar3 < iVar1 || iVar3 > iVar2)
	{
		return false;
	}
	return true;
}

void func_1482(int iParam0, var uParam1)
{
	Var0 = 164;
	Var0.f_1 = uVar6142;
	Var0.f_4 = iParam0;
	Var0.f_5 = uParam1;
	uVar6 = func_534(4, 8);
	if (_0x179a6f0ee2e79026(&uVar6))
	{
		trigger_script_event(1, &Var0, 6, 49, &uVar6);
	}
}

void func_1483(int iParam0)
{
	Var0 = 165;
	Var0.f_1 = uVar6143;
	Var0.f_4 = iParam0;
	_trigger_script_event_2(&Var0, 5, 50, get_id_of_this_thread());
}

void func_1484(int iParam0)
{
	if (!bVar6142)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
		return;
	}
	iVar0 = Global_2097152->f_6501[iParam0]->f_46;
	iVar1 = Global_2097152->f_6501[iParam0]->f_47;
	iVar2 = 0;
	if (iVar0 > -1)
	{
		if (iVar1 == -1)
		{
			iVar1 = 0;
		}
		if (iVar2 == -1)
		{
			iVar2 = 0;
		}
		func_1273(&(Local_5197.f_594), iVar0, iVar1, iVar2);
	}
	if (Global_2097152->f_6501[iParam0]->f_48 != 0)
	{
		func_1444(&(Local_5197.f_594), Global_2097152->f_6501[iParam0]->f_48, -1, 3);
	}
	func_1038(iParam0);
}

void func_1485(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_73;
	if (!is_string_null_or_empty(&(Global_2097152->f_6501[iParam0]->f_49)))
	{
		if (func_8() && func_1970(Global_2892896->f_6))
		{
			func_927(1);
		}
		func_518(&(Global_2097152->f_6501[iParam0]->f_49), iVar0, 0, 0, 0, 1);
	}
	if (!is_string_null_or_empty(&(Global_2097152->f_6501[iParam0]->f_57)))
	{
		func_1971(&(Global_2097152->f_6501[iParam0]->f_57), "", 0, 0, iVar0, 0, 0, 0, 0, 1, 1);
	}
	if (!is_string_null_or_empty(&(Global_2097152->f_6501[iParam0]->f_65)))
	{
		set_bit(&uLocal_13508, 30);
		func_272(&uLocal_12254, 0, 0);
		Local_12256 = { Global_2097152->f_6501[iParam0]->f_65 };
		iLocal_12264 = Global_2097152->f_6501[iParam0]->f_74;
	}
}

void func_1486(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_75;
	iVar1 = Global_2097152->f_6501[iParam0]->f_76;
	if (iVar0 == 0 || iVar1 == 0)
	{
		return;
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 0))
	{
		if (!bVar6142)
		{
			bVar2 = true;
		}
		else
		{
			func_1972(iVar0, iVar1);
		}
	}
	else
	{
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 1))
		{
			if (!bVar6142)
			{
				bVar2 = true;
			}
			else
			{
				func_1973(iVar0, iVar1);
			}
		}
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 2))
		{
			if (!bVar6142)
			{
				bVar2 = true;
			}
			else
			{
				func_1974(iVar0, iVar1);
			}
		}
		if (Global_2097152->f_6501[iParam0]->f_77 > -1)
		{
			if (func_1975(iVar0, iVar1, iParam0))
			{
				bVar2 = true;
			}
		}
	}
	if (bVar2)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
	}
	else
	{
		func_1038(iParam0);
	}
}

void func_1487(int iParam0)
{
	iVar0 = Global_2097152->f_6501[iParam0]->f_78;
	if (iVar0 == -1)
	{
		return;
	}
	fVar2 = Global_2097152->f_6501[iParam0]->f_79;
	if (fVar2 != -1f && &Local_5197.f_513[iVar0] != fVar2)
	{
		if (bVar6142)
		{
			Local_5197.f_513[iVar0] = fVar2;
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!network_is_host())
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		bVar3 = is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 5);
		bVar4 = is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 6);
		bVar5 = is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 7);
		bVar6 = is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 8);
		if ((bVar3 || bVar4) || bVar5)
		{
			if (func_1967(465509728, iVar0, &iVar7))
			{
				if (!network_has_control_of_entity(iVar7))
				{
					network_request_control_of_entity(iVar7);
					iLocal_12122 = 0;
				}
				else
				{
					iVar8 = get_vehicle_index_from_entity_index(iVar7);
					if (bVar3)
					{
						func_1976(iVar8);
					}
					if (bVar4)
					{
						_0xcfe122ec635cc2b2(iVar8, "DANGER", 1, 0);
					}
					if (bVar5)
					{
						_0x4182c037aa1f0091(iVar8, true);
					}
					else if (bVar6)
					{
						_0x4182c037aa1f0091(iVar8, false);
					}
				}
			}
		}
	}
	if (bVar1)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
	}
	else if (bVar12119)
	{
		func_1038(iParam0);
	}
}

void func_1488(int iParam0)
{
	Var0 = -1;
	Var0 = Global_2097152->f_6501[iParam0]->f_80;
	func_1977(&iLocal_6785, Var0);
}

void func_1489(int iParam0)
{
	Var0 = { Global_2097152->f_6501[iParam0]->f_89 };
	Var8 = { Global_2097152->f_6501[iParam0]->f_81 };
	if (is_string_null_or_empty(&Var0) || is_string_null_or_empty(&Var8))
	{
		return;
	}
	if (Global_2097152->f_6501[iParam0]->f_100 != 0 && Global_2097152->f_6501[iParam0]->f_101 != -1)
	{
		if (func_1967(Global_2097152->f_6501[iParam0]->f_100, Global_2097152->f_6501[iParam0]->f_101, &iVar16))
		{
			_play_sound_from_entity(&Var8, iVar16, &Var0, false, 0, 0);
		}
	}
	else if (!func_354(Global_2097152->f_6501[iParam0]->f_97))
	{
		_play_sound_from_position(&Var8, Global_2097152->f_6501[iParam0]->f_97, &Var0, false, 0, true, 0);
	}
	else
	{
		play_sound_frontend(&Var8, &Var0, false, 0);
	}
}

void func_1490(int iParam0)
{
	if (iVar6150 != -1)
	{
		return;
	}
	if (func_1978(iParam0))
	{
		iLocal_12122 = 0;
		return;
	}
	if (func_338())
	{
		iVar0 = Global_2097152->f_6501[iParam0]->f_102;
		if (iVar0 != 0)
		{
			iVar1 = Global_2097152->f_6501[iParam0]->f_103;
			if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 9))
			{
				if (!has_ped_got_weapon(iVar6146, iVar0, 0, false))
				{
					_give_weapon_to_ped_2(iVar6146, iVar0, iVar1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			else if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 10))
			{
				if (has_ped_got_weapon(iVar6146, iVar0, 0, false))
				{
					remove_weapon_from_ped(iVar6146, iVar0, true, -142743235);
				}
			}
			else if (iVar1 != 0 && has_ped_got_weapon(iVar6146, iVar0, 0, false))
			{
				_add_ammo_to_ped(iVar6146, iVar0, iVar1, 752097756);
			}
		}
		if (Global_2097152->f_6501[iParam0]->f_104 > -1)
		{
			Var2.f_4 = 3;
			Var2.f_8 = -1;
			Var2.f_9 = -1;
			Var2.f_10 = -1;
			Var2.f_11 = 1;
			Var2.f_42.f_1 = -1;
			Var2.f_42.f_3 = -1082130432;
			Var2.f_42.f_4 = 2;
			Var2.f_42.f_5 = -1082130432;
			Var2.f_42.f_7 = -1082130432;
			Var2.f_42.f_9 = -1082130432;
			Var2.f_42.f_11 = -1082130432;
			Var2.f_54.f_2 = -1;
			Var2.f_54.f_5 = -1;
			Var2 = { func_922(1, 0) };
			Var2.f_8 = Global_2097152->f_6501[iParam0]->f_104;
			bVar63 = is_bit_set(Var2.f_12, 0);
			func_1409(&Var2, bVar63, 0);
		}
	}
	if (Global_2097152->f_6501[iParam0]->f_106 != 0)
	{
		_report_crime(iVar6143, Global_2097152->f_6501[iParam0]->f_106, 0, 0, true);
		report_police_spotted_player(iVar6143);
	}
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 15))
	{
		if (!is_bit_set(iVar13505, 25))
		{
			set_bit(&uLocal_13508, 25);
		}
	}
	else if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 16))
	{
		if (is_bit_set(iVar13505, 25))
		{
			clear_bit(&uLocal_13508, 25);
		}
	}
}

void func_1491(int iParam0)
{
	if (!bVar6142)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (func_233(iVar0, iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			iVar3 = iVar2;
			if (Global_2097152->f_6501[iParam0]->f_109 > -1)
			{
				if (Global_2097152->f_6501[iParam0]->f_109 == 0)
				{
					if (Local_57[iVar0]->f_3 < Global_2097152->f_6501[iParam0]->f_110)
					{
						_0x31010318ba9897ac(&(Local_5197.f_173), iVar3);
					}
				}
				else if (Global_2097152->f_6501[iParam0]->f_109 == 1)
				{
					if (Local_57[iVar0]->f_3 == Global_2097152->f_6501[iParam0]->f_110)
					{
						_0x31010318ba9897ac(&(Local_5197.f_173), iVar3);
					}
				}
				else if (Global_2097152->f_6501[iParam0]->f_109 == 2)
				{
					if (Local_57[iVar0]->f_3 > Global_2097152->f_6501[iParam0]->f_110)
					{
						_0x31010318ba9897ac(&(Local_5197.f_173), iVar3);
					}
				}
				else if (Global_2097152->f_6501[iParam0]->f_109 == 3)
				{
					if (Local_57[iVar0]->f_3 <= Global_2097152->f_6501[iParam0]->f_110)
					{
						_0x31010318ba9897ac(&(Local_5197.f_173), iVar3);
					}
				}
				else if (Global_2097152->f_6501[iParam0]->f_109 == 4)
				{
					if (Local_57[iVar0]->f_3 >= Global_2097152->f_6501[iParam0]->f_110)
					{
						_0x31010318ba9897ac(&(Local_5197.f_173), iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	if (Global_2097152->f_6501[iParam0]->f_107 > 0)
	{
		func_1064(Global_2097152->f_6501[iParam0]->f_107);
	}
	iVar4 = Global_2097152->f_6501[iParam0]->f_108;
	if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 18))
	{
		iVar4 = func_383(iVar4);
	}
	if (Global_2097152->f_6501[iParam0]->f_108 > 0)
	{
		if (is_bit_set(Global_2097152->f_6501[iParam0]->f_45, 17))
		{
			Local_5197.f_166 = iVar4;
		}
		else
		{
			Local_5197.f_165 = iVar4;
		}
	}
	func_1038(iParam0);
}

void func_1492(int iParam0)
{
	if (!bVar6142)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
		return;
	}
	func_825(iParam0);
	func_1038(iParam0);
}

void func_1493(int iParam0)
{
	if (!bVar6142)
	{
		func_1969(iParam0);
		iLocal_12122 = 0;
		return;
	}
	iVar0 = Global_2097152->f_6501[iParam0]->f_111;
	iVar1 = Global_2097152->f_6501[iParam0]->f_112;
	if (iVar1 != 0)
	{
		if (iVar0 == -1821507459)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_3145858->f_452 - 1))
			{
				if (is_bit_set(iVar1, iVar2))
				{
					Local_5197.f_447[iVar2] = 4;
					Local_5197.f_480[iVar2] = iParam0;
				}
				iVar2++;
			}
		}
	}
	func_1038(iParam0);
}

bool func_1494(int iParam0)
{
	iVar0 = func_1979(iParam0);
	if (((iVar0 > 10 && iVar0 <= 22) || iVar0 == 5) || iVar0 == 1)
	{
		return true;
	}
	return false;
}

void func_1495()
{
	Local_57[iVar6150]->f_17++;
	func_1980();
	if (does_entity_exist(iVar6158))
	{
		vLocal_14012 = { get_entity_coords(iVar6158, true, false) };
	}
	if (!func_1981(0))
	{
		if ((func_675(-1) && Local_5197.f_47 > 1) && func_238())
		{
			set_bit(&uLocal_13508, 10);
		}
	}
	else
	{
		func_96();
	}
	func_162(iVar6147, &Local_13939, 0);
}

bool func_1496()
{
	bVar0 = true;
	if (func_675(-1) && iVar8322 != 0)
	{
		if ((!is_ped_injured(iVar8322) && !_is_mount_seat_free(iVar8322, -1)) && _is_mount_seat_free(iVar8322, 0))
		{
			if (!func_1982(iVar6147))
			{
				set_entity_visible(iVar6147, false);
				task_mount_animal(iVar6147, iVar8322, 1, 0, 2f, 16, 0, 0);
				bVar0 = false;
			}
			else
			{
				set_entity_visible(iVar6147, true);
				bVar0 = true;
			}
		}
		else if (Global_2097152->f_31 == 149530285)
		{
			if (!func_1393(&bVar1) && !bVar1)
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			do_screen_fade_in(500);
			func_62(1, 2);
			iLocal_8324 = 0;
		}
	}
	return bVar0;
}

void func_1497(bool bParam0)
{
	func_966(0);
	func_961(1);
	if (func_982())
	{
		set_ped_drops_weapons_when_dead(iVar6146, false);
	}
	if (!bParam0)
	{
		Var0.f_4 = 3;
		Var0.f_8 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11 = 1;
		Var0.f_42.f_1 = -1;
		Var0.f_42.f_3 = -1082130432;
		Var0.f_42.f_4 = 2;
		Var0.f_42.f_5 = -1082130432;
		Var0.f_42.f_7 = -1082130432;
		Var0.f_42.f_9 = -1082130432;
		Var0.f_42.f_11 = -1082130432;
		Var0.f_54.f_2 = -1;
		Var0.f_54.f_5 = -1;
		Var0 = { func_922(1, 0) };
		func_985(&Var0, 1);
	}
	func_169(0);
	clear_bit(&uLocal_13508, 10);
	if (iVar8128 > 0)
	{
		func_114(0);
	}
	else if (func_967() == 1)
	{
		func_114(0);
	}
	set_ped_config_flag(iVar6146, 366, true);
	set_ped_config_flag(iVar6146, 337, true);
	if (func_203(23))
	{
		set_ped_config_flag(iVar6146, 551, true);
	}
	if (Global_2097152->f_32 == 218185167 || Global_2097152->f_32 == -1185533313)
	{
		set_ped_config_flag(iVar6146, 544, true);
	}
	func_987(iVar6146);
	func_273(521265402, iVar6143, 1, 0);
	func_352(21);
	clear_bit(&uLocal_13508, 29);
	if (!func_354(vLocal_14012))
	{
		_0x9851de7aec10b4e1(vLocal_14012, 5f, 1, 0);
		vLocal_14012 = { 0f, 0f, 0f };
	}
	if (func_84(73))
	{
		set_ped_config_flag(iVar6146, 361, true);
	}
	if (func_84(78))
	{
		set_ped_config_flag(iVar6146, 567, true);
	}
	func_587(1);
	Local_57[iVar6149]->f_14 = { get_entity_coords(iVar6146, true, false) };
}

bool func_1498(int iParam0)
{
	return func_349(49, iParam0);
}

void func_1499()
{
	iVar0 = 0;
	while (iVar0 <= (Local_7498.f_9 - 1))
	{
		if (func_1441(Local_8132[iVar0]))
		{
			func_1983(&(Local_8132[iVar0]), iVar0, &Local_7498);
		}
		iVar0++;
	}
}

bool func_1500(int iParam0)
{
	iLocal_8324 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar0 != iVar6149)
		{
			if (Local_57[iVar0]->f_9 == iParam0)
			{
				iVar2 = int_to_participantindex(iVar0);
				if (func_233(iVar0, iVar2) && !func_93(iVar0))
				{
					iVar3 = network_get_player_index(iVar2);
					if (func_230(iVar3))
					{
						if ((is_bit_set(Local_57[iVar0]->f_13, 22) && !func_263(iVar0)) && !func_264(iVar0))
						{
							iVar4 = get_player_ped(iVar3);
							if (!is_ped_injured(iVar4) && is_ped_on_mount(iVar4))
							{
								iVar5 = get_mount(iVar4);
								if (!is_ped_injured(iVar5))
								{
									if (!_is_mount_seat_free(iVar5, -1) && _is_mount_seat_free(iVar5, 0))
									{
										iLocal_8324 = iVar5;
									}
									else
									{
										iVar1++;
										Jump @222; //curOff = 213
										iVar1++;
										if (iVar1 >= Local_5197.f_45)
										{
										}
										else
										{
											iVar0++;
										}
									}
									if (!is_ped_injured(iVar8321))
									{
										func_51(1);
										func_1984(1);
										func_961(0);
										vVar6 = { get_entity_coords(iVar8321, true, false) };
										Var9.f_17.f_9 = -432403087;
										Var9.f_17.f_6 = { vVar6 };
										Var9.f_17 = { 5f, 5f, 5f };
										Var39.f_6 = { vVar6 };
										func_1887(Var9, Var39, 0, 1, 1);
										return true;
									}
									else
									{
										iLocal_8324 = 0;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_1501()
{
	if (&Local_57[iVar6150] != 5)
	{
		return 0;
	}
	if (func_234(255) || !bVar6148)
	{
		return 0;
	}
	iVar0 = 0;
	if (Global_2097152->f_31 != -500771278)
	{
		if (Global_2097152->f_31 != 149530285)
		{
			if (Global_2097152->f_35 != 0)
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
			if (func_1985() && iVar8307 == 0)
			{
				if (!(is_ped_on_mount(iVar6147) || is_ped_in_any_vehicle(iVar6147, false)))
				{
					if (func_268(&uLocal_8312))
					{
						if (func_269(&uLocal_8312, 0, 0) >= 2250)
						{
							iVar0 = 1;
						}
					}
					else
					{
						func_272(&uLocal_8312, 0, 0);
						func_271(999882722, 1);
						func_1986();
					}
				}
				else if (func_268(&uLocal_8312))
				{
					func_270(&uLocal_8312);
				}
				if (Global_2097152->f_31 != 149530285)
				{
					bVar2 = false;
					if (is_ped_in_any_vehicle(iVar6147, false))
					{
						iVar3 = get_vehicle_ped_is_in(iVar6147, false);
						if (!is_vehicle_driveable(iVar3, false, false))
						{
							bVar2 = true;
						}
						if (_is_draft_vehicle(iVar3))
						{
							if (_0xa19447d83294e29f(iVar3, &uVar4, &uVar5))
							{
								iVar6 = 0;
								while (iVar6 < 6)
								{
									iVar7 = iVar6;
									iVar8 = _get_ped_in_draft_seat(iVar3, iVar7);
									if (does_entity_exist(iVar8))
									{
										if (is_ped_ragdoll(iVar8))
										{
											bVar2 = true;
										}
									}
									iVar6++;
								}
							}
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						if (func_268(&uLocal_8314))
						{
							if (func_269(&uLocal_8314, 0, 0) >= 2250)
							{
								iVar0 = 1;
							}
						}
						else
						{
							func_272(&uLocal_8314, 0, 0);
							func_1986();
						}
					}
				}
				else if (func_268(&uLocal_8314))
				{
					func_270(&uLocal_8314);
				}
			}
		}
	}
	return iVar0;
}

bool func_1502()
{
	if (!func_1987())
	{
		return false;
	}
	if (func_1988())
	{
		return false;
	}
	return true;
}

bool func_1503()
{
	iVar0 = 0;
	if (func_652(255) || !bVar6148)
	{
		return false;
	}
	if (func_268(&(Local_57[iVar6150]->f_18)) && func_269(&(Local_57[iVar6150]->f_18), 0, 0) > 5000)
	{
		if (&Local_57[iVar6150] == 5)
		{
			iVar0 = 1;
		}
	}
	if (&Local_57[iVar6150] != 5)
	{
		if (iVar8307 != 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_1504(bool bParam0)
{
	if (bVar6145 && &Local_57[iVar6149] == 5)
	{
		if ((((!is_ped_jacking(iVar6146) && !is_ped_being_jacked(iVar6146)) && !is_pause_menu_active()) && !is_ped_getting_into_a_vehicle(iVar6146)) || bParam0)
		{
			if (!func_268(&uLocal_8310))
			{
				func_272(&uLocal_8310, 0, 0);
			}
			iVar0 = 750;
			iVar1 = func_269(&uLocal_8310, 0, 0);
			if (iVar1 >= iVar0 || bParam0)
			{
				if (!bParam0)
				{
					if (!func_476(iVar8315))
					{
						iLocal_8318 = func_1989("RC_MNRSPMTR", 21798980, 1, 0, 1, 4, 570, 4000, 10, 1073741824, -2018976333, 0);
						func_1990(iVar8315, 1, 1, 1);
						func_636(iVar8315, 10, 1, 1);
						func_1991(iVar8315, 1, 1);
					}
				}
				if (func_637(iVar8315, 1) || bParam0)
				{
					func_196();
					func_1506();
					return true;
				}
			}
		}
		else
		{
			func_196();
		}
	}
	else
	{
		func_196();
	}
	return false;
}

void func_1505()
{
	set_bit(&(Local_57[iVar6150]->f_13), 11);
	func_1506();
	func_49(1, 1);
}

void func_1506()
{
	disable_control_action(0, -17122892, false);
	disable_control_action(0, -874806616, false);
}

void func_1507()
{
	clear_bit(&(Local_57[iVar6150]->f_13), 11);
	func_1497(0);
	func_62(1, 2);
	func_272(&uLocal_8316, 0, 0);
}

bool func_1508()
{
	if ((func_269(&uLocal_8316, 0, 0) >= 3000 && is_screen_faded_in()) && !is_control_pressed(0, 21798980))
	{
		return true;
	}
	return false;
}

bool func_1509()
{
	iVar0 = 1;
	if (func_745())
	{
		if (is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 7))
		{
			iVar0 = 0;
		}
	}
	else if (func_203(4))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1510(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		set_ped_config_flag(iParam1, 373, bParam2);
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			iVar3 = get_player_ped(iVar2);
			if (iParam0 != iVar3)
			{
				if (bParam2)
				{
					_0x53ba7d96b9a421d9(iVar3, iParam1);
				}
				else
				{
					_0x96c7b659854de629(iVar3, iParam1);
				}
			}
		}
		iVar0++;
	}
}

void func_1511(var uParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		iVar0 = _0xa31d350d66fa1855(iParam1);
		if (iVar0 == 0 || !_0xaf61b3cd8c3b82c3(iParam1))
		{
			if (uParam0->f_3)
			{
				uParam0->f_3 = 0;
				func_1992(uParam0);
				if (bParam2)
				{
					if (does_particle_fx_looped_exist(uParam0->f_4))
					{
						stop_particle_fx_looped(uParam0->f_4, false);
					}
				}
				if (animpostfx_is_running("MP_RiderFormation"))
				{
					_0xc5cb91d65852ed7e("MP_RiderFormation");
				}
			}
		}
		else if (!uParam0->f_3)
		{
			uParam0->f_3 = 1;
			func_1993(uParam0, iVar0);
			if (bParam2)
			{
				iVar1 = _get_rider_of_mount(iParam1, false);
				if (does_entity_exist(iVar1))
				{
					use_particle_fx_asset("scr_net_race_checkpoints");
					uParam0->f_4 = start_particle_fx_looped_on_ped_bone("scr_net_race_slipstream", iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 56200, 1f, false, false, false);
				}
			}
			if (!animpostfx_is_running("MP_RiderFormation"))
			{
				animpostfx_play("MP_RiderFormation");
			}
		}
	}
}

bool func_1512()
{
	if (bVar6148)
	{
		bVar0 = is_ped_on_mount(iVar6147);
		bVar1 = is_ped_in_any_vehicle(iVar6147, false);
		if (bVar0 || bVar1)
		{
			if (bVar0)
			{
				iVar3 = get_mount(iVar6147);
				iVar4 = 2;
			}
			else
			{
				iVar3 = get_vehicle_ped_is_in(iVar6147, false);
				iVar4 = get_vehicle_model_number_of_seats(get_entity_model(iVar3));
			}
			if (!is_entity_dead(iVar3) && network_has_control_of_entity(iVar3))
			{
				bVar2 = true;
				iVar5 = 0;
				while (iVar5 <= (iVar4 - 1))
				{
					iVar6 = (iVar5 - 1);
					if (_0x2e2e06023d07631e(iVar3, iVar6))
					{
						iVar7 = _0xffec4b0a1a3ed515(iVar3, iVar6);
						if (iVar7 != iVar6147 && is_ped_a_player(iVar7))
						{
							iVar8 = network_get_player_index_from_ped(iVar7);
							if (network_is_player_active(iVar8) && !_0x72b2e00c9bac6789(&(Local_5197.f_173), iVar8))
							{
								bVar2 = false;
							}
							else
							{
								iVar5++;
							}
							if (!func_268(&uLocal_13655))
							{
								func_280(&uLocal_13655, 0, 0);
								if (bVar0)
								{
									task_horse_action(get_mount(iVar6147), 2, 0, 0);
								}
							}
							if (func_269(&uLocal_13655, 0, 0) > 2000)
							{
								if (bVar0)
								{
								}
								else if (bVar1)
								{
									if (bVar2)
									{
										_set_entity_health(iVar3, 0, 0);
									}
								}
								return true;
							}
							else if (func_269(&uLocal_13655, 0, 0) > 1000)
							{
								func_96();
							}
							Jump @331; //curOff = 324
							return true;
							return false;
						}
					}
				}
			}
		}
	}
}

void func_1513(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_1514(int iParam0)
{
	return _0x771dfcb24d19c2f6(0) >= iParam0;
}

void func_1515()
{
	iVar0 = func_885(0);
	_0xd5d72f1624f3ba7c(iVar0);
}

void func_1516(int iParam0, int iParam1)
{
	iVar0 = Local_57[iVar6148]->f_9;
	*iParam0 = -1;
	*iParam1 = -1;
	if (iVar0 > -1)
	{
		if (Global_2097152->f_6317[iVar0]->f_5 > -1)
		{
			*iParam0 = Global_2097152->f_6317[iVar0]->f_5;
		}
		if (Global_2097152->f_6317[iVar0]->f_6 > -1)
		{
			*iParam1 = Global_2097152->f_6317[iVar0]->f_6;
		}
	}
	if (*iParam0 == -1)
	{
		if (Global_2097152->f_6459 > -1)
		{
			*iParam0 = Global_2097152->f_6459;
		}
	}
	if (*iParam1 == -1)
	{
		if (Global_2097152->f_6460 > -1)
		{
			*iParam1 = Global_2097152->f_6460;
		}
	}
}

void func_1517(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 > -1 && iParam2 < 18)
	{
		if (is_bit_set(Global_3145858->f_49704[iParam2]->f_7, 1))
		{
			return;
		}
	}
	if (!func_268(&(uParam1->f_12)))
	{
		func_272(&(uParam1->f_12), 0, 0);
	}
	if (func_269(&(uParam1->f_12), 0, 0) < 2000)
	{
		return;
	}
	if ((((is_ped_injured(iParam0) || _0x3bdfcf25b58b0415(iParam0)) || func_652(255)) || _0xb655db7582aec805(iParam0)) || func_1994(iParam0, 0))
	{
		return;
	}
	Var0 = { func_1920(0, 3) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		if (!_0x4c543d5dfcd2dafd(&Var0, uParam1))
		{
			*uParam1 = { Var0 };
			Var4.f_9 = -1591664384;
			if (_0x9700e8efc4ab9089(3, uParam1, &Var4, true))
			{
				uParam1->f_8 = Var4.f_4;
			}
		}
	}
	else
	{
		*uParam1 = { func_485() };
		uParam1->f_8 = 0;
	}
	Var18 = { func_1920(1, 3) };
	if (_0xb881ca836cc4b6d4(&Var18))
	{
		if (!_0x4c543d5dfcd2dafd(&Var18, &(uParam1->f_4)))
		{
			uParam1->f_4 = { Var18 };
			Var22.f_9 = -1591664384;
			if (_0x9700e8efc4ab9089(3, &(uParam1->f_4), &Var22, true))
			{
				uParam1->f_9 = Var22.f_4;
			}
		}
	}
	else
	{
		uParam1->f_4 = { func_485() };
		uParam1->f_9 = 0;
	}
	if (_0xb881ca836cc4b6d4(uParam1))
	{
		iVar36 = _0xaf9d167a5656d6a6(iParam0, uParam1);
		if (iVar36 != uParam1->f_10)
		{
			uParam1->f_10 = iVar36;
		}
	}
	if (_0xb881ca836cc4b6d4(&(uParam1->f_4)))
	{
		iVar37 = _0xaf9d167a5656d6a6(iParam0, &(uParam1->f_4));
		if (iVar37 != uParam1->f_11)
		{
			uParam1->f_11 = iVar37;
		}
	}
	func_272(&(uParam1->f_12), 0, 0);
}

int func_1518(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_873(iParam0, fParam1, bParam2, bParam3);
}

int func_1519(int iParam0, int iParam1, int iParam2)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_1995(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1996(iParam0, iParam1, iParam2);
	}
	Var1 = { func_1997(iParam0, 0, 1) };
	Var6 = { func_1909(iParam0, Var1, Var1.f_4, 0) };
	return func_1998(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_1520(int iParam0, int iParam1)
{
	remove_pickup(iParam0);
}

int func_1521(int iParam0)
{
	if (_0x705be297eebdb95d(iParam0))
	{
		iParam0 = func_1999(iParam0);
	}
	switch (iParam0)
	{
		case -1101297303:
			return Global_2097152->f_6489;
		case 416676503:
			return Global_2097152->f_6490;
		case -594562071:
			return Global_2097152->f_6491;
		case 970310034:
			return Global_2097152->f_6492;
		case 860033945:
			return Global_2097152->f_6493;
		case -2002235300:
		case 115405099:
			return Global_2097152->f_6495;
		case -1504859554:
			return Global_2097152->f_6496;
		case 1885857703:
			return Global_2097152->f_6497;
		case -1511427369:
		case 2133046983:
			return Global_2097152->f_6499;
	}
	return -1;
}

bool func_1522(int iParam0)
{
	if (((((_is_weapon_revolver(iParam0) || _is_weapon_pistol(iParam0)) || _is_weapon_repeater(iParam0)) || _is_weapon_rifle(iParam0)) || _is_weapon_shotgun(iParam0)) || _is_weapon_sniper(iParam0))
	{
		return true;
	}
	return false;
}

void func_1523(int iParam0, bool bParam1)
{
	if (!does_pickup_exist(&(uLocal_8637[iParam0])))
	{
		return;
	}
	if (does_blip_exist(&(iLocal_8436[iParam0])))
	{
		func_2000(iParam0, !bParam1);
		return;
	}
	iVar0 = func_2001(get_weapon_type_from_pickup_type(Global_3145858->f_6823[iParam0]->f_17), Global_3145858->f_6823[iParam0]->f_17, Global_3145858->f_6823[iParam0]->f_24);
	iLocal_8436[iParam0] = blip_add_for_pickup_placement(1664425300, &(uLocal_8637[iParam0]));
	_blip_set_modifier(&(iLocal_8436[iParam0]), 1654237215);
	set_blip_sprite(&(iLocal_8436[iParam0]), iVar0, true);
	set_blip_name_from_text_file(&(iLocal_8436[iParam0]), func_2002(get_weapon_type_from_pickup_type(Global_3145858->f_6823[iParam0]->f_17), Global_3145858->f_6823[iParam0]->f_17, Global_3145858->f_6823[iParam0]->f_24, Global_2097152->f_31));
	func_2000(iParam0, !bParam1);
}

void func_1524(var uParam0, var uParam1, int iParam2)
{
	if (!does_pickup_exist(uParam0[iParam2]))
	{
		func_1896(uParam1, iParam2);
		return;
	}
	if (!does_pickup_object_exist(uParam0[iParam2]))
	{
		func_1896(uParam1, iParam2);
		return;
	}
	iVar0 = get_pickup_object(uParam0[iParam2]);
	if (!does_entity_exist(iVar0))
	{
		func_1896(uParam1, iParam2);
		return;
	}
	if (!func_984(uParam1, iParam2))
	{
		if (is_bit_set(Global_3145858->f_6823[iParam2]->f_13, 12) && !func_84(36))
		{
			_set_pickup_object_glow_enabled(iVar0, true);
		}
		if (!is_bit_set(Global_3145858->f_6823[iParam2]->f_13, 19) && !func_84(69))
		{
			set_pickup_particle_fx_spawn(uParam0[iParam2], "scr_mp_item_pickup_spawn");
			set_pickup_particle_fx_highlight(uParam0[iParam2], "scr_mp_item_pickup_highlight");
		}
		func_807(uParam1, iParam2);
	}
}

bool func_1525(int iParam0, var uParam1, int iParam2)
{
	if (func_472(iParam0) || Global_3145858->f_18727[iParam0]->f_8 == 0)
	{
		return false;
	}
	if (does_entity_exist(*uParam1))
	{
		return true;
	}
	iVar0 = Global_3145858->f_18727[iParam0]->f_8;
	if (!is_model_valid(iVar0))
	{
		iVar0 = 207132841;
	}
	if (!func_750(iVar0))
	{
		return false;
	}
	*uParam1 = create_object(iVar0, Global_3145858->f_18727[iParam0]->f_1, false, false, true, false, true);
	func_1127(*uParam1, iParam0, iParam2, 1, 0);
	set_model_as_no_longer_needed(iVar0);
	return true;
}

void func_1526(int iParam0)
{
	set_entity_visible(&(uLocal_9056[iParam0]), true);
	set_entity_completely_disable_collision(&(uLocal_9056[iParam0]), true, false);
	set_object_targettable(&(uLocal_9056[iParam0]), true);
	if (!is_bit_set(Global_3145858->f_18727[iParam0]->f_19, 22))
	{
		iLocal_9358[iParam0] = func_1323(uLocal_9056[iParam0], Global_3145858->f_18727[iParam0]->f_8, 0);
	}
	if (((!does_blip_exist(&(iLocal_9207[iParam0])) && Global_3145858->f_18727[iParam0]->f_73 != -1193943474) && Global_3145858->f_18727[iParam0]->f_73 != 0) && Global_3145858->f_18727[iParam0]->f_73 != 1144721026)
	{
		iLocal_9207[iParam0] = _blip_add_for_entity(Global_3145858->f_18727[iParam0]->f_73, &(uLocal_9056[iParam0]));
		set_blip_sprite(&(iLocal_9207[iParam0]), Global_3145858->f_18727[iParam0]->f_74, false);
		_blip_set_modifier(&(iLocal_9207[iParam0]), Global_3145858->f_18727[iParam0]->f_75);
	}
	if (iVar6149 == iVar6156)
	{
		func_1896(&(Local_57[iVar6149]->f_40), iParam0);
	}
}

void func_1527(var uParam0, int iParam1, int iParam2)
{
	if (func_984(uParam0, iParam2))
	{
		return;
	}
	bVar0 = is_bit_set(Global_3145858->f_18727[iParam2]->f_19, 17);
	set_object_targettable(iParam1, bVar0);
	func_807(uParam0, iParam2);
}

bool func_1528(int iParam0, var uParam1, int iParam2)
{
	if (!func_472(iParam0) || Global_3145858->f_18727[iParam0]->f_8 == 0)
	{
		return false;
	}
	if (network_does_network_id_exist(*uParam1))
	{
		return true;
	}
	iVar0 = Global_3145858->f_18727[iParam0]->f_8;
	if (!is_model_valid(iVar0))
	{
		iVar0 = 207132841;
	}
	if (!func_750(iVar0))
	{
		return false;
	}
	if (!func_1125(uParam1, iVar0, Global_3145858->f_18727[iParam0]->f_1, 1, 0))
	{
		return false;
	}
	iVar1 = net_to_obj(*uParam1);
	bVar2 = func_1126(Global_3145858->f_18727[iParam0]);
	func_1127(iVar1, iParam0, iParam2, 1, bVar2);
	func_2003(iVar1, iParam0);
	set_model_as_no_longer_needed(iVar0);
	return true;
}

void func_1529(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam9)
	{
		iVar0 |= 128;
	}
	if (bParam2)
	{
		iVar0 |= 2;
	}
	if (bParam3)
	{
		iVar0 |= 4;
	}
	if (bParam4)
	{
		iVar0 |= 8;
	}
	if (bParam5)
	{
		iVar0 |= 16;
	}
	if (bParam6)
	{
		iVar0 |= 32;
	}
	if (bParam7)
	{
		iVar0 |= 64;
	}
	set_entity_proofs(iParam0, iVar0, false);
	if (bParam8 && is_entity_a_ped(iParam0))
	{
		set_ped_config_flag(_0x3ffb15534067dcd4(iParam0), 263, true);
	}
}

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 109029619;
		case 1:
			return 1765299542;
		case 2:
			return -1031763995;
		case 3:
			return -275684858;
		case 4:
			return -1561147190;
		case 5:
			return -736318691;
		case 6:
			return 158864851;
		case 7:
			return 923463928;
		case 8:
			return -317694716;
		case 10:
			return -267407652;
		case 11:
			return -1886482671;
		default:
			break;
	}
	return 0;
	return -1031763995;
}

void func_1531(int iParam0, float fParam1, float fParam2, float fParam3)
{
	_get_color_from_name(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*fParam1 = (to_float(iVar0) / fVar4);
	*fParam2 = (to_float(iVar1) / fVar4);
	*fParam3 = (to_float(iVar2) / fVar4);
}

bool func_1532(int iParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _get_entities_from_propset(&(uLocal_9840[iParam0]), iVar0, 0, false, false);
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		uVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
		iVar4 = _0x18013392501ce5dc(uVar3);
		if (!func_846(iVar4))
		{
		}
		else if (is_entity_visible(iVar4))
		{
			_0x20a4bf0e09bee146(iVar0);
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return false;
}

bool func_1533(int iParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _get_entities_from_propset(&(uLocal_9840[iParam0]), iVar0, 0, false, false);
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		uVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
		iVar4 = _0x18013392501ce5dc(uVar3);
		if (!func_846(iVar4))
		{
		}
		else if (!is_entity_visible(iVar4))
		{
			_0x20a4bf0e09bee146(iVar0);
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return false;
}

void func_1534(int iParam0)
{
	if (!_does_propset_exist(&(uLocal_9840[iParam0])))
	{
		return;
	}
	iVar3 = create_itemset(true);
	iVar4 = _get_entities_from_propset(&(uLocal_9840[iParam0]), iVar3, 0, false, false);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		uVar1 = get_indexed_item_in_itemset(iVar0, iVar3);
		iVar2 = _0x18013392501ce5dc(uVar1);
		_0x56e0735d6273b227(iVar2, 0);
		if (!func_846(iVar2))
		{
		}
		else
		{
			set_entity_visible(iVar2, true);
			set_entity_completely_disable_collision(iVar2, true, false);
			set_object_targettable(iVar2, true);
			if (!does_particle_fx_looped_exist(Local_9509[iParam0][iVar0]))
			{
				(*Local_9509[iParam0])[iVar0] = func_1323(&iVar2, get_entity_model(iVar2), 1);
			}
		}
		iVar0++;
	}
	if (iVar6149 == iVar6156)
	{
		clear_bit(&(Local_57[iVar6149]->f_46), iParam0);
	}
	_0x20a4bf0e09bee146(iVar3);
	destroy_itemset(iVar3);
}

bool func_1535()
{
	return is_bit_set(Global_2097152->f_6463, 0);
}

bool func_1536(int iParam0, int iParam1)
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

bool func_1537(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_34))
	{
		if (!is_entity_dead(Global_34) && !is_ped_injured(Global_34))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_34)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_1536(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_1538(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_2004(vVar0, vVar3, vParam1);
}

bool func_1539(int iParam0, var uParam1)
{
	if (!func_1536(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_459(uParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_459(uParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_459(uParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_1540(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_1541(int iParam0)
{
	func_410(2, iParam0);
}

bool func_1542(int iParam0)
{
	if ((!is_ped_dead_or_dying(*iParam0, true) && !is_ped_injured(*iParam0)) && !_0xb655db7582aec805(*iParam0))
	{
		return false;
	}
	return true;
}

bool func_1543(int iParam0)
{
	if (is_ped_in_any_vehicle(*iParam0, false) || is_ped_on_vehicle(*iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*iParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 749266870 || iVar1 == -1552059402)
		{
			return true;
		}
	}
	return false;
}

int func_1544()
{
	iVar0 = get_random_int_in_range(0, 100);
	if (iVar0 < 33)
	{
		return 320243264;
	}
	else if (iVar0 < 66)
	{
		return -1561793977;
	}
	return 137506481;
}

void func_1545(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam6)
	{
		if (bParam7)
		{
			if (!bParam8)
			{
				*uParam1 = { -0.0861f, 0.9336f, 0.5056f };
				*uParam2 = { 0.7282f, -1.9538f, 0.4905f };
				*uParam4 = 36.9924f;
			}
			else
			{
				*uParam1 = { -0.0238f, 0.5454f, 0.5883f };
				*uParam2 = { 0.755f, -2.3332f, 0.2612f };
				*uParam4 = 51.282f;
			}
		}
		else if (!bParam8)
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1.0378f, 0.7922f, 0.4744f };
					*uParam2 = { 1.7461f, -0.3213f, 0.3705f };
					*uParam3 = { -0.38f, 0f, -0.03f };
					*uParam4 = 37.0064f;
					break;
				case 1:
					*uParam1 = { -1.1623f, -0.1462f, 0.4814f };
					*uParam2 = { 1.4643f, 1.2992f, 0.3775f };
					*uParam3 = { -1f, 0.58f, -0.06f };
					*uParam4 = 37.0064f;
					break;
				case 2:
					*uParam1 = { -0.4398f, 1.287f, 0.4791f };
					*uParam2 = { 0.1169f, -1.6592f, 0.3818f };
					*uParam3 = { 0.44f, 0.14f, -0.02f };
					*uParam4 = 37.0064f;
					break;
				default:
					*uParam1 = { 0.4476f, 1.2324f, 0.4858f };
					*uParam2 = { -1.2264f, -1.255f, 0.3854f };
					*uParam3 = { 0.56f, 0.9f, -0.04f };
					*uParam4 = 37.0064f;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -0.5886f, 0.4554f, 0.6384f };
					*uParam2 = { 2.2954f, -0.1135f, 0.0391f };
					*uParam3 = { -0.22f, 0.03f, -0.05f };
					*uParam4 = 51.1841f;
					break;
				default:
					*uParam1 = { -0.1795f, 0.7041f, 0.6043f };
					*uParam2 = { 0.0136f, -2.2759f, 0.3181f };
					*uParam3 = { 0.28f, -0.03f, -0.055f };
					*uParam4 = 51.1841f;
					break;
			}
		}
	}
	else if (bParam7)
	{
		if (!bParam8)
		{
			*uParam1 = { -0.2081f, 0.9637f, 0.3846f };
			*uParam2 = { 0.8601f, -1.8387f, 0.3133f };
			*uParam4 = 36.9709f;
		}
		else
		{
			*uParam1 = { -0.098f, 0.5713f, 0.4475f };
			*uParam2 = { 1.0332f, -2.1964f, 0.2015f };
			*uParam4 = 51.1874f;
		}
	}
	else if (!bParam8)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.9423f, 0.8115f, 0.3073f };
				*uParam2 = { 1.7998f, -0.4052f, 0.3282f };
				*uParam3 = { -0.95f, -1.64f, -0.284f };
				*uParam4 = 37f;
				break;
			case 1:
				*uParam1 = { -1.1357f, -0.0544f, 0.3064f };
				*uParam2 = { 1.5686f, 1.2432f, 0.3634f };
				*uParam3 = { -0.75f, 0.75f, 0.03f };
				*uParam4 = 37f;
				break;
			case 2:
				*uParam1 = { -0.3074f, 1.2852f, 0.4028f };
				*uParam2 = { -0.2246f, -1.7076f, 0.2109f };
				*uParam3 = { 0.78f, 0f, -0.05f };
				*uParam4 = 37f;
				break;
			default:
				*uParam1 = { 0.4682f, 1.2259f, 0.4098f };
				*uParam2 = { -1.3971f, -1.1144f, 0.1998f };
				*uParam3 = { 0.76f, 0.86f, -0.05f };
				*uParam4 = 37f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.517f, 0.4743f, 0.4414f };
				*uParam2 = { 2.3308f, -0.4514f, 0.2602f };
				*uParam3 = { -0.25f, 0.03f, -0.02f };
				*uParam4 = 52f;
				break;
			default:
				*uParam1 = { -0.1382f, 0.6743f, 0.4704f };
				*uParam2 = { -0.167f, -2.3107f, 0.1718f };
				*uParam3 = { 0.16f, 0.03f, -0.03f };
				*uParam4 = 52f;
				break;
		}
	}
	if (bParam5)
	{
		uParam1->f_1 = 3.2f;
	}
}

int func_1546(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	if (uParam0->f_7 == 0)
	{
		func_2005(uParam0, vParam2, vParam5, iParam1, 0.3f, 1, 0);
	}
	else
	{
		iVar8 = get_shape_test_result(uParam0->f_7, &iVar0, &uVar1, &uVar4, &uVar7);
		switch (iVar8)
		{
			case 2:
				uParam0->f_7 = 0;
				if (iVar0 == 0)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 0:
				uParam0->f_7 = 0;
				break;
		}
	}
	return 0;
}

void func_1547(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, float fParam11)
{
	uParam0->f_7 = 0;
	if (!does_cam_exist(uParam0[0]))
	{
		(*uParam0)[0] = create_camera(26379945, false);
	}
	set_cam_affects_aiming(uParam0[0], false);
	stop_cam_pointing(uParam0[0]);
	set_cam_coord(uParam0[0], get_offset_from_entity_in_world_coords(*iParam1, vParam2));
	point_cam_at_coord(uParam0[0], get_offset_from_entity_in_world_coords(*iParam1, vParam5));
	set_cam_fov(uParam0[0], fParam11);
	shake_cam(uParam0[0], func_1087(3), 0.45f);
	set_cam_near_clip(uParam0[0], 0.15f);
	_0x9b1fc259187c97c0("player_outro");
	uParam0->f_13 = { vParam8 };
	uParam0->f_17 = 1;
}

Vector3 func_1548(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	func_2006(&vParam6, vParam3);
	return vParam0 + vParam6;
}

void func_1549(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_1088(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1550(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_1551(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_1552(int iParam0)
{
	switch (iParam0)
	{
		case -1928147756:
			func_510(func_490(-1892463704, -1928147756), 1);
			break;
		case -1058316279:
			func_510(func_490(-1892463704, -1058316279), 1);
			break;
		case -1581191600:
			func_510(func_490(-1892463704, -1581191600), 1);
			break;
		case 1530063285:
			func_510(func_490(-1892463704, 1530063285), 1);
			break;
		case 1399046085:
			func_510(func_490(-1892463704, 1399046085), 1);
			break;
		case 707056726:
			func_510(func_490(-1892463704, 707056726), 1);
			break;
		case 1722821502:
			func_510(func_490(-1892463704, 1722821502), 1);
			break;
		case -1625925065:
			func_510(func_490(-1892463704, -1625925065), 1);
			break;
		case -2026537663:
			func_510(func_490(-1892463704, -2026537663), 1);
			break;
		case 769276093:
			func_510(func_490(-1892463704, 769276093), 1);
			break;
		case -737967266:
			func_510(func_490(-1892463704, -737967266), 1);
			break;
		case -1110567953:
			func_510(func_490(-1892463704, -1110567953), 1);
			break;
		case -614717889:
			func_510(func_490(-1892463704, -614717889), 1);
			break;
		case -840899846:
			func_510(func_490(-1892463704, -840899846), 1);
			break;
		case -808084283:
			func_510(func_490(-1892463704, -808084283), 1);
			break;
		case 1801427726:
			func_510(func_490(-1892463704, 1801427726), 1);
			break;
		case -663251240:
			func_510(func_490(-1892463704, -663251240), 1);
			break;
		case 1763467984:
			func_510(func_490(-1892463704, 1763467984), 1);
			break;
		case 1797448669:
			func_510(func_490(-1892463704, 1797448669), 1);
			break;
		case 2049553553:
			func_510(func_490(-1892463704, 2049553553), 1);
			break;
		case -1191741868:
			func_510(func_490(-1892463704, -1191741868), 1);
			break;
		case -311722996:
			func_510(func_490(-1892463704, -311722996), 1);
			break;
		case 679801275:
			func_510(func_490(-1892463704, 679801275), 1);
			break;
		case -716072558:
			func_510(func_490(-1892463704, -716072558), 1);
			break;
		case -2077539676:
			func_510(func_490(-1892463704, -2077539676), 1);
			break;
		case 1150823022:
			func_510(func_490(-1892463704, 1150823022), 1);
			break;
		case 1015500476:
			func_510(func_490(-1892463704, 1015500476), 1);
			break;
		case 2134225326:
			func_510(func_490(-1892463704, 2134225326), 1);
			break;
		case -1132137047:
			func_510(func_490(-1892463704, -1132137047), 1);
			break;
		case -1851633148:
			func_510(func_490(-1892463704, -1851633148), 1);
			break;
		case 1251710716:
			func_510(func_490(-1892463704, 1251710716), 1);
			break;
		case 1728764840:
			func_510(func_490(-1892463704, 1728764840), 1);
			break;
		case 299170259:
			func_510(func_490(-1892463704, 299170259), 1);
			break;
		case -1085170826:
			func_510(func_490(-1892463704, -1085170826), 1);
			break;
		case -318321726:
			func_510(func_490(-1892463704, -318321726), 1);
			break;
		case 1054743401:
			func_510(func_490(-1892463704, 1054743401), 1);
			break;
		case -1008746630:
			func_510(func_490(-1892463704, -1008746630), 1);
			break;
		case -68117845:
			func_510(func_490(-1892463704, -68117845), 1);
			break;
		case -776864312:
			func_510(func_490(-1892463704, -776864312), 1);
			break;
		case -1792457046:
			func_510(func_490(-1892463704, -1792457046), 1);
			break;
		case -1208920672:
			func_510(func_490(-1892463704, -1208920672), 1);
			break;
		case -716088422:
			func_510(func_490(-1892463704, -716088422), 1);
			break;
		case 553641561:
			func_510(func_490(-1892463704, 553641561), 1);
			break;
		case -517030668:
			func_510(func_490(-1892463704, -517030668), 1);
			break;
		case -1296221679:
			func_510(func_490(-1892463704, -1296221679), 1);
			break;
		case -1387569989:
			func_510(func_490(-1892463704, -1387569989), 1);
			break;
		case -933688330:
			func_510(func_490(-1892463704, -933688330), 1);
			break;
		case 1196791162:
			func_510(func_490(-1892463704, 1196791162), 1);
			break;
		case -601057408:
			func_510(func_490(-1892463704, -601057408), 1);
			break;
		case 1573191414:
			func_510(func_490(-1892463704, 1573191414), 1);
			break;
		case 2033486435:
			func_510(func_490(-1892463704, 2033486435), 1);
			break;
		case 1645000405:
			func_510(func_490(-1892463704, 1645000405), 1);
			break;
		case -1197085363:
			func_510(func_490(-1892463704, -1197085363), 1);
			break;
		case -1179304729:
			func_510(func_490(-1892463704, -1179304729), 1);
			break;
		case 195014139:
			func_510(func_490(-1892463704, 195014139), 1);
			break;
		case 999882722:
			func_510(func_490(-1892463704, 999882722), 1);
			break;
		case -512460250:
			func_510(func_490(-1892463704, -512460250), 1);
			break;
		case 1057455349:
			func_510(func_490(-1892463704, 1057455349), 1);
			break;
		case 1453781476:
			func_510(func_490(-1892463704, 1453781476), 1);
			break;
		case 223181639:
			func_510(func_490(-1892463704, 223181639), 1);
			break;
		case 2076532901:
			func_510(func_490(-1892463704, 2076532901), 1);
			break;
		case 966194332:
			func_510(func_490(-1892463704, 966194332), 1);
			break;
		case -711431897:
			func_510(func_490(-1892463704, -711431897), 1);
			break;
		case -677165568:
			func_510(func_490(-1892463704, -677165568), 1);
			break;
		case 1471375922:
			func_510(func_490(-1892463704, 1471375922), 1);
			break;
		case -662385272:
			func_510(func_490(-1892463704, -662385272), 1);
			break;
		case 409276899:
			func_510(func_490(-1892463704, 409276899), 1);
			break;
		case -1199438720:
			func_510(func_490(-1892463704, -1199438720), 1);
			break;
	}
}

bool func_1553(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 141920372);
					return true;
				case 1:
					func_1570(iParam0, 164808569);
					return true;
				case 2:
					func_1570(iParam0, -1180082468);
					return true;
				case 4:
					func_1570(iParam0, -2031147264);
					return true;
				case 5:
					func_1570(iParam0, -520666383);
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 508408868);
					return true;
				case 1:
					func_1570(iParam0, 1384601825);
					return true;
				case 2:
					func_1570(iParam0, -630742936);
					return true;
				case 4:
					func_1570(iParam0, -1731638604);
					return true;
				case 5:
					func_1570(iParam0, -558743961);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1704706755);
					return true;
				case 1:
					func_1570(iParam0, 1682242652);
					return true;
				case 2:
					func_1570(iParam0, 840454092);
					return true;
				case 4:
					func_1570(iParam0, -1434522081);
					return true;
				case 5:
					func_1570(iParam0, -831349272);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 2078338893);
					return true;
				case 1:
					func_1570(iParam0, 1883772006);
					return true;
				case 2:
					func_1570(iParam0, -155428591);
					return true;
				case 4:
					func_1570(iParam0, 1961919243);
					return true;
				case 5:
					func_1570(iParam0, -1140524787);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -787998310);
					return true;
				case 1:
					func_1570(iParam0, -2096481814);
					return true;
				case 2:
					func_1570(iParam0, -861600541);
					return true;
				case 4:
					func_1570(iParam0, -2026035292);
					return true;
				case 5:
					func_1570(iParam0, 940896555);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -441826594);
					return true;
				case 1:
					func_1570(iParam0, -1932210817);
					return true;
				case 2:
					func_1570(iParam0, -1723818469);
					return true;
				case 4:
					func_1570(iParam0, -1730983216);
					return true;
				case 5:
					func_1570(iParam0, 366193833);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 746999957);
					return true;
				case 1:
					func_1570(iParam0, -1651609870);
					return true;
				case 2:
					func_1570(iParam0, -1460257402);
					return true;
				case 4:
					func_1570(iParam0, 1101765762);
					return true;
				case 5:
					func_1570(iParam0, 60426294);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1120501019);
					return true;
				case 1:
					func_1570(iParam0, -1994701304);
					return true;
				case 2:
					func_1570(iParam0, -1250863492);
					return true;
				case 4:
					func_1570(iParam0, 1132503084);
					return true;
				case 5:
					func_1570(iParam0, -213915774);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1675579448);
					return true;
				case 1:
					func_1570(iParam0, -1680249980);
					return true;
				case 2:
					func_1570(iParam0, -1015287151);
					return true;
				case 4:
					func_1570(iParam0, 1448625627);
					return true;
				case 5:
					func_1570(iParam0, 1600700374);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1439282189);
					return true;
				case 1:
					func_1570(iParam0, -442597619);
					return true;
				case 2:
					func_1570(iParam0, -1405402100);
					return true;
				case 4:
					func_1570(iParam0, 1747347831);
					return true;
				case 5:
					func_1570(iParam0, 1294670683);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1362160601);
					return true;
				case 1:
					func_1570(iParam0, 1551607978);
					return true;
				case 2:
					func_1570(iParam0, 394550420);
					return true;
				case 4:
					func_1570(iParam0, 435612048);
					return true;
				case 5:
					func_1570(iParam0, -778032786);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1106660708);
					return true;
				case 1:
					func_1570(iParam0, 1916064796);
					return true;
				case 2:
					func_1570(iParam0, 573469160);
					return true;
				case 4:
					func_1570(iParam0, 1197163612);
					return true;
				case 5:
					func_1570(iParam0, -1011774063);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 748102310);
					return true;
				case 1:
					func_1570(iParam0, -829059880);
					return true;
				case 2:
					func_1570(iParam0, 909744638);
					return true;
				case 4:
					func_1570(iParam0, -53235894);
					return true;
				case 5:
					func_1570(iParam0, -280763211);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 495027323);
					return true;
				case 1:
					func_1570(iParam0, -573822139);
					return true;
				case 2:
					func_1570(iParam0, 1206664547);
					return true;
				case 4:
					func_1570(iParam0, -1261396155);
					return true;
				case 5:
					func_1570(iParam0, -509294217);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1740867089);
					return true;
				case 1:
					func_1570(iParam0, -1407006733);
					return true;
				case 2:
					func_1570(iParam0, 2064163751);
					return true;
				case 4:
					func_1570(iParam0, -484344858);
					return true;
				case 5:
					func_1570(iParam0, -1396252740);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1995580526);
					return true;
				case 1:
					func_1570(iParam0, -1183817074);
					return true;
				case 2:
					func_1570(iParam0, 1294190546);
					return true;
				case 4:
					func_1570(iParam0, 271832586);
					return true;
				case 5:
					func_1570(iParam0, 2097578044);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1940435144);
					return true;
				case 1:
					func_1570(iParam0, 294884055);
					return true;
				case 2:
					func_1570(iParam0, -1066815900);
					return true;
				case 4:
					func_1570(iParam0, -1098075459);
					return true;
				case 5:
					func_1570(iParam0, -1864521818);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1686573701);
					return true;
				case 1:
					func_1570(iParam0, 617986395);
					return true;
				case 2:
					func_1570(iParam0, -1968225552);
					return true;
				case 4:
					func_1570(iParam0, 2048469463);
					return true;
				case 5:
					func_1570(iParam0, -2122282772);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -699632126);
					return true;
				case 1:
					func_1570(iParam0, -230140867);
					return true;
				case 2:
					func_1570(iParam0, -507219687);
					return true;
				case 4:
					func_1570(iParam0, 1869681799);
					return true;
				case 5:
					func_1570(iParam0, -859922585);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1351931840);
					return true;
				case 1:
					func_1570(iParam0, 8515760);
					return true;
				case 2:
					func_1570(iParam0, -1274702436);
					return true;
				case 4:
					func_1570(iParam0, -591073487);
					return true;
				case 5:
					func_1570(iParam0, -553729049);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1044927295);
					return true;
				case 1:
					func_1570(iParam0, 95877618);
					return true;
				case 2:
					func_1570(iParam0, -236613521);
					return true;
				case 4:
					func_1570(iParam0, -1760271659);
					return true;
				case 5:
					func_1570(iParam0, -1803932157);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -775402270);
					return true;
				case 1:
					func_1570(iParam0, 196937218);
					return true;
				case 2:
					func_1570(iParam0, 691207945);
					return true;
				case 4:
					func_1570(iParam0, 1051931144);
					return true;
				case 5:
					func_1570(iParam0, -162401871);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -544806817);
					return true;
				case 1:
					func_1570(iParam0, -503041395);
					return true;
				case 2:
					func_1570(iParam0, 386423476);
					return true;
				case 4:
					func_1570(iParam0, -1853991011);
					return true;
				case 5:
					func_1570(iParam0, -1341463260);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -2030291121);
					return true;
				case 1:
					func_1570(iParam0, -129802485);
					return true;
				case 2:
					func_1570(iParam0, 1024763596);
					return true;
				case 4:
					func_1570(iParam0, 1664678675);
					return true;
				case 5:
					func_1570(iParam0, -2117039952);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1799236902);
					return true;
				case 1:
					func_1570(iParam0, 1415190331);
					return true;
				case 2:
					func_1570(iParam0, -1139137307);
					return true;
				case 4:
					func_1570(iParam0, 771395735);
					return true;
				case 5:
					func_1570(iParam0, -1301911081);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1468990920);
					return true;
				case 1:
					func_1570(iParam0, 1656271864);
					return true;
				case 2:
					func_1570(iParam0, -1782065087);
					return true;
				case 4:
					func_1570(iParam0, -170418082);
					return true;
				case 5:
					func_1570(iParam0, -2083812190);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 741015982);
					return true;
				case 1:
					func_1570(iParam0, 418226275);
					return true;
				case 2:
					func_1570(iParam0, -526979618);
					return true;
				case 4:
					func_1570(iParam0, 1204077611);
					return true;
				case 5:
					func_1570(iParam0, 1306927320);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1103899888);
					return true;
				case 1:
					func_1570(iParam0, 788974741);
					return true;
				case 2:
					func_1570(iParam0, -1427275124);
					return true;
				case 4:
					func_1570(iParam0, 441149765);
					return true;
				case 5:
					func_1570(iParam0, -1616296867);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1334757493);
					return true;
				case 1:
					func_1570(iParam0, 1639592451);
					return true;
				case 2:
					func_1570(iParam0, -218000713);
					return true;
				case 4:
					func_1570(iParam0, -326595136);
					return true;
				case 5:
					func_1570(iParam0, 2068511649);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1601923150);
					return true;
				case 1:
					func_1570(iParam0, 2019647313);
					return true;
				case 2:
					func_1570(iParam0, 80361032);
					return true;
				case 4:
					func_1570(iParam0, 1328370356);
					return true;
				case 5:
					func_1570(iParam0, 1292115732);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 520349240);
					return true;
				case 1:
					func_1570(iParam0, 1539090900);
					return true;
				case 2:
					func_1570(iParam0, 753372778);
					return true;
				case 4:
					func_1570(iParam0, 1113247900);
					return true;
				case 5:
					func_1570(iParam0, -798381831);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_1554(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 2:
					func_1570(iParam0, -271200791);
					return true;
				case 5:
					func_1570(iParam0, 8877353);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1122507190);
					return true;
				case 1:
					func_1570(iParam0, -1101156118);
					return true;
				case 2:
					func_1570(iParam0, -72424037);
					return true;
				case 5:
					func_1570(iParam0, -758048323);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 402375650);
					return true;
				case 1:
					func_1570(iParam0, 1062810323);
					return true;
				case 2:
					func_1570(iParam0, 158368030);
					return true;
				case 5:
					func_1570(iParam0, 1433313014);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 641359967);
					return true;
				case 1:
					func_1570(iParam0, 765398879);
					return true;
				case 2:
					func_1570(iParam0, 438968977);
					return true;
				case 5:
					func_1570(iParam0, -1481882764);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -75035911);
					return true;
				case 1:
					func_1570(iParam0, 1524951530);
					return true;
				case 2:
					func_1570(iParam0, 1221820387);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 230469476);
					return true;
				case 1:
					func_1570(iParam0, 1227081320);
					return true;
				case 2:
					func_1570(iParam0, 2007784856);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -84407849);
					return true;
				case 1:
					func_1570(iParam0, 1726251513);
					return true;
				case 2:
					func_1570(iParam0, 1231356170);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 206154874);
					return true;
				case 1:
					func_1570(iParam0, -1811096503);
					return true;
				case 2:
					func_1570(iParam0, -1775658350);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -550809026);
					return true;
				case 1:
					func_1570(iParam0, 1110947996);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -96584803);
					return true;
				case 1:
					func_1570(iParam0, -123177683);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -335569120);
					return true;
				case 1:
					func_1570(iParam0, -891414119);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -20503957);
					return true;
				case 1:
					func_1570(iParam0, 1664928344);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -242448394);
					return true;
				case 1:
					func_1570(iParam0, 1970499269);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 586672844);
					return true;
				case 1:
					func_1570(iParam0, 2138604239);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 347229761);
					return true;
				case 1:
					func_1570(iParam0, -1847449694);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1001116282);
					return true;
				case 1:
					func_1570(iParam0, 2086009986);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -434933500);
					return true;
				case 1:
					func_1570(iParam0, 1781291055);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -649013377);
					return true;
				case 1:
					func_1570(iParam0, -1727285779);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1980352309);
					return true;
				case 1:
					func_1570(iParam0, -2034953920);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1424772636);
					return true;
				case 1:
					func_1570(iParam0, -550641016);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1672997811);
					return true;
				case 1:
					func_1570(iParam0, -1325988325);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 945853701);
					return true;
				case 1:
					func_1570(iParam0, 867306387);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1181298966);
					return true;
				case 1:
					func_1570(iParam0, 1168027500);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1706043166);
					return true;
				case 1:
					func_1570(iParam0, -1771679494);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1890026898);
					return true;
				case 1:
					func_1570(iParam0, -1470237463);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -2116147201);
					return true;
				case 1:
					func_1570(iParam0, 717289905);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -812825764);
					return true;
				case 1:
					func_1570(iParam0, -59564778);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -485004688);
					return true;
				case 1:
					func_1570(iParam0, 221101707);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1178527804);
					return true;
				case 1:
					func_1570(iParam0, 1596482175);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -691415903);
					return true;
				case 1:
					func_1570(iParam0, -1463198692);
					return true;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -459313076);
					return true;
				case 1:
					func_1570(iParam0, -1225000831);
					return true;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -202928404);
					return true;
				case 1:
					func_1570(iParam0, -1080850000);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_1555(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			func_1570(iParam0, 993575611);
			return true;
		case 2:
			func_1570(iParam0, -1905867771);
			return true;
		case 1:
			func_1570(iParam0, 1106082224);
			return true;
		case 0:
			func_1570(iParam0, -400280427);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1556(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, -717736488);
			return true;
		case 1:
			func_1570(iParam0, -1272926485);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1557(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, 1218516131);
			return true;
		case 1:
			func_1570(iParam0, 586664273);
			return true;
		case 2:
			func_1570(iParam0, 872442722);
			return true;
		case 3:
			func_1570(iParam0, -27656170);
			return true;
		case 4:
			func_1570(iParam0, 792289808);
			return true;
		case 5:
			func_1570(iParam0, 83037572);
			return true;
		case 6:
			func_1570(iParam0, 332966735);
			return true;
		case 7:
			func_1570(iParam0, -376088887);
			return true;
		case 8:
			func_1570(iParam0, -164368378);
			return true;
		case 9:
			func_1570(iParam0, -872834158);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1558(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		func_1570(iParam0, -104707719);
	}
	else
	{
		func_1570(iParam0, -1443353849);
	}
	return true;
}

bool func_1559(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, 433504553);
			return true;
		case 1:
			func_1570(iParam0, 1231265858);
			return true;
		case 2:
			func_1570(iParam0, 1002046703);
			return true;
		case 3:
			func_1570(iParam0, 2023784123);
			return true;
		case 4:
			func_1570(iParam0, 1663980503);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1560(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_1570(iParam0, 2008023596);
			return true;
		default:
			break;
	}
	func_1570(iParam0, 1839456265);
	return true;
}

bool func_1561(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, 281551868);
			return true;
		case 1:
			func_1570(iParam0, -1226016902);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1562(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, -21392155);
			return true;
		case 1:
			func_1570(iParam0, 298545790);
			return true;
		case 2:
			func_1570(iParam0, 1878546608);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1563(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			func_1570(iParam0, -388696912);
			return true;
		case 2:
			func_1570(iParam0, -285900559);
			return true;
		case 3:
			func_1570(iParam0, 223133087);
			return true;
		case 4:
			func_1570(iParam0, -1584142801);
			return true;
		case 5:
			func_1570(iParam0, 1874920074);
			return true;
		case 6:
			func_1570(iParam0, -971985112);
			return true;
		case 7:
			func_1570(iParam0, -1806513235);
			return true;
		case 8:
			func_1570(iParam0, -2126010933);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1564(int iParam0, int iParam1)
{
	if (iParam1 >= 120)
	{
		func_1570(iParam0, 569238447);
		return true;
	}
	else if (iParam1 >= 90)
	{
		func_1570(iParam0, -12527053);
		return true;
	}
	else if (iParam1 >= 60)
	{
		func_1570(iParam0, -1827244172);
		return true;
	}
	else if (iParam1 >= 30)
	{
		func_1570(iParam0, 258094385);
		return true;
	}
	else if (iParam1 >= 20)
	{
		func_1570(iParam0, 841284522);
		return true;
	}
	else if (iParam1 >= 15)
	{
		func_1570(iParam0, 1768450916);
		return true;
	}
	else if (iParam1 >= 10)
	{
		func_1570(iParam0, 1472776229);
		return true;
	}
	else if (iParam1 >= 5)
	{
		func_1570(iParam0, -652550244);
		return true;
	}
	else if (iParam1 > 0)
	{
		func_1570(iParam0, -1028377857);
		return true;
	}
	return false;
}

bool func_1565(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1570(iParam0, -839144692);
			return true;
		case 1:
			func_1570(iParam0, -623721286);
			return true;
		case 2:
			func_1570(iParam0, -1780401460);
			return true;
		case 3:
			func_1570(iParam0, -1557506722);
			return true;
		case 4:
			func_1570(iParam0, -1319833165);
			return true;
		case 5:
			func_1570(iParam0, -828036013);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1566(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1166734006);
					return true;
				case 1:
					func_1570(iParam0, -1442828365);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -30022643);
					return true;
				case 1:
					func_1570(iParam0, -1833565921);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -388253351);
					return true;
				case 1:
					func_1570(iParam0, -992287384);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 276990118);
					return true;
				case 1:
					func_1570(iParam0, 1062918758);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -2107839391);
					return true;
				case 1:
					func_1570(iParam0, -283526683);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 942626815);
					return true;
				case 1:
					func_1570(iParam0, -609512695);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 557525527);
					return true;
				case 1:
					func_1570(iParam0, 226916030);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -991989403);
					return true;
				case 1:
					func_1570(iParam0, -1195881041);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1225665142);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1234300219);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -399772096);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 255771757);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1042798183);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 2091065136);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1922809678);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -666282373);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1962755089);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1637607714);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1408912863);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1480346055);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -39086937);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 989269821);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1227598758);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1591616623);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1502616019);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 2091782826);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1855341535);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1222126411);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 1050023623);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, 679177202);
					return true;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -96628873);
					return true;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_1570(iParam0, -1008721227);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_1567(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			func_1570(iParam0, -1750196345);
			return true;
		case 3:
			func_1570(iParam0, 340433086);
			return true;
		case 4:
			func_1570(iParam0, 647642461);
			return true;
		case 5:
			func_1570(iParam0, 961241791);
			return true;
		case 6:
			func_1570(iParam0, 1258686008);
			return true;
		case 7:
			func_1570(iParam0, -807202832);
			return true;
		case 8:
			func_1570(iParam0, -515951960);
			return true;
		default:
			break;
	}
	return false;
}

void func_1568(int iParam0)
{
	func_2007(iParam0);
	func_2008();
}

int func_1569(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (iParam1 == 0)
		{
			return 27457000;
		}
		else if (iParam1 == 1)
		{
			return -1985454292;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			return -1722909891;
		}
		else if (iParam1 == 1)
		{
			return -1005050376;
		}
	}
	else if (iParam0 == 3)
	{
		return 1003643023;
	}
	else if (iParam0 == 4)
	{
		return 1677215183;
	}
	else if (iParam0 == 5)
	{
		if (iParam1 == 0)
		{
			return 45069099;
		}
		else if (iParam1 == 1)
		{
			return 39137574;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -1072306748;
		}
		else if (iParam1 == 1)
		{
			return 1336102094;
		}
	}
	return 0;
}

void func_1570(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

int func_1571(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_1570(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_2009(uParam1, iParam0, Var3);
	return 1;
}

int func_1572(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_55.f_1;
}

var func_1573()
{
	iVar2 = func_1572(iVar6150);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar0 != iVar6150 && Local_6163[iVar0]->f_3)
		{
			if (func_1572(iVar0) > iVar2)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_1574(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	iVar0 = network_get_player_index(int_to_participantindex(iParam0));
	iVar1 = get_player_ped(iVar0);
	vVar2.x = (&Global_1049266 + (0.35f * IntToFloat(Global_1048684->f_376)));
	vVar2.f_1 = (Global_1049266->f_1 + IntToFloat((Global_1048684->f_376 % 4)));
	vVar2.f_2 = Global_1049266->f_2;
	StringCopy(&(Global_1048684->f_22[Global_1048684->f_376]->f_1), get_player_name(iVar0), 64);
	Global_1048684->f_22[Global_1048684->f_376]->f_9 = iParam1;
	if (bParam4)
	{
		Global_1048684->f_466 = iParam1;
	}
	if (bParam7)
	{
		Global_1048684->f_468 = bParam7;
	}
	Global_1048684->f_467 = bParam5;
	if (!is_ped_injured(iVar1))
	{
	}
	if (!bParam2)
	{
		Global_1048684->f_22[Global_1048684->f_376] = clone_ped(iVar1, 0f, true, true);
	}
	if (does_entity_exist(iParam3))
	{
		Global_1048684->f_343[Global_1048684->f_376] = clone_ped(iParam3, 0f, false, true);
		set_entity_visible(&(Global_1048684->f_343[Global_1048684->f_376]), false);
		_set_entity_coords_and_heading(&(Global_1048684->f_343[Global_1048684->f_376]), vVar2, 0f, true, false, true);
		freeze_entity_position(&(Global_1048684->f_343[Global_1048684->f_376]), true);
	}
	if (is_ped_male(&(Global_1048684->f_22[Global_1048684->f_376])))
	{
		_0xa2f8b3b5fedfc100(&(Global_1048684->f_22[Global_1048684->f_376]), -420925418);
	}
	else
	{
		_0xa2f8b3b5fedfc100(&(Global_1048684->f_22[Global_1048684->f_376]), 697508196);
	}
	if (is_ped_dead_or_dying(&(Global_1048684->f_22[Global_1048684->f_376]), true))
	{
		resurrect_ped(&(Global_1048684->f_22[Global_1048684->f_376]));
	}
	if (is_ped_injured(&(Global_1048684->f_22[Global_1048684->f_376])))
	{
		revive_injured_ped(&(Global_1048684->f_22[Global_1048684->f_376]));
	}
	set_entity_invincible(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	clear_ped_tasks_immediately(&(Global_1048684->f_22[Global_1048684->f_376]), false, true);
	clear_ped_secondary_task(&(Global_1048684->f_22[Global_1048684->f_376]));
	set_blocking_of_non_temporary_events(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	set_entity_visible(&(Global_1048684->f_22[Global_1048684->f_376]), false);
	_set_entity_health(&(Global_1048684->f_22[Global_1048684->f_376]), 500, 0);
	_set_entity_coords_and_heading(&(Global_1048684->f_22[Global_1048684->f_376]), vVar2, 0f, true, false, true);
	freeze_entity_position(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	Global_1048684->f_376++;
}

int func_1575(var uParam0, int* iParam1)
{
	if (*uParam0 == 255)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		sVar1 = get_player_name(*uParam0);
		if (Global_1050050->f_101[iVar0]->f_14 == *uParam0 || are_strings_equal(&(Global_1050050->f_101[iVar0]->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return func_1576(iParam1);
}

int func_1576(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1050050->f_101[iVar0]->f_14 == 255 && !is_bit_set(*iParam0, iVar0))
		{
			set_bit(iParam0, iVar0);
			return iVar0;
		}
		else if (!network_is_player_active(Global_1050050->f_101[iVar0]->f_14) && !is_bit_set(*iParam0, iVar0))
		{
			set_bit(iParam0, iVar0);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1577(var uParam0, float fParam1, bool bParam2)
{
	if (!bParam2)
	{
		*uParam0 = 0f;
	}
	*uParam0 = (*uParam0 + fParam1);
}

void func_1578(var uParam0, var uParam1)
{
	uVar0 = func_2010(uParam0);
	_0x7e300b5b86ab1d1a(uParam0, uVar0, 23, uParam1[0], &(uParam1->f_10[0]), &(uParam1->f_5[0]), uParam1[1], &(uParam1->f_10[1]), &(uParam1->f_5[1]), uParam1[2], &(uParam1->f_10[2]), &(uParam1->f_5[2]), uParam1[3], &(uParam1->f_10[3]), &(uParam1->f_5[3]));
}

int func_1579()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

Vector3 func_1580()
{
	return Global_265377->f_124517.f_136;
}

bool func_1581()
{
	return func_542(get_player_index(), 256);
}

int func_1582()
{
	return Global_265377->f_124517.f_71.f_16;
}

void func_1583()
{
	Var0 = { Global_265377->f_124517 };
	func_2011(&(Global_265377->f_124517));
	Var69.f_1 = 5;
	Var69.f_3.f_2 = -504335712;
	Var69.f_3.f_4 = 3;
	Var69.f_63.f_5 = -1;
	Global_265377->f_124517 = { Var69 };
	Global_265377->f_124517.f_3 = { Var0.f_3 };
	Global_265377->f_124517.f_28 = Var0.f_28;
	Global_265377->f_124517.f_63 = { Var0.f_63 };
}

void func_1584()
{
	Global_265377->f_124517.f_28 = 0;
}

bool func_1585(bool bParam0, int iParam1)
{
	iVar0 = network_player_id_to_int();
	if (func_2012((*Global_263042)[iVar0]->f_1.f_53))
	{
		return true;
	}
	uVar1 = func_2013((*Global_263042)[iVar0]->f_1.f_18, (*Global_263042)[iVar0]->f_1.f_17);
	iVar2 = count_player_bits(&uVar1);
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar5 = int_to_playerindex(iVar3);
		if (!network_is_player_active(iVar5))
		{
		}
		else if (!_0x72b2e00c9bac6789(&uVar1, iVar3))
		{
		}
		else if (func_542(iVar5, 1024))
		{
			iVar4++;
		}
		iVar3++;
	}
	iVar2 = (iVar2 - iVar4);
	if ((*Global_263042)[iVar0]->f_1.f_21.f_2 == -504335712 && func_1414(Global_524288->f_40400))
	{
		if (iParam1 > 0 && bParam0)
		{
			if ((iVar2 + iParam1) < (*Global_263042)[iVar0]->f_1.f_32)
			{
				func_2014(131072);
				func_78(1024);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	if ((*Global_263042)[iVar0]->f_1.f_32 > iVar2)
	{
		func_2014(131072);
		func_78(1024);
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_21.f_2 == -504335712 && func_1414(Global_524288->f_40400))
	{
		if (!(func_822(58) || func_822(66)) || (&Global_1048596 == 0 && !bParam0))
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (&Global_524288->f_35351[iVar3] > Global_262155->f_163.f_7[iVar3]->f_1)
				{
					func_2014(131072);
					func_78(1024);
					return false;
				}
				iVar3++;
			}
		}
		else if (!bParam0 && !func_822(66))
		{
			if (!func_2015(&Global_1048596))
			{
				func_2014(131072);
				func_78(1024);
				return false;
			}
		}
		else if (!func_2016(&Global_1048596, iVar2))
		{
			func_2014(131072);
			func_78(1024);
			return false;
		}
	}
	return true;
}

void func_1586(vector3 vParam0)
{
	Global_265377->f_124517.f_136 = { vParam0 };
	func_2014(256);
}

struct<2> func_1587(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_936();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_1588(int iParam0)
{
	if (!func_2017(iParam0))
	{
		if (_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
		{
			iVar0 = func_1853(4, iParam0);
			if (iVar0 != 0)
			{
				func_1854(iVar0, 0);
			}
		}
		return true;
	}
	iVar1 = func_1853(2, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar1))
	{
		iVar1 = func_1853(3, iParam0);
	}
	if (!func_2018((*Global_1835011)[iParam0]->f_32) && iVar1 == 0)
	{
		return true;
	}
	if ((_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3)) || !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (!func_2019((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = func_1854(iVar1, 0);
		}
		else
		{
			switch (func_2020((*Global_1835011)[iParam0]->f_32, 0))
			{
				case 0:
					break;
				case 2:
					if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
					{
						return true;
					}
					break;
			}
		}
		return false;
	}
	return true;
}

void func_1589(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_1590(int iParam0, bool bParam1)
{
	if (!func_2017(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 13:
			if (bParam1)
			{
				if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(682499315, 0, 0)))
				{
					_0x7c32191d9fb2bdea(_0x8e84119a23c16623(682499315, 0, 0));
				}
			}
			break;
		case 16:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-413671895, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-413671895, 0, 0));
			}
			break;
	}
}

void func_1591(int iParam0)
{
	if (!func_2021(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_2022(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_1592(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_1593(int iParam0)
{
	switch (func_2023(iParam0))
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1594(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	Global_1878407->f_7 = 0f;
	func_2024(iParam0);
}

void func_1595(struct<2> Param0, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_13(Param0))
	{
		return;
	}
	if (!func_939(Param0) && !func_938(Param0))
	{
		return;
	}
	if (bParam2)
	{
		*Global_1900869 = { Param0 };
		Global_1900871 = get_game_timer();
	}
	if (func_1347(Param0) == 4)
	{
		if (!func_1347(Param0) == 5 && !func_1347(Param0) == 6)
		{
			func_1357(Param0, 5);
			func_1599(Param0);
		}
		return;
	}
	if (func_1347(Param0) == 3)
	{
		func_218(1, -1706799532);
	}
	else if (func_1347(Param0) == 4)
	{
		func_218(0, -1706799532);
	}
	if (!func_1347(Param0) == 0)
	{
		if (_0x01f4d242765c6b24(func_38(Param0)))
		{
			iVar0 = 0;
			func_1596(Param0, iVar0, 0, 255, 0);
		}
	}
	if (func_1597(func_1199(0), Param0))
	{
		func_1358(1);
		func_1598(0);
		func_1362(1);
	}
	func_1357(Param0, 0);
	func_1599(Param0);
	func_1362(1);
	Global_1051252->f_45.f_1 = 1;
	iVar1 = func_1200(Param0);
	if (iVar1 != 2 && iVar1 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_1596(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_2025(func_1200(Param0));
	iVar1 = func_38(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_738() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_2026(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

bool func_1597(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

int func_1598(bool bParam0)
{
	if (!bParam0 && func_2027(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_1599(struct<2> Param0)
{
	return func_2028(func_1862(Param0));
}

int func_1600(int iParam0)
{
	switch (iParam0)
	{
		case 985101275:
			return 150;
		case 228889374:
			return 300;
		case 1067902278:
			return 300;
		default:
			break;
	}
	return -1;
}

int func_1601(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	return func_2029(iVar0);
}

int func_1602(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_1603(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (bParam5)
	{
		set_ped_combat_attributes(iParam0, 116, true);
	}
	bVar0 = !bParam5;
	if (!bVar0)
	{
		bVar0 = !_is_weapon_one_handed(iParam1);
	}
	Var1.f_7 = 752097756;
	Var1.f_8 = 1056964608;
	Var1.f_9 = 1065353216;
	Var1.f_4 = iParam1;
	Var1.f_5 = 0;
	Var1.f_12 = bVar0;
	Var1.f_7 = -902540058;
	Var1.f_14 = 1;
	Var1.f_11 = (!bParam2 && !bParam5);
	_give_weapon_to_ped(iParam0, &Var1, &uVar17);
	bVar23 = iParam3 <= false;
	iVar24 = get_ped_ammo_type_from_weapon(iParam0, iParam1);
	if (bVar23)
	{
		iParam3 = 10;
	}
	if (func_461(iParam1))
	{
		_add_ammo_to_ped_by_type(iParam0, iVar24, iParam3, 752097756);
	}
	if (iParam4 != 0 && _0xc570b881754df609(iParam1, iParam4))
	{
		_add_ammo_to_ped_by_type(iParam0, iParam4, iParam3, 752097756);
		_0xcc9c4393523833e2(iParam0, iParam1, iParam4);
	}
	if (func_461(iParam1))
	{
		set_ped_infinite_ammo(iParam0, bVar23, iParam1);
		if (func_84(80))
		{
			if (!bVar23)
			{
				set_ped_infinite_ammo(iParam0, false, 0);
			}
		}
	}
	if (!bParam2)
	{
		iVar25 = 0;
		if ((bParam5 && _is_weapon_one_handed(iParam1)) || _is_weapon_lantern(iParam1))
		{
			get_current_ped_weapon(iParam0, &iVar26, true, 0, false);
			if (_is_weapon_one_handed(iVar26))
			{
				iVar25 = 1;
			}
			else
			{
				iVar25 = 2;
			}
		}
		_0x12fb95fe3d579238(iParam0, &uVar17, 1, iVar25, 0, 0);
	}
	else if (func_450(iParam0, 0, 0, 0) != -1569615261)
	{
		task_swap_weapon(iParam0, 0, 0, 0, 0);
	}
	if ((bParam2 && bParam5) && _is_weapon_one_handed(iParam1))
	{
		_0x12fb95fe3d579238(iParam0, &uVar17, 1, 3, 0, 0);
	}
}

void func_1604(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	if (fParam5 < 1f)
	{
		fParam5 = 1f;
	}
	bVar0 = func_2030(0f, 0f, 0f, vParam2, 50f, 1);
	if (does_entity_exist(iParam6))
	{
		remove_ped_defensive_area(iParam1, false);
		_0x1854217c640b39ec(iParam1, iParam6, vParam2, fParam5, 0, 1);
		return;
	}
	if (is_ped_in_any_vehicle(iParam1, true))
	{
		iVar1 = get_vehicle_ped_is_in(iParam1, true);
		if (does_entity_exist(iVar1))
		{
			remove_ped_defensive_area(iParam1, false);
			_0x1854217c640b39ec(iParam1, iVar1, 0f, 0f, 0f, fParam5, 0, 1);
			return;
		}
	}
	if (is_ped_on_vehicle(iParam1, true))
	{
		iVar2 = func_2031(iParam1, 0);
		if (does_entity_exist(iVar2))
		{
			if (bVar0)
			{
				vVar3 = { vParam2 };
			}
			else
			{
				vVar3 = { get_offset_from_entity_given_world_coords(iVar2, vParam2) };
			}
			if (func_2030(get_entity_coords(iVar2, true, false), get_offset_from_entity_in_world_coords(iVar2, vVar3), 30f, 1))
			{
				remove_ped_defensive_area(iParam1, false);
				_0x1854217c640b39ec(iParam1, iVar2, vVar3, fParam5, 0, 1);
				return;
			}
		}
	}
	if (bParam7)
	{
		return;
	}
	if (bVar0)
	{
		return;
	}
	set_ped_sphere_defensive_area(iParam1, vParam2, fParam5, 0, 0, iParam0 == -1821507459);
}

int func_1605(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -687903391;
		case 1:
			return -753768974;
		case 2:
			return -1857128337;
		case 3:
			return 40051185;
		case 4:
			return -1250703948;
		case 5:
			return -1608983670;
		case 6:
			return 12239771;
		case 7:
			return -1670073338;
		case 8:
			return -787632658;
		case 9:
			return 1575766855;
		case 10:
			return -1413485146;
		case 11:
			return -667771326;
		case 12:
			return -921847361;
		case 13:
			return 1173361664;
		case 14:
			return 1026597428;
		case 15:
			return -2017692654;
		case 16:
			return 2055493265;
		case 17:
			return -1725067907;
		case 18:
			return -2056883078;
		case 19:
			return 517186037;
		case 20:
			return 365231505;
		case 21:
			return 577037782;
		case 22:
			return -957453492;
		case 23:
			return 2047104079;
		case 24:
			return -887696719;
		case 25:
			return -938698330;
		case 26:
			return -451565453;
		case 27:
			return -399143750;
		case 28:
			return 1836430378;
		case 29:
			return 1566631136;
		case 30:
			return -1422700276;
		case 31:
			return 1521641709;
		case 32:
			return -1795196902;
		case 33:
			return 0;
		case 34:
			return 35;
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

int func_1606(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_1154(iParam0 == 0, 100, iParam0);
	if (!func_8() && (!func_821() || func_822(11)))
	{
		fVar0 = (to_float(iParam1) / to_float(iParam2));
		fVar1 = (IntToFloat(iParam0) + ((0.5f * fVar0) * IntToFloat(iParam0)));
		iParam0 = func_944(round(fVar1), 1);
	}
	return (iParam0 * 80 / 100);
}

void func_1607(var uParam0, var uParam1, struct<8> Param2)
{
	if (*uParam0 != *uParam1)
	{
		*uParam0 = *uParam1;
		func_699(1);
	}
	if (!are_strings_equal(&(uParam0->f_1), &Param2) && !is_string_null_or_empty(&Param2))
	{
		uParam0->f_1 = { Param2 };
		func_699(1);
	}
}

void func_1608(var uParam0, float fParam1)
{
	if (*uParam0 != fParam1)
	{
		*uParam0 = fParam1;
		func_699(1);
	}
}

void func_1609(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 2;
	}
	else if (bParam3)
	{
		iVar0 = 1;
	}
	if ((*uParam0)[iParam1]->f_10 != iVar0)
	{
		(*uParam0)[iParam1]->f_10 = iVar0;
		func_699(1);
	}
}

void func_1610(var uParam0, var uParam1)
{
	func_1578(uParam0, uParam1);
}

struct<4> func_1611(int iParam0, bool bParam1)
{
	if (iParam0 != 0)
	{
		StringCopy(&cVar0, _0xb112b9262ec29c20(1852874750, iParam0), 32);
	}
	if (bParam1)
	{
	}
	return cVar0;
}

int func_1612(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return 1105014447;
}

int func_1613(int iParam0)
{
	func_2032(iParam0, &iVar0, &iVar1);
	if (!func_2033(iParam0, 65536) && !func_2033(iParam0, 32768))
	{
		if (func_2034(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar2]->f_2 == iParam0)
		{
			return Global_39.f_3534[iVar2]->f_1;
		}
		iVar2++;
	}
	return 0;
}

void func_1614(int iParam0, bool bParam1)
{
	func_2032(iParam0, &iVar0, &iVar1);
	if (!func_2035(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_2036(iVar0, iVar1);
}

void func_1615(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1151() - fParam1);
	func_2037(uParam0, 1);
	func_2038(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_1616(int iParam0)
{
	switch (iParam0)
	{
		case -1533983348:
		case -1458496107:
		case -1438502509:
		case -1321090275:
		case -1312722280:
		case -1308798499:
		case -1307589538:
		case -1277875962:
		case -992645810:
		case -713787803:
		case -638016860:
		case -614515457:
		case -301326588:
		case -156881965:
		case 307335450:
		case 354637832:
		case 833685806:
		case 1379907684:
		case 1609644258:
			return 1;
		case -2039501127:
		case -1329294210:
		case -950801774:
		case -843335391:
		case -802866321:
		case 206509498:
		case 756696646:
		case 1179535804:
		case 1315487827:
			return 0;
		case -939910718:
		case -152594716:
		case -85973785:
		case -58731503:
		case 312878349:
		case 321607379:
		case 786066588:
		case 1036683068:
		case 1129169015:
		case 1217805983:
		case 1380454690:
		case 1932263154:
		case 2001915594:
			return 2;
		case -1219452364:
		case -878696721:
		case -655468511:
		case 149540493:
		case 810310130:
		case 1413392437:
		case 1894655054:
			return 0;
		case -687714247:
		case 63218849:
		case 361976649:
		case 764304959:
		case 1130424855:
		case 1668754447:
		case 2058416949:
			return 1;
		case -1501015261:
		case 1776048844:
			return 2;
		case -1890923540:
		case -1698389833:
		case -1540158808:
		case 460855531:
		case 988196598:
		case 1885194679:
			return 0;
		case 479779912:
			return 2;
		case -1257079286:
		case -1221619492:
		case -821494676:
		case -615934178:
		case -580272278:
		case -464093109:
		case -350176926:
		case 300973492:
		case 607449742:
		case 866669490:
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_1617(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1329294210)
	{
		return true;
	}
	if (!func_1153(uParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (&uParam0->f_897.f_1[iVar0] != iParam1)
		{
		}
		else if ((uParam0->f_897.f_1[iVar0]->f_1 != iParam2 && uParam0->f_897.f_1[iVar0]->f_1 != -1) && iParam2 != -1)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1618(var uParam0, var uParam1)
{
	*uParam0->f_379[uParam0->f_379.f_226] = { *uParam1 };
	uParam0->f_379.f_226++;
	if (func_2039(uParam0, *uParam1, uParam1->f_1, (uParam0->f_379.f_226 - 1)))
	{
		return;
	}
}

void func_1619(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (uParam0->f_968 > -1)
	{
		return;
	}
	if (func_1616(iParam1) != 0)
	{
		return;
	}
	if (uParam0->f_379.f_226 >= 15)
	{
		return;
	}
	if (!func_1617(uParam0, iParam1, iParam3))
	{
		return;
	}
	Var1.f_1 = -1;
	Var1.f_7 = -1;
	Var1.f_4 = iParam2;
	Var1 = iParam1;
	Var1.f_1 = iParam3;
	Var1.f_8 = sParam4;
	Var1.f_14 = iParam6;
	Var1.f_7 = uVar0;
	Var1.f_2 = iParam7;
	Var1.f_3 = iParam8;
	Var1.f_5 = to_float(iParam5);
	func_1618(uParam0, &Var1);
}

void func_1620(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
}

void func_1621(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

bool func_1622(bool bParam0)
{
	if (iVar7488 <= Global_2097152->f_6019)
	{
		return false;
	}
	if (!bParam0)
	{
		if (iVar7488 >= (Local_5197.f_47 + Local_5197.f_65))
		{
			return true;
		}
	}
	else if (iVar7488 > ((Local_5197.f_47 + Local_5197.f_65) - Local_5197.f_167))
	{
		return true;
	}
	return false;
}

void func_1623(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!uParam0->f_2)
	{
		if (_0xd9130842d7226045(func_432(*uParam0), 0))
		{
			uParam0->f_2 = 1;
		}
		return;
	}
	if (uParam0->f_3)
	{
		if (!uParam0->f_1 && _0x84848e1c0fc67dbb(uParam0->f_4))
		{
			uParam0->f_1 = 1;
		}
		if (uParam0->f_6)
		{
			_0x503703ec1781b7d6(uParam0->f_4, "isSuddenDeath", 1f);
		}
		else
		{
			_0x503703ec1781b7d6(uParam0->f_4, "isSuddenDeath", 0f);
		}
		return;
	}
	if (uParam0->f_5 <= 0)
	{
		return;
	}
	if (uParam0->f_5 > func_2040(*uParam0))
	{
		return;
	}
	fVar0 = (to_float(uParam0->f_5 + 500) / 1000f);
	uParam0->f_4 = get_sound_id();
	_0xce5d0ffe83939af1(uParam0->f_4, func_2041(*uParam0), func_432(*uParam0), 0);
	_0x503703ec1781b7d6(uParam0->f_4, "Time", fVar0);
	uParam0->f_3 = 1;
}

bool func_1624(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

bool func_1625()
{
	return func_1624(4);
}

void func_1626(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam4)
	{
		if (func_214())
		{
			func_2042(uParam0);
		}
		else
		{
			func_2043(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (is_bit_set(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Position", "");
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		_databinding_add_data_string(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = _databinding_add_data_container(*uParam0, &cVar1);
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "Position", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCross", 0);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "CrossColor", 859817522);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCrewTag", 1);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "CrewTag", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowRank", 1);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Rank", "0");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "Spectating", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat0", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat1", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat2", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat3", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", func_2044());
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "isHighlighted", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", 0);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "HeadsetIconColor", 109029619);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", 1);
		_databinding_add_data_bool(*uParam0, "info_visible_06", 0);
		_databinding_add_data_bool(*uParam0, "info_visible_07", 0);
		_databinding_add_data_bool(*uParam0, "info_visible_08", 0);
		_databinding_add_data_string(*uParam0, "info_value_06", "");
		_databinding_add_data_string(*uParam0, "info_value_07", "");
		_databinding_add_data_string(*uParam0, "info_value_08", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowOverlay", 0);
		func_1630(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_214())
	{
		func_2045(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1628(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1627(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	iVar13 = 0;
	iVar14 = 32;
	bVar16 = is_bit_set(uParam0->f_159, 6);
	if (Global_1940144->f_111)
	{
		iVar3 = _databinding_get_array_count(uParam0->f_142);
		if (is_bit_set(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_2046(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_2047(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_2048(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_2049(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1629(&((*uParam1)[iVar2]->f_14)) && iVar0 < 5)
					{
						func_2048(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (_databinding_get_array_count(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				_0x6318fb3be37e11b3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = _databinding_get_array_count(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_2046(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_2050(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_2048(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2] && func_1629(&((*uParam1)[iVar2]->f_14)))
						{
							func_2048(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1629(&((*uParam1)[iVar2]->f_14)))
			{
				func_2048(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_2048(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (_databinding_get_array_count(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			_0x6318fb3be37e11b3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

void func_1628(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_2051(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1168(uParam0, uParam1);
		iVar7 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1629(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1631(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_2052(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == (*uParam1)[iVar0]->f_14;
				iVar9 = func_2053(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_2054(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_2055());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_2056((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_464())
					{
						if (func_2057((*uParam1)[iVar0]->f_14))
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", true);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
							_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "Spectating", false);
						_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_2058((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
					if (func_2059(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else if (func_2060(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
				}
				if (is_bit_set(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar2 = round(func_2061((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = round(func_2062((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_2063(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((*uParam1)[iVar0]->f_1 == 8.94E+07f)
						{
							clear_bit(&iVar11, 12);
						}
						sVar5 = func_2064(iVar2, iVar11, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
				{
					if (!is_bit_set(uParam0->f_159, 18))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(func_2062((*uParam1)[iVar0], uParam0->f_159), func_2065(uParam0, 1)));
					}
				}
				if (is_bit_set(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = round(func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = round(func_2061((*uParam1)[iVar0], uParam0->f_159));
					}
					if (func_2063(iVar3))
					{
						sVar6 = func_1929(iVar3, 1, 2, 0, 0, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (is_bit_set(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_2061((*uParam1)[iVar0], uParam0->f_159);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar13, _0x2b6846401d68e563(fVar14, 0));
				}
				else if ((!is_bit_set(uParam0->f_159, 3) && !func_2060(uParam0->f_159)) && !func_2067(uParam0->f_159))
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(func_2061((*uParam1)[iVar0], uParam0->f_159), func_2065(uParam0, 2)));
				}
				if (!is_bit_set(uParam0->f_159, 3))
				{
					if (is_bit_set(uParam0->f_160, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (is_bit_set(uParam0->f_159, 9))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_2068(func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160)));
					}
					else if (is_bit_set(uParam0->f_159, 10))
					{
						fVar4 = func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_1929(floor(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _create_var_string(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (is_bit_set(uParam0->f_159, 21))
					{
						iVar2 = round(func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_2064(iVar2, uParam0->f_159, 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(func_2066((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160), func_2065(uParam0, 3)));
					}
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

bool func_1629(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !is_string_null_or_empty(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_1630(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_2069() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_2070(uParam0, *uParam1)}, 8);
	if (!is_string_null_or_empty(&Var16) && !are_strings_equal(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		_databinding_write_data_string(uParam0->f_45[iParam2][0], &cVar0);
		_databinding_write_data_string(uParam0->f_45[iParam2][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2])[0] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2])[1] = _databinding_add_data_string(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

void func_1631(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar1 = player_id();
	bVar2 = iVar1 == (*uParam1)[iParam2]->f_14;
	iVar0 = func_2053(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (network_is_player_active((*uParam1)[iParam2]->f_14) && _0x919af2d93e9aa89d((*uParam1)[iParam2]->f_14))
	{
		bVar3 = _0xef6f2a35faaf2ed7((*uParam1)[iParam2]->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

bool func_1632(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1633(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1634(bool bParam0)
{
	if (bParam0)
	{
		return 1022890889;
	}
	return -987928333;
}

int func_1635()
{
	return 205122612;
}

bool func_1636()
{
	if (Global_1940144->f_20 && Global_1940144->f_5 == 1)
	{
		return true;
	}
	return false;
}

int func_1637(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_1638(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1639(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_1640(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_1641(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

int func_1642(int iParam0)
{
	switch (iParam0)
	{
		case 456605338:
			return 1133052843;
		case -1838730762:
			return -202313910;
		case 2091842205:
			return 756032181;
		case 1083726117:
			return 1391354145;
		case 1174457346:
			return -276645137;
		case 593332131:
			return 1059823321;
		case 1443986063:
			return 1059823321;
		case 1936484400:
			return 774310187;
		case -2146584:
			return 138141760;
		case 1117913623:
		case 1928276294:
			return 418594230;
		case -1220700382:
		case -699819638:
		case 1375802800:
			return -867319305;
		case 344700063:
		case 1485013169:
			return -1700692449;
		case -438934027:
		case 1835758938:
			return -1148732570;
		case 244605310:
		case 283413025:
		case 615217735:
			return 2042296464;
		case -818658900:
			return -98377599;
		default:
			break;
	}
	return -1;
}

void func_1643(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
	func_2072(uParam0, 19, &Var0);
	func_2072(uParam0, 20, &Var0);
	func_2072(uParam0, 21, &Var0);
	func_2072(uParam0, 22, &Var0);
	func_2072(uParam0, 23, &Var0);
	func_2072(uParam0, 24, &Var0);
	func_2072(uParam0, 27, &Var0);
	func_2072(uParam0, 28, &Var0);
	func_2072(uParam0, 29, &Var0);
	func_2072(uParam0, 30, &Var0);
	func_2072(uParam0, 31, &Var0);
	func_2072(uParam0, 32, &Var0);
	_databinding_write_data_bool(&(uParam0->f_12[3]), false);
	_databinding_write_data_bool(&(uParam0->f_12[2]), false);
	_databinding_write_data_bool(&(uParam0->f_12[16]), false);
	_databinding_write_data_string(&(uParam0->f_12[0]), "00:00");
	_databinding_write_data_string(&(uParam0->f_12[4]), "0");
	_databinding_write_data_string(&(uParam0->f_12[7]), "0");
}

void func_1644(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), "");
		_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), "");
		iVar0++;
	}
}

void func_1645(var uParam0)
{
}

void func_1646(var uParam0)
{
}

void func_1647(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_A", 128);
	StringCopy(&(Var0.f_31), "rpg_textures", 64);
	StringCopy(&(Var0.f_39), "rpg_agitation", 64);
	func_2072(uParam0, 17, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_B", 128);
	func_2072(uParam0, 18, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_C", 128);
	func_2072(uParam0, 19, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_D", 128);
	func_2072(uParam0, 20, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_E", 128);
	func_2072(uParam0, 21, &Var0);
}

void func_1648(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
}

void func_1649(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
	func_2072(uParam0, 19, &Var0);
	func_2072(uParam0, 20, &Var0);
	func_2072(uParam0, 21, &Var0);
	func_2072(uParam0, 22, &Var0);
}

void func_1650(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	func_2072(uParam0, 17, &Var0);
}

void func_1651(var uParam0)
{
}

void func_1652(var uParam0)
{
	_databinding_write_data_string(&(uParam0->f_12[0]), "00:00.00");
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	Var0.f_2 = -2028925062;
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PLAYLIST_RACES", 128);
	Var0.f_30 = 1475463663;
	func_2072(uParam0, 17, &Var0);
}

void func_1653(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	Var0.f_2 = -2028925062;
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PLAYLIST_RACES", 128);
	Var0.f_30 = 1475463663;
	func_2072(uParam0, 19, &Var0);
}

void func_1654(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
}

void func_1655(var uParam0)
{
}

void func_1656(var uParam0)
{
}

void func_1657(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE", 128);
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
	func_2072(uParam0, 19, &Var0);
	func_2072(uParam0, 20, &Var0);
	func_2072(uParam0, 21, &Var0);
	func_2072(uParam0, 22, &Var0);
	func_2072(uParam0, 23, &Var0);
	func_2072(uParam0, 24, &Var0);
}

void func_1658(var uParam0)
{
}

void func_1659(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_MARKED_FOR_DEATH", 128);
	func_2072(uParam0, 17, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_HUNTER", 128);
	func_2072(uParam0, 18, &Var0);
}

void func_1660(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	iVar67 = func_2073(uParam0->f_897.f_63, 1);
	switch (iVar67)
	{
		case 1762860161:
			StringCopy(&(Var0.f_6), "blips_mp", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_VIP", 128);
			break;
		case -1304077851:
			StringCopy(&(Var0.f_6), "blips", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_WAGON", 128);
			break;
		case 1568280029:
			StringCopy(&(Var0.f_6), "blips", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_HORSE", 128);
			break;
	}
	func_2072(uParam0, 17, &Var0);
	func_2072(uParam0, 18, &Var0);
	func_2072(uParam0, 19, &Var0);
	func_2072(uParam0, 20, &Var0);
	func_2072(uParam0, 21, &Var0);
	func_2072(uParam0, 22, &Var0);
	func_2072(uParam0, 23, &Var0);
	func_2072(uParam0, 24, &Var0);
}

void func_1661(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_MARKED_FOR_DEATH", 128);
	func_2072(uParam0, 17, &Var0);
}

void func_1662(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2071(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PREDATOR_HUNT_MASK", 128);
	func_2072(uParam0, 19, &Var0);
	func_2072(uParam0, 20, &Var0);
	func_2072(uParam0, 21, &Var0);
	func_2072(uParam0, 22, &Var0);
	func_2072(uParam0, 23, &Var0);
	func_2072(uParam0, 24, &Var0);
	func_2072(uParam0, 25, &Var0);
	func_2072(uParam0, 26, &Var0);
}

void func_1663(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&uParam0->f_379.f_489[iVar0] == -1)
		{
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), "");
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), "");
		}
		else
		{
			iVar1 = &uParam0->f_379.f_489[iVar0];
			iVar2 = uParam0->f_379[iVar1]->f_4;
			bVar3 = uParam0->f_379[iVar1]->f_14 & 12 > 0;
			iVar4 = floor(uParam0->f_379[iVar1]->f_5);
			bVar5 = uParam0->f_379[iVar1]->f_14 & 64 > 0;
			bVar6 = uParam0->f_379[iVar1]->f_14 & 2 > 0;
			StringCopy(&cVar7, uParam0->f_379[iVar1]->f_8, 32);
			Var11 = { func_2074(iVar2, bVar5, bVar3, iVar4) };
			if (!bVar6)
			{
				StringCopy(&cVar7, _create_var_string(2, &cVar7), 32);
			}
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), &cVar7);
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), &Var11);
		}
		iVar0++;
	}
}

void func_1664(var uParam0)
{
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar9 = &uParam0->f_379.f_438[iVar8];
		if (iVar9 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar9]->f_4;
			bVar1 = uParam0->f_379[iVar9]->f_14 & 12 > 0;
			iVar5 = floor(uParam0->f_379[iVar9]->f_5);
			bVar2 = uParam0->f_379[iVar9]->f_14 & 64 > 0;
			Var6 = { func_2074(iVar0, bVar2, bVar1, iVar5) };
			bVar3 = uParam0->f_379[iVar9]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar9]->f_14 & 512 > 0;
			switch (iVar8)
			{
				case 0:
					if (!bVar4)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar9]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar9]->f_2);
					func_2076(uParam0, 8);
					break;
			}
		}
		iVar8++;
	}
}

void func_1665(var uParam0)
{
	iVar1 = uParam0->f_897.f_63;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar5 = &uParam0->f_379.f_438[iVar4];
		if (iVar5 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[16]), true);
			bVar2 = uParam0->f_379[iVar5]->f_14 & 256 > 0;
			bVar3 = uParam0->f_379[iVar5]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar5]->f_4;
			switch (iVar4)
			{
				case 0:
					if (!bVar3)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar2, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_int(&(uParam0->f_12[12]), func_2077(iVar0, iVar1));
					_databinding_write_data_hash_string(&(uParam0->f_12[13]), uParam0->f_379[iVar5]->f_2);
					break;
				case 2:
					_databinding_write_data_int(&(uParam0->f_12[14]), func_2077(iVar0, iVar1));
					_databinding_write_data_hash_string(&(uParam0->f_12[15]), uParam0->f_379[iVar5]->f_2);
					break;
			}
		}
		iVar4++;
	}
}

void func_1666(var uParam0)
{
	iVar2 = uParam0->f_897.f_63;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		iVar10 = &uParam0->f_379.f_438[iVar9];
		if (iVar10 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[16]), true);
			bVar3 = uParam0->f_379[iVar10]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar10]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar10]->f_4;
			bVar6 = uParam0->f_379[iVar10]->f_14 & 12 > 0;
			iVar1 = floor(uParam0->f_379[iVar10]->f_5);
			bVar5 = uParam0->f_379[iVar10]->f_14 & 64 > 0;
			bVar3 = uParam0->f_379[iVar10]->f_14 & 256 > 0;
			Var7 = { func_2074(iVar0, bVar5, bVar6, iVar1) };
			switch (iVar9)
			{
				case 0:
					if (!bVar4)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var7);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar10]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var7);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar10]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					_databinding_write_data_int(&(uParam0->f_12[12]), func_2077(iVar0, iVar2));
					_databinding_write_data_hash_string(&(uParam0->f_12[13]), uParam0->f_379[iVar10]->f_2);
					break;
				case 4:
					_databinding_write_data_int(&(uParam0->f_12[14]), func_2077(iVar0, iVar2));
					_databinding_write_data_hash_string(&(uParam0->f_12[15]), uParam0->f_379[iVar10]->f_2);
					break;
			}
		}
		iVar9++;
	}
}

void func_1667(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar76 != 666)
			{
				iVar0 = uParam0->f_379[iVar76]->f_4;
				bVar1 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
				iVar7 = floor(uParam0->f_379[iVar76]->f_5);
				bVar2 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
				Var5 = { func_2074(iVar0, bVar2, bVar1, iVar7) };
				bVar3 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
				bVar4 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			}
			switch (iVar75)
			{
				case 0:
					if (!bVar4)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var5);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var5);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					iVar77 = 0;
					while (iVar77 < 6)
					{
						if (iVar77 < &uParam0->f_379.f_228[3])
						{
							func_2078(uParam0, (*uParam0->f_379.f_233[3])[iVar77], &Var8);
							func_2072(uParam0, (17 + iVar77), &Var8);
						}
						else
						{
							func_2071(&Var8);
							func_2072(uParam0, (17 + iVar77), &Var8);
						}
						iVar77++;
					}
					break;
			}
		}
		iVar75++;
	}
}

void func_1668(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 5)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar76]->f_4;
			bVar2 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
			iVar1 = floor(uParam0->f_379[iVar76]->f_5);
			bVar3 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
			bVar4 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
			bVar5 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			Var6 = { func_2074(iVar0, bVar3, bVar2, iVar1) };
			switch (iVar75)
			{
				case 0:
					if (!bVar5)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar4, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					func_2078(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2072(uParam0, 17, &Var8);
					break;
				case 4:
					func_2078(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2072(uParam0, 18, &Var8);
					break;
			}
		}
		iVar75++;
	}
}

void func_1669(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 3)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar71 != 666)
			{
				iVar0 = uParam0->f_379[iVar71]->f_4;
				bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
				bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			}
			iVar72 = 0;
			switch (iVar70)
			{
				case 0:
					if (!bVar2)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar1, 3, 0, 0, 1));
					break;
				case 1:
					iVar72 = 0;
					while (iVar72 < 4)
					{
						if (iVar72 < &uParam0->f_379.f_228[1])
						{
							if (iVar72 == 0)
							{
								iVar73 = 17;
							}
							else
							{
								iVar73 = (27 + (iVar72 - 1));
							}
							func_2078(uParam0, (*uParam0->f_379.f_233[1])[iVar72], &Var3);
							func_2072(uParam0, iVar73, &Var3);
						}
						else
						{
							func_2071(&Var3);
							func_2072(uParam0, (27 + (iVar72 - 1)), &Var3);
						}
						iVar72++;
					}
					break;
				case 2:
					iVar72 = 0;
					while (iVar72 < 4)
					{
						if (iVar72 < &uParam0->f_379.f_228[2])
						{
							if (iVar72 == 0)
							{
								iVar74 = 18;
							}
							else
							{
								iVar74 = (30 + (iVar72 - 1));
							}
							func_2078(uParam0, (*uParam0->f_379.f_233[2])[iVar72], &Var3);
							func_2072(uParam0, iVar74, &Var3);
						}
						else
						{
							func_2071(&Var3);
							func_2072(uParam0, (30 + (iVar72 - 1)), &Var3);
						}
						iVar72++;
					}
					break;
			}
		}
		iVar70++;
	}
}

void func_1670(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar76 != 666)
			{
				bVar4 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
				bVar3 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
				bVar2 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
				bVar5 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
				iVar0 = uParam0->f_379[iVar76]->f_4;
				iVar1 = floor(uParam0->f_379[iVar76]->f_5);
				Var6 = { func_2074(iVar0, bVar5, bVar4, iVar1) };
			}
			switch (iVar75)
			{
				case 0:
					if (!bVar3)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar2, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					iVar77 = 0;
					while (iVar77 < 10)
					{
						if (iVar77 < &uParam0->f_379.f_228[3])
						{
							func_2078(uParam0, (*uParam0->f_379.f_233[3])[iVar77], &Var8);
							Var8.f_1 = 0;
							func_2072(uParam0, (17 + iVar77), &Var8);
						}
						else
						{
							func_2071(&Var8);
							func_2072(uParam0, (17 + iVar77), &Var8);
						}
						iVar77++;
					}
					break;
			}
		}
		iVar75++;
	}
}

void func_1671(var uParam0)
{
	Var2.f_2 = 109029619;
	Var2.f_5 = -1082130432;
	Var2.f_30 = 109029619;
	Var2.f_47 = 109029619;
	iVar69 = 0;
	while (iVar69 < 3)
	{
		iVar70 = &uParam0->f_379.f_438[iVar69];
		if (iVar70 < 0)
		{
			if (iVar69 == 1)
			{
				func_2071(&Var2);
				func_2072(uParam0, 17, &Var2);
			}
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			bVar0 = uParam0->f_379[iVar70]->f_14 & 256 > 0;
			bVar1 = uParam0->f_379[iVar70]->f_14 & 512 > 0;
			switch (iVar69)
			{
				case 0:
					if (!bVar1)
					{
						func_2075(uParam0, uParam0->f_379[iVar70]->f_4);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(uParam0->f_379[iVar70]->f_4, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					func_2078(uParam0, uParam0->f_379.f_438[iVar69], &Var2);
					func_2072(uParam0, 17, &Var2);
					break;
			}
		}
		iVar69++;
	}
}

void func_1672(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
			if (iVar75 == 3)
			{
				func_2071(&Var8);
				func_2072(uParam0, 17, &Var8);
			}
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar76]->f_4;
			bVar1 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
			iVar5 = floor(uParam0->f_379[iVar76]->f_5);
			bVar2 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
			Var6 = { func_2074(iVar0, bVar2, bVar1, iVar5) };
			bVar3 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			switch (iVar75)
			{
				case 0:
					if (!bVar4)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					func_2078(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2072(uParam0, 17, &Var8);
					break;
			}
		}
		iVar75++;
	}
}

void func_1673(var uParam0)
{
	Var6.f_2 = 109029619;
	Var6.f_5 = -1082130432;
	Var6.f_30 = 109029619;
	Var6.f_47 = 109029619;
	iVar73 = 0;
	while (iVar73 < 4)
	{
		iVar74 = &uParam0->f_379.f_438[iVar73];
		if (iVar74 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar74]->f_4;
			bVar1 = uParam0->f_379[iVar74]->f_14 & 12 > 0;
			bVar2 = uParam0->f_379[iVar74]->f_14 & 64 > 0;
			iVar3 = floor(uParam0->f_379[iVar74]->f_5);
			Var4 = { func_2074(iVar0, bVar2, bVar1, iVar3) };
			switch (iVar73)
			{
				case 0:
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, 1, 2, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var4);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar74]->f_2);
					func_2076(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var4);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar74]->f_2);
					func_2076(uParam0, 8);
					break;
				case 3:
					func_2078(uParam0, uParam0->f_379.f_438[iVar73], &Var6);
					func_2072(uParam0, 17, &Var6);
					break;
			}
		}
		iVar73++;
	}
}

void func_1674(var uParam0)
{
	iVar3 = 0;
	while (iVar3 < 1)
	{
		iVar4 = &uParam0->f_379.f_438[iVar3];
		if (iVar4 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar4]->f_4;
			bVar1 = uParam0->f_379[iVar4]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar4]->f_14 & 512 > 0;
			switch (iVar3)
			{
				case 0:
					if (!bVar2)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar1, 3, 0, 0, 1));
					break;
			}
		}
		iVar3++;
	}
}

void func_1675(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 5)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar71]->f_4;
			bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			switch (iVar70)
			{
				case 0:
					if (!bVar2)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar1, 3, 0, 0, 1));
					break;
				case 1:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 17, &Var3);
					break;
				case 2:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 18, &Var3);
					break;
				case 3:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 19, &Var3);
					break;
				case 4:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 20, &Var3);
					break;
			}
		}
		iVar70++;
	}
}

void func_1676(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 4)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar71]->f_4;
			switch (iVar70)
			{
				case 0:
					_databinding_write_data_bool(&(uParam0->f_12[2]), true);
					if (!bVar2)
					{
						func_2075(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar0, bVar1, 2, 0, 0, 1));
					break;
				case 1:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 17, &Var3);
					break;
				case 2:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 18, &Var3);
					break;
				case 3:
					func_2078(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2072(uParam0, 19, &Var3);
					break;
			}
		}
		iVar70++;
	}
}

void func_1677(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 1)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				iVar69 = 0;
				while (iVar69 < 4)
				{
					if (iVar69 < &uParam0->f_379.f_228[0])
					{
						func_2078(uParam0, (*uParam0->f_379.f_233[0])[iVar69], &Var0);
						func_2072(uParam0, (17 + iVar69), &Var0);
					}
					else
					{
						func_2071(&Var0);
						func_2072(uParam0, (17 + iVar69), &Var0);
					}
					iVar69++;
				}
				break;
		}
		iVar67++;
	}
}

void func_1678(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 2)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				func_2078(uParam0, uParam0->f_379.f_438[iVar67], &Var0);
				func_2072(uParam0, 17, &Var0);
				break;
			case 1:
				func_2078(uParam0, uParam0->f_379.f_438[iVar67], &Var0);
				func_2072(uParam0, 18, &Var0);
				break;
		}
		iVar67++;
	}
}

void func_1679(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar71 = 0;
	while (iVar71 < 2)
	{
		iVar72 = &uParam0->f_379.f_438[iVar71];
		if (iVar72 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar72 != 666)
			{
				iVar2 = uParam0->f_379[iVar72]->f_4;
				bVar0 = uParam0->f_379[iVar72]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar72]->f_14 & 512 > 0;
			}
			switch (iVar71)
			{
				case 0:
					if (!bVar1)
					{
						func_2075(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					iVar73 = 0;
					while (iVar73 < 10)
					{
						if (func_2079(&(uParam0->f_379.f_228[1]), iVar73))
						{
							func_2078(uParam0, (*uParam0->f_379.f_233[1])[iVar70], &Var3);
							func_2072(uParam0, (17 + iVar73), &Var3);
							iVar70++;
						}
						else
						{
							func_2071(&Var3);
							func_2072(uParam0, (17 + iVar73), &Var3);
						}
						iVar73++;
					}
					break;
			}
		}
		iVar71++;
	}
}

void func_1680(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 1)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				iVar69 = 0;
				while (iVar69 < 8)
				{
					if (iVar69 < &uParam0->f_379.f_228[0])
					{
						func_2078(uParam0, (*uParam0->f_379.f_233[0])[iVar69], &Var0);
						func_2072(uParam0, (17 + iVar69), &Var0);
					}
					else
					{
						func_2071(&Var0);
						func_2072(uParam0, (17 + iVar69), &Var0);
					}
					iVar69++;
				}
				break;
		}
		iVar67++;
	}
}

void func_1681(var uParam0)
{
	Var4.f_2 = 109029619;
	Var4.f_5 = -1082130432;
	Var4.f_30 = 109029619;
	Var4.f_47 = 109029619;
	iVar3 = 0;
	while (iVar3 < 2)
	{
		iVar72 = &uParam0->f_379.f_438[iVar3];
		if (iVar72 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar72 != 666)
			{
				iVar2 = uParam0->f_379[iVar72]->f_4;
				bVar0 = uParam0->f_379[iVar72]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar72]->f_14 & 512 > 0;
			}
			switch (iVar3)
			{
				case 0:
					if (!bVar1)
					{
						func_2075(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					iVar73 = 0;
					while (iVar73 < 10)
					{
						if (func_2079(&(uParam0->f_379.f_228[1]), iVar73))
						{
							func_2078(uParam0, (*uParam0->f_379.f_233[1])[iVar71], &Var4);
							func_2072(uParam0, (17 + iVar73), &Var4);
							iVar71++;
						}
						else
						{
							func_2071(&Var4);
							func_2072(uParam0, (17 + iVar73), &Var4);
						}
						iVar73++;
					}
					break;
			}
		}
		iVar3++;
	}
}

void func_1682(var uParam0)
{
	Var4.f_2 = 109029619;
	Var4.f_5 = -1082130432;
	Var4.f_30 = 109029619;
	Var4.f_47 = 109029619;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar71 = &uParam0->f_379.f_438[iVar3];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar71 != 666)
			{
				iVar2 = uParam0->f_379[iVar71]->f_4;
				bVar0 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			}
			switch (iVar3)
			{
				case 0:
					if (!bVar1)
					{
						func_2075(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1929(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					func_2078(uParam0, uParam0->f_379.f_438[iVar3], &Var4);
					func_2072(uParam0, 17, &Var4);
					break;
				case 2:
					func_2078(uParam0, uParam0->f_379.f_438[iVar3], &Var4);
					func_2072(uParam0, 18, &Var4);
					break;
				case 3:
					iVar72 = 0;
					while (iVar72 < 10)
					{
						if (iVar72 < &uParam0->f_379.f_228[3])
						{
							func_2078(uParam0, (*uParam0->f_379.f_233[3])[iVar72], &Var4);
							Var4.f_1 = 0;
							func_2072(uParam0, (19 + iVar72), &Var4);
						}
						else
						{
							func_2071(&Var4);
							func_2072(uParam0, (19 + iVar72), &Var4);
						}
						iVar72++;
					}
					break;
			}
		}
		iVar3++;
	}
}

void func_1683(var uParam0)
{
	if (uParam0->f_880 > -1)
	{
		if (!_0x84848e1c0fc67dbb(uParam0->f_880))
		{
			_0x3210bcb36af7621b(uParam0->f_880);
		}
		release_sound_id(uParam0->f_880);
		uParam0->f_880 = -1;
	}
}

void func_1684(var uParam0, int iParam1)
{
	if (uParam0->f_882 == iParam1)
	{
		return;
	}
	uParam0->f_882 = iParam1;
}

void func_1685(int iParam0)
{
	if (!func_353(&Global_1903131, iParam0))
	{
		func_366(Global_1903131, iParam0);
	}
}

void func_1686()
{
	play_sound_frontend("OOB_start", "RDRO_Out_Of_Bounds_Sounds", true, 0);
}

void func_1687()
{
	play_sound_frontend("OOB_return", "RDRO_Out_Of_Bounds_Sounds", true, 0);
}

int func_1688()
{
	bVar0 = func_2080();
	if (!bVar0)
	{
		fVar1 = (1f / to_float(Global_3145858->f_240));
	}
	fVar2 = get_random_float_in_range(0f, 1f);
	fVar3 = 0f;
	iVar4 = 0;
	while (iVar4 <= (Global_3145858->f_240 - 1))
	{
		if (bVar0)
		{
			fVar1 = Global_3145858->f_241[iVar4]->f_4;
		}
		if (fVar2 > (fVar3 + fVar1))
		{
			fVar3 = (fVar3 + fVar1);
		}
		else
		{
			return iVar4;
		}
		iVar4++;
	}
	return 0;
}

int func_1689(int iParam0, int iParam1)
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

int func_1690(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_2081())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_1691(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_2081())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

bool func_1692(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1693(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_1198(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1694(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_1694(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1695()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_13(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_1696(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_1697(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1698(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1699(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_1198(iParam0);
		return false;
	}
	if (func_1698(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1937(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

void func_1700(struct<4> Param0)
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
		case 23:
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_2082(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_2083(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_11(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_2082(Param0))
			{
				return;
			}
			func_2083(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_11(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_2082(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_2083(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_11(8);
			break;
			break;
	}
}

void func_1701(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1784(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1784(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1784(iParam0, 1)])->f_11 && iParam1));
}

bool func_1702(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_1703(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

int func_1704(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1952637->f_2843.f_2 = 0;
		Global_1952637->f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1952637->f_2843.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637->f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_2084(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_2085(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_2086(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_1705(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_2087(iVar0, 1);
		if (!func_2088(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_2089(iVar0, 0);
				func_2090(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1701(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1706(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_1788(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_1748(iVar0, -166674229))
	{
		return 0;
	}
	return func_2091(iParam0);
}

int func_1707(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_2087(iVar0, 1);
		if (func_2088(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_2092(iVar0) == -1)
			{
				func_2089(iVar0, 0);
				func_2090(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1785(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_1708(int iParam0)
{
	func_1785(iParam0, 8, 6);
}

int func_1709(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_2093(&(Global_1952637->f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_2094(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_2095(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_2096(uParam3, iParam1);
	bVar2 = func_2097(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_2098(uParam2, uParam3, iParam1);
		}
		else
		{
			func_2099(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_2100(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return 0;
		}
		func_2101(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_2102(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_2100(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return 1;
}

void func_1710()
{
	Global_1952637->f_1057 = 0;
}

void func_1711(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1712(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2103(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 2, -1);
	func_2104(&Var0, iParam0, 0);
}

void func_1713(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2106(func_2105(iParam0, 1), &Var0, 0, -1);
	func_2107(Var0, iParam0, 0);
}

void func_1714(bool bParam0)
{
	if (bParam0)
	{
		if (func_1192(1))
		{
			func_1193(1);
		}
	}
	else if (!func_1192(1))
	{
		func_1194(1);
	}
}

int func_1715(int iParam0, float fParam1, int iParam2)
{
	if (!func_2108(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1317(2);
	}
	func_2109(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

bool func_1716()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_1717(int iParam0)
{
	iVar0 = 100;
	switch (func_1790())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	_0x7ff72de061df55e2(iParam0, 0, 1f);
	set_entity_max_health(iParam0, iVar0);
}

float func_1718()
{
	return Global_1956200->f_1561.f_3;
}

void func_1719(float fParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - _0xdf66a37936d5f3d9(iVar0));
	func_1765(fVar2, 0, 1);
}

bool func_1720(int iParam0)
{
	return func_874(iParam0);
}

int func_1721(int iParam0)
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

float func_1722(var uParam0, int iParam1)
{
	iVar1 = func_2110(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1219(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1219(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return to_float(100);
		case 3:
			return func_2111(uParam0, iParam1);
	}
	return -1f;
}

void func_1723(int iParam0, float fParam1)
{
	func_2112(iParam0, fParam1);
	func_1766(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1724()
{
	func_2113();
	func_2114();
	func_2115();
	func_2116();
}

void func_1725()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

bool func_1726(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_1727(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1728(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1729(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1730(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1731(int iParam0)
{
	iVar0 = func_1240(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

int func_1732(int iParam0)
{
	if (func_1726(iParam0))
	{
		return (func_1241(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1733(int iParam0)
{
	iVar0 = func_1247(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_1734(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1240(iParam1, 1);
	iVar1 = func_1247(iParam0, 1);
	iVar2 = func_1243(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_2117(iVar3, 1);
		if (!func_2118(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_2119(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2120(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2121(iVar6))
		{
		}
		else
		{
			iVar8 = func_2122(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_2123(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1735(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1736(int iParam0, int iParam1)
{
	if (!func_1733(iParam0))
	{
		return false;
	}
	if (!func_2124(iParam1))
	{
		return false;
	}
	iVar0 = func_2125(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1737(int iParam0)
{
	iVar0 = func_2126(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1738(vector3 vParam0)
{
	if (!func_1733(vParam0.x))
	{
		return false;
	}
	if (!func_815(vParam0.y))
	{
		return false;
	}
	if (!func_2127(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1739(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1240(iParam1, 1);
	iVar1 = func_1247(iParam0, 1);
	iVar2 = func_1243(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_2117(iVar3, 1);
		if (!func_2118(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_2119(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2128(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2121(iVar6))
		{
		}
		else if (!func_2129(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_2122(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_2130(iVar6);
			}
		}
		iVar7++;
	}
	func_2131(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1740(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_2124(iParam0))
	{
		return;
	}
	iVar0 = func_2125(iParam0, 1);
	if (!func_1733(iParam1))
	{
		return;
	}
	if (!func_815(iParam2))
	{
		return;
	}
	if (!func_2127(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1741(int iParam0)
{
	if (!func_2124(iParam0))
	{
		return;
	}
	iVar0 = func_2125(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_1742(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = { *uParam0 };
	StringCopy(&cVar16, func_2132(iParam1), 24);
	iVar19 = get_length_of_literal_string(&cVar16);
	if (are_strings_equal(_get_text_substring(&Var0, iParam2, (iParam2 + iVar19)), &cVar16))
	{
		Var20 = { func_2133(iParam1, uParam3, bParam4) };
		*uParam0 = { func_2134(Var0, iVar19, iParam2, Var20) };
		return true;
	}
	return false;
}

bool func_1743(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

bool func_1744()
{
	return !&Global_1913504;
}

void func_1745(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

bool func_1746(int iParam0, int iParam1)
{
	if (!func_847(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

int func_1747(int iParam0)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1748(int iParam0, int iParam1)
{
	if (!func_847(iParam0, 0))
	{
		return func_2136(func_2135(iParam0), iParam1);
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

char* func_1749(int iParam0)
{
	if (func_1748(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1748(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1748(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1748(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1748(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1748(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1748(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1748(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_1748(iParam0, -352095726) || func_1748(iParam0, -2014783736)) || func_1748(iParam0, -545064757)) || func_1748(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1750(int iParam0)
{
	if (func_1748(iParam0, -189374246))
	{
		if (((func_2137(iParam0, -1305775593) || func_2137(iParam0, 1384151091)) || func_2137(iParam0, 2075388272)) || func_2137(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_1748(iParam0, -753854379) || func_1748(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_1751(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_1752(int iParam0)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_1753(int iParam0)
{
	iVar0 = func_2138(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_2139(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_2140(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_2141(iVar14))
			{
				func_2142(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_2142(iVar11);
	}
	return 0;
}

bool func_1754(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_1755(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_847(iParam0, 0) && !func_2143(func_2135(iParam0), 2))
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

int func_1756(int iParam0, int iParam1)
{
	iVar0 = func_2144(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1757(int iParam0, char* sParam1)
{
	if (!func_847(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_2145(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_2146(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_2147(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_1758(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1759(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_2148(iParam0);
		case 1:
			return floor(func_2149(iParam0));
		default:
			break;
	}
	return -1;
}

bool func_1760(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

void func_1761(int iParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam0, fParam1, 0, 0);
}

void func_1762(int iParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_charge_ped_stamina(iParam0, fParam1);
}

float func_1763(int iParam0)
{
	switch (iParam0)
	{
		case -73658703:
		case -36237369:
		case 1000705175:
			return 0.5f;
		case 678166986:
		case 1030464549:
		case 1444794465:
			return 1f;
		case -1042371315:
		case 81276375:
		case 442459581:
			return 1.5f;
		default:
			break;
	}
	return 1f;
}

void func_1764(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

void func_1765(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_2150(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_1766(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1317(2);
	}
	iVar0 = player_ped_id();
	if (func_1287(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_2151(iParam0, 7000, iParam5);
		}
		func_2152(iVar0, iParam0, fParam1);
		func_2153(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_1767(int iParam0)
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

bool func_1768(int iParam0)
{
	return func_727(&(Global_1956200->f_1565), iParam0, 1);
}

void func_1769(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

struct<14> func_1770(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

bool func_1771(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_885(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1772(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_885(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_1773(var uParam0, int iParam1)
{
	return func_459(*uParam0, iParam1);
}

int func_1774(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_2154(iVar0);
	iVar2 = func_2155(iVar0, iVar1);
	return iVar2;
}

int func_1775(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_13(*Global_1051213) && !func_1597(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_2156(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_2157(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return 1;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return 1;
	}
	if (func_1695())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_13(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return 1;
	}
	Global_1071686->f_28351 = 0;
	return 0;
}

bool func_1776(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1772(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2158(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1777(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_2159(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2160(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

int func_1778(int iParam0, var uParam1)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_attribute_points_needed_for_rank(iParam0, 7, uParam1);
	return iVar0;
}

void func_1779(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_2161(Global_1139381->f_3876.f_2[func_1305(iParam0, 1)]);
}

int func_1780(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1790();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_1781(int iParam0)
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
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1782(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_2162(uParam0->f_1[iVar0], 2))
		{
			if (func_2163(iVar0, iParam1))
			{
				vVar4 = { func_2164(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1702(iVar0, 4))
				{
					func_1703(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_2165(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1952637->f_83[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_1783(int iParam0)
{
	func_2166(&(Global_1952637->f_2897), iParam0);
}

int func_1784(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

void func_1785(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1784(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1784(iParam0, 1)])->f_11 || iParam1);
}

int func_1786(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_2167(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1787(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_1788(int iParam0)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_1789(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1748(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1702(iVar0, 16);
		if (bVar1)
		{
			func_1703(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_2089(iVar0, iParam3);
			}
			if (!bParam2 && func_1788(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_2163(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_1792(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_2089(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1792(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1790()
{
	return Global_1952637->f_1;
}

int func_1791(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_1770(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_1771(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_2168(iVar0, iVar1, iParam1);
		}
		func_777(iVar0);
	}
	return iVar2;
}

void func_1792(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_2169(iVar0, 1);
	if (bParam3 && func_1748(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_2170(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_2087(iParam2, 1))
	{
		case -1130352927:
			func_2171(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_2172(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_2173(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_2174(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_2175(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_2176(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_2177(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_2178(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_2179(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_2180(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_2181(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_2182(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_2183(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_2184(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_2185(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_2186(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_1793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1845241476;
		case 1:
			return 1654063339;
		case 2:
			return 1623931083;
		default:
			break;
	}
	return -1845241476;
}

struct<4> func_1794(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_885(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_1909(1328661203, func_485(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_1909(1328661203, func_485(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_1909(1328661203, func_485(), -1591664384, bParam0);
}

int func_1795(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_847(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1995(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1909(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_885(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_885(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1796(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_847(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_1995(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_2187(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_1997(iParam0, bParam4, 0) };
	Var6 = { func_1909(iParam0, Var1, Var1.f_4, bParam4) };
	return func_2188(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_1797(int iParam0)
{
	if (!func_874(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 121671270;
		case 2:
			return 1242891102;
		case 1:
			return -1791399933;
		default:
			break;
	}
	return 0;
}

int func_1798(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1799(int iParam0)
{
	if (!func_2189(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_2190(iParam0, 1)])->f_1;
}

bool func_1800(int iParam0, int iParam1)
{
	if (iParam0 == 304794100)
	{
		return func_2191(iParam1);
	}
	else
	{
		return !func_2191(iParam1);
	}
	return false;
}

void func_1801(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2106(func_2105(iParam0, 1), &Var0, 2, -1);
	func_2104(&Var0, iParam0, 0);
}

void func_1802(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2103(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 0, -1);
	func_2107(Var0, iParam0, 0);
}

bool func_1803(int iParam0)
{
	if (is_bit_set(&(Local_5197.f_516.f_2[func_405(iParam0)]), func_406(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_1804(int iParam0)
{
	if (func_2192(iParam0) > 1)
	{
		return true;
	}
	return false;
}

bool func_1805(var uParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(*uParam0))
	{
		return true;
	}
	request_model(-2104632348, false);
	if (has_model_loaded(-2104632348))
	{
		*uParam0 = create_object(-2104632348, vParam1, false, false, false, false, true);
		set_entity_heading(*uParam0, fParam4);
		return true;
	}
	return false;
}

void func_1806(int iParam0, struct<33> Param1, int iParam34)
{
	iVar0 = 8913159;
	if (func_407() || func_84(69))
	{
		iVar0 |= 8;
	}
	if (is_bit_set(Param1.f_13, 0) || func_1812(Param1))
	{
		iVar0 |= 512;
	}
	else if (is_bit_set(Param1.f_13, 11))
	{
		iVar0 |= 1024;
	}
	if (is_bit_set(Param1.f_13, 4) || iParam34 & 2 > 0)
	{
		iVar0 |= 65536;
	}
	if (iParam34 & 4 > 0)
	{
		iVar0 |= 131072;
	}
	if (is_bit_set(Param1.f_13, 9) || iParam34 & 1 > 0)
	{
		iVar0 |= 262144;
	}
	if (is_bit_set(Param1.f_13, 10) || func_407())
	{
		iVar0 |= 16384;
	}
	if (is_bit_set(Param1.f_13, 14))
	{
		iVar0 |= 16;
		iVar0 |= 8;
	}
	if (is_bit_set(Param1.f_13, 3))
	{
		if (!is_bit_set(Param1.f_13, 20))
		{
			iVar0 |= 4194304;
		}
	}
	if (func_1415())
	{
		if (is_bit_set(Global_2359296->f_159, 19))
		{
			if (!is_bit_set(Global_2359296->f_160, 19) && !is_bit_set(Param1.f_13, 20))
			{
				iVar0 |= 4194304;
			}
		}
	}
	if (is_bit_set(Param1.f_13, 21))
	{
		iVar0 |= 128;
	}
	*iParam0 = iVar0;
}

Vector3 func_1807(bool bParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (bParam0)
	{
		vVar0 = { 0f, 0f, 1.2f };
	}
	return vVar0;
}

bool func_1808(int iParam0)
{
	switch (iParam0)
	{
		case -457363514:
		case -316827687:
		case 497466042:
		case 544828034:
		case 1979271852:
		case 2012476125:
			return true;
	}
	return false;
}

int func_1809(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_weapon_type_from_pickup_type(iParam0);
	if (func_1808(iParam0))
	{
		iVar0 = _get_weapon_type_from_ammo_type(_0x44b09a23d728045a(iParam0));
	}
	if (iParam2 != 0)
	{
		get_max_ammo(player_ped_id(), &iVar1, iVar0);
		if (iParam2 > iVar1)
		{
			return iVar1;
		}
		return iParam2;
	}
	if (iVar0 != 0)
	{
		if (iVar0 == 1676963302)
		{
			iVar2 = 2;
		}
		else
		{
			iVar2 = _get_weapon_clip_size(iVar0);
		}
		return (iVar2 * iParam1);
	}
	switch (iParam0)
	{
		case -1888453608:
			return 500;
		case 738282662:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_1810(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1888453608:
			return -236946344;
		case -31919185:
			return 178323656;
		case -2136239332:
			return -1657165379;
		case 738282662:
			switch (iParam1)
			{
				case 0:
					return 178323656;
				case 1:
					return 291474213;
				case 2:
					return 1547041634;
				case 3:
					return 888737253;
				case 4:
					return -394012119;
				case 5:
					return -297456495;
				case 6:
					return 70776250;
				default:
					break;
			}
			return 0;
	}
	if (func_407() || func_84(69))
	{
		return func_2193(iParam0);
	}
	return 0;
}

Vector3 func_1811(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	if (!is_bit_set(Param0.f_13, 17))
	{
		return 0f, 0f, Param0.f_4;
	}
	return Param0.f_5;
}

bool func_1812(struct<18> Param0, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	if (Param0.f_17 == -1888453608)
	{
		if (!is_bit_set(Param0.f_13, 14))
		{
			if (!func_84(38))
			{
				return true;
			}
		}
	}
	else if (!func_84(37))
	{
		return true;
	}
	return false;
}

float func_1813(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_1814(int iParam0, bool bParam1)
{
	iVar1 = -1;
	bVar2 = func_542(get_player_index(), 128);
	if (Global_3145858->f_282 == 1 || (func_84(25) && !bVar2))
	{
		iVar1 = 0;
	}
	else if ((!bParam1 && func_1414(Global_524288->f_40400)) && bVar2)
	{
		iVar1 = func_1366();
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_282 - 1))
	{
		if (iVar1 != -1 && iVar0 != iVar1)
		{
		}
		else if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_6[iVar0]), 1))
		{
		}
		else
		{
			if ((func_1414(Global_524288->f_40400) && bVar2) && func_2194(iVar0) != -1)
			{
				if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_15[iVar0]), func_2194(iVar0)))
				{
				}
				else
				{
					Jump @266; //curOff = 237
					if (&Global_3145858->f_38736[iParam0]->f_15[iVar0] != 0)
					{
					}
					else
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1815(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_282 - 1))
	{
		if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_6[iVar0]), 1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1816()
{
	return Global_1139381->f_4796;
}

bool func_1817(var uParam0)
{
	if (((((uParam0->f_31 != -1 || uParam0->f_32 != -1) || uParam0->f_33 != -1) || uParam0->f_34 != -1) || uParam0->f_35 != -1) || uParam0->f_36 != -1)
	{
		return true;
	}
	return false;
}

void func_1818(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 > 200)
	{
		*uParam0 = 200;
	}
	if (*uParam1 > 200)
	{
		*uParam1 = 200;
	}
	if (*uParam2 > 200)
	{
		*uParam2 = 200;
	}
}

void func_1819(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_2195(uParam0, uParam1);
	func_2196(uParam0, uParam3);
	func_2197(uParam0, uParam5);
	func_2198(uParam0, uParam2);
	func_2199(uParam0, uParam4);
	func_2200(uParam0, uParam6);
}

bool func_1820(var uParam0)
{
	if ((uParam0->f_37 != 0 || uParam0->f_38 != 0) || uParam0->f_39 != 0)
	{
		return true;
	}
	return false;
}

void func_1821(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -2)
	{
		iParam1 = func_2201(0, 0);
	}
	func_2202(uParam0, iParam1);
	if (iParam2 == -2)
	{
		iParam2 = func_2201(2, 0);
	}
	func_2203(uParam0, iParam2);
	if (iParam3 == -2)
	{
		iParam3 = func_2201(1, 0);
	}
	func_2204(uParam0, iParam3);
}

bool func_1822(var uParam0)
{
	if (is_bit_set(uParam0->f_6, 29))
	{
		return true;
	}
	return false;
}

void func_1823(var uParam0, bool bParam1)
{
	uParam0->f_22 = bParam1;
	func_1769(uParam0);
}

void func_1824(var uParam0, float fParam1)
{
	uParam0->f_22.f_1 = fParam1;
	uParam0->f_22.f_2 = 1;
	uParam0->f_6 = 1;
	func_1769(uParam0);
}

bool func_1825(var uParam0, bool bParam1)
{
	if (func_380() == 2094371892)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_73[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1826(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, bool bParam9)
{
	func_2205(uParam0, 0, iParam1, uParam2, bParam9);
	func_2205(uParam0, 1, iParam3, uParam4, bParam9);
	func_2205(uParam0, 2, iParam5, uParam6, bParam9);
	func_2205(uParam0, 3, iParam7, uParam8, bParam9);
	func_1769(uParam0);
}

void func_1827(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = func_1790();
	iVar3 = 0;
	iVar4 = uParam1->f_2;
	iVar5 = func_2206(uParam1);
	if (func_2207())
	{
		iVar0 = func_2208(255);
		iVar1 = func_2209(255);
		func_2210(uParam0, iVar2, iVar0, 0);
		func_2211(uParam0, iVar1, iVar5, 0, 1, 1, 0);
		func_2212(iVar3, iVar1, iVar4, 0);
		func_1012(uParam2, *uParam3, 1);
		return;
	}
	iVar3 = *uParam1;
	if (func_2213())
	{
		iVar3 = func_2214();
		iVar1 = func_2215();
		iVar4 = func_2216();
	}
	if (!func_2217(iVar3))
	{
		return;
	}
	func_2218(iVar3, &iVar1, &iVar0, iVar5, iVar2, iVar4);
	func_2210(uParam0, iVar2, iVar0, 0);
	func_2211(uParam0, iVar1, iVar5, 0, 1, 1, iVar3);
	func_2212(iVar3, iVar1, iVar4, 0);
	func_1012(uParam2, *uParam3, 1);
}

void func_1828(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_1829(var uParam0, bool bParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = bParam1;
}

void func_1830(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_536(uParam0, Param1, iParam4);
		func_352(115);
	}
	else
	{
		Global_1139381->f_4854 = { *uParam0 };
		Global_1139381->f_4854.f_13 = { Param1 };
		func_351(115);
	}
}

void func_1831(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
		Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
		if (Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == 0 || Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == -151176215)
		{
			if (&Global_3145858->f_57852[iParam0]->f_4[iVar2] == -160924582)
			{
				Var3 = -160924582;
				Var3.f_1 = 1;
				func_1928(Var3, Var3.f_1, 0, 1, 0, 0, 752097756, 0);
			}
			else if (&Global_3145858->f_57852[iParam0]->f_4[iVar2] == 1652431022)
			{
				Var3 = 1652431022;
				Var3.f_1 = 1;
				func_1928(Var3, Var3.f_1, 0, 1, 0, 0, 752097756, 0);
			}
			else if (func_1917(Var0))
			{
				_0x3b7b7908b7adfb4b(player_ped_id(), Var0);
				func_1916(Var0, Var0.f_1, 752097756);
			}
			else
			{
				func_1519(Var0, Var0.f_1, 752097756);
			}
		}
		iVar2++;
	}
}

void func_1832()
{
	iVar0 = 1;
	_0x644ccb76a76cfbd6(0, 0, false, false, iVar0, 1);
}

void func_1833()
{
	Var2 = { func_1770(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_1771(&Var2, &iVar0, &iVar1, 1))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var17.f_10 = -1;
	Var41.f_9 = -1591664384;
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_2219(iVar16, iVar0, iVar1, 2, &Var17, 1))
		{
		}
		else if (!func_2220(Var17.f_5, &Var41, 0, 1, -1))
		{
			_0x3112adb9d5f3426b(&(Var17.f_5), 1);
		}
		else
		{
			_0x3112adb9d5f3426b(&Var17, 1);
		}
		iVar16++;
	}
	func_777(iVar0);
}

void func_1834(var uParam0, int iParam1)
{
	if (func_1841())
	{
		_0xe133c1ec5300f740(uParam0, 1681219929, Global_1901947->f_827.f_3);
		_0xe133c1ec5300f740(uParam0, -1330115686, Global_1901947->f_827.f_5);
		_0xe133c1ec5300f740(uParam0, 218444191, Global_1901947->f_827.f_4);
		_0xe133c1ec5300f740(uParam0, 2113196069, Global_1901947->f_827.f_4);
		_0xe133c1ec5300f740(uParam0, 1950175060, Global_1901947->f_827.f_2);
		_0xe133c1ec5300f740(uParam0, -1878508229, Global_1901947->f_827.f_6);
		_0xe133c1ec5300f740(uParam0, -1639263599, Global_1901947->f_827.f_7);
		_0xe133c1ec5300f740(uParam0, 480079517, Global_1901947->f_827.f_7);
		_0xe133c1ec5300f740(uParam0, 1235846615, Global_1901947->f_827.f_7);
		set_ped_config_flag(iParam1, 169, true);
		set_ped_config_flag(iParam1, 340, true);
		set_ped_config_flag(iParam1, 26, true);
	}
}

void func_1835(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_25 = uParam0;
	Var0.f_25.f_2 = uParam4;
	Var0.f_25.f_1 = uParam2;
	Var0.f_25.f_3 = uParam1;
	Var0.f_25.f_5 = uParam5;
	Var0.f_25.f_4 = uParam3;
	if (Var0.f_25 == -1)
	{
		Var0.f_25 = func_1309(0, 0);
	}
	else if (Var0.f_25 < 1)
	{
		Var0.f_25 = 1;
	}
	else if (Var0.f_25 > 10)
	{
		Var0.f_25 = 10;
	}
	if (Var0.f_25.f_1 == -1)
	{
		Var0.f_25.f_1 = func_1309(2, 0);
	}
	else if (Var0.f_25.f_1 < 1)
	{
		Var0.f_25.f_1 = 1;
	}
	else if (Var0.f_25.f_1 > 10)
	{
		Var0.f_25.f_1 = 10;
	}
	if (Var0.f_25.f_2 == -1)
	{
		Var0.f_25.f_2 = func_1309(1, 0);
	}
	else if (Var0.f_25.f_2 < 1)
	{
		Var0.f_25.f_2 = 1;
	}
	else if (Var0.f_25.f_2 > 10)
	{
		Var0.f_25.f_2 = 10;
	}
	if (Var0.f_25.f_3 == -1)
	{
		Var0.f_25.f_3 = func_1310(0);
	}
	else if (Var0.f_25.f_3 < 1)
	{
		Var0.f_25.f_3 = 1;
	}
	else if (Var0.f_25.f_3 > 200)
	{
		Var0.f_25.f_3 = 200;
	}
	if (Var0.f_25.f_4 == -1)
	{
		Var0.f_25.f_4 = func_1311(0);
	}
	else if (Var0.f_25.f_4 < 1)
	{
		Var0.f_25.f_4 = 1;
	}
	else if (Var0.f_25.f_4 > 200)
	{
		Var0.f_25.f_4 = 200;
	}
	if (Var0.f_25.f_5 == -1)
	{
		Var0.f_25.f_5 = func_1312(0);
	}
	else if (Var0.f_25.f_5 < 1)
	{
		Var0.f_25.f_5 = 1;
	}
	else if (Var0.f_25.f_5 > 200)
	{
		Var0.f_25.f_5 = 200;
	}
	func_2221(Var0.f_25);
	func_2222(Var0.f_25.f_1);
	func_2223(Var0.f_25.f_2);
	func_2224(Var0.f_25.f_3);
	func_2225(Var0.f_25.f_4);
	func_2226(Var0.f_25.f_5);
}

void func_1836(var uParam0, var uParam1, int iParam2)
{
	if ((uParam0->f_31 > -1 || uParam0->f_33 > -1) || uParam0->f_35 > -1)
	{
		func_890(1);
		func_891(uParam0->f_31, uParam0->f_33, uParam0->f_35);
		func_892(uParam0->f_32, 2);
		func_1222(uParam1, iParam2);
		func_1224(uParam1, iParam2);
		func_1223(uParam1, iParam2);
		if (uParam0->f_31 > -1)
		{
			func_1284(0, 0, 0);
		}
		if (uParam0->f_35 > -1)
		{
			func_1284(1, 0, 0);
		}
		if (uParam0->f_33 > -1)
		{
			func_1284(2, 0, 0);
		}
	}
	else
	{
		func_2227(1);
	}
}

void func_1837(int iParam0, int iParam1, int iParam2)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	if (iParam0 == -2)
	{
		iParam0 = func_2201(0, 0);
	}
	func_2228(iParam0);
	if (iParam1 == -2)
	{
		iParam1 = func_2201(2, 0);
	}
	func_2229(iParam1);
	if (iParam2 == -2)
	{
		iParam2 = func_2201(1, 0);
	}
	func_2230(iParam2);
}

void func_1838(bool bParam0)
{
	if (!bParam0 && func_1768(2))
	{
		return;
	}
	func_1289(&(Global_1139381->f_4796), bParam0);
	if (bParam0)
	{
		func_890(4);
	}
	else
	{
		func_2227(4);
	}
}

void func_1839(var uParam0, bool bParam1)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1823(uParam0, bParam1);
}

void func_1840(var uParam0, float fParam1)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1824(uParam0, fParam1);
}

bool func_1841()
{
	return Global_3145858->f_224 == 2094371892;
}

void func_1842(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, bool bParam8)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1826(&(Global_1139381->f_4796), iParam0, uParam1, iParam2, uParam3, iParam4, uParam5, iParam6, uParam7, bParam8);
	func_890(5);
	func_897(&(Global_1139381->f_4796.f_34[0]), Global_1139381->f_4796.f_34[0]->f_1, 0);
	func_897(&(Global_1139381->f_4796.f_34[1]), Global_1139381->f_4796.f_34[1]->f_1, 1);
	func_897(&(Global_1139381->f_4796.f_34[2]), Global_1139381->f_4796.f_34[2]->f_1, 2);
	func_897(&(Global_1139381->f_4796.f_34[3]), Global_1139381->f_4796.f_34[3]->f_1, 3);
	func_898();
}

void func_1843(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_2208(255);
	iVar1 = func_1790();
	iVar2 = 0;
	iVar3 = uParam0->f_2;
	iVar4 = uParam0->f_1;
	iVar5 = func_2206(uParam0);
	if (!func_2217(*uParam0))
	{
		func_2231();
		func_2232();
		func_164();
		func_1012(uParam1, *uParam2, 1);
		return;
	}
	if (func_2213())
	{
		if (func_2214() == *uParam0)
		{
			return;
		}
		if (func_2233())
		{
			return;
		}
	}
	iVar2 = *uParam0;
	func_2218(iVar2, &iVar4, &iVar0, iVar5, iVar1, iVar3);
	func_2234(iVar1, iVar0, 0);
	func_2235(iVar4, iVar5, 0);
	func_2232();
	func_2212(iVar2, iVar4, iVar3, uParam0->f_6);
	func_1012(uParam1, *uParam2, 1);
}

void func_1844(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_1845(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

int func_1846(int iParam0)
{
	return iParam0;
}

bool func_1847(int iParam0)
{
	return Global_3145858->f_34781[iParam0]->f_13 > -1;
}

void func_1848(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		vVar1 = { func_1933() };
		vVar4 = { func_1933() };
		if (uParam0->f_4 == 465509728 && uParam0->f_6 > -1)
		{
			iVar7 = uParam0->f_5;
			iVar8 = uParam0->f_6;
			if (iVar7 > -1 && iVar7 < 2)
			{
				iVar9 = net_to_veh(&(Local_5197.f_238.f_33[iVar7]));
				if (does_entity_exist(iVar9))
				{
					iVar10 = get_train_carriage(iVar9, iVar8);
					if (does_entity_exist(iVar10))
					{
						vVar4.f_2 = 90f;
						if (is_bit_set(uParam0->f_2, 2))
						{
							_0x5737199af2dc609f(*uParam0, &vVar11, &vVar14);
							fVar17 = (vVar14.z - vVar11.z);
							vVar1.f_2 = (vVar1.z + 1f);
							vVar1.f_2 = (vVar1.z + (fVar17 * 0.5f));
						}
						iParam1 = iVar10;
					}
				}
			}
		}
		if (iParam1 == 0)
		{
			iParam1 = func_1934(uParam0->f_4, uParam0->f_5, uParam0->f_7, uParam0->f_8, uParam0->f_8.f_1, uParam0->f_8.f_2);
		}
		if (does_entity_exist(iParam1))
		{
			if (is_bit_set(uParam0->f_2, 1) || !is_entity_dead(iParam1))
			{
				_0x7c00cfc48a782dc0(*uParam0, iParam1, vVar1, vVar4, 2, 1);
				uParam0->f_3 = iParam1;
				set_bit(&(uParam0->f_2), 0);
			}
			else
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (_does_volume_exist(*uParam0))
		{
			_delete_volume(*uParam0);
		}
	}
}

int func_1849(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_670(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_670(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_1850(struct<2> Param0)
{
	if (func_38(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_38(Param0)))
	{
		_0x99230691875fc218(func_1200(Param0), func_38(Param0), Global_35);
	}
}

bool func_1851(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_1852(int iParam0, int iParam1)
{
	return (func_1851(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

int func_1853(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1854(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_2236();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_2237();
	Var0.f_3 = iParam1;
	func_2238(Var0, 0);
	return Var0;
}

int func_1855(struct<2> Param0)
{
	iVar0 = func_1849(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_2239(iVar0);
}

int func_1856(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_670(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_670(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_2240(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1857()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_670(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1858(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1859(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
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

void func_1860(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1861()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

int func_1862(struct<2> Param0)
{
	if (!func_13(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_1597(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1863(struct<2> Param0, int iParam2)
{
	if (!func_13(Param0))
	{
		func_668(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_2241(Param0, 0, 1, -1);
}

void func_1864(int iParam0, int iParam1)
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
			func_2242((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_2242(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_13(*Global_1900736->f_1[0]))
	{
		func_1357(*Global_1900736->f_1[0], 3);
	}
}

bool func_1865(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_13(Param0))
	{
		return false;
	}
	if (!func_13(Param2))
	{
		return true;
	}
	iVar0 = func_1200(Param0);
	iVar1 = func_1200(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1866(int iParam0, var uParam1, var uParam2)
{
	if (!func_2243(iParam0))
	{
		return false;
	}
	if (func_2244(iParam0, uParam1, &uVar0))
	{
		func_2245(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1867(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_728();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	return func_2246(get_unique_int_for_player(&(Global_1296859->f_154[iParam0])));
}

int func_1868()
{
	return get_ped_relationship_group_hash(player_ped_id());
}

bool func_1869(int iParam0)
{
	if (func_354(*Global_2097152->f_6035[iParam0]))
	{
		return false;
	}
	return true;
}

int func_1870(int iParam0, float fParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	iVar0 = func_2247(uParam2);
	if (iVar0 != -1)
	{
		uParam2->f_10[iVar0]->f_1 = fParam1;
		if (absf(fParam1) != 10f || bParam3)
		{
			set_bit(&(uParam2->f_91), iVar0);
		}
		if (bParam4)
		{
			set_bit(&(uParam2->f_92), iVar0);
		}
		uParam2->f_10[iVar0]->f_3 = iParam5;
		uParam2->f_10[iVar0]->f_4 = iParam6;
		if (_does_volume_exist(iParam0))
		{
			func_1983(iParam0, iVar0, uParam2);
		}
		uParam2->f_9++;
	}
	else if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
	return iVar0;
}

void func_1871(int iParam0, bool bParam1, var uParam2, bool bParam3, float fParam4)
{
	if (bParam3)
	{
		fVar0 = 10f;
	}
	else
	{
		fVar0 = absf(fParam4);
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	func_2248(iParam0, fVar0, uParam2);
}

void func_1872(var uParam0, float fParam1)
{
	if (uParam0->f_626 != fParam1)
	{
		uParam0->f_626 = fParam1;
	}
}

void func_1873(var uParam0, float fParam1)
{
	if (uParam0->f_631 != fParam1)
	{
		uParam0->f_631 = fParam1;
	}
}

void func_1874(var uParam0, float fParam1)
{
	if (uParam0->f_627 != fParam1)
	{
		uParam0->f_627 = fParam1;
	}
}

void func_1875(var uParam0, float fParam1)
{
	if (uParam0->f_628 != fParam1)
	{
		uParam0->f_628 = fParam1;
	}
}

void func_1876(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!is_bit_set(uParam0->f_624, 3))
		{
			set_bit(&(uParam0->f_624), 3);
		}
	}
	else if (is_bit_set(uParam0->f_624, 3))
	{
		clear_bit(&(uParam0->f_624), 3);
	}
}

int func_1877(var uParam0)
{
	iVar0 = -1;
	if (uParam0->f_93 < 128)
	{
		iVar0 = uParam0->f_93;
	}
	return iVar0;
}

Vector3 func_1878()
{
	return 0f, -8.5f, 2.8f;
}

Vector3 func_1879(int iParam0)
{
	switch (iParam0)
	{
		case -500771278:
			vVar0 = { 8f, 10f, 10f };
			break;
		case 149530285:
			vVar0 = { 16f, 10f, 10f };
			break;
		case -1742691940:
		case 628988510:
			vVar0 = { 16f, 16f, 10f };
			break;
	}
	return vVar0;
}

Vector3 func_1880(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

bool func_1881(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_91(16, iParam0))
	{
		return true;
	}
	return false;
}

void func_1882(var uParam0, var uParam1)
{
	*uParam0 = 46;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	if (!_network_is_player_index_valid(uParam0->f_1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 10, 1, &uParam1);
}

bool func_1883(int iParam0, int iParam1)
{
	return func_2249(iParam0, iParam1) > 0;
}

void func_1884(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_9 - 1))
	{
		if (!_does_volume_exist(&(uParam0->f_10[iVar0])))
		{
		}
		else if (!is_bit_set(uParam0->f_91, iVar0) || uParam0->f_10[iVar0]->f_1 == 0f)
		{
		}
		else
		{
			vVar1 = { _0x3e2a25b2416dd67e(&(uParam0->f_10[iVar0])) };
			if (!func_2250(vVar1))
			{
				fVar4 = 1.25f;
				if (uParam0->f_10[iVar0]->f_1 < 0f)
				{
					fVar4 = 0.75f;
				}
				vVar5 = { vVar1 * Vector(fVar4, fVar4, fVar4) };
				if (!func_2250(vVar5))
				{
					if (!_0xa46e98bdc407e23d(&(uParam0->f_10[iVar0]), vVar5))
					{
					}
				}
			}
			if (absf(uParam0->f_10[iVar0]->f_1) != 10f)
			{
				func_2251(&(uParam0->f_10[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_1885(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (&uParam0->f_608[iVar0] != 0f && absf(&(uParam0->f_608[iVar0])) != 10f)
		{
			func_2251(uParam0->f_608[iVar0]);
		}
		iVar0++;
	}
}

void func_1886(var uParam0, var uParam1, var uParam2)
{
	bVar0 = (func_349(66, 255) || func_349(65, 255));
	bVar1 = (func_349(70, 255) || func_349(71, 255));
	if (is_bit_set(uParam0->f_624, 0))
	{
		uParam1->f_29 = 1;
	}
	else if (is_bit_set(uParam0->f_624, 1))
	{
		uParam1->f_29 = 0;
	}
	else
	{
		uParam1->f_29 = bVar1;
	}
	*uParam1 = { *uParam0 };
	*uParam2 = { *uParam1 };
	uParam2->f_6 = { uParam0->f_6 };
	if (func_354(uParam0->f_6))
	{
		bVar2 = true;
	}
	iVar4 = 0;
	while (iVar4 <= (uParam0->f_9 - 1))
	{
		if (_does_volume_exist(&(uParam0->f_10[iVar4])) && uParam0->f_10[iVar4]->f_1 != 0f)
		{
			bVar7 = true;
			fVar5 = absf(uParam0->f_10[iVar4]->f_1);
			bVar6 = uParam0->f_10[iVar4]->f_1 > 0f;
			if (bVar2 && bVar6)
			{
				uParam2->f_6 = { _0xf70f00013a62f866(&(uParam0->f_10[iVar4])) };
				bVar2 = false;
			}
			if (fVar5 == 10f)
			{
				_0x405ddefb1f531b18(&(uParam0->f_10[iVar4]), bVar6, uParam0->f_10[iVar4]->f_3, uParam0->f_10[iVar4]->f_4);
			}
			else
			{
				if (uParam0->f_10[iVar4]->f_2 != 0f)
				{
					fVar5 = (fVar5 + uParam0->f_10[iVar4]->f_2);
					fVar5 = func_1471(fVar5, 0f, 1f);
				}
				_0x13f592fc3bf0ea84(&(uParam0->f_10[iVar4]), bVar6, fVar5, uParam0->f_10[iVar4]->f_3, uParam0->f_10[iVar4]->f_4);
			}
		}
		iVar4++;
	}
	if (bVar7)
	{
		fVar8 = 1f;
		iVar15 = 0;
		if (bVar0)
		{
			if (func_2252(43))
			{
				iVar15 = Global_1291734->f_11.f_78.f_11;
			}
			if (iVar15 == 0)
			{
				iVar15 = Global_1904087->f_11;
			}
			if (iVar15 == 0)
			{
				iVar15 = func_2253();
			}
		}
		else if (bVar1)
		{
			iVar15 = Global_1102219->f_3802;
		}
		if (iVar15 != 0)
		{
			get_model_dimensions(iVar15, &vVar9, &vVar12);
			if (func_354(vVar9) || func_354(vVar12))
			{
			}
			else
			{
				fVar8 = ((vVar12.z - vVar9.z) / 2f);
			}
		}
		_0x59577799f6ae2f34(fVar8);
	}
	iVar4 = 0;
	while (iVar4 <= (uParam0->f_93 - 1))
	{
		if (!func_354(*uParam0->f_94[iVar4]))
		{
			if (bVar2)
			{
				uParam2->f_6 = { *uParam0->f_94[iVar4] };
				bVar2 = false;
			}
			_0xfd1ac0b3858f224c(*uParam0->f_94[iVar4], &(uParam0->f_479[iVar4]));
			bVar3 = true;
		}
		iVar4++;
	}
	if (is_bit_set(uParam0->f_624, 4))
	{
		if (does_entity_exist(uParam0->f_625))
		{
			if (is_entity_a_vehicle(uParam0->f_625))
			{
				iVar16 = get_vehicle_index_from_entity_index(uParam0->f_625);
				if (!is_this_model_a_train(get_entity_model(uParam0->f_625)))
				{
					func_2254(iVar16, 1, 0, 0);
				}
				else
				{
					iVar17 = _0x60b7d1dcc312697d(iVar16);
					iVar18 = get_random_int_in_range(0, iVar17);
					func_2255(iVar16, iVar18, 1, 0, 0);
				}
			}
		}
	}
	iVar4 = 0;
	while (iVar4 <= 14)
	{
		if (&uParam0->f_608[iVar4] != 0f)
		{
			fVar5 = absf(&(uParam0->f_608[iVar4]));
			bVar6 = &uParam0->f_608[iVar4] > 0f;
			iVar19 = func_2256(iVar4);
			if (fVar5 == 10f)
			{
				_0x44d59ec597bbf348(iVar19, bVar6);
			}
			else
			{
				_0xeb6027fd1b4600d5(iVar19, bVar6, fVar5);
			}
		}
		else if (bVar3 && iVar4 == 0)
		{
			iVar21 = 0;
			while (iVar21 <= (uParam0->f_9 - 1))
			{
				if (_does_volume_exist(&(uParam0->f_10[iVar21])) && uParam0->f_10[iVar21]->f_1 == 10f)
				{
					bVar20 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (bVar20)
			{
				_0xeb6027fd1b4600d5(5, true, 0.3f);
			}
			else
			{
				_0x44d59ec597bbf348(5, true);
			}
		}
		iVar4++;
	}
	if (uParam0->f_626 >= 0f)
	{
		_0x0608326f7b98c08d(-1741123096, uParam0->f_626);
	}
	else
	{
		_0x5d3c528b7a7df836(-1741123096);
	}
	if (uParam0->f_631 >= 0f)
	{
		_0x0608326f7b98c08d(1593630490, uParam0->f_631);
	}
	else
	{
		_0x5d3c528b7a7df836(1593630490);
	}
	if (uParam0->f_627 != -1f)
	{
		_0x0608326f7b98c08d(-869194337, uParam0->f_627);
	}
	else
	{
		_0x5d3c528b7a7df836(-869194337);
	}
	if (uParam0->f_628 != -1f)
	{
		_0x0608326f7b98c08d(493630969, uParam0->f_628);
	}
	else
	{
		_0x5d3c528b7a7df836(493630969);
	}
	if (uParam0->f_629 != -1f)
	{
		_0x0608326f7b98c08d(1062828826, uParam0->f_629);
	}
	else
	{
		_0x5d3c528b7a7df836(1062828826);
	}
	if (uParam0->f_630 != -1f)
	{
		_0x0608326f7b98c08d(-733639455, uParam0->f_630);
	}
	else
	{
		_0x5d3c528b7a7df836(-733639455);
	}
	if (is_bit_set(uParam0->f_624, 3))
	{
		_0xf94a0d5b254375df(32);
	}
	else
	{
		_0x6cee2e30021daec6();
	}
	if (bVar2)
	{
		vVar22 = { get_entity_coords(player_ped_id(), false, false) };
		uParam2->f_6 = { vVar22 };
	}
}

int func_1887(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_1387(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_355(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_356(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_357(Global_1102219->f_3849, 36);
		func_358(Global_1102219->f_3888, 36);
		func_352(48);
		return 1;
	}
	return 0;
}

int func_1888(vector3 vParam0, float fParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = get_id_of_this_thread();
	if (func_2252(72))
	{
		func_1962(&(Global_1291734->f_11.f_119));
		return 0;
	}
	iVar1 = player_id();
	if (Global_1291734->f_581 != 0)
	{
		if (_network_is_player_index_valid(iVar1))
		{
			iVar2 = _0xb9050a97594c8832(iVar1);
			if (Global_1291734->f_581 == 1)
			{
				if (does_entity_exist(iVar2))
				{
					if (iParam8 == 0)
					{
						return 0;
					}
					else if (bParam9)
					{
						if (!func_2257(1))
						{
							return 0;
						}
					}
					else if (!func_2258(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_2259(1);
				return 0;
			}
		}
	}
	if (func_2252(70))
	{
		if (!func_712(&(Global_1291734->f_11.f_119)))
		{
			func_710(&(Global_1291734->f_11.f_119), 0);
		}
		fVar3 = func_713(&(Global_1291734->f_11.f_119));
		if (fVar3 > 10f)
		{
			func_2260(1);
			Global_1291734->f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1291734->f_11.f_70 != 0)
		{
			if (!is_thread_active(Global_1291734->f_11.f_70, false))
			{
				func_2260(1);
				return 0;
			}
			if (Global_1291734->f_11.f_70 != iVar0)
			{
				Global_1291734->f_11.f_104 = 0;
				func_1962(&(Global_1291734->f_11.f_119));
				return 0;
			}
		}
		if (Global_1291734->f_11 != 11)
		{
			return 0;
		}
		iVar4 = _0xf49f14462f0ae27c(iVar1);
		if (!does_entity_exist(iVar4))
		{
			return 0;
		}
		Global_1291734->f_11.f_104 = 0;
		func_1962(&(Global_1291734->f_11.f_119));
		func_283(71);
		return iVar4;
	}
	if (Global_1291734->f_11 != 1)
	{
		return 0;
	}
	if (is_thread_active(Global_1291734->f_11.f_71, false) && Global_1291734->f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_2261(255) && func_91(2, 255))
	{
		return 0;
	}
	Global_1291734->f_11.f_70 = iVar0;
	Global_1291734->f_11.f_73 = { vParam0 };
	Global_1291734->f_11.f_77 = fParam3;
	Global_1291734->f_11.f_72 = iParam5;
	Global_1291734->f_11.f_76 = iParam7;
	if (bParam4)
	{
		func_283(73);
	}
	else
	{
		func_457(73);
	}
	if (bParam6)
	{
		func_283(76);
	}
	else
	{
		func_457(76);
	}
	func_283(70);
	func_1147(&(Global_1291734->f_11.f_119));
	return 0;
}

void func_1889(int iParam0, vector3 vParam1)
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

void func_1890(int iParam0)
{
	func_1265(iParam0, 0, 100);
	func_1265(iParam0, 1, 100);
}

bool func_1891()
{
	if (func_745())
	{
		return is_bit_set(Global_2097152->f_6317[Local_57[iVar6150]->f_9]->f_4, 8);
	}
	return func_203(7);
}

bool func_1892(int iParam0)
{
	if (func_833(iParam0) && func_203(11))
	{
		return false;
	}
	return true;
}

int func_1893(int iParam0, int iParam1)
{
	iVar3 = func_1433(iParam0, &fVar1, &uVar2);
	if (((iVar3 == -1132780182 || iVar3 == 493104853) || iVar3 == -993457185) || iVar3 == -1148661087)
	{
		vVar4 = { func_871(iParam0, iParam1, 0) };
		if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 0))
		{
			vVar7 = { vVar4 + func_2262(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_5) };
		}
		else
		{
			iVar10 = func_976(iParam0);
			if (iVar10 != -1)
			{
				iVar11 = func_2263(iParam1, iVar10);
				vVar7 = { func_871(iVar10, iVar11, 0) };
			}
			else
			{
				vVar12 = { func_871(func_841(iParam0), func_1372(-1), 0) };
				vVar7 = { vVar4 + vVar4 - vVar12 };
			}
		}
		switch (Global_2097152->f_31)
		{
			case -1742691940:
			case -500771278:
			case 149530285:
				iVar15 = 41722365;
				break;
			case 628988510:
				iVar15 = 1552676601;
				break;
		}
		iVar0 = _create_checkpoint(iVar15, vVar4, vVar7, fVar1, 255, 100, 0, 100, 0);
		func_2264(&iVar0, vVar4);
	}
	return iVar0;
}

int func_1894(int iParam0, int iParam1)
{
	vVar1 = { func_871(iParam0, iParam1, 0) };
	iVar9 = func_1433(iParam0, &fVar7, &fVar8);
	vVar1.f_2 = (vVar1.z + fVar8);
	bVar10 = iVar9 == -1390686937;
	if (is_bit_set(Global_2097152->f_258[iParam0]->f_76, 0))
	{
		vVar11 = { func_2262(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_5) };
		vVar4 = { vVar1 + vVar11 + Vector(Global_2097152->f_258[iParam0]->f_1[iParam1]->f_6, Global_2097152->f_258[iParam0]->f_1[iParam1]->f_6, Global_2097152->f_258[iParam0]->f_1[iParam1]->f_6) };
		if (bVar10)
		{
			vVar4 = { vVar1 - vVar11 };
		}
	}
	else
	{
		iVar14 = func_976(iParam0);
		if (iVar14 != -1)
		{
			iVar15 = func_2263(iParam1, iVar14);
			vVar4 = { func_871(iVar14, iVar15, 0) };
		}
		else
		{
			vVar16 = { func_871(func_841(iParam0), func_1372(-1), 0) };
			vVar4 = { vVar1 + vVar1 - vVar16 };
			if (bVar10)
			{
				vVar4 = { vVar1 - vVar1 - vVar16 };
			}
		}
	}
	_get_color_from_name(-1777836132, &iVar19, &iVar20, &iVar21, &iVar22);
	iVar22 = 150;
	_get_color_from_name(551037070, &iVar23, &iVar24, &iVar25, &iVar26);
	iVar26 = 150;
	iVar27 = get_clock_hours();
	if (iVar27 > 6 && iVar27 < 20)
	{
		iVar22 = round((to_float(iVar22) * 1.2f));
		iVar26 = round((to_float(iVar26) * 1.4f));
	}
	iVar0 = _create_checkpoint(iVar9, vVar1, vVar4, fVar7, iVar19, iVar20, iVar21, iVar22, 0);
	_set_checkpoint_icon_rgba(iVar0, iVar23, iVar24, iVar25, iVar26);
	if (bVar10)
	{
		_0x171c18e994c1a395(iVar0, 0, Global_2097152->f_6012);
	}
	return iVar0;
}

void func_1895(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 389769403;
	if (bParam2)
	{
		iVar0 = -29086678;
	}
	if (!has_model_loaded(iVar0))
	{
		return;
	}
	fVar2 = 220f;
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!does_entity_exist(Local_10256[iParam0]->f_22[iParam1][iVar3]))
		{
			vVar4 = { Global_2097152->f_258[iParam0]->f_1[iParam1]->f_1 };
			fVar7 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_5;
			fVar8 = Global_2097152->f_258[iParam0]->f_1[iParam1]->f_4;
			if (iVar3 == 1)
			{
				fVar8 = -fVar8;
				fVar2 = -fVar2;
			}
			vVar9 = { _get_object_offset_from_coords(vVar4, fVar7, fVar8, 0f, 100f) };
			if (&Global_2097152->f_258[iParam0]->f_1[iParam1]->f_34[iVar3] == -1f)
			{
				if (get_ground_z_for_3d_coord(vVar9, &uVar1, false))
				{
					vVar9.f_2 = uVar1;
				}
				else
				{
					vVar9.f_2 = vVar4.z;
				}
			}
			else
