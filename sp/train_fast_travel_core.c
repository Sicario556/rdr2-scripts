void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
		terminate_this_thread();
	}
	if (iScriptParam_0 != -1)
	{
	}
	else
	{
		func_1();
		terminate_this_thread();
	}
	Global_1430221->f_4 = 1;
	iLocal_92 = iScriptParam_0;
	func_5(&Local_26, 0, 537, 752, 1028);
	func_5(&Local_26, 1, 1115, 1187, 1401);
	func_5(&Local_26, 2, 1413, 1498, 1710);
	func_5(&Local_26, 3, 1722, 1734, 1862);
	func_5(&Local_26, 4, 1874, 1892, 1991);
	func_5(&Local_26, 5, 2003, 2057, 2238);
	func_5(&Local_26, 6, 2258, 2422, 3352);
	func_5(&Local_26, 7, 3450, 3502, 3566);
	func_5(&Local_26, 8, 3574, 3582, 3600);
	func_30(&Local_26, 0);
	while (!func_31(1))
	{
		wait(0);
		func_32();
		func_33(&Local_26);
	}
	terminate_this_thread();
}

int func_1()
{
	Global_1430221->f_4 = 0;
	func_34(1);
	if (does_entity_exist(iLocal_97) && !is_entity_dead(iLocal_97))
	{
		uVar0 = _0x45853f4e17d847d5(iLocal_97);
		if (_0xc29996a337bdd099(uVar0))
		{
			_0x38e7dd70a242d5cb(uVar0, 1);
		}
	}
	func_36(func_35());
	func_36(func_37());
	if (iLocal_99 != -1)
	{
		func_38(iLocal_99);
		func_39(iLocal_99, 1024);
	}
	if (func_41(1870112085, func_40(0), 1084182731, 1) >= 1)
	{
		func_42(1870112085, 1, -142743235, 0, 0);
	}
	if (bLocal_106)
	{
		if (is_screen_faded_out())
		{
			do_screen_fade_in(0);
		}
		set_player_control(player_id(), true, 0, false);
		clear_focus();
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		set_cinematic_mode_active(false);
		if (bLocal_100)
		{
			clear_ped_tasks(func_43(1), 1, 0);
			set_entity_invincible(func_43(1), false);
		}
		if (bLocal_101)
		{
			clear_ped_tasks(func_43(7), 1, 0);
			set_entity_invincible(func_43(7), false);
		}
	}
	if (_does_anim_scene_exist(iLocal_105))
	{
		_delete_anim_scene(iLocal_105);
	}
	func_44(1);
	return 1;
}

void func_2()
{
	func_45();
	func_46(-1, 0, 0, 0, 0);
	_0xe94b5e938619712e();
	func_34(0);
	func_47(&(Global_1392581->f_3), 8);
	do_screen_fade_out(2000);
	bLocal_102 = false;
	iLocal_91 = func_48();
	iLocal_99 = func_49(iLocal_92);
	bLocal_106 = true;
	if (func_51(Global_35, func_43(7), func_50(7), 1) && !is_ped_in_writhe(func_43(7)))
	{
		set_entity_invincible(func_43(7), true);
		bLocal_101 = true;
	}
	if (func_51(Global_35, func_43(1), func_50(1), 1) && !is_ped_in_writhe(func_43(1)))
	{
		set_entity_invincible(func_43(1), true);
		bLocal_100 = true;
	}
	func_52(iLocal_91, 0, &vLocal_93, &uLocal_96);
	if (!_0xcf45df50c7775f2a())
	{
		_0x513f8aa5bf2f17cf(vLocal_93, 40f, 0);
	}
	func_53(func_37());
	iLocal_103 = get_game_timer();
}

