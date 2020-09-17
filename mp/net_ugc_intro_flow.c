void __EntryFunction__()
{
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	network_set_script_is_safe_for_network_game();
	func_1(512);
	if (func_2(-2147483648))
	{
		bLocal_35 = true;
	}
	else if (func_2(1073741824))
	{
		bLocal_36 = true;
	}
	Global_1049264 = 1;
	func_3();
	func_4(&Local_16, 0, 1);
	func_5(&Local_16, 0);
	Local_16.f_2 = -956723401;
	iLocal_32 = player_id();
	iLocal_33 = get_player_ped(iLocal_32);
	iLocal_37 = _0x842ccc9491ffcd9b("MP_Trans_PhotoToScene");
	_0xf3e039322bfbd4d8(iLocal_37);
	iLocal_38 = _0x842ccc9491ffcd9b("MP_Trans_SceneToPhoto");
	_0xf3e039322bfbd4d8(iLocal_38);
	StringCopy(&cVar0, "MP_ADV_INTRO_OS", 32);
	if (!is_string_null_or_empty(&(Global_3145858->f_51882)))
	{
		cVar0 = { Global_3145858->f_51882 };
	}
	prepare_music_event(&cVar0);
	while (_is_loading_screen_active())
	{
		wait(0);
	}
	while (!func_6())
	{
		if (func_7())
		{
			disable_control_action(0, -484677055, true);
			if (!func_8(16))
			{
				if (func_9())
				{
					func_10();
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
				}
			}
			else
			{
				if (_get_number_of_references_of_script_with_name_hash(-2133234167) == 0)
				{
					func_15(0);
				}
				bLocal_44 = true;
				if (func_9())
				{
					func_10();
				}
			}
		}
		else if (_get_number_of_references_of_script_with_name_hash(-2133234167) != 0)
		{
		}
		else if (func_11() && func_9())
		{
		}
		wait(0);
	}
	_0x2e399eafbeea74d5();
	func_16();
	func_17(1);
	Global_1049264 = 0;
	func_18();
}

void func_1(int iParam0)
{
	Global_262153 = (&Global_262153 - (Global_262153 && iParam0));
}

bool func_2(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

void func_3()
{
	Global_1139381->f_4779.f_5 = &Global_1952637->f_1675.f_1[0];
	Global_1139381->f_4779.f_8 = &Global_1952637->f_1675.f_1[2];
	func_19();
	func_20();
	func_21();
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_write_data_bool(uParam0->f_11, iParam1);
	}
	else
	{
		uParam0->f_11 = _databinding_add_data_bool(uParam0->f_3, "showTransitionScreen", iParam1);
	}
}

bool func_6()
{
	if (func_22() == 7)
	{
		return true;
	}
	if (func_23(1, 1))
	{
		return true;
	}
	if (func_2(64))
	{
		return true;
	}
	if (func_2(512))
	{
		_display_hud_component(690901814);
		return true;
	}
	return false;
}

bool func_7()
{
	if (func_2(2) && !is_bit_set(iLocal_46, 1))
	{
		set_bit(&iLocal_46, 1);
		_display_hud_component(128623374);
	}
	return is_bit_set(iLocal_46, 1);
}

bool func_8(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_9()
{
	if (!_text_database_has_loaded("UIC"))
	{
		_text_database_request("UIC");
	}
	else
	{
		return true;
	}
	iLocal_45++;
	if (iLocal_45 > 100)
	{
		return true;
	}
	return false;
}

void func_10()
{
	if (!func_2(268435456) && !is_bit_set(iLocal_46, 5))
	{
		func_24(32768);
		func_25(1);
		_0x9b1fc259187c97c0("loading_black_white");
		_show_loading_screen(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		set_bit(&iLocal_46, 5);
		func_5(&Local_16, 1);
	}
}

bool func_11()
{
	if (bLocal_47)
	{
		return true;
	}
	if (!func_32(&Local_16))
	{
		return false;
	}
	if (func_33(&uLocal_48))
	{
		if (!_0x59ea80079b86d8c7(iLocal_37) && !_0x59ea80079b86d8c7(iLocal_38))
		{
			bLocal_47 = true;
			return true;
		}
		else if (func_34(&uLocal_48, 0, 0) > 30000)
		{
			return true;
		}
	}
	else
	{
		func_35(&uLocal_48, 0, 0);
	}
	return false;
}

void func_12()
{
	_0x8910c24b7e0046ec();
	if (!Global_1940144->f_19)
	{
		func_17(0);
	}
	if (!func_2(256))
	{
		iVar0 = 14;
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if ((iVar1 != 1 && iVar1 != 13) && iVar1 != 4)
			{
				_0xdd1232b332cbb9e7(iVar1, 1, 1);
			}
			iVar1++;
		}
	}
	func_36();
	if (Global_1940311->f_1)
	{
		Global_1940311 = 2;
	}
	if (Global_1896738->f_382)
	{
		func_37(0);
	}
}

void func_13()
{
	func_38(&Local_16);
	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				set_bit(&(Global_1957959->f_1), 5);
				func_39();
				if (!func_40())
				{
					animpostfx_stop_all();
				}
				_hide_hud_component(690901814);
				if (func_2(268435456))
				{
					if (!func_2(262144))
					{
						if (!func_41())
						{
							do_screen_fade_out(1000);
						}
						func_42(1);
					}
				}
				else
				{
					func_44(&Local_16, func_29(), func_30(), func_43(Global_3145858->f_84));
				}
				_0xe75cddebf618c8ff(iLocal_37);
				func_45(1);
			}
			break;
		case 1:
			if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
			{
				set_audio_flag("MusicIgnoreDeathArrest", true);
			}
			func_45(2);
			if (func_2(262144) || !func_2(268435456))
			{
				if (is_screen_faded_out() || is_screen_fading_out())
				{
					do_screen_fade_in(750);
				}
			}
			break;
		case 2:
			if (func_2(256) || func_2(262144))
			{
				func_45(5);
			}
			else if (func_2(4))
			{
				if (!func_2(268435456))
				{
					do_screen_fade_in(0);
				}
				reset_paused_renderphases();
				func_45(3);
			}
			break;
		case 3:
			if ((func_2(8) && (is_entity_visible(iLocal_33) || bLocal_52)) && &Global_262154 != -1)
			{
				if (!is_bit_set(iLocal_46, 6))
				{
					func_46();
					set_bit(&iLocal_46, 6);
				}
				if (func_47())
				{
					if (!func_2(4096))
					{
						_0x4b05b97ba46f419d(0);
						network_set_in_mp_cutscene(true, true, &Global_262154, true);
					}
					func_48();
					if (is_bit_set(iLocal_46, 9))
					{
						func_49(0);
					}
					func_45(4);
				}
			}
			else if (&Global_262154 == -1)
			{
			}
			else if (!is_entity_visible(iLocal_33))
			{
				if (!func_33(&uLocal_50))
				{
					func_35(&uLocal_50, 0, 0);
				}
				else if (func_34(&uLocal_50, 0, 0) > 10000)
				{
					bLocal_52 = true;
				}
			}
			break;
		case 4:
			if (func_2(16))
			{
				func_45(5);
			}
			else
			{
				func_50();
			}
			break;
		case 5:
			func_51(&Local_16);
			toggle_paused_renderphases(true);
			if (!func_41())
			{
				_display_hud_component(690901814);
			}
			func_45(6);
			break;
		case 6:
			if (func_2(1024))
			{
				func_16();
			}
			break;
		case 7:
			break;
	}
}

