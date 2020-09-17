void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_24 = -1;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_121 = 1;
	Var0.f_101 = Local_27.f_1;
	if (has_force_cleanup_occurred(523))
	{
		Var0.f_118 = 1;
		Var0.f_126 = 1;
		func_1(&Var0, Global_1913640);
	}
	if (func_2())
	{
		_0xed27560703f37258(Global_34);
	}
	Var0.f_108 = _create_anim_scene("lightrig@player_journal", 0, "plMain", false, true);
	load_anim_scene(Var0.f_108);
	Var0.f_116 = 0;
	if (get_game_timer() >= &Global_1913503 && get_game_timer() >= Global_17405)
	{
		Var0.f_93.f_4 = _get_scenario_point_ped_is_using(Global_34, false);
		Var0.f_116 = 1;
	}
	Global_1913503 = 0;
	Global_17407 = 0;
	Global_17408 = 0;
	Global_17410 = 0;
	if ((((get_game_timer() < Global_17388 || Var0.f_116) || (func_3() == 0 && func_4(&Global_1913502, 1224357681) == -1460119729)) || func_5(&Global_1913502, 566155764)) || (func_5(&Global_1913502, -1472964441) && func_6(&Global_1913502)))
	{
		Global_17407 = 1;
		Global_17408 = 1;
	}
	if (func_5(&Global_1913502, get_hash_key("CI_TAG_ITEM_DOCUMENT_HIDE_READ_PROMPT")))
	{
		Global_17410 = 1;
	}
	if (Global_1940311->f_10892 == 0 || get_game_timer() <= (3000 + Global_1940144->f_70.f_2))
	{
		Global_17407 = 1;
	}
	while (func_7(&Var0, Global_1913640))
	{
		if (func_5(Global_1913640[0], 566155764) || func_5(&Global_1913502, 566155764))
		{
			disable_control_action(2, -668070958, false);
		}
		Var0.f_104 = _get_item_interaction_from_ped(Global_34);
		if (((_does_anim_scene_exist(Var0.f_108) && _is_anim_scene_loaded(Var0.f_108, true, false)) && !_is_anim_scene_started(Var0.f_108, false)) && _0xa24c1d341c6e0d53(1, 0, 0))
		{
			set_anim_scene_origin(Var0.f_108, Global_35, get_entity_rotation(Global_34, 2), 2);
			attach_anim_scene_to_entity_preserving_location(Var0.f_108, Global_34, -1);
			start_anim_scene(Var0.f_108);
		}
		disable_control_action(0, -824104112, false);
		disable_control_action(0, 1663574939, false);
		disable_control_action(0, -620139643, false);
		disable_control_action(0, 440314811, false);
		disable_control_action(0, 2028806450, false);
		disable_control_action(0, 371916472, false);
		_0x8910c24b7e0046ec();
		if (_is_app_running(-605293197))
		{
			_0xc9caeaeec1256e54(382897689);
		}
		if (Var0.f_116)
		{
			func_8(&Var0, Global_1913640);
		}
		else
		{
			func_9(&Var0, Global_1913640);
		}
		func_10(&Var0, Global_1913640);
		wait(0);
	}
	func_1(&Var0, Global_1913640);
}

void func_1(var uParam0, var uParam1)
{
	if (func_11())
	{
	}
	else if (func_12() && !Global_1940311->f_8)
	{
		if (!_0x9e4ef615e307fbbe())
		{
			terminate_this_thread();
		}
		return;
	}
	if (_is_app_running(-605293197))
	{
		_close_app_by_hash(-605293197);
	}
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_15(uParam0, uParam1);
	func_16(uParam0);
	func_17(uParam0);
	if (uParam0->f_118)
	{
		func_18(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!(*uParam1)[0]->f_1)
		{
			func_19(0);
		}
		else
		{
			(*Global_1913674)[0]->f_1 = 4;
		}
		func_19(2);
		func_19(1);
		func_20(uParam1);
	}
	else
	{
		func_21(uParam0, uParam1);
	}
	if (!_0x9e4ef615e307fbbe())
	{
		terminate_this_thread();
	}
}

bool func_2()
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar0, true))
	{
		return false;
	}
	if (!_0xefc4303ddc6e60d3(iVar0))
	{
		return false;
	}
	iVar1 = _0xed1f514af4732258(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(iVar1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(iVar1))
	{
		return false;
	}
	return true;
}

int func_3()
{
	return Global_1572887->f_13;
}

int func_4(int iParam0, int iParam1)
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

