void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3(Global_1137850, &uVar0, Global_1138048, network_is_host_of_this_script());
		func_4(&uVar0);
		wait(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	if (func_7())
	{
		func_6();
	}
	iVar0 = get_game_timer();
	func_8(32, -1);
	func_9();
	network_register_host_broadcast_variables(Global_1137850, 198, 25);
	func_10(_0xba24095ea96dfe17(Global_1137850), 198, "g_mpNetPlayerCampHost");
	network_register_player_broadcast_variables(Global_1138048, 257, 26);
	func_11(_0xba24095ea96dfe17(Global_1138048), 257, "g_mpNetPlayerCampPlayer");
	func_12(0);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
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

void func_3(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_13(uParam0, uParam1, uParam2, iVar0, bParam3);
				break;
		}
		iVar0++;
	}
}

void func_4(var uParam0)
{
	func_14(uParam0);
}

void func_5()
{
}

void func_6()
{
	terminate_this_thread();
}

bool func_7()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

void func_8(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_9()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_6();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!network_is_game_in_progress())
		{
			func_6();
		}
		if (!network_is_signed_online())
		{
			func_6();
		}
		if (func_15() == 0)
		{
			if (func_16())
			{
				func_6();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_6();
			return;
		}
		wait(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!get_event_data(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 197:
			func_17(uParam0, uParam1, uParam2, iParam3, bParam4);
			break;
	}
}

void func_14(var uParam0)
{
	iVar0 = player_id();
	if (func_18(16))
	{
		return;
	}
	if (func_19(1, iVar0))
	{
		func_20(uParam0, 1);
	}
	if (func_19(2, iVar0))
	{
		func_20(uParam0, 0);
	}
	if (func_19(32, iVar0))
	{
		func_21(uParam0);
	}
	if (func_19(4, iVar0))
	{
		func_22(uParam0, 1);
	}
	if (func_19(8, iVar0))
	{
		func_22(uParam0, 0);
	}
	if (func_19(16, iVar0))
	{
		func_23(uParam0);
	}
	if (func_24())
	{
		if (!func_19(2, iVar0) && !func_19(8, iVar0))
		{
			uParam0->f_4++;
			func_25(uParam0);
		}
	}
	if (func_19(64, iVar0))
	{
		func_26(5, iVar0, *uParam0, 1, 0);
		func_27(64, iVar0);
	}
}

int func_15()
{
	return Global_1572887->f_13;
}

bool func_16()
{
	return Global_1051252->f_8;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!get_event_data(1, iParam3, &Var0, 9))
	{
		return;
	}
	iVar9 = Var0.f_5;
	switch (Var0.f_4)
	{
		case 0:
			if (!bParam4)
			{
				return;
			}
			if (func_28(uParam0, Var0.f_6))
			{
				*uParam0->f_67[iVar9] = { Var0.f_6 };
				uParam0->f_164[iVar9] = 1;
				func_26(1, Var0.f_5, Var0.f_6, 0, 0);
			}
			else
			{
				*uParam0->f_67[iVar9] = { func_29() };
				uParam0->f_164[iVar9] = 0;
				func_26(2, Var0.f_5, Var0.f_6, 0, 0);
			}
			break;
		case 1:
			func_30(32, Var0.f_5);
			break;
		case 2:
			func_27(1, Var0.f_5);
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			break;
		case 5:
			if (!bParam4)
			{
				return;
			}
			*uParam0->f_67[iVar9] = { func_29() };
			uParam0->f_164[iVar9] = 0;
			break;
		case 6:
			if (!network_is_player_active(Var0.f_1))
			{
				return;
			}
			iVar10 = get_player_ped(Var0.f_1);
			if (is_entity_dead(iVar10))
			{
				return;
			}
			_0xfdecca06e8b81346(iVar10);
			break;
	}
}

bool func_18(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_19(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	return ((*Global_1138048)[iVar0]->f_7 && iParam0) != 0;
}

void func_20(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_33(uParam0, &(uParam0->f_3), &uVar0, &(uParam0->f_6), &(uParam0->f_5), 0);
		if (func_34(uParam0))
		{
			func_27(1, player_id());
			func_26(0, player_id(), *uParam0, 1, 0);
		}
		else
		{
			func_32(uParam0);
			func_27(1, player_id());
		}
	}
	else
	{
		func_27(2, player_id());
		func_30(8, player_id());
	}
}

void func_21(var uParam0)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	func_35((*Global_1138048)[iVar1], *uParam0, uParam0->f_6);
	func_27(32, iVar0);
	func_30(16, iVar0);
}

