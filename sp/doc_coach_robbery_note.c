void __EntryFunction__()
{
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	Var0.f_147 = 1;
	Var0.f_127 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(523))
	{
		Var0.f_144 = 1;
		func_1(&Var0, Global_1911866);
	}
	if (func_2())
	{
		_0xed27560703f37258(Global_35);
	}
	Var0.f_134 = _create_anim_scene("lightrig@player_journal", 0, "plMain", false, true);
	load_anim_scene(Var0.f_134);
	Var0.f_142 = 0;
	if (get_game_timer() >= &Global_1911773 && get_game_timer() >= Global_36632)
	{
		Var0.f_119.f_4 = _get_scenario_point_ped_is_using(Global_35, false);
		Var0.f_142 = 1;
	}
	Global_1911773 = 0;
	Global_36634 = 0;
	Global_36635 = 0;
	if (get_game_timer() < Global_36615 || Var0.f_142)
	{
		Global_36634 = 1;
		Global_36635 = 1;
	}
	if (Global_1935689->f_10189 == 0 || get_game_timer() <= Global_1935496->f_59.f_2 + 3000)
	{
		Global_36634 = 1;
	}
	while (func_3(&Var0, Global_1911866))
	{
		Var0.f_130 = _get_item_interaction_from_ped(Global_35);
		if (_does_anim_scene_exist(Var0.f_134) && _is_anim_scene_loaded(Var0.f_134, true, false))
		{
			if (_0xa24c1d341c6e0d53(1, 0, 0))
			{
				if (!_is_anim_scene_started(Var0.f_134, false))
				{
					set_anim_scene_origin(Var0.f_134, Global_36, get_entity_rotation(Global_35, 2), 2);
					attach_anim_scene_to_entity_preserving_location(Var0.f_134, Global_35, -1);
					start_anim_scene(Var0.f_134);
				}
			}
			else if (_is_anim_scene_started(Var0.f_134, false))
			{
				abort_anim_scene(Var0.f_134, true);
			}
		}
		disable_control_action(0, -824104112, false);
		disable_control_action(0, 1663574939, false);
		disable_control_action(0, -620139643, false);
		disable_control_action(0, 440314811, false);
		disable_control_action(0, 2028806450, false);
		disable_control_action(0, 371916472, false);
		disable_control_action(0, 130948705, false);
		_0x8910c24b7e0046ec();
		if (_is_app_running(-605293197))
		{
			_0xc9caeaeec1256e54(382897689);
		}
		if (Var0.f_142)
		{
			func_4(&Var0, Global_1911866);
		}
		else
		{
			func_5(&Var0, Global_1911866);
		}
		func_6(&Var0, Global_1911866);
		wait(0);
	}
	func_1(&Var0, Global_1911866);
}

void func_1(var uParam0, var uParam1)
{
	if (func_7() && !Global_1935689->f_9)
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
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_10(uParam0, uParam1);
	func_11(uParam0);
	func_12(uParam0);
	if (uParam0->f_144)
	{
		func_13(uParam0, uParam1);
	}
	if (!uParam0->f_143)
	{
		if (!(*uParam1)[0]->f_1)
		{
			func_14(0);
		}
		else
		{
			(*Global_1911894)[0]->f_1 = 4;
		}
		func_14(2);
		func_14(1);
		func_15(uParam1);
	}
	else
	{
		func_16(uParam0, uParam1);
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

bool func_3(var uParam0, var uParam1)
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	if (func_17(uParam0, uParam1) && (get_game_timer() >= Global_36615 || !func_18(&Global_1911772)))
	{
		uParam0->f_144 = 1;
		return false;
	}
	return true;
}

int func_4(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_127 = _0x05a0100ea714db68(Global_35, 2120637577);
			if (does_entity_exist(uParam0->f_127))
			{
				func_20(uParam0, (*uParam1)[0]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1[0]);
				func_19(uParam0, uParam1);
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24(uParam1[0], uParam0->f_130))
			{
				func_25(uParam1[0]);
				func_26(uParam0, uParam1, 1);
				func_23(uParam0, 6);
			}
			break;
		case 6:
			func_27(uParam0, (*uParam1)[0]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30(uParam1[0], uParam0->f_130))
			{
				if (func_31(uParam1[0], -674618190))
				{
					func_23(uParam0, 7);
				}
				else
				{
					func_23(uParam0, 8);
				}
			}
			else if (func_32(&(Global_36622[3]), 1))
			{
				func_33(uParam0, uParam1[0]);
			}
			func_11(uParam0);
			break;
		case 8:
			if (func_34(uParam1[0]) && !uParam0->f_149)
			{
				func_35(uParam1[0], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_149 = 1;
			}
			func_23(uParam0, 9);
			break;
		case 7:
			uParam0->f_119.f_3 = _get_scenario_point_type(uParam0->f_119.f_4);
			uParam0->f_119 = { _get_scenario_point_coords(uParam0->f_119.f_4, true) };
			_0x4161648394262fdf(uParam0->f_119, 1f);
			if (!_does_scenario_point_exist(uParam0->f_119.f_4))
			{
				uParam0->f_119.f_4 = _find_closest_active_scenario_point_of_type(uParam0->f_119, uParam0->f_119.f_3, 1f, 1, false);
			}
			uParam0->f_119.f_5 = _get_scenario_point_entity(uParam0->f_119.f_4, "PrimaryItem");
			uParam0->f_119.f_6 = get_object_index_from_entity_index(uParam0->f_119.f_5);
			_set_apply_object_txd(uParam0->f_119.f_6, (*uParam1)[0]->f_3, 0, 0);
			func_23(uParam0, 9);
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!does_entity_exist(uParam0->f_127))
			{
				uParam0->f_127 = _0x05a0100ea714db68(Global_35, 2120637577);
			}
			if (does_entity_exist(uParam0->f_127))
			{
				(*uParam1)[0] = func_36(uParam0);
				func_37(uParam0, uParam1[0]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1[0]);
				func_19(uParam0, uParam1);
				func_20(uParam0, (*uParam1)[0]);
				func_38(uParam0, uParam1);
				if ((*Global_1911894)[0]->f_1 == 2)
				{
					func_39((*uParam1)[0], 0);
					func_40(uParam0, uParam1);
				}
				func_23(uParam0, 2);
			}
			break;
		case 2:
			if (func_39((*uParam1)[0], 0) && func_41(uParam0, uParam1))
			{
				func_23(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0, uParam1))
			{
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24(uParam1[0], uParam0->f_130))
			{
				func_26(uParam0, uParam1, 1);
				func_25(uParam1[0]);
				func_23(uParam0, 5);
			}
			break;
		case 5:
			func_27(uParam0, (*uParam1)[0]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30(uParam1[0], uParam0->f_130))
			{
				func_23(uParam0, 9);
			}
			else if (func_42(&(Global_36622[2])) && func_43(&(Global_36622[2]), 1))
			{
				func_23(uParam0, 9);
				uParam0->f_144 = 1;
				Global_1935689->f_9 = 1;
				Global_36633 = get_game_timer() + 10000;
				func_44(1);
			}
			else if (func_32(&(Global_36622[3]), 1))
			{
				func_33(uParam0, uParam1[0]);
			}
			else if (!Global_36634 && func_45(uParam0))
			{
				uParam0->f_143 = 1;
				func_23(uParam0, 9);
			}
			func_11(uParam0);
			break;
	}
	return 0;
}