void func_14()
{
	if (!bLocal_39)
	{
		if (_0xeef83a759ae06a27(iLocal_38))
		{
			if (_0x9ab192a9ef980eed(iLocal_38, 2, 0, &uLocal_40))
			{
				if (_0xe368e8422c860ba7("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					func_5(&Local_16, 1);
					_0x9b1fc259187c97c0("photograph");
					play_sound_frontend("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
				}
			}
		}
	}
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		func_52(16);
	}
	else
	{
		func_53(16);
	}
}

void func_16()
{
	if (func_22() == 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (does_entity_exist(Global_1049198[iVar0]))
		{
			if (!does_entity_belong_to_this_script(Global_1049198[iVar0], false))
			{
				set_entity_as_mission_entity(Global_1049198[iVar0], true, true);
			}
			delete_ped((*Global_1049198)[iVar0]);
		}
		if (does_entity_exist(Global_1049231[iVar0]))
		{
			if (!does_entity_belong_to_this_script(Global_1049231[iVar0], false))
			{
				set_entity_as_mission_entity(Global_1049231[iVar0], true, true);
			}
			delete_ped((*Global_1049231)[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (does_cam_exist(&(iLocal_53[iVar0])))
		{
			set_cam_active(&(iLocal_53[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		(*Global_1049198)[iVar0] = func_54();
		iVar0++;
	}
	if (does_cam_exist(&(iLocal_56[0])))
	{
		set_cam_active(&(iLocal_56[0]), false);
	}
	_0x778d4733e0f2f265(1);
	if (!func_40())
	{
		Global_1071686->f_28662.f_8.f_13 = 0;
	}
	destroy_all_cams(false);
	if ((is_bit_set(iLocal_46, 3) && iLocal_42 != -1) && Global_3145858->f_48998[iLocal_42]->f_21 != -1)
	{
		_0x2412216fcc7b4e3e(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]);
	}
	if (iLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_182)
			{
				_0x71845905bccde781(iLocal_37);
			}
			_0xeda5cbecf56e1386(iLocal_37);
		}
		if (bLocal_182)
		{
			_0x71845905bccde781(iLocal_38);
		}
		_0x38d9d50f2085e9b3(iLocal_37);
		_0x38d9d50f2085e9b3(iLocal_38);
		iLocal_37 = 0;
	}
	if (!func_2(4096) && network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
		if (get_player_invincible(iLocal_32))
		{
			set_player_invincible(iLocal_32, false);
		}
	}
	set_audio_flag("MusicIgnoreDeathArrest", false);
	func_55();
	func_42(0);
	func_56();
	StringCopy(&cVar1, "MP_ADV_INTRO_OS", 32);
	if (!is_string_null_or_empty(&(Global_3145858->f_51882)))
	{
		cVar1 = { Global_3145858->f_51882 };
	}
	cancel_music_event(&cVar1);
	enable_control_action(0, -484677055, true);
	func_57(&Local_16);
	Global_1049276 = -1;
	Global_262154 = -1;
	clear_bit(&(Global_1957959->f_1), 5);
	func_25(0);
	func_45(7);
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_58(bParam0);
}

void func_18()
{
	terminate_this_thread();
}

void func_19()
{
	Global_1139381->f_4779.f_7 = &Global_1952637->f_1675.f_1[1];
}

void func_20()
{
	Global_1139381->f_4779.f_9 = &Global_1952637->f_1675.f_1[3];
}

void func_21()
{
	Global_1139381->f_4779.f_6 = &Global_1952637->f_1675.f_1[4];
}

int func_22()
{
	return iLocal_13;
}

bool func_23(bool bParam0, bool bParam1)
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

void func_24(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

void func_25(bool bParam0)
{
	if (!bParam0)
	{
		func_59(20);
	}
	else
	{
		func_60(20);
	}
}

int func_26()
{
	if ((Global_3145858->f_1 > -1 && Global_3145858->f_1 < Global_3145858->f_52527) && !is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_1]))
	{
		return get_hash_key(Global_3145858->f_52528[Global_3145858->f_1]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_40400)
		{
			case -915869673:
				return 1122662550;
			case -360644098:
				return 506919947;
			case -1649482077:
				return 55577806;
			case -163684180:
				return -2093919847;
			case -777132493:
				return -1567074128;
			case -698288936:
				return -1277009905;
			case 909765192:
				return 1730145250;
			case 534981680:
				return -773971986;
			case 1520184724:
				return 1914027275;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 1088509777;
			case -1437925683:
			case 1272390114:
				return -1482087471;
			case -725256130:
				return 478789200;
			case -222655798:
				return -1863716933;
			case -559809431:
				return -679566803;
			case -1918441640:
			case 1153715636:
				return 1315254565;
			case -1581094459:
				return 1468907451;
			case -457802746:
				return -274237802;
			default:
				break;
		}
		return -240997098;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -938054684;
			case 218185167:
				return -1684650239;
			case -1185533313:
				return 1744089234;
			case 1744858848:
				return 1646695636;
			default:
				break;
		}
		return -1288350710;
	}
	return -274237802;
}

int func_27()
{
	if ((Global_3145858->f_2 > -1 && Global_3145858->f_2 < Global_3145858->f_52527) && !is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_2]))
	{
		return get_hash_key(Global_3145858->f_52528[Global_3145858->f_2]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_40400)
		{
			case -915869673:
				return 347053089;
			case -360644098:
				return 267476864;
			case -1649482077:
				return 263267728;
			case -163684180:
				return 1618086939;
			case -777132493:
				return -1263403805;
			case -698288936:
				return 1269272475;
			case 909765192:
				return 932383945;
			case 534981680:
				return -31655829;
			case 1520184724:
				return -2122032152;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 307231279;
			case -1437925683:
			case 1272390114:
				return -53621227;
			case -725256130:
				return 1597260708;
			case -222655798:
				return 1586694926;
			case -559809431:
				return -913897922;
			case -1918441640:
			case 1153715636:
				return -1544168383;
			case -1581094459:
				return 1168382952;
			case -457802746:
				return -1964987130;
			default:
				break;
		}
		return -480997254;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -1177563305;
			case 1744858848:
				return 868825114;
			case 218185167:
				return 419480024;
			case -1185533313:
				return 2031571671;
			default:
				break;
		}
		return 103021030;
	}
	return -1964987130;
}

int func_28()
{
	if ((Global_3145858->f_3 > -1 && Global_3145858->f_3 < Global_3145858->f_52527) && !is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_3]))
	{
		return get_hash_key(Global_3145858->f_52528[Global_3145858->f_3]);
	}
	return 2;
}