bool func_5(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return func_24(func_23(iParam0), iParam1);
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

bool func_6(int iParam0)
{
	if (func_5(iParam0, 566155764))
	{
		return false;
	}
	if (func_5(iParam0, 2028734248))
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0, var uParam1)
{
	if (func_3() == 0 && func_25(0, 0))
	{
		return false;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	if (func_26(uParam0, uParam1) && (get_game_timer() >= Global_17388 || !func_27(&Global_1913502)))
	{
		uParam0->f_118 = 1;
		return false;
	}
	return true;
}

int func_8(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = _0x05a0100ea714db68(Global_34, 2120637577);
			if (does_entity_exist(uParam0->f_101))
			{
				func_29(uParam0, (*uParam1)[0]);
				func_30(uParam0, uParam1);
				func_31(uParam0, uParam1[0]);
				func_28(uParam0, uParam1);
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33(uParam1[0], uParam0->f_104))
			{
				func_34(uParam1[0]);
				func_35(uParam0, uParam1, 1);
				func_32(uParam0, 6);
			}
			break;
		case 6:
			func_36(uParam0, (*uParam1)[0]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39(uParam1[0], uParam0->f_104))
			{
				if (func_5(uParam1[0], -674618190))
				{
					func_32(uParam0, 7);
				}
				else
				{
					func_32(uParam0, 8);
				}
			}
			else if (func_40(&(Global_17395[3]), 1))
			{
				func_41(uParam0, uParam1[0]);
			}
			func_16(uParam0);
			break;
		case 8:
			if (!func_42(uParam1[0], 1) && !uParam0->f_123)
			{
				func_43(uParam1[0], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			func_32(uParam0, 9);
			break;
		case 7:
			uParam0->f_93.f_3 = _get_scenario_point_type(uParam0->f_93.f_4);
			uParam0->f_93 = { _get_scenario_point_coords(uParam0->f_93.f_4, true) };
			_0x4161648394262fdf(uParam0->f_93, 1f);
			if (!_does_scenario_point_exist(uParam0->f_93.f_4))
			{
				uParam0->f_93.f_4 = _find_closest_active_scenario_point_of_type(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, false);
			}
			uParam0->f_93.f_5 = _get_scenario_point_entity(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = get_object_index_from_entity_index(uParam0->f_93.f_5);
			_set_apply_object_txd(uParam0->f_93.f_6, (*uParam1)[0]->f_5, 0, 0);
			func_32(uParam0, 9);
			break;
	}
	return 0;
}

int func_9(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!does_entity_exist(uParam0->f_101))
			{
				uParam0->f_101 = _0x05a0100ea714db68(Global_34, 2120637577);
			}
			if (does_entity_exist(uParam0->f_101))
			{
				(*uParam1)[0] = func_44(uParam0);
				func_45(uParam0, uParam1[0]);
				func_30(uParam0, uParam1);
				func_31(uParam0, uParam1[0]);
				func_28(uParam0, uParam1);
				func_29(uParam0, (*uParam1)[0]);
				func_46(uParam0, uParam1);
				if ((*Global_1913674)[0]->f_1 == 2)
				{
					func_47((*uParam1)[0], 0);
					func_48(uParam0, uParam1);
				}
				func_32(uParam0, 2);
			}
			break;
		case 2:
			if (func_47((*uParam1)[0], 0) && func_49(uParam0, uParam1))
			{
				func_32(uParam0, 3);
			}
			break;
		case 3:
			if (func_48(uParam0, uParam1))
			{
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33(uParam1[0], uParam0->f_104))
			{
				func_35(uParam0, uParam1, 1);
				func_34(uParam1[0]);
				func_32(uParam0, 5);
			}
			break;
		case 5:
			func_36(uParam0, (*uParam1)[0]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39(uParam1[0], uParam0->f_104))
			{
				func_32(uParam0, 9);
			}
			else if (func_50(&(Global_17395[2])) && func_51(&(Global_17395[2]), 1))
			{
				func_32(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1940311->f_8 = 1;
				Global_17406 = get_game_timer() + 10000;
				func_52(1);
			}
			else if (func_40(&(Global_17395[3]), 1))
			{
				func_41(uParam0, uParam1[0]);
			}
			else if (!Global_17407 && func_53(uParam0))
			{
				uParam0->f_117 = 1;
				func_32(uParam0, 9);
			}
			func_16(uParam0);
			break;
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	Global_1940144->f_70.f_4 = get_game_timer() + 5000;
	if (Global_17394 == 1)
	{
		iVar0 = _get_item_interaction_from_ped(Global_34);
		if (iVar0 == func_54(&Global_1913502))
		{
			Global_17394 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

bool func_11()
{
	if ((((Global_1211392->f_1204 && func_5(&Global_1913502, -1472964441)) || (Global_1211392->f_1205 && func_5(&Global_1913502, 1841149704))) || (Global_1211392->f_1206 && func_5(&Global_1913502, 566155764))) || (Global_1211392->f_1207 && func_5(&Global_1913502, -228153877)))
	{
		if ((Global_1211392->f_1202 && !func_55()) || (Global_1211392->f_1203 && func_55()))
		{
			return true;
		}
	}
	return false;
}

bool func_12()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

void func_13(var uParam0, var uParam1)
{
}

int func_14(int iParam0)
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

void func_15(var uParam0, var uParam1)
{
	if (!uParam0->f_126 && !_0x30bed53646c86d11(get_id_of_this_thread()))
	{
		iVar0 = 1946634759;
		if (uParam1[0] == 684416450)
		{
			iVar0 = -489628648;
		}
		if (func_56(uParam1[0]))
		{
			func_57(uParam1[0], iVar0);
		}
		func_58(uParam1[0]);
	}
}

void func_16(var uParam0)
{
	if (uParam0->f_5.f_1 && !_is_app_running(-605293197))
	{
		play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_17(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_5.f_63))
	{
		_databinding_remove_data_entry(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_64[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_64[iVar0]));
		}
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_76[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_76[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0]->f_3 = 0;
		iVar0++;
	}
}

void func_18(var uParam0, var uParam1)
{
	if (uParam1[0] != 0)
	{
		if (func_54(uParam1[0]) != 0)
		{
			_0xb35370d5353995cb(Global_34, func_54(uParam1[0]), 1048576000);
		}
		if (((uParam0->f_116 && func_59(uParam1[0])) && !func_42(uParam1[0], 1)) && !uParam0->f_123)
		{
			func_43(uParam1[0], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_19(int iParam0)
{
	(*Global_1913674)[iParam0]->f_1 = 3;
	(*Global_1913674)[iParam0] = 0;
	(*Global_1913674)[iParam0]->f_5 = 0;
}

void func_20(var uParam0)
{
	if (!Global_1940311->f_8)
	{
		if (((func_5(&Global_1913502, -1472964441) || func_5(&Global_1913502, 1841149704)) || func_5(&Global_1913502, 566155764)) || func_5(&Global_1913502, -228153877))
		{
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_1 = &Global_1913502;
		}
	}
	Global_1913502 = 0;
	Global_17405 = 0;
	Global_17394 = 2;
	(*Global_1913640)[0]->f_3 = 0;
	func_60(uParam0);
}

void func_21(var uParam0, var uParam1)
{
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_110)
	{
		func_61(uParam1);
	}
	else
	{
		func_62(uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_63(uParam1);
	(*uParam1)[0]->f_3 = 0;
	Global_1913502 = uParam1[0];
	func_64(uParam1[0], 0, 1, 0, 0f);
	animpostfx_play("CamTransition01");
	Global_17405 = get_game_timer() + 3000;
}

bool func_22(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_23(int iParam0)
{
	return iParam0;
}

int func_24(int iParam0, int iParam1)
{
	if (!func_65(iParam0, 2))
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

bool func_25(bool bParam0, bool bParam1)
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

bool func_26(var uParam0, var uParam1)
{
	if (is_entity_dead(Global_34))
	{
		return true;
	}
	if (!_0x038b1f1674f0e242(Global_34))
	{
		return true;
	}
	if (!func_66(16))
	{
		return true;
	}
	if ((!uParam0->f_118 && *uParam0 > 4) && (func_67(uParam1[0]) || func_68(uParam1[0])))
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case -904734609:
		case -595619260:
		case -31140163:
		case 1760651454:
			return true;
	}
	return false;
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_122)
	{
		if (func_33(uParam1[0], uParam0->f_104))
		{
			func_35(uParam0, uParam1, 0);
			uParam0->f_122 = 1;
		}
	}
}

void func_29(var uParam0, var uParam1)
{
	*uParam1 = func_44(uParam0);
	uParam1->f_6 = func_4(*uParam1, -949239683);
	uParam1->f_1 = func_69(uParam1->f_6);
	if (uParam1->f_1)
	{
		if (_item_database_fillout_item_info(*uParam1, &Var0))
		{
			uParam1->f_7.f_2 = Var0.f_4;
		}
	}
	func_45(uParam0, *uParam1);
}

void func_30(var uParam0, var uParam1)
{
	uParam0->f_120 = 1;
	switch (_0x804425c4bbd00883(Global_34))
	{
		case 2129073771:
			iLocal_25 = -1912187723;
			_request_streamed_txd(iLocal_25, false);
			break;
		case -1391775747:
			iLocal_25 = -658853329;
			_request_streamed_txd(iLocal_25, false);
			break;
		case -1448289118:
			iLocal_25 = 1095224717;
			_request_streamed_txd(iLocal_25, false);
			break;
	}
}

void func_31(var uParam0, int iParam1)
{
	if (func_5(iParam1, -98816307))
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", 1, -1);
	}
	if (func_5(iParam1, -1903335637))
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	if (uParam0->f_120)
	{
		if (func_5(iParam1, -98816307))
		{
			_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
			_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_RETURN_AVAILABLE", 1, -1);
		}
	}
	func_70(uParam0);
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_33(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == 1607869040)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == -59421711)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == -1140851507)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_34(var uParam0)
{
}

int func_35(var uParam0, var uParam1, bool bParam2)
{
	if (func_5(uParam1[0], 566155764))
	{
		return 1;
	}
	if (func_5(uParam1[0], -1472964441))
	{
		if (func_6(uParam1[0]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17407 && bParam2)
		{
			if (!func_22(uParam1[2], 0))
			{
				Global_17400[1] = 0;
				func_71(Global_17395[1], 0);
			}
			else
			{
				Global_17400[1] = 1;
				func_71(Global_17395[1], 1);
			}
			if (!func_22(uParam1[1], 0))
			{
				Global_17400[0] = 0;
				func_71(Global_17395[0], 0);
			}
			else
			{
				Global_17400[0] = 1;
				func_71(Global_17395[0], 1);
			}
		}
		Global_17400[3] = func_72(uParam0, (*uParam1)[0]);
		func_71(Global_17395[3], &(Global_17400[3]));
		if (uParam1[0] == -1084135070)
		{
			Global_17409 = 1;
		}
		Global_17394 = 1;
	}
	if (uParam0->f_116)
	{
		disable_control_action(0, 1395223413, false);
		disable_control_action(0, -914910537, false);
		disable_control_action(0, 538512052, false);
		disable_control_action(0, 1367437629, false);
		disable_control_action(0, -473983589, false);
		disable_control_action(0, 992265328, false);
		disable_control_action(0, -1692620582, false);
		disable_control_action(0, -1692620582, false);
		disable_control_action(0, 285921746, false);
		disable_control_action(0, -875187602, false);
	}
	return 1;
}

void func_36(var uParam0, var uParam1)
{
	if (!func_33(*uParam1, uParam0->f_104) && !func_73(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_74(&(Global_17395[0]), 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (func_74(&(Global_17395[1]), 1))
			{
				uParam0->f_114 = 0;
			}
			else
			{
				uParam0->f_114 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_75(Global_17395[iVar0], 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_76(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_75(Global_17395[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_37(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_77(uParam1[0], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_78(uParam1[0]);
	}
}

void func_38(var uParam0, var uParam1)
{
	if (!_is_app_running(-605293197) && uParam0->f_105 > 0)
	{
		if (is_control_just_released(0, -473983589))
		{
			if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
			{
				func_79(uParam0, uParam1);
			}
		}
		if (iLocal_24 == -1)
		{
			func_80(uParam0);
		}
		iVar0 = _get_item_interaction_from_ped(Global_34);
		if (!bLocal_20)
		{
			if (iVar0 == -271999469 || iVar0 == 1088578020)
			{
				bLocal_20 = true;
				iLocal_23++;
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_20 = false;
		}
		if (!bLocal_21)
		{
			if (iVar0 == 447737959 || iVar0 == 847337666)
			{
				bLocal_21 = true;
				iLocal_23 = (iLocal_23 - 1);
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_21 = false;
		}
		if (iLocal_23 == 0)
		{
			if (!_0x4912dfe492db98cd(Global_34, "BOOK_BLOCK_PAGE_PREV"))
			{
				_0xcb9401f918cb0f75(Global_34, "BOOK_BLOCK_PAGE_PREV", 1, -1);
			}
		}
		else if (_0x4912dfe492db98cd(Global_34, "BOOK_BLOCK_PAGE_PREV"))
		{
			_0xcb9401f918cb0f75(Global_34, "BOOK_BLOCK_PAGE_PREV", 0, -1);
		}
		if (iLocal_23 >= iLocal_24)
		{
			if (!_0x4912dfe492db98cd(Global_34, "BOOK_BLOCK_PAGE_NEXT"))
			{
				_0xcb9401f918cb0f75(Global_34, "BOOK_BLOCK_PAGE_NEXT", 1, -1);
			}
		}
		else if (_0x4912dfe492db98cd(Global_34, "BOOK_BLOCK_PAGE_NEXT"))
		{
			_0xcb9401f918cb0f75(Global_34, "BOOK_BLOCK_PAGE_NEXT", 0, -1);
		}
	}
	if (!bLocal_22 && iLocal_25 != 0)
	{
		if (_has_streamed_txd_loaded(iLocal_25))
		{
			_set_apply_object_txd(_0x05a0100ea714db68(Global_34, 0), iLocal_25, 0, 0);
			bLocal_22 = true;
		}
	}
}

bool func_39(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == -34349608)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 313665285 || iParam1 == 474174677)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1668318109 || iParam1 == -465598822)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_40(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_81(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_41(var uParam0, int iParam1)
{
	if (func_5(iParam1, -1227898937))
	{
		if (_launch_app_by_hash_with_entry(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_82(uParam0, iParam1);
		}
	}
	else if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
	{
		uParam0->f_5.f_1 = 1;
		play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_82(uParam0, iParam1);
	}
}

bool func_42(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_83(iParam0);
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
			if (!func_84(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_85(iParam0))
			{
				return true;
			}
			break;
	}
	return func_86(iParam0, 0, 0, 0) >= iParam1;
}

int func_43(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!func_87(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_88(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_89(iParam0, bParam2);
	iVar2 = 0;
	if (func_83(iParam0) == -1037537535)
	{
		if (!func_5(iParam0, 866047851) && !func_5(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_90(iParam0, 8388608) && !func_91(27))
	{
		func_92(27);
	}
	func_93(iParam0);
	if (!bVar3)
	{
		if (func_5(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_95(func_94(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_3() == -1)
				{
					func_96(iVar1);
				}
				if (func_97(0) && func_98(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_99(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_100(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_83(iParam0) == -427144552)
		{
			if (!func_101(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_83(iParam0) == 307971639 && func_102(iParam0))
		{
			if (!func_103(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_5(iParam0, -103750053))
		{
			func_105(func_104(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_105(func_106(-717883113, 2091222383), iVar0);
		}
		else if (func_5(iParam0, -121341956) && !func_5(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_107(536, 0);
			}
			if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
			{
			}
		}
		else if (func_5(iParam0, -136654233))
		{
			if (func_5(iParam0, -1021472396))
			{
			}
		}
		else if (func_5(iParam0, -1466706512) && func_5(iParam0, 1147021565))
		{
			func_107(519, 0);
		}
		else if (func_5(iParam0, 1147021565) && func_5(iParam0, -524514947))
		{
		}
		else if (func_5(iParam0, 554195525))
		{
		}
		else if (func_5(iParam0, 589988438))
		{
			if (func_108())
			{
				func_109(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_5(iParam0, 787083290) && func_5(iParam0, 949916894))
		{
			func_110(iParam0);
		}
		else if (func_5(iParam0, -1718133314))
		{
			func_111(iParam0);
		}
		else if (func_5(iParam0, -1738650224))
		{
			func_112(iParam0);
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, 949916894))
		{
			func_113(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_5(iParam0, 1841149704))
		{
			func_114();
		}
		else if (func_5(iParam0, -1979000645))
		{
		}
		else if (func_5(iParam0, 606799272))
		{
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, -1697809989))
		{
		}
		else if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
		{
		}
		else if (func_5(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_5(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_42(215778062, 1))
					{
						func_43(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_42(670273567, 1))
					{
						func_43(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_42(-967317137, 1))
					{
						func_43(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_42(526074061, 1))
					{
						func_43(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_42(-1045488665, 1))
					{
						func_43(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_42(471514780, 1))
					{
						func_43(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_5(iParam0, -839724752) && func_90(iParam0, 4))
		{
		}
		else if (func_5(iParam0, 1399091007))
		{
			func_115(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_117(272, func_116(-21093309), 0);
				break;
			case 204375141:
				func_117(270, func_116(204375141), 0);
				break;
			case -417963070:
				func_117(271, func_116(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_118(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_107(526, 0);
				break;
			case 1613651027:
				func_107(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_91(1))
				{
					func_107(522, 0);
				}
				break;
			case -898386032:
				func_107(521, 0);
				break;
			case -2035110427:
				if (func_3() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_107(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_119(&iVar5);
		if (!func_100(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_97(0))
		{
			return 1;
		}
		if (func_83(iParam0) == -1037537535)
		{
			func_120(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_97(0) && !func_121())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_43(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_122(iVar2, 0);
		}
	}
	Var30 = { func_123(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_124(iParam0);
	if (fParam6 > 0f)
	{
		if (func_5(iParam0, -839724752))
		{
			func_125(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_126(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_44(var uParam0)
{
	if (uParam0->f_116)
	{
		if (decor_exist_on(uParam0->f_101, "letter_item"))
		{
			iVar0 = decor_get_int(uParam0->f_101, "letter_item");
		}
		else
		{
			iVar0 = _0x804425c4bbd00883(Global_34);
			if (!func_22(iVar0, 0))
			{
			}
		}
		Global_1913502 = iVar0;
	}
	else
	{
		iVar0 = &Global_1913502;
	}
	return iVar0;
}

void func_45(var uParam0, var uParam1)
{
	uParam0->f_105 = _item_database_localization_get_num_label_types(uParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		uParam0->f_5.f_2[iVar0] = _item_database_localization_get_type(uParam1, iVar0);
		uParam0->f_5.f_2[iVar0]->f_2 = &uParam0->f_5.f_2[iVar0];
		uParam0->f_5.f_2[iVar0]->f_1 = _item_database_localization_get_num_values(uParam1, uParam0->f_5.f_2[iVar0]->f_2);
		iVar0++;
	}
}

void func_46(var uParam0, var uParam1)
{
	func_127(uParam0, uParam1[0]);
	func_128(uParam0, uParam1);
	if (uParam1[1] != 0)
	{
		func_129(1, uParam1[1]);
	}
	else
	{
		func_19(1);
	}
	func_130(uParam0, uParam1);
	if (uParam1[2] != 0)
	{
		func_129(2, uParam1[2]);
	}
	else
	{
		func_19(2);
	}
	func_131(uParam1);
	func_132(uParam1);
}

int func_47(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
		{
			uParam0->f_7.f_1 = _0xb6857100f8fd433c(uParam0->f_7.f_3, -2);
		}
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = _0xbe1067cd1c9570f6(uParam0->f_7.f_1);
			if (iParam1 == 0)
			{
				if (!func_133(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (func_134(*uParam0, &iVar0, 805880880, -401018458, 0, 0))
	{
		if (_does_streamed_txd_exist(iVar0))
		{
			_request_streamed_txd(iVar0, false);
			uParam0->f_5 = iVar0;
		}
	}
	return 1;
}

bool func_48(var uParam0, var uParam1)
{
	if (func_135(uParam0, (*uParam1)[0]))
	{
		func_136(uParam0, uParam1);
		return true;
	}
	return false;
}

int func_49(var uParam0, var uParam1)
{
	return 1;
}

bool func_50(int iParam0)
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

bool func_51(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_81(iParam0);
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

void func_52(bool bParam0)
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

bool func_53(var uParam0)
{
	iVar0 = 0;
	uParam0->f_110 = 0;
	if (func_40(&(Global_17395[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_75(Global_17395[1], !uParam0->f_125);
		func_75(Global_17395[0], 1);
	}
	if (func_40(&(Global_17395[0]), 1))
	{
		iVar0 = 1;
		func_75(Global_17395[0], !uParam0->f_124);
		func_75(Global_17395[1], 1);
	}
	return iVar0;
}

int func_54(int iParam0)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			return -34349608;
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return 313665285;
		case -1273369295:
			return 1434623772;
		case 82200319:
			return 1668318109;
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

bool func_55()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_56(int iParam0)
{
	return (iParam0 == -492264119 || iParam0 == 1397875340);
}

void func_57(int iParam0, int iParam1)
{
	iVar0 = func_137(iParam0, 1);
	if (func_138(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var11.f_9 = 1;
		Var11.f_11 = -1591664384;
		if (func_139(&Var1, iVar0, &Var11, 1, iParam1, -1, 0))
		{
		}
	}
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case 684416450:
			func_140(-1419640182, 0);
			break;
		case -492264119:
			func_140(-2028134866, 0);
			func_107(861, 0);
			break;
		case 1397875340:
			func_140(518311877, 0);
			break;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case -31140163:
			return 0;
	}
	return 1;
}

void func_60(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[0]->f_1 = 0;
	(*uParam0)[0]->f_3 = 0;
	(*uParam0)[0]->f_5 = 0;
	(*uParam0)[0]->f_6 = 0;
	(*uParam0)[0]->f_7 = 0;
	(*uParam0)[0]->f_7.f_1 = 0;
	(*uParam0)[0]->f_7.f_2 = 0;
	(*uParam0)[0]->f_7.f_3 = 0;
	func_63(uParam0);
}

void func_61(var uParam0)
{
	(*uParam0)[0] = uParam0[2];
	(*uParam0)[0]->f_1 = (*uParam0)[2]->f_1;
	(*uParam0)[0]->f_5 = (*uParam0)[2]->f_5;
	(*uParam0)[0]->f_6 = (*uParam0)[2]->f_6;
	(*uParam0)[0]->f_7 = (*uParam0)[2]->f_7;
	(*uParam0)[0]->f_7.f_1 = (*uParam0)[2]->f_7.f_1;
	(*uParam0)[0]->f_7.f_2 = (*uParam0)[2]->f_7.f_2;
	(*uParam0)[0]->f_7.f_3 = (*uParam0)[2]->f_7.f_3;
	(*uParam0)[0]->f_3 = 0;
}

void func_62(var uParam0)
{
	(*uParam0)[0] = uParam0[1];
	(*uParam0)[0]->f_1 = (*uParam0)[1]->f_1;
	(*uParam0)[0]->f_5 = (*uParam0)[1]->f_5;
	(*uParam0)[0]->f_6 = (*uParam0)[1]->f_6;
	(*uParam0)[0]->f_7 = (*uParam0)[1]->f_7;
	(*uParam0)[0]->f_7.f_1 = (*uParam0)[1]->f_7.f_1;
	(*uParam0)[0]->f_7.f_2 = (*uParam0)[1]->f_7.f_2;
	(*uParam0)[0]->f_7.f_3 = (*uParam0)[1]->f_7.f_3;
	(*uParam0)[0]->f_3 = 0;
}

void func_63(var uParam0)
{
	(*uParam0)[2] = 0;
	(*uParam0)[2]->f_1 = 0;
	(*uParam0)[2]->f_3 = 0;
	(*uParam0)[2]->f_5 = 0;
	(*uParam0)[2]->f_6 = 0;
	(*uParam0)[2]->f_7 = 0;
	(*uParam0)[2]->f_7.f_1 = 0;
	(*uParam0)[2]->f_7.f_2 = 0;
	(*uParam0)[2]->f_7.f_3 = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[1]->f_1 = 0;
	(*uParam0)[1]->f_3 = 0;
	(*uParam0)[1]->f_5 = 0;
	(*uParam0)[1]->f_6 = 0;
	(*uParam0)[1]->f_7 = 0;
	(*uParam0)[1]->f_7.f_1 = 0;
	(*uParam0)[1]->f_7.f_2 = 0;
	(*uParam0)[1]->f_7.f_3 = 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_66(int iParam0)
{
	return func_141(iParam0);
}

bool func_67(int iParam0)
{
	return (func_5(iParam0, 566155764) && !_is_app_active(-2042186616));
}

bool func_68(int iParam0)
{
	return ((func_5(iParam0, -1472964441) && func_6(iParam0)) && !_is_app_active(-2042186616));
}

bool func_69(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

void func_70(var uParam0)
{
	if (uParam0->f_105 > 0)
	{
		_0xcb9401f918cb0f75(Global_34, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
	}
}

void func_71(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_142(*uParam0, bParam1, 0, 1);
	}
}

bool func_72(var uParam0, var uParam1)
{
	if (func_33(*uParam1, uParam0->f_104))
	{
		bVar0 = !func_5(*uParam1, 1051234725);
	}
	if (func_73(*uParam1, uParam0->f_104))
	{
		bVar0 = func_5(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_73(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 1870337093)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1913655128)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_74(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	return !func_143(iParam0, 4);
}

void func_75(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_142(*uParam0, bParam1, 1, 1);
	}
}

void func_76(var uParam0, var uParam1)
{
	func_75(Global_17395[3], func_72(uParam0, uParam1));
}

bool func_77(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 1222452293)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1125283391)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_78(var uParam0)
{
}

void func_79(var uParam0, var uParam1)
{
	if (_databinding_is_data_id_valid(uLocal_26))
	{
		_databinding_remove_data_entry(uLocal_26);
	}
	func_17(uParam0);
	uLocal_26 = _databinding_add_data_container_from_path("", "Translate");
	uParam0->f_5.f_63 = _databinding_add_data_container(uLocal_26, "Generic");
	iVar2 = 0;
	iLocal_24 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(uParam1[0], uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				default:
					func_145(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_80(var uParam0)
{
	iLocal_24 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
				case 1724675796:
					break;
				default:
					if (!uParam0->f_5.f_2[iVar1]->f_3)
					{
						iLocal_24++;
						uParam0->f_5.f_2[iVar1]->f_4 = iLocal_24;
					}
					uParam0->f_5.f_2[iVar1]->f_3 = 1;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_81(int iParam0)
{
	return iParam0;
}

void func_82(var uParam0, int iParam1)
{
	uVar0 = _databinding_add_data_container_from_path("", "Translate");
	uParam0->f_5.f_63 = _databinding_add_data_container(uVar0, "Generic");
	if (func_5(iParam1, 1104960349))
	{
		func_146(uParam0, iParam1);
	}
	else if (func_5(iParam1, 1989861793))
	{
		if (func_5(iParam1, -885754398))
		{
			func_147(uParam0, iParam1);
		}
		else
		{
			func_148(uParam0, iParam1);
		}
	}
	else if (func_5(iParam1, 1989861793))
	{
		func_148(uParam0, iParam1);
	}
	else if (func_5(iParam1, -772152977))
	{
		func_149(uParam0, iParam1);
	}
	else if (func_5(iParam1, -2081717885))
	{
		func_150(uParam0, iParam1);
	}
	else if (func_4(iParam1, 1224357681) == 1130538400)
	{
		func_151(uParam0, iParam1);
	}
	else if (func_5(iParam1, -1227898937))
	{
	}
	else
	{
		func_152(uParam0, iParam1);
	}
}

int func_83(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_84(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_153(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_154("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_155(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_156(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_14(iVar1);
				return true;
			}
			iVar3++;
		}
		func_14(iVar1);
	}
	return false;
}

bool func_85(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_157(iParam0);
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
	iVar1 = func_158(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_159(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_160(iParam0);
	iVar2 = func_159(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_86(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_83(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_153(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_161(iParam0, 0);
	}
	if (func_162(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_163(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_164(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_163(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_87(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_3() == -1)
	{
		if (func_165(iParam0) && func_166(iParam0))
		{
			func_167(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_168(iParam0, iParam1);
	Var0 = { func_169(iParam0, 0, 1) };
	iVar5 = func_170(iParam0, &Var0, 0, 0);
	iVar6 = func_171(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_5(iParam0, -2051813666))
		{
			func_107(674, 1);
		}
		else if (func_3() == -1)
		{
			func_107(673, 0);
		}
	}
	if (func_172(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_173())
	{
		return;
	}
	switch (func_4(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

bool func_90(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_91(int iParam0)
{
	if (!func_174(iParam0))
	{
		return false;
	}
	return func_175(iParam0);
}

void func_92(int iParam0)
{
	if (!func_174(iParam0))
	{
		return;
	}
	func_176(iParam0);
	func_177(iParam0);
}

void func_93(int iParam0)
{
	if (func_5(iParam0, -1522723129))
	{
		func_178(-848633709, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, -283942357))
	{
		func_178(-981153234, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 683680997))
	{
		func_178(-756350192, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 1307628809))
	{
		func_178(603094518, 0, 255, 0, 0);
	}
}

int func_94(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_22(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_179(iVar0) || func_180(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_95(int iParam0, bool bParam1)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_96(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_156(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_97(bool bParam0)
{
	if (func_3() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_163(bParam0));
}

bool func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_169(iParam0, 0, 1) };
		if (func_181(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_182(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_183(iParam0, Var0, Var0.f_4, 0) };
				func_184(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_97(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_99(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_185(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_99(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_102(iParam0))
	{
		return false;
	}
	if (!func_97(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_162(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_186(iParam0, iParam1, iParam2);
	}
	Var1 = { func_169(iParam0, 0, 1) };
	Var6 = { func_183(iParam0, Var1, Var1.f_4, 0) };
	return func_187(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_101(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_95(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_3() == -1)
		{
			func_96(iVar0);
			if (iParam1 == 1248274121)
			{
				func_188(iVar0);
			}
		}
		if (!func_172(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_167(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_189(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_98(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_98(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_98(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_190())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_191(iVar0))
				{
					func_98(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_98(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_192(Global_34, 2, 0, 1);
				if ((((func_156(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_42(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_156(iVar7) && func_42(-1185145312, 1))
				{
					if (!func_98(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_98(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_98(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_107(515, 1);
	}
	return true;
}

bool func_102(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (!func_102(iParam0))
	{
		return 0;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_156(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_117(func_193(iParam0), func_116(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_97(0))
	{
		if (func_99(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_100(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_104(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_106(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_107(int iParam0, bool bParam1)
{
	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_196(iVar0, iVar1);
}

bool func_108()
{
	return false;
}

int func_109(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_3() == 0)
	{
		func_122(iParam0, 0);
		return 0;
	}
	iVar0 = func_197(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_198(iVar0, sParam4, iParam5, 0);
	}
	func_199(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_110(int iParam0)
{
}

void func_111(int iParam0)
{
}

void func_112(int iParam0)
{
}

void func_113(int iParam0)
{
}

void func_114()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_115(int iParam0, int iParam1)
{
	func_200(iParam0, iParam1, &uVar0);
}

int func_116(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_117(int iParam0, int iParam1, bool bParam2)
{
	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_202(iParam0, 1024))
	{
		return;
	}
	func_196(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_118(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_202(iParam0, 1024))
	{
		return;
	}
	func_196(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_119(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_120(int iParam0)
{
	if (func_3() != -1)
	{
		return;
	}
}

bool func_121()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_122(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_203(&Var4, 1356624740);
	return func_204(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_123(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return Var0;
	}
	if (func_5(iParam0, -305066475))
	{
		if (func_3() == -1)
		{
			if (func_5(iParam0, -537818634))
			{
				return func_205(189951448);
			}
			else
			{
				return func_205(1176172851);
			}
		}
	}
	else if (func_5(iParam0, -537818634))
	{
		return func_205(-963660207);
	}
	if (func_5(iParam0, 2084895747))
	{
		return func_205(1694039471);
	}
	return Var2;
}

void func_124(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_125(int iParam0, char* sParam1)
{
	sVar0 = func_206(Global_1903071->f_37);
	func_208(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_207(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_126(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_22(iParam0, 0))
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
	if (!func_209() || bParam6)
	{
		func_210(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_90(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_83(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_157(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_212(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_5(iParam0, 474910316))
	{
		sVar17 = func_213(iParam0);
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
	if (func_5(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_214(iParam0))
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
	iVar18 = func_116(iParam0);
	if ((func_215(iVar12) && func_5(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_216(iParam0);
	}
	else if (func_83(iParam0) == -1037537535)
	{
		iVar19 = func_217(iParam0);
		if (func_22(iVar19, 0))
		{
			iVar18 = func_116(iVar19);
		}
	}
	if (func_218(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_219(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_220(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_221(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_222(iParam0, &cVar22))
		{
			sVar21 = func_224(func_223(cVar22), 109029619);
		}
	}
	func_208(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_127(var uParam0, int iParam1)
{
	if (func_154("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_119 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_155(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1940311->f_10892 == 0)
					{
						if (func_225(&Var2, 0))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_128(var uParam0, var uParam1)
{
	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2] = 0;
		return false;
	}
	if (Global_17407)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_155(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226(uParam1[0], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1] = 0;
	}
	return bVar15;
}

void func_129(int iParam0, int iParam1)
{
	if (!func_22(iParam1, 0))
	{
		return;
	}
	if ((!func_5(iParam1, 747873593) && !func_5(iParam1, -1661502552)) && !func_5(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1913674[iParam0])
	{
		(*Global_1913674)[iParam0]->f_1 = 3;
		(*Global_1913674)[iParam0] = iParam1;
		(*Global_1913674)[iParam0]->f_5 = 0;
	}
}

bool func_130(var uParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_17407)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1940311->f_10892 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_155(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226(uParam1[0], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2] = 0;
	}
	return bVar17;
}

void func_131(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22(uParam0[iVar0], 0))
		{
			func_227((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_132(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_6 = func_4(uParam0[iVar0], -949239683);
		}
		iVar0++;
	}
}

bool func_133(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		_0x51de09a2196bd951(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_134(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_135(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_133(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (does_entity_exist(uParam0->f_101) && _has_streamed_txd_loaded(uParam1->f_5))
		{
			if (!uParam1->f_3)
			{
				_set_apply_object_txd(uParam0->f_101, uParam1->f_5, 0, 0);
			}
			uParam1->f_3 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_136(var uParam0, var uParam1)
{
	return 0;
}

int func_137(int iParam0, bool bParam1)
{
	if (!func_22(iParam0, 0))
	{
		return func_228(func_23(iParam0), bParam1);
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

bool func_138(int iParam0)
{
	return iParam0 != 0;
}

bool func_139(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_229(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_230(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_231(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_232(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

int func_140(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_233();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_234();
	Var0.f_3 = iParam1;
	func_235(Var0, 0);
	return Var0;
}

bool func_141(int iParam0)
{
	return func_236(Global_1940144->f_38, iParam0);
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_50(iParam0))
	{
		return;
	}
	iVar0 = func_81(iParam0);
	if (bParam1)
	{
		func_237(iParam0, 4);
		if (bParam3)
		{
			func_238(iVar0, 1);
		}
		func_239(iVar0, 1);
	}
	else
	{
		func_240(iParam0, 4);
		func_239(iVar0, 0);
	}
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_144(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "text", *uParam0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_bool(&(uParam0->f_76[iParam1]), "isVisible", iParam3);
}

void func_145(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (*iParam2 >= 11)
	{
		return;
	}
	if (!uParam0->f_2[iParam1]->f_3)
	{
		iLocal_24++;
		uParam0->f_2[iParam1]->f_4 = iLocal_24;
	}
	uParam0->f_2[iParam1]->f_3 = 1;
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_64[*iParam2] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_hash(&(uParam0->f_64[*iParam2]), "text", *uParam0);
	_databinding_add_data_hash(&(uParam0->f_64[*iParam2]), "style", iParam3);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_76[*iParam2] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_bool(&(uParam0->f_76[*iParam2]), "isVisible", iParam4);
	*iParam2++;
}

void func_146(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_144(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_144(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_144(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_147(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			if (func_241(iVar0))
			{
				uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
				sVar3 = _get_label_text_by_hash(uParam0->f_5);
				uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0 + 1);
				if (_does_string_exist_in_string(sVar3, "_MH"))
				{
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (_does_string_exist_in_string(sVar3, "_SH"))
				{
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (_does_string_exist_in_string(sVar3, "_BDY_C"))
				{
					func_144(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (_does_string_exist_in_string(sVar3, "_BDY_J"))
				{
					func_144(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (_does_string_exist_in_string(sVar3, "_BDY_L"))
				{
					func_144(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_148(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_144(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_149(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_144(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_150(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_144(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_151(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_144(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_144(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_144(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_144(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_152(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 159464507:
				case 1410847083:
					func_242(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_242(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_242(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_242(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_242(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_153(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_83(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_5(iParam0, 1399091007))
	{
		func_200(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_154(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_163(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_155(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_156(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_157(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_158(int iParam0)
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

int func_159(var uParam0, int iParam1)
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

int func_160(int iParam0)
{
	iVar0 = func_157(iParam0);
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

int func_161(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_243(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_245(&Var0, func_244(0));
	}
	if (!func_246(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_14(iVar14);
	return uVar15;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_163(bool bParam0)
{
	if (func_3() == -1)
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

struct<4> func_164(int iParam0, bool bParam1)
{
	Var0 = { func_169(iParam0, bParam1, 0) };
	return func_183(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_165(int iParam0)
{
	return func_83(iParam0) == -427144552;
}

bool func_166(int iParam0)
{
	if (func_3() != -1)
	{
		return false;
	}
	if (func_90(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_172(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_42(iParam0, 1);
}

void func_167(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_83(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_95(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_180(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_86(iParam0, 0, 0, 0) == 0))
		{
			if (func_3() == -1)
			{
				func_96(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_126(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_168(int iParam0, int iParam1)
{
	if (func_5(iParam0, 58855631))
	{
		func_219(iParam0, -915411861, iParam1, 1);
	}
}

struct<5> func_169(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_247(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_83(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_183(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_244(bParam1) };
			if (bParam2 && func_248(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_181(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_181(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_182(iParam0, &Var6, 1728382685))
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
			Var0 = { func_249(bParam1) };
			switch (func_157(iParam0))
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
			if (func_250(iParam0, -1823706425))
			{
				Var0 = { func_183(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_250(iParam0, -1483207246))
			{
				Var0 = { func_183(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_183(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_250(iParam0, -1653629781))
			{
				Var0 = { func_183(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_251(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_250(iParam0, -1653629781))
			{
				Var0 = { func_183(1384535894, Var0, 1784584921, bParam1) };
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

int func_170(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
	{
		return 0;
	}
	if (func_83(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_162(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_163(bParam3), iParam0);
}

int func_171(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_102(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_163(bParam1), iParam0, iParam3);
}

bool func_172(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_252(&iParam0);
	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_162(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_165(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_244(0) };
		Var4.f_9 = -1591664384;
		if (!func_181(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_182(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_248(iParam0, 1))
		{
			if (!func_181(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_182(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_170(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_253(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_173()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_254(Global_34, 1369124074)) && !func_254(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_175(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_176(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_177(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_255(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_256(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_256(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_256(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_257(1);
			break;
		case 33:
			func_258(1);
			break;
		case 34:
			func_259(1);
			break;
		case 35:
			break;
		case 36:
			func_260(0);
			break;
		case 37:
			func_261(0);
			break;
		case 38:
			func_262(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_263() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_107(677, 0);
			break;
		case 3:
			if (func_263() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_107(678, 0);
			break;
		case 4:
			if (func_263() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_107(679, 0);
			break;
		case 5:
			if (func_263() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_107(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
				{
					func_100(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
				{
					func_100(1013902307, 1, 752097756);
				}
				if (!func_42(142640135, 1))
				{
					func_100(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
				{
					func_100(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
				{
					func_100(786809402, 1, 752097756);
				}
				if (!func_42(-518019409, 1))
				{
					func_100(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_265(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_179(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_180(int iParam0)
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

bool func_181(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_253(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_182(int iParam0, var uParam1, int iParam2)
{
	if (func_266(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_183(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_22(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_163(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_184(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_267(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_251(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_97(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_3() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_268(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_269(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_163(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_185(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_270(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_169(iParam0, 0, 0) };
	if (func_172(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_97(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_163(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_172(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_97(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_163(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_188(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_271();
	func_272(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_189(int iParam0)
{
	if (func_273(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_190()
{
	return false;
}

bool func_191(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_192(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_193(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_91(49))
			{
				if (!func_91(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_91(50))
			{
				if (!func_91(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_195(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_274(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_275(iParam0))
	{
		return false;
	}
	if (func_276(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_202(iParam0, 1)) || func_277(32768))
	{
		if (!func_202(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_278())
	{
		return false;
	}
	return true;
}

void func_196(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_197(int iParam0, bool bParam1, int iParam2)
{
	if (func_3() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_42(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_22(iVar25, 0) && func_5(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_198(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_279(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_208(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_199(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_280() || func_281())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_208(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_208(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_105(func_205(1644987397), iVar1);
	}
}

void func_200(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_201(int iParam0)
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

bool func_202(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_203(var uParam0, int iParam1)
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
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_204(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_282(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_283(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_205(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_207(int iParam0)
{
	if (!func_134(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_208(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_284(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_209()
{
	return !&Global_1913504;
}

void func_210(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == iParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
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
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = iParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_211(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_212(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_213(int iParam0)
{
	if (func_5(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_5(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_5(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_5(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_5(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_5(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_5(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_5(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_5(iParam0, -352095726) || func_5(iParam0, -2014783736)) || func_5(iParam0, -545064757)) || func_5(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_214(int iParam0)
{
	if (func_5(iParam0, -189374246))
	{
		if (((func_285(iParam0, -1305775593) || func_285(iParam0, 1384151091)) || func_285(iParam0, 2075388272)) || func_285(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_5(iParam0, -753854379) || func_5(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0)
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

int func_216(int iParam0)
{
	if (!func_22(iParam0, 0))
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

int func_217(int iParam0)
{
	iVar0 = func_286(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_287(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_288(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_289(iVar14))
			{
				func_290(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_290(iVar11);
	}
	return 0;
}

bool func_218(int iParam0, int iParam1)
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

int func_219(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
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

char* func_220(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_221(int iParam0, int iParam1)
{
	iVar0 = func_291(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_222(int iParam0, char* sParam1)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_292(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_293(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_294(iParam0), 128);
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

char* func_223(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_224(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_220(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_225(var uParam0, int iParam1)
{
	if (func_295(uParam0->f_9))
	{
		return false;
	}
	if (!func_296(*uParam0))
	{
		return false;
	}
	if (!func_297(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_298(uParam0->f_4))
	{
		return false;
	}
	if (func_299(0))
	{
		if (!func_22(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_121())
		{
			iVar0 = func_171(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_253(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1940311->f_10893 == 0 && !func_300())
	{
		func_301(uParam0->f_4);
	}
	else
	{
		func_302(0);
	}
	return true;
}

bool func_226(int iParam0, int iParam1)
{
	switch (func_4(iParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1940311->f_10892 != 1061777683 || func_4(iParam0, 1224357681) == func_4(iParam1, 1224357681))
			{
				return true;
			}
			return false;
		}

void func_227(var uParam0)
{
	if (func_69(uParam0->f_6))
	{
		if (_item_database_fillout_item_info(*uParam0, &Var0))
		{
			uParam0->f_7.f_2 = Var0.f_4;
		}
	}
}

int func_228(int iParam0, bool bParam1)
{
	if (!func_65(iParam0, 2))
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

bool func_229(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_303(iParam0))
		{
			return false;
		}
	}
	if (func_304(&(iParam0->f_6)))
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

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	bVar1 = func_306(iParam3, 2);
	bVar2 = func_307(iParam0, -570078785, bVar1);
	bVar3 = func_307(iParam0, -915411861, bVar1);
	if (func_307(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_308(iParam0, &iVar0) || func_309(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_310())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_311(15) && func_307(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_307(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_306(iParam2, 2))
	{
		if (func_312(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_306(iParam2, 8))
	{
		return func_313(iParam0, iParam1);
	}
	return 1;
}

bool func_232(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_314(Param1))
	{
		return false;
	}
	if (!func_315(iParam0, iParam18))
	{
		return false;
	}
	if (func_316(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_317(iParam0, bParam19);
}

void func_233()
{
}

var func_234()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_235(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_318()] = { Param0 };
			func_319((func_318() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_320()] = { Param0 };
			func_321((func_320() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

bool func_236(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_237(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_238(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_143(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_239(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_240(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_241(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_242(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = _databinding_add_data_container(uParam1->f_63, func_322(iParam0, *uParam2));
		_databinding_add_data_hash(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		_databinding_add_data_hash(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

struct<14> func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_244(bool bParam0)
{
	iVar0 = func_163(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_183(923904168, func_247(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_183(923904168, func_247(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_183(923904168, func_247(bParam0), -740156546, 0);
}

void func_245(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_246(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_163(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_247(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_163(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_183(1328661203, func_323(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_183(1328661203, func_323(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_183(1328661203, func_323(), -1591664384, bParam0);
}

bool func_248(int iParam0, bool bParam1)
{
	if (func_157(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_324();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_249(bool bParam0)
{
	iVar0 = func_163(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_183(271701509, func_247(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_183(271701509, func_247(bParam0), 12999093, 0);
}

bool func_250(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_157(iParam0);
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
			if (func_325(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_251(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_326(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_252(int iParam0)
{
	if (!func_22(*iParam0, 0))
	{
		return 0;
	}
	if (!func_327(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_253(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_162(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_183(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_163(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_163(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_254(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_255(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_256(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

void func_257(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_258(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_259(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_260(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_261(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_262(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

bool func_263()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_264(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_265(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_328(iParam2, -372840566);
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
	func_329(uParam1, iParam0, Var3);
	return 1;
}

bool func_266(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_163(0);
	*uParam1 = { func_183(iParam0, func_244(0), iParam3, 0) };
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

bool func_267(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_268(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_330(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_332(func_331(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_333(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_269(int iParam0, struct<17> Param1)
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

int func_270(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_271()
{
	return &Global_1902818;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_334(*iParam0);
	iVar1 = func_335(*iParam0);
	iVar2 = func_336(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_338(*iParam0);
	iVar5 = func_339(*iParam0);
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
	iVar6 = func_340(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_340(iVar1, iVar0);
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
	func_341(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_273(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_274(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_275(int iParam0)
{
	if (func_202(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_276(int iParam0)
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

bool func_277(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_278()
{
	if (!func_55())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_279(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_342())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_280()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_281()
{
	return is_dlc_present(-2112896652);
}

void func_282(var uParam0)
{
	func_203(uParam0, 143479330);
	if (func_343() == 2026485318)
	{
		func_203(uParam0, 617531372);
	}
	else
	{
		func_203(uParam0, 291123060);
	}
}

void func_283(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_304(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

void func_284(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_285(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_286(int iParam0)
{
	if (!func_22(iParam0, 0))
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

struct<10> func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_288(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_289(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
	}
	if (func_5(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
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

int func_291(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_292(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_116(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_293(int iParam0)
{
	if (func_157(iParam0) == -126813555 || func_157(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_294(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_216(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_295(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_296(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if ((((Param0.f_9 != 1084182731 && Param0.f_9 != -140655024) && Param0.f_9 != -1162387149) && Param0.f_9 != 1784584921) && Param0.f_9 != -511891179)
	{
		Var0.f_9 = -1591664384;
		if (!func_251(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_5(Var0.f_4, 1093867179))
		{
			return false;
		}
	}
	iVar14 = func_83(Param0.f_4);
	if (((iVar14 == -427144552 && !_is_weapon_binoculars(Param0.f_4)) && Param0.f_4 != -1016714371) && Param0.f_4 != 332793555)
	{
		return false;
	}
	switch (iVar14)
	{
		case -1977020088:
		case -1879562593:
		case -1784221369:
		case -1650247667:
		case -1013984273:
		case 26423971:
		case 129583122:
		case 307971639:
		case 658570475:
		case 810656527:
		case 1293082345:
		case 1373051002:
		case 1495295997:
		case 1780172046:
		case 2071704023:
		case 2088138839:
			return false;
		case -1037537535:
			switch (func_157(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 1147557067)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_5(Param0.f_4, 160827531))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_157(Param0.f_4) == -829303394)
	{
		return false;
	}
	return true;
}

bool func_297(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	if ((iParam1 == 0 || func_299(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_22(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return false;
		}
	}
	if (!bVar0 && func_344(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_299(0))
			{
				if (iParam0 == 1807503187)
				{
					return true;
				}
				if (((((((((((func_297(iParam0, -1559802791, 1) || func_297(iParam0, -1268291907, 1)) || func_297(iParam0, -96974025, 1)) || func_297(iParam0, -1666604090, 1)) || func_297(iParam0, 1561961676, 1)) || func_297(iParam0, -156634416, 1)) || func_297(iParam0, 1061777683, 1)) || func_297(iParam0, -2074770370, 1)) || func_297(iParam0, -693134279, 1)) || func_297(iParam0, -182626652, 1)) || func_297(iParam0, 1783698482, 1)) || func_345(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_5(iParam0, 1422457563);
		case -1268291907:
			return (func_5(iParam0, 1360707454) && !func_5(iParam0, 474910316));
		case -96974025:
			return (func_5(iParam0, 1009210113) && !func_5(iParam0, 474910316));
		case -1666604090:
			return (func_5(iParam0, -193035453) && !func_5(iParam0, 474910316));
		case 1561961676:
			if (func_5(iParam0, -111938901) && !func_5(iParam0, 474910316))
			{
				return true;
			}
			else if (func_5(iParam0, -189374246) || func_5(iParam0, -1257428961))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_5(iParam0, -928967997) && !func_5(iParam0, 474910316));
		case 1061777683:
			return (func_5(iParam0, 747873593) && !func_5(iParam0, 474910316));
		case 1783698482:
			return ((func_5(iParam0, 474910316) && !func_299(0)) && func_346(iParam0));
		case -2074770370:
			if (Global_1940311->f_36 == 1 || Global_1940311->f_36 == 2)
			{
				return func_347(iParam0, iParam1);
			}
			else if (func_4(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return true;
			}
			else
			{
				return func_5(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_90(iParam0, 8388608);
		case -182626652:
			if (func_348(iParam0, Global_1915715->f_20241.f_1))
			{
				func_349(func_163(0), iParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_298(int iParam0)
{
	if (Global_1940311->f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940311->f_14.f_16)
		{
			if (&Global_1940311->f_14[iVar0] != iParam0)
			{
			}
			else if (Global_1940311->f_14[iVar0]->f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case -776155824:
		case -45650221:
		case 1715058708:
			return false;
	}
	if (func_5(iParam0, 1989861793) && func_253(func_350(iParam0), func_247(1), 1084182731, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_299(0))
	{
		if (Global_1940311->f_10892 == -182626652 && !func_348(iParam0, Global_1915715->f_20241.f_1))
		{
			return false;
		}
		switch (Global_1915715->f_20241)
		{
			case 2:
				if (!func_351(iParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_5(iParam0, -805003139))
	{
		if (!_unlock_is_visible(iParam0))
		{
			return false;
		}
	}
	if (func_83(iParam0) == -2130996531)
	{
		if (!func_5(iParam0, -1540973036) && !func_5(iParam0, 1192444843))
		{
			return false;
		}
		else if (iParam0 == 1872063208 || iParam0 == 1309979101)
		{
			return false;
		}
	}
	return true;
}

bool func_299(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_300()
{
	return Global_1940311->f_9;
}

void func_301(var uParam0)
{
	Global_1940311->f_10893 = uParam0;
}

void func_302(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

bool func_303(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_352(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_304(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_305(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_306(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_307(int iParam0, int iParam1, bool bParam2)
{
	if (!func_305(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_312(iParam0, iParam1);
	}
	return true;
}

bool func_308(int iParam0, int iParam1)
{
	*iParam1 = func_353(iParam0, 1);
	return *iParam1 != 0;
}

bool func_309(int iParam0, int iParam1)
{
	*iParam1 = func_354(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_310()
{
	return Global_1915715->f_22477;
}

bool func_311(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_299(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_312(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_0 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_3 < iScriptParam_0)
	{
		if (&Var0[iScriptParam_3] == iParam1)
		{
			iVar473 = Var0[iScriptParam_3]->f_35;
			iVar475 = 0;
			while (iScriptParam_4 < iScriptParam_2)
			{
				uVar472 = &Var0[iScriptParam_3]->f_36[iScriptParam_4];
				if (iScriptParam_1 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_1))
				{
					return true;
				}
				iVar475 = iScriptParam_4 + 1;
			}
		}
		iVar474 = iScriptParam_3 + 1;
	}
	return false;
}

int func_313(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_355(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_356(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_358(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_357(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_355(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_359(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_358("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_360(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_314(struct<17> Param0)
{
	if (!func_305(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_315(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_361(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_362(iParam0))
		{
			return false;
		}
		if (!func_361(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_316(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_317(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_362(iParam0);
	}
	return true;
}

int func_318()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_319(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_320()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_321(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

char* func_322(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

struct<4> func_323()
{
	return Var0;
}

bool func_324()
{
	return (func_171(-1185145312, 0, 0, 0) > 0 && func_363(func_183(889965687, func_247(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_325(int iParam0, int iParam1, int iParam2)
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

bool func_326(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_163(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_327(int iParam0)
{
	return func_5(iParam0, 1279601681);
}

void func_328(int iParam0, int iParam1)
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

void func_329(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_304(uParam0))
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

bool func_330(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_364(uParam1->f_8, iParam0, uVar0, 2048) || func_364(uParam1->f_8, iParam0, uVar0, 32768)) || func_364(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_364(uParam1->f_8, iParam0, uVar0, 4) || func_364(uParam1->f_8, iParam0, uVar0, 256)) || func_364(uParam1->f_8, iParam0, uVar0, 65536)) || func_364(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_364(uParam1->f_8, iParam0, uVar0, 1) || func_364(uParam1->f_8, iParam0, uVar0, 8)) || func_364(uParam1->f_8, iParam0, uVar0, 65536)) || func_364(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_364(uParam1->f_8, iParam0, uVar0, 1) || func_364(uParam1->f_8, iParam0, uVar0, 16)) || func_364(uParam1->f_8, iParam0, uVar0, 2)) || func_364(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_364(uParam1->f_8, iParam0, uVar0, 8) || func_364(uParam1->f_8, iParam0, uVar0, 4096)) || func_364(uParam1->f_8, iParam0, uVar0, 256)) || func_364(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_332(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_365(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_365(iParam1, 2, 0, 0);
	return -1;
}

int func_333(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_365(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_334(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_366(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_335(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_336(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_337(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_338(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_339(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_340(int iParam0, int iParam1)
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

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_367(iParam0, iParam6);
	func_368(iParam0, iParam5);
	func_369(iParam0, iParam4);
	func_370(iParam0, iParam3);
	func_371(iParam0, iParam2);
	func_372(iParam0, iParam1);
}

bool func_342()
{
	return Global_1913504->f_127 == 0;
}

int func_343()
{
	return Global_1952637->f_1;
}

bool func_344(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_38.f_1)
	{
		if (func_373(iParam0, &(Global_1940311->f_38.f_2[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_345(int iParam0)
{
	if (func_5(iParam0, -839724752))
	{
		return func_5(iParam0, 1937586541);
	}
	return false;
}

bool func_346(int iParam0)
{
	if ((((((((((((((((func_374(iParam0, 56759509) || func_374(iParam0, 2145533727)) || func_374(iParam0, 1632674359)) || func_374(iParam0, 332438661)) || func_374(iParam0, -1452445456)) || func_374(iParam0, -623226361)) || func_374(iParam0, -1874365462)) || func_374(iParam0, -1658668866)) || func_374(iParam0, 1997097980)) || func_374(iParam0, 90781239)) || func_374(iParam0, 920487791)) || func_374(iParam0, -668555046)) || func_374(iParam0, -839148413)) || func_374(iParam0, 10424351)) || func_374(iParam0, 773314749)) || func_374(iParam0, -246025274)) || func_374(iParam0, -41527693))
	{
		return true;
	}
	return false;
}

int func_347(int iParam0, int iParam1)
{
	switch (Global_1940311->f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_5(iParam0, -887064662) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_5(iParam0, -887064662) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233)) || func_5(iParam0, 554195525)) || func_5(iParam0, -1238310989)) || func_5(iParam0, 2127114599)) || func_5(iParam0, -1864584831)) || func_5(iParam0, 1068498601)) || func_5(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_348(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_375(iParam0);
	}
	return func_376(iParam0, iParam1);
}

void func_349(int iParam0, int iParam1, bool bParam2)
{
	if (func_22(iParam1, 0))
	{
		if (bParam2)
		{
			_0x6a564540fac12211(iParam0, iParam1);
		}
		else
		{
			_0x766315a564594401(iParam0, iParam1, 0);
		}
	}
}

int func_350(int iParam0)
{
	if (!func_5(iParam0, 1989861793))
	{
		return 0;
	}
	iVar0 = func_137(iParam0, 0);
	if (!_0xef254f1a4c08b7e6(iVar0))
	{
		return 0;
	}
	iVar5 = _0x3faa928a79591761(iVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!_0x121d2005dd64496b(iVar0, iVar4, &iVar1))
		{
		}
		else if (func_5(iVar1, 1989861793))
		{
			return iVar1;
		}
		iVar4++;
	}
	return 0;
}

bool func_351(int iParam0)
{
	iVar0 = iParam0;
	if (!func_138(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == _0xcc644bc1dd655269(-623226361, 0) || iVar0 == _0xcc644bc1dd655269(-1452445456, 0)) || iVar0 == _0xcc644bc1dd655269(332438661, 0)) || iVar0 == _0xcc644bc1dd655269(1632674359, 0)) || iVar0 == _0xcc644bc1dd655269(56759509, 0)) || iVar0 == _0xcc644bc1dd655269(2145533727, 0)) || iVar0 == _0xcc644bc1dd655269(-1874365462, 0)) || iVar0 == _0xcc644bc1dd655269(-1658668866, 0)) || iVar0 == _0xcc644bc1dd655269(90781239, 0)) || iVar0 == _0xcc644bc1dd655269(1997097980, 0)) || iVar0 == _0xcc644bc1dd655269(920487791, 0)) || iVar0 == _0xcc644bc1dd655269(-668555046, 0)) || iVar0 == _0xcc644bc1dd655269(-839148413, 0)) || iVar0 == _0xcc644bc1dd655269(10424351, 0))
	{
		return true;
	}
	return false;
}

int func_352(int* iParam0)
{
	return func_377(iParam0->f_1);
}

int func_353(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_378(iVar0, 1, 0);
		if (!func_379(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_380(&(Var2[iVar34])))
				{
					if (!bParam1 || func_86(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_354(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_378(iVar0, 0, 1);
		if (!func_379(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_381(&(Var9[iVar41])))
				{
					if (!bParam1 || func_86(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_379(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_356(int iParam0)
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

int func_357(int iParam0)
{
	return (iParam0 / 100);
}

void func_358(char* sParam0)
{
	Global_1915715->f_22470 = func_382(sParam0, 10000, 0, 0, 0, 1);
}

bool func_359(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_3() == 0)
	{
		return func_383(iParam0);
	}
	return iParam0 <= func_384();
}

bool func_360(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_379(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
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
				if (!bParam4 && !func_359(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_356(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_385(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_386(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_86(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_361(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_362(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_365(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_365(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_365(*iParam0, 2, 0, 0);
		return false;
	}
	func_365(*iParam0, 1, 0, 0);
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

int func_363(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_387(&uParam0, iParam4, bParam5, iParam6);
}

int func_364(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_236(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_388(iParam0, iParam1, iParam2, iParam3);
}

int func_366(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_367(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_368(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_369(int iParam0, int iParam1)
{
	iVar0 = func_335(*iParam0);
	iVar1 = func_334(*iParam0);
	if (iParam1 < 1 || iParam1 > func_340(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_370(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_373(int iParam0, int iParam1)
{
	return iParam1 == func_4(iParam0, 1224357681);
}

int func_374(int iParam0, int iParam1)
{
	iVar0 = _0xcc644bc1dd655269(iParam1, 0);
	if (!func_138(iVar0))
	{
		return 0;
	}
	iVar1 = _0xf540239f9937033b(iVar0, -489628648);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (_0xf27f01bbf5acd3f3(iVar0, -489628648, iVar2, Var3[iVar2]))
		{
			if (func_22(&(Var3[iVar2]), 0) && &Var3[iVar2] == iParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_375(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1915715->f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915715->f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_376(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_389(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_390(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_391(iVar5);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	iVar0 = func_392(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_365(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_365(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_378(int iParam0, bool bParam1, bool bParam2)
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

bool func_379(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_305(iParam0))
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
		func_393(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_380(int iParam0)
{
	return func_157(iParam0) == 1946043663;
}

bool func_381(int iParam0)
{
	return func_157(iParam0) == -126813555;
}

var func_382(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_383(int iParam0)
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

int func_384()
{
	if (func_3() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_385(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_5(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_247(0) };
	Var0.f_4 = func_394(iParam1);
	Var5 = { func_183(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_163(0), &Var5, 0);
	return iVar9;
}

int func_387(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_395(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_396(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_389(int iParam0)
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

bool func_390(int iParam0, var uParam1)
{
	if (!func_397(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_391(int iParam0)
{
	if (func_3() != -1)
	{
		if (Global_1071686->f_12)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_398(iParam0);
}

int func_392(int iParam0)
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

void func_393(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_157(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_394(int iParam0)
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

bool func_395(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_163(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_326(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_396(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_399(&(uParam0->f_4));
}

bool func_397(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
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
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		case 39:
			return 374439621;
		default:
			break;
	}
	return 0;
}

void func_399(var uParam0)
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

