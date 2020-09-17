void __EntryFunction__()
{
	uScriptParam_0 = uScriptParam_0;
	func_1(&uLocal_0);
	if (has_force_cleanup_occurred(514))
	{
		func_2(&uLocal_0);
		terminate_this_thread();
	}
	while (true)
	{
		if (!func_3(0, 0, 1) || Global_1415405->f_5)
		{
			bVar0 = true;
		}
		if (func_4(&uLocal_0))
		{
			func_5(&uLocal_0);
		}
		else if (bVar0)
		{
			if (!bLocal_136)
			{
				if (func_6(&uLocal_0))
				{
					bLocal_136 = true;
				}
			}
			if (Global_1415405->f_4)
			{
				if (!_0xf46108c50a22b029())
				{
					_0x7803436e68c32b26();
				}
			}
			else if (_0xf46108c50a22b029())
			{
				_0x29cd4896ecb66c12();
			}
			func_5(&uLocal_0);
		}
		else if (bLocal_136)
		{
			if (func_7(&uLocal_0))
			{
				if (_0xf46108c50a22b029())
				{
					_0x29cd4896ecb66c12();
				}
				bLocal_136 = false;
			}
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0]->f_29 = iVar0;
		iVar0++;
	}
}

void func_2(var uParam0)
{
	if (_0xf46108c50a22b029())
	{
		_0x29cd4896ecb66c12();
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_8(uParam0->f_4[iVar0], uParam0);
		func_9(uParam0->f_4[iVar0], 0);
		iVar0++;
	}
	func_10(uParam0);
}

bool func_3(int iParam0, bool bParam1, bool bParam2)
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
		if (func_11())
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
		iVar0 = func_12(&(Global_1898164->f_1[0]));
		if (func_13(iVar0) && func_14((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_15(&(Global_1898164->f_1[0])))
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

bool func_4(var uParam0)
{
	if (uParam0->f_3 == 4)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 1:
			if (func_16(uParam0))
			{
				func_17(uParam0, 2);
			}
			break;
		case 2:
			func_18(uParam0, 1);
			func_17(uParam0, 3);
			break;
		case 3:
			if (!func_19(uParam0, 0))
			{
				func_17(uParam0, 0);
			}
			break;
		case 4:
			if (!func_19(uParam0, 1))
			{
				func_10(uParam0);
				func_17(uParam0, 0);
			}
			break;
		default:
			break;
	}
}

bool func_6(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_17(uParam0, 1);
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	if (uParam0->f_3 == 3)
	{
		func_17(uParam0, 4);
		func_20(uParam0);
		return true;
	}
	return false;
}

void func_8(var uParam0, var uParam1)
{
	if (does_group_exist(uParam0->f_18))
	{
		remove_group(uParam0->f_18);
	}
	if (func_21(uParam0->f_3))
	{
		func_22(uParam0->f_3);
		func_23(uParam0->f_3);
	}
	func_24(uParam0);
	clear_bit(&(uParam1->f_134), uParam0->f_41);
	if (does_blip_exist(uParam0->f_21))
	{
		remove_blip(&(uParam0->f_21));
	}
	if (func_25(&(uParam0->f_36)))
	{
		func_26(&(uParam0->f_36));
	}
	if (func_25(&(uParam0->f_30)))
	{
		func_26(&(uParam0->f_30));
	}
	if (func_27(uParam0->f_30.f_3))
	{
		func_28(&(uParam0->f_30.f_3), 1, 1);
	}
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_10(var uParam0)
{
	set_model_as_no_longer_needed(*uParam0);
	set_model_as_no_longer_needed(uParam0->f_1);
	set_model_as_no_longer_needed(uParam0->f_2);
}

bool func_11()
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

int func_12(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_30(func_29(iParam0));
}

bool func_13(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_15(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_16(var uParam0)
{
	request_model(*uParam0, false);
	request_model(uParam0->f_1, false);
	request_model(uParam0->f_2, false);
	if ((!has_model_loaded(*uParam0) || !has_model_loaded(uParam0->f_1)) || !has_model_loaded(uParam0->f_2))
	{
		return false;
	}
	return true;
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		func_18(uParam0, 12);
	}
	uParam0->f_3 = iParam1;
}

void func_18(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_9(uParam0->f_4[iVar0], iParam1);
		iVar0++;
	}
}

bool func_19(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_31(uParam0->f_4[iVar0], uParam0);
		iVar0++;
	}
	if (!bParam1)
	{
		if (func_32(uParam0, 0))
		{
			return false;
		}
	}
	else if (func_33(uParam0))
	{
		return false;
	}
	return true;
}

void func_20(var uParam0)
{
	func_34();
}

bool func_21(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

void func_22(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return;
	}
	iVar1 = func_35(Param0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(Param0);
		iVar2 = func_37(Param0, 0);
		if (does_entity_exist(iVar2))
		{
			func_38(&iVar2, 0);
		}
		iVar0++;
	}
}

void func_23(int iParam0, var uParam1)
{
	if (is_itemset_valid(iParam0))
	{
		destroy_itemset(iParam0);
	}
}

void func_24(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(&(uParam0->f_5[iVar0])))
		{
			func_38(uParam0->f_5[iVar0], 0);
		}
		iVar0++;
	}
}

