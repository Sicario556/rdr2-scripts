void __EntryFunction__()
{
	fLocal_17 = 1f;
	fLocal_18 = 1f;
	func_1();
	func_2(12);
	while (!func_3(&uLocal_19))
	{
		func_4(&uLocal_19);
		wait(0);
	}
	func_5(&uLocal_19);
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_6();
}

void func_1()
{
	register_script_with_audio(1);
	set_this_script_can_be_paused(false);
	set_this_script_can_remove_blips_created_by_any_script(true);
	network_set_script_is_safe_for_network_game();
	animpostfx_stop_all();
}

void func_2(int iParam0)
{
	iVar0 = 0;
	if (func_7() != -1)
	{
		iVar0 = 1;
	}
	Global_1900688->f_1 = 2;
	Global_1900688->f_2 = 0;
	Global_1900688->f_3 = iParam0;
	Global_1900688->f_7 = iVar0;
	func_8(Global_1900688->f_7, Global_1900688->f_3);
}

bool func_3(var uParam0)
{
	if (Global_1071686->f_28778 && func_10(func_9(), 0, 0))
	{
		return true;
	}
	if (func_11(1, 1))
	{
		return true;
	}
	uParam0->f_2 = player_id();
	uParam0->f_3 = player_ped_id();
	if (uParam0->f_4 >= 27)
	{
		return true;
	}
	if (func_12(4))
	{
		return true;
	}
	if (uParam0->f_5 & 1 != 0)
	{
		return true;
	}
	if (uParam0->f_5 & 4096 != 0)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			func_13(uParam0);
			break;
		case 1:
			func_14(uParam0);
			break;
		case 2:
			func_15(uParam0);
			break;
		case 3:
			func_16(uParam0);
			break;
		case 4:
			func_17(uParam0);
			break;
		case 5:
			func_18(uParam0);
			break;
		case 6:
			func_19(uParam0);
			break;
		case 7:
			func_20(uParam0);
			break;
		case 8:
			func_21(uParam0);
			break;
		case 9:
			func_22(uParam0);
			break;
		case 10:
			func_23(uParam0);
			break;
		case 11:
			func_24(uParam0);
			break;
		case 12:
			func_25(uParam0);
			break;
		case 13:
			func_26(uParam0);
			break;
		case 14:
			func_27(uParam0);
			break;
		case 15:
			func_28(uParam0);
			break;
		case 16:
			func_29(uParam0);
			break;
		case 17:
			func_30(uParam0);
			break;
		case 18:
			func_31(uParam0);
			break;
		case 19:
			func_32(uParam0);
			break;
		case 20:
			func_33(uParam0);
			break;
		case 21:
			func_34(uParam0);
			break;
		case 22:
			func_35(uParam0);
			break;
		case 23:
			func_36(uParam0);
			break;
		case 24:
			func_37(uParam0);
			break;
		case 25:
			func_38(uParam0);
			break;
		case 26:
			func_39(uParam0);
			break;
		case 27:
			break;
		default:
			func_40(uParam0, 0);
			break;
	}
	func_41(uParam0);
	func_42(&(uParam0->f_2905));
	if (!func_43(0))
	{
		_0x236905c700fdb54d();
	}
	if (func_44(uParam0))
	{
		_0x236905c700fdb54d();
	}
}

void func_5(var uParam0)
{
	func_45();
	if (func_11(1, 1) || func_12(4))
	{
		clear_bit(&(Global_1957959->f_1), 5);
	}
	if (func_46(uParam0, 4096))
	{
		func_47(0, -1);
		clear_bit(&(Global_1957959->f_1), 5);
	}
	else if (func_46(uParam0, 1))
	{
		func_47(40, uParam0->f_6);
		clear_bit(&(Global_1957959->f_1), 5);
	}
	func_48(uParam0, 0);
	func_49(1);
	if (func_50(uParam0->f_2432.f_6, 0))
	{
		remove_entity_from_audio_mix_group(uParam0->f_2432.f_6, 0f);
		func_51(&(uParam0->f_2432.f_6), 0);
	}
	if (func_50(uParam0->f_2432.f_13, 0))
	{
		remove_entity_from_audio_mix_group(uParam0->f_2432.f_13, 0f);
		func_51(&(uParam0->f_2432.f_13), 0);
	}
	func_52(uParam0);
	_0x9428447ded71fc7e("rdro_character_creator_scenes");
	_0x57a197ad83f66bbf(func_53());
	remove_clip_set(func_54(1));
	remove_clip_set(func_54(0));
	if (_text_database_has_loaded("CHARAUD"))
	{
		_text_database_delete("CHARAUD");
	}
	if (_text_database_has_loaded("NETCHAR"))
	{
		_text_database_delete("NETCHAR");
	}
	if (*uParam0)
	{
		fVar0 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
		func_55(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
		func_56();
		func_57(Global_34, 0, 0, 0, 0);
		func_58(0);
		Var1 = { func_60(889965687, func_59(1), 1034665895, 1) };
		func_61(Var1, 1);
		_0x65f040d91001ed4b(0);
		_0xbb51299166b844f3();
		_0x78335e12db0bf961(192);
		if (!_0xaaded99a6b268a27())
		{
			Var5 = 1;
			Var5.f_1.f_4 = 10;
			Var5[0] = 15;
			_0x63246a24f5747510(1, &Var5);
		}
		Global_1071686->f_28778 = 0;
		_0x704f92b3af20d857(1);
	}
	clear_override_weather();
	clear_timecycle_modifier();
	_close_app_by_hash_immediate(-2031856823);
}

void func_6()
{
	terminate_this_thread();
}

int func_7()
{
	return Global_1572887->f_13;
}

void func_8(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

struct<2> func_9()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_10(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_62(*Global_1051213) && !func_63(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_64(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_65(iParam3, 255))
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
	if (func_66())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_62(*Global_1051213))
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

bool func_11(bool bParam0, bool bParam1)
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

bool func_12(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_13(var uParam0)
{
	*uParam0 = _0xfbe782b3165ac8ec(-496459706);
	if (!uParam0->f_16)
	{
		uParam0->f_17 = get_game_timer();
		uParam0->f_16 = 0;
	}
	if (func_67(255))
	{
		if ((get_game_timer() - uParam0->f_17) > Global_1901947->f_308.f_270)
		{
			func_68(uParam0, 3087);
			return;
		}
		return;
	}
	if (!*uParam0)
	{
		func_69(16);
		if (!is_thread_active(uParam0->f_5546, false))
		{
			request_script_with_name_hash(881353596);
			if (has_script_with_name_hash_loaded(881353596))
			{
				iVar0 = func_70(Global_1071686->f_28341.f_2);
				uParam0->f_5546 = start_new_script_with_name_hash_and_args(881353596, &iVar0, 2, func_71(iVar0));
				set_script_with_name_hash_as_no_longer_needed(881353596);
			}
			return;
		}
		iVar2 = func_72(Global_1071686->f_28341.f_3);
		if (iVar2 == -1)
		{
			func_68(uParam0, 3000);
			return;
		}
		iVar3 = func_70(iVar2);
		if (iVar3 == -1)
		{
			func_68(uParam0, 3001);
			return;
		}
		(*Global_1835011)[iVar3]->f_8 = uParam0->f_5546;
	}
	else
	{
		if (func_73(0) == 24043185)
		{
			uParam0->f_2431 = 1;
		}
		else
		{
			uParam0->f_2431 = 0;
		}
		uParam0->f_1 = uParam0->f_2431;
	}
	func_74();
	if (func_75())
	{
		func_76();
	}
	func_77(493038497, 1);
	set_bit(&(Global_1957959->f_1), 5);
	func_49(0);
	func_78(1);
	func_79(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9));
	Global_1956200->f_1431.f_106 = 1745919061;
	_0xbe83cae8ed77a94f(1632247697);
	_network_clock_time_override(10, 0, 0, 0, true);
	set_timecycle_modifier("Online_Character_Editor");
	reserve_network_client_mission_peds(2 + 2);
	func_80(uParam0);
	_hide_hud_component(1779876696);
	request_anim_dict("MECH_LOCO@GENERIC@HANDCUFFED");
	if (!*uParam0)
	{
	}
	func_40(uParam0, 1);
}

void func_14(var uParam0)
{
	if ((get_game_timer() - uParam0->f_17) > Global_1901947->f_308.f_272)
	{
		func_68(uParam0, uParam0->f_18);
		return;
	}
	if (!_0x603ac35fd4602c76(uParam0->f_5434))
	{
		uParam0->f_18 = 3060;
		return;
	}
	if (!has_anim_dict_loaded("MECH_LOCO@GENERIC@HANDCUFFED"))
	{
		uParam0->f_18 = 3061;
		return;
	}
	if (!func_81(uParam0))
	{
		return;
	}
	if (!_0xd9130842d7226045("RDRO_Character_Creator_Sounds", 0))
	{
		uParam0->f_18 = 3082;
		return;
	}
	if (!_text_database_has_loaded("CHARAUD"))
	{
		_text_database_request("CHARAUD");
		return;
	}
	if (!_text_database_has_loaded("NETCHAR"))
	{
		_text_database_request("NETCHAR");
		return;
	}
	_datafile_register_query(uParam0->f_5434, -1110029229, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x):editor_config");
	_datafile_register_query(uParam0->f_5434, 333640739, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x):spawn_position");
	_datafile_register_query(uParam0->f_5434, -1881381860, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x):spawn_heading");
	_datafile_register_query(uParam0->f_5434, 26655820, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PED_DATA:model");
	_datafile_register_query(uParam0->f_5434, -2020161868, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PED_DATA:outfit");
	_datafile_register_query(uParam0->f_5434, -1696080648, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:ped_position");
	_datafile_register_query(uParam0->f_5434, 2129312788, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:ped_heading");
	_datafile_register_query(uParam0->f_5434, 1912210529, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:cam_position");
	_datafile_register_query(uParam0->f_5434, -1232323388, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:cam_rotation");
	_datafile_register_query(uParam0->f_5434, -750349293, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:cam_fov");
	_datafile_register_query(uParam0->f_5434, 1364639747, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/LINEUP:cam_focus");
	_datafile_register_query(uParam0->f_5434, -287215609, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PORTRAIT:cam_pos");
	_datafile_register_query(uParam0->f_5434, -2113427319, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PORTRAIT:cam_rot");
	_datafile_register_query(uParam0->f_5434, -969814905, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PORTRAIT:cam_fov");
	_datafile_register_query(uParam0->f_5434, -192497057, "NET_CHAR_CREATOR_DATA/PED_PRESET_DATA/PED_PRESET(id=%x)/PORTRAIT:cam_focus");
	_datafile_register_query(uParam0->f_5434, -478911824, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_GUARD_DATA:model");
	_datafile_register_query(uParam0->f_5434, 2084668739, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_GUARD_DATA:outfit");
	_datafile_register_query(uParam0->f_5434, -1964132530, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_GUARD_DATA:ped_position");
	_datafile_register_query(uParam0->f_5434, -2033706708, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_GUARD_DATA:ped_heading");
	_datafile_register_query(uParam0->f_5434, 780182255, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_SHRFF_DATA:model");
	_datafile_register_query(uParam0->f_5434, -1373930847, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_SHRFF_DATA:outfit");
	_datafile_register_query(uParam0->f_5434, 2110954385, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_SHRFF_DATA:ped_position");
	_datafile_register_query(uParam0->f_5434, -89029215, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/PED_SHRFF_DATA:ped_heading");
	_datafile_register_query(uParam0->f_5434, 1699889796, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/INIT_CAM:cam_position");
	_datafile_register_query(uParam0->f_5434, -1682488936, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/INIT_CAM:cam_rotation");
	_datafile_register_query(uParam0->f_5434, -565015459, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/INIT_CAM:cam_fov");
	_datafile_register_query(uParam0->f_5434, -163893551, "NET_CHAR_CREATOR_DATA/CREATOR_MOCAP_DATA/INIT_CAM:cam_focus");
	_datafile_register_query(uParam0->f_5434, 1052462664, "NET_CHAR_CREATOR_DATA/CREATOR_AWARD_DATA/MALE_AWARDS/ITEM(id=%x):conditional");
	_datafile_register_query(uParam0->f_5434, 977189147, "NET_CHAR_CREATOR_DATA/CREATOR_AWARD_DATA/FEMALE_AWARDS/ITEM(id=%x):conditional");
	_datafile_register_query(uParam0->f_5434, -115636569, "NET_CHAR_CREATOR_DATA/CREATOR_AWARD_DATA/SHARED_AWARDS/ITEM(id=%x):conditional");
	Var5 = uParam0->f_5434;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		Var5.f_3 = func_82(iVar10);
		if (Var5.f_3 == 0)
		{
			func_68(uParam0, 3002);
			return;
		}
		Var5.f_2 = -1110029229;
		if (!_datafile_get_hash(&uVar0, &Var5))
		{
			func_68(uParam0, 3003);
			return;
		}
		uParam0->f_19[iVar10] = uVar0;
		if (&uParam0->f_19[iVar10] == 0)
		{
			func_68(uParam0, 3004);
			return;
		}
		Var5.f_2 = 333640739;
		if (!_datafile_get_vector(&vVar1, &Var5))
		{
			func_68(uParam0, 3005);
			return;
		}
		uParam0->f_19[iVar10]->f_1 = { vVar1 };
		if (func_83(uParam0->f_19[iVar10]->f_1))
		{
			func_68(uParam0, 3006);
			return;
		}
		Var5.f_2 = -1881381860;
		if (!_datafile_get_float(&uVar4, &Var5))
		{
			func_68(uParam0, 3007);
			return;
		}
		uParam0->f_19[iVar10]->f_4 = uVar4;
		Var5.f_2 = 26655820;
		if (!_datafile_get_hash(&uVar0, &Var5))
		{
			func_68(uParam0, 3008);
			return;
		}
		uParam0->f_19[iVar10]->f_5 = uVar0;
		if (uParam0->f_19[iVar10]->f_5 == -171876066)
		{
			uParam0->f_19[iVar10]->f_8.f_647 = 2026485318;
		}
		else if (uParam0->f_19[iVar10]->f_5 == -1481695040)
		{
			uParam0->f_19[iVar10]->f_8.f_647 = 24043185;
		}
		else
		{
			func_68(uParam0, 3009);
			return;
		}
		request_model(uParam0->f_19[iVar10]->f_5, false);
		Var5.f_2 = -2020161868;
		if (!_datafile_get_hash(&uVar0, &Var5))
		{
			func_68(uParam0, 3010);
			return;
		}
		uParam0->f_19[iVar10]->f_6 = uVar0;
		Var5.f_2 = -1696080648;
		if (!_datafile_get_vector(&(uParam0->f_19[iVar10]->f_1181), &Var5))
		{
			func_68(uParam0, 3011);
			return;
		}
		if (func_83(uParam0->f_19[iVar10]->f_1181))
		{
			func_68(uParam0, 3012);
			return;
		}
		Var5.f_2 = 2129312788;
		if (!_datafile_get_float(&(uParam0->f_19[iVar10]->f_1184), &Var5))
		{
			func_68(uParam0, 3013);
			return;
		}
		Var5.f_2 = 1912210529;
		if (!_datafile_get_vector(&(uParam0->f_19[iVar10]->f_1185), &Var5))
		{
			func_68(uParam0, 3014);
			return;
		}
		if (func_83(uParam0->f_19[iVar10]->f_1185))
		{
			func_68(uParam0, 3015);
			return;
		}
		Var5.f_2 = -1232323388;
		if (!_datafile_get_vector(&(uParam0->f_19[iVar10]->f_1188), &Var5))
		{
			func_68(uParam0, 3016);
			return;
		}
		if (func_83(uParam0->f_19[iVar10]->f_1188))
		{
			func_68(uParam0, 3017);
			return;
		}
		Var5.f_2 = -750349293;
		if (!_datafile_get_float(&(uParam0->f_19[iVar10]->f_1191), &Var5))
		{
			func_68(uParam0, 3018);
			return;
		}
		Var5.f_2 = 1364639747;
		if (!_datafile_get_float(&(uParam0->f_19[iVar10]->f_1192), &Var5))
		{
			func_68(uParam0, 3019);
			return;
		}
		Var5.f_2 = -287215609;
		if (!_datafile_get_vector(&(uParam0->f_19[iVar10]->f_1193), &Var5))
		{
			func_68(uParam0, 3020);
			return;
		}
		if (func_83(uParam0->f_19[iVar10]->f_1193))
		{
			func_68(uParam0, 3021);
			return;
		}
		Var5.f_2 = -2113427319;
		if (!_datafile_get_vector(&(uParam0->f_19[iVar10]->f_1196), &Var5))
		{
			func_68(uParam0, 3022);
			return;
		}
		if (func_83(uParam0->f_19[iVar10]->f_1196))
		{
			func_68(uParam0, 3023);
			return;
		}
		Var5.f_2 = -969814905;
		if (!_datafile_get_float(&(uParam0->f_19[iVar10]->f_1199), &Var5))
		{
			func_68(uParam0, 3024);
			return;
		}
		Var5.f_2 = -192497057;
		if (!_datafile_get_float(&(uParam0->f_19[iVar10]->f_1200), &Var5))
		{
			func_68(uParam0, 3025);
			return;
		}
		iVar10++;
	}
	Var5.f_2 = -478911824;
	if (!_datafile_get_hash(&uVar0, &Var5))
	{
		func_68(uParam0, 3026);
		return;
	}
	uParam0->f_2432.f_4 = uVar0;
	request_model(uParam0->f_2432.f_4, false);
	Var5.f_2 = 2084668739;
	if (!_datafile_get_hash(&uVar0, &Var5))
	{
		func_68(uParam0, 3027);
		return;
	}
	uParam0->f_2432.f_5 = uVar0;
	_request_metaped_outfit(uParam0->f_2432.f_4, uParam0->f_2432.f_5);
	Var5.f_2 = -1964132530;
	if (!_datafile_get_vector(&(uParam0->f_2432), &Var5))
	{
		func_68(uParam0, 3028);
		return;
	}
	if (func_83(uParam0->f_2432))
	{
		func_68(uParam0, 3029);
		return;
	}
	Var5.f_2 = -2033706708;
	if (!_datafile_get_float(&(uParam0->f_2432.f_3), &Var5))
	{
		func_68(uParam0, 3030);
		return;
	}
	Var5.f_2 = 780182255;
	if (!_datafile_get_hash(&uVar0, &Var5))
	{
		func_68(uParam0, 3031);
		return;
	}
	uParam0->f_2432.f_11 = uVar0;
	request_model(uParam0->f_2432.f_11, false);
	Var5.f_2 = -1373930847;
	if (!_datafile_get_hash(&uVar0, &Var5))
	{
		func_68(uParam0, 3032);
		return;
	}
	uParam0->f_2432.f_12 = uVar0;
	_request_metaped_outfit(uParam0->f_2432.f_11, uParam0->f_2432.f_12);
	Var5.f_2 = 2110954385;
	if (!_datafile_get_vector(&(uParam0->f_2432.f_7), &Var5))
	{
		func_68(uParam0, 3033);
		return;
	}
	if (func_83(uParam0->f_2432.f_7))
	{
		func_68(uParam0, 3034);
		return;
	}
	Var5.f_2 = -89029215;
	if (!_datafile_get_float(&(uParam0->f_2432.f_10), &Var5))
	{
		func_68(uParam0, 3035);
		return;
	}
	Var5.f_2 = 1699889796;
	if (!_datafile_get_vector(&(uParam0->f_2432.f_14), &Var5))
	{
		func_68(uParam0, 3036);
		return;
	}
	if (func_83(uParam0->f_2432.f_14))
	{
		func_68(uParam0, 3037);
		return;
	}
	Var5.f_2 = -1682488936;
	if (!_datafile_get_vector(&(uParam0->f_2432.f_17), &Var5))
	{
		func_68(uParam0, 3038);
		return;
	}
	if (func_83(uParam0->f_2432.f_17))
	{
		func_68(uParam0, 3039);
		return;
	}
	Var5.f_2 = -565015459;
	if (!_datafile_get_float(&(uParam0->f_2432.f_20), &Var5))
	{
		func_68(uParam0, 3040);
		return;
	}
	Var5.f_2 = -163893551;
	if (!_datafile_get_float(&(uParam0->f_2432.f_21), &Var5))
	{
		func_68(uParam0, 3041);
		return;
	}
	set_ambient_zone_list_state("AZL_RDRO_Character_Creation_Area", true, true);
	set_ambient_zone_list_state("AZL_RDRO_Character_Creation_Area_Other_Zones_Disable", false, true);
	func_84("MP_CHARACTER_CREATION_START", 0);
	_0x5199405eabfbd7f0("RespawnPulse01");
	if (func_85(&(uParam0->f_2905)))
	{
		func_40(uParam0, 2);
	}
}

void func_15(var uParam0)
{
	if (!func_46(uParam0, 2))
	{
		if (func_67(255))
		{
			if ((get_game_timer() - uParam0->f_17) > Global_1901947->f_308.f_270)
			{
				func_68(uParam0, 3088);
				return;
			}
			return;
		}
		if (!uParam0->f_16)
		{
			uParam0->f_17 = get_game_timer();
			uParam0->f_16 = 1;
		}
		if ((get_game_timer() - uParam0->f_17) > Global_1901947->f_308.f_272)
		{
			func_68(uParam0, uParam0->f_18);
			return;
		}
		if (is_entity_dead(uParam0->f_3))
		{
			resurrect_ped(uParam0->f_3);
		}
		if (!_is_imap_active(183712523))
		{
			uParam0->f_18 = 3083;
			return;
		}
		if (!_is_imap_active(-1699673416))
		{
			uParam0->f_18 = 3084;
			return;
		}
		if (!_is_imap_active(1679934574))
		{
			uParam0->f_18 = 3085;
			return;
		}
		_set_entity_coords_and_heading(uParam0->f_3, func_86(), func_87(), true, false, true);
		set_entity_visible(uParam0->f_3, false);
		set_player_invincible(get_player_index(), true);
		_0x513f8aa5bf2f17cf(func_86(), 50f, 4);
		func_88(&(uParam0->f_2432.f_26), 0);
		func_89(uParam0, 2);
	}
	if (!_0xcf45df50c7775f2a())
	{
		_0x513f8aa5bf2f17cf(func_86(), 50f, 0);
		return;
	}
	if (!_0x0909f71b5c070797() && !func_90(&(uParam0->f_2432.f_26), 20f))
	{
		return;
	}
	if (func_90(&(uParam0->f_2432.f_26), 20f))
	{
		func_68(uParam0, 3086);
	}
	func_91(&(uParam0->f_2432.f_26));
	_0x5a8b01199c3e79c3();
	clear_area(func_86(), 50f, 16384);
	func_40(uParam0, 3);
}

void func_16(var uParam0)
{
	if (func_44(uParam0))
	{
		func_40(uParam0, 4);
		return;
	}
	if (!has_model_loaded(uParam0->f_2432.f_4))
	{
		return;
	}
	if (!has_model_loaded(uParam0->f_2432.f_11))
	{
		return;
	}
	if (!can_register_mission_peds(4))
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_2432.f_6))
	{
		uParam0->f_2432.f_6 = func_92(uParam0->f_2432.f_4, uParam0->f_2432, uParam0->f_2432.f_3, 0, 1, 1, 0, 1);
		_set_ped_body_component(uParam0->f_2432.f_6, uParam0->f_2432.f_5);
		_update_ped_variation(uParam0->f_2432.f_6, false, true, true, true, false);
		stop_ped_speaking(uParam0->f_2432.f_6, true);
		add_entity_to_audio_mix_group(uParam0->f_2432.f_6, "rdro_character_creator_guard_group", 0f);
		func_93(uParam0->f_2432.f_6, 0);
		func_94(&(uParam0->f_2432.f_29), uParam0->f_2432.f_6, "CHAR_DEPMARSHAL", 0);
		_give_weapon_to_ped_2(uParam0->f_2432.f_6, -183018591, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		return;
	}
	freeze_entity_position(uParam0->f_2432.f_6, true);
	if (!does_entity_exist(uParam0->f_2432.f_13))
	{
		uParam0->f_2432.f_13 = func_92(uParam0->f_2432.f_11, uParam0->f_2432.f_7, uParam0->f_2432.f_10, 0, 1, 1, 0, 1);
		_set_ped_body_component(uParam0->f_2432.f_13, uParam0->f_2432.f_12);
		_update_ped_variation(uParam0->f_2432.f_13, false, true, true, true, false);
		stop_ped_speaking(uParam0->f_2432.f_13, true);
		add_entity_to_audio_mix_group(uParam0->f_2432.f_13, "rdro_character_creator_guard_group", 0f);
		func_93(uParam0->f_2432.f_13, 0);
		func_94(&(uParam0->f_2432.f_29), uParam0->f_2432.f_13, "BLW_Police_Chief", 0);
		return;
	}
	freeze_entity_position(uParam0->f_2432.f_13, true);
	func_40(uParam0, 4);
}

void func_17(var uParam0)
{
	if (!has_model_loaded(uParam0->f_19[uParam0->f_2431]->f_5))
	{
		return;
	}
	if (!can_register_mission_peds(1))
	{
		return;
	}
	uParam0->f_19[uParam0->f_2431]->f_1201 = func_92(uParam0->f_19[uParam0->f_2431]->f_5, uParam0->f_19[uParam0->f_2431]->f_1, uParam0->f_19[uParam0->f_2431]->f_4, 0, 1, 1, 0, 1);
	if (!does_entity_exist(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		func_68(uParam0, 3042);
		return;
	}
	freeze_entity_position(uParam0->f_19[uParam0->f_2431]->f_1201, true);
	uParam0->f_19[uParam0->f_2431]->f_8.f_644 = uParam0->f_19[uParam0->f_2431]->f_4;
	clear_ped_tasks_immediately(uParam0->f_19[uParam0->f_2431]->f_1201, false, true);
	if (is_ped_model(uParam0->f_19[uParam0->f_2431]->f_1201, -171876066))
	{
		sVar0 = func_95();
	}
	else
	{
		sVar0 = func_96();
	}
	task_play_anim(uParam0->f_19[uParam0->f_2431]->f_1201, sVar0, "idle", 1000f, -4f, -1, 8193, 0f, false, 0, false, 0, false);
	if (func_44(uParam0))
	{
		func_40(uParam0, 5);
	}
	else
	{
		uParam0->f_2431++;
		if (uParam0->f_2431 >= 2)
		{
			uParam0->f_2431 = 0;
			func_40(uParam0, 5);
		}
	}
}

void func_18(var uParam0)
{
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	set_entity_invincible(uParam0->f_19[uParam0->f_2431]->f_1201, true);
	_0x370a973252741ac4(uParam0->f_19[uParam0->f_2431]->f_1201, 0);
	func_97(uParam0->f_19[uParam0->f_2431]->f_8.f_647);
	if (func_44(uParam0))
	{
		iVar0 = &Global_1952637->f_1675.f_1[34];
		if (func_98(iVar0) == 0 && !func_99(iVar0, -166674229))
		{
			func_100(527198966, uParam0->f_19[uParam0->f_2431]->f_1201, 1, 1);
		}
		else
		{
			func_101(&(Global_1952637->f_2032));
			func_102(uParam0->f_19[uParam0->f_2431]->f_1201, 1378879298, 1, 0, 0, 8);
			func_103(&(Global_1952637->f_1556));
			func_89(uParam0, 2097152);
		}
		func_40(uParam0, 6);
	}
	else
	{
		func_104(uParam0->f_19[uParam0->f_2431]->f_1201, uParam0->f_19[uParam0->f_2431]->f_6, 1);
		uParam0->f_19[uParam0->f_2431]->f_8.f_1054 = { Global_1952637->f_1556 };
		uParam0->f_2431++;
		if (uParam0->f_2431 >= 2)
		{
			uParam0->f_2431 = 0;
			func_40(uParam0, 6);
		}
	}
}

void func_19(var uParam0)
{
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	if (func_44(uParam0))
	{
		func_105(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2431]->f_8), &(uParam0->f_19[uParam0->f_2431]->f_8.f_648), &(uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9), uParam0->f_19[uParam0->f_2431]->f_1201, &(uParam0->f_19[uParam0->f_2431]));
		func_40(uParam0, 7);
		iVar0 = func_106(is_ped_male(uParam0->f_19[uParam0->f_2431]->f_1201), 2107046455, -1029951690);
		if (!func_107(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2431]->f_8), iVar0, uParam0->f_19[uParam0->f_2431]->f_1201, 1))
		{
			return;
		}
		return;
	}
	func_108(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2431]->f_8), &(uParam0->f_19[uParam0->f_2431]->f_8.f_648), &(uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9), uParam0->f_19[uParam0->f_2431]->f_1201, &(uParam0->f_19[uParam0->f_2431]), 0, 0, 1);
	iVar1 = func_106(is_ped_male(uParam0->f_19[uParam0->f_2431]->f_1201), 2107046455, -1029951690);
	if (!func_107(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2431]->f_8), iVar1, uParam0->f_19[uParam0->f_2431]->f_1201, 1))
	{
		return;
	}
	uParam0->f_2431++;
	if (uParam0->f_2431 >= 2)
	{
		uParam0->f_2431 = 0;
		func_40(uParam0, 7);
	}
}

void func_20(var uParam0)
{
	if (func_109())
	{
		return;
	}
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	if (!func_110(&(uParam0->f_19[uParam0->f_2431]->f_8.f_648), &(uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9)))
	{
		return;
	}
	if (func_44(uParam0))
	{
		func_40(uParam0, 8);
	}
	else
	{
		uParam0->f_2431++;
		if (uParam0->f_2431 >= 2)
		{
			uParam0->f_2431 = 0;
			func_40(uParam0, 8);
		}
	}
}

void func_21(var uParam0)
{
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	if (!uParam0->f_19[uParam0->f_2431]->f_1204)
	{
		iVar0 = func_111(&(uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9), 299749022);
		fVar1 = (to_float((uParam0->f_19[uParam0->f_2431]->f_8.f_474.f_9 - 18)) / to_float(42));
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9[iVar0]->f_13 = fVar1;
			func_112(&(uParam0->f_19[uParam0->f_2431]->f_8.f_648), uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9[iVar0], 0);
		}
		if (!func_113(uParam0->f_19[uParam0->f_2431]->f_1201, &(uParam0->f_19[uParam0->f_2431]->f_8.f_648)))
		{
			return;
		}
		_update_ped_variation(uParam0->f_19[uParam0->f_2431]->f_1201, false, true, true, true, false);
		uParam0->f_19[uParam0->f_2431]->f_1204 = 1;
	}
	if (func_109())
	{
		return;
	}
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	if (func_44(uParam0))
	{
		func_40(uParam0, 10);
	}
	else
	{
		uParam0->f_2431++;
		func_40(uParam0, 9);
	}
}

void func_22(var uParam0)
{
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	if (!uParam0->f_19[uParam0->f_2431]->f_1204)
	{
		iVar0 = func_111(&(uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9), 299749022);
		fVar1 = (to_float((uParam0->f_19[uParam0->f_2431]->f_8.f_474.f_9 - 18)) / to_float(42));
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9[iVar0]->f_13 = fVar1;
			func_112(&(uParam0->f_19[uParam0->f_2431]->f_8.f_648), uParam0->f_19[uParam0->f_2431]->f_8.f_648.f_9[iVar0], 0);
		}
		if (!func_113(uParam0->f_19[uParam0->f_2431]->f_1201, &(uParam0->f_19[uParam0->f_2431]->f_8.f_648)))
		{
			return;
		}
		func_114(5, 0, 1, uParam0->f_19[uParam0->f_2431]->f_1201, 0);
		uParam0->f_19[uParam0->f_2431]->f_1204 = 1;
	}
	if (func_109())
	{
		return;
	}
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_19[uParam0->f_2431]->f_1201))
	{
		return;
	}
	uParam0->f_2431++;
	if (uParam0->f_2431 >= 2)
	{
		uParam0->f_2431 = 0;
		func_40(uParam0, 10);
	}
}

void func_23(var uParam0)
{
	if (!does_cam_exist(uParam0->f_2432.f_22))
	{
		uParam0->f_2432.f_22 = create_camera(26379945, false);
	}
	if (_is_loading_screen_active())
	{
		shutdown_loading_screen();
		return;
	}
	set_anim_scene_entity(uParam0->f_2564, "Male_MP", uParam0->f_19[0]->f_1201, 0);
	set_anim_scene_entity(uParam0->f_2564, "Female_MP", uParam0->f_19[1]->f_1201, 0);
	set_anim_scene_entity(uParam0->f_2564, "Deputy", uParam0->f_2432.f_6, 0);
	set_anim_scene_entity(uParam0->f_2564, "Sheriff", uParam0->f_2432.f_13, 0);
	start_anim_scene(uParam0->f_2564);
	if (func_46(uParam0, 8192))
	{
		set_cam_coord(uParam0->f_2432.f_22, uParam0->f_2432.f_14);
		set_cam_rot(uParam0->f_2432.f_22, uParam0->f_2432.f_17, 2);
		set_cam_fov(uParam0->f_2432.f_22, uParam0->f_2432.f_20);
		_0x11f32bb61b756732(uParam0->f_2432.f_22, uParam0->f_2432.f_21);
		set_cam_active(uParam0->f_2432.f_22, true);
		render_script_cams(true, false, 3000, true, false, 0);
		_set_anim_scene_playback_list_bool(uParam0->f_2564, "pl_start_idle", true);
	}
	else
	{
		_set_anim_scene_playback_list_bool(uParam0->f_2564, "pl_intro", true);
	}
	func_40(uParam0, 12);
}

void func_24(var uParam0)
{
	disable_all_control_actions(0);
	enable_control_action(0, -668070958, true);
	if (uParam0->f_2430 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	switch (uParam0->f_2587)
	{
		case 0:
			if (func_115(uParam0, 0))
			{
				set_anim_scene_entity(uParam0->f_2564, "Male_MP", uParam0->f_19[0]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Female_MP", uParam0->f_19[1]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Deputy", uParam0->f_2432.f_6, 0);
				set_anim_scene_entity(uParam0->f_2564, "Sheriff", uParam0->f_2432.f_13, 0);
				if (!_is_anim_scene_started(uParam0->f_2564, false))
				{
					start_anim_scene(uParam0->f_2564);
				}
				_set_anim_scene_playback_list_bool(uParam0->f_2564, func_116(bVar0), true);
				func_117(0, 0);
				func_118(uParam0, "CHAR_BACKSELECT");
				func_119(uParam0, 1);
			}
			break;
		case 1:
			func_119(uParam0, 2);
			break;
		case 2:
			if (has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 931807363))
			{
				if (!does_cam_exist(uParam0->f_19[uParam0->f_2430]->f_1202))
				{
					uParam0->f_19[uParam0->f_2430]->f_1202 = create_camera(26379945, false);
				}
				set_cam_coord(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1185);
				set_cam_rot(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1188, 2);
				set_cam_fov(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1191);
				_0x11f32bb61b756732(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1192);
				set_cam_active(uParam0->f_19[uParam0->f_2430]->f_1202, true);
				render_script_cams(true, false, 3000, true, false, 0);
				func_119(uParam0, 3);
			}
			break;
		case 3:
			if (_0x8d81e7824b7753f7(uParam0->f_2564, "s_start_idle", 1))
			{
				func_120(&(uParam0->f_2432.f_127));
				func_119(uParam0, 0);
				func_40(uParam0, 12);
			}
			break;
	}
}

void func_25(var uParam0)
{
	if (*uParam0)
	{
		func_40(uParam0, 13);
	}
	if (!*uParam0)
	{
		if (!is_screen_faded_in())
		{
			if (!func_46(uParam0, 131072))
			{
				func_89(uParam0, 131072);
				return;
			}
			else
			{
				_0xa565fac215cbc77d();
				do_screen_fade_in(0);
				animpostfx_play("RespawnPulse01");
			}
		}
	}
	disable_all_control_actions(0);
	enable_control_action(0, -668070958, true);
	if (_0x8d81e7824b7753f7(uParam0->f_2564, "s_start_idle", 1))
	{
		if (!func_46(uParam0, 8192))
		{
			func_48(uParam0, 1);
			func_122(uParam0, func_121(2), 0);
		}
		_0x6339c1ea3979b5f7("select_gender", "rdro_character_creator_scenes");
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_123(uParam0->f_2566[iVar0], is_ped_model(uParam0->f_19[iVar0]->f_1201, -171876066));
			iVar0++;
		}
		func_124(uParam0, 8192);
		animpostfx_stop("RespawnPulse01");
		func_40(uParam0, 13);
		func_120(&(uParam0->f_2432.f_127));
	}
	else if (!func_46(uParam0, 8192) && has_anim_event_fired(uParam0->f_2432.f_13, 931807363))
	{
		set_cam_coord(uParam0->f_2432.f_22, uParam0->f_2432.f_14);
		set_cam_rot(uParam0->f_2432.f_22, uParam0->f_2432.f_17, 2);
		set_cam_fov(uParam0->f_2432.f_22, uParam0->f_2432.f_20);
		_0x11f32bb61b756732(uParam0->f_2432.f_22, uParam0->f_2432.f_21);
		set_cam_active(uParam0->f_2432.f_22, true);
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

void func_26(var uParam0)
{
	if (*uParam0)
	{
		if (!func_85(&(uParam0->f_2905)))
		{
			return;
		}
		uParam0->f_3 = get_player_ped(uParam0->f_2);
		if (is_ped_model(uParam0->f_3, -171876066))
		{
			uParam0->f_1 = 0;
			uParam0->f_2430 = 0;
		}
		else
		{
			uParam0->f_1 = 1;
			uParam0->f_2430 = 1;
		}
		if (!func_125(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]), uParam0->f_19[uParam0->f_2430]->f_1201, &(uParam0->f_19[uParam0->f_2430]->f_8)))
		{
			func_68(uParam0, 3044);
			return;
		}
		func_124(uParam0, 512);
		func_40(uParam0, 15);
		return;
	}
	if (!func_85(&(uParam0->f_2905)))
	{
		return;
	}
	if (!func_126(2000))
	{
		return;
	}
	if (func_90(&(uParam0->f_2432.f_127), 10f) || (func_90(&(uParam0->f_2432.f_127), (10f / 2f)) && !func_46(uParam0, 16384)))
	{
		func_118(uParam0, "CHAR_IDLE");
		func_120(&(uParam0->f_2432.f_127));
		func_89(uParam0, 16384);
	}
	disable_all_control_actions(0);
	enable_control_action(0, -1384133541, true);
	enable_control_action(0, 1710877787, true);
	enable_control_action(0, 1138488863, true);
	enable_control_action(0, 814057702, true);
	enable_control_action(0, -668070958, true);
	enable_control_action(0, -186823577, true);
	enable_control_action(0, 217814591, true);
	enable_control_action(0, -1122134879, true);
	enable_control_action(0, -933516515, true);
	bVar0 = is_cam_interpolating(uParam0->f_19[uParam0->f_2430]->f_1202);
	if (uParam0->f_2600 == 0)
	{
		uParam0->f_2600 = func_127("CHAR_CREATOR_OBJECTIVE_MESSAGE_CHOOSE_CHARACTER", -1, 0, 0, 1);
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		func_128(uParam0->f_19[iVar1]->f_1201, uParam0->f_2566[iVar1]);
		iVar1++;
	}
	if (func_46(uParam0, 32))
	{
		if (!func_125(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]), uParam0->f_19[uParam0->f_2430]->f_1201, &(uParam0->f_19[uParam0->f_2430]->f_8)))
		{
			func_68(uParam0, 3043);
			return;
		}
		func_124(uParam0, 32);
		func_40(uParam0, 15);
		return;
	}
	if (!func_46(uParam0, 512))
	{
		_0xac84686c06184b0d("select_gender", "rdro_character_creator_scenes");
		func_89(uParam0, 512);
	}
	if (bVar0)
	{
		disable_all_control_actions(0);
		enable_control_action(0, -668070958, true);
		func_129(&(uParam0->f_2597), 1, 1);
		func_129(&(uParam0->f_2598), 1, 1);
		func_129(&(uParam0->f_2599), 1, 1);
	}
	else
	{
		if (func_130(uParam0->f_2599))
		{
			if (func_131(uParam0->f_2599, 1))
			{
				func_129(&(uParam0->f_2597), 1, 1);
				func_129(&(uParam0->f_2598), 1, 1);
				func_129(&(uParam0->f_2599), 1, 1);
				play_sound_frontend("BACK", "RDRO_Character_Creator_Sounds", true, 0);
				func_40(uParam0, 14);
				return;
			}
			else if (func_132(uParam0->f_2599, 1))
			{
				func_133(uParam0->f_2599, 1, 1);
				func_133(uParam0->f_2597, 0, 1);
				func_133(uParam0->f_2598, 0, 1);
			}
			else
			{
				func_133(uParam0->f_2599, 0, 1);
				func_133(uParam0->f_2597, 1, 1);
				func_133(uParam0->f_2598, 1, 1);
			}
		}
		else
		{
			uParam0->f_2599 = func_134("IB_QUITTING", 814057702, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_133(uParam0->f_2599, 0, 1);
		}
		if (func_130(uParam0->f_2597))
		{
			iVar2 = uParam0->f_2430;
			if (func_135(uParam0->f_2597, 1))
			{
				if (uParam0->f_2430 == 0)
				{
					iVar2++;
					if (iVar2 > 1)
					{
						iVar2 = 1;
					}
					play_sound_frontend("gender_right", "RDRO_Character_Creator_Sounds", true, 0);
					func_129(&(uParam0->f_2597), 1, 1);
					func_129(&(uParam0->f_2598), 1, 1);
					func_129(&(uParam0->f_2599), 1, 1);
				}
				else if (uParam0->f_2430 == 1)
				{
					iVar2 = (iVar2 - 1);
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					play_sound_frontend("gender_left", "RDRO_Character_Creator_Sounds", true, 0);
					func_129(&(uParam0->f_2597), 1, 1);
					func_129(&(uParam0->f_2598), 1, 1);
					func_129(&(uParam0->f_2599), 1, 1);
				}
			}
			func_122(uParam0, iVar2, 0);
		}
		else if (uParam0->f_2430 == 0)
		{
			uParam0->f_2597 = func_134("NETCHAR_UC_SELECT_CHARACTER", 1710877787, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		}
		else if (uParam0->f_2430 == 1)
		{
			uParam0->f_2597 = func_134("NETCHAR_UC_SELECT_CHARACTER", -1384133541, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		}
		if (func_130(uParam0->f_2598))
		{
			if (func_135(uParam0->f_2598, 0))
			{
				func_129(&(uParam0->f_2597), 1, 1);
				func_129(&(uParam0->f_2598), 1, 1);
				func_129(&(uParam0->f_2599), 1, 1);
				play_sound_frontend("SELECT", "RDRO_Character_Creator_Sounds", true, 0);
				func_117(0, 0);
				func_118(uParam0, "CHAR_CHOOSE");
				func_136(uParam0);
				func_137(uParam0, 2, uParam0->f_2430);
				func_137(uParam0, 1, uParam0->f_2430);
				if (!func_125(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]), uParam0->f_19[uParam0->f_2430]->f_1201, &(uParam0->f_19[uParam0->f_2430]->f_8)))
				{
					func_68(uParam0, 3044);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					func_123(uParam0->f_2566[iVar1], uParam0->f_2430 == 0);
					iVar1++;
				}
				func_124(uParam0, 512);
				func_40(uParam0, 15);
			}
		}
		else
		{
			uParam0->f_2598 = func_134("IB_SELECT", 1138488863, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		}
	}
}

void func_27(var uParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	if (!func_46(uParam0, 2048))
	{
		StringCopy(&(uParam0->f_5373.f_1), "CONFIRM_CHAR_T", 16);
		StringCopy(&(uParam0->f_5373.f_3), "CONFIRM_QT_LND", 16);
		uParam0->f_5373.f_43 = 2;
		uParam0->f_5373.f_44[0] = -995844004;
		uParam0->f_5373.f_44[1] = -1014491759;
		func_138(&(uParam0->f_5373), 0);
		func_89(uParam0, 2048);
	}
	iVar0 = func_139(&(uParam0->f_5373), -1218098620, &(uParam0->f_5373.f_49), 1);
	if (iVar0 == 0)
	{
		func_89(uParam0, 4096);
	}
	else if (iVar0 == 1)
	{
		func_124(uParam0, 2048);
		func_40(uParam0, 13);
	}
}

void func_28(var uParam0)
{
	disable_all_control_actions(0);
	enable_control_action(0, -668070958, true);
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (uParam0->f_2430 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	switch (uParam0->f_2579)
	{
		case 0:
			set_anim_scene_entity(uParam0->f_2564, "Male_MP", uParam0->f_19[0]->f_1201, 0);
			set_anim_scene_entity(uParam0->f_2564, "Female_MP", uParam0->f_19[1]->f_1201, 0);
			set_anim_scene_entity(uParam0->f_2564, "Deputy", uParam0->f_2432.f_6, 0);
			set_anim_scene_entity(uParam0->f_2564, "Sheriff", uParam0->f_2432.f_13, 0);
			_set_anim_scene_playback_list_bool(uParam0->f_2564, func_140(bVar0), true);
			func_136(uParam0);
			func_141(uParam0, 1);
			break;
		case 1:
			func_141(uParam0, 2);
			break;
		case 2:
			func_141(uParam0, 3);
			break;
		case 3:
			if (has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 931807363))
			{
				uParam0->f_2432.f_25 = create_camera(26379945, false);
				set_cam_coord(uParam0->f_2432.f_25, -561.8157f, -3780.966f, 239.0805f);
				set_cam_rot(uParam0->f_2432.f_25, -4.2146f, -0.0007f, -87.8802f, 2);
				set_cam_fov(uParam0->f_2432.f_25, 30f);
				set_cam_active(uParam0->f_2432.f_25, true);
				render_script_cams(true, false, 3000, true, false, 0);
				func_141(uParam0, 4);
			}
			break;
		case 4:
			if (((bVar0 && (_0xb89fcff19dafff28(uParam0->f_2564, "Male_MP") || _0x005e6f28dd7ed58d(uParam0->f_2564, "Male_MP"))) || (!bVar0 && (_0xb89fcff19dafff28(uParam0->f_2564, "Female_MP") || _0x005e6f28dd7ed58d(uParam0->f_2564, "Female_MP")))) || has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 1666780503))
			{
				func_142(uParam0);
				freeze_entity_position(uParam0->f_19[uParam0->f_2430]->f_1201, false);
				_0x6339c1ea3979b5f7("customization", "rdro_character_creator_scenes");
				func_141(uParam0, 5);
			}
			break;
		case 5:
			func_142(uParam0);
			if ((bVar0 && (_0xb89fcff19dafff28(uParam0->f_2564, "Male_MP") || _0x005e6f28dd7ed58d(uParam0->f_2564, "Male_MP"))) || (!bVar0 && (_0xb89fcff19dafff28(uParam0->f_2564, "Female_MP") || _0x005e6f28dd7ed58d(uParam0->f_2564, "Female_MP"))))
			{
				func_40(uParam0, 17);
				func_141(uParam0, 0);
			}
			break;
	}
}

void func_29(var uParam0)
{
	disable_all_control_actions(0);
	enable_control_action(0, -668070958, true);
	if (uParam0->f_2430 == 0)
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	switch (uParam0->f_2591)
	{
		case 0:
			if (func_115(uParam0, 0))
			{
				set_anim_scene_entity(uParam0->f_2564, "Male_MP", uParam0->f_19[0]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Female_MP", uParam0->f_19[1]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Deputy", uParam0->f_2432.f_6, 0);
				set_anim_scene_entity(uParam0->f_2564, "Sheriff", uParam0->f_2432.f_13, 0);
				if (!_is_anim_scene_started(uParam0->f_2564, false))
				{
					start_anim_scene(uParam0->f_2564);
				}
				_set_anim_scene_playback_list_bool(uParam0->f_2564, func_143(bVar1), true);
				_0xac84686c06184b0d("customization", "rdro_character_creator_scenes");
				func_144(uParam0, 1);
			}
			break;
		case 1:
			if (has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 931807363))
			{
				if (func_145(-164864667) != -1)
				{
					func_146(uParam0->f_19[uParam0->f_2430]->f_1201, -164864667, 0, 0);
				}
				if (!func_125(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]), uParam0->f_19[uParam0->f_2430]->f_1201, &(uParam0->f_19[uParam0->f_2430]->f_8)))
				{
					func_68(uParam0, 3045);
				}
				func_124(uParam0, 512);
				func_144(uParam0, 2);
			}
			break;
		case 2:
			if (animpostfx_is_running("CameraViewfinder"))
			{
				animpostfx_stop("CameraViewfinder");
			}
			func_144(uParam0, 3);
			break;
		case 3:
			if (has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 931807363))
			{
				if (!does_cam_exist(uParam0->f_2432.f_25))
				{
					uParam0->f_2432.f_25 = create_camera(26379945, false);
				}
				set_cam_coord(uParam0->f_2432.f_25, -561.8157f, -3780.966f, 239.0805f);
				set_cam_rot(uParam0->f_2432.f_25, -4.2146f, -0.0007f, -87.8802f, 2);
				set_cam_fov(uParam0->f_2432.f_25, 30f);
				set_cam_active(uParam0->f_2432.f_25, true);
				render_script_cams(true, false, 3000, true, false, 0);
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (iVar0 != uParam0->f_2430)
					{
						set_entity_visible(uParam0->f_19[iVar0]->f_1201, true);
					}
					iVar0++;
				}
				func_144(uParam0, 4);
			}
			break;
		case 4:
			if (has_anim_event_fired(uParam0->f_19[uParam0->f_2430]->f_1201, 1666780503) || _is_anim_scene_finished(uParam0->f_2564, false))
			{
				func_142(uParam0);
				freeze_entity_position(uParam0->f_19[uParam0->f_2430]->f_1201, false);
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_123(uParam0->f_2566[iVar0], is_ped_model(uParam0->f_19[iVar0]->f_1201, -171876066));
					iVar0++;
				}
				func_144(uParam0, 5);
			}
			break;
		case 5:
			func_142(uParam0);
			if (_is_anim_scene_finished(uParam0->f_2564, false))
			{
				func_144(uParam0, 0);
				func_40(uParam0, 17);
			}
			break;
	}
}

void func_30(var uParam0)
{
	if (*uParam0)
	{
		func_48(uParam0, 1);
		if (!is_screen_faded_in())
		{
			if (!func_46(uParam0, 131072))
			{
				func_89(uParam0, 131072);
				return;
			}
			else
			{
				_0xa565fac215cbc77d();
				do_screen_fade_in(0);
				animpostfx_play("RespawnPulse01");
			}
		}
	}
	func_147(uParam0);
	func_148(&(uParam0->f_2905), uParam0->f_19[uParam0->f_2430]->f_1202);
	func_149(&(uParam0->f_2905), 1);
	if (!func_46(uParam0, 1024))
	{
		_0xac84686c06184b0d("customization", "rdro_character_creator_scenes");
		func_89(uParam0, 1024);
	}
	func_115(uParam0, 0);
	switch (func_150(&(uParam0->f_2905)))
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (iVar0 != uParam0->f_2430)
				{
					func_128(uParam0->f_19[iVar0]->f_1201, uParam0->f_2566[iVar0]);
				}
				else if (!func_151(&(uParam0->f_2905)))
				{
					func_128(uParam0->f_19[iVar0]->f_1201, uParam0->f_2566[iVar0]);
				}
				else
				{
					func_123(uParam0->f_2566[iVar0], is_ped_model(uParam0->f_19[iVar0]->f_1201, -171876066));
				}
				iVar0++;
			}
			break;
		case 3:
			func_40(uParam0, 26);
			break;
		case 1:
			func_152(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]->f_8));
			func_153(&(uParam0->f_2905));
			func_154(&(uParam0->f_2905));
			func_124(uParam0, 1024);
			func_89(uParam0, 8192);
			func_40(uParam0, 11);
			func_120(&(uParam0->f_2432.f_26));
			reset_anim_scene(uParam0->f_2564, 0);
			break;
		case 2:
			reset_anim_scene(uParam0->f_2564, 0);
			func_152(&(uParam0->f_2905), &(uParam0->f_19[uParam0->f_2430]->f_8));
			func_153(&(uParam0->f_2905));
			func_40(uParam0, 18);
			break;
		default:
			break;
	}
}

void func_31(var uParam0)
{
	disable_all_control_actions(0);
	enable_control_action(0, -668070958, true);
	iVar0 = uParam0->f_2430;
	if (uParam0->f_2430 == 0)
	{
		bVar6 = true;
	}
	else
	{
		bVar6 = false;
	}
	if (uParam0->f_2583 > 0)
	{
		set_ped_can_play_ambient_anims(uParam0->f_19[uParam0->f_2430]->f_1201, false);
	}
	switch (uParam0->f_2583)
	{
		case 0:
			if (func_115(uParam0, 0))
			{
				set_anim_scene_entity(uParam0->f_2564, "Male_MP", uParam0->f_19[0]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Female_MP", uParam0->f_19[1]->f_1201, 0);
				set_anim_scene_entity(uParam0->f_2564, "Deputy", uParam0->f_2432.f_6, 0);
				set_anim_scene_entity(uParam0->f_2564, "Sheriff", uParam0->f_2432.f_13, 0);
				if (!_is_anim_scene_started(uParam0->f_2564, false))
				{
					start_anim_scene(uParam0->f_2564);
				}
				_set_anim_scene_playback_list_bool(uParam0->f_2564, func_155(bVar6), true);
				iVar5 = 0;
				while (iVar5 < 2)
				{
					if (iVar5 != uParam0->f_2430)
					{
						set_entity_visible(uParam0->f_19[iVar5]->f_1201, false);
					}
					iVar5++;
				}
				func_117(0, 0);
				func_118(uParam0, "CHAR_CONFIRM");
				uParam0->f_2565 = _0x842ccc9491ffcd9b("MP_CharacterCreatorPhoto");
				_0xf3e039322bfbd4d8(uParam0->f_2565);
				func_156(uParam0, 1);
			}
			break;
		case 1:
			func_156(uParam0, 2);
			break;
		case 2:
			if (has_anim_event_fired(uParam0->f_19[iVar0]->f_1201, 931807363))
			{
				if (func_157(1108822547) != &Global_1952637->f_83[10] || func_158(32768))
				{
					func_100(-164864667, uParam0->f_19[iVar0]->f_1201, 1, 1);
				}
				uVar1 = _databinding_add_data_container_from_path("", "CharacterCreationRoot");
				uVar2 = _databinding_add_data_container(uVar1, "photoOverlay");
				iVar4 = get_random_int_in_range(10000, 65536);
				StringIntConCat(&cVar3, iVar4, 8);
				_databinding_add_data_bool(uVar2, "showPhotoOverlay", 1);
				_databinding_add_data_string(uVar2, "gamertag", &(uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_1));
				_databinding_add_data_string(uVar2, "socialClubId", &cVar3);
				if (!does_cam_exist(uParam0->f_19[iVar0]->f_1203))
				{
					uParam0->f_19[iVar0]->f_1203 = create_camera(26379945, false);
				}
				set_cam_coord(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1193);
				set_cam_rot(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1196, 2);
				set_cam_fov(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1199);
				_0x11f32bb61b756732(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1200);
				set_cam_active(uParam0->f_19[iVar0]->f_1203, true);
				render_script_cams(true, false, 3000, true, false, 0);
				if (!animpostfx_is_running("CameraViewfinder"))
				{
					animpostfx_play("CameraViewfinder");
				}
				func_156(uParam0, 3);
			}
			break;
		case 3:
			if (func_90(&(uParam0->f_2584), 1f))
			{
				func_118(uParam0, "CHAR_RAISEHANDS");
				func_156(uParam0, 4);
			}
			break;
		case 4:
			if ((bVar6 && _0x8d81e7824b7753f7(uParam0->f_2564, "S_Male_Photo_Idle", 1)) || (!bVar6 && _0x8d81e7824b7753f7(uParam0->f_2564, "S_Female_Photo_Idle", 1)))
			{
				_set_anim_scene_playback_list_bool(uParam0->f_2564, func_159(bVar6), true);
				func_40(uParam0, 19);
				func_156(uParam0, 0);
			}
			break;
	}
}

void func_32(var uParam0)
{
	_0x2804658eb7d8a50b(4, 253441852);
	disable_all_control_actions(0);
	func_88(&(uParam0->f_5543), 0);
	iVar0 = uParam0->f_2430;
	if (!func_46(uParam0, 8))
	{
		if (!does_cam_exist(uParam0->f_19[iVar0]->f_1203))
		{
			uParam0->f_19[iVar0]->f_1203 = create_camera(26379945, false);
		}
		set_cam_coord(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1193);
		set_cam_rot(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1196, 2);
		set_cam_fov(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1199);
		_0x11f32bb61b756732(uParam0->f_19[iVar0]->f_1203, uParam0->f_19[iVar0]->f_1200);
		set_cam_active(uParam0->f_19[iVar0]->f_1203, true);
		render_script_cams(true, false, 3000, true, false, 0);
		func_89(uParam0, 8);
		return;
	}
	if (!func_90(&(uParam0->f_5543), 1f))
	{
		if (!animpostfx_is_running("CameraViewfinder"))
		{
			animpostfx_play("CameraViewfinder");
		}
		return;
	}
	bVar12 = func_160(26930588, &uVar11);
	bVar13 = func_161(26930588, 1, -570078785, 1);
	bVar14 = func_161(26930588, 1, 59806960, 1);
	bVar15 = ((bVar12 || bVar13) || bVar14);
	switch (uParam0->f_7)
	{
		case -1:
			enable_control_action(0, 1138488863, true);
			enable_control_action(0, 814057702, true);
			enable_control_action(0, -668070958, true);
			enable_control_action(0, -1862657621, true);
			if (*uParam0)
			{
				_0xc9caeaeec1256e54(-1744263063);
				if (!func_130(uParam0->f_2905.f_882))
				{
					func_162(uParam0);
					uParam0->f_2905.f_883 = func_134("IB_BACK", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				}
				else
				{
					func_163(uParam0->f_2905.f_882, ((bVar12 || (uParam0->f_2905.f_885 && bVar13)) || (!uParam0->f_2905.f_885 && bVar14)), 1, 1);
				}
				if (!bVar12)
				{
					if (!func_130(uParam0->f_2905.f_884))
					{
						uParam0->f_2905.f_884 = func_134("SHOP_USE_GOLD", -1862657621, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						_uiprompt_set_attribute(func_164(uParam0->f_2905.f_884), 18, 1);
						_uiprompt_set_attribute(func_164(uParam0->f_2905.f_884), 17, 1);
						_uiprompt_set_attribute(func_164(uParam0->f_2905.f_884), 14, 1);
						iVar16 = func_165(26930588, 59806960, 1, 0, 1, 0);
						func_166(uParam0->f_2905.f_882, _create_var_string(2, "CHAR_CREATOR_CONFIRM_CHANGES", iVar16), 1);
						uParam0->f_2905.f_885 = 0;
					}
					else
					{
						if (func_132(uParam0->f_2905.f_884, 1))
						{
							uParam0->f_2905.f_885 = 1;
						}
						else
						{
							uParam0->f_2905.f_885 = 0;
						}
						func_163(uParam0->f_2905.f_884, bVar13, 1, 1);
					}
					if (func_132(uParam0->f_2905.f_882, 1) && uParam0->f_2905.f_886 != uParam0->f_2905.f_885)
					{
						func_129(&(uParam0->f_2905.f_882), 1, 1);
						func_162(uParam0);
					}
					uParam0->f_2905.f_886 = uParam0->f_2905.f_885;
				}
				if (bVar12)
				{
					func_166(uParam0->f_2905.f_882, _create_var_string(2, "CHAR_CREATOR_CONFIRM_CHANGES_FREE"), 1);
					uParam0->f_2905.f_890 = uVar11;
				}
				else if (uParam0->f_2905.f_885 && bVar13)
				{
					iVar16 = func_167(func_165(26930588, -570078785, 1, 0, 1, 0));
					func_166(uParam0->f_2905.f_882, _create_var_string(2, "CHAR_CREATOR_CONFIRM_CHANGES_GOLD", iVar16), 1);
					uParam0->f_2905.f_890 = -570078785;
				}
				else
				{
					iVar16 = func_165(26930588, 59806960, 1, 0, 1, 0);
					func_166(uParam0->f_2905.f_882, _create_var_string(2, "CHAR_CREATOR_CONFIRM_CHANGES", iVar16), 1);
					uParam0->f_2905.f_890 = 59806960;
				}
			}
			else if (!func_130(uParam0->f_2905.f_882))
			{
				uParam0->f_2905.f_882 = func_134("IB_ACCEPT", 1138488863, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				uParam0->f_2905.f_883 = func_134("IB_BACK", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			if (func_131(uParam0->f_2905.f_882, 1) || (func_168(uParam0->f_2905.f_882, 1) && bVar15))
			{
				func_169(uParam0, 0);
				func_129(&(uParam0->f_2905.f_884), 1, 1);
				func_129(&(uParam0->f_2905.f_882), 1, 1);
				func_129(&(uParam0->f_2905.f_883), 1, 1);
				func_118(uParam0, "CHAR_PHOTO");
				_launch_app_by_hash_with_entry(-2031856823, 811893989);
			}
			else if (func_168(uParam0->f_2905.f_883, 1))
			{
				func_124(uParam0, 8);
				func_137(uParam0, 2, uParam0->f_2430);
				func_137(uParam0, 1, uParam0->f_2430);
				func_40(uParam0, 16);
				func_170(&(uParam0->f_2905), 1);
				func_129(&(uParam0->f_2905.f_884), 1, 1);
				func_129(&(uParam0->f_2905.f_882), 1, 1);
				func_129(&(uParam0->f_2905.f_883), 1, 1);
				func_91(&(uParam0->f_5543));
				func_117(0, 0);
				func_118(uParam0, "CHAR_BACKCUST");
				_0x38d9d50f2085e9b3(uParam0->f_2565);
				iVar17 = 0;
				while (iVar17 < 2)
				{
					func_123(uParam0->f_2566[iVar17], is_ped_model(uParam0->f_19[iVar17]->f_1201, -171876066));
					iVar17++;
				}
			}
			break;
		case 0:
			if (_0xcd954f330693f5f2())
			{
				if (animpostfx_is_running("CameraViewfinder"))
				{
					animpostfx_stop("CameraViewfinder");
				}
				if (!_0xeef83a759ae06a27(uParam0->f_2565))
				{
					_0x9b8d5d4cb8af58b3(uParam0->f_2565);
				}
				toggle_paused_renderphases(false);
				play_sound_frontend("Camera_Flash", "RDRO_Character_Creator_Sounds", true, 0);
				_0xac84686c06184b0d("character_photo", "rdro_character_creator_scenes");
				func_169(uParam0, 1);
			}
			break;
		case 1:
			func_169(uParam0, 2);
			break;
		case 2:
			if (func_90(&(uParam0->f_8), 3f))
			{
				func_169(uParam0, 3);
			}
			break;
		case 3:
			if (!_0xf8806ec3ff840fdc())
			{
				_0xfbc30b70b3cdb87e();
				func_169(uParam0, 4);
			}
			break;
		case 4:
			func_171(4);
			iVar2 = _0xcbac13f065c47596();
			if (iVar2 == 3)
			{
				sVar3 = "mugshot";
				Var4 = { func_172() };
				uParam0->f_11 = _mugshot_texture_download_request(&Var4, 0, sVar3, false);
				func_169(uParam0, 5);
			}
			else if ((iVar2 == 2 || func_90(&(uParam0->f_8), Global_1901947->f_679.f_1)) || _0xf8806ec3ff840fdc())
			{
				_0x814729078aed6d30();
				uParam0->f_12++;
				if (uParam0->f_12 >= Global_1901947->f_679)
				{
					func_169(uParam0, 6);
				}
				else
				{
					func_169(uParam0, 2);
				}
			}
			break;
		case 5:
			if (!is_screen_faded_out() && !is_screen_fading_out())
			{
				if (!_0xeef83a759ae06a27(uParam0->f_2565))
				{
					do_screen_fade_out(0);
				}
				else if ((get_frame_count() % 30) == 0)
				{
				}
			}
			iVar1 = _get_status_of_texture_download(uParam0->f_11);
			if (iVar1 == 0)
			{
				texture_download_release(uParam0->f_11);
				func_169(uParam0, 6);
			}
			else if (iVar1 == 2 || func_90(&(uParam0->f_8), 10f))
			{
				func_169(uParam0, 6);
			}
			break;
		case 6:
			if (is_screen_faded_out())
			{
				_0xeda5cbecf56e1386(uParam0->f_2565);
				func_169(uParam0, 7);
			}
			else if (!is_screen_fading_out())
			{
				do_screen_fade_out(1000);
			}
			break;
		case 7:
			if (is_screen_faded_out())
			{
				if (_0xeef83a759ae06a27(uParam0->f_2565))
				{
					_0xeda5cbecf56e1386(uParam0->f_2565);
				}
				_0x38d9d50f2085e9b3(uParam0->f_2565);
				toggle_paused_renderphases(true);
				func_48(uParam0, 0);
				func_40(uParam0, 20);
			}
			break;
	}
}

void func_33(var uParam0)
{
	if (*uParam0)
	{
		func_40(uParam0, 21);
		return;
	}
	if (!func_46(uParam0, 16))
	{
		bVar0 = false;
		if (!bVar0)
		{
			func_40(uParam0, 21);
			return;
		}
		StringCopy(&(uParam0->f_5312.f_1), "FLOW_SKIP_T", 16);
		StringCopy(&(uParam0->f_5312.f_3), "FLOW_SKIP_ST", 16);
		uParam0->f_5312.f_43 = 2;
		uParam0->f_5312.f_44[0] = -995844004;
		uParam0->f_5312.f_44[1] = -1014491759;
		func_138(&(uParam0->f_5312), 0);
		func_89(uParam0, 16);
	}
	iVar1 = func_139(&(uParam0->f_5312), -1218098620, &(uParam0->f_5312.f_49), 1);
	if (iVar1 == 0)
	{
		func_89(uParam0, 64);
		func_40(uParam0, 21);
	}
	else if (iVar1 == 1)
	{
		func_40(uParam0, 21);
	}
}

void func_34(var uParam0)
{
	request_model(uParam0->f_19[uParam0->f_2430]->f_5, false);
	if (!has_model_loaded(uParam0->f_19[uParam0->f_2430]->f_5))
	{
		return;
	}
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	_display_hud_component(-424376908);
	if (*uParam0)
	{
		if (!func_173(uParam0))
		{
			return;
		}
	}
	else
	{
		func_174(uParam0);
	}
	func_40(uParam0, 22);
}

void func_35(var uParam0)
{
	func_171(0);
	if (!func_46(uParam0, 128))
	{
		if (_0x3cf46f55c6585590())
		{
			return;
		}
		if (!*uParam0)
		{
			func_175(uParam0);
		}
		func_176(1);
		Global_17411.f_55.f_644.f_1784 = { uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_1 };
		if (func_177(Global_17411.f_55.f_644.f_1784, 1) == -1)
		{
			func_68(uParam0, 3059);
			return;
		}
		if (!_0x1840f3b30ed0105f(1280353230))
		{
			func_68(uParam0, 3046);
			return;
		}
		func_89(uParam0, 128);
		return;
	}
	if (_0x3cf46f55c6585590())
	{
		return;
	}
	else if (_0x1431540bca1a1bd2())
	{
		func_68(uParam0, 3047);
	}
	if (func_46(uParam0, 64))
	{
		func_40(uParam0, 23);
	}
	else
	{
		func_40(uParam0, 24);
	}
}

void func_36(var uParam0)
{
	if (func_12(4))
	{
		return;
	}
	switch (func_178(&(uParam0->f_5499), 1266862364, 0, 255, 0))
	{
		case 3:
			func_68(uParam0, 3057);
			break;
		case 1:
			break;
		case 2:
			func_40(uParam0, 24);
			break;
	}
}

void func_37(var uParam0)
{
	if (!_0xa0bc8faed8cfeb3c(uParam0->f_3))
	{
		return;
	}
	func_171(0);
	iVar0 = 0;
	if (uParam0->f_2903 != -1)
	{
		iVar0 = func_179(uParam0->f_2903);
		if (iVar0 == 5 || iVar0 == 1)
		{
			return;
		}
		if (uParam0->f_2904 != 0)
		{
			if (func_180(uParam0->f_2903, &uVar1))
			{
				Var5 = -1;
				Var5.f_4.f_7 = -142743235;
				Var5.f_4.f_16 = -1;
				func_181(uParam0->f_2903, &Var5);
				Var26 = { Var5.f_4 };
				uVar43 = Var26.f_16;
				_0x621d719c4836292b(&uVar1, func_182(uParam0->f_2904), uParam0->f_2904, uVar43, 26930588, -1455024014);
				uParam0->f_2904 = 0;
			}
		}
	}
	if (!func_46(uParam0, 256))
	{
		if (func_183() == 2026485318)
		{
			func_184(&(uParam0->f_5435.f_18), 617531372);
		}
		else
		{
			func_184(&(uParam0->f_5435.f_18), 291123060);
		}
		iVar49 = func_106(func_183() == 24043185, 977189147, 1052462664);
		Var44 = uParam0->f_5434;
		if (!func_185(uParam0, &Var44, iVar49))
		{
			return;
		}
		if (!*uParam0)
		{
			Var44.f_3 = func_186();
			Var44.f_2 = iVar49;
			if (!_datafile_get_hash(&iVar50, &Var44))
			{
				func_68(uParam0, 3056);
				return;
			}
			_0x2703efb583f0949a(get_player_ped(player_id()), func_187(Var44.f_3));
			func_184(&(uParam0->f_5435.f_18), iVar50);
			iVar51 = player_ped_id();
			_0x9963681a8bc69bf3(iVar51, "Ped.WhistlePitch", (to_float(Global_17411.f_55.f_644.f_1779) * 0.01f));
			_0x9963681a8bc69bf3(iVar51, "Ped.WhistleClarity", (to_float(Global_17411.f_55.f_644.f_1780) * 0.01f));
			_0x9963681a8bc69bf3(iVar51, "Ped.WhistleShape", to_float(Global_17411.f_55.f_644.f_1778));
			func_188(uParam0);
			func_89(uParam0, 256);
		}
		else
		{
			if (!func_189(uParam0))
			{
				func_68(uParam0, 3058);
				return;
			}
			func_89(uParam0, 256);
			return;
		}
	}
	if (func_12(4))
	{
		return;
	}
	if (!*uParam0)
	{
		switch (func_190(&(uParam0->f_5435), -496459706))
		{
			case 3:
				func_68(uParam0, 3058);
				break;
			case 1:
				break;
			case 2:
				if (func_191(0))
				{
					func_114(34, 0, 0, 0, 0);
					func_114(36, 0, 0, 0, 0);
					func_52(uParam0);
					Var52 = { func_192(-43471346) };
					_0x86a68e84e5884951(&uVar54);
					stat_id_set_date(&Var52, &uVar54, true);
					func_40(uParam0, 25);
				}
				func_89(uParam0, 524288);
				break;
		}
	}
	else if (!func_46(uParam0, 1048576))
	{
		func_114(34, 0, 0, 0, 0);
		func_193(&(Global_1952637->f_1058.f_9), Global_1952637->f_1058.f_6);
		func_89(uParam0, 1048576);
	}
	else
	{
		if (func_194(34) || func_194(36))
		{
			return;
		}
		else
		{
			uParam0->f_2903 = Global_1952637->f_926;
			if (uParam0->f_2903 != -1)
			{
				if ((_cashinventory_transaction_get_basket_is_valid(uParam0->f_2903) && _cashinventory_transaction_checkout_status(uParam0->f_2903, &iVar0)) && (iVar0 == 5 || iVar0 == 0))
				{
					Var61 = -1;
					Var61.f_1 = -1;
					Var61 = uParam0->f_2903;
					if (func_195(&Var61))
					{
						return;
					}
				}
				else if (iVar0 == 1)
				{
					return;
				}
			}
		}
		func_52(uParam0);
		func_40(uParam0, 27);
		func_89(uParam0, 524288);
	}
}

void func_38(var uParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(881353596) > 0)
	{
		return;
	}
	func_40(uParam0, 27);
}

void func_39(var uParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (!is_screen_faded_out())
	{
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	if (!func_46(uParam0, 262144))
	{
		StringCopy(&(uParam0->f_5373.f_1), "CONFIRM_CHAR_T", 16);
		StringCopy(&(uParam0->f_5373.f_3), "CONFIRM_QT_FR", 16);
		uParam0->f_5373.f_43 = 2;
		uParam0->f_5373.f_44[0] = -995844004;
		uParam0->f_5373.f_44[1] = -1014491759;
		func_138(&(uParam0->f_5373), 0);
		func_89(uParam0, 262144);
	}
	iVar0 = func_139(&(uParam0->f_5373), -1218098620, &(uParam0->f_5373.f_49), 1);
	if (iVar0 == 0)
	{
		_uistatemachine_request_transition(-2031856823, -348086681);
		if (func_46(uParam0, 2097152))
		{
			func_196(&(Global_1952637->f_2032), &(Global_1952637->f_1675), 8);
			Global_1952637->f_1556 = { Global_1952637->f_1675 };
		}
		func_153(&(uParam0->f_2905));
		func_154(&(uParam0->f_2905));
		func_124(uParam0, 1024);
		func_40(uParam0, 27);
	}
	else if (iVar0 == 1)
	{
		_uistatemachine_request_transition(-2031856823, -298271443);
		func_124(uParam0, 262144);
		func_40(uParam0, 17);
		func_197(&(uParam0->f_2905));
	}
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
	uParam0->f_16 = 0;
	uParam0->f_17 = get_game_timer();
}

void func_41(var uParam0)
{
	iVar2 = get_number_of_events(1);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				break;
		}
		iVar0++;
	}
}

void func_42(var uParam0)
{
	func_198(uParam0);
	switch (uParam0->f_209)
	{
		case 1:
			func_199(uParam0);
			break;
		case 3:
			func_200(uParam0);
			break;
		case 2:
			func_201(uParam0);
			break;
		case 4:
			func_202(uParam0);
			break;
		case 5:
			func_203(uParam0);
			break;
		case 6:
			func_204(uParam0);
			break;
		case 7:
			func_205(uParam0);
			break;
		case 8:
			func_206(uParam0);
			break;
		default:
			func_207(uParam0, 1);
			break;
	}
}

bool func_43(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_208(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

bool func_44(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	return true;
}

void func_45()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0->f_5 && iParam1) != 0;
}

void func_47(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_209(iParam0, iParam1);
	}
	func_210(4);
	func_211();
	func_212(1);
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_46(uParam0, 4194304))
		{
			_0x4f2d5fa23db992de();
			func_89(uParam0, 4194304);
		}
		return;
	}
	if (func_46(uParam0, 4194304))
	{
		_0x4e463a3cdefffe96();
		func_124(uParam0, 4194304);
	}
}

void func_49(int iParam0)
{
	Global_1904651->f_8684 = iParam0;
}

bool func_50(int iParam0, int iParam1)
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
	if (func_213(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_213(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_213(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_213(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_213(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_213(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_213(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_213(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_51(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_52(var uParam0)
{
	render_script_cams(false, false, 3000, true, false, 0);
	if (func_214(uParam0->f_2600))
	{
		_0x2f901291ef177b02(uParam0->f_2600, 0);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 != uParam0->f_2430 || (iVar0 == uParam0->f_2430 && !func_215(0)))
		{
			func_79(&(uParam0->f_19[iVar0]->f_8.f_648), &(uParam0->f_19[iVar0]->f_8.f_648.f_9));
		}
		iVar0++;
	}
	freeze_entity_position(uParam0->f_3, true);
	set_player_invincible(get_player_index(), false);
	_0x9428447ded71fc7e("rdro_character_creator_scenes");
	_0x531a78d6bf27014b("RDRO_Character_Creator_Sounds");
	_display_hud_component(1779876696);
	if (func_50(uParam0->f_2432.f_6, 0))
	{
		func_51(&(uParam0->f_2432.f_6), 0);
	}
	if (func_50(uParam0->f_2432.f_13, 0))
	{
		func_51(&(uParam0->f_2432.f_13), 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (func_50(uParam0->f_19[iVar1]->f_1201, 0))
		{
			func_51(&(uParam0->f_19[iVar1]->f_1201), 0);
		}
		iVar1++;
	}
	func_129(&(uParam0->f_2597), 1, 1);
	func_129(&(uParam0->f_2598), 1, 1);
	func_129(&(uParam0->f_2905.f_884), 1, 1);
	func_129(&(uParam0->f_2905.f_882), 1, 1);
	func_129(&(uParam0->f_2905.f_883), 1, 1);
	func_129(&(uParam0->f_2599), 1, 1);
	func_216(&(uParam0->f_2905));
	set_ambient_zone_list_state("AZL_RDRO_Character_Creation_Area", false, true);
	set_ambient_zone_list_state("AZL_RDRO_Character_Creation_Area_Other_Zones_Disable", true, true);
	_0x531a78d6bf27014b("RDRO_Character_Creator_Sounds");
	func_84("MP_CHARACTER_CREATION_STOP", 0);
	destroy_all_cams(false);
}

char* func_53()
{
	return "Character_Creator";
}

char* func_54(bool bParam0)
{
	if (bParam0)
	{
		return "CLIPSET@MP_CHARACTER_CREATOR@MALE";
	}
	return "CLIPSET@MP_CHARACTER_CREATOR@FEMALE";
}

void func_55(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	fVar3 = fParam3;
	if (!func_217(Global_1296859->f_17, &vVar0, &fVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		fVar3 = fParam3;
	}
	func_218(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, iParam7, fParam8, 1);
}

void func_56()
{
	func_219(90);
}

int func_57(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_220(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_221(iParam1);
	return func_222(iParam0, iVar0, bParam2, bParam2, bParam4);
}

bool func_58(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_223(iVar0, 1);
		if (!func_224(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_225(iVar0, 0);
				func_226(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_227(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

struct<4> func_59(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_228(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_60(1328661203, func_229(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_60(1328661203, func_229(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_60(1328661203, func_229(), -1591664384, bParam0);
}

struct<4> func_60(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_230(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_228(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_61(struct<4> Param0, int iParam4)
{
	func_231();
	func_232(&(Global_1952637->f_1556), 0);
	func_233(&(Global_1952637->f_1556), -1, 1, 1, 0);
	func_234();
	func_235();
	func_236();
	func_237(Param0);
	func_238(Param0);
	func_239(Param0, iParam4);
}

bool func_62(struct<2> Param0)
{
	if (!func_240(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_241(Param0))
	{
		return false;
	}
	return true;
}

bool func_63(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_64(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_65(int iParam0, int iParam1)
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

bool func_66()
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
	if (!func_62(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	return func_242(1, iParam0);
}

void func_68(var uParam0, int iParam1)
{
	func_89(uParam0, 1);
	uParam0->f_6 = iParam1;
}

void func_69(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10003;
		case 1:
		case 2:
		case 3:
		case 4:
			return 45000;
		case 5:
		case 6:
		case 7:
		case 8:
			return 7300;
		default:
			break;
	}
	return 45000;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case -934992753:
		case -841961450:
		case 451529179:
		case 612720002:
		case 847313273:
			return 0;
		case -1640936415:
		case -1069379473:
		case -737921038:
		case -447391084:
		case -148898263:
			return 1;
		case -1577213137:
		case -1100096485:
		case -1094001463:
		case -863930314:
		case -862160776:
			return 2;
		case -1809751726:
		case 640288085:
		case 931276805:
		case 1236716654:
		case 1855821387:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_73(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_60(889965687, func_59(1), 1034665895, 1) };
	iVar19 = func_243(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_244(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_245(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_246(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_247(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_248(Var0, 1, 0);
			}
			func_247(iVar20);
			return iVar14;
		}
		func_247(iVar20);
	}
	return 0;
}

void func_74()
{
	if (Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 0;
}

bool func_75()
{
	return Global_1896738->f_382;
}

void func_76()
{
	func_249(0);
}

int func_77(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return 1;
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
		return 0;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_250(iVar4, 1);
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
				func_251(iVar2, bVar3, bParam1);
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
					(Global_1139381->f_3876.f_2[func_252(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

void func_78(int iParam0)
{
	Global_17411.f_55.f_644.f_1734 = (Global_17411.f_55.f_644.f_1734 - (Global_17411.f_55.f_644.f_1734 && iParam0));
}

void func_79(var uParam0, var uParam1)
{
	if (!func_253(uParam0, 32))
	{
		return;
	}
	if (func_253(uParam0, 4))
	{
		func_254(uParam0, uParam1, 0);
		_delete_ped_texture(*uParam0);
	}
	uParam0->f_8 = 0;
}

void func_80(var uParam0)
{
	uParam0->f_5434 = _0xd97d8d905f1562f2(-641739913);
	func_255(-1699673416);
	func_255(1679934574);
	func_255(183712523);
	uParam0->f_2595 = _create_anim_scene("lightrig@online_character_editor", 0, 0, false, true);
	_text_database_request("NETCHAR");
}

bool func_81(var uParam0)
{
	request_anim_dict(func_95());
	if (!has_anim_dict_loaded(func_95()))
	{
		uParam0->f_18 = 3062;
		return false;
	}
	request_anim_dict(func_96());
	if (!has_anim_dict_loaded(func_96()))
	{
		uParam0->f_18 = 3063;
		return false;
	}
	request_anim_dict(func_256(8));
	if (!has_anim_dict_loaded(func_256(8)))
	{
		uParam0->f_18 = 3064;
		return false;
	}
	request_anim_dict(func_256(9));
	if (!has_anim_dict_loaded(func_256(9)))
	{
		uParam0->f_18 = 3065;
		return false;
	}
	_0x2b6529c54d29037a(func_53());
	if (!_0x2c04d89a0fb4e244(func_53()))
	{
		uParam0->f_18 = 3066;
		return false;
	}
	request_clip_set(func_54(1));
	if (!has_clip_set_loaded(func_54(1)))
	{
		uParam0->f_18 = 3067;
		return false;
	}
	request_clip_set(func_54(0));
	if (!has_clip_set_loaded(func_54(0)))
	{
		uParam0->f_18 = 3068;
		return false;
	}
	if (!func_115(uParam0, 1))
	{
		return false;
	}
	return true;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1554409311;
		case 1:
			return 653246234;
		default:
			break;
	}
	return 0;
}

bool func_83(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_84(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!prepare_music_event(sParam0))
		{
			return 0;
		}
	}
	if (trigger_music_event(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_85(var uParam0)
{
	if (uParam0->f_209 < 4)
	{
		return false;
	}
	if (func_257(uParam0, 2))
	{
		return false;
	}
	return true;
}

Vector3 func_86()
{
	return -561.4f, -3782.6f, 237.6f;
}

float func_87()
{
	return 166.8f;
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1 || !func_258(uParam0))
	{
		func_120(uParam0);
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_5 = (uParam0->f_5 || iParam1);
}

bool func_90(var uParam0, float fParam1)
{
	if (!func_258(uParam0))
	{
		return false;
	}
	if (func_259(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_91(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_92(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_93(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 1)
		{
			set_ped_config_flag(iParam0, 130, false);
			set_ped_config_flag(iParam0, 315, false);
			set_ped_config_flag(iParam0, 301, false);
		}
		else
		{
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 301, true);
		}
	}
}

void func_94(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_260(uParam0, iParam1, sParam2))
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

char* func_95()
{
	return "SCRIPT_COMMON@TAILOR_SHOP";
}

char* func_96()
{
	return "MECH_LOCO_F@TYPE@COWGIRL@NORMAL@UNARMED@IDLE";
}

void func_97(int iParam0)
{
	Global_1952637->f_1 = iParam0;
}

int func_98(int iParam0)
{
	if (!func_230(iParam0, 0))
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

bool func_99(int iParam0, int iParam1)
{
	if (!func_230(iParam0, 0))
	{
		return func_262(func_261(iParam0), iParam1);
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

int func_100(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_263(iParam0, iParam1, bParam2, bParam3);
}

void func_101(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

int func_102(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	func_264();
	iVar1 = 0;
	if (iParam4 == 0)
	{
		iParam4 = func_183();
	}
	if (!func_265(&(Global_1952637->f_1556), &bVar0, iParam1, -1, bParam3, 1, iParam4, 0, iParam5))
	{
		return 0;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		if (bVar0)
		{
			func_114(1, iVar1, iVar2, 0, 0);
		}
		else
		{
			func_114(1, iVar1, iVar2, 0, 0);
			func_114(4, 0, 0, 0, 0);
			func_114(5, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar2 |= 1;
		func_114(1, iVar1, iVar2, iParam0, 0);
	}
	return 1;
}

void func_103(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_104(int iParam0, var uParam1, bool bParam2)
{
	Var25 = 1681542071;
	Var25.f_1 = uParam1;
	Var25.f_3 = 0;
	_0x91ded5dd64bb2691(&Var25);
	while (_0xed4413cee1bf142c(&Var25))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var25, 1091248546))
		{
		}
		else if (iVar0 != Global_1952637->f_594)
		{
			iVar3[iVar1] = iVar0;
			iVar1++;
		}
	}
	iVar2 = get_random_int_in_range(0, (iVar1 - 1));
	_0x370a973252741ac4(iParam0, 0);
	Global_1952637->f_594 = &iVar3[iVar2];
	iVar35 = 0;
	while (iVar35 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar35] = { vVar32 };
		*Global_1952637->f_1556.f_1[iVar35] = { vVar32 };
		iVar35++;
	}
	if (!func_265(&(Global_1952637->f_1556), &uVar24, &(iVar3[iVar2]), -1, 1, 0, 0, 0, 8))
	{
		return;
	}
	func_266(&(Global_1952637->f_1556), iParam0, 1, -1, bParam2, 0, 1, 1);
}

void func_105(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = _get_metaped_type(iParam4);
	func_267(uParam0, uParam1, iParam5, &iVar1, &iVar2);
	func_268(uParam0);
	uParam0->f_648 = iVar2;
	iVar3 = 0;
	while (iVar3 < 39)
	{
		func_269(uParam0, uParam1, iVar3, Global_1952637->f_4[iVar3]->f_1, 1);
		iVar3++;
	}
	func_270(uParam0, iVar1);
	iVar4 = func_271(Global_1952637->f_3481);
	uParam1->f_474.f_11 = func_272(uParam0, iVar1, -1483470091, 1405546932, iVar4);
	uParam1->f_474.f_12 = iVar4;
	uParam1->f_474.f_15 = func_272(uParam0, iVar2, 1845412653, -1142395683, &(Global_1952637->f_1675.f_1[2]));
	uParam1->f_474.f_16 = floor(func_273(0f, 50f, Global_17411.f_55.f_644.f_1776));
	uParam1->f_474.f_18 = func_272(uParam0, iVar1, 424580283, 602139475, &(Global_1952637->f_1675.f_1[3]));
	if (&Global_1952637->f_1675.f_1[1] == &Global_1952637->f_83[1])
	{
		uParam1->f_474.f_20 = (func_272(uParam0, iVar2, 1104904264, 1377922294, &(Global_1952637->f_1675.f_1[1])) - 1);
		uParam1->f_474.f_19 = &Global_1952637->f_1675.f_1[1];
		uParam1->f_474.f_24 = 0;
	}
	else if (func_274(uParam0, iVar2, 1104904264, -824364195, 867854846, &(Global_1952637->f_1675.f_1[1]), &iVar5, &uVar7, &uVar6))
	{
		uParam1->f_474.f_20 = (iVar5 - 1);
		uParam1->f_474.f_24 = uVar6;
		uParam1->f_474.f_19 = uVar7;
	}
	else
	{
		uParam1->f_474.f_20 = 0;
		uParam1->f_474.f_24 = 0;
		uParam1->f_474.f_19 = -960808083;
		uParam1->f_75 = &Global_1952637->f_1675.f_1[1];
	}
	if (iVar0 == 0)
	{
		if (&Global_1952637->f_1675.f_1[4] == &Global_1952637->f_83[4])
		{
			uParam1->f_474.f_22 = (func_272(uParam0, iVar2, -891690336, 1195402671, &(Global_1952637->f_1675.f_1[4])) - 1);
			uParam1->f_474.f_21 = &Global_1952637->f_1675.f_1[4];
			uParam1->f_474.f_23 = 0;
		}
		else if (func_274(uParam0, iVar2, -891690336, 1229402512, 1911250089, &(Global_1952637->f_1675.f_1[4]), &iVar5, &uVar7, &uVar6))
		{
			uParam1->f_474.f_22 = (iVar5 - 1);
			uParam1->f_474.f_23 = uVar6;
			uParam1->f_474.f_21 = uVar7;
		}
		else
		{
			uParam1->f_474.f_22 = 0;
			uParam1->f_474.f_23 = 0;
			uParam1->f_474.f_21 = -960808083;
			uParam1->f_76 = &Global_1952637->f_1675.f_1[4];
		}
	}
	func_275(&(uParam1->f_1054));
	func_276(uParam2, uParam3, 6);
	func_277(uParam0, uParam1, uParam2, uParam3, iParam5, &(Global_1952637->f_1675.f_1[8]), &(Global_1952637->f_1675.f_1[0]), &uVar8, 1);
	if (uParam1->f_75 != 0)
	{
		uParam1->f_474.f_24 = uVar8;
	}
	if (!func_278(uParam0, iVar2, 831873862, &(uParam1->f_474.f_29), &(uParam1->f_474.f_30)))
	{
		uParam1->f_474.f_101.f_17 = 1;
	}
	if (!func_278(uParam0, iVar2, 1364455116, &(uParam1->f_474.f_27), &(uParam1->f_474.f_28)))
	{
		uParam1->f_474.f_101.f_18 = 1;
	}
	if (!func_278(uParam0, iVar2, 949000652, &(uParam1->f_474.f_31), &(uParam1->f_474.f_32)))
	{
		uParam1->f_474.f_101.f_20 = 1;
	}
	if (!func_278(uParam0, iVar2, -1389899508, &(uParam1->f_474.f_33), &(uParam1->f_474.f_34)))
	{
		uParam1->f_474.f_101.f_19 = 1;
	}
	if (!func_278(uParam0, iVar2, 799607560, &(uParam1->f_474.f_35), &(uParam1->f_474.f_36)))
	{
		uParam1->f_474.f_101.f_22 = 1;
	}
	if (!func_278(uParam0, iVar2, 636446122, &(uParam1->f_474.f_37), &(uParam1->f_474.f_38)))
	{
		uParam1->f_474.f_101.f_21 = 1;
	}
}

int func_106(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_107(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, iParam2, 0))
	{
		return false;
	}
	iVar0 = uParam0->f_642.f_1;
	if (!func_279(uParam0, 432983819, 0, 0))
	{
		return false;
	}
	iVar2 = func_280(uParam0, 268568456, uParam1->f_474.f_10, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	func_281(iParam3, iVar2, 0, -1292426046, 1, 1, 0, 0, 0, 1, 1);
	*uParam1->f_1054.f_1[8] = { *Global_1952637->f_1675.f_1[8] };
	func_270(uParam0, iVar0);
	if (!func_279(uParam0, 432983819, 1, 0))
	{
		return false;
	}
	iVar3 = func_280(uParam0, 268568456, uParam1->f_474.f_10, 0);
	if (iVar3 == 0)
	{
		return false;
	}
	func_281(iParam3, iVar3, 0, 1422688607, 1, 1, 0, 0, 0, 1, 1);
	*uParam1->f_1054.f_1[9] = { *Global_1952637->f_1675.f_1[9] };
	func_270(uParam0, iVar0);
	if (!func_279(uParam0, 17571750, uParam1->f_474.f_13, 0))
	{
		return false;
	}
	iVar1 = uParam0->f_642.f_1;
	iVar4 = func_280(uParam0, 985932463, uParam1->f_474.f_10, 0);
	if (iVar4 == 0)
	{
		return false;
	}
	func_281(iParam3, iVar4, 0, -1889597427, 1, 1, 0, 0, 0, 1, 1);
	uParam1->f_645 = iVar4;
	*uParam1->f_1054.f_1[0] = { *Global_1952637->f_1675.f_1[0] };
	func_270(uParam0, iVar1);
	iVar5 = func_280(uParam0, -1142395683, uParam1->f_474.f_15, 0);
	if (iVar5 == 0)
	{
		return false;
	}
	func_281(iParam3, iVar5, 0, 389988485, 1, 1, 0, 0, 0, 1, 1);
	*uParam1->f_1054.f_1[2] = { *Global_1952637->f_1675.f_1[2] };
	func_270(uParam0, iVar0);
	iVar6 = func_280(uParam0, 602139475, uParam1->f_474.f_18, 0);
	if (iVar6 == 0)
	{
		return false;
	}
	func_281(iParam3, iVar6, 0, 1780904876, 1, 1, 0, 0, 0, 1, 1);
	*uParam1->f_1054.f_1[3] = { *Global_1952637->f_1675.f_1[3] };
	if (uParam1->f_474.f_19 != -960808083)
	{
		func_270(uParam0, iVar1);
		if (!func_279(uParam0, 696002461, uParam1->f_474.f_19, 0))
		{
			return false;
		}
		iVar7 = func_280(uParam0, 867854846, uParam1->f_474.f_24, 0);
		if (iVar7 == 0)
		{
			iVar7 = func_282(-1130352927);
		}
	}
	else
	{
		iVar7 = uParam1->f_75;
	}
	func_283(iVar7, iParam3, 0, 0, !*uParam0);
	*uParam1->f_1054.f_1[1] = { *Global_1952637->f_1675.f_1[1] };
	if (is_ped_model(iParam3, -171876066))
	{
		if (uParam1->f_474.f_21 != -960808083)
		{
			func_270(uParam0, iVar1);
			if (!func_279(uParam0, -1408486622, uParam1->f_474.f_21, 0))
			{
				return false;
			}
			iVar8 = func_280(uParam0, 1911250089, uParam1->f_474.f_23, 0);
			if (iVar8 == 0)
			{
				iVar8 = func_282(1367443060);
			}
		}
		else
		{
			iVar8 = uParam1->f_76;
		}
		func_284(iVar8, iParam3, 0, 0, !*uParam0);
		*uParam1->f_1054.f_1[4] = { *Global_1952637->f_1675.f_1[4] };
	}
	func_270(uParam0, iVar0);
	iVar9 = func_280(uParam0, 1405546932, uParam1->f_474.f_11, 0);
	uParam1->f_474.f_12 = iVar9;
	func_285(uParam0, iParam3, 0, 0f);
	func_285(uParam0, iParam3, 2, &(uParam1->f_474.f_39[2]));
	func_285(uParam0, iParam3, 1, &(uParam1->f_474.f_39[1]));
	func_285(uParam0, iParam3, 3, &(uParam1->f_474.f_39[3]));
	func_285(uParam0, iParam3, 5, &(uParam1->f_474.f_39[5]));
	func_285(uParam0, iParam3, 6, &(uParam1->f_474.f_39[6]));
	func_285(uParam0, iParam3, 4, &(uParam1->f_474.f_39[4]));
	func_285(uParam0, iParam3, 7, &(uParam1->f_474.f_39[7]));
	func_285(uParam0, iParam3, 9, &(uParam1->f_474.f_39[9]));
	func_285(uParam0, iParam3, 8, &(uParam1->f_474.f_39[8]));
	func_285(uParam0, iParam3, 10, &(uParam1->f_474.f_39[10]));
	func_285(uParam0, iParam3, 12, &(uParam1->f_474.f_39[12]));
	func_285(uParam0, iParam3, 11, &(uParam1->f_474.f_39[11]));
	func_285(uParam0, iParam3, 13, &(uParam1->f_474.f_39[13]));
	func_285(uParam0, iParam3, 15, &(uParam1->f_474.f_39[15]));
	func_285(uParam0, iParam3, 14, &(uParam1->f_474.f_39[14]));
	func_285(uParam0, iParam3, 16, &(uParam1->f_474.f_39[16]));
	func_285(uParam0, iParam3, 29, &(uParam1->f_474.f_39[29]));
	func_285(uParam0, iParam3, 30, &(uParam1->f_474.f_39[30]));
	func_285(uParam0, iParam3, 31, &(uParam1->f_474.f_39[31]));
	func_285(uParam0, iParam3, 32, &(uParam1->f_474.f_39[32]));
	func_285(uParam0, iParam3, 34, &(uParam1->f_474.f_39[34]));
	func_285(uParam0, iParam3, 33, &(uParam1->f_474.f_39[33]));
	func_285(uParam0, iParam3, 37, &(uParam1->f_474.f_39[37]));
	func_285(uParam0, iParam3, 36, &(uParam1->f_474.f_39[36]));
	func_285(uParam0, iParam3, 35, &(uParam1->f_474.f_39[35]));
	func_285(uParam0, iParam3, 38, &(uParam1->f_474.f_39[38]));
	func_285(uParam0, iParam3, 23, &(uParam1->f_474.f_39[23]));
	func_285(uParam0, iParam3, 25, &(uParam1->f_474.f_39[25]));
	func_285(uParam0, iParam3, 27, &(uParam1->f_474.f_39[27]));
	func_285(uParam0, iParam3, 24, &(uParam1->f_474.f_39[24]));
	func_285(uParam0, iParam3, 28, &(uParam1->f_474.f_39[28]));
	func_285(uParam0, iParam3, 26, &(uParam1->f_474.f_39[26]));
	func_285(uParam0, iParam3, 18, &(uParam1->f_474.f_39[18]));
	func_285(uParam0, iParam3, 17, &(uParam1->f_474.f_39[17]));
	func_285(uParam0, iParam3, 20, &(uParam1->f_474.f_39[20]));
	func_285(uParam0, iParam3, 19, &(uParam1->f_474.f_39[19]));
	func_285(uParam0, iParam3, 21, &(uParam1->f_474.f_39[21]));
	func_285(uParam0, iParam3, 22, &(uParam1->f_474.f_39[22]));
	if (bParam4)
	{
		func_266(&(uParam1->f_1054), iParam3, 1, -1, 0, 0, 1, 1);
		_set_ped_body_component(iParam3, func_286(iVar9));
		_0xaab86462966168ce(iParam3, 1);
		_update_ped_variation(iParam3, false, true, true, true, false);
	}
	else
	{
		Global_1952637->f_3481 = func_286(iVar9);
		func_114(2, 0, 2, iParam3, 0);
	}
	fVar10 = func_287(uParam1->f_474.f_11);
	set_task_move_network_signal_float(iParam3, "BODY_SIZE", fVar10);
	return true;
}

void func_108(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bVar6 = is_ped_male(iParam4);
	if (bVar6)
	{
		iVar5 = 0;
	}
	else
	{
		iVar5 = 1;
	}
	func_288(uParam0, uParam1, iParam5, bParam7, bParam8);
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, iParam5, 0))
	{
		return;
	}
	uVar8 = uParam0->f_642.f_1;
	if (!func_279(uParam0, 17571750, uParam1->f_474.f_13, 0))
	{
		return;
	}
	iVar7 = uParam0->f_642.f_1;
	uParam0->f_648 = iVar7;
	func_268(uParam0);
	uParam0->f_642.f_1 = iVar7;
	uParam1->f_474.f_10 = func_289(uParam0, iVar7, 600320052);
	uParam0->f_642.f_1 = iVar7;
	iVar4 = func_280(uParam0, 985932463, uParam1->f_474.f_10, 0);
	uParam0->f_642.f_1 = uVar8;
	iVar1 = func_290(uParam0, -1483470091, 0, 0);
	uParam1->f_474.f_11 = func_291(0, iVar1);
	uParam1->f_474.f_15 = func_289(uParam0, iVar7, 1845412653);
	uParam1->f_474.f_16 = func_291(0, 50);
	uParam1->f_474.f_18 = 0;
	uParam1->f_474.f_20 = func_289(uParam0, iVar7, 1104904264);
	uParam0->f_642.f_1 = iVar7;
	if (uParam1->f_474.f_20 == 0)
	{
		if (uParam1->f_75 != 0)
		{
			uParam1->f_474.f_20 = 0;
			iVar3 = uParam1->f_75;
			uParam1->f_474.f_24 = 0;
		}
		else
		{
			uParam1->f_474.f_20 = 1;
		}
	}
	if (uParam1->f_474.f_20 >= 1)
	{
		if (!func_279(uParam0, 1104904264, uParam1->f_474.f_20, 0))
		{
			return;
		}
		iVar9 = uParam0->f_642.f_1;
		uParam1->f_474.f_19 = func_280(uParam0, -624280703, 0, 0);
		if (uParam1->f_474.f_19 == -1713496139)
		{
			iVar3 = -1713496139;
			uParam1->f_474.f_24 = 0;
		}
		else
		{
			uParam0->f_642.f_1 = iVar9;
			uParam1->f_474.f_24 = func_289(uParam0, iVar9, -824364195);
			uParam0->f_642.f_1 = iVar9;
			iVar3 = func_280(uParam0, 867854846, uParam1->f_474.f_24, 0);
		}
		if (uParam1->f_75 == 0)
		{
			uParam1->f_474.f_20 = (uParam1->f_474.f_20 - 1);
		}
	}
	if (bVar6)
	{
		uParam1->f_474.f_22 = func_289(uParam0, iVar7, -891690336);
		uParam1->f_474.f_23 = uParam1->f_474.f_24;
		if (uParam1->f_474.f_22 == 0)
		{
			if (uParam1->f_76 != 0)
			{
				uParam1->f_474.f_22 = 0;
				iVar2 = uParam1->f_76;
				uParam1->f_474.f_23 = 0;
			}
			else
			{
				uParam1->f_474.f_22 = 1;
			}
		}
		if (uParam1->f_474.f_22 >= 1)
		{
			uParam0->f_642.f_1 = iVar7;
			if (!func_279(uParam0, -891690336, uParam1->f_474.f_22, 0))
			{
				return;
			}
			iVar9 = uParam0->f_642.f_1;
			uParam1->f_474.f_21 = func_280(uParam0, -624280703, 0, 0);
			if (uParam1->f_474.f_21 == -598283164)
			{
				uParam1->f_474.f_23 = 0;
				iVar2 = -598283164;
			}
			else
			{
				uParam0->f_642.f_1 = iVar9;
				iVar2 = func_280(uParam0, 1911250089, uParam1->f_474.f_23, 0);
			}
			if (uParam1->f_76 == 0)
			{
				uParam1->f_474.f_22 = (uParam1->f_474.f_22 - 1);
			}
		}
	}
	else
	{
		uParam1->f_474.f_22 = 0;
	}
	uParam0->f_642.f_1 = uVar8;
	iVar1 = func_290(uParam0, 205225927, 0, 0);
	uParam0->f_642.f_1 = uVar8;
	iVar0 = func_280(uParam0, -1926004527, func_121(iVar1), 0);
	if (bParam6)
	{
		func_292(uParam2, uParam3, iVar0, 6, iVar4, iVar5);
	}
	else if (!func_293(uParam2, uParam3, iVar0, 6, iVar4, iVar5))
	{
		return;
	}
	func_294(iVar3, -1811760631, uParam2, uParam3, bParam6);
	func_294(iVar2, -2118203104, uParam2, uParam3, bParam6);
	uParam0->f_642.f_1 = uVar8;
	iVar10 = func_280(uParam0, 268568456, uParam1->f_474.f_10, 0);
	func_277(uParam0, uParam1, uParam2, uParam3, iParam5, iVar10, iVar4, &uVar11, 0);
	uParam0->f_642.f_1 = iVar7;
	iVar1 = func_290(uParam0, 831873862, 0, 0);
	uParam1->f_474.f_29 = func_121((iVar1 - 1)) + 1;
	iVar1 = func_290(uParam0, 949000652, 0, 0);
	uParam1->f_474.f_31 = func_121((iVar1 - 1)) + 1;
	iVar1 = func_290(uParam0, -1389899508, 0, 0);
	uParam1->f_474.f_33 = func_121((iVar1 - 1)) + 1;
	iVar1 = func_290(uParam0, 799607560, 0, 0);
	uParam1->f_474.f_35 = func_121((iVar1 - 1)) + 1;
	iVar1 = func_290(uParam0, 636446122, 0, 0);
	uParam1->f_474.f_37 = func_121((iVar1 - 1)) + 1;
	iVar1 = func_290(uParam0, 1364455116, 0, 0);
	uParam1->f_474.f_27 = func_121((iVar1 - 1)) + 1;
	func_295(uParam0, uParam1, uParam1->f_474.f_29, &(uParam1->f_474.f_30), 831873862, 1, 1);
	func_295(uParam0, uParam1, uParam1->f_474.f_27, &(uParam1->f_474.f_28), 1364455116, 1, 1);
	func_295(uParam0, uParam1, uParam1->f_474.f_31, &(uParam1->f_474.f_32), 949000652, 1, 1);
	func_295(uParam0, uParam1, uParam1->f_474.f_33, &(uParam1->f_474.f_34), -1389899508, 1, 1);
	func_295(uParam0, uParam1, uParam1->f_474.f_35, &(uParam1->f_474.f_36), 799607560, 1, 1);
	func_295(uParam0, uParam1, uParam1->f_474.f_37, &(uParam1->f_474.f_38), 636446122, 1, 1);
	uParam1->f_641 = func_291(0, 5);
	uParam1->f_642 = func_291(0, 100);
	uParam1->f_643 = func_291(0, 100);
}

bool func_109()
{
	iVar0 = &Global_1952637->f_595[5];
	return iVar0 > 0;
}

bool func_110(var uParam0, var uParam1)
{
	if (uParam0->f_1 == 0)
	{
		return true;
	}
	if (func_253(uParam0, 1))
	{
		if (!func_253(uParam0, 4))
		{
			_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
			func_296(uParam0, 4);
		}
	}
	else if (!func_253(uParam0, 4))
	{
		*uParam0 = _create_ped_texture(uParam0->f_2, uParam0->f_3, uParam0->f_4);
		func_296(uParam0, 4);
	}
	if (!_is_ped_texture_valid(*uParam0))
	{
		return false;
	}
	if (uParam0->f_7 < uParam0->f_6)
	{
		func_297(uParam0, uParam1, uParam0->f_7);
		uParam0->f_7++;
		return false;
	}
	func_296(uParam0, 32);
	func_296(uParam0, 1);
	return true;
}

int func_111(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1 || (*uParam0)[iVar0]->f_17 == 0)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_112(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		_set_ped_overlay_textures(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		_set_ped_overlay_palette(*uParam0, uParam1->f_2, uParam1->f_9);
		_set_ped_overlay_colour(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		_0xf2ea041f1146d75b(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		_0x057c4f092e2298be(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	_sep_ped_overlay_variation(*uParam0, uParam1->f_2, uParam1->f_6);
	_set_ped_overlay_opacity(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_113(int iParam0, var uParam1)
{
	if (!network_get_entity_is_networked(iParam0))
	{
		return true;
	}
	if (!_is_ped_texture_valid(*uParam1))
	{
		return false;
	}
	if (!func_253(uParam1, 2))
	{
		_update_ped_texture(*uParam1);
	}
	_override_texture_on_ped(iParam0, uParam1->f_5, *uParam1);
	return true;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_298(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_299(Var0);
}

bool func_115(var uParam0, bool bParam1)
{
	if (!_does_anim_scene_exist(uParam0->f_2564))
	{
		uParam0->f_2564 = _create_anim_scene("script@mp@character_creator@transitions", 0, 0, false, true);
	}
	if (!_is_anim_scene_loaded(uParam0->f_2564, true, false))
	{
		if (!_is_anim_scene_loading(uParam0->f_2564, true))
		{
			load_anim_scene(uParam0->f_2564);
		}
		uParam0->f_18 = 3069;
		return false;
	}
	if (bParam1)
	{
		if (!func_300(uParam0->f_2564, "pl_intro"))
		{
			uParam0->f_18 = 3070;
			return false;
		}
		if (!func_300(uParam0->f_2564, "pl_start_idle"))
		{
			uParam0->f_18 = 3071;
			return false;
		}
	}
	if (!func_300(uParam0->f_2564, func_140(1)))
	{
		uParam0->f_18 = 3072;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_140(0)))
	{
		uParam0->f_18 = 3073;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_116(1)))
	{
		uParam0->f_18 = 3074;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_116(0)))
	{
		uParam0->f_18 = 3075;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_155(1)))
	{
		uParam0->f_18 = 3076;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_155(0)))
	{
		uParam0->f_18 = 3077;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_143(1)))
	{
		uParam0->f_18 = 3078;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_143(0)))
	{
		uParam0->f_18 = 3079;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_159(1)))
	{
		uParam0->f_18 = 3080;
		return false;
	}
	if (!func_300(uParam0->f_2564, func_159(0)))
	{
		uParam0->f_18 = 3081;
		return false;
	}
	return true;
}

char* func_116(bool bParam0)
{
	return func_301(bParam0, "Pl_Edit_to_Start_Male", "Pl_Edit_to_Start_Female");
}

void func_117(int iParam0, int iParam1)
{
	func_302(1, iParam0, iParam1);
}

int func_118(var uParam0, char* sParam1)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_303(&(uParam0->f_2432.f_29), cVar0, 0, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, int iParam1)
{
	uParam0->f_2587 = iParam1;
	func_120(&(uParam0->f_2588));
}

void func_120(var uParam0)
{
	func_304(uParam0, 0f);
}

int func_121(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

void func_122(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 2)
	{
		return;
	}
	if (uParam0->f_2430 == iParam1)
	{
		if (!bParam2)
		{
			return;
		}
	}
	if (!does_cam_exist(uParam0->f_19[iParam1]->f_1202))
	{
		uParam0->f_19[iParam1]->f_1202 = create_camera(26379945, false);
	}
	set_cam_coord(uParam0->f_19[iParam1]->f_1202, uParam0->f_19[iParam1]->f_1185);
	set_cam_rot(uParam0->f_19[iParam1]->f_1202, uParam0->f_19[iParam1]->f_1188, 2);
	set_cam_fov(uParam0->f_19[iParam1]->f_1202, uParam0->f_19[iParam1]->f_1191);
	_0x11f32bb61b756732(uParam0->f_19[iParam1]->f_1202, uParam0->f_19[iParam1]->f_1192);
	if (uParam0->f_2430 == -1)
	{
		set_cam_active_with_interp(uParam0->f_19[iParam1]->f_1202, uParam0->f_2432.f_22, 1200, 1, 1);
	}
	else if (uParam0->f_2430 != iParam1)
	{
		set_cam_coord(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1185);
		set_cam_rot(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1188, 2);
		set_cam_fov(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1191);
		_0x11f32bb61b756732(uParam0->f_19[uParam0->f_2430]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1192);
		set_cam_active_with_interp(uParam0->f_19[iParam1]->f_1202, uParam0->f_19[uParam0->f_2430]->f_1202, 1200, 1, 1);
	}
	else
	{
		set_cam_active_with_interp(uParam0->f_19[iParam1]->f_1202, get_rendering_cam(), 900, 1, 1);
	}
	render_script_cams(true, false, 3000, true, false, 0);
	uParam0->f_2430 = iParam1;
}

void func_123(var uParam0, bool bParam1)
{
	*uParam0 = bParam1;
	uParam0->f_1 = get_random_int_in_range(0, 8);
	if (!bParam1)
	{
		uParam0->f_2 = get_random_float_in_range((15f + 10f), (20f + 10f));
	}
	else
	{
		uParam0->f_2 = get_random_float_in_range(15f, 20f);
	}
	func_120(&(uParam0->f_3));
}

void func_124(var uParam0, int iParam1)
{
	uParam0->f_5 = (uParam0->f_5 - (uParam0->f_5 && iParam1));
}

bool func_125(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	switch (iParam1)
	{
		case 2107046455:
			if (!is_ped_human(iParam2))
			{
				return false;
			}
			if (!is_ped_male(iParam2))
			{
				return false;
			}
			break;
		case -1029951690:
			if (!is_ped_human(iParam2))
			{
				return false;
			}
			if (is_ped_male(iParam2))
			{
				return false;
			}
			break;
		default:
			return false;
	}
	if (uParam0->f_614 == iParam1 && uParam0->f_615 == iParam2)
	{
		return true;
	}
	func_305(uParam0, 1);
	uParam0->f_614 = iParam1;
	uParam0->f_615 = iParam2;
	uParam0->f_1193 = { *uParam3 };
	func_306(&(Global_1952637->f_1058), &(uParam3->f_648));
	return true;
}

bool func_126(int iParam0)
{
	if (!_0xf9e7dbb39080640b())
	{
		return false;
	}
	if (_is_loading_screen_active())
	{
		shutdown_loading_screen();
		return false;
	}
	else if (!is_screen_faded_in())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(iParam0);
			func_307();
		}
		return false;
	}
	return true;
}

var func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_308(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_128(int iParam0, var uParam1)
{
	if (func_90(&(uParam1->f_3), uParam1->f_2))
	{
		if (*uParam1)
		{
			sVar0 = func_256(8);
		}
		else
		{
			sVar0 = func_256(9);
		}
		iVar1 = func_309(0, 8, uParam1->f_1);
		task_play_anim(iParam0, sVar0, func_310(iVar1), 1.5f, -1.5f, -1, 67108880, 0f, false, 65536, false, 0, false);
		uParam1->f_1 = iVar1;
		uParam1->f_2 = get_random_float_in_range(15f, 20f);
		func_120(&(uParam1->f_3));
	}
}

void func_129(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_130(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_311(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_312(iVar0);
	*uParam0 = 0;
}

bool func_130(int iParam0)
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

bool func_131(int iParam0, bool bParam1)
{
	if (bParam1 && !func_130(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
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

bool func_132(int iParam0, bool bParam1)
{
	if (bParam1 && !func_130(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_133(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_130(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	func_313(iVar0, bParam1);
}

int func_134(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_314(iVar0, 2))
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
		func_315(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_135(int iParam0, bool bParam1)
{
	if (bParam1 && !func_130(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_136(var uParam0)
{
	iVar0 = get_interior_at_coords(-561.8157f, -3780.966f, 239.0805f);
	if (is_valid_interior(iVar0))
	{
		if (is_interior_ready(iVar0))
		{
			if (uParam0->f_2430 == 0)
			{
				if (_is_interior_entity_set_valid(iVar0, "mp_char_female_mirror"))
				{
					if (is_interior_entity_set_active(iVar0, "mp_char_female_mirror"))
					{
						deactivate_interior_entity_set(iVar0, "mp_char_female_mirror", true);
					}
				}
				if (_is_interior_entity_set_valid(iVar0, "mp_char_male_mirror"))
				{
					if (!is_interior_entity_set_active(iVar0, "mp_char_male_mirror"))
					{
						activate_interior_entity_set(iVar0, "mp_char_male_mirror", 0);
					}
				}
			}
			else
			{
				if (_is_interior_entity_set_valid(iVar0, "mp_char_male_mirror"))
				{
					if (is_interior_entity_set_active(iVar0, "mp_char_male_mirror"))
					{
						deactivate_interior_entity_set(iVar0, "mp_char_male_mirror", true);
					}
				}
				if (_is_interior_entity_set_valid(iVar0, "mp_char_female_mirror"))
				{
					if (!is_interior_entity_set_active(iVar0, "mp_char_female_mirror"))
					{
						activate_interior_entity_set(iVar0, "mp_char_female_mirror", 0);
					}
				}
			}
		}
	}
}

void func_137(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_13[iParam2] = (&uParam0->f_13[iParam2] - (uParam0->f_13[iParam2] && iParam1));
}

void func_138(var uParam0, bool bParam1)
{
	*uParam0 = 0;
	func_316(&(uParam0->f_49), 0, 0);
	Var19 = &uParam0->f_44[0];
	Var19.f_3 = uParam0->f_42;
	Var0.f_3 = { Var19 };
	if (uParam0->f_43 > 1)
	{
		Var23 = &uParam0->f_44[1];
		Var23.f_3 = uParam0->f_42;
		Var0.f_7 = { Var23 };
		if (uParam0->f_43 > 2)
		{
			Var27 = &uParam0->f_44[2];
			Var27.f_3 = uParam0->f_42;
			Var0.f_11 = { Var27 };
			if (uParam0->f_43 > 3)
			{
				Var31 = &uParam0->f_44[3];
				Var31.f_3 = uParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (uParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!is_string_null_or_empty(&(uParam0->f_5)))
	{
		cVar35 = _create_var_string(10, &(uParam0->f_3), &(uParam0->f_5));
	}
	else
	{
		cVar35 = func_317(uParam0->f_3);
	}
	if (!is_string_null_or_empty(&(uParam0->f_7)))
	{
		if (!is_string_null_or_empty(&(uParam0->f_23)))
		{
			if (uParam0->f_39)
			{
				cVar35 = _create_var_string(42, cVar35, func_318(&(uParam0->f_7), 109029619), func_318(&(uParam0->f_23), 109029619), uParam0->f_40);
			}
			else
			{
				cVar35 = _create_var_string(42, cVar35, func_318(&(uParam0->f_7), 109029619), func_318(&(uParam0->f_23), 109029619));
			}
		}
		else if (uParam0->f_39)
		{
			cVar35 = _create_var_string(10, cVar35, func_318(&(uParam0->f_7), 109029619), uParam0->f_40);
		}
		else
		{
			cVar35 = _create_var_string(10, cVar35, func_318(&(uParam0->f_7), 109029619));
		}
	}
	else if (uParam0->f_39)
	{
		cVar35 = _create_var_string(2, cVar35, uParam0->f_40);
	}
	if (bParam1)
	{
		*uParam0 = func_319(&Var0, &(uParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*uParam0 = func_320(&Var0, &(uParam0->f_1), cVar35, 0, 0, 1);
	}
}

int func_139(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = -1;
	if (_event_manager_is_event_pending(iParam1))
	{
		if (_event_manager_peek_event(iParam1, &vVar1))
		{
			if (func_321(uParam2))
			{
				if (func_322(uParam2, 0, 0) > 250)
				{
					switch (vVar1.x)
					{
						case -1203660660:
							if (vVar1.y == *uParam0)
							{
								if (vVar1.z == 2074623703)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 0;
								}
								else if (vVar1.z == 1400745903)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 1;
								}
								else if (vVar1.z == 444632721)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
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
				func_316(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

char* func_140(bool bParam0)
{
	return func_301(bParam0, "Pl_Start_to_Edit_Male", "Pl_Start_to_Edit_Female");
}

void func_141(var uParam0, int iParam1)
{
	uParam0->f_2579 = iParam1;
	func_120(&(uParam0->f_2580));
}

void func_142(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = uParam0->f_19[iVar0]->f_1201;
		if (!is_task_move_network_active(iVar1))
		{
			if (is_ped_model(uParam0->f_19[iVar0]->f_1201, -171876066))
			{
				uParam0->f_2905.f_2370.f_1 = 1348645644;
				uParam0->f_2905.f_2370 = 1348645644;
			}
			else
			{
				uParam0->f_2905.f_2370.f_1 = 452590527;
				uParam0->f_2905.f_2370 = 452590527;
			}
			uParam0->f_2905.f_2370.f_30 = "IDLE_STATE";
			uParam0->f_2905.f_2370.f_4 = "BODY_SIZE";
			uParam0->f_2905.f_2370.f_5 = func_323(uParam0->f_19[iVar0]->f_8.f_474.f_11);
			uParam0->f_2905.f_2370.f_7 = "STEP_SIGNAL";
			uParam0->f_2905.f_2370.f_8 = 0.5f;
			vVar5 = { get_entity_coords(uParam0->f_19[iVar0]->f_1201, true, false) };
			vVar8 = { get_entity_rotation(uParam0->f_19[iVar0]->f_1201, 2) };
			fVar11 = 0.3f;
			task_move_network_advanced_by_name_with_init_params(uParam0->f_19[iVar0]->f_1201, func_53(), &(uParam0->f_2905.f_2370), vVar5, vVar8, 2, fVar11, 0, 0, 2, 0);
			fVar3 = func_323(uParam0->f_19[iVar0]->f_8.f_474.f_11);
			set_task_move_network_signal_float(iVar1, "BODY_SIZE", fVar3);
			force_ped_motion_state(uParam0->f_19[iVar0]->f_1201, 247561816, false, 0, false);
			freeze_entity_position(uParam0->f_19[iVar0]->f_1201, false);
		}
		else if (is_task_move_network_active(iVar1))
		{
			if (is_ped_model(uParam0->f_19[iVar0]->f_1201, -171876066))
			{
				_0x615dc4a82e90bb48(iVar1, 1348645644, 184808581);
			}
			else
			{
				_0x615dc4a82e90bb48(iVar1, 452590527, 184808581);
			}
			force_ped_motion_state(iVar1, 247561816, false, 0, false);
			fVar3 = func_323(uParam0->f_19[iVar0]->f_8.f_474.f_11);
			set_task_move_network_signal_float(iVar1, "BODY_SIZE", fVar3);
			if (!func_324(uParam0, 2, iVar0))
			{
				if (!func_324(uParam0, 1, iVar0))
				{
					if (are_strings_equal(get_task_move_network_state(iVar1), "Idle_State"))
					{
						iVar4 = func_325(iVar1);
						fVar2 = func_326(iVar4);
						if (fVar2 == 0.5f)
						{
							func_327(uParam0, 2, iVar0);
							func_327(uParam0, 1, iVar0);
						}
						else
						{
							func_328(iVar1);
							if (is_task_move_network_ready_for_transition(iVar1))
							{
								set_task_move_network_signal_float(iVar1, "CURRENT_HEADING", fVar2);
								request_task_move_network_state_transition(iVar1, "Turn_to_Face_Transition");
								func_327(uParam0, 1, iVar0);
							}
							else if (are_strings_equal(get_task_move_network_state(iVar1), "Turn_to_Face_Transition"))
							{
								func_327(uParam0, 1, iVar0);
							}
						}
					}
					else
					{
						func_328(iVar1);
						if (are_strings_equal(get_task_move_network_state(iVar1), "Stop_Right_State"))
						{
							if (is_task_move_network_ready_for_transition(iVar1) && has_anim_event_fired(iVar1, 993220401))
							{
								request_task_move_network_state_transition(iVar1, "Idle_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Stop_Left_State"))
						{
							if (is_task_move_network_ready_for_transition(iVar1) && has_anim_event_fired(iVar1, -1727958697))
							{
								request_task_move_network_state_transition(iVar1, "Idle_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Step_Right_State"))
						{
							if (is_task_move_network_ready_for_transition(iVar1) && has_anim_event_fired(iVar1, 1752866596))
							{
								request_task_move_network_state_transition(iVar1, "Stop_Right_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Step_Left_State"))
						{
							if (is_task_move_network_ready_for_transition(iVar1) && has_anim_event_fired(iVar1, -1187150655))
							{
								request_task_move_network_state_transition(iVar1, "Stop_Left_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Look_Right_Idle") || are_strings_equal(get_task_move_network_state(iVar1), "Look_Left_Idle"))
						{
							if (is_task_move_network_ready_for_transition(iVar1))
							{
								request_task_move_network_state_transition(iVar1, "Still_Idle");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Still_Idle") && is_task_move_network_ready_for_transition(iVar1))
						{
							request_task_move_network_state_transition(iVar1, "Idle_State");
						}
						else if (are_strings_equal(get_task_move_network_state(iVar1), "Turn_to_Face_Transition"))
						{
							if (is_task_move_network_ready_for_transition(iVar1) && get_task_move_network_event(iVar1, "Turn_to_Face_TransitionClipFinished"))
							{
								request_task_move_network_state_transition(iVar1, "Idle_State");
								func_327(uParam0, 2, iVar0);
							}
						}
					}
				}
				else if (get_task_move_network_event(iVar1, "Turn_to_Face_TransitionClipFinished") && is_task_move_network_ready_for_transition(iVar1))
				{
					request_task_move_network_state_transition(iVar1, "Idle_State");
					func_327(uParam0, 2, iVar0);
				}
				else if (are_strings_equal(get_task_move_network_state(iVar1), "Idle_State"))
				{
					func_327(uParam0, 2, iVar0);
				}
			}
		}
		iVar0++;
	}
}

char* func_143(bool bParam0)
{
	return func_301(bParam0, "Pl_Photo_to_Edit_Male", "Pl_Photo_to_Edit_Female");
}

void func_144(var uParam0, int iParam1)
{
	uParam0->f_2591 = iParam1;
	func_120(&(uParam0->f_2592));
}

int func_145(int iParam0)
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

bool func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_57(iParam0, iParam1, bParam2, 1, bParam3);
}

void func_147(var uParam0)
{
	if (!func_46(uParam0, 65536))
	{
		if (func_90(&(uParam0->f_2432.f_127), uParam0->f_2432.f_130) || !func_46(uParam0, 32768))
		{
			StringCopy(&cVar0, "CHAR_OTHERROOM", 24);
			if (func_303(&(uParam0->f_2432.f_29), cVar0, 1, uParam0->f_2432.f_131, 0, 0))
			{
				uParam0->f_2432.f_131++;
			}
			if (uParam0->f_2432.f_131 >= 12)
			{
				func_89(uParam0, 65536);
			}
			func_89(uParam0, 32768);
			uParam0->f_2432.f_130 = get_random_float_in_range(12f, 17f);
			func_120(&(uParam0->f_2432.f_127));
		}
	}
}

void func_148(var uParam0, int iParam1)
{
	if (!is_cam_rendering(iParam1))
	{
		return;
	}
	if (!does_cam_exist(uParam0->f_617.f_1))
	{
		return;
	}
	set_cam_coord(uParam0->f_617.f_1, get_cam_coord(iParam1));
	set_cam_rot(uParam0->f_617.f_1, get_cam_rot(iParam1, 2), 2);
	set_cam_fov(uParam0->f_617.f_1, get_cam_fov(iParam1));
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(uParam0, 4);
	}
	else
	{
		func_329(uParam0, 4);
	}
}

int func_150(var uParam0)
{
	if (func_257(uParam0, 32))
	{
		return 2;
	}
	if (func_257(uParam0, 16))
	{
		return 1;
	}
	if (func_257(uParam0, 2048))
	{
		return 3;
	}
	return 0;
}

bool func_151(var uParam0)
{
	return ((uParam0->f_639 == 1864755631 || uParam0->f_639 == 1730960490) || uParam0->f_639 == -407267045);
}

void func_152(var uParam0, var uParam1)
{
	func_330(uParam0, &(uParam0->f_1193), &(uParam1->f_474));
	*uParam1 = uParam0->f_1193;
	uParam1->f_33 = uParam0->f_1193.f_33;
	uParam1->f_34 = uParam0->f_1193.f_34;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		uParam1->f_2[iVar0] = &uParam0->f_1193.f_2[iVar0];
		iVar0++;
	}
	uParam1->f_638 = func_332(func_331(uParam0, 272));
	uParam1->f_639 = func_332(func_331(uParam0, 277));
	uParam1->f_640 = func_332(func_331(uParam0, 282));
	uParam1->f_641 = func_331(uParam0, 261);
	uParam1->f_642 = func_331(uParam0, 264);
	uParam1->f_643 = func_331(uParam0, 268);
	uParam1->f_647 = func_183();
	func_306(&(uParam1->f_648), &(Global_1952637->f_1058));
	uParam1->f_1054 = { Global_1952637->f_1675 };
}

void func_153(var uParam0)
{
	if (uParam0->f_209 <= 4)
	{
		return;
	}
	if (!func_257(uParam0, 1))
	{
		return;
	}
	if (func_257(uParam0, 2))
	{
		return;
	}
	func_305(uParam0, 2);
}

void func_154(var uParam0)
{
	func_170(uParam0, 1);
	func_170(uParam0, 32);
	func_170(uParam0, 4096);
	func_170(uParam0, 8192);
	func_170(uParam0, 128);
	func_170(uParam0, 256);
	func_170(uParam0, 512);
}

char* func_155(bool bParam0)
{
	return func_301(bParam0, "Pl_Edit_to_Photo_Male", "Pl_Edit_to_Photo_Female");
}

void func_156(var uParam0, int iParam1)
{
	uParam0->f_2583 = iParam1;
	func_120(&(uParam0->f_2584));
}

int func_157(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_333(iParam0, 1)]);
}

bool func_158(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

char* func_159(bool bParam0)
{
	return func_301(bParam0, "PI_Show_Hands_Male", "PI_Show_Hands_Female");
}

bool func_160(int iParam0, var uParam1)
{
	*uParam1 = func_334(iParam0, 1);
	return *uParam1 != 0;
}

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_335(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

void func_162(var uParam0)
{
	uParam0->f_2905.f_882 = func_134("CHAR_CREATOR_CONFIRM_CHANGES", 1138488863, 4, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
	_uiprompt_set_attribute(func_164(uParam0->f_2905.f_882), 18, 1);
	_uiprompt_set_attribute(func_164(uParam0->f_2905.f_882), 17, 1);
	_uiprompt_set_attribute(func_164(uParam0->f_2905.f_882), 14, 1);
}

void func_163(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_130(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (bParam1)
	{
		func_336(iParam0, 4);
		if (bParam3)
		{
			func_313(iVar0, 1);
		}
		func_337(iVar0, 1);
	}
	else
	{
		func_338(iParam0, 4);
		func_337(iVar0, 0);
	}
}

int func_164(int iParam0)
{
	iVar0 = func_311(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

int func_165(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_339(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_340(iParam0))
	{
		return func_342(func_341(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_343(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

void func_166(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_130(iParam0))
	{
		return;
	}
	iVar0 = func_311(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

int func_167(int iParam0)
{
	return (iParam0 / 100);
}

bool func_168(int iParam0, bool bParam1)
{
	if (bParam1 && !func_130(iParam0))
	{
		return false;
	}
	iVar0 = func_311(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_169(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
	func_120(&(uParam0->f_8));
}

void func_170(var uParam0, int iParam1)
{
	uParam0->f_2366 = (uParam0->f_2366 - (uParam0->f_2366 && iParam1));
}

void func_171(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

struct<7> func_172()
{
	network_get_local_handle(&Var0);
	return Var0;
}

bool func_173(var uParam0)
{
	if (func_344(&(uParam0->f_2905.f_2), 12))
	{
		func_296(&(Global_1952637->f_1058), 32);
		func_345(&(uParam0->f_19[uParam0->f_2430]->f_8.f_648), 32);
		func_346(&(Global_1952637->f_1058));
		func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	}
	if (func_344(&(uParam0->f_2905.f_2), 1))
	{
		func_348(func_286(uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_12));
	}
	if (func_344(&(uParam0->f_2905.f_2), 16))
	{
		Global_1952637->f_4[0]->f_1 = 0f;
		func_349();
		iVar0 = 0;
		while (iVar0 < 39)
		{
			_set_ped_face_feature(uParam0->f_3, &(Global_1952637->f_4[iVar0]), Global_1952637->f_4[iVar0]->f_1);
			iVar0++;
		}
	}
	Global_17411.f_55.f_644.f_1776 = uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_17;
	if (func_344(&(uParam0->f_2905.f_2), 2))
	{
		func_350(1624873267);
		if (func_46(uParam0, 2097152))
		{
			func_196(&(Global_1952637->f_2032), &(Global_1952637->f_1556), 8);
			func_196(&(uParam0->f_19[uParam0->f_2430]->f_8.f_1054), &(Global_1952637->f_1556), 112);
		}
		else
		{
			func_196(&(uParam0->f_19[uParam0->f_2430]->f_8.f_1054), &(Global_1952637->f_1556), -1);
		}
		func_351(-1, 0, 1, 1, 1, 0);
		func_352();
	}
	return true;
}

void func_174(var uParam0)
{
	func_296(&(Global_1952637->f_1058), 32);
	func_345(&(uParam0->f_19[uParam0->f_2430]->f_8.f_648), 32);
	Global_1952637->f_1556 = { uParam0->f_19[uParam0->f_2430]->f_8.f_1054 };
	set_player_model(uParam0->f_2, uParam0->f_19[uParam0->f_2430]->f_5, false);
	func_353(uParam0->f_19[uParam0->f_2430]->f_5, 999);
	Global_17411.f_55.f_644.f_1735 = func_183();
	Global_1102219->f_3578 = uParam0->f_19[uParam0->f_2430]->f_5;
	uParam0->f_3 = get_player_ped(uParam0->f_2);
	func_349();
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(uParam0->f_3, &(Global_1952637->f_4[iVar0]), Global_1952637->f_4[iVar0]->f_1);
		iVar0++;
	}
	func_350(1624873267);
	Global_1952637->f_1556 = 491602716;
	func_351(-1, 0, 1, 1, 1, 0);
	if (func_183() == 24043185)
	{
		func_265(&(Global_1952637->f_1556), &uVar1, 963122449, -1, 0, 0, 0, 0, 8);
	}
	else
	{
		func_265(&(Global_1952637->f_1556), &uVar1, 1079424170, -1, 0, 0, 0, 0, 8);
	}
	func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	func_351(-1, 0, 1, 1, 1, 0);
	func_352();
	if (!func_146(get_player_ped(player_id()), 0, 0, 0))
	{
		func_114(2, 0, 0, 0, 0);
	}
	func_114(4, 0, 0, 0, 0);
	func_114(5, 0, 0, 0, 0);
	func_348(func_286(uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_12));
	Global_17411.f_55.f_644.f_1776 = uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_17;
	Global_17411.f_55.f_644.f_1778 = uParam0->f_19[uParam0->f_2430]->f_8.f_641;
	Global_17411.f_55.f_644.f_1779 = uParam0->f_19[uParam0->f_2430]->f_8.f_642;
	Global_17411.f_55.f_644.f_1780 = uParam0->f_19[uParam0->f_2430]->f_8.f_643;
}

void func_175(var uParam0)
{
	iVar0 = 2;
	iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_638);
	iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_639);
	iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_640);
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
		uParam0->f_19[uParam0->f_2430]->f_8.f_638 = 1;
		uParam0->f_19[uParam0->f_2430]->f_8.f_639 = 1;
		uParam0->f_19[uParam0->f_2430]->f_8.f_640 = 1;
		iVar0 = 2;
		iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_638);
		iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_639);
		iVar0 = (iVar0 - uParam0->f_19[uParam0->f_2430]->f_8.f_640);
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_121(3);
		if (iVar1 > 1)
		{
			uParam0->f_19[uParam0->f_2430]->f_8.f_638++;
		}
		else if (iVar1 > 0)
		{
			uParam0->f_19[uParam0->f_2430]->f_8.f_639++;
		}
		else
		{
			uParam0->f_19[uParam0->f_2430]->f_8.f_640++;
		}
		iVar2++;
	}
	Var3.f_1 = 100f;
	Var3.f_5 = 100f;
	Var3.f_3 = 100f;
	Var3.f_6 = 50f;
	func_354(Var3);
}

void func_176(int iParam0)
{
	Global_17411.f_55.f_644.f_1734 = (Global_17411.f_55.f_644.f_1734 || iParam0);
}

int func_177(struct<8> Param0, bool bParam8)
{
	iVar0 = -1;
	Var1.f_9 = -1591664384;
	if (!func_355(func_59(1), &Var1, 0, 0, -1))
	{
		return iVar0;
	}
	Var15.f_9 = 1;
	Var15.f_11 = -1591664384;
	Var15 = { func_356(&Var1, 0) };
	Var15.f_16 = { Param0 };
	iVar0 = func_357(-460111564, &Var15, bParam8);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_358(iParam1))
	{
		return 3;
	}
	if (uParam0->f_42)
	{
		return 2;
	}
	if (!_0xe10f2d7715ababec(uParam0) && _0xfbe782b3165ac8ec(iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	if (func_359(&(uParam0->f_30), *uParam0, iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	func_171(0);
	if (!_cashinventory_is_session_ready())
	{
		return 1;
	}
	iVar0 = get_cloud_time_as_int();
	if (!_0xe10f2d7715ababec(uParam0))
	{
		if (uParam0->f_4 >= Global_1901947->f_677)
		{
			return 3;
		}
		if (func_360(iParam1, uParam0, &(uParam0->f_5), &(uParam0->f_18), iParam2, iParam3, iParam4, 0))
		{
			if (!_0xe10f2d7715ababec(uParam0))
			{
			}
		}
		if (uParam0->f_4 <= 0)
		{
			uParam0->f_43 = iVar0;
		}
		uParam0->f_4++;
	}
	if (absi((iVar0 - uParam0->f_43)) > Global_1901947->f_677.f_1)
	{
		return 3;
	}
	return 1;
}

int func_179(int iParam0)
{
	iVar0 = func_361(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_362(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_362(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_180(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_181(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			*uParam1 = { *Global_1293346->f_20.f_1[iVar0] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(int iParam0)
{
	return func_363(iParam0);
}

int func_183()
{
	return Global_1952637->f_1;
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 30)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_185(var uParam0, var uParam1, int iParam2)
{
	if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[0]), Global_1952637->f_83[0]->f_9))
	{
		func_68(uParam0, 3048);
		return false;
	}
	if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[8]), Global_1952637->f_83[8]->f_9))
	{
		func_68(uParam0, 3049);
		return false;
	}
	if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[9]), Global_1952637->f_83[9]->f_9))
	{
		func_68(uParam0, 3050);
		return false;
	}
	if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[2]), Global_1952637->f_83[2]->f_9))
	{
		func_68(uParam0, 3051);
		return false;
	}
	if ((&Global_1952637->f_1675.f_1[1] != &Global_1952637->f_83[1] || func_183() == 2026485318) && &Global_1952637->f_1675.f_1[1] != 0)
	{
		if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[1]), Global_1952637->f_83[1]->f_9))
		{
			func_68(uParam0, 3052);
			return false;
		}
	}
	if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[3]), Global_1952637->f_83[3]->f_9))
	{
		func_68(uParam0, 3053);
		return false;
	}
	if (func_183() == 2026485318 && &Global_1952637->f_1675.f_1[4] != 0)
	{
		if (!func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1675.f_1[4]), Global_1952637->f_83[4]->f_9))
		{
			func_68(uParam0, 3054);
			return false;
		}
	}
	if (!func_364(uParam0, uParam1, -115636569, uParam0->f_19[uParam0->f_2430]->f_8.f_474.f_12, -1389278274))
	{
		func_68(uParam0, 3055);
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_1058.f_6)
	{
		iVar1 = func_365(Global_1952637->f_1058.f_9[iVar0]->f_17);
		if (iVar1 != 0)
		{
			func_364(uParam0, uParam1, iParam2, &(Global_1952637->f_1058.f_9[iVar0]), iVar1);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 22)
	{
		iVar3 = func_366(iVar2, 1);
		iVar0 = func_111(&(Global_1952637->f_1058.f_9), iVar3);
		if (iVar0 == -1)
		{
			func_367(uParam0, 0, func_365(iVar3));
		}
		else
		{
			func_367(uParam0, &(Global_1952637->f_1058.f_9[iVar0]), func_365(iVar3));
		}
		iVar2++;
	}
	return true;
}

int func_186()
{
	if (func_183() == 2026485318)
	{
		iVar0 = func_121(2);
		switch (iVar0)
		{
			case 0:
				return 2131796361;
			case 1:
				return 1359332716;
			case 2:
				return -183628418;
			default:
				break;
		}
	}
	else
	{
		iVar0 = func_121(2);
		switch (iVar0)
		{
			case 0:
				return -57143180;
			case 1:
				return 1897855360;
			case 2:
				return 1457308924;
			default:
				break;
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 2131796361:
			return 1504650006;
		case 1359332716:
			return 1872645876;
		case -183628418:
			return 876959807;
		case -57143180:
			return -1809185548;
		case 1897855360:
			return -1036263145;
		case 1457308924:
			return -521462159;
		default:
			break;
	}
	if (func_183() == 24043185)
	{
		return -1809185548;
	}
	return 1504650006;
}

void func_188(var uParam0)
{
	switch (uParam0->f_19[uParam0->f_2430]->f_8.f_638)
	{
		case 1:
			iVar0 = 1608161492;
			break;
		case 2:
			iVar0 = 1915567481;
			break;
		default:
			iVar0 = 0;
			break;
	}
	func_184(&(uParam0->f_5435.f_18), iVar0);
	switch (uParam0->f_19[uParam0->f_2430]->f_8.f_639)
	{
		case 1:
			iVar0 = -648289249;
			break;
		case 2:
			iVar0 = 193415285;
			break;
		default:
			iVar0 = 0;
			break;
	}
	func_184(&(uParam0->f_5435.f_18), iVar0);
	switch (uParam0->f_19[uParam0->f_2430]->f_8.f_640)
	{
		case 1:
			iVar0 = 1849664180;
			break;
		case 2:
			iVar0 = 1634830616;
			break;
		default:
			iVar0 = 0;
			break;
	}
	func_184(&(uParam0->f_5435.f_18), iVar0);
}

bool func_189(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var10 = -1;
	Var10.f_1 = -1;
	Var20 = -1;
	Var20.f_1 = -1;
	if (uParam0->f_2902 > 0)
	{
		if (func_368(&Var0, 1702063850))
		{
			Var32 = { func_60(889965687, func_59(1), 1034665895, 1) };
			iVar31 = 0;
			while (iVar31 < uParam0->f_2902)
			{
				if (_0xa0b7094629724974(1702063850, &(uParam0->f_2601[iVar31])))
				{
					Jump @182; //curOff = 125
				}
				else if (!func_369(&Var0, &(uParam0->f_2601[iVar31]), uParam0->f_2601[iVar31]->f_1, Var32, uParam0->f_2601[iVar31]->f_5, 0))
				{
					bVar30 = true;
				}
				iVar31++;
			}
		}
		else
		{
			bVar30 = true;
		}
	}
	if (func_368(&Var10, -1406934746))
	{
		Var36.f_9 = 1;
		Var36.f_11 = -1591664384;
		Var36.f_8 = 26930588;
		if (uParam0->f_2905.f_890 == 0)
		{
			if (func_160(26930588, &uVar52))
			{
				Var36.f_13 = uVar52;
			}
			else if (func_161(26930588, 1, 59806960, 1))
			{
				Var36.f_13 = 59806960;
			}
			else if (func_161(26930588, 1, -570078785, 1))
			{
				Var36.f_13 = -570078785;
			}
			else
			{
				bVar30 = true;
			}
		}
		else
		{
			Var36.f_13 = uParam0->f_2905.f_890;
		}
		uParam0->f_2904 = func_370(26930588, Var36.f_13, 0);
		Var36.f_12 = -142743235;
		if (!func_371(&Var10, Var36, -1406934746, 0, -1))
		{
			bVar30 = true;
		}
	}
	else
	{
		bVar30 = true;
	}
	uVar53 = 1;
	if (func_368(&Var20, 644809794))
	{
		if (!_0x52bde32f21ba3b6d(Var20, -216698845, &(uParam0->f_5435.f_18.f_1), &uVar53))
		{
			bVar30 = true;
		}
	}
	else
	{
		bVar30 = true;
	}
	if (!bVar30)
	{
		if (_cashinventory_transaction_get_basket_is_valid(Var0))
		{
			if (!func_372(&Var0, &Var20, 1))
			{
				bVar30 = false;
			}
			else
			{
				Var20 = Var20.f_1;
				if (!func_372(&Var20, &Var10, 1))
				{
					bVar30 = false;
				}
			}
		}
		else if (!func_372(&Var10, &Var20, 1))
		{
			bVar30 = false;
		}
	}
	if (bVar30)
	{
		func_373(&Var0);
		func_373(&Var10);
		func_373(&Var20);
		uParam0->f_2903 = -1;
		return false;
	}
	uParam0->f_2903 = Var20.f_1;
	Var55.f_7 = -142743235;
	Var55.f_16 = -1;
	Var55 = 1;
	if (uParam0->f_2904 != 0)
	{
		Var55.f_16 = func_374(uParam0->f_2904);
	}
	func_375(uParam0->f_2903, Var55);
	return true;
}

int func_190(var uParam0, int iParam1)
{
	if (!func_358(iParam1))
	{
		return 3;
	}
	if (uParam0->f_62)
	{
		return 2;
	}
	if (!_0xe10f2d7715ababec(uParam0) && _0xfbe782b3165ac8ec(iParam1))
	{
		uParam0->f_62 = 1;
		return 2;
	}
	if (func_359(&(uParam0->f_50), *uParam0, iParam1))
	{
		uParam0->f_62 = 1;
		return 2;
	}
	func_171(0);
	if (!_cashinventory_is_session_ready())
	{
		return 1;
	}
	iVar0 = get_cloud_time_as_int();
	if (!_0xe10f2d7715ababec(uParam0))
	{
		if (uParam0->f_4 >= Global_1901947->f_677)
		{
			return 3;
		}
		if (func_376(uParam0, &(uParam0->f_18), iParam1))
		{
			if (!_0xe10f2d7715ababec(uParam0))
			{
			}
		}
		if (uParam0->f_4 <= 0)
		{
			uParam0->f_63 = iVar0;
		}
		uParam0->f_4++;
	}
	if (absi((iVar0 - uParam0->f_63)) > Global_1901947->f_677.f_1)
	{
		return 3;
	}
	return 1;
}

bool func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	Var0 = { func_377(iParam0) };
	if (!func_378(Var0))
	{
		return true;
	}
	if (!func_379(iParam0))
	{
		if (Global_1900736->f_69 <= 0)
		{
			Global_1900736->f_69 = absi(get_cloud_time_as_int());
		}
		else if (absi((Global_1900736->f_69 - get_cloud_time_as_int())) >= Global_1901947->f_677.f_1)
		{
			func_47(22, -1);
		}
		return false;
	}
	else if (Global_1900736->f_69 != 0)
	{
		Global_1900736->f_69 = 0;
	}
	func_380(get_cloud_time_as_int());
	func_381(iParam0, 1);
	if (func_382(iParam0, &uVar2))
	{
		func_384(func_383(-1892463704, uVar2), 1);
		Var3 = { func_383(1671659657, uVar2) };
		stat_id_set_to_posse_id(&Var3);
		iVar5 = 0;
		Var6 = { func_192(-1048906573) };
		if (_0x302e71c1d9ee75b9(&Var6, func_385(Var0), &iVar5) && iVar5 == 0)
		{
			func_384(func_383(909949304, uVar2), 1);
		}
	}
	if (!func_386(iParam0))
	{
		func_387(0);
	}
	func_388();
	func_389(iParam0);
	func_390(iParam0);
	func_391(0);
	func_393(func_392(iParam0));
	func_394(Var0, 1, 1, 0, 1);
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	return true;
}

struct<2> func_192(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_193(var uParam0, int iParam1)
{
	Var4 = { func_60(889965687, func_59(1), 1034665895, 1) };
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		iVar3 = func_365((*uParam0)[iVar0]->f_17);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar1 = uParam0[iVar0];
			if (func_395(uParam0[iVar0]) != 0)
			{
				iVar2 = func_243(Var4, iVar3, 0, -1);
				if (!func_230(iVar2, 0))
				{
				}
				else
				{
					func_396(iVar2, 0f, 1, 0);
					Jump @164; //curOff = 122
					if (func_397(iVar1, Var4, iVar3, 0, 0, 0) <= 0)
					{
					}
					else
					{
						func_396(iVar1, (*uParam0)[iVar0]->f_13, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_194(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

bool func_195(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_362(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_362(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_362(*iParam0, 2, 0, 0);
		return false;
	}
	func_362(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

void func_196(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (!func_398(iVar0, iParam2))
		{
		}
		else
		{
			*uParam1->f_1[iVar0] = { *uParam0->f_1[iVar0] };
		}
		iVar0++;
	}
}

void func_197(var uParam0)
{
	func_329(uParam0, 2048);
}

void func_198(var uParam0)
{
	iVar0 = func_399(_0x96fd694fe5be55dc(-2031856823));
	if (uParam0->f_208 != iVar0)
	{
		func_400(uParam0, iVar0);
		uParam0->f_208 = iVar0;
	}
}

void func_199(var uParam0)
{
	*uParam0 = _0xfbe782b3165ac8ec(-496459706);
	uParam0->f_641 = _0xca56dd6ab7a39f64(1676748802);
	func_268(uParam0);
	func_207(uParam0, 3);
}

void func_200(var uParam0)
{
	if (!_0x7907969497ea92f5(uParam0->f_641))
	{
		uParam0->f_641 = _0xca56dd6ab7a39f64(1676748802);
	}
	if (!_0x603ac35fd4602c76(uParam0->f_641))
	{
		return;
	}
	_datafile_register_query(uParam0->f_641, 1412340602, "CHARACTER_EDITOR_DATA/CONFIG_DATA/CONFIG(id=%x)");
	_datafile_register_query(uParam0->f_641, 1323943902, ":starting_view");
	_datafile_register_query(uParam0->f_641, 952427891, "UI_FLOW_DATA:file");
	_datafile_register_query(uParam0->f_641, -555536468, "UI_FLOW_DATA:event_channel");
	_datafile_register_query(uParam0->f_641, -1661625544, "UI_FLOW_DATA:entry_point");
	_datafile_register_query(uParam0->f_641, 2045925044, "UI_FLOW_DATA:state_machine");
	_datafile_register_query(uParam0->f_641, 842618077, "CHARACTER_EDITOR_DATA/CONFIG_DATA/CONFIG(id=%x)/APPEARANCE_PRESETS/PRESET_DATA(%i)");
	_datafile_register_query(uParam0->f_641, 2017591567, "APPEARANCE_PRESETS/PRESET_DATA(%i):id");
	_datafile_register_query(uParam0->f_641, 487109896, "APPEARANCE_PRESETS/PRESET_DATA(%i)");
	_datafile_register_query(uParam0->f_641, 309489923, "CHARACTER_EDITOR_DATA/CONFIG_DATA/CONFIG(id=%x)/APPEARANCE_PRESETS/PRESET_DATA(id=%x)");
	_datafile_register_query(uParam0->f_641, 1522809143, "HEAD_SHOP_ITEM:id");
	_datafile_register_query(uParam0->f_641, -445171996, "HEAD_SHOP_ITEM:head_preset");
	_datafile_register_query(uParam0->f_641, -1147317522, "HAIR_SHOP_ITEM:id");
	_datafile_register_query(uParam0->f_641, -1666165802, "HAIR_SHOP_ITEM:hair_style");
	_datafile_register_query(uParam0->f_641, -1155634628, "BEARD_SHOP_ITEM:id");
	_datafile_register_query(uParam0->f_641, -153846510, "BEARD_SHOP_ITEM:beard_style");
	_datafile_register_query(uParam0->f_641, -2136097746, "EYES_SHOP_ITEM:id");
	_datafile_register_query(uParam0->f_641, 133192300, "OVERLAY_PRESET:id");
	_datafile_register_query(uParam0->f_641, -1459246327, "HEAD_EXPRESSION:id");
	_datafile_register_query(uParam0->f_641, 34166189, "BODY_BUILD:id");
	_datafile_register_query(uParam0->f_641, 1058524365, "CHARACTER_EDITOR_DATA/CONFIG_DATA/CONFIG(id=%x)/EDITOR_VIEW_DATA/EDITOR_VIEW(id=%x)");
	_datafile_register_query(uParam0->f_641, 780817316, "CAMERA:position");
	_datafile_register_query(uParam0->f_641, 615455576, "CAMERA:rotation");
	_datafile_register_query(uParam0->f_641, -1059408258, "CAMERA:focus_distance");
	_datafile_register_query(uParam0->f_641, 1126571892, "CAMERA:field_of_view");
	_datafile_register_query(uParam0->f_641, -1483470091, "BODY_BUILD_DATA/BODY_BUILD(%i)");
	_datafile_register_query(uParam0->f_641, -272793456, "BODY_BUILD_DATA/BODY_BUILD(%i):id");
	_datafile_register_query(uParam0->f_641, 1405546932, "BODY_BUILD_DATA/BODY_BUILD(%i):outfit_item");
	_datafile_register_query(uParam0->f_641, -1500490422, ":outfit_item");
	_datafile_register_query(uParam0->f_641, -1764170728, ":shop_item_upper");
	_datafile_register_query(uParam0->f_641, -1679457187, ":shop_item_lower");
	_datafile_register_query(uParam0->f_641, 1430707226, "BODY_SHOP_ITEMS/BODY_SHOP_ITEM_DATA/BODY_SHOP_ITEM(%i)/BODY_BUILD_AND_ITEMS(id=%x)");
	_datafile_register_query(uParam0->f_641, 432983819, "BODY_SHOP_ITEMS/BODY_SHOP_ITEM_DATA(%i)");
	_datafile_register_query(uParam0->f_641, 1051763940, "BODY_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 268568456, "BODY_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1313066777, "HEAD_PRESET_DATA/HEAD_PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 17571750, "HEAD_PRESET_DATA/HEAD_PRESET(%i)");
	_datafile_register_query(uParam0->f_641, -1098476924, "HEAD_PRESET_DATA/HEAD_PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, 600320052, "HEAD_SHOP_ITEM_DATA/HEAD_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 985932463, "HEAD_SHOP_ITEM_DATA/HEAD_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 681050253, "HEAD_SHOP_ITEM_DATA/HEAD_SHOP_ITEM(%i):skin_tone");
	_datafile_register_query(uParam0->f_641, 849847566, "HEAD_SHOP_ITEM_DATA/HEAD_SHOP_ITEM(id=%x):skin_tone");
	_datafile_register_query(uParam0->f_641, 482106809, "HEAD_EXPRESSION_PRESETS/PRESET_DATA(%i):id");
	_datafile_register_query(uParam0->f_641, 634578152, "HEAD_EXPRESSION_PRESETS/PRESET_DATA(%i)");
	_datafile_register_query(uParam0->f_641, -523500711, "HEAD_EXPRESSION_PRESETS/PRESET_DATA(id=%x)");
	_datafile_register_query(uParam0->f_641, -334096849, "EXPRESSION_ZONE_PRESETS/HEAD_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 1598718135, "EXPRESSION_ZONE_PRESETS/HEAD_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, -1356950182, "EXPRESSION_ZONE_PRESETS/HEAD_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, 224394952, "EXPRESSION_ZONE_PRESETS/CHEEKS_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 831873862, "EXPRESSION_ZONE_PRESETS/CHEEKS_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, 2067858905, "EXPRESSION_ZONE_PRESETS/CHEEKS_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, 759265724, "EXPRESSION_ZONE_PRESETS/EARS_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 1364455116, "EXPRESSION_ZONE_PRESETS/EARS_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, 909358421, "EXPRESSION_ZONE_PRESETS/EARS_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, 1531934181, "EXPRESSION_ZONE_PRESETS/EYES_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, -1389899508, "EXPRESSION_ZONE_PRESETS/EYES_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, -855173146, "EXPRESSION_ZONE_PRESETS/EYES_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, -107285187, "EXPRESSION_ZONE_PRESETS/JAW_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 949000652, "EXPRESSION_ZONE_PRESETS/JAW_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, -1300118048, "EXPRESSION_ZONE_PRESETS/JAW_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, -570027044, "EXPRESSION_ZONE_PRESETS/MOUTH_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 636446122, "EXPRESSION_ZONE_PRESETS/MOUTH_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, 1758334380, "EXPRESSION_ZONE_PRESETS/MOUTH_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, -655484384, "EXPRESSION_ZONE_PRESETS/NOSE_PRESET/PRESET(%i):id");
	_datafile_register_query(uParam0->f_641, 799607560, "EXPRESSION_ZONE_PRESETS/NOSE_PRESET/PRESET(%i)");
	_datafile_register_query(uParam0->f_641, -1675194747, "EXPRESSION_ZONE_PRESETS/NOSE_PRESET/PRESET(id=%x)");
	_datafile_register_query(uParam0->f_641, 1443359140, "EXPRESSION(%i)");
	_datafile_register_query(uParam0->f_641, -637074253, "EXPRESSION(%i):id");
	_datafile_register_query(uParam0->f_641, -703031989, "EXPRESSION(%i):value");
	_datafile_register_query(uParam0->f_641, -624280703, ":id");
	_datafile_register_query(uParam0->f_641, 548679286, ":blacklist");
	_datafile_register_query(uParam0->f_641, 1575973821, ":greylist");
	_datafile_register_query(uParam0->f_641, 1736311509, "EXPRESSION_FINE_TUNING_DATA");
	_datafile_register_query(uParam0->f_641, 1912664876, "EXPRESSION_MENU_ITEM(menu_item=%x)");
	_datafile_register_query(uParam0->f_641, -1041943319, "EXPRESSION_FINE_TUNING_DATA/EXPRESSION_MENU_ITEM(expression_x=%x)");
	_datafile_register_query(uParam0->f_641, -1621954619, "EXPRESSION_FINE_TUNING_DATA/EXPRESSION_MENU_ITEM(expression_y=%x)");
	_datafile_register_query(uParam0->f_641, 1678788246, ":min_x");
	_datafile_register_query(uParam0->f_641, 2056739803, ":max_x");
	_datafile_register_query(uParam0->f_641, -1906926814, ":min_y");
	_datafile_register_query(uParam0->f_641, 1809301084, ":max_y");
	_datafile_register_query(uParam0->f_641, 1845412653, "EYES_SHOP_ITEM_DATA/EYES_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1142395683, "EYES_SHOP_ITEM_DATA/EYES_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 424580283, "TEETH_SHOP_ITEM_DATA/TEETH_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 602139475, "TEETH_SHOP_ITEM_DATA/TEETH_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 634844725, "FACIAL_OVERLAY_ITEMS/SKIN_MOTTLING_OVERLAY_DATA/SKIN_MOTTLING_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 2044935932, "FACIAL_OVERLAY_ITEMS/SKIN_MOTTLING_OVERLAY_DATA/SKIN_MOTTLING_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1238028369, "FACIAL_OVERLAY_ITEMS/SKIN_MOTTLING_OVERLAY_DATA/SKIN_MOTTLING_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1371413737, "FACIAL_OVERLAY_ITEMS/AGING_OVERLAY_DATA/AGING_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -257537884, "FACIAL_OVERLAY_ITEMS/AGING_OVERLAY_DATA/AGING_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1075394173, "FACIAL_OVERLAY_ITEMS/AGING_OVERLAY_DATA/AGING_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1913184527, "FACIAL_OVERLAY_ITEMS/COMLEXION_OVERLAY_DATA/COMLEXION_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -902256582, "FACIAL_OVERLAY_ITEMS/COMLEXION_OVERLAY_DATA/COMLEXION_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1097683517, "FACIAL_OVERLAY_ITEMS/COMLEXION_OVERLAY_DATA/COMLEXION_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 663304728, "FACIAL_OVERLAY_ITEMS/COMLEXION_2_OVERLAY_DATA/COMLEXION_2_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 466962332, "FACIAL_OVERLAY_ITEMS/COMLEXION_2_OVERLAY_DATA/COMLEXION_2_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -436169265, "FACIAL_OVERLAY_ITEMS/COMLEXION_2_OVERLAY_DATA/COMLEXION_2_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1214818401, "FACIAL_OVERLAY_ITEMS/FRECKLES_OVERLAY_DATA/FRECKLES_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1569204576, "FACIAL_OVERLAY_ITEMS/FRECKLES_OVERLAY_DATA/FRECKLES_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1925045926, "FACIAL_OVERLAY_ITEMS/FRECKLES_OVERLAY_DATA/FRECKLES_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -575561068, "FACIAL_OVERLAY_ITEMS/MOLES_OVERLAY_DATA/MOLES_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1443912598, "FACIAL_OVERLAY_ITEMS/MOLES_OVERLAY_DATA/MOLES_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1554851439, "FACIAL_OVERLAY_ITEMS/MOLES_OVERLAY_DATA/MOLES_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1771423197, "FACIAL_OVERLAY_ITEMS/SPOTS_OVERLAY_DATA/SPOTS_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1658889749, "FACIAL_OVERLAY_ITEMS/SPOTS_OVERLAY_DATA/SPOTS_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1929508676, "FACIAL_OVERLAY_ITEMS/SPOTS_OVERLAY_DATA/SPOTS_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -973534326, "FACIAL_OVERLAY_ITEMS/SCAR_OVERLAY_DATA/SCAR_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1403563071, "FACIAL_OVERLAY_ITEMS/SCAR_OVERLAY_DATA/SCAR_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1170679166, "FACIAL_OVERLAY_ITEMS/SCAR_OVERLAY_DATA/SCAR_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 184602215, "FACIAL_OVERLAY_ITEMS/SPOTS_2_OVERLAY_DATA/SPOTS_2_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1648363471, "FACIAL_OVERLAY_ITEMS/SPOTS_2_OVERLAY_DATA/SPOTS_2_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 121248466, "FACIAL_OVERLAY_ITEMS/SPOTS_2_OVERLAY_DATA/SPOTS_2_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -2002568296, "FACIAL_OVERLAY_ITEMS/FOUNDATION_OVERLAY_DATA/FOUNDATION_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1126672236, "FACIAL_OVERLAY_ITEMS/FOUNDATION_OVERLAY_DATA/FOUNDATION_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1900434660, "FACIAL_OVERLAY_ITEMS/FOUNDATION_OVERLAY_DATA/FOUNDATION_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 1643877740, "FACIAL_OVERLAY_ITEMS/BLUSHER_OVERLAY_DATA/BLUSHER_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 757404833, "FACIAL_OVERLAY_ITEMS/BLUSHER_OVERLAY_DATA/BLUSHER_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -772353261, "FACIAL_OVERLAY_ITEMS/BLUSHER_OVERLAY_DATA/BLUSHER_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 904500170, "FACIAL_OVERLAY_ITEMS/EYELINER_OVERLAY_DATA/EYELINER_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1074654442, "FACIAL_OVERLAY_ITEMS/EYELINER_OVERLAY_DATA/EYELINER_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1090739654, "FACIAL_OVERLAY_ITEMS/EYELINER_OVERLAY_DATA/EYELINER_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 403633317, "FACIAL_OVERLAY_ITEMS/EYESHADOW_STYLE_DATA/EYESHADOW_STYLE(%i)");
	_datafile_register_query(uParam0->f_641, -49839760, "FACIAL_OVERLAY_ITEMS/EYESHADOW_STYLE_DATA/EYESHADOW_STYLE(%i):id");
	_datafile_register_query(uParam0->f_641, -1889929174, "FACIAL_OVERLAY_ITEMS/EYESHADOW_STYLE_DATA/EYESHADOW_STYLE(%i):displayName");
	_datafile_register_query(uParam0->f_641, 1186160889, "FACIAL_OVERLAY_ITEMS/EYESHADOW_STYLE_DATA/EYESHADOW_STYLE(%x)");
	_datafile_register_query(uParam0->f_641, -29644304, "EYESHADOW_OVERLAY_DATA/EYESHADOW_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1981135023, "EYESHADOW_OVERLAY_DATA/EYESHADOW_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1600442769, "EYESHADOW_OVERLAY_DATA/EYESHADOW_OVERLAY_ITEM(%i):swatch_pallet_tint");
	_datafile_register_query(uParam0->f_641, -346051150, "FACIAL_OVERLAY_ITEMS/LIPSTICK_STYLE_DATA/LIPSTICK_STYLE(%i)");
	_datafile_register_query(uParam0->f_641, 693992033, "FACIAL_OVERLAY_ITEMS/LIPSTICK_STYLE_DATA/LIPSTICK_STYLE(%i):id");
	_datafile_register_query(uParam0->f_641, -617533313, "FACIAL_OVERLAY_ITEMS/LIPSTICK_STYLE_DATA/LIPSTICK_STYLE(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1474502911, "FACIAL_OVERLAY_ITEMS/LIPSTICK_STYLE_DATA/LIPSTICK_STYLE(%x)");
	_datafile_register_query(uParam0->f_641, -978910727, "LIPSTICK_OVERLAY_DATA/LIPSTICK_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1261431414, "LIPSTICK_OVERLAY_DATA/LIPSTICK_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -312145083, "LIPSTICK_OVERLAY_DATA/LIPSTICK_OVERLAY_ITEM(%i):swatch_pallet_tint");
	_datafile_register_query(uParam0->f_641, -818558948, "FACIAL_OVERLAY_ITEMS/EYEBROWS_STYLE_DATA/EYEBROWS_STYLE(%i)");
	_datafile_register_query(uParam0->f_641, 626133474, "FACIAL_OVERLAY_ITEMS/EYEBROWS_STYLE_DATA/EYEBROWS_STYLE(%i):id");
	_datafile_register_query(uParam0->f_641, -1498025195, "FACIAL_OVERLAY_ITEMS/EYEBROWS_STYLE_DATA/EYEBROWS_STYLE(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1029675100, "FACIAL_OVERLAY_ITEMS/EYEBROWS_STYLE_DATA/EYEBROWS_STYLE(%x)");
	_datafile_register_query(uParam0->f_641, -864566739, "EYEBROWS_OVERLAY_DATA/EYEBROWS_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1466947264, "EYEBROWS_OVERLAY_DATA/EYEBROWS_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1531423977, "FACIAL_OVERLAY_ITEMS/SCABS_OVERLAY_DATA/SCABS_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -173657629, "FACIAL_OVERLAY_ITEMS/SCABS_OVERLAY_DATA/SCABS_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1356474389, "FACIAL_OVERLAY_ITEMS/SCABS_OVERLAY_DATA/SCABS_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 1837425549, "FACIAL_OVERLAY_ITEMS/GRIME_OVERLAY_DATA/GRIME_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -393003734, "FACIAL_OVERLAY_ITEMS/GRIME_OVERLAY_DATA/GRIME_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 1050985124, "FACIAL_OVERLAY_ITEMS/GRIME_OVERLAY_DATA/GRIME_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 563671472, "FACIAL_OVERLAY_ITEMS/GRIME_WEAR_DATA/GRIME_WEAR_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1693119530, "FACIAL_OVERLAY_ITEMS/GRIME_WEAR_DATA/GRIME_WEAR_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -485140013, "FACIAL_OVERLAY_ITEMS/GRIME_WEAR_DATA/GRIME_WEAR_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, -1052235123, "FACIAL_OVERLAY_ITEMS/FACE_PAINT_OVERLAY_DATA/FACE_PAINT_OVERLAY_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1253870904, "FACIAL_OVERLAY_ITEMS/FACE_PAINT_OVERLAY_DATA/FACE_PAINT_OVERLAY_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -1154856042, "FACIAL_OVERLAY_ITEMS/FACE_PAINT_OVERLAY_DATA/FACE_PAINT_OVERLAY_ITEM(%i):displayName");
	_datafile_register_query(uParam0->f_641, 1104904264, "HAIR_STYLE_DATA/HAIR_STYLE(%i)");
	_datafile_register_query(uParam0->f_641, 1377922294, "HAIR_STYLE_DATA/HAIR_STYLE(%i):id");
	_datafile_register_query(uParam0->f_641, 696002461, "HAIR_STYLE_DATA/HAIR_STYLE(id=%x)");
	_datafile_register_query(uParam0->f_641, -824364195, "HAIR_SHOP_ITEM_DATA/HAIR_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 867854846, "HAIR_SHOP_ITEM_DATA/HAIR_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, -891690336, "BEARD_STYLE_DATA/BEARD_STYLE(%i)");
	_datafile_register_query(uParam0->f_641, 1195402671, "BEARD_STYLE_DATA/BEARD_STYLE(%i):id");
	_datafile_register_query(uParam0->f_641, -1408486622, "BEARD_STYLE_DATA/BEARD_STYLE(id=%x)");
	_datafile_register_query(uParam0->f_641, 1229402512, "BEARD_SHOP_ITEM_DATA/BEARD_SHOP_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, 1911250089, "BEARD_SHOP_ITEM_DATA/BEARD_SHOP_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 650326438, "UI_PAGE_DATA/UI_PAGE(%i)");
	_datafile_register_query(uParam0->f_641, 389553110, "UI_PAGE_DATA/UI_PAGE(%i):id");
	_datafile_register_query(uParam0->f_641, 1492061954, "UI_PAGE_DATA/UI_PAGE(%i):editor_view");
	_datafile_register_query(uParam0->f_641, -1218710350, "UI_PAGE_DATA/UI_PAGE(%i):zoomed_editor_view");
	_datafile_register_query(uParam0->f_641, -987524096, "UI_ITEM_DATA/UI_ITEM(%i)");
	_datafile_register_query(uParam0->f_641, -1783206256, "UI_ITEM_DATA/UI_ITEM(%i):id");
	_datafile_register_query(uParam0->f_641, 205449994, "UI_ITEM_DATA/UI_ITEM(%i):editor_view");
	_datafile_register_query(uParam0->f_641, -686558538, "UI_ITEM_DATA/UI_ITEM(%i):zoomed_editor_view");
	_datafile_register_query(uParam0->f_641, 205225927, "OVERLAY_PRESETS/PRESET_DATA(%i)");
	_datafile_register_query(uParam0->f_641, -1926004527, "OVERLAY_PRESETS/PRESET_DATA(%i):id");
	uParam0->f_642 = uParam0->f_641;
	func_207(uParam0, 2);
}

void func_201(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0->f_1178 >= 286)
		{
		}
		else
		{
			if (!func_401(uParam0, uParam0->f_1178))
			{
			}
			uParam0->f_1178++;
			iVar0++;
		}
	}
	if (uParam0->f_1178 >= 286)
	{
		func_207(uParam0, 4);
	}
}

void func_202(var uParam0)
{
	if (!func_257(uParam0, 1))
	{
		return;
	}
	if (uParam0->f_614 == 0)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_615))
	{
		return;
	}
	*uParam0 = _0xfbe782b3165ac8ec(-496459706);
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, uParam0->f_614, 0))
	{
		func_207(uParam0, 8);
		return;
	}
	uParam0->f_616 = func_280(uParam0, 1323943902, 0, 0);
	if (uParam0->f_616 == 0)
	{
		func_207(uParam0, 8);
		return;
	}
	uParam0->f_649 = func_280(uParam0, 952427891, 0, 0);
	if (uParam0->f_649 == 0)
	{
		func_207(uParam0, 8);
		return;
	}
	uParam0->f_649.f_1 = func_280(uParam0, -555536468, 0, 0);
	if (uParam0->f_649.f_1 == 0)
	{
		func_207(uParam0, 8);
		return;
	}
	uParam0->f_649.f_2 = func_280(uParam0, -1661625544, 0, 0);
	if (uParam0->f_649.f_2 == 0)
	{
		func_207(uParam0, 8);
		return;
	}
	func_207(uParam0, 5);
}

void func_203(var uParam0)
{
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, uParam0->f_614, 0))
	{
		func_207(uParam0, 8);
		return;
	}
	bVar0 = false;
	bVar1 = false;
	iVar4 = 0;
	while (iVar4 < 25)
	{
		if (bVar0 && bVar1)
		{
		}
		else
		{
			if (uParam0->f_649.f_47 < func_290(uParam0, 650326438, uParam0->f_649.f_47, 0))
			{
				iVar2 = func_402(func_280(uParam0, 389553110, uParam0->f_649.f_47, 0));
				if (iVar2 > -1 && iVar2 <= 21)
				{
					uParam0->f_649.f_3[iVar2] = func_280(uParam0, 1492061954, uParam0->f_649.f_47, 0);
					if (&uParam0->f_649.f_3[iVar2] != 0)
					{
					}
					uParam0->f_649.f_3[iVar2]->f_1 = func_280(uParam0, -1218710350, uParam0->f_649.f_47, 0);
					if (uParam0->f_649.f_3[iVar2]->f_1 != 0)
					{
					}
				}
				bVar0 = false;
				uParam0->f_649.f_47++;
			}
			else
			{
				bVar0 = true;
			}
			if (uParam0->f_649.f_232 < func_290(uParam0, -987524096, uParam0->f_649.f_232, 0))
			{
				iVar3 = func_403(func_280(uParam0, -1783206256, uParam0->f_649.f_232, 0));
				if (iVar3 > -1 && iVar3 <= 91)
				{
					uParam0->f_649.f_48[iVar3] = func_280(uParam0, 205449994, uParam0->f_649.f_232, 0);
					if (&uParam0->f_649.f_48[iVar3] != 0)
					{
					}
					uParam0->f_649.f_48[iVar3]->f_1 = func_280(uParam0, -686558538, uParam0->f_649.f_232, 0);
					if (uParam0->f_649.f_48[iVar3]->f_1 != 0)
					{
					}
				}
				bVar1 = false;
				uParam0->f_649.f_232++;
			}
			else
			{
				bVar1 = true;
			}
			iVar4++;
		}
	}
	if (!bVar0 || !bVar1)
	{
		return;
	}
	if (!func_404())
	{
		return;
	}
	switch (uParam0->f_614)
	{
		case 2107046455:
			func_405(uParam0);
			break;
		case -1029951690:
			func_405(uParam0);
			break;
		default:
			func_207(uParam0, 8);
			return;
	}
	if (!func_406(uParam0))
	{
		return;
	}
	func_207(uParam0, 6);
}

void func_204(var uParam0)
{
	if (func_257(uParam0, 2))
	{
		func_207(uParam0, 8);
		return;
	}
	if (_is_app_running(uParam0->f_649))
	{
		_close_app_by_hash(uParam0->f_649);
	}
	if (!func_257(uParam0, 4))
	{
		return;
	}
	if (!func_407(uParam0))
	{
		return;
	}
	switch (uParam0->f_614)
	{
		case 2107046455:
			func_408(uParam0);
			break;
		case -1029951690:
			func_409(uParam0);
			break;
	}
	uParam0->f_639 = uParam0->f_616;
	func_97(uParam0->f_1193.f_647);
	Global_1952637->f_1058 = { uParam0->f_1193.f_648 };
	Global_1952637->f_1675 = { uParam0->f_1193.f_1054 };
	func_207(uParam0, 7);
}

void func_205(var uParam0)
{
	func_410(uParam0);
	func_411(uParam0);
	func_412(uParam0);
	func_413(uParam0);
	func_414(uParam0);
	func_415(uParam0, uParam0->f_649.f_231, 0);
	_0x2804658eb7d8a50b(4, 322203674);
	if (func_257(uParam0, 2))
	{
		func_207(uParam0, 8);
		return;
	}
	if (!func_257(uParam0, 4))
	{
		func_207(uParam0, 8);
		return;
	}
	if (!func_257(uParam0, 8))
	{
		_launch_app_by_hash_with_entry(uParam0->f_649, uParam0->f_649.f_2);
		if (!_is_app_running(uParam0->f_649))
		{
			return;
		}
		func_305(uParam0, 8);
	}
}

void func_206(var uParam0)
{
	func_329(uParam0, 1);
	func_329(uParam0, 2);
	func_329(uParam0, 4);
	func_329(uParam0, 8);
	func_329(uParam0, 16);
	func_329(uParam0, 32);
	func_329(uParam0, 64);
	func_329(uParam0, 256);
	func_329(uParam0, 512);
	func_329(uParam0, 1024);
	func_329(uParam0, 2048);
	uParam0->f_614 = 0;
	uParam0->f_615 = 0;
	if (_is_app_running(uParam0->f_649))
	{
		_close_app_by_hash(uParam0->f_649);
	}
	uParam0->f_639 = 0;
	uParam0->f_617 = 0;
	uParam0->f_649.f_46 = -1;
	uParam0->f_649.f_47 = 0;
	uParam0->f_649.f_231 = -1;
	uParam0->f_649.f_232 = 0;
	func_416();
	func_417(uParam0);
	remove_anim_dict(func_256(0));
	destroy_cam(uParam0->f_617.f_1, false);
	destroy_cam(uParam0->f_628.f_1, false);
	func_207(uParam0, 4);
}

void func_207(var uParam0, int iParam1)
{
	uParam0->f_209 = iParam1;
}

int func_208(int iParam0, int iParam1)
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

void func_209(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_210(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_211()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_212(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

bool func_213(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_214(int iParam0)
{
	iVar0 = 6;
	if (func_418(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

bool func_215(int iParam0)
{
	if (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_3) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_3))
	{
		return true;
	}
	return false;
}

void func_216(var uParam0)
{
	if (_databinding_is_data_id_valid(&(uParam0->f_891[0])))
	{
		_databinding_remove_data_entry(&(uParam0->f_891[0]));
		func_419(uParam0);
	}
	if (_is_app_running(uParam0->f_649))
	{
		_close_app_by_hash(uParam0->f_649);
	}
	if (does_cam_exist(uParam0->f_617.f_1))
	{
		destroy_cam(uParam0->f_617.f_1, false);
	}
	func_129(&(uParam0->f_882), 1, 1);
	func_129(&(uParam0->f_883), 1, 1);
}

bool func_217(vector3 vParam0, var uParam3, float fParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_420(vParam0)];
	iVar1 = func_421(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_422(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_218(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_423(255) == 4)
	{
		return;
	}
	if (func_83(vParam0))
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
		func_424(0, 0, 0, 1);
	}
	func_219(0);
	func_219(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_425(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = fParam3;
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
	func_426(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = fParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_427(Global_1102219->f_3849, 36);
	func_428(Global_1102219->f_3888, 36);
}

int func_219(int iParam0)
{
	if (func_429(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
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
	iVar0 = func_145(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_430(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_431(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return true;
}

int func_221(int iParam0)
{
	Var1 = -961687407;
	if (func_7() == -1)
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
	return func_432(iVar0);
}

int func_222(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_58(bParam4))
	{
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_114(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_114(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_266(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

int func_223(int iParam0, int iParam1)
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

bool func_224(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_333(iParam0, 1)])->f_11 && iParam1) != 0;
}

void func_225(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_433(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_333(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_333(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_333(iParam0, 1)])->f_11 && iParam1));
}

int func_228(bool bParam0)
{
	if (func_7() == -1)
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

struct<4> func_229()
{
	return Var0;
}

bool func_230(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_231()
{
	func_276(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 7);
}

void func_232(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	*uParam0 = Global_17411.f_55.f_644.f_33[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
	if (119907797 == func_434(&(uParam0->f_1[10])) && func_99(&(uParam0->f_1[1]), 458991572))
	{
		uParam0->f_1[10] = &Global_1952637->f_83[10];
	}
}

void func_233(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_435(uParam0->f_1[iVar0], 2))
		{
			if (func_398(iVar0, iParam1))
			{
				vVar4 = { func_436(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_437(iVar0, 4))
				{
					func_438(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_439(iVar0, 4, 6);
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

void func_234()
{
	Global_1952637->f_1675 = Global_1952637->f_1556;
	Global_1952637->f_1554 = Global_1952637->f_1552;
	Global_1952637->f_1554.f_1 = Global_1952637->f_1552.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
		iVar0++;
	}
}

void func_235()
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637->f_4[iVar0]->f_1 = &Global_17411.f_55.f_644.f_1736[iVar0];
		iVar0++;
	}
	Global_1952637->f_4[0]->f_1 = 0f;
	Global_17411.f_55.f_644.f_1736[0] = 0f;
}

void func_236()
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
	if (!func_440(32))
	{
		Var0 = { func_244(0, -1591664384, -1591664384, -1591664384, 2047428024, 0, 0) };
		if (func_441(&Var0, 1) > 0)
		{
			func_176(32);
		}
	}
	if (!func_440(64))
	{
		Var0 = { func_244(0, -1591664384, -1591664384, -1591664384, 502936876, 0, 0) };
		if (func_441(&Var0, 1) > 0)
		{
			func_176(64);
		}
	}
}

void func_237(struct<4> Param0)
{
	vVar0 = 11;
	vVar0.f_1.f_1 = -1;
	vVar0.f_1.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	if (func_397(-55206167, func_59(1), -1990194462, 1, 0, 0) >= 5 && _0xfbe782b3165ac8ec(-496459706))
	{
		if (!func_442(&vVar0))
		{
			func_443(&vVar0);
			return;
		}
	}
	iVar35 = func_243(Param0, -751549960, 1, -1);
	iVar36 = func_444(iVar35);
	bVar37 = true;
	if (iVar35 == 0)
	{
		bVar37 = false;
	}
	if (iVar36 != -1 && &vVar0[iVar36] == 1)
	{
		bVar37 = false;
	}
	if (bVar37)
	{
		func_265(&(Global_1952637->f_1556), &uVar34, iVar35, iVar36, 1, 0, 0, 0, 8);
	}
	else
	{
		if (func_445(2, 0))
		{
			func_265(&(Global_1952637->f_1556), &uVar34, 0, 0, 1, 0, 0, 0, 8);
		}
		else
		{
			vVar0[0] = 2;
			vVar0[0]->f_1 = 9900;
			func_443(&vVar0);
			func_446(491602716, 1, 1);
			return;
		}
		func_446(491602716, 1, 1);
	}
	func_234();
}

void func_238(struct<4> Param0)
{
	iVar0 = func_447(Param0, 1);
	func_348(func_286(iVar0));
}

void func_239(struct<4> Param0, bool bParam4)
{
	Var5.f_9 = 1;
	Var5.f_11 = -1591664384;
	Var23.f_2 = -1;
	Var23.f_13 = 1065353216;
	Var23.f_14 = 1065353216;
	iVar41 = 0;
	if (func_183() == 24043185)
	{
		iVar41 = 1;
	}
	func_448(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9));
	func_449(&(Global_1952637->f_1058), &(Global_1952637->f_1675.f_1[0]), iVar41, 0, 6);
	iVar0 = 2;
	while (iVar0 <= 19)
	{
		iVar22 = func_366(iVar0, 1);
		iVar4 = func_365(iVar22);
		if (iVar4 == 0)
		{
		}
		else
		{
			iVar3 = func_243(Param0, iVar4, 1, -1);
			if (!func_230(iVar3, 0))
			{
				iVar3 = func_450(iVar4);
				iVar1 = func_111(&(Global_1952637->f_1058.f_9), iVar22);
				if (func_230(iVar3, 0))
				{
					Var5 = { func_451(func_60(iVar3, Param0, iVar4, 1), 1, 0) };
					if (iVar1 == -1)
					{
						func_452(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), iVar3, 1, 0);
					}
					else
					{
						if (iVar3 != &Global_1952637->f_1058.f_9[iVar1])
						{
							if (func_453(&Var23, iVar3, 1, 0, 6))
							{
								*Global_1952637->f_1058.f_9[iVar1] = { Var23 };
							}
						}
						else
						{
							func_454(Global_1952637->f_1058.f_9[iVar1]);
						}
						if (bParam4)
						{
							if (Var5.f_16 > 0 && Var5.f_16 != func_455(Global_1952637->f_1058.f_9[iVar1]->f_13))
							{
								Global_1952637->f_1058.f_9[iVar1]->f_13 = func_456(Var5.f_16);
							}
							else if (Global_1952637->f_1058.f_9[iVar1]->f_13 > 0f && Var5.f_16 != func_455(Global_1952637->f_1058.f_9[iVar1]->f_13))
							{
								bVar2 = true;
							}
						}
					}
					if (bVar2)
					{
						func_396(iVar3, Global_1952637->f_1058.f_9[iVar1]->f_13, 1, 1);
					}
					else
					{
						func_457(iVar3, 1, 1);
					}
				}
				else if (iVar1 != -1)
				{
					func_458(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), iVar1);
				}
			}
			else if (func_395(iVar3) != 0)
			{
				iVar1 = func_111(&(Global_1952637->f_1058.f_9), iVar22);
				if (iVar1 != -1)
				{
					func_458(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), iVar1);
				}
			}
			else
			{
				iVar1 = func_111(&(Global_1952637->f_1058.f_9), iVar22);
				if (iVar1 == -1)
				{
					func_452(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), iVar3, 1, 1);
				}
				else
				{
					Var5 = { func_451(func_60(iVar3, Param0, iVar4, 1), 1, 0) };
					if (&Global_1952637->f_1058.f_9[iVar1] != iVar3)
					{
						if (func_453(&Var23, iVar3, 1, 1, 6))
						{
							*Global_1952637->f_1058.f_9[iVar1] = { Var23 };
						}
					}
					else
					{
						func_454(Global_1952637->f_1058.f_9[iVar1]);
					}
					if (bParam4)
					{
						if (Var5.f_16 > 0 && Var5.f_16 != func_455(Global_1952637->f_1058.f_9[iVar1]->f_13))
						{
							Global_1952637->f_1058.f_9[iVar1]->f_13 = func_456(Var5.f_16);
						}
						else if (Global_1952637->f_1058.f_9[iVar1]->f_13 > 0f && Var5.f_16 != func_455(Global_1952637->f_1058.f_9[iVar1]->f_13))
						{
							func_396(iVar3, Global_1952637->f_1058.f_9[iVar1]->f_13, 1, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_294(func_157(-1130352927), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 0);
	func_294(func_157(1367443060), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 0);
	func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
}

bool func_240(int iParam0)
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

int func_241(int iParam0)
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

bool func_242(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_459(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_460())
	{
		return func_459(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_459(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_243(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_461(&uParam0, iParam4, bParam5, iParam6);
}

struct<14> func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_245(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_228(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_246(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_247(int iParam0)
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

bool func_248(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_462(0))
	{
		return func_463(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_355(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_228(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_249(bool bParam0)
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

int func_250(int iParam0, int iParam1)
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

void func_251(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_252(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_464(iParam0);
	}
	Global_1139381->f_3876.f_2[func_252(iParam0, 1)] = bParam1;
}

int func_252(int iParam0, int iParam1)
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

bool func_253(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_254(var uParam0, var uParam1, bool bParam2)
{
	Var1.f_2 = -1;
	Var1.f_13 = 1065353216;
	Var1.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 0)
	{
		if ((*uParam1)[iVar0]->f_2 < 1)
		{
		}
		else
		{
			*(*uParam1)[iVar0] = { Var1 };
		}
		iVar0 = (iVar0 + -1);
	}
	if (bParam2)
	{
		_reset_ped_texture_2(*uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	func_345(uParam0, 4);
}

int func_255(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_465())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "FACE_HUMAN@GEN_MALE@BASE";
			break;
		case 1:
			sVar0 = "Face_Dentistry_In";
			break;
		case 2:
			sVar0 = "Face_Dentistry_Loop";
			break;
		case 3:
			sVar0 = "Face_Dentistry_Out";
			break;
		case 4:
			sVar0 = "FACE_HUMAN@GEN_MALE@BASE";
			break;
		case 5:
			sVar0 = "eyes_wide_enter";
			break;
		case 6:
			sVar0 = "mood_normal_eyes_wide";
			break;
		case 7:
			sVar0 = "eyes_wide_exit";
			break;
		case 8:
			sVar0 = "mp_character_creator@male@fidgets";
			break;
		case 9:
			sVar0 = "mp_character_creator@female@fidgets";
			break;
		case 10:
			sVar0 = "mood_normal_zoom";
			break;
	}
	return sVar0;
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0->f_210 && iParam1) != 0;
}

bool func_258(var uParam0)
{
	return func_466(*uParam0, 1);
}

float func_259(var uParam0)
{
	if (!func_258(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_467(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_468() - uParam0->f_1);
}

bool func_260(var uParam0, int iParam1, char* sParam2)
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

int func_261(int iParam0)
{
	return iParam0;
}

int func_262(int iParam0, int iParam1)
{
	if (!func_469(iParam0, 2))
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

int func_263(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (Global_1952637->f_2843.f_1 >= 5)
	{
		return 0;
	}
	if (!func_470(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_221(iParam0);
	return func_471(iParam1, iVar0, bParam2, 1);
}

void func_264()
{
	Global_1952637->f_1556 = Global_1952637->f_1675;
	Global_1952637->f_1552 = Global_1952637->f_1554;
	Global_1952637->f_1552.f_1 = Global_1952637->f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

bool func_265(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	if (iParam2 == 1378879298)
	{
		if (!func_472(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (!func_473(uParam0, iParam3, iParam2) && !func_474(uParam0, iParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_158(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]))
		{
			func_475(1108822547);
		}
		else
		{
			func_476(1108822547);
		}
	}
	if (bParam5)
	{
		func_477(2);
	}
	return true;
}

void func_266(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_478(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_158(32768) && func_224(1108822547, 8)) && func_398(10, iParam3))
	{
		func_479(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_333(iVar2, 1);
		if (func_224(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_398(iVar0, iParam3))
		{
		}
		else if ((func_224(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_224(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_480(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_481(iVar2, 1, 6);
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
					func_480(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_224(iVar2, 1))
					{
						func_227(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_482(uParam0->f_1[iVar0], iParam1);
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

void func_267(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, iParam2, 0))
	{
		return;
	}
	*iParam3 = uParam0->f_642.f_1;
	iVar3 = 0;
	iVar4 = func_290(uParam0, 17571750, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		func_270(uParam0, *iParam3);
		if (!func_279(uParam0, 17571750, iVar2, 0))
		{
			return;
		}
		*iParam4 = uParam0->f_642.f_1;
		iVar0 = func_290(uParam0, 600320052, 0, 0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (&Global_1952637->f_1675.f_1[iVar3] == func_280(uParam0, 985932463, iVar1, 0))
			{
				uParam1->f_474.f_13 = iVar2;
				uParam1->f_645 = &Global_1952637->f_1675.f_1[iVar3];
				uParam1->f_474.f_10 = iVar1;
				return;
			}
			iVar1++;
		}
		iVar2++;
	}
}

void func_268(var uParam0)
{
	uParam0->f_166[1] = 1;
	uParam0->f_166[4] = 1;
	uParam0->f_166[8] = 1;
	uParam0->f_166[11] = 1;
	uParam0->f_166[14] = 1;
	uParam0->f_166[17] = 1;
	uParam0->f_166[22] = 1;
	uParam0->f_166[24] = 1;
	uParam0->f_166[26] = 1;
	uParam0->f_166[30] = 1;
	uParam0->f_166[33] = 1;
}

void func_269(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	func_483(uParam0, iParam2, uParam0->f_648, &fVar0, &fVar1);
	if (func_484(uParam0, iParam2))
	{
		uParam1->f_474.f_39[iParam2] = func_485(fParam3, fVar1, fVar0);
	}
	else
	{
		uParam1->f_474.f_39[iParam2] = func_485(fParam3, fVar0, fVar1);
	}
	if (bParam4)
	{
		uParam1->f_474.f_101.f_23[iParam2] = &uParam1->f_474.f_39[iParam2];
	}
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_642.f_2 = 0;
	uParam0->f_642.f_1 = iParam1;
	uParam0->f_642.f_3 = 0;
	uParam0->f_642.f_4 = 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 61606861:
			return 1316751321;
		case -1241887289:
			return -157887808;
		case -369348190:
			return -658302611;
		case 32611963:
			return -1318856610;
		case -20262001:
			return 858936248;
		default:
			break;
	}
	return -658302611;
}

int func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_642.f_1 = iParam1;
	iVar2 = func_290(uParam0, iParam2, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		uParam0->f_642.f_1 = iParam1;
		iVar1 = func_280(uParam0, iParam3, iVar0, 0);
		if (iVar1 == iParam4)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_273(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_274(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8)
{
	func_270(uParam0, iParam1);
	iVar5 = func_290(uParam0, iParam2, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		uParam0->f_642.f_1 = iParam1;
		if (!func_279(uParam0, iParam2, iVar0, 0))
		{
		}
		else
		{
			uVar4 = uParam0->f_642.f_1;
			*uParam7 = func_280(uParam0, -624280703, 0, 0);
			uParam0->f_642.f_1 = uVar4;
			iVar1 = func_290(uParam0, iParam3, 0, 0);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				uParam0->f_642.f_1 = uVar4;
				iVar3 = func_280(uParam0, iParam4, iVar2, 0);
				if (iVar3 == iParam5)
				{
					*iParam6 = iVar0;
					*uParam8 = iVar2;
					return true;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	return false;
}

void func_275(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_276(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_1 = Global_17411.f_55.f_644.f_1354;
	uParam0->f_2 = Global_17411.f_55.f_644.f_1354.f_1;
	uParam0->f_3 = Global_17411.f_55.f_644.f_1354.f_2;
	uParam0->f_4 = Global_17411.f_55.f_644.f_1354.f_3;
	uParam0->f_5 = Global_17411.f_55.f_644.f_1354.f_4;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_1 == -1)
		{
		}
		else
		{
			(*uParam1)[uParam0->f_6] = &Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6];
			(*uParam1)[uParam0->f_6]->f_1 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_1;
			(*uParam1)[uParam0->f_6]->f_2 = -1;
			(*uParam1)[uParam0->f_6]->f_3 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_2;
			(*uParam1)[uParam0->f_6]->f_4 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_3;
			(*uParam1)[uParam0->f_6]->f_5 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_4;
			(*uParam1)[uParam0->f_6]->f_6 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_5;
			(*uParam1)[uParam0->f_6]->f_7 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_6;
			(*uParam1)[uParam0->f_6]->f_8 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_7;
			(*uParam1)[uParam0->f_6]->f_9 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_8;
			(*uParam1)[uParam0->f_6]->f_10 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_9;
			(*uParam1)[uParam0->f_6]->f_11 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_10;
			(*uParam1)[uParam0->f_6]->f_12 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_11;
			(*uParam1)[uParam0->f_6]->f_13 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_12;
			(*uParam1)[uParam0->f_6]->f_14 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_13;
			(*uParam1)[uParam0->f_6]->f_15 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_14;
			(*uParam1)[uParam0->f_6]->f_16 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_15;
			(*uParam1)[uParam0->f_6]->f_17 = Global_17411.f_55.f_644.f_1354.f_5[uParam0->f_6]->f_16;
			uParam0->f_6++;
			iVar0++;
		}
	}
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, bool bParam8)
{
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, iParam4, 0))
	{
		return;
	}
	Var2 = { uParam0->f_642 };
	iVar0 = func_111(uParam3, 12857284);
	uParam1->f_474.f_80 = 0;
	bVar7 = true;
	if (bParam8 && iVar0 == -1)
	{
		iVar1 = func_486(uParam0, Var2.f_1, 634844725);
		func_452(uParam2, uParam3, iVar1, 0, 0);
		iVar0 = func_111(uParam3, 12857284);
		(*uParam3)[iVar0]->f_13 = 0.1f;
	}
	if (iVar0 != -1)
	{
		uParam1->f_474.f_80 = func_272(uParam0, Var2.f_1, 634844725, 2044935932, uParam3[iVar0]);
		if (*uParam0 && uParam1->f_474.f_80 == -1)
		{
			uParam1->f_474.f_80 = 0;
			func_487(uParam1, uParam3, 12857284, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 53, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 299749022);
	uParam1->f_474.f_81 = 0;
	if (bParam8 && iVar0 == -1)
	{
		iVar1 = func_489(iParam6);
		func_452(uParam2, uParam3, iVar1, 0, 0);
		iVar0 = func_111(uParam3, 299749022);
		(*uParam3)[iVar0]->f_13 = 0f;
	}
	if (iVar0 != -1)
	{
		uParam1->f_474.f_81 = func_272(uParam0, Var2.f_1, -1371413737, -257537884, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_81 == -1)
		{
			uParam1->f_474.f_81 = 0;
			bVar7 = false;
			func_487(uParam1, uParam3, 299749022, iVar0);
		}
		uParam1->f_474.f_9 = round(((*uParam3)[iVar0]->f_13 * 42f)) + 18;
	}
	iVar0 = func_111(uParam3, -1180698265);
	uParam1->f_474.f_82 = 0;
	if (bParam8 && iVar0 == -1)
	{
		iVar1 = func_486(uParam0, Var2.f_1, -1913184527);
		func_452(uParam2, uParam3, iVar1, 0, 0);
		iVar0 = func_111(uParam3, -1180698265);
		(*uParam3)[iVar0]->f_13 = 0.1f;
	}
	if (iVar0 != -1)
	{
		uParam1->f_474.f_82 = func_272(uParam0, Var2.f_1, -1913184527, -902256582, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_82 == -1)
		{
			uParam1->f_474.f_82 = 0;
			func_487(uParam1, uParam3, -1180698265, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 55, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, -487028314);
	uParam1->f_474.f_83 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_83 = func_272(uParam0, Var2.f_1, 663304728, 466962332, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_83 == -1)
		{
			uParam1->f_474.f_83 = 0;
			func_487(uParam1, uParam3, -487028314, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 56, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 241235545);
	uParam1->f_474.f_84 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_84 = func_272(uParam0, Var2.f_1, -1214818401, 1569204576, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_84 == -1)
		{
			uParam1->f_474.f_84 = 0;
			func_487(uParam1, uParam3, 241235545, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 57, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 1827902148);
	uParam1->f_474.f_85 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_85 = func_272(uParam0, Var2.f_1, -575561068, 1443912598, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_85 == -1)
		{
			uParam1->f_474.f_85 = 0;
			bVar7 = false;
			func_487(uParam1, uParam3, 1827902148, iVar0);
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 58, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 1301555144);
	uParam1->f_474.f_86 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_86 = func_272(uParam0, Var2.f_1, -1771423197, 1658889749, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_86 == -1)
		{
			uParam1->f_474.f_86 = 0;
			func_487(uParam1, uParam3, 1301555144, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 59, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 1858448324);
	uParam1->f_474.f_97 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_97 = func_272(uParam0, Var2.f_1, -973534326, 1403563071, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_97 == -1)
		{
			uParam1->f_474.f_97 = 0;
			bVar7 = false;
			func_487(uParam1, uParam3, 1858448324, iVar0);
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 60, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, -2056583192);
	uParam1->f_474.f_88 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_88 = func_272(uParam0, Var2.f_1, -2002568296, -1126672236, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_88 == -1)
		{
			uParam1->f_474.f_88 = 0;
			func_487(uParam1, uParam3, -2056583192, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 62, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 1015239729);
	uParam1->f_474.f_89 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_89 = func_272(uParam0, Var2.f_1, 1643877740, 757404833, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_89 == -1)
		{
			uParam1->f_474.f_89 = 0;
			func_487(uParam1, uParam3, 1015239729, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 63, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, -340627321);
	uParam1->f_474.f_90 = 0;
	if (iVar0 != -1)
	{
		uParam1->f_474.f_90 = func_272(uParam0, Var2.f_1, 904500170, -1074654442, uParam3[iVar0]);
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_90 == -1)
		{
			uParam1->f_474.f_90 = 0;
			func_487(uParam1, uParam3, -340627321, iVar0);
			bVar7 = false;
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 65, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, -875805376);
	uParam1->f_474.f_91 = 0;
	if (iVar0 != -1)
	{
		uParam0->f_642.f_1 = Var2.f_1;
		iVar11 = func_290(uParam0, 403633317, 0, 0);
		iVar8 = 0;
		while (iVar8 < iVar11)
		{
			uParam0->f_642.f_1 = Var2.f_1;
			func_279(uParam0, 403633317, iVar8, 0);
			iVar10 = uParam0->f_642.f_1;
			iVar9 = func_272(uParam0, iVar10, -29644304, 1981135023, uParam3[iVar0]);
			if (iVar9 != -1)
			{
				uParam1->f_474.f_91 = iVar8;
				uParam1->f_474.f_100 = iVar9;
			}
			else
			{
				iVar8++;
			}
		}
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_100 == -1)
		{
			bVar7 = false;
			uParam1->f_474.f_91 = 0;
			uParam1->f_474.f_100 = 0;
			func_487(uParam1, uParam3, -875805376, iVar0);
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 64, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, -768760704);
	uParam1->f_474.f_92 = 0;
	if (iVar0 != -1)
	{
		uParam0->f_642.f_1 = Var2.f_1;
		iVar15 = func_290(uParam0, -346051150, 0, 0);
		iVar12 = 0;
		while (iVar12 < iVar15)
		{
			uParam0->f_642.f_1 = Var2.f_1;
			func_279(uParam0, -346051150, iVar12, 0);
			iVar14 = uParam0->f_642.f_1;
			iVar13 = func_272(uParam0, iVar14, -978910727, -1261431414, uParam3[iVar0]);
			if (iVar13 != -1)
			{
				uParam1->f_474.f_92 = iVar12;
				uParam1->f_474.f_98 = iVar13;
			}
			else
			{
				iVar12++;
			}
		}
		bVar7 = true;
		if (*uParam0 && uParam1->f_474.f_98 == -1)
		{
			bVar7 = false;
			uParam1->f_474.f_92 = 0;
			uParam1->f_474.f_98 = 0;
			func_487(uParam1, uParam3, -768760704, iVar0);
		}
		func_488(uParam0, uParam1, uParam3, iVar0, 66, iParam5, bVar7);
	}
	iVar0 = func_111(uParam3, 1089431066);
	uParam1->f_474.f_94 = 0;
	if (bParam8 && iVar0 == -1)
	{
		iVar16 = func_289(uParam0, Var2.f_1, -818558948);
		uParam0->f_642.f_1 = Var2.f_1;
		func_279(uParam0, -818558948, iVar16, 0);
		iVar1 = func_280(uParam0, 1466947264, uParam1->f_474.f_24, 0);
		func_452(uParam2, uParam3, iVar1, 0, 0);
		iVar0 = func_111(uParam3, 1089431066);
	}
	if (iVar0 != -1)
	{
		uParam0->f_642.f_1 = Var2.f_1;
		iVar20 = func_290(uParam0, -818558948, 0, 0);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			uParam0->f_642.f_1 = Var2.f_1;
			func_279(uParam0, -818558948, iVar17, 0);
			iVar19 = uParam0->f_642.f_1;
			iVar18 = func_272(uParam0, iVar19, -864566739, 1466947264, uParam3[iVar0]);
			if (iVar18 != -1)
			{
				*uParam7 = iVar18;
				uParam1->f_474.f_94 = iVar17;
			}
			else
			{
				iVar17++;
			}
		}
	}
}

bool func_278(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	func_270(uParam0, iParam1);
	iVar8 = func_290(uParam0, iParam2, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar8)
	{
		bVar4 = true;
		uParam0->f_642.f_1 = iParam1;
		if (!func_279(uParam0, iParam2, iVar0, 0))
		{
		}
		else
		{
			uVar7 = uParam0->f_642.f_1;
			iVar1 = func_290(uParam0, 1443359140, 0, 0);
			iVar2 = func_280(uParam0, -624280703, 0, 0);
			if (iVar2 == -960808083)
			{
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < iVar1)
				{
					uParam0->f_642.f_1 = uVar7;
					iVar6 = func_490(func_280(uParam0, -637074253, iVar3, 0));
					if (iVar6 == -1)
					{
					}
					else
					{
						uParam0->f_642.f_1 = uVar7;
						fVar5 = func_491(uParam0, -703031989, iVar3, 0);
						if (fVar5 != Global_1952637->f_4[iVar6]->f_1)
						{
							bVar4 = false;
						}
						else
						{
							iVar3++;
						}
						if (bVar4)
						{
							*uParam3 = iVar0;
							*uParam4 = iVar2;
							return true;
						}
						iVar0++;
						*uParam3 = 0;
						*uParam4 = -960808083;
						return false;
					}
				}
			}
		}
	}
}

bool func_279(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_642.f_1), &(uParam0->f_642)))
	{
		return false;
	}
	return true;
}

int func_280(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_hash(&uVar0, &(uParam0->f_642)))
	{
		return 0;
	}
	return uVar0;
}

bool func_281(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_492(iParam1, 1, 0) };
		iParam3 = func_493(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return false;
		}
	}
	if (!func_494(iParam1, iParam2, func_333(iParam3, 1), bParam4, 1, 0, 1))
	{
		return false;
	}
	func_495(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_496(iParam1, 0))
		{
			func_457(&(Global_1952637->f_1675.f_1[func_333(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_457(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_333(iParam3, 1)])
			{
				func_114(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_158(32768))
			{
				func_497();
				func_114(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return true;
	}
	iVar5 = func_498(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_499(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_114(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_114(19, 0, iVar5, iParam0, 0);
	}
	return true;
}

int func_282(int iParam0)
{
	return &(Global_1952637->f_83[func_333(iParam0, 1)]);
}

int func_283(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_494(iParam0, iParam2, 1, 1, 1, 0, 1))
	{
		return 0;
	}
	iVar0 = 0;
	func_500(bParam4, 0);
	if (func_294(iParam0, -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1))
	{
		iVar0 = 2048;
		func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	}
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_114(8, 0, iVar0, 0, 0);
		}
		else
		{
			func_114(8, 0, iVar0 | 1, iParam1, 0);
		}
	}
	func_501();
	return 1;
}

int func_284(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_494(iParam0, iParam2, 4, 1, 1, 0, 1))
	{
		return 0;
	}
	iVar0 = 0;
	func_502(bParam4);
	if (func_294(iParam0, -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1))
	{
		iVar0 = 2048;
		func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	}
	if (bParam3)
	{
		if (is_ped_a_player(iParam1))
		{
			func_114(10, 0, iVar0, 0, 0);
		}
		else
		{
			func_114(10, 0, iVar0 | 1, iParam1, 0);
		}
	}
	func_501();
	return 1;
}

void func_285(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam2 == -1)
	{
		return;
	}
	Global_1952637->f_4[iParam2]->f_1 = func_503(uParam0, iParam2, fParam3);
	_set_ped_face_feature(iParam1, &(Global_1952637->f_4[iParam2]), Global_1952637->f_4[iParam2]->f_1);
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 1316751321:
			return 61606861;
		case -157887808:
			return -1241887289;
		case -658302611:
			return -369348190;
		case -1318856610:
			return 32611963;
		case 858936248:
			return -20262001;
		default:
			break;
	}
	return -369348190;
}

float func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1f;
		case 1:
			return 0.75f;
		case 2:
			return 0.5f;
		case 3:
			return 0.25f;
		default:
			break;
	}
	return 0f;
}

void func_288(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!uParam1->f_34 || bParam3)
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			uParam1->f_2[iVar0] = iVar0;
			iVar0++;
		}
		func_270(uParam0, 0);
		if (!func_279(uParam0, 1412340602, iParam2, 0))
		{
			return;
		}
		uParam1->f_33 = func_290(uParam0, 17571750, 0, 0);
		uParam1->f_34 = 1;
	}
	if (!bParam4)
	{
		return;
	}
	if (uParam1->f_33 > 1)
	{
		iVar1 = func_291(0, (uParam1->f_33 - 1));
		uParam1->f_474.f_13 = &uParam1->f_2[iVar1];
		uParam1->f_33 = (uParam1->f_33 - 1);
		uVar2 = &uParam1->f_2[iVar1];
		uParam1->f_2[iVar1] = &uParam1->f_2[uParam1->f_33];
		uParam1->f_2[uParam1->f_33] = uVar2;
	}
	else
	{
		uParam1->f_474.f_13 = &uParam1->f_2[0];
		uParam1->f_34 = 0;
	}
}

int func_289(var uParam0, int iParam1, int iParam2)
{
	func_270(uParam0, iParam1);
	iVar33 = func_290(uParam0, iParam2, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar33)
	{
		func_270(uParam0, iParam1);
		if (!func_279(uParam0, iParam2, iVar0, 0))
		{
		}
		else if (func_504(uParam0, 1575973821, 0, 0) || func_504(uParam0, 548679286, 0, 0))
		{
		}
		else
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		return 0;
	}
	iVar34 = func_121(iVar1);
	return &(iVar2[iVar34]);
}

int func_290(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	return _datafile_get_num_nodes(&(uParam0->f_642));
}

int func_291(int iParam0, int iParam1)
{
	return (iParam0 + func_121((iParam1 - iParam0)));
}

int func_292(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_253(uParam0, 1))
	{
		func_254(uParam0, uParam1, 1);
	}
	if (iParam5 == 4)
	{
		iParam5 = 0;
		if (func_183() == 24043185)
		{
			iParam5 = 1;
		}
	}
	func_505(&uVar0, 660625468, -770179420, 459292749, 1, iParam2);
	_0x91ded5dd64bb2691(&uVar0);
	if (iParam4 == 0)
	{
		if (!_0x44b3a36933ac009c(&iParam4, &uVar0, 594108752))
		{
			return 0;
		}
	}
	if (!func_449(uParam0, iParam4, iParam5, 1, iParam3))
	{
		return 0;
	}
	func_506(uParam0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
	func_507(uParam0, uParam1, iParam2, iParam3);
	return 1;
}

bool func_293(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_253(uParam0, 1))
	{
		func_254(uParam0, uParam1, 1);
	}
	if (iParam5 == 4)
	{
		iParam5 = 0;
		if (func_183() == 24043185)
		{
			iParam5 = 1;
		}
	}
	func_505(&uVar2, 660625468, -770179420, 459292749, 1, iParam2);
	_0x91ded5dd64bb2691(&uVar2);
	if (iParam4 == 0)
	{
		if (!_0x44b3a36933ac009c(&iParam4, &uVar2, 594108752))
		{
			return false;
		}
	}
	if (!func_449(uParam0, iParam4, iParam5, 1, iParam3))
	{
		return false;
	}
	func_505(&uVar2, 660625468, iParam2, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar2);
	while (_0xed4413cee1bf142c(&uVar2))
	{
		if (_0x44b3a36933ac009c(&iVar1, &uVar2, 459292749))
		{
			if (iVar0 > *uParam1)
			{
				return false;
			}
			if (func_395(iVar1) == 0)
			{
				func_453((*uParam1)[iVar0], iVar1, 0, 1, iParam3);
				func_508((*uParam1)[iVar0], &uVar2, iParam3);
				iVar0++;
			}
		}
	}
	uParam0->f_6 = iVar0;
	return true;
}

bool func_294(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_253(&(Global_1952637->f_1058), 2))
	{
		return false;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_509(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_510(iParam0);
	}
	else
	{
		return false;
	}
	iVar1 = func_111(uParam3, iParam1);
	bVar2 = func_395(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_511(uParam2, uParam3, iParam1);
		}
		else
		{
			func_458(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_453(&Var3, iVar0, 0, 1, 6))
		{
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return false;
		}
		func_512(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_452(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_453(&Var21, iVar0, 0, 1, 6))
		{
			return false;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return true;
}

void func_295(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_270(uParam0, uParam0->f_648);
	if (!func_279(uParam0, iParam4, iParam2, 0))
	{
		return;
	}
	Var4 = { uParam0->f_642 };
	iVar0 = func_290(uParam0, 1443359140, 0, 0);
	*uParam3 = func_280(uParam0, -624280703, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		uParam0->f_642 = { Var4 };
		iVar3 = func_490(func_280(uParam0, -637074253, iVar1, 0));
		if (iVar3 == -1)
		{
		}
		else
		{
			uParam0->f_642 = { Var4 };
			if (*uParam3 == -960808083)
			{
				fVar2 = func_503(uParam0, iVar3, &(uParam1->f_474.f_101.f_23[iVar3]));
			}
			else
			{
				fVar2 = func_491(uParam0, -703031989, iVar1, 0);
			}
			func_269(uParam0, uParam1, iVar3, fVar2, 0);
			Global_1952637->f_4[iVar3]->f_1 = fVar2;
			if (!bParam5)
			{
				_set_ped_face_feature(uParam0->f_615, &(Global_1952637->f_4[iVar3]), fVar2);
			}
		}
		iVar1++;
	}
	if (!bParam5 && bParam6)
	{
		func_114(5, 0, 1, uParam0->f_615, 0);
	}
}

void func_296(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_297(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_513(uParam0, uParam1);
	}
	else
	{
		func_514(uParam0, (*uParam1)[iParam2]);
	}
}

void func_298(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_299(struct<4> Param0)
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
			if (func_194(Param0))
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
			func_515(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_298(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_194(Param0))
			{
				return;
			}
			func_515(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_298(8);
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
			if (func_194(Param0))
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
			func_515(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_298(8);
			break;
			break;
	}
}

bool func_300(var uParam0, char* sParam1)
{
	if (!_0x23e33cb9f4a3f547(uParam0, sParam1))
	{
		if (!_0x0df57f86fe71dbe5(uParam0, sParam1))
		{
			_0xdf7b5144e25cd3fe(uParam0, sParam1);
		}
	}
	else
	{
		return true;
	}
	return false;
}

char* func_301(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_303(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_516(cParam1, cParam0);
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

void func_304(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_468() - fParam1);
	func_517(uParam0, 1);
	func_518(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_305(var uParam0, int iParam1)
{
	uParam0->f_210 = (uParam0->f_210 || iParam1);
}

void func_306(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	func_296(uParam0, 32);
	func_345(uParam1, 32);
}

void func_307()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

var func_308(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_309(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_519())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_106(func_519(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "fidget_a";
			break;
		case 1:
			sVar0 = "fidget_b";
			break;
		case 2:
			sVar0 = "fidget_c";
			break;
		case 3:
			sVar0 = "fidget_d";
			break;
		case 4:
			sVar0 = "fidget_e";
			break;
		case 5:
			sVar0 = "fidget_f";
			break;
		case 6:
			sVar0 = "fidget_g";
			break;
		case 7:
			sVar0 = "fidget_h";
			break;
	}
	return sVar0;
}

int func_311(int iParam0)
{
	return iParam0;
}

void func_312(int iParam0)
{
	if (!func_520(iParam0))
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

void func_313(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_314(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

bool func_314(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_315(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_313(iParam0, 1);
	func_337(iParam0, 1);
	func_338(iParam0, 128);
}

void func_316(var uParam0, bool bParam1, bool bParam2)
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

char* func_317(var uParam0, var uParam1)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_318(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_521(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_319(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_320(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

bool func_321(var uParam0)
{
	return uParam0->f_1;
}

int func_322(var uParam0, bool bParam1, bool bParam2)
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

float func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1f;
		case 1:
			return 0.75f;
		case 2:
			return 0.5f;
		case 3:
			return 0.25f;
		default:
			break;
	}
	return 0f;
}

bool func_324(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_13[iParam2] && iParam1) != 0;
}

int func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return 4;
	}
	if (get_entity_heading(iParam0) > 112.5f && get_entity_heading(iParam0) <= 157.5f)
	{
		return 3;
	}
	if (get_entity_heading(iParam0) > 157.5f && get_entity_heading(iParam0) <= 202.5f)
	{
		return 2;
	}
	if (get_entity_heading(iParam0) > 202.5f && get_entity_heading(iParam0) <= 247.5f)
	{
		return 1;
	}
	if (get_entity_heading(iParam0) > 247.5f && get_entity_heading(iParam0) <= 292.5f)
	{
		return 0;
	}
	if (get_entity_heading(iParam0) > 292.5f && get_entity_heading(iParam0) <= 337.5f)
	{
		return 7;
	}
	if (get_entity_heading(iParam0) > 337.5f || get_entity_heading(iParam0) <= 22.5f)
	{
		return 6;
	}
	if (get_entity_heading(iParam0) > 22.5f && get_entity_heading(iParam0) <= 67.5f)
	{
		return 5;
	}
	return 4;
}

float func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 0.125f;
		case 2:
			return 0.25f;
		case 3:
			return 0.375f;
		case 4:
			return 0.5f;
		case 5:
			return 0.625f;
		case 6:
			return 0.75f;
		case 7:
			return 0.875f;
		default:
			break;
	}
	return 1f;
}

void func_327(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_13[iParam2] = (uParam0->f_13[iParam2] || iParam1);
}

void func_328(int iParam0)
{
}

void func_329(var uParam0, int iParam1)
{
	uParam0->f_210 = (uParam0->f_210 - (uParam0->f_210 && iParam1));
}

void func_330(var uParam0, var uParam1, var uParam2)
{
	uParam2->f_1 = { uParam1->f_474.f_1 };
	uParam2->f_9 = func_331(uParam0, 44);
	uParam2->f_10 = func_331(uParam0, 38);
	uParam2->f_11 = func_331(uParam0, 50);
	uParam2->f_12 = uParam1->f_474.f_12;
	uParam2->f_13 = func_331(uParam0, 34);
	uParam2->f_39[3] = (to_float(func_331(uParam0, 131)) / 100f);
	uParam2->f_39[10] = (to_float(func_331(uParam0, 138)) / 100f);
	uParam2->f_39[13] = (to_float(func_331(uParam0, 143)) / 100f);
	uParam2->f_39[16] = (to_float(func_331(uParam0, 148)) / 100f);
	uParam2->f_15 = func_331(uParam0, 54);
	uParam2->f_18 = func_331(uParam0, 94);
	uParam2->f_20 = func_331(uParam0, 99);
	uParam2->f_19 = uParam1->f_474.f_19;
	uParam2->f_24 = uParam1->f_474.f_24;
	uParam2->f_22 = func_331(uParam0, 252);
	uParam2->f_21 = uParam1->f_474.f_21;
	uParam2->f_23 = uParam1->f_474.f_23;
	uParam2->f_80 = func_331(uParam0, 172);
	uParam2->f_82 = func_331(uParam0, 178);
	uParam2->f_83 = func_331(uParam0, 181);
	uParam2->f_84 = func_331(uParam0, 184);
	uParam2->f_85 = func_331(uParam0, 187);
	uParam2->f_86 = func_331(uParam0, 190);
	uParam2->f_87 = func_331(uParam0, 196);
	uParam2->f_88 = func_331(uParam0, 199);
	uParam2->f_89 = func_331(uParam0, 202);
	uParam2->f_90 = func_331(uParam0, 205);
	uParam2->f_91 = func_331(uParam0, 208);
	uParam2->f_92 = func_331(uParam0, 211);
	uParam2->f_93 = func_331(uParam0, 214);
	uParam2->f_94 = func_331(uParam0, 60);
	uParam2->f_95 = func_331(uParam0, 217);
	uParam2->f_96 = func_331(uParam0, 223);
	uParam2->f_81 = func_331(uParam0, 175);
	uParam2->f_14 = func_331(uParam0, 126);
	uParam2->f_97 = func_331(uParam0, 193);
	uParam2->f_39[2] = &uParam1->f_474.f_39[2];
	uParam2->f_39[1] = &uParam1->f_474.f_39[1];
	uParam2->f_39[5] = &uParam1->f_474.f_39[5];
	uParam2->f_39[6] = &uParam1->f_474.f_39[6];
	uParam2->f_39[4] = &uParam1->f_474.f_39[4];
	uParam2->f_39[7] = &uParam1->f_474.f_39[7];
	uParam2->f_39[9] = &uParam1->f_474.f_39[9];
	uParam2->f_39[8] = &uParam1->f_474.f_39[8];
	uParam2->f_39[12] = &uParam1->f_474.f_39[12];
	uParam2->f_39[11] = &uParam1->f_474.f_39[11];
	uParam2->f_39[15] = &uParam1->f_474.f_39[15];
	uParam2->f_39[14] = &uParam1->f_474.f_39[14];
	uParam2->f_39[29] = &uParam1->f_474.f_39[29];
	uParam2->f_39[30] = &uParam1->f_474.f_39[30];
	uParam2->f_39[31] = &uParam1->f_474.f_39[31];
	uParam2->f_39[32] = &uParam1->f_474.f_39[32];
	uParam2->f_39[34] = &uParam1->f_474.f_39[34];
	uParam2->f_39[33] = &uParam1->f_474.f_39[33];
	uParam2->f_39[37] = &uParam1->f_474.f_39[37];
	uParam2->f_39[36] = &uParam1->f_474.f_39[36];
	uParam2->f_39[35] = &uParam1->f_474.f_39[35];
	uParam2->f_39[38] = &uParam1->f_474.f_39[38];
	uParam2->f_39[23] = &uParam1->f_474.f_39[23];
	uParam2->f_39[25] = &uParam1->f_474.f_39[25];
	uParam2->f_39[27] = &uParam1->f_474.f_39[27];
	uParam2->f_39[24] = &uParam1->f_474.f_39[24];
	uParam2->f_39[28] = &uParam1->f_474.f_39[28];
	uParam2->f_39[26] = &uParam1->f_474.f_39[26];
	uParam2->f_39[18] = &uParam1->f_474.f_39[18];
	uParam2->f_39[17] = &uParam1->f_474.f_39[17];
	uParam2->f_39[20] = &uParam1->f_474.f_39[20];
	uParam2->f_39[19] = &uParam1->f_474.f_39[19];
	uParam2->f_39[21] = &uParam1->f_474.f_39[21];
	uParam2->f_39[22] = &uParam1->f_474.f_39[22];
	uParam2->f_16 = uParam1->f_474.f_16;
	uParam2->f_17 = uParam1->f_474.f_17;
	uParam2->f_33 = uParam1->f_474.f_33;
	uParam2->f_35 = uParam1->f_474.f_35;
	uParam2->f_37 = uParam1->f_474.f_37;
	uParam2->f_31 = uParam1->f_474.f_31;
	uParam2->f_27 = uParam1->f_474.f_27;
	uParam2->f_29 = uParam1->f_474.f_29;
	uParam2->f_101 = { uParam1->f_474.f_101 };
	uParam2->f_98 = uParam1->f_474.f_98;
	uParam2->f_100 = uParam1->f_474.f_100;
}

int func_331(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return -1;
	}
	if (!_databinding_is_data_id_valid(&(uParam0->f_891[iParam1])))
	{
		return -1;
	}
	return _databinding_read_data_int(&(uParam0->f_891[iParam1]));
}

int func_332(int iParam0)
{
	return (iParam0 - 5);
}

int func_333(int iParam0, int iParam1)
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

int func_334(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_522(iVar0, 1, 0);
		if (!func_343(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_523(&(Var2[iVar34])))
				{
					if (!bParam1 || func_524(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_335(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_340(iParam0))
	{
		return func_525(func_341(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_343(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = ((!bParam6 && func_462(0)) && !func_526());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_527(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_528(iVar32)))
			{
			}
			else
			{
				iVar36 = func_529(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_530(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_524(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_531(&(Var0[iVar34])) || func_532(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_533(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_534(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_535(7, &(Var0[iVar34]))) + func_536(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}
}

void func_336(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_337(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_338(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_339(int iParam0, int iParam1)
{
	if (!func_230(iParam0, 0))
	{
		return false;
	}
	if (func_340(iParam0))
	{
		return func_537(func_341(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_340(int iParam0)
{
	if (func_99(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_341(int iParam0, bool bParam1)
{
	if (!func_230(iParam0, 0))
	{
		return func_538(func_261(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_342(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_539(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
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
	if (!bParam2)
	{
	}
	return 0;
}

bool func_343(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_230(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_540(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_344(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_345(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
}

void func_346(var uParam0)
{
	if (!_is_ped_texture_valid(*uParam0))
	{
		return;
	}
	if (func_253(uParam0, 2))
	{
		return;
	}
	_update_ped_texture(*uParam0);
	_reset_ped_texture(*uParam0);
	func_296(uParam0, 2);
}

void func_347(var uParam0, var uParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_1354 = uParam0->f_1;
	Global_17411.f_55.f_644.f_1354.f_1 = uParam0->f_2;
	Global_17411.f_55.f_644.f_1354.f_2 = uParam0->f_3;
	Global_17411.f_55.f_644.f_1354.f_3 = uParam0->f_4;
	Global_17411.f_55.f_644.f_1354.f_4 = uParam0->f_5;
	if (uParam0->f_6 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iVar0 >= uParam0->f_6)
		{
			Global_17411.f_55.f_644.f_1354.f_5[iVar0] = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_1 = -1;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_2 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_3 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_4 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_5 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_6 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_7 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_8 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_9 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_10 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_11 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_12 = 0f;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_13 = 0f;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_14 = 0f;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_15 = 0;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_16 = 0;
		}
		else
		{
			Global_17411.f_55.f_644.f_1354.f_5[iVar0] = uParam1[iVar0];
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_1 = (*uParam1)[iVar0]->f_1;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_2 = (*uParam1)[iVar0]->f_3;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_3 = (*uParam1)[iVar0]->f_4;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_4 = (*uParam1)[iVar0]->f_5;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_5 = (*uParam1)[iVar0]->f_6;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_6 = (*uParam1)[iVar0]->f_7;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_7 = (*uParam1)[iVar0]->f_8;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_8 = (*uParam1)[iVar0]->f_9;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_9 = (*uParam1)[iVar0]->f_10;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_10 = (*uParam1)[iVar0]->f_11;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_11 = (*uParam1)[iVar0]->f_12;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_12 = (*uParam1)[iVar0]->f_13;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_13 = (*uParam1)[iVar0]->f_14;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_14 = (*uParam1)[iVar0]->f_15;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_15 = (*uParam1)[iVar0]->f_16;
			Global_17411.f_55.f_644.f_1354.f_5[iVar0]->f_16 = (*uParam1)[iVar0]->f_17;
		}
		iVar0++;
	}
}

void func_348(int iParam0)
{
	Global_1952637->f_3481 = iParam0;
}

void func_349()
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_541(iVar0, Global_1952637->f_4[iVar0]->f_1, 9);
		iVar0++;
	}
}

void func_350(int iParam0)
{
	Var2 = 545953470;
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_333(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_542(Global_1952637->f_1556.f_1[iVar0], 2, 6);
		}
	}
}

void func_351(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = (func_444(Global_1952637->f_1556) > -1 && !func_158(4718592));
	if (func_158(4194304))
	{
		return;
	}
	if (bParam2)
	{
		if (iParam0 == -1 || iParam0 == func_543())
		{
			func_234();
		}
	}
	if (bParam4 && (bVar0 || bParam5))
	{
		Global_1952637->f_1675 = 491602716;
		Global_1952637->f_1556 = 491602716;
		bParam3 = true;
		bVar0 = !func_99(Global_1952637->f_1556, -166674229);
	}
	if (bParam3 && bVar0)
	{
		func_544(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_545(0, 1);
	}
	func_501();
}

void func_352()
{
	Global_1139381->f_4779.f_5 = &Global_1952637->f_1675.f_1[0];
	Global_1139381->f_4779.f_8 = &Global_1952637->f_1675.f_1[2];
	func_546();
	func_547();
	func_548();
}

void func_353(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_7();
	}
	if (iVar0 == -1)
	{
	}
	switch (iParam0)
	{
		case -171876066:
			func_97(2026485318);
			break;
		case -1481695040:
			func_97(24043185);
			break;
		default:
			break;
	}
}

void func_354(struct<7> Param0)
{
	iVar0 = 0;
	while (iVar0 < 23)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		switch (iVar0)
		{
			case 0:
				fVar1 = Param0;
				fVar2 = Param0.f_1;
				break;
			case 2:
				fVar1 = Param0.f_2;
				fVar2 = Param0.f_3;
				break;
			case 1:
				fVar1 = Param0.f_4;
				fVar2 = Param0.f_5;
				break;
			case 13:
				fVar1 = Param0.f_6;
				break;
			case 12:
				fVar1 = 50f;
				break;
		}
		func_549(iVar0, fVar1);
		if (func_550(iVar0))
		{
			fVar2 = fVar2;
			func_552(func_551(iVar0), fVar2);
		}
		iVar0++;
	}
	Global_1956200->f_1431.f_102 = 1;
	Global_1956200->f_1431.f_99 = 1;
	func_553();
	func_554(1);
}

bool func_355(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_555(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

struct<16> func_356(var uParam0, bool bParam1)
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
		Var0.f_15 = func_556(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_229() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_357(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 != -460111564)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_558(func_557(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_559(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 24), iVar0, uParam1);
	}
	return -1;
}

bool func_358(int iParam0)
{
	return iParam0 != 0;
}

bool func_359(int* iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	if (func_560(&uParam1) == 2)
	{
		return true;
	}
	iVar0 = get_number_of_events(1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_event_at_index(1, iVar2);
		if (iVar1 != 1741908893)
		{
		}
		else if (!get_event_data(1, iVar2, iParam0, 12))
		{
		}
		else if (iParam0->f_5 != iParam5)
		{
		}
		else
		{
			if (iParam0->f_4 == 1)
			{
				return true;
			}
			if (!func_561(&uParam1, iParam0))
			{
			}
			else if (iParam0->f_4 == 0)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_360(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return true;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_562(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return false;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return false;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_563(uParam1, iParam0, Var3);
	return true;
}

int func_361(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_564(iParam0, iParam1, iParam2, iParam3);
}

int func_363(int iParam0)
{
	if (!func_565(iParam0))
	{
		return 0;
	}
	if (func_566(iParam0))
	{
		return -1957466003;
	}
	if (func_99(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_99(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_99(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_99(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

bool func_364(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	iVar1 = iParam3;
	if (func_524(iVar1, 0, 1, 0) <= 0)
	{
		uParam1->f_3 = iParam3;
		uParam1->f_2 = iParam2;
		if (!_datafile_get_hash(&iVar0, uParam1))
		{
			return false;
		}
		func_184(&(uParam0->f_5435.f_18), iVar0);
	}
	func_367(uParam0, iVar1, iParam4);
	return true;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -1177453988;
		case 2:
			return 12857284;
		case 3:
			return 299749022;
		case 4:
			return -1180698265;
		case 5:
			return -487028314;
		case 6:
			return 241235545;
		case 7:
			return 1827902148;
		case 8:
			return 1301555144;
		case 9:
			return -2056583192;
		case 10:
			return 1015239729;
		case 11:
			return -340627321;
		case 12:
			return -875805376;
		case 13:
			return -768760704;
		case 14:
			return 1089431066;
		case 15:
			return -2118203104;
		case 16:
			return 1285634184;
		case 17:
			return -559080197;
		case 18:
			return -1811760631;
		case 19:
			return 1858448324;
		case 20:
			return -2137717153;
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

void func_367(var uParam0, int iParam1, int iParam2)
{
	if (!*uParam0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var3 = { func_244(0, -1591664384, iParam2, -1591664384, 0, 0, 0) };
	if (func_245(&Var3, &iVar0, &iVar1, 1))
	{
		Var17.f_9 = -1591664384;
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (!func_246(&Var17, iVar2, iVar0, iVar1))
				{
				}
				else
				{
					if (uParam0->f_2902 >= 50)
					{
						func_247(iVar0);
						return;
					}
					if (Var17.f_4 != iParam1)
					{
						uParam0->f_2601[uParam0->f_2902] = Var17.f_4;
						uParam0->f_2601[uParam0->f_2902]->f_1 = { Var17 };
						uParam0->f_2601[uParam0->f_2902]->f_5 = Var17.f_9;
						uParam0->f_2902++;
					}
				}
				iVar2++;
			}
		}
		func_247(iVar0);
	}
}

bool func_368(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_369(int* iParam0, int iParam1, struct<4> Param2, struct<4> Param6, var uParam10, int iParam11)
{
	if (!func_567(iParam0, 0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(&Param2) || !_0xb881ca836cc4b6d4(&Param6))
	{
		return false;
	}
	if (!func_568(iParam1, Param6, uParam10))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0 = { Param2 };
	Var0.f_4 = { Param6 };
	Var0.f_11 = uParam10;
	if (!func_371(iParam0, Var0, 1702063850, iParam11, -1))
	{
		return false;
	}
	return true;
}

int func_370(int iParam0, int iParam1, bool bParam2)
{
	if (!func_343(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_565(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_371(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_569(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_570(iParam0, iParam17))
	{
		return false;
	}
	if (func_571(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_572(iParam0, bParam18);
}

bool func_372(int* iParam0, int* iParam1, bool bParam2)
{
	bVar0 = _cashinventory_transaction_get_basket_is_valid(*iParam0);
	bVar1 = _cashinventory_transaction_get_basket_is_valid(*iParam1);
	if (!bVar0 && !bVar1)
	{
		func_362(*iParam0, 0, 0, 0);
		func_362(*iParam1, 0, 0, 0);
		return true;
	}
	else if (bParam2 && (!bVar0 || !bVar1))
	{
		func_362(*iParam0, 0, 0, 0);
		func_362(*iParam1, 0, 0, 0);
		return false;
	}
	else if (!bVar0 && bVar1)
	{
		func_362(*iParam0, 0, 0, 0);
		return func_195(iParam1);
	}
	else if (!bVar1 && bVar0)
	{
		func_362(*iParam1, 0, 0, 0);
		return func_195(iParam0);
	}
	if (*iParam0 == *iParam1)
	{
		bVar2 = func_195(iParam0);
		*iParam1 = { *iParam0 };
		return bVar2;
	}
	iVar3 = _cashinventory_transaction_get_num_of_items(*iParam0);
	iVar4 = _cashinventory_transaction_get_num_of_items(*iParam1);
	if (iVar3 == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_362(*iParam0, 4, 0, 0);
		return func_195(iParam1);
	}
	else if (iVar4 == 0)
	{
		_cashinventory_transaction_delete(*iParam1);
		func_362(*iParam1, 4, 0, 0);
		return func_195(iParam0);
	}
	iVar5 = _cashinventory_transaction_get_action(*iParam0);
	iVar6 = _cashinventory_transaction_get_action(*iParam1);
	iVar7 = _0xb6f4557060ef0fb4(*iParam0, *iParam1);
	if (iVar7 == -1)
	{
		func_362(*iParam0, 2, 0, 0);
		func_362(*iParam1, 2, 0, 0);
		_cashinventory_transaction_delete(*iParam0);
		_cashinventory_transaction_delete(*iParam1);
		return false;
	}
	func_362(*iParam0, 4, 0, 0);
	func_362(*iParam1, 4, 0, 0);
	func_362(iVar7, 1, iVar5, iVar6);
	if (iVar5 == 2113164098 || iVar5 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	if (iVar6 == 2113164098 || iVar6 == 541670136)
	{
		iParam1->f_3 = 1;
	}
	iParam0->f_1 = iVar7;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	iParam1->f_1 = iVar7;
	*iParam1 = -1;
	iParam1->f_2 = 0;
	return true;
}

void func_373(int iParam0)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		_cashinventory_transaction_delete(*iParam0);
		func_362(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

int func_374(int iParam0)
{
	iVar0 = -1;
	if (!func_565(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_492(iParam0, 0, 0) };
	Var6 = { func_60(iParam0, Var1, Var1.f_4, 0) };
	if (!func_573(&Var6))
	{
		return -1;
	}
	if (func_574(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_375(int iParam0, struct<17> Param1)
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
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_376(var uParam0, var uParam1, int iParam2)
{
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iParam2))
	{
		return true;
	}
	Var1.f_1 = 11;
	if (!_0x64a36ba85ce01a81(&uVar0, &(uParam1->f_1), &(Var1.f_1), uParam0))
	{
		return false;
	}
	Var14.f_1 = 11;
	Var14.f_16 = 255;
	Var14.f_13 = 1;
	Var14.f_14 = 1;
	func_563(uParam0, iParam2, Var14);
	return true;
}

struct<2> func_377(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_9();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_378(struct<2> Param0)
{
	iVar0 = func_575(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_379(int iParam0)
{
	if (!func_576(iParam0))
	{
		if (_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
		{
			iVar0 = func_208(4, iParam0);
			if (iVar0 != 0)
			{
				func_577(iVar0, 0);
			}
		}
		return true;
	}
	iVar1 = func_208(2, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar1))
	{
		iVar1 = func_208(3, iParam0);
	}
	if (!func_578((*Global_1835011)[iParam0]->f_32) && iVar1 == 0)
	{
		return true;
	}
	if ((_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3)) || !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (!func_579((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = func_577(iVar1, 0);
		}
		else
		{
			switch (func_580((*Global_1835011)[iParam0]->f_32, 0))
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

void func_380(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_381(int iParam0, bool bParam1)
{
	if (!func_576(iParam0))
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

bool func_382(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 13:
			*uParam1 = 622326403;
			return true;
		case 14:
			*uParam1 = 384587308;
			return true;
		case 15:
			*uParam1 = 968661964;
			return true;
		case 16:
			*uParam1 = 49496744;
			return true;
		case 17:
			*uParam1 = 1495592714;
			return true;
		case 18:
			*uParam1 = 2125588482;
			return true;
		case 19:
			*uParam1 = 1866942769;
			return true;
		case 21:
			*uParam1 = 661064591;
			return true;
		case 22:
			*uParam1 = 1311562014;
			return true;
		case 23:
			*uParam1 = 1435506115;
			return true;
		case 24:
			*uParam1 = 1709487724;
			return true;
		case 20:
			*uParam1 = 757099750;
			return true;
		case 25:
			*uParam1 = 392315242;
			return true;
		default:
			break;
	}
	return false;
}

struct<2> func_383(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_384(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_385(struct<2> Param0)
{
	return func_581(Param0);
}

bool func_386(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_387(bool bParam0)
{
	if (!bParam0)
	{
		func_582(14);
	}
	else
	{
		func_219(14);
	}
}

void func_388()
{
	func_583(1);
	func_583(2);
	func_583(4);
	func_583(8);
	func_583(16);
	func_583(32);
	func_583(64);
	func_583(128);
	func_583(256);
	func_583(512);
	func_583(1024);
	func_583(2048);
	func_583(4096);
	func_583(8192);
	func_584();
	func_585();
}

void func_389(int iParam0)
{
	if (!func_586(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_587(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_390(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

void func_391(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_392(int iParam0)
{
	switch (func_588(iParam0))
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

void func_393(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	Global_1878407->f_7 = 0f;
	func_589(iParam0);
}

void func_394(struct<2> Param0, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_62(Param0))
	{
		return;
	}
	if (!func_378(Param0) && !func_590(Param0))
	{
		return;
	}
	if (bParam2)
	{
		*Global_1900869 = { Param0 };
		Global_1900871 = get_game_timer();
	}
	if (func_575(Param0) == 4)
	{
		if (!func_575(Param0) == 5 && !func_575(Param0) == 6)
		{
			func_591(Param0, 5);
			func_592(Param0);
		}
		return;
	}
	if (func_575(Param0) == 3)
	{
		func_593(1, -1706799532);
	}
	else if (func_575(Param0) == 4)
	{
		func_593(0, -1706799532);
	}
	if (!func_575(Param0) == 0)
	{
		if (_0x01f4d242765c6b24(func_385(Param0)))
		{
			iVar0 = 0;
			func_594(Param0, iVar0, 0, 255, 0);
		}
	}
	if (func_63(func_595(0), Param0))
	{
		func_596(1);
		func_597(0);
		func_598(1);
	}
	func_591(Param0, 0);
	func_592(Param0);
	func_598(1);
	Global_1051252->f_45.f_1 = 1;
	iVar1 = func_599(Param0);
	if (iVar1 != 2 && iVar1 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_395(int iParam0)
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

int func_396(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_492(iParam0, 0, 0) };
	Var5 = { func_60(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_228(bParam2), &Var5, &Var9, 15, 1))
	{
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!_0x9700e8efc4ab9089(func_228(bParam2), &Var5, &Var24, true))
	{
		return 0;
	}
	iVar38 = func_455(fParam1);
	if (Var9.f_14 == iVar38 && Var24.f_10 == iParam3)
	{
		return 1;
	}
	if (func_462(bParam2))
	{
		Var9.f_14 = iVar38;
		if (!_0xd80a8854db5cfba5(func_228(bParam2), &Var5, &Var9, 15))
		{
			return 0;
		}
	}
	else
	{
		Var39.f_9 = 1;
		Var39.f_11 = -1591664384;
		Var39 = { func_356(&Var9, 0) };
		Var39.f_10 = iParam3;
		Var39.f_16 = iVar38;
		iVar56 = func_600(-1230526146, &Var39, 0);
		if (iVar56 == -1)
		{
			return 0;
		}
		Global_1952637->f_926 = iVar56;
	}
	return 1;
}

int func_397(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_556(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_60(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_228(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_228(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_398(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 638520522:
			return 0;
		default:
			break;
	}
	return -1;
}

void func_400(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_601(uParam0);
			break;
	}
}

bool func_401(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_891[iParam1] = _databinding_add_data_container_from_path("", "CharacterCreationRoot");
			break;
		case 1:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "header");
			break;
		case 2:
			uParam0->f_891[iParam1] = _databinding_add_data_hash(&(uParam0->f_891[1]), "label", 1361833557);
			break;
		case 3:
			uParam0->f_891[iParam1] = _databinding_add_data_hash(&(uParam0->f_891[1]), "sublabel", 1574464441);
			break;
		case 4:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "footer");
			break;
		case 5:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[4]), "label", "");
			break;
		case 6:
			uParam0->f_891[iParam1] = _databinding_add_data_hash(&(uParam0->f_891[4]), "color", 1105014447);
			break;
		case 7:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "DetailsImage");
			break;
		case 8:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[7]), "Enabled", 0);
			break;
		case 9:
			uParam0->f_891[iParam1] = _databinding_add_data_hash(&(uParam0->f_891[7]), "Texture", 0);
			break;
		case 12:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "save_game_name");
			break;
		case 13:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[12]), "value", "CHAR_CREATOR_SAVE_GAME_ENTER");
			break;
		case 14:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[12]), "enabled", 1);
			break;
		case 29:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "randomize");
			break;
		case 30:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[29]), "visible", 0);
			break;
		case 41:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "age_option");
			break;
		case 42:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[41]), "visible", 0);
			break;
		case 43:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[41]), "enabled", 0);
			break;
		case 44:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[41]), "value", 18);
			break;
		case 45:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[41]), "minimum", 18);
			break;
		case 46:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[41]), "maximum", 60);
			break;
		case 15:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "appearance_option");
			break;
		case 16:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[15]), "enabled", 0);
			break;
		case 17:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "hair_colors_match");
			break;
		case 18:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[17]), "value", 0);
			break;
		case 19:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[17]), "enabled", 0);
			break;
		case 20:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[0]), "zoom_enabled", 1);
			break;
		case 21:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "whistle_option");
			break;
		case 22:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[21]), "enabled", 0);
			break;
		case 23:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[21]), "visible", 1);
			break;
		case 24:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "attributes_option");
			break;
		case 25:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[24]), "enabled", 0);
			break;
		case 26:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[24]), "visible", 1);
			break;
		case 27:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "confirm_option");
			break;
		case 28:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[27]), "enabled", 0);
			break;
		case 35:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "skin_tone");
			break;
		case 36:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[35]), "visible", 0);
			break;
		case 37:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[35]), "options");
			break;
		case 38:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[35]), "value", 0);
			break;
		case 39:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[35]), "texture_dictionary", "");
			break;
		case 40:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[35]), "texture", "");
			break;
		case 110:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "appearance_page_color_swatch");
			break;
		case 111:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[110]), "Visible", 0);
			break;
		case 112:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[110]), "Title", " ");
			break;
		case 113:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[110]), "FocusedIndex", 0);
			break;
		case 114:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[110]), "Items");
			break;
		case 115:
			uParam0->f_891[iParam1] = _databinding_add_ui_item_list(&(uParam0->f_891[110]), "ItemList");
			break;
		case 47:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "body_build");
			break;
		case 48:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[47]), "visible", 0);
			break;
		case 49:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[47]), "options");
			break;
		case 50:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[47]), "value", 0);
			break;
		case 106:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "lifestyle");
			break;
		case 107:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[106]), "visible", 0);
			break;
		case 108:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "makeup");
			break;
		case 109:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[108]), "visible", 0);
			break;
		case 10:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "head_main");
			break;
		case 116:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "grid");
			break;
		case 118:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[116]), "grid_xy_visible", 0);
			break;
		case 117:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[116]), "grid_x_visible", 0);
			break;
		case 119:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[116]), "leftLabel", " ");
			break;
		case 120:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[116]), "rightLabel", " ");
			break;
		case 121:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[116]), "topLabel", " ");
			break;
		case 122:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[116]), "bottomLabel", " ");
			break;
		case 123:
			uParam0->f_891[iParam1] = _databinding_add_data_float(&(uParam0->f_891[116]), "XAxis", 0f);
			break;
		case 124:
			uParam0->f_891[iParam1] = _databinding_add_data_float(&(uParam0->f_891[116]), "YAxis", 0f);
			break;
		case 31:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "heritage");
			break;
		case 32:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[31]), "visible", 0);
			break;
		case 33:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[31]), "options");
			break;
		case 34:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[31]), "value", 0);
			break;
		case 125:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "head_width");
			break;
		case 126:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[125]), "value", 0);
			break;
		case 127:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[125]), "minimum", -50);
			break;
		case 128:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[125]), "maximum", 50);
			break;
		case 129:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "brow_shape");
			break;
		case 130:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_brow_depth");
			break;
		case 131:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[130]), "value", 0);
			break;
		case 132:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[130]), "minimum", -50);
			break;
		case 133:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[130]), "maximum", 50);
			break;
		case 134:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "ear_shape");
			break;
		case 135:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "ear_size");
			break;
		case 136:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "cheek_shape");
			break;
		case 137:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_cheeks_depth");
			break;
		case 138:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[137]), "value", 0);
			break;
		case 139:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[137]), "minimum", -50);
			break;
		case 140:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[137]), "maximum", 50);
			break;
		case 151:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "mouth");
			break;
		case 152:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "mouth_position");
			break;
		case 153:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "upper_lip_shape");
			break;
		case 154:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "lower_lip_shape");
			break;
		case 155:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_lips_depth");
			break;
		case 156:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "nose_option");
			break;
		case 157:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "nose_shape");
			break;
		case 158:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "nose_tip");
			break;
		case 141:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "jaw_shape");
			break;
		case 142:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_jaw_depth");
			break;
		case 143:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[142]), "value", 0);
			break;
		case 144:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[142]), "minimum", -50);
			break;
		case 145:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[142]), "maximum", 50);
			break;
		case 146:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_chin_shape");
			break;
		case 147:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "pedexpress_chin_depth");
			break;
		case 148:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[147]), "value", 0);
			break;
		case 149:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[147]), "minimum", -50);
			break;
		case 150:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[147]), "maximum", 50);
			break;
		case 51:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "eye_color");
			break;
		case 52:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[51]), "visible", 0);
			break;
		case 53:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[51]), "options");
			break;
		case 54:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[51]), "value", 0);
			break;
		case 55:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[51]), "texture_dictionary", "");
			break;
		case 56:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[51]), "texture", "");
			break;
		case 159:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "eye_redness");
			break;
		case 160:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[159]), "value", 0);
			break;
		case 161:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[159]), "minimum", 0);
			break;
		case 162:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[159]), "maximum", 50);
			break;
		case 163:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "eye_size");
			break;
		case 164:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "eye_depth");
			break;
		case 165:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "eye_position");
			break;
		case 91:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[10]), "teeth");
			break;
		case 92:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[91]), "visible", 0);
			break;
		case 93:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[91]), "options");
			break;
		case 94:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[91]), "value", 0);
			break;
		case 61:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "eyes_and_brows");
			break;
		case 62:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[61]), "visible", 0);
			break;
		case 63:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[61]), "options");
			break;
		case 64:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[61]), "value", 0);
			break;
		case 65:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[61]), "customizable", 1);
			break;
		case 66:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "nose");
			break;
		case 67:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[66]), "visible", 0);
			break;
		case 68:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[66]), "options");
			break;
		case 69:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[66]), "value", 0);
			break;
		case 70:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[66]), "customizable", 1);
			break;
		case 71:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "mouth_and_lips");
			break;
		case 72:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[71]), "visible", 0);
			break;
		case 73:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[71]), "options");
			break;
		case 74:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[71]), "value", 0);
			break;
		case 75:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[71]), "customizable", 1);
			break;
		case 76:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "jaw_and_chin");
			break;
		case 77:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[76]), "visible", 0);
			break;
		case 78:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[76]), "options");
			break;
		case 79:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[76]), "value", 0);
			break;
		case 80:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[76]), "customizable", 1);
			break;
		case 81:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "ears");
			break;
		case 82:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[81]), "visible", 0);
			break;
		case 83:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[81]), "options");
			break;
		case 84:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[81]), "value", 0);
			break;
		case 85:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[81]), "customizable", 1);
			break;
		case 86:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "cheeks");
			break;
		case 87:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[86]), "visible", 0);
			break;
		case 88:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[86]), "options");
			break;
		case 89:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[86]), "value", 0);
			break;
		case 90:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[86]), "customizable", 1);
			break;
		case 11:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "face_main");
			break;
		case 166:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[11]), "facial_hair_hidden", 0);
			break;
		case 167:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "face_preset");
			break;
		case 168:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[167]), "options");
			break;
		case 169:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[167]), "value", 0);
			break;
		case 170:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_mottling");
			break;
		case 171:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[170]), "options");
			break;
		case 172:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[170]), "value", 0);
			break;
		case 173:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_aging");
			break;
		case 174:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[173]), "options");
			break;
		case 175:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[173]), "value", 0);
			break;
		case 176:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_complexion");
			break;
		case 177:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[176]), "options");
			break;
		case 178:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[176]), "value", 0);
			break;
		case 179:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_complexion_2");
			break;
		case 180:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[179]), "options");
			break;
		case 181:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[179]), "value", 0);
			break;
		case 238:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[179]), "fine_tune_enabled", 0);
			break;
		case 182:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_freckles");
			break;
		case 183:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[182]), "options");
			break;
		case 184:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[182]), "value", 0);
			break;
		case 240:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[182]), "fine_tune_enabled", 0);
			break;
		case 185:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_moles");
			break;
		case 186:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[185]), "options");
			break;
		case 187:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[185]), "value", 0);
			break;
		case 241:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[185]), "fine_tune_enabled", 0);
			break;
		case 188:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_spots");
			break;
		case 189:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[188]), "options");
			break;
		case 190:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[188]), "value", 0);
			break;
		case 242:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[188]), "fine_tune_enabled", 0);
			break;
		case 191:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_scar");
			break;
		case 192:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[191]), "options");
			break;
		case 193:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[191]), "value", 0);
			break;
		case 239:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[191]), "fine_tune_enabled", 0);
			break;
		case 194:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_spots_2");
			break;
		case 195:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[194]), "options");
			break;
		case 196:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[194]), "value", 0);
			break;
		case 197:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_foundation");
			break;
		case 198:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[197]), "options");
			break;
		case 199:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[197]), "value", 0);
			break;
		case 243:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[197]), "fine_tune_enabled", 0);
			break;
		case 200:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_blusher");
			break;
		case 201:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[200]), "options");
			break;
		case 202:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[200]), "value", 0);
			break;
		case 244:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[200]), "fine_tune_enabled", 0);
			break;
		case 206:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_eyeshadow");
			break;
		case 207:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[206]), "options");
			break;
		case 208:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[206]), "value", 0);
			break;
		case 245:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[206]), "fine_tune_enabled", 0);
			break;
		case 224:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_eyeshadow_color");
			break;
		case 225:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[224]), "options");
			break;
		case 226:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[224]), "value", 0);
			break;
		case 227:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[224]), "texture_dictionary", "");
			break;
		case 228:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[224]), "texture", "");
			break;
		case 229:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[224]), "visible", 0);
			break;
		case 230:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[224]), "enabled", 1);
			break;
		case 203:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_eyeliner");
			break;
		case 204:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[203]), "options");
			break;
		case 205:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[203]), "value", 0);
			break;
		case 246:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[203]), "fine_tune_enabled", 0);
			break;
		case 209:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_lipstick");
			break;
		case 210:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[209]), "options");
			break;
		case 211:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[209]), "value", 0);
			break;
		case 247:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[209]), "fine_tune_enabled", 0);
			break;
		case 231:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_lipstick_color");
			break;
		case 232:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[231]), "options");
			break;
		case 233:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[231]), "value", 0);
			break;
		case 234:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[231]), "texture_dictionary", "");
			break;
		case 235:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[231]), "texture", "");
			break;
		case 236:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[231]), "visible", 0);
			break;
		case 237:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[231]), "enabled", 1);
			break;
		case 212:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "skin_scabs");
			break;
		case 213:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[212]), "options");
			break;
		case 214:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[212]), "value", 0);
			break;
		case 57:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "eyebrows");
			break;
		case 58:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[57]), "visible", 0);
			break;
		case 59:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[57]), "options");
			break;
		case 60:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[57]), "value", 0);
			break;
		case 215:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "grime");
			break;
		case 216:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[215]), "options");
			break;
		case 217:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[215]), "value", 0);
			break;
		case 218:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "grime_wear");
			break;
		case 219:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[218]), "options");
			break;
		case 220:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[218]), "value", 0);
			break;
		case 221:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[11]), "face_paint");
			break;
		case 222:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[221]), "options");
			break;
		case 223:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[221]), "value", 0);
			break;
		case 95:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "hair_main");
			break;
		case 96:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[95]), "visible", 0);
			break;
		case 97:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[95]), "hair_style");
			break;
		case 98:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[97]), "options");
			break;
		case 99:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[97]), "value", 0);
			break;
		case 100:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[95]), "hair_color");
			break;
		case 101:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[100]), "enabled", 1);
			break;
		case 102:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[100]), "options");
			break;
		case 103:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[100]), "value", 0);
			break;
		case 104:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[100]), "texture_dictionary", "");
			break;
		case 105:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[100]), "texture", "");
			break;
		case 248:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "beard_main");
			break;
		case 249:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[248]), "visible", 0);
			break;
		case 250:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[248]), "beard_style");
			break;
		case 251:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[250]), "options");
			break;
		case 252:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[250]), "value", 0);
			break;
		case 253:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[248]), "beard_color");
			break;
		case 254:
			uParam0->f_891[iParam1] = _databinding_add_data_hash(&(uParam0->f_891[253]), "SelectedOption", -1364375908);
			break;
		case 255:
			uParam0->f_891[iParam1] = _databinding_add_data_bool(&(uParam0->f_891[253]), "enabled", 1);
			break;
		case 256:
			uParam0->f_891[iParam1] = _0xd48993a61938c64d(&(uParam0->f_891[253]), "options");
			break;
		case 257:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[253]), "value", 0);
			break;
		case 258:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[253]), "texture_dictionary", "");
			break;
		case 259:
			uParam0->f_891[iParam1] = _databinding_add_data_string(&(uParam0->f_891[253]), "texture", "");
			break;
		case 260:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "whistle_style");
			break;
		case 262:
			uParam0->f_891[iParam1] = _databinding_add_hash_array(&(uParam0->f_891[260]), "options");
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[262]), 1408672400, -1);
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[262]), 1181091695, -1);
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[262]), -1920395852, -1);
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[262]), -1447080416, -1);
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[262]), 457257254, -1);
			break;
		case 261:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[260]), "value", 0);
			break;
		case 263:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "whistle_pitch");
			break;
		case 264:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[263]), "value", 50);
			break;
		case 265:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[263]), "minimum", 0);
			break;
		case 266:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[263]), "maximum", 100);
			break;
		case 267:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "whistle_clarity");
			break;
		case 268:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[267]), "value", 50);
			break;
		case 269:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[267]), "minimum", 0);
			break;
		case 270:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[267]), "maximum", 100);
			break;
		case 271:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "health_attribute");
			break;
		case 272:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[271]), "value", 0);
			break;
		case 273:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[271]), "minimum", 0);
			break;
		case 274:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[271]), "maximum", 10);
			break;
		case 275:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[271]), "total_tanks", 10);
			break;
		case 276:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "stamina_attribute");
			break;
		case 277:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[276]), "value", 0);
			break;
		case 278:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[276]), "minimum", 0);
			break;
		case 279:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[276]), "maximum", 10);
			break;
		case 280:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[276]), "total_tanks", 10);
			break;
		case 281:
			uParam0->f_891[iParam1] = _databinding_add_data_container(&(uParam0->f_891[0]), "deadeye_attribute");
			break;
		case 282:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[281]), "value", 0);
			break;
		case 283:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[281]), "minimum", 0);
			break;
		case 284:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[281]), "maximum", 10);
			break;
		case 285:
			uParam0->f_891[iParam1] = _databinding_add_data_int(&(uParam0->f_891[281]), "total_tanks", 10);
			break;
		default:
			break;
	}
	if (!_databinding_is_data_id_valid(&(uParam0->f_891[iParam1])))
	{
		return false;
	}
	return true;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case -470597098:
			return 0;
		case -1831630742:
			return 1;
		case -378973917:
			return 2;
		case -656872069:
			return 3;
		case -377913574:
			return 4;
		case -341353191:
			return 5;
		case 1678986122:
			return 6;
		case -1634010600:
			return 7;
		case -82099394:
			return 8;
		case -353315634:
			return 9;
		case 1505046564:
			return 10;
		case 732357670:
			return 11;
		case 1180510927:
			return 12;
		case 974619672:
			return 13;
		case -105629930:
			return 14;
		case -65268675:
			return 15;
		case -1539059035:
			return 19;
		case -1668600577:
			return 20;
		default:
			break;
	}
	return -1;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case -1457599051:
			return 0;
		case 1640971658:
			return 1;
		case -1015269885:
			return 2;
		case -279722605:
			return 3;
		case -746987411:
			return 4;
		case 1322599313:
			return 5;
		case -1960177834:
			return 7;
		case -1924156330:
			return 6;
		case -576441437:
			return 8;
		case -1400940065:
			return 9;
		case 1302342308:
			return 10;
		case -1339773427:
			return 11;
		case -218496860:
			return 12;
		case -375433332:
			return 13;
		case 2081441226:
			return 14;
		case 2013975586:
			return 15;
		case -1813612755:
			return 16;
		case -958666282:
			return 17;
		case -1680073161:
			return 18;
		case 1413146483:
			return 19;
		case 252753701:
			return 20;
		case -1016346652:
			return 21;
		case 193024979:
			return 22;
		case -1349294388:
			return 23;
		case -602194269:
			return 24;
		case 1804302014:
			return 25;
		case -1189480910:
			return 26;
		case 740034072:
			return 27;
		case -2135313392:
			return 28;
		case 2104822136:
			return 29;
		case -809127494:
			return 30;
		case 618570242:
			return 31;
		case 1893787424:
			return 32;
		case 400337444:
			return 33;
		case 1083750385:
			return 34;
		case -1840419691:
			return 35;
		case -164959090:
			return 36;
		case -1648749200:
			return 37;
		case 2086910643:
			return 38;
		case 1846743157:
			return 39;
		case 1993817381:
			return 40;
		case -1262937595:
			return 41;
		case -1790173093:
			return 42;
		case 184774274:
			return 51;
		case 951785786:
			return 43;
		case 1994085418:
			return 44;
		case 2020456906:
			return 45;
		case -1813628912:
			return 46;
		case -567771950:
			return 47;
		case 1127876905:
			return 48;
		case 80282952:
			return 49;
		case 277158418:
			return 50;
		case 1840918486:
			return 52;
		case -152557498:
			return 53;
		case -1206037154:
			return 54;
		case 203763151:
			return 55;
		case 644634932:
			return 56;
		case -703865325:
			return 57;
		case -861918092:
			return 58;
		case -1662451772:
			return 59;
		case 285284140:
			return 60;
		case -1760692996:
			return 61;
		case -951031692:
			return 62;
		case -2041745821:
			return 63;
		case -1212243458:
			return 65;
		case 1050320382:
			return 64;
		case 606268471:
			return 66;
		case 1807454184:
			return 67;
		case 1907851832:
			return 68;
		case -179641279:
			return 69;
		case 664388307:
			return 71;
		case 1814754636:
			return 70;
		case 505087938:
			return 72;
		case 625901731:
			return 73;
		case -559666029:
			return 74;
		case 1944575058:
			return 75;
		case -1595605714:
			return 76;
		case 1841403670:
			return 77;
		case -329897772:
			return 78;
		case 318218586:
			return 79;
		case 811796221:
			return 80;
		case 1270378956:
			return 81;
		case 1752171437:
			return 82;
		case -1626094137:
			return 83;
		case -1032863457:
			return 84;
		case 90611106:
			return 85;
		case -1891216663:
			return 86;
		case -1277218079:
			return 87;
		case 54610417:
			return 88;
		case -484997455:
			return 89;
		case -745101721:
			return 90;
		default:
			break;
	}
	return -1;
}

bool func_404()
{
	request_anim_dict(func_256(0));
	if (!has_anim_dict_loaded(func_256(0)))
	{
		return false;
	}
	request_anim_dict(func_256(4));
	if (!has_anim_dict_loaded(func_256(4)))
	{
		return false;
	}
	request_anim_dict(func_256(8));
	if (!has_anim_dict_loaded(func_256(8)))
	{
		return false;
	}
	request_anim_dict(func_256(9));
	if (!has_anim_dict_loaded(func_256(9)))
	{
		return false;
	}
	_0x2b6529c54d29037a(func_53());
	if (!_0x2c04d89a0fb4e244(func_53()))
	{
		return false;
	}
	request_clip_set(func_54(1));
	if (!has_clip_set_loaded(func_54(1)))
	{
		return false;
	}
	request_clip_set(func_54(0));
	if (!has_clip_set_loaded(func_54(0)))
	{
		return false;
	}
	return true;
}

void func_405(var uParam0)
{
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1412340602, uParam0->f_614, 0))
	{
		return;
	}
	uParam0->f_647 = uParam0->f_642.f_1;
	if (!func_279(uParam0, 17571750, uParam0->f_1193.f_474.f_13, 0))
	{
		return;
	}
	uParam0->f_648 = uParam0->f_642.f_1;
}

bool func_406(var uParam0)
{
	iVar1 = 1;
	switch (uParam0->f_211)
	{
		case 0:
			func_602(uParam0);
			uParam0->f_211 = 1;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < uParam0->f_613)
			{
				if (!uParam0->f_212[iVar0]->f_1 && !_0xb0b2c6d170b0e8e5(&(uParam0->f_212[iVar0])))
				{
					iVar1 = 0;
				}
				uParam0->f_212[iVar0]->f_1 = 1;
				iVar0++;
			}
			return iVar1;
	}
	return false;
}

bool func_407(var uParam0)
{
	if (!func_603(uParam0))
	{
		return false;
	}
	bVar0 = is_ped_model(uParam0->f_615, -171876066);
	func_604(uParam0, 8, 0);
	func_604(uParam0, 74, 2);
	func_604(uParam0, 46, 0);
	if (bVar0)
	{
		func_604(uParam0, 77, 3);
	}
	else
	{
		if (!func_257(uParam0, 512))
		{
			func_604(uParam0, 72, 1);
			func_305(uParam0, 512);
		}
		if (!func_257(uParam0, 1024))
		{
			func_604(uParam0, 70, 1);
			func_305(uParam0, 1024);
		}
	}
	return true;
}

void func_408(var uParam0)
{
	func_605(uParam0, 0);
	func_606(uParam0, 18, 1);
	func_606(uParam0, 249, 1);
	func_606(uParam0, 109, 0);
	func_606(uParam0, 229, 0);
	func_606(uParam0, 236, 0);
}

void func_409(var uParam0)
{
	func_605(uParam0, 0);
	func_606(uParam0, 19, 0);
	func_606(uParam0, 249, 0);
	func_606(uParam0, 109, 1);
	func_606(uParam0, 229, 1);
	func_606(uParam0, 236, 1);
	func_607(uParam0, 70, &(uParam0->f_1193.f_474.f_100));
	func_608(uParam0, 70, uParam0->f_1193.f_474.f_100, 0);
	func_607(uParam0, 72, &(uParam0->f_1193.f_474.f_98));
	func_608(uParam0, 72, uParam0->f_1193.f_474.f_98, 0);
}

void func_410(var uParam0)
{
	while (_event_manager_is_event_pending(uParam0->f_649.f_1))
	{
		if (_event_manager_peek_event(uParam0->f_649.f_1, &iVar0))
		{
			switch (iVar0)
			{
				case -1740156697:
					func_609(uParam0, &iVar0);
					break;
				case -1203660660:
					func_610(uParam0, &iVar0);
					break;
				case -2075827635:
					func_611(uParam0, &iVar0);
					break;
				case 1177283456:
					func_612(uParam0, &iVar0);
					break;
				case -1151569080:
					func_613(uParam0, &iVar0);
					break;
				default:
					break;
			}
			_event_manager_pop_event(uParam0->f_649.f_1);
		}
	}
}

void func_411(var uParam0)
{
	if (uParam0->f_617 == uParam0->f_639)
	{
		return;
	}
	if (uParam0->f_649.f_231 != -1 && uParam0->f_617.f_10)
	{
		if (uParam0->f_617 == uParam0->f_649.f_48[uParam0->f_649.f_231]->f_1)
		{
			return;
		}
		else if (uParam0->f_617 == uParam0->f_649.f_3[uParam0->f_649.f_46]->f_1)
		{
			return;
		}
	}
	func_614(uParam0);
	func_270(uParam0, 0);
	if (!func_279(uParam0, 1058524365, uParam0->f_614, uParam0->f_639))
	{
		return;
	}
	uParam0->f_617 = uParam0->f_639;
	uParam0->f_617.f_2 = { func_615(uParam0, 780817316, 0, 0) };
	if (func_83(uParam0->f_617.f_2))
	{
		return;
	}
	uParam0->f_617.f_5 = { func_615(uParam0, 615455576, 0, 0) };
	uParam0->f_617.f_8 = func_491(uParam0, -1059408258, 0, 0);
	uParam0->f_617.f_9 = func_491(uParam0, 1126571892, 0, 0);
	if (uParam0->f_617.f_9 < 5f)
	{
		uParam0->f_617.f_9 = 5f;
	}
	iVar0 = 1200;
	if (!does_cam_exist(uParam0->f_617.f_1))
	{
		uParam0->f_617.f_1 = create_camera(26379945, false);
		set_cam_active(uParam0->f_617.f_1, true);
		iVar0 = 0;
	}
	set_cam_params(uParam0->f_617.f_1, uParam0->f_617.f_2, uParam0->f_617.f_5, uParam0->f_617.f_9, iVar0, 1, 1, 2, 1, 1);
	_0x11f32bb61b756732(uParam0->f_617.f_1, uParam0->f_617.f_8);
	render_script_cams(true, false, 3000, true, false, 0);
	shake_cam(uParam0->f_617.f_1, "HAND_SHAKE", 0.04f);
}

void func_412(var uParam0)
{
	func_616(uParam0);
	if (!does_cam_exist(uParam0->f_617.f_1) || is_cam_interpolating(uParam0->f_617.f_1))
	{
		return;
	}
	uParam0->f_1187 = get_control_normal(2, 1183164979);
	uParam0->f_1187.f_1 = get_control_normal(2, 1623613108);
	if (uParam0->f_1187 < 0.35f && uParam0->f_1187 > -0.35f)
	{
		uParam0->f_1187 = 0f;
	}
	if (uParam0->f_1187.f_1 < 0.35f && uParam0->f_1187.f_1 > -0.35f)
	{
		uParam0->f_1187.f_1 = 0f;
	}
	uParam0->f_1190 = get_control_normal(2, -78193317);
	uParam0->f_1190.f_1 = get_control_normal(2, 152139984);
	if (vmag(uParam0->f_1190) < 0.25f)
	{
		uParam0->f_1190 = { 0f, 0f, 0f };
	}
	if (uParam0->f_649.f_231 == 0)
	{
		_0x5cb71eaa1429a358(256);
	}
}

void func_413(var uParam0)
{
	switch (uParam0->f_649.f_231)
	{
		case 51:
			iVar0 = 2;
			uParam0->f_2368 = func_256(0);
			sVar2 = func_256(1);
			sVar1 = func_256(2);
			uParam0->f_2369 = func_256(3);
			break;
		default:
			break;
	}
	func_617(uParam0, iVar0, uParam0->f_2368, sVar2, sVar1);
}

void func_414(var uParam0)
{
	bVar0 = is_control_pressed(2, 1395223413);
	bVar1 = true;
	if (func_257(uParam0, 32) || func_257(uParam0, 16))
	{
		bVar1 = false;
	}
	if (uParam0->f_649.f_46 == -1 || uParam0->f_649.f_231 == -1)
	{
		bVar1 = false;
	}
	if (uParam0->f_617 == 1730960490)
	{
		bVar1 = false;
	}
	if ((uParam0->f_649.f_46 == 20 || uParam0->f_649.f_46 == 19) || uParam0->f_649.f_46 == 12)
	{
		bVar1 = false;
	}
	bVar2 = (bVar0 && bVar1);
	func_618(uParam0, bVar2);
	func_606(uParam0, 20, bVar1);
}

void func_415(var uParam0, int iParam1, bool bParam2)
{
	if (!func_257(uParam0, 64))
	{
		return;
	}
	switch (iParam1)
	{
		case 28:
			func_619(uParam0, &bVar0, &bVar1, 2, 1, bParam2);
			func_620(uParam0, 2, 1, bVar0, bVar1, 1);
			break;
		case 30:
			func_619(uParam0, &bVar0, &bVar1, 5, 6, bParam2);
			func_620(uParam0, 5, 6, bVar0, bVar1, 1);
			break;
		case 31:
			func_619(uParam0, &bVar0, &bVar1, 4, 7, bParam2);
			func_620(uParam0, 4, 7, bVar0, bVar1, 1);
			break;
		case 32:
			func_619(uParam0, &bVar0, &bVar1, 9, 8, bParam2);
			func_620(uParam0, 9, 8, bVar0, bVar1, 1);
			break;
		case 34:
			func_619(uParam0, &bVar0, &bVar1, 12, 11, bParam2);
			func_620(uParam0, 12, 11, bVar0, bVar1, 1);
			break;
		case 36:
			func_619(uParam0, &bVar0, &bVar1, 15, 14, bParam2);
			func_620(uParam0, 15, 14, bVar0, bVar1, 1);
			break;
		case 38:
			func_619(uParam0, &bVar0, &bVar1, 29, 30, bParam2);
			func_620(uParam0, 29, 30, bVar0, bVar1, 1);
			break;
		case 39:
			func_619(uParam0, &bVar0, &bVar1, 32, -1, bParam2);
			func_620(uParam0, 32, -1, bVar0, 0, 1);
			break;
		case 40:
			func_619(uParam0, &bVar0, &bVar1, 34, 33, bParam2);
			func_620(uParam0, 34, 33, bVar0, bVar1, 1);
			break;
		case 41:
			func_619(uParam0, &bVar0, &bVar1, 37, 36, bParam2);
			func_620(uParam0, 37, 36, bVar0, bVar1, 1);
			break;
		case 42:
			func_619(uParam0, &bVar0, &bVar1, 35, 38, bParam2);
			func_620(uParam0, 35, 38, bVar0, bVar1, 1);
			break;
		case 43:
			func_619(uParam0, &bVar0, &bVar1, 23, 25, bParam2);
			func_620(uParam0, 23, 25, bVar0, bVar1, 1);
			break;
		case 44:
			func_619(uParam0, &bVar0, &bVar1, 27, 24, bParam2);
			func_620(uParam0, 27, 24, bVar0, bVar1, 1);
			break;
		case 45:
			func_619(uParam0, &bVar0, &bVar1, 28, 26, bParam2);
			func_620(uParam0, 28, 26, bVar0, bVar1, 1);
			break;
		case 48:
			func_619(uParam0, &bVar0, &bVar1, 18, 17, bParam2);
			func_620(uParam0, 18, 17, bVar0, bVar1, 1);
			break;
		case 49:
			func_619(uParam0, &bVar0, &bVar1, 20, 19, bParam2);
			func_620(uParam0, 20, 19, bVar0, bVar1, 1);
			break;
		case 50:
			func_619(uParam0, &bVar0, &bVar1, 21, 22, bParam2);
			func_620(uParam0, 21, 22, bVar0, bVar1, 1);
			break;
		case 27:
			break;
		case 29:
			func_619(uParam0, &bVar0, &bVar1, 3, -1, bParam2);
			func_620(uParam0, 3, -1, bVar0, 0, 1);
			break;
		case 33:
			func_619(uParam0, &bVar0, &bVar1, 10, -1, bParam2);
			func_620(uParam0, 10, -1, bVar0, 0, 1);
			break;
		case 35:
			func_619(uParam0, &bVar0, &bVar1, 13, -1, bParam2);
			func_620(uParam0, 13, -1, bVar0, 0, 1);
			break;
		case 37:
			func_619(uParam0, &bVar0, &bVar1, 16, -1, bParam2);
			func_620(uParam0, 16, -1, bVar0, 0, 1);
			break;
		case 53:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101), 12857284, 1);
			break;
		case 55:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_1), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_1), -1180698265, 1);
			break;
		case 56:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_2), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_2), -487028314, 1);
			break;
		case 57:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_3), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_3), 241235545, 1);
			break;
		case 58:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_4), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_4), 1827902148, 1);
			break;
		case 59:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_5), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_5), 1301555144, 1);
			break;
		case 60:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_6), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_6), 1858448324, 1);
			break;
		case 62:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_11), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_11), -2056583192, 1);
			break;
		case 63:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_13), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_13), 1015239729, 1);
			break;
		case 64:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_14), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_14), -875805376, 1);
			break;
		case 65:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_15), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_15), -340627321, 1);
			break;
		case 66:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_101.f_12), &bVar0, bParam2, 0);
			func_622(uParam0, &(uParam0->f_1193.f_474.f_101.f_12), -768760704, 1);
			break;
		case 47:
			func_621(uParam0, iParam1, &(uParam0->f_1193.f_474.f_16), &bVar0, bParam2, 0);
			func_623(uParam0, iParam1, uParam0->f_1193.f_474.f_16, 0);
			break;
	}
	if (bVar0 || bVar1)
	{
		func_624(uParam0, iParam1);
	}
}

void func_416()
{
	Global_1952637->f_918 = 0;
	Global_1952637->f_923 = 0;
	Global_1952637->f_924 = 0;
	Global_1952637->f_920 = 0;
	Global_1952637->f_921 = 0;
	Global_1952637->f_922 = 0;
	Global_1952637->f_919 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637->f_595[iVar0] = 0;
		iVar0++;
	}
	func_625(8);
	func_625(16);
}

void func_417(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_613)
	{
		_0x13e7320c762f0477(&(uParam0->f_212[iVar0]));
		uParam0->f_212[iVar0]->f_1 = 0;
		iVar0++;
	}
	uParam0->f_211 = 0;
}

bool func_418(int iParam0)
{
	return iParam0 != 0;
}

void func_419(var uParam0)
{
	if (uParam0->f_1179)
	{
		uParam0->f_1179 = 0;
		_0xdad7fb8402651654();
	}
}

int func_420(vector3 vParam0)
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

int func_421(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_422(var uParam0, int iParam1, var uParam2, float fParam3)
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
		_datafile_get_float(fParam3, &Var0);
		return true;
	}
	return false;
}

int func_423(int iParam0)
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

void func_424(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_626(iParam0);
	if (!func_627(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_628(128) && !func_629(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_630() == 4)
	{
		func_582(18);
	}
	func_631(1024);
}

void func_425(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_426(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_427(struct<29> Param0, var uParam29, int iParam30)
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

void func_428(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_429(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_430(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_431(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

int func_432(int iParam0)
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

void func_433(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_632(uParam0, 1))
	{
		func_633(uParam0, 1);
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

int func_434(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_435(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_436(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

bool func_437(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_438(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

void func_439(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

bool func_440(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_441(var uParam0, bool bParam1)
{
	if (!func_245(uParam0, &iVar1, &iVar0, bParam1))
	{
		iVar0 = -1;
	}
	else
	{
		func_247(iVar1);
	}
	return iVar0;
}

bool func_442(var uParam0)
{
	iVar1 = 1;
	Var2 = { func_60(889965687, func_59(1), 1034665895, 1) };
	func_350(1624873267);
	if (Global_17411.f_55.f_644.f_33[0]->f_1 == 491602716)
	{
		if (!func_634(&(Global_17411.f_55.f_644.f_33[0]->f_1), (*uParam0)[0], Var2, 1))
		{
			iVar1 = 0;
		}
	}
	else
	{
		(*uParam0)[0]->f_1 = 9900;
		func_635((*uParam0)[0], 1);
		iVar1 = 0;
	}
	iVar0 = 1;
	while (iVar0 <= 10)
	{
		if (!func_445(2, iVar0))
		{
			func_635((*uParam0)[iVar0], 3);
		}
		else if (Global_17411.f_55.f_644.f_33[iVar0]->f_1 != func_636(iVar0))
		{
			(*uParam0)[iVar0]->f_1 = 9900;
			func_635((*uParam0)[iVar0], 1);
			iVar1 = 0;
		}
		else if (!func_637(&(Global_17411.f_55.f_644.f_33[iVar0]->f_1), (*uParam0)[iVar0], Var2))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_443(int iParam0)
{
	bVar1 = false;
	iVar2 = 0;
	if (iParam0[0] == 1 || iParam0[0] == 2)
	{
		func_638((*iParam0)[0], &iVar2);
		if (iVar2 == 0)
		{
			bVar1 = true;
		}
	}
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_350(1624873267);
			Global_1952637->f_1556 = 491602716;
			func_351(0, 1, 1, 1, 1, 0);
			func_639();
			func_640();
			func_114(34, 0, 0, 0, 0);
			(*iParam0)[0] = 0;
		}
		else
		{
			func_545(0, 1);
		}
		func_641(iParam0, 0);
		return 1;
	}
	func_641(iParam0, 1);
	func_47(iVar2, (*iParam0)[iVar0]->f_1);
	return 0;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 491602716:
			return 0;
		case 217155793:
			return 1;
		case 97391779:
			return 2;
		case -808817534:
			return 3;
		case 1270922359:
			return 4;
		case -2011879201:
			return 5;
		case -1063340820:
			return 6;
		case 2127262701:
			return 7;
		case -1323870201:
			return 8;
		case 1632140501:
			return 9;
		case 967218463:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_445(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1] && iParam0) != 0;
	}
	return false;
}

bool func_446(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_492(iParam0, bParam2, 0) };
	Var5 = { func_60(iParam0, Var0, Var0.f_4, bParam2) };
	return func_248(Var5, iParam1, bParam2);
}

int func_447(struct<4> Param0, bool bParam4)
{
	iVar0 = func_243(Param0, -1389278274, 1, -1);
	if (iVar0 == 0)
	{
		Var3.f_9 = -1591664384;
		Var17 = { func_244(0, -1591664384, -1389278274, -1591664384, 0, 0, 0) };
		if (!func_245(&Var17, &iVar2, &iVar1, 1))
		{
			return -658302611;
		}
		if (iVar1 > 0 && func_246(&Var3, 0, iVar2, iVar1))
		{
			if (bParam4)
			{
				func_248(Var3, 1, 0);
			}
			iVar0 = Var3.f_4;
		}
		else
		{
			iVar0 = -658302611;
		}
		func_247(iVar2);
	}
	return iVar0;
}

void func_448(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		uVar3[func_642((*uParam1)[iVar0]->f_17, 1)] = &uVar3[func_642((*uParam1)[iVar0]->f_17, 1)] + 1;
		if (func_395(uParam1[iVar0]) != 0 || uParam1[iVar0] == 0)
		{
			uVar3[func_642((*uParam1)[iVar0]->f_17, 1)] = &uVar3[func_642((*uParam1)[iVar0]->f_17, 1)] + 2;
		}
		if (&uVar3[func_642((*uParam1)[iVar0]->f_17, 1)] > 1)
		{
			uVar24[iVar1] = (*uParam1)[iVar0]->f_17;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = (uParam0->f_6 - 1);
		while (iVar2 >= 0)
		{
			if (&uVar24[iVar0] == (*uParam1)[iVar2]->f_17)
			{
				func_458(uParam0, uParam1, iVar2);
			}
			else
			{
				iVar2 = (iVar2 + -1);
			}
		}
		iVar0++;
	}
}

bool func_449(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	uParam0->f_5 = 931844364;
	if (!_0x63342c50ec115ce8(iParam1, 0, 0, iParam2, 1, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), &(uParam0->f_4), &uVar3, &uVar0, &uVar1, &uVar2))
	{
	}
	if (bParam3)
	{
		uParam0->f_6 = 0;
		uParam0->f_7 = 0;
	}
	return true;
}

int func_450(int iParam0)
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
	Var17 = { func_244(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (!func_245(&Var17, &iVar0, &iVar1, 1))
	{
		return 0;
	}
	if (iVar1 <= 0)
	{
		func_247(iVar0);
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_246(&Var3, iVar2, iVar0, iVar1))
		{
		}
		else if (func_395(Var3.f_4) != 0)
		{
		}
		else
		{
			func_247(iVar0);
			return Var3.f_4;
		}
		iVar2++;
	}
	func_247(iVar0);
	return 0;
}

struct<17> func_451(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_228(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_452(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_453(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(*uParam1)[uParam0->f_6] = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((*uParam1)[iVar18]->f_1 < ((*uParam1)[(iVar18 - 1)])->f_1)
		{
			Var19 = { *(*uParam1)[iVar18] };
			*(*uParam1)[iVar18] = { *((*uParam1)[(iVar18 - 1)]) };
			*((*uParam1)[(iVar18 - 1)]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

bool func_453(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_643(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_644(uParam0, bParam3);
	}
	return true;
}

void func_454(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_453(&Var0, *uParam0, 0, 0, 6))
	{
		return;
	}
	if (Var0.f_7 != uParam0->f_7)
	{
		uParam0->f_7 = Var0.f_7;
		uParam0->f_8 = Var0.f_8;
		uParam0->f_14 = Var0.f_14;
	}
	if (Var0.f_9 != uParam0->f_9)
	{
		uParam0->f_9 = Var0.f_9;
		uParam0->f_10 = Var0.f_10;
		uParam0->f_11 = Var0.f_11;
		uParam0->f_12 = Var0.f_12;
	}
	if (Var0.f_4 != uParam0->f_4)
	{
		uParam0->f_4 = Var0.f_4;
	}
	if (Var0.f_5 != uParam0->f_5)
	{
		uParam0->f_5 = Var0.f_4;
	}
	if (Var0.f_3 != Var0.f_3)
	{
		uParam0->f_3 = Var0.f_3;
	}
	if (Var0.f_15 != uParam0->f_15)
	{
		uParam0->f_15 = Var0.f_15;
	}
	if (Var0.f_6 != uParam0->f_6)
	{
		uParam0->f_6 = Var0.f_6;
	}
}

int func_455(float fParam0)
{
	return floor((fParam0 * 10000f));
}

float func_456(int iParam0)
{
	return (to_float(iParam0) / 10000f);
}

bool func_457(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_492(iParam0, bParam2, 0) };
	if (func_496(iParam0, 0))
	{
		iVar9 = func_243(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_492(iVar9, bParam2, 0) };
			Var0 = { func_60(iVar9, Var4, Var4.f_4, bParam2) };
			return func_248(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_60(iParam0, Var4, Var4.f_4, bParam2) };
	return func_248(Var0, iParam1, bParam2);
}

void func_458(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(*uParam1)[iVar0] = { *((*uParam1)[iVar0 + 1]) };
			(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_459(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_460()
{
	return Global_1102219->f_3672;
}

int func_461(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_645(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_462(bool bParam0)
{
	if (func_7() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_228(bParam0));
}

int func_463(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_355(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_646(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_647(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_648(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_649(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_650(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_451(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_600(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_356(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_651(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

void func_464(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_652(Global_1139381->f_3876.f_2[func_252(iParam0, 1)]);
}

bool func_465()
{
	return func_630() == 4;
}

bool func_466(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_467(var uParam0)
{
	return func_466(*uParam0, 2);
}

float func_468()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_469(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_470(int iParam0)
{
	Var2 = -961687407;
	if (func_7() == -1)
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
	iVar1 = func_653(iParam0);
	func_654(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_654(iVar0, iVar1);
		}
	}
	return true;
}

int func_471(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (is_ped_a_player(iParam0))
		{
			func_114(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_114(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_655(0))
	{
	}
	func_266(&(Global_1952637->f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_472(var uParam0, int iParam1)
{
	func_233(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_656(Global_1952637->f_83[iVar1]->f_9, 0);
	iVar3 = func_656(Global_1952637->f_83[iVar0]->f_9, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	else
	{
		uParam0->f_1[iVar1] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_183() == 24043185)
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0] = iVar3;
	}
	*uParam0 = iParam1;
	return true;
}

bool func_473(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_657(iParam1) != iParam2)
	{
		return false;
	}
	if (func_445(2, iParam1))
	{
		func_232(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_474(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_658(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_233(uParam0, func_432(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_659(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_432(iVar0);
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
			iVar1 = func_333(iVar3, 1);
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
					func_481(iVar3, 16, 6);
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
							if (func_660(iVar3) && func_661(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_662(uParam0, iVar11, func_98(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_183() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_98(&(uParam0->f_1[34])) == 0) && !func_158(32)) && !func_158(64))
					{
						uParam0->f_1[iVar1] = func_656(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_663(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_475(int iParam0)
{
	func_227(iParam0, 8, 6);
}

void func_476(int iParam0)
{
	func_481(iParam0, 8, 6);
}

void func_477(int iParam0)
{
	Global_1952637->f_1057 = iParam0;
}

void func_478(int iParam0, var uParam1, int iParam2, int iParam3)
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

void func_479(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_224(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_480(iParam0, iVar0, 0);
			func_481(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_227(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_480(int iParam0, int iParam1, bool bParam2)
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

void func_481(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_333(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_333(iParam0, 1)])->f_11 || iParam1);
}

void func_482(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

int func_483(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	iVar0 = 1678788246;
	iVar1 = 2056739803;
	func_270(uParam0, iParam2);
	if (!func_279(uParam0, -1041943319, func_664(iParam1), 0))
	{
		func_270(uParam0, iParam2);
		if (func_279(uParam0, -1621954619, func_664(iParam1), 0))
		{
			iVar0 = -1906926814;
			iVar1 = 1809301084;
		}
		else
		{
			return 0;
		}
	}
	*fParam3 = func_491(uParam0, iVar0, 0, 0);
	*fParam4 = func_491(uParam0, iVar1, 0, 0);
	return 1;
}

bool func_484(var uParam0, int iParam1)
{
	return &(uParam0->f_166[iParam1]);
}

float func_485(float fParam0, float fParam1, float fParam2)
{
	return ((fParam0 - fParam1) / (fParam2 - fParam1));
}

int func_486(var uParam0, int iParam1, int iParam2)
{
	func_270(uParam0, iParam1);
	iVar33 = func_290(uParam0, iParam2, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar33)
	{
		func_270(uParam0, iParam1);
		if (!func_279(uParam0, iParam2, iVar0, 0))
		{
		}
		else if (func_504(uParam0, 1575973821, 0, 0) || func_504(uParam0, 548679286, 0, 0))
		{
		}
		else
		{
			iVar2[iVar1] = func_280(uParam0, -624280703, 0, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		return 0;
	}
	iVar34 = func_121(iVar1);
	return &(iVar2[iVar34]);
}

void func_487(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_642(iParam2, 1);
	*uParam0->f_77[iVar0] = { *(*uParam1)[iParam3] };
}

void func_488(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	func_665(uParam0, iParam4, &iVar0, &iVar1);
	if (bParam6)
	{
		if (!func_666((*uParam2)[iParam3]->f_17, &fVar3, iParam5))
		{
			fVar3 = 1f;
		}
		iVar2 = func_667(round((((*uParam2)[iParam3]->f_13 / fVar3) * 100f)), iVar0, iVar1);
		fVar4 = (to_float(iVar2) / to_float(100));
	}
	else
	{
		iVar2 = round((*uParam2)[iParam3]->f_13) * 100;
		fVar4 = (to_float(iVar2) / to_float(100));
	}
	switch (iParam4)
	{
		case 53:
			uParam1->f_474.f_101 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 55:
			uParam1->f_474.f_101.f_1 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 56:
			uParam1->f_474.f_101.f_2 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 57:
			uParam1->f_474.f_101.f_3 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 58:
			uParam1->f_474.f_101.f_4 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 59:
			uParam1->f_474.f_101.f_5 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 62:
			uParam1->f_474.f_101.f_11 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 63:
			uParam1->f_474.f_101.f_13 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 64:
			uParam1->f_474.f_101.f_14 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 65:
			uParam1->f_474.f_101.f_15 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
		case 66:
			uParam1->f_474.f_101.f_12 = iVar2;
			(*uParam2)[iParam3]->f_13 = fVar4;
			break;
	}
}

int func_489(int iParam0)
{
	Var1 = 660625468;
	Var1.f_1 = 349525292;
	Var1.f_2 = 459292749;
	Var1.f_3 = 1;
	Var1.f_4 = iParam0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0x44b3a36933ac009c(&uVar0, &Var1, -361519605))
	{
		return 169435479;
	}
	return uVar0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 1211610172:
			return 0;
		case -1944857734:
			return 1;
		case 1075019689:
			return 2;
		case -814048481:
			return 3;
		case 1870020575:
			return 4;
		case 2063382598:
			return 5;
		case -764150126:
			return 6;
		case -221541509:
			return 7;
		case 1085553624:
			return 8;
		case 1573479481:
			return 9;
		case -1427713379:
			return 10;
		case 1670852880:
			return 11;
		case -1533591453:
			return 12;
		case -983290814:
			return 13;
		case -1116287994:
			return 14;
		case 698464395:
			return 15;
		case -580690850:
			return 16;
		case 867398362:
			return 17;
		case -602986813:
			return 18;
		case 1006535512:
			return 19;
		case -363970564:
			return 20;
		case -1878818335:
			return 21;
		case -352806282:
			return 22;
		case 594539708:
			return 23;
		case -200416538:
			return 24;
		case 236216767:
			return 25;
		case 879705185:
			return 26;
		case 127020732:
			return 27;
		case 1472297541:
			return 28;
		case -80561472:
			return 29;
		case 335460573:
			return 30;
		case 1215589249:
			return 31;
		case -769090325:
			return 32;
		case 1862238874:
			return 33;
		case -1780893596:
			return 34;
		case -1472531745:
			return 35;
		case 1612128574:
			return 36;
		case -1682139124:
			return 37;
		case -1559851782:
			return 38;
		default:
			break;
	}
	return -1;
}

float func_491(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_float(&uVar0, &(uParam0->f_642)))
	{
		return 0f;
	}
	return uVar0;
}

struct<5> func_492(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_59(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_646(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_60(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_668(bParam1) };
			if (bParam2 && func_669(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_670(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_670(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_671(iParam0, &Var6, 1728382685))
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
			Var0 = { func_672(bParam1) };
			switch (func_434(iParam0))
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
			if (func_673(iParam0, -1823706425))
			{
				Var0 = { func_60(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_673(iParam0, -1483207246))
			{
				Var0 = { func_60(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_60(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_673(iParam0, -1653629781))
			{
				Var0 = { func_60(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_355(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_673(iParam0, -1653629781))
			{
				Var0 = { func_60(1384535894, Var0, 1784584921, bParam1) };
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

int func_493(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_223(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_494(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_264();
	if (iParam2 == 39)
	{
		Var0 = { func_492(iParam0, 1, 0) };
		iParam2 = func_333(func_493(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_158(32768) && iParam2 == 10)
	{
		func_475(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_496(iParam0, 1))
	{
		func_674(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_659(iParam2);
	}
	func_225(iParam2, iVar5);
	func_542(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_542(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_663(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_675(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_227(func_223(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_495(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_676(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_496(int iParam0, bool bParam1)
{
	if (!func_230(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_99(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

void func_497()
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
	func_625(32768);
	func_227(1108822547, 8, 6);
}

int func_498(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_333(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1952637->f_1675.f_1[iVar1] == &Global_1952637->f_83[iVar1] || &Global_1952637->f_1556.f_1[iVar1] == &Global_1952637->f_83[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_499(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_500(bool bParam0, bool bParam1)
{
	iVar0 = 1;
	func_501();
	if (func_158(64))
	{
		*Global_1952637->f_2566.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
	}
	if (func_677(iVar0) != -1)
	{
		func_495(1, bParam0, 0, 0);
	}
	else
	{
		Global_1952637->f_1675.f_1[iVar0] = &Global_1952637->f_1556.f_1[iVar0];
	}
	iVar1 = func_678(81053684, 0);
	func_679(&(Global_1952637->f_1556), iVar1, 1, bParam0, bParam1, 0);
	if (bParam0)
	{
		func_546();
		func_639();
		func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	}
}

void func_501()
{
	Global_1952637->f_1057 = 0;
}

void func_502(bool bParam0)
{
	func_501();
	iVar0 = 4;
	*Global_1952637->f_1675.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
	if (func_158(64))
	{
		*Global_1952637->f_2566.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
	}
	if (bParam0)
	{
		func_548();
		func_640();
		func_347(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 6);
	}
}

float func_503(var uParam0, int iParam1, float fParam2)
{
	func_483(uParam0, iParam1, uParam0->f_648, &fVar0, &fVar1);
	if (func_484(uParam0, iParam1))
	{
		return func_273(fVar1, fVar0, fParam2);
	}
	return func_273(fVar0, fVar1, fParam2);
}

bool func_504(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_bool(&uVar0, &(uParam0->f_642)))
	{
		return false;
	}
	return uVar0;
}

void func_505(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_506(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

int func_507(var uParam0, var uParam1, int iParam2, int iParam3)
{
	Var9.f_2 = -1;
	Var9.f_13 = 1065353216;
	Var9.f_14 = 1065353216;
	func_505(&uVar2, 660625468, iParam2, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar2);
	while (_0xed4413cee1bf142c(&uVar2))
	{
		if (_0x44b3a36933ac009c(&iVar1, &uVar2, 459292749))
		{
			if (iVar0 > *uParam1)
			{
				return 0;
			}
			iVar27 = func_395(iVar1);
			if (iVar27 == 0)
			{
				func_453(&Var9, iVar1, 0, 1, iParam3);
				func_508(&Var9, &uVar2, iParam3);
				func_512(uParam0, uParam1, &Var9);
				iVar0++;
			}
			else
			{
				func_511(uParam0, uParam1, iVar27);
			}
		}
	}
	return 1;
}

void func_508(var uParam0, var uParam1, int iParam2)
{
	if (_0xb2b42607f7867576(&uVar1, uParam1, 2018964076))
	{
		uParam0->f_13 = uVar1;
	}
	if (_0xb2b42607f7867576(&uVar1, uParam1, -1979206779))
	{
		uParam0->f_14 = uVar1;
	}
	if (_0x52fc26d2d2fc2987(&uVar0, uParam1, 917806888))
	{
		uParam0->f_7 = uVar0;
	}
	if (_0x52fc26d2d2fc2987(&uVar0, uParam1, 1922465595))
	{
		uParam0->f_8 = uVar0;
	}
	if (_0x44b3a36933ac009c(&uVar0, uParam1, 333547134))
	{
		uParam0->f_9 = uVar0;
	}
	if (_0x52fc26d2d2fc2987(&uVar0, uParam1, 1223307134))
	{
		uParam0->f_10 = uVar0;
	}
	if (_0x52fc26d2d2fc2987(&uVar0, uParam1, 915180227))
	{
		uParam0->f_11 = uVar0;
	}
	if (_0x52fc26d2d2fc2987(&uVar0, uParam1, -1231156504))
	{
		uParam0->f_12 = uVar0;
	}
}

int func_509(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_510(int iParam0)
{
	if (iParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_99(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_99(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_99(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_511(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_111(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_458(uParam0, uParam1, iVar0);
	return 1;
}

void func_512(var uParam0, var uParam1, var uParam2)
{
	if ((!func_253(uParam0, 1) || func_253(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_506(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_111(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_297(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_112(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

void func_513(var uParam0, var uParam1)
{
	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((*uParam1)[iVar0]->f_1 < ((*uParam1)[(iVar0 - 1)])->f_1)
		{
			_remove_ped_overlay(*uParam0, ((*uParam1)[(iVar0 - 1)])->f_2);
			Var2 = { *(*uParam1)[iVar0] };
			*(*uParam1)[iVar0] = { *((*uParam1)[(iVar0 - 1)]) };
			*((*uParam1)[(iVar0 - 1)]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_514(uParam0, (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_514(var uParam0, var uParam1)
{
	uParam1->f_2 = _add_ped_overlay(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_112(uParam0, uParam1, 0);
}

void func_515(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

void func_516(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

void func_517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_518(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_519()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_520(int iParam0)
{
	return func_314(iParam0, 2);
}

char* func_521(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_522(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_523(int iParam0)
{
	return func_434(iParam0) == 1946043663;
}

int func_524(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_646(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_680(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_681(iParam0, 0);
	}
	if (func_556(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_228(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_682(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_228(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_525(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_539(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_527(Var0[iVar32]->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_528(Var0[iVar32]->f_1))
				{
					return 0;
				}
			}
			else
			{
				iVar33 = func_529(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_530(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_524(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return 0;
				}
			}
			iVar32++;
		}
	}
	return 1;
}

bool func_526()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_527(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_7() == 0)
	{
		return func_683(iParam0);
	}
	return iParam0 <= func_684();
}

bool func_528(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

int func_529(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_99(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_59(0) };
	Var0.f_4 = func_685(iParam1);
	Var5 = { func_60(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_228(0), &Var5, 0);
	return iVar9;
}

bool func_531(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return false;
	}
	if (func_99(iParam0, -887064662))
	{
		return true;
	}
	return func_532(iParam0);
}

bool func_532(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return false;
	}
	if (func_99(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_533(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_686(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_230(iParam1, 0))
	{
		return 0;
	}
	if (!func_687(iParam0))
	{
		return 0;
	}
	iVar0 = func_688(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_689(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_534(int iParam0, int iParam1)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	if (!func_531(iParam0) && !func_532(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_690(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_691(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_692(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_693(iVar15, iVar1);
			if (func_230(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_694(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_530(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_696(iVar16, func_695(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_697(iVar1);
	}
	return iVar0;
}

int func_535(int iParam0, int iParam1)
{
	iParam0 = func_686(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_230(iParam1, 0))
	{
		return 0;
	}
	if (!func_687(iParam0))
	{
		return 0;
	}
	iVar0 = func_688(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_536(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_537(int iParam0, int iParam1, bool bParam2)
{
	if (!func_698(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_699(iParam0, iParam1);
	}
	return true;
}

int func_538(int iParam0, bool bParam1)
{
	if (!func_469(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_539(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_698(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_700(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_540(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_434(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_541(int iParam0, var uParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_1736[iParam0] = uParam1;
}

void func_542(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_543()
{
	return Global_17411.f_55.f_644.f_1777;
}

void func_544(int iParam0, bool bParam1, int iParam2)
{
	func_701(&(Global_1952637->f_1556), iParam0);
	func_702(2, iParam0, 6);
	if (bParam1)
	{
		func_545(0, 1);
	}
}

void func_545(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_501();
	}
	if (bParam0)
	{
		func_298(8);
		func_298(512);
	}
	else
	{
		func_298(8);
		func_298(16);
	}
}

void func_546()
{
	Global_1139381->f_4779.f_7 = &Global_1952637->f_1675.f_1[1];
}

void func_547()
{
	Global_1139381->f_4779.f_9 = &Global_1952637->f_1675.f_1[3];
}

void func_548()
{
	Global_1139381->f_4779.f_6 = &Global_1952637->f_1675.f_1[4];
}

void func_549(int iParam0, float fParam1)
{
	func_703(iParam0, fParam1);
	func_704(iParam0, fParam1, 2);
	func_705(iParam0, 1);
}

bool func_550(int iParam0)
{
	return func_706(iParam0);
}

int func_551(int iParam0)
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

void func_552(int iParam0, float fParam1)
{
	func_707(iParam0, fParam1);
	func_708(iParam0, fParam1, 0, 0, 1, 2);
}

void func_553()
{
	uVar0 = func_709(-763706539, -1397419524);
	Global_1956200->f_1431.f_74.f_2 = uVar0;
	uVar1 = func_709(258444835, 1449106310);
	Global_1956200->f_1431.f_74.f_3 = uVar1;
	fVar2 = func_709(845057552, -458184788);
	fVar3 = func_709(845057552, 1468884243);
	Global_1956200->f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_710(-1645702932);
	Global_1956200->f_1431.f_74.f_5 = uVar4;
}

void func_554(int iParam0)
{
	Global_1956200->f_1431.f_4 = iParam0;
}

bool func_555(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_228(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_556(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_557(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 24, uParam2, 0);
}

int func_558(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_362(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_362(iParam1, 2, 0, 0);
	return -1;
}

int func_559(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_362(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_560(int* iParam0)
{
	if (!func_711(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (func_561(Global_1293346->f_2011.f_1[iVar0], iParam0))
		{
			return Global_1293346->f_2011.f_1[iVar0]->f_6;
		}
		iVar0++;
	}
	return 0;
}

bool func_561(var uParam0, int* iParam1)
{
	if (((*uParam0 == *iParam1 && uParam0->f_1 == iParam1->f_1) && uParam0->f_2 == iParam1->f_2) && uParam0->f_3 == iParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_562(int iParam0, int iParam1)
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

void func_563(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_711(uParam0))
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

void func_564(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_712(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_565(int iParam0)
{
	if (func_434(iParam0) == -126813555 || func_434(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_566(int iParam0)
{
	return func_434(iParam0) == -126813555;
}

bool func_567(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_713(iParam0))
		{
			return false;
		}
	}
	if (func_711(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

bool func_568(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (func_714(iParam0))
	{
		return false;
	}
	if (!func_670(iParam0, &uParam1, iParam5, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_569(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_230(uParam1->f_8, 0) && !func_469(func_261(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_715(iParam2, 128))
	{
		if (func_434(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_715(iParam2, 16))
	{
		if (!func_716(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_570(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_368(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_195(iParam0))
		{
			return false;
		}
		if (!func_368(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_571(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

bool func_572(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_195(iParam0);
	}
	return true;
}

bool func_573(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_574(struct<4> Param0)
{
	if (!func_573(&Param0))
	{
		return false;
	}
	if (func_717(&Param0))
	{
		return false;
	}
	return func_719(func_718(Param0));
}

int func_575(struct<2> Param0)
{
	if (!func_62(Param0))
	{
		return -1;
	}
	iVar0 = func_720(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_576(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			break;
		case 17:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(16))
			{
				return false;
			}
			break;
		case 18:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			break;
		case 19:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(18))
			{
				return false;
			}
			break;
		case 20:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(16) && !func_43(18))
			{
				return false;
			}
			if (!func_43(17) && !func_43(19))
			{
				return false;
			}
			break;
		case 21:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(16))
			{
				return false;
			}
			if (!func_43(17))
			{
				return false;
			}
			break;
		case 22:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(16))
			{
				return false;
			}
			if (!func_43(17))
			{
				return false;
			}
			if (!func_43(21))
			{
				return false;
			}
			break;
		case 23:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(18))
			{
				return false;
			}
			if (!func_43(19))
			{
				return false;
			}
			break;
		case 24:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(18))
			{
				return false;
			}
			if (!func_43(19))
			{
				return false;
			}
			if (!func_43(23))
			{
				return false;
			}
			break;
		case 25:
			if ((!func_43(13) || !func_43(14)) || !func_43(15))
			{
				return false;
			}
			if (!func_43(16) && !func_43(18))
			{
				return false;
			}
			if (!func_43(17) && !func_43(19))
			{
				return false;
			}
			if (!func_43(21) && !func_43(24))
			{
				return false;
			}
			if (!func_43(22) && !func_43(24))
			{
				return false;
			}
			if (!func_43(20))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_577(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_721();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_722();
	Var0.f_3 = iParam1;
	func_723(Var0, 0);
	return Var0;
}

bool func_578(int iParam0)
{
	if (!func_579(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_579(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_580(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_44[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_44[iVar0]->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1293346->f_458.f_1245[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_1245[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_1245[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_581(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_724(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_582(int iParam0)
{
	if (func_725(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_583(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_715(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_726((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_584()
{
	enable_script_brain_set(4);
}

void func_585()
{
	enable_script_brain_set(1);
}

bool func_586(int iParam0)
{
	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_587(int iParam0, int iParam1)
{
	if (!func_586(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

int func_588(int iParam0)
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
		case 4:
			return 4;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 4;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 7;
		case 17:
			return 7;
		case 18:
			return 8;
		case 19:
			return 8;
		case 20:
			return 9;
		case 21:
			return 7;
		case 22:
			return 7;
		case 23:
			return 8;
		case 24:
			return 8;
		case 25:
			return 9;
		default:
			break;
	}
	return -1;
}

float func_589(int iParam0)
{
	if (Global_1878407->f_7 > 0f)
	{
		return Global_1878407->f_7;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = 13;
			while (iVar0 <= 25)
			{
				iVar1 = func_727(iVar0);
				switch (iVar1)
				{
					case 5:
						fVar2 = (fVar2 + 100f);
						break;
					case 4:
						fVar2 = (fVar2 + 80f);
						break;
					case 3:
						fVar2 = (fVar2 + 65f);
						break;
					case 2:
						fVar2 = (fVar2 + 50f);
						break;
					default:
						fVar2 = (fVar2 + 0f);
						break;
				}
				fVar3 = (fVar3 + 100f);
				iVar0++;
			}
			fVar4 = ((fVar2 / fVar3) * 100f);
			Global_1878407->f_7 = fVar4;
			return Global_1878407->f_7;
		default:
			break;
	}
	return 0f;
}

bool func_590(struct<2> Param0)
{
	iVar0 = func_575(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_591(struct<2> Param0, int iParam2)
{
	if (!func_62(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_728(Param0);
	}
	else
	{
		func_729(Param0, iParam2);
	}
	func_730();
}

int func_592(struct<2> Param0)
{
	return func_732(func_731(Param0));
}

int func_593(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_733())
	{
		return 0;
	}
	if (!func_734())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_735(&Global_0, 8);
	}
	func_735(&Global_0, 1);
	return 1;
}

void func_594(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_736(func_599(Param0));
	iVar1 = func_385(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_7() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_737(Param0, &Var2);
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

struct<2> func_595(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_596(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_738(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_739(Global_1940258, 8388608);
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

int func_597(bool bParam0)
{
	if (!bParam0 && func_740(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_598(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_599(var uParam0, var uParam1)
{
	return uParam0;
}

int func_600(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_716(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_558(func_741(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_559(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

void func_601(var uParam0)
{
	func_742(uParam0);
}

void func_602(var uParam0)
{
	func_270(uParam0, uParam0->f_647);
	uParam0->f_613 = 0;
	uVar5 = uParam0->f_642.f_1;
	iVar6 = _get_metaped_type(uParam0->f_615);
	iVar7 = func_290(uParam0, 17571750, 0, 0);
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		uParam0->f_642.f_1 = uVar5;
		if (!func_279(uParam0, 17571750, iVar0, 0))
		{
		}
		else
		{
			uVar4 = uParam0->f_642.f_1;
			iVar1 = func_290(uParam0, 600320052, 0, 0);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				uParam0->f_642.f_1 = uVar4;
				iVar3 = func_280(uParam0, 985932463, iVar2, 0);
				uParam0->f_212[uParam0->f_613] = _0xf6d9e1f3560cbf8e(iVar6, iVar3, 0, 1, 1);
				uParam0->f_212[uParam0->f_613]->f_1 = 0;
				uParam0->f_613++;
				iVar2++;
			}
		}
		iVar0++;
	}
}

bool func_603(var uParam0)
{
	if (!uParam0->f_1179)
	{
		bVar0 = is_ped_male(uParam0->f_615);
		iVar1 = 0;
		if (*uParam0)
		{
			if (bVar0)
			{
				iVar1 = 2026485318;
			}
			else
			{
				iVar1 = 24043185;
			}
		}
		iVar2 = 0;
		iVar4 = -1;
		while (iVar4 <= (91 - 1))
		{
			iVar3 = iVar4;
			if (func_743(iVar3, iVar1))
			{
				func_744(uParam0, iVar3, iVar2);
				iVar2 = (iVar2 + func_745(uParam0, iVar3));
			}
			iVar4++;
		}
		if (iVar2 <= 0)
		{
			return false;
		}
		if (_0x3d084d5568fb4028(iVar2))
		{
			uParam0->f_1179 = 1;
		}
	}
	return uParam0->f_1179;
}

void func_604(var uParam0, int iParam1, int iParam2)
{
	func_270(uParam0, func_746(uParam0, iParam1));
	iVar0 = func_747(uParam0, iParam1);
	iVar1 = func_745(uParam0, iParam1);
	switch (iParam1)
	{
		case 8:
			if (!func_279(uParam0, 432983819, iParam2, 0))
			{
				return;
			}
			func_748(uParam0, 1051763940, iParam1, 268568456, iVar0, iVar1, 1);
			break;
		case 74:
			if (!func_279(uParam0, 1104904264, iParam2, 0))
			{
				return;
			}
			func_748(uParam0, -824364195, iParam1, 867854846, iVar0, iVar1, 1);
			break;
		case 46:
			func_748(uParam0, 1845412653, iParam1, -1142395683, iVar0, iVar1, 1);
			break;
		case 77:
			if (!func_279(uParam0, -891690336, iParam2, 0))
			{
				return;
			}
			func_748(uParam0, 1229402512, iParam1, 1911250089, iVar0, iVar1, 1);
			break;
		case 72:
			if (!func_279(uParam0, -346051150, iParam2, 0))
			{
				return;
			}
			func_748(uParam0, -978910727, iParam1, -1261431414, iVar0, iVar1, 0);
			break;
		case 70:
			if (!func_279(uParam0, 403633317, iParam2, 0))
			{
				return;
			}
			func_748(uParam0, -29644304, iParam1, 1981135023, iVar0, iVar1, 0);
			break;
		default:
			break;
	}
}

void func_605(var uParam0, bool bParam1)
{
	func_749(uParam0);
	if (*uParam0)
	{
		if (!func_750(&(uParam0->f_1193.f_474.f_1)))
		{
			uParam0->f_1193.f_474.f_1 = { Global_17411.f_55.f_644.f_1784 };
		}
	}
	func_751(uParam0, 44, uParam0->f_1193.f_474.f_9);
	func_751(uParam0, 34, uParam0->f_1193.f_474.f_13);
	func_751(uParam0, 126, round((&uParam0->f_1193.f_474.f_39[0] * 100f)));
	func_751(uParam0, 131, round((&uParam0->f_1193.f_474.f_39[3] * 100f)));
	func_751(uParam0, 143, round((&uParam0->f_1193.f_474.f_39[13] * 100f)));
	func_751(uParam0, 148, round((&uParam0->f_1193.f_474.f_39[16] * 100f)));
	func_751(uParam0, 138, round((&uParam0->f_1193.f_474.f_39[10] * 100f)));
	func_751(uParam0, 99, uParam0->f_1193.f_474.f_20);
	func_751(uParam0, 252, uParam0->f_1193.f_474.f_22);
	func_751(uParam0, 172, uParam0->f_1193.f_474.f_80);
	func_751(uParam0, 175, uParam0->f_1193.f_474.f_81);
	func_751(uParam0, 178, uParam0->f_1193.f_474.f_82);
	func_751(uParam0, 181, uParam0->f_1193.f_474.f_83);
	func_751(uParam0, 184, uParam0->f_1193.f_474.f_84);
	func_751(uParam0, 187, uParam0->f_1193.f_474.f_85);
	func_751(uParam0, 190, uParam0->f_1193.f_474.f_86);
	func_751(uParam0, 196, uParam0->f_1193.f_474.f_87);
	func_751(uParam0, 199, uParam0->f_1193.f_474.f_88);
	func_751(uParam0, 202, uParam0->f_1193.f_474.f_89);
	func_751(uParam0, 205, uParam0->f_1193.f_474.f_90);
	func_751(uParam0, 208, uParam0->f_1193.f_474.f_91);
	func_751(uParam0, 211, uParam0->f_1193.f_474.f_92);
	func_751(uParam0, 193, uParam0->f_1193.f_474.f_97);
	func_751(uParam0, 60, uParam0->f_1193.f_474.f_94);
	func_751(uParam0, 217, uParam0->f_1193.f_474.f_95);
	func_751(uParam0, 89, uParam0->f_1193.f_474.f_29);
	func_751(uParam0, 79, uParam0->f_1193.f_474.f_31);
	func_751(uParam0, 74, uParam0->f_1193.f_474.f_37);
	func_751(uParam0, 69, uParam0->f_1193.f_474.f_35);
	func_751(uParam0, 84, uParam0->f_1193.f_474.f_27);
	func_751(uParam0, 64, uParam0->f_1193.f_474.f_33);
	func_97(uParam0->f_1193.f_647);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1193.f_1054.f_1[iVar0] };
		iVar0++;
	}
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_29, &(uParam0->f_1193.f_474.f_30), 831873862, 1, 1);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_27, &(uParam0->f_1193.f_474.f_28), 1364455116, 1, 1);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_31, &(uParam0->f_1193.f_474.f_32), 949000652, 1, 1);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_33, &(uParam0->f_1193.f_474.f_34), -1389899508, 1, 1);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_35, &(uParam0->f_1193.f_474.f_36), 799607560, 1, 1);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_37, &(uParam0->f_1193.f_474.f_38), 636446122, 1, 1);
	func_607(uParam0, 8, &(uParam0->f_1193.f_474.f_10));
	func_608(uParam0, 8, uParam0->f_1193.f_474.f_10, bParam1);
	if (!bParam1)
	{
		func_752(uParam0, 26, 0, 0);
	}
	func_607(uParam0, 46, &(uParam0->f_1193.f_474.f_15));
	func_608(uParam0, 46, uParam0->f_1193.f_474.f_15, bParam1);
	if (!bParam1)
	{
		func_752(uParam0, 73, 0, 0);
	}
	if (uParam0->f_1193.f_474.f_19 == -1713496139 || uParam0->f_1193.f_474.f_19 == -960808083)
	{
		func_606(uParam0, 101, 0);
	}
	else
	{
		func_606(uParam0, 101, 1);
	}
	func_607(uParam0, 74, &(uParam0->f_1193.f_474.f_24));
	func_608(uParam0, 74, uParam0->f_1193.f_474.f_24, bParam1);
	if (uParam0->f_614 == 2107046455)
	{
		if (!bParam1)
		{
			func_752(uParam0, 76, 0, 0);
		}
		if (uParam0->f_1193.f_474.f_21 == -598283164 || uParam0->f_1193.f_474.f_21 == -960808083)
		{
			func_606(uParam0, 255, 0);
		}
		else
		{
			func_606(uParam0, 255, 1);
		}
		func_607(uParam0, 77, &(uParam0->f_1193.f_474.f_23));
		func_608(uParam0, 77, uParam0->f_1193.f_474.f_23, bParam1);
	}
	if (uParam0->f_614 == -1029951690)
	{
		func_607(uParam0, 70, &(uParam0->f_1193.f_474.f_100));
		func_608(uParam0, 70, uParam0->f_1193.f_474.f_100, bParam1);
		func_753(uParam0, 64, uParam0->f_1193.f_474.f_91);
		func_607(uParam0, 72, &(uParam0->f_1193.f_474.f_98));
		func_608(uParam0, 72, uParam0->f_1193.f_474.f_98, bParam1);
		func_753(uParam0, 66, uParam0->f_1193.f_474.f_92);
	}
	func_754(uParam0, uParam0->f_1193.f_641);
	func_755(uParam0, uParam0->f_1193.f_642);
	func_756(uParam0, uParam0->f_1193.f_643);
	if (uParam0->f_1193.f_638 == -1)
	{
		uParam0->f_1193.f_638 = 0;
	}
	if (uParam0->f_1193.f_639 == -1)
	{
		uParam0->f_1193.f_639 = 0;
	}
	if (uParam0->f_1193.f_640 == -1)
	{
		uParam0->f_1193.f_640 = 0;
	}
	func_751(uParam0, 272, func_757(uParam0->f_1193.f_638));
	func_751(uParam0, 277, func_757(uParam0->f_1193.f_639));
	func_751(uParam0, 282, func_757(uParam0->f_1193.f_640));
	func_758(uParam0, uParam0->f_1193.f_638, uParam0->f_1193.f_639, uParam0->f_1193.f_640);
	func_759(uParam0, uParam0->f_1193.f_474.f_11, bParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1193.f_1054.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
	if (*uParam0)
	{
		func_606(uParam0, 23, 0);
		func_606(uParam0, 26, 0);
		if (!uParam0->f_1)
		{
			uParam0->f_1 = 1;
			func_330(uParam0, &(uParam0->f_1193), &(uParam0->f_2));
		}
	}
	func_760(uParam0, &(uParam0->f_1193.f_474.f_1));
}

void func_606(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return;
	}
	_databinding_write_data_bool(&(uParam0->f_891[iParam1]), bParam2);
}

void func_607(var uParam0, int iParam1, var uParam2)
{
	iVar18 = func_745(uParam0, iParam1);
	func_761(uParam0, iParam1, &uVar0, iVar18);
	func_762(uParam0, iParam1, &uVar0, iVar18);
	if (!&uVar0[*uParam2])
	{
		*uParam2 = func_764(uParam0, func_763(iParam1), *uParam2, 1);
	}
	func_765(iParam1, &uVar19, &uVar20, &uVar21, &iVar22);
	func_751(uParam0, iVar22, *uParam2);
}

void func_608(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar8 = func_745(uParam0, iParam1);
	func_765(iParam1, &iVar9, &iVar10, &uVar11, &iVar12);
	if (iParam2 == -1)
	{
		iParam2 = func_331(uParam0, iVar12);
	}
	iParam2 = func_766(iParam2, 0, iVar8);
	if (!bParam3)
	{
		func_767(uParam0, iParam1, &iParam2);
	}
	func_768(uParam0, iParam1, iParam2, &uVar0, &cVar4);
	func_769(uParam0, iVar9, &uVar0);
	func_769(uParam0, iVar10, &cVar4);
	func_751(uParam0, iVar12, iParam2);
	if (uParam0->f_649.f_231 == iParam1)
	{
		func_770(uParam0, iParam2);
	}
	func_771(uParam0);
}

void func_609(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_649.f_231;
	func_329(uParam0, 64);
	func_329(uParam0, 256);
	uParam0->f_649.f_231 = func_403(iParam1->f_2);
	if (is_ped_model(uParam0->f_615, -171876066))
	{
		switch (uParam0->f_649.f_231)
		{
			case 74:
			case 77:
				func_606(uParam0, 19, 1);
				break;
			default:
				func_606(uParam0, 19, 0);
				break;
		}
	}
	if (func_772(iVar0) && !func_772(uParam0->f_649.f_231))
	{
		if (func_257(uParam0, 128))
		{
			func_773(uParam0);
		}
	}
	if (uParam0->f_649.f_231 <= -1 || uParam0->f_649.f_231 >= 91)
	{
		return;
	}
	if (&uParam0->f_649.f_48[uParam0->f_649.f_231] != 0)
	{
		func_774(uParam0, &(uParam0->f_649.f_48[uParam0->f_649.f_231]));
	}
	else if (uParam0->f_649.f_46 > -1)
	{
		if (&uParam0->f_649.f_3[uParam0->f_649.f_46] != 0)
		{
			func_774(uParam0, &(uParam0->f_649.f_3[uParam0->f_649.f_46]));
		}
	}
	func_775(uParam0);
	func_776(uParam0);
	func_777(uParam0);
	func_778(uParam0);
	func_779(uParam0);
}

void func_610(var uParam0, int iParam1)
{
	switch (iParam1->f_2)
	{
		case -1457599051:
			sVar0 = func_780(uParam0, 13);
			func_760(uParam0, sVar0);
			break;
		case 139406372:
			func_781(uParam0->f_615, 869278708, 1971704925);
			break;
		case 908554354:
			func_782(uParam0);
			break;
		case 348032960:
			func_783(uParam0);
			break;
		case -1750408931:
			func_773(uParam0);
			break;
		case -1086025100:
			if (func_257(uParam0, 128))
			{
				func_773(uParam0);
			}
			break;
		case 1421861703:
			func_305(uParam0, 32);
			break;
		case -582236704:
			if (*uParam0)
			{
				func_305(uParam0, 2048);
			}
			else
			{
				func_305(uParam0, 16);
			}
			break;
		default:
			break;
	}
	func_776(uParam0);
}

void func_611(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_649.f_46;
	uParam0->f_649.f_46 = func_402(iParam1->f_2);
	if (uParam0->f_649.f_46 <= -1 || uParam0->f_649.f_46 >= 21)
	{
		return;
	}
	func_784(uParam0, iVar0);
	func_785(uParam0, 0);
	func_776(uParam0);
	func_786(uParam0);
}

void func_612(var uParam0, int iParam1)
{
	func_776(uParam0);
}

void func_613(var uParam0, int iParam1)
{
	switch (uParam0->f_649.f_231)
	{
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			func_787(uParam0, uParam0->f_649.f_231, 0, -1);
			break;
		case 1:
			func_788(uParam0);
			break;
		case 26:
		case 51:
		case 73:
		case 76:
			func_752(uParam0, uParam0->f_649.f_231, 0, 1);
			break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			func_789(uParam0, uParam0->f_649.f_231, iParam1->f_1);
			break;
		case 25:
			iVar0 = func_331(uParam0, 50);
			func_759(uParam0, iVar0, 1);
			break;
		case 8:
		case 46:
		case 70:
		case 72:
		case 74:
		case 77:
			func_608(uParam0, uParam0->f_649.f_231, -1, 0);
			break;
		case 85:
			iVar0 = func_331(uParam0, 261);
			func_754(uParam0, iVar0);
			break;
		case 86:
			iVar0 = func_331(uParam0, 264);
			func_755(uParam0, iVar0);
			break;
		case 87:
			iVar0 = func_331(uParam0, 268);
			func_756(uParam0, iVar0);
			break;
		case 88:
		case 89:
		case 90:
			func_758(uParam0, func_790(func_331(uParam0, 272)), func_790(func_331(uParam0, 277)), func_790(func_331(uParam0, 282)));
			break;
	}
	func_776(uParam0);
}

void func_614(var uParam0)
{
	if (!does_cam_exist(uParam0->f_617.f_1))
	{
	}
	if (!does_cam_exist(uParam0->f_628.f_1))
	{
		uParam0->f_628.f_1 = create_camera(26379945, false);
	}
	vVar0 = { get_final_rendered_cam_coord() };
	vVar3 = { get_final_rendered_cam_rot(2) };
	fVar6 = get_final_rendered_cam_fov();
	_0x11f32bb61b756732(uParam0->f_628.f_1, uParam0->f_617.f_8);
	set_cam_params(uParam0->f_628.f_1, vVar0, vVar3, fVar6, 0, 1, 1, 2, 1, 0);
}

Vector3 func_615(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_vector(&vVar0, &(uParam0->f_642)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_616(var uParam0)
{
	iVar0 = uParam0->f_615;
	if (iVar0 == -1)
	{
		return;
	}
	func_791(uParam0);
}

void func_617(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4)
{
	bVar0 = is_control_pressed(2, -875187602);
	bVar1 = is_control_pressed(2, 285921746);
	if (!func_792(uParam0, 1) && !func_257(uParam0, 2))
	{
		if (uParam0->f_1193.f_647 == 2026485318)
		{
			uParam0->f_2370.f_1 = 1348645644;
			uParam0->f_2370 = 1348645644;
		}
		else
		{
			uParam0->f_2370.f_1 = 452590527;
			uParam0->f_2370 = 452590527;
		}
		uParam0->f_2370.f_30 = "IDLE_STATE";
		uParam0->f_2370.f_4 = "BODY_SIZE";
		uParam0->f_2370.f_5 = func_323(uParam0->f_1193.f_474.f_11);
		uParam0->f_2370.f_7 = "STEP_SIGNAL";
		uParam0->f_2370.f_8 = 0.5f;
		vVar2 = { get_entity_coords(uParam0->f_615, true, false) };
		vVar5 = { get_entity_rotation(uParam0->f_615, 2) };
		fVar8 = 0f;
		if (!is_task_move_network_active(uParam0->f_615))
		{
			task_move_network_advanced_by_name_with_init_params(uParam0->f_615, func_53(), &(uParam0->f_2370), vVar2, vVar5, 2, fVar8, 0, 0, 2, 0);
		}
		force_ped_motion_state(uParam0->f_615, 247561816, false, 0, false);
		uParam0->f_2404 = func_323(uParam0->f_1193.f_474.f_11);
		set_task_move_network_signal_float(uParam0->f_615, "BODY_SIZE", uParam0->f_2404);
		func_793(uParam0, 1);
		func_170(uParam0, 2);
		uParam0->f_1193.f_646 = iParam1;
	}
	else if (is_task_move_network_active(uParam0->f_615))
	{
		if (uParam0->f_1193.f_647 == 24043185)
		{
			_0x615dc4a82e90bb48(uParam0->f_615, 452590527, 184808581);
		}
		else
		{
			_0x615dc4a82e90bb48(uParam0->f_615, 1348645644, 184808581);
		}
		force_ped_motion_state(uParam0->f_615, 247561816, false, 0, false);
		if (func_151(uParam0))
		{
			if (!func_792(uParam0, 32768))
			{
				set_facial_idle_anim_override(uParam0->f_615, func_256(10), func_256(4));
				func_793(uParam0, 32768);
			}
			if (!func_792(uParam0, 32))
			{
				if (!func_792(uParam0, 16))
				{
					if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State"))
					{
						if (is_task_move_network_ready_for_transition(uParam0->f_615))
						{
							func_794(uParam0);
							uParam0->f_2405 = func_795(uParam0);
							set_task_move_network_signal_float(uParam0->f_615, "CURRENT_HEADING", uParam0->f_2405);
							request_task_move_network_state_transition(uParam0->f_615, "Turn_to_Face_Transition");
							func_793(uParam0, 16);
							func_170(uParam0, 256);
							func_170(uParam0, 128);
						}
						else
						{
							func_794(uParam0);
							if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Turn_to_Face_Transition"))
							{
								func_793(uParam0, 16);
							}
						}
					}
					else
					{
						func_794(uParam0);
						if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Right_State"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615))
							{
								request_task_move_network_state_transition(uParam0->f_615, "Idle_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Left_State"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615))
							{
								request_task_move_network_state_transition(uParam0->f_615, "Idle_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Right_State"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, 1752866596))
							{
								request_task_move_network_state_transition(uParam0->f_615, "Stop_Right_State");
							}
						}
						else if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Left_State"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, -1187150655))
							{
								request_task_move_network_state_transition(uParam0->f_615, "Stop_Left_State");
							}
						}
					}
				}
				else if ((are_strings_equal(get_task_move_network_state(uParam0->f_615), "Turn_to_Face_Transition") && (get_task_move_network_event(uParam0->f_615, "Turn_to_Face_TransitionClipFinished") || uParam0->f_2405 == 0.5f)) && is_task_move_network_ready_for_transition(uParam0->f_615))
				{
					request_task_move_network_state_transition(uParam0->f_615, "Still_Idle");
					func_793(uParam0, 32);
				}
				else
				{
					func_794(uParam0);
					if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Still_Idle"))
					{
						func_793(uParam0, 32);
						func_170(uParam0, 16);
					}
					if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State"))
					{
						func_170(uParam0, 16);
					}
				}
			}
			if (func_792(uParam0, 32))
			{
				if (bVar1)
				{
					if (!func_792(uParam0, 4096))
					{
						if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Still_Idle"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615))
							{
								func_794(uParam0);
								request_task_move_network_state_transition(uParam0->f_615, "Look_Left_Idle");
								func_793(uParam0, 4096);
							}
						}
						else if (!bVar0)
						{
							if (func_792(uParam0, 8192))
							{
								if (is_task_move_network_ready_for_transition(uParam0->f_615))
								{
									func_794(uParam0);
									set_task_move_network_signal_float(uParam0->f_615, "CURRENT_HEADING", 0.5f);
									request_task_move_network_state_transition(uParam0->f_615, "Still_Idle");
									func_170(uParam0, 8192);
								}
							}
						}
					}
				}
				else if (bVar0)
				{
					if (!func_792(uParam0, 8192))
					{
						if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Still_Idle"))
						{
							if (is_task_move_network_ready_for_transition(uParam0->f_615))
							{
								func_794(uParam0);
								request_task_move_network_state_transition(uParam0->f_615, "Look_Right_Idle");
								func_793(uParam0, 8192);
							}
						}
						else if (!bVar1)
						{
							if (func_792(uParam0, 4096))
							{
								if (is_task_move_network_ready_for_transition(uParam0->f_615))
								{
									func_794(uParam0);
									set_task_move_network_signal_float(uParam0->f_615, "CURRENT_HEADING", 0.5f);
									request_task_move_network_state_transition(uParam0->f_615, "Still_Idle");
									func_170(uParam0, 4096);
								}
							}
						}
					}
				}
				else if (func_792(uParam0, 4096) || func_792(uParam0, 8192))
				{
					if (is_task_move_network_ready_for_transition(uParam0->f_615))
					{
						func_794(uParam0);
						set_task_move_network_signal_float(uParam0->f_615, "CURRENT_HEADING", 0.5f);
						request_task_move_network_state_transition(uParam0->f_615, "Still_Idle");
						func_170(uParam0, 4096);
						func_170(uParam0, 8192);
					}
				}
			}
		}
		else
		{
			if (func_792(uParam0, 32768))
			{
				clear_facial_idle_anim_override(uParam0->f_615);
				func_170(uParam0, 32768);
			}
			if (func_792(uParam0, 32))
			{
				if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Still_Idle"))
				{
					func_794(uParam0);
					if (is_task_move_network_ready_for_transition(uParam0->f_615))
					{
						request_task_move_network_state_transition(uParam0->f_615, "Idle_State");
						func_170(uParam0, 32);
					}
				}
				else if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Look_Right_Idle") || are_strings_equal(get_task_move_network_state(uParam0->f_615), "Look_Left_Idle"))
				{
					func_794(uParam0);
					if (is_task_move_network_ready_for_transition(uParam0->f_615))
					{
						request_task_move_network_state_transition(uParam0->f_615, "Still_Idle");
					}
				}
				else if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State"))
				{
					func_170(uParam0, 32);
				}
			}
			if (func_792(uParam0, 16))
			{
				func_794(uParam0);
				if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State"))
				{
					func_170(uParam0, 16);
				}
				else if ((are_strings_equal(get_task_move_network_state(uParam0->f_615), "Turn_to_Face_Transition") && is_task_move_network_ready_for_transition(uParam0->f_615)) && (get_task_move_network_event(uParam0->f_615, "Turn_to_Face_TransitionClipFinished") || uParam0->f_2405 == 0.5f))
				{
					request_task_move_network_state_transition(uParam0->f_615, "Idle_State");
					func_170(uParam0, 16);
				}
			}
			if (!func_792(uParam0, 256))
			{
				if (bVar1 && !func_792(uParam0, 128))
				{
					if ((are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State") || are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Left_state")) || (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Right_state") && has_anim_event_fired(uParam0->f_615, 1752866596)))
					{
						if (is_task_move_network_ready_for_transition(uParam0->f_615))
						{
							request_task_move_network_state_transition(uParam0->f_615, "Step_Left_State");
							func_170(uParam0, 128);
							func_793(uParam0, 256);
						}
						else
						{
							func_794(uParam0);
						}
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			else
			{
				if (has_anim_event_fired(uParam0->f_615, -1187150655))
				{
				}
				if (!bVar1)
				{
					if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Left_State"))
					{
						if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, -1187150655))
						{
							request_task_move_network_state_transition(uParam0->f_615, "Stop_Left_State");
							func_170(uParam0, 256);
						}
						else
						{
							func_794(uParam0);
						}
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			if (!func_792(uParam0, 128))
			{
				if (bVar0 && !func_792(uParam0, 256))
				{
					if ((are_strings_equal(get_task_move_network_state(uParam0->f_615), "Idle_State") || are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Right_State")) || (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Left_state") && has_anim_event_fired(uParam0->f_615, -1187150655)))
					{
						if (is_task_move_network_ready_for_transition(uParam0->f_615))
						{
							request_task_move_network_state_transition(uParam0->f_615, "Step_Right_State");
							func_170(uParam0, 256);
							func_793(uParam0, 128);
						}
						else
						{
							func_794(uParam0);
						}
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			else
			{
				if (has_anim_event_fired(uParam0->f_615, 1752866596))
				{
				}
				if (!bVar0)
				{
					if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Step_Right_State"))
					{
						if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, 1752866596))
						{
							request_task_move_network_state_transition(uParam0->f_615, "Stop_Right_State");
							func_170(uParam0, 128);
						}
						else
						{
							func_794(uParam0);
						}
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			if (!bVar1)
			{
				if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Left_State"))
				{
					if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, -1727958697))
					{
						request_task_move_network_state_transition(uParam0->f_615, "Idle_state");
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			if (!bVar0)
			{
				if (are_strings_equal(get_task_move_network_state(uParam0->f_615), "Stop_Right_State"))
				{
					if (is_task_move_network_ready_for_transition(uParam0->f_615) && has_anim_event_fired(uParam0->f_615, 993220401))
					{
						request_task_move_network_state_transition(uParam0->f_615, "Idle_state");
					}
					else
					{
						func_794(uParam0);
					}
				}
			}
			if (absf((uParam0->f_2404 - func_323(uParam0->f_1193.f_474.f_11))) >= 0.025f)
			{
				if (uParam0->f_2404 < func_323(uParam0->f_1193.f_474.f_11))
				{
					uParam0->f_2404 = (uParam0->f_2404 + 0.025f);
				}
				else if (uParam0->f_2404 > func_323(uParam0->f_1193.f_474.f_11))
				{
					uParam0->f_2404 = (uParam0->f_2404 - 0.025f);
				}
			}
			if (uParam0->f_2404 < 0f)
			{
				uParam0->f_2404 = 0f;
			}
			else if (uParam0->f_2404 > 1f)
			{
				uParam0->f_2404 = 1f;
			}
			set_task_move_network_signal_float(uParam0->f_615, "BODY_SIZE", uParam0->f_2404);
		}
	}
	if (uParam0->f_649.f_231 == 46 || uParam0->f_649.f_231 == 47)
	{
		if (!func_792(uParam0, 16384))
		{
			task_play_anim(uParam0->f_615, func_256(4), func_256(5), 1.5f, -4f, -1, 16, 0f, false, 0, false, 0, false);
			func_793(uParam0, 16384);
		}
		else if (!func_792(uParam0, 512) && _get_entity_anim_current_time(uParam0->f_615, func_256(4), func_256(5)) > 0.95f)
		{
			task_play_anim(uParam0->f_615, func_256(4), func_256(6), 8f, -4f, -1, 17, 0f, false, 0, false, 0, false);
			func_793(uParam0, 512);
		}
	}
	else if (func_792(uParam0, 512) || (func_792(uParam0, 16384) && _get_entity_anim_current_time(uParam0->f_615, func_256(4), func_256(5)) > 0.95f))
	{
		task_play_anim(uParam0->f_615, func_256(4), func_256(7), 4f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
		func_170(uParam0, 512);
		func_170(uParam0, 16384);
	}
	if (uParam0->f_649.f_231 == 51)
	{
		if (!func_792(uParam0, 1024))
		{
			task_play_anim(uParam0->f_615, func_256(0), func_256(1), 1.5f, -4f, -1, 16, 0f, false, 0, false, 0, false);
			func_793(uParam0, 1024);
		}
		else if (!func_792(uParam0, 2048) && _get_entity_anim_current_time(uParam0->f_615, func_256(0), func_256(1)) > 0.95f)
		{
			task_play_anim(uParam0->f_615, func_256(0), func_256(2), 8f, -4f, -1, 17, 0f, false, 0, false, 0, false);
			func_793(uParam0, 2048);
		}
	}
	else if (func_792(uParam0, 2048) || (func_792(uParam0, 1024) && _get_entity_anim_current_time(uParam0->f_615, func_256(0), func_256(1)) > 0.95f))
	{
		task_play_anim(uParam0->f_615, func_256(0), func_256(3), 4f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
		func_170(uParam0, 2048);
		func_170(uParam0, 1024);
	}
}

void func_618(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_617.f_10)
	{
		uParam0->f_617.f_10 = 1;
		if (uParam0->f_649.f_48[uParam0->f_649.f_231]->f_1 != 0)
		{
			func_774(uParam0, uParam0->f_649.f_48[uParam0->f_649.f_231]->f_1);
		}
		else if (uParam0->f_649.f_3[uParam0->f_649.f_46]->f_1 != 0)
		{
			func_774(uParam0, uParam0->f_649.f_3[uParam0->f_649.f_46]->f_1);
		}
	}
	else if (!bParam1 && uParam0->f_617.f_10)
	{
		uParam0->f_617.f_10 = 0;
		if (&uParam0->f_649.f_48[uParam0->f_649.f_231] != 0)
		{
			func_774(uParam0, &(uParam0->f_649.f_48[uParam0->f_649.f_231]));
		}
		else if (&uParam0->f_649.f_3[uParam0->f_649.f_46] != 0)
		{
			func_774(uParam0, &(uParam0->f_649.f_3[uParam0->f_649.f_46]));
		}
	}
}

void func_619(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (bParam5)
	{
		func_796(uParam0, iParam3, iParam4);
		return;
	}
	func_797(uParam0, &fVar0, &fVar1);
	if (iParam3 != -1)
	{
		*bParam1 = &uParam0->f_1193.f_474.f_39[iParam3] != fVar0;
		uParam0->f_1193.f_474.f_39[iParam3] = fVar0;
	}
	if (iParam4 != -1)
	{
		*bParam2 = &uParam0->f_1193.f_474.f_39[iParam4] != fVar1;
		uParam0->f_1193.f_474.f_39[iParam4] = fVar1;
	}
}

void func_620(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		func_285(uParam0, uParam0->f_615, iParam1, &(uParam0->f_1193.f_474.f_39[iParam1]));
	}
	if (bParam4)
	{
		func_285(uParam0, uParam0->f_615, iParam2, &(uParam0->f_1193.f_474.f_39[iParam2]));
	}
	if (bParam5 && (bParam3 || bParam4))
	{
		func_114(5, 0, 1, uParam0->f_615, 0);
	}
}

void func_621(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam4)
	{
		*bParam3 = 1;
		func_798(uParam0, iParam1, *uParam2, bParam5);
	}
	else
	{
		func_799(uParam0, iParam1, &iVar0, bParam5);
		*bParam3 = *uParam2 != iVar0;
		*uParam2 = iVar0;
	}
}

void func_622(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = func_111(&(Global_1952637->f_1058.f_9), iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_666(iParam2, &fVar1, 0))
	{
		fVar1 = 1f;
	}
	fVar2 = to_float(*uParam1);
	fVar3 = ((fVar2 * 0.01f) * fVar1);
	if (fVar3 == 0f)
	{
		fVar3 = 0.0001f;
	}
	if (Global_1952637->f_1058.f_9[iVar0]->f_13 == fVar3)
	{
		return;
	}
	Global_1952637->f_1058.f_9[iVar0]->f_13 = fVar3;
	if (bParam3)
	{
		func_112(&(Global_1952637->f_1058), Global_1952637->f_1058.f_9[iVar0], 0);
		func_114(4, 0, 0, uParam0->f_615, 0);
	}
}

void func_623(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 47:
			iParam2 = (iParam2 + iParam3);
			fVar0 = (IntToFloat(iParam2) * 0.01f);
			_set_metaped_weariness(uParam0->f_615, fVar0);
			uParam0->f_1193.f_474.f_16 = iParam2;
			uParam0->f_1193.f_474.f_17 = fVar0;
			break;
	}
	func_114(5, 0, 1, uParam0->f_615, 0);
}

void func_624(var uParam0, int iParam1)
{
	bVar0 = false;
	uParam0->f_1193.f_474.f_101.f_16 = 1;
	switch (iParam1)
	{
		case 28:
		case 29:
		case 48:
		case 49:
		case 50:
			uParam0->f_1193.f_474.f_101.f_19 = 1;
			bVar0 = true;
			break;
		case 30:
		case 31:
			uParam0->f_1193.f_474.f_101.f_18 = 1;
			bVar0 = true;
			break;
		case 32:
		case 33:
			uParam0->f_1193.f_474.f_101.f_17 = 1;
			bVar0 = true;
			break;
		case 34:
		case 35:
		case 36:
		case 37:
			uParam0->f_1193.f_474.f_101.f_20 = 1;
			bVar0 = true;
			break;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
			uParam0->f_1193.f_474.f_101.f_21 = 1;
			bVar0 = true;
			break;
		case 43:
		case 44:
		case 45:
			uParam0->f_1193.f_474.f_101.f_22 = 1;
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		func_800(uParam0);
	}
}

void func_625(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_626(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_627(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_628(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_629(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_630()
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

void func_631(int iParam0)
{
	if (func_801(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_632(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_633(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_634(var uParam0, var uParam1, struct<4> Param2, bool bParam6)
{
	Var7.f_9 = -1591664384;
	iVar22 = func_243(Param2, Global_1952637->f_83[34]->f_9, 1, -1);
	iVar23 = func_243(Param2, Global_1952637->f_83[18]->f_9, 1, -1);
	iVar24 = 0;
	if (func_183() == 24043185)
	{
		iVar24 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_243(Param2, Global_1952637->f_83[iVar0]->f_9, 1, -1);
		bVar1 = (&uParam0->f_1[iVar0] == 0 || func_496(&(uParam0->f_1[iVar0]), 1));
		if (!func_230(iVar2, 0) || func_496(iVar2, 0))
		{
			func_802(iVar0, &(Global_1952637->f_83[iVar0]));
			func_542(Global_1952637->f_1794.f_1[iVar0], 16, 6);
			if (func_803(iVar0, iVar22, iVar23))
			{
				func_804(uParam1, 1, iVar0, 1);
			}
			else if (!func_805(&(uParam0->f_1[iVar0]), iVar2, iVar0, Param2, 1))
			{
				func_804(uParam1, 2, iVar0, 0);
			}
			else
			{
				Jump @588; //curOff = 275
				func_802(iVar0, iVar2);
				if (((!bVar1 && &uParam0->f_1[iVar0] != 1733464892) && &uParam0->f_1[iVar0] != -230310728) && &uParam0->f_1[iVar0] != 1326838792)
				{
					if (_get_ped_component_category(&(uParam0->f_1[iVar0]), iVar24, true) == 0)
					{
						func_804(uParam1, 1, iVar0, 0);
					}
					else
					{
						func_806(uParam1, iVar0, iVar2);
						Var3 = { func_60(iVar2, Param2, Global_1952637->f_83[iVar0]->f_9, 1) };
						if (!_0x025a1b1fb03fbf61(func_228(1), &Var3, &Var7, 15, 1))
						{
							func_804(uParam1, 1, iVar0, 0);
						}
						else if (func_803(iVar0, iVar22, iVar23))
						{
							if (bVar1 || (!func_435(uParam0->f_1[iVar0], 2) && func_435(Global_1952637->f_1556.f_1[iVar0], 2)))
							{
								func_804(uParam1, 1, iVar0, 0);
							}
							else if (&uParam0->f_1[iVar0] != Var7.f_4 || (func_437(iVar0, 32) && uParam0->f_1[iVar0]->f_1 != Var7.f_14))
							{
								func_804(uParam1, 2, iVar0, 0);
							}
							iVar0++;
							func_807(&(Global_1952637->f_1794), uParam1, Param2);
							func_808(&(Global_1952637->f_1794), uParam1);
							if (*uParam1 != 1 && *uParam1 != 2)
							{
								if (bParam6 && !func_809(*uParam1, 16))
								{
									func_103(uParam0);
									iVar25 = player_ped_id();
									iVar0 = 0;
									while (iVar0 < 39)
									{
										if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
										{
										}
										else
										{
											iVar2 = &Global_1952637->f_1794.f_1[iVar0];
											if (!func_810(iVar25, iVar2, &uVar26))
											{
												func_804(uParam1, 2, iVar0, 0);
												return false;
											}
										}
										iVar0++;
									}
								}
								func_804(uParam1, 0, -1, 0);
								return true;
							}
							return false;
						}
					}
				}
			}
		}
	}
}

void func_635(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
		case 2:
			return 97391779;
		case 3:
			return -808817534;
		case 4:
			return 1270922359;
		case 5:
			return -2011879201;
		case 6:
			return -1063340820;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201;
		case 9:
			return 1632140501;
		case 10:
			return 967218463;
		default:
			break;
	}
	return 0;
}

bool func_637(var uParam0, var uParam1, struct<4> Param2)
{
	iVar3 = &uParam0->f_1[34];
	iVar4 = &uParam0->f_1[18];
	iVar5 = 0;
	if (func_183() == 24043185)
	{
		iVar5 = 1;
	}
	if (func_434(iVar4) != 912453393)
	{
		iVar4 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = (&uParam0->f_1[iVar0] == 0 || func_496(&(uParam0->f_1[iVar0]), 1));
		if (!bVar1)
		{
			iVar2 = &uParam0->f_1[iVar0];
			Var6 = { func_492(iVar2, 1, 0) };
			func_802(iVar0, &(uParam0->f_1[iVar0]));
			if (func_397(iVar2, Var6, Var6.f_4, 1, 0, 0) == 0)
			{
				func_804(uParam1, 1, iVar0, 0);
			}
			else if ((&uParam0->f_1[iVar0] != 1733464892 && &uParam0->f_1[iVar0] != -230310728) && &uParam0->f_1[iVar0] != 1326838792)
			{
				if (_get_ped_component_category(&(uParam0->f_1[iVar0]), iVar5, true) == 0)
				{
					func_804(uParam1, 1, iVar0, 0);
				}
				else
				{
					func_806(uParam1, iVar0, iVar2);
					Jump @313; //curOff = 274
					func_802(iVar0, &(Global_1952637->f_83[iVar0]));
					func_542(Global_1952637->f_1794.f_1[iVar0], 16, 6);
					if (func_803(iVar0, iVar3, iVar4))
					{
						if (!func_811(uParam0, iVar0, Param2))
						{
							func_804(uParam1, 1, iVar0, 1);
						}
						else
						{
							Jump @416; //curOff = 355
							Jump @416; //curOff = 358
							if (!func_805(&(uParam0->f_1[iVar0]), func_243(Param2, Global_1952637->f_83[iVar0]->f_9, 1, -1), iVar0, Param2, 0))
							{
								func_804(uParam1, 1, iVar0, 0);
							}
						}
						iVar0++;
						func_807(&(Global_1952637->f_1794), uParam1, Param2);
						if (*uParam1 != 1)
						{
							func_804(uParam1, 0, -1, 0);
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_638(var uParam0, int iParam1)
{
	Var6.f_9 = -1591664384;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = 0;
	Var24 = { func_60(889965687, func_59(1), 1034665895, 1) };
	if (!func_809(*uParam0, 32))
	{
		iVar22 = func_243(Var24, Global_1952637->f_83[34]->f_9, 1, -1);
	}
	iVar23 = func_243(Var24, Global_1952637->f_83[18]->f_9, 1, -1);
	if (func_434(iVar23) != 912453393)
	{
		iVar23 = 0;
	}
	if (func_183() == 24043185)
	{
		iVar21 = 1;
	}
	bVar28 = false;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == 0)
		{
		}
		else
		{
			iVar1 = func_243(Var24, Global_1952637->f_83[iVar0]->f_9, 1, -1);
			if (func_812(iVar1, iVar0, *uParam0, iVar21))
			{
				Var2 = { func_60(iVar1, Var24, Global_1952637->f_83[iVar0]->f_9, 1) };
				if (!_0x025a1b1fb03fbf61(func_228(1), &Var2, &Var6, 15, 1))
				{
					uParam0->f_1 = (uParam0->f_1 + iVar0);
					*iParam1 = 16;
				}
				else
				{
					Global_1952637->f_1556.f_1[iVar0] = Var6.f_4;
					Global_1952637->f_1556.f_1[iVar0]->f_1 = Var6.f_14;
					Jump @505; //curOff = 322
					bVar28 = func_803(iVar0, iVar22, iVar23);
					if ((bVar28 || func_223(iVar0, 1) == 1367443060) || func_223(iVar0, 1) == -1130352927)
					{
						iVar1 = func_656(Global_1952637->f_83[iVar0]->f_9, 0);
						if (iVar1 != 0)
						{
							Global_1952637->f_1556.f_1[iVar0] = iVar1;
							Global_1952637->f_1556.f_1[iVar0]->f_1 = 0;
							Jump @505; //curOff = 436
						}
						else if (bVar28)
						{
							uParam0->f_1 = (uParam0->f_1 + iVar0);
							*iParam1 = 15;
						}
						else
						{
							Global_1952637->f_1556.f_1[iVar0] = &Global_1952637->f_83[iVar0];
							Global_1952637->f_1556.f_1[iVar0]->f_1 = 0;
							iVar0++;
						}
						if (0 == func_98(&(Global_1952637->f_1556.f_1[34])))
						{
							iVar0 = 0;
							while (iVar0 < 39)
							{
								if (func_496(&(Global_1952637->f_1556.f_1[iVar0]), 1))
								{
								}
								else
								{
									func_663(&(Global_1952637->f_1556), &(Global_1952637->f_1556.f_1[iVar0]), iVar0, 0, 8);
								}
								iVar0++;
							}
						}
						if (*iParam1 == 15 || *iParam1 == 16)
						{
							func_813();
						}
						else
						{
							*iParam1 = 0;
						}
					}
				}
			}
		}
	}
}

void func_639()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_814(Global_1952637->f_1675.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

void func_640()
{
	iVar0 = 4;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_814(Global_1952637->f_1675.f_1[iVar0], iVar0, iVar1);
		iVar1++;
	}
}

void func_641(int iParam0, bool bParam1)
{
	iVar0 = 1;
	while (iVar0 <= 10)
	{
		if (iParam0[iVar0] != 1)
		{
		}
		else if (!bParam1)
		{
			if (func_809(*(*iParam0)[iVar0], 2) && !func_809(*(*iParam0)[iVar0], 4))
			{
				iVar1 = 0;
				while (iVar1 < 39)
				{
					if (!func_398(iVar1, 112))
					{
					}
					else
					{
						func_814(Global_17411.f_55.f_644.f_33[0]->f_1.f_1[iVar1], iVar1, iVar0);
					}
					iVar1++;
				}
			}
			else
			{
				func_815(2, iVar0, 6);
				func_816(func_636(iVar0), 1, 1, 0, 0);
				func_817(iVar0);
			}
			iVar0++;
		}
	}
}

int func_642(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137717153:
			return 20;
		case -2118203104:
			return 15;
		case -2056583192:
			return 9;
		case -1811760631:
			return 18;
		case -1180698265:
			return 4;
		case -1177453988:
			return 1;
		case -875805376:
			return 12;
		case -768760704:
			return 13;
		case -559080197:
			return 17;
		case -487028314:
			return 5;
		case -340627321:
			return 11;
		case 0:
			return 0;
		case 12857284:
			return 2;
		case 241235545:
			return 6;
		case 299749022:
			return 3;
		case 1015239729:
			return 10;
		case 1089431066:
			return 14;
		case 1285634184:
			return 16;
		case 1301555144:
			return 8;
		case 1827902148:
			return 7;
		case 1858448324:
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

bool func_643(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (_0x44b3a36933ac009c(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 1330140418))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 2055530431))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_818(iVar0);
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (_0xb2b42607f7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = 459292749;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	_0x91ded5dd64bb2691(uParam0);
	if (_0x52fc26d2d2fc2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_644(var uParam0, bool bParam1)
{
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_365(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_60(889965687, func_59(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_243(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_451(func_60(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_456(Var1.f_16);
}

bool func_645(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_228(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_555(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_646(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<28> func_647(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_228(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_648(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_716(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_558(func_819(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_559(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_649(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_228(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_650(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_558(func_820(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_559(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

int func_651(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_716(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_558(func_571(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_559(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_652(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

int func_653(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_654(int iParam0, int iParam1)
{
	if (!func_821(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_99(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_822(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_434(iVar1))
		{
			func_823(10, iParam1);
		}
	}
	func_823(iVar0, iParam1);
}

bool func_655(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_223(iVar0, 1);
		if (func_224(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_677(iVar0) == -1)
			{
				func_225(iVar0, 0);
				func_226(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_481(iVar2, 2, 6);
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

int func_656(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_244(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_245(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_824(iVar0, iVar1, iParam1);
		}
		func_247(iVar0);
	}
	return iVar2;
}

int func_657(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_543();
	}
	return Global_17411.f_55.f_644.f_33[iParam0]->f_1;
}

int func_658(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_183();
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

void func_659(int iParam0)
{
	func_825(&(Global_1952637->f_2897), iParam0);
}

bool func_660(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_505(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_661(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_662(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_99(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_437(iVar0, 16);
		if (bVar1)
		{
			func_438(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_225(iVar0, iParam3);
			}
			if (!bParam2 && func_98(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_398(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_663(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_225(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_663(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

void func_663(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_496(iVar0, 1);
	if (bParam3 && func_99(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_826(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_223(iParam2, 1))
	{
		case -1130352927:
			func_827(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_828(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_829(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_830(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_831(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_832(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_833(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_834(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_835(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_836(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_837(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_838(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_839(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_840(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_841(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_842(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1211610172;
		case 1:
			return -1944857734;
		case 2:
			return 1075019689;
		case 3:
			return -814048481;
		case 4:
			return 1870020575;
		case 5:
			return 2063382598;
		case 6:
			return -764150126;
		case 7:
			return -221541509;
		case 8:
			return 1085553624;
		case 9:
			return 1573479481;
		case 10:
			return -1427713379;
		case 11:
			return 1670852880;
		case 12:
			return -1533591453;
		case 13:
			return -983290814;
		case 14:
			return -1116287994;
		case 15:
			return 698464395;
		case 16:
			return -580690850;
		case 17:
			return 867398362;
		case 18:
			return -602986813;
		case 19:
			return 1006535512;
		case 20:
			return -363970564;
		case 21:
			return -1878818335;
		case 22:
			return -352806282;
		case 23:
			return 594539708;
		case 24:
			return -200416538;
		case 25:
			return 236216767;
		case 26:
			return 879705185;
		case 27:
			return 127020732;
		case 28:
			return 1472297541;
		case 29:
			return -80561472;
		case 30:
			return 335460573;
		case 31:
			return 1215589249;
		case 32:
			return -769090325;
		case 33:
			return 1862238874;
		case 34:
			return -1780893596;
		case 35:
			return -1472531745;
		case 36:
			return 1612128574;
		case 37:
			return -1682139124;
		case 38:
			return -1559851782;
		default:
			break;
	}
	return 0;
}

void func_665(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 53:
		case 55:
			*iParam2 = 20;
			*iParam3 = 100;
			break;
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			*iParam2 = 0;
			*iParam3 = 100;
			break;
		case 47:
			*iParam2 = 0;
			*iParam3 = 50;
			break;
		default:
			*iParam2 = 0;
			*iParam3 = 0;
			break;
	}
}

bool func_666(int iParam0, float fParam1, int iParam2)
{
	func_505(&uVar1, 660625468, 1777366913, 459292749, 1, iParam0);
	_0x91ded5dd64bb2691(&uVar1);
	if (iParam2 == 0)
	{
		iParam2 = &Global_1952637->f_1675.f_1[8];
	}
	iVar0 = func_843(iParam2);
	if (!_0xb2b42607f7867576(fParam1, &uVar1, iVar0))
	{
		return false;
	}
	return true;
}

int func_667(int iParam0, int iParam1, int iParam2)
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

struct<4> func_668(bool bParam0)
{
	iVar0 = func_228(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_60(923904168, func_59(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_60(923904168, func_59(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_60(923904168, func_59(bParam0), -740156546, 0);
}

bool func_669(int iParam0, bool bParam1)
{
	if (func_434(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_844();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_670(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_397(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_671(int iParam0, var uParam1, int iParam2)
{
	if (func_845(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_672(bool bParam0)
{
	iVar0 = func_228(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_60(271701509, func_59(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_60(271701509, func_59(bParam0), 12999093, 0);
}

bool func_673(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_434(iParam0);
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
			if (func_846(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

void func_674(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_434(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_847(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_848(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

int func_675(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_183() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_849(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_661(iParam0, func_223(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_676(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_158(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_850(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_445(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_99(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_445(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_544(-1, 0, 6);
			func_114(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_545(0, 1);
	}
}

int func_677(int iParam0)
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

int func_678(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_434(iVar1) == iParam0 || (iParam0 == 81053684 && func_99(iVar1, 160827531)))
		{
			if (iParam1 == iVar1)
			{
			}
			else
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_679(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	switch (func_434(iParam1))
	{
		case -999503751:
			if (func_851(iParam1) && !func_445(2, func_852(iParam1)))
			{
				func_816(iParam1, bParam2, bParam3, bParam4, bParam5);
				return 0;
			}
			return 1;
		case 81053684:
			if (func_99(iParam1, -1303648999) && func_99(&(uParam0->f_1[1]), -93469181))
			{
				func_816(iParam1, bParam2, bParam3, bParam4, bParam5);
			}
			break;
	}
	if (func_99(iParam1, -166674229))
	{
		_0x766315a564594401(func_228(bParam5), iParam1, 0);
	}
	return 1;
}

int func_680(int iParam0, int iParam1)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_646(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_99(iParam0, 1399091007))
	{
		func_853(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_681(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_244(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_854(&Var0, func_668(0));
	}
	if (!func_245(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_247(iVar14);
	return uVar15;
}

struct<4> func_682(int iParam0, bool bParam1)
{
	Var0 = { func_492(iParam0, bParam1, 0) };
	return func_60(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_683(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_684()
{
	if (func_7() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_686(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_687(int iParam0)
{
	iParam0 = func_686(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

int func_688(int iParam0)
{
	iParam0 = func_686(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_689(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_690(int iParam0, int iParam1)
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

struct<10> func_691(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_692(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_693(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_694(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_695(int iParam0)
{
	if (func_99(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_99(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_99(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_696(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_230(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_697(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_698(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_699(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

void func_700(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_434(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_701(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_814(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_702(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (Global_17411.f_55.f_644.f_33[iParam1] || iParam0);
	}
}

void func_703(int iParam0, var uParam1)
{
	Global_17411.f_55.f_2439[iParam0] = uParam1;
}

int func_704(int iParam0, float fParam1, int iParam2)
{
	if (!func_855(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_856(2);
	}
	func_857(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

void func_705(int iParam0, bool bParam1)
{
	if (func_858() && !bParam1)
	{
		return;
	}
	if (!func_706(iParam0))
	{
		return;
	}
	iVar0 = func_860(func_859(iParam0, 2));
	iVar1 = func_861(iParam0, 2);
	if (iVar1 >= iVar0)
	{
		return;
	}
	if (iVar0 > 5)
	{
		return;
	}
	func_862(iParam0, iVar0, 2);
}

bool func_706(int iParam0)
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

void func_707(int iParam0, var uParam1)
{
	Global_17411.f_55.f_2439.f_24[iParam0] = uParam1;
}

int func_708(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_856(2);
	}
	iVar0 = player_ped_id();
	if (func_863(iVar0, iParam0, fParam1))
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
			func_864(iParam0, 7000, iParam5);
		}
		func_865(iVar0, iParam0, fParam1);
		func_866(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

var func_709(int iParam0, int iParam1)
{
	Var1 = { func_383(iParam0, iParam1) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

var func_710(int iParam0)
{
	Var1 = { func_192(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_711(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_712(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_867(&(uParam0->f_4));
}

bool func_713(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_868(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_715(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_716(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_869(uParam1->f_8, iParam0, iVar0, 2048) || func_869(uParam1->f_8, iParam0, iVar0, 32768)) || func_869(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_869(uParam1->f_8, iParam0, iVar0, 4) || func_869(uParam1->f_8, iParam0, iVar0, 256)) || func_869(uParam1->f_8, iParam0, iVar0, 65536)) || func_869(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_869(uParam1->f_8, iParam0, iVar0, 1) || func_869(uParam1->f_8, iParam0, iVar0, 8)) || func_869(uParam1->f_8, iParam0, iVar0, 65536)) || func_869(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_869(uParam1->f_8, iParam0, iVar0, 1) || func_869(uParam1->f_8, iParam0, iVar0, 16)) || func_869(uParam1->f_8, iParam0, iVar0, 2)) || func_869(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_869(uParam1->f_8, iParam0, iVar0, 8) || func_869(uParam1->f_8, iParam0, iVar0, 4096)) || func_869(uParam1->f_8, iParam0, iVar0, 256)) || func_869(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_717(var uParam0)
{
	if (!func_573(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_718(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_573(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_719(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_870()) > iParam0;
}

int func_720(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_724(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_724(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

void func_721()
{
}

var func_722()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_723(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_871()] = { Param0 };
			func_872((func_871() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_873()] = { Param0 };
			func_874((func_873() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

bool func_724(struct<2> Param0, var uParam2)
{
	if (!func_62(Param0))
	{
		return false;
	}
	func_875(uParam2);
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

bool func_725(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_726(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_727(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_43(iParam0))
	{
		return 0;
	}
	iVar0 = func_876(iParam0, 5);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 5;
	}
	iVar0 = func_876(iParam0, 4);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 4;
	}
	iVar0 = func_876(iParam0, 3);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return 3;
	}
	return 2;
}

int func_728(struct<2> Param0)
{
	iVar0 = func_720(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_877(iVar0);
}

int func_729(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_724(Param0, &vVar0))
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
		func_724(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_878(iVar9);
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

void func_730()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_724(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_731(struct<2> Param0)
{
	if (!func_62(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_63(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_732(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_879(Global_1900736->f_1[0]);
		return 1;
	}
	func_879(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_880(iParam0, Global_1900736->f_66);
	return 1;
}

bool func_733()
{
	return !Global_1572887->f_9;
}

bool func_734()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_735(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_737(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_599(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_882(func_881(Param0));
			iVar5 = func_883(iVar4);
			if (!func_884(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

void func_738(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_739(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_740(int iParam0)
{
	iVar0 = func_885(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_886(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_887(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

bool func_741(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_742(var uParam0)
{
	bVar0 = false;
	if (*uParam0)
	{
		if (uParam0->f_1)
		{
			Var1.f_11 = -1;
			Var1.f_39 = 39;
			Var1.f_101 = 70;
			Var1.f_101.f_1 = 100;
			Var1.f_101.f_2 = 100;
			Var1.f_101.f_3 = 100;
			Var1.f_101.f_4 = 100;
			Var1.f_101.f_5 = 100;
			Var1.f_101.f_6 = 100;
			Var1.f_101.f_7 = 100;
			Var1.f_101.f_8 = 50;
			Var1.f_101.f_9 = 80;
			Var1.f_101.f_10 = 3;
			Var1.f_101.f_11 = 60;
			Var1.f_101.f_12 = 100;
			Var1.f_101.f_13 = 100;
			Var1.f_101.f_14 = 100;
			Var1.f_101.f_15 = 100;
			Var1.f_101.f_23 = 39;
			func_330(uParam0, &(uParam0->f_1193), &Var1);
			uParam0->f_889 = func_888(&(uParam0->f_2), &(uParam0->f_2), &Var1);
		}
		else
		{
			uParam0->f_889 = 0;
		}
		if (uParam0->f_889 && uParam0->f_887)
		{
			bVar0 = true;
		}
	}
	else if (uParam0->f_888 && uParam0->f_887)
	{
		bVar0 = true;
	}
	func_606(uParam0, 28, bVar0);
}

bool func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 74:
			return true;
		case 77:
			return (iParam1 == 0 || iParam1 == 2026485318);
		case 46:
			return true;
		case 70:
			return (iParam1 == 0 || iParam1 == 24043185);
		case 72:
			return (iParam1 == 0 || iParam1 == 24043185);
		default:
			break;
	}
	return false;
}

void func_744(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 8:
			uParam0->f_1179.f_1 = iParam2;
			break;
		case 74:
			uParam0->f_1179.f_2 = iParam2;
			break;
		case 77:
			uParam0->f_1179.f_3 = iParam2;
			break;
		case 46:
			uParam0->f_1179.f_4 = iParam2;
			break;
		case 70:
			uParam0->f_1179.f_6 = iParam2;
			break;
		case 72:
			uParam0->f_1179.f_7 = iParam2;
			break;
		default:
			break;
	}
}

int func_745(var uParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam1)
	{
		case 8:
			iVar0 = 6;
			break;
		case 74:
			iVar0 = 17;
			break;
		case 77:
			iVar0 = 17;
			break;
		case 46:
			iVar0 = 14;
			break;
		case 70:
			iVar0 = 4;
			break;
		case 72:
			iVar0 = 4;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_746(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 74:
			return uParam0->f_648;
		case 46:
			return uParam0->f_648;
		case 77:
			return uParam0->f_648;
		default:
			break;
	}
	return uParam0->f_647;
}

int func_747(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			iVar0 = uParam0->f_1179.f_1;
			break;
		case 74:
			iVar0 = uParam0->f_1179.f_2;
			break;
		case 77:
			iVar0 = uParam0->f_1179.f_3;
			break;
		case 46:
			iVar0 = uParam0->f_1179.f_4;
			break;
		case 70:
			iVar0 = uParam0->f_1179.f_6;
			break;
		case 72:
			iVar0 = uParam0->f_1179.f_7;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_748(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar0 = func_290(uParam0, iParam1, 0, 0);
	iVar1 = func_889(iVar0, iParam5);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (bParam6)
		{
			iVar4 = func_280(uParam0, iParam3, iVar2, 0);
			iVar3 = (iParam4 + iVar2);
			func_890(uParam0, iVar4, uParam0->f_615, iVar3);
		}
		else
		{
			iVar3 = (iParam4 + iVar2);
			func_891(uParam0, uParam0->f_615, iVar3, iParam2, iParam4);
		}
		iVar2++;
	}
}

void func_749(var uParam0)
{
	func_892(uParam0, 49, -1483470091, -272793456);
	func_892(uParam0, 33, 17571750, 1313066777);
	func_892(uParam0, 93, 424580283, 602139475);
	func_892(uParam0, 63, -1389899508, 1531934181);
	func_892(uParam0, 68, 799607560, -655484384);
	func_892(uParam0, 73, 636446122, -570027044);
	func_892(uParam0, 78, 949000652, -107285187);
	func_892(uParam0, 83, 1364455116, 759265724);
	func_892(uParam0, 88, 831873862, 224394952);
	func_892(uParam0, 171, 634844725, -1238028369);
	func_892(uParam0, 174, -1371413737, -1075394173);
	func_892(uParam0, 177, -1913184527, -1097683517);
	func_892(uParam0, 180, 663304728, -436169265);
	func_892(uParam0, 183, -1214818401, -1925045926);
	func_892(uParam0, 186, -575561068, 1554851439);
	func_892(uParam0, 189, -1771423197, -1929508676);
	func_892(uParam0, 192, -973534326, -1170679166);
	func_892(uParam0, 195, 184602215, 121248466);
	func_892(uParam0, 198, -2002568296, -1900434660);
	func_892(uParam0, 201, 1643877740, -772353261);
	func_892(uParam0, 204, 904500170, -1090739654);
	func_892(uParam0, 207, 403633317, -1889929174);
	func_892(uParam0, 213, 1531423977, 1356474389);
	func_892(uParam0, 216, 1837425549, 1050985124);
	func_892(uParam0, 219, 563671472, -485140013);
	func_892(uParam0, 222, -1052235123, -1154856042);
	func_892(uParam0, 98, 1104904264, 1377922294);
	func_892(uParam0, 251, -891690336, 1195402671);
	func_892(uParam0, 59, -818558948, -1498025195);
	func_892(uParam0, 210, -346051150, -617533313);
}

bool func_750(char* sParam0)
{
	if (_0x375f5870a7b8bec1(sParam0))
	{
		return false;
	}
	if (compare_strings(sParam0, func_893(), false, -1) == 0)
	{
		return false;
	}
	return true;
}

void func_751(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return;
	}
	_databinding_write_data_int(&(uParam0->f_891[iParam1]), iParam2);
}

void func_752(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = iParam2;
	}
	switch (iParam1)
	{
		case 26:
			iVar4 = 34;
			iVar2 = func_331(uParam0, iVar4);
			iVar2 = (iVar2 + iVar0);
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[33])) - 1);
			func_894(&iVar2, iVar1);
			func_895(uParam0, iVar2, !bParam3);
			func_896(uParam0, iVar2, uParam0->f_1193.f_474.f_10, bParam3, 1);
			uParam0->f_1193.f_474.f_13 = iVar2;
			break;
		case 51:
			iVar4 = 94;
			iVar2 = func_331(uParam0, iVar4);
			iVar2 = (iVar2 + iVar0);
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[93])) - 1);
			func_894(&iVar2, iVar1);
			func_897(uParam0, iVar2, bParam3);
			uParam0->f_1193.f_474.f_18 = iVar2;
			break;
		case 73:
			iVar4 = 99;
			iVar2 = func_331(uParam0, iVar4);
			iVar2 = (iVar2 + iVar0);
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[98])) - 1);
			func_894(&iVar2, iVar1);
			iVar3 = _0xf47e33f8d2523825(&(uParam0->f_891[98]), iVar2);
			if (iVar3 == -1713496139 || iVar3 == -960808083)
			{
				func_606(uParam0, 101, 0);
			}
			else
			{
				func_606(uParam0, 101, 1);
			}
			func_898(uParam0, iVar3, uParam0->f_1193.f_474.f_24, bParam3);
			uParam0->f_1193.f_474.f_19 = iVar3;
			break;
		case 76:
			iVar4 = 252;
			iVar2 = func_331(uParam0, iVar4);
			iVar2 = (iVar2 + iVar0);
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[251])) - 1);
			func_894(&iVar2, iVar1);
			iVar3 = _0xf47e33f8d2523825(&(uParam0->f_891[251]), iVar2);
			if (iVar3 == -598283164 || iVar3 == -960808083)
			{
				func_606(uParam0, 255, 0);
			}
			else
			{
				func_606(uParam0, 255, 1);
			}
			func_899(uParam0, iVar3, uParam0->f_1193.f_474.f_23, bParam3);
			uParam0->f_1193.f_474.f_21 = iVar3;
			break;
		default:
			return;
	}
	func_751(uParam0, iVar4, iVar2);
}

void func_753(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 64:
			iVar0 = 230;
			break;
		case 66:
			iVar0 = 237;
			break;
		default:
			return;
	}
	if (iParam2 == 0)
	{
		func_606(uParam0, iVar0, 0);
	}
	else
	{
		func_606(uParam0, iVar0, 1);
	}
}

void func_754(var uParam0, int iParam1)
{
	iVar0 = _databinding_get_array_count(&(uParam0->f_891[262]));
	iParam1 = func_766(iParam1, 0, iVar0);
	_0x9963681a8bc69bf3(uParam0->f_615, "Ped.WhistleShape", to_float(iParam1));
	func_751(uParam0, 261, iParam1);
}

void func_755(var uParam0, int iParam1)
{
	_0x9963681a8bc69bf3(uParam0->f_615, "Ped.WhistlePitch", (to_float(iParam1) * 0.01f));
	func_751(uParam0, 264, iParam1);
}

void func_756(var uParam0, int iParam1)
{
	_0x9963681a8bc69bf3(uParam0->f_615, "Ped.WhistleClarity", (to_float(iParam1) * 0.01f));
	func_751(uParam0, 268, iParam1);
}

int func_757(int iParam0)
{
	return iParam0 + 5;
}

void func_758(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = (2 - ((iParam1 + iParam2) + iParam3));
	func_751(uParam0, 273, 5);
	func_751(uParam0, 278, 5);
	func_751(uParam0, 283, 5);
	iVar1 = ((5 + iParam1) + iVar0);
	func_751(uParam0, 274, iVar1);
	iVar2 = ((5 + iParam2) + iVar0);
	func_751(uParam0, 279, iVar2);
	iVar3 = ((5 + iParam3) + iVar0);
	func_751(uParam0, 284, iVar3);
	uParam0->f_1193.f_638 = iParam1;
	uParam0->f_1193.f_639 = iParam2;
	uParam0->f_1193.f_640 = iParam3;
	uParam0->f_888 = iVar0 == 0;
}

void func_759(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = _databinding_get_array_count(&(uParam0->f_891[49]));
	iParam1 = func_766(iParam1, 0, iVar0);
	iVar1 = _0xf47e33f8d2523825(&(uParam0->f_891[49]), iParam1);
	func_270(uParam0, uParam0->f_647);
	func_279(uParam0, 1430707226, uParam0->f_1193.f_474.f_10, iVar1);
	iVar2 = func_280(uParam0, -1500490422, iVar1, 0);
	uParam0->f_1193.f_474.f_11 = iParam1;
	uParam0->f_1193.f_474.f_12 = iVar2;
	func_900(uParam0, uParam0->f_1193.f_474.f_10);
	if (bParam2)
	{
		func_114(2, 112, 7, uParam0->f_615, 0);
		func_114(25, func_286(iVar2), 1, uParam0->f_615, 0);
	}
	func_751(uParam0, 50, iParam1);
}

void func_760(var uParam0, char* sParam1)
{
	if (func_750(sParam1))
	{
		StringCopy(&(uParam0->f_1193.f_474.f_1), sParam1, 64);
		uParam0->f_887 = 1;
		func_769(uParam0, 13, &(uParam0->f_1193.f_474.f_1));
		func_606(uParam0, 43, 1);
		func_606(uParam0, 16, 1);
		func_606(uParam0, 22, 1);
		func_606(uParam0, 25, 1);
	}
	else
	{
		if (is_string_null_or_empty(&(uParam0->f_1193.f_474.f_1)) || get_length_of_literal_string(&(uParam0->f_1193.f_474.f_1)) == 0)
		{
			func_769(uParam0, 13, _create_var_string(2, "CHAR_CREATOR_SAVE_GAME_ENTER"));
			uParam0->f_887 = 0;
		}
		else
		{
			func_769(uParam0, 13, &(uParam0->f_1193.f_474.f_1));
		}
		func_606(uParam0, 43, 0);
		func_606(uParam0, 16, 0);
		func_606(uParam0, 22, 0);
		func_606(uParam0, 25, 0);
	}
	func_742(uParam0);
}

void func_761(var uParam0, int iParam1, var uParam2, int iParam3)
{
	iVar2 = func_763(iParam1);
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		bVar1 = false;
		if (iVar2 != 0)
		{
			func_270(uParam0, uParam0->f_648);
			if (func_279(uParam0, iVar2, iVar0, 0))
			{
				bVar1 = func_504(uParam0, 548679286, 0, 0);
			}
		}
		(*uParam2)[iVar0] = !bVar1;
		iVar0++;
	}
}

void func_762(var uParam0, int iParam1, var uParam2, int iParam3)
{
	func_765(iParam1, &uVar0, &uVar1, &iVar2, &uVar3);
	_0x3bf0767cf33fcc88(&(uParam0->f_891[iVar2]));
	iVar12 = 0;
	while (iVar12 < iParam3)
	{
		if (uParam2[iVar12])
		{
			_0x1919d59e60fd516e(&(uParam0->f_891[iVar2]), iVar12, -1);
			StringIntConCat(&cVar4, iVar12, 64);
			StringConCat(&cVar4, " ", 64);
		}
		iVar12++;
	}
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			iVar0 = 600320052;
			break;
		case 46:
			iVar0 = 1845412653;
			break;
		case 70:
			iVar0 = -29644304;
			break;
		case 72:
			iVar0 = -978910727;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_764(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_270(uParam0, uParam0->f_648);
	iVar0 = func_290(uParam0, iParam1, 0, 0);
	if (!func_279(uParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	iVar1 = 1;
	if (!bParam3)
	{
		iVar1 = -1;
	}
	bVar2 = func_504(uParam0, 548679286, 0, 0);
	if (!bVar2)
	{
		return iParam2;
	}
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		func_270(uParam0, uParam0->f_648);
		if (!func_279(uParam0, iParam1, iParam2, 0))
		{
		}
		else
		{
			if (!func_504(uParam0, 548679286, 0, 0))
			{
				return iParam2;
			}
			iParam2 = (iParam2 + iVar1);
			if (iParam2 >= iVar0)
			{
				iParam2 = 0;
			}
			else if (iParam2 < 0)
			{
				iParam2 = (iVar0 - 1);
			}
		}
		iVar3++;
	}
	return iParam2;
}

void func_765(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			*iParam1 = 39;
			*iParam2 = 40;
			*iParam3 = 37;
			*iParam4 = 38;
			break;
		case 74:
			*iParam1 = 104;
			*iParam2 = 105;
			*iParam3 = 102;
			*iParam4 = 103;
			break;
		case 77:
			*iParam1 = 258;
			*iParam2 = 259;
			*iParam3 = 256;
			*iParam4 = 257;
			break;
		case 46:
			*iParam1 = 55;
			*iParam2 = 56;
			*iParam3 = 53;
			*iParam4 = 54;
			break;
		case 72:
			*iParam1 = 234;
			*iParam2 = 235;
			*iParam3 = 232;
			*iParam4 = 233;
			break;
		case 70:
			*iParam1 = 227;
			*iParam2 = 228;
			*iParam3 = 225;
			*iParam4 = 226;
			break;
	}
}

int func_766(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= iParam2)
	{
		return iParam0;
	}
	if (iParam0 >= iParam2)
	{
		iParam0 = iParam1;
	}
	else if (iParam0 < iParam1)
	{
		iParam0 = (iParam2 - 1);
	}
	return iParam0;
}

void func_767(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 8:
			func_896(uParam0, uParam0->f_1193.f_474.f_13, *iParam2, 0, 1);
			uParam0->f_1193.f_474.f_10 = *iParam2;
			break;
		case 74:
			func_898(uParam0, uParam0->f_1193.f_474.f_19, *iParam2, 1);
			uParam0->f_1193.f_474.f_24 = *iParam2;
			func_787(uParam0, 68, 0, *iParam2);
			break;
		case 77:
			func_899(uParam0, uParam0->f_1193.f_474.f_21, *iParam2, 1);
			uParam0->f_1193.f_474.f_23 = *iParam2;
			break;
		case 46:
			func_901(uParam0, *iParam2, 1);
			uParam0->f_1193.f_474.f_15 = *iParam2;
			break;
		case 72:
			uParam0->f_1193.f_474.f_98 = *iParam2;
			func_787(uParam0, iParam1, 0, *iParam2);
			break;
		case 70:
			uParam0->f_1193.f_474.f_100 = *iParam2;
			func_787(uParam0, iParam1, 0, *iParam2);
			break;
	}
}

void func_768(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)
{
	iVar0 = func_747(uParam0, iParam1);
	iVar1 = func_745(uParam0, iParam1);
	iVar2 = func_766(iParam2, 0, iVar1);
	iVar2 = (iVar2 + iVar0);
	StringCopy(sParam3, "SwatchTxd", 32);
	_int_to_string(iVar2, "slot%02d", sParam4);
}

void func_769(var uParam0, int iParam1, char[4] cParam2)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return;
	}
	_databinding_write_data_string(&(uParam0->f_891[iParam1]), cParam2);
}

void func_770(var uParam0, int iParam1)
{
	if (!func_257(uParam0, 256))
	{
		return;
	}
	func_765(uParam0->f_649.f_231, &uVar0, &uVar1, &iVar2, &iVar3);
	uVar4 = &uParam0->f_891[iVar2];
	iVar5 = _databinding_get_array_count(uVar4);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		iVar7 = _0x02b21b6beedd83cc(uVar4, iVar6);
		if (iVar7 == iParam1)
		{
			func_751(uParam0, 113, iVar6);
		}
		else
		{
			iVar6++;
		}
	}
	func_751(uParam0, iVar3, iParam1);
}

void func_771(var uParam0)
{
	iVar0 = func_331(uParam0, 103);
	iVar1 = func_331(uParam0, 257);
	bVar2 = iVar0 == iVar1;
	func_606(uParam0, 18, bVar2);
}

bool func_772(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

void func_773(var uParam0)
{
	if (func_257(uParam0, 128))
	{
		func_329(uParam0, 128);
	}
	else
	{
		func_305(uParam0, 128);
	}
	iVar0 = uParam0->f_1193.f_474.f_21;
	iVar1 = uParam0->f_1193.f_474.f_23;
	iVar2 = func_331(uParam0, 257);
	bVar3 = func_257(uParam0, 128);
	func_899(uParam0, iVar0, iVar1, 1);
	func_606(uParam0, 166, bVar3);
}

void func_774(var uParam0, int iParam1)
{
	if (uParam0->f_639 == iParam1)
	{
		return;
	}
	uParam0->f_639 = iParam1;
}

void func_775(var uParam0)
{
	bVar1 = true;
	switch (uParam0->f_649.f_231)
	{
		case 2:
			iVar0 = 1183206927;
			break;
		case 25:
			iVar0 = 243538118;
			break;
		case 10:
			iVar0 = 1148935272;
			break;
		case 12:
			iVar0 = 365485396;
			break;
		case 13:
			iVar0 = 1271586442;
			break;
		case 14:
			iVar0 = 720499860;
			break;
		case 15:
			iVar0 = -25682108;
			break;
		case 16:
			iVar0 = -771629875;
			break;
		case 17:
			iVar0 = -56446327;
			break;
		case 51:
			iVar0 = 48432785;
			break;
		case 20:
			iVar0 = -175097074;
			break;
		case 21:
			iVar0 = 409714994;
			break;
		case 18:
			iVar0 = 1746509142;
			break;
		case 19:
			iVar0 = 62414204;
			break;
		case 26:
			iVar0 = 59314795;
			break;
		case 68:
			iVar0 = 465546917;
			break;
		default:
			bVar1 = false;
			break;
	}
	func_606(uParam0, 8, bVar1);
	if (bVar1)
	{
		func_902(uParam0, 9, iVar0);
	}
}

void func_776(var uParam0)
{
	switch (uParam0->f_649.f_231)
	{
		case 0:
			sVar0 = "CHAR_CREATOR_TOOLTIP_SAVE_GAME";
			break;
		case 1:
			if (func_903(uParam0, 43))
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_AGE";
			}
			else
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHOOSE_NAME";
			}
			break;
		case 2:
			if (func_903(uParam0, 16))
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_APPEARANCE";
			}
			else
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHOOSE_NAME";
			}
			break;
		case 3:
			if (func_903(uParam0, 22))
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_WHISTLE";
			}
			else
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHOOSE_NAME";
			}
			break;
		case 4:
			if (func_903(uParam0, 25))
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ATTRIBUTES";
			}
			else
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHOOSE_NAME";
			}
			break;
		case 5:
			if (func_903(uParam0, 28))
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_CONFIRM";
			}
			else if (!uParam0->f_888)
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_ASSIGN_ATTRIBUTES";
			}
			else if (*uParam0 && !uParam0->f_889)
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHANGE_SOMETHING";
			}
			else
			{
				sVar0 = "CHAR_CREATOR_TOOLTIP_ERROR_CHOOSE_NAME";
			}
			break;
		case 6:
			sVar0 = "CHAR_CREATOR_RANDOMIZE_ALL_TOOLTIP";
			break;
		case 46:
			sVar0 = "CHAR_CREATOR_EYES_COLOR_TOOLTIP";
			break;
		case 68:
			sVar0 = "CHAR_CREATOR_EYESBROWS_TOOLTIP";
			break;
		case 7:
			sVar0 = "CHAR_CREATOR_TOOLTIP_ARCHETYPE";
			break;
		case 8:
			sVar0 = "CHAR_CREATOR_SKIN_TONE_TOOLTIP";
			break;
		case 25:
			sVar0 = "CHAR_CREATOR_TOOLTIP_BUILD_OPTION";
			break;
		case 10:
			sVar0 = "CHAR_CREATOR_HEAD_TOOLTIP";
			break;
		case 11:
			sVar0 = "CHAR_CREATOR_FACE_TOOLTIP";
			break;
		case 20:
			sVar0 = "CHAR_CREATOR_HAIR_TOOLTIP";
			break;
		case 21:
			sVar0 = "CHAR_CREATOR_BEARD_TOOLTIP";
			break;
		case 22:
			sVar0 = "CHAR_CREATOR_MOUSTACHE_TOOLTIP";
			break;
		case 23:
			sVar0 = "CHAR_CREATOR_SIDE_BURNS_TOOLTIP";
			break;
		case 24:
			sVar0 = "CHAR_CREATOR_CHIN_HAIR_TOOLTIP";
			break;
		case 51:
			sVar0 = "CHAR_CREATOR_TOOLTIP_TEETH";
			break;
		case 18:
			sVar0 = "CHAR_CREATOR_TOOLTIP_LIFESTYLE";
			break;
		case 19:
			sVar0 = "CHAR_CREATOR_TOOLTIP_MAKEUP";
			break;
		case 17:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 16:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 12:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 15:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 14:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 13:
			sVar0 = "CHAR_CREATOR_GENERAL_CUSTOMIZATION_TOOLTIP";
			break;
		case 26:
			sVar0 = "CHAR_CREATOR_TOOLTIP_HERITAGE";
			break;
		case 73:
			sVar0 = "CHAR_CREATOR_HAIR_STYLE_TOOLTIP";
			break;
		case 74:
			sVar0 = "CHAR_CREATOR_HAIR_COLOR_TOOLTIP";
			break;
		case 76:
			sVar0 = "CHAR_CREATOR_BEARD_STYLE_TOOLTIP";
			break;
		case 77:
			sVar0 = "CHAR_CREATOR_BEARD_COLOR_TOOLTIP";
			break;
		case 79:
			sVar0 = "CHAR_CREATOR_MOUSTACHE_STYLE_TOOLTIP";
			break;
		case 80:
			sVar0 = "CHAR_CREATOR_MOUSTACHE_COLOR_TOOLTIP";
			break;
		case 81:
			sVar0 = "CHAR_CREATOR_SIDE_BURNS_STYLE_TOOLTIP";
			break;
		case 82:
			sVar0 = "CHAR_CREATOR_SIDE_BURNS_COLOR_TOOLTIP";
			break;
		case 83:
			sVar0 = "CHAR_CREATOR_CHIN_HAIR_STYLE_TOOLTIP";
			break;
		case 84:
			sVar0 = "CHAR_CREATOR_CHIN_HAIR_COLOR_TOOLTIP";
			break;
		case 85:
			sVar0 = "CHAR_CREATOR_WHISTLE_STYLE_TOOLTIP";
			break;
		case 86:
			sVar0 = "CHAR_CREATOR_WHISTLE_PITCH_TOOLTIP";
			break;
		case 87:
			sVar0 = "CHAR_CREATOR_WHISTLE_CLARITY_TOOLTIP";
			break;
		case 88:
		case 89:
		case 90:
			sVar0 = func_904(uParam0, &bVar2);
			bVar1 = true;
			break;
		case 75:
		case 78:
			sVar0 = "CHAR_CREATOR_TOOLTIP_SYNC_HAIR_COLOR";
			break;
		default:
			break;
	}
	if (bVar2)
	{
		func_902(uParam0, 6, 859817522);
	}
	else
	{
		func_902(uParam0, 6, 1105014447);
	}
	if (_0x375f5870a7b8bec1(sVar0))
	{
		func_769(uParam0, 5, "");
	}
	else if (bVar1)
	{
		func_769(uParam0, 5, sVar0);
	}
	else
	{
		func_769(uParam0, 5, _create_var_string(2, sVar0));
	}
}

void func_777(var uParam0)
{
	iVar0 = -1;
	switch (uParam0->f_649.f_231)
	{
		case 12:
			iVar0 = 65;
			break;
		case 13:
			iVar0 = 70;
			break;
		case 14:
			iVar0 = 75;
			break;
		case 15:
			iVar0 = 80;
			break;
		case 16:
			iVar0 = 85;
			break;
		case 17:
			iVar0 = 90;
			break;
		default:
			break;
	}
	func_606(uParam0, iVar0, 1);
}

void func_778(var uParam0)
{
	if (func_257(uParam0, 64))
	{
		return;
	}
	switch (uParam0->f_649.f_231)
	{
		case 28:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_HEIGHT_LOW", "CHAR_CREATOR_GRID_TEXT_HEIGHT_HIGH", 2, 1);
			break;
		case 30:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_ROTATION_INWARD", "CHAR_CREATOR_GRID_TEXT_ROTATION_OUTWARD", "CHAR_CREATOR_GRID_TEXT_LENGTH_LONG", "CHAR_CREATOR_GRID_TEXT_LENGTH_SHORT", 5, 6);
			break;
		case 31:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_EAR_SIZE_GRID_LEFT_TEXT_SMALL", "CHAR_CREATOR_EAR_SIZE_GRID_RIGHT_TEXT_LARGE", "CHAR_CREATOR_EAR_SIZE_GRID_BOTTOM_TEXT_LOBE_BIG", "CHAR_CREATOR_EAR_SIZE_GRID_TOP_TEXT_LOBE_SMALL", 4, 7);
			break;
		case 32:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_HEIGHT_LOW", "CHAR_CREATOR_GRID_TEXT_HEIGHT_HIGH", 9, 8);
			break;
		case 34:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_HEIGHT_LOW", "CHAR_CREATOR_GRID_TEXT_HEIGHT_HIGH", 12, 11);
			break;
		case 36:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_TILT_LOW", "CHAR_CREATOR_GRID_TEXT_TILT_HIGH", 15, 14);
			break;
		case 38:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", 29, 30);
			break;
		case 39:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_POS_UP", "CHAR_CREATOR_GRID_TEXT_POS_DOWN", "", "", 32, -1);
			break;
		case 40:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_THICKNESS_THIN", "CHAR_CREATOR_GRID_TEXT_THICKNESS_THICK", 34, 33);
			break;
		case 41:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_THICKNESS_THICK", "CHAR_CREATOR_GRID_TEXT_THICKNESS_THIN", 37, 36);
			break;
		case 42:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_LIPS_DEPTH_RIGHT_TEXT", "CHAR_CREATOR_LIPS_DEPTH_LEFT_TEXT", "CHAR_CREATOR_LIPS_DEPTH_TOP_TEXT", "CHAR_CREATOR_LIPS_DEPTH_BOTTOM_TEXT", 35, 38);
			break;
		case 43:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_HEIGHT_LOW", "CHAR_CREATOR_GRID_TEXT_HEIGHT_HIGH", 23, 25);
			break;
		case 44:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_POS_LEFT", "CHAR_CREATOR_GRID_TEXT_POS_RIGHT", "CHAR_CREATOR_GRID_TEXT_LENGTH_SHORT", "CHAR_CREATOR_GRID_TEXT_LENGTH_LONG", 27, 24);
			break;
		case 45:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_GRID_TEXT_POS_DOWN", "CHAR_CREATOR_GRID_TEXT_POS_UP", 28, 26);
			break;
		case 48:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_WIDTH_NARROW", "CHAR_CREATOR_GRID_TEXT_WIDTH_WIDE", "CHAR_CREATOR_EAR_SIZE_GRID_LEFT_TEXT_SMALL", "CHAR_CREATOR_EAR_SIZE_GRID_RIGHT_TEXT_LARGE", 18, 17);
			break;
		case 49:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_ANGLE_INWARD", "CHAR_CREATOR_GRID_TEXT_ANGLE_OUTWARD", "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", 20, 19);
			break;
		case 50:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_POS_INWARD", "CHAR_CREATOR_GRID_TEXT_POS_OUTWARD", "CHAR_CREATOR_GRID_TEXT_POS_DOWN", "CHAR_CREATOR_GRID_TEXT_POS_UP", 21, 22);
			break;
		case 53:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101, 0);
			break;
		case 55:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_1, 0);
			break;
		case 56:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_2, 0);
			break;
		case 57:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_3, 0);
			break;
		case 58:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_4, 0);
			break;
		case 59:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_5, 0);
			break;
		case 60:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_6, 0);
			break;
		case 62:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_11, 0);
			break;
		case 63:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_13, 0);
			break;
		case 65:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_15, 0);
			break;
		case 64:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_14, 0);
			break;
		case 66:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_OPACITY_STRONG", "CHAR_CREATOR_OPACITY_FAINT", "", "", uParam0->f_1193.f_474.f_101.f_12, 0);
			break;
		case 27:
			break;
		case 29:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", "", "", 3, -1);
			break;
		case 33:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", "", "", 10, -1);
			break;
		case 35:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", "", "", 13, -1);
			break;
		case 37:
			func_905(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_GRID_TEXT_DEPTH_SHALLOW", "CHAR_CREATOR_GRID_TEXT_DEPTH_DEEP", "", "", 16, -1);
			break;
		case 47:
			func_906(uParam0, uParam0->f_649.f_231, "CHAR_CREATOR_EYE_REDNESS_GRID_RED", "CHAR_CREATOR_EYE_REDNESS_GRID_WHITE", "", "", uParam0->f_1193.f_474.f_16, 0);
			break;
		default:
			func_606(uParam0, 117, 0);
			func_606(uParam0, 118, 0);
			return;
	}
}

void func_779(var uParam0)
{
	if (func_257(uParam0, 256))
	{
		return;
	}
	iVar0 = func_745(uParam0, uParam0->f_649.f_231);
	uVar1 = 17;
	bVar19 = false;
	func_761(uParam0, uParam0->f_649.f_231, &uVar1, iVar0);
	switch (uParam0->f_649.f_231)
	{
		case 8:
			func_907(uParam0, "CHAR_CREATOR_SKIN_TONE", uParam0->f_1193.f_474.f_10, &uVar1, iVar0);
			break;
		case 74:
			if (func_903(uParam0, 101))
			{
				func_907(uParam0, "CHAR_CREATOR_HAIR_COLOR", uParam0->f_1193.f_474.f_24, &uVar1, iVar0);
			}
			else
			{
				bVar19 = true;
			}
			break;
		case 77:
			if (func_903(uParam0, 255))
			{
				func_907(uParam0, "CHAR_CREATOR_BEARD_COLOR", uParam0->f_1193.f_474.f_23, &uVar1, iVar0);
			}
			else
			{
				bVar19 = true;
			}
			break;
		case 46:
			func_907(uParam0, "CHAR_CREATOR_EYE_COLOR", uParam0->f_1193.f_474.f_15, &uVar1, iVar0);
			break;
		case 72:
			func_907(uParam0, "CHAR_CREATOR_LIPSTICK_COLOR", uParam0->f_1193.f_474.f_98, &uVar1, iVar0);
			break;
		case 70:
			func_907(uParam0, "CHAR_CREATOR_EYESHADOW_COLOR", uParam0->f_1193.f_474.f_100, &uVar1, iVar0);
			break;
		default:
			bVar19 = true;
			break;
	}
	if (bVar19)
	{
		func_606(uParam0, 111, 0);
	}
}

char* func_780(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return "";
	}
	if (!_databinding_is_data_id_valid(&(uParam0->f_891[iParam1])))
	{
		return "";
	}
	return _databinding_read_data_string(&(uParam0->f_891[iParam1]));
}

void func_781(var uParam0, int iParam1, int iParam2)
{
	task_whistle_anim(uParam0, iParam1, iParam2);
}

void func_782(var uParam0)
{
	switch (uParam0->f_649.f_231)
	{
		case 1:
			iVar0 = func_331(uParam0, 44);
			iVar3 = func_908(uParam0, iVar0, 18, 60, 0);
			func_751(uParam0, 44, iVar3);
			func_788(uParam0);
			break;
		case 25:
			iVar0 = func_331(uParam0, 50);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[49])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			func_759(uParam0, iVar0, 1);
			break;
		case 8:
			iVar0 = uParam0->f_1193.f_474.f_10;
			iVar2 = (func_745(uParam0, 8) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			func_608(uParam0, 8, iVar0, 0);
			break;
		case 21:
			iVar0 = func_331(uParam0, 252);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[251])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_752(uParam0, 76, iVar0, 1);
			break;
		case 20:
			iVar0 = func_331(uParam0, 99);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[98])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_752(uParam0, 73, iVar0, 1);
			break;
		case 9:
			break;
		case 63:
			iVar0 = func_331(uParam0, 202);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[201])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 63, iVar0, -1);
			break;
		case 55:
			iVar0 = func_331(uParam0, 178);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[177])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 55, iVar0, -1);
			break;
		case 56:
			iVar0 = func_331(uParam0, 181);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[180])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 56, iVar0, -1);
			break;
		case 68:
			iVar0 = func_331(uParam0, 60);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[59])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 68, iVar0, -1);
			break;
		case 65:
			iVar0 = func_331(uParam0, 205);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[204])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 65, iVar0, -1);
			break;
		case 71:
			break;
		case 64:
			iVar0 = func_331(uParam0, 208);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[207])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 64, iVar0, -1);
			break;
		case 70:
			break;
		case 69:
			iVar0 = func_331(uParam0, 223);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[222])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 69, iVar0, -1);
			break;
		case 62:
			iVar0 = func_331(uParam0, 199);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[198])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 62, iVar0, -1);
			break;
		case 57:
			iVar0 = func_331(uParam0, 184);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[183])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 57, iVar0, -1);
			break;
		case 66:
			iVar0 = func_331(uParam0, 211);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[210])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 66, iVar0, -1);
			break;
		case 72:
			break;
		case 58:
			iVar0 = func_331(uParam0, 187);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[186])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 58, iVar0, -1);
			break;
		case 67:
			iVar0 = func_331(uParam0, 214);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[213])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 67, iVar0, -1);
			break;
		case 53:
			iVar0 = func_331(uParam0, 172);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[171])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 53, iVar0, -1);
			break;
		case 59:
			iVar0 = func_331(uParam0, 190);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[189])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 59, iVar0, -1);
			break;
		case 61:
			iVar0 = func_331(uParam0, 196);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[195])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_787(uParam0, 61, iVar0, -1);
			break;
		case 28:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[2] * 100f));
			uParam0->f_1193.f_474.f_39[2] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[1] * 100f));
			uParam0->f_1193.f_474.f_39[1] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 28, 1);
			break;
		case 29:
			iVar0 = func_331(uParam0, 131);
			iVar1 = func_331(uParam0, 132);
			iVar2 = func_331(uParam0, 133);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			uParam0->f_1193.f_474.f_39[3] = func_909(iVar0, iVar1, iVar2);
			func_620(uParam0, 3, -1, 1, 0, 1);
			break;
		case 33:
			iVar0 = func_331(uParam0, 138);
			iVar1 = func_331(uParam0, 139);
			iVar2 = func_331(uParam0, 140);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			uParam0->f_1193.f_474.f_39[10] = func_909(iVar0, iVar1, iVar2);
			func_620(uParam0, 10, -1, 1, 0, 1);
			break;
		case 32:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[9] * 100f));
			uParam0->f_1193.f_474.f_39[9] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[8] * 100f));
			uParam0->f_1193.f_474.f_39[8] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 32, 1);
			break;
		case 37:
			iVar0 = func_331(uParam0, 148);
			iVar1 = func_331(uParam0, 149);
			iVar2 = func_331(uParam0, 150);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			uParam0->f_1193.f_474.f_39[16] = func_909(iVar0, iVar1, iVar2);
			func_620(uParam0, 16, -1, 1, 0, 1);
			break;
		case 30:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[5] * 100f));
			uParam0->f_1193.f_474.f_39[5] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[6] * 100f));
			uParam0->f_1193.f_474.f_39[6] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 30, 1);
			break;
		case 31:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[4] * 100f));
			uParam0->f_1193.f_474.f_39[4] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[7] * 100f));
			uParam0->f_1193.f_474.f_39[7] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 31, 1);
			break;
		case 46:
			iVar0 = uParam0->f_1193.f_474.f_15;
			iVar2 = (func_745(uParam0, 46) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			func_608(uParam0, 46, iVar0, 0);
			break;
		case 49:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[20] * 100f));
			uParam0->f_1193.f_474.f_39[20] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[19] * 100f));
			uParam0->f_1193.f_474.f_39[19] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 49, 1);
			break;
		case 50:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[21] * 100f));
			uParam0->f_1193.f_474.f_39[21] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[22] * 100f));
			uParam0->f_1193.f_474.f_39[22] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 50, 1);
			break;
		case 47:
			iVar0 = func_331(uParam0, 160);
			iVar0 = func_908(uParam0, iVar0, func_331(uParam0, 161), func_331(uParam0, 162), 1);
			func_623(uParam0, 47, iVar0, iVar0);
			break;
		case 48:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[18] * 100f));
			uParam0->f_1193.f_474.f_39[18] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[17] * 100f));
			uParam0->f_1193.f_474.f_39[17] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 48, 1);
			break;
		case 27:
			break;
		case 35:
			iVar0 = func_331(uParam0, 143);
			iVar1 = func_331(uParam0, 144);
			iVar2 = func_331(uParam0, 145);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			uParam0->f_1193.f_474.f_39[13] = func_909(iVar0, iVar1, iVar2);
			func_620(uParam0, 13, -1, 1, 0, 1);
			break;
		case 34:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[12] * 100f));
			uParam0->f_1193.f_474.f_39[12] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[11] * 100f));
			uParam0->f_1193.f_474.f_39[11] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 34, 1);
			break;
		case 42:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[35] * 100f));
			uParam0->f_1193.f_474.f_39[35] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[38] * 100f));
			uParam0->f_1193.f_474.f_39[38] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 42, 1);
			break;
		case 41:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[37] * 100f));
			uParam0->f_1193.f_474.f_39[37] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[36] * 100f));
			uParam0->f_1193.f_474.f_39[36] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 41, 1);
			break;
		case 38:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[29] * 100f));
			uParam0->f_1193.f_474.f_39[29] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[30] * 100f));
			uParam0->f_1193.f_474.f_39[30] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 38, 1);
			break;
		case 39:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[32] * 100f));
			uParam0->f_1193.f_474.f_39[32] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 39, 1);
			break;
		case 43:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[23] * 100f));
			uParam0->f_1193.f_474.f_39[23] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[25] * 100f));
			uParam0->f_1193.f_474.f_39[25] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 43, 1);
			break;
		case 44:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[27] * 100f));
			uParam0->f_1193.f_474.f_39[27] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[24] * 100f));
			uParam0->f_1193.f_474.f_39[24] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 44, 1);
			break;
		case 45:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[28] * 100f));
			uParam0->f_1193.f_474.f_39[28] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[26] * 100f));
			uParam0->f_1193.f_474.f_39[26] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 45, 1);
			break;
		case 51:
			iVar0 = func_331(uParam0, 94);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[93])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_752(uParam0, 51, iVar0, 1);
			break;
		case 40:
			iVar0 = round((&uParam0->f_1193.f_474.f_39[34] * 100f));
			uParam0->f_1193.f_474.f_39[34] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			iVar0 = round((&uParam0->f_1193.f_474.f_39[33] * 100f));
			uParam0->f_1193.f_474.f_39[33] = (to_float(func_908(uParam0, iVar0, 0, 100, 0)) / 100f);
			func_415(uParam0, 40, 1);
			break;
		case 76:
			iVar0 = func_331(uParam0, 252);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[251])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_752(uParam0, 76, iVar0, 1);
			break;
		case 77:
			iVar0 = uParam0->f_1193.f_474.f_23;
			iVar2 = (func_745(uParam0, 77) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			func_608(uParam0, 46, iVar0, 0);
			break;
		case 73:
			iVar0 = func_331(uParam0, 99);
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[98])) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 1);
			func_752(uParam0, 73, iVar0, 1);
			break;
		case 74:
			iVar0 = uParam0->f_1193.f_474.f_24;
			iVar2 = (func_745(uParam0, 74) - 1);
			iVar0 = func_908(uParam0, iVar0, iVar1, iVar2, 0);
			func_608(uParam0, 74, iVar0, 0);
			break;
		case 3:
			iVar0 = func_331(uParam0, 268);
			iVar0 = func_908(uParam0, iVar0, func_331(uParam0, 269), func_331(uParam0, 270), 0);
			func_756(uParam0, iVar0);
			iVar0 = func_331(uParam0, 264);
			iVar0 = func_908(uParam0, iVar0, func_331(uParam0, 265), func_331(uParam0, 266), 0);
			func_755(uParam0, iVar0);
			iVar0 = func_331(uParam0, 261);
			iVar2 = _databinding_get_array_count(&(uParam0->f_891[262]));
			iVar0 = func_908(uParam0, iVar0, 0, iVar2, 0);
			func_754(uParam0, iVar0);
			break;
		case 87:
			iVar0 = func_331(uParam0, 268);
			iVar0 = func_908(uParam0, iVar0, func_331(uParam0, 269), func_331(uParam0, 270), 0);
			func_756(uParam0, iVar0);
			break;
		case 86:
			iVar0 = func_331(uParam0, 264);
			iVar0 = func_908(uParam0, iVar0, func_331(uParam0, 265), func_331(uParam0, 266), 0);
			func_755(uParam0, iVar0);
			break;
		case 85:
			iVar0 = func_331(uParam0, 261);
			iVar2 = _databinding_get_array_count(&(uParam0->f_891[262]));
			iVar0 = func_908(uParam0, iVar0, 0, iVar2, 0);
			func_754(uParam0, iVar0);
			break;
		case 26:
			break;
		case 6:
			func_108(uParam0, &(uParam0->f_1193), &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), uParam0->f_615, uParam0->f_614, 1, 0, 1);
			func_107(uParam0, &(uParam0->f_1193), uParam0->f_614, uParam0->f_615, 0);
			func_114(4, 0, 16, uParam0->f_615, 0);
			func_605(uParam0, 1);
			break;
		case 17:
			iVar0 = func_331(uParam0, 89);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_30), 831873862, 0, 1);
			uParam0->f_1193.f_474.f_29 = iVar0;
			func_751(uParam0, 89, iVar0);
			break;
		case 16:
			iVar0 = func_331(uParam0, 84);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_28), 1364455116, 0, 1);
			uParam0->f_1193.f_474.f_27 = iVar0;
			func_751(uParam0, 84, iVar0);
			break;
		case 12:
			iVar0 = func_331(uParam0, 64);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_34), -1389899508, 0, 1);
			uParam0->f_1193.f_474.f_33 = iVar0;
			func_751(uParam0, 64, iVar0);
			break;
		case 13:
			iVar0 = func_331(uParam0, 69);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_36), 799607560, 0, 1);
			uParam0->f_1193.f_474.f_35 = iVar0;
			func_751(uParam0, 69, iVar0);
			break;
		case 14:
			iVar0 = func_331(uParam0, 74);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_38), 636446122, 0, 1);
			uParam0->f_1193.f_474.f_37 = iVar0;
			func_751(uParam0, 74, iVar0);
			break;
		case 15:
			iVar0 = func_331(uParam0, 79);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_32), 949000652, 0, 1);
			uParam0->f_1193.f_474.f_31 = iVar0;
			func_751(uParam0, 79, iVar0);
			break;
		case 11:
			break;
		case 10:
			break;
		case 52:
			break;
	}
}

void func_783(var uParam0)
{
	if (uParam0->f_649.f_231 == 74)
	{
		iVar0 = func_331(uParam0, 103);
		uParam0->f_1193.f_474.f_23 = iVar0;
	}
	else if (uParam0->f_649.f_231 == 77)
	{
		iVar0 = func_331(uParam0, 257);
		uParam0->f_1193.f_474.f_24 = iVar0;
	}
	else
	{
		return;
	}
	func_608(uParam0, 74, iVar0, 0);
	func_608(uParam0, 77, iVar0, 0);
}

void func_784(var uParam0, int iParam1)
{
	if (!uParam0->f_1193.f_474.f_101.f_16)
	{
		return;
	}
	switch (iParam1)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			func_910(uParam0, iParam1);
			uParam0->f_1193.f_474.f_101.f_16 = 0;
			break;
	}
}

void func_785(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 != 0)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = 2130295590;
	}
	switch (uParam0->f_649.f_46)
	{
		case 0:
			iVar0 = 1361833557;
			iVar1 = 1574464441;
			break;
		case 1:
			iVar0 = 2023080022;
			iVar1 = 1515800788;
			break;
		case 14:
			iVar0 = 1145866392;
			iVar1 = 1216803761;
			break;
		case 15:
			iVar0 = 714945534;
			iVar1 = 1762559596;
			break;
		case 12:
			iVar0 = 905496722;
			iVar1 = 235786205;
			break;
		case 13:
			iVar0 = 1316776880;
			iVar1 = -1498735544;
			break;
		case 19:
			iVar0 = -752143290;
			iVar1 = 98903087;
			break;
		case 20:
			iVar0 = -1914879697;
			iVar1 = 188769002;
			break;
		case 3:
			iVar0 = 2032639917;
			iVar1 = uParam0->f_1193.f_474.f_26;
			break;
		case 5:
			iVar0 = 1733294482;
			iVar1 = uParam0->f_1193.f_474.f_34;
			break;
		case 6:
			iVar0 = -861774631;
			iVar1 = uParam0->f_1193.f_474.f_36;
			break;
		case 7:
			iVar0 = 1304967911;
			iVar1 = uParam0->f_1193.f_474.f_38;
			break;
		case 8:
			iVar0 = -104658793;
			iVar1 = uParam0->f_1193.f_474.f_32;
			break;
		case 9:
			iVar0 = 1391930039;
			iVar1 = uParam0->f_1193.f_474.f_28;
			break;
		case 10:
			iVar0 = -111076651;
			iVar1 = uParam0->f_1193.f_474.f_30;
			break;
		default:
			break;
	}
	func_902(uParam0, 2, iVar0);
	func_902(uParam0, 3, iVar1);
}

void func_786(var uParam0)
{
	iVar1 = -1 + 1;
	while (iVar1 <= (286 - 1))
	{
		iVar3 = iVar1;
		iVar0 = func_911(iVar3);
		if (iVar0 != 0)
		{
			bVar2 = func_912(-2031856823, iVar0, 0, "");
			_databinding_write_data_bool(&(uParam0->f_891[iVar3]), func_913(uParam0, iVar3, bVar2));
		}
		iVar1++;
	}
}

void func_787(var uParam0, int iParam1, int iParam2, int iParam3)
{
	Var6.f_2 = -1;
	Var6.f_13 = 1065353216;
	Var6.f_14 = 1065353216;
	switch (iParam1)
	{
		case 53:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[171])) - 1);
			iVar0 = 172;
			iVar3 = 2044935932;
			break;
		case 54:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[174])) - 1);
			iVar0 = 175;
			iVar3 = -257537884;
			break;
		case 55:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[177])) - 1);
			iVar0 = 178;
			iVar3 = -902256582;
			break;
		case 56:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[180])) - 1);
			iVar0 = 181;
			iVar3 = 466962332;
			break;
		case 57:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[183])) - 1);
			iVar0 = 184;
			iVar3 = 1569204576;
			break;
		case 58:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[186])) - 1);
			iVar0 = 187;
			iVar3 = 1443912598;
			break;
		case 59:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[189])) - 1);
			iVar0 = 190;
			iVar3 = 1658889749;
			break;
		case 60:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[192])) - 1);
			iVar0 = 193;
			iVar3 = 1403563071;
			break;
		case 61:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[195])) - 1);
			iVar0 = 196;
			iVar3 = 1648363471;
			break;
		case 62:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[198])) - 1);
			iVar0 = 199;
			iVar3 = -1126672236;
			break;
		case 63:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[201])) - 1);
			iVar0 = 202;
			iVar3 = 757404833;
			break;
		case 67:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[213])) - 1);
			iVar0 = 214;
			iVar3 = -173657629;
			break;
		case 69:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[222])) - 1);
			iVar0 = 223;
			iVar3 = -1253870904;
			break;
		case 65:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[204])) - 1);
			iVar0 = 205;
			iVar3 = -1074654442;
			break;
		case 64:
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[207])) - 1);
			iVar0 = 208;
			bVar4 = true;
			if (iParam3 == -1)
			{
				func_607(uParam0, 70, &(uParam0->f_1193.f_474.f_100));
				func_604(uParam0, 70, 1);
				iParam3 = uParam0->f_1193.f_474.f_100;
			}
			iVar5 = 403633317;
			iVar3 = 1981135023;
			break;
		case 70:
			bVar4 = true;
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[207])) - 1);
			iVar0 = 208;
			iVar5 = 403633317;
			iVar3 = 1981135023;
			break;
		case 66:
			bVar4 = true;
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[210])) - 1);
			iVar0 = 211;
			if (iParam3 == -1)
			{
				func_607(uParam0, 72, &(uParam0->f_1193.f_474.f_98));
				func_604(uParam0, 72, 1);
				iParam3 = uParam0->f_1193.f_474.f_98;
			}
			iVar5 = -346051150;
			iVar3 = -1261431414;
			break;
		case 72:
			bVar4 = true;
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[210])) - 1);
			iVar0 = 211;
			iVar5 = -346051150;
			iVar3 = -1261431414;
			break;
		case 68:
			bVar4 = true;
			iVar2 = (_databinding_get_array_count(&(uParam0->f_891[59])) - 1);
			iVar0 = 60;
			if (iParam3 == -1)
			{
				iParam3 = uParam0->f_1193.f_474.f_24;
			}
			iVar5 = -818558948;
			iVar3 = 1466947264;
			break;
	}
	iVar24 = func_331(uParam0, iVar0);
	iVar24 = (iVar24 + iParam2);
	func_894(&iVar24, iVar2);
	func_914(uParam0, iParam2, iParam1, &iVar24, iVar2);
	func_329(uParam0, 64);
	func_778(uParam0);
	if (bVar4)
	{
		iVar25 = func_915(uParam0, iVar24, iParam3, iVar5, iVar3);
	}
	else
	{
		iVar25 = func_916(uParam0, iVar24, iVar3);
	}
	func_453(&Var6, iVar25, 0, 1, 6);
	if (func_395(iVar25) != 0)
	{
		func_511(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), Var6.f_17);
	}
	else
	{
		func_917(uParam0, iParam1, &(Var6.f_13), &(Global_1952637->f_1058.f_9));
		func_512(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), &Var6);
	}
	func_751(uParam0, iVar0, iVar24);
	func_753(uParam0, iParam1, iVar24);
	func_114(4, 0, 17, uParam0->f_615, 0);
}

void func_788(var uParam0)
{
	uParam0->f_1193.f_474.f_9 = func_331(uParam0, 44);
	fVar0 = func_909(uParam0->f_1193.f_474.f_9, 18, 60);
	iVar1 = func_111(&(Global_1952637->f_1058.f_9), 299749022);
	if (iVar1 <= -1)
	{
		return;
	}
	Global_1952637->f_1058.f_9[iVar1]->f_13 = fVar0;
	func_112(&(Global_1952637->f_1058), Global_1952637->f_1058.f_9[iVar1], 0);
	func_114(4, 0, 0, uParam0->f_615, 0);
}

void func_789(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 17:
			iVar0 = func_331(uParam0, 89);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_17)
			{
				iVar0 = (iVar0 + iParam2);
			}
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[88])) - 1);
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_30), 831873862, 0, 1);
			uParam0->f_1193.f_474.f_29 = iVar0;
			func_751(uParam0, 89, iVar0);
			break;
		case 15:
			iVar0 = func_331(uParam0, 79);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_20)
			{
				iVar0 = (iVar0 + iParam2);
			}
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[78])) - 1);
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_32), 949000652, 0, 1);
			uParam0->f_1193.f_474.f_31 = iVar0;
			func_751(uParam0, 79, iVar0);
			break;
		case 14:
			iVar0 = func_331(uParam0, 74);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_21)
			{
				iVar0 = (iVar0 + iParam2);
			}
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[73])) - 1);
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_38), 636446122, 0, 1);
			uParam0->f_1193.f_474.f_37 = iVar0;
			func_751(uParam0, 74, iVar0);
			break;
		case 13:
			iVar0 = func_331(uParam0, 69);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_22)
			{
				iVar0 = (iVar0 + iParam2);
			}
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[68])) - 1);
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_36), 799607560, 0, 1);
			uParam0->f_1193.f_474.f_35 = iVar0;
			func_751(uParam0, 69, iVar0);
			break;
		case 16:
			iVar0 = func_331(uParam0, 84);
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[83])) - 1);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_18)
			{
				iVar0 = (iVar0 + iParam2);
			}
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_28), 1364455116, 0, 1);
			uParam0->f_1193.f_474.f_27 = iVar0;
			func_751(uParam0, 84, iVar0);
			break;
		case 12:
			iVar0 = func_331(uParam0, 64);
			if (iVar0 == 0 && !uParam0->f_1193.f_474.f_101.f_19)
			{
				iVar0 = (iVar0 + iParam2);
			}
			iVar1 = (_databinding_get_array_count(&(uParam0->f_891[63])) - 1);
			func_894(&iVar0, iVar1);
			func_295(uParam0, &(uParam0->f_1193), iVar0, &(uParam0->f_1193.f_474.f_34), -1389899508, 0, 1);
			uParam0->f_1193.f_474.f_33 = iVar0;
			func_751(uParam0, 64, iVar0);
			break;
	}
}

int func_790(int iParam0)
{
	return (iParam0 - 5);
}

void func_791(var uParam0)
{
	uParam0->f_2406 = func_325(uParam0->f_615);
}

bool func_792(var uParam0, int iParam1)
{
	return (uParam0->f_2366 && iParam1) != 0;
}

void func_793(var uParam0, int iParam1)
{
	uParam0->f_2366 = (uParam0->f_2366 || iParam1);
}

void func_794(var uParam0)
{
}

float func_795(var uParam0)
{
	return func_326(uParam0->f_2406);
}

void func_796(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		func_918(uParam0, 123, &(uParam0->f_1193.f_474.f_39[iParam1]));
	}
	if (iParam2 != -1)
	{
		func_918(uParam0, 124, &(uParam0->f_1193.f_474.f_39[iParam2]));
	}
}

void func_797(var uParam0, float fParam1, float fParam2)
{
	*fParam1 = func_920(func_919(uParam0, 123), 0f, 1f);
	*fParam2 = func_920(func_919(uParam0, 124), 0f, 1f);
}

void func_798(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_665(uParam0, iParam1, &iVar0, &iVar1);
	iParam2 = func_667(iParam2, iVar0, iVar1);
	if (bParam3)
	{
		fVar2 = func_909(iParam2, iVar1, iVar0);
	}
	else
	{
		fVar2 = func_909(iParam2, iVar0, iVar1);
	}
	func_918(uParam0, 123, fVar2);
}

void func_799(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_665(uParam0, iParam1, &iVar0, &iVar1);
	fVar2 = func_919(uParam0, 123);
	fVar2 = func_920(fVar2, 0f, 1f);
	if (bParam3)
	{
		*iParam2 = round(func_273(to_float(iVar1), to_float(iVar0), fVar2));
	}
	else
	{
		*iParam2 = round(func_273(to_float(iVar0), to_float(iVar1), fVar2));
	}
}

void func_800(var uParam0)
{
	if (uParam0->f_206 != -1)
	{
		uParam0->f_1193.f_474.f_101.f_23[uParam0->f_206] = &uParam0->f_1193.f_474.f_39[uParam0->f_206];
	}
	if (uParam0->f_207 != -1)
	{
		uParam0->f_1193.f_474.f_101.f_23[uParam0->f_207] = &uParam0->f_1193.f_474.f_39[uParam0->f_207];
	}
}

bool func_801(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

void func_802(int iParam0, int iParam1)
{
	Global_1952637->f_1794.f_1[iParam0] = iParam1;
	Global_1952637->f_1794.f_1[iParam0]->f_2 = 0;
}

bool func_803(int iParam0, int iParam1, int iParam2)
{
	if (func_183() == 2026485318)
	{
		switch (func_223(iParam0, 1))
		{
			case -1889597427:
				return true;
			case -1292426046:
				return true;
			case 1422688607:
				return true;
			case 389988485:
				return true;
			case -207860920:
			case 788010710:
				if (func_397(-55206167, func_59(1), -1990194462, 1, 0, 0) >= 5)
				{
					return true;
				}
				return false;
			default:
				break;
		}
		return false;
	}
	switch (func_223(iParam0, 1))
	{
		case -1889597427:
			return true;
		case -1292426046:
			return true;
		case 1422688607:
			return true;
		case 389988485:
			return true;
		case -450913544:
		case -207860920:
		case 788010710:
		case 1250092473:
			if (iParam0 == 16)
			{
				iVar0 = func_98(iParam1);
				if (iVar0 != 0)
				{
					return false;
				}
				if (func_434(iParam2) == 912453393 && !func_496(iParam2, 0))
				{
					return false;
				}
				if (func_434(iParam1) == -1740828670 || func_434(iParam1) == 344283346)
				{
					return false;
				}
			}
			else if (iParam0 == 18)
			{
				if (func_434(iParam2) != 912453393 || func_496(iParam2, 0))
				{
					return false;
				}
			}
			if (func_397(-55206167, func_59(1), -1990194462, 1, 0, 0) >= 5)
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

void func_804(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == 0)
	{
		func_635(uParam0, iParam1);
	}
	if (iParam3 != 0)
	{
		func_921(uParam0, iParam3);
	}
	if (iParam2 == -1)
	{
		return;
	}
	func_922(uParam0, iParam2);
	if (iParam2 >= 39)
	{
		return;
	}
	if (func_398(iParam2, 112))
	{
		func_921(uParam0, 2);
	}
	else if (func_398(iParam2, 8))
	{
		func_921(uParam0, 4);
	}
	if (func_803(iParam2, 0, 0))
	{
		func_921(uParam0, 1);
	}
}

bool func_805(int iParam0, int iParam1, int iParam2, struct<4> Param3, bool bParam7)
{
	if (iParam0 == 0)
	{
		iParam0 = &Global_1952637->f_83[iParam2];
	}
	if (iParam1 == 0)
	{
		iParam1 = &Global_1952637->f_83[iParam2];
	}
	if (!func_923(iParam2))
	{
		if (bParam7)
		{
			return iParam0 == iParam1;
		}
		return true;
	}
	if (iParam1 == &Global_1952637->f_83[iParam2])
	{
		if (func_397(&(Global_1952637->f_83[iParam2]), Param3, Global_1952637->f_83[iParam2]->f_9, 1, 1, 0) > 0)
		{
			return func_924(&Param3, Global_1952637->f_83[iParam2]->f_9, 1) <= 1;
		}
		else if (func_924(&Param3, Global_1952637->f_83[iParam2]->f_9, 1) > 0)
		{
			return false;
		}
	}
	return iParam0 == iParam1;
}

void func_806(var uParam0, int iParam1, int iParam2)
{
	if (func_925(iParam1))
	{
		return;
	}
	iVar0 = func_98(iParam2);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == -989364962)
	{
		func_804(uParam0, 0, -1, 64);
		func_542(Global_1952637->f_1794.f_1[iParam1], 32, 6);
	}
	else
	{
		func_804(uParam0, 0, -1, 16);
		func_542(Global_1952637->f_1794.f_1[iParam1], 8, 6);
	}
}

void func_807(var uParam0, var uParam1, struct<4> Param2)
{
	if (!func_809(*uParam1, 16) && !func_809(*uParam1, 64))
	{
		return;
	}
	iVar0 = 34;
	if (func_435(uParam0->f_1[iVar0], 16) || !func_435(uParam0->f_1[iVar0], 40))
	{
		if (!func_435(uParam0->f_1[iVar0], 8))
		{
			func_804(uParam1, 1, iVar0, 36);
			return;
		}
		else if (!func_435(uParam0->f_1[iVar0], 32))
		{
			func_804(uParam1, 1, iVar0, 132);
		}
	}
	if (func_809(*uParam1, 16))
	{
		iVar1 = 16;
		if (func_435(uParam0->f_1[iVar1], 16) || !func_435(uParam0->f_1[iVar1], 8))
		{
			iVar1 = 20;
			if (func_435(uParam0->f_1[iVar1], 16) || !func_435(uParam0->f_1[iVar1], 8))
			{
				func_804(uParam1, 1, iVar1, 36);
				return;
			}
		}
		iVar2 = func_926(&(uParam0->f_1[iVar1]), -1044137471, Param2, 1);
		if (iVar2 == 0)
		{
			func_804(uParam1, 1, iVar1, 36);
			return;
		}
		iVar3 = func_926(&(uParam0->f_1[iVar0]), 884451223, Param2, 1);
		if (iVar3 == 0)
		{
			func_804(uParam1, 1, iVar0, 36);
			return;
		}
		if (!func_927(iVar2, iVar3, uParam0))
		{
			func_804(uParam1, 1, 98, 36);
			return;
		}
	}
	else if (func_809(*uParam1, 64))
	{
		iVar4 = func_926(&(uParam0->f_1[iVar0]), -999503751, Param2, 1);
		if (!func_928(iVar4, uParam0, 1572864, 1, 1))
		{
			func_804(uParam1, 1, 98, 132);
			return;
		}
	}
}

void func_808(var uParam0, var uParam1)
{
	iVar0 = &uParam0->f_1[10];
	if (!func_99(iVar0, 1584357097))
	{
		return;
	}
	iVar1 = &uParam0->f_1[20];
	if (!func_929(iVar1, iVar0))
	{
		func_804(uParam1, 1, 10, 8);
	}
}

bool func_809(vector3 vParam0, int iParam3)
{
	return (vParam0.z && iParam3) != 0;
}

bool func_810(int iParam0, int iParam1, var uParam2)
{
	if (!func_230(iParam1, 0))
	{
		return false;
	}
	if (func_646(iParam1) != -1037537535)
	{
		return false;
	}
	if (func_158(64))
	{
		*uParam2 = 1313469825;
		return false;
	}
	iVar0 = func_434(iParam1);
	if (iVar0 == -999503751)
	{
		iVar1 = func_444(iParam1);
		if (iVar1 > -1 && !func_445(2, iVar1))
		{
			*uParam2 = 1164130596;
			return false;
		}
		return true;
	}
	if (iVar0 == -1044137471 || iVar0 == 884451223)
	{
		iVar5 = func_98(&(Global_1952637->f_1675.f_1[34]));
		iVar6 = func_98(iParam1);
		if (iVar5 != iVar6)
		{
			switch (iVar6)
			{
				case -1121443716:
					*uParam2 = -21042750;
					break;
				case 213239705:
					*uParam2 = -1908944186;
					break;
				case 56566085:
					*uParam2 = 568713409;
					break;
				case 1392205317:
					*uParam2 = 430829022;
					break;
				default:
					*uParam2 = 1676404845;
					break;
			}
			return false;
		}
		return true;
	}
	iVar7 = func_930(iParam1);
	if (iVar7 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar8 = func_496(iParam1, 1);
	if ((!bVar8 && !func_931(iParam1)) && _get_ped_component_category(iParam1, func_932(Global_1952637->f_1), true) == 0)
	{
		*uParam2 = 70662961;
		return false;
	}
	iVar2 = 34;
	iVar3 = &Global_1952637->f_1675.f_1[iVar2];
	if (func_99(Global_1952637->f_1675, -166674229) || func_99(iVar3, -166674229))
	{
		switch (iVar3)
		{
			case -1574602287:
			case -1494222502:
			case -46508956:
			case 446164354:
				if (func_398(func_333(iVar7, 1), 49152))
				{
				}
				else
				{
					*uParam2 = 1259720784;
					return false;
					*uParam2 = 1259720784;
					return false;
				}
				if ((func_98(&(Global_1952637->f_1675.f_1[34])) != 0 && func_398(func_333(iVar7, 1), 1572864)) && !func_925(func_333(iVar7, 1)))
				{
					*uParam2 = 1676404845;
					return false;
				}
				iVar9 = iParam1;
				switch (iVar7)
				{
					case 1108822547:
						iVar2 = 1;
						iVar3 = &Global_1952637->f_1675.f_1[iVar2];
						if (func_496(iParam1, 0))
						{
						}
						else
						{
							if (iVar0 == 119907797 && !func_933())
							{
								*uParam2 = 1625111878;
								return false;
							}
							else if (iVar0 == 2086043523 && func_99(iVar3, -93469181))
							{
								*uParam2 = 1625111878;
								return false;
							}
							Jump @3562; //curOff = 785
							if (func_496(iParam1, 0))
							{
							}
							else
							{
								iVar3 = &Global_1952637->f_1675.f_1[1];
								if (func_99(iParam1, -1446529222) && func_99(iVar3, -93469181))
								{
									*uParam2 = 1625111878;
									return false;
								}
								Jump @3562; //curOff = 857
								if (bVar8)
								{
								}
								else
								{
									iVar2 = 20;
									iVar3 = &Global_1952637->f_1675.f_1[iVar2];
									if (&Global_1952637->f_1675.f_1[iVar2] != &Global_1952637->f_83[iVar2] && func_99(iVar3, 675650051))
									{
										*uParam2 = 1549351713;
										return false;
									}
									Jump @3562; //curOff = 942
									if (bVar8)
									{
									}
									else
									{
										iVar2 = 26;
										iVar3 = &Global_1952637->f_1675.f_1[iVar2];
										if (func_99(iVar3, -1230785684))
										{
											*uParam2 = 47765588;
											return false;
										}
										Jump @3562; //curOff = 998
										iVar2 = 16;
										if (bVar8)
										{
										}
										else
										{
											if (_get_ped_component_category(iVar9, _get_metaped_type(iParam0), true) == 2056714954)
											{
												if ((_is_metaped_using_component(iParam0, -1455751347) || 1882579758 == func_434(&(Global_1952637->f_1675.f_1[iVar2]))) || func_99(&(Global_1952637->f_1675.f_1[iVar2]), 1872585553))
												{
													*uParam2 = 111371848;
													return false;
												}
												if (&Global_1952637->f_1675.f_1[iVar2] == &Global_1952637->f_83[iVar2])
												{
													*uParam2 = -881148989;
													return false;
												}
											}
											*uParam2 = func_934(iParam1);
											if (*uParam2 != 0)
											{
												return false;
											}
											Jump @3562; //curOff = 1175
											if (bVar8)
											{
											}
											else
											{
												iVar2 = 34;
												iVar3 = &Global_1952637->f_1675.f_1[iVar2];
												iVar4 = func_434(iVar3);
												if (iVar4 == 684307653)
												{
													if (func_99(iParam1, -2093434733))
													{
														*uParam2 = 2122529806;
														return false;
													}
												}
												else if (iVar4 == -1740828670)
												{
													if (func_99(iParam1, -2093434733))
													{
														*uParam2 = -1766461558;
														return false;
													}
												}
												else if (iVar4 == 344283346)
												{
													if (func_99(iParam1, -2093434733))
													{
														*uParam2 = -1300741816;
														return false;
													}
												}
												else if (iVar4 == 2047428024)
												{
													if (func_99(iVar3, -1473580422) && func_99(iParam1, 1469783911))
													{
														*uParam2 = -1034452951;
														return false;
													}
												}
												Jump @3562; //curOff = 1382
												if (bVar8)
												{
												}
												else
												{
													iVar2 = 36;
													if (&Global_1952637->f_1675.f_1[iVar2] == &Global_1952637->f_83[iVar2])
													{
														*uParam2 = -279809718;
														return false;
													}
													if (func_99(&(Global_1952637->f_1675.f_1[iVar2]), -1278198125) || _is_metaped_using_component(iParam0, -1968556728))
													{
														*uParam2 = -849690042;
														return false;
													}
													iVar2 = 35;
													if (func_99(&(Global_1952637->f_1675.f_1[iVar2]), -1278198125))
													{
														*uParam2 = 187275271;
														return false;
													}
													Jump @3562; //curOff = 1530
													iVar2 = 34;
													if (bVar8)
													{
														iVar2 = 18;
														iVar4 = func_434(&(Global_1952637->f_1675.f_1[iVar2]));
														if (func_183() == 24043185 && iVar4 != 912453393)
														{
															iVar4 = func_434(&(Global_1952637->f_1675.f_1[34]));
															if (iVar4 != -1740828670 && iVar4 != 344283346)
															{
																*uParam2 = -1394918619;
																return false;
															}
														}
													}
													else
													{
														iVar2 = 34;
														if (func_99(iParam1, 525391395))
														{
															iVar4 = func_434(&(Global_1952637->f_1675.f_1[iVar2]));
															if (iVar4 == 684307653)
															{
																*uParam2 = 2122529806;
																return false;
															}
															else if (((iVar4 == -1740828670 || iVar4 == 344283346) && !func_440(32)) && !func_440(64))
															{
																*uParam2 = -1145758649;
																return false;
															}
														}
														Jump @3562; //curOff = 1772
														if (bVar8)
														{
														}
														else
														{
															iVar2 = 34;
															iVar4 = func_434(&(Global_1952637->f_1675.f_1[iVar2]));
															if (iVar4 == 502936876)
															{
																if (func_183() == 24043185)
																{
																	*uParam2 = 941430645;
																}
																else
																{
																	*uParam2 = 395269726;
																}
																return false;
															}
															else if ((iVar4 == -1740828670 || iVar4 == 344283346) || iVar4 == 1759215194)
															{
																if (func_183() == 24043185)
																{
																	*uParam2 = -555808962;
																}
																else
																{
																	*uParam2 = 926463984;
																}
																return false;
															}
															iVar2 = 16;
															if (func_99(&(Global_1952637->f_1675.f_1[iVar2]), 1467402774))
															{
																*uParam2 = -1856499748;
																return false;
															}
															iVar2 = 18;
															if (912453393 == func_434(&(Global_1952637->f_1675.f_1[iVar2])))
															{
																*uParam2 = 710806085;
																return false;
															}
															Jump @3562; //curOff = 2010
															if (bVar8)
															{
																if (func_183() == 24043185)
																{
																	if (iVar0 == 698653232)
																	{
																	}
																	else
																	{
																		iVar2 = 16;
																		if (&Global_1952637->f_1675.f_1[iVar2] == &Global_1952637->f_83[iVar2] && -1740828670 != func_434(&(Global_1952637->f_1675.f_1[34])))
																		{
																			iVar3 = &Global_1952637->f_1675.f_1[18];
																			if (func_434(iVar3) == 912453393)
																			{
																				*uParam2 = -181538616;
																			}
																			return false;
																		}
																		Jump @3562; //curOff = 2143
																		if (iVar0 == 912453393)
																		{
																			iVar2 = 34;
																			iVar4 = func_434(&(Global_1952637->f_1675.f_1[iVar2]));
																			if (iVar4 == 502936876)
																			{
																				*uParam2 = 704890504;
																				return false;
																			}
																			else if (iVar4 == 344283346)
																			{
																				*uParam2 = 2015320530;
																				return false;
																			}
																		}
																		else if (iVar0 == 698653232)
																		{
																			if (func_183() == 24043185)
																			{
																				iVar2 = 16;
																				if (&Global_1952637->f_1675.f_1[iVar2] == &Global_1952637->f_83[iVar2])
																				{
																					*uParam2 = 1896165938;
																					return false;
																				}
																			}
																			iVar2 = 34;
																			iVar4 = func_434(&(Global_1952637->f_1675.f_1[iVar2]));
																			if (iVar4 == 502936876)
																			{
																				if (func_183() == 24043185)
																				{
																					*uParam2 = 138180881;
																				}
																				else
																				{
																					*uParam2 = 1154413121;
																				}
																				return false;
																			}
																			else if (iVar4 == -1740828670)
																			{
																				*uParam2 = -129002708;
																				return false;
																			}
																			else if (iVar4 == 344283346)
																			{
																				*uParam2 = 1575354450;
																				return false;
																			}
																		}
																		Jump @3562; //curOff = 2411
																		if (bVar8)
																		{
																		}
																		else
																		{
																			iVar2 = 34;
																			iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																			if (func_434(iVar3) == 344283346)
																			{
																				*uParam2 = -1300741816;
																				return false;
																			}
																			else if (func_99(iParam1, 1090938458) && func_99(iVar3, 475297062))
																			{
																				if (684307653 == func_434(iVar3))
																				{
																					*uParam2 = 2122529806;
																					return false;
																				}
																				return false;
																			}
																			else if (func_99(iParam1, 353024991) && func_434(iVar3) == 502936876)
																			{
																				*uParam2 = 1584791888;
																				return false;
																			}
																			else if (iVar0 == 1868067663 && func_99(iVar3, -1016441646))
																			{
																				*uParam2 = -1034452951;
																				return false;
																			}
																			if (iVar0 == 294388917)
																			{
																				iVar2 = 34;
																				iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																				iVar4 = func_434(iVar3);
																				if (iVar4 == -1740828670)
																				{
																					*uParam2 = 891289965;
																					return false;
																				}
																				else if (iVar4 == 344283346)
																				{
																					*uParam2 = -2039253945;
																					return false;
																				}
																			}
																			Jump @3562; //curOff = 2702
																			if (bVar8)
																			{
																			}
																			else
																			{
																				iVar2 = 34;
																				iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																				if (func_434(iVar3) == 344283346)
																				{
																					*uParam2 = -1300741816;
																					return false;
																				}
																				Jump @3562; //curOff = 2758
																				if (bVar8)
																				{
																				}
																				else
																				{
																					iVar2 = 20;
																					iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																					if (&Global_1952637->f_1675.f_1[iVar2] != &Global_1952637->f_83[iVar2] && func_99(iVar3, 1126863852))
																					{
																						*uParam2 = -1325278452;
																						return false;
																					}
																					iVar2 = 16;
																					iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																					if (&Global_1952637->f_1675.f_1[iVar2] != &Global_1952637->f_83[iVar2] && func_99(iVar3, 1126863852))
																					{
																						*uParam2 = -1379615715;
																						return false;
																					}
																					iVar2 = 34;
																					iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																					iVar4 = func_434(iVar3);
																					if (&Global_1952637->f_1675.f_1[iVar2] != &Global_1952637->f_83[iVar2])
																					{
																						if (iVar4 == 502936876)
																						{
																							*uParam2 = 1584791888;
																							return false;
																						}
																						else if (iVar4 == -1740828670)
																						{
																							*uParam2 = -1766461558;
																							return false;
																						}
																						else if (iVar4 == 344283346)
																						{
																							*uParam2 = -1300741816;
																							return false;
																						}
																					}
																					Jump @3562; //curOff = 3042
																					if (bVar8)
																					{
																					}
																					else
																					{
																						iVar2 = 26;
																						iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																						if (func_99(iVar3, 1016511012))
																						{
																							*uParam2 = 962109567;
																							return false;
																						}
																						Jump @3562; //curOff = 3098
																						if (bVar8)
																						{
																							if (func_397(-55206167, func_59(1), -1990194462, 1, 0, 0) < 5)
																							{
																								*uParam2 = 276744800;
																								return false;
																							}
																							iVar2 = 16;
																							if (1882579758 != func_434(&(Global_1952637->f_1675.f_1[iVar2])))
																							{
																								*uParam2 = -1976182073;
																								return false;
																							}
																						}
																						else
																						{
																							if (684307653 == func_434(iParam1))
																							{
																								iVar2 = 16;
																								if (func_99(&(Global_1952637->f_1675.f_1[iVar2]), 525391395))
																								{
																									*uParam2 = -1379615715;
																									return false;
																								}
																							}
																							Jump @3562; //curOff = 3243
																							if (bVar8)
																							{
																							}
																							else
																							{
																								iVar2 = 34;
																								iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																								iVar4 = func_434(iVar3);
																								if (iVar4 == 684307653)
																								{
																									*uParam2 = 2122529806;
																									return false;
																								}
																								else if (iVar4 == -1740828670)
																								{
																									*uParam2 = -1766461558;
																									return false;
																								}
																								else if (iVar4 == 344283346)
																								{
																									*uParam2 = -1300741816;
																									return false;
																								}
																								if (iVar0 == 1769055947)
																								{
																									switch (func_434(iVar3))
																									{
																										case 502936876:
																											*uParam2 = 1584791888;
																											return false;
																										case 2047428024:
																											if (func_99(iVar3, -1650340550))
																											{
																												*uParam2 = -1034452951;
																												return false;
																											}
																											break;
																									}
																									iVar2 = 36;
																									iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																									if (func_99(iVar3, -1650340550))
																									{
																										*uParam2 = -357399012;
																										return false;
																									}
																								}
																								else
																								{
																									iVar2 = 36;
																									if (&Global_1952637->f_1675.f_1[iVar2] == &Global_1952637->f_83[iVar2])
																									{
																										*uParam2 = -279809718;
																										return false;
																									}
																									iVar3 = &Global_1952637->f_1675.f_1[iVar2];
																									if (func_99(iVar3, 813132419))
																									{
																										*uParam2 = -357399012;
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
																	*uParam2 = 0;
																	return true;
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
				default:
					break;
		}
	}
}

bool func_811(var uParam0, int iParam1, struct<4> Param2)
{
	if (&uParam0->f_1[iParam1] == &Global_1952637->f_83[iParam1])
	{
		return false;
	}
	if (&uParam0->f_1[iParam1] == 0)
	{
		return false;
	}
	if (!func_435(uParam0->f_1[iParam1], 2) && func_435(Global_1952637->f_1556.f_1[iParam1], 2))
	{
		return false;
	}
	if (!func_398(iParam1, 112))
	{
		return true;
	}
	return func_935(uParam0, iParam1, Param2);
}

bool func_812(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (!func_230(iParam0, 0))
	{
		return false;
	}
	if (func_809(vParam2, 8) && func_99(iParam0, 343781202))
	{
		return false;
	}
	if (func_809(vParam2, 32) && func_98(iParam0) != 0)
	{
		return false;
	}
	if (((func_809(vParam2, 16) && func_398(iParam1, 1572864)) && !func_925(iParam1)) && func_98(iParam0) == 0)
	{
		return false;
	}
	if ((iParam1 == 10 && 119907797 == func_434(iParam0)) && func_99(&(Global_1952637->f_1556.f_1[iParam1]), 458991572))
	{
		return false;
	}
	if (((iParam0 == 1733464892 || iParam0 == 1326838792) || iParam0 == -230310728) || _get_ped_component_category(iParam0, iParam5, true) != 0)
	{
		return true;
	}
	return false;
}

void func_813()
{
	if (func_183() == 24043185)
	{
		Global_1952637->f_1556.f_1[0] = -1658511610;
		Global_1952637->f_1556.f_1[1] = &Global_1952637->f_83[1];
		Global_1952637->f_1556.f_1[2] = 928002221;
		Global_1952637->f_1556.f_1[3] = 959712255;
		Global_1952637->f_1556.f_1[4] = &Global_1952637->f_83[4];
		Global_1952637->f_1556.f_1[5] = &Global_1952637->f_83[5];
		Global_1952637->f_1556.f_1[6] = &Global_1952637->f_83[6];
		Global_1952637->f_1556.f_1[7] = &Global_1952637->f_83[7];
		Global_1952637->f_1556.f_1[8] = -1836208829;
		Global_1952637->f_1556.f_1[9] = -254962964;
		Global_1952637->f_1556.f_1[10] = &Global_1952637->f_83[10];
		Global_1952637->f_1556.f_1[11] = &Global_1952637->f_83[11];
		Global_1952637->f_1556.f_1[12] = &Global_1952637->f_83[12];
		Global_1952637->f_1556.f_1[13] = &Global_1952637->f_83[13];
		Global_1952637->f_1556.f_1[14] = &Global_1952637->f_83[14];
		Global_1952637->f_1556.f_1[15] = &Global_1952637->f_83[15];
		Global_1952637->f_1556.f_1[16] = -1929206624;
		Global_1952637->f_1556.f_1[17] = &Global_1952637->f_83[17];
		Global_1952637->f_1556.f_1[18] = &Global_1952637->f_83[18];
		Global_1952637->f_1556.f_1[19] = &Global_1952637->f_83[19];
		Global_1952637->f_1556.f_1[20] = &Global_1952637->f_83[20];
		Global_1952637->f_1556.f_1[21] = &Global_1952637->f_83[21];
		Global_1952637->f_1556.f_1[22] = &Global_1952637->f_83[22];
		Global_1952637->f_1556.f_1[23] = &Global_1952637->f_83[23];
		Global_1952637->f_1556.f_1[24] = &Global_1952637->f_83[24];
		Global_1952637->f_1556.f_1[25] = &Global_1952637->f_83[25];
		Global_1952637->f_1556.f_1[26] = &Global_1952637->f_83[26];
		Global_1952637->f_1556.f_1[27] = &Global_1952637->f_83[27];
		Global_1952637->f_1556.f_1[28] = &Global_1952637->f_83[28];
		Global_1952637->f_1556.f_1[29] = &Global_1952637->f_83[29];
		Global_1952637->f_1556.f_1[30] = &Global_1952637->f_83[30];
		Global_1952637->f_1556.f_1[31] = &Global_1952637->f_83[31];
		Global_1952637->f_1556.f_1[32] = &Global_1952637->f_83[32];
		Global_1952637->f_1556.f_1[33] = &Global_1952637->f_83[33];
		Global_1952637->f_1556.f_1[34] = -825441771;
		Global_1952637->f_1556.f_1[35] = &Global_1952637->f_83[35];
		Global_1952637->f_1556.f_1[36] = &Global_1952637->f_83[36];
		Global_1952637->f_1556.f_1[37] = &Global_1952637->f_83[37];
		Global_1952637->f_1556.f_1[38] = &Global_1952637->f_83[38];
		func_234();
		return;
	}
	Global_1952637->f_1556.f_1[0] = -251978256;
	Global_1952637->f_1556.f_1[1] = &Global_1952637->f_83[1];
	Global_1952637->f_1556.f_1[2] = 1864171073;
	Global_1952637->f_1556.f_1[3] = 712446626;
	Global_1952637->f_1556.f_1[4] = &Global_1952637->f_83[4];
	Global_1952637->f_1556.f_1[5] = &Global_1952637->f_83[5];
	Global_1952637->f_1556.f_1[6] = &Global_1952637->f_83[6];
	Global_1952637->f_1556.f_1[7] = &Global_1952637->f_83[7];
	Global_1952637->f_1556.f_1[8] = -162963160;
	Global_1952637->f_1556.f_1[9] = 174153218;
	Global_1952637->f_1556.f_1[10] = &Global_1952637->f_83[10];
	Global_1952637->f_1556.f_1[11] = &Global_1952637->f_83[11];
	Global_1952637->f_1556.f_1[12] = &Global_1952637->f_83[12];
	Global_1952637->f_1556.f_1[13] = &Global_1952637->f_83[13];
	Global_1952637->f_1556.f_1[14] = &Global_1952637->f_83[14];
	Global_1952637->f_1556.f_1[15] = &Global_1952637->f_83[15];
	Global_1952637->f_1556.f_1[16] = 1014798041;
	Global_1952637->f_1556.f_1[17] = &Global_1952637->f_83[17];
	Global_1952637->f_1556.f_1[18] = &Global_1952637->f_83[18];
	Global_1952637->f_1556.f_1[19] = &Global_1952637->f_83[19];
	Global_1952637->f_1556.f_1[20] = &Global_1952637->f_83[20];
	Global_1952637->f_1556.f_1[21] = &Global_1952637->f_83[21];
	Global_1952637->f_1556.f_1[22] = &Global_1952637->f_83[22];
	Global_1952637->f_1556.f_1[23] = &Global_1952637->f_83[23];
	Global_1952637->f_1556.f_1[24] = &Global_1952637->f_83[24];
	Global_1952637->f_1556.f_1[25] = &Global_1952637->f_83[25];
	Global_1952637->f_1556.f_1[26] = &Global_1952637->f_83[26];
	Global_1952637->f_1556.f_1[27] = &Global_1952637->f_83[27];
	Global_1952637->f_1556.f_1[28] = &Global_1952637->f_83[28];
	Global_1952637->f_1556.f_1[29] = &Global_1952637->f_83[29];
	Global_1952637->f_1556.f_1[30] = &Global_1952637->f_83[30];
	Global_1952637->f_1556.f_1[31] = &Global_1952637->f_83[31];
	Global_1952637->f_1556.f_1[32] = &Global_1952637->f_83[32];
	Global_1952637->f_1556.f_1[33] = &Global_1952637->f_83[33];
	Global_1952637->f_1556.f_1[34] = 1252725557;
	Global_1952637->f_1556.f_1[35] = &Global_1952637->f_83[35];
	Global_1952637->f_1556.f_1[36] = &Global_1952637->f_83[36];
	Global_1952637->f_1556.f_1[37] = &Global_1952637->f_83[37];
	Global_1952637->f_1556.f_1[38] = &Global_1952637->f_83[38];
	func_234();
}

void func_814(var uParam0, int iParam1, int iParam2)
{
	*Global_17411.f_55.f_644.f_33[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
}

void func_815(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (&Global_17411.f_55.f_644.f_33[iParam1] - (Global_17411.f_55.f_644.f_33[iParam1] && iParam0));
	}
}

void func_816(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_434(iParam0))
	{
		case -2061583405:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_99(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_474(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_230(iVar122, 0))
						{
							func_816(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_99(iParam0, 160827531))
			{
				bVar0 = func_936(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_937(0, iParam0);
	}
	if (bParam2)
	{
		func_938();
	}
	if (bParam1)
	{
		func_545(0, 0);
	}
}

void func_817(int iParam0)
{
	StringCopy(Global_17411.f_2625[iParam0], "", 64);
	func_815(4, iParam0, 6);
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_819(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_820(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_821(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_434(func_157(iVar0)) != 81053684 && !func_99(func_157(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_99(func_157(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_434(func_157(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_434(func_157(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_434(func_157(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_99(func_157(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_333(iVar0, 1);
	return true;
}

int func_822(int iParam0, int iParam1)
{
	iVar0 = func_658(0);
	func_505(&(Global_1952637->f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
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

void func_823(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

int func_824(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_183() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_246(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_98(Var1.f_4) != 0)
			{
			}
			else if (func_99(Var1.f_4, -166674229))
			{
			}
			else if (func_99(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_434(Var1.f_4);
				if (func_940(iParam2, func_939(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_825(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_941(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_941(uParam0->f_2[iVar0], 1))
				{
					func_226(uParam0->f_2[iVar0], 2, 6);
				}
				*Global_1952637->f_2897.f_35[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Global_1952637->f_2897.f_35[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_826(var uParam0, var uParam1)
{
	Var0 = func_658(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	if (!_0xed4413cee1bf142c(&Var0))
	{
		return;
	}
	while (_0xed4413cee1bf142c(&Var0))
	{
		if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_333(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1373051002))
			{
			}
			else if (&uParam0->f_1[iVar8] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8] = &Global_1952637->f_83[iVar8];
				uParam0->f_1[iVar8]->f_1 = 0;
				func_225(iVar8, 0);
			}
		}
	}
}

void func_827(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
	iVar0 = 10;
	iVar1 = func_434(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_99(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_99(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_99(&(uParam0->f_1[iVar0]), -1446529222) && func_99(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam1, -93469181)) && func_99(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_828(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1733464892)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
}

void func_829(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_496(iVar1, 0) && func_99(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_434(iVar1) == 2086043523) && func_99(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_830(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_434(iParam2))
	{
		case -525676072:
			func_942(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_943(uParam0, bParam1, iParam3);
			break;
	}
}

void func_831(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_434(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_225(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_434(iParam2) == 81053684 || func_99(iParam2, 160827531))
	{
		func_944(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_99(iParam2, -180472385) && !func_496(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	if (func_99(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_225(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_225(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_225(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_225(iVar0, iParam3);
		}
	}
}

void func_832(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_183() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_99(iParam2, 1872585553)) || func_434(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_496(&(uParam0->f_1[iVar0]), 0) && func_99(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_496(&(uParam0->f_1[iVar0]), 0) && func_99(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_434(iVar2) == 1759215194 && func_434(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_847(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam4);
	}
	else if (func_945(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_434(iVar2) == 912453393 && func_440(32))
		{
			iVar3 |= 1;
		}
		if (func_99(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_656(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam4);
			func_840(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_496(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_225(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_849(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_849(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_833(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_834(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_434(iParam2))
	{
		case 698653232:
			func_946(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_947(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_835(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_434(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_948(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_949(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_836(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_434(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_225(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_183() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_225(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_849(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_849(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_837(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

void func_838(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_950(99217379) && func_99(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_496(&(uParam0->f_1[iVar0]), 0) && func_99(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_839(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

void func_840(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_434(iParam2))
	{
		case 1759215194:
			func_951(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_952(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_953(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_954(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_955(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_956(uParam0, bParam1, iParam3);
			break;
	}
}

void func_841(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_434(iParam2))
	{
		case 1769055947:
			func_957(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_958(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_842(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_959(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_99(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_434(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	if ((func_99(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_434(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_99(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case -162963160:
			return 446835754;
		case -1082625149:
			return 149457079;
		case -1712838557:
			return -1066010669;
		case 1660566152:
			return -1701008351;
		case -1270325981:
			return 1675345564;
		case 1996808861:
			return 1376656129;
		case -1836208829:
			return 446835754;
		case -2133128738:
			return 149457079;
		case -1043395647:
			return -1066010669;
		case 743432389:
			return -1701008351;
		case -494121669:
			return 1675345564;
		case -792352338:
			return 1376656129;
		default:
			break;
	}
	return 0;
}

bool func_844()
{
	return (func_960(-1185145312, 0, 0, 0) > 0 && func_243(func_60(889965687, func_59(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_845(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_228(0);
	*uParam1 = { func_60(iParam0, func_668(0), iParam3, 0) };
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

bool func_846(int iParam0, int iParam1, int iParam2)
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

int func_847(int iParam0)
{
	func_505(&uVar1, 9044914, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar1);
	while (_0xed4413cee1bf142c(&uVar1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_848(int iParam0, int iParam1)
{
	iVar0 = func_434(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_434(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_99(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == -1789518572)
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == -275040139)
	{
		return iVar0 == 1882579758;
	}
	return false;
}

int func_849(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, 1))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_850(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_814(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

bool func_851(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
	}
	if (func_99(iParam0, -1285438911))
	{
		return true;
	}
	return false;
}

int func_852(int iParam0)
{
	iVar0 = func_444(iParam0);
	if (iVar0 > -1)
	{
		return iVar0;
	}
	return iVar0;
}

void func_853(int iParam0, var uParam1, var uParam2)
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

void func_854(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_855(int iParam0)
{
	if (func_706(iParam0))
	{
		return true;
	}
	else if (func_961(iParam0))
	{
		return true;
	}
	return false;
}

int func_856(int iParam0)
{
	return func_963(func_962(iParam0));
}

void func_857(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_856(1);
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

bool func_858()
{
	return (func_962(0) && func_962(1));
}

float func_859(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_856(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_17411.f_55.f_2439[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_860(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_861(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_856(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

void func_862(int iParam0, int iParam1, int iParam2)
{
	if (!func_706(iParam0))
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_856(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_50[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_50[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

bool func_863(int iParam0, int iParam1, float fParam2)
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
	_set_attribute_core_value(iParam0, func_964(iParam1), ceil(fParam2));
	return true;
}

void func_864(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_856(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_865(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_965(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_966(iParam1), fParam2, -1);
	}
}

void func_866(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_856(2);
	}
	uVar0 = Global_1296859->f_21;
	func_967(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_968(iParam0, uVar0, iParam3);
	}
}

void func_867(var uParam0)
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

int func_868(int* iParam0)
{
	return func_179(iParam0->f_1);
}

int func_869(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_213(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_870()
{
	if (!network_does_tunable_exist(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!network_access_tunable_int(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_871()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_872(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_873()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_874(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

void func_875(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_876(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam0)
			{
				case 13:
					return -1774209103;
				case 14:
					return -484847260;
				case 15:
					return -1044410704;
				case 16:
					return -2122972398;
				case 17:
					return -1218416922;
				case 18:
					return 2073788457;
				case 19:
					return -296360548;
				case 20:
					return -1731631915;
				case 21:
					return -1524512151;
				case 22:
					return 1196461768;
				case 23:
					return -520566046;
				case 24:
					return 1119358563;
				case 25:
					return -1986410890;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 13:
					return -1799196167;
				case 14:
					return 1662783149;
				case 15:
					return 1984378115;
				case 16:
					return 2146619054;
				case 17:
					return -394780741;
				case 18:
					return 1906218842;
				case 19:
					return -1535247080;
				case 20:
					return 1236393289;
				case 21:
					return -365616331;
				case 22:
					return -1026403216;
				case 23:
					return -1833674363;
				case 24:
					return 1073394707;
				case 25:
					return 468877771;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 13:
					return -264759998;
				case 14:
					return -25775681;
				case 15:
					return 1326174952;
				case 16:
					return 507375445;
				case 17:
					return 210193384;
				case 18:
					return 1952321776;
				case 19:
					return -195325719;
				case 20:
					return -1238749761;
				case 21:
					return -2107197527;
				case 22:
					return 1881412388;
				case 23:
					return 1668837153;
				case 24:
					return 1371392940;
				case 25:
					return -1941087738;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_877(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_878(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

void func_879(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_880(int iParam0, int iParam1)
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
			func_969((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_969(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_62(*Global_1900736->f_1[0]))
	{
		func_591(*Global_1900736->f_1[0], 3);
	}
}

int func_881(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_724(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_882(int iParam0)
{
	iVar0 = -1;
	if (func_970(&Var1, iParam0))
	{
		iVar0 = ((func_971() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_883(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_884(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_885(int iParam0, int iParam1)
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

bool func_886(int iParam0)
{
	iVar0 = func_972(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_887(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_888(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	if (!are_strings_equal(&(uParam1->f_1), &(uParam2->f_1)))
	{
		func_973(uParam0, 32);
	}
	if (uParam1->f_11 != uParam2->f_11)
	{
		func_973(uParam0, 1);
	}
	if (((((((uParam1->f_13 != uParam2->f_13 || uParam1->f_15 != uParam2->f_15) || uParam1->f_23 != uParam2->f_23) || uParam1->f_22 != uParam2->f_22) || uParam1->f_24 != uParam2->f_24) || uParam1->f_20 != uParam2->f_20) || uParam1->f_10 != uParam2->f_10) || uParam1->f_18 != uParam2->f_18)
	{
		func_973(uParam0, 2);
	}
	if (uParam1->f_16 != uParam2->f_16)
	{
		func_973(uParam0, 64);
	}
	if ((((((((((((((((((((uParam1->f_94 != uParam2->f_94 || uParam1->f_81 != uParam2->f_81) || uParam1->f_9 != uParam2->f_9) || uParam1->f_90 != uParam2->f_90) || uParam1->f_99 != uParam2->f_99) || uParam1->f_91 != uParam2->f_91) || uParam1->f_100 != uParam2->f_100) || uParam1->f_82 != uParam2->f_82) || uParam1->f_83 != uParam2->f_83) || uParam1->f_88 != uParam2->f_88) || uParam1->f_84 != uParam2->f_84) || uParam1->f_95 != uParam2->f_95) || uParam1->f_92 != uParam2->f_92) || uParam1->f_98 != uParam2->f_98) || uParam1->f_85 != uParam2->f_85) || uParam1->f_93 != uParam2->f_93) || uParam1->f_97 != uParam2->f_97) || uParam1->f_80 != uParam2->f_80) || uParam1->f_86 != uParam2->f_86) || uParam1->f_87 != uParam2->f_87) || uParam1->f_89 != uParam2->f_89)
	{
		func_973(uParam0, 4);
	}
	if (((((((((((((((uParam1->f_101.f_13 != uParam2->f_101.f_13 || uParam1->f_101.f_2 != uParam2->f_101.f_2) || uParam1->f_101.f_1 != uParam2->f_101.f_1) || uParam1->f_101.f_15 != uParam2->f_101.f_15) || uParam1->f_101.f_14 != uParam2->f_101.f_14) || uParam1->f_101.f_11 != uParam2->f_101.f_11) || uParam1->f_101.f_3 != uParam2->f_101.f_3) || uParam1->f_101.f_10 != uParam2->f_101.f_10) || uParam1->f_101.f_9 != uParam2->f_101.f_9) || uParam1->f_101.f_8 != uParam2->f_101.f_8) || uParam1->f_101.f_12 != uParam2->f_101.f_12) || uParam1->f_101.f_4 != uParam2->f_101.f_4) || uParam1->f_101.f_7 != uParam2->f_101.f_7) || uParam1->f_101.f_6 != uParam2->f_101.f_6) || uParam1->f_101 != uParam2->f_101) || uParam1->f_101.f_5 != uParam2->f_101.f_5)
	{
		func_973(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&uParam1->f_39[iVar0] != &uParam2->f_39[iVar0])
		{
			func_973(uParam0, 16);
		}
		else
		{
			iVar0++;
		}
	}
	return *uParam0 != 0;
}

int func_889(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_890(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (iParam3 < 0 || iParam3 >= func_974(uParam0))
	{
		return 0;
	}
	iVar0 = _get_metaped_type(iParam2);
	if (iVar0 == 4)
	{
		return 0;
	}
	_0x160921255327c591(iParam3, iParam1, iVar0, 1);
	return 1;
}

int func_891(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 < 0 || iParam2 >= func_974(uParam0))
	{
		return 0;
	}
	iVar0 = _get_metaped_type(iParam1);
	if (iVar0 == 4)
	{
		return 0;
	}
	iVar7 = func_975(uParam0, iParam3, (iParam2 - iParam4));
	Var1.f_2 = "Metaped_tint_Generic_clean";
	Var1.f_1 = "UIsw_flat_ck000";
	Var1.f_3 = iVar7;
	Var1.f_4 = iVar7;
	Var1.f_5 = iVar7;
	_0x646ed1a1d28487df(iParam2, &Var1);
	return 1;
}

void func_892(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_270(uParam0, func_976(uParam0, iParam1));
	_0x3bf0767cf33fcc88(&(uParam0->f_891[iParam1]));
	iVar0 = func_290(uParam0, iParam2, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_280(uParam0, iParam3, iVar2, 0);
		if (iVar1 == -960808083 && !func_977(uParam0, iParam1))
		{
		}
		else if (iVar1 == 0)
		{
		}
		else
		{
			_0x7fc60c94c83c5cd7(&(uParam0->f_891[iParam1]), iVar1, -1);
		}
		iVar2++;
	}
}

char* func_893()
{
	return "UNNAMED_CHARACTER";
}

void func_894(int iParam0, int iParam1)
{
	if (*iParam0 < 0)
	{
		*iParam0 = (iParam1 - absi(*iParam0)) + 1;
	}
	if (*iParam0 > iParam1)
	{
		*iParam0 = ((0 + absi((*iParam0 - iParam1))) - 1);
	}
}

void func_895(var uParam0, int iParam1, bool bParam2)
{
	func_270(uParam0, uParam0->f_647);
	if (!func_279(uParam0, 17571750, iParam1, 0))
	{
		return;
	}
	uParam0->f_648 = uParam0->f_642.f_1;
	func_607(uParam0, 8, &(uParam0->f_1193.f_474.f_10));
	func_608(uParam0, 8, uParam0->f_1193.f_474.f_10, bParam2);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_29, &(uParam0->f_1193.f_474.f_30), 831873862, bParam2, 0);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_31, &(uParam0->f_1193.f_474.f_32), 949000652, bParam2, 0);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_33, &(uParam0->f_1193.f_474.f_34), -1389899508, bParam2, 0);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_35, &(uParam0->f_1193.f_474.f_36), 799607560, bParam2, 0);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_37, &(uParam0->f_1193.f_474.f_38), 636446122, 0, 0);
	func_295(uParam0, &(uParam0->f_1193), uParam0->f_1193.f_474.f_27, &(uParam0->f_1193.f_474.f_28), 1364455116, bParam2, 0);
}

void func_896(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_270(uParam0, uParam0->f_647);
	iVar1 = func_290(uParam0, 17571750, 0, 0);
	if (!func_279(uParam0, 17571750, iParam1, 0))
	{
		return;
	}
	iVar2 = func_290(uParam0, 600320052, 0, 0);
	iVar0 = func_280(uParam0, 985932463, iParam2, 0);
	if (iVar0 == 0)
	{
	}
	if (!func_281(uParam0->f_615, iVar0, 0, -1889597427, 1, 1, bParam3, 1, 1, 1, 1))
	{
		return;
	}
	if (!func_449(&Var3, iVar0, _get_metaped_type(uParam0->f_615), 0, 6))
	{
		return;
	}
	func_506(&(Global_1952637->f_1058), Var3.f_2, Var3.f_3, Var3.f_4);
	Var12.f_2 = -1;
	Var12.f_13 = 1065353216;
	Var12.f_14 = 1065353216;
	if (func_978(&Var12, iVar0))
	{
		func_512(&(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), &Var12);
	}
	if (bParam4)
	{
		func_900(uParam0, iParam2);
		iVar30 = 0;
		while (iVar30 < Global_1952637->f_1058.f_6)
		{
			func_979(uParam0->f_1193.f_474.f_101, Global_1952637->f_1058.f_9[iVar30], &(Global_1952637->f_1675.f_1[8]), func_331(uParam0, 44));
			func_112(&(Global_1952637->f_1058), Global_1952637->f_1058.f_9[iVar30], 0);
			iVar30++;
		}
	}
	func_114(2, 112, 7, uParam0->f_615, 0);
	func_114(4, 0, 17, uParam0->f_615, 0);
}

void func_897(var uParam0, int iParam1, bool bParam2)
{
	func_270(uParam0, uParam0->f_647);
	iVar0 = func_280(uParam0, 602139475, iParam1, 0);
	if (iVar0 == 0)
	{
	}
	func_281(uParam0->f_615, iVar0, 0, 1780904876, 1, 1, 1, bParam2, 0, 1, 1);
}

void func_898(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_270(uParam0, uParam0->f_648);
	if (!func_279(uParam0, 696002461, iParam1, 0))
	{
		return;
	}
	if (iParam1 == &Global_1952637->f_83[1])
	{
		iVar0 = &Global_1952637->f_83[1];
	}
	else if (iParam1 == -960808083)
	{
		iVar0 = uParam0->f_1193.f_75;
	}
	else
	{
		iVar0 = func_280(uParam0, 867854846, iParam2, 0);
		if (iVar0 == 0)
		{
			iVar0 = &Global_1952637->f_83[1];
		}
	}
	func_283(iVar0, uParam0->f_615, 0, bParam3, !*uParam0);
}

void func_899(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar1 = func_980(uParam0, iParam1);
	func_270(uParam0, uParam0->f_648);
	if (iVar1 != &Global_1952637->f_83[4] && !func_279(uParam0, -1408486622, iParam1, 0))
	{
		return;
	}
	if (iVar1 == &Global_1952637->f_83[4])
	{
		iVar0 = &Global_1952637->f_83[4];
	}
	else if (iVar1 == -960808083)
	{
		iVar0 = uParam0->f_1193.f_76;
	}
	else if (iVar1 == 1733464892)
	{
		iVar0 = 1733464892;
	}
	else
	{
		iVar0 = func_280(uParam0, 1911250089, iParam2, 0);
		if (iVar0 == 0)
		{
			iVar0 = -598283164;
		}
	}
	func_284(iVar0, uParam0->f_615, 0, bParam3, !*uParam0);
}

void func_900(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_1193.f_474.f_11;
	iVar1 = _0xf47e33f8d2523825(&(uParam0->f_891[49]), iVar0);
	func_270(uParam0, uParam0->f_647);
	func_279(uParam0, 1430707226, iParam1, iVar1);
	iVar2 = func_280(uParam0, -1764170728, iVar1, 0);
	iVar3 = func_280(uParam0, -1679457187, iVar1, 0);
	func_281(uParam0->f_615, iVar2, 0, -1292426046, 0, 0, 0, 1, 1, 1, 0);
	func_281(uParam0->f_615, iVar3, 0, 1422688607, 0, 0, 0, 1, 1, 1, 0);
}

void func_901(var uParam0, int iParam1, bool bParam2)
{
	func_270(uParam0, uParam0->f_648);
	iVar0 = func_280(uParam0, -1142395683, iParam1, 0);
	if (iVar0 == 0)
	{
	}
	func_281(uParam0->f_615, iVar0, 0, 389988485, 1, 1, 1, bParam2, 0, 1, 1);
}

void func_902(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return;
	}
	_databinding_write_data_hash_string(&(uParam0->f_891[iParam1]), iParam2);
}

bool func_903(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(&(uParam0->f_891[iParam1])))
	{
		return false;
	}
	return _databinding_read_data_bool(&(uParam0->f_891[iParam1]));
}

char* func_904(var uParam0, bool bParam1)
{
	iVar0 = func_790(func_331(uParam0, 272));
	iVar1 = func_790(func_331(uParam0, 277));
	iVar2 = func_790(func_331(uParam0, 282));
	iVar3 = (2 - ((iVar0 + iVar1) + iVar2));
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	if (iVar3 > 0 && uParam0->f_649.f_46 == func_402(-1668600577))
	{
		*bParam1 = 0;
	}
	else if (iVar3 == 0 && uParam0->f_649.f_46 == func_402(-1668600577))
	{
		*bParam1 = 1;
	}
	else if (uParam0->f_649.f_46 != func_402(-1668600577))
	{
		*bParam1 = 0;
	}
	sVar4 = _create_var_string(2, "CHAR_CREATOR_ATTRIBUTES_POOL_AMOUNT", iVar3);
	return sVar4;
}

void func_905(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	func_981(uParam0, iParam1, sParam2, sParam3, sParam4, sParam5);
	func_796(uParam0, iParam6, iParam7);
	func_305(uParam0, 64);
	uParam0->f_206 = iParam6;
	uParam0->f_207 = iParam7;
}

void func_906(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7)
{
	func_981(uParam0, iParam1, sParam2, sParam3, sParam4, sParam5);
	func_798(uParam0, iParam1, iParam6, bParam7);
	func_305(uParam0, 64);
}

void func_907(var uParam0, char[4] cParam1, int iParam2, var uParam3, int iParam4)
{
	func_305(uParam0, 256);
	func_606(uParam0, 111, 1);
	func_769(uParam0, 112, cParam1);
	func_770(uParam0, iParam2);
	uVar0 = &uParam0->f_891[115];
	_0x3bf0767cf33fcc88(uVar0);
	uVar1 = &uParam0->f_891[114];
	_databinding_remove_data_entry(uVar1);
	uVar1 = _databinding_add_data_container(&(uParam0->f_891[110]), "Items");
	uParam0->f_891[114] = uVar1;
	func_982(uParam0, uVar1, uVar0, iParam4, uParam3);
}

int func_908(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar1 = iParam1;
	if (iParam3 == 1 && iParam2 == 0)
	{
		iParam3++;
	}
	while (iParam1 == iVar1)
	{
		iVar1 = func_291(iParam2, iParam3);
	}
	iVar0 = (iVar1 - iParam1);
	if (bParam4)
	{
		return iVar0;
	}
	return iVar1;
}

float func_909(int iParam0, int iParam1, int iParam2)
{
	return (to_float((iParam0 - iParam1)) / to_float((iParam2 - iParam1)));
}

void func_910(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			func_751(uParam0, 89, 0);
			break;
		case 9:
			func_751(uParam0, 84, 0);
			break;
		case 5:
			func_751(uParam0, 64, 0);
			break;
		case 8:
			func_751(uParam0, 79, 0);
			break;
		case 7:
			func_751(uParam0, 74, 0);
			break;
		case 6:
			func_751(uParam0, 69, 0);
			break;
	}
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			return 71430017;
		case 32:
			return -267405897;
		case 36:
			return -65905420;
		case 42:
			return 472821698;
		case 48:
			return -869135272;
		case 52:
			return -160178003;
		case 58:
			return -2116296359;
		case 62:
			return 722077081;
		case 67:
			return 589625125;
		case 72:
			return -385878856;
		case 77:
			return -593833138;
		case 82:
			return -2052983853;
		case 87:
			return 943504949;
		case 92:
			return -787534332;
		case 96:
			return 891059778;
		case 107:
			return 546392627;
		case 109:
			return -1883959066;
		default:
			break;
	}
	return 0;
}

bool func_912(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_983(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

bool func_913(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		return false;
	}
	switch (iParam1)
	{
		case 109:
			return uParam0->f_614 == -1029951690;
		default:
			break;
	}
	return bParam2;
}

void func_914(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam2)
	{
		case 55:
			iVar0 = 181;
			break;
		case 56:
			iVar0 = 178;
			iVar1 = 1;
			break;
		case 59:
			iVar0 = 196;
			iVar1 = 1;
			break;
		case 61:
			iVar0 = 190;
			iVar1 = 1;
			break;
		default:
			return;
	}
	iVar2 = func_331(uParam0, iVar0);
	if (iVar2 == 0 && iVar1 == 1)
	{
		return;
	}
	if (iParam2 == 55 && *iParam3 == 0)
	{
		*iParam3 = (*iParam3 + iParam1);
		func_894(iParam3, iParam4);
	}
	if (*iParam3 != iVar2)
	{
		return;
	}
	if (iParam1 == 1)
	{
		*iParam3++;
	}
	else if (iParam1 == -1)
	{
		*iParam3 = (*iParam3 - 1);
	}
	func_894(iParam3, iParam4);
}

int func_915(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_270(uParam0, uParam0->f_647);
	if (!func_279(uParam0, iParam3, iParam1, 0))
	{
		func_207(uParam0, 8);
	}
	iVar0 = func_280(uParam0, iParam4, iParam2, 0);
	if (iVar0 == 0)
	{
		func_207(uParam0, 8);
	}
	return iVar0;
}

int func_916(var uParam0, int iParam1, int iParam2)
{
	func_270(uParam0, uParam0->f_647);
	iVar0 = func_280(uParam0, iParam2, iParam1, 0);
	if (iVar0 == 0)
	{
		func_207(uParam0, 8);
	}
	return iVar0;
}

void func_917(var uParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 72:
			iVar0 = uParam0->f_1193.f_474.f_101.f_12;
			iVar1 = -768760704;
			break;
		case 70:
			iVar0 = uParam0->f_1193.f_474.f_101.f_14;
			iVar1 = -875805376;
			break;
		default:
			return;
	}
	iVar2 = func_111(uParam3, iVar1);
	if (iVar2 == -1)
	{
		if (!func_666(iVar1, &fVar4, 0))
		{
			fVar4 = 1f;
		}
		fVar3 = ((to_float(iVar0) * 0.01f) * fVar4);
	}
	else
	{
		fVar3 = (*uParam3)[iVar2]->f_13;
	}
	*uParam2 = fVar3;
}

void func_918(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return;
	}
	_databinding_write_data_float(&(uParam0->f_891[iParam1]), fParam2);
}

float func_919(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 286)
	{
		return -1f;
	}
	if (!_databinding_is_data_id_valid(&(uParam0->f_891[iParam1])))
	{
		return -1f;
	}
	return _0x5fe444eb67c70ad4(&(uParam0->f_891[iParam1]));
}

float func_920(float fParam0, float fParam1, float fParam2)
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

void func_921(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_922(var uParam0, int iParam1)
{
	if (*uParam0 != 0)
	{
		return;
	}
	uParam0->f_1 = iParam1 * 100;
}

bool func_923(int iParam0)
{
	switch (func_223(iParam0, 1))
	{
		case -1130352927:
			return true;
		case 1367443060:
			return func_183() == 2026485318;
		default:
			break;
	}
	return false;
}

int func_924(var uParam0, var uParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_228(bParam2), uParam0, uParam1);
}

bool func_925(int iParam0)
{
	return func_398(iParam0, 2097152);
}

int func_926(int iParam0, int iParam1, struct<4> Param2, bool bParam6)
{
	Var3.f_9 = -1591664384;
	iVar17 = func_98(iParam0);
	Var18 = { func_244(0, -1591664384, -1591664384, -1591664384, iParam1, iVar17, 0) };
	func_854(&Var18, Param2);
	if (!func_245(&Var18, &iVar0, &iVar1, bParam6))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_246(&Var3, iVar2, iVar0, iVar1))
		{
		}
		else if (func_929(Var3.f_4, iParam0))
		{
			func_247(iVar0);
			return Var3.f_4;
		}
		iVar2++;
	}
	func_247(iVar0);
	return 0;
}

int func_927(int iParam0, int iParam1, var uParam2)
{
	func_233(&(Global_1952637->f_1913), 0, 1, 1, 0);
	if (!func_474(&(Global_1952637->f_1913), iParam0, &bVar0, 0, 0, 0, 0, 0, 1, 8))
	{
		return 0;
	}
	if (!func_474(&(Global_1952637->f_1913), iParam1, &bVar0, 0, 0, 0, 0, 0, 1, 8))
	{
		return 0;
	}
	return func_984(&(Global_1952637->f_1913), bVar0, uParam2, 1572864, 1, 1);
}

int func_928(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_1675 == iVar1)
	{
		return 1;
	}
	func_233(&(Global_1952637->f_1913), 0, 1, 1, 0);
	if (!func_474(&(Global_1952637->f_1913), iVar1, &bVar0, 1, 0, 0, 0, 0, 1, 8))
	{
		return 0;
	}
	return func_984(&(Global_1952637->f_1913), bVar0, uParam1, iParam2, bParam3, iParam4);
}

bool func_929(int iParam0, int iParam1)
{
	iVar0 = func_658(0);
	func_505(&(Global_1952637->f_1043), iVar0, iParam0, 1373051002, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	return _0xed4413cee1bf142c(&(Global_1952637->f_1043));
}

int func_930(int iParam0)
{
	Var0 = { func_492(iParam0, 1, 0) };
	return func_493(Var0.f_4);
}

bool func_931(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
	}
	if (func_99(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	if (func_985(0, iParam0) != -1)
	{
		return 3;
	}
	return 0;
}

bool func_933()
{
	return !func_99(&(Global_1952637->f_1675.f_1[1]), 458991572);
}

int func_934(int iParam0)
{
	if (func_99(iParam0, -1303648999))
	{
		iVar0 = 1;
		iVar1 = &Global_1952637->f_1675.f_1[iVar0];
		if (func_99(iVar1, -93469181))
		{
			return 1625111878;
		}
		else
		{
			return 0;
		}
	}
	iVar0 = 20;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (&Global_1952637->f_1675.f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_434(iVar1) == 294388917)
		{
			return 733124611;
		}
		else if (func_99(iVar1, -1527414429))
		{
			return -1325278452;
		}
	}
	iVar0 = 18;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (&Global_1952637->f_1675.f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iVar1, -1527414429))
	{
		return -295714253;
	}
	return 0;
}

bool func_935(var uParam0, int iParam1, struct<4> Param2)
{
	iVar0 = func_243(Param2, Global_1952637->f_83[iParam1]->f_9, 1, -1);
	if (func_230(iVar0, 0))
	{
		return &uParam0->f_1[iParam1] == iVar0;
	}
	return false;
}

bool func_936(int iParam0, var uParam1, bool bParam2)
{
	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637->f_3334.f_26 <= 1)
	{
		Global_1952637->f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637->f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637->f_3334.f_26 - 1))
	{
		if (iParam0 == &Global_1952637->f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637->f_3334.f_26 - 1))
		{
			Global_1952637->f_3334[iVar0] = &Global_1952637->f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637->f_3334.f_26 = (Global_1952637->f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637->f_3334[Global_1952637->f_3334.f_26] = 0;
		func_986(iParam0, 1, bParam2);
	}
	return bVar1;
}

void func_937(bool bParam0, int iParam1)
{
	if (!func_230(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_987(iParam1, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_444(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_445(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_989(func_988(iVar7));
		}
		else
		{
			iVar8 = func_990(iParam1);
			if (func_230(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_991(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_444(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_445(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_989(func_988(iVar7));
		}
		else
		{
			iVar9 = func_990(iParam1);
			if (func_230(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_991(iParam1));
		}
	}
	sVar10 = func_521(_create_var_string(10, sVar3, sVar5), iVar6);
	func_992(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_938()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = &Global_1952637->f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637->f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637->f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637->f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637->f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637->f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637->f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637->f_3334.f_26;
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_940(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_941(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_942(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_99(iVar1, 160827531) || func_434(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

void func_943(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

void func_944(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_434(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

bool func_945(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_434(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

void func_946(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -1527414429)) && !func_99(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_99(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_225(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_225(iVar0, iParam3);
		}
	}
}

void func_947(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_99(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_225(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_434(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_225(iParam2, iParam3);
			}
		}
	}
}

void func_948(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_225(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_225(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_225(iVar0, iParam3);
			func_836(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -1527414429)) && !func_99(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_949(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_225(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_99(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

bool func_950(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_333(iParam0, 1)] != &Global_1952637->f_83[func_333(iParam0, 1)];
}

void func_951(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_225(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_225(iVar0, iParam1);
	}
}

void func_952(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_183() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_183() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_434(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_656(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_225(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_99(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_849(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_434(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_99(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_225(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_434(iVar1) == 1868067663 && func_99(iParam2, -1016441646))
		{
			func_993(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_225(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_434(&(uParam0->f_1[iVar0])))
	{
		func_225(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_434(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
}

void func_953(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_183() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_434(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_656(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_99(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_959(uParam0, iParam3, 1, 0);
		}
		else if (func_99(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_225(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iVar1, 1090938458)) && func_99(iParam2, 475297062))
	{
		func_993(uParam0, iVar0, iParam3);
	}
}

void func_954(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_225(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	if (func_183() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_656(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_99(iVar1, 353024991))
	{
		func_993(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_434(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
}

void func_955(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_434(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_434(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_225(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_225(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_99(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_959(uParam0, iParam3, 1, 0);
		}
		else if (func_99(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_956(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_993(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_99(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_959(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_225(iVar0, iParam2);
		}
	}
}

void func_957(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_225(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_225(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_99(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_434(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_225(iVar0, iParam3);
		}
	}
}

void func_958(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_99(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam3);
	}
}

void func_959(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_434(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_225(iVar0, iParam1);
	}
}

int func_960(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_994(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_228(bParam1), iParam0, iParam3);
}

bool func_961(int iParam0)
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

bool func_962(int iParam0)
{
	return func_459(&(Global_1956200->f_1565), iParam0, 1);
}

int func_963(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_964(int iParam0)
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

char* func_965(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_966(int iParam0)
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

void func_967(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_856(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_968(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_856(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_969(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_970(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_971()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_972(int iParam0)
{
	return func_995(iParam0) + 30;
}

void func_973(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_974(var uParam0)
{
	iVar0 = 0;
	bVar1 = is_ped_male(uParam0->f_615);
	iVar2 = 0;
	if (*uParam0)
	{
		if (bVar1)
		{
			iVar2 = 2026485318;
		}
		else
		{
			iVar2 = 24043185;
		}
	}
	iVar4 = -1;
	while (iVar4 <= (91 - 1))
	{
		iVar3 = iVar4;
		if (func_743(iVar3, iVar2))
		{
			iVar0 = (iVar0 + func_745(uParam0, iVar3));
		}
		iVar4++;
	}
	return iVar0;
}

int func_975(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 70:
			iVar0 = 1186160889;
			iVar1 = 1600442769;
			iVar2 = func_331(uParam0, 208);
			break;
		case 72:
			iVar0 = -1474502911;
			iVar1 = -312145083;
			iVar2 = func_331(uParam0, 211);
			break;
		default:
			return 0;
	}
	func_270(uParam0, func_746(uParam0, iParam1));
	if (!func_279(uParam0, iVar0, iVar2, 0))
	{
		func_207(uParam0, 8);
	}
	iVar3 = func_996(uParam0, iVar1, iParam2, 0);
	if (iVar3 == 0)
	{
		func_207(uParam0, 8);
	}
	return iVar3;
}

int func_976(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 251:
			return uParam0->f_648;
		case 98:
			return uParam0->f_648;
		case 83:
			return uParam0->f_648;
		case 68:
			return uParam0->f_648;
		case 73:
			return uParam0->f_648;
		case 78:
			return uParam0->f_648;
		case 63:
			return uParam0->f_648;
		case 88:
			return uParam0->f_648;
		default:
			break;
	}
	return uParam0->f_647;
}

bool func_977(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			return (*uParam0 && uParam0->f_1193.f_75 != 0);
		case 251:
			return (*uParam0 && uParam0->f_1193.f_76 != 0);
		case 83:
			return true;
		case 68:
			return true;
		case 73:
			return true;
		case 78:
			return true;
		case 63:
			return true;
		case 88:
			return true;
		default:
			break;
	}
	return false;
}

bool func_978(var uParam0, int iParam1)
{
	iVar0 = func_489(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	return func_453(uParam0, iVar0, 0, 1, 6);
}

void func_979(struct<16> Param0, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, int iParam64, int iParam65)
{
	if (!func_666(uParam63->f_17, &fVar1, iParam64))
	{
		fVar1 = 1f;
	}
	switch (uParam63->f_17)
	{
		case 1015239729:
			fVar0 = to_float(Param0.f_13);
			break;
		case -1180698265:
			fVar0 = to_float(Param0.f_1);
			break;
		case -487028314:
			fVar0 = to_float(Param0.f_2);
			break;
		case -340627321:
			fVar0 = to_float(Param0.f_15);
			break;
		case -875805376:
			fVar0 = to_float(Param0.f_14);
			break;
		case -2056583192:
			fVar0 = to_float(Param0.f_11);
			break;
		case 241235545:
			fVar0 = to_float(Param0.f_3);
			break;
		case 1285634184:
			fVar0 = to_float(Param0.f_8);
			break;
		case 12857284:
			fVar0 = to_float(Param0);
			break;
		case 1301555144:
			fVar0 = to_float(Param0.f_5);
			break;
		case 1858448324:
			fVar0 = to_float(Param0.f_6);
			break;
		case -768760704:
			fVar0 = to_float(Param0.f_12);
			break;
		case -2118203104:
		case -1811760631:
			fVar0 = 100f;
			break;
		case 299749022:
			fVar0 = (func_909(iParam65, 18, 60) * 100f);
			break;
		case 1827902148:
			return;
		case 1089431066:
			return;
		case -559080197:
			return;
	}
	uParam63->f_13 = ((fVar0 / 100f) * fVar1);
}

int func_980(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (func_257(uParam0, 128))
	{
		iVar0 = &Global_1952637->f_83[4];
	}
	return iVar0;
}

void func_981(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (func_997(uParam0, iParam1))
	{
		func_606(uParam0, 117, 0);
		func_606(uParam0, 118, 0);
		func_606(uParam0, func_998(iParam1), 0);
		return;
	}
	func_769(uParam0, 119, sParam3);
	func_769(uParam0, 120, sParam2);
	func_769(uParam0, 122, sParam4);
	func_769(uParam0, 121, sParam5);
	bVar0 = (is_string_null_or_empty(sParam4) && is_string_null_or_empty(sParam5));
	func_606(uParam0, 117, bVar0);
	func_606(uParam0, 118, !bVar0);
	func_606(uParam0, func_998(iParam1), 1);
}

void func_982(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (uParam4[iVar0])
		{
			StringCopy(&cVar1, "Item", 32);
			StringIntConCat(&cVar1, iVar0, 32);
			uVar13 = _databinding_add_data_container(uParam1, &cVar1);
			func_768(uParam0, uParam0->f_649.f_231, iVar0, &uVar5, &cVar9);
			_databinding_add_data_string(uVar13, "TextureDictionary", &uVar5);
			_databinding_add_data_string(uVar13, "Texture", &cVar9);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam2, iVar0, "color_palette_entry", uVar13);
		}
		iVar0++;
	}
}

bool func_983(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_999(iVar7);
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

int func_984(var uParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_223(iVar0, 1);
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (!func_398(iVar0, iParam3))
		{
		}
		else if (bParam1 && &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
		}
		else if (&uParam0->f_1[iVar0] == &uParam2->f_1[iVar0])
		{
		}
		else if (func_437(iVar0, 14))
		{
		}
		else if (func_435(uParam2->f_1[iVar0], 2) && &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
		}
		else
		{
			switch (iVar2)
			{
				case 1600962399:
				case 1742327865:
					Jump @254; //curOff = 196
					iVar1 = &uParam0->f_1[iVar0];
					if (iParam5 && func_1000(iVar1))
					{
					}
					else if (bParam4 && func_925(iVar0))
					{
					}
					else
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
		}

var func_985(int iParam0, int iParam1)
{
	iVar0 = func_1001(iParam0, 0, Global_1301323->f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1002(iParam0, iVar0);
}

int func_986(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_492(iParam0, bParam2, 0) };
	Var5 = { func_60(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_397(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return 0;
	}
	_0x9a113c660aea3832(func_228(bParam2), &Var5, iParam1);
	return 1;
}

bool func_987(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<8> func_988(int iParam0)
{
	if (func_445(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_636(iParam0)), 64);
	return cVar0;
}

char* func_989(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_990(int iParam0)
{
	iVar0 = func_1003(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_691(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_692(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_931(iVar14))
			{
				func_697(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_697(iVar11);
	}
	return 0;
}

int func_991(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1004(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_992(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1005(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_993(var uParam0, int iParam1, int iParam2)
{
	if (func_99(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_826(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_225(iParam1, iParam2);
	}
}

bool func_994(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_995(int iParam0)
{
	return iParam0 * 31;
}

int func_996(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_642.f_2 = iParam1;
	uParam0->f_642.f_3 = iParam2;
	uParam0->f_642.f_4 = iParam3;
	if (!_datafile_get_int(&uVar0, &(uParam0->f_642)))
	{
		return 0;
	}
	return uVar0;
}

bool func_997(var uParam0, int iParam1)
{
	iVar0 = func_1006(iParam1);
	if (((iVar0 != -1 && func_331(uParam0, iVar0) == 0) && iParam1 != 55) && iParam1 != 53)
	{
		return true;
	}
	return false;
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 56:
			return 238;
		case 57:
			return 240;
		case 58:
			return 241;
		case 59:
			return 242;
		case 60:
			return 239;
		case 62:
			return 243;
		case 63:
			return 244;
		case 64:
			return 245;
		case 65:
			return 246;
		case 66:
			return 247;
		default:
			break;
	}
	return -1;
}

int func_999(int iParam0)
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

int func_1000(int iParam0)
{
	switch (func_434(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case 119907797:
			return 1;
		case 1388798186:
			return 1;
		default:
			break;
	}
	if (func_99(iParam0, 160827531))
	{
		return 1;
	}
	return 0;
}

int func_1001(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1301323->f_84[iParam0][iVar0])
	{
		return func_1001(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1301323->f_84[iParam0][iVar0])
	{
		return func_1001(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_1002(int iParam0, int iParam1)
{
	return (*Global_1301323->f_84[iParam0])[iParam1]->f_1;
}

int func_1003(int iParam0)
{
	if (!func_230(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

int func_1004(int iParam0)
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

void func_1005(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 55:
			return 178;
		case 56:
			return 181;
		case 57:
			return 184;
		case 58:
			return 187;
		case 59:
			return 190;
		case 60:
			return 193;
		case 62:
			return 199;
		case 63:
			return 202;
		case 64:
			return 208;
		case 65:
			return 205;
		case 66:
			return 211;
		case 67:
			return 214;
		case 68:
			return 60;
		case 69:
			return 223;
		default:
			break;
	}
	return -1;
}

