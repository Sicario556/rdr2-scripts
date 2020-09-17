void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	uVar0 = ScriptParam_0.f_1;
	while (!func_1(0, 0) && !func_2())
	{
		func_3(&uVar0);
		wait(0);
	}
	func_4(1);
	func_5();
}

bool func_1(bool bParam0, bool bParam1)
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

bool func_2()
{
	if (iLocal_15 == 9)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	disable_control_action(0, -1404316431, false);
	func_6();
	func_7(1, 0, 1, 0);
	switch (iLocal_15)
	{
		case 0:
			func_8(1);
			_0x94a3c1b804d291ec(Global_34, 0, 0, 1, 0);
			set_ped_config_flag(Global_34, 249, true);
			set_ped_config_flag(Global_34, 334, true);
			if (_get_ped_crouch_movement(Global_34))
			{
				_set_ped_crouch_movement(Global_34, false, 0, false);
			}
			func_9(*uParam0);
			func_10(&uLocal_18, 1);
			func_11(1);
			break;
		case 1:
			if (func_12(&uLocal_18) > 1f)
			{
				if (has_anim_dict_loaded(func_13(iLocal_16)))
				{
					if (func_7(0, 0, 0, 0))
					{
						func_14(*uParam0, 8);
					}
					func_11(2);
				}
			}
			break;
		case 2:
			if (!func_7(1, 1, 1, 1))
			{
				task_play_anim(Global_34, func_13(iLocal_16), func_15(iLocal_16), 4f, -4f, -1, 0, 0f, false, 1, false, 0, false);
			}
			func_10(&uLocal_18, 1);
			func_11(3);
			break;
		case 3:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			if (func_12(&uLocal_18) > 2.3f)
			{
				if (!func_7(1, 0, 0, 0))
				{
					if (!is_ped_ragdoll(Global_34))
					{
						set_ped_to_ragdoll(Global_34, 0, 1, 0, false, false, false);
					}
					reset_ped_ragdoll_timer(Global_34);
					do_screen_fade_out(2500);
					_0x89f5e7adecccb49c(Global_34, "very_drunk");
					_0x406ccf555b04fad3(Global_34, 1, 0.6f);
					func_16(0.3f);
					func_10(&uLocal_18, 1);
					func_11(4);
				}
				else
				{
					func_14(*uParam0, iLocal_16);
				}
			}
			break;
		case 4:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				reset_ped_ragdoll_timer(Global_34);
			}
			if (is_screen_faded_out() && func_12(&uLocal_18) > 1.5f)
			{
				if (!func_7(1, 0, 0, 0))
				{
					func_10(&uLocal_18, 1);
					func_16(0.03f);
					func_11(5);
				}
				else
				{
					func_14(*uParam0, 8);
				}
				func_17(uParam0);
			}
			break;
		case 5:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				reset_ped_ragdoll_timer(Global_34);
			}
			if (func_12(&uLocal_18) > 1.5f)
			{
				do_screen_fade_in(2500);
				func_11(6);
			}
			break;
		case 6:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				_0x3ae3552e7c207cc5(Global_34, "NMBS_DRUNK_GETUPS", 1);
			}
			if (func_12(&uLocal_18) > 2.3f)
			{
				if (!is_ped_getting_up(Global_34))
				{
					func_11(7);
				}
			}
			else
			{
				reset_ped_ragdoll_timer(Global_34);
			}
			break;
		case 7:
			if (((!func_7(1, 0, 0, 1) && !is_ped_falling(Global_34)) && !is_entity_in_water(Global_34)) && !func_18(Global_34, 12))
			{
				task_play_anim(Global_34, func_13(iLocal_17), func_15(iLocal_17), 2f, -2f, -1, 68222992, 0f, false, 66048, false, 0, false);
			}
			func_19(1);
			func_10(&uLocal_18, 1);
			func_11(8);
			break;
		case 8:
			if (func_12(&uLocal_18) > 1.75f)
			{
				set_ped_config_flag(Global_34, 249, false);
				set_ped_config_flag(Global_34, 334, false);
				func_11(9);
			}
			break;
		case 9:
			break;
	}
}