int func_3()
{
	_0xe94b5e938619712e();
	if (!is_screen_faded_out())
	{
		return -1;
	}
	if (!bLocal_102)
	{
		func_54(iLocal_99);
		func_55(iLocal_99, 1024);
		func_39(iLocal_99, 2);
		func_39(iLocal_99, 65536);
		func_39(iLocal_99, 4096);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != iLocal_99)
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 1);
				func_55(iVar0, 2);
				_0x0d5fdf0d36fa10cd((*Global_1425371)[iVar0]->f_1);
			}
			iVar0++;
		}
		delete_all_trains();
		func_57(func_56(player_id()), 250f, 1, 0, 0, 0, 0);
		bLocal_102 = true;
	}
	if (!_0xc29996a337bdd099((*Global_1425371)[iLocal_99]->f_1))
	{
		if ((get_game_timer() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	if (Global_1310750->f_16037 != 0)
	{
		func_45();
		func_46(-1, 0, 0, 0, 0);
		return -1;
	}
	if (!_0x0909f71b5c070797())
	{
		return -1;
	}
	if (does_entity_exist(_0x6e585a616abb8401((*Global_1425371)[iLocal_99]->f_1)))
	{
		return -1;
	}
	return 1;
}

void func_4()
{
	_0xe94b5e938619712e();
	_0x5a8b01199c3e79c3();
	clear_focus();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0] = iParam2;
	uParam0->f_1[iVar0]->f_1 = iParam3;
	uParam0->f_1[iVar0]->f_2 = iParam4;
}

void func_6()
{
	_0xe94b5e938619712e();
	if (_0xc29996a337bdd099((*Global_1425371)[iLocal_99]->f_1))
	{
		_0x718eb706b6e998a0((*Global_1425371)[iLocal_99]->f_1);
		_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
	}
	iLocal_103 = get_game_timer();
}

int func_7()
{
	_0xe94b5e938619712e();
	if (!does_entity_exist(_0x6e585a616abb8401((*Global_1425371)[iLocal_99]->f_1)))
	{
		_0x718eb706b6e998a0((*Global_1425371)[iLocal_99]->f_1);
		_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
		if ((get_game_timer() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	else
	{
		iLocal_97 = _0x6e585a616abb8401((*Global_1425371)[iLocal_99]->f_1);
		_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 0f);
		_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 0f);
		if (_0xc29996a337bdd099((*Global_1425371)[iLocal_99]->f_1))
		{
			_0x718eb706b6e998a0((*Global_1425371)[iLocal_99]->f_1);
			_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
		}
	}
	if (!_0xbd3c4a2ed509205e(iLocal_97))
	{
		return -1;
	}
	return 2;
}

void func_8()
{
	_0xe94b5e938619712e();
}

void func_9()
{
	_0xe94b5e938619712e();
	iLocal_103 = get_game_timer();
	if (func_41(1870112085, func_40(0), 1084182731, 1) >= 1)
	{
		func_42(1870112085, 1, -142743235, 0, 0);
	}
	iLocal_98 = get_train_carriage(iLocal_97, 4);
	if (does_entity_exist(iLocal_98))
	{
		_0x6c31b06e91518269(iLocal_98, 1);
	}
}

int func_10()
{
	_0xe94b5e938619712e();
	if (!does_entity_exist(iLocal_98) || is_entity_dead(iLocal_98))
	{
		iLocal_98 = get_train_carriage(iLocal_97, 4);
		return -1;
	}
	else
	{
		if (!_0xc2e71d7e0a7b4c89(iLocal_98))
		{
			_0x6c31b06e91518269(iLocal_98, 1);
			return -1;
		}
		vVar0 = { get_entity_coords(iLocal_98, true, false) };
		if (!does_scenario_exist_in_area(vVar0, 5f, false, Global_35, false))
		{
			if ((get_game_timer() - iLocal_103) > 20000)
			{
				return 8;
			}
			else
			{
				iVar3 = (get_game_timer() - iLocal_103);
				return -1;
			}
		}
		if (!func_58(Global_35, -1518311320))
		{
			task_use_nearest_train_scenario_to_coord_warp(Global_35, get_entity_coords(iLocal_98, true, false), 5f);
		}
	}
	if (func_58(Global_35, -1518311320))
	{
		func_59(func_56(player_id()), 2f, 0);
		set_cinematic_mode_active(true);
		iLocal_103 = get_game_timer();
		return 3;
	}
	return -1;
}

void func_11()
{
	_0xe94b5e938619712e();
}

void func_12()
{
	_0xe94b5e938619712e();
}

int func_13()
{
	if (!is_cinematic_cam_rendering())
	{
		iLocal_103 = get_game_timer();
	}
	_0xe94b5e938619712e();
	if ((get_game_timer() - iLocal_103) > 3500)
	{
		set_vehicle_handbrake(iLocal_97, false);
		_0xa72b1bf3857b94d7(iLocal_97, 1);
		_0xdd100ce1ebbf37e3(iLocal_97, 0);
		_0x4182c037aa1f0091(iLocal_97, 0);
		_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 8f);
		_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 8f);
		_0x34bcf6209b9668a7((*Global_1425371)[iLocal_99]->f_1, 1);
		return 4;
	}
	return -1;
}

