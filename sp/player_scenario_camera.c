void __EntryFunction__()
{
	uLocal_45 = ScriptParam_0;
	iLocal_46 = ScriptParam_0.f_1;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	while (func_2())
	{
		wait(0);
	}
	func_1();
}

void func_1()
{
	_0xe7282390542f570d(uLocal_45);
	terminate_this_thread();
}

int func_2()
{
	if ((is_ped_injured(player_ped_id()) || !_does_scenario_point_exist(iLocal_46)) || !_0x9c54041bb66bcf9e(player_ped_id(), iLocal_46))
	{
		func_3();
		return 0;
	}
	return func_4();
}

void func_3()
{
	if (Local_0.f_44)
	{
		if (_0xdd0b7c5ae58f721d(&(Local_0.f_1)))
		{
			_0x798be43c9393632b(&(Local_0.f_1));
		}
		if (_0x927b810e43e99932(&(Local_0.f_1)))
		{
			_0x0a5a4f1979abb40e(&(Local_0.f_1));
		}
		Local_0.f_44 = 0;
	}
	if (_0x603ac35fd4602c76(Local_0.f_34))
	{
		_datafile_unload(Local_0.f_34);
	}
}

int func_4()
{
	switch (Local_0)
	{
		case 0:
			Local_0.f_32 = _get_scenario_point_ped_is_using(Global_35, false);
			if (!_does_scenario_point_exist(Local_0.f_32))
			{
				return 0;
			}
			Local_0.f_33 = _get_entity_scenario_point_is_attached_to(Local_0.f_32);
			Local_0.f_34 = _0xd97d8d905f1562f2(82155782);
			Local_0.f_35 = _get_scenario_point_type(Local_0.f_32);
			Local_0 = 1;
			break;
		case 1:
			if (is_ped_active_in_scenario(Global_35, 1) && _0x603ac35fd4602c76(Local_0.f_34))
			{
				func_5();
				if (!func_6())
				{
					func_3();
					Local_0 = 5;
					return 0;
				}
				_datafile_unload(Local_0.f_34);
				func_7("player_scenario_orbit_cam", &(Local_0.f_36));
				Local_0 = 2;
			}
			break;
		case 2:
			if (func_8())
			{
				Local_0 = 3;
			}
			break;
		case 3:
			if (Local_0.f_33 != 0)
			{
				_0xd904f75dbd7ab865(Local_0.f_33);
			}
			if (!is_ped_active_in_scenario(Global_35, 1))
			{
				Local_0 = 4;
			}
			break;
		case 4:
			func_3();
			Local_0 = 5;
			break;
		case 5:
			return 0;
	}
	return 1;
}

void func_5()
{
	_datafile_register_query(Local_0.f_34, -1296226829, "CameraData/Scenarios/Camera");
	_datafile_register_query(Local_0.f_34, 279908099, "CameraData/Scenarios/Camera(%i):scenario");
	_datafile_register_query(Local_0.f_34, -302997874, "CameraData/Scenarios/Camera(%i):request");
}

bool func_6()
{
	Var0 = Local_0.f_34;
	Var0.f_2 = -1296226829;
	iVar5 = _datafile_get_num_nodes(&Var0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var0.f_3 = iVar6;
		Var0.f_2 = 279908099;
		_datafile_get_hash(&iVar7, &Var0);
		if (iVar7 == Local_0.f_35)
		{
			Var0.f_2 = -302997874;
			_datafile_get_string(&(Local_0.f_36), &Var0);
			return true;
		}
		iVar6++;
	}
	return false;
}

void func_7(char* sParam0, char* sParam1)
{
	StringCopy(&(Local_0.f_1), sParam0, 64);
	StringCopy(&(Local_0.f_1.f_8), sParam1, 64);
	_0x6a4d224fc7643941(&(Local_0.f_1));
	Local_0.f_44 = 1;
}

bool func_8()
{
	if (_0xdd0b7c5ae58f721d(&(Local_0.f_1)) && !_0x927b810e43e99932(&(Local_0.f_1)))
	{
		_0xb8b207c34285e978(&(Local_0.f_1));
		Local_0.f_1.f_16 = Global_35;
		Local_0.f_1.f_21 = 1;
		Local_0.f_1.f_22 = { 0f, 0f, _get_scenario_point_heading(Local_0.f_32, true) };
		_0xac77757c05de9e5a(&(Local_0.f_1));
		return true;
	}
	return false;
}