void func_22(var uParam0, bool bParam1)
{
	if (!func_36())
	{
		return;
	}
	if (get_number_of_free_stacks_of_this_size(1024) < 1)
	{
		if (bParam1)
		{
			func_27(4, iVar8);
		}
		else
		{
			func_27(8, player_id());
		}
		func_32(uParam0);
		return;
	}
	if (bParam1)
	{
		iVar8 = player_id();
		iVar9 = get_unique_int_for_player(iVar8);
		Var0 = iVar9;
		Var0.f_1 = iVar8;
		Var0.f_2 = uParam0->f_5;
		iVar10 = iVar8;
		(*Global_1138048)[iVar10]->f_4 = 1;
		func_37(&(Global_1958000->f_2));
		func_27(4, iVar8);
	}
	else
	{
		iVar8 = uParam0->f_4;
		iVar9 = get_unique_int_for_player(iVar8);
		Var0 = iVar9;
		Var0.f_1 = uParam0->f_4;
		func_27(8, player_id());
	}
	Var0.f_7 = iVar8;
	Var0.f_3 = { *uParam0 };
	Var0.f_6 = uParam0->f_3;
	func_32(uParam0);
	uParam0->f_7 = start_new_script_with_args(func_38(), &Var0, 8, 1024);
}

void func_23(var uParam0)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	if (!func_39((*Global_1138048)[iVar1], uParam0))
	{
		return;
	}
	else
	{
		func_27(16, iVar0);
		func_30(4, iVar0);
	}
}

