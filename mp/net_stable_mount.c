void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Local_19.f_3 = _0x6818d1a194e29983();
	if (!does_entity_exist(Local_19.f_3))
	{
		terminate_this_thread();
		return;
	}
	func_1();
	while (!func_2(1, 1) && (does_entity_exist(Local_19.f_3) && _0x6818d1a194e29983() == Local_19.f_3))
	{
		if (!func_3(&Local_19, &uScriptParam_0))
		{
			func_4(&Local_19, &uScriptParam_0);
			if (func_3(&Local_19, &uScriptParam_0))
			{
			}
			else
			{
				Jump @119; //curOff = 113
				Jump @127; //curOff = 116
				wait(0);
			}
			func_5(&Local_19, &uScriptParam_0);
		}
	}
}

void func_1()
{
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	_0xa6ac35db4a7957a8(250);
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3(var uParam0, var uParam1)
{
	if (func_2(1, 1))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_3))
	{
		return true;
	}
	if (func_6(uParam0, 12))
	{
		return true;
	}
	if (func_6(uParam0, 0))
	{
		return true;
	}
	if (!func_6(uParam0, 2))
	{
		if (!network_is_handle_valid(uParam1) || !network_is_gamer_in_my_session(uParam1))
		{
			func_7(uParam0, 11);
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, var uParam1)
{
	uParam0->f_3 = _0x6818d1a194e29983();
	if (is_entity_a_ped(uParam0->f_3))
	{
		uParam0->f_18 = get_ped_index_from_entity_index(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = get_vehicle_index_from_entity_index(uParam0->f_3);
	}
	uParam0->f_20 = network_get_player_from_gamer_handle(uParam1);
	if (network_is_player_active(uParam0->f_20))
	{
		iVar0 = get_player_ped(uParam0->f_20);
		if (uParam0->f_19 != iVar0)
		{
			uParam0->f_19 = iVar0;
			func_7(uParam0, 29);
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, uParam1);
			break;
		case 1:
			func_9(uParam0, uParam1);
			break;
		case 2:
			func_10(uParam0, uParam1);
			break;
		case 3:
			func_11(uParam0, uParam1);
			break;
		case 4:
			func_12(uParam0, uParam1);
			break;
	}
	func_13(uParam0, uParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, var uParam1)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (does_blip_exist(uParam0->f_16))
	{
		remove_blip(&(uParam0->f_16));
	}
	if (is_mp_gamer_tag_active(uParam0->f_5))
	{
		remove_mp_gamer_tag(&(uParam0->f_5));
	}
	if (!does_entity_exist(uParam0->f_3))
	{
		terminate_this_thread();
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (does_entity_exist(uParam0->f_18))
	{
		bVar2 = is_ped_dead_or_dying(uParam0->f_18, true);
		bVar3 = is_ped_in_writhe(uParam0->f_18);
	}
	bVar4 = true;
	if ((!&Global_1048579 || !Global_390124->f_3) || Global_390124->f_18.f_1)
	{
		bVar4 = false;
	}
	bVar5 = network_has_control_of_entity(uParam0->f_3);
	if (decor_exist_on(uParam0->f_3, "HorseCamp"))
	{
		decor_remove(uParam0->f_3, "HorseCamp");
	}
	if (decor_exist_on(uParam0->f_3, "bHorseHasBeenStolen"))
	{
		decor_remove(uParam0->f_3, "bHorseHasBeenStolen");
	}
	if (func_6(uParam0, 5))
	{
		if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
		{
			if (_0xefc4303ddc6e60d3(iVar1) && _0xed1f514af4732258(iVar1) == uParam0->f_18)
			{
				_0xed27560703f37258(iVar1);
			}
		}
		if (_0x5102307ce88798eb(uParam0->f_18))
		{
			_0x3088634cf8c819cf(uParam0->f_18);
		}
		if (bVar5)
		{
			set_ped_config_flag(uParam0->f_18, 211, false);
			set_ped_config_flag(uParam0->f_18, 297, false);
			set_ped_config_flag(uParam0->f_18, 400, false);
		}
		if (does_entity_exist(iVar1))
		{
			if (func_14(iVar1, uParam0->f_18, 0) || (!is_entity_dead(iVar1) && get_mount(iVar1) == uParam0->f_18))
			{
				bVar6 = false;
				if (!is_player_dead(iVar0))
				{
					if (is_player_free_aiming(iVar0) || get_ped_reset_flag(iVar1, 311))
					{
						bVar6 = true;
					}
				}
				if ((bVar6 || !does_entity_exist(uParam0->f_18)) || _0x8d9bfce3352de47f(uParam0->f_18))
				{
					clear_ped_tasks_immediately(iVar1, false, true);
					_remove_ped_from_mount(iVar1, true, false);
				}
				else
				{
					task_dismount_animal(iVar1, 1, 0, 0, 0, 0);
				}
			}
		}
		if (_network_is_player_index_valid(iVar0))
		{
			iVar7 = _0xad03b03737ce6810(uParam0->f_18);
			if (!_network_is_player_index_valid(iVar7))
			{
				iVar7 = uParam0->f_20;
			}
			if (_network_is_player_index_valid(iVar7) && network_is_player_connected(iVar7))
			{
				iVar8 = iVar0;
				iVar9 = iVar7;
				if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar8]->f_13), iVar9))
				{
					_0xd426e2e3288469d6(&((*Global_1291106)[iVar8]->f_13), iVar9);
				}
				if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar8]->f_14), iVar9))
				{
					_0xd426e2e3288469d6(&((*Global_1291106)[iVar8]->f_14), iVar9);
				}
			}
		}
		if (!bVar5)
		{
			if (!func_15(uParam0->f_3, uParam0->f_4, !func_6(uParam0, 11)))
			{
			}
		}
		else
		{
			decor_set_bool(uParam0->f_3, "bHorseCleanedUp", true);
		}
	}
	else if (func_6(uParam0, 6))
	{
		bVar10 = is_entity_a_vehicle(uParam0->f_3);
		if (bVar10)
		{
			if (_network_is_player_index_valid(iVar0))
			{
				iVar11 = _0x7c803bdc8343228d(uParam0->f_21);
				if (!_network_is_player_index_valid(iVar11))
				{
					iVar11 = uParam0->f_20;
				}
				if (_network_is_player_index_valid(iVar11) && network_is_player_connected(iVar11))
				{
					iVar12 = iVar0;
					iVar13 = iVar11;
					if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar12]->f_13), iVar13))
					{
						_0xd426e2e3288469d6(&((*Global_1291106)[iVar12]->f_13), iVar13);
					}
				}
				else if (!func_15(uParam0->f_3, uParam0->f_4, 0))
				{
				}
			}
		}
	}
	if (func_6(uParam0, 7))
	{
		if (_0xf49f14462f0ae27c(iVar0) == uParam0->f_18)
		{
			func_16();
			func_17(uParam0->f_18, &(uParam1->f_7));
			func_18();
			if (!func_6(uParam0, 11))
			{
				if (!func_6(uParam0, 17))
				{
					if (!is_entity_dead(uParam0->f_18))
					{
						func_19(uParam0->f_18);
					}
				}
			}
			func_20(1);
			func_20(65536);
			func_20(32768);
			func_20(131072);
			func_21(0, 1);
			func_22(0, 1);
		}
		if (uParam1->f_11 == Global_1291734->f_581.f_46)
		{
			if (_0xb9050a97594c8832(iVar0) == uParam0->f_21)
			{
				if (!func_23(94))
				{
					_0xd0e02aa618020d17(iVar0, 0);
				}
				func_24(1);
			}
		}
	}
	if (func_23(94) && _0xb9050a97594c8832(iVar0) == uParam0->f_21)
	{
		if (bVar5)
		{
			terminate_this_thread();
		}
		return;
	}
	if (func_6(uParam0, 6))
	{
		iVar14 = 0;
		while (iVar14 < 4)
		{
			if (!does_entity_exist(&(uParam0->f_22[iVar14])))
			{
			}
			else
			{
				is_entity_dead(&(uParam0->f_22[iVar14]));
				if (!network_has_control_of_entity(&(uParam0->f_22[iVar14])))
				{
				}
				else
				{
					if (!is_entity_a_mission_entity(&(uParam0->f_22[iVar14])))
					{
						set_entity_as_mission_entity(&(uParam0->f_22[iVar14]), true, true);
					}
					if (!_0x88ad6cc10d8d35b2(&(uParam0->f_22[iVar14])))
					{
					}
					else if (func_6(uParam0, 11))
					{
						delete_ped(uParam0->f_22[iVar14]);
					}
					else
					{
						set_ped_as_no_longer_needed(uParam0->f_22[iVar14]);
					}
				}
			}
			iVar14++;
		}
	}
	if (!bVar5)
	{
		func_25(uParam0, func_6(uParam0, 11));
		return;
	}
	if (!is_entity_a_mission_entity(uParam0->f_3))
	{
		set_entity_as_mission_entity(uParam0->f_3, true, false);
	}
	if (!bVar5)
	{
		terminate_this_thread();
		return;
	}
	if (func_6(uParam0, 5))
	{
		if (func_6(uParam0, 2))
		{
			Global_1904087->f_111 = 0;
			Global_1904087->f_112 = 0;
			set_ped_config_flag(player_ped_id(), 561, false);
		}
		func_25(uParam0, func_6(uParam0, 11));
		_0x18ff3110cf47115d(uParam0->f_18, 34, 1);
		if (func_6(uParam0, 11) || func_6(uParam0, 17))
		{
			iVar15 = _0xffec4b0a1a3ed515(uParam0->f_18, 0);
			iVar16 = _get_rider_of_mount(uParam0->f_18, true);
			if (does_entity_exist(iVar15))
			{
				if (!_0x8d9bfce3352de47f(uParam0->f_18))
				{
					delete_ped(&(uParam0->f_18));
				}
			}
			else if (does_entity_exist(iVar16))
			{
				if (iVar16 == get_player_ped(iVar0))
				{
					_remove_ped_from_mount(iVar16, true, false);
					if (!_0x8d9bfce3352de47f(uParam0->f_18))
					{
						if (bVar4)
						{
							delete_ped(&(uParam0->f_18));
						}
						else
						{
							_0x7043d0681285ba2d(&(uParam0->f_18));
						}
					}
				}
				else if (!_0x8d9bfce3352de47f(uParam0->f_18))
				{
					delete_ped(&(uParam0->f_18));
				}
			}
			else if (!_0x8d9bfce3352de47f(uParam0->f_18))
			{
				if (bVar4)
				{
					delete_ped(&(uParam0->f_18));
				}
				else
				{
					_0x7043d0681285ba2d(&(uParam0->f_18));
				}
			}
		}
		else
		{
			set_ped_reset_flag(uParam0->f_18, 105, true);
			set_blocking_of_non_temporary_events(uParam0->f_18, true);
			set_ped_config_flag(uParam0->f_18, 288, true);
			if (!bVar2 && !bVar3)
			{
				iVar17 = get_player_ped(_0xad03b03737ce6810(uParam0->f_18));
				if ((!does_entity_exist(iVar17) || is_entity_dead(iVar17)) || func_26(get_entity_coords(iVar17, true, false)))
				{
					iVar17 = uParam0->f_18;
				}
				_task_smart_flee_style_coord(uParam0->f_18, get_entity_coords(iVar17, true, false), 4, 5767424, -1082130432, -1, 0);
				_0xdd0660c997de94fd(uParam0->f_3, 0);
			}
			if (bVar3)
			{
				_set_entity_health(uParam0->f_18, 0, 0);
			}
			_0x39a2fc5af55a52b1(uParam0->f_18, -1);
			_0x36e4b61dc56de77c(uParam0->f_18, 20f, 150f, 30000, 5000);
			set_ped_as_no_longer_needed(&(uParam0->f_18));
		}
	}
	else
	{
		_0xc399cc89fba05da0(uParam0->f_21, 1);
		if (func_6(uParam0, 11))
		{
			_0x35dc1877312fba0f(&(uParam0->f_21));
		}
		else
		{
			set_vehicle_as_no_longer_needed(&(uParam0->f_21));
		}
	}
	terminate_this_thread();
}

bool func_6(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_1, iParam1);
}

void func_7(var uParam0, int iParam1)
{
	if (is_bit_set(uParam0->f_1, iParam1))
	{
		return;
	}
	set_bit(&(uParam0->f_1), iParam1);
}

