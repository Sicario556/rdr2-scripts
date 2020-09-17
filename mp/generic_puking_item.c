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
	disable_control_action(0, -822242784, false);
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_2(uParam3, 0);
				bParam2 = false;
			}
			if (func_3(uParam3) && func_4(uParam3) > 2f)
			{
				func_5(iParam0, 1);
				func_6(uParam3);
			}
			break;
		case 1:
			*uParam1 = _create_anim_scene("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_5(iParam0, 2);
			break;
		case 2:
			if (_does_anim_scene_exist(*uParam1))
			{
				load_anim_scene(*uParam1);
				func_5(iParam0, 3);
			}
			break;
		case 3:
			if (_is_anim_scene_loaded(*uParam1, true, false) && _is_anim_scene_metadata_loaded(*uParam1, false))
			{
				if (is_ped_male(Global_34))
				{
					set_anim_scene_entity(*uParam1, "MP_Male", Global_34, 0);
				}
				else
				{
					set_anim_scene_entity(*uParam1, "MP_Female", Global_34, 0);
				}
				start_anim_scene(*uParam1);
				func_5(iParam0, 5);
			}
			break;
		case 5:
			if ((!_is_anim_scene_started(*uParam1, false) || is_ped_falling(Global_34)) || is_entity_in_water(Global_34))
			{
				if (is_ped_male(Global_34))
				{
					remove_anim_scene_entity(*uParam1, "MP_Male", Global_34);
				}
				else
				{
					remove_anim_scene_entity(*uParam1, "MP_Female", Global_34);
				}
				func_5(iParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1 || !func_3(uParam0))
	{
		func_7(uParam0);
	}
}

bool func_3(var uParam0)
{
	return func_8(*uParam0, 1);
}

float func_4(var uParam0)
{
	if (!func_3(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_9(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_10() - uParam0->f_1);
}

void func_5(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_7(var uParam0)
{
	func_11(uParam0, 0f);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	return func_8(*uParam0, 2);
}

float func_10()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10() - fParam1);
	func_12(uParam0, 1);
	func_13(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

