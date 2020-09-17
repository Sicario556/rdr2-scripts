void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&Local_15, 0);
		terminate_this_thread();
	}
	bVar0 = true;
	while (bVar0)
	{
		if (func_2(128) || func_3(&Local_15))
		{
			bVar0 = false;
		}
		if (is_pause_menu_active())
		{
			if (func_4() || func_5())
			{
				if (!func_2(8192))
				{
					if (!func_6(&Local_15, 4))
					{
						func_7(Local_15.f_28);
					}
					func_8(0);
					func_9(8192);
				}
			}
		}
		else if (func_4() || func_5())
		{
			if (func_2(8192))
			{
				if (!func_6(&Local_15, 4))
				{
					func_10(Local_15.f_28);
				}
				func_11(0);
				func_12(8192);
			}
		}
		func_13(&Local_15);
		func_14();
		func_15();
		func_16(&Local_15);
		switch (func_17(&Local_15))
		{
			case 0:
				func_18();
				func_19();
				func_20(&Local_15);
				func_21();
				func_22();
				func_23();
				func_9(256);
				func_24(&Local_15);
				func_25(&Local_15, 1);
				break;
			case 1:
				func_19();
				if (func_26(&Local_15))
				{
					func_24(&Local_15);
					func_25(&Local_15, 2);
				}
				break;
			case 2:
				func_19();
				if (func_27(&Local_15))
				{
					func_28(948, 0);
					func_29(&Local_15);
					func_30(&Local_15);
					func_31(&Local_15, 0);
					func_25(&Local_15, 3);
				}
				break;
			case 3:
				if (!func_32())
				{
					func_33(&Local_15);
				}
				func_34(&(Local_15.f_61));
				func_35(&(Local_15.f_61));
				func_36(&Local_15);
				func_37(&Local_15);
				func_38(&Local_15);
				if (func_39(&(Local_15.f_5[12]), 1))
				{
					func_40(20);
					func_25(&Local_15, 4);
				}
				if (func_41(&Local_15))
				{
					if (func_42(&Local_15))
					{
						func_43(&Local_15, 0);
					}
				}
				break;
			case 4:
				func_1(&Local_15, 1);
				func_25(&Local_15, 5);
				break;
			case 5:
				if (func_44(Global_34, 0, 1, 0) != 332793555)
				{
					func_12(256);
					terminate_this_thread();
				}
				break;
		}
		wait(0);
	}
	func_1(&Local_15, 0);
	terminate_this_thread();
}

void func_1(var uParam0, bool bParam1)
{
	set_player_forced_aim(get_player_index(), false, 0, -1, false);
	set_player_simulate_aiming(get_player_index(), false);
	_0x9f6d859c80708b26(0, 1);
	if (func_45(&(uParam0->f_5[0])))
	{
		_uiprompt_remove_group(func_46(&(uParam0->f_5[0])), -1469232623);
	}
	if (func_45(&(uParam0->f_5[12])))
	{
		_uiprompt_remove_group(func_46(&(uParam0->f_5[12])), -1469232623);
	}
	func_47(uParam0);
	if (is_ped_using_any_scenario(Global_34))
	{
		_0xf1c03a5352243a30(Global_34);
		clear_ped_tasks(Global_34, 1, 0);
	}
	func_23();
	func_48(uParam0);
	func_49(uParam0);
	if (func_50(Global_34, 0))
	{
		Global_1958008 = 1;
	}
	func_7(uParam0->f_28);
	func_51(uParam0->f_28);
	func_8(2);
	func_52(2);
	func_8(0);
	func_52(0);
	func_53(1);
	func_54(&(uParam0->f_5));
	func_55(uParam0);
	func_56(&(uParam0->f_61));
	func_57();
	if (bParam1)
	{
		set_current_ped_weapon(Global_34, -1569615261, false, 0, false, false);
		task_swap_weapon(Global_34, 1, 1, 0, 0);
	}
}

bool func_2(int iParam0)
{
	return func_58(&Global_1301321, iParam0);
}

