void __EntryFunction__()
{
	iLocal_250 = 1367437629;
	iLocal_251 = 1301263553;
	iLocal_252 = 2139949496;
	iLocal_253 = -128997553;
	iLocal_254 = -822242784;
	iLocal_255 = -640622144;
	iLocal_256 = -485697785;
	iLocal_357 = 673107768;
	iLocal_363 = 1830978939;
	iLocal_364 = -770982987;
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
	while (!func_1())
	{
		_0x236905c700fdb54d();
		iVar0 = player_id();
		if (network_is_player_active(iVar0))
		{
			if (Global_1296851->f_2.f_1 != 2)
			{
			}
			else
			{
				if (func_2(&uLocal_377))
				{
					func_5(func_3(1792516315), func_4(&uLocal_377));
					func_6(&uLocal_377);
				}
				if (!is_bit_set(Local_186.f_3, 0))
				{
					_text_database_request("MPPJAAU");
					func_7();
					iLocal_356 = get_random_int_in_range(0, 3);
					set_bit(&(Local_186.f_3), 0);
				}
				if (!func_8(1048576, network_player_id_to_int()))
				{
					func_9(1048576);
				}
				func_10();
				set_ped_reset_flag(Global_34, 175, true);
			}
		}
		wait(0);
	}
	func_11();
	func_12();
}

bool func_1()
{
	if (func_13(1, 0))
	{
		return true;
	}
	iVar0 = player_id();
	if (network_is_player_active(iVar0))
	{
		if (Local_186.f_6 == 6)
		{
			return true;
		}
	}
	return false;
}

bool func_2(var uParam0)
{
	return func_14(*uParam0, 1);
}

struct<2> func_3(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_4(var uParam0)
{
	if (!func_2(uParam0))
	{
		return 0;
	}
	if (func_15(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_16() - round((uParam0->f_1 * 1000f)));
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_6(var uParam0)
{
	func_17(uParam0, 0f);
}

void func_7()
{
	func_18();
	if (func_19(2))
	{
		iLocal_358 = Global_1296851->f_2.f_4;
	}
	else
	{
		iLocal_358 = floor((IntToFloat(Global_1296851->f_2.f_4) * Global_1901947->f_787));
	}
	uLocal_361 = Global_1901947->f_787.f_1;
	iLocal_359 = iVar356;
	set_bit(&(Local_186.f_3), 5);
}

bool func_8(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_9(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 || iParam0);
}

void func_10()
{
	func_20();
	func_21();
	iVar0 = get_player_ped(player_id());
	switch (Local_186.f_6)
	{
		case 0:
			if (is_bit_set(Local_186.f_3, 0))
			{
				func_22(500);
				if (func_23() && _text_database_has_loaded("MPPJAAU"))
				{
					_0xc9caeaeec1256e54(-48209965);
					func_21();
					if (is_ped_male(iVar0))
					{
						set_bit(&(Local_186.f_3), 1);
					}
					func_24();
					if (func_19(1))
					{
						if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && (_is_ped_hogtied(iVar0) || is_ped_in_any_vehicle(iVar0, false)))
						{
							func_25(1);
							func_26(1);
						}
					}
					func_5(func_3(-1845909675), 1);
					func_27(1);
					func_28(Local_186.f_17, 0f, 1);
					if (!_unlock_is_unlocked(1444561974))
					{
						func_29(741331401, 0, 255, 0, 0);
					}
					func_30();
					Local_186.f_6 = 1;
				}
			}
			break;
		case 1:
			_0xc9caeaeec1256e54(-48209965);
			if (!_does_anim_scene_exist(Local_186.f_2))
			{
				Local_186.f_2 = _create_anim_scene(Local_186.f_4, 1, "pl_lie", false, true);
			}
			else if (!_does_anim_scene_exist(Local_248.f_1))
			{
				Local_248.f_1 = _create_anim_scene(Local_248, 1, "pl_lighting_shot1", false, true);
			}
			else if (func_31())
			{
				if (func_32(255))
				{
				}
				else if (func_19(4) && func_33(4, 255))
				{
				}
				else
				{
					if (!network_is_in_mp_cutscene())
					{
						set_local_player_visible_in_cutscene(1, 0, 256);
						network_set_in_mp_cutscene(true, true, get_unique_int_for_player(player_id()), true);
						func_34();
					}
					func_35();
					load_anim_scene(Local_186.f_2);
					load_anim_scene(Local_248.f_1);
					iLocal_360 = get_random_int_in_range(0, 3);
					Local_186.f_6 = 2;
					Jump @1017; //curOff = 460
					_0xc9caeaeec1256e54(-48209965);
					func_36();
					if (_is_anim_scene_loaded(Local_186.f_2, true, false) && _is_anim_scene_loaded(Local_248.f_1, true, false))
					{
						if (((((func_37() && func_38()) && func_39()) && func_40()) && !func_32(network_player_id_to_int())) && func_41())
						{
							force_room_for_game_viewport(iVar360, get_room_key_from_entity(Global_34));
							if (func_42())
							{
								func_43();
								trigger_music_event("MP_JAIL_TIME_START");
								func_44(500);
								Local_186.f_6 = 3;
							}
						}
					}
					Jump @1017; //curOff = 606
					func_36();
					_0xc9caeaeec1256e54(-48209965);
					if (!is_bit_set(Local_186.f_3, 6))
					{
						if (is_screen_faded_in())
						{
							set_bit(&(Local_186.f_3), 6);
						}
					}
					func_45();
					if (!is_bit_set(Local_186.f_3, 2) && !is_bit_set(Local_186.f_3, 4))
					{
						func_46();
						if (!func_47())
						{
							func_48();
							func_49();
							func_50();
							func_51();
						}
						else
						{
							func_52();
						}
					}
					else if (is_bit_set(Local_186.f_3, 3) || is_bit_set(Local_186.f_3, 4))
					{
						trigger_music_event("MP_JAIL_TIME_STOP");
						func_22(500);
						Local_186.f_6 = 4;
					}
					Jump @1017; //curOff = 768
					func_22(500);
					_0xc9caeaeec1256e54(-48209965);
					if (func_23())
					{
						func_53();
						_delete_anim_scene(Local_186.f_2);
						_delete_anim_scene(Local_248.f_1);
						func_54();
						clear_ped_tasks_immediately(Global_34, false, true);
						_set_entity_coords_and_heading(Global_34, Local_186.f_10, Local_186.f_13, true, false, true);
						clear_area(Local_186.f_10, 2f, 1048576);
						set_gameplay_cam_relative_heading(0f, 1f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						func_55();
						Local_186.f_6 = 5;
					}
					Jump @1017; //curOff = 891
					if (network_is_in_mp_cutscene())
					{
						network_set_in_mp_cutscene(false, false, 32, true);
					}
					if (func_56())
					{
						Global_1296851->f_2.f_4 = 0;
						func_57(-668482597, 2000, 0, 1, 0, Local_186.f_13, 0, 0);
						func_44(500);
						Global_1296851->f_2.f_1 = -1;
						func_58(0, -1343026476);
						if (func_8(1048576, network_player_id_to_int()))
						{
							func_59(1048576);
						}
						func_60(-179235043, 0, 0);
						Local_186.f_6 = 6;
					}
				}
			}
			default:
				break;
	}
}

void func_11()
{
	trigger_music_event("MP_JAIL_TIME_STOP");
	if (_does_text_database_exist("MPPJAAU"))
	{
		_text_database_delete("MPPJAAU");
	}
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, false, 32, true);
	}
	func_54();
	func_61();
	func_62();
	func_63();
	func_55();
	func_52();
	func_64(&uLocal_377);
	func_65();
	set_player_control(player_id(), true, 0, false);
}

void func_12()
{
	terminate_this_thread();
}

bool func_13(bool bParam0, bool bParam1)
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

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_15(var uParam0)
{
	return func_14(*uParam0, 2);
}

int func_16()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_17(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_66() - fParam1);
	func_67(uParam0, 1);
	func_68(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_18()
{
	Global_1901947->f_787 = func_69(1586305626, -2534057, 0.5f, "NET_JAIL_BRIBE_AMOUNT_MULTIPLIER");
	Global_1901947->f_787.f_1 = func_69(1586305626, -589363792, 2f, "NET_JAIL_BRIBE_REDUCTION_TIME");
	func_70(Global_1901947->f_787, 0f, 1f);
	func_70(Global_1901947->f_787.f_1, 1f, 10f);
}

bool func_19(int iParam0)
{
	return (Global_1296851->f_2.f_3 && iParam0) != 0;
}

void func_20()
{
	if ((is_screen_faded_in() && !is_screen_fading_in()) && Local_186.f_6 >= 3)
	{
		if (!is_bit_set(Local_186.f_3, 25))
		{
			uLocal_381 = func_71("JAIL_BRIBE_HELP", 10000, 0, 0, 0, 1);
			if (iVar379 != 0)
			{
				set_bit(&(Local_186.f_3), 25);
			}
		}
		else if (!func_72(iVar379) && !is_bit_set(Local_186.f_3, 26))
		{
			if (func_19(2))
			{
				set_bit(&(Local_186.f_3), 26);
			}
			else
			{
				uLocal_380 = func_71("JAIL_BRIBE_REDUCED", 10000, 0, 0, 0, 1);
				if (iVar378 != 0)
				{
					set_bit(&(Local_186.f_3), 26);
				}
			}
		}
	}
	if ((iVar379 == 0 && iVar378 == 0) || (!func_72(iVar379) && !func_72(iVar378)))
	{
		func_73(1);
	}
}

void func_21()
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 613911080, false);
	disable_control_action(0, -813019446, false);
	disable_control_action(0, 255439828, false);
}

