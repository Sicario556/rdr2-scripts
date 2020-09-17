void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = ScriptParam_0;
	if (func_1() == -1)
	{
	}
	else
	{
		func_2();
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		func_2();
	}
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (&Global_1879534)
	{
		wait(0);
	}
	Var0 = func_3(5);
	Var0.f_6 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "gang_enc_bandito_shack", 32);
	Var10.f_14 = 2048;
	Var10.f_15 = 1;
	func_4(Var10, 0);
	func_2();
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	_0xe7282390542f570d(uLocal_14);
	if (func_1() != -1)
	{
		terminate_this_thread();
		return;
	}
	terminate_this_thread();
}

var func_3(int iParam0)
{
	return Global_40.f_9571[iParam0]->f_9;
}

void func_4(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_5(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_6(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_7(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_6(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_7(int iParam0)
{
	if (func_5(iParam0, 1))
	{
		func_8(1);
	}
}

void func_8(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

