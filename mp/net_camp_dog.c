void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1(vScriptParam_0);
	while (!func_2(0, 0) && func_3(&uLocal_21, &Local_40, &iLocal_105, vScriptParam_0))
	{
		wait(0);
	}
	func_4();
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	func_5(32, iParam0);
	func_6();
	func_7(&uLocal_21);
	network_register_host_broadcast_variables(&uLocal_21, 19, 48);
	func_8(_0xba24095ea96dfe17(&uLocal_21), 19, "m_sNetCampDogHostData");
	func_9(&Local_40);
	network_register_player_broadcast_variables(&Local_40, 65, 49);
	func_10(_0x690806bc83bc8ca2(Local_40[0]), 65, "m_sNetCampDogPlayerData");
	reserve_network_mission_peds(1);
	func_11(0);
	set_this_script_can_be_paused(false);
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

bool func_3(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	bVar0 = network_is_host_of_this_script();
	bVar2 = false;
	bVar3 = false;
	if (network_does_network_id_exist(uParam0->f_1))
	{
		iVar1 = net_to_ped(uParam0->f_1);
		bVar2 = does_entity_exist(iVar1);
	}
	if (bVar2)
	{
		bVar3 = network_has_control_of_entity(iVar1);
	}
	if (bVar0)
	{
		if (!func_12(uParam0, uParam1, iParam2, vParam3))
		{
			return false;
		}
	}
	if (bVar3)
	{
		func_13(uParam0, uParam1, iParam2);
		func_14(uParam0, uParam1, iParam2);
	}
	if (!func_15(uParam0, uParam1, iParam2, vParam3))
	{
		return false;
	}
	return true;
}

void func_4()
{
	terminate_this_thread();
}

void func_5(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_4();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_6()
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
			func_4();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_4();
					break;
				case 2:
					func_4();
					break;
				case 4:
					func_4();
					break;
				case 3:
					func_4();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_4();
		}
		if (!network_is_game_in_progress())
		{
			func_4();
		}
		if (!network_is_signed_online())
		{
			func_4();
		}
		if (func_16() == 0)
		{
			if (func_17())
			{
				func_4();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_4();
	}
	return 1;
}

void func_7(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 255;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_18(&(uParam0->f_6));
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_19(&(uParam0->f_12));
	func_20(&(uParam0->f_18));
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_9(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_21((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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
					func_4();
					break;
				case 2:
					func_4();
					break;
				case 4:
					func_4();
					break;
				case 3:
					func_4();
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
			func_4();
			return;
		}
		wait(0);
	}
}

bool func_12(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	iVar0 = func_22(uParam0);
	iVar1 = 0;
	iVar1 = iVar1;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (network_does_network_id_exist(uParam0->f_1))
	{
		iVar2 = net_to_ped(uParam0->f_1);
		bVar3 = does_entity_exist(iVar2);
	}
	if (bVar3)
	{
		bVar4 = is_entity_dead(iVar2);
		bVar4 = bVar4;
	}
	if (bVar3)
	{
		bVar5 = network_has_control_of_entity(iVar2);
	}
	switch (iVar0)
	{
		case 0:
			func_7(uParam0);
			func_23(uParam0, vParam3);
			func_24(uParam0, 1);
			break;
		case 1:
			if (func_25(uParam0, uParam1, iParam2, vParam3))
			{
				func_24(uParam0, 2);
			}
			break;
		case 2:
			func_26(uParam0, iVar2);
			iVar1 = func_27(uParam0, uParam1, iParam2);
			if (func_28(uParam0, uParam1, iParam2))
			{
				func_24(uParam0, 3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar5)
				{
					func_29(uParam0, uParam1, iParam2);
				}
				else
				{
					network_request_control_of_entity(iVar2);
				}
			}
			else
			{
				func_24(uParam0, 4);
			}
			break;
		case 4:
			return false;
	}
	return true;
}

void func_13(var uParam0, var uParam1, int* iParam2)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return;
	}
	iVar0 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = is_entity_dead(iVar0);
	if (bVar1)
	{
		if (!func_30(iParam2, 0))
		{
			func_31(uParam0->f_2);
			func_32(iParam2, 0);
		}
	}
}

int func_14(var uParam0, var uParam1, int* iParam2)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	iVar1 = func_33(uParam0);
	iVar2 = 0;
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			iVar2 = func_34(uParam0, uParam1, iParam2);
			break;
		case 2:
			iVar2 = func_35(uParam0, uParam1, iParam2);
			break;
		case 3:
			break;
		case 4:
			_0xaab050da48b57978(iVar0, "Interaction_Happy", 0, 20000, 4);
			break;
		case 5:
			break;
		case 6:
			iVar2 = func_36(uParam0, uParam1, iParam2);
			break;
		case 7:
			iVar2 = func_37(uParam0, uParam1, iParam2);
			break;
		case 8:
			iVar2 = func_38(uParam0, uParam1, iParam2);
			break;
	}
	return iVar2;
}

bool func_15(var uParam0, var uParam1, int* iParam2, int iParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (network_does_network_id_exist(uParam0->f_1))
	{
		iVar1 = net_to_ped(uParam0->f_1);
		if (does_entity_exist(iVar1))
		{
			bVar0 = true;
		}
	}
	iVar2 = player_id();
	iVar3 = iVar2;
	iVar4 = func_39((*uParam1)[iVar3]);
	switch (iVar4)
	{
		case 0:
			func_40(iParam2);
			func_21((*uParam1)[iVar3]);
			func_41(iParam2, iParam3);
			func_42((*uParam1)[iVar3]);
			func_43((*uParam1)[iVar3], 1);
			break;
		case 1:
			func_44(uParam0, uParam1, iParam2);
			func_45(uParam0, iParam2);
			if (func_46(uParam0) != 11)
			{
				return true;
			}
			if (bVar0)
			{
				func_47(uParam0, iVar1);
				func_48(iParam2);
				func_49(uParam0, iParam2);
				func_50(iVar3, iVar1);
				func_51(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 2);
				func_53(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 4);
				func_54(uParam0, (*uParam1)[iVar3], iVar1, iVar2);
				func_55(uParam0, (*uParam1)[iVar3]);
				func_56(uParam0, (*uParam1)[iVar3], iVar1);
				func_57(uParam0, uParam1, iVar1);
				return true;
			}
			if (!bVar0)
			{
				func_43((*uParam1)[iVar3], 2);
			}
		case 2:
			if (!func_58(uParam0, uParam1, iParam2))
			{
				return true;
			}
			func_43((*uParam1)[iVar3], 3);
			break;
		case 3:
			break;
	}
	return true;
}

int func_16()
{
	return Global_1572887->f_13;
}

bool func_17()
{
	return Global_1051252->f_8;
}

void func_18(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
}

void func_19(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -15;
	uParam0->f_5 = -15;
}