void func_8(var uParam0, var uParam1)
{
	if (!is_entity_a_mission_entity(uParam0->f_3))
	{
		set_entity_as_mission_entity(uParam0->f_3, true, true);
	}
	iVar0 = get_entity_model(uParam0->f_3);
	if (!is_model_valid(iVar0))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_27(&(uParam0->f_29)))
	{
		func_28(&(uParam0->f_29));
	}
	iVar1 = func_29(iVar0);
	if (iVar1 == -1)
	{
		if (is_model_a_ped(iVar0))
		{
			iVar1 = 0;
		}
		else if (is_model_a_vehicle(iVar0))
		{
			iVar1 = 2;
		}
		else
		{
			func_7(uParam0, 0);
		}
	}
	iVar2 = player_ped_id();
	uParam0->f_4 = iVar1;
	iVar3 = network_get_player_from_gamer_handle(uParam1);
	uParam0->f_20 = iVar3;
	if (!_0xb881ca836cc4b6d4(&(uParam1->f_7)))
	{
		func_7(uParam0, 1);
	}
	if (is_entity_a_ped(uParam0->f_3))
	{
		uParam0->f_18 = get_ped_index_from_entity_index(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = get_vehicle_index_from_entity_index(uParam0->f_3);
	}
	if ((!_network_is_player_index_valid(iVar3) || !network_is_player_connected(iVar3)) || iVar3 != player_id())
	{
		switch (uParam0->f_4)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
				if (compare_strings(&(uParam1->f_12), func_30(), false, -1) == 0)
				{
					_set_ped_prompt_name(uParam0->f_18, _create_var_string(2, func_32(func_31(iVar0))));
				}
				else if (get_length_of_literal_string(&(uParam1->f_12)) > 0 && _0xf23a6d6c11d8ec15(uParam1))
				{
					_set_ped_prompt_name(uParam0->f_18, &(uParam1->f_12));
				}
				else if (iVar0 == func_33())
				{
					_set_ped_prompt_name(uParam0->f_18, _create_var_string(2, func_32(func_34())));
				}
				func_7(uParam0, 21);
				break;
			case 2:
				func_7(uParam0, 6);
				func_35(uParam0, iVar2, network_get_player_from_gamer_handle(uParam1));
				break;
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
			default:
				func_7(uParam0, 21);
				break;
		}
		func_36(uParam0, 4);
		return;
	}
	if (func_6(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			iVar4 = func_31(iVar0);
			StringCopy(&(Global_1291734->f_11.f_515), _create_var_string(2, func_32(iVar4)), 64);
		}
	}
	else
	{
		if (!func_37(&(uParam1->f_7), &uVar5))
		{
			if (func_38(&(uParam1->f_7)))
			{
				func_39(0, 1);
			}
		}
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!func_40(&(uParam1->f_7), uParam0->f_4, 1))
			{
				func_7(uParam0, 0);
				return;
			}
		}
		uParam1->f_7 = { *Global_1904087 };
		uParam0->f_4 = Global_1904087->f_10;
		Global_1291734->f_11.f_515 = { func_41(Global_1904087, 1) };
	}
	if (uParam0->f_4 == -1)
	{
		func_7(uParam0, 0);
		return;
	}
	func_7(uParam0, 2);
	if (!_unlock_is_unlocked(1988458112))
	{
		is_entity_dead(iVar2);
		set_ped_config_flag(iVar2, 561, false);
		func_42(uParam0, 23);
	}
	uParam0->f_17 = func_43(uParam0->f_4);
	if (func_6(uParam0, 1))
	{
		uParam0->f_17 = -1230993421;
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			func_7(uParam0, 21);
			if (network_does_tunable_exist(-475019843, 1661175588) && network_access_tunable_bool(-475019843, 1661175588))
			{
				if (func_6(uParam0, 1))
				{
					iVar7 = 1;
				}
				else
				{
					func_44(uParam0->f_18, Global_1904087->f_23);
					iVar7 = func_45(uParam0->f_18);
				}
				_0xa69899995997a63b(uParam0->f_18, iVar7);
			}
			uParam0->f_18 = get_ped_index_from_entity_index(uParam0->f_3);
			iVar6 = ped_to_net(uParam0->f_18);
			func_46(uParam0->f_3, 0);
			func_7(uParam0, 5);
			func_36(uParam0, 1);
			if (get_length_of_literal_string(&(Global_1291734->f_11.f_515)) > 0)
			{
				uParam0->f_5 = create_fake_mp_gamer_tag(uParam0->f_18, &(Global_1291734->f_11.f_515), true, false, "", 0);
				_set_ped_prompt_name(uParam0->f_18, &(Global_1291734->f_11.f_515));
			}
			else if (iVar0 == func_33())
			{
				uParam0->f_5 = create_fake_mp_gamer_tag(uParam0->f_18, _create_var_string(2, func_32(func_34())), true, false, "", 0);
				_set_ped_prompt_name(uParam0->f_18, _create_var_string(2, func_32(func_34())));
			}
			else
			{
				uParam0->f_5 = create_fake_mp_gamer_tag(uParam0->f_18, "HORSE", true, false, "", 0);
			}
			if (func_6(uParam0, 1))
			{
				_set_mp_gamer_tag_top_icon(uParam0->f_5, -847116890);
			}
			else
			{
				_set_mp_gamer_tag_top_icon(uParam0->f_5, 130495496);
			}
			_set_mp_gamer_tag_colour(uParam0->f_5, 830499243);
			_set_mp_gamer_tag_visibility(uParam0->f_5, uParam0->f_6);
			if (func_40(&(uParam1->f_7), uParam0->f_4, 0))
			{
				if (!func_47(Global_1904087, &(uParam0->f_34)))
				{
				}
			}
			func_48();
			break;
		case 2:
			func_35(uParam0, iVar2, player_id());
			func_7(uParam0, 6);
			func_36(uParam0, 2);
			iVar6 = _0xf260af6f43953316(uParam0->f_3);
			break;
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			func_36(uParam0, 3);
			iVar6 = _0xf260af6f43953316(uParam0->f_3);
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
	if (!network_does_network_id_exist(iVar6))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return;
	}
	_set_network_id_sync_to_player(iVar6, player_id(), true);
}