void func_22(int iParam0)
{
	if (!is_screen_faded_out() && !is_screen_fading_out())
	{
		do_screen_fade_out(iParam0);
	}
}

bool func_23()
{
	if (is_screen_faded_out())
	{
		return true;
	}
	return false;
}

void func_24()
{
	switch (Global_1296851->f_2.f_2)
	{
		case 0:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_standard";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { 2912.32f, 1309.875f, 43.5963f };
			Local_186.f_13 = 248.2161f;
			Local_186.f_14 = { 2904.273f, 1314.341f, 43.9358f };
			Local_186.f_20 = 69.26f;
			Local_186.f_5 = 1657401918;
			Local_186.f_21 = 718966598;
			Local_186.f_17 = { 2902.887f, 1316.057f, 44.559f };
			Local_219[0]->f_1 = { 2902.022f, 1314.107f, 45.2794f };
			Local_219[0]->f_4 = { -7.0278f, 0f, -47.8387f };
			Local_219[0]->f_7 = 63.03f;
			Local_219[1]->f_1 = { 2903.374f, 1313.764f, 45.6563f };
			Local_219[1]->f_4 = { -19.5797f, 0f, -11.7991f };
			Local_219[1]->f_7 = 51.2385f;
			Local_219[2]->f_1 = { 2902.879f, 1317.091f, 44.9186f };
			Local_219[2]->f_4 = { 1.354f, 0f, -155.1401f };
			Local_219[2]->f_7 = 60.5416f;
			Local_248 = "lightrig_mp@prisonvignette@annesburg_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_ASB", 24);
			sLocal_373 = "ASB_Sheriff";
			break;
		case 1:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_armadillo_blackwater";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { -3625.865f, -2605.238f, -14.3452f };
			Local_186.f_13 = 114.7104f;
			Local_186.f_14 = { -3619.148f, -2604.207f, -14.3516f };
			Local_186.f_20 = -65f;
			Local_186.f_5 = -59369632;
			Local_186.f_21 = 1237405687;
			Local_186.f_17 = { -3616.951f, -2604.411f, -13.6566f };
			Local_219[0]->f_1 = { -3618.892f, -2601.67f, -13.1624f };
			Local_219[0]->f_4 = { -4.5768f, 0f, -163.6841f };
			Local_219[0]->f_7 = 44.9467f;
			Local_219[1]->f_1 = { -3620.042f, -2604.125f, -13.1791f };
			Local_219[1]->f_4 = { -0.0629f, 0f, -96.8643f };
			Local_219[1]->f_7 = 51.2f;
			Local_219[2]->f_1 = { -3616.636f, -2601.96f, -13.2891f };
			Local_219[2]->f_4 = { -2.6472f, 0f, 160.3677f };
			Local_219[2]->f_7 = 39.6676f;
			Local_248 = "lightrig_mp@prisonvignette@armadillo_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_ARM", 24);
			sLocal_373 = "ARMA_SHERIFF";
			break;
		case 2:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_blackwater";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { -755.7141f, -1269.317f, 43.0229f };
			Local_186.f_13 = 269.3015f;
			Local_186.f_14 = { -763.5278f, -1262.461f, 43.0233f };
			Local_186.f_20 = -90f;
			Local_186.f_5 = -2127191462;
			Local_186.f_21 = 1237405687;
			Local_186.f_17 = { -761.6234f, -1263.575f, 43.7253f };
			Local_219[0]->f_1 = { -761.3599f, -1262.154f, 44.124f };
			Local_219[0]->f_4 = { -2.1078f, -0.6279f, 141.409f };
			Local_219[0]->f_7 = 59.3487f;
			Local_219[1]->f_1 = { -764.4f, -1264.3f, 44.3f };
			Local_219[1]->f_4 = { -4.6f, -0.6f, -65.8f };
			Local_219[1]->f_7 = 54.1f;
			Local_219[2]->f_1 = { -762.7601f, -1265.568f, 44.1951f };
			Local_219[2]->f_4 = { -5.1179f, -0.6279f, -11.841f };
			Local_219[2]->f_7 = 52.3f;
			Local_248 = "lightrig_mp@prisonvignette@blackwater_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_BLW", 24);
			sLocal_373 = "BLW_Police_Chief";
			break;
		case 3:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_rhodes";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { 1358.321f, -1308.081f, 76.7281f };
			Local_186.f_13 = 161.2351f;
			Local_186.f_14 = { 1357.334f, -1302.453f, 76.7602f };
			Local_186.f_20 = 70f;
			Local_186.f_5 = 1878514758;
			Local_186.f_21 = -882766674;
			Local_186.f_17 = { 1355.037f, -1301.035f, 77.4625f };
			Local_219[0]->f_1 = { 1357.638f, -1303.693f, 78.306f };
			Local_219[0]->f_4 = { -5.9084f, 0f, 39.6998f };
			Local_219[0]->f_7 = 42.5001f;
			Local_219[1]->f_1 = { 1355.691f, -1303.917f, 78.1617f };
			Local_219[1]->f_4 = { -4.3822f, 0f, 0.9421f };
			Local_219[1]->f_7 = 64.4419f;
			Local_219[2]->f_1 = { 1353.193f, -1303.348f, 77.9621f };
			Local_219[2]->f_4 = { -2.3385f, 0f, -53.8886f };
			Local_219[2]->f_7 = 36.2585f;
			Local_248 = "lightrig_mp@prisonvignette@rhodes_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_RHO", 24);
			sLocal_373 = "SHERIFF_GRAY";
			break;
		case 4:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_standard";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { 2492.513f, -1311.075f, 47.8658f };
			Local_186.f_13 = 87.2217f;
			Local_186.f_14 = { 2502.43f, -1307.856f, 47.9533f };
			Local_186.f_20 = 0f;
			Local_186.f_5 = 1711767580;
			Local_186.f_21 = -1386119702;
			Local_186.f_17 = { 2503.544f, -1305.952f, 48.6754f };
			Local_219[0]->f_1 = { 2505.7f, -1307.3f, 49.2f };
			Local_219[0]->f_4 = { -5.6f, 0f, 72.2f };
			Local_219[0]->f_7 = 45.1f;
			Local_219[1]->f_1 = { 2501.987f, -1303.346f, 48.9869f };
			Local_219[1]->f_4 = { -0.832f, 0f, -154.0568f };
			Local_219[1]->f_7 = 30.0771f;
			Local_219[2]->f_1 = { 2500.944f, -1306.244f, 49.0935f };
			Local_219[2]->f_4 = { -0.7958f, 0f, -107.4256f };
			Local_219[2]->f_7 = 47.5445f;
			Local_248 = "lightrig_mp@prisonvignette@saintdenis_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_STD", 24);
			sLocal_373 = "SD_PoliceChief";
			break;
		case 5:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_standard";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { -1805.314f, -351.4572f, 163.1305f };
			Local_186.f_13 = 225.7455f;
			Local_186.f_14 = { -1812.01f, -351.921f, 160.4684f };
			Local_186.f_20 = -25f;
			Local_186.f_5 = 1207903970;
			Local_186.f_21 = -1386119702;
			Local_186.f_17 = { -1810.196f, -350.6658f, 161.1676f };
			Local_219[0]->f_1 = { -1809.129f, -350.83f, 161.5122f };
			Local_219[0]->f_4 = { -1.9754f, 0.4731f, 105.8348f };
			Local_219[0]->f_7 = 57.8969f;
			Local_219[1]->f_1 = { -1811.962f, -349.528f, 161.5641f };
			Local_219[1]->f_4 = { -0.7082f, 0.4731f, -147.8898f };
			Local_219[1]->f_7 = 44.8645f;
			Local_219[2]->f_1 = { -1811.1f, -353.6f, 161.7f };
			Local_219[2]->f_4 = { -2.8f, 0.5f, -6.5f };
			Local_219[2]->f_7 = 48.9f;
			Local_248 = "lightrig_mp@prisonvignette@strawberry_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_STR", 24);
			sLocal_373 = "UTP1_Sheriff";
			break;
		case 6:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_standard";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { -5524.573f, -2937.686f, -2.9621f };
			Local_186.f_13 = 186.6304f;
			Local_186.f_14 = { -5529.914f, -2925.074f, -2.3601f };
			Local_186.f_20 = -65f;
			Local_186.f_5 = 831345624;
			Local_186.f_21 = 1237405687;
			Local_186.f_17 = { -5529.914f, -2925.074f, -2.3601f };
			Local_219[0]->f_1 = { -5528.064f, -2923.999f, -1.1571f };
			Local_219[0]->f_4 = { -2.6775f, 0f, 164.663f };
			Local_219[0]->f_7 = 60.1574f;
			Local_219[1]->f_1 = { -5527.1f, -2928.7f, -1.5f };
			Local_219[1]->f_4 = { 0.5f, 0.5f, 21.5f };
			Local_219[1]->f_7 = 30.9f;
			Local_219[2]->f_1 = { -5530.2f, -2927.4f, -1.3f };
			Local_219[2]->f_4 = { 1.4f, 0f, -42.1f };
			Local_219[2]->f_7 = 49.3f;
			Local_248 = "lightrig_mp@prisonvignette@tumbleweed_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_TWD", 24);
			sLocal_373 = "TWD_Sheriff";
			break;
		case 7:
			Local_186.f_4 = "script@mp@bounty@player_jailed@vignette_standard";
			Local_186.f_7 = { func_74(Global_1296851->f_2.f_2) };
			Local_186.f_10 = { -275.1811f, 801.827f, 118.4077f };
			Local_186.f_13 = 186.4208f;
			Local_186.f_14 = { -272.0521f, 808.2583f, 118.3685f };
			Local_186.f_20 = -170f;
			Local_186.f_5 = 193903155;
			Local_186.f_21 = 1237405687;
			Local_186.f_17 = { -272.0521f, 808.2583f, 118.3685f };
			Local_219[0]->f_1 = { -275.3474f, 807.1092f, 119.2897f };
			Local_219[0]->f_4 = { 0.6224f, 0f, -96.0022f };
			Local_219[0]->f_7 = 39.5204f;
			Local_219[1]->f_1 = { -273.9f, 808.8f, 119.5f };
			Local_219[1]->f_4 = { 1.6f, 0f, -147f };
			Local_219[1]->f_7 = 51.2f;
			Local_219[2]->f_1 = { -270.6266f, 806.3447f, 119.604f };
			Local_219[2]->f_4 = { -3.8707f, 0f, 68.1265f };
			Local_219[2]->f_7 = 41.672f;
			Local_248 = "lightrig_mp@prisonvignette@valentine_prison_lighting";
			StringCopy(&cLocal_370, "MPPJA_BRIBE_VAL", 24);
			sLocal_373 = "VAL_Sheriff";
			break;
	}
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		func_75(107);
	}
	else
	{
		func_76(107);
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_75(135);
	}
	else
	{
		func_76(135);
	}
}

