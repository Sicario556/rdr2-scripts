void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_1019.f_137 = uVar1228;
	Local_1019.f_136 = 3;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	func_2(Local_1019.f_136);
	if (func_3(&Local_1019, 32))
	{
	}
	iLocal_14 = func_4(Local_1019.f_136);
	Local_16.f_4 = { -1580.656f, -907.4424f, 83.106f };
	Local_16.f_7 = { -1611.909f, -955.6115f, 83.2929f };
	Local_16.f_10 = { -1515.361f, -871.0674f, 101.3953f };
	func_5(Local_1019.f_136, Local_1019.f_137, &Local_16, &Local_1019, 0, 0);
	if (func_6(Local_1019.f_136, 128))
	{
	}
	func_7();
	while (true)
	{
		switch (iVar1168)
		{
			case 0:
				if (_0x5c16855277819bbf() < (Local_16.f_1 + Local_16) && !func_6(Local_1019.f_136, 524288))
				{
					_0xed9582b3da8f02b4((Local_16 + Local_16.f_1));
				}
				else if (func_8())
				{
					if (func_3(&Local_1019, 32))
					{
						iLocal_1170 = 2;
					}
					else
					{
						iLocal_1170 = 1;
					}
				}
				if (func_9(0))
				{
					func_1();
				}
				break;
			case 1:
				func_10(&Local_16);
				func_11(Local_1019.f_136, 1);
				iLocal_1170 = 2;
				if (func_9(0))
				{
					func_1();
				}
				break;
			case 2:
				func_12(&Local_1019, &Local_16);
				if (!func_3(&Local_1019, 2))
				{
					if (func_13())
					{
						func_1();
					}
				}
				if (func_9(0))
				{
					func_1();
				}
				break;
		}
		if (func_3(&Local_1019, 1024))
		{
			func_1();
		}
		wait(Local_1019.f_30);
	}
}

void func_1()
{
	func_14(Local_1019.f_136, &Local_16, &Local_1019);
	func_15(Local_1019.f_137, 4);
	func_15(Local_1019.f_137, 8);
	if (func_6(Local_1019.f_136, 128))
	{
		_request_imap(-1680050035);
	}
	terminate_this_thread();
}

void func_2(int iParam0)
{
	if (!func_16(iParam0))
	{
		return;
	}
	iVar0 = func_17(iParam0);
	if (!func_18(iVar0, 8))
	{
		func_19(iVar0, 8);
	}
	_0x4161648394262fdf(func_20(iParam0, func_4(iParam0)), 100f);
	func_21(&((*Global_1392194)[iParam0]->f_1), 1);
}

bool func_3(var uParam0, int iParam1)
{
	return (uParam0->f_29 && iParam1) != 0;
}

