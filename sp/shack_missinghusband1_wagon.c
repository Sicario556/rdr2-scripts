void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14.f_56 = ScriptParam_0;
	Local_14.f_56.f_1 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&Local_14);
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_1(&Local_14);
	}
	if (func_2(vLocal_73, 1, 0, 0))
	{
		func_1(&Local_14);
	}
	if (!_does_volume_exist(iLocal_77))
	{
		iLocal_77 = _create_volume_cylinder_with_custom_name(-1618.485f, -200.3116f, 156.5484f, 0f, 0f, 0f, 83f, 83f, 40f, "MissingHusbandCrashRestriction");
	}
	while (!func_3(256))
	{
		wait(0);
	}
	vLocal_73 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	fLocal_76 = _get_scenario_point_heading(ScriptParam_0.f_1, true);
	while (func_4())
	{
		switch (iLocal_78)
		{
			case 0:
				if (!func_5(iVar0))
				{
					iVar0 = func_8(func_6(8192), 0, 3, func_7(8192));
				}
				if (func_9(&iVar0, &uVar1))
				{
					if (!func_10(uVar1, 4) || !func_10(uVar1, 8))
					{
						iLocal_78 = 1;
					}
				}
				break;
			case 1:
				if (func_12(&Local_14, 8192, &Local_14, 18, 0, func_11(), 0, 0))
				{
					func_13(iLocal_77, "SP_MissingHusbandWagon1_Block", 1, 0, 0, 0, -1082130432);
					iLocal_78 = 2;
				}
				break;
			case 2:
				break;
			default:
				break;
		}
		wait(0);
	}
	func_1(&Local_14);
	while (!_0x380ffa15b72408fb(10))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0)
{
	if (func_14() != -1)
	{
		return;
	}
	if (_does_volume_exist(iLocal_77))
	{
		func_15(iLocal_77);
		_delete_volume(iLocal_77);
	}
	if (_does_thread_exist(*uParam0))
	{
		_0x7de4643157ad646c(*uParam0);
	}
	_0xe7282390542f570d(uParam0->f_56);
}

