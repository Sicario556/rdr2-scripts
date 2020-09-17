void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uScriptParam_0 = uVar276;
	if ((has_force_cleanup_occurred(514) || func_1(1, 0)) || func_1(8, 0))
	{
		func_2(1);
		terminate_this_thread();
	}
	func_6(&uLocal_14, 0, 551, 812, 1008);
	func_6(&uLocal_14, 1, 1083, 1130, 1483);
	func_6(&uLocal_14, 2, 1491, 1854, 2359);
	func_6(&uLocal_14, 3, 2367, 2381, 2817);
	func_6(&uLocal_14, 4, 2825, 2833, 2851);
	func_19(&uLocal_14, 0);
	func_20(&Local_140);
	while (true)
	{
		wait(0);
		func_21();
		func_22(&uLocal_14);
	}
	terminate_this_thread();
}

bool func_1(int iParam0, bool bParam1)
{
	if (func_23(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_24(5000))
		{
			return true;
		}
	}
	switch (func_25(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_2(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (bParam0)
		{
			func_26(iLocal_123[iVar0]);
		}
		else
		{
			func_27(iLocal_123[iVar0], 1, 0, 1);
		}
		iLocal_123[iVar0] = 0;
		iVar0++;
	}
	set_model_as_no_longer_needed(iLocal_136);
}

void func_3()
{
	if (!_does_volume_exist(iLocal_79))
	{
		iLocal_79 = _create_volume_aggregate();
		_0xbce668aaf83608be(iLocal_79, 1533.805f, -7264.535f, 91.877f, 0f, 0f, 39f, 128f, 74f, 53f);
		_0xbce668aaf83608be(iLocal_79, 1398.397f, -7289.793f, 85f, 0f, 0f, -26.99999f, 112f, 85f, 43f);
		_0xbce668aaf83608be(iLocal_79, 1368.051f, -7198.679f, 59.2032f, 0f, 0f, -12f, 112f, 13f, 25f);
	}
	if (!_does_volume_exist(iLocal_80))
	{
		iLocal_80 = _create_volume_aggregate();
		_0xbce668aaf83608be(iLocal_80, 1448.072f, -7241.104f, 105.654f, 0f, 0f, 18f, 233f, 168f, 86f);
		_0xbce668aaf83608be(iLocal_80, 1293.052f, -7122.601f, 123.6654f, 0f, 0f, 117f, 91f, 91f, 115f);
	}
	func_28(&Local_140);
}

int func_4()
{
	if ((func_29() != 8 || func_1(1, 0)) || func_1(8, 0))
	{
		return 4;
	}
	switch (iLocal_90)
	{
		case 0:
			iLocal_91 = get_game_timer();
			iVar0 = 0;
			while (iVar0 < iLocal_123)
			{
				if (func_30(&(iLocal_123[iVar0]), 0) && func_31(Global_35, &(iLocal_123[iVar0]), 1, 1) < 120f)
				{
					func_27(iLocal_123[iVar0], 1, 0, 1);
				}
				else
				{
					func_26(iLocal_123[iVar0]);
				}
				iLocal_123[iVar0] = 0;
				iVar0++;
			}
			func_20(&Local_140);
			return -1;
		case 1:
			if (is_ped_in_combat(Global_35, 0))
			{
				iLocal_90 = 2;
			}
			break;
	}
	return 1;
}

void func_5()
{
}

void func_6(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_7()
{
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		*vLocal_92[iVar0] = { 0f, 0f, 0f };
		iVar0++;
	}
	iLocal_138 = 0;
	iLocal_139 = get_game_timer();
}

int func_8()
{
	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (iLocal_138 >= 10)
	{
		return 2;
	}
	switch (iLocal_90)
	{
		case 1:
			return 2;
		case 2:
			if ((get_game_timer() - iLocal_91) < 30000)
			{
				fVar0 = 100f;
				fVar1 = 120f;
			}
			else if ((get_game_timer() - iLocal_91) < 55000)
			{
				fVar0 = 90f;
				fVar1 = 100f;
			}
			else
			{
				fVar0 = 70f;
				fVar1 = 90f;
			}
			if (func_32(Global_36, &Local_81, &bVar2, 19, 1, 270f, 40f, fVar0, fVar1, 0))
			{
				if (!func_33(iLocal_79, Local_81.f_3) && test_vertical_probe_against_all_water(Local_81.f_3, 0, &(Local_81.f_3.f_2)) != 1)
				{
					*vLocal_92[iLocal_138] = { Local_81.f_3 };
				}
				func_34(&Local_81, 1, 0);
			}
			else if (bVar2)
			{
				func_34(&Local_81, 1, 0);
			}
			if (!func_35(*vLocal_92[iLocal_138]))
			{
				iLocal_138++;
			}
			if ((get_game_timer() - iLocal_139) > 7500 && !func_35(*vLocal_92[0]))
			{
				iVar3 = 0;
				while (iVar3 < vLocal_92.x)
				{
					if (func_35(*vLocal_92[iVar3]))
					{
						*vLocal_92[iVar3] = { *vLocal_92[0] };
					}
					iVar3++;
				}
				return 2;
			}
			break;
	}
	return -1;
}

void func_9()
{
}

void func_10()
{
	iLocal_136 = -384354290;
	_0xed9582b3da8f02b4(10);
	request_model(iLocal_136, false);
	iLocal_134 = 0;
	iLocal_135 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Local_140)
		{
			if (Local_140[iVar2]->f_1 != 0 && Local_140[iVar2]->f_1 == &iLocal_123[iVar0])
			{
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (!does_entity_exist(&(iLocal_123[iVar0])))
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1]->f_1 = 0;
			}
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (does_entity_exist(&(iLocal_123[iVar0])) && is_ped_injured(&(iLocal_123[iVar0])))
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1]->f_1 = 0;
			}
			func_27(iLocal_123[iVar0], 1, 0, 1);
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (func_31(Global_35, &(iLocal_123[iVar0]), 1, 1) > 200f)
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1]->f_1 = 0;
			}
			func_26(iLocal_123[iVar0]);
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		iVar0++;
	}
	if (iLocal_90 == 2)
	{
		if ((get_game_timer() - iLocal_91) < 30000)
		{
			iLocal_135 = func_36(iLocal_135, 0, 2);
		}
		else if ((get_game_timer() - iLocal_91) < 55000)
		{
			iLocal_135 = func_36(iLocal_135, 0, 4);
		}
		else
		{
			iLocal_135 = func_36(iLocal_135, 0, 6);
		}
	}
}