void func_20(var uParam0)
{
	*uParam0 = -15;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_4;
}

void func_23(var uParam0, vector3 vParam1)
{
	*uParam0 = vParam1.x;
	uParam0->f_2 = vParam1.y;
	uParam0->f_3 = vParam1.z;
}

void func_24(var uParam0, int iParam1)
{
	if (uParam0->f_4 == iParam1)
	{
		return;
	}
	uParam0->f_4 = iParam1;
}

bool func_25(var uParam0, var uParam1, int* iParam2, var uParam3, var uParam4, var uParam5)
{
	iVar0 = func_46(uParam0);
	switch (iVar0)
	{
		case 0:
			func_59(uParam0, uParam1, iParam2);
			func_60(uParam0, 1);
		case 1:
			if (func_61(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 2);
			}
			break;
		case 2:
			if (func_62(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 3);
			}
			break;
		case 3:
			if (func_63(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 4);
			}
			break;
		case 4:
			iVar1 = uParam0->f_2;
			bVar2 = false;
			if (func_64(iVar1) && !func_65(iVar1))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				func_60(uParam0, 6);
			}
			else
			{
				func_60(uParam0, 5);
			}
			break;
		case 6:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_67(uParam0->f_2, 451736625);
				func_60(uParam0, 7);
			}
			break;
		case 7:
			if (func_68(uParam0, 2))
			{
				func_60(uParam0, 8);
			}
			if (func_68(uParam0, 3))
			{
				func_60(uParam0, 5);
			}
			break;
		case 5:
			if (func_69(uParam0))
			{
				func_60(uParam0, 10);
			}
			break;
		case 8:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_70(uParam0->f_2);
				func_60(uParam0, 9);
			}
			break;
		case 9:
			if (func_68(uParam0, 1))
			{
				vVar3 = { func_71(&(iParam2->f_10)) };
				func_72(uParam0, vVar3, 0f);
				func_73(uParam0, 1);
				func_60(uParam0, 10);
			}
			break;
		case 10:
			if (func_74(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 11);
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_26(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
	}
	bVar0 = func_68(uParam0, 0);
	bVar1 = is_entity_visible(iParam1);
	if (bVar0 && bVar1)
	{
		func_73(uParam0, 0);
	}
}

int func_27(var uParam0, var uParam1, int* iParam2)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	iVar1 = uParam0->f_2;
	if (func_75(uParam0))
	{
		func_76(uParam0, 8);
	}
	if (func_77(uParam0, uParam1))
	{
		func_76(uParam0, 4);
	}
	iVar2 = func_33(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_64(iVar1))
			{
				iVar3 = 6;
				func_76(uParam0, iVar3);
			}
			else
			{
				iVar3 = 1;
				func_76(uParam0, iVar3);
			}
			break;
		case 1:
			iVar3 = func_78(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 2:
			iVar3 = func_79(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 3:
			break;
		case 4:
			func_80(uParam0->f_2);
			func_76(uParam0, 5);
			break;
		case 5:
			if (!func_81(uParam1))
			{
				func_76(uParam0, 1);
			}
			break;
		case 6:
			iVar3 = func_82(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 7:
			iVar3 = func_83(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 8:
			iVar3 = func_84(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
	}
	return 1;
}

bool func_28(var uParam0, var uParam1, int* iParam2)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return true;
	}
	iVar0 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (is_entity_dead(iVar0))
	{
	}
	iVar1 = uParam0->f_2;
	iVar2 = iVar1;
	iVar3 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar3))
	{
		return true;
	}
	if (is_entity_dead(iVar3))
	{
	}
	iVar4 = func_85(iVar2);
	if (!func_86(iVar4, 0))
	{
		return true;
	}
	if (!func_87(iVar2))
	{
		return true;
	}
	if (func_88(iVar2))
	{
		return true;
	}
	if (iVar4 != uParam0->f_3)
	{
		return true;
	}
	bVar5 = func_64(iVar2);
	bVar6 = func_89(iVar2);
	bVar7 = true;
	if (bVar5 || bVar6)
	{
		bVar7 = false;
	}
	if (func_81(uParam1))
	{
		bVar7 = false;
	}
	if (bVar7)
	{
		bVar13 = func_90(iVar1, &uVar8, &uVar9, &uVar12);
		if (!bVar13)
		{
			return true;
		}
	}
	vVar14 = { get_entity_coords(iVar0, true, false) };
	if (!func_91(vVar14, 150f))
	{
		return true;
	}
	return false;
}

int func_29(var uParam0, var uParam1, int* iParam2)
{
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar0))
	{
		return 1;
	}
	bVar1 = is_entity_dead(iVar0);
	if (bVar1)
	{
		set_ped_as_no_longer_needed(&iVar0);
	}
	else
	{
		_0x7043d0681285ba2d(&iVar0);
	}
	return 1;
}

