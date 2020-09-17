void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3();
		wait(0);
	}
	func_4();
	while (!_0x380ffa15b72408fb(1440))
	{
		func_5();
		wait(0);
	}
	func_6();
}

void func_1()
{
	iVar0 = get_game_timer();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
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

void func_3()
{
	bVar0 = func_12();
	if (func_13())
	{
		func_14();
	}
	func_15(bVar0);
}

void func_4()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (does_blip_exist(func_16(Global_1132288->f_1[iVar0]->f_5)))
		{
			func_17(&(Global_1132288->f_1[iVar0]->f_5), 0);
		}
		iVar0++;
	}
	func_18();
	Global_1132288->f_2018 = 0;
	Global_1132288->f_2041 = 0;
	Global_1132288 = 0;
}

void func_5()
{
	if (!_does_thread_exist(Global_1132288->f_2055) && !_does_thread_exist(Global_1132288->f_2057))
	{
		return;
	}
	if (!Global_1132288->f_2059)
	{
		if (_does_thread_exist(Global_1132288->f_2055))
		{
			_0x7de4643157ad646c(Global_1132288->f_2055);
		}
		if (_does_thread_exist(Global_1132288->f_2057))
		{
			_0x7de4643157ad646c(Global_1132288->f_2057);
		}
		Global_1132288->f_2059 = 1;
	}
}

void func_6()
{
	terminate_this_thread();
}

void func_7(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_8()
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
		if (func_19() == 0)
		{
			if (func_20())
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

bool func_9()
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

void func_10()
{
	func_21(Global_1131196);
	network_register_host_broadcast_variables(Global_1131196, 1092, 44);
	func_22(_0xba24095ea96dfe17(Global_1131196), 1092, "g_mpHostNetCamp");
	func_23(Global_1134390);
	network_register_player_broadcast_variables(Global_1134390, 2657, 45);
	func_24(_0x690806bc83bc8ca2((*Global_1134390)[0]), 2657, "g_mpPlayerNetCamp");
	func_25(Global_1132288);
	func_26(Global_1134349);
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

bool func_12()
{
	if (func_27())
	{
		func_28(16);
		return false;
	}
	if (func_29())
	{
		func_28(16);
		return false;
	}
	if (func_30(16))
	{
		func_28(16);
		return false;
	}
	func_31(16);
	return true;
}

bool func_13()
{
	if (!is_thread_active(&(Global_1051252->f_16[9]), false))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&(Global_1051252->f_16[9]));
}

void func_14()
{
	switch (Global_1131196->f_1090)
	{
		case 0:
			func_32();
			break;
		case 1:
			func_33();
			break;
		case 2:
			func_34();
			break;
	}
}

void func_15(bool bParam0)
{
	switch (&Global_1132288)
	{
		case 0:
			func_35();
			break;
		case 1:
			func_36();
			break;
		case 2:
			func_37(bParam0);
			break;
	}
	Global_1132288->f_2040 = 0;
}

int func_16(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return &(Global_17081[iParam0]);
	}
	return 0;
}

void func_17(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_38(*uParam0, -1);
		func_39(*uParam0, 0);
		func_40(*uParam0, 0);
		if (does_blip_exist(&(Global_17081[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_17081[*uParam0]));
			}
			remove_blip(Global_17081[*uParam0]);
		}
	}
	*uParam0 = -1;
}

void func_18()
{
	iVar0 = player_id();
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23.f_1))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23.f_1);
	}
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23);
	}
	(*Global_1134390)[iVar0]->f_38.f_23.f_1 = uVar1;
	(*Global_1134390)[iVar0]->f_38.f_23 = uVar1;
}

int func_19()
{
	return Global_1572887->f_13;
}

bool func_20()
{
	return Global_1051252->f_8;
}

void func_21(var uParam0)
{
	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*(*uParam0)[iVar27] = { Var0 };
		iVar27++;
	}
	Var28.f_4 = -1;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*uParam0->f_865[iVar27] = { Var28 };
		iVar27++;
	}
	uParam0->f_1090 = uVar35;
	uParam0->f_1091 = uVar36;
}

int func_22(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_23(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_41((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = uVar0;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_13 = 7;
	Var2.f_49 = 7;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		*uParam0->f_1[iVar1] = { Var2 };
		iVar1++;
	}
	uParam0->f_2018 = uVar65;
	Var66.f_4 = -15;
	uParam0->f_2027 = { Var66 };
	uParam0->f_2019 = 0;
	uParam0->f_2054 = -428030045;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_2020[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_2041 = 0;
	uParam0->f_2042 = 0;
	uParam0->f_2043 = 0;
	uParam0->f_2044 = 0;
	uParam0->f_2049 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2050 = 0;
}

void func_26(var uParam0)
{
}

bool func_27()
{
	return Global_263042[&Global_1296859] > 2;
}

void func_28(int iParam0)
{
	if (func_42(iParam0))
	{
		func_43(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

bool func_29()
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
	if (!func_44(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

void func_31(int iParam0)
{
	if (!func_42(iParam0))
	{
		func_45(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_32()
{
	func_46(1);
}

void func_33()
{
	if (func_42(1))
	{
		func_46(2);
	}
}

void func_34()
{
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1132288->f_2044++;
		if (Global_1132288->f_2044 >= 32)
		{
			Global_1132288->f_2044 = 0;
		}
		func_47(Global_1132288->f_2044, &uVar1);
		func_48(Global_1132288->f_2044);
	}
}

void func_35()
{
	if (Global_1131196->f_1090 > 0)
	{
		if (func_49())
		{
			func_50();
			func_51(1);
		}
	}
}

void func_36()
{
	if (!func_42(1))
	{
		if (func_52())
		{
			func_53();
			func_31(1);
		}
	}
	else if (Global_1131196->f_1090 > 1)
	{
		if (func_54() == 0)
		{
			func_55(1);
		}
		func_51(2);
	}
}

void func_37(bool bParam0)
{
	if (!func_42(64) && func_56())
	{
		func_31(64);
	}
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1132288->f_2043++;
		if (Global_1132288->f_2043 >= 32)
		{
			Global_1132288->f_2043 = 0;
		}
		func_57(Global_1132288->f_2043);
	}
	func_58();
	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1132288->f_2019 != 1)
	{
		func_63(1);
	}
}

void func_38(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0] = iParam1;
		return;
	}
	Global_25003[iParam0] = iParam1;
	return;
}

void func_39(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_1 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_1 = iParam1;
	return;
}

void func_40(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_2 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_2 = iParam1;
	return;
}

void func_41(var uParam0)
{
	Var0 = 32;
	Var0.f_33.f_3 = -1;
	Var0.f_38.f_3 = -1;
	Var0.f_38.f_7 = -1;
	Var0.f_38.f_25 = -1;
	Var0.f_38.f_28.f_1 = 1046181202;
	Var0.f_38.f_28.f_2 = 255;
	Var0.f_38.f_28.f_3 = -1;
	Var0.f_74.f_7 = -1;
	*uParam0 = { Var0 };
	func_64(&(uParam0->f_38));
}

bool func_42(int iParam0)
{
	return func_65((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_43(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

bool func_44(struct<2> Param0)
{
	if (!func_67(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_68(Param0))
	{
		return false;
	}
	return true;
}

void func_45(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_46(int iParam0)
{
	if (Global_1131196->f_1090 != iParam0)
	{
		Global_1131196->f_1090 = iParam0;
	}
}

void func_47(bool bParam0, var uParam1)
{
	if (bParam0 < 0 || bParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(bParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!network_is_player_a_participant(iVar0))
	{
		return;
	}
	iVar1 = get_unique_int_for_player(iVar0);
	if (Global_1131196->f_865[iVar1]->f_4 != (*Global_1134390)[bParam0]->f_33.f_3 && (*Global_1134390)[bParam0]->f_33.f_3 != -1)
	{
		func_70(iVar1, (*Global_1134390)[bParam0]->f_33.f_3);
		func_71(iVar1, (*Global_1134390)[bParam0]->f_33);
		func_72(iVar1, 0);
	}
	iVar2 = _0x901e0dc25080c8b9(iVar0);
	bVar3 = _0x149a2751ab66ac02(iVar2);
	vVar9 = { Global_1131196->f_865[iVar1]->f_1 };
	bVar12 = func_65(Global_1131196->f_865[iVar1]->f_5, 2);
	switch (&Global_1131196->f_865[iVar1])
	{
		case 0:
			Global_1131196->f_865[iVar1]->f_5 = (*Global_1134390)[bParam0]->f_33.f_4;
			bVar12 = func_65(Global_1131196->f_865[iVar1]->f_5, 2);
			if (vVar9.z == 0)
			{
				iVar7 = func_73(iVar0);
				if (func_74(iVar7))
				{
					if (_0x424b17a7dc5c90bc(iVar0))
					{
						func_75(iVar7, 3);
					}
				}
				if (_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iVar0))
				{
					_0xd426e2e3288469d6(&(Global_1131196->f_1091), iVar0);
				}
				func_72(iVar1, 6);
			}
			else if (vVar9.z < 0)
			{
				if (func_76(bParam0))
				{
					func_72(iVar1, 3);
				}
				else
				{
					func_72(iVar1, 4);
				}
			}
			else
			{
				if (*uParam1)
				{
					return;
				}
				*uParam1 = 1;
				func_77(vVar9, &vVar4);
				if (!func_78(vVar9, bParam0, vVar4, bVar3, 1, 0, bVar12))
				{
					func_72(iVar1, 4);
					return;
				}
				func_72(iVar1, 1);
			}
			break;
		case 1:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			if (func_65((*Global_1134390)[bParam0]->f_33.f_4, 8))
			{
				func_72(iVar1, 2);
			}
			break;
		case 2:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			func_77(vVar9, &vVar4);
			iVar7 = func_73(iVar0);
			if (func_74(iVar7))
			{
				func_75(iVar7, 3);
			}
			Var13.f_9 = 255;
			Var13.f_10 = 7;
			Var13.f_10.f_1 = 255;
			Var13.f_10.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_9 = iVar0;
			Var13.f_1 = vVar9.x;
			Var13.f_1.f_1 = vVar9.y;
			Var13.f_1.f_2 = vVar9.z;
			Var13.f_20 = { vVar4 };
			Var13.f_23.f_1 = (*Global_1134390)[bParam0]->f_38.f_23.f_1;
			Var13.f_23 = (*Global_1134390)[bParam0]->f_38.f_23;
			Var13 = 1;
			iVar7 = func_79(&Var13);
			if (!func_74(iVar7))
			{
				return;
			}
			if (!func_65(Global_1131196->f_865[iVar1]->f_5, 4))
			{
				func_80(iVar7, 16);
			}
			if (func_65(Global_1131196->f_865[iVar1]->f_5, 1))
			{
				func_80(iVar7, 512);
			}
			func_72(iVar1, 6);
			break;
		case 3:
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < 32)
			{
				if ((*Global_1131196)[iVar7]->f_9 == iVar0)
				{
					(*Global_1131196)[iVar7]->f_1 = (*Global_1134390)[bParam0]->f_33;
				}
				else
				{
					iVar7++;
				}
			}
			func_72(iVar1, 6);
			break;
		case 4:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -2;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1131196->f_865[iVar1]->f_6)))
			{
				Global_1131196->f_865[iVar1]->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1131196->f_865[iVar1]->f_6 >= 10 || iVar8 == 1)
			{
				func_45(&(Global_1131196->f_865[iVar1]->f_5), 16);
				func_72(iVar1, 5);
			}
			break;
		case 5:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -1;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1131196->f_865[iVar1]->f_6)))
			{
				Global_1131196->f_865[iVar1]->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1131196->f_865[iVar1]->f_6 >= 15 || iVar8 == 1)
			{
				func_72(iVar1, 6);
				func_45(&(Global_1131196->f_865[iVar1]->f_5), 32);
			}
			break;
		case 6:
			break;
	}
}

void func_48(int iParam0)
{
	func_82(iParam0);
	if (Global_1131196[iParam0] == 0)
	{
		return;
	}
	if (Global_1131196[iParam0] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}
	switch (Global_1131196[iParam0])
	{
		case 1:
			func_86(iParam0);
			break;
		case 2:
			func_87(iParam0);
			break;
		case 3:
			func_88(iParam0);
			break;
	}
}

bool func_49()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

void func_50()
{
	func_64(&((*Global_1134390)[network_player_id_to_int()]->f_38));
	func_89();
	func_90();
}

void func_51(int iParam0)
{
	if (&Global_1132288 != iParam0)
	{
		Global_1132288 = iParam0;
	}
}

bool func_52()
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!_0x7907969497ea92f5(&(Global_1137047->f_361[iVar0])) || !_0x603ac35fd4602c76(&(Global_1137047->f_361[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_53()
{
	iVar0 = network_player_id_to_int();
	Var1 = { func_92(-1838434463, func_91(0), 1084182731, 1) };
	func_93(Var1);
	func_94();
	iVar5 = func_95(Var1, -421952220, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -1867469444;
	}
	func_96(iVar5, iVar0);
	iVar5 = func_95(Var1, 1231618917, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -144166169;
	}
	func_97(iVar5, iVar0);
	iVar5 = func_95(Var1, 1043717005, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -811830793;
	}
	func_98(iVar5, iVar0);
	iVar5 = func_95(Var1, 142663787, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -698168422;
	}
	func_99(iVar5, iVar0);
	func_100(0, iVar0);
}

int func_54()
{
	return Global_1132288->f_2018;
}

void func_55(int iParam0)
{
	if (Global_1132288->f_2018 != iParam0)
	{
		Global_1132288->f_2018 = iParam0;
	}
}

bool func_56()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_57(int iParam0)
{
	bVar0 = func_101(iParam0);
	bVar1 = (bVar0 && (*Global_1131196)[iParam0]->f_1.f_2 != Global_1132288->f_1[iParam0]->f_2);
	iVar2 = Global_1132288->f_1[iParam0]->f_3;
	if (!bVar0)
	{
		if (iVar2 == 0)
		{
			return;
		}
		else if (iVar2 == 2 || iVar2 == 1)
		{
			func_102(iParam0, Global_1137047->f_9[iParam0]->f_2);
			func_103(iParam0, 3);
		}
	}
	if ((iVar2 == 0 && Global_1131196[iParam0] != 0) || bVar1)
	{
		func_104(iParam0, (*Global_1131196)[iParam0]->f_1, (*Global_1131196)[iParam0]->f_9);
		if (func_105(Global_1132288->f_1[iParam0]->f_5))
		{
			func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
		}
		if (func_105(Global_1132288->f_1[iParam0]->f_6))
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_6), 7148155);
			func_17(&(Global_1132288->f_1[iParam0]->f_6), 0);
		}
		func_106(Global_1132288->f_1[iParam0]);
		*Global_1132288->f_1[iParam0] = { (*Global_1131196)[iParam0]->f_1 };
		func_103(iParam0, 1);
	}
	func_107(iParam0, bVar0);
	func_108(iParam0, bVar0);
	func_109(iParam0);
	switch (Global_1132288->f_1[iParam0]->f_3)
	{
		case 1:
			func_110(iParam0);
			break;
		case 2:
			func_111(iParam0);
			break;
		case 3:
			func_112(iParam0);
			break;
	}
}

void func_58()
{
	if (func_42(256))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_113(iVar0, 1))
			{
				iVar1 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar1 == 0)
		{
			func_28(256);
		}
	}
}

void func_59()
{
	iVar0 = player_id();
	func_114(iVar0);
	iVar1 = (*Global_1134390)[iVar0]->f_38.f_3;
	bVar3 = func_74(iVar1);
	bVar4 = _0x424b17a7dc5c90bc(iVar0);
	switch (Global_1132288->f_2019)
	{
		case 0:
			if (bVar4)
			{
				if (bVar3)
				{
					func_63(20);
				}
				else
				{
					vVar8 = { func_115() };
					func_116(vVar8);
					if (vVar8.z != 0)
					{
						Global_1132288->f_2036 = { vVar8 };
						Global_1132288->f_2036.f_3 = 0;
						func_63(5);
					}
					else
					{
						func_63(4);
					}
				}
			}
			else
			{
				func_63(22);
			}
			break;
		case 1:
			func_63(0);
			break;
		case 2:
			if (!bVar3)
			{
				if (func_117())
				{
					func_118(0);
				}
				func_18();
				Global_1132288->f_2046 = 0;
				func_116(vVar8);
				func_119();
				func_120();
				func_121();
				func_63(3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					func_119();
					func_63(20);
				}
				else
				{
					func_63(21);
				}
			}
			else
			{
				func_63(4);
			}
			break;
		case 4:
			if (bVar4)
			{
				if (bVar3)
				{
					func_119();
					func_63(20);
				}
				else if (((func_122(32) && !func_123()) && !func_124(255)) && !is_entity_dead(Global_34))
				{
					func_121();
					func_125(32);
				}
			}
			else if (bVar3)
			{
				func_63(21);
			}
			break;
		case 5:
			if (func_126(Global_1132288->f_2036, Global_1132288->f_2036.f_3))
			{
				if (func_76(iVar0))
				{
					func_63(12);
				}
				else
				{
					func_63(6);
				}
			}
			else
			{
				func_116(vVar8);
				func_63(4);
			}
			break;
		case 6:
			if (func_76(iVar0))
			{
				func_63(12);
				return;
			}
			iVar2 = get_unique_int_for_player(iVar0);
			if (Global_1131196->f_865[iVar2]->f_4 == (*Global_1134390)[player_id()]->f_33.f_3)
			{
				if (Global_1132288->f_2049 == 0)
				{
					Global_1132288->f_2049 = _get_system_time();
				}
				else if ((_get_system_time() - Global_1132288->f_2049) > Global_1901947->f_584.f_14)
				{
					Global_1132288->f_2049 = 0;
					func_18();
					func_127();
				}
			}
			if (func_65(Global_1131196->f_865[iVar2]->f_5, 32) && Global_1131196->f_865[iVar2]->f_4 == (*Global_1134390)[player_id()]->f_33.f_3)
			{
				Global_1132288->f_2049 = 0;
				func_63(13);
				return;
			}
			if (func_65(Global_1131196->f_865[iVar2]->f_5, 16) && Global_1132288->f_2027.f_5 != 0)
			{
				func_128(0);
			}
			if (&Global_1131196->f_865[iVar2] != 1)
			{
				return;
			}
			if (Global_1131196->f_865[iVar2]->f_1.f_2 == 0)
			{
				return;
			}
			if (_0xf6a8a652a6b186cd((*Global_1134390)[player_id()]->f_38.f_23.f_1))
			{
				return;
			}
			if (!func_129())
			{
				Global_1132288->f_2049 = 0;
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1131196->f_865[iVar2]->f_1 };
			func_77(vVar8, &vVar5);
			func_130(vVar8, vVar5);
			Global_1132288->f_2049 = 0;
			func_63(7);
			break;
		case 7:
			if (!_0xa4a4359320345b34(Global_1132288->f_2052.f_1))
			{
				Global_1132288->f_2046++;
				func_63(6);
				return;
			}
			iVar11 = _0xb33a604345f58202(Global_1132288->f_2052.f_1);
			switch (iVar11)
			{
				case 4:
					func_63(8);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(_0x351d71b8b72b858b(Global_1132288->f_2052.f_1));
					func_63(9);
					break;
			}
			break;
		case 8:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1132288->f_2047 == 0)
			{
				Global_1132288->f_2047 = get_game_timer();
				Global_1132288->f_2046++;
			}
			else if ((get_game_timer() - Global_1132288->f_2047) > 2000)
			{
				Global_1132288->f_2047 = 0;
				func_120();
				func_18();
				(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = -2;
				Global_1132288->f_2036 = { (*Global_1134390)[network_player_id_to_int()]->f_33 };
				func_63(5);
			}
			break;
		case 9:
			iVar2 = get_unique_int_for_player(iVar0);
			if (Global_1131196->f_865[iVar2]->f_1.f_2 == 0)
			{
				return;
			}
			if (_0xf6a8a652a6b186cd((*Global_1134390)[player_id()]->f_38.f_23))
			{
				return;
			}
			if (!func_129())
			{
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1131196->f_865[iVar2]->f_1 };
			func_77(vVar8, &vVar5);
			func_132(vVar8, vVar5);
			func_63(10);
			break;
		case 10:
			if (!_0xa4a4359320345b34(Global_1132288->f_2052))
			{
				Global_1132288->f_2046++;
				func_63(9);
				return;
			}
			iVar12 = _0xb33a604345f58202(Global_1132288->f_2052);
			switch (iVar12)
			{
				case 4:
					func_63(11);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(_0x351d71b8b72b858b(Global_1132288->f_2052));
					func_134(8);
					func_63(12);
					break;
			}
			break;
		case 11:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1132288->f_2047 == 0)
			{
				Global_1132288->f_2047 = get_game_timer();
				Global_1132288->f_2046++;
			}
			else if ((get_game_timer() - Global_1132288->f_2047) > 2000)
			{
				Global_1132288->f_2047 = 0;
				func_120();
				func_18();
				(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = -2;
				Global_1132288->f_2036 = { (*Global_1134390)[network_player_id_to_int()]->f_33 };
				func_63(5);
			}
			break;
		case 12:
			if (!bVar4)
			{
				func_63(21);
				Global_1132288->f_2049 = 0;
				Global_1132288->f_2046 = 0;
			}
			else if (func_135(&bVar13))
			{
				Global_1132288->f_2046 = 0;
				Global_1132288->f_2049 = 0;
				func_136();
				func_119();
				func_63(20);
			}
			else if (bVar13)
			{
				Global_1132288->f_2046 = 0;
				Global_1132288->f_2049 = 0;
				func_18();
				func_121();
				func_120();
				func_63(4);
			}
			break;
		case 13:
			if ((!func_123() && is_screen_faded_in()) && !func_124(255))
			{
				func_137("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, 1);
				func_128(0);
				if (bVar3)
				{
					func_63(14);
				}
				else
				{
					func_63(4);
				}
			}
			break;
		case 14:
			if (bVar3)
			{
				vVar8 = { (*Global_1131196)[(*Global_1134390)[iVar0]->f_38.f_3]->f_1 };
				func_77(vVar8, &vVar5);
				func_130(vVar8, vVar5);
				func_63(15);
			}
			else
			{
				func_127();
			}
			break;
		case 15:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!_0xa4a4359320345b34(Global_1132288->f_2052.f_1))
			{
				Global_1132288->f_2046++;
				func_63(14);
				return;
			}
			iVar14 = _0xb33a604345f58202(Global_1132288->f_2052.f_1);
			switch (iVar14)
			{
				case 4:
					func_63(16);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(_0x351d71b8b72b858b(Global_1132288->f_2052.f_1));
					func_63(17);
					break;
			}
			break;
		case 16:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1132288->f_2047 == 0)
			{
				Global_1132288->f_2047 = get_game_timer();
				Global_1132288->f_2046++;
			}
			else if ((get_game_timer() - Global_1132288->f_2047) > 2000)
			{
				Global_1132288->f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 17:
			if (bVar3)
			{
				vVar8 = { (*Global_1131196)[(*Global_1134390)[iVar0]->f_38.f_3]->f_1 };
				func_77(vVar8, &vVar5);
				func_132(vVar8, vVar5);
				func_63(18);
			}
			else
			{
				func_127();
			}
			break;
		case 18:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!_0xa4a4359320345b34(Global_1132288->f_2052))
			{
				Global_1132288->f_2046++;
				func_63(17);
				return;
			}
			iVar15 = _0xb33a604345f58202(Global_1132288->f_2052);
			switch (iVar15)
			{
				case 4:
					func_63(19);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(_0x351d71b8b72b858b(Global_1132288->f_2052));
					func_134(128);
					func_119();
					func_63(20);
					break;
			}
			break;
		case 19:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1132288->f_2047 == 0)
			{
				Global_1132288->f_2047 = get_game_timer();
				Global_1132288->f_2046++;
			}
			else if ((get_game_timer() - Global_1132288->f_2047) > 2000)
			{
				Global_1132288->f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 20:
			if (!bVar3)
			{
				if (bVar4)
				{
					Global_1132288->f_2036 = { func_115() };
					Global_1132288->f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_63(21);
				}
			}
			else if (bVar4)
			{
				if (func_138((*Global_1134390)[iVar0]->f_38))
				{
					func_137("GC_CAMP_LOCK", 10000, 0, 0, 0, 1);
					func_120();
					Global_1132288->f_2036 = { func_115() };
					Global_1132288->f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_139(iVar1);
				}
			}
			else
			{
				func_63(21);
			}
			break;
		case 21:
			if (func_140(iVar1))
			{
				func_119();
				func_63(22);
			}
			break;
		case 22:
			if (bVar4)
			{
				Global_1132288->f_2036 = { func_115() };
				Global_1132288->f_2036.f_3 = 0;
				func_63(5);
			}
			else
			{
				func_141();
			}
			break;
	}
}

void func_60()
{
	Var1 = { func_142() };
	bVar0 = func_44(Var1);
	if (bVar0)
	{
		func_31(1024);
	}
	else
	{
		func_28(1024);
	}
}

void func_61()
{
	func_143();
	func_144();
	func_145();
	func_146();
	iVar3 = func_147(&(Global_1296859->f_154[&Global_1296859]));
	if (((iVar3 != 9 && iVar3 > 0) && _0xd6f6acf4392187fb(Global_1296859->f_15)) && !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		func_148(0);
		func_149(9);
	}
	switch (iVar3)
	{
		case 0:
			func_150();
			if (func_151(&(Global_1296859->f_154[&Global_1296859])))
			{
				if (func_152())
				{
					func_149(7);
				}
				else
				{
					func_149(2);
				}
			}
			else
			{
				func_149(1);
			}
			break;
		case 1:
			if (func_151(&(Global_1296859->f_154[&Global_1296859])))
			{
				func_153(&(Global_1134349->f_15), 0);
				func_149(2);
			}
			break;
		case 2:
			if (func_154())
			{
				if (!func_155(&Global_1296859, 64))
				{
					func_148(1);
				}
			}
			else if (func_155(&Global_1296859, 64))
			{
				func_148(0);
			}
			if (func_156(player_id()) == 0 && !func_155(&Global_1296859, 128))
			{
				func_157("TRADER_HALT_REASON_RESUPPLY", 1638328972);
				func_148(0);
				func_158(8);
				func_149(4);
			}
			iVar1 = (Global_1901947->f_584.f_11 * 60000);
			if (func_159(&(Global_1134349->f_15)) && func_160(&(Global_1134349->f_15)) > iVar1)
			{
				if (func_161())
				{
					func_149(3);
				}
			}
			break;
		case 3:
			if (func_162(Global_1134349) == 3)
			{
				func_149(2);
			}
			break;
		case 4:
			if (func_155(&Global_1296859, 256))
			{
				if (func_155(&Global_1296859, 16384))
				{
					if (func_163(Global_1134349))
					{
						return;
					}
					if (!func_152())
					{
						iVar0 = func_164(2128091090, 0, 1, -1, 1);
						if (!func_165(Global_1134349, 2128091090, 1, 1, iVar0, -1, 1))
						{
							return;
						}
						Global_1134349->f_39 = func_166(2128091090, iVar0, 0);
						if (Global_1134349->f_39 != 0)
						{
							Var4.f_7 = -142743235;
							Var4.f_16 = -1;
							Var4.f_16 = func_167(Global_1134349->f_39);
							func_168(Global_1134349->f_1, Var4);
						}
					}
					func_169(955, 1);
					func_149(5);
				}
				else if (func_155(&Global_1296859, 256))
				{
					func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
					func_172(256);
					func_172(8);
					func_149(2);
				}
			}
			break;
		case 5:
			if (func_152())
			{
				Var25 = -1;
				Var25.f_4.f_7 = -142743235;
				Var25.f_4.f_16 = -1;
				if (Global_1134349->f_39 != 0 && func_173(Global_1134349->f_1, &uVar21))
				{
					func_174(Global_1134349->f_1, &Var25);
					_0x621d719c4836292b(&uVar21, func_175(Global_1134349->f_39), Global_1134349->f_39, Var25.f_4.f_16, 2128091090, func_176(154));
				}
				func_153(&(Global_1134349->f_18), 0);
				func_149(6);
			}
			break;
		case 6:
			iVar2 = (Global_1901947->f_584.f_13 * 60000);
			if (func_159(&(Global_1134349->f_18)) && func_160(&(Global_1134349->f_18)) > iVar2)
			{
				func_149(7);
			}
			break;
		case 7:
			if (func_155(&Global_1296859, 16384))
			{
				if (func_163(Global_1134349))
				{
					return;
				}
			}
			if (func_159(&(Global_1134349->f_18)))
			{
				func_177(&(Global_1134349->f_18));
			}
			iVar0 = func_178(-1364613333, 0, 1, -1, 1);
			if (!func_179(Global_1134349, -1364613333, 1, 1, 1, 0, iVar0, -1, 0))
			{
				func_149(2);
				return;
			}
			func_169(956, 1);
			Var46.f_8 = func_180(-1364613333, 770694722);
			Var46.f_6 = func_180(-1364613333, 914410532);
			Var46.f_13 = 1;
			func_172(16384);
			func_172(256);
			func_172(8);
			func_149(8);
			break;
		case 8:
			if (func_163(Global_1134349))
			{
				return;
			}
			_0xf184b3ece36219cf(Global_1134349->f_1, &uVar62);
			_0x476038b5a0734c10(&Var46, &uVar62);
			func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
			func_149(2);
			break;
		case 9:
			if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				if (func_151(&(Global_1296859->f_154[&Global_1296859])))
				{
					func_149(2);
				}
				else
				{
					func_149(1);
				}
			}
			break;
	}
}

void func_62()
{
	if ((get_frame_count() % 45) == 0)
	{
		iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
		if (!_network_is_player_index_valid(iVar0))
		{
			return;
		}
		if (Global_1137047->f_339.f_16 != 0 && (Global_1137047->f_339.f_16 != func_181(iVar0) || Global_1137047->f_339.f_16 == func_182(iVar0)))
		{
			_uilog_remove_entry(7, Global_1137047->f_339.f_16);
			Global_1137047->f_339.f_16 = 0;
		}
		else if (func_183(Global_1137047->f_339.f_18, 2))
		{
			func_184(&(Global_1137047->f_339.f_18), 2);
			func_185();
		}
	}
}

void func_63(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

void func_64(var uParam0)
{
	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_25 = -1;
	Var0.f_28.f_1 = 1046181202;
	Var0.f_28.f_2 = 255;
	Var0.f_28.f_3 = -1;
	*uParam0 = { Var0 };
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_67(int iParam0)
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

int func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0, int iParam1)
{
	if (Global_1131196->f_865[iParam0]->f_4 != iParam1)
	{
		Global_1131196->f_865[iParam0]->f_4 = iParam1;
	}
}

void func_71(int iParam0, vector3 vParam1)
{
	Global_1131196->f_865[iParam0]->f_1 = { vParam1 };
}

void func_72(int iParam0, int iParam1)
{
	if (&Global_1131196->f_865[iParam0] != iParam1)
	{
		Global_1131196->f_865[iParam0] = iParam1;
	}
}

int func_73(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return -1;
	}
	if (!func_49())
	{
		return -1;
	}
	if (iParam0 == 255 || !network_is_player_active(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_75(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1131196[iParam0] != iParam1)
	{
		(*Global_1131196)[iParam0] = iParam1;
	}
}

bool func_76(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((*Global_1131196)[iVar1]->f_9 == iVar0)
		{
			return (*Global_1131196)[iVar1]->f_1.f_1 == (*Global_1134390)[iParam0]->f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

bool func_77(vector3 vParam0, var uParam3)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1886596441;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var0);
		return true;
	}
	return false;
}

bool func_78(vector3 vParam0, bool bParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (func_42(32))
	{
		if (func_187(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_42(64))
	{
		iVar0 = func_188(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!_unlock_is_unlocked(iVar0))
		{
			return false;
		}
	}
	if (func_189(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && _0x397769175a7dbb30(vParam4, Global_1901947->f_584.f_5, 0, 0, 0))
	{
		return false;
	}
	if (!bParam9 && _0x397769175a7dbb30(vParam4, Global_1901947->f_584.f_4, 0, func_190(), 0))
	{
		return false;
	}
	if (bParam10 == 0 && func_191(vParam4))
	{
		return false;
	}
	if (bParam10 == 0 && func_192(vParam4, bParam3))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_1.f_2 == 0 || ((*Global_1131196)[iVar0]->f_9 == iParam0->f_9 && iParam0->f_9 != 255))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 32)
	{
		return -1;
	}
	*(*Global_1131196)[iVar0] = { *iParam0 };
	_0x31010318ba9897ac(&(Global_1131196->f_1091), (*Global_1131196)[iVar0]->f_9);
	return iVar0;
}

void func_80(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_193(iParam0, iParam1))
	{
		func_45(&((*Global_1131196)[iParam0]->f_7), iParam1);
	}
}

bool func_81(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	vVar0 = { *uParam1 };
	if (func_194(&vVar0, iParam0, bParam2, iParam3, uParam4))
	{
		*uParam1 = { vVar0 };
		return true;
	}
	return false;
}

void func_82(int iParam0)
{
	if (Global_1131196[iParam0] == 0)
	{
		return;
	}
	iVar0 = func_195(iParam0, 0);
	if (!func_101(iParam0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!network_is_player_a_participant(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!_0x424b17a7dc5c90bc(iVar0))
	{
		func_75(iParam0, 3);
	}
}

void func_83(int iParam0)
{
	iVar0 = get_network_time();
	if ((*Global_1131196)[iParam0]->f_26 == 0)
	{
		(*Global_1131196)[iParam0]->f_26 = iVar0;
	}
	else if (get_time_difference((*Global_1131196)[iParam0]->f_26, iVar0) > 12000)
	{
		(*Global_1131196)[iParam0]->f_26 = iVar0;
	}
	else
	{
		return;
	}
	if (!network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		return;
	}
	if (func_65((*Global_1134390)[(*Global_1131196)[iParam0]->f_9]->f_33.f_4, 128))
	{
		iVar1 = get_unique_int_for_player((*Global_1131196)[iParam0]->f_9);
		if (!func_65(Global_1131196->f_865[iVar1]->f_5, 128))
		{
			(*Global_1131196)[iParam0]->f_23.f_1 = (*Global_1134390)[(*Global_1131196)[iParam0]->f_9]->f_38.f_23.f_1;
			(*Global_1131196)[iParam0]->f_23 = (*Global_1134390)[(*Global_1131196)[iParam0]->f_9]->f_38.f_23;
			(*Global_1131196)[iParam0]->f_25 = 0;
			func_45(&(Global_1131196->f_865[iVar1]->f_5), 128);
		}
	}
	iVar2 = _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar4)))
		{
			if (_0x901e0dc25080c8b9(int_to_playerindex(iVar4)) != iVar2)
			{
				_0x31010318ba9897ac(&iVar3, iVar4);
			}
		}
		iVar4++;
	}
	if (iVar3 != (*Global_1131196)[iParam0]->f_25)
	{
		(*Global_1131196)[iParam0]->f_25 = iVar3;
		_0xeba87b9273835cf3((*Global_1131196)[iParam0]->f_23.f_1, &iVar3);
		_0xeba87b9273835cf3((*Global_1131196)[iParam0]->f_23, &iVar3);
	}
}

