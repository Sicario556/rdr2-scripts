void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(523))
	{
		func_1(&iScriptParam_0, 1);
	}
	Global_1898092->f_26.f_1 = iScriptParam_0;
	Global_1898092->f_26.f_2 = func_2(Global_1898092->f_26.f_1);
	if (!func_3(Global_1898092->f_26.f_2))
	{
		func_1(&iScriptParam_0, 0);
	}
	while (func_4(1) || func_4(2))
	{
		wait(0);
	}
	func_5(16);
	func_6(iScriptParam_0, 8);
	func_7(iScriptParam_0, 1);
	while (!func_8(iScriptParam_0))
	{
		wait(0);
	}
	func_1(&iScriptParam_0, 0);
}

void func_1(int iParam0, bool bParam1)
{
	if (bParam1 || bLocal_14)
	{
		func_7(*iParam0, 0);
	}
	if (bLocal_14)
	{
		func_9(*iParam0, 8);
		func_10();
	}
	terminate_this_thread();
}

int func_2(int iParam0)
{
	if (!func_11(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_3(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_4(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

void func_5(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

void func_6(int iParam0, int iParam1)
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

void func_7(int iParam0, int iParam1)
{
	if (!func_11(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

bool func_8(int iParam0)
{
	iVar0 = func_2(iParam0);
	if (!func_3(iVar0))
	{
		bLocal_14 = true;
		return true;
	}
	if (func_12((*Global_1392194)[iVar0]->f_1, 1))
	{
		return true;
	}
	if (!func_13(iParam0, 1, 0, (300f * 300f), 0))
	{
		bLocal_14 = true;
		return true;
	}
	return false;
}

void func_9(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_10()
{
	Global_1898092->f_26 = 0;
	Global_1898092->f_26.f_1 = -1;
	Global_1898092->f_26.f_2 = -1;
	Global_1898092->f_26.f_7 = -1;
	Global_1898092->f_26.f_3 = 0;
	Global_1898092->f_26.f_4 = 0;
	func_14(Global_1898092->f_26.f_5);
}

bool func_11(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_13(int iParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = -1;
	if (bParam4)
	{
		iVar0 = func_15();
	}
	if (iVar0 == -1)
	{
		vVar1 = { get_entity_coords(player_ped_id(), false, false) };
	}
	if (iVar0 == iParam0)
	{
		return true;
	}
	if (_0xf256a75210c5c0eb(func_16(iParam0), vVar1))
	{
		return true;
	}
	if (bParam1)
	{
		vVar1 = { get_entity_coords(player_ped_id(), false, false) };
		vVar4 = { _0xf70f00013a62f866(func_16(iParam0)) };
		vVar1.f_2 = 0f;
		vVar4.f_2 = 0f;
		fVar13 = vdist2(vVar1, vVar4);
		if (fVar13 < fParam3)
		{
			if (!bParam2)
			{
				return true;
			}
			else
			{
				vVar7 = { func_18(func_17(get_gameplay_cam_relative_heading())) };
				vVar10 = { func_18(vVar4 - vVar1) };
				if (func_19(vVar7, vVar10) > 0f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_14(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_15()
{
	return Global_1894899->f_2;
}

int func_16(int iParam0)
{
	if (!func_11(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

Vector3 func_17(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

Vector3 func_18(vector3 vParam0)
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

float func_19(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

