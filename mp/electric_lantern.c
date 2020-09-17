void __EntryFunction__()
{
	if (has_force_cleanup_occurred(514))
	{
		func_1();
		terminate_this_thread();
	}
	while (!func_2())
	{
		if (func_3())
		{
			vVar0 = { func_4(get_offset_from_entity_in_world_coords(Global_34, 0f, 5f, 0f) - get_entity_coords(Global_34, true, false)) };
			vVar3 = { func_5() };
			vVar3.f_2 = Global_35.f_2;
			vVar6 = { func_4(vVar3 - Global_35) };
			fVar9 = acos(func_6(vVar0, vVar6));
			fVar10 = (180f - fVar9);
			fVar11 = (fVar10 / 180f);
			func_7(fVar11, 0f, 1f);
			iVar12 = 255;
			iVar13 = 195;
			iVar14 = 77;
			iVar15 = 255;
			iVar16 = 30;
			iVar17 = 0;
			_set_lights_color_for_entity(iLocal_0, floor(func_8(to_float(iVar12), to_float(iVar15), fVar11)), floor(func_8(to_float(iVar13), to_float(iVar16), fVar11)), floor(func_8(to_float(iVar14), to_float(iVar17), fVar11)));
		}
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	set_object_as_no_longer_needed(&iLocal_0);
}

bool func_2()
{
	if (is_entity_dead(Global_34))
	{
		return true;
	}
	if (bLocal_1 && !does_entity_exist(iLocal_0))
	{
		return true;
	}
	if (Global_1940258->f_38 != 827679807)
	{
		return true;
	}
	return false;
}

bool func_3()
{
	if (bLocal_1)
	{
		return true;
	}
	if (!does_entity_exist(iLocal_0))
	{
		if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
		{
			if (iVar0 == 827679807)
			{
				iLocal_0 = get_object_index_from_entity_index(get_current_ped_weapon_entity_index(Global_34, 0));
			}
		}
	}
	if (does_entity_exist(iLocal_0))
	{
		bLocal_1 = true;
		return true;
	}
	return false;
}

Vector3 func_4(vector3 vParam0)
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

Vector3 func_5()
{
	return -1502.098f, 2458.125f, 418.487f;
}

float func_6(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_7(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_8(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

