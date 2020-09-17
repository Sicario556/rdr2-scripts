void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&Local_16, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		network_set_script_is_safe_for_network_game();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_16);
		}
	}
	if (func_2() == -1)
	{
		if (has_force_cleanup_occurred(523))
		{
			func_5(&Local_16);
		}
	}
	if (!_does_scenario_point_exist(Local_16.f_9))
	{
		func_5(&Local_16);
	}
	while (func_6(&Local_16))
	{
		if (func_7())
		{
			func_5(&Local_16);
		}
		if (func_8(&Local_16))
		{
			func_5(&Local_16);
		}
		wait(0);
	}
	func_5(&Local_16);
}

void func_1(var uParam0, vector3 vParam1)
{
	reserve_network_client_mission_objects(4);
	uParam0->f_12 = func_9(vParam1);
	*uParam0 = func_10(vParam1, uParam0);
	func_11(uParam0, 2);
	uParam0->f_13 = "script@mech@treasure_hunting@grab";
	uParam0->f_14 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_12(vParam1, uParam0);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { _get_scenario_point_coords(uParam0->f_9, true) };
	func_13(&(uParam0->f_27), uParam0->f_6);
	func_14(*uParam0, uParam0->f_12);
	func_15();
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_16(&(uParam0->f_15), 1, 1);
	func_17(uParam0);
	func_18(uParam0->f_6);
	func_19(*uParam0, uParam0->f_12, 1);
	func_19(*uParam0, uParam0->f_12, 32);
	func_20();
	func_21();
	func_22(&(uParam0->f_27));
	func_23(0);
	func_24(&(uParam0->f_27));
	if (!func_25(uParam0, 4))
	{
		_0xe7282390542f570d(uParam0->f_10);
	}
	terminate_this_thread();
}