bool func_2(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_16(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_4()
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	if (func_14() != -1)
	{
		return false;
	}
	return true;
}

bool func_5(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_17())
	{
		iVar2 = func_17();
	}
	iVar5 = func_18(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_19(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_19(iVar6) == 0)
			{
				return func_20(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_19(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_19(iVar6) == 0)
			{
				return func_20(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_20(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_9(int iParam0, var uParam1)
{
	if (func_5(*iParam0))
	{
		*uParam1 = func_21(*iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_11()
{
	return "shack_missinghusband1";
}

bool func_12(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, int iParam7)
{
	if (func_14() != -1)
	{
		return false;
	}
	if (is_thread_active(*uParam2, false))
	{
		return false;
	}
	if (!_does_scenario_point_exist(uParam0->f_56.f_1))
	{
		return false;
	}
	if (bParam6 && func_22(128, 0, 1))
	{
		return false;
	}
	if (iParam7 && func_23(get_player_index(), 1, 1, 1))
	{
		return false;
	}
	uParam0->f_48 = 1;
	uParam0->f_1 = iParam1;
	uParam0->f_5 = func_8(func_6(iParam1), 0, 3, func_7(iParam1));
	func_24(&(uParam0->f_5), &(uParam0->f_3));
	if (!func_10(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!func_10(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!func_10(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!func_10(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!func_10(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!func_25(uParam0))
		{
			return false;
		}
	}
	if (!func_10(uParam0->f_3, 1))
	{
		if (func_26(uParam0, iParam1, &(uParam0->f_5), iParam3, iParam4) && !func_10(uParam0->f_3, 2))
		{
		}
	}
	if (!func_10(uParam0->f_3, iVar0))
	{
		if (func_10(uParam0->f_3, 2))
		{
			if (!is_thread_active(*uParam2, false))
			{
				request_script(sParam5);
				if (has_script_loaded(sParam5))
				{
					uParam0->f_52 = { func_27(iParam1) };
					uParam0->f_5 = func_8(func_6(iParam1), 0, 3, func_7(iParam1));
					*uParam2 = start_new_script_with_args(sParam5, uParam0, 59, 1024);
					set_script_as_no_longer_needed(sParam5);
					return true;
				}
			}
		}
	}
	return false;
}

int func_13(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_28(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_14()
{
	return Global_1572887->f_12;
}

void func_15(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_29(vVar0, 0);
}

bool func_16(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_17()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_19(int iParam0)
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

int func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_30(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_17())
	{
		return -1;
	}
	iVar0 = func_18(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_31(iVar1, 0);
	func_32(iVar1, 0);
	func_33(iVar1, 0);
	func_34(iVar1, 0);
	func_35(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_36(iVar1, iParam4);
	}
	return iVar1;
}

int func_21(int iParam0)
{
	if (!func_5(iParam0))
	{
		return -1;
	}
	return func_37(iParam0);
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
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
		if (func_38())
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
		iVar0 = func_39(&(Global_1898164->f_1[0]));
		if (func_40(iVar0) && func_41((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_5(&(Global_1898164->f_1[0])))
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

int func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_42(bParam1, bParam2, bParam3);
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

bool func_24(var uParam0, var uParam1)
{
	if (func_5(*uParam0))
	{
		*uParam1 = func_43(*uParam0);
		if (!func_10(*uParam1, 2))
		{
			func_44(uParam1, 2);
		}
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_25(var uParam0)
{
	if ((!func_10(uParam0->f_3, 32768) && func_45(uParam0->f_1, &fVar1)) && func_46(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = func_47();
		if ((func_47() - fVar1) >= fVar0)
		{
			func_44(&(uParam0->f_3), 32768);
		}
	}
	if (func_10(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

bool func_26(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_10(uParam0->f_3, 1))
	{
		return true;
	}
	if (uParam0->f_47 != 1)
	{
		uParam0->f_47 = 0;
	}
	switch (uParam0->f_47)
	{
		case 0:
			*uParam2 = func_8(iParam3, iParam4, 3, 0);
			if (!func_5(*uParam2))
			{
				return false;
			}
			else
			{
				if (!func_24(&(uParam0->f_5), &(uParam0->f_3)))
				{
					return false;
				}
				else
				{
					func_44(&(uParam0->f_3), 1);
				}
				uParam0->f_47 = 1;
			}
			break;
		case 1:
			if (func_10(uParam0->f_3, 1))
			{
				return true;
			}
			else
			{
				uParam0->f_47 = 0;
			}
			break;
	}
	return false;
}

Vector3 func_27(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1553.069f, 254.0002f, 113.7989f;
		case 4:
			return 1457.149f, -1578.779f, 72.1939f;
		case 8:
			return 1783.498f, 462.5527f, 112.0378f;
		case 16:
			return 1982.539f, 1192.392f, 170.408f;
		case 32:
			return -155.8262f, 1491.054f, 111.7707f;
		case 64:
			return -2054.879f, -1912.227f, 111.2719f;
		case 128:
			return -1021.743f, 1692.386f, 243.3139f;
		case 256:
			return 32.3207f, 2092.403f, 276.5115f;
		case 512:
			return 1888.854f, 301.6055f, 76.1451f;
		case 1024:
			return -2370.078f, 472.8013f, 131.228f;
		case 2048:
			return 1666.794f, 2180.789f, 316.349f;
		case 4096:
			return 1134.444f, -979.7666f, 68.4026f;
		case 8192:
			return -1728.583f, -83.1805f, 180.4762f;
		case 16384:
			return -1961.996f, 2159.51f, 327.3775f;
		case 32768:
			return 2089.364f, -1816.956f, 42.7298f;
		case 65536:
			return 1389.751f, -2083.81f, 56.0727f;
		case 131072:
			return -690.1562f, 1043.87f, 134.0042f;
		case 262144:
			return 1184.4f, -101.4f, 97.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_28(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_16(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_48(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_49(iVar0, bParam8);
	return iVar0;
}

void func_29(vector3 vParam0, int iParam3)
{
	if (func_16(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_50(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_30(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_31(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_51(iParam0);
	}
	else
	{
		func_52(iParam0, iParam1);
	}
	func_53();
}

void func_32(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_33(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_34(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_35(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_36(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_4;
	}
	return 0;
}

bool func_38()
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

int func_39(int iParam0)
{
	if (!func_5(iParam0))
	{
		return -1;
	}
	return func_54(func_19(iParam0));
}

bool func_40(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_41(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_42(bool bParam0, bool bParam1, bool bParam2)
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

int func_43(int iParam0)
{
	if (!func_5(iParam0))
	{
		return -1;
	}
	return func_55(iParam0);
}

void func_44(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

bool func_45(int iParam0, float fParam1)
{
	iVar0 = func_57(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_58(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_46(int iParam0, int iParam1, float fParam2)
{
	if (!func_5(iVar0))
	{
		iVar0 = func_8(func_6(iParam0), iParam1, 3, func_7(iParam0));
	}
	if (func_59(iParam0, fParam2))
	{
		*fParam2 = func_60(iParam0);
		return true;
	}
	return false;
}

float func_47()
{
	iVar6 = func_61();
	iVar4 = func_62(iVar6);
	iVar5 = func_63(iVar6);
	iVar3 = func_64(iVar5, iVar4);
	iVar2 = func_65(iVar6);
	iVar1 = func_66(iVar6);
	fVar0 = (((to_float(iVar1) + (to_float((iVar2 - 1)) * 24f)) + (to_float(iVar3) * 24f)) + ((to_float(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

bool func_48(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_49(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_50(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_51(int iParam0)
{
	iVar0 = func_67(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_68(iVar0);
}

int func_52(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_69(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_54(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_55(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		default:
			break;
	}
	return 0;
}

float func_58(int iParam0)
{
	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

bool func_59(int iParam0, float fParam1)
{
	iVar0 = func_57(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_60(iParam0);
		return true;
	}
	return false;
}

float func_60(int iParam0)
{
	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959.f_20[iVar0]);
}

int func_61()
{
	return &Global_1899515;
}

int func_62(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_70(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_63(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_64(int iParam0, int iParam1)
{
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_71(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_65(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_66(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_67(int iParam0)
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

int func_68(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_70(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_71(int iParam0, int iParam1)
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