bool func_30(int* iParam0, int iParam1)
{
	if (func_92(*iParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	Var0.f_4 = 0;
	Var0.f_7 = uParam0;
	func_94(Var0, func_93(0, 8));
}

void func_32(int* iParam0, int iParam1)
{
	if (func_92(*iParam0, iParam1))
	{
		return;
	}
	func_95(iParam0, iParam1);
}

int func_33(var uParam0)
{
	return uParam0->f_11;
}

int func_34(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	if (!func_96(iVar0, -76381094))
	{
		bVar1 = func_68(uParam0, 0);
		iVar2 = func_97(uParam0->f_2, iVar0, bVar1);
		return iVar2;
	}
	return 1;
}

int func_35(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	if (!func_96(iVar0, 1682639051))
	{
		iVar1 = get_player_ped(uParam0->f_12);
		iVar2 = func_98(iVar0, iVar1);
		return iVar2;
	}
	set_ped_reset_flag(iVar0, 229, true);
	return 1;
}

int func_36(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	iVar1 = get_player_ped(uParam0->f_2);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	bVar2 = func_99(iVar0, iVar1, 1, 1) > 8f;
	if (bVar2)
	{
		if (!func_96(iVar0, 1227113341))
		{
			iVar3 = func_100(iVar0, uParam0->f_2);
			return iVar3;
		}
		return 1;
	}
	if (!func_96(iVar0, -1927882907))
	{
		iVar4 = func_101(iVar0, iVar1);
		return iVar4;
	}
	return 1;
}

int func_37(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	iVar1 = get_player_ped(uParam0->f_2);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	if (!func_96(iVar0, 713668775))
	{
		iVar2 = func_102(iVar0, uParam0->f_2);
		return iVar2;
	}
	return 1;
}

int func_38(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	iVar1 = get_player_ped(uParam0->f_2);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	vVar2 = { get_entity_coords(iVar0, true, false) };
	vVar5 = { func_103(uParam0->f_2) };
	if (func_104(vVar5))
	{
		return 0;
	}
	fVar8 = get_distance_between_coords(vVar2, vVar5, true);
	if (fVar8 > 12f)
	{
		if (!func_96(iVar0, 713668775))
		{
			iVar9 = func_105(iVar0, vVar5, 6f);
			return iVar9;
		}
		return 1;
	}
	bVar12 = func_106(iVar1, vVar2, 60f, &iVar10, &uVar11);
	iVar13 = player_id();
	iVar14 = iVar13;
	if (bVar12)
	{
		func_107((*uParam1)[iVar14], 3);
	}
	else
	{
		func_108((*uParam1)[iVar14], 3);
	}
	if (bVar12)
	{
		if (!func_96(iVar0, -1927882907))
		{
			iVar15 = func_101(iVar0, iVar10);
			return iVar15;
		}
	}
	else
	{
		if (!func_109(vVar2, &iVar16, &fVar8))
		{
			return 0;
		}
		iVar17 = get_player_ped(iVar16);
		if (!func_96(iVar0, -1927882907))
		{
			iVar18 = func_101(iVar0, iVar17);
			return iVar18;
		}
	}
	return 1;
}

int func_39(var uParam0)
{
	return *uParam0;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = -1;
	func_110(&(uParam0->f_10));
}

void func_41(var uParam0, int iParam1)
{
	if (!func_111(uParam0, iParam1))
	{
		return;
	}
	func_112(2, Global_1137451->f_5, 707888648);
	func_112(6, Global_1137451->f_5, 106566339);
	func_112(6, Global_1137451->f_5, -50399569);
	func_112(6, Global_1137451->f_5, 1222652248);
	func_112(6, Global_1137451->f_5, -350226955);
	func_112(6, Global_1137451->f_5, -1535431934);
	func_112(6, Global_1137451->f_5, -1448293989);
	func_112(6, Global_1137451->f_5, 266218800);
	func_112(6, Global_1137451->f_5, 555364152);
	func_112(6, Global_1137451->f_5, -1663301869);
	func_112(6, Global_1137451->f_5, -1996978098);
	func_112(6, Global_1137451->f_5, 1078461828);
	func_112(6, Global_1137451->f_5, 747813878);
	func_112(6, Global_1137451->f_5, -40378879);
	if (Global_1132288->f_2060 != 0)
	{
		func_112(2, Global_1137451->f_5, Global_1132288->f_2060);
	}
}

void func_42(var uParam0)
{
	if (func_113(uParam0, 4))
	{
		return;
	}
	if (is_orbis_version())
	{
		bVar0 = false;
		if (!_0x595f028698072dd9(-1))
		{
			bVar0 = true;
		}
		if (!_ugc_has_privilege())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			func_107(uParam0, 5);
		}
	}
	func_107(uParam0, 4);
}

void func_43(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_44(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_114(iVar0, uParam0, iParam2);
				break;
		}
		iVar0++;
	}
}

void func_45(var uParam0, int* iParam1)
{
	if (!func_30(iParam1, 5))
	{
		return;
	}
	if (func_115(&(iParam1->f_10)))
	{
		vVar0 = { func_71(&(iParam1->f_10)) };
		func_116(uParam0->f_2, vVar0);
		func_117(iParam1, 5);
	}
}

int func_46(var uParam0)
{
	return uParam0->f_5;
}

void func_47(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
	}
	bVar0 = func_68(uParam0, 0);
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_33(uParam0);
	bVar2 = false;
	switch (iVar1)
	{
		case 1:
			bVar2 = true;
			break;
	}
	if (bVar2)
	{
		if (!func_118(iParam1, -76381094))
		{
			return;
		}
		if (!_0x02ebbb3989b7e695(iParam1))
		{
			return;
		}
	}
	if (is_entity_visible(iParam1))
	{
		return;
	}
	set_entity_visible(iParam1, true);
	_0xa91e6cf94404e8c9(iParam1);
}

void func_48(int* iParam0)
{
	iVar0 = player_ped_id();
	func_112(2, get_ped_relationship_group_hash(iVar0), Global_1137451->f_5);
}

void func_49(var uParam0, int* iParam1)
{
	iVar0 = player_id();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	bVar2 = is_entity_dead(iVar1);
	iVar3 = uParam0->f_2;
	bVar4 = false;
	if (func_64(iVar3) || func_89(iVar3))
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (bVar4)
	{
		bVar5 = true;
	}
	if (bVar2)
	{
		bVar5 = false;
	}
	if (bVar5)
	{
		if (!does_blip_exist(iParam1->f_9))
		{
			iParam1->f_9 = _blip_add_for_entity(-89429847, iVar1);
		}
	}
	else if (does_blip_exist(iParam1->f_9))
	{
		remove_blip(&(iParam1->f_9));
	}
}

void func_50(int iParam0, int iParam1)
{
	bVar0 = network_is_in_mp_cutscene();
	if (!bVar0)
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
	}
	uVar1 = _0xd9267375834c5eab(iParam0);
	set_entity_visible_in_cutscene(iParam1, 0, 1, uVar1);
}

void func_51(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	iVar0 = player_id();
	iVar1 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		func_117(iParam1, 1);
		return;
	}
	if (!does_entity_exist(iParam3))
	{
		func_117(iParam1, 1);
		return;
	}
	if (!network_is_player_active(iParam2))
	{
		func_117(iParam1, 1);
		return;
	}
	bVar2 = is_entity_dead(iVar1);
	bVar3 = is_entity_dead(iParam3);
	fVar4 = func_119(iVar1, iParam3, 1);
	StringCopy(&cVar5, "", 64);
	bVar15 = false;
	if (!func_30(iParam1, 1))
	{
		if (fVar4 <= pow(5f, 2f))
		{
			bVar13 = func_120(uParam0, iParam1, iParam2, &cVar5, &bVar15);
			bVar14 = _0x870708a6e147a9ad(iParam3, &cVar5, 2.5f, 0, 0, 0, 0, 0, bVar13, -1);
			if (bVar14 || bVar15)
			{
				func_32(iParam1, 1);
			}
		}
	}
	else if ((bVar2 || bVar3) || fVar4 > pow(7.5f, 2f))
	{
		bVar14 = _0xe98d55c5983f2509(iParam3);
		if (bVar14)
		{
			func_117(iParam1, 1);
		}
	}
}

void func_52(int* iParam0, var uParam1, int iParam2)
{
	if (!func_30(iParam0, iParam2))
	{
		return;
	}
	iVar0 = uParam1;
	Var9 = { func_121(iParam0) };
	if (!func_122(iVar0, &uVar1))
	{
		return;
	}
	if (!are_strings_equal(&uVar1, &Var9))
	{
		return;
	}
	func_117(iParam0, iParam2);
}

void func_53(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	if (!func_30(iParam1, 4) && func_30(iParam1, 3))
	{
		return;
	}
	bVar0 = func_123(uParam0, iParam1, iParam2, iParam3);
	if (!bVar0)
	{
		return;
	}
}

