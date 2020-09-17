void __EntryFunction__()
{
	if (ScriptParam_0 != -1)
	{
	}
	else
	{
		return;
	}
	iVar0 = 0;
	iVar1 = ScriptParam_0.f_1;
	uVar2 = ScriptParam_0.f_2;
	uVar3 = ScriptParam_0;
	iVar4 = -1;
	if (Global_1071686->f_28357.f_11.f_72 != iVar1)
	{
	}
	else
	{
		iVar4 = Global_1071686->f_28357.f_11.f_71;
		Global_1071686->f_28357.f_11.f_71 = -1;
		Global_1071686->f_28357.f_11.f_72 = 0;
	}
	iVar5 = get_hash_of_this_script_name();
	while (!func_1(&iVar5, &iVar1, &iVar0) && func_2(&iVar0, &uVar2, &iVar1, &uVar3, &iVar4, &(ScriptParam_0.f_3)))
	{
		wait(0);
	}
}

bool func_1(int iParam0, int iParam1, int iParam2)
{
	if (func_3(0, 0))
	{
		return true;
	}
	if (*iParam2 == 2)
	{
		return true;
	}
	return false;
}

bool func_2(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	switch (*iParam0)
	{
		case 0:
			if (func_4(uParam1, iParam2, uParam3, iParam4, uParam5))
			{
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		case 1:
			if (func_5(uParam1, uParam5))
			{
				*iParam0 = 2;
			}
			break;
		case 2:
			func_6(uParam1, uParam5);
			return false;
	}
	return true;
}

bool func_3(bool bParam0, bool bParam1)
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

int func_4(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (is_entity_dead(player_ped_id()))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case 0:
			return func_7(iParam1, uParam2, iParam3, uParam4);
		default:
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_8(uParam1);
		default:
			break;
	}
	return 1;
}

int func_6(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_9(uParam1);
		default:
			break;
	}
	return 1;
}

int func_7(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (*uParam3)
	{
	}
	else
	{
		func_10(*iParam0, uParam1, iParam2);
	}
	return 1;
}

int func_8(var uParam0)
{
	if (*uParam0)
	{
		return 1;
	}
	else
	{
		iVar0 = get_script_task_status(Global_1296859->f_8, 655598529, true);
		if (!((iVar0 == 1 || iVar0 == 0) || iVar0 == 6))
		{
			return 1;
		}
	}
	return 0;
}

int func_9(var uParam0)
{
	if (*uParam0)
	{
	}
	return 1;
}

void func_10(var uParam0, var uParam1, int iParam2)
{
	if ((_0x84d0bf2b21862059(Global_1296859->f_8) || is_ped_sitting_in_any_vehicle(Global_1296859->f_8)) || is_ped_on_mount(Global_1296859->f_8))
	{
		iVar0 = 0;
	}
	else if (*iParam2 != -1)
	{
		iVar0 = *iParam2;
	}
	else
	{
		iVar0 = 2;
	}
	_task_emote_2(Global_1296859->f_8, *uParam1, iVar0, uParam0, 0, 1, 0, 0, 0);
}