void func_14()
{
	_0xe94b5e938619712e();
}

void func_15()
{
	_0xe94b5e938619712e();
	iLocal_103 = get_game_timer();
}

int func_16()
{
	_0xe94b5e938619712e();
	if ((get_game_timer() - iLocal_103) > 6000)
	{
		if (!is_screen_fading_out() && !is_screen_faded_out())
		{
			do_screen_fade_out(3000);
		}
		if (is_screen_faded_out())
		{
			return 5;
		}
		return -1;
	}
	if ((is_screen_faded_out() && !is_screen_fading_in()) && is_cinematic_cam_rendering())
	{
		do_screen_fade_in(1000);
	}
	return -1;
}

void func_17()
{
	_0xe94b5e938619712e();
}

void func_18()
{
	_0xe94b5e938619712e();
	if (!_does_anim_scene_exist(iLocal_105))
	{
		iLocal_105 = _create_anim_scene(func_60(-1), 0, 0, false, true);
	}
	if (!_is_anim_scene_loading(iLocal_105, true))
	{
		load_anim_scene(iLocal_105);
	}
}

int func_19()
{
	_0xe94b5e938619712e();
	if ((((_does_anim_scene_exist(iLocal_105) && !_is_anim_scene_started(iLocal_105, false)) && is_screen_faded_out()) && !is_screen_fading_in()) && _is_anim_scene_loaded(iLocal_105, true, false))
	{
		start_anim_scene(iLocal_105);
		func_52(iLocal_92, 1, &vLocal_93, &uLocal_96);
	}
	if (_does_anim_scene_exist(iLocal_105))
	{
		if (_is_anim_scene_started(iLocal_105, false) && is_screen_faded_out())
		{
			do_screen_fade_in(500);
			func_53(func_35());
			func_57(get_entity_coords(Global_35, true, false), 40f, 1, 0, 0, 0, 0);
		}
		if (_is_anim_scene_active(iLocal_105) || _is_anim_scene_finished(iLocal_105, false))
		{
			do_screen_fade_out(0);
			return 6;
		}
	}
	return -1;
}

void func_20()
{
	func_36(func_35());
	_0xe94b5e938619712e();
}

void func_21()
{
	_0xe94b5e938619712e();
	request_collision_at_coord(vLocal_93);
	if (_0xc29996a337bdd099((*Global_1425371)[iLocal_99]->f_1))
	{
		_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
	}
	if (does_entity_exist(iLocal_98))
	{
		_0x6c31b06e91518269(iLocal_98, 1);
	}
	_0x4182c037aa1f0091(iLocal_97, 1);
	_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 0f);
	_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 0f);
	iLocal_103 = get_game_timer();
	iVar0 = func_61(iLocal_91, iLocal_92);
	func_62(iVar0, 0, 0, 0, 1);
	iVar1 = func_63(iLocal_91, 1);
	func_64(1, iVar1, -695085701, 1, iVar0);
}