void func_84(int iParam0)
{
	if (!network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		return;
	}
	iVar0 = _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
	iVar51 = _0xd1bf325c8252a982(iVar0, &Var1);
	if (iVar51 > (*Global_1131196)[iParam0]->f_1)
	{
		return;
	}
	iVar53 = 0;
	while (iVar53 <= ((*Global_1131196)[iParam0]->f_1 - 1))
	{
		if (&(*Global_1131196)[iParam0]->f_10[iVar53] != 255)
		{
			if (!network_is_player_active(&((*Global_1131196)[iParam0]->f_10[iVar53])))
			{
				(*Global_1131196)[iParam0]->f_10[iVar53] = 255;
			}
			else if (_0x901e0dc25080c8b9(&((*Global_1131196)[iParam0]->f_10[iVar53])) != iVar0)
			{
				(*Global_1131196)[iParam0]->f_10[iVar53] = 255;
			}
		}
		else if (iVar53 >= iVar51)
		{
		}
		else
		{
			iVar55 = 0;
			while (iVar55 <= iVar53)
			{
				if (func_196(*Var1[iVar55]))
				{
					iVar52 = network_get_player_from_gamer_handle(Var1[iVar55]);
					if (network_is_player_active(iVar52))
					{
						bVar56 = true;
						iVar54 = 0;
						while (iVar54 <= ((*Global_1131196)[iParam0]->f_1 - 1))
						{
							if (&(*Global_1131196)[iParam0]->f_10[iVar54] == iVar52)
							{
								bVar56 = false;
							}
							else
							{
								iVar54++;
							}
						}
					}
				}
				if (bVar56 == 1)
				{
				}
				else
				{
					iVar55++;
				}
			}
			if (bVar56)
			{
				(*Global_1131196)[iParam0]->f_10[iVar53] = iVar52;
			}
		}
		iVar53++;
	}
}

void func_85(int iParam0)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if ((network_is_player_active(int_to_playerindex(iVar2)) && (*Global_1134390)[iVar2]->f_70.f_2 != 0) && (*Global_1134390)[iVar2]->f_70 == iParam0)
		{
			bVar0 = true;
			iVar1 = (*Global_1134390)[iVar2]->f_70.f_2;
			(*Global_1131196)[iParam0]->f_18 = ((*Global_1131196)[iParam0]->f_18 || (*Global_1134390)[iVar2]->f_70.f_1);
		}
		iVar2++;
	}
	if (bVar0)
	{
		if ((*Global_1131196)[iParam0]->f_18.f_1 != iVar1)
		{
			(*Global_1131196)[iParam0]->f_18.f_1 = iVar1;
		}
	}
	else if ((*Global_1131196)[iParam0]->f_18.f_1 != 0)
	{
		(*Global_1131196)[iParam0]->f_18.f_1 = 0;
		(*Global_1131196)[iParam0]->f_18 = 0;
	}
}

void func_86(int iParam0)
{
	if (network_is_script_active(func_197(), iParam0, false, 0) && network_is_script_active(func_198(), iParam0, false, 0))
	{
		func_75(iParam0, 2);
	}
}

void func_87(int iParam0)
{
	if (!network_is_script_active(func_197(), iParam0, false, 0))
	{
		func_75(iParam0, 1);
	}
}

void func_88(int iParam0)
{
	if (Global_1901947->f_584.f_15)
	{
		func_199(iParam0);
	}
	func_200((*Global_1131196)[iParam0]);
	func_75(iParam0, 0);
}

void func_89()
{
	iVar0 = player_id();
	Global_1134349->f_40 = 0;
	(*Global_1134390)[iVar0]->f_74 = Global_1134349->f_32;
	(*Global_1134390)[iVar0]->f_74.f_1 = Global_1134349->f_33;
}

void func_90()
{
	if (func_122(512))
	{
		func_31(65536);
	}
	else if (func_122(256))
	{
		func_31(32768);
	}
}

