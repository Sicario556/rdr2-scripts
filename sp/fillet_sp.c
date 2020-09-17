void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		func_1(&uLocal_14, &uScriptParam_0);
	}
	func_2(&uScriptParam_0);
	func_3(3, 256);
	while (true)
	{
		func_4(&uLocal_14, &uScriptParam_0);
		wait(0);
	}
}

void func_1(var uParam0, var uParam1)
{
	if (func_5(uParam0, 16))
	{
		return;
	}
	func_6(uParam0, 16);
	func_7(0, 0);
	func_8(&(uParam0->f_175));
	func_9(uParam0);
	func_10(uParam0);
	func_11(uParam0);
	func_12(&(uParam0->f_314));
	func_13(&(uParam0->f_314));
	func_14(&(uParam0->f_314));
	func_15(&(uParam0->f_314.f_29));
	func_16();
	func_17(uParam0);
	func_18(&(uParam0->f_59), -1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_19(&(uParam0->f_592[iVar0]));
		if (iVar1 != -1)
		{
			func_20(iVar1, 56, 1);
		}
		func_18(&(uParam0->f_592[iVar0]->f_60), iVar0);
		func_21(uParam0, iVar0);
		iVar0++;
	}
	func_22(&(uParam0->f_54), 1, 0, 1);
	func_23(uParam0);
	Global_1900325->f_36 = 0;
	Global_1900325->f_37 = 0;
	if (Global_1900325->f_1 == 1)
	{
		func_24(0);
	}
	func_25(&(Global_1359489->f_40), 1);
	func_28(func_27(func_26()), 0);
	func_29(3);
	func_30(0, 2);
	func_31(uParam1, 1, 1);
}

void func_2(var uParam0)
{
	func_32(1);
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0xdd1232b332cbb9e7(2, 1, 0);
	if (is_player_dead(player_id()) || !is_player_dead(player_id()))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!Global_1935630->f_12)
	{
		if (_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, false, 0, false);
		}
	}
	func_33(1);
	_hide_hud_component(372886907);
	if (func_34() == -1)
	{
		_set_milliseconds_per_game_minute(10000);
	}
	func_35(0);
	iVar0 = func_36(0);
	if (func_37(iVar0))
	{
		iVar1 = func_38(iVar0);
		if (iVar1 == 4)
		{
			_0x1096603b519c905f(func_39(uParam0->f_1, func_34() != -1));
		}
	}
	func_40(0);
	_0x18ff3110cf47115d(Global_35, 9, 0);
	func_41();
	start_audio_scene(func_42(uParam0->f_1));
}

void func_3(int iParam0, int iParam1)
{
	if (!func_43(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

void func_4(var uParam0, var uParam1)
{
	if (func_44())
	{
		func_1(uParam0, uParam1);
	}
	else if (func_45(uParam0, uParam1))
	{
		func_46(uParam0);
		func_47(uParam0);
	}
	if (func_48(uParam0))
	{
		func_1(uParam0, uParam1);
	}
}

bool func_5(var uParam0, int iParam1)
{
	return func_49(*uParam0, iParam1);
}

void func_6(var uParam0, int iParam1)
{
	if (!func_5(uParam0, iParam1))
	{
		func_50(uParam0, iParam1);
	}
}

int func_7(int iParam0, int iParam1)
{
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(iParam0);
		}
	}
	if (iParam1 == 0 || is_screen_faded_in())
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0)
{
	func_51(uParam0);
	func_52(uParam0);
	func_53(uParam0);
	func_54(uParam0);
	func_55(uParam0);
	func_56(uParam0);
	func_57(uParam0);
	func_32(1);
	_display_hud_component(372886907);
}

void func_9(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_58(&(uParam0->f_503[iVar0]));
		iVar0++;
	}
	func_58(uParam0->f_503.f_3);
	if (_0x91a5f9cbebb9d936(uParam0->f_503.f_4))
	{
		remove_scenario_blocking_area(uParam0->f_503.f_4, false);
	}
}

void func_10(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_491.f_10))
	{
		_delete_anim_scene(uParam0->f_491.f_10);
		uParam0->f_491.f_10 = -1;
	}
}

void func_11(var uParam0)
{
	if (!func_5(uParam0, 8192))
	{
		return;
	}
	_0xbb6c707f20d955d4(3f);
	func_59(uParam0, 8192);
}

void func_12(var uParam0)
{
	if (does_cam_exist(uParam0->f_30))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_30, false);
	}
}

void func_13(var uParam0)
{
	if (does_cam_exist(uParam0->f_39))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_39, false);
	}
}

void func_14(var uParam0)
{
	if (uParam0->f_28 != 0 && _0x927b810e43e99932(&(uParam0->f_1)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_1));
		uParam0->f_28 = 0;
	}
}

void func_15(int* iParam0)
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

void func_16()
{
	if (trigger_music_event("FINGER_FILLET_CLEANUP"))
	{
	}
}

void func_17(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_60(&(uParam0->f_439), iVar0);
		iVar0++;
	}
}

void func_18(int* iParam0, int iParam1)
{
	if (does_entity_exist(*iParam0))
	{
		delete_object(iParam0);
	}
}

int func_19(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_61(iParam0))
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

void func_20(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_62(iParam0))
		{
			return;
		}
	}
	func_63(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_21(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_592[iParam1]))
	{
		return 1;
	}
	if (!is_entity_dead(&(uParam0->f_592[iParam1])))
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 2);
		}
		else
		{
			set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 1);
		}
	}
	uParam0->f_175.f_6[iParam1]->f_8 = 0;
	func_65(Global_1899750, &(uParam0->f_592[iParam1]));
	func_66(uParam0->f_592[iParam1], 690358560);
	func_67(uParam0->f_592[iParam1], 0);
	func_68(uParam0, iParam1, 0);
	func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
	func_69(uParam0, iParam1);
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		clear_ped_tasks(&(uParam0->f_592[iParam1]), 1, 0);
		func_6(uParam0, 128);
		func_70(uParam0->f_592[iParam1]);
		func_71(&(uParam0->f_592[iParam1]), -859971527, 0);
	}
	else if (!is_entity_dead(&(uParam0->f_592[iParam1])))
	{
		func_70(uParam0->f_592[iParam1]);
		set_blocking_of_non_temporary_events(&(uParam0->f_592[iParam1]), false);
		if (func_72(&(uParam0->f_592[iParam1])))
		{
			func_73(uParam0->f_55, 0);
			clear_ped_tasks(&(uParam0->f_592[iParam1]), 1, 0);
			func_74(func_19(&(uParam0->f_592[iParam1])), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
			uParam0->f_55 = -1;
		}
		else if (func_5(uParam0, 1024))
		{
			Global_1900325->f_25 = 0;
			func_22(uParam0->f_592[iParam1], 0, 1, 0);
		}
		else
		{
			Global_1900325->f_25 = &uParam0->f_592[iParam1];
			if (!func_75(uParam0, iParam1))
			{
				func_22(uParam0->f_592[iParam1], 0, 1, 0);
			}
		}
	}
	uParam0->f_592[iParam1]->f_59 = 0;
	uParam0->f_592[iParam1]->f_62 = -1;
	uParam0->f_592[iParam1] = 0;
	uParam0->f_592[iParam1]->f_1 = 255;
	release_sound_id(uParam0->f_592[iParam1]->f_130);
	return 1;
}

void func_22(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_23(var uParam0)
{
	if (func_5(uParam0, 8))
	{
		return;
	}
	func_6(uParam0, 8);
	func_76(uParam0);
	_text_database_delete(func_77(&Global_1900325));
	if (Global_1900325->f_1 == 1)
	{
		_text_database_delete("MGFFFAU");
		_text_database_delete("MGGENAU");
	}
	_0x57a197ad83f66bbf(uParam0->f_491);
	remove_anim_dict(func_78(0, 0));
	remove_anim_dict(func_78(0, 1));
	func_79();
	remove_clip_set(uParam0->f_491.f_4);
	remove_clip_set(uParam0->f_491.f_5);
	_0x531a78d6bf27014b(uParam0->f_491.f_6);
	set_model_as_no_longer_needed(uParam0->f_491.f_2);
	set_model_as_no_longer_needed(uParam0->f_491.f_3);
	set_model_as_no_longer_needed(uParam0->f_175.f_81);
	_0x798be43c9393632b("table_games_cam");
	if (_0x62de46f061caa468() > 0)
	{
		if (!is_entity_dead(Global_1900325->f_25))
		{
			_0x7d4e70a67a651c71(3);
		}
		else
		{
			_0x7d4e70a67a651c71(4);
		}
	}
	_0x37d7bdba89f13959(uParam0->f_175.f_81.f_36);
}

void func_24(int iParam0)
{
	if (Global_1900325->f_23 != iParam0)
	{
		Global_1900325->f_23 = iParam0;
	}
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_80(uParam0))
	{
		func_81(uParam0);
	}
}

int func_26()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_82(iVar0))
		{
			return func_84(func_83(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 2:
			return 52;
		case 1:
			return 53;
		case 3:
			return 33;
		case 4:
			return 93;
		case 7:
			return 97;
		case 6:
			return 81;
		case 5:
			return 70;
		case 8:
			return 83;
		default:
			break;
	}
	return -1;
}

void func_28(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_85(iParam0))
		{
			func_86(iParam0, 67108864);
		}
	}
	else if (func_85(iParam0))
	{
		func_87(iParam0, 67108864);
	}
}

void func_29(int iParam0)
{
	Global_1899528->f_61.f_4 = -1;
}

void func_30(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_88(&Global_0, 8);
	}
	if (!func_89() || func_34() != -1)
	{
		return;
	}
	func_88(&Global_0, 1);
}

void func_31(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = uParam0->f_1;
	iVar1 = uParam0->f_4;
	if (iParam1 == 1)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(500);
		}
	}
	func_33(0);
	_display_hud_component(372886907);
	set_player_control(player_id(), true, 0, false);
	freeze_entity_position(player_ped_id(), false);
	if (bParam2)
	{
		func_32(1);
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	_text_database_delete(func_77(iVar0));
	iVar2 = func_36(0);
	if (func_37(iVar2))
	{
		iVar3 = func_38(iVar2);
		if (iVar3 == 4)
		{
			_0x1096603b519c905f("");
		}
	}
	if (func_90())
	{
		func_91(iVar1, 0, 0);
	}
	else
	{
		func_91(iVar1, 0, 2);
	}
	func_92(iVar1, 1);
	stop_audio_scene(func_42(iVar0));
	_0x18ff3110cf47115d(player_ped_id(), 9, 1);
	func_35(1);
	func_40(1);
	set_everyone_ignore_player(player_id(), false);
	if (func_34() == -1)
	{
		if (func_93())
		{
			_set_milliseconds_per_game_minute(4000);
		}
		else
		{
			_set_milliseconds_per_game_minute(2000);
		}
	}
	set_player_control(player_id(), true, 0, false);
	if (func_93())
	{
		func_94(iVar0, uParam0->f_6, uParam0->f_2);
	}
	func_95(iVar0);
	func_41();
	set_script_with_name_hash_as_no_longer_needed(get_hash_of_this_script_name());
	func_96(0);
	terminate_this_thread();
}

void func_32(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_33(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

int func_34()
{
	return Global_1572887->f_12;
}

void func_35(bool bParam0)
{
	if (!bParam0)
	{
		func_97(0);
	}
	Global_1935689->f_2 = bParam0;
}

int func_36(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_99(func_98(iParam0));
}

char* func_39(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_100(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return func_100(bParam1, "OOJDO", "MGDOM");
		case 2:
			return func_100(bParam1, "OOJPO", "MGPKR");
		case 3:
			return func_100(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_101(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_102(Global_1935630, 4194304);
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

void func_41()
{
	if (!Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 1;
}

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Minigame_Dominoes_Scene";
		case 0:
			return "Minigame_Blackjack_Scene";
		case 2:
			return "Minigame_Poker_Scene";
		case 3:
			return "Minigame_Five_Finger_Fillet_Scene";
		default:
			break;
	}
	return "Minigame_Global_Scene";
}

bool func_43(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

bool func_44()
{
	if (!func_103(3))
	{
		return true;
	}
	return false;
}

bool func_45(var uParam0, var uParam1)
{
	if (func_5(uParam0, 1))
	{
		return true;
	}
	func_6(uParam0, 1);
	func_3(uParam1->f_12, 2);
	func_104(3, uParam1->f_14, 1073741824, 1);
	if (uParam1->f_13 == 1)
	{
		func_105(uParam1->f_12, uParam1->f_13, *uParam1, uParam1->f_4, uParam1->f_2);
		func_106(uParam1->f_14, uParam1->f_17);
		if (func_107(3))
		{
			func_6(uParam0, 16384);
		}
		if (!is_entity_dead(&(uParam1->f_23[0])))
		{
			uParam0->f_54 = &uParam1->f_23[0];
			uParam0->f_55 = func_19(uParam0->f_54);
			if (Global_1900325->f_4 == 98)
			{
				func_108(uParam0, -776039804);
			}
			else if (Global_1900325->f_4 == 9)
			{
				func_108(uParam0, -798342154);
			}
			else
			{
				func_108(uParam0, -121390149);
			}
		}
		else
		{
			func_108(uParam0, 785897420);
			func_6(uParam0, 65536);
		}
		func_24(0);
	}
	else if (is_entity_dead(Global_1900325->f_25))
	{
		func_108(uParam0, 785897420);
		func_6(uParam0, 65536);
	}
	else if (func_109(Global_1900325->f_25, Global_1900325->f_5, 1) > 2f)
	{
		func_108(uParam0, 785897420);
		func_6(uParam0, 65536);
	}
	else if (Global_1900325->f_35 == 1)
	{
		func_108(uParam0, 785897420);
		func_6(uParam0, 65536);
	}
	if (uParam0->f_18 == 0)
	{
		if (Global_1900325->f_4 == 76)
		{
			func_108(uParam0, -121390149);
		}
		else if (Global_1900325->f_4 == 26)
		{
			func_108(uParam0, -776039804);
		}
		else if (Global_1900325->f_4 == 92)
		{
			func_108(uParam0, -798342154);
		}
		else
		{
			func_108(uParam0, -121390149);
		}
	}
	iVar0 = 2;
	uParam0->f_1[iVar0] = 0;
	uParam0->f_1[iVar0]->f_1 = 9999;
	uParam0->f_1[iVar0]->f_2 = 20;
	uParam0->f_1[iVar0]->f_3 = 99;
	iVar0 = 0;
	uParam0->f_1[iVar0] = 0;
	uParam0->f_1[iVar0]->f_1 = 1;
	uParam0->f_1[iVar0]->f_2 = 30;
	uParam0->f_1[iVar0]->f_3 = 99;
	iVar0 = 1;
	uParam0->f_1[iVar0] = 1;
	uParam0->f_1[iVar0]->f_1 = 5;
	uParam0->f_1[iVar0]->f_2 = 6000;
	uParam0->f_1[iVar0]->f_3 = 0;
	iVar0 = 3;
	uParam0->f_1[iVar0] = 0;
	uParam0->f_1[iVar0]->f_1 = 9999;
	uParam0->f_1[iVar0]->f_2 = 6000;
	uParam0->f_1[iVar0]->f_3 = 99;
	uParam0->f_175.f_81.f_1 = { -0.05f, 0.755f, 0.003f };
	uParam0->f_175.f_81.f_4 = 90f;
	uParam0->f_527 = { 0.142f, 1.025f, -0.2f };
	*uParam0->f_527.f_8[0] = { -0.024f, 0.66f, -0.2f };
	*uParam0->f_527.f_8[1] = { -0.017f, 0.732f, -0.2f };
	*uParam0->f_527.f_8[2] = { -0.027f, 0.798f, -0.2f };
	*uParam0->f_527.f_8[3] = { -0.072f, 0.825f, -0.2f };
	*uParam0->f_527.f_8[4] = { -0.118f, 0.807f, -0.2f };
	*uParam0->f_527.f_8[5] = { -0.16f, 0.79f, -0.2f };
	*uParam0->f_527.f_32[0] = { -0.017f, 0.685f, -0.2f };
	*uParam0->f_527.f_32[1] = { -0.017f, 0.71f, -0.2f };
	*uParam0->f_527.f_32[2] = { -0.027f, 0.755f, -0.2f };
	*uParam0->f_527.f_32[3] = { -0.027f, 0.785f, -0.2f };
	*uParam0->f_527.f_32[4] = { -0.042f, 0.805f, -0.2f };
	*uParam0->f_527.f_32[5] = { -0.067f, 0.805f, -0.2f };
	*uParam0->f_527.f_32[6] = { -0.087f, 0.81f, -0.2f };
	*uParam0->f_527.f_32[7] = { -0.107f, 0.815f, -0.2f };
	*uParam0->f_527.f_32[8] = { -0.132f, 0.805f, -0.2f };
	*uParam0->f_527.f_32[9] = { -0.152f, 0.795f, -0.2f };
	uParam0->f_508[0] = 0f;
	uParam0->f_508.f_7[0] = 1.5f;
	uParam0->f_508[1] = 0.1f;
	uParam0->f_508.f_7[1] = 0.5f;
	uParam0->f_508[2] = 0.5f;
	uParam0->f_508.f_7[2] = 0.2f;
	uParam0->f_508[3] = 0.8f;
	uParam0->f_508.f_7[3] = 2f;
	uParam0->f_508[4] = 0f;
	uParam0->f_508.f_7[4] = 10f;
	uParam0->f_508[5] = 0f;
	uParam0->f_508.f_7[5] = 1f;
	uParam0->f_314.f_31 = { 0.15f, 1f, 0.25f };
	uParam0->f_314.f_34 = { -0.1f, 0.6f, -0.2f };
	set_current_ped_weapon(player_ped_id(), -1569615261, false, 0, false, false);
	_hide_ped_weapons(player_ped_id(), 2, false);
	func_110(&(uParam0->f_175));
	func_111(Global_1899750, Global_1900325->f_5 - Vector(4f, 0f, 0f));
	func_112(uParam0);
	func_113(&(uParam0->f_355), 0);
	func_28(func_27(func_26()), 1);
	return true;
}

void func_46(var uParam0)
{
	disable_control_action(0, -399233038, false);
	if (!func_5(uParam0, 16384) || func_5(uParam0, 32768))
	{
		_0x2804658eb7d8a50b(4, 128448435);
	}
	func_114(uParam0);
	func_115();
	_0xab0d553fe20a6e25(0.25f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	func_59(uParam0, 256);
}

void func_47(var uParam0)
{
	func_116(uParam0);
	if (uParam0->f_20 > 0)
	{
		if (!func_5(uParam0, 16384) || func_5(uParam0, 32768))
		{
			func_117(uParam0);
			func_118(uParam0);
			func_119(uParam0);
		}
	}
	switch (uParam0->f_20)
	{
		case 0:
			func_120(uParam0);
			break;
		case 1:
			func_121(uParam0);
			break;
		case 2:
			func_122(uParam0);
			break;
		case 3:
			func_123(uParam0);
			break;
		case 4:
			func_124(uParam0);
			break;
		case 5:
			func_125(uParam0);
			break;
		case 6:
			func_126(uParam0);
			break;
		case 7:
			func_127(uParam0);
			break;
		case 8:
			func_128(uParam0);
			break;
	}
	if (uParam0->f_20 > 0)
	{
		if (!func_5(uParam0, 16384) || func_5(uParam0, 32768))
		{
			func_129(uParam0, 0);
			func_129(uParam0, 1);
			func_130(uParam0);
			func_131(uParam0);
			func_132(uParam0);
		}
	}
}

bool func_48(var uParam0)
{
	if (func_5(uParam0, 128) && func_133(uParam0, 0) == 0)
	{
		return true;
	}
	return false;
}

bool func_49(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_50(var uParam0, int iParam1)
{
	func_134(uParam0, iParam1);
}

void func_51(var uParam0)
{
	if (!func_135(uParam0, 2))
	{
		return;
	}
	func_136(uParam0);
	_databinding_remove_data_entry(uParam0->f_1);
	func_137(uParam0, 2);
}

void func_52(var uParam0)
{
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
		_uistatemachine_destroy(-1399811580);
		_databinding_remove_data_entry(uParam0->f_1);
		*uParam0 = 0;
		func_137(uParam0, 1);
	}
}

void func_53(var uParam0)
{
	if (_uiflowblock_is_loaded(uParam0->f_81.f_6))
	{
		_uiflowblock_release(&(uParam0->f_81.f_6));
		_uistatemachine_destroy(-1151031648);
		_databinding_remove_data_entry(uParam0->f_81.f_7);
		uParam0->f_81.f_6 = 0;
		func_137(uParam0, 64);
	}
}

void func_54(var uParam0)
{
	if (func_135(uParam0, 128))
	{
		func_138(uParam0, 0);
		_databinding_write_data_bool(uParam0->f_81.f_8.f_2, 0);
		_databinding_write_data_bool(uParam0->f_81.f_12.f_2, 0);
		_databinding_write_data_bool(uParam0->f_81.f_16.f_2, 0);
		_databinding_write_data_bool(uParam0->f_81.f_20.f_2, 0);
		_databinding_write_data_bool(uParam0->f_81.f_24.f_2, 0);
		_databinding_write_data_bool(uParam0->f_81.f_28.f_2, 0);
		uParam0->f_81.f_35 = -2;
	}
}

void func_55(var uParam0)
{
	if (animpostfx_is_running(uParam0->f_81.f_36))
	{
		if (does_entity_exist(uParam0->f_81.f_5))
		{
			_0x56a786e87ff53478(uParam0->f_81.f_5);
		}
		_0xc5cb91d65852ed7e(uParam0->f_81.f_36);
		_0x5c9978a2a3dc3d0d();
	}
}

void func_56(var uParam0)
{
	if (does_entity_exist(uParam0->f_81.f_5))
	{
		func_15(&(uParam0->f_81.f_5));
	}
}

void func_57(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_139(uParam0, iVar0);
		iVar0++;
	}
}

void func_58(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_59(var uParam0, int iParam1)
{
	if (func_5(uParam0, iParam1))
	{
		func_140(uParam0, iParam1);
	}
}

void func_60(var uParam0, int iParam1)
{
	if (!is_entity_dead(&(uParam0->f_3[iParam1])))
	{
		func_22(uParam0->f_3[iParam1], 0, 1, 0);
	}
	func_141(uParam0->f_23[iParam1]);
	func_141(uParam0->f_30[iParam1]);
	func_142(uParam0, iParam1, 0);
	if (uParam0->f_47 == iParam1)
	{
		func_141(&(uParam0->f_49));
		uParam0->f_46 = 0;
		uParam0->f_47 = -1;
	}
}

bool func_61(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_34() != -1)
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

bool func_62(int iParam0)
{
	return iParam0 > -1;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_64(var uParam0)
{
	return !is_entity_dead(*uParam0);
}

void func_65(var uParam0, int iParam1)
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

void func_66(var uParam0, int iParam1)
{
	if (uParam0->f_65 != iParam1)
	{
		uParam0->f_65 = iParam1;
	}
}

void func_67(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
		{
			_0x67e21acc5c0c970c(*uParam0, iVar0, !bParam1);
		}
		iVar0++;
	}
}

void func_68(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_491.f_11 != -1)
	{
		if (iParam2 == 1)
		{
			_0xb1a196bafe650402(uParam0->f_491.f_11, &(uParam0->f_592[iParam1]));
		}
		else
		{
			_0xae6de22de0ed4554(uParam0->f_491.f_11, &(uParam0->f_592[iParam1]));
		}
	}
}

void func_69(var uParam0, int iParam1)
{
	if (does_entity_exist(uParam0->f_592[iParam1]->f_61))
	{
		delete_object(&(uParam0->f_592[iParam1]->f_61));
	}
}

void func_70(var uParam0)
{
	if (decor_exist_on(*uParam0, "FFF_Lives"))
	{
		decor_remove(*uParam0, "FFF_Lives");
	}
	if (decor_exist_on(*uParam0, "FFF_Time"))
	{
		decor_remove(*uParam0, "FFF_Time");
	}
	if (decor_exist_on(*uParam0, "FFF_Laps"))
	{
		decor_remove(*uParam0, "FFF_Laps");
	}
	if (decor_exist_on(*uParam0, "FFF_Rounds"))
	{
		decor_remove(*uParam0, "FFF_Rounds");
	}
	if (decor_exist_on(*uParam0, "FFF_Seated"))
	{
		decor_remove(*uParam0, "FFF_Seated");
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	func_143(iParam0, iParam1, bParam2, 1);
}

bool func_72(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	return func_61(iParam0);
}

void func_73(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_144(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_144(iParam0), 204, false);
	}
}

void func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (func_146(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_20(iParam0, 56, 1);
		func_25(&(Global_1359489->f_40), 1);
	}
	func_147(iParam0, 0);
	func_148(iParam0, 4, 0);
	func_149(iParam0);
	func_150(iParam0);
	func_151(iParam0, 37, 1);
	bVar0 = func_152(Global_1360165[iParam0], 0);
	iVar1 = func_153(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_154(iParam0, 64, 1))
	{
		func_151(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_151(iParam0, 33, 1);
		func_151(iParam0, 34, 1);
		func_155(iParam0, 1056964608, -1, 1061158912);
		func_156(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_20(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_20(iParam0, 35, 1);
			if (bParam8)
			{
				func_20(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_73(iParam0, 0);
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
		func_151(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_20(iParam0, 33, 1);
		func_156(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_25(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_141(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_20(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_157(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_154(iParam0, 45, 1))
	{
		func_151(iParam0, 45, 1);
	}
	func_158(iParam0, 16, 1);
	func_151(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_152(func_159(iParam0), 0))
		{
			func_160(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_75(var uParam0, int iParam1)
{
	return uParam0->f_592[func_161(iParam1)]->f_3 == 1;
}

void func_76(var uParam0)
{
	if (uParam0->f_491.f_11 != -1)
	{
		_0x53cb3970ba02e3cc(uParam0->f_491.f_11);
		uParam0->f_491.f_11 = -1;
	}
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		case 0:
			return "MGBLK";
		case 1:
			return "MGDOM";
		case 3:
			return "MGFFF";
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
		default:
			break;
	}
	return "";
}

char* func_78(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return "mini_games@fivefingerfillet_launch";
	}
	else if (iParam1 == 1)
	{
		return "mini_games@fivefingerfillet_female";
	}
	return "mini_games@fivefingerfillet";
}

void func_79()
{
	_0x4eddd9e9ca5af985(-1103796964);
}

bool func_80(var uParam0)
{
	return func_162(*uParam0, 1);
}

void func_81(var uParam0)
{
	func_163(uParam0, 0f);
}

bool func_82(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return &(Global_1935369->f_5[iParam0]);
}

int func_83()
{
	return Global_1894899->f_2;
}

int func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_85(int iParam0)
{
	return func_165(iParam0, 67108864);
}

void func_86(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_87(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_89()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_90()
{
	return Global_1899528->f_2 == 1;
}

void func_91(int iParam0, bool bParam1, int iParam2)
{
	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_167(iParam0) && !func_168(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_169(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_167(iParam0))
	{
		iParam2 = -1;
	}
	if (func_170(iParam0) == 3 || (func_170(iParam0) == 1 && _0x01f4d242765c6b24(func_169(iParam0))))
	{
		func_171(func_38(iParam0), func_169(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_172(0, 1, 0)) && !func_173(&Global_1935630, 32768))
		{
			iVar0 = func_174(iParam0);
			if (iVar0 != -1)
			{
				func_96(0);
			}
			else if (func_38(iParam0) == 8)
			{
				iVar0 = func_175();
				if (iVar0 != -1)
				{
					func_96(0);
				}
			}
		}
	}
	func_176(iParam0, 0);
	if (func_36(0) == iParam0)
	{
		func_40(1);
		func_177(0);
		func_178(1);
	}
	func_179(iParam0, 1);
	func_180(iParam0);
}

void func_92(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_181(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_169(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_169(iParam0)))
		{
			_0xca41e86545413b5b(func_38(iParam0), func_182(iParam0), func_183(iParam0), func_169(iParam0), Global_36);
		}
	}
	func_176(iParam0, 1);
	bParam1 = bParam1;
}

bool func_93()
{
	return Global_1894899 & 2 != 0;
}

void func_94(int iParam0, vector3 vParam1, int iParam4)
{
	iVar1 = func_184(iParam0, iParam4);
	iVar0 = func_185(iParam4, iVar1, vParam1);
	if (iVar0 != -1)
	{
		func_186(iParam4, iVar1, vParam1, 0);
	}
}

void func_95(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

void func_96(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_34() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_187(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_188();
		Global_1898077->f_9 = func_189(Global_1894899->f_2);
		func_190(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_97(bool bParam0)
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

int func_98(int iParam0)
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

int func_99(int iParam0)
{
	return iParam0 & 31;
}

char* func_100(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_103(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return false;
	}
	else if (Global_1935630->f_12)
	{
		return false;
	}
	else if (func_43(iParam0, 8))
	{
		return false;
	}
	func_191();
	_0x1c6306e5bc25c29c();
	if (!is_player_dead(player_id()))
	{
		set_all_random_peds_flee_this_frame(player_id());
	}
	set_ped_reset_flag(Global_35, 184, true);
	set_ped_reset_flag(Global_35, 175, true);
	func_192(iParam0, 1);
	_0x9f9a829c6751f3c7(player_id(), 41, 1);
	Global_1899528->f_207 = get_frame_count();
	return true;
}

void func_104(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	iVar4 = 0;
	func_193(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!_does_volume_exist(iVar0))
	{
		return;
	}
	iVar5 = create_itemset(true);
	if (is_itemset_valid(iVar5))
	{
		iVar2 = _0x886171a12f400b89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar3, iVar5));
			if (!is_entity_dead(iVar1))
			{
				if (func_194(iParam0, get_entity_model(iVar1)))
				{
					if (!is_entity_attached(iVar1))
					{
						if ((func_34() != -1 && network_has_control_of_entity(iVar1)) || func_34() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && is_entity_upright(iVar1, 90f))
							{
								freeze_entity_position(iVar1, true);
								set_entity_can_be_damaged(iVar1, false);
							}
							else
							{
								freeze_entity_position(iVar1, false);
								set_entity_can_be_damaged(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		_0x20a4bf0e09bee146(iVar5);
		destroy_itemset(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_58(iVar0);
}

void func_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1900325 = uParam0;
	Global_1900325->f_1 = uParam1;
	Global_1900325->f_2 = uParam2;
	Global_1900325->f_3 = uParam3;
	Global_1900325->f_4 = uParam4;
}

void func_106(vector3 vParam0, var uParam3)
{
	Global_1900325->f_5 = { vParam0 };
	Global_1900325->f_8 = uParam3;
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z + 0.1f);
	iVar5 = _0xbbe5b63effb08e68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
	if (iVar5 == 1)
	{
		fVar6 = (Global_1900325->f_5.f_2 - vVar0.z);
		if (fVar6 > 0.1f || fVar6 < -0.1f)
		{
		}
		else
		{
			Global_1900325->f_5.f_2 = vVar0.z;
		}
	}
}

bool func_107(int iParam0)
{
	return Global_1899528->f_61.f_4 != -1;
}

void func_108(var uParam0, int iParam1)
{
	if ((uParam0->f_18 != iParam1 && iParam1 >= -798342154) && iParam1 <= 785897420)
	{
		uParam0->f_18 = iParam1;
	}
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_110(var uParam0)
{
	_hide_hud_component(372886907);
	func_195(&(uParam0->f_131));
	uParam0->f_81.f_36 = "OJFiveFinger";
}

void func_111(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

void func_112(var uParam0)
{
	if (uParam0->f_18 == 785897420)
	{
		func_196(0);
	}
	else
	{
		func_196(Global_1900325->f_23);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_64(uParam0->f_592[iVar0]) && is_ped_a_player(&(uParam0->f_592[iVar0])))
		{
			uParam0->f_592[iVar0]->f_6 = 0;
		}
		iVar0++;
	}
}

void func_113(var uParam0, int iParam1)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 41)
	{
		iVar0 = iVar1;
		if (iParam1 == 0 || func_197(iVar0))
		{
			func_198(uParam0, iVar0);
		}
		iVar1++;
	}
}

void func_114(var uParam0)
{
	if ((func_199(uParam0->f_21) && func_64(uParam0->f_592[uParam0->f_21])) && uParam0->f_592[uParam0->f_21]->f_64 < 29)
	{
		if (is_player_control_on(player_id()))
		{
			set_player_control(player_id(), false, 256, false);
		}
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
	}
	else if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
}

void func_115()
{
	Global_1905944->f_5695 = 1;
}

void func_116(var uParam0)
{
	if (func_5(uParam0, 16384) && !func_5(uParam0, 32768))
	{
		if (func_107(3))
		{
		}
		else if (!is_entity_dead(Global_35))
		{
			if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
			{
			}
			else
			{
				func_6(uParam0, 32768);
			}
		}
	}
}

void func_117(var uParam0)
{
	if ((uParam0->f_20 > 1 && uParam0->f_20 < 6) && !func_200(uParam0))
	{
		if (!func_201(&(uParam0->f_355), 6))
		{
			func_32(1);
		}
		func_57(&(uParam0->f_175));
		func_202(uParam0, 1);
	}
}

void func_118(var uParam0)
{
	if (func_5(uParam0, 64))
	{
		return;
	}
	iVar0 = 0;
	if (Global_1900325->f_34 == 0)
	{
		iVar0 = 1;
	}
	if (func_203(uParam0, iVar0, player_ped_id(), player_id(), 0))
	{
	}
}

void func_119(var uParam0)
{
	if ((((((uParam0->f_20 != 1 || uParam0->f_18 == 785897420) || func_133(uParam0, 0) == 0) || uParam0->f_592[uParam0->f_21]->f_3 == 1) || !func_5(uParam0, 64)) || func_5(uParam0, 128)) || func_5(uParam0, 1024))
	{
		return;
	}
	iVar0 = func_204(uParam0);
	if (iVar0 == -1 || func_64(uParam0->f_592[iVar0]))
	{
		return;
	}
	if (Global_1900325->f_1 == 1)
	{
		if (!is_entity_dead(uParam0->f_54))
		{
			if (!func_146(uParam0->f_55))
			{
				func_205(uParam0->f_55, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			if (func_146(uParam0->f_55))
			{
				func_203(uParam0, iVar0, uParam0->f_54, 255, 1);
				return;
			}
		}
	}
	else if (uParam0->f_53 == 0)
	{
		if (Global_1900325->f_35 == 0 && !is_entity_dead(Global_1900325->f_25))
		{
			set_entity_as_mission_entity(Global_1900325->f_25, true, false);
			if (func_203(uParam0, iVar0, Global_1900325->f_25, 255, 4))
			{
				Global_1900325->f_25 = 0;
				return;
			}
		}
	}
	else if (!is_entity_dead(uParam0->f_54))
	{
		if (func_203(uParam0, iVar0, uParam0->f_54, 255, 1))
		{
			uParam0->f_54 = 0;
			if (does_entity_exist(uParam0->f_59))
			{
				uParam0->f_592[iVar0]->f_60 = uParam0->f_59;
				uParam0->f_59 = 0;
			}
			return;
		}
	}
}

void func_120(var uParam0)
{
	func_206(uParam0);
	if (func_207(uParam0))
	{
		if (Global_1900325->f_1 == 1 || Global_1900325->f_37 == 0)
		{
			func_208(func_78(0, 0));
		}
		if (func_209(uParam0))
		{
			func_202(uParam0, 1);
		}
	}
}

void func_121(var uParam0)
{
	if (func_5(uParam0, 16384) && !func_5(uParam0, 32768))
	{
		return;
	}
	if (!func_5(uParam0, 524288))
	{
		func_210(&Global_1900325);
		func_6(uParam0, 524288);
	}
	if ((!func_211(uParam0, 1) && func_200(uParam0)) && func_212(uParam0))
	{
		func_202(uParam0, 2);
		func_213(uParam0);
		func_214(uParam0, 0, 0);
		func_214(uParam0, 1, 0);
		func_215(uParam0);
	}
}

void func_122(var uParam0)
{
	if (func_216(uParam0))
	{
		func_202(uParam0, 6);
		func_32(1);
		func_57(&(uParam0->f_175));
		func_217();
	}
	else if (func_218(&(uParam0->f_175), 7))
	{
		func_6(uParam0, 2048);
		func_219(uParam0, uParam0->f_18);
		func_108(uParam0, 785897420);
		func_202(uParam0, 1);
		func_32(1);
		func_57(&(uParam0->f_175));
		func_217();
	}
	else if (func_220(uParam0) || uParam0->f_18 == 785897420)
	{
		func_202(uParam0, 3);
		uParam0->f_61 = 1;
		func_32(1);
		func_57(&(uParam0->f_175));
		func_217();
	}
	else
	{
		func_221(uParam0);
	}
}

void func_123(var uParam0)
{
	if (func_222(uParam0))
	{
		func_202(uParam0, 4);
	}
}

void func_124(var uParam0)
{
	if (func_223(uParam0))
	{
		func_224(uParam0);
		func_202(uParam0, 5);
	}
}

void func_125(var uParam0)
{
	if (func_216(uParam0))
	{
		func_202(uParam0, 6);
	}
	else
	{
		if (func_225(uParam0->f_592[uParam0->f_50]))
		{
			func_226(uParam0, 4096, uParam0->f_50);
			func_227(uParam0);
		}
		func_228(uParam0);
		func_224(uParam0);
	}
}

void func_126(var uParam0)
{
	func_229(uParam0);
	if (func_230(uParam0))
	{
		func_231(uParam0);
		func_232();
		func_202(uParam0, 7);
	}
}

void func_127(var uParam0)
{
	if (func_233(uParam0))
	{
		uParam0->f_61 = 0;
		func_202(uParam0, 8);
	}
}

void func_128(var uParam0)
{
	if (func_234(uParam0))
	{
		func_235(uParam0);
		func_202(uParam0, 1);
	}
}

void func_129(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_592[iParam1]) || is_entity_dead(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	func_236(uParam0, iParam1);
	switch (uParam0->f_592[iParam1]->f_64)
	{
		case 0:
			func_237(uParam0, iParam1);
			break;
		case 1:
			func_238(uParam0, iParam1);
			break;
		case 2:
			func_239(uParam0, iParam1);
			break;
		case 3:
			func_240(uParam0, iParam1);
			break;
		case 4:
			func_241(uParam0, iParam1);
			break;
		case 5:
			func_242(uParam0, iParam1);
			break;
		case 6:
			func_243(uParam0, iParam1);
			break;
		case 7:
			func_244(uParam0, iParam1);
			break;
		case 8:
			func_245(uParam0, iParam1);
			break;
		case 9:
			func_246(uParam0, iParam1);
			break;
		case 10:
			func_247(uParam0, iParam1);
			break;
		case 11:
			func_248(uParam0, iParam1);
			break;
		case 12:
			func_249(uParam0, iParam1);
			break;
		case 13:
			func_250(uParam0, iParam1);
			break;
		case 14:
			func_251(uParam0, iParam1);
			break;
		case 15:
			func_252(uParam0, iParam1);
			break;
		case 16:
			func_253(uParam0, iParam1);
			break;
		case 17:
			func_254(uParam0, iParam1);
			break;
		case 18:
			func_255(uParam0, iParam1);
			break;
		case 19:
			func_256(uParam0, iParam1);
			break;
		case 20:
			func_257(uParam0, iParam1);
			break;
		case 21:
			func_258(uParam0, iParam1);
			break;
		case 22:
			func_259(uParam0, iParam1);
			break;
		case 23:
			func_260(uParam0, iParam1);
			break;
		case 24:
			func_261(uParam0, iParam1);
			break;
		case 25:
			func_262(uParam0, iParam1);
			break;
		case 26:
			func_263(uParam0, iParam1);
			break;
		case 27:
			func_264(uParam0, iParam1);
			break;
		case 28:
			func_265(uParam0, iParam1);
			break;
		case 29:
			func_266(uParam0, iParam1);
			break;
		case 30:
			func_267(uParam0, iParam1);
			break;
		case 31:
			func_268(uParam0, iParam1);
			break;
		case 32:
			func_269(uParam0, iParam1);
			break;
	}
	if (func_64(uParam0->f_592[iParam1]))
	{
		func_270(uParam0, iParam1);
		func_271(uParam0, iParam1);
		func_272(uParam0, iParam1);
		func_273(uParam0->f_592[iParam1]);
		func_274(uParam0, iParam1);
		func_275(uParam0, iParam1);
	}
}

void func_130(var uParam0)
{
	if (func_276(Global_1900325->f_5) || !func_277(uParam0))
	{
		func_14(&(uParam0->f_314));
		return;
	}
	else if (!func_278(uParam0))
	{
		return;
	}
	if (uParam0->f_50 == uParam0->f_21 && !_0xa24c1d341c6e0d53(1, 0, 0))
	{
		if ((uParam0->f_592[uParam0->f_21]->f_64 == 18 || uParam0->f_592[uParam0->f_21]->f_64 == 17) || uParam0->f_592[uParam0->f_21]->f_64 == 20)
		{
			disable_control_action(0, -771458680, false);
			disable_control_action(0, -1450761377, false);
		}
	}
	if (func_279(uParam0, uParam0->f_50))
	{
		func_280(uParam0, 5);
	}
	else if (func_281(uParam0))
	{
		disable_control_action(0, -771458680, false);
		disable_control_action(0, -1450761377, false);
		func_280(uParam0, 3);
	}
	else if (func_282(uParam0))
	{
		disable_control_action(0, -771458680, false);
		disable_control_action(0, -1450761377, false);
		func_280(uParam0, 4);
		_0xe296208c273bd7f0(0, 0, 0, 17, 1, 1);
	}
	else
	{
		func_280(uParam0, 2);
	}
}

void func_131(var uParam0)
{
	func_283(uParam0);
	if (func_284() || func_135(&(uParam0->f_175), 512))
	{
		func_57(&(uParam0->f_175));
	}
	func_285(uParam0);
	if (func_286(uParam0))
	{
		uParam0->f_175.f_119 = 0;
	}
	else if (uParam0->f_18 != 785897420 && !func_220(uParam0))
	{
		uParam0->f_175.f_119 = 1;
	}
	else
	{
		uParam0->f_175.f_119 = 2;
	}
	iVar0 = func_161(uParam0->f_21);
	iVar1 = func_287(1);
	switch (uParam0->f_175.f_119)
	{
		case 0:
			func_136(&(uParam0->f_175));
			break;
		case 1:
			func_288(&(uParam0->f_175), 0, 4);
			func_288(&(uParam0->f_175), 1, 8);
			func_289(&(uParam0->f_175), 0, 16);
			func_289(&(uParam0->f_175), 1, 32);
			func_290(&(uParam0->f_175), 0, _create_var_string(2, "MGFFF_UI_MONEY"));
			func_291(&(uParam0->f_175), 0, _create_var_string(2, "CASH_STRING", iVar1));
			func_292(&(uParam0->f_175), 1);
			func_292(&(uParam0->f_175), 2);
			func_292(&(uParam0->f_175), 3);
			func_293(&(uParam0->f_175), 1);
			func_294(&(uParam0->f_175));
			if (!func_295(uParam0, uParam0->f_21))
			{
				if (iVar1 < Global_1900325->f_24)
				{
					func_296(uParam0, 6, 1, 1);
					uParam0->f_592[uParam0->f_21]->f_2 = 1;
					uParam0->f_592[uParam0->f_21]->f_5 = 1;
					uParam0->f_592[uParam0->f_21]->f_4 = 0;
					func_297(uParam0->f_592[uParam0->f_21], 0);
					return;
				}
				func_298(uParam0);
				if (func_299(uParam0))
				{
					if (((!func_201(&(uParam0->f_355), 24) && !func_201(&(uParam0->f_355), 25)) && !func_201(&(uParam0->f_355), 26)) && !func_201(&(uParam0->f_355), 27))
					{
						func_296(uParam0, 5, 1, 1);
					}
					func_300(uParam0, 0);
				}
				else
				{
					func_301(&(uParam0->f_355), 5);
					func_139(&(uParam0->f_175), 0);
				}
				if (func_302(uParam0))
				{
					func_300(uParam0, 7);
				}
				else
				{
					func_139(&(uParam0->f_175), 7);
				}
				if (func_218(&(uParam0->f_175), 0))
				{
					func_32(1);
					func_57(&(uParam0->f_175));
					uParam0->f_592[uParam0->f_21]->f_6 = 1;
					func_303(Global_1900325->f_24, 0);
					func_304(uParam0->f_592[iVar0]);
				}
			}
			break;
		case 2:
			if (uParam0->f_18 == 785897420)
			{
				func_305(uParam0);
				if (!func_306(uParam0->f_22))
				{
					func_292(&(uParam0->f_175), 0);
					func_292(&(uParam0->f_175), 1);
				}
				else
				{
					func_290(&(uParam0->f_175), 0, _create_var_string(2, "MGFFF_UI_REC_LAPS"));
					func_291(&(uParam0->f_175), 0, _create_var_string(2, "NUMBER", &(Global_40.f_11883[uParam0->f_22])));
					func_290(&(uParam0->f_175), 1, _create_var_string(2, "MGFFF_UI_REC_LONG"));
					func_291(&(uParam0->f_175), 1, _create_var_string(10, "NUMBER", func_308(func_307(&(Global_40.f_11883.f_26[uParam0->f_22]), 1), 109029619)));
					func_290(&(uParam0->f_175), 2, _create_var_string(2, "MGFFF_UI_REC_TIME"));
					func_291(&(uParam0->f_175), 2, _create_var_string(10, "NUMBER", func_308(func_307(&(Global_40.f_11883.f_13[uParam0->f_22]), 0), 109029619)));
				}
				func_292(&(uParam0->f_175), 3);
			}
			else
			{
				func_290(&(uParam0->f_175), 0, _create_var_string(2, "MGFFF_UI_POT"));
				func_291(&(uParam0->f_175), 0, _create_var_string(2, "CASH_STRING", Global_1900325->f_24 * 2));
				func_290(&(uParam0->f_175), 1, _create_var_string(10, "MGFFF_UI_WON", uParam0->f_592[uParam0->f_21]->f_63));
				func_291(&(uParam0->f_175), 1, _create_var_string(2, "NUMBER", func_309(uParam0->f_592[uParam0->f_21])));
				func_290(&(uParam0->f_175), 2, _create_var_string(10, "MGFFF_UI_WON", uParam0->f_592[iVar0]->f_63));
				func_291(&(uParam0->f_175), 2, _create_var_string(2, "NUMBER", func_309(uParam0->f_592[iVar0])));
				func_292(&(uParam0->f_175), 3);
				if (uParam0->f_18 == -121390149)
				{
					func_310(uParam0);
				}
				else if (uParam0->f_18 == -776039804)
				{
					func_311(uParam0);
				}
				else if (uParam0->f_18 == -798342154)
				{
					func_312(uParam0);
				}
			}
			func_313(uParam0);
			func_293(&(uParam0->f_175), 1);
			break;
	}
}

void func_132(var uParam0)
{
	if (!func_80(&(uParam0->f_439.f_37)))
	{
		func_81(&(uParam0->f_439.f_37));
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&uParam0->f_439[iVar0] > 1 && is_entity_dead(&(uParam0->f_439.f_3[iVar0])))
		{
			func_60(&(uParam0->f_439), iVar0);
		}
		switch (&uParam0->f_439[iVar0])
		{
			case 0:
				if (func_314(uParam0, iVar0))
				{
					func_142(&(uParam0->f_439), iVar0, 1);
				}
				break;
			case 1:
				if (func_315(uParam0, iVar0))
				{
					func_142(&(uParam0->f_439), iVar0, 2);
				}
				break;
			case 2:
				func_316(uParam0, iVar0);
				if (func_317(uParam0, iVar0))
				{
					func_142(&(uParam0->f_439), iVar0, 3);
				}
				break;
			case 3:
				func_318(uParam0, iVar0);
				func_316(uParam0, iVar0);
				if (func_319(uParam0, iVar0))
				{
					func_142(&(uParam0->f_439), iVar0, 4);
				}
				break;
			case 4:
				func_60(&(uParam0->f_439), iVar0);
				break;
		}
		iVar0++;
	}
}

int func_133(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_64(uParam0->f_592[iVar1]))
		{
			if (iParam1 == 0 || is_ped_a_player(&(uParam0->f_592[iVar1])))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_135(var uParam0, int iParam1)
{
	return func_49(uParam0->f_118, iParam1);
}

void func_136(var uParam0)
{
	func_288(uParam0, 0, 4);
	func_288(uParam0, 1, 8);
	func_289(uParam0, 0, 16);
	func_289(uParam0, 1, 32);
	func_320(uParam0);
	func_293(uParam0, 0);
	func_292(uParam0, 0);
	func_292(uParam0, 1);
	func_292(uParam0, 2);
	func_292(uParam0, 3);
	func_294(uParam0);
}

void func_137(var uParam0, int iParam1)
{
	if (func_135(uParam0, iParam1))
	{
		func_140(&(uParam0->f_118), iParam1);
	}
}

void func_138(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_80(&(uParam0->f_81.f_32)))
		{
			func_141(&(uParam0->f_81.f_32));
			_databinding_write_data_bool(uParam0->f_81.f_8.f_3, 0);
		}
	}
	else
	{
		if (!func_80(&(uParam0->f_81.f_32)))
		{
			func_81(&(uParam0->f_81.f_32));
		}
		if (func_321(&(uParam0->f_81.f_32), 5f))
		{
			func_81(&(uParam0->f_81.f_32));
			_databinding_write_data_bool(uParam0->f_81.f_8.f_3, 0);
			_databinding_write_data_bool(uParam0->f_81.f_8.f_3, 1);
		}
	}
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_130))
		{
			_uiprompt_delete(uParam0->f_130);
		}
	}
	else if (func_322(&(uParam0->f_120[iParam1])))
	{
		func_323(uParam0->f_120[iParam1], 1, 1);
	}
}

void func_140(var uParam0, int iParam1)
{
	func_324(uParam0, iParam1);
}

void func_141(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	if (uParam0[iParam1] != iParam2)
	{
		(*uParam0)[iParam1] = iParam2;
	}
}

int func_143(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_325(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_326(iParam1);
	return func_327(iParam0, iVar0, bParam2, bParam2);
}

int func_144(int iParam0)
{
	if (!func_62(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_145(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0)
{
	return func_328(iParam0, 16, 1);
}

void func_147(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_329(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_148(iParam0, 1, 0);
		}
	}
	func_148(iParam0, 16, bParam1);
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	if (!func_62(iParam0))
	{
		return;
	}
	func_330(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_149(int iParam0)
{
	func_148(iParam0, 8, 0);
}

void func_150(int iParam0)
{
	func_20(iParam0, 36, 1);
}

void func_151(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_62(iParam0))
		{
			return;
		}
	}
	func_63(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_152(int iParam0, int iParam1)
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
	if (func_49(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_49(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_49(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_49(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_49(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_49(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_49(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_49(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_153(int iParam0, bool bParam1)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_331(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_154(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_62(iParam0))
		{
			return false;
		}
	}
	func_63(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_145(iParam0))
	{
		iVar1 = func_144(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_332(iParam0);
		}
	}
	if (func_154(iParam0, 5, 1))
	{
		set_ped_config_flag(func_144(iParam0), 137, true);
	}
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_151(iParam0, 50, 1);
		func_151(iParam0, 48, 1);
		func_151(iParam0, 49, 1);
		func_151(iParam0, 51, 1);
		func_151(iParam0, 52, 1);
		func_151(iParam0, 54, 1);
		func_151(iParam0, 55, 1);
	}
	else
	{
		func_20(iParam0, 50, 1);
		func_20(iParam0, 48, 1);
		func_20(iParam0, 49, 1);
		func_20(iParam0, 51, 1);
		if (bParam3)
		{
			func_20(iParam0, 54, 1);
		}
		else
		{
			func_151(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_20(iParam0, 52, 1);
			if (bParam3)
			{
				func_20(iParam0, 55, 1);
			}
		}
		else
		{
			func_151(iParam0, 52, 1);
			if (!bParam3)
			{
				func_151(iParam0, 55, 1);
			}
		}
	}
}

void func_157(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (func_146(iParam0))
	{
		if (!func_333(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_154(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_153(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_144(iParam0);
	if (((does_entity_exist(iVar1) && func_334(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_20(iParam0, 2, 1);
	}
	else
	{
		func_335(iParam0);
		func_20(iParam0, 1, 1);
	}
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_145(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_159(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_160(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_62(iParam1))
	{
		return;
	}
	iVar0 = func_159(iParam1);
	if (func_336(iParam1))
	{
		if (!func_337(iParam1))
		{
			return;
		}
	}
	func_151(iParam1, 39, 1);
	func_338(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_338(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_338(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_20(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_339(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_161(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_162(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_163(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_340() - fParam1);
	func_341(uParam0, 1);
	func_342(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_164(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_167(int iParam0)
{
	iVar0 = func_343(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_168(int iParam0)
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
		iVar0 = func_170(iParam0);
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

int func_169(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_170(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_344(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_34() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_172(int iParam0, bool bParam1, bool bParam2)
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
		if (func_345())
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
		iVar0 = func_182(&(Global_1898164->f_1[0]));
		if (func_346(iVar0) && func_347((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_37(&(Global_1898164->f_1[0])))
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

bool func_173(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_174(int iParam0)
{
	switch (func_38(iParam0))
	{
		case 1:
			iVar0 = func_182(iParam0);
			return func_348(iVar0);
		case 8:
			iVar1 = func_182(iParam0);
			if (func_347((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_349(iVar1);
			}
			break;
	}
	return -1;
}

int func_175()
{
	if (!func_350((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_350((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_350((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_350((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_350((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_350((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_350((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_176(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_351(iParam0, iParam1);
}

int func_177(bool bParam0)
{
	if (!bParam0 && func_352(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_178(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_179(int iParam0, bool bParam1)
{
	if (func_34() != -1)
	{
		return;
	}
	if (func_36(0) != iParam0)
	{
		return;
	}
	if (func_353(iParam0))
	{
		if (bParam1)
		{
			func_354(-525676072);
		}
		else
		{
			func_355(-525676072);
		}
	}
}

int func_180(int iParam0)
{
	return func_357(func_356(iParam0));
}

bool func_181(int iParam0)
{
	return func_343(iParam0) == 0;
}

int func_182(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_358(func_98(iParam0));
}

int func_183(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_359(func_98(iParam0));
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 0:
			return 1;
		case 6:
			return 7;
		case 1:
			switch (iParam1)
			{
				case 5:
					return 9;
				case 38:
					return 8;
				case 69:
					return 10;
				case 71:
					return 2;
				case 98:
					return 9;
				case 9:
					return 8;
				default:
					break;
			}
			return 2;
		case 3:
			switch (iParam1)
			{
				case 26:
					return 12;
				case 92:
					return 11;
				default:
					break;
			}
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		default:
			break;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_276(vParam2))
	{
		return -1;
	}
	iVar2 = func_360(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_361(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_361(iVar0) == iParam1 && func_362(iVar0) == iParam0) && iVar2 == func_363(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_186(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_362(iVar0) == iParam0 && func_361(iVar0) == iParam1)
		{
			func_364(iVar0, -1);
			func_365(iVar0, 0);
			func_366(iVar0, 0);
			if (does_blip_exist(&(Global_36308[iVar0])))
			{
				if (bParam5)
				{
					set_radar_zoom(&(Global_36308[iVar0]));
				}
				remove_blip(Global_36308[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

void func_187(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_188()
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

int func_189(int iParam0)
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

void func_190(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_191()
{
	func_367(0);
}

void func_192(int iParam0, int iParam1)
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
	if (func_368(iParam0) || iParam0 == 4)
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

void func_193(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*iParam0))
	{
		*iParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_369());
	}
}

bool func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 325252933:
					return true;
				case -1740828633:
				case 1609095284:
					return true;
				case -1510839859:
				case 1407600554:
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == -1243444973)
			{
				return true;
			}
			if (iParam1 == -289651159)
			{
				return true;
			}
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == 325252933)
			{
				return true;
			}
			if (iParam1 == -1763848034)
			{
				return true;
			}
			if (iParam1 == 2096698905)
			{
				return true;
			}
			if (iParam1 == 375867283)
			{
				return true;
			}
			if (iParam1 == 1999055955)
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == -1025740342)
			{
				return true;
			}
			if (iParam1 == -1937484496)
			{
				return true;
			}
			if (iParam1 == 463271055)
			{
				return true;
			}
			if (iParam1 == 1186910594)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == 264425748)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == -1443906703)
			{
				return true;
			}
			if (iParam1 == -1618805595)
			{
				return true;
			}
			if (iParam1 == 1230724566)
			{
				return true;
			}
			if (iParam1 == 1600083684)
			{
				return true;
			}
			if (iParam1 == -1006095118)
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_195(var uParam0)
{
	if (func_322(*uParam0))
	{
		func_323(uParam0, 1, 0);
	}
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_5 = 1;
}

void func_196(int iParam0)
{
	iVar0 = func_370(iParam0);
	if (Global_1900325->f_24 != iVar0)
	{
		Global_1900325->f_24 = iVar0;
	}
}

bool func_197(int iParam0)
{
	if ((((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4) || iParam0 == 32) || iParam0 == 33)
	{
		return false;
	}
	return true;
}

void func_198(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0;
	uParam0->f_42[iParam1] = 0;
}

bool func_199(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 2);
}

bool func_200(var uParam0)
{
	if (uParam0->f_18 == 785897420)
	{
		if (func_133(uParam0, 1) == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return func_133(uParam0, 0) == 2;
}

bool func_201(var uParam0, int iParam1)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if ((uParam0[iParam1] != 0 && iVar0 != 0) && uParam0[iParam1] == iVar0)
	{
		return true;
	}
	return false;
}

void func_202(var uParam0, int iParam1)
{
	if (uParam0->f_20 != iParam1)
	{
		uParam0->f_20 = iParam1;
	}
}

bool func_203(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_64(uParam0->f_592[iParam1]))
	{
		return false;
	}
	uParam0->f_592[iParam1]->f_62 = iParam1;
	uParam0->f_592[iParam1] = iParam2;
	uParam0->f_592[iParam1]->f_1 = iParam3;
	if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (uParam0->f_62 == 1)
		{
			func_371();
		}
		uParam0->f_62 = 0;
	}
	uParam0->f_592[iParam1]->f_63 = func_372(uParam0, iParam1);
	uParam0->f_592[iParam1]->f_11 = 0;
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		uParam0->f_21 = iParam1;
		func_6(uParam0, 64);
		func_373(uParam0->f_592[iParam1]);
		uParam0->f_592[iParam1]->f_6 = 0;
		uParam0->f_592[iParam1]->f_108 = 200;
		func_374(-859971527, &(uParam0->f_592[iParam1]), 0, 1);
	}
	else
	{
		set_blocking_of_non_temporary_events(&(uParam0->f_592[iParam1]), true);
		if (func_72(&(uParam0->f_592[iParam1])))
		{
			if (uParam0->f_55 == 11)
			{
				uParam0->f_592[iParam1]->f_11 = 1;
			}
			func_73(uParam0->f_55, 1);
		}
		else
		{
			set_ped_relationship_group_hash(&(uParam0->f_592[iParam1]), -225988669);
		}
		func_375(uParam0->f_592[iParam1]);
		uParam0->f_592[iParam1]->f_6 = 1;
		uParam0->f_592[iParam1]->f_108 = 100;
		func_373(uParam0->f_592[iParam1]);
		uParam0->f_64 = 0;
		uParam0->f_167 = { Global_1900325->f_26 };
		bVar1 = get_current_ped_weapon(&(uParam0->f_592[iParam1]), &iVar0, true, 0, true);
		if (bVar1 == 1 && iVar0 != -1569615261)
		{
			set_current_ped_weapon(&(uParam0->f_592[iParam1]), -1569615261, true, 0, false, false);
		}
	}
	if (iParam4 == 0)
	{
		uParam0->f_592[iParam1]->f_8 = func_376(uParam0, iParam1);
	}
	else
	{
		uParam0->f_592[iParam1]->f_8 = iParam4;
	}
	if (uParam0->f_592[iParam1]->f_8 == 1)
	{
		func_377(uParam0->f_592[iParam1], 6);
	}
	else if (uParam0->f_592[iParam1]->f_8 == 4)
	{
		func_377(uParam0->f_592[iParam1], 4);
	}
	else
	{
		func_377(uParam0->f_592[iParam1], 0);
	}
	func_214(uParam0, iParam1, 1);
	func_378(uParam0->f_592[iParam1], 1);
	func_379(uParam0, iParam1, 0);
	func_380(uParam0->f_592[iParam1], 1f);
	uParam0->f_592[iParam1]->f_2 = 0;
	uParam0->f_592[iParam1]->f_3 = 0;
	uParam0->f_592[iParam1]->f_4 = 0;
	uParam0->f_592[iParam1]->f_5 = 0;
	uParam0->f_592[iParam1]->f_12 = 0;
	uParam0->f_592[iParam1]->f_130 = get_sound_id();
	uParam0->f_592[iParam1]->f_74 = -1f;
	uParam0->f_592[iParam1]->f_128 = 0;
	uParam0->f_592[iParam1]->f_29 = 0;
	uParam0->f_592[iParam1]->f_30 = 0;
	func_141(&(uParam0->f_592[iParam1]->f_23));
	func_141(&(uParam0->f_592[iParam1]->f_13));
	func_297(uParam0->f_592[iParam1], 0);
	if (uParam0->f_53 > 0 && !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		func_381(uParam0, 0);
	}
	func_68(uParam0, iParam1, 1);
	func_66(uParam0->f_592[iParam1], 746733444);
	func_67(uParam0->f_592[iParam1], 1);
	uParam0->f_175.f_6[iParam1]->f_8 = 0;
	uParam0->f_175.f_6[iParam1]->f_12 = "minigames_hud";
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (!func_382())
		{
			uParam0->f_175.f_6[iParam1]->f_13 = "avatar_arthur";
		}
		else
		{
			uParam0->f_175.f_6[iParam1]->f_13 = "avatar_john";
		}
	}
	else
	{
		uParam0->f_175.f_6[iParam1]->f_13 = "avatar_generic";
	}
	func_383(Global_1899750, &(uParam0->f_592[iParam1]), iParam1, 0);
	func_141(&(uParam0->f_175.f_6[iParam1]->f_9));
	return true;
}

int func_204(var uParam0)
{
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (iVar0 == -1 && !func_64(uParam0->f_592[iVar1]))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_205(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_145(iParam0))
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
			if (func_154(iParam0, 2, 1))
			{
				func_151(iParam0, 2, 1);
			}
			if (func_328(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_20(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_74(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_152(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_152(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_384(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_20(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_385(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_20(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_385(iParam0, 1);
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
			if (!func_154(iParam0, 44, 0))
			{
				func_20(iParam0, 44, 0);
			}
			if (func_386(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_385(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_151(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_156(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_387(iParam0, 0, 0, 1);
			}
			func_151(iParam0, 33, 1);
			func_151(iParam0, 34, 1);
			func_151(iParam0, 29, 1);
			if (!func_276(vVar0) && bParam7)
			{
				func_385(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_385(iParam0, 4);
			}
			else
			{
				func_385(iParam0, 5);
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
						func_384(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_388(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
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
				func_385(iParam0, 4);
			}
			else
			{
				func_385(iParam0, 5);
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
				if (func_389(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_390(iParam0, iParam13, 0);
						func_391(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_154(iParam0, 25, 0))
						{
							func_151(iParam0, 25, 0);
						}
						func_20(iParam0, 66, 0);
						func_385(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_385(iParam0, 5);
				}
				func_20(iParam0, 28, 1);
			}
			else
			{
				func_385(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_385(iParam0, 6);
			}
			break;
		case 6:
			if (func_152(Global_1360165[iParam0], 0))
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
					func_392(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_393(Global_1360165[iParam0], 1);
				}
			}
			func_385(iParam0, 7);
		case 7:
			func_156(iParam0, bParam9, bParam15, 0);
			func_148(iParam0, 4, bParam11);
			func_150(iParam0);
			if (bParam20)
			{
				if (func_394(Global_1360165[iParam0]))
				{
				}
			}
			func_395(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_385(iParam0, 0);
			func_396(iParam0, 16, 1);
			func_151(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_206(var uParam0)
{
	if (func_5(uParam0, 2))
	{
		return;
	}
	func_6(uParam0, 2);
	_text_database_request(func_77(&Global_1900325));
	if (Global_1900325->f_1 == 1)
	{
		_text_database_request("MGFFFAU");
		_text_database_request("MGGENAU");
	}
	uParam0->f_491 = "Script_FiveFingerFillet";
	_0x2b6529c54d29037a(uParam0->f_491);
	request_anim_dict(func_78(0, 0));
	request_anim_dict(func_78(0, 1));
	uParam0->f_491.f_4 = "facials@mini_games@generic@p_m_zero";
	request_clip_set(uParam0->f_491.f_4);
	uParam0->f_491.f_5 = "facials@mini_games@generic@gen_male";
	request_clip_set(uParam0->f_491.f_5);
	uParam0->f_491.f_6 = "MGFFF_Sounds";
	uParam0->f_491.f_7 = "KNIFE_IN_WOOD";
	uParam0->f_491.f_8 = "KNIFE_IN_FINGER";
	uParam0->f_491.f_9 = "FFF_KINIFE_IN_WOOD_SPEED";
	request_model(uParam0->f_491.f_2, false);
	request_model(uParam0->f_491.f_3, false);
	request_model(uParam0->f_175.f_81, false);
	_0x6a4d224fc7643941("table_games_cam");
	_0xed9582b3da8f02b4(4);
	_0x5199405eabfbd7f0(uParam0->f_175.f_81.f_36);
}

bool func_207(var uParam0)
{
	if (!func_5(uParam0, 2))
	{
		return false;
	}
	if (!func_5(uParam0, 4))
	{
		if (!_text_database_has_loaded(func_77(&Global_1900325)))
		{
			return false;
		}
		else if (Global_1900325->f_1 == 1 && !_text_database_has_loaded("MGFFFAU"))
		{
			return false;
		}
		else if (Global_1900325->f_1 == 1 && !_text_database_has_loaded("MGGENAU"))
		{
			return false;
		}
		else if (!_0x2c04d89a0fb4e244(uParam0->f_491))
		{
			return false;
		}
		else if (!has_anim_dict_loaded(func_78(0, 0)))
		{
			return false;
		}
		else if (!has_anim_dict_loaded(func_78(0, 1)))
		{
			return false;
		}
		else if (!func_397())
		{
			return false;
		}
		else if (!has_clip_set_loaded(uParam0->f_491.f_4))
		{
			return false;
		}
		else if (!has_clip_set_loaded(uParam0->f_491.f_5))
		{
			return false;
		}
		else if (!has_model_loaded(uParam0->f_491.f_2))
		{
			return false;
		}
		else if (!has_model_loaded(uParam0->f_491.f_3))
		{
			return false;
		}
		else if (!has_model_loaded(uParam0->f_175.f_81))
		{
			return false;
		}
		else if (!_0xdd0b7c5ae58f721d("table_games_cam"))
		{
			return false;
		}
		else if (!_0xd9130842d7226045(uParam0->f_491.f_6, 1))
		{
			return false;
		}
		else if (!_0x5e420ff293ee5472())
		{
			return false;
		}
		else if (!func_398(&(uParam0->f_175)))
		{
			return false;
		}
		else if (!func_399(&(uParam0->f_175)))
		{
			return false;
		}
		else if (_0xbf2dd155b2adcd0a(uParam0->f_175.f_81.f_36))
		{
			return false;
		}
		_0xb727a847862cb00a("FiveFingerFillet");
		if (!_0xfdfc14799373283f("FiveFingerFillet"))
		{
			return false;
		}
		else if (!func_400(uParam0))
		{
			return false;
		}
		func_6(uParam0, 4);
	}
	return func_5(uParam0, 4);
}

void func_208(char* sParam0)
{
	Global_1900325->f_16[0] = (Global_1900325->f_8 - 90f);
	Global_1900325->f_16[1] = (Global_1900325->f_8 + 90f);
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z - 0.8f);
	iVar3 = 0;
	while (iVar3 < 2)
	{
		*Global_1900325->f_9[iVar3] = { get_anim_initial_offset_position(sParam0, "idle_01", vVar0, 0f, 0f, &(Global_1900325->f_16[iVar3]), 0f, 2) };
		Global_1900325->f_9[iVar3]->f_2 = vVar0.z;
		iVar3++;
	}
	if (Global_1900325->f_1 == 1)
	{
		Global_1900325->f_34 = 1;
	}
	else
	{
		Global_1900325->f_34 = 0;
	}
	Global_1900325->f_37 = 1;
}

bool func_209(var uParam0)
{
	fVar0 = (0.25f * 2f);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!_does_volume_exist(&(uParam0->f_503[iVar1])))
		{
			func_401(uParam0->f_503[iVar1], *Global_1900325->f_9[iVar1], 0f, 0f, 0f, fVar0, fVar0, 2.5f);
		}
		iVar1++;
	}
	if (!_does_volume_exist(uParam0->f_503.f_3))
	{
		func_402(&(uParam0->f_503.f_3), Global_1900325->f_5, 0f, 0f, Global_1900325->f_8, 4.5f, 4.5f, 2.5f);
	}
	if (_does_volume_exist(uParam0->f_503.f_3) && !_0x91a5f9cbebb9d936(uParam0->f_503.f_4))
	{
		uParam0->f_503.f_4 = _0x4c39c95ae5db1329(uParam0->f_503.f_3, func_34() == 0, 15);
	}
	return (((_does_volume_exist(&(uParam0->f_503[0])) && _does_volume_exist(&(uParam0->f_503[1]))) && _does_volume_exist(uParam0->f_503.f_3)) && _0x91a5f9cbebb9d936(uParam0->f_503.f_4));
}

void func_210(int iParam0)
{
	iVar0 = func_403(iParam0);
	if (iVar0 <= 10)
	{
		if (iVar0 <= 1)
		{
			StringCopy(&cVar1, "MG_HELP_UPDATED", 64);
		}
		else
		{
			StringCopy(&cVar1, "MG_HELP_REMINDER", 64);
		}
		switch (iParam0)
		{
			case 1:
				func_405(func_404(iParam0), &cVar1, 676312963, -1650465405, get_hash_key("help_menu"), "INPUT_FEED_INTERACT_GENERIC", 390152599, -2, 0, 0, 0, 0, 1, 1);
				break;
			case 3:
				func_405(func_404(iParam0), &cVar1, 676312963, 1974815632, get_hash_key("help_menu"), "INPUT_FEED_INTERACT_GENERIC", -1280897372, -2, 0, 0, 0, 0, 1, 1);
				break;
			case 2:
				func_405(func_404(iParam0), &cVar1, 676312963, 1243830185, get_hash_key("help_menu"), "INPUT_FEED_INTERACT_GENERIC", 348001928, -2, 0, 0, 0, 0, 1, 1);
				break;
			case 0:
				func_405(func_404(iParam0), &cVar1, 676312963, 595820042, get_hash_key("help_menu"), "INPUT_FEED_INTERACT_GENERIC", -747096482, -2, 0, 0, 0, 0, 1, 1);
				break;
		}
	}
}

bool func_211(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_592[iVar0]->f_3 == 1)
		{
			if (iParam1 == 1 || is_ped_a_player(&(uParam0->f_592[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_212(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_406(uParam0, iVar0) && !func_407(uParam0->f_592[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_213(var uParam0)
{
	if (func_5(uParam0, 2048) && !func_408(uParam0))
	{
		uParam0->f_52 = 0;
	}
	else if (uParam0->f_19 == 0)
	{
		func_59(uParam0, 2048);
		uParam0->f_52 = 0;
	}
	else
	{
		func_108(uParam0, uParam0->f_19);
		func_219(uParam0, 0);
		func_59(uParam0, 2048);
		uParam0->f_52 = 3;
	}
}

void func_214(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_592[iParam1]->f_99 = 0;
	uParam0->f_592[iParam1]->f_100 = 0;
	func_409(uParam0->f_592[iParam1], 0);
	uParam0->f_592[iParam1]->f_102 = 0;
	uParam0->f_592[iParam1]->f_103 = 0;
	uParam0->f_592[iParam1]->f_104 = 0;
	uParam0->f_592[iParam1]->f_105 = 0;
	uParam0->f_592[iParam1]->f_106 = 0;
	uParam0->f_592[iParam1]->f_107 = 0;
	uParam0->f_592[iParam1]->f_129 = 0;
	uParam0->f_592[iParam1]->f_31 = 0;
	uParam0->f_592[iParam1]->f_32 = 0;
	uParam0->f_592[iParam1]->f_33 = 0;
	if (uParam0->f_18 == 0)
	{
		func_410(uParam0->f_592[iParam1], 1);
	}
	else
	{
		func_410(uParam0->f_592[iParam1], func_411(uParam0));
	}
	uParam0->f_592[iParam1]->f_16 = 0;
	if (iParam2 == 1 || func_5(uParam0, 4096))
	{
		func_412(uParam0->f_592[iParam1], 0);
		uParam0->f_592[iParam1]->f_7 = 0;
	}
	uParam0->f_592[iParam1]->f_121 = 0;
	func_141(&(uParam0->f_592[iParam1]->f_112));
	func_141(&(uParam0->f_592[iParam1]->f_115));
	func_141(&(uParam0->f_592[iParam1]->f_17));
	func_141(&(uParam0->f_592[iParam1]->f_20));
}

void func_215(var uParam0)
{
	if (uParam0->f_22 != -1)
	{
		uParam0->f_23 = uParam0->f_22;
	}
	if (uParam0->f_18 != 785897420)
	{
		uParam0->f_22 = -1;
	}
	if (func_5(uParam0, 4096))
	{
		func_59(uParam0, 4096);
		func_112(uParam0);
		uParam0->f_60 = 1;
	}
	func_59(uParam0, 512);
	uParam0->f_51 = -3;
	uParam0->f_175.f_137 = 0;
	func_113(&(uParam0->f_355), 1);
	uParam0->f_61 = 0;
	uParam0->f_65 = get_random_int_in_range(0, 2);
}

bool func_216(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_406(uParam0, iVar0) && !func_225(uParam0->f_592[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_217()
{
	if (Global_1900325->f_1 != 1)
	{
		return;
	}
	if (func_413(1))
	{
		func_414(1, 1, 0);
	}
}

bool func_218(var uParam0, int iParam1)
{
	if (func_322(&(uParam0->f_120[iParam1])) && func_415(&(uParam0->f_120[iParam1]), 1))
	{
		return true;
	}
	return false;
}

void func_219(var uParam0, int iParam1)
{
	if (uParam0->f_19 != iParam1)
	{
		uParam0->f_19 = iParam1;
	}
}

bool func_220(var uParam0)
{
	return (func_295(uParam0, 0) && func_295(uParam0, 1));
}

void func_221(var uParam0)
{
	if (((((Global_1900325->f_1 != 1 || uParam0->f_55 == -1) || !func_199(uParam0->f_21)) || func_5(uParam0, 131072)) || func_5(uParam0, 262144)) || !func_212(uParam0))
	{
		return;
	}
	iVar0 = func_161(uParam0->f_21);
	iVar1 = func_416(Global_1900325->f_3);
	if (is_string_null_or_empty(&(uParam0->f_164)))
	{
		switch (uParam0->f_55)
		{
			case 6:
				if (!is_bit_set(iVar1, 0))
				{
					set_bit(&iVar1, 0);
					StringCopy(&(uParam0->f_164), "MGFFF_MCH1", 24);
				}
				else if (!is_bit_set(iVar1, 1))
				{
					set_bit(&iVar1, 1);
					StringCopy(&(uParam0->f_164), "MGFFF_MCH2", 24);
				}
				else
				{
					return;
				}
				func_417(&(uParam0->f_66), &(uParam0->f_592[iVar0]), "MICAH_BELL", 0);
				func_417(&(uParam0->f_66), Global_35, "ARTHUR", 0);
				break;
			case 11:
				if (!is_bit_set(iVar1, 2))
				{
					set_bit(&iVar1, 2);
					StringCopy(&(uParam0->f_164), "MGGEN_SAD_CNV1", 24);
				}
				else if (!is_bit_set(iVar1, 3))
				{
					set_bit(&iVar1, 3);
					StringCopy(&(uParam0->f_164), "MGGEN_SAD_CNV2", 24);
				}
				else
				{
					return;
				}
				func_417(&(uParam0->f_66), &(uParam0->f_592[iVar0]), "SADIE_ADLER", 0);
				func_417(&(uParam0->f_66), Global_35, "ARTHUR", 0);
				break;
			case 9:
				if (!is_bit_set(iVar1, 4))
				{
					set_bit(&iVar1, 4);
					StringCopy(&(uParam0->f_164), "MGFFF_LENNY1", 24);
				}
				else
				{
					return;
				}
				func_417(&(uParam0->f_66), &(uParam0->f_592[iVar0]), "LENNY", 0);
				func_417(&(uParam0->f_66), Global_35, "ARTHUR", 0);
				break;
		}
	}
	if (is_string_null_or_empty(&(uParam0->f_164)))
	{
		func_6(uParam0, 131072);
		return;
	}
	if (func_418(&(uParam0->f_66), uParam0->f_164, 0, -1, 0, 0))
	{
		func_419(Global_1900325->f_3, iVar1);
		func_6(uParam0, 262144);
	}
}

bool func_222(var uParam0)
{
	if (func_420(uParam0) == 0)
	{
		if (uParam0->f_18 == 785897420)
		{
			if (is_ped_a_player(&(uParam0->f_592[0])))
			{
				uParam0->f_50 = 0;
			}
			else
			{
				uParam0->f_50 = 1;
			}
		}
		else if (!is_ped_a_player(&(uParam0->f_592[0])))
		{
			uParam0->f_50 = 0;
		}
		else if (!is_ped_a_player(&(uParam0->f_592[1])))
		{
			uParam0->f_50 = 1;
		}
		else
		{
			uParam0->f_50 = 0;
		}
	}
	return true;
}

bool func_223(var uParam0)
{
	if (!func_306(uParam0->f_22))
	{
		iVar0 = -1;
		if (uParam0->f_18 == 785897420)
		{
			func_421(uParam0, 0);
		}
		else
		{
			if (Global_1900325->f_23 == 0)
			{
				if ((&uParam0->f_24[0] == 1 && &uParam0->f_24[1] == 1) && &uParam0->f_24[2] == 1)
				{
					uParam0->f_24[0] = 0;
					uParam0->f_24[1] = 0;
					uParam0->f_24[2] = 0;
				}
				iVar0 = get_random_int_in_range(0, 3);
			}
			else if (Global_1900325->f_23 == 1)
			{
				if ((&uParam0->f_24[3] == 1 && &uParam0->f_24[4] == 1) && &uParam0->f_24[5] == 1)
				{
					uParam0->f_24[3] = 0;
					uParam0->f_24[4] = 0;
					uParam0->f_24[5] = 0;
				}
				iVar0 = get_random_int_in_range(3, 6);
			}
			else if (Global_1900325->f_23 == 2)
			{
				if ((&uParam0->f_24[6] == 1 && &uParam0->f_24[7] == 1) && &uParam0->f_24[8] == 1)
				{
					uParam0->f_24[6] = 0;
					uParam0->f_24[7] = 0;
					uParam0->f_24[8] = 0;
				}
				iVar0 = get_random_int_in_range(6, 9);
			}
			else
			{
				if ((&uParam0->f_24[9] == 1 && &uParam0->f_24[10] == 1) && &uParam0->f_24[11] == 1)
				{
					uParam0->f_24[9] = 0;
					uParam0->f_24[10] = 0;
					uParam0->f_24[11] = 0;
				}
				iVar0 = get_random_int_in_range(9, 12);
			}
			if (!func_306(iVar0))
			{
			}
			else if (&uParam0->f_24[iVar0] == 1)
			{
			}
			else if (iVar0 == uParam0->f_23)
			{
			}
			else
			{
				func_421(uParam0, iVar0);
			}
		}
	}
	return func_306(uParam0->f_22);
}

void func_224(var uParam0)
{
	if (func_5(uParam0, 512))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_37[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_22 == 0)
	{
		uParam0->f_37[1] = 1;
		uParam0->f_37[3] = 1;
		uParam0->f_37[5] = 1;
		uParam0->f_37[7] = 1;
		uParam0->f_37[9] = 1;
	}
	else if (uParam0->f_22 == 1)
	{
		uParam0->f_37[1] = 2;
		uParam0->f_37[3] = 2;
		uParam0->f_37[5] = 2;
		uParam0->f_37[7] = 2;
		uParam0->f_37[9] = 2;
	}
	else if (uParam0->f_22 == 2)
	{
		uParam0->f_37[1] = 3;
		uParam0->f_37[3] = 3;
		uParam0->f_37[5] = 3;
		uParam0->f_37[7] = 3;
		uParam0->f_37[9] = 3;
	}
	else if (uParam0->f_22 == 3)
	{
		uParam0->f_37[1] = 1;
		uParam0->f_37[3] = 1;
		uParam0->f_37[5] = 1;
		uParam0->f_37[7] = 2;
		uParam0->f_37[9] = 2;
	}
	else if (uParam0->f_22 == 4)
	{
		uParam0->f_37[1] = 2;
		uParam0->f_37[3] = 2;
		uParam0->f_37[5] = 2;
		uParam0->f_37[7] = 3;
		uParam0->f_37[9] = 3;
	}
	else if (uParam0->f_22 == 5)
	{
		uParam0->f_37[1] = 3;
		uParam0->f_37[3] = 3;
		uParam0->f_37[5] = 3;
		uParam0->f_37[7] = 1;
		uParam0->f_37[9] = 1;
	}
	else if (uParam0->f_22 == 6)
	{
		uParam0->f_37[1] = 1;
		uParam0->f_37[3] = 2;
		uParam0->f_37[5] = 3;
		uParam0->f_37[7] = 2;
		uParam0->f_37[9] = 1;
	}
	else if (uParam0->f_22 == 7)
	{
		uParam0->f_37[1] = 2;
		uParam0->f_37[3] = 3;
		uParam0->f_37[5] = 1;
		uParam0->f_37[7] = 3;
		uParam0->f_37[9] = 2;
	}
	else if (uParam0->f_22 == 8)
	{
		uParam0->f_37[1] = 3;
		uParam0->f_37[3] = 1;
		uParam0->f_37[5] = 2;
		uParam0->f_37[7] = 1;
		uParam0->f_37[9] = 3;
	}
	else if (uParam0->f_22 == 9)
	{
		uParam0->f_37[1] = 1;
		uParam0->f_37[3] = 3;
		uParam0->f_37[5] = 2;
		uParam0->f_37[7] = 1;
		uParam0->f_37[9] = 2;
	}
	else if (uParam0->f_22 == 10)
	{
		uParam0->f_37[1] = 2;
		uParam0->f_37[3] = 1;
		uParam0->f_37[5] = 3;
		uParam0->f_37[7] = 2;
		uParam0->f_37[9] = 3;
	}
	else if (uParam0->f_22 == 11)
	{
		uParam0->f_37[1] = 3;
		uParam0->f_37[3] = 2;
		uParam0->f_37[5] = 1;
		uParam0->f_37[7] = 3;
		uParam0->f_37[9] = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar0++;
	}
	func_6(uParam0, 512);
}

bool func_225(var uParam0)
{
	return uParam0->f_121 != 0;
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	if ((((uParam0->f_491.f_11 != -1 && !func_49(uParam0->f_592[iParam2]->f_16, iParam1)) && !func_413(1)) && !is_any_speech_playing(&(uParam0->f_592[iParam2]))) && func_422(uParam0, iParam1))
	{
		iVar0 = func_161(iParam2);
		sVar1 = func_423(uParam0, iParam1, iParam2);
		if (is_string_null_or_empty(sVar1))
		{
		}
		else if (_0x61b2aaef645ddaf0(uParam0->f_491.f_11, sVar1, &(uParam0->f_592[iParam2]), &(uParam0->f_592[iVar0]), 0))
		{
		}
		func_50(&(uParam0->f_592[iParam2]->f_16), iParam1);
	}
}

void func_227(var uParam0)
{
	if (uParam0->f_50 == 1)
	{
		uParam0->f_50 = 0;
	}
	else if (uParam0->f_50 == 0)
	{
		uParam0->f_50 = 1;
	}
	uParam0->f_175.f_137 = 0;
	if (!is_screen_faded_in())
	{
		do_screen_fade_in(250);
	}
}

void func_228(var uParam0)
{
	if (((uParam0->f_18 == 785897420 && uParam0->f_592[uParam0->f_50]->f_64 == 17) && !func_424(&(uParam0->f_175.f_131))) && !func_425(&(uParam0->f_175.f_131)))
	{
		func_300(uParam0, 3);
		func_300(uParam0, 4);
		if (!func_5(uParam0, 65536))
		{
			func_300(uParam0, 8);
		}
		if (func_426(uParam0->f_592[uParam0->f_50]))
		{
			if (is_control_just_pressed(2, 698569998))
			{
				iVar0 = (uParam0->f_22 - 1);
				if (iVar0 < 0)
				{
					iVar0 = 11;
				}
				func_421(uParam0, iVar0);
				uParam0->f_175.f_81.f_35 = -2;
				func_81(&(uParam0->f_592[uParam0->f_50]->f_109));
			}
			else if (is_control_just_pressed(2, 2069596525))
			{
				iVar0 = uParam0->f_22 + 1;
				if (iVar0 == 12)
				{
					iVar0 = 0;
				}
				func_421(uParam0, iVar0);
				uParam0->f_175.f_81.f_35 = -2;
				func_81(&(uParam0->f_592[uParam0->f_50]->f_109));
			}
		}
	}
	else
	{
		func_139(&(uParam0->f_175), 3);
		func_139(&(uParam0->f_175), 4);
		func_139(&(uParam0->f_175), 8);
	}
}

void func_229(var uParam0)
{
	if (func_230(uParam0))
	{
		return;
	}
	uParam0->f_60++;
	if (func_211(uParam0, 1))
	{
		iVar0 = func_427(uParam0);
		uParam0->f_51 = func_161(iVar0);
		func_6(uParam0, 4096);
	}
	else if (uParam0->f_18 == 785897420)
	{
		uParam0->f_51 = -2;
	}
	else if (uParam0->f_18 == -121390149)
	{
		if (func_428(uParam0->f_592[0]) == 0 && func_428(uParam0->f_592[1]) == 0)
		{
			uParam0->f_51 = -1;
		}
		else if (func_428(uParam0->f_592[0]) >= func_429(uParam0) && (func_428(uParam0->f_592[1]) < func_429(uParam0) || func_430(uParam0->f_592[0]) < func_430(uParam0->f_592[1])))
		{
			uParam0->f_51 = 0;
		}
		else
		{
			uParam0->f_51 = 1;
		}
	}
	else if (func_428(uParam0->f_592[0]) > func_428(uParam0->f_592[1]))
	{
		uParam0->f_51 = 0;
	}
	else if (func_428(uParam0->f_592[1]) > func_428(uParam0->f_592[0]))
	{
		uParam0->f_51 = 1;
	}
	else
	{
		uParam0->f_51 = -1;
	}
	if (uParam0->f_51 == -2)
	{
		func_6(uParam0, 4096);
	}
	else if (uParam0->f_51 == 0 || uParam0->f_51 == 1)
	{
		func_412(uParam0->f_592[uParam0->f_51], func_309(uParam0->f_592[uParam0->f_51]) + 1);
		if (func_431(uParam0) >= 2)
		{
			func_6(uParam0, 4096);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_432(uParam0, iVar1))
				{
					uParam0->f_592[iVar1]->f_2 = 1;
					uParam0->f_592[iVar1]->f_5 = 1;
					uParam0->f_592[iVar1]->f_4 = 0;
					func_297(uParam0->f_592[iVar1], 0);
				}
				iVar1++;
			}
		}
	}
}

bool func_230(var uParam0)
{
	return uParam0->f_51 != -3;
}

void func_231(var uParam0)
{
	if (uParam0->f_18 == 785897420 || !func_220(uParam0))
	{
		return;
	}
	if (func_199(uParam0->f_21) && uParam0->f_592[uParam0->f_21]->f_3 == 1)
	{
		func_296(uParam0, 28, 1, 1);
	}
	else if (uParam0->f_51 == -1)
	{
		if (uParam0->f_18 == -121390149)
		{
			if (func_433(uParam0->f_592[0]) == 0 && func_433(uParam0->f_592[1]) == 0)
			{
				func_296(uParam0, 22, 1, 1);
			}
			else
			{
				func_296(uParam0, 21, 1, 1);
			}
		}
		else
		{
			func_296(uParam0, 23, 1, 1);
		}
	}
	else if (func_309(uParam0->f_592[0]) >= 2 || func_309(uParam0->f_592[1]) >= 2)
	{
		if (uParam0->f_18 == -121390149)
		{
			func_296(uParam0, 26, 1, 1);
		}
		else
		{
			func_296(uParam0, 27, 1, 1);
		}
	}
	else if (uParam0->f_18 == -121390149)
	{
		func_296(uParam0, 24, 1, 1);
	}
	else
	{
		func_296(uParam0, 25, 1, 1);
	}
}

void func_232()
{
	if (Global_1899528->f_2 == 0)
	{
	}
	Global_1899528->f_2 = 1;
}

bool func_233(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_64(uParam0->f_592[iVar0]) && uParam0->f_592[iVar0]->f_64 < 25)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_234(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_64(uParam0->f_592[iVar0]))
		{
			if (uParam0->f_592[iVar0]->f_64 < 7 || uParam0->f_592[iVar0]->f_64 > 11)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_235(var uParam0)
{
	if ((func_5(uParam0, 4096) && func_434(uParam0)) && func_199(uParam0->f_21))
	{
		if (uParam0->f_51 == uParam0->f_21)
		{
			uParam0->f_53++;
			if (uParam0->f_18 != 785897420)
			{
				if (Global_1900325->f_1 == 1)
				{
					func_371();
				}
				else
				{
					uParam0->f_62 = 1;
				}
				if (Global_1900325->f_4 == 76)
				{
					chal_add_goal_progress_int(1880205078, -268886150, 1);
				}
				else if (Global_1900325->f_4 == 26)
				{
					chal_add_goal_progress_int(1880205078, -1161731119, 1);
				}
				else if (Global_1900325->f_4 == 92)
				{
					chal_add_goal_progress_int(1880205078, -2123709745, 1);
				}
			}
		}
	}
}

void func_236(var uParam0, int iParam1)
{
	set_ped_reset_flag(&(uParam0->f_592[iParam1]), 25, true);
	set_ped_reset_flag(&(uParam0->f_592[iParam1]), 134, true);
	set_ped_reset_flag(&(uParam0->f_592[iParam1]), 129, true);
	set_ped_can_play_gesture_anims(&(uParam0->f_592[iParam1]), 0, 1);
	uParam0->f_592[iParam1]->f_91 = 0;
	func_435(uParam0, iParam1);
}

void func_237(var uParam0, int iParam1)
{
	if (func_436(uParam0->f_592[iParam1]))
	{
		func_377(uParam0->f_592[iParam1], 1);
	}
	else if (uParam0->f_592[iParam1]->f_12 == 0)
	{
		uParam0->f_592[iParam1]->f_12 = 1;
		set_current_ped_weapon(&(uParam0->f_592[iParam1]), _0x08ff1099ed2e6e21(&(uParam0->f_592[iParam1])), false, 0, false, false);
		_hide_ped_weapons(&(uParam0->f_592[iParam1]), 2, false);
	}
}

void func_238(var uParam0, int iParam1)
{
	if (func_437(uParam0, iParam1))
	{
		func_377(uParam0->f_592[iParam1], 2);
	}
}

void func_239(var uParam0, int iParam1)
{
	if (!func_438(&(uParam0->f_592[iParam1]), -1672495956) && func_439(uParam0, iParam1))
	{
		func_377(uParam0->f_592[iParam1], 3);
	}
}

void func_240(var uParam0, int iParam1)
{
	func_440(uParam0, iParam1);
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Attach")) || does_entity_exist(uParam0->f_592[iParam1]->f_60))
	{
		if (func_441(uParam0, uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1))
		{
			if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Detach")))
			{
				func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
				func_226(uParam0, 67108864, iParam1);
			}
			if (!is_entity_playing_anim(&(uParam0->f_592[iParam1]), func_78(0, uParam0->f_592[iParam1]->f_11), func_443(uParam0->f_592[iParam1]->f_8), 1) || _get_entity_anim_current_time(&(uParam0->f_592[iParam1]), func_78(0, uParam0->f_592[iParam1]->f_11), func_443(uParam0->f_592[iParam1]->f_8)) >= 1f)
			{
				if (func_444(uParam0, iParam1))
				{
					func_377(uParam0->f_592[iParam1], 7);
				}
			}
		}
	}
}

void func_241(var uParam0, int iParam1)
{
	if (func_445(uParam0, iParam1) && func_446(uParam0, iParam1))
	{
		func_377(uParam0->f_592[iParam1], 5);
	}
}

void func_242(var uParam0, int iParam1)
{
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Detach")))
	{
		func_69(uParam0, iParam1);
	}
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Attach")) || does_entity_exist(uParam0->f_592[iParam1]->f_60))
	{
		if (func_441(uParam0, uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1))
		{
			if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Detach2")))
			{
				func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
			}
			if (!is_entity_playing_anim(&(uParam0->f_592[iParam1]), func_78(0, 0), "javier_exit", 1) || _get_entity_anim_current_time(&(uParam0->f_592[iParam1]), func_78(0, 0), "javier_exit") >= 1f)
			{
				if (func_444(uParam0, iParam1))
				{
					func_377(uParam0->f_592[iParam1], 7);
				}
			}
		}
	}
}

void func_243(var uParam0, int iParam1)
{
	if (func_444(uParam0, iParam1) && func_441(uParam0, uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 0))
	{
		func_377(uParam0->f_592[iParam1], 7);
	}
}

void func_244(var uParam0, int iParam1)
{
	func_447(uParam0, iParam1);
	func_448(uParam0->f_592[iParam1], "FFF_Seated", 1);
	func_66(uParam0->f_592[iParam1], 690358560);
	func_449(uParam0, iParam1);
	func_450(uParam0, iParam1);
	if (uParam0->f_592[iParam1]->f_3 == 1)
	{
		func_377(uParam0->f_592[iParam1], 25);
	}
	else if (func_75(uParam0, iParam1) && !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (func_72(&(uParam0->f_592[iParam1])))
		{
			func_377(uParam0->f_592[iParam1], 26);
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 28);
		}
	}
	else if (!func_406(uParam0, iParam1))
	{
		func_377(uParam0->f_592[iParam1], 25);
	}
	else if (!func_225(uParam0->f_592[iParam1]))
	{
		if (uParam0->f_592[iParam1]->f_10 == 1 && !does_entity_exist(uParam0->f_592[iParam1]->f_60))
		{
			if (func_451(uParam0->f_592[iParam1]) && func_452(uParam0, iParam1, "ToggleDraw", 0))
			{
				func_377(uParam0->f_592[iParam1], 12);
			}
		}
		else if (uParam0->f_592[iParam1]->f_9 == 1 && does_entity_exist(uParam0->f_592[iParam1]->f_60))
		{
			if (func_451(uParam0->f_592[iParam1]) && func_452(uParam0, iParam1, "ToggleHolster", 0))
			{
				func_377(uParam0->f_592[iParam1], 13);
			}
		}
		else if ((func_220(uParam0) || uParam0->f_18 == 785897420) && does_entity_exist(uParam0->f_592[iParam1]->f_60))
		{
			if (uParam0->f_50 == iParam1)
			{
				if (func_5(uParam0, 512) && uParam0->f_20 == 5)
				{
					if (func_452(uParam0, iParam1, "PickupKnife", 0))
					{
						func_377(uParam0->f_592[iParam1], 16);
					}
				}
			}
			else if (func_453(uParam0, iParam1))
			{
				iVar0 = get_random_int_in_range(0, 2);
				if ((iVar0 == 0 && func_452(uParam0, iParam1, "Fail_from_idle", 1)) || (iVar0 != 0 && func_452(uParam0, iParam1, "Success_from_idle", 1)))
				{
					func_377(uParam0->f_592[iParam1], 15);
				}
			}
		}
		else
		{
			if (func_454(uParam0->f_592[iParam1]))
			{
				if (func_455(uParam0, iParam1))
				{
					if (func_452(uParam0, iParam1, "Alt_01_idle_intro", 0))
					{
						func_377(uParam0->f_592[iParam1], 9);
					}
				}
				else if (func_452(uParam0, iParam1, "OpponentIdle", 0))
				{
					func_377(uParam0->f_592[iParam1], 8);
				}
			}
			func_456(uParam0, iParam1);
		}
	}
}

void func_245(var uParam0, int iParam1)
{
	if ((func_457(&(uParam0->f_592[iParam1])) || uParam0->f_592[iParam1]->f_2 == 1) || func_220(uParam0))
	{
		if (func_452(uParam0, iParam1, "IdleWithoutKnife", 0))
		{
			func_377(uParam0->f_592[iParam1], 7);
			func_141(&(uParam0->f_592[iParam1]->f_123));
		}
	}
}

void func_246(var uParam0, int iParam1)
{
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "Alt_01_idle", 0))
	{
		func_377(uParam0->f_592[iParam1], 10);
	}
}

void func_247(var uParam0, int iParam1)
{
	if ((func_457(&(uParam0->f_592[iParam1])) || uParam0->f_592[iParam1]->f_2 == 1) || func_220(uParam0))
	{
		if ((((func_220(uParam0) || uParam0->f_18 == 785897420) && uParam0->f_50 == iParam1) && func_5(uParam0, 512)) && uParam0->f_20 == 5)
		{
			if (func_452(uParam0, iParam1, "Alt_01_outro_withKnife", 0))
			{
				func_377(uParam0->f_592[iParam1], 16);
			}
		}
		else if (func_452(uParam0, iParam1, "Alt_01_outro_noKnife", 0))
		{
			func_377(uParam0->f_592[iParam1], 11);
			func_141(&(uParam0->f_592[iParam1]->f_123));
		}
	}
}

void func_248(var uParam0, int iParam1)
{
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithoutKnife", 0))
	{
		func_377(uParam0->f_592[iParam1], 7);
		func_141(&(uParam0->f_592[iParam1]->f_123));
	}
}

void func_249(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_592[iParam1]->f_60))
	{
		if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Attach")))
		{
			func_441(uParam0, uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		}
	}
	else if (has_anim_event_fired(&(uParam0->f_592[iParam1]), get_hash_key("Detach")))
	{
		func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
	}
	if ((func_457(&(uParam0->f_592[iParam1])) && func_441(uParam0, uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 0)) && func_452(uParam0, iParam1, "IdleWithOutKnife", 0))
	{
		func_377(uParam0->f_592[iParam1], 7);
		func_141(&(uParam0->f_592[iParam1]->f_123));
		uParam0->f_592[iParam1]->f_10 = 0;
	}
}

void func_250(var uParam0, int iParam1)
{
	if (does_entity_exist(uParam0->f_592[iParam1]->f_60))
	{
		if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -1131150392))
		{
			func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		}
		if (has_anim_event_fired(&(uParam0->f_592[iParam1]), 1838514158))
		{
			func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
		}
	}
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithOutKnife", 0))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
		func_377(uParam0->f_592[iParam1], 7);
		func_141(&(uParam0->f_592[iParam1]->f_123));
		uParam0->f_592[iParam1]->f_9 = 0;
	}
}

void func_251(var uParam0, int iParam1)
{
	if (!func_80(&(uParam0->f_592[iParam1]->f_26)))
	{
		func_81(&(uParam0->f_592[iParam1]->f_26));
	}
	else if (func_459(&(uParam0->f_592[iParam1]->f_26)) > 3000)
	{
		func_226(uParam0, 4, iParam1);
	}
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithOutKnife", 0))
	{
		func_377(uParam0->f_592[iParam1], 7);
	}
}

void func_252(var uParam0, int iParam1)
{
	if (!func_80(&(uParam0->f_592[iParam1]->f_20)))
	{
		func_81(&(uParam0->f_592[iParam1]->f_20));
	}
	else if (func_459(&(uParam0->f_592[iParam1]->f_20)) > 500)
	{
		func_226(uParam0, 33554432, iParam1);
	}
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithOutKnife", 0))
	{
		if (!func_225(uParam0->f_592[iParam1]))
		{
			func_377(uParam0->f_592[iParam1], 7);
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 23);
		}
	}
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_592[iParam1]->f_10 = 0;
	uParam0->f_592[iParam1]->f_9 = 0;
	func_66(uParam0->f_592[iParam1], -1667806202);
	func_460(uParam0, iParam1);
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -1131150392))
	{
		func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		func_461(uParam0, iParam1);
		func_462(uParam0, iParam1);
	}
	if (func_457(&(uParam0->f_592[iParam1])))
	{
		func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		func_462(uParam0, iParam1);
		if (func_452(uParam0, iParam1, "IdleWithKnife", 0))
		{
			func_81(&(uParam0->f_592[iParam1]->f_109));
			func_141(&(uParam0->f_592[iParam1]->f_112));
			func_141(&(uParam0->f_592[iParam1]->f_115));
			func_463(uParam0, iParam1);
			func_377(uParam0->f_592[iParam1], 17);
		}
	}
}

void func_254(var uParam0, int iParam1)
{
	func_447(uParam0, iParam1);
	func_66(uParam0->f_592[iParam1], -1667806202);
	if (uParam0->f_592[iParam1]->f_3 == 1)
	{
		func_54(&(uParam0->f_175));
		func_377(uParam0->f_592[iParam1], 25);
	}
	else if (func_75(uParam0, iParam1) && !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		func_464(uParam0, iParam1, 0);
	}
	else if (func_5(uParam0, 2048) && func_408(uParam0))
	{
		func_464(uParam0, iParam1, 0);
	}
	else if (func_5(uParam0, 2048) && func_218(&(uParam0->f_175), 8))
	{
		func_465(uParam0, 1);
		func_464(uParam0, iParam1, 0);
	}
	else if (func_466(uParam0, iParam1) && !func_467(&(uParam0->f_592[iParam1])))
	{
		func_464(uParam0, iParam1, 0);
	}
	else if (uParam0->f_20 == 5)
	{
		func_468(uParam0, iParam1);
		if (func_426(uParam0->f_592[iParam1]))
		{
			func_460(uParam0, iParam1);
			if (is_ped_a_player(&(uParam0->f_592[iParam1])))
			{
				if ((((does_entity_exist(uParam0->f_175.f_81.f_5) && !func_284()) && !func_424(&(uParam0->f_175.f_131))) && !func_425(&(uParam0->f_175.f_131))) && is_disabled_control_just_pressed(0, func_470(func_469(uParam0, iParam1))))
				{
					func_471(uParam0, iParam1);
				}
			}
			else
			{
				func_471(uParam0, iParam1);
			}
		}
	}
}

void func_255(var uParam0, int iParam1)
{
	func_66(uParam0->f_592[iParam1], 1382425677);
	func_472(uParam0, iParam1);
	func_460(uParam0, iParam1);
	func_468(uParam0, iParam1);
	if (!func_467(&(uParam0->f_592[iParam1])) && !func_473(&(uParam0->f_592[iParam1]), -1329297961))
	{
		if (func_75(uParam0, iParam1))
		{
			func_474(uParam0->f_592[iParam1], 0, 0, 0);
			func_464(uParam0, iParam1, 1);
		}
		else if (func_466(uParam0, iParam1))
		{
			func_475(uParam0, iParam1, 1);
			if (uParam0->f_18 == -776039804 || uParam0->f_18 == -798342154)
			{
				func_474(uParam0->f_592[iParam1], 0, 0, 0);
				func_464(uParam0, iParam1, 1);
			}
			else
			{
				func_476(uParam0, iParam1);
				func_477(uParam0);
				func_474(uParam0->f_592[iParam1], 0, 0, 0);
				if (func_452(uParam0, iParam1, "End", 0))
				{
					func_478(uParam0, iParam1);
				}
			}
		}
		else
		{
			func_479(uParam0, iParam1);
			func_480(uParam0, iParam1);
			func_481(uParam0, iParam1);
		}
	}
	if (((func_473(&(uParam0->f_592[iParam1]), 72973500) || func_473(&(uParam0->f_592[iParam1]), -405217195)) || func_473(&(uParam0->f_592[iParam1]), -1812775187)) || func_473(&(uParam0->f_592[iParam1]), -1586866178))
	{
		func_377(uParam0->f_592[iParam1], 20);
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			func_57(&(uParam0->f_175));
		}
		func_482(uParam0, iParam1);
		func_465(uParam0, 0);
	}
	else if (func_473(&(uParam0->f_592[iParam1]), -1329297961))
	{
		func_377(uParam0->f_592[iParam1], 19);
		func_57(&(uParam0->f_175));
		func_465(uParam0, 0);
		func_476(uParam0, iParam1);
		func_477(uParam0);
	}
}

void func_256(var uParam0, int iParam1)
{
	if (func_457(&(uParam0->f_592[iParam1])))
	{
		if (uParam0->f_592[iParam1]->f_95 == 0 && (func_433(uParam0->f_592[iParam1]) <= 0 || func_428(uParam0->f_592[iParam1]) >= func_429(uParam0)))
		{
			func_464(uParam0, iParam1, 0);
		}
		else if (func_452(uParam0, iParam1, "IdleWithKnife", 0))
		{
			func_463(uParam0, iParam1);
			func_377(uParam0->f_592[iParam1], 17);
		}
	}
}

void func_257(var uParam0, int iParam1)
{
	if (func_433(uParam0->f_592[iParam1]) <= 0 || func_473(&(uParam0->f_592[iParam1]), -1586866178))
	{
		func_475(uParam0, iParam1, 1);
		func_483(uParam0, iParam1);
		func_476(uParam0, iParam1);
		func_477(uParam0);
		func_484(uParam0, iParam1);
		if (func_216(uParam0))
		{
			func_485(uParam0, iParam1);
		}
		if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, func_486(uParam0, iParam1), 0))
		{
			func_377(uParam0->f_592[iParam1], 22);
		}
	}
	else if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithKnife", 0))
	{
		func_476(uParam0, iParam1);
		func_477(uParam0);
		func_463(uParam0, iParam1);
		func_377(uParam0->f_592[iParam1], 17);
	}
}

void func_258(var uParam0, int iParam1)
{
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, func_486(uParam0, iParam1), 0))
	{
		func_377(uParam0->f_592[iParam1], 22);
	}
}

void func_259(var uParam0, int iParam1)
{
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -1132719179))
	{
		func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
		func_487(uParam0, iParam1);
	}
	if (func_216(uParam0))
	{
		func_485(uParam0, iParam1);
	}
	if (func_457(&(uParam0->f_592[iParam1])))
	{
		func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
		func_487(uParam0, iParam1);
		if (func_452(uParam0, iParam1, "IdleWithoutKnife", 0))
		{
			if (func_216(uParam0))
			{
				func_377(uParam0->f_592[iParam1], 25);
			}
			else
			{
				func_377(uParam0->f_592[iParam1], 23);
			}
		}
	}
}

void func_260(var uParam0, int iParam1)
{
	func_66(uParam0->f_592[iParam1], 690358560);
	func_487(uParam0, iParam1);
	if (uParam0->f_592[iParam1]->f_128 == 0 && func_75(uParam0, iParam1))
	{
		func_379(uParam0, iParam1, 1);
		if (func_452(uParam0, iParam1, "TurnQuit", 0))
		{
			func_377(uParam0->f_592[iParam1], 24);
		}
	}
	else if (func_230(uParam0))
	{
		func_485(uParam0, iParam1);
		if (uParam0->f_592[iParam1]->f_128 == 1)
		{
			if (func_452(uParam0, iParam1, "IdleWithoutKnife", 0))
			{
				func_377(uParam0->f_592[iParam1], 25);
			}
		}
		else if ((iParam1 == uParam0->f_51 && func_452(uParam0, iParam1, "Success_from_idle", 0)) || (iParam1 != uParam0->f_51 && func_452(uParam0, iParam1, "Fail_from_idle", 0)))
		{
			func_377(uParam0->f_592[iParam1], 22);
		}
	}
	else if (uParam0->f_592[iParam1]->f_3 == 1)
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])) || func_72(&(uParam0->f_592[iParam1])))
		{
			func_377(uParam0->f_592[iParam1], 26);
		}
		else if (uParam0->f_592[iParam1]->f_5 == 1)
		{
			func_377(uParam0->f_592[iParam1], 27);
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 28);
		}
	}
	else if (func_453(uParam0, iParam1))
	{
		iVar0 = get_random_int_in_range(0, 2);
		if ((iVar0 == 0 && func_452(uParam0, iParam1, "Fail_from_idle", 1)) || (iVar0 != 0 && func_452(uParam0, iParam1, "Success_from_idle", 1)))
		{
			func_377(uParam0->f_592[iParam1], 15);
		}
	}
}

void func_261(var uParam0, int iParam1)
{
	if (!func_80(&(uParam0->f_592[iParam1]->f_23)))
	{
		func_81(&(uParam0->f_592[iParam1]->f_23));
	}
	else if (func_459(&(uParam0->f_592[iParam1]->f_23)) > 1000)
	{
		func_226(uParam0, 16777216, iParam1);
	}
	if (func_457(&(uParam0->f_592[iParam1])) && func_452(uParam0, iParam1, "IdleWithoutKnife", 0))
	{
		uParam0->f_592[iParam1]->f_128 = 1;
		func_379(uParam0, iParam1, 0);
		func_377(uParam0->f_592[iParam1], 23);
	}
}

void func_262(var uParam0, int iParam1)
{
	func_487(uParam0, iParam1);
	if (uParam0->f_592[iParam1]->f_3 == 1)
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])) || func_72(&(uParam0->f_592[iParam1])))
		{
			func_377(uParam0->f_592[iParam1], 26);
		}
		else if (uParam0->f_592[iParam1]->f_5 == 1)
		{
			func_377(uParam0->f_592[iParam1], 27);
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 28);
		}
	}
	else if (func_75(uParam0, iParam1) && !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (func_72(&(uParam0->f_592[iParam1])))
		{
			func_377(uParam0->f_592[iParam1], 26);
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 28);
		}
	}
	else if (uParam0->f_20 == 8)
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			func_488(3);
			if (func_5(uParam0, 1024))
			{
				if ((func_473(&(uParam0->f_592[iParam1]), 1371938701) && uParam0->f_592[func_161(uParam0->f_21)]->f_64 == 30) && func_452(uParam0, iParam1, "WonIdle", 0))
				{
					func_377(uParam0->f_592[iParam1], 14);
				}
			}
			else
			{
				func_377(uParam0->f_592[iParam1], 7);
			}
		}
		else
		{
			func_377(uParam0->f_592[iParam1], 7);
		}
	}
}

void func_263(var uParam0, int iParam1)
{
	func_487(uParam0, iParam1);
	if (func_489(uParam0, iParam1) && func_452(uParam0, iParam1, func_490(uParam0, iParam1), 0))
	{
		func_491(uParam0, iParam1);
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			if (func_5(uParam0, 1024))
			{
				func_492(3, 6);
				func_24(0);
			}
			else if (uParam0->f_64 == 0)
			{
				func_226(uParam0, 134217728, iParam1);
			}
			else if (uParam0->f_592[iParam1]->f_78 == 2f)
			{
				func_226(uParam0, 4, iParam1);
			}
			else if (uParam0->f_592[iParam1]->f_78 == 0f)
			{
				func_226(uParam0, 8, iParam1);
			}
			else
			{
				func_226(uParam0, 2, iParam1);
			}
		}
		func_377(uParam0->f_592[iParam1], 29);
	}
}

void func_264(var uParam0, int iParam1)
{
	if (func_493(uParam0, iParam1))
	{
		func_66(uParam0->f_592[iParam1], 1201781013);
		func_32(1);
		func_226(uParam0, 8, iParam1);
		func_377(uParam0->f_592[iParam1], 30);
	}
}

void func_265(var uParam0, int iParam1)
{
	if (func_494(uParam0, iParam1))
	{
		func_377(uParam0->f_592[iParam1], 31);
	}
}

void func_266(var uParam0, int iParam1)
{
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -1131150392))
	{
		func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			func_495(uParam0, iParam1);
		}
	}
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), 1838514158))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
	}
	if (!func_496(&(uParam0->f_592[iParam1])) || func_457(&(uParam0->f_592[iParam1])))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
		func_377(uParam0->f_592[iParam1], 32);
	}
}

void func_267(var uParam0, int iParam1)
{
	if (func_5(uParam0, 1024))
	{
		func_296(uParam0, 31, 1, 1);
	}
	else
	{
		func_296(uParam0, 29, 1, 1);
	}
	if (func_497(uParam0, iParam1))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
		clear_ped_tasks_immediately(&(uParam0->f_592[iParam1]), false, true);
		set_ped_money(&(uParam0->f_592[iParam1]), 0);
		_0x6569f31a01b4c097(&(uParam0->f_592[iParam1]), 0, 0);
		_0x6569f31a01b4c097(&(uParam0->f_592[iParam1]), 1, 0);
		func_377(uParam0->f_592[iParam1], 32);
	}
}

void func_268(var uParam0, int iParam1)
{
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -693272019))
	{
		func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
	}
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -3856156))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
	}
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), 1117052668))
	{
		func_445(uParam0, iParam1);
	}
	if (!is_entity_playing_anim(&(uParam0->f_592[iParam1]), func_78(0, 0), "javier_enter", 1) || _get_entity_anim_current_time(&(uParam0->f_592[iParam1]), func_78(0, 0), "javier_enter") >= 1f)
	{
		func_498(&(uParam0->f_592[iParam1]));
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
		func_377(uParam0->f_592[iParam1], 32);
	}
}

void func_269(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_270(var uParam0, int iParam1)
{
	if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	iVar0 = func_161(iParam1);
	if ((((((uParam0->f_50 == iParam1 || uParam0->f_18 == 785897420) || uParam0->f_20 != 5) || !func_499(uParam0->f_592[iVar0])) || !func_426(uParam0->f_592[iVar0])) || func_500(uParam0)) || uParam0->f_175.f_137 == 3)
	{
		func_501(&(uParam0->f_314), 1, 1);
		func_139(&(uParam0->f_175), 2);
	}
	else
	{
		func_502(&(uParam0->f_314), 1, 1);
		func_300(uParam0, 2);
	}
}

void func_271(var uParam0, int iParam1)
{
	iVar0 = func_161(iParam1);
	if (((((uParam0->f_18 == 785897420 || uParam0->f_18 == -121390149) || !func_64(uParam0->f_592[iParam1])) || !func_64(uParam0->f_592[iVar0])) || is_ped_a_player(&(uParam0->f_592[iVar0]))) || !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	iVar1 = 1;
	if ((!func_426(uParam0->f_592[iVar0]) || uParam0->f_175.f_137 == 3) || !func_503(uParam0->f_592[iVar0]))
	{
		iVar1 = 0;
		func_139(&(uParam0->f_175), 1);
	}
	if (iVar1 == 1 && uParam0->f_175.f_137 == 0)
	{
		if (func_504(uParam0, iVar0) > 3000f && func_433(uParam0->f_592[iVar0]) > 0)
		{
			func_300(uParam0, 1);
		}
		else
		{
			func_139(&(uParam0->f_175), 1);
		}
		if (func_218(&(uParam0->f_175), 1))
		{
			func_139(&(uParam0->f_175), 1);
			func_139(&(uParam0->f_175), 2);
			uParam0->f_175.f_137 = 1;
		}
	}
	switch (uParam0->f_175.f_137)
	{
		case 0:
			break;
		case 1:
			func_32(1);
			do_screen_fade_out(250);
			uParam0->f_175.f_137 = 2;
			break;
		case 2:
			if (is_screen_faded_out())
			{
				iVar2 = func_505(uParam0, iVar0);
				if (iVar2 > 0)
				{
					func_409(uParam0->f_592[iVar0], (func_428(uParam0->f_592[iVar0]) + iVar2));
				}
				func_507(&(uParam0->f_592[iVar0]->f_115), to_float((func_506(uParam0) - 1)), 1);
				do_screen_fade_in(250);
				uParam0->f_175.f_137 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_272(var uParam0, int iParam1)
{
	if (!func_496(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	if (get_task_move_network_event(&(uParam0->f_592[iParam1]), "IntroFinished"))
	{
	}
	if (func_508(&(uParam0->f_592[iParam1])))
	{
		func_509(uParam0, iParam1);
		func_510(uParam0->f_592[iParam1]);
		func_511(uParam0, iParam1);
		func_512(uParam0->f_592[iParam1]);
	}
	else
	{
		if (uParam0->f_592[iParam1]->f_69 != -1f)
		{
			uParam0->f_592[iParam1]->f_69 = -1f;
			_0xeaf87da2be78a15b(&(uParam0->f_592[iParam1]), "ANIM_RATE");
		}
		if (uParam0->f_592[iParam1]->f_70 != -1f)
		{
			uParam0->f_592[iParam1]->f_70 = -1f;
			_0xeaf87da2be78a15b(&(uParam0->f_592[iParam1]), "STABBING_SPEED");
		}
	}
	uParam0->f_592[iParam1]->f_122++;
}

void func_273(var uParam0)
{
	_0x8b3b71c80a29a4bb(*uParam0, uParam0->f_65, 6);
}

void func_274(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_54) && is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		uParam0->f_592[iParam1]->f_34.f_3 = uParam0->f_54;
		uParam0->f_592[iParam1]->f_34.f_4 = 21030;
		uParam0->f_592[iParam1]->f_34.f_20 = 4;
		uParam0->f_592[iParam1]->f_34.f_22 = 4;
		uParam0->f_592[iParam1]->f_34.f_8 = 4;
		uParam0->f_592[iParam1]->f_59 = 1;
	}
	else
	{
		iVar0 = func_161(iParam1);
		if (is_entity_dead(&(uParam0->f_592[iVar0])))
		{
			uParam0->f_592[iParam1]->f_59 = 0;
		}
		else
		{
			uParam0->f_592[iParam1]->f_34.f_3 = &uParam0->f_592[iVar0];
			uParam0->f_592[iParam1]->f_34.f_4 = 21030;
			uParam0->f_592[iParam1]->f_34.f_20 = 4;
			uParam0->f_592[iParam1]->f_34.f_22 = 4;
			uParam0->f_592[iParam1]->f_34.f_8 = 4;
			uParam0->f_592[iParam1]->f_59 = 1;
		}
	}
	if ((uParam0->f_592[iParam1]->f_59 == 1 && uParam0->f_592[iParam1]->f_64 < 26) && !func_513(&(uParam0->f_592[iParam1])))
	{
		_0x66f9eb44342bb4c5(&(uParam0->f_592[iParam1]), &(uParam0->f_592[iParam1]->f_34));
	}
}

void func_275(var uParam0, int iParam1)
{
	if (func_514(uParam0))
	{
		func_516(uParam0->f_592[iParam1], floor(func_515(uParam0, iParam1)));
	}
	else
	{
		func_516(uParam0->f_592[iParam1], ceil(func_504(uParam0, iParam1)));
	}
}

bool func_276(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_277(var uParam0)
{
	if (func_199(uParam0->f_21))
	{
		if ((uParam0->f_592[uParam0->f_21]->f_64 >= 7 && uParam0->f_592[uParam0->f_21]->f_64 <= 26) || (is_entity_playing_anim(&(uParam0->f_592[uParam0->f_21]), func_78(0, uParam0->f_592[uParam0->f_21]->f_11), func_443(uParam0->f_592[uParam0->f_21]->f_8), 1) && _get_entity_anim_current_time(&(uParam0->f_592[uParam0->f_21]), func_78(0, uParam0->f_592[uParam0->f_21]->f_11), func_443(uParam0->f_592[uParam0->f_21]->f_8)) >= 0.25f))
		{
			return true;
		}
	}
	return false;
}

bool func_278(var uParam0)
{
	if ((uParam0->f_314.f_28 == 0 && _0xdd0b7c5ae58f721d("table_games_cam")) && has_model_loaded(uParam0->f_491.f_2))
	{
		StringCopy(&(uParam0->f_314.f_1), "table_games_cam", 64);
		if (Global_1900325->f_1 == 1)
		{
			StringCopy(&(uParam0->f_314.f_1.f_8), "CAMERA_TABLE_GAMES_FFF_CUT_REQUEST", 64);
		}
		else
		{
			StringCopy(&(uParam0->f_314.f_1.f_8), "CAMERA_TABLE_GAMES_FFF_REQUEST", 64);
		}
		uParam0->f_314.f_1.f_16 = 800527908;
		if (!_0x927b810e43e99932(&(uParam0->f_314.f_1)))
		{
			_0xb8b207c34285e978(&(uParam0->f_314.f_1));
		}
		if (is_entity_dead(uParam0->f_314.f_29))
		{
			uParam0->f_314.f_29 = create_object(uParam0->f_491.f_2, Global_1900325->f_5, false, true, false, false, false);
			set_entity_visible(uParam0->f_314.f_29, false);
			set_entity_collision(uParam0->f_314.f_29, false, false);
			_0xdb382fe20c2da222(uParam0->f_314.f_29);
			freeze_entity_position(uParam0->f_314.f_29, true);
			uParam0->f_314.f_1.f_17 = uParam0->f_314.f_29;
		}
		if (_0x927b810e43e99932(&(uParam0->f_314.f_1)) && !is_entity_dead(uParam0->f_314.f_29))
		{
			uParam0->f_314.f_28 = 1;
		}
	}
	return uParam0->f_314.f_28 != 0;
}

bool func_279(var uParam0, int iParam1)
{
	if ((uParam0->f_20 == 5 && iParam1 == uParam0->f_21) && func_513(&(uParam0->f_592[uParam0->f_21])))
	{
		return true;
	}
	return false;
}

void func_280(var uParam0, int iParam1)
{
	func_501(&(uParam0->f_314), 2, 0);
	if (iParam1 != uParam0->f_314.f_28 && _0x927b810e43e99932(&(uParam0->f_314.f_1)))
	{
		bVar0 = _0xa24c1d341c6e0d53(1, 0, 0);
		switch (iParam1)
		{
			case 2:
				uParam0->f_314.f_1.f_21 = 0;
				uParam0->f_314.f_1.f_22 = 0;
				uParam0->f_314.f_1.f_23 = 0;
				uParam0->f_314.f_1.f_20 = 0;
				uParam0->f_314.f_1.f_19 = 0;
				break;
			case 3:
				uParam0->f_314.f_1.f_21 = 0;
				uParam0->f_314.f_1.f_22 = 1;
				uParam0->f_314.f_1.f_23 = 0;
				uParam0->f_314.f_1.f_20 = 0;
				uParam0->f_314.f_1.f_19 = 0;
				func_517(uParam0);
				break;
			case 4:
				uParam0->f_314.f_1.f_21 = 0;
				uParam0->f_314.f_1.f_22 = 1;
				uParam0->f_314.f_1.f_23 = 0;
				uParam0->f_314.f_1.f_20 = 0;
				uParam0->f_314.f_1.f_19 = 0;
				func_518(uParam0);
				break;
			case 5:
				uParam0->f_314.f_1.f_21 = 1;
				uParam0->f_314.f_1.f_22 = 0;
				uParam0->f_314.f_1.f_23 = 0;
				uParam0->f_314.f_1.f_20 = 1;
				uParam0->f_314.f_1.f_19 = 0;
				break;
		}
		_0x1d9f72dd4fd9a9d7(&(uParam0->f_314.f_1));
		uParam0->f_314.f_28 = iParam1;
		if (uParam0->f_314.f_28 != 3)
		{
			func_12(&(uParam0->f_314));
		}
		if (uParam0->f_314.f_28 != 4)
		{
			func_13(&(uParam0->f_314));
		}
		if (bVar0 == 1)
		{
			if (uParam0->f_314.f_28 == 4 || uParam0->f_314.f_28 == 3)
			{
				_0x04084490cc302cfb();
			}
		}
	}
	func_519(&(uParam0->f_314));
}

bool func_281(var uParam0)
{
	if (func_520(&(uParam0->f_314), 1) && is_control_pressed(2, 1642384076))
	{
		return true;
	}
	return false;
}

bool func_282(var uParam0)
{
	iVar0 = func_161(uParam0->f_21);
	if (func_199(iVar0) && uParam0->f_592[iVar0]->f_64 == 30)
	{
		if (uParam0->f_314.f_40 == 1 || (!is_entity_dead(uParam0->f_54) && has_anim_event_fired(uParam0->f_54, -1121862613)))
		{
			uParam0->f_314.f_40 = 1;
			return false;
		}
		if (func_5(uParam0, 1024))
		{
			func_521(&(uParam0->f_175), 512);
		}
		return true;
	}
	uParam0->f_314.f_40 = 0;
	return false;
}

void func_283(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_175.f_6[iVar0]->f_8 == 1 && is_bit_set(Global_1899750->f_23, iVar0))
		{
			_0x356f9fb0698c1feb(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_284()
{
	return false;
}

void func_285(var uParam0)
{
	if (!func_199(uParam0->f_21))
	{
		func_3(&Global_1900325, 2);
		func_522(&(uParam0->f_175.f_131), 0);
		return;
	}
	if ((((((((!is_screen_faded_in() || func_284()) || !func_523(uParam0->f_592[uParam0->f_21])) || uParam0->f_20 == 6) || func_5(uParam0, 4096)) || uParam0->f_62 == 1) || func_135(&(uParam0->f_175), 512)) || uParam0->f_592[uParam0->f_21]->f_2 == 1) || uParam0->f_592[uParam0->f_21]->f_3 == 1)
	{
		func_297(uParam0->f_592[uParam0->f_21], 0);
	}
	else
	{
		func_297(uParam0->f_592[uParam0->f_21], 1);
	}
	if (func_43(&Global_1900325, 2))
	{
		func_522(&(uParam0->f_175.f_131), 0);
	}
	else
	{
		func_522(&(uParam0->f_175.f_131), 1);
		func_524(&(uParam0->f_175.f_131), &Global_1900325);
		if (func_525(&(uParam0->f_175.f_131)))
		{
			uParam0->f_592[uParam0->f_21]->f_2 = 1;
			uParam0->f_592[uParam0->f_21]->f_5 = 1;
			uParam0->f_592[uParam0->f_21]->f_4 = 1;
			func_297(uParam0->f_592[uParam0->f_21], 0);
		}
	}
}

bool func_286(var uParam0)
{
	if (((((func_135(&(uParam0->f_175), 512) || !func_199(uParam0->f_21)) || uParam0->f_592[uParam0->f_21]->f_3 == 1) || !func_407(uParam0->f_592[uParam0->f_21])) || uParam0->f_62 == 1) || (uParam0->f_20 == 1 && uParam0->f_592[func_161(uParam0->f_21)]->f_7 == 0))
	{
		return true;
	}
	return false;
}

int func_287(int iParam0)
{
	return _money_get_cash_balance();
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	if (func_135(uParam0, 1024) && func_135(uParam0, iParam2))
	{
		_databinding_clear_binding_array(uParam0->f_6[iParam1]->f_6);
		_databinding_write_data_bool(uParam0->f_6[iParam1]->f_5, 0);
		func_137(uParam0, iParam2);
	}
}

void func_289(var uParam0, int iParam1, int iParam2)
{
	if (func_135(uParam0, 1024) && func_135(uParam0, iParam2))
	{
		_databinding_write_data_bool(uParam0->f_6[iParam1]->f_1, 0);
		_databinding_write_data_string(uParam0->f_6[iParam1]->f_3, "");
		_databinding_write_data_string(uParam0->f_6[iParam1]->f_4, "");
		_databinding_write_data_string(uParam0->f_6[iParam1]->f_2, _create_var_string(2, ""));
		func_137(uParam0, iParam2);
	}
}

void func_290(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	_databinding_add_data_string(&(uParam0->f_59[iParam1]), "text", sParam2);
}

void func_291(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	_databinding_add_data_string(&(uParam0->f_59[iParam1]), "moneyText", sParam2);
}

void func_292(var uParam0, int iParam1)
{
	func_290(uParam0, iParam1, _create_var_string(2, ""));
	func_291(uParam0, iParam1, _create_var_string(2, ""));
}

void func_293(var uParam0, int iParam1)
{
	_databinding_write_data_bool(uParam0->f_58, iParam1);
}

void func_294(var uParam0)
{
	if (func_135(uParam0, 2))
	{
		_databinding_write_data_bool(uParam0->f_71, 0);
		_databinding_write_data_string(uParam0->f_72, "");
		_databinding_write_data_bool(uParam0->f_73, 0);
		_databinding_write_data_bool(uParam0->f_75, 0);
		_databinding_write_data_string(uParam0->f_76, "");
		_databinding_write_data_bool(uParam0->f_78, 0);
		_databinding_write_data_string(uParam0->f_79, "");
	}
}

bool func_295(var uParam0, int iParam1)
{
	return uParam0->f_592[iParam1]->f_6;
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_526(&(uParam0->f_355), iParam1) || func_201(&(uParam0->f_355), iParam1))
	{
		return;
	}
	if (iParam2 == 0 && func_527())
	{
		return;
	}
	func_32(1);
	sVar0 = func_528(iParam1);
	iVar1 = -2;
	iVar2 = func_161(uParam0->f_21);
	if (iParam1 == 5)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(2, sVar0, Global_1900325->f_24), iVar1, 0, 0, 0, 1);
	}
	else if ((((((iParam1 == 7 || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(10, sVar0, uParam0->f_592[iVar2]->f_63), iVar1, 0, 0, 0, 1);
	}
	else if (((iParam1 == 11 || iParam1 == 12) || iParam1 == 13) || iParam1 == 14)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(2, sVar0, uParam0->f_60), iVar1, 0, 0, 0, 1);
	}
	else if ((iParam1 == 15 || iParam1 == 16) || iParam1 == 17)
	{
		if (func_309(uParam0->f_592[0]) == 0)
		{
			uParam0->f_355[iParam1] = func_529(_create_var_string(34, sVar0, uParam0->f_60, uParam0->f_592[0]->f_63), iVar1, 0, 0, 0, 1);
		}
		else
		{
			uParam0->f_355[iParam1] = func_529(_create_var_string(34, sVar0, uParam0->f_60, uParam0->f_592[1]->f_63), iVar1, 0, 0, 0, 1);
		}
	}
	else if (iParam1 == 24 || iParam1 == 25)
	{
		iVar3 = uParam0->f_51;
		iVar4 = func_161(iVar3);
		uParam0->f_355[iParam1] = func_529(_create_var_string(42, sVar0, uParam0->f_592[iVar3]->f_63, uParam0->f_592[iVar4]->f_63), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 26 || iParam1 == 27)
	{
		iVar5 = uParam0->f_51;
		iVar6 = func_161(iVar5);
		uParam0->f_355[iParam1] = func_529(_create_var_string(42, sVar0, uParam0->f_592[iVar5]->f_63, uParam0->f_592[iVar6]->f_63, Global_1900325->f_24 * 2), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 28)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(42, sVar0, uParam0->f_592[uParam0->f_21]->f_63, uParam0->f_592[iVar2]->f_63, Global_1900325->f_24 * 2), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 33)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(10, sVar0, uParam0->f_592[iVar2]->f_63), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 34)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(2, sVar0, &(Global_40.f_11883[uParam0->f_22])), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 35)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(10, sVar0, func_308(func_307(&(Global_40.f_11883.f_26[uParam0->f_22]), 1), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 36)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(10, sVar0, func_308(func_307(&(Global_40.f_11883.f_13[uParam0->f_22]), 0), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 37)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(34, sVar0, &(Global_40.f_11883[uParam0->f_22]), func_308(func_307(&(Global_40.f_11883.f_26[uParam0->f_22]), 1), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 38)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(34, sVar0, &(Global_40.f_11883[uParam0->f_22]), func_308(func_307(&(Global_40.f_11883.f_13[uParam0->f_22]), 0), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 39)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(42, sVar0, func_308(func_307(&(Global_40.f_11883.f_26[uParam0->f_22]), 1), 109029619), func_308(func_307(&(Global_40.f_11883.f_13[uParam0->f_22]), 0), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else if (iParam1 == 40)
	{
		uParam0->f_355[iParam1] = func_529(_create_var_string(162, sVar0, &(Global_40.f_11883[uParam0->f_22]), func_308(func_307(&(Global_40.f_11883.f_26[uParam0->f_22]), 1), 109029619), func_308(func_307(&(Global_40.f_11883.f_13[uParam0->f_22]), 0), 109029619)), iVar1, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_355[iParam1] = func_529(sVar0, iVar1, 0, 0, 0, 1);
	}
	if (iParam3 == 1)
	{
		uParam0->f_355.f_42[iParam1] = 1;
	}
}

void func_297(var uParam0, int iParam1)
{
	if (!func_530(uParam0))
	{
		return;
	}
	if (uParam0->f_2 == 1 || uParam0->f_3 == 1)
	{
		iParam1 = 0;
	}
	if (iParam1 == 1)
	{
		if (func_43(&Global_1900325, 2) && is_screen_faded_in())
		{
			func_531(&Global_1900325, 2);
		}
	}
	else if (!func_43(&Global_1900325, 2))
	{
		func_3(&Global_1900325, 2);
	}
}

void func_298(var uParam0)
{
	if (func_532(Global_1899750) && func_533(Global_1899750))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (uParam0->f_175.f_6[iVar1]->f_8 == 0)
			{
				sVar0 = func_534(Global_1899750, iVar1);
				if (!is_string_null_or_empty(sVar0))
				{
					uParam0->f_175.f_6[iVar1]->f_8 = 1;
					uParam0->f_175.f_6[iVar1]->f_12 = sVar0;
					uParam0->f_175.f_6[iVar1]->f_13 = sVar0;
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (uParam0->f_175.f_6[iVar1]->f_8 == 0)
		{
			if (!func_80(&(uParam0->f_175.f_6[iVar1]->f_9)))
			{
				func_81(&(uParam0->f_175.f_6[iVar1]->f_9));
			}
			if (func_535(&(uParam0->f_175.f_6[iVar1]->f_9)) > 4f)
			{
				uParam0->f_175.f_6[iVar1]->f_8 = 1;
			}
		}
		iVar1++;
	}
}

bool func_299(var uParam0)
{
	if ((((((func_536(uParam0, 0) && func_536(uParam0, 1)) && !func_5(uParam0, 2048)) && !func_424(&(uParam0->f_175.f_131))) && !func_425(&(uParam0->f_175.f_131))) && func_133(uParam0, 0) == 2) && does_entity_exist(uParam0->f_592[uParam0->f_21]->f_60))
	{
		if (uParam0->f_592[uParam0->f_21]->f_64 >= 7 && uParam0->f_592[uParam0->f_21]->f_64 <= 11)
		{
			return true;
		}
	}
	return false;
}

void func_300(var uParam0, int iParam1)
{
	if ((((func_284() || func_135(&(uParam0->f_175), 512)) || !func_199(uParam0->f_21)) || uParam0->f_592[uParam0->f_21]->f_2 == 1) || uParam0->f_592[uParam0->f_21]->f_3 == 1)
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (_uiprompt_is_valid(uParam0->f_175.f_130))
		{
			return;
		}
	}
	else if (func_322(&(uParam0->f_175.f_120[iParam1])))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_175.f_120[iParam1] = func_537(_create_var_string(2, "MGFFF_CTX_PLAY", Global_1900325->f_24), 1138488863, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 1:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_SKIP", 812869659, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 2:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_ZOOM", 1642384076, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_538(&(uParam0->f_175.f_120[iParam1]), 1, 1);
			break;
		case 3:
			uParam0->f_175.f_130 = _uiprompt_register_begin();
			_0xf4a5c4509bf923b1(uParam0->f_175.f_130, 0);
			_uiprompt_set_control_action(uParam0->f_175.f_130, 698569998);
			_uiprompt_set_control_action(uParam0->f_175.f_130, 2069596525);
			_uiprompt_set_text(uParam0->f_175.f_130, "MGFFF_CTX_CYCLE");
			_uiprompt_register_end(uParam0->f_175.f_130);
			break;
		case 4:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_START", 242318790, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_539(&(uParam0->f_175.f_120[iParam1]), 1);
			break;
		case 5:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_FLR_CNT", 1875500648, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 6:
			if (uParam0->f_18 == 785897420)
			{
				uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_END_ATT", -143324379, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			else
			{
				uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_FLR_END", -143324379, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			break;
		case 7:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_SOLO", -902324350, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
		case 8:
			uParam0->f_175.f_120[iParam1] = func_537("MGFFF_CTX_SOLO_END", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			break;
	}
}

void func_301(var uParam0, int iParam1)
{
	if (func_201(uParam0, iParam1))
	{
		func_32(1);
	}
}

bool func_302(var uParam0)
{
	if (((((((((func_536(uParam0, 0) && func_536(uParam0, 1)) && !func_424(&(uParam0->f_175.f_131))) && !func_425(&(uParam0->f_175.f_131))) && uParam0->f_18 != 785897420) && !func_5(uParam0, 65536)) && !func_220(uParam0)) && !func_408(uParam0)) && uParam0->f_53 == 0) && func_322(&(uParam0->f_175.f_120[0])))
	{
		return true;
	}
	return false;
}

void func_303(int iParam0, char* sParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_540(iParam0, sParam1, 0, 1, 1);
	play_sound_frontend("MONEY", "HUD_DOMINOS_SOUNDSET", true, 0);
}

void func_304(var uParam0)
{
	if (!func_541(*uParam0, &iVar0))
	{
		iVar0 = 0;
	}
	iVar1 = Global_1900325->f_24;
	iVar2 = (iVar0 + iVar1);
	func_542(*uParam0, iVar2);
}

void func_305(var uParam0)
{
	func_543(&(uParam0->f_175));
	if (func_5(uParam0, 65536))
	{
		func_288(&(uParam0->f_175), 0, 8);
		func_289(&(uParam0->f_175), 0, 32);
	}
	else
	{
		func_544(&(uParam0->f_175), 0, 4);
		func_545(uParam0, 0, uParam0->f_21, 16);
	}
	func_288(&(uParam0->f_175), 1, 8);
	func_289(&(uParam0->f_175), 1, 32);
	if (func_5(uParam0, 65536))
	{
		return;
	}
	if (uParam0->f_52 >= 3)
	{
		_databinding_write_data_string(uParam0->f_175.f_6[0]->f_2, _create_var_string(2, "MGFFF_UI_ATT_0"));
	}
	else if (uParam0->f_52 == 2)
	{
		_databinding_write_data_string(uParam0->f_175.f_6[0]->f_2, _create_var_string(2, "MGFFF_UI_ATT_1"));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_175.f_6[0]->f_2, _create_var_string(2, "MGFFF_UI_ATT_X", (3 - uParam0->f_52)));
	}
	if (uParam0->f_52 <= 2)
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[0]->f_1, 1);
	}
	else
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[0]->f_1, 2);
	}
	if (uParam0->f_52 <= 1)
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[1]->f_1, 1);
	}
	else
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[1]->f_1, 2);
	}
	if (uParam0->f_52 == 0)
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[2]->f_1, 1);
	}
	else
	{
		_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[2]->f_1, 2);
	}
	_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[3]->f_1, 0);
	_databinding_write_data_int(uParam0->f_175.f_6[0]->f_14[4]->f_1, 0);
}

bool func_306(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

char* func_307(int iParam0, int iParam1)
{
	StringCopy(&cVar0, "", 32);
	if (iParam0 <= 0)
	{
		if (iParam1 == 1)
		{
			StringConCat(&cVar0, "00:00.000", 32);
		}
		else
		{
			StringConCat(&cVar0, "00.000", 32);
		}
		return func_546(cVar0);
	}
	iVar4 = (iParam0 / 1000);
	iVar5 = func_547((iVar4 / 60), 0, 180);
	iVar6 = func_547((iVar4 % 60), 0, 60);
	if (iParam1 == 1)
	{
		if (iVar5 <= 0)
		{
			StringConCat(&cVar0, "00", 32);
		}
		else if (iVar5 <= 9)
		{
			StringConCat(&cVar0, "0", 32);
			StringIntConCat(&cVar0, iVar5, 32);
		}
		else
		{
			StringIntConCat(&cVar0, iVar5, 32);
		}
		StringConCat(&cVar0, ":", 32);
	}
	if (iVar6 <= 0)
	{
		StringConCat(&cVar0, "00", 32);
	}
	else if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
		StringIntConCat(&cVar0, iVar6, 32);
	}
	else
	{
		StringIntConCat(&cVar0, iVar6, 32);
	}
	StringConCat(&cVar0, ".", 32);
	iVar8 = func_547((iParam0 % 1000), 0, 1000);
	if (iVar8 < 10)
	{
		StringConCat(&cVar7, "00", 8);
	}
	else if (iVar8 < 100)
	{
		StringConCat(&cVar7, "0", 8);
	}
	StringIntConCat(&cVar7, iVar8, 8);
	StringCopy(&cVar7, _0xd8402b858f4ddd88(&cVar7, 3), 8);
	StringConCat(&cVar0, &cVar7, 32);
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

char* func_308(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_548(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_309(var uParam0)
{
	return uParam0->f_97;
}

void func_310(var uParam0)
{
	func_543(&(uParam0->f_175));
	func_544(&(uParam0->f_175), 0, 4);
	func_544(&(uParam0->f_175), 1, 8);
	func_545(uParam0, 0, uParam0->f_21, 16);
	func_545(uParam0, 1, func_161(uParam0->f_21), 32);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (iVar1 == 0)
		{
			iVar0 = uParam0->f_21;
		}
		else
		{
			iVar0 = func_161(uParam0->f_21);
		}
		if (func_433(uParam0->f_592[iVar0]) == 0)
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_0"));
		}
		else if (func_433(uParam0->f_592[iVar0]) == 1)
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_1"));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_X", func_433(uParam0->f_592[iVar0])));
		}
		if (func_433(uParam0->f_592[iVar0]) > 0)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[0]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[0]->f_1, 2);
		}
		if (func_433(uParam0->f_592[iVar0]) > 1)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[1]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[1]->f_1, 2);
		}
		if (func_433(uParam0->f_592[iVar0]) > 2)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[2]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[2]->f_1, 2);
		}
		if (func_433(uParam0->f_592[iVar0]) > 3)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[3]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[3]->f_1, 2);
		}
		if (func_433(uParam0->f_592[iVar0]) > 4)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[4]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[4]->f_1, 2);
		}
		iVar1++;
	}
}

void func_311(var uParam0)
{
	func_543(&(uParam0->f_175));
	func_288(&(uParam0->f_175), 0, 4);
	func_288(&(uParam0->f_175), 1, 8);
	func_289(&(uParam0->f_175), 0, 16);
	func_289(&(uParam0->f_175), 1, 32);
}

void func_312(var uParam0)
{
	func_543(&(uParam0->f_175));
	func_544(&(uParam0->f_175), 0, 4);
	func_544(&(uParam0->f_175), 1, 8);
	func_545(uParam0, 0, uParam0->f_21, 16);
	func_545(uParam0, 1, func_161(uParam0->f_21), 32);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (iVar1 == 0)
		{
			iVar0 = uParam0->f_21;
		}
		else
		{
			iVar0 = func_161(uParam0->f_21);
		}
		if (func_433(uParam0->f_592[iVar0]) == 0)
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_0"));
		}
		else if (func_433(uParam0->f_592[iVar0]) == 1)
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_1"));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_175.f_6[iVar1]->f_2, _create_var_string(2, "MGFFF_UI_ATT_X", func_433(uParam0->f_592[iVar0])));
		}
		if (func_433(uParam0->f_592[iVar0]) > 0)
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[0]->f_1, 1);
		}
		else
		{
			_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[0]->f_1, 2);
		}
		_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[1]->f_1, 0);
		_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[2]->f_1, 0);
		_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[3]->f_1, 0);
		_databinding_write_data_int(uParam0->f_175.f_6[iVar1]->f_14[4]->f_1, 0);
		iVar1++;
	}
}

void func_313(var uParam0)
{
	if (func_135(&(uParam0->f_175), 2))
	{
		iVar0 = func_161(uParam0->f_21);
		if (func_199(uParam0->f_50))
		{
			if (func_514(uParam0))
			{
				fVar1 = func_515(uParam0, uParam0->f_50);
				uParam0->f_175.f_138 = floor(fVar1);
			}
			else
			{
				fVar1 = func_504(uParam0, uParam0->f_50);
				uParam0->f_175.f_138 = ceil(fVar1);
			}
		}
		sVar2 = func_307(uParam0->f_175.f_138, 1);
		if (uParam0->f_18 == -121390149)
		{
			if (uParam0->f_50 == iVar0)
			{
				iVar3 = -1;
			}
			else
			{
				iVar3 = 3000;
			}
		}
		else if (uParam0->f_18 == 785897420)
		{
			iVar3 = -1;
		}
		else
		{
			iVar3 = 3000;
		}
		iVar4 = 0;
		if (iVar3 > -1 && uParam0->f_175.f_138 <= iVar3)
		{
			iVar4 = 1;
		}
		_databinding_write_data_bool(uParam0->f_175.f_71, 1);
		_databinding_write_data_string(uParam0->f_175.f_72, _create_var_string(10, "STRING", func_308(sVar2, 109029619)));
		_databinding_write_data_bool(uParam0->f_175.f_73, iVar4);
		iVar5 = 0;
		iVar6 = 0;
		if (uParam0->f_18 == 785897420)
		{
			iVar5 = 1;
		}
		else if (uParam0->f_18 == -776039804 || uParam0->f_18 == -798342154)
		{
			iVar5 = 1;
			iVar6 = 1;
		}
		if (iVar5 == 1)
		{
			iVar7 = func_428(uParam0->f_592[uParam0->f_21]);
			_databinding_write_data_bool(uParam0->f_175.f_75, iVar5);
			_databinding_write_data_string(uParam0->f_175.f_76, _create_var_string(2, "NUMBER", iVar7));
		}
		if (iVar6 == 1)
		{
			iVar8 = func_428(uParam0->f_592[iVar0]);
			_databinding_write_data_bool(uParam0->f_175.f_78, iVar6);
			_databinding_write_data_string(uParam0->f_175.f_79, _create_var_string(2, "NUMBER", iVar8));
		}
	}
}

bool func_314(var uParam0, int iParam1)
{
	iVar0 = get_random_int_in_range(0, 3);
	if (iParam1 == 0)
	{
		if (Global_1900325->f_4 == 76)
		{
			*uParam0->f_439.f_6[iParam1] = { -245.23f, 765.1f, 117.15f };
			if (iVar0 == 0)
			{
				*uParam0->f_439.f_13[iParam1] = { -241.98f, 770.77f, 117.09f };
				uParam0->f_439.f_20[iParam1] = 66f;
			}
			else if (iVar0 == 1)
			{
				*uParam0->f_439.f_13[iParam1] = { -241.61f, 769.92f, 117.09f };
				uParam0->f_439.f_20[iParam1] = 51.97f;
			}
			else
			{
				*uParam0->f_439.f_13[iParam1] = { -241.1f, 769.49f, 117.09f };
				uParam0->f_439.f_20[iParam1] = 62.75f;
			}
		}
		else if (Global_1900325->f_4 == 26)
		{
			*uParam0->f_439.f_6[iParam1] = { -1811.93f, -433.3f, 157.39f };
			if (iVar0 == 0)
			{
				*uParam0->f_439.f_13[iParam1] = { -1826.21f, -436.18f, 158.87f };
				uParam0->f_439.f_20[iParam1] = 358f;
			}
			else if (iVar0 == 1)
			{
				*uParam0->f_439.f_13[iParam1] = { -1827.41f, -435.85f, 158.83f };
				uParam0->f_439.f_20[iParam1] = 326.5f;
			}
			else
			{
				*uParam0->f_439.f_13[iParam1] = { -1824.31f, -436.12f, 158.99f };
				uParam0->f_439.f_20[iParam1] = 44.32f;
			}
		}
		else if (Global_1900325->f_4 == 92)
		{
			*uParam0->f_439.f_6[iParam1] = { 2955.39f, 498.68f, 44.86f };
			if (iVar0 == 0)
			{
				*uParam0->f_439.f_13[iParam1] = { 2947.37f, 498.6f, 44.73f };
				uParam0->f_439.f_20[iParam1] = 28f;
			}
			else if (iVar0 == 1)
			{
				*uParam0->f_439.f_13[iParam1] = { 2947.29f, 497.81f, 44.73f };
				uParam0->f_439.f_20[iParam1] = 22.24f;
			}
			else
			{
				*uParam0->f_439.f_13[iParam1] = { 2945.72f, 497.15f, 44.77f };
				uParam0->f_439.f_20[iParam1] = 327.2f;
			}
		}
	}
	else if (Global_1900325->f_4 == 76)
	{
		*uParam0->f_439.f_6[iParam1] = { -234.63f, 773.15f, 116.86f };
		if (iVar0 == 0)
		{
			*uParam0->f_439.f_13[iParam1] = { -242.58f, 772.52f, 117.09f };
			uParam0->f_439.f_20[iParam1] = 128f;
		}
		else if (iVar0 == 1)
		{
			*uParam0->f_439.f_13[iParam1] = { -242.12f, 772.11f, 117.09f };
			uParam0->f_439.f_20[iParam1] = 117.24f;
		}
		else
		{
			*uParam0->f_439.f_13[iParam1] = { -242.03f, 771.86f, 117.08f };
			uParam0->f_439.f_20[iParam1] = 104.03f;
		}
	}
	else if (Global_1900325->f_4 == 26)
	{
		*uParam0->f_439.f_6[iParam1] = { -1830.13f, -402.49f, 160.43f };
		if (iVar0 == 0)
		{
			*uParam0->f_439.f_13[iParam1] = { -1824.5f, -432.3f, 158.93f };
			uParam0->f_439.f_20[iParam1] = 123f;
		}
		else if (iVar0 == 1)
		{
			*uParam0->f_439.f_13[iParam1] = { -1825.35f, -430.94f, 158.95f };
			uParam0->f_439.f_20[iParam1] = 158.25f;
		}
		else
		{
			*uParam0->f_439.f_13[iParam1] = { -1826.7f, -430.7f, 158.95f };
			uParam0->f_439.f_20[iParam1] = 181.8f;
		}
	}
	else if (Global_1900325->f_4 == 92)
	{
		*uParam0->f_439.f_6[iParam1] = { 2940.4f, 505.84f, 44.89f };
		if (iVar0 == 0)
		{
			*uParam0->f_439.f_13[iParam1] = { 2944.24f, 499.87f, 44.76f };
			uParam0->f_439.f_20[iParam1] = 290f;
		}
		else if (iVar0 == 1)
		{
			*uParam0->f_439.f_13[iParam1] = { 2943.71f, 498.26f, 44.77f };
			uParam0->f_439.f_20[iParam1] = 304.91f;
		}
		else
		{
			*uParam0->f_439.f_13[iParam1] = { 2942.92f, 499.16f, 44.79f };
			uParam0->f_439.f_20[iParam1] = 284.15f;
		}
	}
	return !func_276(*uParam0->f_439.f_6[iParam1]);
}

bool func_315(var uParam0, int iParam1)
{
	if ((((uParam0->f_18 == 785897420 || func_5(uParam0, 256)) || uParam0->f_20 < 2) || uParam0->f_20 > 5) || func_276(*uParam0->f_439.f_6[iParam1]))
	{
		return false;
	}
	if (func_431(uParam0) > 0)
	{
		return false;
	}
	if (!func_80(uParam0->f_439.f_23[iParam1]))
	{
		func_81(uParam0->f_439.f_23[iParam1]);
	}
	if ((func_535(&(uParam0->f_439.f_37)) > 5f && func_535(uParam0->f_439.f_23[iParam1]) > IntToFloat((5 + (20 * iParam1)))) && is_entity_dead(&(uParam0->f_439.f_3[iParam1])))
	{
		if (uParam0->f_491.f_1 == 0)
		{
			uParam0->f_491.f_1 = func_549(func_83(), 0, -1);
		}
		if (uParam0->f_491.f_1 == 0)
		{
			return false;
		}
		request_model(uParam0->f_491.f_1, false);
		if (!has_model_loaded(uParam0->f_491.f_1))
		{
			return false;
		}
		uParam0->f_439.f_3[iParam1] = func_550(uParam0->f_491.f_1, *uParam0->f_439.f_6[iParam1], 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0);
		remove_all_ped_weapons(&(uParam0->f_439.f_3[iParam1]), true, true);
		set_ped_combat_attributes(&(uParam0->f_439.f_3[iParam1]), 17, true);
		iVar0 = get_random_int_in_range(0, 3);
		if (iVar0 == 0)
		{
			uParam0->f_439.f_43[iParam1] = "MINIGAME_VOFX_MALE_AGGRESSIVE_01";
		}
		else if (iVar0 == 1)
		{
			uParam0->f_439.f_43[iParam1] = "MINIGAME_VOFX_MALE_AVOID_01";
		}
		else
		{
			uParam0->f_439.f_43[iParam1] = "MINIGAME_VOFX_MALE_TIMID_01";
		}
		func_6(uParam0, 256);
		func_81(&(uParam0->f_439.f_37));
		uParam0->f_439.f_40[iParam1] = 0;
		set_model_as_no_longer_needed(uParam0->f_491.f_1);
	}
	return !is_entity_dead(&(uParam0->f_439.f_3[iParam1]));
}

void func_316(var uParam0, int iParam1)
{
	if (uParam0->f_592[0]->f_59 == 0 || uParam0->f_592[1]->f_59 == 0)
	{
		return;
	}
	iVar0 = 0;
	if (uParam0->f_20 == 5)
	{
		if (uParam0->f_50 == 0)
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar1 = func_161(uParam0->f_21);
		if (func_199(iVar1))
		{
			iVar0 = iVar1;
		}
	}
	_0x66f9eb44342bb4c5(&(uParam0->f_439.f_3[iParam1]), &(uParam0->f_592[iVar0]->f_34));
}

bool func_317(var uParam0, int iParam1)
{
	if (func_211(uParam0, 0))
	{
		return true;
	}
	if (!func_438(&(uParam0->f_439.f_3[iParam1]), -1098463898))
	{
		iVar0 = get_random_int_in_range(0, 5);
		if (iVar0 == 0)
		{
			task_start_scenario_at_position(&(uParam0->f_439.f_3[iParam1]), -439112356, *uParam0->f_439.f_13[iParam1], &(uParam0->f_439.f_20[iParam1]), -1, true, false, 0, -1f, false);
		}
		else if (iVar0 == 1)
		{
			task_start_scenario_at_position(&(uParam0->f_439.f_3[iParam1]), 2087366558, *uParam0->f_439.f_13[iParam1], &(uParam0->f_439.f_20[iParam1]), -1, true, false, 0, -1f, false);
		}
		else if (iVar0 == 2)
		{
			task_start_scenario_at_position(&(uParam0->f_439.f_3[iParam1]), 830847823, *uParam0->f_439.f_13[iParam1], &(uParam0->f_439.f_20[iParam1]), -1, true, false, 0, -1f, false);
		}
		else if (iVar0 == 3)
		{
			task_start_scenario_at_position(&(uParam0->f_439.f_3[iParam1]), -1124614608, *uParam0->f_439.f_13[iParam1], &(uParam0->f_439.f_20[iParam1]), -1, true, false, 0, -1f, false);
		}
		else
		{
			task_start_scenario_at_position(&(uParam0->f_439.f_3[iParam1]), 871322766, *uParam0->f_439.f_13[iParam1], &(uParam0->f_439.f_20[iParam1]), -1, true, false, 0, -1f, false);
		}
	}
	else if (vdist(get_entity_coords(&(uParam0->f_439.f_3[iParam1]), true, false), *uParam0->f_439.f_13[iParam1]) < 2f)
	{
		return true;
	}
	return false;
}

void func_318(var uParam0, int iParam1)
{
	if (uParam0->f_439.f_46 == 0)
	{
		return;
	}
	else if (uParam0->f_439.f_46 == 6)
	{
		if (uParam0->f_439.f_47 != iParam1 || func_551(&(uParam0->f_439.f_49)) < 500)
		{
			return;
		}
		iVar0 = get_random_int_in_range(0, 4);
		func_552(&(uParam0->f_439.f_3[iParam1]), uParam0->f_439.f_48, -128067431, 0, 0, &(uParam0->f_439.f_43[iParam1]), iVar0, 1);
		func_141(&(uParam0->f_439.f_49));
		uParam0->f_439.f_46 = 0;
		uParam0->f_439.f_47 = -1;
	}
	else if (uParam0->f_439.f_47 == -1)
	{
		func_81(&(uParam0->f_439.f_49));
		uParam0->f_439.f_47 = iParam1;
		if (uParam0->f_439.f_46 == 1)
		{
			uParam0->f_439.f_48 = "FFF_SPECTATOR_VOCALFX_LVL1";
		}
		else if (uParam0->f_439.f_46 == 2)
		{
			uParam0->f_439.f_48 = "FFF_SPECTATOR_VOCALFX_LVL2";
		}
		else if (uParam0->f_439.f_46 == 3)
		{
			uParam0->f_439.f_48 = "FFF_SPECTATOR_VOCALFX_LVL3";
		}
		else if (uParam0->f_439.f_46 == 4)
		{
			uParam0->f_439.f_48 = "FFF_SPECTATOR_VOCALFX_LVL4";
		}
		else
		{
			uParam0->f_439.f_48 = "FFF_SPECTATOR_VOCALFX_MOCK_LVL2";
		}
		uParam0->f_439.f_46 = 6;
	}
}

bool func_319(var uParam0, int iParam1)
{
	if (func_211(uParam0, 0))
	{
		return true;
	}
	if (!func_80(uParam0->f_439.f_30[iParam1]))
	{
		func_81(uParam0->f_439.f_30[iParam1]);
	}
	if (func_535(uParam0->f_439.f_30[iParam1]) > IntToFloat((30 + (10 * iParam1))))
	{
		return true;
	}
	return false;
}

void func_320(var uParam0)
{
	if (func_135(uParam0, 1024))
	{
		_databinding_remove_data_entry(&(uParam0->f_6[0]));
		_databinding_remove_data_entry(&(uParam0->f_6[1]));
		_databinding_clear_binding_array(uParam0->f_5);
		func_137(uParam0, 1024);
	}
}

bool func_321(var uParam0, float fParam1)
{
	if (!func_80(uParam0))
	{
		return false;
	}
	if (func_553(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0)
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

void func_323(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_322(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_554(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_555(iVar0);
	*uParam0 = 0;
}

void func_324(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_325(int iParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1946804->f_2535.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_556(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && Global_1946804->f_2535.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_557(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1))
		{
			func_558(iVar1, Global_1946804->f_2535.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*Global_1946804->f_2535.f_43[iVar0] = { *Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] };
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = 0;
	return true;
}

int func_326(int iParam0)
{
	Var1 = -961687407;
	if (func_34() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_559(iVar0);
}

int func_327(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_560(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_560(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_561(0))
	{
	}
	func_562(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_328(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_62(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_329(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_330(var uParam0, int iParam1, bool bParam2)
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

void func_331(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_563(iParam0);
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

void func_332(int iParam0)
{
	if (func_145(iParam0))
	{
		if (does_entity_exist(func_144(iParam0)))
		{
			func_396(iParam0, 67108864, 1);
			func_151(iParam0, 19, 1);
		}
	}
}

bool func_333(int iParam0)
{
	if (!func_145(iParam0))
	{
		return false;
	}
	if (!func_146(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

float func_334(int iParam0)
{
	if (!func_62(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_335(int iParam0)
{
	iVar0 = func_144(iParam0);
	iVar1 = func_153(iParam0, 0);
	func_564(iParam0, iVar0);
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

bool func_336(int iParam0)
{
	if (!func_62(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_337(int iParam0)
{
	if (!func_62(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_338(int iParam0, int iParam1, bool bParam2)
{
	if (!func_62(iParam0))
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

int func_339(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_62(iParam0))
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	if (func_152(iVar0, 0))
	{
		if (func_152(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_336(iParam0)) || func_337(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_565(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_566(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_567(iParam0);
					_0x7b204f88f6c3d287(func_568(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_568(iParam0, 0));
					func_569(iParam0);
				}
			}
			else
			{
				if (func_328(iParam0, 32768, 1))
				{
					iVar2 = func_568(iParam0, 0);
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
		if (func_152((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_328(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_567(iParam0);
				_0x7b204f88f6c3d287(func_568(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_568(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_567(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_570(iParam0, 0);
	return 1;
}

float func_340()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_341(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_343(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_170(iParam0);
}

int func_344(int iParam0)
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

bool func_345()
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

bool func_346(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_347(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_348(int iParam0)
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

int func_349(int iParam0)
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

bool func_350(int iParam0, bool bParam1)
{
	switch (func_343(iParam0))
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

void func_351(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_571(iParam0);
	}
	else
	{
		func_572(iParam0, iParam1);
	}
	func_573();
}

bool func_352(int iParam0)
{
	iVar0 = func_574(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_353(int iParam0)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	switch (func_38(iParam0))
	{
		case 1:
			switch (func_182(iParam0))
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
			switch (func_182(iParam0))
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

void func_354(int iParam0)
{
	iVar2 = func_575(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_576(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_578(func_577(iParam0), 6);
}

void func_355(int iParam0)
{
	iVar2 = func_575(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_576(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_579(func_577(iParam0), 6);
}

int func_356(int iParam0)
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

int func_357(int iParam0)
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
	func_580(iParam0, Global_1898164->f_162);
	return 1;
}

int func_358(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_359(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_360(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_361(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_1;
	}
	return Global_42606[iParam0]->f_1;
}

int func_362(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0]);
	}
	return &(Global_42606[iParam0]);
}

int func_363(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_2;
	}
	return Global_42606[iParam0]->f_2;
}

void func_364(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_365(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

void func_367(int iParam0)
{
	Global_1955569->f_753.f_1 = 0f;
	Global_1955569->f_753 = iParam0;
}

bool func_368(int iParam0)
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

char* func_369()
{
	return "unnamed";
}

int func_370(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 3)
	{
		iParam0 = 0;
	}
	if (Global_1900325->f_4 == 76)
	{
		if (iParam0 == 0)
		{
			iVar0 = 50;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 200;
		}
		else
		{
			iVar0 = 400;
		}
	}
	else if (Global_1900325->f_4 == 26)
	{
		if (iParam0 == 0)
		{
			iVar0 = 75;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 150;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 300;
		}
		else
		{
			iVar0 = 600;
		}
	}
	else if (Global_1900325->f_4 == 92)
	{
		if (iParam0 == 0)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 200;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 400;
		}
		else
		{
			iVar0 = 800;
		}
	}
	else if (iParam0 == 0)
	{
		iVar0 = 10;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 20;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 80;
	}
	return iVar0;
}

void func_371()
{
	if (Global_1900325->f_23 < 3)
	{
		func_24(Global_1900325->f_23 + 1);
	}
}

char* func_372(var uParam0, int iParam1)
{
	sVar0 = "Invalid";
	if (!is_entity_dead(&(uParam0->f_592[iParam1])))
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			if (func_382())
			{
				sVar0 = "COMP_JOHN";
			}
			else
			{
				sVar0 = "PLYR_ARTHUR";
			}
		}
		else if (func_72(&(uParam0->f_592[iParam1])))
		{
			if (func_19(&(uParam0->f_592[iParam1])) != -1)
			{
				sVar0 = func_581(func_19(&(uParam0->f_592[iParam1])), 0);
			}
		}
		else
		{
			sVar0 = "MGFFF_AI_OPP_1";
			if (Global_1900325->f_4 == 76)
			{
				if (Global_1900325->f_23 == 0)
				{
					sVar0 = "MGFFF_AI_OPP_1";
				}
				else if (Global_1900325->f_23 == 1)
				{
					sVar0 = "MGFFF_AI_OPP_2";
				}
				else if (Global_1900325->f_23 == 2)
				{
					sVar0 = "MGFFF_AI_OPP_3";
				}
				else if (Global_1900325->f_23 == 3)
				{
					sVar0 = "MGFFF_AI_OPP_4";
				}
			}
			else if (Global_1900325->f_4 == 26)
			{
				if (Global_1900325->f_23 == 0)
				{
					sVar0 = "MGFFF_AI_OPP_5";
				}
				else if (Global_1900325->f_23 == 1)
				{
					sVar0 = "MGFFF_AI_OPP_6";
				}
				else if (Global_1900325->f_23 == 2)
				{
					sVar0 = "MGFFF_AI_OPP_7";
				}
				else if (Global_1900325->f_23 == 3)
				{
					sVar0 = "MGFFF_AI_OPP_8";
				}
			}
			else if (Global_1900325->f_4 == 92)
			{
				if (Global_1900325->f_23 == 0)
				{
					sVar0 = "MGFFF_AI_OPP_9";
				}
				else if (Global_1900325->f_23 == 1)
				{
					sVar0 = "MGFFF_AI_OPP_10";
				}
				else if (Global_1900325->f_23 == 2)
				{
					sVar0 = "MGFFF_AI_OPP_11";
				}
				else if (Global_1900325->f_23 == 3)
				{
					sVar0 = "MGFFF_AI_OPP_12";
				}
			}
		}
	}
	return sVar0;
}

void func_373(var uParam0)
{
	if (!decor_exist_on(*uParam0, "FFF_Lives"))
	{
		decor_set_int(*uParam0, "FFF_Lives", 0);
	}
	if (!decor_exist_on(*uParam0, "FFF_Time"))
	{
		decor_set_int(*uParam0, "FFF_Time", 0);
	}
	if (!decor_exist_on(*uParam0, "FFF_Laps"))
	{
		decor_set_int(*uParam0, "FFF_Laps", 0);
	}
	if (!decor_exist_on(*uParam0, "FFF_Rounds"))
	{
		decor_set_int(*uParam0, "FFF_Rounds", 0);
	}
	if (!decor_exist_on(*uParam0, "FFF_Seated"))
	{
		decor_set_bool(*uParam0, "FFF_Seated", false);
	}
}

int func_374(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_582(iParam0, iParam1, bParam2, bParam3);
}

void func_375(var uParam0)
{
	iVar0 = func_370(Global_1900325->f_23);
	func_542(*uParam0, iVar0);
	_0x6569f31a01b4c097(*uParam0, 0, 1);
	_0x6569f31a01b4c097(*uParam0, 1, 1);
}

int func_376(var uParam0, int iParam1)
{
	if (Global_1900325->f_1 != 1 && !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return 4;
	}
	if (Global_1900325->f_1 == 1 && Global_1900325->f_36 == 1)
	{
		return 1;
	}
	fVar0 = func_583(*Global_1900325->f_9[iParam1], get_entity_coords(&(uParam0->f_592[iParam1]), true, false), 1);
	fVar1 = (&Global_1900325->f_16[iParam1] - fVar0);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	else if (fVar1 > 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 > 180f)
	{
		return 2;
	}
	return 3;
}

void func_377(var uParam0, int iParam1)
{
	if (uParam0->f_64 != iParam1)
	{
		uParam0->f_64 = iParam1;
	}
}

void func_378(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_69 = -1f;
		uParam0->f_70 = -1f;
		uParam0->f_71 = -1f;
		uParam0->f_72 = -1f;
		uParam0->f_73 = -1f;
		uParam0->f_75 = -1f;
		uParam0->f_76 = -1f;
		uParam0->f_77 = -1f;
		uParam0->f_78 = -1f;
	}
	_0xeaf87da2be78a15b(*uParam0, "ANIM_RATE");
	_0xeaf87da2be78a15b(*uParam0, "STABBING_SPEED");
	_0xeaf87da2be78a15b(*uParam0, "STAB_SUCCESS");
	_0xeaf87da2be78a15b(*uParam0, "WINCE");
	_0xeaf87da2be78a15b(*uParam0, "VARIATION_RANDOM");
	_0xeaf87da2be78a15b(*uParam0, "GAME_SPEED");
	_0xeaf87da2be78a15b(*uParam0, "INSIDE_OUTSIDE");
	_0xeaf87da2be78a15b(*uParam0, "EXIT_SIDE");
	_0xeaf87da2be78a15b(*uParam0, "GAME_OUTCOME");
	_0x3bbeecc5b8f35318(*uParam0, "HAND_POS");
}

void func_379(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		uParam0->f_592[iParam1]->f_77 = get_random_float_in_range(0f, 1f);
		if (Global_1900325->f_4 == 71 && !is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			uParam0->f_592[iParam1]->f_77 = 1f;
		}
		else if (Global_1900325->f_4 == 92)
		{
			if (iParam1 == 0)
			{
				uParam0->f_592[iParam1]->f_77 = 0f;
			}
			else
			{
				uParam0->f_592[iParam1]->f_77 = 1f;
			}
		}
	}
	else
	{
		iVar0 = func_161(iParam1);
		if (uParam0->f_592[iVar0]->f_77 < 0.5f)
		{
			uParam0->f_592[iParam1]->f_77 = 0f;
		}
		else
		{
			uParam0->f_592[iParam1]->f_77 = 1f;
		}
	}
}

void func_380(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_381(var uParam0, int iParam1)
{
	if (uParam0->f_491.f_11 != -1)
	{
		if (iParam1 == 1)
		{
			_0xb1a196bafe650402(uParam0->f_491.f_11, uParam0->f_54);
		}
		else
		{
			_0xae6de22de0ed4554(uParam0->f_491.f_11, uParam0->f_54);
		}
	}
}

bool func_382()
{
	if (func_34() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_383(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (&uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (is_bit_set(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	set_bit(&(uParam0->f_22), iParam2);
	clear_bit(&(uParam0->f_23), iParam2);
	return 1;
}

void func_384(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_144(iParam0);
	if (!func_145(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_385(int iParam0, int iParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_386(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_62(iParam0))
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
					iParam4 = func_584(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_168((*Global_1360165)[iParam0]->f_4.f_2) || func_167((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_584(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_585((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_586(iParam0, 0))
					{
						func_20(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_587(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_151(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_152(func_144(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_152(func_159(iParam0), 0))
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

void func_387(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_588(iParam0, bParam3);
	}
	else
	{
		func_589(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_590(iParam0, bParam3);
	}
	else
	{
		func_591(iParam0, bParam3);
	}
}

void func_388(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_592(Global_35) && is_player_teleport_active())
	{
	}
	if (func_593(iParam0))
	{
		if (func_594(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_49(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_388(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_388(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_49(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_49(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_49(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_49(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_49(iParam5, 129))
	{
		if (func_49(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_49(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_49(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_49(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_593(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_49(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_49(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_145(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_595(iParam0, iParam1);
	return bVar0;
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (!func_389(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_20(iParam0, 25, 1);
	}
}

void func_391(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_596(iParam2))
		{
			iVar0 = func_597(iParam2, -1);
			if (func_598(iParam1, iVar0))
			{
				if (func_599(iParam1, iVar0))
				{
					if (func_600(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_601(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_602(iParam0, iParam1, 0);
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
			func_20(iParam0, 66, 0);
		}
	}
}

void func_392(int iParam0)
{
	func_603(iParam0);
	func_604(iParam0, 0);
}

void func_393(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

bool func_394(int iParam0)
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

void func_395(int iParam0, int iParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_605(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_605(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_396(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_145(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_397()
{
	_request_scenario_type(-1103796964, 9, 0, 0);
	if (!_has_scenario_type_loaded(-1103796964, false))
	{
		return false;
	}
	return true;
}

bool func_398(var uParam0)
{
	if (func_135(uParam0, 1))
	{
		return true;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = _uiflowblock_request(-1534086282);
	}
	func_606(uParam0);
	if (_uiflowblock_is_loaded(*uParam0))
	{
		func_521(uParam0, 1);
		_uiflowblock_enter(*uParam0, -2013879463);
		if (!_uistatemachine_exists(-1399811580) && !_uistatemachine_create(-1399811580, *uParam0))
		{
		}
	}
	return func_135(uParam0, 1);
}

bool func_399(var uParam0)
{
	if (func_135(uParam0, 64))
	{
		return true;
	}
	if (uParam0->f_81.f_6 == 0)
	{
		uParam0->f_81.f_6 = _uiflowblock_request(685315882);
	}
	if (_uiflowblock_is_loaded(uParam0->f_81.f_6))
	{
		func_521(uParam0, 64);
		_uiflowblock_enter(uParam0->f_81.f_6, 0);
		if (!_uistatemachine_exists(-1151031648) && !_uistatemachine_create(-1151031648, uParam0->f_81.f_6))
		{
		}
	}
	return func_135(uParam0, 64);
}

bool func_400(var uParam0)
{
	if (uParam0->f_491.f_11 == -1)
	{
		uParam0->f_491.f_11 = _0xa1300de03e5d1973("FiveFingerFillet");
	}
	return uParam0->f_491.f_11 != -1;
}

void func_401(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_369());
	}
}

void func_402(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_369());
	}
}

int func_403(int iParam0)
{
	iVar0 = 0;
	vVar2 = -1;
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < 33)
	{
		if (func_607(iVar1, &vVar2, 1) && vVar2.y == iParam0)
		{
			iVar12 = func_608(iParam0, iVar1);
			if (func_37(iVar12))
			{
				iVar0 = (iVar0 + func_609(iVar12));
			}
		}
		iVar1++;
	}
	return iVar0;
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

var func_405(char* sParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_2 = cParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_406(var uParam0, int iParam1)
{
	if (uParam0->f_61 == 1)
	{
		if (uParam0->f_18 == 785897420 || func_5(uParam0, 2048))
		{
			if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
			{
				return false;
			}
		}
	}
	return func_64(uParam0->f_592[iParam1]);
}

bool func_407(var uParam0)
{
	return func_610(uParam0);
}

bool func_408(var uParam0)
{
	if (func_5(uParam0, 65536))
	{
		return false;
	}
	return uParam0->f_52 >= 3;
}

void func_409(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	uParam0->f_101 = iParam1;
	func_611(uParam0, "FFF_Laps", iParam1);
}

void func_410(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	uParam0->f_98 = iParam1;
	func_611(uParam0, "FFF_Lives", iParam1);
}

int func_411(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	iVar0 = func_612(uParam0->f_18, 1);
	return uParam0->f_1[iVar0]->f_1;
}

void func_412(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	uParam0->f_97 = iParam1;
	func_611(uParam0, "FFF_Rounds", iParam1);
}

bool func_413(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_414(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_415(int iParam0, bool bParam1)
{
	if (bParam1 && !func_322(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

int func_416(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_613(iParam0);
}

void func_417(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_614(uParam0, iParam1, sParam2))
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

bool func_418(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_615(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_419(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_616(iParam0, iParam1);
}

int func_420(var uParam0)
{
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_225(uParam0->f_592[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_421(var uParam0, int iParam1)
{
	if (func_306(iParam1))
	{
		uParam0->f_22 = iParam1;
		uParam0->f_24[uParam0->f_22] = 1;
		func_59(uParam0, 512);
	}
}

bool func_422(var uParam0, int iParam1)
{
	if (uParam0->f_18 != 785897420)
	{
		return true;
	}
	if (iParam1 == 8192 || iParam1 == 16384)
	{
		return true;
	}
	return false;
}

char* func_423(var uParam0, int iParam1, int iParam2)
{
	sVar0 = "";
	bVar2 = is_ped_a_player(&(uParam0->f_592[iParam2]));
	switch (iParam1)
	{
		case 1:
			return "GENERIC_GREET";
		case 2:
			return "LEAVE_NEUTRAL";
		case 4:
			iVar1 = get_random_int_in_range(0, 2);
			if (iVar1 == 0)
			{
				return "SUCCESSFUL_LEAVE_GAME";
			}
			else
			{
				return "LEAVE_GOOD_GAME";
			}
			break;
		case 8:
			iVar1 = get_random_int_in_range(0, 2);
			if ((iVar1 == 0 || (bVar2 == 0 && are_strings_equal(&(uParam0->f_167), "0842_S_M_M_UniButchers_01_WHITE_01"))) || (bVar2 == 0 && are_strings_equal(&(uParam0->f_167), "0843_S_M_M_UniButchers_01_WHITE_02")))
			{
				return "UNSUCCESSFUL_LEAVE_GAME";
			}
			else
			{
				return "LEAVE_VERY_BAD_GAME";
			}
			break;
		case 16:
			return "PLACE_BID";
		case 32:
			return "HIGH_WAGER";
		case 64:
			return "START";
		case 128:
			return "START_COCKY";
		case 256:
			return "START_NERVOUS";
		case 512:
			return "START_AGGRO";
		case 1024:
			return "TAKING_TOO_LONG";
		case 2048:
			return "MOVING_SLOW";
		case 4096:
			return "SWITCH";
		case 8192:
			iVar1 = get_random_int_in_range(0, 3);
			if (iVar1 == 0)
			{
				return "REACTION_STAB_LVL3";
			}
			else if (iVar1 == 1)
			{
				return "REACTION_STAB_LVL4";
			}
			else
			{
				return "UNSUCCESSFUL";
			}
			break;
		case 16384:
			iVar1 = get_random_int_in_range(0, 2);
			if (iVar1 == 0)
			{
				return "REACTION_STAB_LVL1";
			}
			else
			{
				return "REACTION_STAB_LVL2";
			}
			break;
		case 32768:
			return "TAUNT_DOING_WELL";
		case 65536:
			return "TAUNT_OPPONENT_DOING_WELL";
		case 131072:
			return "SUCCESSFUL";
		case 262144:
			iVar1 = get_random_int_in_range(0, 2);
			if (iVar1 == 0)
			{
				return "BIG_LOSS";
			}
			else
			{
				return "TAUNT_DOING_POORLY";
			}
			break;
		case 524288:
			return "BIG_WIN";
		case 1048576:
			return "TAUNT_DOING_POORLY";
		case 2097152:
			return "WINNING_STREAK";
		case 4194304:
			return "COMMENT_WINNING_STREAK";
		case 8388608:
			iVar1 = get_random_int_in_range(0, 2);
			if (iVar1 == 0)
			{
				return "COMMENT_WINNING_STREAK_NERVOUS";
			}
			else
			{
				return "COMMENT_WINNING_STREAK_FRUSTRATED";
			}
			break;
		case 16777216:
			return "COMMENT_LEAVE";
		case 33554432:
			return "TAUNT_OPPONENT_NOT_DOING_WELL";
		case 67108864:
			return "EXISTING_PLAYER_GREET";
		case 134217728:
			return "COMMENT_LEAVE";
	}
	return sVar0;
}

bool func_424(var uParam0)
{
	if (!func_322(*uParam0) || uParam0->f_2 == 0)
	{
		return false;
	}
	return is_control_pressed(2, -385266784);
}

bool func_425(var uParam0)
{
	return uParam0->f_3 == 1;
}

bool func_426(var uParam0)
{
	return (func_80(&(uParam0->f_109)) && func_459(&(uParam0->f_109)) > uParam0->f_108);
}

int func_427(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (uParam0->f_592[iVar1]->f_3 == 1 && uParam0->f_592[iVar1]->f_4 == 1)
		{
			return iVar1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_428(var uParam0)
{
	return uParam0->f_101;
}

int func_429(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	iVar0 = func_612(uParam0->f_18, 1);
	if (uParam0->f_1[iVar0]->f_3 == 0)
	{
		if (!is_ped_a_player(&(uParam0->f_592[0])) || !is_ped_a_player(&(uParam0->f_592[1])))
		{
			if (func_617(uParam0) == 0)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			return 2;
		}
	}
	return uParam0->f_1[iVar0]->f_3;
}

int func_430(var uParam0)
{
	iVar0 = func_551(&(uParam0->f_115));
	if (iVar0 > 6000000)
	{
		iVar0 = 6000000;
	}
	return iVar0;
}

int func_431(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_309(uParam0->f_592[iVar1]) > iVar0)
		{
			iVar0 = func_309(uParam0->f_592[iVar1]);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_432(var uParam0, int iParam1)
{
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (func_618() && func_617(uParam0) >= 2)
		{
			func_6(uParam0, 1024);
			return true;
		}
	}
	else if (func_617(uParam0) >= 2)
	{
		if (Global_1900325->f_1 == 1)
		{
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_433(var uParam0)
{
	return uParam0->f_98;
}

bool func_434(var uParam0)
{
	if (func_230(uParam0))
	{
		if (uParam0->f_51 == 0 || uParam0->f_51 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_435(var uParam0, int iParam1)
{
	if (!is_ped_a_player(&(uParam0->f_592[iParam1])) || !func_530(uParam0->f_592[iParam1]))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_491.f_10))
	{
		uParam0->f_491.f_10 = _create_anim_scene("lightrig@five_finger_fillet_generic", 2, "plMain", false, true);
	}
	else if (!_is_anim_scene_started(uParam0->f_491.f_10, false))
	{
		if (!_is_anim_scene_loaded(uParam0->f_491.f_10, true, false))
		{
			if (!_is_anim_scene_loading(uParam0->f_491.f_10, true))
			{
				load_anim_scene(uParam0->f_491.f_10);
			}
		}
		else
		{
			set_anim_scene_origin(uParam0->f_491.f_10, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 2);
			start_anim_scene(uParam0->f_491.f_10);
			func_619(uParam0);
		}
	}
	else
	{
		bVar0 = false;
		if (uParam0->f_592[iParam1]->f_64 >= 26)
		{
			bVar0 = true;
		}
		if (bVar0 == 0)
		{
			func_619(uParam0);
		}
		else
		{
			func_11(uParam0);
		}
		set_anim_scene_bool(uParam0->f_491.f_10, "breakout", bVar0, false);
	}
}

bool func_436(var uParam0)
{
	bVar1 = get_current_ped_weapon(*uParam0, &iVar0, true, 0, true);
	bVar3 = get_current_ped_weapon(*uParam0, &iVar2, true, 1, true);
	iVar4 = _0x08ff1099ed2e6e21(*uParam0);
	if (((bVar1 == 1 && iVar0 == iVar4) && bVar3 == 1) && iVar2 == iVar4)
	{
		return true;
	}
	if (!func_80(&(uParam0->f_13)))
	{
		func_81(&(uParam0->f_13));
	}
	if (func_535(&(uParam0->f_13)) > 3f)
	{
		return true;
	}
	return false;
}

bool func_437(var uParam0, int iParam1)
{
	vVar0 = { func_620(uParam0, iParam1) };
	Var3 = &Global_1900325->f_16[iParam1];
	task_follow_nav_mesh_to_coord_advanced(&(uParam0->f_592[iParam1]), vVar0, 1f, 20000, 0.25f, 5120, Var3, &(Global_1900325->f_16[iParam1]));
	return func_438(&(uParam0->f_592[iParam1]), -1672495956);
}

bool func_438(int iParam0, int iParam1)
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

bool func_439(var uParam0, int iParam1)
{
	if (!func_438(&(uParam0->f_592[iParam1]), -2017877118))
	{
		sVar0 = func_443(uParam0->f_592[iParam1]->f_8);
		iVar1 = 390;
		set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 0);
		task_play_anim_advanced(&(uParam0->f_592[iParam1]), func_78(0, uParam0->f_592[iParam1]->f_11), sVar0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 2f, -8f, -1, iVar1, 0f, 2, 1, 0);
		_0x2208438012482a1a(&(uParam0->f_592[iParam1]), false, false);
	}
	return func_438(&(uParam0->f_592[iParam1]), -2017877118);
}

void func_440(var uParam0, int iParam1)
{
	iVar0 = func_161(iParam1);
	if (func_199(iVar0) && func_64(uParam0->f_592[iVar0]))
	{
		if (!is_ped_a_player(&(uParam0->f_592[iVar0])) || uParam0->f_53 > 0)
		{
			func_226(uParam0, 1, iVar0);
		}
	}
}

bool func_441(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(*uParam2))
	{
		*uParam2 = _create_weapon_object(-618550132, 1, get_entity_coords(*uParam1, true, false), true, 1f);
		_0x72e30372e7cc4415(*uParam2, 0);
		if (iParam4 == 1)
		{
			func_458(uParam1, uParam2, iParam3, 0);
		}
		else
		{
			func_621(uParam0, uParam2, iParam3);
		}
	}
	return does_entity_exist(*uParam2);
}

void func_442(var uParam0, var uParam1, int iParam2)
{
	if (does_entity_exist(*uParam1) && is_entity_attached(*uParam1))
	{
		detach_entity(*uParam1, false, true);
		func_621(uParam0, uParam1, iParam2);
	}
}

char* func_443(int iParam0)
{
	if (iParam0 == 2)
	{
		return "enter_left";
	}
	return "enter_right";
}

bool func_444(var uParam0, int iParam1)
{
	if (func_496(&(uParam0->f_592[iParam1])))
	{
		return true;
	}
	if (func_276(Global_1900325->f_5))
	{
		return false;
	}
	if ((func_438(&(uParam0->f_592[iParam1]), -1098463898) || uParam0->f_592[iParam1]->f_8 == 1) || uParam0->f_592[iParam1]->f_8 == 4)
	{
		clear_ped_tasks_immediately(&(uParam0->f_592[iParam1]), false, true);
	}
	else
	{
		clear_ped_tasks(&(uParam0->f_592[iParam1]), 1, 0);
	}
	_set_entity_coords_and_heading(&(uParam0->f_592[iParam1]), *Global_1900325->f_9[iParam1], &(Global_1900325->f_16[iParam1]), true, true, false);
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	if (uParam0->f_592[iParam1]->f_11 == 1)
	{
		Var0 = -1708752340;
	}
	else
	{
		Var0 = 458617849;
	}
	Var0.f_1 = -455129387;
	iVar34 = 4224;
	set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 0);
	task_move_network_advanced_by_name_with_init_params(&(uParam0->f_592[iParam1]), uParam0->f_491, &Var0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 2, 0f, 0, 0, iVar34, 0);
	_0x2208438012482a1a(&(uParam0->f_592[iParam1]), false, false);
	func_81(&(uParam0->f_592[iParam1]->f_66));
	func_272(uParam0, iParam1);
	return true;
}

bool func_445(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_592[iParam1]->f_61))
	{
		uParam0->f_592[iParam1]->f_61 = create_object(uParam0->f_491.f_3, get_entity_coords(&(uParam0->f_592[iParam1]), true, false), true, true, false, false, true);
		_0x72e30372e7cc4415(uParam0->f_592[iParam1]->f_61, 0);
		attach_entity_to_entity(uParam0->f_592[iParam1]->f_61, &(uParam0->f_592[iParam1]), get_ped_bone_index(&(uParam0->f_592[iParam1]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		force_entity_ai_and_animation_update(uParam0->f_592[iParam1]->f_61, true);
	}
	return does_entity_exist(uParam0->f_592[iParam1]->f_61);
}

bool func_446(var uParam0, int iParam1)
{
	if (!func_438(&(uParam0->f_592[iParam1]), -2017877118))
	{
		sVar0 = "javier_exit";
		iVar1 = 390;
		_0xf1c03a5352243a30(&(uParam0->f_592[iParam1]));
		set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 0);
		task_play_anim_advanced(&(uParam0->f_592[iParam1]), func_78(0, 0), sVar0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 2f, -8f, -1, iVar1, 0f, 2, 1, 0);
	}
	return func_438(&(uParam0->f_592[iParam1]), -2017877118);
}

void func_447(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_2 == 1)
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			if ((uParam0->f_62 == 0 || (func_5(uParam0, 1024) && !func_64(uParam0->f_592[func_161(iParam1)]))) || Global_1900325->f_1 == 1)
			{
				func_622(uParam0, iParam1);
			}
		}
		else
		{
			func_622(uParam0, iParam1);
		}
	}
}

void func_448(var uParam0, char* sParam1, bool bParam2)
{
	if ((!is_entity_dead(*uParam0) && decor_exist_on(*uParam0, sParam1)) && decor_get_bool(*uParam0, sParam1) != bParam2)
	{
		decor_set_bool(*uParam0, sParam1, bParam2);
	}
}

void func_449(var uParam0, int iParam1)
{
	func_442(uParam0, &(uParam0->f_592[iParam1]->f_60), iParam1);
}

void func_450(var uParam0, int iParam1)
{
	if (((!func_295(uParam0, iParam1) || func_49(uParam0->f_592[iParam1]->f_16, 16)) || func_49(uParam0->f_592[iParam1]->f_16, 32)) || uParam0->f_592[iParam1]->f_29 == 1)
	{
		return;
	}
	if (Global_1900325->f_23 <= 1)
	{
		func_226(uParam0, 16, iParam1);
	}
	else
	{
		func_226(uParam0, 32, iParam1);
	}
	func_50(&(uParam0->f_592[iParam1]->f_16), 16);
	func_50(&(uParam0->f_592[iParam1]->f_16), 32);
	uParam0->f_592[iParam1]->f_29 = 1;
}

bool func_451(var uParam0)
{
	return ((func_623(*uParam0) && func_80(&(uParam0->f_66))) && func_551(&(uParam0->f_66)) > 1000);
}

bool func_452(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (are_strings_equal(get_task_move_network_state(&(uParam0->f_592[iParam1])), sParam2))
	{
		return true;
	}
	if (!func_623(&(uParam0->f_592[iParam1])))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	iVar0 = 1;
	if (is_ped_a_player(&(uParam0->f_592[iParam1])) && func_624(sParam2))
	{
		iVar0 = 0;
	}
	if (func_625(sParam2) && !func_474(uParam0->f_592[iParam1], iVar0, sParam2, iParam3))
	{
		return false;
	}
	if (are_strings_equal("StartKnife", sParam2))
	{
		uParam0->f_592[iParam1]->f_71 = 1f;
		uParam0->f_592[iParam1]->f_72 = 0f;
		func_509(uParam0, iParam1);
		func_510(uParam0->f_592[iParam1]);
		func_511(uParam0, iParam1);
		func_512(uParam0->f_592[iParam1]);
		func_626(uParam0->f_592[iParam1]);
		func_627(uParam0, iParam1);
	}
	else if (func_628(sParam2))
	{
		func_509(uParam0, iParam1);
		func_510(uParam0->f_592[iParam1]);
		func_511(uParam0, iParam1);
		func_512(uParam0->f_592[iParam1]);
		func_626(uParam0->f_592[iParam1]);
		func_627(uParam0, iParam1);
	}
	else if (func_629(sParam2))
	{
		func_630(uParam0, iParam1);
		if (uParam0->f_592[iParam1]->f_75 != -1f)
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "GAME_SPEED", uParam0->f_592[iParam1]->f_75);
		}
		if (uParam0->f_592[iParam1]->f_78 != -1f)
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "GAME_OUTCOME", uParam0->f_592[iParam1]->f_78);
		}
	}
	else if (func_631(sParam2))
	{
		if (uParam0->f_592[iParam1]->f_77 != -1f)
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "EXIT_SIDE", uParam0->f_592[iParam1]->f_77);
		}
		if (uParam0->f_592[iParam1]->f_78 != -1f)
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "GAME_OUTCOME", uParam0->f_592[iParam1]->f_78);
		}
	}
	request_task_move_network_state_transition(&(uParam0->f_592[iParam1]), sParam2);
	if (uParam0->f_592[iParam1]->f_122 > 1)
	{
		_0x2208438012482a1a(&(uParam0->f_592[iParam1]), false, false);
		uParam0->f_592[iParam1]->f_122 = 0;
	}
	uParam0->f_592[iParam1]->f_91 = 1;
	func_378(uParam0->f_592[iParam1], 0);
	return true;
}

bool func_453(var uParam0, int iParam1)
{
	if (((uParam0->f_592[iParam1]->f_129 == 0 || uParam0->f_18 == 785897420) || uParam0->f_18 == -798342154) || func_80(&(uParam0->f_592[iParam1]->f_20)))
	{
		uParam0->f_592[iParam1]->f_129 = 0;
		return false;
	}
	iVar0 = func_161(iParam1);
	iVar1 = func_411(uParam0);
	iVar2 = func_433(uParam0->f_592[iVar0]);
	iVar3 = (iVar1 - iVar2);
	iVar4 = round(func_504(uParam0, iVar0));
	if (uParam0->f_18 == -121390149 && iVar3 >= iVar1)
	{
		uParam0->f_592[iParam1]->f_129 = 0;
		return false;
	}
	if (uParam0->f_18 == -776039804 && iVar4 < 5000)
	{
		uParam0->f_592[iParam1]->f_129 = 0;
		return false;
	}
	iVar5 = 0;
	iVar6 = get_random_int_in_range(0, 5);
	if (iVar3 > iVar6)
	{
		iVar5 = 1;
	}
	uParam0->f_592[iParam1]->f_129 = 0;
	return iVar5;
}

bool func_454(var uParam0)
{
	if (is_ped_a_player(*uParam0) && _0xa24c1d341c6e0d53(1, 0, 0))
	{
		return false;
	}
	if (func_80(&(uParam0->f_123)))
	{
		if (func_553(&(uParam0->f_123)) > IntToFloat(uParam0->f_126) && func_632(uParam0) >= 0.95f)
		{
			return true;
		}
	}
	else
	{
		func_81(&(uParam0->f_123));
		if (uParam0->f_127 == 0 && !is_ped_a_player(*uParam0))
		{
			uParam0->f_126 = 3;
		}
		else
		{
			uParam0->f_126 = get_random_int_in_range(8, 15);
		}
		uParam0->f_127 = 1;
	}
	return false;
}

bool func_455(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_11 == 1)
	{
		return false;
	}
	iVar0 = func_161(iParam1);
	if (func_199(iVar0))
	{
		if ((uParam0->f_592[iVar0]->f_64 == 9 || uParam0->f_592[iVar0]->f_64 == 10) || uParam0->f_592[iVar0]->f_64 == 11)
		{
			return false;
		}
	}
	return get_random_int_in_range(0, 3) == 0;
}

void func_456(var uParam0, int iParam1)
{
	if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (!func_80(&(uParam0->f_592[iParam1]->f_17)))
		{
			func_81(&(uParam0->f_592[iParam1]->f_17));
		}
		else if (func_459(&(uParam0->f_592[iParam1]->f_17)) > 20000)
		{
			func_226(uParam0, 1024, iParam1);
		}
	}
}

bool func_457(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	switch (_0xe9a6400d1a0e7a55(iParam0))
	{
		case -1316977961:
			return get_task_move_network_event(iParam0, "EnterClipFinished");
		case 169455102:
			return get_task_move_network_event(iParam0, "OpponentIdleClipFinished");
		case -1183997470:
			return get_task_move_network_event(iParam0, "Alt_01_idle_introClipFinished");
		case 301524977:
			return get_task_move_network_event(iParam0, "Alt_01_idleClipFinished");
		case -1332624949:
			return get_task_move_network_event(iParam0, "Alt_01_outro_noKnifeClipFinished");
		case -1438966225:
			return get_task_move_network_event(iParam0, "Alt_01_outro_withKnifeClipFinished");
		case 663375200:
			return get_task_move_network_event(iParam0, "ToggleDrawClipFinished");
		case -400562111:
			return get_task_move_network_event(iParam0, "ToggleHolsterClipFinished");
		case 903498445:
			return get_task_move_network_event(iParam0, "Fail_from_idleClipFinished");
		case 1471269234:
			return get_task_move_network_event(iParam0, "Success_from_idleClipFinished");
		case -498406925:
			return get_task_move_network_event(iParam0, "PickupKnifeClipFinished");
		case 756119322:
			return get_task_move_network_event(iParam0, "StartKnifeClipFinished");
		case 721646648:
			return get_task_move_network_event(iParam0, "From_0_to_target_1ClipFinished");
		case -1153486373:
			return get_task_move_network_event(iParam0, "From_target_1_to_0ClipFinished");
		case 960827579:
			return get_task_move_network_event(iParam0, "From_0_to_target_2ClipFinished");
		case -316251561:
			return get_task_move_network_event(iParam0, "From_target_2_to_0ClipFinished");
		case 1215442709:
			return get_task_move_network_event(iParam0, "From_0_to_target_3ClipFinished");
		case -44602072:
			return get_task_move_network_event(iParam0, "From_target_3_to_0ClipFinished");
		case 1454951330:
			return get_task_move_network_event(iParam0, "From_0_to_target_4ClipFinished");
		case -788049279:
			return get_task_move_network_event(iParam0, "From_target_4_to_0ClipFinished");
		case 1676600846:
			return get_task_move_network_event(iParam0, "From_0_to_target_5ClipFinished");
		case -744146776:
			return get_task_move_network_event(iParam0, "From_target_5_to_0ClipFinished");
		case -1329297961:
			return get_task_move_network_event(iParam0, "EndClipFinished");
		case 72973500:
			return get_task_move_network_event(iParam0, "MediumFailClipFinished");
		case -405217195:
			return get_task_move_network_event(iParam0, "MediumSmallFailClipFinished");
		case -1812775187:
			return get_task_move_network_event(iParam0, "FailGenericClipFinished");
		case -1586866178:
			return get_task_move_network_event(iParam0, "FailSpikeClipFinished");
		case -1898802991:
			return get_task_move_network_event(iParam0, "Solo_FlourishClipFinished");
		case -807140023:
			return get_task_move_network_event(iParam0, "SpikeKnifeClipFinished");
		case 358714039:
			return get_task_move_network_event(iParam0, "SpikeKnifeClipFinished");
		case 1915308076:
			return get_task_move_network_event(iParam0, "SpikeKnifeClipFinished");
		case 1697682822:
			return get_task_move_network_event(iParam0, "SpikeKnifeClipFinished");
		case -2106593523:
			return get_task_move_network_event(iParam0, "Turn_successClipFinished");
		case -1735523990:
			return get_task_move_network_event(iParam0, "Turn_failClipFinished");
		case 345486814:
			return get_task_move_network_event(iParam0, "TurnQuitClipFinished");
		case 2087353861:
			return get_task_move_network_event(iParam0, "Exit");
		case 1178694785:
			return get_task_move_network_event(iParam0, "Exit");
		case 753190837:
			return get_task_move_network_event(iParam0, "Exit");
		case -165781906:
			return get_task_move_network_event(iParam0, "WonIdleClipFinished");
		default:
			break;
	}
	return false;
}

void func_458(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*uParam1) && !is_entity_attached(*uParam1))
	{
		if (iParam3 == 1)
		{
			stop_entity_anim(*uParam1, "knife_idle", func_78(0, 0), -1000f);
		}
		attach_entity_to_entity(*uParam1, *uParam0, get_ped_bone_index(*uParam0, 7966), 0.046386f, 0.01579f, -0.01253f, -81.59428f, 0.152559f, -22.22602f, false, false, false, false, 0, true, false, false);
		force_entity_ai_and_animation_update(*uParam1, true);
	}
}

int func_459(var uParam0)
{
	if (!func_80(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_633(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_634() - round((uParam0->f_1 * 1000f)));
}

void func_460(var uParam0, int iParam1)
{
	if (uParam0->f_175.f_137 != 0)
	{
		return;
	}
	if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (uParam0->f_60 <= 1)
		{
			if (uParam0->f_18 == -776039804)
			{
				func_296(uParam0, 0, 1, 1);
			}
			else if (uParam0->f_18 == -798342154)
			{
				func_296(uParam0, 1, 1, 1);
			}
			else if (uParam0->f_18 == -121390149)
			{
				func_296(uParam0, 2, 1, 1);
			}
			if ((func_526(&(uParam0->f_355), 0) || func_526(&(uParam0->f_355), 1)) || func_526(&(uParam0->f_355), 2))
			{
				if ((!func_201(&(uParam0->f_355), 0) && !func_201(&(uParam0->f_355), 1)) && !func_201(&(uParam0->f_355), 2))
				{
					if (uParam0->f_18 == -121390149)
					{
						func_296(uParam0, 7, 1, 1);
					}
					else if (uParam0->f_18 == -798342154 || uParam0->f_18 == -776039804)
					{
						func_296(uParam0, 8, 1, 1);
					}
				}
			}
		}
		else if (uParam0->f_18 == -121390149)
		{
			if (func_309(uParam0->f_592[uParam0->f_21]) == 0)
			{
				if (func_309(uParam0->f_592[0]) == 0 && func_309(uParam0->f_592[1]) == 0)
				{
					func_296(uParam0, 12, 1, 1);
				}
				else
				{
					func_296(uParam0, 16, 1, 1);
				}
			}
			else if (func_309(uParam0->f_592[0]) == 1 && func_309(uParam0->f_592[1]) == 1)
			{
				func_296(uParam0, 14, 1, 1);
			}
			else
			{
				func_296(uParam0, 17, 1, 1);
			}
		}
		else if (func_309(uParam0->f_592[0]) == 0 && func_309(uParam0->f_592[1]) == 0)
		{
			func_296(uParam0, 11, 1, 1);
		}
		else if (func_309(uParam0->f_592[0]) == 1 && func_309(uParam0->f_592[1]) == 1)
		{
			func_296(uParam0, 13, 1, 1);
		}
		else
		{
			func_296(uParam0, 15, 1, 1);
		}
	}
	else if (uParam0->f_18 == 785897420)
	{
		if (!func_5(uParam0, 65536))
		{
			func_296(uParam0, 3, 1, 1);
		}
		else
		{
			func_296(uParam0, 4, 1, 1);
		}
		if ((func_526(&(uParam0->f_355), 3) && !func_201(&(uParam0->f_355), 3)) || (func_526(&(uParam0->f_355), 4) && !func_201(&(uParam0->f_355), 4)))
		{
			func_296(uParam0, 32, 0, 1);
		}
	}
	else if (uParam0->f_592[iParam1]->f_64 != 16)
	{
		if (uParam0->f_18 == -121390149)
		{
			func_296(uParam0, 9, 1, 1);
		}
		else
		{
			func_296(uParam0, 10, 1, 1);
		}
	}
}

void func_461(var uParam0, int iParam1)
{
	func_226(uParam0, 64, iParam1);
	func_50(&(uParam0->f_592[iParam1]->f_16), 64);
}

void func_462(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_31 == 1 || !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	if (prepare_music_event("FINGER_FILLET_STOP"))
	{
		uParam0->f_592[iParam1]->f_31 = 1;
	}
}

void func_463(var uParam0, int iParam1)
{
	uParam0->f_592[iParam1]->f_85 = 0;
	uParam0->f_592[iParam1]->f_86 = 0;
	uParam0->f_592[iParam1]->f_87 = 0;
	uParam0->f_592[iParam1]->f_88 = 0;
	uParam0->f_592[iParam1]->f_90 = 0;
	uParam0->f_592[iParam1]->f_92 = 0;
	uParam0->f_592[iParam1]->f_93 = 0;
	uParam0->f_592[iParam1]->f_94 = 0;
	uParam0->f_592[iParam1]->f_95 = 0;
	uParam0->f_592[iParam1]->f_96 = 0;
	func_140(&(uParam0->f_592[iParam1]->f_16), 8192);
	func_140(&(uParam0->f_592[iParam1]->f_16), 16384);
	uParam0->f_592[iParam1]->f_103 = 0;
	uParam0->f_592[iParam1]->f_104 = 0;
	uParam0->f_592[iParam1]->f_105 = 0;
	uParam0->f_592[iParam1]->f_106 = 0;
	uParam0->f_175.f_81.f_35 = -2;
	func_137(&(uParam0->f_175), 256);
	if (uParam0->f_18 == -121390149 || uParam0->f_18 == 785897420)
	{
		func_409(uParam0->f_592[iParam1], 0);
		uParam0->f_592[iParam1]->f_102 = 0;
		func_141(&(uParam0->f_592[iParam1]->f_112));
		func_141(&(uParam0->f_592[iParam1]->f_115));
	}
	func_635(uParam0, iParam1);
}

void func_464(var uParam0, int iParam1, int iParam2)
{
	func_475(uParam0, iParam1, 1);
	func_483(uParam0, iParam1);
	func_476(uParam0, iParam1);
	func_477(uParam0);
	func_484(uParam0, iParam1);
	func_57(&(uParam0->f_175));
	func_54(&(uParam0->f_175));
	if (func_452(uParam0, iParam1, func_636(uParam0, iParam1, iParam2), 0))
	{
		func_377(uParam0->f_592[iParam1], 21);
	}
}

void func_465(var uParam0, int iParam1)
{
	if (func_5(uParam0, 2048))
	{
		if (iParam1 == 1)
		{
			uParam0->f_52 = 3;
		}
		else
		{
			uParam0->f_52++;
		}
	}
}

bool func_466(var uParam0, int iParam1)
{
	if (func_514(uParam0))
	{
		if (func_515(uParam0, iParam1) >= 6000000f)
		{
			return !func_637(uParam0, iParam1);
		}
	}
	else if (uParam0->f_18 != -121390149 && func_504(uParam0, iParam1) <= 0f)
	{
		return !func_637(uParam0, iParam1);
	}
	return false;
}

bool func_467(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	switch (_0xe9a6400d1a0e7a55(iParam0))
	{
		case -1812775187:
		case -1586866178:
		case -405217195:
		case 72973500:
			return true;
	}
	return false;
}

void func_468(var uParam0, int iParam1)
{
	if (!func_638(uParam0, iParam1))
	{
		func_54(&(uParam0->f_175));
		return;
	}
	if (func_639(uParam0) && func_640(&(uParam0->f_175)))
	{
		iVar0 = 0;
		if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			iVar0 = -1;
		}
		else if (uParam0->f_18 == 785897420 && uParam0->f_592[iParam1]->f_64 == 17)
		{
			iVar0 = -1;
			func_138(&(uParam0->f_175), 1);
		}
		else
		{
			iVar0 = func_641(uParam0->f_592[iParam1], 0);
			func_138(&(uParam0->f_175), 0);
		}
		if (uParam0->f_592[iParam1]->f_64 == 17 || uParam0->f_592[iParam1]->f_64 == 18)
		{
			func_642(uParam0, iParam1);
			func_643(uParam0, iVar0);
			func_399(&(uParam0->f_175));
		}
		else
		{
			func_54(&(uParam0->f_175));
		}
	}
}

int func_469(var uParam0, int iParam1)
{
	return &(uParam0->f_37[uParam0->f_592[iParam1]->f_85]);
}

int func_470(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = 242318790;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 1710271711;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 1940736088;
	}
	else
	{
		iVar0 = 466098291;
	}
	return iVar0;
}

void func_471(var uParam0, int iParam1)
{
	if (func_452(uParam0, iParam1, "StartKnife", 0))
	{
		func_141(&(uParam0->f_592[iParam1]->f_123));
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			func_301(&(uParam0->f_355), 9);
			func_301(&(uParam0->f_355), 10);
			func_57(&(uParam0->f_175));
			if (uParam0->f_592[iParam1]->f_7 == 0 && uParam0->f_18 != 785897420)
			{
				func_645(func_644(1511238709, -760820978), 1);
			}
			func_646(uParam0, iParam1);
		}
		else
		{
			if (func_309(uParam0->f_592[iParam1]) > 0 && func_309(uParam0->f_592[uParam0->f_21]) == 0)
			{
				uParam0->f_508.f_15 = get_random_float_in_range(-0.15f, 0f);
			}
			else if (func_309(uParam0->f_592[iParam1]) == 0 && func_309(uParam0->f_592[uParam0->f_21]) > 0)
			{
				uParam0->f_508.f_15 = get_random_float_in_range(0f, 0.15f);
			}
			else
			{
				uParam0->f_508.f_15 = get_random_float_in_range(-0.1f, 0.1f);
			}
			uParam0->f_64 = 1;
		}
		func_81(&(uParam0->f_592[iParam1]->f_112));
		if (!func_80(&(uParam0->f_592[iParam1]->f_115)))
		{
			func_81(&(uParam0->f_592[iParam1]->f_115));
		}
		func_472(uParam0, iParam1);
		func_647(uParam0, iParam1);
		uParam0->f_592[iParam1]->f_7 = 1;
		func_377(uParam0->f_592[iParam1], 18);
	}
}

void func_472(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_32 == 1 || !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	if (uParam0->f_18 == -798342154)
	{
		sVar0 = "FINGER_BURNOUT_FILLET_START";
	}
	else if (uParam0->f_18 == -121390149)
	{
		sVar0 = "FINGER_CLASSIC_FILLET_START";
	}
	else if (uParam0->f_18 == -776039804)
	{
		sVar0 = "FINGER_GUTS_FILLET_START";
	}
	else if (uParam0->f_18 == 785897420)
	{
		sVar0 = "FINGER_SOLO_FILLET_START";
	}
	if (trigger_music_event(sVar0))
	{
		uParam0->f_592[iParam1]->f_32 = 1;
	}
}

bool func_473(int iParam0, int iParam1)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	return _0xe9a6400d1a0e7a55(iParam0) == iParam1;
}

bool func_474(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam1 == 1)
	{
		uParam0->f_73 = get_random_float_in_range(0f, 1f);
		if (are_strings_equal(sParam2, "OpponentIdle"))
		{
			if ((uParam0->f_73 >= 0.6f && uParam0->f_73 <= 0.7f) && is_ped_a_player(*uParam0))
			{
				uParam0->f_73 = -1f;
				return false;
			}
			else if (func_648(uParam0))
			{
				uParam0->f_73 = -1f;
				return false;
			}
		}
		else if (iParam3 == 1)
		{
			if (is_ped_a_player(*uParam0))
			{
				uParam0->f_73 = 0f;
			}
		}
	}
	else
	{
		switch (_0xe9a6400d1a0e7a55(*uParam0))
		{
			case 721646648:
				uParam0->f_73 = 0.16f;
				break;
			case 960827579:
				uParam0->f_73 = 0.32f;
				break;
			case 1215442709:
				uParam0->f_73 = 0.48f;
				break;
			case 1454951330:
				uParam0->f_73 = 0.64f;
				break;
			case 1676600846:
				uParam0->f_73 = 0.8f;
				break;
			default:
				uParam0->f_73 = 0f;
				break;
		}
	}
	if (uParam0->f_73 != -1f)
	{
		set_task_move_network_signal_float(*uParam0, "VARIATION_RANDOM", uParam0->f_73);
		uParam0->f_74 = uParam0->f_73;
		return true;
	}
	return false;
}

void func_475(var uParam0, int iParam1, int iParam2)
{
	if (func_80(&(uParam0->f_592[iParam1]->f_112)) && !func_633(&(uParam0->f_592[iParam1]->f_112)))
	{
		func_649(&(uParam0->f_592[iParam1]->f_112));
	}
	if (uParam0->f_18 != -776039804 || iParam2 == 1)
	{
		if (func_80(&(uParam0->f_592[iParam1]->f_115)) && !func_633(&(uParam0->f_592[iParam1]->f_115)))
		{
			func_649(&(uParam0->f_592[iParam1]->f_115));
		}
	}
}

void func_476(var uParam0, int iParam1)
{
	if ((uParam0->f_592[iParam1]->f_103 == 1 || uParam0->f_18 != 785897420) || !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	func_650(uParam0, iParam1);
	func_651(uParam0, iParam1);
	func_652(uParam0, iParam1);
	uParam0->f_592[iParam1]->f_103 = 1;
}

void func_477(var uParam0)
{
	if (uParam0->f_18 != 785897420 || !func_199(uParam0->f_21))
	{
		return;
	}
	if ((uParam0->f_592[uParam0->f_21]->f_104 == 0 && uParam0->f_592[uParam0->f_21]->f_105 == 0) && uParam0->f_592[uParam0->f_21]->f_106 == 0)
	{
		return;
	}
	if (!func_306(uParam0->f_22))
	{
		return;
	}
	if ((uParam0->f_592[uParam0->f_21]->f_104 == 1 && uParam0->f_592[uParam0->f_21]->f_105 == 1) && uParam0->f_592[uParam0->f_21]->f_106 == 1)
	{
		func_296(uParam0, 40, 1, 0);
	}
	else if (uParam0->f_592[uParam0->f_21]->f_104 == 1 && uParam0->f_592[uParam0->f_21]->f_105 == 1)
	{
		func_296(uParam0, 37, 1, 0);
	}
	else if (uParam0->f_592[uParam0->f_21]->f_104 == 1 && uParam0->f_592[uParam0->f_21]->f_106 == 1)
	{
		func_296(uParam0, 38, 1, 0);
	}
	else if (uParam0->f_592[uParam0->f_21]->f_105 == 1 && uParam0->f_592[uParam0->f_21]->f_106 == 1)
	{
		func_296(uParam0, 39, 1, 0);
	}
	else if (uParam0->f_592[uParam0->f_21]->f_104 == 1)
	{
		func_296(uParam0, 34, 1, 0);
	}
	else if (uParam0->f_592[uParam0->f_21]->f_105 == 1)
	{
		func_296(uParam0, 35, 1, 0);
	}
	else
	{
		func_296(uParam0, 36, 1, 0);
	}
}

void func_478(var uParam0, int iParam1)
{
	if (func_433(uParam0->f_592[iParam1]) > 0)
	{
		func_410(uParam0->f_592[iParam1], (func_433(uParam0->f_592[iParam1]) - 1));
		uParam0->f_592[func_161(iParam1)]->f_129 = 1;
	}
}

void func_479(var uParam0, int iParam1)
{
	if (((((((((((!is_ped_a_player(&(uParam0->f_592[iParam1])) || uParam0->f_592[iParam1]->f_92 == 1) || uParam0->f_592[iParam1]->f_93 == 1) || uParam0->f_592[iParam1]->f_94 == 1) || uParam0->f_592[iParam1]->f_95 == 1) || uParam0->f_592[iParam1]->f_87 > uParam0->f_592[iParam1]->f_86) || (uParam0->f_18 == -121390149 && func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))) || func_473(&(uParam0->f_592[iParam1]), 72973500)) || func_473(&(uParam0->f_592[iParam1]), -405217195)) || func_473(&(uParam0->f_592[iParam1]), -1812775187)) || func_473(&(uParam0->f_592[iParam1]), -1586866178)) || func_473(&(uParam0->f_592[iParam1]), -1329297961))
	{
		func_139(&(uParam0->f_175), 5);
		func_139(&(uParam0->f_175), 6);
		return;
	}
	uParam0->f_63 = 1;
	if (uParam0->f_592[iParam1]->f_72 < 2f && uParam0->f_592[iParam1]->f_96 == 0)
	{
		if (func_653(uParam0, iParam1))
		{
			func_300(uParam0, 5);
		}
		else
		{
			func_139(&(uParam0->f_175), 5);
		}
		if (func_654(uParam0, iParam1))
		{
			func_300(uParam0, 6);
		}
		else
		{
			func_139(&(uParam0->f_175), 6);
		}
		if (func_218(&(uParam0->f_175), 5))
		{
			uParam0->f_592[iParam1]->f_89 = func_632(uParam0->f_592[iParam1]);
			uParam0->f_592[iParam1]->f_71 = 1f;
			uParam0->f_592[iParam1]->f_72 = 2f;
			uParam0->f_592[iParam1]->f_94 = 1;
			uParam0->f_592[iParam1]->f_88 = 0;
			func_139(&(uParam0->f_175), 5);
			func_139(&(uParam0->f_175), 6);
			func_646(uParam0, iParam1);
			func_655(uParam0, iParam1);
			return;
		}
		else if (func_218(&(uParam0->f_175), 6))
		{
			uParam0->f_592[iParam1]->f_89 = func_632(uParam0->f_592[iParam1]);
			uParam0->f_592[iParam1]->f_71 = 1f;
			uParam0->f_592[iParam1]->f_72 = 0f;
			uParam0->f_592[iParam1]->f_95 = 1;
			uParam0->f_592[iParam1]->f_88 = 0;
			func_139(&(uParam0->f_175), 5);
			func_139(&(uParam0->f_175), 6);
			func_646(uParam0, iParam1);
			if (uParam0->f_18 != 785897420)
			{
				func_655(uParam0, iParam1);
			}
			return;
		}
	}
	if (func_656())
	{
		uParam0->f_592[iParam1]->f_89 = func_632(uParam0->f_592[iParam1]);
		if (uParam0->f_592[iParam1]->f_86 > uParam0->f_592[iParam1]->f_87 || !has_anim_event_fired(&(uParam0->f_592[iParam1]), -534847913))
		{
			uParam0->f_592[iParam1]->f_93 = 1;
			uParam0->f_592[iParam1]->f_71 = 0f;
			uParam0->f_592[iParam1]->f_72 = 1f;
			func_478(uParam0, iParam1);
		}
		else if (is_disabled_control_just_pressed(0, func_470(func_469(uParam0, iParam1))) || func_657(uParam0))
		{
			uParam0->f_592[iParam1]->f_71 = 1f;
			if (func_658(uParam0, iParam1))
			{
				uParam0->f_592[iParam1]->f_72 = 1f;
			}
			else
			{
				uParam0->f_592[iParam1]->f_72 = 0f;
			}
			func_646(uParam0, iParam1);
		}
		else
		{
			uParam0->f_592[iParam1]->f_92 = 1;
			uParam0->f_592[iParam1]->f_71 = 0f;
			uParam0->f_592[iParam1]->f_72 = 1f;
			func_478(uParam0, iParam1);
		}
	}
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_90 == 0 && func_457(&(uParam0->f_592[iParam1])))
	{
		if (!is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			if (!func_659(uParam0, iParam1))
			{
				uParam0->f_592[iParam1]->f_71 = 1f;
				if (func_660(uParam0, iParam1))
				{
					uParam0->f_592[iParam1]->f_94 = 1;
					uParam0->f_592[iParam1]->f_72 = 2f;
					uParam0->f_592[iParam1]->f_88 = 0;
					func_655(uParam0, iParam1);
				}
				else
				{
					uParam0->f_592[iParam1]->f_72 = 0f;
					uParam0->f_592[iParam1]->f_94 = 0;
				}
				func_646(uParam0, iParam1);
			}
			else
			{
				uParam0->f_592[iParam1]->f_92 = 1;
				uParam0->f_592[iParam1]->f_94 = 0;
				uParam0->f_592[iParam1]->f_71 = 0f;
				uParam0->f_592[iParam1]->f_72 = 1f;
				func_478(uParam0, iParam1);
				func_475(uParam0, iParam1, 0);
			}
		}
		uParam0->f_592[iParam1]->f_87++;
		if (uParam0->f_592[iParam1]->f_94 == 1)
		{
			func_661(uParam0, iParam1, 1);
			func_662(&(uParam0->f_439));
		}
		else if (uParam0->f_592[iParam1]->f_95 == 1)
		{
			func_661(uParam0, iParam1, 1);
			func_475(uParam0, iParam1, 1);
			func_662(&(uParam0->f_439));
		}
		else if ((uParam0->f_592[iParam1]->f_92 == 0 && uParam0->f_592[iParam1]->f_93 == 0) && uParam0->f_592[iParam1]->f_87 > uParam0->f_592[iParam1]->f_86)
		{
			uParam0->f_592[iParam1]->f_89 = 1f;
			uParam0->f_592[iParam1]->f_71 = 0f;
			uParam0->f_592[iParam1]->f_72 = 1f;
			func_478(uParam0, iParam1);
			func_661(uParam0, iParam1, 0);
			func_475(uParam0, iParam1, 0);
			func_662(&(uParam0->f_439));
		}
		else if ((is_ped_a_player(&(uParam0->f_592[iParam1])) && uParam0->f_592[iParam1]->f_71 == 0f) || (!is_ped_a_player(&(uParam0->f_592[iParam1])) && uParam0->f_592[iParam1]->f_92 == 1))
		{
			func_661(uParam0, iParam1, 0);
			func_475(uParam0, iParam1, 0);
			func_662(&(uParam0->f_439));
		}
		else
		{
			func_661(uParam0, iParam1, 1);
		}
		uParam0->f_592[iParam1]->f_90 = 1;
		if (is_ped_a_player(&(uParam0->f_592[iParam1])) && uParam0->f_592[iParam1]->f_87 == uParam0->f_592[iParam1]->f_86)
		{
			uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[0];
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "ANIM_RATE", uParam0->f_592[iParam1]->f_69);
		}
	}
	if (uParam0->f_592[iParam1]->f_90 == 1)
	{
		if (uParam0->f_18 == -121390149 && func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))
		{
			func_474(uParam0->f_592[iParam1], 0, 0, 0);
			func_464(uParam0, iParam1, 1);
		}
		else if (uParam0->f_592[iParam1]->f_95 == 1)
		{
			if (uParam0->f_18 == 785897420)
			{
				if (func_452(uParam0, iParam1, "End", 0))
				{
					uParam0->f_592[iParam1]->f_90 = 0;
				}
			}
			else
			{
				func_474(uParam0->f_592[iParam1], 0, 0, 0);
				func_464(uParam0, iParam1, 1);
			}
		}
		else if (func_452(uParam0, iParam1, func_663(uParam0, iParam1), 0))
		{
			if (is_ped_a_player(&(uParam0->f_592[iParam1])))
			{
				uParam0->f_592[iParam1]->f_71 = 0f;
				uParam0->f_592[iParam1]->f_94 = 0;
				if (uParam0->f_592[iParam1]->f_72 == 2f)
				{
					uParam0->f_592[iParam1]->f_96 = 1;
				}
				else
				{
					uParam0->f_592[iParam1]->f_96 = 0;
				}
			}
			uParam0->f_592[iParam1]->f_90 = 0;
		}
	}
}

void func_481(var uParam0, int iParam1)
{
	if (((is_ped_a_player(&(uParam0->f_592[iParam1])) || !func_520(&(uParam0->f_314), 1)) || uParam0->f_60 <= 1) || uParam0->f_175.f_137 != 0)
	{
		return;
	}
	if ((func_526(&(uParam0->f_355), 0) || func_526(&(uParam0->f_355), 1)) || func_526(&(uParam0->f_355), 2))
	{
		func_296(uParam0, 33, 0, 1);
	}
}

void func_482(var uParam0, int iParam1)
{
	if (func_664(uParam0, iParam1))
	{
		func_226(uParam0, 16384, iParam1);
	}
	else
	{
		func_226(uParam0, 8192, iParam1);
	}
}

void func_483(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_121 == 0)
	{
		iVar0 = func_161(iParam1);
		if (uParam0->f_18 == 785897420)
		{
			uParam0->f_592[iParam1]->f_121 = 1;
		}
		else if (func_75(uParam0, iParam1))
		{
			uParam0->f_592[iParam1]->f_121 = 1;
		}
		else if (uParam0->f_18 == -121390149)
		{
			if (!func_225(uParam0->f_592[iVar0]))
			{
				if (func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))
				{
					uParam0->f_592[iParam1]->f_121 = 1;
				}
				else
				{
					uParam0->f_592[iParam1]->f_121 = 2;
				}
			}
			else if (func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))
			{
				if (func_428(uParam0->f_592[iVar0]) < func_429(uParam0))
				{
					uParam0->f_592[iParam1]->f_121 = 1;
				}
				else if (func_430(uParam0->f_592[iParam1]) < func_430(uParam0->f_592[iVar0]))
				{
					uParam0->f_592[iParam1]->f_121 = 1;
				}
				else
				{
					uParam0->f_592[iParam1]->f_121 = 2;
				}
			}
			else
			{
				uParam0->f_592[iParam1]->f_121 = 2;
			}
		}
		else if (func_225(uParam0->f_592[iVar0]))
		{
			if (func_428(uParam0->f_592[iParam1]) >= func_428(uParam0->f_592[iVar0]))
			{
				uParam0->f_592[iParam1]->f_121 = 1;
			}
			else
			{
				uParam0->f_592[iParam1]->f_121 = 2;
			}
		}
		else if (func_428(uParam0->f_592[iParam1]) <= 4)
		{
			uParam0->f_592[iParam1]->f_121 = 2;
		}
		else
		{
			uParam0->f_592[iParam1]->f_121 = 1;
		}
		if (uParam0->f_18 == 785897420)
		{
			func_380(uParam0->f_592[iParam1], 1f);
		}
		else if (uParam0->f_592[iParam1]->f_121 == 2)
		{
			func_380(uParam0->f_592[iParam1], 0f);
		}
		else
		{
			func_380(uParam0->f_592[iParam1], 2f);
		}
	}
	if (uParam0->f_592[iParam1]->f_121 == 2)
	{
		func_66(uParam0->f_592[iParam1], 1201781013);
	}
	else
	{
		func_66(uParam0->f_592[iParam1], 746733444);
	}
}

void func_484(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_100 == 0)
	{
		if (func_199(uParam0->f_21) && uParam0->f_592[uParam0->f_21]->f_3 == 1)
		{
			func_296(uParam0, 28, 1, 1);
		}
		else if (uParam0->f_18 == -121390149)
		{
			if (func_433(uParam0->f_592[iParam1]) == 0)
			{
				func_296(uParam0, 18, 1, 1);
			}
			else
			{
				func_296(uParam0, 19, 1, 1);
			}
		}
		else if (uParam0->f_18 == -776039804)
		{
			func_296(uParam0, 20, 1, 1);
		}
		else if (uParam0->f_18 == -798342154)
		{
			func_296(uParam0, 20, 1, 1);
		}
		uParam0->f_592[iParam1]->f_100 = 1;
	}
}

void func_485(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_99 == 1 || !func_230(uParam0))
	{
		return;
	}
	if (uParam0->f_51 == -2)
	{
		func_380(uParam0->f_592[iParam1], 1f);
	}
	else if (uParam0->f_51 == -1)
	{
		func_380(uParam0->f_592[iParam1], 1f);
		func_665(uParam0, iParam1);
	}
	else if (uParam0->f_51 == iParam1)
	{
		func_380(uParam0->f_592[iParam1], 2f);
		if (is_ped_a_player(&(uParam0->f_592[iParam1])) && func_5(uParam0, 4096))
		{
			func_666(Global_1900325->f_24 * 2, 0, 1065353216, 1, 0, 0, 1, 752097756);
			func_667(uParam0->f_592[func_161(iParam1)]);
			func_668(-760820978);
		}
		func_669(uParam0, iParam1);
	}
	else
	{
		func_380(uParam0->f_592[iParam1], 0f);
		if (is_ped_a_player(&(uParam0->f_592[iParam1])) && func_5(uParam0, 4096))
		{
			func_670(-760820978);
		}
		func_671(uParam0, iParam1);
	}
	uParam0->f_592[iParam1]->f_99 = 1;
}

char* func_486(var uParam0, int iParam1)
{
	sVar0 = "Turn_fail";
	if (((uParam0->f_18 == 785897420 || func_5(uParam0, 2048)) || uParam0->f_592[iParam1]->f_121 == 1) || uParam0->f_592[iParam1]->f_95 == 1)
	{
		sVar0 = "Turn_success";
	}
	return sVar0;
}

void func_487(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_33 == 1 || !is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	if (trigger_music_event("FINGER_FILLET_STOP"))
	{
		uParam0->f_592[iParam1]->f_33 = 1;
	}
}

void func_488(int iParam0)
{
	if (func_34() != -1)
	{
		return;
	}
	if (!is_bit_set(Global_40.f_11958, iParam0))
	{
		set_bit(&(Global_40.f_11958), iParam0);
		func_672(iParam0);
	}
}

bool func_489(var uParam0, int iParam1)
{
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (!func_5(uParam0, 1024))
		{
			return true;
		}
		else
		{
			iVar0 = func_161(uParam0->f_21);
			if (func_199(iVar0) && uParam0->f_592[iVar0]->f_64 == 32)
			{
				return true;
			}
		}
	}
	else if (!func_80(&(uParam0->f_592[iParam1]->f_82)))
	{
		func_81(&(uParam0->f_592[iParam1]->f_82));
	}
	else if (func_459(&(uParam0->f_592[iParam1]->f_82)) >= 500)
	{
		return true;
	}
	return false;
}

char* func_490(var uParam0, int iParam1)
{
	sVar0 = "ExitChair";
	if (func_496(&(uParam0->f_592[iParam1])) && _0xe9a6400d1a0e7a55(&(uParam0->f_592[iParam1])) == -444913130)
	{
		sVar0 = "ExitBase";
	}
	_0x9585ff23c4b8ede0(&(uParam0->f_592[iParam1]), 2f);
	return sVar0;
}

void func_491(var uParam0, int iParam1)
{
	if (Global_1900325->f_1 != 1)
	{
		return;
	}
	else if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	else if (uParam0->f_592[iParam1]->f_78 == 1f)
	{
		return;
	}
	iVar0 = 0;
	if (Global_1900325->f_4 == 71)
	{
		iVar0 = 18;
	}
	else if (Global_1900325->f_4 == 98)
	{
		iVar0 = 24;
	}
	else if (Global_1900325->f_4 == 9)
	{
		iVar0 = 4;
	}
	if (uParam0->f_592[iParam1]->f_78 == 2f)
	{
		func_673(&(uParam0->f_592[iParam1]), &(uParam0->f_592[iParam1]), Global_35, 1, iVar0, 0, 10);
	}
	else
	{
		func_673(&(uParam0->f_592[iParam1]), Global_35, &(uParam0->f_592[iParam1]), 1, iVar0, 0, 10);
	}
}

void func_492(int iParam0, int iParam1)
{
	if (iParam1 > 24)
	{
	}
	Global_1899528->f_53[iParam0] = iParam1;
	if (iParam1 == 0)
	{
		Global_1899528->f_45[iParam0] = -15;
	}
	else
	{
		Global_1899528->f_45[iParam0] = func_674();
		func_675(Global_1899528->f_45[iParam0], 0, 0, iParam1, 0, 0, 0, 0);
	}
}

bool func_493(var uParam0, int iParam1)
{
	if (Global_1900325->f_23 >= 3)
	{
		if (func_676(uParam0, iParam1))
		{
			return true;
		}
	}
	else if ((func_677(uParam0) && func_676(uParam0, iParam1)) && func_678(uParam0))
	{
		return true;
	}
	return false;
}

bool func_494(var uParam0, int iParam1)
{
	if (!func_438(&(uParam0->f_592[iParam1]), -2017877118))
	{
		sVar0 = "javier_enter";
		iVar1 = 390;
		task_play_anim_advanced(&(uParam0->f_592[iParam1]), func_78(0, 0), sVar0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 8f, -1000f, -1, iVar1, 0f, 2, 1, 0);
		_0x2208438012482a1a(&(uParam0->f_592[iParam1]), false, false);
	}
	return func_438(&(uParam0->f_592[iParam1]), -2017877118);
}

void func_495(var uParam0, int iParam1)
{
	iVar0 = func_161(iParam1);
	if (func_199(iVar0) && func_64(uParam0->f_592[iVar0]))
	{
		func_226(uParam0, 134217728, iVar0);
	}
}

bool func_496(int iParam0)
{
	return (!is_entity_dead(iParam0) && is_task_move_network_active(iParam0));
}

bool func_497(var uParam0, int iParam1)
{
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), -1131150392))
	{
		func_458(uParam0->f_592[iParam1], &(uParam0->f_592[iParam1]->f_60), iParam1, 1);
		func_495(uParam0, iParam1);
	}
	if (has_anim_event_fired(&(uParam0->f_592[iParam1]), 1838514158))
	{
		func_18(&(uParam0->f_592[iParam1]->f_60), iParam1);
	}
	if (Global_1900325->f_23 >= 3)
	{
		if (!func_438(&(uParam0->f_592[iParam1]), -2017877118))
		{
			return true;
		}
	}
	else
	{
		if (uParam0->f_314.f_28 == 4)
		{
			func_296(uParam0, 30, 1, 1);
		}
		if (has_anim_event_fired(uParam0->f_54, -693272019))
		{
			func_441(uParam0, &(uParam0->f_54), &(uParam0->f_59), -1, 1);
			func_440(uParam0, iParam1);
		}
		if (has_anim_event_fired(uParam0->f_54, -3856156))
		{
			func_442(uParam0, &(uParam0->f_59), -1);
			func_679(uParam0, iParam1);
		}
		if ((!is_entity_dead(uParam0->f_54) && func_438(uParam0->f_54, 242628503)) && get_sequence_progress(uParam0->f_54) > 0)
		{
			return true;
		}
	}
	return false;
}

void func_498(int iParam0)
{
	if (is_entity_dead(iParam0) || _is_ped_using_scenario_hash(iParam0, -1103796964))
	{
		return;
	}
	vVar0 = { *Global_1900325->f_9[Global_1900325->f_34] };
	vVar0 = { vVar0 + Global_1900325->f_19 };
	clear_ped_tasks(iParam0, 1, 0);
	task_start_scenario_at_position(iParam0, -1103796964, vVar0, &(Global_1900325->f_16[Global_1900325->f_34]), -1, false, true, 0, 0f, false);
	set_ped_keep_task(iParam0, true);
	_0x2208438012482a1a(iParam0, false, false);
}

bool func_499(var uParam0)
{
	if ((uParam0->f_64 == 18 || uParam0->f_64 == 17) || uParam0->f_64 == 20)
	{
		return true;
	}
	return false;
}

bool func_500(var uParam0)
{
	if ((uParam0->f_175.f_137 == 1 || uParam0->f_175.f_137 == 2) || !is_screen_faded_in())
	{
		return true;
	}
	return false;
}

void func_501(var uParam0, int iParam1, int iParam2)
{
	if (func_520(uParam0, iParam1))
	{
		func_140(uParam0, iParam1);
		if (iParam2 == 1)
		{
		}
	}
}

void func_502(var uParam0, int iParam1, int iParam2)
{
	if (!func_520(uParam0, iParam1))
	{
		func_50(uParam0, iParam1);
		if (iParam2 == 1)
		{
		}
	}
}

bool func_503(var uParam0)
{
	if ((uParam0->f_64 == 18 || uParam0->f_64 == 17) || uParam0->f_64 == 20)
	{
		return true;
	}
	return false;
}

float func_504(var uParam0, int iParam1)
{
	if (!func_199(iParam1))
	{
		return 0f;
	}
	iVar0 = func_506(uParam0);
	if (uParam0->f_18 == -121390149)
	{
		iVar2 = func_161(uParam0->f_50);
		fVar1 = to_float(func_551(&(uParam0->f_592[iVar2]->f_115)));
	}
	if (!func_80(&(uParam0->f_592[iParam1]->f_115)))
	{
		if (uParam0->f_18 == -121390149)
		{
			return fVar1;
		}
		else
		{
			return (to_float(iVar0) * 1000f);
		}
	}
	if (uParam0->f_18 == -121390149)
	{
		fVar3 = (fVar1 - to_float(func_459(&(uParam0->f_592[iParam1]->f_115))));
	}
	else
	{
		fVar3 = to_float((iVar0 * 1000 - func_459(&(uParam0->f_592[iParam1]->f_115))));
	}
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

int func_505(var uParam0, int iParam1)
{
	fVar0 = func_504(uParam0, iParam1);
	if (Global_1900325->f_23 == 0)
	{
		fVar1 = get_random_float_in_range(3500f, 5000f);
	}
	else if (Global_1900325->f_23 == 1)
	{
		fVar1 = get_random_float_in_range(3500f, 4500f);
	}
	else if (Global_1900325->f_23 == 2)
	{
		fVar1 = get_random_float_in_range(3000f, 4500f);
	}
	else
	{
		fVar1 = get_random_float_in_range(3000f, 4000f);
	}
	fVar2 = (fVar0 / fVar1);
	iVar3 = floor(fVar2);
	return iVar3;
}

int func_506(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	iVar0 = func_612(uParam0->f_18, 1);
	return uParam0->f_1[iVar0]->f_2;
}

void func_507(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_80(uParam0))
	{
		func_163(uParam0, fParam1);
	}
}

bool func_508(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	switch (_0xe9a6400d1a0e7a55(iParam0))
	{
		case -1153486373:
		case -788049279:
		case -744146776:
		case -444913130:
		case -316251561:
		case -44602072:
		case 721646648:
		case 756119322:
		case 960827579:
		case 1215442709:
		case 1454951330:
		case 1676600846:
			return true;
	}
	return false;
}

void func_509(var uParam0, int iParam1)
{
	uParam0->f_592[iParam1]->f_69 = 1f;
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (uParam0->f_592[iParam1]->f_91 == 0)
		{
			fVar0 = func_632(uParam0->f_592[iParam1]);
			if (uParam0->f_592[iParam1]->f_96 == 1)
			{
				if (uParam0->f_592[iParam1]->f_86 == uParam0->f_592[iParam1]->f_87 && fVar0 >= uParam0->f_508.f_17)
				{
					uParam0->f_592[iParam1]->f_69 = uParam0->f_508.f_18;
				}
			}
			else if (uParam0->f_592[iParam1]->f_92 == 1 || uParam0->f_592[iParam1]->f_93 == 1)
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[5];
			}
			else if ((uParam0->f_592[iParam1]->f_94 == 1 || uParam0->f_592[iParam1]->f_95 == 1) || uParam0->f_592[iParam1]->f_86 > uParam0->f_592[iParam1]->f_87)
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[4];
			}
			else if (fVar0 >= &uParam0->f_508[3])
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[3];
			}
			else if (fVar0 >= &uParam0->f_508[2])
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[2];
			}
			else if (fVar0 >= &uParam0->f_508[1])
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[1];
			}
			else
			{
				uParam0->f_592[iParam1]->f_69 = &uParam0->f_508.f_7[0];
			}
		}
	}
	else if (uParam0->f_592[iParam1]->f_94 == 0)
	{
		uParam0->f_592[iParam1]->f_69 = (uParam0->f_508.f_14 + uParam0->f_508.f_15);
		if (Global_1900325->f_23 == 0)
		{
			uParam0->f_592[iParam1]->f_69 = (uParam0->f_592[iParam1]->f_69 + (0.01f * IntToFloat(uParam0->f_592[iParam1]->f_86)));
		}
		else if (Global_1900325->f_23 == 1)
		{
			uParam0->f_592[iParam1]->f_69 = (uParam0->f_592[iParam1]->f_69 + (0.012f * IntToFloat(uParam0->f_592[iParam1]->f_86)));
		}
		else if (Global_1900325->f_23 == 2)
		{
			uParam0->f_592[iParam1]->f_69 = (uParam0->f_592[iParam1]->f_69 + (0.014f * IntToFloat(uParam0->f_592[iParam1]->f_86)));
		}
		else
		{
			uParam0->f_592[iParam1]->f_69 = (uParam0->f_592[iParam1]->f_69 + (0.016f * IntToFloat(uParam0->f_592[iParam1]->f_86)));
		}
		if (uParam0->f_592[iParam1]->f_69 > 2f)
		{
			uParam0->f_592[iParam1]->f_69 = 2f;
		}
	}
	if (uParam0->f_592[iParam1]->f_69 != -1f)
	{
		set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "ANIM_RATE", uParam0->f_592[iParam1]->f_69);
	}
}

void func_510(var uParam0)
{
	if (func_80(&(uParam0->f_118)))
	{
		fVar0 = uParam0->f_70;
		if (func_459(&(uParam0->f_118)) < 150)
		{
			fVar0 = (fVar0 + 0.1f);
		}
		else
		{
			fVar0 = (fVar0 - 0.1f);
		}
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		else if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		uParam0->f_70 = fVar0;
	}
	else
	{
		uParam0->f_70 = 0f;
	}
	if (uParam0->f_70 != -1f)
	{
		set_task_move_network_signal_float(*uParam0, "STABBING_SPEED", uParam0->f_70);
	}
}

void func_511(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_71 != -1f)
	{
		if (is_ped_a_player(&(uParam0->f_592[iParam1])))
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "STAB_SUCCESS", uParam0->f_592[iParam1]->f_71);
		}
		else if (uParam0->f_592[iParam1]->f_86 >= uParam0->f_49)
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "STAB_SUCCESS", 0f);
		}
		else
		{
			set_task_move_network_signal_float(&(uParam0->f_592[iParam1]), "STAB_SUCCESS", 1f);
		}
	}
}

void func_512(var uParam0)
{
	if (uParam0->f_72 != -1f)
	{
		set_task_move_network_signal_float(*uParam0, "WINCE", uParam0->f_72);
	}
}

bool func_513(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	switch (_0xe9a6400d1a0e7a55(iParam0))
	{
		case -1898802991:
		case -1812775187:
		case -1586866178:
		case -1329297961:
		case -1153486373:
		case -807140023:
		case -788049279:
		case -744146776:
		case -444913130:
		case -405217195:
		case -316251561:
		case -44602072:
		case 72973500:
		case 358714039:
		case 721646648:
		case 756119322:
		case 960827579:
		case 1215442709:
		case 1454951330:
		case 1676600846:
		case 1697682822:
		case 1915308076:
			return true;
	}
	return false;
}

bool func_514(var uParam0)
{
	if (uParam0->f_18 == 785897420)
	{
		return true;
	}
	if (uParam0->f_18 == -121390149)
	{
		iVar0 = func_161(uParam0->f_50);
		if (!func_225(uParam0->f_592[iVar0]))
		{
			return true;
		}
	}
	return false;
}

float func_515(var uParam0, int iParam1)
{
	if (!func_199(iParam1))
	{
		return 0f;
	}
	if (!func_80(&(uParam0->f_592[iParam1]->f_115)))
	{
		return 0f;
	}
	fVar0 = to_float(func_459(&(uParam0->f_592[iParam1]->f_115)));
	if (fVar0 >= to_float(6000000))
	{
		fVar0 = to_float(6000000);
	}
	return fVar0;
}

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	func_611(uParam0, "FFF_Time", iParam1);
}

void func_517(var uParam0)
{
	if (!does_cam_exist(uParam0->f_314.f_30))
	{
		iVar0 = func_161(uParam0->f_21);
		if (func_199(iVar0))
		{
			vVar1 = { get_offset_from_entity_in_world_coords(&(uParam0->f_592[iVar0]), uParam0->f_314.f_31) };
			vVar4 = { get_offset_from_entity_in_world_coords(&(uParam0->f_592[iVar0]), uParam0->f_314.f_34) };
			uParam0->f_314.f_30 = create_camera(26379945, false);
			set_cam_coord(uParam0->f_314.f_30, vVar1);
			point_cam_at_coord(uParam0->f_314.f_30, vVar4);
			uParam0->f_314.f_37 = get_gameplay_cam_fov();
			set_cam_fov(uParam0->f_314.f_30, (uParam0->f_314.f_37 + 2.5f));
			shake_cam(uParam0->f_314.f_30, "TABLE_GAMES_IDLE_SHAKE", 1f);
			set_cam_active(uParam0->f_314.f_30, true);
			render_script_cams(true, false, 3000, true, false, 0);
			func_502(&(uParam0->f_314), 2, 0);
			uParam0->f_314.f_38 = 0f;
		}
	}
}

void func_518(var uParam0)
{
	if (!does_cam_exist(uParam0->f_314.f_39))
	{
		iVar0 = func_161(uParam0->f_21);
		sVar1 = func_680();
		uParam0->f_314.f_39 = create_camera(964613260, false);
		play_cam_anim(uParam0->f_314.f_39, sVar1, func_78(0, 0), Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iVar0]), false, 2);
		shake_cam(uParam0->f_314.f_39, "TABLE_GAMES_IDLE_SHAKE", 1f);
		set_cam_fov(uParam0->f_314.f_39, get_final_rendered_cam_fov());
		set_cam_active(uParam0->f_314.f_39, true);
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

void func_519(var uParam0)
{
	if (((uParam0->f_28 == 3 && !func_520(uParam0, 2)) && does_cam_exist(uParam0->f_30)) && is_cam_active(uParam0->f_30))
	{
		uParam0->f_38 = (uParam0->f_38 + (get_frame_time() / 1.5f));
		uParam0->f_38 = func_681(uParam0->f_38, 0f, 1f);
		fVar0 = _0xef50e344a8f93784(uParam0->f_38, (uParam0->f_37 + 2.5f), uParam0->f_37, 2);
		set_cam_fov(uParam0->f_30, fVar0);
		func_502(uParam0, 2, 0);
	}
}

bool func_520(var uParam0, int iParam1)
{
	return func_49(*uParam0, iParam1);
}

void func_521(var uParam0, int iParam1)
{
	if (!func_135(uParam0, iParam1))
	{
		func_50(&(uParam0->f_118), iParam1);
	}
}

void func_522(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 0 || uParam0->f_4 == 1)
	{
		if (func_322(*uParam0))
		{
			func_323(uParam0, 1, 1);
		}
	}
	if (uParam0->f_2 != iParam1)
	{
	}
	uParam0->f_2 = iParam1;
}

bool func_523(var uParam0)
{
	if ((uParam0->f_64 >= 7 && uParam0->f_64 <= 17) || uParam0->f_64 == 25)
	{
		return true;
	}
	return false;
}

int func_524(var uParam0, int iParam1)
{
	if (uParam0->f_4 == 1)
	{
		return 1;
	}
	if (uParam0->f_2 == 0 || func_43(iParam1, 2))
	{
		if (func_322(*uParam0))
		{
			func_323(uParam0, 1, 1);
		}
		return 0;
	}
	Global_1899528->f_207 = get_frame_count();
	if (is_control_pressed(2, -385266784))
	{
		disable_control_action(2, -1242632265, false);
		disable_control_action(0, -1242632265, false);
	}
	if (!func_322(*uParam0))
	{
		if (is_control_just_pressed(2, -385266784) || uParam0->f_5)
		{
			*uParam0 = func_682("MG_LEAVE2", -385266784, 2, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
			func_683(*uParam0, -668070958);
			_uiprompt_set_attribute((*Global_1945938)[*uParam0]->f_3, 10, 1);
			uParam0->f_3 = 1;
		}
	}
	uParam0->f_1 = func_684(*uParam0, 1);
	if (func_322(*uParam0))
	{
		if (func_685(*uParam0, 1))
		{
			play_sound_frontend("YES", "HUD_DOMINOS_SOUNDSET", true, 0);
			if (func_322(*uParam0))
			{
				func_323(uParam0, 1, 1);
			}
			uParam0->f_4 = 1;
			return 1;
		}
		if (uParam0->f_1 == 0f)
		{
			if (!is_control_pressed(2, -385266784))
			{
				if (func_322(*uParam0) && uParam0->f_5 == 0)
				{
					play_sound_frontend("NO", "HUD_DOMINOS_SOUNDSET", true, 0);
					func_323(uParam0, 1, 1);
				}
				uParam0->f_3 = 0;
				return 0;
			}
		}
	}
	return 0;
}

bool func_525(var uParam0)
{
	return (uParam0->f_4 == 1 && uParam0->f_2 == 1);
}

bool func_526(var uParam0, int iParam1)
{
	return &uParam0->f_42[iParam1] == 1;
}

bool func_527()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

char* func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFFF_GUTS_DESC";
		case 1:
			return "MGFFF_BURNOUT_DESC";
		case 2:
			return "MGFFF_CLASSIC_DESC";
		case 3:
			return "MGFFF_SOLO_DESC";
		case 4:
			return "MGFFF_SOLO_UNL_DESC";
		case 5:
			return "MGFFF_BET_ACCEPT";
		case 6:
			return "MGFFF_BET_NO_MONEY";
		case 7:
			return "MGFFF_START_AI_TIME";
		case 8:
			return "MGFFF_START_AI_LAPS";
		case 9:
			return "MGFFF_START_HUMAN_TIME";
		case 10:
			return "MGFFF_START_HUMAN_LAPS";
		case 11:
			return "MGFFF_START_ROUND_NONE";
		case 12:
			return "MGFFF_START_ROUND_NONE_1";
		case 13:
			return "MGFFF_START_ROUND_BOTH";
		case 14:
			return "MGFFF_START_ROUND_BOTH_2";
		case 15:
			return "MGFFF_START_ROUND_ONE";
		case 16:
			return "MGFFF_START_ROUND_ONE_1";
		case 17:
			return "MGFFF_START_ROUND_ONE_2";
		case 18:
			return "MGFFF_CLASSIC_NO_LIVES";
		case 19:
			return "MGFFF_END_TURN_TIME";
		case 20:
			return "MGFFF_END_TURN_LAPS";
		case 21:
			return "MGFFF_TIE_TIME";
		case 22:
			return "MGFFF_TIE_NO_TIME";
		case 23:
			return "MGFFF_TIE_LAPS";
		case 24:
			return "MGFFF_WON_ROUND_TIME";
		case 25:
			return "MGFFF_WON_ROUND_LAPS";
		case 26:
			return "MGFFF_WON_POT_TIME";
		case 27:
			return "MGFFF_WON_POT_LAPS";
		case 28:
			return "MGFFF_WON_POT_QUIT";
		case 29:
			return "MGFFF_BEAT_OPP";
		case 30:
			return "MGFFF_NEXT_OPP";
		case 31:
			return "MGFFF_WON_TOURN";
		case 32:
			return "MGFFF_FLOURISH";
		case 33:
			return "MGFFF_HELP_ZOOM";
		case 34:
			return "MGFFF_REC_LAPS";
		case 35:
			return "MGFFF_REC_PLAY";
		case 36:
			return "MGFFF_REC_FAST";
		case 37:
			return "MGFFF_REC_LAPS_PLAY";
		case 38:
			return "MGFFF_REC_LAPS_FAST";
		case 39:
			return "MGFFF_REC_PLAY_FAST";
		case 40:
			return "MGFFF_REC_ALL";
		default:
			break;
	}
	return uVar0;
}

var func_529(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_530(var uParam0)
{
	return uParam0->f_1 == player_id();
}

void func_531(int iParam0, int iParam1)
{
	if (func_43(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

bool func_532(var uParam0)
{
	if (uParam0->f_23 == 0 || uParam0->f_22 == 0)
	{
		return false;
	}
	return uParam0->f_23 == uParam0->f_22;
}

bool func_533(var uParam0)
{
	if (!func_532(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		if (is_bit_set(uParam0->f_22, iVar0))
		{
			if (!func_686(uParam0, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

char* func_534(var uParam0, int iParam1)
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

float func_535(var uParam0)
{
	if (!func_80(uParam0))
	{
		return 0f;
	}
	if (func_633(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_340() - uParam0->f_1);
}

int func_536(var uParam0, int iParam1)
{
	if (func_64(uParam0->f_592[iParam1]))
	{
		return uParam0->f_175.f_6[iParam1]->f_8;
	}
	return 1;
}

int func_537(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_687(iVar0, 2))
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
		func_688(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_538(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_322(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, 11, iParam1);
}

void func_539(int iParam0, int iParam1)
{
	if (!func_322(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xa520c7b05fa4eb2a((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_540(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_689(iParam0);
	if (bParam3)
	{
		func_690(iParam0, sParam1, iParam2);
	}
}

bool func_541(int iParam0, var uParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		return _0xba2a089e60ed1163(uParam1, iParam0, 2084597891, 0, 0);
	}
	if (!decor_exist_on(iParam0, "loot_money"))
	{
		return false;
	}
	*uParam1 = decor_get_int(iParam0, "loot_money");
	return true;
}

bool func_542(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_691(iParam0);
		return func_692(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_543(var uParam0)
{
	if (!func_135(uParam0, 1024))
	{
		uParam0->f_6[0] = _databinding_add_data_container(uParam0->f_4, "0");
		uParam0->f_6[0]->f_1 = _databinding_add_data_bool(&(uParam0->f_6[0]), "isVisible", 0);
		uParam0->f_6[0]->f_2 = _databinding_add_data_string(&(uParam0->f_6[0]), "stateText", "");
		uParam0->f_6[0]->f_3 = _databinding_add_data_string(&(uParam0->f_6[0]), "playerIconTextureDictionary", "");
		uParam0->f_6[0]->f_4 = _databinding_add_data_string(&(uParam0->f_6[0]), "playerIconTextureName", "");
		uParam0->f_6[0]->f_5 = _databinding_add_data_bool(&(uParam0->f_6[0]), "backgroundVisible", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_5, 0, "player_stack_item", &(uParam0->f_6[0]));
		uParam0->f_6[1] = _databinding_add_data_container(uParam0->f_4, "1");
		uParam0->f_6[1]->f_1 = _databinding_add_data_bool(&(uParam0->f_6[1]), "isVisible", 0);
		uParam0->f_6[1]->f_2 = _databinding_add_data_string(&(uParam0->f_6[1]), "stateText", "");
		uParam0->f_6[1]->f_3 = _databinding_add_data_string(&(uParam0->f_6[1]), "playerIconTextureDictionary", "");
		uParam0->f_6[1]->f_4 = _databinding_add_data_string(&(uParam0->f_6[1]), "playerIconTextureName", "");
		uParam0->f_6[1]->f_5 = _databinding_add_data_bool(&(uParam0->f_6[1]), "backgroundVisible", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_5, 1, "player_stack_item", &(uParam0->f_6[1]));
		func_521(uParam0, 1024);
	}
}

void func_544(var uParam0, int iParam1, int iParam2)
{
	if ((func_135(uParam0, 2) && func_135(uParam0, 1024)) && !func_135(uParam0, iParam2))
	{
		_databinding_write_data_bool(uParam0->f_6[iParam1]->f_5, 1);
		uParam0->f_6[iParam1]->f_6 = _databinding_add_ui_item_list(&(uParam0->f_6[iParam1]), "playerHandList");
		uParam0->f_6[iParam1]->f_7 = _databinding_add_data_container(&(uParam0->f_6[iParam1]), "playerHandData");
		uParam0->f_6[iParam1]->f_14[0] = _databinding_add_data_container(uParam0->f_6[iParam1]->f_7, "0");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[0]), "handTextureName", "FIVE_FINGER_HAND_1");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[0]), "crossTextureName", "FIVE_FINGER_STRIKE_1");
		uParam0->f_6[iParam1]->f_14[0]->f_1 = _databinding_add_data_int(&(uParam0->f_6[iParam1]->f_14[0]), "state", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_6[iParam1]->f_6, 0, "single_game_token", &(uParam0->f_6[iParam1]->f_14[0]));
		uParam0->f_6[iParam1]->f_14[1] = _databinding_add_data_container(uParam0->f_6[iParam1]->f_7, "1");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[1]), "handTextureName", "FIVE_FINGER_HAND_2");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[1]), "crossTextureName", "FIVE_FINGER_STRIKE_2");
		uParam0->f_6[iParam1]->f_14[1]->f_1 = _databinding_add_data_int(&(uParam0->f_6[iParam1]->f_14[1]), "state", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_6[iParam1]->f_6, 1, "single_game_token", &(uParam0->f_6[iParam1]->f_14[1]));
		uParam0->f_6[iParam1]->f_14[2] = _databinding_add_data_container(uParam0->f_6[iParam1]->f_7, "2");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[2]), "handTextureName", "FIVE_FINGER_HAND_3");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[2]), "crossTextureName", "FIVE_FINGER_STRIKE_3");
		uParam0->f_6[iParam1]->f_14[2]->f_1 = _databinding_add_data_int(&(uParam0->f_6[iParam1]->f_14[2]), "state", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_6[iParam1]->f_6, 2, "single_game_token", &(uParam0->f_6[iParam1]->f_14[2]));
		uParam0->f_6[iParam1]->f_14[3] = _databinding_add_data_container(uParam0->f_6[iParam1]->f_7, "3");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[3]), "handTextureName", "FIVE_FINGER_HAND_4");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[3]), "crossTextureName", "FIVE_FINGER_STRIKE_4");
		uParam0->f_6[iParam1]->f_14[3]->f_1 = _databinding_add_data_int(&(uParam0->f_6[iParam1]->f_14[3]), "state", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_6[iParam1]->f_6, 3, "single_game_token", &(uParam0->f_6[iParam1]->f_14[3]));
		uParam0->f_6[iParam1]->f_14[4] = _databinding_add_data_container(uParam0->f_6[iParam1]->f_7, "4");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[4]), "handTextureName", "FIVE_FINGER_HAND_5");
		_databinding_add_data_string(&(uParam0->f_6[iParam1]->f_14[4]), "crossTextureName", "FIVE_FINGER_STRIKE_5");
		uParam0->f_6[iParam1]->f_14[4]->f_1 = _databinding_add_data_int(&(uParam0->f_6[iParam1]->f_14[4]), "state", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_6[iParam1]->f_6, 4, "single_game_token", &(uParam0->f_6[iParam1]->f_14[4]));
		func_521(uParam0, iParam2);
	}
}

void func_545(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((func_135(&(uParam0->f_175), 2) && func_135(&(uParam0->f_175), 1024)) && !func_135(&(uParam0->f_175), iParam3))
	{
		_databinding_write_data_string(uParam0->f_175.f_6[iParam1]->f_3, uParam0->f_175.f_6[iParam2]->f_12);
		_databinding_write_data_string(uParam0->f_175.f_6[iParam1]->f_4, uParam0->f_175.f_6[iParam2]->f_13);
		_databinding_write_data_bool(uParam0->f_175.f_6[iParam1]->f_1, 1);
		func_521(&(uParam0->f_175), iParam3);
	}
}

char* func_546(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_547(int iParam0, int iParam1, int iParam2)
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

char* func_548(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_549(int iParam0, int iParam1, int iParam2)
{
	iVar5 = 0;
	switch (iParam0)
	{
		case 78:
			if (iParam1 == 0)
			{
				iVar0[0] = 190080028;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = 1778509231;
				iVar5 = 1;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				iVar0[0] = -787683245;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = 1759076651;
				iVar0[1] = 1588546775;
				iVar5 = 2;
			}
			break;
		case 95:
			if (iParam1 == 0)
			{
				iVar0[0] = -1642483742;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = -588355879;
				iVar5 = 1;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				iVar0[0] = 2133848994;
				iVar0[1] = 79156795;
				iVar0[2] = 1086659483;
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = 653445543;
				iVar0[1] = -1039531072;
				iVar5 = 2;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				iVar0[0] = -323096446;
				iVar0[1] = 2103826247;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = -422937996;
				iVar5 = 1;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				iVar0[0] = -1345652903;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = 2127070944;
				iVar5 = 1;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				iVar0[0] = 1127589605;
				iVar0[1] = 1127589605;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = -1384606398;
				iVar5 = 1;
			}
			break;
		case 76:
			if (iParam1 == 0)
			{
				iVar0[0] = -2087759666;
				iVar0[1] = -1789856687;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = -161027961;
				iVar5 = 1;
			}
			break;
		case 92:
			if (iParam1 == 0)
			{
				iVar0[0] = 918972034;
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = 9390805;
				iVar5 = 1;
			}
			break;
		case 69:
		case 75:
			if (iParam1 == 0)
			{
				iVar0[0] = 525529657;
				iVar0[1] = -2087759666;
				iVar0[2] = -1789856687;
				iVar0[3] = -597362537;
				iVar5 = 4;
			}
			else
			{
				iVar0[0] = -161027961;
				iVar5 = 1;
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				iVar0[0] = 2133848994;
				iVar0[1] = 79156795;
				iVar0[2] = 1086659483;
				iVar0[3] = 1854820959;
				iVar5 = 4;
			}
			else
			{
				iVar0[0] = 653445543;
				iVar0[1] = -1039531072;
				iVar5 = 2;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				iVar0[0] = 480011144;
				iVar0[1] = 966958492;
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = 208558043;
				iVar0[1] = -1253725829;
				iVar5 = 2;
			}
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = get_random_int_in_range(0, iVar5);
	}
	if (iParam2 < iVar5)
	{
		return &(iVar0[iParam2]);
	}
	return 0;
}

int func_550(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_693(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_551(var uParam0)
{
	if (!func_80(uParam0))
	{
		return 0;
	}
	if (func_633(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_634() - round((uParam0->f_1 * 1000f)));
}

bool func_552(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_694(iParam0, &Var0);
}

float func_553(var uParam0)
{
	if (!func_80(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_633(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_340() - uParam0->f_1);
}

int func_554(int iParam0)
{
	return iParam0;
}

void func_555(int iParam0)
{
	if (!func_695(iParam0))
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

int func_556(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_557(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_558(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

int func_559(int iParam0)
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

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_696(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_697(Var0);
}

bool func_561(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_698(iVar0, 1);
		if (!func_699(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_700(iVar0) == -1)
			{
				func_701(iVar0, 0);
				func_702(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_703(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0] = 0;
			Global_1946804->f_2456[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_562(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_34() != -1;
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
			func_696(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_704(iParam1, 29, bVar4, 1, 0);
			func_704(iParam1, 31, bVar4, 1, 0);
			func_704(iParam1, 30, bVar4, 1, 0);
			func_704(iParam1, 22, bVar4, 1, 0);
			func_704(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_705(32768) && func_699(1108822547, 8)) && func_706(10, iParam3))
	{
		func_707(iParam1, 0, 1);
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
			iVar3 = func_698(iVar1, 1);
			if (func_699(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_706(iVar1, iParam3))
				{
				}
				else if ((func_699(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_699(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_704(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_708(iVar3, 1, 6);
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
								func_704(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_699(iVar3, 1))
							{
								func_703(iVar3, 1, 6);
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

int func_563(int iParam0)
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

void func_564(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_709(iParam1);
	}
}

float func_565(int iParam0, int iParam1, bool bParam2)
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
	return func_710(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_566(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_711(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_567(int iParam0)
{
	iVar0 = func_159(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_568(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_712(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_569(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_570(int iParam0, int iParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_571(int iParam0)
{
	iVar0 = func_344(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_713(iVar0);
}

int func_572(int iParam0, int iParam1)
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
			func_714(iVar2);
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

void func_573()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_574(int iParam0, int iParam1)
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

int func_575(bool bParam0)
{
	if (func_34() == -1)
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

int func_576(int iParam0)
{
	if (!func_715(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_577(int iParam0)
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

void func_578(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_579(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_580(int iParam0, int iParam1)
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
			func_716((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_716(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0])))
	{
		func_176(&(Global_1898164->f_1[0]), 3);
	}
}

char* func_581(int iParam0, bool bParam1)
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
			if ((func_350((*Global_1835011)[59]->f_1, 1) || func_350((*Global_1347702)[1]->f_15, 1)) || func_167((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_717(403634348, 1))
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

int func_582(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_718(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_326(iParam0);
	return func_719(iParam1, iVar0, bParam2, 1);
}

float func_583(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_62(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_350((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_720(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_350((*Global_1347702)[63]->f_15, 1) || func_167((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_720(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_350((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_328(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_720(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_350((*Global_1347702)[134]->f_15, 1) || func_167((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_350((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_720(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_717(747937920, 1) && !func_350((*Global_1347702)[1]->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && does_entity_exist(func_144(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0]->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = get_random_int_in_range(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_389(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_585(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_586(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_146(iParam0) || func_154(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_587(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
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

void func_588(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = func_144(iParam0);
	func_721(iVar0);
	func_20(iParam0, 60, 1);
	if (bParam1)
	{
		func_722(iParam0);
	}
}

void func_589(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = func_144(iParam0);
	func_723(iVar0);
	func_151(iParam0, 60, 1);
	if (bParam1)
	{
		func_724(iParam0);
	}
}

void func_590(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = func_144(iParam0);
	func_725(iVar0);
	if (iParam0 == 14)
	{
		func_726(iVar0);
	}
	func_20(iParam0, 61, 1);
	if (bParam1)
	{
		func_727(iParam0);
	}
}

void func_591(int iParam0, bool bParam1)
{
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = func_144(iParam0);
	func_728(iVar0);
	func_151(iParam0, 61, 1);
	if (bParam1)
	{
		func_729(iParam0);
	}
}

int func_592(var uParam0)
{
	return uParam0;
}

bool func_593(int iParam0)
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

bool func_594(int iParam0)
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

bool func_595(int iParam0, int iParam1)
{
	if (!func_62(iParam0))
	{
		return false;
	}
	func_730(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_596(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_597(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_731(296923297, iParam1);
			return func_732(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_731(1237718549, iParam1);
			return func_732(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_598(int iParam0, int iParam1)
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

bool func_599(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_600(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_598(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_601(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_602(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_598(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_598(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_598(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_598(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_598(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_598(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_598(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_598(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_598(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_598(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_598(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_598(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_598(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_598(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_598(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_598(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_598(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_598(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_598(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_598(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_598(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_598(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_598(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_598(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_598(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_598(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_603(int iParam0)
{
	func_733(iParam0, 1);
	func_733(iParam0, 128);
	func_733(iParam0, 256);
	func_733(iParam0, 512);
	func_733(iParam0, 1024);
	func_733(iParam0, 2048);
	func_733(iParam0, 4096);
	func_733(iParam0, 65536);
	func_733(iParam0, 16384);
	func_733(iParam0, 262144);
	func_733(iParam0, 524288);
	func_733(iParam0, 1048576);
	func_733(iParam0, 2097152);
	func_733(iParam0, 32768);
	func_733(iParam0, 131072);
	func_733(iParam0, 134217728);
	func_733(iParam0, 1073741824);
}

void func_604(int iParam0, bool bParam1)
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

int func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_734(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_734(iVar4) && iVar4 != iVar0)
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
	if (func_34() == -1 && !func_735(iVar0))
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
				if (func_735(-183018591))
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
		if (iParam0 != Global_35 && func_734(iVar0))
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
		func_736(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_737(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_738(iVar0))
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

void func_606(var uParam0)
{
	if (!func_135(uParam0, 2))
	{
		uParam0->f_1 = _databinding_add_data_container_from_path("", "MinigamesDataStore");
		uParam0->f_2 = _databinding_add_data_container(uParam0->f_1, "gameSettings");
		_databinding_add_data_string(uParam0->f_2, "gameTokenSetTextureDictionary", "minigames_hud");
		uParam0->f_3 = _databinding_add_data_container(uParam0->f_1, "playerStack");
		uParam0->f_4 = _databinding_add_data_container(uParam0->f_3, "playerData");
		uParam0->f_5 = _databinding_add_ui_item_list(uParam0->f_3, "playerList");
		uParam0->f_57 = _databinding_add_data_container(uParam0->f_1, "totalsStack");
		uParam0->f_58 = _databinding_add_data_bool(uParam0->f_57, "isVisible", 0);
		uVar0 = _databinding_add_data_container(uParam0->f_57, "totalsTextItemData");
		uParam0->f_64 = _databinding_add_ui_item_list(uParam0->f_57, "totalsItemArray");
		iVar2 = 0;
		while (iVar2 < 4)
		{
			_0x6318fb3be37e11b3(uParam0->f_64, iVar2);
			StringCopy(&cVar1, "", 8);
			StringIntConCat(&cVar1, iVar2, 8);
			uParam0->f_59[iVar2] = _databinding_add_data_container(uVar0, &cVar1);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_64, iVar2, "money_with_text", &(uParam0->f_59[iVar2]));
			_databinding_add_data_string(&(uParam0->f_59[iVar2]), "text", "");
			_databinding_add_data_string(&(uParam0->f_59[iVar2]), "moneyText", "");
			iVar2++;
		}
		uParam0->f_65 = _databinding_add_data_container(uParam0->f_1, "bettingControl");
		uParam0->f_66 = _databinding_add_data_bool(uParam0->f_65, "isVisible", 0);
		uParam0->f_67 = _databinding_add_data_string(uParam0->f_65, "text", "");
		uParam0->f_68 = _databinding_add_data_bool(uParam0->f_65, "isLeftArrowVisible", 0);
		uParam0->f_69 = _databinding_add_data_bool(uParam0->f_65, "isRightArrowVisible", 0);
		uParam0->f_70 = _databinding_add_data_container(uParam0->f_1, "centralScoretimer");
		uParam0->f_71 = _databinding_add_data_bool(uParam0->f_70, "isVisible", 0);
		uParam0->f_72 = _databinding_add_data_string(uParam0->f_70, "timerString", "");
		uParam0->f_73 = _databinding_add_data_bool(uParam0->f_70, "isTimerLow", 0);
		uParam0->f_74 = _databinding_add_data_container(uParam0->f_70, "score");
		uParam0->f_75 = _databinding_add_data_bool(uParam0->f_74, "leftScoreVisible", 0);
		uParam0->f_76 = _databinding_add_data_string(uParam0->f_74, "leftScore", "");
		uParam0->f_77 = _databinding_add_data_hash(uParam0->f_74, "leftScoreColor", -1640778959);
		uParam0->f_78 = _databinding_add_data_bool(uParam0->f_74, "rightScoreVisible", 0);
		uParam0->f_79 = _databinding_add_data_string(uParam0->f_74, "rightScore", "");
		uParam0->f_80 = _databinding_add_data_hash(uParam0->f_74, "rightScoreColor", 1937193856);
		func_521(uParam0, 2);
	}
}

bool func_607(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return true;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return true;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return true;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = get_random_int_in_range(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return true;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return true;
			}
			return false;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return true;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return true;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return true;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return true;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return true;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return true;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return true;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return true;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return true;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return true;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 25:
			return false;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return true;
			}
			return false;
		case 29:
			return false;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return true;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return true;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return true;
		default:
			break;
	}
	return false;
}

int func_608(int iParam0, int iParam1)
{
	return func_740(iParam0, iParam1, 4, get_hash_key(func_739(iParam1)));
}

int func_609(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_741(iParam0) & 65535;
}

int func_610(var uParam0)
{
	if (uParam0->f_64 >= 7 && uParam0->f_64 <= 25)
	{
		return 1;
	}
	return 0;
}

void func_611(var uParam0, char* sParam1, int iParam2)
{
	if ((!is_entity_dead(*uParam0) && decor_exist_on(*uParam0, sParam1)) && decor_get_int(*uParam0, sParam1) != iParam2)
	{
		decor_set_int(*uParam0, sParam1, iParam2);
	}
}

int func_612(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -798342154:
			return 0;
		case -776039804:
			return 2;
		case -121390149:
			return 1;
		case 0:
			return 4;
		case 785897420:
			return 3;
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

int func_613(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_614(var uParam0, int iParam1, char* sParam2)
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

void func_615(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_616(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

int func_617(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (is_ped_a_player(&(uParam0->f_592[iVar1])) && func_309(uParam0->f_592[iVar1]) > iVar0)
		{
			iVar0 = func_309(uParam0->f_592[iVar1]);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_618()
{
	if (Global_1900325->f_1 == 1)
	{
		return false;
	}
	return Global_1900325->f_23 >= 3;
}

void func_619(var uParam0)
{
	if (func_5(uParam0, 8192))
	{
		return;
	}
	set_transition_timecycle_modifier("Odd_Jobs_Five_Finger_Fillet", 3f);
	func_6(uParam0, 8192);
}

Vector3 func_620(var uParam0, int iParam1)
{
	if (uParam0->f_21 == iParam1)
	{
		vVar0 = { get_anim_initial_offset_position(func_78(0, uParam0->f_592[iParam1]->f_11), func_443(uParam0->f_592[iParam1]->f_8), Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 0f, 2) };
	}
	else
	{
		vVar0 = { get_anim_initial_offset_position(func_78(0, uParam0->f_592[iParam1]->f_11), func_742(), Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 0f, 2) };
	}
	vVar0.f_2 = Global_1900325->f_9[iParam1]->f_2;
	return vVar0;
}

void func_621(var uParam0, var uParam1, int iParam2)
{
	if (does_entity_exist(*uParam1) && !is_entity_attached(*uParam1))
	{
		iVar0 = iParam2;
		if (!func_199(iParam2))
		{
			iVar0 = func_161(uParam0->f_21);
		}
		set_entity_coords(*uParam1, Global_1900325->f_5, true, false, true, true);
		set_entity_rotation(*uParam1, 0f, 0f, &(Global_1900325->f_16[iVar0]), 2, true);
		play_entity_anim(*uParam1, "knife_idle", func_78(0, 0), 1000f, true, true, false, 0f, 33158);
		force_entity_ai_and_animation_update(*uParam1, true);
		func_743(uParam0, iParam2);
	}
}

void func_622(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_592[iParam1]) || uParam0->f_592[iParam1]->f_3 == 1)
	{
		return;
	}
	uParam0->f_592[iParam1]->f_3 = 1;
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (!func_201(&(uParam0->f_355), 6))
		{
			func_32(1);
		}
		func_57(&(uParam0->f_175));
		if (uParam0->f_592[iParam1]->f_4 == 1)
		{
			uParam0->f_592[iParam1]->f_121 = 2;
			if (uParam0->f_592[iParam1]->f_7 == 1 && uParam0->f_18 != 785897420)
			{
				func_670(-760820978);
			}
		}
		func_297(uParam0->f_592[iParam1], 0);
	}
}

bool func_623(int iParam0)
{
	return (func_496(iParam0) && is_task_move_network_ready_for_transition(iParam0));
}

bool func_624(char* sParam0)
{
	if (is_string_null_or_empty(sParam0) || !_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return false;
	}
	if (((((((((are_strings_equal("IdleWithoutKnife", sParam0) || are_strings_equal("IdleWithKnife", sParam0)) || are_strings_equal("MediumFail", sParam0)) || are_strings_equal("MediumSmallFail", sParam0)) || are_strings_equal("SpikeKnifePositive", sParam0)) || are_strings_equal("FailSpike", sParam0)) || are_strings_equal("Success_from_idle", sParam0)) || are_strings_equal("Fail_from_idle", sParam0)) || are_strings_equal("ExitBase", sParam0)) || are_strings_equal("ExitChair", sParam0))
	{
		return true;
	}
	return false;
}

bool func_625(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if ((are_strings_equal("End", sParam0) || are_strings_equal("SpikeKnife", sParam0)) || are_strings_equal("Solo_Flourish", sParam0))
	{
		return false;
	}
	return true;
}

void func_626(var uParam0)
{
	uParam0->f_76 = to_float(get_random_int_in_range(0, 2));
	if (uParam0->f_76 != -1f)
	{
		set_task_move_network_signal_float(*uParam0, "INSIDE_OUTSIDE", uParam0->f_76);
	}
}

void func_627(var uParam0, int iParam1)
{
	if (func_276(uParam0->f_592[iParam1]->f_79) && func_508(&(uParam0->f_592[iParam1])))
	{
		uParam0->f_592[iParam1]->f_79 = { _get_object_offset_from_coords(Global_1900325->f_5, &(Global_1900325->f_16[iParam1]), -0.1002f, -0.3413f, -0.0123f) };
	}
	if (!func_276(uParam0->f_592[iParam1]->f_79))
	{
		_0x4662bfe01938d98d(&(uParam0->f_592[iParam1]), "HAND_POS", uParam0->f_592[iParam1]->f_79);
	}
}

bool func_628(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (((((((((((are_strings_equal("IdleWithKnife", sParam0) || are_strings_equal("StartKnife", sParam0)) || are_strings_equal("From_0_to_target_1", sParam0)) || are_strings_equal("From_target_1_to_0", sParam0)) || are_strings_equal("From_0_to_target_2", sParam0)) || are_strings_equal("From_target_2_to_0", sParam0)) || are_strings_equal("From_0_to_target_3", sParam0)) || are_strings_equal("From_target_3_to_0", sParam0)) || are_strings_equal("From_0_to_target_4", sParam0)) || are_strings_equal("From_target_4_to_0", sParam0)) || are_strings_equal("From_0_to_target_5", sParam0)) || are_strings_equal("From_target_5_to_0", sParam0))
	{
		return true;
	}
	return false;
}

bool func_629(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if ((((are_strings_equal("SpikeKnife", sParam0) || are_strings_equal("Turn_fail", sParam0)) || are_strings_equal("Turn_success", sParam0)) || are_strings_equal("Success_from_idle", sParam0)) || are_strings_equal("Fail_from_idle", sParam0))
	{
		return true;
	}
	return false;
}

void func_630(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_89 >= &uParam0->f_508[3])
	{
		uParam0->f_592[iParam1]->f_75 = 0f;
	}
	else if (uParam0->f_592[iParam1]->f_89 <= &uParam0->f_508[1])
	{
		uParam0->f_592[iParam1]->f_75 = 1f;
	}
	else
	{
		uParam0->f_592[iParam1]->f_75 = 0.5f;
	}
}

bool func_631(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if ((are_strings_equal("ExitBase", sParam0) || are_strings_equal("ExitChair", sParam0)) || are_strings_equal("TurnQuit", sParam0))
	{
		return true;
	}
	return false;
}

float func_632(var uParam0)
{
	if (func_496(*uParam0))
	{
		return _0x844ceee428ea35b0(*uParam0, "CLIP_PHASE");
	}
	return -1f;
}

bool func_633(var uParam0)
{
	return func_162(*uParam0, 2);
}

int func_634()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_635(var uParam0, int iParam1)
{
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return;
	}
	if (uParam0->f_18 == -121390149)
	{
		iVar0 = 20;
		iVar1 = 0;
		if (Global_1900325->f_23 == 0)
		{
			if (uParam0->f_60 <= 1 && func_433(uParam0->f_592[iParam1]) >= 4)
			{
				iVar1 = 1;
				uParam0->f_49 = get_random_int_in_range(4, 9);
			}
			else if (uParam0->f_60 == 2 && func_433(uParam0->f_592[iParam1]) >= 5)
			{
				iVar1 = 1;
				uParam0->f_49 = get_random_int_in_range(5, 9);
			}
			else
			{
				uParam0->f_49 = get_random_int_in_range(4, iVar0);
			}
		}
		else if (Global_1900325->f_23 == 1)
		{
			if (uParam0->f_60 <= 1 && func_433(uParam0->f_592[iParam1]) >= 5)
			{
				iVar1 = 1;
				uParam0->f_49 = get_random_int_in_range(6, 9);
			}
			else
			{
				uParam0->f_49 = get_random_int_in_range(5, iVar0);
			}
		}
		else if (Global_1900325->f_23 == 2)
		{
			uParam0->f_49 = get_random_int_in_range(7, iVar0);
		}
		else
		{
			uParam0->f_49 = get_random_int_in_range(9, iVar0);
		}
		if (iVar1 == 0)
		{
			if (func_433(uParam0->f_592[iParam1]) == 4)
			{
				uParam0->f_49 += 2;
			}
			else if (func_433(uParam0->f_592[iParam1]) == 3)
			{
				uParam0->f_49 += 4;
			}
			else if (func_433(uParam0->f_592[iParam1]) == 2)
			{
				uParam0->f_49 += 6;
			}
			else if (func_433(uParam0->f_592[iParam1]) == 1)
			{
				uParam0->f_49 = iVar0;
			}
		}
		if (func_429(uParam0) > 1)
		{
			uParam0->f_49 += 10;
		}
	}
	else
	{
		if (uParam0->f_18 == -798342154)
		{
			if (Global_1900325->f_23 == 0)
			{
				uParam0->f_49 = get_random_int_in_range(35, 70);
			}
			else if (Global_1900325->f_23 == 1)
			{
				uParam0->f_49 = get_random_int_in_range(40, 80);
			}
			else if (Global_1900325->f_23 == 2)
			{
				uParam0->f_49 = get_random_int_in_range(45, 80);
			}
			else
			{
				uParam0->f_49 = get_random_int_in_range(50, 100);
			}
		}
		else if (Global_1900325->f_23 == 0)
		{
			uParam0->f_49 = get_random_int_in_range(15, 50);
		}
		else if (Global_1900325->f_23 == 1)
		{
			uParam0->f_49 = get_random_int_in_range(15, 60);
		}
		else if (Global_1900325->f_23 == 2)
		{
			uParam0->f_49 = get_random_int_in_range(25, 60);
		}
		else
		{
			uParam0->f_49 = get_random_int_in_range(35, 80);
		}
		if (func_309(uParam0->f_592[iParam1]) > 0 && func_309(uParam0->f_592[uParam0->f_21]) == 0)
		{
			uParam0->f_49 = (uParam0->f_49 - 5);
		}
		else if (func_309(uParam0->f_592[iParam1]) == 0 && func_309(uParam0->f_592[uParam0->f_21]) > 0)
		{
			uParam0->f_49 += 10;
		}
	}
}

char* func_636(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		if (func_5(uParam0, 2048))
		{
			return "SpikeKnifePositive";
		}
		else if (uParam0->f_592[iParam1]->f_121 == 1)
		{
			iVar0 = func_161(iParam1);
			if (uParam0->f_18 == -121390149)
			{
				if (func_225(uParam0->f_592[iVar0]) || (func_309(uParam0->f_592[iParam1]) > 0 && func_433(uParam0->f_592[iParam1]) == 5))
				{
					return "SpikeKnifeFlourish";
				}
			}
			else if (uParam0->f_18 == -776039804)
			{
				if ((func_225(uParam0->f_592[iVar0]) && func_428(uParam0->f_592[iParam1]) > func_428(uParam0->f_592[iVar0])) || func_428(uParam0->f_592[iParam1]) >= 4)
				{
					return "SpikeKnifeFlourish";
				}
			}
			else if (uParam0->f_18 == -798342154)
			{
				if ((func_225(uParam0->f_592[iVar0]) && func_428(uParam0->f_592[iParam1]) > func_428(uParam0->f_592[iVar0])) || func_428(uParam0->f_592[iParam1]) >= 4)
				{
					return "SpikeKnifeFlourish";
				}
			}
			return "SpikeKnifePositive";
		}
		return "SpikeKnifeNegative";
	}
	else
	{
		if (func_744(uParam0, iParam1))
		{
			return "Solo_Flourish";
		}
		return "SpikeKnife";
	}
	return "SpikeKnife";
}

bool func_637(var uParam0, int iParam1)
{
	if (((uParam0->f_175.f_137 == 1 || uParam0->f_175.f_137 == 2) || is_screen_fading_out()) || is_screen_faded_out())
	{
		return true;
	}
	return false;
}

bool func_638(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_50)
	{
		return false;
	}
	else if (!func_508(&(uParam0->f_592[iParam1])))
	{
		return false;
	}
	else if (func_745(uParam0->f_592[iParam1]))
	{
		return false;
	}
	else if (uParam0->f_592[iParam1]->f_92 == 1)
	{
		return false;
	}
	else if (uParam0->f_592[iParam1]->f_93 == 1)
	{
		return false;
	}
	else if (uParam0->f_592[iParam1]->f_94 == 1 && is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		return false;
	}
	else if (uParam0->f_592[iParam1]->f_95 == 1)
	{
		return false;
	}
	else if (uParam0->f_592[iParam1]->f_87 != uParam0->f_592[iParam1]->f_86)
	{
		return false;
	}
	else if (func_433(uParam0->f_592[iParam1]) <= 0)
	{
		return false;
	}
	else if (func_466(uParam0, iParam1))
	{
		return false;
	}
	else if (uParam0->f_18 == -121390149 && func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))
	{
		return false;
	}
	else if ((uParam0->f_592[iParam1]->f_85 > 0 && is_ped_a_player(&(uParam0->f_592[iParam1]))) && !has_anim_event_fired(&(uParam0->f_592[iParam1]), -534847913))
	{
		return false;
	}
	else if (!func_426(uParam0->f_592[iParam1]))
	{
		return false;
	}
	else if (!is_ped_a_player(&(uParam0->f_592[iParam1])) && (!func_520(&(uParam0->f_314), 1) || !is_control_pressed(2, 1642384076)))
	{
		return false;
	}
	return true;
}

bool func_639(var uParam0)
{
	if (!does_entity_exist(uParam0->f_175.f_81.f_5))
	{
		uParam0->f_175.f_81.f_5 = create_object(uParam0->f_175.f_81, Global_1900325->f_5, false, true, false, false, true);
		set_entity_collision(uParam0->f_175.f_81.f_5, false, false);
		func_137(&(uParam0->f_175), 256);
	}
	return does_entity_exist(uParam0->f_175.f_81.f_5);
}

bool func_640(var uParam0)
{
	if (does_entity_exist(uParam0->f_81.f_5) && !animpostfx_is_running(uParam0->f_81.f_36))
	{
		_0xfaad23de7a54fc14();
		animpostfx_play(uParam0->f_81.f_36);
		_0xc6f81fcd15350323(uParam0->f_81.f_5, 3);
	}
	return animpostfx_is_running(uParam0->f_81.f_36);
}

int func_641(var uParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == 0)
	{
		fVar1 = (to_float(uParam0->f_87) / 10f);
	}
	else
	{
		fVar1 = (to_float((uParam0->f_87 - 1)) / 10f);
	}
	fVar1 = (fVar1 - IntToFloat(floor(fVar1)));
	fVar1 = (fVar1 * 10f);
	iVar2 = round(fVar1);
	if (iVar2 == 1)
	{
		iVar0 = 1;
	}
	else if (iVar2 == 3)
	{
		iVar0 = 3;
	}
	else if (iVar2 == 5)
	{
		iVar0 = 5;
	}
	else if (iVar2 == 7)
	{
		iVar0 = 7;
	}
	else if (iVar2 == 9)
	{
		iVar0 = 9;
	}
	return iVar0;
}

void func_642(var uParam0, int iParam1)
{
	if (!func_135(&(uParam0->f_175), 256) && does_entity_exist(uParam0->f_175.f_81.f_5))
	{
		vVar0 = { get_offset_from_entity_in_world_coords(&(uParam0->f_592[iParam1]), uParam0->f_175.f_81.f_1) };
		vVar0.f_2 = (Global_1900325->f_5.f_2 + uParam0->f_175.f_81.f_1.f_2);
		fVar3 = get_entity_heading(&(uParam0->f_592[iParam1]));
		fVar3 = (fVar3 + uParam0->f_175.f_81.f_4);
		_set_entity_coords_and_heading(uParam0->f_175.f_81.f_5, vVar0, fVar3, true, false, true);
		func_521(&(uParam0->f_175), 256);
	}
}

void func_643(var uParam0, int iParam1)
{
	if (!func_135(&(uParam0->f_175), 128))
	{
		uParam0->f_175.f_81.f_7 = _databinding_add_data_container_from_path("", "FiveFingerFillet");
		func_746(&(uParam0->f_175.f_81.f_8), uParam0->f_175.f_81.f_7, "Icon1");
		func_746(&(uParam0->f_175.f_81.f_12), uParam0->f_175.f_81.f_7, "Icon2");
		func_746(&(uParam0->f_175.f_81.f_16), uParam0->f_175.f_81.f_7, "Icon3");
		func_746(&(uParam0->f_175.f_81.f_20), uParam0->f_175.f_81.f_7, "Icon4");
		func_746(&(uParam0->f_175.f_81.f_24), uParam0->f_175.f_81.f_7, "Icon5");
		func_746(&(uParam0->f_175.f_81.f_28), uParam0->f_175.f_81.f_7, "Icon6");
		_databinding_write_data_bool(uParam0->f_175.f_81.f_8.f_2, 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_12.f_2, 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_16.f_2, 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_20.f_2, 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_24.f_2, 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_28.f_2, 0);
		func_521(&(uParam0->f_175), 128);
	}
	if (!func_135(&(uParam0->f_175), 128) || uParam0->f_175.f_81.f_35 == iParam1)
	{
		return;
	}
	_databinding_write_data_string(uParam0->f_175.f_81.f_8.f_1, func_747(&(uParam0->f_37[0])));
	_databinding_write_data_string(uParam0->f_175.f_81.f_12.f_1, func_747(&(uParam0->f_37[1])));
	_databinding_write_data_string(uParam0->f_175.f_81.f_16.f_1, func_747(&(uParam0->f_37[3])));
	_databinding_write_data_string(uParam0->f_175.f_81.f_20.f_1, func_747(&(uParam0->f_37[5])));
	_databinding_write_data_string(uParam0->f_175.f_81.f_24.f_1, func_747(&(uParam0->f_37[7])));
	_databinding_write_data_string(uParam0->f_175.f_81.f_28.f_1, func_747(&(uParam0->f_37[9])));
	if (iParam1 == -1)
	{
		_databinding_write_data_bool(uParam0->f_175.f_81.f_8.f_2, 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_12.f_2, 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_16.f_2, 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_20.f_2, 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_24.f_2, 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_28.f_2, 1);
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_175.f_81.f_8.f_2, iParam1 == 0);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_12.f_2, iParam1 == 1);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_16.f_2, iParam1 == 3);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_20.f_2, iParam1 == 5);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_24.f_2, iParam1 == 7);
		_databinding_write_data_bool(uParam0->f_175.f_81.f_28.f_2, iParam1 == 9);
	}
	uParam0->f_175.f_81.f_35 = iParam1;
}

struct<2> func_644(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_645(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_646(var uParam0, int iParam1)
{
	uParam0->f_592[iParam1]->f_86++;
	uParam0->f_592[iParam1]->f_88++;
	uParam0->f_592[iParam1]->f_85++;
	if (uParam0->f_592[iParam1]->f_85 >= 11)
	{
		func_409(uParam0->f_592[iParam1], func_428(uParam0->f_592[iParam1]) + 1);
		uParam0->f_592[iParam1]->f_85 = 1;
		if (uParam0->f_592[iParam1]->f_102 == 0 || uParam0->f_592[iParam1]->f_102 > func_551(&(uParam0->f_592[iParam1]->f_112)))
		{
			uParam0->f_592[iParam1]->f_102 = func_551(&(uParam0->f_592[iParam1]->f_112));
		}
		if (uParam0->f_18 == -121390149 && func_428(uParam0->f_592[iParam1]) >= func_429(uParam0))
		{
			func_475(uParam0, iParam1, 1);
		}
		else
		{
			func_81(&(uParam0->f_592[iParam1]->f_112));
		}
	}
}

void func_647(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_7 == 1)
	{
		return;
	}
	iVar0 = get_random_int_in_range(0, 3);
	if (iVar0 == 0)
	{
		func_226(uParam0, 128, iParam1);
	}
	else if (iVar0 == 1 && func_309(uParam0->f_592[iParam1]) < func_309(uParam0->f_592[func_161(iParam1)]))
	{
		func_226(uParam0, 256, iParam1);
	}
	else
	{
		func_226(uParam0, 512, iParam1);
	}
}

bool func_648(var uParam0)
{
	if (uParam0->f_74 < 0f || uParam0->f_74 > 1f)
	{
		return false;
	}
	if (uParam0->f_74 < 0.1f)
	{
		if (uParam0->f_73 >= 0f && uParam0->f_73 < 0.1f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.2f)
	{
		if (uParam0->f_73 >= 0.1f && uParam0->f_73 < 0.2f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.3f)
	{
		if (uParam0->f_73 >= 0.2f && uParam0->f_73 < 0.3f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.4f)
	{
		if (uParam0->f_73 >= 0.3f && uParam0->f_73 < 0.4f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.5f)
	{
		if (uParam0->f_73 >= 0.4f && uParam0->f_73 < 0.5f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.6f)
	{
		if (uParam0->f_73 >= 0.5f && uParam0->f_73 < 0.6f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.7f)
	{
		if (uParam0->f_73 >= 0.6f && uParam0->f_73 < 0.7f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.8f)
	{
		if (uParam0->f_73 >= 0.7f && uParam0->f_73 < 0.8f)
		{
			return true;
		}
	}
	else if (uParam0->f_74 < 0.9f)
	{
		if (uParam0->f_73 >= 0.8f && uParam0->f_73 < 0.9f)
		{
			return true;
		}
	}
	else if (uParam0->f_73 >= 0.9f && uParam0->f_73 <= 1f)
	{
		return true;
	}
	return false;
}

void func_649(var uParam0)
{
	if (!func_80(uParam0))
	{
	}
	if (!func_633(uParam0))
	{
		uParam0->f_2 = (func_340() - uParam0->f_1);
		func_341(uParam0, 2);
	}
}

void func_650(var uParam0, int iParam1)
{
	if (!func_306(uParam0->f_22))
	{
		return;
	}
	if (func_428(uParam0->f_592[iParam1]) <= 0)
	{
		return;
	}
	if (&Global_40.f_11883[uParam0->f_22] <= 0 || &Global_40.f_11883[uParam0->f_22] < func_428(uParam0->f_592[iParam1]))
	{
		Global_40.f_11883[uParam0->f_22] = func_428(uParam0->f_592[iParam1]);
		func_748(uParam0->f_592[iParam1]);
		uParam0->f_592[iParam1]->f_104 = 1;
	}
}

void func_651(var uParam0, int iParam1)
{
	if (!func_306(uParam0->f_22))
	{
		return;
	}
	if (IntToFloat(uParam0->f_592[iParam1]->f_102) <= 0f)
	{
		return;
	}
	if (&Global_40.f_11883.f_13[uParam0->f_22] <= 0 || &Global_40.f_11883.f_13[uParam0->f_22] > uParam0->f_592[iParam1]->f_102)
	{
		Global_40.f_11883.f_13[uParam0->f_22] = uParam0->f_592[iParam1]->f_102;
		func_748(uParam0->f_592[iParam1]);
		uParam0->f_592[iParam1]->f_106 = 1;
	}
}

void func_652(var uParam0, int iParam1)
{
	if (!func_306(uParam0->f_22))
	{
		return;
	}
	iVar0 = func_430(uParam0->f_592[iParam1]);
	if (IntToFloat(iVar0) <= 0f)
	{
		return;
	}
	if (&Global_40.f_11883.f_26[uParam0->f_22] <= 0 || &Global_40.f_11883.f_26[uParam0->f_22] < iVar0)
	{
		Global_40.f_11883.f_26[uParam0->f_22] = iVar0;
		func_748(uParam0->f_592[iParam1]);
		uParam0->f_592[iParam1]->f_105 = 1;
	}
}

bool func_653(var uParam0, int iParam1)
{
	if ((uParam0->f_592[iParam1]->f_88 <= func_749() || uParam0->f_18 == -121390149) || func_504(uParam0, iParam1) < 1500f)
	{
		return false;
	}
	return true;
}

bool func_654(var uParam0, int iParam1)
{
	if (!func_750(&(uParam0->f_592[iParam1])))
	{
		return false;
	}
	else if (uParam0->f_18 == -121390149)
	{
		return false;
	}
	else if (uParam0->f_18 == 785897420)
	{
		return true;
	}
	else if (func_751(uParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

void func_655(var uParam0, int iParam1)
{
	iVar0 = func_161(iParam1);
	if ((get_random_int_in_range(0, 5) == 0 && func_199(iVar0)) && func_64(uParam0->f_592[iVar0]))
	{
		func_226(uParam0, 65536, iVar0);
	}
	else
	{
		func_226(uParam0, 32768, iParam1);
	}
}

bool func_656()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (((is_disabled_control_just_pressed(0, func_470(0)) || is_disabled_control_just_pressed(0, func_470(1))) || is_disabled_control_just_pressed(0, func_470(2))) || is_disabled_control_just_pressed(0, func_470(3)))
	{
		return true;
	}
	return false;
}

bool func_657(var uParam0)
{
	return false;
}

bool func_658(var uParam0, int iParam1)
{
	if (((is_ped_a_player(&(uParam0->f_592[iParam1])) && uParam0->f_592[iParam1]->f_96 == 0) && uParam0->f_592[iParam1]->f_87 == uParam0->f_592[iParam1]->f_86) && func_632(uParam0->f_592[iParam1]) > uParam0->f_508.f_16)
	{
		return true;
	}
	return false;
}

bool func_659(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_86 >= uParam0->f_49)
	{
		return true;
	}
	return false;
}

bool func_660(var uParam0, int iParam1)
{
	if (((uParam0->f_18 != -121390149 && uParam0->f_592[iParam1]->f_88 > func_749()) && uParam0->f_175.f_137 == 0) && func_504(uParam0, iParam1) > 3000f)
	{
		if (Global_1900325->f_23 == 0)
		{
			if (func_309(uParam0->f_592[iParam1]) > 0 && get_random_int_in_range(0, 20) == 0)
			{
				return true;
			}
		}
		else if (Global_1900325->f_23 == 1)
		{
			if (get_random_int_in_range(0, 15) == 0)
			{
				return true;
			}
		}
		else if (Global_1900325->f_23 == 2)
		{
			if (get_random_int_in_range(0, 12) == 0)
			{
				return true;
			}
		}
		else if (get_random_int_in_range(0, 10) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_661(var uParam0, int iParam1, int iParam2)
{
	if (func_496(&(uParam0->f_592[iParam1])) && does_entity_exist(uParam0->f_592[iParam1]->f_60))
	{
		if (iParam2 == 0 && uParam0->f_592[iParam1]->f_89 < &uParam0->f_508[2])
		{
			iVar2 = 1;
		}
		if (iVar2 == 0)
		{
			fVar0 = 0f;
			iVar1 = 100;
		}
		else
		{
			fVar0 = 1f;
			iVar1 = 200;
		}
		if (iParam2 == 1)
		{
			_0xf1c5310feaa36b48(uParam0->f_592[iParam1]->f_130, uParam0->f_491.f_7, uParam0->f_592[iParam1]->f_60, uParam0->f_491.f_6, 0, 0);
			if (is_ped_a_player(&(uParam0->f_592[iParam1])))
			{
				set_pad_shake(0, 1, 10);
			}
		}
		else
		{
			_0xf1c5310feaa36b48(uParam0->f_592[iParam1]->f_130, uParam0->f_491.f_8, uParam0->f_592[iParam1]->f_60, uParam0->f_491.f_6, 0, 0);
			if (is_ped_a_player(&(uParam0->f_592[iParam1])))
			{
				set_pad_shake(0, iVar1, 255);
			}
			func_752(uParam0, iParam1);
		}
		_0x503703ec1781b7d6(uParam0->f_592[iParam1]->f_130, uParam0->f_491.f_9, fVar0);
		func_754(uParam0, iParam1, func_753(uParam0->f_592[iParam1]));
	}
}

void func_662(var uParam0)
{
	if (uParam0->f_46 == 0)
	{
		iVar0 = get_random_int_in_range(0, 10);
		if (iVar0 == 0)
		{
			uParam0->f_46 = 1;
		}
		else if (iVar0 == 1)
		{
			uParam0->f_46 = 2;
		}
		else if (iVar0 == 2)
		{
			uParam0->f_46 = 3;
		}
		else if (iVar0 == 3)
		{
			uParam0->f_46 = 4;
		}
		else if (iVar0 == 4)
		{
			uParam0->f_46 = 5;
		}
		else
		{
			uParam0->f_46 = 0;
		}
	}
}

char* func_663(var uParam0, int iParam1)
{
	if (!func_496(&(uParam0->f_592[iParam1])))
	{
		return "";
	}
	if (func_433(uParam0->f_592[iParam1]) <= 0)
	{
		return "FailSpike";
	}
	if (uParam0->f_592[iParam1]->f_94 == 0)
	{
		if ((uParam0->f_592[iParam1]->f_87 > uParam0->f_592[iParam1]->f_86 || uParam0->f_592[iParam1]->f_92 == 1) || uParam0->f_592[iParam1]->f_93 == 1)
		{
			if ((uParam0->f_175.f_137 == 0 && func_755(uParam0, iParam1)) && func_433(uParam0->f_592[iParam1]) <= 0)
			{
				return "FailSpike";
			}
			else if (uParam0->f_592[iParam1]->f_89 < &uParam0->f_508[2])
			{
				return "MediumFail";
			}
			else
			{
				return "MediumSmallFail";
			}
		}
	}
	if (func_466(uParam0, iParam1))
	{
		return "End";
	}
	switch (_0xe9a6400d1a0e7a55(&(uParam0->f_592[iParam1])))
	{
		case 756119322:
			sVar0 = "From_0_to_target_1";
			break;
		case 721646648:
			sVar0 = "From_target_1_to_0";
			break;
		case -1153486373:
			sVar0 = "From_0_to_target_2";
			break;
		case 960827579:
			sVar0 = "From_target_2_to_0";
			break;
		case -316251561:
			sVar0 = "From_0_to_target_3";
			break;
		case 1215442709:
			sVar0 = "From_target_3_to_0";
			break;
		case -44602072:
			sVar0 = "From_0_to_target_4";
			break;
		case 1454951330:
			sVar0 = "From_target_4_to_0";
			break;
		case -788049279:
			sVar0 = "From_0_to_target_5";
			break;
		case 1676600846:
			sVar0 = "From_target_5_to_0";
			break;
		case -744146776:
			sVar0 = "From_0_to_target_1";
			break;
	}
	return sVar0;
}

bool func_664(var uParam0, int iParam1)
{
	if (uParam0->f_18 == 785897420)
	{
		if (func_433(uParam0->f_592[iParam1]) >= (func_411(uParam0) - 1))
		{
			return true;
		}
		else if (get_random_int_in_range(0, 2) == 0)
		{
			return true;
		}
	}
	else if (uParam0->f_18 == -798342154)
	{
		if (get_random_int_in_range(0, 2) == 0)
		{
			return true;
		}
	}
	else if (uParam0->f_18 == -121390149)
	{
		if (func_433(uParam0->f_592[iParam1]) >= (func_411(uParam0) - 1))
		{
			return true;
		}
	}
	else if (uParam0->f_18 == -776039804)
	{
		if (get_random_int_in_range(0, 2) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_665(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_65 || func_428(uParam0->f_592[iParam1]) == 0)
	{
		return;
	}
	func_226(uParam0, 8388608, iParam1);
}

void func_666(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_756(iParam0, sParam4, iParam5);
	}
	func_757(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_667(var uParam0)
{
	if (!func_541(*uParam0, &iVar0))
	{
		iVar0 = 0;
	}
	iVar1 = Global_1900325->f_24 * 2;
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	func_542(*uParam0, iVar2);
}

void func_668(int iParam0)
{
	Var0 = { func_644(-1892463704, iParam0) };
	Var2 = { func_644(-2115175355, iParam0) };
	Var4 = { func_644(-23039984, iParam0) };
	_0x6a0184e904cdf25e(&Var0, 1);
	_0x6a0184e904cdf25e(&Var2, 1);
	iVar6 = 0;
	if (stat_id_get_int(&Var2, &iVar6))
	{
		_0x91a4f58e01ed5e4c(&Var4, iVar6);
	}
	stat_id_get_int(&Var0, &uVar7);
	stat_id_get_int(&Var2, &uVar8);
	stat_id_get_int(&Var4, &uVar9);
}

void func_669(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_65)
	{
		return;
	}
	iVar0 = func_161(iParam1);
	if (func_199(iVar0) && func_64(uParam0->f_592[iVar0]))
	{
		if (func_309(uParam0->f_592[iParam1]) >= 2 && func_309(uParam0->f_592[iVar0]) == 0)
		{
			func_226(uParam0, 2097152, iParam1);
		}
		else if (func_309(uParam0->f_592[iParam1]) == func_309(uParam0->f_592[iVar0]))
		{
			func_226(uParam0, 131072, iParam1);
		}
		else if (func_433(uParam0->f_592[iParam1]) >= func_411(uParam0))
		{
			func_226(uParam0, 524288, iParam1);
		}
	}
}

void func_670(int iParam0)
{
	Var0 = { func_644(1374282888, iParam0) };
	Var2 = { func_644(-2115175355, iParam0) };
	_0x6a0184e904cdf25e(&Var0, 1);
	_0x0fee2561120f3333(&Var2);
	stat_id_get_int(&Var0, &uVar4);
	stat_id_get_int(&Var2, &uVar5);
}

void func_671(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_65)
	{
		return;
	}
	iVar0 = func_161(iParam1);
	if (func_199(iVar0) && func_64(uParam0->f_592[iVar0]))
	{
		if (func_309(uParam0->f_592[iVar0]) >= 2 && func_309(uParam0->f_592[iParam1]) == 0)
		{
			func_226(uParam0, 4194304, iParam1);
		}
		else if (func_309(uParam0->f_592[iParam1]) == func_309(uParam0->f_592[iVar0]))
		{
			func_226(uParam0, 262144, iParam1);
		}
		else
		{
			func_226(uParam0, 1048576, iParam1);
		}
	}
}

void func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_758(6, 1);
			break;
		default:
			break;
	}
}

void func_673(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (does_entity_exist(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 27;
		Var0.f_3 = uParam2;
		Var0.f_8 = iParam5;
		Var0.f_11 = iParam6;
		Var0.f_13 = iParam4;
		if (iParam3 == 0)
		{
			func_50(&(Var0.f_16), 1);
		}
		_0x88bc5f4aef77fc4e(&Var0, 17);
	}
}

var func_674()
{
	return &Global_1899515;
}

void func_675(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_759(*uParam0);
	iVar1 = func_760(*uParam0);
	iVar2 = func_761(*uParam0);
	iVar3 = func_762(*uParam0);
	iVar4 = func_763(*uParam0);
	iVar5 = func_764(*uParam0);
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
	iVar6 = func_765(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_765(iVar1, iVar0);
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
	func_766(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_676(var uParam0, int iParam1)
{
	if (!func_438(&(uParam0->f_592[iParam1]), -2017877118))
	{
		sVar0 = func_767();
		iVar1 = 388;
		set_ped_leg_ik_mode(&(uParam0->f_592[iParam1]), 0);
		task_play_anim_advanced(&(uParam0->f_592[iParam1]), func_78(0, 0), sVar0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iParam1]), 1000f, -8f, -1, iVar1, 0f, 2, 1, 0);
		_0x2208438012482a1a(&(uParam0->f_592[iParam1]), false, false);
	}
	return func_438(&(uParam0->f_592[iParam1]), -2017877118);
}

bool func_677(var uParam0)
{
	if (!is_entity_dead(uParam0->f_54))
	{
		return true;
	}
	if (func_5(uParam0, 256))
	{
		return false;
	}
	if (func_276(uParam0->f_56))
	{
		uParam0->f_56 = { func_620(uParam0, func_161(uParam0->f_21)) };
	}
	if (func_276(uParam0->f_56))
	{
		return false;
	}
	request_model(417416138, false);
	if (!has_model_loaded(417416138))
	{
		return false;
	}
	uParam0->f_54 = func_550(417416138, uParam0->f_56, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0);
	iVar0 = func_768(3, Global_1900325->f_4, Global_1900325->f_23 + 1);
	_set_ped_body_component(uParam0->f_54, iVar0);
	_update_ped_variation(uParam0->f_54, false, true, true, true, false);
	set_model_as_no_longer_needed(417416138);
	set_blocking_of_non_temporary_events(uParam0->f_54, true);
	remove_all_ped_weapons(uParam0->f_54, true, true);
	set_ped_combat_attributes(uParam0->f_54, 17, true);
	StringCopy(&(Global_1900325->f_26), func_769(Global_1900325->f_23 + 1), 64);
	set_ambient_voice_name(uParam0->f_54, &(Global_1900325->f_26));
	func_381(uParam0, 1);
	func_6(uParam0, 256);
	return !is_entity_dead(uParam0->f_54);
}

bool func_678(var uParam0)
{
	if (!func_438(uParam0->f_54, 242628503))
	{
		sVar0 = func_742();
		iVar1 = func_161(uParam0->f_21);
		iVar2 = 388;
		set_ped_leg_ik_mode(uParam0->f_54, 0);
		open_sequence_task(&iVar3);
		task_play_anim_advanced(0, func_78(0, 0), sVar0, Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iVar1]), 1000f, -1000f, -1, iVar2, 0f, 2, 1, 0);
		task_play_anim_advanced(0, func_78(0, 0), "idle_01", Global_1900325->f_5, 0f, 0f, &(Global_1900325->f_16[iVar1]), 1000f, -8f, -1, iVar2, 0f, 2, 1, 0);
		close_sequence_task(iVar3);
		task_perform_sequence(uParam0->f_54, iVar3);
		clear_sequence_task(&iVar3);
		_0x2208438012482a1a(uParam0->f_54, false, false);
	}
	return func_438(uParam0->f_54, 242628503);
}

void func_679(var uParam0, int iParam1)
{
	if (uParam0->f_592[iParam1]->f_30 == 1)
	{
		return;
	}
	func_770(uParam0, 67108864);
	uParam0->f_592[iParam1]->f_30 = 1;
}

char* func_680()
{
	sVar0 = "cam_opponent_swap_01";
	if (Global_1900325->f_23 == 1)
	{
		sVar0 = "cam_opponent_swap_02";
	}
	else if (Global_1900325->f_23 == 2)
	{
		sVar0 = "cam_opponent_swap_03";
	}
	else if (Global_1900325->f_23 == 3)
	{
		sVar0 = "cam_opponent_final_exit";
	}
	return sVar0;
}

float func_681(float fParam0, float fParam1, float fParam2)
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

int func_682(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_687(iVar0, 2))
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
		func_688(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_683(int iParam0, int iParam1)
{
	if (!func_322(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

float func_684(int iParam0, bool bParam1)
{
	if (bParam1 && !func_322(iParam0))
	{
		return 0f;
	}
	iVar0 = func_554(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_685(int iParam0, bool bParam1)
{
	if (bParam1 && !func_322(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_686(var uParam0, int iParam1)
{
	sVar0 = func_534(uParam0, iParam1);
	return _0xe2c3cec3c0903a00(sVar0);
}

bool func_687(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_688(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
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
	func_771(iParam0, 1);
	func_772(iParam0, 1);
	func_773(iParam0, 128);
}

void func_689(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_287(1) < iParam0)
	{
		iParam0 = func_287(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_774(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_690(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_775(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_691(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_692(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_693(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_776(iParam1))
		{
			func_777(iParam0, 41788943);
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
			func_778(iParam0, 0, 1);
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
			func_779(iParam0, 0);
			bVar0 = true;
		}
		func_780(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_694(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_695(int iParam0)
{
	return func_687(iParam0, 2);
}

void func_696(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_697(struct<4> Param0)
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
			if (func_781(Param0))
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
			func_782(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_696(8);
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
			if (func_781(Param0))
			{
				return;
			}
			func_782(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_696(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_783(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_698(int iParam0, int iParam1)
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

bool func_699(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_784(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_700(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_701(int iParam0, int iParam1)
{
	func_785(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_703(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_784(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_784(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_784(iParam0, 1)])->f_10 && iParam1));
}

void func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_698(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_786(iParam4);
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

bool func_705(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_706(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_707(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_699(1108822547, 6))
	{
		if (bParam2)
		{
			func_704(iParam0, iVar0, func_34() != -1, 0, 0);
			func_708(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_703(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_784(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_784(iParam0, 1)])->f_10 || iParam1);
}

void func_709(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_710(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_711(int iParam0)
{
	iVar0 = 0;
	if (!func_62(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_62(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_712(int iParam0)
{
	if (!func_62(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_566(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

int func_713(int iParam0)
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

int func_714(int iParam0)
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

bool func_715(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_716(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_787(iParam0);
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

bool func_718(int iParam0)
{
	Var3 = -961687407;
	if (func_34() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	_0x91ded5dd64bb2691(&Var3);
	if (!_0xed4413cee1bf142c(&Var3))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = func_788(iParam0);
	if (func_789(iVar0, &iVar1))
	{
		func_790(iVar1, iVar2);
	}
	while (_0xed4413cee1bf142c(&Var3))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_789(iVar0, &iVar1))
		{
		}
		else
		{
			func_790(iVar1, iVar2);
		}
	}
	return true;
}

int func_719(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_560(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_560(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_791(0))
	{
	}
	func_562(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_720(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_721(int iParam0)
{
	if (func_792(iParam0, 0))
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

void func_722(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (func_566(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	func_721(iVar0);
	func_338(iParam0, 8192, 1);
}

void func_723(int iParam0)
{
	if (func_792(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_724(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (func_566(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	func_723(iVar0);
	func_338(iParam0, 8192, 0);
}

void func_725(int iParam0)
{
	if (func_792(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_726(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_146(14))
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

void func_727(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (func_566(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	func_725(iVar0);
	func_338(iParam0, 16384, 1);
}

void func_728(int iParam0)
{
	if (func_792(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_729(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	if (func_566(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	func_728(iVar0);
	func_338(iParam0, 16384, 0);
}

int func_730(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_793(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_731(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_389(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_733(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_734(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_735(int iParam0)
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

int func_736(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_794(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_795((386 + iVar28), 1);
			if (func_796(iParam0, &Var0, iVar5, 0))
			{
				if (func_797(iParam0, &Var6, iVar5))
				{
					Var29 = { func_798(iParam0, Var0, iVar5, 0) };
					func_799(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_800(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_801(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_802(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_737(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_738(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

char* func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_740(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_803())
	{
		iVar2 = func_803();
	}
	iVar5 = func_804(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_98(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_98(iVar6) == 0)
			{
				return func_805(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_98(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_98(iVar6) == 0)
			{
				return func_805(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_805(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_741(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

char* func_742()
{
	sVar0 = "opponent_swap_01_enter";
	if (Global_1900325->f_23 == 1)
	{
		sVar0 = "opponent_swap_02_enter";
	}
	else if (Global_1900325->f_23 == 2)
	{
		sVar0 = "opponent_swap_03_enter";
	}
	else if (Global_1900325->f_23 == 3)
	{
		sVar0 = "opponent_swap_03_enter";
	}
	return sVar0;
}

void func_743(var uParam0, int iParam1)
{
	if (!func_199(iParam1))
	{
		return;
	}
	func_806(uParam0->f_592[iParam1], uParam0->f_592[iParam1]->f_137);
	vVar0 = { func_807(uParam0, iParam1) };
	vVar0.x = (vVar0.x + get_random_float_in_range(-uParam0->f_527.f_5, uParam0->f_527.f_5));
	vVar0.f_1 = (vVar0.y + get_random_float_in_range(-uParam0->f_527.f_5, uParam0->f_527.f_5));
	vVar3 = { 0f, 0f, -1f };
	fVar6 = (get_entity_heading(&(uParam0->f_592[iParam1])) + uParam0->f_527.f_6);
	if (uParam0->f_527.f_7 > 0f)
	{
		fVar6 = (fVar6 + get_random_float_in_range(-uParam0->f_527.f_7, uParam0->f_527.f_7));
	}
	vVar7 = { cos(fVar6), sin(fVar6), 0f };
	vVar7 = { func_808(vVar7) };
	fVar10 = (uParam0->f_527.f_3 * get_random_float_in_range(0.8f, 1.2f));
	iVar11 = uParam0->f_592[iParam1]->f_137;
	uParam0->f_592[iParam1]->f_131[iVar11] = add_decal(-1865654041, vVar0, vVar3, vVar7, fVar10, (fVar10 * uParam0->f_527.f_4), 0.03f, 1f, 1f, 1f, 0.75f, -1f, 0, 0, 1, 1);
	uParam0->f_592[iParam1]->f_137++;
	if (uParam0->f_592[iParam1]->f_137 >= 5)
	{
		uParam0->f_592[iParam1]->f_137 = 0;
	}
}

bool func_744(var uParam0, int iParam1)
{
	if (is_ped_a_player(&(uParam0->f_592[iParam1])))
	{
		if (uParam0->f_592[iParam1]->f_95 == 1)
		{
			if (func_809(uParam0->f_592[iParam1]))
			{
				return true;
			}
			else if (func_751(uParam0, iParam1) >= 2)
			{
				return true;
			}
			else if (func_810(uParam0))
			{
				return true;
			}
			else if (func_811(uParam0, iParam1))
			{
				return true;
			}
		}
		else if (func_812(uParam0, iParam1))
		{
			return true;
		}
	}
	else if (((uParam0->f_592[iParam1]->f_121 == 1 && is_task_move_network_active(&(uParam0->f_592[iParam1]))) && _0xe9a6400d1a0e7a55(&(uParam0->f_592[iParam1])) != 756119322) && _0xe9a6400d1a0e7a55(&(uParam0->f_592[iParam1])) != -444913130)
	{
		if (Global_1900325->f_23 == 0)
		{
			if (func_309(uParam0->f_592[iParam1]) > 0 && get_random_int_in_range(0, 10) == 0)
			{
				return true;
			}
		}
		else if (Global_1900325->f_23 == 1)
		{
			if (get_random_int_in_range(0, 7) == 0)
			{
				return true;
			}
		}
		else if (Global_1900325->f_23 == 2)
		{
			if (get_random_int_in_range(0, 5) == 0)
			{
				return true;
			}
		}
		else if (get_random_int_in_range(0, 3) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_745(var uParam0)
{
	return (uParam0->f_85 < 0 || uParam0->f_85 >= 11);
}

void func_746(var uParam0, var uParam1, char* sParam2)
{
	*uParam0 = _databinding_add_data_container(uParam1, sParam2);
	uParam0->f_1 = _databinding_add_data_string(*uParam0, "IconName", "");
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, "IconVisible", 0);
	uParam0->f_3 = _databinding_add_data_bool(*uParam0, "IconPulsing", 0);
}

char* func_747(int iParam0)
{
	if (iParam0 == 0)
	{
		sVar0 = "INPUT_MINIGAME_FFF_A";
	}
	else if (iParam0 == 1)
	{
		sVar0 = "INPUT_MINIGAME_FFF_X";
	}
	else if (iParam0 == 2)
	{
		sVar0 = "INPUT_MINIGAME_FFF_Y";
	}
	else
	{
		sVar0 = "INPUT_MINIGAME_FFF_B";
	}
	return sVar0;
}

void func_748(var uParam0)
{
	if (uParam0->f_107 == 0)
	{
		func_30(0, 2);
	}
	uParam0->f_107 = 1;
}

int func_749()
{
	return 10;
}

bool func_750(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	switch (_0xe9a6400d1a0e7a55(iParam0))
	{
		case -1153486373:
		case -788049279:
		case -744146776:
		case -316251561:
		case -44602072:
		case 721646648:
		case 960827579:
		case 1215442709:
		case 1454951330:
		case 1676600846:
			return true;
	}
	return false;
}

int func_751(var uParam0, int iParam1)
{
	if (uParam0->f_18 == 785897420)
	{
		return 0;
	}
	iVar0 = func_161(iParam1);
	if (func_199(iVar0) && func_225(uParam0->f_592[iVar0]))
	{
		if (func_428(uParam0->f_592[iParam1]) > func_428(uParam0->f_592[iVar0]))
		{
			return (func_428(uParam0->f_592[iParam1]) - func_428(uParam0->f_592[iVar0]));
		}
	}
	return 0;
}

void func_752(var uParam0, int iParam1)
{
	sVar0 = "PD_FFF_LEFT_THUMB_OUTSIDE";
	iVar1 = 0;
	if (func_496(&(uParam0->f_592[iParam1])))
	{
		switch (_0xe9a6400d1a0e7a55(&(uParam0->f_592[iParam1])))
		{
			case 721646648:
				if (uParam0->f_592[iParam1]->f_76 == 0f)
				{
					sVar0 = "PD_FFF_LEFT_THUMB_INSIDE";
					iVar1 = 1;
				}
				else
				{
					sVar0 = "PD_FFF_LEFT_INDEX_OUTSIDE";
					iVar1 = 2;
				}
				break;
			case 960827579:
				if (uParam0->f_592[iParam1]->f_76 == 0f)
				{
					sVar0 = "PD_FFF_LEFT_INDEX_INSIDE";
					iVar1 = 3;
				}
				else
				{
					sVar0 = "PD_FFF_LEFT_MIDDLE_OUTSIDE";
					iVar1 = 4;
				}
				break;
			case 1215442709:
				if (uParam0->f_592[iParam1]->f_76 == 0f)
				{
					sVar0 = "PD_FFF_LEFT_MIDDLE_INSIDE";
					iVar1 = 5;
				}
				else
				{
					sVar0 = "PD_FFF_LEFT_RING_OUTSIDE";
					iVar1 = 6;
				}
				break;
			case 1454951330:
				if (uParam0->f_592[iParam1]->f_76 == 0f)
				{
					sVar0 = "PD_FFF_LEFT_RING_INSIDE";
					iVar1 = 7;
				}
				else
				{
					sVar0 = "PD_FFF_LEFT_PINKY_INSIDE";
					iVar1 = 8;
				}
				break;
			case 1676600846:
				sVar0 = "PD_FFF_LEFT_PINKY_OUTSIDE";
				iVar1 = 9;
				break;
		}
	}
	apply_ped_damage_pack(&(uParam0->f_592[iParam1]), sVar0, 0f, 1f);
	func_813(uParam0, iParam1, iVar1);
}

int func_753(var uParam0)
{
	iVar0 = 0;
	iVar1 = func_641(uParam0, 1);
	if (iVar1 == 1)
	{
		iVar0 = 1;
	}
	else if (iVar1 == 3)
	{
		iVar0 = 2;
	}
	else if (iVar1 == 5)
	{
		iVar0 = 3;
	}
	else if (iVar1 == 7)
	{
		iVar0 = 4;
	}
	else if (iVar1 == 9)
	{
		iVar0 = 5;
	}
	return iVar0;
}

void func_754(var uParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam1))
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 6)
	{
		return;
	}
	func_814(uParam0->f_592[iParam1], uParam0->f_592[iParam1]->f_179);
	vVar0 = { func_815(uParam0, iParam1, iParam2) };
	vVar0.x = (vVar0.x + get_random_float_in_range(-uParam0->f_527.f_29, uParam0->f_527.f_29));
	vVar0.f_1 = (vVar0.y + get_random_float_in_range(-uParam0->f_527.f_29, uParam0->f_527.f_29));
	vVar3 = { 0f, 0f, -1f };
	fVar6 = (get_entity_heading(&(uParam0->f_592[iParam1])) + uParam0->f_527.f_30);
	if (uParam0->f_527.f_31 > 0f)
	{
		fVar6 = (fVar6 + get_random_float_in_range(-uParam0->f_527.f_31, uParam0->f_527.f_31));
	}
	vVar7 = { cos(fVar6), sin(fVar6), 0f };
	vVar7 = { func_808(vVar7) };
	fVar10 = (uParam0->f_527.f_27 * get_random_float_in_range(0.8f, 1.2f));
	iVar11 = uParam0->f_592[iParam1]->f_179;
	uParam0->f_592[iParam1]->f_138[iVar11] = add_decal(-1865654041, vVar0, vVar3, vVar7, fVar10, (fVar10 * uParam0->f_527.f_28), 0.03f, 1f, 1f, 1f, 0.75f, -1f, 0, 0, 1, 1);
	uParam0->f_592[iParam1]->f_179++;
	if (uParam0->f_592[iParam1]->f_179 >= 40)
	{
		uParam0->f_592[iParam1]->f_179 = 0;
	}
}

bool func_755(var uParam0, int iParam1)
{
	if (!func_514(uParam0) && func_504(uParam0, iParam1) <= 2000f)
	{
		return !func_637(uParam0, iParam1);
	}
	return false;
}

void func_756(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_775(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_757(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_816())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_775(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_817(iVar0);
			func_818(iVar0, 0, 0);
		}
		func_775(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_645(func_774(1644987397), iVar1);
	}
}

int func_758(int iParam0, int iParam1)
{
	if (!func_819(iParam0))
	{
		return 0;
	}
	if (!func_89())
	{
		return 0;
	}
	if (!func_820(iParam0, &iVar0, &iVar1))
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

var func_759(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_821(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_760(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_761(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_762(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_763(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_764(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_765(int iParam0, int iParam1)
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

void func_766(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_822(uParam0, iParam6);
	func_823(uParam0, iParam5);
	func_824(uParam0, iParam4);
	func_825(uParam0, iParam3);
	func_826(uParam0, iParam2);
	func_827(uParam0, iParam1);
}

char* func_767()
{
	sVar0 = "opponent_swap_01_exit";
	if (Global_1900325->f_23 == 1)
	{
		sVar0 = "opponent_swap_02_exit";
	}
	else if (Global_1900325->f_23 == 2)
	{
		sVar0 = "opponent_swap_03_exit";
	}
	else if (Global_1900325->f_23 == 3)
	{
		sVar0 = "opponent_final_exit";
	}
	return sVar0;
}

int func_768(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = get_random_int_in_range(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

char* func_769(int iParam0)
{
	switch (Global_1900325->f_4)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 1:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 2:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 3:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 0:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 1:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 2:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 3:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 1:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 2:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 3:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				default:
					break;
			}
			break;
	}
	uVar0 = 1;
	func_828(Global_1900325->f_25, &Global_1900325, &uVar0, 0, &iVar2);
	return func_829(iVar2);
}

void func_770(var uParam0, int iParam1)
{
	if (((uParam0->f_491.f_11 != -1 && !func_413(1)) && !is_any_speech_playing(uParam0->f_54)) && func_422(uParam0, iParam1))
	{
		iVar0 = func_161(uParam0->f_21);
		sVar1 = func_423(uParam0, iParam1, iVar0);
		if (is_string_null_or_empty(sVar1))
		{
		}
		else if (_0x61b2aaef645ddaf0(uParam0->f_491.f_11, sVar1, uParam0->f_54, &(uParam0->f_592[uParam0->f_21]), 0))
		{
		}
	}
}

void func_771(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_687(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_772(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_773(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

struct<2> func_774(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

var func_775(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_830(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_776(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_777(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_598(iParam0, iParam1))
		{
			if (func_599(iParam0, iParam1))
			{
				if (func_600(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_601(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_778(int iParam0, int iParam1, bool bParam2)
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

void func_779(int iParam0, bool bParam1)
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

void func_780(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

bool func_781(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_782(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_783(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_831(Var0);
}

int func_784(int iParam0, int iParam1)
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

void func_785(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_832(uParam0, 1))
	{
		func_833(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_786(int iParam0)
{
	iVar0 = func_576(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

bool func_787(int iParam0)
{
	func_834(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_788(int iParam0)
{
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1] = iParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1]->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

bool func_789(int iParam0, int iParam1)
{
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_576(func_835(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_784(iVar0, 1);
	return true;
}

void func_790(int iParam0, int iParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || iParam1);
}

bool func_791(bool bParam0)
{
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_698(iVar0, 1);
		if (func_699(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_700(iVar0) == -1)
			{
				func_701(iVar0, 0);
				func_702(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1)], 2, 6);
			}
			func_708(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0, bool bParam1)
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

int func_793(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> func_794(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_836(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_837(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_798(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_838(bParam1) };
			if (bParam2 && func_839(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_796(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_796(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_797(iParam0, &Var5, 1728382685))
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
			Var0 = { func_840(bParam1) };
			switch (func_576(iParam0))
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
			if (func_841(iParam0, -1823706425))
			{
				Var0 = { func_798(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_841(iParam0, -1483207246))
			{
				Var0 = { func_798(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_842(Var0, &Var27, bParam1, 0))
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

int func_795(int iParam0, int iParam1)
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

bool func_796(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_843(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_797(int iParam0, var uParam1, int iParam2)
{
	if (func_844(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_798(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_715(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_575(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_799(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_845(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(*uParam1, &Var0, bParam6, 0))
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
	if (!func_800(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_575(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_800(bool bParam0)
{
	if (func_34() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_575(bParam0));
}

int func_801(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_846(iParam0))
	{
		return 0;
	}
	if (!func_800(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_802(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_847(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_803()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_804(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_805(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_848(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_803())
	{
		return -1;
	}
	iVar0 = func_804(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_351(iVar1, 0);
	func_849(iVar1, 0);
	func_616(iVar1, 0);
	func_850(iVar1, 0);
	func_851(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_852(iVar1, iParam4);
	}
	return iVar1;
}

void func_806(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 5)
	{
		return;
	}
	if (is_decal_alive(&(uParam0->f_131[iParam1])))
	{
		remove_decal(&(uParam0->f_131[iParam1]));
	}
}

Vector3 func_807(var uParam0, int iParam1)
{
	return get_offset_from_entity_in_world_coords(&(uParam0->f_592[iParam1]), uParam0->f_527);
}

Vector3 func_808(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_809(var uParam0)
{
	return uParam0->f_107;
}

bool func_810(var uParam0)
{
	if (uParam0->f_18 == 785897420)
	{
		return false;
	}
	if (Global_1900325->f_23 == 0)
	{
		if (get_random_int_in_range(0, 6) == 0)
		{
			return true;
		}
	}
	else if (Global_1900325->f_23 == 1)
	{
		if (get_random_int_in_range(0, 5) == 0)
		{
			return true;
		}
	}
	else if (Global_1900325->f_23 == 2)
	{
		if (get_random_int_in_range(0, 4) == 0)
		{
			return true;
		}
	}
	else if (get_random_int_in_range(0, 3) == 0)
	{
		return true;
	}
	return false;
}

bool func_811(var uParam0, int iParam1)
{
	if (uParam0->f_18 == 785897420)
	{
		return false;
	}
	if (func_309(uParam0->f_592[iParam1]) >= 1 && get_random_int_in_range(0, 3) == 0)
	{
		return true;
	}
	return false;
}

bool func_812(var uParam0, int iParam1)
{
	if (uParam0->f_18 == 785897420)
	{
		return false;
	}
	if ((uParam0->f_592[iParam1]->f_121 == 1 && func_309(uParam0->f_592[iParam1]) >= 1) && func_433(uParam0->f_592[iParam1]) == func_411(uParam0))
	{
		return true;
	}
	return false;
}

void func_813(var uParam0, int iParam1, int iParam2)
{
	if (!func_199(iParam1))
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return;
	}
	func_853(uParam0->f_592[iParam1], uParam0->f_592[iParam1]->f_201);
	vVar0 = { func_854(uParam0, iParam1, iParam2) };
	vVar0.x = (vVar0.x + get_random_float_in_range(-uParam0->f_527.f_64, uParam0->f_527.f_64));
	vVar0.f_1 = (vVar0.y + get_random_float_in_range(-uParam0->f_527.f_64, uParam0->f_527.f_64));
	vVar3 = { 0f, 0f, -1f };
	vVar6 = { get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f };
	vVar6 = { func_808(vVar6) };
	fVar9 = (uParam0->f_527.f_63 * get_random_float_in_range(0.8f, 1.2f));
	iVar10 = uParam0->f_592[iParam1]->f_201;
	uParam0->f_592[iParam1]->f_180[iVar10] = add_decal(-199919112, vVar0, vVar3, vVar6, fVar9, fVar9, 0.03f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 1);
	uParam0->f_592[iParam1]->f_201++;
	if (uParam0->f_592[iParam1]->f_201 >= 20)
	{
		uParam0->f_592[iParam1]->f_201 = 0;
	}
}

void func_814(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 40)
	{
		return;
	}
	if (is_decal_alive(&(uParam0->f_138[iParam1])))
	{
		remove_decal(&(uParam0->f_138[iParam1]));
	}
}

Vector3 func_815(var uParam0, int iParam1, int iParam2)
{
	return get_offset_from_entity_in_world_coords(&(uParam0->f_592[iParam1]), *uParam0->f_527.f_8[iParam2]);
}

bool func_816()
{
	if (func_855())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_817(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_856((Global_40.f_4283.f_325 + iParam0));
}

void func_818(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_816())
	{
		func_775(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_775(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_819(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_820(int iParam0, var uParam1, var uParam2)
{
	if (!func_819(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_821(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_822(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_823(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_824(var uParam0, int iParam1)
{
	iVar0 = func_760(*uParam0);
	iVar1 = func_759(*uParam0);
	if (iParam1 < 1 || iParam1 > func_765(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_825(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_826(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_827(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_828(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	uVar0 = 3;
	iVar4 = 0;
	func_857(get_entity_model(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_858(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_858(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = get_random_int_in_range(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_858(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_829(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

void func_830(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_831(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_781(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_781(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_782(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_696(8);
}

bool func_832(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_833(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_834(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_859(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_835(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_784(iParam0, 1)]);
}

struct<4> func_836(bool bParam0)
{
	return func_798(1328661203, func_860(), -1591664384, bParam0);
}

int func_837(int iParam0)
{
	if (!func_715(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_838(bool bParam0)
{
	iVar0 = func_575(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_798(923904168, func_836(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_798(923904168, func_836(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_798(923904168, func_836(bParam0), -740156546, 0);
}

bool func_839(int iParam0, bool bParam1)
{
	if (func_576(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_861(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_840(bool bParam0)
{
	iVar0 = func_575(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_798(271701509, func_836(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_798(271701509, func_836(bParam0), 12999093, 0);
}

bool func_841(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_576(iParam0);
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

bool func_842(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_575(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_843(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_715(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_798(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_575(bParam6), &Var0, 0);
	return uVar4;
}

bool func_844(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_575(0);
	*uParam1 = { func_798(iParam0, func_838(0), iParam3, 0) };
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

bool func_845(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_846(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_847(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_848(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_849(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_850(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_851(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_852(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

void func_853(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 20)
	{
		return;
	}
	if (is_decal_alive(&(uParam0->f_180[iParam1])))
	{
		remove_decal(&(uParam0->f_180[iParam1]));
	}
}

Vector3 func_854(var uParam0, int iParam1, int iParam2)
{
	return get_offset_from_entity_in_world_coords(&(uParam0->f_592[iParam1]), *uParam0->f_527.f_32[iParam2]);
}

bool func_855()
{
	return _unlock_is_unlocked(-121456797);
}

void func_856(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_774(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_857(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 417416138:
				func_862(uParam2, 43);
				*iParam3++;
				func_862(uParam2, 44);
				*iParam3++;
				func_862(uParam2, 54);
				*iParam3++;
				func_862(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_862(uParam2, 43);
				*iParam3++;
				func_862(uParam2, 44);
				*iParam3++;
				func_862(uParam2, 54);
				*iParam3++;
				func_862(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -951746023:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				func_862(uParam2, 7);
				*iParam3++;
				func_862(uParam2, 8);
				*iParam3++;
				func_862(uParam2, 9);
				*iParam3++;
				func_862(uParam2, 10);
				*iParam3++;
				func_862(uParam2, 11);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 13);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 35);
				*iParam3++;
				func_862(uParam2, 36);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 55);
				*iParam3++;
				func_862(uParam2, 56);
				*iParam3++;
				func_862(uParam2, 58);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 63);
				*iParam3++;
				func_862(uParam2, 64);
				*iParam3++;
				func_862(uParam2, 65);
				*iParam3++;
				func_862(uParam2, 66);
				*iParam3++;
				func_862(uParam2, 67);
				*iParam3++;
				func_862(uParam2, 68);
				*iParam3++;
				func_862(uParam2, 71);
				*iParam3++;
				func_862(uParam2, 73);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				func_862(uParam2, 82);
				*iParam3++;
				func_862(uParam2, 84);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 28);
				*iParam3++;
				func_862(uParam2, 41);
				*iParam3++;
				break;
			case -2087759666:
			case -1789856687:
			case 1124384604:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				func_862(uParam2, 7);
				*iParam3++;
				func_862(uParam2, 8);
				*iParam3++;
				func_862(uParam2, 9);
				*iParam3++;
				func_862(uParam2, 10);
				*iParam3++;
				func_862(uParam2, 11);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 13);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 35);
				*iParam3++;
				func_862(uParam2, 36);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 55);
				*iParam3++;
				func_862(uParam2, 56);
				*iParam3++;
				func_862(uParam2, 58);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 63);
				*iParam3++;
				func_862(uParam2, 64);
				*iParam3++;
				func_862(uParam2, 65);
				*iParam3++;
				func_862(uParam2, 66);
				*iParam3++;
				func_862(uParam2, 67);
				*iParam3++;
				func_862(uParam2, 68);
				*iParam3++;
				func_862(uParam2, 71);
				*iParam3++;
				func_862(uParam2, 73);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				func_862(uParam2, 82);
				*iParam3++;
				func_862(uParam2, 84);
				*iParam3++;
				break;
			case -1144663425:
				func_862(uParam2, 84);
				*iParam3++;
				break;
			case 1901354405:
				func_862(uParam2, 82);
				*iParam3++;
				break;
			case 1022365451:
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case 1471623370:
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case 1767420034:
				func_862(uParam2, 86);
				*iParam3++;
				break;
			case 1536283262:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 7);
				*iParam3++;
				func_862(uParam2, 8);
				*iParam3++;
				func_862(uParam2, 9);
				*iParam3++;
				func_862(uParam2, 10);
				*iParam3++;
				func_862(uParam2, 11);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 13);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case -1938511850:
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 28);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 41);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				break;
			case -1345652903:
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 28);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				break;
			case -1796561521:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 28);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 63);
				*iParam3++;
				func_862(uParam2, 64);
				*iParam3++;
				break;
			case -1684080969:
				func_862(uParam2, 80);
				*iParam3++;
				break;
			case -956061568:
			case 918972034:
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 35);
				*iParam3++;
				func_862(uParam2, 36);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 55);
				*iParam3++;
				func_862(uParam2, 56);
				*iParam3++;
				func_862(uParam2, 58);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 62);
				*iParam3++;
				func_862(uParam2, 63);
				*iParam3++;
				func_862(uParam2, 64);
				*iParam3++;
				func_862(uParam2, 65);
				*iParam3++;
				func_862(uParam2, 66);
				*iParam3++;
				func_862(uParam2, 67);
				*iParam3++;
				func_862(uParam2, 68);
				*iParam3++;
				func_862(uParam2, 71);
				*iParam3++;
				func_862(uParam2, 73);
				*iParam3++;
				func_862(uParam2, 79);
				*iParam3++;
				break;
			case -989220241:
			case -607723543:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				func_862(uParam2, 7);
				*iParam3++;
				func_862(uParam2, 8);
				*iParam3++;
				func_862(uParam2, 9);
				*iParam3++;
				func_862(uParam2, 10);
				*iParam3++;
				func_862(uParam2, 11);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 13);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 35);
				*iParam3++;
				func_862(uParam2, 36);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case 549598920:
			case 1854820959:
			case 2133848994:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 26);
				*iParam3++;
				func_862(uParam2, 28);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 34);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 39);
				*iParam3++;
				func_862(uParam2, 41);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				break;
			case -439429058:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				func_862(uParam2, 7);
				*iParam3++;
				func_862(uParam2, 8);
				*iParam3++;
				func_862(uParam2, 9);
				*iParam3++;
				func_862(uParam2, 10);
				*iParam3++;
				func_862(uParam2, 11);
				*iParam3++;
				func_862(uParam2, 12);
				*iParam3++;
				func_862(uParam2, 13);
				*iParam3++;
				func_862(uParam2, 14);
				*iParam3++;
				func_862(uParam2, 15);
				*iParam3++;
				func_862(uParam2, 16);
				*iParam3++;
				func_862(uParam2, 17);
				*iParam3++;
				func_862(uParam2, 18);
				*iParam3++;
				func_862(uParam2, 29);
				*iParam3++;
				func_862(uParam2, 30);
				*iParam3++;
				func_862(uParam2, 31);
				*iParam3++;
				func_862(uParam2, 35);
				*iParam3++;
				func_862(uParam2, 36);
				*iParam3++;
				func_862(uParam2, 37);
				*iParam3++;
				func_862(uParam2, 38);
				*iParam3++;
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 55);
				*iParam3++;
				func_862(uParam2, 56);
				*iParam3++;
				func_862(uParam2, 58);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 65);
				*iParam3++;
				func_862(uParam2, 66);
				*iParam3++;
				func_862(uParam2, 67);
				*iParam3++;
				func_862(uParam2, 68);
				*iParam3++;
				func_862(uParam2, 71);
				*iParam3++;
				func_862(uParam2, 73);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case 480011144:
			case 966958492:
				func_862(uParam2, 45);
				*iParam3++;
				func_862(uParam2, 46);
				*iParam3++;
				func_862(uParam2, 47);
				*iParam3++;
				func_862(uParam2, 48);
				*iParam3++;
				func_862(uParam2, 49);
				*iParam3++;
				func_862(uParam2, 50);
				*iParam3++;
				func_862(uParam2, 51);
				*iParam3++;
				func_862(uParam2, 52);
				*iParam3++;
				func_862(uParam2, 53);
				*iParam3++;
				func_862(uParam2, 55);
				*iParam3++;
				func_862(uParam2, 56);
				*iParam3++;
				func_862(uParam2, 58);
				*iParam3++;
				func_862(uParam2, 61);
				*iParam3++;
				func_862(uParam2, 63);
				*iParam3++;
				func_862(uParam2, 64);
				*iParam3++;
				func_862(uParam2, 65);
				*iParam3++;
				func_862(uParam2, 66);
				*iParam3++;
				func_862(uParam2, 67);
				*iParam3++;
				func_862(uParam2, 68);
				*iParam3++;
				func_862(uParam2, 71);
				*iParam3++;
				func_862(uParam2, 73);
				*iParam3++;
				func_862(uParam2, 74);
				*iParam3++;
				func_862(uParam2, 75);
				*iParam3++;
				func_862(uParam2, 76);
				*iParam3++;
				break;
			case -1766535683:
			case -669394275:
				func_862(uParam2, 87);
				*iParam3++;
				func_862(uParam2, 89);
				*iParam3++;
				func_862(uParam2, 90);
				*iParam3++;
				func_862(uParam2, 91);
				*iParam3++;
				break;
			case 964905443:
				func_862(uParam2, 62);
				*iParam3++;
				func_862(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_862(uParam2, 1);
				*iParam3++;
				func_862(uParam2, 2);
				*iParam3++;
				func_862(uParam2, 3);
				*iParam3++;
				func_862(uParam2, 4);
				*iParam3++;
				func_862(uParam2, 5);
				*iParam3++;
				func_862(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

bool func_858(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(uParam0, iParam1);
}

int func_859(int iParam0, int iParam1)
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

struct<4> func_860()
{
	return Var0;
}

bool func_861(int iParam0)
{
	if (!func_863(iParam0))
	{
		return false;
	}
	return func_864(iParam0);
}

void func_862(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(uParam0, iParam1);
}

bool func_863(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_864(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