int func_22()
{
	_0xe94b5e938619712e();
	if (is_screen_faded_out())
	{
		if (_0xcf45df50c7775f2a())
		{
			if (!_0x0909f71b5c070797())
			{
				return -1;
			}
		}
		else if (func_65(Global_35, vLocal_93, 1) < 1000f)
		{
			vVar0 = { vLocal_93 };
			fVar6 = func_66(iLocal_97, vLocal_93, &vVar3);
			if (!func_67(vVar3))
			{
				vVar0 = { vVar3 };
			}
			_0x513f8aa5bf2f17cf(vVar0, fVar6, 1);
			iLocal_103 = get_game_timer();
			return -1;
		}
		else
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iLocal_99]->f_1))
			{
				_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
				_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 0f);
				_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 0f);
			}
			if (!func_58(Global_35, -1518311320))
			{
				set_entity_coords(Global_35, vLocal_93, true, false, true, true);
			}
			return -1;
		}
		if (!does_entity_exist(iLocal_98))
		{
			if (!does_entity_exist(iLocal_97))
			{
				iLocal_97 = _0x6e585a616abb8401((*Global_1425371)[iLocal_99]->f_1);
				_0x718eb706b6e998a0((*Global_1425371)[iLocal_99]->f_1);
				_0xd0ba1853d76683c8((*Global_1425371)[iLocal_99]->f_1, vLocal_93, uLocal_96);
				return -1;
			}
			else
			{
				iLocal_98 = get_train_carriage(iLocal_97, 4);
				_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 0f);
				_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 0f);
				return -1;
			}
		}
		else if (!_0xc2e71d7e0a7b4c89(iLocal_98))
		{
			_0x6c31b06e91518269(iLocal_98, 1);
			return -1;
		}
	}
	if ((get_game_timer() - iLocal_103) < 500)
	{
		return -1;
	}
	if (!func_58(Global_35, -1518311320))
	{
		if (does_scenario_exist_in_area(get_entity_coords(iLocal_98, true, false), 5f, false, Global_35, false))
		{
			task_use_nearest_train_scenario_to_coord_warp(Global_35, get_entity_coords(iLocal_98, true, false), 5f);
		}
		if (is_screen_faded_out())
		{
			return -1;
		}
	}
	if (is_screen_faded_out() && !is_screen_fading_in())
	{
		func_59(func_56(player_id()), 2f, 0);
		_0x4182c037aa1f0091(iLocal_97, 1);
		_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 8f);
		_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 8f);
		uVar7 = _0x45853f4e17d847d5(iLocal_97);
		_0x34bcf6209b9668a7(uVar7, 1);
		_0x38e7dd70a242d5cb(uVar7, 0);
		do_screen_fade_in(3000);
		if (bLocal_100)
		{
			func_68(iLocal_92, &vVar8, &uVar11, 1);
			func_69(func_43(1), vVar8, uVar11, 32, 1073741824);
			task_stand_still(func_43(1), -1);
		}
		if (bLocal_101)
		{
			func_68(iLocal_92, &vVar12, &uVar15, 0);
			func_69(func_43(7), vVar12, uVar15, 32, 1073741824);
			task_stand_still(func_43(7), -1);
		}
		_0x5a8b01199c3e79c3();
		clear_focus();
		iLocal_104 = get_game_timer();
		return -1;
	}
	else if (is_screen_faded_in())
	{
		if (!is_ped_in_any_train(player_ped_id()) || !does_entity_exist(iLocal_97))
		{
			if (_0xcf45df50c7775f2a())
			{
				_0x5a8b01199c3e79c3();
			}
			return 7;
		}
	}
	if (bLocal_100)
	{
		set_ped_move_rate_override(func_43(1), 0f);
		if (!func_58(func_43(1), -982327190))
		{
			task_stand_still(func_43(1), -1);
		}
	}
	if (bLocal_101)
	{
		set_ped_move_rate_override(func_43(7), 0f);
		if (!func_58(func_43(7), -982327190))
		{
			task_stand_still(func_43(7), -1);
		}
	}
	iVar16 = (get_game_timer() - iLocal_104);
	if (iVar16 < 40000 && !_0xe887bd31d97793f6(iLocal_97))
	{
		return -1;
	}
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		do_screen_fade_in(3000);
		clear_focus();
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
	}
	_0xa7966807953a18ee((*Global_1425371)[iLocal_99]->f_1, 0f);
	_0x15206e88ff7617df((*Global_1425371)[iLocal_99]->f_1, 0f);
	return 7;
}