struct<4> func_91(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_201(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_92(1328661203, func_202(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_92(1328661203, func_202(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_92(1328661203, func_202(), -1591664384, bParam0);
}

struct<4> func_92(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_203(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_201(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar1 = network_player_id_to_int();
	iVar0 = -1411330704;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_3 = iVar0;
	}
	iVar0 = 1642014154;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_1 = iVar0;
	}
	iVar0 = -428390721;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12 = iVar0;
	}
	iVar0 = -1396511102;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_6 = iVar0;
	}
	iVar0 = 913131737;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_2 = iVar0;
	}
	iVar0 = 1476279059;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_2 = iVar0;
	}
	iVar0 = -1490861779;
	if (func_204(iVar0, 1))
	{
		(*Global_1134390)[iVar1]->f_38.f_12.f_2 = iVar0;
	}
}

void func_94()
{
	iVar0 = player_id();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_204(-1577890561, 1))
	{
		if (func_204(1778670882, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 11;
		}
		else if (func_204(1826251470, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 10;
		}
		else
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 9;
		}
	}
	else if (func_204(-342106029, 1))
	{
		if (func_204(1778670882, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 8;
		}
		else if (func_204(1826251470, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 7;
		}
		else
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 6;
		}
	}
	else if (func_204(2113111296, 1))
	{
		if (func_204(1778670882, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 5;
		}
		else if (func_204(1826251470, 1))
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 4;
		}
		else
		{
			(*Global_1134390)[iVar0]->f_38.f_26 = 3;
		}
	}
	else if (func_204(1778670882, 1))
	{
		(*Global_1134390)[iVar0]->f_38.f_26 = 2;
	}
	else if (func_204(1826251470, 1))
	{
		(*Global_1134390)[iVar0]->f_38.f_26 = 1;
	}
	else
	{
		(*Global_1134390)[iVar0]->f_38.f_26 = 0;
	}
}

int func_95(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_205(&uParam0, iParam4, bParam5, iParam6);
}

void func_96(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if ((*Global_1134390)[iParam1]->f_38.f_12.f_4 != iParam0)
	{
		(*Global_1134390)[iParam1]->f_38.f_12.f_4 = iParam0;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if ((*Global_1134390)[iParam1]->f_38.f_12.f_5 != iParam0)
	{
		(*Global_1134390)[iParam1]->f_38.f_12.f_5 = iParam0;
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if ((*Global_1134390)[iParam1]->f_38.f_12.f_7 != iParam0)
	{
		(*Global_1134390)[iParam1]->f_38.f_12.f_7 = iParam0;
		if (iParam1 == network_player_id_to_int())
		{
			func_31(8192);
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if ((*Global_1134390)[iParam1]->f_38.f_12.f_8 != iParam0)
	{
		(*Global_1134390)[iParam1]->f_38.f_12.f_8 = iParam0;
		if (iParam1 == network_player_id_to_int())
		{
			func_31(8192);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if ((*Global_1134390)[iParam1]->f_38.f_12.f_9 != iParam0)
	{
		(*Global_1134390)[iParam1]->f_38.f_12.f_9 = iParam0;
		if (iParam1 == network_player_id_to_int())
		{
			func_31(8192);
		}
	}
}

bool func_101(int iParam0)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return (Global_1131196[iParam0] != 0 && Global_1131196[iParam0] != 3);
}

void func_102(int iParam0, int iParam1)
{
	Var0.f_2 = 255;
	*Global_1137047->f_9[iParam0] = { Var0 };
	iVar10 = _0x901e0dc25080c8b9(player_id());
	if ((_0xd6f6acf4392187fb(iVar10) && iParam1 == _0x4be6c13a45cca8ec(iVar10)) && network_is_player_active(iParam1))
	{
		Global_1137047->f_330.f_3 = { Var0.f_4 };
	}
}

void func_103(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1132288->f_1[iParam0]->f_3 != iParam1)
	{
		Global_1132288->f_1[iParam0]->f_3 = iParam1;
	}
}

void func_104(int iParam0, vector3 vParam1, int iParam4)
{
	Global_1137047->f_9[iParam0]->f_7 = { func_206(iParam0) };
	Global_1137047->f_9[iParam0]->f_4 = { vParam1 };
	Global_1137047->f_9[iParam0]->f_2 = iParam4;
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if ((_0xd6f6acf4392187fb(iVar0) && iParam4 == _0x4be6c13a45cca8ec(iVar0)) && network_is_player_active(iParam4))
	{
		Global_1137047->f_330.f_7 = iParam4;
		Global_1137047->f_330.f_3 = { vParam1 };
	}
}

bool func_105(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return does_blip_exist(&(Global_17081[iParam0]));
	}
	return false;
}

void func_106(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_13 = 7;
	Var0.f_49 = 7;
	*uParam0 = { Var0 };
}

void func_107(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
		return;
	}
	if (!func_207(iParam0))
	{
		func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
		return;
	}
	if (!func_42(16))
	{
		func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1296859->f_15;
	bVar2 = (_0x424b17a7dc5c90bc(player_id()) && (*Global_1131196)[iParam0]->f_9 == player_id());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && _0x424b17a7dc5c90bc((*Global_1131196)[iParam0]->f_9));
	bVar4 = func_105(Global_1132288->f_1[iParam0]->f_5);
	if ((!bVar2 && !bVar3) && vdist(Global_35, func_206(iParam0)) > 75f)
	{
		if (bVar4)
		{
			func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
		}
		return;
	}
	bVar5 = func_42(1024);
	bVar6 = func_209(1);
	if (!bVar4)
	{
		if (((bVar2 || bVar3) && Global_1132288->f_2045 != iParam0) && Global_1132288->f_2045 != -1)
		{
			func_17(&(Global_1132288->f_1[Global_1132288->f_2045]->f_5), 0);
		}
		if (bVar2 || bVar3)
		{
			func_210(iParam0);
		}
		if (bVar5)
		{
			if (bVar2 || bVar3)
			{
				if (!bVar6)
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		iVar7 = (*Global_1131196)[iParam0]->f_1.f_1;
		Global_1132288->f_1[iParam0]->f_5 = func_213(func_211(func_206(iParam0), 1), func_212((bVar2 || bVar3)), func_206(iParam0), -1);
		if (Global_1132288->f_1[iParam0]->f_5 == -1)
		{
			return;
		}
		set_blip_name_from_text_file(func_16(Global_1132288->f_1[iParam0]->f_5), "NET_CAMP_BLIP_POSSE");
		set_blip_flash_timer(func_16(Global_1132288->f_1[iParam0]->f_5), func_212((bVar2 || bVar3)), func_214(iVar7, (bVar2 || bVar3), bVar2));
		if (func_42(512))
		{
			if (bVar5 == 0)
			{
				_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), 580546400);
				_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), 1784012766);
				Global_1132288->f_1[iParam0]->f_62 = get_game_timer();
			}
			func_28(512);
		}
	}
	else
	{
		if (Global_1132288->f_2045 == iParam0)
		{
			if ((Global_1132288->f_2045 != -1 && !bVar2) && !bVar3)
			{
				func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
				return;
			}
		}
		else if (Global_1132288->f_2045 != -1 && (bVar2 || bVar3))
		{
			func_17(&(Global_1132288->f_1[iParam0]->f_5), 0);
			return;
		}
		if (!bVar2 && !bVar3)
		{
			if (func_113(iParam0, 2))
			{
				_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), 1586775858);
			}
			else
			{
				_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), 1635604685);
			}
		}
		if (func_215(iParam0) && (!(bVar3 || bVar2) || !bVar5))
		{
			_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), 892550176);
		}
		else
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_5), 892550176);
		}
		if (bVar5 && (!(bVar3 || bVar2) || !bVar6))
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_5), 580546400);
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_5), 1784012766);
			Global_1132288->f_1[iParam0]->f_62 = 0;
			_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_5), -211388321);
		}
		else
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_5), -211388321);
		}
		if (Global_1132288->f_1[iParam0]->f_62 != 0 && (get_game_timer() - Global_1132288->f_1[iParam0]->f_62) > 20000)
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_5), 1784012766);
			Global_1132288->f_1[iParam0]->f_62 = 0;
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return;
	}
	if (!func_74(iParam0))
	{
		return;
	}
	if (!_0x9be7dcb22d32ccbe(func_208(iParam0, 0), player_id()))
	{
		return;
	}
	if (func_216(player_id()) == iParam0 && _0x424b17a7dc5c90bc(player_id()))
	{
		Var0 = { func_217(0) };
		if (func_44(Var0))
		{
			if ((((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 8) || Var0 == 7) || Var0 == 6)
			{
				if (!func_193(iParam0, 32) && !func_113(iParam0, 4096))
				{
					if (func_113(iParam0, 16))
					{
						func_218(iParam0, 2048);
					}
					else
					{
						func_219(iParam0, 2048);
					}
					func_220(iParam0);
					func_218(iParam0, 4096);
				}
			}
		}
		else if (func_193(iParam0, 32))
		{
			if (func_113(iParam0, 4096))
			{
				func_221(iParam0);
				func_219(iParam0, 4096);
				if (func_113(iParam0, 2048))
				{
					func_222(iParam0);
					func_219(iParam0, 2048);
				}
			}
		}
	}
	if (func_215(iParam0))
	{
		if (func_122(16))
		{
			func_125(16);
		}
	}
	else if (!func_122(16))
	{
		func_223(16);
	}
}

void func_109(int iParam0)
{
	if (!func_105(Global_1132288->f_1[iParam0]->f_5))
	{
		if (func_105(Global_1132288->f_1[iParam0]->f_6))
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_6), 7148155);
			func_17(&(Global_1132288->f_1[iParam0]->f_6), 0);
			Global_1132288->f_1[iParam0]->f_6 = -1;
		}
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1296859->f_15;
	bVar2 = (_0x424b17a7dc5c90bc(player_id()) && (*Global_1131196)[iParam0]->f_9 == player_id());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && _0x424b17a7dc5c90bc((*Global_1131196)[iParam0]->f_9));
	if (!bVar2 && !bVar3)
	{
		if (func_105(Global_1132288->f_1[iParam0]->f_6))
		{
			_set_blip_flash_style(func_16(Global_1132288->f_1[iParam0]->f_6), 7148155);
			func_17(&(Global_1132288->f_1[iParam0]->f_6), 0);
			Global_1132288->f_1[iParam0]->f_6 = -1;
		}
		return;
	}
	if (func_105(Global_1132288->f_1[iParam0]->f_6))
	{
		return;
	}
	if (func_105(Global_1132288->f_1[Global_1132288->f_2051]->f_6))
	{
		_set_blip_flash_style(func_16(Global_1132288->f_1[Global_1132288->f_2051]->f_6), 7148155);
		func_17(&(Global_1132288->f_1[Global_1132288->f_2051]->f_6), 0);
		Global_1132288->f_1[Global_1132288->f_2051]->f_6 = -1;
	}
	iVar4 = (*Global_1131196)[iParam0]->f_1.f_1;
	Global_1132288->f_1[iParam0]->f_6 = func_213(func_211(func_206(iParam0), 1), 100, func_206(iParam0), -1);
	if (Global_1132288->f_1[iParam0]->f_6 == -1 || !func_105(Global_1132288->f_1[iParam0]->f_6))
	{
		return;
	}
	set_blip_name_from_text_file(func_16(Global_1132288->f_1[iParam0]->f_6), "NET_CAMP_BLIP_POSSE");
	set_blip_flash_timer(func_16(Global_1132288->f_1[iParam0]->f_6), func_212((bVar2 || bVar3)), func_214(iVar4, (bVar2 || bVar3), bVar2));
	_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_6), 7148155);
	_blip_set_modifier(func_16(Global_1132288->f_1[iParam0]->f_6), -1186550032);
	Global_1132288->f_2051 = iParam0;
}

void func_110(int iParam0)
{
	if (!func_12())
	{
		return;
	}
	if (func_42(4))
	{
		return;
	}
	if (!func_224(iParam0, 8))
	{
		func_225(iParam0);
		func_226(iParam0);
		func_227(iParam0);
		func_228(iParam0);
		func_229(iParam0);
		func_230(iParam0);
		func_231(iParam0, 8);
	}
	if (vdist(Global_35, func_206(iParam0)) >= Global_1901947->f_584)
	{
		return;
	}
	if (Global_1132288->f_1[iParam0]->f_4 == 0)
	{
		func_232(iParam0, 1);
	}
	switch (Global_1132288->f_1[iParam0]->f_4)
	{
		case 0:
			func_232(iParam0, 1);
			break;
		case 1:
			if (func_233(iParam0))
			{
				func_218(iParam0, 1);
				func_31(256);
				func_232(iParam0, 2);
			}
			break;
		case 2:
			if (func_234(iParam0))
			{
				func_232(iParam0, 3);
			}
			break;
		case 3:
			func_218(iParam0, 1);
			func_31(256);
			func_103(iParam0, 2);
			break;
	}
}

void func_111(int iParam0)
{
	if (!_does_thread_exist(Global_1132288->f_2055) || Global_1132288->f_2056 != iParam0)
	{
		func_219(iParam0, 1);
		func_219(iParam0, 2);
		func_232(iParam0, 0);
		func_103(iParam0, 1);
	}
	if (!_does_thread_exist(Global_1132288->f_2057) || Global_1132288->f_2058 != iParam0)
	{
		func_219(iParam0, 1024);
	}
}

void func_112(int iParam0)
{
	if ((func_113(iParam0, 1) && _does_thread_exist(Global_1132288->f_2055)) && Global_1132288->f_2056 == iParam0)
	{
		return;
	}
	func_235((*(*Global_1134390)[network_player_id_to_int()])[iParam0]);
	func_106(Global_1132288->f_1[iParam0]);
	func_103(iParam0, 0);
	func_232(iParam0, 0);
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65((*Global_1134390)[network_player_id_to_int()][iParam0], iParam1);
}

void func_114(int iParam0)
{
	if ((get_frame_count() % 3) != 0)
	{
		return;
	}
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	iVar1 = _0x4be6c13a45cca8ec(iVar0);
	iVar2 = func_236(iVar1);
	if (iVar2 != func_216(player_id()))
	{
		func_237(iVar2);
	}
}

Vector3 func_115()
{
	Var3 = { func_238(0) };
	if (Var3.f_8 != -1838434463)
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

void func_116(vector3 vParam0)
{
	(*Global_1134390)[func_239()]->f_38 = { vParam0 };
	func_240(vParam0);
}

bool func_117()
{
	return Global_1132288->f_2027.f_7 == 3;
}

void func_118(int iParam0)
{
	Global_1132288->f_2027.f_7 = iParam0;
}

void func_119()
{
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_38.f_7 = -1;
	(*Global_1134390)[iVar0]->f_38.f_8 = { 0f, 0f, 0f };
}

void func_120()
{
	if (func_65(Global_1137047->f_8, 2))
	{
		func_43(&(Global_1137047->f_8), 2);
	}
}

void func_121()
{
	if ((Global_1137047->f_382 < 3 && func_42(64)) && !func_123())
	{
		func_137("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, 1);
		Global_1137047->f_382++;
	}
}

bool func_122(int iParam0)
{
	return func_65(Global_1137047->f_8, iParam0);
}

bool func_123()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_124(int iParam0)
{
	return func_241(1, iParam0);
}

void func_125(int iParam0)
{
	func_43(&(Global_1137047->f_8), iParam0);
}

bool func_126(vector3 vParam0, bool bParam3)
{
	vVar1 = { vParam0 };
	if ((func_49() && func_42(64)) && func_242(0, 1))
	{
		if (vVar1.z != 0)
		{
			if (func_243())
			{
				if (func_244(vVar1, 1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!func_245(Global_1296859->f_15))
				{
				}
				if (bParam3)
				{
					if (!func_246(vVar1, 1))
					{
						iVar0 = 0;
					}
					else if (func_244(vVar1, 0))
					{
						iVar0 = 1;
						func_128(1);
					}
				}
				else if (func_244(vVar1, 0))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

int func_127()
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	func_63(2);
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = 0;
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_247();
	func_248(vVar0);
	return 1;
}

void func_128(int iParam0)
{
	Global_1132288->f_2027.f_5 = iParam0;
}

bool func_129()
{
	return Global_1132288->f_2046 < 10;
}

void func_130(vector3 vParam0, vector3 vParam3)
{
	Var0 = { vParam3 };
	Var0.f_4 = Global_1901947->f_584.f_5;
	Var0.f_5 = 544;
	Var0.f_6 = func_249();
	Var0.f_7 = func_188(vParam0);
	Global_1132288->f_2052.f_1 = _0x183c0b6cfeffcae4(&Var0);
}

void func_131(int iParam0)
{
	if ((*Global_1134390)[player_id()]->f_38.f_23.f_1 != iParam0)
	{
		(*Global_1134390)[player_id()]->f_38.f_23.f_1 = iParam0;
	}
}

void func_132(vector3 vParam0, vector3 vParam3)
{
	Var0 = { vParam3 + Vector(1f, 0f, 0f) };
	Var0.f_4 = Global_1901947->f_584.f_4;
	Var0.f_5 = 552;
	Var0.f_6 = func_190();
	Var0.f_7 = func_188(vParam0);
	Global_1132288->f_2052 = _0x183c0b6cfeffcae4(&Var0);
}

void func_133(int iParam0)
{
	if ((*Global_1134390)[player_id()]->f_38.f_23 != iParam0)
	{
		(*Global_1134390)[player_id()]->f_38.f_23 = iParam0;
	}
}

void func_134(int iParam0)
{
	func_45(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

bool func_135(bool bParam0)
{
	iVar0 = player_id();
	iVar1 = get_unique_int_for_player(iVar0);
	if (Global_1132288->f_2049 == 0)
	{
		Global_1132288->f_2049 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2049) > Global_1901947->f_584.f_14)
	{
		*bParam0 = 1;
		Global_1132288->f_2049 = 0;
		return false;
	}
	if (Global_1131196->f_865[iVar1]->f_4 != (*Global_1134390)[network_player_id_to_int()]->f_33.f_3)
	{
		return false;
	}
	if (func_65(Global_1131196->f_865[iVar1]->f_5, 32))
	{
		*bParam0 = 1;
		Global_1132288->f_2049 = 0;
		return false;
	}
	if (&Global_1131196->f_865[iVar1] != 6)
	{
		return false;
	}
	iVar2 = func_236(iVar0);
	if (func_74(iVar2))
	{
		vVar3 = { (*Global_1131196)[iVar2]->f_1 };
		vVar6 = { func_206(iVar2) };
		func_116(vVar3);
		func_250(vVar6);
		iVar9 = func_211(vVar6, 1);
		func_251(iVar9);
		func_248(vVar3);
		_0xa72773c3134f9a57(vVar3.x, vVar3.z, vVar3.y, func_252(network_player_id_to_int()), vVar6);
		if (_0x0f99f6436528a089(Global_1296859->f_15) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_253(Global_1296859->f_15, vVar3.x);
			_0xc08aff658b2e51da(&iVar10);
			if (iVar10 != 0)
			{
				Global_1194053->f_14.f_7 = iVar10;
				Global_1194053->f_14.f_9 = Global_1296859->f_15;
				Global_1194053->f_14.f_12 = vVar3.x;
				Global_1194053->f_14.f_13 = vVar3.y;
				Global_1194053->f_1 = 10;
			}
		}
		if (func_42(64))
		{
			if (Global_1132288->f_2027.f_4 == -15)
			{
				Global_1132288->f_2027.f_4 = func_254();
			}
		}
		func_237(iVar2);
		return true;
	}
	return false;
}

void func_136()
{
	if (!func_65(Global_1137047->f_8, 2))
	{
		func_45(&(Global_1137047->f_8), 2);
	}
}

var func_137(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_138(vector3 vParam0)
{
	if (!func_42(64))
	{
		return false;
	}
	iVar0 = func_188(vParam0);
	if (iVar0 != 0 && !_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0)
{
	if ((iParam0 < 0 || iParam0 >= 32) || (*Global_1131196)[iParam0]->f_9 != player_id())
	{
		return;
	}
	if ((*Global_1134390)[func_239()]->f_38.f_2 != (*Global_1131196)[iParam0]->f_1.f_2)
	{
		func_116((*Global_1131196)[iParam0]->f_1);
	}
	func_255();
	func_256(iParam0);
	func_257(iParam0, (*Global_1131196)[iParam0]->f_1);
	func_258(iParam0);
	func_259(iParam0);
}

bool func_140(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	func_18();
	if ((*Global_1131196)[iParam0]->f_9 == 255)
	{
		return false;
	}
	if (*Global_1131196)[iParam0]->f_9 != _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))
	{
		return false;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	func_116(vVar0);
	func_31(4096);
	if (func_117())
	{
		func_118(0);
	}
	func_120();
	return true;
}

void func_141()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0) && network_is_player_active(player_id()))
	{
		iVar1 = iVar0;
		iVar2 = player_id();
		if ((((iVar1 < 32 && iVar1 >= 0) && iVar2 < 32) && iVar2 >= 0) && ((*Global_1134390)[iVar2]->f_38.f_2 != (*Global_1134390)[iVar1]->f_38.f_2 || (*Global_1134390)[iVar2]->f_38 != (*Global_1134390)[iVar1]->f_38))
		{
			func_116((*Global_1134390)[iVar1]->f_38);
		}
	}
	if (((func_42(4096) && !func_260()) && is_screen_faded_in()) && !func_124(255))
	{
		iVar3 = func_216(player_id());
		if (func_74(iVar3))
		{
			if (func_105(Global_1132288->f_1[iVar3]->f_5) && network_is_player_active((*Global_1131196)[iVar3]->f_9))
			{
				sVar4 = _create_var_string(10, "GC_CAMP_MERGE", func_262(func_261((*Global_1131196)[iVar3]->f_9), -963477619), func_16(Global_1132288->f_1[iVar3]->f_5));
				_0xdd1232b332cbb9e7(1, 1, 1);
				Global_1137047->f_375 = func_137(sVar4, 10000, 0, 0, 0, 1);
				Global_1137047->f_376 = Global_1296859->f_15;
				func_28(4096);
			}
		}
	}
	func_255();
}

struct<2> func_142()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_217(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_217(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

void func_143()
{
	if (Global_1134349->f_40 == 0)
	{
		Global_1134349->f_40++;
	}
	else if (Global_1134349->f_40 >= 60)
	{
		Global_1134349->f_40 = 0;
		return;
	}
	else
	{
		Global_1134349->f_40++;
		return;
	}
	if (func_263())
	{
		if (!func_155(&Global_1296859, 1))
		{
			func_158(1);
		}
	}
	else if (func_155(&Global_1296859, 1))
	{
		func_172(1);
	}
	func_264(func_170(770694722, func_91(1), 1784584921, 1, 0, 0));
	func_265(func_170(-735397297, func_91(1), 1784584921, 1, 0, 0));
	func_171(func_170(914410532, func_91(1), 1784584921, 1, 0, 0));
	if (func_266() == -1490861779)
	{
		iVar0 = 100;
	}
	else if (func_266() == 1476279059)
	{
		iVar0 = 50;
	}
	else
	{
		iVar0 = 25;
	}
	func_267(iVar0);
}

void func_144()
{
	if (!_databinding_is_data_id_valid(Global_1134349->f_21))
	{
		return;
	}
	iVar3 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	iVar6 = 0;
	if (Global_1940311->f_10893 != 0)
	{
		iVar7 = func_270(Global_1940311->f_10893);
		iVar6 = func_180(iVar7, 770694722);
		if (func_271(Global_1940311->f_10893, 1064293907))
		{
			if (func_272())
			{
				iVar6 = round((to_float(iVar6) * 1.25f));
			}
		}
		else if ((_0x245d07651b1d183b(Global_1940311->f_10893, 268435456) || _0x245d07651b1d183b(Global_1940311->f_10893, 134217728)) || func_271(Global_1940311->f_10893, 1888974372))
		{
			iVar6 = round((to_float(iVar6) * 0.4f));
		}
		else
		{
			iVar6 = round((to_float(iVar6) * 0.6f));
		}
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_23))
	{
		if ((func_273(29) && _is_app_active(-4058091)) && Global_1940311->f_38.f_203 > 0)
		{
			_databinding_write_data_int(Global_1134349->f_23, (iVar6 + iVar4));
		}
		else
		{
			_databinding_write_data_int(Global_1134349->f_23, 0);
		}
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_22))
	{
		_databinding_write_data_int(Global_1134349->f_22, iVar4);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_24))
	{
		iVar0 = func_274(iVar3);
		_databinding_write_data_int(Global_1134349->f_24, iVar0);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_26))
	{
		if (func_183(Global_1137047->f_339.f_18, 1))
		{
			iVar1 = func_275(iVar3);
			func_184(&(Global_1137047->f_339.f_18), 1);
		}
		else
		{
			iVar1 = func_276(iVar3);
		}
		_databinding_write_data_int(Global_1134349->f_26, iVar1);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_27))
	{
		_databinding_write_data_int(Global_1134349->f_27, iVar5);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_28))
	{
		iVar0 = func_277(iVar3);
		_databinding_write_data_int(Global_1134349->f_28, iVar0);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_29))
	{
		iVar2 = func_278(iVar3);
		_databinding_write_data_int(Global_1134349->f_29, iVar2);
	}
	if (_databinding_is_data_id_valid(Global_1134349->f_31))
	{
		if (func_155(iVar3, 32) || _is_app_active(-4058091))
		{
			_databinding_write_data_bool(Global_1134349->f_31, true);
		}
		else
		{
			_databinding_write_data_bool(Global_1134349->f_31, false);
		}
	}
}

