void __EntryFunction__()
{
	if (has_force_cleanup_occurred(523))
	{
	}
	iVar3 = 0;
	while (!_0x9e4ef615e307fbbe())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			wait(0);
		}
	}
	terminate_this_thread();
}

bool func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*iParam0 < 5)
	{
		if (((func_2() || (_0x3ab6c7b0bb0df4b1(Global_35, -1) && !_0x3ab6c7b0bb0df4b1(Global_35, *uParam1))) || !func_3()) || !is_ped_on_foot(Global_35))
		{
			if (_does_anim_scene_exist(*uParam1))
			{
				_delete_anim_scene(*uParam1);
			}
			return true;
		}
		else
		{
			Global_1935496->f_127 = 1;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_4(uParam3, 0);
			}
			if (func_5(uParam3) && func_6(uParam3) > 2f)
			{
				func_7(iParam0, 1);
				func_8(uParam3);
			}
			break;
		case 1:
			*uParam1 = _create_anim_scene("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_7(iParam0, 2);
			break;
		case 2:
			if (_does_anim_scene_exist(*uParam1))
			{
				load_anim_scene(*uParam1);
				func_7(iParam0, 3);
			}
			break;
		case 3:
			if (_is_anim_scene_loaded(*uParam1, true, false))
			{
				set_anim_scene_entity(*uParam1, "ARTHUR", Global_35, 0);
				start_anim_scene(*uParam1);
				func_7(iParam0, 5);
			}
			break;
		case 5:
			if (!_is_anim_scene_started(*uParam1, false))
			{
				remove_anim_scene_entity(*uParam1, "ARTHUR", Global_35);
				func_7(iParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_2()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_3()
{
	return func_9(1);
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1 || !func_5(uParam0))
	{
		func_10(uParam0);
	}
}

bool func_5(var uParam0)
{
	return func_11(*uParam0, 1);
}

float func_6(var uParam0)
{
	if (!func_5(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_12(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_13() - uParam0->f_1);
}

void func_7(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_9(int iParam0)
{
	return func_14(iParam0);
}

void func_10(var uParam0)
{
	func_15(uParam0, 0f);
}

bool func_11(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_12(var uParam0)
{
	return func_11(*uParam0, 2);
}

float func_13()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_14(int iParam0)
{
	return func_16(Global_1935496->f_27, iParam0);
}

void func_15(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13() - fParam1);
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