void func_9(var uParam0, var uParam1)
{
	iVar0 = player_id();
	iVar1 = network_player_id_to_int();
	if (!_network_is_player_index_valid(iVar0))
	{
		func_49(uParam0);
		return;
	}
	func_50(uParam0);
	if (_0xf49f14462f0ae27c(iVar0) == uParam0->f_18)
	{
		func_7(uParam0, 7);
		if (!func_6(uParam0, 22))
		{
			func_51();
			if (!func_52())
			{
			}
			else
			{
				func_53(&(Global_1904087->f_113));
				Global_1904087->f_111 = 1;
				Global_1904087->f_112 = 0;
				Var2 = { func_54(0, 1, 0, -1) };
				_0xff9052bc7a3b7d33(uParam0->f_18, 1651757805, &Var2, 0);
				func_7(uParam0, 22);
			}
		}
		if (func_23(44))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_55(2, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		(*Global_1291106)[iVar1]->f_1 |= 1;
		if (func_6(uParam0, 20))
		{
			func_40(&(uParam1->f_7), 0, 0);
			sVar6 = func_56(func_41(Global_1904087, 1));
			if (compare_strings(sVar6, &(Global_1291734->f_11.f_515), true, -1) > 0)
			{
				set_mp_gamer_tag_name(uParam0->f_5, &(Global_1904087->f_12));
				_set_ped_prompt_name(uParam0->f_18, &(Global_1904087->f_12));
				Global_1291734->f_11.f_515 = { Global_1904087->f_12 };
				func_42(uParam0, 20);
			}
		}
		if (func_55(4096, 255))
		{
			func_20(4096);
			func_7(uParam0, 20);
		}
		func_57(uParam0);
		func_58(uParam0);
		func_59(uParam0, uParam1);
		func_60(uParam0, uParam0->f_18, 8192, 16384, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_61(uParam0, uParam1);
	func_62(uParam0, uParam1);
	func_63(uParam0);
	func_64(uParam0);
	func_65(uParam0);
	func_66(uParam0);
	func_67(uParam0, iVar1);
	func_68(uParam0, iVar1);
	func_69(uParam0, iVar1);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_72(uParam0);
	func_73(uParam0);
}

void func_10(var uParam0, var uParam1)
{
	iVar0 = player_ped_id();
	iVar1 = network_player_id_to_int();
	if (uParam1->f_11 == Global_1291734->f_581.f_46)
	{
		_0xd0e02aa618020d17(player_id(), uParam0->f_21);
		if (func_23(94))
		{
			_0xa6ac35db4a7957a8(9999);
		}
		else
		{
			_0xa6ac35db4a7957a8(250);
		}
		func_7(uParam0, 7);
		if (func_23(90))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_74(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		(*Global_1291106)[iVar1]->f_2 |= 1;
		if (does_entity_exist(uParam0->f_21) && _is_draft_vehicle(uParam0->f_21))
		{
			_0x226c6a4e3346d288(uParam0->f_21, func_23(96));
			_0x6090a031c69f384e(uParam0->f_21, func_23(96));
		}
		func_60(uParam0, uParam0->f_21, 32768, 65536, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_75(uParam0);
	func_35(uParam0, iVar0, player_id());
	func_66(uParam0);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_76(uParam0);
}

void func_11(var uParam0, var uParam1)
{
	iVar0 = network_player_id_to_int();
	if (uParam1->f_11 == Global_1291734->f_581.f_46)
	{
		_0xd0e02aa618020d17(player_id(), uParam0->f_21);
		func_7(uParam0, 7);
		if (func_23(90))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_74(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		(*Global_1291106)[iVar0]->f_2 |= 1;
		func_60(uParam0, uParam0->f_21, 32768, 65536, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_66(uParam0);
	func_70(uParam0, uParam1, iVar0);
	func_71(uParam0, uParam1, iVar0);
	func_77(uParam0);
}

void func_12(var uParam0, var uParam1)
{
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	iVar0 = network_get_player_from_gamer_handle(uParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_20)
	{
	}
	if (!network_is_gamer_in_my_session(uParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	switch (func_78(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			func_7(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1071686->f_5)
	{
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (!network_is_player_connected(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (uParam0->f_4 == 2)
	{
		func_35(uParam0, player_ped_id(), iVar0);
	}
	func_67(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_68(uParam0, iVar1);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_72(uParam0);
	if (!func_6(uParam0, 18))
	{
		if (uParam0->f_18 != _0xf49f14462f0ae27c(iVar0))
		{
			if (!func_27(&(uParam0->f_10)))
			{
				func_79(&(uParam0->f_10));
			}
			fVar2 = func_80(&(uParam0->f_10));
			if (fVar2 > 5f)
			{
				func_7(uParam0, 18);
			}
		}
		else if (func_27(&(uParam0->f_10)))
		{
			func_28(&(uParam0->f_10));
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (!does_entity_exist(uParam0->f_18))
			{
				uParam0->f_18 = get_ped_index_from_entity_index(uParam0->f_3);
			}
			if (uParam0->f_18 == _0xf49f14462f0ae27c(iVar0))
			{
				func_64(uParam0);
				func_61(uParam0, uParam1);
				func_63(uParam0);
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		case 2:
			if (!does_entity_exist(uParam0->f_21))
			{
				uParam0->f_21 = get_vehicle_index_from_entity_index(uParam0->f_3);
			}
			if (func_74(1, iVar1) && (*Global_1291106)[iVar1]->f_6 == uParam1->f_11)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			func_75(uParam0);
			break;
		case 3:
			if (!does_entity_exist(uParam0->f_21))
			{
				uParam0->f_21 = get_vehicle_index_from_entity_index(uParam0->f_3);
			}
			if (func_74(1, iVar1) && (*Global_1291106)[iVar1]->f_6 == uParam1->f_11)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
}

void func_13(var uParam0, var uParam1)
{
	iVar1 = get_number_of_events(1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -507840394:
				func_81(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_14(int iParam0, int iParam1, bool bParam2)
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

bool func_15(int iParam0, var uParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = _0xf260af6f43953316(iParam0);
	if (!network_does_network_id_exist(iVar0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!is_bit_set(Global_1291734->f_11.f_320, iVar1))
		{
			Global_1291734->f_11.f_322[iVar1]->f_1 = iParam0;
			Global_1291734->f_11.f_322[iVar1]->f_2 = uParam1;
			Global_1291734->f_11.f_322[iVar1] = bParam2;
			func_79(&(Global_1291734->f_11.f_322[iVar1]->f_3));
			set_bit(&(Global_1291734->f_11.f_320), iVar1);
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_16()
{
	if (Global_1291734->f_1403.f_5 == 1)
	{
		return;
	}
	Global_1291734->f_1403.f_5 = 1;
}

void func_17(int iParam0, var uParam1)
{
	if (func_83(func_82(), 0, 0))
	{
		return;
	}
	if (!func_84(iParam0))
	{
		return;
	}
	bVar0 = is_ped_in_writhe(iParam0);
	bVar1 = _0xb655db7582aec805(iParam0);
	if (!bVar0 && !bVar1)
	{
		return;
	}
	iVar2 = _0xad03b03737ce6810(iParam0);
	if (!_network_is_player_index_valid(iVar2))
	{
		return;
	}
	if (iVar2 != player_id())
	{
		return;
	}
	if (func_23(8))
	{
		return;
	}
	func_85(iParam0, 0, 0);
	if (!func_40(uParam1, 0, 0))
	{
		return;
	}
	func_86(Global_1904087, 0, 1);
	func_87();
	iVar3 = func_88(uParam1, -1585141069, 0);
	bVar4 = iVar3 > 0;
	if (bVar4)
	{
		func_89(18, 0);
		func_90(*uParam1, 0, 0);
	}
	else
	{
		func_89(17, 0);
	}
}

void func_18()
{
	iVar0 = player_id();
	if (!does_entity_exist(_0xf49f14462f0ae27c(iVar0)))
	{
		return;
	}
	_0xe6d4e435b56d5bd0(iVar0, 0);
}

void func_19(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (does_entity_exist(Global_1291734->f_11.f_157))
	{
		Global_1291734->f_11.f_158 = Global_1291734->f_11.f_157;
	}
	Global_1291734->f_11.f_157 = iParam0;
	Global_1291734->f_11.f_159 = Global_1296859->f_21 + 35;
}

void func_20(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 - ((*Global_1291106)[iVar0]->f_1 && iParam0));
}

void func_21(bool bParam0, bool bParam1)
{
	iVar0 = player_id();
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (!network_is_player_active(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_91((*Global_1291106)[iVar1]->f_4, 1) != bParam0)
	{
		if (bParam0)
		{
			func_92(&((*Global_1291106)[iVar1]->f_4), 1);
		}
		else
		{
			func_93(&((*Global_1291106)[iVar1]->f_4), 1);
		}
		func_93(&((*Global_1291106)[iVar1]->f_4), 2);
		if (bParam0)
		{
			func_79(&(Global_1291734->f_11.f_556));
		}
		else
		{
			func_28(&(Global_1291734->f_11.f_556));
		}
	}
}

void func_22(bool bParam0, bool bParam1)
{
	iVar0 = player_id();
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (!network_is_player_active(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (!func_91((*Global_1291106)[iVar1]->f_4, 1))
	{
		return;
	}
	if (func_91((*Global_1291106)[iVar1]->f_4, 2) != bParam0)
	{
		if (bParam0)
		{
			func_92(&((*Global_1291106)[iVar1]->f_4), 2);
		}
		else
		{
			func_93(&((*Global_1291106)[iVar1]->f_4), 2);
		}
	}
}

bool func_23(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

void func_24(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 - ((*Global_1291106)[iVar0]->f_2 && iParam0));
}

void func_25(var uParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar3 = func_94(iVar2);
		if (_0x608bc6a6aacd5036(&Var4, uParam0->f_18, iVar3, 0))
		{
			if (func_6(uParam0, 2))
			{
				if (func_95(Var4.f_3, iVar3))
				{
					func_96(iVar2);
					set_bit(&iVar1, iVar2);
				}
			}
			func_97(Var4.f_3, iVar2, bParam1);
		}
		else if (func_6(uParam0, 2))
		{
			if (func_98(iVar2))
			{
				if (does_entity_exist(Global_1291734->f_938.f_245[iVar2]->f_3))
				{
					func_97(Global_1291734->f_938.f_245[iVar2]->f_3, iVar2, bParam1);
				}
				func_96(iVar2);
			}
			set_bit(&iVar1, iVar2);
		}
		iVar2++;
	}
	if (func_6(uParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar8 = int_to_playerindex(iVar0);
			if (!network_is_player_active(iVar8))
			{
			}
			else
			{
				iVar9 = get_player_ped(iVar8);
				if (!does_entity_exist(iVar9) || is_entity_dead(iVar9))
				{
				}
				else
				{
					iVar11 = _0x4642182a298187d0(iVar9, 7, &Var12, 4, 1);
					if (iVar11 != 0)
					{
						if (!is_entity_a_ped(Var12.f_1))
						{
						}
						else if (get_ped_index_from_entity_index(Var12.f_1) != uParam0->f_18)
						{
						}
						else if (!_0xb36b0c7152b15278(iVar9, &iVar10))
						{
						}
						else
						{
							iVar2 = func_99(iVar10);
							if (is_bit_set(iVar1, iVar2))
							{
							}
							else
							{
								func_96(iVar2);
								set_bit(&iVar1, iVar2);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_26(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_27(var uParam0)
{
	return func_100(*uParam0, 1);
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_29(int iParam0)
{
	func_101();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		Global_1904087->f_106.f_1 = 0;
		Global_1904087->f_106.f_2 = -571823039;
		Global_1904087->f_106.f_3 = func_102(iVar1);
		Global_1904087->f_106.f_4 = iParam0;
		if (_datafile_get_data_node_index(&(Global_1904087->f_106.f_1), &(Global_1904087->f_106)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

char* func_30()
{
	return "UNNAMED_HORSE";
}

int func_31(int iParam0)
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
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
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
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
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
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2078767648:
		case -2055655009:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1365665739:
		case -757978903:
		case 981469777:
		case 1064693514:
		case 1592694494:
		case 1909854428:
			return "BREED_BRETON";
		case -1722101672:
		case -189605757:
		case 3032834:
		case 381495209:
		case 863391233:
		case 1577022605:
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case -1698261864:
		case -1540355548:
		case -670301166:
		case -601560591:
		case -370362766:
		case 885568364:
			return "BREED_KLADRUBER";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "BREED_NORFOLKROADSTER";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_TENNESSEEWALKER";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_APPALOOSA";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_33()
{
	return 808655744;
}

int func_34()
{
	return -364764277;
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_27)
	{
		if (!does_entity_exist(&(uParam0->f_22[iVar0])))
		{
		}
		else
		{
			set_ped_relationship_group_hash(&(uParam0->f_22[iVar0]), get_ped_relationship_group_hash(iParam1));
		}
		iVar0++;
	}
	if (func_6(uParam0, 21))
	{
		return;
	}
	uParam0->f_21 = get_vehicle_index_from_entity_index(uParam0->f_3);
	if (!_is_draft_vehicle(uParam0->f_21))
	{
		uParam0->f_32++;
		return;
	}
	_0xa19447d83294e29f(uParam0->f_21, &iVar4, &iVar3);
	if (iVar4 == 0)
	{
		if (iVar3 == 0)
		{
			uParam0->f_32++;
			if (uParam0->f_32 > 90)
			{
				func_7(uParam0, 0);
			}
			return;
		}
	}
	if (iVar3 >= iVar4)
	{
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			iVar5 = _get_ped_in_draft_seat(uParam0->f_21, iVar1);
			if (!does_entity_exist(iVar5))
			{
			}
			else
			{
				if (iVar2 >= 4)
				{
				}
				else
				{
					uParam0->f_22[iVar2] = iVar5;
					if (!is_entity_a_mission_entity(&(uParam0->f_22[iVar2])) || !_0x88ad6cc10d8d35b2(&(uParam0->f_22[iVar2])))
					{
						set_entity_as_mission_entity(&(uParam0->f_22[iVar2]), true, true);
					}
					_0x931b241409216c1f(get_player_ped(iParam2), &(uParam0->f_22[iVar2]), 0);
					set_ped_config_flag(&(uParam0->f_22[iVar2]), 208, true);
					set_ped_config_flag(&(uParam0->f_22[iVar2]), 209, true);
					set_ped_config_flag(&(uParam0->f_22[iVar2]), 277, true);
					set_ped_config_flag(&(uParam0->f_22[iVar2]), 467, true);
					set_ped_relationship_group_hash(&(uParam0->f_22[iVar2]), get_ped_relationship_group_hash(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @424; //curOff = 392
				uParam0->f_32++;
				if (uParam0->f_32 > 90)
				{
					func_7(uParam0, 0);
				}
				return;
				uParam0->f_27 = iVar2;
				func_7(uParam0, 21);
			}
		}
	}
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_37(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[*uParam1], uParam0))
		{
		}
		else
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

bool func_38(var uParam0)
{
	Var0 = { func_103() };
	if (_0x4c543d5dfcd2dafd(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], uParam0))
		{
			bVar18 = true;
		}
		else if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], &Var0))
		{
			func_104(Global_17411.f_55.f_61.f_41[iVar19]);
			*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_105(*Global_17411.f_55.f_61.f_41[iVar19], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_104(Global_17411.f_55.f_61.f_41[iVar19]);
				*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106();
	}
	if (bParam0)
	{
		func_107(8);
		func_107(512);
	}
	else
	{
		func_107(8);
		func_107(16);
	}
}

bool func_40(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_108(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_109(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_110(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

struct<8> func_41(var uParam0, bool bParam1)
{
	Var0 = { uParam0->f_12 };
	if (bParam1)
	{
		if (func_111(uParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (compare_strings(&Var0, func_30(), false, -1) == 0)
	{
		StringCopy(&Var0, _create_var_string(2, func_32(uParam0->f_22)), 64);
	}
	if (get_length_of_literal_string(&Var0) == 0)
	{
		if (uParam0->f_22 != 0)
		{
			StringCopy(&Var0, _create_var_string(2, func_112(uParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_113(uParam0->f_4, 0))
	{
		iVar16 = func_114(uParam0->f_4);
		if (is_model_valid(iVar16) && is_model_a_vehicle(iVar16))
		{
			sVar17 = _create_var_string(0, func_115(uParam0->f_4));
			Var0 = { func_116(sVar17) };
		}
	}
	return Var0;
}

void func_42(var uParam0, int iParam1)
{
	if (!is_bit_set(uParam0->f_1, iParam1))
	{
		return;
	}
	clear_bit(&(uParam0->f_1), iParam1);
}

int func_43(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	func_101();
	Global_1904087->f_106.f_2 = 116835447;
	Global_1904087->f_106.f_3 = func_102(iParam0);
	if (!_datafile_get_hash(&uVar0, &(Global_1904087->f_106)))
	{
		return -1925605092;
	}
	uVar1 = uVar0;
	return uVar1;
}

void func_44(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	set_attribute_points(iParam0, 7, iParam1);
}

int func_45(int iParam0)
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

void func_46(int iParam0, int iParam1)
{
	func_117(iParam0, iParam1);
}

bool func_47(var uParam0, var uParam1)
{
	if (func_118(uParam0, -2147483648))
	{
		*uParam1 = 4;
	}
	else if (func_118(uParam0, 1073741824))
	{
		*uParam1 = 3;
	}
	else if (func_118(uParam0, 536870912))
	{
		*uParam1 = 2;
	}
	else if (func_118(uParam0, 268435456))
	{
		*uParam1 = 1;
	}
	else if (func_118(uParam0, 134217728))
	{
		*uParam1 = 0;
	}
	else
	{
		return false;
	}
	return true;
}

int func_48()
{
	iVar0 = 0;
	if (Global_17411.f_55.f_61.f_582 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17411.f_55.f_61.f_582 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17411.f_55.f_61.f_582 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17411.f_55.f_61.f_582 & 16 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_49(var uParam0)
{
	if (!func_6(uParam0, 24) && !func_6(uParam0, 25))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		func_119();
	}
}

void func_50(var uParam0)
{
	if (does_entity_exist(uParam0->f_18))
	{
		if (!is_entity_dead(uParam0->f_18))
		{
			iVar0 = _get_rider_of_mount(uParam0->f_18, false);
		}
	}
	iVar1 = player_ped_id();
	if (iVar0 == iVar1 && func_6(uParam0, 2))
	{
		if (!func_6(uParam0, 23))
		{
			if (_unlock_is_unlocked(1988458112))
			{
				is_entity_dead(iVar1);
				set_ped_config_flag(iVar1, 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (func_6(uParam0, 23))
	{
		is_entity_dead(iVar1);
		set_ped_config_flag(iVar1, 561, false);
		func_42(uParam0, 23);
	}
}

void func_51()
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1904087->f_113[iVar1];
		if (!is_model_valid(iVar0))
		{
		}
		else
		{
			request_model(iVar0, false);
		}
		iVar1++;
	}
}

bool func_52()
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1904087->f_113[iVar1];
		if (!is_model_valid(iVar0))
		{
		}
		else if (!has_model_loaded(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_53(var uParam0)
{
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_120(iVar0, (*uParam0)[iVar1], iVar1);
		iVar1++;
	}
}

struct<4> func_54(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_121(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_122() };
		if (func_123() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_124(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_125(player_id());
	}
	bVar33 = func_126(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_127(iParam3, 0);
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
			return func_103();
		}
		if (!func_128(&Var0, 0))
		{
			Var35 = { func_129(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_55(int iParam0, int iParam1)
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

char* func_56(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_57(var uParam0)
{
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_18))
	{
		return;
	}
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	iVar2 = _0xf103823ffe72bb49(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	_0x931b241409216c1f(iVar1, uParam0->f_18, 0);
}

void func_58(var uParam0)
{
	if (!func_6(uParam0, 5) || !func_6(uParam0, 7))
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	if (!func_6(uParam0, 28))
	{
		if (func_130(0))
		{
			if (vdist(func_131(player_id()), get_entity_coords(uParam0->f_18, true, false)) > 2.7f)
			{
				func_132(512);
				func_7(uParam0, 28);
			}
		}
	}
	else if (!func_130(0))
	{
		if (vdist(func_131(player_id()), get_entity_coords(uParam0->f_18, true, false)) <= 2.7f)
		{
			func_42(uParam0, 28);
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (does_entity_exist(uParam0->f_18))
			{
				iVar0 = get_attribute_rank(uParam0->f_18, 13);
				if (iVar0 < 10)
				{
					iVar1 = 0;
				}
				else if (iVar0 < 30)
				{
					iVar1 = 1;
				}
				else if (iVar0 < 70)
				{
					iVar1 = 2;
				}
				else if (iVar0 < 90)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 4;
				}
				if (iVar1 != uParam0->f_34)
				{
					if (func_133(&(uParam1->f_7), uParam0->f_4, iVar1, 0))
					{
						uParam0->f_34 = iVar1;
					}
				}
			}
			break;
	}
}

void func_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!is_mp_gamer_tag_active(uParam0->f_5))
	{
		return;
	}
	iVar0 = func_134(&(uParam0->f_5), iParam1);
	iVar0 = iVar0;
	bVar1 = func_135(iParam2);
	bVar2 = func_135(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (_0x159ef5b6edce00e8(player_ped_id(), iParam1))
	{
		iVar3 = 0;
	}
	else if (bVar1 || bVar2)
	{
		bVar4 = func_136(uParam0);
		if (bVar4)
		{
			iVar3 = func_137(iParam1, 0, &(uParam0->f_14), -1, -1, 1277358601, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_33;
		}
	}
	uParam0->f_33 = iVar3;
	if (uParam0->f_6 != iVar3)
	{
		_set_mp_gamer_tag_visibility(uParam0->f_5, iVar3);
		uParam0->f_6 = iVar3;
	}
}

void func_61(var uParam0, var uParam1)
{
	bVar0 = (((is_player_dead(uParam0->f_20) || !does_entity_exist(uParam0->f_19)) || is_entity_dead(uParam0->f_19)) || func_6(uParam0, 29));
	bVar1 = func_138(network_get_player_from_gamer_handle(uParam1), 1, 0);
	if (bVar1 || bVar0)
	{
		if (bVar0)
		{
			if (func_6(uParam0, 29))
			{
				func_42(uParam0, 29);
			}
			if (func_6(uParam0, 2))
			{
				if (func_139(uParam0->f_20, 1, 0))
				{
					func_22(0, 1);
				}
				if (func_27(&(Global_1291734->f_11.f_556)))
				{
					func_28(&(Global_1291734->f_11.f_556));
				}
			}
		}
		else
		{
			if (func_6(uParam0, 2))
			{
				if (!func_27(&(Global_1291734->f_11.f_556)))
				{
					func_79(&(Global_1291734->f_11.f_556));
				}
			}
			if (!func_139(uParam0->f_20, 1, 0))
			{
				if (func_140(uParam0))
				{
					if (func_6(uParam0, 2))
					{
						func_22(1, 1);
					}
				}
			}
			else
			{
				func_140(uParam0);
			}
		}
	}
	else
	{
		if (func_6(uParam0, 2))
		{
			if (func_27(&(Global_1291734->f_11.f_556)))
			{
				func_28(&(Global_1291734->f_11.f_556));
			}
			if (!func_138(player_id(), 1, 0))
			{
				func_22(0, 1);
			}
		}
		if (network_has_control_of_entity(uParam0->f_18))
		{
			if (_0x808077647856de62(uParam0->f_18, 34))
			{
				_0x18ff3110cf47115d(uParam0->f_18, 34, 0);
			}
		}
		if (func_6(uParam0, 30))
		{
			func_141(uParam0);
			func_42(uParam0, 30);
		}
	}
}

void func_62(var uParam0, var uParam1)
{
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	iVar0 = uParam0->f_20;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_18))
	{
		return;
	}
	if (func_91((*Global_1291106)[iVar0]->f_4, 4))
	{
		if (!func_6(uParam0, 31))
		{
			_0xf74e134f40192884(uParam0->f_18, 1);
			func_7(uParam0, 31);
		}
	}
	else if (func_6(uParam0, 31))
	{
		_0xf74e134f40192884(uParam0->f_18, 0);
		func_42(uParam0, 31);
	}
}

void func_63(var uParam0)
{
	iVar4 = _0xad03b03737ce6810(uParam0->f_18);
	if (!_network_is_player_index_valid(iVar4))
	{
		iVar4 = uParam0->f_20;
	}
	iVar5 = network_player_id_to_int();
	iVar6 = iVar4;
	if (!_network_is_player_index_valid(iVar4))
	{
	}
	else if (is_entity_dead(uParam0->f_18))
	{
		if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar5]->f_14), iVar6))
		{
			_0xd426e2e3288469d6(&((*Global_1291106)[iVar5]->f_14), iVar6);
		}
	}
	else
	{
		iVar7 = _0x4642182a298187d0(player_ped_id(), 5, &uVar0, 4, 2);
		if (iVar7 == 0)
		{
			iVar7 = _0x4642182a298187d0(player_ped_id(), 7, &uVar0, 4, 2);
		}
		if (iVar7 != 0)
		{
			if (func_142(uParam0, &uVar0))
			{
				if (!_0x72b2e00c9bac6789(&((*Global_1291106)[iVar5]->f_14), iVar6))
				{
					_0x31010318ba9897ac(&((*Global_1291106)[iVar5]->f_14), iVar6);
				}
			}
			else if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar5]->f_14), iVar6))
			{
				_0xd426e2e3288469d6(&((*Global_1291106)[iVar5]->f_14), iVar6);
			}
		}
		else if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar5]->f_14), iVar6))
		{
			_0xd426e2e3288469d6(&((*Global_1291106)[iVar5]->f_14), iVar6);
		}
	}
	if (func_6(uParam0, 2))
	{
		bVar9 = false;
		iVar8 = 0;
		while (iVar8 < 32)
		{
			if (!bVar9)
			{
				if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar8]->f_14), iVar5))
				{
					bVar9 = true;
				}
			}
			if (_0x72b2e00c9bac6789(&((*Global_1291106)[iVar5]->f_14), iVar8))
			{
				if (!network_is_player_connected(int_to_playerindex(iVar8)))
				{
					_0xd426e2e3288469d6(&((*Global_1291106)[iVar5]->f_14), iVar6);
				}
			}
			iVar8++;
		}
		if (bVar9)
		{
			if (!func_91((*Global_1291106)[iVar5]->f_1, 65536))
			{
				func_92(&((*Global_1291106)[iVar5]->f_1), 65536);
			}
			_0x0751d461f06e41ce(player_id(), 33, 2, 1);
		}
		else
		{
			if (func_91((*Global_1291106)[iVar5]->f_1, 65536))
			{
				func_93(&((*Global_1291106)[iVar5]->f_1), 65536);
			}
			_0x0751d461f06e41ce(player_id(), 33, 2, 0);
		}
	}
}

void func_64(var uParam0)
{
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	if (func_143(uParam0))
	{
		if (!network_has_control_of_entity(uParam0->f_18))
		{
			return;
		}
		_0x11e6b9629c46d6ec(uParam0->f_18, true);
	}
	else
	{
		if (!network_has_control_of_entity(uParam0->f_18))
		{
			return;
		}
		_0x11e6b9629c46d6ec(uParam0->f_18, false);
	}
}

void func_65(var uParam0)
{
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	iVar0 = player_ped_id();
	iVar1 = get_ped_relationship_group_hash(iVar0);
	iVar2 = get_ped_relationship_group_hash(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	set_ped_relationship_group_hash(uParam0->f_18, iVar1);
}

void func_66(var uParam0)
{
	if (_0x083d497d57b7400f(uParam0->f_3) || !func_6(uParam0, 4))
	{
		if (does_blip_exist(uParam0->f_16))
		{
			remove_blip(&(uParam0->f_16));
		}
		return;
	}
	if (is_entity_dead(uParam0->f_3))
	{
		if (does_blip_exist(uParam0->f_16))
		{
			remove_blip(&(uParam0->f_16));
		}
		return;
	}
	iVar0 = _0xffec4b0a1a3ed515(uParam0->f_3, -1);
	if (does_entity_exist(iVar0))
	{
		if (iVar0 == player_ped_id())
		{
			if (does_blip_exist(uParam0->f_16))
			{
				remove_blip(&(uParam0->f_16));
			}
			return;
		}
	}
	if (does_blip_exist(uParam0->f_16))
	{
		if (is_control_pressed(0, 613911080))
		{
			uParam0->f_13 = Global_1296859->f_21 + 15;
			_set_blip_flash_style(uParam0->f_16, -272772079);
			_blip_set_modifier(uParam0->f_16, -272772079);
		}
		if (Global_1296859->f_21 > uParam0->f_13)
		{
			_set_blip_flash_style(uParam0->f_16, -272772079);
		}
		else
		{
			_blip_set_modifier(uParam0->f_16, -272772079);
		}
		bVar1 = is_ped_in_writhe(uParam0->f_18);
		bVar2 = _0xb655db7582aec805(uParam0->f_18);
		if (bVar1 || bVar2)
		{
			_blip_set_modifier(uParam0->f_16, 430539302);
		}
		else
		{
			_set_blip_flash_style(uParam0->f_16, 430539302);
		}
		if (!does_entity_exist(iVar0))
		{
			_set_blip_flash_style(uParam0->f_16, 453356795);
			return;
		}
		if (!is_ped_a_player(iVar0))
		{
			_set_blip_flash_style(uParam0->f_16, 453356795);
			return;
		}
		iVar3 = network_get_player_index_from_ped(iVar0);
		if (!_network_is_player_index_valid(iVar3))
		{
			_set_blip_flash_style(uParam0->f_16, 453356795);
			return;
		}
		if (func_144(iVar3, 0))
		{
			_blip_set_modifier(uParam0->f_16, 453356795);
		}
		else
		{
			_set_blip_flash_style(uParam0->f_16, 453356795);
		}
		return;
	}
	if (_0x9fa00e2fc134a9d0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_16 = _blip_add_for_entity(uParam0->f_17, uParam0->f_3);
	if (!is_string_null_or_empty(&(Global_1291734->f_11.f_515)))
	{
		_set_blip_name_from_player_string(uParam0->f_16, &(Global_1291734->f_11.f_515));
	}
	else
	{
		set_blip_name_from_text_file(uParam0->f_16, func_145(uParam0->f_4));
	}
	_blip_set_modifier(uParam0->f_16, 580546400);
}

void func_67(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return;
	}
	if (!is_entity_a_ped(uParam0->f_3))
	{
		return;
	}
	if (is_ped_dead_or_dying(uParam0->f_18, true))
	{
		return;
	}
	bVar0 = !func_55(8192, iParam1);
	if (bVar0)
	{
		set_ped_reset_flag(uParam0->f_18, 197, bVar0);
	}
	if (func_55(2048, iParam1))
	{
		set_ped_reset_flag(uParam0->f_18, 306, true);
	}
	if (func_55(512, iParam1))
	{
		set_ped_reset_flag(uParam0->f_18, 360, true);
	}
}

void func_68(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		func_42(uParam0, 26);
		return;
	}
	if (!is_entity_a_ped(uParam0->f_3))
	{
		return;
	}
	if (is_ped_dead_or_dying(uParam0->f_18, true))
	{
		return;
	}
	if (func_146(255) == 1)
	{
		bVar0 = _0x75df9e73f2f005fd(uParam0->f_18);
		bVar1 = func_6(uParam0, 15);
		if (func_55(8, iParam1))
		{
			if (!bVar1 || bVar0)
			{
				set_entity_invincible(uParam0->f_18, true);
				set_entity_can_be_damaged(uParam0->f_18, false);
				func_7(uParam0, 15);
			}
		}
		else if (bVar1 || !bVar0)
		{
			set_entity_invincible(uParam0->f_18, false);
			set_entity_can_be_damaged(uParam0->f_18, true);
			func_42(uParam0, 15);
		}
	}
	else
	{
		func_42(uParam0, 15);
	}
	if (func_146(255) == 1)
	{
		if (func_55(16384, iParam1))
		{
			if (!func_6(uParam0, 16))
			{
				_0xe1bc73d6815ba361(_0xf260af6f43953316(uParam0->f_3), 1, 256);
				func_7(uParam0, 16);
			}
			_0x7182edda1ee7db5a(_0xf260af6f43953316(uParam0->f_3));
		}
		else if (func_6(uParam0, 16))
		{
			_0xe1bc73d6815ba361(_0xf260af6f43953316(uParam0->f_3), 0, 256);
			func_42(uParam0, 16);
		}
	}
	else
	{
		func_42(uParam0, 16);
	}
	if (func_55(16, iParam1))
	{
		if (!func_6(uParam0, 17))
		{
			func_7(uParam0, 17);
		}
	}
	else if (func_6(uParam0, 17))
	{
		func_42(uParam0, 17);
	}
	bVar2 = func_55(262144, iParam1);
	if (!func_6(uParam0, 26) || func_6(uParam0, 27) != bVar2)
	{
		iVar3 = ped_to_net(uParam0->f_18);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (iVar5 == uParam0->f_20)
			{
			}
			else if (!network_is_player_active(iVar5))
			{
			}
			else
			{
				_set_network_id_sync_to_player(iVar3, iVar5, bVar2);
			}
			iVar4++;
		}
		func_7(uParam0, 26);
		if (bVar2)
		{
			func_7(uParam0, 27);
		}
		else
		{
			func_42(uParam0, 27);
		}
	}
	bVar6 = func_55(64, iParam1);
	if (get_ped_config_flag(uParam0->f_18, 388, true) != bVar6)
	{
		set_ped_config_flag(uParam0->f_18, 388, bVar6);
	}
	bVar7 = !func_55(32, iParam1);
	if (get_ped_config_flag(uParam0->f_18, 319, true) != bVar7)
	{
		set_ped_config_flag(uParam0->f_18, 319, bVar7);
	}
	bVar8 = func_55(256, iParam1);
	if (get_ped_config_flag(uParam0->f_18, 312, true) != bVar8)
	{
		set_ped_config_flag(uParam0->f_18, 312, bVar8);
	}
	bVar9 = !func_55(128, iParam1);
	if (get_ped_config_flag(uParam0->f_18, 211, true) != bVar9)
	{
		set_ped_config_flag(uParam0->f_18, 211, bVar9);
	}
	bVar10 = func_55(1024, iParam1);
	if (get_ped_config_flag(uParam0->f_18, 412, true) != bVar10)
	{
		set_ped_config_flag(uParam0->f_18, 412, bVar10);
	}
}

void func_69(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return;
	}
	if (!is_entity_a_ped(uParam0->f_3))
	{
		return;
	}
	if (is_ped_dead_or_dying(uParam0->f_18, true))
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (func_23(65))
	{
		if (!_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 33, 1))
		{
			_0xa3db37edf9a74635(iVar0, uParam0->f_18, 33, 1, 1);
			set_ped_config_flag(uParam0->f_18, 26, true);
		}
	}
	else if (_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 33, 1))
	{
		_0xa3db37edf9a74635(iVar0, uParam0->f_18, 33, 1, 0);
		set_ped_config_flag(uParam0->f_18, 26, false);
	}
	if (func_23(62))
	{
		if (!_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 45, 1))
		{
			_0xa3db37edf9a74635(iVar0, uParam0->f_18, 45, 1, 1);
		}
	}
	else if (_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 45, 1))
	{
		_0xa3db37edf9a74635(iVar0, uParam0->f_18, 45, 1, 0);
	}
	if (func_23(63))
	{
		if (!_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 46, 1))
		{
			_0xa3db37edf9a74635(iVar0, uParam0->f_18, 46, 1, 1);
		}
	}
	else if (_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 46, 1))
	{
		_0xa3db37edf9a74635(iVar0, uParam0->f_18, 46, 1, 0);
	}
	if (func_23(64))
	{
		if (!_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 28, 1))
		{
			_0xa3db37edf9a74635(iVar0, uParam0->f_18, 28, 1, 1);
		}
	}
	else if (_0xea8f168a76a0b9bc(iVar0, uParam0->f_18, 28, 1))
	{
		_0xa3db37edf9a74635(iVar0, uParam0->f_18, 28, 1, 0);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(uParam0->f_3))
	{
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_3))
	{
		return;
	}
	bVar0 = is_entity_a_ped(uParam0->f_3);
	if (bVar0)
	{
		if (is_ped_dead_or_dying(uParam0->f_18, true))
		{
			return;
		}
	}
	else if (!is_vehicle_driveable(uParam0->f_21, false, false))
	{
		return;
	}
	iVar1 = network_get_player_from_gamer_handle(uParam1);
	iVar2 = 0;
	if (func_147(iVar1))
	{
		iVar2 = 1;
	}
	_0xba8818212633500a(uParam0->f_3, 0, iVar2);
	iVar4 = 0;
	_0xe195c5a82156321d(uParam0->f_3, &uVar3);
	if (Global_1291106[iParam2] & 1 != 0)
	{
		if (!func_148(uVar3, 1))
		{
			iVar4 = 1;
		}
		if (Global_1291106[iParam2] & 32 != 0)
		{
			if (!func_148(uVar3, 32))
			{
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1291106[iParam2] & 2 != 0)
		{
			if (!func_148(uVar3, 2))
			{
				iVar4 |= 2;
			}
		}
		if (Global_1291106[iParam2] & 4 != 0)
		{
			if (!func_148(uVar3, 4))
			{
				iVar4 |= 4;
			}
		}
		if (Global_1291106[iParam2] & 8 != 0)
		{
			if (!func_148(uVar3, 8))
			{
				iVar4 |= 8;
			}
		}
		if (Global_1291106[iParam2] & 64 != 0)
		{
			if (!func_148(uVar3, 64))
			{
				iVar4 |= 64;
			}
		}
		if (Global_1291106[iParam2] & 128 != 0)
		{
			if (!func_148(uVar3, 128))
			{
				iVar4 |= 128;
			}
		}
		if (Global_1291106[iParam2] & 256 != 0)
		{
			if (!func_148(uVar3, 256))
			{
				iVar4 |= 256;
			}
		}
		if (Global_1291106[iParam2] & 16 != 0)
		{
			if (!func_148(uVar3, 16))
			{
				iVar4 = 16;
			}
		}
		if (Global_1291106[iParam2] & 512 != 0)
		{
			if (!func_148(uVar3, 512))
			{
				iVar4 |= 512;
			}
		}
		if (func_148(uVar3, 1024))
		{
			if (!func_148(uVar3, 1024))
			{
				iVar4 |= 1024;
			}
		}
	}
	if (iVar4 != 0)
	{
		_0xe2487779957fe897(uParam0->f_3, iVar4);
	}
}

void func_71(var uParam0, var uParam1, int iParam2)
{
	if (!func_149(uParam0, uParam1, iParam2))
	{
		return;
	}
	if (is_entity_a_vehicle(uParam0->f_3))
	{
		if (_0xffec4b0a1a3ed515(uParam0->f_18, -1) == player_ped_id())
		{
			func_150(uParam0->f_18);
		}
		return;
	}
	if (is_entity_a_ped(uParam0->f_3))
	{
		if (uParam0->f_15 >= Global_1296859->f_21)
		{
			return;
		}
		if (!does_entity_exist(uParam0->f_18))
		{
			return;
		}
		iVar0 = _get_rider_of_mount(uParam0->f_18, false);
		if (!does_entity_exist(iVar0))
		{
			return;
		}
		iVar1 = network_get_player_index_from_ped(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
			return;
		}
		if (iVar1 != player_id())
		{
			return;
		}
		iVar2 = network_get_player_from_gamer_handle(uParam1);
		if (func_147(iVar2))
		{
			func_89(15, 1);
		}
		else if (Global_1291106[iParam2] & 16 != 0 || Global_1291105 & 32 != 0)
		{
			func_89(16, 1);
		}
		else
		{
			func_89(14, 1);
		}
		task_horse_action(uParam0->f_18, 10, 0, 0);
		uParam0->f_15 = Global_1296859->f_21 + 3;
	}
}

void func_72(var uParam0)
{
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	if (is_ped_dead_or_dying(uParam0->f_18, true))
	{
		return;
	}
	if (!network_is_player_active(uParam0->f_20))
	{
		return;
	}
	iVar0 = uParam0->f_20;
	bVar1 = func_6(uParam0, 2);
	if (bVar1)
	{
		if (!Global_1904087->f_111)
		{
			return;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar3 = _0x0ceeb6f4780b1f2f(uParam0->f_18, iVar2);
			if (iVar3 != &(*Global_1291106)[iVar0]->f_15[iVar2])
			{
				(*Global_1291106)[iVar0]->f_15[iVar2] = iVar3;
			}
			iVar2++;
		}
	}
	if (!network_has_control_of_entity(uParam0->f_18))
	{
		return;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar4 = _0x0ceeb6f4780b1f2f(uParam0->f_18, iVar2);
		if (iVar4 == &(*Global_1291106)[iVar0]->f_15[iVar2])
		{
		}
		else if (&(*Global_1291106)[iVar0]->f_15[iVar2] == 0)
		{
			_0x627f7f3a0c4c51ff(uParam0->f_18, iVar4);
		}
		else if (iVar4 == 0)
		{
			_0xa73f50e8796150d5(uParam0->f_18, &((*Global_1291106)[iVar0]->f_15[iVar2]));
		}
		else
		{
			_0xa73f50e8796150d5(uParam0->f_18, &((*Global_1291106)[iVar0]->f_15[iVar2]));
		}
		iVar2++;
	}
}

void func_73(var uParam0)
{
	if (func_6(uParam0, 11))
	{
		Global_1904087->f_111 = 0;
		Global_1904087->f_112 = 0;
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 0))
	{
		return;
	}
	switch (func_78(uParam0, 0))
	{
		case 1:
			return;
		case 2:
			func_49(uParam0);
			return;
	}
	if (is_entity_dead(uParam0->f_18))
	{
		if (!func_27(&(uParam0->f_7)))
		{
			func_79(&(uParam0->f_7));
		}
		fVar0 = func_80(&(uParam0->f_7));
		if (fVar0 > 4f)
		{
			func_28(&(uParam0->f_7));
			func_7(uParam0, 12);
		}
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	else if (func_6(uParam0, 7))
	{
		if (network_is_player_active(player_id()))
		{
			iVar1 = network_player_id_to_int();
			if (iVar1 > -1 && iVar1 < 32)
			{
				if (func_55(4, iVar1))
				{
					func_7(uParam0, 8);
					return;
				}
			}
		}
	}
	if (func_6(uParam0, 7))
	{
		if (func_151())
		{
		}
		else
		{
			if (func_23(46))
			{
				return;
			}
			if (vdist(get_entity_coords(player_ped_id(), true, false), get_entity_coords(uParam0->f_18, true, false)) < 250f)
			{
				return;
			}
		}
	}
	func_152(uParam0);
}

bool func_74(int iParam0, int iParam1)
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

void func_75(var uParam0)
{
	if (!func_6(uParam0, 19))
	{
		return;
	}
	iVar0 = _0x7c803bdc8343228d(uParam0->f_21);
	if (!_network_is_player_index_valid(iVar0))
	{
		func_42(uParam0, 19);
		return;
	}
	iVar1 = get_player_ped(iVar0);
	if (is_ped_on_vehicle(iVar1, false))
	{
		if (get_vehicle_ped_is_in(iVar1, true) == uParam0->f_21)
		{
			func_42(uParam0, 19);
			return;
		}
	}
	get_closest_vehicle_node_with_heading(func_131(iVar0), &vVar2, &uVar5, 1, 3f, 0);
	bVar6 = network_has_control_of_entity(uParam0->f_3);
	bVar7 = is_entity_dead(uParam0->f_21);
	if (func_153(iVar1, uParam0->f_21, 1, 1) < 12f)
	{
		func_42(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (_0x583ae9af9cee0958(uParam0->f_21, vVar2))
	{
		return;
	}
	if (!func_6(uParam0, 19))
	{
		_0x141bc64c8d7c5529(uParam0->f_21);
		return;
	}
	_task_vehicle_drive_to_destination_2(uParam0->f_21, vVar2, 6f, 1078722947, 2, 8f, 3f);
}

void func_76(var uParam0)
{
	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_23(94))
	{
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (is_screen_faded_out())
	{
		return;
	}
	if (_0x083d497d57b7400f(uParam0->f_21))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_23(92))
		{
			return;
		}
		vVar2 = { get_entity_coords(uParam0->f_21, true, false) };
		if (vdist(vVar2, get_entity_coords(player_ped_id(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_154(iVar0);
			if (!_network_is_player_index_valid(iVar1))
			{
			}
			else if (!network_is_player_active(iVar1))
			{
			}
			else if (vdist(vVar2, get_entity_coords(get_player_ped(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

void func_77(var uParam0)
{
	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (is_screen_faded_out())
	{
		return;
	}
	if (_0x083d497d57b7400f(uParam0->f_21))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_23(92))
		{
			return;
		}
		vVar2 = { get_entity_coords(uParam0->f_21, true, false) };
		if (vdist(vVar2, get_entity_coords(player_ped_id(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_154(iVar0);
			if (!_network_is_player_index_valid(iVar1))
			{
			}
			else if (!network_is_player_active(iVar1))
			{
			}
			else if (vdist(vVar2, get_entity_coords(get_player_ped(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

int func_78(var uParam0, int iParam1)
{
	if (!func_6(uParam0, 10))
	{
		return 0;
	}
	if (!does_entity_exist(uParam0->f_18))
	{
		return 2;
	}
	iVar0 = _0xad03b03737ce6810(uParam0->f_18);
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return 2;
	}
	iVar1 = get_player_ped(uParam0->f_20);
	if (!does_entity_exist(iVar1))
	{
		iVar1 = player_ped_id();
	}
	func_155(uParam0->f_18);
	func_156(uParam0, iVar1);
	return 2;
}

void func_79(var uParam0)
{
	func_157(uParam0, 0f);
}

float func_80(var uParam0)
{
	if (!func_27(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_158(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_159() - uParam0->f_1);
}

void func_81(var uParam0, var uParam1, int iParam2)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	if (!get_event_data(1, iParam2, &Var0, 6))
	{
		return;
	}
	if (Var0 != 47)
	{
		return;
	}
	if (!func_160(uParam0, uParam1, Var0.f_4, Var0.f_5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 3:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_7(uParam0, 10);
			break;
		case 0:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_7(uParam0, 10);
			break;
		case 2:
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_42(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 1:
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_42(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 4:
			func_7(uParam0, 8);
			break;
		case 5:
			func_42(uParam0, 8);
			break;
		case 6:
			func_7(uParam0, 19);
			break;
		case 9:
			func_162(uParam0, &Var0, 0);
			break;
		case 10:
			func_162(uParam0, &Var0, 1);
			break;
		case 11:
			func_163(uParam0, &Var0);
			break;
		case 7:
			func_164(uParam0, &Var0);
			break;
		case 8:
			func_165(uParam0, &Var0);
			break;
	}
}

struct<2> func_82()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_83(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_166(*Global_1051213) && !func_167(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_168(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_169(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_170())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_166(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

bool func_84(int iParam0)
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

void func_85(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

int func_86(var uParam0, int iParam1, bool bParam2)
{
	func_171(uParam0, 2, bParam2);
	if (!func_172(uParam0))
	{
		return 0;
	}
	func_173(uParam0, iParam1, bParam2);
	return 1;
}

void func_87()
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1291734->f_11.f_162[iVar0]->f_6 == 2)
		{
			*Global_1291734->f_11.f_162[iVar0] = { func_103() };
			Global_1291734->f_11.f_162[iVar0]->f_5 = 0;
			Global_1291734->f_11.f_162[iVar0]->f_6 = -1;
		}
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_174(bParam2), uParam0, iParam1);
}

void func_89(int iParam0, bool bParam1)
{
	func_175(iParam0, bParam1);
}

int func_90(struct<4> Param0, int iParam4, int iParam5)
{
	if (func_176(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { func_103() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar4], &Param0) && !_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar4], &Var0))
		{
		}
		else
		{
			Global_1291734->f_11.f_162[iVar4]->f_5 = Global_1296859->f_21 + 120;
			*Global_1291734->f_11.f_162[iVar4] = { Param0 };
			Global_1291734->f_11.f_162[iVar4]->f_6 = iParam5;
			Global_1291734->f_11.f_162[iVar4]->f_4 = iParam4;
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_94(int iParam0)
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

bool func_95(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (_0x61914209c36efddb(iParam0) != 7)
		{
			return true;
		}
		iVar0 = _0x9a87ff82fd35822f(iParam0);
		if (does_entity_exist(iVar0))
		{
			if (_0x37056ba2a3fefb31(iVar0, iParam0))
			{
				return true;
			}
			if (_0xb36b0c7152b15278(iVar0, &iVar1))
			{
				if (iParam1 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_96(int iParam0)
{
	Var0.f_10 = 10;
	_copy_memory(Global_1904087->f_113[iParam0], &Var0, 96);
	_copy_memory(Global_1291734->f_938.f_245[iParam0], &uVar96, 4);
}

void func_97(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (does_entity_exist(iVar1))
		{
			if (_0x8d9bfce3352de47f(iVar1))
			{
				return;
			}
			if (is_ped_a_player(iVar1) || is_ped_human(iVar1))
			{
				bVar0 = true;
			}
		}
	}
	if (is_entity_a_mission_entity(iParam0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		_0x18ff3110cf47115d(iParam0, 2, 0);
		_0x18ff3110cf47115d(iParam0, 27, 1);
	}
	if (!network_has_control_of_entity(iParam0))
	{
	}
	else if (bVar0)
	{
		_0xed00d72f81cf7278(iParam0, 0, 0);
	}
	else if (bParam2)
	{
		_0x0d0db2b6af19a987(&iParam0);
	}
}

bool func_98(int iParam0)
{
	if (does_entity_exist(Global_1291734->f_938.f_245[iParam0]->f_3))
	{
		return true;
	}
	if (func_113(Global_1904087->f_113[iParam0]->f_1, 0))
	{
		return true;
	}
	return false;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_101()
{
	Global_1904087->f_106 = Global_1071686->f_28448[49]->f_3;
	Global_1904087->f_106.f_1 = 0;
	Global_1904087->f_106.f_2 = 0;
	Global_1904087->f_106.f_3 = 0;
	Global_1904087->f_106.f_4 = 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

struct<4> func_103()
{
	return Var0;
}

void func_104(var uParam0)
{
	*uParam0 = { func_103() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0] = 100;
		uParam0->f_29[iVar0]->f_1 = 0f;
		uParam0->f_29[iVar0]->f_2 = 0f;
		uParam0->f_29[iVar0]->f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0] = 50;
				break;
		}
		uParam0->f_38[iVar0]->f_1 = 0f;
		uParam0->f_38[iVar0]->f_2 = 0f;
		uParam0->f_38[iVar0]->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_105(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_177(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_106()
{
	Global_1952637->f_1057 = 0;
}

void func_107(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_108(var uParam0)
{
	func_178(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_103() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_109(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_179(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_180(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_110(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_181(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_182(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_111(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], uParam0))
		{
		}
		else
		{
			if (Global_1291734->f_938[iVar0]->f_23 < Global_1296859->f_21)
			{
				*uParam1 = { Global_1291734->f_938[iVar0]->f_7 };
				return true;
			}
			*uParam1 = { Global_1291734->f_938[iVar0]->f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_112(int iParam0)
{
	StringCopy(&cVar0, func_183(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_184(&cVar0);
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_114(var uParam0)
{
	if (!_item_database_fillout_item_info(uParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_115(int iParam0)
{
	if (!func_113(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

struct<8> func_116(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_117(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

bool func_118(var uParam0, int iParam1)
{
	return func_186(&(uParam0->f_20), iParam1);
}

void func_119()
{
	if (func_55(2, 255))
	{
		return;
	}
	func_187(2);
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	Global_1291734->f_938.f_241[iParam2] = 0;
	if (!is_model_valid(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar0 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar0 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar0 = { 1f, 0f, 0f };
			break;
	}
	vVar3 = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
	if (_0x274ee1b90cfa669e(*uParam1))
	{
		iVar6 = create_object(*uParam1, vVar3, true, false, false, false, true);
		set_model_as_no_longer_needed(*uParam1);
		if (!does_entity_exist(iVar6))
		{
			return;
		}
		iVar7 = func_188(iParam2);
		task_carriable(iVar6, uParam1->f_3, iParam0, iVar7, 256);
		_0x399657ed871b3a6c(iVar6, uParam1->f_1);
		_0xef259aa1e097e0ad(iVar6, uParam1->f_93);
		iVar8 = func_189(iParam0, iVar6);
	}
	else if (is_model_a_ped(*uParam1))
	{
		iVar9 = func_190(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		set_model_as_no_longer_needed(*uParam1);
		if (!does_entity_exist(iVar9))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			_set_ped_body_component(iVar9, uParam1->f_8);
			if (uParam1->f_92)
			{
				iVar10 = 787732969;
				if (_0x4ff3c2b4e6a196c1(uParam1->f_8, iVar10, *uParam1))
				{
					_0x66ff395445a88a6e(iVar9, iVar10, 0);
				}
			}
		}
		iVar19 = 0;
		while (iVar19 < uParam1->f_9)
		{
			uVar11 = &uParam1->f_10[iVar19];
			uVar12 = uParam1->f_10[iVar19]->f_1;
			uVar13 = uParam1->f_10[iVar19]->f_2;
			uVar14 = uParam1->f_10[iVar19]->f_3;
			uVar15 = uParam1->f_10[iVar19]->f_4;
			uVar16 = uParam1->f_10[iVar19]->f_5;
			uVar17 = uParam1->f_10[iVar19]->f_6;
			uVar18 = uParam1->f_10[iVar19]->f_7;
			_0xbc6df00d7a4a6819(iVar9, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18);
			iVar19++;
		}
		_update_ped_variation(iVar9, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			_set_entity_health(iVar9, 0, 0);
			set_ped_config_flag(iVar9, 517, true);
			_0xf5622fa6acfca7db(iVar9, uParam1->f_91);
		}
		if (_0x9a100f1cf4546629(iVar9))
		{
			_set_ped_quality(iVar9, uParam1->f_4);
			_0x8b6f0f59b1b99801(iVar9, uParam1->f_5);
			_set_ped_damage(iVar9, uParam1->f_6);
			_set_ped_damaged(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92 || uParam1->f_95)
		{
			_0x6569f31a01b4c097(iVar9, 0, 0);
			_0x6bcf5f3d8ffe988d(iVar9, 1);
		}
		iVar20 = func_188(iParam2);
		task_carriable(iVar9, uParam1->f_3, iParam0, iVar20, 256);
		_0x399657ed871b3a6c(iVar9, uParam1->f_1);
		_0xef259aa1e097e0ad(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			set_entity_render_scorched(iVar9, true);
			start_entity_fire(iVar9, 0, -1, 8);
		}
		iVar21 = func_191(iVar9);
		iVar22 = func_192(iVar21);
		if (func_113(iVar22, 0))
		{
			if (iVar22 != uParam1->f_1)
			{
				uParam1->f_1 = iVar22;
			}
		}
		iVar23 = func_189(iParam0, iVar9);
	}
}

bool func_121(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_193(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_194(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_195(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_179(&Var45, &Var0, 0))
				{
					if (func_186(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_196(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_196(iVar43);
	}
	return false;
}

struct<4> func_122()
{
	return Global_1291734->f_11.f_310;
}

bool func_123()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_124(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_125(int iParam0)
{
	iVar0 = func_197(iParam0);
	bVar1 = func_83(func_82(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_126(int iParam0)
{
	return func_198(&(Global_3145858->f_6), iParam0);
}

int func_127(int iParam0, int iParam1)
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

bool func_128(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_193(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_194(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_195(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_179(&Var45, &Var0, 0))
				{
					if (func_186(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_196(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_196(iVar43);
	}
	return false;
}

struct<4> func_129(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_199("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_195(&Var2, iVar16, iVar0, iVar1))
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
	func_196(iVar0);
	return Var2;
}

bool func_130(bool bParam0)
{
	if (func_200() && (bParam0 || !func_201(0)))
	{
		if (func_202(-283002878))
		{
			if (func_203(-283002878))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_131(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_132(int iParam0)
{
	Global_1940311->f_10866 = (Global_1940311->f_10866 || iParam0);
}

bool func_133(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_40(uParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_204(Global_1904087))
	{
		return false;
	}
	func_205(Global_1904087, 536870912);
	func_205(Global_1904087, 268435456);
	func_205(Global_1904087, -2147483648);
	func_205(Global_1904087, 1073741824);
	func_205(Global_1904087, 134217728);
	switch (iParam2)
	{
		case 0:
			func_206(Global_1904087, 134217728);
			break;
		case 1:
			func_206(Global_1904087, 268435456);
			break;
		case 2:
			func_206(Global_1904087, 536870912);
			break;
		case 3:
			func_206(Global_1904087, 1073741824);
			break;
		case 4:
			func_206(Global_1904087, -2147483648);
			break;
	}
	if (!func_172(Global_1904087))
	{
		return false;
	}
	if (bParam3)
	{
		func_207();
	}
	return true;
}

int func_134(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!is_mp_gamer_tag_active(*uParam0))
	{
		return 0;
	}
	if (_is_mp_gamer_tag_active_on_entity(*uParam0, iParam1))
	{
		return 0;
	}
	*uParam0 = uVar0;
	return 1;
}

bool func_135(int iParam0)
{
	return (Global_17411.f_55.f_61.f_582 && iParam0) != 0;
}

int func_136(var uParam0)
{
	iVar0 = uParam0->f_20;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1291734->f_1429.f_1)
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	bVar0 = iParam4 != -1;
	if (_0x7ec0d68233e391ac(21) == 2)
	{
		func_208(uParam2);
		return 0;
	}
	if (func_209(&Global_1296859, 32768))
	{
		return 0;
	}
	fVar6 = vdist(Global_35, get_entity_coords(iParam0, false, false));
	if (!is_player_dead(Global_1296859->f_10) && is_entity_a_ped(iParam0))
	{
		if (Global_1071686->f_21952.f_580 <= 0f || fVar6 <= Global_1071686->f_21952.f_580)
		{
			get_player_target_entity(Global_1296859->f_10, &iVar8);
			iVar9 = get_ped_index_from_entity_index(iParam0);
			if (((iVar8 == iParam0 || _0x0c31c51168e80365(Global_1296859->f_8) == iVar9) || get_melee_target_for_ped(Global_1296859->f_8) == iVar9) || is_player_free_aiming_at_entity(Global_1296859->f_10, iVar9))
			{
				bVar3 = true;
			}
		}
	}
	if (bVar0)
	{
		iVar10 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_in_any_vehicle(iVar10, false) || is_ped_on_mount(iVar10))
		{
			bVar1 = true;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_258), iParam4) || _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_259), iParam4))
		{
			bVar2 = true;
		}
		if (_0x7ec0d68233e391ac(54) == 2)
		{
			func_208(uParam2);
			return 0;
		}
		if (!_network_is_player_equal_to_index(&(Global_1296859->f_154[&Global_1296859]), &(Global_1296859->f_154[iParam4])))
		{
			return 0;
		}
		if (func_210(iParam4))
		{
			return 0;
		}
		if (func_210(network_player_id_to_int()))
		{
			if (_0x72b2e00c9bac6789(&(Global_1957964->f_2), iParam4))
			{
				return 3;
			}
		}
		if (Global_1071686->f_21952[iParam4]->f_3 != 0)
		{
			func_208(uParam2);
			return Global_1071686->f_21952[iParam4]->f_3;
		}
		if (func_211(iParam4))
		{
			func_208(uParam2);
			return 0;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_21952.f_583), iParam4) && !bVar2)
		{
			if (!bVar3 || !func_209(&Global_1296859, 131072))
			{
				return 0;
			}
		}
		if (func_212(iParam4))
		{
			return 0;
		}
		if (iParam3 != 255 && iParam3 == iParam4)
		{
			return 3;
		}
		if (func_209(iParam4, 16384))
		{
			return 0;
		}
	}
	else if (bParam7)
	{
		if (_0x7ec0d68233e391ac(55) == 2)
		{
			func_208(uParam2);
			return 0;
		}
	}
	if (bParam6 || ((*Global_263042)[&Global_1296859]->f_1.f_21.f_2 == -504335712 && func_213(Global_524288->f_40400)))
	{
		bVar7 = true;
	}
	if (is_first_person_aim_cam_active())
	{
		fVar5 = Global_1901947->f_99.f_11;
	}
	else if (bVar7)
	{
		if (bVar1)
		{
			fVar5 = Global_1901947->f_99.f_10;
		}
		else
		{
			fVar5 = Global_1901947->f_99.f_9;
		}
	}
	else
	{
		if (Global_1071686->f_21952.f_578 > 0f)
		{
			fVar4 = Global_1071686->f_21952.f_578;
		}
		else
		{
			fVar4 = func_214(bParam1, Global_1901947->f_99.f_7, Global_1901947->f_99.f_6);
		}
		if (Global_1071686->f_21952.f_579 > 0f)
		{
			fVar5 = Global_1071686->f_21952.f_579;
		}
		else
		{
			fVar5 = func_214(bParam1, Global_1901947->f_99.f_8, Global_1901947->f_99.f_5);
		}
	}
	if (!func_215(iParam4, iParam0, fVar6, fVar5, bVar0))
	{
		func_208(uParam2);
		return 0;
	}
	bVar11 = _0x7ec0d68233e391ac(21) == true;
	if (bVar7)
	{
		if (bVar3)
		{
			if (bVar0)
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
		else if (fVar6 <= fVar5)
		{
			if (bVar11)
			{
				if (bVar0)
				{
					return 3;
				}
				else
				{
					return 2;
				}
			}
			else if (func_209(&Global_1296859, 65536))
			{
				if (bVar0 && _0xef6f2a35faaf2ed7(int_to_playerindex(iParam4)))
				{
					return 2;
				}
			}
			else if (((func_216(uParam2) || func_217(iParam5)) || (bVar0 && _0xef6f2a35faaf2ed7(int_to_playerindex(iParam4)))) || bVar2)
			{
				return 2;
			}
		}
		else
		{
			func_208(uParam2);
			return 0;
		}
	}
	else if (bVar3)
	{
		if (bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar4)
	{
		if (bVar11 && bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_138(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return iParam2;
		}
		if (!network_is_player_active(iParam0))
		{
			return iParam2;
		}
	}
	if (!does_entity_exist(_0xf49f14462f0ae27c(iParam0)))
	{
		return iParam2;
	}
	return func_91((*Global_1291106)[iParam0]->f_4, 1);
}

bool func_139(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return iParam2;
		}
		if (!network_is_player_active(iParam0))
		{
			return iParam2;
		}
	}
	if (!does_entity_exist(_0xf49f14462f0ae27c(iParam0)))
	{
		return iParam2;
	}
	return func_91((*Global_1291106)[iParam0]->f_4, 2);
}

bool func_140(var uParam0)
{
	bVar6 = false;
	bVar7 = true;
	if (func_6(uParam0, 2))
	{
		bVar6 = true;
	}
	iVar8 = uParam0->f_19;
	if (!does_entity_exist(iVar8))
	{
		return false;
	}
	func_7(uParam0, 30);
	if (network_has_control_of_entity(uParam0->f_18))
	{
		if (!_0x808077647856de62(uParam0->f_18, 34))
		{
			_0x18ff3110cf47115d(uParam0->f_18, 34, 1);
		}
	}
	else if (bVar6)
	{
		network_request_control_of_entity(uParam0->f_18);
	}
	if (!_0x188736456d1dede6(uParam0->f_18, iVar8))
	{
		bVar7 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_94(iVar0);
		if (_0x608bc6a6aacd5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (!network_has_control_of_entity(Var2.f_3))
			{
				if (bVar6)
				{
					network_request_control_of_entity(Var2.f_3);
				}
			}
			if (!_0x188736456d1dede6(Var2.f_3, iVar8))
			{
				bVar7 = false;
			}
		}
		iVar0++;
	}
	if (func_218())
	{
		bVar7 = false;
	}
	if (!bVar7)
	{
		if (func_219(&(Global_1291734->f_11.f_556), 5f))
		{
			return true;
		}
	}
	return bVar7;
}

void func_141(var uParam0)
{
	iVar6 = uParam0->f_19;
	if (!does_entity_exist(iVar6))
	{
		return;
	}
	if (network_has_control_of_entity(uParam0->f_18))
	{
		if (_0x808077647856de62(uParam0->f_18, 34))
		{
			_0x18ff3110cf47115d(uParam0->f_18, 34, 0);
		}
	}
	_0xc6a1a3d63f122de7(uParam0->f_18, iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_94(iVar0);
		if (_0x608bc6a6aacd5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			_0xc6a1a3d63f122de7(Var2.f_3, iVar6);
		}
		iVar0++;
	}
}

bool func_142(var uParam0, var uParam1)
{
	if (does_entity_exist(uParam1->f_1) && is_entity_a_ped(uParam1->f_1))
	{
		if (uParam0->f_18 == get_ped_index_from_entity_index(uParam1->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_143(var uParam0)
{
	if (!network_is_player_active(uParam0->f_20))
	{
		return false;
	}
	if (!does_entity_exist(get_player_ped(uParam0->f_20)))
	{
		return false;
	}
	fVar0 = vdist(get_entity_coords(get_player_ped(uParam0->f_20), true, false), get_entity_coords(uParam0->f_18, true, false));
	if (fVar0 < 248f)
	{
		return false;
	}
	return true;
}

bool func_144(int iParam0, bool bParam1)
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

var func_145(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	func_101();
	Global_1904087->f_106.f_2 = 1292413058;
	Global_1904087->f_106.f_3 = func_102(iParam0);
	if (!_datafile_get_string(&Var0, &(Global_1904087->f_106)))
	{
		return "";
	}
	return func_220(Var0);
}

int func_146(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return Global_1100469[iParam0];
	}
	return 26;
}

bool func_147(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return Global_1108365->f_34[iVar0]->f_6;
}

bool func_148(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_149(var uParam0, var uParam1, int iParam2)
{
	iVar0 = network_get_player_from_gamer_handle(uParam1);
	if (is_entity_a_ped(uParam0->f_18))
	{
		iVar1 = _get_rider_of_mount(uParam0->f_18, false);
	}
	else
	{
		iVar1 = get_ped_in_vehicle_seat(uParam0->f_21, -1);
	}
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	iVar2 = network_get_player_index_from_ped(iVar1);
	if (!_network_is_player_index_valid(iVar2))
	{
		return true;
	}
	if (iVar2 == iVar0)
	{
		return false;
	}
	if (func_147(iVar0))
	{
		return true;
	}
	iVar3 = func_221(iParam2);
	if (func_222(iParam2))
	{
		iVar4 = func_223(iVar3);
		if (iVar4 == 15 || iVar4 == 10)
		{
			if (func_224(iVar3, uParam0->f_18))
			{
				return true;
			}
		}
	}
	if (Global_1291106[iParam2] & 16 != 0 || Global_1291105 & 32 != 0)
	{
		return false;
	}
	if (Global_1291106[iParam2] & 2 != 0 || Global_1291105 & 4 != 0)
	{
		if (_0x901e0dc25080c8b9(iVar2) == _0x901e0dc25080c8b9(iVar0))
		{
			return false;
		}
	}
	Var5 = { func_225(iVar2) };
	if (Global_1291106[iParam2] & 4 != 0 || Global_1291105 & 8 != 0)
	{
		if (func_226(Var5, *uParam1))
		{
			return false;
		}
	}
	if (Global_1291106[iParam2] & 8 != 0 || Global_1291105 & 16 != 0)
	{
		if (network_is_friend(uParam1))
		{
			return false;
		}
	}
	return true;
}

void func_150(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = is_entity_a_ped(iParam0);
	if (bVar0)
	{
		if (is_entity_dead(iParam0))
		{
			return;
		}
	}
	else if (!is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), false, false))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (is_entity_dead(iVar1))
	{
		return;
	}
	if (!is_ped_on_mount(iVar1))
	{
		return;
	}
	if (bVar0)
	{
		if (get_mount(iVar1) != get_ped_index_from_entity_index(iParam0))
		{
			return;
		}
	}
	else if (_0xffec4b0a1a3ed515(iParam0, -1) == iVar1)
	{
		return;
	}
	if (_0x660639bc60157048(iVar1, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar1;
	Var2.f_4 = iParam0;
	task_exit_transport(&Var2);
}

bool func_151()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_152(var uParam0)
{
	if (!func_6(uParam0, 25) && !func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 25);
		func_227();
	}
}

float func_153(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_154(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

void func_155(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	set_ped_config_flag(iParam0, 136, true);
	set_ped_can_be_targetted(iParam0, false);
	_0x18ff3110cf47115d(iParam0, 34, 1);
	_0x6569f31a01b4c097(iParam0, 4, 0);
	_0x6569f31a01b4c097(iParam0, 0, 0);
	_0x6569f31a01b4c097(iParam0, 1, 0);
}

void func_156(var uParam0, int iParam1)
{
	if (!network_has_control_of_entity(uParam0->f_18))
	{
		return;
	}
	set_blocking_of_non_temporary_events(uParam0->f_18, true);
	set_ped_config_flag(uParam0->f_18, 288, true);
	open_sequence_task(&iVar0);
	if (func_228(uParam0))
	{
		task_horse_action(0, 2, 0, 0);
	}
	if (!does_entity_exist(iParam1))
	{
		task_smart_flee_ped(0, iParam1, 1000f, -1, 540928, 3f, 0);
	}
	else
	{
		task_smart_flee_coord(0, get_entity_coords(uParam0->f_18, true, false), 1000f, -1, 540928, 3f);
	}
	task_wander_standard(0, 40000f, 0);
	func_229(uParam0->f_18, &iVar0, 0, 0, 1, 1);
	set_ped_keep_task(uParam0->f_18, true);
}

void func_157(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_159() - fParam1);
	func_230(uParam0, 1);
	func_231(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_158(var uParam0)
{
	return func_100(*uParam0, 2);
}

float func_159()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && !func_6(uParam0, 7));
		case 1:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && !func_6(uParam0, 7));
		case 2:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && func_6(uParam0, 7));
		case 3:
			if (((iParam2 == 1 || iParam2 == 2) || iParam2 == 3) || iParam2 == 6)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && func_6(uParam0, 7));
		case 4:
			return func_6(uParam0, 5);
		case 5:
			return func_6(uParam0, 6);
		case 6:
			return true;
		default:
			break;
	}
	return uParam1->f_11 == iParam3;
}

void func_161(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 || iParam0);
}

void func_162(var uParam0, var uParam1, bool bParam2)
{
	if (uParam0->f_18 != _0xf49f14462f0ae27c(uParam1->f_1))
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_18))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_18))
	{
		return;
	}
	iVar0 = _get_rider_of_mount(uParam0->f_18, true);
	iVar1 = player_ped_id();
	iVar2 = get_player_ped(uParam1->f_1);
	if (get_mount(iVar2) == uParam0->f_18)
	{
		if (iVar1 != iVar2 && get_mount(iVar1) == uParam0->f_18)
		{
			task_dismount_animal(iVar1, 0, 0, 0, 0, 0);
			func_89(16, 1);
		}
		if (bParam2 && iVar1 == iVar2)
		{
			task_dismount_animal(iVar1, 0, 0, 0, 0, 0);
		}
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	task_horse_action(uParam0->f_18, 10, 0, 0);
	if (iVar0 == iVar1)
	{
		func_89(16, 1);
	}
}

void func_163(var uParam0, var uParam1)
{
	if (get_player_ped(uParam1->f_1) == player_ped_id())
	{
		return;
	}
	if (uParam0->f_18 != _0xf49f14462f0ae27c(uParam1->f_1))
	{
		return;
	}
	if (_0xffec4b0a1a3ed515(uParam0->f_18, -2) == func_232())
	{
		return;
	}
	func_150(uParam0->f_18);
}

void func_164(var uParam0, var uParam1)
{
	if (uParam0->f_18 != _0xf49f14462f0ae27c(uParam1->f_1))
	{
		return;
	}
	if (!func_233(uParam1, uParam0->f_18))
	{
		return;
	}
	clear_ped_tasks(uParam0->f_18, 1, 0);
	_0xff1e339ce40eaaaf(uParam0->f_18, 0);
	_task_smart_flee_style_coord(uParam0->f_18, get_entity_coords(get_player_ped(uParam1->f_1), true, false), 6, 4718592, -1082130432, -1, 0);
}

void func_165(var uParam0, var uParam1)
{
	if (uParam0->f_18 != _0xf49f14462f0ae27c(uParam1->f_1))
	{
		return;
	}
	if (!func_233(uParam1, uParam0->f_18))
	{
		return;
	}
	if (does_entity_exist(uParam0->f_18))
	{
		clear_ped_tasks(uParam0->f_18, 1, 0);
		if (does_entity_exist(_0xf103823ffe72bb49(uParam0->f_18)))
		{
			_0xff1e339ce40eaaaf(uParam0->f_18, 0);
		}
		task_stand_still(uParam0->f_18, -1);
	}
}

bool func_166(struct<2> Param0)
{
	if (!func_234(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_235(Param0))
	{
		return false;
	}
	return true;
}

bool func_167(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_168(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_169(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
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
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_170()
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
	if (!func_166(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_206(uParam0, iParam1);
	}
	else
	{
		func_205(uParam0, iParam1);
	}
}

bool func_172(var uParam0)
{
	if (!func_204(uParam0))
	{
		return false;
	}
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_236(uParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_237(uParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_173(var uParam0, int iParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], uParam0))
			{
			}
			else
			{
				Global_1291734->f_938[iVar0]->f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938.f_271[iVar0], uParam0))
			{
			}
			else
			{
				Global_1291734->f_938.f_271[iVar0]->f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_174(bool bParam0)
{
	if (func_238() == -1)
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

void func_175(int iParam0, bool bParam1)
{
	if (func_239(iParam0) && !bParam1)
	{
		return;
	}
	Global_1291734->f_11.f_523[iParam0] = func_241(func_240(iParam0), 10000, 0, 0, 0, 1);
}

bool func_176(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_242(uParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_40(uParam0, iParam1, 0);
	if (func_118(Global_1904087, 2))
	{
		return true;
	}
	return false;
}

int func_177(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_174(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_178(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_179(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_174(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_180(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_31(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_181(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_174(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_182(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -757978903:
			return "BREED_BRETON_REDROAN";
		case 1909854428:
			return "BREED_BRETON_SORREL";
		case 1592694494:
			return "BREED_BRETON_GRULLODUN";
		case 981469777:
			return "BREED_BRETON_SEALBROWN";
		case 1064693514:
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739:
			return "BREED_BRETON_STEELGREY";
		case 1577022605:
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209:
			return "BREED_CRIOLLO_DUN";
		case 3032834:
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672:
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757:
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233:
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case 885568364:
			return "BREED_KLADRUBER_BLACK";
		case -1540355548:
			return "BREED_KLADRUBER_WHITE";
		case -601560591:
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766:
			return "BREED_KLADRUBER_GREY";
		case -1698261864:
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166:
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char[] func_184(char[4] cParam0)
{
	return cParam0;
}

int func_185(int iParam0)
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

bool func_186(var uParam0, int iParam1)
{
	return func_148(*uParam0, iParam1);
}

void func_187(int iParam0)
{
	func_243(2, iParam0);
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = func_192(iParam1);
	iVar2 = func_244(iVar0, iVar1, 1);
	return iVar2;
}

int func_190(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_245(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_191(int iParam0)
{
	return iParam0;
}

int func_192(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_246(&iParam0);
		if (!func_113(iVar0, 0))
		{
			iVar0 = func_247(iParam0);
		}
	}
	else
	{
		iVar0 = func_247(iParam0);
	}
	return iVar0;
}

struct<14> func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_194(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = _0x640f890c3e5a3ffd(func_174(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_195(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_196(int iParam0)
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

int func_197(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_248(iVar0);
	iVar2 = func_249(iVar0, iVar1);
	return iVar2;
}

bool func_198(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_199(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = _0x80d78bdc9d88ef07(func_174(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_200()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_201(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_202(int iParam0)
{
	if (iParam0 == Global_1940311->f_37)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1940311->f_10869[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_204(var uParam0)
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

void func_205(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_20), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	func_251(&(uParam0->f_20), iParam1);
}

void func_207()
{
	func_252(&(Global_1291734->f_938));
	func_253(0);
	func_253(2);
}

void func_208(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

bool func_209(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_148(Global_1071686->f_21416.f_1[iParam0]->f_7, iParam1);
}

bool func_210(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_254(36, iParam0);
}

bool func_211(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_255(32, iParam0);
}

bool func_212(int iParam0)
{
	return func_254(1, iParam0);
}

bool func_213(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

float func_214(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

bool func_215(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	if (fParam2 > fParam3)
	{
		return false;
	}
	if (!is_gameplay_cam_rendering() && !is_first_person_aim_cam_active())
	{
		return false;
	}
	bVar0 = is_entity_a_ped(iParam1);
	if (bVar0)
	{
		iVar1 = get_ped_index_from_entity_index(iParam1);
	}
	if (bParam4)
	{
		if (Global_1071686->f_21952[iParam0]->f_9 == 0)
		{
			if (is_ped_in_any_vehicle(iVar1, false))
			{
				return is_sphere_visible(get_entity_coords(iVar1, false, false), 1f);
			}
			if (_0xb655db7582aec805(iVar1) && _0x6c50b9dccca70023(iVar1))
			{
				return is_sphere_visible(get_entity_coords(iParam1, false, false), 1f);
			}
			else if (is_ped_in_cover(iVar1, 1, 0))
			{
				uVar2 = Global_1901947->f_99.f_13;
			}
			else
			{
				uVar2 = Global_1901947->f_99.f_12;
			}
			return ((func_256(&Global_1296859, iParam0) && _0x5102307ce88798eb(iVar1)) && _0x164cecc59e70df86(iVar1, uVar2));
		}
		else if (!_0x5102307ce88798eb(iVar1))
		{
			request_ped_visibility_tracking(iVar1);
		}
		else
		{
			return is_tracked_ped_visible(iVar1);
		}
	}
	else if (bVar0)
	{
		if (!_0x5102307ce88798eb(iVar1))
		{
			request_ped_visibility_tracking(iVar1);
		}
		else
		{
			return is_tracked_ped_visible(iVar1);
		}
	}
	else
	{
		return is_sphere_visible(get_entity_coords(iParam1, false, false), 1f);
	}
	return false;
}

int func_216(var uParam0)
{
	if (*uParam0 == 0)
	{
		*uParam0 = Global_1296859->f_21;
	}
	else if ((Global_1296859->f_21 - *uParam0) < 5)
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1277358601:
		case 1283453238:
			return 0;
		default:
			break;
	}
	return 1;
}

bool func_218()
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		if (func_55(65536, 255))
		{
			func_20(65536);
		}
		return false;
	}
	if (func_55(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_219(var uParam0, float fParam1)
{
	if (!func_27(uParam0))
	{
		return false;
	}
	if (func_80(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

var func_220(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_221(int iParam0)
{
	return Global_1285193[iParam0];
}

bool func_222(int iParam0)
{
	return (*Global_1285193)[iParam0]->f_1;
}

int func_223(int iParam0)
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

bool func_224(int iParam0, int iParam1)
{
	iVar0 = func_223(iParam0);
	if (!func_257(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439->f_72[iVar0]->f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_131(get_player_index()) };
	}
	if (func_26(vVar1))
	{
		return false;
	}
	fVar4 = func_258(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_259(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_259(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<7> func_225(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (network_clan_service_is_valid() && network_clan_player_is_active(&uParam0))
	{
		network_clan_player_get_desc(&iVar0, 22, &uParam0);
	}
	else
	{
		return false;
	}
	if (network_clan_service_is_valid() && network_clan_player_is_active(&uParam7))
	{
		network_clan_player_get_desc(&iVar22, 22, &uParam7);
	}
	else
	{
		return false;
	}
	if (iVar0 != iVar22)
	{
		return false;
	}
	return true;
}

void func_227()
{
	if (func_55(2, 255))
	{
		return;
	}
	func_260(2);
}

bool func_228(var uParam0)
{
	if ((!_is_mount_seat_free(uParam0->f_18, -1) || !_is_mount_seat_free(uParam0->f_18, 0)) || !_is_mount_seat_free(uParam0->f_18, -2))
	{
		return true;
	}
	if (!_0x608bc6a6aacd5036(&Var0, uParam0->f_18, 4, 2))
	{
		return false;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return false;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return false;
	}
	if (!is_ped_human(get_ped_index_from_entity_index(Var0.f_3)))
	{
		return false;
	}
	return true;
}

void func_229(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_232()
{
	return -1;
}

bool func_233(var uParam0, int iParam1)
{
	iVar0 = get_player_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if (is_ped_injured(iParam1))
	{
		return false;
	}
	if (func_153(iVar0, iParam1, 1, 1) > 40f)
	{
		return false;
	}
	iVar1 = _get_rider_of_mount(iParam1, true);
	if (does_entity_exist(iVar1))
	{
		return false;
	}
	return true;
}

bool func_234(int iParam0)
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

int func_235(int iParam0)
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

bool func_236(var uParam0)
{
	func_261(&(Global_1904087->f_24));
	if (!func_105(*uParam0, &(Global_1904087->f_24), 1, 0, -1))
	{
		return false;
	}
	Global_1904087->f_24.f_14 = uParam0->f_11;
	Global_1904087->f_24.f_15 = uParam0->f_22;
	Global_1904087->f_24.f_16 = { uParam0->f_12 };
	Global_1904087->f_24.f_25 = uParam0->f_23;
	Global_1904087->f_24.f_24 = uParam0->f_20;
	func_262(uParam0, &(Global_1904087->f_24.f_24));
	if (!func_263(&(Global_1904087->f_24), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_237(var uParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_105(*uParam0, &Var0, 0, 0, -1))
	{
		return false;
	}
	Var0.f_14 = uParam0->f_11;
	Var0.f_15 = { uParam0->f_12 };
	func_262(uParam0, &(Var0.f_23));
	return func_264(&Var0, 0, 0);
}

int func_238()
{
	return Global_1572887->f_13;
}

bool func_239(int iParam0)
{
	return func_265(&(Global_1291734->f_11.f_523[iParam0]));
}

char* func_240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

var func_241(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_242(var uParam0, int iParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], uParam0))
			{
			}
			else
			{
				return Global_1291734->f_938[iVar0]->f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938.f_271[iVar0], uParam0))
			{
			}
			else
			{
				return Global_1291734->f_938.f_271[iVar0]->f_6;
			}
			iVar0++;
		}
	}
	return false;
}

void func_243(int iParam0, int iParam1)
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

int func_244(int iParam0, int iParam1, int iParam2)
{
	if (!func_113(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_266(iParam0) };
	Var5 = { func_267(iParam0, iParam1, Var0, Var0.f_4) };
	if (_0xcb5d11f9508a928d(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_268(iParam0, 0, 1);
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
			func_269(iParam0, 0);
			bVar0 = true;
		}
		func_270(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_246(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_271(iVar0);
}

int func_247(int iParam0)
{
	iVar0 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = func_271(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

int func_248(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_249(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_213(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_250(var uParam0, int iParam1)
{
	if (!func_186(uParam0, iParam1))
	{
		return;
	}
	func_272(uParam0, iParam1);
}

void func_251(var uParam0, int iParam1)
{
	if (func_186(uParam0, iParam1))
	{
		return;
	}
	func_273(uParam0, iParam1);
}

void func_252(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_274((*uParam0)[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_274(uParam0->f_271[iVar0]);
		iVar0++;
	}
}

void func_253(int iParam0)
{
	if (iParam0 == 0)
	{
		if (!func_199("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
		{
			return;
		}
	}
	else if (iParam0 == 2)
	{
		Var2 = { func_193(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
		if (!func_194(&Var2, &iVar0, &iVar1, 0))
		{
			return;
		}
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var16.f_9 = -1591664384;
	Var45.f_9 = -1591664384;
	Var69.f_9 = -1591664384;
	iVar107 = 0;
	while (iVar107 < iVar1)
	{
		if (!_0x82fa24c3d3fcd9b7(iVar0, iVar107, &Var69))
		{
		}
		else if (!func_40(&Var69, iParam0, 0))
		{
		}
		else
		{
			iVar108 = Global_1904087->f_10;
			switch (iVar108)
			{
				case 0:
				case 1:
					if (_0x375f5870a7b8bec1(&(Global_1904087->f_12)))
					{
						if (func_179(&Var69, &Var16, 1))
						{
							if (func_263(&Var16, 0, 1))
							{
								Global_1904087->f_12 = { Var16.f_16 };
							}
						}
					}
					break;
				case 2:
					if (_0x375f5870a7b8bec1(&(Global_1904087->f_12)))
					{
						if (func_181(&Var69, &Var45, 1))
						{
							if (func_264(&Var45, 0, 1))
							{
								Global_1904087->f_12 = { Var45.f_15 };
							}
						}
					}
					break;
			}
			Var83 = { Var69 };
			Var83.f_4 = Global_1904087->f_11;
			Var83.f_6 = func_118(Global_1904087, 2);
			Var83.f_7 = { Global_1904087->f_12 };
			if (iVar108 == 0 || iVar108 == 1)
			{
				Var83.f_15 = { Global_1291734->f_938[iVar107]->f_15 };
				Var83.f_23 = Global_1291734->f_938[iVar107]->f_23;
				*Global_1291734->f_938[iVar107] = { Var83 };
			}
			else if (iVar108 == 2)
			{
				Var83.f_15 = { Global_1291734->f_938.f_271[iVar107]->f_15 };
				Var83.f_23 = Global_1291734->f_938.f_271[iVar107]->f_23;
				*Global_1291734->f_938.f_271[iVar107] = { Var83 };
			}
		}
		iVar107++;
	}
	func_196(iVar0);
}

bool func_254(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_275(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_276())
	{
		return func_275(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_275(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_255(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_256(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (!&Global_1296859->f_22[iParam0])
	{
		return false;
	}
	if (!&Global_1296859->f_22[iParam1])
	{
		return false;
	}
	if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
	{
		return false;
	}
	if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam1])))
	{
		return false;
	}
	return func_277(&(Global_1296859->f_154[iParam0]), &(Global_1296859->f_154[iParam1]));
}

bool func_257(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

float func_258(int iParam0)
{
	iVar0 = func_223(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_259(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_260(int iParam0)
{
	func_243(3, iParam0);
}

void func_261(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

void func_262(var uParam0, var uParam1)
{
	if (func_118(uParam0, 4))
	{
		func_251(uParam1, 4);
	}
	if (func_118(uParam0, 2))
	{
		func_251(uParam1, 2);
	}
}

bool func_263(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (_0x375f5870a7b8bec1(&(uParam0->f_16)))
	{
		StringCopy(&(uParam0->f_16), func_30(), 64);
	}
	if (func_278(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_174(bParam2), uParam0, uParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_279(uParam0, 0) };
		Var0.f_16 = { uParam0->f_16 };
		Var0.f_25 = uParam0->f_27;
		Var0.f_26 = uParam0->f_28;
		Var0.f_24 = uParam0->f_25;
		Var0.f_27 = uParam0->f_24;
		if (func_280(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_264(var uParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (func_278(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_174(bParam2), uParam0, uParam0, 24))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_279(uParam0, 0) };
		Var0.f_16 = { uParam0->f_15 };
		Var0.f_24 = uParam0->f_23;
		if (func_281(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_265(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

struct<5> func_266(int iParam0)
{
	Var0 = { func_267(iParam0, 1328661203, func_103(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_267(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_113(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
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

void func_269(int iParam0, bool bParam1)
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

void func_270(int iParam0, int iParam1)
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

int func_271(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_282(iVar0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!_0x9e7738b291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (_is_metaped_using_component(iVar0, 43391475) || _0x8de41e9902e85756(iVar0))
		{
			iVar6 = func_283(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

void func_272(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

void func_273(var uParam0, int iParam1)
{
	func_285(uParam0, iParam1);
}

void func_274(var uParam0)
{
	*uParam0 = { func_103() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

bool func_275(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_276()
{
	return Global_1102219->f_3672;
}

int func_277(int iParam0, int iParam1)
{
	if (iParam0 == player_id())
	{
		iVar0 = get_player_ped(iParam1);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
		if (is_entity_dead(iVar0))
		{
			return 0;
		}
		if (!_0x5102307ce88798eb(iVar0))
		{
			request_ped_visibility_tracking(iVar0);
			return 0;
		}
	}
	return _0xe525878a35b9eebd(iParam0, iParam1);
}

bool func_278(bool bParam0)
{
	if (func_238() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_174(bParam0));
}

struct<16> func_279(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_286(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_103() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_280(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_287(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_289(func_288(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_290(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

int func_281(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_289(func_291(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_290(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

int func_282(int iParam0)
{
	iVar0 = 2;
	if (!does_entity_exist(iParam0))
	{
		return iVar0;
	}
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
	return iVar0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 915880986:
			return 1908704263;
		case -1424697962:
			return -2112217546;
		case -1643384846:
			return -1745255175;
		case -847420802:
			return -237368063;
		case -662726703:
			return 1598967299;
		case 1760886130:
			return -1809464109;
		case -1243653490:
			return -165201917;
		case 1988467099:
			return 815147738;
		case -674590015:
			return 1287583539;
		case -1480423460:
			return -2126985311;
		case 924882045:
			return -1268352491;
		case 1415608202:
			return -1940225526;
		case -593311590:
			return -212307068;
		case 765085831:
			return 355421032;
		case 2094730711:
			return 1657729714;
		case -1310590179:
			return 1350692346;
		case 992366796:
			return -257850294;
		case -244657613:
			return -918541014;
		case -2026210939:
			return -947573795;
		case -1252472243:
			return -2068302756;
		case -980016656:
			return 1650829985;
		case -758005668:
			return -1808044035;
		case -2139551030:
			return -1952647655;
		case 1607144310:
			return 1293221440;
		case 80093385:
			return -642946194;
		case -867655342:
			return 819214075;
		case 991092621:
			return -858652427;
		case 871746664:
			return 395625948;
		case 1626949878:
			return -2063800922;
		case -1722483116:
			return -2117103642;
		case -1739474417:
			return -1583694057;
		case -161524199:
			return -1550918713;
		case 156979555:
			return 836539658;
		case 322141256:
			return 773062352;
		case 1310120320:
			return 1306100270;
		case -1228376431:
			return -1063194668;
		case 472142656:
			return 337839068;
		case -1837840093:
			return -1426520714;
		case 58634176:
			return -1456429189;
		case 1023080408:
			return -2032809253;
		case 1001171791:
			return 781728005;
		case 1210345318:
			return 1202409779;
		case 399553313:
			return 1520877300;
		case -1422869557:
			return -1736624361;
		case -1378812236:
			return 719465997;
		case 1011003885:
			return -361486526;
		case 651035143:
			return -765274711;
		case 2013022756:
			return -887205673;
		case -1186289527:
			return -784020903;
		case 877935135:
			return -886117938;
		case -39646495:
			return -1416771220;
		case 1582593525:
			return 1648676911;
		case -246542229:
			return 2103833563;
		case -529454751:
			return -831636369;
		case -46978629:
			return -852290935;
		case -1347000030:
			return -1870415962;
		case -505583391:
			return -788684109;
		case 1645887374:
			return 1416435145;
		case -1559227925:
			return -1483088274;
		case 1562528937:
			return -791867098;
		case -1471526136:
			return -1689552552;
		case -1440794801:
			return -1850779170;
		case 2144711797:
			return -121487803;
		case 718825539:
			return -1280499288;
		case 2105263879:
			return 820245961;
		case -905842006:
			return -889526774;
		case 1191274340:
			return -521025998;
		case 1613453781:
			return 1583031244;
		case -1030182399:
			return -2115599211;
		case 987967309:
			return -767176802;
		case -1060737769:
			return -750945821;
		case 553310445:
			return -2135749211;
		case -1838865945:
			return 2063108046;
		case 1418092959:
			return 1299111759;
		case -1315697778:
			return 1595322723;
		case -1772126340:
			return 784918835;
		case -935543049:
			return -676310905;
		case 1772544356:
			return -1719545959;
		case -266273535:
			return -2142423934;
		case -1670544626:
			return 747751566;
		case 1290960696:
			return -1942682403;
		case 1913571052:
			return 1018433784;
		case 1717601520:
			return -796185392;
		case 430397370:
			return -49549406;
		case 16287711:
			return 857788498;
		case -1356230367:
			return 1223148871;
		case 1417331079:
			return 939407236;
		case -884124246:
			return 1608778431;
		case 1884610748:
			return -2033821082;
		case 746558492:
			return -993340234;
		case -892811627:
			return -1861062075;
		case -2040522845:
			return 1645001514;
		case -1224510844:
			return 782371031;
		case 1334837390:
			return 1255529169;
		case 339620522:
			return 70898308;
		case 1770451033:
			return -1050350982;
		case 756657535:
			return 581781784;
		case 862898895:
			return -1363330863;
		case 1997845858:
			return -1780911288;
		case -1930144509:
			return 1018306802;
		case 1846915545:
			return 1615521415;
		case -1816929509:
			return -1499066338;
		case 1197831625:
			return 1711081908;
		case -1866642239:
			return -164705;
		case -1508120809:
			return -2044044647;
		case -1007681885:
			return -859583379;
		case 434924608:
			return -759504052;
		case 1666393029:
			return 700225820;
		case -1814593136:
			return 136458586;
		case -1188120304:
			return 799105420;
		case 1978734761:
			return -481655757;
		case -824902132:
			return 484160931;
		case -1015531226:
			return 1010699907;
		case -581619522:
			return 1550264248;
		case -861854914:
			return -371992731;
		case -545447034:
			return 1090294483;
		case -1824684934:
			return -274175035;
		case 980653387:
			return -1064414912;
		case -1011598664:
			return -2091620305;
		case -177476569:
			return -468684824;
		case 416630124:
			return 1668870118;
		case 1925728375:
			return -534004020;
		case -1080457688:
			return -2126925270;
		case 1742676369:
			return 2008380517;
		case -899751553:
			return -510697884;
		case 431501574:
			return -955209948;
		case 2126795269:
			return 1459836898;
		case 1489051752:
			return 303969766;
		case -1705499323:
			return -1707588662;
		case -2013445740:
			return -1224075784;
		case 102446365:
			return -1806671048;
		case -1927342740:
			return 749765420;
		case -410900360:
			return 462936163;
		case -1073614594:
			return -8888941;
		case 2060013792:
			return 1640227110;
		case 581032175:
			return -1241188722;
		case -581931638:
			return -1030962659;
		case -1528265128:
			return 112552982;
		case -142632645:
			return -1599578931;
		case -2048519180:
			return 1296331626;
		case 1442025993:
			return -1256398198;
		case 441195430:
			return 1297800973;
		case 748665395:
			return 1772582754;
		case 351048413:
			return -1459876379;
		case -914779013:
			return 1127406863;
		case 1323485831:
			return 1779996957;
		case -365111821:
			return 1885306923;
		case 101495387:
			return 1244107697;
		case 157917500:
			return -1201555940;
		case -936537044:
			return -668487833;
		case -1610329427:
			return -1178150148;
		case -1836227998:
			return 1171158615;
		case 619479575:
			return -2123554124;
		case -1444929945:
			return 1806705761;
		case -929322235:
			return 404581836;
		case -548076717:
			return 987197489;
		case -281211381:
			return -1259715647;
		case 493457089:
			return -1716717840;
		case -479485786:
			return -196277007;
		case 27838955:
			return -2064457926;
		case 1641833719:
			return 561267454;
		case -314933180:
			return 686253083;
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_286(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(uParam0, iParam1);
}

bool func_287(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_292(uParam1->f_8, iParam0, uVar0, 2048) || func_292(uParam1->f_8, iParam0, uVar0, 32768)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 4) || func_292(uParam1->f_8, iParam0, uVar0, 256)) || func_292(uParam1->f_8, iParam0, uVar0, 65536)) || func_292(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 1) || func_292(uParam1->f_8, iParam0, uVar0, 8)) || func_292(uParam1->f_8, iParam0, uVar0, 65536)) || func_292(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 1) || func_292(uParam1->f_8, iParam0, uVar0, 16)) || func_292(uParam1->f_8, iParam0, uVar0, 2)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_292(uParam1->f_8, iParam0, uVar0, 8) || func_292(uParam1->f_8, iParam0, uVar0, 4096)) || func_292(uParam1->f_8, iParam0, uVar0, 256)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_288(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_289(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_293(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_293(iParam1, 2, 0, 0);
	return -1;
}

int func_290(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_293(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_291(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

int func_292(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_148(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_294(iParam0, iParam1, iParam2, iParam3);
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_295(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

void func_295(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_296(&(uParam0->f_4));
}

void func_296(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

