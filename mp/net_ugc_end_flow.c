void __EntryFunction__()
{
	uLocal_14 = _0x842ccc9491ffcd9b("MP_Trans_SceneToPhoto");
	uLocal_15 = _0x842ccc9491ffcd9b("MP_Trans_WinLose");
	iLocal_233 = -1;
	sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_235 = { -580.2f, -3626.5f, 79.94f };
	vLocal_238 = { -596.927f, -3639.072f, 80.6997f };
	vLocal_241 = { -561f, -3700f, 83f };
	iLocal_244 = -1633151965;
	iLocal_245 = -1616778617;
	iLocal_246 = -1852748182;
	iLocal_247 = 435889881;
	StringCopy(&cLocal_249, "mp_winlose_", 64);
	StringCopy(&cLocal_257, "mp_winlose", 64);
	iLocal_265 = 1081228448;
	iLocal_266 = 1081228448;
	iLocal_267 = 1373121931;
	iLocal_274 = 1;
	iLocal_279 = -1;
	StringCopy(&cLocal_364, "UIC", 16);
	iLocal_404 = get_player_index();
	iLocal_405 = get_player_ped(iVar402);
	fLocal_622 = 1f;
	fLocal_623 = 1f;
	func_1(1);
	func_2();
	network_set_script_is_safe_for_network_game();
	while (!func_3())
	{
		if (func_4())
		{
			if (func_5())
			{
				if (func_6())
				{
					func_7();
				}
				else
				{
					func_8();
				}
			}
		}
		func_9();
		if (is_bit_set(iVar396, 3))
		{
			func_10();
		}
		wait(0);
	}
	func_11();
	func_12();
	func_1(0);
	func_13();
}

void func_1(int iParam0)
{
	Global_1048581 = iParam0;
}

void func_2()
{
	bLocal_13 = func_14();
	func_15(64);
	func_15(2048);
	func_15(4096);
	func_16(8);
	func_17(8);
	Global_1051134 = 0;
	set_ped_reset_flag(iVar403, 240, true);
	func_18(&uLocal_16, 1, 0);
	func_19(&uLocal_16, 0);
	_0xf3e039322bfbd4d8(uLocal_14);
	_0xe75cddebf618c8ff(uLocal_14);
	_0xf3e039322bfbd4d8(uLocal_15);
	_0xe75cddebf618c8ff(uLocal_15);
	_0xff8018c778349234(0);
	func_20(1);
}