bool func_25(var uParam0)
{
	return func_39(*uParam0, 1);
}

void func_26(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_27(int iParam0)
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

void func_28(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_27(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_40(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_41(iVar0);
	*uParam0 = 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_31(var uParam0, var uParam1)
{
	switch (uParam0->f_20)
	{
		case 1:
			if (func_42(uParam0, uParam1, 0))
			{
				func_9(uParam0, 4);
			}
			break;
		case 4:
			if (func_43(uParam0))
			{
				func_9(uParam0, 5);
			}
			break;
		case 5:
			if (func_44(uParam0))
			{
				func_9(uParam0, 10);
			}
			else if (func_45(uParam0))
			{
				func_46(uParam0);
				uParam0->f_23 = get_game_timer();
				func_9(uParam0, 6);
			}
			else if (!func_47(uParam0))
			{
				func_9(uParam0, 4);
			}
			break;
		case 6:
			if (!func_48(uParam0) || get_game_timer() > uParam0->f_23 + 10000)
			{
				func_49(uParam0);
				func_9(uParam0, 4);
			}
			break;
		case 7:
			if (!func_50(uParam0) || get_game_timer() > uParam0->f_24 + 30000)
			{
				func_51(uParam0);
				func_9(uParam0, 4);
			}
			break;
		case 8:
			uParam0->f_27 = get_game_timer();
			if (!func_52(uParam0->f_3))
			{
				func_9(uParam0, 4);
			}
			break;
		case 9:
			break;
		case 10:
			if (func_42(uParam0, uParam1, 1))
			{
				func_9(uParam0, 4);
			}
			break;
		case 11:
			func_8(uParam0, uParam1);
			func_9(uParam0, 1);
			break;
		case 12:
			func_8(uParam0, uParam1);
			func_9(uParam0, 0);
			break;
		default:
			break;
	}
	if (uParam0->f_20 != 0)
	{
		if ((uParam0->f_20 != 11 && uParam0->f_20 != 1) && uParam0->f_20 != 12)
		{
			func_53(uParam0->f_3);
			func_54(uParam0);
			if (!func_55(uParam0))
			{
				uParam0->f_25 = get_game_timer();
				clear_bit(&(uParam1->f_134), uParam0->f_41);
				func_9(uParam0, 11);
			}
			else if (func_56(uParam0))
			{
				func_9(uParam0, 11);
			}
			else if (uParam0->f_20 != 8)
			{
				if (func_52(uParam0->f_3))
				{
					func_9(uParam0, 8);
				}
				else if ((uParam1->f_132 && !uParam0->f_39) && !func_57(Global_35, 0))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (!bVar0)
	{
		func_58(uParam0);
		if (uParam1->f_132 && uParam0->f_39)
		{
			func_59(uParam0);
		}
	}
	else
	{
		func_60(uParam0);
	}
}

bool func_32(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_55(uParam0->f_4[iVar0]) || uParam0->f_4[iVar0]->f_20 != iParam1)
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_33(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_4[iVar0]->f_20 != 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_34()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

int func_35(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

void func_36(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return;
	}
	clean_itemset(Param0);
}

int func_37(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_38(int* iParam0, bool bParam1)
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

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_40(int iParam0)
{
	return iParam0;
}

void func_41(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_42(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = get_game_timer();
	if ((uParam0->f_25 > 0 && iVar0 < (uParam0->f_25 + 120000)) || iVar0 < uParam0->f_26 + 5000)
	{
		return false;
	}
	if (func_62(player_id(), 1, 0, 1))
	{
	}
	uParam0->f_26 = iVar0;
	if (!func_21(uParam0->f_3))
	{
		uParam0->f_3 = { func_63() };
	}
	if (!does_group_exist(uParam0->f_18))
	{
		uParam0->f_18 = create_group(0);
		set_group_formation(uParam0->f_18, uParam0->f_19);
	}
	iVar13 = uParam0->f_2;
	if (bParam2)
	{
		if (does_group_exist(uParam0->f_18))
		{
			iVar11 = get_ped_as_group_leader(uParam0->f_18);
			if (!is_entity_dead(iVar11))
			{
				vVar2 = { get_entity_coords(iVar11, false, false) };
				fVar5 = get_entity_heading(iVar11);
				bVar15 = true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (!func_64(&iVar1, &vVar2, &fVar5, uParam1))
	{
		return false;
	}
	else
	{
		uParam0->f_39 = 0;
	}
	if (vdist(vVar2, get_entity_coords(Global_35, false, false)) < 30f)
	{
		return false;
	}
	if (!does_blip_exist(uParam0->f_21))
	{
		uParam0->f_21 = _blip_add_for_coord(408396114, vVar2);
	}
	iVar16 = 0;
	while (iVar16 < 5)
	{
		bVar14 = false;
		if (bParam2)
		{
			iVar10 = func_37(uParam0->f_3, iVar16);
			if (!is_entity_dead(iVar10))
			{
				bVar14 = true;
			}
		}
		if (!bVar14)
		{
			if (iVar16 == 0 && !bVar15)
			{
				iVar12 = *uParam0;
			}
			else
			{
				iVar12 = uParam0->f_1;
			}
			vVar6 = { vVar2 + Vector(0f, get_random_float_in_range(-3f, 3f), get_random_float_in_range(-3f, 3f)) };
			fVar5 = get_random_float_in_range(0f, 359f);
			iVar9 = func_65(iVar12, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (get_random_int_in_range(0, 100) <= 50)
			{
				if (does_entity_exist(&(uParam0->f_5[iVar16])))
				{
					func_66(uParam0->f_5[iVar16], 1, 0, 1);
				}
				uParam0->f_5[iVar16] = func_65(iVar13, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				_set_ped_on_mount(iVar9, &(uParam0->f_5[iVar16]), -1, true);
			}
			func_67(uParam0->f_3, iVar9);
			set_ped_config_flag(iVar9, 279, true);
			if (iVar16 == 0 && !bVar15)
			{
				set_ped_as_group_leader(func_37(uParam0->f_3, iVar16), uParam0->f_18, false);
			}
			else
			{
				set_ped_as_group_member(func_37(uParam0->f_3, iVar16), uParam0->f_18);
			}
			_0xa8a95cecb1906ea2(uParam0->f_18, 1);
			set_ped_combat_attributes(iVar9, 58, true);
			set_ped_combat_attributes(iVar9, 5, true);
			set_ped_config_flag(iVar9, 49, false);
			set_ped_combat_attributes(iVar9, 39, false);
			set_ped_combat_attributes(iVar9, 14, true);
			set_ped_seeing_range(iVar9, 17f);
			set_ped_id_range(iVar9, 17f);
		}
		iVar16++;
	}
	if (!bParam2)
	{
		uParam0->f_41 = iVar1;
		set_bit(&(uParam1->f_134), iVar1);
	}
	if (uParam1->f_132)
	{
		if (func_25(&(uParam0->f_36)))
		{
			func_26(&(uParam0->f_36));
		}
		func_68(uParam0);
	}
	return true;
}

bool func_43(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0))
	{
		_task_move_in_traffic(iVar0, 1f, 4, 0);
	}
	return true;
}

bool func_44(var uParam0)
{
	iVar0 = get_game_timer();
	if (iVar0 < (uParam0->f_27 + 90000) || iVar0 < uParam0->f_28 + 5000)
	{
		return false;
	}
	uParam0->f_28 = iVar0;
	if (func_35(uParam0->f_3) < 5)
	{
		iVar1 = get_ped_as_group_leader(uParam0->f_18);
		if (!is_entity_dead(iVar1) && !Global_1935630->f_12)
		{
			if (vdist(get_entity_coords(iVar1, false, false), get_entity_coords(Global_35, false, false)) >= 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_45(var uParam0)
{
	if (func_3(0, 0, 1) || !Global_1415405->f_4)
	{
		return false;
	}
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	iVar1 = get_game_timer();
	if (iVar1 < uParam0->f_22 + 10000)
	{
		return false;
	}
	uParam0->f_22 = iVar1;
	if (!is_entity_dead(iVar0) && !Global_1935630->f_12)
	{
		if (vdist(get_entity_coords(iVar0, false, false), get_entity_coords(Global_35, false, false)) <= 30f && has_entity_clear_los_to_entity(iVar0, Global_35, 3423))
		{
			if (get_random_int_in_range(0, 100) <= 40)
			{
				return true;
			}
		}
	}
	return false;
}

int func_46(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0) && !Global_1935630->f_12)
	{
		task_goto_entity_offset(iVar0, Global_35, -1, 15f, 0f, 1f, 2);
		return 1;
	}
	return 0;
}

bool func_47(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0))
	{
		iVar1 = get_script_task_status(iVar0, -1665583462, true);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_48(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0))
	{
		iVar1 = get_script_task_status(iVar0, -2015108952, true);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_49(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0))
	{
		iVar1 = get_script_task_status(iVar0, -2015108952, true);
		if (iVar1 != 7 && iVar1 != 8)
		{
			clear_ped_tasks(iVar0, 1, 0);
		}
	}
}

bool func_50(var uParam0)
{
	iVar0 = func_35(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_37(uParam0->f_3, iVar2);
		if (!is_entity_dead(iVar1))
		{
			iVar3 = get_script_task_status(iVar1, 923520851, true);
			if (iVar3 == 0 || iVar3 == 1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

void func_51(var uParam0)
{
	iVar0 = func_35(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_37(uParam0->f_3, iVar2);
		if (!is_entity_dead(iVar1))
		{
			iVar3 = get_script_task_status(iVar1, 923520851, true);
			if (iVar3 != 7 && iVar3 != 8)
			{
				clear_ped_tasks(iVar1, 1, 0);
			}
		}
		iVar2++;
	}
}

bool func_52(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < func_35(Param0))
	{
		iVar1 = func_37(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					if (is_ped_in_combat(get_ped_index_from_entity_index(iVar1), 0))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_53(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return;
	}
	iVar0 = create_itemset(false);
	iVar1 = 0;
	while (iVar1 < func_35(Param0))
	{
		iVar2 = func_37(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (is_entity_a_ped(iVar2))
			{
				if (is_entity_dead(iVar2))
				{
					add_to_itemset(iVar2, iVar0);
					set_entity_as_no_longer_needed(&iVar2);
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < get_itemset_size(iVar0))
	{
		iVar3 = get_indexed_item_in_itemset(iVar1, iVar0);
		remove_from_itemset(iVar3, Param0);
		iVar1++;
	}
	destroy_itemset(iVar0);
}

void func_54(var uParam0)
{
	if (does_group_exist(uParam0->f_18) && _0x0455546f23ff08e4(uParam0->f_18))
	{
		iVar0 = get_ped_as_group_leader(uParam0->f_18);
		if (is_entity_dead(iVar0))
		{
			get_group_size(uParam0->f_18, &iVar1, &iVar2);
			if (iVar2 > 0)
			{
				iVar3 = get_ped_as_group_member(uParam0->f_18, get_random_int_in_range(0, (iVar1 + iVar2)));
				if (!is_entity_dead(iVar3))
				{
					set_ped_as_group_leader(iVar3, uParam0->f_18, false);
				}
			}
		}
	}
}

bool func_55(var uParam0)
{
	get_group_size(uParam0->f_18, &iVar1, &iVar0);
	if ((((!func_21(uParam0->f_3) || func_35(uParam0->f_3) == 0) || !does_group_exist(uParam0->f_18)) || !_0x0455546f23ff08e4(uParam0->f_18)) || (iVar0 == 0 && iVar1 == 0))
	{
		return false;
	}
	return true;
}

bool func_56(var uParam0)
{
	if (!func_52(uParam0->f_3) && func_69(uParam0))
	{
		return true;
	}
	return false;
}

bool func_57(int iParam0, int iParam1)
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

void func_58(var uParam0)
{
	if (func_27(uParam0->f_30.f_3))
	{
		func_28(&(uParam0->f_30.f_3), 1, 1);
		func_34();
	}
}

void func_59(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if ((!is_entity_dead(iVar0) && !Global_1935630->f_12) && vdist(get_entity_coords(iVar0, false, false), get_entity_coords(Global_35, false, false)) < 100f)
	{
		if (func_25(&(uParam0->f_36)))
		{
			func_70(&(uParam0->f_36));
		}
	}
	else if (!func_25(&(uParam0->f_36)))
	{
		func_71(&(uParam0->f_36), 0);
	}
	else if (func_72(&(uParam0->f_36)))
	{
		func_73(&(uParam0->f_36));
	}
	if (func_74(&(uParam0->f_36)) >= 30000)
	{
		func_26(&(uParam0->f_36));
		uParam0->f_39 = 0;
		func_68(uParam0);
	}
}

void func_60(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (func_27(uParam0->f_30.f_3))
	{
		if (func_75(uParam0->f_30.f_3, 1))
		{
			uParam0->f_39 = 1;
			if (!func_25(&(uParam0->f_30)))
			{
				func_71(&(uParam0->f_30), 0);
			}
			else if (func_72(&(uParam0->f_30)))
			{
				func_73(&(uParam0->f_30));
			}
			if (!is_entity_dead(iVar0))
			{
				func_76(iVar0, -416594956);
			}
		}
	}
	if (func_74(&(uParam0->f_30)) >= uParam0->f_30.f_5)
	{
		func_26(&(uParam0->f_30));
		func_58(uParam0);
	}
}

bool func_61(int iParam0)
{
	return func_77(iParam0, 2);
}

int func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_78(bParam1, bParam2, bParam3);
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

struct<2> func_63()
{
	Var0 = create_itemset(true);
	return Var0;
}

bool func_64(var uParam0, var uParam1, float fParam2, var uParam3)
{
	iVar0 = func_79();
	if (func_80(iVar0, &iVar1, &iVar2))
	{
		iVar3 = func_81(uParam3->f_134, (iVar2 - iVar1), 2, shift_left(1, iVar1));
		*uParam0 = iVar3;
		if (func_82(*uParam0, uParam1, fParam2))
		{
			if (vdist(get_entity_coords(Global_35, false, false), *uParam1) >= 30f)
			{
				return true;
			}
		}
	}
	return false;
}

int func_65(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_83(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_66(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_67(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_84(Param0, iParam2))
	{
		add_to_itemset(iParam2, Param0);
	}
}

void func_68(var uParam0)
{
	iVar0 = get_ped_as_group_leader(uParam0->f_18);
	if (!is_entity_dead(iVar0) && !func_27(uParam0->f_30.f_3))
	{
		uParam0->f_30.f_3 = func_85("GUAMA_PATROL_HINT", -416594956, iVar0, 1, 0, 1, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		uParam0->f_30.f_4 = 50f;
		func_86(uParam0->f_30.f_3, uParam0->f_30.f_4, 1);
		if (func_25(&(uParam0->f_30)))
		{
			func_26(&(uParam0->f_30));
		}
	}
}

bool func_69(var uParam0)
{
	if (func_21(uParam0->f_3) && !Global_1935630->f_12)
	{
		iVar0 = get_ped_index_from_entity_index(func_87(uParam0->f_3, Global_35));
		if (!is_entity_dead(iVar0))
		{
			if (vdist(get_entity_coords(iVar0, false, false), get_entity_coords(Global_35, false, false)) >= 300f && is_entity_occluded(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_70(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (!func_72(uParam0))
	{
		uParam0->f_2 = (func_88() - uParam0->f_1);
		func_89(uParam0, 2);
	}
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1 || !func_25(uParam0))
	{
		func_90(uParam0);
	}
}

bool func_72(var uParam0)
{
	return func_39(*uParam0, 2);
}

void func_73(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (func_72(uParam0))
	{
		uParam0->f_1 = (func_88() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_91(uParam0, 2);
	}
}

int func_74(var uParam0)
{
	if (!func_25(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_72(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_92() - round((uParam0->f_1 * 1000f)));
}

bool func_75(int iParam0, bool bParam1)
{
	if (bParam1 && !func_27(iParam0))
	{
		return false;
	}
	iVar0 = func_40(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_76(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		stop_gameplay_hint(false);
		return;
	}
	else
	{
		if (is_control_pressed(2, iParam1))
		{
			set_gameplay_entity_hint(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (is_control_just_released(2, iParam1))
		{
			stop_gameplay_hint(false);
		}
	}
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)
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

int func_79()
{
	iVar0 = func_93();
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = -1;
	fVar2 = 999999.9f;
	vVar3 = { get_entity_coords(Global_35, false, false) };
	if (func_94(vVar3))
	{
		return -1;
	}
	iVar6 = 57;
	iVar6 = 0;
	while (iVar6 < 61)
	{
		if (_does_volume_exist((*Global_1888801)[iVar6]->f_3))
		{
			vVar7 = { 0f, 0f, 0f };
			vVar7 = { _0xf70f00013a62f866((*Global_1888801)[iVar6]->f_3) };
			fVar10 = vdist2(vVar3, vVar7);
			if (fVar10 < fVar2)
			{
				iVar1 = iVar6;
				fVar2 = fVar10;
			}
		}
		iVar6++;
	}
	if (iVar1 == 57)
	{
		iVar1 = 57;
	}
	else if (iVar1 == 61)
	{
		iVar1 = 61;
	}
	return iVar1;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 57:
			*iParam1 = 8;
			*iParam2 = 13;
			return true;
		case 59:
			*iParam1 = 0;
			*iParam2 = 2;
			return true;
		case 60:
		case 61:
			*iParam1 = 3;
			*iParam2 = 7;
			return true;
	}
	return false;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > 32)
	{
	}
	iVar1 = func_95(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = get_random_int_in_range(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && is_bit_set(iParam0, iVar2)) || (iParam2 == 2 && !is_bit_set(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = get_random_int_in_range(0, iVar3);
	return &(iVar4[iVar0]);
}

bool func_82(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 3787.718f, -3954.145f, 41.288f };
			*fParam2 = 354.6375f;
			return true;
		case 1:
			*uParam1 = { 3882.98f, -3730.864f, 43.6833f };
			*fParam2 = 116.3379f;
			return true;
		case 3:
			*uParam1 = { 3972.921f, -3874.57f, 65.7122f };
			*fParam2 = 123.0235f;
			return true;
		case 4:
			*uParam1 = { 3998.875f, -3721.019f, 67.4743f };
			*fParam2 = 206.3015f;
			return true;
		case 5:
			*uParam1 = { 4136.172f, -3683.906f, 156.7324f };
			*fParam2 = 85.041f;
			return true;
		case 6:
			*uParam1 = { 4228.889f, -3659.802f, 172.7372f };
			*fParam2 = 17.8561f;
			return true;
		case 8:
			*uParam1 = { 3856.555f, -3577.237f, 53.4467f };
			*fParam2 = 167.0775f;
			return true;
		case 9:
			*uParam1 = { 4070.433f, -3437.857f, 86.5179f };
			*fParam2 = 357.3192f;
			return true;
		case 10:
			*uParam1 = { 3904.904f, -3224.065f, 45.5342f };
			*fParam2 = 195.7186f;
			return true;
		case 11:
			*uParam1 = { 3853.244f, -3476.826f, 44.6443f };
			*fParam2 = 59.1071f;
			return true;
		case 12:
			*uParam1 = { 3989.41f, -3338.172f, 64.3645f };
			*fParam2 = 85.9682f;
			return true;
	}
	return false;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_96(iParam1))
		{
			func_97(iParam0, 41788943);
		}
		else if (bParam5)
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
			func_98(iParam0, 0, 1);
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
			func_99(iParam0, 0);
			bVar0 = true;
		}
		func_100(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_84(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return false;
	}
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	return is_in_itemset(iParam2, Param0);
}

int func_85(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_77(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
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
				func_101(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_86(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_27(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_40(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_87(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_35(Param0))
	{
		iVar2 = func_37(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (iVar1 == 0 || func_102(iVar2, iParam2, 1, 1) < func_102(iVar0, iParam2, 1, 1))
				{
					iVar0 = iVar2;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_88()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90(var uParam0)
{
	func_103(uParam0, 0f);
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_92()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_93()
{
	return Global_1894899->f_2;
}

bool func_94(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_95(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool func_96(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_97(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_104(iParam0, iParam1))
		{
			if (func_105(iParam0, iParam1))
			{
				if (func_106(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_107(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_99(int iParam0, bool bParam1)
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

void func_100(int iParam0, int iParam1)
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

void func_101(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
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
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_108(iParam0, 1);
	func_109(iParam0, 1);
	func_110(iParam0, 128);
}

float func_102(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_103(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_88() - fParam1);
	func_89(uParam0, 1);
	func_91(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_104(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_105(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_106(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_104(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_107(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_108(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_77(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_109(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