void func_54(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = get_player_ped(iParam3);
	iVar1 = func_124(iVar0);
	iVar2 = func_124(iParam2);
	bVar3 = false;
	if (iVar1 && iVar2)
	{
		bVar3 = _0x8be24d74d74c6e9b(iVar0) == iParam2;
	}
	if (bVar3)
	{
		func_107(uParam1, 1);
	}
	else
	{
		func_108(uParam1, 1);
	}
	bVar4 = false;
	if (func_22(uParam0) == 3)
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_125(iVar0);
		func_125(iParam2);
		if (does_entity_exist(iParam2))
		{
			is_entity_dead(iParam2);
			set_ped_config_flag(iParam2, 301, true);
		}
	}
}

void func_55(var uParam0, var uParam1)
{
	if (func_33(uParam0) == 7)
	{
		iVar0 = uParam0->f_2;
		func_126(iVar0);
		func_108(uParam1, 2);
	}
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	if (func_113(uParam1, 2))
	{
		return;
	}
	if (func_33(uParam0) != 6)
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = player_id();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = get_player_ped(iVar0);
	if (func_99(iParam2, iVar1, 1, 1) > 8f)
	{
		return;
	}
	if (!func_127())
	{
		return;
	}
	uVar2 = _0x3e593df9c2962ec6(776060936);
	Global_1904651->f_8690 = player_id();
	func_128(620, uVar2, 1);
	func_107(uParam1, 2);
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (func_113((*uParam1)[iVar1], 3))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	bVar2 = false;
	iVar3 = func_33(uParam0);
	switch (iVar3)
	{
		case 6:
		case 7:
			bVar2 = true;
			break;
		case 8:
			if (bVar0)
			{
				bVar2 = true;
			}
			break;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (is_entity_dead(iParam2))
	{
		return;
	}
	bVar4 = is_ped_using_action_mode(iParam2);
	if (bVar2 != bVar4)
	{
		set_ped_using_action_mode(iParam2, bVar2, -1, 0);
	}
}

bool func_58(var uParam0, var uParam1, int* iParam2)
{
	remove_relationship_group(Global_1137451->f_5);
	return true;
}

void func_59(var uParam0, var uParam1, var uParam2)
{
	if (!can_register_mission_peds(1))
	{
		return;
	}
	reserve_network_mission_peds(1);
}

void func_60(var uParam0, int iParam1)
{
	if (uParam0->f_5 == iParam1)
	{
		return;
	}
	uParam0->f_5 = iParam1;
}

bool func_61(var uParam0, var uParam1, var uParam2)
{
	iVar0 = get_num_reserved_mission_peds(0);
	if (iVar0 < 1)
	{
		return false;
	}
	return true;
}

bool func_62(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_129(uParam0->f_3);
	if (!is_model_valid(iVar0))
	{
		return false;
	}
	request_model(iVar0, false);
	return true;
}

bool func_63(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_129(uParam0->f_3);
	if (!is_model_valid(iVar0))
	{
		return false;
	}
	if (!has_model_loaded(iVar0))
	{
		request_model(iVar0, false);
		return false;
	}
	return true;
}

bool func_64(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130((*Global_1137457)[iParam0], 2))
	{
		return true;
	}
	return false;
}

bool func_65(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130((*Global_1137457)[iParam0], 3))
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0, int iParam1)
{
	if (!network_is_player_active(iParam1))
	{
		return false;
	}
	iVar0 = iParam1;
	if (func_39((*uParam0)[iVar0]) != 1)
	{
		return false;
	}
	return true;
}

void func_67(var uParam0, int iParam1)
{
	Var0.f_4 = 5;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	func_94(Var0, func_131(uParam0));
}

bool func_68(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0)
{
	if (!func_90(uParam0->f_2, &uVar0, &vVar1, &uVar4))
	{
		return false;
	}
	uParam0->f_6 = { vVar1 };
	uParam0->f_6.f_3 = uVar4;
	return true;
}

void func_70(var uParam0)
{
	Var0.f_4 = 3;
	Var0.f_7 = uParam0;
	func_94(Var0, func_131(uParam0));
}

Vector3 func_71(var uParam0)
{
	return uParam0->f_3.f_3;
}

int func_72(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_6 = { vParam1 };
	uParam0->f_6.f_3 = fParam4;
	return 1;
}

void func_73(var uParam0, int iParam1)
{
	if (!func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_132(&(uParam0->f_10), iParam1);
}

bool func_74(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = uParam0->f_3;
	iVar1 = func_129(iVar0);
	vVar2 = { uParam0->f_6 };
	uVar5 = uParam0->f_6.f_3;
	if (!func_133(&(uParam0->f_1), iVar1, vVar2, uVar5, 1, 0, 0, 1, 1))
	{
		return false;
	}
	if (!network_does_network_id_exist(uParam0->f_1))
	{
		return false;
	}
	iVar6 = net_to_ped(uParam0->f_1);
	if (!does_entity_exist(iVar6))
	{
		return false;
	}
	if (is_entity_dead(iVar6))
	{
	}
	iVar7 = func_134(iVar0);
	_set_ped_outfit_preset(iVar6, iVar7, 0);
	if (!_0xb07d3185e11657a5(iVar6))
	{
		set_entity_as_mission_entity(iVar6, true, false);
	}
	iVar8 = get_player_ped(uParam0->f_2);
	if (does_entity_exist(iVar8))
	{
		set_entity_invincible(iVar6, true);
	}
	set_network_id_visible_in_cutscene(uParam0->f_1, 1, 1, 256);
	_0xf3354d6ca46f419d(iVar6, 0);
	set_ped_relationship_group_hash(iVar6, Global_1137451->f_5);
	set_entity_visible(iVar6, false);
	func_135(uParam0, 0);
	func_136(iVar6);
	func_123(uParam1, iParam2, uParam0->f_2, iVar6);
	return true;
}

bool func_75(var uParam0)
{
	iVar0 = func_33(uParam0);
	if (iVar0 == 8)
	{
		return false;
	}
	iVar1 = uParam0->f_2;
	iVar2 = net_to_ped(uParam0->f_1);
	bVar3 = func_64(iVar1);
	bVar4 = func_89(iVar1);
	if (!bVar3 && !bVar4)
	{
		return false;
	}
	if (!does_entity_exist(iVar2))
	{
		return false;
	}
	if (is_entity_dead(iVar2))
	{
		return false;
	}
	vVar5 = { get_entity_coords(iVar2, true, false) };
	vVar8 = { func_103(iVar1) };
	fVar11 = get_distance_between_coords(vVar5, vVar8, true);
	if (fVar11 > 30f)
	{
		return false;
	}
	return true;
}

void func_76(var uParam0, int iParam1)
{
	if (uParam0->f_11 == iParam1)
	{
		return;
	}
	uParam0->f_11 = iParam1;
}

bool func_77(var uParam0, var uParam1)
{
	iVar0 = func_33(uParam0);
	if (iVar0 == 4 || iVar0 == 5)
	{
		return false;
	}
	if (!func_81(uParam1))
	{
		return false;
	}
	return true;
}

int func_78(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	bVar1 = func_68(uParam0, 0);
	if (bVar1)
	{
		return 1;
	}
	if (func_137(uParam0->f_2, iVar0, &iVar2))
	{
		iVar3 = network_get_participant_index(iVar2);
		iVar4 = iVar3;
		if (func_113((*uParam1)[iVar4], 0))
		{
			return 1;
		}
		iVar5 = func_138();
		bVar6 = func_139(uParam0->f_12.f_5);
		if (bVar6)
		{
			func_140(iVar5, uParam0->f_12.f_5, &uVar7, &uVar8, &iVar9, &uVar10, &uVar11, &uVar12);
			if (iVar9 < 2)
			{
				return 1;
			}
		}
		if (func_141(iVar2))
		{
			return 1;
		}
		uParam0->f_12 = iVar2;
		return 2;
	}
	return 1;
}

int func_79(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	iVar1 = func_138();
	vVar2 = { get_entity_coords(iVar0, true, false) };
	bVar5 = true;
	if (uParam0->f_12.f_4 == -15)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_1 = { vVar2 };
		uParam0->f_12.f_4 = iVar1;
	}
	func_140(iVar1, uParam0->f_12.f_4, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
	if (iVar7 >= 20)
	{
		bVar5 = false;
	}
	vVar12 = { vVar2 };
	iVar15 = _0x243e1b4607040057(iVar0);
	if (does_entity_exist(iVar15))
	{
		vVar12 = { get_entity_coords(iVar15, true, false) };
	}
	fVar16 = get_distance_between_coords(vVar12, uParam0->f_12.f_1, true);
	if (fVar16 >= 15f)
	{
		bVar5 = false;
	}
	if (func_141(uParam0->f_12))
	{
		bVar5 = false;
	}
	if (!bVar5)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_5 = iVar1;
		return 1;
	}
	return 2;
}