void func_4(bool bParam0)
{
	_0x4285804fd65d8066("DRUNK_SHAKE", 0);
	animpostfx_stop("PlayerDrunk01");
	_0x37d7bdba89f13959("PlayerDrunk01");
	_0x58f7db5bd8fa2288(Global_34);
	_0x88a95bb640fc186f(Global_34);
	_0x406ccf555b04fad3(Global_34, 1, 0f);
	func_8(0);
	if (bParam0 && get_ped_config_flag(Global_34, 249, true))
	{
		set_ped_config_flag(Global_34, 249, false);
	}
	if (bParam0 && get_ped_config_flag(Global_34, 334, true))
	{
		set_ped_config_flag(Global_34, 334, false);
	}
}

void func_5()
{
	terminate_this_thread();
}

void func_6()
{
	_uiprompt_disable_prompt_type_this_frame(10);
	_uiprompt_disable_prompt_type_this_frame(11);
	_uiprompt_disable_prompt_type_this_frame(9);
	_uiprompt_disable_prompt_type_this_frame(8);
	_uiprompt_disable_prompt_type_this_frame(7);
	_uiprompt_disable_prompt_type_this_frame(6);
	_uiprompt_disable_prompt_type_this_frame(5);
	_uiprompt_disable_prompt_type_this_frame(4);
	_uiprompt_disable_prompt_type_this_frame(3);
	_uiprompt_disable_prompt_type_this_frame(2);
	_uiprompt_disable_prompt_type_this_frame(1);
	_uiprompt_disable_prompt_type_this_frame(0);
	set_ped_reset_flag(Global_1296859->f_8, 129, true);
	set_ped_reset_flag(Global_1296859->f_8, 103, true);
}

bool func_7(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (((is_ped_dead_or_dying(Global_34, true) || _is_ped_lassoed(Global_34)) || _0x833f0053340ef413(Global_34)) || _0x81dcfd13cf39920e())
	{
		return true;
	}
	if (is_entity_on_fire(Global_34) && bParam0)
	{
		return true;
	}
	if (_0x3bdfcf25b58b0415(Global_34) && iParam1)
	{
		return true;
	}
	if (is_ped_in_combat(Global_34, 0) && bParam3)
	{
		return true;
	}
	if (((_0x84d0bf2b21862059(Global_34) || get_ped_config_flag(Global_34, 227, true)) || func_20(Global_34)) && bParam2)
	{
		clear_ped_tasks(Global_34, 1, 0);
		return true;
	}
	return false;
}

void func_8(int iParam0)
{
	Global_1293332->f_12 = iParam0;
}

void func_9(int iParam0)
{
	if (is_ped_male(Global_34))
	{
		if (iParam0 == -1004468971 || iParam0 == -1706054699)
		{
			iLocal_16 = 4;
			iLocal_17 = 5;
			request_anim_dict(func_13(iLocal_16));
		}
		else
		{
			iLocal_16 = 6;
			iLocal_17 = 7;
			request_anim_dict(func_13(iLocal_16));
		}
	}
	else if (iParam0 == -1004468971 || iParam0 == -1706054699)
	{
		iLocal_16 = 0;
		iLocal_17 = 1;
		request_anim_dict(func_13(iLocal_16));
	}
	else
	{
		iLocal_16 = 2;
		iLocal_17 = 3;
		request_anim_dict(func_13(iLocal_16));
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_22(uParam0);
	}
}

void func_11(int iParam0)
{
	iLocal_15 = iParam0;
}

float func_12(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_23(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 1:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 2:
			return "script_mp@naturalist@player_potions@female@fat";
		case 3:
			return "script_mp@naturalist@player_potions@female@fat";
		case 4:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 5:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 6:
			return "script_mp@naturalist@player_potions@male@fat";
		case 7:
			return "script_mp@naturalist@player_potions@male@fat";
		default:
			break;
	}
	return "";
}

void func_14(var uParam0, int iParam1)
{
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		do_screen_fade_in(2500);
	}
	if (iParam1 != 8)
	{
		stop_anim_task(Global_34, func_13(iParam1), func_15(iParam1), -4f);
	}
	func_17(&uParam0);
	func_11(7);
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "passout_skinny_female";
		case 1:
			return "recover_skinny_upper_female";
		case 2:
			return "passout_fat_female";
		case 3:
			return "recover_fat_upper_female";
		case 4:
			return "passout_skinny_male";
		case 5:
			return "recover_skinny_upper_male";
		case 6:
			return "passout_fat_male";
		case 7:
			return "recover_fat_upper_male";
		case 8:
			return "";
		default:
			break;
	}
	return "";
}