void func_27(bool bParam0)
{
	if (!bParam0)
	{
		func_76(18);
	}
	else
	{
		func_75(18);
	}
}

void func_28(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_77(vParam0, fParam3))
	{
		func_78(1, bParam4);
	}
}

int func_29(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_79(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_30()
{
	if (!func_80(Local_186.f_5))
	{
		func_81(Local_186.f_5, 0, 0);
		door_system_set_door_state(Local_186.f_5, 0);
	}
}

bool func_31()
{
	if (!_does_volume_exist(iVar385))
	{
		iLocal_387 = _create_volume_cylinder(Local_186.f_10, 0f, 0f, 0f, 2f, 2f, 2f);
	}
	if (_does_volume_exist(iVar385))
	{
		if (iVar366 == 0)
		{
			uLocal_368 = func_82(iVar385, 0f, 0, 10208);
		}
		if (iVar366 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_32(int iParam0)
{
	return func_83(1, iParam0);
}

bool func_33(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (network_is_player_active(int_to_playerindex(iParam1)) && ((*Global_1238240)[iParam1]->f_300 && iParam0) != 0);
}

void func_34()
{
	_0x51d99497abf3f451(Local_186.f_5);
}

void func_35()
{
	func_84(Global_34, &uLocal_17);
	_0x94a3c1b804d291ec(Global_34, 0, 0, 0, 1);
	set_current_ped_weapon(Global_34, _0x08ff1099ed2e6e21(Global_34), false, 0, false, false);
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (((((iVar0 == 0 || iVar0 == 1) || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
		{
			_0x67e21acc5c0c970c(Global_34, iVar0, 0);
		}
		iVar0++;
	}
	func_85(1568311761, Global_34, 0, 1);
	_0x4f806a6cfed89468(Global_34, 0);
}

void func_36()
{
	if (!func_86(Local_186.f_5))
	{
		func_87(Local_186.f_5, 1, 0f, 0, 0, 0, 1, 0);
	}
}

int func_37()
{
	if (is_bit_set(Local_186.f_3, 12))
	{
		return 1;
	}
	if (Local_186.f_21 == 1237405687)
	{
		set_bit(&(Local_186.f_3), 12);
		return 1;
	}
	if (func_88())
	{
		set_bit(&(Local_186.f_3), 12);
		return 1;
	}
	if (iVar363 == 0)
	{
		uLocal_365 = _0x6f3068258a499e52(Local_186.f_21, Local_186.f_17, 7);
		return 0;
	}
	if (_0x1ff441d7954f8709(iVar363))
	{
		uLocal_355 = _0x4735e2a4bb83d9da(iVar363);
		if (does_entity_exist(iVar353))
		{
			set_entity_visible(iVar353, false);
			set_bit(&(Local_186.f_3), 12);
			set_bit(&(Local_186.f_3), 13);
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	if (is_bit_set(Local_186.f_3, 11))
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!does_cam_exist(&(Local_219[iVar0])))
		{
			Local_219[iVar0] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		}
		set_cam_coord(&(Local_219[iVar0]), Local_219[iVar0]->f_1);
		set_cam_rot(&(Local_219[iVar0]), Local_219[iVar0]->f_4, 2);
		set_cam_fov(&(Local_219[iVar0]), Local_219[iVar0]->f_7);
		if (iVar0 == iVar354)
		{
			set_cam_active(&(Local_219[iVar0]), true);
		}
		render_script_cams(true, false, 3000, true, false, 0);
		iVar0++;
	}
	if (!is_bit_set(Local_186.f_3, 11))
	{
		set_bit(&(Local_186.f_3), 11);
	}
	return 1;
}

int func_39()
{
	if (is_bit_set(Local_186.f_3, 14))
	{
		return 1;
	}
	switch (iLocal_247)
	{
		case 0:
			iLocal_362 = get_interior_at_coords(Local_186.f_7);
			if (is_valid_interior(iVar360))
			{
				if (is_interior_ready(iVar360))
				{
					pin_interior_in_memory(iVar360);
					iLocal_247 = 1;
				}
			}
			break;
		case 1:
			if (_0xb5ef6fef2dc9ebed(iVar360))
			{
				set_bit(&(Local_186.f_3), 14);
				iLocal_247 = 2;
			}
			break;
		case 2:
			if (_0x45bf3a6239a576b7())
			{
				set_bit(&(Local_186.f_3), 14);
				iLocal_247 = 3;
				return 1;
			}
			break;
	}
	return 0;
}

int func_40()
{
	iVar0 = 1;
	if (is_bit_set(Local_186.f_3, 15) && is_bit_set(Local_186.f_3, 16))
	{
		return iVar0;
	}
	if (!does_entity_exist(iVar364))
	{
		request_model(iVar362, false);
		if (has_model_loaded(iVar362))
		{
			iLocal_366 = create_object(iVar362, Local_186.f_17, false, false, false, false, false);
		}
		iVar0 = 0;
	}
	else if (!is_bit_set(Local_186.f_3, 15))
	{
		set_entity_visible(iVar364, false);
		set_bit(&(Local_186.f_3), 15);
	}
	if (!does_entity_exist(iVar365))
	{
		request_model(iVar361, false);
		if (has_model_loaded(iVar361))
		{
			iLocal_367 = func_89(iVar361, Local_186.f_7, 0f, 0, 1, 1, 0, 1, 1, 0, 0);
		}
		iVar0 = 0;
	}
	else if (!is_bit_set(Local_186.f_3, 16))
	{
		set_entity_visible(iVar365, false);
		func_90(&uLocal_257, iVar365, sVar371, 0);
		stop_ped_speaking(iVar365, true);
		set_bit(&(Local_186.f_3), 16);
	}
	return iVar0;
}

bool func_41()
{
	iVar0 = 0;
	if (_0xdf7b5144e25cd3fe(Local_248.f_1, "pl_lighting_shot1") && _0xdf7b5144e25cd3fe(Local_248.f_1, "pl_lighting_shot2"))
	{
		if (_0x23e33cb9f4a3f547(Local_248.f_1, "pl_lighting_shot1") && _0x23e33cb9f4a3f547(Local_248.f_1, "pl_lighting_shot2"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_42()
{
	if (!_is_anim_scene_started(Local_186.f_2, false))
	{
		switch (iVar358)
		{
			case 0:
				if (!func_91())
				{
					return false;
				}
				else
				{
					func_92(0);
					iLocal_212 = 0;
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_lie", true);
				}
				break;
			case 1:
				if (!func_93())
				{
					return false;
				}
				else
				{
					func_92(3);
					iLocal_212 = 3;
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_sit", true);
				}
				break;
			case 2:
				if (!func_94())
				{
					return false;
				}
				else
				{
					func_92(6);
					iLocal_212 = 6;
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_stand", true);
				}
				break;
		}
		set_anim_scene_origin(Local_186.f_2, Local_186.f_14, 0f, 0f, Local_186.f_20, 2);
		set_anim_scene_entity(Local_186.f_2, func_95(), Global_34, 0);
		set_anim_scene_entity(Local_186.f_2, func_96(), iVar364, 0);
		set_anim_scene_entity(Local_186.f_2, "IG_GenStoryMale", iVar365, 0);
		_set_anim_scene_playback_list_bool(Local_248.f_1, "pl_lighting_shot1", true);
		start_anim_scene(Local_248.f_1);
		start_anim_scene(Local_186.f_2);
	}
	else
	{
		return true;
	}
	return false;
}

void func_43()
{
	if (!func_2(&uLocal_377))
	{
		func_6(&uLocal_377);
	}
}

void func_44(int iParam0)
{
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		do_screen_fade_in(iParam0);
	}
}

void func_45()
{
	if (is_bit_set(Local_186.f_3, 2))
	{
		if (!is_bit_set(Local_186.f_3, 4))
		{
			if (!is_bit_set(Local_186.f_3, 9))
			{
				if (func_97())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, sVar367, true);
					_set_anim_scene_playback_list_bool(Local_248.f_1, "pl_lighting_shot2", true);
					set_bit(&(Local_186.f_3), 9);
					iLocal_212 = 9;
				}
			}
		}
	}
	switch (iLocal_212)
	{
		case 0:
			func_98();
			if (_0x1f0e401031e20146(Local_186.f_2, "pl_lie"))
			{
				if (func_99())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_lie_to_stand", true);
					iLocal_212 = 2;
				}
				if (func_100())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_lie_to_sit", true);
					iLocal_212 = 1;
				}
			}
			break;
		case 1:
			if (func_93())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_lie_to_sit") && _0x8d81e7824b7753f7(Local_186.f_2, "s_sit", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_sit"))
				{
					func_92(3);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_sit", true);
					func_101();
					func_102();
					iLocal_212 = 3;
				}
			}
			break;
		case 2:
			if (func_94())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_lie_to_stand") && _0x8d81e7824b7753f7(Local_186.f_2, "s_stand", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_stand"))
				{
					func_92(6);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_stand", true);
					func_101();
					func_102();
					iLocal_212 = 6;
				}
			}
			break;
		case 3:
			func_98();
			if (_0x1f0e401031e20146(Local_186.f_2, "pl_sit"))
			{
				if (func_99())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_sit_to_lie", true);
					iLocal_212 = 5;
				}
				if (func_100())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_sit_to_stand", true);
					iLocal_212 = 4;
				}
			}
			break;
		case 4:
			if (func_94())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_sit_to_stand") && _0x8d81e7824b7753f7(Local_186.f_2, "s_stand", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_stand"))
				{
					func_92(6);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_stand", true);
					func_101();
					func_102();
					iLocal_212 = 6;
				}
			}
			break;
		case 5:
			if (func_91())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_sit_to_lie") && _0x8d81e7824b7753f7(Local_186.f_2, "s_lie", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_lie"))
				{
					func_92(0);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_lie", true);
					func_101();
					func_102();
					iLocal_212 = 0;
				}
			}
			break;
		case 6:
			func_98();
			if (_0x1f0e401031e20146(Local_186.f_2, "pl_stand"))
			{
				if (func_99())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_stand_to_sit", true);
					iLocal_212 = 7;
				}
				if (func_100())
				{
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_stand_to_lie", true);
					iLocal_212 = 8;
				}
			}
			break;
		case 7:
			if (func_93())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_stand_to_sit") && _0x8d81e7824b7753f7(Local_186.f_2, "s_sit", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_sit"))
				{
					func_92(3);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_sit", true);
					func_101();
					func_102();
					iLocal_212 = 3;
				}
			}
			break;
		case 8:
			if (func_91())
			{
				if ((_0x1f0e401031e20146(Local_186.f_2, "pl_stand_to_lie") && _0x8d81e7824b7753f7(Local_186.f_2, "s_lie", 1)) || _0x1f0e401031e20146(Local_186.f_2, "pl_lie"))
				{
					func_92(0);
					_set_anim_scene_playback_list_bool(Local_186.f_2, "pl_lie", true);
					func_101();
					func_102();
					iLocal_212 = 0;
				}
			}
			break;
		case 9:
			if (_0x1f0e401031e20146(Local_186.f_2, sVar367))
			{
				if (!is_entity_visible(iVar364))
				{
					set_entity_visible(iVar364, true);
				}
				if (_get_anim_scene_progress(Local_186.f_2) > 0.2f)
				{
					if (!is_entity_visible(iVar365))
					{
						set_entity_visible(iVar365, true);
					}
					else if (!is_bit_set(Local_186.f_3, 28))
					{
						if (func_103(&uLocal_257, cLocal_370, 1, 0, 0, 0))
						{
							set_bit(&(Local_186.f_3), 28);
						}
					}
				}
				if (_get_anim_scene_progress(Local_186.f_2) > 0.7f)
				{
					set_bit(&(Local_186.f_3), 3);
					iLocal_212 = 10;
				}
			}
			break;
		case 10:
			break;
	}
}

