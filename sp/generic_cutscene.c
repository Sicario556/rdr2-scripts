void __EntryFunction__()
{
	bLocal_0 = true;
	bVar0 = false;
	bVar1 = false;
	Var2 = { ScriptParam_0 };
	func_1();
	while (bLocal_0)
	{
		if (func_2(1, 1))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (func_3(-1, 256, 0))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (func_5(func_4()))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (!bLocal_0)
		{
		}
		else
		{
			if (func_6(&Var2))
			{
				bLocal_0 = false;
			}
			wait(0);
		}
	}
	if (bVar1)
	{
		func_7(Var2.f_611);
	}
	if (bVar0)
	{
		func_9(&Var2, func_8(Var2.f_611) == 2);
		func_10(&Var2);
	}
	terminate_this_thread();
}

void func_1()
{
	set_this_script_can_be_paused(false);
}

bool func_2(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_11)
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

bool func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_265238->f_79565.f_278 & 8 != 0)
	{
		return true;
	}
	if (&Global_1051043 != -1 && &Global_1051043 != iParam0)
	{
		return true;
	}
	if (iParam1 != 0 && func_11(iParam1))
	{
		return true;
	}
	if (iParam2 != 0 && func_12(iParam2, 255))
	{
		return true;
	}
	if (Global_262777[&Global_1225639] > 2)
	{
		return true;
	}
	if (&Global_262150 >= 1)
	{
		return true;
	}
	if (func_13())
	{
		return true;
	}
	if (Global_1572887->f_6 & 1 != 0)
	{
		if (&Global_1051043 == -1)
		{
			return true;
		}
	}
	if (Global_265238->f_79864 != 0 && _does_thread_exist(Global_265238->f_79864))
	{
		return true;
	}
	return false;
}

int func_4()
{
	if (Global_1146340->f_97 <= 0)
	{
		return func_14(0);
	}
	if (Global_1146340->f_98 < 0 || Global_1146340->f_99 == 0)
	{
		return func_14(0);
	}
	return (*Global_1146340)[Global_1146340->f_98]->f_1;
}

bool func_5(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_6(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			func_15(uParam0);
			break;
		case 1:
			if (!func_16(uParam0))
			{
				func_17(uParam0);
				func_18(uParam0);
			}
			func_19(uParam0);
			if (!func_20(uParam0))
			{
				func_21(uParam0);
				func_22(uParam0);
			}
			break;
		case 2:
			if (!func_16(uParam0))
			{
				func_23(uParam0);
				func_18(uParam0);
			}
			func_24(uParam0);
			if (!func_20(uParam0))
			{
				func_25(uParam0);
				func_22(uParam0);
			}
			break;
		case 3:
			if (!func_16(uParam0))
			{
				func_26(uParam0);
				func_18(uParam0);
			}
			func_27(uParam0);
			if (!func_20(uParam0))
			{
				func_28(uParam0);
				func_22(uParam0);
			}
			break;
		case 4:
			if (!func_16(uParam0))
			{
				func_29(uParam0);
				func_18(uParam0);
			}
			func_30(uParam0);
			if (!func_20(uParam0))
			{
				func_31(uParam0);
				func_22(uParam0);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_7(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1887078->f_1696[iVar0] == -1)
		{
		}
		else if (&Global_1887078->f_1696[iVar0] == iParam0)
		{
			Global_1887078->f_1696[iVar0] = -1;
			Global_1887078->f_1696[iVar0]->f_1 = 0;
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078->f_1682[iVar0]->f_8 == -1)
		{
		}
		else if (Global_1887078->f_1682[iVar0]->f_8 == iParam0)
		{
			func_32(Global_1887078->f_1682[iVar0], 9);
		}
		iVar0++;
	}
	if (Global_1225639->f_15 != &Global_1225639)
	{
		Global_1887078->f_1720 = -1;
	}
}

int func_8(int iParam0)
{
	if (iParam0 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078->f_1682[iVar0]->f_8 != iParam0)
		{
		}
		else
		{
			return Global_1887078->f_1682[iVar0]->f_7;
		}
		iVar0++;
	}
	return -1;
}