bool func_6(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	if (func_26(uParam0) < 10)
	{
		if (func_27(*uParam0) && func_28(uParam0))
		{
			func_29(uParam0, 11);
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			func_21();
		}
	}
	bVar1 = (func_26(uParam0) <= 6 && !func_31(uParam0->f_15, 1));
	bVar2 = !func_25(uParam0, 32);
	if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
	{
		if (func_25(uParam0, 2))
		{
			func_34(uParam0->f_15, uParam0->f_6);
		}
		else
		{
			func_35(&(uParam0->f_27), uParam0->f_6, bVar1, bVar2, 1, 0);
		}
	}
	func_36(uParam0->f_15);
	func_37(uParam0->f_6, *uParam0, uParam0->f_12, 1092616192);
	func_38(uParam0);
	switch (func_26(uParam0))
	{
		case 0:
			request_model(-1456904552, false);
			if (func_25(uParam0, 1))
			{
				request_model(uParam0->f_21, false);
			}
			func_39(&(uParam0->f_27.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (func_25(uParam0, 32))
			{
				func_29(uParam0, 1);
			}
			else if (!func_40(uParam0->f_6))
			{
				func_29(uParam0, 14);
			}
			else
			{
				func_29(uParam0, 1);
			}
			break;
		case 1:
			if (has_model_loaded(-1456904552))
			{
				if (func_25(uParam0, 1))
				{
					if (!has_model_loaded(uParam0->f_21))
					{
						return false;
					}
					if (!does_entity_exist(uParam0->f_20))
					{
						uParam0->f_20 = create_object_no_offset(uParam0->f_21, uParam0->f_6, true, true, false, true);
					}
					if (!does_entity_exist(uParam0->f_20))
					{
						return false;
					}
					if (!get_ground_z_and_normal_for_3d_coord(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_26), &(uParam0->f_23)))
					{
						return false;
					}
					if (does_entity_exist(uParam0->f_20))
					{
						set_entity_rotation(uParam0->f_20, func_41(uParam0->f_23, 0), 2, true);
					}
				}
				func_29(uParam0, 2);
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam0->f_11))
			{
				uParam0->f_11 = _create_anim_scene(uParam0->f_13, 64, uParam0->f_14, true, true);
			}
			if (!_does_anim_scene_exist(uParam0->f_11))
			{
				return false;
			}
			load_anim_scene(uParam0->f_11);
			func_29(uParam0, 3);
			break;
		case 3:
			if (_is_anim_scene_loaded(uParam0->f_11, true, false))
			{
				set_anim_scene_origin(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				set_anim_scene_entity(uParam0->f_11, "player", get_player_ped(player_id()), 0);
				if (func_25(uParam0, 1))
				{
					if (does_entity_exist(uParam0->f_20))
					{
						set_anim_scene_entity(uParam0->f_11, "MOUND", uParam0->f_20, 0);
					}
				}
				func_42(uParam0);
				func_29(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
			{
				if (func_25(uParam0, 1))
				{
					func_43(uParam0->f_20, uParam0->f_20, 0);
					_0x7563cbca99253d1a(uParam0->f_20, 187984275);
					func_29(uParam0, 5);
				}
				else
				{
					func_29(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_44(uParam0, 1097859072))
			{
				if (!func_30(uParam0->f_15))
				{
					uParam0->f_15 = func_45("UC_CLT_DIG", -473983589, uParam0->f_6, 1070386381, 3, 1, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
				func_29(uParam0, 6);
			}
			break;
		case 6:
			if (func_30(uParam0->f_15))
			{
				if (!func_25(uParam0, 32))
				{
					func_46(uParam0->f_15, &(uParam0->f_27.f_6));
				}
				if (func_47(uParam0->f_15, 1))
				{
					if (func_48(*uParam0, uParam0->f_12, 32))
					{
						func_23(1);
						if (is_ped_on_mount(get_player_ped(player_id())))
						{
							task_dismount_animal(get_player_ped(player_id()), 0, 0, 0, 0, 0);
						}
						func_16(&(uParam0->f_15), 1, 1);
						func_49(get_player_ped(player_id()));
						_hide_ped_weapons(get_player_ped(player_id()), 2, false);
						func_19(*uParam0, uParam0->f_12, 32);
						func_29(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
				{
					if (func_50(uParam0->f_15, 1) > 0f)
					{
						func_51();
						func_53(func_52(get_player_ped(player_id()), uParam0->f_6, 1));
					}
					else if (func_50(uParam0->f_15, 1) == 0f)
					{
						func_21();
					}
				}
			}
			break;
		case 7:
			func_51();
			if ((((func_54(get_player_ped(player_id()), 0, 1, 0) == -1569615261 && func_54(get_player_ped(player_id()), 1, 1, 0) == -1569615261) && !is_ped_on_mount(get_player_ped(player_id()))) && !_is_ped_carrying(get_player_ped(player_id()))) && !is_ped_using_any_scenario(get_player_ped(player_id())))
			{
				func_17(uParam0);
				set_anim_scene_origin(uParam0->f_11, uParam0->f_6, 0f, 0f, func_55(get_entity_coords(get_player_ped(player_id()), true, false), uParam0->f_6, 1), 2);
				func_29(uParam0, 8);
			}
			break;
		case 8:
			func_56();
			open_sequence_task(&iVar3);
			task_turn_ped_to_face_coord(0, uParam0->f_6, 0);
			task_enter_anim_scene(0, uParam0->f_11, "player", uParam0->f_14, 1069379748, 1, 128, 20000, -1082130432);
			close_sequence_task(iVar3);
			task_perform_sequence(get_player_ped(player_id()), iVar3);
			func_29(uParam0, 9);
			break;
		case 9:
			if (_is_anim_scene_started(uParam0->f_11, false))
			{
				func_29(uParam0, 10);
			}
			break;
		case 10:
			if (_is_anim_scene_finished(uParam0->f_11, false) || !_is_anim_scene_started(uParam0->f_11, false))
			{
				if (!func_57(uParam0))
				{
					return false;
				}
				func_58(uParam0->f_9);
				func_59(func_25(uParam0, 1), func_25(uParam0, 2));
				func_23(0);
				func_24(&(uParam0->f_27));
				func_18(uParam0->f_6);
				func_58(uParam0->f_9);
				func_21();
				if (func_25(uParam0, 2) && func_25(uParam0, 32))
				{
					set_current_ped_weapon(get_player_ped(player_id()), -862059856, false, 0, false, false);
				}
				func_29(uParam0, 14);
			}
			break;
		case 11:
			if (func_48(*uParam0, uParam0->f_12, 1))
			{
				if (func_60())
				{
					func_19(*uParam0, uParam0->f_12, 1);
					func_29(uParam0, 12);
				}
				else if (!func_27(*uParam0))
				{
					func_29(uParam0, 4);
					func_19(*uParam0, uParam0->f_12, 1);
				}
			}
			break;
		case 12:
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			iVar0 = func_61();
			if (!func_62(iVar0, 0))
			{
				return false;
			}
			uParam0->f_5 = iVar0;
			uParam0->f_22 = func_63(uParam0->f_5);
			if (!func_25(uParam0, 16))
			{
				func_11(uParam0, 16);
			}
			func_19(*uParam0, uParam0->f_12, 1);
			func_29(uParam0, 4);
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	iVar1 = Param0.f_1;
	if (_does_scenario_point_exist(iVar1))
	{
		iVar0 = round(_0x6718f40313a2b5a6(iVar1));
		(*Global_1212600)[player_id()]->f_2 = iVar0;
	}
	return iVar0;
}

int func_10(vector3 vParam0, var uParam3)
{
	switch (vParam0.z)
	{
		case 1619000582:
			iVar0 = 7;
			break;
		case 869316798:
			iVar0 = 8;
			break;
		case -2003628894:
			iVar0 = 9;
			break;
		case -1420736735:
			iVar0 = 10;
			break;
	}
	return iVar0;
}

void func_11(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_16, iParam1))
	{
		func_65(&(uParam0->f_16), iParam1);
	}
}

int func_12(vector3 vParam0, var uParam3)
{
	bVar1 = _unlock_is_visible(-296143697);
	switch (vParam0.z)
	{
		case 1619000582:
			if (bVar1)
			{
				iVar0 = 918540366;
			}
			else
			{
				iVar0 = -710563358;
			}
			break;
		case 869316798:
			if (bVar1)
			{
				iVar0 = -2101458121;
			}
			else
			{
				iVar0 = 1197515594;
			}
			break;
		case -2003628894:
			if (bVar1)
			{
				iVar0 = 1374885161;
			}
			else
			{
				iVar0 = -2106156849;
			}
			break;
		case -1420736735:
			if (bVar1)
			{
				iVar0 = 1391373953;
			}
			else
			{
				iVar0 = 2109394729;
			}
			break;
	}
	return iVar0;
}

void func_13(var uParam0, vector3 vParam1)
{
	if (!_does_volume_exist(uParam0->f_8))
	{
		uParam0->f_8 = _create_volume_cylinder_with_custom_name(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		_0xb56d41a694e42e86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_14(var uParam0, var uParam1)
{
	(*Global_1212600)[player_id()]->f_1 = uParam0;
}

void func_15()
{
	(*Global_1212600)[player_id()]->f_3 = 0;
	(*Global_1212600)[player_id()]->f_6 = 0;
	(*Global_1212600)[player_id()]->f_7 = 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_30(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_66(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_67(iVar0);
	*uParam0 = 0;
}

void func_17(var uParam0)
{
	if (does_entity_exist(uParam0->f_20))
	{
		func_68(uParam0->f_20, uParam0->f_20, 0);
	}
}

void func_18(vector3 vParam0)
{
	if (func_69(*Global_1212889, vParam0))
	{
		*Global_1212889 = { 0f, 0f, 0f };
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	func_70((*(*Global_1212893)[iParam0])[iParam1], iParam2);
}

void func_20()
{
	(*Global_1212600)[player_id()]->f_1 = -1;
	(*Global_1212600)[player_id()]->f_2 = -1;
	(*Global_1212600)[player_id()]->f_8 = -1f;
	(*Global_1212600)[player_id()]->f_4 = 0;
}

void func_21()
{
	if ((*Global_1212600)[player_id()]->f_4)
	{
		(*Global_1212600)[player_id()]->f_4 = 0;
		(*Global_1212600)[player_id()]->f_5 = 0;
		(*Global_1212600)[player_id()]->f_8 = -1f;
	}
}

void func_22(var uParam0)
{
	func_71(uParam0);
	func_72(&(uParam0->f_7), 1);
}

void func_23(bool bParam0)
{
	if (bParam0)
	{
		func_73(0, 6);
	}
	else
	{
		func_74(0, 6, 0);
	}
}

void func_24(var uParam0)
{
	if (_does_volume_exist(uParam0->f_8))
	{
		_delete_volume(uParam0->f_8);
	}
}

bool func_25(var uParam0, int iParam1)
{
	return func_64(uParam0->f_16, iParam1);
}

int func_26(var uParam0)
{
	return uParam0->f_2;
}

bool func_27(int iParam0)
{
	fVar2 = -1f;
	iVar4 = player_id();
	if ((*Global_1212600)[iVar4]->f_1 != iParam0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if ((*Global_1212600)[iVar5]->f_1 == (*Global_1212600)[iVar4]->f_1)
			{
				if ((*Global_1212600)[iVar5]->f_2 == (*Global_1212600)[iVar4]->f_2)
				{
					if ((*Global_1212600)[iVar5]->f_4)
					{
						if (fVar2 == -1f || fVar2 >= (*Global_1212600)[iVar5]->f_8)
						{
							fVar2 = (*Global_1212600)[iVar5]->f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (&Global_1296859->f_154[&Global_1296859] != &Global_1296859->f_154[iVar3])
		{
			if (!func_64((*Global_1212893)[(*Global_1212600)[iVar4]->f_1][(*Global_1212600)[iVar4]->f_2], 1))
			{
				func_65((*(*Global_1212893)[(*Global_1212600)[iVar4]->f_1])[(*Global_1212600)[iVar4]->f_2], 1);
			}
			return true;
		}
		if (!func_64((*Global_1212893)[(*Global_1212600)[iVar4]->f_1][(*Global_1212600)[iVar4]->f_2], 32))
		{
			func_65((*(*Global_1212893)[(*Global_1212600)[iVar4]->f_1])[(*Global_1212600)[iVar4]->f_2], 32);
		}
	}
	return false;
}

bool func_28(var uParam0)
{
	if (!func_25(uParam0, 32))
	{
		return (*Global_1212600)[player_id()]->f_1 == *uParam0;
	}
	return ((*Global_1212600)[player_id()]->f_1 == *uParam0 && (*Global_1212600)[player_id()]->f_2 == uParam0->f_12);
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_30(int iParam0)
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

bool func_31(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	return _uiprompt_is_active((*Global_1951255)[iVar0]->f_3);
}

int func_32(bool bParam0)
{
	if (func_75(85134332, 1))
	{
		if (bParam0)
		{
			if (func_75(-862059856, 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_33(var uParam0)
{
	return uParam0->f_36;
}

void func_34(var uParam0, vector3 vParam1)
{
	if (!func_40(vParam1))
	{
		func_18(vParam1);
		return;
	}
	if (func_76(*Global_1212889))
	{
		*Global_1212889 = { vParam1 };
	}
	else if (!func_69(*Global_1212889, vParam1))
	{
		if (vdist2(Global_35, vParam1) < vdist2(Global_35, *Global_1212889))
		{
			*Global_1212889 = { vParam1 };
		}
	}
}

void func_35(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!func_75(-1733092640, 1))
	{
		return;
	}
	if (func_77(0))
	{
		return;
	}
	if (func_78())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (func_79())
	{
		return;
	}
	if (!is_player_control_on(get_player_index()))
	{
		return;
	}
	if (!is_entity_dead(get_player_ped(player_id())) && _0xec7e480ff8bd0bed(get_player_ped(player_id())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_76(*Global_1212889) && get_distance_between_coords(*Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_52(get_player_ped(player_id()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_80()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = get_sound_id();
						if (func_54(get_player_ped(player_id()), 0, 1, 0) != -862059856)
						{
							_0xdcf5ba95bbf0faba(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_81(uParam0, 1);
					}
				}
				else
				{
					func_81(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = floor((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = floor((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = absi(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (fVar1 < 3f && bParam7)
			{
				func_82(250);
			}
			set_pad_shake(0, iVar3, iVar4);
			func_83(&(uParam0->f_2));
			func_81(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_71(uParam0);
				}
				func_81(uParam0, 0);
			}
			else if (func_84(&(uParam0->f_2)) >= 2f)
			{
				func_81(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_82(250);
			}
			break;
	}
}

void func_36(int iParam0)
{
	if (func_30(iParam0))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_1296859->f_8);
		if ((((((((_is_ped_carrying(Global_1296859->f_8) || is_ped_getting_up(Global_1296859->f_8)) || is_ped_ragdoll(Global_1296859->f_8)) || !func_85()) || Global_1102219->f_3664) || does_entity_exist(iVar0)) || is_ped_jumping(Global_1296859->f_8)) || is_ped_climbing(Global_1296859->f_8)) || is_ped_falling(Global_1296859->f_8))
		{
			if (func_86(iParam0, 0))
			{
				func_87(iParam0, 0, 1, 1);
			}
		}
		else if (!func_86(iParam0, 0))
		{
			func_87(iParam0, 1, 1, 1);
		}
	}
}

void func_37(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_52(get_player_ped(player_id()), vParam0, 1) < fParam5)
	{
		if ((*Global_1212600)[player_id()]->f_1 != iParam3)
		{
			(*Global_1212600)[player_id()]->f_1 = iParam3;
		}
		if ((*Global_1212600)[player_id()]->f_2 != iParam4)
		{
			(*Global_1212600)[player_id()]->f_2 = iParam4;
		}
	}
}

void func_38(var uParam0)
{
	uParam0->f_36 = func_88();
}

void func_39(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_89(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_89(uParam0))
		{
		}
	}
}

bool func_40(vector3 vParam0)
{
	return !_0xb6e1a185c2b9319a(vParam0);
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	vVar0 = { func_90(vParam0) };
	vVar3 = { func_92(func_92(vVar0, func_91((fParam3 - 90f))), vVar0) };
	fVar6 = atan2(vVar3.y, vVar3.x);
	fVar7 = -atan2(vVar3.z, sqrt(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_92(vVar8, vVar3) };
	fVar14 = (atan2((func_93(vVar8, vVar0) / vmag(vVar8)), (func_93(vVar11, vVar0) / vmag(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_42(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			iVar0 = 1;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 2;
			break;
		case 10:
			iVar0 = 1;
			break;
	}
	if (_does_anim_scene_exist(uParam0->f_11))
	{
		set_anim_scene_int(uParam0->f_11, "_terrain_type", iVar0, false);
	}
}

int func_43(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_itemset_valid(Global_1297612->f_32))
	{
		Global_1297612->f_32 = create_itemset(true);
	}
	if (!is_in_itemset(iParam0, Global_1297612->f_32))
	{
		add_to_itemset(iParam0, Global_1297612->f_32);
	}
	if (!func_94(iParam0))
	{
		_0x543dfe14be720027(player_id(), iParam0, 0);
		_0x6ecfc621a168424c(iParam0, uParam1, iParam2, 0);
		_0x907b16b3834c69e2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_entity_exist(Global_1297612[iVar0]))
		{
			(*Global_1297612)[iVar0] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_44(var uParam0, float fParam1)
{
	if (func_75(85134332, 1))
	{
		if (Global_1102219->f_3664)
		{
			return false;
		}
		if (func_52(get_player_ped(player_id()), uParam0->f_6, 1) > fParam1)
		{
			return false;
		}
		if (func_25(uParam0, 4))
		{
			if ((func_25(uParam0, 2) && func_25(uParam0, 1)) && func_52(get_player_ped(player_id()), uParam0->f_6, 1) <= 1.6f)
			{
				return true;
			}
		}
		if (func_25(uParam0, 2))
		{
			if ((func_54(get_player_ped(player_id()), 0, 1, 0) == -862059856 || func_25(uParam0, 16)) && func_52(get_player_ped(player_id()), uParam0->f_6, 1) <= 1.6f)
			{
				func_11(uParam0, 16);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_45(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_76(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_95(iVar0, 2))
		{
			if (func_96(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_97(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_46(int iParam0, var uParam1)
{
	if (_0xd9130842d7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (func_31(iParam0, 1))
		{
			if (!*uParam1)
			{
				play_sound_frontend("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_47(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
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

bool func_48(int iParam0, int iParam1, int iParam2)
{
	return func_64((*Global_1212893)[iParam0][iParam1], iParam2);
}

void func_49(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		iVar0 = _get_first_entity_ped_is_carrying(iParam0);
		if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_entity_a_ped(iVar0))
		{
			_0xed00d72f81cf7278(iVar0, 0, 0);
		}
	}
}

float func_50(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return 0f;
	}
	iVar0 = func_66(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

void func_51()
{
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -1879280170, false);
}

float func_52(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_53(float fParam0)
{
	if (!(*Global_1212600)[player_id()]->f_4)
	{
		(*Global_1212600)[player_id()]->f_4 = 1;
		if ((*Global_1212600)[player_id()]->f_8 < 0f)
		{
			(*Global_1212600)[player_id()]->f_8 = fParam0;
		}
	}
}

int func_54(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_55(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_56()
{
	if ((*Global_1212600)[player_id()]->f_4)
	{
		(*Global_1212600)[player_id()]->f_5 = 1;
	}
}

bool func_57(var uParam0)
{
	(*Global_1212600)[player_id()]->f_7 = 1;
	while (!func_98(uParam0->f_22, &uVar0))
	{
		return false;
	}
	vVar5 = { uParam0->f_6 };
	iVar4 = 0;
	while (iVar4 < Global_17411.f_2966.f_1)
	{
		if (func_96(vVar5, Global_17411.f_2966.f_1[iVar4]->f_1, 1056964608, 1))
		{
			Global_17411.f_2966.f_1[iVar4] = 1;
		}
		iVar4++;
	}
	func_100(func_99(-1113216174, -445015182), 1);
	if (func_25(uParam0, 2))
	{
		func_100(func_99(-1113216174, 99337762), 1);
	}
	return true;
}

void func_58(var uParam0)
{
	if (_0xfb7cf1de938a3e22(uParam0))
	{
		return;
	}
	_0x8245c1f3262f4ac2(uParam0);
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_101(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_101(11389876, 0, 255, 0, 0);
	}
}

bool func_60()
{
	iVar2 = player_id();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if ((*Global_1212600)[iVar3]->f_1 == (*Global_1212600)[iVar2]->f_1)
				{
					if ((*Global_1212600)[iVar3]->f_2 == (*Global_1212600)[iVar2]->f_2)
					{
						if ((*Global_1212600)[iVar3]->f_5)
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

var func_61()
{
	iVar3 = player_id();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2))
		{
		}
		else if (!network_is_player_active(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if ((*Global_1212600)[iVar4]->f_1 == (*Global_1212600)[iVar3]->f_1)
				{
					if ((*Global_1212600)[iVar4]->f_2 == (*Global_1212600)[iVar3]->f_2)
					{
						if ((*Global_1212600)[iVar4]->f_6)
						{
							uVar1 = (*Global_1212600)[iVar4]->f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case -250719930:
			return -135773962;
		case -1866466055:
			return 1711174319;
		case 1546533744:
			return -1388841754;
		case 1063947084:
			return 1833116882;
		case 1570512815:
			return 1732356987;
		case -909283963:
			return 1365678051;
		case -1604348319:
			return -469808552;
		case -965972353:
			return 651832873;
		case -1850613113:
			return -1338236715;
		case 261854063:
			return -1459382417;
		case -2023776602:
			return -1980587442;
		case 751981376:
			return -305847860;
		case -753628968:
			return -1132845243;
		case 1006600695:
			return 1606281828;
		case 1742487931:
			return 530382704;
		case -1631158895:
			return -1519010704;
		case -1888442693:
			return 520232109;
		case -27315089:
			return -364070233;
		case 1416504149:
			return -1296260337;
		case 249916796:
			return 127681874;
		case -1763726091:
			return 1290286961;
		case -1868057871:
			return 1628530735;
		case 1979910825:
			return 530930425;
		case -2058309720:
			return -581360339;
		case 147602269:
			return -649069078;
		case 1204853609:
			return -180052139;
		case 1217599018:
			return -1597269158;
		case 686159610:
			return -77692146;
		case -526980287:
			return -2098248158;
		case -523530337:
			return 544784227;
		case -162108183:
			return -1750110910;
		case 49516917:
			return -373311654;
		case 308818593:
			return 309566985;
		case -1324394408:
			return -115477556;
		case 324548078:
			return -1845614766;
		case 1466045897:
			return 1216475110;
		case -1370882316:
			return -901049146;
		case -836035669:
			return -1479457955;
		case -1893135121:
			return -256638116;
		case 600432608:
			return -1298419407;
		case 575547207:
			return -883489996;
		case -1579131656:
			return 1357570735;
		case -939330110:
			return -330620837;
		case -313250059:
			return -599044012;
		case -1804185681:
			return 1465764690;
		case 319991179:
			return -1914990977;
		case 456059252:
			return 527426268;
		case -1430911710:
			return 700547967;
		case 1645128206:
			return -1434735180;
		case -644738616:
			return 604651083;
		case 391412462:
			return 371926572;
		case 289416445:
			return -253293041;
		case 61850108:
			return 536987249;
		case 333760707:
			return -1538719578;
		case -1350438989:
			return -1949131163;
		case 205445966:
			return 967176349;
		case 1107778901:
			return 574670748;
		case 232063688:
			return -605903845;
		case -888745206:
			return -32321552;
		case 1926912008:
			return 1904567340;
		case 996250359:
			return -834041111;
		case -1523419995:
			return 726047816;
		case -209370662:
			return -37487183;
		case 1289018795:
			return 2079959006;
		case -288598209:
			return -1647261494;
		case -1461195441:
			return 746055788;
		case 1496994240:
			return -2132348472;
		case 1030821510:
			return 1531432272;
		case -329116887:
			return -1678406212;
		case -1884965711:
			return 1789589305;
		case -753018368:
			return 897707862;
		case 1328162258:
			return -1787268311;
		case -1841900790:
			return 395137059;
		case -1867083042:
			return -702109507;
		case -1323673307:
			return -1843094784;
		case 442429651:
			return 1659722492;
		case 1640145676:
			return -2063569423;
		case -1982102297:
			return -1400928817;
		case 285783511:
			return 1524848772;
		case -625323392:
			return -1914323519;
		case -1513842258:
			return 521036731;
		case -1117423291:
			return 1510925660;
		case 742074887:
			return -1667316569;
		case -1232280687:
			return 875971115;
		case -158375659:
			return -1390165137;
		case 2060029625:
			return 512666633;
		case 322658308:
			return 1056235591;
		case 410290576:
			return 1824947548;
		case 229697410:
			return -297415734;
		case 1053249385:
			return -744964659;
		case 972001444:
			return -1926116512;
		case 1051711290:
			return 1832068122;
		case -1574273736:
			return 237248172;
		case -564862271:
			return 1798945032;
		case 698668228:
			return 151002497;
		case -282219948:
			return -1199922785;
		case -925996336:
			return -408379377;
		case -488648162:
			return -1465903195;
		case -1471980896:
			return -930591306;
		case 1287909434:
			return -1021507854;
		case -399160143:
			return -14146038;
		case -413279196:
			return -1189402959;
		case -1901964465:
			return 1925678741;
		case -1962391614:
			return 1736254176;
		case 1081670855:
			return 732479966;
		case 2031475177:
			return 256108181;
		case -669648037:
			return -1668855818;
		case -1695562218:
			return -14631498;
		case 866218183:
			return -1747721085;
		case 212472674:
			return -754054823;
		default:
			break;
	}
	return -135773962;
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_65(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
{
	if (!func_103(iParam0))
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

int func_68(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_itemset_valid(Global_1297612->f_32) && is_in_itemset(iParam0, Global_1297612->f_32))
	{
		remove_from_itemset(iParam0, Global_1297612->f_32);
	}
	_0x9dae1380cc5c6451(player_id(), iParam0);
	_0xdc5e09d012d759c4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (does_entity_exist(Global_1297612[iVar0]) && Global_1297612[iVar0] == iParam0)
		{
			_copy_memory((*Global_1297612)[iVar0], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_70(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_71(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		_0x0f2a2175734926d8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		release_sound_id(uParam0->f_5);
		stop_pad_shake(0);
		uParam0->f_5 = -1;
	}
	_0x531a78d6bf27014b("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_72(var uParam0, int iParam1)
{
	if (func_89(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_73(int iParam0, int iParam1)
{
	if (!func_105(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_106();
	}
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	if (func_105(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_106();
	}
}

bool func_75(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_107(iParam0);
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
			if (!func_108(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_109(iParam0))
			{
				return true;
			}
			break;
	}
	return func_110(iParam0, 0, 0, 0) >= iParam1;
}

bool func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_77(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_78()
{
	return func_111() != -1;
}

bool func_79()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

float func_80()
{
	return Global_1146212->f_2169[89]->f_201;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_82(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_83(var uParam0)
{
	func_112(uParam0, 0f);
}

float func_84(var uParam0)
{
	if (!func_113(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

bool func_85()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_116(Global_34, 1369124074)) && !func_116(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_86(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	return !func_95(iParam0, 4);
}

void func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		func_117(iParam0, 4);
		if (bParam3)
		{
			func_118(iVar0, 1);
		}
		func_119(iVar0, 1);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(iVar0, 0);
	}
}

int func_88()
{
	if (!((_unlock_is_visible(-474252899) || _unlock_is_visible(294305054)) || _unlock_is_visible(-296143697)))
	{
		return 0;
	}
	else if (!_unlock_is_visible(-1820411463))
	{
		return 0;
	}
	return 1;
}

bool func_89(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_90(vector3 vParam0)
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

Vector3 func_91(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

Vector3 func_92(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_93(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_94(int iParam0)
{
	if (func_121() == 0)
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(func_121()))
	{
		return false;
	}
	Var0 = func_121();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = get_entity_model(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (_datafile_get_string(&uVar5, &Var0))
			{
				iVar15 = get_hash_key(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

bool func_95(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_96(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_97(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_118(iParam0, 1);
	func_119(iParam0, 1);
	func_120(iParam0, 128);
}

bool func_98(int iParam0, var uParam1)
{
	Var0.f_1 = 10;
	func_122(&Var0, 1356624740);
	return func_123(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_99(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_124(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_103(int iParam0)
{
	return func_95(iParam0, 2);
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_105(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_106()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

int func_107(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_108(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_125(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_126("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_127(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_128(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_129(iVar1);
				return true;
			}
			iVar3++;
		}
		func_129(iVar1);
	}
	return false;
}

bool func_109(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_130(iParam0);
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
	iVar1 = func_131(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_132(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_133(iParam0);
	iVar2 = func_132(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_110(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_107(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_125(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_134(iParam0, 0);
	}
	if (func_135(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_136(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_137(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_136(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_111()
{
	return Global_1138962->f_137;
}

void func_112(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_138(uParam0, 1);
	func_139(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_113(var uParam0)
{
	return func_140(*uParam0, 1);
}

bool func_114(var uParam0)
{
	return func_140(*uParam0, 2);
}

float func_115()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_116(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_118(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_95(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_119(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

int func_121()
{
	return Global_1071686->f_28448[47]->f_3;
}

void func_122(var uParam0, int iParam1)
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

int func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_141(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_142(uParam2, iParam0, Var1);
	return 1;
}

int func_124(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_143(iParam2, -372840566);
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
	func_144(uParam1, iParam0, Var3);
	return 1;
}

int func_125(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_145(iParam0, 1399091007))
	{
		func_146(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_126(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_136(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_127(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_128(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_129(int iParam0)
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

int func_130(int iParam0)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_131(int iParam0)
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

int func_132(var uParam0, int iParam1)
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

int func_133(int iParam0)
{
	iVar0 = func_130(iParam0);
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

int func_134(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_147(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_149(&Var0, func_148(0));
	}
	if (!func_150(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_129(iVar14);
	return uVar15;
}

int func_135(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_136(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_137(int iParam0, bool bParam1)
{
	Var0 = { func_151(iParam0, bParam1, 0) };
	return func_152(iParam0, Var0, Var0.f_4, bParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_141(var uParam0)
{
	func_122(uParam0, 143479330);
	if (func_153() == 2026485318)
	{
		func_122(uParam0, 617531372);
	}
	else
	{
		func_122(uParam0, 291123060);
	}
}

void func_142(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_154(uParam0))
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

void func_143(int iParam0, int iParam1)
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

void func_144(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_154(uParam0))
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

int func_145(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return func_156(func_155(iParam0), iParam1);
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

void func_146(int iParam0, var uParam1, var uParam2)
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

struct<14> func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_148(bool bParam0)
{
	iVar0 = func_136(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_152(923904168, func_157(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_152(923904168, func_157(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_152(923904168, func_157(bParam0), -740156546, 0);
}

void func_149(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_150(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_136(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_151(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_157(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_107(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_152(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_148(bParam1) };
			if (bParam2 && func_158(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_159(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_159(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_160(iParam0, &Var6, 1728382685))
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
			Var0 = { func_161(bParam1) };
			switch (func_130(iParam0))
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
			if (func_162(iParam0, -1823706425))
			{
				Var0 = { func_152(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_162(iParam0, -1483207246))
			{
				Var0 = { func_152(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_152(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_162(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_163(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_162(iParam0, -1653629781))
			{
				Var0 = { func_152(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_152(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_62(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_136(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_153()
{
	return Global_1952637->f_1;
}

bool func_154(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_155(int iParam0)
{
	return iParam0;
}

int func_156(int iParam0, int iParam1)
{
	if (!func_164(iParam0, 2))
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

struct<4> func_157(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_136(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_152(1328661203, func_165(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_152(1328661203, func_165(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_152(1328661203, func_165(), -1591664384, bParam0);
}

bool func_158(int iParam0, bool bParam1)
{
	if (func_130(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_166();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_159(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_167(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_160(int iParam0, var uParam1, int iParam2)
{
	if (func_168(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_161(bool bParam0)
{
	iVar0 = func_136(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_152(271701509, func_157(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_152(271701509, func_157(bParam0), 12999093, 0);
}

bool func_162(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_130(iParam0);
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
			if (func_169(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_163(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_170(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_164(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

struct<4> func_165()
{
	return Var0;
}

bool func_166()
{
	return (func_171(-1185145312, 0, 0, 0) > 0 && func_172(func_152(889965687, func_157(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_167(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_135(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_152(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_136(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_136(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_168(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_136(0);
	*uParam1 = { func_152(iParam0, func_148(0), iParam3, 0) };
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

bool func_169(int iParam0, int iParam1, int iParam2)
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

bool func_170(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_171(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_173(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_136(bParam1), iParam0, iParam3);
}

int func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_174(&uParam0, iParam4, bParam5, iParam6);
}

bool func_173(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_174(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_175(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_170(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