void func_145()
{
	if (func_279())
	{
		if (!func_155(&Global_1296859, 4096))
		{
			_display_hud_component(2077578434);
			_hide_hud_component(-782493871);
			func_158(4096);
		}
	}
	else if (func_155(&Global_1296859, 4096))
	{
		_display_hud_component(-782493871);
		func_172(4096);
	}
}

void func_146()
{
	if (!_0x424b17a7dc5c90bc(player_id()) || !_0x0f99f6436528a089(Global_1296859->f_15))
	{
		return;
	}
	if (Global_1134349->f_34 != 255)
	{
		iVar19 = Global_1134349->f_34;
		if ((((iVar19 >= 0 && iVar19 < 32) && (*Global_1134390)[iVar19]->f_74.f_6 > 0) && (*Global_1134390)[iVar19]->f_74.f_7 == Global_1134349->f_37) && Global_1134349->f_37 != -1)
		{
			return;
		}
		else
		{
			Global_1134349->f_34 = 255;
		}
	}
	if (!func_280(1))
	{
		return;
	}
	iVar21 = 0;
	while (iVar21 <= 31)
	{
		iVar20 = int_to_playerindex(iVar21);
		if (network_is_player_active(iVar20) && _0x81fb74c83c2ed69f(iVar20))
		{
			if ((*Global_1134390)[iVar21]->f_74.f_8 != 0 && (*Global_1134390)[iVar21]->f_74.f_6 > 0)
			{
				if (func_281(&uVar0, (*Global_1134390)[iVar21]->f_74.f_8, (*Global_1134390)[iVar21]->f_74.f_6, 0))
				{
					_0x31010318ba9897ac(&uVar18, iVar21);
					Global_1134349->f_34 = iVar20;
					Global_1134349->f_37 = (*Global_1134390)[iVar21]->f_74.f_7;
					func_282(19, Var4, uVar18);
				}
			}
			else
			{
				iVar21++;
			}
		}
	}
}

int func_147(int iParam0)
{
	iVar0 = -1;
	if (!network_is_player_active(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return (*Global_1134390)[iVar1]->f_74.f_1;
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		func_283(&(Global_1134349->f_15));
		func_158(64);
	}
	else
	{
		func_177(&(Global_1134349->f_15));
		func_172(64);
	}
}

void func_149(int iParam0)
{
	(*Global_1134390)[&Global_1296859]->f_74.f_1 = iParam0;
	Global_1134349->f_33 = (*Global_1134390)[&Global_1296859]->f_74.f_1;
}

void func_150()
{
	iVar3 = _0x4be6c13a45cca8ec(Global_1296859->f_15);
	if (!network_is_player_active(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	if (!_databinding_is_data_id_valid(Global_1134349->f_21))
	{
		Global_1134349->f_21 = _databinding_add_data_container_from_path("", "Trader_ProgressBars");
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_22))
	{
		Global_1134349->f_22 = _databinding_add_data_int(Global_1134349->f_21, "TraderMaterialsValue", iVar4);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_23))
	{
		Global_1134349->f_23 = _databinding_add_data_int(Global_1134349->f_21, "TraderMaterialsDeltaValue", 0);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_25))
	{
		Global_1134349->f_25 = _databinding_add_data_int(Global_1134349->f_21, "TraderMaterialsMaximum", Global_1901947->f_584.f_9);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_24))
	{
		iVar0 = func_274(iVar3);
		Global_1134349->f_24 = _databinding_add_data_int(Global_1134349->f_21, "TraderMaterialsColorID", iVar0);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_26))
	{
		iVar1 = func_276(iVar3);
		Global_1134349->f_26 = _databinding_add_data_int(Global_1134349->f_21, "ProductionOperational", iVar1);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_27))
	{
		Global_1134349->f_27 = _databinding_add_data_int(Global_1134349->f_21, "TraderGoodsValue", iVar5);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_30))
	{
		Global_1134349->f_30 = _databinding_add_data_int(Global_1134349->f_21, "TraderGoodsMaximum", Global_1901947->f_584.f_10);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_28))
	{
		iVar0 = func_277(iVar3);
		Global_1134349->f_28 = _databinding_add_data_int(Global_1134349->f_21, "TraderGoodsColorID", iVar0);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_29))
	{
		iVar2 = func_278(iVar3);
		Global_1134349->f_29 = _databinding_add_data_int(Global_1134349->f_21, "TraderGoodsThresholdValue", iVar2);
	}
	if (!_databinding_is_data_id_valid(Global_1134349->f_31))
	{
		Global_1134349->f_31 = _databinding_add_data_bool(Global_1134349->f_21, "TraderGoodsShowCash", 0);
	}
}

bool func_151(int iParam0)
{
	return (network_is_player_active(iParam0) && func_155(iParam0, 1));
}

bool func_152()
{
	iVar0 = func_178(-1364613333, 0, 1, -1, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	return func_284(-1364613333, iVar0, 0);
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1 || !func_159(uParam0))
	{
		func_283(uParam0);
	}
}

bool func_154()
{
	if (!func_285())
	{
		func_158(4);
	}
	else
	{
		func_172(4);
	}
	if (func_268(player_id()) < 200)
	{
		if (!func_155(&Global_1296859, 2))
		{
			func_157("TRADER_HALT_REASON_MATERIALS_EMPTY", 147180770);
			func_158(2);
		}
	}
	else
	{
		func_172(2);
	}
	if (func_269(player_id()) >= Global_1901947->f_584.f_10)
	{
		if (!func_155(&Global_1296859, 128))
		{
			func_157("TRADER_HALT_REASON_SELL_GOODS", 109578199);
			func_158(128);
		}
	}
	else
	{
		func_172(128);
	}
	iVar0 = func_216(player_id());
	if (func_193(iVar0, 512))
	{
		if (!func_155(&Global_1296859, 16))
		{
			func_157("TRADER_HALT_REASON_CRIPPS_INJURED", 1638328972);
			func_158(16);
		}
	}
	else
	{
		func_172(16);
	}
	if (((func_155(&Global_1296859, 4) || func_155(&Global_1296859, 2)) || func_155(&Global_1296859, 128)) || func_155(&Global_1296859, 16))
	{
		return false;
	}
	return true;
}

bool func_155(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_65((*Global_1134390)[iParam0]->f_74, iParam1);
}

int func_156(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_5;
}

void func_157(char* sParam0, int iParam1)
{
	if (!func_286())
	{
		return;
	}
	Var0.f_8 = 1105014447;
	Var0.f_11 = 1105014447;
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = 1433015236;
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = _create_var_string(2, "TRADER_CRIPPS_TITLE");
	Var0.f_3 = _create_var_string(2, sParam0);
	Var0.f_7 = iParam1;
	Var0.f_6 = -1734218699;
	Var0.f_8 = 1105014447;
	Var0.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 863036578;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_287(&Var0);
}

void func_158(int iParam0)
{
	if (!func_65((*Global_1134390)[&Global_1296859]->f_74, iParam0))
	{
		func_45(&((*Global_1134390)[&Global_1296859]->f_74), iParam0);
		Global_1134349->f_32 = (*Global_1134390)[&Global_1296859]->f_74;
	}
}

bool func_159(var uParam0)
{
	return func_288(*uParam0, 1);
}

int func_160(var uParam0)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	if (func_289(uParam0))
	{
		return uParam0->f_2;
	}
	return func_290(uParam0->f_1);
}

bool func_161()
{
	if (func_165(Global_1134349, -735397297, 1, 1, -489628648, -1, 1))
	{
		if (func_163(Global_1134349))
		{
			_0xca9e42f437625a85(Global_1134349->f_1, 1414815075, 151142181);
			func_153(&(Global_1134349->f_15), 1);
			return true;
		}
	}
	return false;
}

int func_162(int* iParam0)
{
	return func_291(iParam0->f_1);
}

