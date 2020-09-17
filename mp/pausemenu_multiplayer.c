void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	switch (ScriptParam_0)
	{
		case 2:
			if (ScriptParam_0.f_1 == -821438348 || ScriptParam_0.f_1 == -968517323)
			{
				if (!_0x2a8112a974de1ef6())
				{
					return;
				}
				do_screen_fade_out(0);
				func_1(0);
				set_frontend_active(false);
			}
			else if (ScriptParam_0.f_1 == -1214041525 || ScriptParam_0.f_1 == -118730902)
			{
				if (!_0x2a8112a974de1ef6())
				{
					return;
				}
				func_1(1);
				do_screen_fade_out(0);
				set_frontend_active(false);
			}
			else if (ScriptParam_0.f_1 != 745042118)
			{
				if (ScriptParam_0.f_1 == 173068202)
				{
					if (!_0x2a8112a974de1ef6())
					{
						return;
					}
					if (func_2())
					{
						do_screen_fade_out(0);
						set_frontend_active(false);
					}
				}
			}
			else
			{
				do_screen_fade_out(0);
				func_3();
				set_frontend_active(false);
			}
			break;
		default:
			break;
	}
	terminate_this_thread();
}

void func_1(bool bParam0)
{
	func_4(68);
	func_5();
	if (bParam0)
	{
		func_6(-1050153785, -1357178860, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_6(-1050153785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_7(3);
}

bool func_2()
{
	if (is_orbis_version())
	{
		if (!_0x595f028698072dd9(-1))
		{
			_0x5c497525f803486b();
			return false;
		}
	}
	func_4(68);
	func_5();
	func_6(1375707186, 1651967528, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	return true;
}

void func_3()
{
	func_4(4);
	func_5();
	func_7(2);
	func_6(1785216189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_4(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_5()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887->f_405 = iParam0;
	if (iParam1 != 0)
	{
		func_8(iParam1);
	}
	if (iParam2 != 0)
	{
		func_8(iParam2);
	}
	if (iParam3 != 0)
	{
		func_8(iParam3);
	}
	if (iParam4 != 0)
	{
		func_8(iParam4);
	}
	if (iParam5 != 0)
	{
		func_8(iParam5);
	}
	if (iParam6 != 0)
	{
		func_8(iParam6);
	}
	if (iParam7 != 0)
	{
		func_8(iParam7);
	}
	if (iParam8 != 0)
	{
		func_8(iParam8);
	}
	if (iParam9 != 0)
	{
		func_8(iParam9);
	}
	if (iParam10 != 0)
	{
		func_8(iParam10);
	}
	func_9();
}

void func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_8(int iParam0)
{
	func_11(&(Global_1572887->f_405.f_1), func_10(iParam0), 3);
}

void func_9()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (func_12(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887->f_405.f_5 != -1)
	{
	}
	if (Global_1572887->f_405.f_6 != -1)
	{
	}
	if (Global_1572887->f_405.f_7 != -1)
	{
	}
	if (Global_1572887->f_405.f_8 != -1)
	{
	}
	if (Global_1572887->f_405.f_9 != -1)
	{
	}
	if (Global_1572887->f_405.f_11 != 0)
	{
	}
}

int func_10(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case -88424047:
			iVar0 = 1;
			break;
		case 1651967528:
			iVar0 = 2;
			break;
		case -84928653:
			iVar0 = 3;
			break;
		case 1306134188:
			iVar0 = 4;
			break;
		case -1357178860:
			iVar0 = 5;
			break;
		case 133180145:
			iVar0 = 6;
			break;
		case 655115506:
			iVar0 = 7;
			break;
		case 1737952409:
			iVar0 = 8;
			break;
		case 2137301164:
			iVar0 = 9;
			break;
		case -110687166:
			iVar0 = 10;
			break;
		case -2030542394:
			iVar0 = 11;
			break;
		case -11301188:
			iVar0 = 12;
			break;
		case -1312679892:
			iVar0 = 13;
			break;
		case -61119924:
			iVar0 = 14;
			break;
		case 2134863183:
			iVar0 = 15;
			break;
		case -159568751:
			iVar0 = 16;
			break;
		case -1808811965:
			iVar0 = 17;
			break;
		case -1854341522:
			iVar0 = 18;
			break;
		case 1464020707:
			iVar0 = 19;
			break;
		case 1098974047:
			iVar0 = 20;
			break;
		case 868706284:
			iVar0 = 21;
			break;
		case 313296873:
			iVar0 = 22;
			break;
		case 541270806:
			iVar0 = 23;
			break;
		case 922800273:
			iVar0 = 24;
			break;
		case 1298496858:
			iVar0 = 25;
			break;
		case 1699163417:
			iVar0 = 26;
			break;
		case 864110990:
			iVar0 = 27;
			break;
		case -2127829790:
			iVar0 = 28;
			break;
		case -575777117:
			iVar0 = 29;
			break;
		case -1879562593:
			iVar0 = 30;
			break;
		case 1890312850:
			iVar0 = 31;
			break;
		case 1735278055:
			iVar0 = 32;
			break;
		case -1480790826:
			iVar0 = 33;
			break;
	}
	return iVar0;
}

bool func_11(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_12(int iParam0)
{
	return func_13(&(Global_1572887->f_405.f_1), iParam0, 3);
}

bool func_13(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

