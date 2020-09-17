void __EntryFunction__()
{
	uLocal_48 = ScriptParam_0;
	Local_49.f_1 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(514))
	{
		func_1();
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_1();
	}
	while (func_2())
	{
		switch (iLocal_47)
		{
			case 0:
				if (func_3(&Local_49))
				{
					iLocal_47 = 1;
				}
				break;
			case 1:
				func_4();
				break;
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	func_5();
	_0xe7282390542f570d(uLocal_48);
	terminate_this_thread();
}

bool func_2()
{
	if (_0x9e4ef615e307fbbe())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	if (Local_49 == 0)
	{
		iVar0 = _get_scenario_point_type(uParam0->f_1);
		Local_49 = func_6(iVar0);
		return false;
	}
	return true;
}

void func_4()
{
	Local_13.f_32 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (!func_7(iVar1))
		{
			return;
		}
		if (func_8(Global_34, &(Local_13[iVar0]->f_1[2]), 1, 0))
		{
			iVar2 = 3;
			while (iVar2 <= 5)
			{
				if (func_8(Global_34, &(Local_13[iVar0]->f_1[iVar2]), 1, 0))
				{
					Local_13.f_31 = iVar2;
					bVar3 = is_ped_on_mount(player_ped_id());
					if (bVar3)
					{
						iVar4 = get_mount(player_ped_id());
					}
					if (is_entity_in_water(player_ped_id()) || (bVar3 && is_entity_in_water(iVar4)))
					{
						if (!func_9())
						{
							func_10(1);
						}
					}
					else if (func_9())
					{
						func_10(0);
					}
				}
				else if (func_9() && Local_13.f_31 == iVar2)
				{
					func_10(0);
				}
				iVar2++;
			}
		}
		switch (&Local_13[iVar0])
		{
			case 0:
				func_11(Local_13[iVar0], 1);
				break;
			case 1:
				request_ptfx_asset();
				if (!has_ptfx_asset_loaded())
				{
					return;
				}
				func_11(Local_13[iVar0], 2);
				break;
			case 2:
				iVar5 = 0;
				while (iVar5 <= 5)
				{
					if (!func_13(Local_13[iVar0]->f_1[iVar5], func_12(iVar1, iVar5)))
					{
						return;
					}
					iVar5++;
				}
				if (!does_particle_fx_looped_exist(Local_13[iVar0]->f_8))
				{
					Local_13[iVar0]->f_8 = start_particle_fx_looped_at_coord("ent_amb_steam_geyser", func_14(iVar1), 0f, 0f, 0f, 1f, false, false, false, false);
				}
				if (!does_particle_fx_looped_exist(Local_13[iVar0]->f_8))
				{
					return;
				}
				if (func_11(Local_13[iVar0], func_15(iVar1)))
				{
					func_16(iVar1, &(Local_13[iVar0]));
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				func_17(iVar1);
				if (func_11(Local_13[iVar0], func_15(iVar1)))
				{
					func_16(iVar1, &(Local_13[iVar0]));
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_18(Local_13[iVar0]->f_1[iVar1]);
			iVar1++;
		}
		iVar0++;
	}
	remove_shocking_event(Local_13.f_33);
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case -1605488611:
			return 1351526287;
		default:
			break;
	}
	return 0;
}

bool func_7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
	}
	return false;
}