int func_4(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

void func_5(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	uParam3->f_136 = uParam0;
	uParam3->f_137 = iParam1;
	func_22(uParam3, 128);
	func_23(iParam1, 1);
	if (bParam5)
	{
		func_24((*Global_1392194)[uParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_25((*Global_1392194)[uParam3->f_136]->f_6, 0);
		func_26((*Global_1392194)[uParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_28(&iVar1, &iVar2, func_27(1, 1048576));
	}
	else
	{
		func_29(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_30(iVar3) && !func_31(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_32(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_33(iParam1, iVar1, iVar2, 1);
	}
	if (!func_3(uParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

bool func_6(int iParam0, int iParam1)
{
	if (!func_16(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

int func_7()
{
	switch (iLocal_14)
	{
		case 1:
			Local_16 = 0;
			Local_16.f_1 = 0;
			break;
	}
	return 0;
}

bool func_8()
{
	switch (iVar1169)
	{
		case 0:
			func_34(&(Local_16.f_15));
			func_34(&(Local_16.f_369));
			func_35();
			func_36();
			iLocal_1171 = 1;
			break;
		case 1:
			if (!func_37(&(Local_16.f_15)) || !func_37(&(Local_16.f_369)))
			{
				return false;
			}
			if (!func_38(&(Local_16.f_690)))
			{
				return false;
			}
			if (!func_39())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_9(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_40(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_16(Global_1898092->f_26.f_2) && func_27(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

int func_10(int iParam0)
{
	return func_42(func_41(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_11(int iParam0, bool bParam1)
{
	if (!func_16(iParam0))
	{
		return;
	}
	iVar0 = func_17(iParam0);
	if (bParam1)
	{
		func_19(iVar0, 8);
		func_21(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_15(iVar0, 8);
		func_43(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

int func_12(var uParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_40(Global_35, (*Global_1392194)[uParam0->f_136]->f_5, 1, 0))
	{
		if (!func_3(uParam0, 64))
		{
			func_22(uParam0, 64);
			func_44(uParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	func_45();
	func_46();
	switch (iLocal_14)
	{
		case 1:
			return func_47();
		case 2:
			return func_47();
	}
	return 0;
}

void func_14(int iParam0, int iParam1, var uParam2)
{
	func_22(uParam2, 128);
	func_11(iParam0, 0);
	func_23(uParam2->f_137, 0);
	func_48(uParam2);
	func_49(iParam0, 2048);
	func_50(uParam2, 64);
	if (uParam2->f_137 == 76)
	{
		func_28(&iVar0, &iVar1, func_27(1, 1048576));
	}
	else
	{
		func_29(uParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		set_ped_keep_task(func_51(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = iVar0;
	Global_1898092->f_26.f_8 = uParam2->f_29;
	Global_1898092->f_26.f_2 = uParam2->f_136;
	Global_1898092->f_26.f_1 = uParam2->f_137;
	func_52(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_53(uParam2->f_32))
	{
		func_54(&(uParam2->f_32), 1, 1);
	}
	if (func_53(uParam2->f_33))
	{
		func_54(&(uParam2->f_33), 1, 1);
	}
	if (func_53(uParam2->f_34))
	{
		func_54(&(uParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_55(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_49(uParam2->f_136, 4194304);
	}
	func_56();
	if (func_3(uParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_16(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_17(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_18(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

Vector3 func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_22(var uParam0, int iParam1)
{
	if (func_3(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 || iParam1);
}

void func_23(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_24(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_43(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_25(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

bool func_27(int iParam0, int iParam1)
{
	if (!func_16(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

bool func_29(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_58() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_31(int iParam0, int iParam1)
{
	if (func_58() != -1)
	{
		return false;
	}
	if (!func_30(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_32(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!func_60(func_59(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_61(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_61(iParam0));
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_58() != -1)
	{
		return 1;
	}
	if (!func_57(iParam0))
	{
		return 1;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (func_62(iParam0) && !func_63(iParam0))
	{
	}
	if (func_29(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_30(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_30(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_62(iParam0) || func_63(iParam0)) || func_64(&Global_1897950))
			{
				func_65(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_34(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_66(&((*uParam0)[iVar0]->f_1));
		func_66(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_35()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_67(iVar0) != 0 && _does_streamed_txd_exist(func_67(iVar0)))
		{
			_request_streamed_txd(func_67(iVar0), false);
		}
		iVar0++;
	}
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		uLocal_1180[iVar0] = _0x6f3068258a499e52(func_68(), func_69(iVar0), 11);
		iVar0++;
	}
}

bool func_37(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_70((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_38(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_39()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((func_67(iVar0) != 0 && _does_streamed_txd_exist(func_67(iVar0))) && !_has_streamed_txd_loaded(func_67(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_40(int iParam0, int iParam1, bool bParam2, int iParam3)
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

Vector3 func_41()
{
	return 0f, 0f, 0f;
}

int func_42(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_71((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_71((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_71((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_71((*iParam3)[iVar0]->f_11, 128))
					{
						func_72(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_71((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_73((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_71((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_74((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_71((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_71((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_71((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_43(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_44(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		iVar0 = func_17(iParam0);
		func_76(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_77(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_78(iParam0, 0);
		}
	}
}

void func_45()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_79(iVar0);
		iVar0++;
	}
}

void func_46()
{
	iVar0 = iVar1224;
	func_80(iVar0);
	iLocal_1226 = iVar1224 + 1;
	if (iVar1224 >= 22)
	{
		iLocal_1226 = 0;
	}
}

int func_47()
{
	switch (iLocal_15)
	{
		case 0:
			iLocal_15 = 2;
			break;
		case 1:
			break;
		case 2:
			if (!func_6(Local_1019.f_136, 4))
			{
				func_49(Local_1019.f_136, 4);
			}
			break;
	}
	return 0;
}

void func_48(var uParam0)
{
	if (_does_volume_exist((*Global_1392194)[uParam0->f_136]->f_6))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[uParam0->f_136]->f_6);
	}
	if (_does_volume_exist((*Global_1392194)[uParam0->f_136]->f_5))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[uParam0->f_136]->f_5);
	}
}

void func_49(int iParam0, int iParam1)
{
	if (!func_16(iParam0))
	{
		return;
	}
	if (func_6(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

void func_50(var uParam0, int iParam1)
{
	if (!func_3(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 - (uParam0->f_29 && iParam1));
}

int func_51(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!func_31(iParam0, 2))
	{
		return 0;
	}
	if (func_60(func_59(iParam0)))
	{
		return func_81(iParam0);
	}
	return _0xe76687023d8c8505(func_82(iParam0), 0);
}

void func_52(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

bool func_53(int iParam0)
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

void func_54(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_53(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_83(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_84(iVar0);
	*uParam0 = 0;
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_56()
{
	_0x88544c0e3291dcae(1);
	func_85();
}

bool func_57(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_58()
{
	return Global_1572887->f_12;
}

int func_59(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_60(int iParam0)
{
	return iParam0 != 0;
}

int func_61(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_62(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_18(iParam0, 33554432);
}

bool func_63(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_64(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_65(int iParam0, bool bParam1)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!func_31(iParam0, 2))
	{
		return 0;
	}
	if (func_31(iParam0, 32) && !bParam1)
	{
		func_86(iParam0, _create_persistent_character(func_59(iParam0)));
		if (func_58() == -1)
		{
			if (func_31(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_61(iParam0));
				func_87(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_61(iParam0));
		}
		return 0;
	}
	if (!func_88(iParam0) && func_58() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_61(iParam0)))
	{
		func_87(iParam0, 128);
		return 1;
	}
	func_86(iParam0, _create_persistent_character(func_59(iParam0)));
	_0x4f81ead1de8fa19b(func_61(iParam0));
	if (func_31(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_61(iParam0));
		func_87(iParam0, 2048);
	}
	return 1;
}

void func_66(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1004682100;
		default:
			break;
	}
	return 0;
}

int func_68()
{
	return 629760605;
}

Vector3 func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1591.45f, -961.26f, 83.56f;
		case 1:
			return -1588.148f, -961.1604f, 83.8354f;
		case 2:
			return -1583.645f, -965.8244f, 83.53769f;
		case 3:
			return -1591.035f, -964.1617f, 83.24468f;
		case 4:
			return -1593.423f, -964.8287f, 82.98044f;
		case 5:
			return -1590.374f, -967.1642f, 82.86821f;
		case 6:
			return -1587.637f, -968.1431f, 82.89729f;
		case 7:
			return -1588.376f, -969.8889f, 82.52043f;
		case 8:
			return -1583.825f, -971.7471f, 82.64739f;
		case 9:
			return -1592.214f, -970.4421f, 82.05986f;
		case 10:
			return -1589.137f, -972.6917f, 82.04012f;
		case 11:
			return -1595.49f, -974.5676f, 80.81168f;
		case 12:
			return -1591.419f, -974.6935f, 81.2154f;
		case 13:
			return -1587.635f, -975.4163f, 81.6049f;
		case 14:
			return -1583.813f, -976.0167f, 81.81734f;
		case 15:
			return -1588.93f, -978.4485f, 80.66884f;
		case 16:
			return -1593.119f, -978.5884f, 80.02465f;
		case 17:
			return -1597.469f, -980.7254f, 78.69843f;
		case 18:
			return -1586.581f, -982.3893f, 79.88297f;
		case 19:
			return -1592.984f, -982.5919f, 78.92359f;
		case 20:
			return -1589.804f, -984.6898f, 78.73491f;
		case 21:
			return -1596.487f, -984.4014f, 77.89627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_70(var uParam0)
{
	if (!func_89(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_89(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_72(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_90(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_73(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_74(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_75(int iParam0)
{
	return func_27(iParam0, 1);
}

void func_76(int iParam0, int iParam1)
{
	if (!func_16(iParam0))
	{
		return;
	}
	if (func_27(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 || iParam1);
}

void func_77(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_58() == 0)
	{
		return;
	}
	if (func_91(128))
	{
		return;
	}
	if (!func_92(iParam0))
	{
		return;
	}
	if (func_18(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_93(Global_1935630, 8192);
	func_95(func_94(-1532769513, -36357794), 1);
	switch (func_96(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_95(func_94(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_95(func_94(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_95(func_94(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_95(func_94(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_95(func_94(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_95(func_94(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_19(iParam0, 64);
	}
}

void func_78(int iParam0, int iParam1)
{
	iVar0 = func_97(iParam0);
	if (iVar0 != 0 && func_27(iParam0, 1))
	{
		vVar1 = { func_98(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_99(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_27(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_76(iParam0, 67108864);
	}
}

int func_79(int iParam0)
{
	switch (&iLocal_1172[iParam0])
	{
		case 0:
			if (func_27(Local_1019.f_136, func_100(iParam0)))
			{
				func_101(iParam0, 3);
			}
			else if (!_does_scenario_point_exist(&(uLocal_1174[iParam0])))
			{
				uLocal_1174[iParam0] = create_scenario_point(func_102(iParam0), func_103(iParam0), func_104(iParam0), 0, 0, 0);
			}
			else if (!does_entity_exist(&(iLocal_1176[iParam0])))
			{
				iLocal_1176[iParam0] = _get_scenario_point_entity(&(uLocal_1174[iParam0]), "PrimaryItem");
			}
			else
			{
				func_101(iParam0, 1);
			}
			break;
		case 1:
			if (does_entity_exist(&(iLocal_1176[iParam0])))
			{
				if (func_105(iParam0) != 0)
				{
					if (!decor_exist_on(&(iLocal_1176[iParam0]), "letter_item"))
					{
						decor_set_int(&(iLocal_1176[iParam0]), "letter_item", func_105(iParam0));
					}
				}
				if (is_entity_an_object(&(iLocal_1176[iParam0])))
				{
					if (!does_entity_exist(&(iLocal_1178[iParam0])))
					{
						iLocal_1178[iParam0] = get_object_index_from_entity_index(&(iLocal_1176[iParam0]));
					}
					else
					{
						if (func_105(iParam0) != 0)
						{
							_0xa6a76d666a281f2d(&(iLocal_1178[iParam0]), func_105(iParam0));
						}
						if (func_67(iParam0) != 0)
						{
							_set_apply_object_txd(&(iLocal_1178[iParam0]), func_67(iParam0), 0, 0);
						}
						func_101(iParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (func_106(func_105(iParam0), 1, 0))
			{
				func_76(Local_1019.f_136, func_100(iParam0));
				func_101(iParam0, 3);
			}
			break;
		case 3:
			break;
	}
	return 0;
}

void func_80(int iParam0)
{
	if (func_73(func_69(iParam0)))
	{
		return;
	}
	if (_0x8f4f050054005c27(&uLocal_1227, iParam0))
	{
		return;
	}
	if (!does_entity_exist(&(iLocal_1203[iParam0])))
	{
		if (!_0x1ff441d7954f8709(&(uLocal_1180[iParam0])))
		{
			return;
		}
		iLocal_1203[iParam0] = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(&(uLocal_1180[iParam0])));
		if (get_object_fragment_damage_health(&(iLocal_1203[iParam0]), true) < 1f || _0xa4454592dcf7c992(&(iLocal_1203[iParam0])))
		{
			_0xe84aac1b22a73e99(&uLocal_1227, iParam0);
		}
		return;
	}
	fVar0 = get_object_fragment_damage_health(&(iLocal_1203[iParam0]), true);
	if (fVar0 >= 1f && !_0xa4454592dcf7c992(&(iLocal_1203[iParam0])))
	{
		return;
	}
	if (!_0x3ec28da1ffac9ddd(&(iLocal_1203[iParam0]), Global_35, 1, 1))
	{
		return;
	}
	_0xe84aac1b22a73e99(&uLocal_1227, iParam0);
	uLocal_1229 = iVar1226 + 1;
	if (iVar1226 == 1)
	{
		iVar1 = 0;
	}
	else if ((iVar1226 == 3 || iVar1226 == 6) || iVar1226 == 22)
	{
		iVar1 = 1;
	}
	else
	{
		return;
	}
	func_107(iVar1, 0, 0, 0, 0, 0, 1065353216, 0);
}

int func_81(int iParam0)
{
	iVar0 = func_61(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_82(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

int func_83(var uParam0)
{
	return uParam0;
}

void func_84(int iParam0)
{
	if (!func_108(iParam0))
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

void func_85()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_86(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_87(int iParam0, int iParam1)
{
	if (func_58() != -1)
	{
		return;
	}
	if (!func_30(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_88(int iParam0)
{
	if (!func_30(iParam0))
	{
		return false;
	}
	if (!func_31(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_89(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_90(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_109(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_91(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_92(int iParam0)
{
	if (func_110(iParam0))
	{
		if (!func_111(45))
		{
			return false;
		}
	}
	iVar0 = func_96(iParam0);
	if (func_112())
	{
		if (!func_113((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_94(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_96(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1439010767;
		case 1:
			return -888900898;
		case 2:
			return 1252459247;
		default:
			break;
	}
	return 0;
}

Vector3 func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_99(int iParam0, int iParam1)
{
	func_114(iParam0);
	iVar0 = func_115(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	iLocal_1172[iParam0] = iParam1;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1504251814;
		default:
			break;
	}
	return 0;
}

Vector3 func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1574.754f, -924.731f, 83.607f;
		default:
			break;
	}
	return func_41();
}

float func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 94.405f;
		default:
			break;
	}
	return 0f;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7337301;
		default:
			break;
	}
	return 0;
}

bool func_106(int iParam0, int iParam1, bool bParam2)
{
	if (!func_116(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
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
		if (!func_118(iParam0, 1))
		{
			return false;
		}
	}
	return func_119(iParam0, 0, bParam2) >= iParam1;
}

void func_107(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_58() != -1)
	{
		return;
	}
	if ((Global_36616 && func_120(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_121(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_122(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_123(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_122(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_108(int iParam0)
{
	return func_124(iParam0, 2);
}

bool func_109(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_110(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_111(int iParam0)
{
	if (!func_125(iParam0))
	{
		return false;
	}
	return func_126(iParam0);
}

bool func_112()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_113(int iParam0, bool bParam1)
{
	switch (func_127(iParam0))
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

void func_114(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_128(iParam0))
	{
		iVar1 = func_115(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_115(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

bool func_116(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_117(int iParam0)
{
	if (!func_116(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_116(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_129(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_130("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_131(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_132(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_133(iVar1);
				return true;
			}
			iVar3++;
		}
		func_133(iVar1);
	}
	return false;
}

int func_119(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_116(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_117(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_129(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_134(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_135(bParam2), iParam0, 0);
	return uVar2;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_122(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_136();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_137(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_111(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_138())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_139(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_136();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_140(iVar1);
		func_142(func_141(), 0, 4000);
		func_143(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_144(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_145(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_121(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_146(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_147(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_147(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_145(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_121(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_146(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_147(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_147(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_145(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_148(10, 1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_124(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_125(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_126(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_127(int iParam0)
{
	if (!func_149(iParam0))
	{
		return -1;
	}
	return func_150(iParam0);
}

int func_128(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_129(int iParam0, int iParam1)
{
	if (!func_116(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_117(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_151(iParam0, 1399091007))
	{
		func_152(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_130(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_135(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_131(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_132(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_133(int iParam0)
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

int func_134(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_153(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_155(&Var0, func_154(0));
	}
	if (!func_156(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_133(iVar14);
	return uVar15;
}

int func_135(bool bParam0)
{
	if (func_58() == -1)
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

int func_136()
{
	iVar0 = func_157();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_137(int iParam0)
{
	if (func_58() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_158(absf(fVar1) < 1f, func_158(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_138()
{
	if (func_58() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_139(int iParam0, int iParam1, int iParam2)
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

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_141()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_142(int iParam0, bool bParam1, int iParam2)
{
	func_159((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_160(iParam0);
}

void func_143(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_161(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_144(bool bParam0)
{
	bVar3 = false;
	if (func_162(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_163(iVar5, &iVar2, &iVar0))
			{
				if (!func_116(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_164(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_117(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_136() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_136() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_165();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_145(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_146(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_147(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_166(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_148(int iParam0, int iParam1)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	if (!func_112())
	{
		return 0;
	}
	if (!func_168(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

bool func_149(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_150(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_169(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_151(int iParam0, int iParam1)
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

void func_152(int iParam0, var uParam1, var uParam2)
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

struct<14> func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_154(bool bParam0)
{
	iVar0 = func_135(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_171(923904168, func_170(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_171(923904168, func_170(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_171(923904168, func_170(bParam0), -740156546, 0);
}

void func_155(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_156(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_135(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_157()
{
	return Global_40.f_11095.f_35;
}

float func_158(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_159(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_172(bParam1);
	}
}

void func_160(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_161(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_162(int iParam0)
{
	if (!func_173(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	if (!func_173(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_164(int iParam0)
{
	return iParam0;
}

int func_165()
{
	iVar0 = func_136();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_166(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_167(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_168(int iParam0, int iParam1, var uParam2)
{
	if (!func_167(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_169(int iParam0)
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

struct<4> func_170(bool bParam0)
{
	return func_171(1328661203, func_174(), -1591664384, bParam0);
}

struct<4> func_171(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_116(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_135(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_172(bool bParam0)
{
	func_175(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_173(int iParam0, var uParam1)
{
	if (!func_176(iParam0))
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

struct<4> func_174()
{
	return Var0;
}

void func_175(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