int func_11()
{
	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (!has_model_loaded(iLocal_136))
	{
		return -1;
	}
	if (!_0x5e420ff293ee5472())
	{
		return -1;
	}
	if (!func_37())
	{
		return -1;
	}
	if (iLocal_134 >= iLocal_135)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (!func_30(&(iLocal_123[iVar0]), 0))
		{
			switch (iLocal_90)
			{
				case 1:
					iVar4 = 0;
					while (iVar4 < Local_140)
					{
						if (!is_string_null_or_empty(&(Local_140[iVar4])) && func_38(Local_140[iVar4]))
						{
							vVar1 = { func_39(Local_140[iVar4]) };
							if (func_35(vVar1))
							{
							}
							else
							{
								iLocal_123[iVar0] = func_40(-384354290, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
								if (does_entity_exist(&(iLocal_123[iVar0])))
								{
									func_41(&(iLocal_123[iVar0]));
									set_ped_combat_attributes(&(iLocal_123[iVar0]), 27, true);
									_0x712b2c2b2471b493(&(iLocal_123[iVar0]), -1722884127);
									set_ped_id_range(&(iLocal_123[iVar0]), (_0x31167ed4324b758d(&(iLocal_123[iVar0])) + 20f));
									task_police(&(iLocal_123[iVar0]), true);
									_task_patrol_2(&(iLocal_123[iVar0]), &(Local_140[iVar4]), 1, vVar1, 0, 1);
								}
								iLocal_134++;
								Local_140[iVar4]->f_1 = &iLocal_123[iVar0];
								return -1;
							}
						}
						iVar4++;
					}
					iLocal_134++;
					break;
				case 2:
					if (!is_sphere_visible(*vLocal_92[iVar0], 2f) || would_entity_be_occluded(iLocal_136, *vLocal_92[iVar0], true))
					{
						iLocal_123[iVar0] = func_40(-384354290, *vLocal_92[iVar0], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						func_41(&(iLocal_123[iVar0]));
						set_ped_combat_attributes(&(iLocal_123[iVar0]), 27, true);
						_0x712b2c2b2471b493(&(iLocal_123[iVar0]), -1722884127);
						iLocal_134++;
						return -1;
					}
					else
					{
						iLocal_134++;
					}
					break;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_12()
{
}

void func_13()
{
	iLocal_137 = get_game_timer();
}

int func_14()
{
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < iLocal_123)
	{
		if (func_30(&(iLocal_123[iVar2]), 0))
		{
			switch (iLocal_90)
			{
				case 1:
					func_42(&Local_140, &(iLocal_123[iVar2]));
					break;
				case 2:
					vVar3 = { _get_object_offset_from_coords(Global_36, 0f, get_random_float_in_range(-3f, 3f), get_random_float_in_range(-5f, 5f), 0f) };
					if ((get_game_timer() - iLocal_91) < 55000)
					{
						if ((!func_43(&(iLocal_123[iVar2]), 242628503) && !func_43(&(iLocal_123[iVar2]), 780511057)) && !func_43(&(iLocal_123[iVar2]), -377442889))
						{
							vVar6 = { func_44(vVar3, 15f, 10f) };
							clear_sequence_task(&iVar0);
							open_sequence_task(&iVar0);
							task_follow_nav_mesh_to_coord(0, vVar6, 3f, 20000, 0.25f, 7602180, 40000f);
							task_go_to_entity_while_aiming_at_entity(0, Global_35, Global_35, 1f, 1, 10f, 1082130432, 1, 0, -687903391, 7602180);
							close_sequence_task(iVar0);
							task_police(&(iLocal_123[iVar2]), true);
							task_perform_sequence(&(iLocal_123[iVar2]), iVar0);
						}
					}
					else if (!func_43(&(iLocal_123[iVar2]), 780511057) && !func_43(&(iLocal_123[iVar2]), -377442889))
					{
						task_police(&(iLocal_123[iVar2]), true);
						task_combat_ped(&(iLocal_123[iVar2]), Global_35, 0, 0);
					}
					break;
			}
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (((get_game_timer() - iLocal_137) > 10000 || iVar1 == 10) || iLocal_90 == 0)
	{
		return 0;
	}
	return -1;
}

void func_15()
{
}

void func_16()
{
}

int func_17()
{
	func_2(0);
	terminate_this_thread();
	return -1;
}

void func_18()
{
}

void func_19(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_45(uParam0);
}

void func_20(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_46(iParam0, iVar0);
		iVar0++;
	}
}

void func_21()
{
	if ((_does_volume_exist(iLocal_79) && _does_volume_exist(iLocal_80)) && func_30(Global_35, 0))
	{
		if ((func_47(Global_35, iLocal_79, 1, 0) || func_48(40)) || func_48(41))
		{
			iLocal_277 = 0;
			iLocal_90 = 0;
		}
		else if (func_47(Global_35, iLocal_80, 1, 0))
		{
			iLocal_277 = 0;
			func_49(20);
			func_49(21);
			func_49(22);
			if (!is_ped_in_combat(Global_35, 0) && (get_game_timer() - iLocal_91) < 15000)
			{
				iLocal_90 = 1;
			}
			else
			{
				iLocal_90 = 2;
			}
		}
		else
		{
			func_49(20);
			func_49(21);
			func_49(22);
			if (get_game_timer() - iVar274) > get_random_int_in_range(2000, 5000)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar0 = { get_gameplay_cam_rot(2) };
				iVar12 = 9999;
				if (iVar275 == 0)
				{
					vVar3 = { get_random_float_in_range(-1.2f, -1f), get_random_float_in_range(1f, 1.2f), 0.5f };
					iVar12 = 50;
				}
				else if (iVar275 == 1)
				{
					vVar3 = { get_random_float_in_range(1f, 1.2f), get_random_float_in_range(1f, 1.2f), 0.1f };
					iVar12 = 60;
				}
				else if (iVar275 == 2)
				{
					vVar3 = { get_random_float_in_range(-1.5f, -0.5f), get_random_float_in_range(1.5f, 0.5f), 0.3f };
					iVar12 = 20;
				}
				else if (iVar275 == 3)
				{
					vVar3 = { get_random_float_in_range(1f, 1.2f), get_random_float_in_range(1f, 1.2f), 0f };
					iVar12 = 50;
				}
				else if (iVar275 == 4)
				{
					vVar3 = { get_random_float_in_range(-0.4f, 0.4f), 0f, 0f };
					iVar12 = 60;
				}
				vVar6 = { _get_object_offset_from_coords(get_gameplay_cam_coord(), vVar0.z, 0f, -1f, 0f) };
				vVar9 = { get_ped_bone_coords(Global_35, 21030, vVar3) };
				shoot_single_bullet_between_coords(vVar6, vVar9, iVar12, true, 1402226560, 0, true, true, -1f, false);
				iLocal_276 = get_game_timer();
				iLocal_277 = iVar275 + 1;
			}
		}
	}
	else
	{
		iLocal_90 = 0;
	}
}

void func_22(var uParam0)
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

bool func_23(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_24(int iParam0)
{
	return (get_game_timer() - iParam0) < &Global_1898438;
}

int func_25(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_26(int* iParam0)
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

void func_27(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_28(int iParam0)
{
	(*iParam0)[0] = "miss_NorthField";
	*(*iParam0)[0]->f_2[0] = { 1547.69f, -7061.763f, 80.98825f };
	*(*iParam0)[0]->f_2[1] = { 1463.462f, -6979.851f, 72.17596f };
	*(*iParam0)[0]->f_2[2] = { 1492.056f, -6945.109f, 75.02325f };
	*(*iParam0)[0]->f_2[3] = { 1569.833f, -7010.37f, 84.61304f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	open_patrol_route(iParam0[0]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[0]->f_2[0], *(*iParam0)[0]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[0]->f_2[1], *(*iParam0)[0]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[0]->f_2[2], *(*iParam0)[0]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[0]->f_2[3], *(*iParam0)[0]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[1] = "miss_CastleFront";
	*(*iParam0)[1]->f_2[0] = { 1423.832f, -7077.051f, 68.73053f };
	*(*iParam0)[1]->f_2[1] = { 1332.573f, -7009.969f, 52.6828f };
	*(*iParam0)[1]->f_2[2] = { 1394.447f, -6937.98f, 61.26836f };
	*(*iParam0)[1]->f_2[3] = { 1466.745f, -7052.835f, 70.23048f };
	sVar0 = "WORLD_HUMAN_BADASS";
	open_patrol_route(iParam0[1]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[1]->f_2[0], *(*iParam0)[1]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[1]->f_2[1], *(*iParam0)[1]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[1]->f_2[2], *(*iParam0)[1]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[1]->f_2[3], *(*iParam0)[1]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[2] = "miss_ShoreLine";
	*(*iParam0)[2]->f_2[0] = { 1276.878f, -6914.748f, 42.99872f };
	*(*iParam0)[2]->f_2[1] = { 1269.852f, -6986.301f, 44.36502f };
	*(*iParam0)[2]->f_2[2] = { 1252.001f, -7091.143f, 40.75356f };
	*(*iParam0)[2]->f_2[3] = { 1211.104f, -7103.643f, 41.48995f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	open_patrol_route(iParam0[2]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[2]->f_2[0], *(*iParam0)[2]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[2]->f_2[1], *(*iParam0)[2]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[2]->f_2[2], *(*iParam0)[2]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[2]->f_2[3], *(*iParam0)[2]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 2);
	add_patrol_route_link(2, 1);
	add_patrol_route_link(1, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[3] = "miss_SouthField";
	*(*iParam0)[3]->f_2[0] = { 1309.89f, -7050.633f, 47.73157f };
	*(*iParam0)[3]->f_2[1] = { 1282.163f, -7093.915f, 45.52501f };
	*(*iParam0)[3]->f_2[2] = { 1397.532f, -7138.745f, 67.66041f };
	*(*iParam0)[3]->f_2[3] = { 1411.206f, -7068.766f, 66.23284f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	open_patrol_route(iParam0[3]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[3]->f_2[0], *(*iParam0)[3]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[3]->f_2[1], *(*iParam0)[3]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[3]->f_2[2], *(*iParam0)[3]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[3]->f_2[3], *(*iParam0)[3]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[4] = "miss_CastleRidge";
	*(*iParam0)[4]->f_2[0] = { 1683.376f, -7223.112f, 132.7217f };
	*(*iParam0)[4]->f_2[1] = { 1623.999f, -7313.509f, 112.2114f };
	*(*iParam0)[4]->f_2[2] = { 1577.847f, -7362.998f, 100.5893f };
	*(*iParam0)[4]->f_2[3] = { 1657.111f, -7251.768f, 124.6736f };
	sVar0 = "WORLD_HUMAN_BADASS";
	open_patrol_route(iParam0[4]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[4]->f_2[0], *(*iParam0)[4]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[4]->f_2[1], *(*iParam0)[4]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[4]->f_2[2], *(*iParam0)[4]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[4]->f_2[3], *(*iParam0)[4]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 2);
	add_patrol_route_link(2, 1);
	add_patrol_route_link(1, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[5] = "miss_TreeClose";
	*(*iParam0)[5]->f_2[0] = { 1576.992f, -7361.878f, 100.3456f };
	*(*iParam0)[5]->f_2[1] = { 1631.623f, -7419f, 120.9224f };
	*(*iParam0)[5]->f_2[2] = { 1608.229f, -7481.153f, 128.0874f };
	*(*iParam0)[5]->f_2[3] = { 1540.681f, -7432.281f, 113.7524f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	open_patrol_route(iParam0[5]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[5]->f_2[0], *(*iParam0)[5]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[5]->f_2[1], *(*iParam0)[5]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[5]->f_2[2], *(*iParam0)[5]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[5]->f_2[3], *(*iParam0)[5]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[6] = "miss_TreeFar";
	*(*iParam0)[6]->f_2[0] = { 1506.142f, -7520.447f, 158.1895f };
	*(*iParam0)[6]->f_2[1] = { 1620.642f, -7540.919f, 144.9812f };
	*(*iParam0)[6]->f_2[2] = { 1542.976f, -7397.477f, 106.9753f };
	*(*iParam0)[6]->f_2[3] = { 1470.417f, -7369.557f, 97.17374f };
	sVar0 = "WORLD_HUMAN_BADASS";
	open_patrol_route(iParam0[6]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[6]->f_2[0], *(*iParam0)[6]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[6]->f_2[1], *(*iParam0)[6]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[6]->f_2[2], *(*iParam0)[6]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[6]->f_2[3], *(*iParam0)[6]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[7] = "miss_RuinsRidge";
	*(*iParam0)[7]->f_2[0] = { 1143.145f, -7259.119f, 73.90079f };
	*(*iParam0)[7]->f_2[1] = { 1192.581f, -7217.897f, 68.34444f };
	*(*iParam0)[7]->f_2[2] = { 1163.34f, -7129.541f, 50.03685f };
	*(*iParam0)[7]->f_2[3] = { 1230.028f, -7148.012f, 52.79202f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	open_patrol_route(iParam0[7]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[7]->f_2[0], *(*iParam0)[7]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[7]->f_2[1], *(*iParam0)[7]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[7]->f_2[2], *(*iParam0)[7]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[7]->f_2[3], *(*iParam0)[7]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 2);
	add_patrol_route_link(2, 1);
	add_patrol_route_link(1, 0);
	close_patrol_route();
	create_patrol_route();
	(*iParam0)[8] = "miss_BeachTown";
	*(*iParam0)[8]->f_2[0] = { 1208.154f, -7057.239f, 40.75641f };
	*(*iParam0)[8]->f_2[1] = { 1144.686f, -7038.287f, 41.26281f };
	*(*iParam0)[8]->f_2[2] = { 1142.318f, -7114.154f, 46.50215f };
	*(*iParam0)[8]->f_2[3] = { 1223.22f, -7103.775f, 40.93461f };
	sVar0 = "WORLD_HUMAN_BADASS";
	open_patrol_route(iParam0[8]);
	add_patrol_route_node(0, sVar0, *(*iParam0)[8]->f_2[0], *(*iParam0)[8]->f_2[1], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(1, sVar0, *(*iParam0)[8]->f_2[1], *(*iParam0)[8]->f_2[2], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(2, sVar0, *(*iParam0)[8]->f_2[2], *(*iParam0)[8]->f_2[3], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_node(3, sVar0, *(*iParam0)[8]->f_2[3], *(*iParam0)[8]->f_2[0], get_random_int_in_range(1000, 3000), 0);
	add_patrol_route_link(0, 1);
	add_patrol_route_link(1, 2);
	add_patrol_route_link(2, 3);
	add_patrol_route_link(3, 0);
	close_patrol_route();
	create_patrol_route();
}

int func_29()
{
	return Global_1897952->f_41;
}

bool func_30(int iParam0, int iParam1)
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
	if (func_50(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_50(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_50(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_31(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_32(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = _0x74f0209674864cbd();
			func_51(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_52(&(iParam3->f_1), iParam5);
				if (!func_35(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_53(iParam3->f_6));
				}
				_0x2b8af29a78024bd3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = _0x0365000d8bf86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { _0x865732725536ee39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_33(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && _0x1ac5a8ab50cfaa33(uParam0->f_1))
	{
		_0x0365000d8bf86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

bool func_35(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_36(int iParam0, int iParam1, int iParam2)
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

bool func_37()
{
	if (func_29() == 8)
	{
		if (func_54(0, 0, 1))
		{
			return false;
		}
		if (!func_55(39))
		{
			return false;
		}
		if (func_55(40) && func_55(41))
		{
			return false;
		}
		if (func_56(40))
		{
			return false;
		}
		if (func_56(41))
		{
			return false;
		}
		if (func_57(42))
		{
			return false;
		}
	}
	return true;
}

bool func_38(var uParam0)
{
	if (uParam0->f_1 != 0 && func_30(uParam0->f_1, 0))
	{
		vVar0 = { get_entity_coords(uParam0->f_1, true, false) };
		return false;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_58(Global_35, *uParam0->f_2[iVar3], 1) < 200f)
		{
			return true;
		}
		iVar3++;
	}
	return false;
}

Vector3 func_39(var uParam0)
{
	fVar0 = 9999.99f;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (!is_sphere_visible(*uParam0->f_2[iVar4], 2f) || would_entity_be_occluded(-384354290, *uParam0->f_2[iVar4], true))
		{
			fVar5 = func_58(Global_35, *uParam0->f_2[iVar4], 1);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
				vVar1 = { *uParam0->f_2[iVar4] };
			}
		}
		iVar4++;
	}
	return vVar1;
}

int func_40(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_59(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_41(int iParam0)
{
	_0x819add5ef1742f47(iParam0, 2);
	_0x819add5ef1742f47(iParam0, 1);
	set_ped_config_flag(iParam0, 188, true);
	_0xbd75500141e4725c(iParam0, 298468673);
	set_ped_combat_attributes(iParam0, 39, true);
	_0x9de63896b176ea94(iParam0, 0);
	set_ped_drops_weapons_when_dead(iParam0, false);
	_give_weapon_to_ped_2(iParam0, -1101297303, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	_give_weapon_to_ped_2(iParam0, -1212426201, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_42(int iParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	iVar3 = -1;
	if ((!func_43(iParam1, -1253019028) && !func_43(iParam1, 780511057)) && !func_43(iParam1, -377442889))
	{
		iVar4 = 0;
		while (iVar4 < *iParam0)
		{
			if ((*iParam0)[iVar4]->f_1 == iParam1)
			{
				vVar0 = { func_39((*iParam0)[iVar4]) };
				iVar3 = iVar4;
			}
			iVar4++;
		}
		if (!func_35(vVar0))
		{
			task_police(iParam1, true);
			_task_patrol_2(iParam1, iParam0[iVar3], 1, vVar0, 0, 1);
		}
	}
}

bool func_43(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_44(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_60(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_45(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_46(int iParam0, int iParam1)
{
	(*iParam0)[iParam1] = "";
	(*iParam0)[iParam1]->f_1 = 0;
	*(*iParam0)[iParam1]->f_2[0] = { 0f, 0f, 0f };
	*(*iParam0)[iParam1]->f_2[1] = { 0f, 0f, 0f };
	*(*iParam0)[iParam1]->f_2[2] = { 0f, 0f, 0f };
	*(*iParam0)[iParam1]->f_2[3] = { 0f, 0f, 0f };
}

bool func_47(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

bool func_48(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_61((*Global_1835011)[iParam0]->f_1);
}

void func_49(int iParam0)
{
	if (func_62(&(Global_1425247->f_9), iParam0, 2))
	{
	}
}

bool func_50(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_35(vParam2))
	{
		_0x2064b33f6e6b92d4(*uParam0, vParam2);
	}
	_0x9b6a58fdb0024f12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			_0xb8e3486d107f4194(*uParam0, 90f);
			_0x827a58ced9d4d5b4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
		default:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				_0xb8e3486d107f4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			_0xff8afca532b500d4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			_0x764db5a48390fbad(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, ((80f - 40f) / 2f));
				_0xb79817db31ff72b9(*uParam0, 0f);
				break;
			case 4:
				_0x954451ea2d2120fb(*uParam0, 0.5f);
				_0x0f4f6c4ce471259d(*uParam0, 2.5f);
				break;
			case 5:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 6:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 7:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 8:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 9:
				_0x954451ea2d2120fb(*uParam0, 12f);
				_0x0f4f6c4ce471259d(*uParam0, 18f);
				break;
			case 10:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 65f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 0:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 55f);
				break;
			case 11:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 15f);
				break;
			case 15:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 40f);
				break;
			case 14:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 16:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 30:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 2:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 18:
				_0x954451ea2d2120fb(*uParam0, 1f);
				_0x0f4f6c4ce471259d(*uParam0, 20f);
				break;
			case 20:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 21:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 22:
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 26:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 27:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 28:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 50f);
				_0xb79817db31ff72b9(*uParam0, 45f);
				break;
			case 29:
				_0x954451ea2d2120fb(*uParam0, 15f);
				_0x0f4f6c4ce471259d(*uParam0, 25f);
				_0xb79817db31ff72b9(*uParam0, 20f);
				break;
			case 31:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 140f);
				break;
			case 32:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 125f);
				break;
			case 33:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 34:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 35:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 36:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_63(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_63(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_63(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_63(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_63(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_63(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_63(50f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(75f, 95f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_63(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_63(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_63(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					_0x954451ea2d2120fb(*uParam0, 1f);
					_0x0f4f6c4ce471259d(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					_0x954451ea2d2120fb(*uParam0, 5f);
					_0x0f4f6c4ce471259d(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					_0x954451ea2d2120fb(*uParam0, 15f);
					_0x0f4f6c4ce471259d(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					_0x4a7d73989f52eb37(*uParam0, 1f);
					_0xb79817db31ff72b9(*uParam0, 65f);
					_0x954451ea2d2120fb(*uParam0, 35f);
					if (iParam5 != 19)
					{
						_0x0f4f6c4ce471259d(*uParam0, 160f);
					}
					else
					{
						_0x0f4f6c4ce471259d(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		_0x954451ea2d2120fb(*uParam0, fParam8);
		_0x0f4f6c4ce471259d(*uParam0, fParam9);
	}
}

void func_52(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 2:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 3:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 7:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 8:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 9:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 10:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			_0xbc3f847ae2c3dc65(*uParam0, 25f);
			_0x450080ddedb91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			_0x19bc99c678fba139(*uParam0, 77, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 15:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 14:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 46:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 9, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			break;
		case 16:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 5, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 17:
			_0x2eb977293923c723(*uParam0, 40f);
			_0x764db5a48390fbad(*uParam0, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 18:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 21:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 22:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 23:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 24:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 25:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 26:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 27:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 74, 0);
			break;
		case 28:
			_0x5d9b0baaf04cf65b(*uParam0, 17, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 77, 1);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 29:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 12, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 31:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 32:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 33:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 3, 0);
			break;
		case 34:
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 35:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			break;
		case 41:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			break;
		case 42:
			_0x19bc99c678fba139(*uParam0, 2, 1);
		case 44:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 47:
			_0x5d9b0baaf04cf65b(*uParam0, 28, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
	}
}

Vector3 func_53(vector3 vParam0)
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

bool func_54(int iParam0, bool bParam1, bool bParam2)
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
		if (func_64())
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
		iVar0 = func_65(&(Global_1898164->f_1[0]));
		if (func_66(iVar0) && func_67((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_68(&(Global_1898164->f_1[0])))
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

bool func_55(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_69((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_56(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_72(func_71(iParam0));
	if (!func_73(iVar0))
	{
		return false;
	}
	return func_74(iVar0, 4);
}

bool func_57(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

float func_58(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_75(iParam1))
		{
			func_76(iParam0, 41788943);
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
			func_77(iParam0, 0, 1);
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
			func_78(iParam0, 0);
			bVar0 = true;
		}
		func_79(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

Vector3 func_60(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_61(int iParam0)
{
	iVar0 = func_80(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_62(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

float func_63(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

bool func_64()
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

int func_65(int iParam0)
{
	if (!func_68(iParam0))
	{
		return -1;
	}
	return func_82(func_81(iParam0));
}

bool func_66(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_67(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_68(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_69(int iParam0, bool bParam1)
{
	switch (func_80(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_70(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_71(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_72(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_73(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_74(int iParam0, int iParam1)
{
	return (func_73(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_75(int iParam0)
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

void func_76(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_83(iParam0, iParam1))
		{
			if (func_84(iParam0, iParam1))
			{
				if (func_85(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_86(iParam0);
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

void func_77(int iParam0, int iParam1, bool bParam2)
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

void func_78(int iParam0, bool bParam1)
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

void func_79(int iParam0, int iParam1)
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

int func_80(int iParam0)
{
	if (!func_68(iParam0))
	{
		return -1;
	}
	return func_87(iParam0);
}

int func_81(int iParam0)
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

int func_82(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_83(int iParam0, int iParam1)
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

bool func_84(int iParam0, int iParam1)
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

bool func_85(int iParam0, int iParam1)
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
	if (!func_83(iParam0, iVar0))
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

void func_86(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_87(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_88(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_88(int iParam0)
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