bool func_3(var uParam0)
{
	iVar0 = 0;
	if (&Global_1958008)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1958008 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*Global_1120070)[iVar0]->f_14 == 1)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		iVar0++;
	}
	if (!is_player_dead(player_id()))
	{
		if (is_ped_swimming(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (_0x7fc84e85d98f063d(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (_is_ped_lassoed(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (_0x59643424b68d52b5(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (is_ped_in_melee_combat(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (is_ped_falling(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
		if (is_ped_ragdoll(Global_34))
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
	}
	if (!func_59(332793555, 1))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (is_entity_dead(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		Global_1940258->f_38 = -1569615261;
		return true;
	}
	if (!func_60(Global_34, 0))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (!does_entity_exist(Global_34) || is_ped_injured(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (func_61(0))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (Global_1956123->f_1)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (func_62())
	{
		if ((func_63(16) || func_63(37)) || func_64(Global_1915715->f_20241.f_1))
		{
		}
		else
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
			return true;
		}
	}
	if (_0x336b3d200ab007cb(Global_34, get_entity_coords(Global_34, true, false), 10f, 256) > 0)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (func_65())
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (!is_player_playing(player_id()))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (is_ped_in_any_vehicle(Global_34, true) && !is_entity_dead(get_vehicle_ped_is_in(Global_34, true)))
	{
		func_66("CAM_VEH", 10000, 0, 0, 0, 1);
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (Global_1940258->f_52)
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (is_entity_on_fire(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (_0x3bdfcf25b58b0415(Global_34))
	{
		set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		return true;
	}
	if (func_44(Global_34, 0, 1, 0) != 332793555)
	{
		switch (func_67(uParam0))
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				break;
		}
	}
	return false;
}

bool func_4()
{
	return func_2(32);
}

bool func_5()
{
	return func_2(64);
}

bool func_6(var uParam0, int iParam1)
{
	return func_58(uParam0->f_55, iParam1);
}

void func_7(int iParam0)
{
	func_69(func_68(iParam0));
}

void func_8(int iParam0)
{
	func_69(func_70(iParam0));
}

void func_9(int iParam0)
{
	func_71(Global_1301321, iParam0);
}

void func_10(int iParam0)
{
	func_72(func_68(iParam0));
}

void func_11(int iParam0)
{
	func_72(func_70(iParam0));
}

void func_12(int iParam0)
{
	func_73(Global_1301321, iParam0);
}

void func_13(var uParam0)
{
	if (func_17(uParam0) >= 0 && func_17(uParam0) <= 3)
	{
		if (!is_player_dead(player_id()))
		{
			if (func_74(player_id(), 1))
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
			else
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 2f);
			}
		}
	}
	func_75();
	switch (func_67(uParam0))
	{
		case 0:
			disable_control_action(0, 805566940, false);
			break;
		case 1:
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 2139949496, false);
			disable_control_action(0, -1879280170, false);
			set_ped_reset_flag(Global_34, 21, true);
			if (func_76(&(uParam0->f_5[7]), 1))
			{
				disable_control_action(0, -310714049, false);
			}
			else if (func_76(&(uParam0->f_5[8]), 1))
			{
				disable_control_action(0, -1089155097, false);
			}
			break;
		case 2:
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 2139949496, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, 308778731, false);
			disable_control_action(0, 1002303471, false);
			disable_control_action(0, -236813012, false);
			disable_control_action(0, -1971208180, false);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -2105631000, false);
			break;
	}
	if (func_67(uParam0) != 0)
	{
		disable_control_action(0, 255439828, false);
		func_77(0);
		disable_control_action(0, -813019446, false);
	}
}

void func_14()
{
	func_78(2);
	func_78(4);
	func_78(8);
	func_78(16);
	func_78(32);
	func_78(32768);
	func_78(65536);
	func_78(1048576);
	func_78(128);
	func_78(256);
	func_78(512);
	func_78(1024);
	func_78(2048);
	func_78(1);
	func_78(4096);
	func_78(16384);
}

void func_15()
{
	_uiprompt_disable_prompt_type_this_frame(1);
	_uiprompt_disable_prompt_type_this_frame(3);
	_uiprompt_disable_prompt_type_this_frame(2);
	_uiprompt_disable_prompt_type_this_frame(4);
	_uiprompt_disable_prompt_type_this_frame(5);
	_uiprompt_disable_prompt_type_this_frame(12);
	_uiprompt_disable_prompt_type_this_frame(8);
	_uiprompt_disable_prompt_type_this_frame(9);
	_uiprompt_disable_prompt_type_this_frame(10);
	_uiprompt_disable_prompt_type_this_frame(11);
	_uiprompt_disable_prompt_type_this_frame(15);
}

void func_16(var uParam0)
{
	if (!func_6(uParam0, 131072))
	{
		iVar0 = _0xb28894cd7408bd0c();
		switch (iVar0)
		{
			case 1:
				break;
			case 2:
				break;
			case 0:
				uParam0->f_25 = func_79();
				uParam0->f_26 = func_80();
				func_81(uParam0, 1);
				func_82(uParam0, 131072);
				func_83(uParam0);
				break;
		}
	}
}

int func_17(var uParam0)
{
	return uParam0->f_62;
}

void func_18()
{
	_text_database_request(func_84(2));
	request_anim_dict(func_84(0));
	request_clip_set(func_84(1));
	_0x5199405eabfbd7f0(func_70(0));
	_0x5199405eabfbd7f0(func_70(1));
}

void func_19()
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

void func_20(var uParam0)
{
	uParam0->f_27 = 1f;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_33 = 1;
	uParam0->f_72 = 0;
	_0xa42edf1e88734a7e();
}

void func_21()
{
	if (_0xb16223cb7da965f0(get_player_index()))
	{
		_0xae637bb8ef017875(get_player_index(), 1);
	}
	if (_0x45ab66d02b601fa7(get_player_index()))
	{
		_0x64ff4bf9af59e139(get_player_index(), 1);
	}
}

void func_22()
{
	func_57();
	Global_1301321->f_1 = create_itemset(true);
}

void func_23()
{
	func_12(1);
	func_12(16);
	func_12(32);
	func_12(64);
	func_12(256);
	func_12(128);
}

void func_24(var uParam0)
{
	uParam0->f_54 = get_game_timer();
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_26(var uParam0)
{
	iVar0 = 1;
	if (_0xbf2dd155b2adcd0a(func_70(0)))
	{
		iVar0 = 0;
	}
	if (_0xbf2dd155b2adcd0a(func_70(1)))
	{
		iVar0 = 0;
	}
	if (!_text_database_has_loaded(func_84(2)))
	{
		iVar0 = 0;
	}
	if (!has_clip_set_loaded(func_84(1)))
	{
		iVar0 = 0;
	}
	if (!has_anim_dict_loaded(func_84(0)))
	{
		iVar0 = 0;
	}
	if (!_0xd9130842d7226045(func_84(6), 0))
	{
		if (func_85(uParam0) > 7000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_27(var uParam0)
{
	iVar0 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= (14 - 1))
	{
		iVar1 = iVar0;
		if (!func_86(uParam0->f_5[iVar1], iVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_28(int iParam0, bool bParam1)
{
	func_87(iParam0, &iVar0, &iVar1);
	if (!func_88(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_89(iVar0, iVar1);
}

void func_29(var uParam0)
{
	uParam0->f_29 = func_90(uParam0->f_29, 0);
	uParam0->f_30 = func_90(uParam0->f_28, 1);
	func_91(uParam0->f_29);
	func_91(uParam0->f_30);
}

void func_30(var uParam0)
{
	uParam0->f_25 = func_79();
	uParam0->f_26 = func_80();
	uParam0->f_21 = _databinding_add_data_container_from_path("", "playerCamera");
	uParam0->f_22 = _databinding_add_data_string(uParam0->f_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
	uParam0->f_23 = _databinding_add_data_string(uParam0->f_21, "photoModeLabel0", " ");
	uParam0->f_24 = _databinding_add_data_string(uParam0->f_21, "photoModeLabel1", " ");
	func_83(uParam0);
}

void func_31(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_53(0);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 4 || iVar2 == 0)
				{
					if (iVar1 == 3 && !func_93(uParam0))
					{
						func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
						func_82(uParam0, 32);
					}
					else
					{
						func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
					}
					func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
					func_95(&(uParam0->f_5[iVar1]), 1, 1);
				}
				else
				{
					func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
					func_95(&(uParam0->f_5[iVar1]), 0, 1);
				}
				iVar0++;
			}
			if (func_44(Global_34, 0, 1, 0) != 332793555)
			{
				set_current_ped_weapon(Global_34, 332793555, true, 0, false, false);
				set_ped_current_weapon_visible(Global_34, true, true, true, false);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 3 || iVar2 == 1)
				{
					if (iVar1 == 6 || iVar1 == 8)
					{
						func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
						func_95(&(uParam0->f_5[iVar1]), 0, 1);
					}
					else
					{
						func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
						func_95(&(uParam0->f_5[iVar1]), 1, 1);
					}
				}
				else
				{
					func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
					func_95(&(uParam0->f_5[iVar1]), 0, 1);
				}
				iVar0++;
			}
			set_current_ped_weapon(Global_34, 332793555, true, 0, false, false);
			set_ped_current_weapon_visible(Global_34, true, true, true, false);
			func_96(uParam0);
			func_97(uParam0);
			break;
		case 2:
			func_11(1);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 3 || iVar2 == 2)
				{
					if (iVar1 == 10 || iVar1 == 9)
					{
						switch (func_98(uParam0))
						{
							case 0:
								func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
								func_95(&(uParam0->f_5[iVar1]), 1, 1);
								break;
							case 1:
								func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
								func_95(&(uParam0->f_5[iVar1]), 0, 1);
								break;
						}
					}
					else if (iVar1 == 5 || iVar1 == 4)
					{
						switch (func_98(uParam0))
						{
							case 0:
								func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
								func_95(&(uParam0->f_5[iVar1]), 0, 1);
								break;
							case 1:
								func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
								func_95(&(uParam0->f_5[iVar1]), 1, 1);
								break;
						}
					}
					else
					{
						func_94(&(uParam0->f_5[iVar1]), 1, 1, 1);
						func_95(&(uParam0->f_5[iVar1]), 1, 1);
					}
				}
				else
				{
					func_94(&(uParam0->f_5[iVar1]), 0, 1, 1);
					func_95(&(uParam0->f_5[iVar1]), 0, 1);
				}
				iVar0++;
			}
			func_96(uParam0);
			func_97(uParam0);
			break;
	}
}

bool func_32()
{
	return Global_1896738->f_382;
}

void func_33(var uParam0)
{
	if (func_6(uParam0, 16))
	{
		_0xc9caeaeec1256e54(959420967);
	}
	switch (func_67(uParam0))
	{
		case 0:
			_0x2804658eb7d8a50b(4, 1487066970);
			_uiprompt_set_active_group_this_frame(-1469232623, func_84(5), 1, 0, 0, 0);
			if (func_99(func_70(1)) || func_99(func_70(0)))
			{
				return;
			}
			func_100(uParam0);
			func_101(uParam0);
			if ((func_39(&(uParam0->f_5[3]), 1) && func_6(uParam0, 65536)) && func_93(uParam0))
			{
				func_102(uParam0, 2);
				return;
			}
			if (func_39(&(uParam0->f_5[2]), 1))
			{
				func_102(uParam0, 1);
				return;
			}
			if (func_39(&(uParam0->f_5[1]), 1))
			{
				func_103();
			}
			break;
		case 1:
			_0x2804658eb7d8a50b(4, 1487066970);
			_uiprompt_set_active_group_this_frame(-1469232623, func_84(3), 1, 0, 0, 0);
			func_104(uParam0);
			break;
		case 2:
			_0x2804658eb7d8a50b(4, 1487066970);
			_uiprompt_set_active_group_this_frame(-1469232623, func_84(4), 1, 0, 0, 0);
			_0x3c8f74e8fe751614();
			func_105(uParam0);
			break;
	}
}

void func_34(var uParam0)
{
	if ((get_frame_count() % 30) == 0 || func_58(&Global_1301321, 16))
	{
		func_106(uParam0);
	}
}

void func_35(var uParam0)
{
	if ((get_frame_count() % 10) == 0 || func_58(&Global_1301321, 16))
	{
		func_107();
		if (!is_itemset_valid(*uParam0) || get_itemset_size(*uParam0) <= 0)
		{
			return;
		}
		func_108(uParam0);
	}
	if (func_58(&Global_1301321, 16))
	{
		func_73(Global_1301321, 16);
	}
}

void func_36(var uParam0)
{
	if ((get_frame_count() % 5) == 0)
	{
		if (animpostfx_is_running(func_70(0)))
		{
			func_109(&iVar0);
			if (func_6(uParam0, 524288))
			{
				if (func_110() <= 0)
				{
					if ((!does_entity_exist(iVar0) || func_111(iVar0, 1)) || (does_entity_exist(iVar0) && func_112(iVar0)))
					{
						func_113();
						func_81(uParam0, 524288);
					}
				}
			}
			else
			{
				bVar1 = false;
				if (func_110() > 0)
				{
					bVar1 = true;
				}
				if (((does_entity_exist(iVar0) && func_114(iVar0)) && func_115(iVar0)) && !func_111(iVar0, 1))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					func_116(0, 255, 0, 128);
					func_82(uParam0, 524288);
				}
			}
		}
		else if (func_6(uParam0, 524288))
		{
			func_113();
			func_81(uParam0, 524288);
		}
	}
}

void func_37(var uParam0)
{
	bVar1 = false;
	if (func_109(&iVar0))
	{
		if (func_111(iVar0, 1))
		{
			if (!func_6(uParam0, 2097152))
			{
				bVar1 = true;
				func_82(uParam0, 2097152);
			}
		}
		else if (func_6(uParam0, 2097152))
		{
			bVar1 = true;
			func_81(uParam0, 2097152);
		}
	}
	else if (func_111(iVar0, 1))
	{
		bVar1 = true;
		func_81(uParam0, 2097152);
	}
	if (bVar1)
	{
		_0x0751d461f06e41ce(get_player_index(), 30, 2, func_6(uParam0, 2097152));
	}
}

void func_38(var uParam0)
{
	if (func_6(uParam0, 262144))
	{
		if (is_control_just_pressed(2, 217814591))
		{
			_0x00a15b94cba4f76f(uParam0->f_20);
			func_81(uParam0, 1);
			func_81(uParam0, 262144);
		}
	}
}

bool func_39(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

int func_40(int iParam0)
{
	if (_0x4ad019591e94c064(func_84(iParam0), Global_34, func_84(6), -2))
	{
		_play_sound_from_entity(func_84(iParam0), Global_34, func_84(6), false, 0, 1);
		return 1;
	}
	return 0;
}

bool func_41(var uParam0)
{
	if (uParam0->f_65 != 2 && uParam0->f_65 != 1)
	{
		return false;
	}
	return uParam0->f_2;
}

bool func_42(var uParam0)
{
	switch (uParam0->f_63)
	{
		case 0:
			if (uParam0->f_25 >= uParam0->f_26 && !&Global_1958005)
			{
				if (uParam0->f_20 == 0)
				{
					Var0.f_2 = 0;
					Var0.f_7 = get_hash_key("IB_BACK");
					Var0.f_7.f_3 = 0;
					uParam0->f_20 = func_118(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
					func_119(uParam0, 0);
					func_82(uParam0, 262144);
					return true;
				}
				func_82(uParam0, 1048576);
				func_119(uParam0, 0);
				func_82(uParam0, 262144);
			}
			if (!&Global_1958005 && !func_6(uParam0, 1048576))
			{
				if (is_gameplay_cam_shaking())
				{
					stop_gameplay_cam_shaking(true);
				}
				func_120(0);
				_0xd45547d8396f002a();
				if (begin_take_high_quality_photo())
				{
					func_9(16);
					func_11(2);
					func_121(uParam0, 1);
				}
			}
			else
			{
				func_9(16);
				func_11(2);
				func_121(uParam0, 1);
			}
			break;
		case 1:
			bVar19 = false;
			if (!&Global_1958005 && !func_6(uParam0, 1048576))
			{
				iVar20 = get_status_of_take_high_quality_photo();
				switch (iVar20)
				{
					case 1:
						break;
					case 0:
						_0x0d5b19c34068fee7(1);
						func_122(0);
						if (save_high_quality_photo(0))
						{
							func_119(uParam0, 1);
							bVar19 = true;
						}
						break;
					case 2:
						func_122(0);
						func_119(uParam0, 0);
						bVar19 = true;
						break;
				}
			}
			else
			{
				func_119(uParam0, 0);
				bVar19 = true;
			}
			if (bVar19)
			{
				func_121(uParam0, 2);
			}
			break;
		case 2:
			if (func_99(func_70(2)))
			{
				return false;
			}
			if (_0x4ad019591e94c064(func_84(7), Global_34, func_84(6), -2))
			{
				_play_sound_from_entity(func_84(7), Global_34, func_84(6), false, 0, 0);
			}
			func_123();
			func_81(uParam0, 1048576);
			func_121(uParam0, 0);
			return true;
	}
	return false;
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_2)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_45(int iParam0)
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

int func_46(var uParam0)
{
	iVar0 = func_117(uParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

void func_47(var uParam0)
{
	if (uParam0->f_69 == 1)
	{
		_0x04aa59ca40571c2e(uParam0->f_70, 0);
	}
	uParam0->f_69 = 0;
}

void func_48(var uParam0)
{
	_databinding_write_data_string(uParam0->f_23, " ");
	_databinding_write_data_string(uParam0->f_24, " ");
}

void func_49(var uParam0)
{
	func_124(&(uParam0->f_56));
	func_124(&(uParam0->f_57));
}

bool func_50(int iParam0, bool bParam1)
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

void func_51(int iParam0)
{
	func_125(func_68(iParam0));
}

void func_52(int iParam0)
{
	func_125(func_70(iParam0));
}

void func_53(int iParam0)
{
	func_126(func_70(iParam0));
}

void func_54(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_127((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_55(var uParam0)
{
	if (does_cam_exist(uParam0->f_35))
	{
		destroy_cam(uParam0->f_35, false);
	}
	func_128(uParam0);
	func_49(uParam0);
	set_no_loading_screen(false);
	_0x531a78d6bf27014b(func_84(6));
	clear_facial_idle_anim_override(Global_34);
	remove_clip_set(func_84(1));
	remove_anim_dict(func_84(0));
	_0xf1142e5d64b47802(false, false);
	_0x614682e715adbaac();
	_0xd45547d8396f002a();
	func_129(1);
	_text_database_delete(func_84(2));
}

void func_56(var uParam0)
{
	if (is_itemset_valid(*uParam0))
	{
		_0x20a4bf0e09bee146(*uParam0);
		destroy_itemset(*uParam0);
	}
}

void func_57()
{
	if (is_itemset_valid(Global_1301321->f_1))
	{
		_0x20a4bf0e09bee146(Global_1301321->f_1);
		destroy_itemset(Global_1301321->f_1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_59(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_131(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_132(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_133(iParam0))
			{
				return true;
			}
			break;
	}
	return func_134(iParam0, 0, 0, 0) >= iParam1;
}

bool func_60(int iParam0, int iParam1)
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
	if (func_58(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_62()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_63(int iParam0)
{
	if (func_62())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_1940311->f_1;
}

var func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_67(var uParam0)
{
	return uParam0->f_65;
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "No_PostFX_Applied";
		case 1:
			return "PhotoMode_FilterVintage01";
		case 2:
			return "PhotoMode_FilterVintage02";
		case 3:
			return "PhotoMode_FilterVintage03";
		case 4:
			return "PhotoMode_FilterVintage04";
		case 5:
			return "PhotoMode_FilterVintage05";
		case 6:
			return "PhotoMode_FilterVintage06";
		case 7:
			return "PhotoMode_FilterVintage07";
		case 8:
			return "PhotoMode_FilterVintage08";
		case 9:
			return "PhotoMode_FilterVintage09";
		case 10:
			return "PhotoMode_FilterVintage10";
		case 11:
			return "PhotoMode_FilterModern01";
		case 12:
			return "PhotoMode_FilterModern02";
		case 13:
			return "PhotoMode_FilterModern03";
		case 14:
			return "PhotoMode_FilterModern04";
		case 15:
			return "PhotoMode_FilterModern05";
		case 16:
			return "PhotoMode_FilterModern06";
		case 17:
			return "PhotoMode_FilterModern07";
		case 18:
			return "PhotoMode_FilterModern08";
		case 19:
			return "PhotoMode_FilterModern09";
		case 20:
			return "PhotoMode_FilterModern10";
		case 21:
			return "PhotoMode_FilterGame01";
		case 22:
			return "PhotoMode_FilterGame02";
		case 23:
			return "PhotoMode_FilterGame03";
		case 24:
			return "PhotoMode_FilterGame04";
		case 25:
			return "PhotoMode_FilterGame05";
		case 26:
			return "PhotoMode_FilterGame06";
		case 27:
			return "PhotoMode_FilterGame07";
		case 28:
			return "PhotoMode_FilterGame08";
		case 29:
			return "PhotoMode_FilterGame09";
		case 30:
			return "PhotoMode_FilterGame10";
		case 31:
			return "PhotoMode_FilterGame11";
		case 32:
			return "PhotoMode_FilterGame12";
		case 33:
			return "PhotoMode_FilterGame13";
		case 34:
			return "PhotoMode_FilterGame14";
		case 35:
			return "PhotoMode_FilterGame15";
		case 36:
			return "PhotoMode_FilterGame16";
		case 37:
			return "PhotoMode_FilterGame17";
		case 38:
			return "PhotoMode_FilterGame18";
		default:
			break;
	}
	return "No_PostFX_Applied";
}

void func_69(char* sParam0)
{
	if (animpostfx_is_running(sParam0))
	{
		animpostfx_stop(sParam0);
	}
}

char* func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CameraViewfinderAdv";
		case 1:
			return "CameraTransitionBlinkAdv";
		case 2:
			return "CameraTakePictureAdv";
		default:
			break;
	}
	return "CameraViewfinder";
}

void func_71(var uParam0, int iParam1)
{
	func_137(uParam0, iParam1);
}

void func_72(char* sParam0)
{
	if (!_0xbf2dd155b2adcd0a(sParam0))
	{
		_0x5199405eabfbd7f0(sParam0);
	}
	if (!animpostfx_is_running(sParam0))
	{
		animpostfx_play(sParam0);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_138(uParam0, iParam1);
}

bool func_74(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_58((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

void func_75()
{
	set_ped_reset_flag(Global_34, 129, true);
	set_ped_reset_flag(Global_34, 173, true);
	disable_control_action(2, -1304887797, false);
	disable_control_action(2, 130948705, false);
	disable_control_action(0, 1632043089, false);
	disable_control_action(2, 1623727326, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 278816850, false);
	disable_control_action(0, -796643617, false);
	disable_control_action(0, -141724873, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, 648122183, false);
	disable_control_action(0, -163964935, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1664638556, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -711536720, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1101824977, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -1722177808, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, 516589524, false);
	if (is_ped_on_mount(Global_34))
	{
		iVar0 = get_mount(Global_34);
		if (!is_ped_injured(iVar0))
		{
			set_ped_reset_flag(iVar0, 53, true);
			set_ped_reset_flag(iVar0, 153, true);
			_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
		}
	}
}

bool func_76(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_139(4);
	}
	func_139(2);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_78(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

var func_79()
{
	return _0x78c56b8a7b1d000c();
}

var func_80()
{
	return _0x8e587fcd30e05592();
}

void func_81(var uParam0, int iParam1)
{
	func_73(&(uParam0->f_55), iParam1);
}

void func_82(var uParam0, int iParam1)
{
	func_71(&(uParam0->f_55), iParam1);
}

void func_83(var uParam0)
{
	StringCopy(&cVar0, "", 32);
	_int_to_string(uParam0->f_25, "%i", &cVar0);
	StringConCat(&cVar0, " / ", 32);
	StringCopy(&cVar4, "", 32);
	_int_to_string(uParam0->f_26, "%i", &cVar4);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_6(uParam0, 131072))
	{
		_databinding_write_data_string(uParam0->f_22, &cVar0);
	}
	else
	{
		_databinding_write_data_string(uParam0->f_22, " ");
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACE_HUMAN@GEN_MALE@PORTRAIT";
		case 1:
			return "facials@gen_male@portrait";
		case 2:
			return "CAMERA";
		case 3:
			return "CAM_CONG_HC";
		case 4:
			return "CAM_CONG_HSP";
		case 5:
			return "CAM_CONG_AC";
		case 6:
			return "CAMERA_SOUNDSET";
		case 7:
			return "Wind_On_Film";
		case 8:
			return "Zoom_In";
		case 9:
			return "Zoom_Out";
		case 10:
			return "zoom_in_single";
		case 11:
			return "zoom_out_single";
		case 12:
			return "Collapse_Camera";
		case 13:
			return "Place_Tripod";
		case 14:
			return "Expand_Camera";
		case 15:
			return "Take_Photo";
		case 16:
			return "Change_Expression";
		case 17:
			return "Change_Pose";
		case 18:
			return "Change_Filter";
		case 19:
			return "Change_Intensity";
		case 20:
			return "Put_Away";
		case 21:
			return "Remove_Tripod";
		default:
			break;
	}
	return "";
}

int func_85(var uParam0)
{
	return (get_game_timer() - func_140(uParam0));
}

bool func_86(var uParam0, int iParam1)
{
	if (!func_45(*uParam0))
	{
		if ((((iParam1 == 9 || iParam1 == 10) || iParam1 == 5) || iParam1 == 4) || iParam1 == 6)
		{
			*uParam0 = func_143(func_141(iParam1), func_142(iParam1, 0), func_142(iParam1, 1), 0);
		}
		else
		{
			*uParam0 = func_144(func_141(iParam1), func_142(iParam1, 0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
		}
		func_145(*uParam0, -1469232623, 0, 1);
	}
	return true;
}

void func_87(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_88(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_146(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_147(iParam0))
	{
		return false;
	}
	if (func_148(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_149(iParam0, 1)) || func_150(32768))
	{
		if (!func_149(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_151())
	{
		return false;
	}
	return true;
}

void func_89(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = iParam0 + 1;
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 >= 39)
			{
				iVar0 = 0;
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_152(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = (iParam0 - 1);
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 < 0)
			{
				iVar0 = (39 - 1);
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_152(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

void func_91(int iParam0)
{
	func_153(func_68(iParam0));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 5:
			return 3;
		case 4:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 0;
		case 13:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_93(var uParam0)
{
	bVar0 = false;
	vVar1 = { get_entity_coords(Global_34, true, false) };
	fVar4 = get_entity_heading(Global_34);
	vVar5 = { _get_object_offset_from_coords(vVar1, fVar4, 0f, 4f, 0f) };
	if (func_154(Global_34, 1))
	{
		vVar5.f_2 = (vVar5.z + 1f);
	}
	else
	{
		vVar5.f_2 = (vVar5.z + 50f);
	}
	get_ground_z_for_3d_coord(vVar5, &fVar8, false);
	get_ground_z_for_3d_coord(vVar1, &uVar9, false);
	if (vVar1.z > fVar8)
	{
		if ((vVar1.z - fVar8) > 2f)
		{
			return false;
		}
	}
	else if ((fVar8 - vVar1.z) > 2f)
	{
		return false;
	}
	if (func_2(1024))
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	if (is_ped_on_mount(Global_34))
	{
		return false;
	}
	if (_0x50f124e6ef188b22(Global_34))
	{
		return false;
	}
	if (_is_ped_sliding(Global_34))
	{
		return false;
	}
	if (is_ped_falling(Global_34) || _0x3e592d0486dec0f6(Global_34))
	{
		return false;
	}
	if (get_number_of_fires_in_range(vVar1, 2f) > 0)
	{
		return false;
	}
	if ((fVar8 - vVar1.z) > 1f)
	{
		return false;
	}
	if (is_entity_in_water(Global_34))
	{
		return false;
	}
	if (func_155(Global_34, 0))
	{
		return false;
	}
	if (_get_ped_crouch_movement(Global_34))
	{
		return false;
	}
	if (test_vertical_probe_against_all_water(vVar5, 0, &(vVar5.f_2)) == 1)
	{
		return false;
	}
	if (is_point_on_road(vVar5.x, vVar5.y, fVar8, 0))
	{
		return false;
	}
	fVar10 = 1f;
	if (_0x0c9dbf48c6ba6e4c(Global_34, vVar5.x, vVar5.y, (fVar8 + fVar10), 3167))
	{
		bVar0 = true;
	}
	else
	{
		return false;
	}
	if (bVar0)
	{
		uParam0->f_49 = { vVar1.x, vVar1.y, (vVar1.z - 1f) };
		uParam0->f_52 = fVar4;
		uParam0->f_46 = { vVar5.x, vVar5.y, (fVar8 + fVar10) };
	}
	return true;
}

void func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (bParam1)
	{
		func_156(iParam0, 4);
		if (bParam3)
		{
			func_157(iVar0, 1);
		}
		func_158(iVar0, 1);
	}
	else
	{
		func_159(iParam0, 4);
		func_158(iVar0, 0);
	}
}

void func_95(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	func_157(iVar0, bParam1);
}

void func_96(var uParam0)
{
	uParam0->f_25 = func_79();
}

void func_97(var uParam0)
{
	func_83(uParam0);
	func_160(uParam0);
	func_161(uParam0);
}

int func_98(var uParam0)
{
	return uParam0->f_68;
}

bool func_99(char* sParam0)
{
	return animpostfx_is_running(sParam0);
}

void func_100(var uParam0)
{
	func_162(uParam0);
	if ((get_frame_count() % 15) == 0)
	{
		if (func_93(uParam0) && !uParam0->f_71)
		{
			if (!func_6(uParam0, 65536))
			{
				func_82(uParam0, 65536);
			}
			if (func_6(uParam0, 32))
			{
				func_81(uParam0, 32);
			}
		}
		else
		{
			if (func_6(uParam0, 65536))
			{
				func_81(uParam0, 65536);
			}
			if (!func_6(uParam0, 32))
			{
				func_82(uParam0, 32);
			}
		}
	}
}

void func_101(var uParam0)
{
	if ((func_163(uParam0) || func_2(512)) || !func_6(uParam0, 131072))
	{
		if (!func_6(uParam0, 1))
		{
			func_82(uParam0, 1);
		}
	}
	else if (func_6(uParam0, 1) && !func_41(uParam0))
	{
		func_81(uParam0, 1);
	}
	switch (func_67(uParam0))
	{
		case 2:
			func_164(uParam0, 0, 1, 0);
			func_164(uParam0, 11, 2, 0);
			func_164(uParam0, 6, 512, 1);
			func_164(uParam0, 7, 8388608, 0);
			func_164(uParam0, 8, 4194304, 1);
			func_165(uParam0, 4, 4, 16384);
			func_164(uParam0, 10, 4096, 1);
			func_164(uParam0, 9, 8192, 1);
			func_164(uParam0, 5, 32768, 1);
			func_164(uParam0, 13, 1024, 0);
			if (func_6(uParam0, 128) || func_41(uParam0))
			{
				if (func_166(&(uParam0->f_5[10]), 0))
				{
					func_94(&(uParam0->f_5[10]), 0, 1, 1);
				}
			}
			else if (func_167(uParam0) == 0)
			{
				if (!func_166(&(uParam0->f_5[10]), 0))
				{
					func_94(&(uParam0->f_5[10]), 1, 1, 1);
				}
			}
			else if (func_166(&(uParam0->f_5[10]), 0))
			{
				func_94(&(uParam0->f_5[10]), 0, 1, 1);
			}
			break;
		case 1:
			func_164(uParam0, 0, 1, 0);
			func_164(uParam0, 4, 4, 0);
			func_164(uParam0, 5, 8, 0);
			func_164(uParam0, 11, 2, 0);
			break;
		case 0:
			if (func_2(2048))
			{
				if (!func_6(uParam0, 2048))
				{
					func_82(uParam0, 2048);
				}
			}
			else if (func_6(uParam0, 2048))
			{
				func_81(uParam0, 2048);
			}
			func_164(uParam0, 3, 32, 0);
			func_164(uParam0, 2, 2048, 0);
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
}

void func_103()
{
	_launch_app_with_entry("social_club_feed", "launch_to_photos");
}

void func_104(var uParam0)
{
	switch (func_168(uParam0))
	{
		case 0:
			if (uParam0->f_28 == 0)
			{
				func_82(uParam0, 4);
			}
			func_169(uParam0, 1);
			break;
		case 1:
			func_40(14);
			func_169(uParam0, 2);
			break;
		case 2:
			_0x90da5ba5c2635416();
			if (_0xa24c1d341c6e0d53(1, 0, 0))
			{
				func_11(0);
				if (_0xeef83a759ae06a27(-760669051))
				{
					_0xcab4dd2d5b2b7246("PlayerDrunk01", 0f);
				}
				_0x9f6d859c80708b26(1, 1);
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
				set_player_simulate_aiming(get_player_index(), true);
				func_31(uParam0, 1);
				func_10(uParam0->f_28);
				_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
				func_170();
				func_82(uParam0, 16);
				func_169(uParam0, 3);
			}
			break;
		case 3:
			_0x90da5ba5c2635416();
			stop_gameplay_cam_shaking(true);
			func_171(uParam0);
			func_172(uParam0);
			func_173(uParam0);
			func_174(uParam0);
			func_175(uParam0);
			func_101(uParam0);
			if (!func_6(uParam0, 1) && func_39(&(uParam0->f_5[0]), 1))
			{
				func_40(15);
				func_43(uParam0, 1);
			}
			if (func_39(&(uParam0->f_5[1]), 1))
			{
				func_103();
				return;
			}
			if (!func_6(uParam0, 2) && ((func_39(&(uParam0->f_5[11]), 1) || func_176()) || func_177()))
			{
				func_169(uParam0, 4);
				return;
			}
			break;
		case 4:
			if (_0xeef83a759ae06a27(-760669051))
			{
				_0xcab4dd2d5b2b7246("PlayerDrunk01", func_178());
			}
			_0x9f6d859c80708b26(0, 1);
			set_player_forced_aim(get_player_index(), false, 0, -1, false);
			set_player_simulate_aiming(get_player_index(), false);
			func_40(12);
			if (uParam0->f_28 > 0)
			{
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
			}
			if (uParam0->f_29 > 0)
			{
				func_7(uParam0->f_29);
				func_51(uParam0->f_29);
			}
			func_179();
			func_81(uParam0, 16);
			func_102(uParam0, 0);
			func_31(uParam0, 0);
			func_169(uParam0, 0);
			break;
	}
}

void func_105(var uParam0)
{
	bVar0 = false;
	if (func_180(uParam0) >= 3)
	{
		stop_gameplay_cam_shaking(true);
	}
	switch (func_180(uParam0))
	{
		case 0:
			func_181(uParam0, 0);
			func_82(uParam0, 32768);
			func_82(uParam0, 16384);
			func_182(uParam0, 1);
			uParam0->f_69 = 0;
			break;
		case 1:
			func_91(uParam0->f_28);
			func_40(13);
			func_182(uParam0, 2);
			break;
		case 2:
			if (func_183(uParam0))
			{
				func_11(0);
				if (_0xeef83a759ae06a27(-760669051))
				{
					_0xcab4dd2d5b2b7246("PlayerDrunk01", 0f);
				}
				_0x9f6d859c80708b26(1, 1);
				func_184(uParam0);
				func_24(uParam0);
				func_10(uParam0->f_28);
				_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
				func_185();
				func_82(uParam0, 16);
				func_186(uParam0);
				func_31(uParam0, 2);
				func_182(uParam0, 3);
			}
			break;
		case 3:
			if (func_85(uParam0) > 1000)
			{
				func_53(1);
				func_182(uParam0, 4);
			}
			break;
		case 4:
			func_187(uParam0);
			func_188(uParam0);
			func_189(uParam0);
			func_172(uParam0);
			func_173(uParam0);
			func_174(uParam0);
			func_175(uParam0);
			func_190(uParam0);
			func_101(uParam0);
			if (func_99(func_70(1)))
			{
				return;
			}
			if (!func_6(uParam0, 2) && (func_39(&(uParam0->f_5[11]), 1) || func_176()))
			{
				func_24(uParam0);
				func_11(1);
				func_40(21);
				func_182(uParam0, 5);
				return;
			}
			if (func_39(&(uParam0->f_5[1]), 1))
			{
				func_103();
				return;
			}
			if (!func_6(uParam0, 1) && func_39(&(uParam0->f_5[0]), 1))
			{
				func_40(15);
				func_43(uParam0, 1);
				return;
			}
			break;
		case 5:
			if (func_85(uParam0) > 500)
			{
				func_49(uParam0);
				if (uParam0->f_28 > 0)
				{
					func_7(uParam0->f_28);
					func_51(uParam0->f_28);
				}
				set_current_ped_weapon(Global_34, 332793555, true, 0, false, false);
				set_ped_current_weapon_visible(Global_34, true, true, true, false);
				clear_ped_tasks_immediately(Global_34, false, true);
				func_191(uParam0);
				func_192();
				func_179();
				func_182(uParam0, 6);
			}
			break;
		case 6:
			func_47(uParam0);
			if (!is_ped_using_any_scenario(Global_34) && func_85(uParam0) > 1000)
			{
				bVar0 = true;
			}
			if (func_85(uParam0) > 3000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (_0xeef83a759ae06a27(-760669051))
				{
					_0xcab4dd2d5b2b7246("PlayerDrunk01", func_178());
				}
				_0x9f6d859c80708b26(0, 1);
				func_81(uParam0, 16);
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
				func_53(1);
				func_102(uParam0, 0);
				func_31(uParam0, 0);
				func_182(uParam0, 0);
			}
			break;
	}
}

void func_106(var uParam0)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar0 = create_itemset(false);
	_0x59b57c4b06531e1e(get_entity_coords(Global_34, true, false), func_193(), iVar0, 1);
	if (get_itemset_size(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (get_itemset_size(*uParam0) - 1))
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar5, *uParam0));
			iVar2 = get_entity_model(iVar1);
			iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar5, *uParam0));
			if (((!does_entity_exist(iVar1) || is_entity_dead(iVar1)) || func_194(Global_34, iVar1, 1, 1) > (func_193() + 10f)) || func_111(iVar3, 1))
			{
				func_195(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (get_itemset_size(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (get_itemset_size(iVar0) - 1))
		{
			iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar5, iVar0));
			bVar4 = false;
			if (!func_50(iVar3, 0) && !func_111(iVar3, 1))
			{
				iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar5, iVar0));
				iVar2 = get_entity_model(iVar1);
				if (is_ped_a_player(iVar3) && !_0x0e2f43516f998269(iVar3))
				{
					bVar4 = true;
				}
				if (func_114(iVar3))
				{
					if (func_115(iVar3))
					{
						bVar4 = true;
					}
					if (_0xf49f14462f0ae27c(get_player_index()) == iVar3)
					{
						bVar4 = true;
					}
					if (iVar2 == 674267496)
					{
						bVar4 = true;
					}
					if (func_196(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_197(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
}

void func_107()
{
	if (get_itemset_size(Global_1301321->f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (get_itemset_size(Global_1301321->f_1) - 1))
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_1301321->f_1));
			if (does_entity_exist(iVar1))
			{
				iVar2 = _0x3ffb15534067dcd4(iVar1);
				if (!is_entity_dead(iVar2))
				{
					iVar3 = func_198(get_entity_model(iVar1));
					if (is_ped_a_player(iVar2))
					{
						if (func_199(iVar1))
						{
							if (func_200(iVar2))
							{
								if (func_58(&Global_1301321, 256) && iVar2 == Global_34)
								{
									if (!func_58(&Global_1301321, 64))
									{
										func_201(iVar2);
									}
								}
							}
							else
							{
								func_201(iVar2);
							}
						}
						else
						{
							func_201(iVar2);
						}
					}
					else if (func_202(iVar2))
					{
						if (!func_199(iVar1))
						{
							func_201(iVar2);
						}
					}
					else if (!func_203(iVar2, iVar3))
					{
						func_201(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_108(var uParam0)
{
	iVar3 = 0;
	while (iVar3 <= (get_itemset_size(*uParam0) - 1))
	{
		iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, *uParam0));
		if (does_entity_exist(iVar0))
		{
			iVar1 = _0x3ffb15534067dcd4(iVar0);
			if (!is_entity_dead(iVar1))
			{
				iVar2 = func_198(get_entity_model(iVar0));
				if (is_ped_a_player(iVar1))
				{
					if (func_199(iVar0))
					{
						if (!_0x5102307ce88798eb(iVar1))
						{
							request_ped_visibility_tracking(iVar1);
						}
						else if (func_200(iVar1))
						{
							if (func_58(&Global_1301321, 256) && iVar1 == Global_34)
							{
								if (func_58(&Global_1301321, 64))
								{
									func_197(iVar0, Global_1301321->f_1);
								}
							}
							else
							{
								func_197(iVar0, Global_1301321->f_1);
							}
						}
					}
				}
				else if (func_202(iVar1))
				{
					if (func_199(iVar0))
					{
						if (!_0x5102307ce88798eb(iVar1))
						{
							request_ped_visibility_tracking(iVar1);
						}
						else if (func_200(iVar1))
						{
							func_197(iVar0, Global_1301321->f_1);
						}
					}
				}
				else if (func_204(iVar1, iVar2))
				{
					func_197(iVar0, Global_1301321->f_1);
				}
			}
		}
		iVar3++;
	}
}

bool func_109(int iParam0)
{
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 1, 0))
	{
		if (!is_entity_dead(iVar0))
		{
			*iParam0 = get_ped_index_from_entity_index(iVar0);
			return true;
		}
	}
	return false;
}

int func_110()
{
	iVar1 = 0;
	iVar2 = 0;
	if (is_itemset_valid(Global_1301321->f_1) && get_itemset_size(Global_1301321->f_1) > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (get_itemset_size(Global_1301321->f_1) - 1))
		{
			iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, Global_1301321->f_1));
			if (_0x9a100f1cf4546629(iVar0) && _0xf49f14462f0ae27c(get_player_index()) != _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar2, Global_1301321->f_1)))
			{
				iVar1++;
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

bool func_111(int iParam0, bool bParam1)
{
	if (bParam1 && _0x0e2f43516f998269(iParam0))
	{
		return true;
	}
	if (_0xb655db7582aec805(iParam0))
	{
		return true;
	}
	if (get_ped_config_flag(iParam0, 11, true))
	{
		return true;
	}
	if (get_ped_config_flag(iParam0, 580, true))
	{
		return true;
	}
	return false;
}

bool func_112(int iParam0)
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

void func_113()
{
	_0x63011d0c7c6519e0(func_70(0), 0, 255, 255, 255, 255);
}

bool func_114(int iParam0)
{
	iVar0 = func_205(iParam0);
	if (_0x9a100f1cf4546629(iVar0) && !_0x0e2f43516f998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0)
{
	iVar0 = get_ped_relationship_group_hash(iParam0);
	if (((!_0x118d476a6f1a13f1(iParam0) && !func_206(iParam0, 0)) && !func_112(iParam0)) && iVar0 != 543319108)
	{
		return true;
	}
	return false;
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	_0x63011d0c7c6519e0(func_70(0), 0, iParam0, iParam1, iParam2, iParam3);
}

int func_117(int iParam0)
{
	return iParam0;
}

var func_118(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_119(var uParam0, bool bParam1)
{
	bVar2 = func_67(uParam0) == 2;
	bVar3 = false;
	_0x2705d18c11b61046(bVar2);
	if (bParam1)
	{
		func_207();
		func_208();
	}
	func_209();
	bVar4 = false;
	if (func_109(&iVar0))
	{
		bVar4 = func_111(iVar0, 1);
		if (is_itemset_valid(Global_1301321->f_1) && !bVar4)
		{
			func_197(iVar0, Global_1301321->f_1);
		}
	}
	if (does_entity_exist(iVar0) && !bVar4)
	{
		iVar1 = get_entity_model(iVar0);
		if (iVar1 != uParam0->f_72)
		{
			bVar3 = true;
			uParam0->f_72 = iVar1;
		}
	}
	else if (is_itemset_valid(Global_1301321->f_1) && get_itemset_size(Global_1301321->f_1) > 0)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 <= (get_itemset_size(Global_1301321->f_1) - 1))
		{
			iVar0 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar5, Global_1301321->f_1));
			iVar1 = get_entity_model(iVar0);
			if (iVar1 != uParam0->f_72)
			{
				bVar3 = true;
				uParam0->f_72 = iVar1;
			}
			iVar5++;
		}
	}
	if (bVar3)
	{
		_0x4d31051a4ca83787(Global_1301321->f_1);
	}
	_0x0777d65ee8a17517(365468875, get_hash_key(func_210(uParam0->f_28)), uParam0->f_27, bVar2, 0, func_211(uParam0), iVar1, func_213(func_212(0)));
	if (bParam1)
	{
		uParam0->f_25++;
		func_97(uParam0);
	}
	func_214(&(uParam0->f_61));
}

void func_120(int iParam0)
{
	_0xcab4dd2d5b2b7246(func_70(iParam0), 0f);
}

void func_121(var uParam0, int iParam1)
{
	uParam0->f_63 = iParam1;
}

void func_122(int iParam0)
{
	_0xcab4dd2d5b2b7246(func_70(iParam0), 1f);
}

void func_123()
{
	func_73(Global_1301321, 1);
}

void func_124(var uParam0)
{
	if (*uParam0 >= 0)
	{
		_0x3210bcb36af7621b(*uParam0);
		*uParam0 = -1;
	}
}

void func_125(char* sParam0)
{
	_0x37d7bdba89f13959(sParam0);
}

void func_126(char* sParam0)
{
	if (animpostfx_is_running(sParam0))
	{
		_0xc5cb91d65852ed7e(sParam0);
	}
}

void func_127(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_117(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_215(iVar0);
	*uParam0 = 0;
}

void func_128(var uParam0)
{
	if (does_entity_exist(uParam0->f_58))
	{
		delete_object(&(uParam0->f_58));
	}
}

void func_129(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_131(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_132(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_216(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_217("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_218(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_219(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_220(iVar1);
				return true;
			}
			iVar3++;
		}
		func_220(iVar1);
	}
	return false;
}

bool func_133(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_221(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_222(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_223(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_224(iParam0);
	iVar2 = func_223(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_134(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_216(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_225(iParam0, 0);
	}
	if (func_226(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_227(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_228(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_227(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_136(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_139(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

int func_140(var uParam0)
{
	return uParam0->f_54;
}

char* func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_TAKE_PHOTO";
		case 1:
			return "CAM_GALLERY";
		case 2:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_SELFIE";
		case 5:
			return "CAM_FILTER";
		case 4:
			return "CAM_INTENSITY";
		case 6:
			return "CAM_ZOOM";
		case 7:
			return "CAM_ZOOM";
		case 8:
			return "CAM_ZOOM";
		case 9:
			return "CAM_EXPRESSIONS";
		case 10:
			return "CAM_POSES";
		case 11:
			return "CAM_BACK";
		case 12:
			return "CAM_PUT_AWAY";
		case 13:
			return "ADV_CAM_FILTERS";
		default:
			break;
	}
	return "";
}

int func_142(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1201017346;
		case 1:
			return -399281322;
		case 2:
			return 2003789289;
		case 3:
			return -1403444502;
		case 7:
			return -1089155097;
		case 8:
			return -310714049;
		case 4:
			if (bParam1)
			{
				return 129385309;
			}
			else
			{
				return -811138093;
			}
			break;
		case 5:
			if (bParam1)
			{
				return -133104843;
			}
			else
			{
				return -1923356207;
			}
			break;
		case 6:
			if (bParam1)
			{
				return -1089155097;
			}
			else
			{
				return -310714049;
			}
			break;
		case 9:
			if (bParam1)
			{
				return -811138093;
			}
			else
			{
				return 129385309;
			}
			break;
		case 10:
			if (bParam1)
			{
				return -133104843;
			}
			else
			{
				return -1923356207;
			}
			break;
		case 11:
			return -1531087707;
		case 12:
			return 1606906090;
		case 13:
			return -711736799;
	}
	return 1157240002;
}

int func_143(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_229(iVar0, 2))
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
		func_230(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

int func_144(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_229(iVar0, 2))
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
		func_230(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

bool func_146(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_147(int iParam0)
{
	if (func_149(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_149(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_150(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_151()
{
	if (!func_231())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return _unlock_is_visible(-951341587);
		case 12:
			return _unlock_is_visible(355797628);
		case 13:
			return _unlock_is_visible(1885541620);
		case 14:
			return _unlock_is_visible(-1587645914);
		case 15:
			return _unlock_is_visible(-1325269752);
		case 16:
			return _unlock_is_visible(65073703);
		case 17:
			return _unlock_is_visible(830543521);
		case 18:
			return _unlock_is_visible(299289203);
		case 19:
			return _unlock_is_visible(-587023018);
		case 20:
			return _unlock_is_visible(-781188238);
		case 21:
			return _unlock_is_visible(-1976306104);
		case 22:
			return _unlock_is_visible(-779958017);
		case 23:
			return _unlock_is_visible(-1877599955);
		case 24:
			return _unlock_is_visible(1358340808);
		case 25:
			return _unlock_is_visible(-252816221);
		case 26:
			return _unlock_is_visible(-320798538);
		case 27:
			return _unlock_is_visible(-1123146868);
		case 28:
			return _unlock_is_visible(-677732579);
		case 29:
			return _unlock_is_visible(1394960149);
		case 30:
			return _unlock_is_visible(-2076331328);
		case 31:
			return _unlock_is_visible(-599019401);
		case 32:
			return _unlock_is_visible(-1985431160);
		case 33:
			return _unlock_is_visible(1151765962);
		case 34:
			return _unlock_is_visible(1449882070);
		case 35:
			return _unlock_is_visible(464775907);
		case 36:
			return _unlock_is_visible(278859029);
		case 37:
			return _unlock_is_visible(-1223981588);
		case 38:
			return _unlock_is_visible(1422895126);
		default:
			break;
	}
	return false;
}

void func_153(char* sParam0)
{
	if (!_0xbf2dd155b2adcd0a(sParam0))
	{
		_0x5199405eabfbd7f0(sParam0);
	}
}

bool func_154(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_232(iVar0) || func_233(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_155(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_156(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_157(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_229(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_158(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_159(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_160(var uParam0)
{
	StringCopy(&cVar0, _create_var_string(2, "CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cVar0, ": ", 64);
	iVar8 = uParam0->f_28;
	StringConCat(&cVar0, _create_var_string(2, func_210(iVar8)), 64);
	_databinding_write_data_string(uParam0->f_23, &cVar0);
}

void func_161(var uParam0)
{
	if (uParam0->f_28 > 0)
	{
		StringCopy(&cVar0, _create_var_string(2, "CAM_PM_HUD_FILTINTEN"), 64);
		StringConCat(&cVar0, ": ", 64);
		StringConCat(&cVar0, func_234(ceil((uParam0->f_27 * 100f))), 64);
		StringConCat(&cVar0, "%", 64);
		_databinding_write_data_string(uParam0->f_24, &cVar0);
	}
	else
	{
		_databinding_write_data_string(uParam0->f_24, " ");
	}
}

int func_162(var uParam0)
{
	fVar0 = 0.17f;
	iVar1 = 0;
	switch (uParam0->f_69)
	{
		case 0:
			uParam0->f_70 = start_shape_test_swept_sphere(uParam0->f_46 - Vector(0.2f, 0f, 0f), uParam0->f_46 + Vector(0.2f, 0f, 0f), fVar0, 3167, 0, 4);
			uParam0->f_69 = 1;
			break;
		case 1:
			iVar9 = get_shape_test_result(uParam0->f_70, &iVar1, &uVar2, &uVar5, &uVar8);
			if (iVar1 > 0)
			{
			}
			if (iVar9 == 1)
			{
			}
			else
			{
				uParam0->f_69 = 0;
				uParam0->f_71 = iVar1 != 0;
				return uParam0->f_71;
			}
	}
	return 0;
}

bool func_163(var uParam0)
{
	if (is_ped_falling(Global_34) || _is_ped_sliding(Global_34))
	{
		return true;
	}
	if ((func_67(uParam0) == 2 && func_167(uParam0) >= 1) && func_167(uParam0) <= 5)
	{
		return true;
	}
	return false;
}

void func_164(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_166(&(uParam0->f_5[iParam1]), 0))
		{
			func_94(&(uParam0->f_5[iParam1]), 0, 1, 1);
			if (bParam3)
			{
				func_95(&(uParam0->f_5[iParam1]), 0, 1);
			}
		}
	}
	else if (!func_166(&(uParam0->f_5[iParam1]), 0))
	{
		func_94(&(uParam0->f_5[iParam1]), 1, 1, 1);
		func_95(&(uParam0->f_5[iParam1]), 1, 1);
	}
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_6(uParam0, iParam3))
	{
		if (func_166(&(uParam0->f_5[iParam1]), 0))
		{
			func_94(&(uParam0->f_5[iParam1]), 0, 1, 1);
			func_95(&(uParam0->f_5[iParam1]), 0, 1);
		}
	}
	else if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_166(&(uParam0->f_5[iParam1]), 0))
		{
			func_94(&(uParam0->f_5[iParam1]), 0, 1, 1);
		}
	}
	else if (!func_166(&(uParam0->f_5[iParam1]), 0))
	{
		func_94(&(uParam0->f_5[iParam1]), 1, 1, 1);
		func_95(&(uParam0->f_5[iParam1]), 1, 1);
	}
}

bool func_166(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	return !func_229(iParam0, 4);
}

int func_167(var uParam0)
{
	return uParam0->f_66;
}

int func_168(var uParam0)
{
	return uParam0->f_67;
}

void func_169(var uParam0, int iParam1)
{
	uParam0->f_67 = iParam1;
}

void func_170()
{
	func_9(32);
	func_12(64);
}

void func_171(var uParam0)
{
	if (func_45(&(uParam0->f_5[6])) && func_76(&(uParam0->f_5[6]), 1))
	{
		if (func_235(&(uParam0->f_5[6]), 1, 1) && func_236(uParam0) < 3)
		{
			func_237(uParam0);
			func_40(10);
			if (func_236(uParam0) >= 3)
			{
				func_94(&(uParam0->f_5[6]), 0, 1, 1);
				func_95(&(uParam0->f_5[6]), 0, 1);
				func_94(&(uParam0->f_5[8]), 1, 1, 1);
				func_95(&(uParam0->f_5[8]), 1, 1);
			}
		}
		else if (func_235(&(uParam0->f_5[6]), 0, 1) && func_236(uParam0) > 1)
		{
			func_238(uParam0);
			func_40(11);
			if (func_236(uParam0) <= 1)
			{
				func_94(&(uParam0->f_5[6]), 0, 1, 1);
				func_95(&(uParam0->f_5[6]), 0, 1);
				func_94(&(uParam0->f_5[7]), 1, 1, 1);
				func_95(&(uParam0->f_5[7]), 1, 1);
			}
		}
	}
	else if (func_45(&(uParam0->f_5[7])) && func_76(&(uParam0->f_5[7]), 1))
	{
		if (func_239(&(uParam0->f_5[7]), 1))
		{
			func_237(uParam0);
			func_40(10);
			func_94(&(uParam0->f_5[7]), 0, 1, 1);
			func_95(&(uParam0->f_5[7]), 0, 1);
			func_94(&(uParam0->f_5[6]), 1, 1, 1);
			func_95(&(uParam0->f_5[6]), 1, 1);
		}
	}
	else if (func_45(&(uParam0->f_5[8])) && func_76(&(uParam0->f_5[8]), 1))
	{
		if (func_239(&(uParam0->f_5[8]), 1))
		{
			func_238(uParam0);
			func_40(11);
			func_94(&(uParam0->f_5[8]), 0, 1, 1);
			func_95(&(uParam0->f_5[8]), 0, 1);
			func_94(&(uParam0->f_5[6]), 1, 1, 1);
			func_95(&(uParam0->f_5[6]), 1, 1);
		}
	}
}

void func_172(var uParam0)
{
	if (func_45(&(uParam0->f_5[5])) && func_235(&(uParam0->f_5[5]), 1, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 1);
		uParam0->f_30 = func_90(uParam0->f_28, 1);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_97(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_173(var uParam0)
{
	if (func_45(&(uParam0->f_5[5])) && func_235(&(uParam0->f_5[5]), 0, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 0);
		uParam0->f_30 = func_90(uParam0->f_28, 0);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_97(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_174(var uParam0)
{
	if (func_45(&(uParam0->f_5[4])) && func_235(&(uParam0->f_5[4]), 1, 1))
	{
		if (uParam0->f_27 < 1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 + 0.1f);
			_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_97(uParam0);
	}
}

void func_175(var uParam0)
{
	if (func_45(&(uParam0->f_5[4])) && func_235(&(uParam0->f_5[4]), 0, 1))
	{
		if (uParam0->f_27 > 0.1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 - 0.1f);
			_0xcab4dd2d5b2b7246(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_97(uParam0);
	}
}

bool func_176()
{
	if (_0x74f1d22efa71fab8() || is_cinematic_cam_rendering())
	{
		return true;
	}
	return false;
}

bool func_177()
{
	if (_is_ped_sliding(Global_34))
	{
		return true;
	}
	return false;
}

float func_178()
{
	fVar0 = ((Global_1940085->f_15.f_1 - func_240()) * (1f / (1f - func_240())));
	fVar1 = ((Global_1940085->f_15.f_7 * fVar0) + (Global_1940085->f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1940085->f_15.f_3);
}

void func_179()
{
	func_12(64);
	func_12(32);
}

int func_180(var uParam0)
{
	return uParam0->f_64;
}

void func_181(var uParam0, int iParam1)
{
	uParam0->f_68 = iParam1;
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_64 = iParam1;
}

bool func_183(var uParam0)
{
	if (does_cam_exist(uParam0->f_35))
	{
		set_cam_active(uParam0->f_35, false);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_35, false);
	}
	vVar0 = { get_entity_coords(Global_34, true, false) };
	fVar3 = get_entity_heading(Global_34);
	vVar4 = { _get_object_offset_from_coords(vVar0, fVar3, 0f, 4f, 0f) };
	if (func_154(Global_34, 1))
	{
		vVar4.f_2 = (vVar4.z + 1f);
	}
	else
	{
		vVar4.f_2 = (vVar4.z + 50f);
	}
	bVar9 = false;
	get_ground_z_for_3d_coord(vVar4, &fVar7, false);
	get_ground_z_for_3d_coord(vVar0, &uVar8, false);
	if (vVar0.z > fVar7)
	{
		if ((vVar0.z - fVar7) > 2f)
		{
			bVar9 = true;
		}
	}
	else if ((fVar7 - vVar0.z) > 2f)
	{
		bVar9 = true;
	}
	vVar10 = { get_entity_rotation(Global_34, 2) };
	vVar13 = { vVar10.x, vVar10.y, (vVar10.z - 180f) };
	fVar16 = 50f;
	if (!bVar9)
	{
		uParam0->f_49 = { vVar0.x, vVar0.y, (vVar0.z - 1f) };
		uParam0->f_52 = fVar3;
		uParam0->f_46 = { vVar4.x, vVar4.y, (fVar7 + 1f) };
	}
	uParam0->f_87 = vVar13.x;
	uParam0->f_86 = vVar13.z;
	uParam0->f_53 = vVar10.z;
	if (!does_cam_exist(uParam0->f_35))
	{
		uParam0->f_35 = create_cam_with_params("KIT_CAMERA", uParam0->f_46, vVar13, fVar16, true, 2);
	}
	uParam0->f_36 = 25f;
	uParam0->f_36.f_1 = 2f;
	uParam0->f_36.f_2 = 128f;
	uParam0->f_36.f_3 = 30f;
	uParam0->f_36.f_4 = 30f;
	uParam0->f_36.f_5 = 90f;
	uParam0->f_36.f_6 = 1;
	uParam0->f_36.f_7 = 0;
	uParam0->f_36.f_8 = 1;
	uParam0->f_36.f_9 = 1;
	uParam0->f_91 = { vVar13 };
	uParam0->f_94 = 0f;
	uParam0->f_95 = 0.5f;
	uParam0->f_91 = (uParam0->f_91 + 1f);
	_0xe4b7945ef4f1bfb2(uParam0->f_35, &(uParam0->f_36));
	_0x9f97e85ec142255e(uParam0->f_35, 0);
	_0x42ed56b02e05d109(uParam0->f_35, false);
	set_cam_active(uParam0->f_35, true);
	render_script_cams(true, false, 3000, true, false, 0);
	func_40(14);
	set_ped_current_weapon_visible(Global_34, false, false, true, false);
	clear_ped_tasks_immediately(player_ped_id(), false, true);
	_0x2208438012482a1a(Global_34, false, false);
	func_241(uParam0);
	return true;
}

void func_184(var uParam0)
{
	iVar0 = func_117(&(uParam0->f_5[13]));
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, "ADV_CAM_POSES");
	func_82(uParam0, 4096);
	func_82(uParam0, 8192);
	func_81(uParam0, 16384);
	func_81(uParam0, 32768);
	if (uParam0->f_28 == 0)
	{
		func_82(uParam0, 4);
	}
	func_95(&(uParam0->f_5[4]), 1, 1);
	func_181(uParam0, 1);
}

void func_185()
{
	func_9(64);
	func_12(32);
}

void func_186(var uParam0)
{
	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_3 = 0;
	vVar0.f_4 = 21030;
	vVar25 = { func_243(uParam0->f_46 - func_242(get_player_index())) };
	vVar28 = { func_242(get_player_index()) + vVar25 * Vector(2f, 2f, 2f) };
	vVar0 = { vVar28 };
	_0x66f9eb44342bb4c5(Global_34, &vVar0);
}

void func_187(var uParam0)
{
	func_244(uParam0);
	func_245(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((uParam0->f_94 - 0.07f) > -10f)
		{
			if (uParam0->f_77 > 100)
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 - 0.6f);
				uParam0->f_94 = (uParam0->f_94 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 - 0.2f);
				uParam0->f_94 = (uParam0->f_94 - 0.07f);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		if ((uParam0->f_94 + 0.07f) < 10f)
		{
			if (uParam0->f_77 < -100)
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 + 0.6f);
				uParam0->f_94 = (uParam0->f_94 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 + 0.2f);
				uParam0->f_94 = (uParam0->f_94 + 0.07f);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if ((uParam0->f_95 - 0.07f) > -10f)
		{
			if (uParam0->f_78 > 100)
			{
				uParam0->f_91 = (uParam0->f_91 - 0.6f);
				uParam0->f_95 = (uParam0->f_95 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_91 = (uParam0->f_91 - 0.2f);
				uParam0->f_95 = (uParam0->f_95 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if ((uParam0->f_95 + 0.07f) < 10f)
		{
			if (uParam0->f_78 < -100)
			{
				uParam0->f_91 = (uParam0->f_91 + 0.6f);
				uParam0->f_95 = (uParam0->f_95 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_91 = (uParam0->f_91 + 0.2f);
				uParam0->f_95 = (uParam0->f_95 + 0.07f);
			}
		}
	}
	set_cam_params(uParam0->f_35, uParam0->f_46, uParam0->f_91, 50f, 0, 1, 1, 2, 0, 0);
}

void func_188(var uParam0)
{
	if (func_235(&(uParam0->f_5[9]), 0, 1))
	{
		uParam0->f_31++;
		if (uParam0->f_31 >= 8)
		{
			uParam0->f_31 = 0;
		}
		func_246(uParam0);
	}
	if (func_235(&(uParam0->f_5[9]), 1, 1))
	{
		uParam0->f_31 = (uParam0->f_31 - 1);
		if (uParam0->f_31 < 0)
		{
			uParam0->f_31 = (8 - 1);
		}
		func_246(uParam0);
	}
}

void func_189(var uParam0)
{
	switch (func_167(uParam0))
	{
		case 0:
			if (func_235(&(uParam0->f_5[10]), 0, 1))
			{
				uParam0->f_32++;
				if (uParam0->f_32 >= 4)
				{
					uParam0->f_32 = 0;
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_247(uParam0, 1);
			}
			if (func_235(&(uParam0->f_5[10]), 1, 1))
			{
				uParam0->f_32 = (uParam0->f_32 - 1);
				if (uParam0->f_32 < 0)
				{
					uParam0->f_32 = (4 - 1);
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_82(uParam0, 128);
				func_247(uParam0, 1);
			}
			break;
		case 1:
			func_11(1);
			func_247(uParam0, 2);
			break;
		case 2:
			func_241(uParam0);
			func_24(uParam0);
			func_247(uParam0, 3);
			break;
		case 3:
			if (_is_ped_using_scenario_hash(Global_34, func_248(uParam0->f_32)) && func_85(uParam0) > 1500)
			{
				func_247(uParam0, 4);
			}
			if (func_85(uParam0) > 7000)
			{
				func_247(uParam0, 4);
				func_24(uParam0);
			}
			break;
		case 4:
			func_53(1);
			func_247(uParam0, 5);
			func_24(uParam0);
			break;
		case 5:
			if (_0x02ebbb3989b7e695(Global_34) || func_85(uParam0) > 7000)
			{
				func_81(uParam0, 2);
				func_81(uParam0, 1);
				func_81(uParam0, 128);
				func_247(uParam0, 0);
			}
			break;
	}
}

void func_190(var uParam0)
{
	if (func_39(&(uParam0->f_5[13]), 1))
	{
		iVar0 = func_117(&(uParam0->f_5[13]));
		switch (func_98(uParam0))
		{
			case 0:
				func_82(uParam0, 4096);
				func_82(uParam0, 8192);
				func_81(uParam0, 16384);
				func_81(uParam0, 32768);
				if (uParam0->f_28 == 0)
				{
					func_82(uParam0, 4);
				}
				func_95(&(uParam0->f_5[4]), 1, 1);
				_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, "ADV_CAM_POSES");
				func_181(uParam0, 1);
				break;
			case 1:
				func_82(uParam0, 16384);
				func_82(uParam0, 32768);
				func_81(uParam0, 4096);
				func_81(uParam0, 8192);
				func_94(&(uParam0->f_5[4]), 0, 1, 1);
				func_95(&(uParam0->f_5[4]), 0, 1);
				_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, "ADV_CAM_FILTERS");
				func_181(uParam0, 0);
				break;
		}
	}
}

void func_191(var uParam0)
{
	if (does_cam_exist(uParam0->f_35))
	{
		set_cam_active(uParam0->f_35, false);
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_35, false);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
}

void func_192()
{
	if (func_249(Global_34, 242628503))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
}

float func_193()
{
	return 130f;
}

float func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_195(int iParam0, int iParam1)
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

bool func_196(int iParam0)
{
	if (func_58(&Global_1301321, 4096))
	{
		switch (iParam0)
		{
			case -2063183075:
			case -2021043433:
			case -2011226991:
			case -1963605336:
			case -1892280447:
			case -1797625440:
			case -1568716381:
			case -1414989025:
			case -1211566332:
			case -1170118274:
			case -1143398950:
			case -1124266369:
			case -1098441944:
			case -753902995:
			case -407730502:
			case -50684386:
			case 40345436:
			case 90264823:
			case 252669332:
			case 457416415:
			case 480688259:
			case 556355544:
			case 730092646:
			case 759906147:
			case 1074477367:
			case 1088428104:
			case 1110710183:
			case 1458540991:
			case 1556473961:
			case 1654513481:
			case 1755643085:
			case 2028722809:
				return true;
		}
	}
	return false;
}

void func_197(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

int func_198(int iParam0)
{
	if (is_model_valid(iParam0))
	{
		iVar0 = _0xa65aa1ace81e5a77(iParam0);
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_199(int iParam0)
{
	return (is_entity_on_screen(iParam0) && !is_entity_occluded(iParam0));
}

bool func_200(int iParam0)
{
	return (_0x5102307ce88798eb(iParam0) && is_tracked_ped_visible(iParam0));
}

void func_201(int iParam0)
{
	iVar0 = func_205(iParam0);
	if (_0x5102307ce88798eb(iParam0))
	{
		_0x3088634cf8c819cf(iParam0);
	}
	func_195(iVar0, Global_1301321->f_1);
}

bool func_202(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, int iParam1)
{
	iVar0 = func_205(iParam0);
	if (((((func_199(iVar0) && !func_111(iParam0, 1)) && has_entity_clear_los_to_entity(Global_34, iVar0, 3455)) && func_251(iParam0, 1050253722, 1060320051, 0, 1061158912)) && func_200(iParam0)) && func_252(iParam0) >= func_253(iParam1))
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0, int iParam1)
{
	iVar0 = func_205(iParam0);
	if (((func_199(iVar0) && !func_111(iParam0, 1)) && has_entity_clear_los_to_entity(Global_34, iVar0, 3455)) && func_251(iParam0, 1050253722, 1060320051, 0.2f, 1061158912))
	{
		if (!_0x5102307ce88798eb(iParam0))
		{
			request_ped_visibility_tracking(iParam0);
		}
		else if (func_200(iParam0) && func_252(iParam0) >= func_253(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_205(int iParam0)
{
	return iParam0;
}

bool func_206(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (get_animal_tuning_bool_param(iParam0, 58))
	{
		if (bParam1)
		{
			return is_entity_in_air(iParam0, 1);
		}
		return true;
	}
	return false;
}

void func_207()
{
	StringCopy(&cVar0, "", 32);
	iVar4 = func_254();
	if (func_255(iVar4))
	{
		MemCopy(&cVar0, {func_256(iVar4)}, 4);
	}
	if (is_string_null_or_empty(&cVar0))
	{
		iVar5 = func_257();
		StringCopy(&cVar0, func_258(iVar5), 32);
	}
	_0xd1031b83ac093bc7(&cVar0);
}

void func_208()
{
	StringCopy(&cVar0, "", 16);
	StringCopy(&cVar2, "", 16);
	iVar4 = func_259();
	if (func_260(iVar4))
	{
		StringCopy(&cVar0, func_261(iVar4), 16);
		StringCopy(&cVar2, func_262(iVar4), 16);
	}
	_0x9937facbbf267244(&cVar0);
	_0x8952e857696b8a79(&cVar2);
}

void func_209()
{
	func_71(Global_1301321, 1);
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_PM_F_V0";
		case 1:
			return "CAM_PM_F_V1";
		case 2:
			return "CAM_PM_F_V2";
		case 3:
			return "CAM_PM_F_V3";
		case 4:
			return "CAM_PM_F_V4";
		case 5:
			return "CAM_PM_F_V5";
		case 6:
			return "CAM_PM_F_V6";
		case 7:
			return "CAM_PM_F_V7";
		case 8:
			return "CAM_PM_F_V8";
		case 9:
			return "CAM_PM_F_V9";
		case 10:
			return "CAM_PM_F_V10";
		case 11:
			return "CAM_PM_F_M1";
		case 12:
			return "CAM_PM_F_M2";
		case 13:
			return "CAM_PM_F_M3";
		case 14:
			return "CAM_PM_F_M4";
		case 15:
			return "CAM_PM_F_M5";
		case 16:
			return "CAM_PM_F_M6";
		case 17:
			return "CAM_PM_F_M7";
		case 18:
			return "CAM_PM_F_M8";
		case 19:
			return "CAM_PM_F_M9";
		case 20:
			return "CAM_PM_F_M10";
		case 21:
			return "CAM_PM_F_S1";
		case 22:
			return "CAM_PM_F_S2";
		case 23:
			return "CAM_PM_F_S3";
		case 24:
			return "CAM_PM_F_S4";
		case 25:
			return "CAM_PM_F_S5";
		case 26:
			return "CAM_PM_F_S6";
		case 27:
			return "CAM_PM_F_S7";
		case 28:
			return "CAM_PM_F_S8";
		case 29:
			return "CAM_PM_F_S9";
		case 30:
			return "CAM_PM_F_S10";
		case 31:
			return "CAM_PM_F_S11";
		case 32:
			return "CAM_PM_F_S12";
		case 33:
			return "CAM_PM_F_S13";
		case 34:
			return "CAM_PM_F_S14";
		case 35:
			return "CAM_PM_F_S15";
		case 36:
			return "CAM_PM_F_S16";
		case 37:
			return "CAM_PM_F_S17";
		case 38:
			return "CAM_PM_F_S18";
		default:
			break;
	}
	return "CAM_PM_F_V0";
}

int func_211(var uParam0)
{
	switch (func_67(uParam0))
	{
		case 1:
			if (_0x8b1a5fe7e41e52b2())
			{
				return 0;
			}
			else if (_0xb6a80e1e3a5444f1())
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			return floor(uParam0->f_36.f_3);
	}
	return 0;
}

struct<2> func_212(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_213(struct<2> Param0)
{
	return func_263(Param0);
}

void func_214(var uParam0)
{
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, 1, 0))
	{
		if (!is_entity_dead(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (!func_111(iVar1, 1))
			{
				func_264(iVar1, _0x964000d355219fc0(iVar1), 1, 0);
			}
		}
	}
}

void func_215(int iParam0)
{
	if (!func_265(iParam0))
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

int func_216(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_266(iParam0, 1399091007))
	{
		func_267(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_217(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_227(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_218(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_219(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_220(int iParam0)
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

int func_221(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_223(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_224(int iParam0)
{
	iVar0 = func_221(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_225(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_268(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_270(&Var0, func_269(0));
	}
	if (!func_271(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_220(iVar14);
	return uVar15;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_227(bool bParam0)
{
	if (func_272() == -1)
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

struct<4> func_228(int iParam0, bool bParam1)
{
	Var0 = { func_273(iParam0, bParam1, 0) };
	return func_274(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_229(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_230(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_157(iParam0, 1);
	func_158(iParam0, 1);
	func_159(iParam0, 128);
}

bool func_231()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_232(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case 1442115297:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

char* func_234(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

bool func_235(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_has_standard_mode_completed((*Global_1951255)[iVar0]->f_3, iParam1);
}

int func_236(var uParam0)
{
	return uParam0->f_33;
}

void func_237(var uParam0)
{
	if (uParam0->f_33 < 3)
	{
		uParam0->f_33++;
	}
}

void func_238(var uParam0)
{
	if (uParam0->f_33 > 1)
	{
		uParam0->f_33 = (uParam0->f_33 - 1);
	}
}

bool func_239(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

float func_240()
{
	return 0.5f;
}

void func_241(var uParam0)
{
	func_275(uParam0);
	func_40(17);
	open_sequence_task(&iVar0);
	_task_start_scenario_in_place(0, func_248(uParam0->f_32), 0, true, 0, -1f, false);
	close_sequence_task(iVar0);
	task_perform_sequence(Global_34, iVar0);
	clear_sequence_task(&iVar0);
}

Vector3 func_242(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

Vector3 func_243(vector3 vParam0)
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

void func_244(var uParam0)
{
	uParam0->f_73 = floor((get_control_normal(2, 1301263553) * 127f));
	uParam0->f_74 = floor((get_control_normal(2, -39308912) * 127f));
	uParam0->f_77 = floor((get_control_normal(2, -1450761377) * 127f));
	uParam0->f_78 = floor((get_control_normal(2, -771458680) * 127f));
}

void func_245(var uParam0)
{
	iVar0 = (get_control_value(0, -1089155097) - 127);
	iVar1 = (get_control_value(0, -310714049) - 127);
	if (uParam0->f_65 == 1)
	{
		iVar2 = get_rendering_cam();
	}
	else
	{
		iVar2 = uParam0->f_35;
	}
	if (iVar0 > 0)
	{
		if (uParam0->f_36.f_3 < 90f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 + 0.9f);
			_0xe4b7945ef4f1bfb2(iVar2, &(uParam0->f_36));
			if (func_76(&(uParam0->f_5[8]), 1))
			{
				func_94(&(uParam0->f_5[8]), 0, 1, 1);
				func_95(&(uParam0->f_5[8]), 0, 1);
			}
			if (!func_76(&(uParam0->f_5[6]), 1))
			{
				func_94(&(uParam0->f_5[6]), 1, 1, 1);
				func_95(&(uParam0->f_5[6]), 1, 1);
			}
			if (uParam0->f_56 < 0)
			{
				func_276(&(uParam0->f_56), 8);
			}
		}
		else
		{
			if (!func_76(&(uParam0->f_5[8]), 1))
			{
				func_94(&(uParam0->f_5[8]), 1, 1, 1);
				func_95(&(uParam0->f_5[8]), 1, 1);
			}
			if (func_76(&(uParam0->f_5[6]), 1))
			{
				func_94(&(uParam0->f_5[6]), 0, 1, 1);
				func_95(&(uParam0->f_5[6]), 0, 1);
			}
			func_124(&(uParam0->f_56));
		}
	}
	else
	{
		func_124(&(uParam0->f_56));
	}
	if (iVar0 == 0 && iVar1 > 0)
	{
		if (uParam0->f_36.f_3 > 30f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 - 0.9f);
			_0xe4b7945ef4f1bfb2(iVar2, &(uParam0->f_36));
			if (func_76(&(uParam0->f_5[7]), 1))
			{
				func_94(&(uParam0->f_5[7]), 0, 1, 1);
				func_95(&(uParam0->f_5[7]), 0, 1);
			}
			if (!func_76(&(uParam0->f_5[6]), 1))
			{
				func_94(&(uParam0->f_5[6]), 1, 1, 1);
				func_95(&(uParam0->f_5[6]), 1, 1);
			}
			if (uParam0->f_57 < 0)
			{
				func_276(&(uParam0->f_57), 9);
			}
		}
		else
		{
			if (!func_76(&(uParam0->f_5[7]), 1))
			{
				func_94(&(uParam0->f_5[7]), 1, 1, 1);
				func_95(&(uParam0->f_5[7]), 1, 1);
			}
			if (func_76(&(uParam0->f_5[6]), 1))
			{
				func_94(&(uParam0->f_5[6]), 0, 1, 1);
				func_95(&(uParam0->f_5[6]), 0, 1);
			}
			func_124(&(uParam0->f_57));
		}
	}
	else
	{
		func_124(&(uParam0->f_57));
	}
}

void func_246(var uParam0)
{
	func_40(16);
	clear_facial_idle_anim_override(Global_34);
	set_facial_idle_anim_override(Global_34, func_277(uParam0->f_31), func_84(0));
}

void func_247(var uParam0, int iParam1)
{
	uParam0->f_66 = iParam1;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 830847823;
		case 1:
			return 1904532698;
		case 2:
			return 1998449450;
		case 3:
			return -1241981548;
		default:
			break;
	}
	return 830847823;
}

bool func_249(int iParam0, int iParam1)
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

int func_250(int iParam0)
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
		if (iParam0 == Global_1903136[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_251(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_278(get_entity_coords(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_252(int iParam0)
{
	return (func_279(iParam0) * 100f);
}

float func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
		case 1:
			return 0.02f;
		case 2:
			return 0.02f;
		case 3:
			return 0.03f;
		case 4:
			return 0.03f;
	}
	return 0.03f;
}

var func_254()
{
	return Global_1893587->f_2;
}

bool func_255(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_256(int iParam0)
{
	if (!func_255(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return (*Global_1887339)[iParam0]->f_23;
}

int func_257()
{
	return _get_water_map_zone_at_coords(Global_35);
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return "WATER_AURORA_BASIN";
		case 795414694:
			return "WATER_BARROW_LAGOON";
		case -557290573:
			return "WATER_BAYOU_NWA";
		case 650214731:
			return "WATER_BEARTOOTH_BECK";
		case -1073312073:
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007:
			return "WATER_DAKOTA_RIVER";
		case 1245451421:
			return "WATER_DEADBOOT_CREEK";
		case 469159176:
			return "WATER_DEWBERRY_CREEK";
		case -105598602:
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360:
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577:
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009:
			return "WATER_HOT_SPRINGS";
		case -1229593481:
			return "WATER_KAMASSA_RIVER";
		case -1369817450:
			return "WATER_LAKE_DON_JULIO";
		case 592454541:
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421:
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316:
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150:
			return "WATER_MATTLOCK_POND";
		case -811730579:
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193:
			return "WATER_OWANJILA";
		case 2005774838:
			return "WATER_RINGNECK_CREEK";
		case -1504425495:
			return "WATER_SAN_LUIS_RIVER";
		case -247856387:
			return "WATER_SEA_OF_CORONADO";
		case -823661292:
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770:
			return "WATER_SPIDER_GORGE";
		case -1287619521:
			return "WATER_STILLWATER_CREEK";
		case -1781130443:
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730:
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

var func_259()
{
	return Global_1896622->f_41;
}

bool func_260(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_261(int iParam0)
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
	if (func_272() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_272() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_263(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_280(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	func_281(iParam0);
	vVar1 = { get_entity_coords(iParam0, true, false) };
	func_282(iParam1, iVar0, vVar1, bParam2, iParam3);
	if (bParam2 && -153407852 == iParam1)
	{
		compendium_horse_observed(iParam0, iParam3);
	}
}

bool func_265(int iParam0)
{
	return func_229(iParam0, 2);
}

int func_266(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return func_284(func_283(iParam0), iParam1);
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

void func_267(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_269(bool bParam0)
{
	iVar0 = func_227(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_274(923904168, func_285(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_274(923904168, func_285(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_274(923904168, func_285(bParam0), -740156546, 0);
}

void func_270(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_271(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_227(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_272()
{
	return Global_1572887->f_13;
}

struct<5> func_273(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_285(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_131(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_274(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_269(bParam1) };
			if (bParam2 && func_286(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_287(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_287(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_288(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_289(bParam1) };
			switch (func_221(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_290(iParam0, -1823706425))
			{
				Var0 = { func_274(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_290(iParam0, -1483207246))
			{
				Var0 = { func_274(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_274(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_290(iParam0, -1653629781))
			{
				Var0 = { func_274(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_291(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_290(iParam0, -1653629781))
			{
				Var0 = { func_274(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

struct<4> func_274(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_130(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_227(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_275(var uParam0)
{
	set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
	if (!_0x3bdfcf25b58b0415(Global_34) && is_ped_using_any_scenario(Global_34))
	{
		clear_ped_tasks_immediately(player_ped_id(), false, true);
	}
	set_entity_heading(Global_34, uParam0->f_52);
}

void func_276(var uParam0, int iParam1)
{
	if (*uParam0 < 0)
	{
		*uParam0 = get_sound_id();
		_0xf1c5310feaa36b48(*uParam0, func_84(iParam1), Global_34, func_84(6), 0, 0);
	}
}

char* func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "portrait_normal";
		case 1:
			return "portrait_happy";
		case 2:
			return "portrait_pensive";
		case 3:
			return "portrait_pensive_2";
		case 4:
			return "portrait_relaxed";
		case 5:
			return "portrait_angry";
		case 6:
			return "portrait_angry_2";
		case 7:
			return "portrait_annoyed";
		default:
			break;
	}
	return "portrait_normal";
}

bool func_278(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

float func_279(int iParam0)
{
	iVar0 = func_205(iParam0);
	_0xf3fda9a617a15145(iVar0, &vVar1, &vVar4);
	if (!get_screen_coord_from_world_coord(vVar1, &Var7, &(Var7.f_1)) || !get_screen_coord_from_world_coord(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = absf((Var10 - Var7));
	fVar14 = absf((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

bool func_280(struct<2> Param0, var uParam2)
{
	if (!func_292(Param0))
	{
		return false;
	}
	func_293(uParam2);
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

void func_281(int iParam0)
{
	if (_0xf8b48a361dc388ae(iParam0) != 2)
	{
		return;
	}
	iVar1 = _0x0139637a3bff8b6d(iParam0, &uVar0);
	if (iVar1 == 0)
	{
	}
	else if (!_0x354f689c4ffaab37(iVar1))
	{
		_0x7c32191d9fb2bdea(iVar1);
	}
}

void func_282(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
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
}

int func_283(int iParam0)
{
	return iParam0;
}

int func_284(int iParam0, int iParam1)
{
	if (!func_294(iParam0, 2))
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

struct<4> func_285(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_227(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_274(1328661203, func_295(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_274(1328661203, func_295(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_274(1328661203, func_295(), -1591664384, bParam0);
}

bool func_286(int iParam0, bool bParam1)
{
	if (func_221(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_296();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_287(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_297(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_288(int iParam0, var uParam1, int iParam2)
{
	if (func_298(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_289(bool bParam0)
{
	iVar0 = func_227(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_274(271701509, func_285(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_274(271701509, func_285(bParam0), 12999093, 0);
}

bool func_290(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_221(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_299(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_291(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_300(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_292(struct<2> Param0)
{
	if (!func_301(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_302(Param0))
	{
		return false;
	}
	return true;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_294(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_295()
{
	return Var0;
}

bool func_296()
{
	return (func_303(-1185145312, 0, 0, 0) > 0 && func_304(func_274(889965687, func_285(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_297(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_226(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_274(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_227(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_227(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_298(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_227(0);
	*uParam1 = { func_274(iParam0, func_269(0), iParam3, 0) };
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

bool func_299(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_300(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_227(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_301(int iParam0)
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

int func_302(int iParam0)
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

int func_303(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_305(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_227(bParam1), iParam0, iParam3);
}

int func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_306(&uParam0, iParam4, bParam5, iParam6);
}

bool func_305(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_306(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_307(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_307(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_227(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_300(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