int func_6(var uParam0, var uParam1)
{
	Global_1935496->f_59.f_4 = get_game_timer() + 5000;
	if (Global_36621 == 1)
	{
		iVar0 = _get_item_interaction_from_ped(Global_35);
		if (iVar0 == func_46(&Global_1911772))
		{
			Global_36621 = 2;
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

bool func_7()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

void func_8(var uParam0, var uParam1)
{
	switch (uParam1[0])
	{
		case -1280336729:
		case -691125380:
		case -287018478:
		case 305626647:
			if (uParam1[0] == -1280336729)
			{
				iVar0 = 84;
			}
			else if (uParam1[0] == -691125380)
			{
				iVar0 = 86;
			}
			else if (uParam1[0] == -287018478)
			{
				iVar0 = 87;
			}
			else if (uParam1[0] == 305626647)
			{
				iVar0 = 88;
			}
			if (func_47(iVar0) && !func_48(iVar0))
			{
				func_49(iVar0, 1);
				if (func_50(0, 0, 1))
				{
					func_51(iVar0, 2);
				}
				else
				{
					func_52(iVar0);
				}
				if (!func_53(26, 32))
				{
					if ((((func_54(84, 0) || func_48(84)) && (func_54(86, 0) || func_48(86))) && (func_54(87, 0) || func_48(87))) && (func_54(88, 0) || func_48(88)))
					{
						MemCopy(&cVar1, {(*Global_1347702)[26]->f_1}, 3);
						StringConCat(&cVar1, "_obj2", 24);
						if (does_text_label_exist(&cVar1) && _uilog_is_entry_registered(func_55(26), func_56(26)))
						{
							cVar4 = func_57(0, &cVar1, 0, 0, -1, -1);
							func_58(26, &cVar1, cVar4, -1082130432);
							func_51(26, 32);
						}
					}
				}
			}
			break;
	}
}

int func_9(int iParam0)
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

void func_10(var uParam0, var uParam1)
{
	func_59(1);
	_text_database_delete("SCRB");
}

void func_11(var uParam0)
{
	if (uParam0->f_5.f_1 && !_is_app_running(-605293197))
	{
		play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_12(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_5.f_63))
	{
		_databinding_remove_data_entry(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_64[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_64[iVar0]));
		}
		if (_databinding_is_data_id_valid(&(uParam0->f_5.f_89[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_5.f_89[iVar0]));
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

void func_13(var uParam0, var uParam1)
{
	iVar0 = uParam1[0];
	if (*uParam0 == 0 && iVar0 == 0)
	{
		iVar0 = &Global_1911772;
	}
	if (iVar0 != 0)
	{
		if (func_46(iVar0) != 0)
		{
			_0xb35370d5353995cb(Global_35, func_46(iVar0), 1048576000);
		}
		if (((uParam0->f_142 && func_34(iVar0)) && !func_60(iVar0, 1, 0)) && !uParam0->f_149)
		{
			func_35(iVar0, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_149 = 1;
		}
	}
}

void func_14(int iParam0)
{
	(*Global_1911894)[iParam0]->f_1 = 3;
	(*Global_1911894)[iParam0] = 0;
	(*Global_1911894)[iParam0]->f_5 = 0;
}

void func_15(var uParam0)
{
	if (!Global_1935689->f_9)
	{
		if (((func_31(&Global_1911772, -1472964441) || func_31(&Global_1911772, 1841149704)) || func_31(&Global_1911772, 566155764)) || func_31(&Global_1911772, -228153877))
		{
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 1;
			Global_1935496->f_59.f_1 = &Global_1911772;
			Global_1935496->f_59.f_5 = get_game_timer();
		}
	}
	Global_1911772 = 0;
	Global_36632 = 0;
	Global_36621 = 2;
	(*Global_1911866)[0]->f_2 = 0;
	func_61(uParam0);
}

void func_16(var uParam0, var uParam1)
{
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_136)
	{
		func_62(uParam1);
	}
	else
	{
		func_63(uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_64(uParam1);
	(*uParam1)[0]->f_2 = 0;
	Global_1911772 = uParam1[0];
	func_65(uParam1[0], 0, 1, 0, 0f);
	animpostfx_play("CamTransition01");
	Global_36632 = get_game_timer() + 3000;
}

bool func_17(var uParam0, var uParam1)
{
	if (is_entity_dead(Global_35))
	{
		return true;
	}
	if (!_0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	if (!func_66(16))
	{
		return true;
	}
	if ((!uParam0->f_144 && *uParam0 > 4) && func_67(uParam1[0]))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0)
{
	switch (iParam0)
	{
		case -1043796944:
		case -904734609:
		case -595619260:
		case -31140163:
		case 1272643670:
		case 1760651454:
		case 2019023183:
			return true;
	}
	return false;
}

void func_19(var uParam0, var uParam1)
{
	if (!uParam0->f_148)
	{
		if (func_24(uParam1[0], uParam0->f_130))
		{
			func_26(uParam0, uParam1, 0);
			uParam0->f_148 = 1;
		}
	}
}

void func_20(var uParam0, var uParam1)
{
	*uParam1 = func_36(uParam0);
	uParam1->f_4 = func_68(*uParam1, -949239683);
	uParam1->f_1 = func_69(uParam1->f_4);
	if (uParam1->f_1)
	{
		if (_item_database_fillout_item_info(*uParam1, &Var0))
		{
			uParam1->f_5.f_2 = Var0.f_4;
		}
	}
	func_37(uParam0, *uParam1);
}

void func_21(var uParam0, var uParam1)
{
	_text_database_request("SCRB");
	iVar0 = Global_40.f_9146.f_3;
	if (func_70(37))
	{
		iVar0 = 12;
	}
	switch (iVar0)
	{
		case 4:
			sLocal_15 = "CR_RHD_R1";
			break;
		case 5:
			sLocal_15 = "CR_RHD_R2";
			break;
		case 6:
			sLocal_15 = "CR_RHD_R3";
			break;
		case 12:
			sLocal_15 = "CR_RHD_RSC";
			break;
		case 13:
			sLocal_15 = "CR_RHD_RTL";
			break;
		case 0:
			sLocal_15 = "CR_STR_R1";
			break;
		case 1:
			sLocal_15 = "CR_STR_R2";
			break;
		case 2:
			sLocal_15 = "CR_STR_R3";
			break;
	}
}

void func_22(var uParam0, int iParam1)
{
	if (func_31(iParam1, -98816307))
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 1, -1);
	}
	if (func_31(iParam1, -1903335637))
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	if (uParam0->f_146)
	{
		if (func_31(iParam1, -98816307))
		{
			_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
			_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", 1, -1);
		}
	}
	func_71(uParam0);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_24(int iParam0, int iParam1)
{
	switch (func_68(iParam0, -949239683))
	{
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

void func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1048152290:
			func_72((*Global_1392626)[7]->f_3, 1);
			break;
		case -2114196387:
		case 1824375265:
			func_49(129, 1);
			break;
		case -1030126569:
			if (!func_73(Global_40.f_11623[11]->f_1, 4194304))
			{
				func_74(&(Global_40.f_11623[11]->f_1), 4194304);
			}
			break;
	}
	func_75(iParam0);
	func_76(iParam0);
	func_77(iParam0);
}

int func_26(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!func_78(uParam1[2], 0))
			{
				Global_36627[1] = 0;
				if (func_42(&(Global_36622[1])))
				{
					func_79(&(Global_36622[1]), 0, 1);
				}
			}
			else
			{
				Global_36627[1] = 1;
				if (func_42(&(Global_36622[1])))
				{
					func_79(&(Global_36622[1]), 1, 1);
				}
			}
			if (!func_78(uParam1[1], 0))
			{
				Global_36627[0] = 0;
				if (func_42(&(Global_36622[0])))
				{
					func_79(&(Global_36622[0]), 0, 1);
				}
			}
			else
			{
				Global_36627[0] = 1;
				if (func_42(&(Global_36622[0])))
				{
					func_79(&(Global_36622[0]), 1, 1);
				}
			}
		}
		Global_36627[3] = func_80(uParam0, (*uParam1)[0]);
		if (func_42(&(Global_36622[3])))
		{
			func_79(&(Global_36622[3]), &(Global_36627[3]), 1);
		}
		if (uParam1[0] == -1084135070)
		{
			Global_36636 = 1;
		}
		Global_36621 = 1;
	}
	if (uParam0->f_142)
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

void func_27(var uParam0, var uParam1)
{
	if (!func_24(*uParam1, uParam0->f_130) && !func_81(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (func_82(&(Global_36622[0]), 1))
			{
				uParam0->f_139 = 0;
			}
			else
			{
				uParam0->f_139 = 1;
			}
			if (func_82(&(Global_36622[1]), 1))
			{
				uParam0->f_140 = 0;
			}
			else
			{
				uParam0->f_140 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_83(Global_36622[iVar0], 0);
				iVar0++;
			}
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		func_84(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_139) || (iVar1 == 1 && !uParam0->f_140)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_83(Global_36622[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_138 = 0;
	}
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_141 && func_85(uParam1[0], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		func_86(uParam1[0]);
	}
}

void func_29(var uParam0, var uParam1)
{
}

bool func_30(int iParam0, int iParam1)
{
	switch (func_68(iParam0, -949239683))
	{
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

bool func_31(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
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

bool func_32(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_33(var uParam0, int iParam1)
{
	if (func_31(iParam1, -1227898937))
	{
		if (_launch_app_by_hash_with_entry(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_88(uParam0, iParam1);
		}
	}
	else if (_launch_app_by_hash_with_entry(-605293197, -1769873703) == 0)
	{
		uParam0->f_5.f_1 = 1;
		play_sound_frontend("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_88(uParam0, iParam1);
	}
}

bool func_34(int iParam0)
{
	switch (iParam0)
	{
		case -1043796944:
		case -31140163:
		case 1272643670:
		case 2019023183:
			return false;
	}
	return true;
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!func_89(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_90(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_91(iParam0, bParam2);
	iVar2 = 0;
	if (func_92(iParam0, 0, 0) == 0)
	{
		if (func_93(iParam0))
		{
			iVar5 = func_94(iParam0);
			iVar6 = func_95(iVar5);
			iVar7 = func_96(iVar6) + 1;
			func_97(iVar5);
			if (func_98(38))
			{
				func_99(483, 0);
			}
			else
			{
				func_99(482, 0);
			}
			if (iVar7 == func_100(iVar6))
			{
				func_35(func_101(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_102() && func_103(4))
				{
					if (func_102() && (func_104(38) || func_98(38)))
					{
						func_106(38, func_101(iVar6), 0, 0, func_105(), 0, -1, 0);
						func_107(2);
					}
					else
					{
						func_106(38, func_101(iVar6), 0, 0, func_105(), 0, -1, 0);
						func_107(1);
					}
				}
			}
			else if (func_102() && func_103(4))
			{
				if (func_102() && (func_104(38) || func_98(38)))
				{
					func_106(38, 0, 0, 0, func_105(), 0, -1, 0);
					func_107(2);
				}
				else
				{
					func_106(38, 0, 0, 0, func_105(), 0, -1, 0);
					func_107(1);
				}
			}
			if (func_102() && func_103(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_102() && (func_104(38) || func_98(38)))
					{
						func_108(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_108(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_109(iParam0) == -1037537535)
	{
		if ((!func_31(iParam0, 866047851) && !func_31(iParam0, -1979000645)) && !func_31(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_110(iParam0, 8388608) && !func_111(28))
	{
		func_112(28);
	}
	if (!bVar3)
	{
		if (func_31(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_113(iParam0) == -1447088266)
			{
				iVar1 = func_115(func_114(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_116() == -1)
					{
						func_117(iVar1);
					}
					if (func_118(0) && func_119(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_120(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_116() == -1)
					{
						func_117(iParam0);
					}
					if (func_118(0) && func_119(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_120(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_109(iParam0) == -427144552)
		{
			if (!func_121(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_109(iParam0) == 307971639 && func_122(iParam0))
		{
			if (!func_123(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_31(iParam0, 866047851))
		{
			func_124(iParam0);
		}
		else if (func_31(iParam0, 2000026003))
		{
			func_125(iParam0);
		}
		else if (func_31(iParam0, -103750053))
		{
			func_127(func_126(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_127(func_128(-717883113, 2091222383), iVar0);
		}
		else if (func_31(iParam0, -121341956) && !func_31(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_129((*Global_1835011)[4]->f_1, 1))
				{
					func_99(498, 0);
				}
			}
			if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
			{
				func_130(iParam0);
			}
		}
		else if (func_31(iParam0, -136654233))
		{
			if (func_31(iParam0, -1021472396))
			{
			}
		}
		else if (func_31(iParam0, -1466706512) && func_31(iParam0, 1147021565))
		{
			func_99(484, 0);
		}
		else if (func_31(iParam0, 1147021565) && func_31(iParam0, -524514947))
		{
		}
		else if (func_31(iParam0, 554195525))
		{
		}
		else if (func_31(iParam0, 589988438))
		{
			if (func_131())
			{
				func_132(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_31(iParam0, 787083290) && func_31(iParam0, 949916894))
		{
			func_133(iParam0);
		}
		else if (func_31(iParam0, -1718133314))
		{
			func_134(iParam0);
		}
		else if (func_31(iParam0, -1738650224))
		{
			func_135(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, 949916894))
		{
			func_136(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_31(iParam0, 1841149704))
		{
			func_137();
		}
		else if (func_31(iParam0, 606799272))
		{
			func_138(iParam0, iParam1);
			func_139(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_140(iParam0, 0, 0, 0);
		}
		else if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
		{
			func_130(iParam0);
		}
		else if (func_31(iParam0, -1921346699))
		{
			if (func_116() != -1)
			{
				return 0;
			}
			func_141(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_31(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_60(215778062, 1, 0))
					{
						func_35(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_60(670273567, 1, 0))
					{
						func_35(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_60(-967317137, 1, 0))
					{
						func_35(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_60(526074061, 1, 0))
					{
						func_35(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_60(-1045488665, 1, 0))
					{
						func_35(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_60(471514780, 1, 0))
					{
						func_35(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_31(iParam0, -839724752) && func_110(iParam0, 4))
		{
			if (!func_98(42))
			{
				func_142(iParam0);
			}
		}
		else if (func_31(iParam0, 1399091007))
		{
			func_143(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_31(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_35(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
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
			case -1185145312:
				func_112(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_144(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_145(&iVar9, 0))
				{
					func_119(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_116() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_144(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_99(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_146();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_147();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_148();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_149();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_150();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_151(499813453, 854119837, 0);
				func_152(499813453, 0);
				func_153(1);
				break;
			case 2127812557:
				func_151(499813453, -1292544588, 0);
				func_152(499813453, 0);
				func_153(2);
				break;
			case 808991383:
				func_151(499813453, -1003325394, 0);
				func_152(499813453, 0);
				func_153(4);
				break;
			case 1134518629:
				func_151(666607663, -335460405, 0);
				func_152(666607663, 0);
				func_154(1);
				break;
			case 902940106:
				func_151(666607663, 903797617, 0);
				func_152(666607663, 0);
				func_154(2);
				break;
			case -418174898:
				func_151(666607663, 669728650, 0);
				func_152(666607663, 0);
				func_154(4);
				break;
			case -648114971:
				func_151(-220219788, 1214120047, 0);
				func_152(-220219788, 0);
				func_155(1);
				break;
			case 211153747:
				func_151(-220219788, 655769340, 0);
				func_152(-220219788, 0);
				func_155(2);
				break;
			case -32876996:
				func_151(-220219788, 885316185, 0);
				func_152(-220219788, 0);
				func_155(4);
				break;
			case 1191437462:
				func_151(218622660, -1491419385, 0);
				func_152(218622660, 0);
				func_156(1);
				break;
			case 1119149048:
				func_151(218622660, 1809565830, 0);
				func_152(218622660, 0);
				func_156(2);
				break;
			case 506073827:
				func_151(390004462, -628873767, 0);
				func_152(390004462, 0);
				func_157(1);
				break;
			case -1876986168:
				func_151(390004462, -405421956, 0);
				func_152(390004462, 0);
				func_157(2);
				break;
			case 2142623221:
				func_151(390004462, -1108972386, 0);
				func_152(390004462, 0);
				func_157(4);
				break;
			case 1508215381:
				func_151(6410548, 1053716392, 0);
				func_152(6410548, 0);
				func_158(1);
				break;
			case -888935280:
				func_151(6410548, 806507056, 0);
				func_152(6410548, 0);
				func_158(2);
				break;
			case -1252474566:
				func_151(6410548, 1571925350, 0);
				func_152(6410548, 0);
				func_158(4);
				break;
			case -1465702449:
				func_151(6410548, 1330352282, 0);
				func_152(6410548, 0);
				func_158(8);
				break;
			case -21093309:
				func_160(242, func_159(-21093309), 0);
				break;
			case 204375141:
				func_160(240, func_159(204375141), 0);
				break;
			case -417963070:
				func_160(241, func_159(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
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
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_161(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_99(488, 0);
				break;
			case 1613651027:
				func_99(491, 0);
				break;
			case -885810591:
				func_99(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_35(func_162(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_35(func_163(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_111(1))
				{
					func_99(487, 0);
				}
				break;
			case -898386032:
				func_99(486, 0);
				break;
			case -2035110427:
				if (func_116() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_99(496, 0);
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
		iVar10 = iParam0;
		func_164(&iVar10);
		if (!func_165(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_118(0))
		{
			return 1;
		}
		if (func_109(iParam0) == -1037537535)
		{
			func_166(iParam0);
		}
		if (func_31(iParam0, -1979000645))
		{
			func_167(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_118(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_35(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_168(iVar2, 0);
		}
	}
	Var35 = { func_169(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_170(iParam0);
	if (fParam6 > 0f)
	{
		if (func_31(iParam0, -839724752))
		{
			func_171(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_172(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_36(var uParam0)
{
	if (uParam0->f_142)
	{
		if (decor_exist_on(uParam0->f_127, "letter_item"))
		{
			iVar0 = decor_get_int(uParam0->f_127, "letter_item");
		}
		else
		{
			iVar0 = _0x804425c4bbd00883(Global_35);
			if (!func_78(iVar0, 0))
			{
				iVar0 = 323269915;
			}
		}
		Global_1911772 = iVar0;
	}
	else
	{
		iVar0 = &Global_1911772;
	}
	return iVar0;
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_131 = _item_database_localization_get_num_label_types(iParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_131)
	{
		uParam0->f_5.f_2[iVar0] = _item_database_localization_get_type(iParam1, iVar0);
		uParam0->f_5.f_2[iVar0]->f_2 = &uParam0->f_5.f_2[iVar0];
		uParam0->f_5.f_2[iVar0]->f_1 = _item_database_localization_get_num_values(iParam1, uParam0->f_5.f_2[iVar0]->f_2);
		iVar0++;
	}
}

void func_38(var uParam0, var uParam1)
{
	func_173(uParam0, uParam1[0]);
	func_174(uParam0, uParam1);
	if (uParam1[1] != 0)
	{
		func_175(1, uParam1[1]);
	}
	else
	{
		func_14(1);
	}
	func_176(uParam0, uParam1);
	if (uParam1[2] != 0)
	{
		func_175(2, uParam1[2]);
	}
	else
	{
		func_14(2);
	}
	func_177(uParam1);
	func_178(uParam1);
}

int func_39(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		return 1;
	}
	else if (func_179(*uParam0, &iVar0, 805880880, -401018458, 0, 0))
	{
		if (_does_streamed_txd_exist(iVar0))
		{
			_request_streamed_txd(iVar0, false);
			uParam0->f_3 = iVar0;
		}
	}
	return 1;
}

bool func_40(var uParam0, var uParam1)
{
	if (func_180(uParam0, (*uParam1)[0]))
	{
		func_175(0, uParam1[0]);
		func_181(uParam0, uParam1);
		return true;
	}
	return false;
}

int func_41(var uParam0, var uParam1)
{
	if (_text_database_has_loaded("SCRB"))
	{
		func_182(sLocal_15, 0, 0, 1);
		return 1;
	}
	return 0;
}

bool func_42(int iParam0)
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

bool func_43(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_44(bool bParam0)
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

bool func_45(var uParam0)
{
	iVar0 = 0;
	uParam0->f_136 = 0;
	if (func_32(&(Global_36622[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_136 = 1;
		func_83(Global_36622[1], !uParam0->f_151);
		func_83(Global_36622[0], 1);
	}
	if (func_32(&(Global_36622[0]), 1))
	{
		iVar0 = 1;
		func_83(Global_36622[0], !uParam0->f_150);
		func_83(Global_36622[1], 1);
	}
	return iVar0;
}

int func_46(int iParam0)
{
	switch (func_68(iParam0, -949239683))
	{
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

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_48(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_129((*Global_1347702)[iParam0]->f_15, 1);
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_183((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_129((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_183((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_129((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_184(iParam0);
}

bool func_50(int iParam0, bool bParam1, bool bParam2)
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
		if (func_185())
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
		iVar0 = func_186(&(Global_1898164->f_1[0]));
		if (func_47(iVar0) && func_183((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_187(&(Global_1898164->f_1[0])))
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

void func_51(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_52(int iParam0)
{
	func_188();
	if (!func_47(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0];
}

bool func_53(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

bool func_54(int iParam0, bool bParam1)
{
	if (func_116() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_55(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

char* func_57(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_189(sParam1));
}

void func_58(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!_uilog_is_entry_registered(iVar0, func_56(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_56(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_59(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

bool func_60(int iParam0, int iParam1, bool bParam2)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_190(iParam0, 1))
		{
			return false;
		}
	}
	return func_92(iParam0, 0, bParam2) >= iParam1;
}

void func_61(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[0]->f_1 = 0;
	(*uParam0)[0]->f_2 = 0;
	(*uParam0)[0]->f_3 = 0;
	(*uParam0)[0]->f_4 = 0;
	(*uParam0)[0]->f_5 = 0;
	(*uParam0)[0]->f_5.f_1 = 0;
	(*uParam0)[0]->f_5.f_2 = 0;
	(*uParam0)[0]->f_5.f_3 = 0;
	func_64(uParam0);
}

void func_62(var uParam0)
{
	(*uParam0)[0] = uParam0[2];
	(*uParam0)[0]->f_1 = (*uParam0)[2]->f_1;
	(*uParam0)[0]->f_3 = (*uParam0)[2]->f_3;
	(*uParam0)[0]->f_4 = (*uParam0)[2]->f_4;
	(*uParam0)[0]->f_5 = (*uParam0)[2]->f_5;
	(*uParam0)[0]->f_5.f_1 = (*uParam0)[2]->f_5.f_1;
	(*uParam0)[0]->f_5.f_2 = (*uParam0)[2]->f_5.f_2;
	(*uParam0)[0]->f_5.f_3 = (*uParam0)[2]->f_5.f_3;
	(*uParam0)[0]->f_2 = 0;
}

void func_63(var uParam0)
{
	(*uParam0)[0] = uParam0[1];
	(*uParam0)[0]->f_1 = (*uParam0)[1]->f_1;
	(*uParam0)[0]->f_3 = (*uParam0)[1]->f_3;
	(*uParam0)[0]->f_4 = (*uParam0)[1]->f_4;
	(*uParam0)[0]->f_5 = (*uParam0)[1]->f_5;
	(*uParam0)[0]->f_5.f_1 = (*uParam0)[1]->f_5.f_1;
	(*uParam0)[0]->f_5.f_2 = (*uParam0)[1]->f_5.f_2;
	(*uParam0)[0]->f_5.f_3 = (*uParam0)[1]->f_5.f_3;
	(*uParam0)[0]->f_2 = 0;
}

void func_64(var uParam0)
{
	(*uParam0)[2] = 0;
	(*uParam0)[2]->f_1 = 0;
	(*uParam0)[2]->f_2 = 0;
	(*uParam0)[2]->f_3 = 0;
	(*uParam0)[2]->f_4 = 0;
	(*uParam0)[2]->f_5 = 0;
	(*uParam0)[2]->f_5.f_1 = 0;
	(*uParam0)[2]->f_5.f_2 = 0;
	(*uParam0)[2]->f_5.f_3 = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[1]->f_1 = 0;
	(*uParam0)[1]->f_2 = 0;
	(*uParam0)[1]->f_3 = 0;
	(*uParam0)[1]->f_4 = 0;
	(*uParam0)[1]->f_5 = 0;
	(*uParam0)[1]->f_5.f_1 = 0;
	(*uParam0)[1]->f_5.f_2 = 0;
	(*uParam0)[1]->f_5.f_3 = 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	switch (func_68(iParam0, -949239683))
	{
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
					iVar0 = -487508500;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_66(int iParam0)
{
	return func_191(iParam0);
}

bool func_67(int iParam0)
{
	return (func_31(iParam0, 566155764) && !_is_app_active(-2042186616));
}

int func_68(int iParam0, int iParam1)
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

bool func_69(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

bool func_70(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_192((*Global_1347702)[iParam0]->f_15);
}

void func_71(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		_0xcb9401f918cb0f75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
	}
}

void func_72(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	func_193(iParam0, iParam1);
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case -1260334554:
			Global_40.f_9146.f_94[4] = 1;
			break;
		case -1492175229:
			Global_40.f_9146.f_94[5] = 1;
			break;
		case 1585456486:
			Global_40.f_9146.f_94[6] = 1;
			break;
		case -884998428:
			Global_40.f_9146.f_94[12] = 1;
			break;
		case -2114196387:
		case 1824375265:
			Global_40.f_9146.f_94[13] = 1;
			break;
		case 667072496:
			Global_40.f_9146.f_94[0] = 1;
			break;
		case 268535918:
			Global_40.f_9146.f_94[1] = 1;
			break;
		case -866909932:
			Global_40.f_9146.f_94[2] = 1;
			break;
	}
}

void func_76(int iParam0)
{
	if (func_31(iParam0, 1989861793))
	{
		iVar0 = func_68(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_194(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_195(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_196(iVar14, iVar1);
					if (iVar15 != iParam0 && func_78(iVar15, 0))
					{
						if (func_197(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_198(iVar1);
				if (bVar13)
				{
					func_199(iParam0);
				}
				else
				{
					func_99(306, 0);
				}
			}
		}
	}
}

void func_77(int iParam0)
{
	if (func_31(iParam0, 566155764))
	{
		func_200(iParam0);
		iVar0 = func_201(iParam0);
		if (iVar0 != -1)
		{
			vVar1 = { func_202(iVar0) };
			vVar4 = { func_203(iVar0) };
			_0xe0884c184728c75b(vVar1, vVar4.x);
		}
		_launch_app_by_hash(-2042186616);
	}
}

bool func_78(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_79(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_87(iParam0);
	if (bParam1)
	{
		func_204(iParam0, 4);
		func_205(iVar0, 1);
		func_206(iVar0, 1);
	}
	else
	{
		func_207(iParam0, 4);
		func_206(iVar0, 0);
	}
}

bool func_80(var uParam0, var uParam1)
{
	if (func_24(*uParam1, uParam0->f_130))
	{
		bVar0 = !func_31(*uParam1, 1051234725);
	}
	if (func_81(*uParam1, uParam0->f_130))
	{
		bVar0 = func_31(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_81(int iParam0, int iParam1)
{
	switch (func_68(iParam0, -949239683))
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

bool func_82(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	return !func_208(iParam0, 4);
}

void func_83(var uParam0, bool bParam1)
{
	if (func_42(*uParam0))
	{
		func_79(*uParam0, bParam1, 1);
	}
}

void func_84(var uParam0, var uParam1)
{
	func_83(Global_36622[3], func_80(uParam0, uParam1));
}

bool func_85(int iParam0, int iParam1)
{
	switch (func_68(iParam0, -949239683))
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

void func_86(var uParam0)
{
}

int func_87(int iParam0)
{
	return iParam0;
}

void func_88(var uParam0, int iParam1)
{
	uVar0 = _databinding_add_data_container_from_path("", "Translate");
	uParam0->f_5.f_63 = _databinding_add_data_container(uVar0, "Generic");
	if (func_31(iParam1, 1104960349))
	{
		func_209(uParam0, iParam1);
	}
	else if (func_31(iParam1, 1989861793))
	{
		func_210(uParam0, iParam1);
	}
	else if (func_31(iParam1, -772152977))
	{
		func_211(uParam0, iParam1);
	}
	else if (func_31(iParam1, -2081717885))
	{
		func_212(uParam0, iParam1);
	}
	else if (func_68(iParam1, 1224357681) == 1130538400)
	{
		func_213(uParam0, iParam1);
	}
	else if (func_31(iParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		func_214(uParam0, iParam1);
	}
	else
	{
		func_215(uParam0, iParam1);
	}
}

bool func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_116() == -1)
	{
		if (func_216(iParam0) && func_217(iParam0))
		{
			func_218(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_90(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_219(iParam0, iParam1);
	Var0 = { func_220(iParam0, 0, 1) };
	iVar5 = func_221(iParam0, &Var0, 0, 0);
	iVar6 = func_222(iParam0, 0);
	if ((iVar5 > 1 && !func_223()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_31(iParam0, -2051813666))
		{
			func_99(583, 1);
		}
		else
		{
			func_99(582, 0);
		}
	}
	if (func_224(iParam0, &Var0, *iParam1, 0, 0))
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

void func_91(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_68(iParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_225(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_226(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_227(bParam2), iParam0, 0);
	return iVar2;
}

bool func_93(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_94(iParam0) != 0;
}

int func_94(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_228())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_229(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_95(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_96(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_228())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_95(iVar0))
		{
			if (func_60(func_229(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_97(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_230(48);
	func_231(0, -1);
}

bool func_98(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_129((*Global_1347702)[iParam0]->f_15, 1);
}

void func_99(int iParam0, bool bParam1)
{
	func_232(iParam0, &iVar0, &iVar1);
	if (!func_233(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_234(iVar0, iVar1);
}

int func_100(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_101(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_102()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_103(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	return func_129((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_104(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_192((*Global_1347702)[iParam0]->f_15);
}

int func_105()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_60(func_235(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_102() && (func_104(38) || func_98(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_102() && (func_104(39) || func_98(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_236(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_102() && (func_104(41) || func_98(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_102() && (func_104(49) || func_98(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_236(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_237(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_238(iParam0, iVar13, iVar14))
	{
	}
	if (func_239(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_240(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_241(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_242(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_243(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_107(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_102() && (func_104(38) || func_98(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_102() && (func_104(39) || func_98(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_102() && (func_104(49) || func_98(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_102() && (func_104(38) || func_98(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_246(_create_var_string(2, sVar0), _create_var_string(2, func_245(func_101(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_102() && (func_104(39) || func_98(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_102() && (func_104(49) || func_98(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_244(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_109(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_110(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_111(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_248(iParam0);
}

void func_112(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	func_249(iParam0);
	func_250(iParam0);
}

int func_113(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_114(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
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
	if (func_78(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_251(iVar0) || func_252(iVar0))
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

int func_115(int iParam0, bool bParam1)
{
	if (!func_78(iParam0, 0))
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

int func_116()
{
	return Global_1572887->f_12;
}

void func_117(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_253(iParam0))
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

bool func_118(bool bParam0)
{
	if (func_116() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_227(bParam0));
}

bool func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_220(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_254((386 + iVar28), 1);
			if (func_255(iParam0, &Var0, iVar5, 0))
			{
				if (func_256(iParam0, &Var6, iVar5))
				{
					Var29 = { func_257(iParam0, Var0, iVar5, 0) };
					func_258(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_118(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_120(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_259(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_122(iParam0))
	{
		return false;
	}
	if (!func_118(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_121(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_115(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_116() == -1)
		{
			func_117(iVar0);
			if (iParam1 == 1248274121)
			{
				func_260(iVar0);
			}
		}
		if (!func_224(iParam0, &uVar1, 1, 0, 0))
		{
			func_218(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_261(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_119(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_119(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_119(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_262())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_263(iVar0))
				{
					func_119(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_119(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_264(Global_35, 2, 0, 1);
				if ((((func_253(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_111(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_253(iVar7) && func_111(24))
				{
					if (!func_119(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_119(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_119(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_99(480, 1);
	}
	return true;
}

bool func_122(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_123(int iParam0, int iParam1, int iParam2)
{
	if (!func_122(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_253(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
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
	if (func_60(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
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
		func_160(func_265(iParam0), func_159(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_116() == -1)
		{
			if (func_129((*Global_1835011)[14]->f_1, 1))
			{
				func_99(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_118(0))
	{
		if (func_120(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_165(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_124(int iParam0)
{
	if ((iParam0 == -615217896 && !func_266()) || iParam0 != -615217896)
	{
		if (func_267(Global_35, iParam0, &uVar0))
		{
			func_144(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_150();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_150();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_150();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_148();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_146();
			break;
	}
}

void func_125(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_146();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_147();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_148();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_149();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_150();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_268();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_269();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_126(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_127(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_128(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_129(int iParam0, bool bParam1)
{
	switch (func_270(iParam0))
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

void func_130(int iParam0)
{
	bVar0 = func_31(iParam0, -2017733358);
	if (func_271() < 3)
	{
		if (bVar0)
		{
			if (func_273(func_272(iParam0), iParam0))
			{
				func_160(79, func_159(func_272(iParam0)), 1);
			}
			else
			{
				func_160(78, func_159(func_272(iParam0)), 1);
			}
		}
		else
		{
			func_160(80, func_159(func_274(iParam0)), 1);
		}
	}
}

bool func_131()
{
	if (((((func_275(839908568, 400) || func_275(-1134030454, 400)) || func_275(623353496, 400)) || func_275(-344413337, 400)) || func_275(-1664948962, 400)) || func_275(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_132(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_276(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_277(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_278(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_133(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_106(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_108(51, 0, 0, 0, 0, -1, 0);
			func_279(8192);
			break;
		case 581047644:
			func_106(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_108(51, 0, 0, 0, 0, -1, 0);
			func_279(524288);
			break;
		case -644199619:
			func_106(39, 0, 0, 0, 0, 0, 1, 0);
			func_108(39, 0, 0, 0, 0, -1, 0);
			func_280(16);
			break;
		case 684296857:
			func_106(41, 0, 0, 0, 0, 0, 1, 0);
			func_108(41, 0, 0, 0, 0, -1, 0);
			func_281(8);
			break;
		case 466137807:
			func_106(49, 0, 0, 0, 0, 0, 1, 0);
			func_108(49, 0, 0, 0, 0, -1, 0);
			func_282(16);
			break;
		case -1087522507:
			func_106(43, 0, 0, -1791518714, func_283(1), 0, -1, 0);
			func_284(1);
			break;
		case -405829000:
			func_106(43, 0, 0, -2087881550, func_283(2), 0, -1, 0);
			func_284(2);
			break;
		case 378660860:
			func_106(43, 0, 0, 1908068621, func_283(4), 0, -1, 0);
			func_284(4);
			break;
		case 1566111097:
			func_106(43, 0, 0, 1611247019, func_283(8), 0, -1, 0);
			func_284(8);
			break;
		case 1276007140:
			func_106(43, 0, 0, 1319635688, func_283(16), 0, -1, 0);
			func_284(16);
			break;
	}
}

void func_134(int iParam0)
{
	if (func_285() == 1)
	{
		if (func_98(39))
		{
			func_99(342, 0);
		}
		else
		{
			func_99(343, 0);
			func_280(1);
		}
	}
	if (func_285() >= 30)
	{
		func_99(344, 0);
	}
	func_106(39, 0, 0, 0, 0, 0, -1, 0);
	func_108(39, 0, 0, func_285(), 30, 1, 0);
}

void func_135(int iParam0)
{
	if (func_286() == 1)
	{
		if (func_98(49))
		{
			func_99(409, 0);
		}
		else
		{
			func_99(410, 0);
			func_282(1);
		}
	}
	if (func_286() >= 10)
	{
		func_99(411, 0);
	}
	func_106(49, 0, 0, 0, 0, 0, -1, 0);
	func_108(49, 0, 0, func_286(), 10, 1, 0);
}

void func_136(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_99(437, 0);
			func_99(440, 0);
			func_287(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_106(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_108(51, 0, 0, sVar0, func_236(-949689219, 20), 1, 0);
			func_279(1);
			func_288(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_287(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_106(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_108(51, 0, 0, sVar0, func_236(-1248968496, 20), 1, 0);
			func_279(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_287(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_106(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_108(51, 0, 0, sVar0, func_236(1706369307, 20), 1, 0);
			func_279(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_287(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_106(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_108(51, 0, 0, sVar0, func_236(1520110311, 20), 1, 0);
			func_279(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_99(438, 0);
			func_287(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_106(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_108(51, 0, 0, sVar0, func_236(-1992824800, 20), 1, 0);
			func_279(32768);
			break;
		default:
			func_99(439, 0);
			break;
	}
}

void func_137()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_138(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_116() == -1)
	{
		if (!func_98(43))
		{
			if (iParam0 == 281887510)
			{
				func_99(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_99(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_99(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_99(400, 0);
			}
		}
		else if (func_31(iParam0, 412399755))
		{
			func_289(-1791518714);
			if (func_290() == 0)
			{
				func_231(0, 10);
				iVar1 = func_291(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_98(44))
		{
			if (iParam0 == -222563712)
			{
				func_99(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_99(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_99(401, 0);
			}
		}
		else if (func_31(iParam0, 709057512))
		{
			func_289(-2087881550);
			if (func_290() == 1)
			{
				func_231(0, 10);
				iVar1 = func_291(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_98(45))
		{
			if (iParam0 == 2116770557)
			{
				func_99(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_99(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_99(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_99(398, 0);
			}
		}
		else if (func_31(iParam0, -1478961327))
		{
			func_289(1908068621);
			if (func_290() == 2)
			{
				func_231(0, 10);
				iVar1 = func_291(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_294(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_295(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_230(48);
					}
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_98(46))
		{
			if (iParam0 == 2085530337)
			{
				func_99(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_99(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_99(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_99(406, 0);
			}
		}
		else if (func_31(iParam0, -1238404098))
		{
			func_289(1611247019);
			if (func_290() == 3)
			{
				func_231(0, 10);
				iVar1 = func_291(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_98(47))
		{
			if (iParam0 == -1521783510)
			{
				func_99(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_99(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_99(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_99(403, 0);
			}
		}
		else if (func_31(iParam0, 1160548794))
		{
			func_289(1319635688);
			if (func_290() == 4)
			{
				func_231(0, 10);
				iVar1 = func_291(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_292(iParam0) < func_293(iParam0))
					{
						func_106(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_108(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_139(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_294(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_295(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_230(48);
		}
	}
}

void func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_60(func_296(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_297(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_298(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (func_116() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_132(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_132(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_132(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_132(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_132(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_132(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_132(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_132(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_132(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_132(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_132(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_132(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_132(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_299())
			{
				func_132(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_132(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_132(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_132(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_132(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_132(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_132(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_132(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_132(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_132(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_132(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_132(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_132(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_142(int iParam0)
{
	if (func_98(41))
	{
		func_99(363, 0);
	}
	else
	{
		func_99(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_300(-1865241121);
			func_301(-642026005);
			func_302(-642026005);
			func_231(0, 10);
			break;
		case -2108314374:
			func_300(2117142684);
			func_301(-940584364);
			func_302(-940584364);
			func_231(0, 10);
			break;
		case -1193798153:
			func_300(-1409326024);
			func_301(1972645282);
			func_302(1972645282);
			func_231(0, 10);
			break;
		case -787702678:
			func_300(-641744968);
			func_301(1667205433);
			func_302(1667205433);
			func_231(0, 10);
			break;
		case -804542901:
			func_300(-946988203);
			func_301(1362715885);
			func_302(1362715885);
			func_231(0, 10);
			break;
		case -1696275132:
			func_300(-646136018);
			func_301(1053540370);
			func_302(1053540370);
			func_231(0, 10);
			break;
		case -161595323:
			func_300(-955835837);
			func_301(-1100103852);
			func_302(-1100103852);
			func_231(0, 10);
			break;
		case -1114363619:
			func_300(-179276075);
			func_301(-1409869209);
			func_302(-1409869209);
			func_231(0, 10);
			break;
		case -368407134:
			func_300(-492711560);
			func_301(-1760235357);
			func_302(-1760235357);
			func_231(0, 10);
			break;
		case 1997759228:
			func_300(1764383959);
			func_301(-138366827);
			func_302(-138366827);
			func_231(0, 10);
			break;
		case 1265573293:
			func_300(317501533);
			func_301(-1261163843);
			func_302(-1261163843);
			func_231(0, 10);
			break;
		case -1030441283:
			func_300(817753087);
			func_301(-963523016);
			func_302(-963523016);
			func_231(0, 10);
			break;
		case -1490884871:
			func_300(576606016);
			func_301(560825326);
			func_302(560825326);
			func_231(0, 10);
			break;
		case -395458616:
			func_300(814934957);
			func_301(858269539);
			func_302(858269539);
			break;
	}
}

void func_143(int iParam0, int iParam1)
{
	func_303(iParam0, iParam1, &uVar0);
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_220(iParam1, 1, 0) };
		iParam3 = func_304(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_306(iParam1, iParam2, func_305(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_307(1, (func_116() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_305(iParam3, 1)])
			{
				func_308(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_309(32768) && iParam1 != &Global_1946804->f_57[func_305(iParam3, 1)])
			{
				func_310();
				func_308(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_308(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_311(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_308(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_312(0);
			func_313(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_308(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_145(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_264(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_264(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_314("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_315(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_9(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_146()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_147()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_148()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_149()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_150()
{
	func_316();
	func_317();
	func_318();
}

void func_151(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_152(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_244(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_153(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_154(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_155(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_156(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_157(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_158(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_159(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_160(int iParam0, int iParam1, bool bParam2)
{
	func_232(iParam0, &iVar0, &iVar1);
	if (!func_233(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_319(iParam0, 1024))
	{
		return;
	}
	func_234(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_232(iParam0, &iVar0, &iVar1);
	if (!func_233(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_319(iParam0, 1024))
	{
		return;
	}
	func_234(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_162()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_228())
	{
		return func_163();
	}
	iVar4 = (func_228() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_228())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_320(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_229(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_163()
{
	iVar0 = get_random_int_in_range(0, func_228());
	return func_229(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_164(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_220(iParam0, 0, 1) };
	Var5 = { func_257(iParam0, Var0, Var0.f_4, 0) };
	return func_321(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_166(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	switch (func_113(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_322(81053684, 0) <= 0)
			{
				func_308(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_308(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_323(iParam0);
			if (func_324(iVar0))
			{
				func_325(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_308(30, iParam0, 0, 0, 0);
			}
			if (func_326() == -2125499975 || func_326() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_308(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_326() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_308(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_327(-525676072, 0))
			{
				if (func_328(-525676072, &iVar1))
				{
					func_308(33, iVar1, 0, 0, 0);
				}
			}
			func_308(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_329(99217379))
		{
			func_144(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_112(24);
		if (func_145(&iVar2, 0))
		{
			func_119(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_167(int iParam0)
{
	if (func_31(iParam0, 943695443))
	{
		func_330(0, iParam0);
	}
	else if (func_31(iParam0, -2096528786))
	{
		func_330(1, iParam0);
	}
	else if (func_31(iParam0, -1094167013))
	{
		func_330(2, iParam0);
	}
	else if (func_31(iParam0, 1936654645))
	{
		func_330(3, iParam0);
	}
	else if (func_31(iParam0, 1306489306))
	{
		func_330(4, iParam0);
	}
	else if (func_31(iParam0, 435762317))
	{
		func_330(5, iParam0);
	}
	else if (func_31(iParam0, 1259363210))
	{
		func_330(6, iParam0);
	}
	else if (func_31(iParam0, 881398259))
	{
		func_330(7, iParam0);
	}
	else if (func_31(iParam0, -541549214))
	{
		func_330(8, iParam0);
	}
	else if (func_31(iParam0, 130796156))
	{
		func_330(-1, iParam0);
	}
}

int func_168(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_331(&Var4, 1356624740);
	return func_332(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_169(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return Var0;
	}
	if (func_31(iParam0, -305066475))
	{
		if (func_116() == -1)
		{
			if (func_31(iParam0, -537818634))
			{
				return func_333(189951448);
			}
			else
			{
				return func_333(1176172851);
			}
		}
	}
	else if (func_31(iParam0, -537818634))
	{
		return func_333(-963660207);
	}
	if (func_31(iParam0, 2084895747))
	{
		return func_333(1694039471);
	}
	return Var2;
}

void func_170(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_116() == -1)
			{
				if (func_129((*Global_1835011)[4]->f_1, 1))
				{
					func_99(109, 1);
				}
			}
			break;
	}
}

void func_171(int iParam0, char* sParam1)
{
	sVar0 = func_335(func_334(0));
	func_337(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_336(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_172(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_78(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_338())
	{
		func_339(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_340(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_340(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_110(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_109(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_341(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_342(_create_var_string(10, &cVar2, _create_var_string(0, func_159(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_31(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_159(iParam0));
	}
	func_337(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_173(var uParam0, int iParam1)
{
	if (func_314("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_145 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_315(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1935689->f_10189 == 0)
					{
						if (func_343(&Var2, 0, 1))
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

bool func_174(var uParam0, var uParam1)
{
	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2] = 0;
		return false;
	}
	if (Global_36634)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_315(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_344(uParam1[0], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_150 = 0;
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

void func_175(int iParam0, int iParam1)
{
	if ((!func_31(iParam1, 747873593) && !func_31(iParam1, -1661502552)) && !func_31(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1911894[iParam0])
	{
		(*Global_1911894)[iParam0]->f_1 = 3;
		(*Global_1911894)[iParam0] = iParam1;
		(*Global_1911894)[iParam0]->f_5 = 0;
	}
}

bool func_176(var uParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_36634)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1935689->f_10189 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_315(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_344(uParam1[0], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_151 = 0;
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

void func_177(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_78(uParam0[iVar0], 0))
		{
			func_345((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_178(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_78(uParam0[iVar0], 0))
		{
			(*uParam0)[iVar0]->f_4 = func_68(uParam0[iVar0], -949239683);
		}
		iVar0++;
	}
}

bool func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_180(var uParam0, var uParam1)
{
	if (uParam1->f_2)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return true;
	}
	else if (uParam1->f_3 != 0)
	{
		if (does_entity_exist(uParam0->f_127) && _has_streamed_txd_loaded(uParam1->f_3))
		{
			if (!uParam1->f_2)
			{
				_set_apply_object_txd(uParam0->f_127, uParam1->f_3, 0, 0);
				_set_streamed_txd_as_no_longer_needed(uParam1->f_3);
			}
			uParam1->f_2 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_181(var uParam0, var uParam1)
{
	return 0;
}

var func_182(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_346(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_184(int iParam0)
{
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_54(iParam0, 0))
	{
		func_347(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_347(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_185()
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

int func_186(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_349(func_348(iParam0));
}

bool func_187(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_188()
{
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_350(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_47(iVar1) && Global_1347702[iVar1] == iVar0)
			{
				if (does_blip_exist((*Global_1347702)[iVar1]->f_37))
				{
					func_351(iVar1, 0);
					func_353(iVar1, func_352(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

char* func_189(char* sParam0)
{
	return sParam0;
}

bool func_190(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_225(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_314("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_315(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_253(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_9(iVar1);
				return true;
			}
			iVar3++;
		}
		func_9(iVar1);
	}
	return false;
}

bool func_191(int iParam0)
{
	return func_354(Global_1935496->f_27, iParam0);
}

bool func_192(int iParam0)
{
	iVar0 = func_270(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_193(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

struct<10> func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_195(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = _item_database_create_item_collection(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_196(int iParam0, int iParam1)
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

bool func_197(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_355(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_355(iParam0, Var2, 1))
				{
					if (func_356(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_356(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_99(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_50(0, 0, 1))
		{
			func_231(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_198(int iParam0)
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

void func_199(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_99(iVar0, 0);
	}
}

void func_200(int iParam0)
{
	Var0.f_3 = 1;
	Var0.f_4 = iParam0;
	_0x31010318ba9897ac(&uVar5, player_id());
	func_357(&Var0, uVar5);
}

int func_201(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (&Global_1166172->f_49[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_202(int iParam0)
{
	if (func_358(&Var3, iParam0) && func_359(&Var3))
	{
		func_360(Var3, 924198834, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_203(int iParam0)
{
	if (func_358(&Var3, iParam0) && func_359(&Var3))
	{
		func_360(Var3, 1334964216, &vVar0, 1);
	}
	return vVar0;
}

void func_204(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_205(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_208(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_206(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_207(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_208(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_209(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_361(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_361(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_361(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_361(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_361(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_361(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_361(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_361(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_210(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_361(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_361(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_211(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_361(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_361(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_361(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_361(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_361(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_212(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (iParam1)
			{
				case -975275394:
				case -670753077:
				case -530731136:
				case -284144411:
				case 333354629:
				case 640727849:
					switch (&uParam0->f_5.f_2[iVar1])
					{
						case 1410847083:
							func_361(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_361(&(uParam0->f_5), iVar2, 6, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_361(&(uParam0->f_5), iVar2, 5, 0, func_31(iParam1, -1804424566));
							iVar2++;
							break;
						case 276123595:
							func_361(&(uParam0->f_5), iVar2, 5, 0, 0);
							iVar2++;
							break;
					}
					break;
				default:
					switch (&uParam0->f_5.f_2[iVar1])
					{
						case 1410847083:
							func_361(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_361(&(uParam0->f_5), iVar2, 3, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_361(&(uParam0->f_5), iVar2, 2, 0, 0);
							iVar2++;
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_213(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 1410847083:
					func_361(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_361(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_361(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_361(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_361(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_361(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_361(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_361(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_361(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_214(var uParam0, int iParam1)
{
	if (uParam0->f_135 < 0 || uParam0->f_135 >= 12)
	{
		return;
	}
	iVar0 = uParam0->f_135;
	if (iVar0 == 0)
	{
		switch (iParam1)
		{
			case -14157738:
			case 1566650197:
			case 1767753378:
				if (func_363(func_362(3)) == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				break;
		}
	}
	uVar1 = _databinding_add_data_container_from_path("", "Newspaper");
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar3 = 0;
		if (iVar2 < uParam0->f_5.f_2[iVar0]->f_1)
		{
			if (uParam0->f_5.f_2[iVar0]->f_2 == 0)
			{
			}
			else if (_item_database_localization_get_num_values(iParam1, uParam0->f_5.f_2[iVar0]->f_2) == 0)
			{
			}
			else
			{
				iVar3 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar0]->f_2, iVar2);
				bVar4 = true;
				if (iVar3 == 493038497 || iVar3 == 0)
				{
					bVar4 = false;
				}
				func_364(iVar2, uVar1, bVar4, iVar3);
			}
			iVar2++;
		}
	}
}

void func_215(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1]->f_1)
		{
			uParam0->f_5 = _item_database_localization_get_value(iParam1, uParam0->f_5.f_2[iVar1]->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1])
			{
				case 159464507:
				case 1410847083:
					func_365(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_365(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_365(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_365(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_365(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_216(int iParam0)
{
	return func_109(iParam0) == -427144552;
}

bool func_217(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (func_110(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_224(iParam0, &uVar0, 1, 0, 0);
	}
	return func_60(iParam0, 1, 0);
}

void func_218(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_109(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_115(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_252(iVar0))
	{
		if (func_116() == -1)
		{
			func_117(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_92(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_172(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_219(int iParam0, int iParam1)
{
	if (func_31(iParam0, 58855631))
	{
		func_366(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_220(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_367(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_109(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_257(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_368(bParam1) };
			if (bParam2 && func_369(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_255(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_255(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_256(iParam0, &Var5, 1728382685))
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
			Var0 = { func_370(bParam1) };
			switch (func_113(iParam0))
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
			if (func_371(iParam0, -1823706425))
			{
				Var0 = { func_257(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_371(iParam0, -1483207246))
			{
				Var0 = { func_257(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_372(Var0, &Var27, bParam1, 0))
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

int func_221(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	if (!func_118(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_227(bParam3), iParam0);
}

int func_222(int iParam0, bool bParam1)
{
	if (func_122(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_227(bParam1), iParam0, 0);
}

bool func_223()
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_102())
	{
		return false;
	}
	if (!func_129((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_129((*Global_1835011)[2]->f_1, 1) && func_129((*Global_1347702)[120]->f_15, 1)) && !func_129((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_129((*Global_1835011)[37]->f_1, 1) && !func_129((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_129((*Global_1835011)[57]->f_1, 1) && !func_129((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_129((*Global_1835011)[26]->f_1, 1) && !func_129((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_129((*Global_1835011)[62]->f_1, 1) && func_129((*Global_1835011)[63]->f_1, 1)) && !func_129((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_129((*Global_1835011)[75]->f_1, 1) && !func_129((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_129((*Global_1835011)[76]->f_1, 1) && !func_129((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_129((*Global_1835011)[40]->f_1, 1) && func_129((*Global_1835011)[41]->f_1, 1)) && !func_129((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_129((*Global_1835011)[62]->f_1, 1) && func_129((*Global_1835011)[63]->f_1, 1)) && !func_129((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_129((*Global_1835011)[65]->f_1, 1) && func_129((*Global_1835011)[66]->f_1, 1)) && !func_129((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_373(&iParam0);
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (!func_118(0))
	{
		bParam3 = true;
	}
	if (func_216(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_368(0) };
			Var4.f_9 = -1591664384;
			if (!func_255(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_256(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_369(iParam0, 1))
			{
				if (!func_255(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_256(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_374(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_221(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_375(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_227(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_225(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_31(iParam0, 1399091007))
	{
		func_303(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_226(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_376(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_377(&Var0, func_368(0));
	}
	if (!func_378(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_9(iVar14);
	return uVar15;
}

int func_227(bool bParam0)
{
	if (func_116() == -1)
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

int func_228()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_229(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_230(int iParam0)
{
	if (func_116() != -1)
	{
		return;
	}
	iVar0 = func_379(iParam0);
	fVar1 = func_380(iParam0);
	if ((Global_1347477->f_117 || !func_111(31)) || !func_381(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_382(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_383(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_337(_create_var_string(6, func_384(iParam0), fVar1), "itemtype_textures", func_385(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_231(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_386(&Global_0, 8);
	}
	if (!func_102() || func_116() != -1)
	{
		return;
	}
	func_386(&Global_0, 1);
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_233(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_387(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_388(iParam0))
	{
		return false;
	}
	if (func_389(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_319(iParam0, 1)) || func_390(32768))
	{
		if (!func_319(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_391())
	{
		return false;
	}
	return true;
}

void func_234(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	if (!func_392(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_237(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_105() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_393(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_394(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_285() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_395(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_285(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_396(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_286() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_397(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_286(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_236(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_238(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_239(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_240(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_398(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_60(iVar2, 1, 0) || func_400(func_399(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_245(func_398(iVar0))), func_245(func_398(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_285() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_401(iVar0)), func_401(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_395() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_401(iVar0)), func_401(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_401(iVar0)), func_401(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_296(iParam3, func_402(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_292(iVar2) - iParam7) >= func_236(iParam3, func_403(iVar0));
				}
				else
				{
					bVar1 = func_292(iVar2) >= func_236(iParam3, func_403(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_292(iVar2) + iParam7) >= func_236(iParam3, func_403(iVar0));
			}
			else
			{
				bVar1 = func_292(iVar2) >= func_236(iParam3, func_403(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_404(iVar2)), func_404(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_405(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_406(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_406(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_286() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_407(iVar0)), func_407(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_397() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_407(iVar0)), func_407(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_407(iVar0)), func_407(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_296(iParam3, func_402(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_292(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_408(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_408(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_409(iVar2)), func_409(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_242(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_396() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_243(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_187(func_410(0)) && ((func_411(0) == 1 || func_411(0) == 8) || func_411(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_244(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_245(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_246(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_247(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_248(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_249(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_250(int iParam0)
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
			func_412(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_413(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_413(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_413(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_414(1);
			break;
		case 34:
			func_415(1);
			break;
		case 35:
			func_416(1);
			break;
		case 36:
			break;
		case 37:
			func_417(0);
			break;
		case 38:
			func_418(0);
			break;
		case 39:
			func_419(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_102()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_246("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_99(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_102()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_246("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_99(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_102()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_246("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_99(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_102()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_246("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_99(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_116() == -1)
			{
				if (!func_329(99217379) || func_420(99217379) == 2110595215)
				{
					if (func_262())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_60(iVar0, 1, 0))
					{
						func_165(iVar0, 1, 752097756);
					}
					func_144(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_116() == -1)
			{
				if (!func_60(1013902307, 1, 0))
				{
					func_165(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_116() == -1)
			{
				if (!func_60(1013902307, 1, 0))
				{
					func_165(1013902307, 1, 752097756);
				}
				if (!func_60(142640135, 1, 0))
				{
					func_165(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_116() == -1)
			{
				if (!func_60(786809402, 1, 0))
				{
					func_165(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_116() == -1)
			{
				if (!func_60(786809402, 1, 0))
				{
					func_165(786809402, 1, 752097756);
				}
				if (!func_60(-518019409, 1, 0))
				{
					func_165(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_421();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_251(int iParam0)
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

bool func_252(int iParam0)
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

bool func_253(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_254(int iParam0, int iParam1)
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
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_255(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_375(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_256(int iParam0, var uParam1, int iParam2)
{
	if (func_422(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_257(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_78(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_227(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_258(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_423(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_372(*uParam1, &Var0, bParam6, 0))
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
	if (!func_118(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_227(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_259(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_424(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_260(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
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
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_425();
	func_426(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_261(int iParam0)
{
	if (func_427(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
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

bool func_262()
{
	if (func_116() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_263(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_264(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_265(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_111(50))
			{
				if (!func_111(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_111(51))
			{
				if (!func_111(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_266()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_267(int iParam0, int iParam1, var uParam2)
{
	if (!func_78(iParam1, 0))
	{
		return false;
	}
	if (func_109(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_116() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_113(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_428(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_31(iParam1, 866047851))
	{
		iVar5 = func_305(iVar4, 1);
		if (func_429(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_113(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_31(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_430(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_431(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_431(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_113(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_31(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_432(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_268()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_269()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_270(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_433(iParam0);
}

int func_271()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_60(func_434(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_60(iVar0, 1, 0) && func_60(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_275(int iParam0, int iParam1)
{
	iVar0 = func_435(iParam0);
	if (iVar0 != -15)
	{
		func_426(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_436(iVar0, 1);
	}
	return false;
}

int func_276(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_60(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
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
			if (func_78(iVar25, 0) && func_31(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_277(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_337(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_278(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_437())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_337(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_438(iVar0);
			func_439(iVar0, 0, 0);
		}
		func_337(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_127(func_333(1644987397), iVar1);
	}
}

void func_279(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_280(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_281(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_282(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_283(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_292(iVar9);
	iVar2 = func_292(iVar10);
	iVar3 = func_292(iVar11);
	iVar5 = func_293(iVar9);
	iVar6 = func_293(iVar10);
	iVar7 = func_293(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_292(iVar12);
		iVar8 = func_293(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_284(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_285()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_440(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_286()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_287(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_408(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_408(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_408(iVar0))
		{
			*sParam2++;
		}
		if (func_408(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_408(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_408(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_408(iVar0))
		{
			*sParam2++;
		}
		if (func_408(iVar1))
		{
			*sParam2++;
		}
		if (func_408(iVar0) && func_408(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_408(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_408(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_408(iVar0))
		{
			*sParam2++;
		}
		if (func_408(iVar1))
		{
			*sParam2++;
		}
		if (func_408(iVar2))
		{
			*sParam2++;
		}
		if ((func_408(iVar0) && func_408(iVar1)) && func_408(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_408(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_408(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_408(iVar0))
		{
			*sParam2++;
		}
		if (func_408(iVar1))
		{
			*sParam2++;
		}
		if (func_408(iVar2))
		{
			*sParam2++;
		}
		if (func_408(iVar3))
		{
			*sParam2++;
		}
		if (((func_408(iVar0) && func_408(iVar1)) && func_408(iVar2)) && func_408(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_288(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_441(1497516462);
			func_442(2016141805);
			func_442(1010885152);
			func_442(-502324015);
			break;
		case 2016141805:
			func_442(1497516462);
			func_441(2016141805);
			func_442(1010885152);
			func_442(-502324015);
			break;
		case 1010885152:
			func_442(1497516462);
			func_442(2016141805);
			func_441(1010885152);
			func_442(-502324015);
			break;
		case -502324015:
			func_442(1497516462);
			func_442(2016141805);
			func_442(1010885152);
			func_441(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_442(-538889627);
			func_442(-538880323);
			func_442(-1056767524);
			func_441(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_443();
			func_441(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_444();
			func_441(iParam0);
			break;
		case 2019386373:
			func_442(-664252410);
			func_442(2109952320);
			func_441(2019386373);
			break;
		case -664252410:
			func_442(2019386373);
			func_442(2109952320);
			func_441(-664252410);
			break;
		case 2109952320:
			func_442(2019386373);
			func_442(-664252410);
			func_441(2109952320);
			break;
		case -1674179981:
			func_442(-1835851517);
			func_442(-1838352012);
			func_441(-1674179981);
			break;
		case -1835851517:
			func_442(-1674179981);
			func_442(-1838352012);
			func_441(-1835851517);
			break;
		case -1838352012:
			func_442(-1674179981);
			func_442(-1835851517);
			func_441(-1838352012);
			break;
		case -1717960576:
			func_442(210001842);
			func_441(-1717960576);
			break;
		case 210001842:
			func_442(-1717960576);
			func_441(210001842);
			break;
		case -150493654:
			func_442(-1271608261);
			func_442(1846061697);
			func_442(-1145519186);
			func_441(-150493654);
			break;
		case -1271608261:
			func_442(-150493654);
			func_442(1846061697);
			func_442(-1145519186);
			func_441(-1271608261);
			break;
		case 1846061697:
			func_442(-150493654);
			func_442(-1271608261);
			func_442(-1145519186);
			func_441(1846061697);
			break;
		case -1145519186:
			func_442(-150493654);
			func_442(-1271608261);
			func_442(1846061697);
			func_441(-1145519186);
			break;
		case 1766284049:
			func_442(280705402);
			func_442(1926308480);
			func_441(1766284049);
			break;
		case 280705402:
			func_442(1766284049);
			func_442(1926308480);
			func_441(280705402);
			break;
		case 1926308480:
			func_442(1766284049);
			func_442(280705402);
			func_441(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_442(439465264);
				func_441(1609506757);
			}
			else
			{
				func_442(1609506757);
				func_442(439465264);
			}
			break;
		case 439465264:
			if (func_445(1609506757))
			{
				if (bParam1)
				{
					func_441(439465264);
				}
				else
				{
					func_442(439465264);
				}
			}
			break;
		case 1822001510:
			func_442(-1612662716);
			func_441(1822001510);
			break;
		case -1612662716:
			func_442(1822001510);
			func_441(-1612662716);
			break;
		case 1306158345:
			func_442(1952610440);
			func_442(-223469678);
			func_442(-404698347);
			func_442(1517904467);
			func_441(1306158345);
			break;
		case 1952610440:
			func_442(1306158345);
			func_442(-223469678);
			func_442(-404698347);
			func_442(1517904467);
			func_441(1952610440);
			break;
		case -223469678:
			func_442(1306158345);
			func_442(1952610440);
			func_442(-404698347);
			func_442(1517904467);
			func_441(-223469678);
			break;
		case -404698347:
			func_442(1306158345);
			func_442(1952610440);
			func_442(-223469678);
			func_442(1517904467);
			func_441(-404698347);
			break;
		case 1517904467:
			func_442(1306158345);
			func_442(1952610440);
			func_442(-223469678);
			func_442(-404698347);
			func_441(1517904467);
			break;
		case 1376646519:
			func_442(931649776);
			func_442(-434590080);
			func_442(1743048395);
			func_442(449774763);
			func_441(1376646519);
			break;
		case 931649776:
			func_442(1376646519);
			func_442(-434590080);
			func_442(1743048395);
			func_442(449774763);
			func_441(931649776);
			break;
		case -434590080:
			func_442(1376646519);
			func_442(931649776);
			func_442(1743048395);
			func_442(449774763);
			func_441(-434590080);
			break;
		case 1743048395:
			func_442(1376646519);
			func_442(931649776);
			func_442(-434590080);
			func_442(449774763);
			func_441(1743048395);
			break;
		case 449774763:
			func_442(1376646519);
			func_442(931649776);
			func_442(-434590080);
			func_442(1743048395);
			func_441(449774763);
			break;
		case -1414537028:
			func_442(38162571);
			func_442(1350391819);
			func_442(54073871);
			func_441(-1414537028);
			break;
		case 38162571:
			func_442(-1414537028);
			func_442(1350391819);
			func_442(54073871);
			func_441(38162571);
			break;
		case 1350391819:
			func_442(-1414537028);
			func_442(38162571);
			func_442(54073871);
			func_441(1350391819);
			break;
		case 54073871:
			func_442(-1414537028);
			func_442(38162571);
			func_442(1350391819);
			func_441(54073871);
			break;
		case 198200492:
			func_441(198200492);
			func_442(-1124061431);
			func_442(52706132);
			func_442(-259123672);
			break;
		case -1124061431:
			func_442(198200492);
			func_441(-1124061431);
			func_442(52706132);
			func_442(-259123672);
			break;
		case 52706132:
			func_442(198200492);
			func_442(-1124061431);
			func_441(52706132);
			func_442(-259123672);
			break;
		case -259123672:
			func_442(198200492);
			func_442(-1124061431);
			func_442(52706132);
			func_441(-259123672);
			break;
		case -919512195:
			func_441(-919512195);
			func_442(-1925798111);
			func_442(420709909);
			func_442(1703426636);
			break;
		case -1925798111:
			func_441(-1925798111);
			func_442(-919512195);
			func_442(420709909);
			func_442(1703426636);
			break;
		case 420709909:
			func_441(420709909);
			func_442(-919512195);
			func_442(-1925798111);
			func_442(1703426636);
			break;
		case 1703426636:
			func_441(1703426636);
			func_442(-919512195);
			func_442(-1925798111);
			func_442(420709909);
			break;
		case -1223121209:
			func_441(-1223121209);
			func_442(630808005);
			break;
		case 630808005:
			func_441(630808005);
			func_442(-1223121209);
			break;
		case 1453909576:
			func_441(1453909576);
			func_442(1643531967);
			break;
		case 1643531967:
			func_441(1643531967);
			func_442(1453909576);
			break;
		case 0:
			func_441(0);
			func_442(473295046);
			func_442(-1738165526);
			break;
		case 473295046:
			func_441(473295046);
			func_442(0);
			func_442(-1738165526);
			break;
		case -1738165526:
			func_441(-1738165526);
			func_442(0);
			func_442(473295046);
			break;
		case 932909855:
			func_441(932909855);
			func_442(2051822093);
			break;
		case 2051822093:
			func_441(2051822093);
			func_442(932909855);
			break;
		case 405586984:
			func_441(405586984);
			func_442(1509509592);
			func_442(-959357075);
			func_442(-1311865656);
			break;
		case 1509509592:
			func_441(1509509592);
			func_442(405586984);
			func_442(-959357075);
			func_442(-1311865656);
			break;
		case -959357075:
			func_441(-959357075);
			func_442(1509509592);
			func_442(405586984);
			func_442(-1311865656);
			break;
		case -1311865656:
			func_441(-1311865656);
			func_442(1509509592);
			func_442(-959357075);
			func_442(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_441(-524145696);
			}
			else
			{
				func_442(-524145696);
			}
			func_442(1626481264);
			func_442(282809459);
			break;
		case 282809459:
			func_441(282809459);
			func_442(1626481264);
			func_442(-524145696);
			break;
		case 1626481264:
			func_441(1626481264);
			func_442(-524145696);
			func_442(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_441(885203519);
			}
			else
			{
				func_442(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_441(-1080627546);
			}
			else
			{
				func_442(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_445(iParam0))
				{
					func_441(iParam0);
				}
			}
			else if (func_445(iParam0))
			{
				func_442(iParam0);
			}
			break;
	}
}

void func_289(int iParam0)
{
	if (!func_446(iParam0))
	{
		func_448(func_447(iParam0));
	}
}

int func_290()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_446(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_291(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_292(iVar9);
	iVar2 = func_292(iVar10);
	iVar3 = func_292(iVar11);
	iVar5 = func_293(iVar9);
	iVar6 = func_293(iVar10);
	iVar7 = func_293(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_292(iVar12);
		iVar8 = func_293(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_292(int iParam0)
{
	if (func_60(iParam0, 1, 0))
	{
		iVar0 = func_92(iParam0, 0, 0);
	}
	return iVar0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_294(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_295(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_296(int iParam0, int iParam1)
{
	if (!func_392(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_297(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_296(iParam1, 5) || iParam0 == func_296(iParam1, 6)) || iParam0 == func_296(iParam1, 7)) || iParam0 == func_296(iParam1, 8)) || iParam0 == func_296(iParam1, 9))
	{
		func_287(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_106(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_108(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_298(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_296(iParam1, 5) || iParam0 == func_296(iParam1, 6)) || iParam0 == func_296(iParam1, 7)) || iParam0 == func_296(iParam1, 8)) || iParam0 == func_296(iParam1, 9))
	{
		if (func_287(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_108(51, 0, 0, iVar0, func_236(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_108(51, 0, 0, iVar0, func_236(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_299()
{
	if (func_192((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_300(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_301(int iParam0)
{
	if (!func_449(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_302(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_303(int iParam0, int iParam1, var uParam2)
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

int func_304(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_450(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_305(int iParam0, int iParam1)
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

bool func_306(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_451();
	if (iParam2 == 39)
	{
		Var0 = { func_220(iParam0, 1, 0) };
		iParam2 = func_305(func_304(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_31(iParam0, 866047851) && func_429(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_309(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_452(func_450(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_453(iParam2);
	func_454(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_455(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_455(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_456(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_457(iParam0, iParam2, iParam1, func_116() != -1);
	if (bParam4)
	{
		func_458(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_458(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_459(func_450(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_307(bool bParam0, bool bParam1, bool bParam2)
{
	func_460(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_461(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_462(Var0);
}

bool func_309(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_310()
{
	func_463(&(Global_1946804->f_2776));
	func_464(32768);
	func_459(1108822547, 8, 6);
}

int func_311(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_305(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_312(int iParam0)
{
	if (func_465(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_466(Var0);
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_466(Var0);
}

bool func_314(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_227(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_315(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_316()
{
	if (func_467())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_468(2);
	}
	if (Global_1347477->f_119)
	{
		return func_468(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_469();
	fVar2 = func_470();
	fVar3 = func_471();
	fVar4 = func_472();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_473()));
	fVar7 = (func_468(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_474(3, round((to_float(iVar8) * fVar10)), 0);
	func_475(3, fVar9, fVar9 > 100f);
	return func_476(fVar7, -100f, 100f);
}

float func_317()
{
	if (func_467())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_468(1);
	}
	if (Global_1347477->f_119)
	{
		return func_468(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_469();
	fVar2 = func_470();
	fVar3 = func_471();
	fVar4 = func_472();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_473()));
	fVar7 = (func_468(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_474(2, round((to_float(iVar8) * fVar10)), 0);
	func_475(2, fVar9, fVar9 > 100f);
	return func_476(fVar7, -100f, 100f);
}

float func_318()
{
	if (func_467())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_468(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_477())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_478())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_468(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_469();
	fVar2 = func_470();
	fVar3 = func_471();
	fVar4 = func_472();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_473()));
	fVar7 = (func_468(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_474(1, round((to_float(iVar8) * fVar10)), 0);
	func_475(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_468(0);
	}
	return func_476(fVar7, -100f, 100f);
}

bool func_319(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_320(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_321(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_78(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_224(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_118(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_227(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_479();
			}
			break;
	}
	return 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_324(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_325(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (func_480(iParam0))
	{
		return;
	}
	if (!func_481(iParam0))
	{
		func_482(iParam0, 1, 0);
	}
	iVar0 = func_483(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_484(iParam0, 512))
		{
			func_308(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_485() && !bParam1) && !func_50(0, 0, 1))
	{
		func_346(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_486(iParam0, 6);
	if (bParam2)
	{
		if (!func_50(0, 0, 1))
		{
			func_231(1, 4);
		}
	}
}

int func_326()
{
	return Global_1946804->f_1;
}

bool func_327(int iParam0, bool bParam1)
{
	return func_322(iParam0, 0) < func_487(iParam0, bParam1);
}

bool func_328(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_113(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_329(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_305(iParam0, 1)] != &Global_1946804->f_57[func_305(iParam0, 1)];
}

void func_330(int iParam0, int iParam1)
{
	if (func_31(iParam1, 130796156))
	{
		func_488(iParam1, 0);
	}
	else if (func_31(iParam1, 930141731))
	{
		func_488(iParam1, 1);
		func_489(iParam0);
	}
}

void func_331(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_332(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_490(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_491(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_333(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_334(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_335(int iParam0)
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

int func_336(int iParam0)
{
	if (!func_179(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_337(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_492(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_338()
{
	return !&Global_1911774;
}

void func_339(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_340(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_341(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_342(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_343(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_493(uParam0->f_9))
		{
			return false;
		}
	}
	if (!func_494(uParam0->f_4))
	{
		return false;
	}
	if (!func_495(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_496(uParam0->f_4))
	{
		return false;
	}
	if (func_497(0))
	{
		if (!func_78(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1935689->f_10190 == 0 && !func_498())
	{
		func_499(uParam0->f_4);
	}
	return true;
}

bool func_344(int iParam0, int iParam1)
{
	switch (func_68(iParam1, -949239683))
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
			if (Global_1935689->f_10189 != 1061777683 || func_68(iParam0, 1224357681) == func_68(iParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_345(var uParam0)
{
	if (func_69(uParam0->f_4))
	{
		if (_item_database_fillout_item_info(*uParam0, &Var0))
		{
			uParam0->f_5.f_2 = Var0.f_4;
		}
	}
}

var func_346(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_347(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_500(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_502(&iVar0, func_501(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_503(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_505(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_504()))
			{
				func_503(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_503(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

int func_348(int iParam0)
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

int func_349(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_350(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_351(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_506(&((*Global_1347702)[iParam0]->f_14));
		func_507(&((*Global_1347702)[iParam0]->f_13), 16);
		func_508(iParam0);
		if ((!func_509(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_507(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_510(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_511(iParam0, 16384);
			func_512(iParam0, 1, func_352(iParam0));
		}
	}
}

Vector3 func_352(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_513(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_353(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_50(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_390(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_514(iParam0);
	if (!bParam5 && func_515(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_516(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_517(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_518(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_116() == -1)
	{
		func_519(iParam0);
		iVar0 = func_520(Global_40.f_4283);
		if (func_521(iVar0) && func_522((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_523(iVar0);
		}
		if (func_524(iParam0, bVar1, iVar0))
		{
			func_525((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_503(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_515(iParam0) || func_183((*Global_1347702)[iParam0]->f_12, 1)) || func_183((*Global_1347702)[iParam0]->f_12, 512)) || func_526((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_503(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_527(iParam0))
		{
			if (iParam0 == 97)
			{
				func_99(185, 0);
			}
			else
			{
				func_99(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_346(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_51(iParam0, 2);
	}
}

bool func_354(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_355(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_116() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_528(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_356(int iParam0, int iParam1)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (func_528(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_357(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 25;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 5, 7, &uParam1);
	func_529(*uParam0);
}

bool func_358(var uParam0, int iParam1)
{
	*uParam0 = Global_1166172->f_155;
	uParam0->f_2 = 1335336942;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_359(var uParam0)
{
	uParam0->f_2 = 1037679264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_360(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_361(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "text", *uParam0);
	_databinding_add_data_hash(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = _databinding_add_data_container(uParam0->f_63, &cVar0);
	_databinding_add_data_bool(&(uParam0->f_89[iParam1]), "isVisible", bParam3);
}

int func_362(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_1;
}

int func_363(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_530(iParam0);
}

void func_364(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	uVar0 = _databinding_add_data_container(uParam1, func_531(iParam0));
	_databinding_add_data_hash(uVar0, "style", func_532(iParam0));
	_databinding_add_data_bool(uVar0, "isVisible", bParam2);
	if (bParam2)
	{
		_databinding_add_data_hash(uVar0, "text", iParam3);
	}
	else
	{
		_databinding_add_data_hash(uVar0, "text", 0);
	}
}

void func_365(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = _databinding_add_data_container(uParam1->f_63, func_533(iParam0, *uParam2));
		_databinding_add_data_hash(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		_databinding_add_data_hash(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

int func_366(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_78(iParam0, 0))
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

struct<4> func_367(bool bParam0)
{
	return func_257(1328661203, func_534(), -1591664384, bParam0);
}

struct<4> func_368(bool bParam0)
{
	iVar0 = func_227(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_257(923904168, func_367(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_257(923904168, func_367(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_257(923904168, func_367(bParam0), -740156546, 0);
}

bool func_369(int iParam0, bool bParam1)
{
	if (func_113(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_111(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_370(bool bParam0)
{
	iVar0 = func_227(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_257(271701509, func_367(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_257(271701509, func_367(bParam0), 12999093, 0);
}

bool func_371(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_113(iParam0);
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

bool func_372(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_227(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_373(int iParam0)
{
	if (!func_78(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_374(int iParam0, var uParam1, bool bParam2)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_220(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_254((386 + iVar29), 1);
		if (func_255(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_256(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_375(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_257(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_227(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

void func_377(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_378(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_227(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_379(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_380(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_535(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_535(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_535(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(18);
		case 2:
			return func_111(20);
		case 1:
			return func_111(19);
		default:
			break;
	}
	return true;
}

int func_382(int iParam0)
{
	return func_536(&(Global_40.f_11095.f_11[iParam0]));
}

void func_383(int iParam0, float fParam1, bool bParam2)
{
	if (func_116() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_111(31))
	{
		return;
	}
	iVar0 = func_382(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_382(iParam0);
	if (func_537(iParam0) && func_538(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_539(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_540(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_99(func_541(iParam0), 0);
					}
					func_542(iParam0, iVar2, iVar3);
					func_543(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_384(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

void func_386(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_387(int iParam0, int iParam1)
{
	if (func_116() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_388(int iParam0)
{
	if (func_116() != -1)
	{
		if (func_319(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_319(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_389(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_319(iParam0, 65536) && !func_319(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_319(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_319(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_390(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_391()
{
	return Global_1905944->f_5694;
}

bool func_392(int iParam0, var uParam1)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_393()
{
	return func_545(Global_40.f_12019);
}

int func_394()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_235(iVar1);
		if (func_60(iVar2, 1, 0) || func_400(func_399(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_395()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_546(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_396()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_405(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_397()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_400(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_405(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_406(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_408(int iParam0)
{
	if (func_547(iParam0) && func_60(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_548(iParam0) && func_549(iParam0))
	{
		return true;
	}
	return false;
}

char* func_409(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_159(iParam0));
}

int func_410(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_411(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_412(bool bParam0)
{
	if (!does_entity_exist(Global_35))
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

void func_413(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_414(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_415(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_416(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_417(bool bParam0)
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

void func_418(bool bParam0)
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

void func_419(bool bParam0)
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

int func_420(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_305(iParam0, 1)]);
}

void func_421()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_550();
		_unlock_set_unlocked(-1526891582, true);
		func_117(-916314281);
		func_165(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_117(494733111);
		func_165(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_422(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_227(0);
	*uParam1 = { func_257(iParam0, func_368(0), iParam3, 0) };
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

bool func_423(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_425()
{
	return &Global_1899515;
}

void func_426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_551(*iParam0);
	iVar1 = func_552(*iParam0);
	iVar2 = func_553(*iParam0);
	iVar3 = func_554(*iParam0);
	iVar4 = func_555(*iParam0);
	iVar5 = func_556(*iParam0);
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
	iVar6 = func_557(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_557(iVar1, iVar0);
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
	func_558(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_427(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_428(int iParam0)
{
	Var0 = { func_220(iParam0, 1, 0) };
	return func_304(Var0.f_4);
}

int func_429(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_31(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_430(int iParam0, var uParam1)
{
	iVar1 = func_305(func_559(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_113(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_431(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_305(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_309(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_432(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_433(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_560(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_435(int iParam0)
{
	return func_561(iParam0, -1);
}

bool func_436(int iParam0, bool bParam1)
{
	return func_562(func_425(), iParam0, bParam1);
}

bool func_437()
{
	if (func_266())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_438(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_563((Global_40.f_4283.f_325 + iParam0));
}

void func_439(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_437())
	{
		func_337(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_337(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_440(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_441(int iParam0)
{
	iVar0 = func_564(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_442(int iParam0)
{
	iVar0 = func_564(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_443()
{
	func_442(-939420910);
	func_442(-1187950766);
	func_442(356365161);
	func_442(753127042);
	func_442(-2038424081);
	func_442(1884271742);
	func_442(459290420);
}

void func_444()
{
	func_442(704802028);
	func_442(588987611);
	func_442(2008888900);
	func_442(1649996811);
	func_442(227918160);
	func_442(168171957);
	func_442(1193080109);
	func_442(-491981251);
	func_442(-639037538);
	func_442(-618620429);
}

bool func_445(int iParam0)
{
	iVar0 = func_564(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_446(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_448(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_449(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_450(int iParam0, int iParam1)
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

void func_451()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_452(int iParam0)
{
	func_459(iParam0, 8, 6);
}

void func_453(int iParam0)
{
	func_565(&(Global_1946804->f_2589), iParam0);
}

void func_454(int iParam0, int iParam1)
{
	func_566(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_455(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_456(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_113(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_567(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_454(iVar1, iVar3);
		}
	}
	if (func_329(-1586649372) && func_567(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_454(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
			}
			func_568(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_568(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_568(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_568(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_568(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_568(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_113(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_432(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_113(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_31(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_432(&(Global_1946804->f_1497.f_1[iVar1])) || func_31(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_454(iVar1, iVar3);
					}
				}
			}
			switch (func_113(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_113(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_113(&(uParam0->f_1[iVar1])) || func_31(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_454(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_457(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_569(0);
	if (iParam2 != 0 && func_570(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_571(iParam0, func_450(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_458(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_116() != -1;
	iVar7 = func_569(0);
	if (func_309(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_450(iVar0, 1);
			if (func_572(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_572(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_431(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_573(uParam0);
				if (iVar3 > 0)
				{
					if (!func_309(524288))
					{
						func_461(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_450(iVar0, 1);
							if (func_572(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_572(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_431(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_454(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_464(524288);
				}
			}
		}
	}
}

void func_459(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_305(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_305(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_305(iParam0, 1)])->f_10 && iParam1));
}

void func_460(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_574(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_116() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_575(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_483(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_483(Global_40.f_7729);
				Global_1946804->f_1378 = func_483(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_576(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_577(0, 1);
	}
}

void func_461(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_462(struct<4> Param0)
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
			if (func_578(Param0))
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
			func_579(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_461(8);
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
			if (func_578(Param0))
			{
				return;
			}
			func_579(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_461(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_313(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_463(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_464(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_465(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_466(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_578(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_578(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_579(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_461(8);
}

bool func_467()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_468(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_469()
{
	fVar0 = func_580(13);
	iVar1 = func_581(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_470()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_471()
{
	if (func_266())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_472()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_473()
{
	return Global_1955565->f_3;
}

void func_474(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_582(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_475(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_582(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_476(float fParam0, float fParam1, float fParam2)
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

bool func_477()
{
	return func_580(12) <= -99f;
}

bool func_478()
{
	return func_580(12) >= 99f;
}

int func_479()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_113(iVar1) == -999503751)
		{
			if (func_583() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_480(int iParam0)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	if (func_484(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_481(int iParam0)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	if (func_484(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_482(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (!func_481(iParam0))
	{
		func_486(iParam0, 2);
		if (bParam2)
		{
			if (!func_50(0, 0, 1))
			{
				func_231(1, 4);
			}
		}
		if ((!func_485() && !bParam1) && !func_50(0, 0, 1))
		{
			func_346(_create_var_string(10, "OUT_JOURN_ADD", func_584(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_484(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_485()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_486(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_487(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_488(int iParam0, bool bParam1)
{
	iVar0 = func_585(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_112(50);
			}
			else
			{
				func_112(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_112(51);
			}
			else
			{
				func_112(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_586(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_146();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_146();
			}
			break;
		case 3:
			func_112(24);
			if (bParam1)
			{
				if (!func_586(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_146();
				}
			}
			break;
	}
}

void func_489(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_587(0))
			{
				iVar0++;
			}
			if (func_587(2))
			{
				iVar0++;
			}
			if (func_587(4))
			{
				iVar0++;
			}
			if (!func_588(16))
			{
				if (iVar0 == 1)
				{
					func_589();
					func_99(456, 1);
					func_590(16);
				}
			}
			if (!func_588(32))
			{
				if (iVar0 >= 3)
				{
					func_589();
					func_99(456, 1);
					func_590(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_587(1))
			{
				iVar0++;
			}
			if (func_587(3))
			{
				iVar0++;
			}
			if (func_587(7))
			{
				iVar0++;
			}
			if (!func_588(1))
			{
				if (iVar0 == 1)
				{
					func_591();
					func_99(457, 1);
					func_590(1);
				}
			}
			if (!func_588(2))
			{
				if (iVar0 >= 3)
				{
					func_591();
					func_99(457, 1);
					func_590(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_587(5))
			{
				iVar0++;
			}
			if (func_587(6))
			{
				iVar0++;
			}
			if (func_587(8))
			{
				iVar0++;
			}
			if (!func_588(4))
			{
				if (iVar0 == 1)
				{
					func_592();
					func_99(455, 1);
					func_590(4);
				}
			}
			if (!func_588(8))
			{
				if (iVar0 >= 3)
				{
					func_592();
					func_99(455, 1);
					func_590(8);
				}
			}
			break;
	}
}

void func_490(var uParam0)
{
	func_331(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_331(uParam0, 617531372);
	}
	else
	{
		func_331(uParam0, 291123060);
	}
}

void func_491(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_593(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

void func_492(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_493(int iParam0)
{
	switch (iParam0)
	{
		case -1162387149:
		case 1084182731:
			return true;
	}
	return false;
}

bool func_494(int iParam0)
{
	iVar0 = func_109(iParam0);
	if ((iVar0 == -427144552 && iParam0 != -160924582) && iParam0 != -1016714371)
	{
		return false;
	}
	if (iVar0 == -1533212827 && iParam0 != -1167047117)
	{
		return false;
	}
	switch (iVar0)
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
			switch (func_113(iParam0))
			{
				case -525676072:
					if (iParam0 == 1147557067)
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
				default:
					return false;
			}
			break;
	}
	if (func_113(iParam0) == -829303394)
	{
		return false;
	}
	return true;
}

bool func_495(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || func_497(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_78(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return false;
		}
	}
	if (!bVar0 && func_594(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!func_497(0))
			{
				if (iParam0 == 1807503187)
				{
					return true;
				}
				if ((((((((((func_495(iParam0, -1559802791, 1) || func_495(iParam0, -1268291907, 1)) || func_495(iParam0, -96974025, 1)) || func_495(iParam0, -1666604090, 1)) || func_495(iParam0, 1561961676, 1)) || func_495(iParam0, -156634416, 1)) || func_495(iParam0, 1061777683, 1)) || func_495(iParam0, -2074770370, 1)) || func_495(iParam0, -693134279, 1)) || func_495(iParam0, -182626652, 1)) || func_595(iParam0))
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
			return func_31(iParam0, 1422457563);
		case -1268291907:
			return func_31(iParam0, 1360707454);
		case -96974025:
			return func_31(iParam0, 1009210113);
		case -1666604090:
			return func_31(iParam0, -193035453);
		case 1561961676:
			return func_31(iParam0, -111938901);
		case -156634416:
			return func_31(iParam0, -928967997);
		case 1061777683:
			return func_31(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2)
			{
				return func_596(iParam0, iParam1);
			}
			else if (func_68(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return true;
			}
			else
			{
				return func_31(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_110(iParam0, 8388608);
		case -182626652:
			if (func_597(iParam0, Global_1914319->f_16855.f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_496(int iParam0)
{
	switch (iParam0)
	{
		case -776155824:
		case -45650221:
		case 1715058708:
			return false;
	}
	if (func_497(0) && Global_1914319->f_16855 == 2)
	{
		if (!func_598(iParam0))
		{
			return false;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1854702679:
			case -1230863414:
			case -1028735103:
			case -1021394391:
			case -987306668:
			case -479775696:
			case -435742319:
			case 232875659:
			case 515229791:
			case 554799588:
			case 1265323898:
			case 1423129537:
				return false;
		}
	}
	if (func_116() == 0)
	{
		if (func_31(iParam0, -805003139))
		{
			if (!_unlock_is_visible(iParam0))
			{
				return false;
			}
		}
	}
	if (func_109(iParam0) == -2130996531 && !(func_31(iParam0, -1540973036) || func_31(iParam0, 1192444843)))
	{
		return false;
	}
	return true;
}

bool func_497(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_498()
{
	return Global_1935689->f_10;
}

void func_499(var uParam0)
{
	Global_1935689->f_10190 = uParam0;
}

bool func_500(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_501(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_502(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_503(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_504()
{
	return Global_40.f_4283.f_1;
}

bool func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_116() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_50(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_599(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_600(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_601(iVar0, 512, 1);
			}
			else
			{
				func_602(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_506(var uParam0)
{
	*uParam0 = 0;
}

void func_507(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_508(int iParam0)
{
	if (func_603(179) || func_603(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_604(1);
			}
		}
	}
	if (func_605(179))
	{
		func_606(179);
	}
	if (func_605(180))
	{
		func_606(180);
	}
}

bool func_509(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_607(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_510(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_511(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	func_608(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_608(&((*Global_1347702)[iParam0]->f_14), 2);
	func_609(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_507(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_47(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_512(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_508(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_353(iParam0, func_516(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_353(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_353(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_503(&((*Global_1347702)[iParam0]->f_13), 4096);
}

bool func_513(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_363((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

int func_514(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_47(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

bool func_515(int iParam0)
{
	if (func_116() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

Vector3 func_516(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_517(int iParam0)
{
	switch (func_116())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_518(int iParam0)
{
	if (!func_515(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_503(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_507(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_519(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_521(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_522(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_523(int iParam0)
{
	if (!func_610(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_611(iParam0))
		{
			if (vdist(Global_36, func_612(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_612(iParam0), false) <= func_613();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_613();
	}
	return func_614();
}

bool func_524(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_525(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_187(iParam0))
	{
		return;
	}
	switch (func_615(iParam0))
	{
		case 1:
			iVar0 = func_186(iParam0);
			if (func_616(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_617(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_617(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_618(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_619((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_186(iParam0);
			if (func_620(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_514(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_514(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_519(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

bool func_526(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_527(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_528(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

int func_530(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

char* func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ArticleHeading";
		case 1:
			return "ArticleSubHeading1";
		case 2:
			return "ArticleSubHeading2";
		case 3:
			return "ArticleSubHeading3";
		case 4:
			return "ArticleSubHeading4";
		case 5:
			return "ArticleBody1";
		case 6:
			return "ArticleBody2";
		case 7:
			return "ArticleBody3";
		case 8:
			return "ArticleBody4";
		case 9:
			return "ArticleBody5";
		case 10:
			return "ArticleBody6";
		case 11:
			return "ArticleBody7";
		case 12:
			return "ArticleBody8";
		case 13:
			return "ArticleBody9";
		case 14:
			return "ArticleBody10";
		default:
			break;
	}
	return "";
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
		default:
			break;
	}
	return 4;
}

char* func_533(int iParam0, int iParam1)
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

struct<4> func_534()
{
	return Var0;
}

float func_535(int iParam0)
{
	iVar4 = func_379(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_536(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_621(iVar6) - func_621(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_536(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_539(float fParam0, float fParam1)
{
	iVar0 = func_536(fParam0);
	fVar1 = to_float(func_621(iVar0));
	fVar2 = to_float(func_621(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_540(int iParam0)
{
	if (func_622(iParam0, &iVar0))
	{
		return func_621(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_623())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_623())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_623())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_542(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_624(iParam0));
	sVar4 = func_626(func_625(iVar3, iParam2));
	sVar6 = func_627(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_628(iParam0));
	iVar8 = func_629(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_630(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_244(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_631(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_543(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_544(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_545(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_546(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_547(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_549(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_632(&iVar0, 0, iVar95, &Var1) && !func_632(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_633(iVar0, &Var1);
			if (func_78(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_550()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_634(Global_35, &uVar0);
	Var30 = { func_367(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_635(0);
	func_636(7);
	func_637(-1623728698, 1, 1, 0);
	if (func_326() == 1160113249)
	{
		func_637(-763730846, 1, 1, 1);
		func_637(-361635024, 1, 1, 1);
	}
	func_638(Global_35, &uVar0);
}

int func_551(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_639(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_552(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_553(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_554(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_555(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_556(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_557(int iParam0, int iParam1)
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

void func_558(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_640(iParam0, iParam6);
	func_641(iParam0, iParam5);
	func_642(iParam0, iParam4);
	func_643(iParam0, iParam3);
	func_644(iParam0, iParam2);
	func_645(iParam0, iParam1);
}

int func_559(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_304(iVar0);
}

int func_560(int iParam0)
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

int func_561(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_227(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_640(&uVar6, iVar0);
	func_641(&uVar6, iVar1);
	func_642(&uVar6, iVar2);
	func_643(&uVar6, iVar3);
	func_644(&uVar6, iVar4);
	func_645(&uVar6, iVar5);
	return uVar6;
}

bool func_562(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_646(iParam1) || !func_646(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_563(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_333(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_564(int iParam0, int iParam1)
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

void func_565(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_647(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_647(uParam0->f_2[iVar0], 1))
				{
					func_648(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_566(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_649(uParam0, 1))
	{
		func_650(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_567(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_568(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_454(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_454(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_454(iVar2, iVar0);
		}
	}
}

int func_569(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_326();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_570(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_571(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_572(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_305(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_573(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_116() == -1)
	{
		func_651(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_652(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_575(int iParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_576(int iParam0, bool bParam1, int iParam2)
{
	func_653(&(Global_1946804->f_1378), iParam0);
	func_654(2, iParam0, 6);
	if (bParam1)
	{
		func_577(0, 1);
	}
}

void func_577(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_655(0);
	}
	if (bParam0)
	{
		func_461(8);
		func_461(512);
	}
	else
	{
		func_461(8);
		func_461(16);
	}
}

bool func_578(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_579(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_580(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_581(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_582(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_340(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_340(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_583()
{
	return Global_1946804->f_1497;
}

char* func_584(int iParam0)
{
	iVar0 = func_483(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_409(iVar0);
}

int func_585(int iParam0)
{
	if (func_656(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_657(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_658(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_659(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_586(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_60(func_660(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_587(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_60(func_661(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_588(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_589()
{
	if (func_116() != -1)
	{
		return;
	}
	func_165(1654063339, 1, 752097756);
	iVar0 = func_382(1);
	func_542(1, iVar0, 0);
}

void func_590(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_591()
{
	if (func_116() != -1)
	{
		return;
	}
	func_165(1623931083, 1, 752097756);
	iVar0 = func_382(2);
	func_542(2, iVar0, 0);
}

void func_592()
{
	if (func_116() != -1)
	{
		return;
	}
	func_165(-1845241476, 1, 752097756);
	iVar0 = func_382(0);
	func_542(0, iVar0, 0);
}

bool func_593(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_594(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1935689->f_19.f_1)
	{
		if (func_662(iParam0, &(Global_1935689->f_19.f_2[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_595(int iParam0)
{
	if (func_31(iParam0, -839724752))
	{
		return func_31(iParam0, 1937586541);
	}
	return false;
}

int func_596(int iParam0, int iParam1)
{
	if (func_31(iParam0, 173360570))
	{
		return 0;
	}
	switch (Global_1935689->f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_31(iParam0, -887064662) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_31(iParam0, -887064662) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233)) || func_31(iParam0, 554195525)) || func_31(iParam0, -1238310989)) || func_31(iParam0, 2127114599)) || func_31(iParam0, -1864584831)) || func_31(iParam0, 1068498601)) || func_31(iParam0, 1967571132))
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

bool func_597(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_663(iParam0);
	}
	if (func_664(iParam0, iParam1))
	{
		return false;
	}
	return func_665(iParam0, iParam1);
}

bool func_598(int iParam0)
{
	if (iParam0 != 0)
	{
		if (func_110(iParam0, 8388608))
		{
			iVar0 = func_296(func_666(iParam0), 10);
			if (iVar0 != 0 && func_60(iVar0, 1, 0))
			{
				Global_1901328->f_94 = 1;
				return func_667(func_666(iParam0), iParam0);
			}
			else if (iParam0 == func_296(func_668(iParam0), 5))
			{
				if (!func_48(39))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == func_296(func_669(iParam0), 5))
			{
				if (!func_48(49))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (func_670(iParam0))
			{
				if (!func_48(41))
				{
					return false;
				}
				else
				{
					return func_672(func_671(iParam0), 5, 0);
				}
			}
			else if (func_673(iParam0))
			{
				if (func_60(-1813857561, 1, 0))
				{
					if (!func_48(48))
					{
						return false;
					}
					else
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			else if (func_674(iParam0))
			{
				if (!func_48(38))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == -1813857561)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_599(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_600(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_600(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	iVar0 = func_501(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_601(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_500(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_602(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_500(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_603(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_604(int iParam0)
{
	func_59(1);
}

bool func_605(int iParam0)
{
	func_232(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_606(int iParam0)
{
	func_232(iParam0, &iVar0, &iVar1);
	func_675(iVar0, iVar1);
}

int func_607(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_676(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_608(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_609(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_610(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_611(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_612(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_613()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_614()
{
	return Global_1894899 & 2 != 0;
}

int func_615(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return func_677(func_348(iParam0));
}

bool func_616(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_678(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_617(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_679(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

int func_618(int iParam0)
{
	return func_680(iParam0);
}

bool func_619(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_620(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_524(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_622(int iParam0, int iParam1)
{
	return false;
}

bool func_623()
{
	return false;
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_227(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_227(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_227(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_625(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_626(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_627(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_628(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_631(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_632(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_681(iParam1) && !func_682(iParam1))
	{
		iVar0 = func_683(iParam1);
	}
	else
	{
		return false;
	}
	func_684(uParam3);
	iVar5 = func_685(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_633(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_686(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_687(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_634(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_253(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_635(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_78(iVar1, 0))
		{
			func_688(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_636(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_116() == -1)
	{
		func_689(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_113(iVar2) != -999503751)
		{
			func_690(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_691(iVar2, 0))
		{
			func_692(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_637(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_693(iParam0))
	{
		return;
	}
	iVar0 = func_113(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_694(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_695(0))
	{
		func_696(iParam0, 1);
		if (func_326() == 1160113249)
		{
			func_696(func_695(-2125499975), 0);
		}
		else
		{
			func_696(func_695(1160113249), 0);
		}
	}
	func_697();
	if (func_698(iVar0))
	{
		_0x766315a564594401(func_227(0), iParam0, 0);
	}
	func_692(iParam0, bParam3);
	if (bParam2)
	{
		func_577(0, 0);
	}
}

void func_638(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_252(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_639(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_640(int iParam0, int iParam1)
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

void func_641(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_642(int iParam0, int iParam1)
{
	iVar0 = func_552(*iParam0);
	iVar1 = func_551(*iParam0);
	if (iParam1 < 1 || iParam1 > func_557(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_644(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_645(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_646(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_556(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_555(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_554(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_551(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_552(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_553(iParam0);
	if (iVar5 < 1 || iVar5 > func_557(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_647(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_648(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_649(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_650(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_651(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_652(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_653(var uParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_651(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_652(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_654(int iParam0, int iParam1, int iParam2)
{
	if (func_116() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_655(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_656(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_657(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_658(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_659(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_660(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_699(iParam0);
		case 1:
			return func_700(iParam0);
		case 2:
			return func_701(iParam0);
		case 3:
			return func_702(iParam0);
	}
	return 0;
}

int func_661(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_703(iParam0);
		case 1:
			return func_704(iParam0);
		case 2:
			return func_705(iParam0);
		case 3:
			return func_706(iParam0);
		case 4:
			return func_707(iParam0);
		case 5:
			return func_708(iParam0);
		case 6:
			return func_709(iParam0);
		case 7:
			return func_710(iParam0);
		case 8:
			return func_711(iParam0);
	}
	return 0;
}

bool func_662(int iParam0, int iParam1)
{
	return iParam1 == func_68(iParam0, 1224357681);
}

int func_663(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_664(int iParam0, int iParam1)
{
	if (func_116() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_31(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_665(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_712(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_392(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_713(iVar5);
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

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			return -949689219;
		case 1610047510:
			return -1248968496;
		case 1317879106:
			return 1706369307;
		case 1062444751:
			return 1520110311;
		case 754186760:
			return -1992824800;
		default:
			break;
	}
	return 0;
}

bool func_667(int iParam0, int iParam1)
{
	iVar0 = func_236(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_672(iParam0, 5, 0) && func_672(iParam0, 6, 0)) && func_672(iParam0, 7, 0)) && func_672(iParam0, 8, 0)) && func_672(iParam0, 9, 0))
		{
			return func_110(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_672(iParam0, 5, 0) && func_672(iParam0, 6, 0)) && func_672(iParam0, 7, 0)) && func_672(iParam0, 8, 0))
		{
			return func_110(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_672(iParam0, 5, 0) && func_672(iParam0, 6, 0)) && func_672(iParam0, 7, 0))
		{
			return func_110(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_672(iParam0, 5, 0) && func_672(iParam0, 6, 0))
		{
			return func_110(iParam1, 8388608);
		}
	}
	return false;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 925148953:
			return 1175400068;
		case 1373101183:
			return 854689865;
		case -1728976206:
			return 1772877245;
		case 656082694:
			return -891504611;
		case 1821250027:
			return -1134748898;
		case -1967305143:
			return -810270260;
		case -840313695:
			return 83602522;
		case -595627572:
			return -2054476413;
		case -1301013066:
			return 1934461192;
		case 1625521054:
			return -1434912930;
		case -1796283468:
			return 491871729;
		case 1095777400:
			return -1078418763;
		case 2005280995:
			return -1360396008;
		case -2048965227:
			return -462984174;
		case -638980695:
			return -751449681;
		case 1782156874:
			return -1973995525;
		case -1064322315:
			return 1988923494;
		case -826878141:
			return -1386480124;
		case 583368543:
			return -1676256391;
		case 236671671:
			return 901975752;
		case -1210046910:
			return 2119466214;
		case -1297277988:
			return 1812453453;
		case -627446859:
			return 797237060;
		case -866431176:
			return 468989987;
		case -1899965424:
			return 1393010249;
		case 1761708178:
			return 1099957082;
		case 764875198:
			return -415281478;
		case -1613859285:
			return -722949619;
		case 1382734693:
			return 202086482;
		case 1032366068:
			return -87394864;
		default:
			break;
	}
	return 0;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 878840834:
			return 790725359;
		case 1128245693:
			return -1018620084;
		case -632432677:
			return 1417352943;
		case -425693056:
			return -198238953;
		case -37052716:
			return -1572028097;
		case 204880811:
			return 1013020015;
		case -905988301:
			return 529834059;
		case -1746545912:
			return -851121144;
		case -549854809:
			return 489753387;
		case 1756820867:
			return 288056757;
		default:
			break;
	}
	return 0;
}

bool func_670(int iParam0)
{
	switch (iParam0)
	{
		case -2108314374:
		case -1696275132:
		case -1490884871:
		case -1193798153:
		case -1114363619:
		case -1030441283:
		case -804542901:
		case -787702678:
		case -368407134:
		case -161595323:
		case 323124696:
		case 1265573293:
		case 1997759228:
			return true;
	}
	return false;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 323124696:
			return -1865241121;
		case -2108314374:
			return 2117142684;
		case -1193798153:
			return -1409326024;
		case -787702678:
			return -641744968;
		case -804542901:
			return -946988203;
		case -1696275132:
			return -646136018;
		case -161595323:
			return -955835837;
		case -1114363619:
			return -179276075;
		case -368407134:
			return -492711560;
		case 1997759228:
			return 1764383959;
		case 1265573293:
			return 317501533;
		case -1030441283:
			return 817753087;
		case -1490884871:
			return 576606016;
		default:
			break;
	}
	return 0;
}

int func_672(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_296(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == 444160793 || iVar0 == -1969404854) || iVar0 == 1761263432) || iVar0 == -843795569) || iVar0 == -832850511) || iVar0 == -1464585113) || iVar0 == -1290897778) || iVar0 == -100913452) || iVar0 == 313332607) || iVar0 == -124539232) || iVar0 == 59384454) || iVar0 == 905173572) || iVar0 == 1432949803) || iVar0 == -983831788) || iVar0 == -1882344824) || iVar0 == 323124696) || iVar0 == -2108314374) || iVar0 == -161595323) || iVar0 == -1114363619) || iVar0 == -368407134) || iVar0 == -1490884871)
	{
		if (func_60(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328->f_94 = 1;
				func_714(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == 102446365 || iVar0 == 924882045) || iVar0 == -935543049) || iVar0 == -1866642239) || iVar0 == -1193798153) || iVar0 == -804542901) || iVar0 == -1696275132) || iVar0 == -787702678) || iVar0 == 1997759228) || iVar0 == 1265573293) || iVar0 == -1030441283)
	{
		if (func_715(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

bool func_673(int iParam0)
{
	switch (iParam0)
	{
		case -1521783510:
		case -651064726:
		case -404270094:
		case -323969289:
		case -150591160:
		case 728781265:
		case 927763737:
		case 1019229063:
		case 1504361882:
		case 1714875242:
		case 1794857344:
		case 1952409553:
		case 2093126853:
			return true;
	}
	return false;
}

bool func_674(int iParam0)
{
	switch (iParam0)
	{
		case -1854702679:
		case -1230863414:
		case -1028735103:
		case -1021394391:
		case -987306668:
		case -479775696:
		case -435742319:
		case 232875659:
		case 515229791:
		case 554799588:
		case 1265323898:
		case 1423129537:
			return true;
	}
	return false;
}

void func_675(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_676(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_677(int iParam0)
{
	return iParam0 & 31;
}

bool func_678(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_679(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_716((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

bool func_681(int iParam0)
{
	iParam0 = func_717(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_682(int iParam0)
{
	iParam0 = func_717(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_681(iParam0))
	{
		return false;
	}
	iVar0 = func_683(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_683(int iParam0)
{
	iParam0 = func_717(iParam0);
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

void func_684(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_685(int iParam0)
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

void func_686(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_687(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_688(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_113(iParam0))
	{
		case -2061583405:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_718(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_697();
	}
	if (bParam1)
	{
		func_577(0, 0);
	}
}

void func_689(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_376(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_378(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_9(iVar0);
	}
}

void func_690(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_719(iParam2, *uParam0);
	func_720(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_691(int iParam0, int iParam1)
{
	Var0 = { func_220(iParam0, 0, 0) };
	Var5 = { func_257(iParam0, Var0, Var0.f_4, 0) };
	if (func_375(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_227(0), &Var5, iParam1);
	return true;
}

void func_692(int iParam0, bool bParam1)
{
	Var0 = { func_220(iParam0, 0, 0) };
	Var5 = { func_257(iParam0, Var0, Var0.f_4, 0) };
	if (func_375(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_227(0), &Var5, bParam1);
}

bool func_693(int iParam0)
{
	if (func_116() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_694(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_721(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_691(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_113(iParam0) != -999503751)
	{
		func_690(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_695(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_326();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_696(int iParam0, int iParam1)
{
	Var0 = { func_220(iParam0, 0, 0) };
	Var5 = { func_257(iParam0, Var0, Var0.f_4, 0) };
	if (func_375(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_227(0), &Var5);
	return 1;
}

void func_697()
{
	if (func_116() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_698(int iParam0)
{
	return func_723(func_722(iParam0));
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_712(int iParam0)
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

int func_713(int iParam0)
{
	return func_724(iParam0);
}

int func_714(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_78(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_225(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_172(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_60(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_169(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_92(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_92(iParam0, 0, 0) - iParam1) < 0)
		{
			func_714(iParam0, func_92(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_109(iParam0) == -427144552)
	{
		if (!func_725(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_726(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_118(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_172(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_727(iParam0, iParam1);
	return 1;
}

int func_715(int iParam0, bool bParam1)
{
	if (_is_ped_carrying(Global_35))
	{
		iVar14 = create_itemset(false);
		find_all_attached_carriable_entities(Global_35, iVar14);
		if (is_itemset_valid(iVar14))
		{
			iVar15 = get_itemset_size(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar16, iVar14));
				if (!does_entity_exist(iVar0))
				{
				}
				else if (_0x9a100f1cf4546629(iVar0) || _0xc346a546612c49a9(iVar0))
				{
					iVar21 = get_ped_index_from_entity_index(iVar0);
					iVar1 = func_728(iVar21, &uVar2);
					iVar23 = func_729(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328->f_94 = 1;
							_0x0d0db2b6af19a987(&iVar0);
							func_172(iVar23, -1, 0, 0, 0);
							Global_1901328->f_94 = 0;
						}
						destroy_itemset(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (&uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								_0x0d0db2b6af19a987(&iVar0);
								func_172(&(uVar2[iVar22]), -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							destroy_itemset(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = get_ped_index_from_entity_index(iVar0);
					func_686(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (func_687(&iVar13, iVar24, iVar17, iVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								_0x0d0db2b6af19a987(&iVar0);
								func_172(iVar13, -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							destroy_itemset(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			destroy_itemset(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_730(iParam0, bParam1);
}

bool func_716(var uParam0)
{
	if (func_731(&(uParam0->f_29), 62))
	{
		switch (func_732())
		{
			case 1:
				if (!func_731(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_731(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_731(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_731(&(uParam0->f_29), 32))
				{
					if (func_731(&(uParam0->f_29), 2))
					{
						if (func_554(func_425()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_717(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_718(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_721(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_113(iParam0) != -999503751)
		{
			func_733(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_113(iParam0) != -999503751)
	{
		func_733(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_691(iParam0, 1);
	return 1;
}

void func_719(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_720(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_734(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_305(func_428(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_735(uParam0);
	}
}

bool func_721(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_722(int iParam0)
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

bool func_723(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

int func_724(int iParam0)
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

bool func_725(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_376(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_377(&Var0, func_368(0));
	}
	if (!func_378(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_315(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_258(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_9(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_726(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_220(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_736(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_257(iParam0, Var0, Var0.f_4, bParam4) };
	return func_258(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_727(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_31(iParam0, 606799272))
		{
			func_737(iParam0, iParam1);
		}
		if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_140(iParam0, iParam1, 1, 0);
		}
	}
}

int func_728(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_686(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = _0x6b89faa36fc909a3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

int func_729(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_686(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_687(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

int func_730(int iParam0, bool bParam1)
{
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
	Var17.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar31 = func_738(0);
	if (does_entity_exist(iVar31) && func_739(_inventory_get_ped_inventory_id(iVar31), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_315(&Var17, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var17.f_4)
				{
					if (bParam1)
					{
						iVar32 = 1;
						func_740(&iVar31, iParam0, &iVar32, 1, -142743235);
					}
					func_9(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		func_9(iVar0);
	}
	return 0;
}

bool func_731(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_732()
{
	return &Global_1899516;
}

void func_733(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_741(iParam1);
	func_742(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_743(&(uParam0->f_26), iVar1);
		if (func_744(uParam0->f_26, &iVar0))
		{
			func_745(iVar0, iVar1);
		}
	}
}

void func_734(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_746(&(uParam0->f_3));
}

void func_735(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_747(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

bool func_736(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_423(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_118(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_227(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_737(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_116() == -1)
	{
		if (func_98(43))
		{
			if (func_31(iParam0, 412399755))
			{
				func_289(-1791518714);
				if (func_290() == 0)
				{
					func_231(0, 10);
					iVar0 = func_748(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_292(iParam0) < func_293(iParam0))
						{
							func_106(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_98(44))
		{
			if (func_31(iParam0, 709057512))
			{
				func_289(-2087881550);
				if (func_290() == 1)
				{
					func_231(0, 10);
					iVar0 = func_748(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_292(iParam0) < func_293(iParam0))
						{
							func_106(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_98(45))
		{
			if (func_31(iParam0, -1478961327))
			{
				func_289(1908068621);
				if (func_290() == 2)
				{
					func_231(0, 10);
					iVar0 = func_748(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_292(iParam0) < func_293(iParam0))
						{
							func_106(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_98(46))
		{
			if (func_31(iParam0, -1238404098))
			{
				func_289(1611247019);
				if (func_290() == 3)
				{
					func_231(0, 10);
					iVar0 = func_748(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_292(iParam0) < func_293(iParam0))
						{
							func_106(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_98(47))
		{
			if (func_31(iParam0, 1160548794))
			{
				func_289(1319635688);
				if (func_290() == 4)
				{
					func_231(0, 10);
					iVar0 = func_748(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_292(iParam0) < func_293(iParam0))
						{
							func_106(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_738(int iParam0)
{
	if (func_749(iParam0))
	{
		if (func_116() == -1)
		{
			iVar0 = _get_last_mount(Global_35);
			if (!does_entity_exist(iVar0))
			{
				iVar0 = func_683(func_717(0));
			}
		}
		else
		{
			iVar0 = _get_last_mount(func_750());
		}
	}
	else if (func_116() == -1)
	{
		iVar0 = func_683(0);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(get_player_index());
	}
	return iVar0;
}

bool func_739(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = _0x640f890c3e5a3ffd(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

int func_740(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = _inventory_get_ped_inventory_id(*iParam0);
	iVar1 = func_751(iVar0, iParam1);
	if (func_752(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_169(iParam1) };
		if (_stat_id_is_valid(&Var2))
		{
			_0xbd861ae8a5181ed7(&Var2, *iParam2);
		}
		if (func_753(iParam1))
		{
			func_754(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_754(*iParam0, iParam1, *iParam2);
			func_755(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_751(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_741(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_742(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_743(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_734(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_744(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_745(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_746(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_747(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_756(func_326());
	if (*uParam0)
	{
		func_746(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_116() != -1, uParam2);
	*uParam0 = 1;
}

int func_748(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_292(iVar9);
	iVar2 = func_292(iVar10);
	iVar3 = func_292(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_292(iVar12);
	}
	iVar5 = func_293(iVar9);
	iVar6 = func_293(iVar10);
	iVar7 = func_293(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_293(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_749(int iParam0)
{
	if (func_116() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = _get_last_mount(Global_35);
			if (iVar0 != func_683(7))
			{
				return true;
			}
		}
		else if (is_ped_on_mount(Global_35))
		{
			iVar0 = get_mount(Global_35);
			if (iVar0 != func_683(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = _get_last_mount(func_750());
		if (iVar0 != _0xf49f14462f0ae27c(get_player_index()))
		{
			return true;
		}
	}
	return false;
}

int func_750()
{
	return get_player_ped(255);
}

int func_751(int iParam0, int iParam1)
{
	if (!func_78(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_757(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_752(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	if (func_758(iParam0))
	{
		iVar1 = func_759(iParam0);
		if (func_78(iParam1, 0))
		{
			if (func_753(iParam1))
			{
				func_760(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_761(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_753(int iParam0)
{
	if (!func_762(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_763(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_754(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return iParam2;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (_0x0ceeb6f4780b1f2f(iParam0, iVar0) == iVar1)
		{
			_0x627f7f3a0c4c51ff(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_755(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iParam2;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar1);
	iVar4 = get_itemset_size(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar3, iVar1));
			if (!does_entity_exist(iVar2))
			{
			}
			else
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar9 = get_ped_index_from_entity_index(iVar2);
					func_686(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_687(&iVar0, iVar9, iVar5, iVar6);
					if (!func_78(iVar0, 0))
					{
						iVar0 = func_764(iVar2);
					}
				}
				else
				{
					iVar0 = func_764(iVar2);
				}
				if (iVar0 == iParam1)
				{
					_0xed00d72f81cf7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_765(iVar2);
						_0x0d0db2b6af19a987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	destroy_itemset(iVar1);
	return iParam2;
}

int func_756(int iParam0)
{
	if (func_116() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_757(int iParam0, int iParam1)
{
	Var0 = { func_766(iParam0) };
	return func_767(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_758(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_759(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_759(int iParam0)
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
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_760(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_717(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_768(iParam1);
	iVar1 = func_769(iVar0, 1);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = (&Global_40.f_1095.f_1[iParam0]->f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = func_770(&(Global_40.f_1095.f_1[iParam0]->f_298[iVar1]), 0, 10);
}

int func_761(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_78(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_771(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_169(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_751(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_751(iParam0, iParam1) - iParam2) < 0)
		{
			func_761(iParam0, iParam1, func_92(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_772(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_118(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_172(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

bool func_762(int iParam0)
{
	if (!func_78(iParam0, 0))
	{
		return false;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

int func_763(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619;
		case 1:
			return -1569450319;
		case 2:
			return 854596618;
		case 3:
			return -150200864;
		case 4:
			return 2109269555;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072;
		case 7:
			return -1858513856;
		case 8:
			return -868657362;
		case 9:
			return 1603936352;
		case 10:
			return -702790226;
		case 11:
			return -888740979;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1528935719;
		case 16:
			return 1150939141;
		case 17:
			return -1558096473;
		case 18:
			return -794277189;
		case 19:
			return -1517904196;
		case 20:
			return -1827027577;
		case 21:
			return -662178186;
		case 22:
			return -1035515486;
		case 23:
			return 238733925;
		case 24:
			return 1647012424;
		case 25:
			return 500722008;
		case 26:
			return 1642484975;
		case 27:
			return 1710714415;
		case 28:
			return 699990316;
		case 29:
			return -1648383828;
		case 30:
			return -1379330323;
		case 31:
			return -99092070;
		case 32:
			return 1963510418;
		case 33:
			return 2047376405;
		case 34:
			return -395646254;
		case 35:
			return 1584468323;
		case 36:
			return 1969175294;
		case 37:
			return 657906142;
		case 38:
			return -57190831;
		case 39:
			return -308965548;
		case 40:
			return -1102272634;
		case 41:
			return 554578289;
		case 42:
			return -983605026;
		case 43:
			return -1544126829;
		case 44:
			return -103050851;
		case 45:
			return -476045512;
		case 46:
			return 1796037447;
		case 47:
			return 1795984405;
		case 48:
			return -734947450;
		case 49:
			return -1317365569;
		case 50:
			return 1729948479;
		case 51:
			return 1466150167;
		case 52:
			return 1145777975;
		case 53:
			return 85441452;
		case 54:
			return 653400939;
		case 55:
			return 552246565;
		case 56:
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

int func_764(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_773(iVar1);
		}
	}
	return iVar0;
}

void func_765(int iParam0)
{
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	iVar1 = 878851736;
	iVar2 = Global_40.f_4283;
	if (func_774(get_entity_model(iVar0), iVar2))
	{
		iVar1 = -1708424762;
	}
	else
	{
		func_728(get_ped_index_from_entity_index(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_78(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_775(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_776(&(uVar3[iVar15]), iVar2);
				if (func_777(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_778(&iVar1);
	if (func_777(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

struct<5> func_766(int iParam0)
{
	Var0 = { func_767(iParam0, 1328661203, func_534(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_767(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_78(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_768(int iParam0)
{
	if (!func_753(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_769(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 0;
		case -1858513856:
			return 7;
		case -1827027577:
			return 20;
		case -1791452194:
			return 14;
		case -1648383828:
			return 29;
		case -1569450319:
			return 1;
		case -1558096473:
			return 17;
		case -1544126829:
			return 43;
		case -1517904196:
			return 19;
		case -1379330323:
			return 30;
		case -1317365569:
			return 49;
		case -1102272634:
			return 40;
		case -1035515486:
			return 22;
		case -983605026:
			return 42;
		case -888740979:
			return 11;
		case -868657362:
			return 8;
		case -794277189:
			return 18;
		case -734947450:
			return 48;
		case -702790226:
			return 10;
		case -662178186:
			return 21;
		case -476045512:
			return 45;
		case -395646254:
			return 34;
		case -308965548:
			return 39;
		case -150200864:
			return 3;
		case -103050851:
			return 44;
		case -99092070:
			return 31;
		case -57190831:
			return 38;
		case 0:
			return 56;
		case 85441452:
			return 53;
		case 238733925:
			return 23;
		case 459744337:
			return 12;
		case 500722008:
			return 25;
		case 552246565:
			return 55;
		case 554578289:
			return 41;
		case 653400939:
			return 54;
		case 657906142:
			return 37;
		case 699990316:
			return 28;
		case 854596618:
			return 2;
		case 1145777975:
			return 52;
		case 1150939141:
			return 16;
		case 1248540072:
			return 6;
		case 1466150167:
			return 51;
		case 1528935719:
			return 15;
		case 1584468323:
			return 35;
		case 1603936352:
			return 9;
		case 1642484975:
			return 26;
		case 1647012424:
			return 24;
		case 1710714415:
			return 27;
		case 1729948479:
			return 50;
		case 1795984405:
			return 47;
		case 1796037447:
			return 46;
		case 1914602340:
			return 13;
		case 1963510418:
			return 32;
		case 1969175294:
			return 36;
		case 2047376405:
			return 33;
		case 2109269555:
			return 4;
		case 2116849039:
			return 5;
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

int func_770(int iParam0, int iParam1, int iParam2)
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

bool func_771(int iParam0, int iParam1, int iParam2)
{
	if (!func_78(iParam1, 0))
	{
		return false;
	}
	return func_751(iParam0, iParam1) >= iParam2;
}

int func_772(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_78(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_766(iParam0) };
	Var5 = { func_767(iParam0, iParam1, Var0, Var0.f_4) };
	return func_779(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_773(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_686(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_687(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
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

bool func_774(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1003616053:
				case -541762431:
				case 1755643085:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1963605336:
				case -466054788:
				case -166054593:
				case 134747314:
				case 490159652:
				case 1110710183:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1892280447:
				case -1598866821:
				case -1295720802:
				case 122748261:
				case 463643368:
				case 1746830155:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -2021043433:
				case 41707457:
				case 543892122:
				case 1702636991:
				case 2105463796:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_775(int iParam0)
{
	if ((func_31(iParam0, -839724752) || func_31(iParam0, -887064662)) || func_31(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_776(int iParam0, int iParam1)
{
	if (!func_78(iParam0, 0))
	{
		return 878851736;
	}
	if (!func_775(iParam0))
	{
		return 878851736;
	}
	if (func_780(iParam0, iParam1))
	{
		return -1708424762;
	}
	else if (func_31(iParam0, -1690954218))
	{
		return -1760041550;
	}
	else if (func_31(iParam0, 1149630095))
	{
		return -1760041550;
	}
	else if (func_31(iParam0, 194498509))
	{
		return 116793994;
	}
	else if (func_31(iParam0, 43251425))
	{
		return 1869130580;
	}
	return 1869130580;
}

bool func_777(int iParam0, int iParam1)
{
	iVar0[0] = 878851736;
	iVar0[1] = 1762298001;
	iVar0[2] = 1869130580;
	iVar0[3] = 1336518004;
	iVar0[4] = 116793994;
	iVar0[5] = 515084529;
	iVar0[6] = -1760041550;
	iVar0[7] = -1977068039;
	iVar0[8] = -1708424762;
	iVar0[9] = -399865011;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_778(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736:
				*iParam0 = 1762298001;
				break;
			case 1869130580:
				*iParam0 = 1336518004;
				break;
			case 116793994:
				*iParam0 = 515084529;
				break;
			case -1760041550:
				*iParam0 = -1977068039;
				break;
			case -1708424762:
				*iParam0 = -399865011;
				break;
		}
	}
}

int func_779(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_423(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_781(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!_0x3e4e811480b3ae79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_780(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509:
				case -1866642239:
				case -1816929509:
				case -1508120809:
				case 1001171791:
				case 1023080408:
				case 1197831625:
				case 1210345318:
				case 1846915545:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093:
				case -1836227998:
				case -1610329427:
				case -1310590179:
				case -244657613:
				case 58634176:
				case 472142656:
				case 619479575:
				case 727522818:
				case 785407605:
				case 992366796:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1956973834:
				case -1643384846:
				case -1424697962:
				case -738999731:
				case -5376850:
				case 566023444:
				case 915880986:
				case 1425358430:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -1726572562:
				case -1017987135:
				case 485620834:
				case 1471975165:
				case 1570826681:
				case 2058475216:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_781(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

