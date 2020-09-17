void __EntryFunction__()
{
	func_1(vScriptParam_0);
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = !func_2(&Local_13);
		if (func_3(&Local_13))
		{
			bVar0 = false;
		}
		wait(0);
	}
	func_4(&Local_13);
	func_5();
}

void func_1(vector3 vParam0)
{
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	network_set_script_is_safe_for_network_game();
	Local_13.f_2 = vParam0.x;
	Local_13.f_359 = get_cloud_time_as_int();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&(vParam0.f_2), iVar0))
		{
		}
		else
		{
			Local_13.f_3[iVar0]->f_1 = int_to_playerindex(iVar0);
		}
		iVar0++;
	}
}

bool func_2(var uParam0)
{
	if (func_6(0, 0))
	{
		return true;
	}
	iVar0 = absi((get_cloud_time_as_int() - uParam0->f_359));
	if (iVar0 > 120)
	{
		return true;
	}
	return false;
}

bool func_3(var uParam0)
{
	switch (func_7(uParam0))
	{
		case 0:
			if (_0xaf6e67d073d2dce2())
			{
				return false;
			}
			uParam0->f_356 = 0;
			uParam0->f_357 = 0;
			uParam0->f_358 = 0;
			switch (uParam0->f_2)
			{
				case 0:
					bVar0 = true;
					break;
				case 1:
				case 2:
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if (uParam0->f_3[iVar1]->f_1 == 255 || uParam0->f_3[iVar1]->f_1 < 0)
						{
						}
						else if (!network_is_player_active(uParam0->f_3[iVar1]->f_1))
						{
						}
						else if (!bVar0)
						{
							uParam0->f_356 = iVar1;
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						func_8(uParam0, 1);
						Jump @295; //curOff = 210
						if (func_9(uParam0))
						{
							func_8(uParam0, 2);
						}
						Jump @295; //curOff = 229
						if (func_10(uParam0))
						{
							func_11(uParam0, uParam0->f_356);
							func_12(uParam0, 0);
							if (uParam0->f_357 >= uParam0->f_358)
							{
								func_8(uParam0, 4);
							}
							else
							{
								func_13(uParam0);
							}
						}
						Jump @295; //curOff = 288
						return true;
						return false;
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_4(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (does_entity_exist(&(uParam0->f_3[iVar0])))
		{
			delete_ped(uParam0->f_3[iVar0]);
		}
		iVar0++;
	}
	if (func_14(256))
	{
		_0x55285f885f662169();
		_0xc2b8164c3be871a4();
	}
	func_15(16);
}

void func_5()
{
	terminate_this_thread();
}

bool func_6(bool bParam0, bool bParam1)
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

int func_7(var uParam0)
{
	return *uParam0;
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_9(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		switch (uParam0->f_2)
		{
			case 0:
			default:
				return false;
				if (does_entity_exist(&(uParam0->f_3[iVar1])))
				{
					return true;
				}
				if (is_entity_dead(player_ped_id()))
				{
					return false;
				}
				if (!_0xa0bc8faed8cfeb3c(player_ped_id()))
				{
					return false;
				}
				iVar0 = player_ped_id();
			case 1:
			case 2:
				if (does_entity_exist(&(uParam0->f_3[iVar1])))
				{
				}
				else if (uParam0->f_3[iVar1]->f_1 == 255 || uParam0->f_3[iVar1]->f_1 < 0)
				{
				}
				else if (!network_is_player_active(uParam0->f_3[iVar1]->f_1))
				{
				}
				else
				{
					iVar0 = get_player_ped(uParam0->f_3[iVar1]->f_1);
					if (is_entity_dead(iVar0))
					{
						return false;
					}
					if (!_0xa0bc8faed8cfeb3c(iVar0))
					{
						return false;
					}
					uParam0->f_3[iVar1]->f_2 = is_ped_male(iVar0);
					uParam0->f_3[iVar1]->f_3 = { func_16(uParam0->f_2, uParam0->f_3[iVar1]->f_2) };
					uParam0->f_3[iVar1] = func_17(iVar0);
					uParam0->f_358++;
					if (uParam0->f_2 == 0)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar1++;
				return true;
		}
	}
}

bool func_10(var uParam0)
{
	iVar0 = uParam0->f_356;
	if (!does_entity_exist(&(uParam0->f_3[iVar0])))
	{
		return true;
	}
	if (!_0xa0bc8faed8cfeb3c(&(uParam0->f_3[iVar0])))
	{
		return false;
	}
	if (is_entity_dead(&(uParam0->f_3[iVar0])))
	{
		resurrect_ped(&(uParam0->f_3[iVar0]));
	}
	iVar1 = -1;
	switch (uParam0->f_1)
	{
		case 0:
			if (_0xa21e3bad0a42d199())
			{
				return false;
			}
			iVar1 = uParam0->f_3[iVar0]->f_1;
			if (func_18(iVar1, uParam0->f_2) != 0)
			{
				func_19(iVar1, uParam0->f_2);
			}
			func_20(iVar1, uParam0->f_2, 1);
			func_15(256);
			_0x3e2fddbe435a8787();
			_0x196d3acbeba4a44b(1);
			_0xd9c24f53631f2372(&(uParam0->f_3[iVar0]->f_3), &(uParam0->f_3[iVar0]), 0);
			force_ped_motion_state(&(uParam0->f_3[iVar0]), 247561816, false, 0, false);
			func_12(uParam0, 1);
			break;
		case 1:
			force_ped_motion_state(&(uParam0->f_3[iVar0]), 247561816, false, 0, false);
			switch (uParam0->f_2)
			{
				case 0:
					bVar2 = _0xb72999d3120599df(&(uParam0->f_3[iVar0]->f_3), uParam0->f_2, 1);
					break;
				case 1:
				case 2:
					iVar1 = uParam0->f_3[iVar0]->f_1;
					bVar2 = _0x2a48d9567940598f(&(uParam0->f_3[iVar0]->f_3), iVar1, 1, func_21(uParam0->f_2));
					break;
			}
			if (!bVar2)
			{
				return false;
			}
			func_12(uParam0, 2);
			break;
		case 2:
			force_ped_motion_state(&(uParam0->f_3[iVar0]), 247561816, false, 0, false);
			if (_0xa21e3bad0a42d199())
			{
				return false;
			}
			uParam0->f_357++;
			if (uParam0->f_2 == 1 || uParam0->f_2 == 2)
			{
				func_20(uParam0->f_3[iVar0]->f_1, uParam0->f_2, 2);
			}
			func_12(uParam0, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (does_entity_exist(&(uParam0->f_3[iParam1])))
	{
		delete_ped(uParam0->f_3[iParam1]);
	}
	if (func_14(256))
	{
		_0x55285f885f662169();
		_0xc2b8164c3be871a4();
		func_22(256);
	}
}

void func_12(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_13(var uParam0)
{
	uParam0->f_356++;
	if (uParam0->f_356 >= 32)
	{
		uParam0->f_356 = 31;
		return;
	}
	if (does_entity_exist(&(uParam0->f_3[uParam0->f_356])))
	{
		return;
	}
	iVar0 = uParam0->f_356 + 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!does_entity_exist(&(uParam0->f_3[iVar0])))
		{
		}
		else
		{
			uParam0->f_356 = iVar0;
			return;
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return (Global_1139381->f_5079.f_321 && iParam0) != 0;
}

void func_15(int iParam0)
{
	Global_1139381->f_5079.f_321 = (Global_1139381->f_5079.f_321 || iParam0);
}

struct<8> func_16(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MP_PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MP_MISSION_PHOTO", 64);
			break;
		case 2:
			StringConCat(&cVar0, "MINIGAME_PROFILE_PHOTO", 64);
			break;
	}
	if (!bParam1)
	{
		StringConCat(&cVar0, "_F", 64);
	}
	return cVar0;
}

int func_17(int iParam0)
{
	vVar0 = { Global_1139381->f_5079.f_477, Global_1139381->f_5079.f_478, Global_1139381->f_5079.f_479 };
	vVar3 = { get_entity_coords(player_ped_id(), true, false) + vVar0 };
	iVar6 = clone_ped(iParam0, 0f, false, true);
	set_entity_coords(iVar6, vVar3, true, false, true, true);
	freeze_entity_position(iVar6, true);
	set_blocking_of_non_temporary_events(iVar6, false);
	set_entity_visible(iVar6, false);
	clear_ped_tasks_immediately(iVar6, false, true);
	return iVar6;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_18(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_23(iParam0, iParam1, 0);
			func_20(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_24(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_20(iParam0, iParam1, 0);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_22(int iParam0)
{
	Global_1139381->f_5079.f_321 = (Global_1139381->f_5079.f_321 - (Global_1139381->f_5079.f_321 && iParam0));
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_24(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