bool func_24()
{
	iVar0 = 0;
	while (iVar0 < &Global_1138048)
	{
		if ((*Global_1138048)[iVar0]->f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_25(var uParam0)
{
	if (uParam0->f_4 < 0 || uParam0->f_4 == 32)
	{
		uParam0->f_4 = 0;
	}
	iVar0 = player_id();
	iVar1 = iVar0;
	if (iVar1 == uParam0->f_4)
	{
		return;
	}
	iVar2 = uParam0->f_4;
	if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
	{
		return;
	}
	if (func_40(*(*Global_1138048)[uParam0->f_4]))
	{
		return;
	}
	if (!(*Global_1138048)[uParam0->f_4]->f_4)
	{
		return;
	}
	if (func_41(Global_34, *(*Global_1138048)[uParam0->f_4], 1) < 22500f)
	{
		if (!is_thread_active(uParam0->f_7, false))
		{
			*uParam0 = { *(*Global_1138048)[uParam0->f_4] };
			uParam0->f_3 = (*Global_1138048)[uParam0->f_4]->f_3;
			func_30(2, iVar0);
		}
	}
}

void func_26(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	Var0 = 197;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = network_get_host_of_this_script();
		uVar9 = func_42(network_get_player_index(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_43(0, 8);
	}
	else
	{
		uVar9 = func_42(iParam1);
	}
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 9, 24, &uVar9);
}

void func_27(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 - ((*Global_1138048)[iVar0]->f_7 && iParam0));
}

bool func_28(var uParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (func_44(vParam1, *uParam0->f_67[iVar0]) || vdist2(vParam1, *uParam0->f_67[iVar0]) < 75625f)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_29()
{
	return 0f, 0f, 0f;
}

void func_30(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

var func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_32(var uParam0)
{
	*uParam0 = { func_29() };
	uParam0->f_3 = 0f;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	fVar25 = 999999.9f;
	bVar26 = false;
	Var0 = Global_1071686->f_28448[46]->f_3;
	iVar5 = func_45();
	iVar6 = func_46(iVar5);
	Var0.f_2 = 1655936658;
	Var0.f_3 = iVar6;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1058386141;
		iVar7 = _datafile_get_num_nodes(&Var0);
		uVar15 = Var0.f_1;
		iVar10 = 0;
		while (iVar10 < vVar28.x)
		{
			iVar27 = iVar10;
			if (!network_is_player_active(iVar27) || iVar27 == player_id())
			{
				*vVar28[iVar10] = { func_29() };
			}
			else
			{
				*vVar28[iVar10] = { func_47(iVar27) };
			}
			iVar10++;
		}
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			Var0.f_1 = uVar15;
			bVar26 = false;
			Var0.f_2 = -738381918;
			Var0.f_3 = iVar8;
			if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
			{
			}
			else if (!(iVar9 == iParam5 || iParam5 == 0))
			{
			}
			else
			{
				Var0.f_2 = 170329912;
				_datafile_get_hash(&iVar9, &Var0);
				Var0.f_2 = 519988399;
				if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
				{
				}
				else
				{
					Var0.f_2 = -518277907;
					_datafile_get_float(&vVar16, &Var0);
					Var0.f_2 = -1363423190;
					_datafile_get_float(&(vVar16.f_1), &Var0);
					Var0.f_2 = 861329762;
					_datafile_get_float(&(vVar16.f_2), &Var0);
					fVar24 = vdist2(vVar16, Global_35);
					if (fVar24 >= fVar25)
					{
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 32)
						{
							if (func_40(*vVar28[iVar10]))
							{
							}
							else if ((func_44(vVar16, *(*Global_1138048)[iVar10]) || (!func_40(*(*Global_1138048)[iVar10]) && vdist2(vVar16, *(*Global_1138048)[iVar10]) < 75625f)) || vdist2(*vVar28[iVar10], vVar16) < 100f)
							{
								bVar26 = true;
							}
							else
							{
								iVar10++;
							}
						}
						if (((!bVar26 && !func_48(vVar16, 1, 0, 0)) && !func_49(vVar16, 150f)) && !_0xaa9ee2aafc717623(vVar16, 0, 0, 0))
						{
							Var0.f_2 = -1425398587;
							_datafile_get_float(&uVar22, &Var0);
							Var0.f_2 = 1808799200;
							_datafile_get_hash(&uVar11, &Var0);
							Var0.f_2 = -1067565689;
							_datafile_get_int(&uVar13, &Var0);
							vVar19 = { vVar16 };
							uVar23 = uVar22;
							fVar25 = fVar24;
							uVar12 = uVar11;
							uVar14 = uVar13;
							if (fVar24 > 150f)
							{
								*uParam2 = 1;
							}
							else
							{
								*uParam2 = 0;
							}
						}
					}
				}
			}
			iVar8++;
		}
	}
	if (func_40(*uParam0))
	{
		*uParam0 = { vVar19 };
		*uParam1 = uVar23;
		*uParam3 = uVar12;
		*uParam4 = uVar14;
	}
}

bool func_34(var uParam0)
{
	if (func_40(*uParam0) || vdist(*uParam0, func_47(player_id())) > 150f)
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_35(var uParam0, vector3 vParam1, var uParam4)
{
	Var0 = { vParam1 };
	Var0.f_4 = 7f;
	Var0.f_5 = 544;
	Var0.f_6 = -1975763068;
	Var0.f_7 = uParam4;
	uParam0->f_5 = _0x183c0b6cfeffcae4(&Var0);
}

bool func_36()
{
	if (!has_script_loaded(func_38()))
	{
		request_script(func_38());
		return false;
	}
	return true;
}

void func_37(var uParam0)
{
	func_50(uParam0, 0f);
}

char* func_38()
{
	return "player_camp";
}

bool func_39(var uParam0, var uParam1)
{
	if (!_0xa4a4359320345b34(uParam0->f_5))
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		func_32(uParam1);
		func_27(16, player_id());
		return false;
	}
	iVar0 = _0xb33a604345f58202(uParam0->f_5);
	switch (iVar0)
	{
		case 4:
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			func_27(16, player_id());
			return false;
		case 1:
		case 2:
			return false;
		case 3:
			uParam0->f_6 = _0x351d71b8b72b858b(uParam0->f_5);
			func_30(4, player_id());
			func_27(16, player_id());
			return true;
		default:
			break;
	}
	return false;
}

bool func_40(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_41(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_51(vVar0, vParam1);
}

var func_42(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

var func_43(int iParam0, int iParam1)
{
	return func_52(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

bool func_44(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_45()
{
	return Global_1896622->f_41;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

Vector3 func_47(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_48(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_40(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_49(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_53(iVar0))
		{
			if (vdist(func_54(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_50(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_51(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

var func_52(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_58() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_59());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_59());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_59());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_60(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_61(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_62(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_63(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

bool func_53(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_64((*Global_1835011)[iParam0]->f_1);
}

Vector3 func_54(int iParam0)
{
	return func_65(iParam0);
}

float func_55()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_58()
{
	return Global_1051252->f_12;
}

char* func_59()
{
	return "unnamed";
}

int func_60(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_61(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_66(36, iParam0);
}

int func_62(int iParam0)
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

bool func_63(int iParam0)
{
	if (func_67(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_68(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_64(struct<2> Param0)
{
	iVar0 = func_69(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

Vector3 func_65(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

bool func_66(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_70(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_71())
	{
		return func_70(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_70(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_67(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_68(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_72(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_73(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

int func_69(struct<2> Param0)
{
	if (!func_74(Param0))
	{
		return -1;
	}
	iVar0 = func_75(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_70(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_71()
{
	return Global_1102219->f_3672;
}

void func_72(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_73(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_73(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_74(struct<2> Param0)
{
	if (!func_76(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_77(Param0))
	{
		return false;
	}
	return true;
}

int func_75(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_78(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_78(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_76(int iParam0)
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

int func_77(int iParam0)
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

bool func_78(struct<2> Param0, var uParam2)
{
	if (!func_74(Param0))
	{
		return false;
	}
	func_79(uParam2);
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

void func_79(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