bool func_3()
{
	if (is_bit_set(iVar394, 2) || iVar387 == 2)
	{
		return true;
	}
	if (func_21(64))
	{
		return true;
	}
	if (func_22(1, 1))
	{
		set_bit(&uLocal_397, 0);
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (func_23(128))
	{
		set_bit(&uLocal_397, 0);
		return true;
	}
	if (func_21(2048))
	{
		set_bit(&uLocal_397, 0);
		return true;
	}
	if (func_23(32))
	{
		return true;
	}
	return false;
}

bool func_4()
{
	if (!is_bit_set(iVar394, 3))
	{
		if (func_24())
		{
			set_bit(&uLocal_396, 3);
		}
		switch (&Global_262152)
		{
			case 0:
				if (!func_25())
				{
					clear_bit(&uLocal_396, 3);
				}
				break;
			case 1:
				if (!func_25())
				{
					clear_bit(&uLocal_396, 3);
				}
				if (!func_26())
				{
					clear_bit(&uLocal_396, 3);
				}
				break;
			case 3:
				if (!func_25())
				{
					clear_bit(&uLocal_396, 3);
				}
				if (!func_26())
				{
					clear_bit(&uLocal_396, 3);
				}
				break;
			case 2:
				break;
			case 4:
				clear_bit(&uLocal_396, 3);
				break;
		}
		if (is_bit_set(iVar394, 3))
		{
			return true;
		}
		else
		{
			if (func_5())
			{
				_0x236905c700fdb54d();
			}
			if (&Global_262152 != 4)
			{
			}
			return false;
		}
	}
	return true;
}

bool func_5()
{
	if (is_bit_set(iVar394, 1))
	{
		return true;
	}
	else if (func_23(16))
	{
		set_bit(&uLocal_396, 1);
		return true;
	}
	return false;
}

bool func_6()
{
	bVar0 = true;
	if (&Global_262152 == 1)
	{
		if (!is_bit_set(iVar398, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (does_entity_exist(&(Global_1048684->f_22[iVar1])))
				{
					if (!func_27(iVar1))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				set_bit(&uLocal_400, 0);
			}
			else
			{
				return false;
			}
		}
	}
	return is_bit_set(iVar394, 0);
}

void func_7()
{
	func_28();
	func_29();
	switch (&Global_262152)
	{
		case 0:
			func_30();
			break;
		case 2:
			func_31();
			break;
		case 3:
			func_32();
			func_33();
			break;
		case 1:
			func_33();
			break;
		case 4:
			break;
	}
}

void func_8()
{
	func_1(1);
	func_34(0);
	func_35();
	if (!is_screen_faded_out() && !is_screen_fading_out())
	{
		func_36(1);
		func_37(1);
	}
	func_38(1);
	if (!func_39(255))
	{
		func_40(3);
	}
	else
	{
		func_41(1);
		if (!is_screen_faded_out() && !is_screen_fading_out())
		{
			func_42(64);
		}
	}
	func_43(0);
	if (!func_39(255))
	{
		iVar0 = 8;
		func_44(0, iVar0);
	}
	func_45(2048);
	_close_all_apps_immediate();
	set_bit(&(Global_1957959->f_1), 5);
	uLocal_403 = Global_1048684->f_19;
	func_46(&iLocal_405);
	set_bit(&uLocal_396, 0);
}

void func_9()
{
	_0xd9130842d7226045("RDRO_Camera_Flash_Pulse", 0);
	if (!is_string_null_or_empty(&(Global_1048684->f_1)) || !is_string_null_or_empty(&(Global_1048684->f_9)))
	{
		if (!is_bit_set(iVar395, 4))
		{
			if (is_bit_set(iVar395, 5) || _0xeef83a759ae06a27(uLocal_14))
			{
				if (is_bit_set(iVar395, 5) || _0x9ab192a9ef980eed(uLocal_14, 2, 0, &uLocal_284))
				{
					sVar0 = "photograph";
					if (is_bit_set(iVar395, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (_0xe368e8422c860ba7(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						if (!is_bit_set(iVar395, 7))
						{
							func_47();
						}
						else
						{
							func_48();
						}
						set_bit(&uLocal_397, 4);
						set_bit(&uLocal_397, 12);
						func_42(64);
						play_sound_frontend(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						_0x9b1fc259187c97c0("photograph");
						func_49();
						vLocal_360 = { vLocal_235 };
						func_50(1, 0);
					}
				}
			}
			else if (func_51(16) && func_24())
			{
				func_52();
			}
		}
		else if ((_0xeef83a759ae06a27(uLocal_14) && _0x9ab192a9ef980eed(uLocal_14, 2, 0, &uLocal_284)) || (_0xeef83a759ae06a27(uLocal_15) && _0x9ab192a9ef980eed(uLocal_15, 2, 0, &uLocal_284)))
		{
			play_sound_frontend("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			_0x9b1fc259187c97c0("photograph");
		}
	}
}

void func_10()
{
	if (&Global_1049169)
	{
		Global_1049159->f_5 = (Global_1048684->f_403.f_8 + Global_1048684->f_419.f_8);
		Global_1049159->f_6 = (Global_1048684->f_403.f_6 + Global_1048684->f_419.f_6);
		_0xa2058154357726bb(Global_1049196, Global_1049159, Global_1049170, Global_1049175, Global_3145858->f_60002 == 1);
		*Global_1049159 = { Var0 };
		Global_1049169 = 0;
	}
}

void func_11()
{
	if (!Global_1048684->f_467)
	{
		if (Global_1048684->f_466 || uVar283)
		{
			func_54(func_53(455921177, 701412595), 1);
			iVar0 = func_55(Global_1572887->f_106.f_9);
			switch (iVar0)
			{
				case 7:
					func_54(func_53(455921177, 112216621), 1);
					break;
				case 8:
					func_54(func_53(455921177, -1767965617), 1);
					break;
				case 9:
					func_54(func_53(455921177, 81153145), 1);
					break;
				case 2:
					func_54(func_53(455921177, 2090637823), 1);
					break;
				case 3:
					func_54(func_53(455921177, 2090637823), 1);
					break;
				case 4:
					func_54(func_53(455921177, -1740003396), 1);
					break;
				case 6:
					func_54(func_53(455921177, -141490041), 1);
					break;
				case 5:
					func_54(func_53(455921177, -2140118397), 1);
					break;
				case 19:
					func_54(func_53(455921177, 928731509), 1);
					break;
			}
		}
	}
}

void func_12()
{
	_0x236905c700fdb54d();
	func_56();
	func_57();
	func_58();
	switch (&Global_262152)
	{
		case 0:
			func_59();
			break;
		case 2:
			func_60();
			break;
		case 3:
			func_61();
			func_62();
			break;
		case 1:
			func_62();
			break;
	}
	func_63();
	func_10();
	_display_hud_component(999578278);
	_display_hud_component(690901814);
	func_64();
	func_65(1);
	func_16(2048);
	if (is_bit_set(iVar395, 3))
	{
		func_66(-304137656, 0, 255, 0, 0);
	}
	Global_1048684->f_377 = 28;
	func_67(4);
	func_68(0);
	func_69();
	func_70(0);
	func_71(0);
	if (func_72())
	{
		func_73(0);
	}
	Global_1048582 = 0;
	animpostfx_stop_all();
}

void func_13()
{
	terminate_this_thread();
}

bool func_14()
{
	return func_74(Global_1572887->f_7, 1);
}

void func_15(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_16(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

void func_17(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

void func_18(var uParam0, bool bParam1, bool bParam2)
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

void func_19(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_write_data_bool(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = _databinding_add_data_bool(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

void func_20(bool bParam0)
{
	if (bParam0)
	{
	}
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uVar1 = _databinding_add_data_container(uVar0, "acceptbutton");
	_databinding_add_data_bool(uVar1, "visible", bParam0);
	uVar2 = _databinding_add_data_container(uVar0, "menuUpButton");
	_databinding_add_data_bool(uVar2, "visible", bParam0);
	uVar3 = _databinding_add_data_container(uVar0, "menuDownButton");
	_databinding_add_data_bool(uVar3, "visible", bParam0);
}

bool func_21(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

bool func_22(bool bParam0, bool bParam1)
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

bool func_23(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_24()
{
	if (iVar279 < 100)
	{
		if (func_75(&cLocal_364, &iLocal_281))
		{
			iLocal_281 = 100;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_25()
{
	return true;
}

bool func_26()
{
	if (func_76())
	{
		if (func_77())
		{
			if (func_78(iLocal_244, iLocal_245, iLocal_247, iLocal_246))
			{
				if (func_79())
				{
					if (func_80())
					{
						if (func_81(&uLocal_16))
						{
							if (func_82())
							{
								_0x513f8aa5bf2f17cf(vLocal_235, 15f, 0);
								func_45(2);
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_27(int iParam0)
{
	switch (&iLocal_439[iParam0])
	{
		case 0:
			set_entity_as_mission_entity(&(Global_1048684->f_22[iParam0]), true, true);
			freeze_entity_position(&(Global_1048684->f_22[iParam0]), true);
			set_entity_invincible(&(Global_1048684->f_22[iParam0]), true);
			vVar0 = { get_entity_coords(&(Global_1048684->f_22[iParam0]), true, false) };
			func_83(uLocal_406[iParam0], Global_1048684->f_22[iParam0], &vVar0);
			_0x59bd177a1a48600a(&(uLocal_406[iParam0]), 1);
			if (does_entity_exist(&(Global_1048684->f_343[iParam0])))
			{
				func_83(uLocal_472[iParam0], Global_1048684->f_343[iParam0], &vVar0);
			}
			iLocal_439[iParam0] = 1;
			break;
		case 1:
			if (Global_1048684->f_22[iParam0]->f_9)
			{
				iLocal_439[iParam0] = 2;
			}
			else if (!_0xa0bc8faed8cfeb3c(&(uLocal_406[iParam0])))
			{
			}
			else
			{
				func_84(&(uLocal_406[iParam0]), 1, 1);
				iLocal_439[iParam0] = 2;
				Jump @326; //curOff = 255
				if (does_entity_exist(&(Global_1048684->f_22[iParam0])))
				{
					delete_ped(Global_1048684->f_22[iParam0]);
				}
				if (does_entity_exist(&(Global_1048684->f_343[iParam0])))
				{
					delete_ped(Global_1048684->f_343[iParam0]);
				}
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_28()
{
	_0x236905c700fdb54d();
	func_17(8);
	func_49();
	disable_control_action(0, 1287709438, true);
	disable_control_action(0, -484677055, true);
	disable_control_action(0, -1404316431, true);
	func_38(1);
	func_85(1);
	func_86();
	_0xdd1232b332cbb9e7(1, 1, 0);
	_0x8910c24b7e0046ec();
	_hide_hud_component(999578278);
	func_65(0);
}

void func_29()
{
	if (is_bit_set(iVar394, 4))
	{
		if (!does_entity_exist(iVar615))
		{
			if (!bVar618)
			{
				uLocal_619 = _0x6f3068258a499e52(988533890, -561.1321f, -3694.189f, 81.9117f, 15);
				iLocal_620 = 1;
			}
			else if (_0x1ff441d7954f8709(uVar617))
			{
				iLocal_617 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uVar617));
				if (does_entity_exist(iVar615) && is_entity_visible(iVar615))
				{
					set_entity_visible(iVar615, false);
				}
			}
		}
	}
}

void func_30()
{
	if (is_player_control_on(iVar402))
	{
		func_44(0, 8);
	}
	switch (iVar387)
	{
		case 0:
			if (func_87(&uLocal_374))
			{
				if (func_88(&uLocal_374, 0, 0) > 2500)
				{
					func_89(&uLocal_16);
					_hide_hud_component(999578278);
					func_90(&Local_32, 1);
					func_91(&Local_32);
					func_92(1);
				}
			}
			else
			{
				func_93(&uLocal_374, 0, 0);
			}
			break;
		case 1:
			func_90(&Local_32, 1);
			func_92(2);
			break;
		case 2:
			set_bit(&uLocal_396, 2);
			break;
	}
}

void func_31()
{
	if (func_87(&uLocal_372))
	{
		if (!func_23(4096))
		{
			if (func_23(16384))
			{
				return;
			}
			func_94(1);
			if (!func_23(256))
			{
				if (func_23(16))
				{
					func_16(16);
				}
			}
			if (func_88(&uLocal_372, 1, 0) > 5000 && func_95())
			{
				if (!&Global_1048577)
				{
					if (!func_96(255))
					{
						if (func_23(64) || func_97())
						{
							if (!func_23(256))
							{
								func_98(0);
							}
							_0xeda5cbecf56e1386(uLocal_14);
							if (func_99())
							{
								func_100(4, 0);
							}
							func_85(0);
							set_bit(&uLocal_396, 2);
						}
					}
				}
			}
		}
		else
		{
			func_101();
		}
	}
	else
	{
		if (!func_23(4096))
		{
			do_screen_fade_out(1750);
		}
		func_93(&uLocal_372, 1, 0);
	}
}

void func_32()
{
	switch (iVar387)
	{
		case 0:
			switch (iVar389)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iVar388)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_33()
{
	if (is_player_control_on(iVar402))
	{
		func_44(0, 8);
	}
	func_102();
	switch (iVar387)
	{
		case 0:
			switch (iVar389)
			{
				case 0:
					func_103();
					func_104();
					func_105(1);
					func_106(1);
					func_107();
					func_108(1);
					break;
				case 1:
					if (!is_bit_set(iVar395, 12))
					{
						return;
					}
					func_109();
					func_110();
					iLocal_505 = 0;
					func_108(2);
					break;
				case 2:
					if (func_111() != 0)
					{
						func_108(3);
					}
					break;
				case 3:
					if (func_112() != 0)
					{
						func_108(4);
					}
					break;
				case 4:
					if (!is_bit_set(iVar397, 9))
					{
						set_focus_pos_and_vel(vLocal_235, 0f, 0f, 0f);
					}
					else
					{
						set_focus_pos_and_vel(vLocal_241, 0f, 0f, 0f);
					}
					if (_is_position_inside_imap_streaming_extents(iLocal_244, vLocal_235))
					{
						bVar0 = true;
					}
					else if (func_87(&uLocal_368) && func_88(&uLocal_368, 0, 0) > 3500)
					{
						if (get_number_of_streaming_requests() == 0)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = func_113();
						}
					}
					else
					{
						bVar0 = func_113();
					}
					if (bVar0 || (get_game_timer() - iVar280) > 3500)
					{
						func_114(&uLocal_370);
						set_timecycle_modifier(&cLocal_249);
						iVar1 = 24;
						func_44(0, iVar1);
						func_93(&uLocal_372, 0, 0);
						func_115();
						func_108(5);
					}
					break;
				case 5:
					if (func_88(&uLocal_372, 0, 0) > 1000)
					{
						func_93(&uLocal_368, 0, 0);
						func_94(1);
						func_116();
						set_timecycle_modifier(&cLocal_249);
						func_92(1);
					}
					break;
			}
			break;
		case 1:
			if (!is_bit_set(iVar397, 9))
			{
				set_focus_pos_and_vel(vLocal_235, 0f, 0f, 0f);
			}
			else
			{
				set_focus_pos_and_vel(vLocal_241, 0f, 0f, 0f);
			}
			_0x1c38c3577901af1f();
			func_117(Global_1049313, 1);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 1);
			switch (iVar388)
			{
				case 0:
					if (!func_96(255))
					{
						if (func_118())
						{
							func_119(1);
						}
					}
					break;
				case 1:
					if (Local_32.f_199 < 2)
					{
						func_90(&Local_32, 0);
					}
					if (is_screen_faded_out() || is_screen_fading_out())
					{
						do_screen_fade_in(0);
					}
					func_93(&uLocal_372, 0, 0);
					if (func_99())
					{
						func_100(4, 0);
					}
					func_85(0);
					_0x9b1fc259187c97c0("winners_pose");
					if (func_51(2) || func_51(4))
					{
						play_sound_frontend("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						play_sound_frontend("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					trigger_music_event(&(Global_1048684->f_471));
					_0x5a8b01199c3e79c3();
					func_16(2);
					_0xeda5cbecf56e1386(uLocal_14);
					animpostfx_stop_all();
					_0x3a9a281ff71249e9("RespawnMissionCheckpoint", 1250);
					func_119(2);
					break;
				case 2:
					if (!_0xeef83a759ae06a27(uLocal_15))
					{
						if ((_get_anim_scene_duration(iLocal_233) - _get_anim_scene_time(iLocal_233)) <= 1.2f)
						{
							_0x9b8d5d4cb8af58b3(uLocal_15);
							set_bit(&uLocal_397, 4);
						}
					}
					if (func_120())
					{
						func_121(1);
						func_122(1);
						func_123();
						_0x9b1fc259187c97c0("photograph");
						func_93(&uLocal_376, 0, 0);
						func_93(&uLocal_378, 0, 0);
						iVar2 = player_id();
						sVar3 = get_player_name(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050050->f_14 <= 1)
							{
								if (are_strings_equal(&(Global_1050050->f_101[iVar4]->f_14.f_1), sVar3))
								{
									iLocal_285 = 1;
								}
								else
								{
									iVar4++;
								}
								func_119(3);
								Jump @921; //curOff = 898
								if (!func_87(&uLocal_372))
								{
									func_93(&uLocal_372, 0, 0);
								}
								Jump @1054; //curOff = 921
								if (func_88(&uLocal_378, 0, 0) > 5000)
								{
									set_bit(&uLocal_398, 0);
									func_119(4);
								}
								else if (func_88(&uLocal_378, 0, 0) < 0 || !func_87(&uLocal_378))
								{
									func_93(&uLocal_378, 0, 0);
								}
								Jump @1054; //curOff = 992
								func_90(&Local_32, 0);
								func_124(&Local_32, Global_1049313);
								func_125(&Local_32, Global_1049313, 1);
								if (func_126())
								{
									func_127();
									func_92(2);
								}
								func_124(&Local_32, &(Global_1050050->f_101));
								Jump @1068; //curOff = 1054
								set_bit(&uLocal_396, 2);
								if (is_bit_set(iVar396, 1))
								{
									func_128();
								}
								if (is_bit_set(iVar396, 0))
								{
									func_129();
								}
							}
						}
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_34(int iParam0)
{
	Global_1071686->f_28662.f_3 = 1;
	Global_1071686->f_28662.f_65.f_30 = iParam0;
	Global_1071686->f_28662.f_4 = get_id_of_this_thread();
}

void func_35()
{
	func_130(2);
}

void func_36(bool bParam0)
{
	if (!bParam0)
	{
		func_131(18);
	}
	else
	{
		func_132(18);
	}
}

void func_37(bool bParam0)
{
	if (!bParam0)
	{
		func_131(19);
	}
	else
	{
		func_132(19);
	}
}

void func_38(bool bParam0)
{
	if (!bParam0)
	{
		func_131(21);
	}
	else
	{
		func_132(21);
	}
}

bool func_39(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_133();
	}
	return func_134(64, iParam0);
}

void func_40(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

void func_41(bool bParam0)
{
	if (!bParam0)
	{
		func_131(28);
	}
	else
	{
		func_132(28);
	}
}

void func_42(int iParam0)
{
	if (func_135(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		func_132(49);
	}
	else
	{
		func_131(49);
	}
}

void func_44(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_136(iParam1);
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
	func_137(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_45(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_46(int iParam0)
{
	set_ped_reset_flag(*iParam0, 129, true);
}

void func_47()
{
	if (func_51(17))
	{
		set_bit(&uLocal_397, 7);
		return;
	}
	Local_32.f_159 = &Global_1051114;
	Local_32.f_160 = &Global_1051115;
	func_138(Global_1049313, &Local_32, &uLocal_16, iVar401, func_51(15));
	set_bit(&uLocal_397, 7);
}

void func_48()
{
	if (Local_32.f_150 > 1)
	{
		cVar0 = _get_label_text("UIC_EF_WINS");
	}
	else
	{
		cVar0 = _get_label_text("UIC_EF_WIN");
	}
	func_139(&uLocal_16, cVar0, &(Global_1048684->f_9), " ", " ", " ", " ", Global_1048684->f_17);
	func_140(&uLocal_16);
	func_19(&uLocal_16, 1);
}

void func_49()
{
	if (_is_app_running(29649618) || _is_app_active(29649618))
	{
		_close_app_by_hash_immediate(29649618);
	}
	if (_is_app_running(-1641598689) || _is_app_active(-1641598689))
	{
		_close_app_by_hash_immediate(-1641598689);
	}
	if (func_141())
	{
		func_142();
	}
	if (func_143())
	{
		func_144();
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!is_bit_set(iVar393, 11) && !func_145(vLocal_360))
		{
			set_bit(&uLocal_397, 11);
			if (!is_bit_set(iVar395, 9))
			{
				set_focus_pos_and_vel(vLocal_360, 0f, 0f, 0f);
			}
			else
			{
				set_focus_pos_and_vel(vLocal_241, 0f, 0f, 0f);
			}
		}
	}
	else if (is_bit_set(iVar393, 11) || bParam1)
	{
		clear_bit(&uLocal_397, 11);
		clear_focus();
		vLocal_360 = { 0f, 0f, 0f };
	}
}

bool func_51(int iParam0)
{
	return is_bit_set(&Global_1048684, iParam0);
}

void func_52()
{
	if (func_140(&uLocal_16))
	{
		func_93(&uLocal_372, 1, 0);
		if (!func_146(2))
		{
			play_sound_frontend("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
		}
		if (!_0xeef83a759ae06a27(uLocal_14))
		{
			if (!func_99() || !func_147())
			{
				_0x9b8d5d4cb8af58b3(uLocal_14);
			}
			else
			{
				set_bit(&uLocal_397, 5);
			}
			clear_bit(&uLocal_397, 4);
			func_148(16);
		}
	}
}

struct<2> func_53(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_55(int iParam0)
{
	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 != &Global_265377->f_117359.f_6758[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (&Global_265377->f_117359.f_6725[iVar0] != &Global_265354->f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_56()
{
	if (!func_96(255))
	{
		func_36(0);
		func_37(0);
		if (func_23(64) || !func_14())
		{
			if (!func_21(64))
			{
				if (&Global_262152 != 0)
				{
					func_50(0, 0);
					if (!func_23(256))
					{
						if (is_bit_set(&Global_1048684, 29) || is_bit_set(&Global_1048684, 30))
						{
							if (is_bit_set(&Global_1048684, 31))
							{
								func_149(1, 0);
								func_150(1);
							}
							else if (is_bit_set(&Global_1048684, 28) || is_bit_set(&Global_1048684, 27))
							{
								if (is_bit_set(&Global_1048684, 27))
								{
									if (!func_145(Global_1048684->f_394))
									{
										func_151(Global_1048684->f_394, Global_1048684->f_397, 1);
									}
								}
								func_152(1, 0);
								func_150(2);
							}
							if (is_bit_set(&Global_1048684, 29) && !func_145(Global_1048684->f_390))
							{
								func_153(Global_1048684->f_390, Global_1048684->f_393);
								func_150(4);
							}
							else
							{
								func_153(get_entity_coords(player_ped_id(), false, false), get_gameplay_cam_relative_heading());
								func_150(8);
							}
						}
						else if (func_154() == 33)
						{
							func_155(5, 1);
							func_150(64);
						}
						else
						{
							func_150(16);
						}
					}
				}
				if (!func_156())
				{
					func_36(1);
					func_150(32);
				}
			}
			if (!func_23(256))
			{
				do_screen_fade_out(150);
			}
		}
		else
		{
			func_17(4096);
		}
	}
}

void func_57()
{
	if (func_23(256))
	{
		set_bit(&uLocal_397, 2);
		do_screen_fade_out(0);
		reset_paused_renderphases();
		_display_hud_component(999578278);
		_display_hud_component(690901814);
	}
	else if (func_23(64) || func_21(32))
	{
		set_bit(&uLocal_397, 1);
		while (!func_157(&bLocal_13) && !func_22(1, 1))
		{
			_0x236905c700fdb54d();
			wait(0);
		}
		func_158();
	}
}

void func_58()
{
	func_159();
	func_160();
	func_40(0);
	func_161(64);
	func_37(0);
	func_38(0);
	func_41(0);
	func_85(0);
	func_162();
	func_163(0);
	func_164(0);
	func_127();
	clear_bit(&(Global_1957959->f_1), 5);
	Global_1048684->f_470 = 0;
	uVar0 = 32;
	func_165(&uVar0, get_player_index(), 0);
	_text_database_delete("UIC");
	enable_control_action(0, 1287709438, true);
	enable_control_action(0, -484677055, true);
	enable_control_action(0, -1404316431, true);
	clear_ped_tasks_immediately(get_player_ped(get_player_index()), false, true);
	use_player_colour_instead_of_team_colour(false);
	set_ped_reset_flag(iVar403, 240, false);
	_0x531a78d6bf27014b("RDRO_Winners_Screen_Sounds");
	_0x531a78d6bf27014b("RDROADV_Winners_Screen_Sounds");
	_0x531a78d6bf27014b("RDRO_Countdown_Clockwork_Sounds");
	if (_0xeef83a759ae06a27(uLocal_14))
	{
		_0xeda5cbecf56e1386(uLocal_14);
	}
	if (_0xeef83a759ae06a27(uLocal_15))
	{
		_0xeda5cbecf56e1386(uLocal_15);
	}
	_0x71845905bccde781(uLocal_14);
	_0x71845905bccde781(uLocal_15);
	func_15(8);
	func_15(64);
	func_15(2048);
	func_16(64);
	func_16(1024);
	func_16(256);
	func_89(&uLocal_16);
	func_94(0);
	func_1(0);
	func_166();
	if (func_167(33, 255))
	{
		if (func_99())
		{
			func_100(4, 0);
		}
		func_85(0);
	}
	network_clear_clock_time_override();
	_0xce7690c0a0d1c36d(0);
	use_player_colour_instead_of_team_colour(false);
	set_game_pauses_for_streaming(false);
	_0xff8018c778349234(1);
	cancel_music_event(&(Global_1048684->f_471));
	func_16(128);
	func_50(0, 1);
	_0x38d9d50f2085e9b3(uLocal_14);
	_0x38d9d50f2085e9b3(uLocal_15);
	if (!&Global_1049270)
	{
		_0x0e71c80fa4ec8147("FOG", true);
		_0x0e71c80fa4ec8147("MISTY", true);
		_0x0e71c80fa4ec8147("SHOWER", true);
		_0x0e71c80fa4ec8147("THUNDERSTORM", true);
	}
	func_168(0);
	iVar37 = 0;
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_169((*Global_1049283)[iVar37]);
		iVar37++;
	}
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_169((*Global_1049296)[iVar37]);
		iVar37++;
	}
}

void func_59()
{
	func_170(&Local_32, 1);
	func_171(&(Local_32.f_162));
	func_172();
}

void func_60()
{
}

void func_61()
{
}

void func_62()
{
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	Global_1071686->f_10 = Global_1048684->f_20;
	bVar0 = true;
	iVar1 = 0;
	func_93(&uVar2, 0, 0);
	while (!_0x9e4ef615e307fbbe() && bVar0)
	{
		bVar0 = false;
		if (_is_imap_active(iLocal_244))
		{
			func_173(iLocal_244);
			bVar0 = true;
		}
		if (_is_imap_active(iLocal_245))
		{
			func_173(iLocal_245);
			bVar0 = true;
		}
		if (_is_imap_active(iLocal_246))
		{
			func_173(iLocal_246);
			bVar0 = true;
		}
		if (_is_imap_active(iLocal_247))
		{
			func_173(iLocal_247);
			bVar0 = true;
		}
		iVar1++;
		if (func_88(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			bVar0 = false;
		}
		wait(0);
	}
	set_mapdatacullbox_enabled(&cLocal_257, false);
	func_174();
	clear_timecycle_modifier();
	_0xf01d21df39554115(1);
	func_170(&Local_32, 0);
	func_171(&(Local_32.f_162));
	func_172();
	if (_databinding_is_data_id_valid(uLocal_232))
	{
		func_175(&Local_32, &uLocal_232);
	}
}

void func_63()
{
	if (is_bit_set(iVar395, 1))
	{
		while (is_thread_active(&Global_1051138, false))
		{
			_0x236905c700fdb54d();
			wait(0);
		}
	}
	else if (!is_bit_set(iVar395, 2))
	{
	}
}

void func_64()
{
	Global_1913504 = 0;
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_176(bParam0);
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_177(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_67(int iParam0)
{
	Global_262152 = iParam0;
}

void func_68(int iParam0)
{
	Global_1048684->f_470 = iParam0;
}

void func_69()
{
	func_178(&uVar0, 1);
}

void func_70(bool bParam0)
{
	if (!&Global_2883584)
	{
		if (bParam0)
		{
			func_45(4);
		}
		else
		{
			func_16(4);
		}
	}
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		func_45(16);
	}
	else
	{
		func_16(16);
	}
}

bool func_72()
{
	return &Global_1048583;
}

void func_73(bool bParam0)
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

bool func_74(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_75(char* sParam0, int iParam1)
{
	if (!_text_database_has_loaded(sParam0))
	{
		_text_database_request(sParam0);
	}
	else
	{
		return true;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		return true;
	}
	return false;
}

bool func_76()
{
	if (is_bit_set(iVar395, 9))
	{
		return true;
	}
	if (Global_1048684->f_377 == 28)
	{
		return false;
	}
	func_179(0, 0, 0, 0);
	switch (Global_1048684->f_377)
	{
		case 27:
			set_bit(&uLocal_399, 2);
			set_bit(&uLocal_399, 4);
			set_bit(&uLocal_399, 11);
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_396, 4);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@TEAM_GROUPING@HALLOWEEN@TEAM@CELEBRATION_TEAM";
			func_180(423112700, -1302444521, "NPC_", 1);
			iVar0 = 0;
			while (iVar0 < Global_1048684->f_376)
			{
				if (!Global_1048684->f_22[iVar0]->f_9)
				{
				}
				else
				{
					func_181(409012051, "SKULL_WIN_", is_ped_male(&(Global_1048684->f_22[iVar0])));
				}
				iVar0++;
			}
			break;
		case 0:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_179(7, 2, 0, 0);
			break;
		case 23:
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_396, 4);
			set_bit(&uLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 24:
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_396, 4);
			set_bit(&uLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 25:
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_396, 4);
			set_bit(&uLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 26:
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_396, 4);
			set_bit(&uLocal_399, 3);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case 21:
			set_bit(&uLocal_399, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_179(0, 0, 0, 8);
			break;
		case 22:
			set_bit(&uLocal_399, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@@Protector_FailAlive_V1";
			func_179(0, 0, 0, 8);
			break;
		case 1:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_179(4, 2, 0, 0);
			func_182(2);
			break;
		case 2:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_179(4, 2, 0, 0);
			func_182(0);
			break;
		case 3:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_179(5, 0, 0, 0);
			break;
		case 4:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			set_bit(&uLocal_399, 7);
			set_bit(&uLocal_399, 5);
			func_179(4, 0, 0, 0);
			break;
		case 5:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_179(1, 0, 0, 0);
			func_182(2);
			func_182(3);
			break;
		case 6:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			set_bit(&uLocal_399, 5);
			func_179(11, 0, 4, 0);
			break;
		case 7:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_179(8, 0, 0, 0);
			func_182(6);
			func_182(7);
			set_bit(&uLocal_399, 8);
			break;
		case 9:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_179(8, 4, 0, 0);
			func_182(6);
			func_182(7);
			break;
		case 8:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_179(15, 0, 16, 0);
			func_182(2);
			func_182(3);
			set_bit(&uLocal_399, 7);
			set_bit(&uLocal_399, 5);
			break;
		case 13:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_179(4, 2, 0, 0);
			func_183(5);
			func_183(7);
			set_bit(&uLocal_399, 11);
			break;
		case 12:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_179(1, 0, 0, 0);
			func_182(2);
			func_182(14);
			func_184(6);
			func_184(7);
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_399, 11);
			StringConCat(&cLocal_249, "tombstone_", 64);
			break;
		case 14:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_179(4, 0, 0, 0);
			set_bit(&uLocal_399, 9);
			set_bit(&uLocal_399, 7);
			set_bit(&uLocal_399, 5);
			set_bit(&uLocal_399, 10);
			set_bit(&uLocal_399, 11);
			StringConCat(&cLocal_249, "wagon_", 64);
			break;
		case 15:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			set_bit(&uLocal_399, 6);
			break;
		case 16:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			set_bit(&uLocal_399, 6);
			break;
		case 17:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			set_bit(&uLocal_399, 6);
			break;
		case 18:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			set_bit(&uLocal_399, 6);
			break;
		case 19:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			set_bit(&uLocal_399, 6);
			break;
		case 20:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			set_bit(&uLocal_399, 6);
			break;
	}
	if (is_bit_set(iVar397, 6))
	{
		set_bit(&uLocal_399, 4);
	}
	func_185();
	iVar1 = get_clock_hours();
	if (is_bit_set(iVar397, 10))
	{
		if (iVar1 >= 22 || iVar1 <= 5)
		{
			set_bit(&uLocal_397, 31);
			iLocal_279 = 0;
		}
		else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 22))
		{
			set_bit(&uLocal_397, 30);
			if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
			{
				iLocal_279 = 7;
			}
			else
			{
				iLocal_279 = 18;
			}
		}
		else
		{
			iLocal_279 = 13;
		}
	}
	else if (iVar1 >= 20 || iVar1 <= 5)
	{
		set_bit(&uLocal_397, 31);
		iLocal_279 = 0;
	}
	else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 20))
	{
		set_bit(&uLocal_397, 30);
		iLocal_279 = 18;
	}
	else
	{
		iLocal_279 = 13;
	}
	iVar2 = Global_3145858->f_229;
	if (iVar2 == 0)
	{
		iVar3 = func_186(Global_3145858->f_196);
		switch (iVar3)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar2 = 1;
				break;
			case 3:
			case 12:
				iVar2 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar2 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar2 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar2 = 4;
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			if (is_bit_set(iVar397, 10))
			{
				iLocal_244 = 1834537343;
				iLocal_247 = 22956558;
				iLocal_248 = 821931868;
				if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
				{
					if (is_bit_set(iVar395, 30))
					{
						iLocal_248 = 1500834021;
						func_187(-0.26f, -0.042f, 630f, 2354.531f, -2155.473f, -2101.975f);
					}
					else
					{
						iLocal_248 = -702816767;
						func_187(0.354f, -0.55f, 534f, 2695.09f, 1101.355f, -2409.212f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (is_bit_set(iVar397, 12))
					{
						iLocal_245 = 324369003;
					}
				}
				else if (is_bit_set(iVar395, 31))
				{
					iLocal_248 = 433385945;
					func_187(0.386f, -0.072f, 597f, 1831.857f, 29.148f, -1795.856f);
				}
				else if (is_bit_set(iVar395, 30))
				{
					iLocal_279 = 17;
					if (is_bit_set(iVar397, 9) || is_bit_set(iVar397, 3))
					{
						func_187(-0.04f, 0.323f, 143.5f, -216.629f, 3978.264f, -3208.506f);
					}
					else
					{
						func_187(-0.007f, 0.602f, 374.75f, -35.357f, 146.108f, -3240.619f);
					}
				}
				else
				{
					func_187(0.119f, 0.471f, 374.75f, 1054.363f, 1879.716f, -1177.575f);
				}
			}
			else
			{
				iLocal_244 = -1633151965;
				iLocal_247 = 435889881;
				iLocal_245 = -1616778617;
				iLocal_246 = -1852748182;
				iLocal_248 = 1632247697;
			}
			StringConCat(&cLocal_249, "heartlands", 64);
			break;
		case 2:
			if (is_bit_set(iVar397, 10))
			{
				iLocal_244 = -1645988897;
				iLocal_247 = 1614850834;
				iLocal_248 = -702816767;
				if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
				{
					if (is_bit_set(iVar395, 30))
					{
						iLocal_248 = 1500834021;
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (is_bit_set(iVar397, 12))
					{
						iLocal_245 = -281275366;
					}
				}
				else if (is_bit_set(iVar395, 30))
				{
					iLocal_279 = 19;
				}
			}
			else
			{
				iLocal_244 = 231100670;
				iLocal_247 = -2036638644;
				iLocal_245 = -209782407;
				iLocal_246 = -1068985587;
				iLocal_248 = 1500834021;
			}
			StringConCat(&cLocal_249, "swamp", 64);
			StringConCat(&cLocal_257, "_swamp", 64);
			break;
		case 3:
			iLocal_248 = 603685163;
			if (is_bit_set(iVar397, 10))
			{
				iLocal_244 = 505174455;
				iLocal_247 = 2135160782;
				if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
				{
					if (is_bit_set(iVar395, 30))
					{
						iLocal_248 = 1500834021;
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = -702816767;
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (is_bit_set(iVar397, 12))
					{
						iLocal_245 = -415953049;
					}
				}
				else if (is_bit_set(iVar395, 31))
				{
					iLocal_248 = -273223690;
				}
				else if (is_bit_set(iVar395, 30))
				{
					if (is_bit_set(iVar397, 9) || is_bit_set(iVar397, 3))
					{
						iLocal_279 = 19;
						iLocal_280 = 40;
						func_187(0.021f, 0.102f, 357.2f, -2480.711f, 2086.622f, -2668.159f);
					}
					else
					{
						iLocal_279 = 20;
						func_187(0.179f, 0.701f, 610.75f, -2571.701f, 2238.057f, -2835.739f);
					}
				}
			}
			else
			{
				iLocal_244 = -1793687930;
				iLocal_247 = 908140270;
				iLocal_245 = 1417440092;
				iLocal_246 = 649433039;
			}
			StringConCat(&cLocal_249, "snow", 64);
			StringConCat(&cLocal_257, "_snow", 64);
			break;
		case 4:
			iLocal_248 = -173507739;
			if (is_bit_set(iVar397, 10))
			{
				if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
				{
					if (is_bit_set(iVar395, 30))
					{
						iLocal_248 = 1500834021;
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = -702816767;
						func_187(0.011f, -0.669f, -109.5f, 3843.674f, 407.221f, -81.17f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (is_bit_set(iVar397, 12))
					{
						iLocal_245 = 948536844;
					}
				}
				else if (is_bit_set(iVar395, 30))
				{
					iLocal_248 = 1632247697;
					if (is_bit_set(iVar397, 9) || is_bit_set(iVar397, 3))
					{
						iLocal_279 = 20;
					}
					else
					{
						iLocal_279 = 18;
					}
				}
				iLocal_244 = -381473693;
				iLocal_247 = 1980374609;
			}
			else
			{
				iLocal_244 = 1234767744;
				iLocal_247 = 2077558044;
				iLocal_245 = -1336911409;
				iLocal_246 = -1029570958;
			}
			StringConCat(&cLocal_249, "desert", 64);
			StringConCat(&cLocal_257, "_desert", 64);
			break;
		case 5:
			if (is_bit_set(iVar397, 10))
			{
				iLocal_248 = 433385945;
				iLocal_244 = 1755785548;
				iLocal_247 = 1481756818;
				if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
				{
					if (is_bit_set(iVar395, 30))
					{
						iLocal_248 = 1500834021;
						func_187(0.839f, 0.768f, 577f, 2412.601f, -2271.631f, -2202.794f);
					}
					else
					{
						iLocal_248 = -702816767;
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (is_bit_set(iVar397, 12))
					{
						iLocal_245 = -1344285417;
					}
				}
				else if (is_bit_set(iVar397, 9) || is_bit_set(iVar397, 3))
				{
					if (is_bit_set(iVar395, 31))
					{
						iLocal_248 = 821931868;
						func_187(0.978f, -0.448f, 329f, 3233.729f, 262.921f, -2070.11f);
					}
					else if (is_bit_set(iVar395, 30))
					{
						iLocal_279 = 19;
						func_187(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
					}
					else
					{
						func_187(0.738f, 0.189f, 803.75f, 1344.11f, 2463.37f, -1726.229f);
					}
				}
				else if (is_bit_set(iVar395, 30))
				{
					iLocal_279 = 19;
					func_187(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
				}
				else
				{
					iLocal_248 = 821931868;
					func_187(0.418f, 0.191f, 698.75f, 487.565f, 1166.487f, -492.181f);
				}
			}
			else
			{
				iLocal_248 = 433385945;
				func_187(0.648f, -0.814f, 481.25f, -2237.9f, -1281.34f, -3051.36f);
				iLocal_244 = 56660208;
				iLocal_247 = 205032683;
				iLocal_245 = 686788855;
				iLocal_246 = -1228362565;
			}
			StringConCat(&cLocal_249, "forest", 64);
			StringConCat(&cLocal_257, "_forest", 64);
			break;
	}
	if (iVar2 != 0)
	{
		if (is_bit_set(iVar395, 31))
		{
			StringConCat(&cLocal_249, "_night", 64);
		}
		else if (is_bit_set(iVar395, 30))
		{
			StringConCat(&cLocal_249, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_249, "_day", 64);
		}
	}
	if (is_bit_set(iVar397, 10))
	{
		vLocal_235 = { -569.954f, -3648.908f, 81.884f };
	}
	vLocal_235 = { vLocal_235 + func_188() };
	vLocal_241 = { vLocal_241 + func_188() };
	set_anim_scene_origin(iLocal_233, vLocal_235, vVar4, 0);
	_0xf01d21df39554115(0);
	set_mapdatacullbox_enabled(&cLocal_257, true);
	set_game_pauses_for_streaming(true);
	_0x19abcc581d28e6f9(1);
	set_bit(&uLocal_397, 9);
	return true;
}

bool func_77()
{
	if (Global_1048684->f_377 == 28)
	{
		return false;
	}
	if (is_bit_set(iVar397, 5))
	{
		iLocal_265 = -1180707366;
	}
	if (!_is_anim_scene_loaded(iLocal_233, true, false) && !_is_anim_scene_metadata_loaded(iLocal_233, false))
	{
		if (!_is_anim_scene_loading(iLocal_233, true))
		{
			load_anim_scene(iLocal_233);
		}
		return false;
	}
	else
	{
		if (is_bit_set(iVar397, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048684->f_376 - 1))
			{
				if (Global_1048684->f_22[iVar1]->f_9)
				{
					iVar0++;
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = -1;
		}
		func_189(Global_1048684->f_466, iVar0);
	}
	if (!is_bit_set(iVar397, 8))
	{
		func_173(iLocal_246);
	}
	return true;
}

bool func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 1;
	if (!func_190(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_190(iParam1))
	{
		iVar0 = 0;
	}
	if (!func_190(iParam2))
	{
		iVar0 = 0;
	}
	if (is_bit_set(iVar393, 8))
	{
		if (!func_190(iParam3))
		{
			iVar0 = 0;
		}
	}
	if (!func_87(&uLocal_366))
	{
		func_93(&uLocal_366, 0, 0);
	}
	else if (func_88(&uLocal_366, 0, 0) > 30000)
	{
		return true;
	}
	return iVar0;
}

bool func_79()
{
	request_model(iVar263, false);
	if (is_bit_set(iVar397, 7))
	{
		request_model(iVar264, false);
	}
	request_model(-1528680970, false);
	request_model(78404028, false);
	request_model(-728725588, false);
	request_model(-1623912517, false);
	request_model(1749359648, false);
	if (((((!has_model_loaded(iVar263) && !has_model_loaded(-1528680970)) && !has_model_loaded(78404028)) && !has_model_loaded(-728725588)) && !has_model_loaded(-1623912517)) && !has_model_loaded(1749359648))
	{
		return false;
	}
	if (is_bit_set(iVar397, 7))
	{
		if (!has_model_loaded(iVar264))
		{
			return false;
		}
	}
	if (func_191(&Local_506) == 0)
	{
		return false;
	}
	if (func_191(&Local_532) == 0)
	{
		return false;
	}
	return true;
}

bool func_80()
{
	return true;
}

bool func_81(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return false;
	}
	_uiflowblock_enter(*uParam0, uParam0->f_1);
	if (!_uistatemachine_exists(*uParam0))
	{
		_uistatemachine_create(*uParam0, *uParam0);
	}
	return true;
}

bool func_82()
{
	if (((_0xd9130842d7226045("RDROADV_Winners_Screen_Sounds", 0) && _0xd9130842d7226045("RDRO_Countdown_Clockwork_Sounds", 0)) && _0xd9130842d7226045("RDRO_Winners_Screen_Sounds", 0)) && _0xd9130842d7226045("RDRO_Camera_Flash_Pulse", 0))
	{
		if (prepare_music_event(&(Global_1048684->f_471)))
		{
			if (!_0x59ea80079b86d8c7(uLocal_14) && !_0x59ea80079b86d8c7(uLocal_15))
			{
				return true;
			}
		}
	}
	return false;
}

void func_83(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = clone_ped(*uParam1, 0f, true, true);
	set_entity_coords(*uParam0, *uParam2, true, false, true, true);
	freeze_entity_position(*uParam0, true);
	clear_ped_tasks_immediately(*uParam0, false, true);
	if (is_ped_dead_or_dying(*uParam0, true))
	{
		revive_injured_ped(*uParam0);
		_set_entity_health(*uParam0, get_entity_max_health(*uParam0, false), 0);
	}
	clear_ped_decorations(*uParam0);
	_0x2208438012482a1a(*uParam0, true, true);
	set_entity_invincible(*uParam0, true);
	set_entity_visible(*uParam0, true);
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		func_131(33);
	}
	else
	{
		func_132(33);
	}
	_0x63e5841a9264d016(bParam0);
}

void func_86()
{
	func_192(0);
}

bool func_87(var uParam0)
{
	return uParam0->f_1;
}

int func_88(var uParam0, bool bParam1, bool bParam2)
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

void func_89(var uParam0)
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

void func_90(var uParam0, bool bParam1)
{
	bVar0 = func_23(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_193(1);
			func_194(&(uParam0->f_199), 1);
			break;
		case 1:
			_0xd9130842d7226045("MP_Leaderboard_Sounds", 1);
			func_194(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = _launch_app_by_hash_with_entry(595204529, func_195(bParam1));
			if (iVar1 == 0)
			{
				func_194(&(uParam0->f_199), 3);
			}
			else if (_is_app_running(595204529))
			{
				func_194(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (_is_app_running(595204529))
			{
				if (!bVar0)
				{
					play_sound_frontend("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				_request_uiapp_transition_by_hash(595204529, func_196());
				func_194(&(uParam0->f_199), 4);
			}
			else if (func_197())
			{
				func_194(&(uParam0->f_199), 2);
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
					func_194(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				clear_bit(&(uParam0->f_158), 13);
				func_194(&(uParam0->f_199), 1);
			}
			else
			{
				func_194(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_170(uParam0, bParam1);
			break;
	}
}

void func_91(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uParam0->f_1 = _databinding_add_data_container(*uParam0, "Title");
	uParam0->f_2 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
	uParam0->f_142 = _databinding_add_ui_item_list(*uParam0, "LeaderboardList");
}

void func_92(int iParam0)
{
	iLocal_389 = iParam0;
}

void func_93(var uParam0, bool bParam1, bool bParam2)
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

void func_94(int iParam0)
{
	if (&Global_1048586 != iParam0)
	{
		Global_1048586 = iParam0;
	}
}

bool func_95()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

bool func_96(int iParam0)
{
	return func_167(1, iParam0);
}

bool func_97()
{
	return (Global_1048576 || Global_2883584) // PointerArith;
}

void func_98(int iParam0)
{
	iVar0 = get_id_of_this_thread();
	if (_does_thread_exist(Global_1940144->f_105.f_1) && Global_1940144->f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144->f_105.f_1 = iVar0;
	Global_1940144->f_105 = iParam0;
}

bool func_99()
{
	return func_198(4);
}

void func_100(int iParam0, bool bParam1)
{
	Global_1102219->f_3520.f_13 = iParam0;
	if (bParam1)
	{
		Global_1102219->f_3520.f_12 = Global_1102219->f_3520.f_13;
	}
}

void func_101()
{
	switch (iVar399)
	{
		case 0:
			if (!is_string_null_or_empty(&(Global_1071686->f_28662.f_22.f_4)))
			{
				Global_1048582 = 1;
				iLocal_402 = _create_anim_scene(&(Global_1071686->f_28662.f_22.f_4), 16512, 0, false, true);
				if (_does_anim_scene_exist(iVar400))
				{
					StringCopy(&(Global_1071686->f_28662.f_22.f_4), "", 128);
					load_anim_scene(iVar400);
					func_199(1);
				}
			}
			else
			{
				do_screen_fade_out(1750);
				func_16(4096);
			}
			break;
		case 1:
			bVar0 = true;
			if (!is_string_null_or_empty(&(Global_1071686->f_28662.f_22.f_20)))
			{
				if (!prepare_music_event(&(Global_1071686->f_28662.f_22.f_20)))
				{
					bVar0 = false;
				}
			}
			if (_is_anim_scene_loaded(iVar400, true, false) && bVar0)
			{
				func_200(0);
				do_screen_fade_in(0);
				start_anim_scene(iVar400);
				if (!is_string_null_or_empty(&(Global_1071686->f_28662.f_22.f_20)))
				{
					trigger_music_event(&(Global_1071686->f_28662.f_22.f_20));
					StringCopy(&(Global_1071686->f_28662.f_22.f_20), "", 128);
				}
				func_45(8192);
				func_199(2);
			}
			break;
		case 2:
			if (!_is_anim_scene_started(iVar400, false))
			{
				do_screen_fade_out(0);
				func_199(3);
			}
			break;
		case 3:
			func_201(0, 0);
			reset_anim_scene(iVar400, 0);
			func_199(0);
			func_16(4096);
			break;
	}
}

void func_102()
{
	if (fVar270 != 0f || fVar271 != 0f)
	{
		_0xb8c984c0d47f4f07(fVar270, fVar271, uVar272);
	}
	if (fVar273 != 0f)
	{
		_0xc332c91388f5580b(fVar273);
	}
	if ((fVar274 != 0f || fVar275 != 0f) || fVar276 != 0f)
	{
		_0xfe7966df01452f32(fVar274, fVar275, fVar276);
	}
}

void func_103()
{
	Local_32.f_159 = &Global_1051114;
	Local_32.f_160 = &Global_1051115;
	iVar0 = Global_1050050->f_14;
	uLocal_283 = Global_1048684->f_20;
	bVar1 = iVar0 > 1;
	if (!is_string_null_or_empty(Global_1050050->f_27[0]))
	{
		func_202();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			Local_287[iVar2]->f_16 = Global_1050050->f_27[iVar2]->f_16;
			*Local_287[iVar2] = { *Global_1050050->f_27[iVar2] };
			Local_287[iVar2]->f_8 = { Global_1050050->f_27[iVar2]->f_8 };
			Local_287[iVar2]->f_17 = Global_1050050->f_27[iVar2]->f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { *Global_1050888 };
	func_91(&Local_32);
	set_bit(&(Local_32.f_159), 11);
	if (is_bit_set(Local_32.f_159, 8))
	{
		clear_bit(&(Local_32.f_159), 8);
	}
	if (is_bit_set(Local_32.f_159, 20))
	{
		clear_bit(&(Local_32.f_159), 20);
	}
	func_203(&Local_32, &(Global_1050050->f_101), Global_1050966, 1, 1, bVar1, iVar281, iVar0, 0, 0, -1);
	func_204(&Local_32, Global_1050958);
}

void func_104()
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	iVar2 = Global_1048684->f_17;
	if (Local_32.f_150 > 1)
	{
		sVar1 = _get_label_text("UIC_EF_WINS");
	}
	else
	{
		sVar1 = _get_label_text("UIC_EF_WIN");
	}
	_databinding_add_data_string(uVar0, "winnerLabelRawText", sVar1);
	_databinding_add_data_int(uVar0, "winnerLabelColor", 1105014447);
	_databinding_add_data_string(uVar0, "winnerNameRawText", &(Global_1048684->f_9));
	_databinding_add_data_int(uVar0, "winnerNameColor", iVar2);
	_databinding_add_data_string(uVar0, "mvpLabelRawText", _get_label_text("UGC_END_MVP"));
	_databinding_add_data_int(uVar0, "mvpLabelColor", Local_287[0]->f_17);
	_databinding_add_data_string(uVar0, "mvpNameRawText", Local_287[0]);
	_databinding_add_data_int(uVar0, "mvpNameColor", Local_287[0]->f_17);
}

void func_105(bool bParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uVar1 = _databinding_add_data_container(uVar0, "likeButton");
	_databinding_add_data_bool(uVar1, "enabled", bParam0);
	uVar2 = _databinding_add_data_container(uVar0, "dislikeButton");
	_databinding_add_data_bool(uVar2, "enabled", bParam0);
	uVar3 = _databinding_add_data_container(uVar0, "revealScoreboardButton");
	_databinding_add_data_bool(uVar3, "enabled", bParam0);
	uVar4 = _databinding_add_data_container(uVar0, "acceptButton");
	_databinding_add_data_bool(uVar4, "enabled", bParam0);
}

void func_106(bool bParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	func_205(bParam0);
	uVar1 = _databinding_add_data_container(uVar0, "revealScoreboardButton");
	_databinding_add_data_bool(uVar1, "visible", bParam0);
	uVar2 = _databinding_add_data_container(uVar0, "acceptButton");
	_databinding_add_data_bool(uVar2, "visible", bParam0);
}

void func_107()
{
	if (is_bit_set(iVar397, 12) || is_bit_set(iVar397, 2))
	{
		_0x3373779baf7caf48("FOG", "fog_MP_Pred");
		_0x3373779baf7caf48("MISTY", "misty_MP_Pred");
		_0x3373779baf7caf48("SHOWER", "shower_MP_Pred");
		_0x3373779baf7caf48("THUNDERSTORM", "thunderstorm_MP_Pred");
	}
	else if (is_bit_set(iVar397, 3))
	{
		_0x0e71c80fa4ec8147("FOG", true);
		_0x0e71c80fa4ec8147("MISTY", true);
		_0x0e71c80fa4ec8147("SHOWER", true);
		_0x0e71c80fa4ec8147("THUNDERSTORM", true);
	}
}

void func_108(int iParam0)
{
	iLocal_391 = iParam0;
}

void func_109()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (Global_1048684->f_22[iVar0]->f_9)
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!is_ped_male(&(uLocal_406[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			set_entity_collision(&(uLocal_406[iVar0]), false, false);
			set_anim_scene_entity(iLocal_233, &cVar3, &(uLocal_406[iVar0]), 0);
		}
		else if (!is_bit_set(iVar397, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!is_ped_male(&(uLocal_406[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			set_entity_collision(&(uLocal_406[iVar0]), false, false);
			set_anim_scene_entity(iLocal_233, &cVar3, &(uLocal_406[iVar0]), 0);
		}
		if (does_entity_exist(&(uLocal_472[iVar0])))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			set_entity_collision(&(uLocal_472[iVar0]), false, false);
			set_anim_scene_entity(iLocal_233, &cVar3, &(uLocal_472[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_110()
{
	_0x65f040d91001ed4b(0);
	_0xce7690c0a0d1c36d(0);
	_set_weather_type(iLocal_248, true, true, false, 0f, false);
	func_168(1);
	if (iVar277 == -1)
	{
		if (is_bit_set(iVar395, 31))
		{
			_network_clock_time_override(0, 0, 0, 0, true);
		}
		else if (is_bit_set(iVar395, 30))
		{
			_network_clock_time_override(18, 0, 0, 0, true);
		}
		else
		{
			_network_clock_time_override(13, 0, 0, 0, true);
		}
	}
	else
	{
		_network_clock_time_override(iVar277, iVar278, 0, 0, true);
	}
	iLocal_282 = get_game_timer();
	set_bit(&uLocal_397, 10);
}

int func_111()
{
	if (!func_206())
	{
		return 0;
	}
	iLocal_505 = iVar503 + 1;
	if (iVar503 < 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!does_entity_exist(Local_506[iVar0]->f_4))
		{
		}
		else
		{
			_set_ped_outfit_preset(get_ped_index_from_entity_index(Local_506[iVar0]->f_4), Global_1048684->f_378[iVar0]->f_1, 0);
			_update_ped_variation(get_ped_index_from_entity_index(Local_506[iVar0]->f_4), false, true, true, true, false);
			func_207(get_ped_index_from_entity_index(Local_506[iVar0]->f_4), Local_506[iVar0]->f_1);
		}
		iVar0++;
	}
	return 1;
}

int func_112()
{
	if (func_208() == 0)
	{
		return 0;
	}
	if (!is_bit_set(iVar398, 5))
	{
		if (is_bit_set(iVar397, 9))
		{
			request_model(219205323, false);
			if (has_model_loaded(219205323))
			{
				iLocal_618 = create_vehicle(219205323, vLocal_238, 0f, false, true, false, false);
				set_entity_collision(iVar616, false, false);
				freeze_entity_position(iVar616, true);
				set_anim_scene_entity(iLocal_233, "cart06", iVar616, 0);
				set_model_as_no_longer_needed(219205323);
				set_bit(&uLocal_400, 5);
				return 1;
			}
			return 0;
		}
		else
		{
			set_bit(&uLocal_400, 5);
		}
	}
	if (!is_bit_set(iVar398, 1))
	{
		request_model(iVar263, false);
		if (is_bit_set(iVar397, 7))
		{
			request_model(iVar264, false);
			if (!has_model_loaded(iVar264))
			{
				return 1;
			}
		}
		if (!Global_1048684->f_466)
		{
			request_model(iVar265, false);
			if (!has_model_loaded(iVar265))
			{
				return 0;
			}
		}
		if (has_model_loaded(iVar263))
		{
			iVar0 = 0;
			while (iVar0 <= (iVar266 - 1))
			{
				if (!does_entity_exist(&(iLocal_543[iVar0])))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048684->f_466)
						{
							iLocal_543[iVar0] = create_object(iVar265, vLocal_238, false, true, false, false, true);
						}
						else if (is_bit_set(iVar397, 7))
						{
							iLocal_543[iVar0] = create_object(iVar264, vLocal_238, false, true, false, false, true);
						}
						else
						{
							iLocal_543[iVar0] = create_object(iVar263, vLocal_238, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_543[iVar0] = create_object(iVar263, vLocal_238, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(iLocal_543[iVar0], cVar1);
				}
				iVar0++;
			}
			set_model_as_no_longer_needed(iVar263);
			if (is_bit_set(iVar397, 7))
			{
				set_model_as_no_longer_needed(iVar264);
			}
			set_bit(&uLocal_400, 1);
		}
		return 0;
	}
	if (!is_bit_set(iVar398, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_210(iVar0))
			{
				if (!does_entity_exist(&(iLocal_560[iVar0])) && is_bit_set(iVar391, iVar0))
				{
					iLocal_560[iVar0] = _create_weapon_object(-183018591, 1, vLocal_238, true, 1f);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(iLocal_560[iVar0], cVar1);
				}
			}
			iVar0++;
		}
		set_bit(&uLocal_400, 4);
		return 0;
	}
	if (!is_bit_set(iVar398, 3))
	{
		if (is_bit_set(iVar397, 6))
		{
			request_model(-728725588, false);
			request_model(-1623912517, false);
			request_model(1749359648, false);
			if ((has_model_loaded(-728725588) && has_model_loaded(-1623912517)) && has_model_loaded(1749359648))
			{
				if (!does_entity_exist(&(iLocal_612[0])))
				{
					iLocal_612[0] = create_object(-728725588, vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_209(iLocal_612[0], cVar1);
				}
				if (!does_entity_exist(&(iLocal_612[1])))
				{
					iLocal_612[1] = create_object(-1623912517, vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_209(iLocal_612[1], cVar1);
				}
				if (!does_entity_exist(&(iLocal_612[2])))
				{
					iLocal_612[2] = create_object(1749359648, vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_209(iLocal_612[2], cVar1);
				}
				set_model_as_no_longer_needed(-728725588);
				set_model_as_no_longer_needed(-1623912517);
				set_model_as_no_longer_needed(1749359648);
				set_bit(&uLocal_400, 3);
				return 0;
			}
		}
		else
		{
			request_model(-2131982726, false);
			if (has_model_loaded(-2131982726))
			{
				iVar0 = 0;
				while (iVar0 <= (iVar267 - 1))
				{
					if (!does_entity_exist(&(iLocal_612[iVar0])))
					{
						iLocal_612[iVar0] = create_object(-2131982726, vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(iLocal_612[iVar0], cVar1);
					}
					iVar0++;
				}
				set_model_as_no_longer_needed(-2131982726);
				set_bit(&uLocal_400, 3);
				return 0;
			}
		}
	}
	if (!is_bit_set(iVar398, 2))
	{
		request_model(-1528680970, false);
		if (has_model_loaded(-1528680970))
		{
			iVar0 = 0;
			while (iVar0 <= (iVar268 - 1))
			{
				if (!does_entity_exist(&(iLocal_595[iVar0])))
				{
					iLocal_595[iVar0] = create_object(-1528680970, vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(iLocal_595[iVar0], cVar1);
				}
				iVar0++;
			}
			set_model_as_no_longer_needed(-1528680970);
			set_bit(&uLocal_400, 2);
			return 0;
		}
	}
	if (!is_bit_set(iVar398, 6))
	{
		request_model(-1971689092, false);
		if (has_model_loaded(-1971689092))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_210(iVar0))
				{
					if (!does_entity_exist(&(iLocal_577[iVar0])) && is_bit_set(iVar392, iVar0))
					{
						iLocal_577[iVar0] = create_object(-1971689092, vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(iLocal_577[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			set_bit(&uLocal_400, 6);
			return 0;
		}
	}
	if (!is_bit_set(iVar398, 7))
	{
		request_model(1666862677, false);
		if (has_model_loaded(1666862677))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_210(iVar0))
				{
					if (!does_entity_exist(&(iLocal_586[iVar0])) && is_bit_set(iVar393, iVar0))
					{
						iLocal_586[iVar0] = create_object(1666862677, vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(iLocal_586[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			set_bit(&uLocal_400, 7);
			return 0;
		}
	}
	if ((((((is_bit_set(iVar398, 3) && is_bit_set(iVar398, 2)) && is_bit_set(iVar398, 1)) && is_bit_set(iVar398, 6)) && is_bit_set(iVar398, 7)) && is_bit_set(iVar398, 4)) && is_bit_set(iVar398, 5))
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	if (!func_87(&uLocal_370))
	{
		func_93(&uLocal_370, 0, 0);
	}
	else if (func_88(&uLocal_370, 0, 0) >= 8500)
	{
		return 1;
	}
	return 0;
}

void func_114(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_115()
{
	iVar0 = get_player_index();
	iVar1 = get_player_ped(iVar0);
	if (is_ped_dead_or_dying(iVar1, true))
	{
		resurrect_ped(iVar1);
	}
	if (_is_ped_hogtied(iVar1))
	{
		_0x79559bad83ccd038(iVar1, 3, 0, 0, 0, 1090519040);
	}
	if (_0xb655db7582aec805(iVar1))
	{
		_0xf6262491c7704a63(iVar1, 0);
	}
	_0x64ff4bf9af59e139(iVar0, 1);
}

void func_116()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (does_entity_exist(&(uLocal_406[iVar0])))
		{
			freeze_entity_position(&(uLocal_406[iVar0]), true);
			set_entity_invincible(&(uLocal_406[iVar0]), true);
			if (is_ped_dead_or_dying(&(uLocal_406[iVar0]), true))
			{
				resurrect_ped(&(uLocal_406[iVar0]));
			}
			clear_ped_tasks_immediately(&(uLocal_406[iVar0]), false, true);
			set_blocking_of_non_temporary_events(&(uLocal_406[iVar0]), true);
			_0xc991ef46fe323867(&(uLocal_406[iVar0]), 1);
			_0x2208438012482a1a(&(uLocal_406[iVar0]), true, true);
		}
		if (does_entity_exist(&(Global_1048684->f_22[iVar0])))
		{
			delete_ped(Global_1048684->f_22[iVar0]);
		}
		iVar0++;
	}
}

void func_117(var uParam0, bool bParam1)
{
	func_127();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam0)[iVar0]->f_14 == 255 || (*uParam0)[iVar0]->f_14 == iVar399)
		{
		}
		else if (!network_is_player_active((*uParam0)[iVar0]->f_14))
		{
		}
		else
		{
			func_211((*uParam0)[iVar0]->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = _0x901e0dc25080c8b9(iVar399);
		if ((_0xd6f6acf4392187fb(iVar1) && _0x0f99f6436528a089(iVar1)) && _0x93a91a351a07360e(iVar1))
		{
			iVar53 = _0xd1bf325c8252a982(iVar1, &Var3);
			if (iVar53 > 1 && iVar53 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar53 - 1))
				{
					iVar54 = network_get_player_from_gamer_handle(Var3[iVar2]);
					if (iVar54 == 255 || iVar54 == iVar399)
					{
					}
					else if (!network_is_player_active(iVar54))
					{
					}
					else if (!network_is_gamer_in_my_session(Var3[iVar2]))
					{
					}
					else
					{
						func_211(iVar54);
					}
					iVar2++;
				}
			}
		}
	}
}

bool func_118()
{
	if (!func_87(&uLocal_372))
	{
		func_93(&uLocal_372, 0, 0);
	}
	if (func_212())
	{
		if (func_88(&uLocal_372, 0, 0) < 0 && iVar361 > 2000)
		{
			bVar0 = true;
		}
		else if (func_88(&uLocal_372, 0, 0) > 8500)
		{
			bVar0 = true;
		}
		else if (_0x0909f71b5c070797() && func_88(&uLocal_372, 0, 0) > 4500)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (iLocal_233 != -1)
			{
				if (!_is_anim_scene_started(iLocal_233, false))
				{
					start_anim_scene(iLocal_233);
					return false;
				}
				else
				{
					func_19(&uLocal_16, 0);
					return true;
				}
			}
		}
		else
		{
			uLocal_363 = iVar361 + 1;
		}
	}
	return false;
}

void func_119(int iParam0)
{
	iLocal_390 = iParam0;
}

bool func_120()
{
	if (!_is_anim_scene_started(iLocal_233, false))
	{
		return false;
	}
	fVar0 = _get_anim_scene_progress(iLocal_233);
	if (fVar0 > 0.92f)
	{
		return true;
	}
	if (_is_anim_scene_active(iLocal_233) || _0xf94692eb9dc15d74(iLocal_233, 0))
	{
		return true;
	}
	if (func_87(&uLocal_372) && func_88(&uLocal_372, 0, 0) > 30000)
	{
		return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	if (bParam0 && is_string_null_or_empty(Local_287[0]))
	{
		return;
	}
	_databinding_add_data_bool(uVar0, "showMvpComponent", bParam0);
}

void func_122(bool bParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	_databinding_add_data_bool(uVar0, "showWinnerComponent", bParam0);
}

void func_123()
{
	iVar0 = player_id();
	sVar1 = get_player_name(iVar0);
	if ((network_is_player_active(iVar0) && !is_string_null_or_empty(Local_287[0])) && are_strings_equal(Local_287[0], sVar1))
	{
		Var2 = { func_53(1329559622, 0) };
		_0x6a0184e904cdf25e(&Var2, 1);
		Global_1049159->f_8 = 1;
		Global_1049269 = &Global_1049269 + 1;
	}
	else
	{
		Global_1049269 = 0;
	}
	Var4 = { func_53(382097737, 701412595) };
	_0x91a4f58e01ed5e4c(&Var4, &Global_1049269);
}

void func_124(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else if (func_213(&((*uParam1)[iVar0]->f_14)))
		{
			func_214(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_125(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 == 255)
		{
		}
		else
		{
			func_215(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

bool func_126()
{
	iVar4 = 361663434;
	if (!func_216())
	{
		if (_event_manager_is_event_pending(iVar4))
		{
			if (_event_manager_peek_event(iVar4, &vVar0))
			{
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -871313792 && !is_bit_set(iVar395, 3))
						{
							func_217(1, 0);
							play_sound_frontend("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1691214074 && !is_bit_set(iVar395, 3))
						{
							func_217(0, 0);
							play_sound_frontend("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1823128591)
						{
							func_218(&uLocal_286);
						}
						else if (vVar0.z == 1535578700)
						{
							func_219();
							do_screen_fade_out(150);
							play_sound_frontend("enter", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						break;
				}
				_event_manager_pop_event(iVar4);
			}
		}
	}
	else
	{
		if (_event_manager_is_event_pending(iVar4))
		{
			_event_manager_pop_event(iVar4);
		}
		return true;
	}
	return false;
}

void func_127()
{
	if (_0x179a6f0ee2e79026(&(Global_1071686->f_22961.f_5)))
	{
		Global_1071686->f_22961.f_5 = uVar0;
	}
}

void func_128()
{
	iVar0 = func_221(func_220());
	if (!is_bit_set(iVar395, 6))
	{
		if (iVar0 > 0)
		{
			set_bit(&uLocal_397, 6);
			func_222(&Local_32, &uLocal_232, iVar0);
		}
	}
	else if (iVar0 < 0)
	{
		func_175(&Local_32, &uLocal_232);
	}
	else
	{
		func_223(&uLocal_232, iVar0);
	}
}

void func_129()
{
	if (!is_bit_set(iVar396, 2))
	{
		if (func_224(&(Global_1048684->f_435)))
		{
			fVar4 = (to_float(Global_1048684->f_447) / 100f);
			StringCopy(&cVar0, func_225(fVar4, 2), 32);
			func_226(&Local_32, &cVar0);
			if (Global_1048684->f_470 != 0)
			{
				func_54(func_53(1532301684, Global_1048684->f_470), Global_1048684->f_447);
			}
			set_bit(&uLocal_398, 2);
		}
	}
	if (!is_bit_set(iVar396, 3))
	{
		bVar5 = (func_224(&(Global_1048684->f_403)) && func_224(&(Global_1048684->f_419)));
		if (bVar5)
		{
			fVar6 = (to_float((Global_1048684->f_403.f_8 + Global_1048684->f_419.f_8)) / 100f);
			StringCopy(&cVar7, func_225(fVar6, 2), 32);
			func_227(&Local_32, &cVar7);
			iVar11 = (Global_1048684->f_403.f_6 + Global_1048684->f_419.f_6);
			_int_to_string(iVar11, "%d", &cVar12);
			func_228(&Local_32, &cVar12);
			if (Global_1048684->f_470 != 0)
			{
				func_54(func_53(-1901704681, Global_1048684->f_470), (Global_1048684->f_403.f_8 + Global_1048684->f_419.f_8));
			}
			set_bit(&uLocal_398, 3);
		}
	}
}

void func_130(int iParam0)
{
	func_229(&(Global_1071686->f_23887.f_4), iParam0);
}

int func_131(int iParam0)
{
	if (func_230(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_231(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_133()
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
	if (func_232(2048))
	{
		return true;
	}
	if (func_233(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_135(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_136(int iParam0)
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
		func_234();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_138(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	StringCopy(&cVar0, get_player_name(iParam3), 64);
	iVar40 = func_235(uParam0, iParam3);
	if (!is_bit_set(uParam2->f_15, 0))
	{
		return;
	}
	if (bParam4)
	{
		StringCopy(&cVar16, _create_var_string(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar41, "POS_", 16);
		StringIntConCat(&cVar41, iVar40 + 1, 16);
		StringCopy(&cVar8, _create_var_string(2, &cVar41), 64);
		if ((round((*uParam0)[iVar40]->f_7) == 88400000 || round((*uParam0)[iVar40]->f_7) == 72800000) || round((*uParam0)[iVar40]->f_7) == 86400000)
		{
			StringCopy(&cVar16, _create_var_string(2, "POS_OOT"), 64);
		}
		else
		{
			set_bit(&iVar43, 7);
			StringCopy(&cVar16, _create_var_string(10, "UIC_EF_TIM", func_236(round((*uParam0)[iVar40]->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_237((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar49 = func_238((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar50 = func_239((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar51 = func_240((*uParam0)[iVar40]);
		Var52 = { func_241(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_242(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_243(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_244(&bVar47) };
		if (!is_string_null_or_empty(&Var52))
		{
			if (bVar44)
			{
				IntToString(&cVar68, iVar48, 32);
				StringConCat(&cVar68, " ", 32);
				StringConCat(&cVar68, &Var52, 32);
				StringCopy(&cVar8, _create_var_string(10, "LITERAL_STRING", &cVar68), 64);
			}
			else
			{
				cVar68 = { Var52 };
				StringCopy(&cVar8, _create_var_string(2, &cVar68, iVar48), 64);
			}
		}
		if (!is_string_null_or_empty(&Var56))
		{
			if (bVar45)
			{
				IntToString(&cVar72, iVar49, 32);
				StringConCat(&cVar72, " ", 32);
				StringConCat(&cVar72, &Var56, 32);
				StringCopy(&cVar16, _create_var_string(10, "LITERAL_STRING", &cVar72), 64);
			}
			else
			{
				cVar72 = { Var56 };
				StringCopy(&cVar16, _create_var_string(2, &cVar72, iVar49), 64);
			}
		}
		if (!is_string_null_or_empty(&Var60))
		{
			if (bVar46)
			{
				IntToString(&cVar76, iVar50, 32);
				StringConCat(&cVar76, " ", 32);
				StringConCat(&cVar76, &Var60, 32);
				StringCopy(&cVar24, _create_var_string(10, "LITERAL_STRING", &cVar76), 64);
			}
			else
			{
				cVar76 = { Var60 };
				StringCopy(&cVar24, _create_var_string(2, &cVar76, iVar50), 64);
			}
		}
		if (!is_string_null_or_empty(&Var64))
		{
			if (bVar47)
			{
				IntToString(&cVar80, iVar51, 32);
				StringConCat(&cVar80, " ", 32);
				StringConCat(&cVar80, &Var64, 32);
				StringCopy(&cVar32, _create_var_string(10, "LITERAL_STRING", &cVar80), 64);
			}
			else
			{
				cVar80 = { Var64 };
				StringCopy(&cVar32, _create_var_string(2, &cVar80, iVar51), 64);
			}
		}
	}
	func_139(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, 109029619);
	func_19(uParam2, 1);
}

void func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_4))
	{
		_databinding_write_data_string(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = _databinding_add_data_string(uParam0->f_3, "gamerTag", sParam1);
	}
	if (_databinding_is_data_id_valid(uParam0->f_5))
	{
		_databinding_write_data_string(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = _databinding_add_data_string(uParam0->f_3, "teamName", sParam2);
	}
	if (_databinding_is_data_id_valid(uParam0->f_12))
	{
		_databinding_write_data_int(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = _databinding_add_data_int(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[0])))
	{
		_databinding_write_data_string(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = _databinding_add_data_string(uParam0->f_3, "info0", sParam3);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[1])))
	{
		_databinding_write_data_string(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = _databinding_add_data_string(uParam0->f_3, "info1", sParam4);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[2])))
	{
		_databinding_write_data_string(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = _databinding_add_data_string(uParam0->f_3, "info2", sParam5);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[3])))
	{
		_databinding_write_data_string(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = _databinding_add_data_string(uParam0->f_3, "info3", sParam6);
	}
}

bool func_140(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return false;
	}
	if (is_bit_set(uParam0->f_15, 0))
	{
		return true;
	}
	if (!_0xf7c180f57f85d0b8(*uParam0))
	{
		func_81(uParam0);
		return false;
	}
	_uistatemachine_request_transition(*uParam0, uParam0->f_2);
	set_bit(&(uParam0->f_15), 0);
	return true;
}

bool func_141()
{
	return Global_1896738->f_382;
}

void func_142()
{
	func_245(0);
}

bool func_143()
{
	return Global_1940311->f_1;
}

void func_144()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_145(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_146(int iParam0)
{
	return &Global_262152 == iParam0;
}

bool func_147()
{
	return _0xa14d5fe82bcb1d9e();
}

void func_148(int iParam0)
{
	clear_bit(Global_1048684, iParam0);
}

void func_149(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_132(66);
		if (bParam1)
		{
			func_132(69);
		}
	}
	else
	{
		func_131(66);
		func_131(69);
	}
}

void func_150(int iParam0)
{
	func_229(Global_1051134, iParam0);
}

void func_151(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		StringCopy(&cVar0, _0x6c4dbf553885f9eb(vParam0), 64);
		StringCopy(&cVar8, _0x2b6846401d68e563(fParam3, 4), 64);
		Global_1102219->f_3837 = { vParam0 };
		Global_1102219->f_3840 = fParam3;
		func_132(50);
	}
	else
	{
		func_131(50);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_132(62);
		if (bParam1)
		{
			func_132(69);
		}
	}
	else
	{
		func_131(62);
		func_131(50);
		func_131(69);
	}
}

int func_153(vector3 vParam0, var uParam3)
{
	if (func_145(vParam0))
	{
		return 0;
	}
	if (func_246(255) == 4)
	{
		return 0;
	}
	if (func_167(4, 255))
	{
	}
	func_132(4);
	func_247(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_248(Global_1102219->f_3879, 36);
	return 1;
}

int func_154()
{
	return Global_1893587->f_2;
}

void func_155(int iParam0, bool bParam1)
{
	if (!func_249(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_132(88);
	if (func_250(iParam0, &uVar0))
	{
		func_251(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_131(0);
		}
		return;
	}
	func_252(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_131(0);
	}
}

bool func_156()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_157(bool bParam0)
{
	if (_does_thread_exist(&Global_1051138))
	{
		_0x7de4643157ad646c(&Global_1051138);
		return false;
	}
	request_script("net_ugc_end_flow_transition_handler");
	if (has_script_loaded("net_ugc_end_flow_transition_handler"))
	{
		Global_1051137 = 0;
		Global_1051138 = start_new_script_with_args("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		set_script_as_no_longer_needed("net_ugc_end_flow_transition_handler");
		return true;
	}
	return false;
}

void func_158()
{
	Global_1051137 = 1;
}

void func_159()
{
	Global_1071686->f_28662.f_3 = 0;
	Global_1071686->f_28662.f_4 = 0;
}

void func_160()
{
	func_253(2);
}

void func_161(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 - (Global_1102219->f_26.f_9 && iParam0));
}

void func_162()
{
	if (func_246(255) == 4 || func_255(0))
	{
		Global_1102219->f_3955 = 1;
		return;
	}
	bVar0 = func_255(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102219->f_4[iVar1] = 0;
		iVar1++;
	}
	func_132(109);
	func_132(131);
	if (bVar0)
	{
		func_132(36);
	}
	Global_1102219->f_3952 = 0;
	Global_1102219->f_3953 = 0;
	Global_1102219->f_3954 = 0;
	Global_1102219->f_3955 = 0;
}

void func_163(bool bParam0)
{
	if (!bParam0)
	{
		func_131(29);
	}
	else
	{
		func_132(29);
	}
}

void func_164(bool bParam0)
{
	if (!bParam0)
	{
		func_131(15);
	}
	else
	{
		func_132(15);
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_256(uParam0, iVar1, iParam2);
}

void func_166()
{
	_0x93624b36e8851b42(get_player_index());
}

bool func_167(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_257(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_258())
	{
		return func_257(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_257(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_168(int iParam0)
{
	if (&Global_1049271 != iParam0)
	{
		Global_1049271 = iParam0;
	}
}

void func_169(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
}

void func_170(var uParam0, bool bParam1)
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
		func_171(&(uParam0->f_162));
	}
	func_193(0);
}

void func_171(var uParam0)
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

void func_172()
{
	Global_1071686->f_15 = 0;
	Global_1071686->f_14 = 50f;
}

int func_173(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_259())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

void func_174()
{
	if (iLocal_233 != -1)
	{
		abort_anim_scene(iLocal_233, false);
		func_260(&Local_506);
		func_261(&Local_506);
		func_260(&Local_532);
		func_261(&Local_532);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (does_entity_exist(&(Global_1048684->f_22[iVar0])))
			{
				delete_ped(Global_1048684->f_22[iVar0]);
			}
			if (does_entity_exist(&(uLocal_406[iVar0])))
			{
				delete_ped(uLocal_406[iVar0]);
			}
			iVar0++;
		}
		if (iLocal_233 != -1)
		{
			abort_anim_scene(iLocal_233, false);
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (does_entity_exist(&(iLocal_543[iVar0])))
				{
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_543[iVar0]));
					delete_object(iLocal_543[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (does_entity_exist(&(iLocal_612[iVar0])))
				{
					StringCopy(&cVar1, "CRATE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_612[iVar0]));
					delete_object(iLocal_612[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (does_entity_exist(&(iLocal_560[iVar0])))
				{
					StringCopy(&cVar1, "RIFLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_560[iVar0]));
					delete_object(iLocal_560[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (does_entity_exist(&(iLocal_577[iVar0])))
				{
					StringCopy(&cVar1, "JD_BOTTLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_577[iVar0]));
					delete_object(iLocal_577[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (does_entity_exist(&(iLocal_586[iVar0])))
				{
					StringCopy(&cVar1, "SHOVEL_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_586[iVar0]));
					delete_object(iLocal_586[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (does_entity_exist(&(iLocal_595[iVar0])))
				{
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					remove_anim_scene_entity(iLocal_233, &cVar1, &(iLocal_595[iVar0]));
					delete_object(iLocal_595[iVar0]);
				}
				iVar0++;
			}
		}
		reset_anim_scene(iLocal_233, 0);
		iLocal_233 = -1;
	}
}

void func_175(var uParam0, var uParam1)
{
	_databinding_add_data_string(*uParam0, "gameStartTimerLabel", " ");
	_databinding_remove_data_entry(*uParam1);
}

void func_176(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

int func_177(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_262(iParam2, -372840566);
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
	func_263(uParam1, iParam0, Var3);
	return 1;
}

void func_178(var uParam0, bool bParam1)
{
	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= (func_264(16385) - 1))
	{
		iVar2 = func_265(iVar1);
		func_266(iVar2, func_74(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_268 = iParam0;
	iLocal_269 = iParam1;
	iLocal_270 = iParam2;
	iLocal_271 = iParam3;
	if (iVar265 == 1)
	{
	}
}

void func_180(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	StringCopy(&cVar0, sParam2, 24);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (!func_74(&(Global_1048684->f_378[iVar3]), 4))
		{
		}
		else
		{
			if (func_74(&(Global_1048684->f_378[iVar3]), 2))
			{
				Local_506[iVar3] = iParam1;
			}
			else
			{
				Local_506[iVar3] = iParam0;
			}
			StringCopy(&cVar0, sParam2, 24);
			if (iVar3 < 10)
			{
				StringConCat(&cVar0, "0", 24);
			}
			StringIntConCat(&cVar0, iVar3 + 1, 24);
			if (bParam3 && func_74(&(Global_1048684->f_378[iVar3]), 2))
			{
				StringConCat(&cVar0, "F", 24);
			}
			Local_506[iVar3]->f_1 = { cVar0 };
		}
		iVar3++;
	}
}

void func_181(int iParam0, char* sParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&Local_532[iVar0] != 0)
		{
		}
		else
		{
			StringCopy(&cVar1, sParam1, 24);
			if (iVar0 < 10)
			{
				StringConCat(&cVar1, "0", 24);
			}
			StringIntConCat(&cVar1, iVar0 + 1, 24);
			if (!bParam2)
			{
				StringConCat(&cVar1, "F", 24);
			}
			Local_532[iVar0]->f_1 = { cVar1 };
			Local_532[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

void func_182(int iParam0)
{
	set_bit(&uLocal_393, iParam0);
}

void func_183(int iParam0)
{
	set_bit(&uLocal_394, iParam0);
}

void func_184(int iParam0)
{
	set_bit(&uLocal_395, iParam0);
}

void func_185()
{
	if (iLocal_233 == -1)
	{
		iLocal_233 = _create_anim_scene(sLocal_234, 130, 0, false, true);
	}
}

int func_186(vector3 vParam0)
{
	return func_267(_get_map_zone_at_coords(vParam0, 10));
}

void func_187(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fLocal_272 = fParam0;
	fLocal_273 = fParam1;
	fLocal_275 = fParam2;
	fLocal_276 = fParam3;
	fLocal_277 = fParam4;
	fLocal_278 = fParam5;
}

Vector3 func_188()
{
	switch (iLocal_244)
	{
		case -1645988897:
		case 231100670:
			return 0f, -440f, 0f;
		case -1793687930:
		case 505174455:
			return 0f, -880f, 0f;
		case -381473693:
		case 1234767744:
			return 0f, -1320f, 0f;
		case 56660208:
		case 1755785548:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_189(bool bParam0, int iParam1)
{
	if (func_268(iParam1))
	{
		return;
	}
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			set_anim_scene_int(iLocal_233, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			set_anim_scene_int(iLocal_233, "CameraIndex", 2, false);
		}
		else
		{
			set_anim_scene_int(iLocal_233, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		set_anim_scene_int(iLocal_233, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		set_anim_scene_int(iLocal_233, "CameraIndex", 11, false);
	}
	else
	{
		set_anim_scene_int(iLocal_233, "CameraIndex", 10, false);
	}
}

bool func_190(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return true;
	}
	if (func_259())
	{
		return false;
	}
	_request_imap(iParam0);
	return false;
}

int func_191(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_269(iParam0[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_192(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

void func_193(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_195(bool bParam0)
{
	if (bParam0)
	{
		return 1022890889;
	}
	return -987928333;
}

int func_196()
{
	return 205122612;
}

bool func_197()
{
	if (Global_1940144->f_20 && Global_1940144->f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

void func_199(int iParam0)
{
	iLocal_401 = iParam0;
}

void func_200(int iParam0)
{
	if (is_bit_set(iVar618, iParam0))
	{
	}
	else
	{
		set_bit(&uLocal_621, iParam0);
		_hide_hud_component(func_270(iParam0));
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (is_bit_set(iVar617, iParam0) || bParam1)
	{
		clear_bit(&uLocal_621, iParam0);
		_display_hud_component(func_270(iParam0));
	}
}

void func_202()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (are_strings_equal(&(Global_1050050->f_101[iVar0]->f_14.f_1), Global_1050050->f_27[0]))
		{
			Global_1050050->f_101[iVar0]->f_13 = 1;
			return;
		}
		else
		{
			Global_1050050->f_101[iVar0]->f_13 = 0;
		}
		iVar0++;
	}
}

void func_203(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_271(uParam0, uParam1, uParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_272(uParam0, uParam1, bParam5, iParam6, uParam2, is_bit_set(uParam0->f_159, 5), iParam10);
}

void func_204(var uParam0, char* sParam1)
{
	if (!is_bit_set(uParam0->f_158, 7))
	{
		set_bit(&(uParam0->f_158), 7);
		_databinding_add_data_string(uParam0->f_1, "Heading", sParam1);
	}
}

void func_205(bool bParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	uVar1 = _databinding_add_data_container(uVar0, "likeButton");
	_databinding_add_data_bool(uVar1, "visible", bParam0);
	_databinding_add_data_bool(uVar1, "enabled", bParam0);
	uVar2 = _databinding_add_data_container(uVar0, "dislikeButton");
	_databinding_add_data_bool(uVar2, "visible", bParam0);
	_databinding_add_data_bool(uVar2, "enabled", bParam0);
}

bool func_206()
{
	if (!func_74(&(Global_1048684->f_378[iVar503]), 4))
	{
		return true;
	}
	if (&Local_506[iVar503] == 0)
	{
		return true;
	}
	Local_506[iVar503]->f_4 = create_ped(&(Local_506[iVar503]), vLocal_235, 0f, false, true, false, false);
	return true;
}

void func_207(int iParam0, var uParam1, var uParam2, var uParam3)
{
	set_entity_collision(iParam0, false, false);
	freeze_entity_position(iParam0, true);
	set_anim_scene_entity(iLocal_233, &uParam1, iParam0, 0);
}

int func_208()
{
	if (is_bit_set(iVar397, 8))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&Local_532[iVar0] == 0)
		{
		}
		else
		{
			Local_532[iVar0]->f_4 = create_object(&(Local_532[iVar0]), vLocal_235, false, true, false, false, true);
			func_273(get_object_index_from_entity_index(Local_532[iVar0]->f_4), Local_532[iVar0]->f_1);
		}
		iVar0++;
	}
	set_bit(&uLocal_399, 8);
	return 1;
}

void func_209(var uParam0, char[4] cParam1, char[4] cParam2)
{
	set_entity_collision(*uParam0, false, false);
	freeze_entity_position(*uParam0, true);
	set_anim_scene_entity(iLocal_233, &cParam1, *uParam0, 0);
}

bool func_210(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (Global_1048684->f_22[iVar0]->f_9)
		{
			if (iVar1 == iParam0)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_211(int iParam0)
{
	if (!_0x72b2e00c9bac6789(&(Global_1071686->f_22961.f_5), iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_22961.f_5), iParam0);
		func_274(iParam0);
	}
}

bool func_212()
{
	switch (iVar390)
	{
		case 0:
			func_275();
			return false;
		case 1:
			func_276();
			return false;
		case 2:
			func_277();
			return false;
		default:
			break;
	}
	return iVar390 == 3;
}

bool func_213(var uParam0)
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

void func_214(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_278() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_279(uParam0, *uParam1)}, 8);
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

void func_215(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar1 = player_id();
	bVar2 = iVar1 == (*uParam1)[iParam2]->f_14;
	iVar0 = func_280(uParam0, uParam1, iParam2, iVar1, bVar2);
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

bool func_216()
{
	return is_bit_set(iVar395, 8);
}

void func_217(bool bParam0, bool bParam1)
{
	func_205(0);
	if (!bParam1)
	{
		Local_380 = &Global_1050949;
		Local_380.f_2 = Global_1050949->f_2;
		Local_380.f_1 = Global_1050949->f_1;
		Local_380.f_3 = Global_1050949->f_3;
		Local_380.f_5 = 0;
		Local_380.f_7 = Global_1050949->f_7;
		Local_380.f_8 = Global_1050949->f_8;
		if (func_51(2) || func_51(4))
		{
			Local_380.f_4 = 1;
		}
		else
		{
			Local_380.f_4 = 0;
		}
		if (bParam0)
		{
			Local_380.f_6 = 1f;
		}
		else
		{
			Local_380.f_6 = -1f;
		}
		_0xef3c68f56bad7b69(Global_1050925, &Local_380);
		func_66(-304137656, 0, 255, 0, 0);
	}
	set_bit(&uLocal_397, 3);
}

void func_218(var uParam0)
{
	uVar0 = _databinding_add_data_container_from_path("", "PostMatchAndLeaderboard");
	if (*uParam0)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 1;
	}
	_databinding_add_data_bool(uVar0, "revealScoreboard", *uParam0);
}

void func_219()
{
	func_281();
	func_105(0);
	func_98(0);
}

int func_220()
{
	if (func_21(1))
	{
		return Global_265377->f_124517.f_71.f_18;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_18 != 2147483647)
	{
		return (*Global_263042)[&Global_1296859]->f_1.f_18;
	}
	return -1;
}

int func_221(int iParam0)
{
	iVar1 = func_282();
	switch (iVar1)
	{
		case -1:
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (&Global_262155->f_1[iVar0] == iParam0)
				{
					return Global_262155->f_1[iVar0]->f_4;
				}
				iVar0++;
			}
			return -1;
		case 1:
			if (&Global_262155->f_1[Global_262155->f_162] == 2147483647)
			{
				return -1;
			}
			return Global_262155->f_1[Global_262155->f_162]->f_4;
		default:
			break;
	}
	return -1;
}

void func_222(var uParam0, var uParam1, int iParam2)
{
	_databinding_add_data_string(*uParam0, "gameStartTimerLabel", _get_label_text("GAME_START_TIMER"));
	*uParam1 = _databinding_add_data_string(*uParam0, "gameStartTimer", func_283(iParam2));
}

void func_223(var uParam0, int iParam1)
{
	_databinding_write_data_string(*uParam0, func_283(iParam1));
}

bool func_224(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_225(float fParam0, int iParam1)
{
	sVar0 = _0x2b6846401d68e563(fParam0, iParam1);
	return func_284(sVar0, 109029619);
}

void func_226(var uParam0, char* sParam1)
{
	_databinding_write_data_bool_from_parent(*uParam0, "info_visible_06", true);
	_databinding_write_data_string_from_parent(*uParam0, "info_value_06", sParam1);
}

void func_227(var uParam0, char* sParam1)
{
	_databinding_write_data_bool_from_parent(*uParam0, "info_visible_07", true);
	_databinding_write_data_string_from_parent(*uParam0, "info_value_07", sParam1);
}

void func_228(var uParam0, char* sParam1)
{
	_databinding_write_data_bool_from_parent(*uParam0, "info_visible_08", true);
	_databinding_write_data_string_from_parent(*uParam0, "info_value_08", sParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_230(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_231(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_232(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_233(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

void func_234()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_235(var uParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return 0;
	}
	sVar1 = get_player_name(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam0)[iVar0]->f_14 == iParam1 || are_strings_equal(&((*uParam0)[iVar0]->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

char* func_236(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	else if ((is_bit_set(iParam1, 3) || is_bit_set(iParam1, 4)) || is_bit_set(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return _get_label_text("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return _get_label_text("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return _get_label_text("POS_ELIM");
		}
		else if (iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	if (is_bit_set(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_286(&cVar0);
}

int func_237(var uParam0, int iParam1, var uParam2)
{
	fVar0 = uParam0->f_1;
	if (func_72())
	{
		func_287(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return round(fVar0);
}

int func_238(var uParam0, int iParam1, int iParam2)
{
	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 1);
	}
	else
	{
		if (is_bit_set(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (is_bit_set(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return round(fVar0);
}

int func_239(var uParam0, int iParam1, int iParam2)
{
	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 19) || is_bit_set(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return round(fVar0);
}

int func_240(var uParam0)
{
	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 3);
	}
	return round(fVar0);
}

struct<4> func_241(int iParam0, int iParam1, bool bParam2)
{
	if (func_72())
	{
		MemCopy(&cVar0, {func_288(0, bParam2)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_242(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_72())
	{
		MemCopy(&cVar0, {func_288(1, bParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (is_bit_set(iParam2, 1) || is_bit_set(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (is_bit_set(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_243(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_72())
	{
		MemCopy(&cVar0, {func_288(2, bParam3)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (is_bit_set(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_244(bool bParam0)
{
	if (func_72())
	{
		MemCopy(&Var0, {func_288(3, bParam0)}, 4);
	}
	return Var0;
}

void func_245(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

int func_246(int iParam0)
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

void func_247(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_248(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_249(var uParam0, int iParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_289(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_290(uVar0, iVar2, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_250(int iParam0, var uParam1)
{
	if (!func_291(iParam0))
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

void func_251(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_246(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_145(uParam0->f_17.f_6))
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
	if (func_145(uParam1->f_6))
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
	func_132(0);
	func_132(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_292(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_293(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_294(Global_1102219->f_3849, 36);
	func_295(Global_1102219->f_3888, 36);
}

void func_252(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_296(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_297(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_253(int iParam0)
{
	func_298(&(Global_1071686->f_23887.f_4), iParam0);
}

bool func_254(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_255(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

void func_256(var uParam0, int iParam1, int iParam2)
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
	func_299(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

bool func_257(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_258()
{
	return Global_1102219->f_3672;
}

bool func_259()
{
	return func_300() == 4;
}

void func_260(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam0[iVar0] != 0)
		{
			set_model_as_no_longer_needed(iParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_261(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!does_entity_exist((*iParam0)[iVar0]->f_4))
		{
		}
		else
		{
			delete_entity(&((*iParam0)[iVar0]->f_4));
		}
		iVar0++;
	}
}

void func_262(int iParam0, int iParam1)
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

void func_263(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_224(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

int func_264(int iParam0)
{
	return func_301(iParam0) + 1;
}

int func_265(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_266(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_74(*uParam2, 8))
			{
				func_302(-1484676996, bParam1);
			}
			func_303("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_302(1510350995, bParam1);
			break;
		case 4:
			func_302(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_74(*uParam2, 1))
			{
				func_302(-1484676996, bParam1);
			}
			func_302(2075683947, bParam1);
			func_302(1646485471, bParam1);
			func_304(2075683947, bParam1);
			func_303("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_302(-2131576785, bParam1);
			func_302(-2137016051, bParam1);
			func_302(1193151399, bParam1);
			func_302(-1353871107, bParam1);
			func_302(2026630914, bParam1);
			func_302(-225844616, bParam1);
			func_303("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_302(-200270658, bParam1);
			func_302(-127497991, bParam1);
			func_303("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_304(-127497991, bParam1);
			break;
		case 256:
			func_302(331698185, bParam1);
			break;
		case 128:
			func_304(-393752274, bParam1);
			break;
		case 512:
			func_302(-770646513, bParam1);
			break;
		case 32:
			func_302(-1876837239, bParam1);
			break;
		case 1024:
			func_302(401370450, bParam1);
			func_302(1183263476, bParam1);
			func_302(573140494, bParam1);
			break;
		case 2048:
			func_302(-1407497494, bParam1);
			func_302(-1161238459, bParam1);
			func_302(-1583237641, bParam1);
			break;
		case 4096:
			func_302(-1744971427, bParam1);
			break;
		case 8192:
			func_302(793572138, bParam1);
			break;
		case 16384:
			func_302(1773228786, bParam1);
			func_303("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_229(uParam2, iParam0);
	}
	else
	{
		func_298(uParam2, iParam0);
	}
}

int func_267(int iParam0)
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

bool func_268(int iParam0)
{
	if (is_bit_set(iVar396, 2))
	{
		if (iParam0 >= 0 && iParam0 <= 1)
		{
			set_anim_scene_int(iLocal_233, "CameraIndex", 11, false);
		}
		else
		{
			set_anim_scene_int(iLocal_233, "CameraIndex", 1, false);
		}
		return true;
	}
	return false;
}

bool func_269(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_270(int iParam0)
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

void func_271(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam4)
	{
		if (func_72())
		{
			func_305(uParam0);
		}
		else
		{
			func_306(uParam0, bParam5, bParam7);
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
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCross", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "CrossColor", 859817522);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Gamertag", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "CrewTag", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowRank", true);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Rank", "0");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "Spectating", false);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat0", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat1", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat2", "");
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Stat3", "");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", func_307());
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		_databinding_add_data_string(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		_databinding_add_data_hash(&(uParam0->f_12[iVar0]), "HeadsetIconColor", 109029619);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		_databinding_add_data_bool(*uParam0, "info_visible_06", false);
		_databinding_add_data_bool(*uParam0, "info_visible_07", false);
		_databinding_add_data_bool(*uParam0, "info_visible_08", false);
		_databinding_add_data_string(*uParam0, "info_value_06", "");
		_databinding_add_data_string(*uParam0, "info_value_07", "");
		_databinding_add_data_string(*uParam0, "info_value_08", "");
		_databinding_add_data_int(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		_databinding_add_data_bool(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_214(uParam0, &((*uParam1)[iVar0]->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_72())
	{
		func_308(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_309(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_272(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
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
			func_310(uParam4, &uVar4, uParam0->f_150, bVar16);
			func_311(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_312(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_313(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_213(&((*uParam1)[iVar2]->f_14)) && iVar0 < 5)
					{
						func_312(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
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
		func_310(uParam4, &uVar4, uParam0->f_150, bVar16);
		func_314(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_312(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2] && func_213(&((*uParam1)[iVar2]->f_14)))
						{
							func_312(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
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
			if (func_213(&((*uParam1)[iVar2]->f_14)))
			{
				func_312(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
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
				func_312(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
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

void func_273(int iParam0, var uParam1, var uParam2, var uParam3)
{
	set_entity_collision(iParam0, false, false);
	freeze_entity_position(iParam0, true);
	set_anim_scene_entity(iLocal_233, &uParam1, iParam0, 0);
}

void func_274(int iParam0)
{
	if (!func_315(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

void func_275()
{
	func_316(1);
}

void func_276()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (!_0xa0bc8faed8cfeb3c(&(uLocal_406[iVar0])) && does_entity_exist(&(uLocal_406[iVar0])))
		{
			return;
		}
		iVar0++;
	}
	func_316(2);
}

void func_277()
{
	func_316(3);
}

int func_278()
{
	return Global_1139381->f_5079.f_325;
}

struct<16> func_279(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_317(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_318(iVar16, 1);
			break;
		case 2:
			func_318(iVar16, 1);
			func_165(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_280(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (is_bit_set(uParam0->f_159, 11))
	{
		iVar0 = func_319(uParam1[iParam2], get_player_team(iParam3), uParam0->f_150, is_bit_set(uParam0->f_159, 5), bParam4);
	}
	else if (is_bit_set(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = 109029619;
		}
		else
		{
			iVar0 = func_320((*uParam1)[iParam2]->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_320((*uParam1)[iParam2]->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_281()
{
	set_bit(&uLocal_397, 8);
}

int func_282()
{
	return &Global_262155;
}

char* func_283(int iParam0)
{
	iVar0 = floor((to_float(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return _0xd8402b858f4ddd88(&cVar1, get_length_of_literal_string(&cVar1));
}

char* func_284(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_321(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_285(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_322((iVar5 / 60), 0, 180);
	iVar7 = func_322((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

char* func_286(char* sParam0)
{
	return _0xd8402b858f4ddd88(sParam0, get_length_of_literal_string(sParam0));
}

int func_287(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return round(uParam0->f_5);
		case 1:
			return round(uParam0->f_6);
		case 2:
			return round(uParam0->f_7);
		case 3:
			return round(uParam0->f_8);
		default:
			break;
	}
	return 0;
}

struct<16> func_288(int iParam0, bool bParam1)
{
	StringCopy(&cVar0, "", 128);
	if (Global_3145858->f_61357[iParam0]->f_1 > -1)
	{
		*bParam1 = !func_323(Global_3145858->f_61357[iParam0]->f_1);
		return *Global_3145858->f_52528[Global_3145858->f_61357[iParam0]->f_1];
	}
	return cVar0;
}

int func_289(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_290(var uParam0, int iParam1, var uParam2, int iParam3)
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

bool func_291(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_292(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_293(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_294(struct<29> Param0, var uParam29, int iParam30)
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

void func_295(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_296(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_324(vParam0)];
	iVar1 = func_289(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_290(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_297(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_246(255) == 4)
	{
		return;
	}
	if (func_145(vParam0))
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
		func_325(0, 0, 0, 1);
	}
	func_132(0);
	func_132(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_292(&(Global_1102219->f_3849));
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
	func_293(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = iParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_294(Global_1102219->f_3849, 36);
	func_295(Global_1102219->f_3888, 36);
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_299(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_326(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_326(vVar0);
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
				func_327(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_326(vVar0);
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
					func_327(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_300()
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

int func_301(int iParam0)
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

void func_302(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_328(iParam0);
	}
	else
	{
		func_329(iParam0);
	}
}

void func_303(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_330(sParam0);
	}
	else
	{
		func_331(sParam0);
	}
}

void func_304(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_332(iParam0);
	}
	else
	{
		func_333(iParam0);
	}
}

void func_305(var uParam0)
{
	sVar0 = func_334(uParam0->f_159, uParam0->f_160);
	sVar1 = func_335(uParam0->f_159, uParam0->f_160);
	sVar2 = func_336(uParam0->f_159, uParam0->f_160);
	sVar3 = func_337();
	if (!is_string_null_or_empty(sVar0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", sVar0);
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar1))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", sVar1);
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar2))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", sVar2);
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	if (!is_string_null_or_empty(sVar3))
	{
		_databinding_add_data_string(uParam0->f_1, "StatRounds", sVar3);
		_databinding_add_data_int(uParam0->f_1, "StatRoundsColor", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

void func_306(var uParam0, bool bParam1, bool bParam2)
{
	if (func_338(uParam0->f_159) || func_339(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat1", "");
		_databinding_add_data_string(uParam0->f_1, "Stat2", "");
	}
	if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat0", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat0Color", 1105014447);
			}
		}
		_databinding_add_data_string(uParam0->f_1, "Stat1", func_334(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
	}
	else if (func_339(uParam0->f_159))
	{
		if (!is_bit_set(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				_databinding_add_data_string(uParam0->f_1, "Stat2", _get_label_text("UIC_LDR_RNDW"));
				_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
			}
		}
	}
	else if (!is_bit_set(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			_databinding_add_data_string(uParam0->f_1, "Stat1", _get_label_text("UIC_LDR_RNDW"));
			_databinding_add_data_int(uParam0->f_1, "Stat1Color", 1105014447);
		}
	}
	if (!func_339(uParam0->f_159))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat2", func_335(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat2Color", 1105014447);
	}
	if (!is_bit_set(uParam0->f_159, 3) || is_bit_set(uParam0->f_159, 0))
	{
		_databinding_add_data_string(uParam0->f_1, "Stat3", func_336(uParam0->f_159, uParam0->f_160));
		_databinding_add_data_int(uParam0->f_1, "Stat3Color", 1105014447);
	}
	_databinding_add_data_int(uParam0->f_1, "HeadingColor", 1105014447);
}

int func_307()
{
	return 1;
}

void func_308(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_340(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_124(uParam0, uParam1);
		iVar2 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_213(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_215(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_341(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == (*uParam1)[iVar0]->f_14;
				iVar4 = func_280(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_342(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_343());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_344((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_133())
					{
						if (func_345((*uParam1)[iVar0]->f_14))
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
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_346((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_347((*uParam1)[iVar0], uParam0->f_159);
				fVar6 = func_348((*uParam1)[iVar0], uParam0->f_159);
				fVar7 = func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
				fVar8 = func_350((*uParam1)[iVar0]);
				if ((*Global_1049283)[0]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(fVar5, 0));
				}
				if ((*Global_1049283)[1]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(fVar6, 0));
				}
				if ((*Global_1049283)[2]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(fVar7, 0));
				}
				if ((*Global_1049283)[3]->f_2 != 0)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "StatRounds", _0x2b6846401d68e563(fVar8, 0));
				}
				_databinding_write_data_bool_from_parent(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (*uParam1)[iVar0]->f_13)
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_309(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	if (Global_1940144->f_111)
	{
		func_351(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_124(uParam0, uParam1);
		iVar7 = player_id();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_213(&((*uParam1)[iVar0]->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_215(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", func_341(uParam1, iVar0));
				}
				else
				{
					_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == (*uParam1)[iVar0]->f_14;
				iVar9 = func_280(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_342(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Gamertag", &((*uParam1)[iVar0]->f_14.f_1));
				_databinding_write_data_int_from_parent(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "CrewTag", func_343());
				_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Rank", func_344((*uParam1)[iVar0]->f_14));
				if (!bParam4)
				{
					if (func_133())
					{
						if (func_345((*uParam1)[iVar0]->f_14))
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
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat0", func_346((*uParam1)[iVar0]->f_11));
				}
				else if (bParam5)
				{
					if (func_352(uParam0->f_159))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563((*uParam1)[iVar0]->f_8, 0));
					}
					else if (func_339(uParam0->f_159))
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
						iVar2 = round(func_348((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = round(func_347((*uParam1)[iVar0], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_353(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((*uParam1)[iVar0]->f_1 == 8.94E+07f)
						{
							clear_bit(&iVar11, 12);
						}
						sVar5 = func_236(iVar2, iVar11, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!is_bit_set(uParam0->f_159, 0) && !is_bit_set(uParam0->f_159, 17))
				{
					if (!is_bit_set(uParam0->f_159, 18))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat1", _0x2b6846401d68e563(func_347((*uParam1)[iVar0], uParam0->f_159), func_354(uParam0, 1)));
					}
				}
				if (is_bit_set(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = round(func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = round(func_348((*uParam1)[iVar0], uParam0->f_159));
					}
					if (func_353(iVar3))
					{
						sVar6 = func_285(iVar3, 1, 2, 0, 0, 0);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (is_bit_set(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (is_bit_set(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_348((*uParam1)[iVar0], uParam0->f_159);
					}
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), iVar13, _0x2b6846401d68e563(fVar14, 0));
				}
				else if ((!is_bit_set(uParam0->f_159, 3) && !func_339(uParam0->f_159)) && !func_338(uParam0->f_159))
				{
					_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat2", _0x2b6846401d68e563(func_348((*uParam1)[iVar0], uParam0->f_159), func_354(uParam0, 2)));
				}
				if (!is_bit_set(uParam0->f_159, 3))
				{
					if (is_bit_set(uParam0->f_160, 0))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (is_bit_set(uParam0->f_159, 9))
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_355(func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160)));
					}
					else if (is_bit_set(uParam0->f_159, 10))
					{
						fVar4 = func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", func_285(floor(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _create_var_string(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (is_bit_set(uParam0->f_159, 21))
					{
						iVar2 = round(func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_236(iVar2, uParam0->f_159, 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						_databinding_write_data_string_from_parent(&(uParam0->f_12[iVar0]), "Stat3", _0x2b6846401d68e563(func_349((*uParam1)[iVar0], uParam0->f_159, uParam0->f_160), func_354(uParam0, 3)));
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

void func_310(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = uParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_311(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != _databinding_get_item_context_by_index(uParam0, iParam4))
		{
			_databinding_remove_binding_array_item_by_data_context_id(uParam0, iParam1);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_213(&((*uParam0)[iVar1]->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_314(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = _databinding_add_data_container(*uParam0, &cVar5);
		cVar5 = { func_356(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1] && func_213(&((*uParam1)[iVar1]->f_14)))
			{
				if (is_bit_set(uParam0->f_159, 19))
				{
					if ((*uParam1)[iVar1]->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_6);
					}
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
				else
				{
					if ((*uParam1)[iVar1]->f_1 != -1f)
					{
						fVar2 = (fVar2 + (*uParam1)[iVar1]->f_1);
					}
					if ((*uParam1)[iVar1]->f_2 != -1f)
					{
						fVar3 = (fVar3 + (*uParam1)[iVar1]->f_2);
					}
					if ((*uParam1)[iVar1]->f_5 != -1f)
					{
						fVar4 = (fVar4 + (*uParam1)[iVar1]->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!is_bit_set(uParam0->f_159, 19))
		{
			if (is_bit_set(uParam0->f_159, 25) || is_bit_set(uParam0->f_159, 23))
			{
				if (func_357() == 0)
				{
					fVar4 = to_float(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_358(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		_databinding_add_data_int(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (is_bit_set(uParam0->f_159, 6))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else if (func_352(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (is_bit_set(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar14, uParam0->f_151));
		}
		else if (func_339(uParam0->f_159))
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		else
		{
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat1", _0x2b6846401d68e563(fVar2, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat2", _0x2b6846401d68e563(fVar3, uParam0->f_151));
			_databinding_add_data_int(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			_databinding_add_data_string(&(uParam0->f_3[iVar0]), "Stat3", _0x2b6846401d68e563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_315(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_316(int iParam0)
{
	iLocal_392 = iParam0;
}

int func_317(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_359(iParam1, iParam2);
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
					iVar10 = func_360(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					func_362(iParam1, iParam2, iVar1);
					func_361(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_361(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_361(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_361(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_318(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_359(iParam0, iParam1);
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
			func_362(iParam0, iParam1, 0);
			func_361(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_363(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_361(iParam0, iParam1, 0);
			break;
	}
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
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
				default:
					break;
			}
			return 1105014447;
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 1105014447;
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

int func_320(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_365(func_364(0)) && func_366(func_364(0)) == 7)
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
			iVar6 = func_367(iParam0);
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
			return func_368(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_369(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_370(iParam0, 1);
	if (!bVar0)
	{
		if (func_371(iParam0, bParam1))
		{
			return func_368(iParam0);
		}
		else if (func_372(iParam0, bParam1))
		{
			if (func_373(iParam0, bParam1))
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
		return func_367(iParam0);
	}
	else if (func_371(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_375(func_374(func_364(0)), 1) == 395262693)
		{
			return func_368(iParam0);
		}
		else
		{
			return func_368(iParam0);
		}
	}
	else if (func_372(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_321(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_322(int iParam0, int iParam1, int iParam2)
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

bool func_323(int iParam0)
{
	return func_376(Global_3145858->f_52528[iParam0]->f_17, 0);
}

int func_324(vector3 vParam0)
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

void func_325(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_40(iParam0);
	if (!func_233(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_232(128) && !func_255(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_300() == 4)
	{
		func_131(18);
	}
	func_42(1024);
}

void func_326(vector3 vParam0)
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

void func_327(var uParam0, var uParam1)
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

void func_328(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_190(iParam0);
	}
}

void func_329(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_173(iParam0);
	}
}

void func_330(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_331(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_332(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_333(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

char* func_334(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(0);
	}
	else if ((is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17)) || is_bit_set(iParam0, 18))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (is_bit_set(iParam0, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam0, 3))
	{
		return _create_var_string(2, "UIC_LB_TIME");
	}
	else if (is_bit_set(iParam0, 19))
	{
		return _create_var_string(2, "UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return _create_var_string(2, "UIC_LB_KILLS");
}

char* func_335(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(1);
	}
	else if (func_339(iParam0) || func_338(iParam0))
	{
		return "";
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 1))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (is_bit_set(iParam0, 3))
	{
		if (is_bit_set(iParam0, 0))
		{
			return _get_label_text("UIC_LB_TIME");
		}
		else
		{
			return func_378(iParam0);
		}
	}
	else if (func_352(iParam0) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 8))
	{
		return _get_label_text("UIC_LB_VAL");
	}
	else if (is_bit_set(iParam0, 20))
	{
		return _get_label_text("UIC_LB_ACC");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return _get_label_text("UIC_LB_DEATHS");
}

char* func_336(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(2);
	}
	else if (is_bit_set(iParam0, 13))
	{
		return _get_label_text("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 9))
	{
		return _create_var_string(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (is_bit_set(iParam1, 7))
	{
		return _create_var_string(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (is_bit_set(iParam1, 11))
	{
		return _create_var_string(2, "FME_AT_SCORE_TAG");
	}
	else if (is_bit_set(iParam1, 12))
	{
		return _create_var_string(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (is_bit_set(iParam0, 6))
	{
		if (is_bit_set(iParam1, 13))
		{
			return _create_var_string(2, "FM_LEADERBOARD_KILLS");
		}
		if (is_bit_set(iParam0, 0))
		{
			return _create_var_string(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return _create_var_string(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (is_bit_set(iParam0, 3) && is_bit_set(iParam0, 0))
	{
		return func_378(iParam0);
	}
	else if ((is_bit_set(iParam0, 0) && !is_bit_set(iParam0, 17)) && !func_338(iParam0))
	{
		return _get_label_text("UIC_LB_DEATHS");
	}
	else if (func_339(iParam0) && !func_338(iParam0))
	{
		return _get_label_text("UIC_LB_KILLS");
	}
	else if (is_bit_set(iParam0, 2) || is_bit_set(iParam0, 19))
	{
		return _get_label_text("UIC_LB_CAPS");
	}
	else if (is_bit_set(iParam1, 2))
	{
		return _create_var_string(2, "UIC_LB_DEL");
	}
	else if (is_bit_set(iParam0, 14))
	{
		return _get_label_text("UIC_LB_BOUT");
	}
	else if (is_bit_set(iParam0, 21))
	{
		return _get_label_text("UIC_LB_TA");
	}
	else if (is_bit_set(iParam1, 3))
	{
		return _create_var_string(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (is_bit_set(iParam1, 4))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 6))
	{
		return _create_var_string(2, "FM_LEADERBOARD_SCORE");
	}
	else if (is_bit_set(iParam1, 8))
	{
		return _create_var_string(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return _get_label_text("UIC_LB_SCORE");
}

char* func_337()
{
	if (func_72())
	{
		return func_377(3);
	}
	return "";
}

bool func_338(int iParam0)
{
	return (is_bit_set(iParam0, 18) && is_bit_set(iParam0, 17));
}

bool func_339(int iParam0)
{
	return (is_bit_set(iParam0, 0) && is_bit_set(iParam0, 17));
}

void func_340(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar4 = 0;
	iVar5 = 32;
	iVar6 = player_id();
	bVar16 = (*Global_1049309)[0]->f_2 == -1128715836;
	bVar17 = (*Global_1049309)[0]->f_2 == 1691389412;
	bVar18 = (*Global_1049309)[0]->f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = is_bit_set(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = is_bit_set(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_357() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (func_379((*uParam1)[iVar0], 0) != -1f)
					{
						fVar21[uParam1[iVar0]] = (&fVar21[uParam1[iVar0]] + func_379((*uParam1)[iVar0], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_310(uParam2, &uVar30, uParam0->f_150, bVar19);
		func_311(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_356(iVar39) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_358(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_313(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_213(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar41 = iVar6 == (*uParam1)[iVar1]->f_14;
						iVar42 = func_280(uParam0, uParam1, iVar1, iVar6, bVar41);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = _0x2b6846401d68e563(func_379((*uParam1)[iVar1], 0), 0);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_341(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1] == uParam0[iVar0] && func_213(&((*uParam0)[iVar0]->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_342(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((*uParam1)[iParam2]->f_10)
	{
		case 1:
			_databinding_write_data_int_from_parent(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", true);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowCross", false);
			_databinding_write_data_bool_from_parent(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		_databinding_write_data_hash_string_from_parent(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_343()
{
	return "RSN";
}

char* func_344(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

bool func_345(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(get_ped_index_from_entity_index(func_380()));
	return iParam0 == iVar0;
}

char* func_346(int iParam0)
{
	if (iParam0 != 0)
	{
		return _0xb112b9262ec29c20(1852874750, iParam0);
	}
	return "";
}

float func_347(var uParam0, int iParam1)
{
	if (func_72())
	{
		return func_381(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (is_bit_set(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

float func_348(var uParam0, int iParam1)
{
	if (func_72())
	{
		func_381(uParam0, 1);
	}
	else if (is_bit_set(iParam1, 3))
	{
		if (is_bit_set(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_352(iParam1) || is_bit_set(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (is_bit_set(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

char* func_349(var uParam0, int iParam1, int iParam2)
{
	if (func_72())
	{
		func_381(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 0) && !is_bit_set(iParam1, 17))
	{
		if (is_bit_set(iParam1, 3) && (is_bit_set(iParam1, 4) || is_bit_set(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (is_bit_set(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_339(iParam1))
	{
		return uParam0->f_1;
	}
	else if (is_bit_set(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (is_bit_set(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

float func_350(var uParam0)
{
	if (func_72())
	{
		func_381(uParam0, 3);
	}
	return -1f;
}

void func_351(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iVar5 = 0;
	iVar6 = 32;
	bVar7 = is_bit_set(uParam0->f_159, 3);
	bVar8 = is_bit_set(uParam0->f_159, 23);
	bVar9 = is_bit_set(uParam0->f_159, 24);
	bVar10 = is_bit_set(uParam0->f_159, 25);
	bVar11 = is_bit_set(uParam0->f_160, 10);
	bVar12 = is_bit_set(uParam0->f_159, 28);
	iVar13 = player_id();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Position", "");
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "Gamertag", "");
		_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = is_bit_set(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = is_bit_set(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_357() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = to_float(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0] != -1 && uParam1[iVar0] < 8)
				{
					if (bVar9)
					{
						if ((*uParam1)[iVar0]->f_1 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
						}
					}
					else if (bVar8)
					{
						if ((*uParam1)[iVar0]->f_5 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_5);
						}
					}
					else if (bVar11)
					{
						if ((*uParam1)[iVar0]->f_8 != -1f)
						{
							fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_8);
						}
					}
					else if ((*uParam1)[iVar0]->f_1 != -1f)
					{
						fVar25[uParam1[iVar0]] = (&fVar25[uParam1[iVar0]] + (*uParam1)[iVar0]->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_310(uParam2, &uVar34, uParam0->f_150, bVar23);
		func_311(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_356(iVar43) };
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_358(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", _0x2b6846401d68e563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_313(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_213(&((*uParam1)[iVar1]->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "Gamertag", &((*uParam1)[iVar1]->f_14.f_1));
						bVar45 = iVar13 == (*uParam1)[iVar1]->f_14;
						iVar46 = func_280(uParam0, uParam1, iVar1, iVar13, bVar45);
						_databinding_write_data_int_from_parent(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (is_bit_set(uParam0->f_159, 26))
							{
								if (is_bit_set(uParam0->f_159, 0))
								{
									sVar47 = _0x2b6846401d68e563(func_349((*uParam1)[iVar1], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = _0x2b6846401d68e563(func_348((*uParam1)[iVar1], uParam0->f_159), 0);
								}
							}
							else if (is_bit_set(uParam0->f_159, 27))
							{
								iVar4 = round(func_347((*uParam1)[iVar1], uParam0->f_159));
								sVar47 = " ";
								if (func_353(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((*uParam1)[iVar1]->f_1 == 8.94E+07f)
									{
										clear_bit(&iVar48, 12);
									}
									sVar47 = func_236(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = _0x2b6846401d68e563(func_347((*uParam1)[iVar1], uParam0->f_159), func_354(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (is_bit_set(uParam0->f_159, 9))
							{
								sVar47 = func_355((*uParam1)[iVar1]->f_5);
							}
							else
							{
								sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_8, 0);
						}
						else
						{
							sVar47 = _0x2b6846401d68e563((*uParam1)[iVar1]->f_1, 0);
						}
						_databinding_write_data_string_from_parent(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_352(int iParam0)
{
	if ((func_339(iParam0) || func_338(iParam0)) || is_bit_set(iParam0, 18))
	{
		return false;
	}
	if (is_bit_set(iParam0, 0) || is_bit_set(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_353(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == round(-3f))
	{
		return true;
	}
	return false;
}

int func_354(var uParam0, int iParam1)
{
	if (iParam1 == 1 && is_bit_set(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && is_bit_set(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && is_bit_set(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_355(char* sParam0)
{
	return _create_var_string(6, "FM_WEIGHT", sParam0);
}

struct<8> func_356(int iParam0)
{
	if (is_string_null_or_empty((*Global_1050984)[iParam0]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, _get_label_text(&cVar0), 64);
		return cVar0;
	}
	return *(*Global_1050984)[iParam0];
}

int func_357()
{
	if (func_23(16))
	{
		iVar0 = Global_1050050->f_12;
	}
	else
	{
		iVar0 = func_382();
	}
	return iVar0;
}

int func_358(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_319(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_359(int iParam0, int iParam1)
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

int func_360(int iParam0)
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

void func_361(int iParam0, int iParam1, int iParam2)
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

void func_362(int iParam0, int iParam1, int iParam2)
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

int func_363(int iParam0, int iParam1)
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

struct<2> func_364(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_365(struct<2> Param0)
{
	iVar0 = func_383(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_366(var uParam0, var uParam1)
{
	return uParam0;
}

int func_367(int iParam0)
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

int func_368(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_384())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_370(int iParam0, bool bParam1)
{
	iVar0 = floor(func_385(iParam0, bParam1));
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

bool func_371(int iParam0, bool bParam1)
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

bool func_372(int iParam0, bool bParam1)
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
	if (func_386(iParam0))
	{
		return true;
	}
	return !func_371(iParam0, 0);
}

bool func_373(int iParam0, bool bParam1)
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
	if (func_387(iParam0))
	{
		return false;
	}
	if (func_386(iParam0))
	{
		return false;
	}
	if (func_388(iParam0))
	{
		return true;
	}
	return func_389(iParam0);
}

int func_374(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_390(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_375(int iParam0, int iParam1)
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

bool func_376(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

char* func_377(int iParam0)
{
	if (Global_3145858->f_61343[iParam0]->f_1 > -1)
	{
		if (func_323(Global_3145858->f_61343[iParam0]->f_1))
		{
			return _create_var_string(2, Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
		}
		return func_391(Global_3145858->f_52528[Global_3145858->f_61343[iParam0]->f_1]);
	}
	return "";
}

char* func_378(int iParam0)
{
	if (is_bit_set(iParam0, 4))
	{
		return _get_label_text("UIC_LB_BLAP");
	}
	if (is_bit_set(iParam0, 15))
	{
		return _get_label_text("UIC_LB_CPCO");
	}
	return "";
}

float func_379(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

var func_380()
{
	return Global_1102219->f_26.f_3341;
}

float func_381(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

int func_382()
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

int func_383(struct<2> Param0)
{
	if (!func_392(Param0))
	{
		return -1;
	}
	iVar0 = func_393(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_384()
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
	if (!func_392(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_385(int iParam0, bool bParam1)
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

bool func_386(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_387(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_389(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_394(iParam0);
		return false;
	}
	if (func_388(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_395(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_390(struct<2> Param0, var uParam2)
{
	if (!func_392(Param0))
	{
		return false;
	}
	func_396(uParam2);
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

var func_391(var uParam0)
{
	return uParam0;
}

bool func_392(struct<2> Param0)
{
	if (!func_397(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_398(Param0))
	{
		return false;
	}
	return true;
}

int func_393(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_390(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_390(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_394(int iParam0)
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
	func_399(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_400(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_394(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_395(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_401(&Var6, uVar4);
		}
	}
}

void func_396(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_397(int iParam0)
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

int func_398(int iParam0)
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

void func_399(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_400(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = iParam2;
		}
		else
		{
			Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		}
		Global_1071686->f_21416.f_1[iParam0]->f_1 = iParam1;
		return true;
	}
	else if (Global_1071686->f_21416.f_1[iParam0]->f_1 == iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = Global_1296859->f_21;
		return true;
	}
	return false;
}

void func_401(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_402(*uParam0);
}

void func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