void func_23()
{
	if (bLocal_100)
	{
		clear_ped_tasks(func_43(1), 1, 0);
		set_entity_invincible(func_43(1), false);
	}
	if (bLocal_101)
	{
		clear_ped_tasks(func_43(7), 1, 0);
		set_entity_invincible(func_43(7), false);
	}
	_0xe94b5e938619712e();
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	set_cinematic_mode_active(false);
	clear_ped_tasks(Global_35, 1, 0);
}

void func_24()
{
	bLocal_106 = false;
	_0xe94b5e938619712e();
	set_player_control(player_id(), true, 0, false);
	func_70(&(Global_1392581->f_3), 8);
	iLocal_103 = get_game_timer();
	func_36(func_37());
}

int func_25()
{
	_0xe94b5e938619712e();
	if (((get_game_timer() - iLocal_103) > 30000 || !is_ped_in_any_train(player_ped_id())) || _0x5407b7288d0478b7(player_ped_id(), 0) > 0)
	{
		return 8;
	}
	return -1;
}

void func_26()
{
}

void func_27()
{
}

int func_28()
{
	func_1();
	terminate_this_thread();
	return -1;
}

void func_29()
{
}

void func_30(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_71(uParam0);
}

bool func_31(bool bParam0)
{
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
	return false;
}

void func_32()
{
	if (Local_26.f_62 != 7 && Local_26.f_62 != 8)
	{
		if (Local_26.f_62 != -1)
		{
			set_disable_random_trains_this_frame(true);
			set_vehicle_density_multiplier_this_frame(0f);
			if (Local_26.f_62 != 0 && Local_26.f_62 != 1)
			{
				_0x702b75dc9d3ede56(true);
			}
			hide_hud_and_radar_this_frame();
			_0x5651516d947abc53();
		}
		disable_all_control_actions(0);
	}
}