void func_9(var uParam0, bool bParam1)
{
	Global_1887078->f_1682[uParam0->f_612]->f_12 = 0;
	func_33(uParam0, bParam1);
	func_34(uParam0);
	func_35();
	func_36(0);
	if (func_37(uParam0->f_5, 64))
	{
		set_player_control(player_id(), true, 0, false);
		network_set_in_mp_cutscene(false, false, 32, true);
		set_entity_proofs(Global_1225639->f_8, 0, false);
	}
	if (&Global_1048580)
	{
		func_38(0);
	}
}

void func_10(var uParam0)
{
	*uParam0 = { Var0 };
}

bool func_11(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147326->f_1 && iParam0) != 0;
}

bool func_12(int iParam0, int iParam1)
{
	if (!Global_1058888->f_3)
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
	return (Global_1146941[iParam1] && iParam0) != 0;
}

bool func_13()
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

var func_14(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_15(var uParam0)
{
	func_39(uParam0);
}

bool func_16(var uParam0)
{
	return is_bit_set(uParam0->f_2, *uParam0);
}

void func_17(var uParam0)
{
	reserve_network_mission_peds(2);
	if (uParam0->f_609 <= 0)
	{
		uParam0->f_609 = 150;
	}
}

void func_18(var uParam0)
{
	set_bit(&(uParam0->f_2), *uParam0);
}

void func_19(var uParam0)
{
	func_39(uParam0);
}

bool func_20(var uParam0)
{
	return is_bit_set(uParam0->f_3, *uParam0);
}

void func_21(var uParam0)
{
	Global_1887078->f_1682[uParam0->f_612]->f_10 = 0;
}

void func_22(var uParam0)
{
	set_bit(&(uParam0->f_3), *uParam0);
}

void func_23(var uParam0)
{
	uParam0->f_602 = 0;
}

void func_24(var uParam0)
{
	if (!uParam0->f_602)
	{
		if (!network_is_game_in_progress())
		{
			uParam0->f_602 = 1;
			return;
		}
	}
	else if (network_is_game_in_progress())
	{
		func_34(uParam0);
		func_40(uParam0);
		func_41(uParam0, 1);
		uParam0->f_602 = 0;
		return;
	}
	else
	{
		return;
	}
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078->f_1682[uParam0->f_612]->f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (!func_44(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078->f_1682[uParam0->f_612]->f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (uParam0->f_600)
	{
		if (bVar0)
		{
			bVar0 = func_45(uParam0);
		}
		if (bVar0)
		{
			if (!func_37(uParam0->f_5, 4))
			{
				func_46(&(uParam0->f_5), 4);
				do_screen_fade_out(2000);
				set_player_control(player_id(), false, 0, false);
				set_entity_proofs(Global_1225639->f_8, 127, false);
				set_entity_visible_in_cutscene(Global_1225639->f_8, 1, 0, 256);
				network_set_in_mp_cutscene(true, true, 32, true);
				func_46(&(uParam0->f_5), 64);
			}
		}
	}
	if (((bVar0 && func_37(uParam0->f_5, 4)) && !is_screen_fading_out()) && !is_screen_fading_in())
	{
		func_39(uParam0);
	}
}

void func_25(var uParam0)
{
	uParam0->f_267 = create_camera_with_params(26379945, *uParam0->f_267.f_4[uParam0->f_603], uParam0->f_267.f_4[uParam0->f_603]->f_3, 51.2f, true, 2);
	uParam0->f_267.f_1 = create_camera_with_params(26379945, uParam0->f_267.f_4[uParam0->f_603]->f_6, uParam0->f_267.f_4[uParam0->f_603]->f_9, 51.2f, func_37(uParam0->f_267.f_4[uParam0->f_603]->f_25, 1), 2);
	if (is_ped_on_mount(Global_1225639->f_8))
	{
		uParam0->f_613 = get_mount(Global_1225639->f_8);
	}
	else
	{
		iVar0 = _get_last_mount(Global_1225639->f_8);
		if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && func_47(iVar0, Global_1225639->f_8, 1, 1) < 25f)
		{
			uParam0->f_613 = iVar0;
		}
		else
		{
			return;
		}
	}
	uParam0->f_614 = 1;
}

void func_26(var uParam0)
{
	render_script_cams(true, false, 3000, true, false, 0);
	func_36(1);
	func_38(1);
	if (Global_1225639->f_15 == &Global_1225639)
	{
		(*Global_1055058)[&Global_1225639]->f_15.f_6 = 3;
	}
}

void func_27(var uParam0)
{
	if (func_48(uParam0))
	{
		uParam0->f_603++;
	}
	func_49(uParam0);
	func_50();
	if (uParam0->f_603 == 10 || uParam0->f_603 >= uParam0->f_604)
	{
		Global_1887078->f_1682[uParam0->f_612]->f_10 = 1;
		func_39(uParam0);
	}
}

void func_28(var uParam0)
{
	func_38(0);
	if (Global_1225639->f_15 == &Global_1225639)
	{
		(*Global_1055058)[&Global_1225639]->f_15.f_6 = 6;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (((func_51() || _0x99f92061efe908ba()) || func_52(&Global_1935630, 16384)) || func_53(&Global_1225639))
	{
		func_39(uParam0);
		return;
	}
	if (uParam0->f_601)
	{
		func_39(uParam0);
		return;
	}
	if (is_screen_fading_out())
	{
		return;
	}
	if (is_screen_faded_out())
	{
		do_screen_fade_in(2000);
	}
	func_39(uParam0);
}

void func_31(var uParam0)
{
	if (Global_1887078->f_1682[uParam0->f_612]->f_10)
	{
		if (func_54(uParam0->f_605))
		{
			func_55(uParam0->f_605, 0, player_id(), 0);
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_626)))
	{
		_text_database_delete(&(uParam0->f_626));
	}
	func_9(uParam0, 0);
}

void func_32(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_33(var uParam0, bool bParam1)
{
	render_script_cams(false, false, 3000, true, false, 0);
	if (does_cam_exist(uParam0->f_267))
	{
		destroy_cam(uParam0->f_267, false);
	}
	if (does_cam_exist(uParam0->f_267.f_1))
	{
		destroy_cam(uParam0->f_267.f_1, false);
	}
	if (bParam1)
	{
		if (((func_51() || _0x99f92061efe908ba()) || func_52(&Global_1935630, 16384)) || func_53(&Global_1225639))
		{
		}
		else
		{
			do_screen_fade_in(2000);
		}
	}
}

void func_34(var uParam0)
{
	func_56(uParam0);
	func_57(uParam0);
}

void func_35()
{
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
}

void func_36(bool bParam0)
{
	use_player_colour_instead_of_team_colour(bParam0);
}

bool func_37(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_38(int iParam0)
{
	Global_1048580 = iParam0;
}

void func_39(var uParam0)
{
	uParam0->f_1 = *uParam0;
	set_bit(&(uParam0->f_3), uParam0->f_1);
	clear_bit(&(uParam0->f_2), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0++;
	*uParam0 = iVar0;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

void func_40(var uParam0)
{
	uParam0->f_5 = 0;
	uParam0->f_4 = 0;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	set_bit(&(uParam0->f_3), uParam0->f_1);
	clear_bit(&(uParam0->f_2), uParam0->f_1);
	*uParam0 = iParam1;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

bool func_42(var uParam0)
{
	iVar0 = func_59();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (uParam0->f_6[iVar1]->f_10)
		{
			iVar0 = &uParam0->f_6[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == func_59())
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar2 = round(func_47(iVar0, Global_1225639->f_8, 1, 1));
	if (iVar2 >= uParam0->f_609)
	{
		Global_1887078->f_1682[uParam0->f_612]->f_10 = 0;
		uParam0->f_601 = 1;
		func_41(uParam0, 4);
		return false;
	}
	return true;
}

bool func_43()
{
	if (Global_1225639->f_15 == &Global_1225639)
	{
		return false;
	}
	if (Global_1225639->f_15 >= 32 || Global_1225639->f_15 < 0)
	{
		return false;
	}
	if ((*Global_1055058)[Global_1225639->f_15]->f_15.f_6 == 3)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0)
{
	iVar0 = 0;
	bVar1 = true;
	bVar2 = true;
	if (!func_37(uParam0->f_5, 16))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (&uParam0->f_532[iVar0] == 0)
			{
			}
			else
			{
				_request_propset(&(uParam0->f_532[iVar0]));
				if (!_has_propset_loaded(&(uParam0->f_532[iVar0])))
				{
					bVar1 = false;
				}
				else
				{
					uParam0->f_532[iVar0]->f_8 = _create_propset(&(uParam0->f_532[iVar0]), uParam0->f_532[iVar0]->f_1, uParam0->f_532[iVar0]->f_7, uParam0->f_532[iVar0]->f_4.f_2, 1f, false, false);
					if (!_does_propset_exist(uParam0->f_532[iVar0]->f_8))
					{
						bVar1 = false;
						Jump @194; //curOff = 176
					}
					else
					{
						uParam0->f_610++;
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar1)
	{
		if (!func_37(uParam0->f_5, 16))
		{
			func_46(&(uParam0->f_5), 16);
		}
	}
	if (!func_37(uParam0->f_5, 16))
	{
		return false;
	}
	iVar0 = 0;
	if (!func_37(uParam0->f_5, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (&uParam0->f_532[iVar0] == 0)
			{
			}
			else if (!_does_propset_exist(uParam0->f_532[iVar0]->f_8))
			{
			}
			else if (_0x91a5f9cbebb9d936(uParam0->f_532[iVar0]->f_10))
			{
			}
			else
			{
				vVar3 = { 15f, 15f, 15f };
				vVar6 = { 0f, 0f, 0f };
				iVar9 = _create_volume_sphere_with_custom_name(uParam0->f_532[iVar0]->f_1, vVar6, vVar3, &(uParam0->f_618));
				uParam0->f_532[iVar0]->f_10 = _0x4c39c95ae5db1329(iVar9, 0, 7);
				if (_0x91a5f9cbebb9d936(uParam0->f_532[iVar0]->f_10))
				{
				}
				else
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (&uParam0->f_532[iVar0] == 0)
			{
			}
			else
			{
				func_60(uParam0->f_532[iVar0]->f_1, 15f, 0);
			}
			iVar0++;
		}
		if (!func_37(uParam0->f_5, 32))
		{
			func_46(&(uParam0->f_5), 32);
		}
	}
	return func_37(uParam0->f_5, 32);
}

bool func_45(var uParam0)
{
	iVar0 = 0;
	iVar1 = func_59();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_6[iVar0]->f_10)
		{
			iVar1 = &uParam0->f_6[iVar0];
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == func_59())
	{
		return true;
	}
	if (is_entity_dead(iVar1))
	{
		return false;
	}
	if (Global_1225639->f_15 == &Global_1225639 || !_0x0f99f6436528a089(Global_1225639->f_14))
	{
		if (Global_1887078->f_1682[uParam0->f_612]->f_12)
		{
			func_46(&(uParam0->f_5), 8);
			func_61(uParam0->f_6[iVar0]->f_13, 0, 0);
			func_62(uParam0->f_6[iVar0]->f_13, 0, 0);
			_0xe98d55c5983f2509(iVar1);
			func_63();
		}
	}
	else if (_0x0f99f6436528a089(Global_1225639->f_14))
	{
		if (Global_1225639->f_15 >= 32 || Global_1225639->f_15 < 0)
		{
			return false;
		}
		if (!func_37(uParam0->f_5, 8))
		{
			if ((*Global_1055058)[Global_1225639->f_15]->f_15.f_6 == 3)
			{
				if (is_entity_dead(Global_1225639->f_8))
				{
					Global_1887078->f_1682[uParam0->f_612]->f_10 = 1;
					func_41(uParam0, 4);
					return false;
				}
				func_46(&(uParam0->f_5), 8);
			}
		}
	}
	return func_37(uParam0->f_5, 8);
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_47(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_48(var uParam0)
{
	iVar0 = uParam0->f_603;
	bVar1 = false;
	if (iVar0 + 1 == uParam0->f_604)
	{
		bVar1 = true;
	}
	iVar2 = func_64(uParam0->f_603);
	if (!func_37(uParam0->f_4, iVar2))
	{
		if (is_screen_fading_out())
		{
			return false;
		}
		if (!is_string_null_or_empty(uParam0->f_6[iVar0]->f_120[0]))
		{
			if (func_65(&(uParam0->f_6[iVar0]->f_19), *uParam0->f_6[iVar0]->f_120[0], 1, 0, 0, 0))
			{
			}
		}
		set_cam_params(uParam0->f_267, *uParam0->f_267.f_4[iVar0], uParam0->f_267.f_4[iVar0]->f_3, 51.2f, 0, 1, 1, 2, 1, 0);
		set_cam_params(uParam0->f_267.f_1, uParam0->f_267.f_4[iVar0]->f_6, uParam0->f_267.f_4[iVar0]->f_9, 51.2f, 0, 1, 1, 2, 1, 0);
		set_cam_active(uParam0->f_267, true);
		if (is_screen_faded_out())
		{
			do_screen_fade_in(2000);
		}
		if (func_37(uParam0->f_267.f_4[iVar0]->f_25, 2))
		{
			if (func_66(&Global_1225639))
			{
				uVar3[0] = func_67(uParam0->f_267.f_4[iVar0]->f_16[0], 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0]->f_13[0] = &uVar3[0];
			}
			else
			{
				uVar3[1] = func_67(uParam0->f_267.f_4[iVar0]->f_16[1], 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0]->f_13[1] = &uVar3[0];
			}
		}
		else
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 2)
			{
				if (is_string_null_or_empty(uParam0->f_267.f_4[iVar0]->f_16[iVar6]))
				{
				}
				else
				{
					uVar3[iVar6] = func_67(uParam0->f_267.f_4[iVar0]->f_16[iVar6], 10000, 0, 0, 0, 1);
					uParam0->f_267.f_4[iVar0]->f_13[iVar6] = &uVar3[0];
				}
				iVar6++;
			}
		}
		if (func_37(uParam0->f_267.f_4[iVar0]->f_25, 1))
		{
			set_cam_active_with_interp(uParam0->f_267.f_1, uParam0->f_267, 8000, 1, 1);
		}
		uParam0->f_267.f_3 = get_game_timer();
		func_46(&(uParam0->f_4), iVar2);
	}
	else
	{
		iVar7 = uParam0->f_267.f_4[iVar0]->f_12 + 2000;
		if (!is_cam_interpolating(uParam0->f_267.f_1) && (get_game_timer() - uParam0->f_267.f_3) >= iVar7)
		{
			if (!is_screen_fading_out() && !is_screen_faded_out())
			{
				if (bVar1 || func_37(uParam0->f_267.f_4[iVar0]->f_25, 4))
				{
					do_screen_fade_out(2000);
				}
			}
			if (bVar1)
			{
				func_56(uParam0);
			}
			if (func_37(uParam0->f_267.f_4[iVar0]->f_25, 8))
			{
				if (!func_68(uParam0))
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_49(var uParam0)
{
	if (uParam0->f_614 == 0)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_613))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_613))
	{
		return;
	}
	if (func_69(uParam0->f_615))
	{
		uParam0->f_614 = 0;
		return;
	}
	if (func_47(uParam0->f_613, Global_1225639->f_8, 1, 1) > 25f)
	{
		uParam0->f_614 = 0;
		return;
	}
	if (!network_has_control_of_entity(uParam0->f_613))
	{
		network_request_control_of_entity(uParam0->f_613);
		return;
	}
	switch (uParam0->f_614)
	{
		case 1:
			set_ped_max_move_blend_ratio(uParam0->f_613, 0f);
			set_blocking_of_non_temporary_events(uParam0->f_613, false);
			if (_is_ped_getting_into_a_mount_seat(Global_1225639->f_8, true))
			{
				clear_ped_tasks(uParam0->f_613, 1, 0);
				clear_ped_tasks(Global_1225639->f_8, 1, 0);
			}
			task_dismount_animal(Global_1225639->f_8, 16, 0, 0, 0, 0);
			uParam0->f_614 = 2;
			break;
		case 2:
			iVar0 = get_script_task_status(Global_1225639->f_8, 501393341, false);
			if (iVar0 == 1)
			{
				return;
			}
			else if (iVar0 == 7)
			{
				uParam0->f_614 = 1;
				return;
			}
			uParam0->f_614 = 3;
			break;
		case 3:
			if (_0x9ff5f9b24e870748(uParam0->f_613))
			{
				clear_ped_tasks(uParam0->f_613, 1, 0);
			}
			task_go_straight_to_coord(uParam0->f_613, uParam0->f_615, 1.5f, 20000, 1193033728, 1056964608, 0);
			uParam0->f_614 = 4;
			break;
		case 4:
			iVar0 = get_script_task_status(uParam0->f_613, 2106541073, false);
			if (iVar0 != 8)
			{
				return;
			}
			uParam0->f_614 = 5;
			break;
		case 5:
			fVar1 = func_70(uParam0->f_613, uParam0->f_615, 1);
			if (fVar1 > 1f)
			{
				uParam0->f_614 = 3;
				return;
			}
			uParam0->f_614 = 0;
			break;
	}
}

void func_50()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == &Global_1225639)
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!network_is_player_active(iVar1))
			{
			}
			else
			{
				_0x80fdeb3a9e9aa578(get_player_ped(iVar1), 0);
			}
		}
		iVar0++;
	}
}

bool func_51()
{
	return func_52(&Global_1935630, 4096);
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_53(int iParam0)
{
	return func_71(1, iParam0);
}

bool func_54(int iParam0)
{
	return iParam0 != 0;
}

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_72(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

void func_56(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&uParam0->f_6[iVar0] == func_59())
		{
		}
		else if (!does_entity_exist(&(uParam0->f_6[iVar0])))
		{
		}
		else
		{
			func_73(uParam0->f_6[iVar0]);
			set_model_as_no_longer_needed(uParam0->f_6[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_57(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&uParam0->f_532[iVar0] == 0)
		{
		}
		else
		{
			if (_does_propset_exist(uParam0->f_532[iVar0]->f_8))
			{
				_delete_propset(uParam0->f_532[iVar0]->f_8, true, true);
			}
			if (_0x91a5f9cbebb9d936(uParam0->f_532[iVar0]->f_10))
			{
				remove_scenario_blocking_area(uParam0->f_532[iVar0]->f_10, false);
			}
		}
		iVar0++;
	}
}

void func_58(int iParam0, var uParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078->f_1682[iVar0]->f_8 != iParam0)
		{
		}
		else
		{
			Global_1887078->f_1682[iVar0]->f_7 = uParam1;
		}
		else
		{
			iVar0++;
		}
	}
}

int func_59()
{
	return -1;
}

void func_60(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_74(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (bParam1)
	{
		func_76(iParam0, 4);
		func_77(iVar0, 1);
		func_78(iVar0, 1);
	}
	else
	{
		func_79(iParam0, 4);
		func_78(iVar0, 0);
	}
}

void func_62(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_74(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	func_77(iVar0, bParam1);
}

void func_63()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1225639->f_15 == &Global_1225639 && iVar0 == &Global_1225639)
		{
			(*Global_1055058)[Global_1225639->f_15]->f_15.f_8[0] = iVar2;
		}
		else
		{
			iVar2 = int_to_playerindex(iVar0);
			if (network_is_player_active(iVar2))
			{
				if (_0x81fb74c83c2ed69f(iVar2))
				{
					if (iVar1 >= 7)
					{
					}
					else
					{
						(*Global_1055058)[Global_1225639->f_15]->f_15.f_8[iVar1] = iVar2;
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return 0;
			return 1;
		case 1:
			return 4;
		case 2:
			return 16;
		case 3:
			return 64;
		case 4:
			return 256;
		case 5:
			return 1024;
		case 6:
			return 4096;
		case 7:
			return 16384;
		case 8:
			return 65536;
		case 9:
			return 262144;
	}
}

bool func_65(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_80(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_66(int iParam0)
{
	iVar0 = func_81(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_82(Global_1132155->f_12.f_3719.f_772[iVar0], 1);
}

var func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_68(var uParam0)
{
	switch (uParam0->f_546.f_3)
	{
		case 0:
			if (is_screen_fading_out())
			{
			}
			else
			{
				if (_0x0f99f6436528a089(Global_1225639->f_14) && Global_1225639->f_15 == &Global_1225639)
				{
					uParam0->f_546 = 0;
				}
				else
				{
					if (!_0x0f99f6436528a089(Global_1225639->f_14))
					{
						uParam0->f_546 = 0;
					}
					else if (Global_1225639->f_15 >= 32 || Global_1225639->f_15 < 0)
					{
						uParam0->f_546 = 0;
					}
					if (uParam0->f_546 == -1)
					{
						if (Global_1225639->f_15 >= 32 || Global_1225639->f_15 < 0)
						{
							return false;
						}
						iVar0 = 0;
						while (iVar0 < 7)
						{
							if (&(*Global_1055058)[Global_1225639->f_15]->f_15.f_8[iVar0] != player_id())
							{
							}
							else
							{
								uParam0->f_546 = iVar0;
							}
							else
							{
								iVar0++;
							}
						}
					}
				}
				if (uParam0->f_546 == -1)
				{
					uParam0->f_546 = 0;
				}
				uParam0->f_546.f_3 = 1;
				Jump @759; //curOff = 271
				if (!_0xcf45df50c7775f2a())
				{
					_0x513f8aa5bf2f17cf(*uParam0->f_546.f_4[uParam0->f_546], 10f, 0);
					uParam0->f_546.f_1 = get_cloud_time_as_int();
				}
				else
				{
					if (_0x0909f71b5c070797())
					{
						_0x5a8b01199c3e79c3();
						uParam0->f_546.f_3 = 2;
					}
					if ((get_cloud_time_as_int() - uParam0->f_546.f_1) > 10)
					{
						_0x5a8b01199c3e79c3();
						uParam0->f_546.f_3 = 2;
					}
				}
				Jump @759; //curOff = 371
				_set_entity_coords_and_heading(Global_1225639->f_8, *uParam0->f_546.f_4[uParam0->f_546], uParam0->f_546.f_4[uParam0->f_546]->f_3.f_2, true, false, true);
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				uParam0->f_546.f_2 = get_cloud_time_as_int();
				uParam0->f_546.f_3 = 3;
				Jump @759; //curOff = 460
				if (!_0x0f99f6436528a089(Global_1225639->f_14))
				{
					uParam0->f_546.f_3 = 4;
				}
				else
				{
					if ((*Global_1055058)[&Global_1225639]->f_15.f_7 != 1)
					{
						(*Global_1055058)[&Global_1225639]->f_15.f_7 = 1;
					}
					if ((get_cloud_time_as_int() - uParam0->f_546.f_2) > 5)
					{
						uParam0->f_546.f_3 = 4;
					}
					else
					{
						if (Global_1225639->f_15 < 32 && Global_1225639->f_15 >= 0)
						{
							if (Global_1225639->f_15 == &Global_1225639)
							{
								bVar3 = true;
								iVar1 = 0;
								while (iVar1 < 32)
								{
									if (iVar1 == &Global_1225639)
									{
									}
									else
									{
										iVar2 = int_to_playerindex(iVar1);
										if (network_is_player_active(iVar2))
										{
											if (_0x81fb74c83c2ed69f(iVar2))
											{
												if ((*Global_1055058)[iVar1]->f_15.f_7 != 1)
												{
													bVar3 = false;
												}
												else
												{
													iVar1++;
												}
												if (bVar3)
												{
													(*Global_1055058)[&Global_1225639]->f_15.f_7 = 2;
													uParam0->f_546.f_3 = 4;
												}
												else
												{
													if ((*Global_1055058)[Global_1225639->f_15]->f_15.f_7 == 2)
													{
														uParam0->f_546.f_3 = 4;
													}
													Jump @759; //curOff = 727
													if (!is_screen_faded_in() && !is_screen_fading_in())
													{
														do_screen_fade_in(2000);
													}
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
				}
			}
			default:
				break;
	}
}

bool func_69(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_70(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_71(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_83(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_84())
	{
		return func_83(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_83(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_72(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
	if (!_0x271f95e55c663b8b(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = iParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_85(uParam1, iParam0, Var1);
	return 1;
}

void func_73(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

bool func_74(int iParam0)
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

int func_75(int iParam0)
{
	return iParam0;
}

void func_76(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_77(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_86(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_78(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_80(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

int func_81(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1140157)[iParam0]->f_1.f_1;
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

bool func_83(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_84()
{
	return Global_1109400->f_245;
}

void func_85(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_87(uParam0))
	{
		return;
	}
	if (&Global_1224424 < 20)
	{
		Global_1224424 = &Global_1224424 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224424->f_1[iVar0] = { *(Global_1224424->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224424->f_1[(&Global_1224424 - 1)]) = { Var1 };
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_87(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

