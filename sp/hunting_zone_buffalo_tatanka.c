void __EntryFunction__()
{
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	Var0 = -1;
	Var0.f_7 = 1077936128;
	Var0.f_8 = 1120403456;
	Var0.f_9 = 1120403456;
	Var0.f_10 = 1132068864;
	Var0.f_12.f_3 = 1061158912;
	Var0.f_12.f_4 = 1066611507;
	Var0.f_12.f_6 = 1;
	Var0.f_31 = 15;
	Var0.f_572 = 7;
	Var0.f_580 = 7;
	Var0.f_588 = 7;
	Var0.f_596 = 7;
	Var0.f_630 = 5;
	if (has_force_cleanup_occurred(523))
	{
		if (Var0.f_622)
		{
			if (func_1() > Global_40.f_9319[Var0]->f_2)
			{
				Global_40.f_9319[Var0]->f_2 = func_1();
				func_2(&(Global_40.f_9319[Var0]->f_2), 0, 0, 24, 0, 0, 0, 0);
			}
		}
		if (get_cause_of_most_recent_force_cleanup() == 2)
		{
			Var0.f_619 = 1;
		}
		_0xe7282390542f570d(ScriptParam_0);
		func_3(&Var0);
		terminate_this_thread();
	}
	if (!_does_scenario_point_exist(ScriptParam_0.f_1))
	{
		_0xe7282390542f570d(ScriptParam_0);
		func_3(&Var0);
		terminate_this_thread();
	}
	if (func_4())
	{
		_0xe7282390542f570d(ScriptParam_0);
		func_3(&Var0);
		terminate_this_thread();
	}
	Var0.f_627 = { _get_scenario_point_coords(ScriptParam_0.f_1, true) };
	while (!func_5(&Var0) && !func_6(&Var0))
	{
		wait(0);
	}
	func_3(&Var0);
	_0xe7282390542f570d(ScriptParam_0);
}

int func_1()
{
	return &Global_1899515;
}