void func_16(float fParam0)
{
	if (!is_gameplay_cam_shaking())
	{
		shake_gameplay_cam("DRUNK_SHAKE", 1f);
	}
	_0x5199405eabfbd7f0("PlayerDrunk01");
	if (!animpostfx_is_running("PlayerDrunk01"))
	{
		animpostfx_play("PlayerDrunk01");
	}
	_0x58f7db5bd8fa2288(Global_34);
	set_gameplay_cam_shake_amplitude(fParam0);
	_0xcab4dd2d5b2b7246("PlayerDrunk01", fParam0);
}

void func_17(var uParam0)
{
	fVar0 = func_25(13, 2);
	if (*uParam0 == -187002287)
	{
		func_27(func_26(1368284188, 340025142), 1);
		if (fVar0 < 25f)
		{
			func_28(75f, 1);
		}
		else if (fVar0 >= 25f && fVar0 < 50f)
		{
			func_28(50f, 1);
		}
		else
		{
			func_28(25f, 1);
		}
	}
	else if (*uParam0 == -1004468971)
	{
		func_27(func_26(1368284188, 1644594284), 1);
		if (fVar0 > 75f)
		{
			func_28(-75f, 1);
		}
		else if (fVar0 <= 75f && fVar0 > 50f)
		{
			func_28(-50f, 1);
		}
		else
		{
			func_28(-25f, 1);
		}
	}
	else if (*uParam0 == -605086052)
	{
		func_27(func_26(1368284188, 340025142), 1);
		func_28(100f, 1);
	}
	else
	{
		func_27(func_26(1368284188, 1644594284), 1);
		func_28(-100f, 1);
	}
}

bool func_18(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &iVar0, true, iParam1, false);
	return func_29(iVar0);
}

void func_19(bool bParam0)
{
	Global_1913638 = !bParam0;
	if (&Global_1913638)
	{
		Global_1913638->f_1 = get_game_timer();
	}
}

bool func_20(int iParam0)
{
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	if (((_is_ped_using_scenario_hash(iParam0, 1020517461) || _is_ped_using_scenario_hash(iParam0, 1259174088)) || _is_ped_using_scenario_hash(iParam0, -1075420544)) || _is_ped_using_scenario_hash(iParam0, -1767895052))
	{
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	return func_30(*uParam0, 1);
}

void func_22(var uParam0)
{
	func_31(uParam0, 0f);
}

bool func_23(var uParam0)
{
	return func_30(*uParam0, 2);
}

float func_24()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

float func_25(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_32(1);
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

struct<2> func_26(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_28(float fParam0, int iParam1)
{
	fVar0 = func_25(13, 2);
	iVar1 = func_33(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_34(fVar0, 0f, 100f);
	iVar2 = func_33(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_35();
		func_36(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_37(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

bool func_29(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_38(uParam0, 1);
	func_39(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_32(int iParam0)
{
	return func_41(func_40(iParam0));
}

int func_33(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_34(float fParam0, float fParam1, float fParam2)
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

var func_35()
{
	return &Global_1902818;
}

void func_36(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_42(*uParam0);
	iVar1 = func_43(*uParam0);
	iVar2 = func_44(*uParam0);
	iVar3 = func_45(*uParam0);
	iVar4 = func_46(*uParam0);
	iVar5 = func_47(*uParam0);
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
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_48(iVar1, iVar0);
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
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_37(int iParam0, float fParam1, int iParam2)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(2);
	}
	func_51(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_40(int iParam0)
{
	return func_52(&(Global_1956200->f_1565), iParam0, 1);
}

int func_41(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_53(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_43(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_44(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_45(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_46(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_47(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1)
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

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, iParam6);
	func_55(uParam0, iParam5);
	func_56(uParam0, iParam4);
	func_57(uParam0, iParam3);
	func_58(uParam0, iParam2);
	func_59(uParam0, iParam1);
}

bool func_50(int iParam0)
{
	if (func_60(iParam0))
	{
		return true;
	}
	else if (func_61(iParam0))
	{
		return true;
	}
	return false;
}

void func_51(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_52(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_53(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_54(var uParam0, int iParam1)
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

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_56(var uParam0, int iParam1)
{
	iVar0 = func_43(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_60(int iParam0)
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

bool func_61(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