void func_80(var uParam0)
{
	Var0.f_4 = 2;
	Var0.f_7 = uParam0;
	func_94(Var0, func_93(0, 8));
}

bool func_81(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_142(iVar0, 1, 1))
		{
		}
		else if (func_113((*uParam0)[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_82(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	iVar1 = get_player_ped(uParam0->f_2);
	bVar2 = false;
	fVar3 = func_99(iVar0, iVar1, 1, 1);
	if (fVar3 <= 8f)
	{
		bVar2 = true;
	}
	iVar4 = func_138();
	if (bVar2)
	{
		if (uParam0->f_18 == -15)
		{
			func_20(&(uParam0->f_18));
			uParam0->f_18 = iVar4;
		}
	}
	bVar5 = true;
	if (uParam0->f_18 != -15)
	{
		func_140(iVar4, uParam0->f_18, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
		if (iVar7 >= 5)
		{
			bVar5 = false;
		}
	}
	if (!bVar5)
	{
		return 7;
	}
	return 6;
}

int func_83(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = net_to_ped(uParam0->f_1);
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar4 = { func_103(uParam0->f_2) };
	fVar7 = get_distance_between_coords(vVar1, vVar4, true);
	if (fVar7 <= 15f)
	{
		return 1;
	}
	return 7;
}

int func_84(var uParam0, var uParam1, int* iParam2)
{
	iVar0 = uParam0->f_2;
	iVar1 = net_to_ped(uParam0->f_1);
	vVar2 = { get_entity_coords(iVar1, true, false) };
	vVar5 = { func_103(iVar0) };
	fVar8 = get_distance_between_coords(vVar2, vVar5, true);
	if (fVar8 > 30f)
	{
		return 7;
	}
	if (!func_89(iVar0))
	{
		return 1;
	}
	return 8;
}

int func_85(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1137457)[iParam0]->f_1;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_87(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = func_130((*Global_1137457)[iParam0], 0);
	return bVar0;
}

bool func_88(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = func_130((*Global_1137457)[iParam0], 1);
	return bVar0;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130((*Global_1137457)[iParam0], 4))
	{
		return true;
	}
	return false;
}

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (!func_143(iParam0, &iVar0))
	{
		return false;
	}
	if (!_does_scenario_point_exist(iVar0))
	{
	}
	*iParam1 = iVar0;
	*uParam2 = { _get_scenario_point_coords(*iParam1, true) };
	*uParam3 = _get_scenario_point_heading(*iParam1, true);
	return true;
}

bool func_91(vector3 vParam0, float fParam3)
{
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_142(iVar3, 1, 1))
		{
		}
		else
		{
			iVar1 = int_to_participantindex(iVar3);
			iVar0 = network_get_player_index(iVar1);
			fVar2 = get_distance_between_coords(func_144(iVar0), vParam0, true);
			if (fVar2 <= fParam3)
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

bool func_92(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

var func_93(int iParam0, int iParam1)
{
	return func_145(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_94(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	iVar0 = player_id();
	if (!_0x179a6f0ee2e79026(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &vParam0, 20, 5, &uParam20);
}

void func_95(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_97(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (_0x0c3cb2e600c8977d(iParam1, 1))
	{
		return 0;
	}
	bVar5 = func_90(iParam0, &iVar0, &uVar1, &uVar4);
	if (!bVar5)
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iVar0))
	{
		return 0;
	}
	bVar6 = true;
	iVar7 = 0;
	fVar8 = -1f;
	if (bParam2)
	{
		bVar6 = false;
		iVar7 = 1951165908;
		fVar8 = 0f;
	}
	_task_use_scenario_point(iParam1, iVar0, 0, 0, bVar6, bParam2, iVar7, false, fVar8, false);
	return 1;
}

int func_98(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	task_follow_and_converse_with_ped(iParam0, iParam1, 0, 0, 2f, 2f, 8, 0, 0, 1069547520, 1073741824);
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, 0);
	set_ped_reset_flag(iParam0, 229, true);
	_0xaab050da48b57978(iParam0, "Interaction_Happy", iParam1, 20000, 4);
	return 1;
}

float func_99(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_100(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = get_player_ped(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	task_go_to_entity(iParam0, iVar0, -1, 8f, 2f, 12f, 0);
	return 1;
}

int func_101(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	iVar0 = -1890605720;
	task_bark(iParam0, iParam1, iVar0);
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = get_player_ped(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	vVar1 = { func_103(iParam1) };
	if (func_104(vVar1))
	{
		return 0;
	}
	iVar4 = 5242884;
	task_follow_nav_mesh_to_coord(iParam0, vVar1, 2f, -1, 10f, iVar4, 40000f);
	return 1;
}

Vector3 func_103(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_146()]->f_38.f_4;
	}
	return (*Global_1134390)[iParam0]->f_38.f_4;
}

bool func_104(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_105(int iParam0, vector3 vParam1, float fParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = 5242884;
	task_follow_nav_mesh_to_coord(iParam0, vParam1, 2f, -1, fParam4, iVar0, 40000f);
	return 1;
}

int func_106(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = create_itemset(true);
	if (!is_itemset_valid(iVar0))
	{
		return 0;
	}
	iVar1 = _0x59b57c4b06531e1e(vParam1, fParam4, iVar0, 1);
	fVar3 = 1000000f;
	bVar4 = false;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar6 = get_indexed_item_in_itemset(iVar5, iVar0);
		if (!_does_item_have_valid_base(iVar6))
		{
		}
		else
		{
			iVar7 = _get_entity_from_item(iVar6);
			if (is_entity_dead(iVar7))
			{
			}
			else if (!is_entity_a_ped(iVar7))
			{
			}
			else
			{
				iVar8 = _0x3ffb15534067dcd4(iVar7);
				iVar9 = get_relationship_between_peds(iParam0, iVar8);
				if (iVar9 != 6)
				{
				}
				else
				{
					fVar10 = func_99(iParam0, iVar8, 1, 1);
					if (fVar10 < fVar3)
					{
						bVar4 = true;
						iVar2 = iVar8;
						fVar3 = fVar10;
					}
				}
			}
		}
		iVar5++;
	}
	destroy_itemset(iVar0);
	if (bVar4)
	{
		*iParam5 = iVar2;
		*uParam6 = fVar3;
		return 1;
	}
	return 0;
}

void func_107(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_1, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_1), iParam1);
}

void func_108(var uParam0, int iParam1)
{
	if (!func_92(uParam0->f_1, iParam1))
	{
		return;
	}
	func_132(&(uParam0->f_1), iParam1);
}

bool func_109(vector3 vParam0, int iParam3, float fParam4)
{
	fVar1 = 1000000f;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_142(iVar3, 1, 1))
		{
		}
		else
		{
			iVar4 = int_to_participantindex(iVar3);
			iVar5 = network_get_player_index(iVar4);
			iVar6 = get_player_ped(iVar5);
			vVar7 = { get_entity_coords(iVar6, true, false) };
			if (is_entity_dead(iVar6))
			{
			}
			else
			{
				fVar10 = get_distance_between_coords(vVar7, vParam0, true);
				if (fVar10 < fVar1)
				{
					iVar0 = iVar5;
					fVar1 = fVar10;
					bVar2 = true;
				}
			}
		}
		iVar3++;
	}
	if (bVar2)
	{
		*iParam3 = iVar0;
		*fParam4 = fVar1;
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_147(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

bool func_111(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "relGroupCampDog", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	uVar8 = add_relationship_group(&cVar0, &(Global_1137451->f_5));
	return uVar8;
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	set_relationship_between_groups(iParam0, iParam1, iParam2);
	set_relationship_between_groups(iParam0, iParam2, iParam1);
}

bool func_113(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_1, iParam1))
	{
		return true;
	}
	return false;
}

void func_114(int iParam0, var uParam1, int* iParam2)
{
	if (!get_event_data(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_148(iParam0, uParam1, iParam2);
			break;
	}
}

bool func_115(var uParam0)
{
	vVar0 = { func_103(network_player_id_to_int()) };
	iVar6 = 1;
	vVar7 = { Global_1296859->f_17 };
	if (func_104(vVar0))
	{
		vVar11 = { get_gameplay_cam_rot(2) };
		fVar10 = vVar11.z;
	}
	else
	{
		fVar10 = func_149(vVar0, vVar7, 1);
	}
	fVar14 = 40f;
	fVar15 = 80f;
	iVar16 = (uParam0->f_2 % 20);
	fVar10 = (fVar10 + ((to_float(iVar16) * 30f) * func_150((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar17 = { vVar7 + Vector(0f, -cos(fVar10), sin(fVar10)) * FtoV(((fVar15 + fVar14) * 0.5f)) };
	iVar20 = func_151(uParam0);
	switch (iVar20)
	{
		case 0:
			func_153(uParam0, func_152());
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_154(uParam0, 1);
			break;
		case 1:
			iVar21 = 0;
			while (iVar21 < 10)
			{
				if (!get_nth_closest_vehicle_node(vVar17, iVar21, &vVar3, 1, 1077936128, 0))
				{
					func_154(uParam0, 2);
					return false;
				}
				if (!func_155(vVar3))
				{
				}
				else
				{
					func_153(uParam0, vVar3);
					func_154(uParam0, 3);
					return false;
				}
				iVar21++;
			}
			func_154(uParam0, 2);
			break;
		case 2:
			if (func_156(vVar17, &(uParam0->f_3), &bVar22, iVar6, 0, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				vVar23 = { func_71(uParam0) };
				if (get_ground_z_for_3d_coord(vVar23, &uVar26, true))
				{
					vVar23 = { vVar23.x, vVar23.y, uVar26 };
				}
				if (!func_155(vVar23))
				{
					func_154(uParam0, 5);
				}
				func_154(uParam0, 3);
				return false;
			}
			if (bVar22)
			{
				func_154(uParam0, 5);
				return false;
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				vVar27 = { func_71(uParam0) };
				iVar30 = 23;
				uParam0->f_13 = _0x348f211ca2404039(0, vVar27, vVar7, iVar30);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_154(uParam0, 5);
					}
				}
			}
			else
			{
				iVar31 = _0x3a0f82f6ee2291c8(uParam0->f_13);
				switch (iVar31)
				{
					case 2:
						break;
					case 0:
						_0x661bb1e1ff77742d(uParam0->f_13);
						func_154(uParam0, 5);
						return false;
					case 1:
						if (!_0x8800776e410eb669(uParam0->f_13))
						{
							_0x661bb1e1ff77742d(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
						uVar32 = _0xf61cfedeab627bfa(uParam0->f_13);
						if (func_157(uVar32, 2))
						{
							_0x661bb1e1ff77742d(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
						func_154(uParam0, 4);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_154(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 20)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_154(uParam0, 0);
			break;
	}
	return false;
}

void func_116(var uParam0, vector3 vParam1)
{
	Var0.f_4 = 4;
	Var0.f_7 = uParam0;
	Var0.f_16 = { vParam1 };
	func_94(Var0, func_93(0, 8));
}

void func_117(int* iParam0, int iParam1)
{
	if (!func_92(*iParam0, iParam1))
	{
		return;
	}
	func_132(iParam0, iParam1);
}

bool func_118(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

float func_119(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_158(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_120(var uParam0, int* iParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	iVar0 = player_id();
	iVar1 = iVar0;
	if (!func_113((*uParam0)[iVar1], 4))
	{
		return false;
	}
	iVar2 = iParam2;
	if (!func_113((*uParam0)[iVar2], 4))
	{
		return false;
	}
	bVar3 = true;
	if (iParam2 == iVar0)
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if (func_113((*uParam0)[iVar1], 5) || func_113((*uParam0)[iVar2], 5))
		{
			*bParam4 = 1;
			return false;
		}
	}
	if (func_30(iParam1, 2))
	{
		*cParam3 = { func_121(iParam1) };
		return true;
	}
	else
	{
		return func_122(iVar2, cParam3);
	}
	return false;
}

struct<8> func_121(int* iParam0)
{
	return iParam0->f_1;
}

bool func_122(int iParam0, char[4] cParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	*cParam1 = { (*Global_1137457)[iParam0]->f_2 };
	return true;
}

int func_123(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam3))
	{
		return 0;
	}
	if (is_entity_dead(iParam3))
	{
		return 0;
	}
	if (!network_is_player_active(iParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, "", 64);
	bVar8 = false;
	bVar9 = func_120(uParam0, iParam1, iParam2, &cVar0, &bVar8);
	if (bVar8)
	{
		func_32(iParam1, 3);
		return 1;
	}
	if (bVar9)
	{
		if (get_length_of_literal_string(func_159(&cVar0)) <= 0)
		{
			return 0;
		}
		_set_ped_prompt_name(iParam3, &cVar0);
		func_32(iParam1, 3);
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!network_has_control_of_entity(iParam0))
	{
		return 0;
	}
	if (_0x7fc84e85d98f063d(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!network_has_control_of_entity(iParam0))
	{
		return;
	}
	if (_0x7fc84e85d98f063d(iParam0))
	{
		clear_ped_tasks(iParam0, 1, 0);
	}
}

void func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_160((*Global_1137457)[iParam0], 3);
}

bool func_127()
{
	if (!func_161() && func_162(1))
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, var uParam1, bool bParam2)
{
	func_163(iParam0, &iVar0, &iVar1);
	if (!func_164(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_165(iParam0, 1024))
	{
		return;
	}
	func_166(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = uParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 3;
}

int func_129(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_130(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

var func_131(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

void func_132(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_133(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_167(iParam1))
	{
		return false;
	}
	iVar0 = func_168(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

int func_134(int iParam0)
{
	if (func_169(iParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (func_169(iParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (func_169(iParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_135(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_10), iParam1);
}

void func_136(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	set_ped_keep_task(iParam0, true);
	set_ped_can_ragdoll(iParam0, false);
	_0x6569f31a01b4c097(iParam0, 1, 0);
	_0x6569f31a01b4c097(iParam0, 0, 0);
	set_entity_proofs(iParam0, 2, false);
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam1, true, false) };
	bVar8 = func_90(iParam0, &uVar3, &vVar4, &uVar7);
	if (!bVar8)
	{
		return false;
	}
	fVar9 = get_distance_between_coords(vVar0, vVar4, true);
	if (fVar9 > 10f)
	{
		return false;
	}
	if (!func_109(vVar0, &iVar10, &fVar9))
	{
		return false;
	}
	iVar11 = get_player_ped(iVar10);
	if (!does_entity_exist(iVar11))
	{
		return false;
	}
	if (is_entity_dead(iVar11))
	{
		return false;
	}
	if (fVar9 <= 10f)
	{
		*iParam2 = iVar10;
		return true;
	}
	return false;
}

int func_138()
{
	return &Global_1902818;
}

bool func_139(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_171(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_172(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_173(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_174(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_175(iParam0);
	if (iVar5 < 1 || iVar5 > func_176(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_140(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_177(iParam0, iParam1, 1))
	{
		iVar0 = func_174(iParam1);
		iVar1 = func_173(iParam0);
		iVar2 = (func_173(iParam0) - func_173(iParam1));
		iVar3 = (func_174(iParam0) - func_174(iParam1));
		iVar4 = (func_175(iParam0) - func_175(iParam1));
		iVar5 = (func_172(iParam0) - func_172(iParam1));
		iVar6 = (func_171(iParam0) - func_171(iParam1));
		iVar7 = (func_170(iParam0) - func_170(iParam1));
	}
	else
	{
		iVar0 = func_174(iParam0);
		iVar1 = func_173(iParam1);
		iVar2 = (func_173(iParam1) - func_173(iParam0));
		iVar3 = (func_174(iParam1) - func_174(iParam0));
		iVar4 = (func_175(iParam1) - func_175(iParam0));
		iVar5 = (func_172(iParam1) - func_172(iParam0));
		iVar6 = (func_171(iParam1) - func_171(iParam0));
		iVar7 = (func_170(iParam1) - func_170(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_176(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_178(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_141(int iParam0)
{
	iVar0 = get_player_ped(iParam0);
	iVar1 = _get_scenario_point_type_ped_is_using(iVar0);
	iVar2 = iVar1;
	switch (iVar2)
	{
		case -1767895052:
		case -1075420544:
		case 1020517461:
		case 1259174088:
			return true;
	}
	return false;
}

bool func_142(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return false;
	}
	iVar1 = network_get_player_index(iVar0);
	if (bParam2 && !network_is_player_active(iVar1))
	{
		return false;
	}
	if (bParam1 && is_player_dead(iVar1))
	{
		return false;
	}
	return true;
}

bool func_143(int iParam0, int iParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_179(iParam0, &vVar0))
	{
		return false;
	}
	if (func_104(vVar0))
	{
		return false;
	}
	iVar3 = _find_closest_active_scenario_point_of_type(vVar0, 1579036847, 5.5f, 0, false);
	if (_does_scenario_point_exist(iVar3))
	{
		*iParam1 = iVar3;
		return true;
	}
	return false;
}

Vector3 func_144(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

var func_145(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_180() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_181());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_181());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_181());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_182(get_player_team(iVar5)));
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
			if (func_183(iVar2))
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
				if (iVar9 & 8192 != 0 && func_184(iVar2) != 1)
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
					if (!func_185(iVar10))
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

int func_146()
{
	return Global_1102219->f_3672;
}

void func_147(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_148(int iParam0, var uParam1, int* iParam2)
{
	if (!get_event_data(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			func_186(&Var0, uParam1, iParam2);
			break;
		case 3:
			func_187(&Var0, iParam2);
			break;
		case 4:
			func_188(&Var0, uParam1, iParam2);
			break;
		case 5:
			func_189(&Var0, uParam1);
			break;
		case 6:
			func_190(&Var0, uParam1);
			break;
	}
}

float func_149(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

float func_150(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_151(var uParam0)
{
	return *uParam0;
}

Vector3 func_152()
{
	return 0f, 0f, 0f;
}

void func_153(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_155(vector3 vParam0)
{
	if (is_valid_interior(get_interior_at_coords(vParam0)))
	{
		return false;
	}
	if (!is_collision_marked_outside(vParam0))
	{
		return false;
	}
	if (!get_ground_z_for_3d_coord(vParam0 + Vector(1f, 0f, 0f), &uVar0, false))
	{
		return false;
	}
	bVar1 = is_sphere_visible(vParam0, 5f);
	if (bVar1)
	{
		return false;
	}
	if (is_any_vehicle_near_point(vParam0, 7f))
	{
		return false;
	}
	if (_0x769bb7626b8cdb06(vParam0, 15f, 0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_156(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
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
			func_191(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_192(&(iParam3->f_1), iParam5, vParam0);
				if (!func_104(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_193(iParam3->f_6));
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

bool func_157(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_158(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

char[] func_159(char[4] cParam0)
{
	return cParam0;
}

void func_160(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_10), iParam1);
}

bool func_161()
{
	if (func_194())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_162(bool bParam0)
{
	if (func_195())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_196(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_161())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_197())
	{
		return false;
	}
	if (!func_198())
	{
		return false;
	}
	if (func_199())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if ((Global_1915715->f_20638 && Global_1915715->f_20241.f_43 == 2) && Global_1940311->f_1)
	{
		return false;
	}
	if (func_200())
	{
		return false;
	}
	return true;
}

void func_163(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_164(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_201(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_202(iParam0))
	{
		return false;
	}
	if (func_203(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_165(iParam0, 1)) || func_204(32768))
	{
		if (!func_165(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_198())
	{
		return false;
	}
	return true;
}

bool func_165(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_166(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_168(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_169(int iParam0, int iParam1)
{
	if (!func_86(iParam0, 0))
	{
		return func_206(func_205(iParam0), iParam1);
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

int func_170(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_171(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_172(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_173(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_207(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_174(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_175(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_176(int iParam0, int iParam1)
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

bool func_177(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_139(iParam1) || !func_139(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_178(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_179(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	*uParam1 = { (*Global_1134390)[iVar0]->f_38.f_8 };
	return true;
}

int func_180()
{
	return Global_1051252->f_12;
}

char* func_181()
{
	return "unnamed";
}

int func_182(int iParam0)
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
			return iVar0;
		}

bool func_183(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_208(36, iParam0);
}

int func_184(int iParam0)
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

bool func_185(int iParam0)
{
	if (func_209(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_210(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_186(var uParam0, var uParam1, int* iParam2)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	iVar0 = net_to_ped(uParam1->f_1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	func_211(iParam2, uParam0->f_8);
	bVar1 = _0xe98d55c5983f2509(iVar0);
	func_117(iParam2, 1);
	func_117(iParam2, 3);
	func_32(iParam2, 2);
	func_32(iParam2, 4);
}

void func_187(var uParam0, int* iParam1)
{
	iVar0 = player_id();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	func_110(&(iParam1->f_10));
	func_32(iParam1, 5);
}

void func_188(var uParam0, var uParam1, int* iParam2)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_110(&(iParam2->f_10));
	func_153(&(iParam2->f_10), uParam0->f_16);
	func_135(uParam1, 1);
}

void func_189(var uParam0, var uParam1)
{
	iVar0 = player_id();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	bVar1 = _unlock_is_unlocked(uParam0->f_6);
	func_212(uParam1->f_2, 451736625, bVar1);
}

void func_190(var uParam0, var uParam1)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!network_is_host_of_this_script())
	{
		return;
	}
	if (uParam0->f_19)
	{
		func_135(uParam1, 2);
	}
	else
	{
		func_135(uParam1, 3);
	}
}

void func_191(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_104(vParam2))
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
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			break;
		case 42:
			_0xb8e3486d107f4194(*uParam0, fParam10);
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
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 8192);
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
				_0x954451ea2d2120fb(*uParam0, func_213(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_213(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_213(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_213(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_213(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_213(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 60f);
				_0x954451ea2d2120fb(*uParam0, func_213(60f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(75f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 50:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_213(30f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(65f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 25f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 51:
				_0x2eb977293923c723(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, func_213(25f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(40f, 50f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 8f);
				_0x450080ddedb91258(*uParam0, 2f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 52:
				_0x2eb977293923c723(*uParam0, 0f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_213(40f, 100f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, func_213(50f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(65f, 85f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 49:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_213(10f, 50f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_213(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_213(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_213(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_214(vParam2, 1);
				iVar1 = func_215(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					_0x2eb977293923c723(*uParam0, func_213(100f, 80f, -5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, func_213(100f, 80f, -5f, iParam1));
					_0x0f4f6c4ce471259d(*uParam0, func_213(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					_0x2eb977293923c723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, 70f);
					_0x0f4f6c4ce471259d(*uParam0, func_213(80f, 150f, 17.5f, iParam1));
				}
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x19bc99c678fba139(*uParam0, 2, 0);
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 47:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_213(50f, 90f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 48:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, func_213(150f, 190f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
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

void func_192(var uParam0, int iParam1, vector3 vParam2)
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
		case 53:
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
		case 44:
		case 49:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 50:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 51:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_214(vParam2, 1) == 5)
			{
				_0x5d9b0baaf04cf65b(*uParam0, 53, 1, 0);
				_0x5d9b0baaf04cf65b(*uParam0, 74, 1, 0);
			}
			else
			{
				_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			}
			_0x5d9b0baaf04cf65b(*uParam0, 50, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_193(vector3 vParam0)
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

bool func_194()
{
	return Global_1904651->f_8683 != -1;
}

bool func_195()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_196(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_197()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_198()
{
	if (!func_216())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_199()
{
	return Global_1896738->f_382;
}

bool func_200()
{
	if (!func_216())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_201(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_202(int iParam0)
{
	if (func_165(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0)
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

bool func_204(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_205(int iParam0)
{
	return iParam0;
}

int func_206(int iParam0, int iParam1)
{
	if (!func_217(iParam0, 2))
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

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_208(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_196(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_146())
	{
		return func_196(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_196(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_209(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_210(int iParam0)
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
		func_218(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_219(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_211(int* iParam0, struct<8> Param1)
{
	iParam0->f_1 = { Param1 };
}

void func_212(var uParam0, int iParam1, bool bParam2)
{
	Var0.f_4 = 6;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	Var0.f_19 = bParam2;
	func_94(Var0, func_93(0, 8));
}

float func_213(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_214(vector3 vParam0, int iParam3)
{
	iVar0 = func_220();
	if (func_221(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_222(vParam0, iParam3);
}

int func_215(vector3 vParam0)
{
	return func_223(_get_map_zone_at_coords(vParam0, 10));
}

bool func_216()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_217(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_218(int iParam0)
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
	func_219(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_219(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_220()
{
	return Global_1893587->f_2;
}

bool func_221(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_222(vector3 vParam0, bool bParam3)
{
	iVar0 = func_224(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_224(vector3 vParam0)
{
	iVar0 = func_225(vParam0, 0f, 0f, 0, 2);
	return func_225(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_225(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