void func_33(var uParam0)
{
	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc(uParam0->f_1[uParam0->f_62]->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc(uParam0->f_1[uParam0->f_62]->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62]);
		Call_Loc(uParam0->f_1[uParam0->f_62]->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_72(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_73(Global_1935630, 4194304);
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

char* func_35()
{
	return "FastTravel_Train_Ticket_Clouds_Sequence_Scene";
}

void func_36(char* sParam0)
{
	stop_audio_scene(sParam0);
}

char* func_37()
{
	return "FastTravel_Train_Ticket_Sequence_Scene";
}

void func_38(int iParam0)
{
	func_39(iParam0, 16);
}

void func_39(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (&Global_40.f_11029[iParam0] - (Global_40.f_11029[iParam0] && iParam1));
}

struct<4> func_40(bool bParam0)
{
	return func_76(1328661203, func_75(), -1591664384, bParam0);
}

int func_41(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_76(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_78(bParam6), &Var0, 0);
	return uVar4;
}

bool func_42(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_77(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_79(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_80(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var5 = { func_76(iParam0, Var0, Var0.f_4, bParam4) };
	return func_81(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_43(int iParam0)
{
	iParam0 = func_82(iParam0);
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

void func_44(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_55(iVar0, 4096);
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
	if (func_83() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_45()
{
	if (!func_84(&Global_1327479))
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
	func_85(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_46(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_86() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_84(iVar1) && !func_87(iVar1, iParam2)) && (!bParam3 || !func_88(iVar1))) && (!bParam4 || !func_89(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_90(iVar0);
			}
		}
		iVar0++;
	}
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_48()
{
	return Global_1894899->f_2;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

float func_50(int iParam0)
{
	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_91(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_92(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_92(iParam0) + 1;
	fVar6 = func_93(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_94(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_51(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_52(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			break;
		case 23:
			if (bParam1)
			{
				*uParam2 = { -1143f, -545.4f, 86.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1067.019f, -604.0603f, 78.0298f };
				*uParam3 = 0;
			}
			break;
		case 28:
			if (bParam1)
			{
				*uParam2 = { -1280f, 477.1f, 93.7f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1333.328f, 374.2152f, 94.938f };
				*uParam3 = 0;
			}
			break;
		case 69:
			if (bParam1)
			{
				*uParam2 = { 1529.7f, 477.9f, 90.2f };
				*uParam3 = 1;
			}
			else
			{
				*uParam2 = { 1529.595f, 405.6096f, 89.3616f };
				*uParam3 = 1;
			}
			break;
		case 76:
			if (bParam1)
			{
				*uParam2 = { -190.6f, 589.1f, 113.2f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -136.938f, 659.54f, 112.672f };
				*uParam3 = 0;
			}
			break;
		case 78:
			if (bParam1)
			{
				*uParam2 = { 2884.136f, 1211.772f, 44.32313f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2978.219f, 1344.3f, 42.941f };
				*uParam3 = 0;
			}
			break;
		case 105:
			if (bParam1)
			{
				*uParam2 = { 1196.2f, -1281.2f, 76.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 1307.31f, -1382.5f, 75.3375f };
				*uParam3 = 0;
			}
			break;
	}
}

void func_53(char* sParam0)
{
	start_audio_scene(sParam0);
}

int func_54(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	if (!_0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1))
	{
		return 0;
	}
	func_55(iParam0, 16);
	return _0x6e585a616abb8401((*Global_1425371)[iParam0]->f_1);
}

void func_55(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

Vector3 func_56(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_57(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

bool func_58(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_59(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

char* func_60(int iParam0)
{
	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_98(func_97(func_95(iParam0), func_96(), 1, 63));
	sVar2 = func_98(func_97(sVar0, sVar1, 1, 63));
	return sVar2;
}

int func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				case 5:
					return 750;
				case 78:
					return 1050;
				case 28:
					return 420;
				case 76:
					return 460;
				case 69:
					return 630;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				case 5:
					return 480;
				case 78:
					return 840;
				case 28:
					return 750;
				case 76:
					return 790;
				case 69:
					return 590;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				case 105:
					return 480;
				case 78:
					return 510;
				case 28:
					return 1250;
				case 76:
					return 1000;
				case 69:
					return 320;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				case 105:
					return 840;
				case 5:
					return 510;
				case 28:
					return 880;
				case 76:
					return 670;
				case 69:
					return 440;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				case 105:
					return 750;
				case 5:
					return 1250;
				case 78:
					return 880;
				case 76:
					return 360;
				case 69:
					return 920;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				case 105:
					return 790;
				case 5:
					return 1000;
				case 78:
					return 670;
				case 28:
					return 360;
				case 69:
					return 220;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				case 105:
					return 590;
				case 5:
					return 320;
				case 78:
					return 440;
				case 28:
					return 920;
				case 76:
					return 220;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_62(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_99(iParam0);
	if (bParam3)
	{
		func_100(iParam0, sParam1, iParam2);
	}
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_101(iParam1, iParam2);
	func_102(iParam1, iParam4);
	func_103(iParam1, iParam4);
	_0x2a374e6f0075ee81(func_104(iParam0), func_105(iParam1), iParam2, iParam3, iParam4);
}

float func_65(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_66(int iParam0, vector3 vParam1, var uParam4)
{
	fVar5 = 40f;
	if (!func_67(vParam1))
	{
		if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
		{
			iVar3 = _0x1180a2974d251b7b(get_vehicle_index_from_entity_index(iParam0));
			uVar4 = _0xaf787e081ac4a8ee(get_vehicle_index_from_entity_index(iParam0));
			if (iVar3 >= 0)
			{
				vVar0 = { _0xba958f68031ddbfc(uVar4, iVar3) };
				if (!func_67(vVar0))
				{
					*uParam4 = { func_106(vParam1, vVar0) };
					fVar5 = get_distance_between_coords(vVar0, vParam1, true);
				}
			}
		}
	}
	if (fVar5 > 100f)
	{
		fVar5 = 100f;
	}
	return fVar5;
}

bool func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 5:
			if (!bParam3)
			{
				*uParam1 = { 2755.556f, -1418.491f, 45.2074f };
			}
			else
			{
				*uParam1 = { 2756.556f, -1418.491f, 45.2074f };
			}
			*uParam2 = 145f;
			break;
		case 23:
			if (!bParam3)
			{
				*uParam1 = { -1101.923f, -574.2673f, 81.27955f };
			}
			else
			{
				*uParam1 = { -1102.923f, -574.2673f, 81.27955f };
			}
			*uParam2 = 0.85f;
			break;
		case 28:
			if (!bParam3)
			{
				*uParam1 = { -1314.075f, 387.0378f, 94.41888f };
			}
			else
			{
				*uParam1 = { -1315.075f, 387.0378f, 94.41888f };
			}
			*uParam2 = 72.5f;
			break;
		case 69:
			*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			if (!bParam3)
			{
				*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			}
			else
			{
				*uParam1 = { 1522.333f, 419.062f, 88.96367f };
			}
			*uParam2 = 4f;
			break;
		case 76:
			if (!bParam3)
			{
				*uParam1 = { -168.7946f, 646.7418f, 112.5389f };
			}
			else
			{
				*uParam1 = { -169.7946f, 646.7418f, 112.5389f };
			}
			*uParam2 = -122f;
			break;
		case 78:
			if (!bParam3)
			{
				*uParam1 = { 2920.64f, 1273.347f, 43.50124f };
			}
			else
			{
				*uParam1 = { 2921.64f, 1273.347f, 43.50124f };
			}
			*uParam2 = 2f;
			break;
		case 105:
			if (!bParam3)
			{
				*uParam1 = { 1256.509f, -1317.039f, 75.2567f };
			}
			else
			{
				*uParam1 = { 1257.509f, -1317.039f, 75.2567f };
			}
			*uParam2 = 2f;
			break;
	}
}

void func_69(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_107(Global_35) && is_player_teleport_active())
	{
	}
	if (func_108(iParam0))
	{
		if (func_109(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_110(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_110(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_110(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_110(iParam5, 129))
	{
		if (func_110(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_110(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_110(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_108(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_110(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_110(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_71(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_74(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

struct<4> func_75()
{
	return Var0;
}

struct<4> func_76(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_77(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_78(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_78(bool bParam0)
{
	if (func_83() == -1)
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

struct<5> func_79(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_40(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_111(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_76(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_112(bParam1) };
			if (bParam2 && func_113(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_114(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_114(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_115(iParam0, &Var5, 1728382685))
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
			Var0 = { func_116(bParam1) };
			switch (func_117(iParam0))
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
			if (func_118(iParam0, -1823706425))
			{
				Var0 = { func_76(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_118(iParam0, -1483207246))
			{
				Var0 = { func_76(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_119(Var0, &Var27, bParam1, 0))
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

bool func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_120(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_121(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_78(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_81(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_120(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_119(*uParam1, &Var0, bParam6, 0))
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
	if (!func_121(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_78(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_82(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_83()
{
	return Global_1572887->f_12;
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_85(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_86()
{
	return Global_1310750->f_16037;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_88(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	if (func_122(64) && func_123(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_89(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_90(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_84(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_124(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_91(int iParam0)
{
	iParam0 = func_82(iParam0);
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

int func_92(int iParam0)
{
	iParam0 = func_82(iParam0);
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

float func_93(int iParam0)
{
	iParam0 = func_82(iParam0);
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

float func_94(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

char* func_95(int iParam0)
{
	if (func_125(524288))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (func_126(23, 2))
		{
			return "0000_";
		}
		else if (func_126(2, 5))
		{
			return "0300_";
		}
		else if (func_126(5, 8))
		{
			return "0600_";
		}
		else if (func_126(8, 11))
		{
			return "0900_";
		}
		else if (func_126(11, 14))
		{
			return "1200_";
		}
		else if (func_126(14, 17))
		{
			return "1500_";
		}
		else if (func_126(17, 20))
		{
			return "1800_";
		}
		else if (func_126(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (func_127())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_127())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_127())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_127())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_96()
{
	iVar0 = func_128();
	if (func_125(524288))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case -1317052143:
		case 433385945:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return "04Storm";
		case -1721991356:
		case -1233681761:
		case -1148613331:
		case -702816767:
		case -416908843:
		case -273223690:
		case 212278652:
		case 603685163:
			return "03Clouds";
		case -173507739:
		case 821931868:
		case 1500834021:
		case 1632247697:
		case 1679686673:
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_97(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

char* func_98(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_99(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_129(1) < iParam0)
	{
		iParam0 = func_129(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_130(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_100(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_131(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_101(int iParam0, int iParam1)
{
	if (func_83() == 0)
	{
		return 1;
	}
	if (!func_77(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0] = iParam1;
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_133(func_130(19354810), iParam1);
	Global_20710[iVar0]->f_43 = (Global_20710[iVar0]->f_43 + iParam1);
	return 1;
}

int func_103(int iParam0, int iParam1)
{
	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0]->f_44 = (Global_20710[iVar0]->f_44 + iParam1);
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

Vector3 func_106(vector3 vParam0, vector3 vParam3)
{
	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

int func_107(var uParam0)
{
	return uParam0;
}

bool func_108(int iParam0)
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

bool func_109(int iParam0)
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

bool func_110(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_111(int iParam0)
{
	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_112(bool bParam0)
{
	iVar0 = func_78(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_76(923904168, func_40(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_76(923904168, func_40(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_76(923904168, func_40(bParam0), -740156546, 0);
}

bool func_113(int iParam0, bool bParam1)
{
	if (func_117(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_134(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_114(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_41(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_115(int iParam0, var uParam1, int iParam2)
{
	if (func_135(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_116(bool bParam0)
{
	iVar0 = func_78(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_76(271701509, func_40(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_76(271701509, func_40(bParam0), 12999093, 0);
}

int func_117(int iParam0)
{
	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_118(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_117(iParam0);
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

bool func_119(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_78(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_120(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_121(bool bParam0)
{
	if (func_83() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_78(bParam0));
}

bool func_122(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_123(int iParam0)
{
	return func_87(iParam0, Global_1310750->f_16072 | 64);
}

void func_124(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

bool func_125(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

int func_126(int iParam0, int iParam1)
{
	return func_136(get_clock_hours(), iParam0, iParam1);
}

bool func_127()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_128()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_129(int iParam0)
{
	return _money_get_cash_balance();
}

struct<2> func_130(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

var func_131(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_137(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_132(int iParam0)
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

void func_133(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_134(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return func_139(iParam0);
}

bool func_135(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_78(0);
	*uParam1 = { func_76(iParam0, func_112(0), iParam3, 0) };
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

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
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
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_137(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_138(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_139(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