void func_46()
{
	if (is_bit_set(Local_186.f_3, 2) || is_bit_set(Local_186.f_3, 4))
	{
		return;
	}
	switch (Local_186)
	{
		case 0:
			if (is_bit_set(Local_186.f_3, 25))
			{
				func_64(&uLocal_374);
				Local_186 = 2;
			}
			break;
		case 1:
			if (!func_2(&uLocal_374))
			{
				func_6(&uLocal_374);
			}
			else if (func_104(&uLocal_374) >= 10f)
			{
				func_64(&uLocal_374);
				Local_186 = 2;
			}
			break;
		case 2:
			if (iVar356 > 0)
			{
				if (!func_2(&uLocal_374))
				{
					func_6(&uLocal_374);
				}
				else if (func_104(&uLocal_374) >= fVar359)
				{
					if (iVar356 < 100)
					{
						iLocal_358 = (iVar356 - iVar356);
					}
					else
					{
						iLocal_358 = (iVar356 - 100);
					}
					set_bit(&(Local_186.f_3), 7);
					func_64(&uLocal_374);
				}
			}
			else if (!is_bit_set(Local_186.f_3, 4))
			{
				func_105();
				set_bit(&(Local_186.f_3), 4);
				Local_186 = 4;
			}
			break;
		case 4:
			break;
	}
}

bool func_47()
{
	if (func_106())
	{
		return true;
	}
	return false;
}

void func_48()
{
	if (func_107(iVar381))
	{
		if (func_108(iVar381, 1))
		{
			return;
		}
	}
	if (func_109())
	{
		return;
	}
	if ((!func_110() && !is_bit_set(Local_186.f_3, 18)) && !is_bit_set(Local_186.f_3, 19))
	{
		fVar0 = get_control_normal(0, iLocal_251);
		if (fVar0 > 0f)
		{
			set_bit(&(Local_186.f_3), 18);
		}
		else if (fVar0 < 0f)
		{
			set_bit(&(Local_186.f_3), 19);
		}
	}
}