bool func_163(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return func_178(func_293(iParam0, 0), bParam1, bParam2, iParam3, func_294(iParam0));
	}
	if (func_295(iParam0, bParam4) || func_296(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_294(iParam0) && (func_297(iParam0, &iVar0) || func_298(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_299(iParam0, -570078785);
		bVar2 = func_299(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_300())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_301(15) && func_299(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_165(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_302(&iParam1);
	if (func_292(iParam1))
	{
		return func_179(iParam0, func_293(iParam1, 1), 1, 1, iParam3, 0, iParam4, iParam5, func_294(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_303(iParam1, 1, 1) };
	if (func_304(iParam1, &iVar21))
	{
		return func_179(iParam0, iVar21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_305(iParam1))
	{
		if (!func_306(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, iParam3))
		{
			return false;
		}
	}
	else if (!func_307(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, iParam3, iParam4, iParam5, iParam6))
	{
		return false;
	}
	func_308(Var0);
	return true;
}

int func_166(int iParam0, int iParam1, bool bParam2)
{
	if (!func_309(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_310(&(Var0[iVar32])))
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

int func_167(int iParam0)
{
	iVar0 = -1;
	if (!func_310(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_303(iParam0, 0, 0) };
	Var6 = { func_92(iParam0, Var1, Var1.f_4, 0) };
	if (!func_311(&Var6))
	{
		return -1;
	}
	if (func_312(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_168(int iParam0, struct<17> Param1)
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

void func_169(int iParam0, bool bParam1)
{
	func_313(iParam0, &iVar0, &iVar1);
	if (!func_314(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_315(iVar0, iVar1);
}

int func_170(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_316(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_92(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_201(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_201(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_171(int iParam0)
{
	if ((*Global_1134390)[&Global_1296859]->f_74.f_5 != iParam0)
	{
		(*Global_1134390)[&Global_1296859]->f_74.f_5 = iParam0;
	}
}

void func_172(int iParam0)
{
	if (func_65((*Global_1134390)[&Global_1296859]->f_74, iParam0))
	{
		func_43(&((*Global_1134390)[&Global_1296859]->f_74), iParam0);
		Global_1134349->f_32 = (*Global_1134390)[&Global_1296859]->f_74;
	}
}

bool func_173(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_174(int iParam0, var uParam1)
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

int func_175(int iParam0)
{
	return func_317(iParam0);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

void func_177(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	bVar1 = func_183(iParam3, 2);
	bVar2 = func_319(iParam0, -570078785, bVar1);
	bVar3 = func_319(iParam0, -915411861, bVar1);
	if (func_319(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_320(iParam0, &iVar0) || func_321(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_300())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_301(15) && func_319(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_179(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_322(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_323(Var0);
	return true;
}

int func_180(int iParam0, int iParam1)
{
	if (!_0xef254f1a4c08b7e6(iParam0))
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	iVar4 = _0x3faa928a79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!_0x121d2005dd64496b(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28;
}

int func_182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28.f_1;
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_184(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_185()
{
	if (Global_1137047->f_339.f_16 == 0 || !_uilog_is_entry_registered(7, Global_1137047->f_339.f_16))
	{
		Global_1137047->f_339.f_16 = 0;
		return;
	}
	func_309(Global_1137047->f_339.f_16, Global_1137047->f_339.f_17, &Var2, &iVar0, 1, 0);
	iVar33 = 0;
	while (iVar33 < iVar0)
	{
		if (iVar33 >= 15)
		{
		}
		else
		{
			iVar34 = &Var2[iVar33];
			if (func_203(iVar34, 0))
			{
				iVar36 = func_324(iVar34, 0, 0, 0);
				sVar35 = _create_var_string(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var2[iVar33]->f_1, _create_var_string(0, iVar34));
				bVar37 = func_204(iVar34, Var2[iVar33]->f_1);
				if (bVar37)
				{
					iVar1++;
				}
				_uilog_add_or_update_objective(7, Global_1137047->f_339.f_16, iVar34, sVar35, bVar37, true, true);
			}
			iVar33++;
		}
	}
	sVar38 = _create_var_string(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar1, iVar0);
	_0x763637f9b838b0a7(7, Global_1137047->f_339.f_16, sVar38);
}

bool func_186(var uParam0, struct<2> Param1, var uParam3)
{
	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_325(Param1.f_1);
	if (!_0x7907969497ea92f5(uVar0) || !_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Global_1132288->f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_188(vector3 vParam0)
{
	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		_datafile_get_hash(&uVar5, &Var0);
	}
	return uVar5;
}

bool func_189(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

int func_190()
{
	return -1635525483;
}

bool func_191(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			iVar2 = get_player_ped(iVar1);
			if (func_326(iVar1) == 4)
			{
			}
			else if (vdist(vParam0, get_entity_coords(iVar2, false, false)) < Global_1901947->f_584)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_192(vector3 vParam0, bool bParam3)
{
	if (func_327(vParam0))
	{
		return true;
	}
	if (bParam3 >= 0 && bParam3 < 32)
	{
		iVar5 = (*Global_1134390)[bParam3]->f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_327((*Global_1131196)[iVar0]->f_20))
		{
			fVar1 = vdist((*Global_1131196)[iVar0]->f_20, vParam0);
			if (fVar1 <= Global_1901947->f_584.f_3)
			{
				return true;
			}
		}
		if (((Global_1131196->f_865[iVar0]->f_4 != iVar5 && (Global_1131196->f_865[iVar0]->f_1.f_2 > 0 || Global_1131196->f_865[iVar0]->f_1.f_2 < -2)) && &Global_1131196->f_865[iVar0] != -1) && &Global_1131196->f_865[iVar0] != 6)
		{
			if (func_77(Global_1131196->f_865[iVar0]->f_1, &vVar2) && !func_327(vVar2))
			{
				fVar1 = vdist(vVar2, vParam0);
				if (fVar1 <= Global_1901947->f_584.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_193(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65((*Global_1131196)[iParam0]->f_7, iParam1);
}

bool func_194(var uParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	iVar0 = _0x149a2751ab66ac02(iParam1);
	uVar1 = 50;
	if (*uParam0 < 4)
	{
		*uParam0 = 4;
	}
	else if (*uParam0 > 7)
	{
		*uParam0 = 7;
	}
	if (uParam0->f_2 == -2)
	{
		func_328(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_329(&uVar1);
	}
	else
	{
		iVar202 = get_random_int_in_range(0, 12);
		uParam0->f_1 = func_330(iVar202, 1);
		func_328(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_329(&uVar1);
	}
	*iParam3 = 0;
	iVar203 = 0;
	iVar204 = _0x4be6c13a45cca8ec(iParam1);
	if (func_331(*uParam0, iVar204, iVar0, bParam2))
	{
		iVar203 = 1;
	}
	else
	{
		*uParam4++;
	}
	return iVar203;
}

int func_195(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		if (iParam1 == 0)
		{
		}
		return 255;
	}
	return (*Global_1131196)[iParam0]->f_9;
}

bool func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

char* func_197()
{
	return "net_camp";
}

char* func_198()
{
	return "gfh_campworks";
}

void func_199(int iParam0)
{
	if ((network_is_player_active((*Global_1131196)[iParam0]->f_9) && network_is_player_a_participant((*Global_1131196)[iParam0]->f_9)) && network_is_participant_active(network_get_participant_index((*Global_1131196)[iParam0]->f_9)))
	{
		(*Global_1131196)[iParam0]->f_23.f_1 = uVar0;
		(*Global_1131196)[iParam0]->f_23 = uVar0;
		return;
	}
	if (_0xf6a8a652a6b186cd((*Global_1131196)[iParam0]->f_23.f_1))
	{
		_0xfdfecc6ee4491e11((*Global_1131196)[iParam0]->f_23.f_1);
	}
	if (_0xf6a8a652a6b186cd((*Global_1131196)[iParam0]->f_23))
	{
		_0xfdfecc6ee4491e11((*Global_1131196)[iParam0]->f_23);
	}
	(*Global_1131196)[iParam0]->f_23.f_1 = uVar0;
	(*Global_1131196)[iParam0]->f_23 = uVar0;
}

void func_200(var uParam0)
{
	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*uParam0 = { Var0 };
}

int func_201(bool bParam0)
{
	if (func_19() == -1)
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

struct<4> func_202()
{
	return Var0;
}

bool func_203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_204(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_332(iParam0);
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
			if (!func_333(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_334(iParam0))
			{
				return true;
			}
			break;
	}
	return func_324(iParam0, 0, 0, 0) >= iParam1;
}

int func_205(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_335(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

Vector3 func_206(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

bool func_207(int iParam0)
{
	return !func_113(iParam0, 8);
}

int func_208(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
}

bool func_209(int iParam0)
{
	return func_65(Global_1132288->f_2040, iParam0);
}

void func_210(int iParam0)
{
	Global_1132288->f_2045 = iParam0;
}

int func_211(vector3 vParam0, int iParam3)
{
	iVar0 = func_336();
	if (func_337(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_338(vParam0, iParam3);
}

int func_212(bool bParam0)
{
	if (bParam0)
	{
		return 97;
	}
	return 96;
}

int func_213(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_327(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_339(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_17081)
	{
		if (func_340(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_340(iVar0) == iParam1 && func_341(iVar0) == iParam0) && iVar2 == func_342(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_38(iVar1, iParam0);
		func_39(iVar1, iParam1);
		func_40(iVar1, iVar2);
		func_343(iVar1, iParam5);
		func_344(iVar1);
		set_blip_flash_timer(&(Global_17081[iVar1]), iParam1, func_345(iParam0, 0));
		return iVar1;
	}
	return -1;
}

int func_214(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -682748:
			if (bParam1)
			{
				if (bParam2)
				{
					return 807049026;
				}
				return 1877266410;
			}
			return -1609475916;
		case 1357161730:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1322315207;
				}
				return -690230539;
			}
			return -1621660129;
		case 1581179681:
			if (bParam1)
			{
				if (bParam2)
				{
					return 890534941;
				}
				return 353565276;
			}
			return -713543329;
		case -215258135:
			if (bParam1)
			{
				if (bParam2)
				{
					return -327090397;
				}
				return -1640183015;
			}
			return 321465645;
		case -987049424:
			if (bParam1)
			{
				if (bParam2)
				{
					return -901488938;
				}
				return 1203157087;
			}
			return 1280275183;
		case 892234183:
			if (bParam1)
			{
				if (bParam2)
				{
					return 157782508;
				}
				return -1431438421;
			}
			return 839992260;
		case -1554232707:
			if (bParam1)
			{
				if (bParam2)
				{
					return -1339543530;
				}
				return -2100701457;
			}
			return 1585227357;
		case 1538293636:
			if (bParam1)
			{
				if (bParam2)
				{
					return -897447261;
				}
				return -306961178;
			}
			return -706039225;
		case -1992167326:
			if (bParam1)
			{
				if (bParam2)
				{
					return -354997135;
				}
				return -2097555655;
			}
			return -1123163224;
		case -1884014371:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1543402390;
				}
				return 753475365;
			}
			return -864497764;
		case -1871413878:
			if (bParam1)
			{
				if (bParam2)
				{
					return 646196791;
				}
				return 1650238062;
			}
			return -743114058;
		case 1483778247:
			if (bParam1)
			{
				if (bParam2)
				{
					return 706692807;
				}
				return -61157504;
			}
			return 381776905;
		case -724534761:
			if (bParam1)
			{
				if (bParam2)
				{
					return 84763048;
				}
				return -61157504;
			}
			return 381776905;
		default:
			break;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return (func_193(iParam0, 16) && !func_193(iParam0, 32));
}

int func_216(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

struct<2> func_217(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_218(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_113(iParam0, iParam1))
	{
		func_45((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

void func_219(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (func_113(iParam0, iParam1))
	{
		func_43((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

void func_220(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_346(iParam0, 1);
}

void func_221(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_346(iParam0, 0);
}

void func_222(int iParam0)
{
	func_125(8);
	func_223(4);
	Var0.f_8 = iParam0;
	func_282(3, Var0, func_347(0, 8));
}

void func_223(int iParam0)
{
	func_45(&(Global_1137047->f_8), iParam0);
}

bool func_224(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1132288->f_1[iParam0]->f_61, iParam1);
}

void func_225(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	if (!func_348(vVar0, &(Global_1132288->f_1[iParam0]->f_7), &(Global_1132288->f_1[iParam0]->f_47)))
	{
	}
	if (!func_349(vVar0, &(Global_1132288->f_1[iParam0]->f_10), &(Global_1132288->f_1[iParam0]->f_48)))
	{
	}
}

void func_226(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_350(vVar0, iVar3, Global_1132288->f_1[iParam0]->f_13[iVar3], Global_1132288->f_1[iParam0]->f_49[iVar3]))
		{
		}
		iVar3++;
	}
}

void func_227(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	if (!func_351(vVar0, &(Global_1132288->f_1[iParam0]->f_35), &(Global_1132288->f_1[iParam0]->f_57)))
	{
	}
}

void func_228(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	if (!func_352(vVar0, &(Global_1132288->f_1[iParam0]->f_38), &(Global_1132288->f_1[iParam0]->f_58)))
	{
	}
}

void func_229(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	if (!func_353(vVar0, &(Global_1132288->f_1[iParam0]->f_41), &(Global_1132288->f_1[iParam0]->f_59)))
	{
	}
}

void func_230(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	if (!func_354(vVar0, &(Global_1132288->f_1[iParam0]->f_44), &(Global_1132288->f_1[iParam0]->f_60)))
	{
	}
}

void func_231(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_65(Global_1132288->f_1[iParam0]->f_61, iParam1))
	{
		func_45(&(Global_1132288->f_1[iParam0]->f_61), iParam1);
	}
}

void func_232(int iParam0, int iParam1)
{
	if (func_74(iParam0))
	{
		Global_1132288->f_1[iParam0]->f_4 = iParam1;
	}
}

bool func_233(int iParam0)
{
	if (network_is_script_active(func_197(), iParam0, true, 0))
	{
		return true;
	}
	if (_does_thread_exist(Global_1132288->f_2055) || is_thread_active(Global_1132288->f_2055, false))
	{
		return false;
	}
	if (get_number_of_free_stacks_of_this_size(6700) <= 0)
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_355(iParam0) };
	request_script(func_197());
	if (!has_script_loaded(func_197()))
	{
		return false;
	}
	Global_1132288->f_2055 = start_new_script_with_args(func_197(), &vVar0, 4, 6700);
	Global_1132288->f_2056 = iParam0;
	set_script_as_no_longer_needed(func_197());
	return true;
}

bool func_234(int iParam0)
{
	if (network_is_script_active(func_198(), iParam0, true, 0))
	{
		return true;
	}
	if (_does_thread_exist(Global_1132288->f_2057) || is_thread_active(Global_1132288->f_2057, false))
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_355(iParam0) };
	if (get_number_of_free_stacks_of_this_size(3081) <= 0)
	{
		return false;
	}
	request_script(func_198());
	if (!has_script_loaded(func_198()))
	{
		return false;
	}
	Global_1132288->f_2057 = start_new_script_with_args(func_198(), &vVar0, 4, 3081);
	Global_1132288->f_2058 = iParam0;
	set_script_as_no_longer_needed(func_198());
	return true;
}

void func_235(var uParam0)
{
	*uParam0 = uVar0;
}

int func_236(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0 && Global_1131196[iVar0] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_237(int iParam0)
{
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_38.f_3 = iParam0;
}

struct<19> func_238(bool bParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_92(-1838434463, func_91(1), 1084182731, 1) };
	if (!_0xb881ca836cc4b6d4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_201(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_239()
{
	return Global_1102219->f_3672;
}

void func_240(struct<2> Param0, var uParam2)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_65, func_357(Param0.f_1, 0));
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_66, _create_var_string(2, "NM_CAMP_SIZE_VALUE", Param0));
	_databinding_write_data_int(Global_1940311->f_1433.f_54.f_67, func_358(Param0));
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = _0x81d7183e7a8eca72(&(Global_1940311->f_1433.f_2643.f_49[iVar0]));
		_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_49[iVar0]->f_1.f_21, iVar1 == Param0.f_1);
		iVar0++;
	}
}

bool func_241(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_359(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_239())
	{
		return func_359(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_359(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	if ((!func_360() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_42(16))
	{
		return false;
	}
	if (func_56())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_361())
	{
		return false;
	}
	if (func_30(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_65(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_362())
	{
		return false;
	}
	return true;
}

bool func_243()
{
	return func_65(Global_1137047->f_8, 2);
}

bool func_244(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_242(0, 1))
	{
		return false;
	}
	(*Global_1134390)[network_player_id_to_int()]->f_33 = { vParam0 };
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_247();
	if (iParam3 == 1)
	{
		func_134(2);
	}
	else
	{
		Global_1137047->f_330.f_6 = 1;
		func_363(2);
	}
	if (!func_76(network_player_id_to_int()))
	{
		func_363(8);
		func_18();
	}
	if (!func_122(4) && (func_122(8) || func_122(16)))
	{
		func_134(4);
	}
	else
	{
		func_363(4);
	}
	if (func_65(Global_1137047->f_8, 1))
	{
		func_134(1);
	}
	else
	{
		func_363(1);
	}
	func_63(6);
	return true;
}

bool func_245(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_364(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

bool func_246(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_365())
	{
		return false;
	}
	if (func_366(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_242(iParam3, 1))
	{
		return false;
	}
	if (func_117())
	{
		return false;
	}
	if (func_42(64))
	{
		if (!func_368(func_367(Param0), 1, 59806960))
		{
			return false;
		}
	}
	return true;
}

void func_247()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_248(vector3 vParam0)
{
	Global_17411.f_55.f_4 = vParam0.x;
	Global_17411.f_55.f_4.f_1 = vParam0.y;
	Global_17411.f_55.f_4.f_2 = vParam0.z;
	if (!func_204(-1838434463, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_115() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_369(vParam0, 1) == -1)
		{
		}
	}
}

int func_249()
{
	return -1727708451;
}

void func_250(vector3 vParam0)
{
	(*Global_1134390)[func_239()]->f_38.f_4 = { vParam0 };
}

void func_251(int iParam0)
{
	(*Global_1134390)[func_239()]->f_38.f_11 = iParam0;
}

int func_252(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_10;
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 > 7)
	{
		return;
	}
	if ((_0xd6f6acf4392187fb(iParam0) && _0x0f99f6436528a089(iParam0)) && _0x4be6c13a45cca8ec(iParam0) == player_id())
	{
		if (_0x853b0fa4d8732c57(iParam0) == iParam1)
		{
			return;
		}
		_0x833d8268d51b4522(iParam1);
	}
}

int func_254()
{
	return &Global_1902818;
}

void func_255()
{
	if (Global_1132288->f_2048 < 10)
	{
		Global_1132288->f_2048++;
	}
	else
	{
		Global_1132288->f_2048 = 0;
		iVar0 = player_id();
		iVar1 = func_216(iVar0);
		if (iVar1 >= 0 && iVar1 <= 31)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < (*Global_1134390)[iVar0]->f_38)
			{
				if (&(*Global_1131196)[iVar1]->f_10[iVar2] == iVar0)
				{
					bVar3 = true;
				}
				else
				{
					iVar2++;
				}
			}
			if (bVar3)
			{
				if (iVar2 != (*Global_1134390)[iVar0]->f_38.f_7)
				{
					func_370(iVar2, *Global_1132288->f_1[iVar1]->f_13[iVar2]);
					func_31(16384);
				}
				else if (func_42(8192))
				{
					func_370(iVar2, *Global_1132288->f_1[iVar1]->f_13[iVar2]);
					func_31(16384);
					func_28(8192);
				}
			}
		}
	}
}

void func_256(int iParam0)
{
	if (Global_1132288->f_2027.f_5 == 0)
	{
		return;
	}
	if (!func_42(64))
	{
		if (Global_1132288->f_2027.f_5 != 0)
		{
			func_128(0);
		}
	}
	else if (func_74(iParam0))
	{
		vVar0 = { (*Global_1131196)[iParam0]->f_1 };
	}
	else if (Global_1132288->f_2027.f_5 != 0)
	{
		func_128(0);
	}
	switch (Global_1132288->f_2027.f_5)
	{
		case 1:
			iVar3 = func_367(vVar0.x);
			if (!func_368(iVar3, 1, 59806960))
			{
				func_127();
				func_128(0);
			}
			else
			{
				func_128(2);
			}
			break;
		case 2:
			iVar3 = func_367(vVar0.x);
			if (!func_371(Global_1132288->f_2027.f_6))
			{
				Global_1132288->f_2027.f_6 = func_372(iVar3, "NET_CAMP_PC", 1, 1, 0, 59806960);
				func_128(3);
			}
			break;
		case 3:
			if (!func_371(Global_1132288->f_2027.f_6))
			{
				func_373(iParam0);
				func_128(0);
			}
			break;
	}
}

void func_257(int iParam0, int iParam1, var uParam2, var uParam3)
{
	iVar1 = func_254();
	switch (Global_1132288->f_2027.f_7)
	{
		case 0:
			if (!func_42(64))
			{
				func_118(4);
				return;
			}
			if ((*Global_1131196)[iParam0]->f_9 == player_id() && Global_1132288->f_2027.f_4 != -15)
			{
				if (func_374(iVar1) != func_374(Global_1132288->f_2027.f_4))
				{
					if (func_375(iVar1) >= func_375(Global_1132288->f_2027.f_4))
					{
						func_118(1);
					}
				}
			}
			break;
		case 1:
			iVar0 = func_376(iParam1);
			if (func_368(iVar0, 1, 59806960))
			{
				if (!func_371(Global_1132288->f_2027.f_8))
				{
					func_381(&(Global_1132288->f_2027.f_4), func_377(iVar1), func_378(iVar1), func_375(iVar1), func_374(iVar1), func_379(iVar1), func_380(iVar1));
					Global_1132288->f_2027.f_8 = func_372(iVar0, "NET_CAMP_DC", 1, 1, 0, 59806960);
					func_118(2);
				}
			}
			else
			{
				func_137("NET_CAMP_DF", 10000, 0, 0, 0, 1);
				func_118(3);
			}
			break;
		case 2:
			if (!func_371(Global_1132288->f_2027.f_8))
			{
				func_118(0);
			}
			break;
		case 3:
			iVar0 = func_376(iParam1);
			if (func_368(iVar0, 1, 59806960) && !func_371(Global_1132288->f_2027.f_8))
			{
				func_118(1);
			}
			break;
		case 4:
			if (func_42(64))
			{
				Global_1132288->f_2027.f_4 = iVar1;
				func_118(0);
			}
			break;
	}
}

void func_258(int iParam0)
{
	if (*Global_1131196)[iParam0]->f_9 != player_id()
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	if ((*Global_1134390)[iVar0]->f_38.f_28 != Global_1137047->f_339)
	{
		(*Global_1134390)[iVar0]->f_38.f_28 = Global_1137047->f_339;
	}
	_0x86a68e84e5884951(&Var1);
	if ((get_frame_count() % 60) == 0)
	{
		iVar8 = func_382();
		iVar9 = func_383();
		if (iVar8 != 255)
		{
			if ((!network_is_player_active(iVar8) || _0x901e0dc25080c8b9(iVar8) != _0x901e0dc25080c8b9(player_id())) || (iVar9 != -1 && (get_game_timer() - iVar9) > 5000))
			{
				func_384(player_id(), 1);
			}
		}
	}
	if (Global_1137047->f_339.f_2 != -1 && !func_385(Var1, Global_1137047->f_339.f_2))
	{
		return;
	}
	Var10.f_3 = 2;
	Var10.f_4 = 24;
	_0x28eeace9b43d9597(&Var1, &Var10, &Var1);
	Global_1137047->f_339.f_2 = { Var1 };
	Var17 = { func_386(-1591664384, -1591664384, 0, 0, 0, 0, -1, -2011345500, 0) };
	if (func_387(Var17, &iVar27, &iVar28, 0))
	{
		iVar29 = get_random_int_in_range(0, iVar28);
		iVar30 = func_388(iVar29, iVar27);
		if (iVar30 == func_181(iVar0))
		{
			iVar29 = func_389(0, iVar28, iVar29);
			iVar30 = func_388(iVar29, iVar27);
		}
		func_390(iVar0, iVar30);
		func_391(iVar27);
	}
}

void func_259(int iParam0)
{
	if (*Global_1131196)[iParam0]->f_9 != player_id()
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	if ((*Global_1134390)[iVar0]->f_38.f_28.f_1 != Global_1137047->f_339.f_1)
	{
		(*Global_1134390)[iVar0]->f_38.f_28.f_1 = Global_1137047->f_339.f_1;
	}
	_0x86a68e84e5884951(&Var1);
	if (Global_1137047->f_339.f_9 == -1 || !func_385(Var1, Global_1137047->f_339.f_9))
	{
		return;
	}
	Global_1137047->f_339.f_9 = -1;
	(*Global_1134390)[iVar0]->f_38.f_28.f_1 = 1046181202;
	Global_1137047->f_339.f_1 = 1046181202;
}

bool func_260()
{
	return Global_1896738->f_382;
}

char* func_261(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_392(iVar0);
}

char* func_262(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_393(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_263()
{
	return func_204(-428390721, 1);
}

void func_264(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947->f_584.f_9)
	{
		iParam0 = Global_1901947->f_584.f_9;
	}
	if ((*Global_1134390)[&Global_1296859]->f_74.f_2 != iParam0)
	{
		(*Global_1134390)[&Global_1296859]->f_74.f_2 = iParam0;
	}
}

void func_265(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901947->f_584.f_10)
	{
		iParam0 = Global_1901947->f_584.f_10;
	}
	if ((*Global_1134390)[&Global_1296859]->f_74.f_3 != iParam0)
	{
		(*Global_1134390)[&Global_1296859]->f_74.f_3 = iParam0;
	}
}

int func_266()
{
	iVar0 = 0;
	if (func_204(-1490861779, 1))
	{
		iVar0 = -1490861779;
	}
	else if (func_204(1476279059, 1))
	{
		iVar0 = 1476279059;
	}
	else if (func_204(913131737, 1))
	{
		iVar0 = 913131737;
	}
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (_0xd6f6acf4392187fb(iVar1))
	{
		if (_0x0f99f6436528a089(iVar1))
		{
			iVar2 = _0x4be6c13a45cca8ec(iVar1);
			if (network_is_player_active(iVar2))
			{
				iVar3 = iVar2;
				iVar0 = (*Global_1134390)[iVar3]->f_38.f_12.f_2;
			}
		}
	}
	return iVar0;
}

void func_267(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1901947->f_584.f_10)
	{
		iParam0 = 0;
	}
	if ((*Global_1134390)[&Global_1296859]->f_74.f_4 != iParam0)
	{
		(*Global_1134390)[&Global_1296859]->f_74.f_4 = iParam0;
	}
}

int func_268(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_2;
}

int func_269(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_3;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 1237770824:
			return -2059491326;
		case -858567048:
			return -2054061821;
		case 529305859:
			return -2054061821;
		case -725003445:
			return -276530555;
		case -407659715:
			return -276530555;
		case 967601061:
			return 1786362058;
		case 895033262:
			return 1786362058;
		case -1424697962:
			return -1925097470;
		case -1643384846:
			return -1925097470;
		case 915880986:
			return -1925097470;
		case -738999731:
			return -179784009;
		case 566023444:
			return -179784009;
		case -1956973834:
			return -179784009;
		case -593311590:
			return -549843543;
		case 765085831:
			return -549843543;
		case 2094730711:
			return -549843543;
		case -662726703:
			return 547453549;
		case 1760886130:
			return 547453549;
		case -847420802:
			return 547453549;
		case 1988467099:
			return -185670568;
		case -674590015:
			return -185670568;
		case -1243653490:
			return -185670568;
		case 1432949803:
			return -68530554;
		case 563848610:
			return -68530554;
		case -1457420231:
			return -68530554;
		case 924882045:
			return -1882667332;
		case 1415608202:
			return -1882667332;
		case -1480423460:
			return -1882667332;
		case -1188120304:
			return -549843543;
		case 1978734761:
			return -549843543;
		case -1814593136:
			return -549843543;
		case -983831788:
			return 251523924;
		case -2120099592:
			return 251523924;
		case 1848456619:
			return 251523924;
		case 992366796:
			return 128689452;
		case -244657613:
			return 128689452;
		case -1310590179:
			return 128689452;
		case -1252472243:
			return -795926005;
		case -980016656:
			return -795926005;
		case -2026210939:
			return -795926005;
		case -1969404854:
			return 1766735806;
		case 1948158930:
			return 1766735806;
		case 183958842:
			return 1766735806;
		case 905173572:
			return -1260301848;
		case -1323780599:
			return -1260301848;
		case -532099639:
			return -1260301848;
		case -2139551030:
			return 362062697;
		case 1607144310:
			return 362062697;
		case -758005668:
			return 362062697;
		case -832850511:
			return -557557374;
		case -1586332975:
			return -557557374;
		case 1857501916:
			return -557557374;
		case -867655342:
			return 2145928766;
		case 991092621:
			return 2145928766;
		case 80093385:
			return 2145928766;
		case 1626949878:
			return 2103138183;
		case -1722483116:
			return 2103138183;
		case 871746664:
			return 2103138183;
		case -161524199:
			return 1176634776;
		case 156979555:
			return 1176634776;
		case -1739474417:
			return 1176634776;
		case -1888757291:
			return -48308129;
		case 995863399:
			return -48308129;
		case 894877715:
			return -48308129;
		case 1310120320:
			return -234392368;
		case -1228376431:
			return -234392368;
		case 322141256:
			return -234392368;
		case 59384454:
			return 489332694;
		case -110353515:
			return 489332694;
		case -1905834457:
			return 489332694;
		case -1837840093:
			return -972505668;
		case 58634176:
			return -972505668;
		case 472142656:
			return -972505668;
		case 1001171791:
			return -1482721140;
		case 1210345318:
			return -1482721140;
		case 1023080408:
			return -1482721140;
		case -1422869557:
			return 1943206759;
		case -1378812236:
			return 1943206759;
		case 399553313:
			return 1943206759;
		case 651035143:
			return -479944273;
		case 2013022756:
			return -479944273;
		case 1011003885:
			return -479944273;
		case -1490884871:
			return -1900245017;
		case 306916738:
			return 996737485;
		case 724563284:
			return -317318063;
		case 1917027383:
			return -1179145184;
		case -855052577:
			return 49841414;
		case -5376850:
			return 1853004765;
		case 1338219162:
			return -613244561;
		case -1538397860:
			return 998459086;
		case 193037129:
			return -1185304294;
		case 1416872916:
			return 1606770041;
		case 1500919793:
			return 592705199;
		case 1042542561:
			return 1001427351;
		case 1570826681:
			return -2134757665;
		case 56657913:
			return 1296165525;
		case 877935135:
			return -1389099466;
		case -39646495:
			return -1389099466;
		case -1186289527:
			return -1389099466;
		case -1882344824:
			return 2032362047;
		case -1134447619:
			return 2032362047;
		case -1640704323:
			return 2032362047;
		case -246542229:
			return -600158588;
		case -529454751:
			return -600158588;
		case 1582593525:
			return -600158588;
		case -1347000030:
			return -348997013;
		case -505583391:
			return -348997013;
		case -46978629:
			return -348997013;
		case -1559227925:
			return -855155400;
		case 1562528937:
			return -855155400;
		case 1645887374:
			return -855155400;
		case -1440794801:
			return 1743453709;
		case 2144711797:
			return 1743453709;
		case -1471526136:
			return 1743453709;
		case 2105263879:
			return -1910050550;
		case -905842006:
			return -1910050550;
		case 718825539:
			return -1910050550;
		case 1613453781:
			return -1634769991;
		case -1030182399:
			return -1634769991;
		case 1191274340:
			return -1634769991;
		case -1060737769:
			return 556997951;
		case 553310445:
			return 556997951;
		case 987967309:
			return 556997951;
		case 1418092959:
			return 727714355;
		case -1315697778:
			return 727714355;
		case -1838865945:
			return 727714355;
		case -1464585113:
			return -71380070;
		case -610456424:
			return -71380070;
		case -284151822:
			return -71380070;
		case -1670544626:
			return -729503995;
		case 1290960696:
			return -729503995;
		case -266273535:
			return -729503995;
		case 1717601520:
			return 1786644138;
		case 430397370:
			return 1786644138;
		case 1913571052:
			return 1786644138;
		case -1356230367:
			return -1466769106;
		case 1417331079:
			return -1466769106;
		case 16287711:
			return -1466769106;
		case 1884610748:
			return -2079514583;
		case 746558492:
			return -2079514583;
		case -884124246:
			return -2079514583;
		case -2040522845:
			return -409309194;
		case -1224510844:
			return -409309194;
		case -892811627:
			return -409309194;
		case 339620522:
			return 2020893799;
		case 1770451033:
			return 2020893799;
		case 1334837390:
			return 2020893799;
		case -245335326:
			return 195131818;
		case -1999212658:
			return 195131818;
		case -593435395:
			return 195131818;
		case -935543049:
			return 1445465787;
		case 1772544356:
			return 1445465787;
		case -1772126340:
			return 1445465787;
		case 862898895:
			return -1817406451;
		case 756657535:
			return -1817406451;
		case 1997845858:
			return -1817406451;
		case 1846915545:
			return 1521192478;
		case -1816929509:
			return 1521192478;
		case -1930144509:
			return 1521192478;
		case -1017987135:
			return -1517999735;
		case 2058475216:
			return -1517999735;
		case -1726572562:
			return -1517999735;
		case -1866642239:
			return -2084641708;
		case -1508120809:
			return -2084641708;
		case 1197831625:
			return -2084641708;
		case 434924608:
			return -1125378664;
		case 1666393029:
			return -1125378664;
		case -1007681885:
			return -1125378664;
		case 1761263432:
			return 708951363;
		case -1788506246:
			return 708951363;
		case -1909348309:
			return 708951363;
		case -1015531226:
			return 714611525;
		case -581619522:
			return 714611525;
		case -824902132:
			return 714611525;
		case -545447034:
			return 1699761828;
		case -1824684934:
			return 1699761828;
		case -861854914:
			return 1699761828;
		case -1290897778:
			return -158140634;
		case -350704687:
			return -158140634;
		case 765892430:
			return -158140634;
		case -1011598664:
			return 1272884971;
		case -177476569:
			return 1272884971;
		case 980653387:
			return 1272884971;
		case 1925728375:
			return -1552076723;
		case -1080457688:
			return -1552076723;
		case 416630124:
			return -1552076723;
		case -899751553:
			return -334414989;
		case 1742676369:
			return -334414989;
		case 431501574:
			return -334414989;
		case 1489051752:
			return -352732121;
		case -1705499323:
			return -352732121;
		case 2126795269:
			return -352732121;
		case 102446365:
			return 117556329;
		case -1927342740:
			return 117556329;
		case -2013445740:
			return 117556329;
		case 1323485831:
			return 469453151;
		case -914779013:
			return 469453151;
		case -365111821:
			return 469453151;
		case -1073614594:
			return 621465116;
		case -410900360:
			return 621465116;
		case 2060013792:
			return 621465116;
		case 748665395:
			return -523607607;
		case 351048413:
			return -523607607;
		case 441195430:
			return -523607607;
		case -581931638:
			return 1662628197;
		case -1528265128:
			return 1662628197;
		case 581032175:
			return 1662628197;
		case 157917500:
			return 2084847747;
		case -936537044:
			return 2084847747;
		case 101495387:
			return 2084847747;
		case -100913452:
			return 1656226638;
		case 72307351:
			return 1656226638;
		case -318217782:
			return 1656226638;
		case 313332607:
			return -1608525320;
		case -1867587109:
			return -1608525320;
		case 182158309:
			return -1608525320;
		case 444160793:
			return 1717540687;
		case 1205453831:
			return 1717540687;
		case 1815539745:
			return 1717540687;
		case -124539232:
			return 1622797153;
		case -2123600216:
			return 1622797153;
		case -146690338:
			return 1622797153;
		case -1836227998:
			return -252750557;
		case 619479575:
			return -252750557;
		case -1610329427:
			return -252750557;
		case -929322235:
			return 513869240;
		case -548076717:
			return 513869240;
		case -1444929945:
			return 513869240;
		case 493457089:
			return -482152318;
		case -479485786:
			return -482152318;
		case -281211381:
			return -482152318;
		case 1641833719:
			return -329015022;
		case -314933180:
			return -329015022;
		case 27838955:
			return -329015022;
		case -843795569:
			return 340488205;
		case 1496267371:
			return 340488205;
		case -1403731492:
			return 340488205;
		case 718631967:
			return 1228602887;
		case -1394561808:
			return -1749311280;
		case 2057052401:
			return -770230168;
		case 1712162117:
			return -1761903019;
		case -1947512511:
			return -202898890;
		case -940597120:
			return -324172879;
		case 329729070:
			return 221026557;
		case 1577881214:
			return 2055874470;
		case 452896739:
			return 1383597214;
		case 1235898535:
			return -695920779;
		case 544782507:
			return 1864240538;
		case 1761014306:
			return 135251025;
		case 376217292:
			return -1380974753;
		case 833141409:
			return 1918940015;
		case -2048623764:
			return 1606360364;
		case 844750136:
			return 949154977;
		case 1844178035:
			return 1327585677;
		case -31982783:
			return -424223638;
		case -222563712:
			return -817814915;
		case -1240764968:
			return 1324361660;
		case -1765601:
			return -1740875511;
		case -1067479455:
			return -1114206422;
		case 1607779195:
			return 1129016218;
		case -2068566007:
			return 74265533;
		case -691071886:
			return -1687205102;
		case 511857907:
			return -2112352640;
		case 945172939:
			return -1179922595;
		case -1181539987:
			return -1777044066;
		case -832559263:
			return -427774472;
		case -902591026:
			return -862133853;
		case 1462133097:
			return -153093028;
		case 2085530337:
			return 1961151934;
		case 1017109217:
			return -1429428300;
		case 1374722424:
			return 641025903;
		case 800967980:
			return 1014343203;
		case -661323467:
			return -977684174;
		case -1397737565:
			return 753992067;
		case 1360914301:
			return 975102591;
		case -1764134917:
			return -742266708;
		case 1252810290:
			return 1002050200;
		case -1618402788:
			return 970250315;
		case -1065098050:
			return 913562114;
		case 1503728435:
			return 1415886451;
		case 281887510:
			return 1244458697;
		case -164081697:
			return 322165109;
		case -1161319399:
			return -2083991045;
		case -1625078531:
			return 709722347;
		case 1806153689:
			return 709722347;
		case -802026654:
			return 709722347;
		case -1475338121:
			return 2068018854;
		case -1243878166:
			return 2068018854;
		case -2102079544:
			return 2068018854;
		case 361430638:
			return 144513283;
		case -1726837022:
			return 144513283;
		case 27448453:
			return 144513283;
		case -463248330:
			return -78603574;
		case 959196213:
			return -78603574;
		case -467109021:
			return -78603574;
		case 1292673537:
			return 956393401;
		case 957520252:
			return 956393401;
		case 143941906:
			return 956393401;
		case 663376218:
			return -1604538436;
		case 1083865179:
			return -1604538436;
		case 1490032862:
			return -1604538436;
		case -2059726619:
			return -1583116953;
		case -1569450319:
			return -1583116953;
		case 854596618:
			return -1583116953;
		case 1795984405:
			return 1995645004;
		case 1796037447:
			return 1995645004;
		case -476045512:
			return 1995645004;
		case -1858513856:
			return 439094686;
		case 1248540072:
			return 439094686;
		case 2116849039:
			return 439094686;
		case -702790226:
			return 1069834732;
		case 1603936352:
			return 1069834732;
		case -868657362:
			return 1069834732;
		case -237756948:
			return -1508151163;
		case -1730060063:
			return -1508151163;
		case -591117838:
			return -1508151163;
		case -53270317:
			return 854098596;
		case 9293261:
			return 854098596;
		case -336086818:
			return 854098596;
		case -1791452194:
			return 1467162138;
		case 1914602340:
			return 1467162138;
		case 459744337:
			return 1467162138;
		case -845037222:
			return 1322026128;
		case 334093551:
			return 1322026128;
		case 1150594075:
			return 1322026128;
		case -794277189:
			return 711086189;
		case -1558096473:
			return 711086189;
		case 1150939141:
			return 711086189;
		case -1035515486:
			return -1334624683;
		case -662178186:
			return -1334624683;
		case -1827027577:
			return -1334624683;
		case -1332163079:
			return 2118150058;
		case 2053771712:
			return 2118150058;
		case 1181652728:
			return 2118150058;
		case 500722008:
			return 1889550255;
		case 1647012424:
			return 1889550255;
		case 238733925:
			return 1889550255;
		case -1648383828:
			return 1684561350;
		case 699990316:
			return 1684561350;
		case 1710714415:
			return 1684561350;
		case 463481876:
			return 1763709491;
		case 2136062430:
			return 1763709491;
		case 95044528:
			return 1763709491;
		case 1677266727:
			return 1828340319;
		case -2066910871:
			return 1828340319;
		case 1204918860:
			return 1828340319;
		case 1963510418:
			return 344414895;
		case -99092070:
			return 344414895;
		case -1379330323:
			return 344414895;
		case -217731719:
			return -1875079046;
		case 1868576868:
			return -1875079046;
		case 1636891382:
			return -1875079046;
		case 2022921849:
			return -1273558742;
		case -1912460485:
			return -1273558742;
		case -771861010:
			return -1273558742;
		case 659601266:
			return -839975185;
		case 462348928:
			return -839975185;
		case 1208128650:
			return -839975185;
		case -475820303:
			return -401745683;
		case 1627318551:
			return -401745683;
		case 416535067:
			return -401745683;
		case 1969175294:
			return -2096730839;
		case 1584468323:
			return -2096730839;
		case -395646254:
			return -2096730839;
		case -1102272634:
			return 1871609823;
		case -308965548:
			return 1871609823;
		case -57190831:
			return 1871609823;
		case -1544126829:
			return -1028335922;
		case -983605026:
			return -1028335922;
		case 554578289:
			return -1028335922;
		case -923552142:
			return 172698521;
		case 1340414242:
			return 172698521;
		case 149018327:
			return 172698521;
		case -305970307:
			return 212330241;
		case 1992476687:
			return 212330241;
		case -1178296218:
			return 212330241;
		case -269786196:
			return -555536739;
		case -378416954:
			return -555536739;
		case -409451878:
			return -555536739;
		case 1466150167:
			return -1896091463;
		case 1729948479:
			return -1896091463;
		case -1317365569:
			return -1896091463;
		case 119626970:
			return 1854095100;
		case -1731566944:
			return 1854095100;
		case 1925227409:
			return 1854095100;
		case 624262971:
			return 1690246594;
		case 1681193300:
			return 1690246594;
		case 1126133763:
			return 1690246594;
		case -1610025835:
			return -885435577;
		case 995830478:
			return -885435577;
		case -896290892:
			return -885435577;
		case 653400939:
			return -1923252111;
		case 85441452:
			return -1923252111;
		case 1145777975:
			return -1923252111;
		case 2016225967:
			return -470304000;
		case 1637109059:
			return -1074986502;
		case 2093098109:
			return -1042059910;
		case -884176343:
			return 1234479911;
		case -800510665:
			return -591134272;
		case 252433530:
			return 2092024647;
		case 236757114:
			return -1902618794;
		case -827518870:
			return -330669109;
		case 1367447057:
			return -578894284;
		case -2092697195:
			return -1884018016;
		case -2043601589:
			return 2049850175;
		case 1758585485:
			return -1949114744;
		case 1527400190:
			return -710315468;
		case 1493601140:
			return 1242869591;
		case -885592109:
			return -1170632889;
		case -1282621313:
			return -393778206;
		case -70954328:
			return 110440596;
		case -1378208045:
			return -672378045;
		case 1450608653:
			return -364251138;
		case 1543592331:
			return 1729475114;
		case 1842740532:
			return 963696353;
		case 2004357248:
			return -2103416513;
		case -229670230:
			return 1438015400;
		case 546758456:
			return -1954723019;
		case 1888419655:
			return 906666065;
		case -2040849706:
			return 2129552482;
		case 2014346813:
			return 559753509;
		case -1638839614:
			return 865783200;
		case 1705186999:
			return 393871699;
		case -1821314478:
			return 683975656;
		case -1434083213:
			return -99694979;
		case 1785697286:
			return 1870161468;
		case 1891164848:
			return -637307085;
		case -1283104686:
			return -1156529631;
		case -1182590809:
			return 1590950150;
		case 1011908603:
			return 1619300873;
		case 1202949852:
			return -64299595;
		case -1220574585:
			return -1836028969;
		case 1739856087:
			return 85710394;
		case -1932727774:
			return -1655807359;
		case 258865203:
			return -1962643264;
		case 1097274212:
			return 232569057;
		case 448991078:
			return 1199221978;
		case -1624242931:
			return -1797419634;
		case -1924159110:
			return 2065655105;
		case -1621144167:
			return 1825917101;
		case -1061253029:
			return 1593945350;
		case 1181154860:
			return -1224696681;
		case 1418435161:
			return -1575718189;
		case 1511236969:
			return 793611591;
		case 121494806:
			return 902257336;
		case -251416414:
			return -364133422;
		case -1787430524:
			return -605083879;
		case -260181673:
			return 732434481;
		case -1087205695:
			return -700390032;
		case -857265622:
			return -932263476;
		case -1572330336:
			return 751785819;
		case -1249752300:
			return -1395009678;
		case -940052481:
			return -633621963;
		case -308200059:
			return -853038002;
		case -1218522879:
			return -618837959;
		case 923422806:
			return -1297877177;
		case 832214437:
			return 1827754323;
		case 397926876:
			return 2134308318;
		case 219794592:
			return 1349228616;
		case -1061362634:
			return 1303473658;
		case 1728819413:
			return 394330510;
		case 1009802015:
			return 1244718829;
		case -420237085:
			return 115722091;
		case -1195518864:
			return -183098420;
		case -159428614:
			return 2055286420;
		case 1276143905:
			return -2037558216;
		case -1262044528:
			return -1798573899;
		case -963027403:
			return 872099605;
		case 739090883:
			return -874157148;
		case 1043121665:
			return 346258719;
		case -634716689:
			return -427089681;
		case 2088901891:
			return 839022204;
		case 836208559:
			return 999131546;
		case 1600479946:
			return 1300573577;
		case -675142890:
			return 1144711679;
		case -906131571:
			return 878987858;
		case -591844128:
			return 708589058;
		case -1946740647:
			return 700750583;
		case -1548204069:
			return -1885772129;
		case -907373381:
			return 2094711074;
		default:
			break;
	}
	return 0;
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return func_395(func_394(iParam0), iParam1);
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

bool func_272()
{
	return Global_1146212->f_21645[64]->f_208;
}

bool func_273(int iParam0)
{
	if (func_396())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_274(int iParam0)
{
	iVar0 = func_268(iParam0);
	if (iVar0 < 2500)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_275(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 2;
	}
	return func_397((*Global_1134390)[iVar0]->f_38.f_28.f_1);
}

int func_276(int iParam0)
{
	if (func_155(iParam0, 64))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_277(int iParam0)
{
	iVar0 = func_269(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_4;
}

bool func_279()
{
	if (func_398(11, func_216(player_id()), &vVar0, &uVar3, 0))
	{
		if (does_entity_exist(Global_34))
		{
			if (func_399(Global_34, vVar0, 1) > 9f)
			{
				return false;
			}
		}
	}
	if (is_hud_hidden())
	{
		return false;
	}
	if (is_cinematic_cam_rendering())
	{
		return false;
	}
	if (func_400())
	{
		return false;
	}
	if (func_401())
	{
		return false;
	}
	if (func_155(&Global_1296859, 8192) == 0)
	{
		return false;
	}
	return true;
}

bool func_280(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_281(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_203(iParam1, 0))
	{
		if (func_271(iParam1, 173360570) || _0x245d07651b1d183b(iParam1, 4))
		{
			func_158(-2147483648);
		}
	}
	if (network_is_player_active(player_id()) && !_0x424b17a7dc5c90bc(player_id()))
	{
		if (bParam3)
		{
			func_402(iParam1, iParam2);
		}
		func_403(iParam1, iParam2);
		return true;
	}
	iVar0 = func_270(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_404(iParam1, &Var1, 805880880, 0, 0, -401018458))
	{
		Var1 = "TRANSACTION_CAMP_GANG";
		Var1.f_1 = "ITEMTYPE_TEXTURES";
	}
	func_405(_create_var_string(2, "TRANSACTION_DONATED"), Var1.f_1, get_hash_key(Var1), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Var4.f_1 = 11;
	if (((func_271(iParam1, 1064293907) || _0x245d07651b1d183b(iParam1, 1073741824)) || func_271(iParam1, -1257428961)) || func_271(iParam1, 173360570))
	{
		if (func_272())
		{
			func_406(&Var4, 1417019613);
		}
	}
	else if ((_0x245d07651b1d183b(iParam1, 268435456) || _0x245d07651b1d183b(iParam1, 134217728)) || func_271(iParam1, 1888974372))
	{
		func_406(&Var4, -688057837);
	}
	else
	{
		func_406(&Var4, 25550726);
	}
	iVar17 = iParam2;
	if (iVar17 > 10)
	{
		Var18 = { Var4 };
		func_406(&Var18, 964458272);
		while (iVar17 > 10)
		{
			if (!func_407(iVar0, uParam0, &Var18, 0, 255, 0, 0))
			{
				return false;
			}
			iVar17 = (iVar17 - 10);
		}
	}
	iVar31 = 0;
	switch (iVar17)
	{
		case 2:
			iVar31 = 1206214767;
			break;
		case 3:
			iVar31 = 1048858029;
			break;
		case 4:
			iVar31 = 2003386234;
			break;
		case 5:
			iVar31 = 1510933702;
			break;
		case 6:
			iVar31 = -712967248;
			break;
		case 7:
			iVar31 = -1206075160;
			break;
		case 8:
			iVar31 = -246762689;
			break;
		case 9:
			iVar31 = -414474431;
			break;
		case 10:
			iVar31 = 964458272;
			break;
	}
	if (iVar31 != 0)
	{
		func_406(&Var4, iVar31);
	}
	if (!func_407(iVar0, uParam0, &Var4, 0, 255, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		func_402(iParam1, iParam2);
	}
	return true;
}

void func_282(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_280(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 6, &uParam15);
}

void func_283(var uParam0)
{
	func_408(uParam0, 0);
}

int func_284(int iParam0, int iParam1, bool bParam2)
{
	return func_409(iParam0, iParam1, &uVar0, bParam2, 0);
}

bool func_285()
{
	if (_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		return true;
	}
	return false;
}

bool func_286()
{
	if (is_hud_hidden())
	{
		return false;
	}
	if (is_cinematic_cam_rendering())
	{
		return false;
	}
	if (func_400())
	{
		return false;
	}
	if (_is_app_running(64621749))
	{
		return false;
	}
	if (Global_1071686->f_28778)
	{
		return false;
	}
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!_unlock_is_unlocked(1324907014))
	{
		return false;
	}
	if (func_410())
	{
		return false;
	}
	return true;
}

int func_287(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738->f_384)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_412(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_413(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_414(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_415(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_416(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_417(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_418(func_411(uParam0->f_2, 109029619), func_411(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_288(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_289(var uParam0)
{
	return func_288(*uParam0, 2);
}

int func_290(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_291(int iParam0)
{
	iVar0 = func_419(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_420(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_420(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_292(int iParam0)
{
	if (func_271(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_293(int iParam0, bool bParam1)
{
	if (!func_203(iParam0, 0))
	{
		return func_421(func_394(iParam0), bParam1);
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

bool func_294(int iParam0)
{
	if (!func_56() && func_422())
	{
		return true;
	}
	return func_271(iParam0, 1435272033);
}

bool func_295(int iParam0, bool bParam1)
{
	return (func_299(iParam0, 997808187) && !func_423(iParam0, 997808187, bParam1));
}

bool func_296(int iParam0)
{
	iVar0 = func_293(iParam0, 1);
	if (iVar0 != 0 && func_319(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_297(int iParam0, int iParam1)
{
	*iParam1 = func_424(iParam0, 1);
	return *iParam1 != 0;
}

bool func_298(int iParam0, int iParam1)
{
	*iParam1 = func_425(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_299(int iParam0, bool bParam1)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return func_319(func_293(iParam0, 0), bParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, bParam1) > 0;
}

bool func_300()
{
	return Global_1915715->f_22477;
}

bool func_301(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_426(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_302(int iParam0)
{
	if (!func_203(*iParam0, 0))
	{
		return 0;
	}
	if (!func_427(*iParam0))
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

struct<5> func_303(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_332(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_92(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_428(bParam1) };
			if (bParam2 && func_429(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_430(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_430(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_431(iParam0, &Var6, 1728382685))
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
			Var0 = { func_432(bParam1) };
			switch (func_433(iParam0))
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
			if (func_434(iParam0, -1823706425))
			{
				Var0 = { func_92(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_434(iParam0, -1483207246))
			{
				Var0 = { func_92(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_92(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_434(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_435(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_434(iParam0, -1653629781))
			{
				Var0 = { func_92(1384535894, Var0, 1784584921, bParam1) };
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

bool func_304(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_436(iParam0))
	{
		return false;
	}
	if (func_271(iParam0, 81450561) || func_271(iParam0, 1342455455))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return false;
	}
	iVar0 = func_293(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_319(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_303(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_305(int iParam0)
{
	return func_271(iParam0, 1166200945);
}

bool func_306(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (!func_203(iParam1, 0))
	{
		return false;
	}
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_164(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_301(15))
	{
		bVar0 = true;
	}
	func_184(&iParam9, 32);
	func_184(&iParam9, 64);
	func_184(&iParam9, 4);
	func_184(&iParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_438(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, iParam9, 1))
	{
		return false;
	}
	Var1 = { func_439(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*iParam7 = { Var1 };
	if (!func_440(iParam0, 1702063850))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715->f_20241.f_49;
	iVar20 = Global_1915715->f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_203(&(Global_1051439->f_47[iVar55]), 0))
		{
		}
		else if (!func_441(&(Global_1051439->f_47[iVar55]), iVar19, &iVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_92(&(Global_1051439->f_47[iVar55]), Var31, iVar21, 0) };
			if (func_442(&(Global_1051439->f_47[iVar55])))
			{
				if (!func_430(&(Global_1051439->f_47[iVar55]), &Var31, iVar21, 0, 0))
				{
					if (!&Global_1051439->f_47.f_7[iVar55])
					{
					}
					else if (func_443(&(Global_1051439->f_47[iVar55])))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_299(&(Global_1051439->f_47[iVar55]), 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_444(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, 1, &Var1, 0, bVar40, iParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_445(iParam0, &(Global_1051439->f_47[iVar55]), Var31, iVar21, !bVar0, &Var1, 0, bVar40, 0, iParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!&Global_1051439->f_47.f_7[iVar55])
							{
								iVar39 = func_95(Var31, iVar21, 0, -1);
								if (!func_203(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_92(iVar39, Var35, iVar21, 0) };
									if (!func_446(Var35, &(Global_1051439->f_47.f_7[iVar55]), 0))
									{
										if (!func_435(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == &Global_1051439->f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_435(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != &Global_1051439->f_47.f_7[iVar55])
											{
												if (!func_446(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_447(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_448(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = _0x46f032b8ddf46cde(iVar19);
														if (!is_bit_set(&(Global_1051439->f_4461[(func_449(iVar56, 1) / 32)]), (func_449(iVar56, 1) % 32)))
														{
															func_451(func_450(1137323725, 1914305383), 1);
															set_bit(Global_1051439->f_4461[(func_449(iVar56, 1) / 32)], (func_449(iVar56, 1) % 32));
														}
													}
												}
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
}

bool func_307(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_164(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_438(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_439(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_332(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_452(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_453(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_308(struct<14> Param0, var uParam14, var uParam15)
{
	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_454(iVar0, 773203532, iVar1, 1, 0) > 0)
	{
		func_455("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (_0x2bae4880dcdd560b(iVar0, 0))
	{
		iVar2 = func_456(iVar0, 0);
		if (!_0x6df942c4179be5ab(iVar2, -41291407))
		{
			play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			_0xe8eaff7b41edd291(iVar2, -41291407, 0);
		}
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_309(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, bParam1);
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
		if (!_0xad73b614df26cf8a(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
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
		func_457(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_310(int iParam0)
{
	if (func_433(iParam0) == -126813555 || func_433(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_311(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_312(struct<4> Param0)
{
	if (!func_311(&Param0))
	{
		return false;
	}
	if (func_458(&Param0))
	{
		return false;
	}
	return func_460(func_459(Param0));
}

void func_313(var uParam0, var uParam1, var uParam2)
{
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_314(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_461(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_462(iParam0))
	{
		return false;
	}
	if (func_463(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_464(iParam0, 1)) || func_465(32768))
	{
		if (!func_464(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_466())
	{
		return false;
	}
	return true;
}

void func_315(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_316(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_317(int iParam0)
{
	if (!func_310(iParam0))
	{
		return 0;
	}
	if (func_467(iParam0))
	{
		return -1957466003;
	}
	if (func_271(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_271(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_271(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_271(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

bool func_318(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_319(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_318(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_468(iParam0, bParam1);
	}
	return true;
}

bool func_320(int iParam0, int iParam1)
{
	*iParam1 = func_469(iParam0, 1);
	return *iParam1 != 0;
}

bool func_321(int iParam0, int iParam1)
{
	*iParam1 = func_470(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_322(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_178(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_471(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_472(iParam0, *uParam2, 541670136, iParam3))
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

void func_323(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_473(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_455("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_324(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_332(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_474(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_475(iParam0, 0);
	}
	if (func_316(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_201(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_476(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_201(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

var func_325(int iParam0)
{
	switch (iParam0)
	{
		case -1992167326:
		case -1884014371:
		case -1871413878:
		case -1554232707:
		case -987049424:
		case -724534761:
		case -215258135:
		case -682748:
		case 892234183:
		case 1357161730:
		case 1483778247:
		case 1538293636:
		case 1581179681:
			iVar0 = func_477(iParam0, 1);
			return &(Global_1137047->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

int func_326(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056141[iParam0];
	}
	return -1;
}

bool func_327(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	vVar0.x = uParam1;
	vVar0.f_1 = uParam2;
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return;
	}
	iVar3 = -999;
	iVar4 = 100;
	iVar5 = 200;
	iVar6 = 100;
	iVar7 = 50;
	fVar8 = 800f;
	fVar9 = 1400f;
	fVar10 = 2000f;
	iVar68 = _0xd1bf325c8252a982(iParam0, &Var18);
	iVar69 = _0x4be6c13a45cca8ec(iParam0);
	iVar71 = func_478(vVar0);
	iVar72 = 0;
	while (iVar72 <= (iVar71 - 1))
	{
		(*uParam3)[iVar72]->f_1 = uParam1;
		(*uParam3)[iVar72]->f_1.f_1 = uParam2;
		(*uParam3)[iVar72]->f_1.f_2 = func_479(iVar72, vVar0);
		if (func_331((*uParam3)[iVar72]->f_1, iVar69, iVar68, bParam4))
		{
			(*uParam3)[iVar72] = (uParam3[iVar72] + iVar4);
			if (!func_77((*uParam3)[iVar72]->f_1, &vVar15))
			{
			}
			else
			{
				iVar73 = 0;
				while (iVar73 <= (iVar68 - 1))
				{
					iVar70 = network_get_player_from_gamer_handle(Var18[iVar73]);
					if (network_is_player_active(iVar70))
					{
						vVar12 = { get_entity_coords(get_player_ped(iVar70), false, false) };
						fVar11 = vdist(vVar12, vVar15);
						if (fVar11 < fVar8)
						{
							(*uParam3)[iVar72] = (uParam3[iVar72] + iVar5);
						}
						else if (fVar11 < fVar9)
						{
							(*uParam3)[iVar72] = (uParam3[iVar72] + iVar6);
						}
						else if (fVar11 < fVar10)
						{
							(*uParam3)[iVar72] = (uParam3[iVar72] + iVar7);
						}
					}
					iVar73++;
				}
				Jump @376; //curOff = 365
				(*uParam3)[iVar72] = iVar3;
			}
			iVar72++;
		}
	}
}

int func_329(var uParam0)
{
	_0x7e300b5b86ab1d1a(uParam0, *uParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar3 = uParam0[0];
	if (iVar3 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if (uParam0[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 > 0)
	{
		iVar1 = get_random_int_in_range(0, iVar2);
	}
	else
	{
		iVar1 = 0;
	}
	uVar0 = (*uParam0)[iVar1]->f_1.f_2;
	return uVar0;
}

int func_330(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -682748;
		case 1:
			return 1357161730;
		case 2:
			return 1581179681;
		case 3:
			return -215258135;
		case 4:
			return -987049424;
		case 5:
			return 892234183;
		case 6:
			return -1554232707;
		case 7:
			return 1538293636;
		case 8:
			return -1992167326;
		case 9:
			return -1884014371;
		case 10:
			return -1871413878;
		case 11:
			return 1483778247;
		case 12:
			return -724534761;
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

bool func_331(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	if (vParam0.z == 0)
	{
		return false;
	}
	if (!func_77(vParam0, &vVar0))
	{
		return false;
	}
	if (func_78(vParam0, bParam3, vVar0, bParam4, 1, 0, bParam5))
	{
		return true;
	}
	return false;
}

int func_332(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_333(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_474(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_480("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_481(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_482(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_483(iVar1);
				return true;
			}
			iVar3++;
		}
		func_483(iVar1);
	}
	return false;
}

bool func_334(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_433(iParam0);
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
	iVar1 = func_484(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_485(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_486(iParam0);
	iVar2 = func_485(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

bool func_335(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_487(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_336()
{
	return Global_1893587->f_2;
}

bool func_337(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_338(vector3 vParam0, bool bParam3)
{
	iVar0 = func_488(vParam0);
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

int func_339(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_340(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_1;
	}
	return Global_25003[iParam0]->f_1;
}

int func_341(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_3647[iParam0]);
	}
	return &(Global_25003[iParam0]);
}

int func_342(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return Global_39.f_3647[iParam0]->f_2;
	}
	return Global_25003[iParam0]->f_2;
}

void func_343(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_3647[iParam0]->f_3 = iParam1;
		return;
	}
	Global_25003[iParam0]->f_3 = iParam1;
	return;
}

void func_344(int iParam0)
{
	vVar0 = { func_489(func_342(iParam0)) };
	Global_17081[iParam0] = _blip_add_for_coord(func_490(func_340(iParam0)), vVar0);
	set_blip_sprite(&(Global_17081[iParam0]), func_491(func_340(iParam0)), true);
	set_blip_flash_timer(&(Global_17081[iParam0]), func_340(iParam0), iParam0);
}

int func_345(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

void func_346(int iParam0, bool bParam1)
{
	Var0.f_8 = iParam0;
	if (bParam1)
	{
		iVar14 = 5;
	}
	else
	{
		iVar14 = 6;
	}
	func_282(iVar14, Var0, func_347(0, 8));
}

var func_347(int iParam0, int iParam1)
{
	return func_492(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

bool func_348(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -238050295;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_349(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -402732872;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var0.f_2 = -1420258246;
		if (!_datafile_get_vector(uParam3, &Var0))
		{
			return false;
		}
		iVar13 = 0;
		while (iVar13 <= 50)
		{
			if (get_nth_closest_vehicle_node(*uParam3, iVar13, &vVar10, 17, 1077936128, 0))
			{
				*uParam4 = func_493(*uParam3, vVar10, 1);
				return true;
			}
			iVar13++;
		}
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
	}
	return false;
}

bool func_350(vector3 vParam0, int iParam3, var uParam4, var uParam5)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1763127828;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam4, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam5, &Var5);
		return true;
	}
	return false;
}

bool func_351(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 952598509;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_352(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -466985247;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_353(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1629816098;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
		return true;
	}
	return false;
}

bool func_354(vector3 vParam0, var uParam3, var uParam4)
{
	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1078091189;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		_datafile_get_float(uParam4, &Var5);
		return true;
	}
	return false;
}

Vector3 func_355(int iParam0)
{
	if (!func_74(iParam0))
	{
		return vVar0;
	}
	return (*Global_1131196)[iParam0]->f_1;
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
		Var0.f_15 = func_316(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_357(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -682748:
				return "GC_GRIZZLIES_DIST";
			case 1357161730:
				return "GC_BAYOU_DIST";
			case 1581179681:
				return "GC_BIG_VALLEY_DIST";
			case -987049424:
				return "GC_CUMBERLAND_FOREST_DIST";
			case -1554232707:
				return "GC_GREAT_PLAINS_DIST";
			case 1538293636:
				return "GC_HEARTLANDS_DIST";
			case -1871413878:
				return "GC_ROANOKE_RIDGE_DIST";
			case 1483778247:
				return "GC_SCARLETT_MEADOWS_DIST";
			case -724534761:
				return "GC_TALL_TREES_DIST";
			case 892234183:
				return "GC_GAPTOOTH_RIDGE_DIST";
			case -1884014371:
				return "GC_RIO_BRAVO_DIST";
			case -215258135:
				return "GC_CHOLLA_SPRINGS_DIST";
			case -1992167326:
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -682748:
				return "GRIZZLIES_DIST";
			case 1357161730:
				return "BAY";
			case 1581179681:
				return "BGV";
			case -987049424:
				return "CML";
			case -1554232707:
				return "GRT";
			case 1538293636:
				return "HRT";
			case -1871413878:
				return "ROA";
			case 1483778247:
				return "SCM";
			case -724534761:
				return "TAL";
			case 892234183:
				return "GAP";
			case -1884014371:
				return "RIO";
			case -215258135:
				return "CHO";
			case -1992167326:
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

int func_358(int iParam0)
{
	iVar0 = func_376(iParam0);
	if (!func_203(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_494(iVar0, 0, 59806960);
	return iVar1;
}

bool func_359(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_360()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_361()
{
	return !func_42(2);
}

bool func_362()
{
	iVar0 = func_216(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_65((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_363(int iParam0)
{
	func_43(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

struct<7> func_364(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_365()
{
	bVar0 = (((Global_1132288->f_2019 == 2 || (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 11)) || Global_1132288->f_2019 == 12) || (Global_1132288->f_2019 >= 13 && Global_1132288->f_2019 <= 19));
	return bVar0;
}

bool func_366(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	vVar1 = { func_355(func_495(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1975753417;
		case 7:
			return -142724881;
		default:
			break;
	}
	return 0;
}

bool func_368(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_494(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_496(iVar0);
	}
	return bVar1;
}

int func_369(vector3 vParam0, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_238(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_497(-1230526146, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

void func_370(int iParam0, vector3 vParam1)
{
	iVar0 = player_id();
	(*Global_1134390)[iVar0]->f_38.f_7 = iParam0;
	(*Global_1134390)[iVar0]->f_38.f_8 = { vParam1 };
}

bool func_371(int iParam0)
{
	iVar0 = func_419(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

int func_372(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_203(iParam0, 0))
	{
		return -1;
	}
	if (func_332(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_498())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_499(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_499(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_309(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_324(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_500(0))
	{
		if (iVar0 > 0)
		{
			func_501(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_501(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_502(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_501(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_503(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_168(iVar52, Var53);
	}
	return iVar52;
}

void func_373(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Var0.f_5 = { (*Global_1131196)[iParam0]->f_1 };
	func_282(11, Var0, func_504(_0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9)));
}

int func_374(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_375(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1082007132;
		case 7:
			return -1321348724;
		default:
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_378(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_379(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_380(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_505(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

void func_381(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_506(uParam0, iParam6);
	func_507(uParam0, iParam5);
	func_508(uParam0, iParam4);
	func_509(uParam0, iParam3);
	func_510(uParam0, iParam2);
	func_511(uParam0, iParam1);
}

int func_382()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		return (*Global_1134390)[iVar0]->f_38.f_28.f_2;
	}
	return 255;
}

int func_383()
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		return (*Global_1134390)[iVar0]->f_38.f_28.f_3;
	}
	return -1;
}

void func_384(int iParam0, bool bParam1)
{
	iVar0 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
	if (network_is_player_active(iVar0))
	{
		if ((!network_is_player_active((*Global_1134390)[iVar0]->f_38.f_28.f_2) || (*Global_1134390)[iVar0]->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			(*Global_1134390)[iVar0]->f_38.f_28.f_2 = 255;
			(*Global_1134390)[iVar0]->f_38.f_28.f_3 = -1;
		}
	}
}

bool func_385(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return true;
	}
	else if (Param7 > Param0)
	{
		return false;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return true;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return false;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return true;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return false;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return true;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return true;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return false;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return true;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return false;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return true;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return false;
	}
	return false;
}

struct<10> func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_387(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_388(int iParam0, int iParam1)
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

int func_389(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_512())
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
			iVar0 = func_505(func_512(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_390(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	(*Global_1134390)[iParam0]->f_38.f_28 = iParam1;
	Global_1137047->f_339 = iParam1;
}

int func_391(int iParam0)
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

char* func_392(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_241(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_241(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

char* func_393(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_394(int iParam0)
{
	return iParam0;
}

int func_395(int iParam0, int iParam1)
{
	if (!func_513(iParam0, 2))
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

bool func_396()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_397(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 1046181202:
			return 2;
		case 1856073229:
			return 3;
		case -1612693182:
			return 4;
		case 1689071181:
			return 5;
		case -1171462349:
			return 6;
		default:
			break;
	}
	if (func_271(iParam0, -2011345500))
	{
		return 7;
	}
	return 2;
}

bool func_398(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_74(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*uParam2 = { (*Global_1131196)[iParam1]->f_20 };
			*uParam3 = 0f;
			break;
		case 9:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_41 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_59;
			break;
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
			{
				return false;
			}
			*uParam2 = { *Global_1132288->f_1[iParam1]->f_13[iParam4] };
			*uParam3 = &Global_1132288->f_1[iParam1]->f_49[iParam4];
			break;
		case 7:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_38 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_58;
			break;
		case 13:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_35 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_57;
			break;
		case 14:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_7 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_47;
			break;
		case 15:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_10 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_47;
			break;
		case 11:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_44 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_60;
			break;
		default:
			return false;
	}
	return true;
}

float func_399(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_514(vVar0, vParam1);
}

bool func_400()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_401()
{
	return _get_number_of_references_of_script_with_name_hash(872480335) > 0;
}

int func_402(int iParam0, int iParam1)
{
	iVar1 = iParam1;
	if (iParam1 == 1)
	{
	}
	if (func_271(iParam0, -753854379))
	{
		iVar0 = -1900508329;
	}
	else
	{
		iVar0 = -1463094839;
	}
	Var2.f_1 = 11;
	while (iVar1 > 10)
	{
		func_406(&Var2, 964458272);
		if (!func_515(iVar0, &Var2, 0, 255, 0, 0))
		{
			return 0;
		}
		iVar1 = (iVar1 - 10);
	}
	Var15.f_1 = 11;
	switch (iVar1)
	{
		case 2:
			func_406(&Var15, 1206214767);
			break;
		case 3:
			func_406(&Var15, 1048858029);
			break;
		case 4:
			func_406(&Var15, 2003386234);
			break;
		case 5:
			func_406(&Var15, 1510933702);
			break;
		case 6:
			func_406(&Var15, -712967248);
			break;
		case 7:
			func_406(&Var15, -1206075160);
			break;
		case 8:
			func_406(&Var15, -246762689);
			break;
		case 9:
			func_406(&Var15, -414474431);
			break;
		case 10:
			func_406(&Var15, 964458272);
			break;
	}
	if (!func_515(iVar0, &Var15, 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_403(int iParam0, int iParam1)
{
	if ((*Global_1134390)[&Global_1296859]->f_74.f_8 != 0)
	{
		return 0;
	}
	(*Global_1134390)[&Global_1296859]->f_74.f_8 = iParam0;
	(*Global_1134390)[&Global_1296859]->f_74.f_6 = iParam1;
	(*Global_1134390)[&Global_1296859]->f_74.f_7 = get_random_int_in_range(0, 65536);
	return 1;
}

bool func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_405(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_516(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_406(int iParam0, int iParam1)
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

int func_407(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_1 = 10;
	return func_517(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_408(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_518(uParam0, 1);
	func_519(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_409(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_520(iParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_496(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_521(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_522(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_523(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_324(&(Var0[iVar32]), 0, bParam3, 1);
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

bool func_410()
{
	Var0 = { func_217(0) };
	if (func_44(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_411(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_393(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_412(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_413(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _show_notification(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_414(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_415(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _show_notification(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_416(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_417(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _0x3f9fddba79117c69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_418(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_419(int iParam0)
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

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_524(iParam0, iParam1, iParam2, iParam3);
}

int func_421(int iParam0, bool bParam1)
{
	if (!func_513(iParam0, 2))
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

bool func_422()
{
	return func_525(func_217(0));
}

bool func_423(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_203(iParam0, 0))
	{
		return func_526(func_394(iParam0), bParam1, bParam2);
	}
	if (func_292(iParam0))
	{
		return func_468(func_293(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_19() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_527(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_424(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_528(iVar0, 1, 0);
		if (!func_309(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_529(&(Var2[iVar34])))
				{
					if (!bParam1 || func_324(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_425(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_528(iVar0, 0, 1);
		if (!func_309(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_467(&(Var9[iVar41])))
				{
					if (!bParam1 || func_324(&(Var9[iVar41]), 0, 1, 1) > 0)
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

bool func_426(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_427(int iParam0)
{
	return func_271(iParam0, 1279601681);
}

struct<4> func_428(bool bParam0)
{
	iVar0 = func_201(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_92(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_92(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_92(923904168, func_91(bParam0), -740156546, 0);
}

bool func_429(int iParam0, bool bParam1)
{
	if (func_433(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_530();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_170(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_431(int iParam0, var uParam1, int iParam2)
{
	if (func_531(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_432(bool bParam0)
{
	iVar0 = func_201(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_92(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_92(271701509, func_91(bParam0), 12999093, 0);
}

int func_433(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_434(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_433(iParam0);
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
			if (func_532(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_435(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_487(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_436(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_19() == -1)
	{
		if (func_533(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

bool func_437(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_163(iParam0))
		{
			return false;
		}
	}
	if (func_534(&(iParam0->f_6)))
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

int func_438(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (func_183(iParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_435(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_532(iParam1, func_433(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 1))
	{
		if (!func_436(iParam1))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 2))
	{
		if (func_423(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_170(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_535(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_536(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_537(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_183(iParam9, 8))
	{
		return func_538(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_439(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_92(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_316(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_440(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_441(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_433(iParam1);
		iVar5 = func_539(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
			{
				if (func_532(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_303(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_92(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_201(0);
			Var37 = { func_303(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_92(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_433(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &iVar2))
						{
							if (func_532(iParam0, iVar1, iVar2))
							{
								if (func_540(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_442(int iParam0)
{
	iVar0 = func_332(iParam0);
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	return func_271(iParam0, 1282106666);
}

bool func_444(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (!func_438(iParam0, iParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_439(iParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_541(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

bool func_445(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_164(iParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_542(iParam0, iParam1, Param2, iParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = iParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_316(iParam1, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_453(iParam0, Var0, 2113164098, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

bool func_446(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_500(0))
	{
		return func_543(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_435(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_201(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_447(int* iParam0)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		_cashinventory_transaction_delete(*iParam0);
		func_420(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_448(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_420(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_420(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_420(*iParam0, 2, 0, 0);
		return false;
	}
	func_420(*iParam0, 1, 0, 0);
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

int func_449(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case 1993361168:
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

struct<2> func_450(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_451(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_452(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_544(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_545(iParam0, iParam18))
	{
		return false;
	}
	if (func_546(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam19);
}

bool func_453(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_544(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_545(iParam0, iParam17))
	{
		return false;
	}
	if (func_548(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam18);
}

int func_454(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_292(iParam0))
	{
		return func_473(func_293(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_309(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

void func_455(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

int func_456(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!_0x2bae4880dcdd560b(iParam0, iParam1))
	{
		return 0;
	}
	return _0x2e1cdc1ff3b8473e(iParam0, iParam1);
}

void func_457(int iParam0, bool bParam1, var uParam2, int iParam3)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_433(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_458(var uParam0)
{
	if (!func_311(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_459(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_311(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_460(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_549()) > iParam0;
}

bool func_461(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_462(int iParam0)
{
	if (func_464(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_463(int iParam0)
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

bool func_464(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_465(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_466()
{
	if (!func_56())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_467(int iParam0)
{
	return func_433(iParam0) == -126813555;
}

bool func_468(int iParam0, bool bParam1)
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
		if (&Var0[iLocal_478] == bParam1)
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

int func_469(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_528(iVar0, 1, 0);
		if (!func_520(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_529(&(Var2[iVar34])))
				{
					if (!bParam1 || func_324(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_470(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_528(iVar0, 0, 1);
		if (!func_520(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_467(&(Var9[iVar41])))
				{
					if (!bParam1 || func_324(&(Var9[iVar41]), 0, 1, 1) > 0)
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

int func_471(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_319(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_183(iParam2, 2))
	{
		if (func_468(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_183(iParam2, 8))
	{
		return func_550(iParam0, iParam1);
	}
	return 1;
}

bool func_472(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_551(Param1))
	{
		return false;
	}
	if (!func_545(iParam0, iParam18))
	{
		return false;
	}
	if (func_552(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam19);
}

int func_473(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_520(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

int func_474(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_332(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_271(iParam0, 1399091007))
	{
		func_553(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_475(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_554(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_555(&Var0, func_428(0));
	}
	if (!func_556(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_483(iVar14);
	return uVar15;
}

struct<4> func_476(int iParam0, bool bParam1)
{
	Var0 = { func_303(iParam0, bParam1, 0) };
	return func_92(iParam0, Var0, Var0.f_4, bParam1);
}

int func_477(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1992167326:
			return 8;
		case -1884014371:
			return 9;
		case -1871413878:
			return 10;
		case -1554232707:
			return 6;
		case -987049424:
			return 4;
		case -724534761:
			return 12;
		case -215258135:
			return 3;
		case -682748:
			return 0;
		case 892234183:
			return 5;
		case 1357161730:
			return 1;
		case 1483778247:
			return 11;
		case 1538293636:
			return 7;
		case 1581179681:
			return 2;
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

int func_478(vector3 vParam0)
{
	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	uVar5 = _datafile_get_num_nodes(&Var0);
	return uVar5;
}

int func_479(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (!func_186(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (_datafile_get_data_node_index(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (_datafile_get_int(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_480(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_201(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_481(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_482(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_483(int iParam0)
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

int func_484(int iParam0)
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

int func_485(var uParam0, int iParam1)
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

int func_486(int iParam0)
{
	iVar0 = func_433(iParam0);
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

bool func_487(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_488(vector3 vParam0)
{
	iVar0 = func_557(vParam0, 0f, 0f, 0, 2);
	return func_557(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

Vector3 func_489(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_490(int iParam0)
{
	switch (iParam0)
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
		case 46:
		case 57:
		case 58:
		case 59:
		case 67:
		case 68:
		case 69:
			return -678244495;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return -936216634;
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
		case 30:
		case 31:
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
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 53:
		case 98:
			return 168093330;
		case 49:
			return -691985497;
		case 45:
			return -1923570663;
		case 54:
		case 55:
		case 56:
			return -972966383;
		case 60:
		case 96:
			return 1560611276;
		case 61:
		case 62:
		case 63:
		case 64:
			return -494978356;
		case 65:
			return -507182222;
		case 66:
			return -1337945352;
		case 70:
			return -383696203;
		case 100:
			return -383696203;
		case 97:
			return 776060936;
		default:
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 51:
			return -1017650267;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return -211556852;
		case 41:
			return 1364029453;
		case 52:
			return 1496995379;
		case 53:
			return -73168905;
		case 54:
			return 1586273744;
		case 55:
			return -1498696713;
		case 56:
			return 1586273744;
		case 57:
			return 503049244;
		case 58:
			return 305594522;
		case 59:
			return -417940443;
		case 60:
			return -1606321000;
		case 61:
			return 1904459580;
		case 62:
			return -1989725258;
		case 63:
			return -487631996;
		case 64:
			return -1944395098;
		case 65:
			return -428972082;
		case 66:
			return 1586273744;
		case 67:
			return -1575595762;
		case 68:
			return -417940443;
		case 69:
			return -417940443;
		case 70:
			return -1258576797;
		case 42:
			return -1596758107;
		case 47:
			return 249721687;
		case 48:
			return -1546805641;
		case 43:
			return -1656531561;
		case 44:
			return 1369919445;
		case 45:
			return 1779658797;
		case 46:
			return -417940443;
		case 96:
			return 327180499;
		case 97:
			return 327180499;
		case 98:
			return 935247438;
		case 50:
			return 553094466;
		case 49:
			return 1961764827;
		case 100:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

var func_492(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_558() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(get_player_team(iVar5)));
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
			if (func_561(iVar2))
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
				if (iVar9 & 8192 != 0 && func_562(iVar2) != 1)
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
					if (!func_563(iVar10))
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

float func_493(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_494(int iParam0, bool bParam1, int iParam2)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	return func_499(iParam0, iParam2, 1, bParam1, 1, 0);
}

int func_495(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_216(player_id());
	}
	return func_236(_0x4be6c13a45cca8ec(iParam0));
}

bool func_496(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_19() == 0)
	{
		return func_564(iParam0);
	}
	return iParam0 <= func_565();
}

int func_497(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 != -1230526146)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_567(func_566(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

bool func_498()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_499(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && bParam1 == -915411861) && func_299(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_292(iParam0))
	{
		return func_569(func_293(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_309(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_500(bool bParam0)
{
	if (func_19() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_201(bParam0));
}

bool func_501(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_316(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_570(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_303(iParam0, bParam4, 0) };
	Var6 = { func_92(iParam0, Var1, Var1.f_4, bParam4) };
	return func_571(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_502(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_503(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_567(func_548(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

var func_504(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_505(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_506(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_507(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_508(var uParam0, int iParam1)
{
	iVar0 = func_379(*uParam0);
	iVar1 = func_380(*uParam0);
	if (iParam1 < 1 || iParam1 > func_573(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_509(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_510(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_511(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_512()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_513(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

float func_514(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var4.f_1 = 10;
	return func_517(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

void func_516(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_517(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_406(iParam2, -372840566);
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
	func_574(uParam1, iParam0, Var3);
	return 1;
}

void func_518(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_519(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_520(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_318(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, bParam1);
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
		if (!_0xf27f01bbf5acd3f3(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
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
		func_575(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_521(int iParam0)
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

int func_522(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_271(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_91(0) };
	Var0.f_4 = func_576(iParam1);
	Var5 = { func_92(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_201(0), &Var5, 0);
	return iVar9;
}

void func_524(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_577(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_525(struct<2> Param0)
{
	return func_578(Param0, 5, 8);
}

int func_526(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_513(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_19() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_579(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
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
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_527(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_528(int iParam0, bool bParam1, bool bParam2)
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

bool func_529(int iParam0)
{
	return func_433(iParam0) == 1946043663;
}

bool func_530()
{
	return (func_580(-1185145312, 0, 0, 0) > 0 && func_95(func_92(889965687, func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_531(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_201(0);
	*uParam1 = { func_92(iParam0, func_428(0), iParam3, 0) };
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

bool func_532(int iParam0, int iParam1, int iParam2)
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

bool func_533(int iParam0)
{
	return func_332(iParam0) == -427144552;
}

bool func_534(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_535(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_203(iParam0, 0) && !func_513(func_394(iParam0), 2))
	{
		return 0;
	}
	if (func_332(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_316(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_201(bParam3), iParam0);
}

bool func_536(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_203(iParam0, 0) && !func_513(func_394(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_537(int* iParam0, int iParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_538(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_581(iParam1, 1) && !func_582(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_583(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_499(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_521((iVar1 + func_584(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_583(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_499(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_496((iVar3 + func_584(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_583("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_513(func_394(iParam1), 2))
	{
		if (!func_585(func_394(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_203(iParam1, 0))
	{
		if (!func_586(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_539(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_433(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_540(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_335(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_541(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	uVar0 = 15;
	if (!func_309(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_587(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_588(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_589(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_590(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_591(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_592(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_593(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_594(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_595(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_596(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_597(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_598(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_599(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_600(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_601(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_542(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8)
{
	if (!func_438(iParam0, iParam1, Param2, iParam6, bParam7, 1, iParam8, 1))
	{
		return false;
	}
	if (func_183(iParam8, 4) && func_430(iParam1, &Param2, iParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_543(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_435(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_332(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_602(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_603(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_604(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_605(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_606(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_607(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_356(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_503(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_544(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_203(uParam1->f_8, 0) && !func_513(func_394(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_183(iParam2, 128))
	{
		if (func_433(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_183(iParam2, 16))
	{
		if (!func_572(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_545(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_440(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_448(iParam0))
		{
			return false;
		}
		if (!func_440(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_546(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_547(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_448(iParam0);
	}
	return true;
}

bool func_548(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_549()
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

int func_550(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_569(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_521(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_583(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_608(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_569(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_496(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_583("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_409(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_551(struct<17> Param0)
{
	if (!func_318(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_552(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_553(int iParam0, var uParam1, var uParam2)
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

struct<14> func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_555(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_556(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_201(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_557(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_558()
{
	return Global_1051252->f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

bool func_561(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_241(36, iParam0);
}

int func_562(int iParam0)
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

bool func_563(int iParam0)
{
	if (func_609(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_610(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_564(int iParam0)
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

int func_565()
{
	if (func_19() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_566(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 19, uParam2, 0);
}

int func_567(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_420(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_420(iParam1, 2, 0, 0);
	return -1;
}

int func_568(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_420(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_569(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_520(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_611(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_316(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_500(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_612(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_613(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_503(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_168(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_201(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_571(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_611(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_435(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_500(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_19() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_503(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_168(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_201(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_572(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_614(uParam1->f_8, iParam0, uVar0, 2048) || func_614(uParam1->f_8, iParam0, uVar0, 32768)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 4) || func_614(uParam1->f_8, iParam0, uVar0, 256)) || func_614(uParam1->f_8, iParam0, uVar0, 65536)) || func_614(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 1) || func_614(uParam1->f_8, iParam0, uVar0, 8)) || func_614(uParam1->f_8, iParam0, uVar0, 65536)) || func_614(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_614(uParam1->f_8, iParam0, uVar0, 1) || func_614(uParam1->f_8, iParam0, uVar0, 16)) || func_614(uParam1->f_8, iParam0, uVar0, 2)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_614(uParam1->f_8, iParam0, uVar0, 8) || func_614(uParam1->f_8, iParam0, uVar0, 4096)) || func_614(uParam1->f_8, iParam0, uVar0, 256)) || func_614(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_573(int iParam0, int iParam1)
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

void func_574(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_534(uParam0))
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

void func_575(int iParam0, bool bParam1, var uParam2, int iParam3)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_433(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_576(int iParam0)
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

void func_577(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_615(&(uParam0->f_4));
}

bool func_578(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_44(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_616(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_579(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_513(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_617(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_580(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_618(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_201(bParam1), iParam0, iParam3);
}

bool func_581(int iParam0, bool bParam1)
{
	if (!func_271(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_271(iParam0, -1090933859))
		{
			return func_293(iParam0, 1) != 0;
		}
		if ((func_423(iParam0, -915411861, 0) || func_423(iParam0, 600942249, 0)) || func_423(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_582(int iParam0, bool bParam1)
{
	iVar0 = func_619(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_468(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_409(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_583(char* sParam0)
{
	Global_1915715->f_22470 = func_137(sParam0, 10000, 0, 0, 0, 1);
}

int func_584(int* iParam0, bool bParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_499(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_585(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	if (!func_620(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_500(0)) && !func_498());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && func_496(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_521(iVar32))
			{
			}
			else
			{
				iVar33 = func_324(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_586(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_292(iParam0))
	{
		return func_409(func_293(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_309(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_500(0)) && !func_498());
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
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_496(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_521(iVar32)))
			{
			}
			else
			{
				iVar36 = func_522(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_523(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_324(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_621(&(Var0[iVar34])) || func_622(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_623(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_624(&(Var0[iVar34]), iVar36);
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
							if (bParam5 && ((iVar33 + func_625(7, &(Var0[iVar34]))) + func_626(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_587(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_588(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_589(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_590(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_591(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_592(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_593(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_594(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_595(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_596(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_597(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_598(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_599(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_600(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_601(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_627(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<28> func_602(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_201(bParam4), &uParam0, &Var28, 29, 1))
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

int func_603(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_567(func_628(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_604(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_201(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_605(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_567(func_629(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_606(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_201(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_356(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_607(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_572(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_567(func_546(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_568(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_608(int iParam0)
{
	return (iParam0 / 100);
}

bool func_609(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_610(int iParam0)
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
		func_630(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_631(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_611(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_612(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_316(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_632(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_613(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_92(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_614(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_65(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_615(var uParam0)
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

int func_616(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_633(Param0);
	}
	return -1;
}

bool func_617(int iParam0, bool bParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_618(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_619(int iParam0, bool bParam1)
{
	if (!func_581(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_293(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_293(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_293(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_293(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_293(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_293(-611782825, 1);
	}
	return func_293(iParam0, 1);
}

bool func_620(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_513(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, bParam1);
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
		if (!_0xb542632693d53408(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
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
		func_634(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_621(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_271(iParam0, -887064662))
	{
		return true;
	}
	return func_622(iParam0);
}

bool func_622(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (func_271(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_623(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_635(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	if (!func_636(iParam0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
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
		if (!func_638(iVar28))
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

int func_624(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!func_621(iParam0) && !func_622(iParam0))
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
	iVar13 = func_639(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_386(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_387(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_388(iVar15, iVar1);
			if (func_203(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_640(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_523(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_642(iVar16, func_641(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_391(iVar1);
	}
	return iVar0;
}

int func_625(int iParam0, int iParam1)
{
	iParam0 = func_635(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(iParam1, 0))
	{
		return 0;
	}
	if (!func_636(iParam0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
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

int func_626(int iParam0)
{
	if (!func_203(iParam0, 0))
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

bool func_627(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (uParam3[iVar0] == 0 || (*uParam3)[iVar0]->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_643(uParam3[iVar0], ((*uParam3)[iVar0]->f_1 * uParam1->f_9), (*uParam5)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return func_644(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

bool func_628(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_629(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

void func_630(int iParam0)
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
	func_631(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_631(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_632(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_458((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_202() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_633(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_645(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_634(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
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
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_433(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_635(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_636(int iParam0)
{
	iParam0 = func_635(iParam0);
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

int func_637(int iParam0)
{
	iParam0 = func_635(iParam0);
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

bool func_638(int iParam0)
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

int func_639(int iParam0, int iParam1)
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

int func_640(int iParam0)
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

int func_641(int iParam0)
{
	if (func_271(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_271(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_271(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_203(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_643(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam0;
	if (func_426(0))
	{
		iVar5 = func_522(func_646(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_91(1) };
			Var0.f_4 = func_576(iVar5);
			*uParam2->f_1[0] = { func_92(iParam0, Var0, Var0.f_4, 1) };
			if (_0xb881ca836cc4b6d4(uParam2->f_1[0]))
			{
				return true;
			}
		}
	}
	iVar6 = func_316(iParam0, -455129387);
	if (iVar6 != 0)
	{
		if (!func_612(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			*uParam2->f_1[iVar69] = { func_92(iParam0, *Var7[iVar69], Var7[iVar69]->f_4, 1) };
			if (!_0xb881ca836cc4b6d4(uParam2->f_1[iVar69]))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_303(iParam0, 1, 0) };
	*uParam2->f_1[0] = { func_92(iParam0, Var0, Var0.f_4, 1) };
	if (!_0xb881ca836cc4b6d4(uParam2->f_1[0]))
	{
		return false;
	}
	return true;
}

bool func_644(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != -1318406457) && iParam3 != 1702063850)
	{
		return false;
	}
	if (!func_544(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_545(iParam0, iParam3))
	{
		return false;
	}
	if (func_647(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_547(iParam0, bParam4);
}

bool func_645(struct<2> Param0, var uParam2)
{
	if (!func_44(Param0))
	{
		return false;
	}
	func_648(uParam2);
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

int func_646()
{
	return Global_1915715->f_20241;
}

bool func_647(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

void func_648(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