char[] func_29()
{
	if (bLocal_35)
	{
		return func_61(Global_524288->f_40400, &(Global_3145858->f_11), &(Global_3145858->f_108));
	}
	else if (bLocal_36)
	{
		if (!is_string_null_or_empty(&(Global_3145858->f_108)))
		{
			return _0xd8402b858f4ddd88(&(Global_3145858->f_108), get_length_of_literal_string(&(Global_3145858->f_108)));
		}
		return _get_label_text(func_62(Global_2359296->f_155));
	}
	else
	{
		if (!is_string_null_or_empty(&(Global_3145858->f_108)))
		{
			return _0xd8402b858f4ddd88(&(Global_3145858->f_108), get_length_of_literal_string(&(Global_3145858->f_108)));
		}
		return _get_label_text(func_63(Global_2097152->f_32));
	}
	return "GAME MODE NAME HERE";
}

char* func_30()
{
	if (!is_string_null_or_empty(&(Global_3145858->f_100)))
	{
		return func_64(&(Global_3145858->f_100));
	}
	iVar0 = Global_3145858->f_51941;
	if (iVar0 == -1)
	{
		iVar0 = func_65(Global_3145858->f_196, 1);
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return func_66(iVar0);
}

char* func_31()
{
	if (!is_string_null_or_empty(&(Global_3145858->f_84)))
	{
		Var0 = { Global_3145858->f_84 };
		return func_64(&Var0);
	}
	return " ";
}

bool func_32(var uParam0)
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

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

int func_34(var uParam0, bool bParam1, bool bParam2)
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

void func_35(var uParam0, bool bParam1, bool bParam2)
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

void func_36()
{
	if (_is_app_running(29649618) || _is_app_active(29649618))
	{
		_close_app_by_hash_immediate(29649618);
	}
	if (_is_app_running(-1641598689) || _is_app_active(-1641598689))
	{
		_close_app_by_hash_immediate(-1641598689);
	}
	if (func_67())
	{
		func_68();
	}
	if (func_69())
	{
		func_70();
	}
}

void func_37(bool bParam0)
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

int func_38(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return 0;
	}
	if (is_bit_set(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!_0xf7c180f57f85d0b8(*uParam0))
	{
		func_32(uParam0);
		return 0;
	}
	_uistatemachine_request_transition(*uParam0, uParam0->f_2);
	set_bit(&(uParam0->f_15), 0);
	return 1;
}

void func_39()
{
	Global_1071686->f_28662.f_1 = 1;
	Global_1071686->f_28662.f_65.f_30 = 1;
	Global_1071686->f_28662.f_2 = get_id_of_this_thread();
}

bool func_40()
{
	return func_71(8);
}

bool func_41()
{
	return Global_1071686->f_28662.f_8.f_13 != 0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_59(18);
	}
	else
	{
		func_60(18);
	}
}

char* func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_44(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	_databinding_add_data_string(uParam0->f_3, "largeHeader", sParam1);
	_databinding_add_data_string(uParam0->f_3, "subHeader", sParam2);
	_databinding_add_data_string(uParam0->f_3, "body", sParam3);
}

void func_45(int iParam0)
{
	iLocal_13 = iParam0;
}