bool func_8(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_9()
{
	if (func_19())
	{
		return false;
	}
	return Global_1956200->f_1431.f_96 == 0;
}

void func_10(int iParam0)
{
	Global_1956200->f_1431 = iParam0;
}

bool func_11(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

struct<11> func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 224.4436f, 1906.525f, 207.2073f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 665633627;
					break;
				case 1:
					Var0 = { 224.4328f, 1906.671f, 203.5702f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 665633627;
					break;
				case 2:
					Var0 = { 224.5328f, 1922.529f, 203.5702f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 40f, 40f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION1";
					Var0.f_10 = 665633627;
					break;
				case 3:
					Var0 = { 251.9829f, 1909.192f, 204.0304f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 7f, 7f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 4:
					Var0 = { 234.7751f, 1939.719f, 203.8331f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 18f, 18f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 5:
					Var0 = { 197.2354f, 1911.487f, 203.8331f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 8f, 8f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 665633627;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 191.666f, 1831.29f, 202.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 665633627;
					break;
				case 1:
					Var0 = { 191.766f, 1831.39f, 198.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 665633627;
					break;
				case 2:
					Var0 = { 188.2542f, 1819.456f, 198.4614f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 28f, 28f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION2";
					Var0.f_10 = 665633627;
					break;
				case 3:
					Var0 = { 173.5744f, 1836.124f, 200.0205f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 4:
					Var0 = { 176.4688f, 1813.247f, 200.0197f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 12f, 12f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 5:
					Var0 = { 208.2183f, 1821.611f, 200.0197f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 5.5f, 5.5f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 665633627;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 129.107f, 1878.372f, 201.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 665633627;
					break;
				case 1:
					Var0 = { 129.107f, 1878.372f, 198.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1.25f, 1.25f, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 665633627;
					break;
				case 2:
					Var0 = { 139.0299f, 1875.571f, 198.1505f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 25f, 25f, 25f };
					Var0.f_9 = "DISCO_GEYSER_LOCATION3";
					Var0.f_10 = 665633627;
					break;
				case 3:
					Var0 = { 125.8097f, 1865.035f, 200.3174f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 2.5f, 2.5f, 10f };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 4:
					Var0 = { 143.7371f, 1866.656f, 200.2199f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 9f, 9f, 10f };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 665633627;
					break;
				case 5:
					Var0 = { 136.359f, 1890.56f, 200.2199f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 10f };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 665633627;
					break;
			}
			break;
	}
	return Var0;
}

bool func_13(var uParam0, struct<10> Param1, var uParam11)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_by_hash_with_custom_name(Param1.f_10, Param1, Param1.f_3, Param1.f_6, Param1.f_9);
	}
	if (!_does_volume_exist(*uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 224.4436f, 1906.525f, 206.0843f;
		case 1:
			return 191.666f, 1831.29f, 200.4614f;
		case 2:
			return 129.107f, 1878.372f, 200.1505f;
	}
	return 0f, 0f, 0f;
}

int func_15(int iParam0)
{
	if (func_20(iParam0))
	{
		return 3;
	}
	if (func_21(iParam0))
	{
		return 4;
	}
	if (func_22(iParam0))
	{
		return 5;
	}
	if (func_23(iParam0))
	{
		return 6;
	}
	return 2;
}

void func_16(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			if (does_particle_fx_looped_exist(Local_13[iParam0]->f_8))
			{
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Steam", 0.25f, false);
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					remove_shocking_event(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0]->f_9 = 0;
			}
			break;
		case 4:
			if (does_particle_fx_looped_exist(Local_13[iParam0]->f_8))
			{
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Steam", 1f, false);
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					remove_shocking_event(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0]->f_9 = 0;
			}
			break;
		case 5:
			if (does_particle_fx_looped_exist(Local_13[iParam0]->f_8))
			{
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Steam", 0.5f, false);
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = add_shocking_event_at_position(-998484125, func_14(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (does_entity_exist(get_mount(Global_34)) && !is_entity_dead(get_mount(Global_34)))
				{
					_0x23bde06596a22cec(get_mount(Global_34), 1, 0.15f, 0);
				}
				_0x23bde06596a22cec(Global_34, 1, 1f, 0);
				Local_13[iParam0]->f_9 = 0;
			}
			break;
		case 6:
			if (does_particle_fx_looped_exist(Local_13[iParam0]->f_8))
			{
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Steam", 0.75f, false);
				set_particle_fx_looped_evolution(Local_13[iParam0]->f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = add_shocking_event_at_position(-998484125, func_14(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (does_entity_exist(get_mount(Global_34)) && !is_entity_dead(get_mount(Global_34)))
				{
					_0x23bde06596a22cec(get_mount(Global_34), 1, 0.15f, 0);
				}
				_0x23bde06596a22cec(Global_34, 1, 1f, 0);
				Local_13[iParam0]->f_9 = 0;
			}
			break;
	}
}

void func_17(int iParam0)
{
	if (Local_13[iParam0]->f_9)
	{
		return;
	}
	if (!_does_volume_exist(&(Local_13[iParam0]->f_1[0])))
	{
		return;
	}
	if (!is_entity_in_volume(Global_34, &(Local_13[iParam0]->f_1[0]), true, 0))
	{
		return;
	}
	vVar3 = { get_entity_coords(Global_34, true, false) };
	vVar6 = { func_14(iParam0) };
	vVar6.f_2 = vVar3.z;
	vVar0 = { vVar3 - vVar6 };
	vVar0 = { func_24(vVar0) };
	set_ped_to_ragdoll_with_fall(Global_34, 3000, 5000, 0, vVar0, 204f, 0f, 0f, 0f, 0f, 0f, 0f);
	apply_force_to_entity(Global_34, 1, vVar0 * Vector(6f, 6f, 6f), 0f, 0f, 0f, 0, false, false, true, false, true);
	Local_13[iParam0]->f_9 = 1;
}

void func_18(var uParam0)
{
	if (_does_volume_exist(*uParam0))
	{
		_delete_volume(*uParam0);
	}
}

bool func_19()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

bool func_20(int iParam0)
{
	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= 0 && iVar0 < func_26(iParam0))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
{
	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= func_26(iParam0) && iVar0 < (func_26(iParam0) + func_27(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0)
{
	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= (func_26(iParam0) + func_27(iParam0)) && iVar0 < ((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= ((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) && iVar0 < (((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) + func_29(iParam0)))
	{
		return true;
	}
	return false;
}

Vector3 func_24(vector3 vParam0)
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

int func_25(int iParam0)
{
	return (((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) + func_29(iParam0));
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 30;
		case 1:
			return 42;
		case 2:
			return 57;
		default:
			break;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 12;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

