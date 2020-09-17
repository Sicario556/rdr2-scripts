void __EntryFunction__()
{
	sLocal_4 = "SCRB";
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	while (true)
	{
		switch (iLocal_0)
		{
			case 0:
				_text_database_request(sLocal_4);
				iLocal_0 = 1;
				break;
			case 1:
				if (_text_database_has_loaded(sLocal_4))
				{
					func_2(&uLocal_1);
					iLocal_0 = 2;
				}
				break;
			case 2:
				if (func_3(&uLocal_1) > 15f)
				{
					func_1();
					iLocal_0 = 3;
				}
				else if (!bLocal_5)
				{
					func_4();
					bLocal_5 = true;
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_5(1);
	_text_database_delete(sLocal_4);
	terminate_this_thread();
}

void func_2(var uParam0)
{
	func_6(uParam0, 0f);
}

float func_3(var uParam0)
{
	if (!func_7(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_8(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_9() - uParam0->f_1);
}

void func_4()
{
	iVar0 = Global_40.f_9146.f_3;
	switch (iVar0)
	{
		case 4:
			sVar1 = "CR_RHD_R1";
			break;
		case 5:
			sVar1 = "CR_RHD_R2";
			break;
		case 6:
			sVar1 = "CR_RHD_R3";
			break;
		case 13:
			sVar1 = "CR_RHD_RTL";
			break;
		case 0:
			sVar1 = "CR_STR_R1";
			break;
		case 1:
			sVar1 = "CR_STR_R2";
			break;
		case 2:
			sVar1 = "CR_STR_R3";
			break;
	}
	func_10(sVar1, 0, 0, 1);
}

void func_5(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_6(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9() - fParam1);
	func_11(uParam0, 1);
	func_12(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_7(var uParam0)
{
	return func_13(*uParam0, 1);
}

bool func_8(var uParam0)
{
	return func_13(*uParam0, 2);
}

float func_9()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

var func_10(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_13(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