void func_46()
{
	if (&Global_1049276 != -1)
	{
		iVar1 = (&Global_1049276 / 32);
		iVar2 = (&Global_1049276 % 32);
		iVar0 = 0;
		while (iVar0 <= Global_3145858->f_48997)
		{
			if (is_bit_set(&(Global_3145858->f_48998[iVar0]->f_16[iVar1]), iVar2))
			{
				iLocal_42 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_42 < 0 || iLocal_42 >= 32)
		{
			iLocal_42 = 0;
		}
	}
	else
	{
		iLocal_42 = 0;
	}
	iLocal_41 = get_player_team(iLocal_32);
	if (&Global_1049264)
	{
		set_bit(&iLocal_46, 7);
		set_bit(&iLocal_46, 10);
	}
	if (&Global_1049265 == 0)
	{
		set_bit(&iLocal_46, 8);
	}
	else if (&Global_1049265 == 1)
	{
		set_bit(&iLocal_46, 9);
	}
	Global_1049265 = -1;
	if (iLocal_41 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (is_bit_set(Global_3145858->f_48548[iVar0]->f_8, iLocal_41))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_43 < 0)
		{
			iLocal_43 = 0;
		}
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		iVar1 = (&Global_1049276 / 32);
		iVar2 = (&Global_1049276 % 32);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (is_bit_set(&(Global_3145858->f_48548[iVar0]->f_9[iVar1]), iVar2))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_47()
{
	if (!func_2(8192))
	{
		if (!does_entity_exist(Global_1049198[0]))
		{
			return false;
		}
		else if (iLocal_60 == -1)
		{
			if (is_bit_set(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (is_bit_set(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (is_bit_set(iLocal_46, 7))
			{
				if (does_entity_exist(Global_1049231[0]))
				{
					sLocal_61 = "script@mp@introflow@soloonhorse";
				}
				else
				{
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (does_entity_exist(Global_1049231[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}
	if (iLocal_60 == -1)
	{
		iLocal_60 = _create_anim_scene(sLocal_61, 130, 0, false, true);
		load_anim_scene(iLocal_60);
		vVar0 = { Global_3145858->f_48548[iLocal_43]->f_1 };
		vVar3 = { Global_3145858->f_48548[iLocal_43]->f_4 };
		set_focus_pos_and_vel(vVar0, vVar3);
	}
	if (_is_anim_scene_loaded(iLocal_60, true, false))
	{
		if (is_bit_set(iLocal_46, 7))
		{
			if ((!bLocal_36 && !bLocal_35) && !func_2(268435456))
			{
				iVar6 = get_random_int_in_range(1, 4);
				set_anim_scene_int(iLocal_60, "BGVariation_Int", iVar6, false);
			}
			iVar7 = get_random_int_in_range(0, 3);
			set_anim_scene_int(iLocal_60, "CameraIndex", iVar7, false);
		}
		else
		{
			iVar11 = get_random_int_in_range(0, 6);
			iVar9 = 0;
			while (iVar9 <= 31)
			{
				if (does_entity_exist(Global_1049198[iVar9]))
				{
					iVar10++;
				}
				iVar9++;
			}
			if (iVar10 <= 4)
			{
				set_bit(&iLocal_46, 10);
				iVar8 = (1 + iVar11);
			}
			else if (iVar10 <= 8)
			{
				iVar8 = (11 + iVar11);
			}
			else
			{
				iVar8 = (21 + iVar11);
			}
			set_anim_scene_int(iLocal_60, "CameraIndex", iVar8, false);
		}
		return true;
	}
	return false;
}

void func_48()
{
}

void func_49(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!does_entity_exist(Global_1049198[iVar0]))
		{
		}
		else if (!_0xa0bc8faed8cfeb3c(Global_1049198[iVar0]))
		{
		}
		else
		{
			_0x13a210949fcbd92b(Global_1049198[iVar0], iParam0);
		}
		iVar0++;
	}
}

void func_50()
{
	func_72();
	if (iLocal_14 < 5)
	{
		_disable_first_person_cam_this_frame_2();
	}
	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				func_73();
				return;
			}
			if (Global_3145858->f_48998[iLocal_42]->f_21 != -1 && (is_string_null_or_empty(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]) || is_string_null_or_empty(&(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8))))
			{
				if (func_74(*Global_3145858->f_48998[iLocal_42]) || !func_75(*Global_3145858->f_48998[iLocal_42]))
				{
					func_73();
				}
				else
				{
					func_76(1);
				}
			}
			else
			{
				func_76(1);
			}
			break;
		case 1:
			if (func_77())
			{
				bLocal_34 = true;
			}
			if (does_cam_exist(&(iLocal_53[0])))
			{
				set_cam_active(&(iLocal_53[0]), true);
				render_script_cams(true, false, 3000, true, false, 0);
				func_76(2);
			}
			else if (func_78())
			{
				if (func_79())
				{
					if (func_80())
					{
						if (!is_bit_set(iLocal_46, 3))
						{
							set_cam_active(&(iLocal_53[0]), true);
							render_script_cams(true, false, 3000, true, false, 0);
						}
						func_76(2);
					}
				}
			}
			break;
		case 2:
			if (func_81())
			{
				func_82(8388608);
				if (!is_bit_set(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						iVar8 = Global_3145858->f_48998[iLocal_42]->f_15;
						iVar9 = Global_3145858->f_48998[iLocal_42]->f_14;
					}
					else
					{
						iVar8 = 3750;
						iVar9 = 1;
					}
					set_cam_active_with_interp(&(iLocal_53[1]), &(iLocal_53[0]), iVar8, iVar9, 1);
					func_35(&uLocal_63, 0, 0);
				}
				else
				{
					func_83(0);
					_0xbc016635d6a73b31(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21], &(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8), 5);
					iLocal_62 = _0x465f04f68ad38197(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21], &(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8), 5);
					func_35(&uLocal_63, 0, 0);
				}
				if (bLocal_34)
				{
					iVar10 = 0;
					while (iVar10 <= 31)
					{
						if (does_entity_exist(Global_1049198[iVar10]))
						{
							set_entity_completely_disable_collision(Global_1049198[iVar10], false, false);
							freeze_entity_position(Global_1049198[iVar10], true);
							if (!does_entity_belong_to_this_script(Global_1049198[iVar10], false))
							{
								set_entity_as_mission_entity(Global_1049198[iVar10], true, true);
							}
							delete_ped((*Global_1049198)[iVar10]);
						}
						if (does_entity_exist(Global_1049231[iVar10]))
						{
							set_entity_completely_disable_collision(Global_1049231[iVar10], false, false);
							freeze_entity_position(Global_1049231[iVar10], true);
							if (!does_entity_belong_to_this_script(Global_1049231[iVar10], false))
							{
								set_entity_as_mission_entity(Global_1049231[iVar10], true, true);
							}
							delete_ped((*Global_1049231)[iVar10]);
						}
						iVar10++;
					}
					render_script_cams(true, false, 3000, true, false, 0);
					func_76(3);
				}
				else
				{
					bLocal_182 = true;
					_0x71845905bccde781(iLocal_37);
					_0xe75cddebf618c8ff(iLocal_38);
					func_76(4);
				}
			}
			else if (!bLocal_81)
			{
				func_84();
				bLocal_81 = true;
			}
			else if (_0xeef83a759ae06a27(iLocal_37) && _0xe368e8422c860ba7("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
			}
			else if (!is_bit_set(iLocal_46, 4))
			{
				if (!_is_loading_screen_active())
				{
					if (is_bit_set(iLocal_46, 3))
					{
						MemCopy(&cVar0, {Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						_0xbc016635d6a73b31(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21], &cVar0, 5);
					}
					if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
					{
						StringCopy(&cVar11, "MP_ADV_INTRO_OS", 32);
						if (!is_string_null_or_empty(&(Global_3145858->f_51882)))
						{
							cVar11 = { Global_3145858->f_51882 };
						}
						trigger_music_event(&cVar11);
					}
					_0x9b8d5d4cb8af58b3(iLocal_37);
					play_sound_frontend("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
					set_bit(&iLocal_46, 4);
				}
			}
			break;
		case 3:
			func_24(65536);
			if ((does_cam_exist(&(iLocal_53[0])) && is_cam_interpolating(&(iLocal_53[0]))) || (does_cam_exist(&(iLocal_53[1])) && is_cam_interpolating(&(iLocal_53[1]))))
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(Global_3145858->f_48998[iLocal_42]->f_15) * 0.9f))
				{
					func_85();
				}
			}
			else if (is_bit_set(iLocal_46, 3) && func_34(&uLocal_63, 0, 0) < iLocal_62)
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(iLocal_62) * 0.9f))
				{
					func_85();
				}
			}
			else
			{
				if (!func_2(4096))
				{
					if (network_is_in_mp_cutscene())
					{
						network_set_in_mp_cutscene(false, true, 32, true);
						if (get_player_invincible(iLocal_32))
						{
							set_player_invincible(iLocal_32, false);
						}
					}
					else
					{
						bVar15 = true;
					}
				}
				else
				{
					bVar15 = true;
				}
				if (bVar15)
				{
					if (!is_bit_set(iLocal_46, 3))
					{
						set_cam_active(&(iLocal_53[0]), false);
						set_cam_active(&(iLocal_53[1]), false);
						set_cam_active(&(iLocal_56[0]), true);
					}
					else
					{
						MemCopy(&cVar0, {Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						_0xa54d643d0773eb65(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21], &cVar0, 5);
						set_gameplay_cam_relative_heading(0f, 1f);
					}
					clear_ped_tasks(iLocal_33, 1, 0);
					animpostfx_play("RespawnMissionCheckpoint");
					func_76(5);
				}
			}
			break;
		case 4:
			func_86();
			break;
		case 5:
			if (func_33(&uLocal_65))
			{
				if (func_2(128) && func_34(&uLocal_65, 0, 0) > 1500)
				{
					_0xc5cb91d65852ed7e("RespawnMissionCheckpoint");
					func_83(0);
					render_script_cams(false, true, 3000, true, false, 0);
					end_srl();
					func_76(7);
				}
			}
			else
			{
				func_35(&uLocal_65, 0, 0);
			}
			break;
		case 6:
			if (bLocal_82 || func_81())
			{
				bLocal_82 = true;
				if (func_2(128))
				{
					func_83(0);
					func_76(7);
				}
			}
			break;
		case 7:
			if (!func_2(16))
			{
				func_87();
			}
			break;
	}
}

void func_51(var uParam0)
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

void func_52(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_53(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

int func_54()
{
	return -1;
}

void func_55()
{
	Global_262153 = 0;
}

void func_56()
{
	Global_1071686->f_28662.f_1 = 0;
	Global_1071686->f_28662.f_2 = 0;
}

void func_57(var uParam0)
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

void func_58(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

int func_59(int iParam0)
{
	if (func_88(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_89(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

char* func_61(int iParam0, char* sParam1, char* sParam2)
{
	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (_does_string_exist_in_string(sParam1, "Mission MP - "))
			{
				return _get_text_substring(sParam1, 13, get_length_of_literal_string(sParam1));
			}
			else
			{
				return _0xd8402b858f4ddd88(sParam1, get_length_of_literal_string(sParam1));
			}
			break;
		default:
			if (!is_string_null_or_empty(sParam2))
			{
				return _0xd8402b858f4ddd88(sParam2, get_length_of_literal_string(sParam2));
			}
			sVar0 = _create_var_string(2, func_90(iParam0));
			if (_does_string_exist_in_string(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_63(int iParam0)
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

var func_64(var uParam0)
{
	return uParam0;
}

int func_65(vector3 vParam0, int iParam3)
{
	iVar0 = func_91();
	if (func_92(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_93(vParam0, iParam3);
}

char* func_66(int iParam0)
{
	if (!func_92(iParam0))
	{
		return "";
	}
	StringCopy(&cVar0, func_94(iParam0), 128);
	return _create_var_string(2, &cVar0);
}

bool func_67()
{
	return Global_1896738->f_382;
}

void func_68()
{
	func_37(0);
}

bool func_69()
{
	return Global_1940311->f_1;
}

void func_70()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_71(int iParam0)
{
	return func_95(Global_1071686->f_28662.f_8.f_1, iParam0);
}

void func_72()
{
	if (iLocal_14 > 0 && iLocal_15 < 3)
	{
	}
}

void func_73()
{
	if (!does_cam_exist(&(iLocal_53[0])))
	{
		if (!func_74(Global_3145858->f_116) && func_75(Global_3145858->f_116))
		{
			func_96(Global_3145858->f_116, Global_3145858->f_119, Global_3145858->f_122);
		}
		else
		{
			vVar0 = { get_ped_bone_coords(iLocal_33, 21030, 0f, 0.65f, 0f) };
			vVar3 = { get_entity_rotation(iLocal_33, 0) };
			func_96(vVar0, vVar3, 1110704128);
		}
	}
	if (func_97())
	{
		bVar6 = is_ped_on_mount(iLocal_33);
		bVar7 = is_ped_in_any_vehicle(iLocal_33, false);
		func_98(&iLocal_33, bVar6, bVar7, 0);
		func_83(0);
		iLocal_53[0] = &iLocal_53[1];
		set_cam_active(&(iLocal_53[0]), true);
		render_script_cams(true, false, 3000, true, false, 0);
		func_76(1);
	}
}

bool func_74(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_75(vector3 vParam0)
{
	vVar0 = { func_99(iLocal_32) };
	fVar3 = vdist2(vParam0, vVar0);
	if (fVar3 <= 10000f)
	{
		return true;
	}
	return false;
}

void func_76(int iParam0)
{
	iLocal_14 = iParam0;
}

bool func_77()
{
	if (iLocal_43 == -1)
	{
		return true;
	}
	if (func_74(func_100()))
	{
		return true;
	}
	if (!func_75(func_100()))
	{
		return true;
	}
	return false;
}

bool func_78()
{
	if (func_74(*vLocal_83[0]))
	{
		func_101();
	}
	else
	{
		return true;
	}
	return false;
}

bool func_79()
{
	if (iLocal_180 < func_102())
	{
		if (does_entity_exist(Global_1049198[iLocal_180]))
		{
			if (iLocal_180 == 0)
			{
				set_anim_scene_origin(iLocal_60, func_100(), func_103(), 0);
				if (is_bit_set(iLocal_46, 7))
				{
					if (is_ped_on_mount(Global_1049198[0]))
					{
						func_104(Global_1049198[0]);
					}
					else
					{
						func_105(Global_1049198[0]);
					}
				}
			}
			set_entity_as_mission_entity(Global_1049198[iLocal_180], true, true);
			if (is_ped_male(Global_1049198[iLocal_180]))
			{
				StringCopy(&cVar0, "Ped_M_", 16);
			}
			else
			{
				StringCopy(&cVar0, "Ped_F_", 16);
			}
			StringIntConCat(&cVar0, iLocal_180, 16);
			set_anim_scene_entity(iLocal_60, &cVar0, Global_1049198[iLocal_180], 0);
			if (is_ped_on_mount(Global_1049198[iLocal_180]))
			{
				set_entity_as_mission_entity(Global_1049231[iLocal_180], true, true);
				StringCopy(&cVar0, "Horse_", 16);
				StringIntConCat(&cVar0, iLocal_180, 16);
				set_anim_scene_entity(iLocal_60, &cVar0, Global_1049231[iLocal_180], 0);
			}
			if (!is_bit_set(iLocal_46, 8))
			{
				if (!is_bit_set(iLocal_46, 7))
				{
					if (is_ped_on_mount(Global_1049198[iLocal_180]))
					{
						func_106(Global_1049198[iLocal_180], iLocal_180);
					}
					else
					{
						func_107(Global_1049198[iLocal_180], iLocal_180);
					}
				}
			}
			iLocal_180++;
			return false;
		}
	}
	else if (iLocal_180 < 32)
	{
		if (does_entity_exist(Global_1049198[iLocal_180]))
		{
			set_entity_as_mission_entity(Global_1049198[iLocal_180], true, true);
			delete_ped((*Global_1049198)[iLocal_180]);
			iLocal_180++;
			return false;
		}
	}
	return true;
}

bool func_80()
{
	if (!func_97())
	{
		return false;
	}
	if (((!bLocal_80 && Global_3145858->f_48998[iLocal_42]->f_21 != -1) && !is_string_null_or_empty(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21])) && !is_string_null_or_empty(&(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8)))
	{
		if (!_0xaa235e2f2c09e952(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]))
		{
			if (!_0x595550376b7ea230(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]))
			{
				_0x1b3c2d961f5fc0e1(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]);
				StringCopy(&cVar0, "mp@establishers@", 128);
				StringConCat(&cVar0, &(Global_3145858->f_59036[Global_3145858->f_48998[iLocal_42]->f_21]->f_8), 128);
				StringConCat(&cVar0, "_SRL", 128);
				prefetch_srl(&cVar0);
			}
			if (!func_33(&uLocal_73))
			{
				func_35(&uLocal_73, 0, 0);
			}
			else if (func_34(&uLocal_73, 0, 0) > 5000)
			{
				bLocal_80 = true;
			}
			return false;
		}
		else
		{
			set_bit(&iLocal_46, 3);
		}
	}
	else if (!does_cam_exist(&(iLocal_53[0])))
	{
		if (func_74(*Global_3145858->f_48998[iLocal_42]) || func_74(Global_3145858->f_48998[iLocal_42]->f_3))
		{
			vVar16 = { get_gameplay_cam_rot(2) };
			vVar19 = { Global_3145858->f_196 };
			vVar19.f_2 = (vVar19.z + 5f);
			func_96(vVar19, vVar16, 1110704128);
		}
		else
		{
			iLocal_53[0] = create_camera_with_params(26379945, *Global_3145858->f_48998[iLocal_42], Global_3145858->f_48998[iLocal_42]->f_6, Global_3145858->f_48998[iLocal_42]->f_12, false, 2);
			iLocal_53[1] = create_camera_with_params(26379945, Global_3145858->f_48998[iLocal_42]->f_3, Global_3145858->f_48998[iLocal_42]->f_9, Global_3145858->f_48998[iLocal_42]->f_13, false, 2);
		}
	}
	if (is_bit_set(iLocal_46, 3))
	{
		if (!is_srl_loaded())
		{
			return false;
		}
		else
		{
			_0xd9f2ff4af394d926();
			begin_srl();
		}
	}
	if (!does_cam_exist(&(iLocal_56[0])))
	{
		bVar22 = is_ped_on_mount(iLocal_33);
		bVar23 = is_ped_in_any_vehicle(iLocal_33, false);
		func_98(&iLocal_33, bVar22, bVar23, 0);
	}
	return true;
}

bool func_81()
{
	if (_0x9ab192a9ef980eed(iLocal_37, 2, 0, &uVar0))
	{
		func_5(&Local_16, 0);
		_0x9b1fc259187c97c0("landscape_shot");
		return true;
	}
	return false;
}

void func_82(int iParam0)
{
	if (func_95(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_108(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		toggle_paused_renderphases(false);
	}
	else
	{
		toggle_paused_renderphases(true);
	}
}

void func_84()
{
	func_83(0);
	_0x778d4733e0f2f265(0);
}

void func_85()
{
	if (!bLocal_181)
	{
		_0xcb9401f918cb0f75(iLocal_33, "SpawnMissionIntro", 1, 20);
		_0x2208438012482a1a(iLocal_33, true, true);
		bLocal_181 = true;
	}
}

void func_86()
{
	switch (iLocal_15)
	{
		case 0:
			if ((does_cam_exist(&(iLocal_53[0])) && is_cam_interpolating(&(iLocal_53[0]))) || (does_cam_exist(&(iLocal_53[1])) && is_cam_interpolating(&(iLocal_53[1]))))
			{
			}
			else if (is_bit_set(iLocal_46, 3))
			{
				if (func_33(&uLocal_63))
				{
					if (func_34(&uLocal_63, 0, 0) > iLocal_62)
					{
						func_35(&uLocal_67, 0, 0);
						func_109();
						func_110(1);
					}
				}
				else
				{
					func_35(&uLocal_63, 0, 0);
				}
			}
			else
			{
				func_35(&uLocal_67, 0, 0);
				func_109();
				func_110(1);
			}
			break;
		case 1:
			if (!bLocal_183)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (does_entity_exist(Global_1049198[iVar0]))
					{
						set_entity_visible(Global_1049198[iVar0], true);
						if (does_entity_exist(Global_1049231[iVar0]))
						{
							set_entity_visible(Global_1049231[iVar0], true);
						}
					}
					iVar0++;
				}
				bLocal_183 = true;
			}
			if ((does_cam_exist(&(iLocal_53[0])) && is_cam_active(&(iLocal_53[0]))) || (does_cam_exist(&(iLocal_53[1])) && is_cam_active(&(iLocal_53[1]))))
			{
				if (!is_bit_set(iLocal_46, 3))
				{
					set_cam_active(&(iLocal_53[0]), false);
					set_cam_active(&(iLocal_53[1]), false);
				}
			}
			else if (_is_anim_scene_started(iLocal_60, false) && _get_anim_scene_progress(iLocal_60) < 0.825f)
			{
			}
			else
			{
				_0x9b8d5d4cb8af58b3(iLocal_38);
				iVar1 = func_111(iLocal_32, 1, -1, 1);
				if (is_bit_set(iLocal_46, 10))
				{
					Local_16.f_2 = 1441775019;
				}
				else
				{
					Local_16.f_2 = -1678669845;
				}
				clear_bit(&(Local_16.f_15), 0);
				if (iLocal_41 != -1 && !is_string_null_or_empty((*Global_3145728)[iLocal_41]))
				{
					func_112(&Local_16, get_player_name(iLocal_32), (*Global_3145728)[iLocal_41], " ", " ", " ", " ", iVar1);
				}
				else
				{
					func_112(&Local_16, get_player_name(iLocal_32), " ", " ", " ", " ", " ", iVar1);
				}
				func_38(&Local_16);
				func_35(&uLocal_67, 0, 0);
				func_35(&uLocal_69, 0, 0);
				func_110(2);
			}
			break;
		case 2:
			func_24(65536);
			if (!func_2(16384))
			{
				iVar2 = func_34(&uLocal_69, 0, 0);
				if (iVar2 < 15000)
				{
					if (iVar2 > 6500)
					{
						if (!is_screen_faded_out() && !is_screen_fading_out())
						{
							do_screen_fade_out(650);
							func_113(0);
						}
					}
					func_35(&uLocal_67, 0, 0);
					return;
				}
			}
			iVar3 = func_34(&uLocal_67, 0, 0);
			if (iVar3 > 6500)
			{
				if (!is_screen_faded_out() && !is_screen_fading_out())
				{
					do_screen_fade_out(650);
				}
			}
			if (iVar3 > 7500)
			{
				abort_anim_scene(iLocal_60, false);
				iVar4 = 0;
				while (iVar4 <= 31)
				{
					if (does_entity_exist(Global_1049198[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							remove_anim_scene_entity(iLocal_60, "", Global_1049198[iVar4]);
						}
						if (!does_entity_belong_to_this_script(Global_1049198[iVar4], false))
						{
							set_entity_as_mission_entity(Global_1049198[iVar4], true, true);
						}
						delete_ped((*Global_1049198)[iVar4]);
					}
					if (does_entity_exist(Global_1049231[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							remove_anim_scene_entity(iLocal_60, "", Global_1049231[iVar4]);
						}
						if (!does_entity_belong_to_this_script(Global_1049231[iVar4], false))
						{
							set_entity_as_mission_entity(Global_1049231[iVar4], true, true);
						}
						delete_ped((*Global_1049231)[iVar4]);
					}
					iVar4++;
				}
				reset_anim_scene(iLocal_60, 0);
				if (!func_2(4096))
				{
					network_set_in_mp_cutscene(false, true, 32, true);
				}
				if (get_player_invincible(iLocal_32))
				{
					set_player_invincible(iLocal_32, false);
				}
				func_114();
				func_5(&Local_16, 0);
				if (bLocal_36 || bLocal_35)
				{
					set_gameplay_cam_relative_heading(0f, 1f);
				}
				func_110(3);
			}
			else if (iVar3 > 5000)
			{
				func_85();
			}
			break;
		case 3:
			_0xeda5cbecf56e1386(iLocal_38);
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				do_screen_fade_in(350);
			}
			func_83(0);
			animpostfx_play("RespawnMissionCheckpoint");
			func_24(131072);
			if (_0xe368e8422c860ba7("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				play_sound_frontend("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				_0x9b1fc259187c97c0("gameplay");
			}
			func_110(4);
			break;
		case 4:
			func_76(5);
			break;
	}
}

void func_87()
{
	if (!&iLocal_75[3])
	{
		if (!func_33(&uLocal_71))
		{
			iLocal_75[3] = 1;
			func_35(&uLocal_71, 0, 0);
		}
		else if (func_34(&uLocal_71, 0, 0) > 2900)
		{
			iLocal_75[3] = 1;
		}
		else if (!&iLocal_75[2] == 1 && func_34(&uLocal_71, 0, 0) > 1800)
		{
			iLocal_75[2] = 1;
		}
		else if (!&iLocal_75[1] == 1 && func_34(&uLocal_71, 0, 0) > 900)
		{
			iLocal_75[1] = 1;
		}
	}
	else
	{
		func_24(16);
	}
}

bool func_88(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_89(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case 909765192:
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

int func_91()
{
	return Global_1893587->f_2;
}

bool func_92(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_93(vector3 vParam0, bool bParam3)
{
	iVar0 = func_115(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
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

char* func_94(int iParam0)
{
	if (!func_92(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	return "REG_IF_INV";
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_96(vector3 vParam0, vector3 vParam3, float fParam6)
{
	iLocal_53[0] = create_camera_with_params(26379945, vParam0, vParam3, fParam6, false, 2);
	iLocal_53[1] = create_camera_with_params(26379945, vParam0, vParam3, fParam6, false, 2);
}

bool func_97()
{
	if (!bLocal_58)
	{
		if (iLocal_59 == 0)
		{
			iVar0 = 339;
			vVar1 = { _get_object_offset_from_coords(get_entity_coords(iLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			vVar4 = { get_gameplay_cam_coord() };
			iLocal_59 = start_shape_test_capsule(vVar1, vVar4, 0.25f, iVar0, iLocal_33, 4);
		}
		else
		{
			iVar15 = get_shape_test_result(iLocal_59, &iVar7, &uVar8, &uVar11, &uVar14);
			if (iVar15 == 2)
			{
				if (iVar7 == 0)
				{
				}
				bLocal_58 = true;
			}
			else if (iVar15 == 0)
			{
				bLocal_58 = true;
			}
		}
		return false;
	}
	return true;
}

void func_98(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vVar0 = { get_gameplay_cam_coord() };
	vVar3 = { get_gameplay_cam_rot(2) };
	iLocal_56[0] = create_camera_with_params(26379945, vVar0, vVar3, 65f, false, 2);
	if (bParam1)
	{
	}
	if (bParam2 || !bParam3)
	{
		return;
	}
}

Vector3 func_99(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

Vector3 func_100()
{
	return Global_3145858->f_48548[iLocal_43]->f_1;
}

void func_101()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar1 = does_entity_exist(Global_1049231[0]);
		*vLocal_83[iVar0] = { _get_object_offset_from_coords(Global_3145858->f_48548[iLocal_43]->f_1, Global_3145858->f_48548[iLocal_43]->f_4.f_2, func_116(Global_3145858->f_48548[iLocal_43]->f_7, iVar0, bVar1)) };
		iVar0++;
	}
}

int func_102()
{
	if (!is_bit_set(iLocal_46, 7))
	{
		if (bLocal_36 || bLocal_35)
		{
			return 16;
		}
		else
		{
			return 4;
		}
	}
	else if (bLocal_36 || bLocal_35)
	{
		return 1;
	}
	else
	{
		return 4;
	}
	return 0;
}

Vector3 func_103()
{
	return Global_3145858->f_48548[iLocal_43]->f_4;
}

void func_104(int iParam0)
{
	iVar3 = 0;
	get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	get_current_ped_weapon(iParam0, &iVar1, true, 1, true);
	if (iVar0 != -1569615261)
	{
		remove_weapon_from_ped(iParam0, iVar0, true, -142743235);
		iVar0 = -1569615261;
	}
	if (iVar1 != -1569615261)
	{
		remove_weapon_from_ped(iParam0, iVar1, true, -142743235);
		iVar1 = -1569615261;
	}
	bVar4 = (func_117(iVar0) && func_117(iVar1));
	iVar2 = func_118(iVar0);
	if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == 970310034) || iVar2 == -1212426201) || (iVar2 == 860033945 && iVar0 != 392538360))
	{
		iVar3 = 3;
	}
	else if (_is_weapon_lasso(iVar0))
	{
		remove_weapon_from_ped(iParam0, iVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (iVar0 == 1885857703)
	{
		iVar3 = 7;
	}
	else if (iVar0 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
	{
		iVar3 = 5;
	}
	else if (func_119(iVar0))
	{
		iVar3 = 4;
	}
	else if (_is_weapon_one_handed(iVar0) || (iVar2 == 860033945 && iVar0 == 392538360))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	set_anim_scene_bool(iLocal_60, "BGPed_Enable", true, false);
	set_anim_scene_int(iLocal_60, "Weapon_Int", iVar3, false);
	iVar5 = get_random_int_in_range(1, 4);
	set_anim_scene_int(iLocal_60, "BGPed_Variation_Int", iVar5, false);
}

void func_105(int iParam0)
{
	get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	get_current_ped_weapon(iParam0, &iVar1, true, 1, true);
	bVar4 = (func_117(iVar0) && func_117(iVar1));
	iVar2 = func_118(iVar0);
	if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == 970310034) || iVar2 == -1212426201) || (iVar2 == 860033945 && iVar0 != 392538360))
	{
		iVar3 = 3;
		iVar5 = get_random_int_in_range(0, 100);
		if ((iVar5 % 2) == 0)
		{
			if (iVar0 == 1999408598)
			{
				iVar3 = 12;
			}
			else if (iVar0 == -1471716628)
			{
				iVar3 = 11;
			}
			else if (iVar2 == 860033945)
			{
				if (iVar0 == 834124286)
				{
					iVar3 = 9;
				}
				else if ((iVar0 == 1845102363 || iVar0 == 575725904) || iVar0 == -1952010486)
				{
					iVar3 = 10;
				}
			}
		}
	}
	else if (_is_weapon_lasso(iVar0))
	{
		remove_weapon_from_ped(iParam0, iVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (iVar0 == 1885857703)
	{
		iVar3 = 7;
	}
	else if (iVar0 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
	{
		iVar3 = 5;
	}
	else if (func_119(iVar0))
	{
		iVar3 = 4;
	}
	else if (_is_weapon_one_handed(iVar0) || (iVar2 == 860033945 && iVar0 == 392538360))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	if (is_ped_male(iParam0))
	{
		set_anim_scene_bool(iLocal_60, "isMale", true, false);
	}
	else
	{
		set_anim_scene_bool(iLocal_60, "isFemale", true, false);
	}
	set_anim_scene_int(iLocal_60, "weapon_Index", iVar3, false);
}

void func_106(int iParam0, int iParam1)
{
	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	get_current_ped_weapon(iParam0, &iVar1, true, 1, true);
	bVar6 = (func_117(iVar0) && func_117(iVar1));
	iVar2 = func_118(iVar0);
	if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == 970310034) || iVar2 == -1212426201) || (iVar2 == 860033945 && iVar0 != 392538360))
	{
		iVar5 = 3;
	}
	else if (_is_weapon_lasso(iVar0))
	{
		remove_weapon_from_ped(iParam0, iVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar0 == 1885857703)
	{
		iVar5 = 7;
	}
	else if (iVar0 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
	{
		iVar5 = 5;
	}
	else if (func_119(iVar0))
	{
		iVar5 = 4;
	}
	else if (_is_weapon_one_handed(iVar0) || (iVar2 == 860033945 && iVar0 == 392538360))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	set_anim_scene_int(iLocal_60, &cVar3, iVar5, false);
}

void func_107(int iParam0, int iParam1)
{
	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	get_current_ped_weapon(iParam0, &iVar0, true, 0, true);
	get_current_ped_weapon(iParam0, &iVar1, true, 1, true);
	bVar6 = (func_117(iVar0) && func_117(iVar1));
	iVar2 = func_118(iVar0);
	if (!is_weapon_valid(iVar0) || iVar0 == -1569615261)
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == 970310034) || iVar2 == -1212426201) || (iVar2 == 860033945 && iVar0 != 392538360))
	{
		iVar5 = 3;
		if (iParam1 <= 4)
		{
			iVar7 = get_random_int_in_range(0, 100);
			if ((iVar7 % 2) == 0)
			{
				if (iVar0 == 1999408598)
				{
					iVar5 = 12;
				}
				else if (iVar0 == -1471716628)
				{
					iVar5 = 11;
				}
				else if (iVar2 == 860033945)
				{
					if (iVar0 == 834124286)
					{
						iVar5 = 9;
					}
					else if ((iVar0 == 1845102363 || iVar0 == 575725904) || iVar0 == -1952010486)
					{
						iVar5 = 10;
					}
				}
			}
			StringCopy(&cVar8, "Var_Ped_", 16);
			StringIntConCat(&cVar8, iParam1, 16);
			iVar10 = get_random_int_in_range(0, 3);
			set_anim_scene_int(iLocal_60, &cVar8, iVar10, false);
		}
	}
	else if (_is_weapon_lasso(iVar0))
	{
		remove_weapon_from_ped(iParam0, iVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar0 == 1885857703)
	{
		iVar5 = 7;
	}
	else if (iVar0 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
	{
		iVar5 = 5;
	}
	else if (func_119(iVar0))
	{
		iVar5 = 4;
	}
	else if (_is_weapon_one_handed(iVar0) || (iVar2 == 860033945 && iVar0 == 392538360))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	set_anim_scene_int(iLocal_60, &cVar3, iVar5, false);
}

void func_108(var uParam0, int iParam1)
{
	func_120(uParam0, iParam1);
}

void func_109()
{
	if (iLocal_60 != -1)
	{
		start_anim_scene(iLocal_60);
		_0x9b1fc259187c97c0("player_team_intro");
	}
}

void func_110(int iParam0)
{
	iLocal_15 = iParam0;
}

int func_111(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_122(func_121(0)) && func_123(func_121(0)) == 7)
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
			iVar6 = func_124(iParam0);
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
			return func_125(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_95(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_126(iParam0, 1);
	if (!bVar0)
	{
		if (func_127(iParam0, bParam1))
		{
			return func_125(iParam0);
		}
		else if (func_128(iParam0, bParam1))
		{
			if (func_129(iParam0, bParam1))
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
		return func_124(iParam0);
	}
	else if (func_127(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_131(func_130(func_121(0)), 1) == 395262693)
		{
			return func_125(iParam0);
		}
		else
		{
			return func_125(iParam0);
		}
	}
	else if (func_128(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

void func_112(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
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

void func_113(int iParam0)
{
	iVar0 = get_id_of_this_thread();
	if (_does_thread_exist(Global_1940144->f_105.f_1) && Global_1940144->f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144->f_105.f_1 = iVar0;
	Global_1940144->f_105 = iParam0;
}

void func_114()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

int func_115(vector3 vParam0)
{
	iVar0 = func_132(vParam0, 0f, 0f, 0, 2);
	return func_132(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

Vector3 func_116(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return -0.6f, 20.4f, 0f;
					case 1:
						return 0.75f, 20.76f, 0f;
					case 2:
						return -3f, 20.6f, 0f;
					case 3:
						return 4.1f, 21.1f, 0f;
					case 4:
						return -6.1f, 21.2f, 0f;
					case 5:
						return 5.6f, 20.5f, 0f;
					case 6:
						return -7.1f, 21.2f, 0f;
					case 7:
						return 7.7f, 20.5f, 0f;
					case 8:
						return 0.3f, 23.9f, 0f;
					case 9:
						return -0.75f, 23.76f, 0f;
					case 10:
						return 3f, 23.2f, 0f;
					case 11:
						return -4.1f, 24.1f, 0f;
					case 12:
						return 6.1f, 24.25f, 0f;
					case 13:
						return -5.6f, 22.75f, 0f;
					case 14:
						return 7.1f, 24.1f, 0f;
					case 15:
						return -7.7f, 22.85f, 0f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 0.3f, 17.4f, 0f;
					case 1:
						return -0.55f, 17.76f, 0f;
					case 2:
						return 1.2f, 17.6f, 0f;
					case 3:
						return -1.3f, 18.1f, 0f;
					case 4:
						return 1.8f, 17.2f, 0f;
					case 5:
						return -1.8f, 17.5f, 0f;
					case 6:
						return 2.1f, 17.2f, 0f;
					case 7:
						return -2.5f, 17.5f, 0f;
					case 8:
						return 0.3f, 19.4f, 0f;
					case 9:
						return -0.75f, 19.76f, 0f;
					case 10:
						return 1.92f, 19.6f, 0f;
					case 11:
						return -1.7f, 20.1f, 0f;
					case 12:
						return 2.8f, 20.2f, 0f;
					case 13:
						return -2.7f, 19.5f, 0f;
					case 14:
						return 3.8f, 20.2f, 0f;
					case 15:
						return -3.9f, 19.5f, 0f;
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_117(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_118(int iParam0)
{
	if (_is_weapon_pistol(iParam0))
	{
		return 416676503;
	}
	else if (_is_weapon_revolver(iParam0))
	{
		return -1101297303;
	}
	else if (_is_weapon_repeater(iParam0))
	{
		return -594562071;
	}
	else if (_is_weapon_rifle(iParam0))
	{
		return 970310034;
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		return 860033945;
	}
	else if (_is_weapon_sniper(iParam0))
	{
		return -1212426201;
	}
	return 0;
}

bool func_119(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<2> func_121(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_122(struct<2> Param0)
{
	iVar0 = func_133(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_123(var uParam0, var uParam1)
{
	return uParam0;
}

int func_124(int iParam0)
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

int func_125(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_134())
	{
		return 636925055;
	}
	return -963477619;
}

int func_126(int iParam0, bool bParam1)
{
	iVar0 = floor(func_135(iParam0, bParam1));
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

bool func_127(int iParam0, bool bParam1)
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

bool func_128(int iParam0, bool bParam1)
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
	if (func_136(iParam0))
	{
		return true;
	}
	return !func_127(iParam0, 0);
}

bool func_129(int iParam0, bool bParam1)
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
	if (func_137(iParam0))
	{
		return false;
	}
	if (func_136(iParam0))
	{
		return false;
	}
	if (func_138(iParam0))
	{
		return true;
	}
	return func_139(iParam0);
}

int func_130(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_140(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_131(int iParam0, int iParam1)
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

int func_132(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_133(struct<2> Param0)
{
	if (!func_141(Param0))
	{
		return -1;
	}
	iVar0 = func_142(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_134()
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
	if (!func_141(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_135(int iParam0, bool bParam1)
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

bool func_136(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_137(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_138(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_139(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_143(iParam0);
		return false;
	}
	if (func_138(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_144(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_140(struct<2> Param0, var uParam2)
{
	if (!func_141(Param0))
	{
		return false;
	}
	func_145(uParam2);
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

bool func_141(struct<2> Param0)
{
	if (!func_146(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_147(Param0))
	{
		return false;
	}
	return true;
}

int func_142(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_140(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_140(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_143(int iParam0)
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
	func_148(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_144(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_149(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_143(iParam0);
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
						func_144(iVar3, iParam1, 0, 1, 0, 0);
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
			func_150(&Var6, uVar4);
		}
	}
}

void func_145(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_146(int iParam0)
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

int func_147(int iParam0)
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

void func_148(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_149(int iParam0, int iParam1, int iParam2)
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

void func_150(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 2, &uParam1);
	func_151(*uParam0);
}

void func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