void func_49()
{
	if (is_bit_set(Local_186.f_3, 5))
	{
		if (!func_107(iVar380))
		{
			iLocal_382 = func_112(func_111(), iLocal_250, Global_34, 3, 0, 0, 0, 4, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_113())
		{
			func_114(iVar380, 0);
			if (func_115(iVar380, 1))
			{
				func_52();
				func_105();
				set_bit(&(Local_186.f_3), 2);
			}
			else if (is_bit_set(Local_186.f_3, 7))
			{
				func_116(iVar380, func_111(), 1);
				clear_bit(&(Local_186.f_3), 7);
			}
		}
		else
		{
			func_114(iVar380, 1);
		}
	}
}

void func_50()
{
	if (!is_bit_set(Local_186.f_3, 2))
	{
		if (!func_107(iVar381))
		{
			iLocal_383 = func_112("JAIL_CELL_ACTIONS", iLocal_253, Global_34, 3, 0, 0, 0, 3, 0.2f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (!func_109() && !func_110())
		{
			func_114(iVar381, 0);
			if (func_108(iVar381, 1))
			{
				func_117(iVar381, iVar355, 0, 1);
				if (!func_107(iVar382))
				{
					iLocal_384 = func_112(func_118(), iLocal_254, Global_34, 3, 0, 0, 0, 0, 0.2f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_117(iVar382, iVar355, 0, 1);
				}
				else if (func_119(iVar382, 0))
				{
					set_bit(&(Local_186.f_3), 20);
				}
				if (!func_107(iVar383))
				{
					iLocal_385 = func_112(func_120(), iLocal_255, Global_34, 3, 0, 0, 0, 0, 0.2f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_117(iVar383, iVar355, 0, 1);
				}
				else if (func_119(iVar383, 0))
				{
					set_bit(&(Local_186.f_3), 21);
				}
				if (!func_107(iVar384))
				{
					iLocal_386 = func_112(func_121(), iVar254, Global_34, 3, 0, 0, 0, 0, 0.2f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_117(iVar384, iVar355, 0, 1);
				}
				else if (func_119(iVar384, 0))
				{
					set_bit(&(Local_186.f_3), 22);
				}
				_uiprompt_set_active_group_this_frame(iVar355, "JAIL_CELL_ACTIONS", 1, 0, 0, func_122(iVar381));
			}
			else
			{
				func_123();
			}
		}
		else
		{
			func_114(iVar381, 1);
		}
	}
}

void func_51()
{
	fVar0 = get_control_normal(0, iLocal_252);
	if (!is_bit_set(Local_186.f_3, 23) && !is_bit_set(Local_186.f_3, 24))
	{
		if (fVar0 != 0f)
		{
			set_bit(&(Local_186.f_3), 23);
			func_124();
		}
	}
	else if (fVar0 == 0f)
	{
		func_125();
	}
}

void func_52()
{
	if (func_107(iVar380))
	{
		func_126(&iLocal_382, 1, 1);
	}
	if (func_107(iVar381))
	{
		func_126(&iLocal_383, 1, 1);
	}
	if (func_107(iVar382))
	{
		func_126(&iLocal_384, 1, 1);
	}
	if (func_107(iVar383))
	{
		func_126(&iLocal_385, 1, 1);
	}
	if (func_107(iVar384))
	{
		func_126(&iLocal_386, 1, 1);
	}
}

void func_53()
{
	func_127(Global_34, &uLocal_17, 0);
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (((((iVar0 == 0 || iVar0 == 1) || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
		{
			_0x67e21acc5c0c970c(Global_34, iVar0, 1);
		}
		iVar0++;
	}
	_0x4f806a6cfed89468(Global_34, 1);
	func_128(Global_34, 1568311761, 0, 0);
}

void func_54()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_cam_exist(&(Local_219[iVar0])))
		{
			destroy_cam(&(Local_219[iVar0]), false);
		}
		iVar0++;
	}
}

void func_55()
{
	if (is_bit_set(Local_186.f_3, 15))
	{
		if (does_entity_exist(iVar364))
		{
			if (_does_anim_scene_exist(Local_186.f_2))
			{
				if (_0x9d1eca9337be9fc3(Local_186.f_2, func_96()))
				{
					remove_anim_scene_entity(Local_186.f_2, func_96(), iVar364);
				}
			}
			if (is_entity_attached_to_any_ped(iVar364))
			{
				detach_entity(iVar364, false, true);
			}
			delete_object(&iLocal_366);
			set_object_as_no_longer_needed(&iLocal_366);
		}
		set_model_as_no_longer_needed(iVar362);
		clear_bit(&(Local_186.f_3), 15);
	}
	if (is_bit_set(Local_186.f_3, 16))
	{
		if (does_entity_exist(iVar365))
		{
			if (_does_anim_scene_exist(Local_186.f_2))
			{
				if (_0x9d1eca9337be9fc3(Local_186.f_2, "IG_GenStoryMale"))
				{
					remove_anim_scene_entity(Local_186.f_2, "IG_GenStoryMale", iVar365);
				}
			}
			delete_ped(&iLocal_367);
			set_ped_as_no_longer_needed(&iLocal_367);
		}
		set_model_as_no_longer_needed(iVar361);
		clear_bit(&(Local_186.f_3), 16);
	}
}

bool func_56()
{
	if (!is_bit_set(Local_186.f_3, 27))
	{
		if (is_bit_set(Local_186.f_3, 2))
		{
			if (func_129(-100229150))
			{
				set_bit(&(Local_186.f_3), 27);
				return true;
			}
		}
		else if (func_129(-2065202711))
		{
			set_bit(&(Local_186.f_3), 27);
			return true;
		}
		return false;
	}
	return true;
}

void func_57(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1940258->f_6)
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
	force_ped_motion_state(Global_34, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_34), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

int func_58(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_130())
	{
		return 0;
	}
	if (!func_131())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_132(&Global_0, 8);
	}
	func_132(&Global_0, 1);
	return 1;
}

void func_59(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	return func_133(iParam0, iParam1, iParam2);
}

void func_61()
{
	func_134(iVar385);
	if (iVar366 != 0)
	{
		remove_scenario_blocking_area(iVar366, false);
	}
}

void func_62()
{
	if (is_bit_set(Local_186.f_3, 13))
	{
		if (!is_entity_visible(iVar353))
		{
			set_entity_visible(iVar353, true);
		}
		_0xd2b9c78537ed5759(uVar363);
	}
}

void func_63()
{
	if (is_valid_interior(iVar360))
	{
		unpin_interior(iVar360);
	}
}

void func_64(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_65()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (is_bit_set(Local_186.f_3, iVar0))
		{
			clear_bit(&(Local_186.f_3), iVar0);
		}
		iVar0++;
	}
}

float func_66()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_69(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_135(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

float func_70(float fParam0, float fParam1, float fParam2)
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

var func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_72(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

void func_73(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2903.348f, 1314.611f, 43.9349f;
		case 1:
			return -3619.132f, -2600.606f, -14.3415f;
		case 2:
			return -764.5327f, -1263.024f, 43.0245f;
		case 3:
			return 1355.959f, -1302.372f, 76.7606f;
		case 4:
			return 2499.57f, -1308.581f, 47.9537f;
		case 5:
			return -1812.03f, -352.8304f, 160.3981f;
		case 6:
			return -5528.7f, -2926.1f, -0.9f;
		case 7:
			return -272.385f, 809.0407f, 118.3711f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_75(int iParam0)
{
	if (func_136(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (func_137(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_77(vector3 vParam0, float fParam3)
{
	if (func_138(vParam0))
	{
		return false;
	}
	if (func_139(255) == 4)
	{
		return false;
	}
	if (func_83(4, 255))
	{
	}
	func_75(4);
	func_140(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = fParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_141(Global_1102219->f_3879, 36);
	return true;
}

void func_78(bool bParam0, bool bParam1)
{
	if (func_139(255) == 4)
	{
		return;
	}
	if (func_138(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_76(0);
	}
	else
	{
		if (bParam1)
		{
			func_142(0, 0, 0, 1);
		}
		func_75(0);
		func_143(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_144(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_145(Global_1102219->f_3849, 36);
	func_146(Global_1102219->f_3888, 36);
}

int func_79(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_147(iParam2, -372840566);
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
	func_148(uParam1, iParam0, Var3);
	return 1;
}

bool func_80(int iParam0)
{
	if (func_149(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
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

var func_82(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_150(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

bool func_83(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_151(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_152())
	{
		return func_151(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_151(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_84(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	Var2 = 117;
	Var2.f_118 = 50;
	_copy_memory(uParam1, &Var2, 169);
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar171 = func_153(iVar0, 1);
		if (iVar171 != 0)
		{
			iVar1 = _0xdbc4b552b2ae9a83(iParam0, iVar171);
			if (is_weapon_valid(iVar1))
			{
				(*uParam1)[iVar0] = iVar1;
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_154(iParam0, &(uParam1->f_118));
}

int func_85(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_155(iParam0, iParam1, bParam2, bParam3);
}

bool func_86(int iParam0)
{
	func_81(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		return door_system_get_door_state(iParam0) == 1;
	}
	return false;
}

void func_87(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_81(iParam0, 0, 0);
	if (func_80(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_156(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_157(iParam0, 1);
			}
			else
			{
				func_158(iParam0, 1);
			}
		}
		else
		{
			func_159(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_160())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_88()
{
	if (is_bit_set(Local_186.f_3, 8))
	{
		return true;
	}
	else if (!func_2(&uLocal_374))
	{
		func_6(&uLocal_374);
	}
	else if (func_161(&uLocal_374) > 10f)
	{
		func_64(&uLocal_374);
		set_bit(&(Local_186.f_3), 8);
		return true;
	}
	return false;
}

int func_89(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_162(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_90(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_163(uParam0, iParam1, sParam2))
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

bool func_91()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie_to_sit")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie_to_stand"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie_to_sit")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie_to_stand"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			Local_213 = "pl_stand";
			Local_213.f_1 = "pl_stand_var_a";
			Local_213.f_2 = "pl_stand_var_b";
			Local_213.f_3 = "pl_stand_var_c";
			Local_213.f_4 = "pl_stand_var_a";
			Local_213.f_5 = "s_stand";
			break;
		case 3:
			Local_213 = "pl_sit";
			Local_213.f_1 = "pl_sit_var_a";
			Local_213.f_2 = "pl_sit_var_b";
			Local_213.f_3 = "pl_sit_var_c";
			Local_213.f_4 = "pl_sit_var_a";
			Local_213.f_5 = "s_sit";
			break;
		case 0:
			Local_213 = "pl_lie";
			Local_213.f_1 = "pl_lie_var_a";
			Local_213.f_2 = "pl_lie_var_b";
			Local_213.f_3 = "pl_lie_var_c";
			Local_213.f_4 = "pl_lie_var_a";
			Local_213.f_5 = "s_lie";
			break;
	}
	if (iLocal_211 != 0)
	{
		iLocal_211 = 0;
	}
}

bool func_93()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit_to_lie")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit_to_stand"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit_to_lie")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit_to_stand"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_94()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand_to_lie")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand_to_sit"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand_to_lie")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand_to_sit"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

char* func_95()
{
	switch (Global_1296851->f_2.f_2)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
			if (is_bit_set(Local_186.f_3, 1))
			{
				sVar0 = "mp_male^1";
			}
			else
			{
				sVar0 = "mp_Female";
			}
			break;
		case 1:
		case 2:
		case 3:
			if (is_bit_set(Local_186.f_3, 1))
			{
				sVar0 = "MP_Male";
			}
			else
			{
				sVar0 = "MP_Female";
			}
			break;
	}
	return sVar0;
}

char* func_96()
{
	switch (Global_1296851->f_2.f_2)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			sVar0 = "s_inv_moneyclip01x";
			break;
	}
	return sVar0;
}

bool func_97()
{
	iVar0 = 0;
	if (Global_1296851->f_2.f_2 == 0)
	{
		sLocal_369 = "pl_bribe_Annesburg";
	}
	else
	{
		sLocal_369 = "pl_bribe";
	}
	if (_0xdf7b5144e25cd3fe(Local_186.f_2, sVar367))
	{
		if (_0x23e33cb9f4a3f547(Local_186.f_2, sVar367))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_98()
{
	switch (iLocal_211)
	{
		case 0:
			if (func_164())
			{
				iLocal_211 = 1;
			}
			break;
		case 1:
			if (!func_110())
			{
				if (_0x1f0e401031e20146(Local_186.f_2, Local_213))
				{
					if (is_bit_set(Local_186.f_3, 20))
					{
						Local_213.f_4 = Local_213.f_1;
					}
					else if (is_bit_set(Local_186.f_3, 21))
					{
						Local_213.f_4 = Local_213.f_2;
					}
					else if (is_bit_set(Local_186.f_3, 22))
					{
						Local_213.f_4 = Local_213.f_3;
					}
					if (func_109())
					{
						func_123();
						_set_anim_scene_playback_list_bool(Local_186.f_2, Local_213.f_4, true);
						iLocal_211 = 2;
					}
				}
			}
			break;
		case 2:
			if (_0x1f0e401031e20146(Local_186.f_2, Local_213.f_4))
			{
				iLocal_211 = 3;
			}
			break;
		case 3:
			if (_0x8d81e7824b7753f7(Local_186.f_2, Local_213.f_5, 1))
			{
				_set_anim_scene_playback_list_bool(Local_186.f_2, Local_213, true);
				iLocal_211 = 4;
			}
			break;
		case 4:
			if (_0x1f0e401031e20146(Local_186.f_2, Local_213))
			{
				func_102();
				iLocal_211 = 0;
			}
			break;
	}
}

bool func_99()
{
	if (is_bit_set(Local_186.f_3, 19))
	{
		return true;
	}
	return false;
}

bool func_100()
{
	if (is_bit_set(Local_186.f_3, 18))
	{
		return true;
	}
	return false;
}

void func_101()
{
	clear_bit(&(Local_186.f_3), 18);
	clear_bit(&(Local_186.f_3), 19);
}

void func_102()
{
	if (is_bit_set(Local_186.f_3, 20))
	{
		clear_bit(&(Local_186.f_3), 20);
	}
	if (is_bit_set(Local_186.f_3, 21))
	{
		clear_bit(&(Local_186.f_3), 21);
	}
	if (is_bit_set(Local_186.f_3, 22))
	{
		clear_bit(&(Local_186.f_3), 22);
	}
}

bool func_103(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_165(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

float func_104(var uParam0)
{
	if (!func_2(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_15(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_66() - uParam0->f_1);
}

void func_105()
{
	if (func_2(&uLocal_377) && !func_15(&uLocal_377))
	{
		func_166(&uLocal_377);
	}
}

bool func_106()
{
	return Global_1896738->f_382;
}

bool func_107(int iParam0)
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

bool func_108(int iParam0, bool bParam1)
{
	if (bParam1 && !func_107(iParam0))
	{
		return false;
	}
	iVar0 = func_167(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

bool func_109()
{
	if ((is_bit_set(Local_186.f_3, 20) || is_bit_set(Local_186.f_3, 21)) || is_bit_set(Local_186.f_3, 22))
	{
		return true;
	}
	return false;
}

bool func_110()
{
	if (is_bit_set(Local_186.f_3, 18) || is_bit_set(Local_186.f_3, 19))
	{
		return true;
	}
	return false;
}

char* func_111()
{
	return _create_var_string(2, "JAIL_PAY_BOUNTY", sVar356);
}

int func_112(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_168(iVar0, 2))
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
				func_169(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_113()
{
	if (func_170() >= iVar356)
	{
		return true;
	}
	return false;
}

void func_114(int iParam0, bool bParam1)
{
	if (!func_107(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	_uiprompt_set_enabled((*Global_1951255)[iVar0]->f_3, !bParam1);
}

bool func_115(int iParam0, bool bParam1)
{
	if (bParam1 && !func_107(iParam0))
	{
		return false;
	}
	iVar0 = func_167(iParam0);
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

void func_116(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_107(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

void func_117(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_107(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

char* func_118()
{
	if (are_strings_equal(Local_213, "pl_lie"))
	{
		sVar0 = "JAIL_FIDGET_LIE_A";
	}
	else if (are_strings_equal(Local_213, "pl_sit"))
	{
		sVar0 = "JAIL_FIDGET_SIT_A";
	}
	else if (are_strings_equal(Local_213, "pl_stand"))
	{
		sVar0 = "JAIL_FIDGET_STAND_A";
	}
	return sVar0;
}

bool func_119(int iParam0, bool bParam1)
{
	if (bParam1 && !func_107(iParam0))
	{
		return false;
	}
	iVar0 = func_167(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

char* func_120()
{
	if (are_strings_equal(Local_213, "pl_lie"))
	{
		sVar0 = "JAIL_FIDGET_LIE_B";
	}
	else if (are_strings_equal(Local_213, "pl_sit"))
	{
		sVar0 = "JAIL_FIDGET_SIT_B";
	}
	else if (are_strings_equal(Local_213, "pl_stand"))
	{
		sVar0 = "JAIL_FIDGET_STAND_B";
	}
	return sVar0;
}

char* func_121()
{
	if (are_strings_equal(Local_213, "pl_lie"))
	{
		sVar0 = "JAIL_FIDGET_LIE_C";
	}
	else if (are_strings_equal(Local_213, "pl_sit"))
	{
		sVar0 = "JAIL_FIDGET_SIT_C";
	}
	else if (are_strings_equal(Local_213, "pl_stand"))
	{
		sVar0 = "JAIL_FIDGET_STAND_C";
	}
	return sVar0;
}

int func_122(int iParam0)
{
	iVar0 = func_167(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

void func_123()
{
	_uiprompt_remove_group(func_122(iVar381), uVar355);
	if (func_107(iVar382))
	{
		func_126(&iLocal_384, 1, 1);
	}
	if (func_107(iVar383))
	{
		func_126(&iLocal_385, 1, 1);
	}
	if (func_107(iVar384))
	{
		func_126(&iLocal_386, 1, 1);
	}
}

void func_124()
{
	iLocal_356 = iVar354 + 1;
	iVar0 = 0;
	if (iVar354 >= 3)
	{
		iLocal_356 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == iVar354)
		{
			set_cam_active(&(Local_219[iVar0]), true);
		}
		else
		{
			set_cam_active(&(Local_219[iVar0]), false);
		}
		iVar0++;
	}
}

void func_125()
{
	clear_bit(&(Local_186.f_3), 23);
	clear_bit(&(Local_186.f_3), 24);
}

void func_126(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_107(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_167(*iParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_171(iVar0);
	*iParam0 = 0;
}

void func_127(int iParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		remove_all_ped_weapons(iParam0, true, true);
		_0x1b83c0deebcbb214(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_172(uParam1[iVar0]))
		{
			if (func_173(uParam1[iVar0]))
			{
				if (!has_ped_got_weapon(iParam0, uParam1[iVar0], 0, false))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					if (iParam0 == Global_34)
					{
						_0xe9bd19f8121ade3e(Global_34, uParam1[iVar0]);
					}
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_174(iParam0, &(uParam1->f_118));
}

int func_128(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_175(iParam0, iParam1, bParam2, 1, bParam3);
}

bool func_129(int iParam0)
{
	iVar3 = 0;
	switch (Local_186.f_23)
	{
		case 0:
			switch (iParam0)
			{
				case -100229150:
					Local_186.f_24 = func_60(-1228177771, iVar355, 0);
					break;
				case -2065202711:
					Local_186.f_24 = func_60(-506555739, 0, 0);
					break;
			}
			func_176(1);
			break;
		case 1:
			if (!func_177(Local_186.f_24, 64))
			{
			}
			else
			{
				func_176(3);
				Jump @415; //curOff = 142
				if (func_177(Local_186.f_24, 2))
				{
					func_176(2);
				}
				else if (func_177(Local_186.f_24, 4) || !func_177(Local_186.f_24, 64))
				{
					if (func_178(Local_186.f_24))
					{
						func_176(2);
					}
					else
					{
						func_179(Local_186.f_24, 32);
						Jump @415; //curOff = 223
						Var8 = { func_180(Local_186.f_24) };
						_0x80a02d9f948a8bca(&Var8, &uVar4);
						iLocal_359 = (iVar356 / 100);
						iVar1 = ceil((IntToFloat(iVar356) * fVar358));
						iLocal_358 = (iVar355 / 100);
						iVar2 = ceil((IntToFloat(iVar355) * fVar358));
						iVar0 = (iVar1 - iVar2);
						if (255 != Global_1248240->f_8903.f_116)
						{
							iVar3 = get_player_ped(Global_1248240->f_8903.f_116);
						}
						_0xb204bf9f30298d77(&uVar4, Global_1296851->f_2.f_4, iVar3, iParam0, iVar0, iVar2, Global_1248240->f_8903.f_116.f_1);
						func_179(Local_186.f_24, 32);
						if (func_177(Local_186.f_24, 2))
						{
							func_176(4);
						}
						else
						{
							func_176(5);
						}
						Global_1248240->f_8903.f_116 = 255;
						Jump @415; //curOff = 408
						return true;
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_130()
{
	return !Global_1572887->f_9;
}

bool func_131()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

void func_134(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_135(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_181(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_136(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_137(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_138(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_139(int iParam0)
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

void func_140(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_141(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_142(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_182(iParam0);
	if (!func_183(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_184(128) && !func_185(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_186() == 4)
	{
		func_76(18);
	}
	func_187(1024);
}

void func_143(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_144(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_145(struct<29> Param0, var uParam29, int iParam30)
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

void func_146(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_147(int iParam0, int iParam1)
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

void func_148(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_188(uParam0))
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

bool func_149(int iParam0)
{
	return iParam0 != 0;
}

void func_150(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

bool func_151(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_152()
{
	return Global_1102219->f_3672;
}

int func_153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2069893421;
		case 1:
			return 1747661667;
		case 2:
			return -875426853;
		case 3:
			return 757105507;
		case 4:
			return -1879729569;
		case 5:
			return 787316203;
		case 6:
			return 2129028479;
		case 7:
			return 1261138928;
		case 8:
			return -1894256235;
		case 9:
			return 1706052688;
		case 10:
			return 1285391378;
		case 11:
			return 693005399;
		case 12:
			return 790678034;
		case 13:
			return 2031132011;
		case 14:
			return -1019271530;
		case 15:
			return 1183803081;
		case 16:
			return 1338756401;
		case 17:
			return 744226541;
		case 18:
			return 530671939;
		case 19:
			return -367868014;
		case 20:
			return -1549775456;
		case 21:
			return -1604265010;
		case 22:
			return -1827447245;
		case 23:
			return -759061492;
		case 24:
			return 1105471824;
		case 25:
			return -2048056274;
		case 26:
			return 1741725206;
		case 27:
			return 1901448492;
		case 28:
			return 911414965;
		case 29:
			return 1062881804;
		case 30:
			return -944178516;
		case 31:
			return 1400887301;
		case 32:
			return 1865339861;
		case 33:
			return 1440632655;
		case 34:
			return -1157194180;
		case 35:
			return -1151085798;
		case 36:
			return -1915486054;
		case 37:
			return -377574959;
		case 38:
			return -102827824;
		case 39:
			return 41932468;
		case 40:
			return 1437199060;
		case 41:
			return 1985273028;
		case 42:
			return -1988984077;
		case 43:
			return 1261539922;
		case 44:
			return -1190908814;
		case 45:
			return 805845691;
		case 46:
			return 214785091;
		case 47:
			return -1169075737;
		case 48:
			return -2073547330;
		case 49:
			return 1472024063;
		case 50:
			return -585098035;
		case 51:
			return -2141145462;
		case 52:
			return -832908671;
		case 53:
			return 1961205920;
		case 54:
			return -2038873145;
		case 55:
			return -1327698122;
		case 56:
			return 992695664;
		case 57:
			return -937655290;
		case 58:
			return -1914604474;
		case 59:
			return 205166155;
		case 60:
			return 1780028424;
		case 61:
			return -835345303;
		case 62:
			return 558731558;
		case 63:
			return 1921351553;
		case 64:
			return -378561682;
		case 65:
			return 1306457250;
		case 66:
			return 1131758526;
		case 67:
			return 358997942;
		case 68:
			return -1976230089;
		case 69:
			return -907971236;
		case 70:
			return 253727941;
		case 71:
			return -1271310569;
		case 72:
			return -1461871483;
		case 73:
			return -1239377811;
		case 74:
			return 1639899405;
		case 75:
			return -1816811601;
		case 76:
			return -2139497371;
		case 77:
			return 978801228;
		case 78:
			return -1309844859;
		case 79:
			return -102545856;
		case 80:
			return -1882615108;
		case 81:
			return 104820669;
		case 82:
			return 72801698;
		case 83:
			return -1533288167;
		case 84:
			return 2041846130;
		case 85:
			return -350556716;
		case 86:
			return -353010695;
		case 87:
			return -692335380;
		case 88:
			return 1504223919;
		case 89:
			return -520556863;
		case 90:
			return 713508039;
		case 91:
			return -82191741;
		case 92:
			return -1221836150;
		case 93:
			return 229544920;
		case 94:
			return 1423490462;
		case 95:
			return 266787856;
		case 96:
			return -863017340;
		case 97:
			return 175025255;
		case 98:
			return -2066076661;
		case 99:
			return 745945503;
		case 100:
			return -596510485;
		case 101:
			return 1995043222;
		case 102:
			return 709801630;
		case 103:
			return 1190538002;
		case 104:
			return -1812870325;
		case 105:
			return 1753192824;
		case 106:
			return -936508922;
		case 107:
			return -1672929718;
		case 108:
			return 1562378696;
		case 109:
			return 7562841;
		case 110:
			return 1250977037;
		case 111:
			return 1139025222;
		case 112:
			return 1128086492;
		case 113:
			return -1948083328;
		case 114:
			return 1993361168;
		case 115:
			return 1314299724;
		case 116:
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

void func_154(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar1 = func_189(iVar0);
		if (func_190(iVar1, 0))
		{
			(*uParam1)[iVar0] = get_ped_ammo_by_type(iParam0, iVar1);
		}
		iVar0++;
	}
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1952637->f_2843.f_1 >= 5)
	{
		return 0;
	}
	if (!func_191(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_192(iParam0);
	return func_193(iParam1, iVar0, bParam2, 1);
}

void func_156(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_80(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_157(int iParam0, bool bParam1)
{
	if (func_80(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_158(int iParam0, bool bParam1)
{
	if (func_80(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_159(int iParam0, bool bParam1)
{
	if (func_80(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_160()
{
	return true;
}

float func_161(var uParam0)
{
	if (!func_2(uParam0))
	{
		return 0f;
	}
	if (func_15(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_66() - uParam0->f_1);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
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
			func_194(iParam0, 0, 1);
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
			func_195(iParam0, 0);
			bVar0 = true;
		}
		func_196(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_163(var uParam0, int iParam1, char* sParam2)
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

bool func_164()
{
	iVar0 = 0;
	if (are_strings_equal(Local_213, "pl_lie"))
	{
		if (func_197() && func_91())
		{
			iVar0 = 1;
		}
	}
	else if (are_strings_equal(Local_213, "pl_sit"))
	{
		if (func_198() && func_93())
		{
			iVar0 = 1;
		}
	}
	else if (are_strings_equal(Local_213, "pl_stand"))
	{
		if (func_199() && func_94())
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_165(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&cParam0, cParam3[iVar0], 0))
				{
					add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

void func_166(var uParam0)
{
	if (!func_2(uParam0))
	{
	}
	if (!func_15(uParam0))
	{
		uParam0->f_2 = (func_66() - uParam0->f_1);
		func_67(uParam0, 2);
	}
}

int func_167(int iParam0)
{
	return iParam0;
}

bool func_168(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_169(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_200(iParam0, 1);
	func_201(iParam0, 1);
	func_202(iParam0, 128);
}

int func_170()
{
	if (func_203() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_171(int iParam0)
{
	if (!func_204(iParam0))
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

bool func_172(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_173(int iParam0)
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

void func_174(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar1 = func_189(iVar0);
		if (func_190(iVar1, 0))
		{
			if (uParam1[iVar0] > 0)
			{
				_add_ammo_to_ped_by_type(iParam0, iVar1, uParam1[iVar0], 752097756);
			}
		}
		iVar0++;
	}
}

int func_175(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_205(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_192(iParam1);
	return func_206(iParam0, iVar0, bParam2, bParam2, bParam4);
}

void func_176(int iParam0)
{
	Local_186.f_23 = iParam0;
}

bool func_177(int iParam0, int iParam1)
{
	return (Global_1248240->f_8903.f_16[iParam0]->f_5 && iParam1) != 0;
}

bool func_178(int iParam0)
{
	return Global_1248240->f_8903.f_16[iParam0]->f_7 != -1307093097;
}

void func_179(int iParam0, int iParam1)
{
	Global_1248240->f_8903.f_16[iParam0]->f_5 = (Global_1248240->f_8903.f_16[iParam0]->f_5 - (Global_1248240->f_8903.f_16[iParam0]->f_5 && iParam1));
}

struct<4> func_180(int iParam0)
{
	return Global_1248240->f_8903.f_16[iParam0]->f_1;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_182(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_183(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_184(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_185(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_186()
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

void func_187(int iParam0)
{
	if (func_207(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_188(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 954660191;
		case 1:
			return 529538990;
		case 2:
			return -596647170;
		case 3:
			return -1548100798;
		case 4:
			return -1040876935;
		case 5:
			return 296901449;
		case 6:
			return 126245522;
		case 7:
			return -1368511730;
		case 8:
			return -159383285;
		case 9:
			return -1233969318;
		case 10:
			return 480079517;
		case 11:
			return 840671577;
		case 12:
			return 424030678;
		case 13:
			return 446901936;
		case 14:
			return -355466967;
		case 15:
			return 1446246869;
		case 16:
			return -2006166057;
		case 17:
			return 1950175060;
		case 18:
			return 836939099;
		case 19:
			return 1185302722;
		case 20:
			return -1411815376;
		case 21:
			return 236338048;
		case 22:
			return -1330115686;
		case 23:
			return -578347576;
		case 24:
			return -1668585578;
		case 25:
			return 231465488;
		case 26:
			return 1148521608;
		case 27:
			return 1681219929;
		case 28:
			return 1232099469;
		case 29:
			return 78180283;
		case 30:
			return -2084181920;
		case 31:
			return 1243983880;
		case 32:
			return 218444191;
		case 33:
			return 1654725195;
		case 34:
			return 1838310467;
		case 35:
			return 1858824185;
		case 36:
			return 200254898;
		case 37:
			return -1878508229;
		case 38:
			return -1077205471;
		case 39:
			return 314966081;
		case 40:
			return 588559146;
		case 41:
			return -1639263599;
		case 42:
			return -1860710511;
		case 43:
			return 1507636870;
		case 44:
			return 1828724907;
		case 45:
			return 2074469742;
		case 46:
			return 1270940175;
		case 47:
			return -1857826511;
		case 48:
			return 1235846615;
		case 49:
			return -228768324;
		default:
			break;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_191(int iParam0)
{
	Var2 = -961687407;
	if (func_203() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	if (!_0xed4413cee1bf142c(&Var2))
	{
		return false;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
	{
		return false;
	}
	iVar1 = func_208(iParam0);
	func_209(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_209(iVar0, iVar1);
		}
	}
	return true;
}

int func_192(int iParam0)
{
	Var1 = -961687407;
	if (func_203() == -1)
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
	return func_210(iVar0);
}

int func_193(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_211(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_211(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_212(0))
	{
	}
	func_213(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_194(int iParam0, bool bParam1, bool bParam2)
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

void func_195(int iParam0, bool bParam1)
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

void func_196(int iParam0, int iParam1)
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

bool func_197()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie_var_a") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie_var_b")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_lie_var_c"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie_var_a") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie_var_b")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_lie_var_c"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_198()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit_var_a") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit_var_b")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_sit_var_c"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit_var_a") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit_var_b")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_sit_var_c"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_199()
{
	iVar0 = 0;
	if ((_0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand_var_a") && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand_var_b")) && _0xdf7b5144e25cd3fe(Local_186.f_2, "pl_stand_var_c"))
	{
		if ((_0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand_var_a") && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand_var_b")) && _0x23e33cb9f4a3f547(Local_186.f_2, "pl_stand_var_c"))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_200(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_168(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_202(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_203()
{
	return Global_1572887->f_13;
}

bool func_204(int iParam0)
{
	return func_168(iParam0, 2);
}

bool func_205(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
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
		return true;
	}
	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_215(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_216(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return true;
}

int func_206(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_217(bParam4))
	{
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_211(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_211(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_213(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_207(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_208(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_209(int iParam0, int iParam1)
{
	if (!func_218(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_219(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_220(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_221(iVar1))
		{
			func_222(10, iParam1);
		}
	}
	func_222(iVar0, iParam1);
}

int func_210(int iParam0)
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

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_223(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_224(Var0);
}

bool func_212(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_225(iVar0, 1);
		if (func_226(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_227(iVar0) == -1)
			{
				func_228(iVar0, 0);
				func_229(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_230(iVar2, 2, 6);
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

void func_213(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_231(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_232(32768) && func_226(1108822547, 8)) && func_233(10, iParam3))
	{
		func_234(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_235(iVar2, 1);
		if (func_226(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_233(iVar0, iParam3))
		{
		}
		else if ((func_226(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_226(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_236(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_230(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0] == &Global_1952637->f_2764[iVar0]) && uParam0->f_1[iVar0]->f_1 == Global_1952637->f_2764[iVar0]->f_1)
				{
				}
				else
				{
					func_236(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_226(iVar2, 1))
					{
						func_237(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_238(uParam0->f_1[iVar0], iParam1);
				}
				iVar1++;
				if (Global_1952637->f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					_0xaab86462966168ce(iParam1, 1);
					_update_ped_variation(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

int func_214(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2843.f_1)
	{
		if (&Global_1952637->f_2843.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_215(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_216(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

bool func_217(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_225(iVar0, 1);
		if (!func_226(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_228(iVar0, 0);
				func_229(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_237(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_221(func_239(iVar0)) != 81053684 && !func_219(func_239(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_219(func_239(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_221(func_239(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_221(func_239(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_221(func_239(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_219(func_239(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_235(iVar0, 1);
	return true;
}

int func_219(int iParam0, int iParam1)
{
	if (!func_190(iParam0, 0))
	{
		return func_241(func_240(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
{
	iVar0 = func_242(0);
	func_243(&(Global_1952637->f_1043), iVar0, uParam0, 1409451727, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1373051002))
	{
		return 0;
	}
	return uVar1;
}

int func_221(int iParam0)
{
	if (!func_190(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_222(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

void func_223(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_224(struct<4> Param0)
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
			if (func_244(Param0))
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
			func_245(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_223(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_244(Param0))
			{
				return;
			}
			func_245(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_223(8);
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
			if (func_244(Param0))
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
			func_245(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_223(8);
			break;
			break;
	}
}

int func_225(int iParam0, int iParam1)
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
			return 735520874;
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

bool func_226(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_235(iParam0, 1)])->f_11 && iParam1) != 0;
}

int func_227(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		if (&Global_1952637->f_2897.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_228(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_246(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_229(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_235(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_235(iParam0, 1)])->f_11 || iParam1);
}

void func_231(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(iParam0, &(Global_1952637->f_4[iVar0]), (*uParam1)[iVar0]->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		_set_ped_body_component(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		_set_ped_body_component(iParam0, iParam3);
	}
}

bool func_232(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

bool func_233(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_234(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_226(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_236(iParam0, iVar0, 0);
			func_230(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_237(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_235(int iParam0, int iParam1)
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

void func_236(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_0xdf631e4bce1b1fc4(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_set_ped_component_disabled(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_235(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_235(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_235(iParam0, 1)])->f_11 && iParam1));
}

void func_238(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

int func_239(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_235(iParam0, 1)]);
}

int func_240(int iParam0)
{
	return iParam0;
}

int func_241(int iParam0, int iParam1)
{
	if (!func_247(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_248();
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

void func_243(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = uParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_244(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_245(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

void func_246(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_249(uParam0, 1))
	{
		func_250(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			uParam0->f_2[iVar0]->f_1 = iParam2;
			return;
		}
		if (Global_1952637->f_83[&uParam0->f_2[iVar0]]->f_2 > Global_1952637->f_83[iParam1]->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*uParam0->f_2[iVar1] = { *(uParam0->f_2[(iVar1 - 1)]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0] = iParam1;
			uParam0->f_2[iVar0]->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_247(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_248()
{
	return Global_1952637->f_1;
}

bool func_249(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_250(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

