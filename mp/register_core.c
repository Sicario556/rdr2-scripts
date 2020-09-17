void __EntryFunction__()
{
	Local_13.f_12 = ScriptParam_0;
	if (has_force_cleanup_occurred(514))
	{
		func_1(&Local_13);
	}
	if (_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		Local_13.f_2 = ScriptParam_0.f_1;
		Local_13.f_1 = _get_entity_scenario_point_is_attached_to(Local_13.f_2);
	}
	else
	{
		func_1(&Local_13);
	}
	vVar0 = { get_entity_coords(Local_13.f_1, false, false) };
	if (!func_2(vVar0))
	{
		func_1(&Local_13);
	}
	while (true)
	{
		Local_13.f_13 = (1 + Local_13.f_13);
		if (Local_13.f_13 >= 30)
		{
			Local_13.f_13 = 0;
			if (Global_1940258->f_6)
			{
				func_3(&Local_13, 5);
			}
		}
		if (func_4(&Global_1940258, 4194304))
		{
			func_3(&Local_13, 5);
		}
		if (_0x9e4ef615e307fbbe())
		{
			func_1(&Local_13);
		}
		switch (func_5(&Local_13))
		{
			case 0:
				if (func_6(&Local_13))
				{
					func_7(&Local_13);
					func_8(&Local_13);
				}
				if (_does_scenario_point_exist(Local_13.f_2))
				{
					if (func_9(Global_35) && func_10(&Local_13))
					{
						func_3(&Local_13, 1);
					}
				}
				else
				{
					func_3(&Local_13, 5);
				}
				break;
			case 1:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				if (func_11(&Local_13))
				{
					func_3(&Local_13, 2);
				}
				break;
			case 2:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				if (does_entity_exist(Local_13.f_1))
				{
					if (func_12(&Local_13))
					{
						func_3(&Local_13, 3);
					}
				}
				break;
			case 3:
				if (func_6(&Local_13))
				{
					func_13(&Local_13);
					func_14(&Local_13);
					func_8(&Local_13);
				}
				if (func_15(Local_13.f_11))
				{
					func_3(&Local_13, 4);
				}
				break;
			case 4:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				break;
			case 5:
				func_1(&Local_13);
				break;
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	_0xe7282390542f570d(uParam0->f_12);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		if (does_entity_exist(&(uParam0->f_7[iVar0])))
		{
			delete_object(uParam0->f_7[iVar0]);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(uParam0->f_11))
	{
		_delete_anim_scene(uParam0->f_11);
	}
	terminate_this_thread();
}

bool func_2(var uParam0, var uParam1, var uParam2)
{
	return false;
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_16(uParam0);
}

bool func_4(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_5(var uParam0)
{
	return *uParam0;
}

bool func_6(var uParam0)
{
	return uParam0->f_14;
}

void func_7(var uParam0)
{
	uParam0->f_3[0] = 1477581656;
	uParam0->f_3[1] = 1477581656;
	if (!_does_anim_scene_exist(uParam0->f_11))
	{
		uParam0->f_11 = _create_anim_scene("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);
	}
}

void func_8(var uParam0)
{
	uParam0->f_14 = 0;
}

int func_9(vector3 vParam0)
{
	if (!is_collision_marked_outside(vParam0))
	{
		iVar0 = get_interior_from_collision(vParam0);
		if (is_valid_interior(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = &uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			request_model(iVar1, false);
		}
		iVar0++;
	}
	if ((_does_anim_scene_exist(uParam0->f_11) && !_is_anim_scene_loaded(uParam0->f_11, true, false)) && !_is_anim_scene_loading(uParam0->f_11, true))
	{
		load_anim_scene(uParam0->f_11);
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_11, "pblMain"))
	{
		if (!_0x0df57f86fe71dbe5(uParam0->f_11, "pblMain"))
		{
			_0xdf7b5144e25cd3fe(uParam0->f_11, "pblMain");
		}
		return 0;
	}
	return 1;
}

bool func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = &uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			if (!has_model_loaded(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!_is_anim_scene_loaded(uParam0->f_11, true, false))
	{
		return false;
	}
	return true;
}

bool func_12(var uParam0)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!decor_exist_on(uParam0->f_1, "register_open"))
	{
		return false;
	}
	return decor_get_bool(uParam0->f_1, "register_open");
}

void func_13(var uParam0)
{
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_7[0] = create_object(&(uParam0->f_3[0]), vVar0, true, true, false, false, true);
	_0x8360c47380b6f351(uParam0->f_2, &(uParam0->f_7[0]), "OOXO", 1);
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_7[1] = create_object(&(uParam0->f_3[1]), vVar0, true, true, false, false, true);
	_0x8360c47380b6f351(uParam0->f_2, &(uParam0->f_7[1]), "OXOO", 1);
}

void func_14(var uParam0)
{
	set_anim_scene_origin(uParam0->f_11, get_entity_coords(uParam0->f_1, true, false), get_entity_rotation(uParam0->f_1, 2), 2);
	set_anim_scene_entity(uParam0->f_11, "OOXO", &(uParam0->f_7[0]), 0);
	set_anim_scene_entity(uParam0->f_11, "OXOO", &(uParam0->f_7[1]), 0);
	set_anim_scene_entity(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	start_anim_scene(uParam0->f_11);
	_set_anim_scene_playback_list_bool(uParam0->f_11, "pblMain", true);
}

bool func_15(int iParam0)
{
	if (_get_anim_scene_progress(iParam0) >= 1f)
	{
		return true;
	}
	return false;
}

void func_16(var uParam0)
{
	uParam0->f_14 = 1;
}