void func_2(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_7(*uParam0);
	iVar1 = func_8(*uParam0);
	iVar2 = func_9(*uParam0);
	iVar3 = func_10(*uParam0);
	iVar4 = func_11(*uParam0);
	iVar5 = func_12(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_13(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_13(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_3(var uParam0)
{
	if (uParam0->f_626)
	{
		_0xcb9401f918cb0f75(Global_35, "isInspectingGround", 0, -1);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		set_player_control(player_id(), true, 0, false);
		uParam0->f_626 = 0;
	}
	if (does_entity_exist(uParam0->f_12))
	{
		if (!is_entity_dead(uParam0->f_12))
		{
			_0x9dae1380cc5c6451(player_id(), uParam0->f_12);
			_0x00b156afebcc5ae0(uParam0->f_12);
		}
		if (!uParam0->f_621 || is_entity_dead(Global_35))
		{
			set_ped_as_no_longer_needed(&(uParam0->f_12));
		}
		else if (!is_entity_dead(uParam0->f_12))
		{
			if (!is_entity_on_screen(uParam0->f_12) || uParam0->f_619)
			{
				delete_ped(&(uParam0->f_12));
			}
			else
			{
				_set_entity_health(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0]->f_1 = 1;
				_map_discovery_set_enabled(func_15(*uParam0));
				_0xd8c7162ab2e2af45(func_16(*uParam0));
				func_17(0, -1);
				if (!func_18(466))
				{
					func_20(func_19(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (func_21(Global_35) && get_ped_index_from_entity_index(func_22(Global_35)) == uParam0->f_12)
				{
					func_23(*uParam0, 1);
					func_25(func_24(*uParam0), uParam0->f_12.f_1, get_entity_coords(uParam0->f_12, true, false), 1, 0);
					func_27(func_26(-1989706689, func_24(*uParam0)), 1);
					func_27(func_26(953441746, func_24(*uParam0)), 1);
					func_27(func_26(-212244724, func_24(*uParam0)), 1);
					_0xa59590050f80ff2e(func_24(*uParam0), 0, 1, 0);
					_0x6bcf5f3d8ffe988d(uParam0->f_12, 1);
					_0xa21aa2f0c2180125(get_object_index_from_entity_index(uParam0->f_12), 0);
					_0x9d16896f0dbe78a2(get_entity_coords(uParam0->f_12, true, false), 1f);
				}
			}
			set_ped_as_no_longer_needed(&(uParam0->f_12));
		}
	}
	if (_is_metaped_outfit_request_valid(uParam0->f_12.f_9))
	{
		_release_metaped_outfit_request(uParam0->f_12.f_9);
	}
	if (_does_volume_exist(uParam0->f_3))
	{
		func_28(uParam0->f_3);
		_delete_volume(uParam0->f_3);
	}
	if (_does_volume_exist(uParam0->f_2))
	{
		func_28(uParam0->f_2);
		_delete_volume(uParam0->f_2);
		func_29(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		_0x706b434fefad6a24(-1f);
		_0xa881f5c77a560906(-1f);
	}
	if (does_blip_exist(uParam0->f_6))
	{
		remove_blip(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (does_entity_exist(uParam0->f_31[iVar0]->f_1))
		{
			set_entity_as_no_longer_needed(&(uParam0->f_31[iVar0]->f_1));
			if (uParam0->f_31[iVar0]->f_9 != -1)
			{
				_0x9cf1836c03fb67a2(&(uParam0->f_31[iVar0]->f_9), 1);
			}
			if (does_blip_exist(&(uParam0->f_31[iVar0])))
			{
				remove_blip(uParam0->f_31[iVar0]);
			}
			if (uParam0->f_31[iVar0]->f_3 != 0)
			{
				_0xd2b9c78537ed5759(uParam0->f_31[iVar0]->f_3);
			}
		}
		func_31(uParam0->f_31[iVar0]->f_10);
		func_32(&(uParam0->f_31[iVar0]->f_16), 1, 1);
		iVar0++;
	}
	func_33(uParam0);
}

bool func_4()
{
	return false;
}

bool func_5(var uParam0)
{
	if (uParam0->f_11 > 0)
	{
		bVar0 = false;
		bVar1 = false;
		if ((get_game_timer() - uParam0->f_613) > 1200000)
		{
			bVar0 = true;
		}
		if (func_34() || func_35(&Global_1935630, 131072))
		{
			bVar0 = true;
		}
		if ((_0x9e4ef615e307fbbe() && _get_number_of_references_of_script_with_name_hash(1138230654) == 0) && !func_36(15))
		{
			bVar0 = true;
		}
		else if (func_37() && *uParam0 != 0)
		{
			iVar2 = func_38(0);
			if (iVar2 != 9 && iVar2 != 7)
			{
				bVar0 = true;
			}
		}
		else if (func_39(player_id(), 1, 0, 1))
		{
			if (!Global_40.f_9319[*uParam0]->f_1)
			{
				if (does_entity_exist(uParam0->f_12))
				{
					if (!is_entity_dead(uParam0->f_12) && is_entity_on_screen(uParam0->f_12))
					{
						func_40(200, 1);
					}
				}
			}
			bVar0 = true;
		}
		if (bVar0)
		{
			if (uParam0->f_622)
			{
				if (Global_40.f_9319[*uParam0]->f_1)
				{
					bVar1 = true;
				}
				if (does_entity_exist(uParam0->f_12))
				{
					if (!is_entity_dead(uParam0->f_12) && is_entity_on_screen(uParam0->f_12))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					func_41(Global_35, "HUNTING_LOST_TRAIL", 1017772929, 0, 0, 0, 0, 1);
				}
				if (func_1() > Global_40.f_9319[*uParam0]->f_2)
				{
					Global_40.f_9319[*uParam0]->f_2 = func_1();
					func_2(&(Global_40.f_9319[*uParam0]->f_2), 0, 0, 24, 0, 0, 0, 0);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_42(uParam0))
			{
				uParam0->f_11 = 1;
			}
			uParam0->f_613 = get_game_timer();
			break;
		case 1:
			if (func_43(uParam0))
			{
				uParam0->f_11 = 9;
			}
			else
			{
				uParam0->f_11 = 2;
			}
			break;
		case 2:
			if (uParam0->f_623)
			{
				_0xed9582b3da8f02b4(func_44(0) + 1);
			}
			else
			{
				_0xed9582b3da8f02b4(1);
			}
			func_45(uParam0);
			uParam0->f_11 = 3;
			break;
		case 3:
			if (_0x5e420ff293ee5472() && func_46(uParam0))
			{
				uParam0->f_11 = 4;
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam0->f_11 = 5;
			}
			break;
		case 5:
			if (func_48(uParam0))
			{
				uParam0->f_11 = 6;
			}
			break;
		case 6:
			if (func_49(uParam0))
			{
				uParam0->f_11 = 7;
			}
			break;
		case 7:
			if (!uParam0->f_622)
			{
				func_50(uParam0);
			}
			func_51(uParam0);
			if (uParam0->f_621)
			{
				func_52(uParam0);
			}
			if ((get_frame_count() % 5) == 0)
			{
				if (does_entity_exist(uParam0->f_12))
				{
					if (is_entity_dead(uParam0->f_12))
					{
						Global_40.f_9319[*uParam0]->f_1 = 1;
						_map_discovery_set_enabled(func_15(*uParam0));
						_0xd8c7162ab2e2af45(func_16(*uParam0));
						func_17(0, -1);
						if (!func_18(466))
						{
							func_20(func_19(18, 0, 0, 0), 466, 40000);
						}
						func_33(uParam0);
						if (does_blip_exist(uParam0->f_6))
						{
							remove_blip(&(uParam0->f_6));
						}
						uParam0->f_11 = 8;
					}
					else if ((uParam0->f_679 != 0 && !uParam0->f_680) && is_ped_in_combat(uParam0->f_12, 0))
					{
						_0xdc2f83a0612ca34d(uParam0->f_679);
						uParam0->f_680 = 1;
					}
					else if (uParam0->f_680)
					{
						if (!is_ped_in_combat(uParam0->f_12, 0))
						{
							_0x6ab944df68b512d3(uParam0->f_679);
							uParam0->f_680 = 0;
						}
					}
				}
			}
			break;
		case 8:
			if (func_53(func_26(953441746, func_24(*uParam0))) < 1)
			{
				func_27(func_26(953441746, func_24(*uParam0)), 1);
			}
			if (func_54(uParam0))
			{
				func_17(0, -1);
				uParam0->f_11 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

var func_7(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_55(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_8(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_9(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_10(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_11(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_12(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam6);
	func_57(uParam0, iParam5);
	func_58(uParam0, iParam4);
	func_59(uParam0, iParam3);
	func_60(uParam0, iParam2);
	func_61(uParam0, iParam1);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -372503450;
		case 1:
			return 1523666538;
		case 2:
			return 4951849;
		case 3:
			return -1644197791;
		case 4:
			return -1503385932;
		case 5:
			return 87178501;
		case 6:
			return -188752474;
		case 7:
			return -349166975;
		case 8:
			return -1290927903;
		case 9:
			return 637563550;
		case 10:
			return 1475355982;
		case 11:
			return 1724443719;
		case 12:
			return 1050506191;
		case 13:
			return 1623565947;
		case 14:
			return -1962265862;
		case 15:
			return 1526203407;
		default:
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13083484;
		case 1:
			return 333045931;
		case 2:
			return 1902076494;
		case 3:
			return -453294510;
		case 4:
			return 904770332;
		case 5:
			return 1407413829;
		case 6:
			return 45199580;
		case 7:
			return -140390317;
		case 8:
			return 1415123831;
		case 9:
			return 1789471985;
		case 10:
			return -2000773121;
		case 11:
			return 21224643;
		case 12:
			return -1026516599;
		case 13:
			return -1026066875;
		case 14:
			return -1536975869;
		case 15:
			return -412469442;
		default:
			break;
	}
	return 0;
}

void func_17(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_62(&Global_0, 8);
	}
	if (!func_63() || func_64() != -1)
	{
		return;
	}
	func_62(&Global_0, 1);
}

bool func_18(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_64() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_65(iVar0))
		{
		}
		else if (func_66(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_67(iVar0))
			{
			}
			else
			{
				iVar2 = func_68(iVar0);
				if (bParam3)
				{
					if (!func_69(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_70(iVar2))
						{
						}
						else
						{
							fVar3 = func_72(Global_35, func_71(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	Global_1934051->f_115 = iParam1;
	Global_1934051->f_116 = iParam0;
	Global_1934051->f_117 = iParam2;
	Global_1934051->f_118 = 1;
}

bool func_21(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

int func_22(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	iVar0 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar21 = func_73(iParam0);
	func_74(iParam0, &uVar22);
	iVar4 = _0xb29c553ba582d09e(&uVar5, uVar22, 2, 4);
	if (iVar4 > 0 && iVar4 < 15)
	{
		bVar1 = true;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			iVar0 = 0;
			if (func_75(&(uVar5[iVar3]), 369710026, &iVar0))
			{
				iVar0 = (iVar0 - func_76(&(uVar5[iVar3]), 1));
				if (iVar0 > 0)
				{
					if (func_77(&(uVar5[iVar3]), 1))
					{
						if (!func_78(&(uVar5[iVar3]), 1, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bParam1 && func_75(&(uVar5[iVar3]), -768110908, &iVar0))
			{
				iVar0 = (iVar0 - func_76(&(uVar5[iVar3]), 0));
				if (iVar0 > 0)
				{
					if (func_77(&(uVar5[iVar3]), 0))
					{
						if (!func_78(&(uVar5[iVar3]), 0, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar1)
		{
			Global_40.f_9319[iParam0]->f_3 = 0;
			func_79(&(Global_20710.f_2407), iVar21);
			if (bVar2)
			{
				func_40(467, 1);
			}
			func_17(0, -1);
		}
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1781233743;
		case 1:
			return 636730081;
		case 2:
			return -795241033;
		case 3:
			return -1550790546;
		case 4:
			return 950257367;
		case 5:
			return -1894468643;
		case 6:
			return 2111267495;
		case 7:
			return 1044478494;
		case 8:
			return -973690007;
		case 9:
			return 1210759497;
		case 10:
			return 1895708243;
		case 11:
			return 225698625;
		case 12:
			return -1998732171;
		case 13:
			return 1631667828;
		case 14:
			return -908129790;
		case 15:
			return -377162693;
		default:
			break;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, vector3 vParam2, bool bParam5, var uParam6)
{
	iVar0 = compendium_get_map_discoverable_from_stat_item(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !_map_is_discovery_active(iVar1))
	{
		_0xd8c7162ab2e2af45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		compendium_animal_observed_by_stat_name(iParam0, uParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == 225514697)
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_81(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (_journal_can_write_entry(iVar2))
				{
					iVar2 = func_80(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_81(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> func_26(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_28(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_82(vVar0, 0);
}

void func_29(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

int func_30()
{
	return 9;
}

void func_31(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_83(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_84(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_85(iVar0);
	*uParam0 = 0;
}

void func_33(var uParam0)
{
	if (uParam0->f_680)
	{
		_0x6ab944df68b512d3(uParam0->f_679);
		uParam0->f_680 = 0;
	}
	if (uParam0->f_614 > 0)
	{
		if (!is_string_null_or_empty(uParam0->f_677))
		{
			set_ambient_zone_state(uParam0->f_677, false, true);
		}
	}
}

bool func_34()
{
	return (func_35(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_36(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_86((*Global_1835011)[iParam0]->f_1);
}

bool func_37()
{
	return Global_1898164->f_163;
}

int func_38(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

int func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_87(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_40(int iParam0, bool bParam1)
{
	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
}

bool func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_91(iParam0, &Var0);
}

bool func_42(var uParam0)
{
	*uParam0 = 6;
	uParam0->f_1 = 1;
	uParam0->f_572[0] = -1699999934;
	uParam0->f_572[1] = -1710660654;
	uParam0->f_572[2] = 1715129248;
	uParam0->f_580[0] = 0;
	uParam0->f_580[1] = 4;
	uParam0->f_580[2] = 1;
	uParam0->f_588[0] = 0;
	uParam0->f_588[1] = 0;
	uParam0->f_588[2] = 4;
	uParam0->f_596[0] = 1;
	uParam0->f_596[4] = 1;
	uParam0->f_596[2] = 1;
	uParam0->f_12.f_1 = 367637652;
	uParam0->f_12.f_3 = 1.4f;
	uParam0->f_12.f_5 = 1;
	uParam0->f_12.f_8 = 47534268;
	return true;
}

bool func_43(var uParam0)
{
	if (*uParam0 != -1)
	{
		if (!func_92(15))
		{
			return true;
		}
		if (Global_40.f_9319[*uParam0]->f_1)
		{
			return true;
		}
		else if (func_1() < Global_40.f_9319[*uParam0]->f_2)
		{
			func_40(201, 1);
			return true;
		}
	}
	if (*uParam0 == 1)
	{
		if ((func_93(123) || func_94(123)) || func_95(123))
		{
			return true;
		}
		else
		{
			fVar0 = 10f;
		}
	}
	else if (*uParam0 == 13)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 5)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 12)
	{
		fVar0 = 50f;
	}
	else
	{
		fVar0 = (uParam0->f_9 - 15f);
	}
	uVar1 = 4;
	iVar6[0] = 4096;
	iVar6[1] = 16384;
	iVar6[2] = 16;
	iVar6[3] = 8192;
	if (_0x51e52c9687fcdeec(uParam0->f_627, fVar0, &uVar1, &iVar6, 0))
	{
		func_40(200, 1);
		return true;
	}
	return false;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_45(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_572[iVar0] != 0)
		{
			request_model(&(uParam0->f_572[iVar0]), false);
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		request_model(uParam0->f_12.f_1, false);
	}
}

int func_46(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_572[iVar0] != 0)
		{
			if (!has_model_loaded(&(uParam0->f_572[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		if (!has_model_loaded(uParam0->f_12.f_1))
		{
			return 0;
		}
		else if (uParam0->f_12.f_5)
		{
			if (!_is_metaped_outfit_request_valid(uParam0->f_12.f_9))
			{
				if (uParam0->f_12.f_7 > 0)
				{
					uParam0->f_12.f_9 = _0x273915ce30780986(uParam0->f_12.f_1, uParam0->f_12.f_7);
				}
				else
				{
					uParam0->f_12.f_9 = _request_metaped_outfit(uParam0->f_12.f_1, uParam0->f_12.f_8);
				}
				return 0;
			}
			else if (!_0x610438375e5d1801(uParam0->f_12.f_9))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47(var uParam0)
{
	fVar0 = (uParam0->f_9 + 20f);
	uParam0->f_3 = _create_volume_cylinder_with_custom_name(uParam0->f_627, 0f, 0f, 0f, fVar0, fVar0, fVar0, "HuntingZoneRestrictionPending");
	func_96(uParam0->f_3, "Hunting Zone Target Pending", 0, 0, 8192, 0, -1082130432);
	return true;
}

bool func_48(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_97())
	{
		iVar1 = 0;
		while (iVar1 < func_44(iVar0))
		{
			func_98(uParam0, iVar0, iVar1);
			uParam0->f_618++;
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_49(var uParam0)
{
	uParam0->f_12.f_10 = { uParam0->f_627 + Vector(-20f, 0f, 0f) };
	uParam0->f_12.f_13 = { 0f, 0f, func_99(0) };
	if (uParam0->f_12.f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_12))
		{
			if (uParam0->f_12.f_5)
			{
				uParam0->f_12 = _0xeaf682a14f8e5f53(uParam0->f_12.f_9, uParam0->f_12.f_10, 0, 1, 1, 0, 0);
			}
			else
			{
				uParam0->f_12 = func_100(uParam0->f_12.f_1, uParam0->f_12.f_10, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			func_101(uParam0);
			return false;
		}
	}
	uVar1 = uParam0->f_12.f_3;
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (uParam0->f_31[iVar0]->f_4 != 0)
		{
			if (!does_entity_exist(uParam0->f_31[iVar0]->f_1) && uParam0->f_31[iVar0]->f_28 < 3)
			{
				if (uParam0->f_31[iVar0]->f_6 == 0)
				{
					uParam0->f_31[iVar0]->f_1 = create_object(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, true, true, false, false, true);
					set_entity_heading(uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_23);
					_0x9587913b9e772d29(uParam0->f_31[iVar0]->f_1, 0);
				}
				else if (uParam0->f_31[iVar0]->f_6 == 1)
				{
					uParam0->f_31[iVar0]->f_1 = create_object(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, true, true, false, false, true);
					set_entity_rotation(uParam0->f_31[iVar0]->f_1, 0f, 90f, uParam0->f_31[iVar0]->f_23, 0, false);
				}
				else if (uParam0->f_31[iVar0]->f_6 == 2)
				{
					uParam0->f_31[iVar0]->f_2 = func_100(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					if (does_entity_exist(uParam0->f_31[iVar0]->f_2))
					{
						func_102(uParam0->f_31[iVar0]->f_2, 0, 0);
						set_ped_config_flag(uParam0->f_31[iVar0]->f_2, 186, false);
						apply_ped_damage_pack(uParam0->f_31[iVar0]->f_2, &(uParam0->f_605), 1f, 1f);
						_0xf5622fa6acfca7db(uParam0->f_31[iVar0]->f_2, get_random_int_in_range(40, 50));
						_0xdc0a1f0ecec9f0c0(uParam0->f_31[iVar0]->f_2, 1.25f);
						_0x674b90be1115846d(uParam0->f_31[iVar0]->f_2, 1);
					}
					uParam0->f_31[iVar0]->f_1 = func_103(uParam0->f_31[iVar0]->f_2);
				}
				else if (uParam0->f_31[iVar0]->f_6 == 3)
				{
					uParam0->f_31[iVar0]->f_9 = _0xfa50f79257745e74(uParam0->f_31[iVar0]->f_17, uVar1, 4, -1, 0);
					uParam0->f_31[iVar0]->f_1 = create_object(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0]->f_6 == 4)
				{
					uParam0->f_31[iVar0]->f_9 = _0xfa50f79257745e74(uParam0->f_31[iVar0]->f_17, uVar1, 2, -1, 0);
					uParam0->f_31[iVar0]->f_1 = create_object(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0]->f_6 == 5)
				{
					if (uParam0->f_31[iVar0]->f_3 == 0)
					{
						uParam0->f_31[iVar0]->f_3 = _0x6f3068258a499e52(uParam0->f_31[iVar0]->f_4, uParam0->f_31[iVar0]->f_17, 11);
					}
					else if (_0x1ff441d7954f8709(uParam0->f_31[iVar0]->f_3))
					{
						uParam0->f_31[iVar0]->f_1 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_31[iVar0]->f_3));
					}
				}
				if (does_entity_exist(uParam0->f_31[iVar0]->f_1))
				{
					if (uParam0->f_31[iVar0]->f_26 == 0)
					{
						uParam0->f_31[iVar0] = _blip_add_for_coord(1538154804, uParam0->f_31[iVar0]->f_17);
					}
					StringCopy(&cVar2, "hzt_", 16);
					StringIntConCat(&cVar2, *uParam0, 16);
					StringConCat(&cVar2, "_clue_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0]->f_27, 16);
					StringConCat(&cVar2, "_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0]->f_26, 16);
					uParam0->f_31[iVar0]->f_29 = { cVar2 };
					fVar13 = (get_distance_between_coords(uParam0->f_31[iVar0]->f_20, uParam0->f_31[iVar0]->f_17, true) / 4f);
					vVar4 = { uParam0->f_31[iVar0]->f_20 - uParam0->f_31[iVar0]->f_17 };
					vVar7 = { func_104(vVar4, 1.5f) };
					vVar10 = { func_104(vVar4, fVar13) };
					*uParam0->f_630[0] = { uParam0->f_31[iVar0]->f_17 };
					*uParam0->f_630[1] = { uParam0->f_31[iVar0]->f_17 + vVar7 };
					*uParam0->f_630[2] = { *uParam0->f_630[1] + vVar10 };
					*uParam0->f_630[3] = { *uParam0->f_630[2] + vVar10 };
					*uParam0->f_630[4] = { *uParam0->f_630[3] + vVar7 };
					func_105(uParam0->f_630[1], 50, 10, 0);
					func_105(uParam0->f_630[2], 50, 10, 0);
					func_105(uParam0->f_630[3], 50, 10, 0);
					func_105(uParam0->f_630[4], 50, 10, 0);
					_0x5c885e0978b6ad60(func_106(&(uParam0->f_31[iVar0]->f_29)), &(uParam0->f_630), 5, 0);
				}
				uParam0->f_31[iVar0]->f_28++;
				return false;
			}
		}
		iVar0++;
	}
	func_40(199, 1);
	if (!&Global_40.f_9319[*uParam0])
	{
		_0xd8c7162ab2e2af45(func_15(*uParam0));
		Global_40.f_9319[*uParam0] = 1;
	}
	return true;
}

void func_50(var uParam0)
{
	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = _0x45ab66d02b601fa7(player_id());
	iVar2 = 0;
	while (iVar2 < func_30())
	{
		fVar4 = 0f;
		if (uParam0->f_31[iVar2]->f_13)
		{
			if (does_blip_exist(&(uParam0->f_31[iVar2])))
			{
				_blip_set_modifier(&(uParam0->f_31[iVar2]), -1186550032);
			}
			fVar4 = func_107(Global_35, uParam0->f_31[iVar2]->f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	_set_blip_flash_style(&(uParam0->f_31[iVar1]), -1186550032);
	if (bVar3)
	{
		_blip_set_modifier(&(uParam0->f_31[iVar1]), 1641478980);
	}
	else
	{
		_set_blip_flash_style(&(uParam0->f_31[iVar1]), 1641478980);
	}
}

void func_51(var uParam0)
{
	bVar5 = false;
	bVar6 = is_ped_on_mount(Global_35);
	iVar3 = 5000;
	iVar1 = 3000;
	iVar2 = 1500;
	set_ped_reset_flag(Global_35, 211, true);
	iVar0 = 0;
	while (iVar0 < uParam0->f_618)
	{
		if (!uParam0->f_31[iVar0]->f_14)
		{
			bVar7 = true;
			if (does_entity_exist(uParam0->f_31[iVar0]->f_1))
			{
				fVar8 = func_108(Global_35, uParam0->f_31[iVar0]->f_1, 1);
				if ((uParam0->f_31[iVar0]->f_13 && fVar8 < 2500f) && is_entity_on_screen(uParam0->f_31[iVar0]->f_1))
				{
					if (!bVar5)
					{
						bVar5 = true;
					}
					if (!uParam0->f_31[iVar0]->f_11)
					{
						if (uParam0->f_620)
						{
							_0x6ecfc621a168424c(uParam0->f_12, uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_5, 0);
						}
						else
						{
							_0x543dfe14be720027(player_id(), uParam0->f_31[iVar0]->f_1, 0);
							_0x6ecfc621a168424c(uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_5, 0);
						}
						uParam0->f_31[iVar0]->f_11 = 1;
					}
					if (fVar8 < 36f)
					{
						if (!uParam0->f_31[iVar0]->f_12)
						{
							_0xf9cbd46433e36713(Global_35, uParam0->f_31[iVar0]->f_1, 0f, 0f, 0f, 7.5f, 6f, 15f, 20f, "TRACKING_ZONE_CLUE");
							set_pad_shake(0, 200, 125);
							uParam0->f_31[iVar0]->f_12 = 1;
						}
					}
					if ((fVar8 < 6.25f && !func_109()) && !bVar6)
					{
						bVar7 = false;
						if (!func_83(uParam0->f_31[iVar0]->f_16))
						{
							uParam0->f_31[iVar0]->f_16 = func_110("INSPECT_GENERIC", -719620017, uParam0->f_31[iVar0]->f_1, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
							func_111(uParam0->f_31[iVar0]->f_16, 2.5f, 0);
							func_112(&(uParam0->f_31[iVar0]->f_16), uParam0->f_31[iVar0]->f_1);
						}
						else if (uParam0->f_31[iVar0]->f_8 == 5)
						{
							_uiprompt_set_ambient_group_this_frame(Global_35, 2.5f, 2, 1, _uiprompt_get_group_id_for_target_entity(uParam0->f_31[iVar0]->f_1), func_106(&(uParam0->f_31[iVar0]->f_31)), 2);
						}
						else
						{
							_uiprompt_set_ambient_group_this_frame(uParam0->f_31[iVar0]->f_1, 2.5f, 2, 1, _uiprompt_get_group_id_for_target_entity(uParam0->f_31[iVar0]->f_1), func_106(&(uParam0->f_31[iVar0]->f_31)), 2);
						}
						if (func_113(uParam0->f_31[iVar0]->f_16, 1))
						{
							if (_0x45ab66d02b601fa7(player_id()))
							{
								_0x64ff4bf9af59e139(player_id(), 1);
							}
							if (uParam0->f_614 == 0)
							{
								func_41(Global_35, "HUNTING_START", 1017772929, 0, 0, 0, 0, 1);
							}
							func_114(uParam0->f_31[iVar0]->f_16, 0, 1);
							uParam0->f_31[iVar0]->f_24 = 0f;
							uParam0->f_31[iVar0]->f_14 = 1;
							uParam0->f_31[iVar0]->f_25 = get_game_timer();
							_0xdc5e09d012d759c4(uParam0->f_12, uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_5);
							set_player_control(player_id(), false, 256, false);
							uParam0->f_626 = 1;
							_0xcb9401f918cb0f75(Global_35, "isInspectingGround", 1, -1);
							open_sequence_task(&iVar4);
							task_turn_ped_to_face_coord(0, uParam0->f_31[iVar0]->f_17, iVar1);
							close_sequence_task(iVar4);
							if (!is_ped_on_mount(Global_35))
							{
								if (!_get_ped_crouch_movement(Global_35))
								{
									_set_ped_crouch_movement(Global_35, true, 0, false);
								}
							}
							task_perform_sequence(Global_35, iVar4);
							clear_sequence_task(&iVar4);
							func_115(uParam0, uParam0->f_31[iVar0]->f_27);
						}
					}
					else if (uParam0->f_31[iVar0]->f_12 && fVar8 > 64f)
					{
						uParam0->f_31[iVar0]->f_12 = 0;
					}
					if (bVar7 && func_83(uParam0->f_31[iVar0]->f_16))
					{
						func_32(&(uParam0->f_31[iVar0]->f_16), 1, 1);
					}
				}
				else if (uParam0->f_31[iVar0]->f_11)
				{
					if (uParam0->f_31[iVar0]->f_12)
					{
						uParam0->f_31[iVar0]->f_12 = 0;
					}
					if (uParam0->f_620)
					{
						_0xdc5e09d012d759c4(uParam0->f_12, uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_5);
					}
					else
					{
						_0xdc5e09d012d759c4(uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_1, uParam0->f_31[iVar0]->f_5);
						_0x9dae1380cc5c6451(player_id(), uParam0->f_31[iVar0]->f_1);
					}
					if (func_83(uParam0->f_31[iVar0]->f_16))
					{
						func_32(&(uParam0->f_31[iVar0]->f_16), 1, 1);
					}
					uParam0->f_31[iVar0]->f_11 = 0;
				}
			}
		}
		else if (uParam0->f_31[iVar0]->f_15)
		{
			if (uParam0->f_31[iVar0]->f_8 == 5)
			{
				_uiprompt_set_ambient_group_this_frame(Global_35, 2.5f, 2, 1, _uiprompt_get_group_id_for_target_entity(uParam0->f_31[iVar0]->f_1), func_106(&(uParam0->f_31[iVar0]->f_33)), 2);
			}
			else
			{
				_uiprompt_set_ambient_group_this_frame(uParam0->f_31[iVar0]->f_1, 2.5f, 2, 1, _uiprompt_get_group_id_for_target_entity(uParam0->f_31[iVar0]->f_1), func_106(&(uParam0->f_31[iVar0]->f_33)), 2);
			}
			iVar9 = get_game_timer();
			if ((iVar9 - uParam0->f_31[iVar0]->f_25) > iVar3 || ((iVar9 - uParam0->f_31[iVar0]->f_25) > iVar1 && !func_116(Global_35, 242628503)))
			{
				func_117((uParam0->f_614 - 1), *uParam0);
				func_32(&(uParam0->f_31[iVar0]->f_16), 1, 1);
				task_clear_look_at(Global_35);
				_0x2af423d6ecb2c485(player_id(), uParam0->f_12);
				_0xcb9401f918cb0f75(Global_35, "isInspectingGround", 0, -1);
				_set_ped_crouch_movement(Global_35, false, 0, false);
				set_player_control(player_id(), true, 0, false);
				uParam0->f_626 = 0;
				uParam0->f_31[iVar0]->f_15 = 0;
			}
			else if ((iVar9 - uParam0->f_31[iVar0]->f_25) > iVar2 && uParam0->f_31[iVar0]->f_13)
			{
				func_118(uParam0->f_12, func_106(&(uParam0->f_31[iVar0]->f_29)), 1, 0.762f, 1053609165, 0, 2f, 1);
				if (_does_volume_exist(uParam0->f_31[iVar0]->f_10))
				{
					func_119(uParam0->f_31[iVar0]->f_10);
				}
				uParam0->f_31[iVar0]->f_13 = 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_614 > 0)
	{
		if (!uParam0->f_624)
		{
			if (!uParam0->f_625)
			{
				if (func_120(*uParam0))
				{
					if (Global_1935496->f_31 == 1831763320)
					{
						uParam0->f_625 = 1;
					}
				}
				else if (Global_1935496->f_31 == 2036955137)
				{
					uParam0->f_625 = 1;
				}
			}
			else if (func_107(Global_35, uParam0->f_12.f_10, 1) > 400f && !is_sphere_visible(uParam0->f_12.f_10, 1f))
			{
				uParam0->f_621 = 1;
				func_121(uParam0);
				uParam0->f_624 = 1;
			}
		}
	}
}

void func_52(var uParam0)
{
	if (uParam0->f_12.f_2 != 1)
	{
		if (((func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 2500f && func_108(Global_35, uParam0->f_12, 1) > 400f) && !is_ped_injured(uParam0->f_12)) && !func_116(uParam0->f_12, 242628503))
		{
			func_122(uParam0);
			uParam0->f_12.f_2 = 1;
			fVar1 = 3f;
			open_sequence_task(&iVar0);
			if (*uParam0 == 0)
			{
				task_stand_still(0, 2000);
				fVar1 = 1f;
			}
			_task_flee_from_ped(0, Global_35, uParam0->f_12.f_16, 25f, -1, 1024, fVar1, 0);
			task_wander_in_area(0, uParam0->f_12.f_16, 15f, 1.5f, 3f, 1);
			close_sequence_task(iVar0);
			task_perform_sequence(uParam0->f_12, iVar0);
		}
	}
	else if (func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 100f)
	{
		uParam0->f_12.f_2 = 0;
	}
}

int func_53(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

bool func_54(var uParam0)
{
	if (!does_entity_exist(uParam0->f_12))
	{
		return true;
	}
	if (_0x8de41e9902e85756(uParam0->f_12) && !func_21(Global_35))
	{
		return true;
	}
	return false;
}

int func_55(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_58(var uParam0, int iParam1)
{
	iVar0 = func_8(*uParam0);
	iVar1 = func_7(*uParam0);
	if (iParam1 < 1 || iParam1 > func_13(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_61(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_63()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_64()
{
	return Global_1572887->f_12;
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_66(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_67(int iParam0)
{
	return !func_123(iParam0, 1);
}

int func_68(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_124() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_69(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

bool func_70(int iParam0)
{
	if (!func_125(iParam0))
	{
		return false;
	}
	return func_126(iParam0, 33554432);
}

Vector3 func_71(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_72(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 64;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
	}
	return 0;
}

int func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -1124266369;
			return 1;
		case 1:
			*uParam1 = 759906147;
			return 1;
		case 2:
			*uParam1 = -1568716381;
			return 1;
		case 3:
			*uParam1 = 1556473961;
			return 1;
		case 4:
			*uParam1 = 2028722809;
			return 1;
		case 5:
			*uParam1 = -1963605336;
			return 1;
		case 6:
			*uParam1 = 367637652;
			return 1;
		case 7:
			*uParam1 = -1598866821;
			return 1;
		case 8:
			*uParam1 = 90264823;
			return 1;
		case 9:
			*uParam1 = 480688259;
			return 1;
		case 10:
			*uParam1 = -2021043433;
			return 1;
		case 11:
			*uParam1 = 252669332;
			return 1;
		case 12:
			*uParam1 = -1098441944;
			return 1;
		case 13:
			*uParam1 = 1654513481;
			return 1;
		case 14:
			*uParam1 = 1755643085;
			return 1;
		case 15:
			*uParam1 = -1143398950;
			return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { func_128(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar12, &iVar13))
			{
				if (func_129(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46])
						{
							*iParam2 = (*iParam2 + Var14[iVar46]->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		_0xcbb7b6edfa933ade(iVar11);
	}
	return true;
}

int func_76(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_130(0) };
	Var0.f_4 = func_131(iParam1);
	Var5 = { func_132(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	uVar9 = _0xc97e0d2302382211(func_133(0), &Var5, 0);
	return uVar9;
}

bool func_77(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_131(iParam1);
	if (!func_134(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_135(iParam0, &Var0, 1, 0);
	iVar6 = func_136(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	if (!func_77(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (func_137(iParam0) && func_138(iParam0))
		{
			iVar0 = 0;
			if (func_75(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_131(iParam1);
	Var1 = { func_130(0) };
	if (!func_139(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return false;
	}
	return true;
}

void func_79(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -43987615:
			if (iParam2 == 1)
			{
				return 1492383232;
			}
			else
			{
				return 1650496317;
			}
			break;
		case 597440621:
			if (iParam2 == 1)
			{
				return -1286175387;
			}
			else
			{
				return 1230228733;
			}
			break;
		case 783089120:
			if (iParam2 == 1)
			{
				return 1809539044;
			}
			else
			{
				return 580480085;
			}
			break;
		case -577478188:
			if (iParam2 == 1)
			{
				return -942035227;
			}
			else
			{
				return -293044453;
			}
			break;
		case 1596431305:
			if (iParam2 == 1)
			{
				return 2042596528;
			}
			else
			{
				return 1794983091;
			}
			break;
		case 1781233743:
			if (iParam2 == 1)
			{
				return 1572569346;
			}
			else
			{
				return 693604975;
			}
			break;
		case 1297902195:
			if (iParam2 == 1)
			{
				return 131817274;
			}
			else
			{
				return 672937471;
			}
			break;
		case 636730081:
			if (iParam2 == 1)
			{
				return 1242287574;
			}
			else
			{
				return 134380709;
			}
			break;
		case 1516275256:
			if (iParam2 == 1)
			{
				return 307977329;
			}
			else
			{
				return 1537431448;
			}
			break;
		case 640966621:
			if (iParam2 == 1)
			{
				return -1057583634;
			}
			else
			{
				return -2020447749;
			}
			break;
		case 950257367:
			if (iParam2 == 1)
			{
				return 1389918783;
			}
			else
			{
				return 889056371;
			}
			break;
		case -1055552242:
			if (iParam2 == 1)
			{
				return -343448109;
			}
			else
			{
				return 1668029447;
			}
			break;
		case -1894468643:
			if (iParam2 == 1)
			{
				return 1656842182;
			}
			else
			{
				return 1931087823;
			}
			break;
		case 1489890323:
			if (iParam2 == 1)
			{
				return -1372774793;
			}
			else
			{
				return -1351907036;
			}
			break;
		case 2111267495:
			if (iParam2 == 1)
			{
				return 1156953242;
			}
			else
			{
				return 610597621;
			}
			break;
		case -1550790546:
			if (iParam2 == 1)
			{
				return -32053405;
			}
			else
			{
				return 9629595;
			}
			break;
		case 1028084064:
			if (iParam2 == 1)
			{
				return -1017879199;
			}
			else
			{
				return -2050618352;
			}
			break;
		case -1327130182:
			if (iParam2 == 1)
			{
				return -434550098;
			}
			else
			{
				return 9729636;
			}
			break;
		case -375262254:
			if (iParam2 == 1)
			{
				return 2118461462;
			}
			else
			{
				return 143111533;
			}
			break;
		case 1339926283:
			if (iParam2 == 1)
			{
				return 485264164;
			}
			else
			{
				return 1903408805;
			}
			break;
		case -1847199476:
			if (iParam2 == 1)
			{
				return -793902754;
			}
			else
			{
				return -1775711449;
			}
			break;
		case 1075520399:
			if (iParam2 == 1)
			{
				return 813908083;
			}
			else
			{
				return -131999783;
			}
			break;
		case 285816029:
			if (iParam2 == 1)
			{
				return -795386435;
			}
			else
			{
				return -1130778534;
			}
			break;
		case -1273168083:
			if (iParam2 == 1)
			{
				return -1403844320;
			}
			else
			{
				return -169402166;
			}
			break;
		case 2059272711:
			if (iParam2 == 1)
			{
				return -1214387853;
			}
			else
			{
				return -417846746;
			}
			break;
		case -943371758:
			if (iParam2 == 1)
			{
				return -464805063;
			}
			else
			{
				return -579171441;
			}
			break;
		case 1190285160:
			if (iParam2 == 1)
			{
				return -226045789;
			}
			else
			{
				return 5946766;
			}
			break;
		case -674936781:
			if (iParam2 == 1)
			{
				return 1410377796;
			}
			else
			{
				return -1029515674;
			}
			break;
		case -2045434273:
			if (iParam2 == 1)
			{
				return -649439051;
			}
			else
			{
				return -1928771048;
			}
			break;
		case 1677450645:
			if (iParam2 == 1)
			{
				return -2020193361;
			}
			else
			{
				return -862429230;
			}
			break;
		case -2069413633:
			if (iParam2 == 1)
			{
				return -348617231;
			}
			else
			{
				return 521981365;
			}
			break;
		case -1071812884:
			if (iParam2 == 1)
			{
				return 1454394111;
			}
			else
			{
				return 1226381245;
			}
			break;
		case -973690007:
			if (iParam2 == 1)
			{
				return -1923426107;
			}
			else
			{
				return -448286600;
			}
			break;
		case -1204752482:
			if (iParam2 == 1)
			{
				return 57563439;
			}
			else
			{
				return -1554080546;
			}
			break;
		case -564442545:
			if (iParam2 == 1)
			{
				return -819941571;
			}
			else
			{
				return 316239633;
			}
			break;
		case 1210759497:
			if (iParam2 == 1)
			{
				return -692709560;
			}
			else
			{
				return 375187125;
			}
			break;
		case 1220494366:
			if (iParam2 == 1)
			{
				return 461155911;
			}
			else
			{
				return -1730432737;
			}
			break;
		case -1923720634:
			if (iParam2 == 1)
			{
				return 686577545;
			}
			else
			{
				return -1716975259;
			}
			break;
		case -1136838805:
			if (iParam2 == 1)
			{
				return 485763523;
			}
			else
			{
				return 485763523;
			}
			break;
		case 1798104140:
			if (iParam2 == 1)
			{
				return -75693912;
			}
			else
			{
				return -1341709095;
			}
			break;
		case 613321581:
			if (iParam2 == 1)
			{
				return -1015255528;
			}
			else
			{
				return -155163817;
			}
			break;
		case -510702611:
			if (iParam2 == 1)
			{
				return -258389058;
			}
			else
			{
				return -1731672932;
			}
			break;
		case 926603386:
			if (iParam2 == 1)
			{
				return -446346500;
			}
			else
			{
				return 198039826;
			}
			break;
		case -603666995:
			if (iParam2 == 1)
			{
				return 520531156;
			}
			else
			{
				return 656647598;
			}
			break;
		case -1322848328:
			if (iParam2 == 1)
			{
				return 400831909;
			}
			else
			{
				return -480293444;
			}
			break;
		case -1632170653:
			if (iParam2 == 1)
			{
				return -1472809340;
			}
			else
			{
				return 1556846539;
			}
			break;
		case -1121883739:
			if (iParam2 == 1)
			{
				return 87879371;
			}
			else
			{
				return 295404488;
			}
			break;
		case 1901047439:
			if (iParam2 == 1)
			{
				return -1495248197;
			}
			else
			{
				return -1142160290;
			}
			break;
		case 268285362:
			if (iParam2 == 1)
			{
				return -1508240671;
			}
			else
			{
				return -2028019941;
			}
			break;
		case 1742105665:
			if (iParam2 == 1)
			{
				return 1447842081;
			}
			else
			{
				return 763061508;
			}
			break;
		case 1938765490:
			if (iParam2 == 1)
			{
				return -1738549803;
			}
			else
			{
				return 857577510;
			}
			break;
		case -1986096416:
			if (iParam2 == 1)
			{
				return 550175583;
			}
			else
			{
				return -1327208188;
			}
			break;
		case 1509241437:
			if (iParam2 == 1)
			{
				return -387470951;
			}
			else
			{
				return -1152146286;
			}
			break;
		case 784496698:
			if (iParam2 == 1)
			{
				return -1298327432;
			}
			else
			{
				return -1577268469;
			}
			break;
		case 520240957:
			if (iParam2 == 1)
			{
				return 699060141;
			}
			else
			{
				return -1134590040;
			}
			break;
		case -1350246467:
			if (iParam2 == 1)
			{
				return 2074298125;
			}
			else
			{
				return 1088082550;
			}
			break;
		case -2146232868:
			if (iParam2 == 1)
			{
				return -846557197;
			}
			else
			{
				return 288657650;
			}
			break;
		case 2104011353:
			if (iParam2 == 1)
			{
				return -1715622829;
			}
			else
			{
				return 224959159;
			}
			break;
		case -1673415831:
			if (iParam2 == 1)
			{
				return 685004063;
			}
			else
			{
				return -1620359805;
			}
			break;
		case 1157397403:
			if (iParam2 == 1)
			{
				return 1487535595;
			}
			else
			{
				return -2106943688;
			}
			break;
		case 1374755253:
			if (iParam2 == 1)
			{
				return -619722845;
			}
			else
			{
				return -756184090;
			}
			break;
		case -1203519405:
			if (iParam2 == 1)
			{
				return -167138074;
			}
			else
			{
				return -1952853624;
			}
			break;
		case -74829863:
			if (iParam2 == 1)
			{
				return 1858396134;
			}
			else
			{
				return 1199311657;
			}
			break;
		case 702805627:
			if (iParam2 == 1)
			{
				return -379754949;
			}
			else
			{
				return 1123829079;
			}
			break;
		case 1895708243:
			if (iParam2 == 1)
			{
				return 683897188;
			}
			else
			{
				return -1313726941;
			}
			break;
		case -1003674917:
			if (iParam2 == 1)
			{
				return -81484335;
			}
			else
			{
				return -745750690;
			}
			break;
		case -487429551:
			if (iParam2 == 1)
			{
				return 375272656;
			}
			else
			{
				return 1614204576;
			}
			break;
		case -853417084:
			if (iParam2 == 1)
			{
				return -27841655;
			}
			else
			{
				return -1052853383;
			}
			break;
		case 225698625:
			if (iParam2 == 1)
			{
				return 744375830;
			}
			else
			{
				return -635519364;
			}
			break;
		case -1472826885:
			if (iParam2 == 1)
			{
				return 1374191339;
			}
			else
			{
				return 1057046493;
			}
			break;
		case 1044478494:
			if (iParam2 == 1)
			{
				return -567700941;
			}
			else
			{
				return 1133767006;
			}
			break;
		case 1735171971:
			if (iParam2 == 1)
			{
				return -475041877;
			}
			else
			{
				return -973375568;
			}
			break;
		case 365206122:
			if (iParam2 == 1)
			{
				return 1251901266;
			}
			else
			{
				return 594965829;
			}
			break;
		case 731537518:
			if (iParam2 == 1)
			{
				return 332185718;
			}
			else
			{
				return 752876761;
			}
			break;
		case 1859834293:
			if (iParam2 == 1)
			{
				return 761968766;
			}
			else
			{
				return -258263292;
			}
			break;
		case 524696643:
			if (iParam2 == 1)
			{
				return 1345814727;
			}
			else
			{
				return -2056520757;
			}
			break;
		case 132914876:
			if (iParam2 == 1)
			{
				return 774728556;
			}
			else
			{
				return 1695964169;
			}
			break;
		case 768271981:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -1245666683:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -153407852:
			if (((iParam1 == -450053710 || iParam1 == 1792770814) || iParam1 == -1679658797) || iParam1 == -1963397600)
			{
				if (iParam2 == 1)
				{
					return -1510715495;
				}
				else
				{
					return -1041460807;
				}
			}
			else if (((iParam1 == -1250098797 || iParam1 == -318278790) || iParam1 == 55096099) || iParam1 == -458397856)
			{
				if (iParam2 == 1)
				{
					return 216313122;
				}
				else
				{
					return -1276302204;
				}
			}
			else if ((iParam1 == -444610976 || iParam1 == 705691988) || iParam1 == 746627200)
			{
				if (iParam2 == 1)
				{
					return 1058013054;
				}
				else
				{
					return 1875597076;
				}
			}
			else if ((((iParam1 == 2130094044 || iParam1 == -1140650619) || iParam1 == -1554827654) || iParam1 == -1029277326) || iParam1 == 604357666)
			{
				if (iParam2 == 1)
				{
					return -1860934580;
				}
				else
				{
					return 1323745903;
				}
			}
			else if ((((iParam1 == -1999198818 || iParam1 == 1496579364) || iParam1 == -403470324) || iParam1 == 1576849913) || iParam1 == -925223936)
			{
				if (iParam2 == 1)
				{
					return 987087298;
				}
				else
				{
					return -1712290350;
				}
			}
			else if ((iParam1 == -1547438906 || iParam1 == -2026265047) || iParam1 == -635239558)
			{
				if (iParam2 == 1)
				{
					return 679982833;
				}
				else
				{
					return 224251658;
				}
			}
			else if (iParam1 == -586898625 || iParam1 == 937246805)
			{
				if (iParam2 == 1)
				{
					return -2035377496;
				}
				else
				{
					return 1602284249;
				}
			}
			else if ((iParam1 == 687445866 || iParam1 == 861505058) || iParam1 == 1593035738)
			{
				if (iParam2 == 1)
				{
					return -1314354161;
				}
				else
				{
					return -1111688425;
				}
			}
			else if ((iParam1 == -819697512 || iParam1 == 1705182311) || iParam1 == -78273782)
			{
				if (iParam2 == 1)
				{
					return -697129350;
				}
				else
				{
					return 932507108;
				}
			}
			else if ((((iParam1 == -247265944 || iParam1 == -1516219602) || iParam1 == -1265030920) || iParam1 == 2024948086) || iParam1 == 1696286663)
			{
				if (iParam2 == 1)
				{
					return 14437037;
				}
				else
				{
					return 1726324950;
				}
			}
			else if (iParam1 == -1342159303 || iParam1 == -1154406788)
			{
				if (iParam2 == 1)
				{
					return 1127400536;
				}
				else
				{
					return 400087036;
				}
			}
			else if ((((iParam1 == 2030804811 || iParam1 == 1230359523) || iParam1 == -1063137731) || iParam1 == -1038436471) || iParam1 == 96930969)
			{
				if (iParam2 == 1)
				{
					return 1521891022;
				}
				else
				{
					return -830234017;
				}
			}
			else if ((iParam1 == -1180427609 || iParam1 == 43825738) || iParam1 == 2119038574)
			{
				if (iParam2 == 1)
				{
					return -1778106987;
				}
				else
				{
					return 629235125;
				}
			}
			else if ((iParam1 == 2145697477 || iParam1 == 107013696) || iParam1 == -1261814606)
			{
				if (iParam2 == 1)
				{
					return -322859267;
				}
				else
				{
					return -1148415148;
				}
			}
			else if ((iParam1 == 1066034872 || iParam1 == 36009259) || iParam1 == 802784330)
			{
				if (iParam2 == 1)
				{
					return -1903961111;
				}
				else
				{
					return 909878123;
				}
			}
			else if (iParam1 == -1693870200 || iParam1 == -1599683008)
			{
				if (iParam2 == 1)
				{
					return -2144737275;
				}
				else
				{
					return -703064617;
				}
			}
			else if ((((((iParam1 == 1072019803 || iParam1 == 1074477367) || iParam1 == -85890205) || iParam1 == 1048964673) || iParam1 == 446670976) || iParam1 == -727455979) || iParam1 == -1667789645)
			{
				if (iParam2 == 1)
				{
					return 79953388;
				}
				else
				{
					return 1080521142;
				}
			}
			else if ((((iParam1 == 2120708491 || iParam1 == -1924405794) || iParam1 == -526169133) || iParam1 == 1861665605) || iParam1 == 900144280)
			{
				if (iParam2 == 1)
				{
					return -509693556;
				}
				else
				{
					return -47591742;
				}
			}
			else if ((iParam1 == 1133837220 || iParam1 == 1702024301) || iParam1 == -1604180548)
			{
				if (iParam2 == 1)
				{
					return 375495976;
				}
				else
				{
					return -389560008;
				}
			}
			break;
		case 843200239:
			if (iParam2 == 1)
			{
				return 382483842;
			}
			else
			{
				return -1387469655;
			}
			break;
		case -557089338:
			if (iParam2 == 1)
			{
				return -652731287;
			}
			else
			{
				return 363304543;
			}
			break;
		case -409730157:
			if (iParam2 == 1)
			{
				return 293802921;
			}
			else
			{
				return 263724736;
			}
			break;
		case -1453172462:
			if (iParam2 == 1)
			{
				return -650983350;
			}
			else
			{
				return 248268932;
			}
			break;
		case 2084223993:
			if (iParam2 == 1)
			{
				return 581279313;
			}
			else
			{
				return -1986670648;
			}
			break;
		case 1449149245:
			if (iParam2 == 1)
			{
				return 853339335;
			}
			else
			{
				return 476264216;
			}
			break;
		case 230694645:
			if (iParam2 == 1)
			{
				return 840856104;
			}
			else
			{
				return 161687222;
			}
			break;
		case -1998732171:
			if (iParam2 == 1)
			{
				return -679944843;
			}
			else
			{
				return -439780870;
			}
			break;
		case 732517695:
			if (iParam2 == 1)
			{
				return -507978028;
			}
			else
			{
				return -2138925351;
			}
			break;
		case 1053713682:
			if (iParam2 == 1)
			{
				return 2067853128;
			}
			else
			{
				return -999327272;
			}
			break;
		case 562612880:
			if (iParam2 == 1)
			{
				return -720653445;
			}
			else
			{
				return 1465762044;
			}
			break;
		case 1488906430:
			if (iParam2 == 1)
			{
				return 1604791730;
			}
			else
			{
				return 382211197;
			}
			break;
		case -1002311676:
		case 313926162:
			if (iParam2 == 1)
			{
				return 452746646;
			}
			else
			{
				return 1669886296;
			}
			break;
		case 1434063188:
			if (iParam2 == 1)
			{
				return -979220810;
			}
			else
			{
				return 443311725;
			}
			break;
		case 1296784312:
			if (iParam2 == 1)
			{
				return 861034445;
			}
			else
			{
				return 391521677;
			}
			break;
		case -1192335484:
			if (iParam2 == 1)
			{
				return 1634138500;
			}
			else
			{
				return -1585573547;
			}
			break;
		case 184430925:
			if (iParam2 == 1)
			{
				return -788140186;
			}
			else
			{
				return -1011875654;
			}
			break;
		case 1631667828:
			if (iParam2 == 1)
			{
				return -135187727;
			}
			else
			{
				return -662462270;
			}
			break;
		case 1623821606:
			if (iParam2 == 1)
			{
				return -1381490234;
			}
			else
			{
				return 401969671;
			}
			break;
		case 631108475:
			if (iParam2 == 1)
			{
				return -203045456;
			}
			else
			{
				return -1205233107;
			}
			break;
		case -679868805:
			if (iParam2 == 1)
			{
				return -1876437153;
			}
			else
			{
				return -570692178;
			}
			break;
		case -454952368:
			if (iParam2 == 1)
			{
				return -1239951197;
			}
			else
			{
				return -535907352;
			}
			break;
		case 512575690:
			if (iParam2 == 1)
			{
				return -2099611916;
			}
			else
			{
				return 1961649296;
			}
			break;
		case -1315516671:
			if (iParam2 == 1)
			{
				return 1966613758;
			}
			else
			{
				return -1333865097;
			}
			break;
		case -2032722392:
			if (iParam2 == 1)
			{
				return 1914577480;
			}
			else
			{
				return 1328558441;
			}
			break;
		case 238849077:
			if (iParam2 == 1)
			{
				return 1883720795;
			}
			else
			{
				return -1369680592;
			}
			break;
		case -812395905:
			if (iParam2 == 1)
			{
				return 387520892;
			}
			else
			{
				return -1903848769;
			}
			break;
		case 1252173965:
			if (iParam2 == 1)
			{
				return -323196703;
			}
			else
			{
				return -1097366344;
			}
			break;
		case 1948286917:
			if (iParam2 == 1)
			{
				return -624807541;
			}
			else
			{
				return 1875235996;
			}
			break;
		case 886717998:
			if (iParam2 == 1)
			{
				return -615644963;
			}
			else
			{
				return -823139835;
			}
			break;
		case -905573570:
			if (iParam2 == 1)
			{
				return 1706508339;
			}
			else
			{
				return -138305935;
			}
			break;
		case -10873946:
			if (iParam2 == 1)
			{
				return -2103370865;
			}
			else
			{
				return 1443679495;
			}
			break;
		case -1850027464:
			if (iParam2 == 1)
			{
				return -633158514;
			}
			else
			{
				return 1018532190;
			}
			break;
		case -1559343651:
			if (iParam2 == 1)
			{
				return -918953360;
			}
			else
			{
				return -660080832;
			}
			break;
		case -908129790:
			if (iParam2 == 1)
			{
				return -1349222587;
			}
			else
			{
				return 1557946994;
			}
			break;
		case -756458312:
			if (iParam2 == 1)
			{
				return 2023710928;
			}
			else
			{
				return 1977250026;
			}
			break;
		case -1523680261:
			if (iParam2 == 1)
			{
				return 1566791262;
			}
			else
			{
				return -966619756;
			}
			break;
		case 915670869:
			if (iParam2 == 1)
			{
				return -1644328077;
			}
			else
			{
				return -576645995;
			}
			break;
		case 1241049848:
			if (iParam2 == 1)
			{
				return 797754095;
			}
			else
			{
				return -2058983692;
			}
			break;
		case 1642062303:
			if (iParam2 == 1)
			{
				return -1659756524;
			}
			else
			{
				return 655563396;
			}
			break;
		case -868889795:
			if (iParam2 == 1)
			{
				return 631588480;
			}
			else
			{
				return 1964441958;
			}
			break;
		case -245437166:
			if (iParam2 == 1)
			{
				return -325679307;
			}
			else
			{
				return 1238941576;
			}
			break;
		case -587357648:
			if (iParam2 == 1)
			{
				return -526737116;
			}
			else
			{
				return -2067439289;
			}
			break;
		case 1161966186:
			if (iParam2 == 1)
			{
				return 2096415373;
			}
			else
			{
				return 389722302;
			}
			break;
		case -795241033:
			if (iParam2 == 1)
			{
				return 1154535482;
			}
			else
			{
				return 1974479168;
			}
			break;
		case -366264193:
			if (iParam2 == 1)
			{
				return 989198786;
			}
			else
			{
				return -355707420;
			}
			break;
		case -705312705:
			if (iParam2 == 1)
			{
				return -1917262038;
			}
			else
			{
				return -887338500;
			}
			break;
		case -1592962144:
			if (iParam2 == 1)
			{
				return -1387399089;
			}
			else
			{
				return 2126380116;
			}
			break;
		case 886059398:
			if (iParam2 == 1)
			{
				return -93072263;
			}
			else
			{
				return -1354818991;
			}
			break;
		case 2018874380:
			if (iParam2 == 1)
			{
				return 515905092;
			}
			else
			{
				return -2141961689;
			}
			break;
		case -1467886026:
		case -262717989:
		case 1100342668:
			if (iParam2 == 1)
			{
				return -1304404966;
			}
			else
			{
				return -338768354;
			}
			break;
		case -1181288733:
			if (iParam2 == 1)
			{
				return -1675867359;
			}
			else
			{
				return 922834860;
			}
			break;
		case 1398366530:
			if (iParam2 == 1)
			{
				return 2136163397;
			}
			else
			{
				return -2053685963;
			}
			break;
		case 1145409805:
			if (iParam2 == 1)
			{
				return -1506726199;
			}
			else
			{
				return -1570463396;
			}
			break;
		case 733223128:
			if (iParam2 == 1)
			{
				return 1487282350;
			}
			else
			{
				return 1316963652;
			}
			break;
		case -1427844561:
			if (iParam2 == 1)
			{
				return -411919020;
			}
			else
			{
				return -1656161562;
			}
			break;
		case -998653403:
			if (iParam2 == 1)
			{
				return -777288672;
			}
			else
			{
				return -1653716830;
			}
			break;
		case -547357240:
		case 491620790:
		case 888613388:
			if (iParam2 == 1)
			{
				return 1341689645;
			}
			else
			{
				return -2059037310;
			}
			break;
		case -764925634:
		case -518676029:
		case -21336386:
			if (iParam2 == 1)
			{
				return 2110273088;
			}
			else
			{
				return -1256102478;
			}
			break;
		case -946474842:
			if (iParam2 == 1)
			{
				return -1288369533;
			}
			else
			{
				return -1810346437;
			}
			break;
		case -1363455176:
			if (iParam2 == 1)
			{
				return 559815433;
			}
			else
			{
				return 545602543;
			}
			break;
		case 234935858:
			if (iParam2 == 1)
			{
				return 977951227;
			}
			else
			{
				return 1629707044;
			}
			break;
		case 395345271:
			if (iParam2 == 1)
			{
				return 89462976;
			}
			else
			{
				return 1295654965;
			}
			break;
		case -1049737813:
			if (iParam2 == 1)
			{
				return -1909301662;
			}
			else
			{
				return 1069740553;
			}
			break;
		case -143561573:
			if (iParam2 == 1)
			{
				return -1139750351;
			}
			else
			{
				return -449932244;
			}
			break;
		case -1099435331:
			if (iParam2 == 1)
			{
				return 184175481;
			}
			else
			{
				return 1863951382;
			}
			break;
		case -2058116954:
			if (iParam2 == 1)
			{
				return 1164479228;
			}
			else
			{
				return 465359925;
			}
			break;
		case -581264978:
			if (iParam2 == 1)
			{
				return 935639802;
			}
			else
			{
				return 768799230;
			}
			break;
		case -1851619259:
			if (iParam2 == 1)
			{
				return 633525360;
			}
			else
			{
				return -312751742;
			}
			break;
		case -1055590463:
			if (iParam2 == 1)
			{
				return 746264043;
			}
			else
			{
				return 942504103;
			}
			break;
		case 725092441:
		case 1202456973:
			if (iParam2 == 1)
			{
				return -1751536989;
			}
			else
			{
				return -334051008;
			}
			break;
		case -2087684184:
			if (iParam2 == 1)
			{
				return 1612083342;
			}
			else
			{
				return -1360421905;
			}
			break;
		case -1771094723:
			if (iParam2 == 1)
			{
				return 500704149;
			}
			else
			{
				return 1603220402;
			}
			break;
		case -117895552:
			if (iParam2 == 1)
			{
				return 311774207;
			}
			else
			{
				return 1761303658;
			}
			break;
		case 288450344:
			if (iParam2 == 1)
			{
				return 2390170;
			}
			else
			{
				return -1827589699;
			}
			break;
		case -1914955935:
			if (iParam2 == 1)
			{
				return -1372762125;
			}
			else
			{
				return -1302010630;
			}
			break;
		case 848629876:
			if (iParam2 == 1)
			{
				return -1819285714;
			}
			else
			{
				return -1310085735;
			}
			break;
		case -439919843:
			if (iParam2 == 1)
			{
				return 781175185;
			}
			else
			{
				return -1866392966;
			}
			break;
		case -377162693:
			if (iParam2 == 1)
			{
				return -436635592;
			}
			else
			{
				return 1489728350;
			}
			break;
		case 330512330:
			if (iParam2 == 1)
			{
				return -971017472;
			}
			else
			{
				return 760166198;
			}
			break;
		case 595771513:
			if (iParam2 == 1)
			{
				return -1925555109;
			}
			else
			{
				return -1518144336;
			}
			break;
		case -391309265:
			if (iParam2 == 1)
			{
				return -856016756;
			}
			else
			{
				return -463149499;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_141(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_142(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_82(vector3 vParam0, int iParam3)
{
	if (func_143(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_144(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_83(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85(int iParam0)
{
	if (!func_145(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

bool func_86(int iParam0)
{
	iVar0 = func_146(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_147(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_148(iParam0))
	{
		return false;
	}
	if (func_149(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_150(iParam0, 1)) || func_151(32768))
	{
		if (!func_150(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_152())
	{
		return false;
	}
	return true;
}

void func_90(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_91(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_92(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_153((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_93(int iParam0)
{
	if (func_64() != -1)
	{
		return 0;
	}
	if (!func_154(iParam0))
	{
		return 0;
	}
	return func_155((*Global_1347702)[iParam0]->f_15);
}

bool func_94(int iParam0)
{
	if (func_64() != -1)
	{
		return false;
	}
	if (!func_154(iParam0))
	{
		return false;
	}
	return func_86((*Global_1347702)[iParam0]->f_15);
}

bool func_95(int iParam0)
{
	if (func_64() != -1)
	{
		return false;
	}
	if ((is_thread_active((*Global_1347702)[iParam0]->f_42, false) && !func_86((*Global_1347702)[iParam0]->f_15)) && !func_156((*Global_1347702)[iParam0]->f_13, 4))
	{
		return true;
	}
	return false;
}

int func_96(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_157(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_97()
{
	return 3;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_31[uParam0->f_618]->f_4 = &uParam0->f_572[iParam1];
	uParam0->f_31[uParam0->f_618]->f_5 = 0;
	uParam0->f_31[uParam0->f_618]->f_17 = { func_158(iParam1, iParam2) };
	uParam0->f_31[uParam0->f_618]->f_23 = func_159(iParam1, iParam2);
	uParam0->f_31[uParam0->f_618]->f_26 = iParam1;
	uParam0->f_31[uParam0->f_618]->f_27 = iParam2;
	if (&uParam0->f_580[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 0;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_EXC", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_160() };
	}
	else if (&uParam0->f_580[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 1;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_FUR", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_161() };
	}
	else if (&uParam0->f_580[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 2;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_KLR", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_162() };
	}
	else if (&uParam0->f_580[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 3;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_BLD", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_163() };
	}
	else if (&uParam0->f_580[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 4;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_BRK", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_164() };
	}
	else if (&uParam0->f_580[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618]->f_8 = 5;
		StringCopy(&(uParam0->f_31[uParam0->f_618]->f_31), "ATZ_INS_TRB", 16);
		uParam0->f_31[uParam0->f_618]->f_33 = { func_165() };
	}
	if (&uParam0->f_588[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 0;
	}
	else if (&uParam0->f_588[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 1;
	}
	else if (&uParam0->f_588[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 2;
	}
	else if (&uParam0->f_588[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 3;
	}
	else if (&uParam0->f_588[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 4;
	}
	else if (&uParam0->f_588[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618]->f_6 = 5;
	}
	if (iParam1 == 0)
	{
		uParam0->f_31[uParam0->f_618]->f_13 = 1;
		uParam0->f_31[uParam0->f_618]->f_15 = 1;
		func_166(&(uParam0->f_31[uParam0->f_618]->f_10), uParam0->f_31[uParam0->f_618]->f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
		if (_does_volume_exist(uParam0->f_31[uParam0->f_618]->f_10))
		{
			func_167(uParam0->f_31[uParam0->f_618]->f_10, 1);
		}
	}
	if (iParam1 + 1 < func_97())
	{
		uParam0->f_31[uParam0->f_618]->f_20 = { func_158(iParam1 + 1, iParam2) };
	}
	else
	{
		uParam0->f_31[uParam0->f_618]->f_20 = { func_168(iParam2) };
	}
}

float func_99(int iParam0)
{
	return func_169(0, iParam0);
}

int func_100(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_170(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_101(var uParam0)
{
	_set_ped_scale(uParam0->f_12, uParam0->f_12.f_4);
	_0xfca8fb9e15fa80d3(uParam0->f_12, func_171());
	_0x543dfe14be720027(player_id(), uParam0->f_12, 0);
	_0x8b6f0f59b1b99801(uParam0->f_12, 2);
	set_ped_config_flag(uParam0->f_12, 305, true);
	set_ped_config_flag(uParam0->f_12, 306, true);
	set_ped_config_flag(uParam0->f_12, 186, true);
	set_ped_config_flag(uParam0->f_12, 465, true);
	_0xdc0a1f0ecec9f0c0(uParam0->f_12, 1E+08f);
	set_blocking_of_non_temporary_events(uParam0->f_12, true);
	set_entity_can_be_damaged(uParam0->f_12, false);
	set_entity_visible(uParam0->f_12, false);
	freeze_entity_position(uParam0->f_12, true);
	set_ped_can_be_targetted(uParam0->f_12, false);
	set_animal_tuning_bool_param(uParam0->f_12, 34, true);
	set_animal_tuning_float_param(uParam0->f_12, 112, 100f);
	set_animal_tuning_float_param(uParam0->f_12, 81, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 82, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 85, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 83, 10f);
	set_animal_tuning_float_param(uParam0->f_12, 84, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 89, 10f);
	set_animal_tuning_float_param(uParam0->f_12, 90, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 105, 10f);
	set_animal_tuning_float_param(uParam0->f_12, 106, 0f);
	set_animal_tuning_float_param(uParam0->f_12, 78, 20f);
	uParam0->f_620 = 1;
	if (uParam0->f_1 == 2)
	{
		if (*uParam0 == 15)
		{
			set_animal_tuning_float_param(uParam0->f_12, 137, 0f);
			set_animal_tuning_float_param(uParam0->f_12, 138, 0f);
			set_animal_tuning_bool_param(uParam0->f_12, 39, true);
			_0x706b434fefad6a24(1f);
			_0xa881f5c77a560906(3f);
		}
		set_animal_tuning_float_param(uParam0->f_12, 139, 0.75f);
		set_animal_tuning_float_param(uParam0->f_12, 88, 50f);
		set_animal_tuning_float_param(uParam0->f_12, 91, 40f);
		set_animal_tuning_float_param(uParam0->f_12, 10, 30f);
		set_animal_tuning_float_param(uParam0->f_12, 74, 1f);
		set_animal_tuning_bool_param(uParam0->f_12, 32, true);
		set_animal_tuning_bool_param(uParam0->f_12, 54, true);
		set_animal_tuning_bool_param(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 3)
	{
		set_animal_tuning_float_param(uParam0->f_12, 139, 0.75f);
		set_animal_tuning_float_param(uParam0->f_12, 88, 50f);
		set_animal_tuning_float_param(uParam0->f_12, 91, 40f);
		set_animal_tuning_float_param(uParam0->f_12, 10, 30f);
		set_animal_tuning_float_param(uParam0->f_12, 74, 1f);
		set_animal_tuning_bool_param(uParam0->f_12, 16, false);
		set_animal_tuning_bool_param(uParam0->f_12, 12, true);
		set_animal_tuning_bool_param(uParam0->f_12, 32, true);
		set_animal_tuning_bool_param(uParam0->f_12, 54, true);
		set_animal_tuning_bool_param(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 1)
	{
		set_animal_tuning_float_param(uParam0->f_12, 74, 0f);
	}
	if (!is_string_null_or_empty(uParam0->f_678))
	{
		add_entity_to_audio_mix_group(uParam0->f_12, uParam0->f_678, 0f);
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

int func_103(var uParam0)
{
	return uParam0;
}

Vector3 func_104(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_172(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

char* func_106(var uParam0)
{
	return uParam0;
}

float func_107(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_173(vVar0, vParam1);
}

float func_108(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_173(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_109()
{
	if (_is_ped_carrying(Global_35) || func_174(Global_35))
	{
		return true;
	}
	return false;
}

int func_110(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_175(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_176(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_111(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_112(var uParam0, int iParam1)
{
	iVar0 = func_84(*uParam0);
	if (does_entity_exist(iParam1))
	{
		if (_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
		{
			_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)
{
	if (bParam1 && !func_83(iParam0))
	{
		return false;
	}
	iVar0 = func_84(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_114(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (bParam1)
	{
		func_177(iParam0, 4);
		func_178(iVar0, 1);
		func_179(iVar0, 1);
	}
	else
	{
		func_180(iParam0, 4);
		func_179(iVar0, 0);
	}
}

void func_115(var uParam0, var uParam1)
{
	iVar1 = func_30();
	iVar2 = 210;
	fVar3 = (uParam0->f_9 + 20f);
	if (uParam0->f_614 == 0)
	{
		uParam0->f_615 = uParam1;
		uParam0->f_616 = uParam1;
		uParam0->f_12.f_10 = { func_168(uParam0->f_615) };
		uParam0->f_12.f_16 = { func_168(uParam0->f_615) };
		uParam0->f_4 = _create_volume_cylinder(uParam0->f_12.f_10, 0f, 0f, 0f, 50f, 50f, 50f);
		uParam0->f_5 = func_181(uParam0->f_4, 0, 0, 0);
		func_182(uParam0);
		if (!does_blip_exist(uParam0->f_6))
		{
			uParam0->f_6 = _blip_add_for_radius(-108658760, uParam0->f_627, uParam0->f_9);
			set_blip_name_from_text_file(uParam0->f_6, "ATZ_AREA_BLIP");
		}
		if (!is_string_null_or_empty(uParam0->f_677))
		{
			set_ambient_zone_state(uParam0->f_677, true, true);
		}
		func_183(-1, 0, 0, 0, 0);
		func_184();
		func_185(iVar2, 0, 1);
		func_28(uParam0->f_3);
		uParam0->f_2 = _create_volume_cylinder_with_custom_name(uParam0->f_627, 0f, 0f, 0f, fVar3, fVar3, fVar3, "HuntingZoneRestriction");
		func_96(uParam0->f_3, "Hunting Zone Target", 0, 0, 0, 0, -1082130432);
		uParam0->f_622 = 1;
	}
	uParam0->f_614++;
	if (!uParam0->f_614 >= func_97())
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (uParam0->f_614 == uParam0->f_31[iVar0]->f_26 && uParam0->f_615 == uParam0->f_31[iVar0]->f_27)
			{
				func_166(&(uParam0->f_31[iVar0]->f_10), uParam0->f_31[iVar0]->f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
				if (_does_volume_exist(uParam0->f_31[iVar0]->f_10))
				{
					func_167(uParam0->f_31[iVar0]->f_10, 1);
				}
				uParam0->f_31[iVar0]->f_13 = 1;
				uParam0->f_31[iVar0]->f_15 = 1;
			}
			else if (uParam0->f_31[iVar0]->f_14 == 0)
			{
				uParam0->f_31[iVar0]->f_13 = 0;
				uParam0->f_31[iVar0]->f_15 = 0;
			}
			iVar0++;
		}
	}
	else
	{
		uParam0->f_621 = 1;
		if (!uParam0->f_624)
		{
			func_121(uParam0);
			uParam0->f_624 = 1;
		}
	}
}

bool func_116(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
			func_41(Global_35, "HUNTING_MEDIUM", 1017772929, 0, 0, 0, 0, 1);
		}
		else if (iParam0 == 1)
		{
			func_41(Global_35, "HUNTING_NEAR", 1017772929, 0, 0, 0, 0, 1);
		}
	}
	else if (iParam0 == 0)
	{
		func_41(Global_35, "HUNTING_FAR", 1017772929, 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		func_41(Global_35, "HUNTING_MEDIUM", 1017772929, 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 2)
	{
		func_41(Global_35, "HUNTING_NEAR", 1017772929, 0, 0, 0, 0, 1);
	}
}

int func_118(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return 0;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (_0x29ba9f78321e5a6c(iParam0, sParam1, iParam2, fParam3, iParam4, iParam5, 0, 0, 0, fParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

bool func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 8:
		case 9:
		case 11:
		case 13:
		case 15:
			return true;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
		case 12:
		case 14:
			return false;
		default:
			break;
	}
	return false;
}

void func_121(var uParam0)
{
	if (does_entity_exist(uParam0->f_12))
	{
		func_186(uParam0->f_12, uParam0->f_12.f_10, func_99(uParam0->f_615), 2, 1073741824);
		set_blocking_of_non_temporary_events(uParam0->f_12, false);
		set_entity_visible(uParam0->f_12, true);
		set_ped_can_be_targetted(uParam0->f_12, true);
		set_entity_can_be_damaged(uParam0->f_12, true);
		freeze_entity_position(uParam0->f_12, false);
		task_wander_in_area(uParam0->f_12, uParam0->f_12.f_10, 10f, 1.5f, 3f, 1);
	}
}

void func_122(var uParam0)
{
	iVar0 = func_188(0, func_187(), uParam0->f_616);
	uParam0->f_616 = iVar0;
	uParam0->f_12.f_16 = { func_168(iVar0) };
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_124()
{
	return Global_1894899->f_2;
}

bool func_125(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_126(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<10> func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_129(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_189(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_130(bool bParam0)
{
	return func_132(1328661203, func_190(), -1591664384, bParam0);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_132(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_127(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_133(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_133(bool bParam0)
{
	if (func_64() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar3 = func_191(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_192(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (_item_database_get_fits_slot_info(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_135(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!func_193(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_133(bParam3), iParam0);
}

int func_136(int iParam0, bool bParam1)
{
	if (func_194(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_133(bParam1), iParam0, 0);
}

int func_137(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (func_195(iParam0, 173360570))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

bool func_139(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_196(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_193(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_133(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_197(1);
	}
}

void func_142(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_141(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_197(1);
	}
}

bool func_143(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_144(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_145(int iParam0)
{
	return func_175(iParam0, 2);
}

int func_146(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_199(iParam0);
}

bool func_147(int iParam0, int iParam1)
{
	if (func_64() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_148(int iParam0)
{
	if (func_64() != -1)
	{
		if (func_150(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_150(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_149(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_150(iParam0, 65536) && !func_150(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_150(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_150(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_150(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_151(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_152()
{
	return Global_1905944->f_5694;
}

int func_153(int iParam0, bool bParam1)
{
	switch (func_146(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_154(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_155(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_199(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_157(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_143(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_200(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_201(iVar0, bParam8);
	return iVar0;
}

Vector3 func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_202(1, iParam1) };
			break;
		case 1:
			vVar0 = { func_202(2, iParam1) };
			break;
		case 2:
			vVar0 = { func_202(3, iParam1) };
			break;
	}
	return vVar0;
}

float func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = func_169(1, iParam1);
			break;
		case 1:
			fVar0 = func_169(2, iParam1);
			break;
		case 2:
			fVar0 = func_169(3, iParam1);
			break;
	}
	return fVar0;
}

Vector3 func_160()
{
	return func_203("ATZ_INS_EXC_BU");
}

Vector3 func_161()
{
	return func_203("ATZ_INS_FUR_BU");
}

Vector3 func_162()
{
	return func_203("ATZ_INS_KLR");
}

Vector3 func_163()
{
	return func_203("ATZ_INS_BLD");
}

Vector3 func_164()
{
	return func_203("ATZ_INS_BRK");
}

Vector3 func_165()
{
	return func_203("ATZ_INS_TRB");
}

void func_166(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_167(int iParam0, int iParam1)
{
	if (func_204(iParam0))
	{
		return;
	}
	if (func_205(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

Vector3 func_168(int iParam0)
{
	return func_202(0, iParam0);
}

float func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -82f;
				case 1:
					return -78f;
				case 2:
					return -38f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -86f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
			}
			break;
	}
	return 0f;
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_206(iParam1))
		{
			func_207(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_208(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_209(iParam0, 0);
			bVar0 = true;
		}
		func_210(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_171()
{
	return 773716431;
}

bool func_172(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_173(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_174(int iParam0)
{
	return (func_211(iParam0, 4) || func_211(iParam0, 5));
}

bool func_175(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_178(iParam0, 1);
	func_179(iParam0, 1);
	func_180(iParam0, 128);
}

void func_177(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_178(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_175(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

var func_181(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_212(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_182(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (uParam0->f_31[iVar0]->f_26 == 0)
		{
			if (_does_volume_exist(uParam0->f_31[iVar0]->f_10))
			{
				func_119(uParam0->f_31[iVar0]->f_10);
			}
			if (does_blip_exist(&(uParam0->f_31[iVar0])))
			{
				remove_blip(uParam0->f_31[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_183(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_213() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_214(iVar1) && !func_215(iVar1, iParam2)) && (!bParam3 || !func_216(iVar1))) && (!bParam4 || !func_217(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_218(iVar0);
			}
		}
		iVar0++;
	}
}

void func_184()
{
	if (!func_214(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_219(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_185(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_220(iParam0, iParam1, bParam2);
}

void func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_103(Global_35) && is_player_teleport_active())
	{
	}
	if (func_221(iParam0))
	{
		if (func_222(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_223(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_223(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_223(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_223(iParam5, 129))
	{
		if (func_223(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_223(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_223(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_223(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_221(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_223(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_223(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

int func_187()
{
	return 3;
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_224())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_55(func_224(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_189(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

struct<4> func_190()
{
	return Var0;
}

int func_191(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_192(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_fits_slot_count(iVar0);
}

bool func_193(bool bParam0)
{
	if (func_64() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_133(bParam0));
}

bool func_194(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_195(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_225(&iParam0);
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	if (!func_193(0))
	{
		bParam3 = true;
	}
	if (func_226(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_227(0) };
			Var4.f_9 = -1591664384;
			if (!func_228(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_229(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_230(iParam0, 1))
			{
				if (!func_228(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_229(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_231(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_135(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_232(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_133(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		func_233(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_234(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_199(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_200(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_201(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1889.565f, -2683.651f, 65.1969f;
				case 1:
					return -1970.393f, -2692.435f, 66.185f;
				case 2:
					return -1905.319f, -2674.156f, 65.1905f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2017.036f, -2738.402f, 69.0467f;
				case 1:
					return -1873.564f, -2703.457f, 65.6522f;
				case 2:
					return -2005.143f, -2649.597f, 66.1986f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1990.382f, -2699.347f, 66.3076f;
				case 1:
					return -1910.401f, -2637.6f, 64.1917f;
				case 2:
					return -1972.138f, -2676.272f, 65.2693f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1954.561f, -2696.5f, 66.2369f;
				case 1:
					return -1956.372f, -2642.887f, 65.1954f;
				case 2:
					return -1969.956f, -2716.733f, 67.2008f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_203(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_204(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_205(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_206(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_207(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_236(iParam0, iParam1))
		{
			if (func_237(iParam0, iParam1))
			{
				if (func_238(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_239(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_208(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_211(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_212(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_213()
{
	return Global_1310750->f_16037;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_215(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_216(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	if (func_240(64) && func_241(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_217(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_218(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_214(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_242(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_219(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_220(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

bool func_221(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_222(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_224()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_225(int iParam0)
{
	if (!func_127(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_243(iParam0) == -427144552;
}

struct<4> func_227(bool bParam0)
{
	iVar0 = func_133(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_132(923904168, func_130(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_132(923904168, func_130(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_132(923904168, func_130(bParam0), -740156546, 0);
}

bool func_228(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_232(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_229(int iParam0, var uParam1, int iParam2)
{
	if (func_244(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_230(int iParam0, bool bParam1)
{
	if (func_191(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_245(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_231(int iParam0, var uParam1, bool bParam2)
{
	if (!func_127(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_246(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_247((386 + iVar29), 1);
		if (func_228(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_229(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_232(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_132(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_133(bParam6), &Var0, 0);
	return uVar4;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_235(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_236(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_237(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_236(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_239(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_240(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_241(int iParam0)
{
	return func_215(iParam0, Global_1310750->f_16072 | 64);
}

void func_242(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_243(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_244(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_133(0);
	*uParam1 = { func_132(iParam0, func_227(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return func_249(iParam0);
}

struct<5> func_246(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_130(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_243(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_132(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_227(bParam1) };
			if (bParam2 && func_230(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_228(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_228(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_229(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_250(bParam1) };
			switch (func_191(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_251(iParam0, -1823706425))
			{
				Var0 = { func_132(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_251(iParam0, -1483207246))
			{
				Var0 = { func_132(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_252(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_249(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

struct<4> func_250(bool bParam0)
{
	iVar0 = func_133(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_132(271701509, func_130(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_132(271701509, func_130(bParam0), 12999093, 0);
}

bool func_251(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_191(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_252(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_133(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

